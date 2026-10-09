#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_80063484(void);
extern void fn_80076FF8(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_80097C08(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_8010C00C(void);
extern void fn_80117228(void);
extern void fn_8012B988(void);
extern void fn_8012D8B8(void);
extern void fn_8013407C(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80148B38(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8014DEE4(void);
extern void fn_8014FAD0(void);
extern void fn_80150178(void);
extern void fn_801CE148(void);
extern void fn_801E91A0(void);
extern void fn_801E91B4(void);
extern void fn_801E9218(void);
extern void fn_801F4E8C(void);
extern void fn_801F6E78(void);
extern void fn_80201E78(void);
extern void fn_80202118(void);
extern void fn_80202A6C(void);
extern void fn_80202D00(void);
extern void fn_80232B7C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A02C(void);
extern void fn_8023A8B4(void);
extern void fn_8046ECDC(void);
extern void fn_8046EED8(void);
extern void fn_80473F50(void);
extern void fn_804776F4(void);
extern void fn_8050F940(void);
extern void fn_8050FA80(void);
extern void fn_8050FD24(void);
extern void fn_8051125C(void);
extern void fn_805112AC(void);
extern void fn_80564060(void);
extern void fn_805659B8(void);
extern void fn_80566014(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8073BCF0[];
extern u8 lbl_80782608[];
extern u8 lbl_807C7CA0[];
extern u8 lbl_807C7CAC[];
extern u8 lbl_807C7CB8[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F518;
extern u32 lbl_80882998;
extern u32 lbl_8088299C;
extern u32 lbl_808829A0;
extern u32 lbl_808829A4;
extern u32 lbl_808829A8;
extern u32 lbl_808829AC;
extern u32 lbl_808829B0;
extern u32 lbl_808829B4;
extern u32 lbl_808829B8;
extern u32 lbl_808829BC;
extern u32 lbl_808829C0;
extern u32 lbl_808829C8;
extern u32 lbl_808829CC;
extern u32 lbl_808829D0;
extern u32 lbl_808829D4;
extern u32 lbl_808829D8;
extern u32 lbl_808829DC;
extern u32 lbl_808829E0;
extern u32 lbl_808829E4;
extern u32 lbl_808829E8;
extern u32 lbl_808829EC;
extern u32 lbl_808829F0;
extern u32 lbl_808829F4;
extern u32 lbl_808829F8;
extern u32 lbl_808829FC;
extern u32 lbl_80882A00;
extern u32 lbl_80882A04;
extern u32 lbl_80882A08;
extern u32 lbl_80882A0C;
extern u32 lbl_80882A10;

/* Function declarations */
void fn_801CC460(void);
void fn_801CC4F4(void);
void fn_801CCC8C(void);
void fn_801CCCFC(void);
void fn_801CCD00(void);
void fn_801CCE18(void);
void fn_801CCE50(void);
void fn_801CD184(void);
void fn_801CD210(void);
void fn_801CD5A4(void);
void fn_801CD644(void);
void fn_801CD648(void);
void fn_801CDA00(void);
void fn_801CDD2C(void);
void fn_801CDD98(void);
void fn_801CDD9C(void);

asm void fn_801CC460(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_801CC460_00000058
    addi r3, r30, 0x14d4
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_801CC460_00000058
    addi r3, r30, 0x14bc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_801CC460_00000058
    addi r3, r30, 0x14c8
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_801CC460_0000005C
lbl_fn_801CC460_00000058:
    li r31, 0x0
lbl_fn_801CC460_0000005C:
    cmpwi r31, 0x0
    beq lbl_fn_801CC460_00000078
    addi r3, r30, 0x14d4
    addi r4, r30, 0xb0
    bl fn_804776F4
    li r3, 0x1
    b lbl_fn_801CC460_0000007C
lbl_fn_801CC460_00000078:
    li r3, 0x0
lbl_fn_801CC460_0000007C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CC4F4(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x1c0
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
    bl _savegpr_27
    lwz r0, 0x624(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_801CC4F4_00000114
    lwz r4, 0x62c(r3)
    li r0, 0x0
    stw r0, 0x624(r3)
    cmpwi r4, 0x0
    stw r0, 0x628(r3)
    beq lbl_fn_801CC4F4_00000114
    beq lbl_fn_801CC4F4_0000010C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_801CC4F4_0000010C:
    li r0, 0x0
    stw r0, 0x62c(r31)
lbl_fn_801CC4F4_00000114:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801CC4F4_0000012C
    mr r3, r31
    bl fn_80145334
    b lbl_fn_801CC4F4_000007E4
lbl_fn_801CC4F4_0000012C:
    mr r3, r31
    bl fn_8014C540
    lwz r3, 0x14b0(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_801CC4F4_00000708
    cmpwi r3, 0x0
    beq lbl_fn_801CC4F4_00000158
    cmpwi r3, 0x1
    beq lbl_fn_801CC4F4_000003AC
    b lbl_fn_801CC4F4_000007E4
lbl_fn_801CC4F4_00000158:
    lwz r3, 0x14b4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CC4F4_000007E4
    lwz r4, 0x674(r3)
    lwz r0, 0x674(r31)
    cmpw r4, r0
    beq lbl_fn_801CC4F4_00000184
    mr r3, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_801CC4F4_00000184:
    lwz r0, 0x54c(r31)
    addi r3, r1, 0x5c
    lwz r28, 0x14b4(r31)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r31)
    psq_l f1, 0xb8(r28), 0, 0
    psq_l f2, 0xc0(r28), 0, 0
    psq_l f3, 0xc8(r28), 0, 0
    psq_l f4, 0xd0(r28), 0, 0
    psq_l f5, 0xd8(r28), 0, 0
    psq_l f6, 0xe0(r28), 0, 0
    psq_st f6, 0xe0(r31), 0, 0
    psq_st f1, 0xb8(r31), 0, 0
    psq_st f2, 0xc0(r31), 0, 0
    psq_st f3, 0xc8(r31), 0, 0
    psq_st f4, 0xd0(r31), 0, 0
    psq_st f5, 0xd8(r31), 0, 0
    lfs f8, 0xe0(r28)
    lfs f7, 0xd0(r28)
    lfs f0, 0xc0(r28)
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f8, 0x64(r1)
    bl fn_805F9940
    lfs f8, 0xdc(r28)
    fmr f30, f1
    lfs f7, 0xcc(r28)
    addi r3, r1, 0x68
    lfs f0, 0xbc(r28)
    stfs f0, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f8, 0x70(r1)
    bl fn_805F9940
    lfs f8, 0xd8(r28)
    fmr f31, f1
    lfs f7, 0xc8(r28)
    addi r3, r1, 0x74
    lfs f0, 0xb8(r28)
    stfs f0, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f8, 0x7c(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x50(r1)
    frsp f0, f30
    stfs f31, 0x54(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x58(r1)
    ble lbl_fn_801CC4F4_0000024C
    b lbl_fn_801CC4F4_00000250
lbl_fn_801CC4F4_0000024C:
    fmr f7, f0
lbl_fn_801CC4F4_00000250:
    lfs f8, 0x50(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_801CC4F4_00000260
    b lbl_fn_801CC4F4_00000278
lbl_fn_801CC4F4_00000260:
    lfs f8, 0x54(r1)
    lfs f0, 0x58(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_801CC4F4_00000274
    b lbl_fn_801CC4F4_00000278
lbl_fn_801CC4F4_00000274:
    fmr f8, f0
lbl_fn_801CC4F4_00000278:
    stfs f8, 0x104(r31)
    addi r3, r31, 0xb0
    lwz r5, 0x14b4(r31)
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    psq_l f1, 0x528(r5), 0, 0
    li r8, 0x1
    lfs f2, 0x530(r5)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    stfs f2, 0x53c(r31)
    lfs f2, lbl_8088299C
    psq_st f1, 0x534(r31), 0, 0
    lfs f1, lbl_80882998
    lwz r5, 0x2dc(r5)
    bl fn_80097C08
    lwz r3, 0x21c(r31)
    lwz r4, 0x14b4(r31)
    lwz r0, 0x44(r3)
    lwz r3, 0x2d0(r31)
    mulli r5, r0, 0x2c
    lwz r4, 0x2d0(r4)
    bl memcpy
    li r0, 0x0
    stw r0, 0xbc(r1)
    addi r3, r31, 0xb0
    addi r4, r1, 0xbc
    bl fn_8000D430
    addic. r3, r1, 0xbc
    beq lbl_fn_801CC4F4_00000330
    lwz r4, 0xbc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801CC4F4_00000330
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_801CC4F4_00000328
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801CC4F4_00000328:
    li r0, 0x0
    stw r0, 0xbc(r1)
lbl_fn_801CC4F4_00000330:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0xa4
    lfs f0, 0x530(r31)
    lfs f7, 0x114(r4)
    lfs f9, 0x110(r4)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r31)
    lfs f7, 0x10c(r4)
    lfs f0, 0x528(r31)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xa8(r1)
    stfs f0, 0xa4(r1)
    stfs f10, 0xac(r1)
    bl fn_805F9920
    mr r3, r31
    bl fn_80148B38
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r0, 0x5c0(r31)
    mr r3, r31
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    b lbl_fn_801CC4F4_000007E4
lbl_fn_801CC4F4_000003AC:
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801CC4F4_000007E4
    lwz r0, 0x674(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801CC4F4_000003D8
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_801CC4F4_000003D8:
    lwz r0, 0x54c(r31)
    mr r29, r31
    lwz r3, 0x14b8(r31)
    li r27, 0x0
    ori r0, r0, 0x2000
    stw r0, 0x54c(r31)
    addi r28, r3, 0xb0
    lwz r30, 0x3fc(r3)
    stw r30, 0x3fc(r31)
    b lbl_fn_801CC4F4_00000448
lbl_fn_801CC4F4_00000400:
    lfs f0, 0x24c(r28)
    mr r4, r27
    stfs f0, 0x2fc(r29)
    addi r3, r31, 0xb0
    lfs f1, lbl_808829A0
    li r7, 0x0
    lfs f0, 0x238(r28)
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    lfs f2, lbl_8088299C
    lfs f0, 0x234(r28)
    stfs f0, 0x2e4(r29)
    lwz r5, 0x22c(r28)
    lbz r6, 0x244(r28)
    bl fn_80097C08
    addi r28, r28, 0x30
    addi r29, r29, 0x30
    addi r27, r27, 0x1
lbl_fn_801CC4F4_00000448:
    cmpw r27, r30
    blt lbl_fn_801CC4F4_00000400
    lwz r6, 0x14b8(r31)
    lis r5, lbl_807C7CAC@ha
    addi r5, r5, lbl_807C7CAC@l
    lfs f9, lbl_808829A4
    psq_l f1, 0x528(r6), 0, 0
    addi r3, r1, 0x140
    lfs f2, 0x530(r6)
    li r4, 0x79
    stfs f2, 0x530(r31)
    lfs f7, lbl_80882998
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, lbl_808829A0
    lfs f8, 0x8(r5)
    fmsubs f8, f9, f8, f2
    stfs f8, 0x530(r31)
    stfs f7, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f1, 0x538(r6)
    bl fn_805F8E70
    addi r4, r1, 0xb0
    addi r3, r1, 0x140
    mr r5, r4
    bl fn_805F93C0
    lis r4, lbl_807C7CA0@ha
    addi r3, r1, 0xb0
    addi r4, r4, lbl_807C7CA0@l
    bl fn_805F9990
    lfs f0, lbl_808829A8
    fmuls f1, f0, f1
    bl fn_8068AE9C
    lfs f7, 0xb0(r1)
    frsp f1, f1
    lfs f0, lbl_80882998
    fcmpo cr0, f7, f0
    bge lbl_fn_801CC4F4_000004E8
    lfs f0, lbl_808829A8
    fmuls f1, f1, f0
lbl_fn_801CC4F4_000004E8:
    addi r3, r1, 0x170
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, lbl_80882998
    addi r30, r1, 0x98
    stfs f0, 0x8c(r1)
    addi r6, r1, 0x8c
    lfs f2, lbl_808829A0
    mr r4, r30
    stfs f0, 0x90(r1)
    mr r5, r30
    addi r3, r1, 0x170
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F93C0
    lfs f2, 0xa0(r1)
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r30), 0, 0
    addi r30, r1, 0x80
    frsp f7, f2
    lfs f0, lbl_808829AC
    psq_st f1, 0x0(r3), 0, 0
    fabs f8, f7
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r30), 0, 0
    frsp f8, f8
    stfs f2, 0x88(r1)
    fcmpo cr0, f8, f0
    bge lbl_fn_801CC4F4_00000588
    lfs f7, 0x80(r1)
    lfs f0, lbl_80882998
    fcmpo cr0, f7, f0
    ble lbl_fn_801CC4F4_0000057C
    lfs f0, lbl_808829B0
    b lbl_fn_801CC4F4_00000580
lbl_fn_801CC4F4_0000057C:
    lfs f0, lbl_808829B4
lbl_fn_801CC4F4_00000580:
    stfs f0, 0x48(r1)
    b lbl_fn_801CC4F4_0000059C
lbl_fn_801CC4F4_00000588:
    fmr f2, f7
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801CC4F4_0000059C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80882998
    addi r4, r1, 0x38
    lfs f26, 0xd8(r1)
    mr r5, r4
    lfs f27, 0xd4(r1)
    addi r3, r1, 0x100
    lfs f28, 0xd0(r1)
    lfs f29, 0xe8(r1)
    lfs f31, 0xe4(r1)
    lfs f30, 0xe0(r1)
    lfs f13, 0xf8(r1)
    lfs f12, 0xf4(r1)
    lfs f11, 0xf0(r1)
    lfs f10, 0xfc(r1)
    lfs f9, 0xec(r1)
    lfs f8, 0xdc(r1)
    lfs f0, lbl_808829A0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x88(r1)
    stfs f7, 0x130(r1)
    stfs f7, 0x134(r1)
    stfs f7, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f28, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f28, 0x100(r1)
    stfs f27, 0x104(r1)
    stfs f26, 0x108(r1)
    stfs f30, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f30, 0x110(r1)
    stfs f31, 0x114(r1)
    stfs f29, 0x118(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0x120(r1)
    stfs f12, 0x124(r1)
    stfs f13, 0x128(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0x10c(r1)
    stfs f9, 0x11c(r1)
    stfs f10, 0x12c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808829AC
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_801CC4F4_000006B8
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80882998
    fcmpo cr0, f7, f0
    ble lbl_fn_801CC4F4_000006A8
    lfs f0, lbl_808829B0
    b lbl_fn_801CC4F4_000006AC
lbl_fn_801CC4F4_000006A8:
    lfs f0, lbl_808829B4
lbl_fn_801CC4F4_000006AC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801CC4F4_000006CC
lbl_fn_801CC4F4_000006B8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801CC4F4_000006CC:
    lfs f2, lbl_80882998
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    stfs f2, 0x4c(r1)
    stfs f2, 0x88(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    bl fn_80145334
    lwz r0, 0x5c0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    b lbl_fn_801CC4F4_000007E4
lbl_fn_801CC4F4_00000708:
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801CC4F4_000007E4
    lwz r0, 0x674(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801CC4F4_00000734
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_801CC4F4_00000734:
    lwz r0, 0x54c(r31)
    mr r28, r31
    lwz r3, 0x14b8(r31)
    li r27, 0x0
    ori r0, r0, 0x2000
    stw r0, 0x54c(r31)
    addi r29, r3, 0xb0
    lwz r30, 0x3fc(r3)
    stw r30, 0x3fc(r31)
    b lbl_fn_801CC4F4_000007A4
lbl_fn_801CC4F4_0000075C:
    lfs f0, 0x24c(r29)
    mr r4, r27
    stfs f0, 0x2fc(r28)
    addi r3, r31, 0xb0
    lfs f1, lbl_80882998
    li r7, 0x0
    lfs f0, 0x238(r29)
    li r8, 0x1
    stfs f0, 0x2e8(r28)
    lfs f2, lbl_8088299C
    lfs f0, 0x234(r29)
    stfs f0, 0x2e4(r28)
    lwz r5, 0x22c(r29)
    lbz r6, 0x244(r29)
    bl fn_80097C08
    addi r29, r29, 0x30
    addi r28, r28, 0x30
    addi r27, r27, 0x1
lbl_fn_801CC4F4_000007A4:
    cmpw r27, r30
    blt lbl_fn_801CC4F4_0000075C
    lwz r4, 0x14b8(r31)
    mr r3, r31
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x534(r4), 0, 0
    lfs f2, 0x53c(r4)
    stfs f2, 0x53c(r31)
    psq_st f1, 0x534(r31), 0, 0
    bl fn_80145334
    lwz r0, 0x5c0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
lbl_fn_801CC4F4_000007E4:
    addi r11, r1, 0x1c0
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
    bl _restgpr_27
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_801CCC8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80149A30
    lwz r3, lbl_8087F0A8
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801CCC8C_00000888
    lfs f1, lbl_808829B8
    li r4, 0x14
    lfs f0, 0x52c(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f2, f1, f0
    lfs f1, 0x528(r31)
    lfs f3, 0x530(r31)
    lfs f4, 0x538(r31)
    lfs f5, lbl_80882998
    lfs f6, lbl_808829BC
    lfs f7, lbl_808829B0
    bl fn_80063484
lbl_fn_801CCC8C_00000888:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CCCFC(void)
{
    nofralloc
    blr
}

asm void fn_801CCD00(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x14b0(r3)
    cmpw r4, r0
    beq lbl_fn_801CCD00_000009A4
    stw r4, 0x14b0(r3)
    li r0, 0x2
    mr r4, r31
    li r5, 0x64
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    stw r0, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, 0x14b0(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_801CCD00_00000998
    mr r3, r31
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_80882998
    li r3, -0x1
    lfs f1, lbl_808829A0
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x14bc
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801CCD00_00000998
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x10
    bl fn_8023A02C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x8
    bl fn_8023A02C
lbl_fn_801CCD00_00000998:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_801CCD00_000009A4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801CCE18(void)
{
    nofralloc
    lis r6, lbl_807C7CA0@ha
    lis r4, lbl_807C7CAC@ha
    lfs f2, lbl_80882998
    addi r5, r6, lbl_807C7CA0@l
    addi r3, r4, lbl_807C7CAC@l
    lfs f1, lbl_808829A0
    lfs f0, lbl_808829C0
    stfs f2, lbl_807C7CA0@l(r6)
    stfs f2, 0x4(r5)
    stfs f1, 0x8(r5)
    stfs f2, lbl_807C7CAC@l(r4)
    stfs f2, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_801CCE50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r28, lbl_807C7CB8@ha
    mr r31, r3
    addi r28, r28, lbl_807C7CB8@l
    bl fn_8050F940
    addi r8, r31, 0x150
    addi r3, r31, 0x1e0
    lfs f0, lbl_808829C8
    lis r7, lbl_80782608@ha
    li r6, 0x0
    li r5, -0x1
    addi r7, r7, lbl_80782608@l
    li r4, 0xd
    cmplw r8, r3
    stw r7, 0x0(r31)
    stw r6, 0xd4(r31)
    stw r6, 0xd8(r31)
    stw r6, 0xdc(r31)
    stfs f0, 0xe0(r31)
    stfs f0, 0xe4(r31)
    stw r6, 0xe8(r31)
    stw r6, 0xec(r31)
    stw r6, 0xf0(r31)
    stw r6, 0xf4(r31)
    stfs f0, 0xf8(r31)
    stw r6, 0xfc(r31)
    stw r6, 0x100(r31)
    stw r6, 0x104(r31)
    stw r6, 0x13c(r31)
    stw r6, 0x140(r31)
    stw r5, 0x144(r31)
    stw r5, 0x148(r31)
    stw r4, 0x14c(r31)
    bge lbl_fn_801CCE50_00000ABC
    addi r3, r3, 0x47
    li r0, 0x48
    subf r3, r8, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_801CCE50_00000ABC
lbl_fn_801CCE50_00000AA0:
    stw r6, 0x34(r8)
    stw r6, 0x38(r8)
    stw r5, 0x3c(r8)
    stw r5, 0x40(r8)
    stw r4, 0x44(r8)
    addi r8, r8, 0x48
    bdnz lbl_fn_801CCE50_00000AA0
lbl_fn_801CCE50_00000ABC:
    li r29, 0x0
    stw r29, 0x1e0(r31)
    addi r3, r31, 0x220
    li r4, 0x0
    stw r29, 0x1e4(r31)
    li r5, 0x0
    stw r29, 0x1e8(r31)
    stw r29, 0x1ec(r31)
    stw r29, 0x1f0(r31)
    stw r29, 0x1f4(r31)
    bl fn_8004B290
    lwz r3, lbl_8087EEE0
    bl fn_80076FF8
    lfs f3, lbl_808829C8
    li r3, 0x1
    lfs f10, lbl_808829D4
    li r0, -0x1
    lfs f9, lbl_808829D8
    addi r5, r28, 0x18
    lfs f8, lbl_808829DC
    lis r30, lbl_8073BCF0@ha
    lfs f6, lbl_808829E4
    addi r4, r31, 0xaa8
    lfs f5, lbl_808829E8
    addi r7, r28, 0x24
    lfs f12, lbl_808829CC
    addi r9, r28, 0x30
    lfs f11, lbl_808829D0
    addi r6, r31, 0xab4
    lfs f7, lbl_808829E0
    addi r8, r31, 0xac0
    lfs f4, lbl_808829EC
    addi r30, r30, lbl_8073BCF0@l
    lfs f0, lbl_808829F0
    li r27, 0x0
    stfs f1, 0x414(r31)
    li r28, 0x0
    stfs f12, 0x418(r31)
    stw r3, 0x41c(r31)
    stfs f11, 0x424(r31)
    stfs f10, 0x430(r31)
    stfs f9, 0x434(r31)
    stfs f8, 0x438(r31)
    stfs f10, 0x43c(r31)
    stfs f9, 0x440(r31)
    stfs f7, 0x444(r31)
    stfs f6, 0x448(r31)
    stfs f5, 0x44c(r31)
    stfs f8, 0x450(r31)
    stfs f6, 0x454(r31)
    stfs f5, 0x458(r31)
    stfs f4, 0x45c(r31)
    stfs f3, 0x46c(r31)
    stfs f3, 0x470(r31)
    stfs f3, 0x474(r31)
    stw r29, 0x484(r31)
    stw r0, 0xa8c(r31)
    stw r29, 0xa98(r31)
    stfs f3, 0xa9c(r31)
    stw r29, 0xaa0(r31)
    stfs f0, 0xaa4(r31)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0xab0(r31)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x8(r7)
    stfs f2, 0xabc(r31)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x8(r9)
    stfs f2, 0xac8(r31)
    psq_st f1, 0x0(r8), 0, 0
    stw r29, 0x484(r31)
    stw r29, 0xa88(r31)
    stw r29, 0xa90(r31)
    stw r29, 0xa94(r31)
    stw r29, 0x1f8(r31)
    stw r29, 0x1fc(r31)
    stw r29, 0x200(r31)
    stw r29, 0x204(r31)
lbl_fn_801CCE50_00000C00:
    mr r3, r31
    add r29, r31, r28
    addi r4, r30, 0x1
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x108(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x1d
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x150(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x3f
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x198(r29)
    li r4, 0x1
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0xd
    blt lbl_fn_801CCE50_00000C00
    lis r4, lbl_8073BCF0@ha
    mr r3, r31
    addi r30, r4, lbl_8073BCF0@l
    li r5, 0x1
    addi r4, r30, 0x61
    bl fn_80201E78
    stw r3, 0x13c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x82
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x184(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xa9
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x1cc(r31)
    li r4, 0x1
    bl fn_800D246C
    li r27, 0x0
    li r28, 0x0
lbl_fn_801CCE50_00000CCC:
    mr r3, r31
    add r29, r31, r28
    addi r4, r30, 0xd0
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x140(r29)
    li r4, 0x1
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r28, r28, 0x48
    cmpwi r27, 0x3
    blt lbl_fn_801CCE50_00000CCC
    li r0, 0xa
    stw r0, 0x14c(r31)
    addi r11, r1, 0x20
    mr r3, r31
    stw r0, 0x194(r31)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801CD184(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_801CD184_00000D94
    addic. r0, r3, 0xaa0
    beq lbl_fn_801CD184_00000D6C
    lwz r4, 0xaa0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801CD184_00000D6C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_801CD184_00000D6C
    bl fn_800897D8
lbl_fn_801CD184_00000D6C:
    addi r3, r30, 0x220
    li r4, -0x1
    bl fn_8004B338
    mr r3, r30
    li r4, 0x0
    bl fn_8050FA80
    cmpwi r31, 0x0
    ble lbl_fn_801CD184_00000D94
    mr r3, r30
    bl dtor_80084684
lbl_fn_801CD184_00000D94:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CD210(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r0, 0x484(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801CD210_00000F74
    lwz r3, lbl_8087F518
    li r4, 0x0
    bl fn_8046ECDC
    li r0, 0x3
    stw r0, 0xa88(r31)
    mr r30, r31
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_801CD210_00000E5C
lbl_fn_801CD210_00000E10:
    lwz r0, 0x488(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801CD210_00000E34
    lwz r3, 0x48c(r30)
    bl fn_80564060
    cmpwi r3, 0x0
    beq lbl_fn_801CD210_00000E54
    li r29, 0x1
    b lbl_fn_801CD210_00000E68
lbl_fn_801CD210_00000E34:
    cmpwi r0, 0x1
    bne lbl_fn_801CD210_00000E54
    lwz r3, 0x490(r30)
    bl fn_8014FAD0
    cmpwi r3, 0x0
    beq lbl_fn_801CD210_00000E54
    li r29, 0x1
    b lbl_fn_801CD210_00000E68
lbl_fn_801CD210_00000E54:
    addi r30, r30, 0xc
    addi r28, r28, 0x1
lbl_fn_801CD210_00000E5C:
    lwz r0, 0x484(r31)
    cmplw r28, r0
    blt lbl_fn_801CD210_00000E10
lbl_fn_801CD210_00000E68:
    cmpwi r29, 0x0
    bne lbl_fn_801CD210_00000F8C
    mr r30, r31
    li r28, 0x0
    b lbl_fn_801CD210_00000F10
lbl_fn_801CD210_00000E7C:
    lwz r0, 0x488(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801CD210_00000F08
    lwz r3, 0x48c(r30)
    bl fn_80566014
    lwz r5, 0x48c(r30)
    lwz r3, 0x490(r30)
    lwz r4, 0x0(r5)
    bl fn_80150178
    lwz r3, 0x48c(r30)
    bl fn_805659B8
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_801CD210_00000ECC
    lwz r3, 0x490(r30)
    addi r3, r3, 0x7d4
    bl fn_8013407C
    lwz r3, lbl_8087F048
    lwz r4, 0x490(r30)
    bl fn_8010C00C
lbl_fn_801CD210_00000ECC:
    lwz r3, 0x490(r30)
    addi r3, r3, 0x7d4
    bl fn_8012B988
    lwz r4, 0x490(r30)
    lwz r0, 0x674(r4)
    cmpwi r0, 0x0
    bge lbl_fn_801CD210_00000F08
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_801CD210_00000F00
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801CD210_00000F08
lbl_fn_801CD210_00000F00:
    addi r3, r4, 0x7d4
    bl fn_8012D8B8
lbl_fn_801CD210_00000F08:
    addi r30, r30, 0xc
    addi r28, r28, 0x1
lbl_fn_801CD210_00000F10:
    lwz r0, 0x484(r31)
    cmplw r28, r0
    blt lbl_fn_801CD210_00000E7C
    lwz r0, 0xa98(r31)
    li r3, 0x0
    stw r3, 0x484(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801CD210_00000F40
    lfs f0, lbl_808829F4
    li r0, 0x2
    stw r0, 0xa98(r31)
    stfs f0, 0xa9c(r31)
lbl_fn_801CD210_00000F40:
    lwz r3, lbl_8087F518
    bl fn_8046EED8
    lwz r4, 0xa8c(r31)
    cmpwi r4, 0x0
    blt lbl_fn_801CD210_00000F8C
    addi r3, r1, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r0, -0x1
    stw r0, 0xa8c(r31)
    b lbl_fn_801CD210_00000F8C
lbl_fn_801CD210_00000F74:
    lwz r3, 0xa88(r31)
    subic. r0, r3, 0x1
    stw r0, 0xa88(r31)
    bge lbl_fn_801CD210_00000F8C
    li r0, 0x0
    stw r0, 0xa88(r31)
lbl_fn_801CD210_00000F8C:
    lwz r4, 0xa98(r31)
    cmpwi r4, 0x1
    bne lbl_fn_801CD210_00000FA0
    li r0, 0x0
    b lbl_fn_801CD210_00000FB0
lbl_fn_801CD210_00000FA0:
    subfic r3, r4, 0x2
    subi r0, r4, 0x2
    or r0, r3, r0
    srwi r0, r0, 31
lbl_fn_801CD210_00000FB0:
    cmpwi r0, 0x0
    bne lbl_fn_801CD210_00000FE8
    cmpwi r4, 0x2
    bne lbl_fn_801CD210_00001124
    lfs f4, 0xa9c(r31)
    lfs f3, lbl_808829F8
    lfs f0, lbl_808829C8
    fsubs f3, f4, f3
    stfs f3, 0xa9c(r31)
    fcmpo cr0, f3, f0
    bge lbl_fn_801CD210_00001124
    li r0, 0x0
    stw r0, 0xa98(r31)
    b lbl_fn_801CD210_00001124
lbl_fn_801CD210_00000FE8:
    lwz r0, 0xf0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801CD210_0000111C
    lwz r3, 0xd4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD210_00001010
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801CD210_0000111C
lbl_fn_801CD210_00001010:
    lwz r4, 0xd8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_801CD210_0000102C
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801CD210_0000111C
lbl_fn_801CD210_0000102C:
    lwz r4, 0xdc(r31)
    cmpwi r4, 0x0
    beq lbl_fn_801CD210_00001048
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801CD210_0000111C
lbl_fn_801CD210_00001048:
    cmpwi r3, 0x0
    beq lbl_fn_801CD210_0000108C
    lis r3, lbl_807C7CB8@ha
    addi r5, r1, 0x18
    addi r3, r3, lbl_807C7CB8@l
    lfs f0, lbl_808829C8
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0xc
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x20(r1)
    lfs f3, 0xe0(r31)
    stfs f3, 0x10(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x14(r1)
    lwz r3, 0xd4(r31)
    bl fn_801E9218
lbl_fn_801CD210_0000108C:
    lwz r3, 0xd8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD210_000010D0
    lis r4, lbl_807C7CB8@ha
    addi r5, r1, 0x30
    addi r4, r4, lbl_807C7CB8@l
    lfs f0, lbl_808829C8
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    addi r4, r1, 0x24
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x38(r1)
    lfs f3, 0xe0(r31)
    stfs f3, 0x28(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x2c(r1)
    bl fn_801E9218
lbl_fn_801CD210_000010D0:
    lwz r3, 0xdc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD210_00001114
    lis r4, lbl_807C7CB8@ha
    addi r5, r1, 0x48
    addi r4, r4, lbl_807C7CB8@l
    lfs f0, lbl_808829C8
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    addi r4, r1, 0x3c
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x50(r1)
    lfs f3, 0xe0(r31)
    stfs f3, 0x40(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x44(r1)
    bl fn_801E9218
lbl_fn_801CD210_00001114:
    li r0, 0x0
    stw r0, 0xf0(r31)
lbl_fn_801CD210_0000111C:
    mr r3, r31
    bl fn_801CD648
lbl_fn_801CD210_00001124:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801CD5A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x96(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801CD5A4_000011D0
    lwz r0, 0x4c(r3)
    li r6, 0x1
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801CD5A4_000011AC
lbl_fn_801CD5A4_0000117C:
    lwz r4, 0x50(r3)
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_801CD5A4_000011A4
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_801CD5A4_000011A4
    li r6, 0x0
    b lbl_fn_801CD5A4_000011AC
lbl_fn_801CD5A4_000011A4:
    addi r5, r5, 0x40
    bdnz lbl_fn_801CD5A4_0000117C
lbl_fn_801CD5A4_000011AC:
    cmpwi r6, 0x0
    beq lbl_fn_801CD5A4_000011D0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x96(r31)
lbl_fn_801CD5A4_000011D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CD644(void)
{
    nofralloc
    blr
}

asm void fn_801CD648(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lfs f3, lbl_808829C8
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    lfs f4, 0xf8(r3)
    fcmpo cr0, f4, f3
    ble lbl_fn_801CD648_00001230
    lfs f0, lbl_808829FC
    fsubs f0, f4, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_801CD648_00001224
    b lbl_fn_801CD648_00001228
lbl_fn_801CD648_00001224:
    fmr f0, f3
lbl_fn_801CD648_00001228:
    stfs f0, 0xf8(r3)
    b lbl_fn_801CD648_00001250
lbl_fn_801CD648_00001230:
    bge lbl_fn_801CD648_00001250
    lfs f0, lbl_808829FC
    fadds f0, f0, f4
    fcmpo cr0, f0, f3
    bge lbl_fn_801CD648_00001248
    b lbl_fn_801CD648_0000124C
lbl_fn_801CD648_00001248:
    fmr f0, f3
lbl_fn_801CD648_0000124C:
    stfs f0, 0xf8(r3)
lbl_fn_801CD648_00001250:
    lwz r8, lbl_8087EFA8
    li r4, 0x0
    lwz r0, 0xf4(r3)
    lwz r7, 0x244(r8)
    lwz r6, 0x248(r8)
    cmpwi r0, 0x0
    lfs f5, 0x24c(r8)
    lfs f4, 0x250(r8)
    lwz r5, 0x254(r8)
    lwz r0, 0x258(r8)
    lfs f3, 0x25c(r8)
    lfs f0, 0x260(r8)
    stw r7, 0x60(r1)
    stw r6, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f4, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r0, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    stw r4, 0x5c(r1)
    beq lbl_fn_801CD648_00001378
    lwz r4, 0xd4(r3)
    li r0, 0x1
    lfs f0, lbl_808829C8
    li r30, 0x1
    cmpwi r4, 0x0
    stw r0, 0x5c(r1)
    stfs f0, 0xe0(r3)
    stfs f0, 0xe4(r3)
    beq lbl_fn_801CD648_000012E0
    mr r3, r4
    bl fn_801E91B4
    cmpwi r3, 0x0
    bne lbl_fn_801CD648_000012E0
    li r30, 0x0
lbl_fn_801CD648_000012E0:
    lwz r3, 0xd8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_000012FC
    bl fn_801E91B4
    cmpwi r3, 0x0
    bne lbl_fn_801CD648_000012FC
    li r30, 0x0
lbl_fn_801CD648_000012FC:
    lwz r3, 0xdc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_00001318
    bl fn_801E91B4
    cmpwi r3, 0x0
    bne lbl_fn_801CD648_00001318
    li r30, 0x0
lbl_fn_801CD648_00001318:
    cmpwi r30, 0x0
    beq lbl_fn_801CD648_00001338
    lwz r4, 0x104(r31)
    mr r3, r31
    bl fn_801CE148
    li r0, 0x0
    stw r0, 0x5c(r1)
    stw r0, 0xf4(r31)
lbl_fn_801CD648_00001338:
    lwz r3, 0xd4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_0000134C
    li r0, 0x1
    stw r0, 0x478(r3)
lbl_fn_801CD648_0000134C:
    lwz r3, 0xd8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_00001360
    li r0, 0x1
    stw r0, 0x478(r3)
lbl_fn_801CD648_00001360:
    lwz r3, 0xdc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_000013F0
    li r0, 0x1
    stw r0, 0x478(r3)
    b lbl_fn_801CD648_000013F0
lbl_fn_801CD648_00001378:
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801CD648_000013C8
    mr r3, r31
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_000013BC
    lwz r3, 0x48(r31)
    lfs f0, lbl_80882A00
    lfs f3, 0x458(r3)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801CD648_000013BC
    lwz r3, 0xd4(r31)
    li r0, 0x1
    stw r0, 0x478(r3)
    b lbl_fn_801CD648_000013C8
lbl_fn_801CD648_000013BC:
    lwz r3, 0xd4(r31)
    li r0, 0x0
    stw r0, 0x478(r3)
lbl_fn_801CD648_000013C8:
    lwz r3, 0xd8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_000013DC
    li r0, 0x0
    stw r0, 0x478(r3)
lbl_fn_801CD648_000013DC:
    lwz r3, 0xdc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_000013F0
    li r0, 0x0
    stw r0, 0x478(r3)
lbl_fn_801CD648_000013F0:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x5c(r1)
    stw r0, 0x240(r3)
    lwz r0, 0x60(r1)
    stw r0, 0x244(r3)
    lwz r0, 0x64(r1)
    stw r0, 0x248(r3)
    lfs f0, 0x68(r1)
    stfs f0, 0x24c(r3)
    lfs f0, 0x6c(r1)
    stfs f0, 0x250(r3)
    lwz r0, 0x70(r1)
    stw r0, 0x254(r3)
    lwz r0, 0x74(r1)
    stw r0, 0x258(r3)
    lfs f0, 0x78(r1)
    stfs f0, 0x25c(r3)
    lfs f0, 0x7c(r1)
    stfs f0, 0x260(r3)
    lwz r0, 0xd4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801CD648_00001588
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x9
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_00001498
    lfs f4, 0xe0(r31)
    lfs f3, lbl_80882A04
    lfs f0, lbl_80882A08
    fsubs f3, f4, f3
    stfs f3, 0xe0(r31)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801CD648_00001498
    lfs f4, lbl_80882A0C
    lfs f0, 0xe4(r31)
    fadds f3, f3, f4
    fadds f0, f0, f4
    stfs f3, 0xe0(r31)
    stfs f0, 0xe4(r31)
lbl_fn_801CD648_00001498:
    lfs f0, 0xe0(r31)
    addi r30, r1, 0x50
    lfs f4, 0xe4(r31)
    addi r4, r1, 0x44
    lfs f2, lbl_808829C8
    fsubs f3, f0, f4
    lfs f0, lbl_80882A10
    stfs f2, 0x50(r1)
    fmadds f0, f0, f3, f4
    stfs f2, 0x58(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0xe4(r31)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    lwz r3, 0xd4(r31)
    bl fn_801E91A0
    lfs f2, 0x480(r31)
    addi r3, r1, 0x38
    psq_l f1, 0x478(r31), 0, 0
    lwz r4, 0xd4(r31)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x4a0(r4), 0, 0
    stfs f2, 0x4a8(r4)
    lwz r3, 0xd8(r31)
    stfs f2, 0x40(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_00001540
    lfs f2, 0x58(r1)
    addi r4, r1, 0x2c
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_801E91A0
    lfs f2, 0x480(r31)
    addi r3, r1, 0x20
    psq_l f1, 0x478(r31), 0, 0
    lwz r4, 0xd8(r31)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x4a0(r4), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0x4a8(r4)
lbl_fn_801CD648_00001540:
    lwz r3, 0xdc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801CD648_00001588
    addi r5, r1, 0x50
    lfs f2, 0x58(r1)
    addi r4, r1, 0x14
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_801E91A0
    lfs f2, 0x480(r31)
    addi r3, r1, 0x8
    psq_l f1, 0x478(r31), 0, 0
    lwz r4, 0xdc(r31)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x4a0(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x4a8(r4)
lbl_fn_801CD648_00001588:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_801CDA00(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x100
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    bl _savegpr_23
    lwz r5, 0x34(r4)
    mr r30, r3
    mr r31, r4
    cmpwi r5, 0x0
    beq lbl_fn_801CDA00_000015E4
    lwz r0, 0x104(r5)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r5)
lbl_fn_801CDA00_000015E4:
    lwz r5, 0x38(r4)
    cmpwi r5, 0x0
    beq lbl_fn_801CDA00_000015FC
    lwz r0, 0x104(r5)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r5)
lbl_fn_801CDA00_000015FC:
    li r0, 0xd
    mr r5, r31
    mtctr r0
lbl_fn_801CDA00_00001608:
    lwz r6, 0x0(r5)
    cmpwi r6, 0x0
    beq lbl_fn_801CDA00_00001620
    lwz r0, 0x104(r6)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r6)
lbl_fn_801CDA00_00001620:
    addi r5, r5, 0x4
    bdnz lbl_fn_801CDA00_00001608
    cmpwi r4, 0x0
    beq lbl_fn_801CDA00_000018A4
    lwz r5, 0x3c(r4)
    cmpwi r5, 0x0
    blt lbl_fn_801CDA00_000018A4
    lwz r0, 0x40(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801CDA00_000018A4
    lwz r25, 0x34(r4)
    slwi r0, r5, 6
    lwz r3, 0x50(r3)
    cmpwi r25, 0x0
    add r26, r3, r0
    beq lbl_fn_801CDA00_000018A4
    mr r3, r25
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801CDA00_000018A4
    lfs f1, lbl_808829C8
    lis r29, lbl_8073BCF0@ha
    stfs f1, 0x78(r1)
    addi r29, r29, lbl_8073BCF0@l
    lfs f0, lbl_808829F8
    mr r3, r30
    stfs f1, 0x7c(r1)
    mr r4, r26
    mr r5, r25
    addi r6, r1, 0x44
    stfs f1, 0x80(r1)
    addi r7, r1, 0x38
    addi r8, r29, 0xdf
    stfs f1, 0x84(r1)
    stfs f1, 0x88(r1)
    lwz r0, 0x104(r25)
    lwz r27, 0x38(r31)
    oris r0, r0, 0x80
    stw r0, 0x104(r25)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    bl fn_8051125C
    cmpwi r27, 0x0
    beq lbl_fn_801CDA00_000017A8
    lwz r0, 0x104(r27)
    mr r3, r30
    lfs f1, lbl_808829F8
    mr r4, r26
    oris r0, r0, 0x80
    stw r0, 0x104(r27)
    lfs f0, lbl_808829C8
    mr r5, r27
    stfs f1, 0x20(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x20
    addi r8, r29, 0xdf
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805112AC
    mr r3, r27
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_801CDA00_000017A8
    addi r3, r1, 0x90
    addi r4, r29, 0xe9
    crclr 6
    bl sprintf
    mr r3, r25
    bl fn_80202118
    mr r28, r3
    addi r3, r1, 0x90
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x64
    bl fn_801F4E8C
    lfs f4, 0x64(r1)
    mr r3, r27
    lfs f3, 0x68(r1)
    lfs f2, 0x6c(r1)
    lfs f1, 0x70(r1)
    lfs f0, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f2, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x88(r1)
    bl fn_80202D00
    addi r4, r29, 0xf6
    addi r5, r1, 0x78
    bl fn_801F6E78
lbl_fn_801CDA00_000017A8:
    lis r29, lbl_8073BCF0@ha
    lfs f30, lbl_808829F8
    lfs f31, lbl_808829C8
    mr r27, r31
    addi r29, r29, lbl_8073BCF0@l
    li r24, 0x0
lbl_fn_801CDA00_000017C0:
    lwz r0, 0x44(r31)
    cmpw r24, r0
    bge lbl_fn_801CDA00_00001894
    lwz r23, 0x0(r27)
    mr r3, r30
    mr r4, r26
    addi r6, r1, 0x14
    lwz r0, 0x104(r23)
    mr r5, r23
    addi r7, r1, 0x8
    addi r8, r29, 0xdf
    oris r0, r0, 0x80
    stw r0, 0x104(r23)
    stfs f30, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    bl fn_805112AC
    mr r3, r23
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_801CDA00_00001894
    addi r3, r1, 0x90
    addi r4, r29, 0xfe
    addi r5, r24, 0x1
    crclr 6
    bl sprintf
    mr r3, r25
    bl fn_80202118
    mr r28, r3
    addi r3, r1, 0x90
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x50
    bl fn_801F4E8C
    lfs f4, 0x50(r1)
    mr r3, r23
    lfs f3, 0x54(r1)
    lfs f2, 0x58(r1)
    lfs f1, 0x5c(r1)
    lfs f0, 0x60(r1)
    stfs f4, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f2, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x88(r1)
    bl fn_80202D00
    addi r4, r29, 0x10a
    addi r5, r1, 0x78
    bl fn_801F6E78
lbl_fn_801CDA00_00001894:
    addi r24, r24, 0x1
    addi r27, r27, 0x4
    cmpwi r24, 0xd
    blt lbl_fn_801CDA00_000017C0
lbl_fn_801CDA00_000018A4:
    addi r11, r1, 0x100
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    bl _restgpr_23
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801CDD2C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    addi r31, r29, 0x108
    li r30, 0x0
lbl_fn_801CDD2C_00001900:
    mr r3, r29
    mr r4, r31
    bl fn_801CDA00
    addi r30, r30, 0x1
    addi r31, r31, 0x48
    cmpwi r30, 0x3
    blt lbl_fn_801CDD2C_00001900
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801CDD98(void)
{
    nofralloc
    blr
}

asm void fn_801CDD9C(void)
{
    nofralloc
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801CDD9C_00001950
    li r3, 0x0
    blr
lbl_fn_801CDD9C_00001950:
    lwz r5, 0x1e0(r3)
    cmpwi r5, 0x0
    bne lbl_fn_801CDD9C_00001968
    lwz r6, 0x48(r3)
    lwz r7, 0x1224(r6)
    b lbl_fn_801CDD9C_00001970
lbl_fn_801CDD9C_00001968:
    lwz r6, 0x48(r3)
    lwz r7, 0x1268(r6)
lbl_fn_801CDD9C_00001970:
    lwz r0, 0x100(r3)
    add. r0, r0, r4
    bge lbl_fn_801CDD9C_00001980
    subi r0, r7, 0x1
lbl_fn_801CDD9C_00001980:
    cmpw r0, r7
    blt lbl_fn_801CDD9C_0000198C
    li r0, 0x0
lbl_fn_801CDD9C_0000198C:
    cmpwi r5, 0x0
    bne lbl_fn_801CDD9C_000019A4
    slwi r0, r0, 3
    add r3, r6, r0
    addi r3, r3, 0x1228
    blr
lbl_fn_801CDD9C_000019A4:
    slwi r0, r0, 3
    add r3, r6, r0
    addi r3, r3, 0x126c
    blr
}
