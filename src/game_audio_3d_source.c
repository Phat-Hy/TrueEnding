#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004D388(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_800A08D4(void);
extern void fn_800EAECC(void);
extern void fn_800EB270(void);
extern void fn_800EB49C(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_8012539C(void);
extern void fn_80126214(void);
extern void fn_80134270(void);
extern void fn_8013A258(void);
extern void fn_80144710(void);
extern void fn_80151448(void);
extern void fn_80158BB4(void);
extern void fn_80158CA4(void);
extern void fn_8015E4B0(void);
extern void fn_8015E7A0(void);
extern void fn_8015EB2C(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_80176548(void);
extern void fn_80219E6C(void);
extern void fn_803227A0(void);
extern void fn_80322AD4(void);
extern void fn_80370A78(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80749898[];
extern u8 lbl_807498A4[];
extern u8 lbl_807498B0[];
extern u8 lbl_807498C0[];
extern u8 lbl_80766768[];
extern u8 lbl_807889F0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884E48;
extern u32 lbl_80884E50;
extern u32 lbl_80884E68;
extern u32 lbl_80884E6C;
extern u32 lbl_80884E70;
extern u32 lbl_80884E74;
extern u32 lbl_80884E7C;
extern u32 lbl_80884E84;
extern u32 lbl_80884E8C;
extern u32 lbl_80884E90;
extern u32 lbl_80884E9C;
extern u32 lbl_80884EA0;
extern u32 lbl_80884EA4;
extern u32 lbl_80884EA8;
extern u32 lbl_80884EAC;
extern u32 lbl_80884EB0;
extern u32 lbl_80884EB4;
extern u32 lbl_80884EB8;
extern u32 lbl_80884EBC;
extern u32 lbl_80884EC0;
extern u32 lbl_80884EC4;
extern u32 lbl_80884EC8;
extern u32 lbl_80884ECC;
extern u32 lbl_80884ED0;
extern u32 lbl_80884ED4;
extern u32 lbl_80884ED8;
extern u32 lbl_80884EDC;
extern u32 lbl_80884EE0;
extern u32 lbl_80884EE4;
extern u32 lbl_80884EE8;
extern u32 lbl_80884EEC;
extern u32 lbl_80884EF0;
extern u32 lbl_80884EF4;
extern u32 lbl_80884EF8;
extern u32 lbl_80884EFC;
extern u32 lbl_80884F00;
extern u32 lbl_80884F04;

/* Function declarations */
void fn_8031FAA4(void);
void fn_8031FBFC(void);
void fn_8031FD34(void);
void fn_8031FE4C(void);
void fn_803202E0(void);
void fn_803209D0(void);
void fn_803209E0(void);
void fn_8032130C(void);

asm void fn_8031FAA4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x3d
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8031FAA4_00000070
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8031FAA4_00000064
    lwz r3, 0xd1c(r31)
    li r0, 0x0
    stw r3, 0xd20(r31)
    stw r0, 0x1454(r31)
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0xd1c(r31)
    b lbl_fn_8031FAA4_00000118
lbl_fn_8031FAA4_00000064:
    li r0, 0x1
    stw r0, 0x1454(r31)
    b lbl_fn_8031FAA4_00000118
lbl_fn_8031FAA4_00000070:
    lwz r3, lbl_8087F8A0
    li r30, 0x0
    lwz r29, 0x48(r3)
    b lbl_fn_8031FAA4_000000B4
lbl_fn_8031FAA4_00000080:
    addi r3, r29, 0x7d4
    bl fn_80134270
    cmpwi r3, 0x0
    beq lbl_fn_8031FAA4_000000B0
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8031FAA4_000000B0
    lwz r3, 0x560(r29)
    subi r0, r3, 0x1d
    cmplwi r0, 0x2
    bgt lbl_fn_8031FAA4_000000B0
    mr r30, r29
lbl_fn_8031FAA4_000000B0:
    lwz r29, 0x14ac(r29)
lbl_fn_8031FAA4_000000B4:
    cmpwi r29, 0x0
    bne lbl_fn_8031FAA4_00000080
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8031FAA4_000000F0
    lwz r3, 0xd1c(r31)
    li r0, 0x0
    stw r3, 0xd20(r31)
    stw r0, 0x1454(r31)
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0xd1c(r31)
    b lbl_fn_8031FAA4_00000118
lbl_fn_8031FAA4_000000F0:
    cmpwi r30, 0x0
    beq lbl_fn_8031FAA4_00000110
    lwz r3, 0xd1c(r31)
    li r0, 0x0
    stw r3, 0xd20(r31)
    stw r0, 0x1454(r31)
    stw r30, 0xd1c(r31)
    b lbl_fn_8031FAA4_00000118
lbl_fn_8031FAA4_00000110:
    li r0, 0x1
    stw r0, 0x1454(r31)
lbl_fn_8031FAA4_00000118:
    lwz r3, lbl_8087F430
    li r0, 0x0
    stw r0, 0x8a0(r3)
    lwz r3, 0xd1c(r31)
    lwz r0, 0xd20(r31)
    cmplw r3, r0
    beq lbl_fn_8031FAA4_0000013C
    addi r3, r31, 0x1030
    bl fn_8012539C
lbl_fn_8031FAA4_0000013C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8031FBFC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x1594(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8031FBFC_00000260
    lwz r0, 0x44(r4)
    cmpwi r0, 0x1
    bne lbl_fn_8031FBFC_000001B8
    lfs f2, 0x10(r4)
    lfs f3, lbl_80884E9C
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    b lbl_fn_8031FBFC_00000254
lbl_fn_8031FBFC_000001B8:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_8031FBFC_000001D8
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x68(r4)
    stw r0, 0x90(r4)
    b lbl_fn_8031FBFC_00000278
lbl_fn_8031FBFC_000001D8:
    cmpwi r0, 0x1
    bne lbl_fn_8031FBFC_00000220
    lwz r3, lbl_8087F430
    li r4, 0x3d
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_8031FBFC_00000220
    lfs f2, 0x10(r31)
    lfs f3, lbl_80884E48
    lfs f1, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r31)
    stfs f1, 0x14(r31)
    stfs f0, 0x18(r31)
    b lbl_fn_8031FBFC_00000254
lbl_fn_8031FBFC_00000220:
    lfs f2, 0x10(r31)
    lfs f3, lbl_80884EA0
    lfs f1, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    lwz r0, 0x50(r31)
    fmuls f0, f0, f3
    stfs f2, 0x10(r31)
    ori r0, r0, 0x90
    stfs f1, 0x14(r31)
    stfs f0, 0x18(r31)
    stw r0, 0x50(r31)
lbl_fn_8031FBFC_00000254:
    lwz r3, lbl_8087F430
    li r4, 0x3d
    bl fn_80370A78
lbl_fn_8031FBFC_00000260:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    mr r3, r30
    mr r4, r31
    bl fn_8031FD34
lbl_fn_8031FBFC_00000278:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031FD34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, 0x15a0(r3)
    lwz r0, 0x58c(r3)
    srawi r4, r5, 3
    lwz r5, 0x1560(r3)
    addze r4, r4
    cmpwi r0, 0x6
    add r0, r5, r4
    stw r0, 0x1560(r3)
    bne lbl_fn_8031FD34_000002F4
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8031FD34_000002F4
    lwz r4, 0x560(r3)
    subi r0, r4, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_8031FD34_000002F4
    li r0, 0x0
    stw r0, 0x58c(r3)
lbl_fn_8031FD34_000002F4:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8031FD34_0000031C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x17
    bne lbl_fn_8031FD34_0000031C
    mr r3, r30
    addi r4, r30, 0x6b8
    li r5, -0x1
    bl fn_8015E4B0
lbl_fn_8031FD34_0000031C:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8031FD34_00000390
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8031FD34_0000034C
    lwz r0, 0x560(r30)
    cmpwi r0, 0x17
    beq lbl_fn_8031FD34_00000388
    cmpwi r0, 0x3b
    beq lbl_fn_8031FD34_00000388
lbl_fn_8031FD34_0000034C:
    lfs f3, 0x30(r31)
    mr r3, r30
    lfs f2, lbl_80884EA4
    addi r4, r1, 0x8
    lfs f1, 0x2c(r31)
    li r5, -0x1
    lfs f0, 0x28(r31)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    li r6, 0x0
    fmuls f0, f0, f2
    stfs f3, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    bl fn_8015E7A0
lbl_fn_8031FD34_00000388:
    mr r3, r30
    bl fn_800EB49C
lbl_fn_8031FD34_00000390:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8031FE4C(void)
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
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    stw r28, 0xe0(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8031FE4C_000003EC
    li r0, 0x4
    stw r0, 0x55c(r3)
lbl_fn_8031FE4C_000003EC:
    lwz r4, 0x58c(r3)
    subi r0, r4, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_8031FE4C_00000804
    cmpwi r4, 0x6
    beq lbl_fn_8031FE4C_00000428
    cmpwi r4, 0x7
    beq lbl_fn_8031FE4C_00000634
    cmpwi r4, 0x0
    beq lbl_fn_8031FE4C_00000640
    cmpwi r4, 0x1
    beq lbl_fn_8031FE4C_0000064C
    cmpwi r4, 0x2
    beq lbl_fn_8031FE4C_000007C4
    b lbl_fn_8031FE4C_0000080C
lbl_fn_8031FE4C_00000428:
    lwz r4, 0x1570(r3)
    subic. r0, r4, 0x1
    stw r0, 0x1570(r3)
    bge lbl_fn_8031FE4C_00000440
    mr r3, r31
    bl fn_803227A0
lbl_fn_8031FE4C_00000440:
    lwz r4, 0x1574(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8031FE4C_0000080C
    lfs f3, 0x530(r4)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    addi r30, r1, 0x14
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    stfs f2, 0x10(r1)
    fsubs f4, f3, f0
    lfs f0, lbl_80884EA8
    frsp f3, f2
    stfs f4, 0x8(r1)
    fabs f4, f3
    stfs f5, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8031FE4C_000004CC
    lfs f3, 0x14(r1)
    lfs f0, lbl_80884E48
    fcmpo cr0, f3, f0
    ble lbl_fn_8031FE4C_000004C0
    lfs f0, lbl_80884E74
    b lbl_fn_8031FE4C_000004C4
lbl_fn_8031FE4C_000004C0:
    lfs f0, lbl_80884EAC
lbl_fn_8031FE4C_000004C4:
    stfs f0, 0x24(r1)
    b lbl_fn_8031FE4C_000004E0
lbl_fn_8031FE4C_000004CC:
    fmr f2, f3
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_8031FE4C_000004E0:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884E48
    addi r4, r1, 0x2c
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f31, 0xc4(r1)
    lfs f30, 0xb4(r1)
    lfs f0, lbl_80884E70
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f30, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80884EA8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8031FE4C_000005FC
    lfs f3, 0x30(r1)
    lfs f0, lbl_80884E48
    fcmpo cr0, f3, f0
    ble lbl_fn_8031FE4C_000005EC
    lfs f0, lbl_80884E74
    b lbl_fn_8031FE4C_000005F0
lbl_fn_8031FE4C_000005EC:
    lfs f0, lbl_80884EAC
lbl_fn_8031FE4C_000005F0:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_8031FE4C_00000610
lbl_fn_8031FE4C_000005FC:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_8031FE4C_00000610:
    addi r3, r1, 0x20
    lfs f2, lbl_80884E48
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x18(r1)
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    stfs f0, 0x538(r31)
    b lbl_fn_8031FE4C_0000080C
lbl_fn_8031FE4C_00000634:
    mr r3, r31
    bl fn_80322AD4
    b lbl_fn_8031FE4C_0000080C
lbl_fn_8031FE4C_00000640:
    mr r3, r31
    bl fn_803202E0
    b lbl_fn_8031FE4C_0000080C
lbl_fn_8031FE4C_0000064C:
    mr r3, r31
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_8031FE4C_000006B4
    lwz r3, 0x560(r31)
    li r0, 0x0
    stw r0, 0x58c(r31)
    cmpwi r3, 0x16
    beq lbl_fn_8031FE4C_000006B4
    cmpwi r3, 0x17
    beq lbl_fn_8031FE4C_000006B4
    cmpwi r3, 0x47
    beq lbl_fn_8031FE4C_000006B4
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_8031FE4C_000006B4
    mr r3, r31
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    bl fn_8016EB48
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8031FE4C_000006B4
    li r0, 0x4
    stw r0, 0x55c(r31)
lbl_fn_8031FE4C_000006B4:
    mr r3, r31
    bl fn_803202E0
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8031FE4C_0000080C
    mr r3, r31
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_8031FE4C_0000080C
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8031FE4C_0000080C
    mr r3, r31
    bl fn_80144710
    li r3, 0x687
    bl fn_80219E6C
    mr r30, r3
    lwz r3, lbl_8087F430
    li r4, 0x3d
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8031FE4C_00000784
    lis r30, lbl_80749898@ha
    li r29, 0x3
    addi r30, r30, lbl_80749898@l
    li r28, 0x0
lbl_fn_8031FE4C_0000071C:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r30)
    bl fn_80370A78
    cmpwi r3, 0xc8
    blt lbl_fn_8031FE4C_00000734
    subi r29, r29, 0x1
lbl_fn_8031FE4C_00000734:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_8031FE4C_0000071C
    cmpwi r29, 0x3
    beq lbl_fn_8031FE4C_00000758
    cmpwi r29, 0x2
    beq lbl_fn_8031FE4C_00000768
    b lbl_fn_8031FE4C_00000778
lbl_fn_8031FE4C_00000758:
    li r3, 0x687
    bl fn_80219E6C
    mr r30, r3
    b lbl_fn_8031FE4C_00000784
lbl_fn_8031FE4C_00000768:
    li r3, 0x688
    bl fn_80219E6C
    mr r30, r3
    b lbl_fn_8031FE4C_00000784
lbl_fn_8031FE4C_00000778:
    li r3, 0x689
    bl fn_80219E6C
    mr r30, r3
lbl_fn_8031FE4C_00000784:
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r8, 0x590(r31)
    mr r7, r30
    lfs f1, lbl_80884E48
    li r4, 0x0
    lwz r10, 0x594(r31)
    li r5, 0x0
    li r9, 0x1e
    bl fn_800F8C6C
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8031FE4C_0000080C
    subf r0, r3, r0
    stw r0, 0x594(r31)
    b lbl_fn_8031FE4C_0000080C
lbl_fn_8031FE4C_000007C4:
    mr r3, r31
    bl fn_8015EB2C
    cmpwi r3, 0x0
    bne lbl_fn_8031FE4C_000007E0
    mr r3, r31
    bl fn_803202E0
    b lbl_fn_8031FE4C_0000080C
lbl_fn_8031FE4C_000007E0:
    lwz r4, 0x5c0(r31)
    mr r3, r31
    lwz r0, 0x12a4(r31)
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r31)
    oris r0, r0, 0x200
    stw r0, 0x12a4(r31)
    bl fn_800EAECC
    b lbl_fn_8031FE4C_0000080C
lbl_fn_8031FE4C_00000804:
    mr r3, r31
    bl fn_803202E0
lbl_fn_8031FE4C_0000080C:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803202E0(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    lis r6, lbl_807C7030@ha
    stw r0, 0x184(r1)
    addi r4, r1, 0x98
    addi r6, r6, lbl_807C7030@l
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    lfs f31, lbl_80884E48
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    lfs f30, lbl_80884E70
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    lfs f29, lbl_80884EB0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    mr r30, r3
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    lwz r5, lbl_8087F430
    psq_l f1, 0x534(r3), 0, 0
    lwz r31, 0x10d8(r5)
    addi r5, r1, 0x8c
    lfs f2, 0x53c(r3)
    stfs f2, 0xa0(r1)
    lfs f2, 0x8(r6)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lwz r6, 0xd1c(r3)
    psq_st f1, 0x0(r5), 0, 0
    cmpwi r6, 0x0
    stfs f2, 0x94(r1)
    beq lbl_fn_803202E0_00000930
    lfs f3, 0x530(r6)
    addi r4, r1, 0x74
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f3, f3, f0
    stfs f4, 0x78(r1)
    frsp f0, f2
    stfs f3, 0x74(r1)
    fmuls f3, f0, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x8c(r1)
    stfs f2, 0x94(r1)
    fmadds f1, f0, f0, f3
    stfs f31, 0x90(r1)
    bl fn_8068B100
    frsp f29, f1
lbl_fn_803202E0_00000930:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x4
    bne lbl_fn_803202E0_000009DC
    lwz r0, 0x78(r31)
    li r5, 0x0
    lwz r4, 0x1568(r30)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803202E0_00000980
lbl_fn_803202E0_00000958:
    lwz r3, 0x7c(r31)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_803202E0_00000974
    mulli r0, r5, 0x28
    add r0, r3, r0
    b lbl_fn_803202E0_00000984
lbl_fn_803202E0_00000974:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803202E0_00000958
lbl_fn_803202E0_00000980:
    li r0, 0x0
lbl_fn_803202E0_00000984:
    cmpwi r0, 0x0
    bne lbl_fn_803202E0_000009AC
    addi r3, r30, 0x1030
    bl fn_8012539C
    lwz r4, 0xd1c(r30)
    mr r3, r30
    lfs f1, lbl_80884EB4
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_803202E0_00000EC0
lbl_fn_803202E0_000009AC:
    lwz r3, lbl_8087F430
    li r4, 0x3d
    bl fn_80370A78
    cmpwi r3, 0x0
    beq lbl_fn_803202E0_00000EC0
    addi r3, r30, 0x1030
    bl fn_8012539C
    lwz r4, 0x1568(r30)
    mr r3, r30
    li r5, 0x0
    bl fn_8017039C
    b lbl_fn_803202E0_00000EC0
lbl_fn_803202E0_000009DC:
    cmpwi r0, 0x7
    bne lbl_fn_803202E0_00000EAC
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803202E0_00000A10
    psq_l f1, 0x534(r30), 0, 0
    addi r3, r1, 0x98
    lfs f2, 0x53c(r30)
    stfs f2, 0xa0(r1)
    lfs f31, lbl_80884E48
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_803202E0_00000C38
lbl_fn_803202E0_00000A10:
    addi r3, r30, 0x1030
    bl fn_80126214
    addi r4, r30, 0x1088
    addi r29, r1, 0x80
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0x1090(r30)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80884EB8
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_803202E0_00000C24
    addi r28, r1, 0x5c
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x88(r1)
    mr r3, r28
    psq_st f1, 0x0(r28), 0, 0
    mr r4, r28
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r29, r1, 0x68
    psq_l f1, 0x0(r28), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884EA8
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803202E0_00000AB4
    lfs f3, 0x68(r1)
    lfs f0, lbl_80884E48
    fcmpo cr0, f3, f0
    ble lbl_fn_803202E0_00000AA8
    lfs f0, lbl_80884E74
    b lbl_fn_803202E0_00000AAC
lbl_fn_803202E0_00000AA8:
    lfs f0, lbl_80884EAC
lbl_fn_803202E0_00000AAC:
    stfs f0, 0x48(r1)
    b lbl_fn_803202E0_00000AC8
lbl_fn_803202E0_00000AB4:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803202E0_00000AC8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884E48
    addi r4, r1, 0x38
    lfs f27, 0xb0(r1)
    mr r5, r4
    lfs f28, 0xac(r1)
    addi r3, r1, 0xd8
    lfs f13, 0xa8(r1)
    lfs f12, 0xc0(r1)
    lfs f11, 0xbc(r1)
    lfs f10, 0xb8(r1)
    lfs f9, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f7, 0xc8(r1)
    lfs f6, 0xd4(r1)
    lfs f5, 0xc4(r1)
    lfs f4, 0xb4(r1)
    lfs f0, lbl_80884E70
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f27, 0x10(r1)
    stfs f13, 0xd8(r1)
    stfs f28, 0xdc(r1)
    stfs f27, 0xe0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f12, 0xf0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xf8(r1)
    stfs f8, 0xfc(r1)
    stfs f9, 0x100(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xe4(r1)
    stfs f5, 0xf4(r1)
    stfs f6, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884EA8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803202E0_00000BE4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884E48
    fcmpo cr0, f3, f0
    ble lbl_fn_803202E0_00000BD4
    lfs f0, lbl_80884E74
    b lbl_fn_803202E0_00000BD8
lbl_fn_803202E0_00000BD4:
    lfs f0, lbl_80884EAC
lbl_fn_803202E0_00000BD8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803202E0_00000BF8
lbl_fn_803202E0_00000BE4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803202E0_00000BF8:
    lfs f2, lbl_80884E48
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x98
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
    b lbl_fn_803202E0_00000C38
lbl_fn_803202E0_00000C24:
    psq_l f1, 0x534(r30), 0, 0
    addi r3, r1, 0x98
    lfs f2, 0x53c(r30)
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_803202E0_00000C38:
    lwz r3, lbl_8087F430
    li r4, 0x3d
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_803202E0_00000C94
    lfs f3, lbl_80884EA0
    lfs f0, 0x1524(r30)
    fmuls f30, f30, f3
    fcmpo cr0, f29, f0
    bge lbl_fn_803202E0_00000EC0
    lwz r3, 0x1560(r30)
    lwz r0, 0x15a0(r30)
    cmpw r3, r0
    ble lbl_fn_803202E0_00000EC0
    mr r3, r30
    li r4, 0xc8
    bl fn_800EB270
    lwz r3, 0x1564(r30)
    li r0, 0x0
    stw r0, 0x1560(r30)
    addi r0, r3, 0x1
    stw r0, 0x1564(r30)
    b lbl_fn_803202E0_00000EE4
lbl_fn_803202E0_00000C94:
    lwz r3, 0x1564(r30)
    lwz r0, 0x15a4(r30)
    cmpw r3, r0
    blt lbl_fn_803202E0_00000DC4
    lwz r0, 0x78(r31)
    li r5, 0x0
    lwz r4, 0x1568(r30)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803202E0_00000CE8
lbl_fn_803202E0_00000CC0:
    lwz r3, 0x7c(r31)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_803202E0_00000CDC
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_803202E0_00000CEC
lbl_fn_803202E0_00000CDC:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803202E0_00000CC0
lbl_fn_803202E0_00000CE8:
    li r3, 0x0
lbl_fn_803202E0_00000CEC:
    cmpwi r3, 0x0
    bne lbl_fn_803202E0_00000D44
    bl fn_80680CF8
    lis r5, 0x5555
    lis r4, lbl_807498A4@ha
    addi r0, r5, 0x5556
    mulhw r5, r0, r3
    addi r4, r4, lbl_807498A4@l
    srwi r0, r5, 31
    add r0, r5, r0
    mulli r0, r0, 0x3
    subf r0, r0, r3
    addi r3, r30, 0x1030
    slwi r0, r0, 2
    lwzx r0, r4, r0
    stw r0, 0x1568(r30)
    bl fn_8012539C
    lwz r4, 0x1568(r30)
    mr r3, r30
    li r5, 0x0
    bl fn_8017039C
    b lbl_fn_803202E0_00000EE4
lbl_fn_803202E0_00000D44:
    lfs f4, 0xc(r3)
    lfs f0, 0x530(r30)
    lfs f3, 0x4(r3)
    fsubs f5, f4, f0
    lfs f0, 0x528(r30)
    lfs f4, 0x8(r3)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r30)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x50(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x54(r1)
    stfs f5, 0x58(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, 0x14fc(r30)
    fcmpo cr0, f3, f0
    bge lbl_fn_803202E0_00000EC0
    addi r3, r30, 0x1030
    bl fn_8012539C
    lwz r4, 0xd1c(r30)
    mr r3, r30
    lfs f1, lbl_80884EB4
    li r5, 0x0
    bl fn_80170A20
    li r0, 0x0
    li r3, 0x270f
    stw r3, 0x1568(r30)
    stw r0, 0x1564(r30)
    stw r0, 0x1560(r30)
    b lbl_fn_803202E0_00000EC0
lbl_fn_803202E0_00000DC4:
    lwz r0, 0x15a0(r30)
    lwz r3, 0x1560(r30)
    cmpw r3, r0
    ble lbl_fn_803202E0_00000EC0
    lfs f0, 0x1524(r30)
    fcmpo cr0, f29, f0
    bge lbl_fn_803202E0_00000E04
    mr r3, r30
    li r4, 0xc8
    bl fn_800EB270
    lwz r3, 0x1564(r30)
    li r0, 0x0
    stw r0, 0x1560(r30)
    addi r0, r3, 0x1
    stw r0, 0x1564(r30)
    b lbl_fn_803202E0_00000EE4
lbl_fn_803202E0_00000E04:
    lfs f0, 0x1528(r30)
    fcmpo cr0, f29, f0
    ble lbl_fn_803202E0_00000EC0
    slwi r0, r0, 1
    cmpw r3, r0
    ble lbl_fn_803202E0_00000EC0
    lwz r28, 0xd1c(r30)
    cmpwi r28, 0x0
    beq lbl_fn_803202E0_00000EC0
    li r0, 0x6
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80884E70
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884E48
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x13f
    lfs f2, lbl_80884E68
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, 0x1564(r30)
    li r0, 0x1e
    li r4, 0x0
    stw r0, 0x1570(r30)
    addi r0, r3, 0x1
    stw r28, 0x1574(r30)
    stw r4, 0x1560(r30)
    stw r0, 0x1564(r30)
    b lbl_fn_803202E0_00000EE4
lbl_fn_803202E0_00000EAC:
    cmpwi r0, 0x6
    bne lbl_fn_803202E0_00000EC0
    mr r3, r30
    bl fn_8013A258
    b lbl_fn_803202E0_00000EE4
lbl_fn_803202E0_00000EC0:
    lwz r12, 0x0(r30)
    fmr f1, f31
    fmr f2, f30
    mr r3, r30
    lwz r12, 0x34(r12)
    addi r4, r1, 0x98
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_803202E0_00000EE4:
    lwz r0, 0x184(r1)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_803209D0(void)
{
    nofralloc
    lfs f0, 0x568(r3)
    li r5, 0x0
    fmuls f2, f0, f2
    b fn_803209E0
}

asm void fn_803209E0(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    lfs f3, 0x4(r4)
    lis r4, lbl_807498C0@ha
    stw r0, 0x214(r1)
    addi r6, r1, 0xc0
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    fmr f29, f1
    stw r31, 0x1dc(r1)
    stw r30, 0x1d8(r1)
    mr r30, r5
    stw r29, 0x1d4(r1)
    mr r29, r3
    stw r28, 0x1d0(r1)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0xc8(r1)
    psq_st f1, 0x0(r6), 0, 0
    addi r6, r1, 0xb4
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x53c(r3)
    lfs f0, 0xb8(r1)
    stfs f2, 0xbc(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807498C0@l(r4)
    bl fn_8068AEA8
    frsp f0, f1
    lfs f3, lbl_80884EBC
    fcmpo cr0, f0, f3
    ble lbl_fn_803209E0_00000FD8
    lfs f3, lbl_80884E8C
    fsubs f0, f0, f3
lbl_fn_803209E0_00000FD8:
    lfs f3, lbl_80884EC0
    fcmpo cr0, f0, f3
    bge lbl_fn_803209E0_00000FEC
    lfs f3, lbl_80884E8C
    fadds f0, f0, f3
lbl_fn_803209E0_00000FEC:
    lfs f3, lbl_80884EBC
    lwz r3, lbl_8087EFA8
    fdivs f3, f0, f3
    lfs f4, 0x570(r29)
    lfs f31, 0x3a4(r3)
    lfs f6, lbl_80884EC4
    lfs f5, lbl_80884E70
    lfs f9, 0x56c(r29)
    fabs f7, f3
    lfs f3, lbl_80884EC8
    lfs f8, 0xb8(r1)
    fmuls f30, f30, f31
    fmuls f4, f4, f3
    lfs f3, lbl_80884ECC
    frsp f7, f7
    stfs f4, 0x570(r29)
    fcmpo cr0, f4, f3
    fmuls f3, f7, f6
    fadds f3, f5, f3
    fmuls f9, f9, f3
    fmuls f3, f0, f9
    fadds f8, f8, f3
    stfs f8, 0xb8(r1)
    bge lbl_fn_803209E0_00001054
    lfs f3, lbl_80884E48
    stfs f3, 0x570(r29)
lbl_fn_803209E0_00001054:
    lfs f3, lbl_80884E70
    fcmpo cr0, f29, f3
    ble lbl_fn_803209E0_00001064
    fmr f29, f3
lbl_fn_803209E0_00001064:
    lfs f3, lbl_80884E6C
    fcmpo cr0, f29, f3
    ble lbl_fn_803209E0_000010E8
    fsubs f6, f29, f3
    lfs f5, lbl_80884ED0
    lfs f4, 0x570(r29)
    lfs f3, lbl_80884E90
    fdivs f29, f6, f5
    lfs f5, lbl_80884ED4
    fcmpo cr0, f4, f3
    fmuls f29, f29, f30
    bge lbl_fn_803209E0_00001098
    lfs f5, lbl_80884E48
lbl_fn_803209E0_00001098:
    lfs f4, lbl_80884EBC
    lfs f3, lbl_80884E48
    fdivs f4, f0, f4
    fabs f4, f4
    frsp f4, f4
    fsubs f7, f4, f5
    fcmpo cr0, f7, f3
    bge lbl_fn_803209E0_000010BC
    fmr f7, f3
lbl_fn_803209E0_000010BC:
    lfs f6, lbl_80884E70
    lfs f4, lbl_80884ED8
    fsubs f5, f6, f5
    lfs f3, lbl_80884E48
    fdivs f7, f7, f5
    fnmsubs f4, f4, f7, f6
    fmuls f29, f29, f4
    fcmpo cr0, f29, f3
    bge lbl_fn_803209E0_000010EC
    fmr f29, f3
    b lbl_fn_803209E0_000010EC
lbl_fn_803209E0_000010E8:
    lfs f29, lbl_80884E48
lbl_fn_803209E0_000010EC:
    lfs f3, lbl_80884EA0
    lfs f4, lbl_80884E6C
    fmuls f6, f3, f0
    lfs f5, 0x580(r29)
    lfs f3, lbl_80884ED4
    fmuls f4, f4, f5
    lfs f0, lbl_80884ECC
    fmsubs f3, f3, f6, f4
    fadds f3, f5, f3
    stfs f3, 0x580(r29)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803209E0_0000112C
    lfs f0, lbl_80884E48
    stfs f0, 0x580(r29)
lbl_fn_803209E0_0000112C:
    lfs f3, lbl_80884EE0
    mr r3, r29
    lfs f4, 0x570(r29)
    lfs f0, lbl_80884EDC
    fmuls f3, f3, f4
    fmsubs f0, f0, f29, f3
    fadds f0, f4, f0
    stfs f0, 0x570(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lfs f3, 0x574(r29)
    lfs f4, lbl_80884E84
    lfs f0, 0x57c(r29)
    fmuls f3, f3, f4
    lfs f1, 0xb8(r1)
    fmuls f0, f0, f4
    stfs f3, 0x574(r29)
    stfs f0, 0x57c(r29)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x570(r29)
    lfs f0, lbl_80884E48
    lfs f1, 0xb8(r1)
    fmuls f3, f3, f4
    stfs f0, 0xac(r1)
    stfs f3, 0xa8(r1)
    bl fn_8068A850
    frsp f0, f1
    lfs f6, 0x570(r29)
    lfs f4, 0xa8(r1)
    lfs f3, 0xac(r1)
    fmuls f5, f6, f0
    lfs f0, lbl_80884E70
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    fmuls f5, f5, f31
    stfs f4, 0xa8(r1)
    fcmpo cr0, f6, f0
    stfs f3, 0xac(r1)
    stfs f5, 0xb0(r1)
    ble lbl_fn_803209E0_000011F4
    lfs f0, lbl_80884E9C
    fmuls f4, f4, f0
    fmuls f3, f3, f0
    fmuls f0, f5, f0
    stfs f4, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f0, 0xb0(r1)
lbl_fn_803209E0_000011F4:
    lwz r0, 0x958(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803209E0_00001244
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x1c0(r1)
    lis r3, lbl_807498B0@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_807498B0@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80884EE4
    lfs f0, 0x578(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x1c4(r1)
    lfd f4, 0x1c0(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fmadds f0, f31, f3, f0
    stfs f0, 0x578(r29)
lbl_fn_803209E0_00001244:
    lfs f3, 0xa8(r1)
    addi r3, r29, 0x6b8
    lfs f0, 0x6b8(r29)
    lfs f6, 0xac(r1)
    fadds f0, f3, f0
    lfs f4, 0xb0(r1)
    lfs f5, lbl_80884E7C
    stfs f0, 0xa8(r1)
    lfs f0, lbl_80884E48
    lfs f3, 0x6bc(r29)
    fadds f3, f6, f3
    stfs f3, 0xac(r1)
    lfs f3, 0x6c0(r29)
    fadds f3, f4, f3
    stfs f3, 0xb0(r1)
    lfs f4, 0x6b8(r29)
    lfs f3, 0x6c0(r29)
    fmuls f4, f4, f5
    stfs f0, 0x6bc(r29)
    fmuls f0, f3, f5
    stfs f4, 0x6b8(r29)
    stfs f0, 0x6c0(r29)
    bl fn_805F9940
    lfs f0, lbl_80884E68
    fcmpo cr0, f1, f0
    bge lbl_fn_803209E0_000012BC
    lfs f0, lbl_80884E48
    stfs f0, 0x6b8(r29)
    stfs f0, 0x6bc(r29)
    stfs f0, 0x6c0(r29)
lbl_fn_803209E0_000012BC:
    lfs f3, 0xa8(r1)
    lfs f0, 0x574(r29)
    lfs f5, 0xac(r1)
    fadds f3, f3, f0
    lfs f0, lbl_80884EE8
    lfs f4, 0xb0(r1)
    stfs f3, 0xa8(r1)
    lfs f3, 0x578(r29)
    fadds f3, f5, f3
    stfs f3, 0xac(r1)
    fcmpo cr0, f3, f0
    lfs f3, 0x57c(r29)
    fadds f3, f4, f3
    stfs f3, 0xb0(r1)
    bge lbl_fn_803209E0_000012FC
    stfs f0, 0xac(r1)
lbl_fn_803209E0_000012FC:
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x1
    bne lbl_fn_803209E0_00001380
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80884EEC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_803209E0_00001380
    lfs f3, lbl_80884E48
    addi r3, r1, 0x140
    lfs f0, lbl_80884EF0
    li r4, 0x79
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x9c
    addi r3, r1, 0x140
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xa8(r1)
    lfs f0, 0x9c(r1)
    lfs f5, 0xac(r1)
    fadds f6, f3, f0
    lfs f4, 0xa0(r1)
    lfs f3, 0xb0(r1)
    lfs f0, 0xa4(r1)
    fadds f4, f5, f4
    stfs f6, 0xa8(r1)
    fadds f0, f3, f0
    stfs f4, 0xac(r1)
    stfs f0, 0xb0(r1)
lbl_fn_803209E0_00001380:
    addi r5, r1, 0xc0
    li r0, 0x0
    lfs f2, 0xc8(r1)
    addi r3, r1, 0x90
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r29
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x80
    li r31, 0x1
    stfs f2, 0x98(r1)
    stw r0, 0x1a4(r1)
    stw r0, 0x1a8(r1)
    stw r0, 0x1ac(r1)
    stw r0, 0x1b0(r1)
    bl fn_80176548
    lwz r4, 0x48(r29)
    neg r0, r30
    or r3, r0, r30
    cmpwi r4, 0x0
    lis r0, 0x8000
    srawi r3, r3, 31
    and r7, r0, r3
    bne lbl_fn_803209E0_000013E4
    ori r7, r7, 0x20
    b lbl_fn_803209E0_00001400
lbl_fn_803209E0_000013E4:
    cmpwi r4, 0x3
    bne lbl_fn_803209E0_000013F4
    ori r7, r7, 0x40
    b lbl_fn_803209E0_00001400
lbl_fn_803209E0_000013F4:
    cmpwi r4, 0x2
    bne lbl_fn_803209E0_00001400
    ori r7, r7, 0x80
lbl_fn_803209E0_00001400:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x170
    lfs f1, 0x8c(r1)
    addi r5, r1, 0x80
    addi r6, r1, 0xa8
    addi r8, r29, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r5, r1, 0x180
    lfs f2, 0x188(r1)
    addi r4, r1, 0xc0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r3, 0x0
    lfs f0, 0x8c(r1)
    stfs f2, 0xc8(r1)
    lfs f5, 0xc0(r1)
    lfs f3, 0x5a4(r29)
    lfs f4, 0xc4(r1)
    fsubs f3, f5, f3
    stfs f3, 0xc0(r1)
    lfs f3, 0x5a8(r29)
    fsubs f3, f4, f3
    stfs f3, 0xc4(r1)
    fsubs f5, f3, f0
    lfs f0, 0x5ac(r29)
    fsubs f0, f2, f0
    stfs f5, 0xc4(r1)
    stfs f0, 0xc8(r1)
    beq lbl_fn_803209E0_000014A0
    lfs f0, 0xac(r1)
    lfs f4, 0x94(r1)
    fneg f3, f0
    lfs f0, lbl_80884EF4
    fsubs f4, f4, f5
    fmuls f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_803209E0_000014A0
    lfs f0, lbl_80884E48
    stfs f0, 0xac(r1)
lbl_fn_803209E0_000014A0:
    lwz r4, 0x1a4(r1)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_803209E0_000014C0
    lwz r0, 0x0(r4)
    cmplwi r0, 0x1a
    bne lbl_fn_803209E0_000014C0
    li r3, 0x1
lbl_fn_803209E0_000014C0:
    lwz r0, 0x12a4(r29)
    rlwimi r0, r3, 3, 28, 28
    stw r0, 0x12a4(r29)
    addi r3, r1, 0x74
    lfs f3, 0x98(r1)
    lfs f5, 0xc8(r1)
    lfs f4, 0xc4(r1)
    fsubs f5, f5, f3
    lfs f0, 0x94(r1)
    lfs f3, 0xb0(r1)
    fsubs f6, f4, f0
    lfs f0, 0xac(r1)
    fadds f7, f3, f5
    lfs f4, 0xc0(r1)
    lfs f3, 0x90(r1)
    fadds f8, f0, f6
    lfs f0, 0xa8(r1)
    fsubs f3, f4, f3
    stfs f6, 0x6c(r1)
    lfs f30, lbl_80884E48
    stfs f3, 0x68(r1)
    fadds f0, f0, f3
    stfs f5, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f7, 0x7c(r1)
    bl fn_805F9920
    lfs f0, lbl_80884ECC
    fcmpo cr0, f1, f0
    ble lbl_fn_803209E0_00001754
    fcmpo cr0, f29, f0
    ble lbl_fn_803209E0_00001754
    addi r3, r1, 0x74
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x7c(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r28, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884EA8
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803209E0_000015B0
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884E48
    fcmpo cr0, f3, f0
    ble lbl_fn_803209E0_000015A4
    lfs f0, lbl_80884E74
    b lbl_fn_803209E0_000015A8
lbl_fn_803209E0_000015A4:
    lfs f0, lbl_80884EAC
lbl_fn_803209E0_000015A8:
    stfs f0, 0x48(r1)
    b lbl_fn_803209E0_000015C4
lbl_fn_803209E0_000015B0:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803209E0_000015C4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884E48
    addi r4, r1, 0x38
    lfs f30, 0xd8(r1)
    mr r5, r4
    lfs f29, 0xd4(r1)
    addi r3, r1, 0x100
    lfs f13, 0xd0(r1)
    lfs f12, 0xe8(r1)
    lfs f11, 0xe4(r1)
    lfs f10, 0xe0(r1)
    lfs f9, 0xf8(r1)
    lfs f8, 0xf4(r1)
    lfs f7, 0xf0(r1)
    lfs f6, 0xfc(r1)
    lfs f5, 0xec(r1)
    lfs f4, 0xdc(r1)
    lfs f0, lbl_80884E70
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x130(r1)
    stfs f3, 0x134(r1)
    stfs f3, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x100(r1)
    stfs f29, 0x104(r1)
    stfs f30, 0x108(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x110(r1)
    stfs f11, 0x114(r1)
    stfs f12, 0x118(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x120(r1)
    stfs f8, 0x124(r1)
    stfs f9, 0x128(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x10c(r1)
    stfs f5, 0x11c(r1)
    stfs f6, 0x12c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884EA8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803209E0_000016E0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884E48
    fcmpo cr0, f3, f0
    ble lbl_fn_803209E0_000016D0
    lfs f0, lbl_80884E74
    b lbl_fn_803209E0_000016D4
lbl_fn_803209E0_000016D0:
    lfs f0, lbl_80884EAC
lbl_fn_803209E0_000016D4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803209E0_000016F4
lbl_fn_803209E0_000016E0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803209E0_000016F4:
    addi r3, r1, 0x44
    lfs f4, lbl_80884E48
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807498C0@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r29)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807498C0@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f30, f1
    lfs f0, lbl_80884EBC
    fcmpo cr0, f30, f0
    ble lbl_fn_803209E0_00001740
    lfs f0, lbl_80884E8C
    fsubs f30, f30, f0
lbl_fn_803209E0_00001740:
    lfs f0, lbl_80884EC0
    fcmpo cr0, f30, f0
    bge lbl_fn_803209E0_00001754
    lfs f0, lbl_80884E8C
    fadds f30, f30, f0
lbl_fn_803209E0_00001754:
    lfs f0, lbl_80884E9C
    lfs f4, lbl_80884E90
    fmuls f30, f30, f0
    lfs f3, 0x584(r29)
    lfs f0, lbl_80884EF8
    fnmsubs f3, f4, f30, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803209E0_00001778
    b lbl_fn_803209E0_0000177C
lbl_fn_803209E0_00001778:
    fmr f3, f0
lbl_fn_803209E0_0000177C:
    lfs f4, lbl_80884EFC
    fcmpo cr0, f3, f4
    ble lbl_fn_803209E0_000017A8
    lfs f4, lbl_80884E90
    lfs f3, 0x584(r29)
    lfs f0, lbl_80884EF8
    fnmsubs f4, f4, f30, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_803209E0_000017A4
    b lbl_fn_803209E0_000017A8
lbl_fn_803209E0_000017A4:
    fmr f4, f0
lbl_fn_803209E0_000017A8:
    frsp f3, f4
    lfs f0, lbl_80884F00
    lwz r0, 0x54c(r29)
    fmuls f0, f3, f0
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    stfs f0, 0x584(r29)
    bne lbl_fn_803209E0_000017DC
    lfs f3, 0xc4(r1)
    lfs f0, lbl_80884E48
    fcmpo cr0, f3, f0
    bge lbl_fn_803209E0_000017DC
    stfs f0, 0xc4(r1)
lbl_fn_803209E0_000017DC:
    addi r3, r1, 0xc0
    lfs f2, 0xc8(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r31, 0x0
    psq_st f1, 0x528(r29), 0, 0
    stfs f2, 0x530(r29)
    beq lbl_fn_803209E0_0000180C
    addi r3, r1, 0xb4
    lfs f2, 0xbc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
lbl_fn_803209E0_0000180C:
    lfs f2, 0xb0(r1)
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    fdivs f0, f2, f31
    psq_st f1, 0x574(r29), 0, 0
    lfs f3, 0x574(r29)
    stfs f0, 0x57c(r29)
    fdivs f0, f3, f31
    stfs f0, 0x574(r29)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    lwz r28, 0x1d0(r1)
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_8032130C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_8032130C_00001C4C
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8032130C_00001940
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8032130C_000018E0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_8032130C_000018FC
lbl_fn_8032130C_000018E0:
    lis r5, lbl_807889F0@ha
    lwzu r4, lbl_807889F0@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_8032130C_000018FC:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x14
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8032130C_00001940
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8032130C_00001C4C
lbl_fn_8032130C_00001940:
    lwz r3, 0x55c(r31)
    cmpwi r3, 0x9
    beq lbl_fn_8032130C_00001C4C
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_8032130C_0000195C
    b lbl_fn_8032130C_00001C4C
lbl_fn_8032130C_0000195C:
    cmpwi r3, 0x2
    bne lbl_fn_8032130C_00001984
    lha r3, 0xd3a(r31)
    subi r0, r3, 0x14
    clrlwi r0, r0, 16
    cmplwi r0, 0x2
    bgt lbl_fn_8032130C_00001984
    lhz r0, 0xd38(r31)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_8032130C_00001C4C
lbl_fn_8032130C_00001984:
    lwz r5, lbl_8087EFA8
    addi r3, r31, 0xb0
    lwz r4, 0x488(r31)
    lfs f29, 0x3a4(r5)
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8032130C_000019A8
    bl fn_800A08D4
    b lbl_fn_8032130C_000019AC
lbl_fn_8032130C_000019A8:
    lfs f1, lbl_80884E50
lbl_fn_8032130C_000019AC:
    lfs f0, lbl_80884E48
    fcmpu cr0, f0, f1
    lwz r4, 0x490(r31)
    addi r3, r31, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8032130C_000019D0
    bl fn_800A08D4
    b lbl_fn_8032130C_000019D4
lbl_fn_8032130C_000019D0:
    lfs f1, lbl_80884E50
lbl_fn_8032130C_000019D4:
    lfs f0, lbl_80884E48
    fcmpu cr0, f0, f1
    lfs f0, 0x570(r31)
    lfs f2, 0x500(r31)
    fdivs f1, f0, f29
    lfs f0, 0x508(r31)
    fcmpo cr0, f1, f2
    bge lbl_fn_8032130C_00001A04
    fdivs f31, f1, f2
    lfs f30, lbl_80884E70
    lfs f29, lbl_80884E48
    b lbl_fn_8032130C_00001A44
lbl_fn_8032130C_00001A04:
    fcmpo cr0, f1, f0
    bge lbl_fn_8032130C_00001A28
    fsubs f1, f1, f2
    lfs f31, lbl_80884E70
    fsubs f0, f0, f2
    lfs f29, lbl_80884E48
    fdivs f0, f1, f0
    fadds f30, f31, f0
    b lbl_fn_8032130C_00001A44
lbl_fn_8032130C_00001A28:
    fdivs f1, f1, f0
    lfs f2, lbl_80884E70
    lfs f0, lbl_80884E68
    lfs f31, lbl_80884E9C
    lfs f30, lbl_80884E48
    fsubs f1, f1, f2
    fmadds f29, f0, f1, f2
lbl_fn_8032130C_00001A44:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x10c(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80884F04
    fcmpo cr0, f1, f0
    ble lbl_fn_8032130C_00001B3C
    lfs f0, lbl_80884E90
    li r0, 0x1
    lfs f1, lbl_80884E70
    fcmpo cr0, f31, f0
    stw r0, 0x3fc(r31)
    stfs f1, 0x2fc(r31)
    bge lbl_fn_8032130C_00001AD8
    lwz r5, 0x484(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884E48
    li r4, 0x0
    lfs f2, lbl_80884E68
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80884E70
    stfs f0, 0x2e8(r31)
    b lbl_fn_8032130C_00001C4C
lbl_fn_8032130C_00001AD8:
    lfs f0, lbl_80884ED8
    fcmpo cr0, f31, f0
    bge lbl_fn_8032130C_00001B10
    lwz r5, 0x488(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884E48
    li r4, 0x0
    lfs f2, lbl_80884E68
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f30, 0x2e8(r31)
    b lbl_fn_8032130C_00001C4C
lbl_fn_8032130C_00001B10:
    lwz r5, 0x490(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884E48
    li r4, 0x0
    lfs f2, lbl_80884E68
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f29, 0x2e8(r31)
    b lbl_fn_8032130C_00001C4C
lbl_fn_8032130C_00001B3C:
    lfs f1, lbl_80884E70
    li r0, 0x3
    lfs f0, lbl_80884E48
    fsubs f28, f1, f31
    stw r0, 0x3fc(r31)
    fcmpo cr0, f28, f0
    bge lbl_fn_8032130C_00001B60
    fmr f28, f0
    b lbl_fn_8032130C_00001B6C
lbl_fn_8032130C_00001B60:
    fcmpo cr0, f28, f1
    ble lbl_fn_8032130C_00001B6C
    fmr f28, f1
lbl_fn_8032130C_00001B6C:
    lwz r5, 0x484(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884E48
    li r4, 0x0
    lfs f2, lbl_80884E68
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f2, lbl_80884E70
    stfs f28, 0x2fc(r31)
    fsubs f1, f2, f31
    lfs f0, lbl_80884E48
    stfs f2, 0x2e8(r31)
    fabs f1, f1
    frsp f1, f1
    fsubs f28, f2, f1
    fcmpo cr0, f28, f0
    bge lbl_fn_8032130C_00001BC0
    fmr f28, f0
    b lbl_fn_8032130C_00001BCC
lbl_fn_8032130C_00001BC0:
    fcmpo cr0, f28, f2
    ble lbl_fn_8032130C_00001BCC
    fmr f28, f2
lbl_fn_8032130C_00001BCC:
    lwz r5, 0x488(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884E48
    li r4, 0x1
    lfs f2, lbl_80884E68
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80884E70
    lfs f0, lbl_80884E48
    fsubs f31, f31, f1
    stfs f30, 0x318(r31)
    stfs f28, 0x32c(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_8032130C_00001C14
    fmr f31, f0
    b lbl_fn_8032130C_00001C20
lbl_fn_8032130C_00001C14:
    fcmpo cr0, f31, f1
    ble lbl_fn_8032130C_00001C20
    fmr f31, f1
lbl_fn_8032130C_00001C20:
    lwz r5, 0x490(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884E48
    li r4, 0x2
    lfs f2, lbl_80884E68
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f29, 0x348(r31)
    stfs f31, 0x35c(r31)
lbl_fn_8032130C_00001C4C:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
