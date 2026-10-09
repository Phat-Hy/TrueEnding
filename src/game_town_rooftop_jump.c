#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80044C30(void);
extern void fn_80064AC4(void);
extern void fn_80092814(void);
extern void fn_800BFAC8(void);
extern void fn_800DC6B4(void);
extern void fn_80133BD8(void);
extern void fn_801F48C8(void);
extern void fn_801F4B4C(void);
extern void fn_801F5644(void);
extern void fn_801F5740(void);
extern void fn_801F5E9C(void);
extern void fn_801F60B8(void);
extern void fn_801F7590(void);
extern void fn_801F80A8(void);
extern void fn_801FECE0(void);
extern void fn_801FEEFC(void);
extern void fn_80219E6C(void);
extern void fn_803E6D4C(void);

/* External data declarations */
extern u8 jumptable_8078BE40[];
extern u8 lbl_80750650[];
extern u8 lbl_807506A0[];
extern u8 lbl_8078C638[];
extern u8 lbl_807C8628[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9F8;
extern u32 lbl_80885D58;
extern u32 lbl_80885D5C;
extern u32 lbl_80885D60;
extern u32 lbl_80885DDC;
extern u32 lbl_80885DE8;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E24;
extern u32 lbl_80885E28;
extern u32 lbl_80885E74;
extern u32 lbl_80885E84;
extern u32 lbl_80885EAC;
extern u32 lbl_80885EC8;
extern u32 lbl_80885ECC;
extern u32 lbl_80885ED0;
extern u32 lbl_80885ED4;

/* Function declarations */
void fn_803DCA84(void);
void fn_803DCD34(void);
void fn_803DD160(void);
void fn_803DD90C(void);
void fn_803DDD54(void);

asm void fn_803DCA84(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f3, lbl_80885D58
    li r9, 0x0
    stw r0, 0x64(r1)
    lfs f4, lbl_80885E84
    stw r31, 0x5c(r1)
    mr r31, r3
    lfs f0, lbl_80885E24
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lfs f1, 0xd4(r4)
    lfs f5, 0xe4(r4)
    lfs f2, 0xc4(r4)
    fadds f0, f1, f0
    stfs f2, 0x38(r1)
    lwz r7, lbl_8087F9F8
    stfs f1, 0x3c(r1)
    lfs f2, lbl_80885DDC
    cmpwi r7, 0x0
    stfs f5, 0x40(r1)
    lfs f1, lbl_80885EAC
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f3, 0x34(r1)
    lfs f3, 0x5b0(r4)
    stfs f0, 0x3c(r1)
    fmuls f0, f2, f3
    lwz r6, 0x5c(r4)
    fmuls f3, f1, f0
    lbz r8, 0x122(r6)
    extsb r8, r8
    beq lbl_fn_803DCA84_000000C0
    lwz r0, 0xa70(r7)
    cmpwi r0, 0x0
    beq lbl_fn_803DCA84_000000C0
    lwz r0, 0x48(r7)
    cmpwi r0, 0x2
    beq lbl_fn_803DCA84_000000C0
    cmpwi r0, 0x0
    bne lbl_fn_803DCA84_000000C0
    lwz r0, 0x4c(r7)
    cmplw r0, r4
    bne lbl_fn_803DCA84_000000C0
    lwz r0, 0x15d8(r7)
    cmpwi r0, 0x0
    bne lbl_fn_803DCA84_000000C0
    li r9, 0x1
lbl_fn_803DCA84_000000C0:
    cmpwi r9, 0x0
    beq lbl_fn_803DCA84_000000EC
    lfs f2, 0x30(r1)
    lfs f1, 0xdd0(r3)
    lfs f0, lbl_80885D60
    fadds f1, f2, f1
    stfs f1, 0x30(r1)
    lfs f1, 0x0(r5)
    fadds f0, f1, f0
    stfs f0, 0x0(r5)
    b lbl_fn_803DCA84_000000FC
lbl_fn_803DCA84_000000EC:
    lfs f1, 0x0(r5)
    lfs f0, lbl_80885D60
    fsubs f0, f1, f0
    stfs f0, 0x0(r5)
lbl_fn_803DCA84_000000FC:
    lfs f1, lbl_80885EC8
    lfs f0, 0x0(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_803DCA84_00000110
    b lbl_fn_803DCA84_00000114
lbl_fn_803DCA84_00000110:
    fmr f1, f0
lbl_fn_803DCA84_00000114:
    lfs f2, lbl_80885D58
    fcmpo cr0, f2, f1
    ble lbl_fn_803DCA84_00000124
    b lbl_fn_803DCA84_0000013C
lbl_fn_803DCA84_00000124:
    lfs f2, lbl_80885EC8
    lfs f0, 0x0(r5)
    fcmpo cr0, f2, f0
    bge lbl_fn_803DCA84_00000138
    b lbl_fn_803DCA84_0000013C
lbl_fn_803DCA84_00000138:
    fmr f2, f0
lbl_fn_803DCA84_0000013C:
    frsp f0, f2
    lis r6, 0x100
    subi r9, r6, 0x1
    cmpwi r8, 0x2
    stfs f2, 0x0(r5)
    li r6, 0x0
    fadds f3, f3, f0
    beq lbl_fn_803DCA84_000001A0
    cmpwi r8, 0x3
    beq lbl_fn_803DCA84_000001A0
    lwz r0, 0x12a4(r4)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_803DCA84_000001A0
    lwz r5, 0xd2c(r4)
    cmpwi r5, 0x0
    beq lbl_fn_803DCA84_000001A4
    lwz r5, 0x218(r5)
    cmpwi r5, 0x0
    beq lbl_fn_803DCA84_00000194
    lwz r0, 0x8c(r5)
    b lbl_fn_803DCA84_00000198
lbl_fn_803DCA84_00000194:
    li r0, 0x0
lbl_fn_803DCA84_00000198:
    cmplw r0, r4
    bne lbl_fn_803DCA84_000001A4
lbl_fn_803DCA84_000001A0:
    li r6, 0x1
lbl_fn_803DCA84_000001A4:
    lwz r0, 0x48(r4)
    lis r4, 0xa
    addi r4, r4, 0xaff
    cmpwi r0, 0x2
    bne lbl_fn_803DCA84_000001C0
    lis r4, 0xff
    addi r4, r4, 0x3c0a
lbl_fn_803DCA84_000001C0:
    cmpwi r6, 0x0
    beq lbl_fn_803DCA84_000001DC
    lfs f0, lbl_80885ECC
    oris r29, r4, 0xff00
    oris r9, r9, 0xff00
    fmuls f3, f3, f0
    b lbl_fn_803DCA84_000001E4
lbl_fn_803DCA84_000001DC:
    oris r29, r4, 0x8000
    oris r9, r9, 0x2000
lbl_fn_803DCA84_000001E4:
    lwz r4, lbl_8087F9F8
    cmpwi r4, 0x0
    beq lbl_fn_803DCA84_000001FC
    lwz r0, 0x15d8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803DCA84_00000294
lbl_fn_803DCA84_000001FC:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803DCA84_00000294
    lfs f2, lbl_80885D58
    addi r0, r3, 0xe34
    lfs f0, lbl_80885D60
    li r30, 0x0
    stfs f2, 0x18(r1)
    addi r4, r1, 0x38
    lfs f1, lbl_80885ED0
    addi r5, r1, 0x2c
    stfs f2, 0x1c(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x18
    addi r8, r1, 0x10
    stfs f0, 0x10(r1)
    li r10, 0x0
    stfs f0, 0x14(r1)
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f3, 0x28(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087EEB0
    bl fn_80064AC4
    addi r0, r31, 0xe64
    stw r0, 0x8(r1)
    lfs f1, lbl_80885ED4
    mr r9, r29
    stw r30, 0xc(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    addi r6, r1, 0x20
    lwz r3, lbl_8087EEB0
    addi r7, r1, 0x18
    addi r8, r1, 0x10
    li r10, 0x0
    bl fn_80064AC4
lbl_fn_803DCA84_00000294:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803DCD34(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_27
    cmpwi r4, 0x0
    lis r0, 0x4330
    stw r0, 0x30(r1)
    mr r29, r4
    mr r27, r5
    mr r28, r6
    stw r0, 0x38(r1)
    mr r30, r7
    beq lbl_fn_803DCD34_000006BC
    slwi r0, r5, 2
    lis r4, lbl_807506A0@ha
    add r5, r3, r0
    lfs f1, lbl_80885D58
    lwz r0, 0x1014(r5)
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x1301
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r31, 0xf14(r3)
    mr r3, r31
    bl fn_801F5644
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r31)
    lwz r3, lbl_8087F9F8
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_803DCD34_00000350
    cmpwi r0, 0x0
    bne lbl_fn_803DCD34_00000350
    lwz r0, 0x4c(r3)
    cmplw r0, r29
    beq lbl_fn_803DCD34_00000358
lbl_fn_803DCD34_00000350:
    cmpwi r28, 0x0
    bne lbl_fn_803DCD34_00000398
lbl_fn_803DCD34_00000358:
    addi r0, r27, 0x1
    lis r3, lbl_80750650@ha
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f3, lbl_80750650@l(r3)
    lis r4, lbl_807506A0@ha
    lfd f0, 0x30(r1)
    addi r4, r4, lbl_807506A0@l
    lfs f4, lbl_80885D60
    mr r3, r31
    fsubs f1, f0, f3
    stfs f4, 0x54(r31)
    addi r4, r4, 0x1215
    li r5, 0x4
    bl fn_801F5740
    b lbl_fn_803DCD34_000003D4
lbl_fn_803DCD34_00000398:
    addi r0, r27, 0x64
    lis r3, lbl_80750650@ha
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f3, lbl_80750650@l(r3)
    lis r4, lbl_807506A0@ha
    lfd f0, 0x38(r1)
    addi r4, r4, lbl_807506A0@l
    lfs f4, lbl_80885D5C
    mr r3, r31
    fsubs f1, f0, f3
    stfs f4, 0x54(r31)
    addi r4, r4, 0x1215
    li r5, 0x4
    bl fn_801F5740
lbl_fn_803DCD34_000003D4:
    cmpwi r30, 0x0
    bne lbl_fn_803DCD34_000004C8
    lis r4, lbl_807506A0@ha
    addi r30, r29, 0xb0
    addi r4, r4, lbl_807506A0@l
    li r5, 0x0
    mr r3, r30
    addi r4, r4, 0x10c1
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803DCD34_00000408
    li r3, 0x0
    b lbl_fn_803DCD34_00000414
lbl_fn_803DCD34_00000408:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_803DCD34_00000414:
    cmpwi r3, 0x0
    beq lbl_fn_803DCD34_0000043C
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x8
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_fn_803DCD34_00000440
lbl_fn_803DCD34_0000043C:
    addi r4, r29, 0x600
lbl_fn_803DCD34_00000440:
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x20
    lfs f2, 0x8(r4)
    addi r3, r1, 0x14
    stfs f2, 0x28(r1)
    lwz r4, lbl_8087EFB4
    psq_st f1, 0x0(r5), 0, 0
    bl fn_800BFAC8
    lfs f6, 0x1c(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f6, f0
    ble lbl_fn_803DCD34_00000494
    lfs f5, lbl_80885D5C
    lfs f4, 0x14(r1)
    lfs f3, 0x18(r1)
    fmuls f0, f6, f5
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    stfs f0, 0x1c(r1)
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
lbl_fn_803DCD34_00000494:
    lis r30, lbl_807506A0@ha
    lfs f1, 0x14(r1)
    addi r30, r30, lbl_807506A0@l
    mr r3, r31
    addi r4, r30, 0x1215
    li r5, 0x0
    bl fn_801F5740
    lfs f1, 0x18(r1)
    mr r3, r31
    addi r4, r30, 0x1215
    li r5, 0x1
    bl fn_801F5740
    b lbl_fn_803DCD34_00000540
lbl_fn_803DCD34_000004C8:
    lwz r5, lbl_8087EEE0
    lis r3, lbl_80750650@ha
    lfd f6, lbl_80750650@l(r3)
    lis r30, lbl_807506A0@ha
    lwz r4, 0x3c(r5)
    addi r30, r30, lbl_807506A0@l
    lwz r0, 0x40(r5)
    mr r3, r31
    xoris r4, r4, 0x8000
    stw r4, 0x34(r1)
    xoris r0, r0, 0x8000
    lfs f4, lbl_80885DFC
    lfd f0, 0x30(r1)
    addi r4, r30, 0x1215
    stw r0, 0x3c(r1)
    li r5, 0x0
    fsubs f5, f0, f6
    lfs f0, lbl_80885E74
    lfd f3, 0x38(r1)
    fmuls f5, f4, f5
    fsubs f3, f3, f6
    fadds f1, f0, f5
    fmuls f31, f4, f3
    bl fn_801F5740
    lfs f0, lbl_80885E74
    mr r3, r31
    addi r4, r30, 0x1215
    li r5, 0x1
    fsubs f1, f31, f0
    bl fn_801F5740
lbl_fn_803DCD34_00000540:
    lwz r4, 0x5c(r29)
    mr r3, r31
    bl fn_803E6D4C
    lwz r0, 0x48(r29)
    lwz r28, 0x934(r29)
    cmpwi r0, 0x2
    bne lbl_fn_803DCD34_0000056C
    addi r3, r29, 0x7d4
    li r4, 0x1
    bl fn_80133BD8
    mr r28, r3
lbl_fn_803DCD34_0000056C:
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_803DCD34_00000580
    subi r28, r28, 0x3
lbl_fn_803DCD34_00000580:
    lwz r4, 0x60(r29)
    lis r30, lbl_807506A0@ha
    addi r30, r30, lbl_807506A0@l
    mr r3, r31
    lwz r5, 0x4(r4)
    addi r4, r30, 0x1308
    bl fn_801F5E9C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_803DCD34_000005B8
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_803DCD34_000005E8
lbl_fn_803DCD34_000005B8:
    lis r30, lbl_807506A0@ha
    lfs f1, lbl_80885D60
    addi r30, r30, lbl_807506A0@l
    mr r3, r31
    addi r4, r30, 0x130d
    bl fn_801F5644
    mr r3, r31
    mr r5, r28
    addi r4, r30, 0x1317
    li r6, 0x0
    bl fn_801F60B8
    b lbl_fn_803DCD34_0000060C
lbl_fn_803DCD34_000005E8:
    lfs f1, lbl_80885D58
    mr r3, r31
    addi r4, r30, 0x130d
    bl fn_801F5644
    mr r3, r31
    addi r4, r30, 0x1317
    li r5, 0x0
    li r6, 0x0
    bl fn_801F60B8
lbl_fn_803DCD34_0000060C:
    lwz r0, lbl_8087F610
    li r28, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_803DCD34_0000064C
    lwz r3, 0xaa4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803DCD34_00000634
    bl fn_80219E6C
    mr r28, r3
    b lbl_fn_803DCD34_0000064C
lbl_fn_803DCD34_00000634:
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803DCD34_0000064C
    li r4, 0x0
    bl fn_80044C30
    mr r28, r3
lbl_fn_803DCD34_0000064C:
    cmpwi r28, 0x0
    beq lbl_fn_803DCD34_0000068C
    lwz r0, 0x4(r28)
    cmpwi r0, 0xc8
    beq lbl_fn_803DCD34_0000068C
    lis r29, lbl_807506A0@ha
    lfs f1, lbl_80885D60
    addi r29, r29, lbl_807506A0@l
    mr r3, r31
    addi r4, r29, 0x131d
    bl fn_801F5644
    lwz r5, 0x8(r28)
    mr r3, r31
    addi r4, r29, 0x1327
    bl fn_801F5E9C
    b lbl_fn_803DCD34_000006BC
lbl_fn_803DCD34_0000068C:
    lis r29, lbl_807506A0@ha
    lfs f1, lbl_80885D58
    addi r29, r29, lbl_807506A0@l
    mr r3, r31
    addi r4, r29, 0x131d
    bl fn_801F5644
    lis r5, lbl_8078C638@ha
    mr r3, r31
    addi r5, r5, lbl_8078C638@l
    addi r4, r29, 0x1327
    addi r5, r5, 0x52
    bl fn_801F5E9C
lbl_fn_803DCD34_000006BC:
    addi r11, r1, 0x60
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803DD160(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x1e4(r1)
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    stw r29, 0x1d4(r1)
    lis r29, lbl_807C8628@ha
    addi r29, r29, lbl_807C8628@l
    stw r28, 0x1d0(r1)
    mr r28, r4
    beq lbl_fn_803DD160_00000E68
    cmpwi r3, 0x0
    bne lbl_fn_803DD160_0000071C
    b lbl_fn_803DD160_00000E68
lbl_fn_803DD160_0000071C:
    lis r30, lbl_807506A0@ha
    addi r30, r30, lbl_807506A0@l
    addi r3, r30, 0x132f
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    addi r3, r30, 0x1335
    bl fn_800DC6B4
    lfs f1, lbl_80885D58
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    lbz r4, 0x122(r28)
    mr r3, r31
    extsb r4, r4
    bl fn_803DD90C
    lbz r0, 0x120(r28)
    extsb r0, r0
    cmpwi r0, 0x2
    bne lbl_fn_803DD160_00000860
    addi r3, r30, 0x133b
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    lfs f1, lbl_80885E28
    mr r3, r31
    lfs f0, lbl_80885DFC
    addi r4, r30, 0x1342
    stfs f1, 0x1b8(r1)
    addi r5, r1, 0x1b8
    stfs f1, 0x1bc(r1)
    stfs f0, 0x1c0(r1)
    stfs f0, 0x1c4(r1)
    bl fn_801F48C8
    lfs f1, lbl_80885E28
    mr r3, r31
    lfs f0, lbl_80885DFC
    addi r4, r30, 0x134d
    stfs f1, 0x1a8(r1)
    addi r5, r1, 0x1a8
    stfs f1, 0x1ac(r1)
    stfs f0, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    bl fn_801F48C8
    addi r5, r29, 0x70
    lfs f3, 0x70(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x198
    stfs f3, 0x198(r1)
    stfs f2, 0x19c(r1)
    stfs f1, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    bl fn_801F4B4C
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x188
    stfs f3, 0x188(r1)
    stfs f2, 0x18c(r1)
    stfs f1, 0x190(r1)
    stfs f0, 0x194(r1)
    bl fn_801F4B4C
    addi r3, r30, 0x136e
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x0
    bl fn_801FEEFC
    b lbl_fn_803DD160_00000E68
lbl_fn_803DD160_00000860:
    cmpwi r0, 0x1
    bne lbl_fn_803DD160_0000095C
    addi r3, r30, 0x133b
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    lfs f2, lbl_80885DFC
    mr r3, r31
    lfs f1, lbl_80885E28
    addi r4, r30, 0x1342
    lfs f0, lbl_80885DE8
    addi r5, r1, 0x178
    stfs f2, 0x178(r1)
    stfs f1, 0x17c(r1)
    stfs f0, 0x180(r1)
    stfs f2, 0x184(r1)
    bl fn_801F48C8
    lfs f2, lbl_80885DFC
    mr r3, r31
    lfs f1, lbl_80885E28
    addi r4, r30, 0x134d
    lfs f0, lbl_80885DE8
    addi r5, r1, 0x168
    stfs f2, 0x168(r1)
    stfs f1, 0x16c(r1)
    stfs f0, 0x170(r1)
    stfs f2, 0x174(r1)
    bl fn_801F48C8
    addi r5, r29, 0x80
    lfs f3, 0x80(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x158
    stfs f3, 0x158(r1)
    stfs f2, 0x15c(r1)
    stfs f1, 0x160(r1)
    stfs f0, 0x164(r1)
    bl fn_801F4B4C
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x148
    stfs f3, 0x148(r1)
    stfs f2, 0x14c(r1)
    stfs f1, 0x150(r1)
    stfs f0, 0x154(r1)
    bl fn_801F4B4C
    addi r3, r30, 0x136e
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x0
    bl fn_801FEEFC
    b lbl_fn_803DD160_00000E68
lbl_fn_803DD160_0000095C:
    cmpwi r0, 0x4
    bne lbl_fn_803DD160_00000A60
    addi r3, r30, 0x133b
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    lfs f3, lbl_80885DE8
    mr r3, r31
    lfs f2, lbl_80885E28
    addi r4, r30, 0x1342
    lfs f1, lbl_80885D60
    addi r5, r1, 0x138
    lfs f0, lbl_80885DFC
    stfs f3, 0x138(r1)
    stfs f2, 0x13c(r1)
    stfs f1, 0x140(r1)
    stfs f0, 0x144(r1)
    bl fn_801F48C8
    lfs f3, lbl_80885DE8
    mr r3, r31
    lfs f2, lbl_80885E28
    addi r4, r30, 0x134d
    lfs f1, lbl_80885D60
    addi r5, r1, 0x128
    lfs f0, lbl_80885DFC
    stfs f3, 0x128(r1)
    stfs f2, 0x12c(r1)
    stfs f1, 0x130(r1)
    stfs f0, 0x134(r1)
    bl fn_801F48C8
    addi r5, r29, 0x90
    lfs f3, 0x90(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x118
    stfs f3, 0x118(r1)
    stfs f2, 0x11c(r1)
    stfs f1, 0x120(r1)
    stfs f0, 0x124(r1)
    bl fn_801F4B4C
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x108
    stfs f3, 0x108(r1)
    stfs f2, 0x10c(r1)
    stfs f1, 0x110(r1)
    stfs f0, 0x114(r1)
    bl fn_801F4B4C
    addi r3, r30, 0x136e
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x0
    bl fn_801FEEFC
    b lbl_fn_803DD160_00000E68
lbl_fn_803DD160_00000A60:
    cmpwi r0, 0x3
    bne lbl_fn_803DD160_00000B64
    addi r3, r30, 0x133b
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    lfs f3, lbl_80885D58
    mr r3, r31
    lfs f2, lbl_80885DFC
    addi r4, r30, 0x1342
    lfs f1, lbl_80885E28
    addi r5, r1, 0xf8
    lfs f0, lbl_80885DE8
    stfs f3, 0xf8(r1)
    stfs f2, 0xfc(r1)
    stfs f1, 0x100(r1)
    stfs f0, 0x104(r1)
    bl fn_801F48C8
    lfs f3, lbl_80885D58
    mr r3, r31
    lfs f2, lbl_80885DFC
    addi r4, r30, 0x134d
    lfs f1, lbl_80885E28
    addi r5, r1, 0xe8
    lfs f0, lbl_80885DE8
    stfs f3, 0xe8(r1)
    stfs f2, 0xec(r1)
    stfs f1, 0xf0(r1)
    stfs f0, 0xf4(r1)
    bl fn_801F48C8
    addi r5, r29, 0xb0
    lfs f3, 0xb0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0xd8
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_801F4B4C
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0xc8
    stfs f3, 0xc8(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xd0(r1)
    stfs f0, 0xd4(r1)
    bl fn_801F4B4C
    addi r3, r30, 0x136e
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x0
    bl fn_801FEEFC
    b lbl_fn_803DD160_00000E68
lbl_fn_803DD160_00000B64:
    cmpwi r0, 0x5
    bne lbl_fn_803DD160_00000C60
    addi r3, r30, 0x133b
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    lfs f1, lbl_80885E28
    mr r3, r31
    lfs f2, lbl_80885D58
    addi r4, r30, 0x1342
    lfs f0, lbl_80885DFC
    addi r5, r1, 0xb8
    stfs f2, 0xb8(r1)
    stfs f1, 0xbc(r1)
    stfs f1, 0xc0(r1)
    stfs f0, 0xc4(r1)
    bl fn_801F48C8
    lfs f1, lbl_80885E28
    mr r3, r31
    lfs f2, lbl_80885D58
    addi r4, r30, 0x134d
    lfs f0, lbl_80885DFC
    addi r5, r1, 0xa8
    stfs f2, 0xa8(r1)
    stfs f1, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f0, 0xb4(r1)
    bl fn_801F48C8
    addi r5, r29, 0xa0
    lfs f3, 0xa0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x98
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    bl fn_801F4B4C
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x88
    stfs f3, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_801F4B4C
    addi r3, r30, 0x136e
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x0
    bl fn_801FEEFC
    b lbl_fn_803DD160_00000E68
lbl_fn_803DD160_00000C60:
    cmpwi r0, 0x6
    bne lbl_fn_803DD160_00000D54
    addi r3, r30, 0x133b
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    lfs f1, lbl_80885DFC
    mr r3, r31
    lfs f0, lbl_80885DE8
    addi r4, r30, 0x1342
    stfs f1, 0x78(r1)
    addi r5, r1, 0x78
    stfs f1, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    bl fn_801F48C8
    lfs f1, lbl_80885DFC
    mr r3, r31
    lfs f0, lbl_80885DE8
    addi r4, r30, 0x134d
    stfs f1, 0x68(r1)
    addi r5, r1, 0x68
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    bl fn_801F48C8
    addi r5, r29, 0xc0
    lfs f3, 0xc0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x58
    stfs f3, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_801F4B4C
    addi r5, r29, 0xf0
    lfs f3, 0xf0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x48
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_801F4B4C
    addi r3, r30, 0x136e
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x3
    bl fn_801FEEFC
    b lbl_fn_803DD160_00000E68
lbl_fn_803DD160_00000D54:
    cmpwi r0, 0x7
    bne lbl_fn_803DD160_00000E50
    addi r3, r30, 0x133b
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    lfs f2, lbl_80885DE8
    mr r3, r31
    lfs f1, lbl_80885DFC
    addi r4, r30, 0x1342
    lfs f0, lbl_80885D60
    addi r5, r1, 0x38
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f2, 0x44(r1)
    bl fn_801F48C8
    lfs f2, lbl_80885DE8
    mr r3, r31
    lfs f1, lbl_80885DFC
    addi r4, r30, 0x134d
    lfs f0, lbl_80885D60
    addi r5, r1, 0x28
    stfs f2, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f2, 0x34(r1)
    bl fn_801F48C8
    addi r5, r29, 0xd0
    lfs f3, 0xd0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x18
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_801F4B4C
    addi r5, r29, 0xf0
    lfs f3, 0xf0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x8
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_801F4B4C
    addi r3, r30, 0x136e
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x3
    bl fn_801FEEFC
    b lbl_fn_803DD160_00000E68
lbl_fn_803DD160_00000E50:
    addi r3, r30, 0x133b
    bl fn_800DC6B4
    lfs f1, lbl_80885D58
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_803DD160_00000E68:
    lwz r0, 0x1e4(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    lwz r28, 0x1d0(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_803DD90C(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    cmpwi r4, 0x4
    stw r0, 0x164(r1)
    stw r31, 0x15c(r1)
    stw r30, 0x158(r1)
    stw r29, 0x154(r1)
    lis r29, lbl_807C8628@ha
    addi r29, r29, lbl_807C8628@l
    stw r28, 0x150(r1)
    mr r28, r3
    bne lbl_fn_803DD90C_00000F84
    lfs f3, lbl_80885DFC
    lis r31, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r31, r31, lbl_807506A0@l
    lfs f1, lbl_80885DE8
    addi r4, r31, 0x1378
    lfs f0, lbl_80885E28
    addi r5, r1, 0x138
    stfs f3, 0x138(r1)
    stfs f2, 0x13c(r1)
    stfs f1, 0x140(r1)
    stfs f0, 0x144(r1)
    bl fn_801F48C8
    lfs f3, lbl_80885DFC
    mr r3, r28
    lfs f2, lbl_80885D58
    addi r4, r31, 0x1382
    lfs f1, lbl_80885DE8
    addi r5, r1, 0x128
    lfs f0, lbl_80885E28
    stfs f3, 0x128(r1)
    stfs f2, 0x12c(r1)
    stfs f1, 0x130(r1)
    stfs f0, 0x134(r1)
    bl fn_801F48C8
    addi r30, r29, 0x40
    lfs f3, 0x40(r29)
    lfs f2, 0x4(r30)
    mr r3, r28
    lfs f1, 0x8(r30)
    addi r4, r31, 0x138c
    lfs f0, 0xc(r30)
    addi r5, r1, 0x118
    stfs f3, 0x118(r1)
    stfs f2, 0x11c(r1)
    stfs f1, 0x120(r1)
    stfs f0, 0x124(r1)
    bl fn_801F4B4C
    lfs f3, 0x40(r29)
    mr r3, r28
    lfs f2, 0x4(r30)
    addi r4, r31, 0x1396
    lfs f1, 0x8(r30)
    addi r5, r1, 0x108
    lfs f0, 0xc(r30)
    stfs f3, 0x108(r1)
    stfs f2, 0x10c(r1)
    stfs f1, 0x110(r1)
    stfs f0, 0x114(r1)
    bl fn_801F4B4C
    b lbl_fn_803DD90C_000012B0
lbl_fn_803DD90C_00000F84:
    cmpwi r4, 0x2
    bne lbl_fn_803DD90C_00001048
    lfs f1, lbl_80885D58
    lis r31, lbl_807506A0@ha
    lfs f0, lbl_80885E28
    addi r31, r31, lbl_807506A0@l
    stfs f1, 0xf8(r1)
    addi r4, r31, 0x1378
    addi r5, r1, 0xf8
    stfs f1, 0xfc(r1)
    stfs f0, 0x100(r1)
    stfs f0, 0x104(r1)
    bl fn_801F48C8
    lfs f1, lbl_80885D58
    mr r3, r28
    lfs f0, lbl_80885E28
    addi r4, r31, 0x1382
    stfs f1, 0xe8(r1)
    addi r5, r1, 0xe8
    stfs f1, 0xec(r1)
    stfs f0, 0xf0(r1)
    stfs f0, 0xf4(r1)
    bl fn_801F48C8
    addi r30, r29, 0x10
    lfs f3, 0x10(r29)
    lfs f2, 0x4(r30)
    mr r3, r28
    lfs f1, 0x8(r30)
    addi r4, r31, 0x138c
    lfs f0, 0xc(r30)
    addi r5, r1, 0xd8
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_801F4B4C
    lfs f3, 0x10(r29)
    mr r3, r28
    lfs f2, 0x4(r30)
    addi r4, r31, 0x1396
    lfs f1, 0x8(r30)
    addi r5, r1, 0xc8
    lfs f0, 0xc(r30)
    stfs f3, 0xc8(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xd0(r1)
    stfs f0, 0xd4(r1)
    bl fn_801F4B4C
    b lbl_fn_803DD90C_000012B0
lbl_fn_803DD90C_00001048:
    cmpwi r4, 0x3
    bne lbl_fn_803DD90C_00001114
    lfs f2, lbl_80885E28
    lis r31, lbl_807506A0@ha
    lfs f1, lbl_80885D58
    addi r31, r31, lbl_807506A0@l
    lfs f0, lbl_80885DFC
    addi r4, r31, 0x1378
    stfs f2, 0xb8(r1)
    addi r5, r1, 0xb8
    stfs f1, 0xbc(r1)
    stfs f0, 0xc0(r1)
    stfs f2, 0xc4(r1)
    bl fn_801F48C8
    lfs f2, lbl_80885E28
    mr r3, r28
    lfs f1, lbl_80885D58
    addi r4, r31, 0x1382
    lfs f0, lbl_80885DFC
    addi r5, r1, 0xa8
    stfs f2, 0xa8(r1)
    stfs f1, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f2, 0xb4(r1)
    bl fn_801F48C8
    addi r30, r29, 0x20
    lfs f3, 0x20(r29)
    lfs f2, 0x4(r30)
    mr r3, r28
    lfs f1, 0x8(r30)
    addi r4, r31, 0x138c
    lfs f0, 0xc(r30)
    addi r5, r1, 0x98
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    bl fn_801F4B4C
    lfs f3, 0x20(r29)
    mr r3, r28
    lfs f2, 0x4(r30)
    addi r4, r31, 0x1396
    lfs f1, 0x8(r30)
    addi r5, r1, 0x88
    lfs f0, 0xc(r30)
    stfs f3, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_801F4B4C
    b lbl_fn_803DD90C_000012B0
lbl_fn_803DD90C_00001114:
    cmpwi r4, 0x1
    bne lbl_fn_803DD90C_000011E8
    lfs f3, lbl_80885DE8
    lis r31, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r31, r31, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r31, 0x1378
    lfs f0, lbl_80885E28
    addi r5, r1, 0x78
    stfs f3, 0x78(r1)
    stfs f2, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f0, 0x84(r1)
    bl fn_801F48C8
    lfs f3, lbl_80885DE8
    mr r3, r28
    lfs f2, lbl_80885D58
    addi r4, r31, 0x1382
    lfs f1, lbl_80885D60
    addi r5, r1, 0x68
    lfs f0, lbl_80885E28
    stfs f3, 0x68(r1)
    stfs f2, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f0, 0x74(r1)
    bl fn_801F48C8
    addi r30, r29, 0x0
    lfs f3, 0x0(r29)
    lfs f2, 0x4(r30)
    mr r3, r28
    lfs f1, 0x8(r30)
    addi r4, r31, 0x138c
    lfs f0, 0xc(r30)
    addi r5, r1, 0x58
    stfs f3, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_801F4B4C
    lfs f3, 0x0(r29)
    mr r3, r28
    lfs f2, 0x4(r30)
    addi r4, r31, 0x1396
    lfs f1, 0x8(r30)
    addi r5, r1, 0x48
    lfs f0, 0xc(r30)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_801F4B4C
    b lbl_fn_803DD90C_000012B0
lbl_fn_803DD90C_000011E8:
    lfs f3, lbl_80885DE8
    lis r30, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r30, r30, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r30, 0x1378
    lfs f0, lbl_80885E28
    addi r5, r1, 0x38
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_801F48C8
    lfs f3, lbl_80885DE8
    mr r3, r28
    lfs f2, lbl_80885D58
    addi r4, r30, 0x1382
    lfs f1, lbl_80885D60
    addi r5, r1, 0x28
    lfs f0, lbl_80885E28
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_801F48C8
    addi r31, r29, 0x50
    lfs f3, 0x50(r29)
    lfs f2, 0x4(r31)
    mr r3, r28
    lfs f1, 0x8(r31)
    addi r4, r30, 0x138c
    lfs f0, 0xc(r31)
    addi r5, r1, 0x18
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_801F4B4C
    lfs f3, 0x50(r29)
    mr r3, r28
    lfs f2, 0x4(r31)
    addi r4, r30, 0x1396
    lfs f1, 0x8(r31)
    addi r5, r1, 0x8
    lfs f0, 0xc(r31)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_801F4B4C
lbl_fn_803DD90C_000012B0:
    lwz r0, 0x164(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r28, 0x150(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_803DDD54(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    cmplwi r4, 0x9
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    lis r31, lbl_807C8628@ha
    addi r31, r31, lbl_807C8628@l
    stw r30, 0x2d8(r1)
    mr r30, r3
    stw r29, 0x2d4(r1)
    stw r28, 0x2d0(r1)
    bgt lbl_fn_803DDD54_00001AD8
    lis r5, jumptable_8078BE40@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_8078BE40@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lfs f3, lbl_80885DE8
    lis r29, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r29, r29, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r29, 0x1378
    lfs f0, lbl_80885E28
    addi r5, r1, 0x2b8
    stfs f3, 0x2b8(r1)
    stfs f2, 0x2bc(r1)
    stfs f1, 0x2c0(r1)
    stfs f0, 0x2c4(r1)
    bl fn_801F7590
    lfs f3, lbl_80885DE8
    mr r3, r30
    lfs f2, lbl_80885D58
    addi r4, r29, 0x1382
    lfs f1, lbl_80885D60
    addi r5, r1, 0x2a8
    lfs f0, lbl_80885E28
    stfs f3, 0x2a8(r1)
    stfs f2, 0x2ac(r1)
    stfs f1, 0x2b0(r1)
    stfs f0, 0x2b4(r1)
    bl fn_801F7590
    addi r28, r31, 0x0
    lfs f3, 0x0(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0x298
    stfs f3, 0x298(r1)
    stfs f2, 0x29c(r1)
    stfs f1, 0x2a0(r1)
    stfs f0, 0x2a4(r1)
    bl fn_801F80A8
    lfs f3, 0x0(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0x288
    lfs f0, 0xc(r28)
    stfs f3, 0x288(r1)
    stfs f2, 0x28c(r1)
    stfs f1, 0x290(r1)
    stfs f0, 0x294(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
    lfs f3, lbl_80885DFC
    lis r29, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r29, r29, lbl_807506A0@l
    lfs f1, lbl_80885DE8
    addi r4, r29, 0x1378
    lfs f0, lbl_80885E28
    addi r5, r1, 0x278
    stfs f3, 0x278(r1)
    stfs f2, 0x27c(r1)
    stfs f1, 0x280(r1)
    stfs f0, 0x284(r1)
    bl fn_801F7590
    lfs f3, lbl_80885DFC
    mr r3, r30
    lfs f2, lbl_80885D58
    addi r4, r29, 0x1382
    lfs f1, lbl_80885DE8
    addi r5, r1, 0x268
    lfs f0, lbl_80885E28
    stfs f3, 0x268(r1)
    stfs f2, 0x26c(r1)
    stfs f1, 0x270(r1)
    stfs f0, 0x274(r1)
    bl fn_801F7590
    addi r28, r31, 0x40
    lfs f3, 0x40(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0x258
    stfs f3, 0x258(r1)
    stfs f2, 0x25c(r1)
    stfs f1, 0x260(r1)
    stfs f0, 0x264(r1)
    bl fn_801F80A8
    lfs f3, 0x40(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0x248
    lfs f0, 0xc(r28)
    stfs f3, 0x248(r1)
    stfs f2, 0x24c(r1)
    stfs f1, 0x250(r1)
    stfs f0, 0x254(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
    lfs f1, lbl_80885DFC
    lis r29, lbl_807506A0@ha
    lfs f2, lbl_80885E28
    addi r29, r29, lbl_807506A0@l
    lfs f0, lbl_80885DE8
    addi r4, r29, 0x1378
    stfs f2, 0x238(r1)
    addi r5, r1, 0x238
    stfs f1, 0x23c(r1)
    stfs f1, 0x240(r1)
    stfs f0, 0x244(r1)
    bl fn_801F7590
    lfs f1, lbl_80885DFC
    mr r3, r30
    lfs f2, lbl_80885E28
    addi r4, r29, 0x1382
    lfs f0, lbl_80885DE8
    addi r5, r1, 0x228
    stfs f2, 0x228(r1)
    stfs f1, 0x22c(r1)
    stfs f1, 0x230(r1)
    stfs f0, 0x234(r1)
    bl fn_801F7590
    addi r28, r31, 0x60
    lfs f3, 0x60(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0x218
    stfs f3, 0x218(r1)
    stfs f2, 0x21c(r1)
    stfs f1, 0x220(r1)
    stfs f0, 0x224(r1)
    bl fn_801F80A8
    lfs f3, 0x60(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0x208
    lfs f0, 0xc(r28)
    stfs f3, 0x208(r1)
    stfs f2, 0x20c(r1)
    stfs f1, 0x210(r1)
    stfs f0, 0x214(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
    lfs f2, lbl_80885E28
    lis r29, lbl_807506A0@ha
    lfs f1, lbl_80885D58
    addi r29, r29, lbl_807506A0@l
    lfs f0, lbl_80885DFC
    addi r4, r29, 0x1378
    stfs f2, 0x1f8(r1)
    addi r5, r1, 0x1f8
    stfs f1, 0x1fc(r1)
    stfs f0, 0x200(r1)
    stfs f2, 0x204(r1)
    bl fn_801F7590
    lfs f2, lbl_80885E28
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r29, 0x1382
    lfs f0, lbl_80885DFC
    addi r5, r1, 0x1e8
    stfs f2, 0x1e8(r1)
    stfs f1, 0x1ec(r1)
    stfs f0, 0x1f0(r1)
    stfs f2, 0x1f4(r1)
    bl fn_801F7590
    addi r28, r31, 0x20
    lfs f3, 0x20(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0x1d8
    stfs f3, 0x1d8(r1)
    stfs f2, 0x1dc(r1)
    stfs f1, 0x1e0(r1)
    stfs f0, 0x1e4(r1)
    bl fn_801F80A8
    lfs f3, 0x20(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0x1c8
    lfs f0, 0xc(r28)
    stfs f3, 0x1c8(r1)
    stfs f2, 0x1cc(r1)
    stfs f1, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
    lfs f2, lbl_80885E28
    lis r29, lbl_807506A0@ha
    lfs f1, lbl_80885D58
    addi r29, r29, lbl_807506A0@l
    lfs f0, lbl_80885DFC
    addi r4, r29, 0x1378
    stfs f2, 0x1b8(r1)
    addi r5, r1, 0x1b8
    stfs f1, 0x1bc(r1)
    stfs f0, 0x1c0(r1)
    stfs f2, 0x1c4(r1)
    bl fn_801F7590
    lfs f2, lbl_80885E28
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r29, 0x1382
    lfs f0, lbl_80885DFC
    addi r5, r1, 0x1a8
    stfs f2, 0x1a8(r1)
    stfs f1, 0x1ac(r1)
    stfs f0, 0x1b0(r1)
    stfs f2, 0x1b4(r1)
    bl fn_801F7590
    addi r28, r31, 0x30
    lfs f3, 0x30(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0x198
    stfs f3, 0x198(r1)
    stfs f2, 0x19c(r1)
    stfs f1, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    bl fn_801F80A8
    lfs f3, 0x30(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0x188
    lfs f0, 0xc(r28)
    stfs f3, 0x188(r1)
    stfs f2, 0x18c(r1)
    stfs f1, 0x190(r1)
    stfs f0, 0x194(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
    lfs f1, lbl_80885E28
    lis r29, lbl_807506A0@ha
    lfs f0, lbl_80885DFC
    addi r29, r29, lbl_807506A0@l
    stfs f1, 0x178(r1)
    addi r4, r29, 0x1378
    addi r5, r1, 0x178
    stfs f1, 0x17c(r1)
    stfs f0, 0x180(r1)
    stfs f0, 0x184(r1)
    bl fn_801F7590
    lfs f1, lbl_80885E28
    mr r3, r30
    lfs f0, lbl_80885DFC
    addi r4, r29, 0x1382
    stfs f1, 0x168(r1)
    addi r5, r1, 0x168
    stfs f1, 0x16c(r1)
    stfs f0, 0x170(r1)
    stfs f0, 0x174(r1)
    bl fn_801F7590
    addi r28, r31, 0x70
    lfs f3, 0x70(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0x158
    stfs f3, 0x158(r1)
    stfs f2, 0x15c(r1)
    stfs f1, 0x160(r1)
    stfs f0, 0x164(r1)
    bl fn_801F80A8
    lfs f3, 0x70(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0x148
    lfs f0, 0xc(r28)
    stfs f3, 0x148(r1)
    stfs f2, 0x14c(r1)
    stfs f1, 0x150(r1)
    stfs f0, 0x154(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
    lfs f2, lbl_80885DFC
    lis r29, lbl_807506A0@ha
    lfs f1, lbl_80885E28
    addi r29, r29, lbl_807506A0@l
    lfs f0, lbl_80885DE8
    addi r4, r29, 0x1378
    stfs f2, 0x138(r1)
    addi r5, r1, 0x138
    stfs f1, 0x13c(r1)
    stfs f0, 0x140(r1)
    stfs f2, 0x144(r1)
    bl fn_801F7590
    lfs f2, lbl_80885DFC
    mr r3, r30
    lfs f1, lbl_80885E28
    addi r4, r29, 0x1382
    lfs f0, lbl_80885DE8
    addi r5, r1, 0x128
    stfs f2, 0x128(r1)
    stfs f1, 0x12c(r1)
    stfs f0, 0x130(r1)
    stfs f2, 0x134(r1)
    bl fn_801F7590
    addi r28, r31, 0x80
    lfs f3, 0x80(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0x118
    stfs f3, 0x118(r1)
    stfs f2, 0x11c(r1)
    stfs f1, 0x120(r1)
    stfs f0, 0x124(r1)
    bl fn_801F80A8
    lfs f3, 0x80(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0x108
    lfs f0, 0xc(r28)
    stfs f3, 0x108(r1)
    stfs f2, 0x10c(r1)
    stfs f1, 0x110(r1)
    stfs f0, 0x114(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
    lfs f3, lbl_80885DE8
    lis r29, lbl_807506A0@ha
    lfs f2, lbl_80885E28
    addi r29, r29, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r29, 0x1378
    lfs f0, lbl_80885DFC
    addi r5, r1, 0xf8
    stfs f3, 0xf8(r1)
    stfs f2, 0xfc(r1)
    stfs f1, 0x100(r1)
    stfs f0, 0x104(r1)
    bl fn_801F7590
    lfs f3, lbl_80885DE8
    mr r3, r30
    lfs f2, lbl_80885E28
    addi r4, r29, 0x1382
    lfs f1, lbl_80885D60
    addi r5, r1, 0xe8
    lfs f0, lbl_80885DFC
    stfs f3, 0xe8(r1)
    stfs f2, 0xec(r1)
    stfs f1, 0xf0(r1)
    stfs f0, 0xf4(r1)
    bl fn_801F7590
    addi r28, r31, 0x90
    lfs f3, 0x90(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0xd8
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_801F80A8
    lfs f3, 0x90(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0xc8
    lfs f0, 0xc(r28)
    stfs f3, 0xc8(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xd0(r1)
    stfs f0, 0xd4(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
    lfs f3, lbl_80885D58
    lis r29, lbl_807506A0@ha
    lfs f2, lbl_80885DFC
    addi r29, r29, lbl_807506A0@l
    lfs f1, lbl_80885E28
    addi r4, r29, 0x1378
    lfs f0, lbl_80885DE8
    addi r5, r1, 0xb8
    stfs f3, 0xb8(r1)
    stfs f2, 0xbc(r1)
    stfs f1, 0xc0(r1)
    stfs f0, 0xc4(r1)
    bl fn_801F7590
    lfs f3, lbl_80885D58
    mr r3, r30
    lfs f2, lbl_80885DFC
    addi r4, r29, 0x1382
    lfs f1, lbl_80885E28
    addi r5, r1, 0xa8
    lfs f0, lbl_80885DE8
    stfs f3, 0xa8(r1)
    stfs f2, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f0, 0xb4(r1)
    bl fn_801F7590
    addi r28, r31, 0xb0
    lfs f3, 0xb0(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0x98
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    bl fn_801F80A8
    lfs f3, 0xb0(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0x88
    lfs f0, 0xc(r28)
    stfs f3, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
    lfs f1, lbl_80885E28
    lis r29, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r29, r29, lbl_807506A0@l
    lfs f0, lbl_80885DFC
    addi r4, r29, 0x1378
    stfs f2, 0x78(r1)
    addi r5, r1, 0x78
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f0, 0x84(r1)
    bl fn_801F7590
    lfs f1, lbl_80885E28
    mr r3, r30
    lfs f2, lbl_80885D58
    addi r4, r29, 0x1382
    lfs f0, lbl_80885DFC
    addi r5, r1, 0x68
    stfs f2, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f0, 0x74(r1)
    bl fn_801F7590
    addi r28, r31, 0xa0
    lfs f3, 0xa0(r31)
    lfs f2, 0x4(r28)
    mr r3, r30
    lfs f1, 0x8(r28)
    addi r4, r29, 0x138c
    lfs f0, 0xc(r28)
    addi r5, r1, 0x58
    stfs f3, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_801F80A8
    lfs f3, 0xa0(r31)
    mr r3, r30
    lfs f2, 0x4(r28)
    addi r4, r29, 0x1396
    lfs f1, 0x8(r28)
    addi r5, r1, 0x48
    lfs f0, 0xc(r28)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_801F80A8
    b lbl_fn_803DDD54_00001BA4
lbl_fn_803DDD54_00001AD8:
    lfs f3, lbl_80885DE8
    lis r28, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r28, r28, lbl_807506A0@l
    lfs f1, lbl_80885D60
    mr r3, r30
    lfs f0, lbl_80885E28
    addi r4, r28, 0x1378
    stfs f3, 0x38(r1)
    addi r5, r1, 0x38
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_801F7590
    lfs f3, lbl_80885DE8
    mr r3, r30
    lfs f2, lbl_80885D58
    addi r4, r28, 0x1382
    lfs f1, lbl_80885D60
    addi r5, r1, 0x28
    lfs f0, lbl_80885E28
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_801F7590
    addi r29, r31, 0x50
    lfs f3, 0x50(r31)
    lfs f2, 0x4(r29)
    mr r3, r30
    lfs f1, 0x8(r29)
    addi r4, r28, 0x138c
    lfs f0, 0xc(r29)
    addi r5, r1, 0x18
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_801F80A8
    lfs f3, 0x50(r31)
    mr r3, r30
    lfs f2, 0x4(r29)
    addi r4, r28, 0x1396
    lfs f1, 0x8(r29)
    addi r5, r1, 0x8
    lfs f0, 0xc(r29)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_801F80A8
lbl_fn_803DDD54_00001BA4:
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    lwz r29, 0x2d4(r1)
    lwz r28, 0x2d0(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}
