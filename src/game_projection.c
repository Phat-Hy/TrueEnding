#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_16(void);
extern void _savegpr_16(void);
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_80061824(void);
extern void fn_80062C8C(void);
extern void fn_80063484(void);
extern void fn_80063764(void);
extern void fn_80063D3C(void);
extern void fn_8006EF48(void);
extern void fn_8006F2F0(void);
extern void fn_8008CD60(void);
extern void fn_800BFAC8(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80103484(void);
extern void fn_8016F3D0(void);
extern void fn_801FECE0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9920(void);
extern void fn_806868C4(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA0(void);
extern void fn_8068AEA4(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80735EB0[];
extern u8 lbl_80736040[];
extern u8 lbl_80779DF4[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80881478;
extern u32 lbl_80881488;
extern u32 lbl_8088148C;
extern u32 lbl_80881494;
extern u32 lbl_808814AC;
extern u32 lbl_808814C8;
extern u32 lbl_808814CC;
extern u32 lbl_808814D0;
extern u32 lbl_808814D4;
extern u32 lbl_808814D8;
extern u32 lbl_808814DC;
extern u32 lbl_808814E0;
extern u32 lbl_808814E4;
extern u32 lbl_808814E8;
extern u32 lbl_808814EC;
extern u32 lbl_808814F0;
extern u32 lbl_808814F4;
extern u32 lbl_808814F8;
extern u32 lbl_808814FC;
extern u32 lbl_80881500;
extern u32 lbl_80881504;
extern u32 lbl_80881508;
extern u32 lbl_8088150C;
extern u32 lbl_80881510;

/* Function declarations */
void fn_800F52F0(void);
void fn_800F52F8(void);
void fn_800F5300(void);
void fn_800F530C(void);
void fn_800F5314(void);

asm void fn_800F52F0(void)
{
    nofralloc
    addi r3, r3, 0x7d4
    blr
}

asm void fn_800F52F8(void)
{
    nofralloc
    lwz r3, lbl_8087F0A8
    blr
}

asm void fn_800F5300(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 3
    blr
}

asm void fn_800F530C(void)
{
    nofralloc
    addi r3, r3, 0xc58
    blr
}

asm void fn_800F5314(void)
{
    nofralloc
    stwu r1, -0xeb0(r1)
    mflr r0
    stw r0, 0xeb4(r1)
    li r0, 0xea8
    addi r11, r1, 0xe10
    stfd f31, 0xea0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xe98
    stfd f30, 0xe90(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0xe88
    stfd f29, 0xe80(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0xe78
    stfd f28, 0xe70(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0xe68
    stfd f27, 0xe60(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0xe58
    stfd f26, 0xe50(r1)
    psq_stx f26, r1, r0, 0, 0
    li r0, 0xe48
    stfd f25, 0xe40(r1)
    psq_stx f25, r1, r0, 0, 0
    li r0, 0xe38
    stfd f24, 0xe30(r1)
    psq_stx f24, r1, r0, 0, 0
    li r0, 0xe28
    stfd f23, 0xe20(r1)
    psq_stx f23, r1, r0, 0, 0
    li r0, 0xe18
    stfd f22, 0xe10(r1)
    psq_stx f22, r1, r0, 0, 0
    bl _savegpr_16
    addis r5, r3, 0x1
    lis r4, 0x4330
    mr r7, r5
    lwz r0, -0x34cc(r5)
    subi r7, r7, 0x3490
    addi r6, r1, 0x2bc
    psq_l f1, 0x0(r7), 0, 0
    cmpwi r0, 0x0
    lfs f2, 0x8(r7)
    mr r31, r3
    stw r4, 0xdb8(r1)
    stw r4, 0xdc0(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x2c4(r1)
    beq lbl_fn_800F5314_00000248
    lwz r6, -0x34d0(r5)
    addis r4, r3, 0x4
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    lwz r0, -0x1d20(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800F5314_00000124
    lwz r0, -0x1d1c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800F5314_00000124
    lwz r0, -0x1d14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00000138
lbl_fn_800F5314_00000124:
    addis r4, r3, 0x1
    lfs f0, lbl_80881494
    lwz r4, -0x34d0(r4)
    stfs f0, 0x104(r4)
    b lbl_fn_800F5314_00000144
lbl_fn_800F5314_00000138:
    lwz r4, -0x34d0(r5)
    lfs f0, lbl_808814CC
    stfs f0, 0x104(r4)
lbl_fn_800F5314_00000144:
    addis r5, r3, 0x1
    addis r4, r3, 0x4
    lwz r6, -0x34a0(r5)
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    lwz r0, -0x1d20(r4)
    lwz r5, -0x34a8(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800F5314_00000184
    lwz r0, -0x1d1c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800F5314_00000184
    lwz r0, -0x1d14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00000188
lbl_fn_800F5314_00000184:
    li r5, 0x0
lbl_fn_800F5314_00000188:
    cmpwi r5, 0x0
    beq lbl_fn_800F5314_000001C0
    addis r4, r3, 0x1
    lfs f3, lbl_808814AC
    lfs f0, -0x34a4(r4)
    lfs f4, lbl_80881494
    fadds f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_800F5314_000001B0
    b lbl_fn_800F5314_000001B4
lbl_fn_800F5314_000001B0:
    fmr f4, f0
lbl_fn_800F5314_000001B4:
    addis r4, r3, 0x1
    stfs f4, -0x34a4(r4)
    b lbl_fn_800F5314_00000214
lbl_fn_800F5314_000001C0:
    addis r4, r3, 0x1
    lfs f0, lbl_808814AC
    lfs f3, -0x34a4(r4)
    lfs f4, lbl_80881478
    fsubs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_800F5314_000001E0
    b lbl_fn_800F5314_000001E4
lbl_fn_800F5314_000001E0:
    fmr f4, f0
lbl_fn_800F5314_000001E4:
    lfs f0, lbl_80881478
    addis r4, r3, 0x1
    stfs f0, 0x220(r1)
    addi r6, r1, 0x220
    lfs f2, lbl_80881494
    addi r5, r1, 0x2bc
    stfs f0, 0x224(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, -0x34a4(r4)
    stfs f2, 0x228(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x2c4(r1)
lbl_fn_800F5314_00000214:
    addis r4, r3, 0x1
    lis r3, lbl_80736040@ha
    lwz r5, -0x34a0(r4)
    addi r3, r3, lbl_80736040@l
    lfs f24, -0x34a4(r4)
    addi r3, r3, 0x1c6
    addi r19, r5, 0x58
    bl fn_800DC6B4
    fmr f1, f24
    mr r4, r3
    mr r3, r19
    bl fn_801FECE0
    b lbl_fn_800F5314_000002C0
lbl_fn_800F5314_00000248:
    lwz r4, -0x34d0(r5)
    addi r3, r1, 0x214
    lfs f0, lbl_80881478
    stfs f0, 0x100(r4)
    lfs f2, lbl_80881494
    lwz r4, -0x34d0(r5)
    stfs f0, 0x214(r1)
    lwz r0, 0x38(r4)
    stfs f0, 0x218(r1)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, -0x34a0(r5)
    stfs f0, -0x34c8(r5)
    stfs f0, -0x34c4(r5)
    stfs f0, -0x34c0(r5)
    stfs f0, -0x34bc(r5)
    stfs f0, -0x34b0(r5)
    stfs f0, -0x34ac(r5)
    stfs f0, -0x34b8(r5)
    stfs f0, -0x34b4(r5)
    stfs f0, 0x100(r3)
    lwz r3, -0x34a0(r5)
    stfs f2, 0x21c(r1)
    lwz r0, 0x38(r3)
    psq_st f1, 0x0(r6), 0, 0
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    stfs f0, -0x34a4(r5)
    stfs f2, 0x2c4(r1)
lbl_fn_800F5314_000002C0:
    addis r3, r31, 0x1
    lfs f0, 0x2c0(r1)
    lfs f5, -0x3498(r3)
    addi r5, r1, 0x208
    lfs f4, 0x2bc(r1)
    subi r4, r3, 0x349c
    fsubs f10, f0, f5
    lfs f3, -0x349c(r3)
    lfs f0, lbl_808814D0
    li r0, 0x0
    fsubs f9, f4, f3
    lfs f6, 0x2c4(r1)
    fmuls f8, f10, f0
    lfs f4, -0x3494(r3)
    fmuls f7, f9, f0
    lfs f25, lbl_80881478
    fsubs f11, f6, f4
    stfs f9, 0xac(r1)
    fadds f5, f8, f5
    stfs f10, 0xb0(r1)
    fadds f3, f7, f3
    stfs f5, 0x20c(r1)
    fmuls f6, f11, f0
    stfs f3, 0x208(r1)
    fadds f2, f6, f4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, -0x349c(r3)
    stfs f11, 0xb4(r1)
    fcmpu cr0, f25, f0
    stfs f7, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f6, 0xa8(r1)
    stfs f2, 0x210(r1)
    stfs f2, -0x3494(r3)
    bne lbl_fn_800F5314_0000036C
    lfs f0, -0x3498(r3)
    fcmpu cr0, f25, f0
    bne lbl_fn_800F5314_0000036C
    frsp f0, f2
    fcmpu cr0, f25, f0
    bne lbl_fn_800F5314_0000036C
    li r0, 0x1
lbl_fn_800F5314_0000036C:
    cmpwi r0, 0x0
    bne lbl_fn_800F5314_00000530
    addis r3, r31, 0x1
    lfs f0, lbl_808814D4
    lfs f2, -0x3494(r3)
    subi r3, r3, 0x349c
    addi r19, r1, 0x1fc
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r19), 0, 0
    stfs f2, 0x204(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800F5314_000003C8
    lfs f3, 0x1fc(r1)
    lfs f0, lbl_80881478
    fcmpo cr0, f3, f0
    ble lbl_fn_800F5314_000003BC
    lfs f0, lbl_808814D8
    b lbl_fn_800F5314_000003C0
lbl_fn_800F5314_000003BC:
    lfs f0, lbl_808814DC
lbl_fn_800F5314_000003C0:
    stfs f0, 0x98(r1)
    b lbl_fn_800F5314_000003DC
lbl_fn_800F5314_000003C8:
    frsp f2, f2
    lfs f1, 0x1fc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x98(r1)
lbl_fn_800F5314_000003DC:
    lfs f0, 0x98(r1)
    addi r3, r1, 0x2e8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881478
    addi r4, r1, 0x88
    lfs f25, 0x2f0(r1)
    mr r5, r4
    lfs f24, 0x2ec(r1)
    addi r3, r1, 0x318
    lfs f13, 0x2e8(r1)
    lfs f12, 0x300(r1)
    lfs f11, 0x2fc(r1)
    lfs f10, 0x2f8(r1)
    lfs f9, 0x310(r1)
    lfs f8, 0x30c(r1)
    lfs f7, 0x308(r1)
    lfs f6, 0x314(r1)
    lfs f5, 0x304(r1)
    lfs f4, 0x2f4(r1)
    lfs f0, lbl_80881494
    psq_l f1, 0x0(r19), 0, 0
    lfs f2, 0x204(r1)
    stfs f3, 0x348(r1)
    stfs f3, 0x34c(r1)
    stfs f3, 0x350(r1)
    stfs f0, 0x354(r1)
    stfs f13, 0x58(r1)
    stfs f24, 0x5c(r1)
    stfs f25, 0x60(r1)
    stfs f13, 0x318(r1)
    stfs f24, 0x31c(r1)
    stfs f25, 0x320(r1)
    stfs f10, 0x64(r1)
    stfs f11, 0x68(r1)
    stfs f12, 0x6c(r1)
    stfs f10, 0x328(r1)
    stfs f11, 0x32c(r1)
    stfs f12, 0x330(r1)
    stfs f7, 0x70(r1)
    stfs f8, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f7, 0x338(r1)
    stfs f8, 0x33c(r1)
    stfs f9, 0x340(r1)
    stfs f4, 0x7c(r1)
    stfs f5, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f4, 0x324(r1)
    stfs f5, 0x334(r1)
    stfs f6, 0x344(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x90(r1)
    bl fn_805F9750
    lfs f2, 0x90(r1)
    lfs f0, lbl_808814D4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800F5314_000004F8
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80881478
    fcmpo cr0, f3, f0
    ble lbl_fn_800F5314_000004E8
    lfs f0, lbl_808814D8
    b lbl_fn_800F5314_000004EC
lbl_fn_800F5314_000004E8:
    lfs f0, lbl_808814DC
lbl_fn_800F5314_000004EC:
    fneg f0, f0
    stfs f0, 0x94(r1)
    b lbl_fn_800F5314_0000050C
lbl_fn_800F5314_000004F8:
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x94(r1)
lbl_fn_800F5314_0000050C:
    addi r3, r1, 0x94
    lfs f2, lbl_80881478
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    lfs f0, lbl_808814E0
    lfs f3, 0x200(r1)
    stfs f2, 0x9c(r1)
    fmuls f25, f0, f3
    stfs f2, 0x204(r1)
lbl_fn_800F5314_00000530:
    addis r3, r31, 0x1
    lis r19, lbl_80736040@ha
    lwz r4, -0x34d0(r3)
    addi r19, r19, lbl_80736040@l
    addi r3, r19, 0x1cd
    addi r20, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r20
    bl fn_801FECE0
    addis r4, r31, 0x1
    addi r3, r19, 0x1cd
    lwz r4, -0x34a0(r4)
    addi r20, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f25
    mr r4, r3
    mr r3, r20
    bl fn_801FECE0
    addis r3, r31, 0x1
    li r0, 0x0
    stw r0, -0x34cc(r3)
    stw r0, -0x34a8(r3)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_0000067C
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800F5314_0000067C
    addis r3, r31, 0x4
    lwz r0, -0x75f8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_0000067C
    lfs f24, lbl_808814E4
    lis r3, 0xffff
    lfs f25, lbl_808814E8
    addi r4, r3, 0x33
    lfs f1, lbl_808814EC
    fmr f4, f24
    fmr f5, f25
    lwz r3, lbl_8087EEB0
    fmr f2, f1
    lfs f3, lbl_80881488
    bl fn_80060D58
    addis r3, r31, 0x4
    lfs f1, lbl_808814EC
    lfs f3, -0x75fc(r3)
    lis r4, 0xff00
    lfs f0, -0x75f4(r3)
    fmr f2, f1
    fmuls f4, f24, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f25
    lfs f3, lbl_80881488
    addi r4, r4, 0x66ff
    fdivs f4, f4, f0
    bl fn_80060D58
    addis r4, r31, 0x4
    addi r3, r1, 0x2c8
    lfs f1, -0x75fc(r4)
    addi r4, r19, 0x1d6
    crset 6
    bl sprintf
    addis r3, r31, 0x4
    lfs f4, lbl_808814F4
    lfs f0, -0x75fc(r3)
    addi r4, r1, 0x2c8
    lfs f3, -0x75f4(r3)
    fmr f5, f4
    fmuls f6, f24, f0
    lfs f0, lbl_808814F0
    lwz r3, lbl_8087EEB0
    li r5, -0x1
    lfs f2, lbl_808814EC
    fdivs f7, f6, f3
    lfs f3, lbl_80881488
    li r6, 0x1
    lfs f6, lbl_80881478
    li r7, 0x1
    li r8, 0x0
    fadds f1, f0, f7
    bl fn_800616C0
lbl_fn_800F5314_0000067C:
    addis r3, r31, 0x3
    lwz r4, lbl_8087F8A0
    lwz r0, 0x67b0(r3)
    lwz r20, 0x48(r4)
    cmpwi r0, 0x0
    ble lbl_fn_800F5314_00000820
    lwz r0, 0x67b4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00000820
    lfs f2, 0x530(r20)
    addi r19, r1, 0x2b0
    psq_l f1, 0x528(r20), 0, 0
    mr r5, r19
    psq_st f1, 0x0(r19), 0, 0
    addi r3, r1, 0x1f0
    lfs f0, lbl_808814F8
    lfs f3, 0x2b4(r1)
    stfs f2, 0x2b8(r1)
    fadds f0, f3, f0
    lwz r4, lbl_8087EFB4
    stfs f0, 0x2b4(r1)
    bl fn_800BFAC8
    addi r3, r1, 0x1f0
    lfs f2, 0x1f8(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r7, 0x0
    psq_st f1, 0x0(r19), 0, 0
    li r6, 0x0
    lwz r3, lbl_8087F408
    stfs f2, 0x2b8(r1)
    lwz r9, 0x48(r3)
    b lbl_fn_800F5314_00000798
lbl_fn_800F5314_000006FC:
    lwz r8, 0x38(r9)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r8, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_800F5314_00000728
    clrlwi r5, r8, 31
    cmplwi r5, 0x1
    beq lbl_fn_800F5314_00000728
    li r3, 0x1
lbl_fn_800F5314_00000728:
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_00000744
    lwz r3, 0x7e0(r9)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_800F5314_00000744
    li r0, 0x1
lbl_fn_800F5314_00000744:
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00000778
    lwz r0, 0x55c(r9)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F5314_0000076C
    lwz r0, 0x560(r9)
    cmpwi r0, 0x1c
    bne lbl_fn_800F5314_0000076C
    li r3, 0x1
lbl_fn_800F5314_0000076C:
    cmpwi r3, 0x0
    bne lbl_fn_800F5314_00000778
    li r4, 0x1
lbl_fn_800F5314_00000778:
    cmpwi r4, 0x0
    beq lbl_fn_800F5314_00000794
    lwz r0, 0xd1c(r9)
    addi r7, r7, 0x1
    cmplw r0, r20
    bne lbl_fn_800F5314_00000794
    addi r6, r6, 0x1
lbl_fn_800F5314_00000794:
    lwz r9, 0x14ac(r9)
lbl_fn_800F5314_00000798:
    cmpwi r9, 0x0
    bne lbl_fn_800F5314_000006FC
    lis r5, lbl_80779DF4@ha
    addi r3, r1, 0x478
    addi r5, r5, lbl_80779DF4@l
    li r4, 0x20
    crclr 6
    bl fn_806868C4
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x478
    lfs f1, lbl_808814FC
    li r5, 0x1
    lfs f2, lbl_80881478
    li r6, 0x1
    bl fn_8006EF48
    lfs f6, lbl_80881478
    addi r4, r1, 0x478
    lfs f4, lbl_808814FC
    li r5, -0x1
    lfs f3, lbl_80881500
    fmr f7, f6
    lfs f0, 0x2b0(r1)
    fmr f5, f4
    fmr f8, f6
    lwz r3, lbl_8087EEB0
    fnmsubs f1, f3, f1, f0
    lfs f2, 0x2b4(r1)
    li r6, 0x1
    lfs f3, lbl_8088148C
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_800F5314_00000820:
    lwz r3, lbl_8087F0A8
    lwz r24, 0x5c(r3)
    cmpwi r24, 0x0
    ble lbl_fn_800F5314_00001160
    subi r0, r24, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_800F5314_00000D48
    addis r25, r31, 0x1
    lis r5, lbl_80735EB0@ha
    lis r3, lbl_80736040@ha
    lis r4, lbl_80779DF4@ha
    subi r25, r25, 0x3410
    lfs f24, lbl_808814EC
    lfs f26, lbl_80881508
    mr r23, r25
    lfs f25, lbl_808814FC
    addi r29, r4, lbl_80779DF4@l
    lfs f28, lbl_808814C8
    addi r27, r3, lbl_80736040@l
    lfd f27, lbl_80735EB0@l(r5)
    addis r26, r31, 0x3
    lfs f29, lbl_80881494
    li r20, 0x0
    lfs f30, lbl_80881478
    lis r30, 0xb000
    lfs f31, lbl_80881504
    lis r28, 0xafb0
    b lbl_fn_800F5314_00000D38
lbl_fn_800F5314_00000890:
    lwz r5, 0x0(r23)
    cmpwi r5, 0x0
    beq lbl_fn_800F5314_00000D30
    lwz r4, 0x38(r5)
    li r0, 0x0
    rlwinm r3, r4, 0, 29, 29
    cmplwi r3, 0x4
    beq lbl_fn_800F5314_000008C0
    clrlwi r3, r4, 31
    cmplwi r3, 0x1
    beq lbl_fn_800F5314_000008C0
    li r0, 0x1
lbl_fn_800F5314_000008C0:
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00000D30
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x1e4
    lfs f0, 0x530(r5)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r5)
    lfs f3, 0x10c(r4)
    lfs f0, 0x528(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x1e8(r1)
    stfs f0, 0x1e4(r1)
    stfs f6, 0x1ec(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bgt lbl_fn_800F5314_00000D30
    lwz r5, 0x0(r23)
    addi r3, r1, 0x2a4
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x528
    bl fn_800BFAC8
    lfs f0, 0x2ac(r1)
    fcmpo cr0, f0, f30
    blt lbl_fn_800F5314_00000D30
    fcmpo cr0, f29, f0
    blt lbl_fn_800F5314_00000D30
    mr r17, r25
    addis r19, r31, 0x3
    li r21, 0x0
    li r22, 0x0
    b lbl_fn_800F5314_000009A0
lbl_fn_800F5314_00000948:
    lwz r3, 0x0(r17)
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_00000998
    lwz r5, 0x38(r3)
    li r0, 0x0
    rlwinm r4, r5, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_800F5314_00000978
    clrlwi r4, r5, 31
    cmplwi r4, 0x1
    beq lbl_fn_800F5314_00000978
    li r0, 0x1
lbl_fn_800F5314_00000978:
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00000998
    lwz r4, 0x0(r23)
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800F5314_00000998
    addi r21, r21, 0x1
lbl_fn_800F5314_00000998:
    addi r17, r17, 0x934
    addi r22, r22, 0x1
lbl_fn_800F5314_000009A0:
    lwz r0, 0x63b0(r19)
    cmpw r22, r0
    blt lbl_fn_800F5314_00000948
    xoris r0, r21, 0x8000
    stw r0, 0xdbc(r1)
    lfs f0, 0x2a8(r1)
    cmpwi r24, 0x1
    lfd f3, 0xdb8(r1)
    lfs f4, 0x2a4(r1)
    fsubs f0, f0, f28
    fsubs f3, f3, f27
    fadds f23, f28, f4
    fnmsubs f22, f25, f3, f0
    bne lbl_fn_800F5314_00000BBC
    lwz r5, 0x6dc(r23)
    addi r3, r1, 0x6b8
    lwz r6, 0x6e0(r23)
    addi r4, r27, 0x1dc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0xbb8
    addi r5, r1, 0x6b8
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_80881478
    fmr f2, f22
    fmr f4, f25
    lwz r3, lbl_8087EEB0
    fmr f5, f25
    addi r4, r1, 0xbb8
    fmr f6, f3
    fmr f7, f3
    fmr f8, f3
    subi r5, r30, 0x1
    fadds f1, f26, f23
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fadds f22, f22, f25
    mr r17, r25
    addis r22, r31, 0x3
    li r21, 0x0
    b lbl_fn_800F5314_00000BAC
lbl_fn_800F5314_00000A5C:
    lwz r3, 0x0(r17)
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_00000BA4
    lwz r5, 0x38(r3)
    li r0, 0x0
    rlwinm r4, r5, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_800F5314_00000A8C
    clrlwi r4, r5, 31
    cmplwi r4, 0x1
    beq lbl_fn_800F5314_00000A8C
    li r0, 0x1
lbl_fn_800F5314_00000A8C:
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00000BA4
    lwz r4, 0x0(r23)
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800F5314_00000BA4
    lwz r4, 0x0(r23)
    subi r18, r30, 0x1
    lwz r5, 0x0(r17)
    lwz r0, 0xd1c(r4)
    cmplw r0, r5
    bne lbl_fn_800F5314_00000AC4
    subi r18, r28, 0x51
lbl_fn_800F5314_00000AC4:
    mr r3, r31
    bl fn_80103484
    mr r6, r3
    addi r3, r1, 0xbb8
    addi r5, r29, 0x10
    li r4, 0x100
    crclr 6
    bl fn_806868C4
    lfs f3, lbl_80881478
    fmr f1, f23
    fmr f2, f22
    lwz r3, lbl_8087EEB0
    fmr f4, f25
    mr r5, r18
    fmr f5, f25
    fmr f6, f3
    fmr f7, f3
    addi r4, r1, 0xbb8
    fmr f8, f3
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r5, 0x0(r17)
    addi r3, r1, 0x6b8
    addi r4, r27, 0x1e9
    lwz r6, 0x60(r5)
    lwz r5, 0x58(r5)
    lwz r6, 0xc(r6)
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0xbb8
    addi r5, r1, 0x6b8
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_80881478
    fmr f2, f22
    fmr f4, f25
    lwz r3, lbl_8087EEB0
    fmr f5, f25
    mr r5, r18
    fmr f6, f3
    fmr f7, f3
    fmr f8, f3
    addi r4, r1, 0xbb8
    fadds f1, f24, f23
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fadds f22, f22, f25
lbl_fn_800F5314_00000BA4:
    addi r17, r17, 0x934
    addi r21, r21, 0x1
lbl_fn_800F5314_00000BAC:
    lwz r0, 0x63b0(r22)
    cmpw r21, r0
    blt lbl_fn_800F5314_00000A5C
    b lbl_fn_800F5314_00000D30
lbl_fn_800F5314_00000BBC:
    cmpwi r24, 0x2
    bne lbl_fn_800F5314_00000D30
    mr r17, r25
    addis r22, r31, 0x3
    li r21, 0x0
    b lbl_fn_800F5314_00000D24
lbl_fn_800F5314_00000BD4:
    lwz r3, 0x0(r17)
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_00000D1C
    lwz r5, 0x38(r3)
    li r0, 0x0
    rlwinm r4, r5, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_800F5314_00000C04
    clrlwi r4, r5, 31
    cmplwi r4, 0x1
    beq lbl_fn_800F5314_00000C04
    li r0, 0x1
lbl_fn_800F5314_00000C04:
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00000D1C
    lwz r4, 0x0(r23)
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800F5314_00000D1C
    lwz r4, 0x0(r17)
    subi r18, r30, 0x1
    lwz r5, 0x0(r23)
    lwz r0, 0xd1c(r4)
    cmplw r0, r5
    bne lbl_fn_800F5314_00000C3C
    subi r18, r30, 0x5051
lbl_fn_800F5314_00000C3C:
    mr r3, r31
    bl fn_80103484
    mr r6, r3
    addi r3, r1, 0xbb8
    addi r5, r29, 0x10
    li r4, 0x100
    crclr 6
    bl fn_806868C4
    lfs f3, lbl_80881478
    fmr f1, f23
    fmr f2, f22
    lwz r3, lbl_8087EEB0
    fmr f4, f25
    mr r5, r18
    fmr f5, f25
    fmr f6, f3
    fmr f7, f3
    addi r4, r1, 0xbb8
    fmr f8, f3
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r5, 0x0(r17)
    addi r3, r1, 0x6b8
    addi r4, r27, 0x1e9
    lwz r6, 0x60(r5)
    lwz r5, 0x58(r5)
    lwz r6, 0xc(r6)
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0xbb8
    addi r5, r1, 0x6b8
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_80881478
    fmr f2, f22
    fmr f4, f25
    lwz r3, lbl_8087EEB0
    fmr f5, f25
    mr r5, r18
    fmr f6, f3
    fmr f7, f3
    fmr f8, f3
    addi r4, r1, 0xbb8
    fadds f1, f24, f23
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fadds f22, f22, f25
lbl_fn_800F5314_00000D1C:
    addi r17, r17, 0x934
    addi r21, r21, 0x1
lbl_fn_800F5314_00000D24:
    lwz r0, 0x63b0(r22)
    cmpw r21, r0
    blt lbl_fn_800F5314_00000BD4
lbl_fn_800F5314_00000D30:
    addi r23, r23, 0x934
    addi r20, r20, 0x1
lbl_fn_800F5314_00000D38:
    lwz r0, 0x63b0(r26)
    cmpw r20, r0
    blt lbl_fn_800F5314_00000890
    b lbl_fn_800F5314_00001160
lbl_fn_800F5314_00000D48:
    cmpwi r24, 0x3
    bne lbl_fn_800F5314_00001160
    lis r3, lbl_80735EB0@ha
    addis r23, r31, 0x4
    lis r28, lbl_80779DF4@ha
    lis r27, lbl_80736040@ha
    lfs f24, lbl_80881508
    mr r24, r31
    lfs f25, lbl_808814FC
    addi r28, r28, lbl_80779DF4@l
    lfs f27, lbl_808814C8
    addi r27, r27, lbl_80736040@l
    lfd f26, lbl_80735EB0@l(r3)
    addis r26, r31, 0x3
    lfs f28, lbl_80881494
    li r20, 0x0
    lfs f29, lbl_80881478
    lis r29, 0xb000
    lfs f30, lbl_80881504
    subi r23, r23, 0x6e20
    b lbl_fn_800F5314_00001154
lbl_fn_800F5314_00000D9C:
    cmpwi r20, 0x0
    blt lbl_fn_800F5314_00000DAC
    cmpw r0, r20
    bgt lbl_fn_800F5314_00000DB4
lbl_fn_800F5314_00000DAC:
    li r21, 0x0
    b lbl_fn_800F5314_00000DBC
lbl_fn_800F5314_00000DB4:
    addis r3, r24, 0x1
    lwz r21, -0x3410(r3)
lbl_fn_800F5314_00000DBC:
    cmpwi r21, 0x0
    beq lbl_fn_800F5314_00001148
    lwz r0, 0x38(r21)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F5314_00001148
    lwz r0, 0x48(r21)
    cmpwi r0, 0x3
    bne lbl_fn_800F5314_00001148
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x1d8
    lfs f0, 0x530(r21)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r21)
    lfs f3, 0x10c(r4)
    lfs f0, 0x528(r21)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x1dc(r1)
    stfs f0, 0x1d8(r1)
    stfs f6, 0x1e0(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bgt lbl_fn_800F5314_00001148
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x298
    addi r5, r21, 0x528
    bl fn_800BFAC8
    lfs f0, 0x2a0(r1)
    fcmpo cr0, f0, f29
    blt lbl_fn_800F5314_00001148
    fcmpo cr0, f28, f0
    blt lbl_fn_800F5314_00001148
    addis r30, r31, 0x3
    li r22, 0x0
    lwz r0, 0x63b0(r30)
    li r25, 0x0
    cmpwi r0, 0x0
    ble lbl_fn_800F5314_00000EDC
    mr r17, r31
    b lbl_fn_800F5314_00000ED0
lbl_fn_800F5314_00000E68:
    cmpwi r25, 0x0
    blt lbl_fn_800F5314_00000E78
    cmpw r0, r25
    bgt lbl_fn_800F5314_00000E80
lbl_fn_800F5314_00000E78:
    li r3, 0x0
    b lbl_fn_800F5314_00000E88
lbl_fn_800F5314_00000E80:
    addis r3, r17, 0x1
    lwz r3, -0x3410(r3)
lbl_fn_800F5314_00000E88:
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_00000EC8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F5314_00000EC8
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F5314_00000EC8
    mr r4, r21
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_00000EC8
    addi r22, r22, 0x1
lbl_fn_800F5314_00000EC8:
    addi r17, r17, 0x934
    addi r25, r25, 0x1
lbl_fn_800F5314_00000ED0:
    lwz r0, 0x63b0(r30)
    cmpw r25, r0
    blt lbl_fn_800F5314_00000E68
lbl_fn_800F5314_00000EDC:
    xoris r3, r22, 0x8000
    stw r3, 0xdc4(r1)
    lfs f0, 0x29c(r1)
    cmpwi r21, 0x0
    lfd f3, 0xdc0(r1)
    lfs f4, 0x298(r1)
    fsubs f0, f0, f27
    fsubs f3, f3, f26
    fadds f22, f27, f4
    fnmsubs f23, f25, f3, f0
    bne lbl_fn_800F5314_00000F10
    li r4, -0x1
    b lbl_fn_800F5314_00000F50
lbl_fn_800F5314_00000F10:
    addis r3, r31, 0x3
    mr r5, r31
    lwz r3, 0x63b0(r3)
    li r4, 0x0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_800F5314_00000F4C
lbl_fn_800F5314_00000F2C:
    addis r3, r5, 0x1
    lwz r3, -0x3410(r3)
    cmplw r3, r21
    bne lbl_fn_800F5314_00000F40
    b lbl_fn_800F5314_00000F50
lbl_fn_800F5314_00000F40:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_800F5314_00000F2C
lbl_fn_800F5314_00000F4C:
    li r4, -0x1
lbl_fn_800F5314_00000F50:
    cmpwi r4, 0x0
    bge lbl_fn_800F5314_00000F60
    li r19, 0x0
    b lbl_fn_800F5314_00000FD0
lbl_fn_800F5314_00000F60:
    mulli r4, r4, 0x120
    addis r3, r31, 0x4
    li r6, 0x0
    li r5, -0x1
    add r3, r3, r4
    li r4, 0x0
    subi r3, r3, 0x6e20
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800F5314_00000FA8
lbl_fn_800F5314_00000F88:
    lwz r7, 0x0(r3)
    cmpw r6, r7
    bge lbl_fn_800F5314_00000F9C
    mr r6, r7
    mr r5, r4
lbl_fn_800F5314_00000F9C:
    addi r3, r3, 0x4
    addi r4, r4, 0x1
    bdnz lbl_fn_800F5314_00000F88
lbl_fn_800F5314_00000FA8:
    cmpwi r5, 0x0
    blt lbl_fn_800F5314_00000FB8
    cmpw r0, r5
    bgt lbl_fn_800F5314_00000FC0
lbl_fn_800F5314_00000FB8:
    li r19, 0x0
    b lbl_fn_800F5314_00000FD0
lbl_fn_800F5314_00000FC0:
    mulli r3, r5, 0x934
    addis r3, r3, 0x1
    subi r3, r3, 0x3410
    lwzx r19, r31, r3
lbl_fn_800F5314_00000FD0:
    cmpwi r0, 0x0
    li r22, 0x0
    ble lbl_fn_800F5314_00001148
    mr r18, r31
    mr r17, r23
    addis r25, r31, 0x3
    b lbl_fn_800F5314_0000113C
lbl_fn_800F5314_00000FEC:
    cmpwi r22, 0x0
    blt lbl_fn_800F5314_00000FFC
    cmpw r0, r22
    bgt lbl_fn_800F5314_00001004
lbl_fn_800F5314_00000FFC:
    li r30, 0x0
    b lbl_fn_800F5314_0000100C
lbl_fn_800F5314_00001004:
    addis r3, r18, 0x1
    lwz r30, -0x3410(r3)
lbl_fn_800F5314_0000100C:
    cmpwi r30, 0x0
    beq lbl_fn_800F5314_00001130
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F5314_00001130
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F5314_00001130
    mr r3, r30
    mr r4, r21
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_00001130
    cmplw r19, r30
    subi r16, r29, 0x1
    bne lbl_fn_800F5314_0000105C
    subi r16, r29, 0x5051
lbl_fn_800F5314_0000105C:
    lwz r6, 0x0(r17)
    addi r3, r1, 0x9b8
    addi r5, r28, 0x10
    li r4, 0x100
    crclr 6
    bl fn_806868C4
    lfs f3, lbl_80881478
    fmr f1, f22
    fmr f2, f23
    lwz r3, lbl_8087EEB0
    fmr f4, f25
    mr r5, r16
    fmr f5, f25
    fmr f6, f3
    fmr f7, f3
    addi r4, r1, 0x9b8
    fmr f8, f3
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r6, 0x60(r30)
    addi r3, r1, 0x5b8
    lwz r5, 0x58(r30)
    addi r4, r27, 0x1e9
    lwz r6, 0xc(r6)
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x9b8
    addi r5, r1, 0x5b8
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_80881478
    fmr f2, f23
    fmr f4, f25
    lwz r3, lbl_8087EEB0
    fmr f5, f25
    mr r5, r16
    fmr f6, f3
    fmr f7, f3
    fmr f8, f3
    addi r4, r1, 0x9b8
    fadds f1, f24, f22
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fadds f23, f23, f25
lbl_fn_800F5314_00001130:
    addi r18, r18, 0x934
    addi r17, r17, 0x4
    addi r22, r22, 0x1
lbl_fn_800F5314_0000113C:
    lwz r0, 0x63b0(r25)
    cmpw r22, r0
    blt lbl_fn_800F5314_00000FEC
lbl_fn_800F5314_00001148:
    addi r23, r23, 0x120
    addi r24, r24, 0x934
    addi r20, r20, 0x1
lbl_fn_800F5314_00001154:
    lwz r0, 0x63b0(r26)
    cmpw r20, r0
    blt lbl_fn_800F5314_00000D9C
lbl_fn_800F5314_00001160:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x168(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_000013B4
    lwz r3, lbl_8087F8A0
    lfs f25, lbl_808814F4
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_00001188
    lwz r5, 0x48(r3)
    b lbl_fn_800F5314_0000118C
lbl_fn_800F5314_00001188:
    li r5, 0x0
lbl_fn_800F5314_0000118C:
    cmpwi r5, 0x0
    beq lbl_fn_800F5314_000012B8
    addis r3, r31, 0x3
    lis r4, lbl_80735EB0@ha
    lwz r0, 0x63bc(r3)
    addi r6, r1, 0x28c
    lfs f2, 0x530(r5)
    lis r3, 0x2289
    xoris r0, r0, 0x8000
    stw r0, 0xdbc(r1)
    psq_l f1, 0x528(r5), 0, 0
    subi r5, r3, 0x5501
    lfd f3, lbl_80735EB0@l(r4)
    li r4, 0x20
    lfd f0, 0xdb8(r1)
    psq_st f1, 0x0(r6), 0, 0
    fsubs f5, f0, f3
    lwz r3, lbl_8087EEB0
    stfs f2, 0x294(r1)
    lfs f1, 0x28c(r1)
    lfs f2, 0x290(r1)
    lfs f3, 0x294(r1)
    lfs f4, lbl_80881478
    lfs f6, lbl_80881488
    bl fn_80062C8C
    lfs f6, lbl_80881478
    addi r3, r1, 0x280
    lfs f5, lbl_8088148C
    addi r5, r1, 0x1cc
    lfs f4, 0x294(r1)
    lfs f3, 0x290(r1)
    lfs f0, 0x28c(r1)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x1c0(r1)
    fadds f0, f0, f6
    lwz r4, lbl_8087EFB4
    stfs f5, 0x1c4(r1)
    stfs f6, 0x1c8(r1)
    stfs f0, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f4, 0x1d4(r1)
    bl fn_800BFAC8
    addis r3, r31, 0x3
    lwz r5, 0x63bc(r3)
    cmpwi r5, 0x12c
    bgt lbl_fn_800F5314_00001264
    lis r4, lbl_80736040@ha
    addi r3, r1, 0x4b8
    addi r4, r4, lbl_80736040@l
    addi r4, r4, 0x1f2
    crclr 6
    bl sprintf
    b lbl_fn_800F5314_0000127C
lbl_fn_800F5314_00001264:
    lis r4, lbl_80736040@ha
    addi r3, r1, 0x4b8
    addi r4, r4, lbl_80736040@l
    addi r4, r4, 0x1fd
    crclr 6
    bl sprintf
lbl_fn_800F5314_0000127C:
    lfs f3, lbl_80881478
    fmr f4, f25
    lfs f7, lbl_808814E8
    fmr f5, f25
    lfs f0, 0x280(r1)
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fadds f1, f7, f0
    lfs f2, 0x284(r1)
    addi r4, r1, 0x4b8
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_800F5314_000012B8:
    addis r19, r31, 0x1
    lis r21, lbl_80736040@ha
    lfs f28, lbl_80881478
    addi r21, r21, lbl_80736040@l
    lfs f27, lbl_8088148C
    addis r20, r31, 0x3
    lfs f24, lbl_808814E8
    li r16, 0x0
    lfs f26, lbl_80881494
    subi r19, r19, 0x3410
    b lbl_fn_800F5314_000013A8
lbl_fn_800F5314_000012E4:
    lwz r4, 0x0(r19)
    cmpwi r4, 0x0
    beq lbl_fn_800F5314_000013A0
    lwz r0, 0xc04(r4)
    cmpwi r0, 0x0
    ble lbl_fn_800F5314_000013A0
    lfs f4, 0x530(r4)
    addi r3, r1, 0x274
    lfs f3, 0x52c(r4)
    addi r5, r1, 0x1b4
    lfs f0, 0x528(r4)
    fadds f4, f4, f28
    fadds f3, f3, f27
    stfs f28, 0x1a8(r1)
    fadds f0, f0, f28
    lwz r4, lbl_8087EFB4
    stfs f27, 0x1ac(r1)
    stfs f28, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f4, 0x1bc(r1)
    bl fn_800BFAC8
    lfs f0, 0x27c(r1)
    fcmpo cr0, f0, f28
    blt lbl_fn_800F5314_000013A0
    fcmpo cr0, f26, f0
    blt lbl_fn_800F5314_000013A0
    lwz r5, 0x0(r19)
    addi r3, r1, 0x4b8
    addi r4, r21, 0x20e
    lwz r5, 0xc04(r5)
    crclr 6
    bl sprintf
    lfs f0, 0x274(r1)
    fmr f4, f25
    lfs f3, lbl_80881478
    fmr f5, f25
    fadds f1, f24, f0
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f2, 0x278(r1)
    addi r4, r1, 0x4b8
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_800F5314_000013A0:
    addi r19, r19, 0x934
    addi r16, r16, 0x1
lbl_fn_800F5314_000013A8:
    lwz r0, 0x63b0(r20)
    cmpw r16, r0
    blt lbl_fn_800F5314_000012E4
lbl_fn_800F5314_000013B4:
    addis r28, r31, 0x4
    lwz r0, -0x6e24(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00001E0C
    lis r3, lbl_80735EB0@ha
    subi r29, r28, 0x732c
    li r0, 0x0
    lis r30, lbl_80779DF4@ha
    stw r29, 0x38(r1)
    addi r27, r1, 0x268
    lfs f29, lbl_80881478
    addi r26, r1, 0x25c
    stw r0, 0x3c(r1)
    addi r24, r1, 0x250
    lfs f30, lbl_80881500
    addi r25, r1, 0x244
    stw r29, 0x10(r1)
    addi r23, r1, 0x238
    lfs f31, lbl_80881510
    addi r30, r30, lbl_80779DF4@l
    stw r0, 0x14(r1)
    lfd f26, lbl_80735EB0@l(r3)
    stw r29, 0x18(r1)
    lfs f27, lbl_808814E8
    stw r0, 0x1c(r1)
    lfs f28, lbl_8088150C
    stw r29, 0x20(r1)
    lfs f24, lbl_80881494
    stw r0, 0x24(r1)
    stw r29, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r0, 0x54(r1)
    b lbl_fn_800F5314_00001DD8
lbl_fn_800F5314_0000143C:
    lwz r20, 0x50(r1)
    lwz r22, 0x54(r1)
    lwz r21, 0x504(r20)
    add r0, r21, r22
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r3, r20, r0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00001DBC
    lwz r0, 0x28(r3)
    cmpwi r0, 0x2d
    bge lbl_fn_800F5314_00001478
    lfs f0, lbl_80881494
    b lbl_fn_800F5314_00001490
lbl_fn_800F5314_00001478:
    subfic r0, r0, 0x3c
    xoris r0, r0, 0x8000
    stw r0, 0xdc4(r1)
    lfd f0, 0xdc0(r1)
    fsubs f0, f0, f26
    fdivs f0, f0, f27
lbl_fn_800F5314_00001490:
    fmuls f1, f28, f0
    bl fn_80695D84
    add r0, r21, r22
    slwi r4, r3, 24
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r3, r20, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800F5314_00001CC4
    lfs f2, 0x14(r3)
    oris r20, r4, 0xff
    psq_l f1, 0xc(r3), 0, 0
    ori r20, r20, 0xff00
    psq_st f1, 0x0(r27), 0, 0
    frsp f3, f2
    lwz r6, 0x50(r1)
    mr r5, r20
    stfs f2, 0x270(r1)
    li r4, 0x10
    lwz r0, 0x54(r1)
    lwz r3, 0x504(r6)
    lfs f6, 0x26c(r1)
    add r7, r3, r0
    lwz r3, lbl_8087EEB0
    clrlwi r7, r7, 27
    lfs f5, lbl_80881478
    mulli r7, r7, 0x28
    add r7, r6, r7
    psq_l f1, 0xc(r7), 0, 0
    lfs f2, 0x14(r7)
    stfs f2, 0x264(r1)
    psq_st f1, 0x0(r26), 0, 0
    lfs f1, 0x268(r1)
    lwz r7, 0x504(r6)
    lfs f4, 0x260(r1)
    add r7, r7, r0
    clrlwi r7, r7, 27
    mulli r7, r7, 0x28
    add r7, r6, r7
    lfs f0, 0x24(r7)
    fadds f2, f6, f0
    stfs f2, 0x26c(r1)
    lwz r7, 0x504(r6)
    add r7, r7, r0
    clrlwi r7, r7, 27
    mulli r7, r7, 0x28
    add r7, r6, r7
    lfs f0, 0x24(r7)
    fsubs f0, f4, f0
    stfs f0, 0x260(r1)
    lwz r7, 0x504(r6)
    add r0, r7, r0
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r7, r6, r0
    lwz r6, 0x8(r7)
    lfs f4, 0x1c(r7)
    lfs f6, 0x24(r7)
    lfs f7, 0x50(r6)
    bl fn_80063484
    lwz r6, 0x50(r1)
    mr r5, r20
    lwz r0, 0x54(r1)
    li r4, 0x10
    lwz r7, 0x504(r6)
    lwz r3, lbl_8087EEB0
    add r0, r7, r0
    lfs f1, 0x25c(r1)
    clrlwi r0, r0, 27
    lfs f2, 0x260(r1)
    mulli r0, r0, 0x28
    lfs f3, 0x264(r1)
    lfs f5, lbl_80881478
    add r7, r6, r0
    lwz r6, 0x8(r7)
    lfs f4, 0x1c(r7)
    lfs f6, 0x24(r7)
    lfs f7, 0x50(r6)
    bl fn_80063484
    lwz r3, lbl_8087EEB0
    mr r4, r27
    lfs f1, lbl_80881478
    mr r5, r26
    mr r6, r20
    bl fn_80063764
    lwz r6, 0x50(r1)
    addi r3, r1, 0x448
    lwz r7, 0x54(r1)
    li r4, 0x79
    lwz r0, 0x504(r6)
    add r0, r0, r7
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r5, r6, r0
    lfs f0, 0x24(r5)
    stfs f0, 0x258(r1)
    stfs f29, 0x250(r1)
    stfs f29, 0x254(r1)
    lwz r0, 0x504(r6)
    add r0, r0, r7
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r6, r6, r0
    lwz r5, 0x8(r6)
    lfs f0, 0x1c(r6)
    lfs f3, 0x50(r5)
    fnmsubs f1, f30, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x250
    addi r3, r1, 0x448
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x264(r1)
    mr r6, r20
    lfs f5, 0x258(r1)
    addi r4, r1, 0x19c
    lfs f0, 0x270(r1)
    addi r5, r1, 0x190
    fadds f7, f3, f5
    lfs f4, 0x260(r1)
    fadds f5, f0, f5
    lfs f3, 0x254(r1)
    lfs f0, 0x26c(r1)
    fadds f8, f4, f3
    fadds f6, f0, f3
    lfs f4, 0x25c(r1)
    lfs f3, 0x250(r1)
    lfs f0, 0x268(r1)
    fadds f4, f4, f3
    stfs f8, 0x194(r1)
    fadds f0, f0, f3
    lwz r3, lbl_8087EEB0
    stfs f4, 0x190(r1)
    lfs f1, lbl_80881478
    stfs f7, 0x198(r1)
    stfs f0, 0x19c(r1)
    stfs f6, 0x1a0(r1)
    stfs f5, 0x1a4(r1)
    bl fn_80063764
    lwz r5, 0x50(r1)
    addi r3, r1, 0x418
    lwz r6, 0x54(r1)
    li r4, 0x79
    lwz r0, 0x504(r5)
    add r0, r0, r6
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r5, r5, r0
    lwz r5, 0x8(r5)
    lfs f1, 0x50(r5)
    bl fn_805F8E70
    addi r4, r1, 0x250
    addi r3, r1, 0x418
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x264(r1)
    mr r6, r20
    lfs f5, 0x258(r1)
    addi r4, r1, 0x184
    lfs f0, 0x270(r1)
    addi r5, r1, 0x178
    fadds f7, f3, f5
    lfs f4, 0x260(r1)
    fadds f5, f0, f5
    lfs f3, 0x254(r1)
    lfs f0, 0x26c(r1)
    fadds f8, f4, f3
    fadds f6, f0, f3
    lfs f4, 0x25c(r1)
    lfs f3, 0x250(r1)
    lfs f0, 0x268(r1)
    fadds f4, f4, f3
    stfs f8, 0x17c(r1)
    fadds f0, f0, f3
    lwz r3, lbl_8087EEB0
    stfs f4, 0x178(r1)
    lfs f1, lbl_80881478
    stfs f7, 0x180(r1)
    stfs f0, 0x184(r1)
    stfs f6, 0x188(r1)
    stfs f5, 0x18c(r1)
    bl fn_80063764
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    lwz r4, 0x504(r3)
    add r0, r4, r0
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r3, r3, r0
    lwz r3, 0x8(r3)
    lfs f0, 0x54(r3)
    fcmpo cr0, f0, f29
    ble lbl_fn_800F5314_00001CF8
    lfs f0, 0x50(r3)
    fcmpo cr0, f0, f29
    ble lbl_fn_800F5314_00001CF8
    fmuls f1, f30, f0
    bl fn_8068AD58
    lwz r3, 0x50(r1)
    frsp f3, f1
    lwz r4, 0x54(r1)
    lwz r0, 0x504(r3)
    add r0, r0, r4
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r3, r3, r0
    lfs f0, 0x24(r3)
    lwz r3, 0x8(r3)
    fmuls f3, f0, f3
    lfs f0, 0x54(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_800F5314_00001CF8
    lfs f0, 0x50(r3)
    fmuls f1, f30, f0
    bl fn_8068AD58
    lwz r3, 0x50(r1)
    frsp f4, f1
    lwz r0, 0x54(r1)
    lwz r4, 0x504(r3)
    add r0, r4, r0
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r4, r3, r0
    lwz r3, 0x8(r4)
    lfs f0, 0x24(r4)
    lfs f3, 0x54(r3)
    fdivs f1, f3, f0
    fdivs f22, f3, f4
    bl fn_8068AEA0
    stfs f29, 0x250(r1)
    frsp f25, f1
    lwz r5, 0x50(r1)
    addi r3, r1, 0x3e8
    stfs f29, 0x254(r1)
    li r4, 0x79
    lwz r0, 0x54(r1)
    stfs f22, 0x258(r1)
    lwz r6, 0x504(r5)
    add r0, r6, r0
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r6, r5, r0
    lwz r5, 0x8(r6)
    lfs f0, 0x1c(r6)
    lfs f3, 0x50(r5)
    fnmsubs f1, f30, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x250
    addi r3, r1, 0x3e8
    mr r5, r4
    bl fn_805F93C0
    psq_l f1, 0x0(r24), 0, 0
    addi r3, r1, 0x3b8
    lfs f2, 0x258(r1)
    li r4, 0x79
    psq_st f1, 0x0(r25), 0, 0
    lwz r6, 0x50(r1)
    stfs f2, 0x24c(r1)
    lwz r7, 0x54(r1)
    lwz r0, 0x504(r6)
    add r0, r0, r7
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r5, r6, r0
    lfs f0, 0x24(r5)
    stfs f0, 0x258(r1)
    stfs f29, 0x250(r1)
    stfs f29, 0x254(r1)
    lwz r0, 0x504(r6)
    add r0, r0, r7
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r5, r6, r0
    lfs f0, 0x1c(r5)
    fsubs f1, f0, f25
    bl fn_805F8E70
    mr r4, r24
    mr r5, r24
    addi r3, r1, 0x3b8
    bl fn_805F93C0
    psq_l f1, 0x0(r24), 0, 0
    mr r6, r20
    psq_st f1, 0x0(r23), 0, 0
    addi r4, r1, 0x16c
    lfs f2, 0x258(r1)
    addi r5, r1, 0x160
    lfs f5, 0x270(r1)
    lfs f0, 0x24c(r1)
    fadds f7, f2, f5
    lfs f4, 0x23c(r1)
    fadds f5, f0, f5
    lfs f3, 0x26c(r1)
    lfs f0, 0x248(r1)
    fadds f8, f4, f3
    fadds f6, f0, f3
    lfs f4, 0x238(r1)
    lfs f3, 0x268(r1)
    lfs f0, 0x244(r1)
    fadds f4, f4, f3
    stfs f2, 0x240(r1)
    fadds f0, f0, f3
    lwz r3, lbl_8087EEB0
    stfs f4, 0x160(r1)
    lfs f1, lbl_80881478
    stfs f8, 0x164(r1)
    stfs f7, 0x168(r1)
    stfs f0, 0x16c(r1)
    stfs f6, 0x170(r1)
    stfs f5, 0x174(r1)
    bl fn_80063764
    lfs f3, 0x240(r1)
    mr r6, r20
    lfs f5, 0x264(r1)
    addi r4, r1, 0x154
    lfs f0, 0x24c(r1)
    addi r5, r1, 0x148
    fadds f7, f3, f5
    lfs f4, 0x23c(r1)
    fadds f5, f0, f5
    lfs f3, 0x260(r1)
    lfs f0, 0x248(r1)
    fadds f8, f4, f3
    fadds f6, f0, f3
    lfs f4, 0x238(r1)
    lfs f3, 0x25c(r1)
    lfs f0, 0x244(r1)
    fadds f4, f4, f3
    stfs f8, 0x14c(r1)
    fadds f0, f0, f3
    lwz r3, lbl_8087EEB0
    stfs f4, 0x148(r1)
    lfs f1, lbl_80881478
    stfs f7, 0x150(r1)
    stfs f0, 0x154(r1)
    stfs f6, 0x158(r1)
    stfs f5, 0x15c(r1)
    bl fn_80063764
    lfs f5, 0x24c(r1)
    mr r6, r20
    lfs f3, 0x264(r1)
    addi r4, r1, 0x13c
    lfs f0, 0x270(r1)
    addi r5, r1, 0x130
    fadds f7, f5, f3
    lfs f4, 0x248(r1)
    fadds f5, f5, f0
    lfs f3, 0x260(r1)
    lfs f0, 0x26c(r1)
    fadds f8, f4, f3
    fadds f6, f4, f0
    lfs f4, 0x244(r1)
    lfs f3, 0x25c(r1)
    lfs f0, 0x268(r1)
    fadds f3, f4, f3
    stfs f8, 0x134(r1)
    fadds f0, f4, f0
    lwz r3, lbl_8087EEB0
    stfs f3, 0x130(r1)
    lfs f1, lbl_80881478
    stfs f7, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f6, 0x140(r1)
    stfs f5, 0x144(r1)
    bl fn_80063764
    lfs f5, 0x240(r1)
    mr r6, r20
    lfs f3, 0x264(r1)
    addi r4, r1, 0x124
    lfs f0, 0x270(r1)
    addi r5, r1, 0x118
    fadds f7, f5, f3
    lfs f4, 0x23c(r1)
    fadds f5, f5, f0
    lfs f3, 0x260(r1)
    lfs f0, 0x26c(r1)
    fadds f8, f4, f3
    fadds f6, f4, f0
    lfs f4, 0x238(r1)
    lfs f3, 0x25c(r1)
    lfs f0, 0x268(r1)
    fadds f3, f4, f3
    stfs f8, 0x11c(r1)
    fadds f0, f4, f0
    lwz r3, lbl_8087EEB0
    stfs f3, 0x118(r1)
    lfs f1, lbl_80881478
    stfs f7, 0x120(r1)
    stfs f0, 0x124(r1)
    stfs f6, 0x128(r1)
    stfs f5, 0x12c(r1)
    bl fn_80063764
    lwz r5, 0x50(r1)
    addi r3, r1, 0x388
    lwz r6, 0x54(r1)
    li r4, 0x79
    lwz r0, 0x504(r5)
    add r0, r0, r6
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r5, r5, r0
    lwz r5, 0x8(r5)
    lfs f1, 0x50(r5)
    bl fn_805F8E70
    mr r4, r25
    mr r5, r25
    addi r3, r1, 0x388
    bl fn_805F93C0
    fmuls f1, f31, f25
    addi r3, r1, 0x358
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r23
    mr r5, r23
    addi r3, r1, 0x358
    bl fn_805F93C0
    lfs f3, 0x240(r1)
    mr r6, r20
    lfs f5, 0x270(r1)
    addi r4, r1, 0x10c
    lfs f0, 0x24c(r1)
    addi r5, r1, 0x100
    fadds f7, f3, f5
    lfs f4, 0x23c(r1)
    fadds f5, f0, f5
    lfs f3, 0x26c(r1)
    lfs f0, 0x248(r1)
    fadds f8, f4, f3
    fadds f6, f0, f3
    lfs f4, 0x238(r1)
    lfs f3, 0x268(r1)
    lfs f0, 0x244(r1)
    fadds f4, f4, f3
    stfs f8, 0x104(r1)
    fadds f0, f0, f3
    lwz r3, lbl_8087EEB0
    stfs f4, 0x100(r1)
    lfs f1, lbl_80881478
    stfs f7, 0x108(r1)
    stfs f0, 0x10c(r1)
    stfs f6, 0x110(r1)
    stfs f5, 0x114(r1)
    bl fn_80063764
    lfs f3, 0x240(r1)
    mr r6, r20
    lfs f5, 0x264(r1)
    addi r4, r1, 0xf4
    lfs f0, 0x24c(r1)
    addi r5, r1, 0xe8
    fadds f7, f3, f5
    lfs f4, 0x23c(r1)
    fadds f5, f0, f5
    lfs f3, 0x260(r1)
    lfs f0, 0x248(r1)
    fadds f8, f4, f3
    fadds f6, f0, f3
    lfs f4, 0x238(r1)
    lfs f3, 0x25c(r1)
    lfs f0, 0x244(r1)
    fadds f4, f4, f3
    stfs f8, 0xec(r1)
    fadds f0, f0, f3
    lwz r3, lbl_8087EEB0
    stfs f4, 0xe8(r1)
    lfs f1, lbl_80881478
    stfs f7, 0xf0(r1)
    stfs f0, 0xf4(r1)
    stfs f6, 0xf8(r1)
    stfs f5, 0xfc(r1)
    bl fn_80063764
    lfs f5, 0x24c(r1)
    mr r6, r20
    lfs f3, 0x264(r1)
    addi r4, r1, 0xdc
    lfs f0, 0x270(r1)
    addi r5, r1, 0xd0
    fadds f7, f5, f3
    lfs f4, 0x248(r1)
    fadds f5, f5, f0
    lfs f3, 0x260(r1)
    lfs f0, 0x26c(r1)
    fadds f8, f4, f3
    fadds f6, f4, f0
    lfs f4, 0x244(r1)
    lfs f3, 0x25c(r1)
    lfs f0, 0x268(r1)
    fadds f3, f4, f3
    stfs f8, 0xd4(r1)
    fadds f0, f4, f0
    lwz r3, lbl_8087EEB0
    stfs f3, 0xd0(r1)
    lfs f1, lbl_80881478
    stfs f7, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f6, 0xe0(r1)
    stfs f5, 0xe4(r1)
    bl fn_80063764
    lfs f5, 0x240(r1)
    mr r6, r20
    lfs f3, 0x264(r1)
    addi r4, r1, 0xc4
    lfs f0, 0x270(r1)
    addi r5, r1, 0xb8
    fadds f7, f5, f3
    lfs f4, 0x23c(r1)
    fadds f5, f5, f0
    lfs f3, 0x260(r1)
    lfs f0, 0x26c(r1)
    fadds f8, f4, f3
    fadds f6, f4, f0
    lfs f4, 0x238(r1)
    lfs f3, 0x25c(r1)
    lfs f0, 0x268(r1)
    fadds f3, f4, f3
    stfs f8, 0xbc(r1)
    fadds f0, f4, f0
    lwz r3, lbl_8087EEB0
    stfs f3, 0xb8(r1)
    lfs f1, lbl_80881478
    stfs f7, 0xc0(r1)
    stfs f0, 0xc4(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    bl fn_80063764
    b lbl_fn_800F5314_00001CF8
lbl_fn_800F5314_00001CC4:
    cmpwi r0, 0x1
    bne lbl_fn_800F5314_00001CF8
    lwz r0, 0x504(r20)
    ori r5, r4, 0xffff
    lwz r3, lbl_8087EEB0
    add r0, r0, r22
    lfs f2, lbl_80881478
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r4, r20, r0
    lfs f1, 0x24(r4)
    addi r4, r4, 0xc
    bl fn_80063D3C
lbl_fn_800F5314_00001CF8:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x22c
    lwz r6, 0x54(r1)
    lwz r0, 0x504(r5)
    lwz r4, lbl_8087EFB4
    add r0, r0, r6
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r5, r5, r0
    addi r5, r5, 0xc
    bl fn_800BFAC8
    lfs f0, 0x234(r1)
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_800F5314_00001DBC
    fcmpo cr0, f0, f24
    cror eq, lt, eq
    bne lbl_fn_800F5314_00001DBC
    lwz r5, 0x50(r1)
    addi r3, r1, 0x7b8
    lwz r0, 0x54(r1)
    addi r4, r30, 0x16
    lwz r6, 0x504(r5)
    add r0, r6, r0
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r5, r5, r0
    lwz r6, 0x8(r5)
    lwz r5, 0x4(r6)
    lwz r6, 0x8(r6)
    crclr 6
    bl fn_800DD3FC
    lfs f3, lbl_80881478
    addi r4, r1, 0x7b8
    lfs f4, lbl_808814F4
    li r5, -0x1
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, 0x22c(r1)
    fmr f7, f3
    lfs f2, 0x230(r1)
    fmr f8, f3
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_800F5314_00001DBC:
    lwz r4, 0x54(r1)
    lwz r3, 0x54(r1)
    lwz r5, 0x50(r1)
    addi r0, r3, 0x1
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x54(r1)
lbl_fn_800F5314_00001DD8:
    lwz r4, -0x732c(r28)
    lwz r0, 0x54(r1)
    stw r29, 0x28(r1)
    subf r3, r0, r4
    subf r0, r4, r0
    or r0, r3, r0
    stw r4, 0x2c(r1)
    srwi. r0, r0, 31
    stw r29, 0x8(r1)
    stw r4, 0xc(r1)
    stw r29, 0x40(r1)
    stw r4, 0x44(r1)
    bne lbl_fn_800F5314_0000143C
lbl_fn_800F5314_00001E0C:
    addis r20, r31, 0x1
    mr r19, r31
    li r16, 0x0
    subi r20, r20, 0x45ac
lbl_fn_800F5314_00001E1C:
    addis r3, r19, 0x1
    lwz r0, -0x45b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00001E40
    lwz r0, -0x4398(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F5314_00001E40
    mr r3, r20
    bl fn_8008CD60
lbl_fn_800F5314_00001E40:
    addi r16, r16, 0x1
    addi r20, r20, 0x21c
    cmplwi r16, 0x8
    addi r19, r19, 0x21c
    blt lbl_fn_800F5314_00001E1C
    addis r4, r31, 0x4
    lwz r5, -0x1d0c(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F5314_00001E9C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800F5314_00001E9C
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    bne lbl_fn_800F5314_00001E9C
    lwz r0, 0x38(r5)
    lfs f0, lbl_80881478
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r3, -0x1d0c(r4)
    stfs f0, 0x100(r3)
lbl_fn_800F5314_00001E9C:
    addis r3, r31, 0x4
    lwz r4, -0x1d0c(r3)
    lfs f0, 0xa0(r4)
    lfs f3, 0x100(r4)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_800F5314_00001ED0
    lwz r0, 0x38(r4)
    lfs f0, lbl_80881478
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r3, -0x1d0c(r3)
    stfs f0, 0x100(r3)
lbl_fn_800F5314_00001ED0:
    li r0, 0xea8
    addi r11, r1, 0xe10
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xea0(r1)
    li r0, 0xe98
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xe90(r1)
    li r0, 0xe88
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0xe80(r1)
    li r0, 0xe78
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0xe70(r1)
    li r0, 0xe68
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0xe60(r1)
    li r0, 0xe58
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0xe50(r1)
    li r0, 0xe48
    psq_lx f25, r1, r0, 0, 0
    lfd f25, 0xe40(r1)
    li r0, 0xe38
    psq_lx f24, r1, r0, 0, 0
    lfd f24, 0xe30(r1)
    li r0, 0xe28
    psq_lx f23, r1, r0, 0, 0
    lfd f23, 0xe20(r1)
    li r0, 0xe18
    psq_lx f22, r1, r0, 0, 0
    lfd f22, 0xe10(r1)
    bl _restgpr_16
    lwz r0, 0xeb4(r1)
    mtlr r0
    addi r1, r1, 0xeb0
    blr
}
