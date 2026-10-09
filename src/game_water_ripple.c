#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_8006F17C(void);
extern void fn_8006F72C(void);
extern void fn_800844D8(void);
extern void fn_800DBF68(void);
extern void fn_800E0908(void);
extern void fn_80658220(void);
extern void fn_80658240(void);
extern void fn_80660C50(void);
extern void fn_80660C90(void);
extern void fn_80661010(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_80734DD8[];
extern u8 lbl_80735000[];
extern u8 lbl_807799A0[];

/* Small data declarations */
extern u32 lbl_8087EEC8;
extern u32 lbl_808812C8;

/* Function declarations */
void fn_800DF0F0(void);
void fn_800DF154(void);
void fn_800DF16C(void);
void fn_800DF1D0(void);
void fn_800DF22C(void);
void fn_800DFADC(void);
void fn_800DFB40(void);
void fn_800E0000(void);

asm void fn_800DF0F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r4, 0x40a8(r3)
    beq lbl_fn_800DF0F0_00000038
    li r31, 0x0
lbl_fn_800DF0F0_00000020:
    mr r3, r31
    bl fn_80658240
    addi r31, r31, 0x1
    cmpwi r31, 0x4
    blt lbl_fn_800DF0F0_00000020
    b lbl_fn_800DF0F0_00000050
lbl_fn_800DF0F0_00000038:
    li r31, 0x0
lbl_fn_800DF0F0_0000003C:
    mr r3, r31
    bl fn_80658220
    addi r31, r31, 0x1
    cmpwi r31, 0x4
    blt lbl_fn_800DF0F0_0000003C
lbl_fn_800DF0F0_00000050:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DF154(void)
{
    nofralloc
    slwi r0, r5, 3
    add r4, r4, r0
    addi r4, r4, 0x4088
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_800DF16C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x40f0(r3)
    cmpw r0, r4
    beq lbl_fn_800DF16C_000000C8
    stw r4, 0x40f0(r3)
    li r31, 0x0
lbl_fn_800DF16C_000000A8:
    mr r3, r31
    bl fn_80660C90
    addi r31, r31, 0x1
    cmpwi r31, 0x4
    blt lbl_fn_800DF16C_000000A8
    lwz r0, 0x40f0(r30)
    clrlwi r3, r0, 24
    bl fn_80660C50
lbl_fn_800DF16C_000000C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DF1D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x40c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800DF1D0_0000010C
    lbz r0, 0x5d(r3)
    extsb. r0, r0
    bne lbl_fn_800DF1D0_0000010C
    li r3, 0x4
    b lbl_fn_800DF1D0_0000012C
lbl_fn_800DF1D0_0000010C:
    addi r4, r1, 0x8
    li r3, 0x0
    bl fn_80661010
    cmpwi r3, 0x0
    bne lbl_fn_800DF1D0_00000128
    lbz r3, 0x1c(r1)
    b lbl_fn_800DF1D0_0000012C
lbl_fn_800DF1D0_00000128:
    li r3, 0x4
lbl_fn_800DF1D0_0000012C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800DF22C(void)
{
    nofralloc
    cmplw r3, r4
    bne lbl_fn_800DF22C_0000014C
    li r3, 0x0
    blr
lbl_fn_800DF22C_0000014C:
    lhz r5, 0x0(r3)
    li r0, 0x0
    cmplwi r5, 0x9
    beq lbl_fn_800DF22C_00000174
    cmplwi r5, 0xd
    beq lbl_fn_800DF22C_00000174
    cmplwi r5, 0x20
    beq lbl_fn_800DF22C_00000174
    cmplwi r5, 0x3000
    bne lbl_fn_800DF22C_00000178
lbl_fn_800DF22C_00000174:
    li r0, 0x1
lbl_fn_800DF22C_00000178:
    cmpwi r0, 0x0
    beq lbl_fn_800DF22C_00000208
    lis r6, lbl_80734DD8@ha
    lhz r8, 0x2(r3)
    addi r6, r6, lbl_80734DD8@l
    li r9, 0x0
    li r10, 0x89
    b lbl_fn_800DF22C_000001D8
lbl_fn_800DF22C_00000198:
    subf r7, r9, r10
    srwi r0, r7, 31
    add r0, r0, r7
    srawi r0, r0, 1
    add r7, r9, r0
    slwi r0, r7, 2
    lhzx r11, r6, r0
    cmplw r8, r11
    bne lbl_fn_800DF22C_000001C4
    add r6, r6, r0
    b lbl_fn_800DF22C_000001E4
lbl_fn_800DF22C_000001C4:
    bge lbl_fn_800DF22C_000001CC
    subi r10, r7, 0x1
lbl_fn_800DF22C_000001CC:
    cmplw r8, r11
    blt lbl_fn_800DF22C_000001D8
    addi r9, r7, 0x1
lbl_fn_800DF22C_000001D8:
    cmpw r9, r10
    ble lbl_fn_800DF22C_00000198
    li r6, 0x0
lbl_fn_800DF22C_000001E4:
    cmpwi r6, 0x0
    beq lbl_fn_800DF22C_000001F4
    lbz r0, 0x2(r6)
    b lbl_fn_800DF22C_000001F8
lbl_fn_800DF22C_000001F4:
    li r0, 0x0
lbl_fn_800DF22C_000001F8:
    cmpwi r0, 0x0
    beq lbl_fn_800DF22C_00000208
    li r3, 0x0
    blr
lbl_fn_800DF22C_00000208:
    subf r4, r4, r3
    srwi r0, r4, 31
    add r0, r0, r4
    srawi r0, r0, 1
    cmpwi r0, 0x1
    ble lbl_fn_800DF22C_00000298
    lhz r4, -0x4(r3)
    li r0, 0x0
    cmplwi r4, 0x9
    beq lbl_fn_800DF22C_00000248
    cmplwi r4, 0xd
    beq lbl_fn_800DF22C_00000248
    cmplwi r4, 0x20
    beq lbl_fn_800DF22C_00000248
    cmplwi r4, 0x3000
    bne lbl_fn_800DF22C_0000024C
lbl_fn_800DF22C_00000248:
    li r0, 0x1
lbl_fn_800DF22C_0000024C:
    cmpwi r0, 0x0
    beq lbl_fn_800DF22C_00000298
    lhz r0, -0x2(r3)
    cmplwi r0, 0x22
    bne lbl_fn_800DF22C_00000298
    cmplwi r5, 0x9
    li r0, 0x0
    beq lbl_fn_800DF22C_00000284
    cmplwi r5, 0xd
    beq lbl_fn_800DF22C_00000284
    cmplwi r5, 0x20
    beq lbl_fn_800DF22C_00000284
    cmplwi r5, 0x3000
    bne lbl_fn_800DF22C_00000288
lbl_fn_800DF22C_00000284:
    li r0, 0x1
lbl_fn_800DF22C_00000288:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_00000298
    li r3, 0x0
    blr
lbl_fn_800DF22C_00000298:
    lhz r4, -0x2(r3)
    li r0, 0x0
    cmplwi r4, 0x9
    beq lbl_fn_800DF22C_000002C0
    cmplwi r4, 0xd
    beq lbl_fn_800DF22C_000002C0
    cmplwi r4, 0x20
    beq lbl_fn_800DF22C_000002C0
    cmplwi r4, 0x3000
    bne lbl_fn_800DF22C_000002C4
lbl_fn_800DF22C_000002C0:
    li r0, 0x1
lbl_fn_800DF22C_000002C4:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_00000310
    cmplwi r5, 0x22
    bne lbl_fn_800DF22C_00000310
    lhz r3, 0x2(r3)
    li r0, 0x0
    cmplwi r3, 0x9
    beq lbl_fn_800DF22C_000002FC
    cmplwi r3, 0xd
    beq lbl_fn_800DF22C_000002FC
    cmplwi r3, 0x20
    beq lbl_fn_800DF22C_000002FC
    cmplwi r3, 0x3000
    bne lbl_fn_800DF22C_00000300
lbl_fn_800DF22C_000002FC:
    li r0, 0x1
lbl_fn_800DF22C_00000300:
    cmpwi r0, 0x0
    beq lbl_fn_800DF22C_00000310
    li r3, 0x0
    blr
lbl_fn_800DF22C_00000310:
    subi r0, r5, 0x9
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_800DF22C_0000032C
    subi r0, r5, 0xd
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_800DF22C_0000032C:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_00000340
    subi r0, r5, 0x20
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_800DF22C_00000340:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_00000354
    subi r0, r5, 0x3000
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_800DF22C_00000354:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_00000464
    subi r0, r5, 0x1100
    li r3, 0x1100
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_800DF22C_00000390
    subfic r0, r5, 0x11ff
    li r3, 0x11ff
    orc r3, r3, r5
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800DF22C_00000390:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_000003D4
    subi r0, r5, 0x3000
    li r3, 0x3000
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_800DF22C_000003D4
    lis r3, 0x1
    subi r0, r3, 0x2851
    clrlwi r3, r0, 16
    subf r0, r5, r3
    orc r3, r3, r5
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800DF22C_000003D4:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_0000041C
    lis r6, 0x1
    subi r0, r6, 0x700
    clrlwi r3, r0, 16
    subf r0, r3, r5
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_800DF22C_0000041C
    subi r0, r6, 0x501
    clrlwi r3, r0, 16
    subf r0, r5, r3
    orc r3, r3, r5
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800DF22C_0000041C:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_00000464
    lis r6, 0x1
    subi r0, r6, 0x100
    clrlwi r3, r0, 16
    subf r0, r3, r5
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_800DF22C_00000464
    subi r0, r6, 0x24
    clrlwi r3, r0, 16
    subf r0, r5, r3
    orc r3, r3, r5
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800DF22C_00000464:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_00000574
    subi r0, r4, 0x1100
    li r3, 0x1100
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_800DF22C_000004A0
    subfic r0, r4, 0x11ff
    li r3, 0x11ff
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800DF22C_000004A0:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_000004E4
    subi r0, r4, 0x3000
    li r3, 0x3000
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_800DF22C_000004E4
    lis r3, 0x1
    subi r0, r3, 0x2851
    clrlwi r3, r0, 16
    subf r0, r4, r3
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800DF22C_000004E4:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_0000052C
    lis r6, 0x1
    subi r0, r6, 0x700
    clrlwi r3, r0, 16
    subf r0, r3, r4
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_800DF22C_0000052C
    subi r0, r6, 0x501
    clrlwi r3, r0, 16
    subf r0, r4, r3
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800DF22C_0000052C:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_00000574
    lis r6, 0x1
    subi r0, r6, 0x100
    clrlwi r3, r0, 16
    subf r0, r3, r4
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_800DF22C_00000574
    subi r0, r6, 0x24
    clrlwi r3, r0, 16
    subf r0, r4, r3
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800DF22C_00000574:
    cmpwi r0, 0x0
    bne lbl_fn_800DF22C_00000588
    subi r0, r4, 0x2d
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_800DF22C_00000588:
    cmpwi r0, 0x0
    beq lbl_fn_800DF22C_0000060C
    lis r3, lbl_80734DD8@ha
    li r7, 0x0
    addi r3, r3, lbl_80734DD8@l
    li r8, 0x89
    b lbl_fn_800DF22C_000005E4
lbl_fn_800DF22C_000005A4:
    subf r6, r7, r8
    srwi r0, r6, 31
    add r0, r0, r6
    srawi r0, r0, 1
    add r6, r7, r0
    slwi r0, r6, 2
    lhzx r9, r3, r0
    cmplw r5, r9
    bne lbl_fn_800DF22C_000005D0
    add r3, r3, r0
    b lbl_fn_800DF22C_000005F0
lbl_fn_800DF22C_000005D0:
    bge lbl_fn_800DF22C_000005D8
    subi r8, r6, 0x1
lbl_fn_800DF22C_000005D8:
    cmplw r5, r9
    blt lbl_fn_800DF22C_000005E4
    addi r7, r6, 0x1
lbl_fn_800DF22C_000005E4:
    cmpw r7, r8
    ble lbl_fn_800DF22C_000005A4
    li r3, 0x0
lbl_fn_800DF22C_000005F0:
    cmpwi r3, 0x0
    beq lbl_fn_800DF22C_00000600
    lbz r0, 0x2(r3)
    b lbl_fn_800DF22C_00000604
lbl_fn_800DF22C_00000600:
    li r0, 0x0
lbl_fn_800DF22C_00000604:
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_800DF22C_0000060C:
    cmpwi r0, 0x0
    beq lbl_fn_800DF22C_00000668
    lis r3, lbl_80734DD8@ha
    li r7, 0x0
    addi r3, r3, lbl_80734DD8@l
    li r8, 0x89
    b lbl_fn_800DF22C_00000660
lbl_fn_800DF22C_00000628:
    subf r6, r7, r8
    srwi r0, r6, 31
    add r0, r0, r6
    srawi r0, r0, 1
    add r6, r7, r0
    slwi r0, r6, 2
    lhzx r0, r3, r0
    cmplw r4, r0
    beq lbl_fn_800DF22C_00000668
    bge lbl_fn_800DF22C_00000654
    subi r8, r6, 0x1
lbl_fn_800DF22C_00000654:
    cmplw r4, r0
    blt lbl_fn_800DF22C_00000660
    addi r7, r6, 0x1
lbl_fn_800DF22C_00000660:
    cmpw r7, r8
    ble lbl_fn_800DF22C_00000628
lbl_fn_800DF22C_00000668:
    subi r0, r5, 0x9
    cntlzw r0, r0
    srwi. r3, r0, 5
    bne lbl_fn_800DF22C_00000684
    subi r0, r5, 0xd
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_800DF22C_00000684:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_00000698
    subi r0, r5, 0x20
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_800DF22C_00000698:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_000006AC
    subi r0, r5, 0x3000
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_800DF22C_000006AC:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_000007BC
    subi r0, r5, 0x1100
    li r3, 0x1100
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800DF22C_000006E8
    subfic r0, r5, 0x11ff
    li r3, 0x11ff
    orc r3, r3, r5
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800DF22C_000006E8:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_0000072C
    subi r0, r5, 0x3000
    li r3, 0x3000
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800DF22C_0000072C
    lis r3, 0x1
    subi r0, r3, 0x2851
    clrlwi r3, r0, 16
    subf r0, r5, r3
    orc r3, r3, r5
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800DF22C_0000072C:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_00000774
    lis r6, 0x1
    subi r0, r6, 0x700
    clrlwi r3, r0, 16
    subf r0, r3, r5
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800DF22C_00000774
    subi r0, r6, 0x501
    clrlwi r3, r0, 16
    subf r0, r5, r3
    orc r3, r3, r5
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800DF22C_00000774:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_000007BC
    lis r6, 0x1
    subi r0, r6, 0x100
    clrlwi r3, r0, 16
    subf r0, r3, r5
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800DF22C_000007BC
    subi r0, r6, 0x24
    clrlwi r3, r0, 16
    subf r0, r5, r3
    orc r3, r3, r5
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800DF22C_000007BC:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_000008CC
    subi r0, r4, 0x1100
    li r3, 0x1100
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800DF22C_000007F8
    subfic r0, r4, 0x11ff
    li r3, 0x11ff
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800DF22C_000007F8:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_0000083C
    subi r0, r4, 0x3000
    li r3, 0x3000
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800DF22C_0000083C
    lis r3, 0x1
    subi r0, r3, 0x2851
    clrlwi r3, r0, 16
    subf r0, r4, r3
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800DF22C_0000083C:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_00000884
    lis r6, 0x1
    subi r0, r6, 0x700
    clrlwi r3, r0, 16
    subf r0, r3, r4
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800DF22C_00000884
    subi r0, r6, 0x501
    clrlwi r3, r0, 16
    subf r0, r4, r3
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800DF22C_00000884:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_000008CC
    lis r6, 0x1
    subi r0, r6, 0x100
    clrlwi r3, r0, 16
    subf r0, r3, r4
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800DF22C_000008CC
    subi r0, r6, 0x24
    clrlwi r3, r0, 16
    subf r0, r4, r3
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800DF22C_000008CC:
    cmpwi r3, 0x0
    bne lbl_fn_800DF22C_000008E0
    subi r0, r4, 0x2d
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_800DF22C_000008E0:
    cmpwi r3, 0x0
    beq lbl_fn_800DF22C_00000964
    lis r3, lbl_80734DD8@ha
    li r7, 0x0
    addi r3, r3, lbl_80734DD8@l
    li r8, 0x89
    b lbl_fn_800DF22C_0000093C
lbl_fn_800DF22C_000008FC:
    subf r6, r7, r8
    srwi r0, r6, 31
    add r0, r0, r6
    srawi r0, r0, 1
    add r6, r7, r0
    slwi r0, r6, 2
    lhzx r9, r3, r0
    cmplw r5, r9
    bne lbl_fn_800DF22C_00000928
    add r3, r3, r0
    b lbl_fn_800DF22C_00000948
lbl_fn_800DF22C_00000928:
    bge lbl_fn_800DF22C_00000930
    subi r8, r6, 0x1
lbl_fn_800DF22C_00000930:
    cmplw r5, r9
    blt lbl_fn_800DF22C_0000093C
    addi r7, r6, 0x1
lbl_fn_800DF22C_0000093C:
    cmpw r7, r8
    ble lbl_fn_800DF22C_000008FC
    li r3, 0x0
lbl_fn_800DF22C_00000948:
    cmpwi r3, 0x0
    beq lbl_fn_800DF22C_00000958
    lbz r0, 0x2(r3)
    b lbl_fn_800DF22C_0000095C
lbl_fn_800DF22C_00000958:
    li r0, 0x0
lbl_fn_800DF22C_0000095C:
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_800DF22C_00000964:
    cmpwi r3, 0x0
    beqlr
    lis r3, lbl_80734DD8@ha
    li r6, 0x0
    addi r3, r3, lbl_80734DD8@l
    li r7, 0x89
    b lbl_fn_800DF22C_000009C0
lbl_fn_800DF22C_00000980:
    subf r5, r6, r7
    srwi r0, r5, 31
    add r0, r0, r5
    srawi r0, r0, 1
    add r5, r6, r0
    slwi r0, r5, 2
    lhzx r8, r3, r0
    cmplw r4, r8
    bne lbl_fn_800DF22C_000009AC
    add r3, r3, r0
    b lbl_fn_800DF22C_000009CC
lbl_fn_800DF22C_000009AC:
    bge lbl_fn_800DF22C_000009B4
    subi r7, r5, 0x1
lbl_fn_800DF22C_000009B4:
    cmplw r4, r8
    blt lbl_fn_800DF22C_000009C0
    addi r6, r5, 0x1
lbl_fn_800DF22C_000009C0:
    cmpw r6, r7
    ble lbl_fn_800DF22C_00000980
    li r3, 0x0
lbl_fn_800DF22C_000009CC:
    cmpwi r3, 0x0
    beq lbl_fn_800DF22C_000009DC
    lbz r0, 0x3(r3)
    b lbl_fn_800DF22C_000009E0
lbl_fn_800DF22C_000009DC:
    li r0, 0x0
lbl_fn_800DF22C_000009E0:
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_800DFADC(void)
{
    nofralloc
    b lbl_fn_800DFADC_000009F4
lbl_fn_800DFADC_000009F0:
    addi r3, r3, 0x2
lbl_fn_800DFADC_000009F4:
    lhz r4, 0x0(r3)
    li r0, 0x0
    cmplwi r4, 0x9
    beq lbl_fn_800DFADC_00000A1C
    cmplwi r4, 0xd
    beq lbl_fn_800DFADC_00000A1C
    cmplwi r4, 0x20
    beq lbl_fn_800DFADC_00000A1C
    cmplwi r4, 0x3000
    bne lbl_fn_800DFADC_00000A20
lbl_fn_800DFADC_00000A1C:
    li r0, 0x1
lbl_fn_800DFADC_00000A20:
    cmpwi r0, 0x0
    bne lbl_fn_800DFADC_000009F0
    cmpwi r3, 0x0
    beq lbl_fn_800DFADC_00000A3C
    cmplwi r4, 0xa
    bne lbl_fn_800DFADC_00000A3C
    addi r3, r3, 0x2
lbl_fn_800DFADC_00000A3C:
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bnelr
    li r3, 0x0
    blr
}

asm void fn_800DFB40(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x80
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
    bl _savegpr_21
    lfs f30, lbl_808812C8
    li r0, 0x0
    stw r0, 0x0(r3)
    mr r22, r4
    fmr f27, f1
    mr r21, r3
    stw r0, 0x4(r3)
    fmr f28, f2
    fmr f29, f3
    mr r23, r5
    stw r0, 0x8(r3)
    fmr f31, f30
    mr r24, r6
    mr r25, r7
    stw r4, 0x44(r1)
    mr r26, r8
    mr r29, r22
    li r31, 0xa
lbl_fn_800DFB40_00000AD4:
    lwz r4, 0x44(r1)
    addi r3, r4, 0x2
    stw r3, 0x44(r1)
    lhz r27, 0x0(r4)
    cmpwi r27, 0x0
    beq lbl_fn_800DFB40_00000E78
    cmplwi r27, 0xd
    beq lbl_fn_800DFB40_00000E6C
    cmplwi r27, 0xa
    bne lbl_fn_800DFB40_00000B88
    subf r5, r22, r3
    subf r3, r22, r29
    srwi r4, r5, 31
    lbz r27, 0x30(r1)
    srwi r0, r3, 31
    add r4, r4, r5
    add r3, r0, r3
    srawi r29, r4, 1
    clrrwi r0, r3, 1
    srawi r30, r3, 1
    add r28, r22, r0
    b lbl_fn_800DFB40_00000B74
lbl_fn_800DFB40_00000B2C:
    lhz r0, 0x0(r28)
    sth r0, 0x40(r1)
    lwz r0, 0x0(r21)
    srwi. r0, r0, 31
    bne lbl_fn_800DFB40_00000B4C
    lbz r0, 0x0(r21)
    clrlwi r4, r0, 25
    b lbl_fn_800DFB40_00000B50
lbl_fn_800DFB40_00000B4C:
    lwz r4, 0x4(r21)
lbl_fn_800DFB40_00000B50:
    stb r27, 0x34(r1)
    mr r3, r21
    addi r6, r1, 0x40
    addi r7, r1, 0x42
    addi r8, r1, 0x34
    li r5, 0x0
    bl fn_8006F72C
    addi r28, r28, 0x2
    addi r30, r30, 0x1
lbl_fn_800DFB40_00000B74:
    cmpw r30, r29
    blt lbl_fn_800DFB40_00000B2C
    lwz r29, 0x44(r1)
    lfs f30, lbl_808812C8
    b lbl_fn_800DFB40_00000E6C
lbl_fn_800DFB40_00000B88:
    cmplwi r27, 0x5c
    bne lbl_fn_800DFB40_00000C80
    lhz r0, 0x0(r3)
    cmplwi r0, 0x6e
    bne lbl_fn_800DFB40_00000C80
    subf r5, r22, r3
    subf r3, r22, r29
    srwi r4, r5, 31
    srwi r0, r3, 31
    add r4, r4, r5
    add r3, r0, r3
    srawi r28, r4, 1
    clrrwi r0, r3, 1
    srawi r27, r3, 1
    add r29, r22, r0
    subi r30, r28, 0x1
    b lbl_fn_800DFB40_00000C64
lbl_fn_800DFB40_00000BCC:
    cmpw r27, r30
    bne lbl_fn_800DFB40_00000C18
    sth r31, 0x3e(r1)
    lwz r0, 0x0(r21)
    srwi. r0, r0, 31
    bne lbl_fn_800DFB40_00000BF0
    lbz r0, 0x0(r21)
    clrlwi r4, r0, 25
    b lbl_fn_800DFB40_00000BF4
lbl_fn_800DFB40_00000BF0:
    lwz r4, 0x4(r21)
lbl_fn_800DFB40_00000BF4:
    lbz r0, 0x28(r1)
    mr r3, r21
    stb r0, 0x2c(r1)
    addi r6, r1, 0x3e
    addi r7, r1, 0x40
    addi r8, r1, 0x2c
    li r5, 0x0
    bl fn_8006F72C
    b lbl_fn_800DFB40_00000C5C
lbl_fn_800DFB40_00000C18:
    lhz r0, 0x0(r29)
    sth r0, 0x3c(r1)
    lwz r0, 0x0(r21)
    srwi. r0, r0, 31
    bne lbl_fn_800DFB40_00000C38
    lbz r0, 0x0(r21)
    clrlwi r4, r0, 25
    b lbl_fn_800DFB40_00000C3C
lbl_fn_800DFB40_00000C38:
    lwz r4, 0x4(r21)
lbl_fn_800DFB40_00000C3C:
    lbz r0, 0x20(r1)
    mr r3, r21
    stb r0, 0x24(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x3e
    addi r8, r1, 0x24
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_800DFB40_00000C5C:
    addi r29, r29, 0x2
    addi r27, r27, 0x1
lbl_fn_800DFB40_00000C64:
    cmpw r27, r28
    blt lbl_fn_800DFB40_00000BCC
    lwz r3, 0x44(r1)
    lfs f30, lbl_808812C8
    addi r29, r3, 0x2
    stw r29, 0x44(r1)
    b lbl_fn_800DFB40_00000E6C
lbl_fn_800DFB40_00000C80:
    cmpwi r25, 0x0
    beq lbl_fn_800DFB40_00000CC8
    fmr f1, f28
    mr r12, r25
    mr r3, r27
    addi r4, r1, 0x44
    mtctr r12
    bctrl
    fcmpo cr0, f1, f31
    bge lbl_fn_800DFB40_00000CC0
    fmr f1, f28
    lwz r3, lbl_8087EEC8
    mr r4, r27
    mr r5, r23
    mr r6, r24
    bl fn_8006F17C
lbl_fn_800DFB40_00000CC0:
    fadds f30, f30, f1
    b lbl_fn_800DFB40_00000CE4
lbl_fn_800DFB40_00000CC8:
    fmr f1, f28
    lwz r3, lbl_8087EEC8
    mr r4, r27
    mr r5, r23
    mr r6, r24
    bl fn_8006F17C
    fadds f30, f30, f1
lbl_fn_800DFB40_00000CE4:
    fadds f30, f30, f29
    fcmpo cr0, f30, f27
    ble lbl_fn_800DFB40_00000E6C
    cmpwi r26, 0x0
    bne lbl_fn_800DFB40_00000D6C
    lwz r3, 0x44(r1)
    subi r27, r3, 0x2
    b lbl_fn_800DFB40_00000D30
lbl_fn_800DFB40_00000D04:
    mr r4, r29
    bl fn_800DF22C
    cmpwi r3, 0x0
    bne lbl_fn_800DFB40_00000D44
    lwz r3, 0x44(r1)
    lhz r0, 0x0(r3)
    cmplwi r0, 0x20
    bne lbl_fn_800DFB40_00000D30
    lhz r0, -0x2(r3)
    cmplwi r0, 0x2e
    beq lbl_fn_800DFB40_00000D44
lbl_fn_800DFB40_00000D30:
    lwz r3, 0x44(r1)
    subi r3, r3, 0x2
    stw r3, 0x44(r1)
    cmplw r3, r29
    bgt lbl_fn_800DFB40_00000D04
lbl_fn_800DFB40_00000D44:
    lwz r0, 0x44(r1)
    cmplw r0, r29
    bgt lbl_fn_800DFB40_00000D94
    cmplw r27, r29
    ble lbl_fn_800DFB40_00000D64
    subi r3, r27, 0x2
    stw r3, 0x44(r1)
    b lbl_fn_800DFB40_00000D94
lbl_fn_800DFB40_00000D64:
    stw r27, 0x44(r1)
    b lbl_fn_800DFB40_00000D94
lbl_fn_800DFB40_00000D6C:
    lwz r3, 0x44(r1)
    mr r4, r29
    subi r3, r3, 0x2
    stw r3, 0x44(r1)
    bl fn_800DF22C
    cmpwi r3, 0x0
    bne lbl_fn_800DFB40_00000D94
    lwz r3, 0x44(r1)
    addi r3, r3, 0x2
    stw r3, 0x44(r1)
lbl_fn_800DFB40_00000D94:
    lwz r4, 0x44(r1)
    subf r3, r22, r29
    srwi r0, r3, 31
    lbz r27, 0x18(r1)
    subf r5, r22, r4
    srwi r4, r5, 31
    add r3, r0, r3
    add r0, r4, r5
    srawi r29, r0, 1
    clrrwi r0, r3, 1
    srawi r30, r3, 1
    add r28, r22, r0
    b lbl_fn_800DFB40_00000E10
lbl_fn_800DFB40_00000DC8:
    lhz r0, 0x0(r28)
    sth r0, 0x3a(r1)
    lwz r0, 0x0(r21)
    srwi. r0, r0, 31
    bne lbl_fn_800DFB40_00000DE8
    lbz r0, 0x0(r21)
    clrlwi r4, r0, 25
    b lbl_fn_800DFB40_00000DEC
lbl_fn_800DFB40_00000DE8:
    lwz r4, 0x4(r21)
lbl_fn_800DFB40_00000DEC:
    stb r27, 0x1c(r1)
    mr r3, r21
    addi r6, r1, 0x3a
    addi r7, r1, 0x3c
    addi r8, r1, 0x1c
    li r5, 0x0
    bl fn_8006F72C
    addi r28, r28, 0x2
    addi r30, r30, 0x1
lbl_fn_800DFB40_00000E10:
    cmpw r30, r29
    blt lbl_fn_800DFB40_00000DC8
    sth r31, 0x38(r1)
    lwz r0, 0x0(r21)
    srwi. r0, r0, 31
    bne lbl_fn_800DFB40_00000E34
    lbz r0, 0x0(r21)
    clrlwi r4, r0, 25
    b lbl_fn_800DFB40_00000E38
lbl_fn_800DFB40_00000E34:
    lwz r4, 0x4(r21)
lbl_fn_800DFB40_00000E38:
    lbz r0, 0x10(r1)
    mr r3, r21
    stb r0, 0x14(r1)
    addi r6, r1, 0x38
    addi r7, r1, 0x3a
    addi r8, r1, 0x14
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x44(r1)
    bl fn_800DFADC
    stw r3, 0x44(r1)
    mr r29, r3
    lfs f30, lbl_808812C8
lbl_fn_800DFB40_00000E6C:
    lwz r0, 0x44(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800DFB40_00000AD4
lbl_fn_800DFB40_00000E78:
    cmpwi r29, 0x0
    beq lbl_fn_800DFB40_00000ED0
    lwz r0, 0x0(r21)
    srwi. r0, r0, 31
    bne lbl_fn_800DFB40_00000E98
    lbz r0, 0x0(r21)
    clrlwi r22, r0, 25
    b lbl_fn_800DFB40_00000E9C
lbl_fn_800DFB40_00000E98:
    lwz r22, 0x4(r21)
lbl_fn_800DFB40_00000E9C:
    lbz r0, 0xc(r1)
    mr r3, r29
    stb r0, 0x8(r1)
    bl fn_80686A48
    mr r0, r3
    mr r3, r21
    slwi r0, r0, 1
    mr r4, r22
    mr r6, r29
    addi r8, r1, 0x8
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_800DFB40_00000ED0:
    addi r11, r1, 0x80
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
    bl _restgpr_21
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_800E0000(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    li r8, 0x0
    stw r0, 0xd4(r1)
    stmw r16, 0x90(r1)
    mr r30, r3
    addi r3, r1, 0x58
    bl fn_800DFB40
    lis r3, __files@ha
    addi r31, r1, 0x5a
    addi r18, r1, 0x78
    li r5, 0x0
    addi r22, r3, __files@l
    li r28, 0x0
    lis r25, 0xcccd
    lis r21, lbl_80735000@ha
    lis r20, 0x1555
    lis r24, 0x71c
    lis r26, 0xe39
    lis r27, lbl_807799A0@ha
    lis r29, 0x2aab
lbl_fn_800E0000_00000F64:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_800E0000_00000F80
    lbz r0, 0x58(r1)
    mr r6, r31
    clrlwi r0, r0, 25
    b lbl_fn_800E0000_00000F88
lbl_fn_800E0000_00000F80:
    lwz r6, 0x60(r1)
    lwz r0, 0x5c(r1)
lbl_fn_800E0000_00000F88:
    cmplw r5, r0
    bge lbl_fn_800E0000_00000FE0
    slwi r3, r0, 1
    slwi r0, r5, 1
    add r4, r6, r3
    add r3, r6, r0
    addi r0, r4, 0x1
    subf r0, r3, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_800E0000_00000FE0
lbl_fn_800E0000_00000FB8:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xa
    bne lbl_fn_800E0000_00000FD8
    subf r3, r6, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r19, r0, 1
    b lbl_fn_800E0000_00000FE4
lbl_fn_800E0000_00000FD8:
    addi r3, r3, 0x2
    bdnz lbl_fn_800E0000_00000FB8
lbl_fn_800E0000_00000FE0:
    li r19, -0x1
lbl_fn_800E0000_00000FE4:
    addis r0, r19, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_800E0000_000013C8
    addi r3, r1, 0x4c
    addi r4, r1, 0x58
    subf r6, r5, r19
    bl fn_800E0908
    lwz r0, 0x4(r30)
    lwz r3, 0x8(r30)
    cmplw r0, r3
    bge lbl_fn_800E0000_00001098
    mulli r0, r0, 0xc
    lwz r3, 0x0(r30)
    add. r23, r3, r0
    beq lbl_fn_800E0000_00001088
    lwz r3, 0x4c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_800E0000_00001044
    lwz r0, 0x50(r1)
    stw r3, 0x0(r23)
    stw r0, 0x4(r23)
    lwz r0, 0x54(r1)
    stw r0, 0x8(r23)
    b lbl_fn_800E0000_00001088
lbl_fn_800E0000_00001044:
    stw r28, 0x0(r23)
    mr r3, r23
    stw r28, 0x4(r23)
    stw r28, 0x8(r23)
    lwz r4, 0x50(r1)
    bl fn_800DBF68
    lwz r0, 0x50(r1)
    mr r3, r23
    lbz r4, 0x1c(r1)
    addi r8, r1, 0x18
    stb r4, 0x18(r1)
    slwi r0, r0, 1
    lwz r6, 0x54(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_800E0000_00001088:
    lwz r3, 0x4(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_800E0000_000013AC
lbl_fn_800E0000_00001098:
    addi r0, r20, 0x5555
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_800E0000_000010BC
    addi r4, r21, lbl_80735000@l
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E0000_000010BC:
    addi r3, r30, 0x8
    stw r28, 0x78(r1)
    addi r0, r20, 0x5555
    stw r28, 0x7c(r1)
    stw r28, 0x80(r1)
    stw r3, 0x84(r1)
    stw r28, 0x88(r1)
    lwz r3, 0x4(r30)
    lwz r23, 0x8(r30)
    addi r3, r3, 0x1
    subf r3, r23, r3
    subf r0, r23, r0
    cmplw r3, r0
    stw r3, 0x3c(r1)
    ble lbl_fn_800E0000_0000110C
    addi r4, r21, lbl_80735000@l
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E0000_0000110C:
    addi r0, r24, 0x71c7
    cmplw r23, r0
    bge lbl_fn_800E0000_00001154
    addi r4, r23, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x3c(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x34
    srwi r4, r4, 2
    stw r4, 0x34(r1)
    cmplw r4, r0
    bge lbl_fn_800E0000_00001148
    addi r3, r1, 0x3c
lbl_fn_800E0000_00001148:
    lwz r0, 0x0(r3)
    add r16, r23, r0
    b lbl_fn_800E0000_00001190
lbl_fn_800E0000_00001154:
    subi r0, r26, 0x1c72
    cmplw r23, r0
    bge lbl_fn_800E0000_0000118C
    addi r3, r23, 0x1
    lwz r0, 0x3c(r1)
    srwi r3, r3, 1
    stw r3, 0x38(r1)
    cmplw r3, r0
    addi r3, r1, 0x38
    bge lbl_fn_800E0000_00001180
    addi r3, r1, 0x3c
lbl_fn_800E0000_00001180:
    lwz r0, 0x0(r3)
    add r16, r23, r0
    b lbl_fn_800E0000_00001190
lbl_fn_800E0000_0000118C:
    addi r16, r20, 0x5555
lbl_fn_800E0000_00001190:
    addi r0, r20, 0x5555
    cmplw r16, r0
    ble lbl_fn_800E0000_000011B0
    addi r4, r21, lbl_80735000@l
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E0000_000011B0:
    mulli r3, r16, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_800E0000_000011D8
    addi r3, r22, 0xa0
    addi r4, r27, lbl_807799A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E0000_000011D8:
    lwz r0, 0x7c(r1)
    stw r23, 0x78(r1)
    mulli r3, r0, 0xc
    stw r16, 0x80(r1)
    lwz r0, 0x4(r30)
    stw r0, 0x88(r1)
    mulli r0, r0, 0xc
    add r0, r23, r0
    add. r23, r3, r0
    beq lbl_fn_800E0000_00001268
    lwz r3, 0x4c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_800E0000_00001224
    lwz r0, 0x50(r1)
    stw r3, 0x0(r23)
    stw r0, 0x4(r23)
    lwz r0, 0x54(r1)
    stw r0, 0x8(r23)
    b lbl_fn_800E0000_00001268
lbl_fn_800E0000_00001224:
    stw r28, 0x0(r23)
    mr r3, r23
    stw r28, 0x4(r23)
    stw r28, 0x8(r23)
    lwz r4, 0x50(r1)
    bl fn_800DBF68
    lwz r0, 0x50(r1)
    mr r3, r23
    lbz r4, 0x20(r1)
    addi r8, r1, 0x24
    stb r4, 0x24(r1)
    slwi r0, r0, 1
    lwz r6, 0x54(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_800E0000_00001268:
    lwz r3, 0x7c(r1)
    subi r6, r29, 0x5555
    lwz r0, 0x88(r1)
    addi r3, r3, 0x1
    stw r3, 0x7c(r1)
    lwz r3, 0x78(r1)
    lwz r4, 0x4(r30)
    lwz r17, 0x0(r30)
    mulli r5, r4, 0xc
    mr r4, r17
    add r5, r17, r5
    subf r5, r17, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r23, r5, r6
    subf r0, r23, r0
    stw r0, 0x88(r1)
    mulli r16, r23, 0xc
    mulli r0, r0, 0xc
    mr r5, r16
    add r3, r3, r0
    bl memcpy
    mr r3, r17
    mr r5, r16
    li r4, 0x0
    bl memset
    lwz r3, 0x7c(r1)
    lwz r0, 0x80(r1)
    add r3, r3, r23
    stw r3, 0x7c(r1)
    lwz r3, 0x8(r30)
    stw r0, 0x8(r30)
    stw r3, 0x80(r1)
    lwz r0, 0x78(r1)
    lwz r3, 0x0(r30)
    stw r0, 0x0(r30)
    stw r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    lwz r5, 0x4(r30)
    stw r0, 0x4(r30)
    mulli r0, r5, 0xc
    lwz r3, 0x88(r1)
    lwz r4, 0x78(r1)
    mulli r3, r3, 0xc
    stw r5, 0x7c(r1)
    add r23, r4, r3
    add r16, r23, r0
    b lbl_fn_800E0000_00001348
lbl_fn_800E0000_0000132C:
    subic. r16, r16, 0xc
    beq lbl_fn_800E0000_00001348
    lwz r0, 0x0(r16)
    srwi. r0, r0, 31
    beq lbl_fn_800E0000_00001348
    lwz r3, 0x8(r16)
    bl dtor_80084684
lbl_fn_800E0000_00001348:
    cmplw r16, r23
    bgt lbl_fn_800E0000_0000132C
    cmpwi r18, 0x0
    stw r28, 0x7c(r1)
    beq lbl_fn_800E0000_000013AC
    lwz r3, 0x78(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800E0000_000013AC
    mulli r0, r28, 0xc
    stw r28, 0x7c(r1)
    li r23, 0x0
    add r16, r3, r0
    b lbl_fn_800E0000_0000139C
lbl_fn_800E0000_0000137C:
    subic. r16, r16, 0xc
    beq lbl_fn_800E0000_00001398
    lwz r0, 0x0(r16)
    srwi. r0, r0, 31
    beq lbl_fn_800E0000_00001398
    lwz r3, 0x8(r16)
    bl dtor_80084684
lbl_fn_800E0000_00001398:
    subi r23, r23, 0x1
lbl_fn_800E0000_0000139C:
    cmpwi r23, 0x0
    bne lbl_fn_800E0000_0000137C
    lwz r3, 0x78(r1)
    bl dtor_80084684
lbl_fn_800E0000_000013AC:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800E0000_000013C0
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_800E0000_000013C0:
    addi r5, r19, 0x1
    b lbl_fn_800E0000_00000F64
lbl_fn_800E0000_000013C8:
    addi r3, r1, 0x40
    addi r4, r1, 0x58
    li r6, -0x1
    bl fn_800E0908
    lwz r0, 0x4(r30)
    lwz r4, 0x8(r30)
    cmplw r0, r4
    bge lbl_fn_800E0000_00001474
    mulli r0, r0, 0xc
    lwz r3, 0x0(r30)
    add. r16, r3, r0
    beq lbl_fn_800E0000_00001464
    lwz r3, 0x40(r1)
    srwi. r0, r3, 31
    bne lbl_fn_800E0000_0000141C
    lwz r0, 0x44(r1)
    stw r3, 0x0(r16)
    stw r0, 0x4(r16)
    lwz r0, 0x48(r1)
    stw r0, 0x8(r16)
    b lbl_fn_800E0000_00001464
lbl_fn_800E0000_0000141C:
    li r0, 0x0
    stw r0, 0x0(r16)
    mr r3, r16
    stw r0, 0x4(r16)
    stw r0, 0x8(r16)
    lwz r4, 0x44(r1)
    bl fn_800DBF68
    lwz r0, 0x44(r1)
    mr r3, r16
    lbz r4, 0xc(r1)
    addi r8, r1, 0x8
    stb r4, 0x8(r1)
    slwi r0, r0, 1
    lwz r6, 0x48(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_800E0000_00001464:
    lwz r3, 0x4(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_800E0000_000017DC
lbl_fn_800E0000_00001474:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_800E0000_000014A8
    lis r3, __files@ha
    lis r4, lbl_80735000@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80735000@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E0000_000014A8:
    lwz r4, 0x4(r30)
    li r6, 0x0
    lis r3, 0x1555
    lwz r31, 0x8(r30)
    addi r0, r3, 0x5555
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r5, r30, 0x8
    subf r0, r31, r0
    stw r6, 0x64(r1)
    cmplw r3, r0
    stw r6, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r6, 0x74(r1)
    stw r3, 0x30(r1)
    ble lbl_fn_800E0000_0000150C
    lis r3, __files@ha
    lis r4, lbl_80735000@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80735000@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E0000_0000150C:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_800E0000_0000155C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x30(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_800E0000_00001550
    addi r3, r1, 0x30
lbl_fn_800E0000_00001550:
    lwz r0, 0x0(r3)
    add r16, r31, r0
    b lbl_fn_800E0000_000015A0
lbl_fn_800E0000_0000155C:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_800E0000_00001598
    addi r3, r31, 0x1
    lwz r0, 0x30(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_800E0000_0000158C
    addi r3, r1, 0x30
lbl_fn_800E0000_0000158C:
    lwz r0, 0x0(r3)
    add r16, r31, r0
    b lbl_fn_800E0000_000015A0
lbl_fn_800E0000_00001598:
    lis r3, 0x1555
    addi r16, r3, 0x5555
lbl_fn_800E0000_000015A0:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r16, r0
    ble lbl_fn_800E0000_000015D0
    lis r3, __files@ha
    lis r4, lbl_80735000@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80735000@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E0000_000015D0:
    mulli r3, r16, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_800E0000_00001604
    lis r3, __files@ha
    lis r4, lbl_807799A0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807799A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E0000_00001604:
    lwz r6, 0x4(r30)
    li r0, 0x0
    lwz r3, 0x68(r1)
    mulli r5, r6, 0xc
    stw r16, 0x6c(r1)
    stw r17, 0x64(r1)
    mulli r4, r3, 0xc
    add r3, r17, r5
    stw r6, 0x74(r1)
    add. r16, r4, r3
    beq lbl_fn_800E0000_00001698
    lwz r4, 0x40(r1)
    srwi. r3, r4, 31
    bne lbl_fn_800E0000_00001654
    lwz r0, 0x44(r1)
    stw r4, 0x0(r16)
    stw r0, 0x4(r16)
    lwz r0, 0x48(r1)
    stw r0, 0x8(r16)
    b lbl_fn_800E0000_00001698
lbl_fn_800E0000_00001654:
    stw r0, 0x0(r16)
    mr r3, r16
    stw r0, 0x4(r16)
    stw r0, 0x8(r16)
    lwz r4, 0x44(r1)
    bl fn_800DBF68
    lwz r0, 0x44(r1)
    mr r3, r16
    lbz r4, 0x10(r1)
    addi r8, r1, 0x14
    stb r4, 0x14(r1)
    slwi r0, r0, 1
    lwz r6, 0x48(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_800E0000_00001698:
    lwz r0, 0x4(r30)
    lis r3, 0x2aab
    lwz r16, 0x0(r30)
    subi r6, r3, 0x5555
    mulli r5, r0, 0xc
    lwz r3, 0x68(r1)
    lwz r0, 0x74(r1)
    mr r4, r16
    addi r7, r3, 0x1
    lwz r3, 0x64(r1)
    add r5, r16, r5
    stw r7, 0x68(r1)
    subf r5, r16, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r17, r5, r6
    subf r0, r17, r0
    stw r0, 0x74(r1)
    mulli r18, r17, 0xc
    mulli r0, r0, 0xc
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r16
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x74(r1)
    addi r16, r1, 0x64
    lwz r8, 0x4(r30)
    mulli r3, r0, 0xc
    lwz r0, 0x68(r1)
    lwz r7, 0x0(r30)
    lwz r4, 0x64(r1)
    add r5, r0, r17
    add r18, r7, r3
    mulli r0, r8, 0xc
    lwz r6, 0x8(r30)
    lwz r3, 0x6c(r1)
    stw r3, 0x8(r30)
    add r17, r18, r0
    stw r6, 0x6c(r1)
    stw r4, 0x0(r30)
    stw r7, 0x64(r1)
    stw r5, 0x4(r30)
    stw r8, 0x68(r1)
    b lbl_fn_800E0000_00001774
lbl_fn_800E0000_00001758:
    subic. r17, r17, 0xc
    beq lbl_fn_800E0000_00001774
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_800E0000_00001774
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_800E0000_00001774:
    cmplw r17, r18
    bgt lbl_fn_800E0000_00001758
    cmpwi r16, 0x0
    li r0, 0x0
    stw r0, 0x68(r1)
    beq lbl_fn_800E0000_000017DC
    lwz r3, 0x64(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800E0000_000017DC
    mulli r0, r0, 0xc
    li r16, 0x0
    stw r16, 0x68(r1)
    add r17, r3, r0
    b lbl_fn_800E0000_000017CC
lbl_fn_800E0000_000017AC:
    subic. r17, r17, 0xc
    beq lbl_fn_800E0000_000017C8
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_800E0000_000017C8
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_800E0000_000017C8:
    subi r16, r16, 0x1
lbl_fn_800E0000_000017CC:
    cmpwi r16, 0x0
    bne lbl_fn_800E0000_000017AC
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_800E0000_000017DC:
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800E0000_000017F0
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_800E0000_000017F0:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800E0000_00001804
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_800E0000_00001804:
    lmw r16, 0x90(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
