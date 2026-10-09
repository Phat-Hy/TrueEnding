#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8001047C(void);
extern void fn_80013410(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8006A250(void);
extern void fn_8006CA80(void);
extern void fn_80076FF8(void);
extern void fn_80079044(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800A56A8(void);
extern void fn_800BC2E0(void);
extern void fn_800C1A1C(void);
extern void fn_800C1FB4(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CFBA0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_801125F8(void);
extern void fn_80112960(void);
extern void fn_80114AA0(void);
extern void fn_80117228(void);
extern void fn_801231D0(void);
extern void fn_801CFD68(void);
extern void fn_801D0BAC(void);
extern void fn_8020A3E4(void);
extern void fn_8023A614(void);
extern void fn_802BABC0(void);
extern void fn_802F0990(void);
extern void fn_8037529C(void);
extern void fn_8037F688(void);
extern void fn_803BF818(void);
extern void fn_803D6E3C(void);
extern void fn_803D71C4(void);
extern void fn_8046ECDC(void);
extern void fn_80470364(void);
extern void fn_80470528(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_8048A264(void);
extern void fn_8048A290(void);
extern void fn_8049D68C(void);
extern void fn_805128C4(void);
extern void fn_80513024(void);
extern void fn_80514724(void);
extern void fn_805169FC(void);
extern void fn_8051B924(void);
extern void fn_80521E20(void);
extern void fn_805268CC(void);
extern void fn_8052911C(void);
extern void fn_805294E8(void);
extern void fn_8052CA70(void);
extern void fn_8052D46C(void);
extern void fn_8052DEF0(void);
extern void fn_8052E1A4(void);
extern void fn_80530178(void);
extern void fn_805303D4(void);
extern void fn_805305D4(void);
extern void fn_80530DB8(void);
extern void fn_805F98D0(void);

/* External data declarations */
extern u8 jumptable_807937E8[];
extern u8 lbl_8075D31C[];
extern u8 lbl_80793830[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C912C[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F580;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887AB0;
extern u32 lbl_80887AB4;
extern u32 lbl_80887AB8;
extern u32 lbl_80887ABC;
extern u32 lbl_80887AC0;
extern u32 lbl_80887AC4;
extern u32 lbl_80887AC8;
extern u32 lbl_80887ACC;
extern u32 lbl_80887AD0;
extern u32 lbl_80887AD4;
extern u32 lbl_80887AD8;
extern u32 lbl_80887ADC;
extern u32 lbl_80887AE0;
extern u32 lbl_80887AE4;
extern u32 lbl_80887AE8;
extern u32 lbl_80887AEC;
extern u32 lbl_80887AF0;
extern u32 lbl_80887AF4;
extern u32 lbl_80887AF8;
extern u32 lbl_80887AFC;
extern u32 lbl_80887B00;
extern u32 lbl_80887B04;
extern u32 lbl_80887B08;
extern u32 lbl_80887B0C;
extern u32 lbl_80887B10;

/* Function declarations */
void fn_8052A66C(void);
void fn_8052A88C(void);
void fn_8052A8F0(void);
void fn_8052ACAC(void);
void fn_8052ACCC(void);
void fn_8052ACD4(void);
void fn_8052ACDC(void);
void fn_8052AFAC(void);
void fn_8052AFF4(void);
void fn_8052B004(void);
void fn_8052B014(void);
void fn_8052B190(void);
void fn_8052B7F4(void);
void fn_8052B7FC(void);
void fn_8052BBF0(void);
void fn_8052BC94(void);
void fn_8052BCE8(void);
void fn_8052BCF8(void);
void fn_8052BD00(void);

asm void fn_8052A66C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x194(r3)
    lwz r8, 0xe4(r3)
    li r0, 0x2
    addi r5, r3, 0xd4
    mr r4, r3
    lwz r7, 0x104(r8)
    li r6, 0x0
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0xe8(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0xfc(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x100(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x114(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x118(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x12c(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x130(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x144(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x148(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x15c(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x160(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x174(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x178(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x18c(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    lwz r8, 0x190(r3)
    lwz r7, 0x104(r8)
    rlwinm r7, r7, 0, 9, 7
    stw r7, 0x104(r8)
    mtctr r0
lbl_fn_8052A66C_0000011C:
    lwz r7, 0xe4(r4)
    lwz r0, 0x104(r7)
    oris r0, r0, 0x80
    stw r0, 0x104(r7)
    lwz r0, 0x194(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r7, r0, 0x198
    beq lbl_fn_8052A66C_00000144
    stw r5, 0x0(r7)
lbl_fn_8052A66C_00000144:
    lwz r7, 0x194(r3)
    addi r5, r5, 0x18
    addi r0, r7, 0x1
    stw r0, 0x194(r3)
    lwz r7, 0xfc(r4)
    lwz r0, 0x104(r7)
    oris r0, r0, 0x80
    stw r0, 0x104(r7)
    lwz r0, 0x194(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r7, r0, 0x198
    beq lbl_fn_8052A66C_0000017C
    stw r5, 0x0(r7)
lbl_fn_8052A66C_0000017C:
    lwz r7, 0x194(r3)
    addi r5, r5, 0x18
    addi r0, r7, 0x1
    stw r0, 0x194(r3)
    lwz r7, 0x114(r4)
    lwz r0, 0x104(r7)
    oris r0, r0, 0x80
    stw r0, 0x104(r7)
    lwz r0, 0x194(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r7, r0, 0x198
    beq lbl_fn_8052A66C_000001B4
    stw r5, 0x0(r7)
lbl_fn_8052A66C_000001B4:
    lwz r7, 0x194(r3)
    addi r5, r5, 0x18
    addi r0, r7, 0x1
    stw r0, 0x194(r3)
    lwz r7, 0x12c(r4)
    lwz r0, 0x104(r7)
    oris r0, r0, 0x80
    stw r0, 0x104(r7)
    lwz r0, 0x194(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r7, r0, 0x198
    beq lbl_fn_8052A66C_000001EC
    stw r5, 0x0(r7)
lbl_fn_8052A66C_000001EC:
    lwz r7, 0x194(r3)
    addi r4, r4, 0x60
    addi r5, r5, 0x18
    addi r6, r6, 0x3
    addi r0, r7, 0x1
    stw r0, 0x194(r3)
    bdnz lbl_fn_8052A66C_0000011C
    stw r0, 0x84(r3)
    stw r0, 0x8c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctr
}

asm void fn_8052A88C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8052A88C_0000026C
    lis r5, lbl_8075D31C@ha
    li r3, 0x1380
    addi r5, r5, lbl_8075D31C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8052A88C_00000270
    mr r4, r31
    bl fn_8052A8F0
    b lbl_fn_8052A88C_00000270
lbl_fn_8052A88C_0000026C:
    li r3, 0x0
lbl_fn_8052A88C_00000270:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8052A8F0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r3
    bl fn_800D1D3C
    lis r4, lbl_80793830@ha
    addi r3, r29, 0x48
    addi r4, r4, lbl_80793830@l
    stw r4, 0x0(r29)
    bl fn_8052ACAC
    li r31, 0x0
    stw r31, 0x5c(r29)
    addi r3, r29, 0x6c
    li r4, 0x0
    stw r31, 0x60(r29)
    li r5, 0x0
    bl fn_8004B290
    addi r3, r29, 0x260
    li r4, 0x0
    li r5, 0x0
    bl fn_8004B290
    lfs f1, lbl_80887AB0
    addi r3, r29, 0x468
    lfs f0, lbl_80887AB4
    stw r31, 0x454(r29)
    stfs f1, 0x458(r29)
    stfs f0, 0x45c(r29)
    stw r31, 0x464(r29)
    bl fn_8052ACDC
    addi r3, r29, 0xb1c
    bl fn_8052ACDC
    stw r31, 0x11f0(r29)
    addi r3, r29, 0x11fc
    lfs f1, lbl_80887AB8
    stw r31, 0x11f4(r29)
    lfs f2, lbl_80887AB0
    stw r31, 0x11f8(r29)
    lfs f3, lbl_80887ABC
    bl fn_8000D114
    lfs f1, lbl_80887AB8
    addi r3, r29, 0x1208
    lfs f2, lbl_80887AB0
    lfs f3, lbl_80887AC0
    bl fn_8000D114
    lfs f1, lbl_80887AC4
    bl fn_801125F8
    stfs f1, 0x1214(r29)
    addi r3, r29, 0x1218
    bl fn_802BABC0
    stw r31, 0x121c(r29)
    addi r3, r29, 0x1224
    stw r31, 0x1220(r29)
    bl fn_8052AFAC
    addi r3, r29, 0x1268
    bl fn_8052AFAC
    stw r31, 0x12ac(r29)
    addi r3, r29, 0x12b0
    bl fn_8048A264
    lfs f0, lbl_80887AB0
    lis r30, lbl_807C7030@ha
    stfs f0, 0x12d0(r29)
    addi r3, r29, 0x12d4
    addi r4, r30, lbl_807C7030@l
    bl fn_8001047C
    addi r3, r29, 0x12e0
    addi r4, r30, lbl_807C7030@l
    bl fn_8001047C
    addi r3, r29, 0x12ec
    addi r4, r30, lbl_807C7030@l
    bl fn_8001047C
    addi r3, r29, 0x12f8
    addi r4, r30, lbl_807C7030@l
    bl fn_8001047C
    li r30, 0x1
    stw r30, 0x1304(r29)
    addi r3, r29, 0x1310
    stw r31, 0x1308(r29)
    bl fn_803D6E3C
    addi r3, r29, 0x1334
    bl fn_8006CA80
    stw r31, 0x133c(r29)
    addi r3, r29, 0x1340
    bl fn_800CB360
    addi r3, r29, 0x1344
    bl fn_8006CA80
    addi r3, r29, 0x134c
    bl fn_803BF818
    lfs f1, lbl_80887AB0
    li r0, 0x3c
    lfs f0, lbl_80887AB4
    addi r3, r29, 0x1370
    fmr f2, f1
    stw r31, 0x1350(r29)
    lfs f3, lbl_80887AC8
    stw r31, 0x1354(r29)
    stw r31, 0x1358(r29)
    stw r0, 0x135c(r29)
    stw r31, 0x1364(r29)
    stfs f0, 0x1368(r29)
    stw r31, 0x136c(r29)
    bl fn_8000D114
    lis r31, lbl_8075D31C@ha
    addi r3, r29, 0x134c
    addi r31, r31, lbl_8075D31C@l
    li r5, 0x0
    addi r4, r31, 0x1
    li r6, 0x0
    li r7, 0x1
    bl fn_80470364
    lis r3, lbl_807C912C@ha
    addi r3, r3, lbl_807C912C@l
    bl fn_8052B004
    lwz r12, 0x1344(r29)
    addi r3, r29, 0x1344
    addi r4, r31, 0x12
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    bl fn_803D71C4
    bl fn_80076FF8
    addi r3, r29, 0x6c
    bl fn_8052ACCC
    bl fn_803D71C4
    bl fn_80076FF8
    lfs f0, lbl_80887ACC
    fcmpo cr0, f1, f0
    bge lbl_fn_8052A8F0_0000049C
    stw r30, 0x136c(r29)
    addi r3, r29, 0x6c
    lfs f1, lbl_80887AD0
    bl fn_8052ACCC
lbl_fn_8052A8F0_0000049C:
    lwz r0, 0x136c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8052A8F0_000004B0
    addi r3, r29, 0x1370
    b lbl_fn_8052A8F0_000004C4
lbl_fn_8052A8F0_000004B0:
    lfs f1, lbl_80887AB0
    addi r3, r1, 0x20
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
lbl_fn_8052A8F0_000004C4:
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8001047C
    addi r3, r1, 0x14
    addi r4, r29, 0x11fc
    addi r5, r1, 0x2c
    bl fn_80013410
    addi r3, r29, 0x6c
    addi r4, r1, 0x14
    bl fn_80114AA0
    addi r3, r1, 0x8
    addi r4, r29, 0x1208
    addi r5, r1, 0x2c
    bl fn_80013410
    addi r3, r29, 0x6c
    addi r4, r1, 0x8
    bl fn_80112960
    lfs f1, 0x1214(r29)
    addi r3, r29, 0x6c
    bl fn_8037F688
    lis r31, lbl_8075D31C@ha
    mr r3, r29
    addi r31, r31, lbl_8075D31C@l
    addi r4, r31, 0x33
    bl fn_8049D68C
    stw r3, 0x460(r29)
    li r4, 0x6
    bl fn_8052ACD4
    lwz r3, 0x460(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_8052911C
    stw r3, 0x11d0(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_805268CC
    stw r3, 0x11d4(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_8051B924
    stw r3, 0x11d8(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_805169FC
    stw r3, 0x11dc(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_80521E20
    stw r3, 0x11e0(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_801CFD68
    stw r3, 0x11e4(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_805128C4
    stw r3, 0x11ec(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_80514724
    stw r3, 0x11e8(r29)
    li r4, 0x1
    bl fn_800D246C
    lwz r12, 0x1334(r29)
    addi r3, r29, 0x1334
    addi r4, r31, 0x50
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8006A250
    stw r3, 0x64(r29)
    li r0, -0x1
    addi r3, r29, 0x12b0
    stw r0, 0x1360(r29)
    bl fn_8048A290
    lwz r31, 0x4c(r1)
    mr r3, r29
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8052ACAC(void)
{
    nofralloc
    li r0, -0x1
    li r4, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    blr
}

asm void fn_8052ACCC(void)
{
    nofralloc
    stfs f1, 0x54(r3)
    blr
}

asm void fn_8052ACD4(void)
{
    nofralloc
    stw r4, 0x48(r3)
    blr
}

asm void fn_8052ACDC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    mr r30, r3
    bl fn_8004B290
    addi r3, r30, 0x1f4
    bl fn_80079044
    addi r3, r30, 0x258
    bl fn_800C1A1C
    lfs f9, lbl_80887AD4
    li r7, 0x1
    li r6, 0x0
    lfs f4, lbl_80887ACC
    lfs f3, lbl_80887AE8
    li r5, 0x3
    lfs f7, lbl_80887AF0
    li r3, 0x140
    lfs f11, lbl_80887AD8
    li r0, 0xe0
    lfs f10, lbl_80887ADC
    lfs f6, lbl_80887AE0
    lfs f5, lbl_80887AE4
    lfs f8, lbl_80887AB0
    lfs f0, lbl_80887AEC
    stw r7, 0x50c(r30)
    stw r6, 0x510(r30)
    stw r6, 0x514(r30)
    stw r7, 0x518(r30)
    stfs f11, 0x51c(r30)
    stfs f10, 0x520(r30)
    stfs f6, 0x524(r30)
    stfs f5, 0x528(r30)
    stw r3, 0x52c(r30)
    stw r0, 0x530(r30)
    stfs f4, 0x534(r30)
    stfs f4, 0x538(r30)
    stw r7, 0x53c(r30)
    stw r6, 0x540(r30)
    stw r5, 0x544(r30)
    stw r5, 0x548(r30)
    stw r7, 0x54c(r30)
    stfs f9, 0x550(r30)
    stfs f3, 0x554(r30)
    stfs f3, 0x558(r30)
    stfs f8, 0x55c(r30)
    stfs f0, 0x560(r30)
    stfs f9, 0x564(r30)
    stfs f9, 0x56c(r30)
    stfs f7, 0x568(r30)
    stfs f7, 0x570(r30)
    stfs f9, 0x60(r1)
    stfs f9, 0x64(r1)
    stfs f9, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f9, 0x574(r30)
    stfs f9, 0x578(r30)
    stfs f9, 0x57c(r30)
    stfs f9, 0x580(r30)
    stfs f9, 0x70(r1)
    stfs f9, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f9, 0x584(r30)
    stfs f9, 0x588(r30)
    stfs f9, 0x58c(r30)
    stfs f9, 0x590(r30)
    stfs f9, 0x80(r1)
    stfs f9, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f9, 0x8c(r1)
    stfs f9, 0x20(r1)
    addi r31, r1, 0x8
    addi r11, r1, 0x20
    lfs f5, lbl_80887AF8
    stfs f8, 0x24(r1)
    addi r10, r1, 0x30
    addi r9, r1, 0x40
    lfs f6, lbl_80887AF4
    psq_l f1, 0x0(r11), 0, 0
    addi r8, r1, 0x50
    lfs f0, lbl_80887B04
    li r0, 0x2
    lfs f4, lbl_80887AFC
    addi r12, r1, 0x14
    lfs f3, lbl_80887B00
    mr r3, r31
    stfs f8, 0x28(r1)
    mr r4, r31
    stfs f8, 0x2c(r1)
    psq_l f2, 0x8(r11), 0, 0
    stfs f8, 0x30(r1)
    stfs f9, 0x34(r1)
    psq_st f1, 0x608(r30), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f8, 0x38(r1)
    stfs f8, 0x3c(r1)
    psq_st f2, 0x610(r30), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f8, 0x40(r1)
    stfs f8, 0x44(r1)
    psq_st f1, 0x618(r30), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f9, 0x48(r1)
    stfs f8, 0x4c(r1)
    psq_st f2, 0x620(r30), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f8, 0x50(r1)
    stfs f8, 0x54(r1)
    psq_st f1, 0x628(r30), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f8, 0x58(r1)
    stfs f8, 0x5c(r1)
    psq_st f2, 0x630(r30), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f2, 0x640(r30), 0, 0
    fmr f2, f9
    stfs f9, 0x14(r1)
    stfs f0, 0x18(r1)
    psq_st f1, 0x638(r30), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f9, 0x594(r30)
    stfs f9, 0x598(r30)
    stfs f9, 0x59c(r30)
    stfs f9, 0x5a0(r30)
    stw r6, 0x5a4(r30)
    stw r6, 0x5a8(r30)
    stw r6, 0x5ac(r30)
    stw r6, 0x5b0(r30)
    stw r6, 0x5b4(r30)
    stw r6, 0x5b8(r30)
    stw r6, 0x5bc(r30)
    stw r6, 0x5c0(r30)
    stw r0, 0x5c4(r30)
    stw r5, 0x5c8(r30)
    stw r7, 0x5cc(r30)
    stw r6, 0x5d0(r30)
    stw r6, 0x5d4(r30)
    stfs f6, 0x5d8(r30)
    stfs f6, 0x5dc(r30)
    stfs f9, 0x5e0(r30)
    stfs f5, 0x5e4(r30)
    stfs f5, 0x5e8(r30)
    stfs f5, 0x5ec(r30)
    stfs f9, 0x5f0(r30)
    stfs f8, 0x5f4(r30)
    stfs f9, 0x5f8(r30)
    stfs f8, 0x5fc(r30)
    stfs f4, 0x600(r30)
    stw r6, 0x604(r30)
    stw r6, 0x648(r30)
    stw r6, 0x64c(r30)
    stfs f9, 0x650(r30)
    stw r7, 0x654(r30)
    stw r6, 0x658(r30)
    stfs f3, 0x65c(r30)
    stfs f7, 0x660(r30)
    stfs f7, 0x664(r30)
    stfs f7, 0x668(r30)
    stfs f9, 0x66c(r30)
    stfs f9, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r31), 0, 0
    addi r3, r30, 0x67c
    lfs f2, 0x10(r1)
    stfs f2, 0x678(r30)
    psq_st f1, 0x670(r30), 0, 0
    bl fn_800BC2E0
    mr r3, r30
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8052AFAC(void)
{
    nofralloc
    addi r6, r3, 0xc
    addi r4, r3, 0x44
    cmplw r6, r4
    li r5, 0x0
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    bgelr
    addi r0, r4, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    bgelr
lbl_fn_8052AFAC_00000974:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_8052AFAC_00000974
    blr
}

asm void fn_8052AFF4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_8052B004(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    blr
}

asm void fn_8052B014(void)
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
    beq lbl_fn_8052B014_00000B04
    addic. r3, r3, 0x134c
    beq lbl_fn_8052B014_000009DC
    bl fn_80470528
lbl_fn_8052B014_000009DC:
    addic. r3, r29, 0x1344
    beq lbl_fn_8052B014_000009EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8052B014_000009EC:
    addi r3, r29, 0x1340
    li r4, -0x1
    bl fn_800CB3A0
    addic. r3, r29, 0x1334
    beq lbl_fn_8052B014_00000A08
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8052B014_00000A08:
    addic. r31, r29, 0x12b0
    beq lbl_fn_8052B014_00000A6C
    addic. r4, r31, 0x10
    beq lbl_fn_8052B014_00000A40
    beq lbl_fn_8052B014_00000A40
    beq lbl_fn_8052B014_00000A40
    beq lbl_fn_8052B014_00000A40
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8052B014_00000A40
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8052B014_00000A40:
    cmpwi r31, 0x0
    beq lbl_fn_8052B014_00000A6C
    beq lbl_fn_8052B014_00000A6C
    beq lbl_fn_8052B014_00000A6C
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8052B014_00000A6C
    lwz r0, 0x4(r31)
    subf r0, r0, r0
    stw r0, 0x4(r31)
    bl dtor_80084684
lbl_fn_8052B014_00000A6C:
    addic. r0, r29, 0x1218
    beq lbl_fn_8052B014_00000A90
    lwz r4, 0x1218(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8052B014_00000A90
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8052B014_00000A90
    bl fn_800897D8
lbl_fn_8052B014_00000A90:
    addic. r31, r29, 0xb1c
    beq lbl_fn_8052B014_00000AB0
    addi r3, r31, 0x258
    li r4, -0x1
    bl fn_800C1FB4
    mr r3, r31
    li r4, -0x1
    bl fn_8004B338
lbl_fn_8052B014_00000AB0:
    addic. r31, r29, 0x468
    beq lbl_fn_8052B014_00000AD0
    addi r3, r31, 0x258
    li r4, -0x1
    bl fn_800C1FB4
    mr r3, r31
    li r4, -0x1
    bl fn_8004B338
lbl_fn_8052B014_00000AD0:
    addi r3, r29, 0x260
    li r4, -0x1
    bl fn_8004B338
    addi r3, r29, 0x6c
    li r4, -0x1
    bl fn_8004B338
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_8052B014_00000B04
    mr r3, r29
    bl dtor_80084684
lbl_fn_8052B014_00000B04:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8052B190(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    bl fn_8020A3E4
    li r4, 0x0
    bl fn_8046ECDC
    lwz r0, 0x60(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8052B190_00000B60
    li r0, 0x1
    stw r0, 0x60(r25)
    b lbl_fn_8052B190_0000116C
lbl_fn_8052B190_00000B60:
    cmpwi r0, 0x1
    bne lbl_fn_8052B190_00000B74
    li r0, 0x2
    stw r0, 0x60(r25)
    b lbl_fn_8052B190_0000116C
lbl_fn_8052B190_00000B74:
    cmpwi r0, 0x2
    bne lbl_fn_8052B190_0000116C
    mr r3, r25
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8052B190_0000116C
    addi r3, r25, 0x1334
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8052B190_0000116C
    addi r3, r25, 0x1344
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8052B190_0000116C
    lwz r3, 0x460(r25)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x11d0(r25)
    lwz r4, 0x460(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d0(r25)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x11d4(r25)
    lwz r4, 0x460(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d4(r25)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x11d8(r25)
    lwz r4, 0x460(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d8(r25)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x11dc(r25)
    lwz r4, 0x460(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11dc(r25)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x11e0(r25)
    lwz r4, 0x460(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e0(r25)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x11e4(r25)
    lwz r4, 0x460(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e4(r25)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x11ec(r25)
    lwz r4, 0x460(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11ec(r25)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x11e8(r25)
    lwz r4, 0x460(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e8(r25)
    li r4, 0x0
    bl fn_800D246C
    mr r3, r25
    li r4, 0x0
    bl fn_8052DEF0
    li r29, 0x0
    bl fn_802F0990
    bl fn_8052B7F4
    stw r29, 0x4(r3)
    addi r3, r25, 0x468
    bl fn_8052E1A4
    bl fn_802F0990
    bl fn_8052B7FC
    mr r3, r25
    bl fn_805303D4
    mr r3, r25
    bl fn_805305D4
    lis r4, lbl_8075D31C@ha
    addi r3, r25, 0x1218
    addi r29, r4, lbl_8075D31C@l
    addi r4, r29, 0x6e
    bl fn_8052BC94
    mr r28, r3
    addi r4, r29, 0x76
    addi r5, r25, 0x121c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80887B08
    mr r3, r28
    lfs f2, lbl_80887B0C
    addi r4, r29, 0x81
    lfs f3, lbl_80887AD4
    addi r5, r25, 0x1370
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887AB0
    mr r3, r28
    lfs f2, lbl_80887AFC
    addi r4, r29, 0x96
    lfs f3, lbl_80887AD4
    addi r5, r25, 0x1368
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r29, 0xa2
    addi r5, r25, 0x1220
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r6, 0xf
    mr r3, r28
    addi r7, r6, 0x423f
    addi r4, r29, 0xac
    addi r5, r25, 0x135c
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80887AB0
    mr r3, r28
    lfs f2, lbl_80887B10
    addi r4, r29, 0xb7
    lfs f3, lbl_80887AD4
    addi r5, r25, 0x1214
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    mr r3, r28
    addi r4, r29, 0xbe
    addi r5, r25, 0x1350
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r29, 0xcb
    addi r5, r25, 0x1364
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r29, 0xd8
    addi r5, r25, 0x1354
    li r6, 0x0
    li r7, 0x7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r3, 0x11d0(r25)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d4(r25)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d8(r25)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11dc(r25)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e0(r25)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e4(r25)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11ec(r25)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e8(r25)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r27, 0x0
    lis r30, lbl_807C912C@ha
    b lbl_fn_8052B190_00001154
lbl_fn_8052B190_00000F0C:
    mr r4, r27
    addi r3, r30, lbl_807C912C@l
    bl fn_8052BCE8
    mr r31, r3
    mr r3, r28
    addi r4, r31, 0x4
    bl fn_8008937C
    mr r26, r3
    addi r4, r29, 0xe1
    bl fn_8008937C
    mr r25, r3
    addi r4, r29, 0xe6
    addi r5, r31, 0x28
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xe8
    addi r5, r31, 0x2c
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xea
    addi r5, r31, 0x30
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r29, 0xec
    bl fn_8008937C
    mr r25, r3
    addi r4, r29, 0xf5
    addi r5, r31, 0x34
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xe6
    addi r5, r31, 0x38
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xe8
    addi r5, r31, 0x3c
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xea
    addi r5, r31, 0x40
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r29, 0xf7
    bl fn_8008937C
    mr r25, r3
    addi r4, r29, 0xe6
    addi r5, r31, 0x48
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xe8
    addi r5, r31, 0x4c
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xea
    addi r5, r31, 0x50
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r29, 0xfd
    bl fn_8008937C
    mr r25, r3
    addi r4, r29, 0xf5
    addi r5, r31, 0x54
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xe6
    addi r5, r31, 0x58
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xe8
    addi r5, r31, 0x5c
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r29, 0xea
    addi r5, r31, 0x60
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    addi r27, r27, 0x1
lbl_fn_8052B190_00001154:
    addi r3, r30, lbl_807C912C@l
    bl fn_8052BCF8
    cmplw r27, r3
    blt lbl_fn_8052B190_00000F0C
    li r3, 0x1
    b lbl_fn_8052B190_00001170
lbl_fn_8052B190_0000116C:
    li r3, 0x0
lbl_fn_8052B190_00001170:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8052B7F4(void)
{
    nofralloc
    addi r3, r3, 0x3dc
    blr
}

asm void fn_8052B7FC(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    addi r11, r1, 0x1f0
    bl _savegpr_20
    lfs f9, lbl_80887AD4
    li r21, 0x0
    li r20, 0x1
    lfs f8, lbl_80887AE8
    lfs f0, lbl_80887AF0
    li r22, 0x3
    lfs f7, lbl_80887AB0
    lfs f3, lbl_80887AEC
    stw r20, 0x140(r1)
    stw r21, 0x144(r1)
    stw r22, 0x148(r1)
    stw r22, 0x14c(r1)
    stw r20, 0x150(r1)
    stfs f9, 0x154(r1)
    stfs f8, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f7, 0x160(r1)
    stfs f3, 0x164(r1)
    stfs f9, 0x168(r1)
    stfs f9, 0x170(r1)
    stfs f0, 0x16c(r1)
    stfs f0, 0x174(r1)
    stfs f9, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f9, 0x50(r1)
    stfs f9, 0x54(r1)
    stfs f9, 0x178(r1)
    stfs f9, 0x17c(r1)
    stfs f9, 0x180(r1)
    stfs f9, 0x184(r1)
    stfs f9, 0x58(r1)
    stfs f9, 0x5c(r1)
    stfs f9, 0x60(r1)
    stfs f9, 0x64(r1)
    stfs f9, 0x188(r1)
    stfs f9, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f9, 0x194(r1)
    stfs f9, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f9, 0x74(r1)
    stfs f9, 0x198(r1)
    stfs f9, 0x19c(r1)
    stfs f9, 0x1a0(r1)
    stfs f9, 0x1a4(r1)
    stw r21, 0x1a8(r1)
    stw r21, 0x1ac(r1)
    stw r21, 0x1b0(r1)
    stw r21, 0x1b4(r1)
    stw r21, 0x1b8(r1)
    stw r21, 0x1bc(r1)
    stw r20, 0x54(r3)
    stw r21, 0x58(r3)
    lfs f4, lbl_80887AD8
    li r9, 0x140
    lfs f3, lbl_80887ADC
    li r8, 0xe0
    lfs f0, lbl_80887AE0
    lfs f5, lbl_80887ACC
    lwz r23, 0x164(r1)
    lwz r24, 0x168(r1)
    lwz r25, 0x16c(r1)
    lwz r26, 0x170(r1)
    lwz r27, 0x174(r1)
    lwz r28, 0x178(r1)
    lwz r29, 0x17c(r1)
    lwz r30, 0x180(r1)
    lwz r31, 0x184(r1)
    lwz r12, 0x188(r1)
    lwz r11, 0x18c(r1)
    lwz r10, 0x190(r1)
    lwz r7, 0x194(r1)
    lwz r6, 0x198(r1)
    lwz r5, 0x19c(r1)
    lwz r4, 0x1a0(r1)
    lwz r0, 0x1a4(r1)
    lfs f6, lbl_80887AE4
    stw r22, 0x5c(r3)
    stw r22, 0x60(r3)
    stw r20, 0x64(r3)
    stfs f9, 0x68(r3)
    stfs f8, 0x6c(r3)
    stfs f8, 0x70(r3)
    stfs f7, 0x74(r3)
    stw r23, 0x78(r3)
    stw r24, 0x7c(r3)
    stw r25, 0x80(r3)
    stw r26, 0x84(r3)
    stw r27, 0x88(r3)
    stw r28, 0x8c(r3)
    stw r29, 0x90(r3)
    stw r30, 0x94(r3)
    stw r31, 0x98(r3)
    stw r12, 0x9c(r3)
    stw r11, 0xa0(r3)
    stw r10, 0xa4(r3)
    stw r7, 0xa8(r3)
    stw r6, 0xac(r3)
    stw r5, 0xb0(r3)
    stw r4, 0xb4(r3)
    stw r0, 0xb8(r3)
    stw r21, 0xbc(r3)
    stw r21, 0xc0(r3)
    stw r21, 0xc4(r3)
    stw r21, 0xc8(r3)
    stw r21, 0xcc(r3)
    stw r21, 0xd0(r3)
    stw r20, 0x78(r1)
    stw r21, 0x7c(r1)
    stw r21, 0x80(r1)
    stw r20, 0x84(r1)
    stfs f4, 0x88(r1)
    stfs f3, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f6, 0x94(r1)
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f5, 0xa4(r1)
    stw r20, 0xd4(r3)
    stw r21, 0xd8(r3)
    stw r21, 0xdc(r3)
    stw r20, 0xe0(r3)
    stfs f4, 0xe4(r3)
    stfs f3, 0xe8(r3)
    stfs f0, 0xec(r3)
    lfs f3, lbl_80887AF8
    li r7, 0x2
    stfs f3, 0x120(r1)
    fmr f2, f7
    addi r10, r1, 0x130
    lfs f4, lbl_80887AF4
    lfs f0, lbl_80887AFC
    stfs f3, 0x124(r1)
    lwz r6, 0x120(r1)
    stfs f3, 0x128(r1)
    lwz r5, 0x124(r1)
    stfs f9, 0x12c(r1)
    lwz r4, 0x128(r1)
    lwz r0, 0x12c(r1)
    stfs f7, 0x130(r1)
    stfs f9, 0x134(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f6, 0xf0(r3)
    stw r9, 0xf4(r3)
    stw r8, 0xf8(r3)
    stfs f5, 0xfc(r3)
    stfs f5, 0x100(r3)
    stw r21, 0xf8(r1)
    stw r21, 0xfc(r1)
    stw r7, 0x100(r1)
    stw r22, 0x104(r1)
    stw r20, 0x108(r1)
    stw r21, 0x10c(r1)
    stw r21, 0x110(r1)
    stfs f4, 0x114(r1)
    stfs f4, 0x118(r1)
    stfs f9, 0x11c(r1)
    stfs f7, 0x138(r1)
    stfs f0, 0x13c(r1)
    stw r21, 0x264(r3)
    stw r21, 0x268(r3)
    stw r7, 0x26c(r3)
    stw r22, 0x270(r3)
    stw r20, 0x274(r3)
    stw r21, 0x278(r3)
    stw r21, 0x27c(r3)
    stfs f4, 0x280(r3)
    stfs f4, 0x284(r3)
    stfs f9, 0x288(r3)
    stw r6, 0x28c(r3)
    stw r5, 0x290(r3)
    stw r4, 0x294(r3)
    stw r0, 0x298(r3)
    psq_st f1, 0x29c(r3), 0, 0
    stfs f2, 0x2a4(r3)
    stfs f0, 0x2a8(r3)
    stw r21, 0xa8(r1)
    stw r21, 0xec(r1)
    stfs f9, 0x8(r1)
    addi r10, r1, 0x8
    addi r11, r1, 0xac
    addi r8, r1, 0x18
    stfs f7, 0xc(r1)
    addi r9, r1, 0xbc
    addi r6, r1, 0x28
    addi r7, r1, 0xcc
    psq_l f1, 0x0(r10), 0, 0
    addi r4, r1, 0x38
    stfs f7, 0x10(r1)
    addi r5, r1, 0xdc
    stfs f7, 0x14(r1)
    psq_l f2, 0x8(r10), 0, 0
    stfs f7, 0x18(r1)
    stfs f9, 0x1c(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f7, 0x20(r1)
    stfs f7, 0x24(r1)
    psq_st f2, 0x8(r11), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f7, 0x28(r1)
    stfs f7, 0x2c(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f9, 0x30(r1)
    stfs f7, 0x34(r1)
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f7, 0x38(r1)
    stfs f7, 0x3c(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    psq_st f1, 0x328(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x348(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f7, 0x40(r1)
    stfs f7, 0x44(r1)
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    addi r11, r1, 0x1f0
    psq_st f2, 0x330(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    psq_st f2, 0x340(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f2, 0x350(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stw r21, 0x324(r3)
    psq_st f1, 0x358(r3), 0, 0
    psq_st f2, 0x360(r3), 0, 0
    stw r21, 0x368(r3)
    stw r21, 0x36c(r3)
    stfs f9, 0x370(r3)
    stw r21, 0xf0(r1)
    stfs f9, 0xf4(r1)
    bl _restgpr_20
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_8052BBF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r12, 0x8(r4)
    stw r31, 0xc(r1)
    lwz r31, 0x4(r4)
    stw r30, 0x8(r1)
    lwz r30, 0x0(r4)
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lfs f5, 0x1c(r4)
    lfs f4, 0x20(r4)
    lfs f3, 0x24(r4)
    lwz r7, 0x28(r4)
    lwz r6, 0x2c(r4)
    lwz r5, 0x30(r4)
    lwz r0, 0x34(r4)
    psq_l f1, 0x38(r4), 0, 0
    lfs f2, 0x40(r4)
    lfs f0, 0x44(r4)
    stw r30, 0x0(r3)
    stw r31, 0x4(r3)
    stw r12, 0x8(r3)
    stw r11, 0xc(r3)
    stw r10, 0x10(r3)
    stw r9, 0x14(r3)
    stw r8, 0x18(r3)
    stfs f5, 0x1c(r3)
    stfs f4, 0x20(r3)
    stfs f3, 0x24(r3)
    stw r7, 0x28(r3)
    stw r6, 0x2c(r3)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    psq_st f1, 0x38(r3), 0, 0
    stfs f2, 0x40(r3)
    stfs f0, 0x44(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_8052BC94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8052BC94_00001664
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8052BC94_00001664
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x0(r31)
    b lbl_fn_8052BC94_00001668
lbl_fn_8052BC94_00001664:
    li r3, 0x0
lbl_fn_8052BC94_00001668:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8052BCE8(void)
{
    nofralloc
    mulli r0, r4, 0x64
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_8052BCF8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8052BD00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x133c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8052BD00_000016F4
    bl fn_8052CA70
    li r0, 0x0
    stw r0, 0x133c(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8052BD00_000016E8
    lis r4, 0x100
    li r6, 0x0
    subi r5, r4, 0x1
    li r7, 0x0
    li r4, -0x1
    li r8, 0xa
    bl fn_8037529C
lbl_fn_8052BD00_000016E8:
    li r0, 0x0
    stw r0, 0x5c(r31)
    b lbl_fn_8052BD00_00001A6C
lbl_fn_8052BD00_000016F4:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    li r6, 0x0
    bl fn_800A56A8
    fabs f1, f1
    lfs f0, lbl_80887AEC
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8052BD00_0000173C
    lwz r0, 0x1308(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8052BD00_0000173C
    lwz r3, lbl_8087F9C0
    li r4, 0x1
    li r0, 0xf
    stw r4, 0x1c(r3)
    stw r0, 0x1308(r31)
lbl_fn_8052BD00_0000173C:
    lwz r3, 0x1308(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8052BD00_00001750
    subi r0, r3, 0x1
    stw r0, 0x1308(r31)
lbl_fn_8052BD00_00001750:
    lwz r0, 0x1360(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052BD00_0000176C
    mr r3, r31
    bl fn_80530DB8
    li r0, 0x0
    stw r0, 0x1360(r31)
lbl_fn_8052BD00_0000176C:
    mr r3, r31
    bl fn_8052D46C
    lwz r3, lbl_8087F580
    li r4, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_8052BD00_000017AC
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8052BD00_000017A8
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8052BD00_000017A8
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8052BD00_000017AC
lbl_fn_8052BD00_000017A8:
    li r4, 0x0
lbl_fn_8052BD00_000017AC:
    cmpwi r4, 0x0
    beq lbl_fn_8052BD00_000018EC
    lwz r0, 0x11f8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8052BD00_000018EC
    lwz r0, 0x464(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052BD00_000017E4
    lwz r3, 0x11d0(r31)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
lbl_fn_8052BD00_000017E4:
    lwz r0, 0x464(r31)
    cmplwi r0, 0x8
    bgt lbl_fn_8052BD00_000018EC
    lis r3, jumptable_807937E8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807937E8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x11d0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x1304(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8052BD00_00001854
    lwz r3, 0x11f4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8052BD00_00001854
    lwz r0, 0x11d0(r31)
    cmplw r3, r0
    beq lbl_fn_8052BD00_00001854
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
lbl_fn_8052BD00_00001854:
    li r0, 0x1
    stw r0, 0x1304(r31)
    b lbl_fn_8052BD00_000018EC
    lwz r3, 0x11d4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8052BD00_000018EC
    lwz r3, 0x11d8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8052BD00_000018EC
    lwz r3, 0x11dc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8052BD00_000018EC
    lwz r3, 0x11e4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8052BD00_000018EC
    lwz r3, 0x11e0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8052BD00_000018EC
    lwz r3, 0x11e8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
lbl_fn_8052BD00_000018EC:
    lwz r3, lbl_8087F0A8
    li r4, 0x10
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_8052BD00_00001A34
    lwz r3, 0x11f0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8052BD00_00001A34
    lwz r3, 0x11e4(r31)
    bl fn_801D0BAC
    cmpwi r3, 0x0
    bne lbl_fn_8052BD00_00001A34
    lwz r3, 0x11d0(r31)
    bl fn_805294E8
    cmpwi r3, 0x0
    bne lbl_fn_8052BD00_00001A34
    lwz r3, 0x11d8(r31)
    lwz r0, 0x1998(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8052BD00_00001A34
    lwz r3, 0x11d4(r31)
    lwz r0, 0x5dc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8052BD00_00001A34
    lwz r3, 0x11e8(r31)
    lwz r0, 0x138(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8052BD00_00001A34
    mr r3, r31
    bl fn_80530178
    lwz r0, 0x133c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8052BD00_000019BC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8052BD00_00001998
    li r0, 0x12
    stw r0, 0x563c(r3)
lbl_fn_8052BD00_00001998:
    li r0, 0x1
    stw r0, 0x133c(r31)
    addi r3, r1, 0x8
    li r4, 0x20
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8052BD00_000019F4
lbl_fn_8052BD00_000019BC:
    mr r3, r31
    bl fn_8052CA70
    li r0, 0x0
    stw r0, 0x133c(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8052BD00_000019F4
    lis r4, 0x100
    li r6, 0x0
    subi r5, r4, 0x1
    li r7, 0x0
    li r4, -0x1
    li r8, 0xa
    bl fn_8037529C
lbl_fn_8052BD00_000019F4:
    li r0, 0x0
    stw r0, 0x5c(r31)
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8052BD00_00001A34
    li r4, 0x1
    li r5, 0x0
    li r6, 0x20
    li r7, 0x1e
    bl fn_800CFBA0
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    li r5, 0x0
    li r6, 0x20
    li r7, 0xf
    bl fn_800CFBA0
lbl_fn_8052BD00_00001A34:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8052BD00_00001A48
    li r4, 0x6
    bl fn_8023A614
lbl_fn_8052BD00_00001A48:
    lwz r4, 0x1354(r31)
    lwz r0, 0x1358(r31)
    cmpw r0, r4
    beq lbl_fn_8052BD00_00001A64
    lwz r3, 0x11ec(r31)
    lwz r5, 0x464(r31)
    bl fn_80513024
lbl_fn_8052BD00_00001A64:
    lwz r0, 0x1354(r31)
    stw r0, 0x1358(r31)
lbl_fn_8052BD00_00001A6C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
