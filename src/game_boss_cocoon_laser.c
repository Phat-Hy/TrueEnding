#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void fn_8000D430(void);
extern void fn_80092814(void);
extern void fn_80094958(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_8013A258(void);
extern void fn_80144710(void);
extern void fn_8016E970(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_8045ABB4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80754D30[];
extern u8 lbl_80754DB8[];
extern u8 lbl_80754DC8[];
extern u8 lbl_80754DE0[];
extern u8 lbl_80766768[];
extern u8 lbl_8078F7E0[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886C20;
extern u32 lbl_80886C28;
extern u32 lbl_80886C2C;
extern u32 lbl_80886C30;
extern u32 lbl_80886C34;
extern u32 lbl_80886C38;
extern u32 lbl_80886C3C;
extern u32 lbl_80886C44;
extern u32 lbl_80886C64;
extern u32 lbl_80886C6C;
extern u32 lbl_80886C70;
extern u32 lbl_80886C74;
extern u32 lbl_80886C80;
extern u32 lbl_80886CA0;
extern u32 lbl_80886CBC;
extern u32 lbl_80886CC0;
extern u32 lbl_80886CC4;
extern u32 lbl_80886CC8;
extern u32 lbl_80886CCC;
extern u32 lbl_80886CD0;
extern u32 lbl_80886CD4;
extern u32 lbl_80886CD8;
extern u32 lbl_80886CDC;
extern u32 lbl_80886CE0;
extern u32 lbl_80886CE4;
extern u32 lbl_80886CE8;
extern u32 lbl_80886CEC;
extern u32 lbl_80886CF0;
extern u32 lbl_80886CF4;
extern u32 lbl_80886CF8;

/* Function declarations */
void fn_8045B40C(void);
void fn_8045B594(void);
void fn_8045B82C(void);
void fn_8045BFFC(void);
void fn_8045C83C(void);
void fn_8045CB24(void);

asm void fn_8045B40C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8045B40C_000000AC
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045B40C_0000004C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_8045B40C_00000068
lbl_fn_8045B40C_0000004C:
    lis r5, lbl_8078F7E0@ha
    lwzu r4, lbl_8078F7E0@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8045B40C_00000068:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8045B40C_000000AC
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8045B40C_00000174
lbl_fn_8045B40C_000000AC:
    lbz r0, 0x197c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8045B40C_000000F4
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x3b
    lfs f2, lbl_80886C38
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8045B40C_00000174
lbl_fn_8045B40C_000000F4:
    lwz r0, 0x14c8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8045B40C_0000013C
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_80886C38
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8045B40C_00000174
lbl_fn_8045B40C_0000013C:
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2
    lfs f2, lbl_80886C38
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8045B40C_00000174:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8045B594(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_23
    lfs f5, 0x52c(r3)
    lis r4, lbl_80754D30@ha
    lfs f4, 0x5a8(r3)
    addi r5, r1, 0x2c
    lfs f3, 0x528(r3)
    addi r25, r1, 0x48
    fadds f4, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f5, 0x5b0(r3)
    addi r26, r1, 0x54
    fadds f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    mr r30, r3
    lfs f3, 0x530(r3)
    addi r27, r4, lbl_80754D30@l
    psq_l f1, 0x0(r5), 0, 0
    addi r24, r1, 0x20
    psq_st f1, 0x614(r3), 0, 0
    addi r23, r1, 0x14
    lfs f0, 0x5ac(r3)
    li r31, 0x0
    lfs f4, 0x618(r3)
    li r29, 0x0
    fadds f6, f3, f0
    lfs f3, lbl_80886CA0
    fadds f4, f4, f5
    lfs f0, 0x5b4(r3)
    stfs f5, 0x620(r3)
    li r28, 0x0
    stfs f4, 0x618(r3)
    fmr f2, f6
    fnmsubs f3, f3, f5, f0
    psq_l f1, 0x614(r3), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    lfs f0, 0x4c(r1)
    stfs f2, 0x61c(r3)
    frsp f2, f2
    fadds f0, f0, f3
    stfs f2, 0x5c(r1)
    stfs f2, 0x50(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r3)
    lfs f2, 0x50(r1)
    stfs f0, 0x4c(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_st f1, 0x5f4(r3), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    stfs f6, 0x34(r1)
    psq_st f1, 0x600(r3), 0, 0
    stfs f2, 0x608(r3)
    stfs f5, 0x60c(r3)
lbl_fn_8045B594_00000274:
    add r4, r27, r28
    addi r3, r30, 0xb0
    lfs f31, 0x8(r4)
    li r5, 0x0
    lwz r4, 0x0(r4)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045B594_0000029C
    li r5, 0x0
    b lbl_fn_8045B594_000002A8
lbl_fn_8045B594_0000029C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_8045B594_000002A8:
    lfs f0, 0x1c(r5)
    add r4, r27, r28
    lfs f3, 0xc(r5)
    addi r3, r30, 0xb0
    stfs f3, 0x20(r1)
    lfs f2, 0x2c(r5)
    li r5, 0x0
    stfs f0, 0x24(r1)
    lwz r4, 0x4(r4)
    psq_l f1, 0x0(r24), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045B594_000002F0
    li r4, 0x0
    b lbl_fn_8045B594_000002FC
lbl_fn_8045B594_000002F0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8045B594_000002FC:
    lfs f3, 0x1c(r4)
    add r3, r30, r29
    lfs f4, 0xc(r4)
    addi r31, r31, 0x1
    lfs f0, 0x2c(r4)
    addi r5, r3, 0x153c
    stfs f4, 0x14(r1)
    addi r4, r3, 0x1548
    fmr f2, f0
    cmpwi r31, 0xb
    stfs f3, 0x18(r1)
    addi r29, r29, 0x58
    addi r28, r28, 0xc
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    stfs f2, 0x50(r1)
    lfs f2, 0x5c(r1)
    stfs f2, 0x1544(r3)
    lfs f2, 0x50(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1550(r3)
    stfs f0, 0x1c(r1)
    stfs f31, 0x1554(r3)
    blt lbl_fn_8045B594_00000274
    addi r3, r30, 0x1948
    lfs f0, 0x1954(r30)
    lfs f2, 0x1950(r30)
    lis r4, lbl_80754DE0@ha
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r30, 0x1938
    addi r3, r1, 0x38
    addi r4, r4, lbl_80754DE0@l
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    addi r4, r4, 0x9c
    li r5, 0x0
    stfs f2, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1940(r30)
    stfs f0, 0x1944(r30)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045B594_000003C0
    li r5, 0x0
    b lbl_fn_8045B594_000003CC
lbl_fn_8045B594_000003C0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_8045B594_000003CC:
    lfs f3, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f4, 0xc(r5)
    addi r3, r30, 0x148c
    lfs f2, 0x2c(r5)
    lfs f0, lbl_80886CBC
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1494(r30)
    stfs f0, 0x1498(r30)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    addi r11, r1, 0x90
    stfs f2, 0x10(r1)
    bl _restgpr_23
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8045B82C(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x2f4(r1)
    addi r4, r1, 0x140
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    lfs f31, lbl_80886C34
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    lfs f30, lbl_80886C30
    stfd f29, 0x2c0(r1)
    psq_st f29, 0x2c8(r1), 0, 0
    stfd f28, 0x2b0(r1)
    psq_st f28, 0x2b8(r1), 0, 0
    stw r31, 0x2ac(r1)
    mr r31, r3
    stw r30, 0x2a8(r1)
    stw r29, 0x2a4(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r4, 0x7e0(r3)
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8045B82C_0000049C
    rlwinm r0, r4, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_8045B82C_0000049C
    li r5, 0x0
lbl_fn_8045B82C_0000049C:
    cmpwi r5, 0x0
    bne lbl_fn_8045B82C_000004AC
    lfs f0, lbl_80886CA0
    fmuls f30, f30, f0
lbl_fn_8045B82C_000004AC:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_8045B82C_00000B88
    lwz r0, 0x18ec(r3)
    li r29, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8045B82C_0000091C
    lwz r4, lbl_8087F8A0
    lwz r5, 0x14b8(r3)
    lwz r0, 0x48(r4)
    cmplw r5, r0
    bne lbl_fn_8045B82C_0000091C
    lwz r4, 0x18f4(r3)
    lfs f6, 0x530(r3)
    lfs f3, 0xc(r4)
    lfs f4, 0x8(r4)
    lfs f0, 0x52c(r3)
    fsubs f7, f3, f6
    lfs f5, 0x528(r3)
    addi r3, r1, 0x128
    lfs f3, 0x4(r4)
    fsubs f4, f4, f0
    lfs f0, lbl_80886C34
    fsubs f3, f3, f5
    stfs f4, 0x138(r1)
    stfs f3, 0x134(r1)
    stfs f7, 0x13c(r1)
    lfs f4, 0x530(r5)
    lfs f3, 0x528(r5)
    fsubs f4, f4, f6
    fsubs f3, f3, f5
    stfs f0, 0x138(r1)
    stfs f3, 0x128(r1)
    stfs f4, 0x130(r1)
    stfs f0, 0x12c(r1)
    bl fn_805F9920
    fmr f29, f1
    addi r3, r1, 0x134
    bl fn_805F9920
    fcmpo cr0, f1, f29
    bge lbl_fn_8045B82C_0000091C
    addi r3, r1, 0x134
    bl fn_805F9920
    lfs f0, lbl_80886C28
    fcmpo cr0, f1, f0
    ble lbl_fn_8045B82C_0000075C
    addi r3, r1, 0x134
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x128
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x134
    addi r4, r1, 0x128
    bl fn_805F9990
    lfs f0, lbl_80886CC0
    fcmpo cr0, f1, f0
    ble lbl_fn_8045B82C_0000091C
    lfs f2, 0x13c(r1)
    addi r3, r1, 0x134
    lfs f0, lbl_80886C6C
    addi r30, r1, 0x110
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    li r29, 0x1
    lfs f31, lbl_80886C30
    frsp f3, f3
    stfs f2, 0x118(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8045B82C_000005EC
    lfs f3, 0x110(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045B82C_000005E0
    lfs f0, lbl_80886C70
    b lbl_fn_8045B82C_000005E4
lbl_fn_8045B82C_000005E0:
    lfs f0, lbl_80886C74
lbl_fn_8045B82C_000005E4:
    stfs f0, 0xd8(r1)
    b lbl_fn_8045B82C_00000600
lbl_fn_8045B82C_000005EC:
    frsp f2, f2
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_8045B82C_00000600:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x230
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886C34
    addi r4, r1, 0xc8
    lfs f28, 0x238(r1)
    mr r5, r4
    lfs f29, 0x234(r1)
    addi r3, r1, 0x260
    lfs f13, 0x230(r1)
    lfs f12, 0x248(r1)
    lfs f11, 0x244(r1)
    lfs f10, 0x240(r1)
    lfs f9, 0x258(r1)
    lfs f8, 0x254(r1)
    lfs f7, 0x250(r1)
    lfs f6, 0x25c(r1)
    lfs f5, 0x24c(r1)
    lfs f4, 0x23c(r1)
    lfs f0, lbl_80886C30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x118(r1)
    stfs f3, 0x290(r1)
    stfs f3, 0x294(r1)
    stfs f3, 0x298(r1)
    stfs f0, 0x29c(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f13, 0x260(r1)
    stfs f29, 0x264(r1)
    stfs f28, 0x268(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x270(r1)
    stfs f11, 0x274(r1)
    stfs f12, 0x278(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x280(r1)
    stfs f8, 0x284(r1)
    stfs f9, 0x288(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x26c(r1)
    stfs f5, 0x27c(r1)
    stfs f6, 0x28c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80886C6C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8045B82C_0000071C
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045B82C_0000070C
    lfs f0, lbl_80886C70
    b lbl_fn_8045B82C_00000710
lbl_fn_8045B82C_0000070C:
    lfs f0, lbl_80886C74
lbl_fn_8045B82C_00000710:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_8045B82C_00000730
lbl_fn_8045B82C_0000071C:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_8045B82C_00000730:
    lfs f2, lbl_80886C34
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x140
    stfs f2, 0xdc(r1)
    stfs f2, 0x118(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x148(r1)
    b lbl_fn_8045B82C_0000091C
lbl_fn_8045B82C_0000075C:
    lfs f2, 0x13c(r1)
    addi r3, r1, 0x134
    lfs f0, lbl_80886C6C
    addi r30, r1, 0x104
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f31, lbl_80886C34
    frsp f3, f3
    stfs f2, 0x10c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8045B82C_000007AC
    lfs f0, 0x104(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8045B82C_000007A0
    lfs f0, lbl_80886C70
    b lbl_fn_8045B82C_000007A4
lbl_fn_8045B82C_000007A0:
    lfs f0, lbl_80886C74
lbl_fn_8045B82C_000007A4:
    stfs f0, 0x90(r1)
    b lbl_fn_8045B82C_000007C0
lbl_fn_8045B82C_000007AC:
    frsp f2, f2
    lfs f1, 0x104(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8045B82C_000007C0:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1c0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886C34
    addi r4, r1, 0x80
    lfs f29, 0x1c8(r1)
    mr r5, r4
    lfs f28, 0x1c4(r1)
    addi r3, r1, 0x1f0
    lfs f13, 0x1c0(r1)
    lfs f12, 0x1d8(r1)
    lfs f11, 0x1d4(r1)
    lfs f10, 0x1d0(r1)
    lfs f9, 0x1e8(r1)
    lfs f8, 0x1e4(r1)
    lfs f7, 0x1e0(r1)
    lfs f6, 0x1ec(r1)
    lfs f5, 0x1dc(r1)
    lfs f4, 0x1cc(r1)
    lfs f0, lbl_80886C30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10c(r1)
    stfs f3, 0x220(r1)
    stfs f3, 0x224(r1)
    stfs f3, 0x228(r1)
    stfs f0, 0x22c(r1)
    stfs f13, 0x50(r1)
    stfs f28, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x1f0(r1)
    stfs f28, 0x1f4(r1)
    stfs f29, 0x1f8(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x200(r1)
    stfs f11, 0x204(r1)
    stfs f12, 0x208(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x210(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x218(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1fc(r1)
    stfs f5, 0x20c(r1)
    stfs f6, 0x21c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80886C6C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8045B82C_000008DC
    lfs f3, 0x84(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045B82C_000008CC
    lfs f0, lbl_80886C70
    b lbl_fn_8045B82C_000008D0
lbl_fn_8045B82C_000008CC:
    lfs f0, lbl_80886C74
lbl_fn_8045B82C_000008D0:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8045B82C_000008F0
lbl_fn_8045B82C_000008DC:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8045B82C_000008F0:
    lfs f2, lbl_80886C34
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x140
    stfs f2, 0x94(r1)
    li r29, 0x1
    stfs f2, 0x10c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x148(r1)
lbl_fn_8045B82C_0000091C:
    cmpwi r29, 0x0
    bne lbl_fn_8045B82C_00000B9C
    lwz r6, 0x14b8(r31)
    addi r3, r1, 0x11c
    lfs f0, 0x530(r31)
    addi r5, r1, 0xf8
    lfs f3, 0x530(r6)
    mr r4, r3
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x100(r1)
    fsubs f0, f3, f0
    stfs f4, 0xfc(r1)
    stfs f0, 0xf8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x124(r1)
    bl fn_805F98D0
    lwz r4, 0x14b8(r31)
    addi r3, r1, 0xec
    lfs f0, 0x530(r31)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    stfs f6, 0xf4(r1)
    bl fn_805F9940
    lfs f0, lbl_80886C3C
    fcmpo cr0, f1, f0
    bge lbl_fn_8045B82C_000009C4
    lfs f31, lbl_80886C34
    b lbl_fn_8045B82C_000009C8
lbl_fn_8045B82C_000009C4:
    lfs f31, lbl_80886C30
lbl_fn_8045B82C_000009C8:
    lfs f2, 0x124(r1)
    addi r3, r1, 0x11c
    lfs f0, lbl_80886C6C
    addi r30, r1, 0xe0
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xe8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8045B82C_00000A18
    lfs f3, 0xe0(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045B82C_00000A0C
    lfs f0, lbl_80886C70
    b lbl_fn_8045B82C_00000A10
lbl_fn_8045B82C_00000A0C:
    lfs f0, lbl_80886C74
lbl_fn_8045B82C_00000A10:
    stfs f0, 0x48(r1)
    b lbl_fn_8045B82C_00000A2C
lbl_fn_8045B82C_00000A18:
    frsp f2, f2
    lfs f1, 0xe0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8045B82C_00000A2C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x150
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886C34
    addi r4, r1, 0x38
    lfs f29, 0x158(r1)
    mr r5, r4
    lfs f28, 0x154(r1)
    addi r3, r1, 0x180
    lfs f13, 0x150(r1)
    lfs f12, 0x168(r1)
    lfs f11, 0x164(r1)
    lfs f10, 0x160(r1)
    lfs f9, 0x178(r1)
    lfs f8, 0x174(r1)
    lfs f7, 0x170(r1)
    lfs f6, 0x17c(r1)
    lfs f5, 0x16c(r1)
    lfs f4, 0x15c(r1)
    lfs f0, lbl_80886C30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xe8(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x180(r1)
    stfs f28, 0x184(r1)
    stfs f29, 0x188(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x190(r1)
    stfs f11, 0x194(r1)
    stfs f12, 0x198(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f9, 0x1a8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x18c(r1)
    stfs f5, 0x19c(r1)
    stfs f6, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886C6C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8045B82C_00000B48
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045B82C_00000B38
    lfs f0, lbl_80886C70
    b lbl_fn_8045B82C_00000B3C
lbl_fn_8045B82C_00000B38:
    lfs f0, lbl_80886C74
lbl_fn_8045B82C_00000B3C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8045B82C_00000B5C
lbl_fn_8045B82C_00000B48:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8045B82C_00000B5C:
    lfs f2, lbl_80886C34
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x140
    stfs f2, 0x4c(r1)
    stfs f2, 0xe8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x148(r1)
    b lbl_fn_8045B82C_00000B9C
lbl_fn_8045B82C_00000B88:
    cmpwi r0, 0x6
    bne lbl_fn_8045B82C_00000B9C
    mr r3, r31
    bl fn_8013A258
    b lbl_fn_8045B82C_00000BB4
lbl_fn_8045B82C_00000B9C:
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0x140
    fmuls f2, f0, f30
    bl fn_8045ABB4
lbl_fn_8045B82C_00000BB4:
    lwz r0, 0x2f4(r1)
    psq_l f31, 0x2e8(r1), 0, 0
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    psq_l f29, 0x2c8(r1), 0, 0
    lfd f29, 0x2c0(r1)
    psq_l f28, 0x2b8(r1), 0, 0
    lfd f28, 0x2b0(r1)
    lwz r31, 0x2ac(r1)
    lwz r30, 0x2a8(r1)
    lwz r29, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void fn_8045BFFC(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stw r31, 0x17c(r1)
    mr r31, r3
    stw r30, 0x178(r1)
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8045BFFC_00001408
    lbz r0, 0x197c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045BFFC_00000D3C
    lwz r4, 0x1960(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8045BFFC_00000D3C
    lwz r0, 0x54(r4)
    cmpwi r0, 0x1
    bne lbl_fn_8045BFFC_00000D3C
    lwz r4, 0x18f4(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0xc(r4)
    lfs f3, 0x528(r3)
    addi r3, r1, 0xdc
    lfs f4, 0x4(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80886C34
    fsubs f3, f4, f3
    stfs f5, 0xe4(r1)
    stfs f3, 0xdc(r1)
    stfs f0, 0xe0(r1)
    bl fn_805F9920
    lfs f0, lbl_80886CC4
    fcmpo cr0, f1, f0
    bge lbl_fn_8045BFFC_00000D3C
    lfs f3, lbl_80886C34
    addi r3, r1, 0x148
    lfs f0, lbl_80886C30
    li r4, 0x79
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0xac
    addi r3, r1, 0x148
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0xac
    lfs f2, 0xb4(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0x14d4
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14dc(r31)
    b lbl_fn_8045BFFC_00001408
lbl_fn_8045BFFC_00000D3C:
    lwz r4, 0x7e0(r31)
    li r3, 0x1
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8045BFFC_00000D60
    rlwinm r0, r4, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_8045BFFC_00000D60
    li r3, 0x0
lbl_fn_8045BFFC_00000D60:
    cmpwi r3, 0x0
    li r5, 0x78
    bne lbl_fn_8045BFFC_00000D70
    li r5, 0x3c
lbl_fn_8045BFFC_00000D70:
    lwz r4, 0x18ec(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8045BFFC_00000D80
    slwi r5, r5, 1
lbl_fn_8045BFFC_00000D80:
    lwz r3, 0x14c0(r31)
    cmpw r3, r5
    ble lbl_fn_8045BFFC_00001408
    lwz r0, 0x14d0(r31)
    cmpwi r0, 0x5
    bge lbl_fn_8045BFFC_00000DA4
    slwi r0, r5, 1
    cmpw r3, r0
    ble lbl_fn_8045BFFC_000011EC
lbl_fn_8045BFFC_00000DA4:
    lbz r0, 0x197c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8045BFFC_00000EC8
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80886C34
    li r0, -0x1
    lfs f1, lbl_80886C30
    addi r4, r31, 0x14f0
    stfs f0, 0x70(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x7c
    addi r8, r1, 0x70
    stfs f0, 0x74(r1)
    addi r9, r1, 0x60
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r4, 0x4
    stw r4, 0x1520(r31)
    li r0, 0xa
    stw r4, 0x1578(r31)
    mulli r0, r0, 0x58
    stw r4, 0x15d0(r31)
    add r3, r31, r0
    stw r4, 0x1628(r31)
    stw r4, 0x1680(r31)
    stw r4, 0x16d8(r31)
    stw r4, 0x1730(r31)
    stw r4, 0x1788(r31)
    stw r4, 0x17e0(r31)
    stw r4, 0x1838(r31)
    stw r4, 0x1520(r3)
    lwz r0, 0x14b8(r31)
    stw r0, 0x14fc(r31)
    b lbl_fn_8045BFFC_000011E0
lbl_fn_8045BFFC_00000EC8:
    cmpwi r4, 0x0
    beq lbl_fn_8045BFFC_000010CC
    lwz r0, 0x18f0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8045BFFC_00000FB4
    lfs f3, lbl_80886C34
    addi r3, r1, 0x118
    lfs f0, lbl_80886C30
    li r4, 0x79
    stfs f3, 0xa0(r1)
    stfs f3, 0xa4(r1)
    stfs f0, 0xa8(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0xa0
    addi r3, r1, 0x118
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0xa0
    lfs f2, 0xa8(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0x14d4
    psq_st f1, 0x0(r3), 0, 0
    li r4, 0xd2
    stfs f2, 0x14dc(r31)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8045BFFC_000011E0
    lwz r3, lbl_8087F430
    li r4, 0xd2
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8045BFFC_000011E0
lbl_fn_8045BFFC_00000FB4:
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80886C34
    li r0, -0x1
    lfs f1, lbl_80886C30
    addi r4, r31, 0x14f0
    stfs f0, 0x48(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x54
    addi r8, r1, 0x48
    stfs f0, 0x4c(r1)
    addi r9, r1, 0x38
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r4, 0x4
    stw r4, 0x1520(r31)
    li r0, 0xa
    stw r4, 0x1578(r31)
    mulli r0, r0, 0x58
    stw r4, 0x15d0(r31)
    add r3, r31, r0
    stw r4, 0x1628(r31)
    stw r4, 0x1680(r31)
    stw r4, 0x16d8(r31)
    stw r4, 0x1730(r31)
    stw r4, 0x1788(r31)
    stw r4, 0x17e0(r31)
    stw r4, 0x1838(r31)
    stw r4, 0x1520(r3)
    lwz r0, 0x14b8(r31)
    stw r0, 0x14fc(r31)
    b lbl_fn_8045BFFC_000011E0
lbl_fn_8045BFFC_000010CC:
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80886C34
    li r0, -0x1
    lfs f1, lbl_80886C30
    addi r4, r31, 0x14f0
    stfs f0, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r4, 0x4
    stw r4, 0x1520(r31)
    li r0, 0xa
    stw r4, 0x1578(r31)
    mulli r0, r0, 0x58
    stw r4, 0x15d0(r31)
    add r3, r31, r0
    stw r4, 0x1628(r31)
    stw r4, 0x1680(r31)
    stw r4, 0x16d8(r31)
    stw r4, 0x1730(r31)
    stw r4, 0x1788(r31)
    stw r4, 0x17e0(r31)
    stw r4, 0x1838(r31)
    stw r4, 0x1520(r3)
    lwz r0, 0x14b8(r31)
    stw r0, 0x14fc(r31)
lbl_fn_8045BFFC_000011E0:
    li r0, 0x0
    stw r0, 0x14d0(r31)
    b lbl_fn_8045BFFC_00001408
lbl_fn_8045BFFC_000011EC:
    lwz r5, 0x14b8(r31)
    addi r4, r1, 0xd0
    lfs f0, 0x530(r31)
    addi r3, r1, 0xc4
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f5, 0xd4(r1)
    lfs f4, 0x52c(r31)
    fsubs f6, f2, f0
    lfs f0, 0x528(r31)
    lfs f3, 0xd0(r1)
    fsubs f4, f5, f4
    stfs f2, 0xd8(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc8(r1)
    stfs f0, 0xc4(r1)
    stfs f6, 0xcc(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0xc4
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_80886C34
    addi r3, r1, 0xe8
    lfs f0, lbl_80886C30
    li r4, 0x79
    stfs f3, 0xb8(r1)
    stfs f3, 0xbc(r1)
    stfs f0, 0xc0(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0xb8
    addi r3, r1, 0xe8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xb8
    addi r4, r1, 0xc4
    bl fn_805F9990
    fmr f31, f1
    lis r3, lbl_80754DC8@ha
    lfd f1, lbl_80754DC8@l(r3)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_8045BFFC_00001408
    lfs f0, lbl_80886C3C
    fcmpo cr0, f30, f0
    bge lbl_fn_8045BFFC_00001354
    addi r3, r1, 0xc4
    lfs f2, 0xcc(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    addi r30, r1, 0x94
    stfs f2, 0x9c(r1)
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x156
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14d0(r31)
    addi r4, r31, 0x14d4
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x9c(r1)
    addi r0, r3, 0x1
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x14dc(r31)
    stw r0, 0x14d0(r31)
    b lbl_fn_8045BFFC_00001408
lbl_fn_8045BFFC_00001354:
    lfs f0, lbl_80886C2C
    fcmpo cr0, f30, f0
    bge lbl_fn_8045BFFC_00001408
    lbz r0, 0x197c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8045BFFC_000013FC
    addi r3, r1, 0xc4
    lfs f2, 0xcc(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    addi r30, r1, 0x88
    stfs f2, 0x90(r1)
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f2, 0x90(r1)
    addi r3, r31, 0x14d4
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14dc(r31)
lbl_fn_8045BFFC_000013FC:
    lwz r3, 0x14d0(r31)
    addi r0, r3, 0x1
    stw r0, 0x14d0(r31)
lbl_fn_8045BFFC_00001408:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_8045C83C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    li r0, 0x0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r5
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r4
    stw r28, 0xe0(r1)
    mr r28, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    li r0, 0x6
    mr r3, r28
    li r4, 0x3
    stw r0, 0x58c(r28)
    bl fn_8016E970
    lfs f1, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r28)
    addi r3, r28, 0xb0
    lfs f2, lbl_80886C38
    li r4, 0x0
    stfs f1, 0x2fc(r28)
    li r5, 0x2
    li r6, 0x0
    li r7, 0x1
    stfs f1, 0x2e8(r28)
    li r8, 0x1
    bl fn_80097C08
    lfs f2, 0x8(r29)
    addi r30, r1, 0x8
    stfs f2, 0x530(r28)
    lfs f2, 0x8(r31)
    psq_l f1, 0x0(r29), 0, 0
    fabs f0, f2
    psq_st f1, 0x528(r28), 0, 0
    lfs f3, lbl_80886C34
    psq_l f1, 0x0(r31), 0, 0
    frsp f4, f0
    lfs f0, lbl_80886C6C
    stfs f3, 0x2e4(r28)
    fcmpo cr0, f4, f0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_8045C83C_00001528
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8045C83C_0000151C
    lfs f0, lbl_80886C70
    b lbl_fn_8045C83C_00001520
lbl_fn_8045C83C_0000151C:
    lfs f0, lbl_80886C74
lbl_fn_8045C83C_00001520:
    stfs f0, 0x18(r1)
    b lbl_fn_8045C83C_0000153C
lbl_fn_8045C83C_00001528:
    frsp f2, f2
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x18(r1)
lbl_fn_8045C83C_0000153C:
    lfs f0, 0x18(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886C34
    addi r4, r1, 0x20
    lfs f4, 0xb8(r1)
    mr r5, r4
    lfs f5, 0xb4(r1)
    addi r3, r1, 0x70
    lfs f6, 0xb0(r1)
    lfs f7, 0xc8(r1)
    lfs f8, 0xc4(r1)
    lfs f9, 0xc0(r1)
    lfs f10, 0xd8(r1)
    lfs f11, 0xd4(r1)
    lfs f12, 0xd0(r1)
    lfs f13, 0xdc(r1)
    lfs f31, 0xcc(r1)
    lfs f30, 0xbc(r1)
    lfs f0, lbl_80886C30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xa0(r1)
    stfs f3, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f6, 0x50(r1)
    stfs f5, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f6, 0x70(r1)
    stfs f5, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f9, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f12, 0x38(r1)
    stfs f11, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f12, 0x90(r1)
    stfs f11, 0x94(r1)
    stfs f10, 0x98(r1)
    stfs f30, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f30, 0x7c(r1)
    stfs f31, 0x8c(r1)
    stfs f13, 0x9c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F9750
    lfs f2, 0x28(r1)
    lfs f0, lbl_80886C6C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8045C83C_00001658
    lfs f3, 0x24(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045C83C_00001648
    lfs f0, lbl_80886C70
    b lbl_fn_8045C83C_0000164C
lbl_fn_8045C83C_00001648:
    lfs f0, lbl_80886C74
lbl_fn_8045C83C_0000164C:
    fneg f0, f0
    stfs f0, 0x14(r1)
    b lbl_fn_8045C83C_0000166C
lbl_fn_8045C83C_00001658:
    lfs f1, 0x24(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x14(r1)
lbl_fn_8045C83C_0000166C:
    lfs f2, lbl_80886C34
    addi r3, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    stfs f2, 0x1c(r1)
    stfs f2, 0x10(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r28), 0, 0
    stfs f2, 0x53c(r28)
    bl fn_80144710
    li r0, 0x0
    stw r0, 0x5c(r1)
    addi r3, r28, 0xb0
    addi r4, r1, 0x5c
    bl fn_8000D430
    addic. r3, r1, 0x5c
    beq lbl_fn_8045C83C_000016E8
    lwz r4, 0x5c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8045C83C_000016E8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8045C83C_000016E0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8045C83C_000016E0:
    li r0, 0x0
    stw r0, 0x5c(r1)
lbl_fn_8045C83C_000016E8:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8045CB24(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r4, 0x4330
    lfs f1, lbl_80886CC8
    stw r0, 0x94(r1)
    lfs f0, lbl_80886CCC
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lis r30, lbl_80754DB8@ha
    lfd f3, lbl_80754DB8@l(r30)
    lwz r0, 0x1978(r3)
    stw r4, 0x48(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfd f2, 0x48(r1)
    stw r4, 0x50(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80886C64
    lfs f2, lbl_80886C30
    fmadds f0, f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_000017A0
    b lbl_fn_8045CB24_000017D8
lbl_fn_8045CB24_000017A0:
    lwz r0, 0x1978(r31)
    lfd f3, lbl_80754DB8@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfs f1, lbl_80886CC8
    lfd f2, 0x50(r1)
    lfs f0, lbl_80886CCC
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80886C64
    fmadds f2, f0, f1, f0
lbl_fn_8045CB24_000017D8:
    lfs f1, lbl_80886C80
    lfs f0, lbl_80886CD0
    lwz r3, 0x58c(r31)
    fmadds f31, f1, f2, f0
    subi r0, r3, 0x7
    cmplwi r0, 0x1
    fmr f30, f31
    fmr f29, f31
    ble lbl_fn_8045CB24_00001C60
    cmpwi r3, 0x9
    beq lbl_fn_8045CB24_00001820
    cmpwi r3, 0xa
    beq lbl_fn_8045CB24_00001978
    cmpwi r3, 0xc
    beq lbl_fn_8045CB24_00001AC4
    cmpwi r3, 0xe
    beq lbl_fn_8045CB24_00001C60
    b lbl_fn_8045CB24_00001CF8
lbl_fn_8045CB24_00001820:
    lfs f2, 0x2e4(r31)
    lfs f1, lbl_80886CD4
    fcmpo cr0, f2, f1
    bge lbl_fn_8045CB24_0000184C
    fdivs f1, f2, f1
    lfs f0, lbl_80886C30
    fsubs f0, f0, f1
    fmuls f31, f31, f0
    fmuls f30, f30, f0
    fmuls f29, f29, f0
    b lbl_fn_8045CB24_00001CF8
lbl_fn_8045CB24_0000184C:
    lfs f0, lbl_80886CD8
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_0000193C
    lfs f0, lbl_80886CDC
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_000018C0
    lfs f0, lbl_80886C20
    lfs f3, lbl_80886C34
    fsubs f0, f2, f0
    fdivs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_8045CB24_00001880
    b lbl_fn_8045CB24_00001884
lbl_fn_8045CB24_00001880:
    fmr f3, f0
lbl_fn_8045CB24_00001884:
    lfs f30, lbl_80886C30
    fcmpo cr0, f30, f3
    bge lbl_fn_8045CB24_00001894
    b lbl_fn_8045CB24_00001928
lbl_fn_8045CB24_00001894:
    lfs f2, 0x2e4(r31)
    lfs f1, lbl_80886C20
    lfs f0, lbl_80886CD4
    fsubs f1, f2, f1
    lfs f30, lbl_80886C34
    fdivs f0, f1, f0
    fcmpo cr0, f30, f0
    ble lbl_fn_8045CB24_000018B8
    b lbl_fn_8045CB24_00001928
lbl_fn_8045CB24_000018B8:
    fmr f30, f0
    b lbl_fn_8045CB24_00001928
lbl_fn_8045CB24_000018C0:
    fsubs f2, f2, f0
    lfs f1, lbl_80886CE0
    lfs f0, lbl_80886C30
    lfs f3, lbl_80886C34
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_8045CB24_000018E4
    b lbl_fn_8045CB24_000018E8
lbl_fn_8045CB24_000018E4:
    fmr f3, f0
lbl_fn_8045CB24_000018E8:
    lfs f30, lbl_80886C30
    fcmpo cr0, f30, f3
    bge lbl_fn_8045CB24_000018F8
    b lbl_fn_8045CB24_00001928
lbl_fn_8045CB24_000018F8:
    lfs f2, 0x2e4(r31)
    lfs f1, lbl_80886CDC
    lfs f0, lbl_80886CE0
    fsubs f1, f2, f1
    lfs f2, lbl_80886C34
    fdivs f0, f1, f0
    fsubs f0, f30, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8045CB24_00001920
    b lbl_fn_8045CB24_00001924
lbl_fn_8045CB24_00001920:
    fmr f2, f0
lbl_fn_8045CB24_00001924:
    fmr f30, f2
lbl_fn_8045CB24_00001928:
    fmr f31, f30
    li r0, 0x43
    stw r0, 0x1978(r31)
    lfs f29, lbl_80886C34
    b lbl_fn_8045CB24_00001CF8
lbl_fn_8045CB24_0000193C:
    lfs f1, lbl_80886CE4
    lfs f0, lbl_80886C20
    fsubs f1, f2, f1
    lfs f2, lbl_80886C30
    fdivs f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_0000195C
    b lbl_fn_8045CB24_00001960
lbl_fn_8045CB24_0000195C:
    fmr f2, f0
lbl_fn_8045CB24_00001960:
    fmuls f31, f31, f2
    li r0, 0x43
    fmuls f30, f30, f2
    stw r0, 0x1978(r31)
    fmuls f29, f29, f2
    b lbl_fn_8045CB24_00001CF8
lbl_fn_8045CB24_00001978:
    lfs f2, 0x2e4(r31)
    lfs f1, lbl_80886CD4
    fcmpo cr0, f2, f1
    bge lbl_fn_8045CB24_000019A4
    fdivs f1, f2, f1
    lfs f0, lbl_80886C30
    fsubs f0, f0, f1
    fmuls f31, f31, f0
    fmuls f30, f30, f0
    fmuls f29, f29, f0
    b lbl_fn_8045CB24_00001CF8
lbl_fn_8045CB24_000019A4:
    lfs f0, lbl_80886C44
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_00001A8C
    lfs f0, lbl_80886CE8
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_00001A10
    fsubs f0, f2, f1
    lfs f2, lbl_80886C34
    fdivs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8045CB24_000019D4
    b lbl_fn_8045CB24_000019D8
lbl_fn_8045CB24_000019D4:
    fmr f2, f0
lbl_fn_8045CB24_000019D8:
    lfs f30, lbl_80886C30
    fcmpo cr0, f30, f2
    bge lbl_fn_8045CB24_000019E8
    b lbl_fn_8045CB24_00001A78
lbl_fn_8045CB24_000019E8:
    lfs f0, 0x2e4(r31)
    lfs f1, lbl_80886CD4
    lfs f30, lbl_80886C34
    fsubs f0, f0, f1
    fdivs f0, f0, f1
    fcmpo cr0, f30, f0
    ble lbl_fn_8045CB24_00001A08
    b lbl_fn_8045CB24_00001A78
lbl_fn_8045CB24_00001A08:
    fmr f30, f0
    b lbl_fn_8045CB24_00001A78
lbl_fn_8045CB24_00001A10:
    fsubs f2, f2, f0
    lfs f1, lbl_80886CE0
    lfs f0, lbl_80886C30
    lfs f3, lbl_80886C34
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_8045CB24_00001A34
    b lbl_fn_8045CB24_00001A38
lbl_fn_8045CB24_00001A34:
    fmr f3, f0
lbl_fn_8045CB24_00001A38:
    lfs f30, lbl_80886C30
    fcmpo cr0, f30, f3
    bge lbl_fn_8045CB24_00001A48
    b lbl_fn_8045CB24_00001A78
lbl_fn_8045CB24_00001A48:
    lfs f2, 0x2e4(r31)
    lfs f1, lbl_80886CE8
    lfs f0, lbl_80886CE0
    fsubs f1, f2, f1
    lfs f2, lbl_80886C34
    fdivs f0, f1, f0
    fsubs f0, f30, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8045CB24_00001A70
    b lbl_fn_8045CB24_00001A74
lbl_fn_8045CB24_00001A70:
    fmr f2, f0
lbl_fn_8045CB24_00001A74:
    fmr f30, f2
lbl_fn_8045CB24_00001A78:
    fmr f31, f30
    li r0, 0x43
    fmr f29, f30
    stw r0, 0x1978(r31)
    b lbl_fn_8045CB24_00001CF8
lbl_fn_8045CB24_00001A8C:
    fsubs f1, f2, f0
    lfs f0, lbl_80886CE0
    lfs f2, lbl_80886C30
    fdivs f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_00001AA8
    b lbl_fn_8045CB24_00001AAC
lbl_fn_8045CB24_00001AA8:
    fmr f2, f0
lbl_fn_8045CB24_00001AAC:
    fmuls f31, f31, f2
    li r0, 0x43
    fmuls f30, f30, f2
    stw r0, 0x1978(r31)
    fmuls f29, f29, f2
    b lbl_fn_8045CB24_00001CF8
lbl_fn_8045CB24_00001AC4:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80886CEC
    fcmpo cr0, f1, f0
    ble lbl_fn_8045CB24_00001BC4
    lwz r0, 0x1978(r31)
    lis r30, lbl_80754DB8@ha
    lfd f3, lbl_80754DB8@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfs f1, lbl_80886CF0
    lfd f2, 0x48(r1)
    lfs f0, lbl_80886CCC
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80886C64
    lfs f2, lbl_80886C30
    fmadds f0, f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_00001B20
    b lbl_fn_8045CB24_00001B58
lbl_fn_8045CB24_00001B20:
    lwz r0, 0x1978(r31)
    lfd f3, lbl_80754DB8@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfs f1, lbl_80886CF0
    lfd f2, 0x50(r1)
    lfs f0, lbl_80886CCC
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80886C64
    fmadds f2, f0, f1, f0
lbl_fn_8045CB24_00001B58:
    lfs f1, lbl_80886C80
    addi r3, r31, 0xb0
    lfs f0, lbl_80886CD0
    li r4, 0x0
    fmadds f31, f1, f2, f0
    fmr f30, f31
    fmr f29, f31
    bl fn_80097D7C
    lfs f0, lbl_80886C2C
    lfs f2, 0x2e4(r31)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8045CB24_00001CF8
    fsubs f2, f2, f0
    lfs f1, lbl_80886CF4
    lfs f0, lbl_80886C30
    lfs f3, lbl_80886C34
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_8045CB24_00001BB0
    b lbl_fn_8045CB24_00001BB4
lbl_fn_8045CB24_00001BB0:
    fmr f3, f0
lbl_fn_8045CB24_00001BB4:
    fmuls f31, f31, f3
    fmuls f30, f30, f3
    fmuls f29, f29, f3
    b lbl_fn_8045CB24_00001CF8
lbl_fn_8045CB24_00001BC4:
    lwz r0, 0x1978(r31)
    lis r30, lbl_80754DB8@ha
    lfd f3, lbl_80754DB8@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfs f1, lbl_80886CF8
    lfd f2, 0x48(r1)
    lfs f0, lbl_80886CCC
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80886C64
    lfs f2, lbl_80886C30
    fmadds f0, f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_00001C10
    b lbl_fn_8045CB24_00001C48
lbl_fn_8045CB24_00001C10:
    lwz r0, 0x1978(r31)
    lfd f3, lbl_80754DB8@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfs f1, lbl_80886CF8
    lfd f2, 0x50(r1)
    lfs f0, lbl_80886CCC
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80886C64
    fmadds f2, f0, f1, f0
lbl_fn_8045CB24_00001C48:
    lfs f1, lbl_80886C80
    lfs f0, lbl_80886CD0
    fmadds f31, f1, f2, f0
    fmr f30, f31
    fmr f29, f31
    b lbl_fn_8045CB24_00001CF8
lbl_fn_8045CB24_00001C60:
    lwz r0, 0x1978(r31)
    lis r30, lbl_80754DB8@ha
    lfd f3, lbl_80754DB8@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfs f1, lbl_80886CF8
    lfd f2, 0x48(r1)
    lfs f0, lbl_80886CCC
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80886C64
    lfs f2, lbl_80886C30
    fmadds f0, f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8045CB24_00001CAC
    b lbl_fn_8045CB24_00001CE4
lbl_fn_8045CB24_00001CAC:
    lwz r0, 0x1978(r31)
    lfd f3, lbl_80754DB8@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfs f1, lbl_80886CF8
    lfd f2, 0x50(r1)
    lfs f0, lbl_80886CCC
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80886C64
    fmadds f2, f0, f1, f0
lbl_fn_8045CB24_00001CE4:
    lfs f1, lbl_80886C80
    lfs f0, lbl_80886CD0
    fmadds f31, f1, f2, f0
    fmr f30, f31
    fmr f29, f31
lbl_fn_8045CB24_00001CF8:
    lfs f0, lbl_80886C30
    lis r30, lbl_80754DE0@ha
    addi r30, r30, lbl_80754DE0@l
    addi r6, r1, 0x8
    stfs f31, 0x38(r1)
    mr r7, r6
    addi r3, r31, 0xb0
    addi r4, r30, 0xa1
    stfs f31, 0x3c(r1)
    addi r5, r1, 0x38
    stfs f31, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f30, 0x28(r1)
    stfs f30, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f29, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f29, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_80094958
    addi r6, r1, 0x8
    addi r3, r31, 0xb0
    mr r7, r6
    addi r4, r30, 0xae
    addi r5, r1, 0x38
    bl fn_80094958
    addi r6, r1, 0x8
    addi r3, r31, 0xb0
    mr r7, r6
    addi r4, r30, 0xbb
    addi r5, r1, 0x28
    bl fn_80094958
    addi r6, r1, 0x8
    addi r3, r31, 0xb0
    mr r7, r6
    addi r4, r30, 0xc8
    addi r5, r1, 0x18
    bl fn_80094958
    lwz r3, 0x1978(r31)
    addi r0, r3, 0x1
    stw r0, 0x1978(r31)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
