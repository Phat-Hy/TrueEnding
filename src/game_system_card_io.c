#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_80011034(void);
extern void fn_80013338(void);
extern void fn_8003EA3C(void);
extern void fn_8004ED34(void);
extern void fn_80097CCC(void);
extern void fn_800F8548(void);
extern void fn_801255C8(void);
extern void fn_80127D8C(void);
extern void fn_80128930(void);
extern void fn_8013A194(void);
extern void fn_8013C460(void);
extern void fn_80161880(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_80239DAC(void);
extern void fn_802657FC(void);
extern void fn_80356FFC(void);
extern void fn_8035A9F4(void);
extern void fn_8035ACB8(void);
extern void fn_8035ACF0(void);
extern void fn_8059C2AC(void);
extern void fn_805A49E8(void);
extern void fn_805A4A20(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 jumptable_807897E8[];
extern u8 jumptable_80789834[];
extern u8 lbl_8074B088[];
extern u8 lbl_8074B090[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_8088552C;
extern u32 lbl_80885540;
extern u32 lbl_80885544;
extern u32 lbl_80885550;
extern u32 lbl_80885558;
extern u32 lbl_8088555C;
extern u32 lbl_80885560;
extern u32 lbl_80885564;
extern u32 lbl_80885568;
extern u32 lbl_8088556C;
extern u32 lbl_80885570;
extern u32 lbl_8088557C;
extern u32 lbl_80885580;
extern u32 lbl_80885584;
extern u32 lbl_80885588;
extern u32 lbl_8088558C;
extern u32 lbl_80885590;
extern u32 lbl_80885594;
extern u32 lbl_80885598;
extern u32 lbl_8088559C;
extern u32 lbl_808855A0;

/* Function declarations */
void fn_80357330(void);
void fn_80357344(void);
void fn_8035738C(void);
void fn_803576F8(void);
void fn_803579FC(void);
void fn_80357ED8(void);
void fn_80357F04(void);
void fn_80357F38(void);
void fn_80357F48(void);

asm void fn_80357330(void)
{
    nofralloc
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0xd1c(r3)
    stw r0, 0x14ec(r3)
    blr
}

asm void fn_80357344(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8016E970
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035738C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    fmr f30, f1
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8035738C_0000038C
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x5c
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80885564
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8035738C_00000100
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8035738C_00000100:
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    lfs f0, lbl_80885564
    addi r31, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8035738C_00000150
    lfs f3, 0x50(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f3, f0
    ble lbl_fn_8035738C_00000144
    lfs f0, lbl_80885568
    b lbl_fn_8035738C_00000148
lbl_fn_8035738C_00000144:
    lfs f0, lbl_8088556C
lbl_fn_8035738C_00000148:
    stfs f0, 0x48(r1)
    b lbl_fn_8035738C_00000164
lbl_fn_8035738C_00000150:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8035738C_00000164:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088552C
    addi r4, r1, 0x38
    lfs f28, 0x70(r1)
    mr r5, r4
    lfs f29, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80885550
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885564
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8035738C_00000280
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f3, f0
    ble lbl_fn_8035738C_00000270
    lfs f0, lbl_80885568
    b lbl_fn_8035738C_00000274
lbl_fn_8035738C_00000270:
    lfs f0, lbl_8088556C
lbl_fn_8035738C_00000274:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8035738C_00000294
lbl_fn_8035738C_00000280:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8035738C_00000294:
    addi r3, r1, 0x44
    lfs f2, lbl_8088552C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x538(r30)
    lfs f3, 0x54(r1)
    lfs f0, lbl_80885558
    fsubs f3, f3, f4
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_8035738C_000002D4
    lfs f0, lbl_8088555C
    fsubs f0, f3, f0
    fmadds f28, f30, f0, f4
    b lbl_fn_8035738C_000002F4
lbl_fn_8035738C_000002D4:
    lfs f0, lbl_80885560
    fcmpo cr0, f3, f0
    bge lbl_fn_8035738C_000002F0
    lfs f0, lbl_8088555C
    fadds f0, f0, f3
    fmadds f28, f30, f0, f4
    b lbl_fn_8035738C_000002F4
lbl_fn_8035738C_000002F0:
    fmadds f28, f30, f3, f4
lbl_fn_8035738C_000002F4:
    lfs f0, 0x538(r30)
    lis r3, lbl_8074B088@ha
    lfd f2, lbl_8074B088@l(r3)
    fsubs f1, f28, f0
    bl fn_8068AEA8
    frsp f29, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f29, f0
    ble lbl_fn_8035738C_00000320
    lfs f0, lbl_8088555C
    fsubs f29, f29, f0
lbl_fn_8035738C_00000320:
    lfs f0, lbl_80885560
    fcmpo cr0, f29, f0
    bge lbl_fn_8035738C_00000334
    lfs f0, lbl_8088555C
    fadds f29, f29, f0
lbl_fn_8035738C_00000334:
    lis r3, lbl_8074B088@ha
    frsp f1, f28
    stfs f28, 0x538(r30)
    lfd f2, lbl_8074B088@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f3, f0
    ble lbl_fn_8035738C_00000360
    lfs f0, lbl_8088555C
    fsubs f3, f3, f0
lbl_fn_8035738C_00000360:
    lfs f0, lbl_80885560
    fcmpo cr0, f3, f0
    lfs f0, lbl_80885570
    fmuls f0, f0, f29
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_8035738C_0000038C
    li r3, 0x1
    b lbl_fn_8035738C_00000390
lbl_fn_8035738C_0000038C:
    li r3, 0x0
lbl_fn_8035738C_00000390:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803576F8(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x100
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    stfd f26, 0x100(r1)
    psq_st f26, 0x108(r1), 0, 0
    bl _savegpr_22
    lfs f0, lbl_8088552C
    lis r4, lbl_8074B090@ha
    stfs f0, 0x5c(r1)
    lis r5, 0x4178
    lfd f31, lbl_8074B090@l(r4)
    fmr f30, f1
    stfs f0, 0x60(r1)
    addi r6, r1, 0x50
    lfs f27, lbl_80885580
    mr r25, r3
    stfs f0, 0x64(r1)
    lfs f28, lbl_80885584
    addi r23, r5, 0x749f
    lwz r4, 0xd1c(r3)
    addi r31, r1, 0x20
    lfs f29, lbl_80885564
    addi r30, r1, 0x44
    psq_l f1, 0x528(r4), 0, 0
    addi r29, r1, 0x5c
    lfs f2, 0x530(r4)
    addi r27, r1, 0x14
    stfs f2, 0x58(r1)
    addi r28, r3, 0x1534
    li r26, 0x0
    lis r24, 0x4330
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x530(r3)
    lfs f5, 0x54(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    lfs f3, 0x50(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
lbl_fn_803576F8_000004A0:
    cmpwi r26, 0xa
    addi r26, r26, 0x1
    bne lbl_fn_803576F8_00000528
    lfs f3, lbl_8088552C
    addi r3, r1, 0x68
    lfs f0, lbl_80885550
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r25)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x530(r25)
    addi r4, r1, 0x38
    lfs f0, 0x34(r1)
    addi r3, r25, 0x1534
    lfs f5, 0x52c(r25)
    fadds f2, f3, f0
    lfs f4, 0x30(r1)
    lfs f0, 0x2c(r1)
    lfs f3, 0x528(r25)
    fadds f4, f5, f4
    stfs f2, 0x40(r1)
    fadds f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x153c(r25)
    b lbl_fn_803576F8_00000684
lbl_fn_803576F8_00000528:
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_803576F8_00000548
    lfs f26, lbl_80885550
    b lbl_fn_803576F8_0000054C
lbl_fn_803576F8_00000548:
    lfs f26, lbl_8088557C
lbl_fn_803576F8_0000054C:
    bl fn_80680CF8
    mulhw r0, r23, r3
    stw r24, 0xc8(r1)
    lfs f0, 0x1530(r25)
    lfs f3, 0x152c(r25)
    fsubs f0, f0, f3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x44
    xoris r0, r0, 0x8000
    stw r0, 0xcc(r1)
    lfd f4, 0xc8(r1)
    fsubs f4, f4, f31
    fdivs f4, f4, f27
    fmadds f0, f0, f4, f3
    fmuls f0, f28, f0
    fmuls f26, f26, f0
    bl fn_805F9920
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f29
    blt lbl_fn_803576F8_000005DC
    psq_l f1, 0x0(r30), 0, 0
    mr r3, r31
    lfs f2, 0x4c(r1)
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x28(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x64(r1)
lbl_fn_803576F8_000005DC:
    fmr f1, f26
    addi r3, r1, 0x98
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x5c
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x64(r1)
    mr r3, r25
    lfs f0, 0x60(r1)
    fmuls f6, f4, f30
    lfs f3, 0x5c(r1)
    fmuls f5, f0, f30
    lfs f0, 0x58(r1)
    fmuls f4, f3, f30
    lfs f3, 0x54(r1)
    fadds f2, f0, f6
    lfs f0, 0x50(r1)
    fadds f3, f3, f5
    stfs f4, 0x8(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
    stfs f5, 0xc(r1)
    lwz r22, lbl_8087EE98
    stfs f6, 0x10(r1)
    stfs f2, 0x1c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r22
    addi r5, r1, 0x50
    addi r6, r25, 0x1534
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_803576F8_000004A0
lbl_fn_803576F8_00000684:
    addi r11, r1, 0x100
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    psq_l f26, 0x108(r1), 0, 0
    lfd f26, 0x100(r1)
    bl _restgpr_22
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_803579FC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    addi r3, r3, 0x14bc
    stw r30, 0x48(r1)
    mr r30, r4
    bl fn_80357ED8
    stw r30, 0x14d8(r31)
    mr r3, r31
    mr r4, r30
    bl fn_802657FC
    lwz r0, 0x58c(r31)
    cmplwi r0, 0x12
    bgt lbl_fn_803579FC_00000B90
    lis r3, jumptable_807897E8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807897E8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r31)
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    li r4, 0x1
    bl fn_8013C460
    lfs f1, lbl_8088552C
    mr r3, r31
    li r4, 0x1c7
    li r5, 0x1
    bl fn_8035ACB8
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    li r4, 0x0
    bl fn_8013C460
    mr r3, r31
    bl fn_80357330
    lwz r4, 0x14ec(r31)
    addi r3, r31, 0xc64
    addi r5, r31, 0x528
    li r6, 0x0
    bl fn_80128930
    lfs f0, lbl_80885588
    addi r3, r31, 0xc64
    stfs f0, 0xc8c(r31)
    bl fn_801255C8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r31)
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    li r4, 0x0
    bl fn_8013C460
    lfs f1, lbl_80885550
    mr r3, r31
    lfs f2, lbl_8088552C
    bl fn_8035738C
    lfs f1, lbl_80885550
    mr r3, r31
    li r4, 0x156
    li r5, 0x0
    bl fn_8035ACB8
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    li r4, 0x0
    bl fn_8013C460
    lfs f1, lbl_80885550
    mr r3, r31
    lfs f2, lbl_8088552C
    bl fn_8035738C
    lfs f1, lbl_80885550
    mr r3, r31
    li r4, 0x13f
    li r5, 0x0
    bl fn_8035ACB8
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    li r4, 0x0
    bl fn_8013C460
    lfs f1, lbl_80885550
    mr r3, r31
    lfs f2, lbl_8088552C
    bl fn_8035738C
    lfs f1, lbl_8088558C
    mr r3, r31
    li r4, 0x140
    li r5, 0x0
    bl fn_8035ACB8
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    li r4, 0x0
    bl fn_8013C460
    lfs f1, lbl_80885550
    mr r3, r31
    lfs f2, lbl_8088552C
    bl fn_8035738C
    li r0, 0x0
    stw r0, 0x598(r31)
    lfs f1, lbl_80885550
    mr r3, r31
    li r4, 0x157
    li r5, 0x0
    bl fn_8035ACB8
    b lbl_fn_803579FC_00000B90
    lwz r5, 0x14e4(r31)
    lis r3, 0x5555
    lfs f0, lbl_80885590
    addi r0, r3, 0x5556
    addi r4, r5, 0x1
    stw r5, 0x14e0(r31)
    mulhw r3, r0, r4
    stfs f0, 0x14e8(r31)
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r4
    stw r0, 0x14e4(r31)
    bl fn_80356FFC
    lwz r5, 0x1578(r31)
    mr r4, r31
    bl fn_8059C2AC
    bl fn_80356FFC
    lwz r5, 0x157c(r31)
    mr r4, r31
    bl fn_8059C2AC
    bl fn_80356FFC
    lwz r5, 0x1580(r31)
    mr r4, r31
    bl fn_8059C2AC
    addi r3, r1, 0x20
    bl fn_80357F04
    lwz r0, 0x14e0(r31)
    lis r8, lbl_807C6B90@ha
    mr r5, r31
    mr r6, r31
    slwi r0, r0, 2
    addi r3, r1, 0x20
    add r4, r31, r0
    addi r8, r8, lbl_807C6B90@l
    lwz r4, 0x1578(r4)
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r0, 0x14e0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803579FC_0000094C
    mr r3, r31
    addi r4, r31, 0x16a4
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_803579FC_000009A8
    mr r3, r31
    addi r4, r31, 0x16a4
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_803579FC_000009A8
lbl_fn_803579FC_0000094C:
    cmpwi r0, 0x1
    bne lbl_fn_803579FC_0000097C
    mr r3, r31
    addi r4, r31, 0x166c
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_803579FC_000009A8
    mr r3, r31
    addi r4, r31, 0x166c
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_803579FC_000009A8
lbl_fn_803579FC_0000097C:
    cmpwi r0, 0x2
    bne lbl_fn_803579FC_000009A8
    mr r3, r31
    addi r4, r31, 0x1684
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_803579FC_000009A8
    mr r3, r31
    addi r4, r31, 0x1684
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_803579FC_000009A8:
    mr r3, r31
    li r4, 0x0
    bl fn_8013C460
    lfs f1, lbl_80885550
    mr r3, r31
    li r4, 0x173
    li r5, 0x0
    bl fn_8035ACB8
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
    mr r3, r31
    li r4, 0x0
    bl fn_8013C460
    lfs f1, lbl_80885550
    mr r3, r31
    lfs f2, lbl_8088552C
    bl fn_8035738C
    bl fn_8013A194
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    lfs f1, lbl_80885550
    li r4, 0x1d2
    li r5, 0x0
    bl fn_8035ACB8
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    li r4, 0x0
    bl fn_8013C460
    lfs f1, lbl_80885594
    mr r3, r31
    lfs f2, lbl_8088552C
    bl fn_8035738C
    li r0, 0x0
    stw r0, 0x598(r31)
    lfs f1, lbl_80885550
    mr r3, r31
    li r4, 0x15c
    li r5, 0x0
    bl fn_8035ACB8
    b lbl_fn_803579FC_00000B90
    lwz r0, 0x1550(r31)
    cmpwi r0, 0x0
    ble lbl_fn_803579FC_00000A74
    lfs f1, lbl_80885540
    lfs f0, 0x16c0(r31)
    fmuls f0, f1, f0
    stfs f0, 0x1558(r31)
    b lbl_fn_803579FC_00000A7C
lbl_fn_803579FC_00000A74:
    lfs f0, lbl_80885540
    stfs f0, 0x1558(r31)
lbl_fn_803579FC_00000A7C:
    lfs f1, lbl_80885550
    mr r3, r31
    lfs f2, lbl_8088552C
    bl fn_8035738C
    lfs f1, lbl_80885598
    mr r3, r31
    li r4, 0x1ea
    li r5, 0x0
    bl fn_8035ACB8
    lfs f1, lbl_80885588
    mr r3, r31
    bl fn_803576F8
    addi r3, r1, 0x8
    addi r4, r31, 0x1534
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_80011034
    lfs f0, 0x18(r1)
    stfs f0, 0x538(r31)
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    addi r4, r31, 0x168c
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_803579FC_00000AF8
    mr r3, r31
    addi r4, r31, 0x168c
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_803579FC_00000AF8:
    lfs f1, lbl_8088552C
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f1, lbl_80885550
    mr r3, r31
    li r4, 0x1ea
    li r5, 0x0
    bl fn_8035ACB8
    lwz r4, 0x58c(r31)
    mr r3, r31
    bl fn_8035ACF0
    lfs f1, 0x1528(r31)
    mr r3, r31
    bl fn_803576F8
    b lbl_fn_803579FC_00000B90
    mr r3, r31
    li r4, 0x0
    bl fn_8013C460
    lfs f1, lbl_80885550
    mr r3, r31
    lfs f2, lbl_8088552C
    bl fn_8035738C
    lfs f1, lbl_80885550
    mr r3, r31
    li r4, 0x14a
    li r5, 0x0
    bl fn_8035ACB8
    lfs f1, lbl_8088559C
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80357F38
    b lbl_fn_803579FC_00000B90
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_803579FC_00000B90:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80357ED8(void)
{
    nofralloc
    lwz r0, 0x10(r3)
    li r4, 0x0
    stw r4, 0x0(r3)
    clrlwi r0, r0, 4
    oris r0, r0, 0x800
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stw r0, 0x10(r3)
    stw r4, 0x14(r3)
    blr
}

asm void fn_80357F04(void)
{
    nofralloc
    lwz r0, 0x1c(r3)
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x0(r3)
    clrlwi r0, r0, 4
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r5, 0x10(r3)
    stw r4, 0x14(r3)
    stw r0, 0x1c(r3)
    stw r4, 0x18(r3)
    blr
}

asm void fn_80357F38(void)
{
    nofralloc
    mulli r0, r4, 0x30
    add r3, r3, r0
    stfs f1, 0x234(r3)
    blr
}

asm void fn_80357F48(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    lwz r5, 0xd1c(r3)
    lwz r4, 0x14c0(r3)
    cmpwi r5, 0x0
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    beq lbl_fn_80357F48_00000CC4
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80357F48_00000CC4
    lwz r4, 0x58c(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x2
    bgt lbl_fn_80357F48_00000CC4
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80357F48_00000CC4
    lwz r12, 0x0(r3)
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r5, 0xd1c(r31)
    mr r3, r31
    li r4, 0x141
    li r6, 0x0
    addi r5, r5, 0xb8
    bl fn_80161880
    lfs f0, lbl_80885544
    stfs f0, 0x2e8(r31)
lbl_fn_80357F48_00000CC4:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80357F48_00000D28
    lwz r3, lbl_8087EFA8
    lfs f3, 0x14e8(r31)
    lfs f4, 0x3a4(r3)
    lfs f0, lbl_8088552C
    fsubs f3, f3, f4
    stfs f3, 0x14e8(r31)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80357F48_00000D28
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80357F48_00000D28
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x2
    bgt lbl_fn_80357F48_00000D28
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xe
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_00000D28:
    lwz r5, 0xd1c(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80357F48_00000D78
    lfs f3, 0x530(r5)
    addi r4, r1, 0x68
    lfs f0, 0x530(r31)
    addi r3, r1, 0x74
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x70(r1)
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_80357F48_00000D78:
    lwz r4, 0x58c(r31)
    cmplwi r4, 0x12
    bgt lbl_fn_80357F48_000016E0
    lis r3, jumptable_80789834@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_80789834@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80357F48_00000DDC
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80357F48_00000DDC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_00000DDC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_00000E18
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_00000E18:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r3, 0xd1c(r31)
    lwz r0, 0x14ec(r31)
    cmplw r3, r0
    beq lbl_fn_80357F48_00000E5C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_00001054
lbl_fn_80357F48_00000E5C:
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80357F48_00001054
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_00000F40
    addi r3, r1, 0x74
    bl fn_805F9920
    lfs f0, 0x14fc(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80357F48_00000F24
    lwz r0, 0x14d4(r31)
    li r30, 0x2
    lwz r3, 0x16c4(r31)
    cmpwi r0, 0x1
    blt lbl_fn_80357F48_00000EA4
    li r30, 0x4
lbl_fn_80357F48_00000EA4:
    cmpwi r3, -0x1
    bne lbl_fn_80357F48_00000EBC
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r3, r0, r3
lbl_fn_80357F48_00000EBC:
    cmpwi r3, 0x0
    beq lbl_fn_80357F48_00000ED0
    cmpwi r3, 0x1
    beq lbl_fn_80357F48_00000EEC
    b lbl_fn_80357F48_00000F08
lbl_fn_80357F48_00000ED0:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_00001054
lbl_fn_80357F48_00000EEC:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xa
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_00001054
lbl_fn_80357F48_00000F08:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xc
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_00001054
lbl_fn_80357F48_00000F24:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_00001054
lbl_fn_80357F48_00000F40:
    bl fn_80680CF8
    lis r4, 0x6666
    addi r0, r4, 0x6667
    mulhw r0, r0, r3
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf. r0, r0, r3
    beq lbl_fn_80357F48_00000F74
    lwz r0, 0x16c4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80357F48_00001018
lbl_fn_80357F48_00000F74:
    addi r3, r1, 0x74
    bl fn_805F9920
    lfs f0, 0x1524(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80357F48_00001054
    addi r3, r1, 0x74
    bl fn_805F9920
    lfs f3, 0x1524(r31)
    lfs f0, lbl_8088559C
    fsubs f0, f3, f0
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_80357F48_00001054
    lwz r4, 0xd1c(r31)
    mr r3, r31
    lwz r29, lbl_8087EE98
    addi r30, r4, 0x528
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r29
    mr r6, r30
    addi r5, r31, 0x528
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_80357F48_00001054
    addi r3, r31, 0xc64
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80127D8C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_00001054
lbl_fn_80357F48_00001018:
    lwz r3, 0x14c0(r31)
    lwz r0, 0x1520(r31)
    cmpw r3, r0
    ble lbl_fn_80357F48_00001054
    addi r3, r31, 0xc64
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80127D8C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_00001054:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_000010F0
    cmpwi r4, 0xb
    beq lbl_fn_80357F48_00001094
    cmpwi r4, 0xe
    beq lbl_fn_80357F48_000010AC
    cmpwi r4, 0x11
    beq lbl_fn_80357F48_000010C4
    b lbl_fn_80357F48_000010D8
lbl_fn_80357F48_00001094:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80357F48_000010D8
lbl_fn_80357F48_000010AC:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x5
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80357F48_000010D8
lbl_fn_80357F48_000010C4:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80357F48_000010D8:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_000010F0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_00001154
    lwz r0, 0x598(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80357F48_0000113C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xd
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_00001154
lbl_fn_80357F48_0000113C:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_00001154:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r4, 0xd1c(r31)
    lfs f31, lbl_808855A0
    cmpwi r4, 0x0
    beq lbl_fn_80357F48_00001430
    lfs f3, 0x530(r4)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80885564
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80357F48_000011D4
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80357F48_000011D4:
    lfs f2, 0x10(r1)
    addi r3, r1, 0x8
    lfs f0, lbl_80885564
    addi r30, r1, 0x14
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80357F48_00001224
    lfs f3, 0x14(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f3, f0
    ble lbl_fn_80357F48_00001218
    lfs f0, lbl_80885568
    b lbl_fn_80357F48_0000121C
lbl_fn_80357F48_00001218:
    lfs f0, lbl_8088556C
lbl_fn_80357F48_0000121C:
    stfs f0, 0x24(r1)
    b lbl_fn_80357F48_00001238
lbl_fn_80357F48_00001224:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_80357F48_00001238:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088552C
    addi r4, r1, 0x2c
    lfs f4, 0xc8(r1)
    mr r5, r4
    lfs f5, 0xc4(r1)
    addi r3, r1, 0x80
    lfs f6, 0xc0(r1)
    lfs f7, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f9, 0xd0(r1)
    lfs f10, 0xe8(r1)
    lfs f11, 0xe4(r1)
    lfs f12, 0xe0(r1)
    lfs f13, 0xec(r1)
    lfs f30, 0xdc(r1)
    lfs f29, 0xcc(r1)
    lfs f0, lbl_80885550
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f4, 0x88(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f7, 0x98(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f10, 0xa8(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0x8c(r1)
    stfs f30, 0x9c(r1)
    stfs f13, 0xac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80885564
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80357F48_00001354
    lfs f3, 0x30(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f3, f0
    ble lbl_fn_80357F48_00001344
    lfs f0, lbl_80885568
    b lbl_fn_80357F48_00001348
lbl_fn_80357F48_00001344:
    lfs f0, lbl_8088556C
lbl_fn_80357F48_00001348:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_80357F48_00001368
lbl_fn_80357F48_00001354:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_80357F48_00001368:
    addi r3, r1, 0x20
    lfs f2, lbl_8088552C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f4, 0x538(r31)
    lfs f3, 0x18(r1)
    lfs f0, lbl_80885558
    fsubs f3, f3, f4
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80357F48_000013A8
    lfs f0, lbl_8088555C
    fsubs f0, f3, f0
    fmadds f31, f31, f0, f4
    b lbl_fn_80357F48_000013C8
lbl_fn_80357F48_000013A8:
    lfs f0, lbl_80885560
    fcmpo cr0, f3, f0
    bge lbl_fn_80357F48_000013C4
    lfs f0, lbl_8088555C
    fadds f0, f0, f3
    fmadds f31, f31, f0, f4
    b lbl_fn_80357F48_000013C8
lbl_fn_80357F48_000013C4:
    fmadds f31, f31, f3, f4
lbl_fn_80357F48_000013C8:
    lfs f0, 0x538(r31)
    lis r3, lbl_8074B088@ha
    lfd f2, lbl_8074B088@l(r3)
    fsubs f1, f31, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f3, f0
    ble lbl_fn_80357F48_000013F4
    lfs f0, lbl_8088555C
    fsubs f3, f3, f0
lbl_fn_80357F48_000013F4:
    lfs f0, lbl_80885560
    fcmpo cr0, f3, f0
    lis r3, lbl_8074B088@ha
    frsp f1, f31
    stfs f31, 0x538(r31)
    lfd f2, lbl_8074B088@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f3, f0
    ble lbl_fn_80357F48_00001428
    lfs f0, lbl_8088555C
    fsubs f3, f3, f0
lbl_fn_80357F48_00001428:
    lfs f0, lbl_80885560
    fcmpo cr0, f3, f0
lbl_fn_80357F48_00001430:
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_00001494
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    bne lbl_fn_80357F48_0000147C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_00001494
lbl_fn_80357F48_0000147C:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_00001494:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_000014D0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_000014D0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_0000157C
    addi r3, r1, 0x74
    bl fn_805F9920
    lfs f0, 0x1524(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80357F48_00001564
    lwz r4, 0xd1c(r31)
    mr r3, r31
    lwz r30, lbl_8087EE98
    addi r29, r4, 0x528
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r30
    mr r6, r29
    addi r5, r31, 0x528
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_80357F48_00001564
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_0000157C
lbl_fn_80357F48_00001564:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_0000157C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_00001650
    cmpwi r4, 0xb
    beq lbl_fn_80357F48_000015BC
    cmpwi r4, 0xe
    beq lbl_fn_80357F48_000015D4
    cmpwi r4, 0x11
    beq lbl_fn_80357F48_000015EC
    b lbl_fn_80357F48_00001600
lbl_fn_80357F48_000015BC:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80357F48_00001600
lbl_fn_80357F48_000015D4:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x5
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80357F48_00001600
lbl_fn_80357F48_000015EC:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80357F48_00001600:
    lwz r0, 0x14e0(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80357F48_00001638
    mr r3, r31
    bl fn_8035A9F4
    cmpwi r3, 0x0
    beq lbl_fn_80357F48_00001638
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x12
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_00001650
lbl_fn_80357F48_00001638:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_00001650:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_0000168C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_0000168C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80357F48_000016C8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_000016C8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80357F48_000016F8
lbl_fn_80357F48_000016E0:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80357F48_000016F8:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
