#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSPanic(const char* file, int line, const char* msg, ...);

/* External data declarations */
extern u8 lbl_807B8930[];
extern u8 lbl_80828318[];

/* Small data declarations */
extern u32 lbl_8087EB18;
extern u32 lbl_8087EB40;
extern u32 lbl_8087EB48;
extern u32 lbl_8087EB4C;
extern u32 lbl_8087EB54;
extern u32 lbl_808801A8;
extern u32 lbl_808801AC;
extern u32 lbl_808801DC;
extern u32 lbl_808801E0;
extern u32 lbl_80888898;
extern u32 lbl_808888A0;
extern u32 lbl_808888A4;
extern u32 lbl_808888A8;
extern u32 lbl_808888AC;

/* Function declarations */
void fn_80653D44(void);
void fn_80653DA0(void);
void fn_80653EC0(void);
void fn_80653EE0(void);

asm void fn_80653D44(void)
{
    nofralloc
    cmplwi r3, 0x1
    blelr
    subi r5, r3, 0x1
    li r8, 0x0
    lis r3, 0x1
    b lbl_fn_80653D44_00000040
lbl_fn_80653D44_00000018:
    clrlslwi r0, r8, 16, 1
    add r7, r4, r0
    lhz r6, 0x50(r7)
    lhz r0, 0x4e(r7)
    cmplw r0, r6
    ble lbl_fn_80653D44_0000003C
    sth r6, 0x4e(r7)
    subi r8, r3, 0x1
    sth r0, 0x50(r7)
lbl_fn_80653D44_0000003C:
    addi r8, r8, 0x1
lbl_fn_80653D44_00000040:
    clrlwi r0, r8, 16
    cmpw r0, r5
    blt lbl_fn_80653D44_00000018
    blr
}

asm void fn_80653DA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x0(r3)
    subis r0, r4, 0x20
    cmplwi r0, 0xaf30
    beq lbl_fn_80653DA0_00000098
    lis r5, lbl_807B8930@ha
    la r3, lbl_8087EB18
    addi r5, r5, lbl_807B8930@l
    li r4, 0x19
    crclr 6
    bl OSPanic
lbl_fn_80653DA0_00000098:
    lwz r0, 0x8(r31)
    li r3, 0x0
    li r5, 0x1
    add r0, r0, r31
    stw r0, 0x8(r31)
    b lbl_fn_80653DA0_00000150
    nop
lbl_fn_80653DA0_000000B4:
    lwz r4, 0x8(r31)
    clrlslwi r6, r3, 16, 3
    lwzx r0, r4, r6
    cmpwi r0, 0x0
    beq lbl_fn_80653DA0_000000FC
    add r0, r31, r0
    stwx r0, r4, r6
    lwz r4, 0x8(r31)
    lwzx r4, r4, r6
    lbz r0, 0x23(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80653DA0_000000FC
    lwz r0, 0x8(r4)
    add r0, r31, r0
    stw r0, 0x8(r4)
    lwz r4, 0x8(r31)
    lwzx r4, r4, r6
    stb r5, 0x23(r4)
lbl_fn_80653DA0_000000FC:
    lwz r0, 0x8(r31)
    add r4, r0, r6
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80653DA0_0000014C
    add r0, r31, r0
    stw r0, 0x4(r4)
    lwz r0, 0x8(r31)
    add r4, r0, r6
    lwz r4, 0x4(r4)
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80653DA0_0000014C
    lwz r0, 0x8(r4)
    add r0, r31, r0
    stw r0, 0x8(r4)
    lwz r0, 0x8(r31)
    add r4, r0, r6
    lwz r4, 0x4(r4)
    stb r5, 0x2(r4)
lbl_fn_80653DA0_0000014C:
    addi r3, r3, 0x1
lbl_fn_80653DA0_00000150:
    lwz r0, 0x4(r31)
    clrlwi r4, r3, 16
    cmplw r4, r0
    blt lbl_fn_80653DA0_000000B4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80653EC0(void)
{
    nofralloc
    lwz r5, 0x4(r3)
    lwz r3, 0x8(r3)
    divwu r0, r4, r5
    mullw r0, r0, r5
    subf r0, r0, r4
    slwi r0, r0, 3
    add r3, r3, r0
    blr
}

asm void fn_80653EE0(void)
{
    nofralloc
    lfs f9, lbl_808888A4
    mulli r0, r3, 0x688
    lfs f1, lbl_8087EB54
    lis r4, lbl_80828318@ha
    lfs f11, lbl_808888A0
    li r8, 0x0
    fdivs f6, f9, f1
    lfs f10, lbl_8087EB4C
    addi r4, r4, lbl_80828318@l
    add r9, r4, r0
    lfs f4, lbl_808888A8
    stb r8, 0x640(r9)
    fdivs f5, f11, f1
    lfs f2, lbl_808888AC
    lfs f0, lbl_8087EB40
    addi r10, r9, 0x154
    lfs f3, lbl_808801E0
    addi r0, r9, 0x130
    fadds f8, f11, f10
    lfs f1, lbl_808801DC
    fsubs f7, f9, f10
    lwz r6, lbl_808801A8
    stfs f8, 0x614(r9)
    fadds f8, f4, f10
    stfs f7, 0x61c(r9)
    fsubs f7, f2, f10
    fmuls f4, f0, f0
    lwz r5, lbl_808801AC
    stfs f8, 0x618(r9)
    frsp f0, f1
    lfs f2, lbl_80888898
    stfs f7, 0x620(r9)
    lhz r4, lbl_8087EB48
    li r3, -0x1
    stfs f6, 0x624(r9)
    stfs f5, 0x628(r9)
    stfs f4, 0x62c(r9)
    stfs f3, 0x634(r9)
    stfs f1, 0x630(r9)
    stw r8, 0x8(r9)
    stw r8, 0x4(r9)
    stw r8, 0x0(r9)
    sth r8, 0x5ec(r9)
    lhz r7, 0x5f0(r9)
    sth r7, 0x5ee(r9)
    stb r8, 0x5e(r9)
    stb r8, 0x5ea(r9)
    stw r6, 0x28(r9)
    stw r5, 0x2c(r9)
    stw r6, 0x20(r9)
    stw r5, 0x24(r9)
    stfs f2, 0x30(r9)
    stfs f9, 0x5c8(r9)
    stfs f9, 0x5d0(r9)
    stfs f9, 0x34(r9)
    stfs f2, 0x5cc(r9)
    stfs f2, 0x5d4(r9)
    stfs f2, 0x38(r9)
    stw r6, 0x3c(r9)
    stw r5, 0x40(r9)
    stfs f2, 0x44(r9)
    stfs f9, 0x54(r9)
    stfs f2, 0x58(r9)
    lfs f1, 0x110(r9)
    stfs f1, 0x48(r9)
    fdivs f0, f0, f1
    stfs f2, 0x50(r9)
    stfs f2, 0x4c(r9)
    stfs f1, 0x5b4(r9)
    stfs f0, 0x5b8(r9)
    stfs f0, 0x5a8(r9)
    lwz r5, 0x120(r9)
    lwz r6, 0x11c(r9)
    stw r6, 0x5ac(r9)
    stw r5, 0x5b0(r9)
    stfs f2, 0x14(r9)
    stfs f2, 0xc(r9)
    stfs f11, 0x10(r9)
    stfs f9, 0x18(r9)
    stfs f2, 0x1c(r9)
    lwz r5, 0x10(r9)
    lwz r6, 0xc(r9)
    stw r6, 0x5bc(r9)
    stw r5, 0x5c0(r9)
    lwz r5, 0x14(r9)
    stw r5, 0x5c4(r9)
    lwz r5, 0x5d4(r9)
    lwz r6, 0x5d0(r9)
    stw r6, 0x5e0(r9)
    stw r5, 0x5e4(r9)
    sth r4, 0x5e8(r9)
    sth r8, 0x178(r9)
lbl_fn_80653EE0_0000030C:
    stb r3, 0x8(r10)
    subi r10, r10, 0xc
    cmplw r10, r0
    bge lbl_fn_80653EE0_0000030C
    addi r4, r9, 0x16c
    addi r0, r9, 0x160
    li r3, -0x1
    nop
lbl_fn_80653EE0_0000032C:
    stb r3, 0x8(r4)
    subi r4, r4, 0xc
    cmplw r4, r0
    bge lbl_fn_80653EE0_0000032C
    li r0, 0x0
    stb r0, 0x17b(r9)
    li r0, 0x1
    stb r0, 0x641(r9)
    blr
}
