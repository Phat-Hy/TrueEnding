#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_22(void);
extern void _savegpr_19(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_80064AC4(void);
extern void fn_800BFAC8(void);
extern void fn_800DC6B4(void);
extern void fn_800E0000(void);
extern void fn_801231D0(void);
extern void fn_80124C6C(void);
extern void fn_801F48C8(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_803DCA84(void);
extern void fn_803DCD34(void);
extern void fn_803DE648(void);
extern void fn_803DEE24(void);
extern void fn_80481654(void);
extern void fn_8059A268(void);
extern void fn_805AA828(void);
extern void fn_805AE038(void);
extern void fn_805F9920(void);
extern void fn_80686A64(void);
extern void fn_8068AEA8(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80750650[];
extern u8 lbl_80750688[];
extern u8 lbl_807506A0[];
extern u8 lbl_8078C638[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F540;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F8;
extern u32 lbl_80885D58;
extern u32 lbl_80885D5C;
extern u32 lbl_80885D60;
extern u32 lbl_80885D68;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E10;
extern u32 lbl_80885E1C;
extern u32 lbl_80885E24;
extern u32 lbl_80885E60;
extern u32 lbl_80885E64;
extern u32 lbl_80885E68;
extern u32 lbl_80885E74;
extern u32 lbl_80885E84;
extern u32 lbl_80885E9C;
extern u32 lbl_80885EA0;
extern u32 lbl_80885EA4;
extern u32 lbl_80885EA8;
extern u32 lbl_80885EAC;
extern u32 lbl_80885EB0;
extern u32 lbl_80885EB4;
extern u32 lbl_80885EB8;
extern u32 lbl_80885EBC;
extern u32 lbl_80885EC0;
extern u32 lbl_80885EC4;

/* Function declarations */
void fn_803DAB4C(void);
void fn_803DBD44(void);

asm void fn_803DAB4C(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x110
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0xdc8(r3)
    mr r26, r3
    mr r27, r5
    cmpwi r0, 0x0
    beq lbl_fn_803DAB4C_000011C0
    lwz r5, 0x10f4(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803DAB4C_00000064
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r5)
lbl_fn_803DAB4C_00000064:
    lwz r5, 0x10f4(r3)
    cmpwi r4, 0x0
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r4, 0x2544(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x2548(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    bne lbl_fn_803DAB4C_0000012C
    lwz r4, 0xb24(r3)
    li r0, 0x1
    stw r0, 0xdcc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803DAB4C_000011A8
    lwz r0, 0x38(r4)
    lfs f0, lbl_80885D58
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb24(r3)
    stfs f0, 0x100(r4)
    lwz r4, 0xb28(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb28(r3)
    stfs f0, 0x100(r4)
    lwz r4, 0xb2c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb2c(r3)
    stfs f0, 0x100(r4)
    lwz r4, 0xb30(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb30(r3)
    stfs f0, 0x100(r4)
    lwz r4, 0xb34(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r3, 0xb34(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_803DAB4C_000011A8
lbl_fn_803DAB4C_0000012C:
    lwz r4, 0xdcc(r3)
    cmpwi r4, 0x0
    blt lbl_fn_803DAB4C_00000140
    subi r0, r4, 0x1
    stw r0, 0xdcc(r3)
lbl_fn_803DAB4C_00000140:
    li r30, 0x0
    stw r30, 0x253c(r3)
    lwz r31, lbl_8087F9F8
    cmpwi r31, 0x0
    beq lbl_fn_803DAB4C_00000E3C
    lwz r0, 0xa70(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803DAB4C_00000E3C
    lwz r5, lbl_8087F430
    addi r4, r1, 0x98
    addi r5, r5, 0x910
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    beq lbl_fn_803DAB4C_000001D8
    lfs f3, 0xdd0(r3)
    lis r4, lbl_80750688@ha
    lfs f0, lbl_80885E9C
    lfd f2, lbl_80750688@l(r4)
    fsubs f1, f3, f0
    stfs f1, 0xdd0(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80885EA0
    fcmpo cr0, f3, f0
    ble lbl_fn_803DAB4C_000001BC
    lfs f0, lbl_80885E10
    fsubs f3, f3, f0
lbl_fn_803DAB4C_000001BC:
    lfs f0, lbl_80885EA4
    fcmpo cr0, f3, f0
    bge lbl_fn_803DAB4C_000001D0
    lfs f0, lbl_80885E10
    fadds f3, f3, f0
lbl_fn_803DAB4C_000001D0:
    stfs f3, 0xdd0(r26)
    b lbl_fn_803DAB4C_0000023C
lbl_fn_803DAB4C_000001D8:
    lwz r0, 0x15d8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803DAB4C_00000234
    lfs f3, 0xdd0(r3)
    lis r4, lbl_80750688@ha
    lfs f0, lbl_80885EA8
    lfd f2, lbl_80750688@l(r4)
    fsubs f1, f3, f0
    stfs f1, 0xdd0(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80885EA0
    fcmpo cr0, f3, f0
    ble lbl_fn_803DAB4C_00000218
    lfs f0, lbl_80885E10
    fsubs f3, f3, f0
lbl_fn_803DAB4C_00000218:
    lfs f0, lbl_80885EA4
    fcmpo cr0, f3, f0
    bge lbl_fn_803DAB4C_0000022C
    lfs f0, lbl_80885E10
    fadds f3, f3, f0
lbl_fn_803DAB4C_0000022C:
    stfs f3, 0xdd0(r26)
    b lbl_fn_803DAB4C_0000023C
lbl_fn_803DAB4C_00000234:
    lfs f0, lbl_80885D58
    stfs f0, 0xdd0(r3)
lbl_fn_803DAB4C_0000023C:
    lfs f4, lbl_80885E60
    addi r3, r1, 0x74
    lfs f0, lbl_80885EAC
    addi r5, r1, 0x98
    lfs f3, 0x9c(r1)
    fmuls f5, f4, f0
    lfs f0, lbl_80885D60
    lfs f4, lbl_80885E84
    stfs f5, 0x8c(r1)
    fadds f0, f3, f0
    lfs f3, lbl_80885D58
    stfs f5, 0x90(r1)
    lwz r4, lbl_8087EFB4
    stfs f5, 0x94(r1)
    lfs f5, 0xdd0(r26)
    stfs f5, 0x84(r1)
    stfs f4, 0x80(r1)
    stfs f3, 0x88(r1)
    stfs f0, 0x9c(r1)
    bl fn_800BFAC8
    lwz r3, lbl_8087F9F8
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803DAB4C_0000032C
    lwz r0, 0x15d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803DAB4C_0000032C
    lwz r4, 0x10f4(r26)
    lis r23, lbl_807506A0@ha
    addi r23, r23, lbl_807506A0@l
    lwz r0, 0x38(r4)
    addi r3, r23, 0x12cb
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x10f4(r26)
    lfs f29, 0x74(r1)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r24
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x10f4(r26)
    addi r3, r23, 0x12cb
    lfs f29, 0x78(r1)
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r23
    li r5, 0x1
    bl fn_801FED24
    lwz r3, 0x10f4(r26)
    lfs f0, lbl_80885D68
    lfs f3, 0x100(r3)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_0000032C
    stfs f0, 0x100(r3)
lbl_fn_803DAB4C_0000032C:
    lwz r3, lbl_8087F9F8
    lwz r0, 0x15d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803DAB4C_00000E08
    lwz r5, lbl_8087F430
    addi r4, r1, 0x68
    li r29, 0x1
    li r28, 0x0
    addi r5, r5, 0x910
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x15d8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803DAB4C_0000045C
    lfs f31, lbl_80885E1C
    addi r24, r1, 0x58
    lfs f29, lbl_80885E24
    li r22, 0x0
    lfs f30, lbl_80885E74
    li r25, 0x0
lbl_fn_803DAB4C_00000384:
    cmplwi r22, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_803DAB4C_00000398
    li r23, 0x0
    b lbl_fn_803DAB4C_000003A0
lbl_fn_803DAB4C_00000398:
    add r3, r0, r25
    addi r23, r3, 0x48
lbl_fn_803DAB4C_000003A0:
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    beq lbl_fn_803DAB4C_0000044C
    lfs f3, 0x5c(r23)
    addi r3, r1, 0x28
    lfs f0, 0x28(r23)
    psq_l f1, 0x10(r23), 0, 0
    fmuls f7, f3, f0
    psq_st f1, 0x0(r24), 0, 0
    lfs f2, 0x18(r23)
    lfs f0, 0x70(r1)
    lfs f5, 0x5c(r1)
    fadds f28, f29, f7
    fsubs f6, f2, f0
    lfs f4, 0x6c(r1)
    lfs f3, 0x58(r1)
    lfs f0, 0x68(r1)
    fsubs f4, f5, f4
    stfs f2, 0x60(r1)
    fsubs f0, f3, f0
    stfs f7, 0x64(r1)
    stfs f0, 0x28(r1)
    stfs f4, 0x2c(r1)
    stfs f6, 0x30(r1)
    bl fn_805F9920
    lfs f3, 0x5c(r23)
    lfs f0, 0x28(r23)
    fmuls f0, f3, f0
    fcmpo cr0, f0, f30
    ble lbl_fn_803DAB4C_0000044C
    fmuls f0, f28, f28
    fcmpo cr0, f1, f0
    bge lbl_fn_803DAB4C_0000044C
    fcmpo cr0, f1, f31
    bge lbl_fn_803DAB4C_0000044C
    lwz r3, 0x4(r23)
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    beq lbl_fn_803DAB4C_0000044C
    mr r28, r23
    fmr f31, f1
lbl_fn_803DAB4C_0000044C:
    addi r22, r22, 0x1
    addi r25, r25, 0x140
    cmplwi r22, 0x20
    blt lbl_fn_803DAB4C_00000384
lbl_fn_803DAB4C_0000045C:
    lfs f3, lbl_80885D58
    cmpwi r28, 0x0
    lfs f0, lbl_80885D60
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    beq lbl_fn_803DAB4C_000004B4
    lwz r22, 0x4(r28)
    mr r3, r28
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_803DAB4C_00000494
    addi r22, r28, 0x80
lbl_fn_803DAB4C_00000494:
    cmpwi r22, 0x0
    beq lbl_fn_803DAB4C_000004AC
    lwz r0, 0xac(r22)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x40
    bne lbl_fn_803DAB4C_000004B8
lbl_fn_803DAB4C_000004AC:
    li r29, 0x0
    b lbl_fn_803DAB4C_000004B8
lbl_fn_803DAB4C_000004B4:
    li r29, 0x0
lbl_fn_803DAB4C_000004B8:
    lwz r4, lbl_8087F9F8
    li r3, 0x0
    lwz r0, 0x1598(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803DAB4C_000004D8
    lbz r0, 0x15ec(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803DAB4C_000004DC
lbl_fn_803DAB4C_000004D8:
    li r3, 0x1
lbl_fn_803DAB4C_000004DC:
    cmpwi r3, 0x0
    bne lbl_fn_803DAB4C_000007FC
    lfs f0, 0x2678(r26)
    stfs f0, 0x48(r1)
    lfs f0, lbl_80885D60
    lfs f3, 0x267c(r26)
    stfs f3, 0x4c(r1)
    lfs f3, 0x2680(r26)
    stfs f3, 0x50(r1)
    lfs f3, 0x2684(r26)
    stfs f3, 0x54(r1)
    lfs f4, 0x2688(r26)
    stfs f4, 0x38(r1)
    fcmpo cr0, f4, f0
    lfs f0, 0x268c(r26)
    stfs f0, 0x3c(r1)
    lfs f0, 0x2690(r26)
    stfs f0, 0x40(r1)
    lfs f0, 0x2694(r26)
    stfs f0, 0x44(r1)
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_0000053C
    li r28, 0xff
    b lbl_fn_803DAB4C_00000568
lbl_fn_803DAB4C_0000053C:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000554
    li r3, 0x0
    b lbl_fn_803DAB4C_00000564
lbl_fn_803DAB4C_00000554:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000564:
    mr r28, r3
lbl_fn_803DAB4C_00000568:
    lfs f4, 0x3c(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000584
    li r24, 0xff
    b lbl_fn_803DAB4C_000005B0
lbl_fn_803DAB4C_00000584:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_0000059C
    li r3, 0x0
    b lbl_fn_803DAB4C_000005AC
lbl_fn_803DAB4C_0000059C:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_000005AC:
    mr r24, r3
lbl_fn_803DAB4C_000005B0:
    lfs f4, 0x40(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_000005CC
    li r23, 0xff
    b lbl_fn_803DAB4C_000005F8
lbl_fn_803DAB4C_000005CC:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_000005E4
    li r3, 0x0
    b lbl_fn_803DAB4C_000005F4
lbl_fn_803DAB4C_000005E4:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_000005F4:
    mr r23, r3
lbl_fn_803DAB4C_000005F8:
    lfs f4, 0x44(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000614
    li r3, 0xff
    b lbl_fn_803DAB4C_0000063C
lbl_fn_803DAB4C_00000614:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_0000062C
    li r3, 0x0
    b lbl_fn_803DAB4C_0000063C
lbl_fn_803DAB4C_0000062C:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_0000063C:
    addi r0, r26, 0xe04
    stw r0, 0x8(r1)
    li r25, 0x0
    slwi r4, r24, 8
    stw r25, 0xc(r1)
    or r9, r23, r4
    slwi r3, r3, 24
    slwi r0, r28, 16
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80885EB4
    addi r4, r1, 0x68
    addi r5, r1, 0x80
    addi r6, r1, 0x8c
    addi r7, r1, 0x20
    addi r8, r1, 0x18
    or r9, r9, r0
    li r10, 0x0
    bl fn_80064AC4
    lfs f4, 0x48(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_000006A4
    li r25, 0xff
    b lbl_fn_803DAB4C_000006CC
lbl_fn_803DAB4C_000006A4:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_000006B8
    b lbl_fn_803DAB4C_000006CC
lbl_fn_803DAB4C_000006B8:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
    mr r25, r3
lbl_fn_803DAB4C_000006CC:
    lfs f4, 0x4c(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_000006E8
    li r24, 0xff
    b lbl_fn_803DAB4C_00000714
lbl_fn_803DAB4C_000006E8:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000700
    li r3, 0x0
    b lbl_fn_803DAB4C_00000710
lbl_fn_803DAB4C_00000700:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000710:
    mr r24, r3
lbl_fn_803DAB4C_00000714:
    lfs f4, 0x50(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000730
    li r23, 0xff
    b lbl_fn_803DAB4C_0000075C
lbl_fn_803DAB4C_00000730:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000748
    li r3, 0x0
    b lbl_fn_803DAB4C_00000758
lbl_fn_803DAB4C_00000748:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000758:
    mr r23, r3
lbl_fn_803DAB4C_0000075C:
    lfs f4, 0x54(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000778
    li r3, 0xff
    b lbl_fn_803DAB4C_000007A0
lbl_fn_803DAB4C_00000778:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000790
    li r3, 0x0
    b lbl_fn_803DAB4C_000007A0
lbl_fn_803DAB4C_00000790:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_000007A0:
    addi r0, r26, 0xdd4
    stw r0, 0x8(r1)
    li r0, 0x0
    slwi r4, r24, 8
    stw r0, 0xc(r1)
    slwi r3, r3, 24
    slwi r0, r25, 16
    or r9, r23, r4
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80885EB8
    addi r4, r1, 0x68
    addi r5, r1, 0x80
    addi r6, r1, 0x8c
    addi r7, r1, 0x20
    addi r8, r1, 0x18
    or r9, r9, r0
    li r10, 0x0
    bl fn_80064AC4
    lwz r3, lbl_8087F9F8
    li r4, 0x0
    bl fn_805AE038
    b lbl_fn_803DAB4C_00000E08
lbl_fn_803DAB4C_000007FC:
    cmpwi r29, 0x0
    beq lbl_fn_803DAB4C_00000AF4
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0x48
    addi r6, r1, 0x38
    bl fn_803DEE24
    lfs f4, 0x38(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000834
    li r23, 0xff
    b lbl_fn_803DAB4C_00000860
lbl_fn_803DAB4C_00000834:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_0000084C
    li r3, 0x0
    b lbl_fn_803DAB4C_0000085C
lbl_fn_803DAB4C_0000084C:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_0000085C:
    mr r23, r3
lbl_fn_803DAB4C_00000860:
    lfs f4, 0x3c(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_0000087C
    li r25, 0xff
    b lbl_fn_803DAB4C_000008A8
lbl_fn_803DAB4C_0000087C:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000894
    li r3, 0x0
    b lbl_fn_803DAB4C_000008A4
lbl_fn_803DAB4C_00000894:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_000008A4:
    mr r25, r3
lbl_fn_803DAB4C_000008A8:
    lfs f4, 0x40(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_000008C4
    li r24, 0xff
    b lbl_fn_803DAB4C_000008F0
lbl_fn_803DAB4C_000008C4:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_000008DC
    li r3, 0x0
    b lbl_fn_803DAB4C_000008EC
lbl_fn_803DAB4C_000008DC:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_000008EC:
    mr r24, r3
lbl_fn_803DAB4C_000008F0:
    lfs f4, 0x44(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_0000090C
    li r3, 0xff
    b lbl_fn_803DAB4C_00000934
lbl_fn_803DAB4C_0000090C:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000924
    li r3, 0x0
    b lbl_fn_803DAB4C_00000934
lbl_fn_803DAB4C_00000924:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000934:
    addi r0, r26, 0xe04
    stw r0, 0x8(r1)
    li r29, 0x0
    slwi r4, r25, 8
    stw r29, 0xc(r1)
    or r9, r24, r4
    slwi r3, r3, 24
    slwi r0, r23, 16
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80885EB4
    addi r4, r1, 0x68
    addi r5, r1, 0x80
    addi r6, r1, 0x8c
    addi r7, r1, 0x20
    addi r8, r1, 0x18
    or r9, r9, r0
    li r10, 0x0
    bl fn_80064AC4
    lfs f4, 0x48(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_0000099C
    li r29, 0xff
    b lbl_fn_803DAB4C_000009C4
lbl_fn_803DAB4C_0000099C:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_000009B0
    b lbl_fn_803DAB4C_000009C4
lbl_fn_803DAB4C_000009B0:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
    mr r29, r3
lbl_fn_803DAB4C_000009C4:
    lfs f4, 0x4c(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_000009E0
    li r25, 0xff
    b lbl_fn_803DAB4C_00000A0C
lbl_fn_803DAB4C_000009E0:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_000009F8
    li r3, 0x0
    b lbl_fn_803DAB4C_00000A08
lbl_fn_803DAB4C_000009F8:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000A08:
    mr r25, r3
lbl_fn_803DAB4C_00000A0C:
    lfs f4, 0x50(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000A28
    li r24, 0xff
    b lbl_fn_803DAB4C_00000A54
lbl_fn_803DAB4C_00000A28:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000A40
    li r3, 0x0
    b lbl_fn_803DAB4C_00000A50
lbl_fn_803DAB4C_00000A40:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000A50:
    mr r24, r3
lbl_fn_803DAB4C_00000A54:
    lfs f4, 0x54(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000A70
    li r3, 0xff
    b lbl_fn_803DAB4C_00000A98
lbl_fn_803DAB4C_00000A70:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000A88
    li r3, 0x0
    b lbl_fn_803DAB4C_00000A98
lbl_fn_803DAB4C_00000A88:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000A98:
    addi r0, r26, 0xdd4
    stw r0, 0x8(r1)
    li r0, 0x0
    slwi r4, r25, 8
    stw r0, 0xc(r1)
    slwi r3, r3, 24
    slwi r0, r29, 16
    or r9, r24, r4
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80885EB8
    addi r4, r1, 0x68
    addi r5, r1, 0x80
    addi r6, r1, 0x8c
    addi r7, r1, 0x20
    addi r8, r1, 0x18
    or r9, r9, r0
    li r10, 0x0
    bl fn_80064AC4
    lwz r3, lbl_8087F9F8
    mr r4, r28
    bl fn_805AE038
    b lbl_fn_803DAB4C_00000E08
lbl_fn_803DAB4C_00000AF4:
    lfs f0, 0x2698(r26)
    stfs f0, 0x48(r1)
    lfs f0, lbl_80885D60
    lfs f3, 0x269c(r26)
    stfs f3, 0x4c(r1)
    lfs f3, 0x26a0(r26)
    stfs f3, 0x50(r1)
    lfs f3, 0x26a4(r26)
    stfs f3, 0x54(r1)
    lfs f4, 0x26a8(r26)
    stfs f4, 0x38(r1)
    fcmpo cr0, f4, f0
    lfs f0, 0x26ac(r26)
    stfs f0, 0x3c(r1)
    lfs f0, 0x26b0(r26)
    stfs f0, 0x40(r1)
    lfs f0, 0x26b4(r26)
    stfs f0, 0x44(r1)
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000B4C
    li r24, 0xff
    b lbl_fn_803DAB4C_00000B78
lbl_fn_803DAB4C_00000B4C:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000B64
    li r3, 0x0
    b lbl_fn_803DAB4C_00000B74
lbl_fn_803DAB4C_00000B64:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000B74:
    mr r24, r3
lbl_fn_803DAB4C_00000B78:
    lfs f4, 0x3c(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000B94
    li r28, 0xff
    b lbl_fn_803DAB4C_00000BC0
lbl_fn_803DAB4C_00000B94:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000BAC
    li r3, 0x0
    b lbl_fn_803DAB4C_00000BBC
lbl_fn_803DAB4C_00000BAC:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000BBC:
    mr r28, r3
lbl_fn_803DAB4C_00000BC0:
    lfs f4, 0x40(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000BDC
    li r25, 0xff
    b lbl_fn_803DAB4C_00000C08
lbl_fn_803DAB4C_00000BDC:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000BF4
    li r3, 0x0
    b lbl_fn_803DAB4C_00000C04
lbl_fn_803DAB4C_00000BF4:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000C04:
    mr r25, r3
lbl_fn_803DAB4C_00000C08:
    lfs f4, 0x44(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000C24
    li r3, 0xff
    b lbl_fn_803DAB4C_00000C4C
lbl_fn_803DAB4C_00000C24:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000C3C
    li r3, 0x0
    b lbl_fn_803DAB4C_00000C4C
lbl_fn_803DAB4C_00000C3C:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000C4C:
    addi r0, r26, 0xe04
    stw r0, 0x8(r1)
    li r29, 0x0
    slwi r4, r28, 8
    stw r29, 0xc(r1)
    or r9, r25, r4
    slwi r3, r3, 24
    slwi r0, r24, 16
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80885EB4
    addi r4, r1, 0x68
    addi r5, r1, 0x80
    addi r6, r1, 0x8c
    addi r7, r1, 0x20
    addi r8, r1, 0x18
    or r9, r9, r0
    li r10, 0x0
    bl fn_80064AC4
    lfs f4, 0x48(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000CB4
    li r29, 0xff
    b lbl_fn_803DAB4C_00000CDC
lbl_fn_803DAB4C_00000CB4:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000CC8
    b lbl_fn_803DAB4C_00000CDC
lbl_fn_803DAB4C_00000CC8:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
    mr r29, r3
lbl_fn_803DAB4C_00000CDC:
    lfs f4, 0x4c(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000CF8
    li r28, 0xff
    b lbl_fn_803DAB4C_00000D24
lbl_fn_803DAB4C_00000CF8:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000D10
    li r3, 0x0
    b lbl_fn_803DAB4C_00000D20
lbl_fn_803DAB4C_00000D10:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000D20:
    mr r28, r3
lbl_fn_803DAB4C_00000D24:
    lfs f4, 0x50(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000D40
    li r25, 0xff
    b lbl_fn_803DAB4C_00000D6C
lbl_fn_803DAB4C_00000D40:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000D58
    li r3, 0x0
    b lbl_fn_803DAB4C_00000D68
lbl_fn_803DAB4C_00000D58:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000D68:
    mr r25, r3
lbl_fn_803DAB4C_00000D6C:
    lfs f4, 0x54(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000D88
    li r3, 0xff
    b lbl_fn_803DAB4C_00000DB0
lbl_fn_803DAB4C_00000D88:
    lfs f0, lbl_80885D58
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_803DAB4C_00000DA0
    li r3, 0x0
    b lbl_fn_803DAB4C_00000DB0
lbl_fn_803DAB4C_00000DA0:
    lfs f3, lbl_80885EB0
    lfs f0, lbl_80885DFC
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_803DAB4C_00000DB0:
    addi r0, r26, 0xdd4
    stw r0, 0x8(r1)
    li r0, 0x0
    slwi r4, r28, 8
    stw r0, 0xc(r1)
    slwi r3, r3, 24
    slwi r0, r29, 16
    or r9, r25, r4
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80885EB8
    addi r4, r1, 0x68
    addi r5, r1, 0x80
    addi r6, r1, 0x8c
    addi r7, r1, 0x20
    addi r8, r1, 0x18
    or r9, r9, r0
    li r10, 0x0
    bl fn_80064AC4
    lwz r3, lbl_8087F9F8
    li r4, 0x0
    bl fn_805AE038
lbl_fn_803DAB4C_00000E08:
    lwz r0, 0xb24(r26)
    cmpwi r0, 0x0
    beq lbl_fn_803DAB4C_00000E3C
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    beq lbl_fn_803DAB4C_00000E3C
    lwz r3, lbl_8087F9F8
    li r30, 0x1
    bl fn_805AA828
    cmpwi r3, 0x0
    stw r3, 0x253c(r26)
    bne lbl_fn_803DAB4C_00000E3C
    li r30, 0x0
lbl_fn_803DAB4C_00000E3C:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_803DAB4C_00000E58
    lwz r0, 0xa7c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803DAB4C_00000E58
    li r30, 0x0
lbl_fn_803DAB4C_00000E58:
    cmpwi r30, 0x0
    beq lbl_fn_803DAB4C_00000E78
    lwz r0, 0x2540(r26)
    cmpwi r0, 0x0
    bne lbl_fn_803DAB4C_00000E98
    li r0, 0x1
    stw r0, 0x2540(r26)
    b lbl_fn_803DAB4C_00000E98
lbl_fn_803DAB4C_00000E78:
    lwz r0, 0x2540(r26)
    cmpwi r0, 0x2
    bne lbl_fn_803DAB4C_00000E98
    li r0, 0x3
    stw r0, 0x2540(r26)
    lwz r3, 0x2544(r26)
    lfs f0, lbl_80885E68
    stfs f0, 0x100(r3)
lbl_fn_803DAB4C_00000E98:
    lwz r0, 0x2540(r26)
    cmpwi r0, 0x0
    beq lbl_fn_803DAB4C_00000EC0
    cmpwi r0, 0x1
    beq lbl_fn_803DAB4C_00000ED8
    cmpwi r0, 0x2
    beq lbl_fn_803DAB4C_00000F0C
    cmpwi r0, 0x3
    beq lbl_fn_803DAB4C_00000F20
    b lbl_fn_803DAB4C_00000F50
lbl_fn_803DAB4C_00000EC0:
    lwz r3, 0x2544(r26)
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
    lwz r3, 0x2548(r26)
    stfs f0, 0x100(r3)
    b lbl_fn_803DAB4C_00000F50
lbl_fn_803DAB4C_00000ED8:
    lwz r3, 0x2544(r26)
    lfs f0, lbl_80885D68
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x2544(r26)
    lfs f3, 0x100(r3)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000F50
    li r0, 0x2
    stw r0, 0x2540(r26)
    b lbl_fn_803DAB4C_00000F50
lbl_fn_803DAB4C_00000F0C:
    lwz r3, 0x2548(r26)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_803DAB4C_00000F50
lbl_fn_803DAB4C_00000F20:
    lwz r3, 0x2544(r26)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x2544(r26)
    lfs f0, 0xa0(r3)
    lfs f3, 0x100(r3)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803DAB4C_00000F50
    li r0, 0x0
    stw r0, 0x2540(r26)
lbl_fn_803DAB4C_00000F50:
    lwz r0, 0x2540(r26)
    cmpwi r0, 0x3
    beq lbl_fn_803DAB4C_000011A8
    lfs f28, lbl_80885E74
    addi r3, r1, 0xa8
    li r4, 0x0
    li r5, 0x40
    bl memset
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r0, 0x253c(r26)
    cmpwi r0, 0x2
    beq lbl_fn_803DAB4C_00000FA0
    cmpwi r0, 0x1
    beq lbl_fn_803DAB4C_00000FC4
    cmpwi r0, 0x3
    beq lbl_fn_803DAB4C_00000FE8
    b lbl_fn_803DAB4C_00001008
lbl_fn_803DAB4C_00000FA0:
    lis r25, lbl_8078C638@ha
    addi r3, r1, 0xa8
    addi r25, r25, lbl_8078C638@l
    addi r4, r25, 0x20
    bl fn_80686A64
    addi r3, r1, 0x10
    addi r4, r25, 0x30
    bl fn_80686A64
    b lbl_fn_803DAB4C_00001008
lbl_fn_803DAB4C_00000FC4:
    lis r25, lbl_8078C638@ha
    addi r3, r1, 0xa8
    addi r25, r25, lbl_8078C638@l
    addi r4, r25, 0x34
    bl fn_80686A64
    addi r3, r1, 0x10
    addi r4, r25, 0x30
    bl fn_80686A64
    b lbl_fn_803DAB4C_00001008
lbl_fn_803DAB4C_00000FE8:
    lis r25, lbl_8078C638@ha
    addi r3, r1, 0xa8
    addi r25, r25, lbl_8078C638@l
    addi r4, r25, 0x44
    bl fn_80686A64
    addi r3, r1, 0x10
    addi r4, r25, 0x30
    bl fn_80686A64
lbl_fn_803DAB4C_00001008:
    lwz r4, 0x2544(r26)
    lis r25, lbl_807506A0@ha
    addi r25, r25, lbl_807506A0@l
    addi r3, r25, 0x1122
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    addi r5, r1, 0xa8
    bl fn_801FEE08
    lwz r4, 0x2544(r26)
    addi r3, r25, 0x1130
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    addi r5, r1, 0xa8
    bl fn_801FEE08
    lwz r4, 0x2548(r26)
    addi r3, r25, 0x1122
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    addi r5, r1, 0xa8
    bl fn_801FEE08
    lwz r4, 0x2548(r26)
    addi r3, r25, 0x1130
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    addi r5, r1, 0xa8
    bl fn_801FEE08
    lwz r4, 0x2544(r26)
    addi r3, r25, 0x12d4
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    addi r5, r1, 0x10
    bl fn_801FEE08
    lwz r4, 0x2548(r26)
    addi r3, r25, 0x12d4
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    addi r5, r1, 0x10
    bl fn_801FEE08
    lwz r4, 0x2544(r26)
    addi r3, r25, 0x12e4
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f28
    mr r4, r3
    mr r3, r23
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x2548(r26)
    addi r3, r25, 0x12e4
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f28
    mr r4, r3
    mr r3, r23
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x2544(r26)
    addi r3, r25, 0x12ef
    addi r23, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885EBC
    mr r4, r3
    mr r3, r23
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x2548(r26)
    addi r3, r25, 0x12ef
    addi r23, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885EBC
    mr r4, r3
    mr r3, r23
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x2544(r26)
    addi r3, r25, 0x12ef
    addi r23, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885EC0
    mr r4, r3
    mr r3, r23
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x2548(r26)
    addi r3, r25, 0x12ef
    addi r23, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885EC0
    mr r4, r3
    mr r3, r23
    li r5, 0x1
    bl fn_801FED24
lbl_fn_803DAB4C_000011A8:
    cmpwi r27, 0x0
    bne lbl_fn_803DAB4C_000011B8
    mr r3, r26
    bl fn_803DBD44
lbl_fn_803DAB4C_000011B8:
    mr r3, r26
    bl fn_803DE648
lbl_fn_803DAB4C_000011C0:
    addi r11, r1, 0x110
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    bl _restgpr_22
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_803DBD44(void)
{
    nofralloc
    stwu r1, -0x410(r1)
    mflr r0
    stw r0, 0x414(r1)
    addi r11, r1, 0x3b0
    stfd f31, 0x400(r1)
    psq_st f31, 0x408(r1), 0, 0
    stfd f30, 0x3f0(r1)
    psq_st f30, 0x3f8(r1), 0, 0
    stfd f29, 0x3e0(r1)
    psq_st f29, 0x3e8(r1), 0, 0
    stfd f28, 0x3d0(r1)
    psq_st f28, 0x3d8(r1), 0, 0
    stfd f27, 0x3c0(r1)
    psq_st f27, 0x3c8(r1), 0, 0
    stfd f26, 0x3b0(r1)
    psq_st f26, 0x3b8(r1), 0, 0
    bl _savegpr_19
    lwz r0, 0xdc8(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803DBD44_00001EF0
    lwz r5, lbl_8087EEE0
    lis r8, 0x4330
    lis r4, lbl_80750650@ha
    stw r8, 0x368(r1)
    lwz r0, 0x3c(r5)
    li r7, 0x4
    lwz r5, 0x40(r5)
    mr r6, r31
    xoris r0, r0, 0x8000
    stw r0, 0x36c(r1)
    xoris r0, r5, 0x8000
    lfd f4, lbl_80750650@l(r4)
    stw r0, 0x374(r1)
    addi r5, r1, 0xe8
    lfd f0, 0x368(r1)
    li r4, 0x0
    stw r8, 0x370(r1)
    li r0, -0x1
    fsubs f29, f0, f4
    lfs f0, lbl_80885E1C
    lfd f3, 0x370(r1)
    fsubs f28, f3, f4
    mtctr r7
lbl_fn_803DBD44_000012A8:
    stw r4, 0xf94(r6)
    stw r0, 0x1014(r6)
    lwz r8, 0xf14(r6)
    stfs f0, 0x0(r5)
    lwz r7, 0x38(r8)
    stfs f0, 0x4(r5)
    ori r7, r7, 0x4
    stw r7, 0x38(r8)
    stw r4, 0xf98(r6)
    stw r0, 0x1018(r6)
    lwz r8, 0xf18(r6)
    stfs f0, 0x8(r5)
    lwz r7, 0x38(r8)
    stfs f0, 0xc(r5)
    ori r7, r7, 0x4
    stw r7, 0x38(r8)
    stw r4, 0xf9c(r6)
    stw r0, 0x101c(r6)
    lwz r8, 0xf1c(r6)
    stfs f0, 0x10(r5)
    lwz r7, 0x38(r8)
    stfs f0, 0x14(r5)
    ori r7, r7, 0x4
    stw r7, 0x38(r8)
    stw r4, 0xfa0(r6)
    stw r0, 0x1020(r6)
    lwz r8, 0xf20(r6)
    stfs f0, 0x18(r5)
    lwz r7, 0x38(r8)
    stfs f0, 0x1c(r5)
    addi r5, r5, 0x20
    ori r7, r7, 0x4
    stw r7, 0x38(r8)
    stw r4, 0xfa4(r6)
    stw r0, 0x1024(r6)
    lwz r8, 0xf24(r6)
    lwz r7, 0x38(r8)
    ori r7, r7, 0x4
    stw r7, 0x38(r8)
    stw r4, 0xfa8(r6)
    stw r0, 0x1028(r6)
    lwz r8, 0xf28(r6)
    lwz r7, 0x38(r8)
    ori r7, r7, 0x4
    stw r7, 0x38(r8)
    stw r4, 0xfac(r6)
    stw r0, 0x102c(r6)
    lwz r8, 0xf2c(r6)
    lwz r7, 0x38(r8)
    ori r7, r7, 0x4
    stw r7, 0x38(r8)
    stw r4, 0xfb0(r6)
    stw r0, 0x1030(r6)
    lwz r8, 0xf30(r6)
    addi r6, r6, 0x20
    lwz r7, 0x38(r8)
    ori r7, r7, 0x4
    stw r7, 0x38(r8)
    bdnz lbl_fn_803DBD44_000012A8
    lwz r0, 0xdcc(r3)
    cmpwi r0, 0x1
    blt lbl_fn_803DBD44_00001424
    lfs f0, lbl_80885D58
    stfs f0, 0xe94(r3)
    stfs f0, 0xe98(r3)
    stfs f0, 0xe9c(r3)
    stfs f0, 0xea0(r3)
    stfs f0, 0xea4(r3)
    stfs f0, 0xea8(r3)
    stfs f0, 0xeac(r3)
    stfs f0, 0xeb0(r3)
    stfs f0, 0xeb4(r3)
    stfs f0, 0xeb8(r3)
    stfs f0, 0xebc(r3)
    stfs f0, 0xec0(r3)
    stfs f0, 0xec4(r3)
    stfs f0, 0xec8(r3)
    stfs f0, 0xecc(r3)
    stfs f0, 0xed0(r3)
    stfs f0, 0xed4(r3)
    stfs f0, 0xed8(r3)
    stfs f0, 0xedc(r3)
    stfs f0, 0xee0(r3)
    stfs f0, 0xee4(r3)
    stfs f0, 0xee8(r3)
    stfs f0, 0xeec(r3)
    stfs f0, 0xef0(r3)
    stfs f0, 0xef4(r3)
    stfs f0, 0xef8(r3)
    stfs f0, 0xefc(r3)
    stfs f0, 0xf00(r3)
    stfs f0, 0xf04(r3)
    stfs f0, 0xf08(r3)
    stfs f0, 0xf0c(r3)
    stfs f0, 0xf10(r3)
lbl_fn_803DBD44_00001424:
    lwz r5, lbl_8087F610
    cmpwi r5, 0x0
    beq lbl_fn_803DBD44_00001458
    lwz r4, 0x4fc(r5)
    li r0, 0x0
    cmpwi r4, 0x1e
    bne lbl_fn_803DBD44_00001450
    lwz r4, 0x50c(r5)
    cmpwi r4, 0x5
    bge lbl_fn_803DBD44_00001450
    li r0, 0x1
lbl_fn_803DBD44_00001450:
    cmpwi r0, 0x0
    beq lbl_fn_803DBD44_00001EF0
lbl_fn_803DBD44_00001458:
    lwz r0, 0xdcc(r3)
    cmpwi r0, 0x1
    bge lbl_fn_803DBD44_00001538
    lwz r3, lbl_8087F9F8
    li r4, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_000014A4
    lwz r0, 0x15d8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803DBD44_00001490
    lbz r0, 0x15ec(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803DBD44_00001490
    li r4, 0x0
lbl_fn_803DBD44_00001490:
    lwz r3, lbl_8087F9F8
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803DBD44_000014A4
    li r4, 0x0
lbl_fn_803DBD44_000014A4:
    cmpwi r4, 0x0
    beq lbl_fn_803DBD44_00001538
    lwz r3, lbl_8087F408
    li r20, 0x0
    li r19, 0x0
    lwz r21, 0x48(r3)
    b lbl_fn_803DBD44_00001530
lbl_fn_803DBD44_000014C0:
    lwz r0, 0x38(r21)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803DBD44_0000152C
    lwz r3, 0x54c(r21)
    rlwinm r0, r3, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_803DBD44_0000152C
    lwz r0, 0x7e0(r21)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803DBD44_0000152C
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803DBD44_0000152C
    lwz r0, 0xc54(r21)
    cmpwi r0, 0x0
    beq lbl_fn_803DBD44_0000152C
    cmpwi r20, 0x20
    bge lbl_fn_803DBD44_0000152C
    add r5, r31, r19
    mr r3, r31
    mr r4, r21
    addi r20, r20, 0x1
    addi r5, r5, 0xe94
    addi r19, r19, 0x4
    bl fn_803DCA84
lbl_fn_803DBD44_0000152C:
    lwz r21, 0x14ac(r21)
lbl_fn_803DBD44_00001530:
    cmpwi r21, 0x0
    bne lbl_fn_803DBD44_000014C0
lbl_fn_803DBD44_00001538:
    lwz r4, lbl_8087F408
    li r23, 0x0
    li r3, 0x0
    lwz r5, 0x48(r4)
    b lbl_fn_803DBD44_000015A4
lbl_fn_803DBD44_0000154C:
    cmpwi r23, 0x20
    bge lbl_fn_803DBD44_000015AC
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803DBD44_000015A0
    lwz r4, 0x54c(r5)
    rlwinm r0, r4, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_803DBD44_000015A0
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803DBD44_000015A0
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803DBD44_000015A0
    add r4, r31, r3
    addi r3, r3, 0x4
    stw r5, 0xf94(r4)
    addi r23, r23, 0x1
lbl_fn_803DBD44_000015A0:
    lwz r5, 0x14ac(r5)
lbl_fn_803DBD44_000015A4:
    cmpwi r5, 0x0
    bne lbl_fn_803DBD44_0000154C
lbl_fn_803DBD44_000015AC:
    lwz r0, 0xdcc(r31)
    cmpwi r0, 0x1
    bge lbl_fn_803DBD44_000017D0
    lwz r6, lbl_8087F8A0
    addi r3, r1, 0x88
    lwz r4, lbl_8087EFB4
    addi r5, r1, 0x94
    lwz r6, 0x48(r6)
    lfs f0, 0xe4(r6)
    lfs f3, 0xd4(r6)
    lfs f4, 0xc4(r6)
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_800BFAC8
    lfs f6, 0x90(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f6, f0
    ble lbl_fn_803DBD44_0000161C
    lfs f5, lbl_80885D5C
    lfs f4, 0x88(r1)
    lfs f3, 0x8c(r1)
    fmuls f0, f6, f5
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    stfs f0, 0x90(r1)
    stfs f4, 0x88(r1)
    stfs f3, 0x8c(r1)
lbl_fn_803DBD44_0000161C:
    lfs f27, lbl_80885E1C
    addi r30, r1, 0xe8
    lfs f31, lbl_80885D5C
    addi r28, r1, 0x60
    lfs f30, lbl_80885D60
    addi r29, r1, 0xb8
    lfs f26, lbl_80885DFC
    addi r27, r1, 0x54
    addi r26, r1, 0xac
    addi r24, r1, 0x48
    addi r25, r1, 0xa0
    li r22, 0x0
    li r19, 0x0
    li r20, 0x20
    b lbl_fn_803DBD44_000017C4
lbl_fn_803DBD44_00001658:
    add r3, r31, r19
    lwz r4, lbl_8087EFB4
    lwz r6, 0xf94(r3)
    mr r5, r29
    addi r3, r1, 0x54
    lfs f0, 0xd4(r6)
    lfs f3, 0xc4(r6)
    lfs f2, 0xe4(r6)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xc0(r1)
    bl fn_800BFAC8
    lfs f2, 0x5c(r1)
    psq_l f1, 0x0(r27), 0, 0
    fcmpo cr0, f2, f30
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xb4(r1)
    ble lbl_fn_803DBD44_000016D0
    frsp f0, f2
    lfs f4, 0xac(r1)
    lfs f3, 0xb0(r1)
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    fmuls f0, f0, f31
    stfs f4, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
lbl_fn_803DBD44_000016D0:
    lfs f5, 0xb0(r1)
    mr r3, r31
    lfs f4, 0x8c(r1)
    li r21, 0x0
    lfs f3, 0xac(r1)
    fsubs f5, f5, f4
    lfs f0, 0x88(r1)
    lfs f4, 0xb4(r1)
    fsubs f3, f3, f0
    stfs f5, 0x4c(r1)
    lfs f0, 0x90(r1)
    stfs f3, 0x48(r1)
    fsubs f2, f4, f0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    lfs f0, 0xa4(r1)
    stfs f2, 0x50(r1)
    fmuls f3, f0, f0
    stfs f2, 0xa8(r1)
    frsp f0, f3
    stfsx f3, r30, r19
    mtctr r20
lbl_fn_803DBD44_00001728:
    lwz r0, 0x1014(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803DBD44_00001744
    slwi r0, r0, 2
    lfsx f3, r30, r0
    fcmpo cr0, f3, f0
    ble lbl_fn_803DBD44_00001784
lbl_fn_803DBD44_00001744:
    cmpwi r21, 0x1f
    beq lbl_fn_803DBD44_00001774
    addi r0, r21, 0x1
    slwi r3, r21, 2
    slwi r4, r0, 2
    add r5, r31, r4
    subfic r0, r21, 0x1f
    add r4, r31, r3
    addi r3, r5, 0x1014
    slwi r5, r0, 2
    addi r4, r4, 0x1014
    bl memcpy
lbl_fn_803DBD44_00001774:
    slwi r0, r21, 2
    add r3, r31, r0
    stw r22, 0x1014(r3)
    b lbl_fn_803DBD44_00001790
lbl_fn_803DBD44_00001784:
    addi r3, r3, 0x4
    addi r21, r21, 0x1
    bdnz lbl_fn_803DBD44_00001728
lbl_fn_803DBD44_00001790:
    lfs f0, 0xb0(r1)
    lfs f3, 0xac(r1)
    fnmsubs f0, f26, f28, f0
    fnmsubs f3, f26, f29, f3
    stfs f0, 0xb0(r1)
    fmuls f0, f0, f0
    stfs f3, 0xac(r1)
    fmadds f0, f3, f3, f0
    fcmpo cr0, f27, f0
    ble lbl_fn_803DBD44_000017BC
    fmr f27, f0
lbl_fn_803DBD44_000017BC:
    addi r22, r22, 0x1
    addi r19, r19, 0x4
lbl_fn_803DBD44_000017C4:
    cmpw r22, r23
    blt lbl_fn_803DBD44_00001658
    b lbl_fn_803DBD44_000018D0
lbl_fn_803DBD44_000017D0:
    li r9, 0x0
    stw r9, 0x1014(r31)
    li r8, 0x1
    li r7, 0x2
    stw r8, 0x1018(r31)
    li r6, 0x3
    li r5, 0x4
    li r4, 0x5
    stw r7, 0x101c(r31)
    li r3, 0x6
    li r0, 0x7
    li r9, 0x8
    stw r6, 0x1020(r31)
    li r8, 0x9
    li r7, 0xa
    li r6, 0xb
    stw r5, 0x1024(r31)
    li r5, 0xc
    stw r4, 0x1028(r31)
    li r4, 0xd
    stw r3, 0x102c(r31)
    li r3, 0xe
    stw r0, 0x1030(r31)
    li r0, 0xf
    stw r9, 0x1034(r31)
    li r9, 0x10
    stw r8, 0x1038(r31)
    li r8, 0x11
    stw r7, 0x103c(r31)
    li r7, 0x12
    stw r6, 0x1040(r31)
    li r6, 0x13
    stw r5, 0x1044(r31)
    li r5, 0x14
    stw r4, 0x1048(r31)
    li r4, 0x15
    stw r3, 0x104c(r31)
    li r3, 0x16
    stw r0, 0x1050(r31)
    li r0, 0x17
    stw r9, 0x1054(r31)
    li r9, 0x18
    stw r8, 0x1058(r31)
    li r8, 0x19
    stw r7, 0x105c(r31)
    li r7, 0x1a
    stw r6, 0x1060(r31)
    li r6, 0x1b
    stw r5, 0x1064(r31)
    li r5, 0x1c
    stw r4, 0x1068(r31)
    li r4, 0x1d
    stw r3, 0x106c(r31)
    li r3, 0x1e
    stw r0, 0x1070(r31)
    li r0, 0x1f
    stw r9, 0x1074(r31)
    stw r8, 0x1078(r31)
    stw r7, 0x107c(r31)
    stw r6, 0x1080(r31)
    stw r5, 0x1084(r31)
    stw r4, 0x1088(r31)
    stw r3, 0x108c(r31)
    stw r0, 0x1090(r31)
lbl_fn_803DBD44_000018D0:
    lwz r3, lbl_8087F430
    li r21, 0x1
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    bne lbl_fn_803DBD44_00001900
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001900
    bl fn_80481654
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001900
    li r21, 0x0
lbl_fn_803DBD44_00001900:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001928
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803DBD44_00001928
    lwz r0, 0x15d8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803DBD44_00001928
    li r21, 0x0
lbl_fn_803DBD44_00001928:
    lfs f27, lbl_80885D58
    mr r24, r31
    li r22, 0x0
    li r25, 0x0
    b lbl_fn_803DBD44_00001AA0
lbl_fn_803DBD44_0000193C:
    cmpwi r21, 0x0
    beq lbl_fn_803DBD44_00001A68
    lwz r4, lbl_8087F048
    li r26, 0x0
    li r0, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_803DBD44_0000196C
    addis r3, r4, 0x4
    lwz r3, -0x1d10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_0000196C
    li r0, 0x1
lbl_fn_803DBD44_0000196C:
    cmpwi r0, 0x0
    beq lbl_fn_803DBD44_0000199C
    lwz r0, 0x1014(r24)
    lwz r3, lbl_8087F048
    slwi r0, r0, 2
    addis r5, r3, 0x4
    add r3, r31, r0
    lwz r5, -0x1d20(r5)
    lwz r0, 0xf94(r3)
    cmplw r5, r0
    bne lbl_fn_803DBD44_0000199C
    li r26, 0x1
lbl_fn_803DBD44_0000199C:
    cmpwi r4, 0x0
    beq lbl_fn_803DBD44_000019B0
    addis r3, r4, 0x4
    lwz r4, -0x1d18(r3)
    b lbl_fn_803DBD44_000019B4
lbl_fn_803DBD44_000019B0:
    li r4, 0x0
lbl_fn_803DBD44_000019B4:
    lwz r0, 0x1014(r24)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0xf94(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0xbc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_803DBD44_000019E0
    li r26, 0x0
lbl_fn_803DBD44_000019E0:
    lwz r0, 0xdcc(r31)
    cmpwi r0, 0x1
    blt lbl_fn_803DBD44_000019F4
    cmpwi r26, 0x0
    beq lbl_fn_803DBD44_00001A68
lbl_fn_803DBD44_000019F4:
    lwz r3, lbl_8087F430
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803DBD44_00001A44
    lwz r3, lbl_8087F9F8
    li r6, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001A24
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803DBD44_00001A24
    li r6, 0x1
lbl_fn_803DBD44_00001A24:
    lwz r0, 0x1014(r24)
    mr r3, r31
    mr r5, r25
    mr r7, r26
    slwi r0, r0, 2
    add r4, r31, r0
    lwz r4, 0xf94(r4)
    bl fn_803DCD34
lbl_fn_803DBD44_00001A44:
    lwz r0, 0x1014(r24)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r0, 0xf94(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803DBD44_00001A68
    cmpwi r26, 0x0
    beq lbl_fn_803DBD44_00001A68
    mr r22, r0
lbl_fn_803DBD44_00001A68:
    lwz r0, 0x1014(r24)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0xf14(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803DBD44_00001A98
    lfs f0, 0x50(r3)
    fcmpo cr0, f0, f27
    ble lbl_fn_803DBD44_00001A98
    stfs f27, 0x50(r3)
lbl_fn_803DBD44_00001A98:
    addi r24, r24, 0x4
    addi r25, r25, 0x1
lbl_fn_803DBD44_00001AA0:
    cmpw r25, r23
    blt lbl_fn_803DBD44_0000193C
    lwz r3, 0x1140(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1144(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1148(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F430
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    bne lbl_fn_803DBD44_00001B20
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001B20
    bl fn_80481654
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001B20
    li r0, 0x0
    stw r0, 0x1150(r31)
    lwz r3, 0x1140(r31)
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
    lwz r3, 0x1144(r31)
    stfs f0, 0x100(r3)
    b lbl_fn_803DBD44_00001EF0
lbl_fn_803DBD44_00001B20:
    lwz r3, lbl_8087F430
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803DBD44_00001EF0
    cmpwi r0, 0x3
    beq lbl_fn_803DBD44_00001EF0
    cmpwi r0, 0x4
    beq lbl_fn_803DBD44_00001EF0
    cmpwi r0, 0x9
    beq lbl_fn_803DBD44_00001EF0
    cmpwi r0, 0xd
    beq lbl_fn_803DBD44_00001EF0
    cmpwi r0, 0xe
    beq lbl_fn_803DBD44_00001EF0
    lwz r0, 0x56d4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803DBD44_00001EF0
    lwz r0, 0x1150(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803DBD44_00001C2C
    lwz r4, 0x1154(r31)
    lwz r3, 0x1148(r31)
    addi r0, r4, 0x1
    stw r0, 0x1154(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x1154(r31)
    cmpwi r0, 0x96
    bge lbl_fn_803DBD44_00001BD0
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001BB0
    lwz r0, 0x84(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803DBD44_00001BD0
lbl_fn_803DBD44_00001BB0:
    lwz r3, lbl_8087F0A8
    li r4, 0x30
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001BD0
    li r0, 0x96
    stw r0, 0x1154(r31)
lbl_fn_803DBD44_00001BD0:
    lwz r0, 0x1154(r31)
    cmpwi r0, 0x96
    bne lbl_fn_803DBD44_00001BE8
    lwz r3, 0x1148(r31)
    lfs f0, lbl_80885D5C
    stfs f0, 0x104(r3)
lbl_fn_803DBD44_00001BE8:
    lwz r0, 0x1154(r31)
    cmpwi r0, 0x96
    ble lbl_fn_803DBD44_00001EF0
    lwz r3, 0x1148(r31)
    lfs f0, lbl_80885D60
    lfs f3, 0x100(r3)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_803DBD44_00001EF0
    li r0, 0x0
    stw r0, 0x1150(r31)
    lwz r3, 0x1140(r31)
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
    lwz r3, 0x1144(r31)
    stfs f0, 0x100(r3)
    b lbl_fn_803DBD44_00001EF0
lbl_fn_803DBD44_00001C2C:
    cmpwi r22, 0x0
    beq lbl_fn_803DBD44_00001C54
    lwz r12, 0x0(r22)
    mr r3, r22
    addi r4, r1, 0x168
    lwz r12, 0xb8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_803DBD44_00001C78
lbl_fn_803DBD44_00001C54:
    li r0, 0x0
    stw r0, 0x114c(r31)
    lwz r3, 0x1140(r31)
    stw r0, 0x1150(r31)
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
    lwz r3, 0x1144(r31)
    stfs f0, 0x100(r3)
    b lbl_fn_803DBD44_00001EF0
lbl_fn_803DBD44_00001C78:
    stw r22, 0x114c(r31)
    addi r3, r1, 0x78
    li r5, 0x30
    lwz r4, lbl_8087F0A8
    addi r4, r4, 0x48c
    bl fn_80124C6C
    addi r20, r1, 0x78
    lis r19, lbl_807506A0@ha
    addi r5, r1, 0x38
    psq_l f1, 0x0(r20), 0, 0
    psq_l f2, 0x8(r20), 0, 0
    addi r19, r19, lbl_807506A0@l
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r19, 0x10c6
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x1140(r31)
    bl fn_801F48C8
    addi r5, r1, 0x28
    psq_l f1, 0x0(r20), 0, 0
    psq_l f2, 0x8(r20), 0, 0
    addi r4, r19, 0x10cc
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x1140(r31)
    bl fn_801F48C8
    addi r5, r1, 0x18
    psq_l f1, 0x0(r20), 0, 0
    psq_l f2, 0x8(r20), 0, 0
    addi r4, r19, 0x10c6
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x1144(r31)
    bl fn_801F48C8
    addi r5, r1, 0x8
    psq_l f1, 0x0(r20), 0, 0
    psq_l f2, 0x8(r20), 0, 0
    addi r4, r19, 0x10cc
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x1144(r31)
    bl fn_801F48C8
    lwz r3, 0x1140(r31)
    lfs f3, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803DBD44_00001D50
    lwz r3, 0x1144(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_803DBD44_00001D5C
lbl_fn_803DBD44_00001D50:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803DBD44_00001D5C:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001D74
    lwz r0, 0x84(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803DBD44_00001EF0
lbl_fn_803DBD44_00001D74:
    lwz r3, lbl_8087F0A8
    li r4, 0x30
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_803DBD44_00001EF0
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x1150(r31)
    addi r3, r1, 0x6c
    lwz r7, 0x1148(r31)
    addi r4, r1, 0x168
    stw r0, 0x1154(r31)
    li r5, 0x1
    lfs f3, lbl_80885D58
    li r6, 0x1
    stfs f3, 0x100(r7)
    li r7, 0x0
    lfs f0, lbl_80885D60
    lwz r8, 0x1148(r31)
    lfs f1, lbl_80885EC4
    stfs f0, 0x104(r8)
    lfs f2, lbl_80885E64
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_800E0000
    lis r20, lbl_807506A0@ha
    lis r19, lbl_8078C638@ha
    addi r20, r20, lbl_807506A0@l
    li r24, 0x0
    addi r19, r19, lbl_8078C638@l
    li r23, 0x0
lbl_fn_803DBD44_00001DF8:
    mr r5, r24
    addi r3, r1, 0xc8
    addi r4, r20, 0x12fa
    crclr 6
    bl sprintf
    lwz r0, 0x70(r1)
    cmplw r24, r0
    bge lbl_fn_803DBD44_00001E5C
    lwz r0, 0x6c(r1)
    add r3, r0, r23
    lwzx r0, r23, r0
    srwi. r0, r0, 31
    bne lbl_fn_803DBD44_00001E34
    addi r21, r3, 0x2
    b lbl_fn_803DBD44_00001E38
lbl_fn_803DBD44_00001E34:
    lwz r21, 0x8(r3)
lbl_fn_803DBD44_00001E38:
    lwz r4, 0x1148(r31)
    addi r3, r1, 0xc8
    addi r22, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r22
    mr r5, r21
    bl fn_801FEE08
    b lbl_fn_803DBD44_00001E80
lbl_fn_803DBD44_00001E5C:
    lwz r4, 0x1148(r31)
    addi r21, r19, 0x52
    addi r3, r1, 0xc8
    addi r22, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r22
    mr r5, r21
    bl fn_801FEE08
lbl_fn_803DBD44_00001E80:
    addi r24, r24, 0x1
    addi r23, r23, 0xc
    cmplwi r24, 0x5
    blt lbl_fn_803DBD44_00001DF8
    addic. r0, r1, 0x6c
    beq lbl_fn_803DBD44_00001EF0
    beq lbl_fn_803DBD44_00001EF0
    lwz r4, 0x6c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803DBD44_00001EF0
    lwz r20, 0x70(r1)
    mulli r3, r20, 0xc
    subf r0, r20, r20
    stw r0, 0x70(r1)
    add r19, r4, r3
    b lbl_fn_803DBD44_00001EE0
lbl_fn_803DBD44_00001EC0:
    subic. r19, r19, 0xc
    beq lbl_fn_803DBD44_00001EDC
    lwz r0, 0x0(r19)
    srwi. r0, r0, 31
    beq lbl_fn_803DBD44_00001EDC
    lwz r3, 0x8(r19)
    bl dtor_80084684
lbl_fn_803DBD44_00001EDC:
    subi r20, r20, 0x1
lbl_fn_803DBD44_00001EE0:
    cmpwi r20, 0x0
    bne lbl_fn_803DBD44_00001EC0
    lwz r3, 0x6c(r1)
    bl dtor_80084684
lbl_fn_803DBD44_00001EF0:
    addi r11, r1, 0x3b0
    psq_l f31, 0x408(r1), 0, 0
    lfd f31, 0x400(r1)
    psq_l f30, 0x3f8(r1), 0, 0
    lfd f30, 0x3f0(r1)
    psq_l f29, 0x3e8(r1), 0, 0
    lfd f29, 0x3e0(r1)
    psq_l f28, 0x3d8(r1), 0, 0
    lfd f28, 0x3d0(r1)
    psq_l f27, 0x3c8(r1), 0, 0
    lfd f27, 0x3c0(r1)
    psq_l f26, 0x3b8(r1), 0, 0
    lfd f26, 0x3b0(r1)
    bl _restgpr_19
    lwz r0, 0x414(r1)
    mtlr r0
    addi r1, r1, 0x410
    blr
}
