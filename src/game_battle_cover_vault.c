#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8003EFB0(void);
extern void fn_800577D8(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80063D3C(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092F1C(void);
extern void fn_80097A88(void);
extern void fn_80097B34(void);
extern void fn_80097C08(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_8011BE54(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_8012D8B8(void);
extern void fn_80145334(void);
extern void fn_8015495C(void);
extern void fn_801644D4(void);
extern void fn_80176ACC(void);
extern void fn_8017CB2C(void);
extern void fn_802180A8(void);
extern void fn_80232B7C(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A02C(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_803E598C(void);
extern void fn_803EC568(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED774(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80499B9C(void);
extern void fn_80499C48(void);
extern void fn_8049D68C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80682428(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_807523EC[];
extern u8 lbl_807524F0[];
extern u8 lbl_8075250C[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078CDF8[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8740[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886018;
extern u32 lbl_8088601C;
extern u32 lbl_80886020;
extern u32 lbl_80886024;
extern u32 lbl_80886028;
extern u32 lbl_8088602C;
extern u32 lbl_80886030;
extern u32 lbl_80886034;

/* Function declarations */
void fn_803F8324(void);
void fn_803F86E0(void);
void fn_803F87E0(void);
void fn_803F8890(void);
void fn_803F8C98(void);
void fn_803F8E68(void);
void fn_803F8F30(void);
void fn_803F93E4(void);
void fn_803F9400(void);
void fn_803F9408(void);
void fn_803F940C(void);
void fn_803F9420(void);
void fn_803F94E0(void);
void fn_803F957C(void);
void fn_803F9624(void);

asm void fn_803F8324(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    stw r31, 0x1fc(r1)
    mr r31, r3
    stw r30, 0x1f8(r1)
    lwz r0, 0x8cc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803F8324_000002D4
    addi r6, r3, 0x938
    addi r4, r1, 0x14
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r1, 0x1c0
    psq_l f2, 0x8(r6), 0, 0
    addi r7, r31, 0x974
    psq_l f3, 0x10(r6), 0, 0
    mr r5, r4
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lfs f0, lbl_80886018
    lfs f7, 0x1ec(r1)
    psq_st f2, 0x8(r3), 0, 0
    lfs f9, 0x1cc(r1)
    psq_st f4, 0x18(r3), 0, 0
    lfs f8, 0x1dc(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0x1cc(r1)
    stfs f0, 0x1dc(r1)
    stfs f0, 0x1ec(r1)
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x97c(r31)
    stfs f9, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f7, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f9, 0x20(r1)
    addi r30, r1, 0x150
    lfs f8, 0x14(r1)
    lfs f7, lbl_80886018
    lfs f0, lbl_8088601C
    fadds f11, f9, f8
    lfs f9, 0x24(r1)
    lfs f8, 0x18(r1)
    stfs f7, 0x17c(r1)
    fadds f10, f9, f8
    lfs f9, 0x28(r1)
    lfs f8, 0x1c(r1)
    stfs f7, 0x174(r1)
    fadds f8, f9, f8
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f7, 0x168(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x15c(r1)
    stfs f7, 0x158(r1)
    stfs f7, 0x154(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x150(r1)
    lfs f1, 0x988(r31)
    stfs f11, 0x20(r1)
    fcmpu cr0, f7, f1
    stfs f10, 0x24(r1)
    stfs f8, 0x28(r1)
    beq lbl_fn_803F8324_0000016C
    addi r3, r1, 0x60
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    addi r3, r1, 0x30
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
lbl_fn_803F8324_0000016C:
    lfs f0, lbl_80886018
    lfs f1, 0x984(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_803F8324_000001CC
    addi r3, r1, 0xc0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc0
    addi r5, r1, 0x90
    bl fn_805F89F0
    addi r3, r1, 0x90
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
lbl_fn_803F8324_000001CC:
    lfs f0, lbl_80886018
    lfs f1, 0x980(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_803F8324_0000022C
    addi r3, r1, 0x120
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    addi r3, r1, 0xf0
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
lbl_fn_803F8324_0000022C:
    addi r4, r1, 0x1c0
    addi r3, r1, 0x150
    mr r5, r4
    bl fn_805F89F0
    lfs f0, 0x20(r1)
    addi r5, r1, 0x1c0
    stfs f0, 0x1cc(r1)
    addi r4, r1, 0x18c
    lfs f7, 0x28(r1)
    addi r7, r31, 0x98c
    lfs f0, 0x24(r1)
    addi r3, r31, 0x554
    stfs f0, 0x1dc(r1)
    addi r6, r1, 0x180
    psq_l f1, 0x0(r5), 0, 0
    stfs f7, 0x1ec(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x994(r31)
    psq_st f1, 0x0(r6), 0, 0
    psq_st f1, 0x3c(r3), 0, 0
    psq_l f1, 0xc(r6), 0, 0
    stfs f2, 0x188(r1)
    stfs f2, 0x598(r31)
    psq_l f2, 0x14(r6), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800577D8
lbl_fn_803F8324_000002D4:
    lwz r0, 0x91c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F8324_00000314
    lfs f0, 0x954(r31)
    addi r3, r1, 0x8
    lfs f7, 0x944(r31)
    addi r4, r31, 0x90c
    stfs f7, 0x8(r1)
    lfs f2, 0x964(r31)
    stfs f0, 0xc(r1)
    lfs f8, 0x9a4(r31)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x914(r31)
    stfs f8, 0x918(r31)
lbl_fn_803F8324_00000314:
    lwz r0, 0x550(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F8324_000003A4
    lwz r0, 0x4c4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F8324_00000368
    addi r3, r31, 0x4c8
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    b lbl_fn_803F8324_000003A4
lbl_fn_803F8324_00000368:
    addi r4, r31, 0x938
    addi r3, r31, 0x4c8
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
lbl_fn_803F8324_000003A4:
    lwz r0, 0x204(r1)
    lwz r31, 0x1fc(r1)
    lwz r30, 0x1f8(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_803F86E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x9b0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803F86E0_000003E8
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803F86E0_000004A8
lbl_fn_803F86E0_000003E8:
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803F86E0_0000045C
    lwz r0, 0x4c4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803F86E0_0000045C
    lwz r0, 0x96c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803F86E0_00000420
    lwz r0, 0x9ac(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803F86E0_0000045C
lbl_fn_803F86E0_00000420:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F86E0_0000045C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_803F86E0_0000045C:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803F86E0_000004A8
    lwz r0, 0x8cc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F86E0_000004A8
    lwz r0, 0x91c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F86E0_000004A8
    lwz r0, 0x550(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F86E0_000004A8
    lwz r3, lbl_8087EEB0
    addi r4, r31, 0x6c
    lfs f1, lbl_80886020
    li r5, -0x100
    lfs f2, lbl_80886018
    bl fn_80063D3C
lbl_fn_803F86E0_000004A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F87E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_803F87E0_000004E8
    li r3, 0x1
    b lbl_fn_803F87E0_00000558
lbl_fn_803F87E0_000004E8:
    addi r3, r31, 0x4c8
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_803F87E0_00000500
    li r3, 0x1
    b lbl_fn_803F87E0_00000558
lbl_fn_803F87E0_00000500:
    addi r3, r31, 0x920
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_803F87E0_00000518
    li r3, 0x1
    b lbl_fn_803F87E0_00000558
lbl_fn_803F87E0_00000518:
    addi r3, r31, 0x92c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_803F87E0_00000530
    li r3, 0x1
    b lbl_fn_803F87E0_00000558
lbl_fn_803F87E0_00000530:
    lwz r3, 0x968(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803F87E0_00000554
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803F87E0_00000554
    li r3, 0x1
    b lbl_fn_803F87E0_00000558
lbl_fn_803F87E0_00000554:
    li r3, 0x0
lbl_fn_803F87E0_00000558:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F8890(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    stw r28, 0x740(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r30, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r3, lbl_807523EC@ha
    li r31, 0x1
    addi r30, r3, lbl_807523EC@l
lbl_fn_803F8890_00000624:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803F8890_00000944
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_0000067C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r28
    addi r4, r28, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    stw r31, 0x4c4(r28)
    b lbl_fn_803F8890_0000070C
lbl_fn_803F8890_0000067C:
    mr r3, r29
    addi r4, r30, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_000006C4
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r28, 0xf4
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_803F8890_0000070C
lbl_fn_803F8890_000006C4:
    mr r3, r29
    addi r4, r30, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_0000070C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    stw r3, 0x970(r28)
    mr r4, r3
    addi r3, r28, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
lbl_fn_803F8890_0000070C:
    mr r3, r29
    addi r4, r30, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_0000073C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0x4c8
    bl fn_80058078
    stw r31, 0x550(r28)
    b lbl_fn_803F8890_00000944
lbl_fn_803F8890_0000073C:
    mr r3, r29
    addi r4, r30, 0x25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_000007E8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x974(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x978(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x97c(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x980(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x984(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x988(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x98c(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x990(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x994(r28)
    stw r31, 0x8cc(r28)
    b lbl_fn_803F8890_00000944
lbl_fn_803F8890_000007E8:
    mr r3, r29
    addi r4, r30, 0x2f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_00000844
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x998(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x99c(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x9a0(r28)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x9a4(r28)
    stw r31, 0x91c(r28)
    b lbl_fn_803F8890_00000944
lbl_fn_803F8890_00000844:
    mr r3, r29
    addi r4, r30, 0x3c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_00000870
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0x920
    bl fn_80237654
    b lbl_fn_803F8890_00000944
lbl_fn_803F8890_00000870:
    mr r3, r29
    addi r4, r30, 0x40
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_0000089C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0x92c
    bl fn_8023780C
    b lbl_fn_803F8890_00000944
lbl_fn_803F8890_0000089C:
    mr r3, r29
    addi r4, r30, 0x44
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_000008D8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r28
    bl fn_8049D68C
    cmpwi r3, 0x0
    stw r3, 0x968(r28)
    beq lbl_fn_803F8890_00000944
    stw r31, 0xf4(r3)
    b lbl_fn_803F8890_00000944
lbl_fn_803F8890_000008D8:
    mr r3, r29
    addi r4, r30, 0x48
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_00000924
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x8
    addi r4, r30, 0x4d
    bl fn_80682428
    cmpwi r3, 0x0
    li r0, 0x1
    bne lbl_fn_803F8890_0000091C
    li r0, 0x2
lbl_fn_803F8890_0000091C:
    stw r0, 0x9a8(r28)
    b lbl_fn_803F8890_00000944
lbl_fn_803F8890_00000924:
    mr r3, r29
    addi r4, r30, 0x50
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_00000944
    mr r3, r28
    addi r4, r1, 0x108
    bl fn_803F8C98
lbl_fn_803F8890_00000944:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803F8890_00000624
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    lwz r28, 0x740(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_803F8C98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r4
    mr r29, r3
    mr r3, r30
    bl fn_8005B9CC
    lis r28, lbl_807523EC@ha
    mr r27, r3
    addi r31, r28, lbl_807523EC@l
    b lbl_fn_803F8C98_00000B14
lbl_fn_803F8C98_000009A4:
    mr r3, r27
    addi r4, r31, 0x55
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_000009C8
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x1
    stw r0, 0x9ac(r29)
    b lbl_fn_803F8C98_00000B08
lbl_fn_803F8C98_000009C8:
    mr r3, r27
    addi r4, r31, 0x68
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_000009EC
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x2
    stw r0, 0x9ac(r29)
    b lbl_fn_803F8C98_00000B08
lbl_fn_803F8C98_000009EC:
    mr r3, r27
    addi r4, r31, 0x77
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_00000A10
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x4
    stw r0, 0x9ac(r29)
    b lbl_fn_803F8C98_00000B08
lbl_fn_803F8C98_00000A10:
    mr r3, r27
    addi r4, r31, 0x8b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_00000A34
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x8
    stw r0, 0x9ac(r29)
    b lbl_fn_803F8C98_00000B08
lbl_fn_803F8C98_00000A34:
    mr r3, r27
    addi r4, r31, 0x99
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_00000A58
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x10
    stw r0, 0x9ac(r29)
    b lbl_fn_803F8C98_00000B08
lbl_fn_803F8C98_00000A58:
    mr r3, r27
    addi r4, r31, 0xab
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_00000A7C
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x20
    stw r0, 0x9ac(r29)
    b lbl_fn_803F8C98_00000B08
lbl_fn_803F8C98_00000A7C:
    mr r3, r27
    addi r4, r31, 0xbf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_00000AA0
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x40
    stw r0, 0x9ac(r29)
    b lbl_fn_803F8C98_00000B08
lbl_fn_803F8C98_00000AA0:
    mr r3, r27
    addi r4, r31, 0xcb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_00000AC4
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x80
    stw r0, 0x9ac(r29)
    b lbl_fn_803F8C98_00000B08
lbl_fn_803F8C98_00000AC4:
    mr r3, r27
    addi r4, r31, 0xdf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_00000AE8
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x100
    stw r0, 0x9ac(r29)
    b lbl_fn_803F8C98_00000B08
lbl_fn_803F8C98_00000AE8:
    mr r3, r27
    addi r4, r31, 0xf0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_00000B08
    lwz r0, 0x9ac(r29)
    ori r0, r0, 0x200
    stw r0, 0x9ac(r29)
lbl_fn_803F8C98_00000B08:
    mr r3, r30
    bl fn_8005B9CC
    mr r27, r3
lbl_fn_803F8C98_00000B14:
    cmpwi r27, 0x0
    beq lbl_fn_803F8C98_00000B30
    mr r4, r27
    addi r3, r28, lbl_807523EC@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F8C98_000009A4
lbl_fn_803F8C98_00000B30:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F8E68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bne lbl_fn_803F8E68_00000B68
    li r3, 0x0
    b lbl_fn_803F8E68_00000BF8
lbl_fn_803F8E68_00000B68:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x2
    beq lbl_fn_803F8E68_00000B88
    cmpwi r0, 0x1
    beq lbl_fn_803F8E68_00000B94
    cmpwi r0, 0x3
    beq lbl_fn_803F8E68_00000BA0
    b lbl_fn_803F8E68_00000BF4
lbl_fn_803F8E68_00000B88:
    li r4, 0x1
    bl fn_803F8F30
    b lbl_fn_803F8E68_00000BF4
lbl_fn_803F8E68_00000B94:
    li r4, 0x0
    bl fn_803F8F30
    b lbl_fn_803F8E68_00000BF4
lbl_fn_803F8E68_00000BA0:
    li r4, 0x0
    bl fn_803F8F30
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_8088601C
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r4, r31, 0x920
    addi r8, r31, 0x6c
    stw r0, 0x10(r1)
    addi r9, r31, 0x78
    li r5, -0x1
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
lbl_fn_803F8E68_00000BF4:
    lwz r3, 0x54(r31)
lbl_fn_803F8E68_00000BF8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F8F30(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r4, 0x96c(r3)
    li r4, 0x1
    beq lbl_fn_803F8F30_00000C38
    li r4, 0x2
lbl_fn_803F8F30_00000C38:
    lwz r0, 0x4c4(r3)
    stw r4, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803F8F30_00000CC8
    lwz r0, 0x96c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803F8F30_00000C64
    lwz r0, 0x9ac(r3)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803F8F30_00000CC8
lbl_fn_803F8F30_00000C64:
    addi r3, r3, 0xf4
    bl fn_80097B34
    cmpwi r3, 0x0
    ble lbl_fn_803F8F30_00000CC8
    lwz r3, 0x9ac(r31)
    li r7, 0x0
    extrwi r0, r3, 1, 30
    xori r6, r0, 0x1
    cmpwi r6, 0x0
    beq lbl_fn_803F8F30_00000C98
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_803F8F30_00000C9C
lbl_fn_803F8F30_00000C98:
    li r7, 0x1
lbl_fn_803F8F30_00000C9C:
    cmpwi r7, 0x0
    beq lbl_fn_803F8F30_00000CAC
    lfs f1, lbl_8088601C
    b lbl_fn_803F8F30_00000CB0
lbl_fn_803F8F30_00000CAC:
    lfs f1, lbl_80886018
lbl_fn_803F8F30_00000CB0:
    lwz r5, 0x970(r31)
    addi r3, r31, 0xf4
    lfs f2, lbl_80886024
    li r4, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_803F8F30_00000CC8:
    lwz r3, 0x9ac(r31)
    lwz r4, 0x96c(r31)
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803F8F30_00000CE8
    cntlzw r0, r4
    srwi r4, r0, 5
    b lbl_fn_803F8F30_00000CF8
lbl_fn_803F8F30_00000CE8:
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_803F8F30_00000CF8
    li r4, 0x1
lbl_fn_803F8F30_00000CF8:
    lwz r0, 0x550(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F8F30_00000D28
    cmpwi r4, 0x0
    beq lbl_fn_803F8F30_00000D1C
    lwz r0, 0x4d0(r31)
    ori r0, r0, 0x1
    stw r0, 0x4d0(r31)
    b lbl_fn_803F8F30_00000D28
lbl_fn_803F8F30_00000D1C:
    lwz r0, 0x4d0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4d0(r31)
lbl_fn_803F8F30_00000D28:
    lwz r0, 0x8cc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F8F30_00000D58
    cmpwi r4, 0x0
    beq lbl_fn_803F8F30_00000D4C
    lwz r0, 0x55c(r31)
    ori r0, r0, 0x1
    stw r0, 0x55c(r31)
    b lbl_fn_803F8F30_00000D58
lbl_fn_803F8F30_00000D4C:
    lwz r0, 0x55c(r31)
    clrrwi r0, r0, 1
    stw r0, 0x55c(r31)
lbl_fn_803F8F30_00000D58:
    lwz r0, 0x91c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F8F30_00000D88
    cmpwi r4, 0x0
    beq lbl_fn_803F8F30_00000D7C
    lwz r0, 0x8d8(r31)
    ori r0, r0, 0x1
    stw r0, 0x8d8(r31)
    b lbl_fn_803F8F30_00000D88
lbl_fn_803F8F30_00000D7C:
    lwz r0, 0x8d8(r31)
    clrrwi r0, r0, 1
    stw r0, 0x8d8(r31)
lbl_fn_803F8F30_00000D88:
    lwz r3, 0x968(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803F8F30_00000E00
    lwz r0, 0x96c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F8F30_00000DB0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_803F8F30_00000DBC
lbl_fn_803F8F30_00000DB0:
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803F8F30_00000DBC:
    lwz r3, 0x968(r31)
    lwz r30, 0x70(r3)
    b lbl_fn_803F8F30_00000DF8
lbl_fn_803F8F30_00000DC8:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x5
    bne lbl_fn_803F8F30_00000DF4
    lwz r0, 0x96c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F8F30_00000DEC
    mr r3, r30
    bl fn_80499B9C
    b lbl_fn_803F8F30_00000DF4
lbl_fn_803F8F30_00000DEC:
    mr r3, r30
    bl fn_80499C48
lbl_fn_803F8F30_00000DF4:
    lwz r30, 0x4c(r30)
lbl_fn_803F8F30_00000DF8:
    cmpwi r30, 0x0
    bne lbl_fn_803F8F30_00000DC8
lbl_fn_803F8F30_00000E00:
    lwz r0, 0x9ac(r31)
    mr r4, r31
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    extrwi r0, r0, 1, 29
    xori r6, r0, 0x1
    bl fn_80239DAC
    lwz r0, 0x96c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F8F30_00000E38
    lwz r0, 0x9ac(r31)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_803F8F30_000010A8
lbl_fn_803F8F30_00000E38:
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r0, 0x1
    stw r0, 0xb8(r3)
    lwz r0, 0x48(r31)
    cmpwi r0, 0x13b9
    bne lbl_fn_803F8F30_00000E68
    lwz r3, lbl_8087F3C0
    li r0, 0x7
    stw r0, 0xb8(r3)
lbl_fn_803F8F30_00000E68:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    li r5, -0x1
    lfs f1, lbl_8088601C
    stw r0, 0x8(r1)
    li r0, 0x1
    addi r4, r31, 0x920
    addi r7, r31, 0x938
    stw r5, 0xc(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    stw r0, 0x10(r1)
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803F8F30_00000EBC
    lwz r5, 0x48(r3)
    b lbl_fn_803F8F30_00000EC0
lbl_fn_803F8F30_00000EBC:
    li r5, 0x0
lbl_fn_803F8F30_00000EC0:
    lwz r0, 0x9ac(r31)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_803F8F30_00000F40
    cmpwi r5, 0x0
    beq lbl_fn_803F8F30_00000F40
    lfs f0, lbl_80886018
    li r3, -0x1
    lfs f1, lbl_8088601C
    li r0, 0x1
    stfs f0, 0x5c(r1)
    addi r4, r31, 0x92c
    addi r5, r5, 0xb0
    addi r7, r1, 0x50
    stfs f0, 0x60(r1)
    addi r8, r1, 0x5c
    addi r9, r1, 0x68
    li r6, 0x0
    stfs f0, 0x64(r1)
    li r10, -0x1
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_803F8F30_00001078
lbl_fn_803F8F30_00000F40:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F8F30_00000FD8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80886018
    li r11, -0x1
    lfs f1, lbl_8088601C
    li r0, 0x1
    stfs f0, 0x34(r1)
    mr r5, r3
    addi r4, r31, 0x92c
    addi r7, r1, 0x28
    stfs f0, 0x38(r1)
    addi r8, r1, 0x34
    addi r9, r1, 0x40
    li r6, 0x0
    stfs f0, 0x3c(r1)
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_803F8F30_00001078
lbl_fn_803F8F30_00000FD8:
    lfs f0, lbl_80886018
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    lwz r0, 0x9ac(r31)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803F8F30_0000102C
    psq_l f1, 0x6c(r31), 0, 0
    addi r3, r1, 0x84
    lfs f2, 0x74(r31)
    addi r4, r1, 0x78
    stfs f2, 0x8c(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x78(r31), 0, 0
    lfs f2, 0x80(r31)
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_803F8F30_0000102C:
    lfs f1, 0x90(r31)
    li r3, -0x1
    lfs f0, lbl_8088601C
    li r0, 0x1
    stfs f0, 0x18(r1)
    addi r4, r31, 0x92c
    addi r7, r1, 0x84
    addi r8, r1, 0x78
    stfs f0, 0x1c(r1)
    addi r9, r1, 0x18
    li r5, 0x0
    li r6, 0x0
    stfs f0, 0x20(r1)
    li r10, -0x1
    stfs f0, 0x24(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_803F8F30_00001078:
    lwz r0, 0x9ac(r31)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_803F8F30_0000109C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x8
    bl fn_8023A02C
lbl_fn_803F8F30_0000109C:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_803F8F30_000010A8:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_803F93E4(void)
{
    nofralloc
    lwz r0, 0x4c4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803F93E4_000010D4
    addi r3, r3, 0xf4
    blr
lbl_fn_803F93E4_000010D4:
    li r3, 0x0
    blr
}

asm void fn_803F9400(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_803F9408(void)
{
    nofralloc
    blr
}

asm void fn_803F940C(void)
{
    nofralloc
    lwz r0, 0xf8(r3)
    stw r4, 0x2d0(r3)
    oris r0, r0, 0x1
    stw r0, 0xf8(r3)
    blr
}

asm void fn_803F9420(void)
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
    beq lbl_fn_803F9420_0000119C
    lis r5, lbl_8075250C@ha
    li r3, 0x110
    addi r5, r5, lbl_8075250C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803F9420_00001194
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r4, lbl_8078CDF8@ha
    li r3, 0x0
    addi r4, r4, lbl_8078CDF8@l
    stw r4, 0x0(r31)
    li r0, 0x1
    stw r30, 0xf4(r31)
    stw r3, 0xf8(r31)
    stw r3, 0xfc(r31)
    stw r3, 0x100(r31)
    stw r3, 0x104(r31)
    stw r3, 0x108(r31)
    stw r3, 0x10c(r31)
    stw r3, 0x54(r31)
    stw r0, 0x68(r31)
lbl_fn_803F9420_00001194:
    mr r3, r31
    b lbl_fn_803F9420_000011A0
lbl_fn_803F9420_0000119C:
    li r3, 0x0
lbl_fn_803F9420_000011A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F94E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_803F94E0_00001240
    lwz r3, 0xf4(r31)
    li r4, 0x1
    lwz r0, 0x28(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803F94E0_000011F8
    li r4, 0x2
lbl_fn_803F94E0_000011F8:
    lfs f0, lbl_80886028
    li r0, 0x0
    stw r4, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_803F94E0_00001244
lbl_fn_803F94E0_00001240:
    li r3, 0x0
lbl_fn_803F94E0_00001244:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803F957C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0xf4(r3)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f0, 0x14(r4)
    stfs f0, 0x7c(r3)
    lwz r0, 0x20(r4)
    cmpwi r0, 0x2
    beq lbl_fn_803F957C_000012A0
    cmpwi r0, 0x3
    beq lbl_fn_803F957C_000012B4
    b lbl_fn_803F957C_000012C4
lbl_fn_803F957C_000012A0:
    lwz r3, lbl_8087F408
    lwz r4, 0x24(r4)
    bl fn_8011FC10
    stw r3, 0xf8(r31)
    b lbl_fn_803F957C_000012C4
lbl_fn_803F957C_000012B4:
    lwz r3, lbl_8087F8A0
    lwz r4, 0x24(r4)
    bl fn_8011F91C
    stw r3, 0xf8(r31)
lbl_fn_803F957C_000012C4:
    lwz r3, 0xf8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803F957C_000012DC
    lwz r0, 0x54c(r3)
    oris r0, r0, 0x8
    stw r0, 0x54c(r3)
lbl_fn_803F957C_000012DC:
    lwz r3, 0xf4(r31)
    lwz r0, 0x28(r3)
    extrwi r0, r0, 1, 30
    stw r0, 0x100(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F9624(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_27
    lwz r4, 0xf8(r3)
    mr r30, r3
    cmpwi r4, 0x0
    beq lbl_fn_803F9624_00001348
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_803F9624_00001348
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_803F9624_00001378
lbl_fn_803F9624_00001348:
    lwz r4, 0xf8(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803F9624_00001AD8
    lwz r0, 0x54c(r4)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_803F9624_00001AD8
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x54c(r4)
    b lbl_fn_803F9624_00001AD8
lbl_fn_803F9624_00001378:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803F9624_00001390
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    beq lbl_fn_803F9624_00001AD8
lbl_fn_803F9624_00001390:
    lwz r3, 0xf8(r30)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803F9624_000013C4
    lwz r0, 0x108(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803F9624_000013C4
    lwz r3, 0x104(r30)
    li r0, 0x1
    stw r0, 0x108(r30)
    addi r0, r3, 0x1
    stw r0, 0x104(r30)
lbl_fn_803F9624_000013C4:
    lwz r3, 0xf4(r30)
    lwz r3, 0x34(r3)
    cmpwi r3, 0x0
    ble lbl_fn_803F9624_0000142C
    lwz r0, 0x10c(r30)
    cmpw r0, r3
    blt lbl_fn_803F9624_0000142C
    li r5, 0x0
    stw r5, 0x10c(r30)
    lfs f0, lbl_80886028
    li r0, 0x1
    stw r0, 0x80(r1)
    mr r3, r30
    addi r4, r1, 0x80
    stw r5, 0x84(r1)
    stw r5, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r5, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F9624_00001AD8
lbl_fn_803F9624_0000142C:
    lwz r3, 0xf8(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_803F9624_000014AC
    lwz r0, 0xfc(r30)
    li r3, 0x0
    stw r3, 0x100(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_803F9624_00001460
    lwz r3, 0xf4(r30)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_803F9624_000014A8
lbl_fn_803F9624_00001460:
    lwz r3, 0xfc(r30)
    subic. r0, r3, 0x1
    stw r0, 0xfc(r30)
    bgt lbl_fn_803F9624_000014AC
    lwz r3, 0xf8(r30)
    lwz r0, 0x1418(r3)
    cmpwi r0, 0x1e
    bge lbl_fn_803F9624_00001490
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803F9624_0000149C
lbl_fn_803F9624_00001490:
    li r0, 0x1
    stw r0, 0x100(r30)
    b lbl_fn_803F9624_000014AC
lbl_fn_803F9624_0000149C:
    li r0, 0x1
    stw r0, 0xfc(r30)
    b lbl_fn_803F9624_000014AC
lbl_fn_803F9624_000014A8:
    stw r0, 0xfc(r30)
lbl_fn_803F9624_000014AC:
    lwz r0, 0x100(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803F9624_00001AD8
    li r0, 0x0
    stw r0, 0x100(r30)
    lwz r3, 0xf8(r30)
    li r31, 0x0
    stw r0, 0x108(r30)
    lfs f0, lbl_8088602C
    lwz r0, 0x12a4(r3)
    stfs f0, 0x48(r1)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r3)
    lwz r3, 0xf8(r30)
    stfs f0, 0x4c(r1)
    stfs f0, 0xf0(r3)
    stfs f0, 0xf4(r3)
    stfs f0, 0xf8(r3)
    stfs f0, 0xfc(r3)
    lwz r0, 0x54(r30)
    stfs f0, 0x50(r1)
    cmpwi r0, 0x3
    stfs f0, 0x54(r1)
    bne lbl_fn_803F9624_0000154C
    lwz r4, 0xf8(r30)
    lwz r0, 0x54c(r4)
    rlwinm r3, r0, 0, 3, 3
    subis r0, r3, 0x1000
    cmplwi r0, 0x0
    beq lbl_fn_803F9624_00001588
    lwz r0, 0x54c(r4)
    li r31, 0x1
    lfs f0, lbl_80886030
    oris r0, r0, 0x1000
    stw r0, 0x54c(r4)
    lwz r3, 0xf8(r30)
    lfs f3, 0x984(r3)
    fadds f0, f3, f0
    stfs f0, 0x984(r3)
    b lbl_fn_803F9624_00001588
lbl_fn_803F9624_0000154C:
    lwz r4, 0xf8(r30)
    lwz r0, 0x54c(r4)
    rlwinm r3, r0, 0, 3, 3
    subis r0, r3, 0x1000
    cmplwi r0, 0x0
    bne lbl_fn_803F9624_00001588
    lwz r0, 0x54c(r4)
    li r31, 0x1
    lfs f0, lbl_80886030
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0x54c(r4)
    lwz r3, 0xf8(r30)
    lfs f3, 0x984(r3)
    fsubs f0, f3, f0
    stfs f0, 0x984(r3)
lbl_fn_803F9624_00001588:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x3
    bne lbl_fn_803F9624_0000163C
    lwz r3, 0xf8(r30)
    bl fn_8017CB2C
    cmpwi r3, 0x0
    beq lbl_fn_803F9624_0000163C
    lwz r5, 0xf8(r30)
    lwz r0, 0x54c(r5)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    beq lbl_fn_803F9624_000016CC
    lwz r4, 0x54c(r5)
    lis r0, 0x4330
    stw r0, 0xd0(r1)
    lis r3, lbl_807524F0@ha
    oris r0, r4, 0x80
    lfd f5, lbl_807524F0@l(r3)
    stw r0, 0x54c(r5)
    li r31, 0x1
    lfs f3, lbl_80886034
    lwz r3, lbl_8087F0A8
    lwz r4, 0xf8(r30)
    lwz r0, 0xd4(r3)
    lfs f0, 0x984(r4)
    slwi r0, r0, 5
    add r3, r3, r0
    lwz r0, 0xe4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfd f4, 0xd0(r1)
    fsubs f4, f4, f5
    fadds f0, f0, f4
    stfs f0, 0x984(r4)
    lwz r3, 0xf8(r30)
    lfs f0, 0x98c(r3)
    fadds f0, f0, f3
    stfs f0, 0x98c(r3)
    lwz r3, 0xf8(r30)
    lfs f0, 0x990(r3)
    fadds f0, f0, f3
    stfs f0, 0x990(r3)
    b lbl_fn_803F9624_000016CC
lbl_fn_803F9624_0000163C:
    lwz r5, 0xf8(r30)
    lwz r0, 0x54c(r5)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_803F9624_000016CC
    lwz r4, 0x54c(r5)
    lis r0, 0x4330
    stw r0, 0xd0(r1)
    lis r3, lbl_807524F0@ha
    rlwinm r0, r4, 0, 9, 7
    lfd f5, lbl_807524F0@l(r3)
    stw r0, 0x54c(r5)
    li r31, 0x1
    lfs f3, lbl_80886034
    lwz r3, lbl_8087F0A8
    lwz r4, 0xf8(r30)
    lwz r0, 0xd4(r3)
    lfs f0, 0x984(r4)
    slwi r0, r0, 5
    add r3, r3, r0
    lwz r0, 0xe4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfd f4, 0xd0(r1)
    fsubs f4, f4, f5
    fsubs f0, f0, f4
    stfs f0, 0x984(r4)
    lwz r3, 0xf8(r30)
    lfs f0, 0x98c(r3)
    fsubs f0, f0, f3
    stfs f0, 0x98c(r3)
    lwz r3, 0xf8(r30)
    lfs f0, 0x990(r3)
    fsubs f0, f0, f3
    stfs f0, 0x990(r3)
lbl_fn_803F9624_000016CC:
    cmpwi r31, 0x0
    beq lbl_fn_803F9624_000016EC
    lwz r3, 0xf8(r30)
    addi r3, r3, 0x7d4
    bl fn_8012B3E8
    lwz r3, 0xf8(r30)
    addi r3, r3, 0x7d4
    bl fn_8012B988
lbl_fn_803F9624_000016EC:
    lwz r3, 0xf8(r30)
    bl fn_80176ACC
    lwz r3, 0xf8(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xf8(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_803F9624_0000171C
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r3)
lbl_fn_803F9624_0000171C:
    lwz r3, 0xf8(r30)
    addi r3, r3, 0x7d4
    bl fn_8012D8B8
    lwz r7, 0xf8(r30)
    li r0, 0x0
    li r4, 0x0
    li r5, 0x1
    lwz r3, 0x954(r7)
    li r6, 0x1
    stw r3, 0x9f8(r7)
    li r7, 0x1
    lwz r3, 0xf8(r30)
    stw r0, 0x58c(r3)
    lwz r3, 0xf8(r30)
    bl fn_8015495C
    lwz r3, 0xf8(r30)
    addi r3, r3, 0xc58
    bl fn_8011BE54
    lwz r5, 0xf4(r30)
    addi r3, r1, 0xa0
    lfs f0, lbl_80886028
    li r4, 0x79
    lfs f3, 0x40(r5)
    stfs f3, 0x78(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    lfs f1, 0x14(r5)
    bl fn_805F8E70
    addi r4, r1, 0x70
    addi r3, r1, 0xa0
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0xf4(r30)
    addi r4, r1, 0x38
    lfs f0, lbl_80886028
    addi r5, r1, 0x2c
    lfs f6, 0x8(r3)
    lfs f5, 0x74(r1)
    lfs f4, 0x4(r3)
    fsubs f6, f6, f5
    lfs f3, 0x70(r1)
    lfs f5, 0xc(r3)
    fsubs f4, f4, f3
    lfs f3, 0x78(r1)
    stfs f6, 0x3c(r1)
    fsubs f3, f5, f3
    lwz r3, 0xf8(r30)
    stfs f4, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    fmr f2, f3
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    fmr f2, f0
    lwz r3, 0xf4(r30)
    stfs f0, 0x2c(r1)
    lfs f4, 0x14(r3)
    stfs f4, 0x30(r1)
    lwz r3, 0xf8(r30)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r6, 0xf4(r30)
    stfs f3, 0x40(r1)
    lwz r0, 0x30(r6)
    stfs f0, 0x34(r1)
    cmpwi r0, 0x0
    bne lbl_fn_803F9624_00001878
    lfs f3, 0x74(r30)
    addi r4, r1, 0x20
    lfs f0, 0x78(r1)
    addi r5, r1, 0x70
    lfs f5, 0x70(r30)
    fsubs f6, f3, f0
    lfs f4, 0x74(r1)
    lfs f3, 0x6c(r30)
    lfs f0, 0x70(r1)
    fsubs f4, f5, f4
    stfs f6, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    lwz r3, 0xf8(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x80(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F9624_000019F0
lbl_fn_803F9624_00001878:
    cmpwi r0, 0x2
    bne lbl_fn_803F9624_000018CC
    lwz r4, 0x38(r6)
    cmpwi r4, 0x0
    bgt lbl_fn_803F9624_00001898
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803F9624_000018A0
lbl_fn_803F9624_00001898:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
lbl_fn_803F9624_000018A0:
    cmpwi r3, 0x0
    beq lbl_fn_803F9624_000019F0
    psq_l f1, 0x6c(r30), 0, 0
    addi r4, r1, 0x14
    lfs f2, 0x74(r30)
    mr r5, r3
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, 0xf8(r30)
    bl fn_801644D4
    b lbl_fn_803F9624_000019F0
lbl_fn_803F9624_000018CC:
    cmpwi r0, 0x3
    bne lbl_fn_803F9624_000019D4
    psq_l f1, 0x4(r6), 0, 0
    addi r3, r1, 0x64
    lfs f2, 0xc(r6)
    addi r4, r1, 0x58
    stfs f2, 0x6c(r1)
    li r8, 0x0
    lwz r5, lbl_8087F430
    psq_st f1, 0x0(r3), 0, 0
    lwz r7, 0x10d8(r5)
    psq_l f1, 0x4(r6), 0, 0
    lfs f2, 0xc(r6)
    cmpwi r7, 0x0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x60(r1)
    beq lbl_fn_803F9624_00001958
    lwz r0, 0x78(r7)
    li r5, 0x0
    lwz r4, 0x38(r6)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803F9624_00001954
lbl_fn_803F9624_0000192C:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_803F9624_00001948
    mulli r0, r5, 0x28
    add r8, r3, r0
    b lbl_fn_803F9624_00001958
lbl_fn_803F9624_00001948:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803F9624_0000192C
lbl_fn_803F9624_00001954:
    li r8, 0x0
lbl_fn_803F9624_00001958:
    cmpwi r8, 0x0
    beq lbl_fn_803F9624_00001974
    psq_l f1, 0x4(r8), 0, 0
    addi r3, r1, 0x64
    lfs f2, 0xc(r8)
    stfs f2, 0x6c(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_803F9624_00001974:
    lfs f3, 0x60(r1)
    addi r3, r1, 0x8
    lfs f0, 0x6c(r1)
    addi r5, r1, 0x70
    lfs f5, 0x5c(r1)
    addi r4, r1, 0x64
    fsubs f2, f3, f0
    lfs f4, 0x68(r1)
    lfs f3, 0x58(r1)
    lfs f0, 0x64(r1)
    fsubs f4, f5, f4
    stfs f2, 0x78(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, 0xf8(r30)
    stfs f2, 0x10(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x80(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F9624_000019F0
lbl_fn_803F9624_000019D4:
    lwz r3, 0xf8(r30)
    li r4, 0x2d
    lfs f1, lbl_8088602C
    lwz r12, 0x0(r3)
    lwz r12, 0x84(r12)
    mtctr r12
    bctrl
lbl_fn_803F9624_000019F0:
    lwz r3, 0xf8(r30)
    bl fn_80145334
    lwz r3, 0x10c(r30)
    addi r0, r3, 0x1
    stw r0, 0x10c(r30)
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803F9624_00001A2C
    lwz r0, 0x54(r30)
    cmpwi r0, 0x3
    bne lbl_fn_803F9624_00001A2C
    li r4, 0x1
    li r5, 0x1e
    li r6, 0x0
    bl fn_803E598C
lbl_fn_803F9624_00001A2C:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_803F9624_00001A6C
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r31, 0x1
    lis r5, lbl_807C8740@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8740@l
    stw r0, 0x8(r3)
    stw r31, 0xc(r3)
    bl __register_global_object
    stb r31, lbl_8087EE74
lbl_fn_803F9624_00001A6C:
    lis r29, lbl_807C6BB8@ha
    lwz r28, 0xf8(r30)
    addi r29, r29, lbl_807C6BB8@l
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803F9624_00001AD8
    li r27, 0x0
    li r31, 0x0
    b lbl_fn_803F9624_00001ACC
lbl_fn_803F9624_00001A90:
    lwz r0, 0x0(r29)
    add r3, r0, r31
    lwzx r0, r31, r0
    cmpwi r0, -0x1
    beq lbl_fn_803F9624_00001AAC
    cmpwi r0, 0xa
    bne lbl_fn_803F9624_00001AC4
lbl_fn_803F9624_00001AAC:
    lwz r12, 0x4(r3)
    mr r4, r30
    mr r5, r28
    li r3, 0xa
    mtctr r12
    bctrl
lbl_fn_803F9624_00001AC4:
    addi r27, r27, 0x1
    addi r31, r31, 0x8
lbl_fn_803F9624_00001ACC:
    lwz r0, 0x4(r29)
    cmpw r27, r0
    blt lbl_fn_803F9624_00001A90
lbl_fn_803F9624_00001AD8:
    addi r11, r1, 0xf0
    bl _restgpr_27
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
