#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004D388(void);
extern void fn_80063D3C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800DD3FC(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80105BD8(void);
extern void fn_80108C10(void);
extern void fn_80109828(void);
extern void fn_80126214(void);
extern void fn_8012DF7C(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80144710(void);
extern void fn_80148B0C(void);
extern void fn_80155D70(void);
extern void fn_8015B808(void);
extern void fn_8016E970(void);
extern void fn_80176548(void);
extern void fn_801765D8(void);
extern void fn_80219E6C(void);
extern void fn_802CC19C(void);
extern void fn_802CC4C8(void);
extern void fn_802CC834(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80746DD0[];
extern u8 lbl_80746DD8[];
extern u8 lbl_80746DEC[];
extern u8 lbl_807C83B8[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_808843E8;
extern u32 lbl_808843EC;
extern u32 lbl_808843F0;
extern u32 lbl_808843F4;
extern u32 lbl_808843F8;
extern u32 lbl_80884410;
extern u32 lbl_8088441C;
extern u32 lbl_80884420;
extern u32 lbl_8088442C;
extern u32 lbl_80884430;
extern u32 lbl_80884434;
extern u32 lbl_80884438;
extern u32 lbl_8088443C;
extern u32 lbl_80884440;
extern u32 lbl_80884444;
extern u32 lbl_80884448;
extern u32 lbl_8088444C;
extern u32 lbl_80884450;
extern u32 lbl_80884454;
extern u32 lbl_80884458;
extern u32 lbl_8088445C;
extern u32 lbl_80884460;
extern u32 lbl_80884464;
extern u32 lbl_80884468;
extern u32 lbl_8088446C;
extern u32 lbl_80884470;
extern u32 lbl_80884474;
extern u32 lbl_80884478;
extern u32 lbl_8088447C;
extern u32 lbl_80884480;
extern u32 lbl_80884484;
extern u32 lbl_80884488;
extern u32 lbl_8088448C;
extern u32 lbl_80884490;

/* Function declarations */
void fn_802C9750(void);
void fn_802C9880(void);
void fn_802C9BF8(void);
void fn_802CA490(void);
void fn_802CA8C0(void);
void fn_802CAFB8(void);

asm void fn_802C9750(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802C9750_00000060
    lwz r0, 0x560(r3)
    cmpwi r0, 0x4
    beq lbl_fn_802C9750_00000114
    cmpwi r0, 0x16
    beq lbl_fn_802C9750_00000114
    cmpwi r0, 0x17
    beq lbl_fn_802C9750_00000114
    cmpwi r0, 0x3b
    beq lbl_fn_802C9750_00000114
    cmpwi r0, 0x3f
    beq lbl_fn_802C9750_00000114
    cmpwi r0, 0x27
    bne lbl_fn_802C9750_00000060
    b lbl_fn_802C9750_00000114
lbl_fn_802C9750_00000060:
    lfs f1, 0x570(r3)
    lfs f0, lbl_8088442C
    fcmpo cr0, f1, f0
    bge lbl_fn_802C9750_000000A0
    lfs f1, lbl_808843E8
    li r4, 0x0
    lfs f2, lbl_808843F8
    li r5, 0x2
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f0, lbl_808843F4
    stfs f0, 0x2e8(r31)
    b lbl_fn_802C9750_00000114
lbl_fn_802C9750_000000A0:
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x20
    bne lbl_fn_802C9750_000000D0
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802C9750_000000D0
    lfs f0, lbl_808843E8
    stfs f0, 0x2e4(r31)
lbl_fn_802C9750_000000D0:
    lfs f1, lbl_808843E8
    addi r3, r31, 0xb0
    lfs f2, lbl_808843F8
    li r4, 0x0
    li r5, 0x20
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xf
    bne lbl_fn_802C9750_0000010C
    lfs f0, lbl_80884430
    stfs f0, 0x2e8(r31)
    b lbl_fn_802C9750_00000114
lbl_fn_802C9750_0000010C:
    lfs f0, lbl_80884434
    stfs f0, 0x2e8(r31)
lbl_fn_802C9750_00000114:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802C9880(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r4, r1, 0x80
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    lfs f31, lbl_808843E8
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    lfs f30, lbl_808843F4
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802C9880_00000440
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r3, r29, 0x1088
    lfs f2, 0x1090(r29)
    psq_l f1, 0x0(r3), 0, 0
    addi r31, r1, 0x74
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x7c(r1)
    lwz r0, 0x58c(r29)
    cmpwi r0, 0xf
    bne lbl_fn_802C9880_000001D8
    lfs f0, lbl_80884430
    mr r3, r31
    fmuls f30, f30, f0
    bl fn_805F9940
    fmr f31, f1
    b lbl_fn_802C9880_0000023C
lbl_fn_802C9880_000001D8:
    lwz r4, 0x14b0(r29)
    addi r3, r1, 0x68
    lfs f4, lbl_80884434
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r29)
    fmuls f30, f30, f4
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    lfs f0, lbl_80884438
    fcmpo cr0, f1, f0
    bge lbl_fn_802C9880_00000230
    lfs f31, lbl_808843E8
    b lbl_fn_802C9880_0000023C
lbl_fn_802C9880_00000230:
    mr r3, r31
    bl fn_805F9940
    fmr f31, f1
lbl_fn_802C9880_0000023C:
    lfs f0, lbl_8088443C
    fcmpo cr0, f31, f0
    ble lbl_fn_802C9880_00000428
    addi r3, r1, 0x74
    addi r31, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x7c(r1)
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884440
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802C9880_000002B8
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C9880_000002AC
    lfs f0, lbl_80884444
    b lbl_fn_802C9880_000002B0
lbl_fn_802C9880_000002AC:
    lfs f0, lbl_80884448
lbl_fn_802C9880_000002B0:
    stfs f0, 0x48(r1)
    b lbl_fn_802C9880_000002CC
lbl_fn_802C9880_000002B8:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802C9880_000002CC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808843E8
    addi r4, r1, 0x38
    lfs f28, 0x98(r1)
    mr r5, r4
    lfs f29, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_808843F4
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f29, 0xc4(r1)
    stfs f28, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884440
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C9880_000003E8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C9880_000003D8
    lfs f0, lbl_80884444
    b lbl_fn_802C9880_000003DC
lbl_fn_802C9880_000003D8:
    lfs f0, lbl_80884448
lbl_fn_802C9880_000003DC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802C9880_000003FC
lbl_fn_802C9880_000003E8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802C9880_000003FC:
    lfs f2, lbl_808843E8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x80
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_802C9880_00000450
lbl_fn_802C9880_00000428:
    psq_l f1, 0x534(r29), 0, 0
    addi r3, r1, 0x80
    lfs f2, 0x53c(r29)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802C9880_00000450
lbl_fn_802C9880_00000440:
    cmpwi r0, 0x6
    bne lbl_fn_802C9880_00000450
    bl fn_8013A258
    b lbl_fn_802C9880_0000046C
lbl_fn_802C9880_00000450:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0x80
    fmuls f2, f0, f30
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_802C9880_0000046C:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_802C9BF8(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    addi r4, r1, 0xe0
    stfd f31, 0x410(r1)
    psq_st f31, 0x418(r1), 0, 0
    stfd f30, 0x400(r1)
    psq_st f30, 0x408(r1), 0, 0
    stfd f29, 0x3f0(r1)
    psq_st f29, 0x3f8(r1), 0, 0
    stw r31, 0x3ec(r1)
    mr r31, r3
    stw r30, 0x3e8(r1)
    stw r29, 0x3e4(r1)
    lwz r5, 0x14b0(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0xd4
    lfs f5, 0xe4(r1)
    lfs f3, 0xe0(r1)
    fsubs f4, f5, f4
    stfs f2, 0xe8(r1)
    fsubs f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    stfs f6, 0xdc(r1)
    bl fn_805F9940
    fmr f31, f1
    addi r3, r1, 0x1d0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r0, 0x14c8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802C9BF8_0000066C
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x1d0
    lwz r4, 0x3c4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802C9BF8_00000560
    b lbl_fn_802C9BF8_00000564
lbl_fn_802C9BF8_00000560:
    la r4, lbl_808813D0
lbl_fn_802C9BF8_00000564:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x1d0
    bl fn_80109828
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802C9BF8_000005C8
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x1d0
    lwz r4, 0x3cc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802C9BF8_000005A4
    b lbl_fn_802C9BF8_000005A8
lbl_fn_802C9BF8_000005A4:
    la r4, lbl_808813D0
lbl_fn_802C9BF8_000005A8:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x1d0
    bl fn_80109828
    b lbl_fn_802C9BF8_00000600
lbl_fn_802C9BF8_000005C8:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x1d0
    lwz r4, 0x3d4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802C9BF8_000005E0
    b lbl_fn_802C9BF8_000005E4
lbl_fn_802C9BF8_000005E0:
    la r4, lbl_808813D0
lbl_fn_802C9BF8_000005E4:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x1d0
    bl fn_80109828
lbl_fn_802C9BF8_00000600:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stw r30, 0x14c8(r31)
    b lbl_fn_802C9BF8_00000D0C
lbl_fn_802C9BF8_0000066C:
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802C9BF8_00000D0C
    addi r3, r1, 0xd4
    addi r30, r1, 0xbc
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0xdc(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F98D0
    lfs f2, 0xc4(r1)
    addi r29, r1, 0xc8
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884440
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xd0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802C9BF8_000006E8
    lfs f3, 0xc8(r1)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C9BF8_000006DC
    lfs f0, lbl_80884444
    b lbl_fn_802C9BF8_000006E0
lbl_fn_802C9BF8_000006DC:
    lfs f0, lbl_80884448
lbl_fn_802C9BF8_000006E0:
    stfs f0, 0xa8(r1)
    b lbl_fn_802C9BF8_000006FC
lbl_fn_802C9BF8_000006E8:
    frsp f2, f2
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xa8(r1)
lbl_fn_802C9BF8_000006FC:
    lfs f0, 0xa8(r1)
    addi r3, r1, 0x160
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808843E8
    addi r4, r1, 0x98
    lfs f29, 0x168(r1)
    mr r5, r4
    lfs f30, 0x164(r1)
    addi r3, r1, 0x190
    lfs f13, 0x160(r1)
    lfs f12, 0x178(r1)
    lfs f11, 0x174(r1)
    lfs f10, 0x170(r1)
    lfs f9, 0x188(r1)
    lfs f8, 0x184(r1)
    lfs f7, 0x180(r1)
    lfs f6, 0x18c(r1)
    lfs f5, 0x17c(r1)
    lfs f4, 0x16c(r1)
    lfs f0, lbl_808843F4
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x1c0(r1)
    stfs f3, 0x1c4(r1)
    stfs f3, 0x1c8(r1)
    stfs f0, 0x1cc(r1)
    stfs f13, 0x68(r1)
    stfs f30, 0x6c(r1)
    stfs f29, 0x70(r1)
    stfs f13, 0x190(r1)
    stfs f30, 0x194(r1)
    stfs f29, 0x198(r1)
    stfs f10, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f10, 0x1a0(r1)
    stfs f11, 0x1a4(r1)
    stfs f12, 0x1a8(r1)
    stfs f7, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f7, 0x1b0(r1)
    stfs f8, 0x1b4(r1)
    stfs f9, 0x1b8(r1)
    stfs f4, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f4, 0x19c(r1)
    stfs f5, 0x1ac(r1)
    stfs f6, 0x1bc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F9750
    lfs f2, 0xa0(r1)
    lfs f0, lbl_80884440
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C9BF8_00000818
    lfs f3, 0x9c(r1)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C9BF8_00000808
    lfs f0, lbl_80884444
    b lbl_fn_802C9BF8_0000080C
lbl_fn_802C9BF8_00000808:
    lfs f0, lbl_80884448
lbl_fn_802C9BF8_0000080C:
    fneg f0, f0
    stfs f0, 0xa4(r1)
    b lbl_fn_802C9BF8_0000082C
lbl_fn_802C9BF8_00000818:
    lfs f1, 0x9c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa4(r1)
lbl_fn_802C9BF8_0000082C:
    addi r3, r1, 0xa4
    lfs f2, lbl_808843E8
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80746DD8@ha
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x538(r31)
    lfs f3, 0xcc(r1)
    stfs f2, 0xd0(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_8088444C
    stfs f2, 0xac(r1)
    lfd f2, lbl_80746DD8@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884450
    fcmpo cr0, f3, f0
    ble lbl_fn_802C9BF8_0000087C
    lfs f0, lbl_80884454
    fsubs f3, f3, f0
lbl_fn_802C9BF8_0000087C:
    lfs f0, lbl_80884458
    fcmpo cr0, f3, f0
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802C9BF8_00000A08
    lwz r3, 0x1528(r31)
    li r4, 0x1
    lwz r0, 0x152c(r31)
    cmpw r3, r0
    blt lbl_fn_802C9BF8_000008AC
    li r4, 0x0
    stw r4, 0x1528(r31)
lbl_fn_802C9BF8_000008AC:
    lfs f0, lbl_80884438
    fcmpo cr0, f31, f0
    blt lbl_fn_802C9BF8_000008C4
    lfs f0, lbl_8088445C
    fcmpo cr0, f0, f31
    bge lbl_fn_802C9BF8_000008C8
lbl_fn_802C9BF8_000008C4:
    li r4, 0x0
lbl_fn_802C9BF8_000008C8:
    cmpwi r4, 0x0
    beq lbl_fn_802C9BF8_00000948
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x1d0
    lwz r4, 0x3dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802C9BF8_000008E8
    b lbl_fn_802C9BF8_000008EC
lbl_fn_802C9BF8_000008E8:
    la r4, lbl_808813D0
lbl_fn_802C9BF8_000008EC:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x1d0
    bl fn_80109828
    lfs f0, lbl_808843E8
    mr r3, r31
    stfs f0, 0xb0(r1)
    addi r5, r1, 0xb0
    li r4, 0x0
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    bl fn_802CC19C
    lfs f3, 0x14cc(r31)
    lfs f0, 0x1550(r31)
    lwz r3, 0x1528(r31)
    fsubs f0, f3, f0
    addi r0, r3, 0x1
    stw r0, 0x1528(r31)
    stfs f0, 0x14cc(r31)
    b lbl_fn_802C9BF8_00000D0C
lbl_fn_802C9BF8_00000948:
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x3d0(r1)
    lis r3, lbl_80746DD0@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_80746DD0@l(r3)
    stw r0, 0x3d4(r1)
    lfs f3, 0x7d8(r31)
    lfd f4, 0x3d0(r1)
    lfs f0, lbl_808843F0
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_802C9BF8_0000098C
    li r0, 0x2
    stw r0, 0x150c(r31)
    b lbl_fn_802C9BF8_000009AC
lbl_fn_802C9BF8_0000098C:
    lfs f0, lbl_8088441C
    fcmpo cr0, f3, f0
    bge lbl_fn_802C9BF8_000009A4
    li r0, 0x2
    stw r0, 0x150c(r31)
    b lbl_fn_802C9BF8_000009AC
lbl_fn_802C9BF8_000009A4:
    li r0, 0x1
    stw r0, 0x150c(r31)
lbl_fn_802C9BF8_000009AC:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x1d0
    lwz r4, 0x3e4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802C9BF8_000009C4
    b lbl_fn_802C9BF8_000009C8
lbl_fn_802C9BF8_000009C4:
    la r4, lbl_808813D0
lbl_fn_802C9BF8_000009C8:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x1d0
    bl fn_80109828
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    bl fn_802CC4C8
    lfs f3, 0x14cc(r31)
    lfs f0, 0x1554(r31)
    fsubs f0, f3, f0
    stfs f0, 0x14cc(r31)
    b lbl_fn_802C9BF8_00000D0C
lbl_fn_802C9BF8_00000A08:
    cmpwi r0, 0x1
    bne lbl_fn_802C9BF8_00000D0C
    lfs f3, 0x14cc(r31)
    lfs f0, lbl_808843F4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802C9BF8_00000A64
    li r0, 0x0
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F1E4
    lwz r4, 0x3ec(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802C9BF8_00000A40
    b lbl_fn_802C9BF8_00000A44
lbl_fn_802C9BF8_00000A40:
    la r4, lbl_808813D0
lbl_fn_802C9BF8_00000A44:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x1d0
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x1d0
    bl fn_80109828
lbl_fn_802C9BF8_00000A64:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x2d
    ble lbl_fn_802C9BF8_00000D0C
    lfs f0, lbl_80884438
    fcmpo cr0, f31, f0
    bge lbl_fn_802C9BF8_00000D0C
    lwz r3, lbl_8087F1E4
    lwz r4, 0x3f4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802C9BF8_00000A90
    b lbl_fn_802C9BF8_00000A94
lbl_fn_802C9BF8_00000A90:
    la r4, lbl_808813D0
lbl_fn_802C9BF8_00000A94:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x1d0
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x1d0
    bl fn_80109828
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x145
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14b0(r31)
    addi r3, r1, 0x8
    lfs f3, lbl_808843E8
    addi r29, r1, 0x14
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r31)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r31)
    stfs f3, 0xc(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_80884440
    stfs f2, 0x10(r1)
    stfs f4, 0x8(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802C9BF8_00000B90
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802C9BF8_00000B84
    lfs f0, lbl_80884444
    b lbl_fn_802C9BF8_00000B88
lbl_fn_802C9BF8_00000B84:
    lfs f0, lbl_80884448
lbl_fn_802C9BF8_00000B88:
    stfs f0, 0x24(r1)
    b lbl_fn_802C9BF8_00000BA4
lbl_fn_802C9BF8_00000B90:
    fmr f2, f4
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_802C9BF8_00000BA4:
    lfs f0, 0x24(r1)
    addi r3, r1, 0x130
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808843E8
    addi r4, r1, 0x2c
    lfs f4, 0x138(r1)
    mr r5, r4
    lfs f5, 0x134(r1)
    addi r3, r1, 0xf0
    lfs f6, 0x130(r1)
    lfs f7, 0x148(r1)
    lfs f8, 0x144(r1)
    lfs f9, 0x140(r1)
    lfs f10, 0x158(r1)
    lfs f11, 0x154(r1)
    lfs f12, 0x150(r1)
    lfs f13, 0x15c(r1)
    lfs f29, 0x14c(r1)
    lfs f30, 0x13c(r1)
    lfs f0, lbl_808843F4
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f3, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0xf0(r1)
    stfs f5, 0xf4(r1)
    stfs f4, 0xf8(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f7, 0x108(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x110(r1)
    stfs f11, 0x114(r1)
    stfs f10, 0x118(r1)
    stfs f30, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0xfc(r1)
    stfs f29, 0x10c(r1)
    stfs f13, 0x11c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80884440
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C9BF8_00000CC0
    lfs f3, 0x30(r1)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C9BF8_00000CB0
    lfs f0, lbl_80884444
    b lbl_fn_802C9BF8_00000CB4
lbl_fn_802C9BF8_00000CB0:
    lfs f0, lbl_80884448
lbl_fn_802C9BF8_00000CB4:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_802C9BF8_00000CD4
lbl_fn_802C9BF8_00000CC0:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_802C9BF8_00000CD4:
    lfs f0, lbl_808843E8
    addi r3, r1, 0x20
    psq_l f1, 0x0(r3), 0, 0
    li r4, 0x5d
    fmr f2, f0
    psq_st f1, 0x534(r31), 0, 0
    li r5, 0x2
    stfs f2, 0x1c(r1)
    frsp f2, f2
    stfs f0, 0x28(r1)
    stfs f2, 0x53c(r31)
    psq_st f1, 0x0(r29), 0, 0
    lwz r3, lbl_8087F430
    bl fn_80370AE4
lbl_fn_802C9BF8_00000D0C:
    lwz r0, 0x424(r1)
    psq_l f31, 0x418(r1), 0, 0
    lfd f31, 0x410(r1)
    psq_l f30, 0x408(r1), 0, 0
    lfd f30, 0x400(r1)
    psq_l f29, 0x3f8(r1), 0, 0
    lfd f29, 0x3f0(r1)
    lwz r31, 0x3ec(r1)
    lwz r30, 0x3e8(r1)
    lwz r29, 0x3e4(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_802CA490(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stw r31, 0x2bc(r1)
    mr r31, r3
    stw r30, 0x2b8(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CA490_00000E10
    lfs f3, 0x14cc(r31)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802CA490_00000DE0
    li r0, 0x1
    stw r0, 0x14c0(r31)
    addi r3, r1, 0xb0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0xb0
    lwz r4, 0x3fc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802CA490_00000DC0
    b lbl_fn_802CA490_00000DC4
lbl_fn_802CA490_00000DC0:
    la r4, lbl_808813D0
lbl_fn_802CA490_00000DC4:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0xb0
    bl fn_80109828
lbl_fn_802CA490_00000DE0:
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802CA490_00001150
lbl_fn_802CA490_00000E10:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884460
    fcmpo cr0, f3, f0
    ble lbl_fn_802CA490_00000F58
    lfs f0, lbl_80884464
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802CA490_00000F58
    lwz r0, 0x153c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802CA490_00000F28
    addi r3, r31, 0x1530
    lis r6, 0x4330
    psq_l f1, 0x0(r3), 0, 0
    lis r5, lbl_80746DD0@ha
    lfs f2, 0x1538(r31)
    addi r30, r1, 0x50
    stfs f2, 0x58(r1)
    li r0, 0x0
    lwz r7, lbl_8087F0A8
    mr r4, r31
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r1, 0x40
    lfd f5, lbl_80746DD0@l(r5)
    addi r5, r31, 0x528
    lwz r7, 0x30(r7)
    stw r6, 0x2b0(r1)
    mullw r6, r7, r7
    lfs f3, lbl_80884468
    lfs f0, 0x54(r1)
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    xoris r6, r6, 0x8000
    stw r6, 0x2b4(r1)
    lfd f4, 0x2b0(r1)
    stw r0, 0x9c(r1)
    fsubs f4, f4, f5
    stw r0, 0xa0(r1)
    fdivs f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x54(r1)
    bl fn_80176548
    lwz r3, lbl_8087EE98
    mr r6, r30
    lfs f1, 0x4c(r1)
    addi r4, r1, 0x60
    addi r5, r1, 0x40
    addi r8, r31, 0x5b8
    lis r7, 0x2000
    li r9, 0x0
    bl fn_8004D388
    addi r3, r1, 0x70
    lfs f2, 0x78(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x5ac(r31)
    lfs f6, 0x528(r31)
    lfs f5, 0x5a4(r31)
    fsubs f0, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x5a8(r31)
    fsubs f5, f6, f5
    stfs f0, 0x530(r31)
    fsubs f3, f4, f3
    stfs f5, 0x528(r31)
    stfs f3, 0x52c(r31)
    lfs f0, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f0, 0x52c(r31)
    b lbl_fn_802CA490_00000F58
lbl_fn_802CA490_00000F28:
    lfs f3, 0x528(r31)
    lfs f0, 0x1530(r31)
    lfs f5, 0x52c(r31)
    fadds f6, f3, f0
    lfs f4, 0x1534(r31)
    lfs f3, 0x530(r31)
    lfs f0, 0x1538(r31)
    fadds f4, f5, f4
    stfs f6, 0x528(r31)
    fadds f0, f3, f0
    stfs f4, 0x52c(r31)
    stfs f0, 0x530(r31)
lbl_fn_802CA490_00000F58:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884464
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802CA490_00000FD0
    lfs f0, lbl_8088446C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802CA490_00000FD0
    li r3, 0x67c
    bl fn_80219E6C
    addi r7, r31, 0x528
    mr r5, r3
    lfs f2, 0x530(r31)
    li r0, -0x1
    psq_l f1, 0x0(r7), 0, 0
    addi r6, r1, 0x34
    lwz r3, lbl_8087F048
    mr r4, r31
    psq_st f1, 0x0(r6), 0, 0
    addi r8, r31, 0x534
    lfs f1, lbl_808843E8
    li r9, 0x0
    stw r0, 0x8(r1)
    li r10, 0x1e
    stw r0, 0xc(r1)
    stfs f2, 0x3c(r1)
    lwz r6, 0x590(r31)
    lfs f2, lbl_808843F4
    bl fn_800FAB80
lbl_fn_802CA490_00000FD0:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_8088446C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802CA490_00001084
    lfs f0, lbl_80884470
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802CA490_00001084
    li r3, 0x67c
    bl fn_80219E6C
    lis r4, lbl_80746DEC@ha
    mr r30, r3
    addi r4, r4, lbl_80746DEC@l
    addi r3, r31, 0xb0
    addi r4, r4, 0xa5
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802CA490_00001028
    li r3, 0x0
    b lbl_fn_802CA490_00001034
lbl_fn_802CA490_00001028:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802CA490_00001034:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f3, 0x1c(r3)
    mr r4, r31
    lfs f4, 0xc(r3)
    mr r5, r30
    lwz r3, lbl_8087F048
    addi r7, r31, 0x528
    stfs f4, 0x28(r1)
    addi r8, r31, 0x534
    lfs f1, lbl_808843E8
    li r9, 0x0
    stw r0, 0x8(r1)
    li r10, 0x1e
    lfs f2, lbl_808843F4
    stw r0, 0xc(r1)
    stfs f3, 0x2c(r1)
    lwz r6, 0x590(r31)
    stfs f0, 0x30(r1)
    bl fn_800FAB80
lbl_fn_802CA490_00001084:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884460
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802CA490_00001120
    lfs f0, lbl_80884464
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802CA490_00001120
    lis r4, lbl_80746DEC@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80746DEC@l
    li r5, 0x0
    addi r4, r4, 0xaf
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802CA490_000010D0
    li r3, 0x0
    b lbl_fn_802CA490_000010DC
lbl_fn_802CA490_000010D0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802CA490_000010DC:
    lfs f0, 0x2c(r3)
    addi r6, r1, 0x1c
    lfs f3, 0x1c(r3)
    addi r4, r1, 0x10
    lfs f4, 0xc(r3)
    fmr f2, f0
    stfs f4, 0x1c(r1)
    mr r3, r31
    li r5, 0x64
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f1, lbl_80884474
    stfs f2, 0x18(r1)
    lfs f2, lbl_80884478
    stfs f0, 0x24(r1)
    bl fn_802CC834
lbl_fn_802CA490_00001120:
    lwz r0, 0x154c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802CA490_00001150
    li r3, 0x67c
    bl fn_80219E6C
    mr r4, r3
    lwz r3, lbl_8087EEB0
    lfs f1, 0x58(r4)
    addi r4, r31, 0x528
    lfs f2, lbl_808843E8
    lis r5, 0xffff
    bl fn_80063D3C
lbl_fn_802CA490_00001150:
    lwz r0, 0x2d4(r1)
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    lwz r31, 0x2bc(r1)
    lwz r30, 0x2b8(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_802CA8C0(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x1d4(r1)
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    stw r31, 0x19c(r1)
    stw r30, 0x198(r1)
    mr r30, r3
    stw r29, 0x194(r1)
    lfs f29, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_802CA8C0_00001280
    lwz r0, 0x14d0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802CA8C0_00001208
    lwz r0, 0x14d8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802CA8C0_00001208
    li r0, 0x0
    stw r0, 0x14b8(r30)
    stw r0, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x6
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    b lbl_fn_802CA8C0_00001834
lbl_fn_802CA8C0_00001208:
    lfs f3, 0x14cc(r30)
    li r0, 0x0
    lfs f0, lbl_8088447C
    stw r0, 0x14b8(r30)
    fadds f0, f3, f0
    stw r0, 0x14bc(r30)
    stfs f0, 0x14cc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xa
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x146
    lfs f2, lbl_808843F8
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802CA8C0_00001834
lbl_fn_802CA8C0_00001280:
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x2f
    bne lbl_fn_802CA8C0_00001798
    mr r3, r30
    bl fn_80144710
    li r0, 0x0
    lfs f1, 0x538(r30)
    stw r0, 0x14d0(r30)
    addi r3, r1, 0x160
    li r4, 0x79
    stw r0, 0x14d4(r30)
    stw r0, 0x14d8(r30)
    bl fn_805F8E70
    lfs f3, lbl_808843E8
    addi r4, r1, 0x74
    lfs f0, lbl_80884420
    addi r6, r1, 0x68
    stfs f3, 0x68(r1)
    mr r5, r4
    lfs f2, lbl_80884410
    addi r3, r1, 0x160
    stfs f0, 0x6c(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F93C0
    lfs f3, 0x530(r30)
    li r31, 0x0
    lfs f0, 0x7c(r1)
    lfs f5, 0x52c(r30)
    fadds f6, f3, f0
    lfs f4, 0x78(r1)
    lwz r3, lbl_8087F8A0
    fadds f4, f5, f4
    lfs f3, 0x528(r30)
    lfs f0, 0x74(r1)
    stfs f6, 0xac(r1)
    fadds f0, f3, f0
    lfs f31, lbl_80884480
    stfs f4, 0xa8(r1)
    lwz r29, 0x48(r3)
    stfs f0, 0xa4(r1)
    lfs f30, lbl_80884488
    lfs f29, lbl_80884484
    b lbl_fn_802CA8C0_0000142C
lbl_fn_802CA8C0_00001338:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802CA8C0_00001364
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802CA8C0_00001364
    li r5, 0x1
lbl_fn_802CA8C0_00001364:
    cmpwi r5, 0x0
    beq lbl_fn_802CA8C0_00001380
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802CA8C0_00001380
    li r3, 0x1
lbl_fn_802CA8C0_00001380:
    cmpwi r3, 0x0
    beq lbl_fn_802CA8C0_000013B4
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802CA8C0_000013A8
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_802CA8C0_000013A8
    li r3, 0x1
lbl_fn_802CA8C0_000013A8:
    cmpwi r3, 0x0
    bne lbl_fn_802CA8C0_000013B4
    li r4, 0x1
lbl_fn_802CA8C0_000013B4:
    cmpwi r4, 0x0
    beq lbl_fn_802CA8C0_00001428
    mr r3, r29
    bl fn_80155D70
    cmpwi r3, 0x0
    beq lbl_fn_802CA8C0_000013D4
    li r31, 0x1
    b lbl_fn_802CA8C0_00001428
lbl_fn_802CA8C0_000013D4:
    lfs f3, 0x530(r29)
    addi r3, r1, 0x5c
    lfs f0, 0xac(r1)
    lfs f5, 0x52c(r29)
    fsubs f6, f3, f0
    lfs f4, 0xa8(r1)
    lfs f3, 0x528(r29)
    lfs f0, 0xa4(r1)
    fsubs f4, f5, f4
    stfs f6, 0x64(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f29
    bge lbl_fn_802CA8C0_00001428
    fmuls f0, f1, f30
    fcmpo cr0, f0, f31
    bge lbl_fn_802CA8C0_00001428
    stw r29, 0x14d0(r30)
    fmr f31, f0
lbl_fn_802CA8C0_00001428:
    lwz r29, 0x14ac(r29)
lbl_fn_802CA8C0_0000142C:
    cmpwi r29, 0x0
    bne lbl_fn_802CA8C0_00001338
    lwz r3, lbl_8087F408
    lfs f30, lbl_80884484
    lwz r29, 0x48(r3)
    b lbl_fn_802CA8C0_0000151C
lbl_fn_802CA8C0_00001444:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802CA8C0_00001470
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802CA8C0_00001470
    li r5, 0x1
lbl_fn_802CA8C0_00001470:
    cmpwi r5, 0x0
    beq lbl_fn_802CA8C0_0000148C
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802CA8C0_0000148C
    li r3, 0x1
lbl_fn_802CA8C0_0000148C:
    cmpwi r3, 0x0
    beq lbl_fn_802CA8C0_000014C0
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802CA8C0_000014B4
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_802CA8C0_000014B4
    li r3, 0x1
lbl_fn_802CA8C0_000014B4:
    cmpwi r3, 0x0
    bne lbl_fn_802CA8C0_000014C0
    li r4, 0x1
lbl_fn_802CA8C0_000014C0:
    cmpwi r4, 0x0
    beq lbl_fn_802CA8C0_00001518
    lfs f3, 0x530(r29)
    addi r3, r1, 0x50
    lfs f0, 0xac(r1)
    lfs f5, 0x52c(r29)
    fsubs f6, f3, f0
    lfs f4, 0xa8(r1)
    lfs f3, 0x528(r29)
    lfs f0, 0xa4(r1)
    fsubs f4, f5, f4
    stfs f6, 0x58(r1)
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_802CA8C0_00001518
    fcmpo cr0, f1, f31
    bge lbl_fn_802CA8C0_00001518
    stw r29, 0x14d0(r30)
    fmr f31, f1
lbl_fn_802CA8C0_00001518:
    lwz r29, 0x14ac(r29)
lbl_fn_802CA8C0_0000151C:
    cmpwi r29, 0x0
    bne lbl_fn_802CA8C0_00001444
    lwz r3, lbl_8087F4A0
    lfs f8, lbl_80884480
    lwz r3, 0x48(r3)
    lfs f0, lbl_80884484
    b lbl_fn_802CA8C0_000015A4
lbl_fn_802CA8C0_00001538:
    lwz r0, 0x50(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802CA8C0_000015A0
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802CA8C0_000015A0
    lfs f5, 0x74(r3)
    lfs f3, 0xac(r1)
    lfs f4, 0x6c(r3)
    fsubs f6, f5, f3
    lfs f3, 0xa4(r1)
    lfs f5, 0x70(r3)
    fsubs f7, f4, f3
    lfs f4, 0xa8(r1)
    fmuls f3, f6, f6
    fsubs f4, f5, f4
    stfs f7, 0x44(r1)
    fmadds f3, f7, f7, f3
    stfs f4, 0x48(r1)
    stfs f6, 0x4c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802CA8C0_000015A0
    fcmpo cr0, f3, f8
    bge lbl_fn_802CA8C0_000015A0
    stw r3, 0x14d8(r30)
    fmr f8, f3
lbl_fn_802CA8C0_000015A0:
    lwz r3, 0x5c(r3)
lbl_fn_802CA8C0_000015A4:
    cmpwi r3, 0x0
    bne lbl_fn_802CA8C0_00001538
    lwz r0, 0x14d8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802CA8C0_000016A8
    fcmpo cr0, f8, f31
    blt lbl_fn_802CA8C0_000015C8
    cmpwi r31, 0x0
    beq lbl_fn_802CA8C0_000016A8
lbl_fn_802CA8C0_000015C8:
    li r31, 0x0
    lfs f1, 0x538(r30)
    stw r31, 0x14d0(r30)
    addi r3, r1, 0x130
    li r4, 0x79
    bl fn_805F8E70
    lis r5, lbl_807C83B8@ha
    addi r4, r1, 0x38
    addi r5, r5, lbl_807C83B8@l
    addi r3, r1, 0x130
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F93C0
    lfs f3, 0x52c(r30)
    addi r6, r1, 0x98
    lfs f0, 0x3c(r1)
    addi r5, r1, 0xc4
    lfs f4, 0x528(r30)
    li r3, 0x6
    fadds f6, f3, f0
    lfs f3, 0x38(r1)
    lfs f5, 0x530(r30)
    li r0, 0x76
    fadds f4, f4, f3
    lfs f3, lbl_8088448C
    lfs f0, 0x40(r1)
    fsubs f3, f6, f3
    stfs f4, 0x98(r1)
    addi r4, r1, 0xb0
    fadds f2, f5, f0
    lfs f0, lbl_808843E8
    stfs f3, 0x9c(r1)
    lwz r7, lbl_8087F8A0
    stfs f0, 0xc4(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0xc8(r1)
    stw r31, 0xb4(r1)
    stw r31, 0xb8(r1)
    stw r31, 0xbc(r1)
    stw r31, 0xc0(r1)
    stw r3, 0xb0(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xcc(r1)
    lwz r3, 0x48(r7)
    stw r3, 0xc0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0x14d8(r30)
    stfs f2, 0xa0(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802CA8C0_0000176C
lbl_fn_802CA8C0_000016A8:
    lwz r0, 0x14d0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802CA8C0_0000176C
    lfs f1, 0x538(r30)
    addi r3, r1, 0x100
    li r4, 0x79
    bl fn_805F8E70
    lis r5, lbl_807C83B8@ha
    addi r4, r1, 0x2c
    addi r5, r5, lbl_807C83B8@l
    addi r3, r1, 0x100
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    lfs f3, 0x530(r30)
    li r0, 0x0
    lfs f0, 0x34(r1)
    lfs f5, 0x52c(r30)
    fadds f6, f3, f0
    lfs f4, 0x30(r1)
    lfs f3, 0x528(r30)
    lfs f0, 0x2c(r1)
    fadds f4, f5, f4
    stfs f6, 0x94(r1)
    fadds f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    lwz r3, 0x14d0(r30)
    stw r0, 0x58c(r3)
    lwz r3, 0x14d0(r30)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802CA8C0_00001748
    addi r4, r1, 0x8c
    li r5, 0x94
    bl fn_8015B808
    b lbl_fn_802CA8C0_00001754
lbl_fn_802CA8C0_00001748:
    addi r4, r1, 0x8c
    li r5, 0xde
    bl fn_8015B808
lbl_fn_802CA8C0_00001754:
    lwz r3, 0x14d0(r30)
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802CA8C0_0000176C
    li r0, 0x1
    stw r0, 0x14d4(r30)
lbl_fn_802CA8C0_0000176C:
    addi r3, r1, 0xa4
    lfs f2, 0xac(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x20
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r30
    lfs f1, lbl_80884490
    li r5, 0x64
    stfs f2, 0x28(r1)
    lfs f2, lbl_80884478
    bl fn_802CC834
lbl_fn_802CA8C0_00001798:
    lwz r0, 0x154c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802CA8C0_00001834
    lfs f1, 0x538(r30)
    addi r3, r1, 0xd0
    li r4, 0x79
    bl fn_805F8E70
    lfs f3, lbl_808843E8
    addi r4, r1, 0x14
    lfs f0, lbl_80884420
    addi r6, r1, 0x8
    stfs f3, 0x8(r1)
    mr r5, r4
    lfs f2, lbl_80884410
    addi r3, r1, 0xd0
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f3, 0x530(r30)
    addi r4, r1, 0x80
    lfs f0, 0x1c(r1)
    lis r5, 0xffff
    lfs f5, 0x52c(r30)
    fadds f6, f3, f0
    lfs f4, 0x18(r1)
    lfs f3, 0x528(r30)
    lfs f0, 0x14(r1)
    fadds f4, f5, f4
    stfs f6, 0x88(r1)
    fadds f0, f3, f0
    lwz r3, lbl_8087EEB0
    stfs f4, 0x84(r1)
    lfs f1, lbl_80884438
    stfs f0, 0x80(r1)
    lfs f2, lbl_808843E8
    bl fn_80063D3C
lbl_fn_802CA8C0_00001834:
    lwz r0, 0x1d4(r1)
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_802CAFB8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CAFB8_000018D4
    li r0, 0x0
    stw r0, 0x14b8(r30)
    stw r0, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x6
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    b lbl_fn_802CAFB8_00001A5C
lbl_fn_802CAFB8_000018D4:
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x5
    bne lbl_fn_802CAFB8_00001A5C
    lwz r8, 0x14d0(r30)
    cmpwi r8, 0x0
    beq lbl_fn_802CAFB8_00001A5C
    lwz r0, 0x48(r8)
    cmpwi r0, 0x2
    bne lbl_fn_802CAFB8_00001A38
    lwz r0, 0x3c(r1)
    li r7, 0x0
    li r6, -0x1
    stw r7, 0x20(r1)
    clrlwi r5, r0, 4
    lfs f0, lbl_808843EC
    stw r7, 0x24(r1)
    li r0, 0x1
    mr r3, r30
    li r4, 0x0
    stw r7, 0x28(r1)
    stw r7, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x3c(r1)
    stw r6, 0x38(r1)
    lfs f3, 0x7d8(r8)
    fneg f3, f3
    stw r0, 0x20(r1)
    fmuls f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r0, 0x24(r1)
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    addi r31, r1, 0x14
    psq_l f1, 0x4(r3), 0, 0
    addi r3, r30, 0x7d4
    psq_st f1, 0x0(r31), 0, 0
    li r5, 0x0
    lfs f6, lbl_808843E8
    li r6, 0x0
    lfs f5, lbl_80884420
    lfs f4, 0x14(r1)
    fadds f0, f2, f6
    lfs f3, 0x18(r1)
    fadds f4, f4, f6
    stfs f6, 0x8(r1)
    fadds f3, f3, f5
    lwz r4, 0x24(r1)
    stfs f5, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_8012DF7C
    lwz r3, lbl_8087F048
    mr r5, r31
    lwz r7, 0x14d0(r30)
    mr r6, r30
    addi r4, r1, 0x20
    li r8, 0x0
    li r9, 0x0
    bl fn_80108C10
    lwz r4, 0x14d0(r30)
    lwz r3, lbl_8087F048
    addi r4, r4, 0xb0
    bl fn_80105BD8
    lwz r3, 0x14d0(r30)
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14d0(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14d0(r30)
    lwz r0, 0x12a4(r3)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r3)
    lwz r3, 0x14d0(r30)
    bl fn_801765D8
    lfs f3, 0x14cc(r30)
    lfs f0, lbl_808843F4
    fadds f0, f3, f0
    stfs f0, 0x14cc(r30)
lbl_fn_802CAFB8_00001A38:
    lfs f3, 0x14cc(r30)
    lfs f0, lbl_808843F4
    fcmpo cr0, f3, f0
    bge lbl_fn_802CAFB8_00001A4C
    b lbl_fn_802CAFB8_00001A50
lbl_fn_802CAFB8_00001A4C:
    fmr f3, f0
lbl_fn_802CAFB8_00001A50:
    li r0, 0x0
    stfs f3, 0x14cc(r30)
    stw r0, 0x14d0(r30)
lbl_fn_802CAFB8_00001A5C:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
