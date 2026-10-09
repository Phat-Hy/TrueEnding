#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800FDE60(void);
extern void fn_8010A308(void);
extern void fn_80129978(void);
extern void fn_80129A48(void);
extern void fn_8013CB68(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_8015495C(void);
extern void fn_80155DAC(void);
extern void fn_80164DCC(void);
extern void fn_8016DA4C(void);
extern void fn_80179D44(void);
extern void fn_80188F08(void);
extern void fn_80188F40(void);
extern void fn_80191960(void);
extern void fn_8019198C(void);
extern void fn_803750E4(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F99B0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8073A9A8[];
extern u8 lbl_8073A9C0[];
extern u8 lbl_8073AB88[];
extern u8 lbl_8077CF28[];
extern u8 lbl_8077FC14[];
extern u8 lbl_8077FC20[];
extern u8 lbl_8077FC40[];
extern u8 lbl_8077FCB8[];
extern u8 lbl_8077FD30[];
extern u8 lbl_8077FDA8[];
extern u8 lbl_80780240[];
extern u8 lbl_807802B8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7B58[];
extern u8 lbl_807C7B90[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0B2;
extern u32 lbl_8087F0BE;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_808822E8;
extern u32 lbl_808822EC;
extern u32 lbl_808822F0;
extern u32 lbl_808822F4;
extern u32 lbl_808822F8;
extern u32 lbl_808822FC;
extern u32 lbl_80882300;
extern u32 lbl_80882304;
extern u32 lbl_8088230C;
extern u32 lbl_80882310;
extern u32 lbl_80882330;
extern u32 lbl_80882338;
extern u32 lbl_8088234C;
extern u32 lbl_80882350;
extern u32 lbl_80882354;
extern u32 lbl_80882358;
extern u32 lbl_8088235C;
extern u32 lbl_80882360;
extern u32 lbl_80882364;
extern u32 lbl_80882368;
extern u32 lbl_8088236C;
extern u32 lbl_80882370;
extern u32 lbl_80882374;
extern u32 lbl_80882378;
extern u32 lbl_8088237C;
extern u32 lbl_80882380;
extern u32 lbl_80882388;
extern u32 lbl_8088238C;
extern u32 lbl_80882390;
extern u32 lbl_80882394;

/* Function declarations */
void fn_801AEF40(void);
void fn_801AEF54(void);
void fn_801AEF7C(void);
void fn_801AF020(void);
void fn_801AF084(void);
void fn_801AF250(void);
void fn_801AF264(void);
void fn_801AF484(void);
void fn_801AF81C(void);
void fn_801AF888(void);
void fn_801AF97C(void);
void fn_801AFAC0(void);
void fn_801AFF1C(void);
void fn_801B0260(void);
void fn_801B0300(void);
void fn_801B0438(void);
void fn_801B0478(void);
void fn_801B04B8(void);
void fn_801B04F8(void);
void fn_801B0590(void);
void fn_801B05D0(void);
void fn_801B0610(void);
void fn_801B0650(void);
void fn_801B0690(void);
void fn_801B06D0(void);
void fn_801B0710(void);
void fn_801B07D4(void);
void fn_801B0854(void);

asm void fn_801AEF40(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    blr
}

asm void fn_801AEF54(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lfs f0, lbl_808822EC
    lwz r0, 0x524(r3)
    lwz r3, 0x2d0(r3)
    mulli r0, r0, 0x2c
    add r3, r3, r0
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

asm void fn_801AEF7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8077FDA8@ha
    li r7, 0x1c
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8077FDA8@l
    li r0, 0x1
    lfs f0, lbl_808822F0
    stw r31, 0xc(r1)
    li r8, 0x1
    lfs f1, lbl_808822EC
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, lbl_80882304
    stw r5, 0x8(r3)
    li r5, 0x14a
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stw r7, 0x560(r4)
    li r4, 0x0
    li r7, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x234(r31)
    mr r3, r30
    lfs f0, lbl_8088234C
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AF020(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_808822EC
    stw r0, 0x14(r1)
    li r0, 0x0
    lwz r7, 0x4(r3)
    lfs f1, 0x2e4(r7)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_801AF020_00000130
    lwz r0, 0x5c0(r7)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    ori r0, r0, 0x1
    stw r0, 0x5c0(r7)
    li r7, 0x1
    lwz r3, 0x4(r3)
    bl fn_8015495C
    li r0, 0x1
lbl_fn_801AF020_00000130:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AF084(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r9, 0x0
    lwz r8, 0x4(r4)
    stw r0, 0x74(r1)
    lis r7, lbl_8077FC14@ha
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwzu r6, lbl_8077FC14@l(r7)
    stw r8, 0x8(r1)
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    stb r9, 0xc(r1)
    stw r9, 0x0(r3)
    lbz r0, lbl_8087F0B2
    stb r9, 0xd(r1)
    extsb. r0, r0
    stb r9, 0xe(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r8, 0x5c(r1)
    stb r9, 0x60(r1)
    stb r9, 0x61(r1)
    stb r9, 0x62(r1)
    bne lbl_fn_801AF084_000001F0
    lis r6, lbl_807C7B58@ha
    lis r4, fn_80188F08@ha
    lis r3, fn_80188F40@ha
    li r0, 0x1
    addi r3, r3, fn_80188F40@l
    addi r5, r6, lbl_807C7B58@l
    addi r4, r4, fn_80188F08@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B58@l(r6)
    stb r0, lbl_8087F0B2
lbl_fn_801AF084_000001F0:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801AF084_000002D4
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801AF084_00000288
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801AF084_00000288:
    cmpwi r30, 0x0
    beq lbl_fn_801AF084_000002C8
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lbz r0, 0x38(r1)
    stb r0, 0x10(r30)
    lbz r0, 0x39(r1)
    stb r0, 0x11(r30)
    lbz r0, 0x3a(r1)
    stb r0, 0x12(r30)
lbl_fn_801AF084_000002C8:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801AF084_000002D8
lbl_fn_801AF084_000002D4:
    li r0, 0x0
lbl_fn_801AF084_000002D8:
    cmpwi r0, 0x0
    beq lbl_fn_801AF084_000002F0
    lis r3, lbl_807C7B58@ha
    addi r3, r3, lbl_807C7B58@l
    stw r3, 0x0(r31)
    b lbl_fn_801AF084_000002F8
lbl_fn_801AF084_000002F0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801AF084_000002F8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801AF250(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    blr
}

asm void fn_801AF264(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r7, lbl_8077FD30@ha
    li r6, 0x3b
    stw r0, 0x64(r1)
    addi r7, r7, lbl_8077FD30@l
    lfs f1, 0x4(r5)
    li r0, 0x2d
    stw r31, 0x5c(r1)
    lfs f3, lbl_808822EC
    stw r30, 0x58(r1)
    mr r30, r5
    lfs f0, lbl_808822F0
    stw r29, 0x54(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stw r6, 0x560(r4)
    li r4, 0x79
    lwz r5, 0x4(r3)
    stw r0, 0xc(r3)
    addi r31, r5, 0xb0
    stfs f3, 0x10(r3)
    stfs f3, 0x14(r3)
    stfs f0, 0x18(r3)
    addi r3, r1, 0x18
    bl fn_805F8E70
    addi r4, r29, 0x10
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_808822F0
    lis r3, lbl_8073A9C0@ha
    stfs f0, 0x24c(r31)
    lfs f3, 0x4(r30)
    lwz r4, 0x4(r29)
    lfd f2, lbl_8073A9C0@l(r3)
    lfs f0, 0x538(r4)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80882330
    fcmpo cr0, f3, f0
    ble lbl_fn_801AF264_000003E4
    lfs f0, lbl_80882350
    fsubs f3, f3, f0
lbl_fn_801AF264_000003E4:
    lfs f0, lbl_80882354
    fcmpo cr0, f3, f0
    bge lbl_fn_801AF264_000003F8
    lfs f0, lbl_80882350
    fadds f3, f3, f0
lbl_fn_801AF264_000003F8:
    fabs f3, f3
    lfs f0, lbl_808822F8
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801AF264_00000448
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x1d3
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x4(r29)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    lfs f2, 0x8(r30)
    stfs f2, 0x53c(r3)
    b lbl_fn_801AF264_000004E0
lbl_fn_801AF264_00000448:
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x1d4
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x8
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lis r3, lbl_8073A9C0@ha
    lfs f2, 0x8(r30)
    lfs f3, lbl_80882330
    lfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    fadds f1, f3, f0
    lfd f2, lbl_8073A9C0@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80882330
    fcmpo cr0, f3, f0
    ble lbl_fn_801AF264_000004B0
    lfs f0, lbl_80882350
    fsubs f3, f3, f0
lbl_fn_801AF264_000004B0:
    lfs f0, lbl_80882354
    fcmpo cr0, f3, f0
    bge lbl_fn_801AF264_000004C4
    lfs f0, lbl_80882350
    fadds f3, f3, f0
lbl_fn_801AF264_000004C4:
    stfs f3, 0xc(r1)
    addi r3, r1, 0x8
    lwz r4, 0x4(r29)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    lfs f2, 0x10(r1)
    stfs f2, 0x53c(r4)
lbl_fn_801AF264_000004E0:
    lfs f0, lbl_808822F0
    li r0, 0x0
    stfs f0, 0x238(r31)
    stw r0, 0x8(r29)
    lwz r4, 0x4(r29)
    psq_l f1, 0x600(r4), 0, 0
    lfs f2, 0x608(r4)
    stfs f2, 0x24(r29)
    psq_st f1, 0x1c(r29), 0, 0
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801AF264_00000524
    fmr f1, f0
    lfs f2, lbl_80882310
    li r5, 0xa
    li r6, 0xf
    bl fn_803EA77C
lbl_fn_801AF264_00000524:
    lwz r31, 0x5c(r1)
    mr r3, r29
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801AF484(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x8(r3)
    mr r30, r3
    lwz r3, 0x4(r3)
    li r26, 0x0
    cmpwi r0, 0x2
    addi r31, r3, 0xb0
    beq lbl_fn_801AF484_00000644
    psq_l f1, 0x600(r3), 0, 0
    addi r29, r1, 0x68
    lfs f2, 0x608(r3)
    addi r28, r1, 0x5c
    stfs f2, 0x70(r1)
    li r0, 0x0
    lwz r27, lbl_8087EE98
    psq_st f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    lfs f0, 0x60c(r3)
    fsubs f3, f3, f0
    stfs f3, 0x60(r1)
    lfs f0, 0x578(r3)
    fadds f0, f3, f0
    stw r0, 0xac(r1)
    stfs f0, 0x60(r1)
    stw r0, 0xb0(r1)
    stw r0, 0xb4(r1)
    stw r0, 0xb8(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r27
    mr r5, r29
    mr r6, r28
    addi r4, r1, 0x78
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801AF484_00000644
    lwz r3, 0x4(r30)
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_801AF484_00000644
    lwz r4, 0xac(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801AF484_00000644
    lwz r0, 0x0(r4)
    cmplwi r0, 0x1a
    bne lbl_fn_801AF484_00000644
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    li r3, 0x1
    b lbl_fn_801AF484_000008BC
lbl_fn_801AF484_00000644:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801AF484_0000074C
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808822F0
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_801AF484_000006B8
    lfs f0, lbl_808822EC
    addi r3, r1, 0x50
    stfs f0, 0x238(r31)
    li r0, 0x1
    lwz r4, 0x4(r30)
    lfs f0, 0x20(r30)
    lfs f3, 0x604(r4)
    psq_l f1, 0x574(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f0, f3, f0
    lfs f2, 0x57c(r4)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r4), 0, 0
    stfs f2, 0x57c(r4)
    stfs f2, 0x58(r1)
    stw r0, 0x8(r30)
lbl_fn_801AF484_000006B8:
    lwz r5, 0x4(r30)
    addi r28, r1, 0x44
    lfs f5, 0x18(r30)
    mr r3, r31
    psq_l f1, 0x528(r5), 0, 0
    li r4, 0x0
    lfs f4, lbl_80882358
    lfs f3, 0x14(r30)
    lfs f0, 0x10(r30)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    psq_st f1, 0x0(r28), 0, 0
    fmuls f7, f0, f4
    lfs f2, 0x530(r5)
    lfs f4, 0x44(r1)
    lfs f3, 0x48(r1)
    fadds f0, f2, f5
    stfs f7, 0x14(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    bl fn_80097D7C
    lfs f3, lbl_8088235C
    lfs f0, 0x48(r1)
    fdivs f3, f3, f1
    lwz r3, 0x4(r30)
    lfs f2, 0x4c(r1)
    fadds f0, f0, f3
    stfs f0, 0x48(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    b lbl_fn_801AF484_00000858
lbl_fn_801AF484_0000074C:
    cmpwi r0, 0x1
    bne lbl_fn_801AF484_00000810
    lwz r3, 0xc(r30)
    cmpwi r26, 0x0
    subi r0, r3, 0x1
    stw r0, 0xc(r30)
    bne lbl_fn_801AF484_00000770
    cmpwi r0, 0x0
    bgt lbl_fn_801AF484_000007D8
lbl_fn_801AF484_00000770:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801AF484_000007A0
    lfs f3, lbl_808822EC
    addi r6, r1, 0x8
    lfs f0, lbl_8088234C
    li r4, 0x0
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    lwz r5, 0x4(r30)
    bl fn_800FDE60
lbl_fn_801AF484_000007A0:
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x1d6
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808822F0
    li r0, 0x2
    stfs f0, 0x238(r31)
    stw r0, 0x8(r30)
    b lbl_fn_801AF484_00000858
lbl_fn_801AF484_000007D8:
    lwz r4, 0x4(r30)
    addi r3, r1, 0x38
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x530(r4)
    lfs f3, 0x3c(r1)
    lfs f0, 0x578(r4)
    stfs f2, 0x40(r1)
    fadds f0, f3, f0
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    b lbl_fn_801AF484_00000858
lbl_fn_801AF484_00000810:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AF484_00000834
    li r3, 0x1
    b lbl_fn_801AF484_000008BC
lbl_fn_801AF484_00000834:
    lwz r3, 0x4(r30)
    li r5, 0x1
    lfs f1, lbl_808822EC
    lwz r12, 0x0(r3)
    addi r4, r3, 0x534
    lfs f2, lbl_808822F0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_fn_801AF484_00000858:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x2
    beq lbl_fn_801AF484_000008A4
    psq_l f1, 0x1c(r30), 0, 0
    addi r4, r1, 0x2c
    lfs f2, 0x24(r30)
    addi r5, r1, 0x20
    stfs f2, 0x34(r1)
    lwz r3, lbl_8087F048
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r3, 0x0
    lwz r6, 0x4(r30)
    psq_l f1, 0x600(r6), 0, 0
    lfs f2, 0x608(r6)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r5), 0, 0
    beq lbl_fn_801AF484_000008A4
    lfs f1, 0x5b0(r6)
    bl fn_8010A308
lbl_fn_801AF484_000008A4:
    lwz r4, 0x4(r30)
    li r3, 0x0
    psq_l f1, 0x600(r4), 0, 0
    lfs f2, 0x608(r4)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
lbl_fn_801AF484_000008BC:
    addi r11, r1, 0xe0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    bl _restgpr_26
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_801AF81C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x8(r3)
    stfd f31, 0x10(r1)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x2
    psq_st f31, 0x18(r1), 0, 0
    addi r3, r3, 0xb0
    stw r31, 0xc(r1)
    li r31, 0x0
    bne lbl_fn_801AF81C_00000928
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AF81C_00000928
    li r31, 0x1
lbl_fn_801AF81C_00000928:
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AF888(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8077FCB8@ha
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8077FCB8@l
    li r0, 0x15
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x8(r3)
    beq lbl_fn_801AF888_0000098C
    li r0, 0x16
lbl_fn_801AF888_0000098C:
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    addi r31, r3, 0xb0
    bl fn_801446F0
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_808822F0
    cmpwi r30, 0x0
    stfs f0, 0x24c(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x1de
    beq lbl_fn_801AF888_000009C4
    li r5, 0x1dd
lbl_fn_801AF888_000009C4:
    lfs f1, lbl_808822EC
    li r6, 0x0
    lfs f2, lbl_80882304
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_808822F0
    stfs f1, 0x238(r31)
    lwz r5, 0x4(r29)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    beq lbl_fn_801AF888_00000A1C
    lis r3, lbl_8073A9A8@ha
    addi r5, r5, 0x528
    lwz r4, lbl_8073A9A8@l(r3)
    addi r3, r1, 0x8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_801AF888_00000A1C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AF97C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    li r30, 0x0
    stw r29, 0x64(r1)
    mr r29, r3
    lwz r5, 0x4(r3)
    addi r31, r5, 0xb0
    lfs f31, 0x2e4(r5)
    mr r3, r31
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AF97C_00000A8C
    li r30, 0x1
lbl_fn_801AF97C_00000A8C:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801AF97C_00000B40
    lfs f3, 0x234(r31)
    lfs f0, lbl_80882300
    fcmpo cr0, f3, f0
    bge lbl_fn_801AF97C_00000B40
    lwz r5, 0x4(r29)
    addi r3, r1, 0x30
    lfs f3, lbl_808822EC
    li r4, 0x79
    lfs f0, lbl_808822F0
    stfs f3, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x18(r1)
    addi r3, r1, 0x8
    lfs f0, 0x14(r1)
    fneg f7, f3
    lfs f3, 0x1c(r1)
    fneg f0, f0
    lfs f4, lbl_80882360
    fneg f6, f3
    lwz r4, 0x4(r29)
    frsp f3, f7
    stfs f0, 0x20(r1)
    frsp f0, f0
    frsp f5, f6
    stfs f7, 0x24(r1)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f6, 0x28(r1)
    fmuls f2, f5, f4
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x6c0(r4)
lbl_fn_801AF97C_00000B40:
    lwz r3, 0x4(r29)
    li r5, 0x0
    lfs f1, lbl_808822EC
    lfs f2, 0x568(r3)
    addi r4, r3, 0x534
    bl fn_8013CB68
    psq_l f31, 0x78(r1), 0, 0
    mr r3, r30
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801AFAC0(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    lis r7, lbl_8077FC40@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x154(r1)
    addi r7, r7, lbl_8077FC40@l
    li r0, 0x8e
    lfs f2, 0x8(r5)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    mr r30, r3
    stw r29, 0x124(r1)
    mr r29, r5
    stw r7, 0x0(r3)
    addi r7, r1, 0x74
    stw r4, 0x4(r3)
    stw r6, 0x20(r3)
    stw r0, 0x560(r4)
    mr r4, r7
    lwz r5, 0x4(r3)
    mr r3, r7
    psq_st f1, 0x0(r7), 0, 0
    addi r31, r5, 0xb0
    stfs f2, 0x7c(r1)
    bl fn_805F98D0
    addi r3, r1, 0x68
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x50
    lfs f2, 0x8(r29)
    addi r29, r1, 0x5c
    lfs f3, 0x6c(r1)
    lfs f0, lbl_808822E8
    lwz r5, 0x4(r30)
    fmuls f3, f3, f0
    stfs f2, 0x70(r1)
    lfs f0, lbl_808822F4
    stfs f3, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r5), 0, 0
    stfs f2, 0x6c0(r5)
    lfs f3, 0x7c(r1)
    lfs f4, 0x78(r1)
    fneg f5, f3
    lfs f3, 0x74(r1)
    fneg f4, f4
    fneg f3, f3
    stfs f5, 0x58(r1)
    frsp f2, f5
    stfs f3, 0x50(r1)
    fabs f3, f2
    stfs f4, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f3, f3
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801AFAC0_00000C9C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801AFAC0_00000C90
    lfs f0, lbl_808822F8
    b lbl_fn_801AFAC0_00000C94
lbl_fn_801AFAC0_00000C90:
    lfs f0, lbl_808822FC
lbl_fn_801AFAC0_00000C94:
    stfs f0, 0x48(r1)
    b lbl_fn_801AFAC0_00000CB0
lbl_fn_801AFAC0_00000C9C:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801AFAC0_00000CB0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808822EC
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
    lfs f0, lbl_808822F0
    psq_l f1, 0x0(r29), 0, 0
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
    lfs f0, lbl_808822F4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801AFAC0_00000DCC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801AFAC0_00000DBC
    lfs f0, lbl_808822F8
    b lbl_fn_801AFAC0_00000DC0
lbl_fn_801AFAC0_00000DBC:
    lfs f0, lbl_808822FC
lbl_fn_801AFAC0_00000DC0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801AFAC0_00000DE0
lbl_fn_801AFAC0_00000DCC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801AFAC0_00000DE0:
    lfs f2, lbl_808822EC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    lwz r3, 0x4(r30)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x14(r30), 0, 0
    stfs f2, 0x1c(r30)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_801AFAC0_00000E30
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801AFAC0_00000E30
    li r4, 0xb5
    bl fn_803750E4
lbl_fn_801AFAC0_00000E30:
    lwz r3, 0x4(r30)
    li r4, 0x1
    bl fn_80164DCC
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801AFAC0_00000E50
    bl fn_801539E0
lbl_fn_801AFAC0_00000E50:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801AFAC0_00000E68
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801AFAC0_00000E68:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_801AFAC0_00000E84
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
lbl_fn_801AFAC0_00000E84:
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_808822F0
    stfs f0, 0x24c(r31)
    lwz r3, 0x20(r30)
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_801AFAC0_00000EB8
    cmpwi r3, 0xc
    beq lbl_fn_801AFAC0_00000EB8
    cmpwi r3, 0xb
    beq lbl_fn_801AFAC0_00000EE0
    b lbl_fn_801AFAC0_00000F64
lbl_fn_801AFAC0_00000EB8:
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x171
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801AFAC0_00000F64
lbl_fn_801AFAC0_00000EE0:
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x172
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f4, lbl_80882364
    addi r3, r1, 0xf0
    lfs f3, lbl_808822EC
    li r4, 0x79
    lfs f0, lbl_80882368
    lfs f1, 0x18(r30)
    stfs f4, 0x8(r30)
    stfs f3, 0xc(r30)
    stfs f0, 0x10(r30)
    bl fn_805F8E70
    addi r4, r30, 0x8
    addi r3, r1, 0xf0
    mr r5, r4
    bl fn_805F93C0
    lfs f5, lbl_8088236C
    lfs f4, 0x8(r30)
    lfs f3, 0xc(r30)
    lfs f0, 0x10(r30)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x8(r30)
    stfs f3, 0xc(r30)
    stfs f0, 0x10(r30)
lbl_fn_801AFAC0_00000F64:
    lfs f0, lbl_808822F0
    stfs f0, 0x238(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801AFAC0_00000FAC
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801AFAC0_00000FAC
    lwz r3, lbl_8087F498
    li r5, 0x6
    lwz r4, 0x4(r30)
    li r6, 0x0
    lfs f1, lbl_808822F0
    lfs f2, lbl_80882310
    bl fn_803EA77C
lbl_fn_801AFAC0_00000FAC:
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

asm void fn_801AFF1C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r3
    lwz r0, 0x20(r3)
    lwz r4, 0x4(r3)
    lwz r3, 0x4(r3)
    cmpwi r0, 0xa
    addi r31, r4, 0xb0
    addi r3, r3, 0xb0
    beq lbl_fn_801AFF1C_00001024
    cmpwi r0, 0xc
    bne lbl_fn_801AFF1C_00001054
lbl_fn_801AFF1C_00001024:
    lwz r0, 0x22c(r3)
    li r30, 0x0
    cmpwi r0, 0x30
    bne lbl_fn_801AFF1C_00001070
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AFF1C_00001070
    li r30, 0x1
    b lbl_fn_801AFF1C_00001070
lbl_fn_801AFF1C_00001054:
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r30
    extrwi r30, r30, 1, 2
lbl_fn_801AFF1C_00001070:
    cmpwi r30, 0x0
    beq lbl_fn_801AFF1C_00001080
    li r3, 0x1
    b lbl_fn_801AFF1C_000012FC
lbl_fn_801AFF1C_00001080:
    lwz r0, 0x20(r29)
    cmpwi r0, 0xa
    beq lbl_fn_801AFF1C_000010A0
    cmpwi r0, 0xc
    beq lbl_fn_801AFF1C_000010A0
    cmpwi r0, 0xb
    beq lbl_fn_801AFF1C_00001288
    b lbl_fn_801AFF1C_000012E0
lbl_fn_801AFF1C_000010A0:
    lwz r0, 0x22c(r31)
    cmpwi r0, 0x171
    bne lbl_fn_801AFF1C_000010F8
    lfs f0, lbl_80882370
    stfs f0, 0x238(r31)
    lfs f0, lbl_80882338
    lfs f3, 0x234(r31)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801AFF1C_000012E0
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x1dd
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808822F0
    stfs f0, 0x238(r31)
    b lbl_fn_801AFF1C_000012E0
lbl_fn_801AFF1C_000010F8:
    cmpwi r0, 0x1dd
    bne lbl_fn_801AFF1C_000012E0
    lfs f3, 0x234(r31)
    lfs f0, lbl_80882374
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801AFF1C_000012E0
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882358
    li r4, 0x0
    li r5, 0x30
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f3, lbl_808822EC
    addi r3, r1, 0xa8
    lfs f0, lbl_808822F0
    li r4, 0x79
    stfs f3, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f3, 0x58(r1)
    lwz r5, 0x4(r29)
    stfs f3, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x5c
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x5c
    addi r4, r1, 0x50
    addi r5, r1, 0x68
    bl fn_805F99B0
    lwz r5, 0x4(r29)
    addi r3, r1, 0x78
    lfs f3, lbl_808822EC
    li r4, 0x79
    lfs f0, lbl_808822F0
    lfs f7, 0x70(r1)
    lfs f6, lbl_8088230C
    lfs f5, 0x6c(r1)
    fmuls f7, f7, f6
    lfs f4, 0x68(r1)
    fmuls f5, f5, f6
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    fmuls f3, f4, f6
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r5)
    stfs f3, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f7, 0x1c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x28(r1)
    addi r4, r1, 0x44
    lfs f3, 0x24(r1)
    addi r3, r1, 0x68
    fneg f9, f0
    lfs f0, 0x20(r1)
    fneg f10, f3
    lfs f7, lbl_80882378
    fneg f11, f0
    lfs f4, 0x1c(r1)
    frsp f8, f9
    lfs f3, 0x18(r1)
    frsp f6, f10
    lfs f0, 0x14(r1)
    frsp f5, f11
    stfs f11, 0x2c(r1)
    fmuls f8, f8, f7
    stfs f10, 0x30(r1)
    fmuls f6, f6, f7
    fmuls f5, f5, f7
    stfs f9, 0x34(r1)
    fsubs f4, f8, f4
    fsubs f3, f6, f3
    stfs f5, 0x38(r1)
    fsubs f0, f5, f0
    fmr f2, f4
    stfs f3, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    frsp f2, f2
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r29)
    stfs f6, 0x3c(r1)
    psq_st f1, 0x6b8(r3), 0, 0
    stfs f8, 0x40(r1)
    stfs f4, 0x4c(r1)
    stfs f2, 0x6c0(r3)
    b lbl_fn_801AFF1C_000012E0
lbl_fn_801AFF1C_00001288:
    lfs f3, 0x234(r31)
    lfs f0, lbl_8088237C
    fcmpo cr0, f3, f0
    ble lbl_fn_801AFF1C_000012E0
    lfs f0, lbl_80882380
    fcmpo cr0, f3, f0
    bge lbl_fn_801AFF1C_000012E0
    lwz r4, 0x4(r29)
    addi r3, r1, 0x8
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    lfs f0, lbl_808822EC
    stfs f2, 0x6c0(r4)
    fmr f2, f0
    stfs f0, 0x8(r1)
    lwz r4, 0x4(r29)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r4), 0, 0
    stfs f0, 0x10(r1)
    stfs f2, 0x57c(r4)
lbl_fn_801AFF1C_000012E0:
    lwz r3, 0x4(r29)
    addi r4, r29, 0x14
    lfs f1, lbl_808822EC
    li r5, 0x0
    lfs f2, 0x568(r3)
    bl fn_8013CB68
    li r3, 0x0
lbl_fn_801AFF1C_000012FC:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_801B0260(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x20(r3)
    stfd f31, 0x10(r1)
    lwz r3, 0x4(r3)
    cmpwi r0, 0xa
    psq_st f31, 0x18(r1), 0, 0
    addi r3, r3, 0xb0
    stw r31, 0xc(r1)
    beq lbl_fn_801B0260_00001354
    cmpwi r0, 0xc
    bne lbl_fn_801B0260_00001388
lbl_fn_801B0260_00001354:
    lwz r0, 0x22c(r3)
    li r31, 0x0
    cmpwi r0, 0x30
    bne lbl_fn_801B0260_00001380
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B0260_00001380
    li r31, 0x1
lbl_fn_801B0260_00001380:
    mr r3, r31
    b lbl_fn_801B0260_000013A4
lbl_fn_801B0260_00001388:
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
lbl_fn_801B0260_000013A4:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B0300(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r8, 0x4(r4)
    lis r7, lbl_8077FC20@ha
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r3
    lwzu r6, lbl_8077FC20@l(r7)
    stw r6, 0x34(r1)
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    stw r5, 0x38(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BE
    stw r4, 0x3c(r1)
    extsb. r0, r0
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r8, 0x4c(r1)
    bne lbl_fn_801B0300_0000144C
    lis r6, lbl_807C7B90@ha
    lis r4, fn_80191960@ha
    lis r3, fn_8019198C@ha
    li r0, 0x1
    addi r3, r3, fn_8019198C@l
    addi r5, r6, lbl_807C7B90@l
    addi r4, r4, fn_80191960@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B90@l(r6)
    stb r0, lbl_8087F0BE
lbl_fn_801B0300_0000144C:
    lwz r6, 0x40(r1)
    addi r3, r1, 0x18
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801B0300_000014C0
    lwz r5, 0x18(r1)
    addic. r6, r31, 0x4
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_801B0300_000014B8
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_801B0300_000014B8:
    li r0, 0x1
    b lbl_fn_801B0300_000014C4
lbl_fn_801B0300_000014C0:
    li r0, 0x0
lbl_fn_801B0300_000014C4:
    cmpwi r0, 0x0
    beq lbl_fn_801B0300_000014DC
    lis r3, lbl_807C7B90@ha
    addi r3, r3, lbl_807C7B90@l
    stw r3, 0x0(r31)
    b lbl_fn_801B0300_000014E4
lbl_fn_801B0300_000014DC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801B0300_000014E4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801B0438(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B0438_00001520
    cmpwi r4, 0x0
    ble lbl_fn_801B0438_00001520
    bl dtor_80084684
lbl_fn_801B0438_00001520:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B0478(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B0478_00001560
    cmpwi r4, 0x0
    ble lbl_fn_801B0478_00001560
    bl dtor_80084684
lbl_fn_801B0478_00001560:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B04B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B04B8_000015A0
    cmpwi r4, 0x0
    ble lbl_fn_801B04B8_000015A0
    bl dtor_80084684
lbl_fn_801B04B8_000015A0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B04F8(void)
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
    beq lbl_fn_801B04F8_00001630
    addic. r31, r3, 0x24
    beq lbl_fn_801B04F8_00001620
    beq lbl_fn_801B04F8_00001620
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801B04F8_00001620
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_801B04F8_00001618
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801B04F8_00001618:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801B04F8_00001620:
    cmpwi r30, 0x0
    ble lbl_fn_801B04F8_00001630
    mr r3, r29
    bl dtor_80084684
lbl_fn_801B04F8_00001630:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B0590(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B0590_00001678
    cmpwi r4, 0x0
    ble lbl_fn_801B0590_00001678
    bl dtor_80084684
lbl_fn_801B0590_00001678:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B05D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B05D0_000016B8
    cmpwi r4, 0x0
    ble lbl_fn_801B05D0_000016B8
    bl dtor_80084684
lbl_fn_801B05D0_000016B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B0610(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B0610_000016F8
    cmpwi r4, 0x0
    ble lbl_fn_801B0610_000016F8
    bl dtor_80084684
lbl_fn_801B0610_000016F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B0650(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B0650_00001738
    cmpwi r4, 0x0
    ble lbl_fn_801B0650_00001738
    bl dtor_80084684
lbl_fn_801B0650_00001738:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B0690(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B0690_00001778
    cmpwi r4, 0x0
    ble lbl_fn_801B0690_00001778
    bl dtor_80084684
lbl_fn_801B0690_00001778:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B06D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B06D0_000017B8
    cmpwi r4, 0x0
    ble lbl_fn_801B06D0_000017B8
    bl dtor_80084684
lbl_fn_801B06D0_000017B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B0710(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_807802B8@ha
    stw r0, 0x14(r1)
    addi r6, r6, lbl_807802B8@l
    li r0, 0x2f
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x8(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r3, 0xd1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801B0710_00001878
    addi r31, r3, 0xb0
    lis r4, lbl_8073AB88@ha
    mr r3, r31
    li r5, 0x0
    addi r4, r4, lbl_8073AB88@l
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B0710_0000183C
    li r0, 0x0
    b lbl_fn_801B0710_00001848
lbl_fn_801B0710_0000183C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r0, r3, r0
lbl_fn_801B0710_00001848:
    cmpwi r0, 0x0
    beq lbl_fn_801B0710_00001878
    lwz r3, 0x4(r30)
    lis r5, lbl_8073AB88@ha
    lis r6, lbl_807C7030@ha
    lfs f1, lbl_80882388
    lwz r4, 0xd1c(r3)
    addi r3, r3, 0x10d8
    addi r5, r5, lbl_8073AB88@l
    addi r6, r6, lbl_807C7030@l
    addi r4, r4, 0xb0
    bl fn_80129978
lbl_fn_801B0710_00001878:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B07D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_8088238C
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    lwz r6, 0x4(r3)
    psq_l f1, 0x534(r6), 0, 0
    lfs f2, 0x53c(r6)
    stfs f2, 0x10(r1)
    lfs f2, lbl_80882390
    psq_st f1, 0x0(r4), 0, 0
    lwz r5, 0x8(r3)
    subic. r0, r5, 0x1
    stw r0, 0x8(r3)
    bgt lbl_fn_801B07D4_000018E4
    lfs f1, lbl_80882388
    addi r3, r6, 0x10d8
    bl fn_80129A48
    li r3, 0x1
    b lbl_fn_801B07D4_00001904
lbl_fn_801B07D4_000018E4:
    lwz r12, 0x0(r6)
    fmr f1, f0
    mr r3, r6
    li r5, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_801B07D4_00001904:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B0854(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80780240@ha
    li r5, 0x2f
    stw r0, 0x14(r1)
    addi r6, r6, lbl_80780240@l
    li r0, 0x1
    lfs f0, lbl_80882390
    stw r31, 0xc(r1)
    li r7, 0x0
    lfs f1, lbl_8088238C
    li r8, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, lbl_80882394
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x1ed
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882390
    stfs f0, 0x238(r31)
    lwz r3, 0x4(r30)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801B0854_000019AC
    lwz r0, 0x12a4(r3)
    clrlwi r0, r0, 1
    stw r0, 0x12a4(r3)
lbl_fn_801B0854_000019AC:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801B0854_000019C4
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801B0854_000019C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
