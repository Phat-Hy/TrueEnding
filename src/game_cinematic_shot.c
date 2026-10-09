#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_800FBA9C(void);
extern void fn_80126214(void);
extern void fn_80127D8C(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80144710(void);
extern void fn_80158CA4(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80178208(void);
extern void fn_80179D44(void);
extern void fn_801AFAC0(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A108(void);
extern void fn_8023A8B4(void);
extern void fn_803383E4(void);
extern void fn_80344DF4(void);
extern void fn_80370AE4(void);
extern void fn_80370B78(void);
extern void fn_80370BD0(void);
extern void fn_805A4258(void);
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
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 jumptable_80789168[];
extern u8 jumptable_807891A4[];
extern u8 lbl_8074A2B8[];
extern u8 lbl_8074A2C0[];
extern u8 lbl_8074A2D8[];
extern u8 lbl_80766768[];
extern u8 lbl_80789198[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885194;
extern u32 lbl_80885198;
extern u32 lbl_808851B0;
extern u32 lbl_808851B8;
extern u32 lbl_808851BC;
extern u32 lbl_808851C0;
extern u32 lbl_808851C4;
extern u32 lbl_808851C8;
extern u32 lbl_808851CC;
extern u32 lbl_808851D0;
extern u32 lbl_808851D4;
extern u32 lbl_808851D8;
extern u32 lbl_808851DC;
extern u32 lbl_808851EC;
extern u32 lbl_808851F0;
extern u32 lbl_808851F4;
extern u32 lbl_808851F8;
extern u32 lbl_808851FC;
extern u32 lbl_80885200;
extern u32 lbl_80885204;
extern u32 lbl_80885208;
extern u32 lbl_8088520C;
extern u32 lbl_80885210;
extern u32 lbl_80885214;
extern u32 lbl_80885218;
extern u32 lbl_8088521C;
extern u32 lbl_80885220;
extern u32 lbl_80885224;
extern u32 lbl_80885228;
extern u32 lbl_8088522C;

/* Function declarations */
void fn_80336518(void);
void fn_80336C8C(void);

asm void fn_80336518(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stfd f27, 0x100(r1)
    psq_st f27, 0x108(r1), 0, 0
    stfd f26, 0xf0(r1)
    psq_st f26, 0xf8(r1), 0, 0
    stfd f25, 0xe0(r1)
    psq_st f25, 0xe8(r1), 0, 0
    stfd f24, 0xd0(r1)
    psq_st f24, 0xd8(r1), 0, 0
    stfd f23, 0xc0(r1)
    psq_st f23, 0xc8(r1), 0, 0
    bl _savegpr_23
    lwz r4, 0x14c0(r3)
    mr r31, r3
    lfs f3, 0x14e0(r3)
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    lfs f0, lbl_808851B0
    lwz r4, lbl_8087EFA8
    lfs f4, 0x3a4(r4)
    fsubs f3, f3, f4
    stfs f3, 0x14e0(r3)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80336518_000000CC
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80336518_000000CC
    lwz r3, 0x58c(r3)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_80336518_000000B4
    cmpwi r3, 0x0
    bne lbl_fn_80336518_000000CC
lbl_fn_80336518_000000B4:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80336518_000000CC:
    lwz r5, 0xd1c(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80336518_0000011C
    lfs f3, 0x530(r5)
    addi r4, r1, 0x44
    lfs f0, 0x530(r31)
    addi r3, r1, 0x50
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
lbl_fn_80336518_0000011C:
    lwz r4, 0x58c(r31)
    cmplwi r4, 0xb
    bgt lbl_fn_80336518_000006FC
    lis r3, jumptable_80789168@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_80789168@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80336518_000001F0
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80336518_000001F0
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80336518_00000190
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_000001F0
lbl_fn_80336518_00000190:
    lfs f3, 0x9fc(r31)
    lfs f0, lbl_808851B8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80336518_000001D8
    lfs f0, lbl_808851B0
    li r0, 0x8
    stfs f0, 0x14ec(r31)
    mr r3, r31
    li r4, 0xa
    stfs f0, 0x14f0(r31)
    stfs f0, 0x14f4(r31)
    stw r0, 0x1578(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_000001F0
lbl_fn_80336518_000001D8:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80336518_000001F0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000714
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80336518_00000254
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80336518_0000023C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000254
lbl_fn_80336518_0000023C:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80336518_00000254:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000714
    lwz r3, 0xd1c(r31)
    lwz r0, 0x14e4(r31)
    cmplw r3, r0
    beq lbl_fn_80336518_00000298
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_0000054C
lbl_fn_80336518_00000298:
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80336518_0000054C
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80336518_00000300
    addi r3, r1, 0x50
    bl fn_805F9920
    lfs f0, 0x14e8(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80336518_000002E4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_0000054C
lbl_fn_80336518_000002E4:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_0000054C
lbl_fn_80336518_00000300:
    lwz r3, 0x14c0(r31)
    lwz r0, 0x1508(r31)
    cmpw r3, r0
    ble lbl_fn_80336518_0000054C
    addi r3, r31, 0xc64
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80127D8C
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r23, r0, r3
    mr r3, r31
    bl fn_803383E4
    cmpwi r3, 0x0
    beq lbl_fn_80336518_000003A0
    cmpwi r23, 0x3c
    bge lbl_fn_80336518_0000037C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_0000054C
lbl_fn_80336518_0000037C:
    li r0, 0x7
    stw r0, 0x1578(r31)
    mr r3, r31
    li r4, 0xa
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_0000054C
lbl_fn_80336518_000003A0:
    lwz r4, 0xd1c(r31)
    lis r3, lbl_8074A2B8@ha
    addi r25, r1, 0x8
    lfs f28, lbl_808851B0
    lfs f2, 0x530(r4)
    addi r27, r1, 0x38
    psq_l f1, 0x528(r4), 0, 0
    addi r26, r31, 0x14ec
    psq_st f1, 0x0(r25), 0, 0
    frsp f24, f2
    lfs f29, lbl_808851BC
    addi r28, r1, 0x20
    stfs f2, 0x10(r1)
    addi r29, r1, 0x2c
    lfd f30, lbl_8074A2B8@l(r3)
    lfs f31, lbl_808851C0
    li r24, 0x0
    lfs f23, lbl_808851EC
    lis r30, 0x4330
    lfs f25, 0xc(r1)
    lfs f26, 0x8(r1)
    lfs f27, lbl_808851F0
lbl_fn_80336518_000003F8:
    addi r4, r24, 0x2
    stw r30, 0x90(r1)
    slwi r0, r4, 29
    addi r3, r1, 0x60
    srwi r5, r4, 31
    stfs f28, 0x14(r1)
    subf r0, r5, r0
    li r4, 0x79
    rotlwi r0, r0, 3
    stfs f28, 0x18(r1)
    add r0, r0, r5
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    stfs f29, 0x1c(r1)
    fsubs f0, f0, f30
    fmuls f0, f31, f0
    fmuls f1, f0, f23
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x1c(r1)
    mr r3, r31
    lfs f3, 0x18(r1)
    fadds f2, f24, f0
    lfs f0, 0x14(r1)
    fadds f3, f25, f3
    fadds f0, f26, f0
    stfs f2, 0x8(r26)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lwz r23, lbl_8087EE98
    lfs f0, 0x24(r1)
    stfs f2, 0x40(r1)
    fadds f0, f0, f27
    lfs f2, 0x10(r1)
    stfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    lfs f2, 0x8(r26)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x30(r1)
    stfs f2, 0x34(r1)
    fadds f0, f0, f27
    stfs f0, 0x30(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r23
    mr r5, r28
    mr r6, r29
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_80336518_000004F8
    li r0, 0x1
    b lbl_fn_80336518_00000508
lbl_fn_80336518_000004F8:
    addi r24, r24, 0x1
    cmpwi r24, 0x8
    blt lbl_fn_80336518_000003F8
    li r0, 0x0
lbl_fn_80336518_00000508:
    cmpwi r0, 0x0
    beq lbl_fn_80336518_00000534
    li r0, 0x7
    stw r0, 0x1578(r31)
    mr r3, r31
    li r4, 0xa
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_0000054C
lbl_fn_80336518_00000534:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80336518_0000054C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000714
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80336518_000005B0
    cmpwi r4, 0xa
    bne lbl_fn_80336518_0000058C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80336518_0000058C:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
lbl_fn_80336518_000005B0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000714
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80336518_00000614
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80336518_000005FC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000614
lbl_fn_80336518_000005FC:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80336518_00000614:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000714
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80336518_0000066C
    cmpwi r4, 0xa
    bne lbl_fn_80336518_00000654
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80336518_00000654:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r4, 0x1578(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80336518_0000066C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000714
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80336518_000006A8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80336518_000006A8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000714
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80336518_000006E4
    lwz r3, lbl_8087F430
    li r4, 0xcf
    li r5, 0x1
    bl fn_80370AE4
    mr r3, r31
    bl fn_801765D8
lbl_fn_80336518_000006E4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80336518_00000714
lbl_fn_80336518_000006FC:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80336518_00000714:
    addi r11, r1, 0xc0
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    psq_l f27, 0x108(r1), 0, 0
    lfd f27, 0x100(r1)
    psq_l f26, 0xf8(r1), 0, 0
    lfd f26, 0xf0(r1)
    psq_l f25, 0xe8(r1), 0, 0
    lfd f25, 0xe0(r1)
    psq_l f24, 0xd8(r1), 0, 0
    lfd f24, 0xd0(r1)
    psq_l f23, 0xc8(r1), 0, 0
    lfd f23, 0xc0(r1)
    bl _restgpr_23
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80336C8C(void)
{
    nofralloc
    stwu r1, -0x530(r1)
    mflr r0
    stw r0, 0x534(r1)
    addi r11, r1, 0x4e0
    stfd f31, 0x520(r1)
    psq_st f31, 0x528(r1), 0, 0
    stfd f30, 0x510(r1)
    psq_st f30, 0x518(r1), 0, 0
    stfd f29, 0x500(r1)
    psq_st f29, 0x508(r1), 0, 0
    stfd f28, 0x4f0(r1)
    psq_st f28, 0x4f8(r1), 0, 0
    stfd f27, 0x4e0(r1)
    psq_st f27, 0x4e8(r1), 0, 0
    bl _savegpr_27
    psq_l f1, 0x534(r3), 0, 0
    addi r4, r1, 0x238
    lfs f2, 0x53c(r3)
    mr r30, r3
    stfs f2, 0x240(r1)
    lfs f30, lbl_808851B0
    psq_st f1, 0x0(r4), 0, 0
    lfs f29, lbl_808851B8
    lwz r4, 0x55c(r3)
    cmpwi r4, 0x2
    bne lbl_fn_80336C8C_000019C0
    lwz r0, 0x58c(r3)
    cmplwi r0, 0xb
    bgt lbl_fn_80336C8C_00001E70
    lis r4, jumptable_807891A4@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807891A4@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r4, 0x14c0(r3)
    lwz r0, 0x1504(r3)
    cmpw r4, r0
    ble lbl_fn_80336C8C_00001E70
    lwz r0, 0x14cc(r3)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r3)
    b lbl_fn_80336C8C_00001E70
    addi r3, r3, 0xc64
    bl fn_80126214
    lwz r0, 0xc90(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80336C8C_00000840
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
lbl_fn_80336C8C_00000840:
    addi r4, r30, 0xcbc
    addi r29, r1, 0x22c
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0xcc4(r30)
    stfs f2, 0x234(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F9920
    lfs f0, lbl_808851F4
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80336C8C_00000A4C
    addi r31, r1, 0x1e4
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x234(r1)
    mr r3, r31
    psq_st f1, 0x0(r31), 0, 0
    mr r4, r31
    stfs f2, 0x1ec(r1)
    bl fn_805F98D0
    lfs f2, 0x1ec(r1)
    addi r29, r1, 0x1f0
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808851CC
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x1f8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_000008DC
    lfs f3, 0x1f0(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_000008D0
    lfs f0, lbl_808851D0
    b lbl_fn_80336C8C_000008D4
lbl_fn_80336C8C_000008D0:
    lfs f0, lbl_808851D4
lbl_fn_80336C8C_000008D4:
    stfs f0, 0x1a0(r1)
    b lbl_fn_80336C8C_000008F0
lbl_fn_80336C8C_000008DC:
    frsp f2, f2
    lfs f1, 0x1f0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x1a0(r1)
lbl_fn_80336C8C_000008F0:
    lfs f0, 0x1a0(r1)
    addi r3, r1, 0x3c8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808851B0
    addi r4, r1, 0x190
    lfs f29, 0x3d0(r1)
    mr r5, r4
    lfs f28, 0x3cc(r1)
    addi r3, r1, 0x3f8
    lfs f13, 0x3c8(r1)
    lfs f12, 0x3e0(r1)
    lfs f11, 0x3dc(r1)
    lfs f10, 0x3d8(r1)
    lfs f9, 0x3f0(r1)
    lfs f8, 0x3ec(r1)
    lfs f7, 0x3e8(r1)
    lfs f6, 0x3f4(r1)
    lfs f5, 0x3e4(r1)
    lfs f4, 0x3d4(r1)
    lfs f0, lbl_808851B8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x1f8(r1)
    stfs f3, 0x428(r1)
    stfs f3, 0x42c(r1)
    stfs f3, 0x430(r1)
    stfs f0, 0x434(r1)
    stfs f13, 0x160(r1)
    stfs f28, 0x164(r1)
    stfs f29, 0x168(r1)
    stfs f13, 0x3f8(r1)
    stfs f28, 0x3fc(r1)
    stfs f29, 0x400(r1)
    stfs f10, 0x16c(r1)
    stfs f11, 0x170(r1)
    stfs f12, 0x174(r1)
    stfs f10, 0x408(r1)
    stfs f11, 0x40c(r1)
    stfs f12, 0x410(r1)
    stfs f7, 0x178(r1)
    stfs f8, 0x17c(r1)
    stfs f9, 0x180(r1)
    stfs f7, 0x418(r1)
    stfs f8, 0x41c(r1)
    stfs f9, 0x420(r1)
    stfs f4, 0x184(r1)
    stfs f5, 0x188(r1)
    stfs f6, 0x18c(r1)
    stfs f4, 0x404(r1)
    stfs f5, 0x414(r1)
    stfs f6, 0x424(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x198(r1)
    bl fn_805F9750
    lfs f2, 0x198(r1)
    lfs f0, lbl_808851CC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_00000A0C
    lfs f3, 0x194(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_000009FC
    lfs f0, lbl_808851D0
    b lbl_fn_80336C8C_00000A00
lbl_fn_80336C8C_000009FC:
    lfs f0, lbl_808851D4
lbl_fn_80336C8C_00000A00:
    fneg f0, f0
    stfs f0, 0x19c(r1)
    b lbl_fn_80336C8C_00000A20
lbl_fn_80336C8C_00000A0C:
    lfs f1, 0x194(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x19c(r1)
lbl_fn_80336C8C_00000A20:
    lfs f2, lbl_808851B0
    addi r3, r1, 0x19c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x238
    stfs f2, 0x1a4(r1)
    stfs f2, 0x1f8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x240(r1)
    b lbl_fn_80336C8C_00000A60
lbl_fn_80336C8C_00000A4C:
    psq_l f1, 0x534(r30), 0, 0
    addi r3, r1, 0x238
    lfs f2, 0x53c(r30)
    stfs f2, 0x240(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80336C8C_00000A60:
    lfs f29, lbl_808851F8
    b lbl_fn_80336C8C_00001E70
    lwz r0, 0x14cc(r3)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r3)
    b lbl_fn_80336C8C_00001E70
    lwz r0, 0x14cc(r3)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r3)
    b lbl_fn_80336C8C_00001E70
    lfs f27, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00000ADC
    lfs f0, lbl_808851B8
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808851B0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x174
    lfs f2, lbl_808851DC
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80336C8C_00000ADC:
    lwz r3, 0x14c0(r30)
    lwz r0, 0x150c(r30)
    cmpw r3, r0
    ble lbl_fn_80336C8C_00000AF8
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
lbl_fn_80336C8C_00000AF8:
    lwz r3, 0x150c(r30)
    lwz r4, 0x14c0(r30)
    subi r0, r3, 0x14
    cmpw r4, r0
    bne lbl_fn_80336C8C_00001E70
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xa
    bne lbl_fn_80336C8C_00001E70
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80336C8C_00001E70
    addi r3, r3, 0xc64
    bl fn_80126214
    lwz r0, 0xc90(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80336C8C_00000B50
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
lbl_fn_80336C8C_00000B50:
    addi r4, r30, 0xcbc
    addi r29, r1, 0x220
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0xcc4(r30)
    stfs f2, 0x228(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F9920
    lfs f0, lbl_808851F4
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80336C8C_00000D5C
    addi r31, r1, 0x1cc
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x228(r1)
    mr r3, r31
    psq_st f1, 0x0(r31), 0, 0
    mr r4, r31
    stfs f2, 0x1d4(r1)
    bl fn_805F98D0
    lfs f2, 0x1d4(r1)
    addi r29, r1, 0x1d8
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808851CC
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x1e0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_00000BEC
    lfs f3, 0x1d8(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_00000BE0
    lfs f0, lbl_808851D0
    b lbl_fn_80336C8C_00000BE4
lbl_fn_80336C8C_00000BE0:
    lfs f0, lbl_808851D4
lbl_fn_80336C8C_00000BE4:
    stfs f0, 0x158(r1)
    b lbl_fn_80336C8C_00000C00
lbl_fn_80336C8C_00000BEC:
    frsp f2, f2
    lfs f1, 0x1d8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x158(r1)
lbl_fn_80336C8C_00000C00:
    lfs f0, 0x158(r1)
    addi r3, r1, 0x358
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808851B0
    addi r4, r1, 0x148
    lfs f29, 0x360(r1)
    mr r5, r4
    lfs f28, 0x35c(r1)
    addi r3, r1, 0x388
    lfs f13, 0x358(r1)
    lfs f12, 0x370(r1)
    lfs f11, 0x36c(r1)
    lfs f10, 0x368(r1)
    lfs f9, 0x380(r1)
    lfs f8, 0x37c(r1)
    lfs f7, 0x378(r1)
    lfs f6, 0x384(r1)
    lfs f5, 0x374(r1)
    lfs f4, 0x364(r1)
    lfs f0, lbl_808851B8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x1e0(r1)
    stfs f3, 0x3b8(r1)
    stfs f3, 0x3bc(r1)
    stfs f3, 0x3c0(r1)
    stfs f0, 0x3c4(r1)
    stfs f13, 0x118(r1)
    stfs f28, 0x11c(r1)
    stfs f29, 0x120(r1)
    stfs f13, 0x388(r1)
    stfs f28, 0x38c(r1)
    stfs f29, 0x390(r1)
    stfs f10, 0x124(r1)
    stfs f11, 0x128(r1)
    stfs f12, 0x12c(r1)
    stfs f10, 0x398(r1)
    stfs f11, 0x39c(r1)
    stfs f12, 0x3a0(r1)
    stfs f7, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f7, 0x3a8(r1)
    stfs f8, 0x3ac(r1)
    stfs f9, 0x3b0(r1)
    stfs f4, 0x13c(r1)
    stfs f5, 0x140(r1)
    stfs f6, 0x144(r1)
    stfs f4, 0x394(r1)
    stfs f5, 0x3a4(r1)
    stfs f6, 0x3b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x150(r1)
    bl fn_805F9750
    lfs f2, 0x150(r1)
    lfs f0, lbl_808851CC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_00000D1C
    lfs f3, 0x14c(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_00000D0C
    lfs f0, lbl_808851D0
    b lbl_fn_80336C8C_00000D10
lbl_fn_80336C8C_00000D0C:
    lfs f0, lbl_808851D4
lbl_fn_80336C8C_00000D10:
    fneg f0, f0
    stfs f0, 0x154(r1)
    b lbl_fn_80336C8C_00000D30
lbl_fn_80336C8C_00000D1C:
    lfs f1, 0x14c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x154(r1)
lbl_fn_80336C8C_00000D30:
    lfs f2, lbl_808851B0
    addi r3, r1, 0x154
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x238
    stfs f2, 0x15c(r1)
    stfs f2, 0x1e0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x240(r1)
    b lbl_fn_80336C8C_00000D70
lbl_fn_80336C8C_00000D5C:
    psq_l f1, 0x534(r30), 0, 0
    addi r3, r1, 0x238
    lfs f2, 0x53c(r30)
    stfs f2, 0x240(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80336C8C_00000D70:
    lwz r3, 0x14bc(r30)
    lfs f29, lbl_808851F8
    cmpwi r3, 0x0
    bne lbl_fn_80336C8C_00000DB4
    lwz r0, 0x14c0(r30)
    cmpwi r0, 0xf
    ble lbl_fn_80336C8C_00001E70
    addi r4, r30, 0x14ec
    lfs f2, 0x14f4(r30)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r3, 0x1
    li r0, 0x0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    stw r3, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    b lbl_fn_80336C8C_00001E70
lbl_fn_80336C8C_00000DB4:
    lwz r0, 0x14c0(r30)
    cmpwi r0, 0xf
    ble lbl_fn_80336C8C_00001E70
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80336C8C_00001E70
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80336C8C_00001228
    lfs f27, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00000E44
    lwz r4, 0x14bc(r30)
    li r0, 0x1
    lfs f3, lbl_808851B8
    addi r3, r30, 0xb0
    lfs f0, lbl_80885198
    addi r4, r4, 0x1
    stw r4, 0x14bc(r30)
    li r4, 0x0
    lfs f1, lbl_808851B0
    li r5, 0x14b
    stw r0, 0x3fc(r30)
    li r6, 0x0
    lfs f2, lbl_808851DC
    li r7, 0x0
    stfs f3, 0x2fc(r30)
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_80336C8C_000011D8
lbl_fn_80336C8C_00000E44:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808851FC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00000E70
    addi r3, r30, 0x14ec
    lfs f2, 0x14f4(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    b lbl_fn_80336C8C_000011D8
lbl_fn_80336C8C_00000E70:
    lfs f0, lbl_80885200
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00000F00
    fsubs f7, f3, f0
    lfs f6, lbl_80885204
    lfs f3, 0x14f4(r30)
    addi r3, r1, 0x1c0
    lfs f5, 0x1500(r30)
    lfs f0, 0x14f0(r30)
    fsubs f8, f3, f5
    lfs f4, 0x14fc(r30)
    fmuls f6, f7, f6
    lfs f3, 0x14ec(r30)
    fsubs f7, f0, f4
    lfs f0, 0x14f8(r30)
    fsubs f3, f3, f0
    stfs f8, 0x114(r1)
    fmuls f8, f8, f6
    stfs f7, 0x110(r1)
    fmuls f7, f7, f6
    fmuls f6, f3, f6
    stfs f3, 0x10c(r1)
    fadds f2, f8, f5
    fadds f3, f7, f4
    fadds f0, f6, f0
    stfs f6, 0x100(r1)
    stfs f3, 0x1c4(r1)
    stfs f0, 0x1c0(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f7, 0x104(r1)
    stfs f8, 0x108(r1)
    stfs f2, 0x1c8(r1)
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    b lbl_fn_80336C8C_000011D8
lbl_fn_80336C8C_00000F00:
    lwz r4, 0x14e4(r30)
    addi r3, r30, 0x14f8
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x1500(r30)
    cmpwi r4, 0x0
    psq_st f1, 0x528(r30), 0, 0
    lfs f31, lbl_80885208
    stfs f2, 0x530(r30)
    beq lbl_fn_80336C8C_000011D8
    frsp f6, f2
    lfs f7, 0x530(r4)
    lfs f5, 0x52c(r4)
    addi r3, r1, 0xa0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r30)
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0xa8(r1)
    stfs f0, 0xa0(r1)
    stfs f4, 0xa4(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808851CC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80336C8C_00000F7C
    addi r3, r1, 0xa0
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80336C8C_00000F7C:
    lfs f2, 0xa8(r1)
    addi r3, r1, 0xa0
    lfs f0, lbl_808851CC
    addi r29, r1, 0xac
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xb4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_00000FCC
    lfs f3, 0xac(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_00000FC0
    lfs f0, lbl_808851D0
    b lbl_fn_80336C8C_00000FC4
lbl_fn_80336C8C_00000FC0:
    lfs f0, lbl_808851D4
lbl_fn_80336C8C_00000FC4:
    stfs f0, 0xbc(r1)
    b lbl_fn_80336C8C_00000FE0
lbl_fn_80336C8C_00000FCC:
    frsp f2, f2
    lfs f1, 0xac(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xbc(r1)
lbl_fn_80336C8C_00000FE0:
    lfs f0, 0xbc(r1)
    addi r3, r1, 0x328
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808851B0
    addi r4, r1, 0xc4
    lfs f4, 0x330(r1)
    mr r5, r4
    lfs f5, 0x32c(r1)
    addi r3, r1, 0x2e8
    lfs f6, 0x328(r1)
    lfs f7, 0x340(r1)
    lfs f8, 0x33c(r1)
    lfs f9, 0x338(r1)
    lfs f10, 0x350(r1)
    lfs f11, 0x34c(r1)
    lfs f12, 0x348(r1)
    lfs f13, 0x354(r1)
    lfs f28, 0x344(r1)
    lfs f27, 0x334(r1)
    lfs f0, lbl_808851B8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xb4(r1)
    stfs f3, 0x318(r1)
    stfs f3, 0x31c(r1)
    stfs f3, 0x320(r1)
    stfs f0, 0x324(r1)
    stfs f6, 0xf4(r1)
    stfs f5, 0xf8(r1)
    stfs f4, 0xfc(r1)
    stfs f6, 0x2e8(r1)
    stfs f5, 0x2ec(r1)
    stfs f4, 0x2f0(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f9, 0x2f8(r1)
    stfs f8, 0x2fc(r1)
    stfs f7, 0x300(r1)
    stfs f12, 0xdc(r1)
    stfs f11, 0xe0(r1)
    stfs f10, 0xe4(r1)
    stfs f12, 0x308(r1)
    stfs f11, 0x30c(r1)
    stfs f10, 0x310(r1)
    stfs f27, 0xd0(r1)
    stfs f28, 0xd4(r1)
    stfs f13, 0xd8(r1)
    stfs f27, 0x2f4(r1)
    stfs f28, 0x304(r1)
    stfs f13, 0x314(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xcc(r1)
    bl fn_805F9750
    lfs f2, 0xcc(r1)
    lfs f0, lbl_808851CC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_000010FC
    lfs f3, 0xc8(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_000010EC
    lfs f0, lbl_808851D0
    b lbl_fn_80336C8C_000010F0
lbl_fn_80336C8C_000010EC:
    lfs f0, lbl_808851D4
lbl_fn_80336C8C_000010F0:
    fneg f0, f0
    stfs f0, 0xb8(r1)
    b lbl_fn_80336C8C_00001110
lbl_fn_80336C8C_000010FC:
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xb8(r1)
lbl_fn_80336C8C_00001110:
    addi r3, r1, 0xb8
    lfs f2, lbl_808851B0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f4, 0x538(r30)
    lfs f3, 0xb0(r1)
    lfs f0, lbl_808851C0
    fsubs f3, f3, f4
    stfs f2, 0xc0(r1)
    stfs f2, 0xb4(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_00001150
    lfs f0, lbl_808851C4
    fsubs f0, f3, f0
    fmadds f28, f31, f0, f4
    b lbl_fn_80336C8C_00001170
lbl_fn_80336C8C_00001150:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_0000116C
    lfs f0, lbl_808851C4
    fadds f0, f0, f3
    fmadds f28, f31, f0, f4
    b lbl_fn_80336C8C_00001170
lbl_fn_80336C8C_0000116C:
    fmadds f28, f31, f3, f4
lbl_fn_80336C8C_00001170:
    lfs f0, 0x538(r30)
    lis r3, lbl_8074A2C0@ha
    lfd f2, lbl_8074A2C0@l(r3)
    fsubs f1, f28, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808851C0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_0000119C
    lfs f0, lbl_808851C4
    fsubs f3, f3, f0
lbl_fn_80336C8C_0000119C:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
    lis r3, lbl_8074A2C0@ha
    frsp f1, f28
    stfs f28, 0x538(r30)
    lfd f2, lbl_8074A2C0@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808851C0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_000011D0
    lfs f0, lbl_808851C4
    fsubs f3, f3, f0
lbl_fn_80336C8C_000011D0:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
lbl_fn_80336C8C_000011D8:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_8088520C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00001E70
    lfs f0, lbl_80885210
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80336C8C_00001E70
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r7, 0x1518(r30)
    li r4, 0x0
    lwz r8, 0x590(r30)
    li r5, 0x0
    lfs f1, lbl_808851B0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_80336C8C_00001E70
lbl_fn_80336C8C_00001228:
    cmpwi r0, 0x1
    bne lbl_fn_80336C8C_00001294
    lfs f27, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00001E70
    lwz r4, 0x14bc(r30)
    li r0, 0x1
    lfs f0, lbl_808851B8
    addi r3, r30, 0xb0
    addi r4, r4, 0x1
    stw r4, 0x14bc(r30)
    lfs f1, lbl_808851B0
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x14c
    lfs f2, lbl_808851DC
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_80336C8C_00001E70
lbl_fn_80336C8C_00001294:
    lfs f27, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00001E70
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_80336C8C_00001E70
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x14d
    beq lbl_fn_80336C8C_00001760
    lfs f27, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00001E70
    lfs f0, lbl_808851B8
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808851B0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14d
    lfs f2, lbl_808851DC
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f31, lbl_808851B0
    lfs f0, lbl_80885204
    stfs f0, 0x2e8(r30)
    lfs f30, lbl_808851B8
    stfs f31, 0x528(r30)
    stfs f31, 0x52c(r30)
    stfs f31, 0x530(r30)
    lwz r3, lbl_8087F8A0
    lwz r4, 0x48(r3)
    stw r4, 0x14e4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80336C8C_00001618
    lfs f4, 0x530(r4)
    addi r3, r1, 0x40
    lfs f3, 0x52c(r4)
    lfs f0, 0x528(r4)
    fsubs f4, f4, f31
    fsubs f3, f3, f31
    fsubs f0, f0, f31
    stfs f4, 0x48(r1)
    stfs f0, 0x40(r1)
    stfs f3, 0x44(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808851CC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80336C8C_00001398
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80336C8C_00001398:
    lfs f2, 0x48(r1)
    addi r3, r1, 0x40
    lfs f0, lbl_808851CC
    addi r29, r1, 0x4c
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x54(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_000013E8
    lfs f3, 0x4c(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_000013DC
    lfs f0, lbl_808851D0
    b lbl_fn_80336C8C_000013E0
lbl_fn_80336C8C_000013DC:
    lfs f0, lbl_808851D4
lbl_fn_80336C8C_000013E0:
    stfs f0, 0x5c(r1)
    b lbl_fn_80336C8C_000013FC
lbl_fn_80336C8C_000013E8:
    frsp f2, f2
    lfs f1, 0x4c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x5c(r1)
lbl_fn_80336C8C_000013FC:
    lfs f0, 0x5c(r1)
    addi r3, r1, 0x2b8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808851B0
    addi r4, r1, 0x64
    lfs f4, 0x2c0(r1)
    mr r5, r4
    lfs f5, 0x2bc(r1)
    addi r3, r1, 0x278
    lfs f6, 0x2b8(r1)
    lfs f7, 0x2d0(r1)
    lfs f8, 0x2cc(r1)
    lfs f9, 0x2c8(r1)
    lfs f10, 0x2e0(r1)
    lfs f11, 0x2dc(r1)
    lfs f12, 0x2d8(r1)
    lfs f13, 0x2e4(r1)
    lfs f27, 0x2d4(r1)
    lfs f28, 0x2c4(r1)
    lfs f0, lbl_808851B8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x54(r1)
    stfs f3, 0x2a8(r1)
    stfs f3, 0x2ac(r1)
    stfs f3, 0x2b0(r1)
    stfs f0, 0x2b4(r1)
    stfs f6, 0x94(r1)
    stfs f5, 0x98(r1)
    stfs f4, 0x9c(r1)
    stfs f6, 0x278(r1)
    stfs f5, 0x27c(r1)
    stfs f4, 0x280(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f9, 0x288(r1)
    stfs f8, 0x28c(r1)
    stfs f7, 0x290(r1)
    stfs f12, 0x7c(r1)
    stfs f11, 0x80(r1)
    stfs f10, 0x84(r1)
    stfs f12, 0x298(r1)
    stfs f11, 0x29c(r1)
    stfs f10, 0x2a0(r1)
    stfs f28, 0x70(r1)
    stfs f27, 0x74(r1)
    stfs f13, 0x78(r1)
    stfs f28, 0x284(r1)
    stfs f27, 0x294(r1)
    stfs f13, 0x2a4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x6c(r1)
    bl fn_805F9750
    lfs f2, 0x6c(r1)
    lfs f0, lbl_808851CC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_00001518
    lfs f3, 0x68(r1)
    lfs f0, lbl_808851B0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_00001508
    lfs f0, lbl_808851D0
    b lbl_fn_80336C8C_0000150C
lbl_fn_80336C8C_00001508:
    lfs f0, lbl_808851D4
lbl_fn_80336C8C_0000150C:
    fneg f0, f0
    stfs f0, 0x58(r1)
    b lbl_fn_80336C8C_0000152C
lbl_fn_80336C8C_00001518:
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x58(r1)
lbl_fn_80336C8C_0000152C:
    addi r3, r1, 0x58
    lfs f2, lbl_808851B0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f4, 0x538(r30)
    lfs f3, 0x50(r1)
    lfs f0, lbl_808851C0
    fsubs f3, f3, f4
    stfs f2, 0x60(r1)
    stfs f2, 0x54(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_0000156C
    lfs f0, lbl_808851C4
    fsubs f0, f3, f0
    fmadds f27, f30, f0, f4
    b lbl_fn_80336C8C_0000158C
lbl_fn_80336C8C_0000156C:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
    bge lbl_fn_80336C8C_00001588
    lfs f0, lbl_808851C4
    fadds f0, f0, f3
    fmadds f27, f30, f0, f4
    b lbl_fn_80336C8C_0000158C
lbl_fn_80336C8C_00001588:
    fmadds f27, f30, f3, f4
lbl_fn_80336C8C_0000158C:
    lfs f0, 0x538(r30)
    lis r3, lbl_8074A2C0@ha
    lfd f2, lbl_8074A2C0@l(r3)
    fsubs f1, f27, f0
    bl fn_8068AEA8
    frsp f28, f1
    lfs f0, lbl_808851C0
    fcmpo cr0, f28, f0
    ble lbl_fn_80336C8C_000015B8
    lfs f0, lbl_808851C4
    fsubs f28, f28, f0
lbl_fn_80336C8C_000015B8:
    lfs f0, lbl_808851C8
    fcmpo cr0, f28, f0
    bge lbl_fn_80336C8C_000015CC
    lfs f0, lbl_808851C4
    fadds f28, f28, f0
lbl_fn_80336C8C_000015CC:
    lis r3, lbl_8074A2C0@ha
    frsp f1, f27
    stfs f27, 0x538(r30)
    lfd f2, lbl_8074A2C0@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808851C0
    fcmpo cr0, f3, f0
    ble lbl_fn_80336C8C_000015F8
    lfs f0, lbl_808851C4
    fsubs f3, f3, f0
lbl_fn_80336C8C_000015F8:
    lfs f0, lbl_808851C8
    fcmpo cr0, f3, f0
    lfs f0, lbl_808851D8
    fmuls f0, f0, f28
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f31
    cror eq, gt, eq
lbl_fn_80336C8C_00001618:
    lwz r3, lbl_8087F430
    li r4, 0xce
    li r5, 0x1
    bl fn_80370AE4
    lwz r3, 0x1540(r30)
    bl fn_80344DF4
    lwz r5, 0x1540(r30)
    addi r3, r30, 0x1534
    lfs f2, 0x530(r30)
    li r4, 0x0
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r5, 0x1540(r30)
    lfs f2, 0x53c(r30)
    psq_l f1, 0x534(r30), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
    bl fn_80232B7C
    lfs f0, lbl_808851B0
    li r29, -0x1
    lfs f1, lbl_808851B8
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r30, 0x1534
    addi r5, r30, 0xb0
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
    stw r29, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    addi r4, r30, 0x1534
    li r5, 0x0
    li r6, 0xa
    bl fn_8023A108
    lis r4, lbl_8074A2D8@ha
    lfs f1, lbl_808851B8
    addi r4, r4, lbl_8074A2D8@l
    addi r3, r1, 0x10
    addi r4, r4, 0x16f
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F8A0
    lwz r27, lbl_8087F048
    lwz r28, 0x48(r3)
    mr r3, r27
    bl fn_800F8548
    mr r31, r3
    li r3, 0x780
    bl fn_80219E6C
    stw r29, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_808851B0
    mr r3, r27
    stw r29, 0xc(r1)
    mr r4, r28
    lfs f2, lbl_808851B8
    mr r6, r31
    addi r7, r30, 0x528
    addi r8, r30, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_80336C8C_00001E8C
lbl_fn_80336C8C_00001760:
    lwz r0, 0x14bc(r3)
    lwz r31, lbl_8087F430
    cmpwi r0, 0x0
    bne lbl_fn_80336C8C_000017AC
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80885214
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00001844
    lfs f1, lbl_80885218
    mr r3, r31
    li r4, -0x1
    li r5, 0x14
    li r6, 0x0
    bl fn_80370B78
    lwz r3, 0x14bc(r30)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r30)
    b lbl_fn_80336C8C_00001844
lbl_fn_80336C8C_000017AC:
    cmpwi r0, 0x1
    bne lbl_fn_80336C8C_00001808
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80885194
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00001844
    li r4, 0x0
    bl fn_8016E4C4
    lwz r3, lbl_8087F3C0
    addi r4, r30, 0x1534
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F430
    li r4, 0x3c
    lfs f1, lbl_80885218
    li r5, 0x5
    bl fn_80370BD0
    lwz r3, 0x14bc(r30)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r30)
    b lbl_fn_80336C8C_00001844
lbl_fn_80336C8C_00001808:
    lwz r4, 0x1540(r3)
    lbz r0, 0x16b4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80336C8C_00001844
    lwz r0, 0x157c(r3)
    lwz r4, 0x14cc(r3)
    cmpwi r0, 0x0
    oris r4, r4, 0x8000
    stw r4, 0x14cc(r3)
    beq lbl_fn_80336C8C_00001844
    li r0, 0x0
    stw r0, 0x8a0(r31)
    stw r0, 0x4d8(r31)
    stb r0, 0x97c(r31)
    stw r0, 0x157c(r3)
lbl_fn_80336C8C_00001844:
    lwz r0, 0x14cc(r30)
    srwi. r0, r0, 31
    bne lbl_fn_80336C8C_00001E8C
    addi r3, r1, 0x214
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x157c(r30)
    lfs f0, 0x218(r1)
    lfs f31, lbl_8088521C
    cmpwi r0, 0x0
    lfs f2, 0x530(r30)
    fadds f0, f0, f31
    stfs f2, 0x21c(r1)
    stfs f0, 0x218(r1)
    bne lbl_fn_80336C8C_000019A4
    lfs f30, 0x594(r31)
    lfs f29, 0x59c(r31)
    lfs f28, 0x5a0(r31)
    lfs f13, 0x5a4(r31)
    lfs f12, 0x5a8(r31)
    lfs f11, 0x5ac(r31)
    lfs f10, 0x5b0(r31)
    lfs f9, 0x5b4(r31)
    lfs f8, 0x5b8(r31)
    lfs f7, 0x5bc(r31)
    lwz r3, 0x5c0(r31)
    lfs f6, lbl_808851B0
    stw r30, 0x8a0(r31)
    lfs f5, lbl_80885220
    lwz r0, 0x4d8(r31)
    lfs f4, lbl_80885224
    cmpwi r0, 0x4
    stfs f30, 0x480(r1)
    stfs f29, 0x488(r1)
    stfs f28, 0x48c(r1)
    stfs f13, 0x490(r1)
    stfs f12, 0x494(r1)
    stfs f11, 0x498(r1)
    stfs f10, 0x49c(r1)
    stfs f9, 0x4a0(r1)
    stfs f8, 0x4a4(r1)
    stfs f7, 0x4a8(r1)
    stw r3, 0x4ac(r1)
    stfs f6, 0x47c(r1)
    stfs f5, 0x478(r1)
    stfs f31, 0x474(r1)
    stfs f4, 0x484(r1)
    beq lbl_fn_80336C8C_00001958
    li r0, 0x4
    stw r0, 0x4d8(r31)
    lfs f3, lbl_80885228
    stfs f31, 0x4e4(r31)
    lfs f0, lbl_808851B8
    stfs f5, 0x4e8(r31)
    stfs f6, 0x4ec(r31)
    stfs f30, 0x4f0(r31)
    stfs f4, 0x4f4(r31)
    stfs f29, 0x4f8(r31)
    stfs f28, 0x4fc(r31)
    stfs f13, 0x500(r31)
    stfs f12, 0x504(r31)
    stfs f11, 0x508(r31)
    stfs f10, 0x50c(r31)
    stfs f9, 0x510(r31)
    stfs f8, 0x514(r31)
    stfs f7, 0x518(r31)
    stw r3, 0x51c(r31)
    stfs f3, 0x4e0(r31)
    stfs f0, 0x4dc(r31)
lbl_fn_80336C8C_00001958:
    lbz r0, 0x97c(r31)
    addi r3, r1, 0x214
    stb r0, 0x97d(r31)
    li r0, 0x1
    addi r4, r31, 0x97c
    psq_l f1, 0x0(r3), 0, 0
    stb r0, 0x97c(r31)
    lfs f2, 0x21c(r1)
    psq_st f1, 0xc(r4), 0, 0
    lfs f0, lbl_808851B0
    stfs f2, 0x990(r31)
    stfs f0, 0x9a0(r31)
    b lbl_fn_80336C8C_00001990
    b lbl_fn_80336C8C_00001994
lbl_fn_80336C8C_00001990:
    li r0, 0x0
lbl_fn_80336C8C_00001994:
    stw r0, 0x4(r4)
    li r0, 0x1
    stw r0, 0x157c(r30)
    b lbl_fn_80336C8C_00001E8C
lbl_fn_80336C8C_000019A4:
    stw r30, 0x8a0(r31)
    addi r4, r31, 0x988
    psq_l f1, 0x0(r3), 0, 0
    frsp f2, f2
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x990(r31)
    b lbl_fn_80336C8C_00001E8C
lbl_fn_80336C8C_000019C0:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80336C8C_000019D8
    cmpwi r0, 0x8
    beq lbl_fn_80336C8C_00001C9C
    b lbl_fn_80336C8C_00001E68
lbl_fn_80336C8C_000019D8:
    lfs f27, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_80336C8C_00001A00
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
lbl_fn_80336C8C_00001A00:
    mr r3, r30
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_80336C8C_00001C90
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80336C8C_00001A3C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x4b0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x4b4(r1)
    stw r0, 0x4b8(r1)
    b lbl_fn_80336C8C_00001A58
lbl_fn_80336C8C_00001A3C:
    lis r5, lbl_80789198@ha
    lwzu r4, lbl_80789198@l(r5)
    stw r4, 0x4b0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x4b4(r1)
    stw r0, 0x4b8(r1)
lbl_fn_80336C8C_00001A58:
    lwz r5, 0x4b0(r1)
    addi r3, r1, 0x1b4
    lwz r4, 0x4b4(r1)
    lwz r0, 0x4b8(r1)
    stw r5, 0x1b4(r1)
    stw r4, 0x1b8(r1)
    stw r0, 0x1bc(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80336C8C_00001ACC
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x598(r30)
    cmpw r3, r0
    ble lbl_fn_80336C8C_00001ACC
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    li r0, 0x8
    stw r3, 0x598(r30)
    stw r0, 0x594(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
lbl_fn_80336C8C_00001ACC:
    mr r3, r30
    bl fn_80144710
    lwz r0, 0x560(r30)
    cmpwi r0, 0x8d
    bne lbl_fn_80336C8C_00001C30
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x16e
    bne lbl_fn_80336C8C_00001C30
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80336C8C_00001C30
    lwz r3, 0x14e4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    bne lbl_fn_80336C8C_00001C30
    li r3, 0xe3
    bl fn_80219E6C
    lwz r5, 0x14e4(r30)
    mr r6, r3
    li r3, 0x0
    lwz r4, 0x38(r5)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80336C8C_00001B4C
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_80336C8C_00001B4C
    li r3, 0x1
lbl_fn_80336C8C_00001B4C:
    cmpwi r3, 0x0
    beq lbl_fn_80336C8C_00001B78
    lwz r3, lbl_8087F048
    mr r4, r30
    lfs f1, lbl_808851B0
    li r7, -0x1
    bl fn_800FBA9C
    cmpwi r3, 0x0
    blt lbl_fn_80336C8C_00001B78
    li r0, 0x1
    b lbl_fn_80336C8C_00001B7C
lbl_fn_80336C8C_00001B78:
    li r0, 0x0
lbl_fn_80336C8C_00001B7C:
    cmpwi r0, 0x0
    beq lbl_fn_80336C8C_00001C30
    lwz r3, 0x14e4(r30)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80336C8C_00001BA0
    lwz r0, 0x560(r3)
    cmpwi r0, 0x8e
    beq lbl_fn_80336C8C_00001C30
lbl_fn_80336C8C_00001BA0:
    lis r5, lbl_8074A2D8@ha
    li r3, 0x24
    addi r5, r5, lbl_8074A2D8@l
    li r4, 0x3
    addi r5, r5, 0x16e
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80336C8C_00001C18
    lfs f3, lbl_808851B0
    addi r3, r1, 0x248
    lfs f0, lbl_808851B8
    li r4, 0x79
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f0, 0x1b0(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x1a8
    addi r3, r1, 0x248
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0x14e4(r30)
    mr r3, r28
    addi r5, r1, 0x1a8
    li r6, 0x9
    bl fn_801AFAC0
    mr r28, r3
lbl_fn_80336C8C_00001C18:
    lwz r3, 0x14e4(r30)
    mr r4, r28
    bl fn_80178208
    lwz r3, 0x14e4(r30)
    lfs f0, 0x2e4(r30)
    stfs f0, 0x2e4(r3)
lbl_fn_80336C8C_00001C30:
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r7, 0x638(r30)
    li r4, 0x0
    lwz r8, 0x590(r30)
    li r5, 0x0
    lfs f1, lbl_808851B0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    cmpwi r3, 0x0
    ble lbl_fn_80336C8C_00001C90
    lwz r0, 0x14d8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80336C8C_00001C90
    mr r3, r30
    addi r4, r30, 0x1564
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80336C8C_00001C90
    mr r3, r30
    addi r4, r30, 0x1564
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_80336C8C_00001C90:
    mr r3, r30
    bl fn_8013A258
    b lbl_fn_80336C8C_00001E8C
lbl_fn_80336C8C_00001C9C:
    cmpwi r4, 0x6
    lwz r6, lbl_8087F430
    bne lbl_fn_80336C8C_00001E50
    lwz r0, 0x560(r3)
    cmpwi r0, 0xd
    beq lbl_fn_80336C8C_00001E5C
    cmpwi r0, 0xe
    bne lbl_fn_80336C8C_00001E40
    addi r4, r1, 0x208
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x157c(r3)
    lfs f0, 0x20c(r1)
    lfs f28, lbl_8088521C
    cmpwi r0, 0x0
    lfs f2, 0x530(r3)
    fadds f0, f0, f28
    stfs f2, 0x210(r1)
    stfs f0, 0x20c(r1)
    bne lbl_fn_80336C8C_00001E24
    lfs f31, 0x594(r6)
    lfs f30, 0x59c(r6)
    lfs f13, 0x5a0(r6)
    lfs f12, 0x5a4(r6)
    lfs f11, 0x5a8(r6)
    lfs f10, 0x5ac(r6)
    lfs f9, 0x5b0(r6)
    lfs f8, 0x5b4(r6)
    lfs f7, 0x5b8(r6)
    lfs f6, 0x5bc(r6)
    lwz r4, 0x5c0(r6)
    lfs f5, lbl_8088522C
    stw r3, 0x8a0(r6)
    lfs f4, lbl_80885220
    lwz r0, 0x4d8(r6)
    lfs f3, lbl_80885224
    cmpwi r0, 0x4
    stfs f31, 0x444(r1)
    stfs f30, 0x44c(r1)
    stfs f13, 0x450(r1)
    stfs f12, 0x454(r1)
    stfs f11, 0x458(r1)
    stfs f10, 0x45c(r1)
    stfs f9, 0x460(r1)
    stfs f8, 0x464(r1)
    stfs f7, 0x468(r1)
    stfs f6, 0x46c(r1)
    stw r4, 0x470(r1)
    stfs f5, 0x440(r1)
    stfs f4, 0x43c(r1)
    stfs f28, 0x438(r1)
    stfs f3, 0x448(r1)
    beq lbl_fn_80336C8C_00001DC0
    li r0, 0x4
    stw r0, 0x4d8(r6)
    lfs f0, lbl_80885228
    stfs f28, 0x4e4(r6)
    stfs f4, 0x4e8(r6)
    stfs f5, 0x4ec(r6)
    stfs f31, 0x4f0(r6)
    stfs f3, 0x4f4(r6)
    stfs f30, 0x4f8(r6)
    stfs f13, 0x4fc(r6)
    stfs f12, 0x500(r6)
    stfs f11, 0x504(r6)
    stfs f10, 0x508(r6)
    stfs f9, 0x50c(r6)
    stfs f8, 0x510(r6)
    stfs f7, 0x514(r6)
    stfs f6, 0x518(r6)
    stw r4, 0x51c(r6)
    stfs f0, 0x4e0(r6)
    stfs f29, 0x4dc(r6)
lbl_fn_80336C8C_00001DC0:
    addi r5, r1, 0x1fc
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    li r0, 0x1
    lfs f2, 0x530(r3)
    lfs f3, 0x200(r1)
    lfs f0, lbl_80885210
    lbzu r4, 0x97c(r6)
    fadds f0, f3, f0
    stb r4, 0x1(r6)
    lfs f3, lbl_808851B0
    stfs f0, 0x200(r1)
    stb r0, 0x0(r6)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0xc(r6), 0, 0
    stfs f2, 0x14(r6)
    stfs f2, 0x204(r1)
    stfs f3, 0x24(r6)
    b lbl_fn_80336C8C_00001E10
    b lbl_fn_80336C8C_00001E14
lbl_fn_80336C8C_00001E10:
    li r0, 0x0
lbl_fn_80336C8C_00001E14:
    stw r0, 0x4(r6)
    li r0, 0x1
    stw r0, 0x157c(r3)
    b lbl_fn_80336C8C_00001E5C
lbl_fn_80336C8C_00001E24:
    stw r3, 0x8a0(r6)
    addi r3, r6, 0x988
    psq_l f1, 0x0(r4), 0, 0
    frsp f2, f2
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r6)
    b lbl_fn_80336C8C_00001E5C
lbl_fn_80336C8C_00001E40:
    lwz r0, 0x14cc(r3)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r3)
    b lbl_fn_80336C8C_00001E5C
lbl_fn_80336C8C_00001E50:
    lwz r0, 0x14cc(r3)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r3)
lbl_fn_80336C8C_00001E5C:
    mr r3, r30
    bl fn_8013A258
    b lbl_fn_80336C8C_00001E8C
lbl_fn_80336C8C_00001E68:
    bl fn_805A4258
    b lbl_fn_80336C8C_00001E8C
lbl_fn_80336C8C_00001E70:
    lfs f0, 0x568(r30)
    fmr f1, f30
    mr r3, r30
    addi r4, r1, 0x238
    fmuls f2, f0, f29
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_80336C8C_00001E8C:
    addi r11, r1, 0x4e0
    psq_l f31, 0x528(r1), 0, 0
    lfd f31, 0x520(r1)
    psq_l f30, 0x518(r1), 0, 0
    lfd f30, 0x510(r1)
    psq_l f29, 0x508(r1), 0, 0
    lfd f29, 0x500(r1)
    psq_l f28, 0x4f8(r1), 0, 0
    lfd f28, 0x4f0(r1)
    psq_l f27, 0x4e8(r1), 0, 0
    lfd f27, 0x4e0(r1)
    bl _restgpr_27
    lwz r0, 0x534(r1)
    mtlr r0
    addi r1, r1, 0x530
    blr
}
