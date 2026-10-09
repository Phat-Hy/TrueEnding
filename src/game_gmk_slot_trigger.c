#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void fn_8013354C(void);
extern void fn_8016E484(void);
extern void fn_80219558(void);
extern void fn_80370174(void);
extern void fn_80375D0C(void);
extern void fn_804491F4(void);
extern void fn_8044B44C(void);
extern void fn_8044C6C0(void);

/* External data declarations */
extern u8 lbl_80754750[];

/* Small data declarations */
extern u32 lbl_8087E000;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886AE8;
extern u32 lbl_80886AFC;
extern u32 lbl_80886B14;
extern u32 lbl_80886B18;
extern u32 lbl_80886B1C;
extern u32 lbl_80886B20;
extern u32 lbl_80886B24;
extern u32 lbl_80886B28;

/* Function declarations */
void fn_80449448(void);
void fn_80449A18(void);
void fn_80449ABC(void);
void fn_8044A1D8(void);

asm void fn_80449448(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, 0x4330
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    mr r29, r6
    stw r28, 0x20(r1)
    mr r28, r5
    lwz r8, lbl_8087F0A8
    stw r7, 0x8(r1)
    lwz r0, 0x284(r8)
    stw r7, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80449448_000005B0
    cmpw r5, r6
    bgt lbl_fn_80449448_0000036C
    lwz r0, 0xd4(r8)
    cmpwi r0, 0x3
    bne lbl_fn_80449448_000001DC
    subf r7, r5, r6
    lis r5, lbl_80754750@ha
    xoris r0, r7, 0x8000
    stw r0, 0xc(r1)
    lfd f2, lbl_80754750@l(r5)
    lfd f0, 0x8(r1)
    lfs f1, lbl_80886B18
    fsubs f0, f0, f2
    lfs f3, lbl_80886B14
    fmuls f0, f1, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_80449448_00000090
    b lbl_fn_80449448_000000A0
lbl_fn_80449448_00000090:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f3, f1, f0
lbl_fn_80449448_000000A0:
    lfs f4, lbl_80886AE8
    fcmpo cr0, f4, f3
    ble lbl_fn_80449448_000000B0
    b lbl_fn_80449448_000000F0
lbl_fn_80449448_000000B0:
    xoris r0, r7, 0x8000
    stw r0, 0xc(r1)
    lis r5, lbl_80754750@ha
    lfs f1, lbl_80886B18
    lfd f2, lbl_80754750@l(r5)
    lfd f0, 0x8(r1)
    lfs f4, lbl_80886B14
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_80449448_000000E0
    b lbl_fn_80449448_000000F0
lbl_fn_80449448_000000E0:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f4, f1, f0
lbl_fn_80449448_000000F0:
    lwz r5, 0x0(r3)
    xoris r0, r7, 0x8000
    stw r0, 0x14(r1)
    lis r6, lbl_80754750@ha
    xoris r5, r5, 0x8000
    lfd f3, lbl_80754750@l(r6)
    stw r5, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f2, 0x8(r1)
    fsubs f0, f0, f3
    lfs f1, lbl_80886B18
    fsubs f2, f2, f3
    lfs f5, lbl_80886B14
    fmuls f0, f1, f0
    fmuls f2, f2, f4
    fcmpo cr0, f5, f0
    fctiwz f0, f2
    stfd f0, 0x18(r1)
    lwz r5, 0x1c(r1)
    stw r5, 0x0(r3)
    bge lbl_fn_80449448_00000148
    b lbl_fn_80449448_00000158
lbl_fn_80449448_00000148:
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmuls f5, f1, f0
lbl_fn_80449448_00000158:
    lfs f3, lbl_80886AE8
    fcmpo cr0, f3, f5
    ble lbl_fn_80449448_00000168
    b lbl_fn_80449448_000001A8
lbl_fn_80449448_00000168:
    xoris r0, r7, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_80754750@ha
    lfs f1, lbl_80886B18
    lfd f2, lbl_80754750@l(r3)
    lfd f0, 0x10(r1)
    lfs f3, lbl_80886B14
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_80449448_00000198
    b lbl_fn_80449448_000001A8
lbl_fn_80449448_00000198:
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f3, f1, f0
lbl_fn_80449448_000001A8:
    lwz r0, 0x0(r4)
    lis r3, lbl_80754750@ha
    lfd f1, lbl_80754750@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x0(r4)
    b lbl_fn_80449448_00000530
lbl_fn_80449448_000001DC:
    subf r7, r5, r6
    lis r5, lbl_80754750@ha
    xoris r0, r7, 0x8000
    stw r0, 0xc(r1)
    lfd f3, lbl_80754750@l(r5)
    lfd f0, 0x8(r1)
    lfs f2, lbl_80886B1C
    fsubs f0, f0, f3
    lfs f1, lbl_80886AE8
    lfs f4, lbl_80886AFC
    fmadds f0, f2, f0, f1
    fcmpo cr0, f4, f0
    bge lbl_fn_80449448_00000214
    b lbl_fn_80449448_00000224
lbl_fn_80449448_00000214:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fmadds f4, f2, f0, f1
lbl_fn_80449448_00000224:
    lfs f5, lbl_80886B18
    fcmpo cr0, f5, f4
    ble lbl_fn_80449448_00000234
    b lbl_fn_80449448_00000278
lbl_fn_80449448_00000234:
    xoris r0, r7, 0x8000
    stw r0, 0xc(r1)
    lis r5, lbl_80754750@ha
    lfs f2, lbl_80886B1C
    lfd f3, lbl_80754750@l(r5)
    lfd f0, 0x8(r1)
    lfs f1, lbl_80886AE8
    fsubs f0, f0, f3
    lfs f5, lbl_80886AFC
    fmadds f0, f2, f0, f1
    fcmpo cr0, f5, f0
    bge lbl_fn_80449448_00000268
    b lbl_fn_80449448_00000278
lbl_fn_80449448_00000268:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fmadds f5, f2, f0, f1
lbl_fn_80449448_00000278:
    lwz r5, 0x0(r3)
    xoris r0, r7, 0x8000
    stw r0, 0x14(r1)
    lis r6, lbl_80754750@ha
    xoris r5, r5, 0x8000
    lfd f4, lbl_80754750@l(r6)
    stw r5, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f0, f0, f4
    lfs f2, lbl_80886B1C
    fsubs f3, f1, f4
    lfs f1, lbl_80886AE8
    lfs f6, lbl_80886AFC
    fmadds f0, f2, f0, f1
    fmuls f3, f3, f5
    fcmpo cr0, f6, f0
    fctiwz f0, f3
    stfd f0, 0x18(r1)
    lwz r5, 0x1c(r1)
    stw r5, 0x0(r3)
    bge lbl_fn_80449448_000002D4
    b lbl_fn_80449448_000002E4
lbl_fn_80449448_000002D4:
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmadds f6, f2, f0, f1
lbl_fn_80449448_000002E4:
    lfs f4, lbl_80886B18
    fcmpo cr0, f4, f6
    ble lbl_fn_80449448_000002F4
    b lbl_fn_80449448_00000338
lbl_fn_80449448_000002F4:
    xoris r0, r7, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_80754750@ha
    lfs f2, lbl_80886B1C
    lfd f3, lbl_80754750@l(r3)
    lfd f0, 0x10(r1)
    lfs f1, lbl_80886AE8
    fsubs f0, f0, f3
    lfs f4, lbl_80886AFC
    fmadds f0, f2, f0, f1
    fcmpo cr0, f4, f0
    bge lbl_fn_80449448_00000328
    b lbl_fn_80449448_00000338
lbl_fn_80449448_00000328:
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmadds f4, f2, f0, f1
lbl_fn_80449448_00000338:
    lwz r0, 0x0(r4)
    lis r3, lbl_80754750@ha
    lfd f1, lbl_80754750@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f4
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x0(r4)
    b lbl_fn_80449448_00000530
lbl_fn_80449448_0000036C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80449448_0000038C
    li r4, 0x123
    bl fn_80370174
    cntlzw r0, r3
    srwi r0, r0, 5
    b lbl_fn_80449448_00000390
lbl_fn_80449448_0000038C:
    li r0, 0x1
lbl_fn_80449448_00000390:
    cmpwi r0, 0x0
    bne lbl_fn_80449448_000003A4
    subf r0, r29, r28
    cmpwi r0, 0xa
    ble lbl_fn_80449448_00000530
lbl_fn_80449448_000003A4:
    subf r5, r28, r29
    lis r3, lbl_80754750@ha
    xoris r0, r5, 0x8000
    stw r0, 0xc(r1)
    lfd f3, lbl_80754750@l(r3)
    lfd f0, 0x8(r1)
    lfs f2, lbl_80886B20
    fsubs f0, f0, f3
    lfs f1, lbl_80886AE8
    lfs f4, lbl_80886AFC
    fmadds f0, f2, f0, f1
    fcmpo cr0, f4, f0
    bge lbl_fn_80449448_000003DC
    b lbl_fn_80449448_000003EC
lbl_fn_80449448_000003DC:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fmadds f4, f2, f0, f1
lbl_fn_80449448_000003EC:
    lfs f5, lbl_80886B24
    fcmpo cr0, f5, f4
    ble lbl_fn_80449448_000003FC
    b lbl_fn_80449448_00000440
lbl_fn_80449448_000003FC:
    xoris r0, r5, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_80754750@ha
    lfs f2, lbl_80886B20
    lfd f3, lbl_80754750@l(r3)
    lfd f0, 0x8(r1)
    lfs f1, lbl_80886AE8
    fsubs f0, f0, f3
    lfs f5, lbl_80886AFC
    fmadds f0, f2, f0, f1
    fcmpo cr0, f5, f0
    bge lbl_fn_80449448_00000430
    b lbl_fn_80449448_00000440
lbl_fn_80449448_00000430:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fmadds f5, f2, f0, f1
lbl_fn_80449448_00000440:
    lwz r3, 0x0(r30)
    xoris r0, r5, 0x8000
    stw r0, 0x14(r1)
    lis r4, lbl_80754750@ha
    xoris r3, r3, 0x8000
    lfd f4, lbl_80754750@l(r4)
    stw r3, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f0, f0, f4
    lfs f2, lbl_80886B20
    fsubs f3, f1, f4
    lfs f1, lbl_80886AE8
    lfs f6, lbl_80886AFC
    fmadds f0, f2, f0, f1
    fmuls f3, f3, f5
    fcmpo cr0, f6, f0
    fctiwz f0, f3
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
    stw r3, 0x0(r30)
    bge lbl_fn_80449448_0000049C
    b lbl_fn_80449448_000004AC
lbl_fn_80449448_0000049C:
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmadds f6, f2, f0, f1
lbl_fn_80449448_000004AC:
    lfs f4, lbl_80886B24
    fcmpo cr0, f4, f6
    ble lbl_fn_80449448_000004BC
    b lbl_fn_80449448_00000500
lbl_fn_80449448_000004BC:
    xoris r0, r5, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_80754750@ha
    lfs f2, lbl_80886B20
    lfd f3, lbl_80754750@l(r3)
    lfd f0, 0x10(r1)
    lfs f1, lbl_80886AE8
    fsubs f0, f0, f3
    lfs f4, lbl_80886AFC
    fmadds f0, f2, f0, f1
    fcmpo cr0, f4, f0
    bge lbl_fn_80449448_000004F0
    b lbl_fn_80449448_00000500
lbl_fn_80449448_000004F0:
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmadds f4, f2, f0, f1
lbl_fn_80449448_00000500:
    lwz r0, 0x0(r31)
    lis r3, lbl_80754750@ha
    lfd f1, lbl_80754750@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f4
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x0(r31)
lbl_fn_80449448_00000530:
    lis r3, 0x2
    lwz r5, 0x0(r30)
    subi r0, r3, 0x7961
    cmpw r5, r0
    bge lbl_fn_80449448_00000548
    mr r0, r5
lbl_fn_80449448_00000548:
    cmpwi r0, 0x1
    bge lbl_fn_80449448_00000558
    li r4, 0x1
    b lbl_fn_80449448_0000056C
lbl_fn_80449448_00000558:
    lis r3, 0x2
    subi r4, r3, 0x7961
    cmpw r5, r4
    bge lbl_fn_80449448_0000056C
    mr r4, r5
lbl_fn_80449448_0000056C:
    stw r4, 0x0(r30)
    lis r3, 0x2
    subi r0, r3, 0x7961
    lwz r3, 0x0(r31)
    subf r4, r4, r0
    mr r0, r4
    cmpw r3, r4
    bge lbl_fn_80449448_00000590
    mr r0, r3
lbl_fn_80449448_00000590:
    cmpwi r0, 0x0
    bge lbl_fn_80449448_000005A0
    li r4, 0x0
    b lbl_fn_80449448_000005AC
lbl_fn_80449448_000005A0:
    cmpw r3, r4
    bge lbl_fn_80449448_000005AC
    mr r4, r3
lbl_fn_80449448_000005AC:
    stw r4, 0x0(r31)
lbl_fn_80449448_000005B0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80449A18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80449A18_00000658
    li r0, 0x0
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_804491F4
    lwz r4, 0x6014(r29)
    lwz r0, 0xc(r1)
    lwz r3, 0x6018(r29)
    add r0, r4, r0
    stw r0, 0x6014(r29)
    lwz r0, 0x8(r1)
    add r0, r3, r0
    stw r0, 0x6018(r29)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x280(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80449A18_00000658
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_80449ABC
lbl_fn_80449A18_00000658:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80449ABC(void)
{
    nofralloc
    stwu r1, -0x5f0(r1)
    mflr r0
    stw r0, 0x5f4(r1)
    addi r11, r1, 0x5f0
    bl _savegpr_26
    li r30, 0x0
    stw r30, 0x130(r1)
    mr r26, r3
    mr r29, r4
    mr r27, r5
    addi r31, r1, 0x134
    addi r28, r1, 0x5b4
lbl_fn_80449ABC_000006A4:
    stw r30, 0x0(r31)
    addi r3, r31, 0x4
    li r4, 0x0
    li r5, 0x7c
    bl memset
    stw r30, 0x80(r31)
    stw r30, 0x84(r31)
    stw r30, 0x88(r31)
    stw r30, 0x8c(r31)
    addi r31, r31, 0x90
    cmplw r31, r28
    blt lbl_fn_80449ABC_000006A4
    li r28, 0x0
    stw r28, 0x130(r1)
    addi r3, r1, 0xa4
    li r4, 0x0
    stw r28, 0xa0(r1)
    li r5, 0x7c
    bl memset
    stw r28, 0x120(r1)
    lwz r3, lbl_8087F8A0
    stw r28, 0x124(r1)
    stw r28, 0x128(r1)
    stw r28, 0x12c(r1)
    lwz r28, 0x48(r3)
    b lbl_fn_80449ABC_000008B4
lbl_fn_80449ABC_0000070C:
    lwz r4, 0x38(r28)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80449ABC_00000730
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_80449ABC_00000730
    li r3, 0x1
lbl_fn_80449ABC_00000730:
    cmpwi r3, 0x0
    beq lbl_fn_80449ABC_000008B0
    lwz r0, 0x54c(r28)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80449ABC_000008B0
    lwz r0, 0xc54(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80449ABC_000008B0
    mr r3, r28
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_80449ABC_000008B0
    lwz r0, 0x130(r1)
    cmplwi r0, 0x8
    bge lbl_fn_80449ABC_000008B0
    lwz r0, 0x130(r1)
    addi r3, r1, 0x134
    stw r28, 0xa0(r1)
    mulli r0, r0, 0x90
    add. r3, r3, r0
    beq lbl_fn_80449ABC_000008A4
    stw r28, 0x0(r3)
    lwz r0, 0xa4(r1)
    stw r0, 0x4(r3)
    lwz r0, 0xa8(r1)
    stw r0, 0x8(r3)
    lfs f0, 0xac(r1)
    stfs f0, 0xc(r3)
    lfs f0, 0xb0(r1)
    stfs f0, 0x10(r3)
    lfs f0, 0xb4(r1)
    stfs f0, 0x14(r3)
    lfs f0, 0xb8(r1)
    stfs f0, 0x18(r3)
    lfs f0, 0xbc(r1)
    stfs f0, 0x1c(r3)
    lfs f0, 0xc0(r1)
    stfs f0, 0x20(r3)
    lwz r0, 0xc4(r1)
    stw r0, 0x24(r3)
    lwz r0, 0xc8(r1)
    stw r0, 0x28(r3)
    lwz r0, 0xcc(r1)
    stw r0, 0x2c(r3)
    lwz r0, 0xd0(r1)
    stw r0, 0x30(r3)
    lwz r0, 0xd4(r1)
    stw r0, 0x34(r3)
    lwz r0, 0xd8(r1)
    stw r0, 0x38(r3)
    lwz r0, 0xdc(r1)
    stw r0, 0x3c(r3)
    lwz r0, 0xe0(r1)
    stw r0, 0x40(r3)
    lwz r0, 0xe4(r1)
    stw r0, 0x44(r3)
    lwz r0, 0xe8(r1)
    stw r0, 0x48(r3)
    lwz r0, 0xec(r1)
    stw r0, 0x4c(r3)
    lwz r0, 0xf0(r1)
    stw r0, 0x50(r3)
    lwz r0, 0xf4(r1)
    stw r0, 0x54(r3)
    lwz r0, 0xf8(r1)
    stw r0, 0x58(r3)
    lwz r0, 0xfc(r1)
    stw r0, 0x5c(r3)
    lwz r0, 0x100(r1)
    stw r0, 0x60(r3)
    lwz r0, 0x104(r1)
    stw r0, 0x64(r3)
    lwz r0, 0x108(r1)
    stw r0, 0x68(r3)
    lwz r0, 0x10c(r1)
    stw r0, 0x6c(r3)
    lwz r0, 0x110(r1)
    stw r0, 0x70(r3)
    lwz r0, 0x114(r1)
    stw r0, 0x74(r3)
    lwz r0, 0x118(r1)
    stw r0, 0x78(r3)
    lwz r0, 0x11c(r1)
    stw r0, 0x7c(r3)
    lwz r0, 0x120(r1)
    stw r0, 0x80(r3)
    lwz r0, 0x124(r1)
    stw r0, 0x84(r3)
    lwz r0, 0x128(r1)
    stw r0, 0x88(r3)
    lwz r0, 0x12c(r1)
    stw r0, 0x8c(r3)
lbl_fn_80449ABC_000008A4:
    lwz r3, 0x130(r1)
    addi r0, r3, 0x1
    stw r0, 0x130(r1)
lbl_fn_80449ABC_000008B0:
    lwz r28, 0x14ac(r28)
lbl_fn_80449ABC_000008B4:
    cmpwi r28, 0x0
    bne lbl_fn_80449ABC_0000070C
    lwz r0, 0x130(r1)
    li r8, 0x0
    lwz r6, 0x6014(r26)
    cmpwi r0, 0x0
    lwz r7, 0x6018(r26)
    beq lbl_fn_80449ABC_0000097C
    lis r3, lbl_80754750@ha
    lwz r4, lbl_8087F0A8
    lfd f2, lbl_80754750@l(r3)
    addi r5, r1, 0x130
    lfs f1, lbl_80886B28
    lis r3, 0x4330
    b lbl_fn_80449ABC_00000970
lbl_fn_80449ABC_000008F0:
    stw r6, 0x84(r5)
    stw r7, 0x88(r5)
    lwz r0, 0x298(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80449ABC_00000968
    lwz r0, 0x4(r5)
    cmplw r0, r29
    bne lbl_fn_80449ABC_00000968
    lwz r0, 0x84(r5)
    stw r3, 0x5b8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x5bc(r1)
    lfd f0, 0x5b8(r1)
    stw r3, 0x5c8(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x5c0(r1)
    lwz r0, 0x5c4(r1)
    stw r0, 0x84(r5)
    lwz r0, 0x88(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x5cc(r1)
    lfd f0, 0x5c8(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x5d0(r1)
    lwz r0, 0x5d4(r1)
    stw r0, 0x88(r5)
lbl_fn_80449ABC_00000968:
    addi r5, r5, 0x90
    addi r8, r8, 0x1
lbl_fn_80449ABC_00000970:
    lwz r0, 0x130(r1)
    cmplw r8, r0
    blt lbl_fn_80449ABC_000008F0
lbl_fn_80449ABC_0000097C:
    lwz r3, lbl_8087F430
    bl fn_80375D0C
    cmpw r27, r3
    mr r29, r3
    ble lbl_fn_80449ABC_000009A4
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80449ABC_000009A4
    mr r29, r27
lbl_fn_80449ABC_000009A4:
    addi r27, r1, 0x130
    addi r28, r1, 0x134
    li r30, 0x0
    b lbl_fn_80449ABC_000009F8
lbl_fn_80449ABC_000009B4:
    lwz r5, 0x4(r27)
    mr r6, r29
    addi r3, r28, 0x80
    addi r4, r28, 0x84
    lwz r5, 0x874(r5)
    bl fn_80449448
    lwz r3, 0x84(r27)
    addi r5, r28, 0x4
    lwz r0, 0x88(r27)
    add r4, r3, r0
    stw r4, 0x8c(r27)
    lwz r3, 0x4(r27)
    addi r3, r3, 0x7d4
    bl fn_8013354C
    stwu r3, 0x90(r27)
    addi r28, r28, 0x90
    addi r30, r30, 0x1
lbl_fn_80449ABC_000009F8:
    lwz r0, 0x130(r1)
    cmplw r30, r0
    blt lbl_fn_80449ABC_000009B4
    lwz r30, 0x601c(r26)
    addi r29, r1, 0x130
    addi r28, r1, 0x134
    li r27, 0x0
    li r31, 0x0
    b lbl_fn_80449ABC_00000D10
lbl_fn_80449ABC_00000A1C:
    lwz r6, 0x601c(r26)
    mr r5, r26
    lwz r0, 0x4(r29)
    li r3, 0x0
    li r7, 0x0
    mtctr r6
    cmplwi r6, 0x0
    ble lbl_fn_80449ABC_00000A64
lbl_fn_80449ABC_00000A3C:
    lwz r4, 0x6020(r5)
    cmplw r4, r0
    bne lbl_fn_80449ABC_00000A58
    mulli r0, r7, 0x90
    add r3, r26, r0
    addi r3, r3, 0x6020
    b lbl_fn_80449ABC_00000A64
lbl_fn_80449ABC_00000A58:
    addi r5, r5, 0x90
    addi r7, r7, 0x1
    bdnz lbl_fn_80449ABC_00000A3C
lbl_fn_80449ABC_00000A64:
    cmpwi r3, 0x0
    bne lbl_fn_80449ABC_00000BEC
    cmplwi r6, 0x8
    bge lbl_fn_80449ABC_00000BEC
    stw r31, 0x10(r1)
    addi r3, r1, 0x14
    li r4, 0x0
    li r5, 0x7c
    bl memset
    lwz r4, 0x4(r29)
    stw r31, 0x90(r1)
    stw r31, 0x94(r1)
    stw r31, 0x98(r1)
    stw r31, 0x9c(r1)
    stw r4, 0x10(r1)
    lwz r0, 0x601c(r26)
    mulli r0, r0, 0x90
    add r0, r26, r0
    addic. r3, r0, 0x6020
    beq lbl_fn_80449ABC_00000BD0
    stw r4, 0x0(r3)
    lwz r0, 0x14(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x8(r3)
    lfs f0, 0x1c(r1)
    stfs f0, 0xc(r3)
    lfs f0, 0x20(r1)
    stfs f0, 0x10(r3)
    lfs f0, 0x24(r1)
    stfs f0, 0x14(r3)
    lfs f0, 0x28(r1)
    stfs f0, 0x18(r3)
    lfs f0, 0x2c(r1)
    stfs f0, 0x1c(r3)
    lfs f0, 0x30(r1)
    stfs f0, 0x20(r3)
    lwz r0, 0x34(r1)
    stw r0, 0x24(r3)
    lwz r0, 0x3c(r1)
    lwz r4, 0x38(r1)
    stw r4, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, 0x44(r1)
    lwz r4, 0x40(r1)
    stw r4, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0x4c(r1)
    lwz r4, 0x48(r1)
    stw r4, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x54(r1)
    lwz r4, 0x50(r1)
    stw r4, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x5c(r1)
    lwz r4, 0x58(r1)
    stw r4, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x64(r1)
    lwz r4, 0x60(r1)
    stw r4, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x6c(r1)
    lwz r4, 0x68(r1)
    stw r4, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, 0x74(r1)
    lwz r4, 0x70(r1)
    stw r4, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x7c(r1)
    lwz r4, 0x78(r1)
    stw r4, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x84(r1)
    lwz r4, 0x80(r1)
    stw r4, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x8c(r1)
    lwz r4, 0x88(r1)
    stw r4, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x90(r1)
    stw r0, 0x80(r3)
    lwz r0, 0x94(r1)
    stw r0, 0x84(r3)
    lwz r0, 0x98(r1)
    stw r0, 0x88(r3)
    lwz r0, 0x9c(r1)
    stw r0, 0x8c(r3)
lbl_fn_80449ABC_00000BD0:
    lwz r3, 0x601c(r26)
    addi r3, r3, 0x1
    stw r3, 0x601c(r26)
    subi r0, r3, 0x1
    mulli r0, r0, 0x90
    add r3, r26, r0
    addi r3, r3, 0x6020
lbl_fn_80449ABC_00000BEC:
    cmpwi r3, 0x0
    beq lbl_fn_80449ABC_00000D04
    lwz r4, 0x80(r3)
    lwz r0, 0x84(r29)
    add r0, r4, r0
    stw r0, 0x80(r3)
    lwz r4, 0x84(r3)
    lwz r0, 0x88(r29)
    add r0, r4, r0
    stw r0, 0x84(r3)
    lwz r4, 0x88(r3)
    lwz r0, 0x8c(r29)
    add r0, r4, r0
    stw r0, 0x88(r3)
    lwz r4, 0x8c(r3)
    lwz r0, 0x90(r29)
    add r0, r4, r0
    stw r0, 0x8c(r3)
    lwz r4, 0x4(r3)
    lwz r0, 0x4(r28)
    add r0, r4, r0
    stw r0, 0x4(r3)
    lwz r4, 0x8(r3)
    lwz r0, 0x8(r28)
    add r0, r4, r0
    stw r0, 0x8(r3)
    lfs f1, 0xc(r3)
    lfs f0, 0xc(r28)
    fadds f0, f1, f0
    stfs f0, 0xc(r3)
    lfs f1, 0x10(r3)
    lfs f0, 0x10(r28)
    fadds f0, f1, f0
    stfs f0, 0x10(r3)
    lfs f1, 0x14(r3)
    lfs f0, 0x14(r28)
    fadds f0, f1, f0
    stfs f0, 0x14(r3)
    lfs f1, 0x18(r3)
    lfs f0, 0x18(r28)
    fadds f0, f1, f0
    stfs f0, 0x18(r3)
    lfs f1, 0x1c(r3)
    lfs f0, 0x1c(r28)
    fadds f0, f1, f0
    stfs f0, 0x1c(r3)
    lfs f1, 0x20(r3)
    lfs f0, 0x20(r28)
    fadds f0, f1, f0
    stfs f0, 0x20(r3)
    lwz r4, 0x24(r3)
    lwz r0, 0x24(r28)
    add r0, r4, r0
    stw r0, 0x24(r3)
    lwz r4, 0x48(r3)
    lwz r0, 0x48(r28)
    or r0, r4, r0
    stw r0, 0x48(r3)
    lwz r4, 0x4c(r3)
    lwz r0, 0x4c(r28)
    or r0, r4, r0
    stw r0, 0x4c(r3)
    lwz r4, 0x50(r3)
    lwz r0, 0x50(r28)
    or r0, r4, r0
    stw r0, 0x50(r3)
    lwz r4, 0x54(r3)
    lwz r0, 0x54(r28)
    or r0, r4, r0
    stw r0, 0x54(r3)
lbl_fn_80449ABC_00000D04:
    addi r29, r29, 0x90
    addi r28, r28, 0x90
    addi r27, r27, 0x1
lbl_fn_80449ABC_00000D10:
    lwz r0, 0x130(r1)
    cmplw r27, r0
    blt lbl_fn_80449ABC_00000A1C
    lwz r0, 0x601c(r26)
    cmplw r30, r0
    beq lbl_fn_80449ABC_00000D4C
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r26, 0x6020
    addi r5, r1, 0x8
    lwz r0, 0x601c(r26)
    mulli r0, r0, 0x90
    add r4, r26, r0
    addi r4, r4, 0x6020
    bl fn_8044A1D8
lbl_fn_80449ABC_00000D4C:
    lwz r6, 0x600c(r26)
    li r0, 0x0
    lwz r5, 0x6014(r26)
    addi r11, r1, 0x5f0
    lwz r3, 0x6018(r26)
    lwz r4, 0x6010(r26)
    add r5, r6, r5
    stw r5, 0x600c(r26)
    add r3, r4, r3
    stw r3, 0x6010(r26)
    stw r0, 0x6014(r26)
    stw r0, 0x6018(r26)
    bl _restgpr_26
    lwz r0, 0x5f4(r1)
    mtlr r0
    addi r1, r1, 0x5f0
    blr
}

asm void fn_8044A1D8(void)
{
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    addi r11, r1, 0x3a0
    bl _savegpr_21
    lis r22, 0x38e4
    lis r6, 0x6666
    mr r23, r3
    mr r24, r4
    mr r25, r5
    addi r30, r6, 0x6667
    subi r29, r22, 0x71c7
    li r31, 0xf
lbl_fn_8044A1D8_00000DC4:
    subf r0, r23, r24
    mulhw r0, r29, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_8044A1D8_00001FEC
    cmpwi r7, 0x14
    bgt lbl_fn_8044A1D8_00001098
    cmplw r23, r24
    beq lbl_fn_8044A1D8_00001FEC
    subi r21, r24, 0x90
    li r30, 0xf
    b lbl_fn_8044A1D8_0000108C
lbl_fn_8044A1D8_00000DFC:
    cmplw r23, r24
    mr r29, r23
    beq lbl_fn_8044A1D8_00000EC0
    addi r31, r23, 0x90
    b lbl_fn_8044A1D8_00000EB8
lbl_fn_8044A1D8_00000E10:
    lwz r3, 0x0(r31)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r29)
    mr r22, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r22, 0x0
    bge lbl_fn_8044A1D8_00000E44
    cmpwi r3, 0x0
    blt lbl_fn_8044A1D8_00000E44
    li r0, 0x0
    b lbl_fn_8044A1D8_00000EA8
lbl_fn_8044A1D8_00000E44:
    cmpwi r22, 0x0
    blt lbl_fn_8044A1D8_00000E5C
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00000E5C
    li r0, 0x1
    b lbl_fn_8044A1D8_00000EA8
lbl_fn_8044A1D8_00000E5C:
    cmpwi r22, 0x0
    bge lbl_fn_8044A1D8_00000E94
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00000E94
    lwz r4, 0x0(r31)
    lwz r3, 0x0(r29)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044A1D8_00000EA8
lbl_fn_8044A1D8_00000E94:
    xor r0, r3, r22
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044A1D8_00000EA8:
    cmpwi r0, 0x0
    beq lbl_fn_8044A1D8_00000EB4
    mr r29, r31
lbl_fn_8044A1D8_00000EB4:
    addi r31, r31, 0x90
lbl_fn_8044A1D8_00000EB8:
    cmplw r31, r24
    bne lbl_fn_8044A1D8_00000E10
lbl_fn_8044A1D8_00000EC0:
    cmplw r29, r23
    beq lbl_fn_8044A1D8_00001088
    lwz r0, 0x0(r29)
    mr r6, r29
    stw r0, 0x2d8(r1)
    mr r4, r23
    lwz r0, 0x4(r29)
    stw r0, 0x2dc(r1)
    lwz r0, 0x8(r29)
    stw r0, 0x2e0(r1)
    lfs f0, 0xc(r29)
    stfs f0, 0x2e4(r1)
    lfs f0, 0x10(r29)
    stfs f0, 0x2e8(r1)
    lfs f0, 0x14(r29)
    stfs f0, 0x2ec(r1)
    lfs f0, 0x18(r29)
    stfs f0, 0x2f0(r1)
    lfs f0, 0x1c(r29)
    stfs f0, 0x2f4(r1)
    lfs f0, 0x20(r29)
    stfs f0, 0x2f8(r1)
    lwz r0, 0x24(r29)
    stw r0, 0x2fc(r1)
    lwz r3, 0x28(r29)
    lwz r0, 0x2c(r29)
    stw r0, 0x304(r1)
    stw r3, 0x300(r1)
    lwz r3, 0x30(r29)
    lwz r0, 0x34(r29)
    stw r0, 0x30c(r1)
    stw r3, 0x308(r1)
    lwz r3, 0x38(r29)
    lwz r0, 0x3c(r29)
    stw r0, 0x314(r1)
    stw r3, 0x310(r1)
    lwz r3, 0x40(r29)
    lwz r0, 0x44(r29)
    stw r0, 0x31c(r1)
    stw r3, 0x318(r1)
    lwz r3, 0x48(r29)
    lwz r0, 0x4c(r29)
    stw r0, 0x324(r1)
    stw r3, 0x320(r1)
    lwz r3, 0x50(r29)
    lwz r0, 0x54(r29)
    stw r0, 0x32c(r1)
    stw r3, 0x328(r1)
    lwz r3, 0x58(r29)
    lwz r0, 0x5c(r29)
    stw r0, 0x334(r1)
    stw r3, 0x330(r1)
    lwz r3, 0x60(r29)
    lwz r0, 0x64(r29)
    stw r0, 0x33c(r1)
    stw r3, 0x338(r1)
    lwz r3, 0x68(r29)
    lwz r0, 0x6c(r29)
    stw r0, 0x344(r1)
    stw r3, 0x340(r1)
    lwz r3, 0x70(r29)
    lwz r0, 0x74(r29)
    stw r0, 0x34c(r1)
    stw r3, 0x348(r1)
    lwz r3, 0x78(r29)
    lwz r0, 0x7c(r29)
    stw r0, 0x354(r1)
    stw r3, 0x350(r1)
    lwz r0, 0x80(r29)
    stw r0, 0x358(r1)
    lwz r0, 0x84(r29)
    stw r0, 0x35c(r1)
    lwz r0, 0x88(r29)
    stw r0, 0x360(r1)
    lwz r0, 0x8c(r29)
    stw r0, 0x364(r1)
    lwz r0, 0x0(r23)
    stw r0, 0x0(r29)
    mtctr r30
lbl_fn_8044A1D8_00000FFC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044A1D8_00000FFC
    lwz r0, 0x4(r4)
    mr r5, r23
    stw r0, 0x4(r6)
    addi r4, r1, 0x2d8
    lwz r0, 0x80(r23)
    stw r0, 0x80(r29)
    lwz r0, 0x84(r23)
    stw r0, 0x84(r29)
    lwz r0, 0x88(r23)
    stw r0, 0x88(r29)
    lwz r0, 0x8c(r23)
    stw r0, 0x8c(r29)
    lwz r0, 0x2d8(r1)
    stw r0, 0x0(r23)
    mtctr r30
lbl_fn_8044A1D8_0000104C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044A1D8_0000104C
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x358(r1)
    stw r0, 0x80(r23)
    lwz r0, 0x35c(r1)
    stw r0, 0x84(r23)
    lwz r0, 0x360(r1)
    stw r0, 0x88(r23)
    lwz r0, 0x364(r1)
    stw r0, 0x8c(r23)
lbl_fn_8044A1D8_00001088:
    addi r23, r23, 0x90
lbl_fn_8044A1D8_0000108C:
    cmplw r23, r21
    bne lbl_fn_8044A1D8_00000DFC
    b lbl_fn_8044A1D8_00001FEC
lbl_fn_8044A1D8_00001098:
    lwz r4, lbl_8087E000
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
    mulli r0, r0, 0x90
    add r3, r23, r0
    blt lbl_fn_8044A1D8_000010D8
    li r6, -0x4
lbl_fn_8044A1D8_000010D8:
    mulhw r4, r30, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E000
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
    mulli r0, r0, 0x90
    add r4, r23, r0
    blt lbl_fn_8044A1D8_00001124
    li r6, -0x4
    stw r6, lbl_8087E000
lbl_fn_8044A1D8_00001124:
    subi r26, r24, 0x90
    mr r6, r25
    mr r5, r26
    bl fn_8044C6C0
    mr r28, r23
    mr r27, r26
    b lbl_fn_8044A1D8_00001144
lbl_fn_8044A1D8_00001140:
    addi r28, r28, 0x90
lbl_fn_8044A1D8_00001144:
    lwz r3, 0x0(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r26)
    mr r21, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r21, 0x0
    bge lbl_fn_8044A1D8_00001178
    cmpwi r3, 0x0
    blt lbl_fn_8044A1D8_00001178
    li r0, 0x0
    b lbl_fn_8044A1D8_000011DC
lbl_fn_8044A1D8_00001178:
    cmpwi r21, 0x0
    blt lbl_fn_8044A1D8_00001190
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001190
    li r0, 0x1
    b lbl_fn_8044A1D8_000011DC
lbl_fn_8044A1D8_00001190:
    cmpwi r21, 0x0
    bge lbl_fn_8044A1D8_000011C8
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_000011C8
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044A1D8_000011DC
lbl_fn_8044A1D8_000011C8:
    xor r0, r3, r21
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044A1D8_000011DC:
    cmpwi r0, 0x0
    bne lbl_fn_8044A1D8_00001140
lbl_fn_8044A1D8_000011E4:
    subi r27, r27, 0x90
    cmplw r28, r27
    beq lbl_fn_8044A1D8_00001290
    lwz r3, 0x0(r27)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r26)
    mr r21, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r21, 0x0
    bge lbl_fn_8044A1D8_00001224
    cmpwi r3, 0x0
    blt lbl_fn_8044A1D8_00001224
    li r0, 0x0
    b lbl_fn_8044A1D8_00001288
lbl_fn_8044A1D8_00001224:
    cmpwi r21, 0x0
    blt lbl_fn_8044A1D8_0000123C
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_0000123C
    li r0, 0x1
    b lbl_fn_8044A1D8_00001288
lbl_fn_8044A1D8_0000123C:
    cmpwi r21, 0x0
    bge lbl_fn_8044A1D8_00001274
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001274
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044A1D8_00001288
lbl_fn_8044A1D8_00001274:
    xor r0, r3, r21
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044A1D8_00001288:
    cmpwi r0, 0x0
    beq lbl_fn_8044A1D8_000011E4
lbl_fn_8044A1D8_00001290:
    cmplw r28, r27
    bge lbl_fn_8044A1D8_00001774
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x248(r1)
    mr r4, r27
    lwz r0, 0x4(r28)
    stw r0, 0x24c(r1)
    lwz r0, 0x8(r28)
    stw r0, 0x250(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x254(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x258(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x25c(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x260(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x264(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x268(r1)
    lwz r0, 0x24(r28)
    stw r0, 0x26c(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0x274(r1)
    stw r3, 0x270(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0x27c(r1)
    stw r3, 0x278(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0x284(r1)
    stw r3, 0x280(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0x28c(r1)
    stw r3, 0x288(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0x294(r1)
    stw r3, 0x290(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0x29c(r1)
    stw r3, 0x298(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0x2a4(r1)
    stw r3, 0x2a0(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0x2ac(r1)
    stw r3, 0x2a8(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x2b4(r1)
    stw r3, 0x2b0(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x2bc(r1)
    stw r3, 0x2b8(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x2c4(r1)
    stw r3, 0x2c0(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x2c8(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x2cc(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x2d0(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x2d4(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044A1D8_000013CC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044A1D8_000013CC
    lwz r0, 0x4(r4)
    mr r5, r27
    stw r0, 0x4(r6)
    addi r4, r1, 0x248
    lwz r0, 0x80(r27)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r27)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r27)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r27)
    stw r0, 0x8c(r28)
    lwz r0, 0x248(r1)
    stw r0, 0x0(r27)
    mtctr r31
lbl_fn_8044A1D8_0000141C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044A1D8_0000141C
    lwz r0, 0x4(r4)
    addi r28, r28, 0x90
    stw r0, 0x4(r5)
    lwz r0, 0x2c8(r1)
    stw r0, 0x80(r27)
    lwz r0, 0x2cc(r1)
    stw r0, 0x84(r27)
    lwz r0, 0x2d0(r1)
    stw r0, 0x88(r27)
    lwz r0, 0x2d4(r1)
    stw r0, 0x8c(r27)
    b lbl_fn_8044A1D8_00001464
lbl_fn_8044A1D8_00001460:
    addi r28, r28, 0x90
lbl_fn_8044A1D8_00001464:
    lwz r3, 0x0(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r26)
    mr r21, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r21, 0x0
    bge lbl_fn_8044A1D8_00001498
    cmpwi r3, 0x0
    blt lbl_fn_8044A1D8_00001498
    li r0, 0x0
    b lbl_fn_8044A1D8_000014FC
lbl_fn_8044A1D8_00001498:
    cmpwi r21, 0x0
    blt lbl_fn_8044A1D8_000014B0
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_000014B0
    li r0, 0x1
    b lbl_fn_8044A1D8_000014FC
lbl_fn_8044A1D8_000014B0:
    cmpwi r21, 0x0
    bge lbl_fn_8044A1D8_000014E8
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_000014E8
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044A1D8_000014FC
lbl_fn_8044A1D8_000014E8:
    xor r0, r3, r21
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044A1D8_000014FC:
    cmpwi r0, 0x0
    bne lbl_fn_8044A1D8_00001460
lbl_fn_8044A1D8_00001504:
    lwzu r3, -0x90(r27)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r26)
    mr r21, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r21, 0x0
    bge lbl_fn_8044A1D8_00001538
    cmpwi r3, 0x0
    blt lbl_fn_8044A1D8_00001538
    li r0, 0x0
    b lbl_fn_8044A1D8_0000159C
lbl_fn_8044A1D8_00001538:
    cmpwi r21, 0x0
    blt lbl_fn_8044A1D8_00001550
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001550
    li r0, 0x1
    b lbl_fn_8044A1D8_0000159C
lbl_fn_8044A1D8_00001550:
    cmpwi r21, 0x0
    bge lbl_fn_8044A1D8_00001588
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001588
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044A1D8_0000159C
lbl_fn_8044A1D8_00001588:
    xor r0, r3, r21
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044A1D8_0000159C:
    cmpwi r0, 0x0
    beq lbl_fn_8044A1D8_00001504
    cmplw r28, r27
    bge lbl_fn_8044A1D8_00001774
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x1b8(r1)
    mr r4, r27
    lwz r0, 0x4(r28)
    stw r0, 0x1bc(r1)
    lwz r0, 0x8(r28)
    stw r0, 0x1c0(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x1c4(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x1c8(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x1cc(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x1d0(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x1d4(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x1d8(r1)
    lwz r0, 0x24(r28)
    stw r0, 0x1dc(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0x1e4(r1)
    stw r3, 0x1e0(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0x1ec(r1)
    stw r3, 0x1e8(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0x1f4(r1)
    stw r3, 0x1f0(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0x1fc(r1)
    stw r3, 0x1f8(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0x204(r1)
    stw r3, 0x200(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0x20c(r1)
    stw r3, 0x208(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0x214(r1)
    stw r3, 0x210(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0x21c(r1)
    stw r3, 0x218(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x224(r1)
    stw r3, 0x220(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x22c(r1)
    stw r3, 0x228(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x234(r1)
    stw r3, 0x230(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x238(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x23c(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x240(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x244(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044A1D8_000016E0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044A1D8_000016E0
    lwz r0, 0x4(r4)
    mr r5, r27
    stw r0, 0x4(r6)
    addi r4, r1, 0x1b8
    lwz r0, 0x80(r27)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r27)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r27)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r27)
    stw r0, 0x8c(r28)
    lwz r0, 0x1b8(r1)
    stw r0, 0x0(r27)
    mtctr r31
lbl_fn_8044A1D8_00001730:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044A1D8_00001730
    lwz r0, 0x4(r4)
    addi r28, r28, 0x90
    stw r0, 0x4(r5)
    lwz r0, 0x238(r1)
    stw r0, 0x80(r27)
    lwz r0, 0x23c(r1)
    stw r0, 0x84(r27)
    lwz r0, 0x240(r1)
    stw r0, 0x88(r27)
    lwz r0, 0x244(r1)
    stw r0, 0x8c(r27)
    b lbl_fn_8044A1D8_00001464
lbl_fn_8044A1D8_00001774:
    cmplw r28, r23
    bne lbl_fn_8044A1D8_00001F88
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x128(r1)
    mr r4, r26
    lwz r0, 0x4(r28)
    stw r0, 0x12c(r1)
    lwz r0, 0x8(r28)
    stw r0, 0x130(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x134(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x138(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x13c(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x140(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x144(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x148(r1)
    lwz r0, 0x24(r28)
    stw r0, 0x14c(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0x154(r1)
    stw r3, 0x150(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0x15c(r1)
    stw r3, 0x158(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0x164(r1)
    stw r3, 0x160(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0x16c(r1)
    stw r3, 0x168(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0x174(r1)
    stw r3, 0x170(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0x17c(r1)
    stw r3, 0x178(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0x184(r1)
    stw r3, 0x180(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0x18c(r1)
    stw r3, 0x188(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x194(r1)
    stw r3, 0x190(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x19c(r1)
    stw r3, 0x198(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x1a4(r1)
    stw r3, 0x1a0(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x1a8(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x1ac(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x1b0(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x1b4(r1)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044A1D8_000018B0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044A1D8_000018B0
    lwz r0, 0x4(r4)
    mr r5, r26
    stw r0, 0x4(r6)
    addi r4, r1, 0x128
    lwz r0, 0x80(r26)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r26)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r26)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r26)
    stw r0, 0x8c(r28)
    lwz r0, 0x128(r1)
    stw r0, 0x0(r26)
    mtctr r31
lbl_fn_8044A1D8_00001900:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044A1D8_00001900
    lwz r0, 0x4(r4)
    subi r27, r24, 0x90
    stw r0, 0x4(r5)
    addi r28, r28, 0x90
    lwz r0, 0x1a8(r1)
    stw r0, 0x80(r26)
    lwz r0, 0x1ac(r1)
    stw r0, 0x84(r26)
    lwz r0, 0x1b0(r1)
    stw r0, 0x88(r26)
    lwz r0, 0x1b4(r1)
    stw r0, 0x8c(r26)
    lwz r3, 0x0(r23)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r27)
    mr r26, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r26, 0x0
    bge lbl_fn_8044A1D8_00001978
    cmpwi r3, 0x0
    blt lbl_fn_8044A1D8_00001978
    li r0, 0x0
    b lbl_fn_8044A1D8_000019DC
lbl_fn_8044A1D8_00001978:
    cmpwi r26, 0x0
    blt lbl_fn_8044A1D8_00001990
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001990
    li r0, 0x1
    b lbl_fn_8044A1D8_000019DC
lbl_fn_8044A1D8_00001990:
    cmpwi r26, 0x0
    bge lbl_fn_8044A1D8_000019C8
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_000019C8
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r27)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044A1D8_000019DC
lbl_fn_8044A1D8_000019C8:
    xor r0, r3, r26
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044A1D8_000019DC:
    cmpwi r0, 0x0
    bne lbl_fn_8044A1D8_00001C5C
    b lbl_fn_8044A1D8_000019EC
lbl_fn_8044A1D8_000019E8:
    addi r28, r28, 0x90
lbl_fn_8044A1D8_000019EC:
    cmplw r28, r24
    beq lbl_fn_8044A1D8_00001A94
    lwz r3, 0x0(r23)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r28)
    mr r26, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r26, 0x0
    bge lbl_fn_8044A1D8_00001A28
    cmpwi r3, 0x0
    blt lbl_fn_8044A1D8_00001A28
    li r0, 0x0
    b lbl_fn_8044A1D8_00001A8C
lbl_fn_8044A1D8_00001A28:
    cmpwi r26, 0x0
    blt lbl_fn_8044A1D8_00001A40
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001A40
    li r0, 0x1
    b lbl_fn_8044A1D8_00001A8C
lbl_fn_8044A1D8_00001A40:
    cmpwi r26, 0x0
    bge lbl_fn_8044A1D8_00001A78
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001A78
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r28)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044A1D8_00001A8C
lbl_fn_8044A1D8_00001A78:
    xor r0, r3, r26
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044A1D8_00001A8C:
    cmpwi r0, 0x0
    beq lbl_fn_8044A1D8_000019E8
lbl_fn_8044A1D8_00001A94:
    cmplw r28, r27
    bge lbl_fn_8044A1D8_00001C5C
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x98(r1)
    mr r4, r27
    lwz r0, 0x4(r28)
    stw r0, 0x9c(r1)
    lwz r0, 0x8(r28)
    stw r0, 0xa0(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0xa4(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0xa8(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0xac(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0xb0(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0xb4(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0xb8(r1)
    lwz r0, 0x24(r28)
    stw r0, 0xbc(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0xc4(r1)
    stw r3, 0xc0(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0xcc(r1)
    stw r3, 0xc8(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0xd4(r1)
    stw r3, 0xd0(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0xdc(r1)
    stw r3, 0xd8(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0xe4(r1)
    stw r3, 0xe0(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0xec(r1)
    stw r3, 0xe8(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0xf4(r1)
    stw r3, 0xf0(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0xfc(r1)
    stw r3, 0xf8(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x104(r1)
    stw r3, 0x100(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x10c(r1)
    stw r3, 0x108(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x114(r1)
    stw r3, 0x110(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x118(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x11c(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x120(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x124(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044A1D8_00001BD0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044A1D8_00001BD0
    lwz r0, 0x4(r4)
    mr r5, r27
    stw r0, 0x4(r6)
    addi r4, r1, 0x98
    lwz r0, 0x80(r27)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r27)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r27)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r27)
    stw r0, 0x8c(r28)
    lwz r0, 0x98(r1)
    stw r0, 0x0(r27)
    mtctr r31
lbl_fn_8044A1D8_00001C20:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044A1D8_00001C20
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x118(r1)
    stw r0, 0x80(r27)
    lwz r0, 0x11c(r1)
    stw r0, 0x84(r27)
    lwz r0, 0x120(r1)
    stw r0, 0x88(r27)
    lwz r0, 0x124(r1)
    stw r0, 0x8c(r27)
lbl_fn_8044A1D8_00001C5C:
    cmplw r28, r27
    bge lbl_fn_8044A1D8_00001F80
    b lbl_fn_8044A1D8_00001C6C
lbl_fn_8044A1D8_00001C68:
    addi r28, r28, 0x90
lbl_fn_8044A1D8_00001C6C:
    lwz r3, 0x0(r23)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r28)
    mr r26, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r26, 0x0
    bge lbl_fn_8044A1D8_00001CA0
    cmpwi r3, 0x0
    blt lbl_fn_8044A1D8_00001CA0
    li r0, 0x0
    b lbl_fn_8044A1D8_00001D04
lbl_fn_8044A1D8_00001CA0:
    cmpwi r26, 0x0
    blt lbl_fn_8044A1D8_00001CB8
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001CB8
    li r0, 0x1
    b lbl_fn_8044A1D8_00001D04
lbl_fn_8044A1D8_00001CB8:
    cmpwi r26, 0x0
    bge lbl_fn_8044A1D8_00001CF0
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001CF0
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r28)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044A1D8_00001D04
lbl_fn_8044A1D8_00001CF0:
    xor r0, r3, r26
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044A1D8_00001D04:
    cmpwi r0, 0x0
    beq lbl_fn_8044A1D8_00001C68
lbl_fn_8044A1D8_00001D0C:
    lwz r3, 0x0(r23)
    subi r27, r27, 0x90
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x0(r27)
    mr r26, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r26, 0x0
    bge lbl_fn_8044A1D8_00001D44
    cmpwi r3, 0x0
    blt lbl_fn_8044A1D8_00001D44
    li r0, 0x0
    b lbl_fn_8044A1D8_00001DA8
lbl_fn_8044A1D8_00001D44:
    cmpwi r26, 0x0
    blt lbl_fn_8044A1D8_00001D5C
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001D5C
    li r0, 0x1
    b lbl_fn_8044A1D8_00001DA8
lbl_fn_8044A1D8_00001D5C:
    cmpwi r26, 0x0
    bge lbl_fn_8044A1D8_00001D94
    cmpwi r3, 0x0
    bge lbl_fn_8044A1D8_00001D94
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r27)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8044A1D8_00001DA8
lbl_fn_8044A1D8_00001D94:
    xor r0, r3, r26
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_8044A1D8_00001DA8:
    cmpwi r0, 0x0
    bne lbl_fn_8044A1D8_00001D0C
    cmplw r28, r27
    bge lbl_fn_8044A1D8_00001F80
    lwz r0, 0x0(r28)
    mr r6, r28
    stw r0, 0x8(r1)
    mr r4, r27
    lwz r0, 0x4(r28)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r28)
    stw r0, 0x10(r1)
    lfs f0, 0xc(r28)
    stfs f0, 0x14(r1)
    lfs f0, 0x10(r28)
    stfs f0, 0x18(r1)
    lfs f0, 0x14(r28)
    stfs f0, 0x1c(r1)
    lfs f0, 0x18(r28)
    stfs f0, 0x20(r1)
    lfs f0, 0x1c(r28)
    stfs f0, 0x24(r1)
    lfs f0, 0x20(r28)
    stfs f0, 0x28(r1)
    lwz r0, 0x24(r28)
    stw r0, 0x2c(r1)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0x34(r1)
    stw r3, 0x30(r1)
    lwz r3, 0x30(r28)
    lwz r0, 0x34(r28)
    stw r0, 0x3c(r1)
    stw r3, 0x38(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r0, 0x44(r1)
    stw r3, 0x40(r1)
    lwz r3, 0x40(r28)
    lwz r0, 0x44(r28)
    stw r0, 0x4c(r1)
    stw r3, 0x48(r1)
    lwz r3, 0x48(r28)
    lwz r0, 0x4c(r28)
    stw r0, 0x54(r1)
    stw r3, 0x50(r1)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    stw r0, 0x5c(r1)
    stw r3, 0x58(r1)
    lwz r3, 0x58(r28)
    lwz r0, 0x5c(r28)
    stw r0, 0x64(r1)
    stw r3, 0x60(r1)
    lwz r3, 0x60(r28)
    lwz r0, 0x64(r28)
    stw r0, 0x6c(r1)
    stw r3, 0x68(r1)
    lwz r3, 0x68(r28)
    lwz r0, 0x6c(r28)
    stw r0, 0x74(r1)
    stw r3, 0x70(r1)
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x7c(r1)
    stw r3, 0x78(r1)
    lwz r3, 0x78(r28)
    lwz r0, 0x7c(r28)
    stw r0, 0x84(r1)
    stw r3, 0x80(r1)
    lwz r0, 0x80(r28)
    stw r0, 0x88(r1)
    lwz r0, 0x84(r28)
    stw r0, 0x8c(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x90(r1)
    lwz r0, 0x8c(r28)
    stw r0, 0x94(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    mtctr r31
lbl_fn_8044A1D8_00001EEC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8044A1D8_00001EEC
    lwz r0, 0x4(r4)
    mr r5, r27
    stw r0, 0x4(r6)
    addi r4, r1, 0x8
    lwz r0, 0x80(r27)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r27)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r27)
    stw r0, 0x88(r28)
    lwz r0, 0x8c(r27)
    stw r0, 0x8c(r28)
    lwz r0, 0x8(r1)
    stw r0, 0x0(r27)
    mtctr r31
lbl_fn_8044A1D8_00001F3C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8044A1D8_00001F3C
    lwz r0, 0x4(r4)
    addi r28, r28, 0x90
    stw r0, 0x4(r5)
    lwz r0, 0x88(r1)
    stw r0, 0x80(r27)
    lwz r0, 0x8c(r1)
    stw r0, 0x84(r27)
    lwz r0, 0x90(r1)
    stw r0, 0x88(r27)
    lwz r0, 0x94(r1)
    stw r0, 0x8c(r27)
    b lbl_fn_8044A1D8_00001C6C
lbl_fn_8044A1D8_00001F80:
    mr r23, r28
    b lbl_fn_8044A1D8_00000DC4
lbl_fn_8044A1D8_00001F88:
    subf r0, r23, r28
    subi r4, r22, 0x71c7
    mulhw r3, r4, r0
    subf r0, r28, r24
    mulhw r0, r4, r0
    srawi r3, r3, 5
    srwi r4, r3, 31
    srawi r0, r0, 5
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_8044A1D8_00001FD4
    mr r3, r23
    mr r4, r28
    mr r5, r25
    bl fn_8044B44C
    mr r23, r28
    b lbl_fn_8044A1D8_00000DC4
lbl_fn_8044A1D8_00001FD4:
    mr r3, r28
    mr r4, r24
    mr r5, r25
    bl fn_8044B44C
    mr r24, r28
    b lbl_fn_8044A1D8_00000DC4
lbl_fn_8044A1D8_00001FEC:
    addi r11, r1, 0x3a0
    bl _restgpr_21
    lwz r0, 0x3a4(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}
