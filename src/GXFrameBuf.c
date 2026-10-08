#include "revolution/types.h"

/* External functions referenced */
extern void fn_80615F30(void);
extern void fn_80695D84(void);

/* External SDA symbols */
extern u32 __GXData;
extern f32 lbl_80888740;
extern f64 lbl_80888748;

/* Function declarations */
void fn_80614C80(void);
void fn_80614CC0(void);
void fn_80614D00(void);
void fn_80614D30(void);
void fn_80614E40(void);
void fn_80614E60(void);
void fn_80614E90(void);
void fn_806150C0(void);
void fn_80615190(void);
void fn_80615210(void);
void fn_80615400(void);
void fn_80615420(void);
void fn_80615560(void);
void fn_806156C0(void);

asm void fn_80614C80(void)
{
    nofralloc
    lwz r8, __GXData
    li r7, 0x0
    rlwimi r7, r3, 0, 22, 31
    subi r0, r5, 0x1
    rlwimi r7, r4, 10, 12, 21
    li r4, 0x49
    li r3, 0x0
    rlwimi r3, r0, 0, 22, 31
    rlwimi r7, r4, 24, 0, 7
    subi r0, r6, 0x1
    stw r7, 0x230(r8)
    rlwimi r3, r0, 10, 12, 21
    li r0, 0x4a
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x234(r8)
    blr
}

asm void fn_80614CC0(void)
{
    nofralloc
    lwz r8, __GXData
    li r7, 0x0
    rlwimi r7, r3, 0, 22, 31
    subi r0, r5, 0x1
    rlwimi r7, r4, 10, 12, 21
    li r4, 0x49
    li r3, 0x0
    rlwimi r3, r0, 0, 22, 31
    rlwimi r7, r4, 24, 0, 7
    subi r0, r6, 0x1
    stw r7, 0x240(r8)
    rlwimi r3, r0, 10, 12, 21
    li r0, 0x4a
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x244(r8)
    blr
}

asm void fn_80614D00(void)
{
    nofralloc
    clrlslwi r0, r3, 17, 1
    lwz r4, __GXData
    srawi r0, r0, 5
    li r3, 0x0
    rlwimi r3, r0, 0, 22, 31
    li r0, 0x4d
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x238(r4)
    blr
}

asm void fn_80614D30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lwz r7, __GXData
    cmpwi r5, 0x13
    stw r0, 0x34(r1)
    li r0, 0x0
    mr r9, r3
    mr r8, r4
    stw r31, 0x2c(r1)
    clrlwi r31, r5, 28
    stw r30, 0x28(r1)
    mr r30, r6
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    stb r0, 0x250(r7)
    bne lbl_fn_80614D30_000000F4
    li r31, 0xb
lbl_fn_80614D30_000000F4:
    cmplwi r5, 0x3
    ble lbl_fn_80614D30_00000104
    cmpwi r5, 0x26
    bne lbl_fn_80614D30_0000011C
lbl_fn_80614D30_00000104:
    li r0, 0x3
    lwz r3, 0x24c(r7)
    rlwimi r3, r0, 15, 15, 16
    stw r3, 0x24c(r7)
    addi r29, r7, 0x24c
    b lbl_fn_80614D30_00000130
lbl_fn_80614D30_0000011C:
    li r0, 0x2
    lwz r3, 0x24c(r7)
    rlwimi r3, r0, 15, 15, 16
    stw r3, 0x24c(r7)
    addi r29, r7, 0x24c
lbl_fn_80614D30_00000130:
    extrwi r0, r5, 1, 27
    stb r0, 0x250(r7)
    mr r3, r5
    mr r5, r8
    lwz r0, 0x0(r29)
    rlwimi r0, r31, 0, 28, 28
    lwz r28, __GXData
    mr r4, r9
    stw r0, 0x0(r29)
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    bl fn_80615F30
    li r0, 0x0
    stw r0, 0x248(r28)
    li r0, 0x4d
    li r3, 0x0
    lwz r5, 0x10(r1)
    lwz r4, 0x8(r1)
    mullw r4, r5, r4
    rlwimi r3, r4, 0, 22, 31
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x248(r28)
    lwz r0, 0x0(r29)
    rlwimi r0, r30, 9, 22, 22
    rlwimi r0, r31, 4, 25, 27
    stw r0, 0x0(r29)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80614E40(void)
{
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x23c(r4)
    rlwimi r0, r3, 12, 18, 19
    stw r0, 0x23c(r4)
    lwz r0, 0x24c(r4)
    rlwinm r0, r0, 0, 20, 17
    stw r0, 0x24c(r4)
    blr
}

asm void fn_80614E60(void)
{
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x23c(r4)
    rlwimi r0, r3, 0, 31, 31
    rlwimi r0, r3, 0, 30, 30
    stw r0, 0x23c(r4)
    lwz r0, 0x24c(r4)
    rlwimi r0, r3, 0, 31, 31
    rlwimi r0, r3, 0, 30, 30
    stw r0, 0x24c(r4)
    blr
}

asm void fn_80614E90(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfd f3, lbl_80888748
    stw r0, 0x74(r1)
    lis r0, 0x4330
    lfs f0, lbl_80888740
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    stw r0, 0x8(r1)
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    stw r0, 0x10(r1)
    fsubs f2, f1, f3
    stw r3, 0x14(r1)
    lfd f1, 0x10(r1)
    stw r31, 0x2c(r1)
    fsubs f1, f1, f3
    stw r30, 0x28(r1)
    fdivs f28, f2, f1
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    mr r30, r29
    fdivs f1, f0, f28
    bl fn_80695D84
    subi r0, r28, 0x1
    clrlwi r4, r3, 23
    slwi r31, r0, 8
    divwu r3, r31, r4
    subi r0, r4, 0x81
    cmplwi r0, 0x7e
    addi r3, r3, 0x1
    bgt lbl_fn_80614E90_000002D8
    b lbl_fn_80614E90_000002BC
    nop
lbl_fn_80614E90_000002B8:
    srwi r4, r4, 1
lbl_fn_80614E90_000002BC:
    clrlwi. r0, r4, 31
    beq lbl_fn_80614E90_000002B8
    divwu r0, r28, r4
    mullw r0, r0, r4
    subf. r0, r0, r28
    bne lbl_fn_80614E90_000002D8
    addi r3, r3, 0x1
lbl_fn_80614E90_000002D8:
    cmplwi r3, 0x400
    ble lbl_fn_80614E90_000002E4
    li r3, 0x400
lbl_fn_80614E90_000002E4:
    lfd f31, lbl_80888748
    lfs f30, lbl_80888740
    b lbl_fn_80614E90_00000364
lbl_fn_80614E90_000002F0:
    stw r28, 0x14(r1)
    subi r30, r30, 0x1
    stw r30, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f0, f0, f31
    fsubs f1, f1, f31
    fdivs f28, f1, f0
    fdivs f1, f30, f28
    bl fn_80695D84
    clrlwi r4, r3, 23
    divwu r3, r31, r4
    subi r0, r4, 0x81
    cmplwi r0, 0x7e
    addi r3, r3, 0x1
    bgt lbl_fn_80614E90_00000358
    b lbl_fn_80614E90_0000033C
    nop
lbl_fn_80614E90_00000338:
    srwi r4, r4, 1
lbl_fn_80614E90_0000033C:
    clrlwi. r0, r4, 31
    beq lbl_fn_80614E90_00000338
    divwu r0, r28, r4
    mullw r0, r0, r4
    subf. r0, r0, r28
    bne lbl_fn_80614E90_00000358
    addi r3, r3, 0x1
lbl_fn_80614E90_00000358:
    cmplwi r3, 0x400
    ble lbl_fn_80614E90_00000364
    li r3, 0x400
lbl_fn_80614E90_00000364:
    cmplw r3, r29
    bgt lbl_fn_80614E90_000002F0
    fmr f29, f28
    lfd f30, lbl_80888748
    lfs f31, lbl_80888740
    b lbl_fn_80614E90_000003F4
lbl_fn_80614E90_0000037C:
    stw r28, 0x14(r1)
    addi r30, r30, 0x1
    fmr f29, f28
    stw r30, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f0, f0, f30
    fsubs f1, f1, f30
    fdivs f28, f1, f0
    fdivs f1, f31, f28
    bl fn_80695D84
    clrlwi r4, r3, 23
    divwu r3, r31, r4
    subi r0, r4, 0x81
    cmplwi r0, 0x7e
    addi r3, r3, 0x1
    bgt lbl_fn_80614E90_000003E8
    b lbl_fn_80614E90_000003CC
    nop
lbl_fn_80614E90_000003C8:
    srwi r4, r4, 1
lbl_fn_80614E90_000003CC:
    clrlwi. r0, r4, 31
    beq lbl_fn_80614E90_000003C8
    divwu r0, r28, r4
    mullw r0, r0, r4
    subf. r0, r0, r28
    bne lbl_fn_80614E90_000003E8
    addi r3, r3, 0x1
lbl_fn_80614E90_000003E8:
    cmplwi r3, 0x400
    ble lbl_fn_80614E90_000003F4
    li r3, 0x400
lbl_fn_80614E90_000003F4:
    cmplw r3, r29
    blt lbl_fn_80614E90_0000037C
    psq_l f31, 0x68(r1), 0, 0
    fmr f1, f29
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806150C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80888740
    stw r0, 0x14(r1)
    fdivs f1, f0, f1
    bl fn_80695D84
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r6, 0x0
    li r5, 0x4e
    clrlwi r8, r3, 23
    rlwimi r6, r3, 0, 23, 31
    lwz r7, __GXData
    rlwimi r6, r5, 24, 0, 7
    stw r6, -0x8000(r4)
    li r3, 0x0
    subi r0, r8, 0x81
    sth r3, 0x2(r7)
    subfic r4, r8, 0x100
    subi r3, r8, 0x100
    cmplwi r0, 0x7e
    or r3, r4, r3
    lwz r0, 0x23c(r7)
    rlwimi r0, r3, 11, 21, 21
    stw r0, 0x23c(r7)
    lwz r0, 0x234(r7)
    extrwi r3, r0, 10, 12
    addi r4, r3, 0x1
    subi r0, r4, 0x1
    slwi r0, r0, 8
    divwu r3, r0, r8
    addi r3, r3, 0x1
    bgt lbl_fn_806150C0_000004F0
    b lbl_fn_806150C0_000004D4
    nop
lbl_fn_806150C0_000004D0:
    srwi r8, r8, 1
lbl_fn_806150C0_000004D4:
    clrlwi. r0, r8, 31
    beq lbl_fn_806150C0_000004D0
    divwu r0, r4, r8
    mullw r0, r0, r8
    subf. r0, r0, r4
    bne lbl_fn_806150C0_000004F0
    addi r3, r3, 0x1
lbl_fn_806150C0_000004F0:
    cmplwi r3, 0x400
    ble lbl_fn_806150C0_000004FC
    li r3, 0x400
lbl_fn_806150C0_000004FC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80615190(void)
{
    nofralloc
    lbz r0, 0x0(r3)
    li r8, 0x0
    lbz r6, 0x3(r3)
    lis r9, 0xcc01
    li r10, 0x61
    rlwimi r8, r0, 0, 24, 31
    stb r10, -0x8000(r9)
    li r0, 0x4f
    rlwimi r8, r6, 8, 16, 23
    li r5, 0x0
    rlwimi r8, r0, 24, 0, 7
    stw r8, -0x8000(r9)
    rlwimi r5, r4, 0, 8, 31
    li r0, 0x51
    lbz r8, 0x2(r3)
    li r7, 0x0
    lbz r6, 0x1(r3)
    rlwimi r5, r0, 24, 0, 7
    li r4, 0x50
    rlwimi r7, r8, 0, 24, 31
    rlwimi r7, r6, 8, 16, 23
    stb r10, -0x8000(r9)
    rlwimi r7, r4, 24, 0, 7
    lwz r3, __GXData
    stw r7, -0x8000(r9)
    li r0, 0x0
    stb r10, -0x8000(r9)
    stw r5, -0x8000(r9)
    sth r0, 0x2(r3)
    blr
}

asm void fn_80615210(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_80615210_0000068C
    lbz r8, 0x0(r4)
    li r0, 0x0
    lbz r10, 0x1(r4)
    li r3, 0x0
    rlwimi r0, r8, 0, 28, 31
    lbz r7, 0x6(r4)
    rlwimi r0, r10, 4, 24, 27
    lbz r8, 0xc(r4)
    rlwimi r3, r7, 0, 28, 31
    li r7, 0x0
    rlwimi r7, r8, 0, 28, 31
    lbz r10, 0xd(r4)
    lbz r11, 0x7(r4)
    li r8, 0x0
    rlwimi r7, r10, 4, 24, 27
    lbz r10, 0x2(r4)
    lbz r9, 0x12(r4)
    rlwimi r3, r11, 4, 24, 27
    rlwimi r0, r10, 8, 20, 23
    lbz r10, 0xe(r4)
    rlwimi r8, r9, 0, 28, 31
    lbz r9, 0x13(r4)
    rlwimi r7, r10, 8, 20, 23
    lbz r10, 0x3(r4)
    rlwimi r8, r9, 4, 24, 27
    lbz r9, 0x14(r4)
    rlwimi r0, r10, 12, 16, 19
    lbz r10, 0xf(r4)
    rlwimi r8, r9, 8, 20, 23
    lbz r9, 0x15(r4)
    rlwimi r7, r10, 12, 16, 19
    lbz r10, 0x4(r4)
    lbz r11, 0x8(r4)
    rlwimi r8, r9, 12, 16, 19
    rlwimi r0, r10, 16, 12, 15
    lbz r10, 0x10(r4)
    lbz r9, 0x16(r4)
    rlwimi r3, r11, 8, 20, 23
    lbz r11, 0x9(r4)
    rlwimi r7, r10, 16, 12, 15
    lbz r10, 0x5(r4)
    rlwimi r8, r9, 16, 12, 15
    lbz r9, 0x11(r4)
    rlwimi r3, r11, 12, 16, 19
    lbz r11, 0xa(r4)
    rlwimi r0, r10, 20, 8, 11
    lbz r10, 0xb(r4)
    rlwimi r7, r9, 20, 8, 11
    lbz r4, 0x17(r4)
    li r9, 0x1
    rlwimi r3, r11, 16, 12, 15
    rlwimi r3, r10, 20, 8, 11
    rlwimi r8, r4, 20, 8, 11
    rlwimi r0, r9, 24, 0, 7
    li r10, 0x2
    li r9, 0x3
    li r4, 0x4
    rlwimi r3, r10, 24, 0, 7
    rlwimi r7, r9, 24, 0, 7
    rlwimi r8, r4, 24, 0, 7
    b lbl_fn_80615210_000006AC
lbl_fn_80615210_0000068C:
    lis r8, 0x166
    lis r3, 0x266
    lis r7, 0x366
    lis r4, 0x466
    addi r0, r8, 0x6666
    addi r3, r3, 0x6666
    addi r7, r7, 0x6666
    addi r8, r4, 0x6666
lbl_fn_80615210_000006AC:
    lis r9, 0xcc01
    li r10, 0x61
    stb r10, -0x8000(r9)
    cmpwi r5, 0x0
    li r4, 0x53
    li r11, 0x0
    stw r0, -0x8000(r9)
    li r0, 0x54
    li r12, 0x0
    rlwimi r11, r4, 24, 0, 7
    stb r10, -0x8000(r9)
    rlwimi r12, r0, 24, 0, 7
    stw r3, -0x8000(r9)
    stb r10, -0x8000(r9)
    stw r7, -0x8000(r9)
    stb r10, -0x8000(r9)
    stw r8, -0x8000(r9)
    beq lbl_fn_80615210_00000730
    lbz r4, 0x0(r6)
    lbz r0, 0x4(r6)
    rlwimi r11, r4, 0, 26, 31
    lbz r3, 0x1(r6)
    rlwimi r12, r0, 0, 26, 31
    lbz r5, 0x2(r6)
    rlwimi r11, r3, 6, 20, 25
    lbz r3, 0x5(r6)
    lbz r4, 0x3(r6)
    rlwimi r11, r5, 12, 14, 19
    lbz r0, 0x6(r6)
    rlwimi r12, r3, 6, 20, 25
    rlwimi r11, r4, 18, 8, 13
    rlwimi r12, r0, 12, 14, 19
    b lbl_fn_80615210_0000074C
lbl_fn_80615210_00000730:
    li r3, 0x15
    clrrwi r11, r11, 12
    rlwimi r12, r3, 0, 26, 31
    li r0, 0x16
    rlwimi r11, r3, 12, 14, 19
    rlwimi r11, r0, 18, 8, 13
    rlwinm r12, r12, 0, 26, 13
lbl_fn_80615210_0000074C:
    lis r4, 0xcc01
    li r5, 0x61
    stb r5, -0x8000(r4)
    li r0, 0x0
    lwz r3, __GXData
    stw r11, -0x8000(r4)
    stb r5, -0x8000(r4)
    stw r12, -0x8000(r4)
    sth r0, 0x2(r3)
    blr
}

asm void fn_80615400(void)
{
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x23c(r4)
    rlwimi r0, r3, 7, 23, 24
    stw r0, 0x23c(r4)
    blr
}

asm void fn_80615420(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_80615420_000007D4
    lwz r7, __GXData
    lis r5, 0xcc01
    li r0, 0x61
    lwz r6, 0x228(r7)
    stb r0, -0x8000(r5)
    ori r6, r6, 0xf
    stw r6, -0x8000(r5)
    lwz r6, 0x220(r7)
    stb r0, -0x8000(r5)
    clrrwi r0, r6, 2
    stw r0, -0x8000(r5)
lbl_fn_80615420_000007D4:
    cmpwi r4, 0x0
    li r12, 0x0
    bne lbl_fn_80615420_000007F8
    lwz r5, __GXData
    lwz r0, 0x22c(r5)
    addi r10, r5, 0x22c
    clrlwi r0, r0, 29
    cmplwi r0, 0x3
    bne lbl_fn_80615420_00000828
lbl_fn_80615420_000007F8:
    lwz r5, __GXData
    lwz r7, 0x22c(r5)
    addi r10, r5, 0x22c
    extrwi r0, r7, 1, 25
    cmplwi r0, 0x1
    bne lbl_fn_80615420_00000828
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    rlwinm r0, r7, 0, 26, 24
    li r12, 0x1
    stw r0, -0x8000(r6)
lbl_fn_80615420_00000828:
    lis r8, 0xcc01
    li r9, 0x61
    stb r9, -0x8000(r8)
    li r6, 0x0
    lwz r11, __GXData
    rlwimi r6, r3, 27, 8, 31
    li r3, 0x4b
    li r0, 0x52
    lwz r7, 0x230(r11)
    rlwimi r6, r3, 24, 0, 7
    stw r7, -0x8000(r8)
    cmpwi r4, 0x0
    stb r9, -0x8000(r8)
    lwz r3, 0x234(r11)
    stw r3, -0x8000(r8)
    stb r9, -0x8000(r8)
    lwz r3, 0x238(r11)
    stw r3, -0x8000(r8)
    stb r9, -0x8000(r8)
    stw r6, -0x8000(r8)
    lwz r3, 0x23c(r11)
    rlwimi r3, r4, 11, 20, 20
    ori r3, r3, 0x4000
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x23c(r11)
    stb r9, -0x8000(r8)
    lwz r0, 0x23c(r11)
    stw r0, -0x8000(r8)
    beq lbl_fn_80615420_000008B4
    stb r9, -0x8000(r8)
    lwz r0, 0x228(r11)
    stw r0, -0x8000(r8)
    stb r9, -0x8000(r8)
    lwz r0, 0x220(r11)
    stw r0, -0x8000(r8)
lbl_fn_80615420_000008B4:
    cmpwi r12, 0x0
    beq lbl_fn_80615420_000008D0
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    lwz r0, 0x0(r10)
    stw r0, -0x8000(r3)
lbl_fn_80615420_000008D0:
    li r0, 0x0
    sth r0, 0x2(r5)
    blr
}

asm void fn_80615560(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_80615560_00000914
    lwz r7, __GXData
    lis r5, 0xcc01
    li r0, 0x61
    lwz r6, 0x228(r7)
    stb r0, -0x8000(r5)
    ori r6, r6, 0xf
    stw r6, -0x8000(r5)
    lwz r6, 0x220(r7)
    stb r0, -0x8000(r5)
    clrrwi r0, r6, 2
    stw r0, -0x8000(r5)
lbl_fn_80615560_00000914:
    lwz r9, __GXData
    li r11, 0x0
    lbz r0, 0x250(r9)
    lwz r6, 0x22c(r9)
    cmpwi r0, 0x0
    beq lbl_fn_80615560_00000944
    clrlwi r0, r6, 29
    cmplwi r0, 0x3
    beq lbl_fn_80615560_00000944
    li r0, 0x3
    li r11, 0x1
    rlwimi r6, r0, 0, 29, 31
lbl_fn_80615560_00000944:
    cmpwi r4, 0x0
    bne lbl_fn_80615560_00000958
    clrlwi r0, r6, 29
    cmplwi r0, 0x3
    bne lbl_fn_80615560_0000096C
lbl_fn_80615560_00000958:
    extrwi r0, r6, 1, 25
    cmplwi r0, 0x1
    bne lbl_fn_80615560_0000096C
    li r11, 0x1
    rlwinm r6, r6, 0, 26, 24
lbl_fn_80615560_0000096C:
    cmpwi r11, 0x0
    beq lbl_fn_80615560_00000984
    lis r5, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r5)
    stw r6, -0x8000(r5)
lbl_fn_80615560_00000984:
    lis r7, 0xcc01
    li r8, 0x61
    stb r8, -0x8000(r7)
    li r5, 0x0
    lwz r10, __GXData
    rlwimi r5, r3, 27, 8, 31
    li r3, 0x4b
    li r0, 0x52
    lwz r6, 0x240(r10)
    rlwimi r5, r3, 24, 0, 7
    stw r6, -0x8000(r7)
    cmpwi r4, 0x0
    stb r8, -0x8000(r7)
    lwz r3, 0x244(r10)
    stw r3, -0x8000(r7)
    stb r8, -0x8000(r7)
    lwz r3, 0x248(r10)
    stw r3, -0x8000(r7)
    stb r8, -0x8000(r7)
    stw r5, -0x8000(r7)
    lwz r3, 0x24c(r10)
    rlwimi r3, r4, 11, 20, 20
    rlwinm r3, r3, 0, 18, 16
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x24c(r10)
    stb r8, -0x8000(r7)
    lwz r0, 0x24c(r10)
    stw r0, -0x8000(r7)
    beq lbl_fn_80615560_00000A10
    stb r8, -0x8000(r7)
    lwz r0, 0x228(r10)
    stw r0, -0x8000(r7)
    stb r8, -0x8000(r7)
    lwz r0, 0x220(r10)
    stw r0, -0x8000(r7)
lbl_fn_80615560_00000A10:
    cmpwi r11, 0x0
    beq lbl_fn_80615560_00000A2C
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    lwz r0, 0x22c(r9)
    stw r0, -0x8000(r3)
lbl_fn_80615560_00000A2C:
    li r0, 0x0
    sth r0, 0x2(r9)
    blr
}

asm void fn_806156C0(void)
{
    nofralloc
    lis r5, 0xcc01
    li r6, 0x61
    stb r6, -0x8000(r5)
    lis r3, 0x5500
    addi r0, r3, 0x3ff
    stw r0, -0x8000(r5)
    lis r3, 0x5600
    addi r4, r3, 0x3ff
    lwz r3, __GXData
    stb r6, -0x8000(r5)
    li r0, 0x0
    stw r4, -0x8000(r5)
    sth r0, 0x2(r3)
    blr
}
