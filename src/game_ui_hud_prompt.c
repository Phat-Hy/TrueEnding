#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8003EA3C(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_800FB4B0(void);
extern void fn_801092C8(void);
extern void fn_8011BF3C(void);
extern void fn_801231D0(void);
extern void fn_801240B4(void);
extern void fn_801539E0(void);
extern void fn_80176548(void);
extern void fn_80178018(void);
extern void fn_80178078(void);
extern void fn_80179D44(void);
extern void fn_801A4E08(void);
extern void fn_801C3414(void);
extern void fn_801C3458(void);
extern void fn_80219E6C(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_80375184(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8073B940[];
extern u8 lbl_8073B980[];
extern u8 lbl_8073B988[];
extern u8 lbl_80782168[];
extern u8 lbl_807821E0[];
extern u8 lbl_80782258[];
extern u8 lbl_80782400[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_808828B8;
extern u32 lbl_808828BC;
extern u32 lbl_808828C0;
extern u32 lbl_808828C4;
extern u32 lbl_808828C8;
extern u32 lbl_808828CC;
extern u32 lbl_808828D0;
extern u32 lbl_808828D8;
extern u32 lbl_808828DC;
extern u32 lbl_808828E0;
extern u32 lbl_808828E4;
extern u32 lbl_808828E8;
extern u32 lbl_808828EC;
extern u32 lbl_808828F0;
extern u32 lbl_808828F4;
extern u32 lbl_808828F8;
extern u32 lbl_808828FC;
extern u32 lbl_80882900;
extern u32 lbl_80882904;
extern u32 lbl_80882908;
extern u32 lbl_8088290C;
extern u32 lbl_80882910;
extern u32 lbl_80882914;
extern u32 lbl_80882918;
extern u32 lbl_80882920;
extern u32 lbl_80882924;
extern u32 lbl_80882928;
extern u32 lbl_8088292C;
extern u32 lbl_80882930;
extern u32 lbl_80882934;
extern u32 lbl_80882938;
extern u32 lbl_8088293C;
extern u32 lbl_80882940;
extern u32 lbl_80882944;
extern u32 lbl_80882948;
extern u32 lbl_8088294C;
extern u32 lbl_80882950;
extern u32 lbl_80882954;
extern u32 lbl_80882958;
extern u32 lbl_8088295C;
extern u32 lbl_80882960;
extern u32 lbl_80882964;
extern u32 lbl_80882968;
extern u32 lbl_8088296C;
extern u32 lbl_80882970;
extern u32 lbl_80882974;

/* Function declarations */
void fn_801C8E90(void);
void fn_801C8ED0(void);
void fn_801C8F10(void);
void fn_801C900C(void);
void fn_801C9384(void);
void fn_801C93C4(void);
void fn_801C951C(void);
void fn_801C9AE4(void);
void fn_801C9B24(void);
void fn_801C9C68(void);
void fn_801C9F2C(void);
void fn_801C9F6C(void);
void fn_801CA1E0(void);

asm void fn_801C8E90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C8E90_00000028
    cmpwi r4, 0x0
    ble lbl_fn_801C8E90_00000028
    bl dtor_80084684
lbl_fn_801C8E90_00000028:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C8ED0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C8ED0_00000068
    cmpwi r4, 0x0
    ble lbl_fn_801C8ED0_00000068
    bl dtor_80084684
lbl_fn_801C8ED0_00000068:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C8F10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80782168@ha
    frsp f3, f1
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80782168@l
    lfs f0, lbl_808828B8
    li r0, 0x56
    stw r31, 0xc(r1)
    fcmpo cr0, f3, f0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r5, 0x0(r3)
    stw r0, 0x560(r4)
    stfs f1, 0x8(r3)
    bge lbl_fn_801C8F10_000000D0
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_801C8F10_000000D8
lbl_fn_801C8F10_000000D0:
    li r0, 0x0
    stw r0, 0xc(r3)
lbl_fn_801C8F10_000000D8:
    lwz r4, 0x4(r3)
    li r0, 0x1
    lfs f0, lbl_808828BC
    psq_l f1, 0x534(r4), 0, 0
    addi r31, r4, 0xb0
    lfs f2, 0x53c(r4)
    stfs f2, 0x18(r3)
    psq_st f1, 0x10(r3), 0, 0
    stw r0, 0x3fc(r4)
    stfs f0, 0x2fc(r4)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801C8F10_00000134
    lfs f1, lbl_808828B8
    mr r3, r31
    lfs f2, lbl_808828C0
    li r4, 0x0
    li r5, 0x1ee
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C8F10_00000158
lbl_fn_801C8F10_00000134:
    lfs f1, lbl_808828B8
    mr r3, r31
    lfs f2, lbl_808828C0
    li r4, 0x0
    li r5, 0x1ef
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801C8F10_00000158:
    lfs f0, lbl_808828C4
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C900C(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x1f4(r1)
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    lwz r5, 0x4(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801C900C_000001C4
    li r3, 0x1
    b lbl_fn_801C900C_000004D4
lbl_fn_801C900C_000001C4:
    lfs f0, lbl_808828C4
    addi r3, r1, 0x24
    lwz r4, 0x4(r31)
    fdivs f11, f0, f1
    lfs f7, 0x8(r31)
    psq_l f1, 0x534(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x53c(r4)
    lfs f0, 0x28(r1)
    fmadds f0, f7, f11, f0
    stfs f2, 0x2c(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801C900C_00000228
    lfs f8, lbl_808828C8
    lfs f7, lbl_808828B8
    lfs f0, lbl_808828BC
    stfs f8, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f0, 0x20(r1)
    b lbl_fn_801C900C_00000240
lbl_fn_801C900C_00000228:
    lfs f8, lbl_808828CC
    lfs f7, lbl_808828B8
    lfs f0, lbl_808828BC
    stfs f8, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f0, 0x20(r1)
lbl_fn_801C900C_00000240:
    lfs f7, 0x18(r1)
    addi r30, r1, 0x150
    lfs f0, 0x1c(r1)
    fmuls f10, f7, f11
    lfs f8, 0x20(r1)
    lfs f7, lbl_808828B8
    fmuls f9, f0, f11
    lfs f0, lbl_808828BC
    fmuls f8, f8, f11
    stfs f10, 0x18(r1)
    stfs f9, 0x1c(r1)
    stfs f8, 0x20(r1)
    stfs f7, 0x17c(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f7, 0x168(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x15c(r1)
    stfs f7, 0x158(r1)
    stfs f7, 0x154(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x150(r1)
    lfs f1, 0x18(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_801C900C_000002FC
    addi r3, r1, 0x60
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    addi r3, r1, 0x30
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
lbl_fn_801C900C_000002FC:
    lfs f0, lbl_808828B8
    lfs f1, 0x14(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_801C900C_0000035C
    addi r3, r1, 0xc0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc0
    addi r5, r1, 0x90
    bl fn_805F89F0
    addi r3, r1, 0x90
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
lbl_fn_801C900C_0000035C:
    lfs f0, lbl_808828B8
    lfs f1, 0x10(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_801C900C_000003BC
    addi r3, r1, 0x120
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    addi r3, r1, 0xf0
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
lbl_fn_801C900C_000003BC:
    addi r4, r1, 0x18
    addi r3, r1, 0x150
    mr r5, r4
    bl fn_805F93C0
    lwz r6, lbl_8087F0A8
    lis r4, 0x4330
    lis r5, lbl_8073B940@ha
    lwz r3, lbl_8087EFA8
    lwz r6, 0x30(r6)
    li r0, 0x0
    lfs f11, 0x3a4(r3)
    addi r3, r1, 0x8
    mullw r6, r6, r6
    stw r4, 0x1d0(r1)
    lfs f7, 0x18(r1)
    lfs f0, 0x20(r1)
    fmuls f7, f7, f11
    lfd f10, lbl_8073B940@l(r5)
    xoris r4, r6, 0x8000
    stw r4, 0x1d4(r1)
    fmuls f0, f0, f11
    lfs f9, lbl_808828D0
    lfd f8, 0x1d0(r1)
    stfs f7, 0x18(r1)
    fsubs f10, f8, f10
    lfs f8, 0x1c(r1)
    stfs f0, 0x20(r1)
    fdivs f7, f9, f10
    stw r0, 0x1b4(r1)
    stw r0, 0x1b8(r1)
    stw r0, 0x1bc(r1)
    stw r0, 0x1c0(r1)
    fadds f0, f8, f7
    fmuls f0, f0, f11
    stfs f0, 0x1c(r1)
    lwz r4, 0x4(r31)
    addi r5, r4, 0x528
    bl fn_80176548
    lwz r5, 0x4(r31)
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x180
    addi r8, r5, 0x5b8
    lfs f1, 0x14(r1)
    addi r5, r1, 0x8
    addi r6, r1, 0x18
    addi r7, r7, 0x80
    li r9, 0x0
    bl fn_8004D388
    lwz r5, 0x4(r31)
    addi r4, r1, 0x190
    lfs f7, 0x190(r1)
    li r3, 0x0
    lfs f0, 0x5a4(r5)
    lfs f9, 0x194(r1)
    fsubs f7, f7, f0
    lfs f0, 0x14(r1)
    lfs f8, 0x198(r1)
    stfs f7, 0x190(r1)
    lfs f7, 0x5a8(r5)
    fsubs f7, f9, f7
    stfs f7, 0x194(r1)
    fsubs f0, f7, f0
    lfs f7, 0x5ac(r5)
    fsubs f2, f8, f7
    stfs f0, 0x194(r1)
    stfs f2, 0x198(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
lbl_fn_801C900C_000004D4:
    lwz r0, 0x1f4(r1)
    psq_l f31, 0x1e8(r1), 0, 0
    lfd f31, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_801C9384(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C9384_0000051C
    cmpwi r4, 0x0
    ble lbl_fn_801C9384_0000051C
    bl dtor_80084684
lbl_fn_801C9384_0000051C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C93C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r10, lbl_807821E0@ha
    li r9, 0x0
    stw r0, 0x24(r1)
    addi r10, r10, lbl_807821E0@l
    li r0, 0x25
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r5
    stw r4, 0x4(r3)
    stw r10, 0x0(r3)
    stw r5, 0x8(r3)
    stw r7, 0x10(r3)
    stfs f1, 0x14(r3)
    stw r9, 0x18(r3)
    stw r0, 0x560(r4)
    lwz r0, 0x10(r3)
    lwz r4, 0x4(r3)
    cmpwi r0, 0x0
    addi r30, r4, 0xb0
    bge lbl_fn_801C93C4_000005A4
    li r0, 0x6a
    stw r0, 0x10(r3)
lbl_fn_801C93C4_000005A4:
    lfs f1, 0x14(r3)
    lfs f0, lbl_808828D8
    fcmpo cr0, f1, f0
    bge lbl_fn_801C93C4_000005BC
    lfs f0, lbl_808828DC
    stfs f0, 0x14(r3)
lbl_fn_801C93C4_000005BC:
    cmpwi r8, 0x0
    beq lbl_fn_801C93C4_000005F4
    mr r3, r30
    mr r4, r8
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801C93C4_000005E4
    li r0, 0x0
    b lbl_fn_801C93C4_000005F0
lbl_fn_801C93C4_000005E4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r0, r3, r0
lbl_fn_801C93C4_000005F0:
    stw r0, 0x18(r31)
lbl_fn_801C93C4_000005F4:
    li r0, 0x1
    stw r0, 0x34c(r30)
    lfs f0, lbl_808828E0
    mr r3, r30
    stfs f0, 0x24c(r30)
    li r4, 0x0
    lfs f1, lbl_808828D8
    li r6, 0x0
    lwz r5, 0x10(r31)
    li r7, 0x0
    lfs f2, lbl_808828E4
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808828E0
    cmpwi r28, 0x0
    stfs f0, 0x238(r30)
    beq lbl_fn_801C93C4_00000650
    lbz r0, 0x2(r28)
    cmpwi r0, 0x4
    bne lbl_fn_801C93C4_00000650
    lwz r0, 0x4(r31)
    stw r0, 0xc(r31)
    b lbl_fn_801C93C4_00000654
lbl_fn_801C93C4_00000650:
    stw r29, 0xc(r31)
lbl_fn_801C93C4_00000654:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801C93C4_00000668
    bl fn_801539E0
lbl_fn_801C93C4_00000668:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801C951C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x160
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    bl _savegpr_27
    lwz r4, 0x4(r3)
    mr r29, r3
    lwz r5, 0xc(r3)
    addi r3, r1, 0xa0
    lfs f0, 0x530(r4)
    addi r27, r4, 0xb0
    lfs f3, 0x530(r5)
    li r31, 0x0
    lfs f5, 0x52c(r5)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xa4(r1)
    stfs f0, 0xa0(r1)
    stfs f6, 0xa8(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808828E8
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801C951C_000008F0
    addi r3, r1, 0xa0
    addi r30, r1, 0x70
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0xa8(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F98D0
    lfs f2, 0x78(r1)
    addi r28, r1, 0x7c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808828E8
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x84(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C951C_00000780
    lfs f3, 0x7c(r1)
    lfs f0, lbl_808828D8
    fcmpo cr0, f3, f0
    ble lbl_fn_801C951C_00000774
    lfs f0, lbl_808828EC
    b lbl_fn_801C951C_00000778
lbl_fn_801C951C_00000774:
    lfs f0, lbl_808828F0
lbl_fn_801C951C_00000778:
    stfs f0, 0x50(r1)
    b lbl_fn_801C951C_00000794
lbl_fn_801C951C_00000780:
    frsp f2, f2
    lfs f1, 0x7c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_801C951C_00000794:
    lfs f0, 0x50(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808828D8
    addi r4, r1, 0x40
    lfs f30, 0xe0(r1)
    mr r5, r4
    lfs f31, 0xdc(r1)
    addi r3, r1, 0x108
    lfs f13, 0xd8(r1)
    lfs f12, 0xf0(r1)
    lfs f11, 0xec(r1)
    lfs f10, 0xe8(r1)
    lfs f9, 0x100(r1)
    lfs f8, 0xfc(r1)
    lfs f7, 0xf8(r1)
    lfs f6, 0x104(r1)
    lfs f5, 0xf4(r1)
    lfs f4, 0xe4(r1)
    lfs f0, lbl_808828E0
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x84(r1)
    stfs f3, 0x138(r1)
    stfs f3, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    stfs f13, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f13, 0x108(r1)
    stfs f31, 0x10c(r1)
    stfs f30, 0x110(r1)
    stfs f10, 0x1c(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f10, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f12, 0x120(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f4, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f4, 0x114(r1)
    stfs f5, 0x124(r1)
    stfs f6, 0x134(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    lfs f0, lbl_808828E8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C951C_000008B0
    lfs f3, 0x44(r1)
    lfs f0, lbl_808828D8
    fcmpo cr0, f3, f0
    ble lbl_fn_801C951C_000008A0
    lfs f0, lbl_808828EC
    b lbl_fn_801C951C_000008A4
lbl_fn_801C951C_000008A0:
    lfs f0, lbl_808828F0
lbl_fn_801C951C_000008A4:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_801C951C_000008C4
lbl_fn_801C951C_000008B0:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_801C951C_000008C4:
    lfs f2, lbl_808828D8
    addi r3, r1, 0x4c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xac
    stfs f2, 0x54(r1)
    stfs f2, 0x84(r1)
    frsp f2, f2
    psq_st f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xb4(r1)
    b lbl_fn_801C951C_00000908
lbl_fn_801C951C_000008F0:
    lwz r4, 0x4(r29)
    addi r3, r1, 0xac
    psq_l f1, 0x534(r4), 0, 0
    lfs f2, 0x53c(r4)
    stfs f2, 0xb4(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_801C951C_00000908:
    lfs f30, 0x234(r27)
    lfs f3, 0x14(r29)
    lfs f0, lbl_808828E8
    fsubs f3, f30, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C951C_00000BBC
    lwz r30, 0x8(r29)
    cmpwi r30, 0x0
    beq lbl_fn_801C951C_00000C04
    lbz r0, 0x2(r30)
    extsb r0, r0
    cmpwi r0, 0x2
    beq lbl_fn_801C951C_00000954
    cmpwi r0, 0x6
    beq lbl_fn_801C951C_00000954
    cmpwi r0, 0x1
    bne lbl_fn_801C951C_00000A38
lbl_fn_801C951C_00000954:
    lwz r3, 0x4(r29)
    lfs f6, lbl_808828D8
    lfs f5, lbl_808828F4
    lfs f4, 0x530(r3)
    lfs f3, 0x52c(r3)
    lfs f0, 0x528(r3)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x64(r1)
    fadds f0, f0, f6
    stfs f3, 0x98(r1)
    stfs f0, 0x94(r1)
    stfs f4, 0x9c(r1)
    lwz r5, 0x18(r29)
    stfs f5, 0x68(r1)
    cmpwi r5, 0x0
    stfs f6, 0x6c(r1)
    beq lbl_fn_801C951C_000009C8
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x58
    lfs f3, 0xc(r5)
    addi r3, r1, 0x94
    lfs f2, 0x2c(r5)
    stfs f3, 0x58(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x9c(r1)
lbl_fn_801C951C_000009C8:
    addi r3, r1, 0xa0
    lfs f2, 0xa8(r1)
    addi r28, r1, 0x88
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    mr r3, r28
    stfs f2, 0x90(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808828E8
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801C951C_00000A08
    mr r3, r28
    mr r4, r28
    bl fn_805F98D0
lbl_fn_801C951C_00000A08:
    lwz r3, lbl_8087F048
    mr r5, r30
    lwz r4, 0x4(r29)
    addi r6, r1, 0x94
    lfs f1, lbl_808828D8
    addi r7, r1, 0x88
    lfs f2, lbl_808828E0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_801C951C_00000B20
lbl_fn_801C951C_00000A38:
    lbz r0, 0x1(r30)
    extsb. r0, r0
    bne lbl_fn_801C951C_00000A78
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r8, r3
    lwz r3, lbl_8087F048
    lwz r6, 0x4(r29)
    mr r7, r30
    lfs f1, lbl_808828D8
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_801C951C_00000B20
lbl_fn_801C951C_00000A78:
    lwz r0, 0xac(r30)
    rlwinm r3, r0, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    bne lbl_fn_801C951C_00000AE8
    lwz r0, 0xd4(r1)
    li r6, 0x0
    li r5, -0x1
    lis r8, lbl_807C6B90@ha
    clrlwi r0, r0, 4
    stw r6, 0xb8(r1)
    mr r4, r30
    addi r3, r1, 0xb8
    stw r6, 0xbc(r1)
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    stw r6, 0xc0(r1)
    li r10, 0x0
    stw r6, 0xc4(r1)
    stw r6, 0xc8(r1)
    stw r5, 0xcc(r1)
    stw r0, 0xd4(r1)
    stw r5, 0xd0(r1)
    lwz r5, 0x4(r29)
    mr r6, r5
    bl fn_8003EA3C
    b lbl_fn_801C951C_00000B20
lbl_fn_801C951C_00000AE8:
    lwz r28, lbl_8087F048
    mr r3, r28
    bl fn_800F8548
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r6, r3
    mr r3, r28
    lwz r4, 0x4(r29)
    mr r5, r30
    li r8, 0x0
    li r9, 0x1e
    addi r7, r4, 0x528
    li r10, -0x1
    bl fn_800FB4B0
lbl_fn_801C951C_00000B20:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801C951C_00000B7C
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_801C951C_00000B7C
    lwz r5, 0x4(r29)
    lwz r6, 0x4(r30)
    lwz r0, 0xabc(r5)
    cmpw r6, r0
    bne lbl_fn_801C951C_00000B7C
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    bne lbl_fn_801C951C_00000B6C
    lwz r3, lbl_8087F048
    li r4, 0xc
    li r7, 0x0
    bl fn_801092C8
    b lbl_fn_801C951C_00000B7C
lbl_fn_801C951C_00000B6C:
    lwz r3, lbl_8087F048
    li r4, 0xd
    li r7, 0x0
    bl fn_801092C8
lbl_fn_801C951C_00000B7C:
    lwz r0, 0xac(r30)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_801C951C_00000BA0
    lwz r3, 0x4(r29)
    lfs f0, lbl_808828D8
    stfs f0, 0x9fc(r3)
    b lbl_fn_801C951C_00000C04
lbl_fn_801C951C_00000BA0:
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801C951C_00000C04
    lfs f0, lbl_808828D8
    stfs f0, 0x7dc(r3)
    b lbl_fn_801C951C_00000C04
lbl_fn_801C951C_00000BBC:
    mr r3, r27
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_801C951C_00000C04
    lwz r4, 0x4(r29)
    lwz r0, 0xd34(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801C951C_00000C00
    lwz r3, 0x48(r4)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_801C951C_00000C00
    lhz r0, 0xd38(r4)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r4)
lbl_fn_801C951C_00000C00:
    li r31, 0x1
lbl_fn_801C951C_00000C04:
    lwz r3, 0x4(r29)
    addi r4, r1, 0xac
    lfs f1, lbl_808828D8
    li r5, 0x0
    lwz r12, 0x0(r3)
    lfs f2, lbl_808828E0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    psq_l f31, 0x178(r1), 0, 0
    mr r3, r31
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    addi r11, r1, 0x160
    bl _restgpr_27
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_801C9AE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C9AE4_00000C7C
    cmpwi r4, 0x0
    ble lbl_fn_801C9AE4_00000C7C
    bl dtor_80084684
lbl_fn_801C9AE4_00000C7C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C9B24(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r8, lbl_80782258@ha
    lfs f0, lbl_808828F8
    stw r0, 0x34(r1)
    addi r8, r8, lbl_80782258@l
    li r0, 0x1
    lfs f1, lbl_808828FC
    stw r31, 0x2c(r1)
    mr r31, r7
    lfs f2, lbl_80882900
    li r7, 0x0
    stw r30, 0x28(r1)
    mr r30, r6
    li r6, 0x0
    stw r29, 0x24(r1)
    mr r29, r5
    li r5, 0x3d
    stw r28, 0x20(r1)
    mr r28, r3
    stw r8, 0x0(r3)
    li r8, 0x1
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x78
    lwz r3, 0x4(r3)
    addi r3, r3, 0xb0
    stw r0, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    bl fn_80097C08
    psq_l f1, 0x0(r29), 0, 0
    li r0, 0x8
    lfs f2, 0x8(r29)
    addi r4, r1, 0x8
    psq_st f1, 0x8(r28), 0, 0
    mr r3, r28
    lwz r5, 0x4(r28)
    stfs f2, 0x10(r28)
    lfs f0, lbl_808828FC
    lfs f2, 0x53c(r5)
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x20(r28), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r28)
    lfs f2, 0x8(r30)
    psq_st f1, 0x14(r28), 0, 0
    lfs f3, 0x4(r29)
    stfs f2, 0x1c(r28)
    lfs f2, 0x8(r31)
    stfs f2, 0x34(r28)
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x2c(r28), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f3, 0x18(r28)
    lfs f2, 0x8(r29)
    stw r0, 0x38(r28)
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    fmr f2, f0
    stfs f0, 0x8(r1)
    lwz r5, 0x4(r28)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x57c(r5)
    lwz r4, 0x4(r28)
    stfs f0, 0x10(r1)
    stfs f0, 0x570(r4)
    lwz r4, 0x4(r28)
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801C9C68(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lwz r4, 0x38(r3)
    lwz r8, 0x4(r3)
    cmpwi r4, 0x0
    addi r30, r8, 0xb0
    ble lbl_fn_801C9C68_00000F38
    subi r5, r4, 0x1
    lis r0, 0x4330
    xoris r4, r5, 0x8000
    stw r4, 0x4c(r1)
    lis r4, lbl_8073B988@ha
    lfs f6, lbl_80882918
    stw r0, 0x48(r1)
    addi r6, r1, 0x2c
    lfd f3, lbl_8073B988@l(r4)
    addi r7, r1, 0x38
    lfd f0, 0x48(r1)
    lis r4, lbl_8073B980@ha
    lfs f5, 0xc(r3)
    fsubs f7, f0, f3
    lfs f4, 0x18(r3)
    lfs f3, 0x8(r3)
    fsubs f8, f5, f4
    lfs f0, 0x14(r3)
    fmuls f10, f7, f6
    fsubs f7, f3, f0
    lfs f5, 0x10(r3)
    lfs f3, 0x1c(r3)
    fmuls f6, f8, f10
    stfs f7, 0x14(r1)
    fsubs f9, f5, f3
    fmuls f5, f7, f10
    stw r5, 0x38(r3)
    fadds f4, f6, f4
    fmuls f7, f9, f10
    stfs f8, 0x18(r1)
    fadds f0, f5, f0
    stfs f4, 0x30(r1)
    fadds f4, f7, f3
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r6), 0, 0
    fmr f2, f4
    psq_st f1, 0x528(r8), 0, 0
    stfs f2, 0x530(r8)
    lwz r5, 0x4(r3)
    lfs f3, 0x30(r3)
    lfs f0, 0x24(r3)
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    fsubs f0, f3, f0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x40(r1)
    fmr f1, f0
    lfd f2, lbl_8073B980@l(r4)
    stfs f9, 0x1c(r1)
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f4, 0x34(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80882908
    fcmpo cr0, f4, f0
    ble lbl_fn_801C9C68_00000EFC
    lfs f0, lbl_8088290C
    fsubs f4, f4, f0
lbl_fn_801C9C68_00000EFC:
    lfs f0, lbl_80882910
    fcmpo cr0, f4, f0
    bge lbl_fn_801C9C68_00000F10
    lfs f0, lbl_8088290C
    fadds f4, f4, f0
lbl_fn_801C9C68_00000F10:
    lfs f3, lbl_80882918
    addi r3, r1, 0x38
    lfs f0, 0x3c(r1)
    lwz r4, 0x4(r31)
    fmadds f0, f4, f3, f0
    lfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
lbl_fn_801C9C68_00000F38:
    lwz r0, 0x22c(r30)
    cmpwi r0, 0x78
    bne lbl_fn_801C9C68_00000F9C
    lfs f31, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801C9C68_00001078
    lfs f1, lbl_808828FC
    mr r3, r30
    lfs f2, lbl_80882900
    li r4, 0x0
    li r5, 0x79
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x4(r31)
    lfs f2, 0x34(r31)
    psq_l f1, 0x2c(r31), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    b lbl_fn_801C9C68_00001078
lbl_fn_801C9C68_00000F9C:
    cmpwi r0, 0x79
    bne lbl_fn_801C9C68_00001054
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801C9C68_00001078
    bl fn_80178078
    lfs f0, lbl_80882914
    fcmpo cr0, f1, f0
    ble lbl_fn_801C9C68_00001078
    lwz r31, 0x4(r31)
    addi r3, r1, 0x20
    mr r4, r31
    bl fn_80178018
    lfs f3, 0x24(r1)
    lis r3, lbl_8073B980@ha
    lfs f0, 0x538(r31)
    lfd f2, lbl_8073B980@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80882908
    fcmpo cr0, f3, f0
    ble lbl_fn_801C9C68_00001004
    lfs f0, lbl_8088290C
    fsubs f3, f3, f0
lbl_fn_801C9C68_00001004:
    lfs f0, lbl_80882910
    fcmpo cr0, f3, f0
    bge lbl_fn_801C9C68_00001018
    lfs f0, lbl_8088290C
    fadds f3, f3, f0
lbl_fn_801C9C68_00001018:
    fabs f3, f3
    lfs f0, lbl_80882904
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C9C68_00001078
    lfs f1, lbl_808828FC
    mr r3, r30
    lfs f2, lbl_80882900
    li r4, 0x0
    li r5, 0x7a
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C9C68_00001078
lbl_fn_801C9C68_00001054:
    lfs f31, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801C9C68_00001078
    li r3, 0x1
    b lbl_fn_801C9C68_0000107C
lbl_fn_801C9C68_00001078:
    li r3, 0x0
lbl_fn_801C9C68_0000107C:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801C9F2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C9F2C_000010C4
    cmpwi r4, 0x0
    ble lbl_fn_801C9F2C_000010C4
    bl dtor_80084684
lbl_fn_801C9F2C_000010C4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C9F6C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    mr r30, r6
    stw r29, 0x84(r1)
    mr r29, r5
    bl fn_801C3414
    lfs f3, lbl_80882920
    lis r3, lbl_80782400@ha
    li r4, 0x0
    lfs f0, lbl_80882924
    addi r3, r3, lbl_80782400@l
    stw r3, 0x0(r31)
    lwz r5, 0x4(r31)
    li r0, 0xf
    stfs f0, 0x44(r31)
    addi r3, r31, 0x34
    psq_l f1, 0x0(r30), 0, 0
    stfs f3, 0x40(r31)
    lfs f2, 0x8(r30)
    stb r4, 0x4c(r31)
    lfs f0, lbl_80882928
    stb r4, 0x4d(r31)
    stb r4, 0x4e(r31)
    stw r4, 0x50(r31)
    stw r0, 0x560(r5)
    psq_st f1, 0x0(r3), 0, 0
    lwz r4, 0x4(r31)
    stfs f2, 0x3c(r31)
    addi r30, r4, 0xb0
    stfs f0, 0x38(r31)
    bl fn_805F9920
    lfs f0, lbl_8088292C
    fcmpo cr0, f1, f0
    bge lbl_fn_801C9F6C_000011C4
    lwz r5, 0x4(r31)
    addi r3, r1, 0x48
    lfs f3, lbl_80882928
    li r4, 0x79
    lfs f0, lbl_80882930
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x34(r31), 0, 0
    stfs f2, 0x3c(r31)
    b lbl_fn_801C9F6C_000011D0
lbl_fn_801C9F6C_000011C4:
    addi r3, r31, 0x34
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801C9F6C_000011D0:
    lfs f6, 0x3c(r31)
    addi r3, r1, 0x2c
    lfs f0, lbl_80882934
    addi r5, r1, 0x14
    lfs f5, 0x38(r31)
    li r4, 0x65
    lfs f4, 0x34(r31)
    fmuls f7, f6, f0
    lfs f3, 0x8(r29)
    fmuls f8, f5, f0
    fmuls f9, f4, f0
    lfs f0, 0x4(r29)
    fsubs f10, f3, f7
    fsubs f11, f0, f8
    lfs f3, 0x0(r29)
    lfs f0, lbl_80882938
    fsubs f3, f3, f9
    stfs f11, 0x30(r1)
    fmr f2, f10
    stfs f3, 0x2c(r1)
    fmuls f6, f6, f0
    lwz r6, 0x4(r31)
    psq_l f1, 0x0(r3), 0, 0
    fmuls f5, f5, f0
    fmuls f4, f4, f0
    psq_st f1, 0x28(r31), 0, 0
    stfs f2, 0x30(r31)
    lfs f0, 0x530(r6)
    lfs f3, 0x52c(r6)
    fsubs f2, f0, f6
    lfs f0, 0x528(r6)
    fsubs f3, f3, f5
    stfs f9, 0x20(r1)
    fsubs f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    stfs f2, 0x10(r31)
    stfs f8, 0x24(r1)
    lwz r3, lbl_8087F430
    stfs f7, 0x28(r1)
    stfs f10, 0x34(r1)
    stfs f4, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f2, 0x1c(r1)
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_801C9F6C_000012AC
    lfs f3, 0xc(r31)
    lfs f0, lbl_8088293C
    fcmpo cr0, f3, f0
    ble lbl_fn_801C9F6C_000012AC
    stfs f0, 0xc(r31)
lbl_fn_801C9F6C_000012AC:
    li r0, 0x1
    stw r0, 0x34c(r30)
    lfs f0, lbl_80882930
    mr r3, r30
    stfs f0, 0x24c(r30)
    li r4, 0x0
    lfs f1, lbl_80882928
    li r5, 0x16b
    lfs f2, lbl_80882940
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882944
    li r3, 0xcd
    stfs f0, 0x238(r30)
    bl fn_80219E6C
    lwz r4, 0x4(r31)
    lwz r0, 0x638(r4)
    stw r0, 0x63c(r4)
    stw r3, 0x638(r4)
    mr r3, r31
    lwz r4, 0x4(r31)
    lfs f2, 0x10(r31)
    addi r4, r4, 0xf6c
    psq_l f1, 0x8(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lwz r5, 0x4(r31)
    lwz r4, 0x638(r5)
    lfs f0, 0x58(r4)
    stfs f0, 0xf78(r5)
    lfs f0, 0x18(r31)
    stfs f0, 0x48(r31)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_801CA1E0(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    lfs f0, lbl_80882920
    stw r0, 0x2f4(r1)
    addi r4, r1, 0xf8
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    stw r31, 0x2cc(r1)
    stw r30, 0x2c8(r1)
    li r30, 0x0
    stw r29, 0x2c4(r1)
    mr r29, r3
    stw r28, 0x2c0(r1)
    addi r28, r1, 0xec
    lfs f3, 0x40(r3)
    lwz r5, 0x4(r3)
    fdivs f7, f3, f0
    lfs f3, 0x18(r3)
    lfs f4, 0x2c(r3)
    addi r31, r5, 0xb0
    lfs f0, 0x14(r3)
    lfs f6, 0x1c(r3)
    fsubs f10, f3, f4
    lfs f3, 0x28(r3)
    lfs f5, 0x30(r3)
    fsubs f9, f0, f3
    lfs f0, lbl_80882948
    fsubs f11, f6, f5
    fmuls f8, f10, f7
    stfs f9, 0xa4(r1)
    fmuls f6, f9, f7
    fmuls f7, f11, f7
    stfs f10, 0xa8(r1)
    fadds f4, f8, f4
    fadds f3, f6, f3
    stfs f11, 0xac(r1)
    stfs f4, 0xfc(r1)
    fadds f4, f7, f5
    stfs f3, 0xf8(r1)
    fmr f2, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lfs f2, 0x3c(r3)
    psq_l f1, 0x34(r3), 0, 0
    fabs f3, f2
    stfs f6, 0x98(r1)
    stfs f8, 0x9c(r1)
    frsp f3, f3
    stfs f7, 0xa0(r1)
    fcmpo cr0, f3, f0
    stfs f4, 0x100(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xf4(r1)
    bge lbl_fn_801CA1E0_00001458
    lfs f3, 0xec(r1)
    lfs f0, lbl_80882928
    fcmpo cr0, f3, f0
    ble lbl_fn_801CA1E0_0000144C
    lfs f0, lbl_8088294C
    b lbl_fn_801CA1E0_00001450
lbl_fn_801CA1E0_0000144C:
    lfs f0, lbl_80882950
lbl_fn_801CA1E0_00001450:
    stfs f0, 0x90(r1)
    b lbl_fn_801CA1E0_0000146C
lbl_fn_801CA1E0_00001458:
    frsp f2, f2
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_801CA1E0_0000146C:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1b0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882928
    addi r4, r1, 0x80
    lfs f30, 0x1b8(r1)
    mr r5, r4
    lfs f31, 0x1b4(r1)
    addi r3, r1, 0x1e0
    lfs f13, 0x1b0(r1)
    lfs f12, 0x1c8(r1)
    lfs f11, 0x1c4(r1)
    lfs f10, 0x1c0(r1)
    lfs f9, 0x1d8(r1)
    lfs f8, 0x1d4(r1)
    lfs f7, 0x1d0(r1)
    lfs f6, 0x1dc(r1)
    lfs f5, 0x1cc(r1)
    lfs f4, 0x1bc(r1)
    lfs f0, lbl_80882930
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x210(r1)
    stfs f3, 0x214(r1)
    stfs f3, 0x218(r1)
    stfs f0, 0x21c(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x1e0(r1)
    stfs f31, 0x1e4(r1)
    stfs f30, 0x1e8(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1f0(r1)
    stfs f11, 0x1f4(r1)
    stfs f12, 0x1f8(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x200(r1)
    stfs f8, 0x204(r1)
    stfs f9, 0x208(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1ec(r1)
    stfs f5, 0x1fc(r1)
    stfs f6, 0x20c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80882948
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801CA1E0_00001588
    lfs f3, 0x84(r1)
    lfs f0, lbl_80882928
    fcmpo cr0, f3, f0
    ble lbl_fn_801CA1E0_00001578
    lfs f0, lbl_8088294C
    b lbl_fn_801CA1E0_0000157C
lbl_fn_801CA1E0_00001578:
    lfs f0, lbl_80882950
lbl_fn_801CA1E0_0000157C:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_801CA1E0_0000159C
lbl_fn_801CA1E0_00001588:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_801CA1E0_0000159C:
    lfs f2, lbl_80882928
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    li r3, 0xcd
    lwz r4, 0x4(r29)
    stfs f2, 0x94(r1)
    stfs f2, 0xf4(r1)
    frsp f2, f2
    psq_st f1, 0x534(r4), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x53c(r4)
    bl fn_80219E6C
    lwz r4, 0x4(r29)
    lfs f0, lbl_80882928
    lwz r0, 0x638(r4)
    stw r0, 0x63c(r4)
    stw r3, 0x638(r4)
    lfs f3, 0x40(r29)
    fcmpo cr0, f3, f0
    ble lbl_fn_801CA1E0_00001604
    lwz r3, lbl_8087EFA8
    lfs f0, 0x238(r31)
    lfs f4, 0x3a4(r3)
    fnmsubs f0, f4, f0, f3
    stfs f0, 0x40(r29)
    b lbl_fn_801CA1E0_0000161C
lbl_fn_801CA1E0_00001604:
    lwz r3, lbl_8087EFA8
    lfs f3, 0x238(r31)
    lfs f4, 0x3a4(r3)
    lfs f0, 0x44(r29)
    fnmsubs f0, f4, f3, f0
    stfs f0, 0x44(r29)
lbl_fn_801CA1E0_0000161C:
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882954
    fsubs f0, f1, f0
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_801CA1E0_00001648
    lfs f0, lbl_80882940
    stfs f0, 0x238(r31)
lbl_fn_801CA1E0_00001648:
    lfs f3, 0x44(r29)
    lfs f0, lbl_80882928
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801CA1E0_00001660
    li r30, 0x1
lbl_fn_801CA1E0_00001660:
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801CA1E0_00001A14
    lfs f30, lbl_80882958
    li r4, 0x68
    lfs f31, lbl_8088295C
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_801CA1E0_00001698
    lfs f0, lbl_80882960
    lfs f31, lbl_80882964
    fmuls f30, f30, f0
lbl_fn_801CA1E0_00001698:
    lfs f3, 0x40(r29)
    lfs f0, lbl_80882928
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801CA1E0_000016EC
    lwz r3, lbl_8087F430
    li r4, 0x65
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_801CA1E0_000016D4
    lfs f3, 0x18(r29)
    lfs f0, lbl_8088293C
    fcmpo cr0, f3, f0
    ble lbl_fn_801CA1E0_000016D4
    stfs f0, 0x18(r29)
lbl_fn_801CA1E0_000016D4:
    fmr f2, f30
    lfs f1, lbl_80882934
    fmr f3, f31
    mr r3, r29
    li r4, 0x0
    bl fn_801C3458
lbl_fn_801CA1E0_000016EC:
    lfs f2, 0x3c(r29)
    addi r28, r1, 0xe0
    psq_l f1, 0x34(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80882948
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xe8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801CA1E0_00001738
    lfs f3, 0xe0(r1)
    lfs f0, lbl_80882928
    fcmpo cr0, f3, f0
    ble lbl_fn_801CA1E0_0000172C
    lfs f0, lbl_8088294C
    b lbl_fn_801CA1E0_00001730
lbl_fn_801CA1E0_0000172C:
    lfs f0, lbl_80882950
lbl_fn_801CA1E0_00001730:
    stfs f0, 0x48(r1)
    b lbl_fn_801CA1E0_0000174C
lbl_fn_801CA1E0_00001738:
    frsp f2, f2
    lfs f1, 0xe0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801CA1E0_0000174C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x140
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882928
    addi r4, r1, 0x38
    lfs f31, 0x148(r1)
    mr r5, r4
    lfs f30, 0x144(r1)
    addi r3, r1, 0x170
    lfs f13, 0x140(r1)
    lfs f12, 0x158(r1)
    lfs f11, 0x154(r1)
    lfs f10, 0x150(r1)
    lfs f9, 0x168(r1)
    lfs f8, 0x164(r1)
    lfs f7, 0x160(r1)
    lfs f6, 0x16c(r1)
    lfs f5, 0x15c(r1)
    lfs f4, 0x14c(r1)
    lfs f0, lbl_80882930
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xe8(r1)
    stfs f3, 0x1a0(r1)
    stfs f3, 0x1a4(r1)
    stfs f3, 0x1a8(r1)
    stfs f0, 0x1ac(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x170(r1)
    stfs f30, 0x174(r1)
    stfs f31, 0x178(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x180(r1)
    stfs f11, 0x184(r1)
    stfs f12, 0x188(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x190(r1)
    stfs f8, 0x194(r1)
    stfs f9, 0x198(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x17c(r1)
    stfs f5, 0x18c(r1)
    stfs f6, 0x19c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882948
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801CA1E0_00001868
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882928
    fcmpo cr0, f3, f0
    ble lbl_fn_801CA1E0_00001858
    lfs f0, lbl_8088294C
    b lbl_fn_801CA1E0_0000185C
lbl_fn_801CA1E0_00001858:
    lfs f0, lbl_80882950
lbl_fn_801CA1E0_0000185C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801CA1E0_0000187C
lbl_fn_801CA1E0_00001868:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801CA1E0_0000187C:
    lfs f2, lbl_80882928
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    lwz r5, 0x4(r29)
    li r4, 0x0
    stfs f2, 0x4c(r1)
    stfs f2, 0xe8(r1)
    frsp f2, f2
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
    psq_st f1, 0x0(r28), 0, 0
    lfs f30, 0x234(r31)
    bl fn_80097D7C
    lfs f0, lbl_80882934
    fsubs f0, f1, f0
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_801CA1E0_00001908
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_801CA1E0_000018EC
    li r0, 0x1
    stb r0, 0x4c(r29)
    li r30, 0x1
lbl_fn_801CA1E0_000018EC:
    lwz r3, lbl_8087F0A8
    li r4, 0x1
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_801CA1E0_00001908
    li r30, 0x1
lbl_fn_801CA1E0_00001908:
    lwz r3, 0x4(r29)
    addi r5, r1, 0x134
    lfs f2, 0x10(r29)
    addi r6, r1, 0x128
    addi r4, r3, 0xf6c
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lis r3, 0x8000
    addi r7, r3, 0x20
    lfs f3, lbl_80882968
    stfs f2, 0x8(r4)
    li r0, 0x0
    addi r4, r1, 0x270
    li r8, 0x0
    lwz r10, 0x4(r29)
    li r9, 0x0
    lwz r3, 0x638(r10)
    lfs f0, 0x58(r3)
    stfs f0, 0xf78(r10)
    lwz r10, 0x4(r29)
    lwz r3, lbl_8087EE98
    psq_l f1, 0x528(r10), 0, 0
    lfs f2, 0x530(r10)
    stfs f2, 0x13c(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x18(r29)
    fadds f0, f3, f0
    stfs f0, 0x138(r1)
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x12c(r1)
    stfs f2, 0x130(r1)
    fadds f0, f0, f3
    stw r0, 0x2a4(r1)
    stfs f0, 0x12c(r1)
    stw r0, 0x2a8(r1)
    stw r0, 0x2ac(r1)
    stw r0, 0x2b0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801CA1E0_000019E4
    lwz r3, lbl_8087F048
    lfs f3, lbl_8088296C
    addis r3, r3, 0x4
    lfs f0, lbl_80882930
    stfs f3, -0x1cfc(r3)
    stfs f3, -0x1cf8(r3)
    stfs f3, -0x1cf4(r3)
    stfs f3, 0xd0(r1)
    stfs f3, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f0, -0x1cf0(r3)
    b lbl_fn_801CA1E0_00001A98
lbl_fn_801CA1E0_000019E4:
    lwz r3, lbl_8087F048
    lfs f0, lbl_80882930
    addis r3, r3, 0x4
    stfs f0, 0xc0(r1)
    stfs f0, -0x1cfc(r3)
    stfs f0, -0x1cf8(r3)
    stfs f0, -0x1cf4(r3)
    stfs f0, 0xc4(r1)
    stfs f0, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f0, -0x1cf0(r3)
    b lbl_fn_801CA1E0_00001A98
lbl_fn_801CA1E0_00001A14:
    lwz r5, 0x648(r3)
    addi r4, r3, 0xc58
    addi r3, r1, 0xb0
    lwz r5, 0x4(r5)
    bl fn_8011BF3C
    addi r3, r1, 0xb0
    lfs f2, 0xb8(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x8(r29), 0, 0
    li r4, 0x0
    stfs f2, 0x10(r29)
    lfs f30, 0x234(r31)
    bl fn_80097D7C
    lfs f0, lbl_80882970
    fsubs f0, f1, f0
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_801CA1E0_00001A6C
    li r0, 0x1
    stb r0, 0x4c(r29)
    li r30, 0x1
lbl_fn_801CA1E0_00001A6C:
    lbz r0, 0x4d(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801CA1E0_00001A98
    lwz r3, lbl_8087F0A8
    li r4, 0x9
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_801CA1E0_00001A98
    li r0, 0x0
    stb r0, 0x4d(r29)
lbl_fn_801CA1E0_00001A98:
    cmpwi r30, 0x0
    beq lbl_fn_801CA1E0_00001BE0
    lbz r0, 0x4c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801CA1E0_00001BE0
    lwz r0, 0x50(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801CA1E0_00001BE0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_801CA1E0_00001AF8
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x28
    bne lbl_fn_801CA1E0_00001AF8
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x8
    bne lbl_fn_801CA1E0_00001AF8
    lfs f0, 0x48(r29)
    stfs f0, 0xc(r29)
    stfs f0, 0x18(r29)
lbl_fn_801CA1E0_00001AF8:
    psq_l f1, 0x14(r29), 0, 0
    addi r4, r1, 0x11c
    lfs f2, 0x1c(r29)
    addi r5, r29, 0x8
    stfs f2, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x18(r29)
    stfs f0, 0x120(r1)
    lwz r3, 0x4(r29)
    bl fn_801A4E08
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_801CA1E0_00001BE0
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x28
    bne lbl_fn_801CA1E0_00001BE0
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x8
    bne lbl_fn_801CA1E0_00001BE0
    li r0, 0x0
    stw r0, 0x254(r1)
    addi r28, r1, 0x110
    addi r31, r1, 0x104
    stw r0, 0x258(r1)
    lfs f4, lbl_80882960
    stw r0, 0x25c(r1)
    lfs f0, lbl_80882974
    stw r0, 0x260(r1)
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f5, 0x114(r1)
    lfs f3, 0x108(r1)
    fadds f4, f5, f4
    stfs f2, 0x118(r1)
    fsubs f0, f3, f0
    stfs f2, 0x10c(r1)
    stfs f4, 0x114(r1)
    stfs f0, 0x108(r1)
    lwz r3, 0x4(r29)
    bl fn_80179D44
    oris r7, r3, 0x8000
    lwz r3, lbl_8087EE98
    mr r5, r28
    mr r6, r31
    addi r4, r1, 0x220
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801CA1E0_00001BE0
    lfs f0, 0x228(r1)
    stfs f0, 0xc(r29)
lbl_fn_801CA1E0_00001BE0:
    lbz r0, 0x4e(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801CA1E0_00001BF8
    li r0, 0x0
    stb r0, 0x4c(r29)
    li r30, 0x1
lbl_fn_801CA1E0_00001BF8:
    cmpwi r30, 0x0
    beq lbl_fn_801CA1E0_00001C2C
    lbz r0, 0x4c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801CA1E0_00001C2C
    lwz r3, lbl_8087F430
    li r4, 0x65
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_801CA1E0_00001C2C
    lfs f0, 0x48(r29)
    stfs f0, 0xc(r29)
    stfs f0, 0x18(r29)
lbl_fn_801CA1E0_00001C2C:
    psq_l f31, 0x2e8(r1), 0, 0
    mr r3, r30
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    lwz r31, 0x2cc(r1)
    lwz r30, 0x2c8(r1)
    lwz r29, 0x2c4(r1)
    lwz r28, 0x2c0(r1)
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}
