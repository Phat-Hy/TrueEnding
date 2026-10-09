#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80063D3C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803010BC(void);
extern void fn_80370AE4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9990(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807489F8[];
extern u8 lbl_80748A00[];
extern u8 lbl_80748A14[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884A20;
extern u32 lbl_80884A28;
extern u32 lbl_80884A34;
extern u32 lbl_80884A38;
extern u32 lbl_80884A44;
extern u32 lbl_80884A5C;
extern u32 lbl_80884A60;
extern u32 lbl_80884A64;
extern u32 lbl_80884A68;
extern u32 lbl_80884A6C;
extern u32 lbl_80884A78;
extern u32 lbl_80884A7C;
extern u32 lbl_80884A88;
extern u32 lbl_80884A8C;
extern u32 lbl_80884A90;
extern u32 lbl_80884A94;
extern u32 lbl_80884A9C;
extern u32 lbl_80884ABC;
extern u32 lbl_80884AC0;
extern u32 lbl_80884AC4;
extern u32 lbl_80884AE0;
extern u32 lbl_80884AE4;
extern u32 lbl_80884AE8;
extern u32 lbl_80884AEC;
extern u32 lbl_80884AF0;
extern u32 lbl_80884AF4;
extern u32 lbl_80884AF8;
extern u32 lbl_80884AFC;
extern u32 lbl_80884B00;

/* Function declarations */
void fn_803026F0(void);
void fn_80302B84(void);
void fn_80302F94(void);

asm void fn_803026F0(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    addi r11, r1, 0x1e0
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x14f0(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_803026F0_000000E4
    lwz r4, 0x14f4(r3)
    lwz r0, 0x16a0(r3)
    cmpw r4, r0
    ble lbl_fn_803026F0_00000080
    lfs f0, lbl_80884A5C
    li r0, 0x1
    li r4, 0x0
    stw r4, 0x14f4(r3)
    lfs f1, lbl_80884A20
    li r4, 0x0
    stw r0, 0x14f0(r3)
    li r5, 0x147
    lfs f2, lbl_80884A60
    li r6, 0x0
    stw r0, 0x3fc(r3)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    stfs f0, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
lbl_fn_803026F0_00000080:
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x145
    bne lbl_fn_803026F0_00000474
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803026F0_00000474
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x146
    lfs f2, lbl_80884A60
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_803026F0_00000474
lbl_fn_803026F0_000000E4:
    cmpwi r0, 0x1
    bne lbl_fn_803026F0_00000474
    lfs f8, lbl_80884A20
    addi r27, r1, 0x180
    lfs f0, lbl_80884A5C
    lfs f7, lbl_80884A94
    stfs f8, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f8, 0x1ac(r1)
    stfs f8, 0x1a4(r1)
    stfs f8, 0x1a0(r1)
    stfs f8, 0x19c(r1)
    stfs f8, 0x198(r1)
    stfs f8, 0x190(r1)
    stfs f8, 0x18c(r1)
    stfs f8, 0x188(r1)
    stfs f8, 0x184(r1)
    stfs f0, 0x1a8(r1)
    stfs f0, 0x194(r1)
    stfs f0, 0x180(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f8, f1
    beq lbl_fn_803026F0_00000194
    addi r3, r1, 0x90
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x90
    addi r5, r1, 0x60
    bl fn_805F89F0
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_803026F0_00000194:
    lfs f0, lbl_80884A20
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_803026F0_000001F4
    addi r3, r1, 0xf0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0xf0
    addi r5, r1, 0xc0
    bl fn_805F89F0
    addi r3, r1, 0xc0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_803026F0_000001F4:
    lfs f0, lbl_80884A20
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_803026F0_00000254
    addi r3, r1, 0x150
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x150
    addi r5, r1, 0x120
    bl fn_805F89F0
    addi r3, r1, 0x120
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_803026F0_00000254:
    addi r4, r1, 0x50
    addi r3, r1, 0x180
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x14f4(r31)
    lis r28, 0x4330
    lis r27, lbl_80748A00@ha
    stw r28, 0x1b0(r1)
    xoris r0, r0, 0x8000
    lfd f8, lbl_80748A00@l(r27)
    stw r0, 0x1b4(r1)
    lfs f0, lbl_80884A28
    lfd f7, 0x1b0(r1)
    fsubs f7, f7, f8
    fcmpo cr0, f7, f0
    ble lbl_fn_803026F0_000002FC
    li r29, 0x0
    stw r29, 0x14f4(r31)
    lwz r5, 0x15b4(r31)
    mr r4, r31
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x3e8
    stw r0, 0x15b4(r31)
    stw r29, 0x14f0(r31)
    stw r29, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    stw r29, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x15f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x15f0(r31)
    b lbl_fn_803026F0_00000474
lbl_fn_803026F0_000002FC:
    stw r0, 0x1b4(r1)
    lwz r26, lbl_8087F048
    stw r28, 0x1b0(r1)
    lfs f0, 0x58(r1)
    mr r3, r26
    lfd f7, 0x1b0(r1)
    lfs f10, 0x54(r1)
    fsubs f11, f7, f8
    lfs f9, 0x50(r1)
    lfs f8, 0x530(r31)
    lfs f7, 0x52c(r31)
    fmuls f12, f0, f11
    lfs f0, 0x528(r31)
    fmuls f10, f10, f11
    fmuls f9, f9, f11
    stfs f12, 0x40(r1)
    fadds f8, f8, f12
    fadds f7, f7, f10
    stfs f9, 0x38(r1)
    fadds f0, f0, f9
    stfs f10, 0x3c(r1)
    stfs f0, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f8, 0x4c(r1)
    bl fn_800F8548
    mr r29, r3
    li r3, 0x64c
    bl fn_80219E6C
    li r30, -0x1
    stw r30, 0x8(r1)
    lfs f1, lbl_80884A20
    mr r5, r3
    stw r30, 0xc(r1)
    mr r3, r26
    lfs f2, lbl_80884A5C
    mr r4, r31
    mr r6, r29
    addi r7, r1, 0x44
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, lbl_8087F3C0
    mr r4, r31
    lwz r5, 0x15b4(r31)
    li r6, 0x0
    bl fn_80239DAC
    lwz r4, 0x15b4(r31)
    mr r3, r31
    addi r4, r4, 0x1
    stw r4, 0x15b4(r31)
    bl fn_80232B7C
    lwz r3, 0x14f4(r31)
    li r0, 0x1
    stw r28, 0x1b8(r1)
    addi r4, r31, 0x1558
    xoris r3, r3, 0x8000
    lfd f7, lbl_80748A00@l(r27)
    stw r3, 0x1bc(r1)
    addi r7, r1, 0x2c
    lfs f11, 0x58(r1)
    addi r8, r31, 0x534
    lfd f0, 0x1b8(r1)
    addi r9, r1, 0x10
    lfs f10, 0x54(r1)
    li r5, 0x0
    fsubs f12, f0, f7
    lfs f9, 0x50(r1)
    lfs f8, 0x530(r31)
    li r6, 0x0
    lfs f7, 0x52c(r31)
    li r10, -0x1
    fmuls f11, f11, f12
    lfs f0, 0x528(r31)
    fmuls f10, f10, f12
    lfs f1, lbl_80884A5C
    fmuls f9, f9, f12
    stfs f1, 0x10(r1)
    fadds f8, f8, f11
    stfs f1, 0x14(r1)
    fadds f7, f7, f10
    fadds f0, f0, f9
    stfs f8, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r30, 0x8(r1)
    stw r0, 0xc(r1)
    stfs f9, 0x20(r1)
    lwz r3, lbl_8087F3C0
    stfs f10, 0x24(r1)
    stfs f11, 0x28(r1)
    bl fn_8023A8B4
lbl_fn_803026F0_00000474:
    addi r11, r1, 0x1e0
    psq_l f31, 0x1e8(r1), 0, 0
    lfd f31, 0x1e0(r1)
    bl _restgpr_26
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_80302B84(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stw r31, 0x1ac(r1)
    mr r31, r3
    stw r30, 0x1a8(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80302B84_00000514
    li r30, 0x0
    stw r30, 0x14f0(r31)
    stw r30, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x15f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x15f0(r31)
lbl_fn_80302B84_00000514:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_80884AE0
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80302B84_00000884
    lfs f0, lbl_80884AE4
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80302B84_00000884
    lis r4, lbl_80748A14@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80748A14@l
    li r5, 0x0
    addi r4, r4, 0x17d
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80302B84_00000560
    li r3, 0x0
    b lbl_fn_80302B84_0000056C
lbl_fn_80302B84_00000560:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_80302B84_0000056C:
    lfs f9, 0x2c(r3)
    lfs f7, 0x1c(r3)
    lfs f10, 0xc(r3)
    stfs f10, 0x40(r1)
    lwz r3, lbl_8087F8A0
    stfs f7, 0x44(r1)
    stfs f9, 0x48(r1)
    lfs f0, 0x16f4(r31)
    fsubs f8, f7, f0
    stfs f8, 0x44(r1)
    lwz r3, 0x48(r3)
    lfs f7, 0x530(r3)
    lfs f0, 0x528(r3)
    fsubs f9, f9, f7
    lfs f7, 0x52c(r3)
    fsubs f10, f10, f0
    fsubs f7, f8, f7
    stfs f9, 0x3c(r1)
    fmuls f0, f9, f9
    stfs f10, 0x34(r1)
    fmadds f1, f10, f10, f0
    stfs f7, 0x38(r1)
    bl fn_8068B100
    lwz r3, lbl_8087F8A0
    frsp f31, f1
    addi r4, r1, 0x28
    lfs f0, 0x538(r31)
    lwz r5, 0x48(r3)
    lis r3, lbl_807489F8@ha
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x53c(r5)
    lfs f7, 0x2c(r1)
    stfs f2, 0x30(r1)
    fsubs f1, f7, f0
    lfd f2, lbl_807489F8@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80884A88
    fcmpo cr0, f7, f0
    ble lbl_fn_80302B84_00000618
    lfs f0, lbl_80884A8C
    fsubs f7, f7, f0
lbl_fn_80302B84_00000618:
    lfs f0, lbl_80884A90
    fcmpo cr0, f7, f0
    bge lbl_fn_80302B84_0000062C
    lfs f0, lbl_80884A8C
    fadds f7, f7, f0
lbl_fn_80302B84_0000062C:
    fabs f8, f7
    lfs f7, lbl_80884A20
    lfs f0, lbl_80884A68
    stfs f7, 0x1c(r1)
    frsp f8, f8
    stfs f7, 0x20(r1)
    fcmpo cr0, f8, f0
    stfs f7, 0x24(r1)
    ble lbl_fn_80302B84_00000658
    lfs f8, lbl_80884A94
    b lbl_fn_80302B84_0000065C
lbl_fn_80302B84_00000658:
    lfs f8, lbl_80884AE8
lbl_fn_80302B84_0000065C:
    lfs f7, lbl_80884A20
    addi r30, r1, 0x170
    lfs f1, 0x30(r1)
    lfs f0, lbl_80884A5C
    fcmpu cr0, f7, f1
    stfs f8, 0x1c(r1)
    stfs f7, 0x19c(r1)
    stfs f7, 0x194(r1)
    stfs f7, 0x190(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x180(r1)
    stfs f7, 0x17c(r1)
    stfs f7, 0x178(r1)
    stfs f7, 0x174(r1)
    stfs f0, 0x198(r1)
    stfs f0, 0x184(r1)
    stfs f0, 0x170(r1)
    beq lbl_fn_80302B84_000006F8
    addi r3, r1, 0x80
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x80
    addi r5, r1, 0x50
    bl fn_805F89F0
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80302B84_000006F8:
    lfs f0, lbl_80884A20
    lfs f1, 0x28(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80302B84_00000758
    addi r3, r1, 0xe0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xe0
    addi r5, r1, 0xb0
    bl fn_805F89F0
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80302B84_00000758:
    lfs f0, lbl_80884A20
    lfs f1, 0x2c(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80302B84_000007B8
    addi r3, r1, 0x140
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x140
    addi r5, r1, 0x110
    bl fn_805F89F0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80302B84_000007B8:
    addi r4, r1, 0x1c
    addi r3, r1, 0x170
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_80884A38
    fcmpo cr0, f31, f0
    bge lbl_fn_80302B84_00000850
    lwz r4, lbl_8087F8A0
    li r3, 0x64e
    lfs f0, 0x24(r1)
    lwz r4, 0x48(r4)
    lfs f8, 0x20(r1)
    lfs f10, 0x530(r4)
    lfs f9, 0x52c(r4)
    fadds f10, f10, f0
    lfs f7, 0x528(r4)
    lfs f0, 0x1c(r1)
    fadds f8, f9, f8
    stfs f10, 0x18(r1)
    fadds f0, f7, f0
    lwz r30, lbl_8087F048
    stfs f8, 0x14(r1)
    stfs f0, 0x10(r1)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80884A20
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r30
    lfs f2, lbl_80884A5C
    mr r4, r31
    addi r7, r1, 0x10
    addi r8, r31, 0x534
    li r6, 0x3e8
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_80302B84_00000850:
    lfs f7, 0x538(r31)
    lfs f0, lbl_80884AEC
    lwz r0, 0x1690(r31)
    fadds f0, f7, f0
    cmpwi r0, 0x0
    stfs f0, 0x538(r31)
    beq lbl_fn_80302B84_00000884
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x40
    lfs f1, lbl_80884A34
    lis r5, 0xffff
    lfs f2, lbl_80884A7C
    bl fn_80063D3C
lbl_fn_80302B84_00000884:
    lwz r0, 0x1c4(r1)
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    lwz r31, 0x1ac(r1)
    lwz r30, 0x1a8(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80302F94(void)
{
    nofralloc
    stwu r1, -0x7a0(r1)
    mflr r0
    stw r0, 0x7a4(r1)
    stfd f31, 0x790(r1)
    psq_st f31, 0x798(r1), 0, 0
    stfd f30, 0x780(r1)
    psq_st f30, 0x788(r1), 0, 0
    stfd f29, 0x770(r1)
    psq_st f29, 0x778(r1), 0, 0
    lfs f29, lbl_80884A20
    stfd f28, 0x760(r1)
    psq_st f28, 0x768(r1), 0, 0
    stfd f27, 0x750(r1)
    psq_st f27, 0x758(r1), 0, 0
    stfd f26, 0x740(r1)
    psq_st f26, 0x748(r1), 0, 0
    stfd f25, 0x730(r1)
    psq_st f25, 0x738(r1), 0, 0
    stfd f24, 0x720(r1)
    psq_st f24, 0x728(r1), 0, 0
    stfd f23, 0x710(r1)
    psq_st f23, 0x718(r1), 0, 0
    stw r31, 0x70c(r1)
    li r31, 0x1
    stw r30, 0x708(r1)
    stw r29, 0x704(r1)
    mr r29, r3
    stw r28, 0x700(r1)
    lwz r4, lbl_8087F430
    stw r3, 0x8a0(r4)
    lwz r0, 0x15c8(r3)
    lfs f30, 0x16c0(r3)
    cmpwi r0, 0x0
    lwz r0, 0x14f0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80302F94_00001974
    lfs f23, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f23, f1
    cror eq, gt, eq
    bne lbl_fn_80302F94_00000B1C
    addi r3, r29, 0x15cc
    lfs f7, lbl_80884A20
    lfs f2, 0x15d4(r29)
    addi r30, r1, 0x628
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    fcmpu cr0, f7, f2
    lfs f0, lbl_80884A5C
    stfs f2, 0x53c(r29)
    stfs f7, 0x15d8(r29)
    stfs f7, 0x15dc(r29)
    stfs f29, 0x15e0(r29)
    stfs f7, 0x654(r1)
    stfs f7, 0x64c(r1)
    stfs f7, 0x648(r1)
    stfs f7, 0x644(r1)
    stfs f7, 0x640(r1)
    stfs f7, 0x638(r1)
    stfs f7, 0x634(r1)
    stfs f7, 0x630(r1)
    stfs f7, 0x62c(r1)
    stfs f0, 0x650(r1)
    stfs f0, 0x63c(r1)
    stfs f0, 0x628(r1)
    beq lbl_fn_80302F94_00000A08
    frsp f1, f2
    addi r3, r1, 0x4a8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x4a8
    addi r5, r1, 0x478
    bl fn_805F89F0
    addi r3, r1, 0x478
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80302F94_00000A08:
    lfs f0, lbl_80884A20
    lfs f1, 0x538(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80302F94_00000A68
    addi r3, r1, 0x508
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x508
    addi r5, r1, 0x4d8
    bl fn_805F89F0
    addi r3, r1, 0x4d8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80302F94_00000A68:
    lfs f0, lbl_80884A20
    lfs f1, 0x534(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80302F94_00000AC8
    addi r3, r1, 0x568
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x568
    addi r5, r1, 0x538
    bl fn_805F89F0
    addi r3, r1, 0x538
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80302F94_00000AC8:
    addi r4, r29, 0x15d8
    addi r3, r1, 0x628
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_80884A5C
    li r30, 0x0
    li r0, 0x1
    stw r30, 0x14f0(r29)
    lfs f1, lbl_80884A20
    addi r3, r29, 0xb0
    stw r0, 0x3fc(r29)
    li r4, 0x0
    lfs f2, lbl_80884A60
    li r5, 0x14b
    stfs f0, 0x2fc(r29)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    stw r30, 0x14f4(r29)
lbl_fn_80302F94_00000B1C:
    lwz r0, 0x2dc(r29)
    lfs f31, lbl_80884A5C
    cmpwi r0, 0x14a
    bne lbl_fn_80302F94_00000C68
    lfs f7, 0x15d0(r29)
    lis r3, lbl_807489F8@ha
    lfs f0, 0x538(r29)
    lfd f2, lbl_807489F8@l(r3)
    fsubs f1, f7, f0
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80884A88
    fcmpo cr0, f31, f0
    ble lbl_fn_80302F94_00000B5C
    lfs f0, lbl_80884A8C
    fsubs f31, f31, f0
lbl_fn_80302F94_00000B5C:
    lfs f0, lbl_80884A90
    fcmpo cr0, f31, f0
    bge lbl_fn_80302F94_00000B70
    lfs f0, lbl_80884A8C
    fadds f31, f31, f0
lbl_fn_80302F94_00000B70:
    lfs f0, lbl_80884A20
    fcmpo cr0, f31, f0
    ble lbl_fn_80302F94_00000B9C
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fdivs f7, f31, f1
    lfs f0, 0x538(r29)
    fsubs f0, f0, f7
    stfs f0, 0x538(r29)
    b lbl_fn_80302F94_00000BB8
lbl_fn_80302F94_00000B9C:
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fdivs f7, f31, f1
    lfs f0, 0x538(r29)
    fadds f0, f0, f7
    stfs f0, 0x538(r29)
lbl_fn_80302F94_00000BB8:
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fdivs f7, f31, f1
    lfs f0, 0x538(r29)
    fcmpo cr0, f0, f7
    bge lbl_fn_80302F94_00000C00
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fdivs f8, f31, f1
    lfs f7, lbl_80884A78
    lfs f0, 0x538(r29)
    fmuls f7, f7, f8
    fcmpo cr0, f0, f7
    ble lbl_fn_80302F94_00000C00
    lfs f0, 0x15d0(r29)
    stfs f0, 0x538(r29)
lbl_fn_80302F94_00000C00:
    lfs f23, 0x2e4(r29)
    lfs f0, lbl_80884AF0
    fcmpo cr0, f23, f0
    cror eq, gt, eq
    bne lbl_fn_80302F94_00000C34
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80884AF4
    fsubs f7, f1, f0
    fsubs f0, f23, f0
    fdivs f31, f0, f7
    b lbl_fn_80302F94_00000C38
lbl_fn_80302F94_00000C34:
    lfs f31, lbl_80884A20
lbl_fn_80302F94_00000C38:
    lfs f0, lbl_80884A34
    fcmpo cr0, f29, f0
    bge lbl_fn_80302F94_00000C60
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80884A34
    fdivs f0, f0, f1
    fadds f29, f29, f0
    b lbl_fn_80302F94_00000C6C
lbl_fn_80302F94_00000C60:
    fmr f29, f0
    b lbl_fn_80302F94_00000C6C
lbl_fn_80302F94_00000C68:
    lfs f29, lbl_80884A34
lbl_fn_80302F94_00000C6C:
    lfs f1, lbl_80884A20
    addi r30, r1, 0x5f8
    lfs f7, 0x538(r29)
    stfs f1, 0x15d8(r29)
    fcmpu cr0, f1, f1
    lfs f0, lbl_80884A5C
    stfs f1, 0x15dc(r29)
    stfs f29, 0x15e0(r29)
    stfs f1, 0x1b8(r1)
    stfs f7, 0x1bc(r1)
    stfs f1, 0x1c0(r1)
    stfs f1, 0x624(r1)
    stfs f1, 0x61c(r1)
    stfs f1, 0x618(r1)
    stfs f1, 0x614(r1)
    stfs f1, 0x610(r1)
    stfs f1, 0x608(r1)
    stfs f1, 0x604(r1)
    stfs f1, 0x600(r1)
    stfs f1, 0x5fc(r1)
    stfs f0, 0x620(r1)
    stfs f0, 0x60c(r1)
    stfs f0, 0x5f8(r1)
    beq lbl_fn_80302F94_00000D1C
    addi r3, r1, 0x388
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x388
    addi r5, r1, 0x358
    bl fn_805F89F0
    addi r3, r1, 0x358
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80302F94_00000D1C:
    lfs f0, lbl_80884A20
    lfs f1, 0x1bc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80302F94_00000D7C
    addi r3, r1, 0x3e8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x3e8
    addi r5, r1, 0x3b8
    bl fn_805F89F0
    addi r3, r1, 0x3b8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80302F94_00000D7C:
    lfs f0, lbl_80884A20
    lfs f1, 0x1b8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80302F94_00000DDC
    addi r3, r1, 0x448
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x448
    addi r5, r1, 0x418
    bl fn_805F89F0
    addi r3, r1, 0x418
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80302F94_00000DDC:
    addi r4, r29, 0x15d8
    addi r3, r1, 0x5f8
    mr r5, r4
    bl fn_805F93C0
    li r30, 0x0
    stw r30, 0x6dc(r1)
    addi r28, r1, 0x1a8
    lfs f0, lbl_80884A5C
    stw r30, 0x6e0(r1)
    mr r5, r28
    fsubs f8, f0, f31
    lfs f7, lbl_80884AC4
    stw r30, 0x6e4(r1)
    addi r4, r1, 0x6a8
    lwz r3, lbl_8087EE98
    addi r6, r29, 0x15d8
    stw r30, 0x6e8(r1)
    addi r8, r29, 0x5b8
    lis r7, 0x8000
    li r9, 0x0
    lfs f2, 0x530(r29)
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x1ac(r1)
    stfs f2, 0x1b0(r1)
    fmadds f0, f7, f8, f0
    stfs f0, 0x1ac(r1)
    lfs f1, 0x16e0(r29)
    stfs f1, 0x1b4(r1)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80302F94_00001628
    lwz r0, 0x6e4(r1)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80302F94_00001628
    lis r4, lbl_80748A14@ha
    lfs f1, lbl_80884A5C
    addi r4, r4, lbl_80748A14@l
    addi r3, r1, 0x10
    addi r4, r4, 0x187
    addi r5, r1, 0x6b8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    addi r4, r29, 0x15d8
    lfs f2, 0x15e0(r29)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x124
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x12c(r1)
    bl fn_805F98D0
    lfs f8, 0x12c(r1)
    li r0, 0x0
    lfs f9, lbl_80884ABC
    mr r5, r28
    lfs f7, 0x128(r1)
    addi r4, r1, 0x658
    fmuls f10, f8, f9
    lfs f8, 0x1b0(r1)
    fmuls f11, f7, f9
    lfs f0, 0x124(r1)
    lfs f7, 0x1ac(r1)
    addi r6, r1, 0x190
    fmuls f9, f0, f9
    lfs f0, 0x1a8(r1)
    fadds f8, f8, f10
    lwz r3, lbl_8087EE98
    fadds f7, f7, f11
    stfs f9, 0x130(r1)
    fadds f0, f0, f9
    stfs f11, 0x134(r1)
    lis r7, 0x8000
    li r8, 0x0
    stfs f10, 0x138(r1)
    li r9, 0x0
    stfs f0, 0x190(r1)
    stfs f7, 0x194(r1)
    stfs f8, 0x198(r1)
    stw r0, 0x68c(r1)
    stw r0, 0x690(r1)
    stw r0, 0x694(r1)
    stw r0, 0x698(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80302F94_00000FCC
    addi r4, r29, 0x15d8
    lfs f2, 0x15e0(r29)
    psq_l f1, 0x0(r4), 0, 0
    addi r28, r1, 0x19c
    psq_st f1, 0x0(r28), 0, 0
    addi r3, r1, 0x598
    lfs f0, lbl_80884A20
    addi r4, r1, 0x680
    stfs f2, 0x1a4(r1)
    lfs f1, lbl_80884A88
    stfs f0, 0x1a0(r1)
    bl fn_805F9050
    mr r4, r28
    mr r5, r28
    addi r3, r1, 0x598
    bl fn_805F93C0
    lfs f0, 0x1a4(r1)
    addi r5, r1, 0x118
    lfs f7, 0x1a0(r1)
    mr r3, r28
    fneg f8, f0
    lfs f0, 0x19c(r1)
    fneg f7, f7
    mr r4, r28
    fneg f0, f0
    stfs f8, 0x120(r1)
    stfs f0, 0x118(r1)
    frsp f2, f8
    stfs f7, 0x11c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1a4(r1)
    bl fn_805F98D0
    b lbl_fn_80302F94_00001044
lbl_fn_80302F94_00000FCC:
    lfs f9, 0x1ac(r1)
    addi r3, r1, 0x19c
    lfs f7, 0x15dc(r29)
    addi r5, r1, 0x10c
    lfs f8, 0x1a8(r1)
    mr r4, r3
    fadds f10, f9, f7
    lfs f0, 0x15d8(r29)
    lfs f7, 0x6bc(r1)
    fadds f11, f8, f0
    lfs f0, 0x6b8(r1)
    fsubs f12, f7, f10
    lfs f9, 0x1b0(r1)
    lfs f8, 0x15e0(r29)
    fsubs f0, f0, f11
    stfs f12, 0x110(r1)
    fadds f8, f9, f8
    lfs f7, 0x6c0(r1)
    stfs f0, 0x10c(r1)
    lfs f0, lbl_80884A20
    fsubs f2, f7, f8
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f11, 0x184(r1)
    stfs f10, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f2, 0x114(r1)
    stfs f2, 0x1a4(r1)
    stfs f0, 0x1a0(r1)
    bl fn_805F98D0
lbl_fn_80302F94_00001044:
    addi r3, r1, 0x6b8
    lfs f2, 0x6c0(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x178
    lfs f0, lbl_80884A5C
    mr r4, r3
    psq_st f1, 0x528(r29), 0, 0
    li r30, 0x1
    fsubs f10, f0, f31
    lfs f9, lbl_80884AC4
    lfs f0, 0x52c(r29)
    lfs f8, 0x1610(r29)
    fnmsubs f9, f9, f10, f0
    lfs f7, 0x1608(r29)
    lfs f0, 0x528(r29)
    fsubs f8, f8, f2
    stfs f2, 0x530(r29)
    fsubs f7, f7, f0
    stfs f9, 0x52c(r29)
    lfs f0, lbl_80884A20
    stfs f7, 0x178(r1)
    stfs f8, 0x180(r1)
    stfs f0, 0x17c(r1)
    bl fn_805F98D0
    lwz r0, 0x15e4(r29)
    cmpwi r0, 0x5
    blt lbl_fn_80302F94_00001260
    addi r3, r1, 0x178
    addi r4, r1, 0x19c
    bl fn_805F9990
    lfs f0, lbl_80884AF8
    fcmpo cr0, f1, f0
    ble lbl_fn_80302F94_000010E4
    addi r4, r1, 0x178
    lfs f2, 0x180(r1)
    addi r3, r1, 0x19c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1a4(r1)
    b lbl_fn_80302F94_00001260
lbl_fn_80302F94_000010E4:
    lfs f0, lbl_80884A20
    fcmpo cr0, f1, f0
    bge lbl_fn_80302F94_000011BC
    lwz r3, 0x15e4(r29)
    lis r0, 0x4330
    lis r4, lbl_80748A00@ha
    lfs f0, 0x180(r1)
    subi r3, r3, 0x5
    lfd f9, lbl_80748A00@l(r4)
    xoris r3, r3, 0x8000
    stw r3, 0x6fc(r1)
    fneg f12, f0
    lfs f7, 0x17c(r1)
    stw r0, 0x6f8(r1)
    addi r4, r1, 0x100
    fneg f13, f7
    lfs f0, 0x178(r1)
    lfd f8, 0x6f8(r1)
    fneg f28, f0
    lfs f10, lbl_80884A94
    frsp f0, f12
    fsubs f11, f8, f9
    lfs f9, 0x1a4(r1)
    frsp f7, f13
    fsubs f27, f0, f9
    lfs f8, 0x1a0(r1)
    fdivs f10, f11, f10
    stfs f12, 0xfc(r1)
    addi r3, r1, 0x19c
    lfs f0, 0x19c(r1)
    stfs f28, 0xf4(r1)
    stfs f13, 0xf8(r1)
    fsubs f11, f7, f8
    stfs f27, 0xb4(r1)
    fmuls f12, f27, f10
    stfs f11, 0xb0(r1)
    frsp f7, f28
    fmuls f11, f11, f10
    fadds f2, f12, f9
    stfs f12, 0xa8(r1)
    fsubs f9, f7, f0
    fadds f7, f11, f8
    stfs f11, 0xa4(r1)
    fmuls f8, f9, f10
    stfs f7, 0x104(r1)
    stfs f9, 0xac(r1)
    fadds f0, f8, f0
    stfs f8, 0xa0(r1)
    stfs f0, 0x100(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x108(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1a4(r1)
    b lbl_fn_80302F94_00001260
lbl_fn_80302F94_000011BC:
    lwz r4, 0x15e4(r29)
    lis r0, 0x4330
    stw r0, 0x6f8(r1)
    lis r3, lbl_80748A00@ha
    subi r0, r4, 0x5
    lfd f9, lbl_80748A00@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x6fc(r1)
    lfs f7, lbl_80884A94
    addi r4, r1, 0xe8
    lfd f8, 0x6f8(r1)
    addi r3, r1, 0x19c
    lfs f0, 0x180(r1)
    fsubs f11, f8, f9
    lfs f10, 0x1a4(r1)
    lfs f9, 0x17c(r1)
    fsubs f12, f0, f10
    lfs f8, 0x1a0(r1)
    fdivs f11, f11, f7
    lfs f7, 0x178(r1)
    lfs f0, 0x19c(r1)
    stfs f12, 0x9c(r1)
    fmuls f13, f12, f11
    fsubs f9, f9, f8
    fsubs f7, f7, f0
    stfs f13, 0x90(r1)
    fadds f2, f13, f10
    fmuls f12, f9, f11
    stfs f9, 0x98(r1)
    fmuls f9, f7, f11
    stfs f7, 0x94(r1)
    fadds f7, f12, f8
    fadds f0, f9, f0
    stfs f9, 0x88(r1)
    stfs f7, 0xec(r1)
    stfs f0, 0xe8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f12, 0x8c(r1)
    stfs f2, 0xf0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1a4(r1)
lbl_fn_80302F94_00001260:
    lfs f2, 0x1a4(r1)
    addi r3, r1, 0x19c
    lfs f0, lbl_80884A64
    addi r28, r1, 0xdc
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f7, f7
    stfs f2, 0xe4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80302F94_000012B0
    lfs f7, 0xdc(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f7, f0
    ble lbl_fn_80302F94_000012A4
    lfs f0, lbl_80884A68
    b lbl_fn_80302F94_000012A8
lbl_fn_80302F94_000012A4:
    lfs f0, lbl_80884A6C
lbl_fn_80302F94_000012A8:
    stfs f0, 0x80(r1)
    b lbl_fn_80302F94_000012C4
lbl_fn_80302F94_000012B0:
    frsp f2, f2
    lfs f1, 0xdc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x80(r1)
lbl_fn_80302F94_000012C4:
    lfs f0, 0x80(r1)
    addi r3, r1, 0x2e8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80884A20
    addi r4, r1, 0x70
    lfs f23, 0x2f0(r1)
    mr r5, r4
    lfs f24, 0x2ec(r1)
    addi r3, r1, 0x318
    lfs f25, 0x2e8(r1)
    lfs f26, 0x300(r1)
    lfs f28, 0x2fc(r1)
    lfs f27, 0x2f8(r1)
    lfs f13, 0x310(r1)
    lfs f12, 0x30c(r1)
    lfs f11, 0x308(r1)
    lfs f10, 0x314(r1)
    lfs f9, 0x304(r1)
    lfs f8, 0x2f4(r1)
    lfs f0, lbl_80884A5C
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xe4(r1)
    stfs f7, 0x348(r1)
    stfs f7, 0x34c(r1)
    stfs f7, 0x350(r1)
    stfs f0, 0x354(r1)
    stfs f25, 0x40(r1)
    stfs f24, 0x44(r1)
    stfs f23, 0x48(r1)
    stfs f25, 0x318(r1)
    stfs f24, 0x31c(r1)
    stfs f23, 0x320(r1)
    stfs f27, 0x4c(r1)
    stfs f28, 0x50(r1)
    stfs f26, 0x54(r1)
    stfs f27, 0x328(r1)
    stfs f28, 0x32c(r1)
    stfs f26, 0x330(r1)
    stfs f11, 0x58(r1)
    stfs f12, 0x5c(r1)
    stfs f13, 0x60(r1)
    stfs f11, 0x338(r1)
    stfs f12, 0x33c(r1)
    stfs f13, 0x340(r1)
    stfs f8, 0x64(r1)
    stfs f9, 0x68(r1)
    stfs f10, 0x6c(r1)
    stfs f8, 0x324(r1)
    stfs f9, 0x334(r1)
    stfs f10, 0x344(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F9750
    lfs f2, 0x78(r1)
    lfs f0, lbl_80884A64
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80302F94_000013E0
    lfs f7, 0x74(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f7, f0
    ble lbl_fn_80302F94_000013D0
    lfs f0, lbl_80884A68
    b lbl_fn_80302F94_000013D4
lbl_fn_80302F94_000013D0:
    lfs f0, lbl_80884A6C
lbl_fn_80302F94_000013D4:
    fneg f0, f0
    stfs f0, 0x7c(r1)
    b lbl_fn_80302F94_000013F4
lbl_fn_80302F94_000013E0:
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x7c(r1)
lbl_fn_80302F94_000013F4:
    addi r3, r1, 0x7c
    lfs f8, lbl_80884A20
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0x15cc
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f8
    fcmpu cr0, f8, f8
    lfs f0, lbl_80884A5C
    lfs f7, 0xe0(r1)
    addi r28, r1, 0x5c8
    stfs f7, 0x15d0(r29)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    lfs f7, 0x538(r29)
    stfs f2, 0xe4(r1)
    lfs f2, 0x15d4(r29)
    stfs f2, 0x53c(r29)
    stfs f7, 0x15d0(r29)
    stfs f8, 0x84(r1)
    stfs f8, 0x16c(r1)
    stfs f7, 0x170(r1)
    stfs f8, 0x174(r1)
    stfs f8, 0x5f4(r1)
    stfs f8, 0x5ec(r1)
    stfs f8, 0x5e8(r1)
    stfs f8, 0x5e4(r1)
    stfs f8, 0x5e0(r1)
    stfs f8, 0x5d8(r1)
    stfs f8, 0x5d4(r1)
    stfs f8, 0x5d0(r1)
    stfs f8, 0x5cc(r1)
    stfs f0, 0x5f0(r1)
    stfs f0, 0x5dc(r1)
    stfs f0, 0x5c8(r1)
    beq lbl_fn_80302F94_000014D4
    fmr f1, f8
    addi r3, r1, 0x1f8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1f8
    addi r5, r1, 0x1c8
    bl fn_805F89F0
    addi r3, r1, 0x1c8
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
lbl_fn_80302F94_000014D4:
    lfs f0, lbl_80884A20
    lfs f1, 0x170(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80302F94_00001534
    addi r3, r1, 0x258
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x258
    addi r5, r1, 0x228
    bl fn_805F89F0
    addi r3, r1, 0x228
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
lbl_fn_80302F94_00001534:
    lfs f0, lbl_80884A20
    lfs f1, 0x16c(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80302F94_00001594
    addi r3, r1, 0x2b8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x2b8
    addi r5, r1, 0x288
    bl fn_805F89F0
    addi r3, r1, 0x288
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
lbl_fn_80302F94_00001594:
    lfs f0, lbl_80884A44
    addi r4, r29, 0x15d8
    lfs f7, lbl_80884A20
    mr r5, r4
    fadds f0, f0, f29
    stfs f7, 0x15d8(r29)
    addi r3, r1, 0x5c8
    stfs f7, 0x15dc(r29)
    stfs f0, 0x15e0(r29)
    bl fn_805F93C0
    addi r3, r1, 0x6b8
    lfs f2, 0x6c0(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0x1618
    addi r5, r29, 0x15d8
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r29, 0x15f4
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x1620(r29)
    li r0, 0x1
    lfs f2, 0x15e0(r29)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, lbl_80884A9C
    stfs f2, 0x15fc(r29)
    lwz r5, lbl_8087F430
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r3, 0x15e4(r29)
    addi r0, r3, 0x1
    stw r0, 0x15e4(r29)
lbl_fn_80302F94_00001628:
    lwz r0, 0x15e4(r29)
    cmpwi r0, 0x5
    ble lbl_fn_80302F94_00001864
    cmpwi r31, 0x0
    beq lbl_fn_80302F94_00001864
    lfs f8, 0x1610(r29)
    lfs f0, 0x530(r29)
    lfs f7, 0x1608(r29)
    fsubs f9, f8, f0
    lfs f0, 0x528(r29)
    lfs f8, 0x160c(r29)
    fsubs f10, f7, f0
    lfs f7, 0x52c(r29)
    fmuls f0, f9, f9
    fsubs f7, f8, f7
    stfs f10, 0x160(r1)
    fmadds f1, f10, f10, f0
    stfs f7, 0x164(r1)
    stfs f9, 0x168(r1)
    bl fn_8068B100
    frsp f7, f1
    lfs f0, lbl_80884A28
    fcmpo cr0, f7, f0
    bge lbl_fn_80302F94_00001814
    lwz r0, 0x1600(r29)
    addi r5, r29, 0x1608
    lfs f7, lbl_80884A20
    li r3, 0x0
    lfs f2, 0x1610(r29)
    cmpwi r0, 0x0
    addi r4, r1, 0x154
    psq_l f1, 0x0(r5), 0, 0
    stw r3, 0x14f4(r29)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x15c(r1)
    stfs f7, 0x148(r1)
    stfs f7, 0x14c(r1)
    stfs f7, 0x150(r1)
    beq lbl_fn_80302F94_000016D8
    lfs f0, lbl_80884A88
    stfs f7, 0x148(r1)
    fadds f0, f0, f7
    stfs f7, 0x150(r1)
    stfs f0, 0x14c(r1)
lbl_fn_80302F94_000016D8:
    lfs f9, 0x14c(r1)
    addi r5, r1, 0xd0
    lfs f8, 0x538(r29)
    addi r4, r29, 0x15cc
    lfs f7, 0x148(r1)
    lis r3, lbl_807489F8@ha
    fsubs f9, f9, f8
    lfs f0, 0x534(r29)
    lfs f8, 0x150(r1)
    fsubs f7, f7, f0
    lfs f0, 0x53c(r29)
    stfs f9, 0xd4(r1)
    fsubs f0, f8, f0
    stfs f7, 0xd0(r1)
    psq_l f1, 0x0(r5), 0, 0
    fmr f2, f0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x15d4(r29)
    lfs f1, 0x15d0(r29)
    lfd f2, lbl_807489F8@l(r3)
    stfs f0, 0xd8(r1)
    bl fn_8068AEA8
    frsp f23, f1
    lfs f0, lbl_80884A88
    fcmpo cr0, f23, f0
    ble lbl_fn_80302F94_00001748
    lfs f0, lbl_80884A8C
    fsubs f23, f23, f0
lbl_fn_80302F94_00001748:
    lfs f0, lbl_80884A90
    fcmpo cr0, f23, f0
    bge lbl_fn_80302F94_0000175C
    lfs f0, lbl_80884A8C
    fadds f23, f23, f0
lbl_fn_80302F94_0000175C:
    lfs f9, 0x158(r1)
    li r4, 0x1
    lfs f8, 0x52c(r29)
    addi r6, r1, 0xc4
    lfs f7, 0x154(r1)
    addi r5, r29, 0x15d8
    fsubs f10, f9, f8
    lfs f0, 0x528(r29)
    lfs f13, lbl_80884AFC
    li r3, 0x1e
    fsubs f11, f7, f0
    lfs f7, 0x15c(r1)
    lfs f0, 0x530(r29)
    fmuls f12, f10, f13
    lfs f8, lbl_80884A20
    li r0, 0x0
    fsubs f9, f7, f0
    stfs f12, 0xc8(r1)
    fmuls f0, f11, f13
    stfs f23, 0x15d0(r29)
    fmuls f2, f9, f13
    lfs f7, lbl_80884A5C
    stfs f0, 0xc4(r1)
    lfs f0, lbl_80884B00
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x15e0(r29)
    stfs f8, 0x15dc(r29)
    stw r4, 0x14f0(r29)
    lwz r6, lbl_8087F430
    stfs f11, 0xb8(r1)
    lwz r4, 0x96c(r6)
    stfs f10, 0xbc(r1)
    srwi r5, r4, 31
    clrlwi r4, r4, 31
    xor r4, r4, r5
    stfs f9, 0xc0(r1)
    subf r4, r5, r4
    stw r4, 0x96c(r6)
    stw r3, 0x970(r6)
    stfs f7, 0x974(r6)
    stfs f0, 0x978(r6)
    stfs f2, 0xcc(r1)
    stw r0, 0x14f4(r29)
    stw r0, 0x15e4(r29)
    b lbl_fn_80302F94_000018B0
lbl_fn_80302F94_00001814:
    cmpwi r30, 0x0
    bne lbl_fn_80302F94_0000184C
    lfs f7, 0x528(r29)
    lfs f0, 0x15d8(r29)
    lfs f9, 0x52c(r29)
    fadds f10, f7, f0
    lfs f8, 0x15dc(r29)
    lfs f7, 0x530(r29)
    lfs f0, 0x15e0(r29)
    fadds f8, f9, f8
    stfs f10, 0x528(r29)
    fadds f0, f7, f0
    stfs f8, 0x52c(r29)
    stfs f0, 0x530(r29)
lbl_fn_80302F94_0000184C:
    lfs f7, lbl_80884AC0
    lfs f0, 0x534(r29)
    fmuls f7, f7, f30
    fadds f0, f0, f7
    stfs f0, 0x534(r29)
    b lbl_fn_80302F94_000018B0
lbl_fn_80302F94_00001864:
    cmpwi r30, 0x0
    bne lbl_fn_80302F94_0000189C
    lfs f7, 0x528(r29)
    lfs f0, 0x15d8(r29)
    lfs f9, 0x52c(r29)
    fadds f10, f7, f0
    lfs f8, 0x15dc(r29)
    lfs f7, 0x530(r29)
    lfs f0, 0x15e0(r29)
    fadds f8, f9, f8
    stfs f10, 0x528(r29)
    fadds f0, f7, f0
    stfs f8, 0x52c(r29)
    stfs f0, 0x530(r29)
lbl_fn_80302F94_0000189C:
    lfs f7, lbl_80884AC0
    lfs f0, 0x534(r29)
    fmuls f7, f7, f30
    fadds f0, f0, f7
    stfs f0, 0x534(r29)
lbl_fn_80302F94_000018B0:
    lfs f0, lbl_80884AC4
    lwz r0, 0x2dc(r29)
    fmuls f0, f0, f31
    cmpwi r0, 0x14a
    stfs f0, 0x52c(r29)
    bne lbl_fn_80302F94_000018D0
    lfs f0, lbl_80884A20
    stfs f0, 0x534(r29)
lbl_fn_80302F94_000018D0:
    lwz r3, 0x14f4(r29)
    lwz r0, 0x16e4(r29)
    cmpw r3, r0
    ble lbl_fn_80302F94_00001A70
    lis r4, lbl_80748A14@ha
    addi r3, r29, 0xb0
    addi r4, r4, lbl_80748A14@l
    li r5, 0x0
    addi r4, r4, 0x194
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80302F94_00001908
    li r4, 0x0
    b lbl_fn_80302F94_00001914
lbl_fn_80302F94_00001908:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r4, r3, r0
lbl_fn_80302F94_00001914:
    lfs f0, 0x2c(r4)
    li r3, 0x64d
    lfs f7, 0x1c(r4)
    lfs f8, 0xc(r4)
    stfs f8, 0x13c(r1)
    lwz r28, lbl_8087F048
    stfs f7, 0x140(r1)
    stfs f0, 0x144(r1)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884A20
    stw r0, 0xc(r1)
    mr r3, r28
    lfs f2, lbl_80884A5C
    mr r4, r29
    lwz r10, 0x16e8(r29)
    addi r7, r1, 0x13c
    addi r8, r29, 0x534
    li r6, 0x3e8
    li r9, 0x0
    bl fn_800FAB80
    b lbl_fn_80302F94_00001A70
lbl_fn_80302F94_00001974:
    cmpwi r0, 0x1
    bne lbl_fn_80302F94_00001A70
    lwz r4, 0x1600(r3)
    addi r5, r3, 0x1608
    psq_l f1, 0x0(r5), 0, 0
    lfs f9, 0x14(r4)
    lfs f8, lbl_80884A20
    psq_st f1, 0x528(r3), 0, 0
    lfs f10, lbl_80884A88
    lfs f7, 0x52c(r3)
    lfs f0, lbl_80884AC4
    fadds f9, f10, f9
    lfs f2, 0x1610(r3)
    fadds f0, f7, f0
    stfs f9, 0x538(r3)
    stfs f8, 0x534(r3)
    stfs f8, 0x53c(r3)
    stfs f2, 0x530(r3)
    stfs f0, 0x52c(r3)
    mr r3, r29
    bl fn_803010BC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x190
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r29
    li r4, 0x130
    bl fn_80232B7C
    lwz r3, 0x1614(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80884A20
    li r11, -0x1
    lfs f1, lbl_80884A5C
    li r0, 0x1
    stfs f0, 0x20(r1)
    mr r5, r3
    addi r4, r29, 0x1564
    addi r7, r1, 0x14
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F430
    li r4, 0xa4
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80302F94_00001A70:
    lwz r0, 0x7a4(r1)
    psq_l f31, 0x798(r1), 0, 0
    lfd f31, 0x790(r1)
    psq_l f30, 0x788(r1), 0, 0
    lfd f30, 0x780(r1)
    psq_l f29, 0x778(r1), 0, 0
    lfd f29, 0x770(r1)
    psq_l f28, 0x768(r1), 0, 0
    lfd f28, 0x760(r1)
    psq_l f27, 0x758(r1), 0, 0
    lfd f27, 0x750(r1)
    psq_l f26, 0x748(r1), 0, 0
    lfd f26, 0x740(r1)
    psq_l f25, 0x738(r1), 0, 0
    lfd f25, 0x730(r1)
    psq_l f24, 0x728(r1), 0, 0
    lfd f24, 0x720(r1)
    psq_l f23, 0x718(r1), 0, 0
    lfd f23, 0x710(r1)
    lwz r31, 0x70c(r1)
    lwz r30, 0x708(r1)
    lwz r29, 0x704(r1)
    lwz r28, 0x700(r1)
    mtlr r0
    addi r1, r1, 0x7a0
    blr
}
