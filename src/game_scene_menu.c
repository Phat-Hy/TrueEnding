#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_800185B4(void);
extern void fn_80018608(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800A56A8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_801065E4(void);
extern void fn_801240B4(void);
extern void fn_80133130(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_8015495C(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_80179D44(void);
extern void fn_80192758(void);
extern void fn_801A4B00(void);
extern void fn_801A4E08(void);
extern void fn_801A7DC8(void);
extern void fn_801B1F4C(void);
extern void fn_80219E6C(void);
extern void fn_8021FD7C(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695B00(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073A170[];
extern u8 lbl_8073A4EC[];
extern u8 lbl_8073A4F8[];
extern u8 lbl_8073A950[];
extern u8 lbl_8077F2D8[];
extern u8 lbl_8077F2E8[];
extern u8 lbl_8077F308[];
extern u8 lbl_8077F380[];
extern u8 lbl_8077F618[];
extern u8 lbl_8077F688[];
extern u8 lbl_8077F6F0[];
extern u8 lbl_8077FA40[];
extern u8 lbl_8077FB28[];
extern u8 lbl_807C7C10[];
extern u8 lbl_807C7C18[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0DB;
extern u32 lbl_8087F0E0;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_80882178;
extern u32 lbl_8088217C;
extern u32 lbl_80882180;
extern u32 lbl_80882184;
extern u32 lbl_80882188;
extern u32 lbl_8088218C;
extern u32 lbl_80882194;
extern u32 lbl_80882198;
extern u32 lbl_808821C4;
extern u32 lbl_808821C8;
extern u32 lbl_808821E4;
extern u32 lbl_808821E8;
extern u32 lbl_808821F0;
extern u32 lbl_808821FC;
extern u32 lbl_80882208;
extern u32 lbl_8088220C;
extern u32 lbl_80882210;
extern u32 lbl_80882214;
extern u32 lbl_80882218;
extern u32 lbl_8088221C;
extern u32 lbl_80882220;
extern u32 lbl_80882224;
extern u32 lbl_80882228;
extern u32 lbl_80882230;
extern u32 lbl_80882234;
extern u32 lbl_80882238;
extern u32 lbl_8088223C;
extern u32 lbl_80882240;
extern u32 lbl_80882244;
extern u32 lbl_80882248;
extern u32 lbl_8088224C;

/* Function declarations */
void fn_801A6364(void);
void fn_801A6734(void);
void fn_801A6750(void);
void fn_801A6CFC(void);
void fn_801A6F54(void);
void fn_801A6F58(void);
void fn_801A71A0(void);
void fn_801A71D0(void);
void fn_801A72EC(void);
void fn_801A73A4(void);
void fn_801A7644(void);
void fn_801A7648(void);
void fn_801A7650(void);
void fn_801A7664(void);
void fn_801A766C(void);
void fn_801A767C(void);
void fn_801A76BC(void);
void fn_801A76FC(void);
void fn_801A773C(void);
void fn_801A777C(void);
void fn_801A77BC(void);
void fn_801A7870(void);
void fn_801A7A94(void);
void fn_801A7C7C(void);
void fn_801A7CAC(void);

asm void fn_801A6364(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    bl _savegpr_26
    lwz r4, lbl_8087EFA8
    mr r29, r3
    lwz r5, 0x4(r3)
    li r31, 0x0
    lfs f4, 0x3a4(r4)
    lfs f3, 0x20(r3)
    addi r30, r5, 0xb0
    lfs f0, 0x24(r3)
    fsubs f3, f3, f4
    lfs f13, lbl_80882178
    stfs f3, 0x20(r3)
    fdivs f0, f3, f0
    fcmpo cr0, f13, f0
    ble lbl_fn_801A6364_00000058
    b lbl_fn_801A6364_0000005C
lbl_fn_801A6364_00000058:
    fmr f13, f0
lbl_fn_801A6364_0000005C:
    lfs f3, 0x18(r3)
    addi r4, r1, 0x4c
    lfs f8, 0xc(r3)
    lfs f0, lbl_808821E8
    fsubs f12, f3, f8
    lfs f4, lbl_80882188
    lfs f5, 0x2c(r3)
    fmsubs f0, f0, f13, f4
    lfs f7, 0x14(r3)
    fmuls f10, f12, f13
    lfs f6, 0x8(r3)
    fneg f3, f5
    fmuls f0, f0, f0
    fsubs f11, f7, f6
    lfs f9, 0x1c(r3)
    lfs f7, 0x10(r3)
    fadds f8, f10, f8
    fmadds f0, f3, f0, f5
    fmuls f5, f11, f13
    fsubs f9, f9, f7
    lwz r5, 0x4(r3)
    fadds f0, f8, f0
    stfs f11, 0x1c(r1)
    fadds f3, f5, f6
    fmuls f8, f9, f13
    stfs f0, 0x50(r1)
    stfs f3, 0x4c(r1)
    fadds f2, f8, f7
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r0, 0x28(r3)
    stfs f12, 0x20(r1)
    cmpwi r0, 0x0
    stfs f9, 0x24(r1)
    stfs f5, 0x10(r1)
    stfs f10, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f2, 0x54(r1)
    bne lbl_fn_801A6364_00000304
    lfs f3, 0x234(r30)
    lfs f0, lbl_80882208
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801A6364_00000130
    lfs f3, 0x20(r3)
    lfs f0, lbl_8088220C
    fcmpo cr0, f3, f0
    bge lbl_fn_801A6364_00000128
    stfs f4, 0x238(r30)
    b lbl_fn_801A6364_00000130
lbl_fn_801A6364_00000128:
    lfs f0, lbl_80882178
    stfs f0, 0x238(r30)
lbl_fn_801A6364_00000130:
    lfs f3, 0x20(r3)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801A6364_0000033C
    li r0, 0x1
    stw r0, 0x28(r3)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r27, 0x4(r29)
    addi r3, r1, 0x58
    lfs f3, lbl_80882178
    li r4, 0x79
    lwz r28, 0x638(r27)
    lfs f0, lbl_80882188
    stfs f3, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x28
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x30(r1)
    lfs f5, lbl_8088218C
    lfs f3, 0x2c(r1)
    fmuls f6, f4, f5
    lwz r3, 0x4(r29)
    fmuls f7, f3, f5
    lfs f0, 0x28(r1)
    lfs f4, 0x530(r3)
    fmuls f5, f0, f5
    lfs f3, 0x52c(r3)
    fadds f4, f4, f6
    lfs f0, 0x528(r3)
    fadds f3, f3, f7
    lwz r26, lbl_8087F048
    fadds f0, f0, f5
    stfs f5, 0x34(r1)
    mr r3, r26
    stfs f7, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f4, 0x48(r1)
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80882178
    stw r0, 0xc(r1)
    mr r3, r26
    lfs f2, lbl_80882188
    mr r5, r28
    lwz r4, 0x4(r29)
    addi r7, r1, 0x40
    addi r8, r27, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r0, 0xac(r28)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_801A6364_00000274
    lwz r3, 0x4(r29)
    lfs f0, lbl_80882178
    stfs f0, 0x9fc(r3)
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_801A6364_00000274
    lwz r4, 0x4(r29)
    mr r5, r28
    bl fn_800185B4
    cmpwi r3, 0x0
    beq lbl_fn_801A6364_00000274
    lwz r3, lbl_8087EE68
    mr r5, r28
    lwz r4, 0x4(r29)
    bl fn_80018608
lbl_fn_801A6364_00000274:
    lwz r5, 0x4(r29)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_801A6364_0000033C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_801A6364_0000033C
    lwz r3, 0x944(r5)
    lis r0, 0x4330
    lis r4, lbl_8073A170@ha
    stw r0, 0x88(r1)
    xoris r3, r3, 0x8000
    lfd f5, lbl_8073A170@l(r4)
    stw r3, 0x8c(r1)
    lfs f4, lbl_808821FC
    lfd f0, 0x88(r1)
    lfs f3, 0x7dc(r5)
    fsubs f0, f0, f5
    lfs f6, lbl_80882178
    fnmsubs f0, f4, f0, f3
    fcmpo cr0, f6, f0
    ble lbl_fn_801A6364_000002D0
    b lbl_fn_801A6364_000002E4
lbl_fn_801A6364_000002D0:
    stw r3, 0x94(r1)
    stw r0, 0x90(r1)
    lfd f0, 0x90(r1)
    fsubs f0, f0, f5
    fnmsubs f6, f4, f0, f3
lbl_fn_801A6364_000002E4:
    stfs f6, 0x7dc(r5)
    lis r4, 0x400
    li r5, 0x96
    li r6, 0x0
    lwz r3, 0x4(r29)
    addi r3, r3, 0x7d4
    bl fn_80133130
    b lbl_fn_801A6364_0000033C
lbl_fn_801A6364_00000304:
    lfs f3, 0x234(r30)
    lfs f0, lbl_808821F0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801A6364_00000334
    lfs f0, lbl_80882210
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801A6364_00000334
    lfs f0, lbl_808821FC
    stfs f0, 0x238(r30)
    b lbl_fn_801A6364_0000033C
lbl_fn_801A6364_00000334:
    lfs f0, lbl_80882188
    stfs f0, 0x238(r30)
lbl_fn_801A6364_0000033C:
    lfs f31, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801A6364_000003AC
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801A6364_0000036C
    lwz r4, 0x4(r29)
    bl fn_801065E4
lbl_fn_801A6364_0000036C:
    lwz r7, 0x4(r29)
    lwz r3, 0x48(r7)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_801A6364_000003A8
    lwz r3, 0x638(r7)
    li r0, 0x0
    stw r3, 0x63c(r7)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    stw r0, 0x638(r7)
    li r7, 0x1
    lwz r3, 0x4(r29)
    bl fn_8015495C
lbl_fn_801A6364_000003A8:
    li r31, 0x1
lbl_fn_801A6364_000003AC:
    psq_l f31, 0xb8(r1), 0, 0
    mr r3, r31
    lfd f31, 0xb0(r1)
    addi r11, r1, 0xb0
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_801A6734(void)
{
    nofralloc
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x4(r3)
    mr r3, r0
    b fn_801065E4
    blr
}

asm void fn_801A6750(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    stw r0, 0x314(r1)
    stfd f31, 0x300(r1)
    psq_st f31, 0x308(r1), 0, 0
    stfd f30, 0x2f0(r1)
    psq_st f30, 0x2f8(r1), 0, 0
    fmr f30, f1
    lfs f1, lbl_80882214
    stw r31, 0x2ec(r1)
    mr r31, r3
    stw r30, 0x2e8(r1)
    mr r30, r6
    li r6, 0x0
    stw r29, 0x2e4(r1)
    bl fn_801A4B00
    lis r3, lbl_8077F380@ha
    stfs f30, 0x2c(r31)
    addi r3, r3, lbl_8077F380@l
    lwz r4, 0x4(r31)
    stw r3, 0x0(r31)
    li r3, 0xe
    li r0, 0x1
    lfs f0, lbl_80882188
    stw r3, 0x560(r4)
    li r4, 0x0
    lfs f1, lbl_80882178
    li r5, 0x179
    lwz r3, 0x4(r31)
    li r6, 0x0
    lfs f2, lbl_80882194
    li r7, 0x0
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    li r8, 0x1
    stfs f0, 0x24c(r29)
    mr r3, r29
    bl fn_80097C08
    lfs f0, lbl_80882188
    stfs f0, 0x238(r29)
    lfs f0, lbl_80882178
    stfs f0, 0x234(r29)
    lwz r3, 0x4(r31)
    bl fn_801446F0
    cmpwi r30, 0x0
    beq lbl_fn_801A6750_00000624
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801A6750_000004C4
    addi r4, r31, 0x14
    addi r5, r31, 0x8
    bl fn_801A4E08
    b lbl_fn_801A6750_00000624
lbl_fn_801A6750_000004C4:
    lfs f2, 0x10(r31)
    addi r30, r1, 0xb4
    psq_l f1, 0x8(r31), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r30), 0, 0
    addi r29, r1, 0xa8
    lfs f3, lbl_8088218C
    lfs f4, 0xb8(r1)
    lfs f0, lbl_808821F0
    fadds f3, f4, f3
    stfs f2, 0xbc(r1)
    stfs f3, 0xb8(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f3, 0xac(r1)
    stfs f2, 0xb0(r1)
    fsubs f0, f3, f0
    stw r0, 0x1c4(r1)
    stfs f0, 0xac(r1)
    stw r0, 0x1c8(r1)
    stw r0, 0x1cc(r1)
    stw r0, 0x1d0(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    lwz r3, lbl_8087EE98
    mr r5, r30
    mr r6, r29
    addi r4, r1, 0x190
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801A6750_0000055C
    addi r3, r1, 0x194
    lfs f2, 0x19c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    stfs f2, 0x10(r31)
lbl_fn_801A6750_0000055C:
    lfs f4, 0x10(r31)
    lfs f0, 0x1c(r31)
    lfs f3, 0x8(r31)
    fsubs f5, f4, f0
    lfs f0, 0x14(r31)
    lfs f4, 0xc(r31)
    fsubs f6, f3, f0
    lfs f0, 0x18(r31)
    fmuls f3, f5, f5
    fsubs f4, f4, f0
    lfs f0, lbl_808821C4
    stfs f6, 0x84(r1)
    fmadds f3, f6, f6, f3
    stfs f4, 0x88(r1)
    fcmpo cr0, f3, f0
    stfs f5, 0x8c(r1)
    bge lbl_fn_801A6750_00000624
    lwz r5, 0x4(r31)
    addi r3, r1, 0x160
    lfs f3, lbl_80882178
    li r4, 0x79
    lfs f0, lbl_80882188
    stfs f3, 0x6c(r1)
    stfs f3, 0x70(r1)
    stfs f0, 0x74(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x6c
    addi r3, r1, 0x160
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x74(r1)
    lfs f4, lbl_808821C8
    lfs f3, 0x70(r1)
    lfs f0, 0x6c(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0xc(r31)
    fmuls f7, f0, f4
    lfs f4, 0x8(r31)
    lfs f0, 0x10(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x78(r1)
    fadds f0, f0, f5
    stfs f6, 0x7c(r1)
    stfs f5, 0x80(r1)
    stfs f4, 0x8(r31)
    stfs f3, 0xc(r31)
    stfs f0, 0x10(r31)
lbl_fn_801A6750_00000624:
    lfs f3, 0x10(r31)
    addi r3, r1, 0x9c
    lfs f0, 0x1c(r31)
    lfs f5, 0xc(r31)
    fsubs f6, f3, f0
    lfs f4, 0x18(r31)
    lfs f3, 0x8(r31)
    lfs f0, 0x14(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xa0(r1)
    stfs f0, 0x9c(r1)
    stfs f6, 0xa4(r1)
    bl fn_805F9920
    lfs f0, lbl_808821C4
    fcmpo cr0, f1, f0
    bge lbl_fn_801A6750_000006B8
    lwz r5, 0x4(r31)
    addi r3, r1, 0x130
    lfs f3, lbl_80882178
    li r4, 0x79
    lfs f0, lbl_80882188
    stfs f3, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x60
    addi r3, r1, 0x130
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x60
    lfs f2, 0x68(r1)
    addi r3, r1, 0x9c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa4(r1)
lbl_fn_801A6750_000006B8:
    lfs f2, 0xa4(r1)
    addi r3, r1, 0x9c
    lfs f0, lbl_8088217C
    addi r29, r1, 0x54
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x5c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801A6750_00000708
    lfs f3, 0x54(r1)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    ble lbl_fn_801A6750_000006FC
    lfs f0, lbl_80882180
    b lbl_fn_801A6750_00000700
lbl_fn_801A6750_000006FC:
    lfs f0, lbl_80882184
lbl_fn_801A6750_00000700:
    stfs f0, 0x4c(r1)
    b lbl_fn_801A6750_0000071C
lbl_fn_801A6750_00000708:
    frsp f2, f2
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_801A6750_0000071C:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882178
    addi r4, r1, 0x3c
    lfs f30, 0xc8(r1)
    mr r5, r4
    lfs f31, 0xc4(r1)
    addi r3, r1, 0xf0
    lfs f13, 0xc0(r1)
    lfs f12, 0xd8(r1)
    lfs f11, 0xd4(r1)
    lfs f10, 0xd0(r1)
    lfs f9, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f7, 0xe0(r1)
    lfs f6, 0xec(r1)
    lfs f5, 0xdc(r1)
    lfs f4, 0xcc(r1)
    lfs f0, lbl_80882188
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x5c(r1)
    stfs f3, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f3, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f13, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f13, 0xf0(r1)
    stfs f31, 0xf4(r1)
    stfs f30, 0xf8(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f12, 0x20(r1)
    stfs f10, 0x100(r1)
    stfs f11, 0x104(r1)
    stfs f12, 0x108(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f9, 0x2c(r1)
    stfs f7, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f9, 0x118(r1)
    stfs f4, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f4, 0xfc(r1)
    stfs f5, 0x10c(r1)
    stfs f6, 0x11c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    bl fn_805F9750
    lfs f2, 0x44(r1)
    lfs f0, lbl_8088217C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A6750_00000838
    lfs f3, 0x40(r1)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    ble lbl_fn_801A6750_00000828
    lfs f0, lbl_80882180
    b lbl_fn_801A6750_0000082C
lbl_fn_801A6750_00000828:
    lfs f0, lbl_80882184
lbl_fn_801A6750_0000082C:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_801A6750_0000084C
lbl_fn_801A6750_00000838:
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_801A6750_0000084C:
    addi r3, r1, 0x48
    lwz r4, 0x4(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lwz r0, 0x48(r4)
    lfs f2, lbl_80882178
    lfs f0, 0x58(r1)
    cmpwi r0, 0x0
    stfs f2, 0x50(r1)
    stfs f2, 0x5c(r1)
    stfs f2, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f2, 0x98(r1)
    beq lbl_fn_801A6750_000008A8
    lwz r3, 0xd1c(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801A6750_000008A8
    lwz r12, 0x0(r3)
    addi r4, r1, 0x9c
    lwz r12, 0xe0(r12)
    mtctr r12
    bctrl
    stfs f1, 0x94(r1)
lbl_fn_801A6750_000008A8:
    addi r3, r1, 0x90
    lwz r4, 0x4(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    lfs f2, 0x98(r1)
    stfs f2, 0x53c(r4)
    lwz r3, 0x4(r31)
    lwz r3, 0x7c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801A6750_00000944
    li r4, 0x24
    bl fn_8021FD7C
    cmpwi r3, 0x0
    beq lbl_fn_801A6750_00000944
    lwz r3, 0x4(r31)
    li r4, 0x24
    lwz r3, 0x7c(r3)
    bl fn_8021FD7C
    lis r4, lbl_8073A4EC@ha
    mr r5, r3
    addi r4, r4, lbl_8073A4EC@l
    addi r3, r1, 0x1e0
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x1e0
    li r30, 0x0
    bl strlen
    addi r4, r1, 0x1df
    lfs f1, lbl_80882188
    stbx r30, r4, r3
    addi r3, r1, 0x8
    addi r4, r1, 0x1e0
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_801A6750_00000944:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801A6750_00000968
    lwz r4, 0x4(r31)
    li r5, 0x24
    lfs f1, lbl_80882188
    li r6, 0x0
    lfs f2, lbl_8088218C
    bl fn_803EA77C
lbl_fn_801A6750_00000968:
    psq_l f31, 0x308(r1), 0, 0
    mr r3, r31
    lfd f31, 0x300(r1)
    psq_l f30, 0x2f8(r1), 0, 0
    lfd f30, 0x2f0(r1)
    lwz r31, 0x2ec(r1)
    lwz r30, 0x2e8(r1)
    lwz r29, 0x2e4(r1)
    lwz r0, 0x314(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}

asm void fn_801A6CFC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x80
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    bl _savegpr_26
    lwz r4, lbl_8087EFA8
    mr r31, r3
    lwz r5, 0x4(r3)
    li r27, 0x0
    lfs f4, 0x3a4(r4)
    lfs f3, 0x20(r3)
    addi r26, r5, 0xb0
    lfs f0, lbl_80882218
    fsubs f3, f3, f4
    stfs f3, 0x20(r3)
    lfs f3, 0x2e4(r5)
    fcmpo cr0, f3, f0
    bge lbl_fn_801A6CFC_000009FC
    lfs f2, 0x1c(r3)
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    b lbl_fn_801A6CFC_00000A0C
lbl_fn_801A6CFC_000009FC:
    lfs f2, 0x10(r3)
    psq_l f1, 0x8(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
lbl_fn_801A6CFC_00000A0C:
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801A6CFC_00000B70
    lfs f3, 0x20(r3)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801A6CFC_00000B70
    li r0, 0x1
    stw r0, 0x28(r3)
    lwz r4, 0x4(r3)
    lfs f2, 0x10(r3)
    psq_l f1, 0x8(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r29, 0x4(r31)
    addi r3, r1, 0x38
    lfs f3, lbl_80882178
    li r4, 0x79
    lwz r30, 0x638(r29)
    lfs f0, lbl_80882188
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x10
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x18(r1)
    lfs f5, lbl_8088218C
    lfs f3, 0x14(r1)
    fmuls f6, f4, f5
    lwz r3, 0x4(r31)
    fmuls f7, f3, f5
    lfs f0, 0x10(r1)
    lfs f4, 0x530(r3)
    fmuls f5, f0, f5
    lfs f3, 0x52c(r3)
    fadds f4, f4, f6
    lfs f0, 0x528(r3)
    fadds f3, f3, f7
    lwz r28, lbl_8087F048
    fadds f0, f0, f5
    stfs f5, 0x1c(r1)
    mr r3, r28
    stfs f7, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f4, 0x30(r1)
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80882178
    stw r0, 0xc(r1)
    mr r3, r28
    lfs f2, lbl_80882188
    mr r5, r30
    lwz r4, 0x4(r31)
    addi r7, r1, 0x28
    addi r8, r29, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r0, 0xac(r30)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_801A6CFC_00000B70
    lwz r3, 0x4(r31)
    lfs f0, lbl_80882178
    stfs f0, 0x9fc(r3)
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_801A6CFC_00000B70
    lwz r4, 0x4(r31)
    mr r5, r30
    bl fn_800185B4
    cmpwi r3, 0x0
    beq lbl_fn_801A6CFC_00000B70
    lwz r3, lbl_8087EE68
    mr r5, r30
    lwz r4, 0x4(r31)
    bl fn_80018608
lbl_fn_801A6CFC_00000B70:
    lfs f31, 0x234(r26)
    mr r3, r26
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801A6CFC_00000BCC
    lwz r7, 0x4(r31)
    lwz r3, 0x48(r7)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_801A6CFC_00000BC8
    lwz r3, 0x638(r7)
    li r0, 0x0
    stw r3, 0x63c(r7)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    stw r0, 0x638(r7)
    li r7, 0x1
    lwz r3, 0x4(r31)
    bl fn_8015495C
lbl_fn_801A6CFC_00000BC8:
    li r27, 0x1
lbl_fn_801A6CFC_00000BCC:
    psq_l f31, 0x88(r1), 0, 0
    mr r3, r27
    lfd f31, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_801A6F54(void)
{
    nofralloc
    blr
}

asm void fn_801A6F58(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    mr r30, r4
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801A6F58_00000E18
    lwz r5, 0x4(r4)
    addi r3, r1, 0x28
    lfs f0, 0x10(r4)
    lfs f1, 0x530(r5)
    lfs f3, 0x52c(r5)
    fsubs f4, f1, f0
    lfs f2, 0xc(r4)
    lfs f1, 0x528(r5)
    lfs f0, 0x8(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x2c(r1)
    stfs f0, 0x28(r1)
    stfs f4, 0x30(r1)
    bl fn_805F9920
    lfs f0, lbl_8088221C
    fcmpo cr0, f1, f0
    bge lbl_fn_801A6F58_00000E18
    lis r5, lbl_8073A4EC@ha
    li r3, 0x24
    addi r5, r5, lbl_8073A4EC@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801A6F58_00000C98
    lwz r4, 0x4(r30)
    addi r5, r30, 0x14
    li r6, 0x0
    bl fn_801B1F4C
lbl_fn_801A6F58_00000C98:
    lis r4, lbl_8077F2D8@ha
    lwzu r6, lbl_8077F2D8@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0DB
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r7, 0x68(r1)
    stw r3, 0x6c(r1)
    bne lbl_fn_801A6F58_00000D1C
    lis r6, lbl_807C7C10@ha
    lis r4, fn_801A71A0@ha
    lis r3, fn_801A71D0@ha
    li r0, 0x1
    addi r3, r3, fn_801A71D0@l
    addi r5, r6, lbl_807C7C10@l
    addi r4, r4, fn_801A71A0@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C10@l(r6)
    stb r0, lbl_8087F0DB
lbl_fn_801A6F58_00000D1C:
    lwz r7, 0x5c(r1)
    addi r3, r1, 0x48
    lwz r6, 0x60(r1)
    lwz r5, 0x64(r1)
    lwz r4, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A6F58_00000DF0
    lwz r7, 0x48(r1)
    li r3, 0x14
    lwz r6, 0x4c(r1)
    lwz r5, 0x50(r1)
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A6F58_00000DB4
    lis r3, __files@ha
    lis r4, lbl_8077F618@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F618@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A6F58_00000DB4:
    cmpwi r30, 0x0
    beq lbl_fn_801A6F58_00000DE4
    lwz r0, 0x34(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x3c(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x40(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x44(r1)
    stw r0, 0x10(r30)
lbl_fn_801A6F58_00000DE4:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801A6F58_00000DF4
lbl_fn_801A6F58_00000DF0:
    li r0, 0x0
lbl_fn_801A6F58_00000DF4:
    cmpwi r0, 0x0
    beq lbl_fn_801A6F58_00000E0C
    lis r3, lbl_807C7C10@ha
    addi r3, r3, lbl_807C7C10@l
    stw r3, 0x0(r31)
    b lbl_fn_801A6F58_00000E24
lbl_fn_801A6F58_00000E0C:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801A6F58_00000E24
lbl_fn_801A6F58_00000E18:
    mr r3, r31
    mr r4, r30
    bl fn_80192758
lbl_fn_801A6F58_00000E24:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801A71A0(void)
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

asm void fn_801A71D0(void)
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
    bne lbl_fn_801A71D0_00000EA4
    lis r3, lbl_8077F2E8@ha
    addi r3, r3, lbl_8077F2E8@l
    stw r3, 0x0(r4)
    b lbl_fn_801A71D0_00000F6C
lbl_fn_801A71D0_00000EA4:
    cmpwi r5, 0x0
    bne lbl_fn_801A71D0_00000F1C
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A71D0_00000EE4
    lis r3, __files@ha
    lis r4, lbl_8077F618@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F618@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A71D0_00000EE4:
    cmpwi r30, 0x0
    beq lbl_fn_801A71D0_00000F14
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
lbl_fn_801A71D0_00000F14:
    stw r30, 0x0(r29)
    b lbl_fn_801A71D0_00000F6C
lbl_fn_801A71D0_00000F1C:
    cmpwi r5, 0x1
    bne lbl_fn_801A71D0_00000F38
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801A71D0_00000F6C
lbl_fn_801A71D0_00000F38:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F2E8@ha
    lwz r4, lbl_8077F2E8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801A71D0_00000F64
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801A71D0_00000F6C
lbl_fn_801A71D0_00000F64:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801A71D0_00000F6C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A72EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8077F308@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8077F308@l
    li r0, 0xe
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r5, 0x0(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x12a4(r3)
    addi r31, r3, 0xb0
    srwi. r0, r0, 31
    beq lbl_fn_801A72EC_00000FD0
    bl fn_801539E0
lbl_fn_801A72EC_00000FD0:
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_80882188
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r4, 0x0
    lfs f1, lbl_80882178
    li r5, 0x14a
    lfs f2, lbl_80882194
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882188
    stfs f0, 0x238(r31)
    lwz r3, 0x4(r30)
    lfs f0, 0x56c(r3)
    stfs f0, 0xc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x8(r30)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A73A4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r4, r1, 0x34
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    lfs f31, lbl_80882178
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    li r30, 0x0
    stw r29, 0x74(r1)
    mr r29, r3
    lwz r5, 0x4(r3)
    psq_l f1, 0x534(r5), 0, 0
    addi r31, r5, 0xb0
    lfs f2, 0x53c(r5)
    stfs f2, 0x3c(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x2dc(r5)
    cmpwi r0, 0x14a
    bne lbl_fn_801A73A4_000010E0
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_801A73A4_0000126C
    lfs f1, lbl_80882178
    mr r3, r31
    lfs f2, lbl_80882194
    li r4, 0x0
    li r5, 0x14b
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801A73A4_0000126C
lbl_fn_801A73A4_000010E0:
    cmpwi r0, 0x14b
    bne lbl_fn_801A73A4_0000124C
    lwz r0, 0x48(r5)
    lfs f31, lbl_80882188
    cmpwi r0, 0x0
    bne lbl_fn_801A73A4_0000117C
    lwz r3, 0x50(r5)
    subis r0, r3, 0xa
    cmplwi r0, 0xae77
    bne lbl_fn_801A73A4_00001110
    lfs f30, lbl_80882220
    b lbl_fn_801A73A4_00001114
lbl_fn_801A73A4_00001110:
    lfs f30, lbl_80882224
lbl_fn_801A73A4_00001114:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fneg f4, f1
    lfs f3, lbl_808821E4
    lwz r3, lbl_8087F0A8
    li r4, 0x9
    lfs f0, 0x38(r1)
    fmuls f3, f3, f4
    addi r3, r3, 0x48c
    fmadds f0, f30, f3, f0
    stfs f0, 0x38(r1)
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_801A73A4_0000117C
    lfs f1, lbl_80882178
    mr r3, r31
    lfs f2, lbl_80882194
    li r4, 0x0
    li r5, 0x14c
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801A73A4_0000117C:
    lwz r5, 0x4(r29)
    addi r3, r1, 0x40
    lfs f3, lbl_80882178
    li r4, 0x79
    lfs f0, lbl_80882188
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x10
    addi r3, r1, 0x40
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x18(r1)
    li r3, 0xa4
    lfs f5, lbl_80882198
    lfs f3, 0x14(r1)
    fmuls f6, f4, f5
    lwz r4, 0x4(r29)
    fmuls f7, f3, f5
    lfs f0, 0x10(r1)
    lfs f4, 0x530(r4)
    fmuls f5, f0, f5
    lfs f3, 0x52c(r4)
    fadds f4, f4, f6
    lfs f0, 0x528(r4)
    fadds f3, f3, f7
    stfs f5, 0x1c(r1)
    fadds f0, f0, f5
    lwz r31, lbl_8087F048
    stfs f7, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f4, 0x30(r1)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80882178
    stw r0, 0xc(r1)
    mr r3, r31
    lfs f2, lbl_80882188
    addi r7, r1, 0x28
    lwz r4, 0x4(r29)
    addi r8, r1, 0x34
    lwz r6, 0x8(r29)
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_801A73A4_0000126C
lbl_fn_801A73A4_0000124C:
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_801A73A4_0000126C
    li r30, 0x1
lbl_fn_801A73A4_0000126C:
    lwz r3, 0x4(r29)
    fmr f1, f31
    addi r4, r1, 0x34
    lfs f2, lbl_80882228
    lwz r12, 0x0(r3)
    li r5, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r29)
    mr r3, r30
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x54c(r4)
    lwz r4, 0x4(r29)
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x54c(r4)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_801A7644(void)
{
    nofralloc
    blr
}

asm void fn_801A7648(void)
{
    nofralloc
    lwz r3, 0x28(r3)
    blr
}

asm void fn_801A7650(void)
{
    nofralloc
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_801A7664(void)
{
    nofralloc
    li r3, 0x23
    blr
}

asm void fn_801A766C(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctr
}

asm void fn_801A767C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A767C_00001340
    cmpwi r4, 0x0
    ble lbl_fn_801A767C_00001340
    bl dtor_80084684
lbl_fn_801A767C_00001340:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A76BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A76BC_00001380
    cmpwi r4, 0x0
    ble lbl_fn_801A76BC_00001380
    bl dtor_80084684
lbl_fn_801A76BC_00001380:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A76FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A76FC_000013C0
    cmpwi r4, 0x0
    ble lbl_fn_801A76FC_000013C0
    bl dtor_80084684
lbl_fn_801A76FC_000013C0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A773C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A773C_00001400
    cmpwi r4, 0x0
    ble lbl_fn_801A773C_00001400
    bl dtor_80084684
lbl_fn_801A773C_00001400:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A777C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A777C_00001440
    cmpwi r4, 0x0
    ble lbl_fn_801A777C_00001440
    bl dtor_80084684
lbl_fn_801A777C_00001440:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A77BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, lbl_8077FA40@ha
    stw r0, 0x14(r1)
    addi r8, r8, lbl_8077FA40@l
    li r0, 0x64
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r8, 0x0(r3)
    stw r5, 0x8(r3)
    stw r6, 0xc(r3)
    stw r7, 0x10(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801A77BC_000014AC
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801A77BC_000014AC:
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_80882230
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_80882234
    mr r3, r31
    lfs f2, lbl_80882238
    li r5, 0x84
    stfs f0, 0x24c(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882230
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A7870(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    li r31, 0x0
    stw r30, 0xa8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f30, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_801A7870_0000155C
    li r31, 0x1
lbl_fn_801A7870_0000155C:
    lwz r5, 0x8(r30)
    addi r3, r1, 0x78
    lfs f3, lbl_80882234
    li r4, 0x79
    lfs f0, lbl_80882230
    stfs f3, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x44
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_8088223C
    addi r4, r1, 0x38
    lfs f3, 0x48(r1)
    lis r3, lbl_8073A4F8@ha
    lfs f0, 0x44(r1)
    fmuls f7, f3, f4
    lwz r5, 0x8(r30)
    fmuls f8, f0, f4
    lfs f5, 0x4c(r1)
    lfs f3, 0x52c(r5)
    lfs f0, 0x528(r5)
    fmuls f6, f5, f4
    lwz r6, 0x4(r30)
    fadds f10, f3, f7
    stfs f8, 0x50(r1)
    fadds f11, f0, f8
    lfs f0, 0x530(r5)
    fadds f9, f0, f6
    lfs f4, 0x52c(r6)
    lfs f3, 0x528(r6)
    fsubs f31, f10, f4
    lfs f5, 0x530(r6)
    fsubs f13, f11, f3
    lfs f0, lbl_80882240
    fsubs f30, f9, f5
    stfs f7, 0x54(r1)
    fmuls f12, f31, f0
    fmuls f8, f13, f0
    stfs f6, 0x58(r1)
    fmuls f7, f30, f0
    fadds f4, f12, f4
    stfs f11, 0x68(r1)
    fadds f0, f8, f3
    stfs f4, 0x3c(r1)
    fadds f4, f7, f5
    stfs f0, 0x38(r1)
    fmr f2, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lfd f2, lbl_8073A4F8@l(r3)
    lwz r3, 0x4(r30)
    lwz r4, 0x8(r30)
    lfs f0, 0x538(r3)
    lfs f3, 0x538(r4)
    stfs f10, 0x6c(r1)
    fsubs f1, f3, f0
    stfs f9, 0x70(r1)
    stfs f13, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f30, 0x1c(r1)
    stfs f8, 0x8(r1)
    stfs f12, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f4, 0x40(r1)
    bl fn_8068AEA8
    frsp f9, f1
    lfs f0, lbl_80882244
    fcmpo cr0, f9, f0
    ble lbl_fn_801A7870_0000168C
    lfs f0, lbl_80882248
    fsubs f9, f9, f0
lbl_fn_801A7870_0000168C:
    lfs f0, lbl_8088224C
    fcmpo cr0, f9, f0
    bge lbl_fn_801A7870_000016A0
    lfs f0, lbl_80882248
    fadds f9, f9, f0
lbl_fn_801A7870_000016A0:
    frsp f3, f9
    lfs f5, lbl_80882234
    lfs f4, lbl_80882240
    addi r4, r1, 0x2c
    lwz r5, 0x4(r30)
    mr r3, r31
    fmuls f6, f5, f4
    lfs f0, 0x534(r5)
    fmuls f7, f3, f4
    lfs f3, 0x538(r5)
    lfs f4, 0x53c(r5)
    fadds f8, f0, f6
    fadds f0, f3, f7
    stfs f5, 0x5c(r1)
    fadds f2, f4, f6
    stfs f8, 0x2c(r1)
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r0, 0xd4(r1)
    stfs f9, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f6, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f6, 0x28(r1)
    stfs f2, 0x34(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_801A7A94(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_8073A950@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r5, r5, lbl_8073A950@l
    mr r6, r5
    stw r31, 0x6c(r1)
    mr r31, r3
    li r3, 0x20
    stw r30, 0x68(r1)
    mr r30, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801A7A94_00001784
    lwz r4, 0x4(r30)
    lwz r5, 0x8(r30)
    lwz r6, 0xc(r30)
    lwz r7, 0x10(r30)
    bl fn_801A7DC8
lbl_fn_801A7A94_00001784:
    lis r4, lbl_8077F688@ha
    lwzu r6, lbl_8077F688@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0E0
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
    bne lbl_fn_801A7A94_00001808
    lis r6, lbl_807C7C18@ha
    lis r4, fn_801A7C7C@ha
    lis r3, fn_801A7CAC@ha
    li r0, 0x1
    addi r3, r3, fn_801A7CAC@l
    addi r5, r6, lbl_807C7C18@l
    addi r4, r4, fn_801A7C7C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C18@l(r6)
    stb r0, lbl_8087F0E0
lbl_fn_801A7A94_00001808:
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
    bne lbl_fn_801A7A94_000018DC
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
    bne lbl_fn_801A7A94_000018A0
    lis r3, __files@ha
    lis r4, lbl_8077FB28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FB28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A7A94_000018A0:
    cmpwi r30, 0x0
    beq lbl_fn_801A7A94_000018D0
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
lbl_fn_801A7A94_000018D0:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801A7A94_000018E0
lbl_fn_801A7A94_000018DC:
    li r0, 0x0
lbl_fn_801A7A94_000018E0:
    cmpwi r0, 0x0
    beq lbl_fn_801A7A94_000018F8
    lis r3, lbl_807C7C18@ha
    addi r3, r3, lbl_807C7C18@l
    stw r3, 0x0(r31)
    b lbl_fn_801A7A94_00001900
lbl_fn_801A7A94_000018F8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801A7A94_00001900:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801A7C7C(void)
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

asm void fn_801A7CAC(void)
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
    bne lbl_fn_801A7CAC_00001980
    lis r3, lbl_8077F6F0@ha
    addi r3, r3, lbl_8077F6F0@l
    stw r3, 0x0(r4)
    b lbl_fn_801A7CAC_00001A48
lbl_fn_801A7CAC_00001980:
    cmpwi r5, 0x0
    bne lbl_fn_801A7CAC_000019F8
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A7CAC_000019C0
    lis r3, __files@ha
    lis r4, lbl_8077FB28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FB28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A7CAC_000019C0:
    cmpwi r30, 0x0
    beq lbl_fn_801A7CAC_000019F0
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
lbl_fn_801A7CAC_000019F0:
    stw r30, 0x0(r29)
    b lbl_fn_801A7CAC_00001A48
lbl_fn_801A7CAC_000019F8:
    cmpwi r5, 0x1
    bne lbl_fn_801A7CAC_00001A14
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801A7CAC_00001A48
lbl_fn_801A7CAC_00001A14:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F6F0@ha
    lwz r4, lbl_8077F6F0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801A7CAC_00001A40
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801A7CAC_00001A48
lbl_fn_801A7CAC_00001A40:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801A7CAC_00001A48:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
