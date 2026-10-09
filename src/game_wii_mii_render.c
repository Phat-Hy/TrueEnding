#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8000D430(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097E80(void);
extern void fn_800F29D0(void);
extern void fn_8011BF3C(void);
extern void fn_80126214(void);
extern void fn_80127D8C(void);
extern void fn_8016F4D8(void);
extern void fn_8016F530(void);
extern void fn_8016F5EC(void);
extern void fn_8031F2A4(void);
extern void fn_8056B2C4(void);
extern void fn_8056B2E4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8075FCA0[];
extern u8 lbl_8075FE68[];
extern u8 lbl_8075FF7C[];
extern u8 lbl_807C9568[];

/* Small data declarations */
extern u32 lbl_8087F998;
extern u32 lbl_80887F40;
extern u32 lbl_80887F60;
extern u32 lbl_80887F64;
extern u32 lbl_80887F68;
extern u32 lbl_80887F6C;
extern u32 lbl_80887F70;
extern u32 lbl_80887F98;
extern u32 lbl_80887F9C;
extern u32 lbl_80887FA0;
extern u32 lbl_80887FA4;
extern u32 lbl_80887FA8;
extern u32 lbl_80887FC0;
extern u32 lbl_80887FD4;
extern u32 lbl_80888004;
extern u32 lbl_80888008;
extern u32 lbl_8088800C;
extern u32 lbl_80888010;
extern u32 lbl_80888018;
extern u32 lbl_8088801C;
extern u32 lbl_80888020;
extern u32 lbl_80888024;

/* Function declarations */
void fn_805693D0(void);
void fn_80569664(void);
void fn_8056A040(void);
void fn_8056A850(void);
void fn_8056A9E8(void);

asm void fn_805693D0(void)
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
    bl _savegpr_27
    addi r30, r3, 0xc64
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r3, r30
    bl fn_80126214
    lwz r0, 0x2c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805693D0_00000054
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
lbl_fn_805693D0_00000054:
    psq_l f1, 0x58(r30), 0, 0
    addi r31, r1, 0x68
    lfs f2, 0x60(r30)
    mr r3, r31
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    frsp f3, f1
    lfs f0, lbl_80887F98
    stfs f1, 0x0(r28)
    fcmpo cr0, f3, f0
    ble lbl_fn_805693D0_0000025C
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x70(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r31, r1, 0x50
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80887FA4
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_805693D0_000000F0
    lfs f3, 0x50(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_805693D0_000000E4
    lfs f0, lbl_80887F64
    b lbl_fn_805693D0_000000E8
lbl_fn_805693D0_000000E4:
    lfs f0, lbl_80887FA8
lbl_fn_805693D0_000000E8:
    stfs f0, 0x48(r1)
    b lbl_fn_805693D0_00000104
lbl_fn_805693D0_000000F0:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_805693D0_00000104:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_805693D0_00000220
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_805693D0_00000210
    lfs f0, lbl_80887F64
    b lbl_fn_805693D0_00000214
lbl_fn_805693D0_00000210:
    lfs f0, lbl_80887FA8
lbl_fn_805693D0_00000214:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_805693D0_00000234
lbl_fn_805693D0_00000220:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_805693D0_00000234:
    lfs f2, lbl_80887F40
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    b lbl_fn_805693D0_0000026C
lbl_fn_805693D0_0000025C:
    psq_l f1, 0x534(r27), 0, 0
    lfs f2, 0x53c(r27)
    stfs f2, 0x8(r29)
    psq_st f1, 0x0(r29), 0, 0
lbl_fn_805693D0_0000026C:
    addi r11, r1, 0x100
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80569664(void)
{
    nofralloc
    stwu r1, -0x380(r1)
    mflr r0
    stw r0, 0x384(r1)
    stfd f31, 0x370(r1)
    psq_st f31, 0x378(r1), 0, 0
    stfd f30, 0x360(r1)
    psq_st f30, 0x368(r1), 0, 0
    stw r31, 0x35c(r1)
    mr r31, r5
    stw r30, 0x358(r1)
    mr r30, r4
    stw r29, 0x354(r1)
    mr r29, r3
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80569664_00000C38
    lwz r4, 0xd14(r3)
    cmpwi r4, 0x0
    ble lbl_fn_80569664_000002E8
    subi r0, r4, 0x1
    stw r0, 0xd14(r3)
lbl_fn_80569664_000002E8:
    lwz r0, 0xd14(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80569664_00000348
    lwz r3, 0xd1c(r3)
    mr r4, r29
    bl fn_8016F4D8
    cmpwi r3, 0x0
    beq lbl_fn_80569664_00000310
    li r0, 0x1
    b lbl_fn_80569664_00000328
lbl_fn_80569664_00000310:
    lwz r3, 0xd1c(r29)
    li r4, 0x0
    bl fn_8016F530
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80569664_00000328:
    cmpwi r0, 0x0
    beq lbl_fn_80569664_00000348
    lhz r0, 0xd38(r29)
    mr r4, r29
    lwz r3, 0xd1c(r29)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r29)
    bl fn_8016F530
lbl_fn_80569664_00000348:
    lwz r4, 0xd1c(r29)
    addi r3, r1, 0x17c
    lfs f0, 0x530(r29)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x180(r1)
    stfs f0, 0x17c(r1)
    stfs f6, 0x184(r1)
    bl fn_805F9940
    frsp f3, f1
    lfs f0, lbl_80888004
    stfs f1, 0x0(r30)
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_000003C0
    lfs f0, lbl_80887F40
    stfs f0, 0x0(r30)
    psq_l f1, 0x534(r29), 0, 0
    lfs f2, 0x53c(r29)
    stfs f2, 0x8(r31)
    psq_st f1, 0x0(r31), 0, 0
    lhz r0, 0xd38(r29)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r29)
    b lbl_fn_80569664_00000C44
lbl_fn_80569664_000003C0:
    addi r3, r1, 0x17c
    mr r4, r3
    bl fn_805F98D0
    lfs f0, lbl_80887F6C
    lfs f3, 0x1500(r29)
    lfs f4, 0x0(r30)
    fmuls f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_80569664_00000624
    fsubs f3, f3, f4
    lfs f0, lbl_80888008
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_000003F8
    b lbl_fn_80569664_000003FC
lbl_fn_80569664_000003F8:
    fmr f3, f0
lbl_fn_80569664_000003FC:
    lfs f4, lbl_80887F60
    fcmpo cr0, f4, f3
    bge lbl_fn_80569664_0000040C
    b lbl_fn_80569664_0000042C
lbl_fn_80569664_0000040C:
    lfs f4, 0x1500(r29)
    lfs f3, 0x0(r30)
    lfs f0, lbl_80888008
    fsubs f4, f4, f3
    fcmpo cr0, f4, f0
    ble lbl_fn_80569664_00000428
    b lbl_fn_80569664_0000042C
lbl_fn_80569664_00000428:
    fmr f4, f0
lbl_fn_80569664_0000042C:
    stfs f4, 0x0(r30)
    addi r3, r1, 0x158
    lfs f0, lbl_80887FA4
    addi r30, r1, 0x164
    lfs f3, 0x184(r1)
    lfs f4, 0x180(r1)
    fneg f5, f3
    lfs f3, 0x17c(r1)
    fneg f4, f4
    fneg f3, f3
    stfs f5, 0x160(r1)
    frsp f2, f5
    stfs f3, 0x158(r1)
    fabs f3, f2
    stfs f4, 0x15c(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f3, f3
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x16c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_000004A4
    lfs f3, 0x164(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_00000498
    lfs f0, lbl_80887F64
    b lbl_fn_80569664_0000049C
lbl_fn_80569664_00000498:
    lfs f0, lbl_80887FA8
lbl_fn_80569664_0000049C:
    stfs f0, 0x120(r1)
    b lbl_fn_80569664_000004B8
lbl_fn_80569664_000004A4:
    frsp f2, f2
    lfs f1, 0x164(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x120(r1)
lbl_fn_80569664_000004B8:
    lfs f0, 0x120(r1)
    addi r3, r1, 0x2d8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0x110
    lfs f30, 0x2e0(r1)
    mr r5, r4
    lfs f31, 0x2dc(r1)
    addi r3, r1, 0x308
    lfs f13, 0x2d8(r1)
    lfs f12, 0x2f0(r1)
    lfs f11, 0x2ec(r1)
    lfs f10, 0x2e8(r1)
    lfs f9, 0x300(r1)
    lfs f8, 0x2fc(r1)
    lfs f7, 0x2f8(r1)
    lfs f6, 0x304(r1)
    lfs f5, 0x2f4(r1)
    lfs f4, 0x2e4(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x16c(r1)
    stfs f3, 0x338(r1)
    stfs f3, 0x33c(r1)
    stfs f3, 0x340(r1)
    stfs f0, 0x344(r1)
    stfs f13, 0xe0(r1)
    stfs f31, 0xe4(r1)
    stfs f30, 0xe8(r1)
    stfs f13, 0x308(r1)
    stfs f31, 0x30c(r1)
    stfs f30, 0x310(r1)
    stfs f10, 0xec(r1)
    stfs f11, 0xf0(r1)
    stfs f12, 0xf4(r1)
    stfs f10, 0x318(r1)
    stfs f11, 0x31c(r1)
    stfs f12, 0x320(r1)
    stfs f7, 0xf8(r1)
    stfs f8, 0xfc(r1)
    stfs f9, 0x100(r1)
    stfs f7, 0x328(r1)
    stfs f8, 0x32c(r1)
    stfs f9, 0x330(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x108(r1)
    stfs f6, 0x10c(r1)
    stfs f4, 0x314(r1)
    stfs f5, 0x324(r1)
    stfs f6, 0x334(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x118(r1)
    bl fn_805F9750
    lfs f2, 0x118(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_000005D4
    lfs f3, 0x114(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_000005C4
    lfs f0, lbl_80887F64
    b lbl_fn_80569664_000005C8
lbl_fn_80569664_000005C4:
    lfs f0, lbl_80887FA8
lbl_fn_80569664_000005C8:
    fneg f0, f0
    stfs f0, 0x11c(r1)
    b lbl_fn_80569664_000005E8
lbl_fn_80569664_000005D4:
    lfs f1, 0x114(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x11c(r1)
lbl_fn_80569664_000005E8:
    addi r3, r1, 0x11c
    lfs f4, lbl_80887F40
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, lbl_80887F70
    lfs f3, 0x4(r31)
    stfs f2, 0x16c(r1)
    frsp f2, f2
    fsubs f0, f3, f0
    stfs f4, 0x124(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r31)
    stfs f0, 0x4(r31)
    b lbl_fn_80569664_00000C44
lbl_fn_80569664_00000624:
    lfs f0, lbl_8088800C
    fmuls f0, f0, f3
    fcmpo cr0, f4, f0
    ble lbl_fn_80569664_00000A60
    lfs f0, lbl_80887FC0
    addi r3, r1, 0x14c
    stfs f0, 0x0(r30)
    addi r4, r29, 0xc58
    li r5, 0x0
    bl fn_8011BF3C
    lfs f3, 0x154(r1)
    addi r3, r1, 0x170
    lfs f0, 0x530(r29)
    addi r30, r1, 0x140
    lfs f5, 0x150(r1)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x14c(r1)
    fsubs f4, f5, f4
    lfs f0, 0x528(r29)
    stfs f2, 0x178(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80887FA4
    stfs f4, 0x174(r1)
    frsp f4, f2
    stfs f3, 0x170(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x148(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_000006CC
    lfs f3, 0x140(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_000006C0
    lfs f0, lbl_80887F64
    b lbl_fn_80569664_000006C4
lbl_fn_80569664_000006C0:
    lfs f0, lbl_80887FA8
lbl_fn_80569664_000006C4:
    stfs f0, 0xd8(r1)
    b lbl_fn_80569664_000006E0
lbl_fn_80569664_000006CC:
    fmr f2, f4
    lfs f1, 0x140(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_80569664_000006E0:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x268
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0xc8
    lfs f31, 0x270(r1)
    mr r5, r4
    lfs f30, 0x26c(r1)
    addi r3, r1, 0x298
    lfs f13, 0x268(r1)
    lfs f12, 0x280(r1)
    lfs f11, 0x27c(r1)
    lfs f10, 0x278(r1)
    lfs f9, 0x290(r1)
    lfs f8, 0x28c(r1)
    lfs f7, 0x288(r1)
    lfs f6, 0x294(r1)
    lfs f5, 0x284(r1)
    lfs f4, 0x274(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x148(r1)
    stfs f3, 0x2c8(r1)
    stfs f3, 0x2cc(r1)
    stfs f3, 0x2d0(r1)
    stfs f0, 0x2d4(r1)
    stfs f13, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xa0(r1)
    stfs f13, 0x298(r1)
    stfs f30, 0x29c(r1)
    stfs f31, 0x2a0(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x2a8(r1)
    stfs f11, 0x2ac(r1)
    stfs f12, 0x2b0(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x2b8(r1)
    stfs f8, 0x2bc(r1)
    stfs f9, 0x2c0(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x2a4(r1)
    stfs f5, 0x2b4(r1)
    stfs f6, 0x2c4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_000007FC
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_000007EC
    lfs f0, lbl_80887F64
    b lbl_fn_80569664_000007F0
lbl_fn_80569664_000007EC:
    lfs f0, lbl_80887FA8
lbl_fn_80569664_000007F0:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_80569664_00000810
lbl_fn_80569664_000007FC:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_80569664_00000810:
    lfs f4, lbl_80887F40
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8075FCA0@ha
    fmr f2, f4
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x148(r1)
    frsp f2, f2
    lfs f3, 0x4(r31)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r31)
    lfd f2, lbl_8075FCA0@l(r3)
    lfs f0, 0x538(r29)
    stfs f4, 0xdc(r1)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80887F68
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_00000868
    lfs f0, lbl_80887F9C
    fsubs f3, f3, f0
lbl_fn_80569664_00000868:
    lfs f0, lbl_80887FA0
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_0000087C
    lfs f0, lbl_80887F9C
    fadds f3, f3, f0
lbl_fn_80569664_0000087C:
    fabs f3, f3
    lfs f0, lbl_80887F70
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_00000A4C
    lfs f2, 0x178(r1)
    addi r3, r1, 0x170
    lfs f0, lbl_80887FA4
    addi r30, r1, 0x134
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x13c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_000008E0
    lfs f3, 0x134(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_000008D4
    lfs f0, lbl_80887F64
    b lbl_fn_80569664_000008D8
lbl_fn_80569664_000008D4:
    lfs f0, lbl_80887FA8
lbl_fn_80569664_000008D8:
    stfs f0, 0x90(r1)
    b lbl_fn_80569664_000008F4
lbl_fn_80569664_000008E0:
    frsp f2, f2
    lfs f1, 0x134(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80569664_000008F4:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1f8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0x80
    lfs f31, 0x200(r1)
    mr r5, r4
    lfs f30, 0x1fc(r1)
    addi r3, r1, 0x228
    lfs f13, 0x1f8(r1)
    lfs f12, 0x210(r1)
    lfs f11, 0x20c(r1)
    lfs f10, 0x208(r1)
    lfs f9, 0x220(r1)
    lfs f8, 0x21c(r1)
    lfs f7, 0x218(r1)
    lfs f6, 0x224(r1)
    lfs f5, 0x214(r1)
    lfs f4, 0x204(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x13c(r1)
    stfs f3, 0x258(r1)
    stfs f3, 0x25c(r1)
    stfs f3, 0x260(r1)
    stfs f0, 0x264(r1)
    stfs f13, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f13, 0x228(r1)
    stfs f30, 0x22c(r1)
    stfs f31, 0x230(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x238(r1)
    stfs f11, 0x23c(r1)
    stfs f12, 0x240(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x248(r1)
    stfs f8, 0x24c(r1)
    stfs f9, 0x250(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x234(r1)
    stfs f5, 0x244(r1)
    stfs f6, 0x254(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_00000A10
    lfs f3, 0x84(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_00000A00
    lfs f0, lbl_80887F64
    b lbl_fn_80569664_00000A04
lbl_fn_80569664_00000A00:
    lfs f0, lbl_80887FA8
lbl_fn_80569664_00000A04:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80569664_00000A24
lbl_fn_80569664_00000A10:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80569664_00000A24:
    lfs f2, lbl_80887F40
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    stfs f2, 0x13c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    b lbl_fn_80569664_00000C44
lbl_fn_80569664_00000A4C:
    psq_l f1, 0x534(r29), 0, 0
    lfs f2, 0x53c(r29)
    stfs f2, 0x8(r31)
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80569664_00000C44
lbl_fn_80569664_00000A60:
    lfs f0, lbl_80887FC0
    addi r3, r1, 0x17c
    stfs f0, 0x0(r30)
    addi r30, r1, 0x128
    lfs f0, lbl_80887FA4
    lfs f2, 0x184(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x130(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_00000AB8
    lfs f3, 0x128(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_00000AAC
    lfs f0, lbl_80887F64
    b lbl_fn_80569664_00000AB0
lbl_fn_80569664_00000AAC:
    lfs f0, lbl_80887FA8
lbl_fn_80569664_00000AB0:
    stfs f0, 0x48(r1)
    b lbl_fn_80569664_00000ACC
lbl_fn_80569664_00000AB8:
    frsp f2, f2
    lfs f1, 0x128(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80569664_00000ACC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x188
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0x38
    lfs f31, 0x190(r1)
    mr r5, r4
    lfs f30, 0x18c(r1)
    addi r3, r1, 0x1b8
    lfs f13, 0x188(r1)
    lfs f12, 0x1a0(r1)
    lfs f11, 0x19c(r1)
    lfs f10, 0x198(r1)
    lfs f9, 0x1b0(r1)
    lfs f8, 0x1ac(r1)
    lfs f7, 0x1a8(r1)
    lfs f6, 0x1b4(r1)
    lfs f5, 0x1a4(r1)
    lfs f4, 0x194(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x130(r1)
    stfs f3, 0x1e8(r1)
    stfs f3, 0x1ec(r1)
    stfs f3, 0x1f0(r1)
    stfs f0, 0x1f4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x1b8(r1)
    stfs f30, 0x1bc(r1)
    stfs f31, 0x1c0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x1c8(r1)
    stfs f11, 0x1cc(r1)
    stfs f12, 0x1d0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x1d8(r1)
    stfs f8, 0x1dc(r1)
    stfs f9, 0x1e0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x1c4(r1)
    stfs f5, 0x1d4(r1)
    stfs f6, 0x1e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80569664_00000BE8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80569664_00000BD8
    lfs f0, lbl_80887F64
    b lbl_fn_80569664_00000BDC
lbl_fn_80569664_00000BD8:
    lfs f0, lbl_80887FA8
lbl_fn_80569664_00000BDC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80569664_00000BFC
lbl_fn_80569664_00000BE8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80569664_00000BFC:
    addi r3, r1, 0x44
    lfs f4, lbl_80887F40
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, lbl_80887F64
    lfs f3, 0x4(r31)
    stfs f2, 0x130(r1)
    frsp f2, f2
    fadds f0, f3, f0
    stfs f4, 0x4c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r31)
    stfs f0, 0x4(r31)
    b lbl_fn_80569664_00000C44
lbl_fn_80569664_00000C38:
    lhz r0, 0xd38(r3)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r3)
lbl_fn_80569664_00000C44:
    lwz r0, 0x384(r1)
    psq_l f31, 0x378(r1), 0, 0
    lfd f31, 0x370(r1)
    psq_l f30, 0x368(r1), 0, 0
    lfd f30, 0x360(r1)
    lwz r31, 0x35c(r1)
    lwz r30, 0x358(r1)
    lwz r29, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x380
    blr
}

asm void fn_8056A040(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    bl _savegpr_27
    lwz r6, 0xd1c(r3)
    mr r30, r3
    mr r28, r4
    mr r31, r5
    cmpwi r6, 0x0
    addi r27, r3, 0xc64
    beq lbl_fn_8056A040_0000144C
    lha r0, 0xd3e(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056A040_00000F1C
    mr r3, r27
    bl fn_80126214
    lwz r3, 0x4(r27)
    lwz r0, 0x8(r27)
    cmpw r3, r0
    bne lbl_fn_8056A040_00000CEC
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80127D8C
    b lbl_fn_8056A040_00000F04
lbl_fn_8056A040_00000CEC:
    psq_l f1, 0x58(r27), 0, 0
    addi r29, r1, 0x140
    lfs f2, 0x60(r27)
    mr r3, r29
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F9940
    frsp f3, f1
    lfs f0, lbl_80887F98
    stfs f1, 0x0(r28)
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_00000EF4
    addi r28, r1, 0x110
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x148(r1)
    mr r3, r28
    psq_st f1, 0x0(r28), 0, 0
    mr r4, r28
    stfs f2, 0x118(r1)
    bl fn_805F98D0
    lfs f2, 0x118(r1)
    addi r29, r1, 0x11c
    psq_l f1, 0x0(r28), 0, 0
    fabs f3, f2
    lfs f0, lbl_80887FA4
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x124(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8056A040_00000D88
    lfs f3, 0x11c(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_00000D7C
    lfs f0, lbl_80887F64
    b lbl_fn_8056A040_00000D80
lbl_fn_8056A040_00000D7C:
    lfs f0, lbl_80887FA8
lbl_fn_8056A040_00000D80:
    stfs f0, 0xd8(r1)
    b lbl_fn_8056A040_00000D9C
lbl_fn_8056A040_00000D88:
    frsp f2, f2
    lfs f1, 0x11c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_8056A040_00000D9C:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x230
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0xc8
    lfs f30, 0x238(r1)
    mr r5, r4
    lfs f31, 0x234(r1)
    addi r3, r1, 0x260
    lfs f13, 0x230(r1)
    lfs f12, 0x248(r1)
    lfs f11, 0x244(r1)
    lfs f10, 0x240(r1)
    lfs f9, 0x258(r1)
    lfs f8, 0x254(r1)
    lfs f7, 0x250(r1)
    lfs f6, 0x25c(r1)
    lfs f5, 0x24c(r1)
    lfs f4, 0x23c(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x124(r1)
    stfs f3, 0x290(r1)
    stfs f3, 0x294(r1)
    stfs f3, 0x298(r1)
    stfs f0, 0x29c(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f13, 0x260(r1)
    stfs f31, 0x264(r1)
    stfs f30, 0x268(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x270(r1)
    stfs f11, 0x274(r1)
    stfs f12, 0x278(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x280(r1)
    stfs f8, 0x284(r1)
    stfs f9, 0x288(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x26c(r1)
    stfs f5, 0x27c(r1)
    stfs f6, 0x28c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056A040_00000EB8
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_00000EA8
    lfs f0, lbl_80887F64
    b lbl_fn_8056A040_00000EAC
lbl_fn_8056A040_00000EA8:
    lfs f0, lbl_80887FA8
lbl_fn_8056A040_00000EAC:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_8056A040_00000ECC
lbl_fn_8056A040_00000EB8:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_8056A040_00000ECC:
    lfs f2, lbl_80887F40
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xdc(r1)
    stfs f2, 0x124(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    b lbl_fn_8056A040_00000F04
lbl_fn_8056A040_00000EF4:
    psq_l f1, 0x534(r30), 0, 0
    lfs f2, 0x53c(r30)
    stfs f2, 0x8(r31)
    psq_st f1, 0x0(r31), 0, 0
lbl_fn_8056A040_00000F04:
    lwz r0, 0x2c(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8056A040_00001458
    li r0, 0x1
    sth r0, 0xd3e(r30)
    b lbl_fn_8056A040_00001458
lbl_fn_8056A040_00000F1C:
    cmpwi r0, 0x1
    bne lbl_fn_8056A040_00001174
    lwz r6, 0xd40(r3)
    addi r4, r30, 0xc58
    li r5, 0x0
    addi r0, r6, 0x1
    stw r0, 0xd40(r3)
    addi r3, r1, 0x104
    bl fn_8011BF3C
    lfs f5, 0x10c(r1)
    addi r3, r1, 0x134
    lfs f0, 0x530(r30)
    lfs f4, 0x104(r1)
    lfs f3, 0x528(r30)
    fsubs f5, f5, f0
    lfs f0, lbl_80887F40
    fsubs f3, f4, f3
    stfs f5, 0x13c(r1)
    stfs f3, 0x134(r1)
    stfs f0, 0x138(r1)
    bl fn_805F9940
    stfs f1, 0x0(r28)
    frsp f0, f1
    lwz r3, 0xd1c(r30)
    lfs f3, 0x5b0(r3)
    fsubs f3, f0, f3
    stfs f3, 0x0(r28)
    lfs f0, 0x8e4(r30)
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_00001150
    lfs f2, 0x13c(r1)
    addi r3, r1, 0x134
    lfs f0, lbl_80887FA4
    addi r28, r1, 0xf8
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x100(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8056A040_00000FE4
    lfs f3, 0xf8(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_00000FD8
    lfs f0, lbl_80887F64
    b lbl_fn_8056A040_00000FDC
lbl_fn_8056A040_00000FD8:
    lfs f0, lbl_80887FA8
lbl_fn_8056A040_00000FDC:
    stfs f0, 0x90(r1)
    b lbl_fn_8056A040_00000FF8
lbl_fn_8056A040_00000FE4:
    frsp f2, f2
    lfs f1, 0xf8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8056A040_00000FF8:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1c0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0x80
    lfs f31, 0x1c8(r1)
    mr r5, r4
    lfs f30, 0x1c4(r1)
    addi r3, r1, 0x1f0
    lfs f13, 0x1c0(r1)
    lfs f12, 0x1d8(r1)
    lfs f11, 0x1d4(r1)
    lfs f10, 0x1d0(r1)
    lfs f9, 0x1e8(r1)
    lfs f8, 0x1e4(r1)
    lfs f7, 0x1e0(r1)
    lfs f6, 0x1ec(r1)
    lfs f5, 0x1dc(r1)
    lfs f4, 0x1cc(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x100(r1)
    stfs f3, 0x220(r1)
    stfs f3, 0x224(r1)
    stfs f3, 0x228(r1)
    stfs f0, 0x22c(r1)
    stfs f13, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f13, 0x1f0(r1)
    stfs f30, 0x1f4(r1)
    stfs f31, 0x1f8(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x200(r1)
    stfs f11, 0x204(r1)
    stfs f12, 0x208(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x210(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x218(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1fc(r1)
    stfs f5, 0x20c(r1)
    stfs f6, 0x21c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056A040_00001114
    lfs f3, 0x84(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_00001104
    lfs f0, lbl_80887F64
    b lbl_fn_8056A040_00001108
lbl_fn_8056A040_00001104:
    lfs f0, lbl_80887FA8
lbl_fn_8056A040_00001108:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8056A040_00001128
lbl_fn_8056A040_00001114:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8056A040_00001128:
    lfs f2, lbl_80887F40
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    stfs f2, 0x100(r1)
    frsp f2, f2
    psq_st f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    b lbl_fn_8056A040_00001458
lbl_fn_8056A040_00001150:
    lfs f0, lbl_80887F40
    li r0, 0x2
    stfs f0, 0x0(r28)
    psq_l f1, 0x534(r30), 0, 0
    lfs f2, 0x53c(r30)
    stfs f2, 0x8(r31)
    psq_st f1, 0x0(r31), 0, 0
    sth r0, 0xd3e(r30)
    b lbl_fn_8056A040_00001458
lbl_fn_8056A040_00001174:
    cmpwi r0, 0x2
    bne lbl_fn_8056A040_0000119C
    li r4, 0x0
    li r0, 0x3
    stw r4, 0xd40(r3)
    mr r4, r30
    sth r0, 0xd3e(r3)
    mr r3, r6
    bl fn_8016F5EC
    b lbl_fn_8056A040_00001458
lbl_fn_8056A040_0000119C:
    cmpwi r0, 0x3
    bne lbl_fn_8056A040_00001458
    lfs f0, lbl_80887FD4
    stfs f0, 0x0(r4)
    addi r4, r30, 0xc58
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    addi r3, r1, 0xec
    stfs f2, 0x8(r5)
    psq_st f1, 0x0(r5), 0, 0
    li r5, 0x0
    bl fn_8011BF3C
    lfs f3, 0xf4(r1)
    addi r3, r1, 0x128
    lfs f0, 0x530(r30)
    addi r28, r1, 0xe0
    lfs f5, 0xf0(r1)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0xec(r1)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f2, 0x130(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80887FA4
    stfs f4, 0x12c(r1)
    frsp f4, f2
    stfs f3, 0x128(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xe8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8056A040_0000124C
    lfs f3, 0xe0(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_00001240
    lfs f0, lbl_80887F64
    b lbl_fn_8056A040_00001244
lbl_fn_8056A040_00001240:
    lfs f0, lbl_80887FA8
lbl_fn_8056A040_00001244:
    stfs f0, 0x48(r1)
    b lbl_fn_8056A040_00001260
lbl_fn_8056A040_0000124C:
    fmr f2, f4
    lfs f1, 0xe0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8056A040_00001260:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x150
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0x38
    lfs f31, 0x158(r1)
    mr r5, r4
    lfs f30, 0x154(r1)
    addi r3, r1, 0x180
    lfs f13, 0x150(r1)
    lfs f12, 0x168(r1)
    lfs f11, 0x164(r1)
    lfs f10, 0x160(r1)
    lfs f9, 0x178(r1)
    lfs f8, 0x174(r1)
    lfs f7, 0x170(r1)
    lfs f6, 0x17c(r1)
    lfs f5, 0x16c(r1)
    lfs f4, 0x15c(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xe8(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x180(r1)
    stfs f30, 0x184(r1)
    stfs f31, 0x188(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x190(r1)
    stfs f11, 0x194(r1)
    stfs f12, 0x198(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f9, 0x1a8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x18c(r1)
    stfs f5, 0x19c(r1)
    stfs f6, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056A040_0000137C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_0000136C
    lfs f0, lbl_80887F64
    b lbl_fn_8056A040_00001370
lbl_fn_8056A040_0000136C:
    lfs f0, lbl_80887FA8
lbl_fn_8056A040_00001370:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8056A040_00001390
lbl_fn_8056A040_0000137C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8056A040_00001390:
    addi r3, r1, 0x44
    lfs f4, lbl_80887F40
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8075FCA0@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f4
    lfs f3, 0x4(r31)
    lfs f0, 0xe4(r1)
    stfs f2, 0xe8(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8075FCA0@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80887F68
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_000013DC
    lfs f0, lbl_80887F9C
    fsubs f3, f3, f0
lbl_fn_8056A040_000013DC:
    lfs f0, lbl_80887FA0
    fcmpo cr0, f3, f0
    bge lbl_fn_8056A040_000013F0
    lfs f0, lbl_80887F9C
    fadds f3, f3, f0
lbl_fn_8056A040_000013F0:
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_8056A040_00001410
    lfs f3, 0x4(r31)
    lfs f0, lbl_80888010
    fadds f0, f3, f0
    stfs f0, 0x4(r31)
    b lbl_fn_8056A040_00001420
lbl_fn_8056A040_00001410:
    lfs f3, 0x4(r31)
    lfs f0, lbl_80888010
    fsubs f0, f3, f0
    stfs f0, 0x4(r31)
lbl_fn_8056A040_00001420:
    lwz r3, 0xd40(r30)
    addi r0, r3, 0x1
    stw r0, 0xd40(r30)
    cmpwi r0, 0x1e
    ble lbl_fn_8056A040_00001458
    lhz r0, 0xd38(r30)
    li r3, 0x0
    stw r3, 0xd40(r30)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r30)
    b lbl_fn_8056A040_00001458
lbl_fn_8056A040_0000144C:
    lhz r0, 0xd38(r3)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r3)
lbl_fn_8056A040_00001458:
    addi r11, r1, 0x2c0
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    bl _restgpr_27
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_8056A850(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    fmr f31, f1
    stw r31, 0x8c(r1)
    lis r31, lbl_8075FF7C@ha
    stw r30, 0x88(r1)
    lwz r30, 0x10(r4)
    addi r4, r31, lbl_8075FF7C@l
    stw r29, 0x84(r1)
    mr r29, r3
    mr r3, r30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8056A850_00001554
    fabs f0, f31
    lfs f1, lbl_80888018
    frsp f0, f0
    fcmpo cr0, f0, f1
    ble lbl_fn_8056A850_000014F0
    lfs f0, lbl_80888020
    fcmpo cr0, f31, f0
    ble lbl_fn_8056A850_000014E8
    b lbl_fn_8056A850_000014EC
lbl_fn_8056A850_000014E8:
    lfs f1, lbl_8088801C
lbl_fn_8056A850_000014EC:
    fmr f31, f1
lbl_fn_8056A850_000014F0:
    lfs f2, 0x2c(r29)
    fmr f1, f31
    lfs f3, 0x1c(r29)
    addi r3, r1, 0x50
    lfs f0, lbl_80888020
    li r4, 0x79
    lfs f4, 0xc(r29)
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f0, 0xc(r29)
    stfs f0, 0x1c(r29)
    stfs f0, 0x2c(r29)
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x50
    bl fn_805F89F0
    lfs f2, 0x14(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    stfs f2, 0xc(r29)
    stfs f1, 0x1c(r29)
    stfs f0, 0x2c(r29)
    b lbl_fn_8056A850_000015F4
lbl_fn_8056A850_00001554:
    addi r4, r31, lbl_8075FF7C@l
    mr r3, r30
    addi r4, r4, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8056A850_000015F4
    fabs f0, f31
    lfs f1, lbl_80888018
    frsp f0, f0
    fcmpo cr0, f0, f1
    ble lbl_fn_8056A850_000015F4
    lfs f0, lbl_80888020
    fcmpo cr0, f31, f0
    ble lbl_fn_8056A850_00001594
    fsubs f1, f31, f1
    b lbl_fn_8056A850_00001598
lbl_fn_8056A850_00001594:
    fadds f1, f1, f31
lbl_fn_8056A850_00001598:
    lfs f2, 0x2c(r29)
    addi r3, r1, 0x20
    lfs f3, 0x1c(r29)
    li r4, 0x79
    lfs f0, lbl_80888020
    lfs f4, 0xc(r29)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r29)
    stfs f0, 0x1c(r29)
    stfs f0, 0x2c(r29)
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x20
    bl fn_805F89F0
    lfs f2, 0x8(r1)
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f2, 0xc(r29)
    stfs f1, 0x1c(r29)
    stfs f0, 0x2c(r29)
lbl_fn_8056A850_000015F4:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8056A9E8(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x1e0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    bl _savegpr_26
    li r0, 0x0
    stw r0, 0x168(r1)
    lis r9, 0x4330
    fmr f30, f1
    lwz r10, 0xb8(r3)
    mr r26, r3
    stw r9, 0x1b0(r1)
    mr r27, r4
    cntlzw r0, r10
    srwi. r0, r0, 5
    stw r9, 0x1b8(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bne lbl_fn_8056A9E8_00001698
    stw r10, 0x168(r1)
    addi r4, r1, 0x16c
    li r5, 0x0
    lwz r12, 0x0(r10)
    mtctr r12
    addi r3, r3, 0xbc
    bctrl
lbl_fn_8056A9E8_00001698:
    li r0, 0x0
    stw r0, 0x154(r1)
    lwz r6, 0x35c(r26)
    cntlzw r0, r6
    srwi. r0, r0, 5
    bne lbl_fn_8056A9E8_000016CC
    stw r6, 0x154(r1)
    addi r3, r26, 0x360
    addi r4, r1, 0x158
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8056A9E8_000016CC:
    cmpwi r31, 0x0
    beq lbl_fn_8056A9E8_00001860
    lbz r0, 0x7(r31)
    extsb. r0, r0
    beq lbl_fn_8056A9E8_00001860
    stfs f30, 0x20(r1)
    lis r8, fn_8056A850@ha
    addi r8, r8, fn_8056A850@l
    lbz r0, lbl_8087F998
    lwz r4, 0x20(r1)
    li r3, 0x0
    stw r4, 0x24(r1)
    extsb. r0, r0
    lfs f0, 0x24(r1)
    stfs f0, 0x94(r1)
    lwz r7, 0x94(r1)
    stw r8, 0x90(r1)
    stw r8, 0x28(r1)
    stw r7, 0x2c(r1)
    stw r8, 0x38(r1)
    stw r7, 0x3c(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r8, 0x40(r1)
    stw r7, 0x44(r1)
    stw r8, 0x98(r1)
    stw r7, 0x9c(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r3, 0x140(r1)
    stw r8, 0x88(r1)
    stw r7, 0x8c(r1)
    bne lbl_fn_8056A9E8_00001798
    lis r6, lbl_807C9568@ha
    lis r4, fn_8056B2C4@ha
    lis r3, fn_8056B2E4@ha
    li r0, 0x1
    addi r3, r3, fn_8056B2E4@l
    addi r5, r6, lbl_807C9568@l
    addi r4, r4, fn_8056B2C4@l
    stw r8, 0x58(r1)
    stw r7, 0x5c(r1)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r8, 0x68(r1)
    stw r7, 0x6c(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C9568@l(r6)
    stb r0, lbl_8087F998
lbl_fn_8056A9E8_00001798:
    lwz r4, 0x30(r1)
    addi r3, r1, 0x80
    lwz r0, 0x34(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    stw r4, 0x80(r1)
    stw r0, 0x84(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8056A9E8_000017F0
    addic. r0, r1, 0x144
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    beq lbl_fn_8056A9E8_000017E8
    lfs f0, 0x7c(r1)
    stw r3, 0x144(r1)
    stfs f0, 0x148(r1)
lbl_fn_8056A9E8_000017E8:
    li r0, 0x1
    b lbl_fn_8056A9E8_000017F4
lbl_fn_8056A9E8_000017F0:
    li r0, 0x0
lbl_fn_8056A9E8_000017F4:
    cmpwi r0, 0x0
    beq lbl_fn_8056A9E8_0000180C
    lis r3, lbl_807C9568@ha
    addi r3, r3, lbl_807C9568@l
    stw r3, 0x140(r1)
    b lbl_fn_8056A9E8_00001814
lbl_fn_8056A9E8_0000180C:
    li r0, 0x0
    stw r0, 0x140(r1)
lbl_fn_8056A9E8_00001814:
    mr r3, r26
    addi r4, r1, 0x140
    bl fn_800F29D0
    addic. r3, r1, 0x140
    beq lbl_fn_8056A9E8_000018B0
    lwz r4, 0x140(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8056A9E8_000018B0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8056A9E8_00001854
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8056A9E8_00001854:
    li r0, 0x0
    stw r0, 0x140(r1)
    b lbl_fn_8056A9E8_000018B0
lbl_fn_8056A9E8_00001860:
    li r0, 0x0
    stw r0, 0x12c(r1)
    mr r3, r26
    addi r4, r1, 0x12c
    bl fn_800F29D0
    addic. r3, r1, 0x12c
    beq lbl_fn_8056A9E8_000018B0
    lwz r4, 0x12c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8056A9E8_000018B0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8056A9E8_000018A8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8056A9E8_000018A8:
    li r0, 0x0
    stw r0, 0x12c(r1)
lbl_fn_8056A9E8_000018B0:
    li r0, 0x0
    stw r0, 0x118(r1)
    mr r3, r26
    addi r4, r1, 0x118
    bl fn_8031F2A4
    addic. r3, r1, 0x118
    beq lbl_fn_8056A9E8_00001900
    lwz r4, 0x118(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8056A9E8_00001900
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8056A9E8_000018F8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8056A9E8_000018F8:
    li r0, 0x0
    stw r0, 0x118(r1)
lbl_fn_8056A9E8_00001900:
    psq_l f1, 0x0(r29), 0, 0
    addi r3, r1, 0xac
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x8(r26), 0, 0
    lfs f8, 0x28(r29)
    psq_st f2, 0x10(r26), 0, 0
    lfs f7, 0x18(r29)
    psq_st f3, 0x18(r26), 0, 0
    lfs f0, 0x8(r29)
    psq_st f4, 0x20(r26), 0, 0
    psq_st f5, 0x28(r26), 0, 0
    psq_st f6, 0x30(r26), 0, 0
    stfs f0, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    bl fn_805F9940
    lfs f8, 0x24(r29)
    fmr f30, f1
    lfs f7, 0x14(r29)
    addi r3, r1, 0xb8
    lfs f0, 0x4(r29)
    stfs f0, 0xb8(r1)
    stfs f7, 0xbc(r1)
    stfs f8, 0xc0(r1)
    bl fn_805F9940
    lfs f8, 0x20(r29)
    fmr f31, f1
    lfs f7, 0x10(r29)
    addi r3, r1, 0xc4
    lfs f0, 0x0(r29)
    stfs f0, 0xc4(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0xa0(r1)
    frsp f0, f30
    stfs f31, 0xa4(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0xa8(r1)
    ble lbl_fn_8056A9E8_000019B8
    b lbl_fn_8056A9E8_000019BC
lbl_fn_8056A9E8_000019B8:
    fmr f7, f0
lbl_fn_8056A9E8_000019BC:
    lfs f8, 0xa0(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8056A9E8_000019CC
    b lbl_fn_8056A9E8_000019E4
lbl_fn_8056A9E8_000019CC:
    lfs f8, 0xa4(r1)
    lfs f0, 0xa8(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8056A9E8_000019E0
    b lbl_fn_8056A9E8_000019E4
lbl_fn_8056A9E8_000019E0:
    fmr f8, f0
lbl_fn_8056A9E8_000019E4:
    lis r6, lbl_8075FE68@ha
    stfs f8, 0x54(r26)
    mr r3, r27
    mr r4, r30
    mr r5, r26
    lfs f10, lbl_80888020
    lfd f9, lbl_8075FE68@l(r6)
    lfs f8, lbl_80888024
    mtctr r28
    cmpwi r28, 0x0
    ble lbl_fn_8056A9E8_00001BA4
lbl_fn_8056A9E8_00001A10:
    lha r8, 0xa(r3)
    lha r6, 0x8(r3)
    lwz r0, 0x0(r3)
    cmpwi r8, 0x0
    stw r6, 0x180(r1)
    stw r0, 0x184(r1)
    bne lbl_fn_8056A9E8_00001A34
    lfs f11, lbl_80888020
    b lbl_fn_8056A9E8_00001A50
lbl_fn_8056A9E8_00001A34:
    extrwi r6, r8, 5, 17
    extlwi r7, r8, 1, 16
    addi r0, r6, 0x70
    rlwimi r7, r8, 13, 9, 18
    rlwimi r7, r0, 23, 1, 8
    stw r7, 0x1c(r1)
    lfs f11, 0x1c(r1)
lbl_fn_8056A9E8_00001A50:
    lbz r0, 0x11(r3)
    stw r0, 0x1b4(r1)
    lbz r6, 0x13(r3)
    lfd f0, 0x1b0(r1)
    stw r6, 0x1bc(r1)
    lbz r0, 0x14(r3)
    fsubs f0, f0, f9
    stw r0, 0x1b4(r1)
    lfd f7, 0x1b8(r1)
    fdivs f12, f0, f8
    lfd f0, 0x1b0(r1)
    lbz r6, 0x10(r3)
    lha r8, 0xe(r3)
    extsb r6, r6
    stfs f11, 0x188(r1)
    fsubs f7, f7, f9
    neg r0, r6
    fsubs f0, f0, f9
    or r6, r0, r6
    lwz r0, 0x4(r3)
    cmpwi r8, 0x0
    fdivs f7, f7, f8
    srwi r6, r6, 31
    stfs f10, 0x18c(r1)
    stb r6, 0x198(r1)
    stfs f12, 0x190(r1)
    stfs f10, 0x194(r1)
    fdivs f0, f0, f8
    stw r0, 0x1a4(r1)
    stfs f7, 0x19c(r1)
    stfs f0, 0x1a0(r1)
    bne lbl_fn_8056A9E8_00001AD8
    fmr f7, f10
    b lbl_fn_8056A9E8_00001AF4
lbl_fn_8056A9E8_00001AD8:
    extrwi r6, r8, 5, 17
    extlwi r7, r8, 1, 16
    addi r0, r6, 0x70
    rlwimi r7, r8, 13, 9, 18
    rlwimi r7, r0, 23, 1, 8
    stw r7, 0x18(r1)
    lfs f7, 0x18(r1)
lbl_fn_8056A9E8_00001AF4:
    lbz r0, 0x15(r3)
    stw r0, 0x1bc(r1)
    lwz r0, 0x0(r30)
    lfd f0, 0x1b8(r1)
    cmpwi r0, 0x0
    stfs f7, 0x1a8(r1)
    fsubs f0, f0, f9
    fdivs f0, f0, f8
    stfs f0, 0x1ac(r1)
    beq lbl_fn_8056A9E8_00001B2C
    lfs f7, 0x4(r4)
    lfs f0, 0x14(r4)
    stfs f7, 0x188(r1)
    stfs f0, 0x190(r1)
lbl_fn_8056A9E8_00001B2C:
    lwz r0, 0x180(r1)
    addi r3, r3, 0x18
    stw r0, 0x22c(r5)
    addi r4, r4, 0x4
    lwz r0, 0x184(r1)
    stw r0, 0x230(r5)
    lfs f0, 0x188(r1)
    stfs f0, 0x234(r5)
    lfs f0, 0x18c(r1)
    stfs f0, 0x238(r5)
    lfs f0, 0x190(r1)
    stfs f0, 0x23c(r5)
    lfs f0, 0x194(r1)
    stfs f0, 0x240(r5)
    lbz r0, 0x198(r1)
    stb r0, 0x244(r5)
    lbz r0, 0x199(r1)
    stb r0, 0x245(r5)
    lfs f0, 0x19c(r1)
    stfs f0, 0x248(r5)
    lfs f0, 0x1a0(r1)
    stfs f0, 0x24c(r5)
    lwz r0, 0x1a4(r1)
    stw r0, 0x250(r5)
    lfs f0, 0x1a8(r1)
    stfs f0, 0x254(r5)
    lfs f0, 0x1ac(r1)
    stfs f0, 0x258(r5)
    addi r5, r5, 0x30
    bdnz lbl_fn_8056A9E8_00001A10
lbl_fn_8056A9E8_00001BA4:
    lwz r0, 0x4(r26)
    mr r3, r26
    li r4, 0x1
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x4(r26)
    bl fn_80097E80
    cmpwi r31, 0x0
    beq lbl_fn_8056A9E8_00001CA0
    lis r4, lbl_8075FF7C@ha
    lwz r29, 0x220(r26)
    addi r4, r4, lbl_8075FF7C@l
    mr r3, r26
    addi r4, r4, 0xb
    li r5, 0x0
    bl fn_80092814
    mulli r3, r3, 0x2c
    lhz r0, 0x86(r31)
    stwx r0, r29, r3
    add r5, r29, r3
    lha r3, 0x80(r31)
    cmpwi r3, 0x0
    bne lbl_fn_8056A9E8_00001C04
    lfs f8, lbl_80888020
    b lbl_fn_8056A9E8_00001C20
lbl_fn_8056A9E8_00001C04:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0xc(r1)
    lfs f8, 0xc(r1)
lbl_fn_8056A9E8_00001C20:
    lha r3, 0x82(r31)
    cmpwi r3, 0x0
    bne lbl_fn_8056A9E8_00001C34
    lfs f7, lbl_80888020
    b lbl_fn_8056A9E8_00001C50
lbl_fn_8056A9E8_00001C34:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x10(r1)
    lfs f7, 0x10(r1)
lbl_fn_8056A9E8_00001C50:
    lha r3, 0x84(r31)
    cmpwi r3, 0x0
    bne lbl_fn_8056A9E8_00001C64
    lfs f0, lbl_80888020
    b lbl_fn_8056A9E8_00001C80
lbl_fn_8056A9E8_00001C64:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x14(r1)
    lfs f0, 0x14(r1)
lbl_fn_8056A9E8_00001C80:
    stfs f8, 0xd0(r1)
    addi r3, r1, 0xd0
    frsp f2, f0
    stfs f7, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f0, 0xd8(r1)
    stfs f2, 0xc(r5)
lbl_fn_8056A9E8_00001CA0:
    li r0, 0x0
    stw r0, 0x104(r1)
    mr r3, r26
    addi r4, r1, 0x104
    bl fn_8000D430
    addic. r3, r1, 0x104
    beq lbl_fn_8056A9E8_00001CF0
    lwz r4, 0x104(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8056A9E8_00001CF0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8056A9E8_00001CE8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8056A9E8_00001CE8:
    li r0, 0x0
    stw r0, 0x104(r1)
lbl_fn_8056A9E8_00001CF0:
    lis r3, lbl_8075FE68@ha
    mr r5, r26
    lfd f8, lbl_8075FE68@l(r3)
    lfs f0, lbl_80888024
    mtctr r28
    cmpwi r28, 0x0
    ble lbl_fn_8056A9E8_00001D64
lbl_fn_8056A9E8_00001D0C:
    lha r0, 0xc(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8056A9E8_00001D20
    lfs f9, lbl_80888020
    b lbl_fn_8056A9E8_00001D3C
lbl_fn_8056A9E8_00001D20:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x8(r1)
    lfs f9, 0x8(r1)
lbl_fn_8056A9E8_00001D3C:
    lbz r0, 0x12(r27)
    addi r27, r27, 0x18
    stw r0, 0x1b4(r1)
    lfd f7, 0x1b0(r1)
    stfs f9, 0x238(r5)
    fsubs f7, f7, f8
    fdivs f7, f7, f0
    stfs f7, 0x240(r5)
    addi r5, r5, 0x30
    bdnz lbl_fn_8056A9E8_00001D0C
lbl_fn_8056A9E8_00001D64:
    lwz r6, 0x168(r1)
    li r0, 0x0
    stw r0, 0xf0(r1)
    cmpwi r6, 0x0
    beq lbl_fn_8056A9E8_00001D94
    stw r6, 0xf0(r1)
    addi r3, r1, 0x16c
    addi r4, r1, 0xf4
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8056A9E8_00001D94:
    mr r3, r26
    addi r4, r1, 0xf0
    bl fn_800F29D0
    addic. r3, r1, 0xf0
    beq lbl_fn_8056A9E8_00001DDC
    lwz r4, 0xf0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8056A9E8_00001DDC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8056A9E8_00001DD4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8056A9E8_00001DD4:
    li r0, 0x0
    stw r0, 0xf0(r1)
lbl_fn_8056A9E8_00001DDC:
    lwz r6, 0x154(r1)
    li r0, 0x0
    stw r0, 0xdc(r1)
    cmpwi r6, 0x0
    beq lbl_fn_8056A9E8_00001E0C
    stw r6, 0xdc(r1)
    addi r3, r1, 0x158
    addi r4, r1, 0xe0
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8056A9E8_00001E0C:
    mr r3, r26
    addi r4, r1, 0xdc
    bl fn_8031F2A4
    addic. r3, r1, 0xdc
    beq lbl_fn_8056A9E8_00001E54
    lwz r4, 0xdc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8056A9E8_00001E54
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8056A9E8_00001E4C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8056A9E8_00001E4C:
    li r0, 0x0
    stw r0, 0xdc(r1)
lbl_fn_8056A9E8_00001E54:
    addic. r3, r1, 0x154
    beq lbl_fn_8056A9E8_00001E90
    lwz r4, 0x154(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8056A9E8_00001E90
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8056A9E8_00001E88
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8056A9E8_00001E88:
    li r0, 0x0
    stw r0, 0x154(r1)
lbl_fn_8056A9E8_00001E90:
    addic. r3, r1, 0x168
    beq lbl_fn_8056A9E8_00001ECC
    lwz r4, 0x168(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8056A9E8_00001ECC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8056A9E8_00001EC4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8056A9E8_00001EC4:
    li r0, 0x0
    stw r0, 0x168(r1)
lbl_fn_8056A9E8_00001ECC:
    addi r11, r1, 0x1e0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    bl _restgpr_26
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}
