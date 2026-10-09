#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_80012774(void);
extern void fn_80013338(void);
extern void fn_80013F78(void);
extern void fn_80049B74(void);
extern void fn_8004AE84(void);
extern void fn_8004B158(void);
extern void fn_8004B1EC(void);
extern void fn_80057A68(void);
extern void fn_80063D3C(void);
extern void fn_8008B964(void);
extern void fn_800A56A8(void);
extern void fn_800C16B4(void);
extern void fn_800CB480(void);
extern void fn_800CB640(void);
extern void fn_800CB6F8(void);
extern void fn_800D089C(void);
extern void fn_800F7258(void);
extern void fn_800F7260(void);
extern void fn_800F7FF0(void);
extern void fn_800F833C(void);
extern void fn_800F84D8(void);
extern void fn_80112F54(void);
extern void fn_80113CCC(void);
extern void fn_801156BC(void);
extern void fn_801162A4(void);
extern void fn_80116E64(void);
extern void fn_8012A1E0(void);
extern void fn_8013A13C(void);
extern void fn_80221F54(void);
extern void fn_80244CAC(void);
extern void fn_802A7964(void);
extern void fn_802F0988(void);
extern void fn_802F0990(void);
extern void fn_803606CC(void);
extern void fn_80360780(void);
extern void fn_8037D34C(void);
extern void fn_8037D3E8(void);
extern void fn_80383728(void);
extern void fn_803D2134(void);
extern void fn_803D2A54(void);
extern void fn_803D6E2C(void);
extern void fn_803D6EDC(void);
extern void fn_803D6EF8(void);
extern void fn_803D6F78(void);
extern void fn_8041D23C(void);
extern void fn_8047B768(void);
extern void fn_8047BBBC(void);
extern void fn_8047BFF4(void);
extern void fn_8047C88C(void);
extern void fn_8047CB74(void);
extern void fn_8047E5D4(void);
extern void fn_8047E964(void);
extern void fn_8047F400(void);
extern void fn_8047F730(void);
extern void fn_8047FCC0(void);
extern void fn_804805AC(void);
extern void fn_804805F0(void);
extern void fn_804814E8(void);
extern void fn_804814F0(void);
extern void fn_804814F8(void);
extern void fn_804827CC(void);
extern void fn_804827D8(void);
extern void fn_80483644(void);
extern void fn_80483E80(void);
extern void fn_80484E6C(void);
extern void fn_80489280(void);
extern void fn_80491528(void);
extern void fn_805381BC(void);
extern void fn_805381CC(void);
extern void fn_80541214(void);
extern void fn_8054FAD8(void);
extern void fn_805A38F4(void);
extern void fn_805F8CA0(void);
extern void fn_8067E23C(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80756340[];
extern u8 lbl_80756380[];
extern u8 lbl_807C7028[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F448;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886F8C;
extern u32 lbl_80886F90;
extern u32 lbl_80886FB0;
extern u32 lbl_80886FD8;
extern u32 lbl_80886FE8;
extern u32 lbl_80886FF0;
extern u32 lbl_80887008;
extern u32 lbl_80887014;
extern u32 lbl_80887018;
extern u32 lbl_8088701C;
extern u32 lbl_80887020;
extern u32 lbl_80887024;
extern u32 lbl_80887028;
extern u32 lbl_8088702C;
extern u32 lbl_80887030;
extern u32 lbl_80887034;

/* Function declarations */
void fn_80487490(void);
void fn_80487BB4(void);
void fn_80487BD0(void);
void fn_80487C08(void);
void fn_80487C1C(void);
void fn_80487C3C(void);
void fn_80487FA0(void);
void fn_80488050(void);
void fn_804881B8(void);
void fn_80488534(void);
void fn_8048871C(void);
void fn_80488A74(void);
void fn_80488B5C(void);
void fn_80488D6C(void);
void fn_80488D80(void);
void fn_80488DB8(void);
void fn_80488E00(void);

asm void fn_80487490(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    mr r31, r3
    stw r30, 0x138(r1)
    lbz r0, 0x1ab1(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80487490_00000100
    lfs f2, 0x1ab4(r3)
    lfs f1, lbl_80886FF0
    lfs f0, lbl_80886F8C
    fsubs f1, f2, f1
    stfs f1, 0x1ab4(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80487490_000000A8
    bl fn_8008B964
    bl fn_800C16B4
    mr r4, r3
    addi r3, r31, 0x1bd0
    bl fn_8047C88C
    addi r3, r1, 0xa0
    addi r4, r31, 0x1ab0
    bl fn_80483E80
    lis r4, fn_804827D8@ha
    addi r3, r1, 0xc4
    addi r4, r4, fn_804827D8@l
    li r5, 0x0
    bl fn_80483644
    bl fn_804814E8
    addi r4, r1, 0xc4
    addi r5, r1, 0xa0
    bl fn_80491528
    addi r3, r1, 0xc4
    li r4, -0x1
    bl fn_8041D23C
    li r0, 0x0
    stb r0, 0x1ab1(r31)
    b lbl_fn_80487490_00000100
lbl_fn_80487490_000000A8:
    bl fn_8008B964
    bl fn_800C16B4
    lfs f1, 0x1ab4(r31)
    mr r4, r3
    addi r3, r31, 0x1bd0
    bl fn_8047CB74
    lfs f1, 0x1ab4(r31)
    addi r3, r1, 0x90
    addi r4, r31, 0x1ab0
    bl fn_80487BB4
    lis r4, fn_804827D8@ha
    addi r3, r1, 0xb0
    addi r4, r4, fn_804827D8@l
    li r5, 0x0
    bl fn_80483644
    bl fn_804814E8
    addi r4, r1, 0xb0
    addi r5, r1, 0x90
    bl fn_80491528
    addi r3, r1, 0xb0
    li r4, -0x1
    bl fn_8041D23C
lbl_fn_80487490_00000100:
    lwz r3, 0x1de8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80487490_00000170
    lwz r0, 0x1de4(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80487490_00000170
    bne lbl_fn_80487490_00000164
    bl fn_804805AC
    stw r3, 0x10(r1)
    lwz r3, 0x1de8(r31)
    lbz r0, 0x12(r1)
    stw r0, 0x1dec(r31)
    bl fn_804805AC
    stw r3, 0xc(r1)
    lwz r3, 0x1de8(r31)
    lhz r0, 0xc(r1)
    stw r0, 0x1df0(r31)
    bl fn_804805AC
    stw r3, 0x8(r1)
    mr r3, r31
    lwz r4, 0x1de8(r31)
    lbz r0, 0xb(r1)
    stw r0, 0x1df4(r31)
    lwz r5, 0x1df8(r31)
    bl fn_804805F0
lbl_fn_80487490_00000164:
    lwz r3, 0x1de4(r31)
    subi r0, r3, 0x1
    stw r0, 0x1de4(r31)
lbl_fn_80487490_00000170:
    lwz r0, 0x1ea4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80487490_00000588
    lwz r3, 0x241c(r31)
    bl fn_803D6E2C
    lwz r3, 0x2438(r31)
    bl fn_803D6E2C
    lwz r5, 0x1eac(r31)
    lis r4, lbl_807C7028@ha
    addi r3, r1, 0x28
    addi r0, r5, 0x1
    stw r0, 0x1eac(r31)
    addi r4, r4, lbl_807C7028@l
    bl fn_804827CC
    bl fn_801156BC
    cmpwi r3, 0x0
    beq lbl_fn_80487490_000001E8
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    stfs f0, 0x28(r1)
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    stfs f1, 0x2c(r1)
lbl_fn_80487490_000001E8:
    lwz r0, 0x1ea8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80487490_0000024C
    lis r30, lbl_80756380@ha
    lwz r3, 0x241c(r31)
    addi r30, r30, lbl_80756380@l
    lfs f1, lbl_80887014
    addi r4, r30, 0x285
    bl fn_803D6EF8
    lwz r3, 0x241c(r31)
    addi r4, r30, 0x28c
    lfs f1, lbl_80887018
    bl fn_803D6EF8
    lwz r3, 0x241c(r31)
    addi r4, r30, 0x293
    lfs f1, lbl_8088701C
    bl fn_803D6EF8
    lwz r3, 0x241c(r31)
    lfs f1, lbl_80886F90
    bl fn_803D2134
    lis r4, lbl_807C7028@ha
    addi r3, r31, 0x242c
    addi r4, r4, lbl_807C7028@l
    bl fn_800F833C
    b lbl_fn_80487490_000002AC
lbl_fn_80487490_0000024C:
    lis r30, lbl_80756380@ha
    lwz r3, 0x241c(r31)
    addi r30, r30, lbl_80756380@l
    lfs f1, lbl_80887020
    addi r4, r30, 0x285
    bl fn_803D6EF8
    lwz r3, 0x241c(r31)
    addi r4, r30, 0x28c
    lfs f1, lbl_80887024
    bl fn_803D6EF8
    lwz r3, 0x241c(r31)
    addi r4, r30, 0x293
    lfs f1, lbl_80887028
    bl fn_803D6EF8
    lwz r3, 0x241c(r31)
    lfs f1, lbl_80886FD8
    bl fn_803D2134
    lfs f1, lbl_8088702C
    addi r3, r1, 0x20
    addi r4, r1, 0x28
    bl fn_80484E6C
    addi r3, r31, 0x242c
    addi r4, r1, 0x20
    bl fn_800F833C
lbl_fn_80487490_000002AC:
    lfs f1, lbl_80886FF0
    addi r3, r1, 0x18
    addi r4, r31, 0x2424
    addi r5, r31, 0x242c
    bl fn_800F84D8
    addi r3, r31, 0x2424
    addi r4, r1, 0x18
    bl fn_800F833C
    lis r30, lbl_80756380@ha
    lwz r3, 0x241c(r31)
    addi r30, r30, lbl_80756380@l
    lfs f1, 0x2424(r31)
    addi r4, r30, 0x29a
    li r5, 0x0
    bl fn_803D6F78
    lwz r3, 0x241c(r31)
    addi r4, r30, 0x29a
    lfs f1, 0x2428(r31)
    li r5, 0x1
    bl fn_803D6F78
    lfs f1, lbl_80887008
    addi r4, r30, 0x29a
    lfs f0, 0x2424(r31)
    li r5, 0x0
    lwz r3, 0x2438(r31)
    fadds f1, f1, f0
    bl fn_803D6F78
    lfs f1, lbl_80886FE8
    addi r4, r30, 0x29a
    lfs f0, 0x2428(r31)
    li r5, 0x1
    lwz r3, 0x2438(r31)
    fadds f1, f1, f0
    bl fn_803D6F78
    lfs f1, lbl_80886F8C
    addi r3, r1, 0x84
    lfs f3, lbl_80886F90
    fmr f2, f1
    bl fn_8000D114
    lwz r0, 0x1eac(r31)
    cmpwi r0, 0x96
    blt lbl_fn_80487490_000004B0
    lwz r0, 0x1ea8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80487490_00000388
    lfs f1, 0x2434(r31)
    lfs f0, lbl_80886FF0
    lfs f2, lbl_80886F8C
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_80487490_0000037C
    b lbl_fn_80487490_00000380
lbl_fn_80487490_0000037C:
    fmr f2, f0
lbl_fn_80487490_00000380:
    stfs f2, 0x2434(r31)
    b lbl_fn_80487490_000004D4
lbl_fn_80487490_00000388:
    lfs f1, lbl_80886FF0
    lfs f0, 0x2434(r31)
    lfs f2, lbl_80886F90
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_80487490_000003A4
    b lbl_fn_80487490_000003A8
lbl_fn_80487490_000003A4:
    fmr f2, f0
lbl_fn_80487490_000003A8:
    stfs f2, 0x2434(r31)
    bl fn_8008B964
    bl fn_800F7258
    mr r30, r3
    addi r3, r1, 0x78
    mr r4, r30
    bl fn_80383728
    mr r3, r30
    bl fn_80113CCC
    mr r5, r3
    addi r3, r1, 0x6c
    addi r4, r31, 0x1e94
    bl fn_80013338
    addi r3, r1, 0x84
    addi r4, r1, 0x6c
    bl fn_8000D124
    addi r3, r1, 0x84
    bl fn_8012A1E0
    cmpwi r3, 0x0
    beq lbl_fn_80487490_0000040C
    lfs f1, lbl_80886F8C
    addi r3, r1, 0x84
    lfs f3, lbl_80886F90
    fmr f2, f1
    bl fn_80057A68
lbl_fn_80487490_0000040C:
    addi r3, r1, 0x84
    bl fn_800F7FF0
    addi r3, r1, 0x60
    addi r4, r1, 0x78
    bl fn_80011034
    lfs f1, 0x64(r1)
    addi r3, r1, 0x108
    bl fn_8013A13C
    addi r3, r1, 0x54
    addi r4, r1, 0x84
    addi r5, r1, 0x78
    bl fn_80013338
    addi r3, r1, 0x84
    addi r4, r1, 0x54
    bl fn_8000D124
    addi r3, r1, 0xd8
    addi r4, r1, 0x108
    bl fn_80487BD0
    addi r3, r1, 0x84
    addi r4, r1, 0xd8
    bl fn_80011410
    lfs f0, lbl_80886F8C
    addi r3, r1, 0x84
    stfs f0, 0x8c(r1)
    bl fn_8012A1E0
    cmpwi r3, 0x0
    beq lbl_fn_80487490_0000048C
    lfs f1, lbl_80886F8C
    addi r3, r1, 0x84
    lfs f2, lbl_80886F90
    fmr f3, f1
    bl fn_80057A68
lbl_fn_80487490_0000048C:
    addi r3, r1, 0x84
    bl fn_800F7FF0
    lfs f0, 0x84(r1)
    addi r3, r1, 0x84
    lfs f2, lbl_80886F8C
    fneg f1, f0
    lfs f3, 0x88(r1)
    bl fn_80057A68
    b lbl_fn_80487490_000004D4
lbl_fn_80487490_000004B0:
    lfs f1, 0x2434(r31)
    lfs f0, lbl_80886FF0
    lfs f2, lbl_80886F8C
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_80487490_000004CC
    b lbl_fn_80487490_000004D0
lbl_fn_80487490_000004CC:
    fmr f2, f0
lbl_fn_80487490_000004D0:
    stfs f2, 0x2434(r31)
lbl_fn_80487490_000004D4:
    lis r4, lbl_80756380@ha
    lwz r3, 0x2438(r31)
    addi r4, r4, lbl_80756380@l
    lfs f1, 0x2434(r31)
    addi r4, r4, 0x2a4
    bl fn_803D6EF8
    lfs f1, lbl_80887030
    addi r3, r1, 0x48
    addi r4, r31, 0x243c
    addi r5, r1, 0x84
    bl fn_800F7260
    addi r3, r31, 0x243c
    addi r4, r1, 0x48
    bl fn_8000D124
    lfs f31, lbl_80886F8C
    addi r3, r31, 0x243c
    bl fn_8012A1E0
    cmpwi r3, 0x0
    bne lbl_fn_80487490_00000538
    addi r3, r1, 0x3c
    addi r4, r31, 0x243c
    bl fn_80011034
    lfs f1, 0x40(r1)
    bl fn_802A7964
    fmr f31, f1
lbl_fn_80487490_00000538:
    lis r30, lbl_80756380@ha
    fmr f1, f31
    addi r30, r30, lbl_80756380@l
    lwz r3, 0x241c(r31)
    addi r4, r30, 0x2ab
    bl fn_803D6EF8
    fmr f1, f31
    lwz r3, 0x2438(r31)
    addi r4, r30, 0x2ab
    bl fn_803D6EF8
    lwz r3, 0x1eb0(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80487490_000005E8
    addi r0, r3, 0x1
    stw r0, 0x1eb0(r31)
    cmpwi r0, 0x3
    blt lbl_fn_80487490_000005E8
    li r0, 0x0
    stw r0, 0x1ea4(r31)
    b lbl_fn_80487490_000005E8
lbl_fn_80487490_00000588:
    lwz r3, 0x241c(r31)
    bl fn_803D2A54
    lwz r3, 0x241c(r31)
    bl fn_80244CAC
    li r0, 0x0
    lis r30, lbl_807C7028@ha
    stw r0, 0x1eac(r31)
    addi r3, r31, 0x2424
    addi r4, r30, lbl_807C7028@l
    bl fn_800F833C
    addi r3, r31, 0x242c
    addi r4, r30, lbl_807C7028@l
    bl fn_800F833C
    lwz r3, 0x2438(r31)
    bl fn_80244CAC
    lfs f1, lbl_80886F8C
    addi r3, r1, 0x30
    stfs f1, 0x2434(r31)
    fmr f2, f1
    lfs f3, lbl_80886F90
    bl fn_8000D114
    mr r4, r3
    addi r3, r31, 0x243c
    bl fn_8000D124
lbl_fn_80487490_000005E8:
    addi r3, r31, 0x23b8
    bl fn_803D6EDC
    cmpwi r3, 0x0
    bne lbl_fn_80487490_00000664
    addi r3, r31, 0x23b8
    bl fn_80487C08
    mr r30, r3
    bl fn_80116E64
    cmpwi r3, 0x0
    beq lbl_fn_80487490_00000628
    bl fn_80116E64
    li r4, 0x8
    li r5, 0x0
    bl fn_800D089C
    cmpwi r3, 0x0
    bgt lbl_fn_80487490_00000638
lbl_fn_80487490_00000628:
    lwz r3, 0x4(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_80487490_00000640
lbl_fn_80487490_00000638:
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_80487490_00000640:
    lwz r0, 0x4(r30)
    cmpwi r0, 0xa
    ble lbl_fn_80487490_00000664
    lwz r4, 0x0(r30)
    mr r3, r31
    li r5, 0x0
    bl fn_8047E964
    addi r3, r31, 0x23b8
    bl fn_80487C1C
lbl_fn_80487490_00000664:
    lfs f1, 0x1f6c(r31)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f1, f0
    ble lbl_fn_80487490_0000069C
    bl fn_802F0990
    bl fn_802F0988
    lfs f2, 0x1f6c(r31)
    lfs f0, lbl_80886F8C
    fsubs f1, f2, f1
    stfs f1, 0x1f6c(r31)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80487490_0000069C
    stfs f0, 0x1f6c(r31)
lbl_fn_80487490_0000069C:
    mr r3, r31
    bl fn_80112F54
    cmpwi r3, 0x0
    beq lbl_fn_80487490_00000704
    mr r3, r31
    bl fn_80112F54
    bl fn_8047F400
    cmpwi r3, 0x0
    bne lbl_fn_80487490_00000704
    mr r3, r31
    bl fn_80112F54
    bl fn_8047E5D4
    cmpwi r3, 0xce7
    bne lbl_fn_80487490_00000704
    bl fn_804814F0
    cmpwi r3, 0x0
    beq lbl_fn_80487490_00000704
    bl fn_804814F0
    bl fn_8037D34C
    cmpwi r3, 0x0
    bne lbl_fn_80487490_00000704
    bl fn_804814F0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x0
    bl fn_8037D3E8
lbl_fn_80487490_00000704:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80487BB4(void)
{
    nofralloc
    li r5, 0x0
    li r0, 0x1
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    stb r0, 0x8(r3)
    stfs f1, 0xc(r3)
    blr
}

asm void fn_80487BD0(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    mr r4, r3
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b fn_805F8CA0
}

asm void fn_80487C08(void)
{
    nofralloc
    lwz r0, 0x44(r3)
    slwi r0, r0, 3
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_80487C1C(void)
{
    nofralloc
    lwz r5, 0x44(r3)
    lwz r4, 0x0(r3)
    addi r0, r5, 0x1
    clrlwi r5, r0, 29
    stw r5, 0x44(r3)
    subi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_80487C3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r4, lbl_8087F540
    lwz r7, 0x1a94(r4)
    cmpwi r7, 0x0
    beq lbl_fn_80487C3C_00000A38
    lwz r3, 0x1a98(r4)
    lwz r0, 0x0(r7)
    mulli r3, r3, 0x65c
    add r4, r4, r3
    stw r0, 0xc8(r4)
    lwz r0, 0x4(r7)
    stw r0, 0xcc(r4)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0xd0(r4), 0, 0
    stfs f2, 0xd8(r4)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0xdc(r4), 0, 0
    stfs f2, 0xe4(r4)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0xe8(r4), 0, 0
    stfs f2, 0xf0(r4)
    lfs f2, 0x34(r7)
    psq_l f1, 0x2c(r7), 0, 0
    psq_st f1, 0xf4(r4), 0, 0
    stfs f2, 0xfc(r4)
    lfs f0, 0x38(r7)
    stfs f0, 0x100(r4)
    lfs f0, 0x3c(r7)
    stfs f0, 0x104(r4)
    lfs f0, 0x40(r7)
    stfs f0, 0x108(r4)
    lfs f0, 0x44(r7)
    stfs f0, 0x10c(r4)
    lfs f0, 0x48(r7)
    stfs f0, 0x110(r4)
    lfs f0, 0x4c(r7)
    stfs f0, 0x114(r4)
    lfs f0, 0x50(r7)
    stfs f0, 0x118(r4)
    lfs f0, 0x54(r7)
    stfs f0, 0x11c(r4)
    psq_l f2, 0x60(r7), 0, 0
    psq_l f3, 0x68(r7), 0, 0
    psq_l f4, 0x70(r7), 0, 0
    psq_l f5, 0x78(r7), 0, 0
    psq_l f6, 0x80(r7), 0, 0
    psq_l f1, 0x58(r7), 0, 0
    psq_st f1, 0x120(r4), 0, 0
    psq_st f2, 0x128(r4), 0, 0
    psq_st f3, 0x130(r4), 0, 0
    psq_st f4, 0x138(r4), 0, 0
    psq_st f5, 0x140(r4), 0, 0
    psq_st f6, 0x148(r4), 0, 0
    psq_l f2, 0x90(r7), 0, 0
    psq_l f3, 0x98(r7), 0, 0
    psq_l f4, 0xa0(r7), 0, 0
    psq_l f5, 0xa8(r7), 0, 0
    psq_l f6, 0xb0(r7), 0, 0
    psq_l f7, 0xb8(r7), 0, 0
    psq_l f8, 0xc0(r7), 0, 0
    psq_l f1, 0x88(r7), 0, 0
    psq_st f1, 0x150(r4), 0, 0
    psq_st f2, 0x158(r4), 0, 0
    psq_st f3, 0x160(r4), 0, 0
    psq_st f4, 0x168(r4), 0, 0
    psq_st f5, 0x170(r4), 0, 0
    psq_st f6, 0x178(r4), 0, 0
    psq_st f7, 0x180(r4), 0, 0
    psq_st f8, 0x188(r4), 0, 0
    lfs f0, 0xc8(r7)
    addi r6, r4, 0x25c
    stfs f0, 0x190(r4)
    addi r5, r7, 0x194
    addi r0, r4, 0x2bc
    lfs f0, 0xcc(r7)
    stfs f0, 0x194(r4)
    psq_l f2, 0xd8(r7), 0, 0
    psq_l f3, 0xe0(r7), 0, 0
    psq_l f4, 0xe8(r7), 0, 0
    psq_l f5, 0xf0(r7), 0, 0
    psq_l f6, 0xf8(r7), 0, 0
    psq_l f1, 0xd0(r7), 0, 0
    psq_st f1, 0x198(r4), 0, 0
    psq_st f2, 0x1a0(r4), 0, 0
    psq_st f3, 0x1a8(r4), 0, 0
    psq_st f4, 0x1b0(r4), 0, 0
    psq_st f5, 0x1b8(r4), 0, 0
    psq_st f6, 0x1c0(r4), 0, 0
    psq_l f2, 0x108(r7), 0, 0
    psq_l f3, 0x110(r7), 0, 0
    psq_l f4, 0x118(r7), 0, 0
    psq_l f5, 0x120(r7), 0, 0
    psq_l f6, 0x128(r7), 0, 0
    psq_l f1, 0x100(r7), 0, 0
    psq_st f1, 0x1c8(r4), 0, 0
    psq_st f2, 0x1d0(r4), 0, 0
    psq_st f3, 0x1d8(r4), 0, 0
    psq_st f4, 0x1e0(r4), 0, 0
    psq_st f5, 0x1e8(r4), 0, 0
    psq_st f6, 0x1f0(r4), 0, 0
    lwz r3, 0x130(r7)
    stw r3, 0x1f8(r4)
    lfs f0, 0x134(r7)
    stfs f0, 0x1fc(r4)
    lfs f0, 0x138(r7)
    stfs f0, 0x200(r4)
    lfs f2, 0x144(r7)
    psq_l f1, 0x13c(r7), 0, 0
    psq_st f1, 0x204(r4), 0, 0
    stfs f2, 0x20c(r4)
    lfs f0, 0x148(r7)
    stfs f0, 0x210(r4)
    lfs f2, 0x154(r7)
    psq_l f1, 0x14c(r7), 0, 0
    psq_st f1, 0x214(r4), 0, 0
    stfs f2, 0x21c(r4)
    lfs f0, 0x158(r7)
    stfs f0, 0x220(r4)
    lfs f2, 0x164(r7)
    psq_l f1, 0x15c(r7), 0, 0
    psq_st f1, 0x224(r4), 0, 0
    stfs f2, 0x22c(r4)
    lfs f0, 0x168(r7)
    stfs f0, 0x230(r4)
    lfs f2, 0x174(r7)
    psq_l f1, 0x16c(r7), 0, 0
    psq_st f1, 0x234(r4), 0, 0
    stfs f2, 0x23c(r4)
    lfs f0, 0x178(r7)
    stfs f0, 0x240(r4)
    lfs f2, 0x184(r7)
    psq_l f1, 0x17c(r7), 0, 0
    psq_st f1, 0x244(r4), 0, 0
    stfs f2, 0x24c(r4)
    lfs f2, 0x190(r7)
    psq_l f1, 0x188(r7), 0, 0
    psq_st f1, 0x250(r4), 0, 0
    stfs f2, 0x258(r4)
lbl_fn_80487C3C_000009F4:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_80487C3C_000009F4
    lwz r3, lbl_8087F540
    li r4, 0x1
    lwz r0, 0x1a98(r3)
    mulli r0, r0, 0x65c
    add r3, r3, r0
    addi r3, r3, 0xc8
    bl fn_801162A4
lbl_fn_80487C3C_00000A38:
    lwz r3, lbl_8087F540
    lwz r31, 0x70(r3)
    cmpwi r31, 0x0
    beq lbl_fn_80487C3C_00000AD0
    lwz r3, 0x194(r31)
    cmpwi r3, 0xa
    beq lbl_fn_80487C3C_00000A74
    cmpwi r3, 0xb
    li r0, 0x0
    beq lbl_fn_80487C3C_00000A68
    cmpwi r3, 0xc
    bne lbl_fn_80487C3C_00000A6C
lbl_fn_80487C3C_00000A68:
    li r0, 0x1
lbl_fn_80487C3C_00000A6C:
    cmpwi r0, 0x0
    beq lbl_fn_80487C3C_00000AD0
lbl_fn_80487C3C_00000A74:
    li r29, 0x0
    li r30, 0x0
lbl_fn_80487C3C_00000A7C:
    lwz r3, lbl_8087F540
    lwz r0, 0x1a38(r3)
    add r3, r3, r30
    addi r3, r3, 0xc8
    subf r0, r29, r0
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_801162A4
    addi r29, r29, 0x1
    addi r30, r30, 0x65c
    cmpwi r29, 0x4
    blt lbl_fn_80487C3C_00000A7C
    lwz r0, 0x98(r31)
    extrwi r0, r0, 1, 2
    cmplwi r0, 0x1
    bne lbl_fn_80487C3C_00000AD0
    mr r3, r31
    bl fn_8054FAD8
    lwz r0, 0x98(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x98(r31)
lbl_fn_80487C3C_00000AD0:
    lwz r3, lbl_8087F540
    lwz r0, 0x1a38(r3)
    stw r0, 0x1a3c(r3)
    lwz r3, lbl_8087F540
    bl fn_8047FCC0
    lwz r3, lbl_8087F540
    bl fn_804814F8
    lwz r3, lbl_8087F540
    bl fn_8047F730
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80487FA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80487FA0_00000BAC
    lwz r0, 0x1a44(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80487FA0_00000B48
    lwz r4, 0x1e74(r3)
    addi r3, r3, 0x1dfc
    bl fn_80221F54
lbl_fn_80487FA0_00000B48:
    lwz r3, 0x1a44(r31)
    lwz r0, 0x1a48(r31)
    cmpw r0, r3
    beq lbl_fn_80487FA0_00000B7C
    cmpwi r0, 0x0
    beq lbl_fn_80487FA0_00000B74
    cmpwi r3, 0x0
    bne lbl_fn_80487FA0_00000B74
    lwz r3, lbl_8087F0A8
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_80487FA0_00000B74:
    lwz r0, 0x1a44(r31)
    stw r0, 0x1a48(r31)
lbl_fn_80487FA0_00000B7C:
    lwz r0, 0x1e90(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80487FA0_00000BAC
    lwz r0, 0x1ea4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80487FA0_00000BAC
    lwz r3, lbl_8087EEB0
    addi r4, r31, 0x1e94
    lfs f1, 0x1ea0(r31)
    li r5, -0x100
    lfs f2, lbl_80886F8C
    bl fn_80063D3C
lbl_fn_80487FA0_00000BAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80488050(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_fn_80488050_00000BF0
    mr r3, r31
    bl fn_805381CC
    mr r4, r3
lbl_fn_80488050_00000BF0:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x1
    ble lbl_fn_80488050_00000C08
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_80488050_00000C0C
lbl_fn_80488050_00000C08:
    li r3, 0x0
lbl_fn_80488050_00000C0C:
    cmpwi r0, 0x2
    lwz r5, 0x4(r3)
    ble lbl_fn_80488050_00000C24
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_80488050_00000C28
lbl_fn_80488050_00000C24:
    li r3, 0x0
lbl_fn_80488050_00000C28:
    cmpwi r0, 0x3
    lfs f1, 0x4(r3)
    ble lbl_fn_80488050_00000C40
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_80488050_00000C44
lbl_fn_80488050_00000C40:
    li r3, 0x0
lbl_fn_80488050_00000C44:
    cmpwi r0, 0x4
    lwz r7, 0x4(r3)
    ble lbl_fn_80488050_00000C5C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_80488050_00000C60
lbl_fn_80488050_00000C5C:
    li r3, 0x0
lbl_fn_80488050_00000C60:
    cmpwi r0, 0x5
    lwz r8, 0x4(r3)
    ble lbl_fn_80488050_00000C78
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_80488050_00000C7C
lbl_fn_80488050_00000C78:
    li r3, 0x0
lbl_fn_80488050_00000C7C:
    cmpwi r0, 0x6
    lwz r9, 0x4(r3)
    ble lbl_fn_80488050_00000C94
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_80488050_00000C98
lbl_fn_80488050_00000C94:
    li r3, 0x0
lbl_fn_80488050_00000C98:
    lwz r0, 0x118(r4)
    lwz r10, 0x4(r3)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80488050_00000CD0
lbl_fn_80488050_00000CB0:
    lwz r0, 0x114(r4)
    add r11, r0, r3
    lwz r0, 0x14(r11)
    cmpw r5, r0
    bne lbl_fn_80488050_00000CC8
    b lbl_fn_80488050_00000CD4
lbl_fn_80488050_00000CC8:
    addi r3, r3, 0x18
    bdnz lbl_fn_80488050_00000CB0
lbl_fn_80488050_00000CD0:
    li r11, 0x0
lbl_fn_80488050_00000CD4:
    cmpwi r11, 0x0
    beq lbl_fn_80488050_00000D10
    lwz r6, 0x18(r31)
    li r5, 0x0
    lis r0, 0x20
    mr r3, r30
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r11)
    srwi. r0, r0, 31
    bne lbl_fn_80488050_00000D08
    addi r5, r11, 0x9
    b lbl_fn_80488050_00000D0C
lbl_fn_80488050_00000D08:
    lwz r5, 0x10(r11)
lbl_fn_80488050_00000D0C:
    bl fn_804881B8
lbl_fn_80488050_00000D10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804881B8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lwz r11, 0x1f1c(r3)
    mr r22, r3
    lwz r30, 0x48(r1)
    mr r23, r4
    clrrwi. r0, r11, 31
    lwz r31, 0x4c(r1)
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    mr r29, r10
    beq lbl_fn_804881B8_00000DFC
    lwz r6, 0x2380(r3)
    cmpwi r6, 0x0
    ble lbl_fn_804881B8_00000DFC
    lwz r4, 0x70(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804881B8_00000D98
    lwz r0, 0x190(r4)
    cmpw r6, r0
    bne lbl_fn_804881B8_00000D98
    b lbl_fn_804881B8_00000DD0
lbl_fn_804881B8_00000D98:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804881B8_00000DCC
lbl_fn_804881B8_00000DAC:
    lwz r4, 0x64(r3)
    lwzx r4, r4, r5
    lwz r0, 0x190(r4)
    cmpw r6, r0
    bne lbl_fn_804881B8_00000DC4
    b lbl_fn_804881B8_00000DD0
lbl_fn_804881B8_00000DC4:
    addi r5, r5, 0x4
    bdnz lbl_fn_804881B8_00000DAC
lbl_fn_804881B8_00000DCC:
    li r4, 0x0
lbl_fn_804881B8_00000DD0:
    cmpwi r4, 0x0
    beq lbl_fn_804881B8_00000DFC
    rlwinm. r0, r11, 0, 10, 10
    beq lbl_fn_804881B8_00000DF0
    mr r3, r22
    li r5, 0x3c
    bl fn_80488534
    b lbl_fn_804881B8_00000DFC
lbl_fn_804881B8_00000DF0:
    mr r3, r22
    li r5, 0xf
    bl fn_80488534
lbl_fn_804881B8_00000DFC:
    lwz r0, 0x1f1c(r22)
    cmpwi r25, 0x0
    or r31, r31, r0
    bgt lbl_fn_804881B8_00000E10
    li r25, 0x3c
lbl_fn_804881B8_00000E10:
    clrrwi. r0, r31, 31
    bne lbl_fn_804881B8_00000E7C
    lwz r0, 0x1e7c(r22)
    li r3, 0x1
    stw r3, 0x1e78(r22)
    srwi. r0, r0, 31
    bne lbl_fn_804881B8_00000E38
    lbz r0, 0x1e7c(r22)
    clrlwi r21, r0, 25
    b lbl_fn_804881B8_00000E3C
lbl_fn_804881B8_00000E38:
    lwz r21, 0x1e80(r22)
lbl_fn_804881B8_00000E3C:
    lbz r0, 0x8(r1)
    mr r3, r24
    stb r0, 0xc(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r24
    addi r3, r22, 0x1e7c
    add r7, r24, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
    lfs f0, lbl_80886F8C
    oris r31, r31, 0x8000
    stfs f0, 0x1e8c(r22)
    stfs f0, 0x1e88(r22)
lbl_fn_804881B8_00000E7C:
    clrlwi. r0, r31, 31
    bne lbl_fn_804881B8_00000EAC
    cmpwi r26, 0x0
    beq lbl_fn_804881B8_00000EAC
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_804881B8_00000EA8
    mr r6, r25
    li r4, 0x1
    li r5, 0x4
    bl fn_8037D3E8
lbl_fn_804881B8_00000EA8:
    ori r31, r31, 0x1
lbl_fn_804881B8_00000EAC:
    rlwinm. r0, r31, 0, 30, 30
    bne lbl_fn_804881B8_00000EDC
    cmpwi r27, 0x0
    beq lbl_fn_804881B8_00000EDC
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_804881B8_00000ED8
    mr r6, r25
    li r4, 0x0
    li r5, 0x4
    bl fn_80360780
lbl_fn_804881B8_00000ED8:
    ori r31, r31, 0x2
lbl_fn_804881B8_00000EDC:
    rlwinm. r0, r31, 0, 29, 29
    bne lbl_fn_804881B8_00000F0C
    cmpwi r28, 0x0
    beq lbl_fn_804881B8_00000F0C
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_804881B8_00000F08
    mr r6, r25
    li r4, 0x0
    li r5, 0x4
    bl fn_803606CC
lbl_fn_804881B8_00000F08:
    ori r31, r31, 0x4
lbl_fn_804881B8_00000F0C:
    rlwinm. r0, r31, 0, 28, 28
    bne lbl_fn_804881B8_00000FD0
    cmpwi r29, 0x0
    beq lbl_fn_804881B8_00000FD0
    li r5, 0x1
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_804881B8_00000F50
lbl_fn_804881B8_00000F2C:
    lwz r0, 0x164(r23)
    add r4, r0, r3
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804881B8_00000F48
    li r5, 0x0
    b lbl_fn_804881B8_00000F5C
lbl_fn_804881B8_00000F48:
    addi r6, r6, 0x1
    addi r3, r3, 0x1c0
lbl_fn_804881B8_00000F50:
    lwz r0, 0x168(r23)
    cmpw r6, r0
    blt lbl_fn_804881B8_00000F2C
lbl_fn_804881B8_00000F5C:
    cmpwi r5, 0x0
    beq lbl_fn_804881B8_00000FD0
    li r21, 0x0
    li r24, 0x0
    b lbl_fn_804881B8_00000FAC
lbl_fn_804881B8_00000F70:
    lwz r0, 0x164(r23)
    li r4, 0x1
    add r3, r0, r24
    lwz r0, 0x20(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804881B8_00000F94
    cmpwi r0, 0x7
    beq lbl_fn_804881B8_00000F94
    li r4, 0x0
lbl_fn_804881B8_00000F94:
    cmpwi r4, 0x0
    beq lbl_fn_804881B8_00000FA4
    li r4, 0x0
    bl fn_80012774
lbl_fn_804881B8_00000FA4:
    addi r21, r21, 0x1
    addi r24, r24, 0x1c0
lbl_fn_804881B8_00000FAC:
    lwz r0, 0x168(r23)
    cmpw r21, r0
    blt lbl_fn_804881B8_00000F70
    lwz r3, lbl_8087F0A0
    cmpwi r3, 0x0
    beq lbl_fn_804881B8_00000FCC
    li r0, 0x0
    stw r0, 0x48(r3)
lbl_fn_804881B8_00000FCC:
    ori r31, r31, 0x8
lbl_fn_804881B8_00000FD0:
    rlwinm. r0, r31, 0, 27, 27
    bne lbl_fn_804881B8_00001088
    cmpwi r30, 0x0
    beq lbl_fn_804881B8_00001088
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_804881B8_00000FF4
    lwz r3, 0x48(r3)
    b lbl_fn_804881B8_00000FF8
lbl_fn_804881B8_00000FF4:
    li r3, 0x0
lbl_fn_804881B8_00000FF8:
    li r0, 0x0
    b lbl_fn_804881B8_00001008
lbl_fn_804881B8_00001000:
    stb r0, 0x1231(r3)
    lwz r3, 0x14ac(r3)
lbl_fn_804881B8_00001008:
    cmpwi r3, 0x0
    bne lbl_fn_804881B8_00001000
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_804881B8_00001024
    lwz r3, 0x48(r3)
    b lbl_fn_804881B8_00001028
lbl_fn_804881B8_00001024:
    li r3, 0x0
lbl_fn_804881B8_00001028:
    li r0, 0x0
    b lbl_fn_804881B8_00001038
lbl_fn_804881B8_00001030:
    stb r0, 0x1231(r3)
    lwz r3, 0x14ac(r3)
lbl_fn_804881B8_00001038:
    cmpwi r3, 0x0
    bne lbl_fn_804881B8_00001030
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_804881B8_00001054
    lwz r3, 0x48(r3)
    b lbl_fn_804881B8_00001058
lbl_fn_804881B8_00001054:
    li r3, 0x0
lbl_fn_804881B8_00001058:
    li r0, 0x0
    b lbl_fn_804881B8_00001068
lbl_fn_804881B8_00001060:
    stb r0, 0x1231(r3)
    lwz r3, 0x1424(r3)
lbl_fn_804881B8_00001068:
    cmpwi r3, 0x0
    bne lbl_fn_804881B8_00001060
    lwz r3, lbl_8087F0A0
    cmpwi r3, 0x0
    beq lbl_fn_804881B8_00001084
    li r0, 0x0
    stw r0, 0x48(r3)
lbl_fn_804881B8_00001084:
    ori r31, r31, 0x10
lbl_fn_804881B8_00001088:
    stw r31, 0x1f1c(r22)
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80488534(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    mr r27, r5
    stw r0, 0x1e78(r3)
    lwz r6, lbl_8087F0A8
    lwz r0, 0x194(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80488534_000010E4
    lwz r0, 0x190(r4)
    cmpwi r0, 0x19d
    beq lbl_fn_80488534_00001278
lbl_fn_80488534_000010E4:
    lwz r28, 0x1f1c(r3)
    clrlwi. r0, r28, 31
    beq lbl_fn_80488534_0000110C
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_80488534_0000110C
    mr r6, r27
    li r4, 0x0
    li r5, 0x4
    bl fn_8037D3E8
lbl_fn_80488534_0000110C:
    rlwinm. r0, r28, 0, 30, 30
    beq lbl_fn_80488534_00001130
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80488534_00001130
    mr r6, r27
    li r4, 0x1
    li r5, 0x4
    bl fn_80360780
lbl_fn_80488534_00001130:
    rlwinm. r0, r28, 0, 29, 29
    beq lbl_fn_80488534_00001154
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80488534_00001154
    mr r6, r27
    li r4, 0x1
    li r5, 0x4
    bl fn_803606CC
lbl_fn_80488534_00001154:
    rlwinm. r0, r28, 0, 28, 28
    beq lbl_fn_80488534_000011C4
    lwz r3, lbl_8087F0A0
    cmpwi r3, 0x0
    beq lbl_fn_80488534_00001170
    li r0, 0x1
    stw r0, 0x48(r3)
lbl_fn_80488534_00001170:
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80488534_000011B8
lbl_fn_80488534_0000117C:
    lwz r0, 0x164(r31)
    li r4, 0x1
    add r3, r0, r29
    lwz r0, 0x20(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80488534_000011A0
    cmpwi r0, 0x7
    beq lbl_fn_80488534_000011A0
    li r4, 0x0
lbl_fn_80488534_000011A0:
    cmpwi r4, 0x0
    beq lbl_fn_80488534_000011B0
    li r4, 0x1
    bl fn_80012774
lbl_fn_80488534_000011B0:
    addi r27, r27, 0x1
    addi r29, r29, 0x1c0
lbl_fn_80488534_000011B8:
    lwz r0, 0x168(r31)
    cmpw r27, r0
    blt lbl_fn_80488534_0000117C
lbl_fn_80488534_000011C4:
    rlwinm. r0, r28, 0, 27, 27
    beq lbl_fn_80488534_00001270
    lwz r3, lbl_8087F0A0
    cmpwi r3, 0x0
    beq lbl_fn_80488534_000011E0
    li r0, 0x1
    stw r0, 0x48(r3)
lbl_fn_80488534_000011E0:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80488534_000011F4
    lwz r3, 0x48(r3)
    b lbl_fn_80488534_000011F8
lbl_fn_80488534_000011F4:
    li r3, 0x0
lbl_fn_80488534_000011F8:
    li r0, 0x1
    b lbl_fn_80488534_00001208
lbl_fn_80488534_00001200:
    stb r0, 0x1231(r3)
    lwz r3, 0x14ac(r3)
lbl_fn_80488534_00001208:
    cmpwi r3, 0x0
    bne lbl_fn_80488534_00001200
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_80488534_00001224
    lwz r3, 0x48(r3)
    b lbl_fn_80488534_00001228
lbl_fn_80488534_00001224:
    li r3, 0x0
lbl_fn_80488534_00001228:
    li r0, 0x1
    b lbl_fn_80488534_00001238
lbl_fn_80488534_00001230:
    stb r0, 0x1231(r3)
    lwz r3, 0x14ac(r3)
lbl_fn_80488534_00001238:
    cmpwi r3, 0x0
    bne lbl_fn_80488534_00001230
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_80488534_00001254
    lwz r3, 0x48(r3)
    b lbl_fn_80488534_00001258
lbl_fn_80488534_00001254:
    li r3, 0x0
lbl_fn_80488534_00001258:
    li r0, 0x1
    b lbl_fn_80488534_00001268
lbl_fn_80488534_00001260:
    stb r0, 0x1231(r3)
    lwz r3, 0x1424(r3)
lbl_fn_80488534_00001268:
    cmpwi r3, 0x0
    bne lbl_fn_80488534_00001260
lbl_fn_80488534_00001270:
    li r0, 0x0
    stw r0, 0x1f1c(r30)
lbl_fn_80488534_00001278:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8048871C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    cmpwi r5, 0x0
    mr r26, r3
    mr r27, r4
    mr r23, r5
    mr r28, r6
    mr r29, r7
    bne lbl_fn_8048871C_0000153C
    mr r3, r27
    bl fn_8047BFF4
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8048871C_000015CC
    lwz r0, 0x30(r3)
    cmpwi r0, 0x1
    ble lbl_fn_8048871C_000012E8
    lwz r3, 0x2c(r3)
    addi r3, r3, 0x8
    b lbl_fn_8048871C_000012EC
lbl_fn_8048871C_000012E8:
    li r3, 0x0
lbl_fn_8048871C_000012EC:
    lwz r0, 0x118(r27)
    lwz r4, 0x4(r3)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048871C_00001324
lbl_fn_8048871C_00001304:
    lwz r0, 0x114(r27)
    add r31, r0, r3
    lwz r0, 0x14(r31)
    cmpw r4, r0
    bne lbl_fn_8048871C_0000131C
    b lbl_fn_8048871C_00001328
lbl_fn_8048871C_0000131C:
    addi r3, r3, 0x18
    bdnz lbl_fn_8048871C_00001304
lbl_fn_8048871C_00001324:
    li r31, 0x0
lbl_fn_8048871C_00001328:
    cmpwi r31, 0x0
    beq lbl_fn_8048871C_000015CC
    mr r3, r30
    bl fn_805381BC
    cmpwi r27, 0x0
    mr r25, r3
    li r23, 0x0
    beq lbl_fn_8048871C_00001388
    lwz r0, 0xbc(r27)
    li r3, 0x0
    lwz r5, 0x94(r27)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048871C_00001380
lbl_fn_8048871C_00001360:
    lwz r4, 0xb8(r27)
    lwzx r24, r4, r3
    lwz r0, 0xc(r24)
    cmpw r5, r0
    bne lbl_fn_8048871C_00001378
    b lbl_fn_8048871C_000013B0
lbl_fn_8048871C_00001378:
    addi r3, r3, 0x8
    bdnz lbl_fn_8048871C_00001360
lbl_fn_8048871C_00001380:
    li r24, 0x0
    b lbl_fn_8048871C_000013B0
lbl_fn_8048871C_00001388:
    li r24, 0x0
    b lbl_fn_8048871C_000013B0
lbl_fn_8048871C_00001390:
    mr r3, r27
    mr r4, r24
    bl fn_8047BBBC
    add r23, r23, r3
    mr r3, r27
    mr r4, r24
    bl fn_8047B768
    mr r24, r3
lbl_fn_8048871C_000013B0:
    cmpwi r24, 0x0
    beq lbl_fn_8048871C_000013C0
    cmplw r24, r25
    bne lbl_fn_8048871C_00001390
lbl_fn_8048871C_000013C0:
    lwz r5, 0x1f64(r26)
    lwz r4, 0x10(r30)
    add r3, r5, r23
    addi r0, r5, 0x3
    add r3, r4, r3
    stw r3, 0x1f58(r26)
    cmpw r3, r0
    bgt lbl_fn_8048871C_00001524
    lwz r0, 0x194(r27)
    cmpwi r0, 0xa
    beq lbl_fn_8048871C_00001524
    cmpwi r27, 0x0
    bne lbl_fn_8048871C_00001400
    mr r3, r30
    bl fn_805381CC
    mr r27, r3
lbl_fn_8048871C_00001400:
    lwz r0, 0x30(r30)
    cmpwi r0, 0x1
    ble lbl_fn_8048871C_00001418
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x8
    b lbl_fn_8048871C_0000141C
lbl_fn_8048871C_00001418:
    li r3, 0x0
lbl_fn_8048871C_0000141C:
    cmpwi r0, 0x2
    lwz r4, 0x4(r3)
    ble lbl_fn_8048871C_00001434
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x10
    b lbl_fn_8048871C_00001438
lbl_fn_8048871C_00001434:
    li r3, 0x0
lbl_fn_8048871C_00001438:
    cmpwi r0, 0x3
    lfs f1, 0x4(r3)
    ble lbl_fn_8048871C_00001450
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x18
    b lbl_fn_8048871C_00001454
lbl_fn_8048871C_00001450:
    li r3, 0x0
lbl_fn_8048871C_00001454:
    cmpwi r0, 0x4
    lwz r7, 0x4(r3)
    ble lbl_fn_8048871C_0000146C
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x20
    b lbl_fn_8048871C_00001470
lbl_fn_8048871C_0000146C:
    li r3, 0x0
lbl_fn_8048871C_00001470:
    cmpwi r0, 0x5
    lwz r8, 0x4(r3)
    ble lbl_fn_8048871C_00001488
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x28
    b lbl_fn_8048871C_0000148C
lbl_fn_8048871C_00001488:
    li r3, 0x0
lbl_fn_8048871C_0000148C:
    cmpwi r0, 0x6
    lwz r9, 0x4(r3)
    ble lbl_fn_8048871C_000014A4
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x30
    b lbl_fn_8048871C_000014A8
lbl_fn_8048871C_000014A4:
    li r3, 0x0
lbl_fn_8048871C_000014A8:
    lwz r0, 0x118(r27)
    lwz r10, 0x4(r3)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048871C_000014E0
lbl_fn_8048871C_000014C0:
    lwz r0, 0x114(r27)
    add r5, r0, r3
    lwz r0, 0x14(r5)
    cmpw r4, r0
    bne lbl_fn_8048871C_000014D8
    b lbl_fn_8048871C_000014E4
lbl_fn_8048871C_000014D8:
    addi r3, r3, 0x18
    bdnz lbl_fn_8048871C_000014C0
lbl_fn_8048871C_000014E0:
    li r5, 0x0
lbl_fn_8048871C_000014E4:
    cmpwi r5, 0x0
    beq lbl_fn_8048871C_00001524
    lwz r6, 0x18(r30)
    li r4, 0x0
    lis r0, 0x20
    mr r3, r26
    stw r4, 0x8(r1)
    mr r4, r27
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    srwi. r0, r0, 31
    bne lbl_fn_8048871C_0000151C
    addi r5, r5, 0x9
    b lbl_fn_8048871C_00001520
lbl_fn_8048871C_0000151C:
    lwz r5, 0x10(r5)
lbl_fn_8048871C_00001520:
    bl fn_804881B8
lbl_fn_8048871C_00001524:
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8048871C_00001538
    addi r23, r31, 0x9
    b lbl_fn_8048871C_0000153C
lbl_fn_8048871C_00001538:
    lwz r23, 0x10(r31)
lbl_fn_8048871C_0000153C:
    lwz r0, 0x1f28(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8048871C_0000155C
    mr r4, r28
    addi r3, r26, 0x1f20
    bl fn_8004B1EC
    addi r3, r26, 0x1f28
    bl fn_800CB480
lbl_fn_8048871C_0000155C:
    mr r3, r23
    li r4, 0x4
    li r5, 0x0
    bl fn_805A38F4
    lwz r3, lbl_8087EFE8
    li r0, 0x4
    li r27, 0x1
    mr r4, r23
    stw r0, 0x34d0(r3)
    addi r3, r26, 0x1f20
    lwz r0, 0x1f60(r26)
    stw r27, 0x1f2c(r26)
    add r5, r29, r0
    bl fn_8004AE84
    lwz r3, lbl_8087EFE8
    addi r0, r26, 0x1f38
    li r4, 0x0
    stw r4, 0x34d0(r3)
    cmplw r23, r0
    stw r27, 0x1f34(r26)
    beq lbl_fn_8048871C_000015CC
    mr r3, r23
    bl strlen
    mr r5, r3
    mr r4, r23
    addi r3, r26, 0x1f38
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8048871C_000015CC:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80488A74(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r0, 0x1f28(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r0, 0x0
    beq lbl_fn_80488A74_0000163C
    lwz r30, lbl_8087EE90
    cmpwi r30, 0x0
    beq lbl_fn_80488A74_00001654
    addi r3, r3, 0x1f28
    bl fn_800CB6F8
    mr r31, r3
    mr r3, r30
    mr r4, r28
    bl fn_80049B74
    cmplw r31, r3
    beq lbl_fn_80488A74_00001654
lbl_fn_80488A74_0000163C:
    lwz r4, 0x70(r27)
    mr r3, r27
    mr r5, r28
    mr r6, r29
    li r7, 0x0
    bl fn_8048871C
lbl_fn_80488A74_00001654:
    lfs f1, lbl_80886F90
    addi r3, r27, 0x1f20
    li r4, 0x0
    bl fn_8004B158
    lwz r0, 0x1f64(r27)
    cmpwi r0, 0x0
    ble lbl_fn_80488A74_000016AC
    addi r3, r27, 0x1f28
    li r4, 0x1
    li r5, 0x4
    li r6, 0x0
    bl fn_800CB640
    lwz r4, 0x1f64(r27)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80756340@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_80756340@l(r3)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x1f68(r27)
lbl_fn_80488A74_000016AC:
    li r0, 0x0
    stw r0, 0x1f5c(r27)
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80488B5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, 0x70(r3)
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x0
    beq lbl_fn_80488B5C_000018C4
    mr r3, r0
    bl fn_80541214
    cmpwi r3, 0x0
    beq lbl_fn_80488B5C_000018C4
    addi r3, r30, 0x1f38
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_80488B5C_00001718
    b lbl_fn_80488B5C_000018C4
lbl_fn_80488B5C_00001718:
    lwz r3, 0x70(r30)
    bl fn_80541214
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80488B5C_000018C4
    li r0, 0x0
    stw r0, 0x1f5c(r30)
    lwz r3, 0x70(r30)
    mr r4, r27
    bl fn_8047B768
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80488B5C_00001798
    lwz r5, 0x2c(r27)
    lis r0, 0x4330
    lis r4, lbl_80756340@ha
    lwz r3, 0x70(r30)
    subi r5, r5, 0x3c
    stw r0, 0x8(r1)
    xoris r0, r5, 0x8000
    lfd f1, lbl_80756340@l(r4)
    stw r0, 0xc(r1)
    lfs f2, 0x198(r3)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80488B5C_00001798
    mr r4, r26
    bl fn_8047B768
    li r0, 0x1
    stw r0, 0x1f5c(r30)
    mr r26, r3
lbl_fn_80488B5C_00001798:
    cmpwi r26, 0x0
    beq lbl_fn_80488B5C_000018C4
    lwz r29, 0x70(r30)
    li r27, 0x0
    cmpwi r29, 0x0
    beq lbl_fn_80488B5C_000017F0
    lwz r0, 0xbc(r29)
    li r3, 0x0
    lwz r5, 0x94(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80488B5C_000017E8
lbl_fn_80488B5C_000017C8:
    lwz r4, 0xb8(r29)
    lwzx r28, r4, r3
    lwz r0, 0xc(r28)
    cmpw r5, r0
    bne lbl_fn_80488B5C_000017E0
    b lbl_fn_80488B5C_00001818
lbl_fn_80488B5C_000017E0:
    addi r3, r3, 0x8
    bdnz lbl_fn_80488B5C_000017C8
lbl_fn_80488B5C_000017E8:
    li r28, 0x0
    b lbl_fn_80488B5C_00001818
lbl_fn_80488B5C_000017F0:
    li r28, 0x0
    b lbl_fn_80488B5C_00001818
lbl_fn_80488B5C_000017F8:
    mr r3, r29
    mr r4, r28
    bl fn_8047BBBC
    add r27, r27, r3
    mr r3, r29
    mr r4, r28
    bl fn_8047B768
    mr r28, r3
lbl_fn_80488B5C_00001818:
    cmpwi r28, 0x0
    beq lbl_fn_80488B5C_00001828
    cmplw r28, r26
    bne lbl_fn_80488B5C_000017F8
lbl_fn_80488B5C_00001828:
    lwz r4, 0x1f58(r30)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80756340@ha
    subf r0, r4, r27
    lfd f3, lbl_80756340@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f1, lbl_80887034
    mr r3, r30
    lfd f2, 0x8(r1)
    mr r6, r31
    lfs f0, lbl_80886FB0
    addi r5, r30, 0x1f38
    fsubs f2, f2, f3
    lwz r7, 0x1f60(r30)
    lwz r4, 0x70(r30)
    fmuls f1, f1, f2
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r26, 0x14(r1)
    neg r0, r26
    andc r0, r0, r26
    srawi r0, r0, 31
    and r0, r26, r0
    add r7, r7, r0
    bl fn_8048871C
    cmpwi r26, 0x0
    blt lbl_fn_80488B5C_000018C4
    lfs f1, lbl_80886F90
    mr r4, r31
    addi r3, r30, 0x1f20
    bl fn_8004B158
    addi r3, r30, 0x1f28
    li r4, 0x1
    li r5, 0x4
    li r6, 0x0
    bl fn_800CB640
lbl_fn_80488B5C_000018C4:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80488D6C(void)
{
    nofralloc
    li r4, 0x0
    li r5, 0x4
    li r6, 0x0
    addi r3, r3, 0x1f28
    b fn_800CB640
}

asm void fn_80488D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x1f20
    bl fn_8004B1EC
    addi r3, r31, 0x1f28
    bl fn_800CB480
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80488DB8(void)
{
    nofralloc
    lfs f0, 0x1f68(r3)
    lfs f1, lbl_80886F8C
    fcmpo cr0, f0, f1
    blelr
    lwz r4, lbl_8087EFA8
    lfs f2, 0x3a4(r4)
    fsubs f0, f0, f2
    stfs f0, 0x1f68(r3)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bnelr
    stfs f1, 0x1f68(r3)
    li r4, 0x0
    li r5, 0x4
    li r6, 0x0
    addi r3, r3, 0x1f28
    b fn_800CB640
    blr
}

asm void fn_80488E00(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x64(r1)
    li r0, -0x1
    stmw r17, 0x24(r1)
    mr r20, r3
    mr r21, r4
    stw r5, 0x1f74(r3)
    stw r0, 0x2378(r3)
    lwz r0, 0xbc(r4)
    lwz r6, 0x94(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80488E00_000019CC
lbl_fn_80488E00_000019AC:
    lwz r3, 0xb8(r4)
    lwzx r26, r3, r5
    lwz r0, 0xc(r26)
    cmpw r6, r0
    bne lbl_fn_80488E00_000019C4
    b lbl_fn_80488E00_000019D0
lbl_fn_80488E00_000019C4:
    addi r5, r5, 0x8
    bdnz lbl_fn_80488E00_000019AC
lbl_fn_80488E00_000019CC:
    li r26, 0x0
lbl_fn_80488E00_000019D0:
    li r25, 0x0
    b lbl_fn_80488E00_00001DA8
lbl_fn_80488E00_000019D8:
    li r24, 0x0
    li r19, 0x0
    b lbl_fn_80488E00_00001D84
lbl_fn_80488E00_000019E4:
    cmpwi r24, 0x0
    li r0, 0x0
    blt lbl_fn_80488E00_000019FC
    cmpw r24, r3
    bge lbl_fn_80488E00_000019FC
    li r0, 0x1
lbl_fn_80488E00_000019FC:
    cmpwi r0, 0x0
    beq lbl_fn_80488E00_00001A10
    lwz r3, 0x3c(r26)
    lwzx r30, r3, r19
    b lbl_fn_80488E00_00001A14
lbl_fn_80488E00_00001A10:
    li r30, 0x0
lbl_fn_80488E00_00001A14:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80488E00_00001D7C
    lwz r0, 0xc(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80488E00_00001D7C
    li r23, 0x0
    li r18, 0x0
    b lbl_fn_80488E00_00001D70
lbl_fn_80488E00_00001A38:
    cmpwi r23, 0x0
    li r0, 0x0
    blt lbl_fn_80488E00_00001A50
    cmpw r23, r3
    bge lbl_fn_80488E00_00001A50
    li r0, 0x1
lbl_fn_80488E00_00001A50:
    cmpwi r0, 0x0
    beq lbl_fn_80488E00_00001A64
    lwz r3, 0x18(r30)
    lwzx r29, r3, r18
    b lbl_fn_80488E00_00001A68
lbl_fn_80488E00_00001A64:
    li r29, 0x0
lbl_fn_80488E00_00001A68:
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80488E00_00001D68
    lwz r0, 0xc(r29)
    cmpwi r0, 0x5
    bne lbl_fn_80488E00_00001D68
    lwz r0, 0x18(r29)
    li r22, 0x0
    li r17, 0x0
    cmpwi r0, 0x0
    ble lbl_fn_80488E00_00001D68
    b lbl_fn_80488E00_00001D5C
lbl_fn_80488E00_00001A98:
    cmpwi r22, 0x0
    li r0, 0x0
    blt lbl_fn_80488E00_00001AB0
    cmpw r22, r3
    bge lbl_fn_80488E00_00001AB0
    li r0, 0x1
lbl_fn_80488E00_00001AB0:
    cmpwi r0, 0x0
    beq lbl_fn_80488E00_00001AC4
    lwz r3, 0x14(r29)
    lwzx r28, r3, r17
    b lbl_fn_80488E00_00001AC8
lbl_fn_80488E00_00001AC4:
    li r28, 0x0
lbl_fn_80488E00_00001AC8:
    lwz r0, 0x30(r28)
    cmpwi r0, 0x0
    ble lbl_fn_80488E00_00001ADC
    lwz r4, 0x2c(r28)
    b lbl_fn_80488E00_00001AE0
lbl_fn_80488E00_00001ADC:
    li r4, 0x0
lbl_fn_80488E00_00001AE0:
    lwz r0, 0x118(r21)
    li r3, 0x0
    lwz r4, 0x4(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80488E00_00001B18
lbl_fn_80488E00_00001AF8:
    lwz r0, 0x114(r21)
    add r27, r0, r3
    lwz r0, 0x14(r27)
    cmpw r4, r0
    bne lbl_fn_80488E00_00001B10
    b lbl_fn_80488E00_00001B1C
lbl_fn_80488E00_00001B10:
    addi r3, r3, 0x18
    bdnz lbl_fn_80488E00_00001AF8
lbl_fn_80488E00_00001B18:
    li r27, 0x0
lbl_fn_80488E00_00001B1C:
    cmpwi r27, 0x0
    beq lbl_fn_80488E00_00001D54
    lwz r0, 0x8(r27)
    srwi. r0, r0, 31
    bne lbl_fn_80488E00_00001B3C
    lbz r0, 0x8(r27)
    clrlwi r0, r0, 25
    b lbl_fn_80488E00_00001B40
lbl_fn_80488E00_00001B3C:
    lwz r0, 0xc(r27)
lbl_fn_80488E00_00001B40:
    cmpwi r0, 0x0
    beq lbl_fn_80488E00_00001D54
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_80488E00_00001B88
    lwz r0, 0x8(r27)
    srwi. r0, r0, 31
    bne lbl_fn_80488E00_00001B68
    addi r4, r27, 0x9
    b lbl_fn_80488E00_00001B6C
lbl_fn_80488E00_00001B68:
    lwz r4, 0x10(r27)
lbl_fn_80488E00_00001B6C:
    bl fn_80049B74
    subi r4, r3, 0x1
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_80488E00_00001D54
lbl_fn_80488E00_00001B88:
    lwz r0, 0x1f74(r20)
    cmpwi r0, 0x0
    beq lbl_fn_80488E00_00001D24
    lwz r0, 0x190(r21)
    cmpwi r0, 0xe19
    bne lbl_fn_80488E00_00001D24
    lwz r0, 0x1f74(r20)
    slwi r0, r0, 3
    add r3, r20, r0
    lwz r3, 0x1f70(r3)
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80488E00_00001BC4
    lwz r3, 0x2c(r3)
    b lbl_fn_80488E00_00001BC8
lbl_fn_80488E00_00001BC4:
    li r3, 0x0
lbl_fn_80488E00_00001BC8:
    lwz r0, 0x118(r21)
    li r4, 0x0
    lwz r5, 0x4(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80488E00_00001C00
lbl_fn_80488E00_00001BE0:
    lwz r0, 0x114(r21)
    add r3, r0, r4
    lwz r0, 0x14(r3)
    cmpw r5, r0
    bne lbl_fn_80488E00_00001BF8
    b lbl_fn_80488E00_00001C04
lbl_fn_80488E00_00001BF8:
    addi r4, r4, 0x18
    bdnz lbl_fn_80488E00_00001BE0
lbl_fn_80488E00_00001C00:
    li r3, 0x0
lbl_fn_80488E00_00001C04:
    lwz r0, 0x8(r27)
    srwi. r0, r0, 31
    bne lbl_fn_80488E00_00001C1C
    lbz r0, 0x8(r27)
    clrlwi r5, r0, 25
    b lbl_fn_80488E00_00001C20
lbl_fn_80488E00_00001C1C:
    lwz r5, 0xc(r27)
lbl_fn_80488E00_00001C20:
    lwz r0, 0x8(r3)
    srwi. r4, r0, 31
    bne lbl_fn_80488E00_00001C38
    lbz r0, 0x8(r3)
    clrlwi r0, r0, 25
    b lbl_fn_80488E00_00001C3C
lbl_fn_80488E00_00001C38:
    lwz r0, 0xc(r3)
lbl_fn_80488E00_00001C3C:
    subf r0, r5, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80488E00_00001D1C
    cmpwi r4, 0x0
    bne lbl_fn_80488E00_00001C64
    lbz r0, 0x8(r3)
    addi r4, r3, 0x9
    clrlwi r31, r0, 25
    b lbl_fn_80488E00_00001C6C
lbl_fn_80488E00_00001C64:
    lwz r4, 0x10(r3)
    lwz r31, 0xc(r3)
lbl_fn_80488E00_00001C6C:
    stw r31, 0x14(r1)
    lwz r0, 0x8(r27)
    srwi. r0, r0, 31
    bne lbl_fn_80488E00_00001C88
    lbz r0, 0x8(r27)
    clrlwi r5, r0, 25
    b lbl_fn_80488E00_00001C8C
lbl_fn_80488E00_00001C88:
    lwz r5, 0xc(r27)
lbl_fn_80488E00_00001C8C:
    stw r5, 0x18(r1)
    lwz r0, 0x8(r27)
    srwi. r0, r0, 31
    bne lbl_fn_80488E00_00001CAC
    lbz r0, 0x8(r27)
    addi r3, r27, 0x9
    clrlwi r0, r0, 25
    b lbl_fn_80488E00_00001CB4
lbl_fn_80488E00_00001CAC:
    lwz r3, 0x10(r27)
    lwz r0, 0xc(r27)
lbl_fn_80488E00_00001CB4:
    cmplw r5, r0
    stw r0, 0x10(r1)
    addi r5, r1, 0x10
    bge lbl_fn_80488E00_00001CC8
    addi r5, r1, 0x18
lbl_fn_80488E00_00001CC8:
    lwz r0, 0x0(r5)
    addi r5, r1, 0xc
    stw r0, 0xc(r1)
    cmplw r31, r0
    bge lbl_fn_80488E00_00001CE0
    addi r5, r1, 0x14
lbl_fn_80488E00_00001CE0:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80488E00_00001D14
    lwz r0, 0xc(r1)
    cmplw r0, r31
    bge lbl_fn_80488E00_00001D04
    li r3, -0x1
    b lbl_fn_80488E00_00001D14
lbl_fn_80488E00_00001D04:
    bne lbl_fn_80488E00_00001D10
    li r3, 0x0
    b lbl_fn_80488E00_00001D14
lbl_fn_80488E00_00001D10:
    li r3, 0x1
lbl_fn_80488E00_00001D14:
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_80488E00_00001D1C:
    cmpwi r0, 0x0
    bne lbl_fn_80488E00_00001D54
lbl_fn_80488E00_00001D24:
    lwz r0, 0x1f74(r20)
    lwz r3, 0x10(r28)
    slwi r0, r0, 3
    add r0, r20, r0
    add r4, r25, r3
    addic. r3, r0, 0x1f78
    beq lbl_fn_80488E00_00001D48
    stw r28, 0x0(r3)
    stw r4, 0x4(r3)
lbl_fn_80488E00_00001D48:
    lwz r3, 0x1f74(r20)
    addi r0, r3, 0x1
    stw r0, 0x1f74(r20)
lbl_fn_80488E00_00001D54:
    addi r22, r22, 0x1
    addi r17, r17, 0x8
lbl_fn_80488E00_00001D5C:
    lwz r3, 0x18(r29)
    cmpw r22, r3
    blt lbl_fn_80488E00_00001A98
lbl_fn_80488E00_00001D68:
    addi r23, r23, 0x1
    addi r18, r18, 0x8
lbl_fn_80488E00_00001D70:
    lwz r3, 0x1c(r30)
    cmpw r23, r3
    blt lbl_fn_80488E00_00001A38
lbl_fn_80488E00_00001D7C:
    addi r24, r24, 0x1
    addi r19, r19, 0x8
lbl_fn_80488E00_00001D84:
    lwz r3, 0x40(r26)
    cmpw r24, r3
    blt lbl_fn_80488E00_000019E4
    lwz r0, 0x2c(r26)
    mr r3, r21
    mr r4, r26
    add r25, r25, r0
    bl fn_8047B768
    mr r26, r3
lbl_fn_80488E00_00001DA8:
    cmpwi r26, 0x0
    bne lbl_fn_80488E00_000019D8
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r20, 0x1f78
    addi r5, r1, 0x8
    lwz r0, 0x1f74(r20)
    slwi r0, r0, 3
    add r4, r20, r0
    addi r4, r4, 0x1f78
    bl fn_80489280
    li r0, -0x1
    stw r0, 0x2378(r20)
    lmw r17, 0x24(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
