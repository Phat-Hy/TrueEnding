#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_80053BD0(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_801595BC(void);
extern void fn_8015AC48(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370AE4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_807549B8[];
extern u8 lbl_807549D0[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886B78;
extern u32 lbl_80886B7C;
extern u32 lbl_80886B80;
extern u32 lbl_80886B84;
extern u32 lbl_80886B90;
extern u32 lbl_80886B9C;
extern u32 lbl_80886BA4;
extern u32 lbl_80886BA8;
extern u32 lbl_80886BAC;
extern u32 lbl_80886BB8;
extern u32 lbl_80886BC0;
extern u32 lbl_80886BCC;
extern u32 lbl_80886BD0;
extern u32 lbl_80886BDC;
extern u32 lbl_80886BE0;
extern u32 lbl_80886BE4;
extern u32 lbl_80886BE8;
extern u32 lbl_80886BEC;
extern u32 lbl_80886BF0;
extern u32 lbl_80886BF4;
extern u32 lbl_80886BF8;
extern u32 lbl_80886BFC;
extern u32 lbl_80886C00;
extern u32 lbl_80886C04;

/* Function declarations */
void fn_80455D80(void);
void fn_80455E20(void);
void fn_80455F2C(void);
void fn_804560A4(void);
void fn_8045617C(void);
void fn_80456194(void);
void fn_804562E4(void);
void fn_80456DB8(void);
void fn_80456E1C(void);
void fn_80456F04(void);
void fn_80456F94(void);
void fn_804570F4(void);
void fn_804576D4(void);

asm void fn_80455D80(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x3e8
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    bl fn_80232B7C
    lfs f0, lbl_80886B80
    li r0, -0x1
    lfs f1, lbl_80886B78
    li r31, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x1928
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r31, 0x1920(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80455E20(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    lfs f31, lbl_80886B80
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    li r30, 0x0
    stw r29, 0x24(r1)
    li r29, 0x0
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r0, 0xd1c(r3)
    stw r0, 0xd20(r3)
    b lbl_fn_80455E20_00000158
lbl_fn_80455E20_000000E4:
    lwz r4, 0x19a0(r28)
    addi r3, r1, 0x8
    lfs f0, 0x530(r28)
    lwzx r4, r4, r31
    lfs f2, 0x52c(r28)
    lfs f4, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f4, f0
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r28)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    ble lbl_fn_80455E20_00000150
    lwz r3, 0x19a0(r28)
    lwzx r4, r3, r31
    lwz r0, 0x7e0(r4)
    rlwinm r3, r0, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    beq lbl_fn_80455E20_00000150
    fmr f31, f1
    mr r30, r4
lbl_fn_80455E20_00000150:
    addi r31, r31, 0x18
    addi r29, r29, 0x1
lbl_fn_80455E20_00000158:
    lwz r0, 0x19a4(r28)
    cmplw r29, r0
    blt lbl_fn_80455E20_000000E4
    cmpwi r30, 0x0
    bne lbl_fn_80455E20_00000174
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
lbl_fn_80455E20_00000174:
    li r0, 0x0
    stw r0, 0x1454(r28)
    stw r30, 0x14b8(r28)
    stw r30, 0xd1c(r28)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80455F2C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x2d
    ble lbl_fn_80455F2C_00000310
    lwz r4, 0x194c(r3)
    cmpwi r4, 0x2
    bge lbl_fn_80455F2C_000002A4
    li r0, 0x0
    addi r4, r4, 0x1
    stw r4, 0x194c(r3)
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lis r4, lbl_807549D0@ha
    lfs f1, lbl_80886B78
    addi r4, r4, lbl_807549D0@l
    addi r3, r1, 0x10
    addi r4, r4, 0x17c
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80886B80
    li r3, -0x1
    lfs f1, lbl_80886B78
    li r0, 0x1
    stfs f0, 0x28(r1)
    addi r4, r31, 0x1950
    addi r5, r31, 0xb0
    addi r7, r1, 0x34
    stfs f0, 0x2c(r1)
    addi r8, r1, 0x28
    addi r9, r1, 0x18
    li r6, 0x0
    stfs f0, 0x30(r1)
    li r10, -0x1
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80455F2C_00000310
lbl_fn_80455F2C_000002A4:
    li r0, 0x0
    stw r0, 0x194c(r3)
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x7
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r4, 0x2548(r31)
    li r3, 0x32
    lfs f1, lbl_80886BAC
    li r0, 0x1
    lfs f0, 0x14d0(r31)
    srwi r5, r4, 31
    clrlwi r4, r4, 31
    stw r3, 0x254c(r31)
    fmuls f0, f1, f0
    xor r3, r4, r5
    subf r3, r5, r3
    stw r3, 0x2548(r31)
    stfs f0, 0x2550(r31)
    stfs f0, 0x2554(r31)
    stw r0, 0x2558(r31)
lbl_fn_80455F2C_00000310:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804560A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lfs f0, 0x5b0(r3)
    addi r4, r1, 0x8
    lfs f7, 0x14d0(r3)
    addi r5, r1, 0x20
    lfs f4, 0x530(r3)
    addi r6, r1, 0x14
    fmuls f6, f0, f7
    lfs f3, 0x5ac(r3)
    lfs f0, lbl_80886B90
    fadds f8, f4, f3
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    fmuls f3, f0, f6
    lfs f0, 0x5b4(r3)
    fadds f9, f5, f4
    fmr f2, f8
    lfs f5, 0x528(r3)
    lfs f4, 0x5a4(r3)
    fmsubs f3, f7, f0, f3
    lfs f0, lbl_80886B78
    fadds f4, f5, f4
    stfs f2, 0x61c(r3)
    frsp f2, f2
    fcmpo cr0, f3, f0
    stfs f4, 0x8(r1)
    stfs f9, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x620(r3)
    stfs f8, 0x10(r1)
    psq_st f1, 0x614(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    ble lbl_fn_804560A4_000003B8
    b lbl_fn_804560A4_000003BC
lbl_fn_804560A4_000003B8:
    fmr f3, f0
lbl_fn_804560A4_000003BC:
    lfs f0, 0x18(r1)
    addi r4, r1, 0x20
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x14
    fadds f0, f0, f3
    lfs f2, 0x28(r1)
    stfs f2, 0x5fc(r3)
    lfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_st f1, 0x5f4(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x600(r3), 0, 0
    stfs f2, 0x608(r3)
    stfs f6, 0x60c(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_8045617C(void)
{
    nofralloc
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beqlr
    li r4, 0x3
    b fn_8016E970
    blr
}

asm void fn_80456194(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80456194_000004C8
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x14
    ble lbl_fn_80456194_0000054C
    li r0, 0x0
    li r11, 0x1
    stw r0, 0x14c0(r3)
    addi r7, r3, 0x1968
    lwz r12, 0x14b8(r3)
    addi r8, r3, 0x1974
    stw r11, 0x14bc(r3)
    li r0, -0x1
    lfs f3, lbl_80886B80
    addi r4, r30, 0x195c
    psq_l f1, 0x528(r12), 0, 0
    addi r9, r1, 0x10
    lfs f2, 0x530(r12)
    li r5, 0x0
    stfs f2, 0x1970(r3)
    li r6, 0x0
    lfs f0, lbl_80886B78
    li r10, -0x1
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x534(r12), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    fmr f1, f0
    stfs f3, 0x197c(r3)
    stfs f3, 0x1974(r3)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80456194_0000054C
lbl_fn_80456194_000004C8:
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0xf
    ble lbl_fn_80456194_0000054C
    lwz r31, lbl_8087F048
    li r3, 0x5aa
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80886B80
    stw r0, 0xc(r1)
    mr r3, r31
    lfs f2, lbl_80886B78
    mr r4, r30
    lwz r6, 0x590(r30)
    addi r7, r30, 0x1968
    addi r8, r30, 0x1974
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    li r31, 0x0
    stw r31, 0x14bc(r30)
    stw r31, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    li r0, 0x1
    stw r31, 0x2558(r30)
    stw r0, 0x14cc(r30)
lbl_fn_80456194_0000054C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804562E4(void)
{
    nofralloc
    stwu r1, -0x5f0(r1)
    mflr r0
    stw r0, 0x5f4(r1)
    addi r11, r1, 0x510
    stfd f31, 0x5e0(r1)
    psq_st f31, 0x5e8(r1), 0, 0
    stfd f30, 0x5d0(r1)
    psq_st f30, 0x5d8(r1), 0, 0
    stfd f29, 0x5c0(r1)
    psq_st f29, 0x5c8(r1), 0, 0
    stfd f28, 0x5b0(r1)
    psq_st f28, 0x5b8(r1), 0, 0
    stfd f27, 0x5a0(r1)
    psq_st f27, 0x5a8(r1), 0, 0
    stfd f26, 0x590(r1)
    psq_st f26, 0x598(r1), 0, 0
    stfd f25, 0x580(r1)
    psq_st f25, 0x588(r1), 0, 0
    stfd f24, 0x570(r1)
    psq_st f24, 0x578(r1), 0, 0
    stfd f23, 0x560(r1)
    psq_st f23, 0x568(r1), 0, 0
    stfd f22, 0x550(r1)
    psq_st f22, 0x558(r1), 0, 0
    stfd f21, 0x540(r1)
    psq_st f21, 0x548(r1), 0, 0
    stfd f20, 0x530(r1)
    psq_st f20, 0x538(r1), 0, 0
    stfd f19, 0x520(r1)
    psq_st f19, 0x528(r1), 0, 0
    stfd f18, 0x510(r1)
    psq_st f18, 0x518(r1), 0, 0
    bl _savegpr_14
    lwz r4, 0x14bc(r3)
    lis r0, 0x4330
    stw r0, 0x4b8(r1)
    mr r15, r3
    cmpwi r4, 0x0
    stw r0, 0x4c0(r1)
    bne lbl_fn_804562E4_000006C4
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x3c
    bge lbl_fn_804562E4_00000644
    xoris r0, r0, 0x8000
    stw r0, 0x4bc(r1)
    lis r4, lbl_807549B8@ha
    lfs f8, lbl_80886BE0
    lfd f9, lbl_807549B8@l(r4)
    lfd f0, 0x4b8(r1)
    lfs f7, lbl_80886BDC
    fsubs f9, f0, f9
    lfs f0, lbl_80886B78
    fdivs f8, f9, f8
    fmadds f0, f7, f8, f0
    stfs f0, 0x14dc(r3)
    b lbl_fn_804562E4_00000FB0
lbl_fn_804562E4_00000644:
    li r0, 0x0
    li r14, 0x1
    stw r0, 0x14c0(r3)
    li r4, 0x3e9
    stw r14, 0x14bc(r3)
    stw r0, 0x14cc(r3)
    bl fn_80232B7C
    lfs f0, lbl_80886B80
    li r0, -0x1
    lfs f1, lbl_80886B78
    addi r4, r15, 0x252c
    stfs f0, 0x94(r1)
    addi r5, r15, 0xb0
    addi r7, r1, 0x88
    addi r8, r1, 0x94
    stfs f0, 0x98(r1)
    addi r9, r1, 0xa0
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x9c(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f1, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stfs f1, 0xa8(r1)
    stfs f1, 0xac(r1)
    stw r0, 0x8(r1)
    stw r14, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_804562E4_00000FB0
lbl_fn_804562E4_000006C4:
    cmpwi r4, 0x1
    bne lbl_fn_804562E4_00000FB0
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x2d
    bge lbl_fn_804562E4_000006E4
    lfs f0, lbl_80886B78
    stfs f0, 0x14dc(r3)
    b lbl_fn_804562E4_00000FB0
lbl_fn_804562E4_000006E4:
    lwz r3, lbl_8087F3C0
    mr r4, r15
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lfs f0, lbl_80886B80
    li r11, -0x1
    lfs f1, lbl_80886B78
    li r0, 0x1
    stfs f0, 0x68(r1)
    addi r4, r15, 0x2538
    lwz r3, lbl_8087F3C0
    addi r5, r15, 0xb0
    stfs f0, 0x6c(r1)
    addi r7, r1, 0x5c
    addi r8, r1, 0x68
    addi r9, r1, 0x78
    stfs f0, 0x70(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lis r3, lbl_807549D0@ha
    lfs f1, lbl_80886B78
    addi r14, r3, lbl_807549D0@l
    addi r5, r15, 0x528
    addi r3, r1, 0x10
    li r6, 0x0
    addi r4, r14, 0x189
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80886B78
    addi r16, r1, 0x14c
    stfs f0, 0x12cc(r15)
    addi r17, r1, 0x110
    lfs f22, lbl_80886BD0
    addi r18, r1, 0xe0
    lwz r3, lbl_8087F8A0
    addi r20, r1, 0xf8
    lfs f21, lbl_80886BE4
    addi r19, r1, 0x180
    lwz r24, 0x48(r3)
    addi r22, r1, 0x140
    addi r21, r1, 0x18c
    addi r23, r1, 0x46c
    li r25, 0x0
    b lbl_fn_804562E4_000009DC
lbl_fn_804562E4_000007CC:
    lwz r6, 0x38(r24)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804562E4_000007F8
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_804562E4_000007F8
    li r5, 0x1
lbl_fn_804562E4_000007F8:
    cmpwi r5, 0x0
    beq lbl_fn_804562E4_00000814
    lwz r0, 0x7e0(r24)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_804562E4_00000814
    li r3, 0x1
lbl_fn_804562E4_00000814:
    cmpwi r3, 0x0
    beq lbl_fn_804562E4_00000848
    lwz r0, 0x55c(r24)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_804562E4_0000083C
    lwz r0, 0x560(r24)
    cmpwi r0, 0x1c
    bne lbl_fn_804562E4_0000083C
    li r3, 0x1
lbl_fn_804562E4_0000083C:
    cmpwi r3, 0x0
    bne lbl_fn_804562E4_00000848
    li r4, 0x1
lbl_fn_804562E4_00000848:
    cmpwi r4, 0x0
    beq lbl_fn_804562E4_000009D8
    addi r26, r24, 0xb0
    addi r4, r14, 0x196
    mr r3, r26
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_804562E4_00000874
    li r5, 0x0
    b lbl_fn_804562E4_00000880
lbl_fn_804562E4_00000874:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r5, r3, r0
lbl_fn_804562E4_00000880:
    lfs f0, 0x52c(r15)
    mr r3, r16
    lfs f8, 0xc(r5)
    mr r4, r16
    fadds f10, f22, f0
    lfs f0, 0x1c(r5)
    lfs f11, 0x528(r15)
    stfs f8, 0x158(r1)
    fsubs f12, f0, f10
    lfs f7, 0x2c(r5)
    lfs f9, 0x530(r15)
    fsubs f8, f8, f11
    stfs f12, 0x114(r1)
    fsubs f2, f7, f9
    stfs f8, 0x110(r1)
    psq_l f1, 0x0(r17), 0, 0
    stfs f0, 0x15c(r1)
    stfs f7, 0x160(r1)
    stfs f11, 0x104(r1)
    stfs f10, 0x108(r1)
    stfs f9, 0x10c(r1)
    stfs f2, 0x118(r1)
    psq_st f1, 0x0(r16), 0, 0
    stfs f2, 0x154(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r16), 0, 0
    mr r4, r19
    psq_st f1, 0x0(r18), 0, 0
    addi r3, r1, 0x468
    lfs f2, 0x154(r1)
    addi r5, r15, 0x5f4
    lfs f8, 0x52c(r15)
    lfs f7, 0xe4(r1)
    fmuls f10, f2, f21
    lfs f0, 0xe0(r1)
    fadds f8, f22, f8
    fmuls f11, f7, f21
    lfs f7, 0x530(r15)
    lfs f9, 0x528(r15)
    fmuls f0, f0, f21
    stfs f9, 0x140(r1)
    fadds f12, f7, f10
    fadds f13, f8, f11
    stfs f2, 0xe8(r1)
    fadds f9, f9, f0
    fmr f2, f12
    stfs f13, 0xfc(r1)
    stfs f9, 0xf8(r1)
    stfs f2, 0x188(r1)
    fmr f2, f7
    psq_l f1, 0x0(r20), 0, 0
    stfs f8, 0x144(r1)
    psq_st f1, 0x0(r19), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    stfs f7, 0x148(r1)
    stw r25, 0x49c(r1)
    stw r25, 0x4a0(r1)
    stw r25, 0x4a4(r1)
    stw r25, 0x4a8(r1)
    stfs f0, 0xec(r1)
    stfs f11, 0xf0(r1)
    stfs f10, 0xf4(r1)
    stfs f12, 0x100(r1)
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x194(r1)
    bl fn_80053BD0
    cmpwi r3, 0x0
    beq lbl_fn_804562E4_000009A0
    psq_l f1, 0x0(r23), 0, 0
    lfs f2, 0x474(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x148(r1)
lbl_fn_804562E4_000009A0:
    lwz r26, lbl_8087F048
    li r3, 0x5ab
    bl fn_80219E6C
    lfs f1, lbl_80886B80
    mr r5, r3
    lfs f2, lbl_80886B78
    mr r3, r26
    mr r4, r15
    addi r6, r1, 0x140
    addi r7, r1, 0x14c
    li r8, 0x0
    li r9, 0x24
    li r10, 0x0
    bl fn_800F8574
lbl_fn_804562E4_000009D8:
    lwz r24, 0x14ac(r24)
lbl_fn_804562E4_000009DC:
    cmpwi r24, 0x0
    bne lbl_fn_804562E4_000007CC
    lis r3, lbl_807549B8@ha
    lis r4, 0x4178
    lfs f24, lbl_80886B80
    addi r30, r4, 0x749f
    lfs f25, lbl_80886B78
    addi r25, r1, 0xb0
    lfs f26, lbl_80886BF8
    addi r24, r1, 0x128
    lfd f27, lbl_807549B8@l(r3)
    addi r22, r1, 0xc8
    lfs f28, lbl_80886BC0
    addi r23, r1, 0x168
    lfs f29, lbl_80886BB8
    addi r20, r1, 0x11c
    lfs f30, lbl_80886BD0
    addi r21, r1, 0x174
    lfs f31, lbl_80886BCC
    addi r19, r1, 0x41c
    lfs f22, lbl_80886BE8
    addi r26, r1, 0x198
    lfs f23, lbl_80886BEC
    addi r28, r1, 0x3e8
    addi r27, r1, 0x1f8
    addi r14, r1, 0x258
    li r17, 0x0
    li r31, 0x0
lbl_fn_804562E4_00000A4C:
    xoris r0, r17, 0x8000
    stw r0, 0x4c4(r1)
    addi r3, r1, 0x328
    li r4, 0x79
    lfd f0, 0x4c0(r1)
    stfs f24, 0x134(r1)
    fsubs f0, f0, f27
    stfs f24, 0x138(r1)
    fmuls f0, f29, f0
    stfs f25, 0x13c(r1)
    lfs f1, 0x538(r15)
    fdivs f18, f0, f22
    bl fn_805F8E70
    addi r4, r1, 0x134
    addi r3, r1, 0x328
    mr r5, r4
    bl fn_805F93C0
    fmr f1, f18
    addi r3, r1, 0x3b8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x134
    addi r3, r1, 0x3b8
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x13c(r1)
    addi r3, r1, 0x134
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd4
    fabs f0, f2
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xdc(r1)
    frsp f0, f0
    fcmpo cr0, f0, f23
    bge lbl_fn_804562E4_00000AF8
    lfs f0, 0xd4(r1)
    fcmpo cr0, f0, f24
    ble lbl_fn_804562E4_00000AEC
    lfs f0, lbl_80886BF0
    b lbl_fn_804562E4_00000AF0
lbl_fn_804562E4_00000AEC:
    lfs f0, lbl_80886BF4
lbl_fn_804562E4_00000AF0:
    stfs f0, 0x54(r1)
    b lbl_fn_804562E4_00000B0C
lbl_fn_804562E4_00000AF8:
    frsp f2, f2
    lfs f1, 0xd4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_804562E4_00000B0C:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x2b8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x44
    addi r6, r1, 0xd4
    lfs f18, 0x2c0(r1)
    mr r5, r4
    lfs f19, 0x2bc(r1)
    addi r3, r1, 0x2e8
    lfs f20, 0x2b8(r1)
    lfs f21, 0x2d0(r1)
    lfs f13, 0x2cc(r1)
    lfs f12, 0x2c8(r1)
    lfs f11, 0x2e0(r1)
    lfs f10, 0x2dc(r1)
    lfs f9, 0x2d8(r1)
    lfs f8, 0x2e4(r1)
    lfs f7, 0x2d4(r1)
    lfs f0, 0x2c4(r1)
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    lfs f2, 0xdc(r1)
    stfs f24, 0x318(r1)
    stfs f24, 0x31c(r1)
    stfs f24, 0x320(r1)
    stfs f25, 0x324(r1)
    stfs f20, 0x14(r1)
    stfs f19, 0x18(r1)
    stfs f18, 0x1c(r1)
    stfs f20, 0x2e8(r1)
    stfs f19, 0x2ec(r1)
    stfs f18, 0x2f0(r1)
    stfs f12, 0x20(r1)
    stfs f13, 0x24(r1)
    stfs f21, 0x28(r1)
    stfs f12, 0x2f8(r1)
    stfs f13, 0x2fc(r1)
    stfs f21, 0x300(r1)
    stfs f9, 0x2c(r1)
    stfs f10, 0x30(r1)
    stfs f11, 0x34(r1)
    stfs f9, 0x308(r1)
    stfs f10, 0x30c(r1)
    stfs f11, 0x310(r1)
    stfs f0, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f0, 0x2f4(r1)
    stfs f7, 0x304(r1)
    stfs f8, 0x314(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f23
    bge lbl_fn_804562E4_00000C20
    lfs f0, 0x48(r1)
    fcmpo cr0, f0, f24
    ble lbl_fn_804562E4_00000C10
    lfs f0, lbl_80886BF0
    b lbl_fn_804562E4_00000C14
lbl_fn_804562E4_00000C10:
    lfs f0, lbl_80886BF4
lbl_fn_804562E4_00000C14:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_804562E4_00000C34
lbl_fn_804562E4_00000C20:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_804562E4_00000C34:
    fmr f2, f24
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd4
    stfs f24, 0x58(r1)
    frsp f0, f2
    psq_st f1, 0x0(r3), 0, 0
    fcmpu cr0, f24, f0
    stfs f2, 0xdc(r1)
    stfs f24, 0x414(r1)
    stfs f24, 0x40c(r1)
    stfs f24, 0x408(r1)
    stfs f24, 0x404(r1)
    stfs f24, 0x400(r1)
    stfs f24, 0x3f8(r1)
    stfs f24, 0x3f4(r1)
    stfs f24, 0x3f0(r1)
    stfs f24, 0x3ec(r1)
    stfs f25, 0x410(r1)
    stfs f25, 0x3fc(r1)
    stfs f25, 0x3e8(r1)
    beq lbl_fn_804562E4_00000CDC
    fmr f1, f0
    addi r3, r1, 0x1c8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1c8
    addi r5, r1, 0x198
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_804562E4_00000CDC:
    lfs f1, 0xd8(r1)
    fcmpu cr0, f24, f1
    beq lbl_fn_804562E4_00000D34
    addi r3, r1, 0x228
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x228
    addi r5, r1, 0x1f8
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_804562E4_00000D34:
    lfs f1, 0xd4(r1)
    fcmpu cr0, f24, f1
    beq lbl_fn_804562E4_00000D8C
    addi r3, r1, 0x288
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x288
    addi r5, r1, 0x258
    bl fn_805F89F0
    psq_l f1, 0x0(r14), 0, 0
    psq_l f2, 0x8(r14), 0, 0
    psq_l f3, 0x10(r14), 0, 0
    psq_l f4, 0x18(r14), 0, 0
    psq_l f5, 0x20(r14), 0, 0
    psq_l f6, 0x28(r14), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_804562E4_00000D8C:
    li r3, 0x5ac
    bl fn_80219E6C
    mr r29, r3
    li r16, 0x0
    b lbl_fn_804562E4_00000F5C
lbl_fn_804562E4_00000DA0:
    stfs f24, 0x128(r1)
    stfs f24, 0x12c(r1)
    stfs f25, 0x130(r1)
    lfs f0, 0x8e8(r15)
    fmuls f21, f26, f0
    bl fn_80680CF8
    mulhw r0, r30, r3
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x388
    xoris r0, r0, 0x8000
    stw r0, 0x4bc(r1)
    lfd f0, 0x4b8(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f28
    fmuls f1, f21, f0
    bl fn_805F8E70
    addi r4, r1, 0x128
    addi r3, r1, 0x388
    mr r5, r4
    bl fn_805F93C0
    bl fn_80680CF8
    mulhw r0, r30, r3
    li r4, 0x7a
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x358
    xoris r0, r0, 0x8000
    stw r0, 0x4c4(r1)
    lfd f0, 0x4c0(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f28
    fmuls f1, f29, f0
    bl fn_805F8E70
    addi r4, r1, 0x128
    addi r3, r1, 0x358
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x128
    addi r3, r1, 0x3e8
    mr r5, r4
    bl fn_805F93C0
    psq_l f1, 0x0(r24), 0, 0
    mr r4, r23
    psq_st f1, 0x0(r25), 0, 0
    addi r3, r1, 0x418
    lfs f2, 0x130(r1)
    addi r5, r15, 0x5f4
    lfs f8, 0x52c(r15)
    lfs f7, 0xb4(r1)
    fmuls f10, f2, f31
    lfs f0, 0xb0(r1)
    fadds f8, f30, f8
    fmuls f11, f7, f31
    lfs f7, 0x530(r15)
    lfs f9, 0x528(r15)
    fmuls f0, f0, f31
    stfs f9, 0x11c(r1)
    fadds f12, f7, f10
    fadds f13, f8, f11
    stfs f2, 0xb8(r1)
    fadds f9, f9, f0
    fmr f2, f12
    stfs f13, 0xcc(r1)
    stfs f9, 0xc8(r1)
    stfs f2, 0x170(r1)
    fmr f2, f7
    psq_l f1, 0x0(r22), 0, 0
    stfs f8, 0x120(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r20), 0, 0
    stfs f7, 0x124(r1)
    stw r31, 0x44c(r1)
    stw r31, 0x450(r1)
    stw r31, 0x454(r1)
    stw r31, 0x458(r1)
    stfs f0, 0xbc(r1)
    stfs f11, 0xc0(r1)
    stfs f10, 0xc4(r1)
    stfs f12, 0xd0(r1)
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x17c(r1)
    bl fn_80053BD0
    cmpwi r3, 0x0
    beq lbl_fn_804562E4_00000F20
    psq_l f1, 0x0(r19), 0, 0
    lfs f2, 0x424(r1)
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x124(r1)
lbl_fn_804562E4_00000F20:
    lwz r18, lbl_8087F048
    li r3, 0x5ab
    bl fn_80219E6C
    lfs f1, lbl_80886B80
    mr r5, r3
    lfs f2, lbl_80886B78
    mr r3, r18
    mr r4, r15
    addi r6, r1, 0x11c
    addi r7, r1, 0x128
    li r8, 0x0
    li r9, 0x24
    li r10, 0x0
    bl fn_800F8574
    addi r16, r16, 0x1
lbl_fn_804562E4_00000F5C:
    lwz r0, 0x48(r29)
    cmpw r16, r0
    blt lbl_fn_804562E4_00000DA0
    addi r17, r17, 0x1
    cmpwi r17, 0x6
    blt lbl_fn_804562E4_00000A4C
    lfs f0, lbl_80886B80
    li r14, 0x0
    stfs f0, 0x12cc(r15)
    stw r14, 0x14bc(r15)
    stw r14, 0x14c0(r15)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r15)
    mr r3, r15
    li r4, 0x3
    stw r14, 0x58c(r15)
    bl fn_8016E970
    li r0, 0x1
    stw r14, 0x2558(r15)
    stw r0, 0x14cc(r15)
lbl_fn_804562E4_00000FB0:
    addi r11, r1, 0x510
    psq_l f31, 0x5e8(r1), 0, 0
    lfd f31, 0x5e0(r1)
    psq_l f30, 0x5d8(r1), 0, 0
    lfd f30, 0x5d0(r1)
    psq_l f29, 0x5c8(r1), 0, 0
    lfd f29, 0x5c0(r1)
    psq_l f28, 0x5b8(r1), 0, 0
    lfd f28, 0x5b0(r1)
    psq_l f27, 0x5a8(r1), 0, 0
    lfd f27, 0x5a0(r1)
    psq_l f26, 0x598(r1), 0, 0
    lfd f26, 0x590(r1)
    psq_l f25, 0x588(r1), 0, 0
    lfd f25, 0x580(r1)
    psq_l f24, 0x578(r1), 0, 0
    lfd f24, 0x570(r1)
    psq_l f23, 0x568(r1), 0, 0
    lfd f23, 0x560(r1)
    psq_l f22, 0x558(r1), 0, 0
    lfd f22, 0x550(r1)
    psq_l f21, 0x548(r1), 0, 0
    lfd f21, 0x540(r1)
    psq_l f20, 0x538(r1), 0, 0
    lfd f20, 0x530(r1)
    psq_l f19, 0x528(r1), 0, 0
    lfd f19, 0x520(r1)
    psq_l f18, 0x518(r1), 0, 0
    lfd f18, 0x510(r1)
    bl _restgpr_14
    lwz r0, 0x5f4(r1)
    mtlr r0
    addi r1, r1, 0x5f0
    blr
}

asm void fn_80456DB8(void)
{
    nofralloc
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80456DB8_00001074
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x5a
    blelr
    lfs f0, lbl_80886B7C
    li r5, 0x0
    li r4, 0x1
    li r0, 0x2
    stw r5, 0x14c0(r3)
    stw r4, 0x14bc(r3)
    stw r0, 0x2558(r3)
    stfs f0, 0x255c(r3)
    blr
lbl_fn_80456DB8_00001074:
    cmpwi r0, 0x1
    bnelr
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x3c
    blelr
    lwz r3, lbl_8087F430
    li r4, 0x5a
    li r5, 0x1
    b fn_80370AE4
    blr
}

asm void fn_80456E1C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lis r4, lbl_807549D0@ha
    lfs f1, lbl_80886B78
    addi r4, r4, lbl_807549D0@l
    addi r3, r1, 0x10
    addi r4, r4, 0x17c
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80886B80
    li r3, -0x1
    lfs f1, lbl_80886B78
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x1950
    addi r5, r31, 0xb0
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
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80456F04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x7
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r4, 0x2548(r31)
    li r3, 0x32
    lfs f1, lbl_80886BAC
    li r0, 0x1
    lfs f0, 0x14d0(r31)
    srwi r5, r4, 31
    clrlwi r4, r4, 31
    stw r3, 0x254c(r31)
    fmuls f0, f1, f0
    xor r3, r4, r5
    subf r3, r5, r3
    stw r3, 0x2548(r31)
    stfs f0, 0x2550(r31)
    stfs f0, 0x2554(r31)
    stw r0, 0x2558(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80456F94(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x8
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80886B80
    li r0, -0x1
    lfs f1, lbl_80886B78
    li r31, 0x1
    stfs f0, 0x20(r1)
    addi r4, r30, 0x1940
    addi r5, r30, 0xb0
    addi r7, r1, 0x2c
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x2548(r30)
    li r5, 0x3
    lfs f1, lbl_80886B90
    li r3, 0x58
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    lfs f4, lbl_80886BA4
    subf r4, r4, r0
    lfs f3, lbl_80886BA8
    lfs f2, lbl_80886B7C
    li r0, 0x3c
    stw r31, 0x1980(r30)
    lfs f0, lbl_80886BAC
    stw r5, 0x2558(r30)
    stfs f4, 0x255c(r30)
    stfs f3, 0x14d0(r30)
    stfs f2, 0x14d4(r30)
    stw r4, 0x2548(r30)
    stw r3, 0x254c(r30)
    stfs f1, 0x2550(r30)
    stfs f1, 0x2554(r30)
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
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804570F4(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x334(r1)
    stfd f31, 0x320(r1)
    psq_st f31, 0x328(r1), 0, 0
    stfd f30, 0x310(r1)
    psq_st f30, 0x318(r1), 0, 0
    stfd f29, 0x300(r1)
    psq_st f29, 0x308(r1), 0, 0
    stfd f28, 0x2f0(r1)
    psq_st f28, 0x2f8(r1), 0, 0
    stfd f27, 0x2e0(r1)
    psq_st f27, 0x2e8(r1), 0, 0
    stfd f26, 0x2d0(r1)
    psq_st f26, 0x2d8(r1), 0, 0
    stw r31, 0x2cc(r1)
    mr r31, r3
    stw r30, 0x2c8(r1)
    stw r29, 0x2c4(r1)
    mr r29, r4
    beq lbl_fn_804570F4_00001908
    lfs f1, lbl_80886B78
    li r0, 0x1
    lfs f0, lbl_80886B9C
    li r4, 0x0
    stw r4, 0x14e8(r3)
    li r4, 0x0
    lfs f2, lbl_80886B84
    li r5, 0x13f
    stw r0, 0x14e4(r3)
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    stw r0, 0x1838(r3)
    stfs f1, 0x1738(r3)
    stfs f0, 0x1724(r3)
    addi r3, r3, 0x14ec
    bl fn_80097C08
    lfs f0, lbl_80886BFC
    cmpwi r29, 0x0
    stfs f0, 0x1720(r31)
    stw r29, 0x1908(r31)
    beq lbl_fn_804570F4_00001908
    lwz r0, 0x1904(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804570F4_00001908
    lfs f9, 0x530(r29)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    mr r4, r3
    lfs f8, 0x528(r29)
    lfs f7, 0x528(r31)
    fsubs f9, f9, f0
    lfs f0, lbl_80886B80
    fsubs f7, f8, f7
    stfs f9, 0x10(r1)
    stfs f7, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F98D0
    lfs f9, 0x10(r1)
    addi r4, r1, 0x14
    lfs f8, lbl_80886BE4
    addi r5, r31, 0x18ec
    lfs f7, 0xc(r1)
    addi r3, r1, 0x8
    lfs f0, 0x8(r1)
    fmuls f12, f9, f8
    fmuls f11, f7, f8
    lwz r6, 0x1908(r31)
    fmuls f10, f0, f8
    addi r29, r1, 0x2c
    lfs f7, 0x530(r6)
    lfs f0, 0x52c(r6)
    fsubs f9, f7, f12
    lfs f7, 0x528(r6)
    fsubs f8, f0, f11
    lfs f0, lbl_80886BEC
    fsubs f7, f7, f10
    stfs f10, 0x20(r1)
    fmr f2, f9
    stfs f7, 0x14(r1)
    stfs f8, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x18f4(r31)
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f7, f2
    stfs f11, 0x24(r1)
    stfs f12, 0x28(r1)
    frsp f7, f7
    stfs f9, 0x1c(r1)
    fcmpo cr0, f7, f0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x34(r1)
    bge lbl_fn_804570F4_0000151C
    lfs f7, 0x2c(r1)
    lfs f0, lbl_80886B80
    fcmpo cr0, f7, f0
    ble lbl_fn_804570F4_00001510
    lfs f0, lbl_80886BF0
    b lbl_fn_804570F4_00001514
lbl_fn_804570F4_00001510:
    lfs f0, lbl_80886BF4
lbl_fn_804570F4_00001514:
    stfs f0, 0x54(r1)
    b lbl_fn_804570F4_00001530
lbl_fn_804570F4_0000151C:
    frsp f2, f2
    lfs f1, 0x2c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_804570F4_00001530:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80886B80
    addi r4, r1, 0x5c
    lfs f8, 0x110(r1)
    mr r5, r4
    lfs f9, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f10, 0x108(r1)
    lfs f11, 0x120(r1)
    lfs f12, 0x11c(r1)
    lfs f13, 0x118(r1)
    lfs f31, 0x130(r1)
    lfs f30, 0x12c(r1)
    lfs f29, 0x128(r1)
    lfs f28, 0x134(r1)
    lfs f27, 0x124(r1)
    lfs f26, 0x114(r1)
    lfs f0, lbl_80886B78
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x34(r1)
    stfs f7, 0xf8(r1)
    stfs f7, 0xfc(r1)
    stfs f7, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f10, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f10, 0xc8(r1)
    stfs f9, 0xcc(r1)
    stfs f8, 0xd0(r1)
    stfs f13, 0x80(r1)
    stfs f12, 0x84(r1)
    stfs f11, 0x88(r1)
    stfs f13, 0xd8(r1)
    stfs f12, 0xdc(r1)
    stfs f11, 0xe0(r1)
    stfs f29, 0x74(r1)
    stfs f30, 0x78(r1)
    stfs f31, 0x7c(r1)
    stfs f29, 0xe8(r1)
    stfs f30, 0xec(r1)
    stfs f31, 0xf0(r1)
    stfs f26, 0x68(r1)
    stfs f27, 0x6c(r1)
    stfs f28, 0x70(r1)
    stfs f26, 0xd4(r1)
    stfs f27, 0xe4(r1)
    stfs f28, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    lfs f0, lbl_80886BEC
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_804570F4_0000164C
    lfs f7, 0x60(r1)
    lfs f0, lbl_80886B80
    fcmpo cr0, f7, f0
    ble lbl_fn_804570F4_0000163C
    lfs f0, lbl_80886BF0
    b lbl_fn_804570F4_00001640
lbl_fn_804570F4_0000163C:
    lfs f0, lbl_80886BF4
lbl_fn_804570F4_00001640:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_804570F4_00001660
lbl_fn_804570F4_0000164C:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_804570F4_00001660:
    lfs f2, lbl_80886B80
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r31, 0x18f8
    stfs f2, 0x58(r1)
    addi r3, r1, 0x98
    lfs f3, 0x18f4(r31)
    stfs f2, 0x34(r1)
    frsp f2, f2
    stfs f2, 0x1900(r31)
    lfs f2, 0x18f0(r31)
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f1, 0x18ec(r31)
    bl fn_805F90D0
    addi r3, r1, 0x98
    addi r29, r31, 0x18bc
    psq_l f1, 0x0(r3), 0, 0
    addi r30, r1, 0x258
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lfs f7, lbl_80886B80
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, lbl_80886B78
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    stfs f7, 0x284(r1)
    stfs f7, 0x27c(r1)
    stfs f7, 0x278(r1)
    stfs f7, 0x274(r1)
    stfs f7, 0x270(r1)
    stfs f7, 0x268(r1)
    stfs f7, 0x264(r1)
    stfs f7, 0x260(r1)
    stfs f7, 0x25c(r1)
    stfs f0, 0x280(r1)
    stfs f0, 0x26c(r1)
    stfs f0, 0x258(r1)
    lfs f1, 0x18fc(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_804570F4_0000176C
    addi r3, r1, 0x168
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x168
    addi r5, r1, 0x138
    bl fn_805F89F0
    addi r3, r1, 0x138
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
lbl_fn_804570F4_0000176C:
    lfs f0, lbl_80886B80
    lfs f1, 0x18f8(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_804570F4_000017CC
    addi r3, r1, 0x1c8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1c8
    addi r5, r1, 0x198
    bl fn_805F89F0
    addi r3, r1, 0x198
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
lbl_fn_804570F4_000017CC:
    lfs f0, lbl_80886B80
    lfs f1, 0x1900(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_804570F4_0000182C
    addi r3, r1, 0x228
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x228
    addi r5, r1, 0x1f8
    bl fn_805F89F0
    addi r3, r1, 0x1f8
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
lbl_fn_804570F4_0000182C:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x288
    bl fn_805F89F0
    addi r4, r1, 0x288
    lwz r3, 0x1908(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r8, r31, 0x1914
    psq_l f2, 0x8(r4), 0, 0
    li r5, 0xa
    psq_l f3, 0x10(r4), 0, 0
    li r6, 0x1d8
    psq_l f4, 0x18(r4), 0, 0
    li r7, -0x1
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lfs f11, 0x14d0(r31)
    psq_st f1, 0x0(r29), 0, 0
    lfs f8, lbl_80886B90
    psq_st f2, 0x8(r29), 0, 0
    lfs f0, lbl_80886BE4
    psq_st f3, 0x10(r29), 0, 0
    lwz r4, 0x1904(r31)
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x191c(r31)
    psq_st f1, 0x0(r8), 0, 0
    lfs f7, 0xc(r1)
    lfs f10, 0x10(r1)
    fmuls f13, f7, f11
    lfs f9, 0x8(r1)
    fmuls f31, f10, f11
    lfs f7, 0x1918(r31)
    fmuls f10, f9, f11
    lfs f9, 0x1914(r31)
    fmuls f11, f13, f8
    stfs f10, 0x44(r1)
    fmuls f10, f10, f8
    fmuls f12, f31, f8
    stfs f13, 0x48(r1)
    fadds f8, f7, f11
    fadds f9, f9, f10
    stfs f31, 0x4c(r1)
    fadds f7, f2, f12
    fadds f0, f8, f0
    stfs f10, 0x38(r1)
    stfs f11, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f9, 0x1914(r31)
    stfs f7, 0x191c(r31)
    stfs f0, 0x1918(r31)
    bl fn_801595BC
lbl_fn_804570F4_00001908:
    lwz r0, 0x334(r1)
    psq_l f31, 0x328(r1), 0, 0
    lfd f31, 0x320(r1)
    psq_l f30, 0x318(r1), 0, 0
    lfd f30, 0x310(r1)
    psq_l f29, 0x308(r1), 0, 0
    lfd f29, 0x300(r1)
    psq_l f28, 0x2f8(r1), 0, 0
    lfd f28, 0x2f0(r1)
    psq_l f27, 0x2e8(r1), 0, 0
    lfd f27, 0x2e0(r1)
    psq_l f26, 0x2d8(r1), 0, 0
    lfd f26, 0x2d0(r1)
    lwz r31, 0x2cc(r1)
    lwz r30, 0x2c8(r1)
    lwz r29, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_804576D4(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    stw r31, 0x1fc(r1)
    mr r31, r3
    stw r30, 0x1f8(r1)
    stw r29, 0x1f4(r1)
    lwz r8, 0x1908(r3)
    cmpwi r8, 0x0
    beq lbl_fn_804576D4_00001A30
    lwz r7, 0x38(r8)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_804576D4_000019C0
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_804576D4_000019C0
    li r4, 0x1
lbl_fn_804576D4_000019C0:
    cmpwi r4, 0x0
    beq lbl_fn_804576D4_000019DC
    lwz r4, 0x7e0(r8)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_804576D4_000019DC
    li r0, 0x1
lbl_fn_804576D4_000019DC:
    cmpwi r0, 0x0
    beq lbl_fn_804576D4_00001A10
    lwz r0, 0x55c(r8)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_804576D4_00001A04
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_804576D4_00001A04
    li r4, 0x1
lbl_fn_804576D4_00001A04:
    cmpwi r4, 0x0
    bne lbl_fn_804576D4_00001A10
    li r5, 0x1
lbl_fn_804576D4_00001A10:
    cmpwi r5, 0x0
    beq lbl_fn_804576D4_00001A30
    lwz r0, 0x55c(r8)
    cmpwi r0, 0x6
    bne lbl_fn_804576D4_00001A30
    lwz r0, 0x560(r8)
    cmpwi r0, 0x11
    beq lbl_fn_804576D4_00001B5C
lbl_fn_804576D4_00001A30:
    cmpwi r8, 0x0
    beq lbl_fn_804576D4_00001B4C
    lwz r7, 0x38(r8)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_804576D4_00001A64
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_804576D4_00001A64
    li r4, 0x1
lbl_fn_804576D4_00001A64:
    cmpwi r4, 0x0
    beq lbl_fn_804576D4_00001A80
    lwz r4, 0x7e0(r8)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_804576D4_00001A80
    li r0, 0x1
lbl_fn_804576D4_00001A80:
    cmpwi r0, 0x0
    beq lbl_fn_804576D4_00001AB4
    lwz r0, 0x55c(r8)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_804576D4_00001AA8
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_804576D4_00001AA8
    li r4, 0x1
lbl_fn_804576D4_00001AA8:
    cmpwi r4, 0x0
    bne lbl_fn_804576D4_00001AB4
    li r5, 0x1
lbl_fn_804576D4_00001AB4:
    cmpwi r5, 0x0
    beq lbl_fn_804576D4_00001B3C
    lfs f9, 0x530(r8)
    lfs f0, 0x530(r3)
    lfs f7, 0x528(r3)
    addi r3, r1, 0x20
    lfs f8, 0x528(r8)
    fsubs f9, f9, f0
    lfs f0, lbl_80886B80
    mr r4, r3
    fsubs f7, f8, f7
    stfs f9, 0x28(r1)
    stfs f7, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_805F98D0
    lfs f8, 0x20(r1)
    addi r3, r1, 0x20
    lfs f9, lbl_80886C00
    li r4, -0x1
    lfs f7, 0x24(r1)
    lfs f0, 0x28(r1)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f2, f0, f9
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x1908(r31)
    psq_st f1, 0x6b8(r3), 0, 0
    stfs f2, 0x6c0(r3)
    lwz r3, 0x1908(r31)
    bl fn_8015AC48
    b lbl_fn_804576D4_00001B44
lbl_fn_804576D4_00001B3C:
    li r0, 0x0
    stw r0, 0xf1c(r8)
lbl_fn_804576D4_00001B44:
    li r0, 0x0
    stw r0, 0x1908(r31)
lbl_fn_804576D4_00001B4C:
    li r0, 0x0
    stw r0, 0x14e8(r31)
    stw r0, 0x14e4(r31)
    b lbl_fn_804576D4_00001E94
lbl_fn_804576D4_00001B5C:
    lfs f29, 0x1720(r3)
    li r4, 0x0
    addi r3, r3, 0x14ec
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_804576D4_00001BF8
    lfs f7, lbl_80886B78
    li r3, 0x0
    lfs f0, lbl_80886B9C
    li r4, 0x2
    li r0, 0x1
    stw r3, 0x14e8(r31)
    lfs f1, lbl_80886B80
    addi r3, r31, 0x14ec
    stw r4, 0x14e4(r31)
    li r4, 0x0
    lfs f2, lbl_80886B84
    li r5, 0x140
    stw r0, 0x1838(r31)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    stfs f7, 0x1738(r31)
    stfs f0, 0x1724(r31)
    bl fn_80097C08
    lwz r3, 0x1908(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804576D4_00001E94
    lfs f1, lbl_80886B80
    addi r3, r3, 0xb0
    lfs f2, lbl_80886B84
    li r4, 0x0
    li r5, 0x1d8
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_804576D4_00001E94
lbl_fn_804576D4_00001BF8:
    lfs f0, 0x1918(r31)
    addi r5, r1, 0x2c
    lfs f10, 0x18f0(r31)
    addi r4, r31, 0x18ec
    lfs f7, 0x191c(r31)
    addi r3, r1, 0x1b8
    fsubs f30, f0, f10
    lfs f11, 0x18f4(r31)
    lfs f0, 0x1914(r31)
    fsubs f29, f7, f11
    lfs f8, lbl_80886C04
    lfs f9, 0x18ec(r31)
    fmuls f13, f30, f8
    lfs f7, lbl_80886B80
    fsubs f12, f0, f9
    fmuls f31, f29, f8
    lfs f0, lbl_80886B78
    stfs f12, 0x14(r1)
    fmuls f12, f12, f8
    fadds f11, f31, f11
    stfs f30, 0x18(r1)
    fadds f10, f13, f10
    fadds f8, f12, f9
    stfs f29, 0x1c(r1)
    fmr f2, f11
    stfs f8, 0x2c(r1)
    stfs f10, 0x30(r1)
    frsp f3, f2
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x18f4(r31)
    lfs f1, 0x18ec(r31)
    stfs f12, 0x8(r1)
    lfs f2, 0x18f0(r31)
    stfs f13, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f11, 0x34(r1)
    stfs f7, 0x18e8(r31)
    stfs f7, 0x18e0(r31)
    stfs f7, 0x18dc(r31)
    stfs f7, 0x18d8(r31)
    stfs f7, 0x18d4(r31)
    stfs f7, 0x18cc(r31)
    stfs f7, 0x18c8(r31)
    stfs f7, 0x18c4(r31)
    stfs f7, 0x18c0(r31)
    stfs f0, 0x18e4(r31)
    stfs f0, 0x18d0(r31)
    stfs f0, 0x18bc(r31)
    bl fn_805F90D0
    addi r3, r1, 0x1b8
    addi r30, r31, 0x18bc
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x68
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f7, lbl_80886B80
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, lbl_80886B78
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    stfs f7, 0x94(r1)
    stfs f7, 0x8c(r1)
    stfs f7, 0x88(r1)
    stfs f7, 0x84(r1)
    stfs f7, 0x80(r1)
    stfs f7, 0x78(r1)
    stfs f7, 0x74(r1)
    stfs f7, 0x70(r1)
    stfs f7, 0x6c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x68(r1)
    lfs f1, 0x18fc(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_804576D4_00001D90
    addi r3, r1, 0x158
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x158
    addi r5, r1, 0x188
    bl fn_805F89F0
    addi r3, r1, 0x188
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_804576D4_00001D90:
    lfs f0, lbl_80886B80
    lfs f1, 0x18f8(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_804576D4_00001DF0
    addi r3, r1, 0xf8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xf8
    addi r5, r1, 0x128
    bl fn_805F89F0
    addi r3, r1, 0x128
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_804576D4_00001DF0:
    lfs f0, lbl_80886B80
    lfs f1, 0x1900(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_804576D4_00001E50
    addi r3, r1, 0x98
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x98
    addi r5, r1, 0xc8
    bl fn_805F89F0
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_804576D4_00001E50:
    mr r3, r30
    mr r4, r29
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_804576D4_00001E94:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    lwz r31, 0x1fc(r1)
    lwz r30, 0x1f8(r1)
    lwz r29, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}
