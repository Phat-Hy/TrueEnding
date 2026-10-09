#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_80092814(void);
extern void fn_800BFAC8(void);
extern void fn_8016F3D0(void);
extern void fn_801F6D7C(void);
extern void fn_801F7DF0(void);
extern void fn_801F837C(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8021A984(void);
extern void fn_8021A9CC(void);
extern void fn_8036554C(void);
extern void fn_803E0250(void);
extern void fn_803E0AB4(void);
extern void fn_804EB874(void);
extern void fn_8059A268(void);
extern void fn_805F9920(void);

/* External data declarations */
extern u8 lbl_80750650[];
extern u8 lbl_807506A0[];

/* Small data declarations */
extern u32 lbl_8087DEF0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F8;
extern u32 lbl_808813D0;
extern u32 lbl_80885D58;
extern u32 lbl_80885D5C;
extern u32 lbl_80885D60;
extern u32 lbl_80885D84;
extern u32 lbl_80885D88;
extern u32 lbl_80885D8C;
extern u32 lbl_80885D90;
extern u32 lbl_80885D94;
extern u32 lbl_80885D98;
extern u32 lbl_80885D9C;
extern u32 lbl_80885DA0;
extern u32 lbl_80885DA4;
extern u32 lbl_80885DA8;
extern u32 lbl_80885DAC;
extern u32 lbl_80885DB0;
extern u32 lbl_80885E24;
extern u32 lbl_80885E48;
extern u32 lbl_80885E4C;
extern u32 lbl_80885E74;
extern u32 lbl_80885EB0;
extern u32 lbl_80885ED8;

/* Function declarations */
void fn_803DE648(void);
void fn_803DE89C(void);
void fn_803DEE24(void);
void fn_803DF138(void);
void fn_803DF2DC(void);
void fn_803DF5B4(void);
void fn_803DF648(void);
void fn_803DF9EC(void);

asm void fn_803DE648(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0xdc8(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_803DE648_00000234
    lwz r7, lbl_8087EEE0
    lis r6, 0x4330
    lwz r4, 0x10b4(r3)
    li r31, 0x0
    lwz r5, 0x3c(r7)
    lwz r0, 0x40(r7)
    xoris r5, r5, 0x8000
    stw r5, 0xc(r1)
    xoris r5, r0, 0x8000
    stw r31, 0x10d4(r3)
    lwz r0, 0x38(r4)
    stw r6, 0x8(r1)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    stw r31, 0x10d8(r3)
    lwz r4, 0x10b8(r3)
    stw r5, 0x14(r1)
    lwz r0, 0x38(r4)
    stw r6, 0x10(r1)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    stw r31, 0x10dc(r3)
    lwz r4, 0x10bc(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    stw r31, 0x10e0(r3)
    lwz r4, 0x10c0(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    stw r31, 0x10e4(r3)
    lwz r4, 0x10c4(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    stw r31, 0x10e8(r3)
    lwz r4, 0x10c8(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    stw r31, 0x10ec(r3)
    lwz r4, 0x10cc(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    stw r31, 0x10f0(r3)
    lwz r4, 0x10d0(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0xdcc(r3)
    cmpwi r0, 0x1
    blt lbl_fn_803DE648_0000012C
    lfs f0, lbl_80885D58
    stfs f0, 0x1094(r3)
    stfs f0, 0x1098(r3)
    stfs f0, 0x109c(r3)
    stfs f0, 0x10a0(r3)
    stfs f0, 0x10a4(r3)
    stfs f0, 0x10a8(r3)
    stfs f0, 0x10ac(r3)
    stfs f0, 0x10b0(r3)
    b lbl_fn_803DE648_00000234
lbl_fn_803DE648_0000012C:
    lfs f31, lbl_80885E74
    li r27, 0x0
    li r26, 0x0
    li r28, 0x0
lbl_fn_803DE648_0000013C:
    cmpwi r27, 0x8
    bge lbl_fn_803DE648_00000208
    cmplwi r26, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_803DE648_00000158
    li r29, 0x0
    b lbl_fn_803DE648_00000160
lbl_fn_803DE648_00000158:
    add r3, r0, r28
    addi r29, r3, 0x48
lbl_fn_803DE648_00000160:
    lwz r25, 0x4(r29)
    mr r3, r29
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_803DE648_00000178
    addi r25, r29, 0x80
lbl_fn_803DE648_00000178:
    lwz r0, 0x4(r29)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803DE648_00000198
    lwz r0, 0x0(r29)
    cmpwi r0, 0x3
    beq lbl_fn_803DE648_00000198
    li r3, 0x1
lbl_fn_803DE648_00000198:
    cmpwi r3, 0x0
    beq lbl_fn_803DE648_000001F8
    cmpwi r25, 0x0
    beq lbl_fn_803DE648_000001F8
    mr r3, r25
    bl fn_8021A9CC
    cmpwi r3, 0x0
    beq lbl_fn_803DE648_000001F8
    lfs f1, 0x5c(r29)
    lfs f0, 0x28(r29)
    fmuls f0, f1, f0
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_803DE648_000001F8
    lbz r0, 0x2(r25)
    extsb r0, r0
    cmpwi r0, 0x4
    beq lbl_fn_803DE648_000001F8
    cmpwi r0, 0x0
    beq lbl_fn_803DE648_000001F8
    add r3, r30, r31
    addi r31, r31, 0x4
    stw r29, 0x10d4(r3)
    addi r27, r27, 0x1
lbl_fn_803DE648_000001F8:
    addi r26, r26, 0x1
    addi r28, r28, 0x140
    cmplwi r26, 0x20
    blt lbl_fn_803DE648_0000013C
lbl_fn_803DE648_00000208:
    mr r29, r30
    li r25, 0x0
    b lbl_fn_803DE648_0000022C
lbl_fn_803DE648_00000214:
    lwz r4, 0x10d4(r29)
    mr r3, r30
    mr r5, r25
    bl fn_803DE89C
    addi r29, r29, 0x4
    addi r25, r25, 0x1
lbl_fn_803DE648_0000022C:
    cmpw r25, r27
    blt lbl_fn_803DE648_00000214
lbl_fn_803DE648_00000234:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803DE89C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r5
    stw r29, 0x74(r1)
    mr r29, r4
    stw r28, 0x70(r1)
    mr r28, r3
    beq lbl_fn_803DE89C_000007B4
    lwz r6, lbl_8087F430
    li r31, 0x0
    lwz r3, lbl_8087F8A0
    li r7, 0x0
    lfs f0, lbl_80885D58
    cmpwi r6, 0x0
    stfs f0, 0x58(r1)
    lwz r5, 0x48(r3)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    beq lbl_fn_803DE89C_0000035C
    lwz r3, lbl_8087F9F8
    lwz r0, 0x15d8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803DE89C_000002E8
    addi r5, r6, 0x910
    lfs f2, 0x918(r6)
    addi r3, r1, 0x58
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r7, 0x1
    stfs f2, 0x60(r1)
    b lbl_fn_803DE89C_0000035C
lbl_fn_803DE89C_000002E8:
    lwz r0, 0x868(r6)
    cmpwi r0, 0x7
    bne lbl_fn_803DE89C_00000314
    addi r5, r5, 0xf6c
    addi r3, r1, 0x58
    psq_l f1, 0x0(r5), 0, 0
    li r7, 0x1
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x60(r1)
    b lbl_fn_803DE89C_0000035C
lbl_fn_803DE89C_00000314:
    cmpwi r0, 0x5
    bne lbl_fn_803DE89C_0000035C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_803DE89C_0000035C
    lwz r0, 0x55c(r5)
    cmpwi r0, 0x6
    bne lbl_fn_803DE89C_0000035C
    lwz r0, 0x560(r5)
    cmpwi r0, 0xd
    bne lbl_fn_803DE89C_0000035C
    addi r5, r5, 0xf6c
    addi r3, r1, 0x58
    psq_l f1, 0x0(r5), 0, 0
    li r7, 0x1
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x60(r1)
lbl_fn_803DE89C_0000035C:
    cmpwi r7, 0x0
    beq lbl_fn_803DE89C_000003D4
    lfs f3, 0x5c(r4)
    addi r3, r1, 0x48
    lfs f0, 0x28(r4)
    psq_l f1, 0x10(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fmuls f8, f3, f0
    lfs f2, 0x18(r4)
    addi r3, r1, 0x14
    lfs f0, 0x60(r1)
    lfs f6, lbl_80885E24
    fsubs f7, f2, f0
    lfs f5, 0x4c(r1)
    lfs f4, 0x5c(r1)
    fadds f31, f6, f8
    lfs f3, 0x48(r1)
    lfs f0, 0x58(r1)
    fsubs f4, f5, f4
    stfs f2, 0x50(r1)
    fsubs f0, f3, f0
    stfs f8, 0x54(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f7, 0x1c(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_803DE89C_000003D4
    li r31, 0x1
lbl_fn_803DE89C_000003D4:
    cmpwi r31, 0x0
    beq lbl_fn_803DE89C_00000440
    slwi r0, r30, 2
    addi r3, r30, 0x1
    add r7, r28, r0
    lis r6, lbl_80750650@ha
    lwz r8, 0x10b4(r7)
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_807506A0@ha
    lwz r5, 0x38(r8)
    addi r4, r4, lbl_807506A0@l
    stw r3, 0x6c(r1)
    addi r4, r4, 0x10a2
    rlwinm r3, r5, 0, 30, 28
    lfs f4, lbl_80885D60
    stw r3, 0x38(r8)
    li r5, 0x4
    lfd f3, lbl_80750650@l(r6)
    stw r0, 0x68(r1)
    lwz r3, 0x10b4(r7)
    lfd f0, 0x68(r1)
    stfs f4, 0x54(r3)
    fsubs f1, f0, f3
    lwz r3, 0x10b4(r7)
    bl fn_801F6D7C
    b lbl_fn_803DE89C_000004A0
lbl_fn_803DE89C_00000440:
    slwi r0, r30, 2
    addi r3, r30, 0x64
    add r7, r28, r0
    lis r6, lbl_80750650@ha
    lwz r8, 0x10b4(r7)
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_807506A0@ha
    lwz r5, 0x38(r8)
    addi r4, r4, lbl_807506A0@l
    stw r3, 0x6c(r1)
    addi r4, r4, 0x10a2
    rlwinm r3, r5, 0, 30, 28
    lfs f4, lbl_80885D5C
    stw r3, 0x38(r8)
    li r5, 0x4
    lfd f3, lbl_80750650@l(r6)
    stw r0, 0x68(r1)
    lwz r3, 0x10b4(r7)
    lfd f0, 0x68(r1)
    stfs f4, 0x54(r3)
    fsubs f1, f0, f3
    lwz r3, 0x10b4(r7)
    bl fn_801F6D7C
lbl_fn_803DE89C_000004A0:
    psq_l f1, 0x10(r29), 0, 0
    addi r4, r1, 0x3c
    lfs f2, 0x18(r29)
    mr r3, r29
    stfs f2, 0x44(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r31, 0x4(r29)
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_803DE89C_000004CC
    addi r31, r29, 0x80
lbl_fn_803DE89C_000004CC:
    lwz r5, 0x8(r29)
    cmpwi r5, 0x0
    beq lbl_fn_803DE89C_00000570
    cmpwi r31, 0x0
    beq lbl_fn_803DE89C_00000570
    lwz r0, 0xac(r31)
    rlwinm r3, r0, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    bne lbl_fn_803DE89C_00000570
    lis r4, lbl_807506A0@ha
    addi r31, r5, 0xb0
    addi r4, r4, lbl_807506A0@l
    li r5, 0x0
    mr r3, r31
    addi r4, r4, 0x10c1
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803DE89C_00000520
    li r3, 0x0
    b lbl_fn_803DE89C_0000052C
lbl_fn_803DE89C_00000520:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_803DE89C_0000052C:
    cmpwi r3, 0x0
    beq lbl_fn_803DE89C_00000554
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x8
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_fn_803DE89C_0000055C
lbl_fn_803DE89C_00000554:
    lwz r3, 0x8(r29)
    addi r4, r3, 0x600
lbl_fn_803DE89C_0000055C:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x3c
    lfs f2, 0x8(r4)
    stfs f2, 0x44(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_803DE89C_00000570:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x30
    addi r5, r1, 0x3c
    bl fn_800BFAC8
    lfs f1, 0x30(r1)
    lfs f4, lbl_80885E48
    fcmpo cr0, f1, f4
    blt lbl_fn_803DE89C_000005CC
    lfs f3, lbl_80885E4C
    fcmpo cr0, f3, f1
    blt lbl_fn_803DE89C_000005CC
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f4
    blt lbl_fn_803DE89C_000005CC
    fcmpo cr0, f3, f0
    blt lbl_fn_803DE89C_000005CC
    lfs f3, 0x38(r1)
    lfs f0, lbl_80885D60
    fcmpo cr0, f3, f0
    bgt lbl_fn_803DE89C_000005CC
    lfs f0, lbl_80885D58
    fcmpo cr0, f3, f0
    bge lbl_fn_803DE89C_000005E8
lbl_fn_803DE89C_000005CC:
    slwi r0, r30, 2
    add r3, r28, r0
    lwz r3, 0x10b4(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_803DE89C_000007B4
lbl_fn_803DE89C_000005E8:
    slwi r0, r30, 2
    lis r30, lbl_807506A0@ha
    add r31, r28, r0
    li r5, 0x0
    addi r30, r30, lbl_807506A0@l
    lwz r3, 0x10b4(r31)
    addi r4, r30, 0x10a2
    bl fn_801F6D7C
    lwz r3, 0x10b4(r31)
    addi r4, r30, 0x10a2
    lfs f1, 0x34(r1)
    li r5, 0x1
    bl fn_801F6D7C
    lwz r30, 0x4(r29)
    mr r3, r29
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_803DE89C_00000634
    addi r30, r29, 0x80
lbl_fn_803DE89C_00000634:
    cmpwi r30, 0x0
    beq lbl_fn_803DE89C_000006DC
    lwz r0, 0x4(r30)
    cmpwi r0, 0x13
    beq lbl_fn_803DE89C_000006AC
    bge lbl_fn_803DE89C_0000067C
    cmpwi r0, 0xa
    beq lbl_fn_803DE89C_000006A0
    bge lbl_fn_803DE89C_00000664
    cmpwi r0, 0x7
    beq lbl_fn_803DE89C_000006A0
    b lbl_fn_803DE89C_000006AC
lbl_fn_803DE89C_00000664:
    cmpwi r0, 0xd
    beq lbl_fn_803DE89C_000006A0
    blt lbl_fn_803DE89C_000006AC
    cmpwi r0, 0x10
    bge lbl_fn_803DE89C_000006A0
    b lbl_fn_803DE89C_000006AC
lbl_fn_803DE89C_0000067C:
    cmpwi r0, 0x6d8
    beq lbl_fn_803DE89C_000006A0
    bge lbl_fn_803DE89C_00000694
    cmpwi r0, 0x15
    bge lbl_fn_803DE89C_000006AC
    b lbl_fn_803DE89C_000006A0
lbl_fn_803DE89C_00000694:
    cmpwi r0, 0x4ef8
    beq lbl_fn_803DE89C_000006A0
    b lbl_fn_803DE89C_000006AC
lbl_fn_803DE89C_000006A0:
    li r3, 0x7531
    bl fn_80219E6C
    mr r30, r3
lbl_fn_803DE89C_000006AC:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x4ef9
    bne lbl_fn_803DE89C_000006C4
    li r3, 0x7532
    bl fn_80219E6C
    mr r30, r3
lbl_fn_803DE89C_000006C4:
    lis r4, lbl_807506A0@ha
    lwz r3, 0x10b4(r31)
    addi r4, r4, lbl_807506A0@l
    lwz r5, 0x8(r30)
    addi r4, r4, 0x13a3
    bl fn_801F837C
lbl_fn_803DE89C_000006DC:
    mr r3, r28
    mr r4, r29
    bl fn_803DF2DC
    mr r30, r3
    mr r4, r28
    mr r5, r29
    addi r3, r1, 0x20
    bl fn_803DF138
    lfs f5, lbl_80885EB0
    lis r28, lbl_807506A0@ha
    lfs f4, 0x20(r1)
    addi r28, r28, lbl_807506A0@l
    lfs f3, 0x24(r1)
    addi r4, r28, 0x13ae
    lfs f0, 0x28(r1)
    fmuls f1, f5, f4
    fmuls f2, f5, f3
    lwz r3, 0x10b4(r31)
    fmuls f3, f5, f0
    bl fn_801F7DF0
    lfs f5, lbl_80885EB0
    addi r4, r28, 0x13ba
    lfs f4, 0x20(r1)
    lfs f3, 0x24(r1)
    lfs f0, 0x28(r1)
    fmuls f1, f5, f4
    fmuls f2, f5, f3
    lwz r3, 0x10b4(r31)
    fmuls f3, f5, f0
    bl fn_801F7DF0
    lfs f5, lbl_80885EB0
    addi r4, r28, 0x13c6
    lfs f4, 0x20(r1)
    lfs f3, 0x24(r1)
    lfs f0, 0x28(r1)
    fmuls f1, f5, f4
    fmuls f2, f5, f3
    lwz r3, 0x10b4(r31)
    fmuls f3, f5, f0
    bl fn_801F7DF0
    lfs f5, lbl_80885EB0
    addi r4, r28, 0x13d2
    lfs f4, 0x20(r1)
    lfs f3, 0x24(r1)
    lfs f0, 0x28(r1)
    fmuls f1, f5, f4
    fmuls f2, f5, f3
    lwz r3, 0x10b4(r31)
    fmuls f3, f5, f0
    bl fn_801F7DF0
    lwz r3, 0x10b4(r31)
    mr r5, r30
    addi r4, r28, 0x13de
    bl fn_801F837C
lbl_fn_803DE89C_000007B4:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_803DEE24(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_27
    lfs f2, lbl_80885D58
    cmpwi r4, 0x0
    lfs f1, lbl_80885D60
    mr r27, r3
    lfs f0, lbl_80885DA4
    mr r28, r4
    stfs f2, 0x0(r5)
    mr r29, r5
    mr r30, r6
    stfs f2, 0x4(r5)
    stfs f2, 0x8(r5)
    stfs f1, 0xc(r5)
    stfs f2, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f2, 0x90(r1)
    stfs f1, 0x94(r1)
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x0(r6)
    stfs f0, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f1, 0xc(r6)
    beq lbl_fn_803DEE24_00000AD8
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803DEE24_00000AD8
    lwz r31, 0x4(r4)
    mr r3, r28
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_803DEE24_00000878
    addi r31, r28, 0x80
lbl_fn_803DEE24_00000878:
    lwz r3, 0x8(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803DEE24_000008DC
    mr r3, r31
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_803DEE24_00000AD8
    lfs f0, 0x26c8(r27)
    stfs f0, 0x0(r30)
    lfs f0, 0x26cc(r27)
    stfs f0, 0x4(r30)
    lfs f0, 0x26d0(r27)
    stfs f0, 0x8(r30)
    lfs f0, 0x26d4(r27)
    stfs f0, 0xc(r30)
    lfs f0, 0x26b8(r27)
    stfs f0, 0x0(r29)
    lfs f0, 0x26bc(r27)
    stfs f0, 0x4(r29)
    lfs f0, 0x26c0(r27)
    stfs f0, 0x8(r29)
    lfs f0, 0x26c4(r27)
    stfs f0, 0xc(r29)
    b lbl_fn_803DEE24_00000AD8
lbl_fn_803DEE24_000008DC:
    mr r3, r31
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_803DEE24_00000934
    lfs f0, 0x26d8(r27)
    stfs f0, 0x0(r30)
    lfs f0, lbl_80885D60
    lfs f1, 0x26dc(r27)
    stfs f1, 0x4(r30)
    lfs f1, 0x26e0(r27)
    stfs f1, 0x8(r30)
    lfs f1, 0x26e4(r27)
    stfs f1, 0xc(r30)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x0(r29)
    stfs f0, 0x4(r29)
    stfs f0, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DEE24_00000AD8
lbl_fn_803DEE24_00000934:
    lfs f0, 0x74(r31)
    lfs f1, lbl_80885D58
    fcmpo cr0, f0, f1
    ble lbl_fn_803DEE24_0000098C
    lfs f0, 0x26e8(r27)
    stfs f0, 0x0(r30)
    lfs f0, lbl_80885D60
    lfs f1, 0x26ec(r27)
    stfs f1, 0x4(r30)
    lfs f1, 0x26f0(r27)
    stfs f1, 0x8(r30)
    lfs f1, 0x26f4(r27)
    stfs f1, 0xc(r30)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x0(r29)
    stfs f0, 0x4(r29)
    stfs f0, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DEE24_00000AD8
lbl_fn_803DEE24_0000098C:
    lfs f0, 0x78(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_803DEE24_000009E0
    lfs f0, 0x26f8(r27)
    stfs f0, 0x0(r30)
    lfs f0, lbl_80885D60
    lfs f1, 0x26fc(r27)
    stfs f1, 0x4(r30)
    lfs f1, 0x2700(r27)
    stfs f1, 0x8(r30)
    lfs f1, 0x2704(r27)
    stfs f1, 0xc(r30)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x0(r29)
    stfs f0, 0x4(r29)
    stfs f0, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DEE24_00000AD8
lbl_fn_803DEE24_000009E0:
    lfs f0, 0x80(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_803DEE24_00000A34
    lfs f0, 0x2708(r27)
    stfs f0, 0x0(r30)
    lfs f0, lbl_80885D60
    lfs f1, 0x270c(r27)
    stfs f1, 0x4(r30)
    lfs f1, 0x2710(r27)
    stfs f1, 0x8(r30)
    lfs f1, 0x2714(r27)
    stfs f1, 0xc(r30)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x0(r29)
    stfs f0, 0x4(r29)
    stfs f0, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DEE24_00000AD8
lbl_fn_803DEE24_00000A34:
    lfs f0, 0x84(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_803DEE24_00000A88
    lfs f0, 0x2718(r27)
    stfs f0, 0x0(r30)
    lfs f0, lbl_80885D60
    lfs f1, 0x271c(r27)
    stfs f1, 0x4(r30)
    lfs f1, 0x2720(r27)
    stfs f1, 0x8(r30)
    lfs f1, 0x2724(r27)
    stfs f1, 0xc(r30)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x0(r29)
    stfs f0, 0x4(r29)
    stfs f0, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DEE24_00000AD8
lbl_fn_803DEE24_00000A88:
    lfs f3, lbl_80885D8C
    lfs f0, lbl_80885D60
    lfs f2, lbl_80885D90
    lfs f1, lbl_80885D94
    stfs f3, 0x0(r30)
    stfs f2, 0x4(r30)
    stfs f1, 0x8(r30)
    stfs f0, 0xc(r30)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x0(r29)
    stfs f0, 0x4(r29)
    stfs f0, 0x8(r29)
    stfs f0, 0xc(r29)
lbl_fn_803DEE24_00000AD8:
    addi r11, r1, 0xb0
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_803DF138(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803DF138_00000C60
    lwz r4, 0x8(r5)
    cmpwi r4, 0x0
    beq lbl_fn_803DF138_00000C60
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    beq lbl_fn_803DF138_00000C60
    lwz r31, 0x4(r5)
    mr r3, r30
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_803DF138_00000B48
    addi r31, r30, 0x80
lbl_fn_803DF138_00000B48:
    mr r3, r31
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_803DF138_00000B78
    lfs f2, lbl_80885D84
    lfs f1, lbl_80885D88
    lfs f0, lbl_80885D60
    stfs f2, 0x0(r29)
    stfs f2, 0x4(r29)
    stfs f1, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DF138_00000C78
lbl_fn_803DF138_00000B78:
    lfs f0, 0x74(r31)
    lfs f1, lbl_80885D58
    fcmpo cr0, f0, f1
    ble lbl_fn_803DF138_00000BAC
    lfs f3, lbl_80885D8C
    lfs f2, lbl_80885D90
    lfs f1, lbl_80885D94
    lfs f0, lbl_80885D60
    stfs f3, 0x0(r29)
    stfs f2, 0x4(r29)
    stfs f1, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DF138_00000C78
lbl_fn_803DF138_00000BAC:
    lfs f0, 0x78(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_803DF138_00000BDC
    lfs f3, lbl_80885D98
    lfs f2, lbl_80885D9C
    lfs f1, lbl_80885D84
    lfs f0, lbl_80885D60
    stfs f3, 0x0(r29)
    stfs f2, 0x4(r29)
    stfs f1, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DF138_00000C78
lbl_fn_803DF138_00000BDC:
    lfs f0, 0x80(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_803DF138_00000C0C
    lfs f3, lbl_80885DA0
    lfs f2, lbl_80885DA4
    lfs f1, lbl_80885DA8
    lfs f0, lbl_80885D60
    stfs f3, 0x0(r29)
    stfs f2, 0x4(r29)
    stfs f1, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DF138_00000C78
lbl_fn_803DF138_00000C0C:
    lfs f0, 0x84(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_803DF138_00000C3C
    lfs f3, lbl_80885D8C
    lfs f2, lbl_80885DAC
    lfs f1, lbl_80885DB0
    lfs f0, lbl_80885D60
    stfs f3, 0x0(r29)
    stfs f2, 0x4(r29)
    stfs f1, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DF138_00000C78
lbl_fn_803DF138_00000C3C:
    lfs f3, lbl_80885D8C
    lfs f2, lbl_80885D90
    lfs f1, lbl_80885D94
    lfs f0, lbl_80885D60
    stfs f3, 0x0(r29)
    stfs f2, 0x4(r29)
    stfs f1, 0x8(r29)
    stfs f0, 0xc(r29)
    b lbl_fn_803DF138_00000C78
lbl_fn_803DF138_00000C60:
    lfs f1, lbl_80885ED8
    lfs f0, lbl_80885D60
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
lbl_fn_803DF138_00000C78:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803DF2DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_803DF2DC_00000CD0
    lwz r31, 0x4(r4)
    mr r3, r30
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000CD0
    addi r31, r30, 0x80
lbl_fn_803DF2DC_00000CD0:
    cmpwi r30, 0x0
    beq lbl_fn_803DF2DC_00000EC8
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000EC8
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_803DF2DC_00000EC8
    lwz r0, 0x4(r31)
    cmpwi r0, 0x4ef2
    beq lbl_fn_803DF2DC_00000DF4
    bge lbl_fn_803DF2DC_00000D48
    cmpwi r0, 0x4eed
    beq lbl_fn_803DF2DC_00000DA0
    bge lbl_fn_803DF2DC_00000D30
    cmpwi r0, 0x4eea
    beq lbl_fn_803DF2DC_00000E48
    bge lbl_fn_803DF2DC_00000D24
    cmpwi r0, 0x4ee9
    bge lbl_fn_803DF2DC_00000E2C
    b lbl_fn_803DF2DC_00000E9C
lbl_fn_803DF2DC_00000D24:
    cmpwi r0, 0x4eec
    bge lbl_fn_803DF2DC_00000D84
    b lbl_fn_803DF2DC_00000E9C
lbl_fn_803DF2DC_00000D30:
    cmpwi r0, 0x4ef0
    beq lbl_fn_803DF2DC_00000DD8
    bge lbl_fn_803DF2DC_00000E9C
    cmpwi r0, 0x4eef
    bge lbl_fn_803DF2DC_00000DBC
    b lbl_fn_803DF2DC_00000E9C
lbl_fn_803DF2DC_00000D48:
    cmpwi r0, 0x4fc9
    beq lbl_fn_803DF2DC_00000E48
    bge lbl_fn_803DF2DC_00000D78
    cmpwi r0, 0x4ef8
    beq lbl_fn_803DF2DC_00000E64
    bge lbl_fn_803DF2DC_00000D6C
    cmpwi r0, 0x4ef4
    bge lbl_fn_803DF2DC_00000E9C
    b lbl_fn_803DF2DC_00000E10
lbl_fn_803DF2DC_00000D6C:
    cmpwi r0, 0x4efa
    bge lbl_fn_803DF2DC_00000E9C
    b lbl_fn_803DF2DC_00000E80
lbl_fn_803DF2DC_00000D78:
    cmpwi r0, 0x4fd0
    beq lbl_fn_803DF2DC_00000E10
    b lbl_fn_803DF2DC_00000E9C
lbl_fn_803DF2DC_00000D84:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x94c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000D98
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000D98:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000DA0:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x974(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000DB4
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000DB4:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000DBC:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x954(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000DD0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000DD0:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000DD8:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x97c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000DEC
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000DEC:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000DF4:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x95c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000E08
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E08:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E10:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x984(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000E24
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E24:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E2C:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x964(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000E40
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E40:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E48:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x98c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000E5C
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E5C:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E64:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x944(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000E78
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E78:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E80:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x96c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000E94
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E94:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000E9C:
    mr r3, r31
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000EC8
    lwz r3, lbl_8087F1E4
    lwz r3, 0x944(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000EC0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000EC0:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000EC8:
    cmpwi r30, 0x0
    beq lbl_fn_803DF2DC_00000F04
    cmpwi r31, 0x0
    beq lbl_fn_803DF2DC_00000F04
    lwz r0, 0xac(r31)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x40
    bne lbl_fn_803DF2DC_00000F04
    lwz r3, lbl_8087F1E4
    lwz r3, 0x994(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000EFC
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000EFC:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000F04:
    cmpwi r31, 0x0
    beq lbl_fn_803DF2DC_00000F3C
    lwz r0, 0xac(r31)
    rlwinm r3, r0, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    bne lbl_fn_803DF2DC_00000F3C
    lwz r3, lbl_8087F1E4
    lwz r3, 0x9a4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000F34
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000F34:
    la r3, lbl_808813D0
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000F3C:
    lwz r3, lbl_8087F1E4
    lwz r3, 0x99c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF2DC_00000F50
    b lbl_fn_803DF2DC_00000F54
lbl_fn_803DF2DC_00000F50:
    la r3, lbl_808813D0
lbl_fn_803DF2DC_00000F54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803DF5B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x2f0(r3)
    stw r0, 0xb0(r3)
    stw r0, 0xb8(r3)
    stw r0, 0x110(r3)
    stw r0, 0x118(r3)
    stw r0, 0x170(r3)
    stw r0, 0x178(r3)
    stw r0, 0x1d0(r3)
    stw r0, 0x1d8(r3)
    stw r0, 0x230(r3)
    stw r0, 0x238(r3)
    stw r0, 0x290(r3)
    stw r0, 0x298(r3)
    bl fn_803DF648
    mr r5, r31
    li r6, 0x0
    li r4, 0x14
    b lbl_fn_803DF5B4_00000FE0
lbl_fn_803DF5B4_00000FD0:
    lwz r3, 0x2f4(r5)
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    stw r4, 0x0(r3)
lbl_fn_803DF5B4_00000FE0:
    lwz r0, 0x2f0(r31)
    cmplw r6, r0
    blt lbl_fn_803DF5B4_00000FD0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803DF648(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F428
    bl fn_8036554C
    b lbl_fn_803DF648_000010B4
lbl_fn_803DF648_00001034:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803DF648_00001050
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x8
    bne lbl_fn_803DF648_000010B0
lbl_fn_803DF648_00001050:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_803DF648_000010B0
    lwz r0, 0xc54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803DF648_000010B0
    lwz r4, 0x60(r3)
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    ble lbl_fn_803DF648_000010B0
    cmpwi r0, 0x1a
    bgt lbl_fn_803DF648_000010B0
    lwz r0, 0xc(r1)
    addi r4, r1, 0x10
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_803DF648_0000109C
    stw r3, 0x0(r4)
lbl_fn_803DF648_0000109C:
    lwz r4, 0xc(r1)
    addi r0, r4, 0x1
    stw r0, 0xc(r1)
    cmplwi r0, 0x6
    bge lbl_fn_803DF648_000010BC
lbl_fn_803DF648_000010B0:
    lwz r3, 0x14ac(r3)
lbl_fn_803DF648_000010B4:
    cmpwi r3, 0x0
    bne lbl_fn_803DF648_00001034
lbl_fn_803DF648_000010BC:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_803DF648_0000118C
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_803DF648_0000117C
lbl_fn_803DF648_000010D4:
    cmpwi r28, 0x0
    lwz r3, lbl_8087F610
    blt lbl_fn_803DF648_000010F8
    lwz r0, 0x5e8(r3)
    cmpw r28, r0
    bge lbl_fn_803DF648_000010F8
    lwz r0, 0x5e4(r3)
    add r29, r0, r30
    b lbl_fn_803DF648_000010FC
lbl_fn_803DF648_000010F8:
    li r29, 0x0
lbl_fn_803DF648_000010FC:
    bl fn_804EB874
    cmplw r29, r3
    beq lbl_fn_803DF648_00001174
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803DF648_00001174
    lwz r0, 0xd0(r29)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803DF648_00001174
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803DF648_00001174
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803DF648_00001174
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_803DF648_00001174
    lwz r0, 0xc(r1)
    addi r3, r1, 0x10
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_803DF648_00001168
    lwz r0, 0x0(r29)
    stw r0, 0x0(r3)
lbl_fn_803DF648_00001168:
    lwz r3, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0xc(r1)
lbl_fn_803DF648_00001174:
    addi r28, r28, 0x1
    addi r30, r30, 0xd5c
lbl_fn_803DF648_0000117C:
    lwz r3, lbl_8087F610
    lwz r0, 0x5e8(r3)
    cmpw r28, r0
    blt lbl_fn_803DF648_000010D4
lbl_fn_803DF648_0000118C:
    mr r6, r31
    li r8, 0x0
    li r3, 0x1
    li r5, 0x0
    b lbl_fn_803DF648_000011E4
lbl_fn_803DF648_000011A0:
    lwz r9, 0x2f4(r6)
    addi r7, r1, 0xc
    li r10, 0x0
    stw r5, 0x4(r9)
    b lbl_fn_803DF648_000011D0
lbl_fn_803DF648_000011B4:
    lwz r4, 0x4(r7)
    lwz r0, 0x8(r9)
    cmplw r4, r0
    bne lbl_fn_803DF648_000011C8
    stw r3, 0x4(r9)
lbl_fn_803DF648_000011C8:
    addi r7, r7, 0x4
    addi r10, r10, 0x1
lbl_fn_803DF648_000011D0:
    lwz r0, 0xc(r1)
    cmplw r10, r0
    blt lbl_fn_803DF648_000011B4
    addi r6, r6, 0x4
    addi r8, r8, 0x1
lbl_fn_803DF648_000011E4:
    lwz r0, 0x2f0(r31)
    cmplw r8, r0
    blt lbl_fn_803DF648_000011A0
    addi r7, r1, 0xc
    li r10, 0x0
    li r5, 0x1
    li r3, 0x6
    li r0, 0x6
    b lbl_fn_803DF648_00001290
lbl_fn_803DF648_00001208:
    mr r8, r31
    lwz r9, 0x4(r7)
    li r6, 0x0
    mtctr r3
lbl_fn_803DF648_00001218:
    lwz r4, 0xb8(r8)
    cmplw r4, r9
    bne lbl_fn_803DF648_00001234
    mulli r4, r6, 0x60
    add r4, r31, r4
    addi r4, r4, 0xb0
    b lbl_fn_803DF648_00001278
lbl_fn_803DF648_00001234:
    addi r8, r8, 0x60
    addi r6, r6, 0x1
    bdnz lbl_fn_803DF648_00001218
    mr r8, r31
    li r6, 0x0
    mtctr r0
lbl_fn_803DF648_0000124C:
    lwz r4, 0xb8(r8)
    cmpwi r4, 0x0
    bne lbl_fn_803DF648_00001268
    mulli r4, r6, 0x60
    add r4, r31, r4
    addi r4, r4, 0xb0
    b lbl_fn_803DF648_00001278
lbl_fn_803DF648_00001268:
    addi r8, r8, 0x60
    addi r6, r6, 0x1
    bdnz lbl_fn_803DF648_0000124C
    li r4, 0x0
lbl_fn_803DF648_00001278:
    cmpwi r4, 0x0
    beq lbl_fn_803DF648_00001288
    stw r9, 0x8(r4)
    stw r5, 0x4(r4)
lbl_fn_803DF648_00001288:
    addi r7, r7, 0x4
    addi r10, r10, 0x1
lbl_fn_803DF648_00001290:
    lwz r4, 0xc(r1)
    cmplw r10, r4
    blt lbl_fn_803DF648_00001208
    li r0, 0x2
    li r3, 0x0
    mr r4, r31
    stw r3, 0x2f0(r31)
    addi r5, r31, 0xb0
    li r6, 0x0
    mtctr r0
lbl_fn_803DF648_000012B8:
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803DF648_000012E8
    lwz r0, 0x2f0(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x2f4
    beq lbl_fn_803DF648_000012DC
    stw r5, 0x0(r3)
lbl_fn_803DF648_000012DC:
    lwz r3, 0x2f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x2f0(r31)
lbl_fn_803DF648_000012E8:
    lwz r0, 0x118(r4)
    addi r5, r5, 0x60
    cmpwi r0, 0x0
    beq lbl_fn_803DF648_0000131C
    lwz r0, 0x2f0(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x2f4
    beq lbl_fn_803DF648_00001310
    stw r5, 0x0(r3)
lbl_fn_803DF648_00001310:
    lwz r3, 0x2f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x2f0(r31)
lbl_fn_803DF648_0000131C:
    lwz r0, 0x178(r4)
    addi r5, r5, 0x60
    cmpwi r0, 0x0
    beq lbl_fn_803DF648_00001350
    lwz r0, 0x2f0(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x2f4
    beq lbl_fn_803DF648_00001344
    stw r5, 0x0(r3)
lbl_fn_803DF648_00001344:
    lwz r3, 0x2f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x2f0(r31)
lbl_fn_803DF648_00001350:
    addi r4, r4, 0x120
    addi r5, r5, 0x60
    addi r6, r6, 0x2
    bdnz lbl_fn_803DF648_000012B8
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r31, 0x2f4
    addi r5, r1, 0x8
    lwz r0, 0x2f0(r31)
    slwi r0, r0, 2
    add r4, r31, r0
    addi r4, r4, 0x2f4
    bl fn_803DF9EC
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803DF9EC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    addi r31, r6, 0x6667
lbl_fn_803DF9EC_000013C8:
    subf r0, r25, r26
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_803DF9EC_00001BF4
    cmpwi r7, 0x14
    bgt lbl_fn_803DF9EC_000014E8
    cmplw r25, r26
    beq lbl_fn_803DF9EC_00001BF4
    subi r24, r26, 0x4
    b lbl_fn_803DF9EC_000014DC
lbl_fn_803DF9EC_000013F4:
    cmplw r25, r26
    mr r31, r25
    beq lbl_fn_803DF9EC_000014C0
    addi r30, r25, 0x4
    b lbl_fn_803DF9EC_000014B8
lbl_fn_803DF9EC_00001408:
    lwz r28, 0x0(r30)
    lwz r29, 0x0(r31)
    lwz r3, 0x8(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r29)
    mr r27, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r27, 0x0
    bge lbl_fn_803DF9EC_00001444
    cmpwi r3, 0x0
    blt lbl_fn_803DF9EC_00001444
    li r0, 0x0
    b lbl_fn_803DF9EC_000014A8
lbl_fn_803DF9EC_00001444:
    cmpwi r27, 0x0
    blt lbl_fn_803DF9EC_0000145C
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_0000145C
    li r0, 0x1
    b lbl_fn_803DF9EC_000014A8
lbl_fn_803DF9EC_0000145C:
    cmpwi r27, 0x0
    bge lbl_fn_803DF9EC_00001494
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001494
    lwz r4, 0x8(r28)
    lwz r3, 0x8(r29)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803DF9EC_000014A8
lbl_fn_803DF9EC_00001494:
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803DF9EC_000014A8:
    cmpwi r0, 0x0
    beq lbl_fn_803DF9EC_000014B4
    mr r31, r30
lbl_fn_803DF9EC_000014B4:
    addi r30, r30, 0x4
lbl_fn_803DF9EC_000014B8:
    cmplw r30, r26
    bne lbl_fn_803DF9EC_00001408
lbl_fn_803DF9EC_000014C0:
    cmplw r31, r25
    beq lbl_fn_803DF9EC_000014D8
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r25)
    stw r0, 0x0(r31)
    stw r3, 0x0(r25)
lbl_fn_803DF9EC_000014D8:
    addi r25, r25, 0x4
lbl_fn_803DF9EC_000014DC:
    cmplw r25, r24
    bne lbl_fn_803DF9EC_000013F4
    b lbl_fn_803DF9EC_00001BF4
lbl_fn_803DF9EC_000014E8:
    lwz r4, lbl_8087DEF0
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    slwi r0, r0, 2
    add r3, r25, r0
    blt lbl_fn_803DF9EC_00001528
    li r6, -0x4
lbl_fn_803DF9EC_00001528:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087DEF0
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
    slwi r0, r0, 2
    add r4, r25, r0
    blt lbl_fn_803DF9EC_00001574
    li r6, -0x4
    stw r6, lbl_8087DEF0
lbl_fn_803DF9EC_00001574:
    subi r28, r26, 0x4
    mr r6, r27
    mr r5, r28
    bl fn_803E0AB4
    mr r30, r25
    mr r29, r28
    b lbl_fn_803DF9EC_00001594
lbl_fn_803DF9EC_00001590:
    addi r30, r30, 0x4
lbl_fn_803DF9EC_00001594:
    lwz r23, 0x0(r30)
    lwz r22, 0x0(r28)
    lwz r3, 0x8(r23)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r22)
    mr r24, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r24, 0x0
    bge lbl_fn_803DF9EC_000015D0
    cmpwi r3, 0x0
    blt lbl_fn_803DF9EC_000015D0
    li r0, 0x0
    b lbl_fn_803DF9EC_00001634
lbl_fn_803DF9EC_000015D0:
    cmpwi r24, 0x0
    blt lbl_fn_803DF9EC_000015E8
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_000015E8
    li r0, 0x1
    b lbl_fn_803DF9EC_00001634
lbl_fn_803DF9EC_000015E8:
    cmpwi r24, 0x0
    bge lbl_fn_803DF9EC_00001620
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001620
    lwz r4, 0x8(r23)
    lwz r3, 0x8(r22)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803DF9EC_00001634
lbl_fn_803DF9EC_00001620:
    xor r0, r3, r24
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803DF9EC_00001634:
    cmpwi r0, 0x0
    bne lbl_fn_803DF9EC_00001590
lbl_fn_803DF9EC_0000163C:
    subi r29, r29, 0x4
    cmplw r30, r29
    beq lbl_fn_803DF9EC_000016F0
    lwz r22, 0x0(r29)
    lwz r23, 0x0(r28)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r24, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r24, 0x0
    bge lbl_fn_803DF9EC_00001684
    cmpwi r3, 0x0
    blt lbl_fn_803DF9EC_00001684
    li r0, 0x0
    b lbl_fn_803DF9EC_000016E8
lbl_fn_803DF9EC_00001684:
    cmpwi r24, 0x0
    blt lbl_fn_803DF9EC_0000169C
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_0000169C
    li r0, 0x1
    b lbl_fn_803DF9EC_000016E8
lbl_fn_803DF9EC_0000169C:
    cmpwi r24, 0x0
    bge lbl_fn_803DF9EC_000016D4
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_000016D4
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803DF9EC_000016E8
lbl_fn_803DF9EC_000016D4:
    xor r0, r3, r24
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803DF9EC_000016E8:
    cmpwi r0, 0x0
    beq lbl_fn_803DF9EC_0000163C
lbl_fn_803DF9EC_000016F0:
    cmplw r30, r29
    bge lbl_fn_803DF9EC_00001884
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    b lbl_fn_803DF9EC_00001714
lbl_fn_803DF9EC_00001710:
    addi r30, r30, 0x4
lbl_fn_803DF9EC_00001714:
    lwz r22, 0x0(r30)
    lwz r23, 0x0(r28)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r24, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r24, 0x0
    bge lbl_fn_803DF9EC_00001750
    cmpwi r3, 0x0
    blt lbl_fn_803DF9EC_00001750
    li r0, 0x0
    b lbl_fn_803DF9EC_000017B4
lbl_fn_803DF9EC_00001750:
    cmpwi r24, 0x0
    blt lbl_fn_803DF9EC_00001768
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001768
    li r0, 0x1
    b lbl_fn_803DF9EC_000017B4
lbl_fn_803DF9EC_00001768:
    cmpwi r24, 0x0
    bge lbl_fn_803DF9EC_000017A0
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_000017A0
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803DF9EC_000017B4
lbl_fn_803DF9EC_000017A0:
    xor r0, r3, r24
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803DF9EC_000017B4:
    cmpwi r0, 0x0
    bne lbl_fn_803DF9EC_00001710
lbl_fn_803DF9EC_000017BC:
    lwzu r22, -0x4(r29)
    lwz r23, 0x0(r28)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r24, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r24, 0x0
    bge lbl_fn_803DF9EC_000017F8
    cmpwi r3, 0x0
    blt lbl_fn_803DF9EC_000017F8
    li r0, 0x0
    b lbl_fn_803DF9EC_0000185C
lbl_fn_803DF9EC_000017F8:
    cmpwi r24, 0x0
    blt lbl_fn_803DF9EC_00001810
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001810
    li r0, 0x1
    b lbl_fn_803DF9EC_0000185C
lbl_fn_803DF9EC_00001810:
    cmpwi r24, 0x0
    bge lbl_fn_803DF9EC_00001848
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001848
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803DF9EC_0000185C
lbl_fn_803DF9EC_00001848:
    xor r0, r3, r24
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803DF9EC_0000185C:
    cmpwi r0, 0x0
    beq lbl_fn_803DF9EC_000017BC
    cmplw r30, r29
    bge lbl_fn_803DF9EC_00001884
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    b lbl_fn_803DF9EC_00001714
lbl_fn_803DF9EC_00001884:
    cmplw r30, r25
    bne lbl_fn_803DF9EC_00001BA4
    lwz r3, 0x0(r30)
    subi r29, r26, 0x4
    lwz r0, 0x0(r28)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r28)
    lwz r22, 0x0(r25)
    lwz r23, -0x4(r26)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r28, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r28, 0x0
    bge lbl_fn_803DF9EC_000018E0
    cmpwi r3, 0x0
    blt lbl_fn_803DF9EC_000018E0
    li r0, 0x0
    b lbl_fn_803DF9EC_00001944
lbl_fn_803DF9EC_000018E0:
    cmpwi r28, 0x0
    blt lbl_fn_803DF9EC_000018F8
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_000018F8
    li r0, 0x1
    b lbl_fn_803DF9EC_00001944
lbl_fn_803DF9EC_000018F8:
    cmpwi r28, 0x0
    bge lbl_fn_803DF9EC_00001930
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001930
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803DF9EC_00001944
lbl_fn_803DF9EC_00001930:
    xor r0, r3, r28
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803DF9EC_00001944:
    cmpwi r0, 0x0
    bne lbl_fn_803DF9EC_00001A1C
    b lbl_fn_803DF9EC_00001954
lbl_fn_803DF9EC_00001950:
    addi r30, r30, 0x4
lbl_fn_803DF9EC_00001954:
    cmplw r30, r26
    beq lbl_fn_803DF9EC_00001A04
    lwz r22, 0x0(r25)
    lwz r23, 0x0(r30)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r28, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r28, 0x0
    bge lbl_fn_803DF9EC_00001998
    cmpwi r3, 0x0
    blt lbl_fn_803DF9EC_00001998
    li r0, 0x0
    b lbl_fn_803DF9EC_000019FC
lbl_fn_803DF9EC_00001998:
    cmpwi r28, 0x0
    blt lbl_fn_803DF9EC_000019B0
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_000019B0
    li r0, 0x1
    b lbl_fn_803DF9EC_000019FC
lbl_fn_803DF9EC_000019B0:
    cmpwi r28, 0x0
    bge lbl_fn_803DF9EC_000019E8
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_000019E8
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803DF9EC_000019FC
lbl_fn_803DF9EC_000019E8:
    xor r0, r3, r28
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803DF9EC_000019FC:
    cmpwi r0, 0x0
    beq lbl_fn_803DF9EC_00001950
lbl_fn_803DF9EC_00001A04:
    cmplw r30, r29
    bge lbl_fn_803DF9EC_00001A1C
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    stw r3, 0x0(r29)
lbl_fn_803DF9EC_00001A1C:
    cmplw r30, r29
    bge lbl_fn_803DF9EC_00001B9C
    b lbl_fn_803DF9EC_00001A2C
lbl_fn_803DF9EC_00001A28:
    addi r30, r30, 0x4
lbl_fn_803DF9EC_00001A2C:
    lwz r22, 0x0(r25)
    lwz r23, 0x0(r30)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r28, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r28, 0x0
    bge lbl_fn_803DF9EC_00001A68
    cmpwi r3, 0x0
    blt lbl_fn_803DF9EC_00001A68
    li r0, 0x0
    b lbl_fn_803DF9EC_00001ACC
lbl_fn_803DF9EC_00001A68:
    cmpwi r28, 0x0
    blt lbl_fn_803DF9EC_00001A80
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001A80
    li r0, 0x1
    b lbl_fn_803DF9EC_00001ACC
lbl_fn_803DF9EC_00001A80:
    cmpwi r28, 0x0
    bge lbl_fn_803DF9EC_00001AB8
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001AB8
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803DF9EC_00001ACC
lbl_fn_803DF9EC_00001AB8:
    xor r0, r3, r28
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803DF9EC_00001ACC:
    cmpwi r0, 0x0
    beq lbl_fn_803DF9EC_00001A28
lbl_fn_803DF9EC_00001AD4:
    lwz r22, 0x0(r25)
    lwzu r23, -0x4(r29)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r28, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r28, 0x0
    bge lbl_fn_803DF9EC_00001B10
    cmpwi r3, 0x0
    blt lbl_fn_803DF9EC_00001B10
    li r0, 0x0
    b lbl_fn_803DF9EC_00001B74
lbl_fn_803DF9EC_00001B10:
    cmpwi r28, 0x0
    blt lbl_fn_803DF9EC_00001B28
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001B28
    li r0, 0x1
    b lbl_fn_803DF9EC_00001B74
lbl_fn_803DF9EC_00001B28:
    cmpwi r28, 0x0
    bge lbl_fn_803DF9EC_00001B60
    cmpwi r3, 0x0
    bge lbl_fn_803DF9EC_00001B60
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803DF9EC_00001B74
lbl_fn_803DF9EC_00001B60:
    xor r0, r3, r28
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803DF9EC_00001B74:
    cmpwi r0, 0x0
    bne lbl_fn_803DF9EC_00001AD4
    cmplw r30, r29
    bge lbl_fn_803DF9EC_00001B9C
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    b lbl_fn_803DF9EC_00001A2C
lbl_fn_803DF9EC_00001B9C:
    mr r25, r30
    b lbl_fn_803DF9EC_000013C8
lbl_fn_803DF9EC_00001BA4:
    subf r3, r25, r30
    subf r0, r30, r26
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_803DF9EC_00001BDC
    mr r3, r25
    mr r4, r30
    mr r5, r27
    bl fn_803E0250
    mr r25, r30
    b lbl_fn_803DF9EC_000013C8
lbl_fn_803DF9EC_00001BDC:
    mr r3, r30
    mr r4, r26
    mr r5, r27
    bl fn_803E0250
    mr r26, r30
    b lbl_fn_803DF9EC_000013C8
lbl_fn_803DF9EC_00001BF4:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
