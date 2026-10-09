#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _savegpr_18(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void fn_8068446C(void);
extern void fn_806A7110(void);
extern void fn_806A7130(void);
extern void fn_806A7400(void);
extern void fn_806A76B0(void);
extern void fn_806A9CA0(void);
extern void fn_806ABA10(void);
extern void fn_806ABB70(void);
extern void fn_806ABCC0(void);
extern void fn_806AC360(void);
extern void fn_806AC820(void);
extern void fn_806AC850(void);
extern void fn_806AC8F0(void);
extern void fn_806AC9E0(void);
extern void fn_806ACA80(void);
extern void fn_806ACB10(void);
extern void fn_806ACC80(void);
extern void fn_806ACF20(void);
extern void fn_806AE4A0(void);
extern void fn_806AE4B0(void);
extern void fn_806AE910(void);
extern void fn_806AE960(void);
extern void fn_806AEB10(void);
extern void fn_806AEBB0(void);
extern void fn_806B1A00(void);
extern void fn_806B1CD0(void);
extern void fn_806B1CF0(void);
extern void fn_806B2000(void);
extern void fn_806B2470(void);
extern void fn_806B2600(void);
extern void fn_806B3030(void);
extern void fn_806B3160(void);
extern void fn_806B42B0(void);
extern void fn_806B4940(void);
extern void fn_806B4D20(void);
extern void fn_806B5860(void);
extern void fn_806B8430(void);
extern void fn_806B85B0(void);
extern void fn_806B9500(void);
extern void fn_806B9740(void);
extern void fn_806BB440(void);
extern void fn_806BB5E0(void);
extern void fn_806BBCA0(void);
extern void fn_806CCB70(void);
extern void fn_806CCC90(void);
extern void fn_806CCCB0(void);
extern void fn_806CCED0(void);
extern void fn_806CCF00(void);
extern void fn_806CCF50(void);
extern void fn_806CD3E0(void);
extern void fn_806CD4E0(void);
extern void fn_806CE250(void);
extern void fn_806CE6F0(void);
extern void fn_806D76E0(void);
extern void fn_806D7860(void);
extern void fn_806D8060(void);
extern void fn_806DA880(void);
extern void fn_806DA8B0(void);
extern void fn_806DA8D0(void);
extern void fn_806DA910(void);
extern void fn_806DB0A0(void);
extern void fn_806DB220(void);
extern void fn_806DB310(void);
extern void fn_806EA840(void);
extern void fn_806EA850(void);
extern void fn_806EA8F0(void);
extern void fn_806EAC30(void);
extern void fn_806EAD10(void);
extern void fn_806EAD30(void);
extern void fn_806EEDC0(void);
extern void fn_806EF930(void);
extern void fn_806F87A0(void);
extern void fn_806FFA10(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8076B608[];
extern u8 lbl_807BB380[];
extern u8 lbl_807BDCD0[];
extern u8 lbl_807BDCF8[];
extern u8 lbl_807BDD34[];
extern u8 lbl_807BDD60[];
extern u8 lbl_807BDDB4[];
extern u8 lbl_807BDF60[];
extern u8 lbl_807BE128[];
extern u8 lbl_807BE158[];
extern u8 lbl_807BE174[];
extern u8 lbl_807BE20C[];
extern u8 lbl_807BE220[];
extern u8 lbl_807BE23C[];
extern u8 lbl_8085FF98[];
extern u8 lbl_8085FFA0[];
extern u8 lbl_80860020[];
extern u8 lbl_80860120[];
extern u8 lbl_80862150[];

/* Small data declarations */

/* Function declarations */
void fn_806AF910(void);
void fn_806AFAA0(void);
void fn_806AFDB0(void);
void fn_806B0180(void);
void fn_806B0260(void);
void fn_806B0410(void);
void fn_806B05B0(void);
void fn_806B0950(void);
void fn_806B0980(void);
void fn_806B0CF0(void);
void fn_806B0DE0(void);
void fn_806B0E30(void);
void fn_806B0EB0(void);
void fn_806B0F80(void);
void fn_806B1170(void);
void fn_806B1230(void);
void fn_806B1250(void);
void fn_806B12F0(void);
void fn_806B13C0(void);
void fn_806B14D0(void);
void fn_806B1570(void);
void fn_806B15B0(void);
void fn_806B1660(void);
void fn_806B1680(void);
void fn_806B1710(void);
void fn_806B1730(void);
void fn_806B17B0(void);
void fn_806B1910(void);

asm void fn_806AF910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807BDCF8@ha
    li r3, 0x4
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807BDCF8@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_8085FF98@ha
    lwz r5, lbl_8085FF98@l(r30)
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_8085FF98@l(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806AF910_00000174
    lwz r3, 0x370(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AF910_00000058
    bl fn_806EF930
    lwz r3, lbl_8085FF98@l(r30)
    li r0, 0x0
    stw r0, 0x370(r3)
lbl_fn_806AF910_00000058:
    lis r31, lbl_8085FF98@ha
    li r30, 0x0
    lwz r3, lbl_8085FF98@l(r31)
    stb r30, 0x3b0(r3)
    lwz r3, lbl_8085FF98@l(r31)
    lwz r3, 0xa64(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AF910_00000084
    bl fn_806FFA10
    lwz r3, lbl_8085FF98@l(r31)
    stw r30, 0xa64(r3)
lbl_fn_806AF910_00000084:
    bl fn_806CD4E0
    bl fn_806AE4A0
    bl fn_806F87A0
    bl fn_806AE4B0
    lis r31, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r31)
    lwzu r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AF910_00000124
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_806DA910
    lwz r3, lbl_8085FF98@l(r31)
    li r4, 0x3
    li r5, 0x0
    li r6, 0x0
    addi r3, r3, 0x1c
    bl fn_806DA910
    lwz r3, lbl_8085FF98@l(r31)
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    addi r3, r3, 0x1c
    bl fn_806DA910
    lwz r3, lbl_8085FF98@l(r31)
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    addi r3, r3, 0x1c
    bl fn_806DA910
    lwz r3, lbl_8085FF98@l(r31)
    addi r3, r3, 0x1c
    bl fn_806DA8D0
    lwz r3, lbl_8085FF98@l(r31)
    addi r3, r3, 0x1c
    bl fn_806DA8B0
    lwz r3, lbl_8085FF98@l(r31)
    li r0, 0x0
    stw r0, 0x1c(r3)
lbl_fn_806AF910_00000124:
    bl fn_806AEBB0
    bl fn_806ACF20
    bl fn_806BB5E0
    bl fn_806CE6F0
    lis r31, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r31)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AF910_00000158
    bl fn_806EA850
    lwz r3, lbl_8085FF98@l(r31)
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_806AF910_00000158:
    lis r31, lbl_8085FF98@ha
    li r3, 0x4
    lwz r4, lbl_8085FF98@l(r31)
    li r5, 0x0
    bl fn_806A7400
    li r0, 0x0
    stw r0, lbl_8085FF98@l(r31)
lbl_fn_806AF910_00000174:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806AFAA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806AFAA0_00000480
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AFAA0_00000480
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806AFAA0_000001CC
    b lbl_fn_806AFAA0_00000480
lbl_fn_806AFAA0_000001CC:
    lwz r3, lbl_8085FF98@l(r31)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x1
    beq lbl_fn_806AFAA0_00000200
    cmpwi r0, 0x2
    beq lbl_fn_806AFAA0_000003D4
    cmpwi r0, 0x3
    beq lbl_fn_806AFAA0_000003DC
    cmpwi r0, 0x4
    beq lbl_fn_806AFAA0_000003EC
    cmpwi r0, 0x5
    beq lbl_fn_806AFAA0_000003FC
    b lbl_fn_806AFAA0_00000440
lbl_fn_806AFAA0_00000200:
    bl fn_806D7860
    cmpwi r3, 0x1
    beq lbl_fn_806AFAA0_00000220
    cmpwi r3, 0x2
    beq lbl_fn_806AFAA0_000003B4
    cmpwi r3, 0x3
    beq lbl_fn_806AFAA0_000003C4
    b lbl_fn_806AFAA0_00000440
lbl_fn_806AFAA0_00000220:
    lis r4, lbl_807BDD34@ha
    li r3, 0x10
    addi r4, r4, lbl_807BDD34@l
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_8085FF98@l(r31)
    li r5, 0x10
    li r6, 0xb
    lwz r4, 0x98(r3)
    addi r3, r3, 0x1c
    bl fn_806DA880
    bl fn_806B17B0
    cmpwi r3, 0x0
    bne lbl_fn_806AFAA0_00000480
    lwz r3, lbl_8085FF98@l(r31)
    lis r5, fn_806B2000@ha
    addi r5, r5, fn_806B2000@l
    li r4, 0x0
    addi r3, r3, 0x1c
    li r6, 0x0
    bl fn_806DA910
    bl fn_806B17B0
    cmpwi r3, 0x0
    bne lbl_fn_806AFAA0_00000480
    lwz r3, lbl_8085FF98@l(r31)
    lis r5, fn_806B2470@ha
    addi r5, r5, fn_806B2470@l
    li r4, 0x3
    addi r3, r3, 0x1c
    li r6, 0x0
    bl fn_806DA910
    bl fn_806B17B0
    cmpwi r3, 0x0
    bne lbl_fn_806AFAA0_00000480
    lwz r3, lbl_8085FF98@l(r31)
    lis r5, fn_806ACA80@ha
    addi r5, r5, fn_806ACA80@l
    li r4, 0x7
    addi r3, r3, 0x1c
    li r6, 0x0
    bl fn_806DA910
    bl fn_806B17B0
    cmpwi r3, 0x0
    bne lbl_fn_806AFAA0_00000480
    lwz r3, lbl_8085FF98@l(r31)
    lis r5, fn_806AC9E0@ha
    addi r5, r5, fn_806AC9E0@l
    li r4, 0x1
    addi r3, r3, 0x1c
    li r6, 0x0
    bl fn_806DA910
    bl fn_806B17B0
    cmpwi r3, 0x0
    bne lbl_fn_806AFAA0_00000480
    lwz r3, lbl_8085FF98@l(r31)
    lis r5, fn_806ACB10@ha
    addi r5, r5, fn_806ACB10@l
    li r4, 0x2
    addi r3, r3, 0x1c
    li r6, 0x0
    bl fn_806DA910
    bl fn_806B17B0
    cmpwi r3, 0x0
    bne lbl_fn_806AFAA0_00000480
    lwz r7, lbl_8085FF98@l(r31)
    lis r8, lbl_8076B608@ha
    addi r8, r8, lbl_8076B608@l
    lis r4, lbl_807BDD60@ha
    lwz r6, 0x8(r8)
    addi r5, r1, 0x8
    lwz r12, 0x0(r8)
    addi r4, r4, lbl_807BDD60@l
    lwz r11, 0x4(r8)
    li r3, 0x4
    lwz r10, 0xc(r8)
    lwz r9, 0x10(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x8(r1)
    slwi r0, r0, 2
    stw r11, 0xc(r1)
    stw r6, 0x10(r1)
    stw r10, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r31)
    li r0, 0x2
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r31)
    stw r0, 0x24(r3)
    bl fn_806AE910
    cmpwi r3, 0x0
    bne lbl_fn_806AFAA0_00000440
    li r3, 0x2
    li r4, -0x4e84
    bl fn_806AEB10
    b lbl_fn_806AFAA0_00000440
lbl_fn_806AFAA0_000003B4:
    li r3, 0x3
    li r4, -0x4e8e
    bl fn_806AEB10
    b lbl_fn_806AFAA0_00000480
lbl_fn_806AFAA0_000003C4:
    li r3, 0x4
    li r4, -0x4e85
    bl fn_806AEB10
    b lbl_fn_806AFAA0_00000480
lbl_fn_806AFAA0_000003D4:
    bl fn_806AE960
    b lbl_fn_806AFAA0_00000440
lbl_fn_806AFAA0_000003DC:
    bl fn_806AC360
    li r3, 0x0
    bl fn_806B5860
    b lbl_fn_806AFAA0_00000440
lbl_fn_806AFAA0_000003EC:
    li r3, 0x1
    bl fn_806B5860
    bl fn_806AC360
    b lbl_fn_806AFAA0_00000440
lbl_fn_806AFAA0_000003FC:
    bl fn_806CE250
    bl fn_806AC360
    lwz r3, lbl_8085FF98@l(r31)
    lbz r0, 0x374(r3)
    cmplwi r0, 0x2
    beq lbl_fn_806AFAA0_00000420
    lbz r0, 0x374(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806AFAA0_0000042C
lbl_fn_806AFAA0_00000420:
    li r3, 0x1
    bl fn_806B5860
    b lbl_fn_806AFAA0_00000440
lbl_fn_806AFAA0_0000042C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AFAA0_00000440
    li r3, 0x0
    bl fn_806B5860
lbl_fn_806AFAA0_00000440:
    lis r31, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r31)
    lbz r0, 0x3b0(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806AFAA0_00000480
    lwz r3, 0x370(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AFAA0_00000470
    bl fn_806EF930
    lwz r3, lbl_8085FF98@l(r31)
    li r0, 0x0
    stw r0, 0x370(r3)
lbl_fn_806AFAA0_00000470:
    lis r3, lbl_8085FF98@ha
    li r0, 0x0
    lwz r3, lbl_8085FF98@l(r3)
    stb r0, 0x3b0(r3)
lbl_fn_806AFAA0_00000480:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806AFDB0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    lis r31, lbl_807BDCD0@ha
    addi r31, r31, lbl_807BDCD0@l
    stw r30, 0x128(r1)
    mr r30, r6
    addi r4, r31, 0xac
    stw r29, 0x124(r1)
    mr r29, r5
    stw r28, 0x120(r1)
    mr r28, r3
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    cmpwi r28, 0x0
    bne lbl_fn_806AFDB0_00000500
    addi r4, r31, 0xd0
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806AFDB0_00000848
lbl_fn_806AFDB0_00000500:
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806AFDB0_00000520
    lis r4, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r4)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AFDB0_00000538
lbl_fn_806AFDB0_00000520:
    addi r4, r31, 0xe4
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806AFDB0_00000848
lbl_fn_806AFDB0_00000538:
    stw r29, 0x70(r3)
    cmpwi r28, 0x0
    lwz r3, lbl_8085FF98@l(r4)
    stw r30, 0x74(r3)
    beq lbl_fn_806AFDB0_00000558
    lhz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806AFDB0_00000560
lbl_fn_806AFDB0_00000558:
    li r30, 0x0
    b lbl_fn_806AFDB0_000005B0
lbl_fn_806AFDB0_00000560:
    lwz r3, lbl_8085FF98@l(r4)
    li r4, 0x0
    li r5, 0x34
    addi r3, r3, 0x30
    bl memset
    mr r3, r28
    bl fn_806ABCC0
    cmplwi r3, 0x19
    bgt lbl_fn_806AFDB0_00000590
    mr r3, r28
    bl fn_806ABCC0
    b lbl_fn_806AFDB0_00000594
lbl_fn_806AFDB0_00000590:
    li r3, 0x19
lbl_fn_806AFDB0_00000594:
    lis r4, lbl_8085FF98@ha
    mr r30, r3
    lwz r6, lbl_8085FF98@l(r4)
    slwi r5, r3, 1
    mr r4, r28
    addi r3, r6, 0x30
    bl fn_806A9CA0
lbl_fn_806AFDB0_000005B0:
    lis r3, lbl_8085FF98@ha
    slwi r0, r30, 1
    lwz r4, lbl_8085FF98@l(r3)
    li r5, 0x0
    addi r3, r31, 0xf4
    add r4, r4, r0
    sth r5, 0x30(r4)
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    addi r3, r31, 0x110
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    addi r3, r31, 0x12c
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    addi r3, r31, 0x14c
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    lis r0, lbl_80862150@ha
    addic. r30, r0, 8528
    beq lbl_fn_806AFDB0_000007C0
    mr r5, r30
    addi r3, r1, 0x20
    addi r4, r31, 0x16c
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    mr r5, r30
    addi r3, r1, 0x20
    addi r4, r31, 0x190
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    mr r5, r30
    addi r3, r1, 0x20
    addi r4, r31, 0x1b0
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    mr r5, r30
    addi r3, r1, 0x20
    addi r4, r31, 0x1d0
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    mr r5, r30
    addi r3, r1, 0x20
    addi r4, r31, 0x1f0
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    mr r5, r30
    addi r3, r1, 0x20
    addi r4, r31, 0x210
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    mr r5, r30
    addi r3, r1, 0x20
    addi r4, r31, 0x234
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_000007B0
    lis r4, lbl_807BB380@ha
    lis r3, 0x9cd0
    addi r4, r4, lbl_807BB380@l
    li r7, 0x0
    lwz r5, 0x38(r4)
    subi r4, r3, 0x6ce7
    b lbl_fn_806AFDB0_00000764
    nop
lbl_fn_806AFDB0_00000730:
    extsb r6, r3
    li r3, 0x1
    cmplwi r6, 0xff
    bgt lbl_fn_806AFDB0_00000744
    li r3, 0x0
lbl_fn_806AFDB0_00000744:
    mullw r0, r7, r4
    cmpwi r3, 0x0
    beq lbl_fn_806AFDB0_00000754
    b lbl_fn_806AFDB0_0000075C
lbl_fn_806AFDB0_00000754:
    lwz r3, 0x10(r5)
    lbzx r6, r3, r6
lbl_fn_806AFDB0_0000075C:
    add r7, r0, r6
    addi r30, r30, 0x1
lbl_fn_806AFDB0_00000764:
    lbz r3, 0x0(r30)
    extsb. r0, r3
    bne lbl_fn_806AFDB0_00000730
    lis r3, 0xcccd
    lis r5, lbl_80862150@ha
    subi r0, r3, 0x3333
    addi r4, r31, 0x258
    mulhwu r0, r0, r7
    addi r3, r1, 0x20
    addi r5, r5, lbl_80862150@l
    srwi r0, r0, 4
    mulli r0, r0, 0x14
    subf r6, r0, r7
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_806D8060
    cmpwi r3, 0x0
    bne lbl_fn_806AFDB0_000007C0
lbl_fn_806AFDB0_000007B0:
    addi r4, r31, 0x274
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
lbl_fn_806AFDB0_000007C0:
    lis r30, lbl_8085FF98@ha
    lis r8, lbl_8076B608@ha
    lwz r7, lbl_8085FF98@l(r30)
    addi r8, r8, lbl_8076B608@l
    lwz r6, 0x4(r8)
    addi r5, r1, 0x8
    lwz r12, 0x0(r8)
    addi r4, r31, 0x90
    lwz r11, 0x8(r8)
    li r3, 0x4
    lwz r10, 0xc(r8)
    lwz r9, 0x10(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x8(r1)
    slwi r0, r0, 2
    stw r6, 0xc(r1)
    stw r11, 0x10(r1)
    stw r10, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r30)
    li r0, 0x1
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r30)
    stw r0, 0x24(r3)
    lwz r3, lbl_8085FF98@l(r30)
    lwz r3, 0x68(r3)
    bl fn_806D76E0
    li r3, 0x1
lbl_fn_806AFDB0_00000848:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_806B0180(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r3, lbl_807BDF60@ha
    mr r25, r4
    addi r4, r3, lbl_807BDF60@l
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806B0180_000008DC
    lis r31, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r31)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x3
    blt lbl_fn_806B0180_000008DC
    bl fn_806AC820
    cmpwi r3, 0x0
    beq lbl_fn_806B0180_000008F8
lbl_fn_806B0180_000008DC:
    lis r4, lbl_807BDDB4@ha
    li r3, 0x4
    addi r4, r4, lbl_807BDDB4@l
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806B0180_00000938
lbl_fn_806B0180_000008F8:
    lwz r3, lbl_8085FF98@l(r31)
    lis r5, fn_806B1CD0@ha
    mr r7, r27
    mr r8, r28
    stw r25, 0x78(r3)
    mr r9, r29
    mr r10, r30
    addi r5, r5, fn_806B1CD0@l
    lwz r3, lbl_8085FF98@l(r31)
    li r6, 0x0
    stw r26, 0x7c(r3)
    lwz r4, lbl_8085FF98@l(r31)
    addi r3, r4, 0xdc
    addi r4, r4, 0x1dc
    bl fn_806AC850
    li r3, 0x1
lbl_fn_806B0180_00000938:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806B0260(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_18
    lis r30, lbl_807BDCD0@ha
    lis r31, lbl_8085FF98@ha
    addi r30, r30, lbl_807BDCD0@l
    lwz r26, 0x78(r1)
    mr r18, r3
    mr r19, r4
    lwz r27, 0x7c(r1)
    mr r20, r5
    lwz r28, 0x80(r1)
    mr r21, r6
    lwz r29, 0x84(r1)
    mr r22, r7
    mr r23, r8
    mr r24, r9
    mr r25, r10
    addi r31, r31, lbl_8085FF98@l
    addi r4, r30, 0x2bc
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806B0260_000009D0
    lwz r3, 0x0(r31)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x3
    beq lbl_fn_806B0260_000009E8
lbl_fn_806B0260_000009D0:
    addi r4, r30, 0xe4
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806B0260_00000AE0
lbl_fn_806B0260_000009E8:
    addi r3, r31, 0x8
    li r4, 0x0
    li r5, 0x80
    bl memset
    addi r3, r31, 0x88
    li r4, 0x0
    li r5, 0x100
    bl memset
    lwz r3, 0x0(r31)
    lis r8, lbl_8076B608@ha
    addi r8, r8, lbl_8076B608@l
    addi r5, r1, 0x18
    stw r21, 0x80(r3)
    addi r4, r30, 0x90
    li r3, 0x4
    lwz r6, 0x0(r31)
    stw r22, 0x84(r6)
    lwz r7, 0x0(r31)
    lwz r6, 0x10(r8)
    lwz r12, 0x0(r8)
    lwz r11, 0x4(r8)
    lwz r10, 0x8(r8)
    lwz r9, 0xc(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x18(r1)
    slwi r0, r0, 2
    stw r11, 0x1c(r1)
    stw r10, 0x20(r1)
    stw r9, 0x24(r1)
    stw r6, 0x28(r1)
    stw r8, 0x2c(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, 0x0(r31)
    lis r6, fn_806B1CF0@ha
    li r7, 0x4
    li r12, 0x0
    lwz r3, 0x24(r4)
    subi r0, r19, 0x1
    stw r3, 0x28(r4)
    mr r3, r18
    mr r5, r20
    mr r8, r23
    lwz r4, 0x0(r31)
    mr r9, r24
    mr r10, r25
    addi r6, r6, fn_806B1CF0@l
    stw r7, 0x24(r4)
    clrlwi r4, r0, 24
    li r7, 0x0
    lwz r11, 0x0(r31)
    stb r12, 0x375(r11)
    lwz r11, 0x0(r31)
    stw r12, 0xc28(r11)
    stw r26, 0x8(r1)
    stw r27, 0xc(r1)
    stw r28, 0x10(r1)
    stw r29, 0x14(r1)
    bl fn_806B42B0
    li r3, 0x1
lbl_fn_806B0260_00000AE0:
    addi r11, r1, 0x70
    bl _restgpr_18
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806B0410(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_21
    lis r23, lbl_807BDCD0@ha
    lis r31, lbl_8085FF98@ha
    addi r23, r23, lbl_807BDCD0@l
    lwz r30, 0x68(r1)
    mr r24, r3
    mr r25, r4
    mr r21, r5
    mr r22, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    mr r29, r10
    addi r31, r31, lbl_8085FF98@l
    addi r4, r23, 0x314
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806B0410_00000B74
    lwz r3, 0x0(r31)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x3
    beq lbl_fn_806B0410_00000B8C
lbl_fn_806B0410_00000B74:
    addi r4, r23, 0xe4
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806B0410_00000C7C
lbl_fn_806B0410_00000B8C:
    addi r3, r31, 0x8
    li r4, 0x0
    li r5, 0x80
    bl memset
    addi r3, r31, 0x88
    li r4, 0x0
    li r5, 0x100
    bl memset
    lwz r3, 0x0(r31)
    lis r8, lbl_8076B608@ha
    addi r8, r8, lbl_8076B608@l
    addi r5, r1, 0x10
    stw r21, 0x80(r3)
    addi r4, r23, 0x90
    li r3, 0x4
    lwz r6, 0x0(r31)
    stw r22, 0x84(r6)
    lwz r7, 0x0(r31)
    lwz r6, 0x10(r8)
    lwz r12, 0x0(r8)
    lwz r11, 0x4(r8)
    lwz r10, 0x8(r8)
    lwz r9, 0xc(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x10(r1)
    slwi r0, r0, 2
    stw r11, 0x14(r1)
    stw r10, 0x18(r1)
    stw r9, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r8, 0x24(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, 0x0(r31)
    subi r0, r25, 0x1
    lis r5, fn_806B1CF0@ha
    li r6, 0x4
    lwz r3, 0x24(r4)
    li r25, 0x2
    stw r3, 0x28(r4)
    li r12, 0x0
    mr r3, r24
    mr r7, r26
    lwz r4, 0x0(r31)
    mr r8, r27
    mr r9, r28
    mr r10, r29
    stw r6, 0x24(r4)
    clrlwi r4, r0, 24
    addi r5, r5, fn_806B1CF0@l
    li r6, 0x0
    lwz r11, 0x0(r31)
    stb r25, 0x375(r11)
    lwz r11, 0x0(r31)
    stw r12, 0xc28(r11)
    stw r30, 0x8(r1)
    bl fn_806B4940
    li r3, 0x1
lbl_fn_806B0410_00000C7C:
    addi r11, r1, 0x60
    bl _restgpr_21
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806B05B0(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x290
    bl _savegpr_21
    lis r30, lbl_807BDCD0@ha
    lis r31, lbl_8085FF98@ha
    li r0, -0x1
    stw r0, 0x14(r1)
    mr r23, r3
    addi r30, r30, lbl_807BDCD0@l
    mr r24, r4
    lwz r29, 0x298(r1)
    mr r21, r5
    mr r22, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    addi r31, r31, lbl_8085FF98@l
    addi r4, r30, 0x33c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806B05B0_00000D1C
    lwz r3, 0x0(r31)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x3
    beq lbl_fn_806B05B0_00000D34
lbl_fn_806B05B0_00000D1C:
    addi r4, r30, 0xe4
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806B05B0_00001028
lbl_fn_806B05B0_00000D34:
    addi r3, r31, 0x8
    li r4, 0x0
    li r5, 0x80
    bl memset
    addi r3, r31, 0x88
    li r4, 0x0
    li r5, 0x100
    bl memset
    lwz r3, 0x0(r31)
    lis r8, lbl_8076B608@ha
    addi r8, r8, lbl_8076B608@l
    addi r5, r1, 0x30
    stw r21, 0x80(r3)
    addi r4, r30, 0x90
    li r3, 0x4
    lwz r6, 0x0(r31)
    stw r22, 0x84(r6)
    lwz r7, 0x0(r31)
    lwz r6, 0x10(r8)
    lwz r12, 0x0(r8)
    lwz r11, 0x4(r8)
    lwz r10, 0x8(r8)
    lwz r9, 0xc(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x30(r1)
    slwi r0, r0, 2
    stw r11, 0x34(r1)
    stw r10, 0x38(r1)
    stw r9, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r8, 0x44(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r5, 0x0(r31)
    li r0, 0x4
    mr r3, r24
    lwz r4, 0x24(r5)
    stw r4, 0x28(r5)
    lwz r4, 0x0(r31)
    stw r0, 0x24(r4)
    bl fn_806ACC80
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_806B05B0_00000E04
    lwz r3, 0x0(r31)
    mr r4, r24
    addi r3, r3, 0x1c
    bl fn_806DB310
    cmpwi r3, 0x0
    bne lbl_fn_806B05B0_00000E20
lbl_fn_806B05B0_00000E04:
    mr r5, r24
    addi r4, r30, 0x36c
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    li r23, 0xb
    b lbl_fn_806B05B0_00000F64
lbl_fn_806B05B0_00000E20:
    lwz r3, 0x0(r31)
    mr r4, r24
    addi r5, r1, 0x14
    addi r3, r3, 0x1c
    bl fn_806DB220
    lwz r3, 0x0(r31)
    addi r5, r1, 0x48
    lwz r4, 0x14(r1)
    addi r3, r3, 0x1c
    bl fn_806DB0A0
    lwz r0, 0x4c(r1)
    cmpwi r0, 0x6
    beq lbl_fn_806B05B0_00000E70
    mr r5, r24
    addi r4, r30, 0x384
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    li r23, 0xb
    b lbl_fn_806B05B0_00000F64
lbl_fn_806B05B0_00000E70:
    li r0, 0x30
    stb r0, 0x10(r1)
    addi r3, r1, 0x48
    bl fn_806CD3E0
    cmpwi r3, 0x0
    beq lbl_fn_806B05B0_00000EA4
    mr r5, r24
    addi r4, r30, 0x3a0
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    li r23, 0x18
    b lbl_fn_806B05B0_00000F64
lbl_fn_806B05B0_00000EA4:
    addi r3, r30, 0x3b4
    addi r4, r1, 0x10
    addi r5, r1, 0x50
    li r6, 0x2f
    bl fn_806ABA10
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0xa
    bl fn_8068446C
    clrlwi r22, r3, 24
    addi r3, r30, 0x3b8
    addi r4, r1, 0x10
    addi r5, r1, 0x50
    li r6, 0x2f
    bl fn_806ABA10
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0xa
    bl fn_8068446C
    clrlwi r0, r3, 24
    cmplw r0, r22
    bne lbl_fn_806B05B0_00000F18
    mr r5, r24
    addi r4, r30, 0x3bc
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    li r23, 0xc
    b lbl_fn_806B05B0_00000F64
lbl_fn_806B05B0_00000F18:
    lwz r3, 0x0(r31)
    li r4, 0x3
    lis r5, fn_806B1CF0@ha
    li r0, 0x0
    stb r4, 0x375(r3)
    mr r3, r23
    mr r4, r24
    mr r7, r25
    lwz r6, 0x0(r31)
    mr r8, r26
    mr r9, r27
    mr r10, r28
    stw r0, 0xc28(r6)
    addi r5, r5, fn_806B1CF0@l
    li r6, 0x0
    stw r29, 0x8(r1)
    bl fn_806B4D20
    li r3, 0x1
    b lbl_fn_806B05B0_00001028
lbl_fn_806B05B0_00000F64:
    mr r3, r23
    li r4, 0x0
    bl fn_806A7130
    lwz r7, 0x0(r31)
    mr r3, r23
    li r4, 0x0
    li r5, 0x1
    lwz r12, 0x80(r7)
    li r6, 0x0
    lwz r8, 0x84(r7)
    li r7, 0x0
    mtctr r12
    bctrl
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806B05B0_00001024
    lwz r0, 0x24(r3)
    cmpwi r0, 0x4
    bne lbl_fn_806B05B0_00001024
    lis r7, lbl_8076B608@ha
    slwi r0, r0, 2
    addi r7, r7, lbl_8076B608@l
    addi r5, r1, 0x18
    lwz r6, 0xc(r7)
    addi r4, r30, 0x90
    lwz r11, 0x0(r7)
    li r3, 0x4
    lwz r10, 0x4(r7)
    lwz r9, 0x8(r7)
    lwz r8, 0x10(r7)
    lwz r7, 0x14(r7)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r6, 0x24(r1)
    stw r8, 0x28(r1)
    stw r7, 0x2c(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r5, 0x0(r31)
    li r0, 0x3
    li r3, 0x1
    lwz r4, 0x24(r5)
    stw r4, 0x28(r5)
    lwz r4, 0x0(r31)
    stw r0, 0x24(r4)
    bl fn_806BB440
lbl_fn_806B05B0_00001024:
    li r3, 0x1
lbl_fn_806B05B0_00001028:
    addi r11, r1, 0x290
    bl _restgpr_21
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_806B0950(void)
{
    nofralloc
    lis r5, lbl_8085FF98@ha
    lwz r6, lbl_8085FF98@l(r5)
    cmpwi r6, 0x0
    bne lbl_fn_806B0950_00001058
    li r3, 0x0
    blr
lbl_fn_806B0950_00001058:
    stw r3, 0x88(r6)
    li r3, 0x1
    lwz r5, lbl_8085FF98@l(r5)
    stw r4, 0x8c(r5)
    blr
}

asm void fn_806B0980(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r3, 0x4
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807BDCD0@ha
    addi r31, r31, lbl_807BDCD0@l
    stw r30, 0x48(r1)
    li r30, 0x0
    addi r4, r31, 0x40c
    stw r29, 0x44(r1)
    crclr 6
    bl fn_806A76B0
    lis r29, lbl_8085FF98@ha
    li r0, 0x1
    lwz r3, lbl_8085FF98@l(r29)
    stb r0, 0xc45(r3)
    bl fn_806B3160
    cmpwi r3, 0x0
    beq lbl_fn_806B0980_000010C8
    li r3, 0x1
    b lbl_fn_806B0980_000013BC
lbl_fn_806B0980_000010C8:
    lwz r0, lbl_8085FF98@l(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806B0980_000010F8
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806B0980_000010F8
    lwz r4, lbl_8085FF98@l(r29)
    lwz r0, 0x24(r4)
    cmpwi r0, 0x4
    beq lbl_fn_806B0980_00001110
    cmpwi r0, 0x5
    beq lbl_fn_806B0980_00001110
lbl_fn_806B0980_000010F8:
    addi r4, r31, 0xe4
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, -0x1
    b lbl_fn_806B0980_000013BC
lbl_fn_806B0980_00001110:
    lis r3, lbl_8085FFA0@ha
    li r0, 0x4
    addi r3, r3, lbl_8085FFA0@l
    li r5, 0x0
    mtctr r0
    nop
lbl_fn_806B0980_00001128:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B0980_0000113C
    li r30, 0x1
    b lbl_fn_806B0980_000011D4
lbl_fn_806B0980_0000113C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B0980_00001150
    li r30, 0x1
    b lbl_fn_806B0980_000011D4
lbl_fn_806B0980_00001150:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B0980_00001164
    li r30, 0x1
    b lbl_fn_806B0980_000011D4
lbl_fn_806B0980_00001164:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B0980_00001178
    li r30, 0x1
    b lbl_fn_806B0980_000011D4
lbl_fn_806B0980_00001178:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B0980_0000118C
    li r30, 0x1
    b lbl_fn_806B0980_000011D4
lbl_fn_806B0980_0000118C:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B0980_000011A0
    li r30, 0x1
    b lbl_fn_806B0980_000011D4
lbl_fn_806B0980_000011A0:
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B0980_000011B4
    li r30, 0x1
    b lbl_fn_806B0980_000011D4
lbl_fn_806B0980_000011B4:
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B0980_000011C8
    li r30, 0x1
    b lbl_fn_806B0980_000011D4
lbl_fn_806B0980_000011C8:
    addi r3, r3, 0x20
    addi r5, r5, 0x7
    bdnz lbl_fn_806B0980_00001128
lbl_fn_806B0980_000011D4:
    cmpwi r30, 0x0
    bne lbl_fn_806B0980_00001290
    bl fn_806CCCB0
    addi r4, r31, 0x43c
    li r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r3, 0x1
    bl fn_806BB440
    bl fn_806CD4E0
    lis r29, lbl_8085FF98@ha
    lis r8, lbl_8076B608@ha
    lwz r7, lbl_8085FF98@l(r29)
    addi r8, r8, lbl_8076B608@l
    lwz r6, 0xc(r8)
    addi r5, r1, 0x20
    lwz r12, 0x0(r8)
    addi r4, r31, 0x90
    lwz r11, 0x4(r8)
    li r3, 0x4
    lwz r10, 0x8(r8)
    lwz r9, 0x10(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x20(r1)
    slwi r0, r0, 2
    stw r11, 0x24(r1)
    stw r10, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r9, 0x30(r1)
    stw r8, 0x34(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r29)
    li r0, 0x3
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r29)
    stw r0, 0x24(r3)
    bl fn_806B9740
    bl fn_806CCC90
    li r3, 0x0
    bl fn_806CCB70
    bl fn_806BBCA0
    li r3, 0x1
    b lbl_fn_806B0980_000013BC
lbl_fn_806B0980_00001290:
    li r0, 0x1
    stb r0, 0x2d(r4)
    lis r29, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r29)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    b lbl_fn_806B0980_000012F4
lbl_fn_806B0980_000012AC:
    li r30, 0x0
    b lbl_fn_806B0980_000012E8
lbl_fn_806B0980_000012B4:
    mr r3, r30
    bl fn_806CCED0
    lwz r4, lbl_8085FF98@l(r29)
    lwz r5, 0x0(r3)
    lwz r0, 0x64(r4)
    cmpw r5, r0
    beq lbl_fn_806B0980_000012E4
    lbz r6, 0x16(r3)
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl fn_806B2600
lbl_fn_806B0980_000012E4:
    addi r30, r30, 0x1
lbl_fn_806B0980_000012E8:
    bl fn_806CCCB0
    cmpw r30, r3
    blt lbl_fn_806B0980_000012B4
lbl_fn_806B0980_000012F4:
    bl fn_806CCCB0
    cmpwi r3, 0x1
    bgt lbl_fn_806B0980_000012AC
    lis r30, lbl_8085FF98@ha
    li r29, 0x0
    lwz r3, lbl_8085FF98@l(r30)
    stb r29, 0x2d(r3)
    bl fn_806CCC90
    li r3, 0x0
    bl fn_806CCB70
    bl fn_806BBCA0
    lwz r3, lbl_8085FF98@l(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806B0980_00001330
    lwz r29, 0x24(r3)
lbl_fn_806B0980_00001330:
    cmpwi r29, 0x3
    beq lbl_fn_806B0980_000013B8
    bl fn_806CD4E0
    lis r30, lbl_8085FF98@ha
    lis r8, lbl_8076B608@ha
    lwz r7, lbl_8085FF98@l(r30)
    addi r8, r8, lbl_8076B608@l
    lwz r6, 0xc(r8)
    addi r5, r1, 0x8
    lwz r12, 0x0(r8)
    addi r4, r31, 0x90
    lwz r11, 0x4(r8)
    li r3, 0x4
    lwz r10, 0x8(r8)
    lwz r9, 0x10(r8)
    lwz r8, 0x14(r8)
    lwz r0, 0x24(r7)
    stw r12, 0x8(r1)
    slwi r0, r0, 2
    stw r11, 0xc(r1)
    stw r10, 0x10(r1)
    stw r6, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    lwzx r5, r5, r0
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF98@l(r30)
    li r0, 0x3
    lwz r3, 0x24(r4)
    stw r3, 0x28(r4)
    lwz r3, lbl_8085FF98@l(r30)
    stw r0, 0x24(r3)
    bl fn_806B9740
lbl_fn_806B0980_000013B8:
    li r3, 0x0
lbl_fn_806B0980_000013BC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806B0CF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8085FF98@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8085FF98@l(r4)
    cmpwi r3, 0x0
    bne lbl_fn_806B0CF0_0000140C
    li r0, 0x0
    b lbl_fn_806B0CF0_000014A0
lbl_fn_806B0CF0_0000140C:
    beq lbl_fn_806B0CF0_00001440
    lwz r4, 0xaa4(r3)
    subi r0, r4, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_806B0CF0_00001440
    cmpwi r4, 0x0
    beq lbl_fn_806B0CF0_00001440
    lbz r0, 0x36d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B0CF0_00001440
    lbz r0, 0x376(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B0CF0_00001448
lbl_fn_806B0CF0_00001440:
    li r0, 0xff
    b lbl_fn_806B0CF0_00001478
lbl_fn_806B0CF0_00001448:
    li r3, 0x0
    bl fn_806CCED0
    cmpwi r3, 0x0
    bne lbl_fn_806B0CF0_00001474
    lis r4, lbl_807BE128@ha
    li r3, 0x8
    addi r4, r4, lbl_807BE128@l
    crclr 6
    bl fn_806A76B0
    li r0, 0xff
    b lbl_fn_806B0CF0_00001478
lbl_fn_806B0CF0_00001474:
    lbz r0, 0x16(r3)
lbl_fn_806B0CF0_00001478:
    cmplwi r0, 0xff
    bne lbl_fn_806B0CF0_00001488
    li r0, 0x0
    b lbl_fn_806B0CF0_000014A0
lbl_fn_806B0CF0_00001488:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lbz r3, 0x376(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806B0CF0_000014A0:
    cmpwi r0, 0x0
    beq lbl_fn_806B0CF0_000014B4
    mr r3, r31
    bl fn_806B1A00
    b lbl_fn_806B0CF0_000014B8
lbl_fn_806B0CF0_000014B4:
    li r3, -0x3
lbl_fn_806B0CF0_000014B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B0DE0(void)
{
    nofralloc
    lis r3, lbl_8085FF98@ha
    lwz r4, lbl_8085FF98@l(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806B0DE0_00001508
    lbz r0, 0x375(r4)
    li r3, 0x0
    cmplwi r0, 0x2
    beq lbl_fn_806B0DE0_000014FC
    lbz r0, 0x36d(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806B0DE0_00001500
lbl_fn_806B0DE0_000014FC:
    li r3, 0x1
lbl_fn_806B0DE0_00001500:
    cmpwi r3, 0x0
    bne lbl_fn_806B0DE0_00001510
lbl_fn_806B0DE0_00001508:
    li r3, 0x0
    blr
lbl_fn_806B0DE0_00001510:
    b fn_806CCCB0
    blr
}

asm void fn_806B0E30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8085FF98@ha
    stw r0, 0x14(r1)
    lwz r4, lbl_8085FF98@l(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806B0E30_00001564
    lbz r0, 0x375(r4)
    li r3, 0x0
    cmplwi r0, 0x2
    beq lbl_fn_806B0E30_00001558
    lbz r0, 0x36d(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806B0E30_0000155C
lbl_fn_806B0E30_00001558:
    li r3, 0x1
lbl_fn_806B0E30_0000155C:
    cmpwi r3, 0x0
    bne lbl_fn_806B0E30_0000156C
lbl_fn_806B0E30_00001564:
    li r3, 0xff
    b lbl_fn_806B0E30_00001588
lbl_fn_806B0E30_0000156C:
    lwz r3, 0x64(r4)
    bl fn_806CCF00
    cmpwi r3, 0x0
    bne lbl_fn_806B0E30_00001584
    li r3, 0xff
    b lbl_fn_806B0E30_00001588
lbl_fn_806B0E30_00001584:
    lbz r3, 0x16(r3)
lbl_fn_806B0E30_00001588:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B0EB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8085FF98@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, lbl_8085FF98@l(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806B0EB0_000015F4
    lbz r0, 0x375(r4)
    li r3, 0x0
    cmplwi r0, 0x2
    beq lbl_fn_806B0EB0_000015E8
    lbz r0, 0x36d(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806B0EB0_000015EC
lbl_fn_806B0EB0_000015E8:
    li r3, 0x1
lbl_fn_806B0EB0_000015EC:
    cmpwi r3, 0x0
    bne lbl_fn_806B0EB0_000015FC
lbl_fn_806B0EB0_000015F4:
    li r3, 0x0
    b lbl_fn_806B0EB0_00001650
lbl_fn_806B0EB0_000015FC:
    lis r31, lbl_80860120@ha
    li r4, 0x0
    addi r3, r31, lbl_80860120@l
    li r5, 0x20
    bl memset
    addi r31, r31, lbl_80860120@l
    li r30, 0x0
    b lbl_fn_806B0EB0_00001634
lbl_fn_806B0EB0_0000161C:
    mr r3, r30
    bl fn_806CCED0
    lbz r0, 0x16(r3)
    addi r30, r30, 0x1
    stb r0, 0x0(r31)
    addi r31, r31, 0x1
lbl_fn_806B0EB0_00001634:
    bl fn_806CCCB0
    cmpw r30, r3
    blt lbl_fn_806B0EB0_0000161C
    lis r3, lbl_80860120@ha
    addi r3, r3, lbl_80860120@l
    stw r3, 0x0(r29)
    bl fn_806CCCB0
lbl_fn_806B0EB0_00001650:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B0F80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8085FF98@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r4, lbl_8085FF98@l(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806B0F80_000016BC
    lbz r0, 0x375(r4)
    li r3, 0x1
    cmplwi r0, 0x2
    beq lbl_fn_806B0F80_000016B4
    lbz r0, 0x36d(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806B0F80_000016B4
    li r3, 0x0
lbl_fn_806B0F80_000016B4:
    cmpwi r3, 0x0
    bne lbl_fn_806B0F80_000016C4
lbl_fn_806B0F80_000016BC:
    li r3, 0x0
    b lbl_fn_806B0F80_00001840
lbl_fn_806B0F80_000016C4:
    cmpwi r4, 0x0
    beq lbl_fn_806B0F80_000016F4
    lbz r0, 0x375(r4)
    li r3, 0x0
    cmplwi r0, 0x2
    beq lbl_fn_806B0F80_000016E8
    lbz r0, 0x36d(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806B0F80_000016EC
lbl_fn_806B0F80_000016E8:
    li r3, 0x1
lbl_fn_806B0F80_000016EC:
    cmpwi r3, 0x0
    bne lbl_fn_806B0F80_000016FC
lbl_fn_806B0F80_000016F4:
    li r3, 0x0
    b lbl_fn_806B0F80_0000174C
lbl_fn_806B0F80_000016FC:
    lis r31, lbl_80860120@ha
    li r4, 0x0
    addi r3, r31, lbl_80860120@l
    li r5, 0x20
    bl memset
    addi r30, r31, lbl_80860120@l
    li r31, 0x0
    b lbl_fn_806B0F80_00001734
lbl_fn_806B0F80_0000171C:
    mr r3, r31
    bl fn_806CCED0
    lbz r0, 0x16(r3)
    addi r31, r31, 0x1
    stb r0, 0x0(r30)
    addi r30, r30, 0x1
lbl_fn_806B0F80_00001734:
    bl fn_806CCCB0
    cmpw r31, r3
    blt lbl_fn_806B0F80_0000171C
    lis r31, lbl_80860120@ha
    addi r31, r31, lbl_80860120@l
    bl fn_806CCCB0
lbl_fn_806B0F80_0000174C:
    cmpwi cr1, r3, 0x0
    li r0, 0x0
    li r11, 0x0
    ble cr1, lbl_fn_806B0F80_0000183C
    cmpwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_fn_806B0F80_00001810
    li r6, 0x0
    blt cr1, lbl_fn_806B0F80_00001784
    lis r4, 0x8000
    subi r4, r4, 0x2
    cmpw r3, r4
    bgt lbl_fn_806B0F80_00001784
    li r6, 0x1
lbl_fn_806B0F80_00001784:
    cmpwi r6, 0x0
    beq lbl_fn_806B0F80_00001810
    addi r4, r5, 0x7
    li r10, 0x1
    srwi r4, r4, 3
    mtctr r4
    cmpwi r5, 0x0
    ble lbl_fn_806B0F80_00001810
lbl_fn_806B0F80_000017A4:
    add r12, r31, r11
    lbzx r4, r31, r11
    lbz r5, 0x1(r12)
    addi r11, r11, 0x8
    slw r6, r10, r4
    lbz r4, 0x2(r12)
    lbz r8, 0x3(r12)
    or r0, r0, r6
    slw r5, r10, r5
    lbz r7, 0x4(r12)
    or r0, r0, r5
    slw r9, r10, r4
    lbz r6, 0x5(r12)
    or r0, r0, r9
    slw r8, r10, r8
    lbz r5, 0x6(r12)
    lbz r4, 0x7(r12)
    slw r7, r10, r7
    or r0, r0, r8
    slw r6, r10, r6
    or r0, r0, r7
    slw r5, r10, r5
    or r0, r0, r6
    slw r4, r10, r4
    or r0, r0, r5
    or r0, r0, r4
    bdnz lbl_fn_806B0F80_000017A4
lbl_fn_806B0F80_00001810:
    subf r4, r11, r3
    add r5, r31, r11
    li r6, 0x1
    mtctr r4
    cmpw r11, r3
    bge lbl_fn_806B0F80_0000183C
lbl_fn_806B0F80_00001828:
    lbz r3, 0x0(r5)
    addi r5, r5, 0x1
    slw r3, r6, r3
    or r0, r0, r3
    bdnz lbl_fn_806B0F80_00001828
lbl_fn_806B0F80_0000183C:
    mr r3, r0
lbl_fn_806B0F80_00001840:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B1170(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8085FF98@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8085FF98@l(r4)
    cmpwi r4, 0x0
    bne lbl_fn_806B1170_0000188C
    li r3, 0x0
    b lbl_fn_806B1170_00001900
lbl_fn_806B1170_0000188C:
    beq lbl_fn_806B1170_000018B8
    lbz r0, 0x375(r4)
    li r3, 0x0
    cmplwi r0, 0x2
    beq lbl_fn_806B1170_000018AC
    lbz r0, 0x36d(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806B1170_000018B0
lbl_fn_806B1170_000018AC:
    li r3, 0x1
lbl_fn_806B1170_000018B0:
    cmpwi r3, 0x0
    bne lbl_fn_806B1170_000018C0
lbl_fn_806B1170_000018B8:
    li r0, 0xff
    b lbl_fn_806B1170_000018DC
lbl_fn_806B1170_000018C0:
    lwz r3, 0x64(r4)
    bl fn_806CCF00
    cmpwi r3, 0x0
    bne lbl_fn_806B1170_000018D8
    li r0, 0xff
    b lbl_fn_806B1170_000018DC
lbl_fn_806B1170_000018D8:
    lbz r0, 0x16(r3)
lbl_fn_806B1170_000018DC:
    cmplw r31, r0
    bne lbl_fn_806B1170_000018EC
    li r3, 0x0
    b lbl_fn_806B1170_00001900
lbl_fn_806B1170_000018EC:
    mr r3, r31
    bl fn_806CCF50
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_806B1170_00001900:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B1230(void)
{
    nofralloc
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B1230_00001938
    lwz r3, 0x24(r3)
    blr
lbl_fn_806B1230_00001938:
    li r3, 0x0
    blr
}

asm void fn_806B1250(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8085FF98@ha
    stw r0, 0x14(r1)
    lwz r3, lbl_8085FF98@l(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B1250_0000198C
    lwz r4, 0xaa4(r3)
    subi r0, r4, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_806B1250_0000198C
    cmpwi r4, 0x0
    beq lbl_fn_806B1250_0000198C
    lbz r0, 0x36d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B1250_0000198C
    lbz r0, 0x376(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B1250_00001994
lbl_fn_806B1250_0000198C:
    li r3, 0xff
    b lbl_fn_806B1250_000019C4
lbl_fn_806B1250_00001994:
    li r3, 0x0
    bl fn_806CCED0
    cmpwi r3, 0x0
    bne lbl_fn_806B1250_000019C0
    lis r4, lbl_807BE128@ha
    li r3, 0x8
    addi r4, r4, lbl_807BE128@l
    crclr 6
    bl fn_806A76B0
    li r3, 0xff
    b lbl_fn_806B1250_000019C4
lbl_fn_806B1250_000019C0:
    lbz r3, 0x16(r3)
lbl_fn_806B1250_000019C4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B12F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8085FF98@ha
    stw r0, 0x14(r1)
    lwz r3, lbl_8085FF98@l(r3)
    cmpwi r3, 0x0
    bne lbl_fn_806B12F0_00001A04
    li r3, 0x0
    b lbl_fn_806B12F0_00001A98
lbl_fn_806B12F0_00001A04:
    beq lbl_fn_806B12F0_00001A38
    lwz r4, 0xaa4(r3)
    subi r0, r4, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_806B12F0_00001A38
    cmpwi r4, 0x0
    beq lbl_fn_806B12F0_00001A38
    lbz r0, 0x36d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B12F0_00001A38
    lbz r0, 0x376(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B12F0_00001A40
lbl_fn_806B12F0_00001A38:
    li r0, 0xff
    b lbl_fn_806B12F0_00001A70
lbl_fn_806B12F0_00001A40:
    li r3, 0x0
    bl fn_806CCED0
    cmpwi r3, 0x0
    bne lbl_fn_806B12F0_00001A6C
    lis r4, lbl_807BE128@ha
    li r3, 0x8
    addi r4, r4, lbl_807BE128@l
    crclr 6
    bl fn_806A76B0
    li r0, 0xff
    b lbl_fn_806B12F0_00001A70
lbl_fn_806B12F0_00001A6C:
    lbz r0, 0x16(r3)
lbl_fn_806B12F0_00001A70:
    cmplwi r0, 0xff
    bne lbl_fn_806B12F0_00001A80
    li r3, 0x0
    b lbl_fn_806B12F0_00001A98
lbl_fn_806B12F0_00001A80:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lbz r3, 0x376(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_806B12F0_00001A98:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B13C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8085FF98@ha
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r3, lbl_8085FF98@l(r31)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B13C0_00001AF8
    lis r4, lbl_807BE158@ha
    li r3, 0x8
    addi r4, r4, lbl_807BE158@l
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806B13C0_00001B98
lbl_fn_806B13C0_00001AF8:
    li r3, 0x4000
    bl fn_806ABB70
    addis r3, r3, 0x1
    lis r4, lbl_807BE174@ha
    subi r0, r3, 0x4000
    clrlwi r29, r0, 16
    li r3, 0x40
    addi r4, r4, lbl_807BE174@l
    mr r5, r29
    crclr 6
    bl fn_806A76B0
    lwz r30, lbl_8085FF98@l(r31)
    mr r4, r29
    li r3, 0x0
    li r5, 0x0
    bl fn_806EEDC0
    mr r4, r3
    lis r7, fn_806B3030@ha
    lwz r3, lbl_8085FF98@l(r31)
    addi r7, r7, fn_806B3030@l
    lwz r5, 0x14(r30)
    lwz r6, 0x18(r30)
    bl fn_806EA840
    mr r29, r3
    bl fn_806B1910
    cmpwi r3, 0x0
    beq lbl_fn_806B13C0_00001B6C
    mr r3, r29
    b lbl_fn_806B13C0_00001B98
lbl_fn_806B13C0_00001B6C:
    lwz r3, lbl_8085FF98@l(r31)
    lis r4, fn_806B85B0@ha
    addi r4, r4, fn_806B85B0@l
    lwz r3, 0x0(r3)
    bl fn_806EA8F0
    lwz r3, lbl_8085FF98@l(r31)
    lis r4, fn_806B8430@ha
    addi r4, r4, fn_806B8430@l
    lwz r3, 0x0(r3)
    bl fn_806EAD10
    mr r3, r29
lbl_fn_806B13C0_00001B98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B14D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8085FF98@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8085FF98@l(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806B14D0_00001BF4
    li r3, 0x0
    b lbl_fn_806B14D0_00001C44
lbl_fn_806B14D0_00001BF4:
    lis r31, lbl_8085FFA0@ha
    li r30, 0x0
    addi r31, r31, lbl_8085FFA0@l
lbl_fn_806B14D0_00001C00:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806B14D0_00001C30
    bl fn_806EAD30
    lbz r0, 0x1(r3)
    cmplw r29, r0
    bne lbl_fn_806B14D0_00001C30
    lis r3, lbl_8085FFA0@ha
    slwi r0, r30, 2
    addi r3, r3, lbl_8085FFA0@l
    lwzx r3, r3, r0
    b lbl_fn_806B14D0_00001C44
lbl_fn_806B14D0_00001C30:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x20
    blt lbl_fn_806B14D0_00001C00
    li r3, 0x0
lbl_fn_806B14D0_00001C44:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B1570(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806EAD30
    cmpwi r3, 0x0
    beq lbl_fn_806B1570_00001C80
    lbz r3, 0x1(r3)
    b lbl_fn_806B1570_00001C84
lbl_fn_806B1570_00001C80:
    li r3, 0xff
lbl_fn_806B1570_00001C84:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B15B0(void)
{
    nofralloc
    lis r4, lbl_8085FFA0@ha
    li r0, 0x4
    addi r4, r4, lbl_8085FFA0@l
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_806B15B0_00001CB8:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x4(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x10(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x14(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x18(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x1c(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beqlr
    addi r4, r4, 0x20
    addi r3, r3, 0x1
    bdnz lbl_fn_806B15B0_00001CB8
    li r3, -0x1
    blr
}

asm void fn_806B1660(void)
{
    nofralloc
    lis r4, lbl_8085FFA0@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_8085FFA0@l
    add r3, r4, r0
    blr
}

asm void fn_806B1680(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8085FFA0@ha
    addi r31, r31, lbl_8085FFA0@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_806B1680_00001D98:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806B1680_00001DC8
    bl fn_806EAD30
    lwz r0, 0x4(r3)
    cmpw r29, r0
    bne lbl_fn_806B1680_00001DC8
    lis r3, lbl_8085FFA0@ha
    slwi r0, r30, 2
    addi r3, r3, lbl_8085FFA0@l
    add r3, r3, r0
    b lbl_fn_806B1680_00001DDC
lbl_fn_806B1680_00001DC8:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x20
    blt lbl_fn_806B1680_00001D98
    li r3, 0x0
lbl_fn_806B1680_00001DDC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B1710(void)
{
    nofralloc
    lis r4, lbl_80860020@ha
    slwi r0, r3, 3
    addi r4, r4, lbl_80860020@l
    add r3, r4, r0
    blr
}

asm void fn_806B1730(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8085FFA0@ha
    addi r31, r31, lbl_8085FFA0@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_806B1730_00001E48:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806B1730_00001E6C
    bl fn_806EAD30
    lbz r0, 0x1(r3)
    cmplw r29, r0
    bne lbl_fn_806B1730_00001E6C
    li r3, 0x1
    b lbl_fn_806B1730_00001E80
lbl_fn_806B1730_00001E6C:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x20
    blt lbl_fn_806B1730_00001E48
    li r3, 0x0
lbl_fn_806B1730_00001E80:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B17B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_806B17B0_00001ECC
    li r3, 0x0
    b lbl_fn_806B17B0_00001FE0
lbl_fn_806B17B0_00001ECC:
    lis r4, lbl_807BE20C@ha
    mr r5, r29
    addi r4, r4, lbl_807BE20C@l
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x1
    beq lbl_fn_806B17B0_00001F08
    cmpwi r29, 0x2
    beq lbl_fn_806B17B0_00001F14
    cmpwi r29, 0x3
    beq lbl_fn_806B17B0_00001F20
    cmpwi r29, 0x4
    beq lbl_fn_806B17B0_00001F2C
    b lbl_fn_806B17B0_00001F34
lbl_fn_806B17B0_00001F08:
    li r30, 0x9
    li r31, -0x1
    b lbl_fn_806B17B0_00001F34
lbl_fn_806B17B0_00001F14:
    li r30, 0x9
    li r31, -0x2
    b lbl_fn_806B17B0_00001F34
lbl_fn_806B17B0_00001F20:
    li r30, 0x6
    li r31, -0xa
    b lbl_fn_806B17B0_00001F34
lbl_fn_806B17B0_00001F2C:
    li r30, 0x6
    li r31, -0x14
lbl_fn_806B17B0_00001F34:
    lis r3, lbl_8085FF98@ha
    lwz r3, lbl_8085FF98@l(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x1
    beq lbl_fn_806B17B0_00001F5C
    cmpwi r0, 0x2
    beq lbl_fn_806B17B0_00001F74
    cmpwi r0, 0x4
    beq lbl_fn_806B17B0_00001FB0
    b lbl_fn_806B17B0_00001FC8
lbl_fn_806B17B0_00001F5C:
    subis r31, r31, 0x1
    mr r3, r30
    addi r31, r31, 0x11b8
    mr r4, r31
    bl fn_806AEB10
    b lbl_fn_806B17B0_00001FD0
lbl_fn_806B17B0_00001F74:
    lwz r0, 0x94(r3)
    subis r31, r31, 0x1
    addi r31, r31, 0x11b8
    cmpwi r0, 0x1
    bge lbl_fn_806B17B0_00001F98
    mr r3, r30
    mr r4, r31
    bl fn_806AEB10
    b lbl_fn_806B17B0_00001FD0
lbl_fn_806B17B0_00001F98:
    lis r4, lbl_807BE220@ha
    li r3, 0x2
    addi r4, r4, lbl_807BE220@l
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B17B0_00001FD0
lbl_fn_806B17B0_00001FB0:
    subis r31, r31, 0x1
    mr r3, r30
    subi r31, r31, 0x3c68
    mr r4, r31
    bl fn_806B9500
    b lbl_fn_806B17B0_00001FD0
lbl_fn_806B17B0_00001FC8:
    subis r31, r31, 0x1
    subi r31, r31, 0x6378
lbl_fn_806B17B0_00001FD0:
    mr r3, r30
    mr r4, r31
    bl fn_806AC8F0
    mr r3, r29
lbl_fn_806B17B0_00001FE0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B1910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_806B1910_00002024
    li r3, 0x0
    b lbl_fn_806B1910_000020D8
lbl_fn_806B1910_00002024:
    lis r4, lbl_807BE23C@ha
    mr r5, r31
    addi r4, r4, lbl_807BE23C@l
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r31, 0x1
    beq lbl_fn_806B1910_00002078
    cmpwi r31, 0x2
    beq lbl_fn_806B1910_00002084
    cmpwi r31, 0x5
    beq lbl_fn_806B1910_00002084
    cmpwi r31, 0x3
    beq lbl_fn_806B1910_00002094
    cmpwi r31, 0x4
    beq lbl_fn_806B1910_000020A0
    cmpwi r31, 0x6
    beq lbl_fn_806B1910_000020AC
    cmpwi r31, 0x7
    beq lbl_fn_806B1910_000020B8
    b lbl_fn_806B1910_000020C0
lbl_fn_806B1910_00002078:
    li r3, 0x9
    li r4, -0x1
    b lbl_fn_806B1910_000020C0
lbl_fn_806B1910_00002084:
    li r3, 0x0
    li r4, 0x0
    li r31, 0x0
    b lbl_fn_806B1910_000020C0
lbl_fn_806B1910_00002094:
    li r3, 0x6
    li r4, -0xa
    b lbl_fn_806B1910_000020C0
lbl_fn_806B1910_000020A0:
    li r3, 0x6
    li r4, -0x1e
    b lbl_fn_806B1910_000020C0
lbl_fn_806B1910_000020AC:
    li r3, 0x6
    li r4, -0x46
    b lbl_fn_806B1910_000020C0
lbl_fn_806B1910_000020B8:
    li r3, 0x6
    li r4, -0x50
lbl_fn_806B1910_000020C0:
    cmpwi r3, 0x0
    beq lbl_fn_806B1910_000020D4
    subis r4, r4, 0x1
    subi r4, r4, 0x5b8
    bl fn_806AEB10
lbl_fn_806B1910_000020D4:
    mr r3, r31
lbl_fn_806B1910_000020D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
