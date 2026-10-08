#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void fn_806077A0(void);
extern void fn_806077F0(void);
extern void fn_80607870(void);
extern void fn_80608BB0(void);
extern void fn_80609A10(void);

/* External large data symbols */
extern u8 fn_806098D0[];
extern u8 lbl_807D49C0[];
extern u8 lbl_807D4A00[];
extern u8 lbl_807D57C0[];

/* External small data symbols (SDA21) */
extern u32 lbl_8087FF78;
extern u32 lbl_8087FF7C;
extern u32 lbl_8087FF80;
extern u32 lbl_8087FF84;
extern u32 lbl_8087FF88;
extern u32 lbl_8087FF98;
extern u32 lbl_8087FFA4;
extern u32 lbl_8087FFA8;
extern u32 lbl_8087FFAC;
extern u32 lbl_8087FFB0;
extern u32 lbl_8087FFB8;
extern u32 lbl_8087FFBC;
extern u32 lbl_8087FFC0;
extern u32 lbl_8087FFC4;
extern u32 lbl_8087FFC8;
extern u32 lbl_8087FFCC;
extern u32 lbl_8087FFD0;
extern u32 lbl_8087FFD4;
extern u32 lbl_8087FFD8;
extern u32 lbl_8087FFDC;
extern u32 lbl_8087FFE0;
extern u32 lbl_8087FFE4;
extern u32 lbl_8087FFE8;
extern u32 lbl_8087FFEC;
extern u32 lbl_8087FFF0;
extern u32 lbl_8087FFF4;
extern u32 lbl_8087FFF8;
extern u32 lbl_8087FFFC;
extern u32 lbl_80880000;
extern u32 lbl_80880004;

/* Function declarations */
void fn_80609B00(void);
void fn_80609D00(void);
void fn_80609D50(void);
void fn_80609D80(void);
void fn_80609E50(void);
void fn_80609EB0(void);
void fn_80609EC0(void);
void fn_80609F30(void);
void fn_80609FA0(void);

asm void fn_80609B00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x20
    stw r31, 0x1c(r1)
    lis r31, lbl_807D49C0@ha
    addi r31, r31, lbl_807D49C0@l
    stw r4, lbl_8087FFB0
    addi r5, r31, 0x8e0
    stw r4, lbl_8087FFAC
    stw r3, lbl_8087FF88
    stw r4, lbl_8087FF98
    mtctr r0
lbl_fn_80609B00_00000038:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    stw r4, 0x14(r5)
    stw r4, 0x18(r5)
    stw r4, 0x1c(r5)
    stw r4, 0x20(r5)
    addi r5, r5, 0x24
    bdnz lbl_fn_80609B00_00000038
    addi r3, r31, 0x8e0
    li r4, 0x480
    bl DCFlushRange
    li r0, 0x18
    addi r4, r31, 0x5e0
    li r3, 0x0
    mtctr r0
lbl_fn_80609B00_00000080:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_80609B00_00000080
    addi r3, r31, 0x5e0
    li r4, 0x300
    bl DCFlushRange
    li r0, 0x24
    addi r4, r31, 0x40
    li r3, 0x0
    mtctr r0
lbl_fn_80609B00_000000C4:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    stw r3, 0x20(r4)
    stw r3, 0x24(r4)
    addi r4, r4, 0x28
    bdnz lbl_fn_80609B00_000000C4
    addi r3, r31, 0x40
    li r4, 0x5a0
    bl DCFlushRange
    bl fn_80609A10
    lis r3, fn_806098D0@ha
    addi r3, r3, fn_806098D0@l
    bl fn_806077A0
    lwz r0, lbl_8087FF88
    addi r7, r31, 0x40
    li r4, 0x12
    li r3, 0xb4
    cmplwi r0, 0x1
    addi r6, r7, 0x168
    addi r5, r7, 0x2d0
    addi r0, r7, 0x438
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r0, 0x14(r1)
    stw r4, lbl_8087FF7C
    stw r4, lbl_8087FF80
    stw r3, lbl_8087FF84
    bne lbl_fn_80609B00_00000168
    addi r4, r31, 0x8e0
    addi r3, r31, 0x5e0
    addi r4, r4, 0x300
    addi r5, r1, 0x8
    bl fn_80608BB0
    b lbl_fn_80609B00_0000017C
lbl_fn_80609B00_00000168:
    addi r4, r31, 0x8e0
    addi r3, r31, 0x5e0
    addi r4, r4, 0x180
    addi r5, r1, 0x8
    bl fn_80608BB0
lbl_fn_80609B00_0000017C:
    lwz r0, lbl_8087FF88
    li r4, 0x1
    li r3, 0x0
    stw r4, lbl_8087FFA8
    cmplwi r0, 0x1
    stw r3, lbl_8087FFA4
    bne lbl_fn_80609B00_000001C0
    lwz r3, lbl_8087FFAC
    addi r0, r31, 0x8e0
    li r4, 0x180
    mulli r3, r3, 0x180
    add r3, r0, r3
    bl fn_806077F0
    lwz r3, lbl_8087FFAC
    addi r0, r3, 0x1
    stw r0, lbl_8087FFAC
    b lbl_fn_80609B00_000001D8
lbl_fn_80609B00_000001C0:
    lwz r3, lbl_8087FFB0
    addi r0, r31, 0x8e0
    li r4, 0x180
    mulli r3, r3, 0x180
    add r3, r0, r3
    bl fn_806077F0
lbl_fn_80609B00_000001D8:
    bl fn_80607870
    li r0, 0x0
    stw r0, lbl_8087FF78
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80609D00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8087FFA4
    bl OSDisableInterrupts
    stw r30, lbl_8087FFA4
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80609D50(void)
{
    nofralloc
    lwz r3, lbl_8087FF80
    subic. r3, r3, 0x24
    bge lbl_fn_80609D50_00000264
    lwz r0, lbl_8087FF84
    add r3, r3, r0
lbl_fn_80609D50_00000264:
    lwz r0, lbl_8087FF7C
    subf. r3, r0, r3
    bgelr
    lwz r0, lbl_8087FF84
    add r3, r3, r0
    blr
}

asm void fn_80609D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r6, lbl_8087FF80
    subic. r31, r6, 0x24
    bge lbl_fn_80609D80_000002A4
    lwz r0, lbl_8087FF84
    add r31, r31, r0
lbl_fn_80609D80_000002A4:
    lwz r0, lbl_8087FF7C
    subf. r31, r0, r31
    bge lbl_fn_80609D80_000002B8
    lwz r0, lbl_8087FF84
    add r31, r31, r0
lbl_fn_80609D80_000002B8:
    cmpw r5, r31
    ble lbl_fn_80609D80_000002C4
    b lbl_fn_80609D80_000002C8
lbl_fn_80609D80_000002C4:
    mr r31, r5
lbl_fn_80609D80_000002C8:
    mulli r0, r3, 0x168
    lis r5, lbl_807D4A00@ha
    lwz r7, lbl_8087FF7C
    addi r5, r5, lbl_807D4A00@l
    add r5, r5, r0
    mtctr r31
    cmpwi r31, 0x0
    ble lbl_fn_80609D80_00000310
lbl_fn_80609D80_000002E8:
    slwi r6, r7, 1
    addi r7, r7, 0x1
    lhax r0, r6, r5
    sth r0, 0x0(r4)
    addi r4, r4, 0x2
    lwz r0, lbl_8087FF84
    cmpw r7, r0
    blt lbl_fn_80609D80_0000030C
    li r7, 0x0
lbl_fn_80609D80_0000030C:
    bdnz lbl_fn_80609D80_000002E8
lbl_fn_80609D80_00000310:
    mulli r5, r3, 0x168
    lwz r0, lbl_8087FF84
    lis r3, lbl_807D4A00@ha
    slwi r4, r0, 1
    addi r3, r3, lbl_807D4A00@l
    add r3, r3, r5
    bl DCInvalidateRange
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80609E50(void)
{
    nofralloc
    lwz r4, lbl_8087FF80
    subic. r4, r4, 0x24
    bge lbl_fn_80609E50_00000364
    lwz r0, lbl_8087FF84
    add r4, r4, r0
lbl_fn_80609E50_00000364:
    lwz r0, lbl_8087FF7C
    subf. r4, r0, r4
    bge lbl_fn_80609E50_00000378
    lwz r0, lbl_8087FF84
    add r4, r4, r0
lbl_fn_80609E50_00000378:
    cmpw r3, r4
    ble lbl_fn_80609E50_00000384
    mr r3, r4
lbl_fn_80609E50_00000384:
    lwz r0, lbl_8087FF7C
    lwz r4, lbl_8087FF84
    add r0, r0, r3
    stw r0, lbl_8087FF7C
    cmpw r0, r4
    bltlr
    subf r0, r4, r0
    stw r0, lbl_8087FF7C
    blr
}

asm void fn_80609EB0(void)
{
    nofralloc
    lis r3, lbl_807D57C0@ha
    addi r3, r3, lbl_807D57C0@l
    blr
}

asm void fn_80609EC0(void)
{
    nofralloc
    lis r6, 0x2aab
    lwz r7, 0x0(r3)
    subi r0, r6, 0x5555
    mulhw r0, r0, r7
    srawi r0, r0, 4
    srwi r6, r0, 31
    add. r0, r0, r6
    beq lbl_fn_80609EC0_00000418
    cmpwi r0, 0x14
    ble lbl_fn_80609EC0_000003EC
    li r0, 0x14
lbl_fn_80609EC0_000003EC:
    cmpwi r0, -0x14
    bge lbl_fn_80609EC0_000003F8
    li r0, -0x14
lbl_fn_80609EC0_000003F8:
    stw r7, 0x0(r4)
    mulli r6, r0, 0x60
    neg r0, r0
    lwz r4, 0x0(r3)
    subf r4, r6, r4
    stw r4, 0x0(r3)
    sth r0, 0x0(r5)
    blr
lbl_fn_80609EC0_00000418:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x0(r4)
    sth r0, 0x0(r5)
    blr
}

asm void fn_80609F30(void)
{
    nofralloc
    lis r6, 0x38e4
    lwz r7, 0x0(r3)
    subi r0, r6, 0x71c7
    mulhw r0, r0, r7
    srawi r0, r0, 2
    srwi r6, r0, 31
    add. r0, r0, r6
    beq lbl_fn_80609F30_00000488
    cmpwi r0, 0x14
    ble lbl_fn_80609F30_0000045C
    li r0, 0x14
lbl_fn_80609F30_0000045C:
    cmpwi r0, -0x14
    bge lbl_fn_80609F30_00000468
    li r0, -0x14
lbl_fn_80609F30_00000468:
    stw r7, 0x0(r4)
    mulli r6, r0, 0x12
    neg r0, r0
    lwz r4, 0x0(r3)
    subf r4, r6, r4
    stw r4, 0x0(r3)
    sth r0, 0x0(r5)
    blr
lbl_fn_80609F30_00000488:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x0(r4)
    sth r0, 0x0(r5)
    blr
}

asm void fn_80609FA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_80880004
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807D57C0@ha
    addi r4, r31, lbl_807D57C0@l
    addi r5, r4, 0x4
    bl fn_80609EC0
    addi r31, r31, lbl_807D57C0@l
    la r3, lbl_80880000
    addi r4, r31, 0x6
    addi r5, r31, 0xa
    bl fn_80609EC0
    addi r4, r31, 0xc
    addi r5, r31, 0x10
    la r3, lbl_8087FFFC
    bl fn_80609EC0
    addi r4, r31, 0x12
    addi r5, r31, 0x16
    la r3, lbl_8087FFF8
    bl fn_80609EC0
    addi r4, r31, 0x18
    addi r5, r31, 0x1c
    la r3, lbl_8087FFF4
    bl fn_80609EC0
    addi r4, r31, 0x1e
    addi r5, r31, 0x22
    la r3, lbl_8087FFF0
    bl fn_80609EC0
    addi r4, r31, 0x24
    addi r5, r31, 0x28
    la r3, lbl_8087FFEC
    bl fn_80609EC0
    addi r4, r31, 0x2a
    addi r5, r31, 0x2e
    la r3, lbl_8087FFE8
    bl fn_80609EC0
    addi r4, r31, 0x30
    addi r5, r31, 0x34
    la r3, lbl_8087FFE4
    bl fn_80609EC0
    addi r4, r31, 0x36
    addi r5, r31, 0x3a
    la r3, lbl_8087FFE0
    bl fn_80609EC0
    addi r4, r31, 0x3c
    addi r5, r31, 0x40
    la r3, lbl_8087FFDC
    bl fn_80609EC0
    addi r4, r31, 0x42
    addi r5, r31, 0x46
    la r3, lbl_8087FFD8
    bl fn_80609EC0
    addi r4, r31, 0x48
    addi r5, r31, 0x4c
    la r3, lbl_8087FFD4
    bl fn_80609F30
    addi r4, r31, 0x54
    addi r5, r31, 0x58
    la r3, lbl_8087FFD0
    bl fn_80609F30
    addi r4, r31, 0x60
    addi r5, r31, 0x64
    la r3, lbl_8087FFCC
    bl fn_80609F30
    addi r4, r31, 0x6c
    addi r5, r31, 0x70
    la r3, lbl_8087FFC8
    bl fn_80609F30
    addi r4, r31, 0x4e
    addi r5, r31, 0x52
    la r3, lbl_8087FFC4
    bl fn_80609F30
    addi r4, r31, 0x5a
    addi r5, r31, 0x5e
    la r3, lbl_8087FFC0
    bl fn_80609F30
    addi r4, r31, 0x66
    addi r5, r31, 0x6a
    la r3, lbl_8087FFBC
    bl fn_80609F30
    addi r4, r31, 0x72
    addi r5, r31, 0x76
    la r3, lbl_8087FFB8
    bl fn_80609F30
    mr r3, r31
    li r4, 0x78
    bl DCFlushRange
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
