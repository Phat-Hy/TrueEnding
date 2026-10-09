#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80049B2C(void);
extern void fn_8008BBD8(void);
extern void fn_800C8278(void);
extern void fn_800C82A0(void);
extern void fn_800CA1D4(void);
extern void fn_800CB714(void);
extern void fn_800CB718(void);
extern void fn_800CB788(void);
extern void fn_800CB7F0(void);
extern void fn_800CB7FC(void);
extern void fn_800D0DB0(void);
extern void fn_800D0F34(void);
extern void fn_800D10B8(void);
extern void fn_800D123C(void);
extern void fn_80682428(void);
extern void fn_80709AD0(void);

/* External data declarations */
extern u8 lbl_80779678[];
extern u8 lbl_80779680[];
extern u8 lbl_80779688[];
extern u8 lbl_80779690[];
extern u8 lbl_807C75B0[];
extern u8 lbl_807C75B8[];
extern u8 lbl_807C75C0[];
extern u8 lbl_807C75C8[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EFEC;
extern u32 lbl_8087EFED;
extern u32 lbl_8087EFEE;
extern u32 lbl_8087EFEF;

/* Function declarations */
void fn_800CF5B4(void);
void fn_800CF5D0(void);
void fn_800CF680(void);
void fn_800CF7DC(void);
void fn_800CF950(void);
void fn_800CF970(void);
void fn_800CFA28(void);
void fn_800CFBA0(void);
void fn_800CFD18(void);
void fn_800CFDA0(void);
void fn_800CFDC8(void);
void fn_800CFDF0(void);
void fn_800CFFB8(void);
void fn_800D0180(void);
void fn_800D0198(void);
void fn_800D0240(void);
void fn_800D03AC(void);
void fn_800D0518(void);
void fn_800D0684(void);
void fn_800D07E8(void);
void fn_800D07FC(void);
void fn_800D089C(void);
void fn_800D0974(void);
void fn_800D0AB0(void);
void fn_800D0C1C(void);

asm void fn_800CF5B4(void)
{
    nofralloc
    mr r5, r3
    mr r3, r4
    lwz r12, 0x0(r5)
    lwz r4, 0x4(r5)
    lwz r5, 0x8(r5)
    mtctr r12
    bctr
}

asm void fn_800CF5D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_800CF5D0_00000050
    lis r3, lbl_80779690@ha
    addi r3, r3, lbl_80779690@l
    stw r3, 0x0(r4)
    b lbl_fn_800CF5D0_000000B4
lbl_fn_800CF5D0_00000050:
    cmpwi r5, 0x0
    bne lbl_fn_800CF5D0_0000007C
    cmpwi r4, 0x0
    beq lbl_fn_800CF5D0_000000B4
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    b lbl_fn_800CF5D0_000000B4
lbl_fn_800CF5D0_0000007C:
    cmpwi r5, 0x1
    beq lbl_fn_800CF5D0_000000B4
    lwz r5, 0x0(r4)
    lis r3, lbl_80779690@ha
    lwz r4, lbl_80779690@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800CF5D0_000000AC
    stw r30, 0x0(r31)
    b lbl_fn_800CF5D0_000000B4
lbl_fn_800CF5D0_000000AC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_800CF5D0_000000B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CF680(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r8, fn_800CB718@ha
    li r7, 0x0
    stw r0, 0x54(r1)
    addi r8, r8, fn_800CB718@l
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lbz r0, lbl_8087EFEC
    stw r5, 0x8(r1)
    extsb. r0, r0
    stw r6, 0xc(r1)
    stw r8, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r7, 0x34(r1)
    bne lbl_fn_800CF680_00000140
    lis r6, lbl_807C75B0@ha
    lis r4, fn_800CF5B4@ha
    lis r3, fn_800CF5D0@ha
    li r0, 0x1
    addi r3, r3, fn_800CF5D0@l
    addi r5, r6, lbl_807C75B0@l
    addi r4, r4, fn_800CF5B4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75B0@l(r6)
    stb r0, lbl_8087EFEC
lbl_fn_800CF680_00000140:
    lwz r5, 0x28(r1)
    addi r3, r1, 0x1c
    lwz r4, 0x2c(r1)
    lwz r0, 0x30(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CF680_000001A0
    addic. r0, r1, 0x38
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r4, 0x10(r1)
    stw r3, 0x14(r1)
    stw r0, 0x18(r1)
    beq lbl_fn_800CF680_00000198
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_800CF680_00000198:
    li r0, 0x1
    b lbl_fn_800CF680_000001A4
lbl_fn_800CF680_000001A0:
    li r0, 0x0
lbl_fn_800CF680_000001A4:
    cmpwi r0, 0x0
    beq lbl_fn_800CF680_000001BC
    lis r3, lbl_807C75B0@ha
    addi r3, r3, lbl_807C75B0@l
    stw r3, 0x34(r1)
    b lbl_fn_800CF680_000001C4
lbl_fn_800CF680_000001BC:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CF680_000001C4:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x34
    bl fn_800D0F34
    addic. r3, r1, 0x34
    beq lbl_fn_800CF680_00000210
    lwz r4, 0x34(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CF680_00000210
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CF680_00000208
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CF680_00000208:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CF680_00000210:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800CF7DC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r8, fn_800CB714@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r8, r8, fn_800CB714@l
    stw r31, 0x6c(r1)
    mr r31, r3
    lbz r0, lbl_8087EFED
    stw r4, 0x28(r1)
    extsb. r0, r0
    stw r5, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r8, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r6, 0x44(r1)
    stw r7, 0x48(r1)
    bne lbl_fn_800CF7DC_0000029C
    lis r6, lbl_807C75B8@ha
    lis r4, fn_800CF950@ha
    lis r3, fn_800CF970@ha
    li r0, 0x1
    addi r3, r3, fn_800CF970@l
    addi r5, r6, lbl_807C75B8@l
    addi r4, r4, fn_800CF950@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75B8@l(r6)
    stb r0, lbl_8087EFED
lbl_fn_800CF7DC_0000029C:
    lwz r6, 0x38(r1)
    addi r3, r1, 0x18
    lwz r5, 0x3c(r1)
    lwz r4, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CF7DC_00000310
    addic. r0, r1, 0x4c
    lwz r5, 0x18(r1)
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_800CF7DC_00000308
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_800CF7DC_00000308:
    li r0, 0x1
    b lbl_fn_800CF7DC_00000314
lbl_fn_800CF7DC_00000310:
    li r0, 0x0
lbl_fn_800CF7DC_00000314:
    cmpwi r0, 0x0
    beq lbl_fn_800CF7DC_0000032C
    lis r3, lbl_807C75B8@ha
    addi r3, r3, lbl_807C75B8@l
    stw r3, 0x48(r1)
    b lbl_fn_800CF7DC_00000334
lbl_fn_800CF7DC_0000032C:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_800CF7DC_00000334:
    mr r3, r31
    addi r4, r1, 0x48
    li r5, -0x1
    li r6, -0x1
    li r7, -0x1
    bl fn_800D123C
    addic. r3, r1, 0x48
    beq lbl_fn_800CF7DC_00000388
    lwz r4, 0x48(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CF7DC_00000388
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CF7DC_00000380
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CF7DC_00000380:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_800CF7DC_00000388:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800CF950(void)
{
    nofralloc
    mr r6, r3
    mr r3, r4
    lwz r12, 0x0(r6)
    lwz r4, 0x4(r6)
    lwz r5, 0x8(r6)
    lwz r6, 0xc(r6)
    mtctr r12
    bctr
}

asm void fn_800CF970(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_800CF970_000003F0
    lis r3, lbl_80779688@ha
    addi r3, r3, lbl_80779688@l
    stw r3, 0x0(r4)
    b lbl_fn_800CF970_0000045C
lbl_fn_800CF970_000003F0:
    cmpwi r5, 0x0
    bne lbl_fn_800CF970_00000424
    cmpwi r4, 0x0
    beq lbl_fn_800CF970_0000045C
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_800CF970_0000045C
lbl_fn_800CF970_00000424:
    cmpwi r5, 0x1
    beq lbl_fn_800CF970_0000045C
    lwz r5, 0x0(r4)
    lis r3, lbl_80779688@ha
    lwz r4, lbl_80779688@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800CF970_00000454
    stw r30, 0x0(r31)
    b lbl_fn_800CF970_0000045C
lbl_fn_800CF970_00000454:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_800CF970_0000045C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CFA28(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r9, fn_800CB714@ha
    li r8, 0x0
    stw r0, 0x74(r1)
    addi r9, r9, fn_800CB714@l
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lbz r0, lbl_8087EFED
    stw r5, 0x28(r1)
    extsb. r0, r0
    stw r6, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r9, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r7, 0x44(r1)
    stw r8, 0x48(r1)
    bne lbl_fn_800CFA28_000004F0
    lis r6, lbl_807C75B8@ha
    lis r4, fn_800CF950@ha
    lis r3, fn_800CF970@ha
    li r0, 0x1
    addi r3, r3, fn_800CF970@l
    addi r5, r6, lbl_807C75B8@l
    addi r4, r4, fn_800CF950@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75B8@l(r6)
    stb r0, lbl_8087EFED
lbl_fn_800CFA28_000004F0:
    lwz r6, 0x38(r1)
    addi r3, r1, 0x18
    lwz r5, 0x3c(r1)
    lwz r4, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CFA28_00000564
    addic. r0, r1, 0x4c
    lwz r5, 0x18(r1)
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_800CFA28_0000055C
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_800CFA28_0000055C:
    li r0, 0x1
    b lbl_fn_800CFA28_00000568
lbl_fn_800CFA28_00000564:
    li r0, 0x0
lbl_fn_800CFA28_00000568:
    cmpwi r0, 0x0
    beq lbl_fn_800CFA28_00000580
    lis r3, lbl_807C75B8@ha
    addi r3, r3, lbl_807C75B8@l
    stw r3, 0x48(r1)
    b lbl_fn_800CFA28_00000588
lbl_fn_800CFA28_00000580:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_800CFA28_00000588:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x48
    bl fn_800D0DB0
    addic. r3, r1, 0x48
    beq lbl_fn_800CFA28_000005D4
    lwz r4, 0x48(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CFA28_000005D4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CFA28_000005CC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CFA28_000005CC:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_800CFA28_000005D4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800CFBA0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r9, fn_800CB714@ha
    li r8, 0x0
    stw r0, 0x74(r1)
    addi r9, r9, fn_800CB714@l
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lbz r0, lbl_8087EFED
    stw r5, 0x28(r1)
    extsb. r0, r0
    stw r6, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r9, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r7, 0x44(r1)
    stw r8, 0x48(r1)
    bne lbl_fn_800CFBA0_00000668
    lis r6, lbl_807C75B8@ha
    lis r4, fn_800CF950@ha
    lis r3, fn_800CF970@ha
    li r0, 0x1
    addi r3, r3, fn_800CF970@l
    addi r5, r6, lbl_807C75B8@l
    addi r4, r4, fn_800CF950@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75B8@l(r6)
    stb r0, lbl_8087EFED
lbl_fn_800CFBA0_00000668:
    lwz r6, 0x38(r1)
    addi r3, r1, 0x18
    lwz r5, 0x3c(r1)
    lwz r4, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CFBA0_000006DC
    addic. r0, r1, 0x4c
    lwz r5, 0x18(r1)
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_800CFBA0_000006D4
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_800CFBA0_000006D4:
    li r0, 0x1
    b lbl_fn_800CFBA0_000006E0
lbl_fn_800CFBA0_000006DC:
    li r0, 0x0
lbl_fn_800CFBA0_000006E0:
    cmpwi r0, 0x0
    beq lbl_fn_800CFBA0_000006F8
    lis r3, lbl_807C75B8@ha
    addi r3, r3, lbl_807C75B8@l
    stw r3, 0x48(r1)
    b lbl_fn_800CFBA0_00000700
lbl_fn_800CFBA0_000006F8:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_800CFBA0_00000700:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x48
    bl fn_800D0F34
    addic. r3, r1, 0x48
    beq lbl_fn_800CFBA0_0000074C
    lwz r4, 0x48(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CFBA0_0000074C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CFBA0_00000744
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CFBA0_00000744:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_800CFBA0_0000074C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800CFD18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r4
    mr r27, r5
    addi r29, r3, 0x4
    cntlzw r31, r5
    li r28, 0x0
    li r30, 0x1
lbl_fn_800CFD18_0000078C:
    lwz r3, 0x4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800CFD18_000007C8
    cmpwi r26, 0x0
    beq lbl_fn_800CFD18_000007AC
    lwz r0, 0xb4(r29)
    cmplw r0, r26
    bne lbl_fn_800CFD18_000007C8
lbl_fn_800CFD18_000007AC:
    cmpwi r3, 0x0
    beq lbl_fn_800CFD18_000007BC
    mr r4, r27
    bl fn_80709AD0
lbl_fn_800CFD18_000007BC:
    mr r3, r29
    rlwnm r4, r30, r31, 31, 31
    bl fn_800C82A0
lbl_fn_800CFD18_000007C8:
    addi r28, r28, 0x1
    addi r29, r29, 0x14c
    cmpwi r28, 0x20
    blt lbl_fn_800CFD18_0000078C
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800CFDA0(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_800CFDA0_000007FC
    cmpwi r4, 0x8
    blt lbl_fn_800CFDA0_00000804
lbl_fn_800CFDA0_000007FC:
    li r3, 0x0
    blr
lbl_fn_800CFDA0_00000804:
    mulli r0, r4, 0x18
    add r3, r3, r0
    addi r3, r3, 0x2a18
    blr
}

asm void fn_800CFDC8(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_800CFDC8_00000824
    cmpwi r4, 0x20
    blt lbl_fn_800CFDC8_0000082C
lbl_fn_800CFDC8_00000824:
    li r3, 0x0
    blr
lbl_fn_800CFDC8_0000082C:
    mulli r0, r4, 0x18
    add r3, r3, r0
    addi r3, r3, 0x2b98
    blr
}

asm void fn_800CFDF0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    lwz r0, 0x0(r4)
    stw r31, 0x3c(r1)
    cmpwi r0, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    blt lbl_fn_800CFDF0_00000868
    cmpwi r0, 0x20
    blt lbl_fn_800CFDF0_00000870
lbl_fn_800CFDF0_00000868:
    li r5, 0x0
    b lbl_fn_800CFDF0_0000087C
lbl_fn_800CFDF0_00000870:
    mulli r0, r0, 0x18
    add r5, r3, r0
    addi r5, r5, 0x2b98
lbl_fn_800CFDF0_0000087C:
    cmpwi r5, 0x0
    beq lbl_fn_800CFDF0_000009EC
    lwz r31, 0x0(r4)
    stw r31, 0x0(r5)
    lwz r0, 0x4(r4)
    cmpwi r31, 0x0
    stw r0, 0x4(r5)
    lfs f1, 0x8(r4)
    stfs f1, 0x8(r5)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r5)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r5)
    blt lbl_fn_800CFDF0_000008C4
    cmpwi r31, 0x20
    blt lbl_fn_800CFDF0_000008CC
lbl_fn_800CFDF0_000008C4:
    li r3, 0x0
    b lbl_fn_800CFDF0_000008D8
lbl_fn_800CFDF0_000008CC:
    mulli r0, r31, 0x18
    add r3, r3, r0
    addi r3, r3, 0x2b98
lbl_fn_800CFDF0_000008D8:
    cmpwi r3, 0x0
    beq lbl_fn_800CFDF0_000009EC
    stfs f1, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x8(r1)
    extsb. r0, r0
    stw r4, 0xc(r1)
    stw r4, 0x20(r1)
    bne lbl_fn_800CFDF0_00000930
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CFDF0_00000930:
    lwz r4, 0x8(r1)
    addi r3, r1, 0x10
    lwz r0, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CFDF0_0000097C
    addic. r0, r1, 0x24
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_800CFDF0_00000974
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_800CFDF0_00000974:
    li r0, 0x1
    b lbl_fn_800CFDF0_00000980
lbl_fn_800CFDF0_0000097C:
    li r0, 0x0
lbl_fn_800CFDF0_00000980:
    cmpwi r0, 0x0
    beq lbl_fn_800CFDF0_00000998
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x20(r1)
    b lbl_fn_800CFDF0_000009A0
lbl_fn_800CFDF0_00000998:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800CFDF0_000009A0:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x20
    bl fn_800D0F34
    addic. r3, r1, 0x20
    beq lbl_fn_800CFDF0_000009EC
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CFDF0_000009EC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CFDF0_000009E4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CFDF0_000009E4:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800CFDF0_000009EC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800CFFB8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    lwz r0, 0x0(r4)
    stw r31, 0x3c(r1)
    cmpwi r0, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    blt lbl_fn_800CFFB8_00000A30
    cmpwi r0, 0x10
    blt lbl_fn_800CFFB8_00000A38
lbl_fn_800CFFB8_00000A30:
    li r5, 0x0
    b lbl_fn_800CFFB8_00000A44
lbl_fn_800CFFB8_00000A38:
    mulli r0, r0, 0x18
    add r5, r3, r0
    addi r5, r5, 0x3198
lbl_fn_800CFFB8_00000A44:
    cmpwi r5, 0x0
    beq lbl_fn_800CFFB8_00000BB4
    lwz r31, 0x0(r4)
    stw r31, 0x0(r5)
    lwz r0, 0x4(r4)
    cmpwi r31, 0x0
    stw r0, 0x4(r5)
    lfs f1, 0x8(r4)
    stfs f1, 0x8(r5)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r5)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r5)
    blt lbl_fn_800CFFB8_00000A8C
    cmpwi r31, 0x10
    blt lbl_fn_800CFFB8_00000A94
lbl_fn_800CFFB8_00000A8C:
    li r3, 0x0
    b lbl_fn_800CFFB8_00000AA0
lbl_fn_800CFFB8_00000A94:
    mulli r0, r31, 0x18
    add r3, r3, r0
    addi r3, r3, 0x3198
lbl_fn_800CFFB8_00000AA0:
    cmpwi r3, 0x0
    beq lbl_fn_800CFFB8_00000BB4
    stfs f1, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x8(r1)
    extsb. r0, r0
    stw r4, 0xc(r1)
    stw r4, 0x20(r1)
    bne lbl_fn_800CFFB8_00000AF8
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CFFB8_00000AF8:
    lwz r4, 0x8(r1)
    addi r3, r1, 0x10
    lwz r0, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CFFB8_00000B44
    addic. r0, r1, 0x24
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_800CFFB8_00000B3C
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_800CFFB8_00000B3C:
    li r0, 0x1
    b lbl_fn_800CFFB8_00000B48
lbl_fn_800CFFB8_00000B44:
    li r0, 0x0
lbl_fn_800CFFB8_00000B48:
    cmpwi r0, 0x0
    beq lbl_fn_800CFFB8_00000B60
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x20(r1)
    b lbl_fn_800CFFB8_00000B68
lbl_fn_800CFFB8_00000B60:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800CFFB8_00000B68:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x20
    bl fn_800D10B8
    addic. r3, r1, 0x20
    beq lbl_fn_800CFFB8_00000BB4
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CFFB8_00000BB4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CFFB8_00000BAC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CFFB8_00000BAC:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800CFFB8_00000BB4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800D0180(void)
{
    nofralloc
    mr r5, r3
    mr r3, r4
    lwz r12, 0x0(r5)
    lwz r4, 0x4(r5)
    mtctr r12
    bctr
}

asm void fn_800D0198(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_800D0198_00000C18
    lis r3, lbl_80779680@ha
    addi r3, r3, lbl_80779680@l
    stw r3, 0x0(r4)
    b lbl_fn_800D0198_00000C74
lbl_fn_800D0198_00000C18:
    cmpwi r5, 0x0
    bne lbl_fn_800D0198_00000C3C
    cmpwi r4, 0x0
    beq lbl_fn_800D0198_00000C74
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    b lbl_fn_800D0198_00000C74
lbl_fn_800D0198_00000C3C:
    cmpwi r5, 0x1
    beq lbl_fn_800D0198_00000C74
    lwz r5, 0x0(r4)
    lis r3, lbl_80779680@ha
    lwz r4, lbl_80779680@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800D0198_00000C6C
    stw r30, 0x0(r31)
    b lbl_fn_800D0198_00000C74
lbl_fn_800D0198_00000C6C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_800D0198_00000C74:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D0240(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    blt lbl_fn_800D0240_00000CB8
    cmpwi r4, 0x8
    blt lbl_fn_800D0240_00000CC0
lbl_fn_800D0240_00000CB8:
    li r3, 0x0
    b lbl_fn_800D0240_00000CCC
lbl_fn_800D0240_00000CC0:
    mulli r0, r4, 0x18
    add r3, r3, r0
    addi r3, r3, 0x2a18
lbl_fn_800D0240_00000CCC:
    cmpwi r3, 0x0
    beq lbl_fn_800D0240_00000DE0
    stfs f1, 0x8(r3)
    lis r4, fn_800CB7F0@ha
    addi r4, r4, fn_800CB7F0@l
    li r3, 0x0
    lbz r0, lbl_8087EFEE
    stw r4, 0x18(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r3, 0x20(r1)
    bne lbl_fn_800D0240_00000D24
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800D0240_00000D24:
    lwz r4, 0x18(r1)
    addi r3, r1, 0x10
    lwz r0, 0x1c(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800D0240_00000D70
    addic. r0, r1, 0x24
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_800D0240_00000D68
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_800D0240_00000D68:
    li r0, 0x1
    b lbl_fn_800D0240_00000D74
lbl_fn_800D0240_00000D70:
    li r0, 0x0
lbl_fn_800D0240_00000D74:
    cmpwi r0, 0x0
    beq lbl_fn_800D0240_00000D8C
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x20(r1)
    b lbl_fn_800D0240_00000D94
lbl_fn_800D0240_00000D8C:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D0240_00000D94:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x20
    bl fn_800D0DB0
    addic. r3, r1, 0x20
    beq lbl_fn_800D0240_00000DE0
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800D0240_00000DE0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800D0240_00000DD8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800D0240_00000DD8:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D0240_00000DE0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800D03AC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    blt lbl_fn_800D03AC_00000E24
    cmpwi r4, 0x20
    blt lbl_fn_800D03AC_00000E2C
lbl_fn_800D03AC_00000E24:
    li r3, 0x0
    b lbl_fn_800D03AC_00000E38
lbl_fn_800D03AC_00000E2C:
    mulli r0, r4, 0x18
    add r3, r3, r0
    addi r3, r3, 0x2b98
lbl_fn_800D03AC_00000E38:
    cmpwi r3, 0x0
    beq lbl_fn_800D03AC_00000F4C
    stfs f1, 0x8(r3)
    lis r4, fn_800CB7F0@ha
    addi r4, r4, fn_800CB7F0@l
    li r3, 0x0
    lbz r0, lbl_8087EFEE
    stw r4, 0x18(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r3, 0x20(r1)
    bne lbl_fn_800D03AC_00000E90
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800D03AC_00000E90:
    lwz r4, 0x18(r1)
    addi r3, r1, 0x10
    lwz r0, 0x1c(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800D03AC_00000EDC
    addic. r0, r1, 0x24
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_800D03AC_00000ED4
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_800D03AC_00000ED4:
    li r0, 0x1
    b lbl_fn_800D03AC_00000EE0
lbl_fn_800D03AC_00000EDC:
    li r0, 0x0
lbl_fn_800D03AC_00000EE0:
    cmpwi r0, 0x0
    beq lbl_fn_800D03AC_00000EF8
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x20(r1)
    b lbl_fn_800D03AC_00000F00
lbl_fn_800D03AC_00000EF8:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D03AC_00000F00:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x20
    bl fn_800D0F34
    addic. r3, r1, 0x20
    beq lbl_fn_800D03AC_00000F4C
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800D03AC_00000F4C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800D03AC_00000F44
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800D03AC_00000F44:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D03AC_00000F4C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800D0518(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    blt lbl_fn_800D0518_00000F90
    cmpwi r4, 0x10
    blt lbl_fn_800D0518_00000F98
lbl_fn_800D0518_00000F90:
    li r3, 0x0
    b lbl_fn_800D0518_00000FA4
lbl_fn_800D0518_00000F98:
    mulli r0, r4, 0x18
    add r3, r3, r0
    addi r3, r3, 0x3198
lbl_fn_800D0518_00000FA4:
    cmpwi r3, 0x0
    beq lbl_fn_800D0518_000010B8
    stfs f1, 0x8(r3)
    lis r4, fn_800CB7F0@ha
    addi r4, r4, fn_800CB7F0@l
    li r3, 0x0
    lbz r0, lbl_8087EFEE
    stw r4, 0x18(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r3, 0x20(r1)
    bne lbl_fn_800D0518_00000FFC
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800D0518_00000FFC:
    lwz r4, 0x18(r1)
    addi r3, r1, 0x10
    lwz r0, 0x1c(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800D0518_00001048
    addic. r0, r1, 0x24
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_800D0518_00001040
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_800D0518_00001040:
    li r0, 0x1
    b lbl_fn_800D0518_0000104C
lbl_fn_800D0518_00001048:
    li r0, 0x0
lbl_fn_800D0518_0000104C:
    cmpwi r0, 0x0
    beq lbl_fn_800D0518_00001064
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x20(r1)
    b lbl_fn_800D0518_0000106C
lbl_fn_800D0518_00001064:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D0518_0000106C:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x20
    bl fn_800D10B8
    addic. r3, r1, 0x20
    beq lbl_fn_800D0518_000010B8
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800D0518_000010B8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800D0518_000010B0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800D0518_000010B0:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D0518_000010B8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800D0684(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    blt lbl_fn_800D0684_000010FC
    cmpwi r4, 0x8
    blt lbl_fn_800D0684_00001104
lbl_fn_800D0684_000010FC:
    li r3, 0x0
    b lbl_fn_800D0684_00001110
lbl_fn_800D0684_00001104:
    mulli r0, r4, 0x18
    add r3, r3, r0
    addi r3, r3, 0x2a18
lbl_fn_800D0684_00001110:
    cmpwi r3, 0x0
    beq lbl_fn_800D0684_0000121C
    stfs f1, 0x14(r3)
    lis r4, fn_800CB7FC@ha
    addi r4, r4, fn_800CB7FC@l
    li r3, 0x0
    lbz r0, lbl_8087EFEF
    stw r4, 0x18(r1)
    extsb. r0, r0
    stw r3, 0x20(r1)
    bne lbl_fn_800D0684_00001164
    lis r6, lbl_807C75C8@ha
    lis r4, fn_800D07E8@ha
    lis r3, fn_800D07FC@ha
    li r0, 0x1
    addi r3, r3, fn_800D07FC@l
    addi r5, r6, lbl_807C75C8@l
    addi r4, r4, fn_800D07E8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C8@l(r6)
    stb r0, lbl_8087EFEF
lbl_fn_800D0684_00001164:
    lwz r4, 0x18(r1)
    addi r3, r1, 0x10
    lwz r0, 0x1c(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800D0684_000011AC
    addic. r0, r1, 0x24
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_800D0684_000011A4
    stw r3, 0x24(r1)
lbl_fn_800D0684_000011A4:
    li r0, 0x1
    b lbl_fn_800D0684_000011B0
lbl_fn_800D0684_000011AC:
    li r0, 0x0
lbl_fn_800D0684_000011B0:
    cmpwi r0, 0x0
    beq lbl_fn_800D0684_000011C8
    lis r3, lbl_807C75C8@ha
    addi r3, r3, lbl_807C75C8@l
    stw r3, 0x20(r1)
    b lbl_fn_800D0684_000011D0
lbl_fn_800D0684_000011C8:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D0684_000011D0:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x20
    bl fn_800D0DB0
    addic. r3, r1, 0x20
    beq lbl_fn_800D0684_0000121C
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800D0684_0000121C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800D0684_00001214
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800D0684_00001214:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D0684_0000121C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800D07E8(void)
{
    nofralloc
    mr r5, r3
    mr r3, r4
    lwz r12, 0x0(r5)
    mtctr r12
    bctr
}

asm void fn_800D07FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_800D07FC_0000127C
    lis r3, lbl_80779678@ha
    addi r3, r3, lbl_80779678@l
    stw r3, 0x0(r4)
    b lbl_fn_800D07FC_000012D0
lbl_fn_800D07FC_0000127C:
    cmpwi r5, 0x0
    bne lbl_fn_800D07FC_00001298
    cmpwi r4, 0x0
    beq lbl_fn_800D07FC_000012D0
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_800D07FC_000012D0
lbl_fn_800D07FC_00001298:
    cmpwi r5, 0x1
    beq lbl_fn_800D07FC_000012D0
    lwz r5, 0x0(r4)
    lis r3, lbl_80779678@ha
    lwz r4, lbl_80779678@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800D07FC_000012C8
    stw r30, 0x0(r31)
    b lbl_fn_800D07FC_000012D0
lbl_fn_800D07FC_000012C8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_800D07FC_000012D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D089C(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_800D089C_000012F8
    cmpwi r4, 0x20
    blt lbl_fn_800D089C_00001300
lbl_fn_800D089C_000012F8:
    li r4, 0x0
    b lbl_fn_800D089C_0000130C
lbl_fn_800D089C_00001300:
    mulli r0, r4, 0x18
    add r4, r3, r0
    addi r4, r4, 0x2b98
lbl_fn_800D089C_0000130C:
    li r0, 0x10
    addi r6, r3, 0x4
    li r3, 0x0
    li r7, 0x0
    mtctr r0
lbl_fn_800D089C_00001320:
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_fn_800D089C_00001368
    lwz r0, 0x9c(r6)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_800D089C_00001368
    cmpwi r4, 0x0
    beq lbl_fn_800D089C_00001350
    lwz r0, 0xac(r6)
    cmplw r0, r4
    bne lbl_fn_800D089C_00001368
lbl_fn_800D089C_00001350:
    cmpwi r5, 0x0
    beq lbl_fn_800D089C_00001364
    lwz r0, 0xa0(r6)
    cmpwi r0, 0x0
    bne lbl_fn_800D089C_00001368
lbl_fn_800D089C_00001364:
    addi r3, r3, 0x1
lbl_fn_800D089C_00001368:
    lwz r0, 0x150(r6)
    cmpwi r0, 0x0
    beq lbl_fn_800D089C_000013B0
    lwz r0, 0x1e8(r6)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_800D089C_000013B0
    cmpwi r4, 0x0
    beq lbl_fn_800D089C_00001398
    lwz r0, 0x1f8(r6)
    cmplw r0, r4
    bne lbl_fn_800D089C_000013B0
lbl_fn_800D089C_00001398:
    cmpwi r5, 0x0
    beq lbl_fn_800D089C_000013AC
    lwz r0, 0x1ec(r6)
    cmpwi r0, 0x0
    bne lbl_fn_800D089C_000013B0
lbl_fn_800D089C_000013AC:
    addi r3, r3, 0x1
lbl_fn_800D089C_000013B0:
    addi r6, r6, 0x298
    addi r7, r7, 0x1
    bdnz lbl_fn_800D089C_00001320
    blr
}

asm void fn_800D0974(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r7, fn_800CB788@ha
    li r6, 0x0
    stw r0, 0x44(r1)
    addi r7, r7, fn_800CB788@l
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    lbz r0, lbl_8087EFEE
    stw r7, 0x18(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r6, 0x20(r1)
    bne lbl_fn_800D0974_00001428
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800D0974_00001428:
    lwz r4, 0x18(r1)
    addi r3, r1, 0x10
    lwz r0, 0x1c(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800D0974_00001474
    addic. r0, r1, 0x24
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_800D0974_0000146C
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_800D0974_0000146C:
    li r0, 0x1
    b lbl_fn_800D0974_00001478
lbl_fn_800D0974_00001474:
    li r0, 0x0
lbl_fn_800D0974_00001478:
    cmpwi r0, 0x0
    beq lbl_fn_800D0974_00001490
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x20(r1)
    b lbl_fn_800D0974_00001498
lbl_fn_800D0974_00001490:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D0974_00001498:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x20
    bl fn_800D0F34
    addic. r3, r1, 0x20
    beq lbl_fn_800D0974_000014E4
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800D0974_000014E4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800D0974_000014DC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800D0974_000014DC:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_800D0974_000014E4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800D0AB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r5, lbl_8087EE90
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800D0AB0_00001538
    lwz r0, 0x3498(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800D0AB0_00001540
lbl_fn_800D0AB0_00001538:
    li r3, 0x0
    b lbl_fn_800D0AB0_00001648
lbl_fn_800D0AB0_00001540:
    lwz r0, 0x349c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800D0AB0_00001564
    mr r3, r5
    bl fn_80049B2C
    cmpwi r3, 0x0
    beq lbl_fn_800D0AB0_00001564
    li r3, 0x0
    b lbl_fn_800D0AB0_00001648
lbl_fn_800D0AB0_00001564:
    lwz r28, 0x2a0c(r30)
    li r31, 0x0
lbl_fn_800D0AB0_0000156C:
    addi r3, r28, 0x1
    slwi r0, r3, 27
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 5
    add r28, r0, r3
    mulli r0, r28, 0x14c
    add r3, r30, r0
    addi r29, r3, 0x4
    mr r3, r29
    bl fn_800C8278
    cmpwi r3, 0x0
    beq lbl_fn_800D0AB0_000015AC
    stw r28, 0x2a0c(r30)
    mr r31, r29
    b lbl_fn_800D0AB0_000015B8
lbl_fn_800D0AB0_000015AC:
    lwz r0, 0x2a0c(r30)
    cmpw r28, r0
    bne lbl_fn_800D0AB0_0000156C
lbl_fn_800D0AB0_000015B8:
    cmpwi r31, 0x0
    beq lbl_fn_800D0AB0_00001644
    mr r3, r31
    li r4, 0x0
    li r5, -0x1
    li r6, 0x0
    bl fn_800CA1D4
    lwz r0, 0x34d0(r30)
    cmpwi r0, 0x0
    blt lbl_fn_800D0AB0_000015E8
    cmpwi r0, 0x20
    blt lbl_fn_800D0AB0_000015F0
lbl_fn_800D0AB0_000015E8:
    li r0, 0x0
    b lbl_fn_800D0AB0_000015FC
lbl_fn_800D0AB0_000015F0:
    mulli r0, r0, 0x18
    add r3, r30, r0
    addi r0, r3, 0x2b98
lbl_fn_800D0AB0_000015FC:
    stw r0, 0xac(r31)
    lwz r0, 0x34d4(r30)
    cmpwi r0, 0x0
    blt lbl_fn_800D0AB0_00001614
    cmpwi r0, 0x10
    blt lbl_fn_800D0AB0_0000161C
lbl_fn_800D0AB0_00001614:
    li r0, 0x0
    b lbl_fn_800D0AB0_00001628
lbl_fn_800D0AB0_0000161C:
    mulli r0, r0, 0x18
    add r3, r30, r0
    addi r0, r3, 0x3198
lbl_fn_800D0AB0_00001628:
    stw r0, 0xb0(r31)
    lwz r0, 0x34d8(r30)
    stw r0, 0xb4(r31)
    lwz r0, 0x34c8(r30)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0xe8(r31)
lbl_fn_800D0AB0_00001644:
    mr r3, r31
lbl_fn_800D0AB0_00001648:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D0C1C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    beq lbl_fn_800D0C1C_000016B0
    lwz r5, lbl_8087EE90
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800D0C1C_000016B8
lbl_fn_800D0C1C_000016B0:
    li r3, 0x0
    b lbl_fn_800D0C1C_000017D4
lbl_fn_800D0C1C_000016B8:
    lwz r0, 0x34c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800D0C1C_000017D0
    lfs f0, 0x34c4(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_800D0C1C_000016D8
    li r3, 0x0
    b lbl_fn_800D0C1C_000017D4
lbl_fn_800D0C1C_000016D8:
    lwz r28, 0x98(r4)
    cmpwi r28, 0x0
    beq lbl_fn_800D0C1C_000017D0
    addi r31, r3, 0x34e4
    b lbl_fn_800D0C1C_000017B8
lbl_fn_800D0C1C_000016EC:
    lwz r0, 0x80(r31)
    cmplw r0, r28
    bne lbl_fn_800D0C1C_000017B4
    lwz r3, 0x84(r31)
    lwz r0, 0x34c0(r29)
    cmpw r3, r0
    bgt lbl_fn_800D0C1C_000017B4
    lwz r3, 0x8c(r31)
    lwz r0, 0xa4(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_800D0C1C_00001788
    lfs f0, 0x88(r31)
    fcmpo cr0, f0, f31
    bge lbl_fn_800D0C1C_00001788
    li r0, 0x20
    addi r5, r29, 0x4
    li r4, 0x0
    mtctr r0
lbl_fn_800D0C1C_00001734:
    cmplw r3, r5
    bne lbl_fn_800D0C1C_0000175C
    mulli r0, r4, 0x14c
    add r3, r29, r0
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800D0C1C_00001768
    li r4, 0x0
    bl fn_80709AD0
    b lbl_fn_800D0C1C_00001768
lbl_fn_800D0C1C_0000175C:
    addi r5, r5, 0x14c
    addi r4, r4, 0x1
    bdnz lbl_fn_800D0C1C_00001734
lbl_fn_800D0C1C_00001768:
    stw r30, 0x8c(r31)
    li r0, 0x0
    li r3, 0x1
    lwz r4, 0x98(r30)
    stw r4, 0x80(r31)
    stw r0, 0x84(r31)
    stfs f31, 0x88(r31)
    b lbl_fn_800D0C1C_000017D4
lbl_fn_800D0C1C_00001788:
    cmpwi r3, 0x0
    beq lbl_fn_800D0C1C_000017B4
    bl fn_800C8278
    cmpwi r3, 0x0
    bne lbl_fn_800D0C1C_000017B4
    lwz r3, 0x8c(r31)
    lwz r0, 0x98(r3)
    cmplw r28, r0
    bne lbl_fn_800D0C1C_000017B4
    li r3, 0x0
    b lbl_fn_800D0C1C_000017D4
lbl_fn_800D0C1C_000017B4:
    addi r31, r31, 0x90
lbl_fn_800D0C1C_000017B8:
    lwz r0, 0x34e0(r29)
    mulli r0, r0, 0x90
    add r3, r29, r0
    addi r0, r3, 0x34e4
    cmplw r31, r0
    bne lbl_fn_800D0C1C_000016EC
lbl_fn_800D0C1C_000017D0:
    li r3, 0x1
lbl_fn_800D0C1C_000017D4:
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
