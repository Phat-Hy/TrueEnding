#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_8010A308(void);
extern void fn_801231D0(void);
extern void fn_8016E4C4(void);
extern void fn_80179D44(void);
extern void fn_80389838(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695B00(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807382A8[];
extern u8 lbl_8077CC80[];
extern u8 lbl_8077CD00[];
extern u8 lbl_8077CD0C[];
extern u8 lbl_8077CD18[];
extern u8 lbl_8077CD24[];
extern u8 lbl_8077CD30[];
extern u8 lbl_8077CD38[];
extern u8 lbl_8077CD40[];
extern u8 lbl_8077CD48[];
extern u8 lbl_8077CDC0[];
extern u8 lbl_8077CE38[];
extern u8 lbl_8077CEB0[];
extern u8 lbl_8077CF28[];
extern u8 lbl_8077CF44[];
extern u8 lbl_8077CF60[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7B48[];
extern u8 lbl_807C7B50[];
extern u8 lbl_807C7B58[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0B0;
extern u32 lbl_8087F0B1;
extern u32 lbl_8087F0B2;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_80881E50;
extern u32 lbl_80881E54;
extern u32 lbl_80881E58;
extern u32 lbl_80881E5C;
extern u32 lbl_80881E60;
extern u32 lbl_80881E64;
extern u32 lbl_80881E68;
extern u32 lbl_80881E6C;
extern u32 lbl_80881E70;
extern u32 lbl_80881E78;
extern u32 lbl_80881E7C;
extern u32 lbl_80881E80;
extern u32 lbl_80881E84;
extern u32 lbl_80881E88;
extern u32 lbl_80881E8C;

/* Function declarations */
void fn_80187C44(void);
void fn_80187CC0(void);
void fn_80187D04(void);
void fn_80187E2C(void);
void fn_80187FF4(void);
void fn_80188060(void);
void fn_80188064(void);
void fn_80188080(void);
void fn_80188088(void);
void fn_80188090(void);
void fn_801880D0(void);
void fn_801881C4(void);
void fn_801882EC(void);
void fn_801883E8(void);
void fn_80188918(void);
void fn_8018894C(void);
void fn_80188A70(void);
void fn_80188AA0(void);
void fn_80188BC4(void);
void fn_80188BD8(void);
void fn_80188C70(void);
void fn_80188D3C(void);
void fn_80188F08(void);
void fn_80188F40(void);
void fn_8018906C(void);
void fn_8018910C(void);
void fn_801891FC(void);
void fn_801893F4(void);
void fn_80189444(void);
void fn_801894DC(void);
void fn_80189534(void);
void fn_80189574(void);

asm void fn_80187C44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807382A8@ha
    li r5, 0x0
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807382A8@l
    addi r0, r3, 0x1b4
    stw r31, 0xc(r1)
    addi r31, r4, 0x968
    cmplw r31, r0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r5, 0x1b0(r3)
    beq lbl_fn_80187C44_00000054
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r30, 0x1b4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80187C44_00000054:
    li r0, 0x0
    stw r0, 0x4c(r30)
    stw r0, 0x5ac(r30)
    stw r0, 0x5b8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80187CC0(void)
{
    nofralloc
    cmpwi r4, 0x5
    li r0, 0x5
    bgt lbl_fn_80187CC0_0000008C
    mr r0, r4
lbl_fn_80187CC0_0000008C:
    cmpwi r0, -0x5
    bge lbl_fn_80187CC0_0000009C
    li r5, -0x5
    b lbl_fn_80187CC0_000000AC
lbl_fn_80187CC0_0000009C:
    cmpwi r4, 0x5
    li r5, 0x5
    bgt lbl_fn_80187CC0_000000AC
    mr r5, r4
lbl_fn_80187CC0_000000AC:
    addi r0, r5, 0x5
    slwi r0, r0, 2
    add r3, r3, r0
    lfs f1, 0x2d4(r3)
    blr
}

asm void fn_80187D04(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r7, lbl_8077CC80@ha
    li r6, 0x0
    stw r0, 0x44(r1)
    addi r7, r7, lbl_8077CC80@l
    li r8, 0x14
    li r0, 0x81
    stw r31, 0x3c(r1)
    li r31, 0x1
    lfs f0, lbl_80881E50
    stw r30, 0x38(r1)
    lfs f1, lbl_80881E54
    stw r29, 0x34(r1)
    mr r29, r3
    lfs f2, lbl_80881E58
    stw r5, 0xc(r3)
    li r5, 0x237
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r6, 0x8(r3)
    li r6, 0x0
    stw r8, 0x10(r3)
    li r8, 0x1
    stw r4, 0x4(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r31, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f0, lbl_80881E50
    addi r3, r1, 0x8
    stfs f0, 0x238(r30)
    li r4, 0x12
    lfs f7, lbl_80881E5C
    lfs f6, lbl_80881E64
    lfs f0, lbl_80881E60
    stfs f0, 0xc(r1)
    fmr f2, f6
    lfs f5, lbl_80881E54
    stfs f7, 0x8(r1)
    lfs f4, lbl_80881E68
    lfs f3, lbl_80881E6C
    lwz r5, lbl_8087F430
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x568(r5), 0, 0
    lfs f0, lbl_80881E70
    stfs f2, 0x570(r5)
    fmr f2, f3
    stfs f5, 0x14(r1)
    stfs f4, 0x18(r1)
    psq_l f1, 0xc(r3), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x57c(r5)
    stfs f0, 0x580(r5)
    stw r31, 0x584(r5)
    lwz r3, lbl_8087F430
    stfs f6, 0x10(r1)
    addi r3, r3, 0x6c
    stfs f3, 0x1c(r1)
    stfs f0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_80389838
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80187E2C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r0, 0x8(r3)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x0
    addi r31, r3, 0xb0
    beq lbl_fn_80187E2C_00000230
    cmpwi r0, 0x1
    beq lbl_fn_80187E2C_000002C0
    cmpwi r0, 0x2
    beq lbl_fn_80187E2C_00000368
    b lbl_fn_80187E2C_0000038C
lbl_fn_80187E2C_00000230:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80187E2C_0000038C
    lfs f1, lbl_80881E54
    mr r3, r31
    lfs f2, lbl_80881E58
    li r4, 0x0
    li r5, 0x238
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881E54
    li r3, 0x0
    li r0, 0x2
    stw r3, 0x2c(r1)
    addi r4, r1, 0x28
    stw r3, 0x30(r1)
    stw r3, 0x34(r1)
    stw r3, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stw r0, 0x28(r1)
    lwz r3, 0xc(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r0, 0x8(r30)
    b lbl_fn_80187E2C_0000038C
lbl_fn_80187E2C_000002C0:
    lwz r3, lbl_8087F490
    li r0, 0x1
    li r4, 0x0
    stw r0, 0x738(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80187E2C_0000038C
    lwz r3, 0x10(r30)
    subic. r0, r3, 0x1
    stw r0, 0x10(r30)
    bgt lbl_fn_80187E2C_0000038C
    lfs f1, lbl_80881E54
    mr r3, r31
    lfs f2, lbl_80881E58
    li r4, 0x0
    li r5, 0x239
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881E54
    li r3, 0x0
    li r0, 0x3
    stw r3, 0xc(r1)
    addi r4, r1, 0x8
    stw r3, 0x10(r1)
    stw r3, 0x14(r1)
    stw r3, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    lwz r3, 0xc(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r0, 0x8(r30)
    b lbl_fn_80187E2C_0000038C
lbl_fn_80187E2C_00000368:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80187E2C_0000038C
    li r3, 0x1
    b lbl_fn_80187E2C_00000390
lbl_fn_80187E2C_0000038C:
    li r3, 0x0
lbl_fn_80187E2C_00000390:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80187FF4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x2
    bge lbl_fn_80187FF4_0000040C
    lfs f0, lbl_80881E54
    li r5, 0x0
    li r0, 0x1
    stw r5, 0xc(r1)
    addi r4, r1, 0x8
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    lwz r3, 0xc(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80187FF4_0000040C:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80188060(void)
{
    nofralloc
    blr
}

asm void fn_80188064(void)
{
    nofralloc
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_80188080(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80188088(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80188090(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80188090_00000474
    cmpwi r4, 0x0
    ble lbl_fn_80188090_00000474
    bl dtor_80084684
lbl_fn_80188090_00000474:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801880D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r10, lbl_8077CEB0@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x24(r1)
    addi r10, r10, lbl_8077CEB0@l
    lfs f2, 0x8(r5)
    li r9, 0x23
    stw r31, 0x1c(r1)
    li r0, 0x1
    lfs f0, lbl_80881E78
    li r7, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    li r5, 0x2b
    li r8, 0x1
    stw r29, 0x14(r1)
    mr r29, r3
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r3)
    lfs f2, 0x8(r6)
    li r6, 0x0
    stfs f2, 0x28(r3)
    lfs f2, lbl_80881E7C
    psq_st f1, 0x20(r3), 0, 0
    fmr f1, f0
    stw r4, 0x4(r3)
    stw r10, 0x0(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r10, 0x4(r3)
    lwz r9, 0x5c0(r10)
    clrrwi r9, r9, 1
    stw r9, 0x5c0(r10)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80881E78
    mr r3, r29
    stfs f0, 0x238(r31)
    psq_l f1, 0x0(r30), 0, 0
    lwz r4, 0x4(r29)
    lfs f2, 0x8(r30)
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    lwz r4, 0x4(r29)
    psq_l f1, 0x600(r4), 0, 0
    lfs f2, 0x608(r4)
    stfs f2, 0x10(r29)
    psq_st f1, 0x8(r29), 0, 0
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801881C4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r5, r1, 0x20
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    lfs f30, lbl_80881E80
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    lfs f29, lbl_80881E78
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    psq_l f1, 0x534(r4), 0, 0
    addi r3, r4, 0xb0
    lfs f2, 0x53c(r4)
    li r4, 0x0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801881C4_00000600
    lwz r4, 0x4(r31)
    li r3, 0x1
    lwz r0, 0x5c0(r4)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r4)
    b lbl_fn_801881C4_0000067C
lbl_fn_801881C4_00000600:
    psq_l f1, 0x8(r31), 0, 0
    addi r4, r1, 0x14
    lfs f2, 0x10(r31)
    addi r5, r1, 0x8
    stfs f2, 0x1c(r1)
    lwz r3, lbl_8087F048
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r3, 0x0
    lwz r6, 0x4(r31)
    psq_l f1, 0x600(r6), 0, 0
    lfs f2, 0x608(r6)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    beq lbl_fn_801881C4_00000640
    lfs f1, 0x5b0(r6)
    bl fn_8010A308
lbl_fn_801881C4_00000640:
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x20
    psq_st f1, 0x8(r31), 0, 0
    fmr f1, f30
    lwz r3, 0x4(r31)
    li r5, 0x0
    stfs f2, 0x10(r31)
    fmr f2, f29
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_801881C4_0000067C:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801882EC(void)
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
    fdivs f4, f31, f1
    lwz r4, 0x4(r30)
    lfs f3, 0x24(r30)
    addi r3, r1, 0x20
    lwz r0, 0x524(r4)
    lfs f0, 0x20(r30)
    fmuls f8, f3, f4
    lfs f3, 0x28(r30)
    fmuls f9, f0, f4
    mulli r0, r0, 0x2c
    lwz r5, 0x220(r31)
    fmuls f7, f3, f4
    add r5, r5, r0
    lfs f0, 0x18(r30)
    lfs f4, 0x8(r5)
    lfs f3, 0x4(r5)
    fadds f5, f4, f0
    lfs f0, 0x14(r30)
    lfs f4, 0xc(r5)
    fadds f6, f3, f0
    lfs f0, 0x1c(r30)
    fadds f10, f5, f8
    fadds f3, f4, f0
    lfs f0, lbl_80881E80
    fadds f4, f6, f9
    stfs f10, 0x24(r1)
    fadds f2, f3, f7
    stfs f4, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    stfs f0, 0x4(r5)
    stfs f0, 0x8(r5)
    stfs f0, 0xc(r5)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x54(r1)
    stfs f9, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f6, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f2, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801883E8(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x220
    bl _savegpr_27
    lwz r5, 0x4(r4)
    mr r31, r3
    addi r30, r1, 0xb4
    addi r29, r1, 0xa8
    lfs f2, 0x530(r5)
    mr r27, r4
    psq_l f1, 0x528(r5), 0, 0
    mr r3, r5
    psq_st f1, 0x0(r30), 0, 0
    lfs f4, lbl_80881E84
    psq_st f1, 0x0(r29), 0, 0
    lfs f5, 0xb8(r1)
    lfs f3, 0xac(r1)
    lfs f0, lbl_80881E88
    fadds f4, f5, f4
    stfs f2, 0xbc(r1)
    fsubs f0, f3, f0
    lwz r28, lbl_8087EE98
    stfs f2, 0xb0(r1)
    stfs f4, 0xb8(r1)
    stfs f0, 0xac(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r28
    mr r5, r30
    mr r6, r29
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_801883E8_00000B08
    lis r8, lbl_807C7030@ha
    lwz r9, 0x4(r27)
    addi r8, r8, lbl_807C7030@l
    lis r3, lbl_8077CD00@ha
    lfs f2, 0x8(r8)
    li r0, 0x0
    lwzu r7, lbl_8077CD00@l(r3)
    addi r4, r1, 0x90
    stfs f2, 0x98(r1)
    addi r11, r1, 0x78
    lwz r6, 0x4(r3)
    addi r10, r1, 0x6c
    lwz r5, 0x8(r3)
    addi r3, r1, 0x1f8
    psq_l f1, 0x0(r8), 0, 0
    addi r8, r1, 0x84
    stfs f2, 0x80(r1)
    frsp f2, f2
    addi r29, r1, 0x100
    addi r12, r1, 0x1c4
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0B1
    stfs f2, 0x8c(r1)
    extsb. r0, r0
    stfs f2, 0x74(r1)
    frsp f2, f2
    stfs f2, 0x200(r1)
    stfs f2, 0x108(r1)
    frsp f2, f2
    psq_st f1, 0x0(r4), 0, 0
    stw r7, 0x9c(r1)
    stw r6, 0xa0(r1)
    stw r5, 0xa4(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stw r9, 0x68(r1)
    psq_st f1, 0x0(r10), 0, 0
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r7, 0x40(r1)
    stw r6, 0x44(r1)
    stw r5, 0x48(r1)
    stw r7, 0x1e8(r1)
    stw r6, 0x1ec(r1)
    stw r5, 0x1f0(r1)
    stw r9, 0x1f4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stw r7, 0xf0(r1)
    stw r6, 0xf4(r1)
    stw r5, 0xf8(r1)
    stw r9, 0xfc(r1)
    psq_st f1, 0x0(r29), 0, 0
    stw r7, 0x1b4(r1)
    stw r6, 0x1b8(r1)
    stw r5, 0x1bc(r1)
    stw r9, 0x1c0(r1)
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0x1cc(r1)
    bne lbl_fn_801883E8_000009C4
    frsp f2, f2
    lis r11, lbl_807C7B50@ha
    addi r12, r1, 0x11c
    addi r8, r1, 0x170
    addi r10, r1, 0x154
    lis r4, fn_80188A70@ha
    lis r3, fn_80188AA0@ha
    stfs f2, 0x124(r1)
    li r0, 0x1
    addi r11, r11, lbl_807C7B50@l
    stfs f2, 0x178(r1)
    frsp f2, f2
    addi r4, r4, fn_80188A70@l
    addi r3, r3, fn_80188AA0@l
    stw r7, 0x10c(r1)
    stw r6, 0x110(r1)
    stw r5, 0x114(r1)
    stw r9, 0x118(r1)
    psq_st f1, 0x0(r12), 0, 0
    stw r7, 0x160(r1)
    stw r6, 0x164(r1)
    stw r5, 0x168(r1)
    stw r9, 0x16c(r1)
    psq_st f1, 0x0(r8), 0, 0
    stw r7, 0x144(r1)
    stw r6, 0x148(r1)
    stw r5, 0x14c(r1)
    stw r9, 0x150(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x15c(r1)
    stw r4, 0x4(r11)
    stw r3, 0x0(r11)
    stb r0, lbl_8087F0B1
lbl_fn_801883E8_000009C4:
    addi r3, r1, 0x1c4
    lwz r6, 0x1b4(r1)
    lwz r5, 0x1b8(r1)
    addi r8, r1, 0x138
    lwz r4, 0x1bc(r1)
    addi r7, r1, 0x1a8
    lwz r0, 0x1c0(r1)
    addi r29, r1, 0x198
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x1cc(r1)
    stw r6, 0x128(r1)
    stw r5, 0x12c(r1)
    stw r4, 0x130(r1)
    stw r0, 0x134(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x140(r1)
    stw r6, 0x198(r1)
    stw r5, 0x19c(r1)
    stw r4, 0x1a0(r1)
    stw r0, 0x1a4(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1b0(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801883E8_00000AE0
    lwz r6, 0x198(r1)
    addi r7, r1, 0x18c
    lwz r5, 0x19c(r1)
    li r3, 0x1c
    lwz r4, 0x1a0(r1)
    lwz r0, 0x1a4(r1)
    psq_l f1, 0x10(r29), 0, 0
    lfs f2, 0x1b0(r1)
    stw r6, 0x17c(r1)
    stw r5, 0x180(r1)
    stw r4, 0x184(r1)
    stw r0, 0x188(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x194(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_801883E8_00000A98
    lis r3, __files@ha
    lis r4, lbl_8077CF44@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF44@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801883E8_00000A98:
    cmpwi r29, 0x0
    beq lbl_fn_801883E8_00000AD4
    lwz r0, 0x17c(r1)
    addi r3, r1, 0x18c
    stw r0, 0x0(r29)
    lwz r0, 0x180(r1)
    stw r0, 0x4(r29)
    lwz r0, 0x184(r1)
    stw r0, 0x8(r29)
    lwz r0, 0x188(r1)
    stw r0, 0xc(r29)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    lfs f2, 0x194(r1)
    stfs f2, 0x18(r29)
lbl_fn_801883E8_00000AD4:
    stw r29, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801883E8_00000AE4
lbl_fn_801883E8_00000AE0:
    li r0, 0x0
lbl_fn_801883E8_00000AE4:
    cmpwi r0, 0x0
    beq lbl_fn_801883E8_00000AFC
    lis r3, lbl_807C7B50@ha
    addi r3, r3, lbl_807C7B50@l
    stw r3, 0x0(r31)
    b lbl_fn_801883E8_00000CBC
lbl_fn_801883E8_00000AFC:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801883E8_00000CBC
lbl_fn_801883E8_00000B08:
    lis r3, lbl_8077CD0C@ha
    lwzu r5, lbl_8077CD0C@l(r3)
    lwz r7, 0x4(r27)
    li r8, 0x2c
    lwz r4, 0x4(r3)
    li r0, 0x0
    lwz r3, 0x8(r3)
    lfs f0, lbl_80881E80
    stfs f0, 0x8(r1)
    stw r0, 0x0(r31)
    lwz r6, 0x8(r1)
    lbz r0, lbl_8087F0B0
    stw r6, 0xc(r1)
    extsb. r0, r0
    lfs f0, 0xc(r1)
    stw r7, 0x34(r1)
    stw r8, 0x38(r1)
    stfs f0, 0x3c(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x1d0(r1)
    stw r4, 0x1d4(r1)
    stw r3, 0x1d8(r1)
    stw r7, 0x1dc(r1)
    stw r8, 0x1e0(r1)
    stfs f0, 0x1e4(r1)
    bne lbl_fn_801883E8_00000BAC
    lis r6, lbl_807C7B48@ha
    lis r4, fn_80188918@ha
    lis r3, fn_8018894C@ha
    li r0, 0x1
    addi r3, r3, fn_8018894C@l
    addi r5, r6, lbl_807C7B48@l
    addi r4, r4, fn_80188918@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B48@l(r6)
    stb r0, lbl_8087F0B0
lbl_fn_801883E8_00000BAC:
    lwz r8, 0x1d0(r1)
    addi r3, r1, 0xd8
    lwz r7, 0x1d4(r1)
    lwz r6, 0x1d8(r1)
    lwz r5, 0x1dc(r1)
    lwz r4, 0x1e0(r1)
    lwz r0, 0x1e4(r1)
    stw r8, 0xd8(r1)
    stw r7, 0xdc(r1)
    stw r6, 0xe0(r1)
    stw r5, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r0, 0xec(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801883E8_00000C98
    lwz r8, 0xd8(r1)
    li r3, 0x18
    lwz r7, 0xdc(r1)
    lwz r6, 0xe0(r1)
    lwz r5, 0xe4(r1)
    lwz r4, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r8, 0xc0(r1)
    stw r7, 0xc4(r1)
    stw r6, 0xc8(r1)
    stw r5, 0xcc(r1)
    stw r4, 0xd0(r1)
    stw r0, 0xd4(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_801883E8_00000C54
    lis r3, __files@ha
    lis r4, lbl_8077CF60@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF60@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801883E8_00000C54:
    cmpwi r29, 0x0
    beq lbl_fn_801883E8_00000C8C
    lwz r0, 0xc0(r1)
    stw r0, 0x0(r29)
    lwz r0, 0xc4(r1)
    stw r0, 0x4(r29)
    lwz r0, 0xc8(r1)
    stw r0, 0x8(r29)
    lwz r0, 0xcc(r1)
    stw r0, 0xc(r29)
    lwz r0, 0xd0(r1)
    stw r0, 0x10(r29)
    lfs f0, 0xd4(r1)
    stfs f0, 0x14(r29)
lbl_fn_801883E8_00000C8C:
    stw r29, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801883E8_00000C9C
lbl_fn_801883E8_00000C98:
    li r0, 0x0
lbl_fn_801883E8_00000C9C:
    cmpwi r0, 0x0
    beq lbl_fn_801883E8_00000CB4
    lis r3, lbl_807C7B48@ha
    addi r3, r3, lbl_807C7B48@l
    stw r3, 0x0(r31)
    b lbl_fn_801883E8_00000CBC
lbl_fn_801883E8_00000CB4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801883E8_00000CBC:
    addi r11, r1, 0x220
    bl _restgpr_27
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80188918(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lfs f1, 0x14(r12)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018894C(void)
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
    bne lbl_fn_8018894C_00000D40
    lis r3, lbl_8077CD38@ha
    addi r3, r3, lbl_8077CD38@l
    stw r3, 0x0(r4)
    b lbl_fn_8018894C_00000E10
lbl_fn_8018894C_00000D40:
    cmpwi r5, 0x0
    bne lbl_fn_8018894C_00000DC0
    lwz r31, 0x0(r3)
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8018894C_00000D80
    lis r3, __files@ha
    lis r4, lbl_8077CF60@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF60@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8018894C_00000D80:
    cmpwi r30, 0x0
    beq lbl_fn_8018894C_00000DB8
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
    lfs f0, 0x14(r31)
    stfs f0, 0x14(r30)
lbl_fn_8018894C_00000DB8:
    stw r30, 0x0(r29)
    b lbl_fn_8018894C_00000E10
lbl_fn_8018894C_00000DC0:
    cmpwi r5, 0x1
    bne lbl_fn_8018894C_00000DDC
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8018894C_00000E10
lbl_fn_8018894C_00000DDC:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077CD38@ha
    lwz r4, lbl_8077CD38@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8018894C_00000E08
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_8018894C_00000E10
lbl_fn_8018894C_00000E08:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8018894C_00000E10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80188A70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    addi r4, r12, 0x10
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80188AA0(void)
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
    bne lbl_fn_80188AA0_00000E94
    lis r3, lbl_8077CD40@ha
    addi r3, r3, lbl_8077CD40@l
    stw r3, 0x0(r4)
    b lbl_fn_80188AA0_00000F64
lbl_fn_80188AA0_00000E94:
    cmpwi r5, 0x0
    bne lbl_fn_80188AA0_00000F14
    lwz r31, 0x0(r3)
    li r3, 0x1c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80188AA0_00000ED4
    lis r3, __files@ha
    lis r4, lbl_8077CF44@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF44@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80188AA0_00000ED4:
    cmpwi r30, 0x0
    beq lbl_fn_80188AA0_00000F0C
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lfs f2, 0x18(r31)
    psq_l f1, 0x10(r31), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
lbl_fn_80188AA0_00000F0C:
    stw r30, 0x0(r29)
    b lbl_fn_80188AA0_00000F64
lbl_fn_80188AA0_00000F14:
    cmpwi r5, 0x1
    bne lbl_fn_80188AA0_00000F30
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_80188AA0_00000F64
lbl_fn_80188AA0_00000F30:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077CD40@ha
    lwz r4, lbl_8077CD40@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80188AA0_00000F5C
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_80188AA0_00000F64
lbl_fn_80188AA0_00000F5C:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_80188AA0_00000F64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80188BC4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    blr
}

asm void fn_80188BD8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_8077CE38@ha
    li r6, 0x24
    stw r0, 0x14(r1)
    addi r7, r7, lbl_8077CE38@l
    li r0, 0x1
    lfs f0, lbl_80881E78
    stw r31, 0xc(r1)
    li r8, 0x1
    lfs f2, lbl_80881E7C
    stw r30, 0x8(r1)
    mr r30, r3
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r6, 0x560(r4)
    li r4, 0x0
    li r6, 0x0
    lwz r10, 0x4(r3)
    lwz r9, 0x5c0(r10)
    ori r9, r9, 0x1
    stw r9, 0x5c0(r10)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80881E78
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80188C70(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    lfs f30, lbl_80881E80
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    lfs f29, lbl_80881E78
    stw r31, 0x1c(r1)
    addi r31, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, 0x4(r3)
    psq_l f1, 0x534(r4), 0, 0
    addi r3, r4, 0xb0
    lfs f2, 0x53c(r4)
    li r4, 0x0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r31), 0, 0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80188C70_000010A0
    li r3, 0x1
    b lbl_fn_80188C70_000010C8
lbl_fn_80188C70_000010A0:
    lwz r3, 0x4(r30)
    fmr f1, f30
    fmr f2, f29
    mr r4, r31
    lwz r12, 0x0(r3)
    li r5, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_80188C70_000010C8:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80188D3C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r9, 0x0
    lwz r8, 0x4(r4)
    stw r0, 0x74(r1)
    lis r7, lbl_8077CD18@ha
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwzu r6, lbl_8077CD18@l(r7)
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
    bne lbl_fn_80188D3C_000011A4
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
lbl_fn_80188D3C_000011A4:
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
    bne lbl_fn_80188D3C_00001288
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
    bne lbl_fn_80188D3C_0000123C
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80188D3C_0000123C:
    cmpwi r30, 0x0
    beq lbl_fn_80188D3C_0000127C
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
lbl_fn_80188D3C_0000127C:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80188D3C_0000128C
lbl_fn_80188D3C_00001288:
    li r0, 0x0
lbl_fn_80188D3C_0000128C:
    cmpwi r0, 0x0
    beq lbl_fn_80188D3C_000012A4
    lis r3, lbl_807C7B58@ha
    addi r3, r3, lbl_807C7B58@l
    stw r3, 0x0(r31)
    b lbl_fn_80188D3C_000012AC
lbl_fn_80188D3C_000012A4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80188D3C_000012AC:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80188F08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lbz r4, 0x10(r12)
    lbz r5, 0x11(r12)
    lbz r6, 0x12(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80188F40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80188F40_00001334
    lis r3, lbl_8077CD30@ha
    addi r3, r3, lbl_8077CD30@l
    stw r3, 0x0(r4)
    b lbl_fn_80188F40_0000140C
lbl_fn_80188F40_00001334:
    cmpwi r5, 0x0
    bne lbl_fn_80188F40_000013BC
    lwz r30, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80188F40_00001374
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80188F40_00001374:
    cmpwi r29, 0x0
    beq lbl_fn_80188F40_000013B4
    lwz r0, 0x4(r30)
    lwz r3, 0x0(r30)
    stw r3, 0x0(r29)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r29)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r29)
    lbz r0, 0x10(r30)
    stb r0, 0x10(r29)
    lbz r0, 0x11(r30)
    stb r0, 0x11(r29)
    lbz r0, 0x12(r30)
    stb r0, 0x12(r29)
lbl_fn_80188F40_000013B4:
    stw r29, 0x0(r31)
    b lbl_fn_80188F40_0000140C
lbl_fn_80188F40_000013BC:
    cmpwi r5, 0x1
    bne lbl_fn_80188F40_000013D8
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_80188F40_0000140C
lbl_fn_80188F40_000013D8:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077CD30@ha
    lwz r4, lbl_8077CD30@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80188F40_00001404
    lwz r0, 0x0(r29)
    stw r0, 0x0(r31)
    b lbl_fn_80188F40_0000140C
lbl_fn_80188F40_00001404:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80188F40_0000140C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8018906C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, lbl_8077CDC0@ha
    li r7, 0x0
    stw r0, 0x14(r1)
    addi r8, r8, lbl_8077CDC0@l
    li r6, 0x37
    li r0, 0x23
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r8, 0x0(r3)
    stw r7, 0x8(r3)
    stw r6, 0xc(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r5, 0x4(r3)
    lwz r0, 0x5c0(r5)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r5)
    lwz r3, 0x4(r3)
    bl fn_8016E4C4
    lwz r4, 0x4(r30)
    mr r3, r30
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x8(r31)
    stfs f2, 0x530(r4)
    lwz r4, 0x4(r30)
    addi r4, r4, 0xf60
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018910C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018910C_00001570
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    bgt lbl_fn_8018910C_00001564
    lwz r3, 0x4(r3)
    li r4, 0x1
    bl fn_8016E4C4
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f1, lbl_80881E78
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f2, lbl_80881E7C
    mr r3, r31
    stfs f1, 0x24c(r31)
    li r5, 0x2e
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881E8C
    mr r3, r31
    stfs f0, 0x238(r31)
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x234(r31)
    lwz r3, 0x8(r30)
    addi r0, r3, 0x1
    stw r0, 0x8(r30)
    b lbl_fn_8018910C_0000159C
lbl_fn_8018910C_00001564:
    subi r0, r4, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_8018910C_0000159C
lbl_fn_8018910C_00001570:
    lwz r4, 0x4(r3)
    lfs f0, lbl_80881E80
    lfs f1, 0x2e4(r4)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8018910C_0000159C
    lwz r0, 0x5c0(r4)
    li r3, 0x1
    ori r0, r0, 0x1
    stw r0, 0x5c0(r4)
    b lbl_fn_8018910C_000015A0
lbl_fn_8018910C_0000159C:
    li r3, 0x0
lbl_fn_8018910C_000015A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801891FC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    lwz r0, 0x4(r4)
    stw r31, 0x6c(r1)
    mr r31, r3
    cmpwi r0, 0x0
    stw r30, 0x68(r1)
    mr r30, r4
    beq lbl_fn_801891FC_000015FC
    mr r3, r0
    li r4, 0x1
    bl fn_8016E4C4
    lwz r3, 0x4(r30)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
lbl_fn_801891FC_000015FC:
    lis r3, lbl_8077CD24@ha
    lwzu r5, lbl_8077CD24@l(r3)
    li r7, 0x0
    lwz r6, 0x4(r30)
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r7, 0x0(r31)
    lbz r0, lbl_8087F0B2
    stb r7, 0xc(r1)
    extsb. r0, r0
    stb r7, 0xd(r1)
    stb r7, 0xe(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r6, 0x5c(r1)
    stb r7, 0x60(r1)
    stb r7, 0x61(r1)
    stb r7, 0x62(r1)
    bne lbl_fn_801891FC_00001690
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
lbl_fn_801891FC_00001690:
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
    bne lbl_fn_801891FC_00001774
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
    bne lbl_fn_801891FC_00001728
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801891FC_00001728:
    cmpwi r30, 0x0
    beq lbl_fn_801891FC_00001768
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
lbl_fn_801891FC_00001768:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801891FC_00001778
lbl_fn_801891FC_00001774:
    li r0, 0x0
lbl_fn_801891FC_00001778:
    cmpwi r0, 0x0
    beq lbl_fn_801891FC_00001790
    lis r3, lbl_807C7B58@ha
    addi r3, r3, lbl_807C7B58@l
    stw r3, 0x0(r31)
    b lbl_fn_801891FC_00001798
lbl_fn_801891FC_00001790:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801891FC_00001798:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801893F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801893F4_000017EC
    mr r3, r0
    li r4, 0x1
    bl fn_8016E4C4
    lwz r3, 0x4(r31)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
lbl_fn_801893F4_000017EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80189444(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_8077CD48@ha
    li r6, 0x3c
    stw r0, 0x14(r1)
    addi r7, r7, lbl_8077CD48@l
    li r0, 0x23
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stw r6, 0x8(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r5, 0x4(r3)
    lwz r0, 0x5c0(r5)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r5)
    lwz r3, 0x4(r3)
    bl fn_8016E4C4
    lwz r4, 0x4(r30)
    mr r3, r30
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x8(r31)
    stfs f2, 0x530(r4)
    lwz r4, 0x4(r30)
    addi r4, r4, 0xf60
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801894DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    bgt lbl_fn_801894DC_000018D4
    lwz r5, 0x4(r3)
    li r4, 0x1
    lwz r0, 0x5c0(r5)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r5)
    lwz r3, 0x4(r3)
    bl fn_8016E4C4
    li r3, 0x1
    b lbl_fn_801894DC_000018E0
lbl_fn_801894DC_000018D4:
    subi r0, r4, 0x1
    stw r0, 0x8(r3)
    li r3, 0x0
lbl_fn_801894DC_000018E0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80189534(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80189534_00001918
    cmpwi r4, 0x0
    ble lbl_fn_80189534_00001918
    bl dtor_80084684
lbl_fn_80189534_00001918:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80189574(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80189574_00001958
    cmpwi r4, 0x0
    ble lbl_fn_80189574_00001958
    bl dtor_80084684
lbl_fn_80189574_00001958:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
