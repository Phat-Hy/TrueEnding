#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_8067E23C(void);
extern void fn_806809C0(void);
extern void fn_80682428(void);
extern void fn_806A70E0(void);
extern void fn_806A7110(void);
extern void fn_806A7130(void);
extern void fn_806A72E0(void);
extern void fn_806A7400(void);
extern void fn_806A76B0(void);
extern void fn_806A9CA0(void);
extern void fn_806AA690(void);
extern void fn_806AA7C0(void);
extern void fn_806AA7D0(void);
extern void fn_806ABD00(void);
extern void fn_806AC210(void);
extern void fn_806AD2B0(void);
extern void fn_806AD470(void);
extern void fn_806AD770(void);
extern void fn_806B13C0(void);
extern void fn_806B1B60(void);
extern void fn_806B25F0(void);
extern void fn_806B2FC0(void);
extern void fn_806B2FD0(void);
extern void fn_806B3DF0(void);
extern void fn_806B8D60(void);
extern void fn_806BB440(void);
extern void fn_806CD450(void);
extern void fn_806CD460(void);
extern void fn_806CE090(void);
extern void fn_806CF090(void);
extern void fn_806CF0A0(void);
extern void fn_806CF0B0(void);
extern void fn_806CF0D0(void);
extern void fn_806CF0E0(void);
extern void fn_806CF130(void);
extern void fn_806CF190(void);
extern void fn_806CF1B0(void);
extern void fn_806CF1C0(void);
extern void fn_806CF200(void);
extern void fn_806CF250(void);
extern void fn_806CF2A0(void);
extern void fn_806CF3A0(void);
extern void fn_806CF570(void);
extern void fn_806CF960(void);
extern void fn_806CFA30(void);
extern void fn_806CFA80(void);
extern void fn_806CFAA0(void);
extern void fn_806CFD00(void);
extern void fn_806D0060(void);
extern void fn_806D02E0(void);
extern void fn_806D0350(void);
extern void fn_806D0980(void);
extern void fn_806D0C30(void);
extern void fn_806D0EA0(void);
extern void fn_806D1590(void);
extern void fn_806D15E0(void);
extern void fn_806D1600(void);
extern void fn_806D1610(void);
extern void fn_806D1660(void);
extern void fn_806D1670(void);
extern void fn_806D1690(void);
extern void fn_806DA8D0(void);
extern void fn_806DA980(void);
extern void fn_806DAAB0(void);
extern void fn_806DAC00(void);
extern void fn_806DACE0(void);
extern void fn_806DAD50(void);
extern void fn_806DAEE0(void);
extern void fn_806DAF50(void);
extern void fn_806DB220(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807BD290[];
extern u8 lbl_807BD7B8[];
extern u8 lbl_807BD7DC[];
extern u8 lbl_807BD800[];
extern u8 lbl_807BD82C[];
extern u8 lbl_807BD858[];
extern u8 lbl_807BD92C[];
extern u8 lbl_807BD94C[];
extern u8 lbl_807BDCD0[];
extern u8 lbl_8085FF78[];
extern u8 lbl_8085FF88[];
extern u8 lbl_8085FF90[];
extern u8 lbl_8085FF98[];
extern u8 lbl_80862150[];
extern u8 lbl_80862250[];

/* Small data declarations */

/* Function declarations */
void pad_03_806AD8E4_text(void);
void fn_806AD8F0(void);
void fn_806ADC80(void);
void fn_806ADFE0(void);
void fn_806AE2E0(void);
void fn_806AE4A0(void);
void fn_806AE4B0(void);
void fn_806AE4C0(void);
void fn_806AE750(void);
void fn_806AE910(void);
void fn_806AE960(void);
void fn_806AEAF0(void);
void fn_806AEB10(void);
void fn_806AEBB0(void);
void fn_806AEBF0(void);
void fn_806AED20(void);
void fn_806AEF90(void);
void fn_806AF170(void);
void fn_806AF3F0(void);
void fn_806AF670(void);
void fn_806AF6A0(void);

asm void pad_03_806AD8E4_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806AD8F0(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    addi r11, r1, 0x250
    bl _savegpr_23
    lis r31, lbl_807BD290@ha
    mr r29, r5
    lwz r5, 0x4(r4)
    addi r31, r31, lbl_807BD290@l
    mr r27, r3
    lwz r6, 0x8(r4)
    mr r28, r4
    addi r4, r31, 0x2b0
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806AD8F0_00000314
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806AD8F0_00000314
    lis r3, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r3)
    mulli r30, r29, 0xc
    lwz r0, 0x1c(r3)
    add r3, r0, r30
    bl fn_806CF1B0
    cmpwi r3, 0x0
    beq lbl_fn_806AD8F0_00000314
    lwz r5, 0x4(r28)
    cmpwi r5, 0x1
    ble lbl_fn_806AD8F0_000000A0
    addi r4, r31, 0x2cc
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
lbl_fn_806AD8F0_000000A0:
    lis r26, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r26)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806AD8F0_0000037C
    li r23, 0x0
    li r24, 0x0
    b lbl_fn_806AD8F0_00000110
lbl_fn_806AD8F0_000000C0:
    lwz r3, lbl_8085FF78@l(r26)
    mr r4, r29
    lwz r5, 0xc(r28)
    lwz r3, 0x1c(r3)
    lwzx r5, r5, r24
    bl fn_806AD2B0
    cmpwi r3, 0x0
    beq lbl_fn_806AD8F0_00000108
    lwz r5, lbl_8085FF78@l(r26)
    li r4, 0x1
    li r0, 0x601
    lbz r3, 0x20(r5)
    addi r3, r3, 0x1
    stb r3, 0x20(r5)
    lwz r3, lbl_8085FF78@l(r26)
    stb r4, 0x22(r3)
    stw r0, 0x8(r28)
    b lbl_fn_806AD8F0_0000037C
lbl_fn_806AD8F0_00000108:
    addi r24, r24, 0xb0
    addi r23, r23, 0x1
lbl_fn_806AD8F0_00000110:
    lwz r0, 0x4(r28)
    cmpw r23, r0
    blt lbl_fn_806AD8F0_000000C0
    li r23, 0x0
    li r24, 0x0
    lis r26, lbl_8085FF78@ha
    b lbl_fn_806AD8F0_000002C4
lbl_fn_806AD8F0_0000012C:
    lwz r4, 0xc(r28)
    mr r3, r27
    addi r5, r1, 0x8
    lwzx r4, r4, r24
    bl fn_806DB220
    bl fn_806AD770
    lwz r0, 0x8(r1)
    cmpwi r0, -0x1
    bne lbl_fn_806AD8F0_0000019C
    lwz r4, 0xc(r28)
    addi r5, r31, 0x20c
    lwz r3, lbl_8085FF78@l(r26)
    lwzx r25, r4, r24
    lwz r3, 0x4(r3)
    mr r4, r25
    bl fn_806DAD50
    bl fn_806AD770
    mr r5, r25
    addi r4, r31, 0x210
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_8085FF78@l(r26)
    li r4, 0x1
    lwz r0, 0x1c(r3)
    add r3, r0, r30
    bl fn_806CF2A0
    b lbl_fn_806AD8F0_000002BC
lbl_fn_806AD8F0_0000019C:
    lis r27, lbl_8085FF78@ha
    lwz r3, 0xc(r28)
    lwz r5, lbl_8085FF78@l(r27)
    lwz r4, 0x0(r3)
    lwz r0, 0x1c(r5)
    add r3, r0, r30
    bl fn_806D02E0
    lwz r3, lbl_8085FF78@l(r27)
    lwz r0, 0x1c(r3)
    add r3, r0, r30
    bl fn_806CF1C0
    lwz r3, lbl_8085FF78@l(r27)
    li r4, 0x1
    lwz r0, 0x1c(r3)
    add r3, r0, r30
    bl fn_806CF200
    lwz r3, lbl_8085FF78@l(r27)
    lwz r0, 0x1c(r3)
    add r3, r0, r30
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_806AD8F0_00000208
    lwz r3, lbl_8085FF78@l(r27)
    li r4, 0x1
    lwz r0, 0x1c(r3)
    add r3, r0, r30
    bl fn_806CF250
lbl_fn_806AD8F0_00000208:
    lis r3, lbl_8085FF78@ha
    lwz r4, lbl_8085FF78@l(r3)
    lwz r12, 0x48(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806AD8F0_00000238
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_806AD8F0_00000238
    mr r3, r29
    lwz r4, 0x4c(r4)
    mtctr r12
    bctrl
lbl_fn_806AD8F0_00000238:
    lis r27, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r27)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AD8F0_00000288
    lwz r0, 0x1c(r3)
    addi r6, r1, 0x114
    li r4, 0x0
    li r5, 0x0
    add r3, r0, r30
    bl fn_806ABD00
    lwz r6, lbl_8085FF78@l(r27)
    mr r0, r3
    mr r3, r29
    addi r5, r1, 0x114
    lwz r12, 0x38(r6)
    clrlwi r4, r0, 24
    lwz r6, 0x3c(r6)
    mtctr r12
    bctrl
lbl_fn_806AD8F0_00000288:
    lis r6, lbl_8085FF78@ha
    li r4, 0x1
    lwz r5, lbl_8085FF78@l(r6)
    li r0, 0x601
    lbz r3, 0x20(r5)
    addi r3, r3, 0x1
    stb r3, 0x20(r5)
    lwz r3, lbl_8085FF78@l(r6)
    stb r4, 0x22(r3)
    stw r0, 0x8(r28)
    lwz r3, lbl_8085FF78@l(r6)
    stb r4, 0x21(r3)
    b lbl_fn_806AD8F0_0000037C
lbl_fn_806AD8F0_000002BC:
    addi r24, r24, 0xb0
    addi r23, r23, 0x1
lbl_fn_806AD8F0_000002C4:
    lwz r0, 0x4(r28)
    cmpw r23, r0
    blt lbl_fn_806AD8F0_0000012C
    lwz r0, 0x8(r28)
    cmpwi r0, 0x600
    beq lbl_fn_806AD8F0_00000300
    lis r5, lbl_8085FF78@ha
    li r0, 0x1
    lwz r4, lbl_8085FF78@l(r5)
    lbz r3, 0x20(r4)
    addi r3, r3, 0x1
    stb r3, 0x20(r4)
    lwz r3, lbl_8085FF78@l(r5)
    stb r0, 0x22(r3)
    b lbl_fn_806AD8F0_0000037C
lbl_fn_806AD8F0_00000300:
    addi r4, r31, 0x2ec
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806AD8F0_0000037C
lbl_fn_806AD8F0_00000314:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806AD8F0_00000330
    bl fn_806AD770
    cmpwi r3, 0x0
    beq lbl_fn_806AD8F0_0000037C
    b lbl_fn_806AD8F0_0000037C
lbl_fn_806AD8F0_00000330:
    lis r3, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r3)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    beq lbl_fn_806AD8F0_0000035C
    mulli r0, r29, 0xc
    lwz r3, 0x1c(r3)
    add r3, r3, r0
    bl fn_806CF1B0
    cmpwi r3, 0x0
    bne lbl_fn_806AD8F0_0000037C
lbl_fn_806AD8F0_0000035C:
    lis r5, lbl_8085FF78@ha
    li r0, 0x1
    lwz r4, lbl_8085FF78@l(r5)
    lbz r3, 0x20(r4)
    addi r3, r3, 0x1
    stb r3, 0x20(r4)
    lwz r3, lbl_8085FF78@l(r5)
    stb r0, 0x22(r3)
lbl_fn_806AD8F0_0000037C:
    addi r11, r1, 0x250
    bl _restgpr_23
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_806ADC80(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x260
    bl _savegpr_24
    lwz r5, 0x0(r4)
    lis r30, lbl_807BD290@ha
    mr r24, r3
    mr r25, r4
    cmpwi r5, 0x0
    addi r30, r30, lbl_807BD290@l
    li r27, 0x0
    li r26, 0x0
    beq lbl_fn_806ADC80_000003E8
    addi r4, r30, 0x308
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806ADC80_000006E4
lbl_fn_806ADC80_000003E8:
    lwz r5, 0x4(r25)
    addi r4, r30, 0x32c
    addi r6, r25, 0x8e
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r28, 0x0
    li r29, 0x0
    lis r31, lbl_8085FF78@ha
    b lbl_fn_806ADC80_0000058C
lbl_fn_806ADC80_00000410:
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF1B0
    cmpwi r3, 0x1
    bne lbl_fn_806ADC80_000004AC
    bl fn_806AEAF0
    lwz r4, lbl_8085FF78@l(r31)
    addi r5, r1, 0x10
    lwz r0, 0x1c(r4)
    add r4, r0, r29
    bl fn_806D0350
    addi r3, r1, 0x10
    addi r4, r25, 0x8e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806ADC80_00000584
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_806ADC80_0000046C
    li r26, 0x1
lbl_fn_806ADC80_0000046C:
    lwz r4, 0x4(r25)
    mr r3, r24
    bl fn_806DAEE0
    lwz r3, lbl_8085FF78@l(r31)
    lwz r4, 0x4(r25)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806D02E0
    lwz r5, 0x4(r25)
    mr r6, r28
    addi r4, r30, 0x358
    li r27, 0x1
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806ADC80_00000584
lbl_fn_806ADC80_000004AC:
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF1B0
    cmpwi r3, 0x3
    beq lbl_fn_806ADC80_000004DC
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF1B0
    cmpwi r3, 0x2
    bne lbl_fn_806ADC80_00000584
lbl_fn_806ADC80_000004DC:
    bl fn_806AEAF0
    lwz r0, 0x24(r3)
    addi r3, r1, 0x8
    addi r5, r30, 0x384
    li r4, 0x5
    srwi r6, r0, 24
    extrwi r7, r0, 8, 8
    extrwi r8, r0, 8, 16
    clrlwi r9, r0, 24
    crclr 6
    bl fn_806809C0
    bl fn_806AEAF0
    lwz r4, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r4)
    add r4, r0, r29
    bl fn_806D0060
    lwz r0, 0x4(r25)
    cmpw r0, r3
    bne lbl_fn_806ADC80_00000584
    addi r3, r1, 0x8
    addi r4, r25, 0x97
    li r5, 0x4
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806ADC80_00000584
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_806ADC80_0000055C
    li r26, 0x1
lbl_fn_806ADC80_0000055C:
    lwz r4, 0x4(r25)
    mr r3, r24
    bl fn_806DAEE0
    lwz r5, 0x4(r25)
    mr r6, r28
    addi r4, r30, 0x390
    li r27, 0x1
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
lbl_fn_806ADC80_00000584:
    addi r29, r29, 0xc
    addi r28, r28, 0x1
lbl_fn_806ADC80_0000058C:
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x18(r3)
    cmpw r28, r0
    blt lbl_fn_806ADC80_00000410
    cmpwi r27, 0x0
    beq lbl_fn_806ADC80_000006C4
    lwz r24, 0x4(r25)
    addi r5, r30, 0x20c
    lwz r3, 0x4(r3)
    mr r4, r24
    bl fn_806DAD50
    bl fn_806AD770
    mr r5, r24
    addi r4, r30, 0x210
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF78@l(r31)
    lwz r5, 0x4(r25)
    lwz r3, 0x1c(r4)
    lwz r4, 0x18(r4)
    bl fn_806AD470
    lwz r4, lbl_8085FF78@l(r31)
    mulli r25, r3, 0xc
    mr r29, r3
    lwz r0, 0x1c(r4)
    li r4, 0x1
    add r3, r0, r25
    bl fn_806CF200
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r25
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_806ADC80_000006E4
    lwz r3, lbl_8085FF78@l(r31)
    li r4, 0x1
    lwz r0, 0x1c(r3)
    add r3, r0, r25
    bl fn_806CF250
    cmpwi r26, 0x0
    bne lbl_fn_806ADC80_000006E4
    lwz r4, lbl_8085FF78@l(r31)
    lwz r12, 0x48(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806ADC80_00000660
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_806ADC80_00000660
    mr r3, r29
    lwz r4, 0x4c(r4)
    mtctr r12
    bctrl
lbl_fn_806ADC80_00000660:
    lis r24, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r24)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806ADC80_000006B0
    lwz r0, 0x1c(r3)
    addi r6, r1, 0x130
    li r4, 0x0
    li r5, 0x0
    add r3, r0, r25
    bl fn_806ABD00
    lwz r6, lbl_8085FF78@l(r24)
    mr r0, r3
    mr r3, r29
    addi r5, r1, 0x130
    lwz r12, 0x38(r6)
    clrlwi r4, r0, 24
    lwz r6, 0x3c(r6)
    mtctr r12
    bctrl
lbl_fn_806ADC80_000006B0:
    lis r3, lbl_8085FF78@ha
    li r0, 0x1
    lwz r3, lbl_8085FF78@l(r3)
    stb r0, 0x21(r3)
    b lbl_fn_806ADC80_000006E4
lbl_fn_806ADC80_000006C4:
    lwz r4, 0x4(r25)
    mr r3, r24
    bl fn_806DAF50
    lwz r5, 0x4(r25)
    addi r4, r30, 0x3bc
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
lbl_fn_806ADC80_000006E4:
    addi r11, r1, 0x260
    bl _restgpr_24
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_806ADFE0(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x260
    bl _savegpr_25
    lwz r5, 0x0(r4)
    lis r30, lbl_807BD290@ha
    mr r25, r4
    li r27, 0x0
    cmpwi r5, 0x0
    addi r30, r30, lbl_807BD290@l
    li r26, 0x0
    beq lbl_fn_806ADFE0_00000744
    addi r4, r30, 0x3dc
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806ADFE0_000009E0
lbl_fn_806ADFE0_00000744:
    lwz r5, 0x4(r25)
    addi r4, r30, 0x400
    addi r6, r25, 0x8e
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r28, 0x0
    li r29, 0x0
    lis r31, lbl_8085FF78@ha
    b lbl_fn_806ADFE0_000008BC
lbl_fn_806ADFE0_0000076C:
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF1B0
    cmpwi r3, 0x1
    bne lbl_fn_806ADFE0_000007F0
    bl fn_806AEAF0
    lwz r4, lbl_8085FF78@l(r31)
    addi r5, r1, 0x8
    lwz r0, 0x1c(r4)
    add r4, r0, r29
    bl fn_806D0350
    addi r3, r1, 0x8
    addi r4, r25, 0x8e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806ADFE0_000008B4
    lwz r3, lbl_8085FF78@l(r31)
    lwz r4, 0x4(r25)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806D02E0
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF1C0
    lwz r5, 0x4(r25)
    mr r6, r28
    addi r4, r30, 0x42c
    li r27, 0x1
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806ADFE0_000008B4
lbl_fn_806ADFE0_000007F0:
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF1B0
    cmpwi r3, 0x3
    beq lbl_fn_806ADFE0_00000820
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF1B0
    cmpwi r3, 0x2
    bne lbl_fn_806ADFE0_000008B4
lbl_fn_806ADFE0_00000820:
    bl fn_806AEAF0
    lwz r4, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r4)
    add r4, r0, r29
    bl fn_806D0060
    lwz r0, 0x4(r25)
    cmpw r0, r3
    bne lbl_fn_806ADFE0_000008B4
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF130
    cmpwi r3, 0x1
    bne lbl_fn_806ADFE0_00000874
    mr r5, r28
    addi r4, r30, 0x458
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
    li r26, 0x1
    b lbl_fn_806ADFE0_000008B4
lbl_fn_806ADFE0_00000874:
    lwz r3, lbl_8085FF78@l(r31)
    lwz r4, 0x4(r25)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806D02E0
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF1C0
    lwz r5, 0x4(r25)
    mr r6, r28
    addi r4, r30, 0x480
    li r27, 0x1
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
lbl_fn_806ADFE0_000008B4:
    addi r29, r29, 0xc
    addi r28, r28, 0x1
lbl_fn_806ADFE0_000008BC:
    lwz r3, lbl_8085FF78@l(r31)
    lwz r4, 0x18(r3)
    cmpw r28, r4
    blt lbl_fn_806ADFE0_0000076C
    cmpwi r27, 0x0
    beq lbl_fn_806ADFE0_000009C4
    lwz r3, 0x1c(r3)
    lwz r5, 0x4(r25)
    bl fn_806AD470
    cmpwi r26, 0x0
    mr r29, r3
    bne lbl_fn_806ADFE0_000009B0
    lwz r5, lbl_8085FF78@l(r31)
    mulli r26, r3, 0xc
    li r4, 0x1
    lwz r0, 0x1c(r5)
    add r3, r0, r26
    bl fn_806CF200
    lwz r3, lbl_8085FF78@l(r31)
    lwz r0, 0x1c(r3)
    add r3, r0, r26
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_806ADFE0_00000930
    lwz r3, lbl_8085FF78@l(r31)
    li r4, 0x1
    lwz r0, 0x1c(r3)
    add r3, r0, r26
    bl fn_806CF250
lbl_fn_806ADFE0_00000930:
    lis r3, lbl_8085FF78@ha
    lwz r4, lbl_8085FF78@l(r3)
    lwz r12, 0x48(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806ADFE0_00000960
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_806ADFE0_00000960
    mr r3, r29
    lwz r4, 0x4c(r4)
    mtctr r12
    bctrl
lbl_fn_806ADFE0_00000960:
    lis r25, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r25)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806ADFE0_000009B0
    lwz r0, 0x1c(r3)
    addi r6, r1, 0x128
    li r4, 0x0
    li r5, 0x0
    add r3, r0, r26
    bl fn_806ABD00
    lwz r6, lbl_8085FF78@l(r25)
    mr r0, r3
    mr r3, r29
    addi r5, r1, 0x128
    lwz r12, 0x38(r6)
    clrlwi r4, r0, 24
    lwz r6, 0x3c(r6)
    mtctr r12
    bctrl
lbl_fn_806ADFE0_000009B0:
    lis r3, lbl_8085FF78@ha
    li r0, 0x1
    lwz r3, lbl_8085FF78@l(r3)
    stb r0, 0x21(r3)
    b lbl_fn_806ADFE0_000009E0
lbl_fn_806ADFE0_000009C4:
    cmpwi r26, 0x0
    bne lbl_fn_806ADFE0_000009E0
    lwz r5, 0x4(r25)
    addi r4, r30, 0x4b0
    lis r3, 0x2
    crclr 6
    bl fn_806A76B0
lbl_fn_806ADFE0_000009E0:
    addi r11, r1, 0x260
    bl _restgpr_25
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_806AE2E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r9
    stw r30, 0x18(r1)
    mr r30, r7
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    lis r28, lbl_8085FF78@ha
    lwz r4, lbl_8085FF78@l(r28)
    lwz r3, 0x24(r4)
    cmpwi r3, 0x0
    bne lbl_fn_806AE2E0_00000AEC
    cmpwi r4, 0x0
    beq lbl_fn_806AE2E0_00000AF4
    lis r4, 0xffff
    li r3, 0x9
    subi r4, r4, 0x1179
    bl fn_806A7130
    lwz r4, lbl_8085FF78@l(r28)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_806AE2E0_00000A70
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806AE2E0_00000A70
    li r3, 0x1
lbl_fn_806AE2E0_00000A70:
    cmpwi r3, 0x0
    beq lbl_fn_806AE2E0_00000AC0
    lwz r4, 0x60(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806AE2E0_00000AA0
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    lis r3, lbl_8085FF78@ha
    li r0, 0x0
    lwz r3, lbl_8085FF78@l(r3)
    stw r0, 0x60(r3)
lbl_fn_806AE2E0_00000AA0:
    lis r4, lbl_8085FF78@ha
    li r3, 0x9
    lwz r5, lbl_8085FF78@l(r4)
    lwz r12, 0x30(r5)
    lbz r4, 0x21(r5)
    lwz r5, 0x34(r5)
    mtctr r12
    bctrl
lbl_fn_806AE2E0_00000AC0:
    lis r4, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r4)
    cmpwi r3, 0x0
    beq lbl_fn_806AE2E0_00000AF4
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r3, lbl_8085FF78@l(r4)
    stb r0, 0x22(r3)
    lwz r3, lbl_8085FF78@l(r4)
    stb r0, 0x23(r3)
    b lbl_fn_806AE2E0_00000AF4
lbl_fn_806AE2E0_00000AEC:
    subi r0, r3, 0x1
    stw r0, 0x24(r4)
lbl_fn_806AE2E0_00000AF4:
    lis r4, lbl_807BD7B8@ha
    li r3, 0x4
    addi r4, r4, lbl_807BD7B8@l
    crclr 6
    bl fn_806A76B0
    subi r4, r29, 0x2
    li r3, 0x1
    subfic r0, r4, 0x1
    cmpwi r30, 0x0
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r28, r0, 31
    beq lbl_fn_806AE2E0_00000B58
    lis r3, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r3)
    lwz r12, 0x58(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806AE2E0_00000B94
    mr r4, r28
    mr r5, r31
    li r3, 0x1
    mtctr r12
    bctrl
    b lbl_fn_806AE2E0_00000B94
lbl_fn_806AE2E0_00000B58:
    lis r4, lbl_807BD7DC@ha
    li r3, 0x2
    addi r4, r4, lbl_807BD7DC@l
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_8085FF78@ha
    lwz r3, lbl_8085FF78@l(r3)
    lwz r12, 0x58(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806AE2E0_00000B94
    mr r4, r28
    mr r5, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_806AE2E0_00000B94:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806AE4A0(void)
{
    nofralloc
    lis r3, lbl_8085FF88@ha
    li r0, 0x1
    stw r0, lbl_8085FF88@l(r3)
    blr
}

asm void fn_806AE4B0(void)
{
    nofralloc
    lis r3, lbl_8085FF88@ha
    li r0, 0x0
    stw r0, lbl_8085FF88@l(r3)
    blr
}

asm void fn_806AE4C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r3, lbl_8085FF78@ha
    mr r26, r4
    lwz r4, lbl_8085FF78@l(r3)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_806AE4C0_00000C18
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806AE4C0_00000C18
    li r3, 0x1
lbl_fn_806AE4C0_00000C18:
    cmpwi r3, 0x0
    beq lbl_fn_806AE4C0_00000E4C
    lwz r4, 0x60(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806AE4C0_00000C48
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    lis r3, lbl_8085FF78@ha
    li r0, 0x0
    lwz r3, lbl_8085FF78@l(r3)
    stw r0, 0x60(r3)
lbl_fn_806AE4C0_00000C48:
    lwz r5, 0x0(r26)
    cmpwi r5, 0x0
    beq lbl_fn_806AE4C0_00000C98
    lis r4, lbl_807BD800@ha
    li r3, 0x4
    addi r4, r4, lbl_807BD800@l
    crclr 6
    bl fn_806A76B0
    lis r26, lbl_8085FF78@ha
    li r3, 0x0
    lwz r5, lbl_8085FF78@l(r26)
    lwz r12, 0x30(r5)
    lbz r4, 0x21(r5)
    lwz r5, 0x34(r5)
    mtctr r12
    bctrl
    lwz r3, lbl_8085FF78@l(r26)
    li r0, 0x2
    stw r0, 0x0(r3)
    b lbl_fn_806AE4C0_00000E4C
lbl_fn_806AE4C0_00000C98:
    li r28, 0x0
    li r25, 0x0
    lis r27, lbl_807BD82C@ha
    b lbl_fn_806AE4C0_00000CC8
lbl_fn_806AE4C0_00000CA8:
    lwz r5, 0x8(r26)
    addi r4, r27, lbl_807BD82C@l
    li r3, 0x4
    lwzx r5, r5, r25
    crclr 6
    bl fn_806A76B0
    addi r25, r25, 0x1c
    addi r28, r28, 0x1
lbl_fn_806AE4C0_00000CC8:
    lwz r0, 0x4(r26)
    cmpw r28, r0
    blt lbl_fn_806AE4C0_00000CA8
    li r28, 0x0
    li r29, 0x0
    lis r30, lbl_8085FF78@ha
    li r31, 0x1
    b lbl_fn_806AE4C0_00000E18
lbl_fn_806AE4C0_00000CE8:
    lwz r0, 0x1c(r5)
    add r3, r0, r29
    bl fn_806CF1B0
    cmpwi r3, 0x3
    bne lbl_fn_806AE4C0_00000E10
    li r27, 0x0
    li r25, 0x0
    b lbl_fn_806AE4C0_00000D98
lbl_fn_806AE4C0_00000D08:
    bl fn_806AEAF0
    lwz r4, lbl_8085FF78@l(r30)
    lwz r0, 0x1c(r4)
    add r4, r0, r29
    bl fn_806D0060
    lwz r4, 0x8(r26)
    lwzx r0, r4, r25
    cmpw r0, r3
    bne lbl_fn_806AE4C0_00000D90
    lwz r3, lbl_8085FF78@l(r30)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF190
    cmpwi r3, 0x0
    bne lbl_fn_806AE4C0_00000DA4
    lwz r3, lbl_8085FF78@l(r30)
    li r4, 0x1
    stb r31, 0x21(r3)
    lwz r3, lbl_8085FF78@l(r30)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF200
    lwz r3, lbl_8085FF78@l(r30)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_806AE4C0_00000DA4
    lwz r3, lbl_8085FF78@l(r30)
    li r4, 0x1
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF250
    b lbl_fn_806AE4C0_00000DA4
lbl_fn_806AE4C0_00000D90:
    addi r25, r25, 0x1c
    addi r27, r27, 0x1
lbl_fn_806AE4C0_00000D98:
    lwz r0, 0x4(r26)
    cmpw r27, r0
    blt lbl_fn_806AE4C0_00000D08
lbl_fn_806AE4C0_00000DA4:
    lwz r0, 0x4(r26)
    cmpw r27, r0
    bne lbl_fn_806AE4C0_00000DE4
    lwz r3, lbl_8085FF78@l(r30)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF190
    cmpwi r3, 0x1
    bne lbl_fn_806AE4C0_00000DE4
    lwz r3, lbl_8085FF78@l(r30)
    li r4, 0x0
    stb r31, 0x21(r3)
    lwz r3, lbl_8085FF78@l(r30)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF200
lbl_fn_806AE4C0_00000DE4:
    lwz r3, lbl_8085FF78@l(r30)
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_806AE4C0_00000E10
    lwz r3, lbl_8085FF78@l(r30)
    li r4, 0x1
    lwz r0, 0x1c(r3)
    add r3, r0, r29
    bl fn_806CF250
lbl_fn_806AE4C0_00000E10:
    addi r29, r29, 0xc
    addi r28, r28, 0x1
lbl_fn_806AE4C0_00000E18:
    lwz r5, lbl_8085FF78@l(r30)
    lwz r0, 0x18(r5)
    cmpw r28, r0
    blt lbl_fn_806AE4C0_00000CE8
    lwz r12, 0x30(r5)
    li r3, 0x0
    lbz r4, 0x21(r5)
    lwz r5, 0x34(r5)
    mtctr r12
    bctrl
    lwz r3, lbl_8085FF78@l(r30)
    li r0, 0x2
    stw r0, 0x0(r3)
lbl_fn_806AE4C0_00000E4C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806AE750(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lis r29, lbl_807BD858@ha
    mr r22, r3
    addi r29, r29, lbl_807BD858@l
    mr r31, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    addi r4, r29, 0x0
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lis r30, lbl_8085FF90@ha
    mr r3, r22
    stw r22, lbl_8085FF90@l(r30)
    li r4, 0x0
    li r5, 0x268
    bl memset
    lwz r5, lbl_8085FF90@l(r30)
    li r0, 0x0
    addi r4, r29, 0xc
    li r3, 0x20
    stw r23, 0x0(r5)
    lwz r5, lbl_8085FF90@l(r30)
    stw r0, 0x4(r5)
    lwz r5, lbl_8085FF90@l(r30)
    stw r24, 0x8(r5)
    lwz r5, lbl_8085FF90@l(r30)
    stw r25, 0xc(r5)
    lwz r5, lbl_8085FF90@l(r30)
    stw r26, 0x10(r5)
    lwz r5, lbl_8085FF90@l(r30)
    stw r27, 0x14(r5)
    lwz r5, lbl_8085FF90@l(r30)
    stw r28, 0x18(r5)
    lwz r5, lbl_8085FF90@l(r30)
    stw r31, 0x1c(r5)
    crclr 6
    bl fn_806A76B0
    addi r4, r29, 0x38
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    addi r3, r31, 0x4
    bl fn_806CF090
    mr r6, r4
    mr r5, r3
    addi r4, r29, 0x48
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    addi r3, r31, 0x4
    bl fn_806CF0A0
    mr r5, r3
    addi r4, r29, 0x68
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    addi r3, r31, 0x10
    bl fn_806CF090
    mr r6, r4
    mr r5, r3
    addi r4, r29, 0x88
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    addi r3, r31, 0x10
    bl fn_806CF0A0
    mr r5, r3
    addi r4, r29, 0xa8
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    addi r4, r29, 0xc8
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    bl fn_806D1690
    cmpwi r3, 0x0
    beq lbl_fn_806AE750_00000FE8
    bl fn_806D1670
    mr r6, r4
    mr r5, r3
    addi r4, r29, 0x88
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806AE750_00001004
lbl_fn_806AE750_00000FE8:
    bl fn_806D1670
    mr r6, r4
    mr r5, r3
    addi r4, r29, 0x48
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
lbl_fn_806AE750_00001004:
    addi r4, r29, 0xc
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806AE910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806AEF90
    cmpwi r3, 0x0
    beq lbl_fn_806AE910_00001068
    lis r5, lbl_8085FF90@ha
    li r6, 0x1
    lwz r4, lbl_8085FF90@l(r5)
    li r0, 0x0
    li r3, 0x1
    stw r6, 0x4(r4)
    lwz r4, lbl_8085FF90@l(r5)
    stw r0, 0x30(r4)
    b lbl_fn_806AE910_0000106C
lbl_fn_806AE910_00001068:
    li r3, 0x0
lbl_fn_806AE910_0000106C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806AE960(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8085FF90@ha
    stw r30, 0x8(r1)
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AE960_000011F4
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806AE960_000010B0
    b lbl_fn_806AE960_000011F4
lbl_fn_806AE960_000010B0:
    lwz r3, lbl_8085FF90@l(r31)
    lwz r4, 0x4(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x2
    ble lbl_fn_806AE960_000010D4
    cmpwi r4, 0x1
    bne lbl_fn_806AE960_000011E0
    bl fn_806AF170
    b lbl_fn_806AE960_000011F4
lbl_fn_806AE960_000010D4:
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AE960_000010F0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AE960_000010F0
    bl fn_806DA8D0
lbl_fn_806AE960_000010F0:
    lis r31, lbl_8085FF90@ha
    lwz r3, lbl_8085FF90@l(r31)
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806AE960_000011F4
    bl OSGetTime
    lis r5, 0x8000
    lwz r30, lbl_8085FF90@l(r31)
    lwz r0, 0xf8(r5)
    lis r5, 0x1062
    lwz r7, 0x3c(r30)
    addi r5, r5, 0x4dd3
    srwi r0, r0, 2
    lwz r6, 0x38(r30)
    mulhwu r0, r5, r0
    subfc r4, r7, r4
    subfe r3, r6, r3
    li r5, 0x0
    srwi r6, r0, 6
    bl __div2i
    lis r5, 0x1
    li r0, 0x0
    subi r6, r5, 0x15a0
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806AE960_000011F4
    cmpwi r30, 0x0
    beq lbl_fn_806AE960_000011CC
    lis r4, 0xffff
    li r3, 0x6
    addi r4, r4, 0x1172
    bl fn_806A7130
    lwz r3, lbl_8085FF90@l(r31)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806AE960_000011A4
    lwz r5, 0x18(r3)
    li r3, 0x6
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_806AE960_000011A4:
    lis r31, lbl_8085FF90@ha
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AE960_000011CC
    bl fn_806D1660
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r3, lbl_8085FF90@l(r31)
    stw r0, 0x30(r3)
lbl_fn_806AE960_000011CC:
    lis r3, lbl_8085FF90@ha
    li r0, 0x0
    lwz r3, lbl_8085FF90@l(r3)
    stw r0, 0x30(r3)
    b lbl_fn_806AE960_000011F4
lbl_fn_806AE960_000011E0:
    lis r4, lbl_807BD92C@ha
    li r3, 0x4
    addi r4, r4, lbl_807BD92C@l
    crclr 6
    bl fn_806A76B0
lbl_fn_806AE960_000011F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806AEAF0(void)
{
    nofralloc
    lis r3, lbl_8085FF90@ha
    lwz r3, lbl_8085FF90@l(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AEAF0_00001224
    lwz r3, 0x1c(r3)
    blr
lbl_fn_806AEAF0_00001224:
    li r3, 0x0
    blr
}

asm void fn_806AEB10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8085FF90@ha
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AEB10_000012B0
    cmpwi r3, 0x0
    bne lbl_fn_806AEB10_00001260
    b lbl_fn_806AEB10_000012B0
lbl_fn_806AEB10_00001260:
    bl fn_806A7130
    lwz r4, lbl_8085FF90@l(r31)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806AEB10_00001288
    lwz r5, 0x18(r4)
    mr r3, r30
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_806AEB10_00001288:
    lis r31, lbl_8085FF90@ha
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AEB10_000012B0
    bl fn_806D1660
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r3, lbl_8085FF90@l(r31)
    stw r0, 0x30(r3)
lbl_fn_806AEB10_000012B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806AEBB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806D1590
    cmpwi r3, 0x0
    bne lbl_fn_806AEBB0_000012E8
    bl fn_806D0C30
lbl_fn_806AEBB0_000012E8:
    lis r3, lbl_8085FF90@ha
    li r0, 0x0
    stw r0, lbl_8085FF90@l(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806AEBF0(void)
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
    bne lbl_fn_806AEBF0_00001338
    li r3, 0x0
    b lbl_fn_806AEBF0_00001418
lbl_fn_806AEBF0_00001338:
    lis r4, lbl_807BD94C@ha
    mr r5, r29
    addi r4, r4, lbl_807BD94C@l
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x1
    beq lbl_fn_806AEBF0_00001374
    cmpwi r29, 0x2
    beq lbl_fn_806AEBF0_00001380
    cmpwi r29, 0x3
    beq lbl_fn_806AEBF0_0000138C
    cmpwi r29, 0x4
    beq lbl_fn_806AEBF0_00001398
    b lbl_fn_806AEBF0_000013A0
lbl_fn_806AEBF0_00001374:
    li r30, 0x9
    li r3, -0x1
    b lbl_fn_806AEBF0_000013A0
lbl_fn_806AEBF0_00001380:
    li r30, 0x9
    li r3, -0x2
    b lbl_fn_806AEBF0_000013A0
lbl_fn_806AEBF0_0000138C:
    li r30, 0x6
    li r3, -0xa
    b lbl_fn_806AEBF0_000013A0
lbl_fn_806AEBF0_00001398:
    li r30, 0x6
    li r3, -0x14
lbl_fn_806AEBF0_000013A0:
    lis r31, lbl_8085FF90@ha
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AEBF0_00001414
    cmpwi r30, 0x0
    beq lbl_fn_806AEBF0_00001414
    subis r4, r3, 0x1
    mr r3, r30
    addi r4, r4, 0x11b8
    bl fn_806A7130
    lwz r4, lbl_8085FF90@l(r31)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806AEBF0_000013EC
    lwz r5, 0x18(r4)
    mr r3, r30
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_806AEBF0_000013EC:
    lis r31, lbl_8085FF90@ha
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AEBF0_00001414
    bl fn_806D1660
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r3, lbl_8085FF90@l(r31)
    stw r0, 0x30(r3)
lbl_fn_806AEBF0_00001414:
    mr r3, r29
lbl_fn_806AEBF0_00001418:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806AED20(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lis r28, lbl_807BD858@ha
    mr r26, r3
    addi r28, r28, lbl_807BD858@l
    lwz r5, 0x0(r4)
    mr r27, r4
    li r3, 0x20
    addi r4, r28, 0x108
    crclr 6
    bl fn_806A76B0
    lis r29, lbl_8085FF90@ha
    li r0, 0x0
    lwz r3, lbl_8085FF90@l(r29)
    stw r0, 0x30(r3)
    bl fn_806AA690
    mr r30, r4
    mr r31, r3
    bl fn_806AA7C0
    mr r6, r3
    mr r8, r30
    mr r7, r31
    addi r3, r1, 0x8
    addi r5, r28, 0x138
    li r4, 0x1f
    crclr 6
    bl fn_806809C0
    mr r3, r26
    addi r5, r1, 0x8
    li r4, 0x704
    bl fn_806DACE0
    bl fn_806AEBF0
    cmpwi r3, 0x0
    bne lbl_fn_806AED20_00001690
    bl fn_806D1670
    addi r6, r1, 0x28
    li r5, 0x2b
    bl fn_806CF3A0
    mr r3, r26
    addi r5, r1, 0x28
    li r4, 0x717
    bl fn_806DACE0
    bl fn_806AEBF0
    cmpwi r3, 0x0
    bne lbl_fn_806AED20_00001690
    bl fn_806AA7D0
    mr r5, r3
    mr r3, r26
    li r4, 0x708
    bl fn_806DACE0
    bl fn_806AEBF0
    cmpwi r3, 0x0
    bne lbl_fn_806AED20_00001690
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    bne lbl_fn_806AED20_0000168C
    lwz r3, lbl_8085FF90@l(r29)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806AED20_00001654
    lwz r3, 0x1c(r3)
    lwz r0, 0x4(r27)
    lwz r3, 0x1c(r3)
    cmpw r3, r0
    bne lbl_fn_806AED20_000015B8
    addi r4, r28, 0x144
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF90@l(r29)
    li r0, 0x5
    li r3, 0x1
    stw r0, 0x4(r4)
    bl fn_806BB440
    bl fn_806AEBF0
    cmpwi r3, 0x0
    bne lbl_fn_806AED20_00001690
    lwz r5, lbl_8085FF90@l(r29)
    li r3, 0x0
    lwz r4, 0x4(r27)
    lwz r12, 0x14(r5)
    lwz r5, 0x18(r5)
    mtctr r12
    bctrl
    bl fn_806B13C0
    cmpwi r3, 0x0
    bne lbl_fn_806AED20_00001690
    lwz r3, 0x4(r27)
    bl fn_806CD450
    bl fn_806CD460
    b lbl_fn_806AED20_00001690
    b lbl_fn_806AED20_00001690
lbl_fn_806AED20_000015B8:
    addi r4, r28, 0x160
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    addi r4, r28, 0x180
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    addi r4, r28, 0x1a4
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lwz r0, lbl_8085FF90@l(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806AED20_00001690
    lis r4, 0xffff
    li r3, 0x6
    addi r4, r4, 0x15a0
    bl fn_806A7130
    lwz r3, lbl_8085FF90@l(r29)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806AED20_00001628
    lwz r5, 0x18(r3)
    li r3, 0x6
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_806AED20_00001628:
    lis r31, lbl_8085FF90@ha
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AED20_00001690
    bl fn_806D1660
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r3, lbl_8085FF90@l(r31)
    stw r0, 0x30(r3)
    b lbl_fn_806AED20_00001690
lbl_fn_806AED20_00001654:
    cmpwi r0, 0x3
    bne lbl_fn_806AED20_00001690
    lis r7, fn_806AF3F0@ha
    lwz r4, 0x4(r27)
    mr r3, r26
    li r5, 0x0
    addi r7, r7, fn_806AF3F0@l
    li r6, 0x0
    li r8, 0x0
    bl fn_806DAC00
    bl fn_806AEBF0
    cmpwi r3, 0x0
    beq lbl_fn_806AED20_00001690
    b lbl_fn_806AED20_00001690
lbl_fn_806AED20_0000168C:
    bl fn_806AEBF0
lbl_fn_806AED20_00001690:
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806AEF90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x20
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_807BD858@ha
    addi r30, r30, lbl_807BD858@l
    addi r4, r30, 0x1d0
    crclr 6
    bl fn_806A76B0
    lis r31, lbl_8085FF90@ha
    lwz r3, lbl_8085FF90@l(r31)
    lwz r3, 0x1c(r3)
    bl fn_806CFAA0
    cmpwi r3, 0x0
    beq lbl_fn_806AEF90_0000172C
    addi r4, r30, 0x1e4
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF90@l(r31)
    lwz r3, 0x1c(r4)
    addi r5, r4, 0x24c
    lwz r4, 0x24(r3)
    addi r3, r3, 0x10
    bl fn_806CF570
    lwz r3, lbl_8085FF90@l(r31)
    lwz r3, 0x1c(r3)
    addi r3, r3, 0x10
    bl fn_806CF090
    b lbl_fn_806AEF90_00001848
lbl_fn_806AEF90_0000172C:
    addi r4, r30, 0x218
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_8085FF90@l(r31)
    addi r3, r3, 0x40
    bl fn_806CFA80
    cmpwi r3, 0x0
    bne lbl_fn_806AEF90_000017CC
    addi r4, r30, 0x248
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_8085FF90@l(r31)
    lwz r3, 0x1c(r3)
    addi r3, r3, 0x4
    bl fn_806CFA30
    cmpwi r3, 0x0
    beq lbl_fn_806AEF90_000017AC
    addi r4, r30, 0x284
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lwz r5, lbl_8085FF90@l(r31)
    lwz r4, 0x1c(r5)
    lwz r0, 0x8(r4)
    lwz r3, 0x4(r4)
    stw r3, 0x40(r5)
    stw r0, 0x44(r5)
    lwz r0, 0xc(r4)
    stw r0, 0x48(r5)
    b lbl_fn_806AEF90_00001828
lbl_fn_806AEF90_000017AC:
    addi r4, r30, 0x2b0
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_8085FF90@l(r31)
    addi r3, r3, 0x40
    bl fn_806CF960
    b lbl_fn_806AEF90_00001828
lbl_fn_806AEF90_000017CC:
    addi r4, r30, 0x2dc
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    bl OSGetTime
    lis r6, 0x6c08
    lis r5, 0x5d59
    subi r8, r6, 0x769b
    lwz r10, lbl_8085FF90@l(r31)
    subi r9, r5, 0x749b
    lis r5, 0x27
    subi r0, r5, 0x613d
    li r6, 0x0
    mullw r5, r3, r8
    addi r3, r10, 0x40
    mulhwu r7, r4, r8
    mullw r8, r4, r8
    add r5, r7, r5
    mullw r4, r4, r9
    addc r0, r8, r0
    add r0, r5, r4
    adde r4, r0, r6
    bl fn_806CF0D0
lbl_fn_806AEF90_00001828:
    lis r3, lbl_8085FF90@ha
    lwz r5, lbl_8085FF90@l(r3)
    lwz r4, 0xc(r5)
    addi r3, r5, 0x40
    addi r5, r5, 0x24c
    bl fn_806CF570
    li r4, 0x0
    li r3, 0x0
lbl_fn_806AEF90_00001848:
    lis r5, lbl_8085FF90@ha
    lis r7, fn_806A72E0@ha
    lwz r9, lbl_8085FF90@l(r5)
    lis r8, fn_806A7400@ha
    mr r5, r3
    mr r6, r4
    lwz r3, 0x10(r9)
    addi r4, r9, 0x255
    addi r7, r7, fn_806A72E0@l
    addi r8, r8, fn_806A7400@l
    bl fn_806D0980
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806AF170(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_807BD858@ha
    addi r30, r30, lbl_807BD858@l
    stw r29, 0x14(r1)
    bl fn_806D0EA0
    bl fn_806D1590
    cmpwi r3, 0x0
    beq lbl_fn_806AF170_00001AEC
    bl fn_806D15E0
    cmpwi r3, 0x0
    beq lbl_fn_806AF170_000019F4
    addi r4, r30, 0x320
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lis r31, lbl_8085FF90@ha
    lwz r4, lbl_8085FF90@l(r31)
    addi r3, r4, 0x4c
    addi r4, r4, 0x14c
    bl fn_806D1610
    bl fn_806D1660
    lwz r3, lbl_8085FF90@l(r31)
    lwz r3, 0x1c(r3)
    bl fn_806CFAA0
    cmpwi r3, 0x0
    beq lbl_fn_806AF170_00001970
    addi r4, r30, 0x330
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    bl OSGetTime
    lwz r5, lbl_8085FF90@l(r31)
    lis r8, fn_806AED20@ha
    li r0, 0x1
    li r6, 0x1
    stw r4, 0x3c(r5)
    addi r8, r8, fn_806AED20@l
    li r7, 0x0
    li r9, 0x0
    stw r3, 0x38(r5)
    stw r0, 0x30(r5)
    lwz r5, lbl_8085FF90@l(r31)
    lwz r3, 0x0(r5)
    addi r4, r5, 0x4c
    addi r5, r5, 0x14c
    bl fn_806DA980
    bl fn_806AEBF0
    cmpwi r3, 0x0
    bne lbl_fn_806AF170_00001AEC
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x2
    stw r0, 0x4(r3)
    b lbl_fn_806AF170_00001AEC
lbl_fn_806AF170_00001970:
    bl fn_806D1670
    lwz r7, lbl_8085FF90@l(r31)
    mr r5, r3
    mr r6, r4
    addi r3, r7, 0x40
    bl fn_806CF0B0
    addi r4, r30, 0x330
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    bl OSGetTime
    lwz r5, lbl_8085FF90@l(r31)
    lis r8, fn_806AED20@ha
    li r0, 0x1
    li r6, 0x1
    stw r4, 0x3c(r5)
    addi r8, r8, fn_806AED20@l
    li r7, 0x0
    li r9, 0x0
    stw r3, 0x38(r5)
    stw r0, 0x30(r5)
    lwz r5, lbl_8085FF90@l(r31)
    lwz r3, 0x0(r5)
    addi r4, r5, 0x4c
    addi r5, r5, 0x14c
    bl fn_806DA980
    bl fn_806AEBF0
    cmpwi r3, 0x0
    bne lbl_fn_806AF170_00001AEC
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x3
    stw r0, 0x4(r3)
    b lbl_fn_806AF170_00001AEC
lbl_fn_806AF170_000019F4:
    bl fn_806D1600
    mr r29, r3
    addi r4, r30, 0x358
    mr r5, r29
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    cmpwi r29, -0x7148
    bgt lbl_fn_806AF170_00001A84
    lis r31, lbl_8085FF90@ha
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AF170_00001AEC
    mr r4, r29
    li r3, 0x9
    bl fn_806A7130
    lwz r3, lbl_8085FF90@l(r31)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806AF170_00001A58
    lwz r5, 0x18(r3)
    li r3, 0x9
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_806AF170_00001A58:
    lis r31, lbl_8085FF90@ha
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AF170_00001AEC
    bl fn_806D1660
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r3, lbl_8085FF90@l(r31)
    stw r0, 0x30(r3)
    b lbl_fn_806AF170_00001AEC
lbl_fn_806AF170_00001A84:
    lis r31, lbl_8085FF90@ha
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AF170_00001AEC
    mr r4, r29
    li r3, 0x2
    bl fn_806A7130
    lwz r3, lbl_8085FF90@l(r31)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806AF170_00001AC4
    lwz r5, 0x18(r3)
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_806AF170_00001AC4:
    lis r31, lbl_8085FF90@ha
    lwz r0, lbl_8085FF90@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806AF170_00001AEC
    bl fn_806D1660
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r3, lbl_8085FF90@l(r31)
    stw r0, 0x30(r3)
lbl_fn_806AF170_00001AEC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806AF3F0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    lis r30, lbl_807BD858@ha
    addi r30, r30, lbl_807BD858@l
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    bne lbl_fn_806AF3F0_00001D50
    lis r31, lbl_8085FF90@ha
    lwz r6, lbl_8085FF90@l(r31)
    lwz r0, 0x4(r6)
    cmpwi r0, 0x3
    bne lbl_fn_806AF3F0_00001C20
    lbz r0, 0x8e(r4)
    extsb. r0, r0
    bne lbl_fn_806AF3F0_00001BF4
    addi r4, r30, 0x370
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF90@l(r31)
    addi r5, r1, 0x38
    lwz r3, 0x1c(r4)
    lwz r4, 0xc(r4)
    addi r3, r3, 0x4
    bl fn_806CF570
    mr r3, r28
    addi r5, r1, 0x38
    li r4, 0x705
    bl fn_806DACE0
    bl fn_806AEBF0
    cmpwi r3, 0x0
    bne lbl_fn_806AF3F0_00001D60
    lwz r4, lbl_8085FF90@l(r31)
    li r0, 0x4
    lis r7, fn_806AF3F0@ha
    mr r3, r28
    stw r0, 0x4(r4)
    addi r7, r7, fn_806AF3F0@l
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x4(r29)
    li r8, 0x0
    bl fn_806DAC00
    bl fn_806AEBF0
    cmpwi r3, 0x0
    bne lbl_fn_806AF3F0_00001D60
    addi r4, r30, 0x3a4
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806AF3F0_00001D60
lbl_fn_806AF3F0_00001BF4:
    addi r4, r30, 0x3bc
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    bl fn_806DAAB0
    bl fn_806AEF90
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_806AF3F0_00001D60
lbl_fn_806AF3F0_00001C20:
    cmpwi r0, 0x4
    bne lbl_fn_806AF3F0_00001D60
    lwz r3, 0x1c(r6)
    addi r5, r1, 0x20
    lwz r4, 0xc(r6)
    addi r3, r3, 0x4
    bl fn_806CF570
    addi r3, r29, 0x8e
    addi r4, r1, 0x20
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806AF3F0_00001D08
    lwz r3, lbl_8085FF90@l(r31)
    addi r5, r1, 0x8
    lwz r4, 0xc(r3)
    addi r3, r3, 0x40
    bl fn_806CF570
    lwz r7, 0x4(r29)
    addi r4, r30, 0x3f0
    addi r5, r1, 0x8
    addi r6, r1, 0x20
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_8085FF90@l(r31)
    lwz r5, 0x4(r29)
    lwz r3, 0x1c(r4)
    addi r4, r4, 0x40
    bl fn_806CFD00
    mr r3, r28
    bl fn_806DAAB0
    addi r4, r30, 0x330
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    bl OSGetTime
    lwz r5, lbl_8085FF90@l(r31)
    lis r8, fn_806AED20@ha
    li r0, 0x1
    li r6, 0x1
    stw r4, 0x3c(r5)
    addi r8, r8, fn_806AED20@l
    li r7, 0x0
    li r9, 0x0
    stw r3, 0x38(r5)
    stw r0, 0x30(r5)
    lwz r5, lbl_8085FF90@l(r31)
    lwz r3, 0x0(r5)
    addi r4, r5, 0x4c
    addi r5, r5, 0x14c
    bl fn_806DA980
    bl fn_806AEBF0
    cmpwi r3, 0x0
    bne lbl_fn_806AF3F0_00001D60
    lwz r3, lbl_8085FF90@l(r31)
    li r0, 0x2
    stw r0, 0x4(r3)
    b lbl_fn_806AF3F0_00001D60
lbl_fn_806AF3F0_00001D08:
    lwz r6, 0x4(r29)
    addi r4, r30, 0x418
    addi r5, r29, 0x8e
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
    lis r7, fn_806AF3F0@ha
    lwz r4, 0x4(r29)
    mr r3, r28
    li r5, 0x0
    addi r7, r7, fn_806AF3F0@l
    li r6, 0x0
    li r8, 0x0
    bl fn_806DAC00
    bl fn_806AEBF0
    cmpwi r3, 0x0
    beq lbl_fn_806AF3F0_00001D60
    b lbl_fn_806AF3F0_00001D60
lbl_fn_806AF3F0_00001D50:
    addi r4, r30, 0x458
    li r3, 0x20
    crclr 6
    bl fn_806A76B0
lbl_fn_806AF3F0_00001D60:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806AF670(void)
{
    nofralloc
    lis r3, lbl_8085FF90@ha
    lwz r3, lbl_8085FF90@l(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806AF670_00001DB0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x5
    bne lbl_fn_806AF670_00001DB0
    li r3, 0x1
    blr
lbl_fn_806AF670_00001DB0:
    li r3, 0x0
    blr
}

asm void fn_806AF6A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r30, lbl_8085FF98@ha
    lis r10, lbl_807BDCD0@ha
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r31, r7
    mr r28, r8
    mr r29, r9
    addi r30, r30, lbl_8085FF98@l
    addi r4, r10, lbl_807BDCD0@l
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, 0x4
    li r4, 0x1498
    bl fn_806A72E0
    stw r3, 0x0(r30)
    li r4, 0x0
    li r5, 0x1498
    bl memset
    bl fn_806A70E0
    lwz r3, 0x0(r30)
    li r0, 0x0
    lis r7, fn_806B8D60@ha
    lis r6, fn_806B25F0@ha
    stw r0, 0x0(r3)
    lis r5, fn_806B2FC0@ha
    lis r4, fn_806B2FD0@ha
    addi r7, r7, fn_806B8D60@l
    lwz r3, 0x0(r30)
    addi r6, r6, fn_806B25F0@l
    addi r5, r5, fn_806B2FC0@l
    cmpwi r27, 0x0
    stw r7, 0x4(r3)
    addi r4, r4, fn_806B2FD0@l
    li r0, 0x2000
    lwz r3, 0x0(r30)
    stw r6, 0x8(r3)
    lwz r3, 0x0(r30)
    stw r5, 0xc(r3)
    lwz r3, 0x0(r30)
    stw r4, 0x10(r3)
    beq lbl_fn_806AF6A0_00001E84
    mr r0, r27
lbl_fn_806AF6A0_00001E84:
    lwz r3, 0x0(r30)
    cmpwi r31, 0x0
    li r4, 0x2000
    stw r0, 0x14(r3)
    beq lbl_fn_806AF6A0_00001E9C
    mr r4, r31
lbl_fn_806AF6A0_00001E9C:
    lwz r3, 0x0(r30)
    lis r31, lbl_80862150@ha
    lis r27, lbl_80862250@ha
    li r0, 0x0
    stw r4, 0x18(r3)
    addi r31, r31, lbl_80862150@l
    addi r27, r27, lbl_80862250@l
    addi r3, r30, 0x8
    lwz r6, 0x0(r30)
    li r4, 0x0
    li r5, 0x80
    stw r0, 0x1c(r6)
    lwz r6, 0x0(r30)
    stw r24, 0x20(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x24(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x28(r6)
    lwz r6, 0x0(r30)
    stb r0, 0x2d(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x64(r6)
    lwz r6, 0x0(r30)
    stw r31, 0x68(r6)
    lwz r6, 0x0(r30)
    stw r27, 0x6c(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x70(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x74(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x78(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x7c(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x80(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x84(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x88(r6)
    lwz r6, 0x0(r30)
    stw r0, 0x8c(r6)
    bl memset
    addi r3, r30, 0x88
    li r4, 0x0
    li r5, 0x100
    bl memset
    lwz r8, 0x0(r30)
    lis r9, fn_806B1B60@ha
    lwz r7, 0x24(r24)
    mr r4, r24
    mr r6, r25
    addi r3, r8, 0x90
    addi r5, r8, 0x1c
    addi r8, r8, 0x30
    addi r9, r9, fn_806B1B60@l
    li r10, 0x0
    bl fn_806AE750
    lwz r5, 0x0(r30)
    mr r6, r28
    mr r7, r29
    addi r3, r5, 0x2f8
    addi r4, r5, 0x1c
    addi r5, r5, 0x30
    bl fn_806AC210
    lwz r5, 0x0(r30)
    mr r7, r31
    mr r8, r27
    mr r9, r28
    mr r10, r29
    addi r3, r5, 0x360
    addi r4, r5, 0x1c
    addi r6, r5, 0x4
    bl fn_806B3DF0
    lwz r3, 0x0(r30)
    addi r3, r3, 0xc70
    bl fn_806CE090
    mr r3, r26
    bl strlen
    cmplwi r3, 0x100
    bge lbl_fn_806AF6A0_00001FF0
    mr r3, r26
    bl strlen
    mr r25, r3
    b lbl_fn_806AF6A0_00001FF4
lbl_fn_806AF6A0_00001FF0:
    li r25, 0xff
lbl_fn_806AF6A0_00001FF4:
    lis r24, lbl_80862250@ha
    mr r4, r26
    mr r5, r25
    addi r3, r24, lbl_80862250@l
    bl fn_806A9CA0
    addi r3, r24, lbl_80862250@l
    li r0, 0x0
    stbx r0, r3, r25
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
