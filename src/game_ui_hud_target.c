#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_8008B130(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB688(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_80179D44(void);
extern void fn_8017C9AC(void);
extern void fn_8018059C(void);
extern void fn_80219558(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803761DC(void);
extern void fn_803EAA7C(void);
extern void fn_803EAC20(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_806827C4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_8073B718[];
extern u8 lbl_8073B788[];
extern u8 lbl_8073B790[];
extern u8 lbl_8073B7DC[];
extern u8 lbl_80781BF0[];
extern u8 lbl_80781C68[];
extern u8 lbl_80781CE0[];
extern u8 lbl_80781E58[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F8A0;
extern u32 lbl_80882748;
extern u32 lbl_80882754;
extern u32 lbl_80882764;
extern u32 lbl_80882768;
extern u32 lbl_8088276C;
extern u32 lbl_80882770;
extern u32 lbl_80882774;
extern u32 lbl_80882778;
extern u32 lbl_8088277C;
extern u32 lbl_80882780;
extern u32 lbl_80882784;
extern u32 lbl_80882788;
extern u32 lbl_8088278C;
extern u32 lbl_80882790;
extern u32 lbl_80882794;
extern u32 lbl_80882798;
extern u32 lbl_8088279C;
extern u32 lbl_808827A0;
extern u32 lbl_808827A8;
extern u32 lbl_808827AC;
extern u32 lbl_808827B0;
extern u32 lbl_808827B4;
extern u32 lbl_808827B8;
extern u32 lbl_808827BC;
extern u32 lbl_808827C0;
extern u32 lbl_808827C4;
extern u32 lbl_808827C8;
extern u32 lbl_808827CC;
extern u32 lbl_808827D0;
extern u32 lbl_808827D4;
extern u32 lbl_808827D8;
extern u32 lbl_808827DC;
extern u32 lbl_808827E0;
extern u32 lbl_808827E4;
extern u32 lbl_808827E8;
extern u32 lbl_808827EC;
extern u32 lbl_808827F0;
extern u32 lbl_808827F4;
extern u32 lbl_808827F8;
extern u32 lbl_808827FC;
extern u32 lbl_80882800;
extern u32 lbl_80882804;
extern u32 lbl_80882808;
extern u32 lbl_8088280C;
extern u32 lbl_80882810;
extern u32 lbl_80882814;

/* Function declarations */
void fn_801C3910(void);
void fn_801C3944(void);
void fn_801C3D1C(void);
void fn_801C3DCC(void);
void fn_801C3F54(void);
void fn_801C3FB0(void);
void fn_801C40A4(void);
void fn_801C43F0(void);
void fn_801C4500(void);
void fn_801C4678(void);
void fn_801C46B8(void);
void fn_801C46F8(void);
void fn_801C4738(void);
void fn_801C4750(void);
void fn_801C48B4(void);
void fn_801C4F54(void);

asm void fn_801C3910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f1, 0x8(r3)
    lfs f0, 0x0(r3)
    fmuls f1, f1, f1
    stw r0, 0x14(r1)
    fmadds f1, f0, f0, f1
    bl fn_8068B100
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C3944(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stw r31, 0x19c(r1)
    stw r30, 0x198(r1)
    stw r29, 0x194(r1)
    mr r29, r3
    lwz r30, lbl_8087F430
    lwz r3, 0x868(r30)
    cmpwi r3, 0x4
    bne lbl_fn_801C3944_000003E0
    lwz r0, 0x86c(r30)
    cmpw r3, r0
    beq lbl_fn_801C3944_00000084
    b lbl_fn_801C3944_000003E0
lbl_fn_801C3944_00000084:
    lfs f3, 0x27c(r30)
    addi r3, r1, 0xbc
    lfs f0, 0x270(r30)
    addi r5, r1, 0x5c
    lfs f5, 0x278(r30)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x26c(r30)
    lfs f3, 0x274(r30)
    lfs f0, 0x268(r30)
    fsubs f4, f5, f4
    stfs f2, 0x64(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F98D0
    lwz r4, 0x4(r29)
    addi r3, r1, 0xb0
    bl fn_8017C9AC
    lfs f4, 0xc4(r1)
    li r0, 0x0
    lfs f3, 0xc0(r1)
    addi r4, r1, 0x138
    fmuls f5, f4, f31
    lfs f0, 0xbc(r1)
    fmuls f6, f3, f31
    lfs f4, 0xb8(r1)
    fmuls f7, f0, f31
    lfs f3, 0xb4(r1)
    lfs f0, 0xb0(r1)
    fadds f4, f4, f5
    stw r0, 0x16c(r1)
    fadds f3, f3, f6
    fadds f0, f0, f7
    lwz r3, lbl_8087EE98
    stw r0, 0x170(r1)
    addi r5, r1, 0xb0
    addi r6, r1, 0x98
    stw r0, 0x174(r1)
    li r7, 0x4
    li r9, 0x0
    stw r0, 0x178(r1)
    lwz r8, 0x4(r29)
    stfs f7, 0x8c(r1)
    addi r8, r8, 0x5b8
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f4, 0xa0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C3944_0000017C
    addi r3, r1, 0x13c
    lfs f2, 0x144(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r29), 0, 0
    stfs f2, 0x10(r29)
    b lbl_fn_801C3944_000001D4
lbl_fn_801C3944_0000017C:
    lfs f4, 0xc4(r1)
    addi r3, r1, 0x80
    lfs f0, 0xc0(r1)
    lfs f3, 0xbc(r1)
    fmuls f4, f4, f31
    fmuls f5, f0, f31
    lfs f0, 0xb8(r1)
    fmuls f6, f3, f31
    lfs f3, 0xb4(r1)
    fadds f2, f0, f4
    lfs f0, 0xb0(r1)
    fadds f3, f3, f5
    stfs f6, 0x74(r1)
    fadds f0, f0, f6
    stfs f3, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f2, 0x88(r1)
    psq_st f1, 0x8(r29), 0, 0
    stfs f2, 0x10(r29)
lbl_fn_801C3944_000001D4:
    lfs f3, 0x88(r30)
    addi r31, r1, 0xa4
    lfs f0, 0x7c(r30)
    addi r5, r1, 0x50
    lfs f5, 0x84(r30)
    mr r3, r31
    fsubs f2, f3, f0
    lfs f4, 0x78(r30)
    lfs f3, 0x80(r30)
    mr r4, r31
    lfs f0, 0x74(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f2, 0xac(r1)
    addi r30, r1, 0x68
    lfs f3, lbl_80882748
    fabs f4, f2
    stfs f3, 0xa8(r1)
    lfs f0, lbl_80882764
    psq_l f1, 0x0(r31), 0, 0
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_801C3944_00000274
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_801C3944_00000268
    lfs f0, lbl_80882768
    b lbl_fn_801C3944_0000026C
lbl_fn_801C3944_00000268:
    lfs f0, lbl_8088276C
lbl_fn_801C3944_0000026C:
    stfs f0, 0x48(r1)
    b lbl_fn_801C3944_00000288
lbl_fn_801C3944_00000274:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C3944_00000288:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882748
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
    lfs f0, lbl_80882754
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
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
    lfs f0, lbl_80882764
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C3944_000003A4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882748
    fcmpo cr0, f3, f0
    ble lbl_fn_801C3944_00000394
    lfs f0, lbl_80882768
    b lbl_fn_801C3944_00000398
lbl_fn_801C3944_00000394:
    lfs f0, lbl_8088276C
lbl_fn_801C3944_00000398:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C3944_000003B8
lbl_fn_801C3944_000003A4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C3944_000003B8:
    addi r3, r1, 0x44
    lfs f2, lbl_80882748
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r29)
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x53c(r3)
lbl_fn_801C3944_000003E0:
    lwz r0, 0x1c4(r1)
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_801C3D1C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lwz r3, 0x4(r3)
    stw r0, 0x34(r1)
    lfs f4, lbl_80882770
    stw r31, 0x2c(r1)
    addi r31, r1, 0x14
    lfs f0, lbl_80882774
    stw r30, 0x28(r1)
    addi r30, r1, 0x8
    stw r29, 0x24(r1)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x1c(r1)
    lwz r29, lbl_8087EE98
    psq_st f1, 0x0(r31), 0, 0
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f5, 0x18(r1)
    lfs f3, 0xc(r1)
    fadds f4, f5, f4
    stfs f2, 0x10(r1)
    fadds f0, f3, f0
    stfs f4, 0x18(r1)
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
    cntlzw r0, r3
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    srwi r3, r0, 5
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801C3DCC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, lbl_80781CE0@ha
    li r10, 0x0
    stw r0, 0x44(r1)
    addi r8, r8, lbl_80781CE0@l
    li r9, 0x27
    li r0, 0x1
    stfd f31, 0x30(r1)
    lfs f0, lbl_80882778
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f2
    lfs f2, lbl_80882780
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    fmr f30, f1
    lfs f1, lbl_8088277C
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r7
    li r7, 0x0
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r3
    stw r8, 0x0(r3)
    li r8, 0x1
    stw r4, 0x4(r3)
    stw r6, 0xc(r3)
    stw r10, 0x10(r3)
    stw r10, 0x14(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_8088277C
    lfs f3, lbl_80882778
    fcmpo cr0, f30, f0
    stfs f3, 0x238(r31)
    cror eq, gt, eq
    bne lbl_fn_801C3DCC_00000574
    stfs f30, 0x234(r31)
lbl_fn_801C3DCC_00000574:
    lfs f1, lbl_8088277C
    mr r3, r31
    li r4, 0x3
    bl fn_80097CCC
    lfs f0, lbl_8088277C
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_801C3DCC_00000598
    b lbl_fn_801C3DCC_000005A8
lbl_fn_801C3DCC_00000598:
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fmr f31, f1
lbl_fn_801C3DCC_000005A8:
    cmpwi r29, 0x0
    stfs f31, 0x8(r28)
    beq lbl_fn_801C3DCC_000005C0
    cmpwi r30, 0x0
    ble lbl_fn_801C3DCC_000005C0
    stw r30, 0x10(r28)
lbl_fn_801C3DCC_000005C0:
    lwz r3, 0x4(r28)
    li r4, 0x3
    lfs f1, lbl_8088277C
    stfs f1, 0x580(r3)
    stfs f1, 0x584(r3)
    lwz r31, 0x4(r28)
    addi r3, r31, 0xb0
    bl fn_80097CCC
    li r0, -0x1
    stw r0, 0x12bc(r31)
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_8088277C
    lwz r5, 0x4(r28)
    addi r4, r4, lbl_807C7030@l
    mr r3, r28
    stfs f0, 0x570(r5)
    lwz r5, 0x4(r28)
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x57c(r5)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801C3F54(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    lwz r4, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801C3F54_00000670
    lfs f1, 0x2e4(r4)
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801C3F54_00000698
    li r3, 0x1
    blr
lbl_fn_801C3F54_00000670:
    lwz r5, 0x10(r3)
    cmpwi r5, 0x0
    ble lbl_fn_801C3F54_00000698
    lwz r4, 0x14(r3)
    addi r0, r4, 0x1
    stw r0, 0x14(r3)
    cmpw r5, r0
    bgt lbl_fn_801C3F54_00000698
    li r3, 0x1
    blr
lbl_fn_801C3F54_00000698:
    li r3, 0x0
    blr
}

asm void fn_801C3FB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, lbl_80781C68@ha
    mr r10, r6
    stw r0, 0x14(r1)
    mr r6, r7
    addi r8, r8, lbl_80781C68@l
    li r9, 0x27
    stw r31, 0xc(r1)
    li r0, 0x1
    lfs f0, lbl_80882778
    li r7, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f1, lbl_8088277C
    stw r8, 0x0(r3)
    li r8, 0x1
    lfs f2, lbl_80882780
    stw r4, 0x4(r3)
    stw r10, 0x8(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882778
    mr r3, r31
    stfs f0, 0x238(r31)
    li r4, 0x3
    lfs f1, lbl_8088277C
    bl fn_80097CCC
    lwz r3, 0x4(r30)
    li r4, 0x3
    lfs f1, lbl_8088277C
    stfs f1, 0x580(r3)
    stfs f1, 0x584(r3)
    lwz r31, 0x4(r30)
    addi r3, r31, 0xb0
    bl fn_80097CCC
    li r0, -0x1
    stw r0, 0x12bc(r31)
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_8088277C
    lwz r5, 0x4(r30)
    addi r4, r4, lbl_807C7030@l
    mr r3, r30
    stfs f0, 0x570(r5)
    lwz r5, 0x4(r30)
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x57c(r5)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C40A4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r4, r1, 0x80
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    addi r3, r1, 0x68
    psq_l f1, 0x528(r6), 0, 0
    addi r30, r6, 0xb0
    psq_st f1, 0x0(r4), 0, 0
    mr r4, r3
    lfs f2, 0x530(r6)
    lfs f3, 0x2c(r5)
    lfs f5, 0xc(r5)
    lfs f0, 0x80(r1)
    fsubs f6, f3, f2
    lfs f4, 0x1c(r5)
    fsubs f7, f5, f0
    lfs f0, lbl_8088277C
    stfs f2, 0x88(r1)
    stfs f5, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f7, 0x68(r1)
    stfs f6, 0x70(r1)
    stfs f0, 0x6c(r1)
    bl fn_805F98D0
    lwz r5, 0x4(r29)
    addi r3, r1, 0x5c
    lfs f0, lbl_80882784
    addi r4, r1, 0x68
    lfs f2, 0x53c(r5)
    addi r31, r1, 0x50
    stfs f2, 0x64(r1)
    lfs f2, 0x70(r1)
    psq_l f1, 0x534(r5), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C40A4_00000888
    lfs f3, 0x50(r1)
    lfs f0, lbl_8088277C
    fcmpo cr0, f3, f0
    ble lbl_fn_801C40A4_0000087C
    lfs f0, lbl_80882788
    b lbl_fn_801C40A4_00000880
lbl_fn_801C40A4_0000087C:
    lfs f0, lbl_8088278C
lbl_fn_801C40A4_00000880:
    stfs f0, 0x48(r1)
    b lbl_fn_801C40A4_0000089C
lbl_fn_801C40A4_00000888:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C40A4_0000089C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088277C
    addi r4, r1, 0x38
    lfs f30, 0x98(r1)
    mr r5, r4
    lfs f31, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80882778
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f30, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882784
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C40A4_000009B8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088277C
    fcmpo cr0, f3, f0
    ble lbl_fn_801C40A4_000009A8
    lfs f0, lbl_80882788
    b lbl_fn_801C40A4_000009AC
lbl_fn_801C40A4_000009A8:
    lfs f0, lbl_8088278C
lbl_fn_801C40A4_000009AC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C40A4_000009CC
lbl_fn_801C40A4_000009B8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C40A4_000009CC:
    addi r3, r1, 0x44
    lfs f4, lbl_8088277C
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8073B718@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x60(r1)
    lfs f3, 0x54(r1)
    stfs f2, 0x58(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8073B718@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80882790
    fcmpo cr0, f4, f0
    ble lbl_fn_801C40A4_00000A18
    lfs f0, lbl_80882794
    fsubs f4, f4, f0
lbl_fn_801C40A4_00000A18:
    lfs f0, lbl_80882798
    fcmpo cr0, f4, f0
    bge lbl_fn_801C40A4_00000A2C
    lfs f0, lbl_80882794
    fadds f4, f4, f0
lbl_fn_801C40A4_00000A2C:
    fabs f3, f4
    lfs f0, lbl_8088279C
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_801C40A4_00000A5C
    lfs f0, lbl_8088277C
    fcmpo cr0, f4, f0
    ble lbl_fn_801C40A4_00000A54
    lfs f0, lbl_80882778
    b lbl_fn_801C40A4_00000A58
lbl_fn_801C40A4_00000A54:
    lfs f0, lbl_808827A0
lbl_fn_801C40A4_00000A58:
    fmuls f4, f0, f3
lbl_fn_801C40A4_00000A5C:
    lfs f0, 0x60(r1)
    addi r3, r1, 0x5c
    lwz r4, 0x4(r29)
    fadds f0, f0, f4
    lfs f2, 0x64(r1)
    stfs f0, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    lbz r0, 0x244(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801C40A4_00000AB0
    lfs f30, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_801C40A4_00000AB0
    li r3, 0x1
    b lbl_fn_801C40A4_00000AB4
lbl_fn_801C40A4_00000AB0:
    li r3, 0x0
lbl_fn_801C40A4_00000AB4:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_801C43F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r10, lbl_80781BF0@ha
    psq_l f1, 0x0(r6), 0, 0
    stw r0, 0x14(r1)
    addi r10, r10, lbl_80781BF0@l
    lfs f2, 0x8(r6)
    li r9, 0x27
    stw r31, 0xc(r1)
    li r0, 0x1
    lfs f0, lbl_80882778
    li r6, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    li r7, 0x0
    li r8, 0x1
    psq_st f1, 0x14(r3), 0, 0
    lfs f1, lbl_8088277C
    stfs f2, 0x1c(r3)
    lfs f2, lbl_80882780
    stw r4, 0x4(r3)
    stw r10, 0x0(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882778
    mr r3, r31
    stfs f0, 0x238(r31)
    li r4, 0x3
    lfs f1, lbl_8088277C
    bl fn_80097CCC
    lwz r3, 0x4(r30)
    li r4, 0x3
    lfs f1, lbl_8088277C
    stfs f1, 0x580(r3)
    stfs f1, 0x584(r3)
    lwz r31, 0x4(r30)
    addi r3, r31, 0xb0
    bl fn_80097CCC
    li r0, -0x1
    stw r0, 0x12bc(r31)
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_8088277C
    lwz r5, 0x4(r30)
    addi r4, r4, lbl_807C7030@l
    mr r3, r30
    stfs f0, 0x570(r5)
    lwz r5, 0x4(r30)
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x57c(r5)
    lwz r4, 0x4(r30)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x10(r30)
    psq_st f1, 0x8(r30), 0, 0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C4500(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    addi r31, r5, 0xb0
    lfs f31, 0x2e4(r5)
    mr r3, r31
    bl fn_80097D7C
    fdivs f0, f31, f1
    lfs f3, lbl_8088277C
    fcmpo cr0, f3, f0
    ble lbl_fn_801C4500_00000C3C
    b lbl_fn_801C4500_00000C50
lbl_fn_801C4500_00000C3C:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f3, f31, f1
lbl_fn_801C4500_00000C50:
    lfs f12, lbl_80882778
    fcmpo cr0, f3, f12
    bge lbl_fn_801C4500_00000C94
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f0, f31, f1
    lfs f12, lbl_8088277C
    fcmpo cr0, f12, f0
    ble lbl_fn_801C4500_00000C80
    b lbl_fn_801C4500_00000C94
lbl_fn_801C4500_00000C80:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f12, f31, f1
lbl_fn_801C4500_00000C94:
    lfs f4, 0xc(r30)
    addi r5, r1, 0x2c
    lfs f0, 0x18(r30)
    mr r3, r31
    lfs f3, 0x8(r30)
    li r4, 0x0
    fadds f6, f4, f0
    lfs f0, 0x14(r30)
    lfs f5, 0x10(r30)
    fadds f7, f3, f0
    lfs f0, 0x1c(r30)
    fsubs f10, f6, f4
    fadds f0, f5, f0
    stfs f7, 0x20(r1)
    fsubs f9, f7, f3
    fmuls f8, f10, f12
    stfs f0, 0x28(r1)
    fsubs f11, f0, f5
    fmuls f7, f9, f12
    stfs f6, 0x24(r1)
    fadds f4, f8, f4
    fmuls f6, f11, f12
    lwz r6, 0x4(r30)
    fadds f0, f7, f3
    stfs f4, 0x30(r1)
    fadds f2, f6, f5
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    stfs f9, 0x14(r1)
    lfs f31, 0x234(r31)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f7, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f2, 0x34(r1)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801C4500_00000D44
    li r3, 0x1
    b lbl_fn_801C4500_00000D48
lbl_fn_801C4500_00000D44:
    li r3, 0x0
lbl_fn_801C4500_00000D48:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801C4678(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C4678_00000D90
    cmpwi r4, 0x0
    ble lbl_fn_801C4678_00000D90
    bl dtor_80084684
lbl_fn_801C4678_00000D90:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C46B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C46B8_00000DD0
    cmpwi r4, 0x0
    ble lbl_fn_801C46B8_00000DD0
    bl dtor_80084684
lbl_fn_801C46B8_00000DD0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C46F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C46F8_00000E10
    cmpwi r4, 0x0
    ble lbl_fn_801C46F8_00000E10
    bl dtor_80084684
lbl_fn_801C46F8_00000E10:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C4738(void)
{
    nofralloc
    slwi r0, r4, 2
    la r4, lbl_808827A8
    lwzx r4, r4, r0
    li r6, 0x0
    li r7, -0x1
    b fn_800C344C
}

asm void fn_801C4750(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_801C4750_00000E70
    li r3, 0x0
    b lbl_fn_801C4750_00000F8C
lbl_fn_801C4750_00000E70:
    lwz r3, 0x50(r30)
    subis r3, r3, 0x2
    addi r0, r3, 0x78f5
    cmplwi r0, 0x1
    bgt lbl_fn_801C4750_00000E8C
    li r3, 0x0
    b lbl_fn_801C4750_00000F8C
lbl_fn_801C4750_00000E8C:
    addi r3, r30, 0xb0
    bl fn_8008B130
    lis r31, lbl_8073B7DC@ha
    addi r4, r31, lbl_8073B7DC@l
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801C4750_00000EB0
    li r3, 0x0
    b lbl_fn_801C4750_00000F8C
lbl_fn_801C4750_00000EB0:
    addi r3, r30, 0xb0
    bl fn_8008B130
    addi r31, r31, lbl_8073B7DC@l
    addi r4, r31, 0x6
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801C4750_00000ED4
    li r3, 0x0
    b lbl_fn_801C4750_00000F8C
lbl_fn_801C4750_00000ED4:
    addi r3, r30, 0xb0
    bl fn_8008B130
    addi r4, r31, 0xc
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801C4750_00000EF4
    li r3, 0x0
    b lbl_fn_801C4750_00000F8C
lbl_fn_801C4750_00000EF4:
    addi r3, r30, 0xb0
    bl fn_8008B130
    addi r4, r31, 0x12
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801C4750_00000F14
    li r3, 0x0
    b lbl_fn_801C4750_00000F8C
lbl_fn_801C4750_00000F14:
    addi r3, r30, 0xb0
    bl fn_8008B130
    addi r4, r31, 0x18
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801C4750_00000F34
    li r3, 0x0
    b lbl_fn_801C4750_00000F8C
lbl_fn_801C4750_00000F34:
    addi r3, r30, 0xb0
    bl fn_8008B130
    addi r4, r31, 0x1e
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801C4750_00000F54
    li r3, 0x0
    b lbl_fn_801C4750_00000F8C
lbl_fn_801C4750_00000F54:
    addi r3, r30, 0xb0
    bl fn_8008B130
    addi r4, r31, 0x24
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801C4750_00000F74
    li r3, 0x0
    b lbl_fn_801C4750_00000F8C
lbl_fn_801C4750_00000F74:
    addi r3, r30, 0xb0
    bl fn_8008B130
    addi r4, r31, 0x2a
    bl fn_806827C4
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_fn_801C4750_00000F8C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C48B4(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    lis r9, lbl_80781E58@ha
    stw r0, 0x154(r1)
    addi r9, r9, lbl_80781E58@l
    li r0, 0x44
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    mr r31, r3
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    mr r28, r5
    stw r4, 0x4(r3)
    stw r9, 0x0(r3)
    stw r7, 0x2c(r3)
    stw r6, 0x30(r3)
    stw r8, 0x34(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    bl fn_80155DAC
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801C48B4_0000101C
    bl fn_801539E0
lbl_fn_801C48B4_0000101C:
    lwz r30, 0x4(r31)
    li r4, 0x3
    lfs f1, lbl_808827AC
    addi r3, r30, 0xb0
    bl fn_80097CCC
    li r0, -0x1
    stw r0, 0x12bc(r30)
    li r0, 0x1
    lfs f3, lbl_808827B0
    lwz r5, 0x4(r31)
    addi r3, r1, 0xe8
    lfs f0, lbl_808827AC
    li r4, 0x79
    stw r0, 0x3fc(r5)
    addi r29, r5, 0xb0
    stfs f3, 0x2fc(r5)
    stfs f3, 0x2e8(r5)
    lwz r5, 0x4(r31)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f3, 0x74(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x6c
    addi r3, r1, 0xe8
    mr r5, r4
    bl fn_805F93C0
    mr r4, r28
    addi r3, r1, 0x6c
    bl fn_805F9990
    lfs f0, lbl_808827B4
    fcmpo cr0, f1, f0
    ble lbl_fn_801C48B4_000010D8
    lfs f1, lbl_808827AC
    mr r3, r29
    lfs f2, lbl_808827B8
    li r4, 0x0
    li r5, 0x90
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808827BC
    stfs f0, 0x234(r29)
    lfs f0, lbl_808827C0
    stfs f0, 0x238(r29)
    b lbl_fn_801C48B4_00001380
lbl_fn_801C48B4_000010D8:
    lfs f0, lbl_808827C4
    fcmpo cr0, f1, f0
    bge lbl_fn_801C48B4_0000111C
    lfs f1, lbl_808827AC
    mr r3, r29
    lfs f2, lbl_808827B8
    li r4, 0x0
    li r5, 0x8f
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808827BC
    stfs f0, 0x234(r29)
    lfs f0, lbl_808827C0
    stfs f0, 0x238(r29)
    b lbl_fn_801C48B4_00001380
lbl_fn_801C48B4_0000111C:
    lfs f2, 0x8(r28)
    addi r30, r1, 0x54
    psq_l f1, 0x0(r28), 0, 0
    fabs f3, f2
    lfs f0, lbl_808827C8
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x5c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C48B4_00001168
    lfs f3, 0x54(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C48B4_0000115C
    lfs f0, lbl_808827CC
    b lbl_fn_801C48B4_00001160
lbl_fn_801C48B4_0000115C:
    lfs f0, lbl_808827D0
lbl_fn_801C48B4_00001160:
    stfs f0, 0x4c(r1)
    b lbl_fn_801C48B4_0000117C
lbl_fn_801C48B4_00001168:
    frsp f2, f2
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_801C48B4_0000117C:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808827AC
    addi r4, r1, 0x3c
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_808827B0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x5c(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f12, 0x20(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f9, 0x2c(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    bl fn_805F9750
    lfs f2, 0x44(r1)
    lfs f0, lbl_808827C8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C48B4_00001298
    lfs f3, 0x40(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C48B4_00001288
    lfs f0, lbl_808827CC
    b lbl_fn_801C48B4_0000128C
lbl_fn_801C48B4_00001288:
    lfs f0, lbl_808827D0
lbl_fn_801C48B4_0000128C:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_801C48B4_000012AC
lbl_fn_801C48B4_00001298:
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_801C48B4_000012AC:
    addi r3, r1, 0x48
    lfs f3, lbl_808827AC
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8073B788@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lwz r4, 0x4(r31)
    lfs f4, 0x58(r1)
    lfs f0, 0x538(r4)
    stfs f2, 0x5c(r1)
    fsubs f1, f4, f0
    lfd f2, lbl_8073B788@l(r3)
    stfs f3, 0x50(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808827D4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C48B4_000012FC
    lfs f0, lbl_808827D8
    fsubs f3, f3, f0
lbl_fn_801C48B4_000012FC:
    lfs f0, lbl_808827DC
    fcmpo cr0, f3, f0
    bge lbl_fn_801C48B4_00001310
    lfs f0, lbl_808827D8
    fadds f3, f3, f0
lbl_fn_801C48B4_00001310:
    lfs f1, lbl_808827AC
    fcmpo cr0, f3, f1
    bge lbl_fn_801C48B4_00001350
    lfs f2, lbl_808827B8
    mr r3, r29
    li r4, 0x0
    li r5, 0x91
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808827E0
    stfs f0, 0x234(r29)
    lfs f0, lbl_808827C0
    stfs f0, 0x238(r29)
    b lbl_fn_801C48B4_00001380
lbl_fn_801C48B4_00001350:
    lfs f2, lbl_808827B8
    mr r3, r29
    li r4, 0x0
    li r5, 0x92
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808827BC
    stfs f0, 0x234(r29)
    lfs f0, lbl_808827C0
    stfs f0, 0x238(r29)
lbl_fn_801C48B4_00001380:
    lfs f4, lbl_808827E4
    addi r5, r1, 0x60
    lfs f0, 0x4(r28)
    li r0, 0x0
    lfs f3, 0x0(r28)
    addi r3, r1, 0x8
    fmuls f5, f0, f4
    lfs f0, lbl_808827E8
    fmuls f6, f3, f4
    lfs f3, 0x8(r28)
    lwz r6, 0x4(r31)
    li r4, 0x0
    fmuls f0, f5, f0
    stfs f6, 0x60(r1)
    fmuls f2, f3, f4
    stfs f0, 0x64(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x6b8(r6), 0, 0
    stfs f2, 0x6c0(r6)
    lwz r6, 0x4(r31)
    stfs f2, 0x68(r1)
    psq_l f1, 0x534(r6), 0, 0
    addi r5, r6, 0x528
    lfs f2, 0x53c(r6)
    stfs f2, 0x10(r31)
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x530(r6)
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
    psq_l f1, 0x534(r6), 0, 0
    lfs f2, 0x53c(r6)
    stfs f2, 0x28(r31)
    psq_st f1, 0x20(r31), 0, 0
    lfs f1, lbl_808827EC
    stw r0, 0x38(r31)
    bl fn_801C4738
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x118(r1)
    mulhw r5, r5, r3
    lis r4, lbl_8073B790@ha
    lfd f7, lbl_8073B790@l(r4)
    lfs f5, lbl_808827F4
    li r4, 0x0
    lfs f4, lbl_808827F0
    srawi r0, r5, 8
    lfs f3, lbl_808827B0
    srwi r5, r0, 31
    lfs f0, lbl_808827B8
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x8
    xoris r0, r0, 0x8000
    stw r0, 0x11c(r1)
    lfd f6, 0x118(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmadds f3, f4, f5, f3
    fsubs f1, f3, f0
    bl fn_800CB688
    lwz r0, 0x34(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801C48B4_000015A0
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801C48B4_000015A0
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    ble lbl_fn_801C48B4_000015A0
    bl fn_8018059C
    cmpwi r3, 0x0
    beq lbl_fn_801C48B4_000014E8
    bl fn_8018059C
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801C48B4_000014E8
    bl fn_8018059C
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x5
    bne lbl_fn_801C48B4_000015A0
lbl_fn_801C48B4_000014E8:
    lwz r3, lbl_8087F498
    bl fn_803EAC20
    cmpwi r3, 0x0
    beq lbl_fn_801C48B4_00001514
    lwz r4, 0x4(r31)
    cmplw r3, r4
    beq lbl_fn_801C48B4_000015A0
    lwz r3, 0x7c(r3)
    lwz r0, 0x7c(r4)
    cmplw r3, r0
    beq lbl_fn_801C48B4_000015A0
lbl_fn_801C48B4_00001514:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801C48B4_00001528
    bl fn_803761DC
    b lbl_fn_801C48B4_0000152C
lbl_fn_801C48B4_00001528:
    li r3, 0x0
lbl_fn_801C48B4_0000152C:
    cmpwi r3, 0x1
    bne lbl_fn_801C48B4_0000154C
    lwz r3, lbl_8087F498
    li r5, 0x1
    lwz r4, 0x4(r31)
    lfs f1, lbl_808827F8
    bl fn_803EAA7C
    b lbl_fn_801C48B4_000015A0
lbl_fn_801C48B4_0000154C:
    cmpwi r3, 0x2
    bne lbl_fn_801C48B4_0000156C
    lwz r3, lbl_8087F498
    li r5, 0x3
    lwz r4, 0x4(r31)
    lfs f1, lbl_808827F8
    bl fn_803EAA7C
    b lbl_fn_801C48B4_000015A0
lbl_fn_801C48B4_0000156C:
    cmpwi r3, 0x3
    blt lbl_fn_801C48B4_0000158C
    lwz r3, lbl_8087F498
    li r5, 0x5
    lwz r4, 0x4(r31)
    lfs f1, lbl_808827F8
    bl fn_803EAA7C
    b lbl_fn_801C48B4_000015A0
lbl_fn_801C48B4_0000158C:
    lwz r3, lbl_8087F498
    li r5, 0x0
    lwz r4, 0x4(r31)
    lfs f1, lbl_808827F8
    bl fn_803EAA7C
lbl_fn_801C48B4_000015A0:
    lwz r3, 0x4(r31)
    li r0, 0x1
    lwz r3, 0x48(r3)
    cmpwi r3, 0x1
    beq lbl_fn_801C48B4_000015C0
    cmpwi r3, 0x4
    beq lbl_fn_801C48B4_000015C0
    li r0, 0x0
lbl_fn_801C48B4_000015C0:
    cmpwi r0, 0x0
    beq lbl_fn_801C48B4_00001604
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801C48B4_00001604
    li r4, 0xab
    bl fn_80370174
    mr r4, r3
    lwz r3, lbl_8087F430
    addi r0, r4, 0x1
    li r5, 0x3e7
    cmpwi r0, 0x3e7
    li r4, 0xab
    bge lbl_fn_801C48B4_000015FC
    mr r5, r0
lbl_fn_801C48B4_000015FC:
    li r6, 0x0
    bl fn_80370320
lbl_fn_801C48B4_00001604:
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    psq_l f31, 0x148(r1), 0, 0
    mr r3, r31
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_801C4F54(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r4, r1, 0x104
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    lfs f31, lbl_808827AC
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    lfs f29, lbl_808827B0
    stw r31, 0x1fc(r1)
    stw r30, 0x1f8(r1)
    li r30, 0x0
    stw r29, 0x1f4(r1)
    mr r29, r3
    stw r28, 0x1f0(r1)
    lwz r5, 0x4(r3)
    psq_l f1, 0x8(r3), 0, 0
    lfs f2, 0x10(r3)
    addi r31, r5, 0xb0
    stfs f2, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801C4F54_000016CC
    cmpwi r0, 0x1
    beq lbl_fn_801C4F54_00001890
    cmpwi r0, 0x2
    beq lbl_fn_801C4F54_00001BE8
    cmpwi r0, 0x3
    beq lbl_fn_801C4F54_00001C58
    b lbl_fn_801C4F54_00002088
lbl_fn_801C4F54_000016CC:
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    beq lbl_fn_801C4F54_00001708
    lwz r0, 0x30(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801C4F54_00001858
    lfs f3, 0x234(r31)
    lfs f0, lbl_808827FC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801C4F54_00001858
lbl_fn_801C4F54_00001708:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801C4F54_00001720
    bl fn_803761DC
    mr r31, r3
    b lbl_fn_801C4F54_00001724
lbl_fn_801C4F54_00001720:
    li r31, 0x0
lbl_fn_801C4F54_00001724:
    lwz r3, 0x4(r29)
    bl fn_801C4750
    cmpwi r3, 0x0
    bne lbl_fn_801C4F54_00001738
    li r31, 0x0
lbl_fn_801C4F54_00001738:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801C4F54_000017A0
    lwz r5, 0x48(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801C4F54_000017A0
    lwz r4, 0x4(r29)
    addi r3, r1, 0xb0
    lfs f3, 0x530(r5)
    lfs f0, 0x530(r4)
    lfs f5, 0x52c(r5)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xb4(r1)
    stfs f0, 0xb0(r1)
    stfs f6, 0xb8(r1)
    bl fn_805F9920
    lfs f0, lbl_80882800
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801C4F54_000017A0
    li r31, 0x0
lbl_fn_801C4F54_000017A0:
    lwz r0, 0x34(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801C4F54_00001824
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801C4F54_00001824
    lwz r28, 0x4(r29)
    bl fn_803EAC20
    cmplw r3, r28
    bne lbl_fn_801C4F54_00001824
    cmpwi r31, 0x1
    bne lbl_fn_801C4F54_000017E8
    lwz r3, lbl_8087F498
    mr r4, r28
    lfs f1, lbl_808827F8
    li r5, 0x2
    bl fn_803EAA7C
    b lbl_fn_801C4F54_00001824
lbl_fn_801C4F54_000017E8:
    cmpwi r31, 0x2
    bne lbl_fn_801C4F54_00001808
    lwz r3, lbl_8087F498
    mr r4, r28
    lfs f1, lbl_808827F8
    li r5, 0x4
    bl fn_803EAA7C
    b lbl_fn_801C4F54_00001824
lbl_fn_801C4F54_00001808:
    cmpwi r31, 0x3
    blt lbl_fn_801C4F54_00001824
    lwz r3, lbl_8087F498
    mr r4, r28
    lfs f1, lbl_808827F8
    li r5, 0x6
    bl fn_803EAA7C
lbl_fn_801C4F54_00001824:
    cmpwi r31, 0x1
    ble lbl_fn_801C4F54_00001838
    li r0, 0x1
    stw r0, 0x38(r29)
    b lbl_fn_801C4F54_00002088
lbl_fn_801C4F54_00001838:
    lwz r0, 0x2c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801C4F54_0000184C
    li r30, 0x1
    b lbl_fn_801C4F54_00002088
lbl_fn_801C4F54_0000184C:
    li r0, 0x3
    stw r0, 0x38(r29)
    b lbl_fn_801C4F54_00002088
lbl_fn_801C4F54_00001858:
    lwz r3, 0x4(r29)
    fmr f1, f31
    fmr f2, f29
    addi r4, r1, 0x104
    lwz r12, 0x0(r3)
    li r5, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r29)
    lfs f0, lbl_808827AC
    stfs f0, 0x580(r3)
    stfs f0, 0x584(r3)
    b lbl_fn_801C4F54_00002088
lbl_fn_801C4F54_00001890:
    fmr f1, f31
    lfs f2, lbl_808827B8
    mr r3, r31
    li r4, 0x0
    li r5, 0x14
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_80882804
    stfs f0, 0x238(r31)
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801C4F54_000018D8
    lwz r4, 0x48(r3)
    b lbl_fn_801C4F54_000018DC
lbl_fn_801C4F54_000018D8:
    li r4, 0x0
lbl_fn_801C4F54_000018DC:
    cmpwi r4, 0x0
    beq lbl_fn_801C4F54_00001BDC
    lwz r5, 0x4(r29)
    addi r3, r1, 0xf8
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r5)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r5)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xfc(r1)
    stfs f0, 0xf8(r1)
    stfs f6, 0x100(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808827C8
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801C4F54_00001940
    addi r3, r1, 0xf8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801C4F54_00001940:
    lfs f2, 0x100(r1)
    addi r28, r1, 0xf8
    lfs f0, lbl_808827C8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C4F54_00001980
    lfs f3, 0xf8(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C4F54_00001974
    lfs f0, lbl_808827CC
    b lbl_fn_801C4F54_00001978
lbl_fn_801C4F54_00001974:
    lfs f0, lbl_808827D0
lbl_fn_801C4F54_00001978:
    stfs f0, 0x54(r1)
    b lbl_fn_801C4F54_00001990
lbl_fn_801C4F54_00001980:
    lfs f1, 0xf8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_801C4F54_00001990:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x1c0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808827AC
    addi r4, r1, 0x5c
    lfs f4, 0x1c8(r1)
    mr r5, r4
    lfs f5, 0x1c4(r1)
    addi r3, r1, 0x180
    lfs f6, 0x1c0(r1)
    lfs f7, 0x1d8(r1)
    lfs f8, 0x1d4(r1)
    lfs f9, 0x1d0(r1)
    lfs f10, 0x1e8(r1)
    lfs f11, 0x1e4(r1)
    lfs f12, 0x1e0(r1)
    lfs f13, 0x1ec(r1)
    lfs f31, 0x1dc(r1)
    lfs f30, 0x1cc(r1)
    lfs f0, lbl_808827B0
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x100(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f6, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f4, 0x94(r1)
    stfs f6, 0x180(r1)
    stfs f5, 0x184(r1)
    stfs f4, 0x188(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f9, 0x190(r1)
    stfs f8, 0x194(r1)
    stfs f7, 0x198(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f12, 0x1a0(r1)
    stfs f11, 0x1a4(r1)
    stfs f10, 0x1a8(r1)
    stfs f30, 0x68(r1)
    stfs f31, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f30, 0x18c(r1)
    stfs f31, 0x19c(r1)
    stfs f13, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    lfs f0, lbl_808827C8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C4F54_00001AAC
    lfs f3, 0x60(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C4F54_00001A9C
    lfs f0, lbl_808827CC
    b lbl_fn_801C4F54_00001AA0
lbl_fn_801C4F54_00001A9C:
    lfs f0, lbl_808827D0
lbl_fn_801C4F54_00001AA0:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_801C4F54_00001AC0
lbl_fn_801C4F54_00001AAC:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_801C4F54_00001AC0:
    addi r3, r1, 0x50
    lfs f2, lbl_808827AC
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8073B788@ha
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x100(r1)
    lfs f3, 0xfc(r1)
    lwz r4, 0x4(r29)
    stfs f2, 0x58(r1)
    lfs f0, 0x538(r4)
    lfd f2, lbl_8073B788@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808827D4
    fcmpo cr0, f4, f0
    ble lbl_fn_801C4F54_00001B0C
    lfs f0, lbl_808827D8
    fsubs f4, f4, f0
lbl_fn_801C4F54_00001B0C:
    lfs f0, lbl_808827DC
    fcmpo cr0, f4, f0
    bge lbl_fn_801C4F54_00001B20
    lfs f0, lbl_808827D8
    fadds f4, f4, f0
lbl_fn_801C4F54_00001B20:
    lfs f5, lbl_80882808
    fcmpo cr0, f4, f5
    ble lbl_fn_801C4F54_00001B34
    fmr f4, f5
    b lbl_fn_801C4F54_00001B44
lbl_fn_801C4F54_00001B34:
    fneg f0, f5
    fcmpo cr0, f4, f0
    bge lbl_fn_801C4F54_00001B44
    fmr f4, f0
lbl_fn_801C4F54_00001B44:
    lwz r4, 0x4(r29)
    fabs f0, f4
    addi r3, r1, 0xec
    psq_l f1, 0x534(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    frsp f3, f0
    lfs f2, 0x53c(r4)
    lfs f0, 0xf0(r1)
    fcmpo cr0, f3, f5
    stfs f2, 0xf4(r1)
    fadds f0, f0, f4
    stfs f0, 0xf0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    bge lbl_fn_801C4F54_00002088
    lwz r4, 0x4(r29)
    li r9, 0x2
    li r0, 0x1
    lfs f0, lbl_808827B0
    psq_l f1, 0x534(r4), 0, 0
    mr r3, r31
    lfs f2, 0x53c(r4)
    li r4, 0x0
    stfs f2, 0x10(r29)
    li r5, 0x95
    lfs f2, lbl_808827B8
    li r6, 0x0
    psq_st f1, 0x8(r29), 0, 0
    li r7, 0x1
    lfs f1, lbl_808827AC
    li r8, 0x1
    stw r9, 0x38(r29)
    stw r0, 0x34c(r31)
    stfs f0, 0x24c(r31)
    stfs f0, 0x238(r31)
    bl fn_80097C08
    b lbl_fn_801C4F54_00002088
lbl_fn_801C4F54_00001BDC:
    li r0, 0x3
    stw r0, 0x38(r29)
    b lbl_fn_801C4F54_00002088
lbl_fn_801C4F54_00001BE8:
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_801C4F54_00001C20
    lwz r0, 0x2c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801C4F54_00001C18
    li r30, 0x1
    b lbl_fn_801C4F54_00001C20
lbl_fn_801C4F54_00001C18:
    li r0, 0x3
    stw r0, 0x38(r29)
lbl_fn_801C4F54_00001C20:
    lwz r3, 0x4(r29)
    fmr f1, f31
    fmr f2, f29
    addi r4, r1, 0x104
    lwz r12, 0x0(r3)
    li r5, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r29)
    lfs f0, lbl_808827AC
    stfs f0, 0x580(r3)
    stfs f0, 0x584(r3)
    b lbl_fn_801C4F54_00002088
lbl_fn_801C4F54_00001C58:
    fmr f1, f31
    lfs f2, lbl_808827B8
    mr r3, r31
    li r4, 0x0
    li r5, 0x14
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_8088280C
    addi r28, r1, 0xe0
    stfs f0, 0x238(r31)
    addi r3, r1, 0xd4
    lwz r4, 0x4(r29)
    lfs f0, 0x1c(r29)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    psq_st f1, 0x0(r28), 0, 0
    fsubs f6, f0, f2
    lfs f5, 0x18(r29)
    lfs f4, 0xe4(r1)
    lfs f3, 0x14(r29)
    lfs f0, 0xe0(r1)
    fsubs f4, f5, f4
    stfs f2, 0xe8(r1)
    fsubs f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    stfs f6, 0xdc(r1)
    bl fn_805F9940
    lfs f0, lbl_80882810
    fcmpo cr0, f1, f0
    bge lbl_fn_801C4F54_00001DA4
    lwz r5, 0x4(r29)
    addi r4, r1, 0xc8
    lfs f3, 0x24(r29)
    lis r3, lbl_8073B788@ha
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x53c(r5)
    lfs f0, 0xcc(r1)
    stfs f2, 0xd0(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8073B788@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808827D4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C4F54_00001D2C
    lfs f0, lbl_808827D8
    fsubs f3, f3, f0
lbl_fn_801C4F54_00001D2C:
    lfs f0, lbl_808827DC
    fcmpo cr0, f3, f0
    bge lbl_fn_801C4F54_00001D40
    lfs f0, lbl_808827D8
    fadds f3, f3, f0
lbl_fn_801C4F54_00001D40:
    lfs f0, lbl_80882808
    fcmpo cr0, f3, f0
    ble lbl_fn_801C4F54_00001D54
    fmr f3, f0
    b lbl_fn_801C4F54_00001D64
lbl_fn_801C4F54_00001D54:
    lfs f0, lbl_80882814
    fcmpo cr0, f3, f0
    bge lbl_fn_801C4F54_00001D64
    fmr f3, f0
lbl_fn_801C4F54_00001D64:
    lfs f0, 0xcc(r1)
    fabs f4, f3
    addi r3, r1, 0xc8
    lwz r4, 0x4(r29)
    fadds f3, f0, f3
    lfs f0, lbl_80882808
    frsp f4, f4
    stfs f3, 0xcc(r1)
    lfs f2, 0xd0(r1)
    psq_l f1, 0x0(r3), 0, 0
    fcmpo cr0, f4, f0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    bge lbl_fn_801C4F54_00002088
    li r30, 0x1
    b lbl_fn_801C4F54_00002088
lbl_fn_801C4F54_00001DA4:
    lfs f0, lbl_808827E8
    fcmpo cr0, f1, f0
    ble lbl_fn_801C4F54_00001E0C
    addi r3, r1, 0xd4
    mr r4, r3
    bl fn_805F98D0
    lfs f5, 0xdc(r1)
    lfs f4, lbl_808827E8
    lfs f3, 0xd8(r1)
    lfs f0, 0xd4(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0xe4(r1)
    fmuls f7, f0, f4
    lfs f4, 0xe0(r1)
    lfs f0, 0xe8(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0xa4(r1)
    fadds f0, f0, f5
    stfs f6, 0xa8(r1)
    stfs f5, 0xac(r1)
    stfs f4, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f0, 0xe8(r1)
    b lbl_fn_801C4F54_00001E1C
lbl_fn_801C4F54_00001E0C:
    psq_l f1, 0x14(r29), 0, 0
    lfs f2, 0x1c(r29)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xe8(r1)
lbl_fn_801C4F54_00001E1C:
    addi r3, r1, 0xe0
    lwz r5, 0x4(r29)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xbc
    psq_st f1, 0x528(r5), 0, 0
    addi r4, r1, 0xd4
    lfs f2, 0xe8(r1)
    addi r28, r1, 0x98
    stfs f2, 0x530(r5)
    lfs f0, lbl_808827C8
    lwz r5, 0x4(r29)
    lfs f2, 0x53c(r5)
    stfs f2, 0xc4(r1)
    lfs f2, 0xdc(r1)
    psq_l f1, 0x534(r5), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C4F54_00001E9C
    lfs f3, 0x98(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C4F54_00001E90
    lfs f0, lbl_808827CC
    b lbl_fn_801C4F54_00001E94
lbl_fn_801C4F54_00001E90:
    lfs f0, lbl_808827D0
lbl_fn_801C4F54_00001E94:
    stfs f0, 0x48(r1)
    b lbl_fn_801C4F54_00001EB0
lbl_fn_801C4F54_00001E9C:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C4F54_00001EB0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x110
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808827AC
    addi r4, r1, 0x38
    lfs f31, 0x118(r1)
    mr r5, r4
    lfs f30, 0x114(r1)
    addi r3, r1, 0x140
    lfs f13, 0x110(r1)
    lfs f12, 0x128(r1)
    lfs f11, 0x124(r1)
    lfs f10, 0x120(r1)
    lfs f9, 0x138(r1)
    lfs f8, 0x134(r1)
    lfs f7, 0x130(r1)
    lfs f6, 0x13c(r1)
    lfs f5, 0x12c(r1)
    lfs f4, 0x11c(r1)
    lfs f0, lbl_808827B0
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x170(r1)
    stfs f3, 0x174(r1)
    stfs f3, 0x178(r1)
    stfs f0, 0x17c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x140(r1)
    stfs f30, 0x144(r1)
    stfs f31, 0x148(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x150(r1)
    stfs f11, 0x154(r1)
    stfs f12, 0x158(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x160(r1)
    stfs f8, 0x164(r1)
    stfs f9, 0x168(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x14c(r1)
    stfs f5, 0x15c(r1)
    stfs f6, 0x16c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808827C8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C4F54_00001FCC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808827AC
    fcmpo cr0, f3, f0
    ble lbl_fn_801C4F54_00001FBC
    lfs f0, lbl_808827CC
    b lbl_fn_801C4F54_00001FC0
lbl_fn_801C4F54_00001FBC:
    lfs f0, lbl_808827D0
lbl_fn_801C4F54_00001FC0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C4F54_00001FE0
lbl_fn_801C4F54_00001FCC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C4F54_00001FE0:
    addi r3, r1, 0x44
    lfs f4, lbl_808827AC
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8073B788@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f4
    lfs f0, 0xc0(r1)
    lfs f3, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8073B788@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808827D4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C4F54_0000202C
    lfs f0, lbl_808827D8
    fsubs f3, f3, f0
lbl_fn_801C4F54_0000202C:
    lfs f0, lbl_808827DC
    fcmpo cr0, f3, f0
    bge lbl_fn_801C4F54_00002040
    lfs f0, lbl_808827D8
    fadds f3, f3, f0
lbl_fn_801C4F54_00002040:
    lfs f0, lbl_80882808
    fcmpo cr0, f3, f0
    ble lbl_fn_801C4F54_00002054
    fmr f3, f0
    b lbl_fn_801C4F54_00002064
lbl_fn_801C4F54_00002054:
    lfs f0, lbl_80882814
    fcmpo cr0, f3, f0
    bge lbl_fn_801C4F54_00002064
    fmr f3, f0
lbl_fn_801C4F54_00002064:
    lfs f0, 0xc0(r1)
    addi r3, r1, 0xbc
    lwz r4, 0x4(r29)
    fadds f0, f0, f3
    lfs f2, 0xc4(r1)
    stfs f0, 0xc0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
lbl_fn_801C4F54_00002088:
    psq_l f31, 0x228(r1), 0, 0
    mr r3, r30
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    lwz r31, 0x1fc(r1)
    lwz r30, 0x1f8(r1)
    lwz r29, 0x1f4(r1)
    lwz r28, 0x1f0(r1)
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}
