#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __register_global_object(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_800D246C(void);
extern void fn_800DD3FC(void);
extern void fn_8047961C(void);
extern void fn_804AE3BC(void);
extern void fn_804AF520(void);
extern void fn_804B50C0(void);
extern void fn_804B6204(void);
extern void fn_804C2D5C(void);
extern void fn_804C54FC(void);
extern void fn_804D818C(void);
extern void fn_804F6E98(void);
extern void fn_804F7A54(void);
extern void fn_804FB224(void);
extern void fn_8050128C(void);
extern void fn_8050E098(void);
extern void fn_80686A48(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);

/* External data declarations */
extern u8 lbl_807C8AE8[];

/* Small data declarations */
extern u32 lbl_8087E16C;
extern u32 lbl_8087E1AC;
extern u32 lbl_8087E1B0;
extern u32 lbl_8087E1C4;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F528;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5A4;
extern u32 lbl_8087F5A8;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F600;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;

/* Function declarations */
void fn_804F4CBC(void);
void fn_804F4E20(void);
void fn_804F4E44(void);
void fn_804F4F44(void);
void fn_804F4F68(void);
void fn_804F4FC8(void);
void fn_804F50C8(void);
void fn_804F50E0(void);
void fn_804F5A98(void);
void fn_804F5A9C(void);
void fn_804F5B0C(void);
void fn_804F5CA0(void);
void fn_804F5E3C(void);
void fn_804F5FD0(void);
void fn_804F60D8(void);
void fn_804F60DC(void);
void fn_804F60E0(void);
void fn_804F60E4(void);
void fn_804F62DC(void);

asm void fn_804F4CBC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F4CBC_00000148
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F4CBC_00000148
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F4CBC_00000068
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F4CBC_00000068:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F4CBC_00000078
    b lbl_fn_804F4CBC_00000148
lbl_fn_804F4CBC_00000078:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F4CBC_000000AC
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F4CBC_000000AC:
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1035
    sth r4, 0x8(r1)
    extsb. r0, r0
    lwz r30, lbl_8087F600
    sth r3, 0xa(r1)
    bne lbl_fn_804F4CBC_000000EC
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804F4CBC_000000EC:
    li r3, 0x0
    li r0, 0xb
    stw r3, lbl_8087F5FC
    addi r29, r1, 0xc
    sth r0, 0x8(r1)
    lbz r0, 0x0(r30)
    stb r0, 0xc(r1)
    bl fn_804AE3BC
    mr r4, r31
    mr r6, r29
    li r5, 0x1035
    li r7, 0x1
    bl fn_8050E098
    lwz r3, lbl_8087F610
    li r0, 0x1
    addis r3, r3, 0x1
    stb r0, -0x6650(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r31, -0x664f(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stw r0, -0x664c(r3)
lbl_fn_804F4CBC_00000148:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804F4E20(void)
{
    nofralloc
    cmplwi r3, 0x8
    bgelr
    lwz r4, lbl_8087F610
    clrlslwi r0, r3, 24, 2
    li r5, 0x1
    addis r3, r4, 0x1
    add r3, r3, r0
    stw r5, -0x65ec(r3)
    blr
}

asm void fn_804F4E44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F4E44_000001D8
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F4E44_000001D8:
    lwz r29, lbl_8087F600
    li r28, 0x0
    li r31, 0x0
    mr r30, r29
lbl_fn_804F4E44_000001E8:
    cmpwi r28, 0x0
    lwz r3, lbl_8087F610
    blt lbl_fn_804F4E44_0000020C
    lwz r0, 0x5e8(r3)
    cmpw r28, r0
    bge lbl_fn_804F4E44_0000020C
    lwz r0, 0x5e4(r3)
    add r3, r0, r31
    b lbl_fn_804F4E44_00000210
lbl_fn_804F4E44_0000020C:
    li r3, 0x0
lbl_fn_804F4E44_00000210:
    cmpwi r3, 0x0
    beq lbl_fn_804F4E44_00000224
    lha r4, 0x0(r30)
    addi r3, r3, 0xdc
    bl fn_8050128C
lbl_fn_804F4E44_00000224:
    addi r28, r28, 0x1
    addi r31, r31, 0xd5c
    cmpwi r28, 0x8
    addi r30, r30, 0x2
    blt lbl_fn_804F4E44_000001E8
    lwz r3, lbl_8087F610
    li r0, 0x3
    lwz r4, 0x10(r29)
    stw r4, 0x2b80(r3)
    lwz r4, 0x10(r29)
    lwz r3, lbl_8087F610
    subi r4, r4, 0x1
    cntlzw r4, r4
    srwi r4, r4, 5
    stw r4, 0x534(r3)
    lwz r3, lbl_8087F610
    stw r0, 0x50c(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804F4F44(void)
{
    nofralloc
    cmplwi r3, 0x8
    bgelr
    lwz r4, lbl_8087F610
    clrlslwi r0, r3, 24, 2
    li r5, 0x1
    addis r3, r4, 0x1
    add r3, r3, r0
    stw r5, -0x65cc(r3)
    blr
}

asm void fn_804F4F68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1d
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F610
    addi r3, r3, 0x4fc
    bl fn_804FB224
    lwz r3, lbl_8087F59C
    li r4, 0x10
    bl fn_804AF520
    lwz r3, lbl_8087F5A8
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F5A8
    li r4, 0x1
    bl fn_804B50C0
    lwz r4, lbl_8087F610
    lwz r3, lbl_8087F5A8
    lwz r4, 0x564(r4)
    bl fn_804B6204
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F4FC8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r31, r3
    lwz r4, lbl_8087F610
    lwz r0, 0x4fc(r4)
    cmpwi r0, 0x1e
    bne lbl_fn_804F4FC8_000003F8
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F4FC8_00000364
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F4FC8_00000364:
    lwz r28, lbl_8087F600
    bl OSGetTime
    lwz r7, lbl_8087F610
    li r6, 0x2
    lbz r0, lbl_8087F5F8
    li r5, 0x1035
    lwz r8, 0x5bc(r7)
    lwz r7, 0x5b8(r7)
    extsb. r0, r0
    subfc r29, r8, r4
    sth r6, 0x8(r1)
    subfe r30, r7, r3
    sth r5, 0xa(r1)
    bne lbl_fn_804F4FC8_000003BC
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804F4FC8_000003BC:
    li r3, 0x0
    li r0, 0xb
    stw r3, lbl_8087F5FC
    addi r27, r1, 0xc
    sth r0, 0x8(r1)
    stw r29, 0x11(r1)
    stw r30, 0xd(r1)
    lbz r0, 0x0(r28)
    stb r0, 0xc(r1)
    bl fn_804AE3BC
    mr r4, r31
    mr r6, r27
    li r5, 0x1035
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804F4FC8_000003F8:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804F50C8(void)
{
    nofralloc
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beqlr
    li r0, 0x1
    stw r0, 0xf90(r3)
    blr
}

asm void fn_804F50E0(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stmw r27, 0x20c(r1)
    mr r28, r3
    mr r31, r4
    mr r29, r5
    mr r30, r6
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0xc
    beq lbl_fn_804F50E0_00000B84
    cmpwi r5, -0x1
    beq lbl_fn_804F50E0_00000460
    cmpwi r4, 0x0
    bne lbl_fn_804F50E0_00000468
lbl_fn_804F50E0_00000460:
    li r3, 0x0
    b lbl_fn_804F50E0_00000DC8
lbl_fn_804F50E0_00000468:
    lwz r0, lbl_8087F528
    cmpwi r0, 0x0
    bne lbl_fn_804F50E0_0000047C
    li r3, 0x0
    b lbl_fn_804F50E0_00000DC8
lbl_fn_804F50E0_0000047C:
    cmpwi r5, 0x0
    li r0, 0x0
    sth r0, 0x8(r1)
    mr r7, r30
    blt lbl_fn_804F50E0_00000498
    cmpwi r5, 0x15
    ble lbl_fn_804F50E0_000004A0
lbl_fn_804F50E0_00000498:
    li r27, 0x0
    b lbl_fn_804F50E0_000005D0
lbl_fn_804F50E0_000004A0:
    bge lbl_fn_804F50E0_000004D8
    cmpwi r6, 0x0
    blt lbl_fn_804F50E0_000004C0
    mulli r0, r5, 0xc
    add r3, r3, r0
    lwz r0, 0x2a50(r3)
    cmpw r0, r6
    bgt lbl_fn_804F50E0_000004C8
lbl_fn_804F50E0_000004C0:
    li r27, 0x0
    b lbl_fn_804F50E0_000005D0
lbl_fn_804F50E0_000004C8:
    mulli r0, r6, 0x1c
    lwz r3, 0x2a58(r3)
    add r27, r3, r0
    b lbl_fn_804F50E0_000005D0
lbl_fn_804F50E0_000004D8:
    cmpwi r6, 0x0
    bge lbl_fn_804F50E0_000004E8
    li r27, 0x0
    b lbl_fn_804F50E0_000005D0
lbl_fn_804F50E0_000004E8:
    mr r5, r28
    li r4, 0x0
    b lbl_fn_804F50E0_00000500
lbl_fn_804F50E0_000004F4:
    subf r7, r0, r7
    addi r5, r5, 0xc
    addi r4, r4, 0x1
lbl_fn_804F50E0_00000500:
    cmpwi r4, 0x14
    bge lbl_fn_804F50E0_00000514
    lwz r0, 0x2a50(r5)
    cmplw r0, r7
    ble lbl_fn_804F50E0_000004F4
lbl_fn_804F50E0_00000514:
    cmpwi r4, 0x14
    bge lbl_fn_804F50E0_000005CC
    cmpwi r4, 0x0
    blt lbl_fn_804F50E0_0000052C
    cmpwi r4, 0x15
    ble lbl_fn_804F50E0_00000534
lbl_fn_804F50E0_0000052C:
    li r3, 0x0
    b lbl_fn_804F50E0_000005C4
lbl_fn_804F50E0_00000534:
    bge lbl_fn_804F50E0_0000056C
    cmpwi r7, 0x0
    blt lbl_fn_804F50E0_00000554
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x2a50(r3)
    cmpw r0, r7
    bgt lbl_fn_804F50E0_0000055C
lbl_fn_804F50E0_00000554:
    li r3, 0x0
    b lbl_fn_804F50E0_000005C4
lbl_fn_804F50E0_0000055C:
    mulli r0, r7, 0x1c
    lwz r3, 0x2a58(r3)
    add r3, r3, r0
    b lbl_fn_804F50E0_000005C4
lbl_fn_804F50E0_0000056C:
    cmpwi r7, 0x0
    bge lbl_fn_804F50E0_0000057C
    li r3, 0x0
    b lbl_fn_804F50E0_000005C4
lbl_fn_804F50E0_0000057C:
    mr r5, r28
    li r4, 0x0
    b lbl_fn_804F50E0_00000594
lbl_fn_804F50E0_00000588:
    subf r7, r0, r7
    addi r5, r5, 0xc
    addi r4, r4, 0x1
lbl_fn_804F50E0_00000594:
    cmpwi r4, 0x14
    bge lbl_fn_804F50E0_000005A8
    lwz r0, 0x2a50(r5)
    cmplw r0, r7
    ble lbl_fn_804F50E0_00000588
lbl_fn_804F50E0_000005A8:
    cmpwi r4, 0x14
    bge lbl_fn_804F50E0_000005C0
    mr r5, r7
    addi r3, r3, 0x2a50
    bl fn_804C54FC
    b lbl_fn_804F50E0_000005C4
lbl_fn_804F50E0_000005C0:
    li r3, 0x0
lbl_fn_804F50E0_000005C4:
    mr r27, r3
    b lbl_fn_804F50E0_000005D0
lbl_fn_804F50E0_000005CC:
    li r27, 0x0
lbl_fn_804F50E0_000005D0:
    cmpwi r27, 0x0
    beq lbl_fn_804F50E0_000006F4
    lwz r3, lbl_8087F628
    lbz r4, 0xcc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_804F50E0_00000DC4
    lwz r6, 0x18(r27)
    la r4, lbl_8087E1C4
    addi r3, r1, 0x8
    addi r5, r5, 0x10
    cmpwi r6, 0x0
    addi r4, r4, 0x2
    beq lbl_fn_804F50E0_0000061C
    b lbl_fn_804F50E0_00000620
lbl_fn_804F50E0_0000061C:
    la r6, lbl_808813D0
lbl_fn_804F50E0_00000620:
    crclr 6
    bl fn_800DD3FC
    lwz r5, lbl_8087F628
    li r3, 0x0
    sth r3, 0x86(r1)
    addis r4, r5, 0x1
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804F50E0_00000660
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F50E0_00000654
    b lbl_fn_804F50E0_00000678
lbl_fn_804F50E0_00000654:
    bl fn_806B0E30
    clrlwi r3, r3, 24
    b lbl_fn_804F50E0_00000678
lbl_fn_804F50E0_00000660:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F50E0_00000670
    b lbl_fn_804F50E0_00000674
lbl_fn_804F50E0_00000670:
    bl fn_806A8E40
lbl_fn_804F50E0_00000674:
    clrlwi r3, r3, 24
lbl_fn_804F50E0_00000678:
    lwz r0, 0x5e8(r28)
    clrlwi r4, r3, 24
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804F50E0_000006C0
lbl_fn_804F50E0_00000690:
    lwz r0, 0x5e4(r28)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F50E0_000006B8
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F50E0_000006B8
    b lbl_fn_804F50E0_000006C4
lbl_fn_804F50E0_000006B8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F50E0_00000690
lbl_fn_804F50E0_000006C0:
    li r5, 0x0
lbl_fn_804F50E0_000006C4:
    cmplw r31, r5
    lwz r3, lbl_8087F528
    addi r4, r1, 0x8
    bne lbl_fn_804F50E0_000006E0
    lis r5, 0xab00
    subi r5, r5, 0x56
    b lbl_fn_804F50E0_000006E4
lbl_fn_804F50E0_000006E0:
    li r5, -0x1
lbl_fn_804F50E0_000006E4:
    li r6, 0x0
    li r7, 0x9
    bl fn_8047961C
    b lbl_fn_804F50E0_00000DC4
lbl_fn_804F50E0_000006F4:
    subic. r0, r29, 0x16
    li r29, 0x0
    bne lbl_fn_804F50E0_000009D4
    lwz r5, 0x5e8(r28)
    extrwi r4, r30, 8, 16
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F50E0_00000748
lbl_fn_804F50E0_00000718:
    lwz r0, 0x5e4(r28)
    add r31, r0, r3
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F50E0_00000740
    lbz r0, 0xcc(r31)
    cmplw r4, r0
    bne lbl_fn_804F50E0_00000740
    b lbl_fn_804F50E0_0000074C
lbl_fn_804F50E0_00000740:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F50E0_00000718
lbl_fn_804F50E0_00000748:
    li r31, 0x0
lbl_fn_804F50E0_0000074C:
    clrlwi r4, r30, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F50E0_00000790
lbl_fn_804F50E0_00000760:
    lwz r0, 0x5e4(r28)
    add r30, r0, r3
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F50E0_00000788
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804F50E0_00000788
    b lbl_fn_804F50E0_00000794
lbl_fn_804F50E0_00000788:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F50E0_00000760
lbl_fn_804F50E0_00000790:
    li r30, 0x0
lbl_fn_804F50E0_00000794:
    cmpwi r31, 0x0
    beq lbl_fn_804F50E0_00000B5C
    cmpwi r30, 0x0
    beq lbl_fn_804F50E0_00000B5C
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804F50E0_00000B5C
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_804F50E0_00000B5C
    lwz r0, 0x540(r28)
    li r3, 0x0
    cmpwi r0, 0x2
    beq lbl_fn_804F50E0_00000948
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F50E0_00000800
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F50E0_000007F4
    li r0, 0x0
    b lbl_fn_804F50E0_0000081C
lbl_fn_804F50E0_000007F4:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F50E0_0000081C
lbl_fn_804F50E0_00000800:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F50E0_00000814
    li r3, 0x0
    b lbl_fn_804F50E0_00000818
lbl_fn_804F50E0_00000814:
    bl fn_806A8E40
lbl_fn_804F50E0_00000818:
    clrlwi r0, r3, 24
lbl_fn_804F50E0_0000081C:
    lwz r5, 0x5e8(r28)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F50E0_00000864
lbl_fn_804F50E0_00000834:
    lwz r0, 0x5e4(r28)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F50E0_0000085C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F50E0_0000085C
    b lbl_fn_804F50E0_00000868
lbl_fn_804F50E0_0000085C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F50E0_00000834
lbl_fn_804F50E0_00000864:
    li r5, 0x0
lbl_fn_804F50E0_00000868:
    neg r0, r5
    or r0, r0, r5
    srwi. r3, r0, 31
    beq lbl_fn_804F50E0_00000884
    neg r0, r30
    or r0, r0, r30
    srwi r3, r0, 31
lbl_fn_804F50E0_00000884:
    cmpwi r3, 0x0
    beq lbl_fn_804F50E0_00000948
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F50E0_000008C0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F50E0_000008B4
    li r0, 0x0
    b lbl_fn_804F50E0_000008DC
lbl_fn_804F50E0_000008B4:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F50E0_000008DC
lbl_fn_804F50E0_000008C0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F50E0_000008D4
    li r3, 0x0
    b lbl_fn_804F50E0_000008D8
lbl_fn_804F50E0_000008D4:
    bl fn_806A8E40
lbl_fn_804F50E0_000008D8:
    clrlwi r0, r3, 24
lbl_fn_804F50E0_000008DC:
    lwz r5, 0x5e8(r28)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F50E0_00000924
lbl_fn_804F50E0_000008F4:
    lwz r0, 0x5e4(r28)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F50E0_0000091C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F50E0_0000091C
    b lbl_fn_804F50E0_00000928
lbl_fn_804F50E0_0000091C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F50E0_000008F4
lbl_fn_804F50E0_00000924:
    li r5, 0x0
lbl_fn_804F50E0_00000928:
    lwz r3, 0xd0(r30)
    lwz r0, 0xd0(r5)
    extrwi r4, r3, 4, 6
    extrwi r0, r0, 4, 6
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r3, r0, 31
lbl_fn_804F50E0_00000948:
    cmpwi r3, 0x0
    bne lbl_fn_804F50E0_00000994
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r6, 0x0(r30)
    li r29, 0x1
    lwz r4, 0x44(r4)
    lwz r5, 0x0(r31)
    cmpwi r4, 0x0
    lwz r6, 0x60(r6)
    lwz r5, 0x60(r5)
    beq lbl_fn_804F50E0_0000097C
    b lbl_fn_804F50E0_00000980
lbl_fn_804F50E0_0000097C:
    la r4, lbl_808813D0
lbl_fn_804F50E0_00000980:
    lwz r5, 0x4(r5)
    lwz r6, 0x4(r6)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804F50E0_00000B5C
lbl_fn_804F50E0_00000994:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r6, 0x0(r30)
    lwz r4, 0x3c(r4)
    lwz r5, 0x0(r31)
    cmpwi r4, 0x0
    lwz r6, 0x60(r6)
    lwz r5, 0x60(r5)
    beq lbl_fn_804F50E0_000009BC
    b lbl_fn_804F50E0_000009C0
lbl_fn_804F50E0_000009BC:
    la r4, lbl_808813D0
lbl_fn_804F50E0_000009C0:
    lwz r5, 0x4(r5)
    lwz r6, 0x4(r6)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804F50E0_00000B5C
lbl_fn_804F50E0_000009D4:
    cmpwi r0, 0x1
    bne lbl_fn_804F50E0_00000A98
    lwz r0, 0x5e8(r28)
    extrwi r4, r30, 8, 16
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804F50E0_00000A24
lbl_fn_804F50E0_000009F4:
    lwz r0, 0x5e4(r28)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F50E0_00000A1C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F50E0_00000A1C
    b lbl_fn_804F50E0_00000A28
lbl_fn_804F50E0_00000A1C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F50E0_000009F4
lbl_fn_804F50E0_00000A24:
    li r5, 0x0
lbl_fn_804F50E0_00000A28:
    clrlwi r0, r30, 24
    cmpwi r5, 0x0
    mulli r0, r0, 0xb4
    lwz r3, 0x5f0(r28)
    add r3, r3, r0
    beq lbl_fn_804F50E0_00000B5C
    cmpwi r3, 0x0
    beq lbl_fn_804F50E0_00000B5C
    lwz r7, 0x0(r5)
    cmpwi r7, 0x0
    beq lbl_fn_804F50E0_00000B5C
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_804F50E0_00000B5C
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r6, 0x60(r5)
    lwz r4, 0x3c(r4)
    lwz r5, 0x60(r7)
    cmpwi r4, 0x0
    beq lbl_fn_804F50E0_00000A80
    b lbl_fn_804F50E0_00000A84
lbl_fn_804F50E0_00000A80:
    la r4, lbl_808813D0
lbl_fn_804F50E0_00000A84:
    lwz r5, 0x4(r5)
    lwz r6, 0x4(r6)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804F50E0_00000B5C
lbl_fn_804F50E0_00000A98:
    cmpwi r0, 0x2
    bne lbl_fn_804F50E0_00000B5C
    extrwi r0, r30, 8, 16
    lwz r3, 0x5f0(r28)
    mulli r0, r0, 0xb4
    lwz r6, 0x5e8(r28)
    clrlwi r5, r30, 24
    add r4, r3, r0
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804F50E0_00000AF8
lbl_fn_804F50E0_00000AC8:
    lwz r0, 0x5e4(r28)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F50E0_00000AF0
    lbz r0, 0xcc(r6)
    cmplw r5, r0
    bne lbl_fn_804F50E0_00000AF0
    b lbl_fn_804F50E0_00000AFC
lbl_fn_804F50E0_00000AF0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F50E0_00000AC8
lbl_fn_804F50E0_00000AF8:
    li r6, 0x0
lbl_fn_804F50E0_00000AFC:
    cmpwi r4, 0x0
    li r29, 0x1
    beq lbl_fn_804F50E0_00000B5C
    cmpwi r6, 0x0
    beq lbl_fn_804F50E0_00000B5C
    lwz r7, 0x0(r4)
    cmpwi r7, 0x0
    beq lbl_fn_804F50E0_00000B5C
    lwz r5, 0x0(r6)
    cmpwi r5, 0x0
    beq lbl_fn_804F50E0_00000B5C
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r6, 0x60(r5)
    lwz r4, 0x44(r4)
    lwz r5, 0x60(r7)
    cmpwi r4, 0x0
    beq lbl_fn_804F50E0_00000B48
    b lbl_fn_804F50E0_00000B4C
lbl_fn_804F50E0_00000B48:
    la r4, lbl_808813D0
lbl_fn_804F50E0_00000B4C:
    lwz r5, 0x4(r5)
    lwz r6, 0x4(r6)
    crclr 6
    bl fn_800DD3FC
lbl_fn_804F50E0_00000B5C:
    lhz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804F50E0_00000DC4
    lwz r3, lbl_8087F528
    mr r6, r29
    addi r4, r1, 0x8
    li r5, -0x1
    li r7, 0x9
    bl fn_8047961C
    b lbl_fn_804F50E0_00000DC4
lbl_fn_804F50E0_00000B84:
    lwz r29, lbl_8087F5C4
    cmpwi r29, 0x0
    bne lbl_fn_804F50E0_00000B98
    li r3, 0x0
    b lbl_fn_804F50E0_00000DC8
lbl_fn_804F50E0_00000B98:
    lwz r4, 0xd88(r29)
    cmpwi r4, 0x2
    beq lbl_fn_804F50E0_00000BB8
    subi r0, r4, 0x3
    cmplwi r0, 0x3
    ble lbl_fn_804F50E0_00000BB8
    li r3, 0x0
    b lbl_fn_804F50E0_00000DC8
lbl_fn_804F50E0_00000BB8:
    cmplwi r5, 0xffff
    beq lbl_fn_804F50E0_00000D44
    cmpwi r5, 0x0
    blt lbl_fn_804F50E0_00000BD0
    cmpwi r5, 0x15
    ble lbl_fn_804F50E0_00000BD8
lbl_fn_804F50E0_00000BD0:
    li r6, 0x0
    b lbl_fn_804F50E0_00000D04
lbl_fn_804F50E0_00000BD8:
    bge lbl_fn_804F50E0_00000C10
    cmpwi r6, 0x0
    blt lbl_fn_804F50E0_00000BF8
    mulli r0, r5, 0xc
    add r3, r3, r0
    lwz r0, 0x2a50(r3)
    cmpw r0, r6
    bgt lbl_fn_804F50E0_00000C00
lbl_fn_804F50E0_00000BF8:
    li r6, 0x0
    b lbl_fn_804F50E0_00000D04
lbl_fn_804F50E0_00000C00:
    mulli r0, r6, 0x1c
    lwz r3, 0x2a58(r3)
    add r6, r3, r0
    b lbl_fn_804F50E0_00000D04
lbl_fn_804F50E0_00000C10:
    cmpwi r6, 0x0
    bge lbl_fn_804F50E0_00000C20
    li r6, 0x0
    b lbl_fn_804F50E0_00000D04
lbl_fn_804F50E0_00000C20:
    mr r5, r28
    li r4, 0x0
    b lbl_fn_804F50E0_00000C38
lbl_fn_804F50E0_00000C2C:
    subf r30, r0, r30
    addi r5, r5, 0xc
    addi r4, r4, 0x1
lbl_fn_804F50E0_00000C38:
    cmpwi r4, 0x14
    bge lbl_fn_804F50E0_00000C4C
    lwz r0, 0x2a50(r5)
    cmplw r0, r30
    ble lbl_fn_804F50E0_00000C2C
lbl_fn_804F50E0_00000C4C:
    cmpwi r4, 0x14
    bge lbl_fn_804F50E0_00000D00
    cmpwi r4, 0x0
    blt lbl_fn_804F50E0_00000C64
    cmpwi r4, 0x15
    ble lbl_fn_804F50E0_00000C6C
lbl_fn_804F50E0_00000C64:
    li r3, 0x0
    b lbl_fn_804F50E0_00000CF8
lbl_fn_804F50E0_00000C6C:
    bge lbl_fn_804F50E0_00000CA4
    cmpwi r30, 0x0
    blt lbl_fn_804F50E0_00000C8C
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x2a50(r3)
    cmpw r0, r30
    bgt lbl_fn_804F50E0_00000C94
lbl_fn_804F50E0_00000C8C:
    li r3, 0x0
    b lbl_fn_804F50E0_00000CF8
lbl_fn_804F50E0_00000C94:
    mulli r0, r30, 0x1c
    lwz r3, 0x2a58(r3)
    add r3, r3, r0
    b lbl_fn_804F50E0_00000CF8
lbl_fn_804F50E0_00000CA4:
    cmpwi r30, 0x0
    bge lbl_fn_804F50E0_00000CB4
    li r3, 0x0
    b lbl_fn_804F50E0_00000CF8
lbl_fn_804F50E0_00000CB4:
    li r4, 0x0
    b lbl_fn_804F50E0_00000CC8
lbl_fn_804F50E0_00000CBC:
    subf r30, r0, r30
    addi r28, r28, 0xc
    addi r4, r4, 0x1
lbl_fn_804F50E0_00000CC8:
    cmpwi r4, 0x14
    bge lbl_fn_804F50E0_00000CDC
    lwz r0, 0x2a50(r28)
    cmplw r0, r30
    ble lbl_fn_804F50E0_00000CBC
lbl_fn_804F50E0_00000CDC:
    cmpwi r4, 0x14
    bge lbl_fn_804F50E0_00000CF4
    mr r5, r30
    addi r3, r3, 0x2a50
    bl fn_804C54FC
    b lbl_fn_804F50E0_00000CF8
lbl_fn_804F50E0_00000CF4:
    li r3, 0x0
lbl_fn_804F50E0_00000CF8:
    mr r6, r3
    b lbl_fn_804F50E0_00000D04
lbl_fn_804F50E0_00000D00:
    li r6, 0x0
lbl_fn_804F50E0_00000D04:
    cmpwi r6, 0x0
    bne lbl_fn_804F50E0_00000D14
    li r3, 0x0
    b lbl_fn_804F50E0_00000DC8
lbl_fn_804F50E0_00000D14:
    lwz r5, 0x18(r6)
    mr r4, r31
    lwz r3, lbl_8087F5C4
    cmpwi r5, 0x0
    beq lbl_fn_804F50E0_00000D2C
    b lbl_fn_804F50E0_00000D30
lbl_fn_804F50E0_00000D2C:
    la r5, lbl_808813D0
lbl_fn_804F50E0_00000D30:
    lha r6, 0xc(r6)
    li r7, 0x0
    addi r6, r6, 0xa
    bl fn_804C2D5C
    b lbl_fn_804F50E0_00000DC4
lbl_fn_804F50E0_00000D44:
    lwz r4, lbl_8087F86C
    cmpwi r4, 0x0
    bne lbl_fn_804F50E0_00000D58
    li r3, 0x0
    b lbl_fn_804F50E0_00000DC8
lbl_fn_804F50E0_00000D58:
    addis r3, r6, 0x1
    subi r0, r3, 0xdf
    clrlwi r0, r0, 16
    cmplwi r0, 0x6
    ble lbl_fn_804F50E0_00000D74
    li r3, 0x0
    b lbl_fn_804F50E0_00000DC8
lbl_fn_804F50E0_00000D74:
    clrlslwi r0, r6, 16, 3
    add r3, r4, r0
    lwz r27, 0x4c(r3)
    cmpwi r27, 0x0
    beq lbl_fn_804F50E0_00000D8C
    b lbl_fn_804F50E0_00000D90
lbl_fn_804F50E0_00000D8C:
    la r27, lbl_808813D0
lbl_fn_804F50E0_00000D90:
    cmpwi r27, 0x0
    bne lbl_fn_804F50E0_00000DA0
    li r3, 0x0
    b lbl_fn_804F50E0_00000DC8
lbl_fn_804F50E0_00000DA0:
    mr r3, r27
    bl fn_80686A48
    mr r6, r3
    mr r3, r29
    mr r4, r31
    mr r5, r27
    addi r6, r6, 0xa
    li r7, 0x1
    bl fn_804C2D5C
lbl_fn_804F50E0_00000DC4:
    li r3, 0x1
lbl_fn_804F50E0_00000DC8:
    lmw r27, 0x20c(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_804F5A98(void)
{
    nofralloc
    blr
}

asm void fn_804F5A9C(void)
{
    nofralloc
    li r0, 0x20
    mr r8, r3
    li r7, 0x0
    mtctr r0
lbl_fn_804F5A9C_00000DF0:
    lwz r0, 0x48(r8)
    cmpwi r0, 0x0
    bne lbl_fn_804F5A9C_00000E0C
    mulli r0, r7, 0x18
    add r3, r3, r0
    addi r7, r3, 0x48
    b lbl_fn_804F5A9C_00000E1C
lbl_fn_804F5A9C_00000E0C:
    addi r8, r8, 0x18
    addi r7, r7, 0x1
    bdnz lbl_fn_804F5A9C_00000DF0
    li r7, 0x0
lbl_fn_804F5A9C_00000E1C:
    cmpwi r7, 0x0
    bne lbl_fn_804F5A9C_00000E2C
    li r3, 0x0
    blr
lbl_fn_804F5A9C_00000E2C:
    li r0, 0x1
    stw r0, 0x0(r7)
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x4(r7)
    stb r4, 0x14(r7)
    stw r5, 0x8(r7)
    stb r6, 0x15(r7)
    blr
}

asm void fn_804F5B0C(void)
{
    nofralloc
    li r0, 0x4
    mr r6, r3
    li r5, 0x0
    mtctr r0
lbl_fn_804F5B0C_00000E60:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    beq lbl_fn_804F5B0C_00000E88
    lbz r0, 0x5d(r6)
    cmplw r4, r0
    bne lbl_fn_804F5B0C_00000E88
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5B0C_00000FCC
lbl_fn_804F5B0C_00000E88:
    lwz r0, 0x60(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5B0C_00000EB4
    lbz r0, 0x75(r6)
    cmplw r4, r0
    bne lbl_fn_804F5B0C_00000EB4
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5B0C_00000FCC
lbl_fn_804F5B0C_00000EB4:
    lwz r0, 0x78(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5B0C_00000EE0
    lbz r0, 0x8d(r6)
    cmplw r4, r0
    bne lbl_fn_804F5B0C_00000EE0
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5B0C_00000FCC
lbl_fn_804F5B0C_00000EE0:
    lwz r0, 0x90(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5B0C_00000F0C
    lbz r0, 0xa5(r6)
    cmplw r4, r0
    bne lbl_fn_804F5B0C_00000F0C
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5B0C_00000FCC
lbl_fn_804F5B0C_00000F0C:
    lwz r0, 0xa8(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5B0C_00000F38
    lbz r0, 0xbd(r6)
    cmplw r4, r0
    bne lbl_fn_804F5B0C_00000F38
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5B0C_00000FCC
lbl_fn_804F5B0C_00000F38:
    lwz r0, 0xc0(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5B0C_00000F64
    lbz r0, 0xd5(r6)
    cmplw r4, r0
    bne lbl_fn_804F5B0C_00000F64
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5B0C_00000FCC
lbl_fn_804F5B0C_00000F64:
    lwz r0, 0xd8(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5B0C_00000F90
    lbz r0, 0xed(r6)
    cmplw r4, r0
    bne lbl_fn_804F5B0C_00000F90
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5B0C_00000FCC
lbl_fn_804F5B0C_00000F90:
    lwz r0, 0xf0(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5B0C_00000FBC
    lbz r0, 0x105(r6)
    cmplw r4, r0
    bne lbl_fn_804F5B0C_00000FBC
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5B0C_00000FCC
lbl_fn_804F5B0C_00000FBC:
    addi r6, r6, 0xc0
    addi r5, r5, 0x1
    bdnz lbl_fn_804F5B0C_00000E60
    li r3, 0x0
lbl_fn_804F5B0C_00000FCC:
    cmpwi r3, 0x0
    bne lbl_fn_804F5B0C_00000FDC
    li r3, 0x0
    blr
lbl_fn_804F5B0C_00000FDC:
    addi r3, r3, 0xc
    blr
}

asm void fn_804F5CA0(void)
{
    nofralloc
    li r0, 0x4
    mr r6, r3
    li r5, 0x0
    mtctr r0
lbl_fn_804F5CA0_00000FF4:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    beq lbl_fn_804F5CA0_0000101C
    lbz r0, 0x5d(r6)
    cmplw r4, r0
    bne lbl_fn_804F5CA0_0000101C
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5CA0_00001160
lbl_fn_804F5CA0_0000101C:
    lwz r0, 0x60(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5CA0_00001048
    lbz r0, 0x75(r6)
    cmplw r4, r0
    bne lbl_fn_804F5CA0_00001048
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5CA0_00001160
lbl_fn_804F5CA0_00001048:
    lwz r0, 0x78(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5CA0_00001074
    lbz r0, 0x8d(r6)
    cmplw r4, r0
    bne lbl_fn_804F5CA0_00001074
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5CA0_00001160
lbl_fn_804F5CA0_00001074:
    lwz r0, 0x90(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5CA0_000010A0
    lbz r0, 0xa5(r6)
    cmplw r4, r0
    bne lbl_fn_804F5CA0_000010A0
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5CA0_00001160
lbl_fn_804F5CA0_000010A0:
    lwz r0, 0xa8(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5CA0_000010CC
    lbz r0, 0xbd(r6)
    cmplw r4, r0
    bne lbl_fn_804F5CA0_000010CC
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5CA0_00001160
lbl_fn_804F5CA0_000010CC:
    lwz r0, 0xc0(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5CA0_000010F8
    lbz r0, 0xd5(r6)
    cmplw r4, r0
    bne lbl_fn_804F5CA0_000010F8
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5CA0_00001160
lbl_fn_804F5CA0_000010F8:
    lwz r0, 0xd8(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5CA0_00001124
    lbz r0, 0xed(r6)
    cmplw r4, r0
    bne lbl_fn_804F5CA0_00001124
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5CA0_00001160
lbl_fn_804F5CA0_00001124:
    lwz r0, 0xf0(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5CA0_00001150
    lbz r0, 0x105(r6)
    cmplw r4, r0
    bne lbl_fn_804F5CA0_00001150
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5CA0_00001160
lbl_fn_804F5CA0_00001150:
    addi r6, r6, 0xc0
    addi r5, r5, 0x1
    bdnz lbl_fn_804F5CA0_00000FF4
    li r3, 0x0
lbl_fn_804F5CA0_00001160:
    cmpwi r3, 0x0
    bne lbl_fn_804F5CA0_00001170
    li r3, 0x0
    blr
lbl_fn_804F5CA0_00001170:
    li r0, 0x0
    stw r0, 0x0(r3)
    li r3, 0x1
    blr
}

asm void fn_804F5E3C(void)
{
    nofralloc
    li r0, 0x4
    mr r6, r3
    li r5, 0x0
    mtctr r0
lbl_fn_804F5E3C_00001190:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    beq lbl_fn_804F5E3C_000011B8
    lbz r0, 0x5d(r6)
    cmplw r4, r0
    bne lbl_fn_804F5E3C_000011B8
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5E3C_000012FC
lbl_fn_804F5E3C_000011B8:
    lwz r0, 0x60(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5E3C_000011E4
    lbz r0, 0x75(r6)
    cmplw r4, r0
    bne lbl_fn_804F5E3C_000011E4
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5E3C_000012FC
lbl_fn_804F5E3C_000011E4:
    lwz r0, 0x78(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5E3C_00001210
    lbz r0, 0x8d(r6)
    cmplw r4, r0
    bne lbl_fn_804F5E3C_00001210
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5E3C_000012FC
lbl_fn_804F5E3C_00001210:
    lwz r0, 0x90(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5E3C_0000123C
    lbz r0, 0xa5(r6)
    cmplw r4, r0
    bne lbl_fn_804F5E3C_0000123C
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5E3C_000012FC
lbl_fn_804F5E3C_0000123C:
    lwz r0, 0xa8(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5E3C_00001268
    lbz r0, 0xbd(r6)
    cmplw r4, r0
    bne lbl_fn_804F5E3C_00001268
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5E3C_000012FC
lbl_fn_804F5E3C_00001268:
    lwz r0, 0xc0(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5E3C_00001294
    lbz r0, 0xd5(r6)
    cmplw r4, r0
    bne lbl_fn_804F5E3C_00001294
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5E3C_000012FC
lbl_fn_804F5E3C_00001294:
    lwz r0, 0xd8(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5E3C_000012C0
    lbz r0, 0xed(r6)
    cmplw r4, r0
    bne lbl_fn_804F5E3C_000012C0
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5E3C_000012FC
lbl_fn_804F5E3C_000012C0:
    lwz r0, 0xf0(r6)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F5E3C_000012EC
    lbz r0, 0x105(r6)
    cmplw r4, r0
    bne lbl_fn_804F5E3C_000012EC
    mulli r0, r5, 0x18
    add r3, r3, r0
    addi r3, r3, 0x48
    b lbl_fn_804F5E3C_000012FC
lbl_fn_804F5E3C_000012EC:
    addi r6, r6, 0xc0
    addi r5, r5, 0x1
    bdnz lbl_fn_804F5E3C_00001190
    li r3, 0x0
lbl_fn_804F5E3C_000012FC:
    cmpwi r3, 0x0
    bne lbl_fn_804F5E3C_0000130C
    li r3, -0x2
    blr
lbl_fn_804F5E3C_0000130C:
    lwz r3, 0x4(r3)
    blr
}

asm void fn_804F5FD0(void)
{
    nofralloc
    li r0, 0x8
    li r8, 0x0
    li r4, 0x0
    li r6, -0x1
    li r5, 0x96
    mtctr r0
lbl_fn_804F5FD0_0000132C:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804F5FD0_00001364
    lwz r7, 0x50(r3)
    subic. r0, r7, 0x1
    stw r0, 0x50(r3)
    bge lbl_fn_804F5FD0_00001364
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F5FD0_00001360
    stw r6, 0x4c(r3)
    stw r5, 0x50(r3)
    b lbl_fn_804F5FD0_00001364
lbl_fn_804F5FD0_00001360:
    stw r4, 0x48(r3)
lbl_fn_804F5FD0_00001364:
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804F5FD0_0000139C
    lwz r7, 0x68(r3)
    subic. r0, r7, 0x1
    stw r0, 0x68(r3)
    bge lbl_fn_804F5FD0_0000139C
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F5FD0_00001398
    stw r6, 0x64(r3)
    stw r5, 0x68(r3)
    b lbl_fn_804F5FD0_0000139C
lbl_fn_804F5FD0_00001398:
    stw r4, 0x60(r3)
lbl_fn_804F5FD0_0000139C:
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804F5FD0_000013D4
    lwz r7, 0x80(r3)
    subic. r0, r7, 0x1
    stw r0, 0x80(r3)
    bge lbl_fn_804F5FD0_000013D4
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F5FD0_000013D0
    stw r6, 0x7c(r3)
    stw r5, 0x80(r3)
    b lbl_fn_804F5FD0_000013D4
lbl_fn_804F5FD0_000013D0:
    stw r4, 0x78(r3)
lbl_fn_804F5FD0_000013D4:
    lwz r0, 0x90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804F5FD0_0000140C
    lwz r7, 0x98(r3)
    subic. r0, r7, 0x1
    stw r0, 0x98(r3)
    bge lbl_fn_804F5FD0_0000140C
    lwz r0, 0x94(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F5FD0_00001408
    stw r6, 0x94(r3)
    stw r5, 0x98(r3)
    b lbl_fn_804F5FD0_0000140C
lbl_fn_804F5FD0_00001408:
    stw r4, 0x90(r3)
lbl_fn_804F5FD0_0000140C:
    addi r3, r3, 0x60
    addi r8, r8, 0x3
    bdnz lbl_fn_804F5FD0_0000132C
    blr
}

asm void fn_804F60D8(void)
{
    nofralloc
    blr
}

asm void fn_804F60DC(void)
{
    nofralloc
    blr
}

asm void fn_804F60E0(void)
{
    nofralloc
    blr
}

asm void fn_804F60E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r31, lbl_8087F5A4
    lwzu r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804F60E4_00001604
    lwz r29, 0x8(r31)
    li r0, 0x0
    lwz r30, 0x4(r31)
    addi r3, r31, 0x4
    addi r5, r1, 0x8
    stb r0, 0x8(r1)
    lwz r0, 0x0(r31)
    mulli r0, r0, 0x1c
    add r4, r31, r0
    addi r4, r4, 0x4
    bl fn_804F62DC
    addi r4, r31, 0x4
    li r5, 0x1
    li r6, 0x0
    li r3, 0x0
    li r7, 0x0
    b lbl_fn_804F60E4_000014D8
lbl_fn_804F60E4_00001494:
    cmpwi r3, 0x0
    bne lbl_fn_804F60E4_000014A4
    stw r5, 0x0(r4)
    b lbl_fn_804F60E4_000014CC
lbl_fn_804F60E4_000014A4:
    lwz r3, 0x8(r3)
    lwz r0, 0x8(r4)
    cmpw r3, r0
    ble lbl_fn_804F60E4_000014C4
    add r3, r5, r6
    li r6, 0x0
    addi r5, r3, 0x1
    b lbl_fn_804F60E4_000014C8
lbl_fn_804F60E4_000014C4:
    addi r6, r6, 0x1
lbl_fn_804F60E4_000014C8:
    stw r5, 0x0(r4)
lbl_fn_804F60E4_000014CC:
    mr r3, r4
    addi r4, r4, 0x1c
    addi r7, r7, 0x1
lbl_fn_804F60E4_000014D8:
    lwz r0, 0x0(r31)
    cmplw r7, r0
    blt lbl_fn_804F60E4_00001494
    addi r3, r31, 0x4
    li r4, -0x1
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804F60E4_0000151C
lbl_fn_804F60E4_000014FC:
    lwz r0, 0x4(r3)
    cmpw r0, r29
    bne lbl_fn_804F60E4_00001510
    mr r4, r5
    b lbl_fn_804F60E4_0000151C
lbl_fn_804F60E4_00001510:
    addi r3, r3, 0x1c
    addi r5, r5, 0x1
    bdnz lbl_fn_804F60E4_000014FC
lbl_fn_804F60E4_0000151C:
    cmpwi r30, 0x0
    ble lbl_fn_804F60E4_000015A4
    cmpwi r4, 0x0
    blt lbl_fn_804F60E4_000015A4
    mulli r0, r4, 0x1c
    lis r3, 0x2
    addi r6, r31, 0x4
    subi r4, r3, 0x7961
    add r5, r31, r0
    li r8, 0x0
    lwz r0, 0x4(r5)
    subf r7, r0, r30
    b lbl_fn_804F60E4_00001594
lbl_fn_804F60E4_00001550:
    lwz r5, 0x0(r6)
    li r0, 0x1
    add r5, r5, r7
    cmplwi r5, 0x1
    ble lbl_fn_804F60E4_00001568
    mr r0, r5
lbl_fn_804F60E4_00001568:
    cmplw r0, r4
    bge lbl_fn_804F60E4_00001584
    cmplwi r5, 0x1
    li r0, 0x1
    ble lbl_fn_804F60E4_00001588
    mr r0, r5
    b lbl_fn_804F60E4_00001588
lbl_fn_804F60E4_00001584:
    subi r0, r3, 0x7961
lbl_fn_804F60E4_00001588:
    stw r0, 0x0(r6)
    addi r6, r6, 0x1c
    addi r8, r8, 0x1
lbl_fn_804F60E4_00001594:
    lwz r0, 0x0(r31)
    cmplw r8, r0
    blt lbl_fn_804F60E4_00001550
    b lbl_fn_804F60E4_00001604
lbl_fn_804F60E4_000015A4:
    lis r3, 0x2
    addi r5, r31, 0x4
    subi r4, r3, 0x7961
    li r7, 0x0
    b lbl_fn_804F60E4_000015F8
lbl_fn_804F60E4_000015B8:
    lwz r6, 0x0(r5)
    li r0, 0x1
    cmplwi r6, 0x1
    ble lbl_fn_804F60E4_000015CC
    mr r0, r6
lbl_fn_804F60E4_000015CC:
    cmplw r0, r4
    bge lbl_fn_804F60E4_000015E8
    cmplwi r6, 0x1
    li r0, 0x1
    ble lbl_fn_804F60E4_000015EC
    mr r0, r6
    b lbl_fn_804F60E4_000015EC
lbl_fn_804F60E4_000015E8:
    subi r0, r3, 0x7961
lbl_fn_804F60E4_000015EC:
    stw r0, 0x0(r5)
    addi r5, r5, 0x1c
    addi r7, r7, 0x1
lbl_fn_804F60E4_000015F8:
    lwz r0, 0x0(r31)
    cmplw r7, r0
    blt lbl_fn_804F60E4_000015B8
lbl_fn_804F60E4_00001604:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804F62DC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0xd4(r1)
    stmw r24, 0xb0(r1)
    lis r31, 0x9249
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r30, r6, 0x6667
    addi r29, r31, 0x2493
lbl_fn_804F62DC_0000164C:
    subf r0, r24, r25
    mulhw r3, r29, r0
    add r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_804F62DC_000021C8
    cmpwi r7, 0x14
    bgt lbl_fn_804F62DC_000017FC
    cmplw r24, r25
    beq lbl_fn_804F62DC_000021C8
    subi r0, r25, 0x1c
    b lbl_fn_804F62DC_000017F0
lbl_fn_804F62DC_00001684:
    cmplw r24, r25
    mr r3, r24
    beq lbl_fn_804F62DC_00001758
    addi r6, r24, 0x1c
    b lbl_fn_804F62DC_00001750
lbl_fn_804F62DC_00001698:
    lwz r4, 0x8(r3)
    lwz r7, 0x8(r6)
    cmpw r7, r4
    beq lbl_fn_804F62DC_000016C0
    xor r4, r7, r4
    srawi r5, r4, 1
    and r4, r4, r7
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001740
lbl_fn_804F62DC_000016C0:
    lwz r5, 0x10(r3)
    lwz r4, 0x10(r6)
    cmplw r4, r5
    beq lbl_fn_804F62DC_000016E4
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001740
lbl_fn_804F62DC_000016E4:
    lwz r7, 0x4(r3)
    lwz r4, 0x4(r6)
    cmpw r4, r7
    beq lbl_fn_804F62DC_0000170C
    xor r4, r7, r4
    srawi r5, r4, 1
    and r4, r4, r7
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001740
lbl_fn_804F62DC_0000170C:
    lwz r5, 0x18(r3)
    lwz r4, 0x18(r6)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001730
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001740
lbl_fn_804F62DC_00001730:
    xor r4, r3, r6
    cntlzw r4, r4
    slw r4, r3, r4
    srwi r4, r4, 31
lbl_fn_804F62DC_00001740:
    cmpwi r4, 0x0
    beq lbl_fn_804F62DC_0000174C
    mr r3, r6
lbl_fn_804F62DC_0000174C:
    addi r6, r6, 0x1c
lbl_fn_804F62DC_00001750:
    cmplw r6, r25
    bne lbl_fn_804F62DC_00001698
lbl_fn_804F62DC_00001758:
    cmplw r3, r24
    beq lbl_fn_804F62DC_000017EC
    lwz r11, 0x0(r3)
    lwz r10, 0x4(r3)
    lwz r9, 0x8(r3)
    lwz r8, 0xc(r3)
    lwz r7, 0x10(r3)
    lwz r6, 0x14(r3)
    lwz r5, 0x18(r3)
    lwz r4, 0x0(r24)
    stw r4, 0x0(r3)
    lwz r4, 0x4(r24)
    stw r4, 0x4(r3)
    lwz r4, 0x8(r24)
    stw r4, 0x8(r3)
    lwz r4, 0xc(r24)
    stw r4, 0xc(r3)
    lwz r4, 0x10(r24)
    stw r4, 0x10(r3)
    lwz r4, 0x14(r24)
    stw r4, 0x14(r3)
    lwz r4, 0x18(r24)
    stw r4, 0x18(r3)
    stw r11, 0x0(r24)
    stw r10, 0x4(r24)
    stw r9, 0x8(r24)
    stw r8, 0xc(r24)
    stw r7, 0x10(r24)
    stw r6, 0x14(r24)
    stw r11, 0x94(r1)
    stw r10, 0x98(r1)
    stw r9, 0x9c(r1)
    stw r8, 0xa0(r1)
    stw r7, 0xa4(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r5, 0x18(r24)
lbl_fn_804F62DC_000017EC:
    addi r24, r24, 0x1c
lbl_fn_804F62DC_000017F0:
    cmplw r24, r0
    bne lbl_fn_804F62DC_00001684
    b lbl_fn_804F62DC_000021C8
lbl_fn_804F62DC_000017FC:
    lwz r4, lbl_8087E16C
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r30, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x1c
    add r3, r24, r0
    blt lbl_fn_804F62DC_0000183C
    li r6, -0x4
lbl_fn_804F62DC_0000183C:
    mulhw r4, r30, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E16C
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0x1c
    add r4, r24, r0
    blt lbl_fn_804F62DC_00001888
    li r6, -0x4
    stw r6, lbl_8087E16C
lbl_fn_804F62DC_00001888:
    subi r27, r25, 0x1c
    mr r6, r26
    mr r5, r27
    bl fn_804F7A54
    lwz r0, 0x8(r27)
    mr r28, r24
    mr r3, r27
    b lbl_fn_804F62DC_000018AC
lbl_fn_804F62DC_000018A8:
    addi r28, r28, 0x1c
lbl_fn_804F62DC_000018AC:
    lwz r6, 0x8(r28)
    cmpw r6, r0
    beq lbl_fn_804F62DC_000018D0
    xor r4, r6, r0
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001950
lbl_fn_804F62DC_000018D0:
    lwz r5, 0x10(r27)
    lwz r4, 0x10(r28)
    cmplw r4, r5
    beq lbl_fn_804F62DC_000018F4
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001950
lbl_fn_804F62DC_000018F4:
    lwz r6, 0x4(r27)
    lwz r4, 0x4(r28)
    cmpw r4, r6
    beq lbl_fn_804F62DC_0000191C
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001950
lbl_fn_804F62DC_0000191C:
    lwz r5, 0x18(r27)
    lwz r4, 0x18(r28)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001940
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001950
lbl_fn_804F62DC_00001940:
    xor r4, r27, r28
    cntlzw r4, r4
    slw r4, r27, r4
    srwi r4, r4, 31
lbl_fn_804F62DC_00001950:
    cmpwi r4, 0x0
    bne lbl_fn_804F62DC_000018A8
lbl_fn_804F62DC_00001958:
    subi r3, r3, 0x1c
    cmplw r28, r3
    beq lbl_fn_804F62DC_00001A10
    lwz r6, 0x8(r3)
    cmpw r6, r0
    beq lbl_fn_804F62DC_00001988
    xor r4, r6, r0
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001A08
lbl_fn_804F62DC_00001988:
    lwz r5, 0x10(r27)
    lwz r4, 0x10(r3)
    cmplw r4, r5
    beq lbl_fn_804F62DC_000019AC
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001A08
lbl_fn_804F62DC_000019AC:
    lwz r6, 0x4(r27)
    lwz r4, 0x4(r3)
    cmpw r4, r6
    beq lbl_fn_804F62DC_000019D4
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001A08
lbl_fn_804F62DC_000019D4:
    lwz r5, 0x18(r27)
    lwz r4, 0x18(r3)
    cmplw r4, r5
    beq lbl_fn_804F62DC_000019F8
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001A08
lbl_fn_804F62DC_000019F8:
    xor r4, r27, r3
    cntlzw r4, r4
    slw r4, r27, r4
    srwi r4, r4, 31
lbl_fn_804F62DC_00001A08:
    cmpwi r4, 0x0
    beq lbl_fn_804F62DC_00001958
lbl_fn_804F62DC_00001A10:
    cmplw r28, r3
    bge lbl_fn_804F62DC_00001CAC
    lwz r10, 0x0(r28)
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r28)
    addi r28, r28, 0x1c
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r10, 0x78(r1)
    stw r9, 0x7c(r1)
    stw r8, 0x80(r1)
    stw r7, 0x84(r1)
    stw r6, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r4, 0x18(r3)
    b lbl_fn_804F62DC_00001AB0
lbl_fn_804F62DC_00001AAC:
    addi r28, r28, 0x1c
lbl_fn_804F62DC_00001AB0:
    lwz r0, 0x8(r27)
    lwz r6, 0x8(r28)
    cmpw r6, r0
    beq lbl_fn_804F62DC_00001AD8
    xor r4, r6, r0
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001B58
lbl_fn_804F62DC_00001AD8:
    lwz r5, 0x10(r27)
    lwz r4, 0x10(r28)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001AFC
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001B58
lbl_fn_804F62DC_00001AFC:
    lwz r6, 0x4(r27)
    lwz r4, 0x4(r28)
    cmpw r4, r6
    beq lbl_fn_804F62DC_00001B24
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001B58
lbl_fn_804F62DC_00001B24:
    lwz r5, 0x18(r27)
    lwz r4, 0x18(r28)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001B48
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001B58
lbl_fn_804F62DC_00001B48:
    xor r4, r27, r28
    cntlzw r4, r4
    slw r4, r27, r4
    srwi r4, r4, 31
lbl_fn_804F62DC_00001B58:
    cmpwi r4, 0x0
    bne lbl_fn_804F62DC_00001AAC
lbl_fn_804F62DC_00001B60:
    lwz r6, -0x14(r3)
    subi r3, r3, 0x1c
    cmpw r6, r0
    beq lbl_fn_804F62DC_00001B88
    xor r4, r6, r0
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001C08
lbl_fn_804F62DC_00001B88:
    lwz r5, 0x10(r27)
    lwz r4, 0x10(r3)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001BAC
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001C08
lbl_fn_804F62DC_00001BAC:
    lwz r6, 0x4(r27)
    lwz r4, 0x4(r3)
    cmpw r4, r6
    beq lbl_fn_804F62DC_00001BD4
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001C08
lbl_fn_804F62DC_00001BD4:
    lwz r5, 0x18(r27)
    lwz r4, 0x18(r3)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001BF8
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001C08
lbl_fn_804F62DC_00001BF8:
    xor r4, r27, r3
    cntlzw r4, r4
    slw r4, r27, r4
    srwi r4, r4, 31
lbl_fn_804F62DC_00001C08:
    cmpwi r4, 0x0
    beq lbl_fn_804F62DC_00001B60
    cmplw r28, r3
    bge lbl_fn_804F62DC_00001CAC
    lwz r10, 0x0(r28)
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r28)
    addi r28, r28, 0x1c
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r10, 0x5c(r1)
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r4, 0x18(r3)
    b lbl_fn_804F62DC_00001AB0
lbl_fn_804F62DC_00001CAC:
    cmplw r28, r24
    bne lbl_fn_804F62DC_0000215C
    lwz r10, 0x0(r28)
    subi r3, r25, 0x1c
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r27)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r27)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r27)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r27)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r27)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r27)
    stw r0, 0x18(r28)
    addi r28, r28, 0x1c
    stw r10, 0x0(r27)
    stw r9, 0x4(r27)
    stw r8, 0x8(r27)
    stw r7, 0xc(r27)
    stw r6, 0x10(r27)
    stw r5, 0x14(r27)
    stw r4, 0x18(r27)
    lwz r11, -0x14(r25)
    lwz r0, 0x8(r24)
    stw r10, 0x40(r1)
    cmpw r0, r11
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    beq lbl_fn_804F62DC_00001D70
    xor r4, r0, r11
    srawi r5, r4, 1
    and r4, r4, r0
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001DF0
lbl_fn_804F62DC_00001D70:
    lwz r5, 0x10(r3)
    lwz r4, 0x10(r24)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001D94
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001DF0
lbl_fn_804F62DC_00001D94:
    lwz r6, 0x4(r3)
    lwz r4, 0x4(r24)
    cmpw r4, r6
    beq lbl_fn_804F62DC_00001DBC
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001DF0
lbl_fn_804F62DC_00001DBC:
    lwz r5, 0x18(r3)
    lwz r4, 0x18(r24)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001DE0
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001DF0
lbl_fn_804F62DC_00001DE0:
    xor r4, r3, r24
    cntlzw r4, r4
    slw r4, r3, r4
    srwi r4, r4, 31
lbl_fn_804F62DC_00001DF0:
    cmpwi r4, 0x0
    bne lbl_fn_804F62DC_00001F48
    b lbl_fn_804F62DC_00001E00
lbl_fn_804F62DC_00001DFC:
    addi r28, r28, 0x1c
lbl_fn_804F62DC_00001E00:
    cmplw r28, r25
    beq lbl_fn_804F62DC_00001EB4
    lwz r4, 0x8(r28)
    cmpw r0, r4
    beq lbl_fn_804F62DC_00001E2C
    xor r4, r0, r4
    srawi r5, r4, 1
    and r4, r4, r0
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001EAC
lbl_fn_804F62DC_00001E2C:
    lwz r5, 0x10(r28)
    lwz r4, 0x10(r24)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001E50
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001EAC
lbl_fn_804F62DC_00001E50:
    lwz r6, 0x4(r28)
    lwz r4, 0x4(r24)
    cmpw r4, r6
    beq lbl_fn_804F62DC_00001E78
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001EAC
lbl_fn_804F62DC_00001E78:
    lwz r5, 0x18(r28)
    lwz r4, 0x18(r24)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001E9C
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00001EAC
lbl_fn_804F62DC_00001E9C:
    xor r4, r28, r24
    cntlzw r4, r4
    slw r4, r28, r4
    srwi r4, r4, 31
lbl_fn_804F62DC_00001EAC:
    cmpwi r4, 0x0
    beq lbl_fn_804F62DC_00001DFC
lbl_fn_804F62DC_00001EB4:
    cmplw r28, r3
    bge lbl_fn_804F62DC_00001F48
    lwz r10, 0x0(r28)
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r28)
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r10, 0x24(r1)
    stw r9, 0x28(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r4, 0x18(r3)
lbl_fn_804F62DC_00001F48:
    cmplw r28, r3
    bge lbl_fn_804F62DC_00002154
    b lbl_fn_804F62DC_00001F58
lbl_fn_804F62DC_00001F54:
    addi r28, r28, 0x1c
lbl_fn_804F62DC_00001F58:
    lwz r4, 0x8(r28)
    lwz r0, 0x8(r24)
    cmpw r0, r4
    beq lbl_fn_804F62DC_00001F80
    xor r4, r0, r4
    srawi r5, r4, 1
    and r4, r4, r0
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00002000
lbl_fn_804F62DC_00001F80:
    lwz r5, 0x10(r28)
    lwz r4, 0x10(r24)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001FA4
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00002000
lbl_fn_804F62DC_00001FA4:
    lwz r6, 0x4(r28)
    lwz r4, 0x4(r24)
    cmpw r4, r6
    beq lbl_fn_804F62DC_00001FCC
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00002000
lbl_fn_804F62DC_00001FCC:
    lwz r5, 0x18(r28)
    lwz r4, 0x18(r24)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00001FF0
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_00002000
lbl_fn_804F62DC_00001FF0:
    xor r4, r28, r24
    cntlzw r4, r4
    slw r4, r28, r4
    srwi r4, r4, 31
lbl_fn_804F62DC_00002000:
    cmpwi r4, 0x0
    beq lbl_fn_804F62DC_00001F54
lbl_fn_804F62DC_00002008:
    lwz r4, -0x14(r3)
    subi r3, r3, 0x1c
    cmpw r0, r4
    beq lbl_fn_804F62DC_00002030
    xor r4, r0, r4
    srawi r5, r4, 1
    and r4, r4, r0
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_000020B0
lbl_fn_804F62DC_00002030:
    lwz r5, 0x10(r3)
    lwz r4, 0x10(r24)
    cmplw r4, r5
    beq lbl_fn_804F62DC_00002054
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_000020B0
lbl_fn_804F62DC_00002054:
    lwz r6, 0x4(r3)
    lwz r4, 0x4(r24)
    cmpw r4, r6
    beq lbl_fn_804F62DC_0000207C
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F62DC_000020B0
lbl_fn_804F62DC_0000207C:
    lwz r5, 0x18(r3)
    lwz r4, 0x18(r24)
    cmplw r4, r5
    beq lbl_fn_804F62DC_000020A0
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F62DC_000020B0
lbl_fn_804F62DC_000020A0:
    xor r4, r3, r24
    cntlzw r4, r4
    slw r4, r3, r4
    srwi r4, r4, 31
lbl_fn_804F62DC_000020B0:
    cmpwi r4, 0x0
    bne lbl_fn_804F62DC_00002008
    cmplw r28, r3
    bge lbl_fn_804F62DC_00002154
    lwz r10, 0x0(r28)
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r28)
    addi r28, r28, 0x1c
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r10, 0x8(r1)
    stw r9, 0xc(r1)
    stw r8, 0x10(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r4, 0x18(r3)
    b lbl_fn_804F62DC_00001F58
lbl_fn_804F62DC_00002154:
    mr r24, r28
    b lbl_fn_804F62DC_0000164C
lbl_fn_804F62DC_0000215C:
    subf r4, r24, r28
    addi r3, r31, 0x2493
    mulhw r5, r3, r4
    subf r0, r28, r25
    mulhw r3, r3, r0
    add r4, r5, r4
    srawi r4, r4, 4
    add r0, r3, r0
    srwi r5, r4, 31
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r4, r4, r5
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_804F62DC_000021B0
    mr r3, r24
    mr r4, r28
    mr r5, r26
    bl fn_804F6E98
    mr r24, r28
    b lbl_fn_804F62DC_0000164C
lbl_fn_804F62DC_000021B0:
    mr r3, r28
    mr r4, r25
    mr r5, r26
    bl fn_804F6E98
    mr r25, r28
    b lbl_fn_804F62DC_0000164C
lbl_fn_804F62DC_000021C8:
    lmw r24, 0xb0(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
