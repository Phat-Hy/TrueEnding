#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80053BD0(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_80178018(void);
extern void fn_80178078(void);
extern void fn_8017AC3C(void);
extern void fn_80192758(void);
extern void fn_801A86C0(void);
extern void fn_801A86F0(void);
extern void fn_801A90BC(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8073B788[];
extern u8 lbl_8073B7DC[];
extern u8 lbl_8073B8E8[];
extern u8 lbl_8077FAF0[];
extern u8 lbl_80781D58[];
extern u8 lbl_80781D68[];
extern u8 lbl_80781DE0[];
extern u8 lbl_80781EF0[];
extern u8 lbl_807C7C28[];

/* Small data declarations */
extern u32 lbl_8087DA40;
extern u32 lbl_8087DA44;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0E2;
extern u32 lbl_8087F498;
extern u32 lbl_808827AC;
extern u32 lbl_808827B0;
extern u32 lbl_808827B8;
extern u32 lbl_808827BC;
extern u32 lbl_808827C8;
extern u32 lbl_808827CC;
extern u32 lbl_808827D0;
extern u32 lbl_808827D4;
extern u32 lbl_808827D8;
extern u32 lbl_808827DC;
extern u32 lbl_808827E8;
extern u32 lbl_808827F8;
extern u32 lbl_80882808;
extern u32 lbl_80882810;
extern u32 lbl_80882814;
extern u32 lbl_80882818;
extern u32 lbl_8088281C;
extern u32 lbl_80882820;
extern u32 lbl_80882824;
extern u32 lbl_80882828;
extern u32 lbl_8088282C;
extern u32 lbl_80882830;
extern u32 lbl_80882838;
extern u32 lbl_8088283C;
extern u32 lbl_80882840;

/* Function declarations */
void fn_801C59D4(void);
void fn_801C5A04(void);
void fn_801C5C50(void);
void fn_801C61EC(void);
void fn_801C6464(void);
void fn_801C6CC8(void);
void fn_801C6CDC(void);
void fn_801C6ED0(void);
void fn_801C6F10(void);
void fn_801C6F50(void);
void fn_801C6F90(void);
void fn_801C702C(void);
void fn_801C706C(void);
void fn_801C71A8(void);

asm void fn_801C59D4(void)
{
    nofralloc
    lwz r0, 0x2c(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_801C59D4_00000028
    lwz r3, 0x4(r3)
    lfs f0, lbl_80882818
    lfs f1, 0x2e4(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_801C59D4_00000028
    li r4, 0x1
lbl_fn_801C59D4_00000028:
    mr r3, r4
    blr
}

asm void fn_801C5A04(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r8, lbl_80781DE0@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x74(r1)
    addi r8, r8, lbl_80781DE0@l
    lfs f2, 0x8(r5)
    li r0, 0x61
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    mr r29, r7
    stw r4, 0x4(r3)
    stw r8, 0x0(r3)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    stw r6, 0x14(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    bl fn_80155DAC
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801C5A04_0000009C
    bl fn_801539E0
lbl_fn_801C5A04_0000009C:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_801C5A04_000000B8
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
lbl_fn_801C5A04_000000B8:
    lwz r30, 0x4(r31)
    li r4, 0x3
    lfs f1, lbl_808827AC
    addi r3, r30, 0xb0
    bl fn_80097CCC
    li r0, -0x1
    stw r0, 0x12bc(r30)
    li r0, 0x1
    lfs f3, lbl_808827B0
    lwz r3, 0x4(r31)
    cmpwi r29, -0x1
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    stfs f3, 0x2fc(r3)
    stfs f3, 0x2e8(r3)
    beq lbl_fn_801C5A04_00000120
    lfs f1, lbl_808827AC
    mr r3, r30
    lfs f2, lbl_808827B8
    mr r5, r29
    li r4, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C5A04_000001F0
lbl_fn_801C5A04_00000120:
    lwz r5, 0x4(r31)
    addi r3, r1, 0x30
    lfs f0, lbl_808827AC
    li r4, 0x79
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f3, 0x28(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x20
    addi r4, r31, 0x8
    bl fn_805F9990
    lfs f0, lbl_808827AC
    fcmpo cr0, f1, f0
    ble lbl_fn_801C5A04_00000194
    fmr f1, f0
    lfs f2, lbl_808827B8
    mr r3, r30
    li r4, 0x0
    li r5, 0x52
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C5A04_000001F0
lbl_fn_801C5A04_00000194:
    fmr f1, f0
    lfs f2, lbl_808827B8
    mr r3, r30
    li r4, 0x0
    li r5, 0x53
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, 0x10(r31)
    addi r3, r1, 0x14
    lfs f3, 0xc(r31)
    fneg f4, f0
    lfs f0, 0x8(r31)
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x1c(r1)
    frsp f2, f4
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    stfs f2, 0x10(r31)
lbl_fn_801C5A04_000001F0:
    lwz r4, 0x4(r31)
    addi r3, r1, 0x8
    lfs f2, lbl_808827AC
    stfs f2, 0x570(r4)
    stfs f2, 0x8(r1)
    lwz r4, 0x4(r31)
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r4), 0, 0
    stfs f2, 0x57c(r4)
    lwz r0, lbl_8087F498
    stfs f2, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_801C5A04_0000025C
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801C5A04_0000025C
    lwz r3, lbl_8087F498
    li r5, 0x13
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_808827B0
    lfs f2, lbl_808827F8
    bl fn_803EA77C
lbl_fn_801C5A04_0000025C:
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801C5C50(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    stw r31, 0x1ec(r1)
    stw r30, 0x1e8(r1)
    stw r29, 0x1e4(r1)
    mr r29, r3
    lwz r5, 0x14(r3)
    lwz r4, 0x4(r3)
    subi r0, r5, 0x1
    stw r0, 0x14(r3)
    addi r30, r4, 0xb0
    lwz r3, 0x48(r4)
    cmpwi r3, 0x0
    bne lbl_fn_801C5C50_0000053C
    cmpwi r0, 0x0
    bgt lbl_fn_801C5C50_0000054C
    addi r3, r1, 0xec
    bl fn_80178018
    lwz r0, 0x22c(r30)
    cmpwi r0, 0x52
    bne lbl_fn_801C5C50_00000310
    lfs f4, 0x10(r29)
    addi r4, r1, 0xd4
    lfs f3, 0xc(r29)
    lfs f0, 0x8(r29)
    fneg f4, f4
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0xdc(r1)
    stfs f0, 0xd4(r1)
    stfs f3, 0xd8(r1)
    b lbl_fn_801C5C50_00000314
lbl_fn_801C5C50_00000310:
    addi r4, r29, 0x8
lbl_fn_801C5C50_00000314:
    lfs f2, 0x8(r4)
    addi r3, r1, 0xe0
    psq_l f1, 0x0(r4), 0, 0
    addi r31, r1, 0xc8
    frsp f3, f2
    lfs f0, lbl_808827C8
    psq_st f1, 0x0(r3), 0, 0
    fabs f4, f3
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r31), 0, 0
    frsp f4, f4
    stfs f2, 0xd0(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_801C5C50_00000370
    lfs f3, 0xc8(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C5C50_00000364
    lfs f0, lbl_808827CC
    b lbl_fn_801C5C50_00000368
lbl_fn_801C5C50_00000364:
    lfs f0, lbl_808827D0
lbl_fn_801C5C50_00000368:
    stfs f0, 0x90(r1)
    b lbl_fn_801C5C50_00000384
lbl_fn_801C5C50_00000370:
    fmr f2, f3
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_801C5C50_00000384:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x168
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808827AC
    addi r4, r1, 0x80
    lfs f30, 0x170(r1)
    mr r5, r4
    lfs f31, 0x16c(r1)
    addi r3, r1, 0x198
    lfs f13, 0x168(r1)
    lfs f12, 0x180(r1)
    lfs f11, 0x17c(r1)
    lfs f10, 0x178(r1)
    lfs f9, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f7, 0x188(r1)
    lfs f6, 0x194(r1)
    lfs f5, 0x184(r1)
    lfs f4, 0x174(r1)
    lfs f0, lbl_808827B0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x198(r1)
    stfs f31, 0x19c(r1)
    stfs f30, 0x1a0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1a8(r1)
    stfs f11, 0x1ac(r1)
    stfs f12, 0x1b0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1b8(r1)
    stfs f8, 0x1bc(r1)
    stfs f9, 0x1c0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1a4(r1)
    stfs f5, 0x1b4(r1)
    stfs f6, 0x1c4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_808827C8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C5C50_000004A0
    lfs f3, 0x84(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C5C50_00000490
    lfs f0, lbl_808827CC
    b lbl_fn_801C5C50_00000494
lbl_fn_801C5C50_00000490:
    lfs f0, lbl_808827D0
lbl_fn_801C5C50_00000494:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_801C5C50_000004B4
lbl_fn_801C5C50_000004A0:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_801C5C50_000004B4:
    addi r3, r1, 0x8c
    lfs f4, lbl_808827AC
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8073B788@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f3, 0xf0(r1)
    lfs f0, 0xcc(r1)
    stfs f2, 0xd0(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8073B788@l(r3)
    stfs f4, 0x94(r1)
    bl fn_8068AEA8
    frsp f30, f1
    lfs f0, lbl_808827D4
    fcmpo cr0, f30, f0
    ble lbl_fn_801C5C50_00000500
    lfs f0, lbl_808827D8
    fsubs f30, f30, f0
lbl_fn_801C5C50_00000500:
    lfs f0, lbl_808827DC
    fcmpo cr0, f30, f0
    bge lbl_fn_801C5C50_00000514
    lfs f0, lbl_808827D8
    fadds f30, f30, f0
lbl_fn_801C5C50_00000514:
    lwz r3, 0x4(r29)
    bl fn_80178078
    lfs f0, lbl_8088281C
    fcmpo cr0, f1, f0
    ble lbl_fn_801C5C50_0000054C
    lfs f0, lbl_808827CC
    fcmpo cr0, f30, f0
    bge lbl_fn_801C5C50_0000054C
    li r3, 0x1
    b lbl_fn_801C5C50_000007EC
lbl_fn_801C5C50_0000053C:
    cmpwi r0, 0x0
    bgt lbl_fn_801C5C50_0000054C
    li r3, 0x1
    b lbl_fn_801C5C50_000007EC
lbl_fn_801C5C50_0000054C:
    lwz r0, 0x22c(r30)
    cmpwi r0, 0x52
    bne lbl_fn_801C5C50_000005E4
    lfs f3, 0x234(r30)
    lfs f0, lbl_808827F8
    fcmpo cr0, f3, f0
    bge lbl_fn_801C5C50_000005E4
    psq_l f1, 0x8(r29), 0, 0
    addi r3, r1, 0xa4
    lfs f2, 0x10(r29)
    mr r4, r3
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_805F98D0
    lfs f4, lbl_808827E8
    addi r3, r1, 0xbc
    lfs f3, 0xa8(r1)
    lfs f0, 0xa4(r1)
    fmuls f6, f3, f4
    lwz r4, 0x4(r29)
    fmuls f7, f0, f4
    lfs f5, 0xac(r1)
    lfs f0, 0x528(r4)
    fmuls f4, f5, f4
    lfs f3, 0x52c(r4)
    fsubs f0, f0, f7
    stfs f7, 0xb0(r1)
    fsubs f5, f3, f6
    lfs f3, 0x530(r4)
    stfs f0, 0xbc(r1)
    fsubs f2, f3, f4
    stfs f5, 0xc0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f6, 0xb4(r1)
    stfs f4, 0xb8(r1)
    stfs f2, 0xc4(r1)
    stfs f2, 0x530(r4)
lbl_fn_801C5C50_000005E4:
    lfs f30, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_801C5C50_00000608
    li r3, 0x1
    b lbl_fn_801C5C50_000007EC
lbl_fn_801C5C50_00000608:
    lfs f2, 0x10(r29)
    addi r31, r1, 0x98
    psq_l f1, 0x8(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_808827C8
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C5C50_00000654
    lfs f3, 0x98(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C5C50_00000648
    lfs f0, lbl_808827CC
    b lbl_fn_801C5C50_0000064C
lbl_fn_801C5C50_00000648:
    lfs f0, lbl_808827D0
lbl_fn_801C5C50_0000064C:
    stfs f0, 0x48(r1)
    b lbl_fn_801C5C50_00000668
lbl_fn_801C5C50_00000654:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C5C50_00000668:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xf8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808827AC
    addi r4, r1, 0x38
    lfs f31, 0x100(r1)
    mr r5, r4
    lfs f30, 0xfc(r1)
    addi r3, r1, 0x128
    lfs f13, 0xf8(r1)
    lfs f12, 0x110(r1)
    lfs f11, 0x10c(r1)
    lfs f10, 0x108(r1)
    lfs f9, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f7, 0x118(r1)
    lfs f6, 0x124(r1)
    lfs f5, 0x114(r1)
    lfs f4, 0x104(r1)
    lfs f0, lbl_808827B0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f3, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x128(r1)
    stfs f30, 0x12c(r1)
    stfs f31, 0x130(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x138(r1)
    stfs f11, 0x13c(r1)
    stfs f12, 0x140(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f9, 0x150(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x134(r1)
    stfs f5, 0x144(r1)
    stfs f6, 0x154(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808827C8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C5C50_00000784
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C5C50_00000774
    lfs f0, lbl_808827CC
    b lbl_fn_801C5C50_00000778
lbl_fn_801C5C50_00000774:
    lfs f0, lbl_808827D0
lbl_fn_801C5C50_00000778:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C5C50_00000798
lbl_fn_801C5C50_00000784:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C5C50_00000798:
    lfs f0, lbl_808827AC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    lfs f2, lbl_808827B0
    lwz r3, 0x4(r29)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r29)
    li r3, 0x0
    lfs f0, lbl_808827AC
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
lbl_fn_801C5C50_000007EC:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_801C61EC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r7, lbl_80781D68@ha
    lfs f0, lbl_808827AC
    stw r0, 0xa4(r1)
    addi r7, r7, lbl_80781D68@l
    li r0, 0x45
    stw r31, 0x9c(r1)
    mr r31, r5
    stw r30, 0x98(r1)
    mr r30, r3
    stw r29, 0x94(r1)
    stw r28, 0x90(r1)
    mr r28, r6
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stfs f0, 0x30(r3)
    stw r6, 0x34(r3)
    lwz r5, 0x560(r4)
    subi r5, r5, 0x68
    cntlzw r5, r5
    srwi r5, r5, 5
    stw r5, 0x38(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    bl fn_80155DAC
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801C61EC_00000898
    bl fn_801539E0
lbl_fn_801C61EC_00000898:
    lwz r29, 0x4(r30)
    li r4, 0x3
    lfs f1, lbl_808827AC
    addi r3, r29, 0xb0
    bl fn_80097CCC
    li r0, -0x1
    stw r0, 0x12bc(r29)
    lfs f1, lbl_808827AC
    li r4, 0x0
    lwz r3, 0x4(r30)
    li r6, 0x0
    lfs f2, lbl_808827B8
    li r7, 0x0
    addi r29, r3, 0xb0
    lwz r5, 0x488(r3)
    mr r3, r29
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x1
    stw r0, 0x34c(r29)
    lfs f0, lbl_808827B0
    mr r3, r29
    stfs f0, 0x24c(r29)
    li r4, 0x0
    lfs f0, lbl_80882820
    stfs f0, 0x238(r29)
    bl fn_80097D7C
    stfs f1, 0x234(r29)
    addi r3, r1, 0x60
    lfs f3, lbl_808827AC
    li r4, 0x79
    lfs f0, lbl_808827B0
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x44
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x44
    addi r4, r1, 0x38
    addi r5, r1, 0x50
    bl fn_805F99B0
    mr r4, r31
    addi r3, r1, 0x50
    bl fn_805F9990
    lfs f0, lbl_808827AC
    fcmpo cr0, f1, f0
    ble lbl_fn_801C61EC_000009D4
    lfs f3, 0x8(r31)
    addi r29, r1, 0x2c
    lfs f0, 0x58(r1)
    addi r5, r1, 0x20
    lfs f5, 0x4(r31)
    mr r3, r29
    fadds f2, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x0(r31)
    mr r4, r29
    lfs f0, 0x50(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x34(r1)
    stfs f2, 0x10(r30)
    psq_st f1, 0x8(r30), 0, 0
    b lbl_fn_801C61EC_00000A34
lbl_fn_801C61EC_000009D4:
    lfs f3, 0x8(r31)
    addi r29, r1, 0x14
    lfs f0, 0x58(r1)
    addi r5, r1, 0x8
    lfs f5, 0x4(r31)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x0(r31)
    mr r4, r29
    lfs f0, 0x50(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x1c(r1)
    stfs f2, 0x10(r30)
    psq_st f1, 0x8(r30), 0, 0
lbl_fn_801C61EC_00000A34:
    lwz r5, 0x4(r30)
    li r0, 0x0
    mr r3, r30
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x1c(r30)
    psq_st f1, 0x14(r30), 0, 0
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    stfs f2, 0x28(r30)
    psq_st f1, 0x20(r30), 0, 0
    lwz r4, 0x5c0(r5)
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r5)
    stw r0, 0x2c(r30)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_801C6464(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stw r31, 0x22c(r1)
    li r31, 0x0
    stw r30, 0x228(r1)
    mr r30, r3
    stw r29, 0x224(r1)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x2c(r3)
    lfs f3, 0x3a4(r4)
    lfs f0, 0x30(r3)
    cmpwi r0, 0x0
    lwz r4, 0x4(r3)
    fadds f0, f0, f3
    addi r29, r4, 0xb0
    stfs f0, 0x30(r3)
    beq lbl_fn_801C6464_00000AFC
    cmpwi r0, 0x1
    beq lbl_fn_801C6464_00000E8C
    cmpwi r0, 0x2
    beq lbl_fn_801C6464_00000F74
    b lbl_fn_801C6464_000012C4
lbl_fn_801C6464_00000AFC:
    lfs f0, 0x238(r29)
    mr r3, r29
    li r4, 0x0
    fabs f0, f0
    frsp f30, f0
    bl fn_80097D7C
    fdivs f4, f1, f30
    lfs f3, lbl_80882824
    lfs f0, 0x30(r30)
    fmuls f3, f3, f4
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    bne lbl_fn_801C6464_00000B70
    lwz r5, 0x4(r30)
    mr r3, r29
    lfs f1, lbl_808827AC
    li r4, 0x0
    lwz r5, 0x484(r5)
    li r6, 0x1
    lfs f2, lbl_808827B8
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x1
    stw r0, 0x34c(r29)
    lfs f0, lbl_808827B0
    stfs f0, 0x238(r29)
    stw r0, 0x2c(r30)
    b lbl_fn_801C6464_00000E8C
lbl_fn_801C6464_00000B70:
    lwz r3, 0x4(r30)
    lfs f3, lbl_808827AC
    stfs f3, 0x580(r3)
    lfs f0, lbl_80882828
    stfs f3, 0x584(r3)
    lfs f7, lbl_808827B0
    lfs f3, 0x30(r30)
    fmuls f0, f3, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_801C6464_00000B9C
    b lbl_fn_801C6464_00000BA0
lbl_fn_801C6464_00000B9C:
    fmr f7, f0
lbl_fn_801C6464_00000BA0:
    lfs f0, lbl_8087DA44
    addi r3, r1, 0x110
    lfs f4, lbl_8087DA40
    addi r4, r1, 0x104
    lfs f5, 0xc(r30)
    addi r5, r1, 0xb0
    fsubs f3, f0, f4
    lfs f0, 0x8(r30)
    lwz r6, 0x4(r30)
    addi r29, r1, 0xbc
    lfs f6, 0x10(r30)
    fmadds f9, f7, f3, f4
    lfs f4, 0x52c(r6)
    lfs f3, 0x528(r6)
    fmuls f7, f5, f9
    lfs f5, 0x530(r6)
    fmuls f8, f0, f9
    lfs f0, lbl_808827C8
    fmuls f6, f6, f9
    stfs f7, 0xcc(r1)
    fadds f4, f4, f7
    stfs f8, 0xc8(r1)
    fadds f5, f5, f6
    fadds f3, f3, f8
    stfs f4, 0x114(r1)
    stfs f3, 0x110(r1)
    fmr f2, f5
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lwz r3, 0x4(r30)
    lfs f3, 0x10(r30)
    lfs f2, 0x53c(r3)
    fneg f7, f3
    stfs f2, 0x10c(r1)
    lfs f3, 0x8(r30)
    lfs f4, 0xc(r30)
    frsp f2, f7
    psq_l f1, 0x534(r3), 0, 0
    fneg f3, f3
    psq_st f1, 0x0(r4), 0, 0
    fneg f4, f4
    fabs f8, f2
    stfs f3, 0xb0(r1)
    frsp f3, f8
    stfs f4, 0xb4(r1)
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f3, f0
    stfs f6, 0xd0(r1)
    stfs f5, 0x118(r1)
    stfs f7, 0xb8(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xc4(r1)
    bge lbl_fn_801C6464_00000C9C
    lfs f3, 0xbc(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C6464_00000C90
    lfs f0, lbl_808827CC
    b lbl_fn_801C6464_00000C94
lbl_fn_801C6464_00000C90:
    lfs f0, lbl_808827D0
lbl_fn_801C6464_00000C94:
    stfs f0, 0x90(r1)
    b lbl_fn_801C6464_00000CB0
lbl_fn_801C6464_00000C9C:
    frsp f2, f2
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_801C6464_00000CB0:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808827AC
    addi r4, r1, 0x80
    lfs f30, 0x1b0(r1)
    mr r5, r4
    lfs f31, 0x1ac(r1)
    addi r3, r1, 0x1d8
    lfs f13, 0x1a8(r1)
    lfs f12, 0x1c0(r1)
    lfs f11, 0x1bc(r1)
    lfs f10, 0x1b8(r1)
    lfs f9, 0x1d0(r1)
    lfs f8, 0x1cc(r1)
    lfs f7, 0x1c8(r1)
    lfs f6, 0x1d4(r1)
    lfs f5, 0x1c4(r1)
    lfs f4, 0x1b4(r1)
    lfs f0, lbl_808827B0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x208(r1)
    stfs f3, 0x20c(r1)
    stfs f3, 0x210(r1)
    stfs f0, 0x214(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x1d8(r1)
    stfs f31, 0x1dc(r1)
    stfs f30, 0x1e0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1e8(r1)
    stfs f11, 0x1ec(r1)
    stfs f12, 0x1f0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1f8(r1)
    stfs f8, 0x1fc(r1)
    stfs f9, 0x200(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1e4(r1)
    stfs f5, 0x1f4(r1)
    stfs f6, 0x204(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_808827C8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C6464_00000DCC
    lfs f3, 0x84(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C6464_00000DBC
    lfs f0, lbl_808827CC
    b lbl_fn_801C6464_00000DC0
lbl_fn_801C6464_00000DBC:
    lfs f0, lbl_808827D0
lbl_fn_801C6464_00000DC0:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_801C6464_00000DE0
lbl_fn_801C6464_00000DCC:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_801C6464_00000DE0:
    addi r3, r1, 0x8c
    lfs f4, lbl_808827AC
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8073B788@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f4
    lfs f0, 0x108(r1)
    lfs f3, 0xc0(r1)
    stfs f2, 0xc4(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8073B788@l(r3)
    stfs f4, 0x94(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808827D4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C6464_00000E2C
    lfs f0, lbl_808827D8
    fsubs f3, f3, f0
lbl_fn_801C6464_00000E2C:
    lfs f0, lbl_808827DC
    fcmpo cr0, f3, f0
    bge lbl_fn_801C6464_00000E40
    lfs f0, lbl_808827D8
    fadds f3, f3, f0
lbl_fn_801C6464_00000E40:
    lfs f0, lbl_80882808
    fcmpo cr0, f3, f0
    ble lbl_fn_801C6464_00000E54
    fmr f3, f0
    b lbl_fn_801C6464_00000E64
lbl_fn_801C6464_00000E54:
    lfs f0, lbl_80882814
    fcmpo cr0, f3, f0
    bge lbl_fn_801C6464_00000E64
    fmr f3, f0
lbl_fn_801C6464_00000E64:
    lfs f0, 0x108(r1)
    addi r3, r1, 0x104
    lwz r4, 0x4(r30)
    fadds f0, f0, f3
    lfs f2, 0x10c(r1)
    stfs f0, 0x108(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    b lbl_fn_801C6464_000012C4
lbl_fn_801C6464_00000E8C:
    lwz r4, 0x34(r30)
    addi r3, r1, 0xf8
    lfs f3, 0x1c(r30)
    lfs f0, 0x530(r4)
    lfs f5, 0x18(r30)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x14(r30)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xfc(r1)
    stfs f0, 0xf8(r1)
    stfs f6, 0x100(r1)
    bl fn_805F9940
    lfs f4, lbl_808827BC
    fcmpo cr0, f1, f4
    ble lbl_fn_801C6464_000012C4
    lwz r6, 0x4(r30)
    addi r4, r1, 0x120
    addi r5, r1, 0x12c
    li r3, 0x0
    psq_l f1, 0x528(r6), 0, 0
    lfs f2, 0x530(r6)
    stfs f2, 0x128(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0x124(r1)
    lfs f0, 0x130(r1)
    fadds f3, f3, f4
    stfs f2, 0x134(r1)
    fadds f0, f0, f4
    stfs f3, 0x124(r1)
    stfs f0, 0x130(r1)
    lwz r5, 0x34(r30)
    addi r5, r5, 0x5f4
    bl fn_80053BD0
    cmpwi r3, 0x0
    bne lbl_fn_801C6464_000012C4
    lwz r5, 0x4(r30)
    mr r3, r29
    lfs f1, lbl_808827AC
    li r4, 0x0
    lwz r5, 0x488(r5)
    li r6, 0x1
    lfs f2, lbl_808827B8
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x1
    stw r0, 0x34c(r29)
    lfs f0, lbl_8088282C
    li r0, 0x2
    stfs f0, 0x238(r29)
    stw r0, 0x2c(r30)
    b lbl_fn_801C6464_000012C4
lbl_fn_801C6464_00000F74:
    addi r29, r1, 0xec
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f2, 0x530(r4)
    lfs f0, 0x1c(r3)
    lfs f5, 0x18(r3)
    lfs f4, 0xf0(r1)
    fsubs f6, f0, f2
    lfs f3, 0x14(r3)
    addi r3, r1, 0xe0
    lfs f0, 0xec(r1)
    fsubs f4, f5, f4
    stfs f2, 0xf4(r1)
    fsubs f0, f3, f0
    stfs f4, 0xe4(r1)
    stfs f0, 0xe0(r1)
    stfs f6, 0xe8(r1)
    bl fn_805F9940
    lfs f0, lbl_80882810
    fcmpo cr0, f1, f0
    bge lbl_fn_801C6464_00000FE0
    lwz r3, 0x4(r30)
    li r31, 0x1
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    b lbl_fn_801C6464_000012C4
lbl_fn_801C6464_00000FE0:
    lfs f0, lbl_80882830
    fcmpo cr0, f1, f0
    ble lbl_fn_801C6464_00001048
    addi r3, r1, 0xe0
    mr r4, r3
    bl fn_805F98D0
    lfs f5, 0xe8(r1)
    lfs f4, lbl_80882830
    lfs f3, 0xe4(r1)
    lfs f0, 0xe0(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0xf0(r1)
    fmuls f7, f0, f4
    lfs f4, 0xec(r1)
    lfs f0, 0xf4(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0xa4(r1)
    fadds f0, f0, f5
    stfs f6, 0xa8(r1)
    stfs f5, 0xac(r1)
    stfs f4, 0xec(r1)
    stfs f3, 0xf0(r1)
    stfs f0, 0xf4(r1)
    b lbl_fn_801C6464_00001058
lbl_fn_801C6464_00001048:
    psq_l f1, 0x14(r30), 0, 0
    lfs f2, 0x1c(r30)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xf4(r1)
lbl_fn_801C6464_00001058:
    addi r3, r1, 0xec
    lwz r5, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd4
    psq_st f1, 0x528(r5), 0, 0
    addi r4, r1, 0xe0
    lfs f2, 0xf4(r1)
    addi r29, r1, 0x98
    stfs f2, 0x530(r5)
    lfs f0, lbl_808827C8
    lwz r5, 0x4(r30)
    lfs f2, 0x53c(r5)
    stfs f2, 0xdc(r1)
    lfs f2, 0xe8(r1)
    psq_l f1, 0x534(r5), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C6464_000010D8
    lfs f3, 0x98(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C6464_000010CC
    lfs f0, lbl_808827CC
    b lbl_fn_801C6464_000010D0
lbl_fn_801C6464_000010CC:
    lfs f0, lbl_808827D0
lbl_fn_801C6464_000010D0:
    stfs f0, 0x48(r1)
    b lbl_fn_801C6464_000010EC
lbl_fn_801C6464_000010D8:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C6464_000010EC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808827AC
    addi r4, r1, 0x38
    lfs f31, 0x140(r1)
    mr r5, r4
    lfs f30, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f13, 0x138(r1)
    lfs f12, 0x150(r1)
    lfs f11, 0x14c(r1)
    lfs f10, 0x148(r1)
    lfs f9, 0x160(r1)
    lfs f8, 0x15c(r1)
    lfs f7, 0x158(r1)
    lfs f6, 0x164(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x144(r1)
    lfs f0, lbl_808827B0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x168(r1)
    stfs f30, 0x16c(r1)
    stfs f31, 0x170(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808827C8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C6464_00001208
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C6464_000011F8
    lfs f0, lbl_808827CC
    b lbl_fn_801C6464_000011FC
lbl_fn_801C6464_000011F8:
    lfs f0, lbl_808827D0
lbl_fn_801C6464_000011FC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C6464_0000121C
lbl_fn_801C6464_00001208:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C6464_0000121C:
    addi r3, r1, 0x44
    lfs f4, lbl_808827AC
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8073B788@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f4
    lfs f0, 0xd8(r1)
    lfs f3, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8073B788@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808827D4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C6464_00001268
    lfs f0, lbl_808827D8
    fsubs f3, f3, f0
lbl_fn_801C6464_00001268:
    lfs f0, lbl_808827DC
    fcmpo cr0, f3, f0
    bge lbl_fn_801C6464_0000127C
    lfs f0, lbl_808827D8
    fadds f3, f3, f0
lbl_fn_801C6464_0000127C:
    lfs f0, lbl_80882808
    fcmpo cr0, f3, f0
    ble lbl_fn_801C6464_00001290
    fmr f3, f0
    b lbl_fn_801C6464_000012A0
lbl_fn_801C6464_00001290:
    lfs f0, lbl_80882814
    fcmpo cr0, f3, f0
    bge lbl_fn_801C6464_000012A0
    fmr f3, f0
lbl_fn_801C6464_000012A0:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0xd4
    lwz r4, 0x4(r30)
    fadds f0, f0, f3
    lfs f2, 0xdc(r1)
    stfs f0, 0xd8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
lbl_fn_801C6464_000012C4:
    psq_l f31, 0x248(r1), 0, 0
    mr r3, r31
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    lwz r31, 0x22c(r1)
    lwz r30, 0x228(r1)
    lwz r29, 0x224(r1)
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_801C6CC8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    blr
}

asm void fn_801C6CDC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r4
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801C6CDC_000014E0
    lis r5, lbl_8073B7DC@ha
    li r3, 0xc
    addi r5, r5, lbl_8073B7DC@l
    li r4, 0x0
    addi r5, r5, 0x30
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801C6CDC_00001360
    lwz r4, 0x4(r30)
    bl fn_801A90BC
lbl_fn_801C6CDC_00001360:
    lis r4, lbl_80781D58@ha
    lwzu r6, lbl_80781D58@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0E2
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r7, 0x5c(r1)
    stw r3, 0x60(r1)
    bne lbl_fn_801C6CDC_000013E4
    lis r6, lbl_807C7C28@ha
    lis r4, fn_801A86C0@ha
    lis r3, fn_801A86F0@ha
    li r0, 0x1
    addi r3, r3, fn_801A86F0@l
    addi r5, r6, lbl_807C7C28@l
    addi r4, r4, fn_801A86C0@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C28@l(r6)
    stb r0, lbl_8087F0E2
lbl_fn_801C6CDC_000013E4:
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
    bne lbl_fn_801C6CDC_000014B8
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
    bne lbl_fn_801C6CDC_0000147C
    lis r3, __files@ha
    lis r4, lbl_8077FAF0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FAF0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801C6CDC_0000147C:
    cmpwi r30, 0x0
    beq lbl_fn_801C6CDC_000014AC
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_801C6CDC_000014AC:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801C6CDC_000014BC
lbl_fn_801C6CDC_000014B8:
    li r0, 0x0
lbl_fn_801C6CDC_000014BC:
    cmpwi r0, 0x0
    beq lbl_fn_801C6CDC_000014D4
    lis r3, lbl_807C7C28@ha
    addi r3, r3, lbl_807C7C28@l
    stw r3, 0x0(r31)
    b lbl_fn_801C6CDC_000014E4
lbl_fn_801C6CDC_000014D4:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801C6CDC_000014E4
lbl_fn_801C6CDC_000014E0:
    bl fn_80192758
lbl_fn_801C6CDC_000014E4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801C6ED0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C6ED0_00001524
    cmpwi r4, 0x0
    ble lbl_fn_801C6ED0_00001524
    bl dtor_80084684
lbl_fn_801C6ED0_00001524:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C6F10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C6F10_00001564
    cmpwi r4, 0x0
    ble lbl_fn_801C6F10_00001564
    bl dtor_80084684
lbl_fn_801C6F10_00001564:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C6F50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C6F50_000015A4
    cmpwi r4, 0x0
    ble lbl_fn_801C6F50_000015A4
    bl dtor_80084684
lbl_fn_801C6F50_000015A4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C6F90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801C6F90_000015EC
    cmpwi r0, 0x2
    beq lbl_fn_801C6F90_000015F8
    b lbl_fn_801C6F90_000015FC
lbl_fn_801C6F90_000015EC:
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_801C6F90_000015FC
lbl_fn_801C6F90_000015F8:
    li r5, 0x1
lbl_fn_801C6F90_000015FC:
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801C6F90_00001640
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801C6F90_00001640
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801C6F90_00001640
    lwz r3, 0x4(r3)
    li r4, 0x0
    bl fn_8017AC3C
    lwz r4, 0x4(r31)
    li r0, 0x0
    li r3, 0x1
    stw r0, 0xf1c(r4)
    b lbl_fn_801C6F90_00001644
lbl_fn_801C6F90_00001640:
    mr r3, r5
lbl_fn_801C6F90_00001644:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C702C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x4(r3)
    bl fn_8017AC3C
    lwz r3, 0x4(r31)
    li r0, 0x0
    stw r0, 0xf1c(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C706C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80781EF0@ha
    li r9, 0x8a
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80781EF0@l
    li r0, 0x1
    lfs f0, lbl_80882838
    stw r31, 0x1c(r1)
    li r7, 0x0
    lfs f1, lbl_8088283C
    li r8, 0x1
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f2, lbl_80882840
    stw r5, 0xc(r3)
    li r5, 0x1f2
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r9, 0x8(r3)
    stw r0, 0x3fc(r9)
    lwz r9, 0x8(r3)
    stfs f0, 0x2fc(r9)
    lwz r9, 0x8(r3)
    stfs f0, 0x2e8(r9)
    lwz r3, 0x8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r3, 0x8(r30)
    lis r4, lbl_8073B8E8@ha
    lwz r6, 0xc(r30)
    addi r4, r4, lbl_8073B8E8@l
    psq_l f1, 0x528(r3), 0, 0
    li r5, 0x0
    lfs f2, 0x530(r3)
    addi r31, r6, 0xb0
    stfs f2, 0x18(r30)
    mr r3, r31
    psq_st f1, 0x10(r30), 0, 0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801C706C_00001758
    li r5, 0x0
    b lbl_fn_801C706C_00001764
lbl_fn_801C706C_00001758:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r5, r3, r0
lbl_fn_801C706C_00001764:
    lfs f0, 0x2c(r5)
    addi r4, r1, 0x8
    lfs f3, 0x1c(r5)
    mr r3, r30
    lfs f4, 0xc(r5)
    fmr f2, f0
    stfs f4, 0x8(r1)
    lwz r5, 0x8(r30)
    stfs f3, 0xc(r1)
    lwz r6, 0xc(r30)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x1c(r30), 0, 0
    stfs f2, 0x24(r30)
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    stfs f2, 0x30(r30)
    psq_st f1, 0x28(r30), 0, 0
    psq_l f1, 0x534(r6), 0, 0
    lfs f2, 0x53c(r6)
    stfs f2, 0x3c(r30)
    psq_st f1, 0x34(r30), 0, 0
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    stfs f0, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801C71A8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r5, 0x8(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    bge lbl_fn_801C71A8_00001954
    lwz r3, 0x8(r31)
    lfs f31, lbl_8088283C
    addi r3, r3, 0xb0
    lfs f30, 0x234(r3)
    fcmpu cr0, f31, f30
    bne lbl_fn_801C71A8_00001830
    b lbl_fn_801C71A8_0000183C
lbl_fn_801C71A8_00001830:
    li r4, 0x0
    bl fn_80097D7C
    fdivs f31, f30, f1
lbl_fn_801C71A8_0000183C:
    lfs f3, 0x24(r31)
    addi r3, r1, 0x38
    lfs f0, 0x18(r31)
    lfs f5, 0x20(r31)
    fsubs f6, f3, f0
    lfs f4, 0x14(r31)
    lfs f3, 0x1c(r31)
    lfs f0, 0x10(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F9940
    fmuls f30, f1, f31
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_805F98D0
    lfs f3, 0x3c(r1)
    addi r4, r1, 0x20
    lfs f0, 0x38(r1)
    addi r5, r1, 0x8
    fmuls f9, f3, f30
    lfs f4, 0x40(r1)
    fmuls f10, f0, f30
    lfs f0, 0x10(r31)
    fmuls f8, f4, f30
    lfs f3, 0x14(r31)
    fadds f4, f3, f9
    lfs f3, 0x18(r31)
    fadds f0, f0, f10
    lwz r6, 0x8(r31)
    fadds f11, f3, f8
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    li r3, 0x0
    fmr f2, f11
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lfs f3, 0x38(r31)
    lfs f6, 0x2c(r31)
    lfs f0, 0x34(r31)
    lfs f5, 0x28(r31)
    fsubs f3, f3, f6
    lfs f4, 0x3c(r31)
    fsubs f12, f0, f5
    lfs f7, 0x30(r31)
    fmuls f3, f3, f31
    lwz r4, 0x8(r31)
    fsubs f0, f4, f7
    stfs f10, 0x14(r1)
    fmuls f4, f12, f31
    stfs f9, 0x18(r1)
    fmuls f0, f0, f31
    fadds f6, f6, f3
    stfs f8, 0x1c(r1)
    fadds f5, f5, f4
    fadds f2, f7, f0
    stfs f6, 0xc(r1)
    stfs f5, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f11, 0x28(r1)
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f2, 0x10(r1)
    stfs f2, 0x53c(r4)
    b lbl_fn_801C71A8_00001958
lbl_fn_801C71A8_00001954:
    li r3, 0x1
lbl_fn_801C71A8_00001958:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
