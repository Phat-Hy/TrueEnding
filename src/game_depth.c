#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void GXInitTexCacheRegion(void);
extern void __register_global_object(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80083AD4(void);
extern void fn_800C2418(void);
extern void fn_800C2448(void);
extern void fn_800C2520(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473EFC(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80473FCC(void);
extern void fn_80478158(void);
extern void fn_805F89F0(void);
extern void fn_805F98D0(void);
extern void fn_805F99B0(void);
extern void fn_80615E00(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806163B0(void);
extern void fn_80616400(void);
extern void fn_80616430(void);
extern void fn_8068AE24(void);

/* External data declarations */
extern u8 lbl_80734628[];
extern u8 lbl_80734638[];
extern u8 lbl_80779700[];
extern u8 lbl_80779728[];
extern u8 lbl_8078FFB0[];
extern u8 lbl_807C75D0[];
extern u8 lbl_807C75E8[];
extern u8 lbl_807C75F4[];

/* Small data declarations */
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFF8;
extern u32 lbl_808811D8;
extern u32 lbl_808811E0;
extern u32 lbl_808811E4;
extern u32 lbl_808811E8;
extern u32 lbl_808811EC;
extern u32 lbl_808811F0;
extern u32 lbl_808811F4;
extern u32 lbl_808811F8;
extern u32 lbl_808811FC;
extern u32 lbl_80881200;
extern u32 lbl_80881204;

/* Function declarations */
void fn_800D56C4(void);
void fn_800D5714(void);
void fn_800D5738(void);
void fn_800D57B0(void);
void fn_800D5808(void);
void fn_800D58A4(void);
void fn_800D5908(void);
void fn_800D594C(void);
void fn_800D59B8(void);
void fn_800D5A3C(void);
void fn_800D5B58(void);
void fn_800D5C84(void);
void fn_800D5D00(void);
void fn_800D5E18(void);
void fn_800D5F68(void);
void fn_800D6898(void);
void fn_800D69A8(void);
void fn_800D6A80(void);
void fn_800D6A84(void);
void fn_800D6B5C(void);
void fn_800D6B60(void);
void fn_800D6BA0(void);
void fn_800D6BE0(void);

asm void fn_800D56C4(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_800D56C4_00000048
    lis r5, lbl_807C75D0@ha
    lwz r6, 0x8(r3)
    addi r4, r5, lbl_807C75D0@l
    lwz r0, lbl_807C75D0@l(r5)
    lwz r5, 0xc(r3)
    lwz r4, 0x4(r4)
    xor r0, r6, r0
    xor r4, r5, r4
    or. r0, r4, r0
    bne lbl_fn_800D56C4_00000048
    lwz r0, 0x10(r3)
    lwz r3, 0x14(r3)
    or. r0, r3, r0
    beq lbl_fn_800D56C4_00000048
    li r3, 0x1
    blr
lbl_fn_800D56C4_00000048:
    li r3, 0x0
    blr
}

asm void fn_800D5714(void)
{
    nofralloc
    lis r3, lbl_80734628@ha
    lis r4, lbl_807C75D0@ha
    addi r5, r3, lbl_80734628@l
    lwz r0, lbl_80734628@l(r3)
    addi r3, r4, lbl_807C75D0@l
    lwz r5, 0x4(r5)
    stw r5, 0x4(r3)
    stw r0, lbl_807C75D0@l(r4)
    blr
}

asm void fn_800D5738(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x20
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80473E74
    lis r3, lbl_8078FFB0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FFB0@l
    lis r4, 0xbad1
    stw r3, 0x0(r31)
    mr r3, r30
    subi r4, r4, 0xff3
    li r5, 0x20
    stw r0, 0x28(r30)
    stb r0, 0x2c(r30)
    stb r0, 0x2d(r30)
    stb r0, 0x2e(r30)
    stb r0, 0x2f(r30)
    bl memset
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D57B0(void)
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
    beq lbl_fn_800D57B0_00000128
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_800D57B0_00000128
    mr r3, r30
    bl dtor_80084684
lbl_fn_800D57B0_00000128:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D5808(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_800D5808_000001BC
    addi r3, r3, 0x20
    bl fn_80473F88
    lwz r30, 0x28(r28)
    li r31, 0x0
    stb r31, 0x2c(r28)
    cmpwi r30, 0x0
    beq lbl_fn_800D5808_0000019C
    bl fn_800827E0
    mr r4, r30
    bl fn_80083AD4
    stw r31, 0x28(r28)
lbl_fn_800D5808_0000019C:
    addic. r3, r28, 0x20
    beq lbl_fn_800D5808_000001AC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800D5808_000001AC:
    cmpwi r29, 0x0
    ble lbl_fn_800D5808_000001BC
    mr r3, r28
    bl dtor_80084684
lbl_fn_800D5808_000001BC:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D58A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x20
    bl fn_80473F88
    lwz r30, 0x28(r29)
    li r31, 0x0
    stb r31, 0x2c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D58A4_00000228
    bl fn_800827E0
    mr r4, r30
    bl fn_80083AD4
    stw r31, 0x28(r29)
lbl_fn_800D58A4_00000228:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D5908(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x20(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    addi r3, r3, 0x20
    bctrl
    li r0, 0x0
    stb r0, 0x2c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D594C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x20
    bl fn_80473FCC
    li r0, 0x0
    stb r0, 0x2c(r31)
    addi r3, r31, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_800D594C_000002E0
    lbz r5, 0x2d(r31)
    li r0, 0x1
    lbz r6, 0x2e(r31)
    mr r4, r31
    stb r0, 0x2c(r31)
    addi r3, r31, 0x20
    extsb r5, r5
    extsb r6, r6
    bl fn_80478158
lbl_fn_800D594C_000002E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D59B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x20
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_800D59B8_00000320
    li r3, 0x1
    b lbl_fn_800D59B8_00000364
lbl_fn_800D59B8_00000320:
    lbz r0, 0x2c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800D59B8_00000360
    addi r3, r31, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_800D59B8_00000360
    lbz r5, 0x2d(r31)
    li r0, 0x1
    lbz r6, 0x2e(r31)
    mr r4, r31
    stb r0, 0x2c(r31)
    addi r3, r31, 0x20
    extsb r5, r5
    extsb r6, r6
    bl fn_80478158
lbl_fn_800D59B8_00000360:
    li r3, 0x0
lbl_fn_800D59B8_00000364:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D5A3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x28(r3)
    mr r27, r3
    lwz r4, lbl_8087EEE0
    cmpwi r0, 0x0
    lwz r30, 0x3c(r4)
    lwz r29, 0x40(r4)
    beq lbl_fn_800D5A3C_000003D4
    addi r3, r3, 0x20
    bl fn_80473F88
    lwz r28, 0x28(r27)
    li r31, 0x0
    stb r31, 0x2c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D5A3C_000003D4
    bl fn_800827E0
    mr r4, r28
    bl fn_80083AD4
    stw r31, 0x28(r27)
lbl_fn_800D5A3C_000003D4:
    li r0, 0x0
    stb r0, 0x2f(r27)
    clrlwi r3, r30, 16
    clrlwi r4, r29, 16
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    mr r31, r3
    bl fn_800827E0
    lis r7, lbl_80734638@ha
    mr r4, r31
    addi r7, r7, lbl_80734638@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x28(r27)
    mr r4, r3
    mr r3, r27
    clrlwi r5, r30, 16
    clrlwi r6, r29, 16
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_808811D8
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    li r0, 0x1
    stb r0, 0x2c(r27)
    addi r11, r1, 0x20
    li r3, 0x1
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D5B58(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x28(r3)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    cmpwi r0, 0x0
    mr r28, r6
    mr r29, r7
    beq lbl_fn_800D5B58_000004F4
    addi r3, r3, 0x20
    bl fn_80473F88
    lwz r30, 0x28(r25)
    li r31, 0x0
    stb r31, 0x2c(r25)
    cmpwi r30, 0x0
    beq lbl_fn_800D5B58_000004F4
    bl fn_800827E0
    mr r4, r30
    bl fn_80083AD4
    stw r31, 0x28(r25)
lbl_fn_800D5B58_000004F4:
    xori r0, r29, 0x1
    stb r29, 0x2f(r25)
    srawi r4, r0, 1
    mr r5, r28
    and r0, r0, r29
    clrlwi r3, r26, 16
    subf r0, r0, r4
    clrlwi r4, r27, 16
    srwi r6, r0, 31
    clrlwi r7, r29, 24
    bl fn_80615E00
    mr r30, r3
    bl fn_800827E0
    lis r7, lbl_80734638@ha
    mr r4, r30
    addi r7, r7, lbl_80734638@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x28(r25)
    mr r4, r3
    mr r3, r25
    mr r7, r28
    clrlwi r5, r26, 16
    clrlwi r6, r27, 16
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_808811D8
    mr r3, r25
    li r4, 0x0
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    li r0, 0x1
    stb r0, 0x2c(r25)
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800D5C84(void)
{
    nofralloc
    lfs f11, lbl_808811E4
    fmuls f9, f1, f4
    lfs f12, lbl_808811E0
    fneg f8, f2
    fmuls f10, f11, f4
    lfs f7, lbl_808811EC
    lfs f0, lbl_808811E8
    stfs f9, 0x0(r3)
    fmuls f13, f1, f3
    fmsubs f9, f0, f3, f10
    fmsubs f0, f11, f3, f10
    stfs f13, 0x4(r3)
    fmuls f8, f8, f3
    fadds f9, f11, f9
    stfs f12, 0x8(r3)
    fsubs f0, f0, f11
    fmuls f3, f2, f4
    stfs f8, 0x10(r3)
    fsubs f4, f9, f5
    fadds f0, f6, f0
    stfs f3, 0x14(r3)
    fmuls f1, f1, f4
    stfs f12, 0x18(r3)
    fmadds f0, f2, f0, f7
    stfs f1, 0xc(r3)
    stfs f0, 0x1c(r3)
    stfs f12, 0x20(r3)
    stfs f12, 0x24(r3)
    stfs f7, 0x28(r3)
    stfs f12, 0x2c(r3)
    blr
}

asm void fn_800D5D00(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f7, lbl_808811E4
    stw r0, 0x74(r1)
    fmuls f1, f7, f1
    lfs f0, lbl_808811F0
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    fmuls f1, f0, f1
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    fmr f30, f6
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    fmr f29, f5
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    fmr f28, f4
    stfd f27, 0x20(r1)
    psq_st f27, 0x28(r1), 0, 0
    fmr f27, f3
    stfd f26, 0x10(r1)
    psq_st f26, 0x18(r1), 0, 0
    fmr f26, f2
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8068AE24
    frsp f1, f1
    lfs f0, lbl_808811EC
    mr r3, r31
    li r4, 0x0
    li r5, 0x30
    fdivs f31, f0, f1
    bl memset
    fdivs f1, f31, f26
    lfs f4, lbl_808811E0
    lfs f0, lbl_808811F4
    stfs f4, 0x4(r31)
    stfs f4, 0xc(r31)
    stfs f4, 0x10(r31)
    fmuls f1, f27, f1
    stfs f4, 0x1c(r31)
    fneg f3, f29
    fmuls f2, f31, f28
    stfs f1, 0x0(r31)
    fneg f1, f30
    stfs f3, 0x8(r31)
    stfs f2, 0x14(r31)
    stfs f1, 0x18(r31)
    stfs f4, 0x20(r31)
    stfs f4, 0x24(r31)
    stfs f0, 0x28(r31)
    stfs f4, 0x2c(r31)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    psq_l f27, 0x28(r1), 0, 0
    lfd f27, 0x20(r1)
    psq_l f26, 0x18(r1), 0, 0
    lfd f26, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800D5E18(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x30
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    fmr f31, f8
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    fmr f30, f7
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    fmr f29, f6
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    fmr f28, f5
    stfd f27, 0x40(r1)
    psq_st f27, 0x48(r1), 0, 0
    fmr f27, f4
    stfd f26, 0x30(r1)
    psq_st f26, 0x38(r1), 0, 0
    fmr f26, f3
    stfd f25, 0x20(r1)
    psq_st f25, 0x28(r1), 0, 0
    fmr f25, f2
    stfd f24, 0x10(r1)
    psq_st f24, 0x18(r1), 0, 0
    fmr f24, f1
    stw r31, 0xc(r1)
    mr r31, r3
    bl memset
    fsubs f5, f27, f26
    lfs f2, lbl_808811E0
    lfs f3, lbl_808811EC
    fsubs f0, f24, f25
    fadds f1, f27, f26
    lfs f4, lbl_808811F8
    fdivs f6, f3, f5
    stfs f2, 0x4(r31)
    stfs f2, 0x8(r31)
    stfs f2, 0x10(r31)
    stfs f2, 0x18(r31)
    stfs f2, 0x20(r31)
    fdivs f5, f3, f0
    stfs f3, 0x2c(r31)
    stfs f2, 0x24(r31)
    stfs f2, 0x28(r31)
    fadds f0, f24, f25
    fneg f1, f1
    fmuls f3, f4, f6
    fneg f0, f0
    fmuls f2, f6, f1
    fmuls f1, f4, f5
    fmuls f0, f5, f0
    fmuls f3, f3, f28
    fmadds f2, f28, f2, f30
    fmuls f1, f1, f29
    stfs f3, 0x0(r31)
    fmadds f0, f29, f0, f31
    stfs f2, 0xc(r31)
    stfs f1, 0x14(r31)
    stfs f0, 0x1c(r31)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    psq_l f27, 0x48(r1), 0, 0
    lfd f27, 0x40(r1)
    psq_l f26, 0x38(r1), 0, 0
    lfd f26, 0x30(r1)
    psq_l f25, 0x28(r1), 0, 0
    lfd f25, 0x20(r1)
    psq_l f24, 0x18(r1), 0, 0
    lfd f24, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800D5F68(void)
{
    nofralloc
    stwu r1, -0x490(r1)
    mflr r0
    stw r0, 0x494(r1)
    addi r11, r1, 0x450
    stfd f31, 0x480(r1)
    psq_st f31, 0x488(r1), 0, 0
    stfd f30, 0x470(r1)
    psq_st f30, 0x478(r1), 0, 0
    stfd f29, 0x460(r1)
    psq_st f29, 0x468(r1), 0, 0
    stfd f28, 0x450(r1)
    psq_st f28, 0x458(r1), 0, 0
    bl _savegpr_26
    lwz r6, lbl_8087EFB4
    cmpwi r4, 0x1
    lfs f9, lbl_808811E0
    mr r31, r3
    lfs f8, lbl_808811EC
    mr r26, r5
    stfs f9, 0x2c(r3)
    mr r27, r7
    addi r29, r6, 0x104
    stfs f9, 0x24(r3)
    stfs f9, 0x20(r3)
    stfs f9, 0x1c(r3)
    stfs f9, 0x18(r3)
    stfs f9, 0x10(r3)
    stfs f9, 0xc(r3)
    stfs f9, 0x8(r3)
    stfs f9, 0x4(r3)
    stfs f8, 0x28(r3)
    stfs f8, 0x14(r3)
    stfs f8, 0x0(r3)
    beq lbl_fn_800D5F68_00000948
    cmpwi r4, 0x2
    beq lbl_fn_800D5F68_000009B8
    cmpwi r4, 0x3
    beq lbl_fn_800D5F68_00000C28
    cmpwi r4, 0x4
    beq lbl_fn_800D5F68_00000F54
    b lbl_fn_800D5F68_0000119C
lbl_fn_800D5F68_00000948:
    lfs f7, lbl_808811E4
    addi r4, r1, 0x408
    lfs f0, lbl_808811E8
    stfs f9, 0x42c(r1)
    stfs f9, 0x428(r1)
    psq_l f5, 0x20(r4), 0, 0
    stfs f9, 0x420(r1)
    stfs f7, 0x424(r1)
    psq_l f4, 0x18(r4), 0, 0
    stfs f9, 0x418(r1)
    stfs f0, 0x41c(r1)
    psq_l f3, 0x10(r4), 0, 0
    stfs f9, 0x410(r1)
    stfs f7, 0x414(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f9, 0x40c(r1)
    stfs f7, 0x408(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x430(r1)
    stfs f8, 0x434(r1)
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_800D5F68_0000119C
lbl_fn_800D5F68_000009B8:
    lfs f7, lbl_808811E4
    addi r5, r1, 0x3a8
    lfs f0, lbl_808811E8
    addi r6, r1, 0x378
    stfs f9, 0x3fc(r1)
    li r4, 0x0
    lwz r3, lbl_8087EFB4
    stfs f9, 0x3f8(r1)
    stfs f9, 0x3f0(r1)
    stfs f9, 0x3e8(r1)
    stfs f9, 0x3e0(r1)
    stfs f9, 0x3dc(r1)
    stfs f7, 0x3d8(r1)
    stfs f7, 0x3e4(r1)
    stfs f0, 0x3ec(r1)
    stfs f7, 0x3f4(r1)
    stfs f9, 0x400(r1)
    stfs f8, 0x404(r1)
    psq_l f1, 0x15c(r3), 0, 0
    psq_l f2, 0x164(r3), 0, 0
    psq_l f3, 0x16c(r3), 0, 0
    psq_l f4, 0x174(r3), 0, 0
    psq_l f5, 0x17c(r3), 0, 0
    psq_l f6, 0x184(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x1d4(r3), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x1dc(r3), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_l f3, 0x1e4(r3), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_l f4, 0x1ec(r3), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_l f5, 0x1f4(r3), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_l f6, 0x1fc(r3), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    lwz r3, 0x2fc(r3)
    bl fn_800C2448
    lfs f2, 0x1c(r3)
    addi r4, r1, 0xc8
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, lbl_808811FC
    lfs f7, 0xc8(r1)
    stfs f2, 0xd0(r1)
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_800D5F68_00000ADC
    frsp f7, f2
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_800D5F68_00000ADC
    lfs f7, lbl_808811E0
    lfs f0, 0xcc(r1)
    stfs f7, 0xc0(r1)
    fcmpo cr0, f0, f7
    stfs f7, 0xbc(r1)
    cror eq, lt, eq
    bne lbl_fn_800D5F68_00000AD0
    lfs f0, lbl_808811F4
    stfs f0, 0xc4(r1)
    b lbl_fn_800D5F68_00000AF0
lbl_fn_800D5F68_00000AD0:
    lfs f0, lbl_808811EC
    stfs f0, 0xc4(r1)
    b lbl_fn_800D5F68_00000AF0
lbl_fn_800D5F68_00000ADC:
    lfs f7, lbl_808811E0
    lfs f0, lbl_808811EC
    stfs f7, 0xc4(r1)
    stfs f7, 0xbc(r1)
    stfs f0, 0xc0(r1)
lbl_fn_800D5F68_00000AF0:
    addi r3, r1, 0xc8
    addi r4, r1, 0xbc
    addi r5, r1, 0x44
    bl fn_805F99B0
    addi r3, r1, 0x44
    addi r30, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x4c(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F98D0
    mr r3, r30
    addi r4, r1, 0xc8
    addi r5, r1, 0x38
    bl fn_805F99B0
    lfs f0, 0xd0(r1)
    addi r4, r1, 0x38
    lfs f30, lbl_808811E0
    addi r3, r1, 0xa4
    fneg f31, f0
    lfs f7, 0xcc(r1)
    lfs f0, 0xc8(r1)
    addi r5, r1, 0x198
    fneg f29, f7
    psq_l f1, 0x0(r4), 0, 0
    fneg f28, f0
    psq_st f1, 0x0(r3), 0, 0
    frsp f7, f29
    lfs f2, 0x40(r1)
    frsp f0, f31
    lfs f13, 0xb0(r1)
    frsp f8, f28
    lfs f12, 0xb4(r1)
    lfs f11, 0xb8(r1)
    addi r3, r1, 0x348
    lfs f10, 0xa4(r1)
    addi r4, r1, 0x378
    lfs f9, 0xa8(r1)
    stfs f2, 0xac(r1)
    stfs f30, 0x374(r1)
    stfs f30, 0x364(r1)
    stfs f30, 0x354(r1)
    stfs f13, 0x348(r1)
    stfs f12, 0x34c(r1)
    stfs f11, 0x350(r1)
    stfs f10, 0x358(r1)
    stfs f9, 0x35c(r1)
    stfs f2, 0x360(r1)
    stfs f28, 0x2c(r1)
    stfs f29, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f8, 0x368(r1)
    stfs f7, 0x36c(r1)
    stfs f0, 0x370(r1)
    stfs f30, 0x384(r1)
    stfs f30, 0x394(r1)
    stfs f30, 0x3a4(r1)
    bl fn_805F89F0
    addi r3, r1, 0x3d8
    addi r4, r1, 0x198
    addi r5, r1, 0x1c8
    bl fn_805F89F0
    addi r3, r1, 0x1c8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    b lbl_fn_800D5F68_0000119C
lbl_fn_800D5F68_00000C28:
    addi r3, r1, 0x318
    li r4, 0x0
    li r5, 0x30
    bl memset
    lfs f9, lbl_808811E4
    addi r5, r1, 0x2e8
    lfs f8, lbl_808811E8
    addi r6, r1, 0x2b8
    lfs f7, lbl_808811E0
    li r4, 0x0
    lfs f0, lbl_808811EC
    stfs f9, 0x318(r1)
    lwz r3, lbl_8087EFB4
    stfs f9, 0x324(r1)
    stfs f8, 0x32c(r1)
    stfs f9, 0x334(r1)
    stfs f7, 0x340(r1)
    stfs f0, 0x344(r1)
    psq_l f1, 0x15c(r3), 0, 0
    psq_l f2, 0x164(r3), 0, 0
    psq_l f3, 0x16c(r3), 0, 0
    psq_l f4, 0x174(r3), 0, 0
    psq_l f5, 0x17c(r3), 0, 0
    psq_l f6, 0x184(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x1d4(r3), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x1dc(r3), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_l f3, 0x1e4(r3), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_l f4, 0x1ec(r3), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_l f5, 0x1f4(r3), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_l f6, 0x1fc(r3), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    lwz r3, 0x2fc(r3)
    bl fn_800C2448
    addi r4, r1, 0x98
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x1c(r3)
    lfs f7, lbl_808811E0
    lfs f0, 0x98(r1)
    stfs f2, 0xa0(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_800D5F68_00000D1C
    lfs f0, 0x9c(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_800D5F68_00000D1C
    frsp f0, f2
    fcmpu cr0, f7, f0
    bne lbl_fn_800D5F68_00000D1C
    lfs f0, lbl_808811F4
    stfs f0, 0x9c(r1)
lbl_fn_800D5F68_00000D1C:
    lwz r5, lbl_8087EFB4
    addi r3, r1, 0x8c
    addi r6, r1, 0x8
    lfs f7, 0x120(r5)
    mr r4, r3
    lfs f0, 0x114(r5)
    lfs f9, 0x11c(r5)
    fsubs f2, f7, f0
    lfs f8, 0x110(r5)
    lfs f7, 0x118(r5)
    lfs f0, 0x10c(r5)
    fsubs f8, f9, f8
    stfs f2, 0x10(r1)
    fsubs f0, f7, f0
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F98D0
    lfs f7, 0x98(r1)
    lfs f0, 0x8c(r1)
    lfs f8, 0xa0(r1)
    fadds f10, f7, f0
    lfs f7, 0x94(r1)
    lfs f0, lbl_808811E0
    fadds f9, f8, f7
    lfs f8, 0x9c(r1)
    lfs f7, 0x90(r1)
    fcmpu cr0, f0, f10
    stfs f10, 0x80(r1)
    fadds f7, f8, f7
    stfs f9, 0x88(r1)
    stfs f7, 0x84(r1)
    bne lbl_fn_800D5F68_00000DC0
    fcmpu cr0, f0, f7
    bne lbl_fn_800D5F68_00000DC0
    fcmpu cr0, f0, f9
    bne lbl_fn_800D5F68_00000DC0
    lfs f0, lbl_808811F4
    stfs f0, 0x88(r1)
lbl_fn_800D5F68_00000DC0:
    addi r4, r1, 0x80
    lfs f2, 0x88(r1)
    addi r3, r1, 0x74
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x7c(r1)
    bl fn_805F98D0
    lfs f0, 0x80(r1)
    lfs f8, lbl_808811E0
    fabs f9, f0
    lfs f7, lbl_808811EC
    lfs f0, lbl_808811FC
    stfs f8, 0x68(r1)
    frsp f9, f9
    stfs f7, 0x6c(r1)
    fcmpo cr0, f9, f0
    stfs f8, 0x70(r1)
    bge lbl_fn_800D5F68_00000E4C
    lfs f9, 0x88(r1)
    fabs f9, f9
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_800D5F68_00000E4C
    lfs f0, 0x84(r1)
    stfs f8, 0x6c(r1)
    fcmpo cr0, f0, f8
    stfs f8, 0x68(r1)
    cror eq, lt, eq
    bne lbl_fn_800D5F68_00000E44
    lfs f0, lbl_808811F4
    stfs f0, 0x70(r1)
    b lbl_fn_800D5F68_00000E60
lbl_fn_800D5F68_00000E44:
    stfs f7, 0x70(r1)
    b lbl_fn_800D5F68_00000E60
lbl_fn_800D5F68_00000E4C:
    lfs f7, lbl_808811E0
    lfs f0, lbl_808811EC
    stfs f7, 0x70(r1)
    stfs f7, 0x68(r1)
    stfs f0, 0x6c(r1)
lbl_fn_800D5F68_00000E60:
    addi r3, r1, 0x74
    addi r4, r1, 0x68
    addi r5, r1, 0x5c
    bl fn_805F99B0
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x5c
    addi r4, r1, 0x74
    addi r5, r1, 0x50
    bl fn_805F99B0
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
    lfs f30, lbl_808811E0
    addi r3, r1, 0x288
    lfs f31, 0x5c(r1)
    addi r4, r1, 0x2b8
    lfs f13, 0x60(r1)
    addi r5, r1, 0x138
    lfs f12, 0x64(r1)
    lfs f11, 0x50(r1)
    lfs f10, 0x54(r1)
    lfs f9, 0x58(r1)
    lfs f8, 0x74(r1)
    lfs f7, 0x78(r1)
    lfs f0, 0x7c(r1)
    stfs f30, 0x2b4(r1)
    stfs f30, 0x2a4(r1)
    stfs f30, 0x294(r1)
    stfs f31, 0x288(r1)
    stfs f13, 0x28c(r1)
    stfs f12, 0x290(r1)
    stfs f11, 0x298(r1)
    stfs f10, 0x29c(r1)
    stfs f9, 0x2a0(r1)
    stfs f8, 0x2a8(r1)
    stfs f7, 0x2ac(r1)
    stfs f0, 0x2b0(r1)
    stfs f30, 0x2c4(r1)
    stfs f30, 0x2d4(r1)
    stfs f30, 0x2e4(r1)
    bl fn_805F89F0
    addi r3, r1, 0x318
    addi r4, r1, 0x138
    addi r5, r1, 0x168
    bl fn_805F89F0
    addi r3, r1, 0x168
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    b lbl_fn_800D5F68_0000119C
lbl_fn_800D5F68_00000F54:
    cmpwi r5, 0x0
    mr r28, r29
    ble lbl_fn_800D5F68_00001078
    cmpwi r7, 0x0
    beq lbl_fn_800D5F68_00001050
    lbz r0, lbl_8087EFF8
    extsb. r0, r0
    bne lbl_fn_800D5F68_00000FA8
    lis r30, lbl_807C75F4@ha
    li r4, 0x0
    addi r3, r30, lbl_807C75F4@l
    li r5, 0x1
    bl fn_8004B290
    lis r4, fn_8004B338@ha
    lis r5, lbl_807C75E8@ha
    addi r3, r30, lbl_807C75F4@l
    addi r4, r4, fn_8004B338@l
    addi r5, r5, lbl_807C75E8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EFF8
lbl_fn_800D5F68_00000FA8:
    lfs f11, lbl_808811F8
    lis r28, lbl_807C75F4@ha
    lfs f10, 0xc(r27)
    addi r28, r28, lbl_807C75F4@l
    lfs f9, lbl_808811E0
    addi r4, r1, 0x20
    fmuls f12, f11, f10
    lfs f7, 0x0(r27)
    lfs f8, 0x4(r27)
    mr r3, r28
    lfs f0, 0x8(r27)
    fadds f29, f7, f9
    fadds f13, f0, f9
    stfs f29, 0x20(r1)
    fadds f28, f8, f12
    lfs f0, lbl_808811EC
    fmadds f29, f11, f10, f8
    stfs f9, 0x14(r1)
    stfs f28, 0x24(r1)
    fmr f2, f13
    fnmsubs f28, f11, f10, f7
    psq_l f1, 0x0(r4), 0, 0
    fnmsubs f8, f11, f10, f8
    psq_st f1, 0x8(r28), 0, 0
    fmadds f7, f11, f10, f7
    stfs f2, 0x10(r28)
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x8(r27)
    stfs f12, 0x18(r1)
    stfs f9, 0x1c(r1)
    stfs f13, 0x28(r1)
    psq_st f1, 0x14(r28), 0, 0
    stfs f2, 0x1c(r28)
    stfs f9, 0x20(r28)
    stfs f9, 0x24(r28)
    stfs f0, 0x28(r28)
    stfs f29, 0x3c(r28)
    stfs f8, 0x40(r28)
    stfs f28, 0x48(r28)
    stfs f7, 0x44(r28)
    bl fn_8004B378
    b lbl_fn_800D5F68_00001078
lbl_fn_800D5F68_00001050:
    lwz r3, lbl_8087EFB4
    lwz r30, 0x2fc(r3)
    mr r3, r30
    bl fn_800C2418
    cmpw r26, r3
    bge lbl_fn_800D5F68_00001078
    mr r3, r30
    mr r4, r26
    bl fn_800C2520
    mr r28, r3
lbl_fn_800D5F68_00001078:
    psq_l f1, 0xd0(r29), 0, 0
    addi r3, r1, 0x258
    psq_l f2, 0xd8(r29), 0, 0
    addi r4, r1, 0x228
    psq_l f3, 0xe0(r29), 0, 0
    psq_l f4, 0xe8(r29), 0, 0
    psq_l f5, 0xf0(r29), 0, 0
    psq_l f6, 0xf8(r29), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_l f1, 0x58(r28), 0, 0
    psq_l f2, 0x60(r28), 0, 0
    psq_l f3, 0x68(r28), 0, 0
    psq_l f4, 0x70(r28), 0, 0
    psq_l f5, 0x78(r28), 0, 0
    psq_l f6, 0x80(r28), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    lwz r0, 0x4(r28)
    cmpwi r0, 0x1
    bne lbl_fn_800D5F68_00001118
    lfs f5, lbl_808811E4
    addi r3, r1, 0x1f8
    lfs f4, 0x48(r28)
    fmr f7, f5
    lfs f3, 0x44(r28)
    fmr f8, f5
    lfs f2, 0x40(r28)
    lfs f1, 0x3c(r28)
    lfs f6, lbl_808811E8
    bl fn_800D5E18
    b lbl_fn_800D5F68_00001148
lbl_fn_800D5F68_00001118:
    lfs f7, 0x50(r28)
    addi r3, r1, 0x1f8
    lfs f0, lbl_80881200
    lfs f3, lbl_808811E4
    fmuls f7, f0, f7
    lfs f0, lbl_80881204
    fmr f5, f3
    lfs f2, 0x54(r28)
    fmr f6, f3
    lfs f4, lbl_808811E8
    fdivs f1, f7, f0
    bl fn_800D5D00
lbl_fn_800D5F68_00001148:
    addi r3, r1, 0x228
    addi r4, r1, 0x258
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0x1f8
    addi r4, r1, 0xd8
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
lbl_fn_800D5F68_0000119C:
    addi r11, r1, 0x450
    psq_l f31, 0x488(r1), 0, 0
    lfd f31, 0x480(r1)
    psq_l f30, 0x478(r1), 0, 0
    lfd f30, 0x470(r1)
    psq_l f29, 0x468(r1), 0, 0
    lfd f29, 0x460(r1)
    psq_l f28, 0x458(r1), 0, 0
    lfd f28, 0x450(r1)
    bl _restgpr_26
    lwz r0, 0x494(r1)
    mtlr r0
    addi r1, r1, 0x490
    blr
}

asm void fn_800D6898(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r4
    mr r31, r3
    mr r28, r5
    mr r3, r27
    bl fn_80616400
    mr r30, r3
    mr r3, r27
    bl fn_80616430
    clrlwi r29, r3, 24
    mr r3, r27
    bl fn_806163B0
    lwz r5, 0x8(r31)
    mr r4, r31
    li r6, -0x1
    li r7, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_800D6898_0000124C
lbl_fn_800D6898_0000122C:
    lwz r0, 0x18c(r4)
    cmplw r3, r0
    bne lbl_fn_800D6898_00001240
    mr r6, r7
    b lbl_fn_800D6898_0000124C
lbl_fn_800D6898_00001240:
    addi r4, r4, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_800D6898_0000122C
lbl_fn_800D6898_0000124C:
    cmpwi r6, -0x1
    bne lbl_fn_800D6898_0000126C
    divw r0, r28, r5
    mullw r0, r0, r5
    subf r6, r0, r28
    slwi r0, r6, 2
    add r4, r31, r0
    stw r3, 0x18c(r4)
lbl_fn_800D6898_0000126C:
    subi r0, r30, 0x8
    li r3, 0x0
    cmplwi r0, 0x2
    ble lbl_fn_800D6898_000012D0
    cmpwi r30, 0x6
    bne lbl_fn_800D6898_000012AC
    cmpwi r29, 0x0
    beq lbl_fn_800D6898_0000129C
    slwi r0, r6, 4
    add r3, r31, r0
    addi r3, r3, 0x10c
    b lbl_fn_800D6898_000012D0
lbl_fn_800D6898_0000129C:
    slwi r0, r6, 4
    add r3, r31, r0
    addi r3, r3, 0xc
    b lbl_fn_800D6898_000012D0
lbl_fn_800D6898_000012AC:
    cmpwi r29, 0x0
    beq lbl_fn_800D6898_000012C4
    slwi r0, r6, 4
    add r3, r31, r0
    addi r3, r3, 0xc
    b lbl_fn_800D6898_000012D0
lbl_fn_800D6898_000012C4:
    slwi r0, r6, 4
    add r3, r31, r0
    addi r3, r3, 0x8c
lbl_fn_800D6898_000012D0:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D69A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80779700@ha
    li r4, 0x0
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80779700@l
    li r0, 0x8
    stmw r27, 0xc(r1)
    mr r27, r3
    li r31, 0x0
    lis r30, 0x8
    li r29, 0x0
    li r28, 0x0
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800D69A8_00001398
lbl_fn_800D69A8_00001328:
    add r3, r27, r28
    mr r5, r29
    mr r7, r30
    li r4, 0x0
    addi r3, r3, 0xc
    li r6, 0x0
    li r8, 0x0
    bl GXInitTexCacheRegion
    add r3, r27, r28
    mr r5, r29
    addi r3, r3, 0x8c
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x3
    bl GXInitTexCacheRegion
    add r3, r27, r28
    mr r5, r29
    mr r7, r30
    li r4, 0x1
    addi r3, r3, 0x10c
    li r6, 0x0
    li r8, 0x0
    bl GXInitTexCacheRegion
    addis r30, r30, 0x1
    addis r29, r29, 0x1
    addi r28, r28, 0x10
    addi r31, r31, 0x1
lbl_fn_800D69A8_00001398:
    lwz r0, 0x8(r27)
    cmpw r31, r0
    blt lbl_fn_800D69A8_00001328
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D6A80(void)
{
    nofralloc
    b fn_800D6898
}

asm void fn_800D6A84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80779728@ha
    li r4, 0x0
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80779728@l
    li r0, 0x4
    stmw r27, 0xc(r1)
    mr r27, r3
    li r31, 0x0
    lis r30, 0x8
    li r29, 0x0
    li r28, 0x0
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800D6A84_00001474
lbl_fn_800D6A84_00001404:
    add r3, r27, r28
    mr r5, r29
    mr r7, r30
    li r4, 0x0
    addi r3, r3, 0xc
    li r6, 0x1
    li r8, 0x1
    bl GXInitTexCacheRegion
    add r3, r27, r28
    mr r5, r29
    addi r3, r3, 0x8c
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x3
    bl GXInitTexCacheRegion
    add r3, r27, r28
    mr r5, r29
    mr r7, r30
    li r4, 0x1
    addi r3, r3, 0x10c
    li r6, 0x0
    li r8, 0x0
    bl GXInitTexCacheRegion
    addis r30, r30, 0x2
    addis r29, r29, 0x2
    addi r28, r28, 0x10
    addi r31, r31, 0x1
lbl_fn_800D6A84_00001474:
    lwz r0, 0x8(r27)
    cmpw r31, r0
    blt lbl_fn_800D6A84_00001404
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D6B5C(void)
{
    nofralloc
    b fn_800D6898
}

asm void fn_800D6B60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800D6B60_000014C4
    cmpwi r4, 0x0
    ble lbl_fn_800D6B60_000014C4
    bl dtor_80084684
lbl_fn_800D6B60_000014C4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D6BA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800D6BA0_00001504
    cmpwi r4, 0x0
    ble lbl_fn_800D6BA0_00001504
    bl dtor_80084684
lbl_fn_800D6BA0_00001504:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D6BE0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    srawi r0, r5, 2
    stmw r14, 0x18(r1)
    addze r29, r0
    srawi r0, r6, 2
    addze r0, r0
    cmpwi r29, 0x2
    stw r0, 0xc(r1)
    bgt lbl_fn_800D6BE0_00001614
    li r5, 0x0
    li r12, 0x0
    b lbl_fn_800D6BE0_00001604
lbl_fn_800D6BE0_0000154C:
    slwi r14, r12, 3
    mtctr r29
    cmpwi r29, 0x0
    ble lbl_fn_800D6BE0_000015FC
lbl_fn_800D6BE0_0000155C:
    add r8, r4, r14
    add r15, r3, r14
    lbzx r0, r4, r14
    stb r0, 0x1(r15)
    lbz r0, 0x1(r8)
    stbx r0, r3, r14
    addi r14, r14, 0x8
    lbz r0, 0x2(r8)
    lbz r16, 0x5(r8)
    lbz r11, 0x4(r8)
    stb r0, 0x3(r15)
    rlwinm r10, r16, 30, 28, 29
    lbz r7, 0x3(r8)
    rlwinm r6, r11, 30, 28, 29
    rlwinm r0, r11, 2, 26, 27
    rlwinm r9, r16, 2, 26, 27
    stb r7, 0x2(r15)
    rlwimi r6, r11, 26, 30, 31
    rlwimi r0, r11, 6, 24, 25
    lbz r17, 0x6(r8)
    or r11, r6, r0
    lbz r18, 0x7(r8)
    rlwinm r8, r17, 30, 28, 29
    rlwinm r7, r17, 2, 26, 27
    rlwinm r6, r18, 30, 28, 29
    rlwinm r0, r18, 2, 26, 27
    stb r11, 0x4(r15)
    rlwimi r10, r16, 26, 30, 31
    rlwimi r9, r16, 6, 24, 25
    rlwimi r8, r17, 26, 30, 31
    or r9, r10, r9
    rlwimi r7, r17, 6, 24, 25
    stb r9, 0x5(r15)
    or r7, r8, r7
    rlwimi r6, r18, 26, 30, 31
    rlwimi r0, r18, 6, 24, 25
    stb r7, 0x6(r15)
    or r0, r6, r0
    stb r0, 0x7(r15)
    bdnz lbl_fn_800D6BE0_0000155C
lbl_fn_800D6BE0_000015FC:
    add r12, r12, r29
    addi r5, r5, 0x1
lbl_fn_800D6BE0_00001604:
    lwz r0, 0xc(r1)
    cmpw r5, r0
    blt lbl_fn_800D6BE0_0000154C
    b lbl_fn_800D6BE0_00001778
lbl_fn_800D6BE0_00001614:
    srwi r5, r29, 31
    li r0, 0x0
    stw r0, 0x8(r1)
    add r0, r5, r29
    srawi r14, r0, 1
    b lbl_fn_800D6BE0_00001768
lbl_fn_800D6BE0_0000162C:
    lwz r0, 0x8(r1)
    li r28, 0x0
    mullw r7, r0, r29
    srwi r6, r0, 31
    clrlwi r5, r0, 31
    add r0, r6, r0
    xor r5, r5, r6
    clrrwi r9, r0, 1
    subf r0, r6, r5
    slwi r27, r7, 3
    slwi r8, r0, 1
    mtctr r29
    cmpwi r29, 0x0
    ble lbl_fn_800D6BE0_0000175C
lbl_fn_800D6BE0_00001664:
    srwi r6, r28, 31
    add r10, r4, r27
    add r5, r6, r28
    lbz r11, 0x4(r10)
    divw r15, r28, r14
    clrlwi r0, r28, 31
    extlwi r5, r5, 30, 1
    lbz r31, 0x6(r10)
    lbz r30, 0x7(r10)
    xor r0, r0, r6
    divw r17, r5, r29
    srwi r18, r15, 31
    clrlwi r15, r15, 31
    lbzx r16, r4, r27
    subf r0, r6, r0
    lbz r12, 0x5(r10)
    mullw r21, r17, r29
    xor r15, r15, r18
    rlwinm r19, r11, 30, 28, 29
    lbz r17, 0x1(r10)
    subf r15, r18, r15
    lbz r18, 0x2(r10)
    subf r5, r21, r5
    add r15, r9, r15
    add r5, r8, r5
    rlwinm r20, r11, 2, 26, 27
    rlwinm r21, r12, 30, 28, 29
    rlwinm r22, r12, 2, 26, 27
    rlwinm r23, r31, 30, 28, 29
    rlwinm r24, r31, 2, 26, 27
    rlwinm r25, r30, 30, 28, 29
    rlwinm r26, r30, 2, 26, 27
    mullw r15, r15, r29
    add r5, r5, r0
    lbz r6, 0x3(r10)
    rlwimi r19, r11, 26, 30, 31
    rlwimi r20, r11, 6, 24, 25
    rlwimi r21, r12, 26, 30, 31
    rlwimi r22, r12, 6, 24, 25
    add r0, r5, r15
    slwi r0, r0, 3
    or r12, r19, r20
    add r5, r3, r0
    or r11, r21, r22
    stb r16, 0x1(r5)
    rlwimi r23, r31, 26, 30, 31
    rlwimi r24, r31, 6, 24, 25
    rlwimi r25, r30, 26, 30, 31
    stbx r17, r3, r0
    rlwimi r26, r30, 6, 24, 25
    or r10, r23, r24
    addi r7, r7, 0x1
    stb r18, 0x3(r5)
    or r0, r25, r26
    addi r27, r27, 0x8
    addi r28, r28, 0x1
    stb r6, 0x2(r5)
    stb r12, 0x4(r5)
    stb r11, 0x5(r5)
    stb r10, 0x6(r5)
    stb r0, 0x7(r5)
    bdnz lbl_fn_800D6BE0_00001664
lbl_fn_800D6BE0_0000175C:
    lwz r5, 0x8(r1)
    addi r5, r5, 0x1
    stw r5, 0x8(r1)
lbl_fn_800D6BE0_00001768:
    lwz r5, 0x8(r1)
    lwz r0, 0xc(r1)
    cmpw r5, r0
    blt lbl_fn_800D6BE0_0000162C
lbl_fn_800D6BE0_00001778:
    lmw r14, 0x18(r1)
    addi r1, r1, 0x60
    blr
}
