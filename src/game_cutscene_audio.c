#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D3A4(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ED34(void);
extern void fn_80059550(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CFD18(void);
extern void fn_800DC288(void);
extern void fn_800E41FC(void);
extern void fn_800E854C(void);
extern void fn_800EF73C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80121F00(void);
extern void fn_80122550(void);
extern void fn_8012A1B8(void);
extern void fn_8013322C(void);
extern void fn_8013655C(void);
extern void fn_80139560(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_8014052C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_801513D0(void);
extern void fn_8015E7A0(void);
extern void fn_8016D74C(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_80179D44(void);
extern void fn_80219E6C(void);
extern void fn_8021A4CC(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8026616C(void);
extern void fn_80266174(void);
extern void fn_802A4968(void);
extern void fn_802A49BC(void);
extern void fn_8032F608(void);
extern void fn_8032F6A8(void);
extern void fn_8032FBF4(void);
extern void fn_8032FD30(void);
extern void fn_8032FDE8(void);
extern void fn_8032FFF8(void);
extern void fn_80330218(void);
extern void fn_80330D74(void);
extern void fn_80331094(void);
extern void fn_8033135C(void);
extern void fn_803317F4(void);
extern void fn_80331898(void);
extern void fn_80331DAC(void);
extern void fn_803323A0(void);
extern void fn_8033250C(void);
extern void fn_80332628(void);
extern void fn_803326C0(void);
extern void fn_80332B44(void);
extern void fn_80332BE0(void);
extern void fn_80332F78(void);
extern void fn_80333024(void);
extern void fn_803333BC(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 dtor_80013D60[];
extern u8 jumptable_80788E50[];
extern u8 lbl_80749DA0[];
extern u8 lbl_80749F58[];
extern u8 lbl_80749F60[];
extern u8 lbl_80749F88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80788E90[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80885040;
extern u32 lbl_80885048;
extern u32 lbl_80885050;
extern u32 lbl_80885054;
extern u32 lbl_80885064;
extern u32 lbl_80885068;
extern u32 lbl_8088506C;
extern u32 lbl_80885070;
extern u32 lbl_80885074;
extern u32 lbl_80885078;
extern u32 lbl_8088507C;
extern u32 lbl_80885080;
extern u32 lbl_80885084;
extern u32 lbl_80885088;
extern u32 lbl_8088508C;
extern u32 lbl_80885090;
extern u32 lbl_80885094;
extern u32 lbl_80885098;
extern u32 lbl_8088509C;
extern u32 lbl_808850A0;
extern u32 lbl_808850A4;
extern u32 lbl_808850A8;
extern u32 lbl_808850AC;
extern u32 lbl_808850B0;
extern u32 lbl_808850B4;

/* Function declarations */
void fn_8032DAA0(void);
void fn_8032DDC8(void);
void fn_8032DDD0(void);
void fn_8032DEA0(void);
void fn_8032E2D4(void);
void fn_8032E3DC(void);
void fn_8032E938(void);
void fn_8032EC94(void);
void fn_8032ECA0(void);
void fn_8032ECA8(void);
void fn_8032ECB8(void);
void fn_8032ECBC(void);
void fn_8032EDC4(void);
void fn_8032EF2C(void);
void fn_8032EF38(void);
void fn_8032F0EC(void);
void fn_8032F204(void);
void fn_8032F314(void);

asm void fn_8032DAA0(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    mr r29, r4
    bl fn_800E854C
    lwz r0, 0x1608(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8032DAA0_0000003C
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8032DAA0_00000304
lbl_fn_8032DAA0_0000003C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    blt lbl_fn_8032DAA0_00000150
    cmpwi r0, 0x7
    bne lbl_fn_8032DAA0_00000148
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8032DAA0_00000148
    lwz r0, 0x560(r31)
    cmpwi r0, 0x16
    bne lbl_fn_8032DAA0_00000148
    addi r3, r29, 0x10
    bl fn_805F9920
    lfs f0, lbl_80885064
    fcmpo cr0, f1, f0
    bge lbl_fn_8032DAA0_00000134
    addi r3, r29, 0x10
    bl fn_805F9920
    lfs f0, lbl_80885068
    fcmpo cr0, f1, f0
    bge lbl_fn_8032DAA0_00000100
    lfs f3, lbl_80885040
    addi r3, r1, 0x90
    lfs f0, lbl_80885048
    li r4, 0x79
    stfs f3, 0x48(r1)
    stfs f3, 0x4c(r1)
    stfs f0, 0x50(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x48
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x50(r1)
    addi r3, r1, 0x54
    lfs f3, 0x4c(r1)
    fneg f4, f0
    lfs f0, 0x48(r1)
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x5c(r1)
    frsp f2, f4
    stfs f0, 0x54(r1)
    stfs f3, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    stfs f2, 0x18(r29)
    b lbl_fn_8032DAA0_0000010C
lbl_fn_8032DAA0_00000100:
    addi r3, r29, 0x10
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8032DAA0_0000010C:
    lfs f4, 0x10(r29)
    lfs f5, lbl_8088506C
    lfs f3, 0x14(r29)
    lfs f0, 0x18(r29)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r29)
    stfs f3, 0x14(r29)
    stfs f0, 0x18(r29)
lbl_fn_8032DAA0_00000134:
    mr r3, r31
    addi r4, r29, 0x10
    li r5, -0x1
    li r6, 0x0
    bl fn_8015E7A0
lbl_fn_8032DAA0_00000148:
    li r0, 0x0
    stw r0, 0x58c(r31)
lbl_fn_8032DAA0_00000150:
    lwz r0, 0x1608(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8032DAA0_00000304
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x15c0
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    psq_l f1, 0x528(r31), 0, 0
    addi r29, r1, 0x14
    lfs f2, 0x530(r31)
    addi r3, r1, 0x60
    lfs f3, lbl_80885040
    li r30, 0x2
    lfs f0, lbl_80885048
    li r4, 0x79
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_80885050
    addi r3, r31, 0x15c0
    lfs f0, 0x30(r1)
    li r4, 0x0
    lfs f5, 0x34(r1)
    fmuls f7, f0, f4
    lfs f3, 0x2c(r1)
    lfs f0, 0x18(r1)
    fmuls f8, f5, f4
    fmuls f6, f3, f4
    lfs f5, 0x14(r1)
    fadds f4, f0, f7
    lfs f3, 0x1c(r1)
    lfs f0, lbl_80885054
    fadds f5, f5, f6
    fadds f3, f3, f8
    stfs f6, 0x20(r1)
    fadds f0, f4, f0
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f5, 0x14(r1)
    stfs f3, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl fn_80232B7C
    lfs f1, lbl_80885048
    mulli r0, r30, 0xc
    stfs f1, 0x38(r1)
    li r12, -0x1
    li r11, 0x1
    stfs f1, 0x3c(r1)
    add r3, r31, r0
    addi r4, r3, 0x15c0
    mr r7, r29
    stfs f1, 0x40(r1)
    addi r8, r31, 0x534
    addi r9, r1, 0x38
    li r5, 0x0
    stfs f1, 0x44(r1)
    li r6, 0x0
    li r10, -0x1
    stw r12, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_80749DA0@ha
    lfs f1, lbl_80885048
    addi r4, r4, lbl_80749DA0@l
    addi r3, r1, 0x10
    lwz r4, 0x8(r4)
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8032DAA0_000002B4
    mr r4, r31
    li r5, 0xf
    bl fn_800CFD18
lbl_fn_8032DAA0_000002B4:
    lwz r29, 0x165c(r31)
    li r0, 0x0
    lwz r4, 0x14b8(r31)
    lwz r3, 0x1540(r31)
    cmpwi r29, 0x0
    clrrwi r4, r4, 1
    stw r4, 0x14b8(r31)
    clrrwi r3, r3, 1
    stw r3, 0x1540(r31)
    stw r0, 0x1608(r31)
    blt lbl_fn_8032DAA0_00000304
    lwz r3, lbl_8087F430
    mr r4, r29
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8032DAA0_00000304
    lwz r3, lbl_8087F430
    mr r4, r29
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8032DAA0_00000304:
    li r0, 0x1
    stw r0, 0x1618(r31)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8032DDC8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8032DDD0(void)
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
    beq lbl_fn_8032DDD0_000003E0
    addic. r3, r3, 0x161c
    beq lbl_fn_8032DDD0_00000368
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8032DDD0_00000368:
    addi r3, r29, 0x15fc
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x15f0
    beq lbl_fn_8032DDD0_00000394
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8032DDD0_00000394
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8032DDD0_00000394:
    lis r4, fn_800EF73C@ha
    addi r3, r29, 0x15c0
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x4
    bl fn_806959D8
    lis r4, fn_80059550@ha
    addi r3, r29, 0x14b0
    addi r4, r4, fn_80059550@l
    li r5, 0x88
    li r6, 0x2
    bl fn_806959D8
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8032DDD0_000003E0
    mr r3, r29
    bl dtor_80084684
lbl_fn_8032DDD0_000003E0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8032DEA0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r5, 0x20(r5)
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    bl fn_8035B694
    lis r3, lbl_80788E90@ha
    addi r30, r31, 0x14b0
    addi r3, r3, lbl_80788E90@l
    stw r3, 0x0(r31)
    mr r3, r30
    bl fn_80473E74
    lfs f4, lbl_80885070
    lis r3, lbl_8078FBB0@ha
    li r29, 0x0
    lfs f3, lbl_80885074
    lfs f0, lbl_80885078
    addi r3, r3, lbl_8078FBB0@l
    li r5, -0x1
    li r4, 0x28
    li r0, 0x6
    stw r3, 0x0(r30)
    addi r3, r31, 0x15b0
    stw r29, 0x14b8(r31)
    stw r29, 0x14bc(r31)
    stw r29, 0x14cc(r31)
    stw r29, 0x14d0(r31)
    stw r29, 0x14d4(r31)
    stw r29, 0x14d8(r31)
    stw r29, 0x14dc(r31)
    stw r29, 0x14e8(r31)
    stw r29, 0x14ec(r31)
    stw r5, 0x1570(r31)
    stw r29, 0x1578(r31)
    stw r4, 0x157c(r31)
    stfs f4, 0x1580(r31)
    stfs f3, 0x1584(r31)
    stfs f0, 0x1588(r31)
    stw r29, 0x158c(r31)
    stw r29, 0x1590(r31)
    stw r29, 0x1594(r31)
    stw r29, 0x1598(r31)
    stw r29, 0x159c(r31)
    stw r29, 0x15a0(r31)
    stw r29, 0x15a4(r31)
    stw r0, 0x15a8(r31)
    stw r29, 0x15ac(r31)
    bl fn_800CB360
    lis r4, fn_8021A4CC@ha
    lis r5, dtor_80013D60@ha
    stw r29, 0x15b4(r31)
    addi r3, r31, 0x1618
    addi r4, r4, fn_8021A4CC@l
    addi r5, r5, dtor_80013D60@l
    stw r29, 0x15e0(r31)
    li r6, 0xc
    li r7, 0x5
    stw r29, 0x15e4(r31)
    stw r29, 0x1610(r31)
    stw r29, 0x1614(r31)
    bl fn_806958E0
    stw r29, 0x1654(r31)
    addi r3, r31, 0x1660
    lfs f3, lbl_8088507C
    addi r7, r1, 0x8
    stw r29, 0x1658(r31)
    addi r6, r1, 0x18
    lfs f0, lbl_80885078
    addi r5, r1, 0x28
    stw r29, 0x165c(r31)
    addi r4, r1, 0x38
    addi r0, r31, 0x17a0
lbl_fn_8032DEA0_0000052C:
    stw r29, 0x0(r3)
    stw r29, 0x44(r3)
    stw r29, 0x48(r3)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x4c(r3)
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    psq_st f1, 0x4(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    psq_st f2, 0xc(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x14(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    psq_st f2, 0x1c(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    psq_st f1, 0x24(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    psq_st f2, 0x2c(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_st f1, 0x34(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f2, 0x3c(r3), 0, 0
    addi r3, r3, 0x50
    cmplw r3, r0
    blt lbl_fn_8032DEA0_0000052C
    li r29, 0x0
    stw r29, 0x17a0(r31)
    addi r3, r31, 0x17a4
    bl fn_802377B8
    addi r3, r31, 0x17b0
    bl fn_80237518
    lwz r0, 0x12a4(r31)
    li r5, 0x1
    lis r30, lbl_80749F88@ha
    stw r29, 0x17bc(r31)
    oris r0, r0, 0x40
    addi r3, r31, 0x14b0
    stw r29, 0x17c0(r31)
    addi r4, r30, lbl_80749F88@l
    stw r5, 0x17c4(r31)
    stw r0, 0x12a4(r31)
    lwz r12, 0x14b0(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x158c(r31)
    addi r3, r30, lbl_80749F88@l
    addi r4, r3, 0x29
    cmpwi r0, 0x0
    bne lbl_fn_8032DEA0_0000064C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8032DEA0_0000064C
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x158c(r31)
    mr r29, r3
    b lbl_fn_8032DEA0_00000650
lbl_fn_8032DEA0_0000064C:
    li r29, 0x0
lbl_fn_8032DEA0_00000650:
    lis r30, lbl_80749F88@ha
    mr r3, r29
    addi r30, r30, lbl_80749F88@l
    addi r5, r31, 0x1654
    addi r4, r30, 0x33
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x3d
    addi r5, r31, 0x1658
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r6, 0xf
    mr r3, r29
    addi r7, r6, 0x4240
    addi r4, r30, 0x46
    addi r5, r31, 0x157c
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885078
    mr r3, r29
    lfs f2, lbl_80885080
    addi r4, r30, 0x50
    lfs f3, lbl_8088507C
    addi r5, r31, 0x1580
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885078
    mr r3, r29
    lfs f2, lbl_80885080
    addi r4, r30, 0x62
    lfs f3, lbl_8088507C
    addi r5, r31, 0x1584
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0x72
    addi r5, r31, 0x165c
    li r6, -0x1
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885078
    mr r3, r29
    lfs f2, lbl_80885080
    addi r4, r30, 0x7d
    lfs f3, lbl_8088507C
    addi r5, r31, 0x1588
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0x8c
    addi r5, r31, 0x15ac
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r6, 0x2
    mr r3, r29
    subi r7, r6, 0x7960
    addi r4, r30, 0x98
    addi r5, r31, 0x58c
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885084
    mr r3, r29
    lfs f2, lbl_80885088
    addi r4, r30, 0xa3
    lfs f3, lbl_8088507C
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r29
    addi r4, r30, 0xa7
    addi r5, r31, 0x1570
    li r6, 0x0
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885078
    mr r3, r29
    lfs f2, lbl_80885080
    addi r4, r30, 0xb6
    lfs f3, lbl_8088507C
    addi r5, r31, 0x7d8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    li r0, 0x0
    stw r0, 0x15b4(r31)
    addi r3, r31, 0x17a4
    addi r4, r30, 0xb9
    stw r0, 0x15e4(r31)
    stw r0, 0x1614(r31)
    bl fn_8023780C
    addi r3, r31, 0x17b0
    addi r4, r30, 0xc6
    bl fn_80237654
    mr r3, r31
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8032E2D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8032E2D4_00000924
    addi r3, r31, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8032E2D4_00000924
    addi r3, r31, 0x17a4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8032E2D4_00000924
    addi r3, r31, 0x17b0
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8032E2D4_00000924
    li r0, 0x6
    stw r0, 0x58c(r31)
    addi r4, r31, 0x1660
    mr r3, r31
    lwz r5, lbl_8087EFA8
    lwz r0, 0x324(r5)
    stw r0, 0x1660(r31)
    psq_l f1, 0x328(r5), 0, 0
    psq_l f2, 0x330(r5), 0, 0
    psq_st f2, 0xc(r4), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    psq_l f1, 0x338(r5), 0, 0
    psq_l f2, 0x340(r5), 0, 0
    psq_st f2, 0x1c(r4), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    psq_l f1, 0x348(r5), 0, 0
    psq_l f2, 0x350(r5), 0, 0
    psq_st f2, 0x2c(r4), 0, 0
    psq_st f1, 0x24(r4), 0, 0
    psq_l f1, 0x358(r5), 0, 0
    psq_l f2, 0x360(r5), 0, 0
    psq_st f2, 0x3c(r4), 0, 0
    psq_st f1, 0x34(r4), 0, 0
    lwz r0, 0x368(r5)
    stw r0, 0x16a4(r31)
    lwz r0, 0x36c(r5)
    stw r0, 0x16a8(r31)
    lfs f0, 0x370(r5)
    stfs f0, 0x16ac(r31)
    stw r4, 0x17a0(r31)
    bl fn_8032E3DC
    lwz r0, 0x7ec(r31)
    li r3, 0x1
    ori r0, r0, 0x140
    oris r0, r0, 0x1
    ori r0, r0, 0x11
    oris r0, r0, 0x40
    ori r0, r0, 0x4000
    stw r0, 0x7ec(r31)
    b lbl_fn_8032E2D4_00000928
lbl_fn_8032E2D4_00000924:
    li r3, 0x0
lbl_fn_8032E2D4_00000928:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8032E3DC(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    stw r0, 0x694(r1)
    stmw r25, 0x674(r1)
    mr r28, r3
    addi r3, r3, 0x14b0
    bl fn_8047059C
    mr r29, r3
    addi r3, r28, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r30, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x38(r1)
    mr r27, r3
    addi r3, r1, 0x48
    stw r30, 0x3c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r30, 0x40(r1)
    stw r30, 0x44(r1)
    stw r30, 0x668(r1)
    bl memset
    addi r3, r1, 0x648
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x38(r1)
    mr r4, r27
    mr r5, r29
    addi r3, r1, 0x38
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x38
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x38(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_80749F88@ha
    addi r29, r1, 0x18
    addi r31, r31, lbl_80749F88@l
    li r27, 0x1
lbl_fn_8032E3DC_000009EC:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r25, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8032E3DC_00000E74
    cmpwi r0, 0x0
    beq lbl_fn_8032E3DC_00000E74
    addi r4, r31, 0xdf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000A38
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d0(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000A38:
    mr r3, r25
    addi r4, r31, 0xec
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000A64
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d4(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000A64:
    mr r3, r25
    addi r4, r31, 0xf9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000A90
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14dc(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000A90:
    mr r3, r25
    addi r4, r31, 0x103
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000ABC
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d8(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000ABC:
    mr r3, r25
    addi r4, r31, 0x112
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000AE8
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e0(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000AE8:
    mr r3, r25
    addi r4, r31, 0x123
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000B14
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e4(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000B14:
    mr r3, r25
    addi r4, r31, 0x131
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000B40
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e8(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000B40:
    mr r3, r25
    addi r4, r31, 0x46
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000B68
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x157c(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000B68:
    mr r3, r25
    addi r4, r31, 0x50
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000B90
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1580(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000B90:
    mr r3, r25
    addi r4, r31, 0x62
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000BB8
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1584(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000BB8:
    mr r3, r25
    addi r4, r31, 0x7d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000BE0
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1588(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000BE0:
    mr r3, r25
    addi r4, r31, 0x144
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000C74
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x28(r1)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x2c(r1)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x30(r1)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, 0x14ec(r28)
    stw r3, 0x34(r1)
    slwi r0, r0, 4
    add r0, r28, r0
    addic. r4, r0, 0x14f0
    beq lbl_fn_8032E3DC_00000C64
    lwz r0, 0x28(r1)
    stw r0, 0x0(r4)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r4)
    stw r3, 0xc(r4)
lbl_fn_8032E3DC_00000C64:
    lwz r3, 0x14ec(r28)
    addi r0, r3, 0x1
    stw r0, 0x14ec(r28)
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000C74:
    mr r3, r25
    addi r4, r31, 0x14a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000D80
    lwz r0, 0x1614(r28)
    cmplwi r0, 0x5
    bge lbl_fn_8032E3DC_00000E74
    addi r3, r1, 0x38
    bl fn_8005B3CC
    stw r30, 0x18(r1)
    mr r26, r3
    stw r30, 0x1c(r1)
    stw r30, 0x20(r1)
    bl strlen
    mr r25, r3
    mr r3, r29
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r29
    stb r0, 0x10(r1)
    mr r6, r26
    add r7, r26, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x1614(r28)
    mulli r0, r0, 0xc
    add r0, r28, r0
    addic. r26, r0, 0x1618
    beq lbl_fn_8032E3DC_00000D5C
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8032E3DC_00000D1C
    lwz r0, 0x1c(r1)
    stw r3, 0x0(r26)
    stw r0, 0x4(r26)
    lwz r0, 0x20(r1)
    stw r0, 0x8(r26)
    b lbl_fn_8032E3DC_00000D5C
lbl_fn_8032E3DC_00000D1C:
    stw r30, 0x0(r26)
    mr r3, r26
    stw r30, 0x4(r26)
    stw r30, 0x8(r26)
    lwz r4, 0x1c(r1)
    bl fn_80013DC4
    lbz r5, 0x8(r1)
    mr r3, r26
    stb r5, 0xc(r1)
    addi r8, r1, 0xc
    lwz r6, 0x20(r1)
    li r4, 0x0
    lwz r0, 0x1c(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8032E3DC_00000D5C:
    lwz r3, 0x1614(r28)
    addi r0, r3, 0x1
    stw r0, 0x1614(r28)
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8032E3DC_00000E74
    lwz r3, 0x20(r1)
    bl dtor_80084684
    b lbl_fn_8032E3DC_00000E74
lbl_fn_8032E3DC_00000D80:
    mr r3, r25
    addi r4, r31, 0x150
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_00000E74
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x4
    bge lbl_fn_8032E3DC_00000E74
    mulli r0, r3, 0x50
    addi r3, r1, 0x38
    add r25, r28, r0
    stw r27, 0x1660(r25)
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1664(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1668(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x166c(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1674(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1678(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x167c(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1684(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1688(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x168c(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1694(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1698(r25)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x169c(r25)
lbl_fn_8032E3DC_00000E74:
    addi r3, r1, 0x38
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8032E3DC_000009EC
    lmw r25, 0x674(r1)
    lwz r0, 0x694(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}

asm void fn_8032E938(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwz r0, 0x1578(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8032E938_000011D8
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8032E938_00000ED4
    li r4, 0x3
    bl fn_8016E970
lbl_fn_8032E938_00000ED4:
    lwz r0, 0x1590(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8032E938_00000F00
    lwz r3, 0x1594(r31)
    subic. r0, r3, 0x1
    stw r0, 0x1594(r31)
    bge lbl_fn_8032E938_00000F08
    li r0, 0x0
    stw r0, 0x1590(r31)
    stw r0, 0x1594(r31)
    b lbl_fn_8032E938_00000F08
lbl_fn_8032E938_00000F00:
    li r0, 0x0
    stw r0, 0x1594(r31)
lbl_fn_8032E938_00000F08:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8032E938_0000117C
    lwz r5, 0x14bc(r31)
    mr r3, r31
    lwz r4, 0x15a0(r31)
    addi r0, r5, 0x1
    stw r0, 0x14bc(r31)
    addi r0, r4, 0x1
    stw r0, 0x15a0(r31)
    bl fn_8032F6A8
    lwz r0, 0xd1c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8032E938_00000F4C
    bl fn_8000D9E8
    bl fn_8000DCF4
    stw r3, 0xd1c(r31)
lbl_fn_8032E938_00000F4C:
    mr r3, r31
    bl fn_8032F608
    cmpwi r3, 0x0
    beq lbl_fn_8032E938_00000F64
    mr r3, r31
    bl fn_80332F78
lbl_fn_8032E938_00000F64:
    lwz r4, 0x1570(r31)
    cmpwi r4, 0x0
    blt lbl_fn_8032E938_00001080
    addi r3, r31, 0x14ec
    bl fn_8032ECA8
    mr r29, r3
    bl fn_80121F00
    lwz r4, 0x0(r29)
    bl fn_80370A78
    cmpwi r3, 0x1
    beq lbl_fn_8032E938_00001080
    bl fn_80121F00
    lwz r4, 0x4(r29)
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_8032E938_00000FC0
    lwz r0, 0xc(r29)
    mr r3, r31
    stw r0, 0x1574(r31)
    bl fn_803333BC
    li r0, 0x1
    stw r0, 0x1598(r31)
    b lbl_fn_8032E938_00001078
lbl_fn_8032E938_00000FC0:
    lwz r4, 0x940(r31)
    lis r3, 0x4330
    lis r5, lbl_80749F58@ha
    lwz r0, 0x14e8(r31)
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    lfd f3, lbl_80749F58@l(r5)
    cmpwi r0, 0x0
    stw r3, 0x28(r1)
    lfs f1, lbl_8088508C
    lfd f2, 0x28(r1)
    lfs f0, 0x8(r29)
    fsubs f2, f2, f3
    fadds f0, f1, f0
    fmuls f0, f2, f0
    stfs f0, 0x7d8(r31)
    beq lbl_fn_8032E938_00001078
    mr r3, r31
    bl fn_8012A1B8
    lwz r4, 0xd1c(r31)
    mr r29, r3
    addi r3, r1, 0x10
    bl fn_8014052C
    lwz r3, 0xd1c(r31)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x1c
    addi r5, r1, 0x10
    bl fn_80013410
    bl fn_8013A194
    bl fn_800F8548
    mr r30, r3
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80885078
    mr r4, r31
    stw r0, 0xc(r1)
    mr r6, r30
    lfs f2, lbl_8088507C
    mr r8, r29
    lwz r5, 0x14e8(r31)
    addi r7, r1, 0x1c
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_8032E938_00001078:
    li r0, -0x1
    stw r0, 0x1570(r31)
lbl_fn_8032E938_00001080:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x9
    beq lbl_fn_8032E938_000010CC
    bl fn_80121F00
    bl fn_80122550
    lwz r0, 0x14cc(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_8032E938_000010CC
    li r4, 0x0
    bl fn_8026616C
    mr r3, r29
    bl fn_8032ECA0
    bl fn_8032EC94
    mr r3, r29
    li r4, 0x0
    bl fn_80266174
    li r0, 0x0
    stw r0, 0x14cc(r31)
lbl_fn_8032E938_000010CC:
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x7
    cmplwi r0, 0xb
    bgt lbl_fn_8032E938_0000116C
    lis r3, jumptable_80788E50@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80788E50@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_8032FFF8
    b lbl_fn_8032E938_0000117C
    mr r3, r31
    bl fn_80330218
    b lbl_fn_8032E938_0000117C
    mr r3, r31
    bl fn_80330D74
    b lbl_fn_8032E938_0000117C
    mr r3, r31
    bl fn_80331094
    b lbl_fn_8032E938_0000117C
    mr r3, r31
    bl fn_8033135C
    b lbl_fn_8032E938_0000117C
    mr r3, r31
    bl fn_803317F4
    b lbl_fn_8032E938_0000117C
    mr r3, r31
    bl fn_80331DAC
    b lbl_fn_8032E938_0000117C
    mr r3, r31
    bl fn_803323A0
    b lbl_fn_8032E938_0000117C
    mr r3, r31
    bl fn_8033250C
    b lbl_fn_8032E938_0000117C
    mr r3, r31
    bl fn_80331898
    b lbl_fn_8032E938_0000117C
lbl_fn_8032E938_0000116C:
    mr r3, r31
    bl fn_8032FDE8
    mr r3, r31
    bl fn_8032EF38
lbl_fn_8032E938_0000117C:
    mr r3, r31
    bl fn_80139560
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8032FBF4
    cmpwi r3, 0x0
    beq lbl_fn_8032E938_000011AC
    mr r3, r31
    bl fn_8032FD30
lbl_fn_8032E938_000011AC:
    lwz r0, 0x1658(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8032E938_000011D8
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x43
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_8032E938_000011D8
    mr r3, r31
    bl fn_80332BE0
lbl_fn_8032E938_000011D8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8032EC94(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_8032ECA0(void)
{
    nofralloc
    addi r3, r3, 0x46c
    blr
}

asm void fn_8032ECA8(void)
{
    nofralloc
    slwi r0, r4, 4
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_8032ECB8(void)
{
    nofralloc
    b fn_800E41FC
}

asm void fn_8032ECBC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_8032ECBC_0000124C
    cmpwi r4, 0x1
    beq lbl_fn_8032ECBC_000012AC
    b lbl_fn_8032ECBC_00001308
lbl_fn_8032ECBC_0000124C:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80749F58@ha
    lfd f3, lbl_80749F58@l(r4)
    lfs f1, lbl_80885088
    lfs f0, 0x1584(r30)
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8032ECBC_00001308
    li r31, 0x2
    b lbl_fn_8032ECBC_00001308
lbl_fn_8032ECBC_000012AC:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80749F58@ha
    lfd f3, lbl_80749F58@l(r4)
    lfs f1, lbl_80885088
    lfs f0, 0x1588(r30)
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8032ECBC_00001308
    li r31, 0x3
lbl_fn_8032ECBC_00001308:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8032EDC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x14
    beq lbl_fn_8032EDC4_00001364
    cmpwi r0, 0xf
    beq lbl_fn_8032EDC4_00001364
    cmpwi r0, 0x12
    beq lbl_fn_8032EDC4_00001364
    cmpwi r0, 0xc
    beq lbl_fn_8032EDC4_00001390
    b lbl_fn_8032EDC4_000013C8
lbl_fn_8032EDC4_00001364:
    lfs f2, 0x10(r4)
    lfs f3, lbl_80885078
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    b lbl_fn_8032EDC4_000013C8
lbl_fn_8032EDC4_00001390:
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80885090
    fcmpo cr0, f1, f0
    bge lbl_fn_8032EDC4_000013C8
    lfs f2, 0x10(r4)
    lfs f3, lbl_80885078
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_8032EDC4_000013C8:
    mr r3, r30
    bl fn_801513D0
    lwz r0, 0x55c(r30)
    li r4, 0x0
    lwz r3, 0x17bc(r30)
    cmpwi r0, 0x6
    stw r4, 0x1590(r30)
    addi r0, r3, 0x1
    stw r0, 0x17bc(r30)
    bne lbl_fn_8032EDC4_00001474
    lwz r0, 0x560(r30)
    cmpwi r0, 0x16
    beq lbl_fn_8032EDC4_0000140C
    cmpwi r0, 0x17
    beq lbl_fn_8032EDC4_0000140C
    cmpwi r0, 0x14
    bne lbl_fn_8032EDC4_00001474
lbl_fn_8032EDC4_0000140C:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8032EDC4_00001428
    cmpwi r0, 0x7
    beq lbl_fn_8032EDC4_00001428
    li r0, 0x0
    stw r0, 0x15a0(r30)
lbl_fn_8032EDC4_00001428:
    li r31, 0x0
    stw r31, 0x14b8(r30)
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_8032EDC4_0000146C
    cmpwi r4, 0x7
    beq lbl_fn_8032EDC4_0000146C
    cmpwi r4, 0xe
    beq lbl_fn_8032EDC4_0000146C
    stw r4, 0x15a8(r30)
lbl_fn_8032EDC4_0000146C:
    li r0, 0x6
    stw r0, 0x58c(r30)
lbl_fn_8032EDC4_00001474:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8032EF2C(void)
{
    nofralloc
    li r4, 0x20
    addi r3, r3, 0x7d4
    b fn_8013322C
}

asm void fn_8032EF38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8032EF38_00001634
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8032EF38_000015CC
    lwz r0, 0x17c4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8032EF38_0000155C
    lwz r4, 0x15a0(r3)
    lwz r0, 0x157c(r3)
    cmpw r4, r0
    blt lbl_fn_8032EF38_00001634
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8032EF38_00001528
    cmpwi r4, 0x7
    beq lbl_fn_8032EF38_00001528
    cmpwi r4, 0xe
    beq lbl_fn_8032EF38_00001528
    stw r4, 0x15a8(r31)
lbl_fn_8032EF38_00001528:
    lwz r0, 0x12a4(r31)
    li r3, 0x9
    stw r3, 0x58c(r31)
    mr r3, r31
    rlwinm r0, r0, 0, 27, 25
    lwz r4, 0x14d8(r31)
    stw r0, 0x12a4(r31)
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    li r0, 0x0
    stw r0, 0x17c4(r31)
    b lbl_fn_8032EF38_00001634
lbl_fn_8032EF38_0000155C:
    bl fn_8032F0EC
    cmpwi r3, 0x0
    bne lbl_fn_8032EF38_00001634
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8032EF38_000015AC
    cmpwi r4, 0x7
    beq lbl_fn_8032EF38_000015AC
    cmpwi r4, 0xe
    beq lbl_fn_8032EF38_000015AC
    stw r4, 0x15a8(r31)
lbl_fn_8032EF38_000015AC:
    li r0, 0x7
    stw r0, 0x58c(r31)
    lwz r4, 0xd1c(r31)
    mr r3, r31
    lfs f1, lbl_80885094
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_8032EF38_00001634
lbl_fn_8032EF38_000015CC:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8032EF38_000015E8
    cmpwi r0, 0x7
    beq lbl_fn_8032EF38_000015E8
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_8032EF38_000015E8:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8032EF38_0000162C
    cmpwi r4, 0x7
    beq lbl_fn_8032EF38_0000162C
    cmpwi r4, 0xe
    beq lbl_fn_8032EF38_0000162C
    stw r4, 0x15a8(r31)
lbl_fn_8032EF38_0000162C:
    li r0, 0x6
    stw r0, 0x58c(r31)
lbl_fn_8032EF38_00001634:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8032F0EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0xd1c(r3)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x8
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x8
    bl fn_8000D3A4
    lfs f0, lbl_80885094
    fcmpo cr0, f1, f0
    bge lbl_fn_8032F0EC_0000170C
    lwz r3, 0x15a0(r31)
    lwz r0, 0x157c(r31)
    cmpw r3, r0
    blt lbl_fn_8032F0EC_000016F0
    lwz r0, 0x1598(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8032F0EC_000016BC
    li r0, 0x0
    stw r0, 0x1598(r31)
    mr r3, r31
    bl fn_80333024
    b lbl_fn_8032F0EC_0000173C
lbl_fn_8032F0EC_000016BC:
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add. r0, r0, r3
    bne lbl_fn_8032F0EC_000016E4
    mr r3, r31
    bl fn_80332BE0
    b lbl_fn_8032F0EC_0000173C
lbl_fn_8032F0EC_000016E4:
    mr r3, r31
    bl fn_803326C0
    b lbl_fn_8032F0EC_0000173C
lbl_fn_8032F0EC_000016F0:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8032F0EC_00001704
    mr r3, r31
    bl fn_80332628
lbl_fn_8032F0EC_00001704:
    li r3, 0x1
    b lbl_fn_8032F0EC_00001750
lbl_fn_8032F0EC_0000170C:
    lfs f0, lbl_80885098
    fcmpo cr0, f1, f0
    ble lbl_fn_8032F0EC_0000173C
    mr r3, r31
    bl fn_8032F204
    cmpwi r3, 0x0
    beq lbl_fn_8032F0EC_0000173C
    lwz r0, 0x15a8(r31)
    cmpwi r0, 0x9
    beq lbl_fn_8032F0EC_0000173C
    mr r3, r31
    bl fn_80332B44
lbl_fn_8032F0EC_0000173C:
    lwz r4, 0x58c(r31)
    subfic r3, r4, 0x6
    subi r0, r4, 0x6
    or r0, r3, r0
    srwi r3, r0, 31
lbl_fn_8032F0EC_00001750:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8032F204(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r4, 0xd1c(r3)
    mr r27, r3
    cmpwi r4, 0x0
    bne lbl_fn_8032F204_00001790
    li r3, 0x0
    b lbl_fn_8032F204_0000185C
lbl_fn_8032F204_00001790:
    lfs f3, 0x530(r4)
    li r28, 0x0
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x20
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9940
    lfs f0, lbl_8088509C
    fcmpo cr0, f1, f0
    ble lbl_fn_8032F204_00001858
    psq_l f1, 0x528(r27), 0, 0
    addi r31, r1, 0x14
    lfs f2, 0x530(r27)
    addi r30, r1, 0x8
    stfs f2, 0x1c(r1)
    mr r3, r27
    lfs f4, lbl_80885090
    psq_st f1, 0x0(r31), 0, 0
    lwz r29, lbl_8087EE98
    lwz r4, 0xd1c(r27)
    lfs f0, 0x18(r1)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    fadds f3, f0, f4
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0xc(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r29
    mr r5, r31
    mr r6, r30
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8032F204_00001858
    li r28, 0x1
lbl_fn_8032F204_00001858:
    mr r3, r28
lbl_fn_8032F204_0000185C:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8032F314(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stfd f27, 0x120(r1)
    psq_st f27, 0x128(r1), 0, 0
    stfd f26, 0x110(r1)
    psq_st f26, 0x118(r1), 0, 0
    stfd f25, 0x100(r1)
    psq_st f25, 0x108(r1), 0, 0
    stfd f24, 0xf0(r1)
    psq_st f24, 0xf8(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0xd1c(r3)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_8032F314_000018E0
    li r3, 0x0
    b lbl_fn_8032F314_00001B10
lbl_fn_8032F314_000018E0:
    li r31, 0x0
    stw r31, 0xac(r1)
    stw r31, 0xb0(r1)
    stw r31, 0xb4(r1)
    stw r31, 0xb8(r1)
    bl fn_80680CF8
    lis r4, 0x4178
    lwz r6, 0xd1c(r30)
    addi r4, r4, 0x749f
    lis r0, 0x4330
    mulhw r5, r4, r3
    stw r0, 0xc8(r1)
    lis r4, lbl_80749F58@ha
    lfs f7, 0x530(r6)
    lfs f6, 0x530(r30)
    lfd f9, lbl_80749F58@l(r4)
    srawi r0, r5, 8
    lfs f3, 0x528(r6)
    srwi r4, r0, 31
    lfs f0, 0x528(r30)
    add r0, r0, r4
    fsubs f6, f7, f6
    mulli r0, r0, 0x3e9
    fsubs f7, f3, f0
    lfs f8, lbl_80885088
    lfs f5, 0x52c(r6)
    subf r0, r0, r3
    lfs f4, 0x52c(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xcc(r1)
    fsubs f5, f5, f4
    lfs f4, lbl_808850A4
    lfd f3, 0xc8(r1)
    addi r3, r1, 0x38
    lfs f0, lbl_808850A0
    fsubs f3, f3, f9
    stfs f7, 0x38(r1)
    fdivs f3, f3, f8
    stfs f5, 0x3c(r1)
    stfs f6, 0x40(r1)
    fmadds f26, f4, f3, f0
    bl fn_805F9920
    lfs f0, lbl_808850A8
    fcmpo cr0, f1, f0
    bge lbl_fn_8032F314_000019AC
    lfs f3, lbl_80885078
    lfs f0, lbl_8088507C
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    b lbl_fn_8032F314_000019B8
lbl_fn_8032F314_000019AC:
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8032F314_000019B8:
    lis r3, lbl_80749F60@ha
    lfs f27, lbl_80885078
    lfs f28, lbl_8088507C
    addi r28, r1, 0x20
    lfd f29, lbl_80749F60@l(r3)
    li r26, 0x0
    lfs f30, lbl_808850AC
    lis r29, 0x4330
    lfs f24, lbl_808850B4
    lfs f25, lbl_80885090
    lfs f31, lbl_808850B0
lbl_fn_8032F314_000019E4:
    stw r26, 0xcc(r1)
    addi r3, r1, 0x48
    li r4, 0x79
    stw r29, 0xc8(r1)
    lfd f0, 0xc8(r1)
    stfs f27, 0x2c(r1)
    fsubs f0, f0, f29
    stfs f27, 0x30(r1)
    fmadds f1, f30, f0, f26
    stfs f28, 0x34(r1)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x2c
    addi r4, r1, 0x38
    bl fn_805F9990
    fcmpo cr0, f1, f31
    bgt lbl_fn_8032F314_00001B00
    lfs f0, 0x30(r1)
    mr r3, r30
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    fmuls f6, f0, f24
    lfs f0, 0x34(r1)
    lfs f3, 0x2c(r1)
    fmuls f5, f0, f24
    psq_st f1, 0x0(r28), 0, 0
    fmuls f7, f3, f24
    lwz r27, lbl_8087EE98
    stfs f2, 0x28(r1)
    lfs f0, 0x52c(r30)
    lfs f4, 0x530(r30)
    fadds f8, f0, f6
    lfs f3, 0x528(r30)
    fadds f4, f4, f5
    lfs f0, 0x24(r1)
    fadds f9, f3, f7
    stfs f7, 0x8(r1)
    fadds f3, f0, f25
    stfs f6, 0xc(r1)
    fadds f0, f8, f25
    stfs f5, 0x10(r1)
    stfs f9, 0x14(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x18(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r27
    mr r5, r28
    addi r4, r1, 0x78
    addi r6, r1, 0x14
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8032F314_00001B00
    addi r4, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r30, 0x14c0
    psq_st f1, 0x0(r3), 0, 0
    li r31, 0x1
    lfs f0, lbl_80885090
    lfs f3, 0x14c4(r30)
    stfs f2, 0x14c8(r30)
    fsubs f0, f3, f0
    stfs f0, 0x14c4(r30)
    b lbl_fn_8032F314_00001B0C
lbl_fn_8032F314_00001B00:
    addi r26, r26, 0x1
    cmplwi r26, 0x8
    blt lbl_fn_8032F314_000019E4
lbl_fn_8032F314_00001B0C:
    mr r3, r31
lbl_fn_8032F314_00001B10:
    addi r11, r1, 0xf0
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    psq_l f27, 0x128(r1), 0, 0
    lfd f27, 0x120(r1)
    psq_l f26, 0x118(r1), 0, 0
    lfd f26, 0x110(r1)
    psq_l f25, 0x108(r1), 0, 0
    lfd f25, 0x100(r1)
    psq_l f24, 0xf8(r1), 0, 0
    lfd f24, 0xf0(r1)
    bl _restgpr_26
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}
