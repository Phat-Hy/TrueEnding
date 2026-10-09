#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80044E0C(void);
extern void fn_80051A88(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087AA0(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_80094F98(void);
extern void fn_80097D40(void);
extern void fn_800C122C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800FC410(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_80107850(void);
extern void fn_80107B20(void);
extern void fn_80107BE8(void);
extern void fn_80107CA8(void);
extern void fn_8010C00C(void);
extern void fn_8011BEB8(void);
extern void fn_8012476C(void);
extern void fn_8012AD20(void);
extern void fn_8012B988(void);
extern void fn_8012E540(void);
extern void fn_8012F188(void);
extern void fn_8013322C(void);
extern void fn_801333A4(void);
extern void fn_80134168(void);
extern void fn_8014DEE4(void);
extern void fn_8014FD30(void);
extern void fn_801533C8(void);
extern void fn_8015EB2C(void);
extern void fn_8016E970(void);
extern void fn_80178BFC(void);
extern void fn_801840D8(void);
extern void fn_801847C0(void);
extern void fn_8018EEC4(void);
extern void fn_802096A8(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_80370174(void);
extern void fn_80473F18(void);
extern void fn_80481654(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_80680CF8(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80737808[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_807C7B28[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F540;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881980;
extern u32 lbl_80881984;
extern u32 lbl_80881988;
extern u32 lbl_80881994;
extern u32 lbl_808819D4;
extern u32 lbl_808819DC;
extern u32 lbl_808819F4;
extern u32 lbl_80881AEC;
extern u32 lbl_80881AF0;
extern u32 lbl_80881AF4;
extern u32 lbl_80881AF8;
extern u32 lbl_80881AFC;
extern u32 lbl_80881B00;
extern u32 lbl_80881B04;
extern u32 lbl_80881B08;

/* Function declarations */
void fn_8014BDB0(void);
void fn_8014C0B4(void);
void fn_8014C228(void);
void fn_8014C468(void);
void fn_8014C540(void);

asm void fn_8014BDB0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r4
    beq lbl_fn_8014BDB0_000002E4
    lis r4, 0x51ec
    lwz r8, 0x50(r3)
    subi r0, r4, 0x7ae1
    lis r30, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r29, lbl_80737A9C@ha
    addi r3, r30, lbl_807C7B28@l
    addi r4, r29, lbl_80737A9C@l
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    addi r4, r29, lbl_80737A9C@l
    lwz r6, 0x58(r31)
    addi r3, r1, 0x8
    addi r5, r30, lbl_807C7B28@l
    addi r4, r4, 0x45c
    crclr 6
    bl sprintf
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8014BDB0_000000C8
    cmpwi r28, 0x0
    beq lbl_fn_8014BDB0_000000C8
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8014BDB0_000000C8
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0x54(r31)
    mr r30, r3
    b lbl_fn_8014BDB0_000000CC
lbl_fn_8014BDB0_000000C8:
    li r30, 0x0
lbl_fn_8014BDB0_000000CC:
    lis r29, lbl_80737A9C@ha
    lfs f1, lbl_80881AEC
    addi r29, r29, lbl_80737A9C@l
    lfs f2, lbl_80881AF0
    lfs f3, lbl_80881964
    mr r3, r30
    addi r4, r29, 0x465
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80881AF4
    mr r3, r30
    lfs f2, lbl_80881AF8
    addi r4, r29, 0x46e
    lfs f3, lbl_808819DC
    addi r5, r31, 0x534
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80881AEC
    mr r3, r30
    lfs f2, lbl_80881AF0
    addi r4, r29, 0x477
    lfs f3, lbl_80881988
    addi r5, r31, 0x540
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_8088196C
    mr r3, r30
    lfs f2, lbl_80881AF0
    addi r4, r29, 0x47d
    lfs f3, lbl_80881AFC
    addi r5, r31, 0x568
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r29, 0x487
    addi r5, r31, 0x55c
    li r6, 0x0
    li r7, 0xa
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r29, 0x490
    addi r5, r31, 0x54c
    li r6, 0x4
    li r7, 0x0
    li r8, 0x0
    bl fn_80087AA0
    mr r3, r30
    addi r4, r29, 0x49b
    addi r5, r31, 0x1028
    li r6, 0x0
    li r7, 0x10
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8014BDB0_000001DC
    cmpwi r0, 0x3
    bne lbl_fn_8014BDB0_000001E8
lbl_fn_8014BDB0_000001DC:
    mr r4, r30
    addi r3, r31, 0x10d8
    bl fn_8012AD20
lbl_fn_8014BDB0_000001E8:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8014BDB0_000002E4
    lis r29, lbl_80737A9C@ha
    mr r3, r30
    addi r29, r29, lbl_80737A9C@l
    addi r4, r29, 0x4a7
    bl fn_8008937C
    lfs f1, lbl_8088196C
    mr r28, r3
    lfs f2, lbl_80881AF0
    addi r4, r29, 0x4ac
    lfs f3, lbl_80881964
    addi r5, r31, 0xd88
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088196C
    mr r3, r28
    lfs f2, lbl_80881AF0
    addi r4, r29, 0x4b9
    lfs f3, lbl_80881964
    addi r5, r31, 0xd8c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lis r30, 0x99
    mr r3, r28
    addi r4, r29, 0x4c4
    addi r5, r31, 0xd7c
    subi r7, r30, 0x6981
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r29, 0x4d0
    addi r5, r31, 0xd80
    subi r7, r30, 0x6981
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_8088196C
    mr r3, r28
    lfs f2, lbl_80881AF0
    addi r4, r29, 0x4db
    lfs f3, lbl_80881964
    addi r5, r31, 0xd90
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r29, 0x4e7
    addi r5, r31, 0xd84
    subi r7, r30, 0x6981
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
lbl_fn_8014BDB0_000002E4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8014C0B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x1
    stw r0, 0x14(r1)
    slwi r0, r4, 2
    add r6, r3, r0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r5, 0x484(r6)
    beq lbl_fn_8014C0B4_00000348
    cmpwi r4, 0x2
    beq lbl_fn_8014C0B4_00000390
    cmpwi r4, 0x3
    beq lbl_fn_8014C0B4_000003D8
    cmpwi r4, 0x1b
    beq lbl_fn_8014C0B4_00000420
    b lbl_fn_8014C0B4_00000464
lbl_fn_8014C0B4_00000348:
    mr r4, r5
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8014C0B4_00000368
    bl fn_80473F18
    bl fn_802096A8
    b lbl_fn_8014C0B4_0000036C
lbl_fn_8014C0B4_00000368:
    li r3, 0x0
lbl_fn_8014C0B4_0000036C:
    cmpwi r3, 0x0
    beq lbl_fn_8014C0B4_0000037C
    lfs f1, 0x4(r3)
    b lbl_fn_8014C0B4_00000380
lbl_fn_8014C0B4_0000037C:
    lfs f1, lbl_80881980
lbl_fn_8014C0B4_00000380:
    lfs f0, 0x514(r31)
    fmuls f0, f1, f0
    stfs f0, 0x500(r31)
    b lbl_fn_8014C0B4_00000464
lbl_fn_8014C0B4_00000390:
    mr r4, r5
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8014C0B4_000003B0
    bl fn_80473F18
    bl fn_802096A8
    b lbl_fn_8014C0B4_000003B4
lbl_fn_8014C0B4_000003B0:
    li r3, 0x0
lbl_fn_8014C0B4_000003B4:
    cmpwi r3, 0x0
    beq lbl_fn_8014C0B4_000003C4
    lfs f1, 0x4(r3)
    b lbl_fn_8014C0B4_000003C8
lbl_fn_8014C0B4_000003C4:
    lfs f1, lbl_80881984
lbl_fn_8014C0B4_000003C8:
    lfs f0, 0x514(r31)
    fmuls f0, f1, f0
    stfs f0, 0x504(r31)
    b lbl_fn_8014C0B4_00000464
lbl_fn_8014C0B4_000003D8:
    mr r4, r5
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8014C0B4_000003F8
    bl fn_80473F18
    bl fn_802096A8
    b lbl_fn_8014C0B4_000003FC
lbl_fn_8014C0B4_000003F8:
    li r3, 0x0
lbl_fn_8014C0B4_000003FC:
    cmpwi r3, 0x0
    beq lbl_fn_8014C0B4_0000040C
    lfs f1, 0x4(r3)
    b lbl_fn_8014C0B4_00000410
lbl_fn_8014C0B4_0000040C:
    lfs f1, lbl_80881964
lbl_fn_8014C0B4_00000410:
    lfs f0, 0x514(r31)
    fmuls f0, f1, f0
    stfs f0, 0x508(r31)
    b lbl_fn_8014C0B4_00000464
lbl_fn_8014C0B4_00000420:
    mr r4, r5
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8014C0B4_00000440
    bl fn_80473F18
    bl fn_802096A8
    b lbl_fn_8014C0B4_00000444
lbl_fn_8014C0B4_00000440:
    li r3, 0x0
lbl_fn_8014C0B4_00000444:
    cmpwi r3, 0x0
    beq lbl_fn_8014C0B4_00000454
    lfs f1, 0x4(r3)
    b lbl_fn_8014C0B4_00000458
lbl_fn_8014C0B4_00000454:
    lfs f1, lbl_80881988
lbl_fn_8014C0B4_00000458:
    lfs f0, 0x514(r31)
    fmuls f0, f1, f0
    stfs f0, 0x50c(r31)
lbl_fn_8014C0B4_00000464:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8014C228(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x510(r3)
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1
    li r5, 0x14
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x2
    li r5, 0x1a
    bl fn_8014C0B4
    lwz r3, 0x50(r31)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_8014C228_000004DC
    mr r3, r31
    li r4, 0x3
    li r5, 0x23
    bl fn_8014C0B4
    b lbl_fn_8014C228_000004EC
lbl_fn_8014C228_000004DC:
    mr r3, r31
    li r4, 0x3
    li r5, 0x20
    bl fn_8014C0B4
lbl_fn_8014C228_000004EC:
    mr r3, r31
    li r4, 0x4
    li r5, 0x28
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x5
    li r5, 0x195
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x6
    li r5, 0x196
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x7
    li r5, 0x1b1
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x8
    li r5, 0x1b2
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x9
    li r5, 0x197
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0xa
    li r5, 0x198
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0xb
    li r5, 0x1b3
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0xc
    li r5, 0x1b4
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0xd
    li r5, 0x199
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0xe
    li r5, 0x19a
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0xf
    li r5, 0x1b5
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x10
    li r5, 0x1b6
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x11
    li r5, 0x19b
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x12
    li r5, 0x19c
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x13
    li r5, 0x156
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x14
    li r5, 0x156
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x16
    li r5, 0x15c
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x15
    li r5, 0x15d
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x17
    li r5, 0x15e
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x18
    li r5, 0x15f
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x19
    li r5, 0x1c0
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1a
    li r5, 0x1c1
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1b
    li r5, 0x1c6
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1c
    li r5, 0x1c7
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1d
    li r5, 0x1c8
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1e
    li r5, 0x1c9
    bl fn_8014C0B4
    mr r3, r31
    bl fn_8014FD30
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8014C468(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x648(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8014C468_000006E8
    lwz r5, 0x510(r3)
    li r4, 0x0
    bl fn_8014C0B4
    b lbl_fn_8014C468_0000077C
lbl_fn_8014C468_000006E8:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8014C468_00000708
    cmpwi r0, 0x1
    beq lbl_fn_8014C468_00000760
    cmpwi r0, 0x2
    beq lbl_fn_8014C468_00000770
    b lbl_fn_8014C468_0000077C
lbl_fn_8014C468_00000708:
    lwz r4, 0x5c(r3)
    lwz r0, 0x11c(r4)
    cmpwi r0, 0x2
    bne lbl_fn_8014C468_00000728
    li r4, 0x0
    li r5, 0x4
    bl fn_8014C0B4
    b lbl_fn_8014C468_0000077C
lbl_fn_8014C468_00000728:
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_8014C468_0000074C
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_8014C0B4
    b lbl_fn_8014C468_0000077C
lbl_fn_8014C468_0000074C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_8014C0B4
    b lbl_fn_8014C468_0000077C
lbl_fn_8014C468_00000760:
    li r4, 0x0
    li r5, 0x0
    bl fn_8014C0B4
    b lbl_fn_8014C468_0000077C
lbl_fn_8014C468_00000770:
    li r4, 0x0
    li r5, 0x1
    bl fn_8014C0B4
lbl_fn_8014C468_0000077C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8014C540(void)
{
    nofralloc
    stwu r1, -0x4e0(r1)
    mflr r0
    stw r0, 0x4e4(r1)
    addi r11, r1, 0x4e0
    bl _savegpr_27
    lwz r4, lbl_8087F430
    lis r31, lbl_8077A720@ha
    mr r28, r3
    cmpwi r4, 0x0
    addi r31, r31, lbl_8077A720@l
    beq lbl_fn_8014C540_000007DC
    lwz r0, 0x56d4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_000007DC
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x8
    beq lbl_fn_8014C540_000007DC
    addi r3, r3, 0x7d4
    bl fn_8012E540
lbl_fn_8014C540_000007DC:
    addi r3, r28, 0x7d4
    bl fn_8012B988
    mr r3, r28
    bl fn_80178BFC
    lwz r3, 0x48(r28)
    lwz r0, 0x12a8(r28)
    cmpwi r3, 0x2
    clrlwi r0, r0, 2
    stw r0, 0x12a8(r28)
    bne lbl_fn_8014C540_00000868
    lwz r0, 0x12d0(r28)
    addi r4, r28, 0x12d4
    mulli r0, r0, 0x14
    add r3, r28, r0
    addi r3, r3, 0x12d4
    b lbl_fn_8014C540_00000860
lbl_fn_8014C540_0000081C:
    lhz r0, 0xc(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_8014C540_0000085C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x294(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_0000084C
    lwz r0, 0x12a8(r28)
    oris r0, r0, 0x8000
    stw r0, 0x12a8(r28)
    b lbl_fn_8014C540_00000868
lbl_fn_8014C540_0000084C:
    lwz r0, 0x12a8(r28)
    oris r0, r0, 0x4000
    stw r0, 0x12a8(r28)
    b lbl_fn_8014C540_00000868
lbl_fn_8014C540_0000085C:
    addi r4, r4, 0x14
lbl_fn_8014C540_00000860:
    cmplw r4, r3
    bne lbl_fn_8014C540_0000081C
lbl_fn_8014C540_00000868:
    lwz r3, 0x640(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8014C540_0000087C
    subi r0, r3, 0x1
    stw r0, 0x640(r28)
lbl_fn_8014C540_0000087C:
    lwz r3, 0xfb0(r28)
    subi r0, r3, 0x1
    stw r0, 0xfb0(r28)
    cmpwi r0, -0x3c
    bge lbl_fn_8014C540_000008A0
    li r3, -0x3c
    li r0, 0x0
    stw r3, 0xfb0(r28)
    stw r0, 0xfb4(r28)
lbl_fn_8014C540_000008A0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00000B88
    lwz r0, 0x56d4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_00000B88
    lwz r3, 0xf94(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8014C540_00000B88
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 8
    bne lbl_fn_8014C540_00000B88
    subic. r0, r3, 0x1
    stw r0, 0xf94(r28)
    bne lbl_fn_8014C540_00000B88
    lis r5, lbl_80737A9C@ha
    li r3, 0x28
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8014C540_00000918
    mr r4, r28
    li r5, 0x0
    bl fn_8018EEC4
    mr r30, r3
lbl_fn_8014C540_00000918:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8014C540_000009A8
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_00000950
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x490(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x494(r1)
    stw r0, 0x498(r1)
    b lbl_fn_8014C540_0000096C
lbl_fn_8014C540_00000950:
    addi r3, r31, 0x380
    lwz r5, 0x380(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x490(r1)
    stw r4, 0x494(r1)
    stw r0, 0x498(r1)
lbl_fn_8014C540_0000096C:
    lwz r5, 0x490(r1)
    addi r3, r1, 0x38
    lwz r4, 0x494(r1)
    lwz r0, 0x498(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_000009A8
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8014C540_000009A8:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8014C540_00000B5C
    cmpwi r0, 0x8
    beq lbl_fn_8014C540_000009C0
    stw r0, 0x564(r28)
lbl_fn_8014C540_000009C0:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8014C540_00000B5C
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_000009F8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x49c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x4a0(r1)
    stw r0, 0x4a4(r1)
    b lbl_fn_8014C540_00000A14
lbl_fn_8014C540_000009F8:
    addi r3, r31, 0x38c
    lwz r5, 0x38c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x49c(r1)
    stw r4, 0x4a0(r1)
    stw r0, 0x4a4(r1)
lbl_fn_8014C540_00000A14:
    lwz r5, 0x49c(r1)
    addi r3, r1, 0x20
    lwz r4, 0x4a0(r1)
    lwz r0, 0x4a4(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00000A50
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8014C540_00000A50:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8014C540_00000B2C
    cmpwi r0, 0x8
    beq lbl_fn_8014C540_00000A68
    stw r0, 0x564(r28)
lbl_fn_8014C540_00000A68:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8014C540_00000B2C
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_00000AA0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x4a8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x4ac(r1)
    stw r0, 0x4b0(r1)
    b lbl_fn_8014C540_00000ABC
lbl_fn_8014C540_00000AA0:
    addi r3, r31, 0x398
    lwz r5, 0x398(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x4a8(r1)
    stw r4, 0x4ac(r1)
    stw r0, 0x4b0(r1)
lbl_fn_8014C540_00000ABC:
    lwz r5, 0x4a8(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x4ac(r1)
    lwz r0, 0x4b0(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00000AF8
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8014C540_00000AF8:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8014C540_00000B2C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8014C540_00000B2C:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8014C540_00000B5C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8014C540_00000B5C:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_8014C540_00000B88
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8014C540_00000B88:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 23
    beq lbl_fn_8014C540_00000BA8
    lwz r3, 0xf9c(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8014C540_00000BA8
    subi r0, r3, 0x1
    stw r0, 0xf9c(r28)
lbl_fn_8014C540_00000BA8:
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_00001320
    lwz r0, 0x7e0(r28)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8014C540_00000CD8
    lwz r7, lbl_8087EFA8
    addi r27, r1, 0x444
    addi r31, r1, 0x454
    addi r30, r1, 0x464
    psq_l f1, 0x328(r7), 0, 0
    addi r29, r1, 0x474
    psq_l f2, 0x330(r7), 0, 0
    addi r3, r28, 0x7d4
    psq_st f1, 0x0(r27), 0, 0
    li r4, 0x1
    psq_l f1, 0x338(r7), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_l f2, 0x340(r7), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x348(r7), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_l f2, 0x350(r7), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lwz r6, 0x324(r7)
    psq_st f2, 0x8(r30), 0, 0
    psq_l f1, 0x358(r7), 0, 0
    psq_l f2, 0x360(r7), 0, 0
    lwz r5, 0x368(r7)
    lwz r0, 0x36c(r7)
    lfs f0, 0x370(r7)
    stw r6, 0x440(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    stw r5, 0x484(r1)
    stw r0, 0x488(r1)
    stfs f0, 0x48c(r1)
    bl fn_801333A4
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0x4bc(r1)
    lis r4, lbl_80737808@ha
    lfd f7, lbl_80737808@l(r4)
    stw r0, 0x4b8(r1)
    lwz r3, lbl_8087EFA8
    lfd f0, 0x4b8(r1)
    lwz r0, 0x440(r1)
    fsubs f7, f0, f7
    stw r0, 0x324(r3)
    lfs f0, lbl_80881B00
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x328(r3), 0, 0
    fdivs f7, f7, f0
    psq_l f2, 0x8(r27), 0, 0
    psq_st f2, 0x330(r3), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_st f2, 0x340(r3), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x348(r3), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_st f2, 0x350(r3), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    lfs f0, lbl_80881964
    psq_st f1, 0x358(r3), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    fsubs f0, f0, f7
    psq_st f2, 0x360(r3), 0, 0
    lwz r0, 0x484(r1)
    stw r0, 0x368(r3)
    lwz r0, 0x488(r1)
    stw r0, 0x36c(r3)
    stfs f0, 0x48c(r1)
    stfs f0, 0x370(r3)
lbl_fn_8014C540_00000CD8:
    lwz r3, 0xf84(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8014C540_00001320
    subi r0, r3, 0x1
    stw r0, 0xf84(r28)
    li r4, 0x22
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00000D10
    lwz r3, 0xf84(r28)
    subi r0, r3, 0xa
    stw r0, 0xf84(r28)
lbl_fn_8014C540_00000D10:
    lwz r0, 0xf84(r28)
    cmpwi r0, 0x0
    bgt lbl_fn_8014C540_00001320
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8014C540_0000101C
    addi r3, r28, 0x7d4
    li r4, 0x100
    bl fn_8013322C
    addi r3, r28, 0x7d4
    li r4, 0x100
    bl fn_8013322C
    lwz r3, lbl_8087F048
    addi r4, r28, 0xb0
    bl fn_80107850
    lwz r0, 0x48(r28)
    cmpwi r0, 0x2
    beq lbl_fn_8014C540_00000D70
    lwz r3, 0xf14(r28)
    li r0, 0x0
    stw r3, 0xf18(r28)
    stw r0, 0xf14(r28)
    b lbl_fn_8014C540_00000D80
lbl_fn_8014C540_00000D70:
    lwz r3, 0xf14(r28)
    li r0, 0x1
    stw r3, 0xf18(r28)
    stw r0, 0xf14(r28)
lbl_fn_8014C540_00000D80:
    addi r3, r28, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8014C540_00000ED4
    lwz r0, 0x12a4(r28)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r28)
    lwz r3, lbl_8087F430
    lwz r5, 0x10d8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8014C540_00000DFC
    lwz r3, 0xc38(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8014C540_00000DFC
    lwz r0, 0xc3c(r28)
    cmpwi r0, 0x0
    ble lbl_fn_8014C540_00000DFC
    subi r0, r3, 0x1
    lwz r3, 0xb0(r5)
    slwi r0, r0, 6
    li r4, 0x0
    add r3, r3, r0
    stw r4, 0x3c(r3)
    lwz r6, 0xc3c(r28)
    lwz r3, 0xb0(r5)
    subi r0, r6, 0x1
    slwi r0, r0, 6
    add r3, r3, r0
    stw r4, 0x3c(r3)
lbl_fn_8014C540_00000DFC:
    lwz r4, 0x48(r28)
    cmpwi r4, 0x0
    bne lbl_fn_8014C540_00000E30
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00000E30
    lwz r3, 0x5c(r28)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8014C540_00000E30
    li r0, 0x1
    b lbl_fn_8014C540_00000E50
lbl_fn_8014C540_00000E30:
    cmpwi r4, 0x0
    bne lbl_fn_8014C540_00000E4C
    lwz r0, 0x12a8(r28)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8014C540_00000E4C
    li r0, 0x1
    b lbl_fn_8014C540_00000E50
lbl_fn_8014C540_00000E4C:
    li r0, 0x0
lbl_fn_8014C540_00000E50:
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00000ED4
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8014C540_00000EB4
    lwz r3, 0x648(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00000E80
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8014C540_00000E80:
    lwz r3, 0x64c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00000E94
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8014C540_00000E94:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r28)
    mr r3, r28
    stw r0, 0x648(r28)
    stw r0, 0x64c(r28)
    bl fn_8014C228
    b lbl_fn_8014C540_00000ED4
lbl_fn_8014C540_00000EB4:
    lwz r0, 0x674(r28)
    cmpwi r0, 0x0
    blt lbl_fn_8014C540_00000ED4
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8014C540_00000ED4:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8014C540_00000EEC
    lwz r0, 0x12a4(r28)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r28)
lbl_fn_8014C540_00000EEC:
    lwz r7, 0xd1c(r28)
    cmpwi r7, 0x0
    beq lbl_fn_8014C540_00000F94
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8014C540_00000F34
lbl_fn_8014C540_00000F18:
    lwz r0, 0xfe8(r5)
    cmplw r0, r28
    bne lbl_fn_8014C540_00000F2C
    li r0, 0x1
    b lbl_fn_8014C540_00000F50
lbl_fn_8014C540_00000F2C:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8014C540_00000F34:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8014C540_00000F44
    slwi r0, r6, 1
lbl_fn_8014C540_00000F44:
    cmpw r4, r0
    blt lbl_fn_8014C540_00000F18
    li r0, 0x0
lbl_fn_8014C540_00000F50:
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00000F94
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8014C540_00000F68:
    lwz r0, 0xfe8(r4)
    cmplw r0, r28
    bne lbl_fn_8014C540_00000F88
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8014C540_00000F94
lbl_fn_8014C540_00000F88:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8014C540_00000F68
lbl_fn_8014C540_00000F94:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00000FB4
    mr r4, r28
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r28
    bl fn_80105B3C
lbl_fn_8014C540_00000FB4:
    lwz r0, 0x48(r28)
    li r4, 0x0
    lwz r3, 0x12a8(r28)
    lfs f0, lbl_8088196C
    cmpwi r0, 0x0
    rlwinm r3, r3, 0, 24, 22
    stw r3, 0x12a8(r28)
    stfs f0, 0xfb8(r28)
    stfs f0, 0xfbc(r28)
    stw r4, 0xd1c(r28)
    bne lbl_fn_8014C540_00000FEC
    li r0, 0x1
    stw r0, 0x55c(r28)
    stw r0, 0x564(r28)
lbl_fn_8014C540_00000FEC:
    lis r4, lbl_80737A9C@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737A9C@l
    addi r3, r1, 0x1c
    addi r4, r4, 0x4f4
    addi r5, r28, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8014C540_0000101C:
    lwz r0, 0x7e0(r28)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_8014C540_00001320
    addi r3, r28, 0x7d4
    lis r4, 0x1
    bl fn_8013322C
    addi r3, r28, 0x7d4
    lis r4, 0x1
    bl fn_8013322C
    lwz r3, lbl_8087F048
    addi r4, r28, 0xb0
    bl fn_80107B20
    lwz r0, 0x48(r28)
    cmpwi r0, 0x2
    beq lbl_fn_8014C540_00001074
    lwz r3, 0xf14(r28)
    li r0, 0x0
    stw r3, 0xf18(r28)
    stw r0, 0xf14(r28)
    b lbl_fn_8014C540_00001084
lbl_fn_8014C540_00001074:
    lwz r3, 0xf14(r28)
    li r0, 0x1
    stw r3, 0xf18(r28)
    stw r0, 0xf14(r28)
lbl_fn_8014C540_00001084:
    addi r3, r28, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8014C540_000011D8
    lwz r0, 0x12a4(r28)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r28)
    lwz r3, lbl_8087F430
    lwz r5, 0x10d8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8014C540_00001100
    lwz r3, 0xc38(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8014C540_00001100
    lwz r0, 0xc3c(r28)
    cmpwi r0, 0x0
    ble lbl_fn_8014C540_00001100
    subi r0, r3, 0x1
    lwz r3, 0xb0(r5)
    slwi r0, r0, 6
    li r4, 0x0
    add r3, r3, r0
    stw r4, 0x3c(r3)
    lwz r6, 0xc3c(r28)
    lwz r3, 0xb0(r5)
    subi r0, r6, 0x1
    slwi r0, r0, 6
    add r3, r3, r0
    stw r4, 0x3c(r3)
lbl_fn_8014C540_00001100:
    lwz r4, 0x48(r28)
    cmpwi r4, 0x0
    bne lbl_fn_8014C540_00001134
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001134
    lwz r3, 0x5c(r28)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8014C540_00001134
    li r0, 0x1
    b lbl_fn_8014C540_00001154
lbl_fn_8014C540_00001134:
    cmpwi r4, 0x0
    bne lbl_fn_8014C540_00001150
    lwz r0, 0x12a8(r28)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8014C540_00001150
    li r0, 0x1
    b lbl_fn_8014C540_00001154
lbl_fn_8014C540_00001150:
    li r0, 0x0
lbl_fn_8014C540_00001154:
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_000011D8
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8014C540_000011B8
    lwz r3, 0x648(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001184
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8014C540_00001184:
    lwz r3, 0x64c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001198
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8014C540_00001198:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r28)
    mr r3, r28
    stw r0, 0x648(r28)
    stw r0, 0x64c(r28)
    bl fn_8014C228
    b lbl_fn_8014C540_000011D8
lbl_fn_8014C540_000011B8:
    lwz r0, 0x674(r28)
    cmpwi r0, 0x0
    blt lbl_fn_8014C540_000011D8
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8014C540_000011D8:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8014C540_000011F0
    lwz r0, 0x12a4(r28)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r28)
lbl_fn_8014C540_000011F0:
    lwz r7, 0xd1c(r28)
    cmpwi r7, 0x0
    beq lbl_fn_8014C540_00001298
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8014C540_00001238
lbl_fn_8014C540_0000121C:
    lwz r0, 0xfe8(r5)
    cmplw r0, r28
    bne lbl_fn_8014C540_00001230
    li r0, 0x1
    b lbl_fn_8014C540_00001254
lbl_fn_8014C540_00001230:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8014C540_00001238:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8014C540_00001248
    slwi r0, r6, 1
lbl_fn_8014C540_00001248:
    cmpw r4, r0
    blt lbl_fn_8014C540_0000121C
    li r0, 0x0
lbl_fn_8014C540_00001254:
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001298
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8014C540_0000126C:
    lwz r0, 0xfe8(r4)
    cmplw r0, r28
    bne lbl_fn_8014C540_0000128C
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8014C540_00001298
lbl_fn_8014C540_0000128C:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8014C540_0000126C
lbl_fn_8014C540_00001298:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_000012B8
    mr r4, r28
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r28
    bl fn_80105B3C
lbl_fn_8014C540_000012B8:
    lwz r0, 0x48(r28)
    li r4, 0x0
    lwz r3, 0x12a8(r28)
    lfs f0, lbl_8088196C
    cmpwi r0, 0x0
    rlwinm r3, r3, 0, 24, 22
    stw r3, 0x12a8(r28)
    stfs f0, 0xfb8(r28)
    stfs f0, 0xfbc(r28)
    stw r4, 0xd1c(r28)
    bne lbl_fn_8014C540_000012F0
    li r0, 0x1
    stw r0, 0x55c(r28)
    stw r0, 0x564(r28)
lbl_fn_8014C540_000012F0:
    lis r4, lbl_80737A9C@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737A9C@l
    addi r3, r1, 0x18
    addi r4, r4, 0x4f4
    addi r5, r28, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8014C540_00001320:
    lwz r0, 0x12a8(r28)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_8014C540_00001394
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001340
    cmpwi r0, 0x3
    bne lbl_fn_8014C540_00001394
lbl_fn_8014C540_00001340:
    lwz r3, 0x1398(r28)
    subic. r0, r3, 0x1
    stw r0, 0x1398(r28)
    bgt lbl_fn_8014C540_00001394
    bl fn_80680CF8
    lis r4, 0x8889
    subi r0, r4, 0x7777
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x3c
    stw r0, 0x1398(r28)
    lwz r3, lbl_8087F0A0
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001394
    mr r4, r28
    bl fn_801847C0
lbl_fn_8014C540_00001394:
    lwz r0, lbl_8087F0A0
    li r30, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_000013C8
    lwz r3, 0x634(r28)
    subi r0, r3, 0x1c
    cmplwi r0, 0x1
    bgt lbl_fn_8014C540_000013C8
    lwz r0, 0x958(r28)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_8014C540_000013C8
    li r30, 0x1
lbl_fn_8014C540_000013C8:
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8014C540_000013DC
    li r30, 0x0
lbl_fn_8014C540_000013DC:
    lwz r0, 0x12a8(r28)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8014C540_00001650
    lwz r5, 0x28c(r28)
    addi r3, r1, 0x84
    psq_l f1, 0x528(r28), 0, 0
    lfs f2, 0x530(r28)
    cmpwi r5, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8c(r1)
    bne lbl_fn_8014C540_00001414
    lwz r3, lbl_8087EFB4
    lwz r4, 0x2fc(r3)
    b lbl_fn_8014C540_00001418
lbl_fn_8014C540_00001414:
    mr r4, r5
lbl_fn_8014C540_00001418:
    cmpwi r5, 0x0
    bne lbl_fn_8014C540_00001428
    lwz r3, lbl_8087EFB4
    lwz r5, 0x2fc(r3)
lbl_fn_8014C540_00001428:
    lfs f0, 0x160(r5)
    addi r3, r1, 0x3c0
    lfs f7, 0x158(r4)
    fneg f8, f0
    lfs f0, lbl_808819F4
    lfs f1, 0x84(r1)
    lfs f3, 0x8c(r1)
    fmadds f2, f8, f7, f0
    stfs f2, 0x88(r1)
    bl fn_805F90D0
    addi r3, r1, 0x3c0
    addi r27, r28, 0xf20
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x240
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    lfs f7, lbl_8088196C
    psq_st f1, 0x0(r27), 0, 0
    lfs f0, lbl_80881964
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    stfs f7, 0x26c(r1)
    stfs f7, 0x264(r1)
    stfs f7, 0x260(r1)
    stfs f7, 0x25c(r1)
    stfs f7, 0x258(r1)
    stfs f7, 0x250(r1)
    stfs f7, 0x24c(r1)
    stfs f7, 0x248(r1)
    stfs f7, 0x244(r1)
    stfs f0, 0x268(r1)
    stfs f0, 0x254(r1)
    stfs f0, 0x240(r1)
    lfs f1, 0x538(r28)
    fcmpu cr0, f7, f1
    beq lbl_fn_8014C540_00001520
    addi r3, r1, 0x330
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x330
    addi r5, r1, 0x360
    bl fn_805F89F0
    addi r3, r1, 0x360
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8014C540_00001520:
    lfs f0, lbl_8088196C
    lfs f1, 0x534(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_8014C540_00001580
    addi r3, r1, 0x2d0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x2d0
    addi r5, r1, 0x300
    bl fn_805F89F0
    addi r3, r1, 0x300
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8014C540_00001580:
    lfs f0, lbl_8088196C
    lfs f1, 0x53c(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_8014C540_000015E0
    addi r3, r1, 0x270
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x270
    addi r5, r1, 0x2a0
    bl fn_805F89F0
    addi r3, r1, 0x2a0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8014C540_000015E0:
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x210
    bl fn_805F89F0
    addi r3, r1, 0x210
    cmpwi r30, 0x0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    bne lbl_fn_8014C540_00001944
    lwz r3, lbl_8087F3C0
    addi r4, r28, 0xf20
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x12a8(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0x12a8(r28)
    b lbl_fn_8014C540_00001944
lbl_fn_8014C540_00001650:
    cmpwi r30, 0x0
    beq lbl_fn_8014C540_00001944
    lwz r5, 0x28c(r28)
    addi r3, r1, 0x78
    psq_l f1, 0x528(r28), 0, 0
    lfs f2, 0x530(r28)
    cmpwi r5, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x80(r1)
    bne lbl_fn_8014C540_00001684
    lwz r3, lbl_8087EFB4
    lwz r4, 0x2fc(r3)
    b lbl_fn_8014C540_00001688
lbl_fn_8014C540_00001684:
    mr r4, r5
lbl_fn_8014C540_00001688:
    cmpwi r5, 0x0
    bne lbl_fn_8014C540_00001698
    lwz r3, lbl_8087EFB4
    lwz r5, 0x2fc(r3)
lbl_fn_8014C540_00001698:
    lfs f0, 0x160(r5)
    addi r3, r1, 0x390
    lfs f7, 0x158(r4)
    fneg f8, f0
    lfs f0, lbl_808819F4
    lfs f1, 0x78(r1)
    lfs f3, 0x80(r1)
    fmadds f2, f8, f7, f0
    stfs f2, 0x7c(r1)
    bl fn_805F90D0
    addi r3, r1, 0x390
    addi r27, r28, 0xf20
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0xc0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    lfs f7, lbl_8088196C
    psq_st f1, 0x0(r27), 0, 0
    lfs f0, lbl_80881964
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    stfs f7, 0xec(r1)
    stfs f7, 0xe4(r1)
    stfs f7, 0xe0(r1)
    stfs f7, 0xdc(r1)
    stfs f7, 0xd8(r1)
    stfs f7, 0xd0(r1)
    stfs f7, 0xcc(r1)
    stfs f7, 0xc8(r1)
    stfs f7, 0xc4(r1)
    stfs f0, 0xe8(r1)
    stfs f0, 0xd4(r1)
    stfs f0, 0xc0(r1)
    lfs f1, 0x538(r28)
    fcmpu cr0, f7, f1
    beq lbl_fn_8014C540_00001790
    addi r3, r1, 0x1b0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1b0
    addi r5, r1, 0x1e0
    bl fn_805F89F0
    addi r3, r1, 0x1e0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8014C540_00001790:
    lfs f0, lbl_8088196C
    lfs f1, 0x534(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_8014C540_000017F0
    addi r3, r1, 0x150
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x150
    addi r5, r1, 0x180
    bl fn_805F89F0
    addi r3, r1, 0x180
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8014C540_000017F0:
    lfs f0, lbl_8088196C
    lfs f1, 0x53c(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_8014C540_00001850
    addi r3, r1, 0xf0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xf0
    addi r5, r1, 0x120
    bl fn_805F89F0
    addi r3, r1, 0x120
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8014C540_00001850:
    mr r3, r27
    mr r4, r29
    addi r5, r1, 0x90
    bl fn_805F89F0
    addi r5, r1, 0x90
    addi r3, r1, 0x48
    psq_l f1, 0x0(r5), 0, 0
    addi r4, r28, 0xb0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    lwz r27, lbl_8087EFB4
    bl fn_80094F98
    mr r3, r27
    addi r4, r1, 0x48
    bl fn_800C122C
    lfs f0, 0x2c(r3)
    li r5, 0x0
    stfs f0, 0x68(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x6c(r1)
    lfs f0, 0x34(r3)
    stfs f0, 0x70(r1)
    lfs f0, 0x38(r3)
    stfs f0, 0x74(r1)
    lwz r3, lbl_8087F0A0
    lwz r4, 0x634(r28)
    bl fn_801840D8
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8014C540_00001944
    addi r3, r28, 0xf20
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    li r5, -0x1
    lfs f1, lbl_80881964
    stw r0, 0x8(r1)
    li r0, 0x1
    mr r4, r27
    addi r7, r28, 0xf20
    stw r5, 0xc(r1)
    addi r10, r1, 0x68
    li r5, -0x1
    li r6, 0x5
    stw r0, 0x10(r1)
    li r8, 0x0
    li r9, 0x0
    bl fn_8023A680
    lwz r0, 0x12a8(r28)
    oris r0, r0, 0x1000
    stw r0, 0x12a8(r28)
lbl_fn_8014C540_00001944:
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8014C540_00001A4C
    li r3, 0x0
    beq lbl_fn_8014C540_00001968
    lwz r0, 0xc48(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001968
    li r3, 0x1
lbl_fn_8014C540_00001968:
    cmpwi r3, 0x0
    bne lbl_fn_8014C540_00001A4C
    lwz r3, 0xc4c(r28)
    addi r0, r3, 0x1
    stw r0, 0xc4c(r28)
    cmpwi r0, 0x1e
    ble lbl_fn_8014C540_00001A54
    addi r3, r28, 0x7d4
    li r4, 0x38
    li r5, -0x1
    bl fn_80134168
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0x4bc(r1)
    lis r4, lbl_80737808@ha
    lfd f9, lbl_80737808@l(r4)
    li r3, 0x0
    stw r0, 0x4b8(r1)
    lfs f7, lbl_80881B04
    lfd f8, 0x4b8(r1)
    lfs f0, 0x948(r28)
    fsubs f8, f8, f9
    fdivs f7, f8, f7
    fadds f0, f0, f7
    stfs f0, 0x948(r28)
    lwz r4, lbl_8087F610
    cmpwi r4, 0x0
    beq lbl_fn_8014C540_00001A00
    lwz r4, 0x540(r4)
    li r0, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_8014C540_000019F4
    cmpwi r4, 0x1
    beq lbl_fn_8014C540_000019F4
    li r0, 0x0
lbl_fn_8014C540_000019F4:
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001A00
    li r3, 0x1
lbl_fn_8014C540_00001A00:
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001A54
    lwz r3, lbl_8087F610
    li r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001A28
    lwz r3, 0x540(r3)
    cmpwi r3, 0x1
    bne lbl_fn_8014C540_00001A28
    li r0, 0x1
lbl_fn_8014C540_00001A28:
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001A38
    lfs f7, lbl_80881994
    b lbl_fn_8014C540_00001A3C
lbl_fn_8014C540_00001A38:
    lfs f7, lbl_80881B08
lbl_fn_8014C540_00001A3C:
    lfs f0, 0x948(r28)
    fadds f0, f0, f7
    stfs f0, 0x948(r28)
    b lbl_fn_8014C540_00001A54
lbl_fn_8014C540_00001A4C:
    li r0, 0x0
    stw r0, 0xc4c(r28)
lbl_fn_8014C540_00001A54:
    lwz r3, 0xfe0(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8014C540_00001A78
    lwz r0, 0x12a8(r28)
    srwi. r0, r0, 31
    bne lbl_fn_8014C540_00001A88
    subi r0, r3, 0x1
    stw r0, 0xfe0(r28)
    b lbl_fn_8014C540_00001A88
lbl_fn_8014C540_00001A78:
    li r0, 0x0
    stw r0, 0xfdc(r28)
    stw r0, 0xfe0(r28)
    stw r0, 0xfe4(r28)
lbl_fn_8014C540_00001A88:
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001B78
    lwz r4, lbl_8087F430
    li r27, 0x0
    li r0, 0x0
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8014C540_00001ABC
    lwz r4, 0x54e4(r4)
    cmpwi r4, 0x8
    bne lbl_fn_8014C540_00001ABC
    li r3, 0x1
lbl_fn_8014C540_00001ABC:
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001AD4
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001AD4
    li r0, 0x1
lbl_fn_8014C540_00001AD4:
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001AF0
    lwz r3, lbl_8087F540
    bl fn_80481654
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001AF0
    li r27, 0x1
lbl_fn_8014C540_00001AF0:
    lwz r3, lbl_8087F048
    mr r4, r28
    bl fn_8010C00C
    lwz r3, 0x12a8(r28)
    extrwi. r0, r3, 1, 13
    beq lbl_fn_8014C540_00001B44
    lwz r0, 0x7e0(r28)
    rlwinm r3, r0, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    bne lbl_fn_8014C540_00001B24
    cmpwi r27, 0x0
    beq lbl_fn_8014C540_00001B78
lbl_fn_8014C540_00001B24:
    lwz r0, 0x12a8(r28)
    mr r4, r28
    li r5, 0x1
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x12a8(r28)
    lwz r3, lbl_8087F048
    bl fn_80107CA8
    b lbl_fn_8014C540_00001B78
lbl_fn_8014C540_00001B44:
    lwz r0, 0x7e0(r28)
    rlwinm r4, r0, 0, 11, 11
    subis r0, r4, 0x10
    cmplwi r0, 0x0
    bne lbl_fn_8014C540_00001B78
    cmpwi r27, 0x0
    bne lbl_fn_8014C540_00001B78
    oris r0, r3, 0x4
    stw r0, 0x12a8(r28)
    mr r4, r28
    addi r5, r28, 0xb0
    lwz r3, lbl_8087F048
    bl fn_80107BE8
lbl_fn_8014C540_00001B78:
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_000020EC
    lwz r0, 0x12d0(r28)
    addi r4, r28, 0x12d4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8014C540_00001BCC
lbl_fn_8014C540_00001B98:
    lwz r5, 0x0(r4)
    lwz r0, 0xac(r5)
    andis. r3, r0, 0x44
    subis r0, r3, 0x44
    cmplwi r0, 0x0
    bne lbl_fn_8014C540_00001BC4
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    ble lbl_fn_8014C540_00001BC4
    bl fn_80219E6C
    b lbl_fn_8014C540_00001BD0
lbl_fn_8014C540_00001BC4:
    addi r4, r4, 0x14
    bdnz lbl_fn_8014C540_00001B98
lbl_fn_8014C540_00001BCC:
    li r3, 0x0
lbl_fn_8014C540_00001BD0:
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_000020EC
    lwz r0, 0x12d0(r28)
    addi r4, r28, 0x12d4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8014C540_00001C20
lbl_fn_8014C540_00001BEC:
    lwz r5, 0x0(r4)
    lwz r0, 0xac(r5)
    andis. r3, r0, 0x44
    subis r0, r3, 0x44
    cmplwi r0, 0x0
    bne lbl_fn_8014C540_00001C18
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    ble lbl_fn_8014C540_00001C18
    bl fn_80219E6C
    b lbl_fn_8014C540_00001C24
lbl_fn_8014C540_00001C18:
    addi r4, r4, 0x14
    bdnz lbl_fn_8014C540_00001BEC
lbl_fn_8014C540_00001C20:
    li r3, 0x0
lbl_fn_8014C540_00001C24:
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_000020EC
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_000020EC
    psq_l f1, 0x528(r28), 0, 0
    li r0, 0x0
    lfs f2, 0x530(r28)
    addi r4, r1, 0x58
    stfs f2, 0x60(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x58(r3)
    stfs f0, 0x64(r1)
    lwz r3, 0x70(r3)
    stw r0, 0x424(r1)
    addis r30, r3, 0x2
    stw r0, 0x428(r1)
    subi r30, r30, 0x7960
    stw r0, 0x42c(r1)
    stw r0, 0x430(r1)
    bl fn_80219E6C
    lwz r4, lbl_8087F8A0
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_fn_8014C540_00001C90
    lwz r29, 0x48(r4)
    b lbl_fn_8014C540_00001EAC
lbl_fn_8014C540_00001C90:
    li r29, 0x0
    b lbl_fn_8014C540_00001EAC
lbl_fn_8014C540_00001C98:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8014C540_00001CC4
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8014C540_00001CC4
    li r5, 0x1
lbl_fn_8014C540_00001CC4:
    cmpwi r5, 0x0
    beq lbl_fn_8014C540_00001CE0
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8014C540_00001CE0
    li r3, 0x1
lbl_fn_8014C540_00001CE0:
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001D14
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8014C540_00001D08
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_8014C540_00001D08
    li r3, 0x1
lbl_fn_8014C540_00001D08:
    cmpwi r3, 0x0
    bne lbl_fn_8014C540_00001D14
    li r4, 0x1
lbl_fn_8014C540_00001D14:
    cmpwi r4, 0x0
    beq lbl_fn_8014C540_00001EA8
    mr r3, r29
    bl fn_8015EB2C
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001EA8
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8014C540_00001D4C
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_8014C540_00001D4C
    li r3, 0x1
lbl_fn_8014C540_00001D4C:
    cmpwi r3, 0x0
    bne lbl_fn_8014C540_00001EA8
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_8014C540_00001EA8
    cmplw r29, r28
    beq lbl_fn_8014C540_00001DC4
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001D8C
    lwz r0, 0x540(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_00001D8C
    li r3, 0x0
    b lbl_fn_8014C540_00001E54
lbl_fn_8014C540_00001D8C:
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8014C540_00001DBC
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8014C540_00001DBC
    lwz r3, lbl_8087F0A8
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001DC4
lbl_fn_8014C540_00001DBC:
    li r3, 0x0
    b lbl_fn_8014C540_00001E54
lbl_fn_8014C540_00001DC4:
    lwz r0, 0xf14(r29)
    cmpwi r0, 0x0
    blt lbl_fn_8014C540_00001DEC
    lwz r3, 0xf14(r28)
    cmpwi r3, 0x0
    blt lbl_fn_8014C540_00001DEC
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8014C540_00001E54
lbl_fn_8014C540_00001DEC:
    lwz r5, 0x48(r28)
    li r3, 0x1
    lwz r6, 0x48(r29)
    li r4, 0x1
    cmpw r6, r5
    beq lbl_fn_8014C540_00001E28
    cmpwi r6, 0x0
    li r0, 0x0
    bne lbl_fn_8014C540_00001E1C
    cmpwi r5, 0x3
    bne lbl_fn_8014C540_00001E1C
    li r0, 0x1
lbl_fn_8014C540_00001E1C:
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_00001E28
    li r4, 0x0
lbl_fn_8014C540_00001E28:
    cmpwi r4, 0x0
    bne lbl_fn_8014C540_00001E54
    cmpwi r6, 0x3
    li r0, 0x0
    bne lbl_fn_8014C540_00001E48
    cmpwi r5, 0x0
    bne lbl_fn_8014C540_00001E48
    li r0, 0x1
lbl_fn_8014C540_00001E48:
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_00001E54
    li r3, 0x0
lbl_fn_8014C540_00001E54:
    cmpwi r3, 0x0
    bne lbl_fn_8014C540_00001EA8
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801533C8
    cmpwi r3, 0x0
    bne lbl_fn_8014C540_00001EA8
    addi r3, r1, 0x58
    addi r4, r29, 0x614
    bl fn_80051A88
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001EA8
    lwz r3, lbl_8087F048
    mr r4, r28
    mr r5, r29
    mr r7, r31
    mr r8, r30
    li r6, 0x0
    li r9, 0x1e
    bl fn_800FC410
lbl_fn_8014C540_00001EA8:
    lwz r29, 0x14ac(r29)
lbl_fn_8014C540_00001EAC:
    cmpwi r29, 0x0
    bne lbl_fn_8014C540_00001C98
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001EC8
    lwz r29, 0x48(r3)
    b lbl_fn_8014C540_000020E4
lbl_fn_8014C540_00001EC8:
    li r29, 0x0
    b lbl_fn_8014C540_000020E4
lbl_fn_8014C540_00001ED0:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8014C540_00001EFC
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8014C540_00001EFC
    li r5, 0x1
lbl_fn_8014C540_00001EFC:
    cmpwi r5, 0x0
    beq lbl_fn_8014C540_00001F18
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8014C540_00001F18
    li r3, 0x1
lbl_fn_8014C540_00001F18:
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001F4C
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8014C540_00001F40
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_8014C540_00001F40
    li r3, 0x1
lbl_fn_8014C540_00001F40:
    cmpwi r3, 0x0
    bne lbl_fn_8014C540_00001F4C
    li r4, 0x1
lbl_fn_8014C540_00001F4C:
    cmpwi r4, 0x0
    beq lbl_fn_8014C540_000020E0
    mr r3, r29
    bl fn_8015EB2C
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_000020E0
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8014C540_00001F84
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_8014C540_00001F84
    li r3, 0x1
lbl_fn_8014C540_00001F84:
    cmpwi r3, 0x0
    bne lbl_fn_8014C540_000020E0
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_8014C540_000020E0
    cmplw r29, r28
    beq lbl_fn_8014C540_00001FFC
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_00001FC4
    lwz r0, 0x540(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_00001FC4
    li r3, 0x0
    b lbl_fn_8014C540_0000208C
lbl_fn_8014C540_00001FC4:
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8014C540_00001FF4
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8014C540_00001FF4
    lwz r3, lbl_8087F0A8
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8014C540_00001FFC
lbl_fn_8014C540_00001FF4:
    li r3, 0x0
    b lbl_fn_8014C540_0000208C
lbl_fn_8014C540_00001FFC:
    lwz r0, 0xf14(r29)
    cmpwi r0, 0x0
    blt lbl_fn_8014C540_00002024
    lwz r3, 0xf14(r28)
    cmpwi r3, 0x0
    blt lbl_fn_8014C540_00002024
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8014C540_0000208C
lbl_fn_8014C540_00002024:
    lwz r5, 0x48(r28)
    li r3, 0x1
    lwz r6, 0x48(r29)
    li r4, 0x1
    cmpw r6, r5
    beq lbl_fn_8014C540_00002060
    cmpwi r6, 0x0
    li r0, 0x0
    bne lbl_fn_8014C540_00002054
    cmpwi r5, 0x3
    bne lbl_fn_8014C540_00002054
    li r0, 0x1
lbl_fn_8014C540_00002054:
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_00002060
    li r4, 0x0
lbl_fn_8014C540_00002060:
    cmpwi r4, 0x0
    bne lbl_fn_8014C540_0000208C
    cmpwi r6, 0x3
    li r0, 0x0
    bne lbl_fn_8014C540_00002080
    cmpwi r5, 0x0
    bne lbl_fn_8014C540_00002080
    li r0, 0x1
lbl_fn_8014C540_00002080:
    cmpwi r0, 0x0
    bne lbl_fn_8014C540_0000208C
    li r3, 0x0
lbl_fn_8014C540_0000208C:
    cmpwi r3, 0x0
    bne lbl_fn_8014C540_000020E0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801533C8
    cmpwi r3, 0x0
    bne lbl_fn_8014C540_000020E0
    addi r3, r1, 0x58
    addi r4, r29, 0x614
    bl fn_80051A88
    cmpwi r3, 0x0
    beq lbl_fn_8014C540_000020E0
    lwz r3, lbl_8087F048
    mr r4, r28
    mr r5, r29
    mr r7, r31
    mr r8, r30
    li r6, 0x0
    li r9, 0x1e
    bl fn_800FC410
lbl_fn_8014C540_000020E0:
    lwz r29, 0x14ac(r29)
lbl_fn_8014C540_000020E4:
    cmpwi r29, 0x0
    bne lbl_fn_8014C540_00001ED0
lbl_fn_8014C540_000020EC:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8014C540_0000211C
    lwz r3, lbl_8087F0A8
    lfs f0, lbl_8088196C
    lfs f7, 0x414(r3)
    fcmpu cr0, f0, f7
    beq lbl_fn_8014C540_0000211C
    lfs f0, lbl_808819D4
    addi r3, r28, 0x7d4
    fdivs f1, f7, f0
    bl fn_8012F188
lbl_fn_8014C540_0000211C:
    addi r11, r1, 0x4e0
    bl _restgpr_27
    lwz r0, 0x4e4(r1)
    mtlr r0
    addi r1, r1, 0x4e0
    blr
}
