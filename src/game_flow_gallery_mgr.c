#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_800D246C(void);
extern void fn_800E2A24(void);
extern void fn_8012111C(void);
extern void fn_8014F698(void);
extern void fn_8014F960(void);
extern void fn_80219E6C(void);
extern void fn_804AE3BC(void);
extern void fn_804CF198(void);
extern void fn_804CF640(void);
extern void fn_804EE4F4(void);
extern void fn_805010C4(void);
extern void fn_805011D0(void);
extern void fn_8050128C(void);
extern void fn_8050A730(void);
extern void fn_8050A964(void);
extern void fn_8050A984(void);
extern void fn_8050E630(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 jumptable_807913E0[];
extern u8 jumptable_80791438[];
extern u8 lbl_80759748[];
extern u8 lbl_80759E48[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E1AC;
extern u32 lbl_8087E1B0;
extern u32 lbl_8087F600;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_80887570;
extern u32 lbl_8088761C;
extern u32 lbl_80887620;
extern u32 lbl_80887624;

/* Function declarations */
void fn_804F147C(void);
void fn_804F148C(void);
void fn_804F149C(void);
void fn_804F1568(void);
void fn_804F1954(void);
void fn_804F1CA4(void);
void fn_804F1D74(void);
void fn_804F1F28(void);
void fn_804F1F38(void);
void fn_804F2044(void);
void fn_804F225C(void);
void fn_804F2454(void);
void fn_804F2998(void);
void fn_804F2C44(void);
void fn_804F2C48(void);
void fn_804F2CE8(void);
void fn_804F2CEC(void);
void fn_804F2DB0(void);
void fn_804F2E40(void);

asm void fn_804F147C(void)
{
    nofralloc
    lwz r0, 0xd0(r3)
    oris r0, r0, 0x1000
    stw r0, 0xd0(r3)
    blr
}

asm void fn_804F148C(void)
{
    nofralloc
    lwz r0, 0xd0(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xd0(r3)
    blr
}

asm void fn_804F149C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F149C_000000D8
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F149C_000000D8
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F149C_00000080
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F149C_00000080:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F149C_00000090
    b lbl_fn_804F149C_000000D8
lbl_fn_804F149C_00000090:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F149C_000000C4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F149C_000000C4:
    lwz r3, lbl_8087F600
    lwz r0, 0xd0(r31)
    lwz r3, 0x0(r3)
    rlwimi r0, r3, 22, 6, 9
    stw r0, 0xd0(r31)
lbl_fn_804F149C_000000D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F1568(void)
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
    stw r28, 0x10(r1)
    lwz r5, lbl_8087F610
    addis r3, r5, 0x1
    lbz r0, -0x6664(r3)
    cmplwi r0, 0x1
    beq lbl_fn_804F1568_000004B8
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F1568_000004B8
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F1568_000004B8
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1568_00000170
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1568_00000170:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1568_00000180
    b lbl_fn_804F1568_000004B8
lbl_fn_804F1568_00000180:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1568_000001B4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1568_000001B4:
    lwz r31, lbl_8087F600
    lwz r3, 0xd0(r29)
    lwz r0, 0x1c(r31)
    lbz r28, 0xcc(r29)
    rlwimi r3, r0, 0, 3, 3
    stw r3, 0xd0(r29)
    lwz r0, 0x1c(r31)
    rlwimi r3, r0, 0, 22, 25
    stw r3, 0xd0(r29)
    lwz r0, 0x1c(r31)
    rlwimi r3, r0, 0, 26, 29
    stw r3, 0xd0(r29)
    lwz r0, 0x1c(r31)
    rlwimi r3, r0, 0, 30, 30
    stw r3, 0xd0(r29)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F1568_00000224
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F1568_00000218
    li r0, 0x0
    b lbl_fn_804F1568_00000228
lbl_fn_804F1568_00000218:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804F1568_00000228
lbl_fn_804F1568_00000224:
    li r0, 0x0
lbl_fn_804F1568_00000228:
    clrlwi r0, r0, 24
    subf r0, r28, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804F1568_00000294
    lwz r0, 0x0(r31)
    stw r0, 0xb0(r29)
    lwz r3, 0xd0(r29)
    lwz r4, 0x4(r31)
    lwz r0, 0x8(r31)
    stw r0, 0xb8(r29)
    stw r4, 0xb4(r29)
    lwz r0, 0xc(r31)
    stw r0, 0xbc(r29)
    lwz r4, 0x10(r31)
    lwz r0, 0x14(r31)
    stw r0, 0xc4(r29)
    stw r4, 0xc0(r29)
    lwz r0, 0x18(r31)
    stw r0, 0xc8(r29)
    lwz r0, 0x1c(r31)
    rlwimi r3, r0, 0, 6, 9
    stw r3, 0xd0(r29)
    lwz r0, 0x1c(r31)
    rlwimi r3, r0, 0, 20, 21
    stw r3, 0xd0(r29)
lbl_fn_804F1568_00000294:
    cmplwi r30, 0x2c
    bne lbl_fn_804F1568_000003F4
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1568_000002D0
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1568_000002D0:
    lwz r4, lbl_8087F628
    lwz r30, lbl_8087F600
    addis r3, r4, 0x1
    lwz r31, lbl_8087F610
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F1568_0000030C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F1568_00000300
    li r0, 0x0
    b lbl_fn_804F1568_00000328
lbl_fn_804F1568_00000300:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F1568_00000328
lbl_fn_804F1568_0000030C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F1568_00000320
    li r3, 0x0
    b lbl_fn_804F1568_00000324
lbl_fn_804F1568_00000320:
    bl fn_806A8E40
lbl_fn_804F1568_00000324:
    clrlwi r0, r3, 24
lbl_fn_804F1568_00000328:
    lwz r5, 0x5e8(r31)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F1568_00000370
lbl_fn_804F1568_00000340:
    lwz r0, 0x5e4(r31)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F1568_00000368
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F1568_00000368
    b lbl_fn_804F1568_00000374
lbl_fn_804F1568_00000368:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F1568_00000340
lbl_fn_804F1568_00000370:
    li r5, 0x0
lbl_fn_804F1568_00000374:
    cmpwi r5, 0x0
    beq lbl_fn_804F1568_000004B8
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_804F1568_000003E0
lbl_fn_804F1568_00000388:
    cmpwi r6, 0x0
    lwz r4, lbl_8087F610
    blt lbl_fn_804F1568_000003AC
    lwz r0, 0x5e8(r4)
    cmpw r6, r0
    bge lbl_fn_804F1568_000003AC
    lwz r0, 0x5e4(r4)
    add r5, r0, r3
    b lbl_fn_804F1568_000003B0
lbl_fn_804F1568_000003AC:
    li r5, 0x0
lbl_fn_804F1568_000003B0:
    cmpwi r5, 0x0
    beq lbl_fn_804F1568_000003D8
    add r7, r30, r6
    lwz r0, 0xd0(r5)
    lbz r4, 0x20(r7)
    rlwimi r0, r4, 22, 6, 9
    stw r0, 0xd0(r5)
    lbz r0, 0x28(r7)
    extsb r0, r0
    stw r0, 0xb0(r5)
lbl_fn_804F1568_000003D8:
    addi r6, r6, 0x1
    addi r3, r3, 0xd5c
lbl_fn_804F1568_000003E0:
    lwz r4, lbl_8087F610
    lwz r0, 0x5e8(r4)
    cmpw r6, r0
    blt lbl_fn_804F1568_00000388
    b lbl_fn_804F1568_000004B8
lbl_fn_804F1568_000003F4:
    lwz r4, lbl_8087F628
    lwz r31, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F1568_0000042C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F1568_00000420
    li r0, 0x0
    b lbl_fn_804F1568_00000448
lbl_fn_804F1568_00000420:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F1568_00000448
lbl_fn_804F1568_0000042C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F1568_00000440
    li r3, 0x0
    b lbl_fn_804F1568_00000444
lbl_fn_804F1568_00000440:
    bl fn_806A8E40
lbl_fn_804F1568_00000444:
    clrlwi r0, r3, 24
lbl_fn_804F1568_00000448:
    lwz r5, 0x5e8(r31)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F1568_00000490
lbl_fn_804F1568_00000460:
    lwz r0, 0x5e4(r31)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F1568_00000488
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F1568_00000488
    b lbl_fn_804F1568_00000494
lbl_fn_804F1568_00000488:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F1568_00000460
lbl_fn_804F1568_00000490:
    li r5, 0x0
lbl_fn_804F1568_00000494:
    cmpwi r5, 0x0
    beq lbl_fn_804F1568_000004B8
    lbz r0, 0xcc(r29)
    li r3, 0x1
    lbz r4, 0xd53(r5)
    slw r0, r3, r0
    clrlwi r0, r0, 24
    or r0, r4, r0
    stb r0, 0xd53(r5)
lbl_fn_804F1568_000004B8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804F1954(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F1954_00000814
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F1954_00000814
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1954_00000538
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1954_00000538:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1954_00000548
    b lbl_fn_804F1954_00000814
lbl_fn_804F1954_00000548:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1954_0000057C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1954_0000057C:
    lwz r3, lbl_8087F600
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804F1954_000005A8
    cmpwi r0, 0x1
    beq lbl_fn_804F1954_00000644
    cmpwi r0, 0x2
    beq lbl_fn_804F1954_000006E0
    cmpwi r0, 0x3
    beq lbl_fn_804F1954_0000077C
    b lbl_fn_804F1954_00000814
lbl_fn_804F1954_000005A8:
    lwz r0, 0x4(r3)
    stw r0, 0xe8(r31)
    lhz r0, 0x8(r3)
    sth r0, 0xec(r31)
    lwz r0, 0xc(r3)
    stw r0, 0xf0(r31)
    lwz r4, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r0, 0xf8(r31)
    stw r4, 0xf4(r31)
    lwz r4, 0x18(r3)
    lwz r0, 0x1c(r3)
    stw r0, 0x100(r31)
    stw r4, 0xfc(r31)
    lwz r4, 0x20(r3)
    lwz r0, 0x24(r3)
    stw r0, 0x108(r31)
    stw r4, 0x104(r31)
    lwz r4, 0x28(r3)
    lwz r0, 0x2c(r3)
    stw r0, 0x110(r31)
    stw r4, 0x10c(r31)
    lwz r4, 0x30(r3)
    lwz r0, 0x34(r3)
    stw r0, 0x118(r31)
    stw r4, 0x114(r31)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x120(r31)
    stw r4, 0x11c(r31)
    lwz r4, 0x40(r3)
    lwz r0, 0x44(r3)
    stw r0, 0x128(r31)
    stw r4, 0x124(r31)
    lwz r4, 0x48(r3)
    lwz r0, 0x4c(r3)
    stw r0, 0x130(r31)
    stw r4, 0x12c(r31)
    b lbl_fn_804F1954_00000814
lbl_fn_804F1954_00000644:
    lwz r0, 0x4(r3)
    stw r0, 0x3fc(r31)
    lhz r0, 0x8(r3)
    sth r0, 0x400(r31)
    lwz r0, 0xc(r3)
    stw r0, 0x404(r31)
    lwz r4, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r0, 0x40c(r31)
    stw r4, 0x408(r31)
    lwz r4, 0x18(r3)
    lwz r0, 0x1c(r3)
    stw r0, 0x414(r31)
    stw r4, 0x410(r31)
    lwz r4, 0x20(r3)
    lwz r0, 0x24(r3)
    stw r0, 0x41c(r31)
    stw r4, 0x418(r31)
    lwz r4, 0x28(r3)
    lwz r0, 0x2c(r3)
    stw r0, 0x424(r31)
    stw r4, 0x420(r31)
    lwz r4, 0x30(r3)
    lwz r0, 0x34(r3)
    stw r0, 0x42c(r31)
    stw r4, 0x428(r31)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x434(r31)
    stw r4, 0x430(r31)
    lwz r4, 0x40(r3)
    lwz r0, 0x44(r3)
    stw r0, 0x43c(r31)
    stw r4, 0x438(r31)
    lwz r4, 0x48(r3)
    lwz r0, 0x4c(r3)
    stw r0, 0x444(r31)
    stw r4, 0x440(r31)
    b lbl_fn_804F1954_00000814
lbl_fn_804F1954_000006E0:
    lwz r0, 0x4(r3)
    stw r0, 0x710(r31)
    lhz r0, 0x8(r3)
    sth r0, 0x714(r31)
    lwz r0, 0xc(r3)
    stw r0, 0x718(r31)
    lwz r4, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r0, 0x720(r31)
    stw r4, 0x71c(r31)
    lwz r4, 0x18(r3)
    lwz r0, 0x1c(r3)
    stw r0, 0x728(r31)
    stw r4, 0x724(r31)
    lwz r4, 0x20(r3)
    lwz r0, 0x24(r3)
    stw r0, 0x730(r31)
    stw r4, 0x72c(r31)
    lwz r4, 0x28(r3)
    lwz r0, 0x2c(r3)
    stw r0, 0x738(r31)
    stw r4, 0x734(r31)
    lwz r4, 0x30(r3)
    lwz r0, 0x34(r3)
    stw r0, 0x740(r31)
    stw r4, 0x73c(r31)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x748(r31)
    stw r4, 0x744(r31)
    lwz r4, 0x40(r3)
    lwz r0, 0x44(r3)
    stw r0, 0x750(r31)
    stw r4, 0x74c(r31)
    lwz r4, 0x48(r3)
    lwz r0, 0x4c(r3)
    stw r0, 0x758(r31)
    stw r4, 0x754(r31)
    b lbl_fn_804F1954_00000814
lbl_fn_804F1954_0000077C:
    lwz r0, 0x4(r3)
    stw r0, 0xa24(r31)
    lhz r0, 0x8(r3)
    sth r0, 0xa28(r31)
    lwz r0, 0xc(r3)
    stw r0, 0xa2c(r31)
    lwz r4, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r0, 0xa34(r31)
    stw r4, 0xa30(r31)
    lwz r4, 0x18(r3)
    lwz r0, 0x1c(r3)
    stw r0, 0xa3c(r31)
    stw r4, 0xa38(r31)
    lwz r4, 0x20(r3)
    lwz r0, 0x24(r3)
    stw r0, 0xa44(r31)
    stw r4, 0xa40(r31)
    lwz r4, 0x28(r3)
    lwz r0, 0x2c(r3)
    stw r0, 0xa4c(r31)
    stw r4, 0xa48(r31)
    lwz r4, 0x30(r3)
    lwz r0, 0x34(r3)
    stw r0, 0xa54(r31)
    stw r4, 0xa50(r31)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0xa5c(r31)
    stw r4, 0xa58(r31)
    lwz r4, 0x40(r3)
    lwz r0, 0x44(r3)
    stw r0, 0xa64(r31)
    stw r4, 0xa60(r31)
    lwz r4, 0x48(r3)
    lwz r0, 0x4c(r3)
    stw r0, 0xa6c(r31)
    stw r4, 0xa68(r31)
lbl_fn_804F1954_00000814:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F1CA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F1CA4_000008E4
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F1CA4_000008E4
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1CA4_00000888
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1CA4_00000888:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1CA4_00000898
    b lbl_fn_804F1CA4_000008E4
lbl_fn_804F1CA4_00000898:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1CA4_000008CC
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1CA4_000008CC:
    lwz r3, lbl_8087F600
    lwz r0, 0x0(r3)
    lwz r4, 0x4(r3)
    slwi r0, r0, 2
    add r3, r31, r0
    stw r4, 0xd38(r3)
lbl_fn_804F1CA4_000008E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F1D74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F1D74_00000A98
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F1D74_00000A98
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1D74_00000958
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1D74_00000958:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1D74_00000968
    b lbl_fn_804F1D74_00000A98
lbl_fn_804F1D74_00000968:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1D74_0000099C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1D74_0000099C:
    lwz r4, lbl_8087F600
    lwz r0, 0x0(r4)
    stw r0, 0x34(r31)
    lwz r0, 0x4(r4)
    stw r0, 0x38(r31)
    lfs f0, 0x8(r4)
    stfs f0, 0x3c(r31)
    lfs f0, 0xc(r4)
    stfs f0, 0x40(r31)
    lfs f0, 0x10(r4)
    stfs f0, 0x44(r31)
    lfs f0, 0x14(r4)
    stfs f0, 0x48(r31)
    lfs f0, 0x18(r4)
    stfs f0, 0x4c(r31)
    lfs f0, 0x1c(r4)
    stfs f0, 0x50(r31)
    lwz r0, 0x20(r4)
    stw r0, 0x54(r31)
    lwz r3, 0x24(r4)
    lwz r0, 0x28(r4)
    stw r0, 0x5c(r31)
    stw r3, 0x58(r31)
    lwz r3, 0x2c(r4)
    lwz r0, 0x30(r4)
    stw r0, 0x64(r31)
    stw r3, 0x60(r31)
    lwz r3, 0x34(r4)
    lwz r0, 0x38(r4)
    stw r0, 0x6c(r31)
    stw r3, 0x68(r31)
    lwz r3, 0x3c(r4)
    lwz r0, 0x40(r4)
    stw r0, 0x74(r31)
    stw r3, 0x70(r31)
    lwz r3, 0x44(r4)
    lwz r0, 0x48(r4)
    stw r0, 0x7c(r31)
    stw r3, 0x78(r31)
    lwz r3, 0x4c(r4)
    lwz r0, 0x50(r4)
    stw r0, 0x84(r31)
    stw r3, 0x80(r31)
    lwz r3, 0x54(r4)
    lwz r0, 0x58(r4)
    stw r0, 0x8c(r31)
    stw r3, 0x88(r31)
    lwz r3, 0x5c(r4)
    lwz r0, 0x60(r4)
    stw r0, 0x94(r31)
    stw r3, 0x90(r31)
    lwz r3, 0x64(r4)
    lwz r0, 0x68(r4)
    stw r0, 0x9c(r31)
    stw r3, 0x98(r31)
    lwz r3, 0x6c(r4)
    lwz r0, 0x70(r4)
    stw r0, 0xa4(r31)
    stw r3, 0xa0(r31)
    lwz r3, 0x74(r4)
    lwz r0, 0x78(r4)
    stw r0, 0xac(r31)
    stw r3, 0xa8(r31)
lbl_fn_804F1D74_00000A98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F1F28(void)
{
    nofralloc
    lwz r0, 0xd0(r3)
    oris r0, r0, 0x800
    stw r0, 0xd0(r3)
    blr
}

asm void fn_804F1F38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r0, 0xd0(r3)
    lwz r28, lbl_8087F610
    cmpwi r4, 0x0
    oris r0, r0, 0x400
    stw r0, 0xd0(r3)
    beq lbl_fn_804F1F38_00000B04
    mr r3, r4
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804F1F38_00000B04:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_804F1F38_00000B80
lbl_fn_804F1F38_00000B10:
    lwz r0, 0x5e4(r28)
    add. r4, r0, r30
    beq lbl_fn_804F1F38_00000B38
    lbz r0, 0xcc(r4)
    cmplwi r0, 0xff
    beq lbl_fn_804F1F38_00000B38
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804F1F38_00000B38
    li r0, 0x1
    b lbl_fn_804F1F38_00000B3C
lbl_fn_804F1F38_00000B38:
    li r0, 0x0
lbl_fn_804F1F38_00000B3C:
    cmpwi r0, 0x0
    beq lbl_fn_804F1F38_00000B78
    lbz r3, 0xcc(r4)
    lbz r0, 0xcc(r31)
    clrlwi r3, r3, 28
    cmplw r3, r0
    bne lbl_fn_804F1F38_00000B78
    lwz r0, 0xd0(r4)
    oris r0, r0, 0x400
    stw r0, 0xd0(r4)
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804F1F38_00000B78
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804F1F38_00000B78:
    addi r29, r29, 0x1
    addi r30, r30, 0xd5c
lbl_fn_804F1F38_00000B80:
    lwz r0, 0x5e8(r28)
    cmpw r29, r0
    blt lbl_fn_804F1F38_00000B10
    lwz r3, lbl_8087F610
    li r4, 0x1
    lbz r0, 0xcc(r31)
    addis r3, r3, 0x1
    clrlslwi r0, r0, 28, 2
    add r3, r3, r0
    stw r4, -0x660c(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804F2044(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, lbl_8087F610
    lwz r0, 0x4fc(r4)
    cmpwi r0, 0x1e
    bne lbl_fn_804F2044_00000DC4
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2044_00000C28
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2044_00000C28:
    lwz r31, lbl_8087F600
    lbz r0, 0x12(r31)
    extrwi. r0, r0, 1, 30
    bne lbl_fn_804F2044_00000D1C
    lbz r4, 0x14(r31)
    lwz r5, lbl_8087F610
    rlwinm. r0, r4, 0, 24, 27
    beq lbl_fn_804F2044_00000C7C
    lwz r0, 0x5e8(r5)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804F2044_00000C7C
lbl_fn_804F2044_00000C5C:
    lwz r0, 0x5e4(r5)
    add r30, r0, r3
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804F2044_00000C74
    b lbl_fn_804F2044_00000C80
lbl_fn_804F2044_00000C74:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F2044_00000C5C
lbl_fn_804F2044_00000C7C:
    li r30, 0x0
lbl_fn_804F2044_00000C80:
    bl fn_804AE3BC
    neg r0, r30
    lis r5, lbl_80759E48@ha
    or r0, r0, r30
    addi r5, r5, lbl_80759E48@l
    srwi r4, r0, 31
    addi r5, r5, 0x209
    crclr 6
    bl fn_8050E630
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F2044_00000CD8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F2044_00000CCC
    li r0, 0x0
    b lbl_fn_804F2044_00000CF4
lbl_fn_804F2044_00000CCC:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F2044_00000CF4
lbl_fn_804F2044_00000CD8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F2044_00000CEC
    li r3, 0x0
    b lbl_fn_804F2044_00000CF0
lbl_fn_804F2044_00000CEC:
    bl fn_806A8E40
lbl_fn_804F2044_00000CF0:
    clrlwi r0, r3, 24
lbl_fn_804F2044_00000CF4:
    lbz r3, 0x14(r31)
    clrlwi r0, r0, 24
    cmplw r3, r0
    beq lbl_fn_804F2044_00000DC4
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_804F2044_00000DC4
    mr r3, r31
    bl fn_804CF640
    b lbl_fn_804F2044_00000DC4
lbl_fn_804F2044_00000D1C:
    lbz r0, 0x14(r31)
    lwz r3, lbl_8087F610
    mulli r0, r0, 0xb4
    lwz r3, 0x5f0(r3)
    lwzx r30, r3, r0
    cmpwi r30, 0x0
    beq lbl_fn_804F2044_00000DC4
    mr r3, r31
    mr r4, r30
    bl fn_804CF640
    cmplwi r29, 0x1a
    bne lbl_fn_804F2044_00000DC4
    lwz r3, 0x146c(r30)
    subi r0, r3, 0x13
    cmplwi r0, 0x15
    bgt lbl_fn_804F2044_00000DC4
    lis r3, jumptable_807913E0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807913E0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2044_00000DA8
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2044_00000DA8:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r4, lbl_8087F600
    lwz r12, 0x114(r12)
    addi r4, r4, 0x15
    mtctr r12
    bctrl
lbl_fn_804F2044_00000DC4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804F225C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804F225C_00000FC0
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F225C_00000E38
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F225C_00000E38:
    lwz r31, lbl_8087F600
    lbz r0, 0x8(r31)
    extrwi. r0, r0, 1, 27
    bne lbl_fn_804F225C_00000F24
    lbz r4, 0x9(r31)
    lwz r5, lbl_8087F610
    rlwinm. r0, r4, 0, 24, 27
    beq lbl_fn_804F225C_00000E8C
    lwz r0, 0x5e8(r5)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804F225C_00000E8C
lbl_fn_804F225C_00000E6C:
    lwz r0, 0x5e4(r5)
    add r30, r0, r3
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804F225C_00000E84
    b lbl_fn_804F225C_00000E90
lbl_fn_804F225C_00000E84:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F225C_00000E6C
lbl_fn_804F225C_00000E8C:
    li r30, 0x0
lbl_fn_804F225C_00000E90:
    bl fn_804AE3BC
    neg r0, r30
    lis r5, lbl_80759E48@ha
    or r0, r0, r30
    addi r5, r5, lbl_80759E48@l
    srwi r4, r0, 31
    addi r5, r5, 0x217
    crclr 6
    bl fn_8050E630
    lwz r5, 0x0(r30)
    cmpwi r5, 0x0
    beq lbl_fn_804F225C_00000EE8
    lwz r4, 0x0(r31)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80759748@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_80759748@l(r3)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x7d8(r5)
lbl_fn_804F225C_00000EE8:
    lha r4, 0x4(r31)
    addi r3, r30, 0xdc
    bl fn_8050128C
    lbz r0, 0x6(r31)
    stw r0, 0xe0(r30)
    lbz r0, 0x7(r31)
    stw r0, 0xe4(r30)
    lbz r0, 0x8(r31)
    lwz r3, 0xd0(r30)
    rlwimi r3, r0, 7, 18, 18
    stw r3, 0xd0(r30)
    lbz r0, 0x8(r31)
    rlwimi r3, r0, 7, 19, 19
    stw r3, 0xd0(r30)
    b lbl_fn_804F225C_00000FC0
lbl_fn_804F225C_00000F24:
    lbz r0, 0x9(r31)
    lwz r4, lbl_8087F610
    mulli r0, r0, 0xb4
    lwz r3, 0x5f0(r4)
    lwzux r30, r3, r0
    cmpwi r30, 0x0
    beq lbl_fn_804F225C_00000FC0
    addis r4, r4, 0x1
    li r0, 0x1
    stb r0, -0x6644(r4)
    lwz r0, 0x7e0(r30)
    rlwinm r4, r0, 0, 26, 26
    cmplwi r4, 0x20
    bne lbl_fn_804F225C_00000F70
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    ble lbl_fn_804F225C_00000F70
    bl fn_805011D0
    b lbl_fn_804F225C_00000F88
lbl_fn_804F225C_00000F70:
    cmplwi r4, 0x20
    beq lbl_fn_804F225C_00000F88
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_804F225C_00000F88
    bl fn_805010C4
lbl_fn_804F225C_00000F88:
    lwz r4, lbl_8087F610
    lis r0, 0x4330
    lis r3, lbl_80759748@ha
    li r5, 0x0
    addis r4, r4, 0x1
    stw r0, 0x8(r1)
    lfd f1, lbl_80759748@l(r3)
    stb r5, -0x6644(r4)
    lwz r0, 0x0(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x7d8(r30)
lbl_fn_804F225C_00000FC0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804F2454(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    mr r29, r3
    stw r28, 0x90(r1)
    lwz r4, lbl_8087F610
    lwz r0, 0x4fc(r4)
    cmpwi r0, 0x1e
    bne lbl_fn_804F2454_000014EC
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2454_0000104C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2454_0000104C:
    lwz r31, lbl_8087F600
    lbz r0, 0x30(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804F2454_00001198
    lwz r3, 0x2c(r31)
    lwz r5, lbl_8087F610
    rlwinm. r0, r3, 0, 24, 27
    clrlwi r4, r3, 24
    beq lbl_fn_804F2454_000010A4
    lwz r0, 0x5e8(r5)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804F2454_000010A4
lbl_fn_804F2454_00001084:
    lwz r0, 0x5e4(r5)
    add r29, r0, r3
    lbz r0, 0xcc(r29)
    cmplw r4, r0
    bne lbl_fn_804F2454_0000109C
    b lbl_fn_804F2454_000010A8
lbl_fn_804F2454_0000109C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F2454_00001084
lbl_fn_804F2454_000010A4:
    li r29, 0x0
lbl_fn_804F2454_000010A8:
    lwz r28, lbl_8087F610
    lwz r3, 0x4fc(r28)
    lwz r0, 0x500(r28)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_804AE3BC
    neg r0, r29
    lis r5, lbl_80759E48@ha
    or r0, r0, r29
    lwz r6, 0x2c(r31)
    addi r5, r5, lbl_80759E48@l
    lwz r7, 0x5c0(r28)
    srwi r4, r0, 31
    addi r8, r1, 0x28
    addi r5, r5, 0x223
    crclr 6
    bl fn_8050E630
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2454_00001128
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2454_00001128:
    lwz r4, lbl_8087F600
    mr r3, r29
    bl fn_804EE4F4
    cmplwi r3, 0x1
    bne lbl_fn_804F2454_000014EC
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2454_00001170
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2454_00001170:
    lwz r3, lbl_8087F600
    li r5, 0x0
    lwz r4, 0x0(r29)
    addi r3, r3, 0x31
    addi r4, r4, 0xb0
    bl fn_804CF198
    lwz r3, 0x0(r29)
    li r0, 0x1
    stw r0, 0x3fc(r3)
    b lbl_fn_804F2454_000014EC
lbl_fn_804F2454_00001198:
    lwz r0, 0x2c(r31)
    lwz r3, lbl_8087F610
    mulli r0, r0, 0xb4
    lwz r3, 0x5f0(r3)
    lwzx r30, r3, r0
    cmpwi r30, 0x0
    beq lbl_fn_804F2454_000014EC
    lfs f2, 0x8(r31)
    addi r28, r1, 0x78
    psq_l f1, 0x0(r31), 0, 0
    mr r3, r28
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    psq_l f1, 0xc(r31), 0, 0
    lfs f2, 0x14(r31)
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F9920
    lfs f0, lbl_8088761C
    fcmpo cr0, f1, f0
    ble lbl_fn_804F2454_0000120C
    lis r3, lbl_807C7030@ha
    addi r4, r30, 0x13d8
    addi r3, r3, lbl_807C7030@l
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x13e0(r30)
    b lbl_fn_804F2454_00001220
lbl_fn_804F2454_0000120C:
    lfs f2, 0x80(r1)
    addi r3, r30, 0x13d8
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x13e0(r30)
lbl_fn_804F2454_00001220:
    lfs f2, lbl_80887570
    addi r3, r1, 0x60
    lfs f0, 0x24(r31)
    stfs f2, 0x60(r1)
    stfs f0, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r30), 0, 0
    stfs f2, 0x53c(r30)
    lfs f0, 0x28(r31)
    stfs f0, 0x13e4(r30)
    lha r3, 0x18(r31)
    stfs f2, 0x68(r1)
    cmpwi r3, 0x0
    bne lbl_fn_804F2454_0000125C
    b lbl_fn_804F2454_00001278
lbl_fn_804F2454_0000125C:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x14(r1)
    lfs f2, 0x14(r1)
lbl_fn_804F2454_00001278:
    lha r3, 0x1a(r31)
    cmpwi r3, 0x0
    bne lbl_fn_804F2454_0000128C
    lfs f3, lbl_80887570
    b lbl_fn_804F2454_000012A8
lbl_fn_804F2454_0000128C:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x18(r1)
    lfs f3, 0x18(r1)
lbl_fn_804F2454_000012A8:
    lha r3, 0x1c(r31)
    cmpwi r3, 0x0
    bne lbl_fn_804F2454_000012BC
    lfs f0, lbl_80887570
    b lbl_fn_804F2454_000012D8
lbl_fn_804F2454_000012BC:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x1c(r1)
    lfs f0, 0x1c(r1)
lbl_fn_804F2454_000012D8:
    stfs f2, 0x54(r1)
    addi r3, r1, 0x54
    addi r4, r30, 0x13e8
    frsp f2, f0
    stfs f3, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x13f0(r30)
    lha r3, 0x1e(r31)
    stfs f0, 0x5c(r1)
    cmpwi r3, 0x0
    bne lbl_fn_804F2454_00001310
    lfs f4, lbl_80887570
    b lbl_fn_804F2454_0000132C
lbl_fn_804F2454_00001310:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x8(r1)
    lfs f4, 0x8(r1)
lbl_fn_804F2454_0000132C:
    lha r3, 0x20(r31)
    cmpwi r3, 0x0
    bne lbl_fn_804F2454_00001340
    lfs f3, lbl_80887570
    b lbl_fn_804F2454_0000135C
lbl_fn_804F2454_00001340:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0xc(r1)
    lfs f3, 0xc(r1)
lbl_fn_804F2454_0000135C:
    lha r3, 0x22(r31)
    cmpwi r3, 0x0
    bne lbl_fn_804F2454_00001370
    lfs f0, lbl_80887570
    b lbl_fn_804F2454_0000138C
lbl_fn_804F2454_00001370:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x10(r1)
    lfs f0, 0x10(r1)
lbl_fn_804F2454_0000138C:
    stfs f4, 0x6c(r1)
    addi r4, r30, 0xfa4
    addi r3, r1, 0x6c
    stfs f3, 0x70(r1)
    stfs f0, 0x74(r1)
    bl fn_805F9990
    lfs f0, lbl_80887620
    fcmpo cr0, f1, f0
    ble lbl_fn_804F2454_00001428
    lfs f3, 0x70(r1)
    addi r4, r1, 0x48
    lfs f5, 0xfa8(r30)
    addi r3, r1, 0x6c
    lfs f0, 0x74(r1)
    fsubs f7, f3, f5
    lfs f6, 0xfac(r30)
    lfs f4, 0x6c(r1)
    fsubs f9, f0, f6
    lfs f3, 0xfa4(r30)
    lfs f0, lbl_80887624
    fsubs f4, f4, f3
    stfs f7, 0x40(r1)
    fmuls f8, f9, f0
    fmuls f7, f7, f0
    stfs f4, 0x3c(r1)
    fmuls f0, f4, f0
    fadds f2, f8, f6
    stfs f9, 0x44(r1)
    fadds f4, f7, f5
    stfs f0, 0x30(r1)
    fadds f0, f0, f3
    stfs f4, 0x4c(r1)
    stfs f0, 0x48(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x34(r1)
    stfs f8, 0x38(r1)
    stfs f2, 0x50(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x74(r1)
lbl_fn_804F2454_00001428:
    addi r3, r1, 0x6c
    lfs f2, 0x74(r1)
    addi r4, r30, 0xfa4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    cmplwi r29, 0x1d
    stfs f2, 0xfac(r30)
    lwz r0, 0x12a4(r30)
    ori r0, r0, 0x2
    stw r0, 0x12a4(r30)
    bne lbl_fn_804F2454_000014EC
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2454_00001488
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2454_00001488:
    lwz r3, lbl_8087F600
    addi r4, r30, 0xb0
    li r5, 0x0
    addi r3, r3, 0x31
    bl fn_804CF198
    li r0, 0x1
    stw r0, 0x3fc(r30)
    lbz r0, 0x2f4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804F2454_000014EC
    lwz r3, 0x2dc(r30)
    lwz r0, 0x1224(r30)
    cmpw r3, r0
    beq lbl_fn_804F2454_000014EC
    lfs f31, 0x2e4(r30)
    lfs f0, lbl_80887570
    fcmpo cr0, f31, f0
    ble lbl_fn_804F2454_000014EC
    lfs f30, 0x2e8(r30)
    addi r3, r30, 0x1220
    stfs f0, 0x2e4(r30)
    stfs f31, 0x2e8(r30)
    bl fn_8012111C
    stfs f31, 0x2e4(r30)
    stfs f30, 0x2e8(r30)
lbl_fn_804F2454_000014EC:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_804F2998(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804F2998_000017AC
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2998_00001578
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2998_00001578:
    lwz r30, lbl_8087F600
    lwz r7, lbl_8087F610
    lbz r0, 0xb(r30)
    cmpwi r0, 0x1
    beq lbl_fn_804F2998_000015A0
    cmpwi r0, 0x2
    beq lbl_fn_804F2998_000015A8
    cmpwi r0, 0x3
    beq lbl_fn_804F2998_000015FC
    b lbl_fn_804F2998_00001624
lbl_fn_804F2998_000015A0:
    li r31, 0x0
    b lbl_fn_804F2998_00001628
lbl_fn_804F2998_000015A8:
    lwz r0, 0x5e8(r7)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804F2998_000015F4
lbl_fn_804F2998_000015BC:
    lwz r5, 0x5e4(r7)
    add r6, r5, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F2998_000015EC
    lbz r4, 0xc(r30)
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804F2998_000015EC
    lwzx r31, r5, r3
    b lbl_fn_804F2998_00001628
lbl_fn_804F2998_000015EC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F2998_000015BC
lbl_fn_804F2998_000015F4:
    li r31, 0x0
    b lbl_fn_804F2998_00001628
lbl_fn_804F2998_000015FC:
    lbz r3, 0xc(r30)
    lwz r0, 0x5f4(r7)
    cmplw r0, r3
    ble lbl_fn_804F2998_0000161C
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r7)
    lwzx r31, r3, r0
    b lbl_fn_804F2998_00001628
lbl_fn_804F2998_0000161C:
    li r31, 0x0
    b lbl_fn_804F2998_00001628
lbl_fn_804F2998_00001624:
    li r31, 0x0
lbl_fn_804F2998_00001628:
    lbz r0, 0xd(r30)
    lwz r7, lbl_8087F610
    cmpwi r0, 0x1
    beq lbl_fn_804F2998_0000164C
    cmpwi r0, 0x2
    beq lbl_fn_804F2998_00001654
    cmpwi r0, 0x3
    beq lbl_fn_804F2998_000016A8
    b lbl_fn_804F2998_000016D0
lbl_fn_804F2998_0000164C:
    li r29, 0x0
    b lbl_fn_804F2998_000016D4
lbl_fn_804F2998_00001654:
    lwz r0, 0x5e8(r7)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804F2998_000016A0
lbl_fn_804F2998_00001668:
    lwz r5, 0x5e4(r7)
    add r6, r5, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F2998_00001698
    lbz r4, 0xe(r30)
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804F2998_00001698
    lwzx r29, r5, r3
    b lbl_fn_804F2998_000016D4
lbl_fn_804F2998_00001698:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F2998_00001668
lbl_fn_804F2998_000016A0:
    li r29, 0x0
    b lbl_fn_804F2998_000016D4
lbl_fn_804F2998_000016A8:
    lbz r3, 0xe(r30)
    lwz r0, 0x5f4(r7)
    cmplw r0, r3
    ble lbl_fn_804F2998_000016C8
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r7)
    lwzx r29, r3, r0
    b lbl_fn_804F2998_000016D4
lbl_fn_804F2998_000016C8:
    li r29, 0x0
    b lbl_fn_804F2998_000016D4
lbl_fn_804F2998_000016D0:
    li r29, 0x0
lbl_fn_804F2998_000016D4:
    cmpwi r29, 0x0
    beq lbl_fn_804F2998_000017AC
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_804F2998_000017AC
    lwz r3, 0x146c(r29)
    subi r0, r3, 0x13
    cmplwi r0, 0x15
    bgt lbl_fn_804F2998_000017AC
    lis r3, jumptable_80791438@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80791438@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x88(r1)
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x6c(r1)
    clrlwi r0, r0, 4
    addi r3, r1, 0x8
    stw r5, 0x70(r1)
    stw r5, 0x74(r1)
    stw r5, 0x78(r1)
    stw r5, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r0, 0x88(r1)
    stw r4, 0x84(r1)
    bl fn_800E2A24
    lwz r3, 0x0(r30)
    bl fn_80219E6C
    stw r3, 0x10(r1)
    mr r3, r29
    addi r4, r1, 0x8
    stw r31, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r0, 0x4(r30)
    stw r0, 0x9c(r1)
    lwz r0, 0x8(r30)
    srwi r0, r0, 28
    stw r0, 0x4c(r1)
    lwz r0, 0x8(r30)
    extrwi r0, r0, 4, 4
    stw r0, 0x44(r1)
    lwz r0, 0x8(r30)
    extrwi r0, r0, 8, 8
    stw r0, 0x48(r1)
    lwz r0, 0x8(r30)
    extrwi r0, r0, 1, 16
    stw r0, 0x50(r1)
    lwz r12, 0x0(r29)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_804F2998_000017AC:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804F2C44(void)
{
    nofralloc
    blr
}

asm void fn_804F2C48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F610
    lwz r0, 0x4fc(r4)
    cmpwi r0, 0x1e
    bne lbl_fn_804F2C48_00001858
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2C48_00001824
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2C48_00001824:
    lwz r3, 0x0(r31)
    lwz r4, lbl_8087F600
    cmpwi r3, 0x0
    beq lbl_fn_804F2C48_00001858
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    ble lbl_fn_804F2C48_00001850
    li r4, 0x0
    li r6, 0x0
    bl fn_8014F698
    b lbl_fn_804F2C48_00001858
lbl_fn_804F2C48_00001850:
    li r4, 0x0
    bl fn_8014F960
lbl_fn_804F2C48_00001858:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F2CE8(void)
{
    nofralloc
    blr
}

asm void fn_804F2CEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F2CEC_00001920
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F2CEC_00001920
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2CEC_000018D0
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2CEC_000018D0:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2CEC_000018E0
    b lbl_fn_804F2CEC_00001920
lbl_fn_804F2CEC_000018E0:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2CEC_00001914
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2CEC_00001914:
    lwz r4, lbl_8087F600
    mr r3, r31
    bl fn_8050A730
lbl_fn_804F2CEC_00001920:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F2DB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F2DB0_000019B0
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F2DB0_000019B0
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2DB0_00001994
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2DB0_00001994:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2DB0_000019A4
    b lbl_fn_804F2DB0_000019B0
lbl_fn_804F2DB0_000019A4:
    mr r3, r31
    li r4, 0x0
    bl fn_8050A964
lbl_fn_804F2DB0_000019B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F2E40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F2E40_00001A40
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F2E40_00001A40
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2E40_00001A24
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2E40_00001A24:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2E40_00001A34
    b lbl_fn_804F2E40_00001A40
lbl_fn_804F2E40_00001A34:
    mr r3, r31
    li r4, 0x0
    bl fn_8050A984
lbl_fn_804F2E40_00001A40:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
