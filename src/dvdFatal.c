#include "revolution/types.h"
#include "revolution/os.h"

/* External symbols */
extern u32 lbl_80888590;
extern u32 SCGetLanguage(void);
extern void OSSetFontEncode(u32);
extern s32 fn_80625040(void);
extern u8 lbl_807647A8[];
extern u8 lbl_807647C4[];
extern u8 lbl_8087E7E8[8];
extern void OSFatal(void*, void*, void*);
extern void (*FatalFunc_8087FDA8)(void);
extern u32 lowIntType_8087FDB0;
extern u32 lowDone_8087E7F0;

/* Functions */
void __DVDShowFatalMessage(void);
BOOL DVDSetAutoFatalMessaging(BOOL enable);
BOOL fn_806003B0(void);
void fn_806003D0(void);
void lowCallback_806003F0(u32 intType);

asm void __DVDShowFatalMessage(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0
    stw r30, 0x18(r1)
    lwz r30, lbl_80888590
    stw r29, 0x14(r1)
    bl SCGetLanguage
    clrlwi. r0, r3, 24
    bne lbl_1
    li r3, 1
    bl OSSetFontEncode
    b lbl_2
lbl_1:
    li r3, 0
    bl OSSetFontEncode
lbl_2:
    bl fn_80625040
    extsb r3, r3
    subi r0, r3, 4
    cmplwi r0, 1
    ble lbl_3
    cmpwi r3, 2
    beq lbl_4
    lis r29, lbl_807647A8@ha
    addi r29, r29, lbl_807647A8@l
    b lbl_5
lbl_4:
    lis r29, lbl_807647C4@ha
    addi r29, r29, lbl_807647C4@l
    b lbl_5
lbl_3:
    la r29, lbl_8087E7E8
lbl_5:
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmplwi r0, 6
    ble lbl_6
    lwz r5, 4(r29)
    b lbl_7
lbl_6:
    bl SCGetLanguage
    clrlslwi r0, r3, 24, 2
    lwzx r5, r29, r0
lbl_7:
    stw r31, 8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 8
    stw r30, 0xc(r1)
    bl OSFatal
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm BOOL DVDSetAutoFatalMessaging(BOOL enable)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r5, FatalFunc_8087FDA8
    cmpwi r31, 0
    li r4, 0
    neg r0, r5
    or r0, r0, r5
    srwi r31, r0, 31
    beq lbl_store
    lis r4, __DVDShowFatalMessage@ha
    addi r4, r4, __DVDShowFatalMessage@l
lbl_store:
    stw r4, FatalFunc_8087FDA8
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm BOOL fn_806003B0(void)
{
    nofralloc
    lwz r3, FatalFunc_8087FDA8
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_806003D0(void)
{
    nofralloc
    lwz r12, FatalFunc_8087FDA8
    cmpwi r12, 0
    beqlr
    mtctr r12
    bctr
    blr
}

asm void lowCallback_806003F0(u32 intType)
{
    nofralloc
    stw r3, lowIntType_8087FDB0
    li r0, 1
    stw r0, lowDone_8087E7F0
    blr
}
