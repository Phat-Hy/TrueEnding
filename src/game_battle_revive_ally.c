#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_800846FC(void);
extern void fn_8008AD4C(void);
extern void fn_8009076C(void);
extern void fn_80092A4C(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097E80(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_80402A40(void);
extern void fn_804052EC(void);
extern void fn_804058A4(void);
extern void fn_80405A14(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F89F0(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068B100(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80752830[];
extern u8 lbl_80752844[];
extern u8 lbl_80752880[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D1E0[];
extern u8 lbl_8078D1EC[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF68;
extern u32 lbl_8087DF6C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886198;
extern u32 lbl_8088619C;
extern u32 lbl_808861A0;
extern u32 lbl_808861AC;
extern u32 lbl_808861B0;
extern u32 lbl_808861B4;
extern u32 lbl_808861B8;
extern u32 lbl_808861BC;
extern u32 lbl_808861C0;
extern u32 lbl_808861C4;
extern u32 lbl_808861C8;
extern u32 lbl_808861CC;
extern u32 lbl_808861D0;
extern u32 lbl_808861D4;
extern u32 lbl_808861D8;
extern u32 lbl_808861DC;
extern u32 lbl_808861E0;
extern u32 lbl_808861E4;
extern u32 lbl_808861E8;
extern u32 lbl_808861F0;
extern u32 lbl_808861F4;
extern u32 lbl_808861FC;
extern u32 lbl_80886200;
extern u32 lbl_80886204;
extern u32 lbl_80886208;
extern u32 lbl_8088620C;
extern u32 lbl_80886210;
extern u32 lbl_80886214;

/* Function declarations */
void fn_804038D0(void);
void fn_80403B58(void);
void fn_80403B94(void);
void fn_80403BF4(void);
void fn_80403BF8(void);
void fn_80403BFC(void);
void fn_80404064(void);
void fn_80404290(void);
void fn_804047A4(void);
void fn_80404864(void);
void fn_804048CC(void);
void fn_80404E70(void);
void fn_804050C0(void);

asm void fn_804038D0(void)
{
    nofralloc
    stwu r1, -0x950(r1)
    mflr r0
    stw r0, 0x954(r1)
    stw r31, 0x94c(r1)
    mr r31, r3
    addi r3, r3, 0x60
    stw r30, 0x948(r1)
    stw r29, 0x944(r1)
    stw r28, 0x940(r1)
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x308(r1)
    mr r30, r3
    addi r3, r1, 0x318
    stw r0, 0x30c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x310(r1)
    stw r0, 0x314(r1)
    stw r0, 0x938(r1)
    bl memset
    addi r3, r1, 0x918
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x308(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x308
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x308
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x308(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r3, lbl_80752844@ha
    addi r30, r3, lbl_80752844@l
lbl_fn_804038D0_000000B4:
    addi r3, r1, 0x308
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804038D0_00000180
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804038D0_00000100
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r29, r3
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x208
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_804038D0_00000100:
    mr r3, r28
    addi r4, r30, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804038D0_0000015C
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r29, r3
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x108
    addi r5, r5, 0x1
    bl memcpy
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r29, r3
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_804038D0_0000015C:
    mr r3, r28
    addi r4, r30, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804038D0_00000180
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xf4(r31)
lbl_fn_804038D0_00000180:
    addi r3, r1, 0x308
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804038D0_000000B4
    lwz r3, 0x10c(r31)
    lwz r29, 0xf4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804038D0_000001AC
    lis r4, fn_80402A40@ha
    addi r4, r4, fn_80402A40@l
    bl fn_80695A50
lbl_fn_804038D0_000001AC:
    cmpwi r29, 0x0
    stw r29, 0x108(r31)
    beq lbl_fn_804038D0_000001F8
    mulli r3, r29, 0x42c
    li r4, 0x0
    la r5, lbl_8087DF6C
    la r6, lbl_8087DF68
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80403B58@ha
    lis r5, fn_80402A40@ha
    mr r7, r29
    li r6, 0x42c
    addi r4, r4, fn_80403B58@l
    addi r5, r5, fn_80402A40@l
    bl fn_80695720
    stw r3, 0x10c(r31)
    b lbl_fn_804038D0_00000200
lbl_fn_804038D0_000001F8:
    li r0, 0x0
    stw r0, 0x10c(r31)
lbl_fn_804038D0_00000200:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_804038D0_0000025C
lbl_fn_804038D0_0000020C:
    lwz r0, 0x10c(r31)
    addi r4, r1, 0x208
    li r5, 0x0
    add r3, r0, r30
    addi r3, r3, 0x10
    bl fn_8008AD4C
    lwz r0, 0x10c(r31)
    addi r5, r1, 0x108
    li r4, 0x0
    add r3, r0, r30
    addi r3, r3, 0x10
    bl fn_80097A88
    lwz r0, 0x10c(r31)
    addi r5, r1, 0x8
    li r4, 0x1
    add r3, r0, r30
    addi r3, r3, 0x10
    bl fn_80097A88
    addi r29, r29, 0x1
    addi r30, r30, 0x42c
lbl_fn_804038D0_0000025C:
    lwz r0, 0xf4(r31)
    cmpw r29, r0
    blt lbl_fn_804038D0_0000020C
    lwz r0, 0x954(r1)
    lwz r31, 0x94c(r1)
    lwz r30, 0x948(r1)
    lwz r29, 0x944(r1)
    lwz r28, 0x940(r1)
    mtlr r0
    addi r1, r1, 0x950
    blr
}

asm void fn_80403B58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x8
    li r5, 0x20
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x10
    bl fn_80096E94
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80403B94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_fn_80403B94_000002F4
lbl_fn_80403B94_000002E4:
    mr r3, r30
    mr r4, r31
    bl fn_80404290
    addi r31, r31, 0x1
lbl_fn_80403B94_000002F4:
    lwz r0, 0xf4(r30)
    cmpw r31, r0
    blt lbl_fn_80403B94_000002E4
    li r0, 0x1
    stb r0, 0xf8(r30)
    li r3, 0x0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80403BF4(void)
{
    nofralloc
    blr
}

asm void fn_80403BF8(void)
{
    nofralloc
    blr
}

asm void fn_80403BFC(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    bl _savegpr_25
    mulli r25, r4, 0x42c
    lwz r0, 0x10c(r3)
    mr r29, r3
    mr r30, r4
    add r3, r0, r25
    addi r3, r3, 0x404
    bl fn_805F9940
    lfs f0, lbl_808861B4
    mr r31, r25
    lwz r0, 0x10c(r29)
    addi r3, r1, 0x74
    fdivs f0, f0, f1
    lfs f6, lbl_808861B8
    add r5, r0, r25
    lfs f8, lbl_8088619C
    addi r4, r1, 0x50
    stfs f0, 0x424(r5)
    lwz r0, 0x10c(r29)
    add r6, r0, r31
    lfs f3, 0x428(r6)
    mr r5, r6
    lfs f0, 0x424(r6)
    lfs f7, 0x400(r6)
    fadds f0, f3, f0
    lfs f4, 0x418(r6)
    lfs f3, 0x40c(r6)
    fadds f11, f7, f4
    lfs f9, 0x3fc(r6)
    fadds f31, f7, f3
    lfs f2, 0x400(r6)
    lfs f4, 0x414(r6)
    lfs f3, 0x408(r6)
    frsp f5, f2
    fadds f12, f9, f4
    psq_l f1, 0x3f8(r5), 0, 0
    fadds f30, f9, f3
    lfs f7, 0x3f8(r6)
    lfs f4, 0x410(r6)
    lfs f3, 0x404(r6)
    psq_st f1, 0x0(r3), 0, 0
    fadds f13, f7, f4
    fadds f29, f7, f3
    stfs f0, 0x428(r6)
    lfs f4, 0x78(r1)
    lwz r0, 0x10c(r29)
    lfs f3, 0x74(r1)
    add r3, r0, r31
    stfs f12, 0x6c(r1)
    lfs f0, 0x428(r3)
    stfs f13, 0x68(r1)
    fmuls f10, f0, f0
    stfs f29, 0x5c(r1)
    fsubs f7, f8, f0
    fmuls f9, f6, f0
    fmuls f28, f30, f10
    stfs f11, 0x70(r1)
    fmuls f6, f7, f7
    fmuls f7, f9, f7
    stfs f28, 0x24(r1)
    fmuls f29, f29, f10
    fmuls f4, f4, f6
    stfs f2, 0x7c(r1)
    fmuls f12, f12, f7
    fmuls f9, f13, f7
    stfs f30, 0x60(r1)
    fmuls f3, f3, f6
    fmuls f7, f11, f7
    stfs f9, 0x2c(r1)
    fmuls f5, f5, f6
    fadds f13, f4, f12
    stfs f31, 0x64(r1)
    fadds f11, f3, f9
    fmuls f10, f31, f10
    stfs f29, 0x20(r1)
    fadds f9, f13, f28
    fadds f6, f5, f7
    stfs f10, 0x28(r1)
    fadds f28, f11, f29
    stfs f9, 0x54(r1)
    fcmpo cr0, f0, f8
    fadds f2, f6, f10
    stfs f28, 0x50(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x3e0(r3), 0, 0
    stfs f12, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f11, 0x44(r1)
    stfs f13, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x3e8(r3)
    cror eq, gt, eq
    bne lbl_fn_80403BFC_0000075C
    lwz r0, 0x10c(r29)
    addi r3, r1, 0x8
    add r4, r0, r31
    lfs f2, 0x3e8(r4)
    psq_l f1, 0x3e0(r4), 0, 0
    psq_st f1, 0x3f8(r4), 0, 0
    stfs f2, 0x400(r4)
    lwz r0, 0x10c(r29)
    add r4, r0, r31
    lfs f5, 0x408(r4)
    lfs f4, 0x414(r4)
    lfs f3, 0x404(r4)
    fsubs f5, f5, f4
    lfs f0, 0x410(r4)
    lfs f4, 0x40c(r4)
    fsubs f3, f3, f0
    lfs f0, 0x418(r4)
    stfs f5, 0xc(r1)
    fsubs f2, f4, f0
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x410(r4), 0, 0
    stfs f2, 0x418(r4)
    lwz r0, 0x10c(r29)
    stfs f2, 0x10(r1)
    add r25, r0, r31
    bl fn_80680CF8
    lis r26, 0x4178
    lis r28, 0x4330
    addi r0, r26, 0x749f
    lis r27, lbl_80752830@ha
    mulhw r0, r0, r3
    stw r28, 0x80(r1)
    lfd f7, lbl_80752830@l(r27)
    lfs f5, lbl_808861AC
    lfs f4, lbl_808861C0
    lfs f3, lbl_808861BC
    srawi r0, r0, 8
    lfs f0, 0x410(r25)
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f6, 0x80(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmadds f3, f4, f5, f3
    fmuls f0, f0, f3
    stfs f0, 0x410(r25)
    lwz r0, 0x10c(r29)
    add r25, r0, r31
    bl fn_80680CF8
    addi r0, r26, 0x749f
    stw r28, 0x88(r1)
    mulhw r0, r0, r3
    lfd f7, lbl_80752830@l(r27)
    lfs f5, lbl_808861AC
    lfs f4, lbl_808861C0
    lfs f3, lbl_808861BC
    lfs f0, 0x418(r25)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x8c(r1)
    lfd f6, 0x88(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmadds f3, f4, f5, f3
    fmuls f0, f0, f3
    stfs f0, 0x418(r25)
    lwz r0, 0x10c(r29)
    add r3, r0, r31
    addi r3, r3, 0x410
    mr r4, r3
    bl fn_805F98D0
    lwz r0, 0x10c(r29)
    lis r4, lbl_8078D1E0@ha
    lfs f7, lbl_808861C4
    addi r3, r1, 0x14
    add r6, r0, r31
    lfs f4, lbl_808861C8
    lfs f0, 0x410(r6)
    mulli r30, r30, 0x42c
    lfs f6, lbl_808861B8
    li r5, 0x3
    fmuls f5, f0, f7
    lfs f3, lbl_808861CC
    lfs f0, lbl_80886198
    stfs f5, 0x410(r6)
    addi r4, r4, lbl_8078D1E0@l
    lfs f5, 0x414(r6)
    fmuls f5, f5, f7
    stfs f5, 0x414(r6)
    lfs f5, 0x418(r6)
    fmuls f5, f5, f7
    stfs f5, 0x418(r6)
    lwz r0, 0x10c(r29)
    add r6, r0, r31
    lfs f5, 0x414(r6)
    fadds f4, f5, f4
    stfs f4, 0x414(r6)
    lwz r0, 0x10c(r29)
    add r6, r0, r31
    lfs f5, 0x414(r6)
    lfs f4, 0x410(r6)
    fmuls f7, f5, f6
    lfs f5, 0x418(r6)
    fmuls f4, f4, f6
    stfs f7, 0x18(r1)
    fmuls f2, f5, f6
    stfs f4, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x404(r6), 0, 0
    stfs f2, 0x40c(r6)
    lwz r0, 0x10c(r29)
    stfs f2, 0x1c(r1)
    add r3, r0, r30
    lfs f4, 0x408(r3)
    fadds f3, f4, f3
    stfs f3, 0x408(r3)
    lwz r0, 0x10c(r29)
    add r3, r0, r30
    stfs f0, 0x428(r3)
    lwz r0, 0x10c(r29)
    add r3, r0, r30
    stw r5, 0xc(r3)
    lwz r3, 0x10c(r29)
    lwz r0, 0x4(r4)
    add r5, r3, r30
    lwz r3, 0x0(r4)
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0x10c(r29)
    add r3, r0, r30
    addi r3, r3, 0x404
    bl fn_805F9940
    lfs f0, lbl_808861B4
    li r4, 0x0
    lwz r0, 0x10c(r29)
    li r5, 0x1
    fdivs f0, f0, f1
    lfs f1, lbl_8088619C
    add r3, r0, r30
    lfs f2, lbl_808861A0
    li r6, 0x1
    li r7, 0x0
    stfs f0, 0x424(r3)
    li r8, 0x1
    lwz r0, 0x10c(r29)
    add r3, r0, r30
    addi r3, r3, 0x10
    bl fn_80097C08
lbl_fn_80403BFC_0000075C:
    addi r11, r1, 0xb0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    bl _restgpr_25
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80404064(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    mulli r30, r4, 0x42c
    stw r29, 0x74(r1)
    mr r29, r4
    lwz r0, 0x10c(r3)
    add r3, r0, r30
    addi r3, r3, 0x404
    bl fn_805F9940
    lfs f0, lbl_808861B4
    mr r6, r30
    lwz r0, 0x10c(r31)
    addi r3, r1, 0x5c
    fdivs f0, f0, f1
    lfs f6, lbl_808861B8
    add r5, r0, r30
    lfs f8, lbl_8088619C
    addi r4, r1, 0x38
    stfs f0, 0x424(r5)
    lwz r0, 0x10c(r31)
    add r7, r0, r6
    lfs f3, 0x428(r7)
    mr r5, r7
    lfs f0, 0x424(r7)
    lfs f7, 0x400(r7)
    fadds f0, f3, f0
    lfs f4, 0x418(r7)
    lfs f3, 0x40c(r7)
    fadds f11, f7, f4
    lfs f9, 0x3fc(r7)
    fadds f31, f7, f3
    lfs f2, 0x400(r7)
    lfs f4, 0x414(r7)
    lfs f3, 0x408(r7)
    frsp f5, f2
    fadds f12, f9, f4
    psq_l f1, 0x3f8(r5), 0, 0
    fadds f30, f9, f3
    lfs f7, 0x3f8(r7)
    lfs f4, 0x410(r7)
    lfs f3, 0x404(r7)
    psq_st f1, 0x0(r3), 0, 0
    fadds f13, f7, f4
    fadds f29, f7, f3
    stfs f0, 0x428(r7)
    lfs f4, 0x60(r1)
    lwz r0, 0x10c(r31)
    lfs f3, 0x5c(r1)
    add r3, r0, r6
    stfs f12, 0x54(r1)
    lfs f0, 0x428(r3)
    stfs f13, 0x50(r1)
    fmuls f10, f0, f0
    stfs f29, 0x44(r1)
    fsubs f7, f8, f0
    fmuls f9, f6, f0
    fmuls f28, f30, f10
    stfs f11, 0x58(r1)
    fmuls f6, f7, f7
    fmuls f7, f9, f7
    stfs f28, 0xc(r1)
    fmuls f29, f29, f10
    fmuls f4, f4, f6
    stfs f2, 0x64(r1)
    fmuls f12, f12, f7
    fmuls f9, f13, f7
    stfs f30, 0x48(r1)
    fmuls f3, f3, f6
    fmuls f7, f11, f7
    stfs f9, 0x14(r1)
    fmuls f5, f5, f6
    fadds f13, f4, f12
    stfs f31, 0x4c(r1)
    fadds f11, f3, f9
    fmuls f10, f31, f10
    stfs f29, 0x8(r1)
    fadds f9, f13, f28
    fadds f6, f5, f7
    stfs f10, 0x10(r1)
    fadds f28, f11, f29
    stfs f9, 0x3c(r1)
    fcmpo cr0, f0, f8
    fadds f2, f6, f10
    stfs f28, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x3e0(r3), 0, 0
    stfs f12, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f11, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0x3e8(r3)
    cror eq, gt, eq
    bne lbl_fn_80404064_00000984
    lwz r0, 0x10c(r31)
    lis r4, lbl_8078D1EC@ha
    li r5, 0x4
    add r3, r0, r6
    addi r4, r4, lbl_8078D1EC@l
    stw r5, 0xc(r3)
    lwz r3, 0x10c(r31)
    lwz r0, 0x4(r4)
    add r5, r3, r6
    lwz r3, 0x0(r4)
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
lbl_fn_80404064_00000984:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80404290(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x80
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    bl _savegpr_26
    mulli r0, r4, 0x42c
    lwz r5, 0x10c(r3)
    mr r30, r3
    mr r31, r4
    add r3, r5, r0
    lfs f2, 0x3e8(r3)
    psq_l f1, 0x3e0(r3), 0, 0
    psq_st f1, 0x3f8(r3), 0, 0
    stfs f2, 0x400(r3)
    bl fn_80680CF8
    lis r27, 0x4178
    lis r29, 0x4330
    addi r0, r27, 0x749f
    lis r28, lbl_80752830@ha
    mulhw r0, r0, r3
    stw r29, 0x58(r1)
    lfd f7, lbl_80752830@l(r28)
    lfs f5, lbl_808861AC
    lfs f4, lbl_808861B0
    lfs f3, lbl_808861D0
    srawi r0, r0, 8
    lfs f0, lbl_808861D4
    srwi r4, r0, 31
    lwz r5, 0x10c(r30)
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    mulli r3, r31, 0x42c
    lfd f6, 0x58(r1)
    fsubs f6, f6, f7
    add r4, r5, r3
    fdivs f5, f6, f5
    fmsubs f3, f4, f5, f3
    fmuls f0, f0, f3
    stfs f0, 0x420(r4)
    lwz r0, 0x10c(r30)
    add r26, r0, r3
    bl fn_80680CF8
    addi r0, r27, 0x749f
    lfd f5, lbl_80752830@l(r28)
    mulhw r0, r0, r3
    stw r29, 0x60(r1)
    lfs f3, lbl_808861AC
    addi r27, r1, 0x48
    lfs f0, lbl_808861D0
    addi r5, r1, 0x3c
    srawi r0, r0, 8
    lfs f6, lbl_808861D8
    srwi r4, r0, 31
    lfs f7, lbl_808861DC
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    mulli r28, r31, 0x42c
    lfd f4, 0x60(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmuls f0, f0, f3
    stfs f0, 0x41c(r26)
    lwz r3, lbl_8087F8A0
    lwz r0, 0x10c(r30)
    lwz r26, 0x48(r3)
    add r3, r0, r28
    lfs f5, 0x70(r30)
    psq_l f1, 0x528(r26), 0, 0
    lfs f3, 0x3e4(r3)
    lfs f4, 0x6c(r30)
    lfs f0, 0x3e0(r3)
    fadds f5, f5, f3
    psq_st f1, 0x0(r27), 0, 0
    fadds f8, f4, f0
    lfs f2, 0x530(r26)
    lfs f3, 0x4c(r1)
    lfs f0, 0x48(r1)
    fsubs f9, f3, f5
    lfs f4, 0x52c(r26)
    fsubs f10, f0, f8
    lfs f3, 0x74(r30)
    lfs f0, 0x3e8(r3)
    fadds f31, f6, f4
    fadds f3, f3, f0
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    fsubs f4, f2, f3
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x50(r1)
    fmr f2, f4
    psq_st f1, 0x410(r3), 0, 0
    stfs f2, 0x418(r3)
    lwz r0, 0x10c(r30)
    stfs f5, 0x34(r1)
    add r3, r0, r28
    lfs f5, lbl_808861E0
    lfs f0, 0x410(r3)
    stfs f3, 0x38(r1)
    fmuls f0, f0, f7
    stfs f4, 0x44(r1)
    stfs f0, 0x410(r3)
    lfs f0, lbl_808861B4
    lfs f3, 0x414(r3)
    fdivs f4, f31, f0
    stfs f8, 0x30(r1)
    fmuls f6, f3, f7
    lfs f3, 0x4c(r1)
    stfs f6, 0x414(r3)
    lfs f0, 0x418(r3)
    fmuls f0, f0, f7
    stfs f0, 0x418(r3)
    lfs f0, 0x70(r30)
    lwz r0, 0x10c(r30)
    fsubs f0, f3, f0
    add r3, r0, r28
    stfs f0, 0x414(r3)
    lwz r0, 0x10c(r30)
    add r3, r0, r28
    lfs f3, 0x420(r3)
    lfs f0, 0x410(r3)
    fmadds f0, f5, f3, f0
    stfs f0, 0x410(r3)
    lwz r0, 0x10c(r30)
    add r3, r0, r28
    lfs f3, 0x41c(r3)
    lfs f0, 0x414(r3)
    fadds f3, f4, f3
    fadds f0, f0, f3
    stfs f0, 0x414(r3)
    lwz r0, 0x10c(r30)
    add r3, r0, r28
    lfs f3, 0x420(r3)
    lfs f0, 0x418(r3)
    fmadds f0, f5, f3, f0
    stfs f0, 0x418(r3)
    lfs f1, 0x7c(r30)
    bl fn_8068A850
    lfs f0, 0x7c(r30)
    frsp f30, f1
    fmr f1, f0
    bl fn_8068AD58
    frsp f0, f1
    lwz r0, 0x10c(r30)
    stfs f30, 0x14(r1)
    add r3, r0, r28
    stfs f0, 0x10(r1)
    addi r3, r3, 0x410
    bl fn_805F9940
    lwz r0, 0x10c(r30)
    frsp f0, f30
    lfs f3, 0x10(r1)
    mulli r31, r31, 0x42c
    add r4, r0, r28
    lfs f5, lbl_808861E4
    lfs f4, 0x410(r4)
    fmuls f6, f3, f1
    addi r3, r1, 0x24
    fmuls f3, f0, f1
    fmuls f0, f5, f4
    fmadds f0, f5, f6, f0
    stfs f0, 0x410(r4)
    lwz r0, 0x10c(r30)
    add r4, r0, r28
    lfs f0, 0x418(r4)
    fmuls f0, f5, f0
    fmadds f0, f5, f3, f0
    stfs f0, 0x418(r4)
    lwz r0, 0x10c(r30)
    psq_l f1, 0x528(r26), 0, 0
    add r4, r0, r31
    psq_st f1, 0x0(r27), 0, 0
    lfs f0, 0x41c(r4)
    lfs f2, 0x530(r26)
    fadds f5, f31, f0
    lfs f3, 0x4c(r1)
    lfs f4, 0x70(r30)
    lfs f0, 0x3fc(r4)
    fadds f5, f3, f5
    lfs f3, 0x6c(r30)
    fadds f6, f4, f0
    lfs f0, 0x3f8(r4)
    lfs f4, 0x74(r30)
    fadds f7, f3, f0
    lfs f0, 0x48(r1)
    fsubs f8, f5, f6
    lfs f3, 0x400(r4)
    fsubs f0, f0, f7
    stfs f8, 0x28(r1)
    fadds f3, f4, f3
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x50(r1)
    fsubs f2, f2, f3
    psq_st f1, 0x404(r4), 0, 0
    stfs f2, 0x40c(r4)
    lwz r0, 0x10c(r30)
    stfs f5, 0x4c(r1)
    add r3, r0, r31
    lfs f1, 0x420(r3)
    stfs f7, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f2, 0x2c(r1)
    bl fn_8068AD58
    lwz r0, 0x10c(r30)
    frsp f30, f1
    add r26, r0, r31
    lfs f1, 0x420(r26)
    bl fn_8068A850
    lwz r0, 0x10c(r30)
    frsp f4, f1
    lfs f0, 0x40c(r26)
    add r3, r0, r31
    fmuls f3, f0, f30
    lfs f0, 0x404(r3)
    fmsubs f0, f0, f4, f3
    stfs f0, 0x404(r3)
    lwz r0, 0x10c(r30)
    add r3, r0, r31
    lfs f1, 0x420(r3)
    bl fn_8068AD58
    lwz r0, 0x10c(r30)
    frsp f30, f1
    add r26, r0, r31
    lfs f1, 0x420(r26)
    bl fn_8068A850
    lwz r0, 0x10c(r30)
    frsp f5, f1
    lfs f3, 0x404(r26)
    add r3, r0, r31
    lfs f0, lbl_808861A0
    fmuls f4, f3, f30
    lfs f3, 0x40c(r3)
    fmadds f3, f3, f5, f4
    stfs f3, 0x40c(r3)
    lwz r0, 0x10c(r30)
    add r3, r0, r31
    lfs f5, 0x40c(r3)
    lfs f4, 0x404(r3)
    fmuls f3, f5, f5
    stfs f4, 0x10(r1)
    stfs f5, 0x14(r1)
    fmadds f3, f4, f4, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80404290_00000DDC
    lfs f3, lbl_808861D0
    fmuls f0, f4, f3
    stfs f0, 0x404(r3)
    lwz r0, 0x10c(r30)
    add r3, r0, r31
    lfs f0, 0x40c(r3)
    fmuls f0, f0, f3
    stfs f0, 0x40c(r3)
lbl_fn_80404290_00000DDC:
    lfs f3, 0x14(r1)
    lfs f0, 0x10(r1)
    fmuls f3, f3, f3
    fmadds f1, f0, f0, f3
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_8088619C
    lwz r0, 0x10c(r30)
    lfs f5, 0x10(r1)
    fdivs f6, f0, f3
    add r3, r0, r31
    lfs f4, 0x14(r1)
    lfs f3, lbl_808861D0
    lfs f0, 0x404(r3)
    fmuls f5, f5, f6
    fmuls f4, f4, f6
    stfs f5, 0x10(r1)
    fmadds f0, f3, f5, f0
    stfs f4, 0x14(r1)
    stfs f0, 0x404(r3)
    lwz r0, 0x10c(r30)
    add r3, r0, r31
    lfs f0, 0x40c(r3)
    fmadds f0, f3, f4, f0
    stfs f0, 0x40c(r3)
    lfs f1, 0x7c(r30)
    bl fn_8068A850
    lfs f0, 0x7c(r30)
    frsp f30, f1
    fmr f1, f0
    bl fn_8068AD58
    lfs f0, 0x14(r1)
    frsp f5, f1
    lfs f3, 0x10(r1)
    fmuls f4, f0, f30
    lfs f0, lbl_80886198
    stfs f5, 0x8(r1)
    fmadds f3, f3, f5, f4
    stfs f30, 0xc(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80404290_00000EAC
    lwz r0, 0x10c(r30)
    lfs f3, lbl_808861E8
    add r3, r0, r31
    lfs f0, 0x404(r3)
    fmuls f0, f0, f3
    stfs f0, 0x404(r3)
    lwz r0, 0x10c(r30)
    add r3, r0, r31
    lfs f0, 0x40c(r3)
    fmuls f0, f0, f3
    stfs f0, 0x40c(r3)
lbl_fn_80404290_00000EAC:
    addi r11, r1, 0x80
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    bl _restgpr_26
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804047A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x100
    li r5, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4
    bl fn_80096E94
    lfs f0, lbl_808861F0
    li r4, 0x0
    li r0, 0x3
    stfs f0, 0x3d4(r31)
    addi r3, r31, 0x430
    stfs f0, 0x3d8(r31)
    stfs f0, 0x3dc(r31)
    stfs f0, 0x3e0(r31)
    stfs f0, 0x3e4(r31)
    stfs f0, 0x3e8(r31)
    stfs f0, 0x3ec(r31)
    stfs f0, 0x3f0(r31)
    stfs f0, 0x3f4(r31)
    stfs f0, 0x3f8(r31)
    stfs f0, 0x3fc(r31)
    stfs f0, 0x400(r31)
    stfs f0, 0x404(r31)
    stfs f0, 0x408(r31)
    stfs f0, 0x40c(r31)
    stfs f0, 0x410(r31)
    stfs f0, 0x414(r31)
    stw r4, 0x418(r31)
    stw r4, 0x41c(r31)
    stw r4, 0x420(r31)
    stb r4, 0x424(r31)
    stb r4, 0x425(r31)
    stw r0, 0x428(r31)
    stw r4, 0x42c(r31)
    bl fn_800CB360
    lfs f0, lbl_808861F4
    li r0, 0x1
    stfs f0, 0x434(r31)
    mr r3, r31
    stb r0, 0x438(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80404864(void)
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
    beq lbl_fn_80404864_00000FE0
    li r4, -0x1
    addi r3, r3, 0x430
    bl fn_800CB3A0
    addi r3, r30, 0x4
    li r4, -0x1
    bl fn_800971D4
    cmpwi r31, 0x0
    ble lbl_fn_80404864_00000FE0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80404864_00000FE0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804048CC(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r30, 0x208(r1)
    lwz r0, 0x420(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804048CC_00001044
    cmpwi r0, 0x2
    beq lbl_fn_804048CC_0000104C
    cmpwi r0, 0x3
    beq lbl_fn_804048CC_00001084
    b lbl_fn_804048CC_000010B8
lbl_fn_804048CC_00001044:
    bl fn_804050C0
    b lbl_fn_804048CC_000010B8
lbl_fn_804048CC_0000104C:
    lfs f1, lbl_808861F0
    li r4, 0x0
    lfs f2, lbl_808861FC
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0x4
    bl fn_80097C08
    lfs f0, lbl_80886200
    mr r3, r31
    stfs f0, 0x23c(r31)
    bl fn_804052EC
    b lbl_fn_804048CC_000010B8
lbl_fn_804048CC_00001084:
    lfs f1, lbl_808861F0
    li r4, 0x0
    lfs f2, lbl_808861FC
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0x4
    bl fn_80097C08
    lfs f0, lbl_80886200
    mr r3, r31
    stfs f0, 0x23c(r31)
    bl fn_804058A4
lbl_fn_804048CC_000010B8:
    addi r3, r31, 0x4
    bl fn_80092A4C
    lfs f7, lbl_808861F0
    addi r30, r1, 0x1d8
    lfs f0, lbl_80886200
    stfs f7, 0x204(r1)
    stfs f7, 0x1fc(r1)
    stfs f7, 0x1f8(r1)
    stfs f7, 0x1f4(r1)
    stfs f7, 0x1f0(r1)
    stfs f7, 0x1e8(r1)
    stfs f7, 0x1e4(r1)
    stfs f7, 0x1e0(r1)
    stfs f7, 0x1dc(r1)
    stfs f0, 0x200(r1)
    stfs f0, 0x1ec(r1)
    stfs f0, 0x1d8(r1)
    lfs f1, 0x3e8(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_804048CC_00001158
    addi r3, r1, 0xb8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xb8
    addi r5, r1, 0x88
    bl fn_805F89F0
    addi r3, r1, 0x88
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_804048CC_00001158:
    lfs f0, lbl_808861F0
    lfs f1, 0x3e4(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_804048CC_000011B8
    addi r3, r1, 0x118
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x118
    addi r5, r1, 0xe8
    bl fn_805F89F0
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_804048CC_000011B8:
    lfs f0, lbl_808861F0
    lfs f1, 0x3e0(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_804048CC_00001218
    addi r3, r1, 0x178
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x178
    addi r5, r1, 0x148
    bl fn_805F89F0
    addi r3, r1, 0x148
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_804048CC_00001218:
    lfs f8, 0x3dc(r31)
    addi r3, r1, 0x68
    lfs f7, 0x3d8(r31)
    li r30, 0x1
    lfs f0, 0x3d4(r31)
    stfs f0, 0x1e4(r1)
    stfs f7, 0x1f4(r1)
    stfs f8, 0x204(r1)
    lwz r4, 0x42c(r31)
    lfs f10, 0x3dc(r31)
    addi r0, r4, 0x1
    stw r0, 0x42c(r31)
    lfs f8, 0x3d8(r31)
    lwz r4, lbl_8087EFB4
    lfs f0, 0x3d4(r31)
    lfs f11, 0x114(r4)
    lfs f9, 0x110(r4)
    lfs f7, 0x10c(r4)
    fsubs f10, f11, f10
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f10, 0x70(r1)
    stfs f0, 0x68(r1)
    stfs f8, 0x6c(r1)
    bl fn_805F9920
    lwz r0, 0x8(r31)
    ori r0, r0, 0x40
    stw r0, 0x8(r31)
    lwz r3, lbl_8087EFA8
    lfs f0, 0x21c(r3)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_804048CC_000012D0
    lfs f0, 0x218(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_804048CC_000012B0
    li r30, 0x0
    b lbl_fn_804048CC_000012D0
lbl_fn_804048CC_000012B0:
    lwz r0, 0x220(r3)
    lwz r4, 0x42c(r31)
    slwi r3, r0, 1
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    beq lbl_fn_804048CC_000012D0
    li r30, 0x0
lbl_fn_804048CC_000012D0:
    lbz r0, 0x438(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804048CC_000012F0
    cmpwi r30, 0x0
    bne lbl_fn_804048CC_000012F0
    lwz r0, 0x420(r31)
    cmpwi r0, 0x3
    bne lbl_fn_804048CC_00001444
lbl_fn_804048CC_000012F0:
    addi r4, r1, 0x1d8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x34(r31), 0, 0
    psq_st f1, 0xc(r31), 0, 0
    psq_st f2, 0x14(r31), 0, 0
    psq_st f3, 0x1c(r31), 0, 0
    psq_st f4, 0x24(r31), 0, 0
    psq_st f5, 0x2c(r31), 0, 0
    lfs f8, 0x200(r1)
    lfs f7, 0x1f0(r1)
    lfs f0, 0x1e0(r1)
    stfs f0, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f8, 0x4c(r1)
    bl fn_805F9940
    lfs f8, 0x1fc(r1)
    fmr f31, f1
    lfs f7, 0x1ec(r1)
    addi r3, r1, 0x50
    lfs f0, 0x1dc(r1)
    stfs f0, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f8, 0x58(r1)
    bl fn_805F9940
    lfs f8, 0x1f8(r1)
    fmr f30, f1
    lfs f7, 0x1e8(r1)
    addi r3, r1, 0x5c
    lfs f0, 0x1d8(r1)
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f8, 0x64(r1)
    bl fn_805F9940
    frsp f7, f30
    stfs f1, 0x38(r1)
    frsp f0, f31
    stfs f30, 0x3c(r1)
    fcmpo cr0, f7, f0
    stfs f31, 0x40(r1)
    ble lbl_fn_804048CC_000013AC
    b lbl_fn_804048CC_000013B0
lbl_fn_804048CC_000013AC:
    fmr f7, f0
lbl_fn_804048CC_000013B0:
    lfs f8, 0x38(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_804048CC_000013C0
    b lbl_fn_804048CC_000013D8
lbl_fn_804048CC_000013C0:
    lfs f8, 0x3c(r1)
    lfs f0, 0x40(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_804048CC_000013D4
    b lbl_fn_804048CC_000013D8
lbl_fn_804048CC_000013D4:
    fmr f8, f0
lbl_fn_804048CC_000013D8:
    stfs f8, 0x58(r31)
    addi r3, r31, 0x4
    li r4, 0x1
    bl fn_80097E80
    li r0, 0x0
    stw r0, 0x74(r1)
    addi r3, r31, 0x4
    addi r4, r1, 0x74
    bl fn_8000D430
    addic. r3, r1, 0x74
    beq lbl_fn_804048CC_00001438
    lwz r4, 0x74(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804048CC_00001438
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804048CC_00001430
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804048CC_00001430:
    li r0, 0x0
    stw r0, 0x74(r1)
lbl_fn_804048CC_00001438:
    li r0, 0x0
    stb r0, 0x438(r31)
    b lbl_fn_804048CC_00001578
lbl_fn_804048CC_00001444:
    psq_l f1, 0xc(r31), 0, 0
    addi r3, r1, 0x1a8
    psq_l f2, 0x14(r31), 0, 0
    mr r4, r3
    psq_l f3, 0x1c(r31), 0, 0
    psq_l f4, 0x24(r31), 0, 0
    psq_l f5, 0x2c(r31), 0, 0
    psq_l f6, 0x34(r31), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    bl fn_805F8CA0
    addi r4, r1, 0x1d8
    addi r3, r1, 0x14
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x34(r31), 0, 0
    psq_st f1, 0xc(r31), 0, 0
    psq_st f2, 0x14(r31), 0, 0
    psq_st f3, 0x1c(r31), 0, 0
    psq_st f4, 0x24(r31), 0, 0
    psq_st f5, 0x2c(r31), 0, 0
    lfs f8, 0x200(r1)
    lfs f7, 0x1f0(r1)
    lfs f0, 0x1e0(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x1fc(r1)
    fmr f30, f1
    lfs f7, 0x1ec(r1)
    addi r3, r1, 0x20
    lfs f0, 0x1dc(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x1f8(r1)
    fmr f31, f1
    lfs f7, 0x1e8(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x1d8(r1)
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
    ble lbl_fn_804048CC_0000153C
    b lbl_fn_804048CC_00001540
lbl_fn_804048CC_0000153C:
    fmr f7, f0
lbl_fn_804048CC_00001540:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_804048CC_00001550
    b lbl_fn_804048CC_00001568
lbl_fn_804048CC_00001550:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_804048CC_00001564
    b lbl_fn_804048CC_00001568
lbl_fn_804048CC_00001564:
    fmr f8, f0
lbl_fn_804048CC_00001568:
    stfs f8, 0x58(r31)
    addi r3, r31, 0x4
    addi r4, r1, 0x1a8
    bl fn_8009076C
lbl_fn_804048CC_00001578:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_80404E70(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lfs f1, 0x410(r3)
    li r31, 0x1
    lfs f0, lbl_80886204
    mr r30, r3
    fmuls f1, f1, f1
    stw r31, 0x420(r3)
    fmuls f1, f1, f0
    bl fn_8068B100
    frsp f31, f1
    bl fn_80680CF8
    lis r27, 0x4178
    lis r29, 0x4330
    addi r0, r27, 0x749f
    lis r28, lbl_80752880@ha
    mulhw r0, r0, r3
    lfs f0, 0x408(r30)
    lfs f1, lbl_80886208
    stw r29, 0x8(r1)
    fmuls f2, f1, f31
    lfd f4, lbl_80752880@l(r28)
    srawi r0, r0, 8
    stfs f0, 0x3d8(r30)
    srwi r4, r0, 31
    lfs f3, lbl_8088620C
    add r0, r0, r4
    lfs f1, 0x404(r30)
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmsubs f0, f2, f0, f31
    fadds f0, f1, f0
    stfs f0, 0x3d4(r30)
    bl fn_80680CF8
    addi r0, r27, 0x749f
    lfs f0, lbl_80886208
    mulhw r0, r0, r3
    stw r29, 0x10(r1)
    fmuls f1, f0, f31
    lfd f4, lbl_80752880@l(r28)
    lfs f2, lbl_8088620C
    lfs f0, 0x40c(r30)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f3, 0x10(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmsubs f1, f1, f2, f31
    fadds f0, f0, f1
    stfs f0, 0x3dc(r30)
    bl fn_80680CF8
    lis r4, 0xb60b
    stw r29, 0x18(r1)
    addi r0, r4, 0x60b7
    lfd f2, lbl_80752880@l(r28)
    mulhw r0, r0, r3
    lfs f0, lbl_80886210
    add r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x168
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fmuls f1, f0, f1
    stfs f1, 0x3e4(r30)
    bl fn_8068AD58
    lfs f0, 0x3e4(r30)
    frsp f2, f1
    fneg f1, f0
    stfs f2, 0x3ec(r30)
    bl fn_8068A850
    frsp f0, f1
    addi r3, r30, 0x3ec
    mr r4, r3
    stfs f0, 0x3f4(r30)
    bl fn_805F98D0
    lfs f0, lbl_80886200
    addi r3, r30, 0x4
    lfs f1, lbl_808861F0
    li r4, 0x0
    stw r31, 0x350(r30)
    li r5, 0x2
    lfs f2, lbl_808861FC
    li r6, 0x1
    stfs f0, 0x250(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x23c(r30)
    stfs f1, 0x238(r30)
    bl fn_80097C08
    lwz r0, 0x8(r30)
    ori r0, r0, 0x100
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r30)
    bl fn_80680CF8
    lfs f0, lbl_808861F0
    stw r3, 0x42c(r30)
    stfs f0, 0x414(r30)
    bl fn_80680CF8
    lis r4, 0x8889
    li r29, 0x0
    subi r0, r4, 0x7777
    stb r29, 0x424(r30)
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x418(r30)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_80404E70_000017CC
    stw r29, 0x41c(r30)
    b lbl_fn_80404E70_000017D0
lbl_fn_80404E70_000017CC:
    stw r31, 0x41c(r30)
lbl_fn_80404E70_000017D0:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804050C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lbz r0, 0x424(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804050C0_000018A4
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    beq lbl_fn_804050C0_00001838
    cmpwi r0, 0x1
    beq lbl_fn_804050C0_00001870
    b lbl_fn_804050C0_000018A4
lbl_fn_804050C0_00001838:
    lfs f1, lbl_808861F0
    addi r3, r30, 0x4
    lfs f2, lbl_808861FC
    li r4, 0x0
    li r5, 0x2
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80886214
    li r0, 0x1
    stfs f0, 0x23c(r30)
    stb r0, 0x424(r30)
    b lbl_fn_804050C0_000018A4
lbl_fn_804050C0_00001870:
    lfs f1, lbl_808861F0
    addi r3, r30, 0x4
    lfs f2, lbl_808861FC
    li r4, 0x0
    li r5, 0x3
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80886204
    li r0, 0x1
    stfs f0, 0x23c(r30)
    stb r0, 0x424(r30)
lbl_fn_804050C0_000018A4:
    lwz r4, lbl_8087F8A0
    mr r3, r30
    lwz r4, 0x48(r4)
    bl fn_80405A14
    lwz r0, 0x418(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804050C0_000019F8
    li r31, 0x0
    stb r31, 0x424(r30)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_804050C0_0000194C
    lfs f0, lbl_808861FC
    stfs f0, 0x414(r30)
    bl fn_80680CF8
    lis r4, 0x8889
    li r0, 0x2
    subi r4, r4, 0x7777
    stw r0, 0x420(r30)
    mulhw r0, r4, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x418(r30)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_804050C0_00001940
    stw r31, 0x41c(r30)
    b lbl_fn_804050C0_0000197C
lbl_fn_804050C0_00001940:
    li r0, 0x1
    stw r0, 0x41c(r30)
    b lbl_fn_804050C0_0000197C
lbl_fn_804050C0_0000194C:
    bl fn_80680CF8
    lis r4, 0x8889
    subi r0, r4, 0x7777
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x418(r30)
lbl_fn_804050C0_0000197C:
    bl fn_80680CF8
    lis r4, 0x6666
    lis r0, 0x4330
    addi r5, r4, 0x6667
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80752880@ha
    lfd f3, lbl_80752880@l(r4)
    lfs f1, lbl_80886210
    lfs f0, 0x3e4(r30)
    srawi r0, r5, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r3, r0, r3
    subi r0, r3, 0x5
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f1, f0, f1
    stfs f1, 0x3e4(r30)
    bl fn_8068AD58
    lfs f0, 0x3e4(r30)
    frsp f2, f1
    fneg f1, f0
    stfs f2, 0x3ec(r30)
    bl fn_8068A850
    frsp f0, f1
    stfs f0, 0x3f4(r30)
lbl_fn_804050C0_000019F8:
    lwz r3, 0x418(r30)
    subi r0, r3, 0x1
    stw r0, 0x418(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
