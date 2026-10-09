#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void EXIDeselect(void);
extern void EXIImm(void);
extern void EXILock(void);
extern void EXISelect(void);
extern void EXISync(void);
extern void EXIUnlock(void);
extern void OSDisableInterrupts(void);
extern void OSGetConsoleType(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_805E96D0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_80619A00(void);
extern void fn_80619AB0(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_808800C0;
extern u32 lbl_808800C4;
extern u32 lbl_808800C8;
extern u32 lbl_808800CC;
extern u32 lbl_808884E8;
extern u32 lbl_80888800;

/* Function declarations */
void fn_8061A010(void);
void fn_8061A0D0(void);
void fn_8061A0E0(void);
void fn_8061A0F0(void);
void fn_8061A100(void);
void fn_8061A110(void);
void fn_8061A130(void);
void fn_8061A150(void);
void fn_8061A1C0(void);
void fn_8061A230(void);
void fn_8061A250(void);
void fn_8061A350(void);
void fn_8061A3A0(void);

asm void fn_8061A010(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x38(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_8061A010_00000030
    addi r3, r3, 0x20
    bl fn_805F3130
lbl_fn_8061A010_00000030:
    cmpwi r31, 0x0
    lwz r3, 0x44(r30)
    beq lbl_fn_8061A010_00000058
    b lbl_fn_8061A010_00000050
lbl_fn_8061A010_00000040:
    lwz r0, 0x0(r3)
    cmplw r0, r31
    beq lbl_fn_8061A010_00000058
    lwz r3, 0xc(r3)
lbl_fn_8061A010_00000050:
    cmpwi r3, 0x0
    bne lbl_fn_8061A010_00000040
lbl_fn_8061A010_00000058:
    cmpwi r3, 0x0
    bne lbl_fn_8061A010_00000068
    li r31, 0x0
    b lbl_fn_8061A010_00000084
lbl_fn_8061A010_00000068:
    lwz r0, 0x4(r3)
    li r31, 0x1
    stw r0, 0x3c(r30)
    lwz r0, 0x8(r3)
    stw r0, 0x40(r30)
    lwz r0, 0xc(r3)
    stw r0, 0x44(r30)
lbl_fn_8061A010_00000084:
    lwz r0, 0x38(r30)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_8061A010_00000098
    addi r3, r30, 0x20
    bl fn_805F3210
lbl_fn_8061A010_00000098:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8061A0D0(void)
{
    nofralloc
    mr r5, r3
    lwz r3, 0x4(r3)
    lwz r5, 0x8(r5)
    b fn_80619A00
}

asm void fn_8061A0E0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80619AB0
}

asm void fn_8061A0F0(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r12, 0x0(r5)
    mtctr r12
    bctr
}

asm void fn_8061A100(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r12, 0x4(r5)
    mtctr r12
    bctr
}

asm void fn_8061A110(void)
{
    nofralloc
    la r6, lbl_80888800
    li r0, 0x0
    stw r6, 0x0(r3)
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8061A130(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    sth r0, 0x8(r3)
    sth r4, 0xa(r3)
    blr
}

asm void fn_8061A150(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8061A150_00000178
    lhz r5, 0xa(r3)
    li r0, 0x0
    add r5, r4, r5
    stw r0, 0x4(r5)
    stw r0, 0x0(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x0(r3)
    addi r0, r5, 0x1
    stw r4, 0x4(r3)
    sth r0, 0x8(r3)
    blr
lbl_fn_8061A150_00000178:
    lhz r6, 0xa(r3)
    li r0, 0x0
    lwz r5, 0x4(r3)
    stwux r5, r6, r4
    stw r0, 0x4(r6)
    lwz r5, 0x4(r3)
    lhz r0, 0xa(r3)
    add r5, r5, r0
    stw r4, 0x4(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x4(r3)
    addi r0, r5, 0x1
    sth r0, 0x8(r3)
    blr
}

asm void fn_8061A1C0(void)
{
    nofralloc
    lhz r0, 0xa(r3)
    add r6, r4, r0
    lwzx r4, r4, r0
    cmpwi r4, 0x0
    bne lbl_fn_8061A1C0_000001D0
    lwz r0, 0x4(r6)
    stw r0, 0x0(r3)
    b lbl_fn_8061A1C0_000001DC
lbl_fn_8061A1C0_000001D0:
    add r4, r4, r0
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
lbl_fn_8061A1C0_000001DC:
    lwz r5, 0x4(r6)
    cmpwi r5, 0x0
    bne lbl_fn_8061A1C0_000001F4
    lwz r0, 0x0(r6)
    stw r0, 0x4(r3)
    b lbl_fn_8061A1C0_00000200
lbl_fn_8061A1C0_000001F4:
    lhz r0, 0xa(r3)
    lwz r4, 0x0(r6)
    stwx r4, r5, r0
lbl_fn_8061A1C0_00000200:
    li r0, 0x0
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    lhz r4, 0x8(r3)
    subi r0, r4, 0x1
    sth r0, 0x8(r3)
    blr
}

asm void fn_8061A230(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8061A230_00000230
    lwz r3, 0x0(r3)
    blr
lbl_fn_8061A230_00000230:
    lhz r0, 0xa(r3)
    add r3, r4, r0
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8061A250(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_808800C0
    cmpwi r0, 0x0
    beq lbl_fn_8061A250_00000264
    li r3, 0x1
    b lbl_fn_8061A250_00000328
lbl_fn_8061A250_00000264:
    bl OSGetConsoleType
    rlwinm. r0, r3, 0, 3, 3
    bne lbl_fn_8061A250_00000280
    li r0, 0x2
    stw r0, lbl_808800C4
    li r3, 0x0
    b lbl_fn_8061A250_00000328
lbl_fn_8061A250_00000280:
    bl OSDisableInterrupts
    li r0, 0xf2
    stb r0, 0x8(r1)
    mr r31, r3
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x1
    lis r5, 0xb000
    li r7, 0x1
    bl fn_805E96D0
    cmpwi r3, 0x0
    bne lbl_fn_8061A250_000002C8
    li r0, 0x5
    stw r0, lbl_808800C4
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8061A250_00000328
lbl_fn_8061A250_000002C8:
    li r0, 0xf3
    stb r0, 0x8(r1)
    addi r6, r1, 0x8
    li r3, 0x0
    li r4, 0x1
    lis r5, 0xb000
    li r7, 0x1
    bl fn_805E96D0
    cmpwi r3, 0x0
    bne lbl_fn_8061A250_00000308
    li r0, 0x5
    stw r0, lbl_808800C4
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8061A250_00000328
lbl_fn_8061A250_00000308:
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    li r3, 0x1
    stw r3, lbl_808800C0
    li r3, 0x1
    stw r0, lbl_808800C4
    stw r0, lbl_808800C8
lbl_fn_8061A250_00000328:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061A350(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetConsoleType
    rlwinm. r0, r3, 0, 3, 3
    bne lbl_fn_8061A350_00000368
    li r0, 0x0
    stw r0, lbl_808800CC
    li r3, 0x2
    b lbl_fn_8061A350_00000378
lbl_fn_8061A350_00000368:
    lis r4, 0xa5ff
    li r3, 0x0
    addi r0, r4, 0x5a
    stw r0, lbl_808800CC
lbl_fn_8061A350_00000378:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8061A3A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r5, lbl_808800CC
    mr r30, r3
    mr r31, r4
    addis r0, r5, 0x5a01
    cmplwi r0, 0x5a
    beq lbl_fn_8061A3A0_000003C4
    li r3, 0x2
    b lbl_fn_8061A3A0_000005A8
lbl_fn_8061A3A0_000003C4:
    lwz r0, lbl_808800C0
    cmpwi r0, 0x0
    bne lbl_fn_8061A3A0_000003E4
    bl fn_8061A250
    cmpwi r3, 0x0
    bne lbl_fn_8061A3A0_000003E4
    li r3, 0x2
    b lbl_fn_8061A3A0_000005A8
lbl_fn_8061A3A0_000003E4:
    lwz r0, lbl_808800C0
    cmpwi r0, 0x0
    bne lbl_fn_8061A3A0_00000400
    li r0, 0x1
    stw r0, lbl_808800C4
    li r3, 0x2
    b lbl_fn_8061A3A0_000005A8
lbl_fn_8061A3A0_00000400:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_fn_8061A3A0_00000420
    li r3, 0x0
    b lbl_fn_8061A3A0_000005A8
lbl_fn_8061A3A0_00000420:
    mr r4, r30
    li r3, 0xd
    b lbl_fn_8061A3A0_00000444
    nop
lbl_fn_8061A3A0_00000430:
    lbz r0, 0x0(r4)
    cmpwi r0, 0xa
    bne lbl_fn_8061A3A0_00000440
    stb r3, 0x0(r4)
lbl_fn_8061A3A0_00000440:
    addi r4, r4, 0x1
lbl_fn_8061A3A0_00000444:
    subf r0, r30, r4
    cmplw r0, r31
    blt lbl_fn_8061A3A0_00000430
    lis r3, 0xb000
    lwz r28, lbl_808884E8
    addi r0, r3, 0x100
    stw r0, 0x14(r1)
    li r26, 0x0
    lis r29, 0x3000
    b lbl_fn_8061A3A0_00000594
lbl_fn_8061A3A0_0000046C:
    mr r5, r28
    li r3, 0x0
    li r4, 0x1
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_fn_8061A3A0_0000048C
    li r27, -0x1
    b lbl_fn_8061A3A0_000004E8
lbl_fn_8061A3A0_0000048C:
    addi r0, r29, 0x100
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    li r3, 0x0
    bl EXISync
    addi r4, r1, 0xc
    li r3, 0x0
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl EXIImm
    li r3, 0x0
    bl EXISync
    li r3, 0x0
    bl EXIDeselect
    lwz r0, 0xc(r1)
    extrwi r0, r0, 6, 2
    subfic r27, r0, 0x20
lbl_fn_8061A3A0_000004E8:
    cmpwi r27, 0x0
    bge lbl_fn_8061A3A0_000004F8
    li r26, 0x3
    b lbl_fn_8061A3A0_0000059C
lbl_fn_8061A3A0_000004F8:
    cmpwi r27, 0x20
    bne lbl_fn_8061A3A0_00000594
    mr r5, r28
    li r3, 0x0
    li r4, 0x1
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_fn_8061A3A0_00000520
    li r26, 0x3
    b lbl_fn_8061A3A0_0000059C
lbl_fn_8061A3A0_00000520:
    addi r4, r1, 0x14
    li r3, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    li r3, 0x0
    bl EXISync
    b lbl_fn_8061A3A0_0000057C
lbl_fn_8061A3A0_00000544:
    lbz r0, 0x0(r30)
    addi r4, r1, 0x10
    li r3, 0x0
    li r5, 0x4
    slwi r0, r0, 24
    stw r0, 0x10(r1)
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    li r3, 0x0
    bl EXISync
    addi r30, r30, 0x1
    subi r27, r27, 0x1
    subi r31, r31, 0x1
lbl_fn_8061A3A0_0000057C:
    cmpwi r27, 0x0
    ble lbl_fn_8061A3A0_0000058C
    cmpwi r31, 0x0
    bne lbl_fn_8061A3A0_00000544
lbl_fn_8061A3A0_0000058C:
    li r3, 0x0
    bl EXIDeselect
lbl_fn_8061A3A0_00000594:
    cmpwi r31, 0x0
    bne lbl_fn_8061A3A0_0000046C
lbl_fn_8061A3A0_0000059C:
    li r3, 0x0
    bl EXIUnlock
    mr r3, r26
lbl_fn_8061A3A0_000005A8:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
