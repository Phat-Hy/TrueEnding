#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800EFF04(void);
extern void fn_800F8548(void);
extern void fn_80106878(void);
extern void fn_8013CB68(void);
extern void fn_801446F0(void);
extern void fn_802097C4(void);
extern void fn_80219E6C(void);
extern void fn_803EA77C(void);
extern void fn_80441E8C(void);
extern void fn_80473F18(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80738F68[];
extern u8 lbl_80738F88[];
extern u8 lbl_80738FD0[];
extern u8 lbl_8077CF80[];
extern u8 lbl_8077D000[];
extern u8 lbl_8077D080[];
extern u8 lbl_8077D100[];
extern u8 lbl_8077D180[];
extern u8 lbl_8077D578[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_80881EAC;
extern u32 lbl_80881EB0;
extern u32 lbl_80881EBC;
extern u32 lbl_80881EC4;
extern u32 lbl_80881ECC;
extern u32 lbl_80881ED4;
extern u32 lbl_80881ED8;
extern u32 lbl_80881EDC;
extern u32 lbl_80881EE0;
extern u32 lbl_80881EE4;
extern u32 lbl_80881EE8;
extern u32 lbl_80881EEC;
extern u32 lbl_80881EF0;
extern u32 lbl_80881EF4;
extern u32 lbl_80881EFC;
extern u32 lbl_80881F10;
extern u32 lbl_80881F14;
extern u32 lbl_80881F18;
extern u32 lbl_80881F24;
extern u32 lbl_80881F28;
extern u32 lbl_80881F34;
extern u32 lbl_80881F38;
extern u32 lbl_80881F3C;
extern u32 lbl_80881F40;
extern u32 lbl_80881F44;
extern u32 lbl_80881F48;
extern u32 lbl_80881F4C;
extern u32 lbl_80881F50;
extern u32 lbl_80881F54;

/* Function declarations */
void fn_8018CADC(void);
void fn_8018CAEC(void);
void fn_8018CC74(void);
void fn_8018CEF8(void);
void fn_8018D160(void);
void fn_8018D49C(void);
void fn_8018D4AC(void);
void fn_8018D840(void);
void fn_8018DA70(void);
void fn_8018DAE4(void);
void fn_8018DD34(void);
void fn_8018E434(void);
void fn_8018E438(void);

asm void fn_8018CADC(void)
{
    nofralloc
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80881EC4
    stfs f0, 0x3a4(r3)
    blr
}

asm void fn_8018CAEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r10, lbl_8077D180@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x14(r1)
    li r11, 0x0
    lfs f2, 0x8(r5)
    addi r10, r10, lbl_8077D180@l
    stw r31, 0xc(r1)
    li r9, 0x9
    mr r31, r3
    li r0, 0x1
    stw r30, 0x8(r1)
    li r5, 0x164
    lfs f0, lbl_80881EC4
    li r6, 0x0
    psq_st f1, 0x10(r3), 0, 0
    li r7, 0x0
    lfs f1, lbl_80881ED4
    li r8, 0x1
    stfs f2, 0x18(r3)
    lfs f2, lbl_80881F10
    stw r4, 0x4(r3)
    stw r11, 0x8(r3)
    stw r11, 0xc(r3)
    stw r10, 0x0(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    stfs f1, 0x238(r30)
    lis r3, 0x51ec
    subi r3, r3, 0x7ae1
    lwz r4, 0x4(r31)
    lwz r0, 0x950(r4)
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r3, r0, r3
    srawi r0, r3, 31
    andc r0, r3, r0
    cmpwi r0, 0x5
    ble lbl_fn_8018CAEC_000000E8
    li r0, 0x5
    b lbl_fn_8018CAEC_000000F0
lbl_fn_8018CAEC_000000E8:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_8018CAEC_000000F0:
    lfs f3, 0x2e8(r4)
    lis r3, lbl_80738F88@ha
    lfs f4, lbl_80881EC4
    slwi r0, r0, 3
    addi r3, r3, lbl_80738F88@l
    fcmpo cr0, f4, f3
    lfsx f0, r3, r0
    bge lbl_fn_8018CAEC_00000114
    b lbl_fn_8018CAEC_00000118
lbl_fn_8018CAEC_00000114:
    fmr f4, f3
lbl_fn_8018CAEC_00000118:
    fmuls f0, f0, f4
    stfs f0, 0x234(r30)
    lwz r3, 0x4(r31)
    addi r3, r3, 0xb0
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_8018CAEC_0000017C
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8018CAEC_0000017C
    lwz r3, lbl_8087F498
    li r5, 0x2
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018CAEC_0000017C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018CC74(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lfs f0, lbl_80881EFC
    stw r0, 0x114(r1)
    li r0, 0x0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r4, 0x4(r3)
    lfs f3, 0x2e4(r4)
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8018CC74_000001F4
    lfs f0, lbl_80881F34
    fcmpo cr0, f3, f0
    bge lbl_fn_8018CC74_000001F4
    li r0, 0x1
lbl_fn_8018CC74_000001F4:
    cmpwi r0, 0x0
    beq lbl_fn_8018CC74_00000204
    lfs f31, lbl_80881EC4
    b lbl_fn_8018CC74_00000208
lbl_fn_8018CC74_00000204:
    lfs f31, lbl_80881ED4
lbl_fn_8018CC74_00000208:
    lfs f2, 0x18(r3)
    addi r31, r1, 0x50
    psq_l f1, 0x10(r3), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018CC74_00000254
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018CC74_00000248
    lfs f0, lbl_80881EDC
    b lbl_fn_8018CC74_0000024C
lbl_fn_8018CC74_00000248:
    lfs f0, lbl_80881EE0
lbl_fn_8018CC74_0000024C:
    stfs f0, 0x48(r1)
    b lbl_fn_8018CC74_00000268
lbl_fn_8018CC74_00000254:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8018CC74_00000268:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x38
    lfs f29, 0x68(r1)
    mr r5, r4
    lfs f30, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x90(r1)
    stfs f30, 0x94(r1)
    stfs f29, 0x98(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018CC74_00000384
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018CC74_00000374
    lfs f0, lbl_80881EDC
    b lbl_fn_8018CC74_00000378
lbl_fn_8018CC74_00000374:
    lfs f0, lbl_80881EE0
lbl_fn_8018CC74_00000378:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8018CC74_00000398
lbl_fn_8018CC74_00000384:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8018CC74_00000398:
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f31
    li r5, 0x0
    stfs f2, 0x58(r1)
    lfs f2, lbl_80881F38
    lwz r3, 0x4(r30)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r30)
    li r3, 0x0
    lfs f0, lbl_80881ED4
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8018CEF8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lfs f3, lbl_80881ED4
    stw r0, 0xb4(r1)
    lfs f0, lbl_80881EC4
    stw r31, 0xac(r1)
    mr r31, r3
    addi r3, r1, 0x70
    stw r30, 0xa8(r1)
    mr r30, r4
    stw r29, 0xa4(r1)
    mr r29, r5
    stfs f3, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f0, 0x38(r1)
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x30
    addi r3, r1, 0x70
    mr r5, r4
    bl fn_805F93C0
    lis r3, lbl_8077D578@ha
    li r10, 0x0
    addi r3, r3, lbl_8077D578@l
    stw r3, 0x0(r31)
    addi r11, r1, 0x30
    lis r9, lbl_8077D100@ha
    stw r30, 0x4(r31)
    addi r9, r9, lbl_8077D100@l
    li r3, 0xa
    li r0, 0x1
    stw r10, 0x8(r31)
    li r4, 0x0
    lfs f0, lbl_80881EC4
    li r5, 0x1d2
    stw r10, 0xc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    psq_l f1, 0x0(r11), 0, 0
    lfs f2, 0x38(r1)
    stfs f2, 0x18(r31)
    lfs f2, lbl_80881F10
    psq_st f1, 0x10(r31), 0, 0
    lfs f1, lbl_80881ED4
    stw r9, 0x0(r31)
    stw r10, 0x1c(r31)
    stw r3, 0x560(r30)
    lwz r3, 0x4(r31)
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    stfs f1, 0x238(r30)
    lwz r3, 0x4(r31)
    bl fn_801446F0
    mr r3, r29
    bl fn_805F9920
    lfs f0, lbl_80881F3C
    fcmpo cr0, f1, f0
    ble lbl_fn_8018CEF8_00000588
    lfs f0, 0x8(r29)
    addi r30, r1, 0x24
    lfs f3, 0x4(r29)
    addi r5, r1, 0x18
    fneg f4, f0
    lfs f0, 0x0(r29)
    fneg f3, f3
    mr r3, r30
    fneg f0, f0
    stfs f4, 0x20(r1)
    stfs f0, 0x18(r1)
    frsp f2, f4
    mr r4, r30
    stfs f3, 0x1c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x2c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
    b lbl_fn_8018CEF8_000005D4
lbl_fn_8018CEF8_00000588:
    lwz r5, 0x4(r31)
    addi r3, r1, 0x40
    lfs f3, lbl_80881ED4
    li r4, 0x79
    lfs f0, lbl_80881EC4
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xc
    addi r3, r1, 0x40
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xc
    lfs f2, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r31), 0, 0
    stfs f2, 0x18(r31)
lbl_fn_8018CEF8_000005D4:
    lwz r3, 0x4(r31)
    addi r3, r3, 0xb0
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_8018CEF8_00000630
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8018CEF8_00000630
    lwz r3, lbl_8087F498
    li r5, 0x2
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018CEF8_00000630:
    lis r3, lbl_80738F68@ha
    lwz r5, 0x4(r31)
    addi r3, r3, lbl_80738F68@l
    lfs f1, lbl_80881EC4
    lwz r4, 0xc(r3)
    addi r3, r1, 0x8
    addi r5, r5, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8018D160(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lfs f0, lbl_80881EF4
    stw r0, 0x114(r1)
    li r0, 0x0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    li r29, 0x0
    stw r28, 0xd0(r1)
    mr r28, r3
    lwz r30, 0x4(r3)
    lfs f3, 0x2e4(r30)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8018D160_000006F0
    lfs f0, lbl_80881F28
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018D160_000006F0
    li r0, 0x1
lbl_fn_8018D160_000006F0:
    cmpwi r0, 0x0
    beq lbl_fn_8018D160_00000700
    lfs f31, lbl_80881EF0
    b lbl_fn_8018D160_00000704
lbl_fn_8018D160_00000700:
    lfs f31, lbl_80881ED4
lbl_fn_8018D160_00000704:
    lfs f2, 0x18(r3)
    addi r31, r1, 0x50
    psq_l f1, 0x10(r3), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018D160_00000750
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018D160_00000744
    lfs f0, lbl_80881EDC
    b lbl_fn_8018D160_00000748
lbl_fn_8018D160_00000744:
    lfs f0, lbl_80881EE0
lbl_fn_8018D160_00000748:
    stfs f0, 0x48(r1)
    b lbl_fn_8018D160_00000764
lbl_fn_8018D160_00000750:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8018D160_00000764:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x38
    lfs f29, 0x68(r1)
    mr r5, r4
    lfs f30, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x90(r1)
    stfs f30, 0x94(r1)
    stfs f29, 0x98(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018D160_00000880
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018D160_00000870
    lfs f0, lbl_80881EDC
    b lbl_fn_8018D160_00000874
lbl_fn_8018D160_00000870:
    lfs f0, lbl_80881EE0
lbl_fn_8018D160_00000874:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8018D160_00000894
lbl_fn_8018D160_00000880:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8018D160_00000894:
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, lbl_80881EC4
    li r5, 0x0
    stfs f2, 0x58(r1)
    fmr f2, f31
    lwz r3, 0x4(r28)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r28)
    lfs f3, lbl_80881ED4
    stfs f3, 0x580(r3)
    lfs f0, lbl_80881EBC
    stfs f3, 0x584(r3)
    lfs f3, 0x2e4(r30)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8018D160_00000954
    lwz r0, 0x1c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8018D160_0000090C
    li r29, 0x1
    b lbl_fn_8018D160_00000954
lbl_fn_8018D160_0000090C:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8018D160_00000954
    lwz r3, 0x4(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018D160_00000954
    lfs f0, lbl_80881EAC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8018D160_00000948
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80881EC4
    stfs f0, 0x3a4(r3)
    b lbl_fn_8018D160_00000954
lbl_fn_8018D160_00000948:
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80881ECC
    stfs f0, 0x3a4(r3)
lbl_fn_8018D160_00000954:
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8018D160_00000984
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8018D160_00000984
    li r0, 0x1
    stw r0, 0xc(r28)
lbl_fn_8018D160_00000984:
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r29
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r28, 0xd0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8018D49C(void)
{
    nofralloc
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80881EC4
    stfs f0, 0x3a4(r3)
    blr
}

asm void fn_8018D4AC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r10, lbl_8077D080@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x114(r1)
    li r11, 0x0
    lfs f2, 0x8(r5)
    addi r10, r10, lbl_8077D080@l
    stfd f31, 0x100(r1)
    li r9, 0x80
    li r0, 0x1
    lfs f0, lbl_80881EC4
    psq_st f31, 0x108(r1), 0, 0
    li r7, 0x0
    li r8, 0x1
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r6
    li r6, 0x0
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r29, 0xe4(r1)
    stw r28, 0xe0(r1)
    mr r28, r5
    li r5, 0x1d2
    psq_st f1, 0x10(r3), 0, 0
    lfs f1, lbl_80881ED4
    stfs f2, 0x18(r3)
    lfs f2, lbl_80881F10
    stw r4, 0x4(r3)
    stw r11, 0x8(r3)
    stw r11, 0xc(r3)
    stw r10, 0x0(r3)
    stw r11, 0x1c(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    stfs f1, 0x238(r29)
    lfs f0, lbl_80881F14
    stfs f0, 0x234(r29)
    lwz r3, 0x4(r30)
    bl fn_801446F0
    lfs f2, 0x8(r28)
    addi r29, r1, 0x54
    psq_l f1, 0x0(r28), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x5c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018D4AC_00000AF0
    lfs f3, 0x54(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018D4AC_00000AE4
    lfs f0, lbl_80881EDC
    b lbl_fn_8018D4AC_00000AE8
lbl_fn_8018D4AC_00000AE4:
    lfs f0, lbl_80881EE0
lbl_fn_8018D4AC_00000AE8:
    stfs f0, 0x4c(r1)
    b lbl_fn_8018D4AC_00000B04
lbl_fn_8018D4AC_00000AF0:
    frsp f2, f2
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_8018D4AC_00000B04:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x70
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x3c
    lfs f30, 0x78(r1)
    mr r5, r4
    lfs f31, 0x74(r1)
    addi r3, r1, 0xa0
    lfs f13, 0x70(r1)
    lfs f12, 0x88(r1)
    lfs f11, 0x84(r1)
    lfs f10, 0x80(r1)
    lfs f9, 0x98(r1)
    lfs f8, 0x94(r1)
    lfs f7, 0x90(r1)
    lfs f6, 0x9c(r1)
    lfs f5, 0x8c(r1)
    lfs f4, 0x7c(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x5c(r1)
    stfs f3, 0xd0(r1)
    stfs f3, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f13, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f13, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f30, 0xa8(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f12, 0x20(r1)
    stfs f10, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f12, 0xb8(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f9, 0x2c(r1)
    stfs f7, 0xc0(r1)
    stfs f8, 0xc4(r1)
    stfs f9, 0xc8(r1)
    stfs f4, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f4, 0xac(r1)
    stfs f5, 0xbc(r1)
    stfs f6, 0xcc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    bl fn_805F9750
    lfs f2, 0x44(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018D4AC_00000C20
    lfs f3, 0x40(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018D4AC_00000C10
    lfs f0, lbl_80881EDC
    b lbl_fn_8018D4AC_00000C14
lbl_fn_8018D4AC_00000C10:
    lfs f0, lbl_80881EE0
lbl_fn_8018D4AC_00000C14:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_8018D4AC_00000C34
lbl_fn_8018D4AC_00000C20:
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_8018D4AC_00000C34:
    addi r3, r1, 0x48
    lfs f2, lbl_80881ED4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x60
    psq_st f1, 0x0(r29), 0, 0
    lwz r4, 0x4(r30)
    lfs f0, 0x58(r1)
    stfs f2, 0x60(r1)
    stfs f0, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    lwz r3, 0x4(r30)
    stfs f2, 0x50(r1)
    addi r3, r3, 0xb0
    stfs f2, 0x5c(r1)
    lwz r4, 0x22c(r3)
    stfs f2, 0x68(r1)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    lwz r0, 0x1c(r30)
    stw r3, 0x8(r30)
    cmplwi r0, 0x8
    bge lbl_fn_8018D4AC_00000CBC
    lwz r0, 0x1c(r30)
    slwi r0, r0, 2
    add r0, r30, r0
    addic. r3, r0, 0x20
    beq lbl_fn_8018D4AC_00000CB0
    stw r31, 0x0(r3)
lbl_fn_8018D4AC_00000CB0:
    lwz r3, 0x1c(r30)
    addi r0, r3, 0x1
    stw r0, 0x1c(r30)
lbl_fn_8018D4AC_00000CBC:
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_8018D4AC_00000CFC
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8018D4AC_00000CFC
    lwz r3, lbl_8087F498
    li r5, 0x2
    lwz r4, 0x4(r30)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018D4AC_00000CFC:
    lis r3, lbl_80738F68@ha
    lwz r5, 0x4(r30)
    addi r3, r3, lbl_80738F68@l
    lfs f1, lbl_80881EC4
    lwz r4, 0x10(r3)
    addi r3, r1, 0x8
    addi r5, r5, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r30
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8018D840(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    bl _savegpr_26
    lwz r12, 0x0(r3)
    mr r30, r3
    lwz r4, 0x4(r3)
    li r31, 0x0
    lwz r12, 0x24(r12)
    addi r29, r4, 0xb0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8018D840_00000F50
    lwz r5, 0x4(r30)
    addi r3, r1, 0x78
    lfs f1, lbl_80881ED4
    li r4, 0x79
    lfs f0, lbl_80881EC4
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f0, 0x38(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x30
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    lfs f31, lbl_80881ECC
    mr r27, r30
    li r26, 0x0
    b lbl_fn_8018D840_00000F28
lbl_fn_8018D840_00000DF0:
    lwz r5, 0x20(r27)
    addi r3, r1, 0x18
    mr r4, r3
    lwz r28, 0x88(r5)
    lfs f2, 0x10(r5)
    lfs f1, 0x5fc(r28)
    lfs f0, 0x608(r28)
    lfs f3, 0x5f8(r28)
    fadds f4, f1, f0
    lfs f0, 0x604(r28)
    lfs f1, 0x5f4(r28)
    fadds f3, f3, f0
    lfs f0, 0x600(r28)
    fmuls f6, f4, f31
    fadds f5, f1, f0
    lfs f1, 0xc(r5)
    fmuls f7, f3, f31
    fsubs f8, f6, f2
    lfs f0, 0x8(r5)
    fmuls f2, f5, f31
    fsubs f1, f7, f1
    stfs f5, 0xc(r1)
    fsubs f0, f2, f0
    stfs f3, 0x10(r1)
    stfs f4, 0x14(r1)
    stfs f2, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f6, 0x2c(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f8, 0x20(r1)
    bl fn_805F98D0
    lwz r3, 0x20(r27)
    mr r6, r28
    lwz r5, 0x4(r30)
    addi r4, r1, 0x18
    bl fn_80441E8C
    lwz r3, 0x20(r27)
    lwz r5, 0x68(r3)
    lfs f2, 0x5c(r3)
    lwz r0, 0x60(r3)
    cmpwi r5, 0x0
    lwz r4, 0x64(r3)
    lwz r6, 0x6c(r3)
    lfs f1, 0x70(r3)
    lfs f0, 0x74(r3)
    stfs f2, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r5, 0x64(r1)
    stw r6, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
    beq lbl_fn_8018D840_00000F20
    stfs f2, 0x3c(r1)
    lwz r3, 0xb0(r5)
    stw r0, 0x40(r1)
    stw r4, 0x44(r1)
    stw r5, 0x48(r1)
    stw r6, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_800EFF04
    cmpwi r3, 0x0
    beq lbl_fn_8018D840_00000F20
    lwz r5, 0x20(r27)
    mr r4, r3
    lfs f1, lbl_80881EC4
    addi r3, r1, 0x8
    addi r5, r5, 0x8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8018D840_00000F20:
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_8018D840_00000F28:
    lwz r0, 0x1c(r30)
    cmplw r26, r0
    blt lbl_fn_8018D840_00000DF0
    lwz r0, 0xc(r30)
    li r3, 0x0
    stw r3, 0x1c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8018D840_00000F50
    li r0, 0x1
    stw r0, 0xc(r30)
lbl_fn_8018D840_00000F50:
    lfs f31, 0x234(r29)
    mr r3, r29
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8018D840_00000F70
    li r31, 0x1
lbl_fn_8018D840_00000F70:
    psq_l f31, 0xc8(r1), 0, 0
    mr r3, r31
    lfd f31, 0xc0(r1)
    addi r11, r1, 0xc0
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8018DA70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    mr r31, r29
    b lbl_fn_8018DA70_00000FE0
lbl_fn_8018DA70_00000FBC:
    lwz r3, 0x20(r31)
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8018DA70_00000FE0:
    lwz r0, 0x1c(r29)
    cmplw r30, r0
    blt lbl_fn_8018DA70_00000FBC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8018DAE4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f3, lbl_80881ED4
    stw r0, 0x74(r1)
    lfs f0, lbl_80881EC4
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r3, r1, 0x30
    stw r30, 0x68(r1)
    mr r30, r5
    stw r29, 0x64(r1)
    mr r29, r4
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lis r4, lbl_8077D578@ha
    li r8, 0x0
    addi r4, r4, lbl_8077D578@l
    stw r4, 0x0(r31)
    addi r9, r1, 0x20
    lis r3, lbl_8077D000@ha
    stw r29, 0x4(r31)
    addi r3, r3, lbl_8077D000@l
    li r0, 0x8
    li r4, 0x0
    stw r8, 0x8(r31)
    li r5, 0x1d2
    li r6, 0x0
    li r7, 0x0
    stw r8, 0xc(r31)
    li r8, 0x1
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x18(r31)
    lfs f2, lbl_80881F10
    psq_st f1, 0x10(r31), 0, 0
    lfs f1, lbl_80881ED4
    stw r3, 0x0(r31)
    stw r30, 0x1c(r31)
    stw r0, 0x560(r29)
    lwz r3, 0x4(r31)
    addi r30, r3, 0xb0
    mr r3, r30
    bl fn_80097C08
    lwz r3, 0x4(r31)
    addi r3, r3, 0xb0
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r31)
    li r0, 0x1
    lfs f0, lbl_80881EC4
    mr r3, r30
    stw r0, 0x34c(r30)
    li r4, 0x0
    lfs f1, lbl_80881ED4
    li r5, 0x62
    stfs f0, 0x24c(r30)
    li r6, 0x0
    lfs f2, lbl_80881F10
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881EC4
    stfs f0, 0x238(r30)
    lwz r3, 0x4(r31)
    bl fn_801446F0
    lwz r6, 0x4(r31)
    addi r3, r31, 0x10
    lwz r7, 0x1c(r31)
    addi r5, r1, 0x14
    lfs f4, 0x52c(r6)
    mr r4, r3
    lfs f5, 0x52c(r7)
    lfs f3, 0x528(r7)
    fsubs f5, f5, f4
    lfs f0, 0x528(r6)
    lfs f4, 0x530(r7)
    fsubs f3, f3, f0
    lfs f0, 0x530(r6)
    stfs f5, 0x18(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80881ED4
    stfs f3, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0x18(r31)
    stfs f0, 0x14(r31)
    bl fn_805F98D0
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x8
    stfs f0, 0x38(r31)
    lwz r4, 0x4(r31)
    lfs f4, lbl_80881F40
    lfs f3, 0x14(r31)
    lfs f0, 0x10(r31)
    fmuls f5, f3, f4
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    fmuls f6, f0, f4
    lfs f3, 0x18(r31)
    psq_st f1, 0x20(r31), 0, 0
    fmuls f0, f3, f4
    stfs f2, 0x28(r31)
    psq_l f1, 0x534(r4), 0, 0
    lfs f2, 0x53c(r4)
    stfs f2, 0x34(r31)
    fmr f2, f0
    stfs f6, 0x8(r1)
    stfs f5, 0xc(r1)
    psq_st f1, 0x2c(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r4), 0, 0
    stfs f2, 0x57c(r4)
    lwz r0, lbl_8087F498
    stfs f0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8018DAE4_00001238
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8018DAE4_00001238
    lwz r3, lbl_8087F498
    li r5, 0x0
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018DAE4_00001238:
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8018DD34(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    lfs f0, lbl_80881F24
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    lfs f30, lbl_80881EC4
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stfd f28, 0x200(r1)
    psq_st f28, 0x208(r1), 0, 0
    stw r31, 0x1fc(r1)
    mr r31, r3
    stw r30, 0x1f8(r1)
    stw r29, 0x1f4(r1)
    lwz r4, lbl_8087EFA8
    lfs f3, 0x38(r3)
    lfs f4, 0x3a4(r4)
    lwz r5, 0x4(r3)
    fadds f3, f3, f4
    addi r29, r5, 0xb0
    stfs f3, 0x38(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018DD34_000012C8
    fmr f31, f30
    b lbl_fn_8018DD34_000012CC
lbl_fn_8018DD34_000012C8:
    lfs f31, lbl_80881ED4
lbl_fn_8018DD34_000012CC:
    lfs f2, 0x18(r3)
    addi r30, r1, 0x104
    psq_l f1, 0x10(r3), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x10c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018DD34_00001318
    lfs f3, 0x104(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018DD34_0000130C
    lfs f0, lbl_80881EDC
    b lbl_fn_8018DD34_00001310
lbl_fn_8018DD34_0000130C:
    lfs f0, lbl_80881EE0
lbl_fn_8018DD34_00001310:
    stfs f0, 0x90(r1)
    b lbl_fn_8018DD34_0000132C
lbl_fn_8018DD34_00001318:
    frsp f2, f2
    lfs f1, 0x104(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8018DD34_0000132C:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x180
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x80
    lfs f28, 0x188(r1)
    mr r5, r4
    lfs f29, 0x184(r1)
    addi r3, r1, 0x1b0
    lfs f13, 0x180(r1)
    lfs f12, 0x198(r1)
    lfs f11, 0x194(r1)
    lfs f10, 0x190(r1)
    lfs f9, 0x1a8(r1)
    lfs f8, 0x1a4(r1)
    lfs f7, 0x1a0(r1)
    lfs f6, 0x1ac(r1)
    lfs f5, 0x19c(r1)
    lfs f4, 0x18c(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10c(r1)
    stfs f3, 0x1e0(r1)
    stfs f3, 0x1e4(r1)
    stfs f3, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
    stfs f13, 0x50(r1)
    stfs f29, 0x54(r1)
    stfs f28, 0x58(r1)
    stfs f13, 0x1b0(r1)
    stfs f29, 0x1b4(r1)
    stfs f28, 0x1b8(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1c0(r1)
    stfs f11, 0x1c4(r1)
    stfs f12, 0x1c8(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1d0(r1)
    stfs f8, 0x1d4(r1)
    stfs f9, 0x1d8(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1bc(r1)
    stfs f5, 0x1cc(r1)
    stfs f6, 0x1dc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018DD34_00001448
    lfs f3, 0x84(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018DD34_00001438
    lfs f0, lbl_80881EDC
    b lbl_fn_8018DD34_0000143C
lbl_fn_8018DD34_00001438:
    lfs f0, lbl_80881EE0
lbl_fn_8018DD34_0000143C:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8018DD34_0000145C
lbl_fn_8018DD34_00001448:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8018DD34_0000145C:
    addi r3, r1, 0x8c
    lfs f2, lbl_80881ED4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, lbl_80881F18
    stfs f2, 0x10c(r1)
    lfs f3, 0x38(r31)
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8018DD34_000014C0
    lwz r0, 0x22c(r29)
    cmpwi r0, 0x1d2
    beq lbl_fn_8018DD34_000014C0
    fmr f1, f2
    lfs f2, lbl_80881F44
    mr r3, r29
    li r4, 0x0
    li r5, 0x1d2
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F48
    stfs f0, 0x234(r29)
lbl_fn_8018DD34_000014C0:
    lfs f28, 0x234(r29)
    mr r3, r29
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80881EC4
    fsubs f0, f1, f0
    fcmpo cr0, f28, f0
    cror eq, gt, eq
    beq lbl_fn_8018DD34_00001918
    lwz r7, 0x4(r31)
    addi r3, r1, 0xf8
    addi r4, r1, 0xec
    lfs f3, 0x38(r31)
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r1, 0xe0
    lfs f2, 0x530(r7)
    addi r6, r1, 0xd4
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x534(r7), 0, 0
    stfs f2, 0x100(r1)
    lfs f2, 0x53c(r7)
    lfs f0, lbl_80881F4C
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x574(r7), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0xf4(r1)
    lfs f2, 0x57c(r7)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xe8(r1)
    lfs f2, 0xf4(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xdc(r1)
    cror eq, lt, eq
    bne lbl_fn_8018DD34_00001568
    lfs f4, 0xfc(r1)
    lfs f3, lbl_80881F50
    lfs f0, lbl_80881ED4
    fadds f3, f4, f3
    stfs f0, 0xe4(r1)
    stfs f3, 0xfc(r1)
    b lbl_fn_8018DD34_0000157C
lbl_fn_8018DD34_00001568:
    addi r3, r1, 0x104
    lfs f2, 0x10c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf4(r1)
lbl_fn_8018DD34_0000157C:
    lwz r3, 0x1c(r31)
    lfs f4, lbl_80881ED4
    lfs f3, 0x530(r3)
    lfs f0, 0x28(r31)
    lfs f6, 0x528(r3)
    fsubs f7, f3, f0
    lfs f5, 0x20(r31)
    lfs f3, 0x38(r31)
    lfs f0, lbl_80881EF4
    fsubs f5, f6, f5
    stfs f7, 0xd0(r1)
    fcmpo cr0, f3, f0
    stfs f5, 0xc8(r1)
    stfs f4, 0xcc(r1)
    bge lbl_fn_8018DD34_00001610
    lfs f9, lbl_80881F54
    addi r3, r1, 0xbc
    lfs f3, 0xfc(r1)
    fmuls f6, f4, f9
    lfs f0, 0xf8(r1)
    fmuls f8, f5, f9
    lfs f4, 0x100(r1)
    fmuls f5, f7, f9
    lwz r4, 0x4(r31)
    fadds f3, f3, f6
    stfs f8, 0xb0(r1)
    fadds f0, f0, f8
    stfs f3, 0xc0(r1)
    fadds f2, f4, f5
    stfs f0, 0xbc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f6, 0xb4(r1)
    stfs f5, 0xb8(r1)
    stfs f2, 0xc4(r1)
    stfs f2, 0x530(r4)
    b lbl_fn_8018DD34_00001674
lbl_fn_8018DD34_00001610:
    addi r3, r1, 0xf8
    lwz r5, 0x4(r31)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xec
    psq_st f1, 0x528(r5), 0, 0
    addi r6, r1, 0xe0
    lfs f2, 0x100(r1)
    addi r4, r1, 0x104
    stfs f2, 0x530(r5)
    li r5, 0x1
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r31)
    lfs f2, 0xf4(r1)
    psq_st f1, 0x534(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x53c(r3)
    lfs f2, 0xe8(r1)
    lwz r3, 0x4(r31)
    psq_st f1, 0x574(r3), 0, 0
    fmr f1, f30
    stfs f2, 0x57c(r3)
    lwz r3, 0x4(r31)
    lfs f0, 0x568(r3)
    fmuls f2, f31, f0
    bl fn_8013CB68
lbl_fn_8018DD34_00001674:
    lfs f3, 0x38(r31)
    lfs f0, lbl_80881EF4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018DD34_000018FC
    lfs f0, 0x18(r31)
    addi r3, r1, 0xec
    lfs f2, 0x34(r31)
    addi r4, r1, 0x98
    fneg f4, f0
    stfs f2, 0xf4(r1)
    lfs f0, 0x10(r31)
    addi r30, r1, 0xa4
    lfs f3, 0x14(r31)
    frsp f2, f4
    fneg f5, f0
    psq_l f1, 0x2c(r31), 0, 0
    fneg f3, f3
    lfs f0, lbl_80881ED8
    fabs f6, f2
    stfs f5, 0x98(r1)
    frsp f5, f6
    stfs f3, 0x9c(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    fcmpo cr0, f5, f0
    stfs f4, 0xa0(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xac(r1)
    bge lbl_fn_8018DD34_0000170C
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018DD34_00001700
    lfs f0, lbl_80881EDC
    b lbl_fn_8018DD34_00001704
lbl_fn_8018DD34_00001700:
    lfs f0, lbl_80881EE0
lbl_fn_8018DD34_00001704:
    stfs f0, 0x48(r1)
    b lbl_fn_8018DD34_00001720
lbl_fn_8018DD34_0000170C:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8018DD34_00001720:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x110
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x38
    lfs f29, 0x118(r1)
    mr r5, r4
    lfs f28, 0x114(r1)
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
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x170(r1)
    stfs f3, 0x174(r1)
    stfs f3, 0x178(r1)
    stfs f0, 0x17c(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x140(r1)
    stfs f28, 0x144(r1)
    stfs f29, 0x148(r1)
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
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018DD34_0000183C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018DD34_0000182C
    lfs f0, lbl_80881EDC
    b lbl_fn_8018DD34_00001830
lbl_fn_8018DD34_0000182C:
    lfs f0, lbl_80881EE0
lbl_fn_8018DD34_00001830:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8018DD34_00001850
lbl_fn_8018DD34_0000183C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8018DD34_00001850:
    addi r3, r1, 0x44
    lfs f4, lbl_80881ED4
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80738FD0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x30(r31)
    lfs f3, 0xa8(r1)
    stfs f2, 0xac(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80738FD0@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_80881EE4
    fcmpo cr0, f5, f0
    ble lbl_fn_8018DD34_0000189C
    lfs f0, lbl_80881EE8
    fsubs f5, f5, f0
lbl_fn_8018DD34_0000189C:
    lfs f0, lbl_80881EEC
    fcmpo cr0, f5, f0
    bge lbl_fn_8018DD34_000018B0
    lfs f0, lbl_80881EE8
    fadds f5, f5, f0
lbl_fn_8018DD34_000018B0:
    lfs f0, 0x38(r31)
    lfs f3, lbl_80881EF4
    lfs f4, lbl_80881EC4
    fsubs f0, f0, f3
    fdivs f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_8018DD34_000018D0
    b lbl_fn_8018DD34_000018D4
lbl_fn_8018DD34_000018D0:
    fmr f4, f0
lbl_fn_8018DD34_000018D4:
    lfs f0, 0xf0(r1)
    addi r3, r1, 0xec
    lwz r4, 0x4(r31)
    fmadds f0, f5, f4, f0
    lfs f2, 0xf4(r1)
    stfs f0, 0xf0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    b lbl_fn_8018DD34_00001910
lbl_fn_8018DD34_000018FC:
    lwz r3, 0x4(r31)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x34(r31)
    psq_st f1, 0x2c(r31), 0, 0
lbl_fn_8018DD34_00001910:
    li r3, 0x0
    b lbl_fn_8018DD34_0000191C
lbl_fn_8018DD34_00001918:
    li r3, 0x1
lbl_fn_8018DD34_0000191C:
    lwz r0, 0x244(r1)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    psq_l f28, 0x208(r1), 0, 0
    lfd f28, 0x200(r1)
    lwz r31, 0x1fc(r1)
    lwz r30, 0x1f8(r1)
    lwz r29, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_8018E434(void)
{
    nofralloc
    blr
}

asm void fn_8018E438(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r9, lbl_8077CF80@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x14(r1)
    li r10, 0x0
    lfs f2, 0x8(r5)
    addi r9, r9, lbl_8077CF80@l
    stw r31, 0xc(r1)
    li r5, 0x8d
    li r0, 0x1
    lfs f0, lbl_80881EC4
    stw r4, 0x4(r3)
    mr r31, r3
    stw r10, 0x8(r3)
    stw r10, 0xc(r3)
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    stw r9, 0x0(r3)
    stb r10, 0x24(r3)
    stb r10, 0x25(r3)
    stw r10, 0x28(r3)
    stw r7, 0x2c(r3)
    stw r8, 0x30(r3)
    stw r6, 0x34(r3)
    stw r5, 0x560(r4)
    lwz r4, 0x4(r3)
    addi r4, r4, 0xb0
    stw r0, 0x34c(r4)
    stfs f0, 0x24c(r4)
    stfs f0, 0x238(r4)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x9
    beq lbl_fn_8018E438_00001A00
    cmpwi r0, 0xa
    beq lbl_fn_8018E438_00001A28
    cmpwi r0, 0xc
    beq lbl_fn_8018E438_00001A28
    cmpwi r0, 0xb
    beq lbl_fn_8018E438_00001A50
    b lbl_fn_8018E438_00001A74
lbl_fn_8018E438_00001A00:
    lfs f1, lbl_80881ED4
    mr r3, r4
    lfs f2, lbl_80881F10
    li r4, 0x0
    li r5, 0x16e
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8018E438_00001A74
lbl_fn_8018E438_00001A28:
    lfs f1, lbl_80881ED4
    mr r3, r4
    lfs f2, lbl_80881F10
    li r4, 0x0
    li r5, 0x16f
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8018E438_00001A74
lbl_fn_8018E438_00001A50:
    lfs f1, lbl_80881ED4
    mr r3, r4
    lfs f2, lbl_80881F10
    li r4, 0x0
    li r5, 0x170
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8018E438_00001A74:
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r31)
    bl fn_80106878
    lwz r3, 0x4(r31)
    addi r3, r3, 0xb0
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x1c(r31)
    li r0, 0x0
    li r3, 0xe3
    stw r0, 0x20(r31)
    bl fn_80219E6C
    lwz r4, 0x4(r31)
    lwz r0, 0x638(r4)
    stw r0, 0x63c(r4)
    stw r3, 0x638(r4)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
