#include "revolution/types.h"
#include "revolution/os.h"

/* External functions not in revolution/os.h */
extern void OSRegisterVersion(const char*);
extern void fn_80610770(void);
extern void fn_806107C0(void);

/* External data symbols */
extern u8 lbl_807B0320[];

/* External SDA symbols */
extern u32 lbl_8087E860;
extern u32 lbl_80880038;
extern u32 lbl_80880048;
extern u32 lbl_8088004C;
extern u32 lbl_80880050;
extern u32 lbl_80880054;

/* Function declarations */
void fn_80610510(void);
void fn_80610520(void);
void fn_80610530(void);
void fn_80610550(void);
void fn_80610570(void);
void fn_80610630(void);

asm void fn_80610510(void)
{
    nofralloc
    lis r3, 0xcc00
    lhz r0, 0x5000(r3)
    extrwi r3, r0, 1, 16
    blr
}

asm void fn_80610520(void)
{
    nofralloc
    lis r3, 0xcc00
    lhz r0, 0x5004(r3)
    extrwi r3, r0, 1, 16
    blr
}

asm void fn_80610530(void)
{
    nofralloc
    lis r3, 0xcc00
    lhz r0, 0x5004(r3)
    lhz r3, 0x5006(r3)
    rlwimi r3, r0, 16, 0, 15
    blr
}

asm void fn_80610550(void)
{
    nofralloc
    lis r4, 0xcc00
    srwi r0, r3, 16
    sth r0, 0x5000(r4)
    sth r3, 0x5002(r4)
    blr
}

asm void fn_80610570(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807B0320@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807B0320@l
    addi r3, r5, 0x48
    stw r31, 0xc(r1)
    addi r4, r5, 0x68
    addi r5, r5, 0x74
    crclr 6
    bl fn_80610770
    lwz r0, lbl_80880038
    cmpwi r0, 0x1
    beq lbl_fn_80610570_0000010C
    lwz r3, lbl_8087E860
    bl OSRegisterVersion
    bl OSDisableInterrupts
    lis r4, fn_806107C0@ha
    mr r31, r3
    addi r4, r4, fn_806107C0@l
    li r3, 0x7
    bl __OSSetInterruptHandler
    lis r3, 0x100
    bl __OSUnmaskInterrupts
    lis r7, 0xcc00
    li r3, -0xa9
    lhz r6, 0x500a(r7)
    li r5, -0xad
    li r4, 0x0
    li r0, 0x1
    and r3, r6, r3
    ori r3, r3, 0x800
    sth r3, 0x500a(r7)
    mr r3, r31
    lhz r6, 0x500a(r7)
    and r5, r6, r5
    sth r5, 0x500a(r7)
    stw r4, lbl_80880048
    stw r4, lbl_80880054
    stw r4, lbl_8088004C
    stw r4, lbl_80880050
    stw r0, lbl_80880038
    bl OSRestoreInterrupts
lbl_fn_80610570_0000010C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80610630(void)
{
    nofralloc
    lwz r3, lbl_80880038
    blr
}
