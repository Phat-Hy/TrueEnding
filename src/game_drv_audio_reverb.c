#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8000D3A8(void);
extern void fn_8000D430(void);
extern void fn_8000DD0C(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004B378(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AC08(void);
extern void fn_8006AD24(void);
extern void fn_8006AF38(void);
extern void fn_8006AFF8(void);
extern void fn_8006B2D8(void);
extern void fn_8006BA30(void);
extern void fn_8006BA38(void);
extern void fn_8006D008(void);
extern void fn_80084320(void);
extern void fn_8008B964(void);
extern void fn_8008CD1C(void);
extern void fn_8008CD50(void);
extern void fn_80097A20(void);
extern void fn_80097C08(void);
extern void fn_80097E80(void);
extern void fn_800A03E4(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D089C(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA70(void);
extern void fn_800F52F8(void);
extern void fn_800F7260(void);
extern void fn_800F80A8(void);
extern void fn_800F8524(void);
extern void fn_80112958(void);
extern void fn_80112960(void);
extern void fn_80113CCC(void);
extern void fn_80114AA0(void);
extern void fn_801156C4(void);
extern void fn_80116BA4(void);
extern void fn_80116BAC(void);
extern void fn_80116BD4(void);
extern void fn_80121F00(void);
extern void fn_80122280(void);
extern void fn_801231B8(void);
extern void fn_801231D0(void);
extern void fn_80147A08(void);
extern void fn_80148B38(void);
extern void fn_801498F0(void);
extern void fn_80179D44(void);
extern void fn_801F3FF8(void);
extern void fn_801F45F4(void);
extern void fn_801F4E8C(void);
extern void fn_801FED24(void);
extern void fn_80244CAC(void);
extern void fn_802A4968(void);
extern void fn_802A49BC(void);
extern void fn_802F0990(void);
extern void fn_80316E38(void);
extern void fn_80317034(void);
extern void fn_80357F38(void);
extern void fn_803606CC(void);
extern void fn_80360780(void);
extern void fn_80366DF8(void);
extern void fn_80372754(void);
extern void fn_803727D4(void);
extern void fn_8037529C(void);
extern void fn_8037F688(void);
extern void fn_80392A04(void);
extern void fn_803C1560(void);
extern void fn_803CFC58(void);
extern void fn_803CFC64(void);
extern void fn_803D2134(void);
extern void fn_803D6E2C(void);
extern void fn_803D6F44(void);
extern void fn_803D6F68(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804A5E40(void);
extern void fn_805BA34C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9AB0(void);
extern void fn_805F9D20(void);
extern void fn_8067E23C(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80763EE0[];
extern u8 lbl_80763F10[];
extern u8 lbl_80763F38[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80797960[];
extern u8 lbl_807BB380[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F580;
extern u32 lbl_8087F9C0;
extern u32 lbl_80888450;
extern u32 lbl_80888454;
extern u32 lbl_80888458;
extern u32 lbl_8088845C;
extern u32 lbl_80888460;
extern u32 lbl_80888464;
extern u32 lbl_80888468;
extern u32 lbl_8088846C;
extern u32 lbl_80888470;
extern u32 lbl_80888474;
extern u32 lbl_80888478;
extern u32 lbl_8088847C;
extern u32 lbl_80888480;
extern u32 lbl_80888484;
extern u32 lbl_80888488;
extern u32 lbl_8088848C;
extern u32 lbl_80888490;
extern u32 lbl_80888494;
extern u32 lbl_80888498;
extern u32 lbl_8088849C;
extern u32 lbl_808884A0;

/* Function declarations */
void fn_805BA924(void);
void fn_805BA938(void);
void fn_805BAC18(void);
void fn_805BB510(void);
void fn_805BB548(void);
void fn_805BB55C(void);
void fn_805BB568(void);
void fn_805BB570(void);
void fn_805BB578(void);
void fn_805BB584(void);
void fn_805BB590(void);
void fn_805BB598(void);
void fn_805BB5A0(void);
void fn_805BB658(void);
void fn_805BBD80(void);
void fn_805BC1C4(void);

asm void fn_805BA924(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_805BA938(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_80888454
    li r5, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r0, 0x5b0(r3)
    stfs f0, 0x84(r3)
    mulli r0, r0, 0x4c
    stw r5, 0x5b4(r3)
    stw r5, 0x5c0(r3)
    add r4, r3, r0
    lwz r0, 0x4a8(r4)
    cmpwi r0, 0x1
    bne lbl_fn_805BA938_00000084
    lwz r4, lbl_8087F9C0
    lwz r0, 0x28(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x5b4(r3)
lbl_fn_805BA938_00000084:
    li r30, 0x1
    stw r30, 0x88(r3)
    mr r3, r29
    bl fn_805BC1C4
    lwz r4, lbl_80888450
    addi r3, r1, 0x8
    lfs f1, lbl_8088845C
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    stw r30, 0x5bc(r29)
    lwz r3, lbl_8087F4E8
    stw r30, 0x88(r3)
    lwz r0, 0x5b0(r29)
    mulli r0, r0, 0x4c
    add r3, r29, r0
    lwz r0, 0x4b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BA938_000002CC
    li r0, 0x0
    stw r0, 0x5bc(r29)
    lwz r3, 0x4b0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r0, 0x5b0(r29)
    mulli r0, r0, 0x4c
    add r3, r29, r0
    lwz r3, 0x478(r3)
    bl fn_801F45F4
    lwz r0, 0x5b0(r29)
    lis r31, lbl_80763F38@ha
    addi r31, r31, lbl_80763F38@l
    mulli r0, r0, 0x4c
    addi r3, r31, 0x3d
    add r4, r29, r0
    lwz r28, 0x478(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x18
    bl fn_801F4E8C
    lwz r0, 0x5b0(r29)
    addi r5, r1, 0x10
    lfs f2, 0x1c(r1)
    addi r3, r31, 0x43
    mulli r0, r0, 0x4c
    lfs f0, 0x18(r1)
    stfs f0, 0x10(r1)
    lfs f4, 0x28(r1)
    stfs f2, 0x14(r1)
    add r4, r29, r0
    lwz r4, 0x4b0(r4)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    lfs f2, lbl_80888460
    lwz r0, 0x5b0(r29)
    lfs f3, lbl_80888464
    mulli r0, r0, 0x4c
    lfs f0, lbl_80888468
    add r4, r29, r0
    lwz r4, 0x4b0(r4)
    stfs f4, 0x10(r4)
    lwz r0, 0x5b0(r29)
    mulli r0, r0, 0x4c
    add r4, r29, r0
    lwz r4, 0x4b0(r4)
    stw r30, 0x4(r4)
    lwz r0, 0x5b0(r29)
    mulli r0, r0, 0x4c
    add r4, r29, r0
    lwz r4, 0x4b0(r4)
    stw r30, 0xc(r4)
    lfs f5, 0x18(r1)
    lfs f4, 0x1c(r1)
    fsubs f31, f5, f2
    lfs f2, 0x28(r1)
    fsubs f3, f4, f3
    fsubs f0, f2, f0
    stfs f31, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f0, 0x28(r1)
    lwz r0, 0x5b0(r29)
    mulli r0, r0, 0x4c
    add r4, r29, r0
    lwz r4, 0x4b4(r4)
    addi r28, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r28
    li r5, 0x0
    bl fn_801FED24
    lwz r0, 0x5b0(r29)
    addi r3, r31, 0x43
    lfs f31, 0x1c(r1)
    mulli r0, r0, 0x4c
    add r4, r29, r0
    lwz r4, 0x4b4(r4)
    addi r28, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r28
    li r5, 0x1
    bl fn_801FED24
    lwz r0, 0x5b0(r29)
    addi r3, r31, 0x43
    lfs f31, 0x28(r1)
    mulli r0, r0, 0x4c
    add r4, r29, r0
    lwz r4, 0x4b4(r4)
    addi r28, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r28
    li r5, 0x4
    bl fn_801FED24
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_805BA938_000002C0
    li r4, 0x1
    li r5, 0x0
    bl fn_800D089C
    cmpwi r3, 0x0
    ble lbl_fn_805BA938_000002C0
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_805BA938_000002C0
    li r4, 0x0
    li r5, 0x8
    li r6, 0xf
    bl fn_803606CC
    lwz r3, lbl_8087F418
    li r4, 0x0
    li r5, 0x8
    li r6, 0xf
    bl fn_80360780
lbl_fn_805BA938_000002C0:
    lwz r3, lbl_8087F4E8
    li r0, 0x0
    stw r0, 0x88(r3)
lbl_fn_805BA938_000002CC:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805BAC18(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stw r31, 0x22c(r1)
    stw r30, 0x228(r1)
    stw r29, 0x224(r1)
    mr r29, r3
    stw r28, 0x220(r1)
    lwz r4, 0x5b0(r3)
    addi r3, r3, 0x474
    bl fn_805BA34C
    lwz r0, 0x88(r29)
    mr r31, r3
    cmpwi r0, 0x1
    beq lbl_fn_805BAC18_0000034C
    cmpwi r0, 0x3
    beq lbl_fn_805BAC18_00000B14
    cmpwi r0, 0x2
    beq lbl_fn_805BAC18_00000B78
    b lbl_fn_805BAC18_00000BC4
lbl_fn_805BAC18_0000034C:
    addi r3, r3, 0x8
    bl fn_805BA924
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_000006A0
    lwz r0, 0x50(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805BAC18_000006A0
    bl fn_802F0990
    li r4, 0x1
    bl fn_80366DF8
    lfs f1, 0x84(r29)
    lfs f31, lbl_80888458
    lfs f0, lbl_8088846C
    fadds f1, f1, f31
    stfs f1, 0x84(r29)
    fdivs f0, f1, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_805BAC18_00000398
    b lbl_fn_805BAC18_0000039C
lbl_fn_805BAC18_00000398:
    fmr f31, f0
lbl_fn_805BAC18_0000039C:
    addi r3, r1, 0x108
    addi r4, r31, 0x18
    bl fn_8001047C
    addi r3, r1, 0xfc
    addi r4, r31, 0x24
    bl fn_8001047C
    lfs f0, lbl_80888470
    addi r3, r1, 0xf0
    lfs f1, lbl_80888458
    addi r4, r29, 0x54
    fmuls f0, f0, f31
    addi r5, r29, 0x6c
    fcmpo cr0, f1, f0
    bge lbl_fn_805BAC18_000003D8
    b lbl_fn_805BAC18_000003DC
lbl_fn_805BAC18_000003D8:
    fmr f1, f0
lbl_fn_805BAC18_000003DC:
    bl fn_800F7260
    lfs f1, 0x64(r29)
    addi r3, r1, 0xe0
    bl fn_805BB510
    lfs f1, 0x7c(r29)
    addi r3, r1, 0xd0
    bl fn_805BB510
    lfs f0, lbl_80888470
    addi r3, r1, 0xc0
    lfs f1, lbl_80888458
    addi r4, r1, 0xe0
    fmuls f0, f0, f31
    addi r5, r1, 0xd0
    fcmpo cr0, f1, f0
    bge lbl_fn_805BAC18_0000041C
    b lbl_fn_805BAC18_00000420
lbl_fn_805BAC18_0000041C:
    fmr f1, f0
lbl_fn_805BAC18_00000420:
    bl fn_805BB548
    addi r3, r1, 0x1e8
    addi r4, r1, 0xc0
    bl fn_80147A08
    addi r3, r1, 0x1b8
    addi r4, r1, 0xd0
    bl fn_80147A08
    addi r3, r1, 0x108
    addi r4, r1, 0x1b8
    bl fn_80011410
    addi r3, r1, 0xfc
    addi r4, r1, 0x1b8
    bl fn_80011410
    addi r3, r29, 0x8c
    bl fn_80113CCC
    mr r28, r3
    addi r3, r29, 0x8c
    bl fn_80112958
    mr r4, r3
    mr r5, r28
    addi r3, r1, 0xb4
    bl fn_80013338
    addi r3, r1, 0xa8
    addi r4, r1, 0xfc
    addi r5, r1, 0x108
    bl fn_80013338
    addi r3, r1, 0x5c
    addi r4, r1, 0xb4
    bl fn_80011034
    addi r3, r1, 0x98
    addi r4, r1, 0x5c
    bl fn_801498F0
    addi r3, r1, 0x50
    addi r4, r1, 0xa8
    bl fn_80011034
    addi r3, r1, 0x88
    addi r4, r1, 0x50
    bl fn_801498F0
    fmr f1, f31
    addi r3, r1, 0x78
    addi r4, r1, 0x98
    addi r5, r1, 0x88
    bl fn_805BB548
    addi r3, r1, 0xa8
    bl fn_8000D3A4
    stfs f1, 0xc(r1)
    addi r3, r1, 0xb4
    bl fn_8000D3A4
    stfs f1, 0x10(r1)
    fmr f1, f31
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_800F8524
    fmr f3, f1
    lfs f1, lbl_80888454
    addi r3, r1, 0x68
    fmr f2, f1
    bl fn_8000D114
    addi r3, r1, 0x158
    addi r4, r1, 0x78
    bl fn_80147A08
    addi r3, r1, 0x68
    addi r4, r1, 0x158
    bl fn_80011410
    addi r3, r1, 0x38
    addi r4, r1, 0xf0
    addi r5, r1, 0xfc
    bl fn_80013410
    addi r3, r29, 0x8c
    bl fn_80112958
    fmr f1, f31
    mr r4, r3
    addi r3, r1, 0x44
    addi r5, r1, 0x38
    bl fn_800F7260
    addi r3, r1, 0xfc
    addi r4, r1, 0x44
    bl fn_8000D124
    addi r3, r1, 0x2c
    addi r4, r1, 0xfc
    addi r5, r1, 0x68
    bl fn_80013338
    addi r3, r1, 0x108
    addi r4, r1, 0x2c
    bl fn_8000D124
    addi r3, r29, 0x8c
    bl fn_80116BA4
    stfs f1, 0x8(r1)
    fmr f1, f31
    addi r3, r1, 0x8
    addi r4, r31, 0x30
    bl fn_800F8524
    fmr f31, f1
    addi r3, r29, 0x280
    addi r4, r1, 0x108
    bl fn_80114AA0
    addi r3, r29, 0x280
    addi r4, r1, 0xfc
    bl fn_80112960
    fmr f1, f31
    addi r3, r29, 0x280
    bl fn_8037F688
    addi r3, r29, 0x280
    bl fn_8004B378
    bl fn_8008B964
    addi r4, r29, 0x280
    bl fn_80116BD4
    addi r3, r1, 0x188
    addi r4, r1, 0xf0
    bl fn_800F80A8
    addi r3, r1, 0x128
    addi r4, r1, 0x1e8
    addi r5, r1, 0x188
    bl fn_8008CD50
    addi r3, r1, 0x188
    addi r4, r1, 0x128
    bl fn_8008CD1C
    lwz r3, 0x50(r29)
    bl fn_803727D4
    mr r4, r3
    addi r3, r1, 0x188
    bl fn_80372754
    lwz r3, 0x50(r29)
    bl fn_8000DD0C
    addi r4, r1, 0x188
    bl fn_80316E38
    lwz r3, 0x50(r29)
    bl fn_8000DD0C
    lwz r5, 0x5b0(r29)
    li r4, 0x0
    lfs f1, lbl_80888454
    li r6, 0x1
    lfs f2, lbl_80888474
    addi r5, r5, 0xea
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x50(r29)
    bl fn_8000DD0C
    lfs f1, 0x14(r31)
    li r4, 0x0
    bl fn_80357F38
    lwz r3, 0x50(r29)
    bl fn_8000DD0C
    li r4, 0x1
    bl fn_80097E80
    addi r3, r1, 0x114
    li r4, 0x0
    bl fn_80317034
    lwz r3, 0x50(r29)
    bl fn_8000DD0C
    addi r4, r1, 0x114
    bl fn_8000D430
    addi r3, r1, 0x114
    li r4, -0x1
    bl fn_8000D3A8
    lwz r3, 0x50(r29)
    lfs f1, lbl_80888478
    bl fn_80148B38
    b lbl_fn_805BAC18_000006B4
lbl_fn_805BAC18_000006A0:
    lfs f1, 0x84(r29)
    lfs f0, lbl_8088846C
    fcmpo cr0, f1, f0
    bge lbl_fn_805BAC18_000006B4
    stfs f0, 0x84(r29)
lbl_fn_805BAC18_000006B4:
    lfs f1, 0x84(r29)
    lfs f0, lbl_8088846C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805BAC18_00000BC4
    lwz r3, 0x4(r31)
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_000006F8
    lwz r3, 0x4(r31)
    bl fn_803D6E2C
    lwz r3, 0x3c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_000006F8
    bl fn_805BB55C
    lwz r3, 0x40(r31)
    bl fn_803D6E2C
lbl_fn_805BAC18_000006F8:
    lwz r3, 0x3c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000718
    bl fn_805BB568
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000718
    li r0, 0x1
    stw r0, 0x5c0(r29)
lbl_fn_805BAC18_00000718:
    lwz r3, 0x4(r31)
    bl fn_803D6F44
    lwz r0, 0x34(r31)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_805BAC18_000007C0
    lwz r3, 0x4(r31)
    bl fn_803CFC64
    lfs f0, 0x38(r31)
    lfs f2, lbl_80888458
    fsubs f0, f0, f2
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805BAC18_000007C0
    lwz r0, 0x5b4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_805BAC18_000007B4
    lwz r3, 0x4(r31)
    bl fn_803CFC64
    lfs f2, lbl_80888458
    lfs f0, 0x38(r31)
    fadds f0, f2, f0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805BAC18_0000078C
    lwz r3, 0x4(r31)
    lfs f1, lbl_8088847C
    bl fn_803D2134
    b lbl_fn_805BAC18_000007C0
lbl_fn_805BAC18_0000078C:
    fmr f1, f2
    lwz r3, 0x4(r31)
    bl fn_803D2134
    lfs f1, 0x38(r31)
    lfs f0, lbl_80888458
    lwz r3, 0x4(r31)
    fsubs f1, f1, f0
    bl fn_803D6F68
    li r28, 0x1
    b lbl_fn_805BAC18_000007C0
lbl_fn_805BAC18_000007B4:
    fmr f1, f2
    lwz r3, 0x4(r31)
    bl fn_803D2134
lbl_fn_805BAC18_000007C0:
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805BAC18_00000864
    lwz r3, 0x4(r31)
    bl fn_803D6F44
    cmpwi r3, 0x0
    bne lbl_fn_805BAC18_000007F8
    lwz r3, 0x3c(r31)
    bl fn_805BB570
    cmpwi r3, 0x4
    bne lbl_fn_805BAC18_000007F8
    lwz r3, 0x3c(r31)
    bl fn_805BB578
    b lbl_fn_805BAC18_00000820
lbl_fn_805BAC18_000007F8:
    lwz r3, 0x4(r31)
    bl fn_803D6F44
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000820
    lwz r3, 0x3c(r31)
    bl fn_805BB570
    cmpwi r3, 0x5
    bne lbl_fn_805BAC18_00000820
    lwz r3, 0x3c(r31)
    bl fn_805BB584
lbl_fn_805BAC18_00000820:
    lwz r0, 0x40(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805BAC18_00000864
    lwz r3, 0x3c(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    stw r3, 0x21c(r1)
    lis r0, 0x4330
    lis r4, lbl_80763EE0@ha
    lwz r3, 0x40(r31)
    stw r0, 0x218(r1)
    lfd f1, lbl_80763EE0@l(r4)
    lfd f0, 0x218(r1)
    fsubs f1, f0, f1
    bl fn_803D6F68
lbl_fn_805BAC18_00000864:
    cmpwi r28, 0x0
    beq lbl_fn_805BAC18_00000BC4
    lwz r4, 0x5b0(r29)
    addi r3, r29, 0x474
    bl fn_805BA34C
    lwz r0, 0x34(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805BAC18_000008E8
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x25
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_000008AC
    li r28, 0x0
    bl fn_801156C4
    bl fn_80122280
    stw r28, 0x4(r3)
lbl_fn_805BAC18_000008AC:
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x26
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_000008D4
    li r28, 0x1
    bl fn_801156C4
    bl fn_80122280
    stw r28, 0x4(r3)
lbl_fn_805BAC18_000008D4:
    bl fn_801156C4
    bl fn_801231B8
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x5b4(r29)
lbl_fn_805BAC18_000008E8:
    lwz r0, 0x3c(r31)
    li r30, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_805BAC18_000009D0
    lwz r0, 0x5bc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_805BAC18_0000095C
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x29
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000924
    li r0, 0x1
    stw r0, 0x5bc(r29)
lbl_fn_805BAC18_00000924:
    bl fn_802A49BC
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000A1C
    bl fn_802A49BC
    lis r5, 0x1
    li r4, 0x0
    subi r0, r5, 0xe4f
    clrlwi r5, r0, 16
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000A1C
    li r0, 0x1
    stw r0, 0x5bc(r29)
    b lbl_fn_805BAC18_00000A1C
lbl_fn_805BAC18_0000095C:
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x2a
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000978
    li r30, 0x1
lbl_fn_805BAC18_00000978:
    bl fn_802A49BC
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_000009AC
    bl fn_802A49BC
    lis r5, 0x1
    li r4, 0x0
    subi r0, r5, 0xe4f
    clrlwi r5, r0, 16
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_000009AC
    li r30, 0x1
    b lbl_fn_805BAC18_00000A1C
lbl_fn_805BAC18_000009AC:
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x1
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000A1C
    li r0, 0x0
    stw r0, 0x5bc(r29)
    b lbl_fn_805BAC18_00000A1C
lbl_fn_805BAC18_000009D0:
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x0
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_000009EC
    li r30, 0x1
lbl_fn_805BAC18_000009EC:
    bl fn_802A49BC
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000A1C
    bl fn_802A49BC
    lis r5, 0x1
    li r4, 0x0
    subi r0, r5, 0xe4f
    clrlwi r5, r0, 16
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000A1C
    li r30, 0x1
lbl_fn_805BAC18_00000A1C:
    lwz r0, 0x5c0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805BAC18_00000A30
    li r0, 0x1
    stw r0, 0x5bc(r29)
lbl_fn_805BAC18_00000A30:
    lwz r0, 0x5bc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805BAC18_00000AA8
    bl fn_805BB590
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000AA8
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805BAC18_00000A80
    lis r4, lbl_807C7030@ha
    addi r3, r1, 0x20
    addi r4, r4, lbl_807C7030@l
    bl fn_8001047C
    mr r28, r3
    bl fn_805BB590
    mr r5, r28
    li r4, 0x7
    li r6, 0x0
    bl fn_804A5E40
    b lbl_fn_805BAC18_00000AA8
lbl_fn_805BAC18_00000A80:
    lis r4, lbl_807C7030@ha
    addi r3, r1, 0x14
    addi r4, r4, lbl_807C7030@l
    bl fn_8001047C
    mr r28, r3
    bl fn_805BB590
    mr r5, r28
    li r4, 0x6
    li r6, 0x0
    bl fn_804A5E40
lbl_fn_805BAC18_00000AA8:
    cmpwi r30, 0x0
    beq lbl_fn_805BAC18_00000BC4
    bl fn_802F0990
    li r4, 0x0
    bl fn_80366DF8
    lwz r3, 0x5b8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000AE0
    lwz r12, 0x0(r3)
    li r4, 0x12
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_805BAC18_00000AEC
lbl_fn_805BAC18_00000AE0:
    bl fn_80121F00
    li r4, 0x12
    bl fn_805BB598
lbl_fn_805BAC18_00000AEC:
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805BAC18_00000B08
    lwz r3, 0x40(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000B08
    bl fn_80244CAC
lbl_fn_805BAC18_00000B08:
    li r0, 0x3
    stw r0, 0x88(r29)
    b lbl_fn_805BAC18_00000BC4
lbl_fn_805BAC18_00000B14:
    lwz r3, 0x5b8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805BAC18_00000B4C
    lwz r12, 0x0(r3)
    lis r4, 0x100
    subi r5, r4, 0x1
    li r6, 0x0
    lwz r12, 0xc(r12)
    li r4, -0x1
    li r7, 0x0
    li r8, 0xf
    mtctr r12
    bctrl
    b lbl_fn_805BAC18_00000B6C
lbl_fn_805BAC18_00000B4C:
    bl fn_80121F00
    lis r5, 0x100
    li r4, -0x1
    subi r5, r5, 0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0xf
    bl fn_8037529C
lbl_fn_805BAC18_00000B6C:
    mr r3, r29
    bl fn_805BBD80
    b lbl_fn_805BAC18_00000BC4
lbl_fn_805BAC18_00000B78:
    lfs f2, 0x84(r29)
    lfs f1, lbl_80888458
    lfs f0, lbl_8088846C
    fadds f1, f2, f1
    stfs f1, 0x84(r29)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805BAC18_00000BC4
    addi r3, r29, 0x8c
    addi r4, r29, 0x280
    bl fn_80392A04
    addi r3, r29, 0x54
    addi r4, r29, 0x6c
    bl fn_8000D124
    addi r3, r29, 0x60
    addi r4, r29, 0x78
    bl fn_8000D124
    mr r3, r29
    bl fn_805BA938
lbl_fn_805BAC18_00000BC4:
    lwz r0, 0x244(r1)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    lwz r31, 0x22c(r1)
    lwz r30, 0x228(r1)
    lwz r29, 0x224(r1)
    lwz r28, 0x220(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_805BB510(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, lbl_80888454
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    lfs f0, lbl_80888458
    stfs f2, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    bl fn_805F9AB0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805BB548(void)
{
    nofralloc
    mr r0, r3
    mr r3, r4
    mr r4, r5
    mr r5, r0
    b fn_805F9D20
}

asm void fn_805BB55C(void)
{
    nofralloc
    li r0, 0x3
    stw r0, 0x8(r3)
    blr
}

asm void fn_805BB568(void)
{
    nofralloc
    lwz r3, 0x1c(r3)
    blr
}

asm void fn_805BB570(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    blr
}

asm void fn_805BB578(void)
{
    nofralloc
    li r0, 0x5
    stw r0, 0x8(r3)
    blr
}

asm void fn_805BB584(void)
{
    nofralloc
    li r0, 0x4
    stw r0, 0x8(r3)
    blr
}

asm void fn_805BB590(void)
{
    nofralloc
    lwz r3, lbl_8087F580
    blr
}

asm void fn_805BB598(void)
{
    nofralloc
    stw r4, 0x563c(r3)
    blr
}

asm void fn_805BB5A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x88(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805BB5A0_00000D1C
    lwz r0, 0x5b0(r3)
    cmplwi r0, 0x4
    bge lbl_fn_805BB5A0_00000D1C
    mulli r0, r0, 0x4c
    add r4, r3, r0
    lwz r0, 0x4b0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805BB5A0_00000D1C
    lis r3, lbl_80763F38@ha
    lwz r31, 0x478(r4)
    addi r3, r3, lbl_80763F38@l
    addi r3, r3, 0x3d
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r0, 0x5b0(r30)
    lfs f0, 0x10(r1)
    mulli r0, r0, 0x4c
    add r4, r30, r0
    lwz r3, 0x478(r4)
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805BB5A0_00000D1C
    lwz r3, 0x4b0(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_805BB5A0_00000D1C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805BB658(void)
{
    nofralloc
    stwu r1, -0x740(r1)
    mflr r0
    stw r0, 0x744(r1)
    addi r11, r1, 0x730
    stfd f31, 0x730(r1)
    psq_st f31, 0x738(r1), 0, 0
    bl _savegpr_14
    mr r15, r3
    addi r3, r3, 0x5a4
    bl fn_8047059C
    mr r16, r3
    addi r3, r15, 0x5a4
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r25, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0xb4(r1)
    mr r14, r3
    addi r3, r1, 0xc4
    stw r25, 0xb8(r1)
    li r4, 0x0
    li r5, 0x400
    stw r25, 0xbc(r1)
    stw r25, 0xc0(r1)
    stw r25, 0x6e4(r1)
    bl memset
    addi r3, r1, 0x6c4
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0xb4(r1)
    mr r4, r14
    mr r5, r16
    addi r3, r1, 0xb4
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xb4
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xb4(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r28, lbl_80763F38@ha
    lis r30, lbl_807BB380@ha
    lfs f31, lbl_8088848C
    addi r21, r1, 0x91
    addi r20, r1, 0x3d
    addi r19, r1, 0x9d
    addi r18, r1, 0x85
    addi r30, r30, lbl_807BB380@l
    addi r23, r1, 0xa8
    addi r29, r28, lbl_80763F38@l
    addi r22, r1, 0x30
    li r27, 0x1
    lis r14, lbl_80797960@ha
    b lbl_fn_805BB658_0000142C
lbl_fn_805BB658_00000E18:
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_80684600
    subi r0, r3, 0x1
    cmplwi r0, 0x3
    bgt lbl_fn_805BB658_0000142C
    mulli r0, r0, 0x4c
    addi r3, r1, 0xb4
    add r26, r15, r0
    stw r27, 0x474(r26)
    bl fn_8005B3CC
    mr r4, r3
    mr r3, r15
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x478(r26)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, 0x478(r26)
    addi r3, r1, 0xb4
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4a8(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4ac(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_805BB658_00000EB0
    mr r4, r3
    addi r3, r26, 0x47c
    bl fn_800A03E4
lbl_fn_805BB658_00000EB0:
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x488(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x48c(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x490(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x494(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x498(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x49c(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4a0(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f31, f1
    addi r3, r1, 0xb4
    stfs f0, 0x4a4(r26)
    bl fn_8005B3CC
    addi r4, r28, lbl_80763F38@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_805BB658_0000142C
    stw r25, 0xa8(r1)
    addi r3, r1, 0xc4
    stw r25, 0xac(r1)
    stw r25, 0xb0(r1)
    bl strlen
    mr r16, r3
    mr r3, r23
    mr r4, r16
    bl fn_80013DC4
    addi r6, r1, 0xc4
    lbz r0, 0x1c(r1)
    mr r7, r6
    stb r0, 0x18(r1)
    mr r3, r23
    addi r8, r1, 0x18
    add r7, r7, r16
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r5, r23
    addi r3, r1, 0x9c
    addi r4, r29, 0x4d
    bl fn_8006AF38
    bl fn_8006BA30
    cmpwi r3, 0x0
    beq lbl_fn_805BB658_000012D4
    bl fn_8006BA30
    cmpwi r3, 0x1
    beq lbl_fn_805BB658_000012D4
    mr r4, r23
    addi r3, r1, 0x90
    bl fn_8006B2D8
    lwz r0, 0x90(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BB658_00000FE8
    lbz r0, 0x90(r1)
    mr r4, r21
    clrlwi r3, r0, 25
    b lbl_fn_805BB658_00000FF0
lbl_fn_805BB658_00000FE8:
    lwz r4, 0x98(r1)
    lwz r3, 0x94(r1)
lbl_fn_805BB658_00000FF0:
    lwz r0, 0x90(r1)
    add r3, r4, r3
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_805BB658_00001010
    mr r5, r21
    b lbl_fn_805BB658_00001014
lbl_fn_805BB658_00001010:
    lwz r5, 0x98(r1)
lbl_fn_805BB658_00001014:
    cmpwi r0, 0x0
    beq lbl_fn_805BB658_00001024
    mr r4, r21
    b lbl_fn_805BB658_00001028
lbl_fn_805BB658_00001024:
    lwz r4, 0x98(r1)
lbl_fn_805BB658_00001028:
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_805BB658_00001080
lbl_fn_805BB658_00001038:
    lbz r6, 0x0(r4)
    li r3, 0x1
    extsb r0, r6
    cmplwi r0, 0xff
    bgt lbl_fn_805BB658_00001050
    li r3, 0x0
lbl_fn_805BB658_00001050:
    cmpwi r3, 0x0
    beq lbl_fn_805BB658_00001060
    extsb r0, r6
    b lbl_fn_805BB658_00001070
lbl_fn_805BB658_00001060:
    lwz r3, 0x38(r30)
    extsb r0, r6
    lwz r3, 0x10(r3)
    lbzx r0, r3, r0
lbl_fn_805BB658_00001070:
    stb r0, 0x0(r5)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_805BB658_00001038
lbl_fn_805BB658_00001080:
    addi r17, r14, lbl_80797960@l
    li r16, 0x0
lbl_fn_805BB658_00001088:
    lwz r24, 0x0(r17)
    mr r3, r24
    bl strlen
    lwz r0, 0x90(r1)
    mr r31, r3
    stw r3, 0x28(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BB658_000010B4
    lbz r0, 0x90(r1)
    clrlwi r4, r0, 25
    b lbl_fn_805BB658_000010B8
lbl_fn_805BB658_000010B4:
    lwz r4, 0x94(r1)
lbl_fn_805BB658_000010B8:
    lwz r0, 0x90(r1)
    stw r4, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BB658_000010D8
    lbz r0, 0x90(r1)
    mr r3, r21
    clrlwi r0, r0, 25
    b lbl_fn_805BB658_000010E0
lbl_fn_805BB658_000010D8:
    lwz r3, 0x98(r1)
    lwz r0, 0x94(r1)
lbl_fn_805BB658_000010E0:
    cmplw r4, r0
    stw r0, 0x24(r1)
    addi r4, r1, 0x24
    bge lbl_fn_805BB658_000010F4
    addi r4, r1, 0x2c
lbl_fn_805BB658_000010F4:
    lwz r0, 0x0(r4)
    mr r4, r24
    stw r0, 0x20(r1)
    addi r5, r1, 0x20
    cmplw r31, r0
    bge lbl_fn_805BB658_00001110
    addi r5, r1, 0x28
lbl_fn_805BB658_00001110:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_805BB658_00001144
    lwz r0, 0x20(r1)
    cmplw r0, r31
    bge lbl_fn_805BB658_00001134
    li r3, -0x1
    b lbl_fn_805BB658_00001144
lbl_fn_805BB658_00001134:
    bne lbl_fn_805BB658_00001140
    li r3, 0x0
    b lbl_fn_805BB658_00001144
lbl_fn_805BB658_00001140:
    li r3, 0x1
lbl_fn_805BB658_00001144:
    cmpwi r3, 0x0
    bne lbl_fn_805BB658_000012B0
    addi r3, r1, 0x78
    addi r4, r29, 0x4d
    addi r5, r1, 0x90
    bl fn_8006AF38
    addi r3, r1, 0x6c
    addi r4, r1, 0x78
    addi r5, r29, 0x54
    bl fn_8006D008
    bl fn_8006BA38
    mr r5, r3
    addi r3, r1, 0x60
    addi r4, r1, 0x6c
    bl fn_8006D008
    addi r3, r1, 0x54
    addi r4, r1, 0x60
    addi r5, r29, 0x56
    bl fn_8006D008
    addi r3, r1, 0x48
    addi r4, r1, 0xa8
    bl fn_8006AC08
    addi r3, r1, 0x3c
    addi r4, r1, 0x54
    addi r5, r1, 0x48
    bl fn_8006AFF8
    lwz r0, 0x9c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_805BB658_000011DC
    lwz r4, 0x3c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_805BB658_000011DC
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r4, 0x9c(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    b lbl_fn_805BB658_00001234
lbl_fn_805BB658_000011DC:
    cmpwi r3, 0x0
    beq lbl_fn_805BB658_000011EC
    lwz r5, 0xa0(r1)
    b lbl_fn_805BB658_000011F4
lbl_fn_805BB658_000011EC:
    lbz r0, 0x9c(r1)
    clrlwi r5, r0, 25
lbl_fn_805BB658_000011F4:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BB658_00001210
    lbz r0, 0x3c(r1)
    mr r6, r20
    clrlwi r4, r0, 25
    b lbl_fn_805BB658_00001218
lbl_fn_805BB658_00001210:
    lwz r6, 0x44(r1)
    lwz r4, 0x40(r1)
lbl_fn_805BB658_00001218:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r3, r1, 0x9c
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_805BB658_00001234:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_00001248
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_805BB658_00001248:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_0000125C
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_805BB658_0000125C:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_00001270
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_805BB658_00001270:
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_00001284
    lwz r3, 0x68(r1)
    bl dtor_80084684
lbl_fn_805BB658_00001284:
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_00001298
    lwz r3, 0x74(r1)
    bl dtor_80084684
lbl_fn_805BB658_00001298:
    lwz r0, 0x78(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_000012C0
    lwz r3, 0x80(r1)
    bl dtor_80084684
    b lbl_fn_805BB658_000012C0
lbl_fn_805BB658_000012B0:
    addi r16, r16, 0x1
    addi r17, r17, 0x4
    cmplwi r16, 0x5
    blt lbl_fn_805BB658_00001088
lbl_fn_805BB658_000012C0:
    lwz r0, 0x90(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_000012D4
    lwz r3, 0x98(r1)
    bl dtor_80084684
lbl_fn_805BB658_000012D4:
    addi r5, r28, lbl_80763F38@l
    li r3, 0x98
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805BB658_00001310
    lwz r0, 0x9c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805BB658_00001308
    mr r4, r19
    b lbl_fn_805BB658_0000130C
lbl_fn_805BB658_00001308:
    lwz r4, 0xa4(r1)
lbl_fn_805BB658_0000130C:
    bl fn_800DCA70
lbl_fn_805BB658_00001310:
    stw r3, 0x4b0(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4b8(r26)
    addi r3, r1, 0xb4
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4bc(r26)
    addi r16, r29, 0x58
    mr r3, r16
    stw r25, 0x30(r1)
    stw r25, 0x34(r1)
    stw r25, 0x38(r1)
    bl strlen
    mr r17, r3
    mr r3, r22
    mr r4, r17
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r22
    stb r0, 0x8(r1)
    mr r6, r16
    add r7, r16, r17
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r22
    addi r3, r1, 0xa8
    bl fn_8006AD24
    mr r5, r3
    addi r3, r1, 0x84
    addi r4, r29, 0x5c
    bl fn_8006AF38
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_000013B0
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_805BB658_000013B0:
    lwz r0, 0x84(r1)
    mr r3, r15
    srwi. r0, r0, 31
    bne lbl_fn_805BB658_000013C8
    mr r4, r18
    b lbl_fn_805BB658_000013CC
lbl_fn_805BB658_000013C8:
    lwz r4, 0x8c(r1)
lbl_fn_805BB658_000013CC:
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x4b4(r26)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x4b4(r26)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_00001404
    lwz r3, 0x8c(r1)
    bl dtor_80084684
lbl_fn_805BB658_00001404:
    lwz r0, 0x9c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_00001418
    lwz r3, 0xa4(r1)
    bl dtor_80084684
lbl_fn_805BB658_00001418:
    lwz r0, 0xa8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805BB658_0000142C
    lwz r3, 0xb0(r1)
    bl dtor_80084684
lbl_fn_805BB658_0000142C:
    addi r3, r1, 0xb4
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_805BB658_00000E18
    addi r11, r1, 0x730
    psq_l f31, 0x738(r1), 0, 0
    lfd f31, 0x730(r1)
    bl _restgpr_14
    lwz r0, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x740
    blr
}

asm void fn_805BBD80(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x1
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    stfd f28, 0x20(r1)
    psq_st f28, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r4, lbl_8087F4E8
    stw r0, 0x88(r4)
    lwz r0, 0x5b0(r3)
    mulli r0, r0, 0x4c
    add r4, r3, r0
    lwz r4, 0x478(r4)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0x5b0(r3)
    mulli r0, r0, 0x4c
    add r3, r3, r0
    lwz r3, 0x4b0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805BBD80_0000153C
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r0, 0x5b0(r31)
    mulli r0, r0, 0x4c
    add r3, r31, r0
    lwz r3, 0x4b4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805BBD80_0000150C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_805BBD80_0000150C:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_805BBD80_0000153C
    li r4, 0x1
    li r5, 0x8
    li r6, 0xf
    bl fn_803606CC
    lwz r3, lbl_8087F418
    li r4, 0x1
    li r5, 0x8
    li r6, 0xf
    bl fn_80360780
lbl_fn_805BBD80_0000153C:
    lwz r3, 0x5b0(r31)
    addi r0, r3, 0x1
    stw r0, 0x5b0(r31)
    b lbl_fn_805BBD80_0000156C
lbl_fn_805BBD80_0000154C:
    mulli r0, r4, 0x4c
    add r3, r31, r0
    lwz r0, 0x474(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805BBD80_00001578
    lwz r3, 0x5b0(r31)
    addi r0, r3, 0x1
    stw r0, 0x5b0(r31)
lbl_fn_805BBD80_0000156C:
    lwz r4, 0x5b0(r31)
    cmplwi r4, 0x4
    blt lbl_fn_805BBD80_0000154C
lbl_fn_805BBD80_00001578:
    cmplwi r4, 0x4
    bge lbl_fn_805BBD80_00001810
    mulli r0, r4, 0x4c
    add r3, r31, r0
    lwz r0, 0x484(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BBD80_000015A8
    lfs f0, lbl_80888454
    li r0, 0x2
    stw r0, 0x88(r31)
    stfs f0, 0x84(r31)
    b lbl_fn_805BBD80_00001864
lbl_fn_805BBD80_000015A8:
    psq_l f1, 0x288(r31), 0, 0
    lfs f2, 0x290(r31)
    psq_st f1, 0x94(r31), 0, 0
    psq_l f1, 0x294(r31), 0, 0
    stfs f2, 0x9c(r31)
    lfs f2, 0x29c(r31)
    psq_st f1, 0xa0(r31), 0, 0
    psq_l f1, 0x2a0(r31), 0, 0
    stfs f2, 0xa8(r31)
    lfs f2, 0x2a8(r31)
    psq_st f1, 0xac(r31), 0, 0
    psq_l f1, 0x2ac(r31), 0, 0
    stfs f2, 0xb4(r31)
    lfs f2, 0x2b4(r31)
    psq_st f1, 0xb8(r31), 0, 0
    psq_l f1, 0x2d8(r31), 0, 0
    stfs f2, 0xc0(r31)
    psq_l f2, 0x2e0(r31), 0, 0
    psq_l f3, 0x2e8(r31), 0, 0
    psq_l f4, 0x2f0(r31), 0, 0
    psq_l f5, 0x2f8(r31), 0, 0
    psq_l f6, 0x300(r31), 0, 0
    psq_st f1, 0xe4(r31), 0, 0
    lwz r3, 0x280(r31)
    psq_st f2, 0xec(r31), 0, 0
    lwz r0, 0x284(r31)
    psq_st f3, 0xf4(r31), 0, 0
    lfs f28, 0x2b8(r31)
    psq_st f4, 0xfc(r31), 0, 0
    lfs f29, 0x2bc(r31)
    psq_st f5, 0x104(r31), 0, 0
    lfs f30, 0x2c0(r31)
    psq_st f6, 0x10c(r31), 0, 0
    lfs f31, 0x2c4(r31)
    lfs f13, 0x2c8(r31)
    lfs f12, 0x2cc(r31)
    lfs f11, 0x2d0(r31)
    lfs f10, 0x2d4(r31)
    psq_l f1, 0x308(r31), 0, 0
    psq_l f2, 0x310(r31), 0, 0
    psq_l f3, 0x318(r31), 0, 0
    psq_l f4, 0x320(r31), 0, 0
    psq_l f5, 0x328(r31), 0, 0
    psq_l f6, 0x330(r31), 0, 0
    psq_l f7, 0x338(r31), 0, 0
    psq_l f8, 0x340(r31), 0, 0
    lfs f9, 0x348(r31)
    lfs f0, 0x34c(r31)
    stw r3, 0x8c(r31)
    stw r0, 0x90(r31)
    stfs f28, 0xc4(r31)
    stfs f29, 0xc8(r31)
    stfs f30, 0xcc(r31)
    stfs f31, 0xd0(r31)
    stfs f13, 0xd4(r31)
    stfs f12, 0xd8(r31)
    stfs f11, 0xdc(r31)
    stfs f10, 0xe0(r31)
    psq_st f1, 0x114(r31), 0, 0
    psq_st f2, 0x11c(r31), 0, 0
    psq_st f3, 0x124(r31), 0, 0
    psq_st f4, 0x12c(r31), 0, 0
    psq_st f5, 0x134(r31), 0, 0
    psq_st f6, 0x13c(r31), 0, 0
    psq_st f7, 0x144(r31), 0, 0
    psq_st f8, 0x14c(r31), 0, 0
    stfs f9, 0x154(r31)
    stfs f0, 0x158(r31)
    psq_l f1, 0x350(r31), 0, 0
    addi r4, r31, 0x220
    psq_l f2, 0x358(r31), 0, 0
    addi r5, r31, 0x414
    psq_st f1, 0x15c(r31), 0, 0
    addi r0, r31, 0x280
    psq_l f1, 0x380(r31), 0, 0
    psq_st f2, 0x164(r31), 0, 0
    psq_l f2, 0x388(r31), 0, 0
    psq_st f1, 0x18c(r31), 0, 0
    psq_l f1, 0x3bc(r31), 0, 0
    psq_st f2, 0x194(r31), 0, 0
    lfs f2, 0x3c4(r31)
    psq_st f1, 0x1c8(r31), 0, 0
    psq_l f1, 0x3cc(r31), 0, 0
    stfs f2, 0x1d0(r31)
    lfs f2, 0x3d4(r31)
    psq_st f1, 0x1d8(r31), 0, 0
    psq_l f1, 0x3dc(r31), 0, 0
    stfs f2, 0x1e0(r31)
    lfs f2, 0x3e4(r31)
    psq_st f1, 0x1e8(r31), 0, 0
    psq_l f1, 0x3ec(r31), 0, 0
    stfs f2, 0x1f0(r31)
    lfs f2, 0x3f4(r31)
    psq_st f1, 0x1f8(r31), 0, 0
    psq_l f3, 0x360(r31), 0, 0
    stfs f2, 0x200(r31)
    psq_l f4, 0x368(r31), 0, 0
    psq_l f5, 0x370(r31), 0, 0
    psq_l f6, 0x378(r31), 0, 0
    psq_l f1, 0x3fc(r31), 0, 0
    lfs f2, 0x404(r31)
    psq_st f3, 0x16c(r31), 0, 0
    psq_l f3, 0x390(r31), 0, 0
    psq_st f4, 0x174(r31), 0, 0
    psq_l f4, 0x398(r31), 0, 0
    psq_st f5, 0x17c(r31), 0, 0
    psq_l f5, 0x3a0(r31), 0, 0
    psq_st f6, 0x184(r31), 0, 0
    psq_l f6, 0x3a8(r31), 0, 0
    psq_st f1, 0x208(r31), 0, 0
    lwz r3, 0x3b0(r31)
    stfs f2, 0x210(r31)
    lfs f13, 0x3b4(r31)
    lfs f12, 0x3b8(r31)
    lfs f11, 0x3c8(r31)
    lfs f10, 0x3d8(r31)
    lfs f9, 0x3e8(r31)
    lfs f0, 0x3f8(r31)
    psq_l f1, 0x408(r31), 0, 0
    lfs f2, 0x410(r31)
    psq_st f3, 0x19c(r31), 0, 0
    psq_st f4, 0x1a4(r31), 0, 0
    psq_st f5, 0x1ac(r31), 0, 0
    psq_st f6, 0x1b4(r31), 0, 0
    stw r3, 0x1bc(r31)
    stfs f13, 0x1c0(r31)
    stfs f12, 0x1c4(r31)
    stfs f11, 0x1d4(r31)
    stfs f10, 0x1e4(r31)
    stfs f9, 0x1f4(r31)
    stfs f0, 0x204(r31)
    psq_st f1, 0x214(r31), 0, 0
    stfs f2, 0x21c(r31)
lbl_fn_805BBD80_000017BC:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_805BBD80_000017BC
    psq_l f1, 0x6c(r31), 0, 0
    mr r3, r31
    lfs f2, 0x74(r31)
    psq_st f1, 0x54(r31), 0, 0
    psq_l f1, 0x78(r31), 0, 0
    stfs f2, 0x5c(r31)
    lfs f2, 0x80(r31)
    psq_st f1, 0x60(r31), 0, 0
    stfs f2, 0x68(r31)
    bl fn_805BA938
    b lbl_fn_805BBD80_00001864
lbl_fn_805BBD80_00001810:
    li r0, 0x4
    stw r0, 0x88(r31)
    addi r30, r31, 0x474
    li r29, 0x0
lbl_fn_805BBD80_00001820:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805BBD80_00001854
    lwz r3, 0x50(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805BBD80_00001844
    addi r3, r3, 0xb0
    addi r4, r29, 0xea
    bl fn_80097A20
lbl_fn_805BBD80_00001844:
    lwz r3, 0x4(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_805BBD80_00001854:
    addi r29, r29, 0x1
    addi r30, r30, 0x4c
    cmplwi r29, 0x4
    blt lbl_fn_805BBD80_00001820
lbl_fn_805BBD80_00001864:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    psq_l f28, 0x28(r1), 0, 0
    lfd f28, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805BC1C4(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x190
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stfd f27, 0x1d0(r1)
    psq_st f27, 0x1d8(r1), 0, 0
    stfd f26, 0x1c0(r1)
    psq_st f26, 0x1c8(r1), 0, 0
    stfd f25, 0x1b0(r1)
    psq_st f25, 0x1b8(r1), 0, 0
    stfd f24, 0x1a0(r1)
    psq_st f24, 0x1a8(r1), 0, 0
    stfd f23, 0x190(r1)
    psq_st f23, 0x198(r1), 0, 0
    bl _savegpr_24
    lwz r4, lbl_8087F430
    mr r30, r3
    cmpwi r4, 0x0
    beq lbl_fn_805BC1C4_00001D28
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BC1C4_00001D28
    lwz r31, 0x10d8(r4)
    mr r3, r0
    bl fn_80179D44
    lfs f1, lbl_8088847C
    mr r5, r3
    mr r3, r31
    addi r4, r30, 0x54
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r4, 0x5b0(r30)
    mulli r0, r0, 0x30
    lwz r7, 0x9c(r31)
    addi r5, r1, 0xbc
    lfs f0, lbl_80888480
    addi r6, r1, 0xb0
    add r10, r7, r0
    mulli r0, r4, 0x4c
    lfs f2, 0xc(r10)
    stfs f2, 0xc4(r1)
    addi r7, r1, 0xa4
    lfs f2, 0x68(r30)
    addi r8, r1, 0x98
    add r4, r30, r0
    stfs f2, 0xb8(r1)
    lfs f2, 0x494(r4)
    addi r9, r1, 0x5c
    stfs f2, 0xac(r1)
    addi r28, r1, 0x68
    lfs f2, 0x4a0(r4)
    mr r27, r3
    lfs f3, 0xac(r1)
    psq_l f1, 0x4(r10), 0, 0
    fsubs f7, f2, f3
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r5), 0, 0
    fmr f2, f7
    psq_l f1, 0x60(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x48c(r4), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    frsp f8, f2
    psq_l f1, 0x498(r4), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    fabs f9, f8
    lfs f5, 0xa8(r1)
    lfs f6, 0x9c(r1)
    lfs f4, 0x98(r1)
    fsubs f5, f6, f5
    lfs f3, 0xa4(r1)
    frsp f6, f9
    stfs f7, 0x64(r1)
    fsubs f3, f4, f3
    stfs f5, 0x60(r1)
    fcmpo cr0, f6, f0
    stfs f3, 0x5c(r1)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x70(r1)
    bge lbl_fn_805BC1C4_00001A34
    lfs f3, 0x68(r1)
    lfs f0, lbl_80888454
    fcmpo cr0, f3, f0
    ble lbl_fn_805BC1C4_00001A28
    lfs f0, lbl_80888484
    b lbl_fn_805BC1C4_00001A2C
lbl_fn_805BC1C4_00001A28:
    lfs f0, lbl_80888488
lbl_fn_805BC1C4_00001A2C:
    stfs f0, 0x48(r1)
    b lbl_fn_805BC1C4_00001A48
lbl_fn_805BC1C4_00001A34:
    fmr f2, f8
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_805BC1C4_00001A48:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80888454
    addi r4, r1, 0x38
    lfs f24, 0xd0(r1)
    mr r5, r4
    lfs f23, 0xcc(r1)
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
    lfs f0, lbl_80888458
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x8(r1)
    stfs f23, 0xc(r1)
    stfs f24, 0x10(r1)
    stfs f13, 0xf8(r1)
    stfs f23, 0xfc(r1)
    stfs f24, 0x100(r1)
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
    lfs f0, lbl_80888480
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_805BC1C4_00001B64
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80888454
    fcmpo cr0, f3, f0
    ble lbl_fn_805BC1C4_00001B54
    lfs f0, lbl_80888484
    b lbl_fn_805BC1C4_00001B58
lbl_fn_805BC1C4_00001B54:
    lfs f0, lbl_80888488
lbl_fn_805BC1C4_00001B58:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_805BC1C4_00001B78
lbl_fn_805BC1C4_00001B64:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_805BC1C4_00001B78:
    addi r3, r1, 0x44
    lfs f29, lbl_80888454
    psq_l f1, 0x0(r3), 0, 0
    addi r26, r1, 0xbc
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f29
    lfs f30, lbl_80888490
    addi r25, r1, 0x8c
    lfs f0, 0x6c(r1)
    li r24, -0x1
    stfs f29, 0x4c(r1)
    fneg f28, f0
    lfs f31, lbl_80888458
    stfs f2, 0x70(r1)
    lis r28, 0x8000
    lfs f23, lbl_80888494
    lis r29, lbl_80763F10@ha
    lfs f24, lbl_80888484
    lfs f26, lbl_8088849C
    lfs f25, lbl_80888498
    lfs f27, lbl_808884A0
lbl_fn_805BC1C4_00001BCC:
    cmpwi r24, -0x1
    bne lbl_fn_805BC1C4_00001BDC
    addi r4, r30, 0x54
    b lbl_fn_805BC1C4_00001BF0
lbl_fn_805BC1C4_00001BDC:
    subi r0, r27, 0x1
    lwz r3, 0x9c(r31)
    mulli r0, r0, 0x30
    add r4, r3, r0
    addi r4, r4, 0x4
lbl_fn_805BC1C4_00001BF0:
    lfs f2, 0x8(r4)
    addi r3, r1, 0x138
    psq_l f1, 0x0(r4), 0, 0
    li r4, 0x79
    psq_st f1, 0x0(r25), 0, 0
    lfs f0, 0xb4(r1)
    lfs f3, 0x90(r1)
    fadds f4, f0, f28
    psq_st f1, 0x0(r26), 0, 0
    fadds f0, f3, f30
    stfs f2, 0xc4(r1)
    fmr f1, f4
    stfs f2, 0x94(r1)
    stfs f0, 0x90(r1)
    stfs f29, 0x80(r1)
    stfs f29, 0x84(r1)
    stfs f31, 0x88(r1)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x88(r1)
    mr r5, r25
    lfs f3, 0x84(r1)
    addi r6, r1, 0x74
    fmuls f5, f4, f23
    lfs f0, 0x80(r1)
    fmuls f6, f3, f23
    lfs f4, 0x94(r1)
    fmuls f7, f0, f23
    lfs f3, 0x90(r1)
    lfs f0, 0x8c(r1)
    fadds f4, f4, f5
    fadds f3, f3, f6
    stfs f7, 0x50(r1)
    fadds f0, f0, f7
    lwz r3, lbl_8087EE98
    stfs f6, 0x54(r1)
    addi r7, r28, 0x8
    stfs f5, 0x58(r1)
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f4, 0x7c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_805BC1C4_00001CFC
    cmpwi r24, 0x0
    blt lbl_fn_805BC1C4_00001CF0
    lfs f0, 0xb4(r1)
    lfd f2, lbl_80763F10@l(r29)
    fadds f1, f24, f0
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f25
    ble lbl_fn_805BC1C4_00001CE0
    fsubs f0, f0, f26
lbl_fn_805BC1C4_00001CE0:
    fcmpo cr0, f0, f27
    bge lbl_fn_805BC1C4_00001CEC
    fadds f0, f0, f26
lbl_fn_805BC1C4_00001CEC:
    stfs f0, 0xb4(r1)
lbl_fn_805BC1C4_00001CF0:
    addi r24, r24, 0x1
    cmpwi r24, 0x4
    blt lbl_fn_805BC1C4_00001BCC
lbl_fn_805BC1C4_00001CFC:
    addi r3, r1, 0xbc
    lfs f2, 0xc4(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xb0
    psq_st f1, 0x6c(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x74(r30)
    lfs f2, 0xb8(r1)
    psq_st f1, 0x78(r30), 0, 0
    stfs f2, 0x80(r30)
    b lbl_fn_805BC1C4_00001D48
lbl_fn_805BC1C4_00001D28:
    psq_l f1, 0x54(r3), 0, 0
    lfs f2, 0x5c(r3)
    psq_st f1, 0x6c(r3), 0, 0
    psq_l f1, 0x60(r3), 0, 0
    stfs f2, 0x74(r3)
    lfs f2, 0x68(r3)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
lbl_fn_805BC1C4_00001D48:
    addi r11, r1, 0x190
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    psq_l f27, 0x1d8(r1), 0, 0
    lfd f27, 0x1d0(r1)
    psq_l f26, 0x1c8(r1), 0, 0
    lfd f26, 0x1c0(r1)
    psq_l f25, 0x1b8(r1), 0, 0
    lfd f25, 0x1b0(r1)
    psq_l f24, 0x1a8(r1), 0, 0
    lfd f24, 0x1a0(r1)
    psq_l f23, 0x198(r1), 0, 0
    lfd f23, 0x190(r1)
    bl _restgpr_24
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}
