#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_15(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_806809C0(void);
extern void fn_8068236C(void);
extern void fn_80682544(void);
extern void fn_8068446C(void);
extern void fn_80698A28(void);
extern void fn_80698EF0(void);
extern void fn_80698F30(void);
extern void fn_80699020(void);
extern void fn_806A7110(void);
extern void fn_806A7130(void);
extern void fn_806A72E0(void);
extern void fn_806A7400(void);
extern void fn_806A76B0(void);
extern void fn_806AD8F0(void);
extern void fn_806ADC80(void);
extern void fn_806ADFE0(void);
extern void fn_806AE2E0(void);
extern void fn_806AE4C0(void);
extern void fn_806AEAF0(void);
extern void fn_806AF670(void);
extern void fn_806CD3E0(void);
extern void fn_806CF0E0(void);
extern void fn_806CF130(void);
extern void fn_806CF1A0(void);
extern void fn_806CF1B0(void);
extern void fn_806CF1C0(void);
extern void fn_806CF250(void);
extern void fn_806CF2A0(void);
extern void fn_806D0060(void);
extern void fn_806D02E0(void);
extern void fn_806D0350(void);
extern void fn_806DA8D0(void);
extern void fn_806DAB30(void);
extern void fn_806DAC00(void);
extern void fn_806DAD50(void);
extern void fn_806DB050(void);
extern void fn_806DB0A0(void);
extern void fn_806DB220(void);
extern void fn_806DB310(void);
extern void fn_806DB3D0(void);
extern void fn_806DB460(void);
extern void fn_806DB730(void);
extern void fn_806F87A0(void);
extern void fn_806F8A60(void);
extern void fn_806F8A80(void);
extern void fn_806F8B00(void);
extern void strchr(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807BD280[];
extern u8 lbl_807BD290[];
extern u8 lbl_807BD294[];
extern u8 lbl_807BD298[];
extern u8 lbl_807BD2C4[];
extern u8 lbl_807BD2F4[];
extern u8 lbl_807BD320[];
extern u8 lbl_807BD338[];
extern u8 lbl_807BD358[];
extern u8 lbl_807BD374[];
extern u8 lbl_807BD4D8[];
extern u8 lbl_807BD508[];
extern u8 lbl_8085FF60[];
extern u8 lbl_8085FF78[];
extern u8 lbl_8085FF7C[];

/* Small data declarations */

/* Function declarations */
void pad_03_806AB8A4_text(void);
void fn_806AB8B0(void);
void fn_806AB920(void);
void fn_806AB980(void);
void fn_806ABA10(void);
void fn_806ABB70(void);
void fn_806ABCC0(void);
void fn_806ABCF0(void);
void fn_806ABD00(void);
void fn_806ABE70(void);
void fn_806ABEE0(void);
void fn_806ABF40(void);
void fn_806ABF80(void);
void fn_806AC070(void);
void fn_806AC0A0(void);
void fn_806AC210(void);
void fn_806AC360(void);
void fn_806AC820(void);
void fn_806AC850(void);
void fn_806AC8F0(void);
void fn_806AC9E0(void);
void fn_806ACA80(void);
void fn_806ACB10(void);
void fn_806ACC80(void);
void fn_806ACCF0(void);
void fn_806ACDB0(void);
void fn_806ACE00(void);
void fn_806ACF20(void);
void fn_806ACF30(void);
void fn_806AD2B0(void);
void fn_806AD470(void);
void fn_806AD690(void);
void fn_806AD770(void);

asm void pad_03_806AB8A4_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806AB8B0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r5
    stw r30, 0x68(r1)
    mr r30, r4
    stw r29, 0x64(r1)
    mr r29, r3
    addi r3, r1, 0x8
    bl fn_80698EF0
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_80698F30
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_80699020
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806AB920(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    extsb r6, r6
    mr r9, r4
    stw r0, 0x14(r1)
    mr r7, r3
    mr r8, r6
    li r4, 0x1000
    stw r31, 0xc(r1)
    mr r31, r5
    lis r5, lbl_807BD280@ha
    mr r3, r31
    addi r5, r5, lbl_807BD280@l
    crclr 6
    bl fn_806809C0
    mr r3, r31
    bl strlen
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806AB980(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r30
    bl strchr
    extsb r6, r31
    lis r5, lbl_807BD280@ha
    mr r31, r3
    mr r7, r28
    mr r8, r6
    mr r9, r29
    addi r5, r5, lbl_807BD280@l
    li r4, 0x1000
    crclr 6
    bl fn_806809C0
    mr r3, r31
    bl strlen
    mr r3, r30
    bl strlen
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ABA10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    extsb r4, r6
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r5
    bl strchr
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806ABA10_000001B4
    li r3, -0x1
    b lbl_fn_806ABA10_000002A4
lbl_fn_806ABA10_000001B4:
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r30, 0x1
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806ABA10_000001F4
    mr r3, r28
    bl strlen
    add r3, r3, r30
    extsb r4, r31
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpw r4, r0
    beq lbl_fn_806ABA10_00000230
lbl_fn_806ABA10_000001F4:
    addi r3, r30, 0x1
    extsb r4, r31
    bl strchr
    cmpwi r3, 0x0
    bne lbl_fn_806ABA10_00000210
    li r3, -0x1
    b lbl_fn_806ABA10_000002A4
lbl_fn_806ABA10_00000210:
    extsb r4, r31
    addi r3, r3, 0x1
    bl strchr
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806ABA10_000001B4
    li r3, -0x1
    b lbl_fn_806ABA10_000002A4
lbl_fn_806ABA10_00000230:
    addi r3, r30, 0x1
    bl strchr
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806ABA10_0000024C
    li r3, -0x1
    b lbl_fn_806ABA10_000002A4
lbl_fn_806ABA10_0000024C:
    extsb r4, r31
    addi r3, r3, 0x1
    bl strchr
    cmpwi r3, 0x0
    beq lbl_fn_806ABA10_0000026C
    addi r0, r30, 0x1
    subf r31, r0, r3
    b lbl_fn_806ABA10_00000278
lbl_fn_806ABA10_0000026C:
    addi r3, r30, 0x1
    bl strlen
    mr r31, r3
lbl_fn_806ABA10_00000278:
    cmpwi r29, 0x0
    bne lbl_fn_806ABA10_00000288
    mr r3, r31
    b lbl_fn_806ABA10_000002A4
lbl_fn_806ABA10_00000288:
    mr r3, r29
    mr r5, r31
    addi r4, r30, 0x1
    bl fn_8068236C
    li r0, 0x0
    stbx r0, r29, r31
    mr r3, r31
lbl_fn_806ABA10_000002A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ABB70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_8085FF60@ha
    addi r31, r30, lbl_8085FF60@l
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8085FF60@l(r30)
    lwz r3, 0x4(r31)
    or. r0, r3, r0
    bne lbl_fn_806ABB70_00000394
    lwz r0, 0x8(r31)
    lwz r3, 0xc(r31)
    or. r0, r3, r0
    bne lbl_fn_806ABB70_00000394
    lwz r0, 0x10(r31)
    lwz r3, 0x14(r31)
    or. r0, r3, r0
    bne lbl_fn_806ABB70_00000394
    addi r3, r1, 0x8
    bl fn_80698A28
    bl OSGetTime
    lwz r6, 0xc(r1)
    lis r5, 0x100
    lwz r0, 0x8(r1)
    subi r9, r5, 0x1
    rotlwi r10, r6, 8
    lis r5, 0x27
    rlwimi r10, r0, 8, 0, 23
    lis r7, 0x6c08
    subi r0, r5, 0x613d
    slwi r8, r3, 24
    rlwimi r8, r4, 24, 8, 31
    lis r6, 0x5d59
    subi r3, r6, 0x749b
    subi r7, r7, 0x769b
    li r6, 0x0
    and r5, r10, r9
    slwi r4, r4, 24
    stw r8, 0x8(r1)
    or r4, r5, r4
    stw r4, 0xc(r1)
    stw r4, 0x4(r31)
    stw r8, lbl_8085FF60@l(r30)
    stw r7, 0xc(r31)
    stw r3, 0x8(r31)
    stw r0, 0x14(r31)
    stw r6, 0x10(r31)
lbl_fn_806ABB70_00000394:
    lis r10, lbl_8085FF60@ha
    cmpwi r29, 0x0
    addi r9, r10, lbl_8085FF60@l
    lwz r0, lbl_8085FF60@l(r10)
    lwz r6, 0xc(r9)
    lwz r4, 0x4(r9)
    mullw r3, r6, r0
    lwz r8, 0x14(r9)
    lwz r5, 0x8(r9)
    lwz r7, 0x10(r9)
    mullw r0, r6, r4
    addc r0, r8, r0
    stw r0, 0x4(r9)
    mulhwu r0, r6, r4
    mullw r4, r5, r4
    add r0, r0, r4
    add r0, r0, r3
    adde r3, r7, r0
    stw r3, lbl_8085FF60@l(r10)
    bne lbl_fn_806ABB70_000003E8
    b lbl_fn_806ABB70_000003F8
lbl_fn_806ABB70_000003E8:
    li r4, 0x0
    mulhwu r0, r3, r29
    mullw r3, r4, r29
    add r3, r0, r3
lbl_fn_806ABB70_000003F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ABCC0(void)
{
    nofralloc
    li r4, 0x0
    b lbl_fn_806ABCC0_0000042C
lbl_fn_806ABCC0_00000424:
    addi r3, r3, 0x2
    addi r4, r4, 0x1
lbl_fn_806ABCC0_0000042C:
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806ABCC0_00000424
    mr r3, r4
    blr
}

asm void fn_806ABCF0(void)
{
    nofralloc
    mr r6, r4
    li r4, 0x0
    li r5, 0x0
    b fn_806ABD00
}

asm void fn_806ABD00(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stw r31, 0x22c(r1)
    mr r31, r6
    stw r30, 0x228(r1)
    mr r30, r5
    stw r29, 0x224(r1)
    mr r29, r4
    addi r4, r1, 0xc
    bl fn_806AD690
    cmpwi r3, 0x0
    beq lbl_fn_806ABD00_00000588
    lwz r0, 0x10(r1)
    cmpwi r0, 0x6
    bne lbl_fn_806ABD00_00000530
    cmpwi r29, 0x0
    beq lbl_fn_806ABD00_000004E4
    lis r3, lbl_807BD290@ha
    addi r4, r1, 0x8
    addi r3, r3, lbl_807BD290@l
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806ABA10
    cmpwi r3, 0x0
    ble lbl_fn_806ABD00_000004DC
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xa
    bl fn_8068446C
    stb r3, 0x0(r29)
    b lbl_fn_806ABD00_000004E4
lbl_fn_806ABD00_000004DC:
    li r0, 0x0
    stb r0, 0x0(r29)
lbl_fn_806ABD00_000004E4:
    cmpwi r30, 0x0
    beq lbl_fn_806ABD00_00000550
    lis r3, lbl_807BD294@ha
    addi r4, r1, 0x8
    addi r3, r3, lbl_807BD294@l
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806ABA10
    cmpwi r3, 0x0
    ble lbl_fn_806ABD00_00000524
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xa
    bl fn_8068446C
    stb r3, 0x0(r30)
    b lbl_fn_806ABD00_00000550
lbl_fn_806ABD00_00000524:
    li r0, 0x0
    stb r0, 0x0(r30)
    b lbl_fn_806ABD00_00000550
lbl_fn_806ABD00_00000530:
    cmpwi r29, 0x0
    beq lbl_fn_806ABD00_00000540
    li r0, 0x0
    stb r0, 0x0(r29)
lbl_fn_806ABD00_00000540:
    cmpwi r30, 0x0
    beq lbl_fn_806ABD00_00000550
    li r0, 0x0
    stb r0, 0x0(r30)
lbl_fn_806ABD00_00000550:
    cmpwi r31, 0x0
    beq lbl_fn_806ABD00_00000564
    mr r3, r31
    addi r4, r1, 0x114
    bl strcpy
lbl_fn_806ABD00_00000564:
    lwz r0, 0x10(r1)
    addi r3, r1, 0xc
    clrlwi r31, r0, 24
    bl fn_806CD3E0
    cmpwi r3, 0x0
    beq lbl_fn_806ABD00_00000580
    li r31, 0x2
lbl_fn_806ABD00_00000580:
    mr r3, r31
    b lbl_fn_806ABD00_000005AC
lbl_fn_806ABD00_00000588:
    cmpwi r29, 0x0
    beq lbl_fn_806ABD00_00000598
    li r0, 0x0
    stb r0, 0x0(r29)
lbl_fn_806ABD00_00000598:
    cmpwi r30, 0x0
    beq lbl_fn_806ABD00_000005A8
    li r0, 0x0
    stb r0, 0x0(r30)
lbl_fn_806ABD00_000005A8:
    li r3, 0x0
lbl_fn_806ABD00_000005AC:
    lwz r0, 0x234(r1)
    lwz r31, 0x22c(r1)
    lwz r30, 0x228(r1)
    lwz r29, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_806ABE70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8085FF78@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8085FF78@l(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806ABE70_000005FC
    bl fn_806AF670
    cmpwi r3, 0x0
    bne lbl_fn_806ABE70_00000604
lbl_fn_806ABE70_000005FC:
    li r3, 0x0
    b lbl_fn_806ABE70_0000061C
lbl_fn_806ABE70_00000604:
    mr r5, r31
    li r3, -0x1
    li r4, 0x0
    bl fn_806ACE00
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_fn_806ABE70_0000061C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806ABEE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8085FF78@ha
    stw r0, 0x14(r1)
    lwz r4, lbl_8085FF78@l(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806ABEE0_00000670
    lwz r4, 0x4(r4)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806ABEE0_00000670
    cmpwi r3, 0x0
    bne lbl_fn_806ABEE0_00000678
lbl_fn_806ABEE0_00000670:
    li r3, 0x0
    b lbl_fn_806ABEE0_00000684
lbl_fn_806ABEE0_00000678:
    addi r4, r4, 0x4b8
    bl strcpy
    li r3, 0x1
lbl_fn_806ABEE0_00000684:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806ABF40(void)
{
    nofralloc
    lis r3, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806ABF40_000006C8
    lbz r3, 0x22(r3)
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_806ABF40_000006C8
    li r3, 0x0
    blr
lbl_fn_806ABF40_000006C8:
    li r3, 0x1
    blr
}

asm void fn_806ABF80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8085FF78@ha
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8085FF78@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806ABF80_00000780
    bl fn_806AF670
    cmpwi r3, 0x0
    beq lbl_fn_806ABF80_00000780
    bl fn_806AEAF0
    cmpwi r3, 0x0
    beq lbl_fn_806ABF80_00000780
    bl fn_806AEAF0
    mr r4, r29
    bl fn_806D0060
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_806ABF80_00000780
    cmpwi r3, -0x1
    beq lbl_fn_806ABF80_00000780
    lwz r3, lbl_8085FF78@l(r31)
    mr r4, r30
    lwz r3, 0x4(r3)
    bl fn_806DB310
    cmpwi r3, 0x0
    beq lbl_fn_806ABF80_00000780
    lwz r3, lbl_8085FF78@l(r31)
    mr r4, r30
    lwz r3, 0x4(r3)
    bl fn_806DB3D0
    lis r4, lbl_807BD298@ha
    li r3, 0x4
    addi r4, r4, lbl_807BD298@l
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806ABF80_00000794
lbl_fn_806ABF80_00000780:
    lis r4, lbl_807BD2C4@ha
    li r3, 0x4
    addi r4, r4, lbl_807BD2C4@l
    crclr 6
    bl fn_806A76B0
lbl_fn_806ABF80_00000794:
    mr r3, r29
    li r4, 0x0
    li r5, 0xc
    bl memset
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806AC070(void)
{
    nofralloc
    lis r5, lbl_8085FF78@ha
    lwz r6, lbl_8085FF78@l(r5)
    cmpwi r6, 0x0
    bne lbl_fn_806AC070_000007E4
    li r3, 0x0
    blr
lbl_fn_806AC070_000007E4:
    stw r3, 0x48(r6)
    li r3, 0x1
    lwz r5, lbl_8085FF78@l(r5)
    stw r4, 0x4c(r5)
    blr
}

asm void fn_806AC0A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8085FF7C@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, lbl_8085FF7C@l(r5)
    cmpwi r0, 0x2
    bne lbl_fn_806AC0A0_0000084C
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806AC0A0_0000084C
    lis r29, lbl_8085FF78@ha
    lwz r4, lbl_8085FF78@l(r29)
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_806AC0A0_00000854
lbl_fn_806AC0A0_0000084C:
    li r3, 0x0
    b lbl_fn_806AC0A0_00000948
lbl_fn_806AC0A0_00000854:
    lwz r3, 0x24(r4)
    lwz r28, 0x28(r4)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_806AC0A0_00000918
    beq cr1, lbl_fn_806AC0A0_00000920
    lis r4, 0xffff
    li r3, 0x9
    subi r4, r4, 0x1179
    bl fn_806A7130
    lwz r4, lbl_8085FF78@l(r29)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_806AC0A0_0000089C
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806AC0A0_0000089C
    li r3, 0x1
lbl_fn_806AC0A0_0000089C:
    cmpwi r3, 0x0
    beq lbl_fn_806AC0A0_000008EC
    lwz r4, 0x60(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806AC0A0_000008CC
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    lis r3, lbl_8085FF78@ha
    li r0, 0x0
    lwz r3, lbl_8085FF78@l(r3)
    stw r0, 0x60(r3)
lbl_fn_806AC0A0_000008CC:
    lis r4, lbl_8085FF78@ha
    li r3, 0x9
    lwz r5, lbl_8085FF78@l(r4)
    lwz r12, 0x30(r5)
    lbz r4, 0x21(r5)
    lwz r5, 0x34(r5)
    mtctr r12
    bctrl
lbl_fn_806AC0A0_000008EC:
    lis r4, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r4)
    cmpwi r3, 0x0
    beq lbl_fn_806AC0A0_00000920
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r3, lbl_8085FF78@l(r4)
    stb r0, 0x22(r3)
    lwz r3, lbl_8085FF78@l(r4)
    stb r0, 0x23(r3)
    b lbl_fn_806AC0A0_00000920
lbl_fn_806AC0A0_00000918:
    addi r0, r3, 0x1
    stw r0, 0x24(r4)
lbl_fn_806AC0A0_00000920:
    lis r8, fn_806AE2E0@ha
    mr r4, r28
    mr r7, r30
    mr r9, r31
    addi r8, r8, fn_806AE2E0@l
    li r3, 0x0
    li r5, 0x3
    li r6, 0x0
    bl fn_806F8A80
    li r3, 0x1
lbl_fn_806AC0A0_00000948:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806AC210(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    lis r31, lbl_8085FF78@ha
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r7
    stw r3, lbl_8085FF78@l(r31)
    stw r0, 0x0(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r4, 0x4(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x8(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x14(r3)
    stw r0, 0x10(r3)
    stw r7, 0x18(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r6, 0x1c(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stb r0, 0x20(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stb r0, 0x21(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stb r0, 0x22(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stb r0, 0x23(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x24(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x28(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r5, 0x2c(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x30(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x34(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x38(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x3c(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x40(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x44(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x48(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x4c(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x50(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x54(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x58(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x5c(r3)
    lwz r3, lbl_8085FF78@l(r31)
    stw r0, 0x60(r3)
    b lbl_fn_806AC210_00000A8C
lbl_fn_806AC210_00000A70:
    lwz r3, lbl_8085FF78@l(r31)
    li r4, 0x0
    lwz r0, 0x1c(r3)
    add r3, r0, r30
    bl fn_806CF2A0
    addi r30, r30, 0xc
    addi r29, r29, 0x1
lbl_fn_806AC210_00000A8C:
    cmpw r29, r28
    blt lbl_fn_806AC210_00000A70
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806AC360(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_8085FF78@ha
    addi r31, r31, lbl_8085FF78@l
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AC360_00000F58
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806AC360_00000AF4
    b lbl_fn_806AC360_00000F58
lbl_fn_806AC360_00000AF4:
    lwz r3, 0x0(r31)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806AC360_00000BA8
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AC360_00000F58
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AC360_00000F58
    bl OSGetTime
    lis r5, 0x8000
    lwz r28, 0x0(r31)
    lwz r0, 0xf8(r5)
    lis r5, 0x1062
    lwz r7, 0x14(r28)
    addi r5, r5, 0x4dd3
    srwi r0, r0, 2
    lwz r6, 0x10(r28)
    mulhwu r0, r5, r0
    subfc r4, r7, r4
    subfe r3, r6, r3
    li r5, 0x0
    srwi r6, r0, 6
    bl __div2i
    li r5, 0x0
    li r6, 0x12c
    xoris r0, r3, 0x8000
    xoris r5, r5, 0x8000
    subfc r3, r6, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_806AC360_00000F58
    lwz r3, 0x8(r28)
    addi r0, r3, 0x1
    stw r0, 0x8(r28)
    lwz r3, 0x0(r31)
    lwz r3, 0x4(r3)
    bl fn_806DA8D0
    bl OSGetTime
    lwz r5, 0x0(r31)
    stw r4, 0x14(r5)
    stw r3, 0x10(r5)
    b lbl_fn_806AC360_00000F58
lbl_fn_806AC360_00000BA8:
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806AC360_00000BC0
    bl fn_806F8A60
    cmpwi r3, 0x0
    beq lbl_fn_806AC360_00000C10
lbl_fn_806AC360_00000BC0:
    li r0, 0x1
    li r30, 0x0
    stw r0, 0x8(r31)
    stw r30, 0xc(r31)
    bl fn_806F8B00
    cmpwi r3, 0x0
    bne lbl_fn_806AC360_00000BF4
    lis r4, lbl_807BD2F4@ha
    stw r30, 0x8(r31)
    li r3, 0x8
    addi r4, r4, lbl_807BD2F4@l
    crclr 6
    bl fn_806A76B0
lbl_fn_806AC360_00000BF4:
    lwz r0, 0xc(r31)
    li r3, 0x0
    stw r3, 0x8(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806AC360_00000C10
    stw r3, 0xc(r31)
    bl fn_806F87A0
lbl_fn_806AC360_00000C10:
    lwz r3, 0x0(r31)
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AC360_00000D38
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AC360_00000D38
    li r29, 0x0
    bl OSGetTime
    lis r5, 0x8000
    lwz r30, 0x0(r31)
    lwz r0, 0xf8(r5)
    lis r5, 0x1062
    lwz r7, 0x14(r30)
    addi r5, r5, 0x4dd3
    srwi r0, r0, 2
    lwz r6, 0x10(r30)
    mulhwu r0, r5, r0
    subfc r4, r7, r4
    subfe r3, r6, r3
    li r5, 0x0
    srwi r6, r0, 6
    bl __div2i
    li r5, 0x0
    li r6, 0x12c
    xoris r0, r3, 0x8000
    xoris r5, r5, 0x8000
    subfc r3, r6, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_806AC360_00000CBC
    lwz r3, 0x8(r30)
    addi r0, r3, 0x1
    stw r0, 0x8(r30)
    lwz r3, 0x0(r31)
    lwz r3, 0x4(r3)
    bl fn_806DA8D0
    mr r29, r3
    bl OSGetTime
    lwz r30, 0x0(r31)
    stw r4, 0x14(r30)
    stw r3, 0x10(r30)
lbl_fn_806AC360_00000CBC:
    cmpwi r29, 0x0
    bne lbl_fn_806AC360_00000F58
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806AC360_00000F58
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806AC360_00000D38
    lbz r3, 0x22(r30)
    cmplwi r3, 0x3
    beq lbl_fn_806AC360_00000D38
    lwz r0, 0x8(r30)
    cmplwi r0, 0x7
    ble lbl_fn_806AC360_00000D38
    cmplwi r3, 0x1
    bgt lbl_fn_806AC360_00000D0C
    lwz r4, 0x0(r31)
    lwz r3, 0x1c(r4)
    lwz r4, 0x18(r4)
    bl fn_806ACF30
lbl_fn_806AC360_00000D0C:
    lwz r4, 0x0(r31)
    lbz r3, 0x20(r4)
    lwz r0, 0x18(r4)
    cmpw r3, r0
    blt lbl_fn_806AC360_00000D38
    li r0, 0x3
    stb r0, 0x22(r4)
    lwz r4, 0x0(r31)
    lbz r3, 0x23(r4)
    addi r0, r3, 0x1
    stb r0, 0x23(r4)
lbl_fn_806AC360_00000D38:
    lwz r3, 0x0(r31)
    lbz r0, 0x23(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806AC360_00000F58
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AC360_00000F4C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AC360_00000F4C
    li r30, 0x0
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_806AC360_00000D90
lbl_fn_806AC360_00000D70:
    lwz r0, 0x1c(r3)
    add r3, r0, r28
    bl fn_806CF1B0
    cmpwi r3, 0x3
    bne lbl_fn_806AC360_00000D88
    addi r30, r30, 0x1
lbl_fn_806AC360_00000D88:
    addi r28, r28, 0xc
    addi r27, r27, 0x1
lbl_fn_806AC360_00000D90:
    lwz r3, 0x0(r31)
    lwz r0, 0x18(r3)
    cmpw r27, r0
    blt lbl_fn_806AC360_00000D70
    cmpwi r30, 0x0
    bne lbl_fn_806AC360_00000DDC
    li r0, 0x0
    stb r0, 0x23(r3)
    li r3, 0x0
    lwz r5, 0x0(r31)
    lwz r12, 0x30(r5)
    lbz r4, 0x21(r5)
    lwz r5, 0x34(r5)
    mtctr r12
    bctrl
    lwz r3, 0x0(r31)
    li r0, 0x2
    stw r0, 0x0(r3)
    b lbl_fn_806AC360_00000F58
lbl_fn_806AC360_00000DDC:
    slwi r4, r30, 2
    li r3, 0x4
    bl fn_806A72E0
    lwz r4, 0x0(r31)
    stw r3, 0x60(r4)
    lwz r3, 0x0(r31)
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806AC360_00000EC0
    lis r4, lbl_807BD320@ha
    li r3, 0x4
    addi r4, r4, lbl_807BD320@l
    crclr 6
    bl fn_806A76B0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AC360_00000F58
    lis r4, 0xffff
    li r3, 0x9
    subi r4, r4, 0x1171
    bl fn_806A7130
    lwz r4, 0x0(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_806AC360_00000E50
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806AC360_00000E50
    li r3, 0x1
lbl_fn_806AC360_00000E50:
    cmpwi r3, 0x0
    beq lbl_fn_806AC360_00000E98
    lwz r4, 0x60(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806AC360_00000E7C
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    lwz r3, 0x0(r31)
    li r0, 0x0
    stw r0, 0x60(r3)
lbl_fn_806AC360_00000E7C:
    lwz r5, 0x0(r31)
    li r3, 0x9
    lwz r12, 0x30(r5)
    lbz r4, 0x21(r5)
    lwz r5, 0x34(r5)
    mtctr r12
    bctrl
lbl_fn_806AC360_00000E98:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806AC360_00000F58
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r3, 0x0(r31)
    stb r0, 0x22(r3)
    lwz r3, 0x0(r31)
    stb r0, 0x23(r3)
    b lbl_fn_806AC360_00000F58
lbl_fn_806AC360_00000EC0:
    li r27, 0x0
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_806AC360_00000F10
lbl_fn_806AC360_00000ED0:
    lwz r0, 0x1c(r4)
    add r3, r0, r29
    bl fn_806CF1B0
    cmpwi r3, 0x3
    bne lbl_fn_806AC360_00000F08
    bl fn_806AEAF0
    lwz r4, 0x0(r31)
    lwz r0, 0x1c(r4)
    add r4, r0, r29
    bl fn_806D0060
    lwz r4, 0x0(r31)
    lwz r4, 0x60(r4)
    stwx r3, r4, r28
    addi r28, r28, 0x4
lbl_fn_806AC360_00000F08:
    addi r29, r29, 0xc
    addi r27, r27, 0x1
lbl_fn_806AC360_00000F10:
    lwz r4, 0x0(r31)
    lwz r0, 0x18(r4)
    cmpw r27, r0
    blt lbl_fn_806AC360_00000ED0
    lis r7, fn_806AE4C0@ha
    lwz r3, 0x4(r4)
    lwz r4, 0x60(r4)
    mr r5, r30
    addi r7, r7, fn_806AE4C0@l
    li r6, 0x0
    li r8, 0x0
    bl fn_806DB730
    bl fn_806AD770
    cmpwi r3, 0x0
    bne lbl_fn_806AC360_00000F58
lbl_fn_806AC360_00000F4C:
    lwz r3, 0x0(r31)
    li r0, 0x0
    stb r0, 0x23(r3)
lbl_fn_806AC360_00000F58:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806AC820(void)
{
    nofralloc
    lis r4, lbl_8085FF78@ha
    li r3, 0x0
    lwz r4, lbl_8085FF78@l(r4)
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bnelr
    li r3, 0x1
    blr
}

asm void fn_806AC850(void)
{
    nofralloc
    lis r11, lbl_8085FF78@ha
    li r4, 0x0
    lwz r3, lbl_8085FF78@l(r11)
    li r0, 0x1
    stw r5, 0x30(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stw r6, 0x34(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stw r7, 0x38(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stw r8, 0x3c(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stw r9, 0x40(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stw r10, 0x44(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stb r4, 0x21(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stb r4, 0x22(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stb r4, 0x23(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stb r4, 0x20(r3)
    lwz r3, lbl_8085FF78@l(r11)
    stw r0, 0x0(r3)
    lwz r4, lbl_8085FF78@l(r11)
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806AC850_0000102C
    lbz r3, 0x23(r4)
    addi r0, r3, 0x1
    stb r0, 0x23(r4)
lbl_fn_806AC850_0000102C:
    lis r3, lbl_8085FF78@ha
    lwz r4, lbl_8085FF78@l(r3)
    lbz r3, 0x23(r4)
    addi r0, r3, 0x1
    stb r0, 0x23(r4)
    blr
}

asm void fn_806AC8F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8085FF78@ha
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8085FF78@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AC8F0_0000111C
    cmpwi r3, 0x0
    bne lbl_fn_806AC8F0_00001080
    b lbl_fn_806AC8F0_0000111C
lbl_fn_806AC8F0_00001080:
    bl fn_806A7130
    lwz r4, lbl_8085FF78@l(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_806AC8F0_000010A4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806AC8F0_000010A4
    li r3, 0x1
lbl_fn_806AC8F0_000010A4:
    cmpwi r3, 0x0
    beq lbl_fn_806AC8F0_000010F4
    lwz r4, 0x60(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806AC8F0_000010D4
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    lis r3, lbl_8085FF78@ha
    li r0, 0x0
    lwz r3, lbl_8085FF78@l(r3)
    stw r0, 0x60(r3)
lbl_fn_806AC8F0_000010D4:
    lis r4, lbl_8085FF78@ha
    mr r3, r30
    lwz r5, lbl_8085FF78@l(r4)
    lwz r12, 0x30(r5)
    lbz r4, 0x21(r5)
    lwz r5, 0x34(r5)
    mtctr r12
    bctrl
lbl_fn_806AC8F0_000010F4:
    lis r4, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r4)
    cmpwi r3, 0x0
    beq lbl_fn_806AC8F0_0000111C
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r3, lbl_8085FF78@l(r4)
    stb r0, 0x22(r3)
    lwz r3, lbl_8085FF78@l(r4)
    stb r0, 0x23(r3)
lbl_fn_806AC8F0_0000111C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806AC9E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lis r4, lbl_807BD338@ha
    stw r30, 0x8(r1)
    mr r30, r3
    addi r4, r4, lbl_807BD338@l
    lis r3, 0x2
    lwz r5, 0x0(r31)
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r3)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AC9E0_000011B8
    lis r4, lbl_807BD358@ha
    lis r3, 0x2
    addi r4, r4, lbl_807BD358@l
    crclr 6
    bl fn_806A76B0
    lis r7, fn_806ADC80@ha
    lwz r4, 0x0(r31)
    mr r3, r30
    li r5, 0x0
    addi r7, r7, fn_806ADC80@l
    li r6, 0x0
    li r8, 0x0
    bl fn_806DAC00
lbl_fn_806AC9E0_000011B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806ACA80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lis r4, lbl_807BD374@ha
    stw r30, 0x8(r1)
    mr r30, r3
    addi r4, r4, lbl_807BD374@l
    lis r3, 0x2
    lwz r5, 0x0(r31)
    crclr 6
    bl fn_806A76B0
    lis r4, lbl_807BD358@ha
    lis r3, 0x2
    addi r4, r4, lbl_807BD358@l
    crclr 6
    bl fn_806A76B0
    lis r7, fn_806ADFE0@ha
    lwz r4, 0x0(r31)
    mr r3, r30
    li r5, 0x0
    addi r7, r7, fn_806ADFE0@l
    li r6, 0x0
    li r8, 0x0
    bl fn_806DAC00
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806ACB10(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x240
    bl _savegpr_24
    lis r30, lbl_807BD290@ha
    mr r24, r3
    addi r30, r30, lbl_807BD290@l
    lwz r5, 0x0(r4)
    mr r25, r4
    lis r3, 0x2
    addi r4, r30, 0x114
    crclr 6
    bl fn_806A76B0
    lis r31, lbl_8085FF78@ha
    lwz r29, 0x0(r25)
    lwz r0, lbl_8085FF78@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806ACB10_000012C0
    cmpwi r29, 0x0
    bne lbl_fn_806ACB10_000012C8
lbl_fn_806ACB10_000012C0:
    li r28, -0x1
    b lbl_fn_806ACB10_00001330
lbl_fn_806ACB10_000012C8:
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_806ACB10_0000131C
lbl_fn_806ACB10_000012D4:
    lwz r26, 0x1c(r3)
    cmpwi r26, 0x0
    bne lbl_fn_806ACB10_000012E8
    li r3, 0x0
    b lbl_fn_806ACB10_00001308
lbl_fn_806ACB10_000012E8:
    bl fn_806AEAF0
    add r4, r26, r27
    bl fn_806D0060
    cmpwi r3, 0x0
    beq lbl_fn_806ACB10_00001304
    cmpwi r3, -0x1
    bne lbl_fn_806ACB10_00001308
lbl_fn_806ACB10_00001304:
    li r3, 0x0
lbl_fn_806ACB10_00001308:
    cmpw r29, r3
    bne lbl_fn_806ACB10_00001314
    b lbl_fn_806ACB10_00001330
lbl_fn_806ACB10_00001314:
    addi r27, r27, 0xc
    addi r28, r28, 0x1
lbl_fn_806ACB10_0000131C:
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x18(r3)
    cmpw r28, r0
    blt lbl_fn_806ACB10_000012D4
    li r28, -0x1
lbl_fn_806ACB10_00001330:
    cmpwi r28, -0x1
    bne lbl_fn_806ACB10_0000137C
    addi r4, r30, 0x138
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r4, 0x0(r25)
    mr r3, r24
    bl fn_806DB310
    cmpwi r3, 0x0
    beq lbl_fn_806ACB10_000013C4
    lwz r4, 0x0(r25)
    mr r3, r24
    bl fn_806DB3D0
    addi r4, r30, 0x15c
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806ACB10_000013C4
lbl_fn_806ACB10_0000137C:
    lis r31, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806ACB10_000013C4
    lwz r4, 0x8(r25)
    mr r3, r24
    addi r5, r1, 0x8
    bl fn_806DB0A0
    lwz r6, lbl_8085FF78@l(r31)
    mr r3, r28
    lwz r0, 0xc(r1)
    addi r5, r1, 0x110
    lwz r12, 0x38(r6)
    clrlwi r4, r0, 24
    lwz r6, 0x3c(r6)
    mtctr r12
    bctrl
lbl_fn_806ACB10_000013C4:
    addi r11, r1, 0x240
    bl _restgpr_24
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_806ACC80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8085FF78@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, lbl_8085FF78@l(r4)
    lwz r31, 0x1c(r3)
    cmpwi r31, 0x0
    bne lbl_fn_806ACC80_00001410
    li r3, 0x0
    b lbl_fn_806ACC80_00001434
lbl_fn_806ACC80_00001410:
    bl fn_806AEAF0
    mulli r0, r30, 0xc
    add r4, r31, r0
    bl fn_806D0060
    cmpwi r3, 0x0
    beq lbl_fn_806ACC80_00001430
    cmpwi r3, -0x1
    bne lbl_fn_806ACC80_00001434
lbl_fn_806ACC80_00001430:
    li r3, 0x0
lbl_fn_806ACC80_00001434:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806ACCF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_8085FF78@ha
    mr r27, r3
    lwz r0, lbl_8085FF78@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806ACCF0_0000147C
    cmpwi r3, 0x0
    bne lbl_fn_806ACCF0_00001484
lbl_fn_806ACCF0_0000147C:
    li r3, -0x1
    b lbl_fn_806ACCF0_000014F0
lbl_fn_806ACCF0_00001484:
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_806ACCF0_000014DC
lbl_fn_806ACCF0_00001490:
    lwz r29, 0x1c(r3)
    cmpwi r29, 0x0
    bne lbl_fn_806ACCF0_000014A4
    li r3, 0x0
    b lbl_fn_806ACCF0_000014C4
lbl_fn_806ACCF0_000014A4:
    bl fn_806AEAF0
    add r4, r29, r30
    bl fn_806D0060
    cmpwi r3, 0x0
    beq lbl_fn_806ACCF0_000014C0
    cmpwi r3, -0x1
    bne lbl_fn_806ACCF0_000014C4
lbl_fn_806ACCF0_000014C0:
    li r3, 0x0
lbl_fn_806ACCF0_000014C4:
    cmpw r27, r3
    bne lbl_fn_806ACCF0_000014D4
    mr r3, r28
    b lbl_fn_806ACCF0_000014F0
lbl_fn_806ACCF0_000014D4:
    addi r30, r30, 0xc
    addi r28, r28, 0x1
lbl_fn_806ACCF0_000014DC:
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x18(r3)
    cmpw r28, r0
    blt lbl_fn_806ACCF0_00001490
    li r3, -0x1
lbl_fn_806ACCF0_000014F0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ACDB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806ACDB0_00001544
    li r0, 0x0
    stw r0, 0x8(r3)
    bl OSGetTime
    lwz r5, lbl_8085FF78@l(r31)
    stw r4, 0x14(r5)
    stw r3, 0x10(r5)
lbl_fn_806ACDB0_00001544:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806ACE00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_8085FF78@ha
    lis r30, lbl_807BD290@ha
    lwz r0, lbl_8085FF78@l(r31)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r0, 0x0
    addi r30, r30, lbl_807BD290@l
    beq lbl_fn_806ACE00_000015A0
    bl fn_806AF670
    cmpwi r3, 0x0
    bne lbl_fn_806ACE00_000015A8
lbl_fn_806ACE00_000015A0:
    li r3, 0x0
    b lbl_fn_806ACE00_0000165C
lbl_fn_806ACE00_000015A8:
    cmpwi r27, -0x1
    bne lbl_fn_806ACE00_000015C4
    lwz r3, lbl_8085FF78@l(r31)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwz r27, 0x23c(r3)
    b lbl_fn_806ACE00_000015D8
lbl_fn_806ACE00_000015C4:
    mr r5, r27
    addi r4, r30, 0x174
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806ACE00_000015D8:
    cmpwi r28, 0x0
    bne lbl_fn_806ACE00_000015F8
    lis r3, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r3)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    addi r28, r3, 0x3b8
    b lbl_fn_806ACE00_0000160C
lbl_fn_806ACE00_000015F8:
    mr r5, r28
    addi r4, r30, 0x194
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806ACE00_0000160C:
    cmpwi r29, 0x0
    bne lbl_fn_806ACE00_0000162C
    lis r3, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r3)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    addi r29, r3, 0x4b8
    b lbl_fn_806ACE00_00001640
lbl_fn_806ACE00_0000162C:
    mr r5, r29
    addi r4, r30, 0x1b8
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806ACE00_00001640:
    lis r3, lbl_8085FF78@ha
    mr r4, r27
    lwz r3, lbl_8085FF78@l(r3)
    mr r5, r28
    mr r6, r29
    lwz r3, 0x4(r3)
    bl fn_806DB460
lbl_fn_806ACE00_0000165C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806ACF20(void)
{
    nofralloc
    lis r3, lbl_8085FF78@ha
    li r0, 0x0
    stw r0, lbl_8085FF78@l(r3)
    blr
}

asm void fn_806ACF30(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    addi r11, r1, 0x270
    bl _savegpr_24
    lis r31, lbl_8085FF78@ha
    lis r30, lbl_807BD290@ha
    lwz r5, lbl_8085FF78@l(r31)
    mr r28, r3
    mr r29, r4
    addi r30, r30, lbl_807BD290@l
    lbz r0, 0x22(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806ACF30_00001840
    lwz r3, 0x4(r5)
    addi r4, r1, 0x14
    bl fn_806DB050
    bl fn_806AD770
    lwz r5, 0x14(r1)
    addi r4, r30, 0x1e0
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    li r4, 0x0
    stw r4, 0x10(r1)
    li r27, 0x1
    b lbl_fn_806ACF30_00001824
lbl_fn_806ACF30_000016F8:
    lwz r3, lbl_8085FF78@l(r31)
    addi r5, r1, 0x30
    lwz r3, 0x4(r3)
    bl fn_806DB0A0
    bl fn_806AD770
    li r24, 0x0
    li r26, 0x0
    b lbl_fn_806ACF30_000017C8
lbl_fn_806ACF30_00001718:
    lwz r3, lbl_8085FF78@l(r31)
    lwz r25, 0x1c(r3)
    cmpwi r25, 0x0
    bne lbl_fn_806ACF30_00001730
    li r3, 0x0
    b lbl_fn_806ACF30_00001750
lbl_fn_806ACF30_00001730:
    bl fn_806AEAF0
    add r4, r25, r26
    bl fn_806D0060
    cmpwi r3, 0x0
    beq lbl_fn_806ACF30_0000174C
    cmpwi r3, -0x1
    bne lbl_fn_806ACF30_00001750
lbl_fn_806ACF30_0000174C:
    li r3, 0x0
lbl_fn_806ACF30_00001750:
    lwz r0, 0x30(r1)
    cmpw r0, r3
    bne lbl_fn_806ACF30_000017C0
    mulli r26, r24, 0xc
    add r3, r28, r26
    bl fn_806CF130
    cmpwi r3, 0x0
    bne lbl_fn_806ACF30_000017D0
    add r25, r28, r26
    lwz r4, 0x30(r1)
    mr r3, r25
    bl fn_806D02E0
    mr r3, r25
    bl fn_806CF1C0
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r26
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_806ACF30_000017B4
    lwz r3, lbl_8085FF78@l(r31)
    li r4, 0x1
    lwz r0, 0x1c(r3)
    add r3, r0, r26
    bl fn_806CF250
lbl_fn_806ACF30_000017B4:
    lwz r3, lbl_8085FF78@l(r31)
    stb r27, 0x21(r3)
    b lbl_fn_806ACF30_000017D0
lbl_fn_806ACF30_000017C0:
    addi r26, r26, 0xc
    addi r24, r24, 0x1
lbl_fn_806ACF30_000017C8:
    cmpw r24, r29
    blt lbl_fn_806ACF30_00001718
lbl_fn_806ACF30_000017D0:
    cmpw r24, r29
    bne lbl_fn_806ACF30_00001818
    lwz r5, 0x30(r1)
    addi r4, r30, 0x1f8
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_8085FF78@l(r31)
    lwz r4, 0x30(r1)
    lwz r3, 0x4(r3)
    bl fn_806DB3D0
    bl fn_806AD770
    lwz r4, 0x14(r1)
    lwz r3, 0x10(r1)
    subi r0, r4, 0x1
    stw r0, 0x14(r1)
    subi r4, r3, 0x1
    stw r4, 0x10(r1)
lbl_fn_806ACF30_00001818:
    lwz r3, 0x10(r1)
    addi r4, r3, 0x1
    stw r4, 0x10(r1)
lbl_fn_806ACF30_00001824:
    lwz r0, 0x14(r1)
    cmpw r4, r0
    blt lbl_fn_806ACF30_000016F8
    lis r3, lbl_8085FF78@ha
    li r0, 0x1
    lwz r3, lbl_8085FF78@l(r3)
    stb r0, 0x22(r3)
lbl_fn_806ACF30_00001840:
    lis r31, lbl_8085FF78@ha
    b lbl_fn_806ACF30_000019DC
lbl_fn_806ACF30_00001848:
    mulli r0, r0, 0xc
    add r3, r28, r0
    bl fn_806CF1A0
    cmpwi r3, 0x0
    bne lbl_fn_806ACF30_000019CC
    lwz r3, lbl_8085FF78@l(r31)
    lwz r25, 0x1c(r3)
    lbz r27, 0x20(r3)
    cmpwi r25, 0x0
    bne lbl_fn_806ACF30_00001878
    li r27, 0x0
    b lbl_fn_806ACF30_000018A4
lbl_fn_806ACF30_00001878:
    bl fn_806AEAF0
    mulli r0, r27, 0xc
    add r4, r25, r0
    bl fn_806D0060
    cmpwi r3, 0x0
    beq lbl_fn_806ACF30_00001898
    cmpwi r3, -0x1
    bne lbl_fn_806ACF30_000018A0
lbl_fn_806ACF30_00001898:
    li r27, 0x0
    b lbl_fn_806ACF30_000018A4
lbl_fn_806ACF30_000018A0:
    mr r27, r3
lbl_fn_806ACF30_000018A4:
    cmpwi r27, 0x0
    beq lbl_fn_806ACF30_00001934
    lwz r4, lbl_8085FF78@l(r31)
    mr r3, r28
    mr r5, r27
    lbz r4, 0x20(r4)
    bl fn_806AD2B0
    cmpwi r3, 0x0
    bne lbl_fn_806ACF30_000019CC
    lwz r3, lbl_8085FF78@l(r31)
    mr r4, r27
    addi r5, r1, 0x10
    lwz r3, 0x4(r3)
    bl fn_806DB220
    bl fn_806AD770
    lwz r0, 0x10(r1)
    cmpwi r0, -0x1
    bne lbl_fn_806ACF30_000019CC
    lwz r3, lbl_8085FF78@l(r31)
    mr r4, r27
    addi r5, r30, 0x20c
    lwz r3, 0x4(r3)
    bl fn_806DAD50
    bl fn_806AD770
    mr r5, r27
    addi r4, r30, 0x210
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_8085FF78@l(r31)
    li r4, 0x1
    lbz r0, 0x20(r3)
    mulli r0, r0, 0xc
    add r3, r28, r0
    bl fn_806CF2A0
    b lbl_fn_806ACF30_000019CC
lbl_fn_806ACF30_00001934:
    bl fn_806AEAF0
    lwz r4, lbl_8085FF78@l(r31)
    lbz r0, 0x20(r4)
    mulli r0, r0, 0xc
    add r4, r28, r0
    bl fn_806D0060
    cmpwi r3, -0x1
    bne lbl_fn_806ACF30_000019CC
    bl fn_806AEAF0
    lwz r4, lbl_8085FF78@l(r31)
    addi r5, r1, 0x18
    lbz r0, 0x20(r4)
    mulli r0, r0, 0xc
    add r4, r28, r0
    bl fn_806D0350
    lwz r11, lbl_8085FF78@l(r31)
    lis r3, fn_806AD8F0@ha
    addi r3, r3, fn_806AD8F0@l
    addi r8, r1, 0x18
    stw r3, 0x8(r1)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    lbz r0, 0x20(r11)
    li r7, 0x0
    stw r0, 0xc(r1)
    li r9, 0x0
    li r10, 0x0
    lwz r3, 0x4(r11)
    bl fn_806DAB30
    addi r4, r30, 0x22c
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_8085FF78@l(r31)
    li r0, 0x2
    stb r0, 0x22(r3)
    b lbl_fn_806ACF30_000019EC
lbl_fn_806ACF30_000019CC:
    lwz r4, lbl_8085FF78@l(r31)
    lbz r3, 0x20(r4)
    addi r0, r3, 0x1
    stb r0, 0x20(r4)
lbl_fn_806ACF30_000019DC:
    lwz r3, lbl_8085FF78@l(r31)
    lbz r0, 0x20(r3)
    cmpw r0, r29
    blt lbl_fn_806ACF30_00001848
lbl_fn_806ACF30_000019EC:
    addi r11, r1, 0x270
    bl _restgpr_24
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}

asm void fn_806AD2B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mulli r28, r4, 0xc
    mr r23, r3
    mr r24, r4
    mr r25, r5
    add r27, r3, r28
    mr r3, r27
    bl fn_806CF1B0
    cmpwi r3, 0x1
    bne lbl_fn_806AD2B0_00001A4C
    li r3, 0x0
    b lbl_fn_806AD2B0_00001BAC
lbl_fn_806AD2B0_00001A4C:
    li r26, 0x0
    li r30, 0x0
    lis r31, lbl_8085FF78@ha
    b lbl_fn_806AD2B0_00001BA0
lbl_fn_806AD2B0_00001A5C:
    lwz r3, lbl_8085FF78@l(r31)
    lwz r29, 0x1c(r3)
    cmpwi r29, 0x0
    bne lbl_fn_806AD2B0_00001A74
    li r3, 0x0
    b lbl_fn_806AD2B0_00001A94
lbl_fn_806AD2B0_00001A74:
    bl fn_806AEAF0
    add r4, r29, r30
    bl fn_806D0060
    cmpwi r3, 0x0
    beq lbl_fn_806AD2B0_00001A90
    cmpwi r3, -0x1
    bne lbl_fn_806AD2B0_00001A94
lbl_fn_806AD2B0_00001A90:
    li r3, 0x0
lbl_fn_806AD2B0_00001A94:
    cmpwi r3, 0x0
    beq lbl_fn_806AD2B0_00001B98
    cmpw r3, r25
    bne lbl_fn_806AD2B0_00001B98
    mulli r29, r26, 0xc
    add r30, r23, r29
    mr r3, r30
    bl fn_806CF1B0
    lis r4, lbl_807BD4D8@ha
    mr r7, r3
    mr r5, r26
    mr r6, r24
    addi r4, r4, lbl_807BD4D8@l
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    mr r3, r27
    bl fn_806CF130
    cmpwi r3, 0x0
    beq lbl_fn_806AD2B0_00001B3C
    mr r3, r30
    bl fn_806CF130
    cmpwi r3, 0x0
    bne lbl_fn_806AD2B0_00001B3C
    lis r31, lbl_8085FF78@ha
    lwz r0, lbl_8085FF78@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AD2B0_00001B80
    mr r3, r30
    li r4, 0x0
    li r5, 0xc
    bl memset
    lwz r5, lbl_8085FF78@l(r31)
    lwz r12, 0x40(r5)
    cmpwi r12, 0x0
    beq lbl_fn_806AD2B0_00001B80
    mr r3, r26
    mr r4, r24
    lwz r5, 0x44(r5)
    mtctr r12
    bctrl
    b lbl_fn_806AD2B0_00001B80
lbl_fn_806AD2B0_00001B3C:
    lis r31, lbl_8085FF78@ha
    lwz r0, lbl_8085FF78@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AD2B0_00001B80
    add r3, r23, r28
    li r4, 0x0
    li r5, 0xc
    bl memset
    lwz r5, lbl_8085FF78@l(r31)
    lwz r12, 0x40(r5)
    cmpwi r12, 0x0
    beq lbl_fn_806AD2B0_00001B80
    mr r3, r24
    mr r4, r26
    lwz r5, 0x44(r5)
    mtctr r12
    bctrl
lbl_fn_806AD2B0_00001B80:
    lis r3, lbl_8085FF78@ha
    li r0, 0x1
    lwz r4, lbl_8085FF78@l(r3)
    li r3, 0x1
    stb r0, 0x21(r4)
    b lbl_fn_806AD2B0_00001BAC
lbl_fn_806AD2B0_00001B98:
    addi r30, r30, 0xc
    addi r26, r26, 0x1
lbl_fn_806AD2B0_00001BA0:
    cmpw r26, r24
    blt lbl_fn_806AD2B0_00001A5C
    li r3, 0x0
lbl_fn_806AD2B0_00001BAC:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806AD470(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_15
    mr r17, r3
    mr r18, r4
    mr r19, r5
    li r22, -0x1
    mr r27, r17
    mr r26, r17
    li r21, 0x0
    li r28, 0x0
    lis r30, lbl_8085FF78@ha
    lis r31, lbl_807BD4D8@ha
    li r16, 0x1
    b lbl_fn_806AD470_00001DBC
lbl_fn_806AD470_00001C10:
    lwz r3, lbl_8085FF78@l(r30)
    lwz r20, 0x1c(r3)
    cmpwi r20, 0x0
    bne lbl_fn_806AD470_00001C28
    li r29, 0x0
    b lbl_fn_806AD470_00001C50
lbl_fn_806AD470_00001C28:
    bl fn_806AEAF0
    add r4, r20, r28
    bl fn_806D0060
    cmpwi r3, 0x0
    beq lbl_fn_806AD470_00001C44
    cmpwi r3, -0x1
    bne lbl_fn_806AD470_00001C4C
lbl_fn_806AD470_00001C44:
    li r29, 0x0
    b lbl_fn_806AD470_00001C50
lbl_fn_806AD470_00001C4C:
    mr r29, r3
lbl_fn_806AD470_00001C50:
    cmpwi r29, 0x0
    beq lbl_fn_806AD470_00001DAC
    cmpw r29, r19
    bne lbl_fn_806AD470_00001C64
    mr r22, r21
lbl_fn_806AD470_00001C64:
    addi r20, r21, 0x1
    mulli r23, r20, 0xc
    add r25, r17, r23
    mr r24, r25
    b lbl_fn_806AD470_00001DA4
lbl_fn_806AD470_00001C78:
    lwz r3, lbl_8085FF78@l(r30)
    lwz r15, 0x1c(r3)
    cmpwi r15, 0x0
    bne lbl_fn_806AD470_00001C90
    li r3, 0x0
    b lbl_fn_806AD470_00001CB0
lbl_fn_806AD470_00001C90:
    bl fn_806AEAF0
    add r4, r15, r23
    bl fn_806D0060
    cmpwi r3, 0x0
    beq lbl_fn_806AD470_00001CAC
    cmpwi r3, -0x1
    bne lbl_fn_806AD470_00001CB0
lbl_fn_806AD470_00001CAC:
    li r3, 0x0
lbl_fn_806AD470_00001CB0:
    cmpw r29, r3
    bne lbl_fn_806AD470_00001D94
    mr r3, r27
    bl fn_806CF1B0
    cmpwi r3, 0x2
    bne lbl_fn_806AD470_00001CE4
    mr r3, r25
    bl fn_806CF1B0
    cmpwi r3, 0x3
    bne lbl_fn_806AD470_00001CE4
    mr r3, r26
    mr r4, r29
    bl fn_806D02E0
lbl_fn_806AD470_00001CE4:
    mr r3, r25
    bl fn_806CF130
    cmpwi r3, 0x0
    beq lbl_fn_806AD470_00001D28
    mr r3, r26
    bl fn_806CF1C0
    lwz r3, lbl_8085FF78@l(r30)
    lwz r0, 0x1c(r3)
    add r3, r0, r28
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_806AD470_00001D28
    lwz r3, lbl_8085FF78@l(r30)
    li r4, 0x1
    lwz r0, 0x1c(r3)
    add r3, r0, r28
    bl fn_806CF250
lbl_fn_806AD470_00001D28:
    mr r3, r27
    bl fn_806CF1B0
    mr r7, r3
    mr r5, r21
    mr r6, r20
    addi r4, r31, lbl_807BD4D8@l
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r0, lbl_8085FF78@l(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806AD470_00001D8C
    mr r3, r24
    li r4, 0x0
    li r5, 0xc
    bl memset
    lwz r5, lbl_8085FF78@l(r30)
    lwz r12, 0x40(r5)
    cmpwi r12, 0x0
    beq lbl_fn_806AD470_00001D8C
    mr r3, r20
    mr r4, r21
    lwz r5, 0x44(r5)
    mtctr r12
    bctrl
lbl_fn_806AD470_00001D8C:
    lwz r3, lbl_8085FF78@l(r30)
    stb r16, 0x21(r3)
lbl_fn_806AD470_00001D94:
    addi r23, r23, 0xc
    addi r25, r25, 0xc
    addi r24, r24, 0xc
    addi r20, r20, 0x1
lbl_fn_806AD470_00001DA4:
    cmpw r20, r18
    blt lbl_fn_806AD470_00001C78
lbl_fn_806AD470_00001DAC:
    addi r28, r28, 0xc
    addi r27, r27, 0xc
    addi r26, r26, 0xc
    addi r21, r21, 0x1
lbl_fn_806AD470_00001DBC:
    cmpw r21, r18
    blt lbl_fn_806AD470_00001C10
    addi r11, r1, 0x50
    mr r3, r22
    bl _restgpr_15
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806AD690(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8085FF78@ha
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, lbl_8085FF78@l(r31)
    stw r5, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806AD690_00001E30
    bl fn_806AF670
    cmpwi r3, 0x0
    bne lbl_fn_806AD690_00001E38
lbl_fn_806AD690_00001E30:
    li r3, 0x0
    b lbl_fn_806AD690_00001EAC
lbl_fn_806AD690_00001E38:
    bl fn_806AEAF0
    mr r4, r30
    bl fn_806D0060
    cmpwi r3, 0x0
    mr r30, r3
    ble lbl_fn_806AD690_00001E74
    lwz r3, lbl_8085FF78@l(r31)
    mr r4, r30
    addi r5, r1, 0x8
    lwz r3, 0x4(r3)
    bl fn_806DB220
    cmpwi r3, 0x0
    beq lbl_fn_806AD690_00001E74
    li r3, 0x0
    b lbl_fn_806AD690_00001EAC
lbl_fn_806AD690_00001E74:
    cmpwi r30, 0x0
    ble lbl_fn_806AD690_00001E88
    lwz r4, 0x8(r1)
    cmpwi r4, -0x1
    bne lbl_fn_806AD690_00001E90
lbl_fn_806AD690_00001E88:
    li r3, 0x0
    b lbl_fn_806AD690_00001EAC
lbl_fn_806AD690_00001E90:
    lis r3, lbl_8085FF78@ha
    mr r5, r29
    lwz r3, lbl_8085FF78@l(r3)
    lwz r3, 0x4(r3)
    bl fn_806DB0A0
    cntlzw r0, r3
    extrwi r3, r0, 8, 19
lbl_fn_806AD690_00001EAC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806AD770(void)
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
    bne lbl_fn_806AD770_00001EF8
    li r3, 0x0
    b lbl_fn_806AD770_00002024
lbl_fn_806AD770_00001EF8:
    lis r4, lbl_807BD508@ha
    mr r5, r31
    addi r4, r4, lbl_807BD508@l
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r31, 0x1
    beq lbl_fn_806AD770_00001F34
    cmpwi r31, 0x2
    beq lbl_fn_806AD770_00001F40
    cmpwi r31, 0x3
    beq lbl_fn_806AD770_00001F4C
    cmpwi r31, 0x4
    beq lbl_fn_806AD770_00001F58
    b lbl_fn_806AD770_00001F60
lbl_fn_806AD770_00001F34:
    li r29, 0x9
    li r3, -0x1
    b lbl_fn_806AD770_00001F60
lbl_fn_806AD770_00001F40:
    li r29, 0x9
    li r3, -0x2
    b lbl_fn_806AD770_00001F60
lbl_fn_806AD770_00001F4C:
    li r29, 0x6
    li r3, -0xa
    b lbl_fn_806AD770_00001F60
lbl_fn_806AD770_00001F58:
    li r29, 0x6
    li r3, -0x14
lbl_fn_806AD770_00001F60:
    lis r30, lbl_8085FF78@ha
    lwz r0, lbl_8085FF78@l(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806AD770_00002020
    cmpwi r29, 0x0
    beq lbl_fn_806AD770_00002020
    subis r4, r3, 0x1
    mr r3, r29
    subi r4, r4, 0x1558
    bl fn_806A7130
    lwz r4, lbl_8085FF78@l(r30)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_806AD770_00001FA8
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806AD770_00001FA8
    li r3, 0x1
lbl_fn_806AD770_00001FA8:
    cmpwi r3, 0x0
    beq lbl_fn_806AD770_00001FF8
    lwz r4, 0x60(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806AD770_00001FD8
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    lis r3, lbl_8085FF78@ha
    li r0, 0x0
    lwz r3, lbl_8085FF78@l(r3)
    stw r0, 0x60(r3)
lbl_fn_806AD770_00001FD8:
    lis r4, lbl_8085FF78@ha
    mr r3, r29
    lwz r5, lbl_8085FF78@l(r4)
    lwz r12, 0x30(r5)
    lbz r4, 0x21(r5)
    lwz r5, 0x34(r5)
    mtctr r12
    bctrl
lbl_fn_806AD770_00001FF8:
    lis r4, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r4)
    cmpwi r3, 0x0
    beq lbl_fn_806AD770_00002020
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r3, lbl_8085FF78@l(r4)
    stb r0, 0x22(r3)
    lwz r3, lbl_8085FF78@l(r4)
    stb r0, 0x23(r3)
lbl_fn_806AD770_00002020:
    mr r3, r31
lbl_fn_806AD770_00002024:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
