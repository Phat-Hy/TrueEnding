#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80056DB8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800E2DD4(void);
extern void fn_800E2FE0(void);
extern void fn_800F8548(void);
extern void fn_801092C8(void);
extern void fn_80126214(void);
extern void fn_8012D8B8(void);
extern void fn_80139560(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_8015EB2C(void);
extern void fn_8016DA4C(void);
extern void fn_8016EB48(void);
extern void fn_80170A20(void);
extern void fn_80170F20(void);
extern void fn_80175A38(void);
extern void fn_80178208(void);
extern void fn_80178A6C(void);
extern void fn_8019AFE8(void);
extern void fn_80219558(void);
extern void fn_8023A8B4(void);
extern void fn_80249588(void);
extern void fn_8035B694(void);
extern void fn_8036554C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80375184(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_807433F0[];
extern u8 lbl_80743498[];
extern u8 lbl_807434DC[];
extern u8 lbl_80766768[];
extern u8 lbl_80775A88[];
extern u8 lbl_80777668[];
extern u8 lbl_80783E38[];
extern u8 lbl_80783F78[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_808831D8;
extern u32 lbl_808831DC;
extern u32 lbl_808831E0;
extern u32 lbl_808831E4;
extern u32 lbl_808831E8;
extern u32 lbl_808831EC;
extern u32 lbl_808831F0;
extern u32 lbl_808831F4;
extern u32 lbl_808831F8;
extern u32 lbl_808831FC;
extern u32 lbl_80883200;
extern u32 lbl_80883204;
extern u32 lbl_80883208;
extern u32 lbl_8088320C;
extern u32 lbl_80883210;
extern u32 lbl_80883218;
extern u32 lbl_8088321C;
extern u32 lbl_80883220;
extern u32 lbl_80883224;
extern u32 lbl_80883228;
extern u32 lbl_8088322C;
extern u32 lbl_80883230;
extern u32 lbl_80883234;

/* Function declarations */
void fn_80247C08(void);
void fn_80247C1C(void);
void fn_80247C60(void);
void fn_80247C68(void);
void fn_80247DA4(void);
void fn_80247FB0(void);
void fn_8024845C(void);
void fn_80248854(void);
void fn_80248A4C(void);
void fn_80248E88(void);
void fn_80248F08(void);
void fn_80249004(void);
void fn_80249224(void);
void fn_80249394(void);

asm void fn_80247C08(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x0
    beqlr
    b fn_80149A30
    blr
}

asm void fn_80247C1C(void)
{
    nofralloc
    lwz r5, 0x58c(r3)
    cmpwi r5, 0x0
    beqlr
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_80247C1C_00000030
    blr
lbl_fn_80247C1C_00000030:
    li r5, 0x0
    li r0, -0x1
    stw r5, 0x90(r4)
    stw r0, 0x88(r4)
    stw r5, 0x84(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_80247C60(void)
{
    nofralloc
    li r4, 0x1
    b fn_80248A4C
}

asm void fn_80247C68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    li r4, 0xce
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bge lbl_fn_80247C68_00000098
    li r3, 0x0
lbl_fn_80247C68_00000098:
    cmpwi r3, 0x2
    ble lbl_fn_80247C68_000000A4
    li r3, 0x2
lbl_fn_80247C68_000000A4:
    mulli r4, r3, 0x30
    lis r3, lbl_807433F0@ha
    li r0, 0x6
    lwz r30, 0x50(r28)
    addi r3, r3, lbl_807433F0@l
    add r29, r3, r4
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    mtctr r0
lbl_fn_80247C68_000000CC:
    lwz r0, 0x4(r3)
    cmpw r30, r0
    bne lbl_fn_80247C68_000000F4
    slwi r0, r5, 3
    lwz r3, lbl_8087F430
    lwzx r4, r29, r0
    mr r5, r30
    bl fn_80370AE4
    li r4, 0x1
    b lbl_fn_80247C68_00000100
lbl_fn_80247C68_000000F4:
    addi r3, r3, 0x8
    addi r5, r5, 0x1
    bdnz lbl_fn_80247C68_000000CC
lbl_fn_80247C68_00000100:
    cmpwi r4, 0x0
    beq lbl_fn_80247C68_0000017C
    lwz r3, lbl_8087F430
    li r4, 0x23
    bl fn_80370A78
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80247C68_0000016C
    li r28, 0x0
lbl_fn_80247C68_00000124:
    lwz r0, 0x4(r29)
    cmpw r30, r0
    beq lbl_fn_80247C68_00000140
    lwz r3, lbl_8087F430
    li r5, 0x0
    lwz r4, 0x0(r29)
    bl fn_80370AE4
lbl_fn_80247C68_00000140:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    bge lbl_fn_80247C68_0000015C
    lwz r3, lbl_8087F430
    li r5, 0x19
    lwz r4, 0x0(r29)
    bl fn_80370AE4
lbl_fn_80247C68_0000015C:
    addi r28, r28, 0x1
    addi r29, r29, 0x8
    cmpwi r28, 0x6
    blt lbl_fn_80247C68_00000124
lbl_fn_80247C68_0000016C:
    lwz r3, lbl_8087F430
    addi r5, r31, 0x1
    li r4, 0x23
    bl fn_80370AE4
lbl_fn_80247C68_0000017C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80247DA4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f2, lbl_808831D8
    stw r0, 0x44(r1)
    addi r4, r1, 0x14
    lfs f0, lbl_808831DC
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    stfs f2, 0x14(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    bl fn_80144710
    lwz r3, 0x14cc(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80247DA4_00000204
    subi r0, r3, 0x1
    stw r0, 0x14cc(r31)
    b lbl_fn_80247DA4_00000380
lbl_fn_80247DA4_00000204:
    lwz r3, lbl_8087F428
    li r30, 0x0
    bl fn_8036554C
    mr r29, r3
    b lbl_fn_80247DA4_000002C8
lbl_fn_80247DA4_00000218:
    lwz r0, 0x14c0(r31)
    li r5, 0x0
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80247DA4_0000024C
lbl_fn_80247DA4_00000230:
    lwz r3, 0x14bc(r31)
    lwzx r0, r3, r4
    cmplw r0, r29
    bne lbl_fn_80247DA4_00000244
    li r5, 0x1
lbl_fn_80247DA4_00000244:
    addi r4, r4, 0x4
    bdnz lbl_fn_80247DA4_00000230
lbl_fn_80247DA4_0000024C:
    cmpwi r5, 0x0
    bne lbl_fn_80247DA4_000002C4
    lwz r4, 0x38(r29)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80247DA4_00000278
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_80247DA4_00000278
    li r3, 0x1
lbl_fn_80247DA4_00000278:
    cmpwi r3, 0x0
    beq lbl_fn_80247DA4_000002C4
    lwz r0, 0x54c(r29)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80247DA4_000002C4
    lwz r0, 0xc54(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80247DA4_000002C4
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80247DA4_000002C4
    mr r3, r29
    bl fn_8015EB2C
    cmpwi r3, 0x0
    beq lbl_fn_80247DA4_000002C4
    mr r30, r29
    b lbl_fn_80247DA4_000002D0
lbl_fn_80247DA4_000002C4:
    lwz r29, 0x14ac(r29)
lbl_fn_80247DA4_000002C8:
    cmpwi r29, 0x0
    bne lbl_fn_80247DA4_00000218
lbl_fn_80247DA4_000002D0:
    cmpwi r30, 0x0
    beq lbl_fn_80247DA4_00000380
    lwz r3, lbl_8087F4A0
    li r29, 0x0
    lfs f31, lbl_808831E0
    lwz r28, 0x48(r3)
    b lbl_fn_80247DA4_00000360
lbl_fn_80247DA4_000002EC:
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80247DA4_0000035C
    lwz r0, 0x50(r28)
    cmpwi r0, 0x1d
    bne lbl_fn_80247DA4_0000035C
    lfs f3, 0x74(r28)
    addi r3, r1, 0x8
    lfs f0, 0x530(r30)
    lfs f5, 0x70(r28)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x6c(r28)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_80247DA4_0000035C
    mr r29, r28
    fmr f31, f1
lbl_fn_80247DA4_0000035C:
    lwz r28, 0x5c(r28)
lbl_fn_80247DA4_00000360:
    cmpwi r28, 0x0
    bne lbl_fn_80247DA4_000002EC
    cmpwi r29, 0x0
    beq lbl_fn_80247DA4_00000380
    mr r3, r31
    mr r4, r30
    mr r5, r29
    bl fn_80248854
lbl_fn_80247DA4_00000380:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80247FB0(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stfd f29, 0x180(r1)
    psq_st f29, 0x188(r1), 0, 0
    stw r31, 0x17c(r1)
    mr r31, r3
    stw r30, 0x178(r1)
    stw r29, 0x174(r1)
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80247FB0_00000560
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80247FB0_00000414
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x158(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x15c(r1)
    stw r0, 0x160(r1)
    b lbl_fn_80247FB0_00000430
lbl_fn_80247FB0_00000414:
    lis r5, lbl_80783E38@ha
    lwzu r4, lbl_80783E38@l(r5)
    stw r4, 0x158(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x15c(r1)
    stw r0, 0x160(r1)
lbl_fn_80247FB0_00000430:
    lwz r5, 0x158(r1)
    addi r3, r1, 0x68
    lwz r4, 0x15c(r1)
    lwz r0, 0x160(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80247FB0_0000049C
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80247FB0_0000049C
    lwz r3, 0xf80(r31)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_80247FB0_0000049C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80247FB0_0000049C:
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80247FB0_00000820
    lwz r5, 0x14c8(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80247FB0_00000550
    lwz r0, 0xf54(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80247FB0_00000550
    li r0, 0x1
    stw r0, 0x14b0(r31)
    lfs f3, lbl_808831D8
    addi r3, r1, 0x128
    lfs f0, lbl_808831E4
    li r4, 0x79
    stfs f3, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    lfs f1, 0x7c(r5)
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0x128
    mr r5, r4
    bl fn_805F93C0
    lwz r6, 0x14c8(r31)
    mr r3, r31
    lfs f3, 0x8c(r1)
    addi r4, r1, 0x8c
    lfs f0, 0x6c(r6)
    li r5, 0x0
    lfs f4, 0x90(r1)
    fadds f0, f3, f0
    lfs f3, 0x94(r1)
    lfs f2, lbl_808831E8
    stfs f0, 0x8c(r1)
    lfs f0, 0x70(r6)
    fadds f0, f4, f0
    stfs f0, 0x90(r1)
    lfs f0, 0x74(r6)
    fadds f0, f3, f0
    stfs f0, 0x94(r1)
    lfs f0, 0x7c(r6)
    fmuls f1, f2, f0
    bl fn_80170F20
    b lbl_fn_80247FB0_00000820
lbl_fn_80247FB0_00000550:
    mr r3, r31
    li r4, 0x0
    bl fn_80248A4C
    b lbl_fn_80247FB0_00000820
lbl_fn_80247FB0_00000560:
    cmpwi r0, 0x1
    bne lbl_fn_80247FB0_00000820
    psq_l f1, 0x534(r3), 0, 0
    addi r4, r1, 0x80
    lfs f2, 0x53c(r3)
    addi r3, r3, 0x1030
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    bl fn_80126214
    addi r4, r31, 0x1088
    addi r30, r1, 0x74
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r30
    lfs f2, 0x1090(r31)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9940
    lfs f0, lbl_808831EC
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80247FB0_000007B4
    addi r29, r1, 0x50
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x7c(r1)
    mr r3, r29
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r29
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_808831F0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80247FB0_00000620
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808831D8
    fcmpo cr0, f3, f0
    ble lbl_fn_80247FB0_00000614
    lfs f0, lbl_808831F4
    b lbl_fn_80247FB0_00000618
lbl_fn_80247FB0_00000614:
    lfs f0, lbl_808831F8
lbl_fn_80247FB0_00000618:
    stfs f0, 0x48(r1)
    b lbl_fn_80247FB0_00000634
lbl_fn_80247FB0_00000620:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80247FB0_00000634:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808831D8
    addi r4, r1, 0x38
    lfs f29, 0xc0(r1)
    mr r5, r4
    lfs f30, 0xbc(r1)
    addi r3, r1, 0xe8
    lfs f13, 0xb8(r1)
    lfs f12, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f10, 0xc8(r1)
    lfs f9, 0xe0(r1)
    lfs f8, 0xdc(r1)
    lfs f7, 0xd8(r1)
    lfs f6, 0xe4(r1)
    lfs f5, 0xd4(r1)
    lfs f4, 0xc4(r1)
    lfs f0, lbl_808831EC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x118(r1)
    stfs f3, 0x11c(r1)
    stfs f3, 0x120(r1)
    stfs f0, 0x124(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xe8(r1)
    stfs f30, 0xec(r1)
    stfs f29, 0xf0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f12, 0x100(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x108(r1)
    stfs f8, 0x10c(r1)
    stfs f9, 0x110(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xf4(r1)
    stfs f5, 0x104(r1)
    stfs f6, 0x114(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808831F0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80247FB0_00000750
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808831D8
    fcmpo cr0, f3, f0
    ble lbl_fn_80247FB0_00000740
    lfs f0, lbl_808831F4
    b lbl_fn_80247FB0_00000744
lbl_fn_80247FB0_00000740:
    lfs f0, lbl_808831F8
lbl_fn_80247FB0_00000744:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80247FB0_00000764
lbl_fn_80247FB0_00000750:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80247FB0_00000764:
    lfs f0, lbl_808831D8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x80
    fmr f2, f0
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r31
    li r5, 0x0
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f31
    stfs f2, 0x88(r1)
    lfs f2, lbl_808831EC
    lwz r12, 0x0(r31)
    stfs f0, 0x4c(r1)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_80247FB0_00000820
lbl_fn_80247FB0_000007B4:
    lwz r0, 0x5c0(r31)
    li r30, 0x0
    stw r30, 0x14b0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    stw r30, 0x14b4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    li r4, 0x3
    stw r4, 0x58c(r31)
    lfs f0, lbl_808831D8
    li r0, 0x4
    stw r3, 0x590(r31)
    addi r4, r1, 0x98
    stw r0, 0x98(r1)
    stw r30, 0x9c(r1)
    stw r30, 0xa0(r1)
    stw r30, 0xa4(r1)
    stw r30, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f0, 0xb4(r1)
    lwz r3, 0x14c8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80247FB0_00000820:
    lwz r0, 0x1b4(r1)
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    psq_l f29, 0x188(r1), 0, 0
    lfd f29, 0x180(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_8024845C(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    lfs f3, lbl_808831D8
    li r4, 0x79
    stw r0, 0x154(r1)
    lfs f0, lbl_808831FC
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    mr r29, r3
    stfs f3, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    lwz r5, 0x14c8(r3)
    addi r3, r1, 0xf0
    lfs f1, 0x7c(r5)
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xf0
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0x14c8(r29)
    addi r3, r1, 0x68
    lfs f3, 0x74(r1)
    lfs f0, 0x6c(r4)
    lfs f5, 0x78(r1)
    fadds f6, f3, f0
    lfs f4, 0x7c(r1)
    lfs f0, lbl_808831D8
    stfs f6, 0x74(r1)
    lfs f3, 0x70(r4)
    fadds f3, f5, f3
    stfs f3, 0x78(r1)
    lfs f3, 0x74(r4)
    fadds f5, f4, f3
    stfs f5, 0x7c(r1)
    lfs f4, 0x530(r29)
    lfs f3, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f3, f6, f3
    stfs f0, 0x6c(r1)
    stfs f3, 0x68(r1)
    stfs f4, 0x70(r1)
    bl fn_805F9940
    lfs f0, lbl_80883200
    fcmpo cr0, f1, f0
    ble lbl_fn_8024845C_00000B80
    lfs f0, lbl_80883204
    fcmpo cr0, f1, f0
    ble lbl_fn_8024845C_00000960
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x68(r1)
    lfs f5, lbl_80883204
    lfs f3, 0x6c(r1)
    lfs f0, 0x70(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
lbl_fn_8024845C_00000960:
    lfs f3, 0x528(r29)
    addi r31, r1, 0x50
    lfs f0, 0x68(r1)
    addi r5, r1, 0x68
    lfs f4, 0x52c(r29)
    mr r3, r31
    fadds f0, f3, f0
    lfs f3, 0x530(r29)
    mr r4, r31
    stfs f0, 0x528(r29)
    lfs f0, 0x6c(r1)
    fadds f0, f4, f0
    stfs f0, 0x52c(r29)
    lfs f0, 0x70(r1)
    fadds f0, f3, f0
    stfs f0, 0x530(r29)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808831F0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8024845C_00000A00
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808831D8
    fcmpo cr0, f3, f0
    ble lbl_fn_8024845C_000009F4
    lfs f0, lbl_808831F4
    b lbl_fn_8024845C_000009F8
lbl_fn_8024845C_000009F4:
    lfs f0, lbl_808831F8
lbl_fn_8024845C_000009F8:
    stfs f0, 0x48(r1)
    b lbl_fn_8024845C_00000A14
lbl_fn_8024845C_00000A00:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8024845C_00000A14:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808831D8
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_808831EC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808831F0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8024845C_00000B30
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808831D8
    fcmpo cr0, f3, f0
    ble lbl_fn_8024845C_00000B20
    lfs f0, lbl_808831F4
    b lbl_fn_8024845C_00000B24
lbl_fn_8024845C_00000B20:
    lfs f0, lbl_808831F8
lbl_fn_8024845C_00000B24:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8024845C_00000B44
lbl_fn_8024845C_00000B30:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8024845C_00000B44:
    addi r3, r1, 0x44
    lfs f4, lbl_808831D8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    fmr f2, f4
    lfs f0, lbl_80883208
    lfs f3, 0x538(r29)
    stfs f2, 0x64(r1)
    frsp f2, f2
    fadds f0, f3, f0
    stfs f4, 0x4c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x53c(r29)
    stfs f0, 0x538(r29)
    b lbl_fn_8024845C_00000C20
lbl_fn_8024845C_00000B80:
    lwz r3, 0xf54(r29)
    addi r3, r3, 0x7d4
    bl fn_8012D8B8
    lwz r3, 0xf54(r29)
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x2
    beq lbl_fn_8024845C_00000BBC
    cmpwi r3, 0x6
    beq lbl_fn_8024845C_00000BD0
    cmpwi r3, 0x4
    beq lbl_fn_8024845C_00000BE4
    cmpwi r3, 0xb
    beq lbl_fn_8024845C_00000BF8
    b lbl_fn_8024845C_00000C08
lbl_fn_8024845C_00000BBC:
    lwz r3, lbl_8087F430
    li r4, 0x1e
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8024845C_00000C08
lbl_fn_8024845C_00000BD0:
    lwz r3, lbl_8087F430
    li r4, 0x1f
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8024845C_00000C08
lbl_fn_8024845C_00000BE4:
    lwz r3, lbl_8087F430
    li r4, 0x20
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8024845C_00000C08
lbl_fn_8024845C_00000BF8:
    lwz r3, lbl_8087F430
    li r4, 0x21
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8024845C_00000C08:
    lwz r4, 0xf54(r29)
    mr r3, r29
    bl fn_80247C68
    mr r3, r29
    li r4, 0x0
    bl fn_80248A4C
lbl_fn_8024845C_00000C20:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80248854(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    beq lbl_fn_80248854_00000E2C
    li r30, 0x0
    stw r30, 0x14b0(r3)
    stw r30, 0x14b4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r27)
    li r31, 0x1
    lwz r4, 0x5c0(r27)
    rlwinm r0, r0, 0, 17, 15
    stw r3, 0x590(r27)
    ori r4, r4, 0x1
    addi r3, r27, 0x7d4
    rlwinm r0, r0, 0, 7, 5
    stw r31, 0x58c(r27)
    stw r28, 0x14b8(r27)
    stw r29, 0x14c8(r27)
    stw r4, 0x5c0(r27)
    stw r0, 0x12a4(r27)
    bl fn_8012D8B8
    lfs f3, lbl_808831D8
    addi r3, r1, 0x70
    lfs f0, lbl_8088320C
    li r4, 0x79
    stfs f3, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x44
    addi r3, r1, 0x70
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x53c(r28)
    addi r4, r1, 0x38
    psq_l f1, 0x534(r28), 0, 0
    mr r3, r27
    psq_st f1, 0x534(r27), 0, 0
    lfs f0, lbl_80883208
    lfs f3, 0x538(r27)
    stfs f2, 0x53c(r27)
    fadds f0, f3, f0
    stfs f0, 0x538(r27)
    lfs f3, 0x530(r28)
    lfs f0, 0x4c(r1)
    lfs f5, 0x52c(r28)
    fadds f2, f3, f0
    lfs f4, 0x48(r1)
    lfs f3, 0x528(r28)
    lfs f0, 0x44(r1)
    fadds f4, f5, f4
    stfs f2, 0x40(r1)
    fadds f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r27), 0, 0
    stfs f2, 0x530(r27)
    bl fn_80145334
    lfs f0, lbl_808831D8
    li r0, 0x3
    stw r0, 0x50(r1)
    addi r4, r1, 0x50
    stw r30, 0x54(r1)
    stw r30, 0x58(r1)
    stw r30, 0x5c(r1)
    stw r30, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    lwz r3, 0x14c8(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lfs f1, lbl_808831EC
    addi r3, r27, 0xb0
    stw r31, 0x3fc(r27)
    li r4, 0x0
    lfs f2, lbl_80883210
    li r5, 0x2b
    stfs f1, 0x2fc(r27)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_808831EC
    li r0, -0x1
    stfs f1, 0x2e8(r27)
    addi r4, r27, 0x14d0
    lfs f0, lbl_808831D8
    addi r5, r27, 0xb0
    stfs f0, 0x1c(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x20(r1)
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
lbl_fn_80248854_00000E2C:
    addi r11, r1, 0xc0
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80248A4C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    li r31, 0x0
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    mr r28, r4
    stw r31, 0x14b0(r3)
    stw r31, 0x14b4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x4
    mr r3, r30
    stw r0, 0x58c(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    cmpwi r28, 0x0
    li r0, 0x1e
    stw r31, 0xfc0(r30)
    stw r0, 0x1434(r30)
    beq lbl_fn_80248A4C_00000F08
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80248A4C_00000F08
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_80248A4C_00000F08
    lwz r3, lbl_8087F048
    mr r5, r30
    li r4, 0x6
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_80248A4C_00000F08:
    lwz r0, 0xf54(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80248A4C_000011D8
    mr r3, r30
    bl fn_80175A38
    lwz r0, 0x14b8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80248A4C_000011D8
    lwz r3, 0x14c0(r30)
    lwz r4, 0x14c4(r30)
    cmplw r3, r4
    bge lbl_fn_80248A4C_00000F58
    addi r3, r3, 0x1
    stw r3, 0x14c0(r30)
    subi r0, r3, 0x1
    lwz r3, 0x14bc(r30)
    slwi r0, r0, 2
    lwz r4, 0x14b8(r30)
    stwx r4, r3, r0
    b lbl_fn_80248A4C_000011D8
lbl_fn_80248A4C_00000F58:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80248A4C_00000F90
    lis r4, lbl_80743498@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80743498@l
    addi r3, r3, __files@l
    addi r4, r4, 0x15
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80248A4C_00000F90:
    li r5, 0x0
    addi r4, r30, 0x14c4
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x14c0(r30)
    lwz r31, 0x14c4(r30)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_80248A4C_00000FF8
    lis r4, lbl_80743498@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80743498@l
    addi r3, r3, __files@l
    addi r4, r4, 0x15
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80248A4C_00000FF8:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80248A4C_00001048
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80248A4C_0000103C
    addi r3, r1, 0x8
lbl_fn_80248A4C_0000103C:
    lwz r0, 0x0(r3)
    add r29, r31, r0
    b lbl_fn_80248A4C_0000108C
lbl_fn_80248A4C_00001048:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80248A4C_00001084
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80248A4C_00001078
    addi r3, r1, 0x8
lbl_fn_80248A4C_00001078:
    lwz r0, 0x0(r3)
    add r29, r31, r0
    b lbl_fn_80248A4C_0000108C
lbl_fn_80248A4C_00001084:
    lis r3, 0x4000
    subi r29, r3, 0x1
lbl_fn_80248A4C_0000108C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r29, r0
    ble lbl_fn_80248A4C_000010C0
    lis r4, lbl_80743498@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80743498@l
    addi r3, r3, __files@l
    addi r4, r4, 0x15
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80248A4C_000010C0:
    slwi r3, r29, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80248A4C_000010F4
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80248A4C_000010F4:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r3, r0, 2
    stw r29, 0x1c(r1)
    lwz r0, 0x14c0(r30)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r31, r0
    lwz r4, 0x14b8(r30)
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x14c0(r30)
    lwz r29, 0x14bc(r30)
    slwi r4, r4, 2
    add r5, r29, r4
    subf r5, r29, r5
    mr r4, r29
    srawi r5, r5, 2
    addze r31, r5
    subf r0, r31, r0
    stw r0, 0x24(r1)
    slwi r28, r31, 2
    slwi r0, r0, 2
    mr r5, r28
    add r3, r3, r0
    bl memcpy
    mr r3, r29
    mr r5, r28
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r31
    stw r0, 0x18(r1)
    stw r4, 0x14c0(r30)
    lwz r3, 0x14c4(r30)
    lwz r0, 0x1c(r1)
    stw r0, 0x14c4(r30)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x14bc(r30)
    stw r0, 0x14bc(r30)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x14c0(r30)
    stw r4, 0x18(r1)
    beq lbl_fn_80248A4C_000011D8
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80248A4C_000011D8
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80248A4C_000011D8:
    lfs f0, lbl_808831EC
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808831D8
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2e
    lfs f2, lbl_80883210
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808831EC
    li r0, 0x2
    stfs f0, 0x2e8(r30)
    li r31, 0x0
    lfs f0, lbl_808831D8
    addi r4, r1, 0x28
    stw r0, 0x28(r1)
    stw r31, 0x2c(r1)
    stw r31, 0x30(r1)
    stw r31, 0x34(r1)
    stw r31, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r3, 0x14c8(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    stw r31, 0x14b8(r30)
    stw r31, 0x14c8(r30)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80248E88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x20(r5)
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8035B694
    lis r3, lbl_80783F78@ha
    addi r31, r30, 0x14b0
    addi r3, r3, lbl_80783F78@l
    stw r3, 0x0(r30)
    mr r3, r31
    li r4, 0x0
    bl fn_80056DB8
    lwz r0, 0x54c(r30)
    li r4, 0x0
    lis r3, lbl_80777668@ha
    stw r4, 0x14fc(r30)
    addi r3, r3, lbl_80777668@l
    oris r0, r0, 0x200
    stw r3, 0x0(r31)
    mr r3, r30
    stw r4, 0x1500(r30)
    stw r4, 0x1504(r30)
    stw r0, 0x54c(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80248F08(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    bl fn_800E2DD4
    cmpwi r3, 0x0
    beq lbl_fn_80248F08_000013E4
    lwz r0, 0x7ec(r31)
    lis r4, lbl_807434DC@ha
    addi r4, r4, lbl_807434DC@l
    addi r3, r31, 0xb0
    ori r0, r0, 0x100
    li r5, 0x0
    oris r0, r0, 0x1
    ori r0, r0, 0x50
    stw r0, 0x7ec(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80248F08_00001358
    li r3, 0x0
    b lbl_fn_80248F08_00001364
lbl_fn_80248F08_00001358:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_80248F08_00001364:
    cmpwi r3, 0x0
    beq lbl_fn_80248F08_0000138C
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x8
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_fn_80248F08_00001394
lbl_fn_80248F08_0000138C:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
lbl_fn_80248F08_00001394:
    lwz r0, 0x14b8(r31)
    addi r5, r1, 0x14
    psq_l f1, 0x0(r4), 0, 0
    addi r6, r31, 0x14ec
    lfs f2, 0x8(r4)
    clrrwi r3, r0, 1
    lwz r0, 0x54c(r31)
    ori r4, r3, 0x2
    lfs f0, lbl_80883218
    li r3, 0x1
    oris r0, r0, 0x100
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x14f4(r31)
    stfs f0, 0x14f8(r31)
    stw r4, 0x14b8(r31)
    stw r31, 0x14bc(r31)
    stw r0, 0x54c(r31)
    b lbl_fn_80248F08_000013E8
lbl_fn_80248F08_000013E4:
    li r3, 0x0
lbl_fn_80248F08_000013E8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80249004(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x7e0(r3)
    lwz r4, 0x14b8(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    clrrwi r0, r4, 1
    stw r0, 0x14b8(r3)
    beq lbl_fn_80249004_00001440
    ori r0, r0, 0x1
    stw r0, 0x14b8(r3)
lbl_fn_80249004_00001440:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80249004_00001458
    cmpwi r0, 0x7
    beq lbl_fn_80249004_00001474
    b lbl_fn_80249004_00001490
lbl_fn_80249004_00001458:
    mr r3, r30
    bl fn_80249394
    mr r3, r30
    bl fn_80145334
    mr r3, r30
    bl fn_8014C540
    b lbl_fn_80249004_000015FC
lbl_fn_80249004_00001474:
    mr r3, r30
    bl fn_80249588
    mr r3, r30
    bl fn_80145334
    mr r3, r30
    bl fn_8014C540
    b lbl_fn_80249004_000015FC
lbl_fn_80249004_00001490:
    lwz r0, 0xd18(r3)
    li r31, 0x1
    cmpwi r0, 0x1
    bne lbl_fn_80249004_00001598
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80249004_00001598
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80249004_00001598
    lfs f1, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x14
    lfs f1, 0x528(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    lfs f0, lbl_8088321C
    fcmpo cr0, f1, f0
    ble lbl_fn_80249004_00001598
    mr r3, r30
    bl fn_80249224
    cmpwi r3, 0x0
    stw r3, 0x14fc(r30)
    beq lbl_fn_80249004_00001598
    lfs f1, 0x530(r3)
    lfs f0, 0x530(r30)
    lfs f3, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x528(r3)
    addi r3, r1, 0x8
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fmr f31, f1
    addi r3, r1, 0x14
    bl fn_805F9920
    fcmpo cr0, f31, f1
    bge lbl_fn_80249004_00001598
    li r0, 0x6
    stw r0, 0x58c(r30)
    lwz r4, 0x14fc(r30)
    mr r3, r30
    lfs f1, lbl_80883220
    li r5, 0x0
    bl fn_80170A20
    li r0, 0x0
    stw r0, 0x1504(r30)
    mr r3, r30
    stw r0, 0x1500(r30)
    bl fn_80145334
    mr r3, r30
    bl fn_8014C540
    li r31, 0x0
lbl_fn_80249004_00001598:
    cmpwi r31, 0x0
    beq lbl_fn_80249004_000015FC
    lwz r0, 0x14fc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80249004_000015F4
    lis r5, lbl_807434DC@ha
    li r3, 0x20
    addi r5, r5, lbl_807434DC@l
    li r4, 0x0
    addi r5, r5, 0x5
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80249004_000015E4
    lwz r4, 0x14fc(r30)
    bl fn_8019AFE8
    mr r4, r3
lbl_fn_80249004_000015E4:
    lwz r3, 0x14fc(r30)
    bl fn_80178208
    li r0, 0x0
    stw r0, 0x14fc(r30)
lbl_fn_80249004_000015F4:
    mr r3, r30
    bl fn_800E2FE0
lbl_fn_80249004_000015FC:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80249224(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    lfs f31, lbl_80883224
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r4, lbl_8087F408
    lwz r30, 0x48(r4)
    b lbl_fn_80249224_0000175C
lbl_fn_80249224_00001654:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80249224_00001680
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80249224_00001680
    li r5, 0x1
lbl_fn_80249224_00001680:
    cmpwi r5, 0x0
    beq lbl_fn_80249224_0000169C
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80249224_0000169C
    li r3, 0x1
lbl_fn_80249224_0000169C:
    cmpwi r3, 0x0
    beq lbl_fn_80249224_000016D0
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80249224_000016C4
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_80249224_000016C4
    li r3, 0x1
lbl_fn_80249224_000016C4:
    cmpwi r3, 0x0
    bne lbl_fn_80249224_000016D0
    li r4, 0x1
lbl_fn_80249224_000016D0:
    cmpwi r4, 0x0
    beq lbl_fn_80249224_00001758
    cmplw r30, r29
    beq lbl_fn_80249224_00001758
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_80249224_00001758
    lwz r0, 0x1500(r29)
    cmplw r0, r30
    beq lbl_fn_80249224_00001758
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x2
    bne lbl_fn_80249224_00001758
    lfs f1, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x530(r29)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r29)
    lfs f1, 0x528(r30)
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    cmpwi r31, 0x0
    beq lbl_fn_80249224_00001750
    fcmpo cr0, f1, f31
    bge lbl_fn_80249224_00001758
lbl_fn_80249224_00001750:
    mr r31, r30
    fmr f31, f1
lbl_fn_80249224_00001758:
    lwz r30, 0x14ac(r30)
lbl_fn_80249224_0000175C:
    cmpwi r30, 0x0
    bne lbl_fn_80249224_00001654
    psq_l f31, 0x38(r1), 0, 0
    mr r3, r31
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80249394(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_80249394_000018E8
    lwz r7, 0x14fc(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80249394_000018E8
    lwz r8, 0x38(r7)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r8, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80249394_000017E4
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_80249394_000017E4
    li r6, 0x1
lbl_fn_80249394_000017E4:
    cmpwi r6, 0x0
    beq lbl_fn_80249394_00001800
    lwz r0, 0x7e0(r7)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80249394_00001800
    li r4, 0x1
lbl_fn_80249394_00001800:
    cmpwi r4, 0x0
    beq lbl_fn_80249394_00001834
    lwz r0, 0x55c(r7)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80249394_00001828
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_80249394_00001828
    li r4, 0x1
lbl_fn_80249394_00001828:
    cmpwi r4, 0x0
    bne lbl_fn_80249394_00001834
    li r5, 0x1
lbl_fn_80249394_00001834:
    cmpwi r5, 0x0
    beq lbl_fn_80249394_000018E8
    lwz r0, 0x1504(r3)
    cmpwi r0, 0x12c
    bge lbl_fn_80249394_000018E8
    lfs f1, 0x530(r7)
    lfs f0, 0x530(r3)
    lfs f3, 0x52c(r7)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x528(r7)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80883228
    fcmpo cr0, f1, f0
    bge lbl_fn_80249394_000018D0
    li r0, 0x7
    stw r0, 0x58c(r31)
    lfs f1, lbl_8088322C
    addi r3, r31, 0xb0
    lfs f2, lbl_80883230
    li r4, 0x0
    li r5, 0x6c
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80883234
    li r0, 0x1
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    b lbl_fn_80249394_0000196C
lbl_fn_80249394_000018D0:
    lwz r4, 0x1504(r31)
    mr r3, r31
    addi r0, r4, 0x1
    stw r0, 0x1504(r31)
    bl fn_80139560
    b lbl_fn_80249394_0000196C
lbl_fn_80249394_000018E8:
    lwz r0, 0x1504(r3)
    cmpwi r0, 0x12c
    blt lbl_fn_80249394_000018FC
    lwz r0, 0x14fc(r3)
    stw r0, 0x1500(r3)
lbl_fn_80249394_000018FC:
    li r0, 0x0
    stw r0, 0x58c(r3)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80249394_0000196C
    lis r5, lbl_807434DC@ha
    li r3, 0x20
    addi r5, r5, lbl_807434DC@l
    li r4, 0x0
    addi r5, r5, 0x5
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80249394_0000195C
    lwz r4, 0x14fc(r31)
    bl fn_8019AFE8
    mr r4, r3
lbl_fn_80249394_0000195C:
    lwz r3, 0x14fc(r31)
    bl fn_80178208
    li r0, 0x0
    stw r0, 0x14fc(r31)
lbl_fn_80249394_0000196C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
