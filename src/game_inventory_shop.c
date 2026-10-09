#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void fn_8004ECC0(void);
extern void fn_80084320(void);
extern void fn_8016E970(void);
extern void fn_80189CB4(void);
extern void fn_8018A8CC(void);
extern void fn_8018B6A0(void);
extern void fn_8018BB7C(void);
extern void fn_8018C0EC(void);
extern void fn_8018C6B8(void);
extern void fn_80219E6C(void);
extern void fn_803CC198(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881974;
extern u32 lbl_80881978;
extern u32 lbl_808819B8;
extern u32 lbl_808819BC;
extern u32 lbl_808819F8;
extern u32 lbl_80881B0C;
extern u32 lbl_80881B20;

/* Function declarations */
void fn_80156120(void);
void fn_801561E4(void);
void fn_801562A0(void);
void fn_80157444(void);
void fn_8015783C(void);

asm void fn_80156120(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    li r31, 0x0
    stw r30, 0x58(r1)
    mr r30, r3
    beq lbl_fn_80156120_000000A8
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f1, 0x528(r3)
    addi r3, r1, 0x14
    lfs f2, 0x528(r4)
    fsubs f3, f3, f0
    lfs f0, lbl_8088196C
    mr r4, r3
    fsubs f1, f2, f1
    stfs f3, 0x1c(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_805F98D0
    lfs f1, lbl_8088196C
    addi r3, r1, 0x20
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_805F9990
    lfs f0, lbl_80881B20
    fcmpo cr0, f1, f0
    ble lbl_fn_80156120_000000A8
    li r31, 0x1
lbl_fn_80156120_000000A8:
    mr r3, r31
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801561E4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f1, lbl_8088196C
    stw r0, 0x64(r1)
    lfs f0, lbl_80881964
    stw r31, 0x5c(r1)
    mr r31, r4
    li r4, 0x79
    stw r30, 0x58(r1)
    mr r30, r3
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x20
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f1, 0x530(r30)
    mr r3, r30
    lfs f0, 0x1c(r1)
    mr r4, r31
    lfs f3, 0x52c(r30)
    addi r5, r1, 0x8
    fadds f4, f1, f0
    lfs f2, 0x18(r1)
    lfs f1, 0x528(r30)
    li r6, 0x0
    lfs f0, 0x14(r1)
    fadds f2, f3, f2
    fadds f0, f1, f0
    stfs f4, 0x10(r1)
    lfs f1, lbl_8088196C
    li r7, 0x0
    stfs f2, 0xc(r1)
    li r8, 0x0
    stfs f0, 0x8(r1)
    li r9, 0x0
    bl fn_801562A0
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801562A0(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x280
    stfd f31, 0x280(r1)
    psq_st f31, 0x288(r1), 0, 0
    bl _savegpr_25
    fmr f31, f1
    cmpwi r4, 0x0
    li r0, 0x0
    lis r31, lbl_8077A720@ha
    stb r0, 0x59d(r3)
    mr r28, r3
    stb r0, 0x59c(r3)
    mr r29, r5
    mr r30, r6
    mr r25, r7
    stb r0, 0x59f(r3)
    mr r26, r9
    addi r31, r31, lbl_8077A720@l
    beq lbl_fn_801562A0_000001E4
    lwz r0, 0x638(r3)
    stw r0, 0x63c(r3)
    stw r4, 0x638(r3)
    b lbl_fn_801562A0_000001F8
lbl_fn_801562A0_000001E4:
    li r3, 0xc8
    bl fn_80219E6C
    lwz r0, 0x638(r28)
    stw r0, 0x63c(r28)
    stw r3, 0x638(r28)
lbl_fn_801562A0_000001F8:
    lfs f5, 0x4(r29)
    addi r27, r1, 0x164
    lfs f4, 0x52c(r28)
    addi r4, r1, 0x11c
    lfs f3, 0x0(r29)
    mr r3, r27
    fsubs f5, f5, f4
    lfs f0, 0x528(r28)
    lfs f4, 0x8(r29)
    fsubs f3, f3, f0
    lfs f0, 0x530(r28)
    stfs f5, 0x120(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_8088196C
    stfs f3, 0x11c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x124(r1)
    stfs f2, 0x16c(r1)
    stfs f0, 0x168(r1)
    bl fn_805F9940
    lfs f0, lbl_808819BC
    mr r3, r27
    fnmsubs f31, f0, f31, f1
    bl fn_805F9920
    lfs f0, lbl_808819B8
    fcmpo cr0, f1, f0
    ble lbl_fn_801562A0_00000278
    mr r3, r27
    mr r4, r27
    bl fn_805F98D0
    b lbl_fn_801562A0_000002C0
lbl_fn_801562A0_00000278:
    lfs f3, lbl_8088196C
    addi r3, r1, 0x170
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f0, 0x118(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x170
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x110
    lfs f2, 0x118(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x16c(r1)
lbl_fn_801562A0_000002C0:
    lwz r3, 0x648(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_000002F0
    lwz r12, 0x0(r3)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r6, 0x0
    lwz r12, 0x18(r12)
    mr r5, r4
    li r7, 0xc8
    mtctr r12
    bctrl
lbl_fn_801562A0_000002F0:
    cmpwi r25, 0x0
    bne lbl_fn_801562A0_000005D0
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    bne lbl_fn_801562A0_00000320
    lwz r3, lbl_8087F0A8
    lwz r0, 0x260(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801562A0_00000320
    lfs f0, 0x8e4(r28)
    fcmpo cr0, f31, f0
    bge lbl_fn_801562A0_000005D0
lbl_fn_801562A0_00000320:
    lis r5, lbl_80737A9C@ha
    li r3, 0x1c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801562A0_0000035C
    mr r4, r28
    addi r5, r1, 0x164
    bl fn_80189CB4
    mr r30, r3
lbl_fn_801562A0_0000035C:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_000003EC
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_00000394
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1a0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1a4(r1)
    stw r0, 0x1a8(r1)
    b lbl_fn_801562A0_000003B0
lbl_fn_801562A0_00000394:
    addi r3, r31, 0x93c
    lwz r5, 0x93c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1a0(r1)
    stw r4, 0x1a4(r1)
    stw r0, 0x1a8(r1)
lbl_fn_801562A0_000003B0:
    lwz r5, 0x1a0(r1)
    addi r3, r1, 0x98
    lwz r4, 0x1a4(r1)
    lwz r0, 0x1a8(r1)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r0, 0xa0(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_000003EC
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_000003EC:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_000005A0
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_00000404
    stw r0, 0x564(r28)
lbl_fn_801562A0_00000404:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_000005A0
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_0000043C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1ac(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1b0(r1)
    stw r0, 0x1b4(r1)
    b lbl_fn_801562A0_00000458
lbl_fn_801562A0_0000043C:
    addi r3, r31, 0x948
    lwz r5, 0x948(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1ac(r1)
    stw r4, 0x1b0(r1)
    stw r0, 0x1b4(r1)
lbl_fn_801562A0_00000458:
    lwz r5, 0x1ac(r1)
    addi r3, r1, 0xb0
    lwz r4, 0x1b0(r1)
    lwz r0, 0x1b4(r1)
    stw r5, 0xb0(r1)
    stw r4, 0xb4(r1)
    stw r0, 0xb8(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00000494
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000494:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_00000570
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_000004AC
    stw r0, 0x564(r28)
lbl_fn_801562A0_000004AC:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00000570
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_000004E4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1b8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1bc(r1)
    stw r0, 0x1c0(r1)
    b lbl_fn_801562A0_00000500
lbl_fn_801562A0_000004E4:
    addi r3, r31, 0x954
    lwz r5, 0x954(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1b8(r1)
    stw r4, 0x1bc(r1)
    stw r0, 0x1c0(r1)
lbl_fn_801562A0_00000500:
    lwz r5, 0x1b8(r1)
    addi r3, r1, 0xa4
    lwz r4, 0x1bc(r1)
    lwz r0, 0x1c0(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r0, 0xac(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_0000053C
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_0000053C:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_00000570
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000570:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_000005A0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_000005A0:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_801562A0_00001304
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_801562A0_00001304
lbl_fn_801562A0_000005D0:
    cmpwi r30, 0x0
    ble lbl_fn_801562A0_00000C3C
    lfs f3, lbl_8088196C
    addi r3, r28, 0xc14
    lfs f0, lbl_80881964
    addi r4, r1, 0xec
    stfs f3, 0xec(r1)
    addi r5, r1, 0xf8
    stfs f0, 0xf0(r1)
    stfs f3, 0xf4(r1)
    bl fn_805F99B0
    lfs f5, 0x100(r1)
    addi r3, r1, 0xe0
    lfs f4, lbl_808819F8
    cmpwi r30, 0x1
    lfs f3, 0xfc(r1)
    addi r27, r1, 0x158
    fmuls f7, f5, f4
    lfs f0, 0xf8(r1)
    fmuls f3, f3, f4
    lfs f6, 0x530(r28)
    fmuls f0, f0, f4
    lfs f4, 0x528(r28)
    fadds f8, f6, f7
    lfs f5, 0x52c(r28)
    fadds f9, f4, f0
    stfs f0, 0x104(r1)
    fadds f0, f5, f3
    stfs f9, 0x158(r1)
    fsubs f2, f8, f6
    fsubs f9, f9, f4
    stfs f0, 0x15c(r1)
    stfs f8, 0x160(r1)
    lfs f0, 0x52c(r28)
    stfs f9, 0xe0(r1)
    fsubs f8, f0, f5
    stfs f0, 0x15c(r1)
    stfs f8, 0xe4(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x108(r1)
    stfs f7, 0x10c(r1)
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x160(r1)
    beq lbl_fn_801562A0_00000690
    cmpwi r30, 0x2
    beq lbl_fn_801562A0_00000988
    b lbl_fn_801562A0_00001304
lbl_fn_801562A0_00000690:
    cmpwi r26, 0x0
    beq lbl_fn_801562A0_000006D4
    lfs f3, 0x52c(r26)
    addi r3, r1, 0xd4
    lfs f0, 0x528(r26)
    fsubs f5, f3, f5
    lfs f3, 0x530(r26)
    fsubs f4, f0, f4
    lfs f0, lbl_8088196C
    stfs f5, 0xd8(r1)
    fsubs f2, f3, f6
    stfs f4, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0xdc(r1)
    stfs f2, 0x160(r1)
    stfs f0, 0x15c(r1)
lbl_fn_801562A0_000006D4:
    lis r5, lbl_80737A9C@ha
    li r3, 0x40
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801562A0_00000714
    mr r4, r28
    mr r5, r29
    addi r6, r1, 0x158
    bl fn_8018BB7C
    mr r30, r3
lbl_fn_801562A0_00000714:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_000007A4
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_0000074C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1c4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1c8(r1)
    stw r0, 0x1cc(r1)
    b lbl_fn_801562A0_00000768
lbl_fn_801562A0_0000074C:
    addi r3, r31, 0x960
    lwz r5, 0x960(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1c4(r1)
    stw r4, 0x1c8(r1)
    stw r0, 0x1cc(r1)
lbl_fn_801562A0_00000768:
    lwz r5, 0x1c4(r1)
    addi r3, r1, 0x74
    lwz r4, 0x1c8(r1)
    lwz r0, 0x1cc(r1)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_000007A4
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_000007A4:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_00000958
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_000007BC
    stw r0, 0x564(r28)
lbl_fn_801562A0_000007BC:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00000958
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_000007F4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1d0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1d4(r1)
    stw r0, 0x1d8(r1)
    b lbl_fn_801562A0_00000810
lbl_fn_801562A0_000007F4:
    addi r3, r31, 0x96c
    lwz r5, 0x96c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1d0(r1)
    stw r4, 0x1d4(r1)
    stw r0, 0x1d8(r1)
lbl_fn_801562A0_00000810:
    lwz r5, 0x1d0(r1)
    addi r3, r1, 0x8c
    lwz r4, 0x1d4(r1)
    lwz r0, 0x1d8(r1)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_0000084C
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_0000084C:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_00000928
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_00000864
    stw r0, 0x564(r28)
lbl_fn_801562A0_00000864:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00000928
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_0000089C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1dc(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1e0(r1)
    stw r0, 0x1e4(r1)
    b lbl_fn_801562A0_000008B8
lbl_fn_801562A0_0000089C:
    addi r3, r31, 0x978
    lwz r5, 0x978(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1dc(r1)
    stw r4, 0x1e0(r1)
    stw r0, 0x1e4(r1)
lbl_fn_801562A0_000008B8:
    lwz r5, 0x1dc(r1)
    addi r3, r1, 0x80
    lwz r4, 0x1e0(r1)
    lwz r0, 0x1e4(r1)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_000008F4
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_000008F4:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_00000928
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000928:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_00000958
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000958:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_801562A0_00001304
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_801562A0_00001304
lbl_fn_801562A0_00000988:
    lis r5, lbl_80737A9C@ha
    li r3, 0x40
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801562A0_000009C8
    mr r4, r28
    mr r5, r29
    mr r6, r27
    bl fn_8018C0EC
    mr r30, r3
lbl_fn_801562A0_000009C8:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00000A58
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_00000A00
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1e8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1ec(r1)
    stw r0, 0x1f0(r1)
    b lbl_fn_801562A0_00000A1C
lbl_fn_801562A0_00000A00:
    addi r3, r31, 0x984
    lwz r5, 0x984(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1e8(r1)
    stw r4, 0x1ec(r1)
    stw r0, 0x1f0(r1)
lbl_fn_801562A0_00000A1C:
    lwz r5, 0x1e8(r1)
    addi r3, r1, 0x50
    lwz r4, 0x1ec(r1)
    lwz r0, 0x1f0(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00000A58
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000A58:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_00000C0C
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_00000A70
    stw r0, 0x564(r28)
lbl_fn_801562A0_00000A70:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00000C0C
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_00000AA8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1f4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1f8(r1)
    stw r0, 0x1fc(r1)
    b lbl_fn_801562A0_00000AC4
lbl_fn_801562A0_00000AA8:
    addi r3, r31, 0x990
    lwz r5, 0x990(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1f4(r1)
    stw r4, 0x1f8(r1)
    stw r0, 0x1fc(r1)
lbl_fn_801562A0_00000AC4:
    lwz r5, 0x1f4(r1)
    addi r3, r1, 0x68
    lwz r4, 0x1f8(r1)
    lwz r0, 0x1fc(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00000B00
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000B00:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_00000BDC
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_00000B18
    stw r0, 0x564(r28)
lbl_fn_801562A0_00000B18:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00000BDC
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_00000B50
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x200(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x204(r1)
    stw r0, 0x208(r1)
    b lbl_fn_801562A0_00000B6C
lbl_fn_801562A0_00000B50:
    addi r3, r31, 0x99c
    lwz r5, 0x99c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x200(r1)
    stw r4, 0x204(r1)
    stw r0, 0x208(r1)
lbl_fn_801562A0_00000B6C:
    lwz r5, 0x200(r1)
    addi r3, r1, 0x5c
    lwz r4, 0x204(r1)
    lwz r0, 0x208(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00000BA8
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000BA8:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_00000BDC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000BDC:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_00000C0C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000C0C:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_801562A0_00001304
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_801562A0_00001304
lbl_fn_801562A0_00000C3C:
    psq_l f1, 0x528(r28), 0, 0
    addi r27, r1, 0x140
    lfs f2, 0x530(r28)
    mr r5, r27
    lfs f4, lbl_80881974
    addi r4, r1, 0x14c
    lfs f0, 0x168(r1)
    addi r6, r1, 0x134
    lfs f3, 0x164(r1)
    li r30, 0x0
    fmuls f7, f0, f4
    lfs f0, 0x16c(r1)
    fmuls f8, f3, f4
    psq_st f1, 0x0(r27), 0, 0
    fmuls f6, f0, f4
    lwz r3, lbl_8087EE98
    stfs f2, 0x148(r1)
    lis r7, 0x8000
    lfs f3, 0x144(r1)
    li r8, 0x0
    lfs f0, 0x52c(r28)
    li r9, 0x0
    lfs f5, 0x530(r28)
    fadds f9, f0, f7
    lfs f4, 0x528(r28)
    lfs f0, lbl_80881978
    fadds f5, f5, f6
    fadds f4, f4, f8
    stfs f8, 0xc8(r1)
    fadds f3, f3, f0
    stfs f7, 0xcc(r1)
    fadds f0, f9, f0
    stfs f6, 0xd0(r1)
    stfs f4, 0x134(r1)
    stfs f5, 0x13c(r1)
    stfs f3, 0x144(r1)
    stfs f0, 0x138(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00000D44
    lfs f3, 0x144(r1)
    mr r5, r27
    lfs f4, lbl_80881B0C
    addi r6, r1, 0x134
    lfs f0, 0x138(r1)
    li r4, 0x0
    fadds f3, f3, f4
    lwz r3, lbl_8087EE98
    fadds f0, f0, f4
    lis r7, 0x8000
    stfs f3, 0x144(r1)
    li r8, 0x0
    stfs f0, 0x138(r1)
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_801562A0_00000D44
    lwz r3, lbl_8087F430
    mr r6, r28
    addi r4, r28, 0x528
    addi r5, r1, 0x164
    lwz r3, 0x10d8(r3)
    bl fn_803CC198
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00000D44
    li r30, 0x1
lbl_fn_801562A0_00000D44:
    cmpwi r30, 0x0
    beq lbl_fn_801562A0_00001058
    addi r3, r1, 0x14c
    lfs f2, 0x154(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r27, r1, 0x128
    psq_st f1, 0x0(r27), 0, 0
    lis r3, lbl_80737A9C@ha
    addi r3, r3, lbl_80737A9C@l
    addi r8, r1, 0xbc
    stfs f2, 0x130(r1)
    addi r5, r3, 0x24
    lfs f3, 0x128(r1)
    mr r6, r5
    lfs f5, 0x52c(r28)
    li r3, 0x40
    stfs f5, 0x12c(r1)
    li r4, 0x0
    li r7, 0x0
    lfs f0, 0x530(r28)
    lfs f4, 0x52c(r28)
    fsubs f2, f2, f0
    lfs f0, 0x528(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0xc4(r1)
    stfs f0, 0xbc(r1)
    stfs f4, 0xc0(r1)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x130(r1)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801562A0_00000DE4
    mr r4, r28
    mr r5, r29
    mr r6, r27
    bl fn_8018BB7C
    mr r30, r3
lbl_fn_801562A0_00000DE4:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00000E74
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_00000E1C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x210(r1)
    stw r0, 0x214(r1)
    b lbl_fn_801562A0_00000E38
lbl_fn_801562A0_00000E1C:
    addi r3, r31, 0x9a8
    lwz r5, 0x9a8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x20c(r1)
    stw r4, 0x210(r1)
    stw r0, 0x214(r1)
lbl_fn_801562A0_00000E38:
    lwz r5, 0x20c(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00000E74
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000E74:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_00001028
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_00000E8C
    stw r0, 0x564(r28)
lbl_fn_801562A0_00000E8C:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00001028
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_00000EC4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x218(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x21c(r1)
    stw r0, 0x220(r1)
    b lbl_fn_801562A0_00000EE0
lbl_fn_801562A0_00000EC4:
    addi r3, r31, 0x9b4
    lwz r5, 0x9b4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x218(r1)
    stw r4, 0x21c(r1)
    stw r0, 0x220(r1)
lbl_fn_801562A0_00000EE0:
    lwz r5, 0x218(r1)
    addi r3, r1, 0x44
    lwz r4, 0x21c(r1)
    lwz r0, 0x220(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00000F1C
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000F1C:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_00000FF8
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_00000F34
    stw r0, 0x564(r28)
lbl_fn_801562A0_00000F34:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00000FF8
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_00000F6C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x224(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x228(r1)
    stw r0, 0x22c(r1)
    b lbl_fn_801562A0_00000F88
lbl_fn_801562A0_00000F6C:
    addi r3, r31, 0x9c0
    lwz r5, 0x9c0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x224(r1)
    stw r4, 0x228(r1)
    stw r0, 0x22c(r1)
lbl_fn_801562A0_00000F88:
    lwz r5, 0x224(r1)
    addi r3, r1, 0x38
    lwz r4, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00000FC4
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000FC4:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_00000FF8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00000FF8:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_00001028
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00001028:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_801562A0_00001304
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_801562A0_00001304
lbl_fn_801562A0_00001058:
    lis r5, lbl_80737A9C@ha
    li r3, 0x34
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801562A0_00001094
    mr r4, r28
    mr r5, r29
    bl fn_8018B6A0
    mr r30, r3
lbl_fn_801562A0_00001094:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_00001124
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_000010CC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x230(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x234(r1)
    stw r0, 0x238(r1)
    b lbl_fn_801562A0_000010E8
lbl_fn_801562A0_000010CC:
    addi r3, r31, 0x9cc
    lwz r5, 0x9cc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x230(r1)
    stw r4, 0x234(r1)
    stw r0, 0x238(r1)
lbl_fn_801562A0_000010E8:
    lwz r5, 0x230(r1)
    addi r3, r1, 0x8
    lwz r4, 0x234(r1)
    lwz r0, 0x238(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00001124
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00001124:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_000012D8
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_0000113C
    stw r0, 0x564(r28)
lbl_fn_801562A0_0000113C:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_000012D8
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_00001174
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x23c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x240(r1)
    stw r0, 0x244(r1)
    b lbl_fn_801562A0_00001190
lbl_fn_801562A0_00001174:
    addi r3, r31, 0x9d8
    lwz r5, 0x9d8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x23c(r1)
    stw r4, 0x240(r1)
    stw r0, 0x244(r1)
lbl_fn_801562A0_00001190:
    lwz r5, 0x23c(r1)
    addi r3, r1, 0x20
    lwz r4, 0x240(r1)
    lwz r0, 0x244(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_000011CC
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_000011CC:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_801562A0_000012A8
    cmpwi r0, 0x8
    beq lbl_fn_801562A0_000011E4
    stw r0, 0x564(r28)
lbl_fn_801562A0_000011E4:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801562A0_000012A8
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801562A0_0000121C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x248(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24c(r1)
    stw r0, 0x250(r1)
    b lbl_fn_801562A0_00001238
lbl_fn_801562A0_0000121C:
    addi r3, r31, 0x9e4
    lwz r5, 0x9e4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x248(r1)
    stw r4, 0x24c(r1)
    stw r0, 0x250(r1)
lbl_fn_801562A0_00001238:
    lwz r5, 0x248(r1)
    addi r3, r1, 0x14
    lwz r4, 0x24c(r1)
    lwz r0, 0x250(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801562A0_00001274
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00001274:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_000012A8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_000012A8:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_801562A0_000012D8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_000012D8:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_801562A0_00001304
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801562A0_00001304:
    addi r11, r1, 0x280
    psq_l f31, 0x288(r1), 0, 0
    lfd f31, 0x280(r1)
    bl _restgpr_25
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_80157444(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    li r6, 0x0
    stw r0, 0xb4(r1)
    li r0, 0x1
    stw r31, 0xac(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xa8(r1)
    mr r30, r5
    stw r29, 0xa4(r1)
    mr r29, r3
    stb r6, 0x59d(r3)
    stb r0, 0x59c(r3)
    stb r6, 0x59f(r3)
    beq lbl_fn_80157444_00001378
    lwz r0, 0x638(r3)
    stw r0, 0x63c(r3)
    stw r4, 0x638(r3)
    b lbl_fn_80157444_0000138C
lbl_fn_80157444_00001378:
    li r3, 0xc8
    bl fn_80219E6C
    lwz r0, 0x638(r29)
    stw r0, 0x63c(r29)
    stw r3, 0x638(r29)
lbl_fn_80157444_0000138C:
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80157444_000013BC
    lwz r12, 0x0(r3)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r6, 0x0
    lwz r12, 0x18(r12)
    mr r5, r4
    li r7, 0xc8
    mtctr r12
    bctrl
lbl_fn_80157444_000013BC:
    lfs f5, 0x8(r30)
    addi r3, r1, 0x38
    lfs f0, 0x530(r29)
    lfs f4, 0x0(r30)
    lfs f3, 0x528(r29)
    fsubs f5, f5, f0
    lfs f0, lbl_8088196C
    fsubs f3, f4, f3
    stfs f5, 0x40(r1)
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_805F9920
    lfs f0, lbl_808819B8
    fcmpo cr0, f1, f0
    ble lbl_fn_80157444_00001408
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_80157444_00001454
lbl_fn_80157444_00001408:
    lfs f3, lbl_8088196C
    addi r3, r1, 0x48
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_80157444_00001454:
    lis r5, lbl_80737A9C@ha
    li r3, 0x1c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80157444_00001490
    mr r4, r29
    addi r5, r1, 0x38
    bl fn_8018A8CC
    mr r30, r3
lbl_fn_80157444_00001490:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80157444_00001520
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80157444_000014C8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x78(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
    b lbl_fn_80157444_000014E4
lbl_fn_80157444_000014C8:
    addi r3, r31, 0x9f0
    lwz r5, 0x9f0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r0, 0x80(r1)
lbl_fn_80157444_000014E4:
    lwz r5, 0x78(r1)
    addi r3, r1, 0x8
    lwz r4, 0x7c(r1)
    lwz r0, 0x80(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80157444_00001520
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80157444_00001520:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80157444_000016D4
    cmpwi r0, 0x8
    beq lbl_fn_80157444_00001538
    stw r0, 0x564(r29)
lbl_fn_80157444_00001538:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80157444_000016D4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80157444_00001570
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x84(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    b lbl_fn_80157444_0000158C
lbl_fn_80157444_00001570:
    addi r3, r31, 0x9fc
    lwz r5, 0x9fc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
lbl_fn_80157444_0000158C:
    lwz r5, 0x84(r1)
    addi r3, r1, 0x20
    lwz r4, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80157444_000015C8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80157444_000015C8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80157444_000016A4
    cmpwi r0, 0x8
    beq lbl_fn_80157444_000015E0
    stw r0, 0x564(r29)
lbl_fn_80157444_000015E0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80157444_000016A4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80157444_00001618
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x90(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x94(r1)
    stw r0, 0x98(r1)
    b lbl_fn_80157444_00001634
lbl_fn_80157444_00001618:
    addi r3, r31, 0xa08
    lwz r5, 0xa08(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x90(r1)
    stw r4, 0x94(r1)
    stw r0, 0x98(r1)
lbl_fn_80157444_00001634:
    lwz r5, 0x90(r1)
    addi r3, r1, 0x14
    lwz r4, 0x94(r1)
    lwz r0, 0x98(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80157444_00001670
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80157444_00001670:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80157444_000016A4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80157444_000016A4:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80157444_000016D4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80157444_000016D4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80157444_00001700
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80157444_00001700:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8015783C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    li r6, 0x1
    stw r0, 0xb4(r1)
    li r0, 0x0
    stw r31, 0xac(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xa8(r1)
    mr r30, r5
    stw r29, 0xa4(r1)
    mr r29, r3
    stb r6, 0x59d(r3)
    stb r0, 0x59c(r3)
    stb r0, 0x59f(r3)
    beq lbl_fn_8015783C_00001770
    lwz r0, 0x638(r3)
    stw r0, 0x63c(r3)
    stw r4, 0x638(r3)
    b lbl_fn_8015783C_00001784
lbl_fn_8015783C_00001770:
    li r3, 0xc8
    bl fn_80219E6C
    lwz r0, 0x638(r29)
    stw r0, 0x63c(r29)
    stw r3, 0x638(r29)
lbl_fn_8015783C_00001784:
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8015783C_000017B4
    lwz r12, 0x0(r3)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r6, 0x0
    lwz r12, 0x18(r12)
    mr r5, r4
    li r7, 0xc8
    mtctr r12
    bctrl
lbl_fn_8015783C_000017B4:
    lfs f5, 0x8(r30)
    addi r3, r1, 0x38
    lfs f0, 0x530(r29)
    lfs f4, 0x0(r30)
    lfs f3, 0x528(r29)
    fsubs f5, f5, f0
    lfs f0, lbl_8088196C
    fsubs f3, f4, f3
    stfs f5, 0x40(r1)
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_805F9920
    lfs f0, lbl_808819B8
    fcmpo cr0, f1, f0
    ble lbl_fn_8015783C_00001800
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_8015783C_0000184C
lbl_fn_8015783C_00001800:
    lfs f3, lbl_8088196C
    addi r3, r1, 0x48
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_8015783C_0000184C:
    lis r5, lbl_80737A9C@ha
    li r3, 0x1c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015783C_00001888
    mr r4, r29
    addi r5, r1, 0x38
    bl fn_8018C6B8
    mr r30, r3
lbl_fn_8015783C_00001888:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015783C_00001918
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015783C_000018C0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x78(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
    b lbl_fn_8015783C_000018DC
lbl_fn_8015783C_000018C0:
    addi r3, r31, 0xa14
    lwz r5, 0xa14(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r0, 0x80(r1)
lbl_fn_8015783C_000018DC:
    lwz r5, 0x78(r1)
    addi r3, r1, 0x8
    lwz r4, 0x7c(r1)
    lwz r0, 0x80(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015783C_00001918
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015783C_00001918:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015783C_00001ACC
    cmpwi r0, 0x8
    beq lbl_fn_8015783C_00001930
    stw r0, 0x564(r29)
lbl_fn_8015783C_00001930:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015783C_00001ACC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015783C_00001968
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x84(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    b lbl_fn_8015783C_00001984
lbl_fn_8015783C_00001968:
    addi r3, r31, 0xa20
    lwz r5, 0xa20(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
lbl_fn_8015783C_00001984:
    lwz r5, 0x84(r1)
    addi r3, r1, 0x20
    lwz r4, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015783C_000019C0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015783C_000019C0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015783C_00001A9C
    cmpwi r0, 0x8
    beq lbl_fn_8015783C_000019D8
    stw r0, 0x564(r29)
lbl_fn_8015783C_000019D8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015783C_00001A9C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015783C_00001A10
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x90(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x94(r1)
    stw r0, 0x98(r1)
    b lbl_fn_8015783C_00001A2C
lbl_fn_8015783C_00001A10:
    addi r3, r31, 0xa2c
    lwz r5, 0xa2c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x90(r1)
    stw r4, 0x94(r1)
    stw r0, 0x98(r1)
lbl_fn_8015783C_00001A2C:
    lwz r5, 0x90(r1)
    addi r3, r1, 0x14
    lwz r4, 0x94(r1)
    lwz r0, 0x98(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015783C_00001A68
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015783C_00001A68:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015783C_00001A9C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015783C_00001A9C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015783C_00001ACC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015783C_00001ACC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015783C_00001AF8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015783C_00001AF8:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
