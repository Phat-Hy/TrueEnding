#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_8011FC10(void);
extern void fn_801231D0(void);
extern void fn_8012476C(void);
extern void fn_801446F0(void);
extern void fn_80154344(void);
extern void fn_80155DAC(void);
extern void fn_80164DCC(void);
extern void fn_8016DA4C(void);
extern void fn_801750FC(void);
extern void fn_8018F81C(void);
extern void fn_8018F84C(void);
extern void fn_80191960(void);
extern void fn_8019198C(void);
extern void fn_80192758(void);
extern void fn_801A2A48(void);
extern void fn_801AD34C(void);
extern void fn_801C3414(void);
extern void fn_801C3458(void);
extern void fn_802CCA0C(void);
extern void fn_80373148(void);
extern void fn_803FB830(void);
extern void fn_804F5CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8073A088[];
extern u8 lbl_8073A168[];
extern u8 lbl_8077DC48[];
extern u8 lbl_8077EFB0[];
extern u8 lbl_8077EFBC[];
extern u8 lbl_8077EFC8[];
extern u8 lbl_8077EFD0[];
extern u8 lbl_8077F050[];
extern u8 lbl_8077F158[];
extern u8 lbl_8077F178[];
extern u8 lbl_8077F184[];
extern u8 lbl_8077F190[];
extern u8 lbl_8077F210[];
extern u8 lbl_8077F288[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7B68[];
extern u8 lbl_807C7B90[];
extern u8 lbl_807C7BD0[];
extern u8 lbl_807C7BDC[];
extern u8 lbl_807C7BE8[];
extern u8 lbl_807C7BF0[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0B9;
extern u32 lbl_8087F0BE;
extern u32 lbl_8087F0C8;
extern u32 lbl_8087F0D0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F610;
extern u32 lbl_80882130;
extern u32 lbl_80882134;
extern u32 lbl_80882138;
extern u32 lbl_8088213C;
extern u32 lbl_80882148;
extern u32 lbl_8088214C;
extern u32 lbl_80882150;
extern u32 lbl_80882154;
extern u32 lbl_80882158;
extern u32 lbl_8088215C;
extern u32 lbl_80882160;
extern u32 lbl_80882168;
extern u32 lbl_8088216C;
extern u32 lbl_80882170;
extern u32 lbl_80882174;

/* Function declarations */
void fn_801A10CC(void);
void fn_801A13FC(void);
void fn_801A142C(void);
void fn_801A1548(void);
void fn_801A17A4(void);
void fn_801A1854(void);
void fn_801A1BE4(void);
void fn_801A1D5C(void);
void fn_801A1D9C(void);
void fn_801A2058(void);
void fn_801A21A4(void);
void fn_801A21AC(void);
void fn_801A21EC(void);
void fn_801A222C(void);
void fn_801A226C(void);
void fn_801A2290(void);
void fn_801A2414(void);
void fn_801A24E0(void);
void fn_801A24E4(void);
void fn_801A28FC(void);
void fn_801A292C(void);

asm void fn_801A10CC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_27
    lbz r0, 0xc(r4)
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x0
    beq lbl_fn_801A10CC_00000314
    lis r5, lbl_8073A088@ha
    li r3, 0x30
    addi r5, r5, lbl_8073A088@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_801A10CC_00000194
    lwz r4, 0x4(r31)
    bl fn_801C3414
    lis r3, lbl_8077EFD0@ha
    li r29, 0x0
    addi r3, r3, lbl_8077EFD0@l
    stw r3, 0x0(r28)
    li r3, 0x21
    li r0, 0x1
    stw r29, 0x2c(r28)
    li r4, 0x0
    lfs f0, lbl_80882130
    li r5, 0x6f
    lwz r8, 0x4(r28)
    li r6, 0x0
    lfs f1, lbl_80882134
    li r7, 0x0
    stw r3, 0x560(r8)
    li r8, 0x1
    lfs f2, lbl_80882138
    lwz r3, 0x4(r28)
    stw r0, 0x3fc(r3)
    addi r27, r3, 0xb0
    mr r3, r27
    stfs f0, 0x24c(r27)
    bl fn_80097C08
    lfs f3, lbl_80882130
    addi r3, r1, 0x88
    stfs f3, 0x238(r27)
    li r4, 0x79
    lfs f0, lbl_80882134
    lwz r5, 0x4(r28)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x28
    addi r3, r1, 0x88
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_80882148
    addi r3, r1, 0x10
    lfs f3, 0x2c(r1)
    lfs f0, 0x28(r1)
    fmuls f7, f3, f4
    lwz r4, 0x4(r28)
    fmuls f6, f0, f4
    lfs f5, 0x30(r1)
    lfs f0, 0x528(r4)
    fmuls f5, f5, f4
    lfs f3, 0x52c(r4)
    fadds f0, f0, f6
    stfs f6, 0x1c(r1)
    fadds f4, f3, f7
    lfs f3, 0x530(r4)
    stfs f0, 0x10(r1)
    fadds f2, f3, f5
    stfs f4, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r28), 0, 0
    stfs f2, 0x10(r28)
    lwz r3, 0x4(r28)
    stfs f7, 0x20(r1)
    lwz r3, 0x1208(r3)
    stfs f5, 0x24(r1)
    stfs f2, 0x18(r1)
    bl fn_803FB830
    stfs f1, 0x28(r28)
    lwz r3, 0x4(r28)
    lwz r0, 0x638(r3)
    stw r0, 0x63c(r3)
    stw r29, 0x638(r3)
    lwz r3, 0x4(r28)
    lfs f2, 0x10(r28)
    addi r3, r3, 0xf6c
    psq_l f1, 0x8(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lwz r3, 0x4(r28)
    lfs f0, 0x28(r28)
    stfs f0, 0xf78(r3)
lbl_fn_801A10CC_00000194:
    lis r3, lbl_8077EFB0@ha
    lwzu r5, lbl_8077EFB0@l(r3)
    lwz r6, 0x4(r31)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r30)
    lbz r0, lbl_8087F0C8
    stw r28, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r3, 0x48(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r3, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r28, 0x84(r1)
    bne lbl_fn_801A10CC_00000218
    lis r6, lbl_807C7BE8@ha
    lis r4, fn_801A13FC@ha
    lis r3, fn_801A142C@ha
    li r0, 0x1
    addi r3, r3, fn_801A142C@l
    addi r5, r6, lbl_807C7BE8@l
    addi r4, r4, fn_801A13FC@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BE8@l(r6)
    stb r0, lbl_8087F0C8
lbl_fn_801A10CC_00000218:
    lwz r7, 0x74(r1)
    addi r3, r1, 0x60
    lwz r6, 0x78(r1)
    lwz r5, 0x7c(r1)
    lwz r4, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r7, 0x60(r1)
    stw r6, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A10CC_000002EC
    lwz r7, 0x60(r1)
    li r3, 0x14
    lwz r6, 0x64(r1)
    lwz r5, 0x68(r1)
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_801A10CC_000002B0
    lis r3, __files@ha
    lis r4, lbl_8077F158@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F158@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A10CC_000002B0:
    cmpwi r28, 0x0
    beq lbl_fn_801A10CC_000002E0
    lwz r0, 0x4c(r1)
    stw r0, 0x0(r28)
    lwz r0, 0x50(r1)
    stw r0, 0x4(r28)
    lwz r0, 0x54(r1)
    stw r0, 0x8(r28)
    lwz r0, 0x58(r1)
    stw r0, 0xc(r28)
    lwz r0, 0x5c(r1)
    stw r0, 0x10(r28)
lbl_fn_801A10CC_000002E0:
    stw r28, 0x4(r30)
    li r0, 0x1
    b lbl_fn_801A10CC_000002F0
lbl_fn_801A10CC_000002EC:
    li r0, 0x0
lbl_fn_801A10CC_000002F0:
    cmpwi r0, 0x0
    beq lbl_fn_801A10CC_00000308
    lis r3, lbl_807C7BE8@ha
    addi r3, r3, lbl_807C7BE8@l
    stw r3, 0x0(r30)
    b lbl_fn_801A10CC_00000318
lbl_fn_801A10CC_00000308:
    li r0, 0x0
    stw r0, 0x0(r30)
    b lbl_fn_801A10CC_00000318
lbl_fn_801A10CC_00000314:
    bl fn_80192758
lbl_fn_801A10CC_00000318:
    addi r11, r1, 0xd0
    bl _restgpr_27
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_801A13FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A142C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801A142C_00000398
    lis r3, lbl_8077EFC8@ha
    addi r3, r3, lbl_8077EFC8@l
    stw r3, 0x0(r4)
    b lbl_fn_801A142C_00000460
lbl_fn_801A142C_00000398:
    cmpwi r5, 0x0
    bne lbl_fn_801A142C_00000410
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A142C_000003D8
    lis r3, __files@ha
    lis r4, lbl_8077F158@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F158@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A142C_000003D8:
    cmpwi r30, 0x0
    beq lbl_fn_801A142C_00000408
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801A142C_00000408:
    stw r30, 0x0(r29)
    b lbl_fn_801A142C_00000460
lbl_fn_801A142C_00000410:
    cmpwi r5, 0x1
    bne lbl_fn_801A142C_0000042C
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801A142C_00000460
lbl_fn_801A142C_0000042C:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077EFC8@ha
    lwz r4, lbl_8077EFC8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801A142C_00000458
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801A142C_00000460
lbl_fn_801A142C_00000458:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801A142C_00000460:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A1548(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lwz r5, lbl_8087F610
    mr r30, r3
    cmpwi r5, 0x0
    beq lbl_fn_801A1548_000006C0
    lwz r4, 0x4(r3)
    lwz r0, 0x1208(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801A1548_000006C0
    lbz r0, 0xe(r3)
    cmplwi r0, 0x1
    bne lbl_fn_801A1548_000004D8
    lwz r4, 0x8(r30)
    mr r3, r5
    lwz r0, 0x524(r4)
    clrlwi r4, r0, 24
    bl fn_804F5CA0
    li r0, 0x0
    stb r0, 0xe(r30)
lbl_fn_801A1548_000004D8:
    lfs f3, lbl_80882134
    li r6, 0x0
    li r4, 0x3
    lbz r0, lbl_8087EE74
    stw r6, 0xc(r1)
    li r3, -0x1
    extsb. r0, r0
    addi r5, r1, 0x1c
    stw r6, 0x10(r1)
    lfs f0, lbl_8088213C
    stw r6, 0x14(r1)
    stw r6, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stw r4, 0x8(r1)
    lwz r0, 0x4(r30)
    stw r0, 0x18(r1)
    stw r3, 0x10(r1)
    lwz r3, 0x8(r30)
    lfs f2, 0x74(r3)
    psq_l f1, 0x6c(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    fadds f0, f3, f0
    stfs f0, 0x20(r1)
    bne lbl_fn_801A1548_00000578
    lis r3, lbl_807C6BB8@ha
    stwu r6, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C7BDC@ha
    stw r6, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    stw r6, 0x8(r3)
    addi r5, r5, lbl_807C7BDC@l
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_801A1548_00000578:
    lbz r0, lbl_8087EE74
    lis r3, lbl_807C6BB8@ha
    addi r3, r3, lbl_807C6BB8@l
    extsb. r0, r0
    lwz r31, 0xc(r3)
    bne lbl_fn_801A1548_000005C0
    li r0, 0x0
    li r29, 0x1
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C7BDC@ha
    stw r0, 0x0(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7BDC@l
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_801A1548_000005C0:
    lbz r0, lbl_8087EE74
    lis r3, lbl_807C6BB8@ha
    addi r3, r3, lbl_807C6BB8@l
    li r29, 0x1
    extsb. r0, r0
    stw r29, 0xc(r3)
    bne lbl_fn_801A1548_00000608
    li r0, 0x0
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C7BDC@ha
    stw r0, 0x0(r3)
    addi r4, r4, fn_8003EFB0@l
    stw r0, 0x4(r3)
    addi r5, r5, lbl_807C7BDC@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_801A1548_00000608:
    lis r29, lbl_807C6BB8@ha
    lwz r28, 0x8(r30)
    addi r29, r29, lbl_807C6BB8@l
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801A1548_00000674
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_801A1548_00000668
lbl_fn_801A1548_0000062C:
    lwz r0, 0x0(r29)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_801A1548_00000648
    cmpwi r0, 0xb
    bne lbl_fn_801A1548_00000660
lbl_fn_801A1548_00000648:
    lwz r12, 0x4(r3)
    mr r4, r28
    addi r5, r1, 0x8
    li r3, 0xb
    mtctr r12
    bctrl
lbl_fn_801A1548_00000660:
    addi r27, r27, 0x1
    addi r30, r30, 0x8
lbl_fn_801A1548_00000668:
    lwz r0, 0x4(r29)
    cmpw r27, r0
    blt lbl_fn_801A1548_0000062C
lbl_fn_801A1548_00000674:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_801A1548_000006B4
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C7BDC@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7BDC@l
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_801A1548_000006B4:
    lis r3, lbl_807C6BB8@ha
    addi r3, r3, lbl_807C6BB8@l
    stw r31, 0xc(r3)
lbl_fn_801A1548_000006C0:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801A17A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    fmr f3, f1
    lis r6, lbl_8077F050@ha
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8077F050@l
    psq_l f1, 0x0(r5), 0, 0
    li r9, 0x22
    stw r31, 0xc(r1)
    li r0, 0x1
    lfs f2, 0x8(r5)
    li r5, 0x70
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f0, lbl_80882130
    li r7, 0x0
    psq_st f1, 0x8(r3), 0, 0
    li r8, 0x1
    lfs f1, lbl_80882134
    stfs f2, 0x10(r3)
    lfs f2, lbl_80882138
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stfs f3, 0x14(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882130
    stfs f0, 0x238(r31)
    lwz r3, 0x4(r30)
    bl fn_801446F0
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A1854(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lfs f0, lbl_8088214C
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    lwz r4, 0x4(r3)
    lfs f3, 0x2e4(r4)
    addi r3, r4, 0xb0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801A1854_000009C8
    lwz r0, 0x1208(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801A1854_000009C8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801A1854_0000094C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_801A1854_0000094C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xb
    bne lbl_fn_801A1854_0000094C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    bne lbl_fn_801A1854_0000094C
    lwz r3, lbl_8087F408
    li r4, 0x4
    bl fn_8011FC10
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801A1854_0000094C
    bl fn_802CCA0C
    cmpwi r3, 0x0
    beq lbl_fn_801A1854_0000094C
    lfs f1, 0x538(r30)
    addi r3, r1, 0xc0
    li r4, 0x79
    bl fn_805F8E70
    lis r5, lbl_807C7BD0@ha
    addi r4, r1, 0x2c
    addi r5, r5, lbl_807C7BD0@l
    addi r3, r1, 0xc0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    lfs f5, 0x530(r30)
    addi r3, r1, 0x20
    lfs f0, 0x34(r1)
    lfs f4, 0x52c(r30)
    fadds f6, f5, f0
    lfs f3, 0x30(r1)
    lfs f0, 0x10(r31)
    fadds f7, f4, f3
    lfs f3, 0xc(r31)
    fsubs f8, f6, f0
    lfs f5, 0x528(r30)
    lfs f4, 0x2c(r1)
    fsubs f3, f7, f3
    lfs f0, 0x8(r31)
    fadds f4, f5, f4
    stfs f7, 0x48(r1)
    stfs f4, 0x44(r1)
    fsubs f0, f4, f0
    stfs f6, 0x4c(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x14(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_801A1854_0000094C
    lfs f0, lbl_80882134
    li r30, 0x0
    addi r4, r1, 0x44
    stfs f0, 0x84(r1)
    lfs f2, 0x4c(r1)
    addi r5, r1, 0x84
    psq_l f1, 0x0(r4), 0, 0
    li r3, 0x6
    stfs f0, 0x88(r1)
    li r0, 0x32
    addi r4, r1, 0x70
    stw r30, 0x74(r1)
    stw r30, 0x78(r1)
    stw r30, 0x7c(r1)
    stw r30, 0x80(r1)
    stw r3, 0x70(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8c(r1)
    lwz r3, 0x4(r31)
    stw r3, 0x80(r1)
    stw r0, 0x74(r1)
    lwz r3, 0x1208(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r31)
    li r3, 0x0
    stw r30, 0x1208(r4)
    b lbl_fn_801A1854_00000AF8
lbl_fn_801A1854_0000094C:
    lfs f0, lbl_80882134
    li r30, 0x0
    li r3, 0x5
    stw r30, 0x54(r1)
    addi r5, r1, 0x64
    li r0, 0xff
    stw r30, 0x58(r1)
    addi r4, r1, 0x50
    stw r30, 0x5c(r1)
    stw r30, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stw r3, 0x50(r1)
    lwz r3, 0x4(r31)
    stw r3, 0x60(r1)
    psq_l f1, 0x8(r31), 0, 0
    lfs f2, 0x10(r31)
    stfs f2, 0x6c(r1)
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, 0x1208(r3)
    stb r0, 0x520(r3)
    lwz r3, 0x4(r31)
    lwz r3, 0x1208(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r31)
    stw r30, 0x1208(r3)
    b lbl_fn_801A1854_000009E8
lbl_fn_801A1854_000009C8:
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801A1854_000009E8
    li r3, 0x1
    b lbl_fn_801A1854_00000AF8
lbl_fn_801A1854_000009E8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801A1854_00000AF4
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_801A1854_00000AF4
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xb
    bne lbl_fn_801A1854_00000AF4
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    bne lbl_fn_801A1854_00000AF4
    lwz r3, lbl_8087F408
    li r4, 0x4
    bl fn_8011FC10
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801A1854_00000AF4
    bl fn_802CCA0C
    cmpwi r3, 0x0
    beq lbl_fn_801A1854_00000AF4
    lfs f1, 0x538(r30)
    addi r3, r1, 0x90
    li r4, 0x79
    bl fn_805F8E70
    lis r5, lbl_807C7BD0@ha
    addi r4, r1, 0x14
    addi r5, r5, lbl_807C7BD0@l
    addi r3, r1, 0x90
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f5, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x1c(r1)
    lfs f4, 0x52c(r30)
    fadds f6, f5, f0
    lfs f3, 0x18(r1)
    lfs f0, 0x10(r31)
    fadds f7, f4, f3
    lfs f3, 0xc(r31)
    fsubs f8, f6, f0
    lfs f5, 0x528(r30)
    lfs f4, 0x14(r1)
    fsubs f3, f7, f3
    lfs f0, 0x8(r31)
    fadds f4, f5, f4
    stfs f7, 0x3c(r1)
    stfs f4, 0x38(r1)
    fsubs f0, f4, f0
    stfs f6, 0x40(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f8, 0x10(r1)
    bl fn_805F9940
    lfs f0, 0x14(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_801A1854_00000AF4
    li r0, 0x1
    stw r0, 0x1544(r30)
lbl_fn_801A1854_00000AF4:
    li r3, 0x0
lbl_fn_801A1854_00000AF8:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801A1BE4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    mr r29, r3
    bl fn_801C3414
    lis r3, lbl_8077EFD0@ha
    li r31, 0x0
    addi r3, r3, lbl_8077EFD0@l
    stw r3, 0x0(r29)
    lwz r5, 0x4(r29)
    li r3, 0x21
    stw r31, 0x2c(r29)
    li r0, 0x1
    lfs f0, lbl_80882130
    li r4, 0x0
    stw r3, 0x560(r5)
    li r5, 0x6f
    lfs f1, lbl_80882134
    li r6, 0x0
    lwz r3, 0x4(r29)
    li r7, 0x0
    lfs f2, lbl_80882138
    li r8, 0x1
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f3, lbl_80882130
    addi r3, r1, 0x30
    stfs f3, 0x238(r30)
    li r4, 0x79
    lfs f0, lbl_80882134
    lwz r5, 0x4(r29)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x10(r1)
    addi r3, r1, 0x20
    lfs f4, lbl_80882148
    lfs f0, 0xc(r1)
    fmuls f5, f5, f4
    lwz r4, 0x4(r29)
    fmuls f6, f0, f4
    lfs f3, 0x8(r1)
    lfs f0, 0x530(r4)
    fmuls f4, f3, f4
    fadds f2, f0, f5
    lfs f3, 0x52c(r4)
    lfs f0, 0x528(r4)
    fadds f3, f3, f6
    stfs f4, 0x14(r1)
    fadds f0, f0, f4
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r29), 0, 0
    stfs f2, 0x10(r29)
    stfs f6, 0x18(r1)
    lwz r3, 0x1208(r4)
    stfs f5, 0x1c(r1)
    stfs f2, 0x28(r1)
    bl fn_803FB830
    stfs f1, 0x28(r29)
    mr r3, r29
    lwz r4, 0x4(r29)
    lwz r0, 0x638(r4)
    stw r0, 0x63c(r4)
    stw r31, 0x638(r4)
    lwz r4, 0x4(r29)
    lfs f2, 0x10(r29)
    addi r4, r4, 0xf6c
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lwz r4, 0x4(r29)
    lfs f0, 0x28(r29)
    stfs f0, 0xf78(r4)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801A1D5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A1D5C_00000CB8
    cmpwi r4, 0x0
    ble lbl_fn_801A1D5C_00000CB8
    bl dtor_80084684
lbl_fn_801A1D5C_00000CB8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A1D9C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    li r30, 0x0
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    lwz r4, 0x4(r3)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801A1D9C_00000F30
    lwz r3, lbl_8087F430
    li r29, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_801A1D9C_00000D9C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_801A1D9C_00000D9C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xb
    bne lbl_fn_801A1D9C_00000D9C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    bne lbl_fn_801A1D9C_00000D9C
    lwz r3, lbl_8087F408
    li r4, 0x4
    bl fn_8011FC10
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_801A1D9C_00000D9C
    bl fn_802CCA0C
    cmpwi r3, 0x0
    beq lbl_fn_801A1D9C_00000D9C
    psq_l f1, 0x528(r28), 0, 0
    lis r3, lbl_807C7BD0@ha
    lfs f2, 0x530(r28)
    addi r4, r1, 0x2c
    stfs f2, 0x34(r1)
    addi r3, r3, lbl_807C7BD0@l
    lfs f0, 0x4(r3)
    li r29, 0x1
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x28(r31)
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
lbl_fn_801A1D9C_00000D9C:
    cmpwi r29, 0x0
    beq lbl_fn_801A1D9C_00000DC0
    lfs f1, lbl_80882148
    mr r3, r31
    lfs f2, lbl_80882150
    addi r4, r1, 0x2c
    lfs f3, lbl_80882154
    bl fn_801C3458
    b lbl_fn_801A1D9C_00000DD8
lbl_fn_801A1D9C_00000DC0:
    lfs f1, lbl_80882148
    mr r3, r31
    lfs f2, lbl_80882150
    li r4, 0x0
    lfs f3, lbl_80882154
    bl fn_801C3458
lbl_fn_801A1D9C_00000DD8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801A1D9C_00000EE4
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_801A1D9C_00000EE4
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xb
    bne lbl_fn_801A1D9C_00000EE4
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    bne lbl_fn_801A1D9C_00000EE4
    lwz r3, lbl_8087F408
    li r4, 0x4
    bl fn_8011FC10
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_801A1D9C_00000EE4
    bl fn_802CCA0C
    cmpwi r3, 0x0
    beq lbl_fn_801A1D9C_00000EE4
    lfs f1, 0x538(r28)
    addi r3, r1, 0x40
    li r4, 0x79
    bl fn_805F8E70
    lis r5, lbl_807C7BD0@ha
    addi r4, r1, 0x14
    addi r5, r5, lbl_807C7BD0@l
    addi r3, r1, 0x40
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f5, 0x530(r28)
    addi r3, r1, 0x8
    lfs f0, 0x1c(r1)
    lfs f4, 0x52c(r28)
    fadds f6, f5, f0
    lfs f3, 0x18(r1)
    lfs f0, 0x10(r31)
    fadds f7, f4, f3
    lfs f3, 0xc(r31)
    fsubs f8, f6, f0
    lfs f5, 0x528(r28)
    lfs f4, 0x14(r1)
    fsubs f3, f7, f3
    lfs f0, 0x8(r31)
    fadds f4, f5, f4
    stfs f7, 0x24(r1)
    stfs f4, 0x20(r1)
    fsubs f0, f4, f0
    stfs f6, 0x28(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f8, 0x10(r1)
    bl fn_805F9940
    lfs f0, 0x28(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_801A1D9C_00000EE4
    li r0, 0x1
    stw r0, 0x1544(r28)
lbl_fn_801A1D9C_00000EE4:
    lwz r3, lbl_8087F0A8
    li r4, 0x21
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_801A1D9C_00000F0C
    li r0, 0x1
    stw r0, 0x2c(r31)
    li r30, 0x1
    b lbl_fn_801A1D9C_00000F30
lbl_fn_801A1D9C_00000F0C:
    lwz r3, lbl_8087F0A8
    li r4, 0x1f
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_801A1D9C_00000F30
    lwz r3, 0x4(r31)
    bl fn_801750FC
    li r30, 0x1
lbl_fn_801A1D9C_00000F30:
    lwz r5, 0x4(r31)
    li r0, 0x0
    mr r3, r30
    lwz r4, 0x638(r5)
    stw r4, 0x63c(r5)
    stw r0, 0x638(r5)
    lwz r4, 0x4(r31)
    lfs f2, 0x10(r31)
    addi r4, r4, 0xf6c
    psq_l f1, 0x8(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lwz r4, 0x4(r31)
    lfs f0, 0x28(r31)
    stfs f0, 0xf78(r4)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801A2058(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801A2058_000010C0
    lis r7, lbl_8077EFBC@ha
    lwzu r6, lbl_8077EFBC@l(r7)
    lwz r8, 0x4(r4)
    li r0, 0x0
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    stw r6, 0x34(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BE
    stw r5, 0x38(r1)
    extsb. r0, r0
    stw r4, 0x3c(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r8, 0x4c(r1)
    bne lbl_fn_801A2058_00001024
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
lbl_fn_801A2058_00001024:
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
    bne lbl_fn_801A2058_00001098
    lwz r5, 0x18(r1)
    addic. r6, r31, 0x4
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_801A2058_00001090
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_801A2058_00001090:
    li r0, 0x1
    b lbl_fn_801A2058_0000109C
lbl_fn_801A2058_00001098:
    li r0, 0x0
lbl_fn_801A2058_0000109C:
    cmpwi r0, 0x0
    beq lbl_fn_801A2058_000010B4
    lis r3, lbl_807C7B90@ha
    addi r3, r3, lbl_807C7B90@l
    stw r3, 0x0(r31)
    b lbl_fn_801A2058_000010C4
lbl_fn_801A2058_000010B4:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801A2058_000010C4
lbl_fn_801A2058_000010C0:
    bl fn_80192758
lbl_fn_801A2058_000010C4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801A21A4(void)
{
    nofralloc
    lbz r3, 0x24(r3)
    blr
}

asm void fn_801A21AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A21AC_00001108
    cmpwi r4, 0x0
    ble lbl_fn_801A21AC_00001108
    bl dtor_80084684
lbl_fn_801A21AC_00001108:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A21EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A21EC_00001148
    cmpwi r4, 0x0
    ble lbl_fn_801A21EC_00001148
    bl dtor_80084684
lbl_fn_801A21EC_00001148:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A222C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A222C_00001188
    cmpwi r4, 0x0
    ble lbl_fn_801A222C_00001188
    bl dtor_80084684
lbl_fn_801A222C_00001188:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A226C(void)
{
    nofralloc
    lis r4, lbl_807C7BD0@ha
    lfs f2, lbl_80882158
    addi r3, r4, lbl_807C7BD0@l
    lfs f1, lbl_8088215C
    lfs f0, lbl_80882160
    stfs f2, lbl_807C7BD0@l(r4)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_801A2290(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r9, lbl_8077F210@ha
    cmpwi r7, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1
    addi r9, r9, lbl_8077F210@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r4, 0x4(r3)
    stw r9, 0x0(r3)
    stw r6, 0xc(r3)
    stw r7, 0x10(r3)
    stw r8, 0x14(r3)
    stb r0, 0x18(r3)
    stb r0, 0x19(r3)
    stb r0, 0x1a(r3)
    bge lbl_fn_801A2290_00001220
    li r0, 0x20c
    stw r0, 0x10(r3)
lbl_fn_801A2290_00001220:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bge lbl_fn_801A2290_00001234
    li r0, 0x68
    stw r0, 0x14(r3)
lbl_fn_801A2290_00001234:
    lwz r4, 0x4(r3)
    li r5, 0x0
    li r0, 0x11
    stw r5, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    li r4, 0x1
    bl fn_80164DCC
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801A2290_0000127C
    lwz r0, 0x12a4(r3)
    clrlwi r0, r0, 1
    stw r0, 0x12a4(r3)
lbl_fn_801A2290_0000127C:
    lwz r3, 0x4(r30)
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A2290_00001290
    bl fn_801750FC
lbl_fn_801A2290_00001290:
    lwz r3, 0x4(r30)
    li r4, 0x0
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801A2290_000012B4
    lwz r0, 0xc48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A2290_000012B4
    li r4, 0x1
lbl_fn_801A2290_000012B4:
    cmpwi r4, 0x0
    beq lbl_fn_801A2290_000012C0
    bl fn_80154344
lbl_fn_801A2290_000012C0:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801A2290_000012D8
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801A2290_000012D8:
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_80882168
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    lfs f1, lbl_8088216C
    mr r3, r29
    stfs f0, 0x24c(r29)
    li r6, 0x1
    lfs f2, lbl_80882170
    li r7, 0x0
    lwz r5, 0x10(r30)
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882168
    mr r3, r30
    stfs f0, 0x238(r29)
    lwz r4, 0x4(r30)
    stw r31, 0x8(r30)
    stw r31, 0xf1c(r4)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A2414(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801A2414_000013C0
    lbz r0, 0x1a(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A2414_00001384
    lwz r4, lbl_8087F490
    li r0, 0x1
    stw r0, 0x728(r4)
lbl_fn_801A2414_00001384:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    ble lbl_fn_801A2414_000013C0
    lbz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A2414_000013C0
    lwz r3, lbl_8087F0A8
    li r4, 0x22
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_801A2414_000013C0
    lwz r3, 0xc(r31)
    subi r0, r3, 0x1
    stw r0, 0xc(r31)
lbl_fn_801A2414_000013C0:
    lwz r3, 0x4(r31)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801A2414_000013DC
    li r3, 0x1
    b lbl_fn_801A2414_00001400
lbl_fn_801A2414_000013DC:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_801A2414_000013FC
    lbz r0, 0x19(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801A2414_000013FC
    li r3, 0x1
    b lbl_fn_801A2414_00001400
lbl_fn_801A2414_000013FC:
    li r3, 0x0
lbl_fn_801A2414_00001400:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A24E0(void)
{
    nofralloc
    blr
}

asm void fn_801A24E4(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    mr r30, r4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_801A24E4_000015F0
    lis r5, lbl_8073A168@ha
    li r3, 0xc
    addi r5, r5, lbl_8073A168@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801A24E4_00001470
    lwz r4, 0x4(r30)
    lwz r5, 0x14(r30)
    bl fn_801A2A48
lbl_fn_801A24E4_00001470:
    lis r4, lbl_8077F178@ha
    lwzu r6, lbl_8077F178@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x10(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0D0
    stw r3, 0x14(r1)
    extsb. r0, r0
    stw r6, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r6, 0xb8(r1)
    stw r5, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r7, 0xc4(r1)
    stw r3, 0xc8(r1)
    bne lbl_fn_801A24E4_000014F4
    lis r6, lbl_807C7BF0@ha
    lis r4, fn_801A28FC@ha
    lis r3, fn_801A292C@ha
    li r0, 0x1
    addi r3, r3, fn_801A292C@l
    addi r5, r6, lbl_807C7BF0@l
    addi r4, r4, fn_801A28FC@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BF0@l(r6)
    stb r0, lbl_8087F0D0
lbl_fn_801A24E4_000014F4:
    lwz r7, 0xb8(r1)
    addi r3, r1, 0x90
    lwz r6, 0xbc(r1)
    lwz r5, 0xc0(r1)
    lwz r4, 0xc4(r1)
    lwz r0, 0xc8(r1)
    stw r7, 0x90(r1)
    stw r6, 0x94(r1)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r0, 0xa0(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A24E4_000015C8
    lwz r7, 0x90(r1)
    li r3, 0x14
    lwz r6, 0x94(r1)
    lwz r5, 0x98(r1)
    lwz r4, 0x9c(r1)
    lwz r0, 0xa0(r1)
    stw r7, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A24E4_0000158C
    lis r3, __files@ha
    lis r4, lbl_8077F288@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F288@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A24E4_0000158C:
    cmpwi r30, 0x0
    beq lbl_fn_801A24E4_000015BC
    lwz r0, 0x7c(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x80(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x84(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x88(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x8c(r1)
    stw r0, 0x10(r30)
lbl_fn_801A24E4_000015BC:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801A24E4_000015CC
lbl_fn_801A24E4_000015C8:
    li r0, 0x0
lbl_fn_801A24E4_000015CC:
    cmpwi r0, 0x0
    beq lbl_fn_801A24E4_000015E4
    lis r3, lbl_807C7BF0@ha
    addi r3, r3, lbl_807C7BF0@l
    stw r3, 0x0(r31)
    b lbl_fn_801A24E4_00001818
lbl_fn_801A24E4_000015E4:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801A24E4_00001818
lbl_fn_801A24E4_000015F0:
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801A24E4_0000180C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801A24E4_0000180C
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lfs f1, lbl_8088216C
    addi r3, r1, 0xd0
    lfs f0, lbl_80882174
    li r4, 0x79
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
    lwz r5, 0x4(r30)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x48
    addi r3, r1, 0xd0
    mr r5, r4
    bl fn_805F93C0
    lis r5, lbl_8073A168@ha
    li r3, 0x40
    addi r5, r5, lbl_8073A168@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801A24E4_0000168C
    lwz r4, 0x4(r30)
    addi r5, r1, 0x48
    li r6, -0x1
    li r7, 0x0
    bl fn_801AD34C
lbl_fn_801A24E4_0000168C:
    lis r4, lbl_8077F184@ha
    lwzu r6, lbl_8077F184@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0B9
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r4, 0xac(r1)
    stw r7, 0xb0(r1)
    stw r3, 0xb4(r1)
    bne lbl_fn_801A24E4_00001710
    lis r6, lbl_807C7B68@ha
    lis r4, fn_8018F81C@ha
    lis r3, fn_8018F84C@ha
    li r0, 0x1
    addi r3, r3, fn_8018F84C@l
    addi r5, r6, lbl_807C7B68@l
    addi r4, r4, fn_8018F81C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B68@l(r6)
    stb r0, lbl_8087F0B9
lbl_fn_801A24E4_00001710:
    lwz r7, 0xa4(r1)
    addi r3, r1, 0x68
    lwz r6, 0xa8(r1)
    lwz r5, 0xac(r1)
    lwz r4, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r0, 0x78(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A24E4_000017E4
    lwz r7, 0x68(r1)
    li r3, 0x14
    lwz r6, 0x6c(r1)
    lwz r5, 0x70(r1)
    lwz r4, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A24E4_000017A8
    lis r3, __files@ha
    lis r4, lbl_8077DC48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A24E4_000017A8:
    cmpwi r30, 0x0
    beq lbl_fn_801A24E4_000017D8
    lwz r0, 0x54(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x58(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x5c(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x60(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x64(r1)
    stw r0, 0x10(r30)
lbl_fn_801A24E4_000017D8:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801A24E4_000017E8
lbl_fn_801A24E4_000017E4:
    li r0, 0x0
lbl_fn_801A24E4_000017E8:
    cmpwi r0, 0x0
    beq lbl_fn_801A24E4_00001800
    lis r3, lbl_807C7B68@ha
    addi r3, r3, lbl_807C7B68@l
    stw r3, 0x0(r31)
    b lbl_fn_801A24E4_00001818
lbl_fn_801A24E4_00001800:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801A24E4_00001818
lbl_fn_801A24E4_0000180C:
    mr r3, r31
    mr r4, r30
    bl fn_80192758
lbl_fn_801A24E4_00001818:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801A28FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A292C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801A292C_00001898
    lis r3, lbl_8077F190@ha
    addi r3, r3, lbl_8077F190@l
    stw r3, 0x0(r4)
    b lbl_fn_801A292C_00001960
lbl_fn_801A292C_00001898:
    cmpwi r5, 0x0
    bne lbl_fn_801A292C_00001910
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A292C_000018D8
    lis r3, __files@ha
    lis r4, lbl_8077F288@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F288@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A292C_000018D8:
    cmpwi r30, 0x0
    beq lbl_fn_801A292C_00001908
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801A292C_00001908:
    stw r30, 0x0(r29)
    b lbl_fn_801A292C_00001960
lbl_fn_801A292C_00001910:
    cmpwi r5, 0x1
    bne lbl_fn_801A292C_0000192C
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801A292C_00001960
lbl_fn_801A292C_0000192C:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F190@ha
    lwz r4, lbl_8077F190@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801A292C_00001958
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801A292C_00001960
lbl_fn_801A292C_00001958:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801A292C_00001960:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
