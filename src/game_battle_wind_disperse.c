#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80084320(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80097E80(void);
extern void fn_800C16B4(void);
extern void fn_800C16C0(void);
extern void fn_800C18BC(void);
extern void fn_800D5808(void);
extern void fn_8011FE3C(void);
extern void fn_80144710(void);
extern void fn_8015495C(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_80170F20(void);
extern void fn_803C1560(void);
extern void fn_803CD958(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_8041D180(void);
extern void fn_8041D198(void);
extern void fn_8041E480(void);
extern void fn_8041E7E4(void);
extern void fn_80491528(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA8(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 jumptable_8078DF88[];
extern u8 lbl_80753200[];
extern u8 lbl_80753214[];
extern u8 lbl_80753218[];
extern u8 lbl_80753230[];
extern u8 lbl_8078DFB0[];
extern u8 lbl_8078E048[];
extern u8 lbl_807C88F0[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4C0;
extern u32 lbl_8087F558;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886570;
extern u32 lbl_80886574;
extern u32 lbl_80886578;
extern u32 lbl_8088657C;
extern u32 lbl_80886580;
extern u32 lbl_80886584;
extern u32 lbl_80886588;
extern u32 lbl_8088658C;
extern u32 lbl_80886590;
extern u32 lbl_80886594;
extern u32 lbl_80886598;
extern u32 lbl_8088659C;
extern u32 lbl_808865A0;
extern u32 lbl_808865A4;
extern u32 lbl_808865A8;
extern u32 lbl_808865AC;
extern u32 lbl_808865B0;
extern u32 lbl_808865B4;
extern u32 lbl_808865B8;
extern u32 lbl_808865BC;

/* Function declarations */
void fn_8041EA1C(void);
void fn_8041EADC(void);
void fn_8041EB80(void);
void fn_8041EBF4(void);
void fn_8041EC70(void);
void fn_8041ECBC(void);
void fn_8041EE28(void);
void fn_8041EF90(void);
void fn_8041F3C0(void);
void fn_8041F408(void);
void fn_8041F434(void);
void fn_8041F6A4(void);
void fn_8041FE80(void);
void fn_8041FED8(void);
void fn_8041FF08(void);
void fn_8042000C(void);
void fn_804200D8(void);
void fn_80420120(void);
void fn_804202E8(void);

asm void fn_8041EA1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_8041EA1C_00000024
    li r3, 0x0
    b lbl_fn_8041EA1C_000000AC
lbl_fn_8041EA1C_00000024:
    lwz r4, 0x0(r4)
    stw r4, 0x54(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    ble lbl_fn_8041EA1C_0000004C
    cmpwi r4, 0x4
    beq lbl_fn_8041EA1C_0000006C
    cmpwi r4, 0x5
    beq lbl_fn_8041EA1C_0000008C
    b lbl_fn_8041EA1C_000000A8
lbl_fn_8041EA1C_0000004C:
    lfs f0, lbl_80886570
    stfs f0, 0x108(r3)
    lfs f1, lbl_80886574
    bl fn_8041E480
    mr r3, r31
    li r4, 0x0
    bl fn_8041E7E4
    b lbl_fn_8041EA1C_000000A8
lbl_fn_8041EA1C_0000006C:
    lfs f0, 0x104(r3)
    stfs f0, 0x108(r3)
    lfs f1, lbl_80886570
    bl fn_8041E480
    mr r3, r31
    li r4, 0x1
    bl fn_8041E7E4
    b lbl_fn_8041EA1C_000000A8
lbl_fn_8041EA1C_0000008C:
    lfs f0, 0x104(r3)
    stfs f0, 0x108(r3)
    lfs f1, lbl_80886570
    bl fn_8041E480
    mr r3, r31
    li r4, 0x0
    bl fn_8041E7E4
lbl_fn_8041EA1C_000000A8:
    lwz r3, 0x54(r31)
lbl_fn_8041EA1C_000000AC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041EADC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    subi r0, r4, 0x2
    cmplwi r0, 0x2
    stw r31, 0x2c(r1)
    mr r31, r3
    ble lbl_fn_8041EADC_000000F8
    cmpwi r4, 0x1
    beq lbl_fn_8041EADC_000000F0
    cmpwi r4, 0x5
    bne lbl_fn_8041EADC_000000FC
lbl_fn_8041EADC_000000F0:
    li r4, 0x1
    b lbl_fn_8041EADC_000000FC
lbl_fn_8041EADC_000000F8:
    li r4, 0x4
lbl_fn_8041EADC_000000FC:
    lfs f0, lbl_80886570
    li r0, 0x0
    stw r4, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8041EADC_00000150
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_8041EADC_00000150:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8041EB80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8041EB80_000001BC
    lis r5, lbl_80753214@ha
    li r3, 0x150
    addi r5, r5, lbl_80753214@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8041EB80_000001C0
    mr r4, r30
    mr r5, r31
    bl fn_8041EBF4
    b lbl_fn_8041EB80_000001C0
lbl_fn_8041EB80_000001BC:
    li r3, 0x0
lbl_fn_8041EB80_000001C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041EBF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r31)
    bl fn_803EC568
    lis r3, lbl_8078DFB0@ha
    li r4, 0x0
    addi r3, r3, lbl_8078DFB0@l
    li r0, 0x1
    stw r3, 0x0(r30)
    mr r3, r30
    stw r31, 0xf4(r30)
    stw r4, 0xfc(r30)
    stw r4, 0x11c(r30)
    stw r4, 0x120(r30)
    stw r4, 0x124(r30)
    stw r4, 0x128(r30)
    stw r4, 0x148(r30)
    stw r4, 0x54(r30)
    stw r0, 0x68(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041EC70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8041EC70_00000288
    li r0, 0x2
    stw r0, 0x54(r31)
    li r3, 0x1
    stw r0, 0xf8(r31)
    b lbl_fn_8041EC70_0000028C
lbl_fn_8041EC70_00000288:
    li r3, 0x0
lbl_fn_8041EC70_0000028C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041ECBC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f4, lbl_80886578
    li r4, 0x79
    stw r0, 0x64(r1)
    lfs f3, lbl_8088657C
    stw r31, 0x5c(r1)
    lfs f0, lbl_80886580
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r5, 0xf4(r3)
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f1, 0x14(r5)
    stfs f1, 0x7c(r3)
    stfs f4, 0x78(r3)
    stfs f4, 0x80(r3)
    addi r3, r1, 0x20
    stfs f3, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x70(r30)
    addi r4, r1, 0x8
    lfs f4, 0x18(r1)
    lis r3, lbl_80753200@ha
    lfs f3, 0x6c(r30)
    lfs f0, 0x14(r1)
    fadds f4, f5, f4
    lwz r5, lbl_8087F430
    fadds f0, f3, f0
    stfs f4, 0xc(r1)
    lwz r31, 0x10d8(r5)
    stfs f0, 0x8(r1)
    lfs f0, 0x1c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x104(r30), 0, 0
    psq_l f1, 0x78(r30), 0, 0
    lfs f4, 0x74(r30)
    psq_st f1, 0x110(r30), 0, 0
    fadds f2, f4, f0
    lfs f3, lbl_80886584
    lfs f0, 0x114(r30)
    stfs f2, 0x10(r1)
    fadds f1, f3, f0
    stfs f2, 0x10c(r30)
    lfs f2, 0x80(r30)
    stfs f2, 0x118(r30)
    lfd f2, lbl_80753200@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886588
    fcmpo cr0, f3, f0
    ble lbl_fn_8041ECBC_00000398
    lfs f0, lbl_8088658C
    fsubs f3, f3, f0
lbl_fn_8041ECBC_00000398:
    lfs f0, lbl_80886590
    fcmpo cr0, f3, f0
    bge lbl_fn_8041ECBC_000003AC
    lfs f0, lbl_8088658C
    fadds f3, f3, f0
lbl_fn_8041ECBC_000003AC:
    stfs f3, 0x114(r30)
    mr r3, r31
    lfs f1, lbl_80886594
    addi r4, r30, 0x104
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    li r4, 0x0
    stw r3, 0x100(r30)
    li r0, 0x2
    mr r3, r30
    stw r4, 0x120(r30)
    stw r4, 0x124(r30)
    stw r4, 0x128(r30)
    stw r0, 0x54(r30)
    bl fn_8041EE28
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8041EE28(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r4, 0xf4(r31)
    lwz r3, lbl_8087F890
    lwz r4, 0x20(r4)
    bl fn_8011FE3C
    cmpwi r3, 0x0
    stw r3, 0x11c(r31)
    beq lbl_fn_8041EE28_00000470
    lwz r4, 0x38(r3)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_8041EE28_00000468
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8041EE28_00000468
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8041EE28_00000470
lbl_fn_8041EE28_00000468:
    li r0, 0x0
    stw r0, 0x11c(r31)
lbl_fn_8041EE28_00000470:
    lwz r3, 0x11c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8041EE28_00000560
    li r4, 0xa
    bl fn_8016E970
    lwz r5, 0x11c(r31)
    mr r3, r31
    li r4, 0x2
    lwz r0, 0x137c(r5)
    ori r0, r0, 0x1
    stw r0, 0x137c(r5)
    lwz r5, 0x11c(r31)
    lwz r0, 0x54c(r5)
    oris r0, r0, 0x100
    stw r0, 0x54c(r5)
    lwz r5, 0x11c(r31)
    lfs f2, 0x74(r31)
    psq_l f1, 0x6c(r31), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r5, 0x11c(r31)
    lfs f2, 0x80(r31)
    psq_l f1, 0x78(r31), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
    bl fn_8041F6A4
    lwz r3, 0x11c(r31)
    bl fn_80144710
    lwz r3, 0x11c(r31)
    li r4, 0x1
    lfs f0, lbl_80886598
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0xb4(r3)
    lwz r3, 0x11c(r31)
    stfs f0, 0x2ec(r3)
    lwz r3, 0x11c(r31)
    addi r3, r3, 0xb0
    bl fn_80097E80
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x11c(r31)
    addi r3, r3, 0xb0
    bl fn_8000D430
    addic. r3, r1, 0x8
    beq lbl_fn_8041EE28_00000560
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8041EE28_00000560
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8041EE28_00000558
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8041EE28_00000558:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8041EE28_00000560:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8041EF90(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r5, 0x11c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8041EF90_0000066C
    lwz r0, 0x38(r5)
    andis. r4, r0, 0xdead
    addis r0, r4, 0x2153
    cmplwi r0, 0x0
    bne lbl_fn_8041EF90_0000066C
    lwz r4, 0x120(r3)
    li r0, 0x0
    stw r0, 0x11c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8041EF90_00000988
    lwz r0, 0x38(r4)
    andis. r3, r0, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_8041EF90_00000988
    mr r3, r4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r3, 0x120(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lwz r3, 0x120(r31)
    li r0, 0x1
    lwz r4, 0x48(r3)
    cmpwi r4, 0x1
    beq lbl_fn_8041EF90_00000624
    cmpwi r4, 0x4
    beq lbl_fn_8041EF90_00000624
    li r0, 0x0
lbl_fn_8041EF90_00000624:
    cmpwi r0, 0x0
    beq lbl_fn_8041EF90_00000658
    lhz r0, 0xd38(r3)
    rlwinm r0, r0, 0, 17, 15
    sth r0, 0xd38(r3)
    lwz r3, 0x120(r31)
    lwz r0, 0x137c(r3)
    clrrwi r0, r0, 1
    stw r0, 0x137c(r3)
    lwz r3, 0x120(r31)
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x54c(r3)
lbl_fn_8041EF90_00000658:
    li r0, 0x0
    stw r0, 0x120(r31)
    stw r0, 0x124(r31)
    stw r0, 0x128(r31)
    b lbl_fn_8041EF90_00000988
lbl_fn_8041EF90_0000066C:
    cmpwi r5, 0x0
    bne lbl_fn_8041EF90_00000688
    mr r3, r31
    bl fn_8041EE28
    lwz r0, 0x11c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8041EF90_00000988
lbl_fn_8041EF90_00000688:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8041EF90_00000988
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x38
    lfs f0, 0x74(r31)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x70(r31)
    lfs f3, 0x10c(r4)
    lfs f0, 0x6c(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F9920
    lfs f0, lbl_8088659C
    fcmpo cr0, f1, f0
    ble lbl_fn_8041EF90_000006E8
    lwz r0, 0xf8(r31)
    cmpwi r0, 0x2
    beq lbl_fn_8041EF90_00000988
lbl_fn_8041EF90_000006E8:
    lwz r3, 0xf8(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_8041EF90_000008C0
    cmpwi r3, 0x2
    beq lbl_fn_8041EF90_0000071C
    cmpwi r3, 0x3
    beq lbl_fn_8041EF90_00000754
    cmpwi r3, 0x4
    beq lbl_fn_8041EF90_00000774
    cmpwi r3, 0x5
    beq lbl_fn_8041EF90_00000830
    b lbl_fn_8041EF90_00000988
lbl_fn_8041EF90_0000071C:
    lwz r0, 0x120(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8041EF90_00000738
    lwz r4, 0x124(r31)
    mr r3, r31
    bl fn_8041F434
    stw r3, 0x120(r31)
lbl_fn_8041EF90_00000738:
    lwz r0, 0x120(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8041EF90_00000988
    mr r3, r31
    li r4, 0x3
    bl fn_8041F6A4
    b lbl_fn_8041EF90_00000988
lbl_fn_8041EF90_00000754:
    lwz r3, 0x120(r31)
    lwz r0, 0x105c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8041EF90_00000988
    mr r3, r31
    li r4, 0x4
    bl fn_8041F6A4
    b lbl_fn_8041EF90_00000988
lbl_fn_8041EF90_00000774:
    lwz r6, 0x120(r31)
    addi r3, r1, 0x2c
    lfs f4, 0x130(r31)
    addi r5, r1, 0x20
    lfs f5, 0x52c(r6)
    li r4, 0x0
    lfs f3, 0x528(r6)
    fadds f5, f5, f4
    lfs f0, 0x12c(r31)
    lfs f4, 0x530(r6)
    fadds f3, f3, f0
    lfs f0, 0x134(r31)
    stfs f5, 0x30(r1)
    fadds f6, f4, f0
    stfs f3, 0x2c(r1)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f6
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lwz r3, 0x120(r31)
    lfs f4, 0x13c(r31)
    lfs f5, 0x538(r3)
    lfs f3, 0x534(r3)
    fadds f5, f5, f4
    lfs f0, 0x138(r31)
    lfs f4, 0x53c(r3)
    fadds f3, f3, f0
    lfs f0, 0x140(r31)
    stfs f5, 0x24(r1)
    fadds f2, f4, f0
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x120(r31)
    stfs f6, 0x34(r1)
    addi r3, r3, 0xb0
    stfs f2, 0x28(r1)
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8041EF90_00000988
    mr r3, r31
    li r4, 0x5
    bl fn_8041F6A4
    b lbl_fn_8041EF90_00000988
lbl_fn_8041EF90_00000830:
    lwz r3, 0x120(r31)
    li r0, 0x1
    lwz r3, 0x48(r3)
    cmpwi r3, 0x1
    beq lbl_fn_8041EF90_00000850
    cmpwi r3, 0x4
    beq lbl_fn_8041EF90_00000850
    li r0, 0x0
lbl_fn_8041EF90_00000850:
    cmpwi r0, 0x0
    beq lbl_fn_8041EF90_00000988
    lwz r3, 0x11c(r31)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8041EF90_00000988
    bl fn_80680CF8
    lis r4, 0x51ec
    lwz r5, 0xf4(r31)
    subi r0, r4, 0x7ae1
    mulhw r6, r0, r3
    lwz r0, 0x24(r5)
    li r4, 0x7
    srawi r5, r6, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x64
    subf r5, r5, r3
    mr r3, r31
    cmpw r5, r0
    ble lbl_fn_8041EF90_000008B8
    li r4, 0x6
lbl_fn_8041EF90_000008B8:
    bl fn_8041F6A4
    b lbl_fn_8041EF90_00000988
lbl_fn_8041EF90_000008C0:
    lwz r6, 0x120(r31)
    addi r3, r1, 0x14
    lfs f4, 0x130(r31)
    addi r5, r1, 0x8
    lfs f5, 0x52c(r6)
    li r4, 0x0
    lfs f3, 0x528(r6)
    fadds f5, f5, f4
    lfs f0, 0x12c(r31)
    lfs f4, 0x530(r6)
    fadds f3, f3, f0
    lfs f0, 0x134(r31)
    stfs f5, 0x18(r1)
    fadds f6, f4, f0
    stfs f3, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f6
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lwz r3, 0x120(r31)
    lfs f4, 0x13c(r31)
    lfs f5, 0x538(r3)
    lfs f3, 0x534(r3)
    fadds f5, f5, f4
    lfs f0, 0x138(r31)
    lfs f4, 0x53c(r3)
    fadds f3, f3, f0
    lfs f0, 0x140(r31)
    stfs f5, 0xc(r1)
    fadds f2, f4, f0
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x120(r31)
    stfs f6, 0x1c(r1)
    addi r3, r3, 0xb0
    stfs f2, 0x10(r1)
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8041EF90_0000097C
    mr r3, r31
    li r4, 0x8
    bl fn_8041F6A4
    b lbl_fn_8041EF90_00000988
lbl_fn_8041EF90_0000097C:
    lwz r3, 0xfc(r31)
    subi r0, r3, 0x1
    stw r0, 0xfc(r31)
lbl_fn_8041EF90_00000988:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8041F3C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_8041F3C0_000009C8
    li r3, 0x0
    b lbl_fn_8041F3C0_000009D8
lbl_fn_8041F3C0_000009C8:
    lwz r4, 0x0(r4)
    stw r4, 0x54(r3)
    bl fn_8041F6A4
    lwz r3, 0x54(r31)
lbl_fn_8041F3C0_000009D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041F408(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x1
    beq lbl_fn_8041F408_00000A10
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8041F408_00000A10
    li r4, 0x1
lbl_fn_8041F408_00000A10:
    mr r3, r4
    blr
}

asm void fn_8041F434(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    lfs f31, lbl_808865A0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    lfs f30, lbl_80886578
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r5, lbl_8087F890
    lwz r30, 0x48(r5)
    b lbl_fn_8041F434_00000C4C
lbl_fn_8041F434_00000A64:
    cmplw r30, r29
    beq lbl_fn_8041F434_00000C48
    cmpwi r29, 0x0
    beq lbl_fn_8041F434_00000A84
    lwz r3, 0x128(r28)
    lwz r0, 0x50(r30)
    cmpw r3, r0
    beq lbl_fn_8041F434_00000C48
lbl_fn_8041F434_00000A84:
    lhz r0, 0xd38(r30)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_8041F434_00000C48
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8041F434_00000C48
    lwz r4, 0x38(r30)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8041F434_00000AC0
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_8041F434_00000AC0
    li r3, 0x1
lbl_fn_8041F434_00000AC0:
    cmpwi r3, 0x0
    beq lbl_fn_8041F434_00000C48
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_8041F434_00000C48
    lwz r3, 0xf4(r28)
    li r4, 0x0
    lwz r0, 0x50(r30)
    li r5, 0x4
    lwz r3, 0x30(r3)
    cmpw r3, r0
    bne lbl_fn_8041F434_00000AFC
    li r4, 0x1
    b lbl_fn_8041F434_00000BB8
lbl_fn_8041F434_00000AFC:
    cmpwi r3, 0x0
    bne lbl_fn_8041F434_00000B14
    cmplwi r5, 0x4
    bne lbl_fn_8041F434_00000B14
    li r4, 0x1
    b lbl_fn_8041F434_00000BB8
lbl_fn_8041F434_00000B14:
    lwz r3, 0xf4(r28)
    li r5, 0x5
    lwz r0, 0x50(r30)
    lwz r3, 0x34(r3)
    cmpw r3, r0
    bne lbl_fn_8041F434_00000B34
    li r4, 0x1
    b lbl_fn_8041F434_00000BB8
lbl_fn_8041F434_00000B34:
    cmpwi r3, 0x0
    bne lbl_fn_8041F434_00000B4C
    cmplwi r5, 0x4
    bne lbl_fn_8041F434_00000B4C
    li r4, 0x1
    b lbl_fn_8041F434_00000BB8
lbl_fn_8041F434_00000B4C:
    lwz r3, 0xf4(r28)
    li r5, 0x6
    lwz r0, 0x50(r30)
    lwz r3, 0x38(r3)
    cmpw r3, r0
    bne lbl_fn_8041F434_00000B6C
    li r4, 0x1
    b lbl_fn_8041F434_00000BB8
lbl_fn_8041F434_00000B6C:
    cmpwi r3, 0x0
    bne lbl_fn_8041F434_00000B84
    cmplwi r5, 0x4
    bne lbl_fn_8041F434_00000B84
    li r4, 0x1
    b lbl_fn_8041F434_00000BB8
lbl_fn_8041F434_00000B84:
    lwz r3, 0xf4(r28)
    li r5, 0x7
    lwz r0, 0x50(r30)
    lwz r3, 0x3c(r3)
    cmpw r3, r0
    bne lbl_fn_8041F434_00000BA4
    li r4, 0x1
    b lbl_fn_8041F434_00000BB8
lbl_fn_8041F434_00000BA4:
    cmpwi r3, 0x0
    bne lbl_fn_8041F434_00000BB8
    cmplwi r5, 0x4
    bne lbl_fn_8041F434_00000BB8
    li r4, 0x1
lbl_fn_8041F434_00000BB8:
    cmpwi r4, 0x0
    beq lbl_fn_8041F434_00000C48
    lwz r3, 0xc64(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8041F434_00000C48
    lwz r4, lbl_8087F430
    subi r0, r3, 0x1
    lwz r3, 0x100(r28)
    slwi r0, r0, 3
    lwz r5, 0x10d8(r4)
    subi r4, r3, 0x1
    lwz r3, 0xa4(r5)
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r0, r3, 16
    ble lbl_fn_8041F434_00000C48
    lfs f1, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x74(r28)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x70(r28)
    lfs f1, 0x528(r30)
    lfs f0, 0x6c(r28)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_8041F434_00000C48
    fcmpo cr0, f1, f30
    ble lbl_fn_8041F434_00000C48
    fmr f30, f1
    mr r31, r30
lbl_fn_8041F434_00000C48:
    lwz r30, 0x1424(r30)
lbl_fn_8041F434_00000C4C:
    cmpwi r30, 0x0
    bne lbl_fn_8041F434_00000A64
    psq_l f31, 0x48(r1), 0, 0
    mr r3, r31
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8041F6A4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    cmplwi r4, 0x9
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r4, 0xf8(r3)
    bgt lbl_fn_8041F6A4_0000144C
    lis r5, jumptable_8078DF88@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_8078DF88@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lwz r3, 0x120(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8041F6A4_00000D54
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r3, 0x120(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lwz r4, 0x120(r31)
    li r0, 0x1
    lwz r3, 0x48(r4)
    cmpwi r3, 0x1
    beq lbl_fn_8041F6A4_00000D18
    cmpwi r3, 0x4
    beq lbl_fn_8041F6A4_00000D18
    li r0, 0x0
lbl_fn_8041F6A4_00000D18:
    cmpwi r0, 0x0
    beq lbl_fn_8041F6A4_00000D4C
    lhz r0, 0xd38(r4)
    rlwinm r0, r0, 0, 17, 15
    sth r0, 0xd38(r4)
    lwz r3, 0x120(r31)
    lwz r0, 0x137c(r3)
    clrrwi r0, r0, 1
    stw r0, 0x137c(r3)
    lwz r3, 0x120(r31)
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x54c(r3)
lbl_fn_8041F6A4_00000D4C:
    li r0, 0x0
    stw r0, 0x120(r31)
lbl_fn_8041F6A4_00000D54:
    lwz r5, lbl_8087F8A0
    mr r3, r31
    li r4, 0x4
    lwz r0, 0x48(r5)
    stw r0, 0x120(r31)
    bl fn_8041F6A4
    b lbl_fn_8041F6A4_0000144C
    lwz r6, 0x11c(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8041F6A4_0000144C
    li r0, 0x1
    stw r0, 0x3fc(r6)
    lfs f0, lbl_80886598
    addi r3, r6, 0xb0
    stfs f0, 0x2fc(r6)
    li r4, 0x0
    lfs f1, lbl_80886578
    li r5, 0x9c
    stfs f0, 0x2e8(r6)
    li r6, 0x1
    lfs f2, lbl_808865A4
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8041F6A4_0000144C
    lwz r3, 0x120(r3)
    addi r4, r31, 0x104
    lfs f1, 0x114(r31)
    li r5, 0x0
    lfs f2, lbl_80886594
    bl fn_80170F20
    lwz r3, 0x120(r31)
    lhz r0, 0xd38(r3)
    ori r0, r0, 0x8000
    sth r0, 0xd38(r3)
    b lbl_fn_8041F6A4_0000144C
    lwz r3, 0x120(r3)
    li r0, 0x1
    lfs f0, lbl_80886598
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f1, lbl_80886578
    stw r0, 0x34c(r3)
    li r5, 0x9d
    lfs f2, lbl_808865A4
    li r6, 0x0
    stfs f0, 0x24c(r3)
    li r7, 0x1
    li r8, 0x1
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r6, 0x120(r31)
    addi r5, r1, 0x14
    lfs f3, 0x74(r31)
    li r4, 0x0
    lfs f0, 0x530(r6)
    addi r3, r6, 0xb0
    lfs f5, 0x70(r31)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r6)
    lfs f0, 0x528(r6)
    lfs f3, 0x6c(r31)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x12c(r31), 0, 0
    stfs f2, 0x134(r31)
    bl fn_80097D7C
    lfs f0, lbl_80886598
    addi r4, r1, 0x8
    lfs f6, 0x12c(r31)
    lis r3, lbl_80753200@ha
    fdivs f8, f0, f1
    lfs f4, 0x130(r31)
    lfs f0, 0x134(r31)
    lwz r5, 0x120(r31)
    lfs f5, 0x7c(r31)
    lfs f3, 0x78(r31)
    fmuls f7, f6, f8
    lfs f6, 0x80(r31)
    fmuls f4, f4, f8
    fmuls f0, f0, f8
    stfs f7, 0x12c(r31)
    stfs f4, 0x130(r31)
    stfs f0, 0x134(r31)
    lfs f4, 0x538(r5)
    lfs f0, 0x534(r5)
    fsubs f5, f5, f4
    lfs f4, 0x53c(r5)
    fsubs f3, f3, f0
    fsubs f0, f6, f4
    stfs f5, 0xc(r1)
    stfs f3, 0x8(r1)
    fmr f2, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x138(r31), 0, 0
    stfs f2, 0x140(r31)
    lfs f1, 0x138(r31)
    lfd f2, lbl_80753200@l(r3)
    stfs f0, 0x10(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886588
    fcmpo cr0, f3, f0
    ble lbl_fn_8041F6A4_00000F0C
    lfs f0, lbl_8088658C
    fsubs f3, f3, f0
lbl_fn_8041F6A4_00000F0C:
    lfs f0, lbl_80886590
    fcmpo cr0, f3, f0
    bge lbl_fn_8041F6A4_00000F20
    lfs f0, lbl_8088658C
    fadds f3, f3, f0
lbl_fn_8041F6A4_00000F20:
    lis r3, lbl_80753200@ha
    lfs f1, 0x13c(r31)
    stfs f3, 0x138(r31)
    lfd f2, lbl_80753200@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886588
    fcmpo cr0, f3, f0
    ble lbl_fn_8041F6A4_00000F4C
    lfs f0, lbl_8088658C
    fsubs f3, f3, f0
lbl_fn_8041F6A4_00000F4C:
    lfs f0, lbl_80886590
    fcmpo cr0, f3, f0
    bge lbl_fn_8041F6A4_00000F60
    lfs f0, lbl_8088658C
    fadds f3, f3, f0
lbl_fn_8041F6A4_00000F60:
    lis r3, lbl_80753200@ha
    lfs f1, 0x140(r31)
    stfs f3, 0x13c(r31)
    lfd f2, lbl_80753200@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886588
    fcmpo cr0, f3, f0
    ble lbl_fn_8041F6A4_00000F8C
    lfs f0, lbl_8088658C
    fsubs f3, f3, f0
lbl_fn_8041F6A4_00000F8C:
    lfs f0, lbl_80886590
    fcmpo cr0, f3, f0
    bge lbl_fn_8041F6A4_00000FA0
    lfs f0, lbl_8088658C
    fadds f3, f3, f0
lbl_fn_8041F6A4_00000FA0:
    lwz r3, 0x120(r31)
    li r4, 0x0
    stfs f3, 0x140(r31)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80886598
    li r4, 0xa
    lfs f4, 0x138(r31)
    fdivs f5, f0, f1
    lfs f3, 0x13c(r31)
    lfs f0, 0x140(r31)
    lwz r3, 0x120(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x138(r31)
    stfs f3, 0x13c(r31)
    stfs f0, 0x140(r31)
    bl fn_8016E970
    lwz r3, 0x120(r31)
    li r0, 0x1
    lfs f0, lbl_80886578
    stfs f0, 0x580(r3)
    stfs f0, 0x584(r3)
    lwz r4, 0x120(r31)
    lwz r3, 0x48(r4)
    cmpwi r3, 0x1
    beq lbl_fn_8041F6A4_0000101C
    cmpwi r3, 0x4
    beq lbl_fn_8041F6A4_0000101C
    li r0, 0x0
lbl_fn_8041F6A4_0000101C:
    cmpwi r0, 0x0
    beq lbl_fn_8041F6A4_0000144C
    lwz r0, 0x137c(r4)
    ori r0, r0, 0x1
    stw r0, 0x137c(r4)
    lwz r3, 0x120(r31)
    lwz r0, 0x54c(r3)
    oris r0, r0, 0x100
    stw r0, 0x54c(r3)
    b lbl_fn_8041F6A4_0000144C
    lwz r5, 0x120(r3)
    li r30, 0x1
    lwz r3, 0x11c(r3)
    li r4, 0x0
    lwz r0, 0x48(r5)
    li r5, 0x96
    addi r3, r3, 0xb0
    lfs f0, lbl_80886598
    stw r30, 0x34c(r3)
    cntlzw r0, r0
    lfs f1, lbl_80886578
    srwi r6, r0, 5
    stfs f0, 0x24c(r3)
    li r7, 0x1
    lfs f2, lbl_808865A4
    li r8, 0x1
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r3, 0x120(r31)
    li r4, 0x0
    lfs f0, lbl_80886598
    li r5, 0x99
    lwz r0, 0x48(r3)
    addi r3, r3, 0xb0
    lfs f1, lbl_80886578
    li r7, 0x1
    stw r30, 0x34c(r3)
    cntlzw r0, r0
    lfs f2, lbl_808865A4
    srwi r6, r0, 5
    stfs f0, 0x24c(r3)
    li r8, 0x1
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r3, 0x120(r31)
    lfs f2, 0x74(r31)
    psq_l f1, 0x6c(r31), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lwz r3, 0x120(r31)
    lfs f2, 0x80(r31)
    psq_l f1, 0x78(r31), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    b lbl_fn_8041F6A4_0000144C
    lwz r3, 0x11c(r3)
    li r30, 0x1
    lfs f0, lbl_80886598
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f1, lbl_80886578
    stw r30, 0x34c(r3)
    li r5, 0x97
    lfs f2, lbl_808865A4
    li r6, 0x0
    stfs f0, 0x24c(r3)
    li r7, 0x1
    li r8, 0x1
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r3, 0x120(r31)
    li r4, 0x0
    lfs f0, lbl_80886598
    li r5, 0x9a
    addi r3, r3, 0xb0
    lfs f1, lbl_80886578
    stw r30, 0x34c(r3)
    li r6, 0x0
    lfs f2, lbl_808865A4
    li r7, 0x1
    stfs f0, 0x24c(r3)
    li r8, 0x1
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lfs f4, lbl_808865A8
    addi r3, r1, 0x68
    lfs f3, lbl_80886578
    li r4, 0x79
    lfs f0, lbl_808865AC
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x7c(r31)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x2c
    lwz r3, 0x120(r31)
    psq_l f1, 0x0(r4), 0, 0
    li r4, 0x0
    lfs f2, 0x34(r1)
    addi r3, r3, 0xb0
    stfs f2, 0x134(r31)
    psq_st f1, 0x12c(r31), 0, 0
    bl fn_80097D7C
    lfs f0, lbl_80886598
    li r4, 0x0
    lfs f3, lbl_80886578
    fdivs f7, f0, f1
    lfs f6, 0x12c(r31)
    lfs f5, 0x130(r31)
    lfs f4, 0x134(r31)
    lfs f0, lbl_80886584
    lwz r3, 0x120(r31)
    fmuls f6, f6, f7
    stfs f3, 0x138(r31)
    fmuls f5, f5, f7
    addi r3, r3, 0xb0
    fmuls f4, f4, f7
    stfs f6, 0x12c(r31)
    stfs f5, 0x130(r31)
    stfs f4, 0x134(r31)
    stfs f0, 0x13c(r31)
    stfs f3, 0x140(r31)
    bl fn_80097D7C
    lfs f0, lbl_80886598
    li r0, 0x2d
    lfs f4, 0x138(r31)
    fdivs f5, f0, f1
    lfs f3, 0x13c(r31)
    lfs f0, 0x140(r31)
    stw r0, 0xfc(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x138(r31)
    stfs f3, 0x13c(r31)
    stfs f0, 0x140(r31)
    b lbl_fn_8041F6A4_0000144C
    lwz r3, 0x11c(r3)
    li r30, 0x1
    lfs f0, lbl_80886598
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f1, lbl_80886578
    stw r30, 0x34c(r3)
    li r5, 0x98
    lfs f2, lbl_808865A4
    li r6, 0x0
    stfs f0, 0x24c(r3)
    li r7, 0x1
    li r8, 0x1
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r3, 0x120(r31)
    li r4, 0x0
    lfs f0, lbl_80886598
    li r5, 0x9b
    addi r3, r3, 0xb0
    lfs f1, lbl_80886578
    stw r30, 0x34c(r3)
    li r6, 0x0
    lfs f2, lbl_808865A4
    li r7, 0x1
    stfs f0, 0x24c(r3)
    li r8, 0x1
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lfs f4, lbl_808865B0
    addi r3, r1, 0x38
    lfs f3, lbl_80886578
    li r4, 0x79
    lfs f0, lbl_808865B4
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x7c(r31)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x20
    lwz r3, 0x120(r31)
    psq_l f1, 0x0(r4), 0, 0
    li r4, 0x0
    lfs f2, 0x28(r1)
    addi r3, r3, 0xb0
    stfs f2, 0x134(r31)
    psq_st f1, 0x12c(r31), 0, 0
    bl fn_80097D7C
    lfs f0, lbl_80886598
    li r4, 0x0
    lfs f3, lbl_80886578
    fdivs f7, f0, f1
    lfs f6, 0x12c(r31)
    lfs f5, 0x130(r31)
    lfs f4, 0x134(r31)
    lfs f0, lbl_80886584
    lwz r3, 0x120(r31)
    fmuls f6, f6, f7
    stfs f3, 0x138(r31)
    fmuls f5, f5, f7
    addi r3, r3, 0xb0
    fmuls f4, f4, f7
    stfs f6, 0x12c(r31)
    stfs f5, 0x130(r31)
    stfs f4, 0x134(r31)
    stfs f0, 0x13c(r31)
    stfs f3, 0x140(r31)
    bl fn_80097D7C
    lfs f0, lbl_80886598
    li r0, 0x78
    lfs f4, 0x138(r31)
    fdivs f5, f0, f1
    lfs f3, 0x13c(r31)
    lfs f0, 0x140(r31)
    stw r0, 0xfc(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x138(r31)
    stfs f3, 0x13c(r31)
    stfs f0, 0x140(r31)
    b lbl_fn_8041F6A4_0000144C
    lwz r8, 0x120(r3)
    li r4, 0x0
    stw r8, 0x124(r3)
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    lwz r0, 0x50(r8)
    stw r0, 0x128(r3)
    mr r3, r8
    bl fn_8015495C
    lwz r3, 0x120(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lwz r4, 0x120(r31)
    li r0, 0x1
    lwz r3, 0x48(r4)
    cmpwi r3, 0x1
    beq lbl_fn_8041F6A4_00001404
    cmpwi r3, 0x4
    beq lbl_fn_8041F6A4_00001404
    li r0, 0x0
lbl_fn_8041F6A4_00001404:
    cmpwi r0, 0x0
    beq lbl_fn_8041F6A4_00001438
    lhz r0, 0xd38(r4)
    rlwinm r0, r0, 0, 17, 15
    sth r0, 0xd38(r4)
    lwz r3, 0x120(r31)
    lwz r0, 0x137c(r3)
    clrrwi r0, r0, 1
    stw r0, 0x137c(r3)
    lwz r3, 0x120(r31)
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x54c(r3)
lbl_fn_8041F6A4_00001438:
    li r0, 0x0
    stw r0, 0x120(r31)
    mr r3, r31
    li r4, 0x2
    bl fn_8041F6A4
lbl_fn_8041F6A4_0000144C:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8041FE80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8041FE80_000014A0
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8041FE80_000014A0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8041FE80_000014A0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041FED8(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0xc0(r3)
    li r5, 0x0
    bne lbl_fn_8041FED8_000014D8
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8041FED8_000014DC
lbl_fn_8041FED8_000014D8:
    li r5, 0x1
lbl_fn_8041FED8_000014DC:
    stw r5, 0xbc(r3)
    lwz r0, 0x50(r4)
    stw r0, 0x114(r3)
    blr
}

asm void fn_8041FF08(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    beq lbl_fn_8041FF08_000015CC
    lis r5, lbl_80753230@ha
    li r3, 0x160
    addi r5, r5, lbl_80753230@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8041FF08_000015C4
    mr r4, r28
    mr r5, r29
    mr r6, r31
    bl fn_803EC568
    lis r3, lbl_8078E048@ha
    lfs f0, lbl_808865B8
    addi r3, r3, lbl_8078E048@l
    stw r3, 0x0(r30)
    li r31, 0x0
    stfs f0, 0xf4(r30)
    addi r3, r30, 0xfc
    stw r31, 0xf8(r30)
    bl fn_800C16C0
    lfs f0, lbl_808865B8
    addi r4, r1, 0x8
    stfs f0, 0x150(r30)
    addi r3, r1, 0x10
    li r0, -0x1
    stfs f0, 0x154(r30)
    stfs f0, 0x158(r30)
    stfs f0, 0x15c(r30)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stw r31, 0x54(r30)
    psq_l f1, 0x0(r4), 0, 0
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    psq_st f1, 0x100(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x108(r30), 0, 0
    stw r31, 0xfc(r30)
    stw r0, 0x14c(r30)
lbl_fn_8041FF08_000015C4:
    mr r3, r30
    b lbl_fn_8041FF08_000015D0
lbl_fn_8041FF08_000015CC:
    li r3, 0x0
lbl_fn_8041FF08_000015D0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042000C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8042000C_0000169C
    lis r4, lbl_8078E048@ha
    addi r4, r4, lbl_8078E048@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    li r4, 0x0
    stw r4, 0x74(r3)
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8042000C_00001644
    li r4, 0x1
lbl_fn_8042000C_00001644:
    addic. r31, r29, 0xfc
    stw r4, 0x70(r3)
    beq lbl_fn_8042000C_00001680
    beq lbl_fn_8042000C_00001680
    addic. r0, r31, 0x3c
    beq lbl_fn_8042000C_00001680
    lwz r3, 0x40(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8042000C_00001674
    lis r4, fn_800D5808@ha
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_8042000C_00001674:
    li r0, 0x0
    stw r0, 0x40(r31)
    stw r0, 0x3c(r31)
lbl_fn_8042000C_00001680:
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8042000C_0000169C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8042000C_0000169C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804200D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    beq lbl_fn_804200D8_000016EC
    li r0, 0x1
    stw r0, 0x54(r31)
    li r3, 0x0
    b lbl_fn_804200D8_000016F0
lbl_fn_804200D8_000016EC:
    li r3, 0x1
lbl_fn_804200D8_000016F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80420120(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    addic. r0, r31, 0xfc
    li r4, 0x0
    stw r0, 0x74(r3)
    bne lbl_fn_80420120_00001740
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80420120_00001744
lbl_fn_80420120_00001740:
    li r4, 0x1
lbl_fn_80420120_00001744:
    stw r4, 0x70(r3)
    lwz r30, 0x14c(r31)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    stw r30, 0xc8(r3)
    li r3, 0x0
    lbz r0, lbl_8087F4C0
    stw r3, 0x8(r1)
    extsb. r0, r0
    bne lbl_fn_80420120_00001794
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80420120_00001794:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80420120_000017B8
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80420120_000017B8:
    lis r0, fn_8041FED8@ha
    addic. r0, r0, -296
    beq lbl_fn_80420120_000017D0
    stw r0, 0xc(r1)
    li r0, 0x1
    b lbl_fn_80420120_000017D4
lbl_fn_80420120_000017D0:
    li r0, 0x0
lbl_fn_80420120_000017D4:
    cmpwi r0, 0x0
    beq lbl_fn_80420120_000017EC
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x8(r1)
    b lbl_fn_80420120_000017F4
lbl_fn_80420120_000017EC:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80420120_000017F4:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x8
    addi r5, r31, 0xfc
    bl fn_80491528
    addic. r3, r1, 0x8
    beq lbl_fn_80420120_00001840
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80420120_00001840
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80420120_00001838
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80420120_00001838:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80420120_00001840:
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80420120_00001858
    li r0, 0x0
    stw r0, 0xf8(r31)
    b lbl_fn_80420120_0000186C
lbl_fn_80420120_00001858:
    lfs f0, 0xf4(r31)
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r0, 0xf8(r31)
lbl_fn_80420120_0000186C:
    lwz r4, 0x58(r31)
    li r0, 0x0
    lfs f0, lbl_808865B8
    mr r3, r31
    addi r4, r4, 0x1
    stw r4, 0x20(r1)
    addi r4, r1, 0x20
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804202E8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804202E8_000018FC
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_804202E8_000018FC:
    lwz r0, 0x54(r31)
    lfs f8, lbl_808865B8
    cmpwi r0, 0x1
    stfs f8, 0x20(r1)
    stfs f8, 0x24(r1)
    bne lbl_fn_804202E8_00001970
    lwz r3, 0xf8(r31)
    cmpwi r3, 0x0
    ble lbl_fn_804202E8_00001928
    subi r0, r3, 0x1
    stw r0, 0xf8(r31)
lbl_fn_804202E8_00001928:
    lfs f3, 0xf4(r31)
    lfs f8, lbl_808865B8
    fcmpo cr0, f3, f8
    ble lbl_fn_804202E8_00001960
    lwz r4, 0xf8(r31)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lis r3, lbl_80753218@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_80753218@l(r3)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fdivs f8, f0, f3
lbl_fn_804202E8_00001960:
    addi r3, r1, 0x20
    psq_l f1, 0x158(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_804202E8_000019FC
lbl_fn_804202E8_00001970:
    cmpwi r0, 0x2
    bne lbl_fn_804202E8_000019FC
    lwz r4, 0xf8(r31)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lis r3, lbl_80753218@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_80753218@l(r3)
    stw r0, 0x2c(r1)
    lfs f0, 0xf4(r31)
    lfd f2, 0x28(r1)
    fsubs f2, f2, f3
    fcmpo cr0, f2, f0
    bge lbl_fn_804202E8_000019B0
    addi r0, r4, 0x1
    stw r0, 0xf8(r31)
lbl_fn_804202E8_000019B0:
    lfs f3, 0xf4(r31)
    lfs f0, lbl_808865B8
    fcmpo cr0, f3, f0
    ble lbl_fn_804202E8_000019EC
    lwz r4, 0xf8(r31)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lis r3, lbl_80753218@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_80753218@l(r3)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fdivs f8, f0, f3
    b lbl_fn_804202E8_000019F0
lbl_fn_804202E8_000019EC:
    lfs f8, lbl_808865BC
lbl_fn_804202E8_000019F0:
    addi r3, r1, 0x20
    psq_l f1, 0x158(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_804202E8_000019FC:
    lfs f0, 0x154(r31)
    addi r4, r1, 0x18
    lfs f3, 0x24(r1)
    addi r3, r31, 0xfc
    lfs f2, 0x150(r31)
    fsubs f7, f0, f3
    lfs f0, 0x20(r1)
    lfs f4, 0x6c(r31)
    fsubs f6, f2, f0
    stfs f4, 0x100(r31)
    fmuls f5, f7, f8
    lfs f2, 0x74(r31)
    fmuls f4, f6, f8
    stfs f2, 0x104(r31)
    fadds f3, f5, f3
    stfs f6, 0x10(r1)
    fadds f0, f4, f0
    stfs f3, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x14(r1)
    stfs f4, 0x8(r1)
    stfs f5, 0xc(r1)
    psq_st f1, 0x108(r31), 0, 0
    bl fn_800C18BC
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
