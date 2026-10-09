#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_8016E970(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_8074A4C0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885238;
extern u32 lbl_80885260;
extern u32 lbl_80885284;
extern u32 lbl_80885298;
extern u32 lbl_8088529C;
extern u32 lbl_808852A0;
extern u32 lbl_808852A4;

/* Function declarations */
void fn_80341E14(void);
void fn_80341EE4(void);
void fn_80342004(void);
void fn_8034228C(void);
void fn_80342674(void);
void fn_80342BC8(void);
void fn_80342FB4(void);
void fn_8034315C(void);
void fn_803435B8(void);

asm void fn_80341E14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80341EE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    stw r31, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r31, 0x58c(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80342004(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x6
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f3, lbl_80885260
    li r31, 0x1
    lfs f0, lbl_808852A4
    addi r3, r30, 0xb0
    stw r31, 0x3fc(r30)
    li r4, 0x0
    lfs f1, lbl_80885238
    li r5, 0x147
    stfs f3, 0x2fc(r30)
    li r6, 0x0
    lfs f2, lbl_80885284
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80885260
    lis r7, lbl_807C7030@ha
    stfs f1, 0x18(r1)
    addi r7, r7, lbl_807C7030@l
    lwz r3, lbl_8087F3C0
    li r0, -0x1
    stfs f1, 0x1c(r1)
    mr r8, r7
    addi r4, r30, 0x15b0
    addi r5, r30, 0xb0
    stfs f1, 0x20(r1)
    addi r9, r1, 0x18
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x24(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, 0x14b0(r30)
    lis r4, lbl_8074A4C0@ha
    addi r4, r4, lbl_8074A4C0@l
    li r5, 0x0
    addi r31, r3, 0xb0
    mr r3, r31
    addi r4, r4, 0x32c
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80342004_00000384
    li r4, 0x0
    b lbl_fn_80342004_00000390
lbl_fn_80342004_00000384:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r4, r3, r0
lbl_fn_80342004_00000390:
    lfs f0, 0x2c(r4)
    lis r3, lbl_8074A4C0@ha
    lfs f3, 0x1c(r4)
    addi r3, r3, lbl_8074A4C0@l
    lfs f4, 0xc(r4)
    addi r4, r3, 0x327
    stfs f4, 0x40(r1)
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f3, 0x44(r1)
    stfs f0, 0x48(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80342004_000003D0
    li r4, 0x0
    b lbl_fn_80342004_000003DC
lbl_fn_80342004_000003D0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_80342004_000003DC:
    lfs f4, 0x2c(r4)
    addi r5, r1, 0x28
    lfs f0, 0x48(r1)
    addi r3, r30, 0x15d4
    lfs f5, 0x1c(r4)
    lfs f6, 0xc(r4)
    fsubs f2, f0, f4
    lfs f3, 0x44(r1)
    mr r4, r3
    lfs f0, 0x40(r1)
    fsubs f3, f3, f5
    stfs f6, 0x34(r1)
    fsubs f0, f0, f6
    stfs f3, 0x2c(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15dc(r30)
    bl fn_805F98D0
    lis r4, lbl_8074A4C0@ha
    lfs f1, lbl_80885260
    addi r4, r4, lbl_8074A4C0@l
    addi r3, r1, 0x10
    addi r4, r4, 0x37c
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8034228C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    li r31, 0x0
    stw r30, 0x108(r1)
    mr r30, r3
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    stw r31, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r3, 0x7
    lfs f1, lbl_80885238
    li r0, 0x1
    stw r3, 0x58c(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    stfs f1, 0x1648(r30)
    li r5, 0x13f
    li r6, 0x0
    li r7, 0x0
    stb r31, 0x1644(r30)
    li r8, 0x1
    stw r0, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lfs f2, 0x15a0(r30)
    addi r3, r30, 0x1598
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x74
    frsp f3, f2
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x530(r30)
    addi r6, r30, 0x1568
    addi r3, r1, 0x80
    stfs f2, 0x7c(r1)
    fsubs f7, f3, f0
    stfs f2, 0x88(r1)
    frsp f2, f2
    lfs f0, 0x52c(r30)
    lfs f5, 0x78(r1)
    addi r5, r1, 0x14
    stfs f2, 0x1570(r30)
    fmr f2, f7
    fsubs f6, f5, f0
    lfs f4, 0x74(r1)
    lfs f3, 0x528(r30)
    addi r31, r1, 0x8
    frsp f5, f2
    stfs f6, 0x18(r1)
    fsubs f4, f4, f3
    lfs f0, lbl_80885298
    fabs f6, f5
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, lbl_80885238
    stfs f4, 0x14(r1)
    frsp f4, f6
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x156c(r30)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_8034228C_00000658
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8034228C_0000064C
    lfs f0, lbl_8088529C
    b lbl_fn_8034228C_00000650
lbl_fn_8034228C_0000064C:
    lfs f0, lbl_808852A0
lbl_fn_8034228C_00000650:
    stfs f0, 0x30(r1)
    b lbl_fn_8034228C_0000066C
lbl_fn_8034228C_00000658:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8034228C_0000066C:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x38
    lfs f4, 0xd8(r1)
    mr r5, r4
    lfs f5, 0xd4(r1)
    addi r3, r1, 0x90
    lfs f6, 0xd0(r1)
    lfs f7, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f9, 0xe0(r1)
    lfs f10, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f12, 0xf0(r1)
    lfs f13, 0xfc(r1)
    lfs f31, 0xec(r1)
    lfs f30, 0xdc(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x98(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xac(r1)
    stfs f13, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034228C_00000788
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8034228C_00000778
    lfs f0, lbl_8088529C
    b lbl_fn_8034228C_0000077C
lbl_fn_8034228C_00000778:
    lfs f0, lbl_808852A0
lbl_fn_8034228C_0000077C:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8034228C_0000079C
lbl_fn_8034228C_00000788:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8034228C_0000079C:
    lfs f6, lbl_80885238
    addi r4, r1, 0x2c
    lfs f5, 0x78(r1)
    addi r6, r30, 0x1574
    lfs f4, 0x52c(r30)
    fmr f2, f6
    lfs f3, 0x74(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r30)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r30, 0x1580
    lfs f3, 0x7c(r1)
    lfs f0, 0x530(r30)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x157c(r30)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x1588(r30)
    stfs f6, 0x1584(r30)
    bl fn_805F98D0
    lfs f0, lbl_80885238
    addi r3, r30, 0x158c
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1594(r30)
    stfs f0, 0x570(r30)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80342674(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    li r0, 0x0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    stw r28, 0x140(r1)
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x8
    stw r0, 0x58c(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80885284
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, lbl_8087F430
    addi r30, r1, 0xbc
    li r4, 0x0
    li r5, 0x0
    lwz r7, 0x10d8(r3)
    lwz r8, 0x78(r7)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_80342674_000009DC
lbl_fn_80342674_000009B4:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r5
    cmpwi r0, 0x3
    bne lbl_fn_80342674_000009D0
    mulli r0, r4, 0x28
    add r5, r3, r0
    b lbl_fn_80342674_000009E0
lbl_fn_80342674_000009D0:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80342674_000009B4
lbl_fn_80342674_000009DC:
    li r5, 0x0
lbl_fn_80342674_000009E0:
    li r4, 0x0
    li r6, 0x0
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_80342674_00000A1C
lbl_fn_80342674_000009F4:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r6
    cmpwi r0, 0x4
    bne lbl_fn_80342674_00000A10
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_80342674_00000A20
lbl_fn_80342674_00000A10:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80342674_000009F4
lbl_fn_80342674_00000A1C:
    li r4, 0x0
lbl_fn_80342674_00000A20:
    lfs f2, 0xc(r5)
    addi r29, r1, 0x74
    psq_l f1, 0x4(r5), 0, 0
    addi r28, r1, 0x80
    psq_st f1, 0x0(r29), 0, 0
    frsp f0, f2
    lwz r5, lbl_8087F8A0
    addi r3, r1, 0x8c
    stfs f2, 0x7c(r1)
    lfs f4, 0x74(r1)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x88(r1)
    lfs f6, 0x78(r1)
    psq_st f1, 0x0(r28), 0, 0
    lwz r4, 0x48(r5)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f7, f0, f2
    lfs f3, 0x8c(r1)
    lfs f5, 0x90(r1)
    fmuls f0, f7, f7
    fsubs f3, f4, f3
    stfs f2, 0x94(r1)
    fsubs f4, f6, f5
    stfs f3, 0x98(r1)
    fmadds f1, f3, f3, f0
    stfs f4, 0x9c(r1)
    stfs f7, 0xa0(r1)
    bl fn_8068B100
    lfs f4, 0x88(r1)
    frsp f30, f1
    lfs f0, 0x94(r1)
    lfs f3, 0x80(r1)
    fsubs f6, f4, f0
    lfs f0, 0x8c(r1)
    lfs f4, 0x84(r1)
    fsubs f5, f3, f0
    lfs f3, 0x90(r1)
    fmuls f0, f6, f6
    fsubs f3, f4, f3
    stfs f5, 0xa4(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0xa8(r1)
    stfs f6, 0xac(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f30, f0
    bge lbl_fn_80342674_00000AEC
    b lbl_fn_80342674_00000AF0
lbl_fn_80342674_00000AEC:
    mr r28, r29
lbl_fn_80342674_00000AF0:
    lfs f2, 0x8(r28)
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r28), 0, 0
    addi r5, r31, 0x1568
    frsp f3, f2
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x530(r31)
    addi r4, r1, 0x14
    stfs f2, 0xb8(r1)
    addi r29, r1, 0x8
    fsubs f7, f3, f0
    stfs f2, 0xc4(r1)
    frsp f2, f2
    lfs f0, 0x52c(r31)
    lfs f5, 0xb4(r1)
    stfs f2, 0x1570(r31)
    fmr f2, f7
    lfs f4, 0xb0(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r31)
    lfs f0, lbl_80885298
    frsp f5, f2
    stfs f6, 0x18(r1)
    fsubs f4, f4, f3
    lfs f3, lbl_80885238
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r5), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x156c(r31)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_80342674_00000BA4
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80342674_00000B98
    lfs f0, lbl_8088529C
    b lbl_fn_80342674_00000B9C
lbl_fn_80342674_00000B98:
    lfs f0, lbl_808852A0
lbl_fn_80342674_00000B9C:
    stfs f0, 0x30(r1)
    b lbl_fn_80342674_00000BB8
lbl_fn_80342674_00000BA4:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_80342674_00000BB8:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x38
    lfs f4, 0x110(r1)
    mr r5, r4
    lfs f5, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f6, 0x108(r1)
    lfs f7, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f9, 0x118(r1)
    lfs f10, 0x130(r1)
    lfs f11, 0x12c(r1)
    lfs f12, 0x128(r1)
    lfs f13, 0x134(r1)
    lfs f31, 0x124(r1)
    lfs f30, 0x114(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0xd4(r1)
    stfs f31, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80342674_00000CD4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_80342674_00000CC4
    lfs f0, lbl_8088529C
    b lbl_fn_80342674_00000CC8
lbl_fn_80342674_00000CC4:
    lfs f0, lbl_808852A0
lbl_fn_80342674_00000CC8:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_80342674_00000CE8
lbl_fn_80342674_00000CD4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_80342674_00000CE8:
    lfs f6, lbl_80885238
    addi r4, r1, 0x2c
    lfs f5, 0xb4(r1)
    addi r6, r31, 0x1574
    lfs f4, 0x52c(r31)
    fmr f2, f6
    lfs f3, 0xb0(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r31, 0x1580
    lfs f3, 0xb8(r1)
    lfs f0, 0x530(r31)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x157c(r31)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x1588(r31)
    stfs f6, 0x1584(r31)
    bl fn_805F98D0
    lfs f0, lbl_80885238
    addi r3, r31, 0x158c
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1594(r31)
    stfs f0, 0x570(r31)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80342BC8(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x9
    stw r0, 0x58c(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x156
    lfs f2, lbl_80885284
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r7, 0x14b0(r30)
    addi r4, r1, 0x74
    lfs f0, 0x530(r30)
    addi r6, r30, 0x1568
    lfs f2, 0x530(r7)
    addi r3, r1, 0x80
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r1, 0x14
    frsp f3, f2
    psq_st f1, 0x0(r4), 0, 0
    addi r31, r1, 0x8
    stfs f2, 0x7c(r1)
    fsubs f7, f3, f0
    lfs f0, 0x52c(r30)
    stfs f2, 0x88(r1)
    frsp f2, f2
    lfs f5, 0x78(r1)
    stfs f2, 0x1570(r30)
    fmr f2, f7
    lfs f4, 0x74(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r30)
    lfs f0, lbl_80885298
    frsp f5, f2
    fsubs f4, f4, f3
    stfs f6, 0x18(r1)
    lfs f3, lbl_80885238
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r6), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x156c(r30)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_80342BC8_00000F98
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80342BC8_00000F8C
    lfs f0, lbl_8088529C
    b lbl_fn_80342BC8_00000F90
lbl_fn_80342BC8_00000F8C:
    lfs f0, lbl_808852A0
lbl_fn_80342BC8_00000F90:
    stfs f0, 0x30(r1)
    b lbl_fn_80342BC8_00000FAC
lbl_fn_80342BC8_00000F98:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_80342BC8_00000FAC:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x38
    lfs f4, 0xd8(r1)
    mr r5, r4
    lfs f5, 0xd4(r1)
    addi r3, r1, 0x90
    lfs f6, 0xd0(r1)
    lfs f7, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f9, 0xe0(r1)
    lfs f10, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f12, 0xf0(r1)
    lfs f13, 0xfc(r1)
    lfs f31, 0xec(r1)
    lfs f30, 0xdc(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x98(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xac(r1)
    stfs f13, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80342BC8_000010C8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_80342BC8_000010B8
    lfs f0, lbl_8088529C
    b lbl_fn_80342BC8_000010BC
lbl_fn_80342BC8_000010B8:
    lfs f0, lbl_808852A0
lbl_fn_80342BC8_000010BC:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_80342BC8_000010DC
lbl_fn_80342BC8_000010C8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_80342BC8_000010DC:
    lfs f6, lbl_80885238
    addi r4, r1, 0x2c
    lfs f5, 0x78(r1)
    addi r6, r30, 0x1574
    lfs f4, 0x52c(r30)
    fmr f2, f6
    lfs f3, 0x74(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r30)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r30, 0x1580
    lfs f3, 0x7c(r1)
    lfs f0, 0x530(r30)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x157c(r30)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x1588(r30)
    stfs f6, 0x1584(r30)
    bl fn_805F98D0
    lfs f0, lbl_80885238
    addi r3, r30, 0x158c
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1594(r30)
    stfs f0, 0x570(r30)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80342FB4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    li r30, 0x0
    stw r29, 0x44(r1)
    mr r29, r3
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    stw r30, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r4, r29
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    li r0, 0xe
    stw r0, 0x58c(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80885260
    li r31, 0x1
    stw r3, 0x590(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r31, 0x3fc(r29)
    li r5, 0x15c
    lfs f2, lbl_80885284
    li r6, 0x0
    stfs f0, 0x2fc(r29)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    stw r30, 0x16c8(r29)
    mr r3, r29
    li r4, 0x3f0
    bl fn_80232B7C
    lfs f0, lbl_80885238
    li r0, -0x1
    lfs f1, lbl_80885260
    addi r4, r29, 0x15a4
    stfs f0, 0x1c(r1)
    addi r5, r29, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
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
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8034315C(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    li r0, 0x0
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    stw r30, 0x138(r1)
    mr r30, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    li r0, 0xa
    stw r0, 0x58c(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x142
    lfs f2, lbl_80885284
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r7, 0x14b0(r30)
    addi r4, r1, 0xa4
    lfs f0, 0x530(r30)
    addi r6, r30, 0x1568
    lfs f2, 0x530(r7)
    addi r3, r1, 0xb0
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r1, 0x44
    frsp f3, f2
    psq_st f1, 0x0(r4), 0, 0
    addi r31, r1, 0x38
    stfs f2, 0xac(r1)
    fsubs f7, f3, f0
    lfs f0, 0x52c(r30)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    lfs f5, 0xa8(r1)
    stfs f2, 0x1570(r30)
    fmr f2, f7
    lfs f4, 0xa4(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r30)
    lfs f0, lbl_80885298
    frsp f5, f2
    fsubs f4, f4, f3
    stfs f6, 0x48(r1)
    lfs f3, lbl_80885238
    fabs f6, f5
    stfs f4, 0x44(r1)
    psq_st f1, 0x0(r6), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x156c(r30)
    stfs f7, 0x4c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x40(r1)
    bge lbl_fn_8034315C_0000152C
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8034315C_00001520
    lfs f0, lbl_8088529C
    b lbl_fn_8034315C_00001524
lbl_fn_8034315C_00001520:
    lfs f0, lbl_808852A0
lbl_fn_8034315C_00001524:
    stfs f0, 0x60(r1)
    b lbl_fn_8034315C_00001540
lbl_fn_8034315C_0000152C:
    fmr f2, f5
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x60(r1)
lbl_fn_8034315C_00001540:
    lfs f0, 0x60(r1)
    addi r3, r1, 0x100
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x68
    lfs f4, 0x108(r1)
    mr r5, r4
    lfs f5, 0x104(r1)
    addi r3, r1, 0xc0
    lfs f6, 0x100(r1)
    lfs f7, 0x118(r1)
    lfs f8, 0x114(r1)
    lfs f9, 0x110(r1)
    lfs f10, 0x128(r1)
    lfs f11, 0x124(r1)
    lfs f12, 0x120(r1)
    lfs f13, 0x12c(r1)
    lfs f31, 0x11c(r1)
    lfs f30, 0x10c(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x40(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f6, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f4, 0xa0(r1)
    stfs f6, 0xc0(r1)
    stfs f5, 0xc4(r1)
    stfs f4, 0xc8(r1)
    stfs f9, 0x8c(r1)
    stfs f8, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f9, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f7, 0xd8(r1)
    stfs f12, 0x80(r1)
    stfs f11, 0x84(r1)
    stfs f10, 0x88(r1)
    stfs f12, 0xe0(r1)
    stfs f11, 0xe4(r1)
    stfs f10, 0xe8(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x78(r1)
    stfs f13, 0x7c(r1)
    stfs f30, 0xcc(r1)
    stfs f31, 0xdc(r1)
    stfs f13, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034315C_0000165C
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8034315C_0000164C
    lfs f0, lbl_8088529C
    b lbl_fn_8034315C_00001650
lbl_fn_8034315C_0000164C:
    lfs f0, lbl_808852A0
lbl_fn_8034315C_00001650:
    fneg f0, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_8034315C_00001670
lbl_fn_8034315C_0000165C:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x5c(r1)
lbl_fn_8034315C_00001670:
    lfs f6, lbl_80885238
    addi r4, r1, 0x5c
    lfs f5, 0xa8(r1)
    addi r6, r30, 0x1574
    lfs f4, 0x52c(r30)
    fmr f2, f6
    lfs f3, 0xa4(r1)
    addi r5, r1, 0x50
    fsubs f5, f5, f4
    lfs f0, 0x528(r30)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x40(r1)
    frsp f2, f2
    addi r3, r30, 0x1580
    lfs f3, 0xac(r1)
    lfs f0, 0x530(r30)
    stfs f4, 0x50(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x157c(r30)
    fmr f2, f0
    stfs f5, 0x54(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x64(r1)
    stfs f0, 0x58(r1)
    stfs f2, 0x1588(r30)
    stfs f6, 0x1584(r30)
    bl fn_805F98D0
    lfs f0, lbl_80885238
    addi r5, r30, 0x158c
    psq_l f1, 0x528(r30), 0, 0
    mr r3, r30
    lfs f2, 0x530(r30)
    li r4, 0x3f1
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1594(r30)
    stfs f0, 0x570(r30)
    bl fn_80232B7C
    lfs f0, lbl_80885238
    li r3, -0x1
    lfs f1, lbl_80885260
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x1698
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
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_803435B8(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    li r0, 0x0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    stw r28, 0x140(r1)
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r3, 0xf
    li r0, 0x1
    stw r3, 0x58c(r31)
    lfs f1, lbl_80885238
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80885284
    li r5, 0x13f
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, lbl_8087F430
    addi r30, r1, 0xbc
    li r4, 0x0
    li r5, 0x0
    lwz r7, 0x10d8(r3)
    lwz r8, 0x78(r7)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_803435B8_00001920
lbl_fn_803435B8_000018F8:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r5
    cmpwi r0, 0x3
    bne lbl_fn_803435B8_00001914
    mulli r0, r4, 0x28
    add r5, r3, r0
    b lbl_fn_803435B8_00001924
lbl_fn_803435B8_00001914:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_803435B8_000018F8
lbl_fn_803435B8_00001920:
    li r5, 0x0
lbl_fn_803435B8_00001924:
    li r4, 0x0
    li r6, 0x0
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_803435B8_00001960
lbl_fn_803435B8_00001938:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r6
    cmpwi r0, 0x4
    bne lbl_fn_803435B8_00001954
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_803435B8_00001964
lbl_fn_803435B8_00001954:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_803435B8_00001938
lbl_fn_803435B8_00001960:
    li r4, 0x0
lbl_fn_803435B8_00001964:
    lfs f2, 0xc(r5)
    addi r29, r1, 0x74
    psq_l f1, 0x4(r5), 0, 0
    addi r28, r1, 0x80
    psq_st f1, 0x0(r29), 0, 0
    frsp f0, f2
    lwz r5, lbl_8087F8A0
    addi r3, r1, 0x8c
    stfs f2, 0x7c(r1)
    lfs f4, 0x74(r1)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x88(r1)
    lfs f6, 0x78(r1)
    psq_st f1, 0x0(r28), 0, 0
    lwz r4, 0x48(r5)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f7, f0, f2
    lfs f3, 0x8c(r1)
    lfs f5, 0x90(r1)
    fmuls f0, f7, f7
    fsubs f3, f4, f3
    stfs f2, 0x94(r1)
    fsubs f4, f6, f5
    stfs f3, 0x98(r1)
    fmadds f1, f3, f3, f0
    stfs f4, 0x9c(r1)
    stfs f7, 0xa0(r1)
    bl fn_8068B100
    lfs f4, 0x88(r1)
    frsp f30, f1
    lfs f0, 0x94(r1)
    lfs f3, 0x80(r1)
    fsubs f6, f4, f0
    lfs f0, 0x8c(r1)
    lfs f4, 0x84(r1)
    fsubs f5, f3, f0
    lfs f3, 0x90(r1)
    fmuls f0, f6, f6
    fsubs f3, f4, f3
    stfs f5, 0xa4(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0xa8(r1)
    stfs f6, 0xac(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f30, f0
    bge lbl_fn_803435B8_00001A30
    b lbl_fn_803435B8_00001A34
lbl_fn_803435B8_00001A30:
    mr r28, r29
lbl_fn_803435B8_00001A34:
    lfs f2, 0x8(r28)
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r28), 0, 0
    addi r5, r31, 0x1568
    frsp f3, f2
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x530(r31)
    addi r4, r1, 0x14
    stfs f2, 0xb8(r1)
    addi r29, r1, 0x8
    fsubs f7, f3, f0
    stfs f2, 0xc4(r1)
    frsp f2, f2
    lfs f0, 0x52c(r31)
    lfs f5, 0xb4(r1)
    stfs f2, 0x1570(r31)
    fmr f2, f7
    lfs f4, 0xb0(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r31)
    lfs f0, lbl_80885298
    frsp f5, f2
    stfs f6, 0x18(r1)
    fsubs f4, f4, f3
    lfs f3, lbl_80885238
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r5), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x156c(r31)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_803435B8_00001AE8
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_803435B8_00001ADC
    lfs f0, lbl_8088529C
    b lbl_fn_803435B8_00001AE0
lbl_fn_803435B8_00001ADC:
    lfs f0, lbl_808852A0
lbl_fn_803435B8_00001AE0:
    stfs f0, 0x30(r1)
    b lbl_fn_803435B8_00001AFC
lbl_fn_803435B8_00001AE8:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_803435B8_00001AFC:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x38
    lfs f4, 0x110(r1)
    mr r5, r4
    lfs f5, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f6, 0x108(r1)
    lfs f7, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f9, 0x118(r1)
    lfs f10, 0x130(r1)
    lfs f11, 0x12c(r1)
    lfs f12, 0x128(r1)
    lfs f13, 0x134(r1)
    lfs f31, 0x124(r1)
    lfs f30, 0x114(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0xd4(r1)
    stfs f31, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803435B8_00001C18
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_803435B8_00001C08
    lfs f0, lbl_8088529C
    b lbl_fn_803435B8_00001C0C
lbl_fn_803435B8_00001C08:
    lfs f0, lbl_808852A0
lbl_fn_803435B8_00001C0C:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_803435B8_00001C2C
lbl_fn_803435B8_00001C18:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_803435B8_00001C2C:
    lfs f6, lbl_80885238
    addi r4, r1, 0x2c
    lfs f5, 0xb4(r1)
    addi r6, r31, 0x1574
    lfs f4, 0x52c(r31)
    fmr f2, f6
    lfs f3, 0xb0(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r31, 0x1580
    lfs f3, 0xb8(r1)
    lfs f0, 0x530(r31)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x157c(r31)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x1588(r31)
    stfs f6, 0x1584(r31)
    bl fn_805F98D0
    lfs f0, lbl_80885238
    addi r3, r31, 0x158c
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1594(r31)
    stfs f0, 0x570(r31)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}
