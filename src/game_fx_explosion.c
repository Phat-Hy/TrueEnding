#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_8000D0F8(void);
extern void fn_8000D124(void);
extern void fn_800132EC(void);
extern void fn_80092814(void);
extern void fn_80092954(void);
extern void fn_8009373C(void);
extern void fn_80097C08(void);
extern void fn_800F8548(void);
extern void fn_80133130(void);
extern void fn_8013322C(void);
extern void fn_80148990(void);
extern void fn_80149A30(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_80239DAC(void);
extern void fn_8028A1F8(void);
extern void fn_8029A674(void);
extern void fn_8029A788(void);
extern void fn_8029B59C(void);
extern void fn_8029C564(void);
extern void fn_803C1560(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807457C0[];
extern u8 lbl_807457F0[];
extern u8 lbl_80745818[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80883BE8;
extern u32 lbl_80883BF0;
extern u32 lbl_80883BF8;
extern u32 lbl_80883C0C;
extern u32 lbl_80883C10;
extern u32 lbl_80883C14;
extern u32 lbl_80883C18;
extern u32 lbl_80883C1C;
extern u32 lbl_80883C20;
extern u32 lbl_80883C24;
extern u32 lbl_80883C28;
extern u32 lbl_80883C2C;
extern u32 lbl_80883C30;
extern u32 lbl_80883C34;
extern u32 lbl_80883C38;
extern u32 lbl_80883C3C;
extern u32 lbl_80883C40;
extern u32 lbl_80883C44;
extern u32 lbl_80883C48;
extern u32 lbl_80883C4C;
extern u32 lbl_80883C58;

/* Function declarations */
void fn_80294F88(void);
void fn_802953C8(void);
void fn_802956D8(void);
void fn_8029597C(void);
void fn_80295988(void);
void fn_802959EC(void);
void fn_80295BE4(void);
void fn_80295DB8(void);
void fn_80296160(void);
void fn_80296268(void);

asm void fn_80294F88(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    stw r29, 0xb4(r1)
    lwz r0, 0x14c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80294F88_000001FC
    lfs f4, lbl_80883C14
    lis r30, lbl_80745818@ha
    lfs f0, 0x16c0(r3)
    addi r30, r30, lbl_80745818@l
    lfs f2, 0x16c4(r3)
    addi r4, r30, 0x275
    fmuls f3, f4, f0
    lfs f1, 0x16c8(r3)
    lfs f0, 0x16cc(r3)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    addi r3, r3, 0xb0
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x48(r1)
    fctiwz f0, f0
    stfd f2, 0x50(r1)
    lwz r7, 0x4c(r1)
    stfd f1, 0x58(r1)
    lwz r6, 0x54(r1)
    stfd f0, 0x60(r1)
    lwz r5, 0x5c(r1)
    lwz r0, 0x64(r1)
    stb r7, 0x1c(r1)
    stb r6, 0x1d(r1)
    stb r5, 0x1e(r1)
    stb r0, 0x1f(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x34(r1)
    bl fn_80092954
    lbz r0, 0x34(r1)
    addi r4, r30, 0x285
    stb r0, 0x18(r3)
    lbz r0, 0x35(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x36(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x37(r1)
    stb r0, 0x1b(r3)
    addi r3, r31, 0xb0
    lfs f4, lbl_80883C14
    lfs f0, 0x16c0(r31)
    lfs f2, 0x16c4(r31)
    fmuls f3, f4, f0
    lfs f1, 0x16c8(r31)
    lfs f0, 0x16cc(r31)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x68(r1)
    fctiwz f0, f0
    stfd f2, 0x70(r1)
    lwz r7, 0x6c(r1)
    stfd f1, 0x78(r1)
    lwz r6, 0x74(r1)
    stfd f0, 0x80(r1)
    lwz r5, 0x7c(r1)
    lwz r0, 0x84(r1)
    stb r7, 0x18(r1)
    stb r6, 0x19(r1)
    stb r5, 0x1a(r1)
    stb r0, 0x1b(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x30(r1)
    bl fn_80092954
    lbz r0, 0x30(r1)
    addi r4, r30, 0x296
    stb r0, 0x18(r3)
    lbz r0, 0x31(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x32(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x33(r1)
    stb r0, 0x1b(r3)
    addi r3, r31, 0xb0
    lfs f4, lbl_80883C14
    lfs f0, 0x16c0(r31)
    lfs f2, 0x16c4(r31)
    fmuls f3, f4, f0
    lfs f1, 0x16c8(r31)
    lfs f0, 0x16cc(r31)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x88(r1)
    fctiwz f0, f0
    stfd f2, 0x90(r1)
    lwz r7, 0x8c(r1)
    stfd f1, 0x98(r1)
    lwz r6, 0x94(r1)
    stfd f0, 0xa0(r1)
    lwz r5, 0x9c(r1)
    lwz r0, 0xa4(r1)
    stb r7, 0x14(r1)
    stb r6, 0x15(r1)
    stb r5, 0x16(r1)
    stb r0, 0x17(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x2c(r1)
    bl fn_80092954
    lbz r0, 0x2c(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x2d(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x2e(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x2f(r1)
    stb r0, 0x1b(r3)
    b lbl_fn_80294F88_000003C4
lbl_fn_80294F88_000001FC:
    lfs f3, lbl_80883C18
    lis r30, lbl_80745818@ha
    lfs f2, lbl_80883BF0
    addi r30, r30, lbl_80745818@l
    lfs f0, lbl_80883C14
    addi r4, r30, 0x275
    stfs f3, 0x38(r1)
    addi r3, r3, 0xb0
    fmuls f1, f0, f3
    fmuls f0, f0, f2
    stfs f3, 0x3c(r1)
    fctiwz f1, f1
    stfs f3, 0x40(r1)
    fctiwz f0, f0
    stfd f1, 0xa0(r1)
    stfd f1, 0x98(r1)
    lwz r7, 0xa4(r1)
    stfd f1, 0x90(r1)
    lwz r6, 0x9c(r1)
    stfd f0, 0x88(r1)
    lwz r5, 0x94(r1)
    lwz r0, 0x8c(r1)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stfs f2, 0x44(r1)
    stw r0, 0x28(r1)
    bl fn_80092954
    lfs f4, lbl_80883C14
    addi r4, r30, 0x285
    lfs f0, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f3, f4, f0
    lfs f1, 0x40(r1)
    lfs f0, 0x44(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    lbz r0, 0x28(r1)
    fmuls f0, f4, f0
    stb r0, 0x18(r3)
    fctiwz f3, f3
    lbz r8, 0x29(r1)
    fctiwz f2, f2
    stb r8, 0x19(r3)
    fctiwz f1, f1
    stfd f3, 0x80(r1)
    fctiwz f0, f0
    lbz r8, 0x2a(r1)
    stfd f2, 0x78(r1)
    lwz r7, 0x84(r1)
    stfd f1, 0x70(r1)
    lwz r6, 0x7c(r1)
    stfd f0, 0x68(r1)
    lwz r5, 0x74(r1)
    lwz r0, 0x6c(r1)
    stb r7, 0xc(r1)
    lbz r7, 0x2b(r1)
    stb r8, 0x1a(r3)
    stb r7, 0x1b(r3)
    addi r3, r31, 0xb0
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x24(r1)
    bl fn_80092954
    lfs f4, lbl_80883C14
    addi r4, r30, 0x296
    lfs f0, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f3, f4, f0
    lfs f1, 0x40(r1)
    lfs f0, 0x44(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    lbz r0, 0x24(r1)
    fmuls f0, f4, f0
    stb r0, 0x18(r3)
    fctiwz f3, f3
    lbz r8, 0x25(r1)
    fctiwz f2, f2
    stb r8, 0x19(r3)
    fctiwz f1, f1
    stfd f3, 0x60(r1)
    fctiwz f0, f0
    lbz r8, 0x26(r1)
    stfd f2, 0x58(r1)
    lwz r7, 0x64(r1)
    stfd f1, 0x50(r1)
    lwz r6, 0x5c(r1)
    stfd f0, 0x48(r1)
    lwz r5, 0x54(r1)
    lwz r0, 0x4c(r1)
    stb r7, 0x8(r1)
    lbz r7, 0x27(r1)
    stb r8, 0x1a(r3)
    stb r7, 0x1b(r3)
    addi r3, r31, 0xb0
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x20(r1)
    bl fn_80092954
    lbz r0, 0x20(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x21(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x22(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x23(r1)
    stb r0, 0x1b(r3)
lbl_fn_80294F88_000003C4:
    lis r30, lbl_807457C0@ha
    li r29, 0x0
    addi r30, r30, lbl_807457C0@l
lbl_fn_80294F88_000003D0:
    lwz r0, 0x14c8(r31)
    addi r3, r31, 0xb0
    lwz r4, 0x0(r30)
    cntlzw r0, r0
    srwi r5, r0, 5
    bl fn_8009373C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0xc
    blt lbl_fn_80294F88_000003D0
    lwz r0, 0x14c8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80294F88_0000041C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_80294F88_0000041C:
    mr r3, r31
    bl fn_80149A30
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_802953C8(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lfs f0, lbl_80883BE8
    stw r0, 0x104(r1)
    li r0, 0x0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r4, 0x14b0(r3)
    lfs f3, 0x528(r3)
    lfs f4, 0x528(r4)
    lfs f5, 0x530(r4)
    fsubs f4, f4, f3
    lfs f3, 0x530(r3)
    stfs f0, 0x60(r1)
    fsubs f3, f5, f3
    fcmpu cr0, f0, f4
    stfs f4, 0x5c(r1)
    stfs f3, 0x64(r1)
    bne lbl_fn_802953C8_000004B4
    fcmpu cr0, f0, f0
    bne lbl_fn_802953C8_000004B4
    fcmpu cr0, f0, f3
    bne lbl_fn_802953C8_000004B4
    li r0, 0x1
lbl_fn_802953C8_000004B4:
    cmpwi r0, 0x0
    beq lbl_fn_802953C8_000004D8
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x53c(r3)
    psq_st f1, 0x534(r3), 0, 0
    b lbl_fn_802953C8_00000728
lbl_fn_802953C8_000004D8:
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    lfs f0, lbl_80883C1C
    addi r31, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802953C8_00000528
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_802953C8_0000051C
    lfs f0, lbl_80883C20
    b lbl_fn_802953C8_00000520
lbl_fn_802953C8_0000051C:
    lfs f0, lbl_80883C24
lbl_fn_802953C8_00000520:
    stfs f0, 0x48(r1)
    b lbl_fn_802953C8_0000053C
lbl_fn_802953C8_00000528:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802953C8_0000053C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883BE8
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80883BF0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883C1C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802953C8_00000658
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_802953C8_00000648
    lfs f0, lbl_80883C20
    b lbl_fn_802953C8_0000064C
lbl_fn_802953C8_00000648:
    lfs f0, lbl_80883C24
lbl_fn_802953C8_0000064C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802953C8_0000066C
lbl_fn_802953C8_00000658:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802953C8_0000066C:
    addi r3, r1, 0x44
    lfs f3, lbl_80883BE8
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807457F0@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r30)
    lfs f30, 0x54(r1)
    stfs f2, 0x58(r1)
    fsubs f1, f30, f0
    lfd f2, lbl_807457F0@l(r3)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883C28
    fcmpo cr0, f4, f0
    ble lbl_fn_802953C8_000006B8
    lfs f0, lbl_80883C2C
    fsubs f4, f4, f0
lbl_fn_802953C8_000006B8:
    lfs f0, lbl_80883C30
    fcmpo cr0, f4, f0
    bge lbl_fn_802953C8_000006CC
    lfs f0, lbl_80883C2C
    fadds f4, f4, f0
lbl_fn_802953C8_000006CC:
    lfs f0, lbl_80883BE8
    fcmpo cr0, f4, f0
    bge lbl_fn_802953C8_000006E0
    fneg f0, f4
    b lbl_fn_802953C8_000006E4
lbl_fn_802953C8_000006E0:
    fmr f0, f4
lbl_fn_802953C8_000006E4:
    lfs f3, lbl_80883C34
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802953C8_000006FC
    stfs f30, 0x538(r30)
    b lbl_fn_802953C8_00000728
lbl_fn_802953C8_000006FC:
    lfs f0, lbl_80883BE8
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_802953C8_0000071C
    lfs f0, 0x538(r30)
    fsubs f0, f0, f3
    stfs f0, 0x538(r30)
    b lbl_fn_802953C8_00000728
lbl_fn_802953C8_0000071C:
    lfs f0, 0x538(r30)
    fadds f0, f0, f3
    stfs f0, 0x538(r30)
lbl_fn_802953C8_00000728:
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

asm void fn_802956D8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x16
    beq lbl_fn_802956D8_000009D8
    cmpwi r0, 0x2
    beq lbl_fn_802956D8_000009D8
    cmpwi r0, 0x17
    bne lbl_fn_802956D8_00000790
    b lbl_fn_802956D8_000009D8
lbl_fn_802956D8_00000790:
    lwz r6, 0x7e0(r3)
    lis r5, lbl_807C7030@ha
    addi r5, r5, lbl_807C7030@l
    lwz r0, 0x50(r4)
    rlwinm r6, r6, 0, 29, 29
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    subi r5, r6, 0x4
    cntlzw r5, r5
    ori r0, r0, 0x10
    psq_st f1, 0x10(r4), 0, 0
    srwi r30, r5, 5
    stfs f2, 0x18(r4)
    stw r0, 0x50(r4)
    bl fn_80151448
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_802956D8_000009D8
    lwz r0, 0x14c8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802956D8_000009D8
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_802956D8_0000090C
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802956D8_000009D8
    li r30, 0x0
    li r0, 0x14
    stw r0, 0x58c(r31)
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883BF0
    li r0, 0x1
    lfs f0, lbl_80883C18
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r5, 0x37
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f2, lbl_80883BE8
    addi r3, r1, 0x8
    lfs f0, lbl_80883C38
    addi r7, r31, 0x1530
    stfs f2, 0x8(r1)
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1538(r31)
    stfs f2, 0x10(r1)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    b lbl_fn_802956D8_000009D8
lbl_fn_802956D8_0000090C:
    cmpwi r30, 0x0
    bne lbl_fn_802956D8_000009D8
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_802956D8_000009D8
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    li r0, 0x13
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x37
    lfs f2, lbl_80883BF8
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r31, 0x7d4
    li r4, 0x4
    li r5, 0x258
    li r6, 0x0
    bl fn_80133130
    li r0, 0x6
    stw r0, 0x14c4(r31)
lbl_fn_802956D8_000009D8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8029597C(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    extrwi r3, r0, 1, 29
    blr
}

asm void fn_80295988(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80295988_00000A50
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x16
    beq lbl_fn_80295988_00000A3C
    cmpwi r0, 0x2
    beq lbl_fn_80295988_00000A3C
    bl fn_8029B59C
lbl_fn_80295988_00000A3C:
    addi r3, r31, 0x7d4
    li r4, 0x20
    bl fn_8013322C
    lfs f0, lbl_80883BF0
    stfs f0, 0x7d8(r31)
lbl_fn_80295988_00000A50:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802959EC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r4, lbl_80745818@ha
    stw r0, 0x74(r1)
    addi r4, r4, lbl_80745818@l
    addi r5, r1, 0x44
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r4, r4, 0x2a7
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x5b0(r3)
    fadds f0, f3, f0
    stfs f5, 0x48(r1)
    lfs f3, 0x530(r3)
    stfs f0, 0x44(r1)
    lfs f0, 0x5ac(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    fadds f2, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f0, 0x618(r3)
    stfs f4, 0x620(r3)
    fadds f0, f0, f4
    stfs f2, 0x4c(r1)
    stfs f2, 0x61c(r3)
    stfs f0, 0x618(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802959EC_00000AF4
    li r4, 0x0
    b lbl_fn_802959EC_00000B00
lbl_fn_802959EC_00000AF4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802959EC_00000B00:
    lfs f0, 0x2c(r4)
    lis r3, lbl_80745818@ha
    lfs f3, 0x1c(r4)
    addi r3, r3, lbl_80745818@l
    lfs f4, 0xc(r4)
    addi r4, r3, 0x2b1
    stfs f4, 0x14(r1)
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802959EC_00000B40
    li r4, 0x0
    b lbl_fn_802959EC_00000B4C
lbl_fn_802959EC_00000B40:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802959EC_00000B4C:
    lfs f5, 0x2c(r4)
    lis r3, lbl_80745818@ha
    lfs f6, 0x1c(r4)
    addi r7, r1, 0x38
    lfs f7, 0xc(r4)
    addi r3, r3, lbl_80745818@l
    lfs f4, 0x1c(r1)
    addi r4, r3, 0x2ba
    lfs f0, 0x18(r1)
    addi r6, r1, 0x5c
    lfs f3, 0x14(r1)
    fadds f4, f5, f4
    fadds f8, f6, f0
    lfs f0, lbl_80883C18
    fadds f3, f7, f3
    stfs f7, 0x20(r1)
    fmuls f2, f4, f0
    fmuls f7, f8, f0
    fmuls f0, f3, f0
    stfs f6, 0x24(r1)
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f0, 0x38(r1)
    stfs f7, 0x3c(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f5, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x64(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802959EC_00000BE0
    li r5, 0x0
    b lbl_fn_802959EC_00000BEC
lbl_fn_802959EC_00000BE0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802959EC_00000BEC:
    lfs f0, 0x2c(r5)
    addi r4, r1, 0x8
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x50
    lfs f4, 0xc(r5)
    fmr f2, f0
    stfs f4, 0x8(r1)
    addi r5, r1, 0x5c
    lfs f4, 0x620(r31)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    lfs f2, 0x64(r1)
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x5fc(r31)
    lfs f2, 0x58(r1)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f4, 0x60c(r31)
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    stfs f0, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80295BE4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r1, 0x5c
    bl fn_80148990
    lfs f0, lbl_80883C3C
    lis r31, lbl_80745818@ha
    addi r31, r31, lbl_80745818@l
    stfs f0, 0x6c(r1)
    addi r3, r30, 0xb0
    addi r4, r31, 0x2bf
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x50
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x50
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883C40
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x2ba
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x44
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x44
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883C3C
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x2c4
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x38
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x38
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883C3C
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x2d1
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x2c
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883C10
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x2dd
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883C40
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x2b1
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x14
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883C40
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x2a7
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x8
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lwz r0, 0x12a8(r30)
    oris r0, r0, 0x2000
    stw r0, 0x12a8(r30)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80295DB8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80295DB8_000011C0
    lwz r5, 0x62c(r3)
    lis r4, lbl_80745818@ha
    lfs f0, lbl_80883C44
    addi r4, r4, lbl_80745818@l
    stfs f0, 0x10(r5)
    addi r4, r4, 0x2bf
    li r5, 0x0
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80295DB8_00000E88
    li r4, 0x0
    b lbl_fn_80295DB8_00000E94
lbl_fn_80295DB8_00000E88:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_80295DB8_00000E94:
    lfs f0, 0x1c(r4)
    li r31, 0x1
    lfs f3, 0xc(r4)
    lis r3, lbl_80745818@ha
    stfs f0, 0x54(r1)
    addi r5, r1, 0x50
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745818@l
    stfs f3, 0x50(r1)
    addi r4, r3, 0x2ba
    lwz r6, 0x62c(r30)
    mulli r0, r31, 0x14
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r6), 0, 0
    li r5, 0x0
    lfs f0, lbl_80883C48
    stfs f2, 0xc(r6)
    lwz r6, 0x62c(r30)
    stfs f2, 0x58(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80295DB8_00000F00
    li r3, 0x0
    b lbl_fn_80295DB8_00000F0C
lbl_fn_80295DB8_00000F00:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_80295DB8_00000F0C:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745818@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x44
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745818@l
    stfs f0, 0x44(r1)
    li r31, 0x2
    add r5, r5, r0
    lfs f0, lbl_80883C4C
    stfs f3, 0x48(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x2c4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x4c(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80295DB8_00000F80
    li r3, 0x0
    b lbl_fn_80295DB8_00000F8C
lbl_fn_80295DB8_00000F80:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_80295DB8_00000F8C:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745818@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x38
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745818@l
    stfs f0, 0x38(r1)
    li r31, 0x3
    add r5, r5, r0
    lfs f0, lbl_80883C4C
    stfs f3, 0x3c(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x2d1
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x40(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80295DB8_00001000
    li r3, 0x0
    b lbl_fn_80295DB8_0000100C
lbl_fn_80295DB8_00001000:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_80295DB8_0000100C:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745818@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x2c
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745818@l
    stfs f0, 0x2c(r1)
    li r31, 0x4
    add r5, r5, r0
    lfs f0, lbl_80883C10
    stfs f3, 0x30(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x2dd
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x34(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80295DB8_00001080
    li r3, 0x0
    b lbl_fn_80295DB8_0000108C
lbl_fn_80295DB8_00001080:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_80295DB8_0000108C:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745818@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x20
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745818@l
    stfs f0, 0x20(r1)
    li r31, 0x5
    add r5, r5, r0
    lfs f0, lbl_80883C40
    stfs f3, 0x24(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x2b1
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x28(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80295DB8_00001100
    li r3, 0x0
    b lbl_fn_80295DB8_0000110C
lbl_fn_80295DB8_00001100:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_80295DB8_0000110C:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745818@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x14
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745818@l
    stfs f0, 0x14(r1)
    li r31, 0x6
    add r5, r5, r0
    lfs f0, lbl_80883C40
    stfs f3, 0x18(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x2a7
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x1c(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80295DB8_00001180
    li r4, 0x0
    b lbl_fn_80295DB8_0000118C
lbl_fn_80295DB8_00001180:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_80295DB8_0000118C:
    lfs f0, 0x1c(r4)
    mulli r0, r31, 0x14
    lfs f3, 0xc(r4)
    addi r3, r1, 0x8
    lfs f2, 0x2c(r4)
    lwz r4, 0x62c(r30)
    stfs f3, 0x8(r1)
    add r4, r4, r0
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0xc(r4)
lbl_fn_80295DB8_000011C0:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80296160(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_80296160_0000126C
    lis r4, lbl_80745818@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745818@l
    li r5, 0x0
    addi r4, r4, 0x2ba
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80296160_00001234
    li r4, 0x0
    b lbl_fn_80296160_00001240
lbl_fn_80296160_00001234:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_80296160_00001240:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x14
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    b lbl_fn_80296160_000012C8
lbl_fn_80296160_0000126C:
    lis r4, lbl_80745818@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745818@l
    li r5, 0x0
    addi r4, r4, 0x2bf
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80296160_00001294
    li r4, 0x0
    b lbl_fn_80296160_000012A0
lbl_fn_80296160_00001294:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_80296160_000012A0:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_80296160_000012C8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80296268(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x80
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x14b0(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80296268_00001BE4
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80296268_00001484
    lwz r0, 0x1568(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80296268_0000132C
    li r0, 0x0
    b lbl_fn_80296268_0000145C
lbl_fn_80296268_0000132C:
    lfs f31, lbl_80883BE8
    addi r29, r1, 0x44
    li r27, -0x1
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_80296268_000013B4
lbl_fn_80296268_00001344:
    lwz r3, 0x1564(r31)
    lwz r4, 0x14b0(r31)
    lwzx r3, r3, r30
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    lfs f0, 0xc(r3)
    psq_st f1, 0x0(r29), 0, 0
    fsubs f6, f0, f2
    lfs f3, 0x4(r3)
    lfs f0, 0x44(r1)
    lfs f4, 0x8(r3)
    fsubs f5, f3, f0
    lfs f3, 0x48(r1)
    fmuls f0, f6, f6
    stfs f2, 0x4c(r1)
    fsubs f3, f4, f3
    stfs f5, 0x50(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0x54(r1)
    stfs f6, 0x58(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    ble lbl_fn_80296268_000013AC
    fmr f31, f0
    mr r27, r28
lbl_fn_80296268_000013AC:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
lbl_fn_80296268_000013B4:
    lwz r0, 0x1568(r31)
    cmplw r28, r0
    blt lbl_fn_80296268_00001344
    cmpwi r27, 0x0
    blt lbl_fn_80296268_000013D0
    cmpw r27, r0
    blt lbl_fn_80296268_000013D8
lbl_fn_80296268_000013D0:
    li r0, 0x0
    b lbl_fn_80296268_0000145C
lbl_fn_80296268_000013D8:
    mr r3, r31
    li r4, 0x1
    bl fn_8029C564
    lwz r4, lbl_8087F430
    mr r3, r31
    lwz r30, 0x1564(r31)
    slwi r29, r27, 2
    lwz r26, 0x10d8(r4)
    bl fn_80179D44
    lwzx r4, r30, r29
    mr r5, r3
    lfs f1, lbl_80883C0C
    mr r3, r26
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r4, 0x153c(r31)
    mulli r0, r0, 0x30
    lwz r3, 0x9c(r26)
    cmpwi r4, 0x0
    add r0, r3, r0
    stw r0, 0x1540(r31)
    beq lbl_fn_80296268_00001450
    cmpwi r0, 0x0
    beq lbl_fn_80296268_00001450
    cmplw r4, r0
    bne lbl_fn_80296268_00001458
lbl_fn_80296268_00001450:
    li r0, 0x0
    b lbl_fn_80296268_0000145C
lbl_fn_80296268_00001458:
    li r0, 0x1
lbl_fn_80296268_0000145C:
    cmpwi r0, 0x0
    beq lbl_fn_80296268_00001470
    mr r3, r31
    li r4, 0x0
    bl fn_8029A674
lbl_fn_80296268_00001470:
    li r3, 0x2
    li r0, 0x0
    stw r3, 0x14c4(r31)
    stw r0, 0x14c0(r31)
    b lbl_fn_80296268_00001BE4
lbl_fn_80296268_00001484:
    cmpwi r0, 0x1
    bne lbl_fn_80296268_000015F8
    lwz r0, 0x1568(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80296268_000014A0
    li r0, 0x0
    b lbl_fn_80296268_000015D0
lbl_fn_80296268_000014A0:
    lfs f31, lbl_80883BE8
    addi r27, r1, 0x2c
    li r26, -0x1
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_80296268_00001528
lbl_fn_80296268_000014B8:
    lwz r3, 0x1564(r31)
    lwz r4, 0x14b0(r31)
    lwzx r3, r3, r30
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    lfs f0, 0xc(r3)
    psq_st f1, 0x0(r27), 0, 0
    fsubs f6, f0, f2
    lfs f3, 0x4(r3)
    lfs f0, 0x2c(r1)
    lfs f4, 0x8(r3)
    fsubs f5, f3, f0
    lfs f3, 0x30(r1)
    fmuls f0, f6, f6
    stfs f2, 0x34(r1)
    fsubs f3, f4, f3
    stfs f5, 0x38(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0x3c(r1)
    stfs f6, 0x40(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    ble lbl_fn_80296268_00001520
    fmr f31, f0
    mr r26, r28
lbl_fn_80296268_00001520:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
lbl_fn_80296268_00001528:
    lwz r0, 0x1568(r31)
    cmplw r28, r0
    blt lbl_fn_80296268_000014B8
    cmpwi r26, 0x0
    blt lbl_fn_80296268_00001544
    cmpw r26, r0
    blt lbl_fn_80296268_0000154C
lbl_fn_80296268_00001544:
    li r0, 0x0
    b lbl_fn_80296268_000015D0
lbl_fn_80296268_0000154C:
    mr r3, r31
    li r4, 0x1
    bl fn_8029C564
    lwz r4, lbl_8087F430
    slwi r30, r26, 2
    lwz r29, 0x1564(r31)
    mr r3, r31
    lwz r26, 0x10d8(r4)
    bl fn_80179D44
    lwzx r4, r29, r30
    mr r5, r3
    lfs f1, lbl_80883C0C
    mr r3, r26
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r4, 0x153c(r31)
    mulli r0, r0, 0x30
    lwz r3, 0x9c(r26)
    cmpwi r4, 0x0
    add r0, r3, r0
    stw r0, 0x1540(r31)
    beq lbl_fn_80296268_000015C4
    cmpwi r0, 0x0
    beq lbl_fn_80296268_000015C4
    cmplw r4, r0
    bne lbl_fn_80296268_000015CC
lbl_fn_80296268_000015C4:
    li r0, 0x0
    b lbl_fn_80296268_000015D0
lbl_fn_80296268_000015CC:
    li r0, 0x1
lbl_fn_80296268_000015D0:
    cmpwi r0, 0x0
    beq lbl_fn_80296268_000015E4
    mr r3, r31
    li r4, 0x1
    bl fn_8029A674
lbl_fn_80296268_000015E4:
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x14c4(r31)
    stw r0, 0x14c0(r31)
    b lbl_fn_80296268_00001BE4
lbl_fn_80296268_000015F8:
    cmpwi r0, 0x6
    bne lbl_fn_80296268_00001608
    bl fn_8029A788
    b lbl_fn_80296268_00001BE4
lbl_fn_80296268_00001608:
    cmpwi r0, 0x2
    bne lbl_fn_80296268_00001908
    lwz r0, 0x1508(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80296268_000018CC
    lwz r0, 0x151c(r3)
    lwz r4, 0x1504(r3)
    slwi r0, r0, 2
    lwzx r0, r4, r0
    cmpwi r0, 0x1
    beq lbl_fn_80296268_00001654
    cmpwi r0, 0x3
    beq lbl_fn_80296268_00001718
    cmpwi r0, 0x5
    beq lbl_fn_80296268_000017DC
    cmpwi r0, 0x4
    beq lbl_fn_80296268_000017E4
    b lbl_fn_80296268_0000189C
lbl_fn_80296268_00001654:
    lwz r0, 0x14c8(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    lwz r0, 0x14f4(r4)
    stw r0, 0x15b4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80296268_0000189C
    li r30, 0x0
    li r0, 0x8
    stw r0, 0x58c(r3)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lfs f3, lbl_80883BF0
    li r3, 0x1d
    lfs f0, lbl_80883C58
    li r0, 0x1
    stw r3, 0x560(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x66
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f3, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80296268_0000189C
lbl_fn_80296268_00001718:
    li r30, 0x0
    li r0, 0x9
    stw r0, 0x58c(r3)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lfs f3, lbl_80883BF0
    li r3, 0x1d
    lfs f0, lbl_80883C58
    li r0, 0x1
    stw r3, 0x560(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x66
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f3, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x14c8(r31)
    stw r30, 0x14b4(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r0, 0x14d4(r3)
    stw r0, 0x15b4(r31)
    stw r0, 0x638(r31)
    b lbl_fn_80296268_0000189C
lbl_fn_80296268_000017DC:
    bl fn_8029A788
    b lbl_fn_80296268_0000189C
lbl_fn_80296268_000017E4:
    li r30, 0x0
    li r0, 0xa
    stw r0, 0x58c(r3)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_80883BF0
    li r3, 0x1d
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_80883BE8
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883BF8
    li r5, 0x66
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x14c8(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r0, 0x14fc(r3)
    stw r0, 0x15b4(r31)
    stw r0, 0x638(r31)
lbl_fn_80296268_0000189C:
    lwz r3, 0x151c(r31)
    lwz r0, 0x1508(r31)
    addi r3, r3, 0x1
    stw r3, 0x151c(r31)
    cmpw r3, r0
    blt lbl_fn_80296268_000018BC
    li r0, 0x0
    stw r0, 0x151c(r31)
lbl_fn_80296268_000018BC:
    lwz r0, 0x151c(r31)
    lwz r3, 0x1504(r31)
    slwi r0, r0, 2
    lwzx r4, r3, r0
lbl_fn_80296268_000018CC:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80296268_000018EC
    cmpwi r4, 0x5
    beq lbl_fn_80296268_00001BE4
    li r0, 0x0
    stw r0, 0x14c4(r31)
    b lbl_fn_80296268_00001BE4
lbl_fn_80296268_000018EC:
    cmpwi r0, 0x1
    bne lbl_fn_80296268_00001BE4
    cmpwi r4, 0x5
    beq lbl_fn_80296268_00001BE4
    li r0, 0x1
    stw r0, 0x14c4(r31)
    b lbl_fn_80296268_00001BE4
lbl_fn_80296268_00001908:
    cmpwi r0, 0x4
    bne lbl_fn_80296268_000019C0
    li r30, 0x0
    li r0, 0xc
    stw r0, 0x58c(r3)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x153
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80296268_00001BE4
lbl_fn_80296268_000019C0:
    cmpwi r0, 0x5
    bne lbl_fn_80296268_00001BE4
    li r30, 0x0
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lfs f0, lbl_80883BF0
    li r3, 0xd
    li r0, 0x1
    stw r3, 0x58c(r31)
    lfs f1, lbl_80883BE8
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883BF8
    li r5, 0xa
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0x1568(r31)
    li r0, 0x4
    stw r0, 0x560(r31)
    cmpwi r3, 0x0
    bne lbl_fn_80296268_00001A78
    b lbl_fn_80296268_00001B94
lbl_fn_80296268_00001A78:
    lfs f31, lbl_80883BE8
    addi r28, r1, 0x20
    li r26, -0x1
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_80296268_00001B00
lbl_fn_80296268_00001A90:
    lwz r3, 0x1564(r31)
    lwz r4, 0x14b0(r31)
    lwzx r3, r3, r30
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    lfs f0, 0xc(r3)
    psq_st f1, 0x0(r28), 0, 0
    fsubs f5, f0, f2
    lfs f3, 0x4(r3)
    lfs f0, 0x20(r1)
    lfs f4, 0x8(r3)
    fsubs f6, f3, f0
    lfs f3, 0x24(r1)
    fmuls f0, f5, f5
    stfs f2, 0x28(r1)
    fsubs f3, f4, f3
    stfs f6, 0x14(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x18(r1)
    stfs f5, 0x1c(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    ble lbl_fn_80296268_00001AF8
    fmr f31, f0
    mr r26, r27
lbl_fn_80296268_00001AF8:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
lbl_fn_80296268_00001B00:
    lwz r0, 0x1568(r31)
    cmplw r27, r0
    blt lbl_fn_80296268_00001A90
    cmpwi r26, 0x0
    blt lbl_fn_80296268_00001B94
    cmpw r26, r0
    blt lbl_fn_80296268_00001B20
    b lbl_fn_80296268_00001B94
lbl_fn_80296268_00001B20:
    mr r3, r31
    li r4, 0x1
    bl fn_8029C564
    lwz r4, lbl_8087F430
    slwi r27, r26, 2
    lwz r28, 0x1564(r31)
    mr r3, r31
    lwz r26, 0x10d8(r4)
    bl fn_80179D44
    lwzx r4, r28, r27
    mr r5, r3
    lfs f1, lbl_80883C0C
    mr r3, r26
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r3, 0x153c(r31)
    mulli r0, r0, 0x30
    lwz r4, 0x9c(r26)
    cmpwi r3, 0x0
    add r0, r4, r0
    stw r0, 0x1540(r31)
    beq lbl_fn_80296268_00001B94
    cmpwi r0, 0x0
    beq lbl_fn_80296268_00001B94
    cmplw r3, r0
lbl_fn_80296268_00001B94:
    lwz r3, 0x1540(r31)
    addi r4, r1, 0x8
    lfs f0, 0x530(r31)
    addi r5, r31, 0x1530
    lfs f3, 0xc(r3)
    li r0, 0x0
    lfs f5, 0x8(r3)
    fsubs f2, f3, f0
    lfs f3, 0x4(r3)
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1538(r31)
    stw r0, 0x15fc(r31)
lbl_fn_80296268_00001BE4:
    addi r11, r1, 0x80
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
