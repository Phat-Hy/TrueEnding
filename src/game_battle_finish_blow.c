#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_16(void);
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_16(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008B140(void);
extern void fn_80092A4C(void);
extern void fn_800971D4(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80097E80(void);
extern void fn_80158CA4(void);
extern void fn_80370A78(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC91C(void);
extern void fn_803ED774(void);
extern void fn_8040161C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068B100(void);
extern void fn_80695A50(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_807527C0[];
extern u8 lbl_807527D4[];
extern u8 lbl_80752830[];
extern u8 lbl_80752844[];
extern u8 lbl_8078D1C8[];
extern u8 lbl_8078D1D4[];
extern u8 lbl_8078D1F8[];
extern u8 lbl_807C7060[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886118;
extern u32 lbl_8088611C;
extern u32 lbl_80886134;
extern u32 lbl_80886138;
extern u32 lbl_8088613C;
extern u32 lbl_80886140;
extern u32 lbl_8088614C;
extern u32 lbl_80886154;
extern u32 lbl_80886158;
extern u32 lbl_8088615C;
extern u32 lbl_80886160;
extern u32 lbl_80886164;
extern u32 lbl_80886168;
extern u32 lbl_8088616C;
extern u32 lbl_80886170;
extern u32 lbl_80886174;
extern u32 lbl_80886178;
extern u32 lbl_8088617C;
extern u32 lbl_80886180;
extern u32 lbl_80886184;
extern u32 lbl_80886188;
extern u32 lbl_8088618C;
extern u32 lbl_80886190;
extern u32 lbl_80886198;
extern u32 lbl_8088619C;
extern u32 lbl_808861A0;
extern u32 lbl_808861A4;
extern u32 lbl_808861A8;
extern u32 lbl_808861AC;
extern u32 lbl_808861B0;

/* Function declarations */
void fn_80401E50(void);
void fn_804023E0(void);
void fn_80402764(void);
void fn_80402768(void);
void fn_80402970(void);
void fn_80402978(void);
void fn_80402A40(void);
void fn_80402A9C(void);
void fn_80402B24(void);
void fn_80402BD0(void);
void fn_80403280(void);
void fn_80403308(void);

asm void fn_80401E50(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stfd f28, 0x160(r1)
    psq_st f28, 0x168(r1), 0, 0
    stfd f27, 0x150(r1)
    psq_st f27, 0x158(r1), 0, 0
    stfd f26, 0x140(r1)
    psq_st f26, 0x148(r1), 0, 0
    stfd f25, 0x130(r1)
    psq_st f25, 0x138(r1), 0, 0
    stfd f24, 0x120(r1)
    psq_st f24, 0x128(r1), 0, 0
    stfd f23, 0x110(r1)
    psq_st f23, 0x118(r1), 0, 0
    stfd f22, 0x100(r1)
    psq_st f22, 0x108(r1), 0, 0
    stfd f21, 0xf0(r1)
    psq_st f21, 0xf8(r1), 0, 0
    stfd f20, 0xe0(r1)
    psq_st f20, 0xe8(r1), 0, 0
    stfd f19, 0xd0(r1)
    psq_st f19, 0xd8(r1), 0, 0
    stfd f18, 0xc0(r1)
    psq_st f18, 0xc8(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0x55c(r4)
    lis r5, 0x4330
    stw r5, 0x88(r1)
    mr r27, r3
    cmpwi r0, 0x6
    mr r28, r4
    stw r5, 0x90(r1)
    li r5, 0x0
    bne lbl_fn_80401E50_000000C0
    lwz r0, 0x560(r4)
    cmpwi r0, 0x4
    blt lbl_fn_80401E50_000000C0
    cmpwi r0, 0xc
    bge lbl_fn_80401E50_000000C0
    li r5, 0x1
lbl_fn_80401E50_000000C0:
    lwz r4, 0x58c(r4)
    mr r3, r28
    subi r0, r4, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    and r4, r5, r0
    neg r0, r4
    or r0, r0, r4
    srwi r26, r0, 31
    bl fn_80158CA4
    and r4, r26, r3
    lis r3, lbl_807527C0@ha
    neg r0, r4
    lfs f22, lbl_8088611C
    or r0, r0, r4
    lfs f21, lbl_80886158
    lfs f25, lbl_80886118
    srwi r30, r0, 31
    lfd f26, lbl_807527C0@l(r3)
    li r29, 0x0
    lfs f27, lbl_80886134
    li r26, 0x0
    lfs f28, lbl_80886164
    lis r31, 0x4178
    lfs f29, lbl_80886140
    lfs f30, lbl_80886168
    lfs f18, lbl_80886170
    lfs f31, lbl_8088616C
    lfs f23, lbl_80886160
    lfs f24, lbl_8088615C
    b lbl_fn_80401E50_000004FC
lbl_fn_80401E50_0000013C:
    lwz r0, 0x130(r27)
    lfs f1, 0x74(r27)
    add r3, r0, r26
    lfs f3, 0x530(r28)
    lfs f0, 0xc(r3)
    lfs f2, 0x6c(r27)
    fadds f4, f1, f0
    lfs f1, 0x4(r3)
    lfs f0, 0x528(r28)
    fadds f1, f2, f1
    fsubs f2, f4, f3
    fsubs f1, f1, f0
    stfs f2, 0xc(r1)
    fmuls f0, f2, f2
    stfs f1, 0x8(r1)
    fmadds f1, f1, f1, f0
    fcmpo cr0, f1, f21
    bge lbl_fn_80401E50_0000025C
    bl fn_8068B100
    lwz r0, 0x130(r27)
    frsp f20, f1
    lfs f2, 0x6c(r27)
    add r3, r0, r26
    lfs f0, 0x528(r28)
    lfs f1, 0x4(r3)
    fadds f1, f2, f1
    fsubs f0, f1, f0
    stfs f0, 0x1c(r3)
    lwz r0, 0x130(r27)
    lfs f2, 0x74(r27)
    add r3, r0, r26
    lfs f0, 0x530(r28)
    lfs f1, 0xc(r3)
    fadds f1, f2, f1
    fsubs f0, f1, f0
    stfs f0, 0x20(r3)
    lwz r0, 0x130(r27)
    add r25, r0, r26
    lfs f1, 0x20(r25)
    lfs f0, 0x1c(r25)
    fmuls f1, f1, f1
    fmadds f1, f0, f0, f1
    bl fn_8068B100
    frsp f1, f1
    lfs f0, 0x1c(r25)
    fdivs f1, f22, f1
    fmuls f0, f0, f1
    stfs f0, 0x1c(r25)
    lfs f0, 0x20(r25)
    fmuls f0, f0, f1
    stfs f0, 0x20(r25)
    lwz r0, 0x130(r27)
    add r25, r0, r26
    bl fn_80680CF8
    addi r0, r31, 0x749f
    fdivs f0, f20, f24
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    fsubs f0, f22, f0
    xoris r0, r0, 0x8000
    stw r0, 0x8c(r1)
    lfd f1, 0x88(r1)
    fsubs f1, f1, f26
    fdivs f1, f1, f27
    fmuls f1, f23, f1
    fmuls f0, f0, f1
    stfs f0, 0x24(r25)
    b lbl_fn_80401E50_000004F4
lbl_fn_80401E50_0000025C:
    cmpwi r30, 0x0
    beq lbl_fn_80401E50_000004F4
    stfs f25, 0x1c(r1)
    addi r3, r1, 0x58
    li r4, 0x79
    stfs f25, 0x20(r1)
    stfs f22, 0x24(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x1c
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x130(r27)
    add r25, r0, r26
    bl fn_80680CF8
    addi r0, r31, 0x749f
    lfs f3, 0x1c(r1)
    mulhw r0, r0, r3
    lfs f2, 0x528(r28)
    lfs f1, 0x6c(r27)
    li r4, 0x79
    lfs f0, 0x4(r25)
    fadds f0, f1, f0
    srawi r0, r0, 8
    stfs f25, 0x10(r1)
    srwi r5, r0, 31
    add r0, r0, r5
    stfs f25, 0x14(r1)
    mulli r0, r0, 0x3e9
    stfs f22, 0x18(r1)
    subf r0, r0, r3
    lfs f1, 0x538(r28)
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    addi r3, r1, 0x28
    lfd f4, 0x90(r1)
    fsubs f4, f4, f26
    fdivs f4, f4, f27
    fmadds f4, f28, f4, f29
    fsubs f4, f4, f30
    fmadds f2, f3, f4, f2
    fsubs f0, f0, f2
    stfs f0, 0x8(r1)
    bl fn_805F8E70
    addi r4, r1, 0x10
    addi r3, r1, 0x28
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x130(r27)
    add r25, r0, r26
    bl fn_80680CF8
    addi r0, r31, 0x749f
    lfs f2, 0x74(r27)
    mulhw r0, r0, r3
    lfs f1, 0xc(r25)
    lfs f4, 0x18(r1)
    fadds f1, f2, f1
    lfs f3, 0x530(r28)
    lfs f0, 0x8(r1)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x8c(r1)
    lfd f2, 0x88(r1)
    fsubs f2, f2, f26
    fdivs f2, f2, f27
    fmadds f2, f28, f2, f29
    fsubs f2, f2, f30
    fmadds f2, f4, f2, f3
    fsubs f1, f1, f2
    stfs f1, 0xc(r1)
    fmuls f1, f1, f1
    fmadds f1, f0, f0, f1
    fcmpo cr0, f1, f31
    bge lbl_fn_80401E50_000004F4
    bl fn_8068B100
    lwz r0, 0x130(r27)
    frsp f20, f1
    lfs f2, 0x6c(r27)
    add r3, r0, r26
    lfs f0, 0x528(r28)
    lfs f1, 0x4(r3)
    fadds f1, f2, f1
    fsubs f0, f1, f0
    stfs f0, 0x1c(r3)
    lwz r0, 0x130(r27)
    lfs f2, 0x74(r27)
    add r3, r0, r26
    lfs f0, 0x530(r28)
    lfs f1, 0xc(r3)
    fadds f1, f2, f1
    fsubs f0, f1, f0
    stfs f0, 0x20(r3)
    lwz r0, 0x130(r27)
    add r3, r0, r26
    lfs f1, 0x20(r3)
    lfs f0, 0x1c(r3)
    fmuls f1, f1, f1
    fmadds f1, f0, f0, f1
    bl fn_8068B100
    frsp f0, f1
    lwz r0, 0x130(r27)
    add r25, r0, r26
    fdivs f19, f22, f0
    bl fn_80680CF8
    addi r0, r31, 0x749f
    lfs f0, 0x1c(r25)
    mulhw r0, r0, r3
    fmuls f0, f19, f0
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    lfd f1, 0x90(r1)
    fsubs f1, f1, f26
    fdivs f1, f1, f27
    fmsubs f1, f30, f1, f22
    fmuls f0, f0, f1
    stfs f0, 0x1c(r25)
    lwz r0, 0x130(r27)
    add r25, r0, r26
    bl fn_80680CF8
    addi r0, r31, 0x749f
    lfs f0, 0x20(r25)
    mulhw r0, r0, r3
    fmuls f0, f19, f0
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x8c(r1)
    lfd f1, 0x88(r1)
    fsubs f1, f1, f26
    fdivs f1, f1, f27
    fmsubs f1, f30, f1, f22
    fmuls f0, f0, f1
    stfs f0, 0x20(r25)
    lwz r0, 0x130(r27)
    add r25, r0, r26
    bl fn_80680CF8
    addi r0, r31, 0x749f
    fdivs f0, f20, f18
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    fsubs f0, f22, f0
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    lfd f1, 0x90(r1)
    fsubs f1, f1, f26
    fdivs f1, f1, f27
    fmuls f1, f30, f1
    fmuls f0, f0, f1
    stfs f0, 0x24(r25)
lbl_fn_80401E50_000004F4:
    addi r29, r29, 0x1
    addi r26, r26, 0x30
lbl_fn_80401E50_000004FC:
    lwz r0, 0x114(r27)
    cmpw r29, r0
    blt lbl_fn_80401E50_0000013C
    addi r11, r1, 0xc0
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    psq_l f28, 0x168(r1), 0, 0
    lfd f28, 0x160(r1)
    psq_l f27, 0x158(r1), 0, 0
    lfd f27, 0x150(r1)
    psq_l f26, 0x148(r1), 0, 0
    lfd f26, 0x140(r1)
    psq_l f25, 0x138(r1), 0, 0
    lfd f25, 0x130(r1)
    psq_l f24, 0x128(r1), 0, 0
    lfd f24, 0x120(r1)
    psq_l f23, 0x118(r1), 0, 0
    lfd f23, 0x110(r1)
    psq_l f22, 0x108(r1), 0, 0
    lfd f22, 0x100(r1)
    psq_l f21, 0xf8(r1), 0, 0
    lfd f21, 0xf0(r1)
    psq_l f20, 0xe8(r1), 0, 0
    lfd f20, 0xe0(r1)
    psq_l f19, 0xd8(r1), 0, 0
    lfd f19, 0xd0(r1)
    psq_l f18, 0xc8(r1), 0, 0
    lfd f18, 0xc0(r1)
    bl _restgpr_25
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_804023E0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x30
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    stfd f26, 0x60(r1)
    psq_st f26, 0x68(r1), 0, 0
    stfd f25, 0x50(r1)
    psq_st f25, 0x58(r1), 0, 0
    stfd f24, 0x40(r1)
    psq_st f24, 0x48(r1), 0, 0
    stfd f23, 0x30(r1)
    psq_st f23, 0x38(r1), 0, 0
    bl _savegpr_26
    lis r4, lbl_807527C0@ha
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r28, r3
    lfs f23, lbl_8088613C
    li r29, 0x0
    stw r0, 0x10(r1)
    li r27, 0x0
    lfd f25, lbl_807527C0@l(r4)
    lis r30, 0x4178
    lfs f26, lbl_80886134
    lis r31, 0x6666
    lfs f27, lbl_80886174
    lfs f28, lbl_80886178
    lfs f29, lbl_80886118
    lfs f24, lbl_80886154
    lfs f30, lbl_8088614C
    lfs f31, lbl_80886138
    b lbl_fn_804023E0_000008A8
lbl_fn_804023E0_00000638:
    lwz r0, 0x130(r28)
    add r3, r0, r27
    lfs f0, 0x24(r3)
    fcmpo cr0, f0, f23
    bgt lbl_fn_804023E0_00000658
    lfs f0, 0x8(r3)
    fcmpo cr0, f0, f24
    ble lbl_fn_804023E0_00000784
lbl_fn_804023E0_00000658:
    add r26, r0, r27
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f2, 0x1c(r26)
    mulhw r0, r0, r3
    lfs f1, 0x24(r26)
    lfs f0, 0x4(r26)
    fmuls f1, f2, f1
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f25
    fdivs f2, f2, f26
    fmsubs f2, f27, f2, f28
    fmadds f0, f2, f1, f0
    stfs f0, 0x4(r26)
    lwz r0, 0x130(r28)
    add r26, r0, r27
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f2, 0x20(r26)
    mulhw r0, r0, r3
    lfs f1, 0x24(r26)
    lfs f0, 0xc(r26)
    fmuls f1, f2, f1
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f25
    fdivs f2, f2, f26
    fmsubs f2, f27, f2, f28
    fmadds f0, f2, f1, f0
    stfs f0, 0xc(r26)
    lwz r0, 0x130(r28)
    add r3, r0, r27
    lfs f1, 0x8(r3)
    lfs f0, 0x24(r3)
    fadds f0, f1, f0
    stfs f0, 0x8(r3)
    lwz r0, 0x130(r28)
    add r3, r0, r27
    lfs f0, 0x24(r3)
    fsubs f0, f0, f23
    fcmpo cr0, f0, f29
    bge lbl_fn_804023E0_00000738
    lfs f0, lbl_80886154
lbl_fn_804023E0_00000738:
    stfs f0, 0x24(r3)
    lwz r0, 0x130(r28)
    add r3, r0, r27
    lfs f1, 0x10(r3)
    lfs f0, 0x8(r3)
    fadds f0, f1, f0
    stfs f0, 0x10(r3)
    lwz r0, 0x130(r28)
    add r3, r0, r27
    lfs f1, 0x14(r3)
    lfs f0, 0x8(r3)
    fadds f0, f1, f0
    stfs f0, 0x14(r3)
    lwz r0, 0x130(r28)
    add r3, r0, r27
    lfs f1, 0x18(r3)
    lfs f0, 0x8(r3)
    fadds f0, f1, f0
    stfs f0, 0x18(r3)
lbl_fn_804023E0_00000784:
    lwz r0, 0xf8(r28)
    cmpwi r0, 0x2
    bne lbl_fn_804023E0_000007D4
    lwz r0, 0x130(r28)
    add r26, r0, r27
    bl fn_80680CF8
    addi r0, r31, 0x6667
    lfs f0, 0x8(r26)
    mulhw r0, r0, r3
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f25
    fmadds f0, f30, f1, f0
    stfs f0, 0x8(r26)
lbl_fn_804023E0_000007D4:
    lwz r0, 0xf8(r28)
    cmpwi r0, 0x1
    beq lbl_fn_804023E0_00000800
    lwz r0, 0x130(r28)
    add r3, r0, r27
    lfs f0, 0x8(r3)
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_804023E0_00000800
    stfs f29, 0x8(r3)
    b lbl_fn_804023E0_000008A0
lbl_fn_804023E0_00000800:
    lwz r0, 0x130(r28)
    add r26, r0, r27
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f1, 0x1c(r26)
    mulhw r0, r0, r3
    lfs f0, 0x4(r26)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f25
    fdivs f2, f2, f26
    fmuls f2, f31, f2
    fmadds f0, f1, f2, f0
    stfs f0, 0x4(r26)
    lwz r0, 0x130(r28)
    add r26, r0, r27
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f1, 0x20(r26)
    mulhw r0, r0, r3
    lfs f0, 0xc(r26)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f25
    fdivs f2, f2, f26
    fmuls f2, f31, f2
    fmadds f0, f1, f2, f0
    stfs f0, 0xc(r26)
lbl_fn_804023E0_000008A0:
    addi r29, r29, 0x1
    addi r27, r27, 0x30
lbl_fn_804023E0_000008A8:
    lwz r0, 0x114(r28)
    cmpw r29, r0
    blt lbl_fn_804023E0_00000638
    addi r11, r1, 0x30
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    psq_l f26, 0x68(r1), 0, 0
    lfd f26, 0x60(r1)
    psq_l f25, 0x58(r1), 0, 0
    lfd f25, 0x50(r1)
    psq_l f24, 0x48(r1), 0, 0
    lfd f24, 0x40(r1)
    psq_l f23, 0x38(r1), 0, 0
    lfd f23, 0x30(r1)
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80402764(void)
{
    nofralloc
    b fn_8040161C
}

asm void fn_80402768(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    addi r4, r1, 0x8
    stw r29, 0x34(r1)
    mr r29, r3
    bl fn_803EC758
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80402768_00000978
    cmpwi r30, 0x0
    beq lbl_fn_80402768_00000978
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80402768_00000978
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_80402768_0000097C
lbl_fn_80402768_00000978:
    li r30, 0x0
lbl_fn_80402768_0000097C:
    lis r31, lbl_807527D4@ha
    mr r3, r30
    addi r31, r31, lbl_807527D4@l
    addi r5, r29, 0xf4
    addi r4, r31, 0x16
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_8088617C
    mr r3, r30
    lfs f2, lbl_80886180
    addi r4, r31, 0x1c
    lfs f3, lbl_80886184
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80886188
    mr r3, r30
    lfs f2, lbl_8088618C
    addi r4, r31, 0x20
    lfs f3, lbl_80886190
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_8088617C
    mr r3, r30
    lfs f2, lbl_80886180
    addi r4, r31, 0x24
    lfs f3, lbl_80886184
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x28
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x2f
    addi r5, r29, 0xf8
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r7, 0x114(r29)
    mr r3, r30
    addi r4, r31, 0x34
    addi r5, r29, 0x114
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_8088617C
    mr r3, r30
    lfs f2, lbl_80886180
    addi r4, r31, 0x3c
    lfs f3, lbl_80886184
    addi r5, r29, 0xfc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_8088617C
    mr r3, r30
    lfs f2, lbl_80886180
    addi r4, r31, 0x44
    lfs f3, lbl_80886184
    addi r5, r29, 0x108
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088617C
    mr r3, r30
    lfs f2, lbl_80886180
    addi r4, r31, 0x4c
    lfs f3, lbl_80886184
    addi r5, r29, 0x110
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088613C
    mr r3, r30
    lfs f2, lbl_80886180
    addi r4, r31, 0x57
    fmr f3, f1
    addi r5, r29, 0x11c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80402970(void)
{
    nofralloc
    lfs f1, 0x11c(r3)
    blr
}

asm void fn_80402978(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80402978_00000BD0
    lis r5, lbl_80752844@ha
    li r3, 0x110
    addi r5, r5, lbl_80752844@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80402978_00000BC8
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r4, lbl_8078D1F8@ha
    li r3, 0xa
    addi r4, r4, lbl_8078D1F8@l
    stw r4, 0x0(r31)
    li r0, 0x0
    stw r3, 0xfc(r31)
    stw r0, 0x100(r31)
    stw r30, 0x104(r31)
    stw r0, 0x108(r31)
    stw r0, 0x10c(r31)
    lfs f2, 0xc(r30)
    psq_l f1, 0x4(r30), 0, 0
    psq_st f1, 0x6c(r31), 0, 0
    stfs f2, 0x74(r31)
    lfs f0, 0x14(r30)
    stfs f0, 0x7c(r31)
lbl_fn_80402978_00000BC8:
    mr r3, r31
    b lbl_fn_80402978_00000BD4
lbl_fn_80402978_00000BD0:
    li r3, 0x0
lbl_fn_80402978_00000BD4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80402A40(void)
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
    beq lbl_fn_80402A40_00000C30
    li r4, -0x1
    addi r3, r3, 0x10
    bl fn_800971D4
    cmpwi r31, 0x0
    ble lbl_fn_80402A40_00000C30
    mr r3, r30
    bl dtor_80084684
lbl_fn_80402A40_00000C30:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80402A9C(void)
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
    beq lbl_fn_80402A9C_00000CB8
    addic. r0, r3, 0x108
    beq lbl_fn_80402A9C_00000C9C
    lwz r3, 0x10c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80402A9C_00000C90
    lis r4, fn_80402A40@ha
    addi r4, r4, fn_80402A40@l
    bl fn_80695A50
lbl_fn_80402A9C_00000C90:
    li r0, 0x0
    stw r0, 0x10c(r30)
    stw r0, 0x108(r30)
lbl_fn_80402A9C_00000C9C:
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_80402A9C_00000CB8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80402A9C_00000CB8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80402B24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    beq lbl_fn_80402B24_00000D04
    li r0, 0x1
    b lbl_fn_80402B24_00000D48
lbl_fn_80402B24_00000D04:
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80402B24_00000D38
lbl_fn_80402B24_00000D10:
    lwz r0, 0x10c(r29)
    add r3, r0, r31
    addi r3, r3, 0x10
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80402B24_00000D30
    li r0, 0x1
    b lbl_fn_80402B24_00000D48
lbl_fn_80402B24_00000D30:
    addi r30, r30, 0x1
    addi r31, r31, 0x42c
lbl_fn_80402B24_00000D38:
    lwz r0, 0xf4(r29)
    cmpw r30, r0
    blt lbl_fn_80402B24_00000D10
    li r0, 0x0
lbl_fn_80402B24_00000D48:
    cmpwi r0, 0x0
    bne lbl_fn_80402B24_00000D60
    mr r3, r29
    bl fn_80403308
    li r3, 0x1
    b lbl_fn_80402B24_00000D64
lbl_fn_80402B24_00000D60:
    li r3, 0x0
lbl_fn_80402B24_00000D64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80402BD0(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x270
    stfd f31, 0x2a0(r1)
    psq_st f31, 0x2a8(r1), 0, 0
    stfd f30, 0x290(r1)
    psq_st f30, 0x298(r1), 0, 0
    stfd f29, 0x280(r1)
    psq_st f29, 0x288(r1), 0, 0
    stfd f28, 0x270(r1)
    psq_st f28, 0x278(r1), 0, 0
    bl _savegpr_20
    mr r23, r3
    li r20, 0x0
    li r22, 0x0
    b lbl_fn_80402BD0_00000DE4
lbl_fn_80402BD0_00000DC4:
    lwz r0, 0x10c(r23)
    mr r3, r23
    mr r4, r20
    add r12, r0, r22
    bl fn_80695B00
    nop
    addi r20, r20, 0x1
    addi r22, r22, 0x42c
lbl_fn_80402BD0_00000DE4:
    lwz r0, 0xf4(r23)
    cmpw r20, r0
    blt lbl_fn_80402BD0_00000DC4
    lbz r0, 0xf8(r23)
    cmplwi r0, 0x1
    bne lbl_fn_80402BD0_0000101C
    lwz r3, 0x100(r23)
    cmpwi r3, 0x0
    ble lbl_fn_80402BD0_00000E14
    subic. r0, r3, 0x1
    stw r0, 0x100(r23)
    bgt lbl_fn_80402BD0_000013F8
lbl_fn_80402BD0_00000E14:
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x98
    addi r24, r1, 0x74
    addi r21, r1, 0x8c
    lwz r4, 0x48(r4)
    addi r26, r1, 0x68
    addi r25, r1, 0x80
    li r27, -0x1
    psq_l f1, 0x528(r4), 0, 0
    li r20, 0x0
    lfs f2, 0x530(r4)
    li r22, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
    b lbl_fn_80402BD0_00000F78
lbl_fn_80402BD0_00000E50:
    lwz r5, 0x10c(r23)
    add r4, r5, r22
    lwz r0, 0xc(r4)
    cmplwi r0, 0x1
    bne lbl_fn_80402BD0_00000F70
    cmpwi r27, -0x1
    bne lbl_fn_80402BD0_00000E74
    mr r27, r20
    b lbl_fn_80402BD0_00000F70
lbl_fn_80402BD0_00000E74:
    mulli r0, r27, 0x42c
    lfs f10, 0x74(r23)
    lfs f0, 0x3e8(r4)
    addi r3, r1, 0x50
    lfs f9, 0x70(r23)
    add r5, r5, r0
    lfs f8, 0x3e8(r5)
    fadds f12, f10, f0
    lfs f7, 0x3e4(r5)
    fadds f10, f10, f8
    lfs f0, 0x3e4(r4)
    fadds f11, f9, f7
    lfs f8, 0x6c(r23)
    fadds f13, f9, f0
    lfs f7, 0x3e0(r5)
    lfs f0, 0x3e0(r4)
    fadds f7, f8, f7
    fmr f2, f10
    stfs f11, 0x78(r1)
    fadds f0, f8, f0
    lfs f8, 0xa0(r1)
    stfs f7, 0x74(r1)
    lfs f9, 0x9c(r1)
    stfs f2, 0x94(r1)
    fmr f2, f12
    psq_l f1, 0x0(r24), 0, 0
    stfs f0, 0x68(r1)
    frsp f0, f2
    lfs f7, 0x98(r1)
    stfs f13, 0x6c(r1)
    psq_st f1, 0x0(r21), 0, 0
    fsubs f11, f8, f0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    lfs f8, 0x84(r1)
    lfs f0, 0x80(r1)
    fsubs f8, f9, f8
    stfs f10, 0x7c(r1)
    fsubs f0, f7, f0
    stfs f12, 0x70(r1)
    stfs f2, 0x88(r1)
    stfs f0, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f11, 0x58(r1)
    bl fn_805F9920
    lfs f7, 0xa0(r1)
    fmr f28, f1
    lfs f0, 0x94(r1)
    addi r3, r1, 0x5c
    lfs f9, 0x9c(r1)
    fsubs f10, f7, f0
    lfs f8, 0x90(r1)
    lfs f7, 0x98(r1)
    lfs f0, 0x8c(r1)
    fsubs f8, f9, f8
    stfs f10, 0x64(r1)
    fsubs f0, f7, f0
    stfs f8, 0x60(r1)
    stfs f0, 0x5c(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f28
    ble lbl_fn_80402BD0_00000F70
    mr r27, r20
lbl_fn_80402BD0_00000F70:
    addi r20, r20, 0x1
    addi r22, r22, 0x42c
lbl_fn_80402BD0_00000F78:
    lwz r0, 0xf4(r23)
    cmpw r20, r0
    blt lbl_fn_80402BD0_00000E50
    cmpwi r27, -0x1
    beq lbl_fn_80402BD0_0000101C
    mulli r11, r27, 0x42c
    lwz r3, 0x10c(r23)
    lis r9, lbl_8078D1C8@ha
    lfs f0, lbl_80886198
    li r0, 0x2
    add r3, r3, r11
    lfs f2, 0x3e8(r3)
    addi r9, r9, lbl_8078D1C8@l
    psq_l f1, 0x3e0(r3), 0, 0
    li r4, 0x0
    psq_st f1, 0x3f8(r3), 0, 0
    li r5, 0x1
    lfs f1, lbl_8088619C
    li r6, 0x1
    stfs f2, 0x400(r3)
    li r7, 0x0
    lfs f2, lbl_808861A0
    li r8, 0x1
    lwz r3, 0x10c(r23)
    add r3, r3, r11
    stfs f0, 0x428(r3)
    lwz r3, 0x10c(r23)
    add r3, r3, r11
    stw r0, 0xc(r3)
    lwz r3, 0x10c(r23)
    lwz r0, 0x4(r9)
    add r10, r3, r11
    lwz r3, 0x0(r9)
    stw r3, 0x0(r10)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0x10c(r23)
    add r3, r0, r11
    addi r3, r3, 0x10
    bl fn_80097C08
lbl_fn_80402BD0_0000101C:
    lwz r3, lbl_8087F430
    li r4, 0x0
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_80402BD0_00001054
    lbz r0, 0xf8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_80402BD0_00001054
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x0
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80402BD0_00001054:
    lis r30, lbl_807C7060@ha
    lfs f28, lbl_80886198
    lfs f29, lbl_8088619C
    addi r26, r1, 0xb8
    addi r30, r30, lbl_807C7060@l
    addi r31, r1, 0x208
    addi r29, r1, 0x1d8
    addi r27, r1, 0x118
    addi r28, r1, 0x178
    addi r25, r1, 0xa4
    li r24, 0x0
    li r22, 0x0
    li r21, 0x0
    b lbl_fn_80402BD0_000013EC
lbl_fn_80402BD0_0000108C:
    lwz r0, 0x10c(r23)
    add r3, r0, r22
    addi r3, r3, 0x10
    bl fn_80092A4C
    lwz r0, 0x10c(r23)
    add r3, r0, r22
    lwz r0, 0xc(r3)
    cmplwi r0, 0x1
    beq lbl_fn_80402BD0_000013E4
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    lfs f7, 0x80(r23)
    lfs f0, 0x3f4(r3)
    lfs f9, 0x7c(r23)
    fadds f1, f7, f0
    lfs f8, 0x3f0(r3)
    lfs f7, 0x78(r23)
    lfs f0, 0x3ec(r3)
    fadds f8, f9, f8
    fcmpu cr0, f28, f1
    fadds f0, f7, f0
    stfs f8, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x4c(r1)
    stfs f28, 0x204(r1)
    stfs f28, 0x1fc(r1)
    stfs f28, 0x1f8(r1)
    stfs f28, 0x1f4(r1)
    stfs f28, 0x1f0(r1)
    stfs f28, 0x1e8(r1)
    stfs f28, 0x1e4(r1)
    stfs f28, 0x1e0(r1)
    stfs f28, 0x1dc(r1)
    stfs f29, 0x200(r1)
    stfs f29, 0x1ec(r1)
    stfs f29, 0x1d8(r1)
    beq lbl_fn_80402BD0_00001194
    addi r3, r1, 0xe8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xe8
    addi r5, r1, 0xb8
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80402BD0_00001194:
    lfs f1, 0x48(r1)
    fcmpu cr0, f28, f1
    beq lbl_fn_80402BD0_000011EC
    addi r3, r1, 0x148
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80402BD0_000011EC:
    lfs f1, 0x44(r1)
    fcmpu cr0, f28, f1
    beq lbl_fn_80402BD0_00001244
    addi r3, r1, 0x1a8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80402BD0_00001244:
    addi r4, r1, 0x208
    addi r3, r1, 0x1d8
    mr r5, r4
    bl fn_805F89F0
    lwz r0, 0x10c(r23)
    addi r3, r1, 0x14
    lfs f7, 0x74(r23)
    add r20, r0, r22
    lfs f9, 0x70(r23)
    lfs f0, 0x3e8(r20)
    lfs f8, 0x3e4(r20)
    fadds f10, f7, f0
    lfs f7, 0x6c(r23)
    lfs f0, 0x3e0(r20)
    fadds f8, f9, f8
    psq_l f3, 0x10(r31), 0, 0
    fadds f0, f7, f0
    stfs f8, 0x224(r1)
    psq_l f5, 0x20(r31), 0, 0
    stfs f0, 0x214(r1)
    psq_l f4, 0x18(r31), 0, 0
    stfs f10, 0x234(r1)
    psq_l f2, 0x8(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x18(r20), 0, 0
    psq_st f2, 0x20(r20), 0, 0
    psq_st f3, 0x28(r20), 0, 0
    psq_st f4, 0x30(r20), 0, 0
    psq_st f5, 0x38(r20), 0, 0
    psq_st f6, 0x40(r20), 0, 0
    lfs f11, 0x230(r1)
    lfs f9, 0x220(r1)
    lfs f7, 0x210(r1)
    stfs f0, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f7, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f11, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x22c(r1)
    fmr f30, f1
    lfs f7, 0x21c(r1)
    addi r3, r1, 0x20
    lfs f0, 0x20c(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x228(r1)
    fmr f31, f1
    lfs f7, 0x218(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x208(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_80402BD0_00001350
    b lbl_fn_80402BD0_00001354
lbl_fn_80402BD0_00001350:
    fmr f7, f0
lbl_fn_80402BD0_00001354:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80402BD0_00001364
    b lbl_fn_80402BD0_0000137C
lbl_fn_80402BD0_00001364:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80402BD0_00001378
    b lbl_fn_80402BD0_0000137C
lbl_fn_80402BD0_00001378:
    fmr f8, f0
lbl_fn_80402BD0_0000137C:
    stfs f8, 0x64(r20)
    li r4, 0x1
    lwz r0, 0x10c(r23)
    add r3, r0, r22
    addi r3, r3, 0x10
    bl fn_80097E80
    stw r21, 0xa4(r1)
    addi r4, r1, 0xa4
    lwz r0, 0x10c(r23)
    add r3, r0, r22
    addi r3, r3, 0x10
    bl fn_8000D430
    cmpwi r25, 0x0
    beq lbl_fn_80402BD0_000013E4
    lwz r3, 0xa4(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80402BD0_000013E4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80402BD0_000013E0
    addi r3, r25, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80402BD0_000013E0:
    stw r21, 0xa4(r1)
lbl_fn_80402BD0_000013E4:
    addi r24, r24, 0x1
    addi r22, r22, 0x42c
lbl_fn_80402BD0_000013EC:
    lwz r0, 0xf4(r23)
    cmpw r24, r0
    blt lbl_fn_80402BD0_0000108C
lbl_fn_80402BD0_000013F8:
    addi r11, r1, 0x270
    psq_l f31, 0x2a8(r1), 0, 0
    lfd f31, 0x2a0(r1)
    psq_l f30, 0x298(r1), 0, 0
    lfd f30, 0x290(r1)
    psq_l f29, 0x288(r1), 0, 0
    lfd f29, 0x280(r1)
    psq_l f28, 0x278(r1), 0, 0
    lfd f28, 0x270(r1)
    bl _restgpr_20
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

asm void fn_80403280(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_80403280_00001490
lbl_fn_80403280_00001458:
    lwz r0, 0x10c(r29)
    add r4, r0, r31
    lwz r0, 0xc(r4)
    cmplwi r0, 0x4
    beq lbl_fn_80403280_00001488
    lwz r3, lbl_8087F0A8
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80403280_00001488
    mr r3, r29
    addi r4, r4, 0x10
    bl fn_803ED774
lbl_fn_80403280_00001488:
    addi r30, r30, 0x1
    addi r31, r31, 0x42c
lbl_fn_80403280_00001490:
    lwz r0, 0xf4(r29)
    cmpw r30, r0
    blt lbl_fn_80403280_00001458
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80403308(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x240
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stfd f29, 0x2a0(r1)
    psq_st f29, 0x2a8(r1), 0, 0
    stfd f28, 0x290(r1)
    psq_st f28, 0x298(r1), 0, 0
    stfd f27, 0x280(r1)
    psq_st f27, 0x288(r1), 0, 0
    stfd f26, 0x270(r1)
    psq_st f26, 0x278(r1), 0, 0
    stfd f25, 0x260(r1)
    psq_st f25, 0x268(r1), 0, 0
    stfd f24, 0x250(r1)
    psq_st f24, 0x258(r1), 0, 0
    stfd f23, 0x240(r1)
    psq_st f23, 0x248(r1), 0, 0
    bl _savegpr_16
    lwz r0, 0xfc(r3)
    lis r4, lbl_80752830@ha
    li r27, 0x0
    lis r5, 0x4178
    lis r28, lbl_8078D1D4@ha
    lis r21, lbl_807C7060@ha
    stb r27, 0xf8(r3)
    mr r18, r3
    lfs f25, lbl_8088619C
    mr r17, r27
    stw r0, 0x100(r3)
    addi r28, r28, lbl_8078D1D4@l
    lfs f26, lbl_808861A4
    addi r30, r5, 0x749f
    lfd f27, lbl_80752830@l(r4)
    addi r25, r1, 0x1b8
    lfs f28, lbl_808861AC
    addi r21, r21, lbl_807C7060@l
    lfs f29, lbl_808861A8
    addi r20, r1, 0x68
    lfs f30, lbl_808861B0
    addi r22, r1, 0x98
    lfs f31, lbl_80886198
    addi r24, r1, 0x158
    addi r23, r1, 0xf8
    addi r26, r1, 0x50
    li r19, 0x0
    li r29, 0x1
    lis r31, 0x4330
    b lbl_fn_80403308_00001A14
lbl_fn_80403308_0000158C:
    lwz r3, 0x10c(r18)
    fmr f1, f25
    lwz r0, 0x4(r28)
    li r4, 0x0
    add r9, r3, r17
    lwz r3, 0x0(r28)
    stw r3, 0x0(r9)
    lfs f2, lbl_808861A0
    li r5, 0x0
    stw r0, 0x4(r9)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    lwz r0, 0x8(r28)
    stw r0, 0x8(r9)
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    stw r29, 0x35c(r3)
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    stfs f25, 0x25c(r3)
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    stfs f26, 0x248(r3)
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    addi r3, r3, 0x10
    bl fn_80097C08
    lwz r0, 0x10c(r18)
    li r4, 0x0
    add r3, r0, r17
    addi r3, r3, 0x10
    bl fn_80097D7C
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    stfs f1, 0x244(r3)
    bl fn_80680CF8
    mulhw r0, r30, r3
    stw r31, 0x1e8(r1)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1ec(r1)
    lfd f0, 0x1e8(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f28
    fmsubs f23, f29, f0, f30
    bl fn_80680CF8
    mulhw r4, r30, r3
    lwz r0, 0x10c(r18)
    stw r31, 0x1f0(r1)
    add r5, r0, r17
    srawi r0, r4, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f28
    fmsubs f0, f29, f0, f30
    stfs f0, 0x3e0(r5)
    stfs f31, 0x3e4(r5)
    stfs f23, 0x3e8(r5)
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    stfs f31, 0x3ec(r3)
    stfs f31, 0x3f0(r3)
    stfs f31, 0x3f4(r3)
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    stw r29, 0xc(r3)
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    addi r3, r3, 0x10
    bl fn_80092A4C
    psq_l f1, 0x0(r21), 0, 0
    psq_l f2, 0x8(r21), 0, 0
    psq_l f3, 0x10(r21), 0, 0
    psq_l f4, 0x18(r21), 0, 0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
    lwz r0, 0x10c(r18)
    lfs f7, 0x80(r18)
    add r3, r0, r17
    lfs f9, 0x7c(r18)
    lfs f0, 0x3f4(r3)
    lfs f8, 0x3f0(r3)
    fadds f1, f7, f0
    lfs f7, 0x78(r18)
    lfs f0, 0x3ec(r3)
    fadds f8, f9, f8
    stfs f1, 0x10(r1)
    fadds f0, f7, f0
    fcmpu cr0, f31, f1
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f31, 0xc4(r1)
    stfs f31, 0xbc(r1)
    stfs f31, 0xb8(r1)
    stfs f31, 0xb4(r1)
    stfs f31, 0xb0(r1)
    stfs f31, 0xa8(r1)
    stfs f31, 0xa4(r1)
    stfs f31, 0xa0(r1)
    stfs f31, 0x9c(r1)
    stfs f25, 0xc0(r1)
    stfs f25, 0xac(r1)
    stfs f25, 0x98(r1)
    beq lbl_fn_80403308_000017BC
    addi r3, r1, 0x188
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x188
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_80403308_000017BC:
    lfs f1, 0xc(r1)
    fcmpu cr0, f31, f1
    beq lbl_fn_80403308_00001814
    addi r3, r1, 0x128
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x128
    addi r5, r1, 0x158
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_80403308_00001814:
    lfs f1, 0x8(r1)
    fcmpu cr0, f31, f1
    beq lbl_fn_80403308_0000186C
    addi r3, r1, 0xc8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0xc8
    addi r5, r1, 0xf8
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_80403308_0000186C:
    addi r4, r1, 0x68
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F89F0
    lwz r0, 0x10c(r18)
    addi r3, r1, 0x38
    lfs f7, 0x74(r18)
    add r16, r0, r17
    lfs f9, 0x70(r18)
    lfs f0, 0x3e8(r16)
    lfs f8, 0x3e4(r16)
    fadds f11, f7, f0
    lfs f7, 0x6c(r18)
    lfs f0, 0x3e0(r16)
    fadds f10, f9, f8
    psq_l f3, 0x10(r20), 0, 0
    fadds f9, f7, f0
    stfs f10, 0x84(r1)
    psq_l f5, 0x20(r20), 0, 0
    stfs f9, 0x74(r1)
    psq_l f4, 0x18(r20), 0, 0
    stfs f11, 0x94(r1)
    psq_l f2, 0x8(r20), 0, 0
    psq_l f6, 0x28(r20), 0, 0
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x18(r16), 0, 0
    psq_st f2, 0x20(r16), 0, 0
    psq_st f3, 0x28(r16), 0, 0
    psq_st f4, 0x30(r16), 0, 0
    psq_st f5, 0x38(r16), 0, 0
    psq_st f6, 0x40(r16), 0, 0
    lfs f0, 0x90(r1)
    lfs f7, 0x80(r1)
    lfs f8, 0x70(r1)
    stfs f9, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_805F9940
    lfs f0, 0x8c(r1)
    fmr f23, f1
    lfs f7, 0x7c(r1)
    addi r3, r1, 0x2c
    lfs f8, 0x6c(r1)
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F9940
    lfs f0, 0x88(r1)
    fmr f24, f1
    lfs f7, 0x78(r1)
    addi r3, r1, 0x20
    lfs f8, 0x68(r1)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    frsp f7, f24
    stfs f1, 0x44(r1)
    frsp f0, f23
    stfs f24, 0x48(r1)
    fcmpo cr0, f7, f0
    stfs f23, 0x4c(r1)
    ble lbl_fn_80403308_00001978
    b lbl_fn_80403308_0000197C
lbl_fn_80403308_00001978:
    fmr f7, f0
lbl_fn_80403308_0000197C:
    lfs f8, 0x44(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80403308_0000198C
    b lbl_fn_80403308_000019A4
lbl_fn_80403308_0000198C:
    lfs f8, 0x48(r1)
    lfs f0, 0x4c(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80403308_000019A0
    b lbl_fn_80403308_000019A4
lbl_fn_80403308_000019A0:
    fmr f8, f0
lbl_fn_80403308_000019A4:
    stfs f8, 0x64(r16)
    li r4, 0x1
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    addi r3, r3, 0x10
    bl fn_80097E80
    stw r27, 0x50(r1)
    addi r4, r1, 0x50
    lwz r0, 0x10c(r18)
    add r3, r0, r17
    addi r3, r3, 0x10
    bl fn_8000D430
    cmpwi r26, 0x0
    beq lbl_fn_80403308_00001A0C
    lwz r3, 0x50(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80403308_00001A0C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80403308_00001A08
    addi r3, r26, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80403308_00001A08:
    stw r27, 0x50(r1)
lbl_fn_80403308_00001A0C:
    addi r19, r19, 0x1
    addi r17, r17, 0x42c
lbl_fn_80403308_00001A14:
    lwz r0, 0xf4(r18)
    cmpw r19, r0
    blt lbl_fn_80403308_0000158C
    addi r11, r1, 0x240
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    psq_l f29, 0x2a8(r1), 0, 0
    lfd f29, 0x2a0(r1)
    psq_l f28, 0x298(r1), 0, 0
    lfd f28, 0x290(r1)
    psq_l f27, 0x288(r1), 0, 0
    lfd f27, 0x280(r1)
    psq_l f26, 0x278(r1), 0, 0
    lfd f26, 0x270(r1)
    psq_l f25, 0x268(r1), 0, 0
    lfd f25, 0x260(r1)
    psq_l f24, 0x258(r1), 0, 0
    lfd f24, 0x250(r1)
    psq_l f23, 0x248(r1), 0, 0
    lfd f23, 0x240(r1)
    bl _restgpr_16
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}
