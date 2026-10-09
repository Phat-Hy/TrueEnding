#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D3A4(void);
extern void fn_8000D9E8(void);
extern void fn_80011034(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_80013404(void);
extern void fn_80063D3C(void);
extern void fn_80092814(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_801092C8(void);
extern void fn_801125F8(void);
extern void fn_80121F00(void);
extern void fn_80126214(void);
extern void fn_80127D8C(void);
extern void fn_8012DD70(void);
extern void fn_8013A258(void);
extern void fn_8013C38C(void);
extern void fn_8013C504(void);
extern void fn_8013CB68(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_801C3910(void);
extern void fn_80219E6C(void);
extern void fn_802A36B0(void);
extern void fn_80300654(void);
extern void fn_8030073C(void);
extern void fn_803009F4(void);
extern void fn_80304B40(void);
extern void fn_80370A78(void);
extern void fn_80375184(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80748A14[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884A20;
extern u32 lbl_80884A28;
extern u32 lbl_80884A30;
extern u32 lbl_80884A34;
extern u32 lbl_80884A38;
extern u32 lbl_80884A44;
extern u32 lbl_80884A48;
extern u32 lbl_80884A5C;
extern u32 lbl_80884A64;
extern u32 lbl_80884A68;
extern u32 lbl_80884A6C;
extern u32 lbl_80884A70;
extern u32 lbl_80884A78;
extern u32 lbl_80884A98;
extern u32 lbl_80884A9C;
extern u32 lbl_80884AA0;
extern u32 lbl_80884AA4;
extern u32 lbl_80884AA8;
extern u32 lbl_80884AAC;
extern u32 lbl_80884AB0;
extern u32 lbl_80884AB4;
extern u32 lbl_80884AB8;
extern u32 lbl_80884ABC;

/* Function declarations */
void fn_802FF2E4(void);
void fn_802FF4B4(void);
void fn_802FF550(void);
void fn_802FF604(void);
void fn_802FF6C4(void);
void fn_802FF800(void);
void fn_802FFFF8(void);

asm void fn_802FF2E4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802FF2E4_00000190
    lwz r5, 0x62c(r3)
    lis r4, lbl_80748A14@ha
    lfs f0, lbl_80884A34
    addi r4, r4, lbl_80748A14@l
    stfs f0, 0x10(r5)
    addi r6, r1, 0x20
    addi r4, r4, 0x169
    li r5, 0x0
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x530(r3)
    fadds f3, f3, f0
    lfs f0, 0x5ac(r3)
    stfs f5, 0x24(r1)
    fadds f2, f4, f0
    lwz r7, 0x62c(r3)
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lwz r6, 0x62c(r3)
    stfs f2, 0x28(r1)
    lfs f3, 0x8(r6)
    lfs f0, 0x10(r6)
    fadds f0, f3, f0
    stfs f0, 0x8(r6)
    lwz r6, 0x62c(r3)
    lfs f0, 0x16ec(r3)
    addi r3, r3, 0xb0
    stfs f0, 0x24(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802FF2E4_000000B8
    li r4, 0x0
    b lbl_fn_802FF2E4_000000C4
lbl_fn_802FF2E4_000000B8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802FF2E4_000000C4:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80748A14@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x14
    stfs f3, 0x14(r1)
    addi r3, r3, lbl_80748A14@l
    lfs f2, 0x2c(r4)
    addi r4, r3, 0x169
    stfs f0, 0x18(r1)
    addi r3, r31, 0xb0
    lwz r7, 0x62c(r31)
    li r5, 0x0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x18(r7), 0, 0
    lfs f3, lbl_80884A98
    stfs f2, 0x20(r7)
    lwz r6, 0x62c(r31)
    lfs f0, 0x16f0(r31)
    lfs f4, 0x1c(r6)
    stfs f2, 0x1c(r1)
    fadds f0, f4, f0
    stfs f0, 0x1c(r6)
    lfs f0, 0x16ec(r31)
    lwz r6, 0x62c(r31)
    fmuls f0, f3, f0
    stfs f0, 0x38(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802FF2E4_00000140
    li r4, 0x0
    b lbl_fn_802FF2E4_0000014C
lbl_fn_802FF2E4_00000140:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802FF2E4_0000014C:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    lwz r4, 0x62c(r31)
    stfs f0, 0xc(r1)
    lfs f4, lbl_80884A9C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    stfs f2, 0x34(r4)
    lwz r3, 0x62c(r31)
    lfs f3, 0x16f0(r31)
    lfs f0, 0x30(r3)
    stfs f2, 0x10(r1)
    fmadds f0, f4, f3, f0
    stfs f0, 0x30(r3)
lbl_fn_802FF2E4_00000190:
    lwz r0, 0x1690(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802FF2E4_000001BC
    lwz r6, 0x62c(r31)
    lis r4, 0xffff
    lwz r3, lbl_8087EEB0
    addi r5, r4, 0xff
    lfs f1, lbl_80884A38
    addi r4, r6, 0x18
    lfs f2, lbl_80884A70
    bl fn_80063D3C
lbl_fn_802FF2E4_000001BC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802FF4B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_802FF4B4_00000218
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802FF4B4_00000254
lbl_fn_802FF4B4_00000218:
    lwz r3, lbl_8087F430
    li r4, 0xa1
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802FF4B4_00000240
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_802FF4B4_00000254
lbl_fn_802FF4B4_00000240:
    lwz r3, 0x62c(r31)
    psq_l f1, 0x18(r3), 0, 0
    lfs f2, 0x20(r3)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
lbl_fn_802FF4B4_00000254:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802FF550(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x7d4
    bl fn_8012DD70
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    bl fn_8016DA4C
    li r4, 0x0
    li r3, 0x50
    li r0, 0x1e
    stw r4, 0xfc0(r31)
    stw r3, 0x1434(r31)
    stw r0, 0x15b0(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802FF550_0000030C
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_802FF550_0000030C
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802FF550_0000030C
    lwz r3, lbl_8087F048
    mr r5, r31
    li r4, 0x6
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_802FF550_0000030C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802FF604(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lfs f5, 0x52c(r3)
    addi r4, r1, 0x8
    lfs f4, 0x5a8(r3)
    addi r6, r1, 0x20
    lfs f3, 0x528(r3)
    addi r5, r1, 0x14
    fadds f4, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f5, 0x5b0(r3)
    fadds f0, f3, f0
    lfs f8, 0x52c(r3)
    lfs f7, 0x528(r3)
    stfs f0, 0x8(r1)
    lfs f3, 0x530(r3)
    stfs f4, 0xc(r1)
    lfs f0, 0x5ac(r3)
    psq_l f1, 0x0(r4), 0, 0
    fadds f6, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f9, 0x530(r3)
    lfs f0, 0x618(r3)
    fmr f2, f6
    stfs f7, 0x20(r1)
    fadds f4, f0, f5
    lfs f3, lbl_80884AA0
    stfs f8, 0x24(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x18(r1)
    stfs f2, 0x61c(r3)
    fmr f2, f9
    fmadds f0, f3, f5, f0
    stfs f2, 0x1c(r1)
    stfs f2, 0x5fc(r3)
    frsp f2, f2
    stfs f0, 0x18(r1)
    psq_st f1, 0x5f4(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x620(r3)
    stfs f6, 0x10(r1)
    stfs f4, 0x618(r3)
    stfs f9, 0x28(r1)
    psq_st f1, 0x600(r3), 0, 0
    stfs f2, 0x608(r3)
    stfs f5, 0x60c(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_802FF6C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0xd1c(r3)
    stw r0, 0xd20(r3)
    bl fn_80304B40
    cmpwi r3, 0x0
    beq lbl_fn_802FF6C4_0000042C
    lwz r3, 0x1524(r31)
    addi r0, r3, 0x1
    stw r0, 0x1524(r31)
    b lbl_fn_802FF6C4_00000434
lbl_fn_802FF6C4_0000042C:
    li r0, 0x0
    stw r0, 0x1524(r31)
lbl_fn_802FF6C4_00000434:
    lwz r3, 0x1524(r31)
    lwz r0, 0x16f8(r31)
    lwz r4, lbl_8087F8A0
    cmpw r3, r0
    lwz r30, 0x48(r4)
    blt lbl_fn_802FF6C4_0000045C
    li r0, 0x0
    stw r0, 0x1454(r31)
    stw r30, 0x14ec(r31)
    b lbl_fn_802FF6C4_0000046C
lbl_fn_802FF6C4_0000045C:
    lwz r0, 0xd1c(r31)
    li r3, 0x1
    stw r3, 0x1454(r31)
    stw r0, 0x14ec(r31)
lbl_fn_802FF6C4_0000046C:
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80103F60
    lwz r4, lbl_8087F8A0
    mr r29, r3
    lfs f31, lbl_80884A5C
    lwz r28, 0x48(r4)
    b lbl_fn_802FF6C4_000004E4
lbl_fn_802FF6C4_0000048C:
    mr r3, r29
    mr r4, r28
    bl fn_80108378
    cmpwi r3, 0x0
    blt lbl_fn_802FF6C4_000004E0
    lwz r4, 0x1524(r31)
    lwz r0, 0x16f8(r31)
    cmpw r4, r0
    blt lbl_fn_802FF6C4_000004D4
    cmplw r28, r30
    bne lbl_fn_802FF6C4_000004C0
    lfs f0, lbl_80884A5C
    b lbl_fn_802FF6C4_000004C4
lbl_fn_802FF6C4_000004C0:
    lfs f0, lbl_80884A20
lbl_fn_802FF6C4_000004C4:
    slwi r0, r3, 2
    add r3, r29, r0
    stfs f0, 0x128(r3)
    b lbl_fn_802FF6C4_000004E0
lbl_fn_802FF6C4_000004D4:
    slwi r0, r3, 2
    add r3, r29, r0
    stfs f31, 0x128(r3)
lbl_fn_802FF6C4_000004E0:
    lwz r28, 0x14ac(r28)
lbl_fn_802FF6C4_000004E4:
    cmpwi r28, 0x0
    bne lbl_fn_802FF6C4_0000048C
    lwz r0, 0x14ec(r31)
    stw r0, 0xd1c(r31)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802FF800(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    stw r0, 0x314(r1)
    addi r4, r1, 0x14c
    addi r5, r1, 0x140
    stfd f31, 0x300(r1)
    psq_st f31, 0x308(r1), 0, 0
    lfs f31, lbl_80884A20
    stfd f30, 0x2f0(r1)
    psq_st f30, 0x2f8(r1), 0, 0
    lfs f30, lbl_80884A5C
    stfd f29, 0x2e0(r1)
    psq_st f29, 0x2e8(r1), 0, 0
    stfd f28, 0x2d0(r1)
    psq_st f28, 0x2d8(r1), 0, 0
    stw r31, 0x2cc(r1)
    li r31, 0x0
    stw r30, 0x2c8(r1)
    mr r30, r3
    stw r29, 0x2c4(r1)
    addi r29, r1, 0x158
    stw r28, 0x2c0(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x160(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    lwz r6, 0x14ec(r3)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x530(r3)
    stfs f2, 0x154(r1)
    lfs f2, 0x530(r6)
    lfs f5, 0x144(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x134
    lfs f3, 0x140(r1)
    fsubs f4, f5, f4
    stfs f2, 0x148(r1)
    fsubs f0, f3, f0
    stfs f4, 0x138(r1)
    stfs f0, 0x134(r1)
    stfs f6, 0x13c(r1)
    bl fn_805F9940
    lwz r0, 0x55c(r30)
    fmr f29, f1
    cmpwi r0, 0x7
    bne lbl_fn_802FF800_00000A60
    addi r3, r30, 0x1030
    bl fn_80126214
    addi r4, r30, 0x1088
    lfs f2, 0x1090(r30)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x128
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x130(r1)
    bl fn_805F9940
    lfs f0, lbl_80884AA4
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802FF800_00000A4C
    lwz r0, 0x14f8(r30)
    lfs f0, lbl_80884AA8
    cmpwi r0, 0x2
    bne lbl_fn_802FF800_00000634
    lfs f0, lbl_80884A44
lbl_fn_802FF800_00000634:
    fcmpo cr0, f29, f0
    bge lbl_fn_802FF800_00000834
    addi r3, r1, 0x134
    addi r29, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x13c(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    lfs f31, lbl_80884A20
    stfs f2, 0x118(r1)
    bl fn_805F98D0
    lfs f2, 0x118(r1)
    addi r28, r1, 0x11c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884A64
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x124(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FF800_000006B0
    lfs f3, 0x11c(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FF800_000006A4
    lfs f0, lbl_80884A68
    b lbl_fn_802FF800_000006A8
lbl_fn_802FF800_000006A4:
    lfs f0, lbl_80884A6C
lbl_fn_802FF800_000006A8:
    stfs f0, 0xd8(r1)
    b lbl_fn_802FF800_000006C4
lbl_fn_802FF800_000006B0:
    frsp f2, f2
    lfs f1, 0x11c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_802FF800_000006C4:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x248
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884A20
    addi r4, r1, 0xc8
    lfs f28, 0x250(r1)
    mr r5, r4
    lfs f29, 0x24c(r1)
    addi r3, r1, 0x278
    lfs f13, 0x248(r1)
    lfs f12, 0x260(r1)
    lfs f11, 0x25c(r1)
    lfs f10, 0x258(r1)
    lfs f9, 0x270(r1)
    lfs f8, 0x26c(r1)
    lfs f7, 0x268(r1)
    lfs f6, 0x274(r1)
    lfs f5, 0x264(r1)
    lfs f4, 0x254(r1)
    lfs f0, lbl_80884A5C
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x124(r1)
    stfs f3, 0x2a8(r1)
    stfs f3, 0x2ac(r1)
    stfs f3, 0x2b0(r1)
    stfs f0, 0x2b4(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f13, 0x278(r1)
    stfs f29, 0x27c(r1)
    stfs f28, 0x280(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x288(r1)
    stfs f11, 0x28c(r1)
    stfs f12, 0x290(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x298(r1)
    stfs f8, 0x29c(r1)
    stfs f9, 0x2a0(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x284(r1)
    stfs f5, 0x294(r1)
    stfs f6, 0x2a4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80884A64
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FF800_000007E0
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FF800_000007D0
    lfs f0, lbl_80884A68
    b lbl_fn_802FF800_000007D4
lbl_fn_802FF800_000007D0:
    lfs f0, lbl_80884A6C
lbl_fn_802FF800_000007D4:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_802FF800_000007F4
lbl_fn_802FF800_000007E0:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_802FF800_000007F4:
    lfs f2, lbl_80884A20
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    addi r7, r1, 0x158
    stfs f2, 0xdc(r1)
    addi r3, r30, 0x1030
    li r4, 0x0
    li r5, 0x0
    stfs f2, 0x124(r1)
    frsp f2, f2
    li r6, 0x0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x160(r1)
    bl fn_80127D8C
    b lbl_fn_802FF800_00000CA0
lbl_fn_802FF800_00000834:
    addi r3, r1, 0x128
    addi r28, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x130(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F98D0
    lfs f2, 0x100(r1)
    addi r29, r1, 0x104
    psq_l f1, 0x0(r28), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884A64
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x10c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FF800_000008A4
    lfs f3, 0x104(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FF800_00000898
    lfs f0, lbl_80884A68
    b lbl_fn_802FF800_0000089C
lbl_fn_802FF800_00000898:
    lfs f0, lbl_80884A6C
lbl_fn_802FF800_0000089C:
    stfs f0, 0x90(r1)
    b lbl_fn_802FF800_000008B8
lbl_fn_802FF800_000008A4:
    frsp f2, f2
    lfs f1, 0x104(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_802FF800_000008B8:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1d8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884A20
    addi r4, r1, 0x80
    lfs f29, 0x1e0(r1)
    mr r5, r4
    lfs f28, 0x1dc(r1)
    addi r3, r1, 0x208
    lfs f13, 0x1d8(r1)
    lfs f12, 0x1f0(r1)
    lfs f11, 0x1ec(r1)
    lfs f10, 0x1e8(r1)
    lfs f9, 0x200(r1)
    lfs f8, 0x1fc(r1)
    lfs f7, 0x1f8(r1)
    lfs f6, 0x204(r1)
    lfs f5, 0x1f4(r1)
    lfs f4, 0x1e4(r1)
    lfs f0, lbl_80884A5C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x10c(r1)
    stfs f3, 0x238(r1)
    stfs f3, 0x23c(r1)
    stfs f3, 0x240(r1)
    stfs f0, 0x244(r1)
    stfs f13, 0x50(r1)
    stfs f28, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x208(r1)
    stfs f28, 0x20c(r1)
    stfs f29, 0x210(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x218(r1)
    stfs f11, 0x21c(r1)
    stfs f12, 0x220(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x228(r1)
    stfs f8, 0x22c(r1)
    stfs f9, 0x230(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x214(r1)
    stfs f5, 0x224(r1)
    stfs f6, 0x234(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80884A64
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FF800_000009D4
    lfs f3, 0x84(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FF800_000009C4
    lfs f0, lbl_80884A68
    b lbl_fn_802FF800_000009C8
lbl_fn_802FF800_000009C4:
    lfs f0, lbl_80884A6C
lbl_fn_802FF800_000009C8:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_802FF800_000009E8
lbl_fn_802FF800_000009D4:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_802FF800_000009E8:
    lfs f3, lbl_80884A20
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x158
    fmr f2, f3
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_80884AAC
    stfs f2, 0x10c(r1)
    frsp f2, f2
    lfs f4, 0x15c(r1)
    stfs f3, 0x94(r1)
    stfs f2, 0x160(r1)
    lfs f3, 0x538(r30)
    psq_st f1, 0x0(r29), 0, 0
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_802FF800_00000CA0
    lfs f0, lbl_80884AA4
    fcmpo cr0, f31, f0
    bge lbl_fn_802FF800_00000CA0
    lfs f31, lbl_80884A5C
    li r31, 0x1
    b lbl_fn_802FF800_00000CA0
lbl_fn_802FF800_00000A4C:
    psq_l f1, 0x534(r30), 0, 0
    lfs f2, 0x53c(r30)
    stfs f2, 0x160(r1)
    psq_st f1, 0x0(r29), 0, 0
    b lbl_fn_802FF800_00000CA0
lbl_fn_802FF800_00000A60:
    cmpwi r0, 0x3
    bne lbl_fn_802FF800_00000C8C
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802FF800_00000CA0
    addi r3, r1, 0x134
    addi r28, r1, 0xe0
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x13c(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xe8(r1)
    bl fn_805F98D0
    lfs f2, 0xe8(r1)
    addi r29, r1, 0xec
    psq_l f1, 0x0(r28), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884A64
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xf4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FF800_00000AE4
    lfs f3, 0xec(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FF800_00000AD8
    lfs f0, lbl_80884A68
    b lbl_fn_802FF800_00000ADC
lbl_fn_802FF800_00000AD8:
    lfs f0, lbl_80884A6C
lbl_fn_802FF800_00000ADC:
    stfs f0, 0x48(r1)
    b lbl_fn_802FF800_00000AF8
lbl_fn_802FF800_00000AE4:
    frsp f2, f2
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802FF800_00000AF8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x168
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884A20
    addi r4, r1, 0x38
    lfs f29, 0x170(r1)
    mr r5, r4
    lfs f28, 0x16c(r1)
    addi r3, r1, 0x198
    lfs f13, 0x168(r1)
    lfs f12, 0x180(r1)
    lfs f11, 0x17c(r1)
    lfs f10, 0x178(r1)
    lfs f9, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f7, 0x188(r1)
    lfs f6, 0x194(r1)
    lfs f5, 0x184(r1)
    lfs f4, 0x174(r1)
    lfs f0, lbl_80884A5C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x198(r1)
    stfs f28, 0x19c(r1)
    stfs f29, 0x1a0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x1a8(r1)
    stfs f11, 0x1ac(r1)
    stfs f12, 0x1b0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x1b8(r1)
    stfs f8, 0x1bc(r1)
    stfs f9, 0x1c0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x1a4(r1)
    stfs f5, 0x1b4(r1)
    stfs f6, 0x1c4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884A64
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FF800_00000C14
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FF800_00000C04
    lfs f0, lbl_80884A68
    b lbl_fn_802FF800_00000C08
lbl_fn_802FF800_00000C04:
    lfs f0, lbl_80884A6C
lbl_fn_802FF800_00000C08:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802FF800_00000C28
lbl_fn_802FF800_00000C14:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802FF800_00000C28:
    lfs f3, lbl_80884A20
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x158
    fmr f2, f3
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_80884AAC
    stfs f2, 0xf4(r1)
    frsp f2, f2
    lfs f4, 0x15c(r1)
    stfs f3, 0x4c(r1)
    stfs f2, 0x160(r1)
    lfs f3, 0x538(r30)
    psq_st f1, 0x0(r29), 0, 0
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_802FF800_00000CA0
    lfs f0, lbl_80884AA4
    fcmpo cr0, f31, f0
    bge lbl_fn_802FF800_00000CA0
    lfs f31, lbl_80884A5C
    li r31, 0x1
    b lbl_fn_802FF800_00000CA0
lbl_fn_802FF800_00000C8C:
    cmpwi r0, 0x6
    bne lbl_fn_802FF800_00000CA0
    mr r3, r30
    bl fn_8013A258
    b lbl_fn_802FF800_00000CD4
lbl_fn_802FF800_00000CA0:
    fmr f1, f31
    mr r3, r30
    fmr f2, f30
    addi r4, r1, 0x158
    li r5, 0x1
    bl fn_8013CB68
    cmpwi r31, 0x0
    beq lbl_fn_802FF800_00000CD4
    addi r3, r1, 0x14c
    lfs f2, 0x154(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
lbl_fn_802FF800_00000CD4:
    lwz r0, 0x314(r1)
    psq_l f31, 0x308(r1), 0, 0
    lfd f31, 0x300(r1)
    psq_l f30, 0x2f8(r1), 0, 0
    lfd f30, 0x2f0(r1)
    psq_l f29, 0x2e8(r1), 0, 0
    lfd f29, 0x2e0(r1)
    psq_l f28, 0x2d8(r1), 0, 0
    lfd f28, 0x2d0(r1)
    lwz r31, 0x2cc(r1)
    lwz r30, 0x2c8(r1)
    lwz r29, 0x2c4(r1)
    lwz r28, 0x2c0(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}

asm void fn_802FFFF8(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    stfd f26, 0x90(r1)
    psq_st f26, 0x98(r1), 0, 0
    stfd f25, 0x80(r1)
    psq_st f25, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r3
    stw r28, 0x70(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802FFFF8_00000D84
    lwz r0, 0x560(r3)
    cmpwi r0, 0x16
    beq lbl_fn_802FFFF8_00001318
lbl_fn_802FFFF8_00000D84:
    bl fn_80121F00
    bl fn_8013C504
    bl fn_8000D9E8
    bl fn_802A36B0
    lfs f28, lbl_80884AB0
    addic. r0, r29, 0x150c
    mr r31, r3
    fmr f27, f28
    fmr f31, f28
    fmr f30, f28
    fmr f26, f28
    fmr f25, f28
    beq lbl_fn_802FFFF8_00000EB0
    lwz r3, 0x14ec(r29)
    cmpwi r3, 0x0
    beq lbl_fn_802FFFF8_00000EB0
    lwz r30, 0x1518(r29)
    cmpwi r30, 0x0
    beq lbl_fn_802FFFF8_00000E18
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x5c
    addi r5, r30, 0x4
    bl fn_80013338
    lfs f0, lbl_80884A20
    addi r3, r1, 0x5c
    stfs f0, 0x60(r1)
    bl fn_8000D3A4
    lwz r5, 0x1518(r29)
    fmr f28, f1
    addi r3, r1, 0x50
    addi r4, r29, 0x528
    addi r5, r5, 0x4
    bl fn_80013338
    addi r3, r1, 0x50
    bl fn_801C3910
    fmr f27, f1
lbl_fn_802FFFF8_00000E18:
    lwz r3, 0x14ec(r29)
    cmpwi r3, 0x0
    beq lbl_fn_802FFFF8_00000E64
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x44
    addi r5, r29, 0x528
    bl fn_80013338
    addi r3, r1, 0x44
    bl fn_801C3910
    fmr f31, f1
    addi r3, r1, 0x2c
    addi r4, r1, 0x44
    bl fn_80011034
    lfs f1, 0x30(r1)
    lfs f0, 0x538(r29)
    fsubs f1, f1, f0
    bl fn_800133B0
    fmr f30, f1
lbl_fn_802FFFF8_00000E64:
    cmpwi r31, 0x0
    beq lbl_fn_802FFFF8_00000EB0
    mr r3, r31
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x38
    addi r5, r29, 0x528
    bl fn_80013338
    addi r3, r1, 0x38
    bl fn_801C3910
    fmr f26, f1
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    bl fn_80011034
    lfs f1, 0x24(r1)
    lfs f0, 0x538(r29)
    fsubs f1, f1, f0
    bl fn_800133B0
    fmr f25, f1
lbl_fn_802FFFF8_00000EB0:
    lwz r0, 0x14f8(r29)
    cmpwi r0, 0x0
    bne lbl_fn_802FFFF8_00000ED8
    lwz r3, 0x1520(r29)
    lwz r0, 0x169c(r29)
    cmpw r3, r0
    ble lbl_fn_802FFFF8_00000F08
    li r0, 0x1
    stw r0, 0x14f8(r29)
    b lbl_fn_802FFFF8_00001318
lbl_fn_802FFFF8_00000ED8:
    lfs f0, lbl_80884A34
    fcmpo cr0, f27, f0
    bge lbl_fn_802FFFF8_00000EF0
    li r0, 0x2
    stw r0, 0x14f8(r29)
    b lbl_fn_802FFFF8_00000F08
lbl_fn_802FFFF8_00000EF0:
    lwz r3, 0x15f0(r29)
    lwz r0, 0x16d4(r29)
    cmpw r3, r0
    ble lbl_fn_802FFFF8_00000F08
    li r0, 0x1
    stw r0, 0x14f8(r29)
lbl_fn_802FFFF8_00000F08:
    lbz r0, 0x1668(r29)
    cmpwi r0, 0x0
    beq lbl_fn_802FFFF8_00000F1C
    li r30, 0x0
    b lbl_fn_802FFFF8_00001064
lbl_fn_802FFFF8_00000F1C:
    lwz r3, 0x14f8(r29)
    cmpwi r3, 0x0
    bne lbl_fn_802FFFF8_00000F44
    lfs f0, lbl_80884A48
    fcmpo cr0, f27, f0
    ble lbl_fn_802FFFF8_00000F3C
    li r30, 0x2
    b lbl_fn_802FFFF8_00001064
lbl_fn_802FFFF8_00000F3C:
    li r30, 0x3
    b lbl_fn_802FFFF8_00001064
lbl_fn_802FFFF8_00000F44:
    cmpwi r3, 0x1
    bne lbl_fn_802FFFF8_00001058
    lwz r3, 0x14ec(r29)
    li r30, 0x0
    bl fn_8013C38C
    lwz r4, 0x1510(r29)
    mr r5, r3
    addi r3, r1, 0x14
    addi r4, r4, 0x4
    bl fn_80013338
    addi r3, r1, 0x14
    bl fn_8000D3A4
    fmr f29, f1
    lwz r3, 0x14ec(r29)
    bl fn_8013C38C
    lwz r4, 0x1514(r29)
    mr r5, r3
    addi r3, r1, 0x8
    addi r4, r4, 0x4
    bl fn_80013338
    addi r3, r1, 0x8
    bl fn_8000D3A4
    fcmpo cr0, f29, f1
    bge lbl_fn_802FFFF8_00000FF4
    lwz r3, 0x1518(r29)
    lwz r4, 0x1510(r29)
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_802FFFF8_00000FE0
    lfs f0, lbl_80884AB4
    fcmpo cr0, f27, f0
    bge lbl_fn_802FFFF8_00000FE0
    lwz r3, 0x151c(r29)
    li r30, 0x1
    stw r4, 0x1518(r29)
    addi r0, r3, 0x1
    stw r0, 0x151c(r29)
    b lbl_fn_802FFFF8_00001040
lbl_fn_802FFFF8_00000FE0:
    lwz r0, 0x1510(r29)
    li r3, 0x0
    stw r3, 0x151c(r29)
    stw r0, 0x1518(r29)
    b lbl_fn_802FFFF8_00001040
lbl_fn_802FFFF8_00000FF4:
    lwz r3, 0x1518(r29)
    lwz r4, 0x1514(r29)
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_802FFFF8_00001030
    lfs f0, lbl_80884AB4
    fcmpo cr0, f27, f0
    bge lbl_fn_802FFFF8_00001030
    lwz r3, 0x151c(r29)
    li r30, 0x1
    stw r4, 0x1518(r29)
    addi r0, r3, 0x1
    stw r0, 0x151c(r29)
    b lbl_fn_802FFFF8_00001040
lbl_fn_802FFFF8_00001030:
    lwz r0, 0x1514(r29)
    li r3, 0x0
    stw r3, 0x151c(r29)
    stw r0, 0x1518(r29)
lbl_fn_802FFFF8_00001040:
    cmpwi r30, 0x0
    beq lbl_fn_802FFFF8_00001050
    li r30, 0x3
    b lbl_fn_802FFFF8_00001064
lbl_fn_802FFFF8_00001050:
    li r30, 0x2
    b lbl_fn_802FFFF8_00001064
lbl_fn_802FFFF8_00001058:
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r30, r0, 5
lbl_fn_802FFFF8_00001064:
    lwz r0, 0x14f8(r29)
    li r28, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_802FFFF8_000010D0
    lwz r3, 0x14f4(r29)
    lwz r0, 0x1698(r29)
    cmpw r3, r0
    ble lbl_fn_802FFFF8_00001238
    lfs f0, lbl_80884A38
    fcmpo cr0, f27, f0
    bge lbl_fn_802FFFF8_00001238
    li r3, 0x64a
    bl fn_80219E6C
    lfs f1, 0x58(r3)
    lfs f0, lbl_80884A98
    fmuls f0, f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_802FFFF8_000010B4
    li r28, 0x1
    b lbl_fn_802FFFF8_00001238
lbl_fn_802FFFF8_000010B4:
    fmr f1, f30
    bl fn_80013404
    lfs f0, lbl_80884A20
    fcmpu cr0, f1, f0
    beq lbl_fn_802FFFF8_00001238
    li r28, 0x3
    b lbl_fn_802FFFF8_00001238
lbl_fn_802FFFF8_000010D0:
    mr r3, r29
    bl fn_80304B40
    cmpwi r3, 0x0
    beq lbl_fn_802FFFF8_000011BC
    lwz r0, 0x14ec(r29)
    cmplw r0, r31
    bne lbl_fn_802FFFF8_0000111C
    lfs f0, lbl_80884A30
    fcmpo cr0, f26, f0
    bge lbl_fn_802FFFF8_00001238
    lfs f1, lbl_80884AB8
    bl fn_801125F8
    fmr f29, f1
    fmr f1, f25
    bl fn_80013404
    fcmpo cr0, f1, f29
    bge lbl_fn_802FFFF8_00001238
    li r28, 0x2
    b lbl_fn_802FFFF8_00001238
lbl_fn_802FFFF8_0000111C:
    lfs f0, lbl_80884ABC
    fcmpo cr0, f26, f0
    bge lbl_fn_802FFFF8_0000114C
    lfs f1, lbl_80884AB8
    bl fn_801125F8
    fmr f29, f1
    fmr f1, f25
    bl fn_80013404
    fcmpo cr0, f1, f29
    bge lbl_fn_802FFFF8_0000114C
    li r28, 0x2
    b lbl_fn_802FFFF8_00001238
lbl_fn_802FFFF8_0000114C:
    lfs f0, 0x1694(r29)
    fcmpo cr0, f28, f0
    bge lbl_fn_802FFFF8_00001198
    li r3, 0x64a
    bl fn_80219E6C
    lfs f1, 0x58(r3)
    lfs f0, lbl_80884A98
    fmuls f0, f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_802FFFF8_00001238
    li r3, 0x64a
    bl fn_80219E6C
    fmr f1, f30
    lfs f30, 0x50(r3)
    bl fn_80013404
    fcmpo cr0, f1, f30
    bge lbl_fn_802FFFF8_00001238
    li r28, 0x1
    b lbl_fn_802FFFF8_00001238
lbl_fn_802FFFF8_00001198:
    lfs f1, lbl_80884A28
    bl fn_801125F8
    fmr f31, f1
    fmr f1, f30
    bl fn_80013404
    fcmpo cr0, f1, f31
    bge lbl_fn_802FFFF8_00001238
    li r28, 0x3
    b lbl_fn_802FFFF8_00001238
lbl_fn_802FFFF8_000011BC:
    lwz r3, 0x14f4(r29)
    lwz r0, 0x1698(r29)
    cmpw r3, r0
    ble lbl_fn_802FFFF8_00001238
    lfs f0, 0x1694(r29)
    fcmpo cr0, f28, f0
    bge lbl_fn_802FFFF8_00001218
    li r3, 0x64a
    bl fn_80219E6C
    lfs f1, 0x58(r3)
    lfs f0, lbl_80884A98
    fmuls f0, f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_802FFFF8_00001238
    li r3, 0x64a
    bl fn_80219E6C
    fmr f1, f30
    lfs f30, 0x50(r3)
    bl fn_80013404
    fcmpo cr0, f1, f30
    bge lbl_fn_802FFFF8_00001238
    li r28, 0x1
    b lbl_fn_802FFFF8_00001238
lbl_fn_802FFFF8_00001218:
    lfs f1, lbl_80884A28
    bl fn_801125F8
    fmr f31, f1
    fmr f1, f30
    bl fn_80013404
    fcmpo cr0, f1, f31
    bge lbl_fn_802FFFF8_00001238
    li r28, 0x3
lbl_fn_802FFFF8_00001238:
    cmpwi r28, 0x0
    bne lbl_fn_802FFFF8_000012CC
    lwz r3, 0x55c(r29)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802FFFF8_000012CC
    cmpwi r30, 0x0
    bne lbl_fn_802FFFF8_00001270
    addi r3, r29, 0x1030
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80127D8C
    b lbl_fn_802FFFF8_000012CC
lbl_fn_802FFFF8_00001270:
    cmpwi r30, 0x1
    bne lbl_fn_802FFFF8_00001290
    lwz r4, 0x14ec(r29)
    mr r3, r29
    lfs f1, lbl_80884A78
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_802FFFF8_000012CC
lbl_fn_802FFFF8_00001290:
    cmpwi r30, 0x2
    bne lbl_fn_802FFFF8_000012B0
    lwz r4, 0x1518(r29)
    mr r3, r29
    li r5, 0x0
    lwz r4, 0x0(r4)
    bl fn_8017039C
    b lbl_fn_802FFFF8_000012CC
lbl_fn_802FFFF8_000012B0:
    cmpwi r30, 0x3
    bne lbl_fn_802FFFF8_000012CC
    lwz r4, 0x1518(r29)
    mr r3, r29
    li r5, 0x0
    lwz r4, 0x0(r4)
    bl fn_8017039C
lbl_fn_802FFFF8_000012CC:
    cmpwi r28, 0x0
    ble lbl_fn_802FFFF8_000012E0
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
lbl_fn_802FFFF8_000012E0:
    cmpwi r28, 0x1
    bne lbl_fn_802FFFF8_000012F4
    mr r3, r29
    bl fn_80300654
    b lbl_fn_802FFFF8_00001318
lbl_fn_802FFFF8_000012F4:
    cmpwi r28, 0x2
    bne lbl_fn_802FFFF8_00001308
    mr r3, r29
    bl fn_803009F4
    b lbl_fn_802FFFF8_00001318
lbl_fn_802FFFF8_00001308:
    cmpwi r28, 0x3
    bne lbl_fn_802FFFF8_00001318
    mr r3, r29
    bl fn_8030073C
lbl_fn_802FFFF8_00001318:
    lwz r0, 0xf4(r1)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    lfd f27, 0xa0(r1)
    psq_l f26, 0x98(r1), 0, 0
    lfd f26, 0x90(r1)
    psq_l f25, 0x88(r1), 0, 0
    lfd f25, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
