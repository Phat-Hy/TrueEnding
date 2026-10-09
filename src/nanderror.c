#include "revolution/types.h"

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSFatal(void);
extern void OSRestoreInterrupts(void);
extern void OSSetFontEncode(void);
extern void SCGetLanguage(void);
extern void fn_80625040(void);

/* External data declarations */
extern u8 lbl_80764A70[];
extern u8 lbl_80764AA8[];

/* Small data declarations */
extern u32 NANDErrorFunc_80880130;
extern u32 lbl_80888830;

/* Function declarations */
void __NANDShowErrorMessage(void);
void NANDSetAutoErrorMessaging(void);
void __NANDPrintErrorMessage(void);

asm void __NANDShowErrorMessage(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    stw r31, 0x31c(r1)
    mr r31, r3
    stw r30, 0x318(r1)
    li r30, 0x0
    stw r29, 0x314(r1)
    lwz r29, lbl_80888830
    bl SCGetLanguage
    clrlwi. r0, r3, 24
    bne lbl___NANDShowErrorMessage_0000003C
    li r3, 0x1
    bl OSSetFontEncode
    b lbl___NANDShowErrorMessage_00000044
lbl___NANDShowErrorMessage_0000003C:
    li r3, 0x0
    bl OSSetFontEncode
lbl___NANDShowErrorMessage_00000044:
    bl fn_80625040
    extsb r3, r3
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    ble lbl___NANDShowErrorMessage_00000190
    cmpwi r3, 0x2
    beq lbl___NANDShowErrorMessage_000000F8
    lis r3, lbl_80764AA8@ha
    li r0, 0x1f
    addi r3, r3, lbl_80764AA8@l
    addi r5, r1, 0x204
    subi r4, r3, 0x4
    li r6, 0x0
    mtctr r0
    nop
lbl___NANDShowErrorMessage_00000080:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl___NANDShowErrorMessage_00000080
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    b lbl___NANDShowErrorMessage_000000E0
lbl___NANDShowErrorMessage_000000A0:
    clrlwi r0, r6, 24
    addi r3, r1, 0x208
    mulli r4, r0, 0xc
    add r3, r3, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl___NANDShowErrorMessage_000000DC
    lwz r0, 0x0(r3)
    cmpw r31, r0
    bne lbl___NANDShowErrorMessage_000000D4
    addi r3, r1, 0x210
    lwzx r31, r3, r4
    b lbl___NANDShowErrorMessage_00000224
lbl___NANDShowErrorMessage_000000D4:
    addi r6, r6, 0x1
    b lbl___NANDShowErrorMessage_000000E0
lbl___NANDShowErrorMessage_000000DC:
    addi r6, r6, 0x7
lbl___NANDShowErrorMessage_000000E0:
    clrlwi r0, r6, 24
    cmplwi r0, 0x15
    blt lbl___NANDShowErrorMessage_000000A0
    lis r31, lbl_80764A70@ha
    addi r31, r31, lbl_80764A70@l
    b lbl___NANDShowErrorMessage_00000224
lbl___NANDShowErrorMessage_000000F8:
    lis r3, lbl_80764AA8@ha
    li r0, 0x1f
    addi r3, r3, lbl_80764AA8@l
    addi r5, r1, 0x108
    subi r4, r3, 0x4
    li r6, 0x0
    mtctr r0
    nop
lbl___NANDShowErrorMessage_00000118:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl___NANDShowErrorMessage_00000118
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    b lbl___NANDShowErrorMessage_00000178
lbl___NANDShowErrorMessage_00000138:
    clrlwi r0, r6, 24
    addi r3, r1, 0x10c
    mulli r4, r0, 0xc
    add r3, r3, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl___NANDShowErrorMessage_00000174
    lwz r0, 0x0(r3)
    cmpw r31, r0
    bne lbl___NANDShowErrorMessage_0000016C
    addi r3, r1, 0x114
    lwzx r31, r3, r4
    b lbl___NANDShowErrorMessage_00000224
lbl___NANDShowErrorMessage_0000016C:
    addi r6, r6, 0x1
    b lbl___NANDShowErrorMessage_00000178
lbl___NANDShowErrorMessage_00000174:
    addi r6, r6, 0x7
lbl___NANDShowErrorMessage_00000178:
    clrlwi r0, r6, 24
    cmplwi r0, 0x15
    blt lbl___NANDShowErrorMessage_00000138
    lis r31, lbl_80764A70@ha
    addi r31, r31, lbl_80764A70@l
    b lbl___NANDShowErrorMessage_00000224
lbl___NANDShowErrorMessage_00000190:
    lis r3, lbl_80764AA8@ha
    li r0, 0x1f
    addi r3, r3, lbl_80764AA8@l
    addi r5, r1, 0xc
    subi r4, r3, 0x4
    li r6, 0x0
    mtctr r0
    nop
lbl___NANDShowErrorMessage_000001B0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl___NANDShowErrorMessage_000001B0
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    b lbl___NANDShowErrorMessage_00000210
lbl___NANDShowErrorMessage_000001D0:
    clrlwi r0, r6, 24
    addi r3, r1, 0x10
    mulli r4, r0, 0xc
    add r3, r3, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    bne lbl___NANDShowErrorMessage_0000020C
    lwz r0, 0x0(r3)
    cmpw r31, r0
    bne lbl___NANDShowErrorMessage_00000204
    addi r3, r1, 0x18
    lwzx r31, r3, r4
    b lbl___NANDShowErrorMessage_00000224
lbl___NANDShowErrorMessage_00000204:
    addi r6, r6, 0x1
    b lbl___NANDShowErrorMessage_00000210
lbl___NANDShowErrorMessage_0000020C:
    addi r6, r6, 0x7
lbl___NANDShowErrorMessage_00000210:
    clrlwi r0, r6, 24
    cmplwi r0, 0x15
    blt lbl___NANDShowErrorMessage_000001D0
    lis r31, lbl_80764A70@ha
    addi r31, r31, lbl_80764A70@l
lbl___NANDShowErrorMessage_00000224:
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmplwi r0, 0x6
    ble lbl___NANDShowErrorMessage_0000023C
    lwz r5, 0x4(r31)
    b lbl___NANDShowErrorMessage_00000248
lbl___NANDShowErrorMessage_0000023C:
    bl SCGetLanguage
    clrlslwi r0, r3, 24, 2
    lwzx r5, r31, r0
lbl___NANDShowErrorMessage_00000248:
    stw r30, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r29, 0xc(r1)
    bl OSFatal
    lwz r0, 0x324(r1)
    lwz r31, 0x31c(r1)
    lwz r30, 0x318(r1)
    lwz r29, 0x314(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}

asm void NANDSetAutoErrorMessaging(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r5, NANDErrorFunc_80880130
    cmpwi r31, 0x0
    li r4, 0x0
    neg r0, r5
    or r0, r0, r5
    srwi r31, r0, 31
    beq lbl_NANDSetAutoErrorMessaging_000002BC
    lis r4, __NANDShowErrorMessage@ha
    addi r4, r4, __NANDShowErrorMessage@l
lbl_NANDSetAutoErrorMessaging_000002BC:
    stw r4, NANDErrorFunc_80880130
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void __NANDPrintErrorMessage(void)
{
    nofralloc
    lwz r12, NANDErrorFunc_80880130
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}
