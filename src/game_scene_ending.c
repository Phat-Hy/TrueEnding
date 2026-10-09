#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_8010CA3C(void);
extern void fn_801240B4(void);
extern void fn_8013CB68(void);
extern void fn_80153698(void);
extern void fn_801539E0(void);
extern void fn_80153B44(void);
extern void fn_80179D44(void);
extern void fn_801A4E08(void);
extern void fn_8036DAF4(void);
extern void fn_803C1560(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8073AB90[];
extern u8 lbl_807803A8[];
extern u8 lbl_80780420[];
extern u8 lbl_80780498[];
extern u8 lbl_80780510[];
extern u8 lbl_80780588[];
extern u8 lbl_80780600[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8088238C;
extern u32 lbl_80882390;
extern u32 lbl_80882398;
extern u32 lbl_8088239C;
extern u32 lbl_808823A0;
extern u32 lbl_808823A4;
extern u32 lbl_808823A8;
extern u32 lbl_808823B0;
extern u32 lbl_808823B4;
extern u32 lbl_808823B8;
extern u32 lbl_808823BC;
extern u32 lbl_808823C0;
extern u32 lbl_808823C4;
extern u32 lbl_808823C8;
extern u32 lbl_808823CC;
extern u32 lbl_808823D0;
extern u32 lbl_808823D4;
extern u32 lbl_808823D8;
extern u32 lbl_808823DC;
extern u32 lbl_808823E0;
extern u32 lbl_808823E4;
extern u32 lbl_808823E8;
extern u32 lbl_808823EC;
extern u32 lbl_808823F0;
extern u32 lbl_808823F4;
extern u32 lbl_808823F8;
extern u32 lbl_808823FC;
extern u32 lbl_80882400;
extern u32 lbl_80882404;

/* Function declarations */
void fn_801B0920(void);
void fn_801B0D00(void);
void fn_801B0D08(void);
void fn_801B0D48(void);
void fn_801B0D88(void);
void fn_801B0ED0(void);
void fn_801B11A8(void);
void fn_801B11BC(void);
void fn_801B1230(void);
void fn_801B151C(void);
void fn_801B1624(void);
void fn_801B192C(void);
void fn_801B19C8(void);
void fn_801B19E4(void);
void fn_801B1AAC(void);
void fn_801B1F4C(void);

asm void fn_801B0920(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r4, r1, 0xa4
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    lfs f30, lbl_8088238C
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    lfs f29, lbl_80882390
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    mr r29, r3
    lwz r5, 0x4(r3)
    psq_l f1, 0x534(r5), 0, 0
    addi r30, r5, 0xb0
    lfs f2, 0x53c(r5)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r4, 0xd1c(r5)
    cmpwi r4, 0x0
    beq lbl_fn_801B0920_0000037C
    lfs f5, 0x530(r4)
    addi r3, r1, 0x98
    lfs f4, 0x530(r5)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xa0(r1)
    stfs f0, 0x98(r1)
    stfs f30, 0x9c(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80882398
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801B0920_000000B8
    addi r3, r1, 0x98
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801B0920_000000B8:
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088238C
    fcmpo cr0, f1, f0
    ble lbl_fn_801B0920_00000178
    lfs f31, 0x238(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882390
    addi r3, r1, 0x80
    lwz r4, 0x4(r29)
    fdivs f9, f0, f1
    lfs f5, lbl_8088239C
    lfs f0, 0x9c(r1)
    lfs f4, 0x98(r1)
    lfs f6, 0xa0(r1)
    lfs f3, 0x52c(r4)
    fmuls f7, f0, f5
    lfs f0, 0x528(r4)
    fmuls f8, f4, f5
    lfs f4, 0x530(r4)
    fmuls f5, f6, f5
    stfs f7, 0x60(r1)
    fmuls f7, f7, f9
    stfs f8, 0x5c(r1)
    fmuls f8, f8, f9
    fmuls f6, f5, f9
    stfs f5, 0x64(r1)
    fmuls f9, f7, f31
    fmuls f10, f8, f31
    stfs f8, 0x68(r1)
    fmuls f5, f6, f31
    fsubs f3, f3, f9
    stfs f7, 0x6c(r1)
    fsubs f0, f0, f10
    fsubs f2, f4, f5
    stfs f3, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f6, 0x70(r1)
    stfs f10, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f2, 0x88(r1)
    stfs f2, 0x530(r4)
lbl_fn_801B0920_00000178:
    lwz r5, 0x4(r29)
    addi r3, r1, 0x8c
    lfs f0, lbl_80882398
    addi r4, r1, 0x98
    lfs f2, 0x53c(r5)
    addi r31, r1, 0x50
    stfs f2, 0x94(r1)
    lfs f2, 0xa0(r1)
    psq_l f1, 0x534(r5), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B0920_000001E0
    lfs f3, 0x50(r1)
    lfs f0, lbl_8088238C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B0920_000001D4
    lfs f0, lbl_808823A0
    b lbl_fn_801B0920_000001D8
lbl_fn_801B0920_000001D4:
    lfs f0, lbl_808823A4
lbl_fn_801B0920_000001D8:
    stfs f0, 0x48(r1)
    b lbl_fn_801B0920_000001F4
lbl_fn_801B0920_000001E0:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801B0920_000001F4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088238C
    addi r4, r1, 0x38
    lfs f28, 0xb8(r1)
    mr r5, r4
    lfs f31, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f13, 0xb0(r1)
    lfs f12, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f10, 0xc0(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f7, 0xd0(r1)
    lfs f6, 0xdc(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xbc(r1)
    lfs f0, lbl_80882390
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xe0(r1)
    stfs f31, 0xe4(r1)
    stfs f28, 0xe8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f12, 0xf8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xec(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882398
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B0920_00000310
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088238C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B0920_00000300
    lfs f0, lbl_808823A0
    b lbl_fn_801B0920_00000304
lbl_fn_801B0920_00000300:
    lfs f0, lbl_808823A4
lbl_fn_801B0920_00000304:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801B0920_00000324
lbl_fn_801B0920_00000310:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801B0920_00000324:
    addi r3, r1, 0x44
    lfs f3, lbl_8088238C
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x8c
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f3
    lwz r4, 0x4(r29)
    lfs f0, 0x54(r1)
    stfs f0, 0x90(r1)
    lfs f0, lbl_808823A8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x58(r1)
    lfs f2, 0x94(r1)
    stfs f2, 0x53c(r4)
    lfs f4, 0x234(r30)
    stfs f3, 0x4c(r1)
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801B0920_0000037C
    li r3, 0x1
    b lbl_fn_801B0920_000003A4
lbl_fn_801B0920_0000037C:
    lwz r3, 0x4(r29)
    fmr f1, f30
    fmr f2, f29
    addi r4, r1, 0xa4
    lwz r12, 0x0(r3)
    li r5, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_801B0920_000003A4:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_801B0D00(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_801B0D08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B0D08_00000410
    cmpwi r4, 0x0
    ble lbl_fn_801B0D08_00000410
    bl dtor_80084684
lbl_fn_801B0D08_00000410:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B0D48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B0D48_00000450
    cmpwi r4, 0x0
    ble lbl_fn_801B0D48_00000450
    bl dtor_80084684
lbl_fn_801B0D48_00000450:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B0D88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80780600@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_80780600@l
    li r0, 0x2
    lfs f2, 0x8(r5)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x7ec(r4)
    oris r0, r0, 0x2
    stw r0, 0x7ec(r4)
    lwz r4, 0x4(r3)
    psq_st f1, 0x8(r3), 0, 0
    addi r30, r4, 0xb0
    stfs f2, 0x10(r3)
    lwz r0, 0x12a4(r4)
    srwi. r0, r0, 31
    beq lbl_fn_801B0D88_000004D4
    mr r3, r4
    bl fn_801539E0
lbl_fn_801B0D88_000004D4:
    lwz r7, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_808823B0
    mr r3, r30
    lwz r6, 0x12a4(r7)
    li r4, 0x0
    lfs f1, lbl_808823B4
    li r5, 0x61
    rlwinm r6, r6, 0, 27, 25
    stw r6, 0x12a4(r7)
    lfs f2, lbl_808823B8
    li r6, 0x0
    stw r0, 0x34c(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f0, lbl_808823B0
    stfs f0, 0x238(r30)
    lwz r3, 0x4(r31)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801B0D88_00000554
    lfs f3, 0x570(r3)
    lfs f0, lbl_808823BC
    fcmpo cr0, f3, f0
    bge lbl_fn_801B0D88_00000554
    stfs f0, 0x570(r3)
lbl_fn_801B0D88_00000554:
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B0D88_00000594
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B0D88_00000594
    lwz r3, lbl_8087F498
    li r5, 0x0
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_808823B0
    lfs f2, lbl_808823C0
    bl fn_803EA77C
lbl_fn_801B0D88_00000594:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B0ED0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    bl _savegpr_27
    lwz r4, 0x4(r3)
    mr r27, r3
    lwz r3, lbl_8087F048
    li r28, 0x0
    lfs f1, lbl_808823C4
    addi r31, r4, 0xb0
    bl fn_8010CA3C
    lfs f0, lbl_808823C4
    fmr f31, f1
    mr r3, r31
    li r4, 0x0
    fdivs f0, f1, f0
    stfs f0, 0x238(r31)
    lfs f29, 0x234(r31)
    bl fn_80097D7C
    lfs f0, lbl_808823C8
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_801B0ED0_00000690
    lwz r3, 0x4(r27)
    lwz r0, 0x564(r3)
    cmpwi r0, 0x2
    bne lbl_fn_801B0ED0_0000067C
    lwz r4, lbl_8087F430
    addi r29, r3, 0x528
    lwz r28, 0xd0c(r3)
    lwz r31, 0x10d8(r4)
    lwz r30, 0xd04(r3)
    bl fn_80179D44
    lfs f1, lbl_808823CC
    mr r5, r3
    mr r3, r31
    mr r4, r29
    mr r6, r28
    mr r7, r30
    li r8, 0x1
    bl fn_803C1560
    lwz r4, 0x4(r27)
    stw r3, 0xc64(r4)
lbl_fn_801B0ED0_0000067C:
    lwz r3, 0x4(r27)
    li r28, 0x1
    lwz r0, 0x7ec(r3)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x7ec(r3)
lbl_fn_801B0ED0_00000690:
    lfs f2, 0x10(r27)
    addi r31, r1, 0x50
    psq_l f1, 0x8(r27), 0, 0
    fabs f3, f2
    lfs f0, lbl_808823D0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B0ED0_000006DC
    lfs f3, 0x50(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B0ED0_000006D0
    lfs f0, lbl_808823D4
    b lbl_fn_801B0ED0_000006D4
lbl_fn_801B0ED0_000006D0:
    lfs f0, lbl_808823D8
lbl_fn_801B0ED0_000006D4:
    stfs f0, 0x48(r1)
    b lbl_fn_801B0ED0_000006F0
lbl_fn_801B0ED0_000006DC:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801B0ED0_000006F0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808823B4
    addi r4, r1, 0x38
    lfs f29, 0x68(r1)
    mr r5, r4
    lfs f30, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_808823B0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x90(r1)
    stfs f30, 0x94(r1)
    stfs f29, 0x98(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808823D0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B0ED0_0000080C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B0ED0_000007FC
    lfs f0, lbl_808823D4
    b lbl_fn_801B0ED0_00000800
lbl_fn_801B0ED0_000007FC:
    lfs f0, lbl_808823D8
lbl_fn_801B0ED0_00000800:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801B0ED0_00000820
lbl_fn_801B0ED0_0000080C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801B0ED0_00000820:
    lfs f0, lbl_808823B4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, lbl_808823B0
    li r5, 0x0
    stfs f2, 0x58(r1)
    fmr f2, f31
    stfs f0, 0x4c(r1)
    lwz r3, 0x4(r27)
    bl fn_8013CB68
    psq_l f31, 0x118(r1), 0, 0
    mr r3, r28
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    addi r11, r1, 0xf0
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801B11A8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lwz r0, 0x7ec(r3)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x7ec(r3)
    blr
}

asm void fn_801B11BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_80780588@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x14(r1)
    addi r7, r7, lbl_80780588@l
    li r0, 0x0
    lfs f2, 0x8(r5)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stw r6, 0x14(r3)
    stw r0, 0x560(r4)
    psq_st f1, 0x8(r3), 0, 0
    lwz r4, 0x4(r3)
    stfs f2, 0x10(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x12a4(r4)
    srwi. r0, r0, 31
    beq lbl_fn_801B11BC_000008F8
    mr r3, r4
    bl fn_801539E0
lbl_fn_801B11BC_000008F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B1230(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r4, r1, 0x5c
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    addi r31, r1, 0x50
    stw r30, 0x128(r1)
    li r30, 0x0
    stw r29, 0x124(r1)
    mr r29, r3
    lwz r5, 0x4(r3)
    lfs f3, 0x10(r3)
    lfs f0, 0x530(r5)
    lfs f5, 0xc(r3)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r5)
    lfs f3, 0x8(r3)
    lfs f0, 0x528(r5)
    fsubs f4, f5, f4
    fsubs f3, f3, f0
    stfs f4, 0x60(r1)
    frsp f4, f2
    lfs f0, lbl_808823D0
    stfs f3, 0x5c(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    frsp f3, f3
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B1230_000009C4
    lfs f3, 0x50(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B1230_000009B8
    lfs f0, lbl_808823D4
    b lbl_fn_801B1230_000009BC
lbl_fn_801B1230_000009B8:
    lfs f0, lbl_808823D8
lbl_fn_801B1230_000009BC:
    stfs f0, 0x48(r1)
    b lbl_fn_801B1230_000009D8
lbl_fn_801B1230_000009C4:
    fmr f2, f4
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801B1230_000009D8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808823B4
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
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
    lfs f0, lbl_808823B0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
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
    lfs f0, lbl_808823D0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B1230_00000AF4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B1230_00000AE4
    lfs f0, lbl_808823D4
    b lbl_fn_801B1230_00000AE8
lbl_fn_801B1230_00000AE4:
    lfs f0, lbl_808823D8
lbl_fn_801B1230_00000AE8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801B1230_00000B08
lbl_fn_801B1230_00000AF4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801B1230_00000B08:
    addi r3, r1, 0x44
    lfs f2, lbl_808823B4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x5c
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9940
    lfs f0, lbl_808823DC
    lfs f30, lbl_808823B0
    fcmpo cr0, f1, f0
    ble lbl_fn_801B1230_00000B44
    lfs f0, lbl_808823C4
    fmuls f30, f30, f0
    b lbl_fn_801B1230_00000B58
lbl_fn_801B1230_00000B44:
    lfs f0, lbl_808823E0
    fcmpo cr0, f1, f0
    bge lbl_fn_801B1230_00000B58
    lfs f0, lbl_808823E4
    fmuls f30, f30, f0
lbl_fn_801B1230_00000B58:
    lfs f0, lbl_808823C8
    fcmpo cr0, f1, f0
    bge lbl_fn_801B1230_00000B9C
    lwz r3, lbl_8087F430
    addi r4, r1, 0xd8
    lwz r5, 0x4(r29)
    li r6, 0x0
    lwz r7, 0x14(r29)
    bl fn_8036DAF4
    cmpwi r3, 0x0
    beq lbl_fn_801B1230_00000B9C
    lwz r3, 0x4(r29)
    addi r4, r1, 0xd8
    li r5, 0x0
    bl fn_80153698
    li r30, 0x1
    b lbl_fn_801B1230_00000BB4
lbl_fn_801B1230_00000B9C:
    lwz r3, 0x18(r29)
    addi r0, r3, 0x1
    stw r0, 0x18(r29)
    cmpwi r0, 0x3c
    ble lbl_fn_801B1230_00000BB4
    li r30, 0x1
lbl_fn_801B1230_00000BB4:
    fmr f2, f30
    lwz r3, 0x4(r29)
    lfs f1, lbl_808823B0
    addi r4, r1, 0x50
    li r5, 0x0
    bl fn_8013CB68
    psq_l f31, 0x148(r1), 0, 0
    mr r3, r30
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_801B151C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80780510@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80780510@l
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r5, 0x0(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    addi r31, r3, 0xb0
    bl fn_80153B44
    lwz r4, 0x4(r30)
    cmpwi r3, 0x1
    addi r3, r4, 0xc14
    lfs f2, 0xc1c(r4)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r30), 0, 0
    stfs f2, 0x10(r30)
    bne lbl_fn_801B151C_00000C90
    frsp f4, f2
    lfs f3, 0xc(r30)
    lfs f0, 0x8(r30)
    addi r3, r1, 0x8
    fneg f5, f3
    fneg f3, f4
    fneg f0, f0
    stfs f5, 0xc(r1)
    stfs f0, 0x8(r1)
    frsp f2, f3
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x10(r1)
    psq_st f1, 0x8(r30), 0, 0
    stfs f2, 0x10(r30)
lbl_fn_801B151C_00000C90:
    li r0, 0x0
    stw r0, 0x14(r30)
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801B151C_00000CAC
    bl fn_801539E0
lbl_fn_801B151C_00000CAC:
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_808823B0
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r4, 0x0
    lfs f1, lbl_808823B4
    li r5, 0x61
    lfs f2, lbl_808823B8
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808823B0
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B1624(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    li r30, 0x0
    stw r29, 0xe4(r1)
    mr r29, r3
    lwz r4, 0x14(r3)
    lwz r5, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x14(r3)
    cmpwi r0, 0x7
    addi r4, r5, 0xb0
    bge lbl_fn_801B1624_00000F54
    lfs f2, 0x53c(r5)
    addi r4, r1, 0x5c
    stfs f2, 0x64(r1)
    addi r31, r1, 0x50
    lfs f2, 0x10(r3)
    psq_l f1, 0x534(r5), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x8(r3), 0, 0
    lfs f0, lbl_808823D0
    frsp f3, f3
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B1624_00000DB0
    lfs f3, 0x50(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B1624_00000DA4
    lfs f0, lbl_808823D4
    b lbl_fn_801B1624_00000DA8
lbl_fn_801B1624_00000DA4:
    lfs f0, lbl_808823D8
lbl_fn_801B1624_00000DA8:
    stfs f0, 0x48(r1)
    b lbl_fn_801B1624_00000DC4
lbl_fn_801B1624_00000DB0:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801B1624_00000DC4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808823B4
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
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
    lfs f0, lbl_808823B0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
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
    lfs f0, lbl_808823D0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B1624_00000EE0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B1624_00000ED0
    lfs f0, lbl_808823D4
    b lbl_fn_801B1624_00000ED4
lbl_fn_801B1624_00000ED0:
    lfs f0, lbl_808823D8
lbl_fn_801B1624_00000ED4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801B1624_00000EF4
lbl_fn_801B1624_00000EE0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801B1624_00000EF4:
    addi r3, r1, 0x44
    lfs f2, lbl_808823B4
    psq_l f1, 0x0(r3), 0, 0
    li r5, 0x0
    lwz r3, 0x4(r29)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lfs f2, lbl_808823C4
    lwz r3, 0x4(r29)
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, lbl_808823B0
    addi r4, r3, 0x534
    bl fn_8013CB68
    addi r3, r1, 0x5c
    lwz r4, 0x4(r29)
    psq_l f1, 0x0(r3), 0, 0
    li r3, 0x0
    psq_st f1, 0x534(r4), 0, 0
    lfs f2, 0x64(r1)
    stfs f2, 0x53c(r4)
    b lbl_fn_801B1624_00000FE0
lbl_fn_801B1624_00000F54:
    lfs f30, 0x234(r4)
    mr r3, r4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808823C8
    fsubs f0, f1, f0
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_801B1624_00000FC4
    lwz r30, 0x4(r29)
    lwz r0, 0x564(r30)
    cmpwi r0, 0x2
    bne lbl_fn_801B1624_00000FC0
    lwz r4, lbl_8087F430
    mr r3, r30
    lwz r31, 0x10d8(r4)
    bl fn_80179D44
    lwz r6, 0xd0c(r30)
    mr r5, r3
    lwz r7, 0xd04(r30)
    mr r3, r31
    lfs f1, lbl_808823CC
    addi r4, r30, 0x528
    li r8, 0x1
    bl fn_803C1560
    lwz r4, 0x4(r29)
    stw r3, 0xc64(r4)
lbl_fn_801B1624_00000FC0:
    li r30, 0x1
lbl_fn_801B1624_00000FC4:
    lwz r3, 0x4(r29)
    li r5, 0x0
    lfs f1, lbl_808823B0
    lfs f2, lbl_808823C4
    addi r4, r3, 0x534
    bl fn_8013CB68
    mr r3, r30
lbl_fn_801B1624_00000FE0:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801B192C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80780498@ha
    li r6, 0x47
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80780498@l
    li r0, 0x1
    lfs f0, lbl_808823B0
    stw r31, 0xc(r1)
    li r7, 0x0
    lfs f1, lbl_808823B4
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, lbl_808823B8
    stw r5, 0x0(r3)
    li r5, 0x1e
    stw r4, 0x4(r3)
    stw r6, 0x560(r4)
    li r4, 0x0
    li r6, 0x0
    lwz r8, 0x4(r3)
    stw r5, 0x8(r3)
    addi r31, r8, 0xb0
    stw r0, 0x3fc(r8)
    mr r3, r31
    li r8, 0x1
    stfs f0, 0x24c(r31)
    lwz r5, 0x4(r30)
    lwz r5, 0x494(r5)
    bl fn_80097C08
    lfs f0, lbl_808823B0
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B19C8(void)
{
    nofralloc
    lwz r5, 0x8(r3)
    li r4, 0x1
    subi r0, r5, 0x1
    stw r0, 0x8(r3)
    cntlzw r0, r0
    rlwnm r3, r4, r0, 31, 31
    blr
}

asm void fn_801B19E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, lbl_80780420@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x14(r1)
    addi r8, r8, lbl_80780420@l
    lfs f2, 0x8(r5)
    li r10, 0x0
    stw r31, 0xc(r1)
    li r9, 0x3f
    li r0, 0x1
    lfs f0, lbl_808823B0
    stw r30, 0x8(r1)
    mr r30, r3
    li r5, 0x62
    li r6, 0x0
    psq_st f1, 0x8(r3), 0, 0
    li r7, 0x0
    lfs f1, lbl_808823B4
    stfs f2, 0x10(r3)
    lfs f2, lbl_808823B8
    stw r8, 0x0(r3)
    li r8, 0x1
    stw r4, 0x4(r3)
    stw r10, 0x14(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f1, lbl_808823B0
    stfs f1, 0x238(r31)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801B19E4_00001170
    lwz r4, 0x4(r30)
    li r5, 0xc
    lfs f2, lbl_808823C0
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_801B19E4_00001170:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B1AAC(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    lfs f0, lbl_808823D0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    lfs f31, lbl_808823B0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    stw r29, 0x104(r1)
    addi r29, r1, 0x80
    lfs f2, 0x10(r3)
    lwz r4, 0x4(r3)
    fabs f3, f2
    psq_l f1, 0x8(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    addi r31, r4, 0xb0
    frsp f3, f3
    stfs f2, 0x88(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B1AAC_00001218
    lfs f3, 0x80(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B1AAC_0000120C
    lfs f0, lbl_808823D4
    b lbl_fn_801B1AAC_00001210
lbl_fn_801B1AAC_0000120C:
    lfs f0, lbl_808823D8
lbl_fn_801B1AAC_00001210:
    stfs f0, 0x48(r1)
    b lbl_fn_801B1AAC_0000122C
lbl_fn_801B1AAC_00001218:
    frsp f2, f2
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801B1AAC_0000122C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808823B4
    addi r4, r1, 0x38
    lfs f29, 0x98(r1)
    mr r5, r4
    lfs f30, 0x94(r1)
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
    lfs f0, lbl_808823B0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x88(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f30, 0xc4(r1)
    stfs f29, 0xc8(r1)
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
    lfs f0, lbl_808823D0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B1AAC_00001348
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B1AAC_00001338
    lfs f0, lbl_808823D4
    b lbl_fn_801B1AAC_0000133C
lbl_fn_801B1AAC_00001338:
    lfs f0, lbl_808823D8
lbl_fn_801B1AAC_0000133C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801B1AAC_0000135C
lbl_fn_801B1AAC_00001348:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801B1AAC_0000135C:
    addi r3, r1, 0x44
    lfs f2, lbl_808823B4
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r29), 0, 0
    li r4, 0x0
    stfs f2, 0x88(r1)
    stfs f2, 0x4c(r1)
    lfs f29, 0x234(r31)
    bl fn_80097D7C
    lfs f0, lbl_808823C8
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_801B1AAC_000013E4
    lwz r31, 0x4(r30)
    lwz r0, 0x564(r31)
    cmpwi r0, 0x2
    bne lbl_fn_801B1AAC_000015D0
    lwz r4, lbl_8087F430
    mr r3, r31
    lwz r29, 0x10d8(r4)
    bl fn_80179D44
    lwz r6, 0xd0c(r31)
    mr r5, r3
    lwz r7, 0xd04(r31)
    mr r3, r29
    lfs f1, lbl_808823CC
    addi r4, r31, 0x528
    li r8, 0x1
    bl fn_803C1560
    lwz r4, 0x4(r30)
    stw r3, 0xc64(r4)
    b lbl_fn_801B1AAC_000015D0
lbl_fn_801B1AAC_000013E4:
    lwz r7, 0x4(r30)
    addi r3, r1, 0x74
    addi r4, r1, 0x68
    lfs f3, 0x234(r31)
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r1, 0x5c
    lfs f2, 0x530(r7)
    addi r6, r1, 0x50
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x534(r7), 0, 0
    stfs f2, 0x7c(r1)
    lfs f2, 0x53c(r7)
    lfs f0, lbl_808823E8
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x574(r7), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x70(r1)
    lfs f2, 0x57c(r7)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    lfs f2, 0x70(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    cror eq, lt, eq
    bne lbl_fn_801B1AAC_00001468
    lfs f4, 0x78(r1)
    lfs f3, lbl_808823EC
    lfs f0, lbl_808823B4
    fadds f3, f4, f3
    stfs f0, 0x60(r1)
    stfs f3, 0x78(r1)
    b lbl_fn_801B1AAC_000014CC
lbl_fn_801B1AAC_00001468:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801B1AAC_000014B0
    lwz r0, 0x48(r7)
    cmpwi r0, 0x0
    bne lbl_fn_801B1AAC_00001498
    lwz r3, lbl_8087F0A8
    li r4, 0x7
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_801B1AAC_000014A4
lbl_fn_801B1AAC_00001498:
    li r0, 0x1
    stw r0, 0x14(r30)
    b lbl_fn_801B1AAC_000014CC
lbl_fn_801B1AAC_000014A4:
    li r0, 0x2
    stw r0, 0x14(r30)
    b lbl_fn_801B1AAC_000014CC
lbl_fn_801B1AAC_000014B0:
    cmpwi r0, 0x1
    bne lbl_fn_801B1AAC_000014CC
    addi r3, r1, 0x80
    lfs f2, 0x88(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_801B1AAC_000014CC:
    addi r3, r1, 0x74
    lwz r5, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x68
    psq_st f1, 0x528(r5), 0, 0
    addi r3, r1, 0x5c
    lfs f2, 0x7c(r1)
    addi r4, r1, 0x80
    stfs f2, 0x530(r5)
    li r5, 0x1
    psq_l f1, 0x0(r29), 0, 0
    lwz r6, 0x4(r30)
    lfs f2, 0x70(r1)
    psq_st f1, 0x534(r6), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x53c(r6)
    lfs f2, 0x64(r1)
    lwz r3, 0x4(r30)
    psq_st f1, 0x574(r3), 0, 0
    fmr f1, f31
    stfs f2, 0x57c(r3)
    lwz r3, 0x4(r30)
    lfs f0, 0x568(r3)
    fmuls f2, f31, f0
    bl fn_8013CB68
    lwz r0, 0x14(r30)
    cmpwi r0, 0x1
    bne lbl_fn_801B1AAC_000015C8
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r29), 0, 0
    li r4, 0x0
    stfs f2, 0x70(r1)
    bl fn_80097D7C
    lfs f0, lbl_808823E8
    lis r3, lbl_8073AB90@ha
    lfs f3, lbl_808823F0
    fsubs f4, f1, f0
    lfs f0, 0x6c(r1)
    lfd f2, lbl_8073AB90@l(r3)
    fdivs f3, f3, f4
    fadds f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808823F0
    fcmpo cr0, f3, f0
    ble lbl_fn_801B1AAC_00001598
    lfs f0, lbl_808823F4
    fsubs f3, f3, f0
lbl_fn_801B1AAC_00001598:
    lfs f0, lbl_808823F8
    fcmpo cr0, f3, f0
    bge lbl_fn_801B1AAC_000015AC
    lfs f0, lbl_808823F4
    fadds f3, f3, f0
lbl_fn_801B1AAC_000015AC:
    stfs f3, 0x6c(r1)
    addi r3, r1, 0x68
    lwz r4, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    lfs f2, 0x70(r1)
    stfs f2, 0x53c(r4)
lbl_fn_801B1AAC_000015C8:
    li r3, 0x0
    b lbl_fn_801B1AAC_000015F8
lbl_fn_801B1AAC_000015D0:
    lwz r3, 0x4(r30)
    fmr f1, f31
    fmr f2, f31
    addi r4, r1, 0x80
    lwz r12, 0x0(r3)
    li r5, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    li r3, 0x1
lbl_fn_801B1AAC_000015F8:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_801B1F4C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lis r7, lbl_807803A8@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x124(r1)
    addi r7, r7, lbl_807803A8@l
    lfs f2, 0x8(r5)
    li r0, 0x2
    stfd f31, 0x110(r1)
    lfs f0, lbl_808823FC
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r6
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    stfs f0, 0x20(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x12a4(r3)
    addi r30, r3, 0xb0
    srwi. r0, r0, 31
    beq lbl_fn_801B1F4C_000016A4
    bl fn_801539E0
lbl_fn_801B1F4C_000016A4:
    li r0, 0x1
    stw r0, 0x34c(r30)
    lfs f0, lbl_808823B0
    mr r3, r30
    stfs f0, 0x24c(r30)
    li r4, 0x0
    lfs f1, lbl_808823B4
    li r5, 0x1ea
    lfs f2, lbl_808823B8
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882400
    cmpwi r31, 0x0
    stfs f0, 0x238(r30)
    addi r4, r29, 0x14
    lwz r3, 0x4(r29)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x0(r4), 0, 0
    beq lbl_fn_801B1F4C_00001708
    addi r5, r29, 0x8
    bl fn_801A4E08
lbl_fn_801B1F4C_00001708:
    lfs f5, 0xc(r29)
    addi r31, r1, 0x68
    lfs f4, 0x18(r29)
    addi r4, r1, 0x5c
    lfs f3, 0x8(r29)
    mr r3, r31
    fsubs f6, f5, f4
    lfs f0, 0x14(r29)
    lfs f5, 0x10(r29)
    lfs f4, 0x1c(r29)
    fsubs f7, f3, f0
    fneg f8, f6
    fsubs f3, f5, f4
    stfs f7, 0x68(r1)
    fneg f4, f7
    lfs f0, lbl_808823B4
    stfs f8, 0x60(r1)
    fneg f3, f3
    stfs f4, 0x5c(r1)
    frsp f2, f3
    stfs f6, 0x6c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f3, 0x64(r1)
    stfs f2, 0x70(r1)
    stfs f0, 0x6c(r1)
    bl fn_805F9920
    lfs f0, lbl_80882404
    fcmpo cr0, f1, f0
    ble lbl_fn_801B1F4C_00001938
    lfs f2, 0x70(r1)
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808823D0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B1F4C_000017CC
    lfs f3, 0x50(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B1F4C_000017C0
    lfs f0, lbl_808823D4
    b lbl_fn_801B1F4C_000017C4
lbl_fn_801B1F4C_000017C0:
    lfs f0, lbl_808823D8
lbl_fn_801B1F4C_000017C4:
    stfs f0, 0x48(r1)
    b lbl_fn_801B1F4C_000017E0
lbl_fn_801B1F4C_000017CC:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801B1F4C_000017E0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808823B4
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_808823B0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808823D0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B1F4C_000018FC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808823B4
    fcmpo cr0, f3, f0
    ble lbl_fn_801B1F4C_000018EC
    lfs f0, lbl_808823D4
    b lbl_fn_801B1F4C_000018F0
lbl_fn_801B1F4C_000018EC:
    lfs f0, lbl_808823D8
lbl_fn_801B1F4C_000018F0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801B1F4C_00001910
lbl_fn_801B1F4C_000018FC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801B1F4C_00001910:
    addi r3, r1, 0x44
    lfs f2, lbl_808823B4
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r29)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x53c(r3)
lbl_fn_801B1F4C_00001938:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801B1F4C_0000195C
    lwz r4, 0x4(r29)
    li r5, 0xc
    lfs f1, lbl_808823B0
    li r6, 0x0
    lfs f2, lbl_808823C0
    bl fn_803EA77C
lbl_fn_801B1F4C_0000195C:
    psq_l f31, 0x118(r1), 0, 0
    mr r3, r29
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
