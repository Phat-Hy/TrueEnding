#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800904E0(void);
extern void fn_8009ADA4(void);
extern void fn_800A693C(void);
extern void fn_805F89F0(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068A918(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEB0(void);

/* External data declarations */
extern u8 jumptable_80778AD8[];
extern u8 lbl_80732988[];
extern u8 lbl_807329E8[];
extern u8 lbl_80778C10[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EF80;
extern u32 lbl_80880CC0;
extern u32 lbl_80880CC8;
extern u32 lbl_80880CCC;
extern u32 lbl_80880CD0;
extern u32 lbl_80880CD4;
extern u32 lbl_80880CD8;

/* Function declarations */
void fn_800A6BD4(void);
void fn_800A6BDC(void);
void fn_800A6E8C(void);
void fn_800A6F7C(void);
void fn_800A6F88(void);
void fn_800A6FF0(void);
void fn_800A70EC(void);
void fn_800A70F4(void);
void fn_800A72B0(void);
void fn_800A72F0(void);
void fn_800A72F8(void);
void fn_800A7314(void);
void fn_800A7354(void);
void fn_800A735C(void);
void fn_800A7364(void);
void fn_800A73A4(void);
void fn_800A787C(void);
void fn_800A78E0(void);
void fn_800A794C(void);
void fn_800A7ACC(void);

asm void fn_800A6BD4(void)
{
    nofralloc
    stfs f1, lbl_8087EF80
    b fn_800A6BDC
}

asm void fn_800A6BDC(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    bl _savegpr_26
    lfs f31, lbl_80880CC0
    lis r4, lbl_80732988@ha
    stfs f31, 0x10(r1)
    mr r28, r3
    lfd f30, lbl_80732988@l(r4)
    addi r31, r1, 0x10
    li r29, 0x0
    lis r27, 0x4330
    lis r30, jumptable_80778AD8@ha
    b lbl_fn_800A6BDC_00000280
lbl_fn_800A6BDC_00000054:
    cmplwi r0, 0x10
    bgt lbl_fn_800A6BDC_00000280
    addi r3, r30, jumptable_80778AD8@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stfs f31, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r28, 0x1
    li r5, 0x4
    bl memcpy
    slwi r0, r29, 2
    lfs f0, 0x8(r1)
    stfsx f0, r31, r0
    addi r28, r28, 0x5
    addi r29, r29, 0x1
    b lbl_fn_800A6BDC_00000280
    lwz r3, 0x1(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800A6BDC_000000BC
    slwi r0, r29, 2
    lfs f0, 0x0(r3)
    stfsx f0, r31, r0
    addi r29, r29, 0x1
    b lbl_fn_800A6BDC_000000C8
lbl_fn_800A6BDC_000000BC:
    slwi r0, r29, 2
    addi r29, r29, 0x1
    stfsx f31, r31, r0
lbl_fn_800A6BDC_000000C8:
    addi r28, r28, 0x5
    b lbl_fn_800A6BDC_00000280
    slwi r0, r29, 2
    addi r3, r1, 0x10
    add r3, r3, r0
    subi r29, r29, 0x1
    lfs f1, -0x8(r3)
    addi r28, r28, 0x1
    lfs f0, -0x4(r3)
    fadds f0, f1, f0
    stfs f0, -0x8(r3)
    b lbl_fn_800A6BDC_00000280
    slwi r0, r29, 2
    addi r3, r1, 0x10
    add r3, r3, r0
    subi r29, r29, 0x1
    lfs f1, -0x8(r3)
    addi r28, r28, 0x1
    lfs f0, -0x4(r3)
    fsubs f0, f1, f0
    stfs f0, -0x8(r3)
    b lbl_fn_800A6BDC_00000280
    slwi r0, r29, 2
    addi r3, r1, 0x10
    add r3, r3, r0
    subi r29, r29, 0x1
    lfs f1, -0x8(r3)
    addi r28, r28, 0x1
    lfs f0, -0x4(r3)
    fmuls f0, f1, f0
    stfs f0, -0x8(r3)
    b lbl_fn_800A6BDC_00000280
    slwi r0, r29, 2
    addi r3, r1, 0x10
    add r3, r3, r0
    subi r29, r29, 0x1
    lfs f1, -0x8(r3)
    addi r28, r28, 0x1
    lfs f0, -0x4(r3)
    fdivs f0, f1, f0
    stfs f0, -0x8(r3)
    b lbl_fn_800A6BDC_00000280
    slwi r0, r29, 2
    addi r5, r1, 0x10
    add r5, r5, r0
    stw r27, 0xa0(r1)
    lfs f1, -0x8(r5)
    subi r29, r29, 0x1
    lfs f0, -0x4(r5)
    addi r28, r28, 0x1
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x90(r1)
    stfd f0, 0x98(r1)
    lwz r4, 0x94(r1)
    lwz r3, 0x9c(r1)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f30
    stfs f0, -0x8(r5)
    b lbl_fn_800A6BDC_00000280
    slwi r0, r29, 2
    addi r3, r1, 0x10
    add r3, r3, r0
    addi r28, r28, 0x1
    lfs f1, -0x8(r3)
    lfs f0, -0x4(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_800A6BDC_000001F0
    b lbl_fn_800A6BDC_000001F4
lbl_fn_800A6BDC_000001F0:
    fmr f1, f0
lbl_fn_800A6BDC_000001F4:
    stfs f1, -0x8(r3)
    subi r29, r29, 0x1
    b lbl_fn_800A6BDC_00000280
    slwi r0, r29, 2
    addi r3, r1, 0x10
    add r3, r3, r0
    addi r28, r28, 0x1
    lfs f1, -0x8(r3)
    lfs f0, -0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_800A6BDC_00000224
    b lbl_fn_800A6BDC_00000228
lbl_fn_800A6BDC_00000224:
    fmr f1, f0
lbl_fn_800A6BDC_00000228:
    stfs f1, -0x8(r3)
    subi r29, r29, 0x1
    b lbl_fn_800A6BDC_00000280
    slwi r0, r29, 2
    addi r26, r1, 0x10
    add r26, r26, r0
    addi r28, r28, 0x1
    lfs f2, -0x4(r26)
    lfs f1, -0x8(r26)
    bl fn_8068AEB0
    frsp f0, f1
    subi r29, r29, 0x1
    stfs f0, -0x8(r26)
    b lbl_fn_800A6BDC_00000280
    slwi r0, r29, 2
    addi r28, r28, 0x1
    add r26, r31, r0
    lfs f1, -0x8(r26)
    bl fn_8068A918
    frsp f0, f1
    subi r29, r29, 0x1
    stfs f0, -0x8(r26)
lbl_fn_800A6BDC_00000280:
    lbz r0, 0x0(r28)
    cmplwi r0, 0xff
    bne lbl_fn_800A6BDC_00000054
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    addi r11, r1, 0xc0
    lfs f1, 0x10(r1)
    bl _restgpr_26
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_800A6E8C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    mr r28, r4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A6E8C_00000394
    lwz r30, 0x4(r3)
    la r31, lbl_8087EF80
    b lbl_fn_800A6E8C_00000380
    b lbl_fn_800A6E8C_00000370
lbl_fn_800A6E8C_000002EC:
    subi r0, r3, 0x2
    cmplwi r0, 0x7
    ble lbl_fn_800A6E8C_0000036C
    cmpwi r3, 0x0
    beq lbl_fn_800A6E8C_00000314
    cmpwi r3, 0x1
    beq lbl_fn_800A6E8C_0000031C
    cmpwi r3, 0x10
    beq lbl_fn_800A6E8C_0000036C
    b lbl_fn_800A6E8C_00000370
lbl_fn_800A6E8C_00000314:
    addi r30, r30, 0x5
    b lbl_fn_800A6E8C_00000370
lbl_fn_800A6E8C_0000031C:
    addi r29, r30, 0x1
    addi r3, r1, 0x8
    mr r4, r29
    li r5, 0x4
    bl memcpy
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800A6E8C_00000364
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_800A6E8C_00000350
    stw r31, 0x0(r29)
    b lbl_fn_800A6E8C_00000364
lbl_fn_800A6E8C_00000350:
    subi r0, r3, 0x1
    lwz r3, 0x0(r28)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    stw r0, 0x0(r29)
lbl_fn_800A6E8C_00000364:
    addi r30, r30, 0x5
    b lbl_fn_800A6E8C_00000370
lbl_fn_800A6E8C_0000036C:
    addi r30, r30, 0x1
lbl_fn_800A6E8C_00000370:
    lbz r3, 0x0(r30)
    cmplwi r3, 0xff
    bne lbl_fn_800A6E8C_000002EC
    addi r30, r30, 0x1
lbl_fn_800A6E8C_00000380:
    lwz r3, 0x4(r27)
    lwz r0, 0x0(r27)
    add r0, r3, r0
    cmplw r30, r0
    blt lbl_fn_800A6E8C_00000370
lbl_fn_800A6E8C_00000394:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800A6F7C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_800A6F88(void)
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
    beq lbl_fn_800A6F88_00000400
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800A6F88_000003F0
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_800A6F88_000003F0:
    cmpwi r31, 0x0
    ble lbl_fn_800A6F88_00000400
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A6F88_00000400:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A6FF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r4
    beq lbl_fn_800A6FF0_0000044C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800A6FF0_00000454
lbl_fn_800A6FF0_0000044C:
    li r3, 0x0
    b lbl_fn_800A6FF0_00000500
lbl_fn_800A6FF0_00000454:
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800A6FF0_0000046C
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_800A6FF0_0000046C:
    lwz r4, 0x14(r30)
    addi r3, r4, 0x1
    slwi r0, r3, 2
    add r0, r0, r3
    add r3, r4, r0
    addi r3, r3, 0x1
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_800A6FF0_000004A0
    addi r3, r3, 0x1
lbl_fn_800A6FF0_000004A0:
    lis r5, lbl_807329E8@ha
    li r4, 0x8
    addi r5, r5, lbl_807329E8@l
    li r7, 0x0
    addi r5, r5, 0x14
    mr r6, r5
    bl fn_800846FC
    stw r3, 0x0(r31)
    li r0, 0x0
    mr r31, r3
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    lwz r4, 0x4(r30)
    bl fn_800A693C
    lwz r3, 0x8(r1)
    li r4, 0xff
    addi r0, r3, 0x1
    stbx r4, r31, r3
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    cmpwi r0, 0x1
    li r3, 0x1
lbl_fn_800A6FF0_00000500:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A70EC(void)
{
    nofralloc
    li r3, 0x3
    blr
}

asm void fn_800A70F4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A70F4_00000564
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    fmr f31, f1
    b lbl_fn_800A70F4_00000568
lbl_fn_800A70F4_00000564:
    lfs f31, lbl_80880CC0
lbl_fn_800A70F4_00000568:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800A70F4_0000058C
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    fmr f2, f1
    b lbl_fn_800A70F4_00000590
lbl_fn_800A70F4_0000058C:
    lfs f2, lbl_80880CC0
lbl_fn_800A70F4_00000590:
    lbz r0, 0x4(r31)
    extsb r0, r0
    cmpwi r0, 0x69
    beq lbl_fn_800A70F4_000006AC
    bge lbl_fn_800A70F4_000005D4
    cmpwi r0, 0x2d
    beq lbl_fn_800A70F4_0000060C
    bge lbl_fn_800A70F4_000005C8
    cmpwi r0, 0x2b
    beq lbl_fn_800A70F4_00000604
    bge lbl_fn_800A70F4_000006BC
    cmpwi r0, 0x2a
    bge lbl_fn_800A70F4_00000614
    b lbl_fn_800A70F4_000006BC
lbl_fn_800A70F4_000005C8:
    cmpwi r0, 0x2f
    beq lbl_fn_800A70F4_0000061C
    b lbl_fn_800A70F4_000006BC
lbl_fn_800A70F4_000005D4:
    cmpwi r0, 0x70
    beq lbl_fn_800A70F4_0000069C
    bge lbl_fn_800A70F4_000005F8
    cmpwi r0, 0x6e
    beq lbl_fn_800A70F4_00000684
    bge lbl_fn_800A70F4_000006BC
    cmpwi r0, 0x6d
    bge lbl_fn_800A70F4_00000624
    b lbl_fn_800A70F4_000006BC
lbl_fn_800A70F4_000005F8:
    cmpwi r0, 0x78
    beq lbl_fn_800A70F4_0000066C
    b lbl_fn_800A70F4_000006BC
lbl_fn_800A70F4_00000604:
    fadds f1, f31, f2
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_0000060C:
    fsubs f1, f31, f2
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_00000614:
    fmuls f1, f31, f2
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_0000061C:
    fdivs f1, f31, f2
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_00000624:
    fctiwz f1, f31
    lis r0, 0x4330
    fctiwz f0, f2
    lis r3, lbl_80732988@ha
    stfd f1, 0x8(r1)
    lfd f1, lbl_80732988@l(r3)
    stfd f0, 0x10(r1)
    lwz r4, 0xc(r1)
    lwz r3, 0x14(r1)
    stw r0, 0x18(r1)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_0000066C:
    fcmpo cr0, f31, f2
    ble lbl_fn_800A70F4_0000067C
    fmr f1, f31
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_0000067C:
    fmr f1, f2
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_00000684:
    fcmpo cr0, f31, f2
    bge lbl_fn_800A70F4_00000694
    fmr f1, f31
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_00000694:
    fmr f1, f2
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_0000069C:
    fmr f1, f31
    bl fn_8068AEB0
    frsp f1, f1
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_000006AC:
    fmr f1, f31
    bl fn_8068A918
    frsp f1, f1
    b lbl_fn_800A70F4_000006C0
lbl_fn_800A70F4_000006BC:
    lfs f1, lbl_80880CC0
lbl_fn_800A70F4_000006C0:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800A72B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A72B0_00000704
    cmpwi r4, 0x0
    ble lbl_fn_800A72B0_00000704
    bl dtor_80084684
lbl_fn_800A72B0_00000704:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A72F0(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_800A72F8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800A72F8_00000738
    lfs f1, 0x0(r3)
    blr
lbl_fn_800A72F8_00000738:
    lfs f1, lbl_80880CC0
    blr
}

asm void fn_800A7314(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A7314_00000768
    cmpwi r4, 0x0
    ble lbl_fn_800A7314_00000768
    bl dtor_80084684
lbl_fn_800A7314_00000768:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A7354(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_800A735C(void)
{
    nofralloc
    lfs f1, 0x4(r3)
    blr
}

asm void fn_800A7364(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A7364_000007B8
    cmpwi r4, 0x0
    ble lbl_fn_800A7364_000007B8
    bl dtor_80084684
lbl_fn_800A7364_000007B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A73A4(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    lfs f0, lbl_80880CC8
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stw r31, 0x21c(r1)
    stw r30, 0x218(r1)
    mr r30, r4
    stw r29, 0x214(r1)
    mr r29, r3
    lfs f2, 0x0(r4)
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800A73A4_00000844
    lfs f3, 0x8(r4)
    lfs f0, lbl_80880CD4
    fcmpo cr0, f3, f0
    ble lbl_fn_800A73A4_00000830
    lfs f3, lbl_80880CCC
    b lbl_fn_800A73A4_00000834
lbl_fn_800A73A4_00000830:
    lfs f3, lbl_80880CD0
lbl_fn_800A73A4_00000834:
    lfs f0, lbl_80880CD4
    stfs f3, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_fn_800A73A4_00000C74
lbl_fn_800A73A4_00000844:
    lfs f0, lbl_80880CD4
    fcmpo cr0, f2, f0
    bge lbl_fn_800A73A4_00000A64
    fneg f2, f2
    lfs f1, 0x8(r4)
    bl fn_8068AEA4
    frsp f0, f1
    addi r3, r1, 0x1d8
    li r4, 0x79
    fneg f0, f0
    stfs f0, 0x4(r29)
    frsp f1, f0
    bl fn_805F8E70
    psq_l f1, 0x0(r30), 0, 0
    addi r4, r1, 0xbc
    lfs f2, 0x8(r30)
    mr r5, r4
    stfs f2, 0xc4(r1)
    addi r3, r1, 0x1d8
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F93C0
    lfs f2, 0x8(r30)
    addi r31, r1, 0xb0
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80880CC8
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_800A73A4_000008E4
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80880CD4
    fcmpo cr0, f3, f0
    ble lbl_fn_800A73A4_000008D8
    lfs f0, lbl_80880CCC
    b lbl_fn_800A73A4_000008DC
lbl_fn_800A73A4_000008D8:
    lfs f0, lbl_80880CD0
lbl_fn_800A73A4_000008DC:
    stfs f0, 0x90(r1)
    b lbl_fn_800A73A4_000008F8
lbl_fn_800A73A4_000008E4:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_800A73A4_000008F8:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80880CD4
    addi r4, r1, 0x80
    lfs f30, 0x140(r1)
    mr r5, r4
    lfs f31, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f13, 0x138(r1)
    lfs f12, 0x150(r1)
    lfs f11, 0x14c(r1)
    lfs f10, 0x148(r1)
    lfs f9, 0x160(r1)
    lfs f8, 0x15c(r1)
    lfs f7, 0x158(r1)
    lfs f6, 0x164(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x144(r1)
    lfs f0, lbl_80880CD8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x168(r1)
    stfs f31, 0x16c(r1)
    stfs f30, 0x170(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80880CC8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800A73A4_00000A14
    lfs f3, 0x84(r1)
    lfs f0, lbl_80880CD4
    fcmpo cr0, f3, f0
    ble lbl_fn_800A73A4_00000A04
    lfs f0, lbl_80880CCC
    b lbl_fn_800A73A4_00000A08
lbl_fn_800A73A4_00000A04:
    lfs f0, lbl_80880CD0
lbl_fn_800A73A4_00000A08:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_800A73A4_00000A28
lbl_fn_800A73A4_00000A14:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_800A73A4_00000A28:
    lfs f0, lbl_80880CD4
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    lfs f4, 0xbc(r1)
    lfs f3, 0xc0(r1)
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f3
    stfs f2, 0xb8(r1)
    fmr f2, f4
    stfs f0, 0x94(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x8(r29)
    b lbl_fn_800A73A4_00000C74
lbl_fn_800A73A4_00000A64:
    lfs f1, 0x8(r4)
    bl fn_8068AEA4
    frsp f0, f1
    addi r3, r1, 0x1a8
    li r4, 0x79
    fneg f0, f0
    stfs f0, 0x4(r29)
    frsp f0, f0
    fneg f1, f0
    bl fn_805F8E70
    psq_l f1, 0x0(r30), 0, 0
    addi r4, r1, 0xa4
    lfs f2, 0x8(r30)
    mr r5, r4
    stfs f2, 0xac(r1)
    addi r3, r1, 0x1a8
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F93C0
    lfs f2, 0x8(r30)
    addi r31, r1, 0x98
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80880CC8
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_800A73A4_00000AF8
    lfs f3, 0x98(r1)
    lfs f0, lbl_80880CD4
    fcmpo cr0, f3, f0
    ble lbl_fn_800A73A4_00000AEC
    lfs f0, lbl_80880CCC
    b lbl_fn_800A73A4_00000AF0
lbl_fn_800A73A4_00000AEC:
    lfs f0, lbl_80880CD0
lbl_fn_800A73A4_00000AF0:
    stfs f0, 0x48(r1)
    b lbl_fn_800A73A4_00000B0C
lbl_fn_800A73A4_00000AF8:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_800A73A4_00000B0C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80880CD4
    addi r4, r1, 0x38
    lfs f31, 0xd0(r1)
    mr r5, r4
    lfs f30, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80880CD8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0xf8(r1)
    stfs f30, 0xfc(r1)
    stfs f31, 0x100(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80880CC8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800A73A4_00000C28
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80880CD4
    fcmpo cr0, f3, f0
    ble lbl_fn_800A73A4_00000C18
    lfs f0, lbl_80880CCC
    b lbl_fn_800A73A4_00000C1C
lbl_fn_800A73A4_00000C18:
    lfs f0, lbl_80880CD0
lbl_fn_800A73A4_00000C1C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_800A73A4_00000C3C
lbl_fn_800A73A4_00000C28:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_800A73A4_00000C3C:
    lfs f0, lbl_80880CD4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    lfs f4, 0xa4(r1)
    lfs f3, 0xa8(r1)
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f3
    stfs f2, 0xa0(r1)
    fmr f2, f4
    stfs f0, 0x4c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x8(r29)
lbl_fn_800A73A4_00000C74:
    lfs f0, lbl_80880CD4
    stfs f0, 0x0(r29)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_800A787C(void)
{
    nofralloc
    lfs f0, lbl_80880CD4
    lis r5, lbl_80778C10@ha
    li r0, 0x0
    li r4, 0x1
    addi r5, r5, lbl_80778C10@l
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stw r0, 0x64(r3)
    stw r0, 0x68(r3)
    stw r0, 0x6c(r3)
    stw r0, 0x70(r3)
    stw r0, 0x74(r3)
    blr
}

asm void fn_800A78E0(void)
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
    beq lbl_fn_800A78E0_00000D5C
    addic. r0, r3, 0x6c
    beq lbl_fn_800A78E0_00000D4C
    lwz r0, 0x6c(r3)
    srwi. r0, r0, 31
    beq lbl_fn_800A78E0_00000D4C
    lwz r3, 0x74(r3)
    bl dtor_80084684
lbl_fn_800A78E0_00000D4C:
    cmpwi r31, 0x0
    ble lbl_fn_800A78E0_00000D5C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A78E0_00000D5C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A794C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x38(r3)
    lwz r4, 0x64(r3)
    cmpwi r0, 0x0
    bge lbl_fn_800A794C_00000DA8
    li r6, 0x0
    b lbl_fn_800A794C_00000DB4
lbl_fn_800A794C_00000DA8:
    mulli r0, r0, 0x30
    lwz r4, 0x3c(r4)
    add r6, r4, r0
lbl_fn_800A794C_00000DB4:
    lfs f0, 0x1c(r6)
    addi r5, r1, 0x38
    lwz r0, 0x3c(r3)
    addi r4, r1, 0x50
    lfs f3, 0xc(r6)
    lfs f2, 0x2c(r6)
    cmpwi r0, 0x0
    stfs f3, 0x38(r1)
    lwz r3, 0x64(r3)
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    bge lbl_fn_800A794C_00000DF8
    li r3, 0x0
    b lbl_fn_800A794C_00000E04
lbl_fn_800A794C_00000DF8:
    mulli r0, r0, 0x30
    lwz r3, 0x3c(r3)
    add r3, r3, r0
lbl_fn_800A794C_00000E04:
    lfs f3, 0x1c(r3)
    addi r5, r1, 0x2c
    lfs f2, 0x2c(r3)
    addi r4, r1, 0x44
    lfs f0, 0xc(r3)
    addi r3, r1, 0x20
    stfs f0, 0x2c(r1)
    lfs f0, 0x58(r1)
    stfs f3, 0x30(r1)
    frsp f3, f2
    lfs f4, 0x54(r1)
    psq_l f1, 0x0(r5), 0, 0
    fsubs f6, f3, f0
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x50(r1)
    lfs f5, 0x48(r1)
    lfs f3, 0x44(r1)
    fsubs f4, f5, f4
    stfs f2, 0x34(r1)
    fsubs f0, f3, f0
    stfs f2, 0x4c(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9940
    lfs f3, 0x4c(r1)
    addi r31, r1, 0x14
    lfs f0, 0x58(r1)
    addi r5, r1, 0x8
    lfs f5, 0x48(r1)
    mr r3, r31
    fsubs f2, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x44(r1)
    mr r4, r31
    lfs f0, 0x50(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f1, 0x5c(r30)
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r31), 0, 0
    mr r3, r30
    lfs f2, 0x1c(r1)
    stfs f2, 0x1c(r30)
    psq_st f1, 0x14(r30), 0, 0
    lwz r12, 0x0(r30)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800A7ACC(void)
{
    nofralloc
    stwu r1, -0x3b0(r1)
    mflr r0
    stw r0, 0x3b4(r1)
    stw r31, 0x3ac(r1)
    stw r30, 0x3a8(r1)
    mr r30, r3
    stw r29, 0x3a4(r1)
    stw r28, 0x3a0(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A7ACC_00001604
    lwz r0, 0x38(r3)
    lwz r5, 0x64(r3)
    cmpwi r0, 0x0
    bge lbl_fn_800A7ACC_00000F3C
    li r31, 0x0
    b lbl_fn_800A7ACC_00000F48
lbl_fn_800A7ACC_00000F3C:
    mulli r0, r0, 0x30
    lwz r4, 0x3c(r5)
    add r31, r4, r0
lbl_fn_800A7ACC_00000F48:
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    bge lbl_fn_800A7ACC_00000F5C
    li r0, 0x0
    b lbl_fn_800A7ACC_00000F68
lbl_fn_800A7ACC_00000F5C:
    mulli r0, r0, 0x30
    lwz r4, 0x3c(r5)
    add r0, r4, r0
lbl_fn_800A7ACC_00000F68:
    cmpwi r31, 0x0
    beq lbl_fn_800A7ACC_00001604
    cmpwi r0, 0x0
    bne lbl_fn_800A7ACC_00000F7C
    b lbl_fn_800A7ACC_00001604
lbl_fn_800A7ACC_00000F7C:
    lfs f7, lbl_80880CD4
    li r0, 0x0
    lfs f0, 0x14(r3)
    fcmpu cr0, f7, f0
    bne lbl_fn_800A7ACC_00000FAC
    lfs f0, 0x18(r3)
    fcmpu cr0, f7, f0
    bne lbl_fn_800A7ACC_00000FAC
    lfs f0, 0x1c(r3)
    fcmpu cr0, f7, f0
    bne lbl_fn_800A7ACC_00000FAC
    li r0, 0x1
lbl_fn_800A7ACC_00000FAC:
    cmpwi r0, 0x0
    beq lbl_fn_800A7ACC_00000FC8
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_800A7ACC_00000FC8:
    lwz r12, 0x0(r30)
    mr r3, r30
    lfs f0, 0x2c(r31)
    lwz r12, 0x34(r12)
    lfs f7, 0x1c(r31)
    lfs f8, 0xc(r31)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f0, 0x64(r1)
    mtctr r12
    bctrl
    lfs f7, 0x14(r30)
    addi r29, r1, 0x2f0
    lfs f0, 0x20(r30)
    addi r5, r1, 0x320
    lfs f9, 0x18(r30)
    mr r3, r29
    fadds f10, f7, f0
    lfs f8, 0x24(r30)
    lfs f7, 0x1c(r30)
    mr r4, r29
    lfs f0, 0x28(r30)
    fadds f8, f9, f8
    fadds f7, f7, f0
    stfs f10, 0x14(r30)
    lfs f0, lbl_80880CD4
    stfs f8, 0x18(r30)
    stfs f7, 0x1c(r30)
    psq_l f1, 0x0(r31), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    stfs f0, 0x32c(r1)
    stfs f0, 0x33c(r1)
    psq_l f2, 0x8(r5), 0, 0
    stfs f0, 0x34c(r1)
    psq_l f4, 0x18(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    bl fn_805F8CA0
    lfs f0, lbl_80880CD4
    addi r28, r1, 0x44
    stfs f0, 0x50(r1)
    mr r3, r28
    mr r4, r28
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    psq_l f1, 0x14(r30), 0, 0
    lfs f2, 0x1c(r30)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F98D0
    mr r3, r29
    mr r4, r28
    mr r5, r28
    bl fn_805F93C0
    mr r4, r28
    addi r3, r1, 0x50
    bl fn_800A73A4
    lfs f7, 0x54(r1)
    lfs f0, 0x48(r30)
    fcmpo cr0, f7, f0
    bge lbl_fn_800A7ACC_000010FC
    stfs f0, 0x54(r1)
lbl_fn_800A7ACC_000010FC:
    lfs f7, 0x54(r1)
    lfs f0, 0x54(r30)
    fcmpo cr0, f7, f0
    ble lbl_fn_800A7ACC_00001110
    stfs f0, 0x54(r1)
lbl_fn_800A7ACC_00001110:
    lfs f7, 0x58(r1)
    lfs f0, 0x4c(r30)
    fcmpo cr0, f7, f0
    bge lbl_fn_800A7ACC_00001124
    stfs f0, 0x58(r1)
lbl_fn_800A7ACC_00001124:
    lfs f7, 0x58(r1)
    lfs f0, 0x58(r30)
    fcmpo cr0, f7, f0
    ble lbl_fn_800A7ACC_00001138
    stfs f0, 0x58(r1)
lbl_fn_800A7ACC_00001138:
    lfs f2, lbl_80880CD4
    addi r3, r1, 0x2c
    lfs f0, lbl_80880CD8
    addi r28, r1, 0x290
    stfs f0, 0x2c(r1)
    stfs f2, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x14(r30), 0, 0
    stfs f2, 0x1c(r30)
    lfs f1, 0x58(r1)
    stfs f0, 0x38(r1)
    fcmpu cr0, f2, f1
    stfs f2, 0xc(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x2bc(r1)
    stfs f2, 0x2b4(r1)
    stfs f2, 0x2b0(r1)
    stfs f2, 0x2ac(r1)
    stfs f2, 0x2a8(r1)
    stfs f2, 0x2a0(r1)
    stfs f2, 0x29c(r1)
    stfs f2, 0x298(r1)
    stfs f2, 0x294(r1)
    stfs f0, 0x2b8(r1)
    stfs f0, 0x2a4(r1)
    stfs f0, 0x290(r1)
    beq lbl_fn_800A7ACC_000011F8
    addi r3, r1, 0x170
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x170
    addi r5, r1, 0x140
    bl fn_805F89F0
    addi r3, r1, 0x140
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_800A7ACC_000011F8:
    lfs f0, lbl_80880CD4
    lfs f1, 0x54(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_800A7ACC_00001258
    addi r3, r1, 0x1d0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1d0
    addi r5, r1, 0x1a0
    bl fn_805F89F0
    addi r3, r1, 0x1a0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_800A7ACC_00001258:
    lfs f0, lbl_80880CD4
    lfs f1, 0x50(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_800A7ACC_000012B8
    addi r3, r1, 0x230
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x230
    addi r5, r1, 0x200
    bl fn_805F89F0
    addi r3, r1, 0x200
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_800A7ACC_000012B8:
    addi r4, r30, 0x14
    addi r3, r1, 0x290
    mr r5, r4
    bl fn_805F93C0
    addi r4, r30, 0x14
    addi r3, r1, 0x320
    mr r5, r4
    bl fn_805F93C0
    lfs f11, 0x5c(r30)
    addi r3, r1, 0x110
    lfs f8, 0x14(r30)
    li r4, 0x79
    lfs f7, 0x18(r30)
    fmuls f10, f8, f11
    lfs f0, 0x1c(r30)
    fmuls f9, f7, f11
    lfs f7, lbl_80880CD4
    fmuls f8, f0, f11
    stfs f10, 0x14(r30)
    stfs f9, 0x18(r30)
    lfs f0, lbl_80880CD8
    stfs f8, 0x1c(r30)
    lfs f1, 0x54(r1)
    stfs f7, 0x2ec(r1)
    stfs f7, 0x2e4(r1)
    stfs f7, 0x2e0(r1)
    stfs f7, 0x2dc(r1)
    stfs f7, 0x2d8(r1)
    stfs f7, 0x2d0(r1)
    stfs f7, 0x2cc(r1)
    stfs f7, 0x2c8(r1)
    stfs f7, 0x2c4(r1)
    stfs f0, 0x2e8(r1)
    stfs f0, 0x2d4(r1)
    stfs f0, 0x2c0(r1)
    bl fn_805F8E70
    addi r3, r1, 0x2c0
    addi r4, r1, 0x110
    addi r5, r1, 0xe0
    bl fn_805F89F0
    addi r5, r1, 0xe0
    lfs f0, 0x58(r1)
    addi r28, r1, 0x2c0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    fmr f1, f0
    psq_l f2, 0x8(r5), 0, 0
    addi r3, r1, 0xb0
    psq_l f3, 0x10(r5), 0, 0
    li r4, 0x7a
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0xb0
    addi r5, r1, 0x80
    bl fn_805F89F0
    addi r6, r1, 0x80
    mr r3, r31
    psq_l f1, 0x0(r6), 0, 0
    mr r4, r28
    psq_l f2, 0x8(r6), 0, 0
    addi r5, r1, 0x260
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    bl fn_805F89F0
    addi r3, r1, 0x260
    lfs f11, 0x5c(r1)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f10, 0x60(r1)
    psq_st f2, 0x8(r31), 0, 0
    lfs f9, 0x64(r1)
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    stfs f11, 0xc(r31)
    stfs f10, 0x1c(r31)
    stfs f9, 0x2c(r31)
    lfs f8, 0x1c(r30)
    lfs f7, 0x18(r30)
    lfs f0, 0x14(r30)
    fadds f8, f9, f8
    lwz r0, 0x3c(r30)
    fadds f7, f10, f7
    fadds f0, f11, f0
    stfs f8, 0x28(r1)
    cmpwi r0, 0x0
    stfs f0, 0x20(r1)
    lwz r3, 0x64(r30)
    stfs f7, 0x24(r1)
    bge lbl_fn_800A7ACC_00001480
    li r4, 0x0
    b lbl_fn_800A7ACC_0000148C
lbl_fn_800A7ACC_00001480:
    mulli r0, r0, 0x30
    lwz r3, 0x3c(r3)
    add r4, r3, r0
lbl_fn_800A7ACC_0000148C:
    lfs f0, 0x20(r1)
    li r0, 0x0
    stfs f0, 0xc(r4)
    addi r3, r1, 0x350
    lfs f0, 0x24(r1)
    addi r7, r1, 0x68
    stfs f0, 0x1c(r4)
    li r6, 0x0
    lfs f0, 0x28(r1)
    li r8, 0x0
    stfs f0, 0x2c(r4)
    li r9, 0x0
    lwz r10, 0x64(r30)
    lwz r4, 0x3c(r30)
    lwz r5, 0x16c(r10)
    slwi r4, r4, 2
    lwz r5, 0x48(r5)
    lwzx r28, r5, r4
    stw r0, 0x68(r1)
    lwz r5, 0x3c(r10)
    lwz r4, 0x16c(r10)
    bl fn_800904E0
    addic. r3, r1, 0x68
    beq lbl_fn_800A7ACC_00001520
    lwz r4, 0x68(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800A7ACC_00001520
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800A7ACC_00001518
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800A7ACC_00001518:
    li r0, 0x0
    stw r0, 0x68(r1)
lbl_fn_800A7ACC_00001520:
    lwz r0, 0x1c(r28)
    lwz r4, 0x64(r30)
    cmpwi r0, 0x0
    bge lbl_fn_800A7ACC_00001538
    li r6, 0x0
    b lbl_fn_800A7ACC_00001544
lbl_fn_800A7ACC_00001538:
    mulli r0, r0, 0x30
    lwz r3, 0x3c(r4)
    add r6, r3, r0
lbl_fn_800A7ACC_00001544:
    lwz r5, 0x220(r4)
    addi r3, r1, 0x350
    lwz r4, 0x3c(r30)
    li r7, 0x0
    bl fn_8009ADA4
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807C7030@ha
    psq_st f1, 0x8(r30), 0, 0
    addi r3, r3, lbl_807C7030@l
    addic. r4, r1, 0x37c
    stfs f2, 0x10(r30)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x34(r30)
    psq_st f1, 0x2c(r30), 0, 0
    beq lbl_fn_800A7ACC_000015C4
    beq lbl_fn_800A7ACC_000015C4
    lwz r3, 0x37c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800A7ACC_000015C4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800A7ACC_000015BC
    addi r3, r4, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800A7ACC_000015BC:
    li r0, 0x0
    stw r0, 0x37c(r1)
lbl_fn_800A7ACC_000015C4:
    addic. r3, r1, 0x368
    beq lbl_fn_800A7ACC_00001604
    beq lbl_fn_800A7ACC_00001604
    lwz r4, 0x368(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800A7ACC_00001604
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800A7ACC_000015FC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800A7ACC_000015FC:
    li r0, 0x0
    stw r0, 0x368(r1)
lbl_fn_800A7ACC_00001604:
    lwz r0, 0x3b4(r1)
    lwz r31, 0x3ac(r1)
    lwz r30, 0x3a8(r1)
    lwz r29, 0x3a4(r1)
    lwz r28, 0x3a0(r1)
    mtlr r0
    addi r1, r1, 0x3b0
    blr
}
