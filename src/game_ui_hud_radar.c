#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000DD0C(void);
extern void fn_80011034(void);
extern void fn_800133B0(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800CB5C8(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_8012A1B8(void);
extern void fn_80139F24(void);
extern void fn_80139F3C(void);
extern void fn_8013C38C(void);
extern void fn_8013C394(void);
extern void fn_8013C3B4(void);
extern void fn_8013C460(void);
extern void fn_8013C554(void);
extern void fn_8013CB68(void);
extern void fn_8014052C(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_8015495C(void);
extern void fn_80176548(void);
extern void fn_80179D44(void);
extern void fn_801A03E8(void);
extern void fn_801B2EDC(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8073B5D8[];
extern u8 lbl_8077DC90[];
extern u8 lbl_80781740[];
extern u8 lbl_80781988[];
extern u8 lbl_80781A00[];
extern u8 lbl_80781A78[];
extern u8 lbl_80781AF8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F498;
extern u32 lbl_808825E4;
extern u32 lbl_80882608;
extern u32 lbl_80882610;
extern u32 lbl_80882620;
extern u32 lbl_80882644;
extern u32 lbl_80882648;
extern u32 lbl_8088264C;
extern u32 lbl_80882650;
extern u32 lbl_80882654;
extern u32 lbl_80882698;
extern u32 lbl_8088269C;
extern u32 lbl_808826A0;
extern u32 lbl_808826A4;
extern u32 lbl_808826A8;
extern u32 lbl_808826AC;
extern u32 lbl_808826B0;
extern u32 lbl_808826B4;
extern u32 lbl_808826B8;
extern u32 lbl_808826BC;
extern u32 lbl_808826C0;
extern u32 lbl_808826C4;
extern u32 lbl_808826C8;
extern u32 lbl_808826CC;
extern u32 lbl_808826D0;
extern u32 lbl_808826D4;
extern u32 lbl_808826D8;
extern u32 lbl_808826DC;
extern u32 lbl_808826E0;
extern u32 lbl_808826E4;
extern u32 lbl_808826E8;
extern u32 lbl_808826EC;
extern u32 lbl_808826F0;
extern u32 lbl_808826F4;
extern u32 lbl_808826F8;
extern u32 lbl_808826FC;
extern u32 lbl_80882700;
extern u32 lbl_80882704;

/* Function declarations */
void fn_801C0144(void);
void fn_801C01E0(void);
void fn_801C0280(void);
void fn_801C02F4(void);
void fn_801C0344(void);
void fn_801C0358(void);
void fn_801C0360(void);
void fn_801C038C(void);
void fn_801C039C(void);
void fn_801C03DC(void);
void fn_801C041C(void);
void fn_801C071C(void);
void fn_801C0730(void);
void fn_801C0738(void);
void fn_801C074C(void);
void fn_801C0C04(void);
void fn_801C0C08(void);
void fn_801C0C70(void);
void fn_801C0CC4(void);
void fn_801C0D04(void);
void fn_801C0D80(void);
void fn_801C1050(void);
void fn_801C1060(void);
void fn_801C1084(void);
void fn_801C1518(void);
void fn_801C1578(void);

asm void fn_801C0144(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    li r3, 0x0
    lwz r0, 0x638(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x2dc(r4)
    cmpwi r0, 0x6b
    beq lbl_fn_801C0144_00000044
    cmpwi r0, 0x6a
    beq lbl_fn_801C0144_0000004C
    cmpwi r0, 0x67
    beq lbl_fn_801C0144_00000054
    cmpwi r0, 0x17a
    beq lbl_fn_801C0144_0000005C
    cmpwi r0, 0x17b
    beq lbl_fn_801C0144_00000064
    b lbl_fn_801C0144_0000006C
lbl_fn_801C0144_00000044:
    lfs f1, lbl_80882644
    b lbl_fn_801C0144_00000070
lbl_fn_801C0144_0000004C:
    lfs f1, lbl_80882648
    b lbl_fn_801C0144_00000070
lbl_fn_801C0144_00000054:
    lfs f1, lbl_8088264C
    b lbl_fn_801C0144_00000070
lbl_fn_801C0144_0000005C:
    lfs f1, lbl_80882650
    b lbl_fn_801C0144_00000070
lbl_fn_801C0144_00000064:
    lfs f1, lbl_80882654
    b lbl_fn_801C0144_00000070
lbl_fn_801C0144_0000006C:
    lfs f1, lbl_808825E4
lbl_fn_801C0144_00000070:
    lfs f0, lbl_80882608
    lfs f2, 0x2e4(r4)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f2
    cror eq, lt, eq
    bnelr
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
}

asm void fn_801C01E0(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    li r5, 0x0
    lwz r0, 0x638(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801C01E0_00000134
    lwz r0, 0x2dc(r4)
    cmpwi r0, 0x6b
    beq lbl_fn_801C01E0_000000E0
    cmpwi r0, 0x6a
    beq lbl_fn_801C01E0_000000E8
    cmpwi r0, 0x67
    beq lbl_fn_801C01E0_000000F0
    cmpwi r0, 0x17a
    beq lbl_fn_801C01E0_000000F8
    cmpwi r0, 0x17b
    beq lbl_fn_801C01E0_00000100
    b lbl_fn_801C01E0_00000108
lbl_fn_801C01E0_000000E0:
    lfs f1, lbl_80882644
    b lbl_fn_801C01E0_0000010C
lbl_fn_801C01E0_000000E8:
    lfs f1, lbl_80882648
    b lbl_fn_801C01E0_0000010C
lbl_fn_801C01E0_000000F0:
    lfs f1, lbl_8088264C
    b lbl_fn_801C01E0_0000010C
lbl_fn_801C01E0_000000F8:
    lfs f1, lbl_80882650
    b lbl_fn_801C01E0_0000010C
lbl_fn_801C01E0_00000100:
    lfs f1, lbl_80882654
    b lbl_fn_801C01E0_0000010C
lbl_fn_801C01E0_00000108:
    lfs f1, lbl_808825E4
lbl_fn_801C01E0_0000010C:
    lfs f0, lbl_80882620
    lfs f2, 0x2e4(r4)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f2
    cror eq, lt, eq
    bne lbl_fn_801C01E0_00000134
    lbz r0, 0x1d(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801C01E0_00000134
    li r5, 0x1
lbl_fn_801C01E0_00000134:
    mr r3, r5
    blr
}

asm void fn_801C0280(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x4(r4)
    stw r0, 0x24(r1)
    addi r5, r1, 0x8
    lfs f3, lbl_80882620
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x530(r6)
    lfs f4, 0xc(r1)
    lfs f0, 0x10(r4)
    fadds f5, f4, f3
    lfs f4, 0xc(r4)
    fsubs f6, f0, f2
    lfs f3, 0x8(r4)
    lfs f0, 0x8(r1)
    mr r4, r3
    fsubs f4, f4, f5
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f5, 0xc(r1)
    stfs f0, 0x0(r3)
    stfs f4, 0x4(r3)
    stfs f6, 0x8(r3)
    bl fn_805F98D0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801C02F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C7030@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807C7030@l
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801B2EDC
    lis r3, lbl_80781740@ha
    lwz r4, 0x4(r31)
    addi r3, r3, lbl_80781740@l
    stw r3, 0x0(r31)
    li r0, 0x1f
    stw r0, 0x560(r4)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C0344(void)
{
    nofralloc
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_801C0358(void)
{
    nofralloc
    li r3, 0x41
    blr
}

asm void fn_801C0360(void)
{
    nofralloc
    lbz r0, 0x1d(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_801C0360_00000240
    lfs f1, 0x18(r3)
    lfs f0, lbl_80882610
    fcmpo cr0, f1, f0
    bge lbl_fn_801C0360_00000240
    li r4, 0x1
lbl_fn_801C0360_00000240:
    mr r3, r4
    blr
}

asm void fn_801C038C(void)
{
    nofralloc
    li r4, 0x5
    li r5, 0x0
    addi r3, r3, 0x30
    b fn_800CB5C8
}

asm void fn_801C039C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C039C_00000280
    cmpwi r4, 0x0
    ble lbl_fn_801C039C_00000280
    bl dtor_80084684
lbl_fn_801C039C_00000280:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C03DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C03DC_000002C0
    cmpwi r4, 0x0
    ble lbl_fn_801C03DC_000002C0
    bl dtor_80084684
lbl_fn_801C03DC_000002C0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C041C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lfs f2, 0x8(r5)
    lis r6, lbl_80781AF8@ha
    stw r0, 0x104(r1)
    fmr f4, f1
    fabs f3, f2
    addi r6, r6, lbl_80781AF8@l
    stfd f31, 0xf0(r1)
    li r0, 0x3
    lfs f0, lbl_80882698
    psq_st f31, 0xf8(r1), 0, 0
    frsp f3, f3
    psq_l f1, 0x0(r5), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    fcmpo cr0, f3, f0
    stw r31, 0xdc(r1)
    addi r31, r1, 0x50
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x4(r3)
    psq_st f1, 0x8(r3), 0, 0
    addi r30, r4, 0xb0
    stfs f2, 0x10(r3)
    stfs f4, 0x20(r3)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bge lbl_fn_801C041C_00000380
    lfs f3, 0x50(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C041C_00000374
    lfs f0, lbl_8088269C
    b lbl_fn_801C041C_00000378
lbl_fn_801C041C_00000374:
    lfs f0, lbl_808826A0
lbl_fn_801C041C_00000378:
    stfs f0, 0x48(r1)
    b lbl_fn_801C041C_00000394
lbl_fn_801C041C_00000380:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C041C_00000394:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808826A4
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
    lfs f0, lbl_808826A8
    psq_l f1, 0x0(r31), 0, 0
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
    lfs f0, lbl_80882698
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C041C_000004B0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C041C_000004A0
    lfs f0, lbl_8088269C
    b lbl_fn_801C041C_000004A4
lbl_fn_801C041C_000004A0:
    lfs f0, lbl_808826A0
lbl_fn_801C041C_000004A4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C041C_000004C4
lbl_fn_801C041C_000004B0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C041C_000004C4:
    lfs f0, lbl_808826A4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    lwz r3, 0x4(r29)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x4(r29)
    stfs f0, 0x4c(r1)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x14(r29), 0, 0
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801C041C_00000514
    bl fn_801539E0
lbl_fn_801C041C_00000514:
    li r0, 0x1
    stw r0, 0x34c(r30)
    lfs f0, lbl_808826A8
    mr r3, r30
    stfs f0, 0x24c(r30)
    li r4, 0x0
    lfs f1, lbl_808826A4
    li r5, 0x60
    lfs f2, lbl_808826AC
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808826A8
    stfs f0, 0x238(r30)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801C041C_00000590
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801C041C_00000590
    lwz r3, lbl_8087F498
    li r5, 0xe
    lwz r4, 0x4(r29)
    li r6, 0x0
    lfs f1, lbl_808826A8
    lfs f2, lbl_808826B0
    bl fn_803EA77C
lbl_fn_801C041C_00000590:
    lfs f4, lbl_808826B4
    mr r3, r29
    lfs f3, lbl_808826B8
    lfs f0, lbl_808826BC
    stfs f4, 0x24(r29)
    stfs f3, 0x28(r29)
    stfs f0, 0x2c(r29)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_801C071C(void)
{
    nofralloc
    lis r5, lbl_8077DC90@ha
    stw r4, 0x4(r3)
    addi r5, r5, lbl_8077DC90@l
    stw r5, 0x0(r3)
    blr
}

asm void fn_801C0730(void)
{
    nofralloc
    stw r4, 0x560(r3)
    blr
}

asm void fn_801C0738(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    blr
}

asm void fn_801C074C(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    lfs f31, lbl_808826A4
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    stw r31, 0x18c(r1)
    stw r30, 0x188(r1)
    li r30, 0x0
    stw r29, 0x184(r1)
    stw r28, 0x180(r1)
    mr r28, r3
    lwz r4, 0x4(r3)
    lfs f0, 0x28(r3)
    addi r4, r4, 0xb0
    lfs f3, 0x234(r4)
    fcmpo cr0, f3, f0
    ble lbl_fn_801C074C_00000674
    lfs f0, 0x2c(r3)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801C074C_00000674
    lfs f31, lbl_808826A8
lbl_fn_801C074C_00000674:
    lfs f29, 0x234(r4)
    lfs f3, 0x24(r3)
    fcmpo cr0, f29, f3
    cror eq, lt, eq
    bne lbl_fn_801C074C_00000868
    li r0, 0x0
    lfs f0, lbl_808826B4
    stw r0, 0x164(r1)
    addi r31, r1, 0xb0
    fdivs f3, f0, f3
    lfs f5, lbl_808826A8
    stw r0, 0x168(r1)
    addi r30, r1, 0xa4
    lwz r5, lbl_8087EFA8
    addi r29, r1, 0x98
    stw r0, 0x16c(r1)
    lfs f0, lbl_808826B0
    stw r0, 0x170(r1)
    lwz r4, 0x4(r3)
    lfs f31, 0x620(r4)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0xc(r3)
    psq_l f1, 0x528(r4), 0, 0
    fmuls f8, f4, f5
    lfs f12, 0x3a4(r5)
    lfs f4, 0x8(r3)
    lfs f6, 0x10(r3)
    fmuls f7, f4, f5
    psq_st f1, 0x0(r30), 0, 0
    fmuls f6, f6, f5
    lfs f2, 0x530(r4)
    fmuls f10, f8, f12
    lfs f4, 0xa8(r1)
    fmuls f11, f7, f12
    lfs f5, 0xa4(r1)
    fadds f4, f4, f10
    stfs f7, 0x80(r1)
    fmuls f9, f6, f12
    fadds f5, f5, f11
    fmadds f3, f3, f12, f4
    stfs f6, 0x88(r1)
    fadds f7, f2, f9
    stfs f5, 0xa4(r1)
    stfs f3, 0xa8(r1)
    fmr f2, f7
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    lwz r4, 0x4(r3)
    stfs f8, 0x84(r1)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f3, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fadds f6, f3, f0
    lfs f4, 0x98(r1)
    stfs f10, 0x90(r1)
    stfs f6, 0x9c(r1)
    stfs f6, 0xb4(r1)
    lfs f5, 0x10(r3)
    lfs f3, 0xc(r3)
    lfs f0, 0x8(r3)
    fmuls f5, f5, f31
    fmuls f8, f3, f31
    stfs f11, 0x8c(r1)
    fmuls f10, f0, f31
    mr r3, r4
    fadds f0, f2, f5
    fadds f3, f6, f8
    fadds f4, f4, f10
    stfs f9, 0x94(r1)
    stfs f7, 0xac(r1)
    stfs f10, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    lwz r3, lbl_8087EE98
    mr r5, r31
    mr r6, r29
    addi r4, r1, 0x130
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C074C_00000860
    lfs f3, 0xc(r28)
    addi r3, r1, 0x68
    lfs f0, 0x8(r28)
    fmuls f5, f3, f31
    lfs f3, 0x138(r1)
    fmuls f6, f0, f31
    lfs f0, 0x134(r1)
    lfs f4, 0x10(r28)
    fsubs f7, f3, f5
    fsubs f0, f0, f6
    lfs f3, 0x13c(r1)
    fmuls f4, f4, f31
    stfs f7, 0x6c(r1)
    lwz r4, 0x4(r28)
    stfs f0, 0x68(r1)
    fsubs f3, f3, f4
    lfs f0, 0x52c(r4)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    stfs f0, 0xa8(r1)
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0xac(r1)
    frsp f2, f2
    psq_st f1, 0x528(r4), 0, 0
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f3, 0x70(r1)
    stfs f2, 0x530(r4)
lbl_fn_801C074C_00000860:
    li r3, 0x0
    b lbl_fn_801C074C_00000A88
lbl_fn_801C074C_00000868:
    mr r3, r4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808826B8
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_801C074C_000008B0
    lwz r3, 0x4(r28)
    lwz r0, 0x564(r3)
    cmpwi r0, 0x2
    bne lbl_fn_801C074C_000008AC
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
lbl_fn_801C074C_000008AC:
    li r30, 0x1
lbl_fn_801C074C_000008B0:
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lfs f2, 0x10(r28)
    addi r29, r1, 0x50
    psq_l f1, 0x8(r28), 0, 0
    fabs f3, f2
    lfs f0, lbl_80882698
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C074C_00000910
    lfs f3, 0x50(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C074C_00000904
    lfs f0, lbl_8088269C
    b lbl_fn_801C074C_00000908
lbl_fn_801C074C_00000904:
    lfs f0, lbl_808826A0
lbl_fn_801C074C_00000908:
    stfs f0, 0x48(r1)
    b lbl_fn_801C074C_00000924
lbl_fn_801C074C_00000910:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C074C_00000924:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808826A4
    addi r4, r1, 0x38
    lfs f29, 0xc8(r1)
    mr r5, r4
    lfs f30, 0xc4(r1)
    addi r3, r1, 0xf0
    lfs f13, 0xc0(r1)
    lfs f12, 0xd8(r1)
    lfs f11, 0xd4(r1)
    lfs f10, 0xd0(r1)
    lfs f9, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f7, 0xe0(r1)
    lfs f6, 0xec(r1)
    lfs f5, 0xdc(r1)
    lfs f4, 0xcc(r1)
    lfs f0, lbl_808826A8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f3, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xf0(r1)
    stfs f30, 0xf4(r1)
    stfs f29, 0xf8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x100(r1)
    stfs f11, 0x104(r1)
    stfs f12, 0x108(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f9, 0x118(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xfc(r1)
    stfs f5, 0x10c(r1)
    stfs f6, 0x11c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882698
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C074C_00000A40
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C074C_00000A30
    lfs f0, lbl_8088269C
    b lbl_fn_801C074C_00000A34
lbl_fn_801C074C_00000A30:
    lfs f0, lbl_808826A0
lbl_fn_801C074C_00000A34:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C074C_00000A54
lbl_fn_801C074C_00000A40:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C074C_00000A54:
    addi r3, r1, 0x44
    lfs f2, lbl_808826A4
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f31
    li r5, 0x0
    stfs f2, 0x58(r1)
    stfs f2, 0x4c(r1)
    lwz r3, 0x4(r28)
    lfs f2, 0x20(r28)
    bl fn_8013CB68
    mr r3, r30
lbl_fn_801C074C_00000A88:
    lwz r0, 0x1c4(r1)
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    psq_l f29, 0x198(r1), 0, 0
    lfd f29, 0x190(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r29, 0x184(r1)
    lwz r28, 0x180(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_801C0C04(void)
{
    nofralloc
    blr
}

asm void fn_801C0C08(void)
{
    nofralloc
    lwz r5, 0x4(r4)
    lfs f0, lbl_808826C0
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r5)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801C0C08_00000AF8
    lfs f0, 0x18(r4)
    stfs f0, 0x4(r3)
    blr
lbl_fn_801C0C08_00000AF8:
    lfs f0, lbl_808826C4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bnelr
    fsubs f5, f0, f3
    lfs f4, lbl_808826B0
    lfs f0, 0x18(r4)
    lfs f3, 0x52c(r5)
    fdivs f4, f5, f4
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x4(r3)
    blr
}

asm void fn_801C0C70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801C041C
    lfs f2, lbl_808826B8
    lis r4, lbl_80781A78@ha
    lfs f1, lbl_808826C8
    addi r4, r4, lbl_80781A78@l
    lfs f0, lbl_808826CC
    mr r3, r31
    stw r4, 0x0(r31)
    stfs f2, 0x24(r31)
    stfs f1, 0x28(r31)
    stfs f0, 0x2c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C0CC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C0CC4_00000BA8
    cmpwi r4, 0x0
    ble lbl_fn_801C0CC4_00000BA8
    bl dtor_80084684
lbl_fn_801C0CC4_00000BA8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C0D04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_808826D0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    lfs f1, 0x2e4(r4)
    fcmpo cr0, f1, f0
    ble lbl_fn_801C0D04_00000C28
    lfs f0, lbl_808826CC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_801C0D04_00000C28
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r6, 0x4(r31)
    mr r8, r3
    lwz r3, lbl_8087F048
    li r4, 0x0
    lwz r7, 0x638(r6)
    li r5, 0x0
    lfs f1, lbl_808826A4
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_801C0D04_00000C28:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C0D80(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    mr r30, r5
    stw r29, 0x94(r1)
    mr r29, r3
    bl fn_801C071C
    lis r4, lbl_80781A00@ha
    addi r3, r29, 0x8
    addi r4, r4, lbl_80781A00@l
    stw r4, 0x0(r29)
    bl fn_80057A64
    addi r3, r29, 0x14
    bl fn_80057A64
    lwz r3, 0x4(r29)
    li r4, 0x2d
    bl fn_801C0730
    lwz r3, 0x4(r29)
    bl fn_8000DD0C
    mr r31, r3
    lwz r3, 0x4(r29)
    li r4, 0x0
    bl fn_8013C460
    lwz r3, 0x4(r29)
    li r4, 0x0
    bl fn_801C1050
    lwz r3, 0x4(r29)
    bl fn_801446F0
    mr r4, r30
    addi r3, r29, 0x8
    bl fn_8000D124
    lwz r4, 0x4(r29)
    addi r3, r1, 0x80
    bl fn_8014052C
    mr r4, r30
    addi r3, r1, 0x80
    bl fn_801A03E8
    fmr f31, f1
    lfs f1, lbl_808826D4
    bl fn_801C1060
    fcmpo cr0, f31, f1
    ble lbl_fn_801C0D80_00000D34
    lfs f1, lbl_808826A4
    mr r3, r31
    lfs f2, lbl_808826AC
    li r4, 0x0
    li r5, 0x43
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x74
    addi r4, r29, 0x8
    bl fn_80011034
    lwz r3, 0x4(r29)
    addi r4, r1, 0x74
    bl fn_801C0738
    b lbl_fn_801C0D80_00000E84
lbl_fn_801C0D80_00000D34:
    lfs f1, lbl_808826D8
    bl fn_801C1060
    fcmpo cr0, f31, f1
    ble lbl_fn_801C0D80_00000E3C
    mr r4, r30
    addi r3, r1, 0x68
    bl fn_80011034
    lfs f31, 0x6c(r1)
    lwz r3, 0x4(r29)
    bl fn_8012A1B8
    lfs f0, 0x4(r3)
    fsubs f1, f31, f0
    bl fn_800133B0
    lfs f0, lbl_808826A4
    fcmpo cr0, f1, f0
    ble lbl_fn_801C0D80_00000DD8
    fmr f1, f0
    lfs f2, lbl_808826AC
    mr r3, r31
    li r4, 0x0
    li r5, 0x41
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_808826A4
    addi r3, r1, 0x44
    lfs f2, lbl_808826A8
    fmr f3, f1
    bl fn_8000D114
    mr r5, r3
    addi r3, r1, 0x50
    addi r4, r29, 0x8
    bl fn_8013C394
    addi r3, r1, 0x5c
    addi r4, r1, 0x50
    bl fn_80011034
    lwz r3, 0x4(r29)
    addi r4, r1, 0x5c
    bl fn_801C0738
    b lbl_fn_801C0D80_00000E84
lbl_fn_801C0D80_00000DD8:
    fmr f1, f0
    lfs f2, lbl_808826AC
    mr r3, r31
    li r4, 0x0
    li r5, 0x44
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_808826A4
    addi r3, r1, 0x20
    lfs f2, lbl_808826C8
    fmr f3, f1
    bl fn_8000D114
    mr r5, r3
    addi r3, r1, 0x2c
    addi r4, r29, 0x8
    bl fn_8013C394
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    bl fn_80011034
    lwz r3, 0x4(r29)
    addi r4, r1, 0x38
    bl fn_801C0738
    b lbl_fn_801C0D80_00000E84
lbl_fn_801C0D80_00000E3C:
    lfs f1, lbl_808826A4
    mr r3, r31
    lfs f2, lbl_808826AC
    li r4, 0x0
    li r5, 0x42
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x8
    addi r4, r29, 0x8
    bl fn_8013C3B4
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_80011034
    lwz r3, 0x4(r29)
    addi r4, r1, 0x14
    bl fn_801C0738
lbl_fn_801C0D80_00000E84:
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808826DC
    lwz r3, 0x4(r29)
    fdivs f0, f0, f1
    stfs f0, 0x20(r29)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r29, 0x14
    bl fn_8000D124
    lfs f0, lbl_808826A4
    mr r3, r31
    stfs f0, 0x24(r29)
    li r4, 0x1
    bl fn_80139F24
    lfs f1, lbl_808826A8
    mr r3, r31
    li r4, 0x0
    bl fn_8013C554
    lfs f1, lbl_808826A8
    mr r3, r31
    li r4, 0x0
    bl fn_80139F3C
    psq_l f31, 0xa8(r1), 0, 0
    mr r3, r29
    lfd f31, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_801C1050(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    rlwimi r0, r4, 4, 27, 27
    stw r0, 0x12a4(r3)
    blr
}

asm void fn_801C1060(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8068A850
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C1084(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x140
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    bl _savegpr_27
    lwz r4, 0x4(r3)
    mr r31, r3
    lbz r0, 0x2f4(r4)
    addi r27, r4, 0xb0
    cmpwi r0, 0x0
    beq lbl_fn_801C1084_00000F8C
    li r3, 0x1
    b lbl_fn_801C1084_000013A4
lbl_fn_801C1084_00000F8C:
    lfs f30, 0x234(r27)
    mr r3, r27
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    bge lbl_fn_801C1084_00001364
    li r0, 0x0
    stw r0, 0xfc(r1)
    lfs f0, lbl_808826E0
    stw r0, 0x100(r1)
    stw r0, 0x104(r1)
    stw r0, 0x108(r1)
    lfs f3, 0x234(r27)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C1084_000011B0
    lwz r3, 0x4(r31)
    addi r30, r1, 0xb8
    lwz r4, lbl_8087EFA8
    addi r29, r1, 0xac
    lfs f31, 0x620(r3)
    addi r28, r1, 0xa0
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0xc0(r1)
    lfs f3, lbl_808826E4
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, lbl_808826B0
    lfs f10, 0x3a4(r4)
    lfs f6, 0x20(r31)
    lfs f5, 0xc(r31)
    fmuls f3, f3, f10
    lfs f4, 0x8(r31)
    fmuls f8, f5, f6
    lfs f5, 0x10(r31)
    fmuls f9, f4, f6
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    fmuls f7, f5, f6
    fmuls f11, f8, f10
    lfs f29, 0x238(r27)
    fmuls f12, f9, f10
    lfs f4, 0xb0(r1)
    fmuls f10, f7, f10
    stfs f9, 0x44(r1)
    fmuls f13, f11, f29
    lfs f5, 0xac(r1)
    fmuls f30, f12, f29
    lfs f2, 0x530(r3)
    fmuls f9, f10, f29
    stfs f7, 0x4c(r1)
    fadds f4, f4, f13
    stfs f8, 0x48(r1)
    fadds f6, f2, f9
    fadds f5, f5, f30
    stfs f11, 0x54(r1)
    fmadds f3, f3, f29, f4
    stfs f5, 0xac(r1)
    fmr f2, f6
    stfs f3, 0xb0(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lwz r3, 0x4(r31)
    lwz r27, lbl_8087EE98
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f3, 0xa4(r1)
    stfs f2, 0xa8(r1)
    fadds f5, f3, f0
    lfs f4, 0xa0(r1)
    stfs f12, 0x50(r1)
    stfs f5, 0xa4(r1)
    stfs f5, 0xbc(r1)
    lfs f0, 0x10(r31)
    lfs f3, 0xc(r31)
    fmuls f7, f0, f31
    lfs f0, 0x8(r31)
    fmuls f8, f3, f31
    stfs f10, 0x58(r1)
    fmuls f11, f0, f31
    fadds f0, f2, f7
    fadds f3, f5, f8
    stfs f30, 0x5c(r1)
    fadds f4, f4, f11
    stfs f13, 0x60(r1)
    stfs f9, 0x64(r1)
    stfs f6, 0xb4(r1)
    stfs f11, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f4, 0xa0(r1)
    stfs f3, 0xa4(r1)
    stfs f0, 0xa8(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r27
    mr r5, r30
    mr r6, r28
    addi r4, r1, 0xc8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C1084_000011A8
    lfs f3, 0xc(r31)
    addi r3, r1, 0x2c
    lfs f0, 0x8(r31)
    fmuls f5, f3, f31
    lfs f3, 0xd0(r1)
    fmuls f6, f0, f31
    lfs f0, 0xcc(r1)
    lfs f4, 0x10(r31)
    fsubs f7, f3, f5
    fsubs f0, f0, f6
    lfs f3, 0xd4(r1)
    fmuls f4, f4, f31
    stfs f7, 0x30(r1)
    lwz r4, 0x4(r31)
    stfs f0, 0x2c(r1)
    fsubs f3, f3, f4
    lfs f0, 0x52c(r4)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f3
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0xb4(r1)
    frsp f2, f2
    psq_st f1, 0x528(r4), 0, 0
    stfs f6, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f3, 0x34(r1)
    stfs f2, 0x530(r4)
lbl_fn_801C1084_000011A8:
    li r3, 0x0
    b lbl_fn_801C1084_000013A4
lbl_fn_801C1084_000011B0:
    lfs f5, 0x20(r31)
    lis r0, 0x4330
    lfs f4, 0x10(r31)
    lis r4, lbl_8073B5D8@ha
    lfs f3, 0xc(r31)
    addi r6, r1, 0x88
    fmuls f7, f4, f5
    lfs f0, 0x8(r31)
    fmuls f8, f3, f5
    lwz r5, lbl_8087EFA8
    fmuls f5, f0, f5
    lfs f4, 0x238(r27)
    lfs f0, 0x3a4(r5)
    addi r3, r1, 0x78
    lwz r7, lbl_8087F0A8
    fmuls f10, f8, f0
    stw r0, 0x118(r1)
    fmuls f11, f5, f0
    lfd f6, lbl_8073B5D8@l(r4)
    fmuls f9, f7, f0
    stfs f5, 0x8(r1)
    fmuls f3, f10, f4
    stfs f8, 0xc(r1)
    fmuls f0, f9, f4
    fmuls f12, f11, f4
    stfs f3, 0x98(r1)
    lfs f4, lbl_808826E8
    stfs f0, 0x9c(r1)
    lfs f0, lbl_808826A8
    stfs f12, 0x94(r1)
    lwz r0, 0x30(r7)
    lfs f12, 0x3a4(r5)
    mullw r0, r0, r0
    lfs f3, 0x24(r31)
    stfs f7, 0x10(r1)
    stfs f11, 0x14(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x11c(r1)
    lfd f5, 0x118(r1)
    stfs f10, 0x18(r1)
    fsubs f5, f5, f6
    stfs f9, 0x1c(r1)
    fdivs f4, f4, f5
    fmadds f3, f4, f12, f3
    stfs f3, 0x24(r31)
    fsubs f0, f3, f0
    stfs f0, 0x98(r1)
    lwz r4, 0x4(r31)
    addi r5, r4, 0x528
    lfs f2, 0x530(r4)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x90(r1)
    bl fn_80176548
    lwz r3, 0x4(r31)
    bl fn_80179D44
    lwz r5, 0x4(r31)
    mr r7, r3
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xc8
    addi r8, r5, 0x5b8
    lfs f1, 0x84(r1)
    addi r5, r1, 0x78
    addi r6, r1, 0x94
    li r9, 0x0
    bl fn_8004D388
    addi r5, r1, 0xd8
    lwz r6, 0x4(r31)
    addi r4, r1, 0x68
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r3, 0x0
    lfs f0, 0x5a8(r6)
    lfs f3, 0x6c(r1)
    lfs f5, 0x68(r1)
    fsubs f3, f3, f0
    lfs f4, 0x5a4(r6)
    lfs f0, 0x84(r1)
    fsubs f4, f5, f4
    lfs f2, 0xe0(r1)
    fsubs f5, f3, f0
    lfs f0, 0x5ac(r6)
    stfs f4, 0x68(r1)
    fsubs f2, f2, f0
    stfs f5, 0x6c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x70(r1)
    stfs f2, 0x530(r6)
    beq lbl_fn_801C1084_00001344
    lfs f0, 0x98(r1)
    lfs f4, 0x8c(r1)
    fneg f3, f0
    lfs f0, lbl_808826EC
    fsubs f4, f4, f5
    fmuls f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_801C1084_00001344
    lfs f0, lbl_808826A4
    stfs f0, 0x98(r1)
    stfs f0, 0x24(r31)
lbl_fn_801C1084_00001344:
    addi r4, r1, 0x94
    lwz r5, 0x4(r31)
    lfs f2, 0x9c(r1)
    li r3, 0x0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x57c(r5)
    b lbl_fn_801C1084_000013A4
lbl_fn_801C1084_00001364:
    lwz r3, 0x4(r31)
    lwz r0, 0x564(r3)
    cmpwi r0, 0x2
    bne lbl_fn_801C1084_00001388
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
lbl_fn_801C1084_00001388:
    lwz r3, 0x4(r31)
    li r5, 0x0
    lfs f1, lbl_808826A8
    lfs f2, 0x20(r31)
    addi r4, r3, 0x534
    bl fn_8013CB68
    li r3, 0x1
lbl_fn_801C1084_000013A4:
    addi r11, r1, 0x140
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    bl _restgpr_27
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_801C1518(void)
{
    nofralloc
    lwz r5, 0x4(r4)
    lfs f3, lbl_808826E0
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lfs f4, 0x2e4(r5)
    fcmpo cr0, f4, f3
    bge lbl_fn_801C1518_00001404
    lfs f0, 0x18(r4)
    stfs f0, 0x4(r3)
    blr
lbl_fn_801C1518_00001404:
    lfs f0, lbl_808826F0
    fcmpo cr0, f4, f0
    bgelr
    fsubs f5, f4, f3
    lfs f4, lbl_808826B0
    lfs f0, 0x52c(r5)
    lfs f3, 0x18(r4)
    fdivs f4, f5, f4
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x4(r3)
    blr
}

asm void fn_801C1578(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    stfd f30, 0x1d0(r1)
    psq_st f30, 0x1d8(r1), 0, 0
    bl _savegpr_26
    lis r8, lbl_80781988@ha
    stw r4, 0x4(r3)
    addi r8, r8, lbl_80781988@l
    li r0, 0x2d
    stw r8, 0x0(r3)
    mr r30, r3
    mr r26, r5
    mr r27, r6
    stw r0, 0x560(r4)
    mr r31, r7
    lwz r4, 0x4(r3)
    lwz r0, 0x12a4(r4)
    addi r28, r4, 0xb0
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x12a4(r4)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x12a4(r4)
    lwz r3, 0x4(r3)
    bl fn_801446F0
    lfs f1, lbl_808826A4
    mr r3, r28
    lfs f2, lbl_808826AC
    li r4, 0x0
    li r5, 0x213
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x1
    stw r0, 0x34c(r28)
    lfs f0, lbl_808826A8
    cmpwi r31, 0x0
    stfs f0, 0x24c(r28)
    lfs f0, lbl_808826F4
    stfs f0, 0x238(r28)
    beq lbl_fn_801C1578_000014F8
    lfs f0, lbl_808826B0
    stfs f0, 0x234(r28)
lbl_fn_801C1578_000014F8:
    lfs f0, lbl_808826A4
    addi r29, r1, 0xbc
    psq_l f1, 0x0(r27), 0, 0
    li r0, 0x0
    lfs f2, 0x8(r27)
    stfs f0, 0x38(r30)
    lfs f0, 0x8(r26)
    lfs f3, 0x8(r27)
    lfs f4, 0x4(r26)
    fneg f7, f0
    fadds f6, f3, f0
    lwz r3, 0x4(r30)
    psq_st f1, 0x20(r30), 0, 0
    fneg f8, f4
    lfs f5, 0x4(r27)
    stfs f2, 0x28(r30)
    lfs f0, 0x0(r26)
    fadds f4, f5, f4
    lfs f3, 0x0(r27)
    lfs f2, 0x530(r3)
    fneg f5, f0
    psq_l f1, 0x528(r3), 0, 0
    fadds f3, f3, f0
    psq_st f1, 0x14(r30), 0, 0
    lfs f0, 0x18(r30)
    stfs f2, 0x1c(r30)
    stfs f0, 0x24(r30)
    psq_st f1, 0x0(r29), 0, 0
    lwz r28, lbl_8087EE98
    stw r0, 0x19c(r1)
    stw r0, 0x1a0(r1)
    stw r0, 0x1a4(r1)
    stw r0, 0x1a8(r1)
    stfs f2, 0xc4(r1)
    stfs f3, 0xb0(r1)
    stfs f4, 0xb4(r1)
    stfs f6, 0xb8(r1)
    stfs f4, 0xc0(r1)
    stfs f5, 0xa4(r1)
    stfs f8, 0xa8(r1)
    stfs f7, 0xac(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r28
    mr r5, r29
    addi r4, r1, 0x168
    addi r6, r1, 0xb0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C1578_000015E0
    addi r4, r1, 0x190
    lfs f2, 0x198(r1)
    addi r3, r1, 0xa4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xac(r1)
lbl_fn_801C1578_000015E0:
    lfs f0, lbl_808826A4
    addi r3, r1, 0xa4
    stfs f0, 0xa8(r1)
    bl fn_805F9920
    lfs f0, lbl_808826F8
    fcmpo cr0, f1, f0
    ble lbl_fn_801C1578_0000160C
    addi r3, r1, 0xa4
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_801C1578_00001680
lbl_fn_801C1578_0000160C:
    lwz r5, 0x4(r30)
    addi r3, r1, 0x138
    lfs f3, lbl_808826A4
    li r4, 0x79
    lfs f0, lbl_808826A8
    stfs f3, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x94(r1)
    addi r4, r1, 0x98
    lfs f3, 0x90(r1)
    addi r3, r1, 0xa4
    fneg f4, f0
    lfs f0, 0x8c(r1)
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0xa0(r1)
    frsp f2, f4
    stfs f0, 0x98(r1)
    stfs f3, 0x9c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xac(r1)
lbl_fn_801C1578_00001680:
    lfs f3, 0xa8(r1)
    addi r3, r1, 0x80
    lfs f0, 0xa4(r1)
    cmpwi r31, 0x0
    fneg f4, f3
    lfs f3, 0xac(r1)
    fneg f0, f0
    lfs f6, lbl_808826FC
    stfs f4, 0x84(r1)
    fneg f7, f3
    stfs f0, 0x80(r1)
    frsp f2, f7
    lfs f4, 0x20(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r30), 0, 0
    fmuls f8, f2, f6
    lfs f0, 0x28(r30)
    lfs f3, 0xc(r30)
    lfs f5, 0x8(r30)
    fmuls f9, f3, f6
    lfs f3, 0x24(r30)
    fmuls f5, f5, f6
    stfs f7, 0x88(r1)
    fsubs f0, f0, f8
    fsubs f3, f3, f9
    fsubs f4, f4, f5
    stfs f2, 0x10(r30)
    stfs f5, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f4, 0x20(r30)
    stfs f3, 0x24(r30)
    stfs f0, 0x28(r30)
    bne lbl_fn_801C1578_00001714
    lfs f0, lbl_808826B8
    fadds f0, f3, f0
    stfs f0, 0x24(r30)
lbl_fn_801C1578_00001714:
    lfs f5, 0x10(r30)
    addi r3, r1, 0x68
    lfs f4, lbl_808826B0
    addi r29, r1, 0xbc
    lfs f3, 0xc(r30)
    addi r28, r1, 0xb0
    fmuls f5, f5, f4
    lfs f0, 0x8(r30)
    fmuls f6, f3, f4
    lfs f3, 0x28(r30)
    fmuls f4, f0, f4
    lfs f0, 0x24(r30)
    fadds f7, f3, f5
    lfs f3, 0x20(r30)
    fadds f8, f0, f6
    lfs f0, lbl_80882700
    fadds f3, f3, f4
    stfs f4, 0x5c(r1)
    fmr f2, f7
    stfs f3, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f2, 0x34(r30)
    frsp f2, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lwz r27, lbl_8087EE98
    stfs f2, 0xc4(r1)
    lfs f3, 0xc0(r1)
    lfs f2, 0x34(r30)
    fadds f0, f3, f0
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f0, 0xc0(r1)
    stfs f6, 0x60(r1)
    lwz r3, 0x4(r30)
    stfs f5, 0x64(r1)
    stfs f7, 0x70(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r27
    mr r5, r29
    mr r6, r28
    addi r4, r1, 0x168
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C1578_000017F0
    addi r3, r1, 0x16c
    lfs f2, 0x174(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r30), 0, 0
    stfs f2, 0x34(r30)
    b lbl_fn_801C1578_00001810
lbl_fn_801C1578_000017F0:
    psq_l f1, 0x20(r30), 0, 0
    psq_st f1, 0x2c(r30), 0, 0
    lfs f2, 0x28(r30)
    lfs f3, 0x30(r30)
    lfs f0, lbl_808826C0
    stfs f2, 0x34(r30)
    fadds f0, f3, f0
    stfs f0, 0x30(r30)
lbl_fn_801C1578_00001810:
    cmpwi r31, 0x0
    beq lbl_fn_801C1578_00001828
    lfs f3, 0x30(r30)
    lfs f0, lbl_80882704
    fsubs f0, f3, f0
    stfs f0, 0x24(r30)
lbl_fn_801C1578_00001828:
    lfs f2, 0x10(r30)
    addi r28, r1, 0x50
    psq_l f1, 0x8(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80882698
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C1578_00001874
    lfs f3, 0x50(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C1578_00001868
    lfs f0, lbl_8088269C
    b lbl_fn_801C1578_0000186C
lbl_fn_801C1578_00001868:
    lfs f0, lbl_808826A0
lbl_fn_801C1578_0000186C:
    stfs f0, 0x48(r1)
    b lbl_fn_801C1578_00001888
lbl_fn_801C1578_00001874:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C1578_00001888:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808826A4
    addi r4, r1, 0x38
    lfs f30, 0xd0(r1)
    mr r5, r4
    lfs f31, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_808826A8
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xf8(r1)
    stfs f31, 0xfc(r1)
    stfs f30, 0x100(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882698
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C1578_000019A4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C1578_00001994
    lfs f0, lbl_8088269C
    b lbl_fn_801C1578_00001998
lbl_fn_801C1578_00001994:
    lfs f0, lbl_808826A0
lbl_fn_801C1578_00001998:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C1578_000019B8
lbl_fn_801C1578_000019A4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C1578_000019B8:
    lfs f2, lbl_808826A4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lwz r4, 0x4(r30)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    psq_l f31, 0x1e8(r1), 0, 0
    lfd f31, 0x1e0(r1)
    psq_l f30, 0x1d8(r1), 0, 0
    lfd f30, 0x1d0(r1)
    addi r11, r1, 0x1d0
    psq_st f1, 0x0(r28), 0, 0
    bl _restgpr_26
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}
