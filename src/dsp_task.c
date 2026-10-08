#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void fn_805EAA00(void);
extern void fn_80610510(void);
extern void fn_80610520(void);
extern void fn_80610530(void);
extern void fn_80610550(void);
extern void fn_80612B10(void);
extern void fn_80613CC0(void);
extern void fn_806142F0(void);
extern void fn_806143D0(void);
extern void fn_80616400(void);
extern void fn_80616430(void);

/* External data symbols */
extern u8 lbl_807B03A0[];

/* External SDA symbols */
extern u32 __GXData;
extern u32 __cpReg;
extern u32 __memReg;
extern u32 lbl_80880040;
extern u32 lbl_80880044;
extern u32 lbl_8088004C;
extern u32 lbl_80880050;
extern u32 lbl_80880054;
extern u32 lbl_80880068;
extern u32 lbl_80880070;
extern u32 lbl_80880074;
extern u32 lbl_80880078;

/* Function declarations */
void fn_80610640(void);
void fn_806106B0(void);
void fn_80610770(void);
void fn_806107C0(void);
void fn_80610BF0(void);
void fn_80610DA0(void);
void fn_80610F30(void);
void fn_80610FD0(void);
void fn_80611060(void);
void fn_80611150(void);
void fn_80611180(void);

asm void fn_80610640(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    mr r31, r3
    mr r3, r30
    bl fn_80610F30
    li r0, 0x0
    stw r0, 0x0(r30)
    li r0, 0x1
    mr r3, r31
    stw r0, 0x8(r30)
    bl OSRestoreInterrupts
    lwz r0, lbl_80880050
    cmplw r30, r0
    bne lbl_fn_80610640_00000054
    mr r3, r30
    bl fn_80610DA0
lbl_fn_80610640_00000054:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806106B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r5, lbl_80880054
    mr r31, r3
    cmplw r5, r30
    bne lbl_fn_806106B0_000000B4
    li r0, 0x1
    stw r30, lbl_80880044
    stw r0, lbl_80880040
    bl OSRestoreInterrupts
    mr r3, r30
    b lbl_fn_806106B0_00000114
lbl_fn_806106B0_000000B4:
    lwz r4, 0x4(r30)
    lwz r0, 0x4(r5)
    cmplw r4, r0
    bge lbl_fn_806106B0_0000010C
    li r0, 0x1
    stw r30, lbl_80880044
    stw r0, lbl_80880040
    lwz r0, 0x0(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806106B0_000000FC
    bl OSDisableInterrupts
    lis r5, 0xcc00
    li r0, -0xa9
    lhz r4, 0x500a(r5)
    and r0, r4, r0
    ori r0, r0, 0x2
    sth r0, 0x500a(r5)
    bl OSRestoreInterrupts
lbl_fn_806106B0_000000FC:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    b lbl_fn_806106B0_00000114
lbl_fn_806106B0_0000010C:
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_fn_806106B0_00000114:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80610770(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    bne cr1, lbl_fn_80610770_00000158
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80610770_00000158:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    addi r1, r1, 0x70
    blr
}

asm void fn_806107C0(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    lis r6, 0xcc00
    stw r0, 0x2e4(r1)
    li r0, -0x29
    addi r3, r1, 0x8
    stw r31, 0x2dc(r1)
    mr r31, r4
    lhz r5, 0x500a(r6)
    and r0, r5, r0
    ori r0, r0, 0x80
    sth r0, 0x500a(r6)
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
lbl_fn_806107C0_000001BC:
    bl fn_80610520
    cmpwi r3, 0x0
    beq lbl_fn_806107C0_000001BC
    bl fn_80610530
    lwz r4, lbl_80880054
    lwz r0, 0x8(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_806107C0_000001F0
    addis r0, r3, 0x232f
    cmplwi r0, 0x2
    bne lbl_fn_806107C0_000001F0
    lis r3, 0xdcd1
    addi r3, r3, 0x3
lbl_fn_806107C0_000001F0:
    addis r0, r3, 0x232f
    cmplwi r0, 0x0
    beq lbl_fn_806107C0_00000220
    cmplwi r0, 0x1
    beq lbl_fn_806107C0_00000244
    cmplwi r0, 0x2
    beq lbl_fn_806107C0_00000268
    cmplwi r0, 0x3
    beq lbl_fn_806107C0_000003D0
    cmplwi r0, 0x4
    beq lbl_fn_806107C0_00000570
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_00000220:
    li r0, 0x1
    stw r0, 0x0(r4)
    lwz r3, lbl_80880054
    lwz r12, 0x28(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806107C0_00000588
    mtctr r12
    bctrl
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_00000244:
    li r0, 0x1
    stw r0, 0x0(r4)
    lwz r3, lbl_80880054
    lwz r12, 0x2c(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806107C0_00000588
    mtctr r12
    bctrl
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_00000268:
    lwz r0, lbl_80880040
    cmpwi r0, 0x0
    beq lbl_fn_806107C0_00000308
    lwz r0, lbl_80880044
    cmplw r4, r0
    bne lbl_fn_806107C0_000002C0
    lis r3, 0xcdd1
    addi r3, r3, 0x3
    bl fn_80610550
lbl_fn_806107C0_0000028C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_806107C0_0000028C
    li r0, 0x0
    stw r0, lbl_80880044
    lwz r3, lbl_80880054
    stw r0, lbl_80880040
    lwz r12, 0x2c(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806107C0_00000588
    mtctr r12
    bctrl
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_000002C0:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl fn_80610550
lbl_fn_806107C0_000002CC:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_806107C0_000002CC
    lwz r3, lbl_80880054
    lwz r4, lbl_80880044
    bl fn_80610BF0
    lwz r3, lbl_80880054
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x0(r3)
    lwz r3, lbl_80880044
    stw r3, lbl_80880054
    stw r0, lbl_80880044
    stw r0, lbl_80880040
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_00000308:
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806107C0_00000390
    lwz r0, lbl_80880050
    cmplw r4, r0
    bne lbl_fn_806107C0_00000354
    lis r3, 0xcdd1
    addi r3, r3, 0x3
    bl fn_80610550
lbl_fn_806107C0_0000032C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_806107C0_0000032C
    lwz r3, lbl_80880054
    lwz r12, 0x2c(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806107C0_00000588
    mtctr r12
    bctrl
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_00000354:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl fn_80610550
lbl_fn_806107C0_00000360:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_806107C0_00000360
    lwz r3, lbl_80880054
    lwz r4, lbl_80880050
    bl fn_80610BF0
    lwz r3, lbl_80880054
    li r0, 0x2
    stw r0, 0x0(r3)
    lwz r0, lbl_80880050
    stw r0, lbl_80880054
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_00000390:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl fn_80610550
lbl_fn_806107C0_0000039C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_806107C0_0000039C
    lwz r3, lbl_80880054
    lwz r4, 0x38(r3)
    bl fn_80610BF0
    lwz r3, lbl_80880054
    li r0, 0x2
    stw r0, 0x0(r3)
    lwz r3, lbl_80880054
    lwz r0, 0x38(r3)
    stw r0, lbl_80880054
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_000003D0:
    lwz r0, lbl_80880040
    cmpwi r0, 0x0
    beq lbl_fn_806107C0_00000450
    lwz r0, lbl_80880044
    cmplw r4, r0
    beq lbl_fn_806107C0_00000444
    lwz r12, 0x30(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806107C0_00000400
    mr r3, r4
    mtctr r12
    bctrl
lbl_fn_806107C0_00000400:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl fn_80610550
lbl_fn_806107C0_0000040C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_806107C0_0000040C
    lwz r4, lbl_80880044
    li r3, 0x0
    bl fn_80610BF0
    lwz r3, lbl_80880054
    bl fn_80610FD0
    lwz r3, lbl_80880044
    li r0, 0x0
    stw r3, lbl_80880054
    stw r0, lbl_80880044
    stw r0, lbl_80880040
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_00000444:
    li r0, 0x0
    stw r0, lbl_80880044
    stw r0, lbl_80880040
lbl_fn_806107C0_00000450:
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806107C0_0000050C
    lwz r0, lbl_80880050
    cmplw r4, r0
    bne lbl_fn_806107C0_000004B0
    lwz r12, 0x30(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806107C0_00000480
    mr r3, r4
    mtctr r12
    bctrl
lbl_fn_806107C0_00000480:
    lis r3, 0xcdd1
    addi r3, r3, 0x2
    bl fn_80610550
lbl_fn_806107C0_0000048C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_806107C0_0000048C
    lwz r3, lbl_80880054
    li r0, 0x3
    stw r0, 0x0(r3)
    lwz r3, lbl_80880054
    bl fn_80610FD0
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_000004B0:
    lwz r12, 0x30(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806107C0_000004C8
    mr r3, r4
    mtctr r12
    bctrl
lbl_fn_806107C0_000004C8:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl fn_80610550
lbl_fn_806107C0_000004D4:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_806107C0_000004D4
    lwz r4, lbl_80880054
    li r0, 0x3
    li r3, 0x0
    stw r0, 0x0(r4)
    lwz r4, lbl_80880050
    bl fn_80610BF0
    lwz r0, lbl_80880050
    stw r0, lbl_80880054
    lwz r3, lbl_8088004C
    bl fn_80610FD0
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_0000050C:
    lwz r12, 0x30(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806107C0_00000524
    mr r3, r4
    mtctr r12
    bctrl
lbl_fn_806107C0_00000524:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl fn_80610550
lbl_fn_806107C0_00000530:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_806107C0_00000530
    lwz r4, lbl_80880054
    li r0, 0x3
    li r3, 0x0
    stw r0, 0x0(r4)
    lwz r4, lbl_80880054
    lwz r4, 0x38(r4)
    bl fn_80610BF0
    lwz r3, lbl_80880054
    lwz r3, 0x38(r3)
    stw r3, lbl_80880054
    lwz r3, 0x3c(r3)
    bl fn_80610FD0
    b lbl_fn_806107C0_00000588
lbl_fn_806107C0_00000570:
    lwz r12, 0x34(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806107C0_00000588
    mr r3, r4
    mtctr r12
    bctrl
lbl_fn_806107C0_00000588:
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r31
    bl OSSetCurrentContext
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_80610BF0(void)
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
    beq lbl_fn_80610BF0_00000614
    lwz r3, 0x18(r3)
    bl fn_80610550
lbl_fn_80610BF0_000005DC:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_000005DC
    lwz r3, 0x1c(r30)
    bl fn_80610550
lbl_fn_80610BF0_000005F0:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_000005F0
    lwz r3, 0x20(r30)
    bl fn_80610550
lbl_fn_80610BF0_00000604:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_00000604
    b lbl_fn_80610BF0_00000650
lbl_fn_80610BF0_00000614:
    li r3, 0x0
    bl fn_80610550
lbl_fn_80610BF0_0000061C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_0000061C
    li r3, 0x0
    bl fn_80610550
lbl_fn_80610BF0_00000630:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_00000630
    li r3, 0x0
    bl fn_80610550
lbl_fn_80610BF0_00000644:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_00000644
lbl_fn_80610BF0_00000650:
    lwz r3, 0xc(r31)
    bl fn_80610550
lbl_fn_80610BF0_00000658:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_00000658
    lwz r3, 0x10(r31)
    bl fn_80610550
lbl_fn_80610BF0_0000066C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_0000066C
    lwz r3, 0x14(r31)
    bl fn_80610550
lbl_fn_80610BF0_00000680:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_00000680
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80610BF0_000006EC
    lhz r3, 0x24(r31)
    bl fn_80610550
lbl_fn_80610BF0_000006A0:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_000006A0
    li r3, 0x0
    bl fn_80610550
lbl_fn_80610BF0_000006B4:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_000006B4
    li r3, 0x0
    bl fn_80610550
lbl_fn_80610BF0_000006C8:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_000006C8
    li r3, 0x0
    bl fn_80610550
lbl_fn_80610BF0_000006DC:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_000006DC
    b lbl_fn_80610BF0_0000073C
lbl_fn_80610BF0_000006EC:
    lhz r3, 0x26(r31)
    bl fn_80610550
lbl_fn_80610BF0_000006F4:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_000006F4
    lwz r3, 0x18(r31)
    bl fn_80610550
lbl_fn_80610BF0_00000708:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_00000708
    lwz r3, 0x1c(r31)
    bl fn_80610550
lbl_fn_80610BF0_0000071C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_0000071C
    lwz r3, 0x20(r31)
    bl fn_80610550
lbl_fn_80610BF0_00000730:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610BF0_00000730
lbl_fn_80610BF0_0000073C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80610DA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807B03A0@ha
    addi r31, r31, lbl_807B03A0@l
    stw r30, 0x18(r1)
    mr r30, r3
lbl_fn_80610DA0_00000780:
    bl fn_80610520
    cmpwi r3, 0x0
    beq lbl_fn_80610DA0_00000780
    bl fn_80610530
    stw r3, 0x8(r1)
    lis r3, 0x80f4
    subi r3, r3, 0x5fff
    bl fn_80610550
lbl_fn_80610DA0_000007A0:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_000007A0
    lwz r3, 0xc(r30)
    bl fn_80610550
lbl_fn_80610DA0_000007B4:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_000007B4
    lis r3, 0x80f4
    subi r3, r3, 0x3ffe
    bl fn_80610550
lbl_fn_80610DA0_000007CC:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_000007CC
    lwz r0, 0x14(r30)
    clrlwi r3, r0, 16
    bl fn_80610550
lbl_fn_80610DA0_000007E4:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_000007E4
    lis r3, 0x80f4
    subi r3, r3, 0x5ffe
    bl fn_80610550
lbl_fn_80610DA0_000007FC:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_000007FC
    lwz r3, 0x10(r30)
    bl fn_80610550
lbl_fn_80610DA0_00000810:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_00000810
    lis r3, 0x80f4
    subi r3, r3, 0x4ffe
    bl fn_80610550
lbl_fn_80610DA0_00000828:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_00000828
    li r3, 0x0
    bl fn_80610550
lbl_fn_80610DA0_0000083C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_0000083C
    lis r3, 0x80f4
    subi r3, r3, 0x2fff
    bl fn_80610550
lbl_fn_80610DA0_00000854:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_00000854
    lhz r3, 0x24(r30)
    bl fn_80610550
lbl_fn_80610DA0_00000868:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80610DA0_00000868
    mr r4, r30
    addi r3, r31, 0x0
    crclr 6
    bl fn_80610770
    lwz r4, 0xc(r30)
    addi r3, r31, 0x20
    crclr 6
    bl fn_80610770
    lwz r4, 0x14(r30)
    addi r3, r31, 0x50
    crclr 6
    bl fn_80610770
    lwz r4, 0x10(r30)
    addi r3, r31, 0x80
    crclr 6
    bl fn_80610770
    lwz r4, 0x1c(r30)
    addi r3, r31, 0xb0
    crclr 6
    bl fn_80610770
    lhz r4, 0x24(r30)
    addi r3, r31, 0xe0
    crclr 6
    bl fn_80610770
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80610F30(void)
{
    nofralloc
    lwz r5, lbl_80880050
    cmpwi r5, 0x0
    bne lbl_fn_80610F30_00000960
    stw r3, lbl_80880054
    li r0, 0x0
    stw r3, lbl_8088004C
    stw r3, lbl_80880050
    stw r0, 0x3c(r3)
    stw r0, 0x38(r3)
    blr
    b lbl_fn_80610F30_00000960
    nop
lbl_fn_80610F30_00000920:
    lwz r4, 0x4(r3)
    lwz r0, 0x4(r5)
    cmplw r4, r0
    bge lbl_fn_80610F30_0000095C
    lwz r0, 0x3c(r5)
    stw r0, 0x3c(r3)
    stw r3, 0x3c(r5)
    lwz r4, 0x3c(r3)
    stw r5, 0x38(r3)
    cmpwi r4, 0x0
    bne lbl_fn_80610F30_00000954
    stw r3, lbl_80880050
    b lbl_fn_80610F30_00000968
lbl_fn_80610F30_00000954:
    stw r3, 0x38(r4)
    b lbl_fn_80610F30_00000968
lbl_fn_80610F30_0000095C:
    lwz r5, 0x38(r5)
lbl_fn_80610F30_00000960:
    cmpwi r5, 0x0
    bne lbl_fn_80610F30_00000920
lbl_fn_80610F30_00000968:
    cmpwi r5, 0x0
    bnelr
    lwz r4, lbl_8088004C
    li r0, 0x0
    stw r3, 0x38(r4)
    stw r0, 0x38(r3)
    lwz r0, lbl_8088004C
    stw r0, 0x3c(r3)
    stw r3, lbl_8088004C
    blr
}

asm void fn_80610FD0(void)
{
    nofralloc
    li r4, 0x0
    stw r4, 0x8(r3)
    li r0, 0x3
    stw r0, 0x0(r3)
    lwz r0, lbl_80880050
    cmplw r0, r3
    bne lbl_fn_80610FD0_000009D4
    lwz r3, 0x38(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80610FD0_000009C4
    stw r3, lbl_80880050
    stw r4, 0x3c(r3)
    blr
lbl_fn_80610FD0_000009C4:
    stw r4, lbl_80880054
    stw r4, lbl_8088004C
    stw r4, lbl_80880050
    blr
lbl_fn_80610FD0_000009D4:
    lwz r0, lbl_8088004C
    cmplw r0, r3
    bne lbl_fn_80610FD0_000009F8
    lwz r3, 0x3c(r3)
    stw r3, lbl_8088004C
    stw r4, 0x38(r3)
    lwz r0, lbl_80880050
    stw r0, lbl_80880054
    blr
lbl_fn_80610FD0_000009F8:
    lwz r0, 0x38(r3)
    stw r0, lbl_80880054
    lwz r4, 0x3c(r3)
    stw r0, 0x38(r4)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x3c(r4)
    blr
}

asm void fn_80611060(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80616400
    mr r31, r3
    mr r3, r29
    bl fn_80616430
    subi r0, r31, 0x8
    slwi r4, r30, 29
    srwi r5, r30, 31
    subf r4, r5, r4
    cmplwi r0, 0x2
    rotlwi r0, r4, 3
    add r30, r0, r5
    ble lbl_fn_80611060_00000AA8
    cmpwi r31, 0x6
    bne lbl_fn_80611060_00000ABC
    clrlwi. r0, r3, 24
    beq lbl_fn_80611060_00000A94
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x358
    b lbl_fn_80611060_00000AE8
lbl_fn_80611060_00000A94:
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x2d8
    b lbl_fn_80611060_00000AE8
lbl_fn_80611060_00000AA8:
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x258
    b lbl_fn_80611060_00000AE8
lbl_fn_80611060_00000ABC:
    clrlwi. r0, r3, 24
    beq lbl_fn_80611060_00000AD8
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x2d8
    b lbl_fn_80611060_00000AE8
lbl_fn_80611060_00000AD8:
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x258
lbl_fn_80611060_00000AE8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80611150(void)
{
    nofralloc
    cmplwi r3, 0x14
    blt lbl_fn_80611150_00000B20
    li r3, 0x0
    blr
lbl_fn_80611150_00000B20:
    lwz r4, __GXData
    slwi r0, r3, 4
    add r3, r4, r0
    addi r3, r3, 0x3d8
    blr
}

asm void fn_80611180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bne lbl_fn_80611180_00000C30
    lwz r0, lbl_80880078
    cmpwi r0, 0x0
    bne lbl_fn_80611180_00000BAC
    lwz r5, __memReg
    lhz r4, 0x4e(r5)
    nop
lbl_fn_80611180_00000B70:
    mr r0, r4
    lhz r3, 0x50(r5)
    lhz r4, 0x4e(r5)
    cmplw r4, r0
    bne lbl_fn_80611180_00000B70
    slwi r0, r4, 16
    or r0, r0, r3
    stw r0, lbl_80880068
    bl OSGetTime
    stw r3, lbl_80880070
    li r0, 0x1
    li r3, 0x0
    stw r4, lbl_80880074
    stw r0, lbl_80880078
    b lbl_fn_80611180_00000C9C
lbl_fn_80611180_00000BAC:
    bl OSGetTime
    lwz r5, __memReg
    lhz r7, 0x4e(r5)
lbl_fn_80611180_00000BB8:
    mr r0, r7
    lhz r10, 0x50(r5)
    lhz r7, 0x4e(r5)
    cmplw r7, r0
    bne lbl_fn_80611180_00000BB8
    lwz r5, lbl_80880074
    li r0, 0x0
    lwz r6, lbl_80880070
    slwi r9, r7, 16
    subfc r8, r5, r4
    li r5, 0xa
    subfe r7, r6, r3
    xoris r6, r0, 0x8000
    subfc r5, r5, r8
    xoris r0, r7, 0x8000
    subfe r6, r6, r0
    or r5, r9, r10
    subfe r6, r0, r0
    neg. r6, r6
    beq lbl_fn_80611180_00000C10
    li r3, 0x0
    b lbl_fn_80611180_00000C9C
lbl_fn_80611180_00000C10:
    lwz r0, lbl_80880068
    cmplw r5, r0
    beq lbl_fn_80611180_00000C98
    stw r3, lbl_80880070
    li r3, 0x0
    stw r5, lbl_80880068
    stw r4, lbl_80880074
    b lbl_fn_80611180_00000C9C
lbl_fn_80611180_00000C30:
    li r3, 0x0
    bl fn_80612B10
    li r3, 0x0
    bl fn_806142F0
    li r3, 0x0
    bl fn_806143D0
    lis r3, 0xcc01
    li r31, 0x0
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    bl fn_805EAA00
    lwz r4, __cpReg
    li r5, 0x3
    lwz r3, __GXData
    li r0, 0x1
    sth r31, 0x2(r4)
    lwz r4, __cpReg
    sth r5, 0x4(r4)
    stb r0, 0x5fa(r3)
    bl fn_80613CC0
lbl_fn_80611180_00000C98:
    li r3, 0x1
lbl_fn_80611180_00000C9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
