#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void fn_8004D388(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80108C10(void);
extern void fn_801231D0(void);
extern void fn_80144710(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_80176548(void);
extern void fn_80188A70(void);
extern void fn_80188AA0(void);
extern void fn_80192758(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80739700[];
extern u8 lbl_80739708[];
extern u8 lbl_8077CF44[];
extern u8 lbl_8077DD08[];
extern u8 lbl_8077DD14[];
extern u8 lbl_8077E670[];
extern u8 lbl_8077E6E8[];
extern u8 lbl_8077E760[];
extern u8 lbl_8077E7D8[];
extern u8 lbl_807C7B50[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0B1;
extern u32 lbl_8087F490;
extern u32 lbl_80881FBC;
extern u32 lbl_80881FCC;
extern u32 lbl_80881FD0;
extern u32 lbl_80881FD4;
extern u32 lbl_80881FD8;
extern u32 lbl_80881FDC;
extern u32 lbl_80881FE8;
extern u32 lbl_80882008;
extern u32 lbl_80882030;
extern u32 lbl_80882094;
extern u32 lbl_80882098;
extern u32 lbl_8088209C;
extern u32 lbl_808820E0;
extern u32 lbl_808820E4;
extern u32 lbl_808820E8;
extern u32 lbl_808820EC;

/* Function declarations */
void fn_801971B8(void);
void fn_80197518(void);
void fn_80197528(void);
void fn_801975F4(void);
void fn_801978C0(void);
void fn_80197994(void);
void fn_80197A68(void);
void fn_80197DC8(void);
void fn_801980B4(void);
void fn_80198400(void);
void fn_80198514(void);
void fn_80198528(void);
void fn_80198874(void);

asm void fn_801971B8(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stw r31, 0x1bc(r1)
    mr r31, r3
    stw r30, 0x1b8(r1)
    mr r30, r4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_801971B8_00000344
    lwz r5, 0x4(r4)
    addi r3, r1, 0x180
    lfs f3, lbl_80881FCC
    li r4, 0x79
    lfs f0, lbl_80881FBC
    stfs f3, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x60
    addi r3, r1, 0x180
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x68(r1)
    lis r3, lbl_8077DD08@ha
    lwzu r7, lbl_8077DD08@l(r3)
    li r0, 0x0
    fneg f4, f0
    lwz r8, 0x4(r30)
    lwz r6, 0x4(r3)
    addi r10, r1, 0x6c
    lwz r5, 0x8(r3)
    addi r11, r1, 0x48
    frsp f2, f4
    lfs f3, 0x64(r1)
    lfs f0, 0x60(r1)
    addi r4, r1, 0x54
    stfs f2, 0x50(r1)
    fneg f3, f3
    stfs f2, 0x5c(r1)
    frsp f2, f2
    fneg f0, f0
    addi r9, r1, 0x3c
    stw r0, 0x0(r31)
    addi r3, r1, 0x174
    addi r30, r1, 0x94
    stfs f2, 0x44(r1)
    frsp f2, f2
    lbz r0, lbl_8087F0B1
    stfs f0, 0x6c(r1)
    addi r12, r1, 0x158
    extsb. r0, r0
    stfs f3, 0x70(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f2, 0x17c(r1)
    stfs f2, 0x9c(r1)
    frsp f2, f2
    stfs f4, 0x74(r1)
    stw r7, 0x78(r1)
    stw r6, 0x7c(r1)
    stw r5, 0x80(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stw r8, 0x38(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r7, 0x164(r1)
    stw r6, 0x168(r1)
    stw r5, 0x16c(r1)
    stw r8, 0x170(r1)
    psq_st f1, 0x0(r3), 0, 0
    stw r7, 0x84(r1)
    stw r6, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r8, 0x90(r1)
    psq_st f1, 0x0(r30), 0, 0
    stw r7, 0x148(r1)
    stw r6, 0x14c(r1)
    stw r5, 0x150(r1)
    stw r8, 0x154(r1)
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0x160(r1)
    bne lbl_fn_801971B8_00000200
    frsp f2, f2
    lis r11, lbl_807C7B50@ha
    addi r12, r1, 0xb0
    addi r9, r1, 0x104
    addi r10, r1, 0xe8
    lis r4, fn_80188A70@ha
    lis r3, fn_80188AA0@ha
    stfs f2, 0xb8(r1)
    li r0, 0x1
    addi r11, r11, lbl_807C7B50@l
    stfs f2, 0x10c(r1)
    frsp f2, f2
    addi r4, r4, fn_80188A70@l
    addi r3, r3, fn_80188AA0@l
    stw r7, 0xa0(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r8, 0xac(r1)
    psq_st f1, 0x0(r12), 0, 0
    stw r7, 0xf4(r1)
    stw r6, 0xf8(r1)
    stw r5, 0xfc(r1)
    stw r8, 0x100(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r7, 0xd8(r1)
    stw r6, 0xdc(r1)
    stw r5, 0xe0(r1)
    stw r8, 0xe4(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0xf0(r1)
    stw r4, 0x4(r11)
    stw r3, 0x0(r11)
    stb r0, lbl_8087F0B1
lbl_fn_801971B8_00000200:
    addi r3, r1, 0x158
    lwz r6, 0x148(r1)
    lwz r5, 0x14c(r1)
    addi r8, r1, 0xcc
    lwz r4, 0x150(r1)
    addi r7, r1, 0x13c
    lwz r0, 0x154(r1)
    addi r30, r1, 0x12c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x160(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r0, 0xc8(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0xd4(r1)
    stw r6, 0x12c(r1)
    stw r5, 0x130(r1)
    stw r4, 0x134(r1)
    stw r0, 0x138(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x144(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801971B8_0000031C
    lwz r6, 0x12c(r1)
    addi r7, r1, 0x120
    lwz r5, 0x130(r1)
    li r3, 0x1c
    lwz r4, 0x134(r1)
    lwz r0, 0x138(r1)
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x144(r1)
    stw r6, 0x110(r1)
    stw r5, 0x114(r1)
    stw r4, 0x118(r1)
    stw r0, 0x11c(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x128(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801971B8_000002D4
    lis r3, __files@ha
    lis r4, lbl_8077CF44@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF44@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801971B8_000002D4:
    cmpwi r30, 0x0
    beq lbl_fn_801971B8_00000310
    lwz r0, 0x110(r1)
    addi r3, r1, 0x120
    stw r0, 0x0(r30)
    lwz r0, 0x114(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x118(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x11c(r1)
    stw r0, 0xc(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    lfs f2, 0x128(r1)
    stfs f2, 0x18(r30)
lbl_fn_801971B8_00000310:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801971B8_00000320
lbl_fn_801971B8_0000031C:
    li r0, 0x0
lbl_fn_801971B8_00000320:
    cmpwi r0, 0x0
    beq lbl_fn_801971B8_00000338
    lis r3, lbl_807C7B50@ha
    addi r3, r3, lbl_807C7B50@l
    stw r3, 0x0(r31)
    b lbl_fn_801971B8_00000348
lbl_fn_801971B8_00000338:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801971B8_00000348
lbl_fn_801971B8_00000344:
    bl fn_80192758
lbl_fn_801971B8_00000348:
    lwz r0, 0x1c4(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80197518(void)
{
    nofralloc
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80881FBC
    stfs f0, 0x3a4(r3)
    blr
}

asm void fn_80197528(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_8077E7D8@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    addi r7, r7, lbl_8077E7D8@l
    li r0, 0x6e
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stw r5, 0x8(r3)
    stw r6, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80197528_000003CC
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_80197528_000003CC:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80197528_000003E0
    bl fn_801539E0
lbl_fn_80197528_000003E0:
    lwz r3, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f1, lbl_80881FCC
    stw r0, 0x34c(r3)
    li r5, 0x21c
    lfs f2, lbl_80881FDC
    li r6, 0x0
    stfs f0, 0x24c(r3)
    li r7, 0x0
    li r8, 0x1
    lwz r9, 0x8(r31)
    lfs f0, 0x2e8(r9)
    stfs f0, 0x238(r3)
    bl fn_80097C08
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801975F4(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r5, 0x8(r3)
    lwz r4, 0x4(r3)
    lfs f0, 0x2e8(r5)
    stfs f0, 0x2e8(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801975F4_000004A4
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_801975F4_000006E0
lbl_fn_801975F4_000004A4:
    lwz r3, 0x8(r3)
    addi r31, r1, 0x5c
    lfs f3, lbl_80881FCC
    lfs f4, 0x530(r3)
    lfs f0, 0x530(r4)
    lfs f5, 0x528(r3)
    fsubs f2, f4, f0
    lfs f4, 0x528(r4)
    lfs f0, lbl_80881FD0
    fsubs f1, f5, f4
    stfs f2, 0x64(r1)
    fabs f4, f2
    stfs f1, 0x5c(r1)
    frsp f4, f4
    stfs f3, 0x60(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_801975F4_00000504
    fcmpo cr0, f1, f3
    ble lbl_fn_801975F4_000004F8
    lfs f0, lbl_80881FD4
    b lbl_fn_801975F4_000004FC
lbl_fn_801975F4_000004F8:
    lfs f0, lbl_80881FD8
lbl_fn_801975F4_000004FC:
    stfs f0, 0xc(r1)
    b lbl_fn_801975F4_00000510
lbl_fn_801975F4_00000504:
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_801975F4_00000510:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x14
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f31, 0xc4(r1)
    lfs f30, 0xb4(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801975F4_0000062C
    lfs f3, 0x18(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_801975F4_0000061C
    lfs f0, lbl_80881FD4
    b lbl_fn_801975F4_00000620
lbl_fn_801975F4_0000061C:
    lfs f0, lbl_80881FD8
lbl_fn_801975F4_00000620:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_801975F4_00000640
lbl_fn_801975F4_0000062C:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_801975F4_00000640:
    addi r3, r1, 0x8
    lwz r5, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x50
    psq_st f1, 0x0(r31), 0, 0
    lis r3, lbl_80739700@ha
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x60(r1)
    lfs f2, lbl_80881FCC
    lfs f0, 0x54(r1)
    stfs f2, 0x10(r1)
    fsubs f1, f3, f0
    stfs f2, 0x64(r1)
    lfs f2, 0x53c(r5)
    stfs f2, 0x58(r1)
    lfd f2, lbl_80739700@l(r3)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80881FE8
    fcmpo cr0, f4, f0
    ble lbl_fn_801975F4_000006A0
    lfs f0, lbl_80882094
    fsubs f4, f4, f0
lbl_fn_801975F4_000006A0:
    lfs f0, lbl_80882098
    fcmpo cr0, f4, f0
    bge lbl_fn_801975F4_000006B4
    lfs f0, lbl_80882094
    fadds f4, f4, f0
lbl_fn_801975F4_000006B4:
    lfs f3, lbl_80882008
    addi r4, r1, 0x50
    lfs f0, 0x54(r1)
    li r3, 0x0
    lwz r5, 0x4(r30)
    fmadds f0, f3, f4, f0
    lfs f2, 0x58(r1)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
lbl_fn_801975F4_000006E0:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_801978C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, lbl_8077E760@ha
    li r7, 0x14
    stw r0, 0x14(r1)
    addi r8, r8, lbl_8077E760@l
    li r6, 0x0
    li r0, 0x6e
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x4(r3)
    stw r8, 0x0(r3)
    stw r5, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801978C0_0000076C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801978C0_0000076C:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801978C0_00000780
    bl fn_801539E0
lbl_fn_801978C0_00000780:
    lwz r5, 0x4(r31)
    li r0, 0x1
    lwz r3, 0x8(r31)
    li r4, 0x0
    stw r3, 0xf1c(r5)
    addi r3, r5, 0xb0
    lfs f0, lbl_80881FBC
    li r6, 0x1
    stw r0, 0x3fc(r5)
    li r5, 0x21d
    lfs f1, lbl_80881FCC
    li r7, 0x0
    stfs f0, 0x24c(r3)
    li r8, 0x1
    lfs f2, lbl_80881FDC
    stfs f0, 0x238(r3)
    bl fn_80097C08
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80197994(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80197994_00000828
    li r0, 0x0
    stw r0, 0xf1c(r4)
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_80197994_0000089C
lbl_fn_80197994_00000828:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80197994_00000870
    lwz r4, lbl_8087F490
    li r0, 0x1
    stw r0, 0x738(r4)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80197994_00000870
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80197994_00000870
    lwz r3, 0xc(r31)
    subi r0, r3, 0x1
    stw r0, 0xc(r31)
lbl_fn_80197994_00000870:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_80197994_00000898
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_80197994_0000089C
lbl_fn_80197994_00000898:
    li r3, 0x0
lbl_fn_80197994_0000089C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80197A68(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stw r31, 0x1bc(r1)
    mr r31, r3
    stw r30, 0x1b8(r1)
    mr r30, r4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_80197A68_00000BF4
    lwz r5, 0x4(r4)
    addi r3, r1, 0x180
    lfs f3, lbl_80881FCC
    li r4, 0x79
    lfs f0, lbl_80881FBC
    stfs f3, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x60
    addi r3, r1, 0x180
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x68(r1)
    lis r3, lbl_8077DD14@ha
    lwzu r7, lbl_8077DD14@l(r3)
    li r0, 0x0
    fneg f4, f0
    lwz r8, 0x4(r30)
    lwz r6, 0x4(r3)
    addi r10, r1, 0x6c
    lwz r5, 0x8(r3)
    addi r11, r1, 0x48
    frsp f2, f4
    lfs f3, 0x64(r1)
    lfs f0, 0x60(r1)
    addi r4, r1, 0x54
    stfs f2, 0x50(r1)
    fneg f3, f3
    stfs f2, 0x5c(r1)
    frsp f2, f2
    fneg f0, f0
    addi r9, r1, 0x3c
    stw r0, 0x0(r31)
    addi r3, r1, 0x174
    addi r30, r1, 0x94
    stfs f2, 0x44(r1)
    frsp f2, f2
    lbz r0, lbl_8087F0B1
    stfs f0, 0x6c(r1)
    addi r12, r1, 0x158
    extsb. r0, r0
    stfs f3, 0x70(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f2, 0x17c(r1)
    stfs f2, 0x9c(r1)
    frsp f2, f2
    stfs f4, 0x74(r1)
    stw r7, 0x78(r1)
    stw r6, 0x7c(r1)
    stw r5, 0x80(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stw r8, 0x38(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r7, 0x164(r1)
    stw r6, 0x168(r1)
    stw r5, 0x16c(r1)
    stw r8, 0x170(r1)
    psq_st f1, 0x0(r3), 0, 0
    stw r7, 0x84(r1)
    stw r6, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r8, 0x90(r1)
    psq_st f1, 0x0(r30), 0, 0
    stw r7, 0x148(r1)
    stw r6, 0x14c(r1)
    stw r5, 0x150(r1)
    stw r8, 0x154(r1)
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0x160(r1)
    bne lbl_fn_80197A68_00000AB0
    frsp f2, f2
    lis r11, lbl_807C7B50@ha
    addi r12, r1, 0xb0
    addi r9, r1, 0x104
    addi r10, r1, 0xe8
    lis r4, fn_80188A70@ha
    lis r3, fn_80188AA0@ha
    stfs f2, 0xb8(r1)
    li r0, 0x1
    addi r11, r11, lbl_807C7B50@l
    stfs f2, 0x10c(r1)
    frsp f2, f2
    addi r4, r4, fn_80188A70@l
    addi r3, r3, fn_80188AA0@l
    stw r7, 0xa0(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r8, 0xac(r1)
    psq_st f1, 0x0(r12), 0, 0
    stw r7, 0xf4(r1)
    stw r6, 0xf8(r1)
    stw r5, 0xfc(r1)
    stw r8, 0x100(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r7, 0xd8(r1)
    stw r6, 0xdc(r1)
    stw r5, 0xe0(r1)
    stw r8, 0xe4(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0xf0(r1)
    stw r4, 0x4(r11)
    stw r3, 0x0(r11)
    stb r0, lbl_8087F0B1
lbl_fn_80197A68_00000AB0:
    addi r3, r1, 0x158
    lwz r6, 0x148(r1)
    lwz r5, 0x14c(r1)
    addi r8, r1, 0xcc
    lwz r4, 0x150(r1)
    addi r7, r1, 0x13c
    lwz r0, 0x154(r1)
    addi r30, r1, 0x12c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x160(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r0, 0xc8(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0xd4(r1)
    stw r6, 0x12c(r1)
    stw r5, 0x130(r1)
    stw r4, 0x134(r1)
    stw r0, 0x138(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x144(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80197A68_00000BCC
    lwz r6, 0x12c(r1)
    addi r7, r1, 0x120
    lwz r5, 0x130(r1)
    li r3, 0x1c
    lwz r4, 0x134(r1)
    lwz r0, 0x138(r1)
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x144(r1)
    stw r6, 0x110(r1)
    stw r5, 0x114(r1)
    stw r4, 0x118(r1)
    stw r0, 0x11c(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x128(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80197A68_00000B84
    lis r3, __files@ha
    lis r4, lbl_8077CF44@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF44@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80197A68_00000B84:
    cmpwi r30, 0x0
    beq lbl_fn_80197A68_00000BC0
    lwz r0, 0x110(r1)
    addi r3, r1, 0x120
    stw r0, 0x0(r30)
    lwz r0, 0x114(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x118(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x11c(r1)
    stw r0, 0xc(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    lfs f2, 0x128(r1)
    stfs f2, 0x18(r30)
lbl_fn_80197A68_00000BC0:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80197A68_00000BD0
lbl_fn_80197A68_00000BCC:
    li r0, 0x0
lbl_fn_80197A68_00000BD0:
    cmpwi r0, 0x0
    beq lbl_fn_80197A68_00000BE8
    lis r3, lbl_807C7B50@ha
    addi r3, r3, lbl_807C7B50@l
    stw r3, 0x0(r31)
    b lbl_fn_80197A68_00000BF8
lbl_fn_80197A68_00000BE8:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_80197A68_00000BF8
lbl_fn_80197A68_00000BF4:
    bl fn_80192758
lbl_fn_80197A68_00000BF8:
    lwz r0, 0x1c4(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80197DC8(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stfd f28, 0x150(r1)
    psq_st f28, 0x158(r1), 0, 0
    stfd f27, 0x140(r1)
    psq_st f27, 0x148(r1), 0, 0
    stfd f26, 0x130(r1)
    psq_st f26, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    mr r29, r3
    lwz r4, 0x4(r3)
    lwz r7, 0xf1c(r4)
    cmpwi r7, 0x0
    beq lbl_fn_80197DC8_00000EA4
    lfs f7, lbl_80881FCC
    addi r31, r1, 0x68
    lfs f0, lbl_80881FBC
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r7), 0, 0
    addi r6, r1, 0x5c
    psq_l f2, 0x8(r7), 0, 0
    mr r4, r31
    psq_l f3, 0x10(r7), 0, 0
    mr r5, r31
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    fmr f2, f0
    psq_st f4, 0x18(r3), 0, 0
    stfs f7, 0x5c(r1)
    stfs f7, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0xf4(r1)
    stfs f7, 0x104(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x64(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F93C0
    lfs f2, 0x70(r1)
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    fabs f7, f2
    lfs f0, lbl_80881FD0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0x58(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80197DC8_00000D30
    lfs f7, 0x50(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80197DC8_00000D24
    lfs f0, lbl_80881FD4
    b lbl_fn_80197DC8_00000D28
lbl_fn_80197DC8_00000D24:
    lfs f0, lbl_80881FD8
lbl_fn_80197DC8_00000D28:
    stfs f0, 0x48(r1)
    b lbl_fn_80197DC8_00000D44
lbl_fn_80197DC8_00000D30:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80197DC8_00000D44:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f26, 0x80(r1)
    mr r5, r4
    lfs f27, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f28, 0x78(r1)
    lfs f29, 0x90(r1)
    lfs f30, 0x8c(r1)
    lfs f31, 0x88(r1)
    lfs f13, 0xa0(r1)
    lfs f12, 0x9c(r1)
    lfs f11, 0x98(r1)
    lfs f10, 0xa4(r1)
    lfs f9, 0x94(r1)
    lfs f8, 0x84(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f7, 0xd8(r1)
    stfs f7, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f28, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f28, 0xa8(r1)
    stfs f27, 0xac(r1)
    stfs f26, 0xb0(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f31, 0xb8(r1)
    stfs f30, 0xbc(r1)
    stfs f29, 0xc0(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0xc8(r1)
    stfs f12, 0xcc(r1)
    stfs f13, 0xd0(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xc4(r1)
    stfs f10, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80197DC8_00000E60
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80197DC8_00000E50
    lfs f0, lbl_80881FD4
    b lbl_fn_80197DC8_00000E54
lbl_fn_80197DC8_00000E50:
    lfs f0, lbl_80881FD8
lbl_fn_80197DC8_00000E54:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80197DC8_00000E74
lbl_fn_80197DC8_00000E60:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80197DC8_00000E74:
    addi r3, r1, 0x44
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r29)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, 0x4(r29)
    bl fn_80144710
lbl_fn_80197DC8_00000EA4:
    lwz r3, 0x4(r29)
    li r0, 0x0
    stw r0, 0xf1c(r3)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    psq_l f28, 0x158(r1), 0, 0
    lfd f28, 0x150(r1)
    psq_l f27, 0x148(r1), 0, 0
    lfd f27, 0x140(r1)
    psq_l f26, 0x138(r1), 0, 0
    lfd f26, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_801980B4(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    lis r5, lbl_8077E6E8@ha
    stw r0, 0x194(r1)
    addi r5, r5, lbl_8077E6E8@l
    li r0, 0x70
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stfd f28, 0x150(r1)
    psq_st f28, 0x158(r1), 0, 0
    stfd f27, 0x140(r1)
    psq_st f27, 0x148(r1), 0, 0
    stfd f26, 0x130(r1)
    psq_st f26, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    stw r5, 0x0(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r7, 0xf1c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_801980B4_000011A8
    lfs f7, lbl_80881FCC
    addi r31, r1, 0x68
    lfs f0, lbl_80881FBC
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r7), 0, 0
    addi r6, r1, 0x5c
    psq_l f2, 0x8(r7), 0, 0
    mr r4, r31
    psq_l f3, 0x10(r7), 0, 0
    mr r5, r31
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    fmr f2, f0
    psq_st f4, 0x18(r3), 0, 0
    stfs f7, 0x5c(r1)
    stfs f7, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0xf4(r1)
    stfs f7, 0x104(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x64(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F93C0
    lfs f2, 0x70(r1)
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    fabs f7, f2
    lfs f0, lbl_80881FD0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0x58(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_801980B4_00001034
    lfs f7, 0x50(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_801980B4_00001028
    lfs f0, lbl_80881FD4
    b lbl_fn_801980B4_0000102C
lbl_fn_801980B4_00001028:
    lfs f0, lbl_80881FD8
lbl_fn_801980B4_0000102C:
    stfs f0, 0x48(r1)
    b lbl_fn_801980B4_00001048
lbl_fn_801980B4_00001034:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801980B4_00001048:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f26, 0x80(r1)
    mr r5, r4
    lfs f27, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f28, 0x78(r1)
    lfs f29, 0x90(r1)
    lfs f30, 0x8c(r1)
    lfs f31, 0x88(r1)
    lfs f13, 0xa0(r1)
    lfs f12, 0x9c(r1)
    lfs f11, 0x98(r1)
    lfs f10, 0xa4(r1)
    lfs f9, 0x94(r1)
    lfs f8, 0x84(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f7, 0xd8(r1)
    stfs f7, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f28, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f28, 0xa8(r1)
    stfs f27, 0xac(r1)
    stfs f26, 0xb0(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f31, 0xb8(r1)
    stfs f30, 0xbc(r1)
    stfs f29, 0xc0(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0xc8(r1)
    stfs f12, 0xcc(r1)
    stfs f13, 0xd0(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xc4(r1)
    stfs f10, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_801980B4_00001164
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_801980B4_00001154
    lfs f0, lbl_80881FD4
    b lbl_fn_801980B4_00001158
lbl_fn_801980B4_00001154:
    lfs f0, lbl_80881FD8
lbl_fn_801980B4_00001158:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801980B4_00001178
lbl_fn_801980B4_00001164:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801980B4_00001178:
    addi r3, r1, 0x44
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r29)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, 0x4(r29)
    bl fn_80144710
lbl_fn_801980B4_000011A8:
    lwz r3, 0x4(r29)
    li r4, 0x0
    li r0, 0x1
    lfs f0, lbl_80881FBC
    stw r4, 0xf1c(r3)
    li r4, 0x0
    lfs f1, lbl_80881FCC
    li r5, 0x1de
    lwz r3, 0x4(r29)
    li r6, 0x0
    lfs f2, lbl_80881FDC
    li r7, 0x0
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    li r8, 0x1
    stfs f0, 0x24c(r30)
    mr r3, r30
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r29
    stfs f0, 0x238(r30)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    psq_l f28, 0x158(r1), 0, 0
    lfd f28, 0x150(r1)
    psq_l f27, 0x148(r1), 0, 0
    lfd f27, 0x140(r1)
    psq_l f26, 0x138(r1), 0, 0
    lfd f26, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80198400(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f0, lbl_80882030
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f3, 0x2e4(r5)
    addi r31, r5, 0xb0
    fcmpo cr0, f3, f0
    bge lbl_fn_80198400_00001314
    lfs f3, lbl_80881FCC
    addi r3, r1, 0x30
    lfs f0, lbl_80881FBC
    li r4, 0x79
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
    lfs f4, lbl_808820E0
    fneg f6, f3
    lwz r4, 0x4(r30)
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
lbl_fn_80198400_00001314:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80198400_00001338
    li r3, 0x1
    b lbl_fn_80198400_0000133C
lbl_fn_80198400_00001338:
    li r3, 0x0
lbl_fn_80198400_0000133C:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80198514(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x6b8(r3), 0, 0
    stfs f2, 0x6c0(r3)
    blr
}

asm void fn_80198528(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    lis r5, lbl_8077E670@ha
    stw r0, 0x194(r1)
    addi r5, r5, lbl_8077E670@l
    li r0, 0x6f
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stfd f28, 0x150(r1)
    psq_st f28, 0x158(r1), 0, 0
    stfd f27, 0x140(r1)
    psq_st f27, 0x148(r1), 0, 0
    stfd f26, 0x130(r1)
    psq_st f26, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    stw r5, 0x0(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r7, 0xf1c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80198528_0000161C
    lfs f7, lbl_80881FCC
    addi r31, r1, 0x68
    lfs f0, lbl_80881FBC
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r7), 0, 0
    addi r6, r1, 0x5c
    psq_l f2, 0x8(r7), 0, 0
    mr r4, r31
    psq_l f3, 0x10(r7), 0, 0
    mr r5, r31
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    fmr f2, f0
    psq_st f4, 0x18(r3), 0, 0
    stfs f7, 0x5c(r1)
    stfs f7, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0xf4(r1)
    stfs f7, 0x104(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x64(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F93C0
    lfs f2, 0x70(r1)
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    fabs f7, f2
    lfs f0, lbl_80881FD0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0x58(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80198528_000014A8
    lfs f7, 0x50(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80198528_0000149C
    lfs f0, lbl_80881FD4
    b lbl_fn_80198528_000014A0
lbl_fn_80198528_0000149C:
    lfs f0, lbl_80881FD8
lbl_fn_80198528_000014A0:
    stfs f0, 0x48(r1)
    b lbl_fn_80198528_000014BC
lbl_fn_80198528_000014A8:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80198528_000014BC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f26, 0x80(r1)
    mr r5, r4
    lfs f27, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f28, 0x78(r1)
    lfs f29, 0x90(r1)
    lfs f30, 0x8c(r1)
    lfs f31, 0x88(r1)
    lfs f13, 0xa0(r1)
    lfs f12, 0x9c(r1)
    lfs f11, 0x98(r1)
    lfs f10, 0xa4(r1)
    lfs f9, 0x94(r1)
    lfs f8, 0x84(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f7, 0xd8(r1)
    stfs f7, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f28, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f28, 0xa8(r1)
    stfs f27, 0xac(r1)
    stfs f26, 0xb0(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f31, 0xb8(r1)
    stfs f30, 0xbc(r1)
    stfs f29, 0xc0(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0xc8(r1)
    stfs f12, 0xcc(r1)
    stfs f13, 0xd0(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xc4(r1)
    stfs f10, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80198528_000015D8
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80198528_000015C8
    lfs f0, lbl_80881FD4
    b lbl_fn_80198528_000015CC
lbl_fn_80198528_000015C8:
    lfs f0, lbl_80881FD8
lbl_fn_80198528_000015CC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80198528_000015EC
lbl_fn_80198528_000015D8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80198528_000015EC:
    addi r3, r1, 0x44
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r29)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, 0x4(r29)
    bl fn_80144710
lbl_fn_80198528_0000161C:
    lwz r3, 0x4(r29)
    li r4, 0x0
    li r0, 0x1
    lfs f0, lbl_80881FBC
    stw r4, 0xf1c(r3)
    li r4, 0x0
    lfs f1, lbl_80881FCC
    li r5, 0x21e
    lwz r3, 0x4(r29)
    li r6, 0x0
    lfs f2, lbl_80881FDC
    li r7, 0x0
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    li r8, 0x1
    stfs f0, 0x24c(r30)
    mr r3, r30
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r29
    stfs f0, 0x238(r30)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    psq_l f28, 0x158(r1), 0, 0
    lfd f28, 0x150(r1)
    psq_l f27, 0x148(r1), 0, 0
    lfd f27, 0x140(r1)
    psq_l f26, 0x138(r1), 0, 0
    lfd f26, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80198874(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    lfs f0, lbl_808820E4
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stw r31, 0x22c(r1)
    stw r30, 0x228(r1)
    mr r30, r3
    stw r29, 0x224(r1)
    stw r28, 0x220(r1)
    lwz r28, 0x4(r3)
    lfs f7, 0x2e4(r28)
    addi r31, r28, 0xb0
    fcmpo cr0, f7, f0
    bge lbl_fn_80198874_0000194C
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x210(r1)
    lis r3, lbl_80739708@ha
    lwz r0, 0x30(r4)
    addi r29, r1, 0x190
    lfs f8, lbl_80881FCC
    mullw r0, r0, r0
    lfs f0, lbl_80881FBC
    lfs f7, lbl_808820EC
    lfd f11, lbl_80739708@l(r3)
    stfs f7, 0x48(r1)
    lfs f9, lbl_808820E8
    xoris r0, r0, 0x8000
    stw r0, 0x214(r1)
    lfd f10, 0x210(r1)
    stfs f8, 0x40(r1)
    fsubs f7, f10, f11
    stfs f8, 0x1bc(r1)
    fdivs f7, f9, f7
    stfs f8, 0x1b4(r1)
    stfs f8, 0x1b0(r1)
    stfs f8, 0x1ac(r1)
    stfs f8, 0x1a8(r1)
    stfs f8, 0x1a0(r1)
    stfs f7, 0x44(r1)
    stfs f8, 0x19c(r1)
    stfs f8, 0x198(r1)
    stfs f8, 0x194(r1)
    stfs f0, 0x1b8(r1)
    stfs f0, 0x1a4(r1)
    stfs f0, 0x190(r1)
    lfs f1, 0x53c(r28)
    fcmpu cr0, f8, f1
    beq lbl_fn_80198874_000017D8
    addi r3, r1, 0xa0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xa0
    addi r5, r1, 0x70
    bl fn_805F89F0
    addi r3, r1, 0x70
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
lbl_fn_80198874_000017D8:
    lfs f0, lbl_80881FCC
    lfs f1, 0x538(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_80198874_00001838
    addi r3, r1, 0x100
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x100
    addi r5, r1, 0xd0
    bl fn_805F89F0
    addi r3, r1, 0xd0
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
lbl_fn_80198874_00001838:
    lfs f0, lbl_80881FCC
    lfs f1, 0x534(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_80198874_00001898
    addi r3, r1, 0x160
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x160
    addi r5, r1, 0x130
    bl fn_805F89F0
    addi r3, r1, 0x130
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
lbl_fn_80198874_00001898:
    addi r4, r1, 0x40
    addi r3, r1, 0x190
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x0
    stw r0, 0x1f4(r1)
    addi r3, r1, 0x30
    stw r0, 0x1f8(r1)
    stw r0, 0x1fc(r1)
    stw r0, 0x200(r1)
    lwz r4, 0x4(r30)
    addi r5, r4, 0x528
    bl fn_80176548
    lwz r6, 0x4(r30)
    addi r4, r1, 0x1c0
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x30
    addi r8, r6, 0x5b8
    lfs f1, 0x3c(r1)
    addi r6, r1, 0x40
    lis r7, 0x8000
    li r9, 0x0
    bl fn_8004D388
    addi r4, r1, 0x1d0
    lwz r5, 0x4(r30)
    addi r3, r1, 0x20
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x5a8(r5)
    lfs f7, 0x24(r1)
    lfs f9, 0x20(r1)
    fsubs f7, f7, f0
    lfs f8, 0x5a4(r5)
    lfs f0, 0x3c(r1)
    fsubs f8, f9, f8
    lfs f2, 0x1d8(r1)
    fsubs f0, f7, f0
    lfs f7, 0x5ac(r5)
    stfs f8, 0x20(r1)
    fsubs f2, f2, f7
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0x530(r5)
lbl_fn_80198874_0000194C:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80198874_00001A1C
    lwz r0, 0x6c(r1)
    li r6, 0x0
    li r11, -0x1
    lfs f10, lbl_80881FCC
    clrlwi r10, r0, 4
    li r7, 0x2710
    li r0, 0x1
    stw r6, 0x58(r1)
    lfs f9, lbl_8088209C
    addi r5, r1, 0x14
    stw r6, 0x5c(r1)
    addi r4, r1, 0x50
    lwz r3, lbl_8087F048
    li r8, 0x0
    stw r6, 0x60(r1)
    li r6, 0x0
    li r9, 0x0
    stw r11, 0x64(r1)
    stw r10, 0x6c(r1)
    stw r11, 0x68(r1)
    stw r7, 0x54(r1)
    stw r0, 0x50(r1)
    lwz r7, 0x4(r30)
    stfs f10, 0x8(r1)
    lfs f2, 0x530(r7)
    psq_l f1, 0x528(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fadds f0, f2, f10
    lfs f8, 0x14(r1)
    lfs f7, 0x18(r1)
    fadds f8, f8, f10
    stfs f9, 0xc(r1)
    fadds f7, f7, f9
    stfs f10, 0x10(r1)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_80108C10
    lwz r3, 0x4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_80198874_00001A20
lbl_fn_80198874_00001A1C:
    li r3, 0x0
lbl_fn_80198874_00001A20:
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
