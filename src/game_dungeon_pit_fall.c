#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _savegpr_19(void);
extern void dtor_80084684(void);
extern void fn_8007A530(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_800CA144(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB480(void);
extern void fn_800CB4EC(void);
extern void fn_800CB504(void);
extern void fn_800CB58C(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6E4(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_80179F98(void);
extern void fn_801F583C(void);
extern void fn_801F5BC8(void);
extern void fn_803EA09C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_8078BE40[];
extern u8 lbl_807506A0[];
extern u8 lbl_80751D08[];
extern u8 lbl_80751D1C[];
extern u8 lbl_8078C690[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8628[];

/* Small data declarations */
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F540;
extern u32 lbl_80885D58;
extern u32 lbl_80885D60;
extern u32 lbl_80885D74;
extern u32 lbl_80885D8C;
extern u32 lbl_80885DA0;
extern u32 lbl_80885DAC;
extern u32 lbl_80885DB0;
extern u32 lbl_80885DB8;
extern u32 lbl_80885DD8;
extern u32 lbl_80885DE8;
extern u32 lbl_80885DEC;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E28;
extern u32 lbl_80885EE0;
extern u32 lbl_80885F0C;
extern u32 lbl_80885F10;
extern u32 lbl_80885F14;
extern u32 lbl_80885F18;
extern u32 lbl_80885F1C;
extern u32 lbl_80885F20;
extern u32 lbl_80885F24;
extern u32 lbl_80885F28;
extern u32 lbl_80885F2C;
extern u32 lbl_80885F30;
extern u32 lbl_80885F34;
extern u32 lbl_80885F38;
extern u32 lbl_80885F3C;
extern u32 lbl_80885F40;
extern u32 lbl_80885F44;
extern u32 lbl_80885F48;
extern u32 lbl_80885F4C;

/* Function declarations */
void fn_803E746C(void);
void fn_803E78B4(void);
void fn_803E836C(void);
void fn_803E8698(void);
void fn_803E877C(void);
void fn_803E8820(void);
void fn_803E8908(void);
void fn_803E8948(void);
void fn_803E8A24(void);
void fn_803E8A50(void);

asm void fn_803E746C(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    cmpwi r4, 0x4
    stw r0, 0x164(r1)
    stw r31, 0x15c(r1)
    stw r30, 0x158(r1)
    stw r29, 0x154(r1)
    lis r29, lbl_807C8628@ha
    addi r29, r29, lbl_807C8628@l
    stw r28, 0x150(r1)
    mr r28, r3
    bne lbl_fn_803E746C_000000FC
    lfs f3, lbl_80885DFC
    lis r31, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r31, r31, lbl_807506A0@l
    lfs f1, lbl_80885DE8
    addi r4, r31, 0x1378
    lfs f0, lbl_80885E28
    addi r5, r1, 0x138
    stfs f3, 0x138(r1)
    stfs f2, 0x13c(r1)
    stfs f1, 0x140(r1)
    stfs f0, 0x144(r1)
    bl fn_801F583C
    lfs f3, lbl_80885DFC
    mr r3, r28
    lfs f2, lbl_80885D58
    addi r4, r31, 0x1382
    lfs f1, lbl_80885DE8
    addi r5, r1, 0x128
    lfs f0, lbl_80885E28
    stfs f3, 0x128(r1)
    stfs f2, 0x12c(r1)
    stfs f1, 0x130(r1)
    stfs f0, 0x134(r1)
    bl fn_801F583C
    addi r30, r29, 0x40
    lfs f3, 0x40(r29)
    lfs f2, 0x4(r30)
    mr r3, r28
    lfs f1, 0x8(r30)
    addi r4, r31, 0x138c
    lfs f0, 0xc(r30)
    addi r5, r1, 0x118
    stfs f3, 0x118(r1)
    stfs f2, 0x11c(r1)
    stfs f1, 0x120(r1)
    stfs f0, 0x124(r1)
    bl fn_801F5BC8
    lfs f3, 0x40(r29)
    mr r3, r28
    lfs f2, 0x4(r30)
    addi r4, r31, 0x1396
    lfs f1, 0x8(r30)
    addi r5, r1, 0x108
    lfs f0, 0xc(r30)
    stfs f3, 0x108(r1)
    stfs f2, 0x10c(r1)
    stfs f1, 0x110(r1)
    stfs f0, 0x114(r1)
    bl fn_801F5BC8
    b lbl_fn_803E746C_00000428
lbl_fn_803E746C_000000FC:
    cmpwi r4, 0x2
    bne lbl_fn_803E746C_000001C0
    lfs f1, lbl_80885D58
    lis r31, lbl_807506A0@ha
    lfs f0, lbl_80885E28
    addi r31, r31, lbl_807506A0@l
    stfs f1, 0xf8(r1)
    addi r4, r31, 0x1378
    addi r5, r1, 0xf8
    stfs f1, 0xfc(r1)
    stfs f0, 0x100(r1)
    stfs f0, 0x104(r1)
    bl fn_801F583C
    lfs f1, lbl_80885D58
    mr r3, r28
    lfs f0, lbl_80885E28
    addi r4, r31, 0x1382
    stfs f1, 0xe8(r1)
    addi r5, r1, 0xe8
    stfs f1, 0xec(r1)
    stfs f0, 0xf0(r1)
    stfs f0, 0xf4(r1)
    bl fn_801F583C
    addi r30, r29, 0x10
    lfs f3, 0x10(r29)
    lfs f2, 0x4(r30)
    mr r3, r28
    lfs f1, 0x8(r30)
    addi r4, r31, 0x138c
    lfs f0, 0xc(r30)
    addi r5, r1, 0xd8
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_801F5BC8
    lfs f3, 0x10(r29)
    mr r3, r28
    lfs f2, 0x4(r30)
    addi r4, r31, 0x1396
    lfs f1, 0x8(r30)
    addi r5, r1, 0xc8
    lfs f0, 0xc(r30)
    stfs f3, 0xc8(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xd0(r1)
    stfs f0, 0xd4(r1)
    bl fn_801F5BC8
    b lbl_fn_803E746C_00000428
lbl_fn_803E746C_000001C0:
    cmpwi r4, 0x3
    bne lbl_fn_803E746C_0000028C
    lfs f2, lbl_80885E28
    lis r31, lbl_807506A0@ha
    lfs f1, lbl_80885D58
    addi r31, r31, lbl_807506A0@l
    lfs f0, lbl_80885DFC
    addi r4, r31, 0x1378
    stfs f2, 0xb8(r1)
    addi r5, r1, 0xb8
    stfs f1, 0xbc(r1)
    stfs f0, 0xc0(r1)
    stfs f2, 0xc4(r1)
    bl fn_801F583C
    lfs f2, lbl_80885E28
    mr r3, r28
    lfs f1, lbl_80885D58
    addi r4, r31, 0x1382
    lfs f0, lbl_80885DFC
    addi r5, r1, 0xa8
    stfs f2, 0xa8(r1)
    stfs f1, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f2, 0xb4(r1)
    bl fn_801F583C
    addi r30, r29, 0x20
    lfs f3, 0x20(r29)
    lfs f2, 0x4(r30)
    mr r3, r28
    lfs f1, 0x8(r30)
    addi r4, r31, 0x138c
    lfs f0, 0xc(r30)
    addi r5, r1, 0x98
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    bl fn_801F5BC8
    lfs f3, 0x20(r29)
    mr r3, r28
    lfs f2, 0x4(r30)
    addi r4, r31, 0x1396
    lfs f1, 0x8(r30)
    addi r5, r1, 0x88
    lfs f0, 0xc(r30)
    stfs f3, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_801F5BC8
    b lbl_fn_803E746C_00000428
lbl_fn_803E746C_0000028C:
    cmpwi r4, 0x1
    bne lbl_fn_803E746C_00000360
    lfs f3, lbl_80885DE8
    lis r31, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r31, r31, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r31, 0x1378
    lfs f0, lbl_80885E28
    addi r5, r1, 0x78
    stfs f3, 0x78(r1)
    stfs f2, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f0, 0x84(r1)
    bl fn_801F583C
    lfs f3, lbl_80885DE8
    mr r3, r28
    lfs f2, lbl_80885D58
    addi r4, r31, 0x1382
    lfs f1, lbl_80885D60
    addi r5, r1, 0x68
    lfs f0, lbl_80885E28
    stfs f3, 0x68(r1)
    stfs f2, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f0, 0x74(r1)
    bl fn_801F583C
    addi r30, r29, 0x0
    lfs f3, 0x0(r29)
    lfs f2, 0x4(r30)
    mr r3, r28
    lfs f1, 0x8(r30)
    addi r4, r31, 0x138c
    lfs f0, 0xc(r30)
    addi r5, r1, 0x58
    stfs f3, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_801F5BC8
    lfs f3, 0x0(r29)
    mr r3, r28
    lfs f2, 0x4(r30)
    addi r4, r31, 0x1396
    lfs f1, 0x8(r30)
    addi r5, r1, 0x48
    lfs f0, 0xc(r30)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_801F5BC8
    b lbl_fn_803E746C_00000428
lbl_fn_803E746C_00000360:
    lfs f3, lbl_80885DE8
    lis r30, lbl_807506A0@ha
    lfs f2, lbl_80885D58
    addi r30, r30, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r30, 0x1378
    lfs f0, lbl_80885E28
    addi r5, r1, 0x38
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_801F583C
    lfs f3, lbl_80885DE8
    mr r3, r28
    lfs f2, lbl_80885D58
    addi r4, r30, 0x1382
    lfs f1, lbl_80885D60
    addi r5, r1, 0x28
    lfs f0, lbl_80885E28
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_801F583C
    addi r31, r29, 0x50
    lfs f3, 0x50(r29)
    lfs f2, 0x4(r31)
    mr r3, r28
    lfs f1, 0x8(r31)
    addi r4, r30, 0x138c
    lfs f0, 0xc(r31)
    addi r5, r1, 0x18
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_801F5BC8
    lfs f3, 0x50(r29)
    mr r3, r28
    lfs f2, 0x4(r31)
    addi r4, r30, 0x1396
    lfs f1, 0x8(r31)
    addi r5, r1, 0x8
    lfs f0, 0xc(r31)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_801F5BC8
lbl_fn_803E746C_00000428:
    lwz r0, 0x164(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r28, 0x150(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_803E78B4(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    lis r12, lbl_807C8628@ha
    addi r12, r12, lbl_807C8628@l
    lfs f0, lbl_80885D60
    stfd f31, 0x410(r1)
    addi r9, r12, 0x20
    lfs f9, lbl_80885F18
    addi r5, r12, 0x60
    psq_st f31, 0x418(r1), 0, 0
    addi r3, r12, 0x80
    lfs f8, lbl_80885F1C
    addi r11, r12, 0x0
    stfd f30, 0x400(r1)
    addi r10, r12, 0x10
    lfs f3, lbl_80885D74
    addi r8, r12, 0x30
    psq_st f30, 0x408(r1), 0, 0
    addi r7, r12, 0x40
    lfs f30, lbl_80885D58
    addi r6, r12, 0x50
    stfd f29, 0x3f0(r1)
    addi r4, r12, 0x70
    lfs f10, lbl_80885F14
    psq_st f29, 0x3f8(r1), 0, 0
    lfs f7, lbl_80885DB8
    stw r31, 0x3ec(r1)
    lis r31, jumptable_8078BE40@ha
    lfs f31, lbl_80885DD8
    addi r31, r31, jumptable_8078BE40@l
    stw r30, 0x3e8(r1)
    lfs f6, lbl_80885F20
    stw r29, 0x3e4(r1)
    lfs f12, lbl_80885F0C
    lfs f29, lbl_80885DEC
    lfs f11, lbl_80885F10
    lfs f5, lbl_80885DA0
    lfs f4, lbl_80885F24
    stfs f0, 0x0(r12)
    stfs f12, 0x4(r11)
    stfs f29, 0x8(r11)
    stfs f30, 0xc(r11)
    stfs f11, 0x10(r12)
    stfs f10, 0x4(r10)
    stfs f10, 0x8(r10)
    stfs f30, 0xc(r10)
    stfs f9, 0x20(r12)
    stfs f9, 0x4(r9)
    stfs f9, 0x8(r9)
    stfs f30, 0xc(r9)
    stfs f8, 0x30(r12)
    stfs f7, 0x4(r8)
    stfs f6, 0x8(r8)
    stfs f30, 0xc(r8)
    stfs f8, 0x40(r12)
    stfs f7, 0x4(r7)
    stfs f6, 0x8(r7)
    stfs f30, 0xc(r7)
    stfs f31, 0x50(r12)
    stfs f31, 0x4(r6)
    stfs f31, 0x8(r6)
    stfs f30, 0xc(r6)
    stfs f9, 0x60(r12)
    stfs f9, 0x4(r5)
    stfs f9, 0x8(r5)
    stfs f30, 0xc(r5)
    stfs f0, 0x70(r12)
    stfs f5, 0x4(r4)
    stfs f4, 0x8(r4)
    stfs f30, 0xc(r4)
    stfs f3, 0x80(r12)
    stfs f3, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f30, 0xc(r3)
    lfs f8, lbl_80885E28
    addi r5, r12, 0xe0
    stfs f30, 0x3c8(r1)
    addi r10, r12, 0x90
    addi r11, r1, 0x3c8
    addi r8, r12, 0xb0
    addi r7, r12, 0xc0
    lfs f13, lbl_80885F28
    stfs f30, 0x3cc(r1)
    addi r9, r12, 0xa0
    addi r6, r12, 0xd0
    lfs f4, lbl_80885F38
    addi r4, r12, 0xf0
    lfs f3, lbl_80885F3C
    lfs f12, lbl_80885D8C
    addi r3, r31, 0x28
    lfs f11, lbl_80885DAC
    lfs f10, lbl_80885DB0
    lfs f9, lbl_80885F2C
    lfs f6, lbl_80885F30
    lfs f5, lbl_80885F34
    psq_l f1, 0x0(r11), 0, 0
    lfs f7, lbl_80885DFC
    stfs f8, 0x3d0(r1)
    stfs f8, 0x3d4(r1)
    psq_l f2, 0x8(r11), 0, 0
    stfs f29, 0x90(r12)
    stfs f0, 0x4(r10)
    stfs f13, 0x8(r10)
    stfs f30, 0xc(r10)
    stfs f12, 0xa0(r12)
    stfs f11, 0x4(r9)
    stfs f10, 0x8(r9)
    stfs f30, 0xc(r9)
    stfs f9, 0xb0(r12)
    stfs f6, 0x4(r8)
    stfs f0, 0x8(r8)
    stfs f30, 0xc(r8)
    stfs f13, 0xc0(r12)
    stfs f5, 0x4(r7)
    stfs f31, 0x8(r7)
    stfs f30, 0xc(r7)
    stfs f31, 0xd0(r12)
    stfs f4, 0x4(r6)
    stfs f4, 0x8(r6)
    stfs f30, 0xc(r6)
    stfs f0, 0xe0(r12)
    stfs f0, 0x4(r5)
    stfs f0, 0x8(r5)
    stfs f30, 0xc(r5)
    stfs f3, 0xf0(r12)
    stfs f3, 0x4(r4)
    stfs f3, 0x8(r4)
    stfs f30, 0xc(r4)
    psq_st f1, 0x8(r3), 0, 0
    psq_st f2, 0x10(r3), 0, 0
    stfs f8, 0x3b8(r1)
    stfs f30, 0x3bc(r1)
    stfs f7, 0x3c0(r1)
    stfs f8, 0x3c4(r1)
    addi r4, r1, 0x3b8
    lfs f6, lbl_80885DE8
    addi r5, r1, 0x3a8
    psq_l f1, 0x0(r4), 0, 0
    addi r6, r1, 0x398
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0x388
    stfs f30, 0x3a8(r1)
    addi r7, r1, 0x378
    addi r8, r1, 0x368
    addi r9, r1, 0x358
    stfs f8, 0x3ac(r1)
    addi r10, r1, 0x348
    addi r11, r1, 0x338
    addi r12, r1, 0x328
    psq_st f1, 0x20(r3), 0, 0
    addi r30, r1, 0x318
    psq_l f1, 0x0(r5), 0, 0
    stfs f8, 0x3b0(r1)
    stfs f7, 0x3b4(r1)
    psq_st f2, 0x28(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f6, 0x398(r1)
    stfs f30, 0x39c(r1)
    psq_st f1, 0x38(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x3a0(r1)
    stfs f8, 0x3a4(r1)
    psq_st f2, 0x40(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f30, 0x388(r1)
    stfs f30, 0x38c(r1)
    psq_st f1, 0x50(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f30, 0x390(r1)
    stfs f30, 0x394(r1)
    psq_st f2, 0x58(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f30, 0x378(r1)
    stfs f30, 0x37c(r1)
    psq_st f1, 0x68(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f30, 0x380(r1)
    stfs f30, 0x384(r1)
    psq_st f2, 0x70(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f7, 0x368(r1)
    stfs f8, 0x36c(r1)
    psq_st f1, 0x80(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f6, 0x370(r1)
    stfs f7, 0x374(r1)
    psq_st f2, 0x88(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f7, 0x358(r1)
    stfs f30, 0x35c(r1)
    psq_st f1, 0x98(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f6, 0x360(r1)
    stfs f8, 0x364(r1)
    psq_st f2, 0xa0(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f30, 0x348(r1)
    stfs f30, 0x34c(r1)
    psq_st f1, 0xb0(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f30, 0x350(r1)
    stfs f30, 0x354(r1)
    psq_st f2, 0xb8(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f30, 0x338(r1)
    stfs f30, 0x33c(r1)
    psq_st f1, 0xc8(r3), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f30, 0x340(r1)
    stfs f30, 0x344(r1)
    psq_st f2, 0xd0(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f30, 0x328(r1)
    stfs f30, 0x32c(r1)
    psq_st f1, 0xe0(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f30, 0x330(r1)
    stfs f30, 0x334(r1)
    psq_st f2, 0xe8(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f30, 0x318(r1)
    stfs f30, 0x31c(r1)
    psq_st f1, 0xf8(r3), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f30, 0x320(r1)
    stfs f30, 0x324(r1)
    psq_st f2, 0x100(r3), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_st f1, 0x110(r3), 0, 0
    psq_st f2, 0x118(r3), 0, 0
    stfs f30, 0x308(r1)
    addi r5, r1, 0x308
    lfs f5, lbl_80885EE0
    addi r6, r1, 0x2f8
    stfs f7, 0x30c(r1)
    addi r7, r1, 0x2e8
    addi r8, r1, 0x2d8
    addi r9, r1, 0x2c8
    psq_l f1, 0x0(r5), 0, 0
    addi r10, r1, 0x2b8
    stfs f8, 0x310(r1)
    addi r11, r1, 0x2a8
    addi r12, r1, 0x298
    addi r30, r1, 0x288
    stfs f6, 0x314(r1)
    addi r4, r31, 0x208
    addi r29, r1, 0x278
    psq_l f2, 0x8(r5), 0, 0
    stfs f8, 0x2f8(r1)
    stfs f8, 0x2fc(r1)
    psq_st f1, 0x128(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f7, 0x300(r1)
    stfs f7, 0x304(r1)
    psq_st f2, 0x130(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f7, 0x2e8(r1)
    stfs f6, 0x2ec(r1)
    psq_st f1, 0x140(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f6, 0x2f0(r1)
    stfs f0, 0x2f4(r1)
    psq_st f2, 0x148(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f7, 0x2d8(r1)
    stfs f7, 0x2dc(r1)
    psq_st f1, 0x158(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f6, 0x2e0(r1)
    stfs f6, 0x2e4(r1)
    psq_st f2, 0x160(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f30, 0x2c8(r1)
    stfs f6, 0x2cc(r1)
    psq_st f1, 0x170(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f8, 0x2d0(r1)
    stfs f0, 0x2d4(r1)
    psq_st f2, 0x178(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f8, 0x2b8(r1)
    stfs f6, 0x2bc(r1)
    psq_st f1, 0x188(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f7, 0x2c0(r1)
    stfs f0, 0x2c4(r1)
    psq_st f2, 0x190(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f6, 0x2a8(r1)
    stfs f7, 0x2ac(r1)
    psq_st f1, 0x1a0(r3), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f0, 0x2b0(r1)
    stfs f6, 0x2b4(r1)
    psq_st f2, 0x1a8(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f8, 0x298(r1)
    stfs f7, 0x29c(r1)
    psq_st f1, 0x1b8(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f7, 0x2a0(r1)
    stfs f6, 0x2a4(r1)
    psq_st f2, 0x1c0(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f30, 0x288(r1)
    stfs f30, 0x28c(r1)
    psq_st f1, 0x1d0(r3), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f8, 0x290(r1)
    stfs f5, 0x294(r1)
    psq_st f2, 0x1d8(r3), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    stfs f8, 0x278(r1)
    stfs f5, 0x27c(r1)
    psq_st f1, 0xc(r4), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f7, 0x280(r1)
    stfs f8, 0x284(r1)
    psq_st f2, 0x14(r4), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_st f1, 0x28(r4), 0, 0
    psq_st f2, 0x30(r4), 0, 0
    stfs f7, 0x268(r1)
    stfs f30, 0x26c(r1)
    stfs f6, 0x270(r1)
    stfs f5, 0x274(r1)
    addi r3, r1, 0x268
    stfs f8, 0x258(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x258
    psq_l f2, 0x8(r3), 0, 0
    addi r3, r1, 0x248
    stfs f30, 0x25c(r1)
    addi r6, r1, 0x238
    addi r7, r1, 0x228
    lfs f4, lbl_80885F40
    psq_st f1, 0x44(r4), 0, 0
    addi r8, r1, 0x218
    psq_l f1, 0x0(r5), 0, 0
    addi r9, r1, 0x208
    stfs f7, 0x260(r1)
    addi r10, r1, 0x1f8
    addi r11, r1, 0x1e8
    addi r12, r1, 0x1d8
    stfs f5, 0x264(r1)
    addi r29, r1, 0x1c8
    psq_st f2, 0x4c(r4), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f6, 0x248(r1)
    stfs f30, 0x24c(r1)
    psq_st f1, 0x60(r4), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x250(r1)
    stfs f5, 0x254(r1)
    psq_st f2, 0x68(r4), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    stfs f7, 0x238(r1)
    stfs f30, 0x23c(r1)
    psq_st f1, 0x7c(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x240(r1)
    stfs f5, 0x244(r1)
    psq_st f2, 0x84(r4), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f30, 0x228(r1)
    stfs f5, 0x22c(r1)
    psq_st f1, 0x98(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f8, 0x230(r1)
    stfs f8, 0x234(r1)
    psq_st f2, 0xa0(r4), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f30, 0x218(r1)
    stfs f30, 0x21c(r1)
    psq_st f1, 0xb4(r4), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f30, 0x220(r1)
    stfs f30, 0x224(r1)
    psq_st f2, 0xbc(r4), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f30, 0x208(r1)
    stfs f30, 0x20c(r1)
    psq_st f1, 0xd0(r4), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f30, 0x210(r1)
    stfs f30, 0x214(r1)
    psq_st f2, 0xd8(r4), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f8, 0x1f8(r1)
    stfs f4, 0x1fc(r1)
    psq_st f1, 0xec(r4), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f7, 0x200(r1)
    stfs f7, 0x204(r1)
    psq_st f2, 0xf4(r4), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f7, 0x1e8(r1)
    stfs f5, 0x1ec(r1)
    psq_st f1, 0x108(r4), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f6, 0x1f0(r1)
    stfs f8, 0x1f4(r1)
    psq_st f2, 0x110(r4), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f7, 0x1d8(r1)
    stfs f8, 0x1dc(r1)
    psq_st f1, 0x124(r4), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f6, 0x1e0(r1)
    stfs f4, 0x1e4(r1)
    psq_st f2, 0x12c(r4), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f8, 0x1c8(r1)
    stfs f4, 0x1cc(r1)
    psq_st f1, 0x140(r4), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f7, 0x1d0(r1)
    stfs f7, 0x1d4(r1)
    psq_st f2, 0x148(r4), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_st f1, 0x15c(r4), 0, 0
    psq_st f2, 0x164(r4), 0, 0
    stfs f6, 0x1b8(r1)
    stfs f8, 0x1bc(r1)
    stfs f0, 0x1c0(r1)
    stfs f4, 0x1c4(r1)
    addi r3, r1, 0x1b8
    lfs f3, lbl_80885F44
    addi r5, r1, 0x1a8
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x198
    psq_l f2, 0x8(r3), 0, 0
    addi r7, r1, 0x188
    stfs f7, 0x1a8(r1)
    addi r8, r1, 0x178
    addi r9, r1, 0x168
    addi r3, r31, 0x400
    stfs f5, 0x1ac(r1)
    addi r10, r1, 0x158
    addi r11, r1, 0x148
    addi r12, r1, 0x138
    psq_st f1, 0x178(r4), 0, 0
    addi r29, r1, 0x128
    psq_l f1, 0x0(r5), 0, 0
    addi r30, r1, 0x118
    stfs f6, 0x1b0(r1)
    stfs f8, 0x1b4(r1)
    psq_st f2, 0x180(r4), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f7, 0x198(r1)
    stfs f7, 0x19c(r1)
    psq_st f1, 0x194(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x1a0(r1)
    stfs f3, 0x1a4(r1)
    psq_st f2, 0x19c(r4), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f6, 0x188(r1)
    stfs f7, 0x18c(r1)
    psq_st f1, 0x1b0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x190(r1)
    stfs f3, 0x194(r1)
    psq_st f2, 0x1b8(r4), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f6, 0x178(r1)
    stfs f8, 0x17c(r1)
    psq_st f1, 0x1cc(r4), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f0, 0x180(r1)
    stfs f4, 0x184(r1)
    psq_st f2, 0x1d4(r4), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f30, 0x168(r1)
    stfs f5, 0x16c(r1)
    psq_st f1, 0x1e8(r4), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f8, 0x170(r1)
    stfs f8, 0x174(r1)
    psq_st f2, 0x1f0(r4), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f6, 0x158(r1)
    stfs f5, 0x15c(r1)
    psq_st f1, 0xc(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f0, 0x160(r1)
    stfs f8, 0x164(r1)
    psq_st f2, 0x14(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f30, 0x148(r1)
    stfs f5, 0x14c(r1)
    psq_st f1, 0x28(r3), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f8, 0x150(r1)
    stfs f8, 0x154(r1)
    psq_st f2, 0x30(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f6, 0x138(r1)
    stfs f4, 0x13c(r1)
    psq_st f1, 0x44(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f0, 0x140(r1)
    stfs f7, 0x144(r1)
    psq_st f2, 0x4c(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f8, 0x128(r1)
    stfs f4, 0x12c(r1)
    psq_st f1, 0x60(r3), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f7, 0x130(r1)
    stfs f7, 0x134(r1)
    psq_st f2, 0x68(r3), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    stfs f30, 0x118(r1)
    stfs f30, 0x11c(r1)
    psq_st f1, 0x7c(r3), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f30, 0x120(r1)
    stfs f30, 0x124(r1)
    psq_st f2, 0x84(r3), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_st f1, 0x98(r3), 0, 0
    psq_st f2, 0xa0(r3), 0, 0
    stfs f30, 0x108(r1)
    addi r4, r1, 0x108
    addi r5, r1, 0xf8
    addi r6, r1, 0xe8
    stfs f7, 0x10c(r1)
    addi r7, r1, 0xd8
    addi r8, r1, 0xc8
    addi r9, r1, 0xb8
    psq_l f1, 0x0(r4), 0, 0
    addi r10, r1, 0xa8
    stfs f8, 0x110(r1)
    addi r11, r1, 0x98
    addi r12, r1, 0x88
    addi r29, r1, 0x78
    stfs f3, 0x114(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f8, 0xf8(r1)
    stfs f7, 0xfc(r1)
    psq_st f1, 0xb4(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f7, 0x100(r1)
    stfs f3, 0x104(r1)
    psq_st f2, 0xbc(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f30, 0xe8(r1)
    stfs f8, 0xec(r1)
    psq_st f1, 0xd0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f8, 0xf0(r1)
    stfs f4, 0xf4(r1)
    psq_st f2, 0xd8(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f30, 0xd8(r1)
    stfs f4, 0xdc(r1)
    psq_st f1, 0xec(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f8, 0xe0(r1)
    stfs f7, 0xe4(r1)
    psq_st f2, 0xf4(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f30, 0xc8(r1)
    stfs f30, 0xcc(r1)
    psq_st f1, 0x108(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f30, 0xd0(r1)
    stfs f30, 0xd4(r1)
    psq_st f2, 0x110(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f30, 0xb8(r1)
    stfs f30, 0xbc(r1)
    psq_st f1, 0x124(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f30, 0xc0(r1)
    stfs f30, 0xc4(r1)
    psq_st f2, 0x12c(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f30, 0xa8(r1)
    stfs f30, 0xac(r1)
    psq_st f1, 0x140(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f30, 0xb0(r1)
    stfs f30, 0xb4(r1)
    psq_st f2, 0x148(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f30, 0x98(r1)
    stfs f30, 0x9c(r1)
    psq_st f1, 0x15c(r3), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f30, 0xa0(r1)
    stfs f30, 0xa4(r1)
    psq_st f2, 0x164(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f30, 0x88(r1)
    stfs f30, 0x8c(r1)
    psq_st f1, 0x178(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f30, 0x90(r1)
    stfs f30, 0x94(r1)
    psq_st f2, 0x180(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f30, 0x78(r1)
    stfs f30, 0x7c(r1)
    psq_st f1, 0x194(r3), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f30, 0x80(r1)
    stfs f30, 0x84(r1)
    psq_st f2, 0x19c(r3), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_st f1, 0x1b0(r3), 0, 0
    psq_st f2, 0x1b8(r3), 0, 0
    stfs f30, 0x68(r1)
    stfs f30, 0x6c(r1)
    stfs f30, 0x70(r1)
    stfs f30, 0x74(r1)
    addi r4, r1, 0x68
    stfs f30, 0x58(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x58
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0x48
    stfs f30, 0x5c(r1)
    addi r6, r1, 0x38
    addi r7, r1, 0x28
    addi r8, r1, 0x18
    psq_st f1, 0x1cc(r3), 0, 0
    addi r9, r1, 0x8
    psq_l f1, 0x0(r5), 0, 0
    stfs f30, 0x60(r1)
    stfs f30, 0x64(r1)
    psq_st f2, 0x1d4(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f30, 0x48(r1)
    stfs f30, 0x4c(r1)
    psq_st f1, 0x1e8(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f30, 0x50(r1)
    stfs f30, 0x54(r1)
    psq_st f2, 0x1f0(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f30, 0x38(r1)
    stfs f30, 0x3c(r1)
    psq_st f1, 0x204(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f30, 0x40(r1)
    stfs f30, 0x44(r1)
    psq_st f2, 0x20c(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f30, 0x28(r1)
    stfs f30, 0x2c(r1)
    psq_st f1, 0x220(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f30, 0x30(r1)
    stfs f30, 0x34(r1)
    psq_st f2, 0x228(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f30, 0x18(r1)
    stfs f30, 0x1c(r1)
    psq_st f1, 0x23c(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f30, 0x20(r1)
    stfs f30, 0x24(r1)
    psq_st f2, 0x244(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f30, 0x8(r1)
    stfs f30, 0xc(r1)
    psq_st f1, 0x258(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f30, 0x10(r1)
    stfs f30, 0x14(r1)
    psq_st f2, 0x260(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    psq_st f1, 0x274(r3), 0, 0
    psq_st f2, 0x27c(r3), 0, 0
    psq_l f31, 0x418(r1), 0, 0
    lfd f31, 0x410(r1)
    psq_l f30, 0x408(r1), 0, 0
    lfd f30, 0x400(r1)
    psq_l f29, 0x3f8(r1), 0, 0
    lfd f29, 0x3f0(r1)
    lwz r31, 0x3ec(r1)
    lwz r30, 0x3e8(r1)
    lwz r29, 0x3e4(r1)
    addi r1, r1, 0x420
    blr
}

asm void fn_803E836C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_803E836C_00001210
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    bne lbl_fn_803E836C_00001210
    lis r5, lbl_80751D1C@ha
    li r3, 0x1f98
    addi r5, r5, lbl_80751D1C@l
    li r4, 0xa
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803E836C_0000120C
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_8078C690@ha
    lis r4, fn_803E8698@ha
    addi r3, r3, lbl_8078C690@l
    lis r5, fn_803E877C@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0x48
    addi r4, r4, fn_803E8698@l
    addi r5, r5, fn_803E877C@l
    li r6, 0x30
    li r7, 0x4
    bl fn_806958E0
    li r4, 0x1
    stw r4, 0x10c(r31)
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x110(r31)
    addi r6, r31, 0x13c
    addi r8, r31, 0x394
    lfs f1, lbl_80885F48
    stw r3, 0x114(r31)
    cmplw r6, r8
    lfs f0, lbl_80885F4C
    stw r3, 0x118(r31)
    stw r0, 0x11c(r31)
    stw r3, 0x120(r31)
    stfs f1, 0x124(r31)
    stfs f0, 0x128(r31)
    stw r4, 0x12c(r31)
    stw r3, 0x130(r31)
    stw r3, 0x134(r31)
    stw r3, 0x138(r31)
    bge lbl_fn_803E836C_000011E4
    addi r0, r31, 0x13c
    subi r7, r8, 0x140
    cmplw r0, r8
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_803E836C_00000FF8
    li r3, 0x1
lbl_fn_803E836C_00000FF8:
    cmpwi r3, 0x0
    beq lbl_fn_803E836C_00001004
    li r0, 0x1
lbl_fn_803E836C_00001004:
    cmpwi r0, 0x0
    beq lbl_fn_803E836C_00001184
    addi r3, r7, 0x13f
    li r0, 0x140
    subf r3, r6, r3
    lfs f1, lbl_80885F48
    divwu r3, r3, r0
    lfs f0, lbl_80885F4C
    li r5, 0x0
    li r4, -0x1
    li r0, 0x1
    mtctr r3
    cmplw r6, r7
    bge lbl_fn_803E836C_00001184
lbl_fn_803E836C_0000103C:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    stw r4, 0x8(r6)
    stw r5, 0xc(r6)
    stfs f1, 0x10(r6)
    stfs f0, 0x14(r6)
    stw r0, 0x18(r6)
    stw r5, 0x1c(r6)
    stw r5, 0x20(r6)
    stw r5, 0x24(r6)
    stw r5, 0x28(r6)
    stw r5, 0x2c(r6)
    stw r4, 0x30(r6)
    stw r5, 0x34(r6)
    stfs f1, 0x38(r6)
    stfs f0, 0x3c(r6)
    stw r0, 0x40(r6)
    stw r5, 0x44(r6)
    stw r5, 0x48(r6)
    stw r5, 0x4c(r6)
    stw r5, 0x50(r6)
    stw r5, 0x54(r6)
    stw r4, 0x58(r6)
    stw r5, 0x5c(r6)
    stfs f1, 0x60(r6)
    stfs f0, 0x64(r6)
    stw r0, 0x68(r6)
    stw r5, 0x6c(r6)
    stw r5, 0x70(r6)
    stw r5, 0x74(r6)
    stw r5, 0x78(r6)
    stw r5, 0x7c(r6)
    stw r4, 0x80(r6)
    stw r5, 0x84(r6)
    stfs f1, 0x88(r6)
    stfs f0, 0x8c(r6)
    stw r0, 0x90(r6)
    stw r5, 0x94(r6)
    stw r5, 0x98(r6)
    stw r5, 0x9c(r6)
    stw r5, 0xa0(r6)
    stw r5, 0xa4(r6)
    stw r4, 0xa8(r6)
    stw r5, 0xac(r6)
    stfs f1, 0xb0(r6)
    stfs f0, 0xb4(r6)
    stw r0, 0xb8(r6)
    stw r5, 0xbc(r6)
    stw r5, 0xc0(r6)
    stw r5, 0xc4(r6)
    stw r5, 0xc8(r6)
    stw r5, 0xcc(r6)
    stw r4, 0xd0(r6)
    stw r5, 0xd4(r6)
    stfs f1, 0xd8(r6)
    stfs f0, 0xdc(r6)
    stw r0, 0xe0(r6)
    stw r5, 0xe4(r6)
    stw r5, 0xe8(r6)
    stw r5, 0xec(r6)
    stw r5, 0xf0(r6)
    stw r5, 0xf4(r6)
    stw r4, 0xf8(r6)
    stw r5, 0xfc(r6)
    stfs f1, 0x100(r6)
    stfs f0, 0x104(r6)
    stw r0, 0x108(r6)
    stw r5, 0x10c(r6)
    stw r5, 0x110(r6)
    stw r5, 0x114(r6)
    stw r5, 0x118(r6)
    stw r5, 0x11c(r6)
    stw r4, 0x120(r6)
    stw r5, 0x124(r6)
    stfs f1, 0x128(r6)
    stfs f0, 0x12c(r6)
    stw r0, 0x130(r6)
    stw r5, 0x134(r6)
    stw r5, 0x138(r6)
    stw r5, 0x13c(r6)
    addi r6, r6, 0x140
    bdnz lbl_fn_803E836C_0000103C
lbl_fn_803E836C_00001184:
    addi r3, r8, 0x27
    li r0, 0x28
    subf r3, r6, r3
    lfs f1, lbl_80885F48
    divwu r3, r3, r0
    lfs f0, lbl_80885F4C
    li r5, 0x0
    li r4, -0x1
    li r0, 0x1
    mtctr r3
    cmplw r6, r8
    bge lbl_fn_803E836C_000011E4
lbl_fn_803E836C_000011B4:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    stw r4, 0x8(r6)
    stw r5, 0xc(r6)
    stfs f1, 0x10(r6)
    stfs f0, 0x14(r6)
    stw r0, 0x18(r6)
    stw r5, 0x1c(r6)
    stw r5, 0x20(r6)
    stw r5, 0x24(r6)
    addi r6, r6, 0x28
    bdnz lbl_fn_803E836C_000011B4
lbl_fn_803E836C_000011E4:
    li r0, 0x0
    lis r4, fn_803E8820@ha
    lis r5, fn_803E8908@ha
    stw r0, 0x394(r31)
    addi r3, r31, 0x398
    addi r4, r4, fn_803E8820@l
    addi r5, r5, fn_803E8908@l
    li r6, 0xe0
    li r7, 0x20
    bl fn_806958E0
lbl_fn_803E836C_0000120C:
    stw r31, lbl_8087F498
lbl_fn_803E836C_00001210:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F498
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E8698(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800CB360
    li r31, 0x0
    addi r30, r29, 0x10
    li r0, 0x1e
    stw r31, 0x4(r29)
    mr r3, r30
    stw r31, 0x8(r29)
    stw r0, 0xc(r29)
    bl fn_80473E74
    lis r4, lbl_8078FBB0@ha
    mr r3, r29
    addi r4, r4, lbl_8078FBB0@l
    stw r4, 0x0(r30)
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803E8698_000012BC
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803E8698_000012BC
    lwz r3, 0x1154(r4)
    addi r0, r29, 0x4
    cmplw r3, r0
    bne lbl_fn_803E8698_000012BC
    stw r31, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803E8698_000012BC:
    addi r3, r29, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r4, lbl_807C7030@ha
    stw r0, 0x18(r29)
    addi r4, r4, lbl_807C7030@l
    mr r3, r29
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x24(r29)
    psq_st f1, 0x1c(r29), 0, 0
    stw r0, 0x28(r29)
    stb r0, 0x2c(r29)
    stb r0, 0x2d(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E877C(void)
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
    beq lbl_fn_803E877C_00001394
    addic. r3, r3, 0x10
    beq lbl_fn_803E877C_00001348
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803E877C_00001348:
    addic. r31, r29, 0x4
    beq lbl_fn_803E877C_00001378
    beq lbl_fn_803E877C_00001378
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803E877C_0000136C
    beq lbl_fn_803E877C_0000136C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803E877C_0000136C:
    li r0, 0x0
    stw r0, 0x4(r31)
    stw r0, 0x0(r31)
lbl_fn_803E877C_00001378:
    mr r3, r29
    li r4, -0x1
    bl fn_800CB3A0
    cmpwi r30, 0x0
    ble lbl_fn_803E877C_00001394
    mr r3, r29
    bl dtor_80084684
lbl_fn_803E877C_00001394:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E8820(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80885F4C
    li r5, 0x0
    stw r0, 0x14(r1)
    li r4, -0x1
    li r0, 0x1
    stw r5, 0x0(r3)
    stw r5, 0x24(r3)
    stw r5, 0x28(r3)
    stw r5, 0x2c(r3)
    stw r5, 0x30(r3)
    stw r5, 0x34(r3)
    stb r5, 0x38(r3)
    stw r5, 0x58(r3)
    stw r5, 0x5c(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r4, 0x10(r3)
    stfs f0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r5, 0x20(r3)
    b lbl_fn_803E8820_0000148C
    bl fn_800CB5C8
    lwz r3, 0x18(r5)
    cmpwi r3, 0x0
    beq lbl_fn_803E8820_00001450
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803E8820_00001450
    lwz r3, 0x1154(r3)
    li r0, 0x4
    cmplw r3, r0
    bne lbl_fn_803E8820_00001450
    stw r5, 0x1154(r3)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r3)
lbl_fn_803E8820_00001450:
    li r3, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r5, lbl_807C7030@ha
    stw r0, 0x18(r3)
    addi r5, r5, lbl_807C7030@l
    li r4, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    stw r0, 0x28(r3)
    stb r0, 0x2c(r3)
    stb r0, 0x2d(r3)
    stw r0, 0x24(r3)
lbl_fn_803E8820_0000148C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E8908(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_803E8908_000014C4
    cmpwi r4, 0x0
    ble lbl_fn_803E8908_000014C4
    bl dtor_80084684
lbl_fn_803E8908_000014C4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E8948(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_803E8948_000015A0
    lis r4, lbl_8078C690@ha
    li r30, 0x0
    addi r4, r4, lbl_8078C690@l
    stw r4, 0x0(r3)
    li r31, 0x0
lbl_fn_803E8948_00001510:
    add r3, r27, r31
    li r4, 0x0
    addi r29, r3, 0x48
    li r5, 0x0
    mr r3, r29
    bl fn_800CB5C8
    mr r3, r29
    bl fn_800CB480
    addi r30, r30, 0x1
    addi r31, r31, 0x30
    cmpwi r30, 0x4
    blt lbl_fn_803E8948_00001510
    addic. r3, r27, 0x394
    li r0, 0x0
    stw r0, lbl_8087F498
    beq lbl_fn_803E8948_0000156C
    beq lbl_fn_803E8948_0000156C
    lis r4, fn_803E8908@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_803E8908@l
    li r5, 0xe0
    li r6, 0x20
    bl fn_806959D8
lbl_fn_803E8948_0000156C:
    lis r4, fn_803E877C@ha
    addi r3, r27, 0x48
    addi r4, r4, fn_803E877C@l
    li r5, 0x30
    li r6, 0x4
    bl fn_806959D8
    mr r3, r27
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r28, 0x0
    ble lbl_fn_803E8948_000015A0
    mr r3, r27
    bl dtor_80084684
lbl_fn_803E8948_000015A0:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E8A24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800D3FA4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E8A50(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x50
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    bl _savegpr_19
    mr r19, r3
    addi r21, r3, 0x114
    lis r26, 0x6666
    b lbl_fn_803E8A50_00001738
lbl_fn_803E8A50_00001618:
    lwz r3, 0x24(r21)
    lwz r0, 0x20(r21)
    cmpw r3, r0
    blt lbl_fn_803E8A50_0000172C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_00001694
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803E8A50_00001694
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_00001694
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803E8A50_00001694
    lwz r3, 0x0(r21)
    lwz r4, 0x8(r21)
    bl fn_80179F98
    lwz r5, 0x0(r21)
    mr r4, r19
    lwz r6, 0xc(r21)
    addi r3, r1, 0x8
    lwz r7, 0x18(r21)
    li r9, 0x0
    lwz r8, 0x1c(r21)
    lfs f1, 0x10(r21)
    bl fn_803EA09C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803E8A50_00001694:
    addi r0, r19, 0x114
    addi r3, r26, 0x6667
    subf r0, r0, r21
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r4, r0, r3
    mulli r0, r4, 0x28
    add r5, r19, r0
    b lbl_fn_803E8A50_00001714
lbl_fn_803E8A50_000016BC:
    lwz r0, 0x13c(r5)
    addi r4, r4, 0x1
    stw r0, 0x114(r5)
    lwz r0, 0x140(r5)
    stw r0, 0x118(r5)
    lwz r0, 0x144(r5)
    stw r0, 0x11c(r5)
    lwz r0, 0x148(r5)
    stw r0, 0x120(r5)
    lfs f0, 0x14c(r5)
    stfs f0, 0x124(r5)
    lfs f0, 0x150(r5)
    stfs f0, 0x128(r5)
    lwz r0, 0x154(r5)
    stw r0, 0x12c(r5)
    lwz r0, 0x158(r5)
    stw r0, 0x130(r5)
    lwz r0, 0x15c(r5)
    stw r0, 0x134(r5)
    lwz r0, 0x160(r5)
    stw r0, 0x138(r5)
    addi r5, r5, 0x28
lbl_fn_803E8A50_00001714:
    lwz r3, 0x110(r19)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_803E8A50_000016BC
    stw r0, 0x110(r19)
    b lbl_fn_803E8A50_00001738
lbl_fn_803E8A50_0000172C:
    addi r0, r3, 0x1
    stw r0, 0x24(r21)
    addi r21, r21, 0x28
lbl_fn_803E8A50_00001738:
    lwz r0, 0x110(r19)
    mulli r0, r0, 0x28
    add r3, r19, r0
    addi r0, r3, 0x114
    cmplw r21, r0
    bne lbl_fn_803E8A50_00001618
    lis r3, lbl_80751D08@ha
    lis r4, lbl_807C7030@ha
    lfs f30, lbl_80885F4C
    addi r20, r19, 0x398
    lfd f31, lbl_80751D08@l(r3)
    addi r25, r4, lbl_807C7030@l
    li r31, 0x10
    li r26, 0x0
    lis r29, 0x9249
    lis r28, 0x4330
    li r27, 0x3
    b lbl_fn_803E8A50_00001BD0
lbl_fn_803E8A50_00001780:
    lwz r0, 0x4(r20)
    cmpwi r0, 0x1
    beq lbl_fn_803E8A50_000017A0
    cmpwi r0, 0x2
    beq lbl_fn_803E8A50_00001928
    cmpwi r0, 0x3
    beq lbl_fn_803E8A50_00001940
    b lbl_fn_803E8A50_00001A94
lbl_fn_803E8A50_000017A0:
    lwz r3, 0x24(r20)
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_000017CC
    bl fn_800CB4EC
    cmpwi r3, 0x0
    bne lbl_fn_803E8A50_00001A94
    lwz r3, 0x24(r20)
    addi r3, r3, 0x10
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_803E8A50_00001A94
lbl_fn_803E8A50_000017CC:
    lwz r0, 0x24(r20)
    cmpwi r0, 0x0
    beq lbl_fn_803E8A50_00001920
    lwz r0, 0x8(r20)
    cmpwi r0, 0x0
    beq lbl_fn_803E8A50_00001890
    li r21, 0x0
    li r23, 0x0
lbl_fn_803E8A50_000017EC:
    add r22, r19, r23
    lwzu r0, 0x48(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803E8A50_00001880
    lwz r0, 0x24(r20)
    cmplw r22, r0
    beq lbl_fn_803E8A50_00001880
    lwz r3, 0x18(r22)
    lwz r0, 0x8(r20)
    cmplw r3, r0
    bne lbl_fn_803E8A50_00001880
    mr r3, r22
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x18(r22)
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_00001858
    lwz r0, 0x4(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803E8A50_00001858
    lwz r4, 0x1154(r3)
    addi r0, r22, 0x4
    cmplw r4, r0
    bne lbl_fn_803E8A50_00001858
    stw r26, 0x1154(r3)
    stfs f30, 0x1158(r3)
lbl_fn_803E8A50_00001858:
    addi r3, r22, 0x10
    bl fn_80473F88
    stw r26, 0x18(r22)
    lfs f2, 0x8(r25)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x1c(r22), 0, 0
    stfs f2, 0x24(r22)
    stw r26, 0x28(r22)
    stb r26, 0x2c(r22)
    stb r26, 0x2d(r22)
lbl_fn_803E8A50_00001880:
    addi r21, r21, 0x1
    addi r23, r23, 0x30
    cmplwi r21, 0x4
    blt lbl_fn_803E8A50_000017EC
lbl_fn_803E8A50_00001890:
    lwz r3, 0x24(r20)
    bl fn_800CB504
    lwz r3, 0x24(r20)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_000018B0
    li r4, 0x0
    bl fn_800CA144
lbl_fn_803E8A50_000018B0:
    lwz r0, 0x8(r20)
    cmpwi r0, 0x0
    beq lbl_fn_803E8A50_00001920
    lwz r3, 0x24(r20)
    addi r3, r3, 0x10
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_00001920
    lwz r3, 0x24(r20)
    addi r3, r3, 0x10
    bl fn_8047059C
    lwz r4, 0x24(r20)
    mr r21, r3
    addi r3, r4, 0x10
    bl fn_80470580
    lwz r6, 0x24(r20)
    mr r4, r3
    mr r5, r21
    addi r3, r6, 0x4
    bl fn_8007A530
    lwz r3, 0x24(r20)
    addi r3, r3, 0x10
    bl fn_80473F88
    lwz r3, 0x24(r20)
    lwz r4, 0x8(r20)
    addi r0, r3, 0x4
    stw r0, 0x1154(r4)
    stfs f30, 0x1158(r4)
lbl_fn_803E8A50_00001920:
    stw r27, 0x4(r20)
    b lbl_fn_803E8A50_00001A94
lbl_fn_803E8A50_00001928:
    lwz r3, 0x24(r20)
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_00001938
    bl fn_800CB480
lbl_fn_803E8A50_00001938:
    stw r26, 0x4(r20)
    b lbl_fn_803E8A50_00001A94
lbl_fn_803E8A50_00001940:
    lwz r4, 0x8(r20)
    cmpwi r4, 0x0
    beq lbl_fn_803E8A50_00001960
    lwz r3, 0x24(r20)
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_00001960
    addi r4, r4, 0x528
    bl fn_800CB6E4
lbl_fn_803E8A50_00001960:
    lwz r3, 0x1c(r20)
    li r21, 0x0
    cmpwi r3, 0x0
    ble lbl_fn_803E8A50_00001984
    lwz r0, 0x20(r20)
    cmpw r3, r0
    bgt lbl_fn_803E8A50_000019F8
    li r21, 0x1
    b lbl_fn_803E8A50_000019F8
lbl_fn_803E8A50_00001984:
    lwz r3, 0x24(r20)
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_000019F4
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_803E8A50_000019F8
    lwz r3, 0x8(r20)
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_000019EC
    lwz r4, 0x1154(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803E8A50_000019E0
    lwz r0, 0x0(r4)
    stw r0, 0x14(r1)
    lfs f3, 0x1158(r3)
    stw r28, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    mfcr r0
    extrwi r0, r0, 1, 2
    b lbl_fn_803E8A50_000019E4
lbl_fn_803E8A50_000019E0:
    li r0, 0x1
lbl_fn_803E8A50_000019E4:
    cmpwi r0, 0x0
    beq lbl_fn_803E8A50_000019F8
lbl_fn_803E8A50_000019EC:
    li r21, 0x1
    b lbl_fn_803E8A50_000019F8
lbl_fn_803E8A50_000019F4:
    li r21, 0x1
lbl_fn_803E8A50_000019F8:
    cmpwi r21, 0x0
    beq lbl_fn_803E8A50_00001A74
    lwz r21, 0x24(r20)
    li r4, 0x0
    li r5, 0x0
    mr r3, r21
    bl fn_800CB5C8
    lwz r3, 0x18(r21)
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_00001A44
    lwz r0, 0x4(r21)
    cmpwi r0, 0x0
    beq lbl_fn_803E8A50_00001A44
    lwz r4, 0x1154(r3)
    addi r0, r21, 0x4
    cmplw r4, r0
    bne lbl_fn_803E8A50_00001A44
    stw r26, 0x1154(r3)
    stfs f30, 0x1158(r3)
lbl_fn_803E8A50_00001A44:
    addi r3, r21, 0x10
    bl fn_80473F88
    stw r26, 0x18(r21)
    lfs f2, 0x8(r25)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x1c(r21), 0, 0
    stfs f2, 0x24(r21)
    stw r26, 0x28(r21)
    stb r26, 0x2c(r21)
    stb r26, 0x2d(r21)
    stw r26, 0x4(r20)
    b lbl_fn_803E8A50_00001A94
lbl_fn_803E8A50_00001A74:
    lwz r3, 0x20(r20)
    addi r0, r3, 0x1
    stw r0, 0x20(r20)
    lwz r3, 0x24(r20)
    cmpwi r3, 0x0
    beq lbl_fn_803E8A50_00001A94
    lwz r0, 0x20(r20)
    stw r0, 0x28(r3)
lbl_fn_803E8A50_00001A94:
    lwz r0, 0x4(r20)
    cmpwi r0, 0x0
    bne lbl_fn_803E8A50_00001BCC
    addi r0, r19, 0x398
    addi r3, r29, 0x2493
    subf r0, r0, r20
    mulhw r3, r3, r0
    add r0, r3, r0
    srawi r0, r0, 7
    srwi r3, r0, 31
    add r24, r0, r3
    mulli r0, r24, 0xe0
    add r22, r19, r0
    addi r21, r22, 0x398
    b lbl_fn_803E8A50_00001BB4
lbl_fn_803E8A50_00001AD0:
    lwz r3, 0x478(r22)
    addi r0, r24, 0x1
    stw r3, 0x398(r22)
    mulli r4, r0, 0xe0
    addi r0, r21, 0x38
    lwz r3, 0x47c(r22)
    stw r3, 0x39c(r22)
    add r30, r19, r4
    addi r23, r30, 0x3d0
    lwz r3, 0x480(r22)
    cmplw r23, r0
    stw r3, 0x3a0(r22)
    lwz r0, 0x484(r22)
    stw r0, 0x3a4(r22)
    lwz r0, 0x488(r22)
    stw r0, 0x3a8(r22)
    lfs f0, 0x48c(r22)
    stfs f0, 0x3ac(r22)
    lwz r0, 0x490(r22)
    stw r0, 0x3b0(r22)
    lwz r0, 0x494(r22)
    stw r0, 0x3b4(r22)
    lwz r0, 0x498(r22)
    stw r0, 0x3b8(r22)
    lwz r0, 0x49c(r22)
    stw r0, 0x3bc(r22)
    lwz r0, 0x3c0(r30)
    stw r0, 0x3c0(r22)
    lwz r0, 0x3c4(r30)
    stw r0, 0x3c4(r22)
    lwz r0, 0x3c8(r30)
    stw r0, 0x3c8(r22)
    lwz r0, 0x3cc(r30)
    stw r0, 0x3cc(r22)
    beq lbl_fn_803E8A50_00001B78
    mr r3, r23
    bl strlen
    mr r5, r3
    mr r4, r23
    addi r3, r21, 0x38
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_803E8A50_00001B78:
    lwz r0, 0x3f0(r30)
    addi r5, r22, 0x3f4
    stw r0, 0x3f0(r22)
    addi r4, r22, 0x4d4
    lwz r0, 0x3f4(r30)
    stw r0, 0x3f4(r22)
    mtctr r31
lbl_fn_803E8A50_00001B94:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803E8A50_00001B94
    addi r22, r22, 0xe0
    addi r21, r21, 0xe0
    addi r24, r24, 0x1
lbl_fn_803E8A50_00001BB4:
    lwz r3, 0x394(r19)
    subi r0, r3, 0x1
    cmplw r24, r0
    blt lbl_fn_803E8A50_00001AD0
    stw r0, 0x394(r19)
    b lbl_fn_803E8A50_00001BD0
lbl_fn_803E8A50_00001BCC:
    addi r20, r20, 0xe0
lbl_fn_803E8A50_00001BD0:
    lwz r0, 0x394(r19)
    mulli r0, r0, 0xe0
    add r3, r19, r0
    addi r0, r3, 0x398
    cmplw r20, r0
    bne lbl_fn_803E8A50_00001780
    addi r11, r1, 0x50
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    bl _restgpr_19
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
