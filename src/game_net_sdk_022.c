#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_18(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_18(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8067E23C(void);
extern void fn_8068236C(void);
extern void fn_80682544(void);
extern void fn_8068446C(void);
extern void fn_806A7110(void);
extern void fn_806A7130(void);
extern void fn_806A72E0(void);
extern void fn_806A7400(void);
extern void fn_806A76B0(void);
extern void fn_806A9CA0(void);
extern void fn_806AB8B0(void);
extern void fn_806ABA10(void);
extern void fn_806B0E30(void);
extern void fn_806B0EB0(void);
extern void fn_806B1170(void);
extern void fn_806B12F0(void);
extern void fn_806B14D0(void);
extern void fn_806B1570(void);
extern void fn_806B1730(void);
extern void fn_806B1A00(void);
extern void fn_806B30A0(void);
extern void fn_806B97B0(void);
extern void fn_806C9CE0(void);
extern void fn_806CB4C0(void);
extern void fn_806CB8F0(void);
extern void fn_806CCB40(void);
extern void fn_806CCCB0(void);
extern void fn_806CCED0(void);
extern void fn_806EAAD0(void);
extern void fn_806EABD0(void);
extern void fn_806EAC50(void);
extern void fn_806EACD0(void);
extern void fn_806EACF0(void);
extern void fn_806F1DF0(void);
extern void fn_806FBDB0(void);
extern void fn_806FC900(void);

/* External data declarations */
extern u8 lbl_807BE9D0[];
extern u8 lbl_807BEA3C[];
extern u8 lbl_807C1750[];
extern u8 lbl_807C1788[];
extern u8 lbl_807C1838[];
extern u8 lbl_807C183C[];
extern u8 lbl_807C1858[];
extern u8 lbl_807C1874[];
extern u8 lbl_807C18A8[];
extern u8 lbl_807C18C4[];
extern u8 lbl_807C18E4[];
extern u8 lbl_807C1C68[];
extern u8 lbl_807C1C80[];
extern u8 lbl_807C1CC0[];
extern u8 lbl_80860140[];
extern u8 lbl_80860898[];
extern u8 lbl_808608A0[];
extern u8 lbl_808608A8[];
extern u8 lbl_808608B0[];

/* Small data declarations */

/* Function declarations */
void pad_03_806CD3BC_text(void);
void fn_806CD3C0(void);
void fn_806CD3E0(void);
void fn_806CD450(void);
void fn_806CD460(void);
void fn_806CD4E0(void);
void fn_806CD540(void);
void fn_806CD560(void);
void fn_806CD5E0(void);
void fn_806CD610(void);
void fn_806CD620(void);
void fn_806CD740(void);
void fn_806CD870(void);
void fn_806CD880(void);
void fn_806CDA90(void);
void fn_806CDAB0(void);
void fn_806CDD00(void);
void fn_806CDE00(void);
void fn_806CDE80(void);
void fn_806CDF30(void);
void fn_806CDF60(void);
void fn_806CDF90(void);
void fn_806CDFC0(void);
void fn_806CDFF0(void);
void fn_806CE060(void);
void fn_806CE090(void);
void fn_806CE0F0(void);
void fn_806CE1E0(void);
void fn_806CE250(void);
void fn_806CE660(void);
void fn_806CE6F0(void);
void fn_806CE700(void);
void fn_806CE750(void);
void fn_806CE910(void);
void fn_806CEB00(void);
void fn_806CED40(void);
void fn_806CEED0(void);
void fn_806CF030(void);
void fn_806CF090(void);
void fn_806CF0A0(void);
void fn_806CF0B0(void);
void fn_806CF0D0(void);
void fn_806CF0E0(void);
void fn_806CF130(void);
void fn_806CF160(void);
void fn_806CF190(void);
void fn_806CF1A0(void);
void fn_806CF1B0(void);
void fn_806CF1C0(void);
void fn_806CF200(void);
void fn_806CF250(void);
void fn_806CF2A0(void);
void fn_806CF2F0(void);
void fn_806CF3A0(void);

asm void pad_03_806CD3BC_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806CD3C0(void)
{
    nofralloc
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x8e0(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_806CD3E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r5, r3
    lis r3, lbl_807BEA3C@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807BEA3C@l
    addi r4, r1, 0x8
    addi r5, r5, 0x8
    stw r31, 0x1c(r1)
    li r31, 0x0
    li r6, 0x2f
    stw r31, 0x8(r1)
    bl fn_806ABA10
    cmpwi r3, 0x0
    ble lbl_fn_806CD3E0_00000074
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xa
    bl fn_8068446C
    clrlwi r31, r3, 24
lbl_fn_806CD3E0_00000074:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CD450(void)
{
    nofralloc
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    stw r3, 0x7a8(r4)
    blr
}

asm void fn_806CD460(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x32
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807BE9D0@ha
    addi r31, r31, lbl_807BE9D0@l
    addi r4, r31, 0x188
    bl fn_806F1DF0
    addi r4, r31, 0x190
    li r3, 0x33
    bl fn_806F1DF0
    addi r4, r31, 0x19c
    li r3, 0x34
    bl fn_806F1DF0
    addi r4, r31, 0x1a8
    li r3, 0x35
    bl fn_806F1DF0
    addi r4, r31, 0x1b4
    li r3, 0x36
    bl fn_806F1DF0
    addi r4, r31, 0x1c0
    li r3, 0x37
    bl fn_806F1DF0
    addi r4, r31, 0x1d0
    li r3, 0x38
    bl fn_806F1DF0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CD4E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80860140@ha
    addi r31, r31, lbl_80860140@l
    lwz r3, 0x758(r31)
    lwz r3, 0x740(r3)
    bl fn_806FC900
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806CD4E0_0000015C
    bl fn_806FBDB0
    b lbl_fn_806CD4E0_00000164
lbl_fn_806CD4E0_0000015C:
    li r0, 0x1
    stw r0, 0x10(r31)
lbl_fn_806CD4E0_00000164:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CD540(void)
{
    nofralloc
    lis r4, lbl_808608A0@ha
    li r0, 0x0
    addi r3, r4, lbl_808608A0@l
    stw r0, lbl_808608A0@l(r4)
    stw r0, 0x4(r3)
    blr
}

asm void fn_806CD560(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808608A0@ha
    stw r30, 0x8(r1)
    lwz r30, lbl_808608A0@l(r31)
    b lbl_fn_806CD560_000001F0
lbl_fn_806CD560_000001C4:
    lwz r0, 0xc(r30)
    li r3, 0x4
    stw r0, lbl_808608A0@l(r31)
    lwz r4, 0x4(r30)
    lwz r5, 0x8(r30)
    bl fn_806A7400
    mr r4, r30
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    lwz r30, lbl_808608A0@l(r31)
lbl_fn_806CD560_000001F0:
    cmpwi r30, 0x0
    bne lbl_fn_806CD560_000001C4
    lis r4, lbl_808608A0@ha
    li r0, 0x0
    addi r3, r4, lbl_808608A0@l
    stw r0, lbl_808608A0@l(r4)
    stw r0, 0x4(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CD5E0(void)
{
    nofralloc
    lis r3, lbl_808608A0@ha
    addi r3, r3, lbl_808608A0@l
    lwz r0, 0x4(r3)
    xori r0, r0, 0x6000
    srawi r3, r0, 1
    rlwinm r0, r0, 0, 17, 18
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_806CD610(void)
{
    nofralloc
    lis r3, fn_806EAAD0@ha
    addi r3, r3, fn_806EAAD0@l
    b fn_806CD620
}

asm void fn_806CD620(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r4, lbl_808608A0@ha
    mr r27, r3
    lwz r29, lbl_808608A0@l(r4)
    addi r30, r4, lbl_808608A0@l
    li r31, 0x0
    b lbl_fn_806CD620_00000318
lbl_fn_806CD620_00000290:
    li r28, 0x0
lbl_fn_806CD620_00000294:
    mr r12, r27
    lwz r3, 0x0(r29)
    lwz r4, 0x4(r29)
    li r6, 0x1
    lwz r5, 0x8(r29)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806CD620_000002E8
    lwz r4, 0x8(r29)
    li r3, 0x4
    lwz r0, 0x4(r30)
    subf r0, r4, r0
    stw r0, 0x4(r30)
    lwz r4, 0x4(r29)
    lwz r5, 0x8(r29)
    bl fn_806A7400
    stw r31, 0x4(r29)
    stw r31, 0x8(r29)
    stw r31, 0x0(r29)
    b lbl_fn_806CD620_000002F4
lbl_fn_806CD620_000002E8:
    addi r28, r28, 0x1
    cmpwi r28, 0x3
    blt lbl_fn_806CD620_00000294
lbl_fn_806CD620_000002F4:
    cmpwi r28, 0x3
    bne lbl_fn_806CD620_00000314
    lis r4, lbl_807C1750@ha
    li r3, 0x100
    addi r4, r4, lbl_807C1750@l
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806CD620_00000320
lbl_fn_806CD620_00000314:
    lwz r29, 0xc(r29)
lbl_fn_806CD620_00000318:
    cmpwi r29, 0x0
    bne lbl_fn_806CD620_00000290
lbl_fn_806CD620_00000320:
    lis r31, lbl_808608A0@ha
    lwz r4, lbl_808608A0@l(r31)
    b lbl_fn_806CD620_00000350
lbl_fn_806CD620_0000032C:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CD620_00000358
    lwz r0, 0xc(r4)
    li r3, 0x4
    stw r0, lbl_808608A0@l(r31)
    li r5, 0x0
    bl fn_806A7400
    lwz r4, lbl_808608A0@l(r31)
lbl_fn_806CD620_00000350:
    cmpwi r4, 0x0
    bne lbl_fn_806CD620_0000032C
lbl_fn_806CD620_00000358:
    neg r0, r4
    addi r11, r1, 0x20
    cntlzw r0, r0
    srwi r3, r0, 5
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CD740(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_808608A0@ha
    lis r6, 0x1
    stw r0, 0x24(r1)
    addi r0, r6, -0x8000
    stw r31, 0x1c(r1)
    addi r31, r7, lbl_808608A0@l
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r3, 0x4(r31)
    add r3, r3, r5
    cmpw r3, r0
    ble lbl_fn_806CD740_000003D4
    li r3, 0x0
    b lbl_fn_806CD740_00000490
lbl_fn_806CD740_000003D4:
    lwz r3, lbl_808608A0@l(r7)
    b lbl_fn_806CD740_000003E4
lbl_fn_806CD740_000003DC:
    addi r31, r3, 0xc
    lwz r3, 0xc(r3)
lbl_fn_806CD740_000003E4:
    cmpwi r3, 0x0
    bne lbl_fn_806CD740_000003DC
    li r3, 0x4
    li r4, 0x10
    bl fn_806A72E0
    cmpwi r3, 0x0
    stw r3, 0x0(r31)
    bne lbl_fn_806CD740_0000040C
    li r3, 0x0
    b lbl_fn_806CD740_00000490
lbl_fn_806CD740_0000040C:
    mr r4, r30
    li r3, 0x4
    bl fn_806A72E0
    lwz r4, 0x0(r31)
    stw r3, 0x4(r4)
    lwz r4, 0x0(r31)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806CD740_0000044C
    li r3, 0x4
    li r5, 0x10
    bl fn_806A7400
    li r0, 0x0
    stw r0, 0x0(r31)
    li r3, 0x0
    b lbl_fn_806CD740_00000490
lbl_fn_806CD740_0000044C:
    stw r28, 0x0(r4)
    li r0, 0x0
    mr r4, r29
    mr r5, r30
    lwz r3, 0x0(r31)
    stw r30, 0x8(r3)
    lwz r3, 0x0(r31)
    stw r0, 0xc(r3)
    lwz r3, 0x0(r31)
    lwz r3, 0x4(r3)
    bl fn_806A9CA0
    lis r4, lbl_808608A0@ha
    li r3, 0x1
    addi r4, r4, lbl_808608A0@l
    lwz r0, 0x4(r4)
    add r0, r0, r30
    stw r0, 0x4(r4)
lbl_fn_806CD740_00000490:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CD870(void)
{
    nofralloc
    li r4, 0x1
    b fn_806CD880
}

asm void fn_806CD880(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lis r30, lbl_807C1788@ha
    addi r30, r30, lbl_807C1788@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806CD880_00000514
    cmplwi r29, 0x1
    bne lbl_fn_806CD880_00000530
    mr r3, r31
    bl fn_806B1170
    cmpwi r3, 0x0
    bne lbl_fn_806CD880_00000530
lbl_fn_806CD880_00000514:
    mr r5, r31
    addi r4, r30, 0x0
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CD880_000006A8
lbl_fn_806CD880_00000530:
    mr r3, r31
    bl fn_806B1730
    cmpwi r3, 0x0
    bne lbl_fn_806CD880_0000055C
    mr r5, r31
    addi r4, r30, 0x18
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CD880_000006A8
lbl_fn_806CD880_0000055C:
    lis r3, lbl_808608A8@ha
    clrlslwi r0, r31, 24, 6
    lwz r3, lbl_808608A8@l(r3)
    add r3, r3, r0
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806CD880_000005A0
    bl fn_806B0E30
    lis r7, 0x1
    clrlwi r6, r3, 24
    mr r5, r31
    addi r4, r30, 0x40
    addi r3, r7, -0x8000
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CD880_000006A8
lbl_fn_806CD880_000005A0:
    mr r3, r31
    bl fn_806B14D0
    bl fn_806EACF0
    subi r3, r3, 0x207
    cmpwi r29, 0x2
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r28, r3, r0
    beq lbl_fn_806CD880_000005DC
    cmpwi r29, 0x3
    beq lbl_fn_806CD880_000005E4
    cmpwi r29, 0x4
    beq lbl_fn_806CD880_000005EC
    b lbl_fn_806CD880_0000060C
lbl_fn_806CD880_000005DC:
    li r0, 0x24
    b lbl_fn_806CD880_00000610
lbl_fn_806CD880_000005E4:
    li r0, 0xc
    b lbl_fn_806CD880_00000610
lbl_fn_806CD880_000005EC:
    bl fn_806CCCB0
    subic. r0, r3, 0x1
    bne lbl_fn_806CD880_00000600
    li r0, 0x10
    b lbl_fn_806CD880_00000610
lbl_fn_806CD880_00000600:
    mulli r3, r0, 0x18
    addi r0, r3, 0x10
    b lbl_fn_806CD880_00000610
lbl_fn_806CD880_0000060C:
    li r0, 0x8
lbl_fn_806CD880_00000610:
    cmpw r28, r0
    bge lbl_fn_806CD880_00000698
    cmpwi r29, 0x2
    beq lbl_fn_806CD880_00000634
    cmpwi r29, 0x3
    beq lbl_fn_806CD880_0000063C
    cmpwi r29, 0x4
    beq lbl_fn_806CD880_00000644
    b lbl_fn_806CD880_00000664
lbl_fn_806CD880_00000634:
    li r29, 0x24
    b lbl_fn_806CD880_00000668
lbl_fn_806CD880_0000063C:
    li r29, 0xc
    b lbl_fn_806CD880_00000668
lbl_fn_806CD880_00000644:
    bl fn_806CCCB0
    subic. r0, r3, 0x1
    bne lbl_fn_806CD880_00000658
    li r29, 0x10
    b lbl_fn_806CD880_00000668
lbl_fn_806CD880_00000658:
    mulli r3, r0, 0x18
    addi r29, r3, 0x10
    b lbl_fn_806CD880_00000668
lbl_fn_806CD880_00000664:
    li r29, 0x8
lbl_fn_806CD880_00000668:
    bl fn_806B0E30
    lis r4, 0x1
    clrlwi r6, r3, 24
    addi r3, r4, -0x8000
    mr r5, r31
    mr r7, r28
    mr r8, r29
    addi r4, r30, 0x68
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CD880_000006A8
lbl_fn_806CD880_00000698:
    bl fn_806CD5E0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_806CD880_000006A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CDA90(void)
{
    nofralloc
    mr r7, r3
    mr r0, r4
    mr r6, r5
    li r3, 0x1
    mr r4, r7
    mr r5, r0
    b fn_806CDAB0
}

asm void fn_806CDAB0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r7, lbl_808608A8@ha
    mr r27, r3
    lwz r7, lbl_808608A8@l(r7)
    mr r28, r4
    clrlslwi r0, r4, 24, 6
    mr r29, r5
    mr r30, r6
    mr r3, r28
    mr r4, r27
    add r31, r7, r0
    bl fn_806CD880
    cmpwi r3, 0x0
    bne lbl_fn_806CDAB0_00000744
    li r3, 0x0
    b lbl_fn_806CDAB0_0000092C
lbl_fn_806CDAB0_00000744:
    li r0, 0x1
    stb r0, 0x1c(r31)
    lis r4, lbl_807C1838@ha
    addi r3, r1, 0xe
    stw r29, 0x0(r31)
    li r0, 0x0
    addi r4, r4, lbl_807C1838@l
    li r5, 0x2
    stw r0, 0xc(r31)
    stw r30, 0x14(r31)
    bl fn_8068236C
    rlwinm r4, r30, 24, 8, 15
    extlwi r0, r30, 8, 8
    rlwimi r4, r30, 24, 24, 31
    clrlslwi r5, r27, 16, 8
    rlwimi r0, r30, 8, 16, 23
    mr r3, r28
    or r0, r4, r0
    rlwimi r5, r27, 24, 24, 31
    rotlwi r0, r0, 16
    sth r5, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_806B14D0
    mr r26, r3
    bl fn_806CD610
    cmpwi r3, 0x0
    beq lbl_fn_806CDAB0_000007E8
    mr r3, r26
    addi r4, r1, 0x8
    li r5, 0x8
    li r6, 0x1
    bl fn_806EAAD0
    cmpwi r3, 0x0
    beq lbl_fn_806CDAB0_00000810
    lis r4, lbl_807C183C@ha
    lis r6, 0x1
    mr r5, r3
    addi r3, r6, -0x8000
    addi r4, r4, lbl_807C183C@l
    crclr 6
    bl fn_806A76B0
lbl_fn_806CDAB0_000007E8:
    mr r3, r26
    addi r4, r1, 0x8
    li r5, 0x8
    bl fn_806CD740
    cmpwi r3, 0x0
    bne lbl_fn_806CDAB0_00000810
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x7d5e
    bl fn_806A7130
lbl_fn_806CDAB0_00000810:
    lis r3, lbl_808608A8@ha
    lwz r3, lbl_808608A8@l(r3)
    lhz r0, 0x820(r3)
    cmpw r30, r0
    ble lbl_fn_806CDAB0_00000828
    mr r30, r0
lbl_fn_806CDAB0_00000828:
    mr r3, r28
    bl fn_806B14D0
    bl fn_806EACF0
    subi r3, r3, 0x207
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    cmpw r30, r0
    ble lbl_fn_806CDAB0_00000858
    li r3, 0x1
    b lbl_fn_806CDAB0_0000092C
lbl_fn_806CDAB0_00000858:
    mr r3, r28
    bl fn_806B14D0
    mr r26, r3
    bl fn_806CD610
    cmpwi r3, 0x0
    beq lbl_fn_806CDAB0_000008A8
    mr r3, r26
    mr r4, r29
    mr r5, r30
    li r6, 0x1
    bl fn_806EAAD0
    cmpwi r3, 0x0
    beq lbl_fn_806CDAB0_000008D0
    lis r4, lbl_807C183C@ha
    lis r6, 0x1
    mr r5, r3
    addi r3, r6, -0x8000
    addi r4, r4, lbl_807C183C@l
    crclr 6
    bl fn_806A76B0
lbl_fn_806CDAB0_000008A8:
    mr r3, r26
    mr r4, r29
    mr r5, r30
    bl fn_806CD740
    cmpwi r3, 0x0
    bne lbl_fn_806CDAB0_000008D0
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x7d5e
    bl fn_806A7130
lbl_fn_806CDAB0_000008D0:
    lwz r0, 0xc(r31)
    add r0, r0, r30
    stw r0, 0xc(r31)
    lwz r3, 0x14(r31)
    cmpw r0, r3
    bne lbl_fn_806CDAB0_00000928
    li r0, 0x0
    stb r0, 0x1c(r31)
    lis r4, lbl_808608A8@ha
    stw r0, 0x0(r31)
    stw r0, 0xc(r31)
    stw r0, 0x14(r31)
    lwz r5, lbl_808608A8@l(r4)
    lwz r12, 0x800(r5)
    cmpwi r12, 0x0
    beq lbl_fn_806CDAB0_00000928
    cmplwi r27, 0x1
    bne lbl_fn_806CDAB0_00000928
    mr r4, r28
    lwz r5, 0x810(r5)
    mtctr r12
    bctrl
lbl_fn_806CDAB0_00000928:
    li r3, 0x1
lbl_fn_806CDAB0_0000092C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CDD00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806CDD00_0000097C
    li r3, 0x0
    b lbl_fn_806CDD00_00000A24
lbl_fn_806CDD00_0000097C:
    mr r3, r29
    bl fn_806B1170
    cmpwi r3, 0x0
    bne lbl_fn_806CDD00_000009AC
    lis r4, lbl_807C1858@ha
    mr r5, r29
    addi r4, r4, lbl_807C1858@l
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CDD00_00000A24
lbl_fn_806CDD00_000009AC:
    cmpwi r31, 0x5b6
    ble lbl_fn_806CDD00_000009DC
    lis r3, 0x1
    lis r4, lbl_807C1874@ha
    mr r5, r31
    li r6, 0x5b6
    addi r3, r3, -0x8000
    addi r4, r4, lbl_807C1874@l
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CDD00_00000A24
lbl_fn_806CDD00_000009DC:
    bl fn_806B0E30
    mr r4, r29
    mr r5, r30
    mr r6, r31
    clrlwi r3, r3, 24
    li r7, 0x1
    bl fn_806CE750
    lis r3, lbl_808608A8@ha
    lwz r5, lbl_808608A8@l(r3)
    lwz r12, 0x800(r5)
    cmpwi r12, 0x0
    beq lbl_fn_806CDD00_00000A20
    mr r3, r31
    mr r4, r29
    lwz r5, 0x810(r5)
    mtctr r12
    bctrl
lbl_fn_806CDD00_00000A20:
    li r3, 0x1
lbl_fn_806CDD00_00000A24:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CDE00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_808608A8@ha
    stw r0, 0x14(r1)
    clrlslwi r0, r3, 24, 6
    lwz r3, lbl_808608A8@l(r6)
    add r6, r3, r0
    lbz r0, 0x1d(r6)
    cmpwi r0, 0x2
    bne lbl_fn_806CDE00_00000A88
    lis r4, lbl_807C18A8@ha
    lis r3, 0x1
    addi r4, r4, lbl_807C18A8@l
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CDE00_00000AA8
lbl_fn_806CDE00_00000A88:
    stw r4, 0x4(r6)
    li r4, 0x1
    li r0, 0x0
    li r3, 0x1
    stw r5, 0x8(r6)
    stb r4, 0x1d(r6)
    stw r0, 0x10(r6)
    stw r0, 0x18(r6)
lbl_fn_806CDE00_00000AA8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CDE80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806CDE80_00000AF0
    li r3, 0x0
    b lbl_fn_806CDE80_00000B54
lbl_fn_806CDE80_00000AF0:
    mr r3, r30
    bl fn_806B14D0
    mr r31, r3
    bl fn_806B0E30
    clrlwi r0, r3, 24
    cmplw r30, r0
    beq lbl_fn_806CDE80_00000B24
    cmpwi r31, 0x0
    beq lbl_fn_806CDE80_00000B24
    mr r3, r31
    bl fn_806EAC50
    cmpwi r3, 0x1
    beq lbl_fn_806CDE80_00000B48
lbl_fn_806CDE80_00000B24:
    lis r3, 0x1
    lis r4, lbl_807C18C4@ha
    mr r5, r30
    addi r3, r3, -0x8000
    addi r4, r4, lbl_807C18C4@l
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806CDE80_00000B54
lbl_fn_806CDE80_00000B48:
    mr r3, r31
    bl fn_806EABD0
    li r3, 0x1
lbl_fn_806CDE80_00000B54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CDF30(void)
{
    nofralloc
    lis r5, lbl_808608A8@ha
    lwz r6, lbl_808608A8@l(r5)
    cmpwi r6, 0x0
    bne lbl_fn_806CDF30_00000B8C
    li r3, 0x0
    blr
lbl_fn_806CDF30_00000B8C:
    stw r3, 0x800(r6)
    li r3, 0x1
    lwz r5, lbl_808608A8@l(r5)
    stw r4, 0x810(r5)
    blr
}

asm void fn_806CDF60(void)
{
    nofralloc
    lis r5, lbl_808608A8@ha
    lwz r6, lbl_808608A8@l(r5)
    cmpwi r6, 0x0
    bne lbl_fn_806CDF60_00000BBC
    li r3, 0x0
    blr
lbl_fn_806CDF60_00000BBC:
    stw r3, 0x804(r6)
    li r3, 0x1
    lwz r5, lbl_808608A8@l(r5)
    stw r4, 0x814(r5)
    blr
}

asm void fn_806CDF90(void)
{
    nofralloc
    lis r5, lbl_808608A8@ha
    lwz r6, lbl_808608A8@l(r5)
    cmpwi r6, 0x0
    bne lbl_fn_806CDF90_00000BEC
    li r3, 0x0
    blr
lbl_fn_806CDF90_00000BEC:
    stw r3, 0x808(r6)
    li r3, 0x1
    lwz r5, lbl_808608A8@l(r5)
    stw r4, 0x818(r5)
    blr
}

asm void fn_806CDFC0(void)
{
    nofralloc
    lis r5, lbl_808608A8@ha
    lwz r6, lbl_808608A8@l(r5)
    cmpwi r6, 0x0
    bne lbl_fn_806CDFC0_00000C1C
    li r3, 0x0
    blr
lbl_fn_806CDFC0_00000C1C:
    stw r3, 0x80c(r6)
    li r3, 0x1
    lwz r5, lbl_808608A8@l(r5)
    stw r4, 0x81c(r5)
    blr
}

asm void fn_806CDFF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808608A8@ha
    stw r30, 0x8(r1)
    lwz r0, lbl_808608A8@l(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806CDFF0_00000C60
    li r3, 0x0
    b lbl_fn_806CDFF0_00000C84
lbl_fn_806CDFF0_00000C60:
    clrlslwi r30, r3, 24, 6
    add r3, r0, r30
    stw r4, 0x30(r3)
    bl OSGetTime
    lwz r0, lbl_808608A8@l(r31)
    add r5, r0, r30
    stw r4, 0x2c(r5)
    stw r3, 0x28(r5)
    li r3, 0x1
lbl_fn_806CDFF0_00000C84:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CE060(void)
{
    nofralloc
    lis r4, lbl_808608A8@ha
    lwz r4, lbl_808608A8@l(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806CE060_00000CBC
    cmpwi r3, 0x0
    bne lbl_fn_806CE060_00000CC4
lbl_fn_806CE060_00000CBC:
    li r3, 0x0
    blr
lbl_fn_806CE060_00000CC4:
    stw r3, 0x824(r4)
    li r3, 0x1
    blr
}

asm void fn_806CE090(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x828
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808608A8@ha
    stw r3, lbl_808608A8@l(r31)
    bl memset
    lwz r3, lbl_808608A8@l(r31)
    li r0, 0x5b9
    sth r0, 0x820(r3)
    lwz r3, lbl_808608A8@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806CE090_00000D18
    li r0, 0x4e20
    stw r0, 0x824(r3)
lbl_fn_806CE090_00000D18:
    bl fn_806CD540
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CE0F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r30, lbl_808608A8@ha
    mr r26, r3
    lwz r0, lbl_808608A8@l(r30)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    cmpwi r0, 0x0
    beq lbl_fn_806CE0F0_00000E04
    cmpwi r4, 0x0
    beq lbl_fn_806CE0F0_00000D78
    cmpwi r5, 0x0
    bne lbl_fn_806CE0F0_00000D98
lbl_fn_806CE0F0_00000D78:
    lis r4, lbl_807C18E4@ha
    mr r5, r27
    mr r6, r28
    li r3, 0x8
    addi r4, r4, lbl_807C18E4@l
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806CE0F0_00000E04
lbl_fn_806CE0F0_00000D98:
    bl fn_806B1570
    clrlwi r0, r3, 24
    mr r31, r3
    cmplwi r0, 0x20
    bge lbl_fn_806CE0F0_00000DD8
    bl fn_806B0E30
    clrlwi r3, r3, 24
    clrlwi r0, r31, 24
    cmplw r0, r3
    beq lbl_fn_806CE0F0_00000DD8
    bl OSGetTime
    lwz r5, lbl_808608A8@l(r30)
    clrlslwi r0, r31, 24, 6
    add r5, r5, r0
    stw r4, 0x3c(r5)
    stw r3, 0x38(r5)
lbl_fn_806CE0F0_00000DD8:
    cmpwi r29, 0x0
    beq lbl_fn_806CE0F0_00000DF4
    mr r3, r26
    mr r4, r27
    mr r5, r28
    bl fn_806CE910
    b lbl_fn_806CE0F0_00000E04
lbl_fn_806CE0F0_00000DF4:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    bl fn_806CEB00
lbl_fn_806CE0F0_00000E04:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CE1E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808608A8@ha
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, lbl_808608A8@l(r31)
    lwz r0, 0x80c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806CE1E0_00000E74
    bl fn_806B1570
    lwz r5, lbl_808608A8@l(r31)
    mr r0, r3
    mr r3, r30
    lwz r12, 0x80c(r5)
    clrlwi r4, r0, 24
    lwz r5, 0x81c(r5)
    mtctr r12
    bctrl
lbl_fn_806CE1E0_00000E74:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CE250(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_18
    lis r18, lbl_808608A8@ha
    lis r23, lbl_807C1788@ha
    lwz r0, lbl_808608A8@l(r18)
    addi r23, r23, lbl_807C1788@l
    cmpwi r0, 0x0
    beq lbl_fn_806CE250_0000128C
    addi r3, r1, 0x8
    bl fn_806B0EB0
    mr r24, r3
    bl OSGetTime
    lwz r5, lbl_808608A8@l(r18)
    mr r28, r4
    mr r27, r3
    cmpwi r5, 0x0
    beq lbl_fn_806CE250_00000EEC
    lwz r26, 0x824(r5)
    b lbl_fn_806CE250_00000EF0
lbl_fn_806CE250_00000EEC:
    li r26, 0x0
lbl_fn_806CE250_00000EF0:
    bl fn_806B12F0
    cmpwi r3, 0x0
    bne lbl_fn_806CE250_00000F14
    bl fn_806CCB40
    cmpwi r3, 0x0
    beq lbl_fn_806CE250_00000FC0
    bl fn_806CB4C0
    cmpwi r3, 0x0
    beq lbl_fn_806CE250_00000FC0
lbl_fn_806CE250_00000F14:
    li r20, 0x0
    lis r22, lbl_808608A8@ha
    lis r19, 0x8000
    lis r18, 0x1062
    b lbl_fn_806CE250_00000FB4
lbl_fn_806CE250_00000F28:
    lwz r3, 0x8(r1)
    lbzx r21, r3, r20
    bl fn_806B0E30
    clrlwi r0, r3, 24
    cmplw r21, r0
    beq lbl_fn_806CE250_00000FB0
    lwz r0, 0xf8(r19)
    addi r3, r18, 0x4dd3
    lwz r6, lbl_808608A8@l(r22)
    clrlslwi r4, r21, 24, 6
    srwi r0, r0, 2
    li r5, 0x0
    mulhwu r0, r3, r0
    add r3, r6, r4
    lwz r29, 0x3c(r3)
    lwz r25, 0x38(r3)
    subfc r4, r29, r28
    subfe r3, r25, r27
    srwi r6, r0, 6
    bl __div2i
    cmplw r4, r26
    ble lbl_fn_806CE250_00000FB0
    mr r6, r4
    mr r5, r21
    mr r8, r29
    mr r7, r25
    addi r4, r23, 0x180
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    mr r3, r21
    bl fn_806B1A00
    li r3, 0x1
    bl fn_806CB8F0
lbl_fn_806CE250_00000FB0:
    addi r20, r20, 0x1
lbl_fn_806CE250_00000FB4:
    cmpw r20, r24
    blt lbl_fn_806CE250_00000F28
    b lbl_fn_806CE250_0000105C
lbl_fn_806CE250_00000FC0:
    bl fn_806B30A0
    clrlwi r0, r3, 24
    mr r25, r3
    cmplwi r0, 0xff
    beq lbl_fn_806CE250_0000105C
    bl fn_806B0E30
    clrlwi r3, r3, 24
    clrlwi r0, r25, 24
    cmplw r0, r3
    beq lbl_fn_806CE250_0000105C
    lis r4, 0x8000
    lis r3, 0x1062
    lwz r0, 0xf8(r4)
    lis r4, lbl_808608A8@ha
    lwz r6, lbl_808608A8@l(r4)
    addi r3, r3, 0x4dd3
    srwi r0, r0, 2
    clrlslwi r4, r25, 24, 6
    mulhwu r0, r3, r0
    li r5, 0x0
    add r3, r6, r4
    lwz r19, 0x3c(r3)
    lwz r18, 0x38(r3)
    subfc r4, r19, r28
    subfe r3, r18, r27
    srwi r6, r0, 6
    bl __div2i
    cmplw r4, r26
    ble lbl_fn_806CE250_0000105C
    mr r6, r4
    mr r8, r19
    mr r7, r18
    addi r4, r23, 0x1d8
    clrlwi r5, r25, 24
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    clrlwi r3, r25, 24
    bl fn_806B1A00
lbl_fn_806CE250_0000105C:
    li r20, 0x0
    lis r28, 0x8000
    lis r29, 0x1062
    lis r27, lbl_808608A8@ha
    lis r30, 0x1
    lis r31, 0xffff
    li r18, 0x0
    b lbl_fn_806CE250_00001284
lbl_fn_806CE250_0000107C:
    lwz r3, 0x8(r1)
    lbzx r19, r3, r20
    bl fn_806CD610
    mr r3, r19
    bl fn_806B1170
    cmpwi r3, 0x0
    beq lbl_fn_806CE250_00001138
    bl OSGetTime
    lwz r6, lbl_808608A8@l(r27)
    clrlslwi r5, r19, 24, 6
    mr r25, r4
    mr r26, r3
    lwz r0, 0x808(r6)
    add r22, r6, r5
    cmpwi r0, 0x0
    beq lbl_fn_806CE250_00001138
    lwz r21, 0x30(r22)
    cmpwi r21, 0x0
    beq lbl_fn_806CE250_00001138
    lwz r0, 0xf8(r28)
    addi r6, r29, 0x4dd3
    lwz r8, 0x2c(r22)
    li r5, 0x0
    srwi r0, r0, 2
    lwz r7, 0x28(r22)
    mulhwu r0, r6, r0
    subfc r4, r8, r4
    subfe r3, r7, r3
    srwi r6, r0, 6
    bl __div2i
    cmplw r4, r21
    ble lbl_fn_806CE250_00001138
    mr r6, r4
    mr r5, r19
    mr r7, r21
    addi r4, r23, 0x230
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_808608A8@l(r27)
    mr r3, r19
    lwz r12, 0x808(r4)
    lwz r4, 0x818(r4)
    mtctr r12
    bctrl
    stw r25, 0x2c(r22)
    stw r26, 0x28(r22)
lbl_fn_806CE250_00001138:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    cmplw r19, r0
    beq lbl_fn_806CE250_00001280
    lwz r4, lbl_808608A8@l(r27)
    clrlslwi r0, r19, 24, 6
    add r21, r4, r0
    lbz r0, 0x1c(r21)
    cmpwi r0, 0x1
    bne lbl_fn_806CE250_00001280
    lwz r3, 0xc(r21)
    lwz r0, 0x14(r21)
    lhz r4, 0x820(r4)
    subf r22, r3, r0
    cmpw r22, r4
    ble lbl_fn_806CE250_0000117C
    mr r22, r4
lbl_fn_806CE250_0000117C:
    mr r3, r19
    bl fn_806B14D0
    bl fn_806EACF0
    subi r3, r3, 0x207
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r6, r3, r0
    cmpw r6, r22
    bge lbl_fn_806CE250_000011C0
    mr r5, r19
    mr r7, r22
    addi r3, r30, -0x8000
    addi r4, r23, 0x278
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806CE250_00001280
lbl_fn_806CE250_000011C0:
    lwz r4, 0x0(r21)
    mr r3, r19
    lwz r0, 0xc(r21)
    add r25, r4, r0
    bl fn_806B14D0
    mr r26, r3
    bl fn_806CD610
    cmpwi r3, 0x0
    beq lbl_fn_806CE250_00001214
    mr r3, r26
    mr r4, r25
    mr r5, r22
    li r6, 0x1
    bl fn_806EAAD0
    cmpwi r3, 0x0
    beq lbl_fn_806CE250_00001238
    mr r5, r3
    addi r3, r30, -0x8000
    addi r4, r23, 0xb4
    crclr 6
    bl fn_806A76B0
lbl_fn_806CE250_00001214:
    mr r3, r26
    mr r4, r25
    mr r5, r22
    bl fn_806CD740
    cmpwi r3, 0x0
    bne lbl_fn_806CE250_00001238
    subi r4, r31, 0x7d5e
    li r3, 0x6
    bl fn_806A7130
lbl_fn_806CE250_00001238:
    lwz r0, 0xc(r21)
    add r0, r0, r22
    stw r0, 0xc(r21)
    lwz r3, 0x14(r21)
    cmpw r0, r3
    bne lbl_fn_806CE250_00001280
    stb r18, 0x1c(r21)
    stw r18, 0x0(r21)
    stw r18, 0xc(r21)
    stw r18, 0x14(r21)
    lwz r5, lbl_808608A8@l(r27)
    lwz r12, 0x800(r5)
    cmpwi r12, 0x0
    beq lbl_fn_806CE250_00001280
    mr r4, r19
    lwz r5, 0x810(r5)
    mtctr r12
    bctrl
lbl_fn_806CE250_00001280:
    addi r20, r20, 0x1
lbl_fn_806CE250_00001284:
    cmpw r20, r24
    blt lbl_fn_806CE250_0000107C
lbl_fn_806CE250_0000128C:
    addi r11, r1, 0x50
    bl _restgpr_18
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806CE660(void)
{
    nofralloc
    lis r5, lbl_808608A8@ha
    lwz r0, lbl_808608A8@l(r5)
    cmpwi r0, 0x0
    beqlr
    clrlslwi r6, r3, 24, 6
    li r4, 0x0
    add r3, r0, r6
    stw r4, 0xc(r3)
    lwz r0, lbl_808608A8@l(r5)
    add r3, r0, r6
    stw r4, 0x10(r3)
    lwz r0, lbl_808608A8@l(r5)
    add r3, r0, r6
    stw r4, 0x14(r3)
    lwz r0, lbl_808608A8@l(r5)
    add r3, r0, r6
    stw r4, 0x18(r3)
    lwz r0, lbl_808608A8@l(r5)
    add r3, r0, r6
    stb r4, 0x1c(r3)
    lwz r0, lbl_808608A8@l(r5)
    add r3, r0, r6
    stw r4, 0x4(r3)
    lwz r0, lbl_808608A8@l(r5)
    add r3, r0, r6
    stw r4, 0x8(r3)
    lwz r0, lbl_808608A8@l(r5)
    add r3, r0, r6
    stb r4, 0x1d(r3)
    lwz r0, lbl_808608A8@l(r5)
    add r3, r0, r6
    sth r4, 0x22(r3)
    blr
}

asm void fn_806CE6F0(void)
{
    nofralloc
    lis r3, lbl_808608A8@ha
    li r0, 0x0
    stw r0, lbl_808608A8@l(r3)
    b fn_806CD560
}

asm void fn_806CE700(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSGetTime
    lis r5, lbl_808608A8@ha
    clrlslwi r0, r31, 24, 6
    lwz r5, lbl_808608A8@l(r5)
    add r5, r5, r0
    stw r4, 0x3c(r5)
    stw r3, 0x38(r5)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CE750(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r29, lbl_807C1788@ha
    mr r25, r4
    mr r24, r3
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r3, r25
    addi r29, r29, lbl_807C1788@l
    li r30, 0x0
    bl fn_806B14D0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806CE750_00001488
    bl fn_806B12F0
    cmpwi r3, 0x0
    bne lbl_fn_806CE750_00001468
    li r3, 0x0
    bl fn_806CCED0
    mr r30, r3
    lbz r3, 0x16(r3)
    bl fn_806B14D0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806CE750_00001444
    lis r31, 0x1
    mr r5, r24
    mr r6, r25
    addi r4, r29, 0x2b4
    addi r3, r31, -0x8000
    crclr 6
    bl fn_806A76B0
    bl fn_806B0E30
    lbz r5, 0x16(r30)
    clrlwi r6, r3, 24
    addi r3, r31, -0x8000
    addi r4, r29, 0x2e4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806CE750_00001538
lbl_fn_806CE750_00001444:
    lis r3, 0x1
    mr r5, r24
    mr r6, r25
    addi r4, r29, 0x318
    addi r3, r3, -0x8000
    crclr 6
    bl fn_806A76B0
    li r30, 0x1
    b lbl_fn_806CE750_00001488
lbl_fn_806CE750_00001468:
    lis r3, 0x1
    mr r5, r24
    mr r6, r25
    addi r4, r29, 0x2b4
    addi r3, r3, -0x8000
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806CE750_00001538
lbl_fn_806CE750_00001488:
    cmpwi r28, 0x1
    bne lbl_fn_806CE750_00001524
    cmpwi r30, 0x1
    bne lbl_fn_806CE750_00001524
    addi r4, r27, 0x8
    li r3, 0x4
    bl fn_806A72E0
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_806CE750_00001538
    addi r4, r29, 0x344
    li r5, 0x3
    bl fn_8068236C
    li r0, 0x1
    stb r24, 0x3(r30)
    slw r7, r0, r25
    mr r4, r26
    rlwinm r6, r7, 24, 8, 15
    mr r5, r27
    extlwi r0, r7, 8, 8
    addi r3, r30, 0x8
    rlwimi r6, r7, 24, 24, 31
    rlwimi r0, r7, 8, 16, 23
    or r0, r6, r0
    rotlwi r0, r0, 16
    stw r0, 0x4(r30)
    bl fn_806A9CA0
    mr r3, r31
    mr r4, r30
    addi r5, r27, 0x8
    li r6, 0x0
    bl fn_806EAAD0
    cmpwi r30, 0x0
    beq lbl_fn_806CE750_00001538
    mr r4, r30
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    b lbl_fn_806CE750_00001538
lbl_fn_806CE750_00001524:
    mr r3, r31
    mr r4, r26
    mr r5, r27
    li r6, 0x0
    bl fn_806EAAD0
lbl_fn_806CE750_00001538:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CE910(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r29, lbl_807C1788@ha
    mr r26, r4
    mr r27, r5
    addi r29, r29, lbl_807C1788@l
    bl fn_806B1570
    clrlwi r6, r3, 24
    mr r30, r3
    cmplwi r6, 0xff
    bne lbl_fn_806CE910_000015B0
    addi r4, r29, 0x364
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x7d68
    bl fn_806A7130
    b lbl_fn_806CE910_00001724
lbl_fn_806CE910_000015B0:
    lis r31, lbl_808608A8@ha
    clrlslwi r28, r3, 24, 6
    lwz r0, lbl_808608A8@l(r31)
    add r3, r0, r28
    lbz r5, 0x1d(r3)
    cmpwi r5, 0x0
    beq lbl_fn_806CE910_000015F0
    cmpwi r5, 0x1
    beq lbl_fn_806CE910_0000166C
    cmpwi r5, 0x2
    beq lbl_fn_806CE910_00001680
    cmpwi r5, 0x3
    beq lbl_fn_806CE910_00001694
    cmpwi r5, 0x4
    beq lbl_fn_806CE910_000016BC
    b lbl_fn_806CE910_00001704
lbl_fn_806CE910_000015F0:
    mr r4, r26
    addi r3, r1, 0x8
    li r5, 0x8
    bl fn_806A9CA0
    addi r3, r1, 0xe
    addi r4, r29, 0xb0
    li r5, 0x2
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806CE910_0000162C
    lhz r3, 0xc(r1)
    srawi r0, r3, 8
    rlwimi r0, r3, 8, 8, 23
    clrlwi r3, r0, 16
    b lbl_fn_806CE910_00001630
lbl_fn_806CE910_0000162C:
    li r3, 0x0
lbl_fn_806CE910_00001630:
    addis r3, r3, 0x1
    subi r0, r3, 0x2
    clrlwi r0, r0, 16
    cmplwi r0, 0x2
    bgt lbl_fn_806CE910_00001658
    mr r4, r26
    mr r5, r27
    clrlwi r3, r30, 24
    bl fn_806CED40
    b lbl_fn_806CE910_00001724
lbl_fn_806CE910_00001658:
    addi r4, r29, 0x398
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806CE910_00001724
lbl_fn_806CE910_0000166C:
    mr r3, r6
    mr r4, r26
    mr r5, r27
    bl fn_806CED40
    b lbl_fn_806CE910_00001724
lbl_fn_806CE910_00001680:
    mr r3, r6
    mr r4, r26
    mr r5, r27
    bl fn_806CEED0
    b lbl_fn_806CE910_00001724
lbl_fn_806CE910_00001694:
    lbz r0, 0x1e(r3)
    stb r0, 0x1d(r3)
    lhz r4, 0x22(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x2
    bgt lbl_fn_806CE910_00001724
    mr r3, r6
    mr r5, r26
    bl fn_806B97B0
    b lbl_fn_806CE910_00001724
lbl_fn_806CE910_000016BC:
    lwz r5, 0x8(r3)
    mr r6, r27
    addi r4, r29, 0x3b4
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    lwz r0, lbl_808608A8@l(r31)
    li r5, 0x1
    li r4, 0x0
    add r3, r0, r28
    stb r5, 0x1d(r3)
    lwz r0, lbl_808608A8@l(r31)
    add r3, r0, r28
    stw r4, 0x10(r3)
    lwz r0, lbl_808608A8@l(r31)
    add r3, r0, r28
    stw r4, 0x18(r3)
    b lbl_fn_806CE910_00001724
lbl_fn_806CE910_00001704:
    addi r4, r29, 0x3ec
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x7d4a
    bl fn_806A7130
lbl_fn_806CE910_00001724:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CEB00(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r31, lbl_807C1788@ha
    mr r27, r4
    mr r28, r5
    addi r31, r31, lbl_807C1788@l
    bl fn_806B1570
    clrlwi r0, r3, 24
    li r29, 0x0
    cmplwi r0, 0xff
    li r24, 0x0
    bne lbl_fn_806CEB00_000017A4
    addi r4, r31, 0x364
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x7d68
    bl fn_806A7130
    b lbl_fn_806CEB00_0000196C
lbl_fn_806CEB00_000017A4:
    cmplwi r28, 0x14
    mr r30, r3
    blt lbl_fn_806CEB00_000017D8
    mr r3, r27
    addi r4, r31, 0x408
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806CEB00_000017D8
    mr r3, r27
    mr r4, r28
    bl fn_806C9CE0
    b lbl_fn_806CEB00_0000196C
lbl_fn_806CEB00_000017D8:
    cmpwi r28, 0x8
    blt lbl_fn_806CEB00_000017FC
    mr r3, r27
    addi r4, r31, 0x344
    li r5, 0x3
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806CEB00_000017FC
    li r29, 0x1
lbl_fn_806CEB00_000017FC:
    cmpwi r29, 0x1
    bne lbl_fn_806CEB00_000018C8
    lwz r4, 0x4(r27)
    lbz r30, 0x3(r27)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r25, r0, 16
    bl fn_806B12F0
    cmpwi r3, 0x0
    bne lbl_fn_806CEB00_00001854
    bl fn_806B0E30
    clrlwi r3, r3, 24
    li r0, 0x1
    slw r0, r0, r3
    and. r0, r25, r0
    beq lbl_fn_806CEB00_0000196C
    li r24, 0x1
    b lbl_fn_806CEB00_000018C0
    b lbl_fn_806CEB00_0000196C
lbl_fn_806CEB00_00001854:
    mr r5, r30
    mr r6, r25
    addi r4, r31, 0x410
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    li r23, 0x0
    li r26, 0x1
lbl_fn_806CEB00_00001874:
    clrlwi r0, r23, 24
    slw r0, r26, r0
    and. r0, r25, r0
    beq lbl_fn_806CEB00_000018B4
    bl fn_806B0E30
    clrlwi r0, r3, 24
    clrlwi r4, r23, 24
    cmplw r4, r0
    bne lbl_fn_806CEB00_000018A0
    li r24, 0x1
    b lbl_fn_806CEB00_000018B4
lbl_fn_806CEB00_000018A0:
    mr r3, r30
    mr r5, r27
    mr r6, r28
    li r7, 0x0
    bl fn_806CE750
lbl_fn_806CEB00_000018B4:
    addi r23, r23, 0x1
    cmplwi r23, 0x20
    blt lbl_fn_806CEB00_00001874
lbl_fn_806CEB00_000018C0:
    cmpwi r24, 0x0
    beq lbl_fn_806CEB00_0000196C
lbl_fn_806CEB00_000018C8:
    lis r3, lbl_808608A8@ha
    cmpwi r29, 0x1
    lwz r6, lbl_808608A8@l(r3)
    clrlslwi r0, r30, 24, 6
    add r25, r6, r0
    bne lbl_fn_806CEB00_000018E8
    addi r27, r27, 0x8
    subi r28, r28, 0x8
lbl_fn_806CEB00_000018E8:
    lwz r0, 0x4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806CEB00_00001954
    lwz r0, 0x8(r25)
    cmpw r0, r28
    blt lbl_fn_806CEB00_00001954
    lwz r12, 0x804(r6)
    cmpwi r12, 0x0
    beq lbl_fn_806CEB00_00001924
    mr r4, r27
    mr r5, r28
    clrlwi r3, r30, 24
    lwz r6, 0x814(r6)
    mtctr r12
    bctrl
lbl_fn_806CEB00_00001924:
    lis r3, lbl_808608A8@ha
    lwz r3, lbl_808608A8@l(r3)
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806CEB00_0000196C
    lwz r0, 0x30(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806CEB00_0000196C
    bl OSGetTime
    stw r4, 0x2c(r25)
    stw r3, 0x28(r25)
    b lbl_fn_806CEB00_0000196C
lbl_fn_806CEB00_00001954:
    lwz r6, 0x8(r25)
    mr r5, r28
    addi r4, r31, 0x444
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
lbl_fn_806CEB00_0000196C:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CED40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r6, lbl_808608A8@ha
    lis r30, lbl_807C1788@ha
    lwz r6, lbl_808608A8@l(r6)
    clrlslwi r0, r3, 24, 6
    mr r26, r3
    mr r28, r5
    add r31, r6, r0
    mr r27, r4
    lbz r0, 0x1d(r31)
    addi r30, r30, lbl_807C1788@l
    stb r0, 0x1e(r31)
    addi r3, r1, 0x8
    li r5, 0x8
    bl fn_806A9CA0
    addi r3, r1, 0xe
    addi r4, r30, 0xb0
    li r5, 0x2
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806CED40_000019FC
    lhz r3, 0xc(r1)
    srawi r0, r3, 8
    rlwimi r0, r3, 8, 8, 23
    clrlwi r29, r0, 16
    b lbl_fn_806CED40_00001A00
lbl_fn_806CED40_000019FC:
    li r29, 0x0
lbl_fn_806CED40_00001A00:
    subi r0, r29, 0x2
    cmplwi r0, 0x2
    ble lbl_fn_806CED40_00001AB4
    cmpwi r29, 0x1
    bne lbl_fn_806CED40_00001AD4
    cmplwi r28, 0x8
    beq lbl_fn_806CED40_00001A34
    mr r5, r26
    addi r4, r30, 0x470
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806CED40_00001AF0
lbl_fn_806CED40_00001A34:
    mr r4, r27
    addi r3, r1, 0x10
    li r5, 0x8
    bl fn_806A9CA0
    lwz r6, 0x10(r1)
    li r0, 0x0
    lhz r7, 0x14(r1)
    rlwinm r5, r6, 24, 8, 15
    extlwi r4, r6, 8, 8
    srawi r3, r7, 8
    rlwimi r3, r7, 8, 8, 23
    rlwimi r5, r6, 24, 24, 31
    rlwimi r4, r6, 8, 16, 23
    sth r3, 0x14(r1)
    or r3, r5, r4
    rotlwi r3, r3, 16
    stw r3, 0x10(r1)
    stw r3, 0x18(r31)
    stw r0, 0x10(r31)
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806CED40_00001AA8
    lwz r3, 0x8(r31)
    lwz r0, 0x18(r31)
    cmpw r3, r0
    blt lbl_fn_806CED40_00001AA8
    li r0, 0x2
    stb r0, 0x1d(r31)
    b lbl_fn_806CED40_00001AEC
lbl_fn_806CED40_00001AA8:
    li r0, 0x4
    stb r0, 0x1d(r31)
    b lbl_fn_806CED40_00001AEC
lbl_fn_806CED40_00001AB4:
    mr r5, r29
    addi r4, r30, 0x490
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    li r0, 0x3
    stb r0, 0x1d(r31)
    b lbl_fn_806CED40_00001AEC
lbl_fn_806CED40_00001AD4:
    mr r5, r26
    mr r6, r29
    addi r4, r30, 0x4b0
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
lbl_fn_806CED40_00001AEC:
    sth r29, 0x22(r31)
lbl_fn_806CED40_00001AF0:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CEED0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r6, lbl_808608A8@ha
    clrlslwi r28, r3, 24, 6
    lwz r0, lbl_808608A8@l(r6)
    mr r30, r3
    mr r27, r5
    add r31, r0, r28
    lbz r0, 0x1d(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806CEED0_00001B94
    lwz r6, 0x10(r31)
    lwz r0, 0x8(r31)
    add r3, r6, r5
    cmpw r3, r0
    ble lbl_fn_806CEED0_00001B88
    lis r4, lbl_807C1C68@ha
    li r3, 0x2
    addi r4, r4, lbl_807C1C68@l
    crclr 6
    bl fn_806A76B0
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x7d54
    bl fn_806A7130
    b lbl_fn_806CEED0_00001C58
lbl_fn_806CEED0_00001B88:
    lwz r0, 0x4(r31)
    add r3, r0, r6
    bl fn_806A9CA0
lbl_fn_806CEED0_00001B94:
    lwz r0, 0x10(r31)
    lis r29, lbl_808608A8@ha
    mr r3, r30
    add r0, r0, r27
    stw r0, 0x10(r31)
    lwz r0, lbl_808608A8@l(r29)
    add r4, r0, r28
    lbz r28, 0x1d(r4)
    bl fn_806B14D0
    bl fn_806EACD0
    lis r4, lbl_807C1C80@ha
    lwz r6, 0x10(r31)
    mr r9, r3
    lwz r7, 0x18(r31)
    mr r5, r30
    mr r8, r28
    addi r4, r4, lbl_807C1C80@l
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    lwz r5, 0x18(r31)
    lwz r0, 0x10(r31)
    cmpw r0, r5
    bne lbl_fn_806CEED0_00001C2C
    li r0, 0x1
    stb r0, 0x1d(r31)
    li r0, 0x0
    stw r0, 0x10(r31)
    stw r0, 0x18(r31)
    lwz r6, lbl_808608A8@l(r29)
    lwz r12, 0x804(r6)
    cmpwi r12, 0x0
    beq lbl_fn_806CEED0_00001C2C
    mr r3, r30
    lwz r4, 0x4(r31)
    lwz r6, 0x814(r6)
    mtctr r12
    bctrl
lbl_fn_806CEED0_00001C2C:
    lis r3, lbl_808608A8@ha
    lwz r3, lbl_808608A8@l(r3)
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806CEED0_00001C58
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806CEED0_00001C58
    bl OSGetTime
    stw r4, 0x2c(r31)
    stw r3, 0x28(r31)
lbl_fn_806CEED0_00001C58:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CF030(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808608B0@ha
    stw r30, 0x8(r1)
    lwz r4, lbl_808608B0@l(r31)
    b lbl_fn_806CF030_00001CAC
lbl_fn_806CF030_00001C94:
    lwz r30, 0x18(r4)
    li r3, 0xc
    li r5, 0x0
    bl fn_806A7400
    stw r30, lbl_808608B0@l(r31)
    mr r4, r30
lbl_fn_806CF030_00001CAC:
    cmpwi r4, 0x0
    bne lbl_fn_806CF030_00001C94
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CF090(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    lwz r4, 0x4(r3)
    clrlwi r3, r0, 21
    blr
}

asm void fn_806CF0A0(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    blr
}

asm void fn_806CF0B0(void)
{
    nofralloc
    clrrwi. r0, r5, 11
    bne lbl_fn_806CF0B0_00001D0C
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 11
    or r0, r0, r5
    stw r0, 0x0(r3)
lbl_fn_806CF0B0_00001D0C:
    stw r6, 0x4(r3)
    blr
}

asm void fn_806CF0D0(void)
{
    nofralloc
    stw r4, 0x8(r3)
    blr
}

asm void fn_806CF0E0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    extrwi r0, r3, 2, 19
    srwi r3, r3, 11
    cmplwi r0, 0x3
    bne lbl_fn_806CF0E0_00001D40
    extrwi r0, r3, 1, 29
    b lbl_fn_806CF0E0_00001D44
lbl_fn_806CF0E0_00001D40:
    li r0, 0x0
lbl_fn_806CF0E0_00001D44:
    cmpwi r0, 0x0
    beq lbl_fn_806CF0E0_00001D60
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_806CF0E0_00001D60
    li r3, 0x1
    blr
lbl_fn_806CF0E0_00001D60:
    li r3, 0x0
    blr
}

asm void fn_806CF130(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    extrwi r0, r3, 2, 19
    srwi r3, r3, 11
    cmplwi r0, 0x3
    bne lbl_fn_806CF130_00001D90
    extrwi r3, r3, 1, 29
    blr
lbl_fn_806CF130_00001D90:
    li r3, 0x0
    blr
}

asm void fn_806CF160(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    rlwinm r0, r3, 21, 27, 27
    srwi r3, r3, 11
    cmplwi r0, 0x10
    bne lbl_fn_806CF160_00001DCC
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_806CF160_00001DCC
    li r3, 0x1
    blr
lbl_fn_806CF160_00001DCC:
    li r3, 0x0
    blr
}

asm void fn_806CF190(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 1, 17
    blr
}

asm void fn_806CF1A0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 1, 15
    blr
}

asm void fn_806CF1B0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 2, 19
    blr
}

asm void fn_806CF1C0(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    extrwi r0, r4, 2, 19
    srwi r4, r4, 11
    cmplwi r0, 0x3
    bnelr
    rlwinm r0, r4, 0, 30, 28
    ori r5, r0, 0x4
    clrrwi. r0, r5, 21
    bnelr
    lwz r4, 0x0(r3)
    slwi r0, r5, 11
    rlwimi r0, r4, 0, 21, 31
    stw r0, 0x0(r3)
    blr
}

asm void fn_806CF200(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_806CF200_00001E68
    lwz r5, 0x0(r3)
    lis r4, 0x20
    subi r0, r4, 0x9
    srwi r4, r5, 11
    and r0, r4, r0
    ori r5, r0, 0x8
    b lbl_fn_806CF200_00001E74
lbl_fn_806CF200_00001E68:
    lwz r0, 0x0(r3)
    srwi r5, r0, 11
    rlwinm r5, r5, 0, 29, 27
lbl_fn_806CF200_00001E74:
    clrrwi. r0, r5, 21
    bnelr
    lwz r4, 0x0(r3)
    slwi r0, r5, 11
    rlwimi r0, r4, 0, 21, 31
    stw r0, 0x0(r3)
    blr
}

asm void fn_806CF250(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_806CF250_00001EB8
    lwz r5, 0x0(r3)
    lis r4, 0x20
    subi r0, r4, 0x11
    srwi r4, r5, 11
    and r0, r4, r0
    ori r5, r0, 0x10
    b lbl_fn_806CF250_00001EC4
lbl_fn_806CF250_00001EB8:
    lwz r0, 0x0(r3)
    srwi r5, r0, 11
    rlwinm r5, r5, 0, 28, 26
lbl_fn_806CF250_00001EC4:
    clrrwi. r0, r5, 21
    bnelr
    lwz r4, 0x0(r3)
    slwi r0, r5, 11
    rlwimi r0, r4, 0, 21, 31
    stw r0, 0x0(r3)
    blr
}

asm void fn_806CF2A0(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_806CF2A0_00001F08
    lwz r5, 0x0(r3)
    lis r4, 0x20
    subi r0, r4, 0x21
    srwi r4, r5, 11
    and r0, r4, r0
    ori r5, r0, 0x20
    b lbl_fn_806CF2A0_00001F14
lbl_fn_806CF2A0_00001F08:
    lwz r0, 0x0(r3)
    srwi r5, r0, 11
    rlwinm r5, r5, 0, 27, 25
lbl_fn_806CF2A0_00001F14:
    clrrwi. r0, r5, 21
    bnelr
    lwz r4, 0x0(r3)
    slwi r0, r5, 11
    rlwimi r0, r4, 0, 21, 31
    stw r0, 0x0(r3)
    blr
}

asm void fn_806CF2F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r6, 0x0
    lwz r7, 0x24(r3)
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r6
    bgt lbl_fn_806CF2F0_00001F64
    li r3, 0x0
    b lbl_fn_806CF2F0_00001FC8
lbl_fn_806CF2F0_00001F64:
    rlwinm r5, r6, 24, 8, 15
    extlwi r4, r6, 8, 8
    rlwinm r3, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwimi r5, r6, 24, 24, 31
    rlwimi r4, r6, 8, 16, 23
    or r4, r5, r4
    rlwimi r3, r7, 24, 24, 31
    rlwimi r0, r7, 8, 16, 23
    li r5, 0x8
    or r0, r3, r0
    rotlwi r3, r4, 16
    rotlwi r0, r0, 16
    stw r3, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_806AB8B0
    lbz r0, 0x10(r1)
    xor r3, r30, r30
    srawi r0, r0, 1
    xor r0, r31, r0
    or r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_806CF2F0_00001FC8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806CF3A0(void)
{
    nofralloc
    lis r7, 0x6666
    addi r0, r5, 0x4
    addi r5, r7, 0x6667
    stwu r1, -0x10(r1)
    mulhw r0, r5, r0
    lis r9, lbl_807C1CC0@ha
    stw r31, 0xc(r1)
    li r7, 0x0
    addi r9, r9, lbl_807C1CC0@l
    stw r30, 0x8(r1)
    srawi r0, r0, 1
    srwi r5, r0, 31
    add r8, r0, r5
    cmpwi cr1, r8, 0x0
    ble cr1, lbl_fn_806CF3A0_00002198
    cmpwi r8, 0x8
    subi r10, r8, 0x8
    ble lbl_fn_806CF3A0_0000215C
    li r11, 0x0
    blt cr1, lbl_fn_806CF3A0_00002048
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r8, r0
    bgt lbl_fn_806CF3A0_00002048
    li r11, 0x1
lbl_fn_806CF3A0_00002048:
    cmpwi r11, 0x0
    beq lbl_fn_806CF3A0_0000215C
    addi r0, r10, 0x7
    add r5, r6, r8
    srwi r0, r0, 3
    mtctr r0
    cmpwi r10, 0x0
    subi r5, r5, 0x1
    ble lbl_fn_806CF3A0_0000215C
lbl_fn_806CF3A0_0000206C:
    clrlwi r0, r4, 27
    rotrwi r11, r4, 5
    subf r4, r7, r5
    lbzx r0, r9, r0
    rlwimi r11, r3, 27, 0, 4
    stb r0, 0x0(r4)
    clrlwi r10, r11, 27
    addi r0, r7, 0x1
    subf r4, r0, r5
    lbzx r10, r9, r10
    stb r10, 0x0(r4)
    rotrwi r0, r11, 5
    rlwimi r0, r3, 22, 0, 4
    addi r10, r7, 0x2
    clrlwi r11, r0, 27
    addi r4, r7, 0x3
    rotrwi r0, r0, 5
    subf r10, r10, r5
    lbzx r11, r9, r11
    rlwimi r0, r3, 17, 0, 4
    stb r11, 0x0(r10)
    clrlwi r10, r0, 27
    rotrwi r0, r0, 5
    subf r4, r4, r5
    lbzx r11, r9, r10
    addi r10, r7, 0x4
    rlwimi r0, r3, 12, 0, 4
    stb r11, 0x0(r4)
    clrlwi r11, r0, 27
    subf r10, r10, r5
    rotrwi r4, r0, 5
    lbzx r11, r9, r11
    stb r11, 0x0(r10)
    rlwimi r4, r3, 7, 0, 4
    rotrwi r12, r4, 5
    addi r0, r7, 0x5
    clrlwi r4, r4, 27
    addi r10, r7, 0x6
    subf r31, r0, r5
    lbzx r30, r9, r4
    rlwimi r12, r3, 2, 0, 4
    srwi r11, r3, 5
    rotrwi r3, r12, 5
    addi r0, r7, 0x7
    rlwimi r3, r11, 2, 0, 4
    stb r30, 0x0(r31)
    clrlwi r12, r12, 27
    subf r10, r10, r5
    lbzx r12, r9, r12
    rotrwi r4, r3, 5
    stb r12, 0x0(r10)
    srwi r11, r11, 30
    clrlwi r3, r3, 27
    subf r10, r0, r5
    lbzx r0, r9, r3
    rlwimi r4, r11, 27, 0, 4
    stb r0, 0x0(r10)
    srwi r3, r11, 5
    addi r7, r7, 0x8
    bdnz lbl_fn_806CF3A0_0000206C
lbl_fn_806CF3A0_0000215C:
    subf r0, r7, r8
    add r10, r6, r8
    mtctr r0
    cmpw r7, r8
    subi r10, r10, 0x1
    bge lbl_fn_806CF3A0_00002198
lbl_fn_806CF3A0_00002174:
    clrlwi r0, r4, 27
    subf r5, r7, r10
    lbzx r0, r9, r0
    rotrwi r4, r4, 5
    stb r0, 0x0(r5)
    rlwimi r4, r3, 27, 0, 4
    srwi r3, r3, 5
    addi r7, r7, 0x1
    bdnz lbl_fn_806CF3A0_00002174
lbl_fn_806CF3A0_00002198:
    li r0, 0x0
    stbx r0, r6, r8
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}
