#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D124(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80011410(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_80013484(void);
extern void fn_8004D388(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800A555C(void);
extern void fn_800A55D4(void);
extern void fn_800A56A8(void);
extern void fn_800F52F8(void);
extern void fn_800F72CC(void);
extern void fn_800F7FF0(void);
extern void fn_800F8548(void);
extern void fn_80102824(void);
extern void fn_801028E4(void);
extern void fn_801162A0(void);
extern void fn_80129978(void);
extern void fn_80129A48(void);
extern void fn_8012A190(void);
extern void fn_80139550(void);
extern void fn_8013A13C(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_8013C480(void);
extern void fn_8013CB68(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_801446F0(void);
extern void fn_80149A30(void);
extern void fn_801533C8(void);
extern void fn_8015495C(void);
extern void fn_8015E7A0(void);
extern void fn_80163E70(void);
extern void fn_8016DDB0(void);
extern void fn_8016E970(void);
extern void fn_80176ACC(void);
extern void fn_801A03E8(void);
extern void fn_80219E6C(void);
extern void fn_802F0964(void);
extern void fn_802F0988(void);
extern void fn_802F0990(void);
extern void fn_802F0998(void);
extern void fn_802F09D4(void);
extern void fn_802F0F60(void);
extern void fn_802F1240(void);
extern void fn_802F1320(void);
extern void fn_8037EF30(void);
extern void fn_805A40BC(void);
extern void fn_805A4258(void);
extern void fn_805A4F20(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 jumptable_807876D0[];
extern u8 jumptable_80787718[];
extern u8 jumptable_80787760[];
extern u8 lbl_80748488[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884850;
extern u32 lbl_80884854;
extern u32 lbl_80884858;
extern u32 lbl_8088485C;
extern u32 lbl_80884860;
extern u32 lbl_80884864;
extern u32 lbl_80884868;
extern u32 lbl_8088486C;
extern u32 lbl_80884870;
extern u32 lbl_80884874;
extern u32 lbl_80884878;
extern u32 lbl_8088487C;
extern u32 lbl_80884880;
extern u32 lbl_80884884;
extern u32 lbl_80884888;
extern u32 lbl_8088488C;
extern u32 lbl_80884890;
extern u32 lbl_80884894;
extern u32 lbl_80884898;
extern u32 lbl_8088489C;
extern u32 lbl_808848A0;
extern u32 lbl_808848A4;

/* Function declarations */
void fn_802EEFE0(void);
void fn_802EF01C(void);
void fn_802EF0FC(void);
void fn_802EF124(void);
void fn_802EF16C(void);
void fn_802EF5FC(void);
void fn_802F0328(void);

asm void fn_802EEFE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80149A30
    lwz r3, 0x14e8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802EEFE0_00000028
    bl fn_80149A30
lbl_fn_802EEFE0_00000028:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EF01C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f3, lbl_80884850
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f2, 0x10(r4)
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    lwz r0, 0x1548(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802EF01C_00000104
    lwz r0, 0x14e8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802EF01C_000000BC
    stw r0, 0x4(r4)
    li r5, 0x1
    lwz r3, 0x14e8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1558(r31)
    subi r0, r3, 0x1
    stw r0, 0x1558(r31)
    b lbl_fn_802EF01C_000000FC
lbl_fn_802EF01C_000000BC:
    lwz r0, 0x152c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802EF01C_000000FC
    stw r0, 0x4(r4)
    li r5, 0x1
    lwz r3, 0x152c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x154c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802EF01C_000000FC
    lwz r3, 0x1554(r31)
    subi r0, r3, 0x1
    stw r0, 0x1554(r31)
lbl_fn_802EF01C_000000FC:
    li r3, 0x0
    b lbl_fn_802EF01C_00000108
lbl_fn_802EF01C_00000104:
    li r3, 0x1
lbl_fn_802EF01C_00000108:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EF0FC(void)
{
    nofralloc
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bnelr
    lwz r12, 0x0(r3)
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_802EF124(void)
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

asm void fn_802EF16C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802EF16C_000005F4
    lwz r0, 0x14cc(r3)
    li r30, 0x0
    lwz r7, 0x58c(r3)
    cmplwi r4, 0x11
    clrlwi r6, r0, 4
    stw r30, 0x14bc(r3)
    oris r6, r6, 0x800
    stw r30, 0x14c0(r3)
    stw r30, 0x14c4(r3)
    stw r30, 0x14c8(r3)
    stw r6, 0x14cc(r3)
    stw r30, 0x14d0(r3)
    stw r4, 0x58c(r3)
    bgt lbl_fn_802EF16C_000005F4
    lis r5, jumptable_807876D0@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_807876D0@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    oris r0, r6, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_802EF16C_000005F4
    oris r0, r6, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_802EF16C_000005F4
    lfs f1, lbl_80884858
    li r4, 0x143
    lfs f2, lbl_80884850
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    b lbl_fn_802EF16C_000005F4
    lfs f1, lbl_80884858
    li r4, 0x13f
    lfs f2, lbl_80884850
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f2, 0x14e0(r31)
    addi r4, r31, 0x14d8
    lfs f0, lbl_80884864
    addi r30, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r4), 0, 0
    stw r3, 0x14c8(r31)
    frsp f3, f3
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802EF16C_000002C4
    lfs f3, 0x50(r1)
    lfs f0, lbl_80884850
    fcmpo cr0, f3, f0
    ble lbl_fn_802EF16C_000002B8
    lfs f0, lbl_80884868
    b lbl_fn_802EF16C_000002BC
lbl_fn_802EF16C_000002B8:
    lfs f0, lbl_8088486C
lbl_fn_802EF16C_000002BC:
    stfs f0, 0x48(r1)
    b lbl_fn_802EF16C_000002D8
lbl_fn_802EF16C_000002C4:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802EF16C_000002D8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884850
    addi r4, r1, 0x38
    lfs f30, 0x68(r1)
    mr r5, r4
    lfs f31, 0x64(r1)
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
    lfs f0, lbl_80884858
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f30, 0x98(r1)
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
    lfs f0, lbl_80884864
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802EF16C_000003F4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884850
    fcmpo cr0, f3, f0
    ble lbl_fn_802EF16C_000003E4
    lfs f0, lbl_80884868
    b lbl_fn_802EF16C_000003E8
lbl_fn_802EF16C_000003E4:
    lfs f0, lbl_8088486C
lbl_fn_802EF16C_000003E8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802EF16C_00000408
lbl_fn_802EF16C_000003F4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802EF16C_00000408:
    addi r3, r1, 0x44
    lfs f2, lbl_80884850
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x14cc(r31)
    lfs f0, 0x54(r1)
    rlwinm r0, r0, 0, 2, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x538(r31)
    stw r0, 0x14cc(r31)
    b lbl_fn_802EF16C_000005F4
    lfs f1, lbl_80884858
    li r4, 0x141
    lfs f2, lbl_80884850
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    b lbl_fn_802EF16C_000005F4
    lfs f1, lbl_80884858
    li r4, 0x144
    lfs f2, lbl_80884850
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    b lbl_fn_802EF16C_000005F4
    lwz r0, 0xf14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802EF16C_000005F4
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802EF16C_000004BC
    cmpwi r7, 0x2
    beq lbl_fn_802EF16C_000004BC
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_802EF16C_000004BC:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_802EF16C_000004D4
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
lbl_fn_802EF16C_000004D4:
    lfs f1, lbl_80884858
    mr r3, r31
    lfs f2, lbl_80884850
    li r4, 0x2e
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r3, 0x14e8(r31)
    lwz r0, 0x14cc(r31)
    cmpwi r3, 0x0
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    beq lbl_fn_802EF16C_000005F4
    bl fn_80176ACC
    lwz r3, 0x14e8(r31)
    li r30, 0x0
    lfs f1, lbl_80884860
    stw r30, 0xf1c(r3)
    lwz r3, 0x14e8(r31)
    addi r3, r3, 0x10d8
    bl fn_80129A48
    stw r30, 0x14e8(r31)
    b lbl_fn_802EF16C_000005F4
    oris r0, r6, 0x4000
    stw r0, 0x14cc(r3)
    lfs f1, lbl_80884850
    li r4, 0x0
    lfs f2, lbl_80884854
    li r5, 0x142
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802EF16C_000005F4
    lwz r3, lbl_8087F8A0
    mr r4, r31
    lwz r3, 0x48(r3)
    bl fn_80163E70
    b lbl_fn_802EF16C_000005F4
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x152c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802EF16C_000005F4
    lis r4, lbl_80748488@ha
    li r5, 0x0
    addi r4, r4, lbl_80748488@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x60
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802EF16C_000005AC
    b lbl_fn_802EF16C_000005B8
lbl_fn_802EF16C_000005AC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r30, r3, r0
lbl_fn_802EF16C_000005B8:
    cmpwi r30, 0x0
    stw r30, 0x1530(r31)
    beq lbl_fn_802EF16C_000005F4
    lwz r3, 0x152c(r31)
    stw r30, 0xf1c(r3)
    b lbl_fn_802EF16C_000005F4
    lfs f1, lbl_80884858
    li r4, 0x143
    lfs f2, lbl_80884850
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
lbl_fn_802EF16C_000005F4:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_802EF5FC(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    stfd f28, 0x1f0(r1)
    psq_st f28, 0x1f8(r1), 0, 0
    stw r31, 0x1ec(r1)
    mr r31, r3
    stw r30, 0x1e8(r1)
    stw r29, 0x1e4(r1)
    stw r28, 0x1e0(r1)
    lwz r7, 0x38(r3)
    lwz r4, 0x14c0(r3)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    li r0, 0x0
    beq lbl_fn_802EF5FC_00000694
    clrlwi r4, r7, 31
    cmplwi r4, 0x1
    beq lbl_fn_802EF5FC_00000694
    li r0, 0x1
lbl_fn_802EF5FC_00000694:
    cmpwi r0, 0x0
    beq lbl_fn_802EF5FC_000006B0
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802EF5FC_000006B0
    li r6, 0x1
lbl_fn_802EF5FC_000006B0:
    cmpwi r6, 0x0
    beq lbl_fn_802EF5FC_000006E4
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802EF5FC_000006D8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802EF5FC_000006D8
    li r4, 0x1
lbl_fn_802EF5FC_000006D8:
    cmpwi r4, 0x0
    bne lbl_fn_802EF5FC_000006E4
    li r5, 0x1
lbl_fn_802EF5FC_000006E4:
    cmpwi r5, 0x0
    beq lbl_fn_802EF5FC_00000744
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_802EF5FC_00000744
    lwz r0, 0xf14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802EF5FC_00000744
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802EF5FC_00000744
    lwz r0, 0x152c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EF5FC_00000744
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802EF5FC_00000744:
    lwz r4, 0x58c(r31)
    cmplwi r4, 0x11
    bgt lbl_fn_802EF5FC_000012F0
    lis r3, jumptable_80787718@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_80787718@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_0000079C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802EF5FC_0000079C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802EF5FC_00000924
    lwz r0, 0x1518(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EF5FC_0000090C
    lwz r0, 0x14e8(r31)
    lwz r3, 0xd1c(r31)
    cmpwi r0, 0x0
    stw r3, 0x14d4(r31)
    beq lbl_fn_802EF5FC_000008F0
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_000008F0
    lis r4, lbl_80748488@ha
    addi r29, r3, 0xb0
    addi r4, r4, lbl_80748488@l
    li r5, 0x0
    mr r3, r29
    addi r4, r4, 0x8b
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802EF5FC_00000814
    li r0, 0x0
    b lbl_fn_802EF5FC_00000820
lbl_fn_802EF5FC_00000814:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r0, r3, r0
lbl_fn_802EF5FC_00000820:
    cmpwi r0, 0x0
    beq lbl_fn_802EF5FC_00000858
    lwz r3, 0x14e8(r31)
    lis r5, lbl_80748488@ha
    lwz r4, 0x14d4(r31)
    addi r5, r5, lbl_80748488@l
    lis r6, lbl_807C7030@ha
    lfs f1, lbl_80884860
    addi r3, r3, 0x10d8
    addi r4, r4, 0xb0
    addi r5, r5, 0x8b
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    b lbl_fn_802EF5FC_000008F0
lbl_fn_802EF5FC_00000858:
    lwz r3, 0x14d4(r31)
    lis r4, lbl_80748488@ha
    addi r4, r4, lbl_80748488@l
    li r5, 0x0
    addi r29, r3, 0xb0
    mr r3, r29
    addi r4, r4, 0x90
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802EF5FC_00000888
    li r0, 0x0
    b lbl_fn_802EF5FC_00000894
lbl_fn_802EF5FC_00000888:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r0, r3, r0
lbl_fn_802EF5FC_00000894:
    cmpwi r0, 0x0
    beq lbl_fn_802EF5FC_000008CC
    lwz r3, 0x14e8(r31)
    lis r5, lbl_80748488@ha
    lwz r4, 0x14d4(r31)
    addi r5, r5, lbl_80748488@l
    lis r6, lbl_807C7030@ha
    lfs f1, lbl_80884860
    addi r3, r3, 0x10d8
    addi r4, r4, 0xb0
    addi r5, r5, 0x90
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    b lbl_fn_802EF5FC_000008F0
lbl_fn_802EF5FC_000008CC:
    lwz r3, 0x14e8(r31)
    lis r6, lbl_807C7030@ha
    lwz r4, 0x14d4(r31)
    addi r6, r6, lbl_807C7030@l
    lfs f1, lbl_80884860
    addi r3, r3, 0x10d8
    addi r4, r4, 0xb0
    li r5, 0x0
    bl fn_80129978
lbl_fn_802EF5FC_000008F0:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00000924
lbl_fn_802EF5FC_0000090C:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802EF5FC_00000924:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802EF5FC_0000096C
    cmpwi r4, 0x8
    mr r3, r31
    li r4, 0xb
    bne lbl_fn_802EF5FC_0000095C
    li r4, 0xa
lbl_fn_802EF5FC_0000095C:
    lwz r12, 0x0(r3)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802EF5FC_0000096C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802EF5FC_000009A8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r4, 0x14c4(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802EF5FC_000009A8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802EF5FC_00000A80
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x1518(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802EF5FC_000009F8
    lwz r0, 0x14f0(r31)
    stw r0, 0x14c0(r31)
lbl_fn_802EF5FC_000009F8:
    lwz r0, 0x1518(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EF5FC_00000A78
    lfs f30, lbl_80884870
    mr r28, r31
    li r29, 0x0
    b lbl_fn_802EF5FC_00000A68
lbl_fn_802EF5FC_00000A14:
    lwz r30, 0x14f8(r28)
    addi r3, r1, 0x5c
    lfs f0, 0x530(r31)
    lfs f3, 0xc(r30)
    lfs f5, 0x8(r30)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x4(r30)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_802EF5FC_00000A60
    stw r30, 0x1518(r31)
    fmr f30, f1
lbl_fn_802EF5FC_00000A60:
    addi r28, r28, 0x4
    addi r29, r29, 0x1
lbl_fn_802EF5FC_00000A68:
    lwz r0, 0x14f4(r31)
    cmplw r29, r0
    blt lbl_fn_802EF5FC_00000A14
    b lbl_fn_802EF5FC_00000A80
lbl_fn_802EF5FC_00000A78:
    li r0, 0x0
    stw r0, 0x1518(r31)
lbl_fn_802EF5FC_00000A80:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
    lwz r0, 0xf14(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802EF5FC_00000AAC
    mr r3, r31
    bl fn_805A40BC
lbl_fn_802EF5FC_00000AAC:
    mr r3, r31
    li r4, 0x0
    bl fn_802F1320
    b lbl_fn_802EF5FC_00001308
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802EF5FC_00000C04
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x80
    lfs f6, 0x530(r31)
    lwz r28, 0x48(r4)
    lfs f5, 0x52c(r31)
    lfs f0, 0x530(r28)
    lfs f4, 0x52c(r28)
    fsubs f6, f6, f0
    lfs f3, 0x528(r31)
    lfs f0, 0x528(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f6, 0x88(r1)
    bl fn_805F9940
    lfs f0, lbl_80884874
    fcmpo cr0, f1, f0
    bge lbl_fn_802EF5FC_00000BA8
    mr r3, r28
    li r4, 0x0
    bl fn_8016DDB0
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_00000BA8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_00000B4C
    mr r3, r31
    mr r4, r28
    bl fn_802F1240
lbl_fn_802EF5FC_00000B4C:
    lwz r8, lbl_8087F490
    li r6, 0x0
    li r7, -0x1
    li r5, 0x1
    lwz r0, 0x778(r8)
    li r4, 0x6
    li r3, 0x11
    stw r7, 0x94(r1)
    cmpwi r0, 0x0
    stw r6, 0x98(r1)
    stw r6, 0x9c(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa0(r1)
    stw r4, 0x8c(r1)
    stw r3, 0x90(r1)
    bne lbl_fn_802EF5FC_00000BA8
    stw r4, 0x764(r8)
    stw r3, 0x768(r8)
    stw r7, 0x76c(r8)
    stw r6, 0x770(r8)
    stw r6, 0x774(r8)
    stw r5, 0x778(r8)
    stw r6, 0x77c(r8)
lbl_fn_802EF5FC_00000BA8:
    lwz r0, 0x1528(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EF5FC_00000C04
    lwz r3, 0x1550(r31)
    cmpwi r3, 0x0
    blt lbl_fn_802EF5FC_00000BC8
    subi r0, r3, 0x1
    stw r0, 0x1550(r31)
lbl_fn_802EF5FC_00000BC8:
    lwz r0, 0x1550(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EF5FC_00000C04
    lwz r3, 0xf14(r31)
    li r0, 0x1
    stw r3, 0xf18(r31)
    mr r3, r31
    li r4, 0x6
    stw r0, 0xf14(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x1548(r31)
lbl_fn_802EF5FC_00000C04:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
    lwz r3, lbl_8087F8A0
    lfs f0, lbl_80884878
    lwz r3, 0x48(r3)
    lfs f3, 0x2e4(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_802EF5FC_00001308
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x10
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
    lwz r3, 0x152c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_00000F3C
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_802EF5FC_00000C80
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
lbl_fn_802EF5FC_00000C80:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802EF5FC_00000C9C
    mr r3, r31
    li r4, 0x1
    bl fn_802F1320
lbl_fn_802EF5FC_00000C9C:
    lwz r0, 0x1528(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EF5FC_00000D04
    lwz r3, 0xd1c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_00000CC8
    beq lbl_fn_802EF5FC_00000D0C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802EF5FC_00000D0C
lbl_fn_802EF5FC_00000CC8:
    lwz r3, 0x155c(r31)
    cmpwi r3, 0x0
    ble lbl_fn_802EF5FC_00000CDC
    subi r0, r3, 0x1
    stw r0, 0x155c(r31)
lbl_fn_802EF5FC_00000CDC:
    lwz r0, 0x155c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EF5FC_00000D0C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x11
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
lbl_fn_802EF5FC_00000D04:
    li r0, 0x12c
    stw r0, 0x155c(r31)
lbl_fn_802EF5FC_00000D0C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fneg f3, f1
    lfs f0, lbl_80884850
    stfs f0, 0xc(r1)
    li r4, 0x0
    lwz r3, lbl_8087EF70
    li r5, 0x1
    stfs f3, 0x8(r1)
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    addi r3, r1, 0x8
    stfs f0, 0x10(r1)
    bl fn_805F9940
    lfs f0, lbl_8088487C
    fmr f30, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_802EF5FC_00000D7C
    psq_l f1, 0x534(r31), 0, 0
    addi r3, r1, 0x8
    lfs f2, 0x53c(r31)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802EF5FC_00000F28
lbl_fn_802EF5FC_00000D7C:
    lfs f2, 0x10(r1)
    addi r29, r1, 0x8
    lwz r3, lbl_8087EFB4
    fabs f3, f2
    lfs f0, lbl_80884864
    lfs f31, 0x134(r3)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802EF5FC_00000DC4
    lfs f3, 0x8(r1)
    lfs f0, lbl_80884850
    fcmpo cr0, f3, f0
    ble lbl_fn_802EF5FC_00000DB8
    lfs f0, lbl_80884868
    b lbl_fn_802EF5FC_00000DBC
lbl_fn_802EF5FC_00000DB8:
    lfs f0, lbl_8088486C
lbl_fn_802EF5FC_00000DBC:
    stfs f0, 0x54(r1)
    b lbl_fn_802EF5FC_00000DD4
lbl_fn_802EF5FC_00000DC4:
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_802EF5FC_00000DD4:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884850
    addi r4, r1, 0x44
    lfs f28, 0x110(r1)
    mr r5, r4
    lfs f29, 0x10c(r1)
    addi r3, r1, 0x138
    lfs f13, 0x108(r1)
    lfs f12, 0x120(r1)
    lfs f11, 0x11c(r1)
    lfs f10, 0x118(r1)
    lfs f9, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f7, 0x128(r1)
    lfs f6, 0x134(r1)
    lfs f5, 0x124(r1)
    lfs f4, 0x114(r1)
    lfs f0, lbl_80884858
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f13, 0x14(r1)
    stfs f29, 0x18(r1)
    stfs f28, 0x1c(r1)
    stfs f13, 0x138(r1)
    stfs f29, 0x13c(r1)
    stfs f28, 0x140(r1)
    stfs f10, 0x20(r1)
    stfs f11, 0x24(r1)
    stfs f12, 0x28(r1)
    stfs f10, 0x148(r1)
    stfs f11, 0x14c(r1)
    stfs f12, 0x150(r1)
    stfs f7, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f9, 0x34(r1)
    stfs f7, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f9, 0x160(r1)
    stfs f4, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f4, 0x144(r1)
    stfs f5, 0x154(r1)
    stfs f6, 0x164(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80884864
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802EF5FC_00000EF0
    lfs f3, 0x48(r1)
    lfs f0, lbl_80884850
    fcmpo cr0, f3, f0
    ble lbl_fn_802EF5FC_00000EE0
    lfs f0, lbl_80884868
    b lbl_fn_802EF5FC_00000EE4
lbl_fn_802EF5FC_00000EE0:
    lfs f0, lbl_8088486C
lbl_fn_802EF5FC_00000EE4:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_802EF5FC_00000F04
lbl_fn_802EF5FC_00000EF0:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_802EF5FC_00000F04:
    addi r3, r1, 0x50
    lfs f2, lbl_80884850
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0xc(r1)
    stfs f2, 0x58(r1)
    fsubs f0, f31, f0
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
lbl_fn_802EF5FC_00000F28:
    fmr f1, f30
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_802F09D4
    b lbl_fn_802EF5FC_00000F4C
lbl_fn_802EF5FC_00000F3C:
    lfs f1, lbl_80884850
    mr r3, r31
    addi r4, r31, 0x534
    bl fn_802F09D4
lbl_fn_802EF5FC_00000F4C:
    mr r3, r31
    bl fn_802F0F60
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_00000F7C
    mr r3, r31
    li r4, 0x1
    bl fn_802F1320
    b lbl_fn_802EF5FC_00000FE4
lbl_fn_802EF5FC_00000F7C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x9
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_00000FB8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_00000FE4
    lfs f1, lbl_80884880
    addi r3, r3, 0x6c
    li r4, 0x0
    li r5, 0x0
    bl fn_8037EF30
    b lbl_fn_802EF5FC_00000FE4
lbl_fn_802EF5FC_00000FB8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_00000FDC
    li r0, 0x1
    stw r0, 0x154c(r31)
    b lbl_fn_802EF5FC_00000FE4
lbl_fn_802EF5FC_00000FDC:
    li r0, 0x0
    stw r0, 0x154c(r31)
lbl_fn_802EF5FC_00000FE4:
    lwz r0, 0xf14(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802EF5FC_00000FFC
    mr r3, r31
    li r4, 0x0
    bl fn_802F1320
lbl_fn_802EF5FC_00000FFC:
    lwz r0, 0x1554(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_802EF5FC_00001308
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x11
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EF5FC_00001308
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EF5FC_000012E0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884884
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802EF5FC_000012E0
    lwz r0, 0x152c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802EF5FC_000011A4
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_0000107C
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_802EF5FC_0000107C
    lwz r5, 0x48(r4)
    cmpwi r5, 0x0
    beq lbl_fn_802EF5FC_0000107C
    mr r4, r31
    bl fn_80102824
lbl_fn_802EF5FC_0000107C:
    lwz r3, 0x152c(r31)
    li r4, 0x1
    bl fn_8016E970
    lwz r3, 0x152c(r31)
    bl fn_801446F0
    lwz r4, 0x152c(r31)
    li r30, 0x0
    lfs f3, lbl_80884850
    addi r3, r1, 0xd8
    stw r30, 0xf1c(r4)
    li r4, 0x79
    lfs f0, lbl_80884858
    lwz r5, 0x152c(r31)
    stfs f3, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lfs f1, lbl_80884888
    addi r3, r1, 0x1a8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0x1a8
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x74(r1)
    addi r4, r1, 0x74
    lfs f5, lbl_8088485C
    li r5, -0x1
    lfs f3, 0x78(r1)
    li r6, 0x0
    lfs f0, 0x7c(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f2, f0, f5
    stfs f4, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f2, 0x7c(r1)
    psq_l f1, 0x0(r4), 0, 0
    lwz r3, 0x152c(r31)
    psq_st f1, 0x574(r3), 0, 0
    stfs f2, 0x57c(r3)
    lwz r3, 0x152c(r31)
    bl fn_8015E7A0
    lwz r0, 0x155c(r31)
    stw r30, 0x152c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EF5FC_00001180
    lwz r3, 0xf14(r31)
    li r0, 0x1
    stw r3, 0xf18(r31)
    mr r3, r31
    li r4, 0x6
    stw r0, 0xf14(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    stw r30, 0x1548(r31)
    b lbl_fn_802EF5FC_000012D4
lbl_fn_802EF5FC_00001180:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xe
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x12c
    stw r0, 0x1550(r31)
    b lbl_fn_802EF5FC_000012D4
lbl_fn_802EF5FC_000011A4:
    lwz r3, 0x14e8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802EF5FC_000012D4
    bl fn_80176ACC
    lwz r3, 0x14e8(r31)
    li r30, 0x0
    lfs f1, lbl_80884860
    stw r30, 0xf1c(r3)
    lwz r3, 0x14e8(r31)
    addi r3, r3, 0x10d8
    bl fn_80129A48
    lwz r5, 0x14e8(r31)
    addi r3, r1, 0xa8
    lfs f3, lbl_80884850
    li r4, 0x79
    lfs f0, lbl_80884858
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    lfs f1, lbl_80884888
    addi r3, r1, 0x178
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0x178
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x68(r1)
    addi r4, r1, 0x68
    lfs f5, lbl_8088485C
    li r5, -0x1
    lfs f3, 0x6c(r1)
    li r6, 0x0
    lfs f0, 0x70(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f2, f0, f5
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    psq_l f1, 0x0(r4), 0, 0
    lwz r3, 0x14e8(r31)
    psq_st f1, 0x574(r3), 0, 0
    stfs f2, 0x57c(r3)
    lwz r3, 0x14e8(r31)
    bl fn_8015E7A0
    stw r30, 0x14e8(r31)
    mr r5, r31
    li r4, 0x0
    li r6, 0x0
    lwz r3, lbl_8087F048
    bl fn_801028E4
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r0, 0xf14(r31)
    mr r3, r31
    stw r30, 0xd1c(r31)
    li r4, 0xe
    stw r0, 0xf18(r31)
    stw r30, 0xf14(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x12c
    stw r0, 0x1550(r31)
lbl_fn_802EF5FC_000012D4:
    lwz r3, 0x14bc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
lbl_fn_802EF5FC_000012E0:
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    b lbl_fn_802EF5FC_00001308
lbl_fn_802EF5FC_000012F0:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802EF5FC_00001308:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    psq_l f28, 0x1f8(r1), 0, 0
    lfd f28, 0x1f0(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    lwz r28, 0x1e0(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_802F0328(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    lfs f30, lbl_80884850
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    lfs f29, lbl_80884858
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x8c
    stw r30, 0x118(r1)
    addi r4, r31, 0x534
    bl fn_8001047C
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802F0328_0000192C
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0xa
    bgt lbl_fn_802F0328_00001938
    lis r3, jumptable_80787760@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80787760@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802F0328_00001938
    lwz r3, 0x14c0(r31)
    lwz r0, 0x14f0(r31)
    cmpw r3, r0
    ble lbl_fn_802F0328_00001938
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802F0328_00001938
    lwz r3, 0x1518(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802F0328_00001408
    lwz r3, 0x14d4(r31)
    bl fn_8013C38C
    b lbl_fn_802F0328_0000140C
lbl_fn_802F0328_00001408:
    addi r3, r3, 0x4
lbl_fn_802F0328_0000140C:
    mr r4, r3
    addi r3, r1, 0x80
    bl fn_8001047C
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x74
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_80884864
    fcmpo cr0, f1, f0
    blt lbl_fn_802F0328_00001448
    addi r3, r1, 0x74
    bl fn_800F7FF0
lbl_fn_802F0328_00001448:
    addi r3, r31, 0x14d8
    addi r4, r1, 0x74
    bl fn_8000D124
    lfs f0, lbl_80884850
    addi r3, r31, 0xb0
    stfs f0, 0x14dc(r31)
    li r4, 0x0
    bl fn_80139550
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802F0328_00001490
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_802F0328_00001490:
    lfs f0, lbl_8088488C
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_802F0328_00001938
    addi r3, r1, 0x2c
    addi r4, r31, 0x14d8
    bl fn_80011034
    addi r3, r1, 0x8c
    addi r4, r1, 0x2c
    bl fn_8000D124
    b lbl_fn_802F0328_00001938
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802F0328_00001524
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_802F0328_00001938
    lwz r5, 0x14bc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884850
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14bc(r31)
    lfs f2, lbl_80884854
    li r5, 0x140
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802F0328_00001938
lbl_fn_802F0328_00001524:
    cmpwi r0, 0x1
    bne lbl_fn_802F0328_00001938
    lwz r3, 0x1518(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802F0328_00001544
    lwz r3, 0x14d4(r31)
    bl fn_8013C38C
    b lbl_fn_802F0328_00001548
lbl_fn_802F0328_00001544:
    addi r3, r3, 0x4
lbl_fn_802F0328_00001548:
    mr r4, r3
    addi r3, r1, 0x68
    bl fn_8001047C
    addi r3, r1, 0x5c
    addi r4, r1, 0x68
    addi r5, r31, 0x528
    bl fn_80013338
    lfs f0, lbl_80884850
    addi r3, r1, 0x5c
    stfs f0, 0x60(r1)
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_80884864
    fcmpo cr0, f1, f0
    blt lbl_fn_802F0328_0000158C
    addi r3, r1, 0x5c
    bl fn_800F7FF0
lbl_fn_802F0328_0000158C:
    lfs f29, lbl_80884890
    addi r3, r1, 0x14
    addi r4, r31, 0x14d8
    bl fn_80011034
    addi r3, r1, 0x20
    addi r4, r1, 0x5c
    bl fn_80011034
    addi r3, r1, 0x50
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_80013338
    lfs f1, 0x54(r1)
    bl fn_800133B0
    frsp f2, f1
    lfs f0, lbl_80884850
    stfs f1, 0x54(r1)
    addi r3, r1, 0x98
    fcmpo cr0, f2, f0
    ble lbl_fn_802F0328_000015E0
    fmr f1, f29
    b lbl_fn_802F0328_000015E4
lbl_fn_802F0328_000015E0:
    fneg f1, f29
lbl_fn_802F0328_000015E4:
    bl fn_8013A13C
    addi r3, r31, 0x14d8
    addi r4, r1, 0x98
    bl fn_80011410
    lfs f30, lbl_80884858
    addi r3, r1, 0x8
    addi r4, r31, 0x14d8
    bl fn_80011034
    addi r3, r1, 0x8c
    addi r4, r1, 0x8
    bl fn_8000D124
    lwz r0, 0x58c(r31)
    lfs f29, lbl_8088485C
    cmpwi r0, 0xa
    bne lbl_fn_802F0328_00001708
    lwz r3, 0x14d4(r31)
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_802F0328_00001648
    lwz r3, 0x14d4(r31)
    li r5, 0x0
    lwz r4, 0x14c8(r31)
    bl fn_801533C8
    cmpwi r3, 0x0
    beq lbl_fn_802F0328_00001684
lbl_fn_802F0328_00001648:
    lwz r0, 0x14cc(r31)
    addi r3, r31, 0x14d8
    addi r4, r1, 0x5c
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    bl fn_801A03E8
    lfs f0, lbl_80884894
    fcmpo cr0, f1, f0
    ble lbl_fn_802F0328_00001678
    li r0, 0xd
    stw r0, 0x14c4(r31)
    b lbl_fn_802F0328_00001938
lbl_fn_802F0328_00001678:
    li r0, 0xc
    stw r0, 0x14c4(r31)
    b lbl_fn_802F0328_00001938
lbl_fn_802F0328_00001684:
    addi r3, r31, 0x14d8
    addi r4, r1, 0x5c
    bl fn_801A03E8
    lfs f0, lbl_80884898
    fcmpo cr0, f1, f0
    bge lbl_fn_802F0328_000016B4
    lwz r3, 0x14cc(r31)
    li r0, 0xd
    stw r0, 0x14c4(r31)
    oris r3, r3, 0x8000
    stw r3, 0x14cc(r31)
    b lbl_fn_802F0328_00001938
lbl_fn_802F0328_000016B4:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0xb4
    ble lbl_fn_802F0328_000016D8
    lwz r3, 0x14cc(r31)
    li r0, 0x8
    stw r0, 0x14c4(r31)
    oris r3, r3, 0x8000
    stw r3, 0x14cc(r31)
    b lbl_fn_802F0328_00001938
lbl_fn_802F0328_000016D8:
    lwz r3, 0x14ec(r31)
    bl fn_80219E6C
    mr r30, r3
    bl fn_8013A194
    lwz r6, 0x14c8(r31)
    mr r4, r31
    lfs f1, lbl_80884850
    mr r5, r30
    lwz r7, 0x5c(r30)
    li r8, -0x1
    bl fn_802F0964
    b lbl_fn_802F0328_00001938
lbl_fn_802F0328_00001708:
    addi r3, r31, 0x14d8
    addi r4, r1, 0x5c
    bl fn_801A03E8
    lfs f0, lbl_80884898
    fcmpo cr0, f1, f0
    bge lbl_fn_802F0328_00001738
    lwz r3, 0x14cc(r31)
    li r0, 0xc
    stw r0, 0x14c4(r31)
    oris r3, r3, 0x8000
    stw r3, 0x14cc(r31)
    b lbl_fn_802F0328_00001938
lbl_fn_802F0328_00001738:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0xb4
    ble lbl_fn_802F0328_0000175C
    lwz r3, 0x14cc(r31)
    li r0, 0xc
    stw r0, 0x14c4(r31)
    oris r3, r3, 0x8000
    stw r3, 0x14cc(r31)
    b lbl_fn_802F0328_00001938
lbl_fn_802F0328_0000175C:
    lwz r3, 0x14ec(r31)
    bl fn_80219E6C
    mr r30, r3
    bl fn_8013A194
    lwz r6, 0x14c8(r31)
    mr r4, r31
    lfs f1, lbl_80884850
    mr r5, r30
    lwz r7, 0x5c(r30)
    li r8, -0x1
    bl fn_802F0964
    b lbl_fn_802F0328_00001938
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802F0328_000017C0
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_802F0328_000017C0:
    lfs f0, lbl_8088489C
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802F0328_00001938
    lfs f29, lbl_808848A0
    bl fn_802F0990
    bl fn_802F0988
    fmr f30, f1
    addi r3, r1, 0x44
    fmr f1, f29
    addi r4, r31, 0x14d8
    bl fn_800F72CC
    fmr f1, f30
    addi r3, r1, 0x44
    bl fn_8012A190
    addi r3, r1, 0xc8
    bl fn_80140500
    bl fn_801404F8
    lfs f1, 0x620(r31)
    addi r4, r1, 0xc8
    addi r5, r31, 0x614
    addi r6, r1, 0x44
    addi r8, r31, 0x5b8
    li r7, 0x80
    li r9, 0x0
    bl fn_8004D388
    addi r3, r31, 0x528
    addi r4, r1, 0xd8
    bl fn_8000D124
    addi r3, r31, 0x528
    addi r4, r31, 0x5a4
    bl fn_80013484
    lfs f1, 0x52c(r31)
    lfs f0, 0x620(r31)
    fsubs f0, f1, f0
    stfs f0, 0x52c(r31)
    lwz r0, 0x104(r1)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_802F0328_00001878
    bl fn_800F52F8
    bl fn_802F0998
    lfs f0, 0x14dc(r31)
    fadds f0, f0, f1
    stfs f0, 0x14dc(r31)
    b lbl_fn_802F0328_00001880
lbl_fn_802F0328_00001878:
    lfs f0, lbl_80884850
    stfs f0, 0x14dc(r31)
lbl_fn_802F0328_00001880:
    lfs f1, 0x538(r31)
    lfs f0, lbl_808848A4
    fadds f0, f1, f0
    stfs f0, 0x538(r31)
    b lbl_fn_802F0328_00001954
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802F0328_000018C8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_802F0328_000018C8:
    lfs f0, lbl_8088488C
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802F0328_00001938
    addi r3, r1, 0x38
    addi r4, r31, 0x574
    bl fn_8001047C
    fmr f1, f30
    lfs f30, 0x570(r31)
    fmr f2, f29
    mr r3, r31
    addi r4, r1, 0x8c
    li r5, 0x1
    bl fn_8013CB68
    lfs f0, 0x38(r1)
    stfs f0, 0x574(r31)
    lfs f0, 0x40(r1)
    stfs f0, 0x57c(r31)
    stfs f30, 0x570(r31)
    b lbl_fn_802F0328_00001954
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802F0328_00001938
    b lbl_fn_802F0328_00001954
lbl_fn_802F0328_0000192C:
    mr r3, r31
    bl fn_805A4258
    b lbl_fn_802F0328_00001954
lbl_fn_802F0328_00001938:
    lfs f0, 0x568(r31)
    fmr f1, f30
    mr r3, r31
    addi r4, r1, 0x8c
    fmuls f2, f0, f29
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_802F0328_00001954:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
