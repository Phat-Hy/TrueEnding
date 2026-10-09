#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004D314(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB518(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6E4(void);
extern void fn_802180A8(void);
extern void fn_802377B8(void);
extern void fn_8023781C(void);
extern void fn_80239DAC(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_804047A4(void);
extern void fn_80404864(void);
extern void fn_804048CC(void);
extern void fn_80404E70(void);
extern void fn_80407D24(void);
extern void fn_80407E8C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80752878[];
extern u8 lbl_80752880[];
extern u8 lbl_80752888[];
extern u8 lbl_80752890[];
extern u8 lbl_807528AC[];
extern u8 lbl_80752900[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D290[];
extern u8 lbl_8078D328[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF70;
extern u32 lbl_8087DF74;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_808861F0;
extern u32 lbl_808861F8;
extern u32 lbl_808861FC;
extern u32 lbl_80886200;
extern u32 lbl_80886204;
extern u32 lbl_80886208;
extern u32 lbl_80886210;
extern u32 lbl_80886218;
extern u32 lbl_8088621C;
extern u32 lbl_80886220;
extern u32 lbl_80886224;
extern u32 lbl_80886228;
extern u32 lbl_8088622C;
extern u32 lbl_80886230;
extern u32 lbl_80886234;
extern u32 lbl_80886238;
extern u32 lbl_8088623C;
extern u32 lbl_80886240;
extern u32 lbl_80886244;
extern u32 lbl_80886248;
extern u32 lbl_8088624C;
extern u32 lbl_80886250;
extern u32 lbl_80886254;
extern u32 lbl_80886258;
extern u32 lbl_8088625C;
extern u32 lbl_80886260;
extern u32 lbl_80886264;
extern u32 lbl_80886268;
extern u32 lbl_8088626C;

/* Function declarations */
void fn_804052EC(void);
void fn_804058A4(void);
void fn_80405A14(void);
void fn_80405DD4(void);
void fn_80405E48(void);
void fn_80405F88(void);
void fn_80406038(void);
void fn_804062FC(void);
void fn_80406560(void);
void fn_80406600(void);
void fn_80406754(void);
void fn_804067D8(void);
void fn_804068B8(void);
void fn_80406998(void);
void fn_80406AA4(void);
void fn_80406ACC(void);

asm void fn_804052EC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    bl _savegpr_27
    psq_l f1, 0x3d4(r3), 0, 0
    addi r30, r1, 0x5c
    psq_st f1, 0x0(r30), 0, 0
    lis r0, 0x4330
    lfs f2, 0x3dc(r3)
    mr r31, r3
    lfs f5, 0x3ec(r3)
    lfs f4, 0x414(r3)
    lfs f0, 0x5c(r1)
    lfs f3, 0x3f4(r3)
    fmadds f7, f5, f4, f0
    lfs f0, 0x404(r3)
    fmadds f6, f3, f4, f2
    lfs f5, 0x40c(r3)
    lfs f4, 0x60(r1)
    lfs f3, 0x408(r3)
    psq_st f1, 0x3f8(r3), 0, 0
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    stfs f2, 0x400(r3)
    fsubs f0, f7, f0
    addi r3, r1, 0x2c
    stw r0, 0x68(r1)
    stw r0, 0x70(r1)
    stfs f7, 0x5c(r1)
    stfs f6, 0x64(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f5, 0x34(r1)
    bl fn_805F9940
    lfs f0, 0x410(r31)
    fcmpo cr0, f1, f0
    ble lbl_fn_804052EC_00000188
    lwz r0, 0x41c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_804052EC_00000110
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752880@ha
    addi r0, r5, 0x6667
    lfd f6, lbl_80752880@l(r4)
    mulhw r0, r0, r3
    lfs f4, lbl_80886218
    lfs f3, lbl_80886210
    lfs f0, 0x3e4(r31)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f5, 0x68(r1)
    fsubs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
    b lbl_fn_804052EC_00000160
lbl_fn_804052EC_00000110:
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752880@ha
    addi r0, r5, 0x6667
    lfd f5, lbl_80752880@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_80886210
    lfs f0, 0x3e4(r31)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f4, 0x70(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
lbl_fn_804052EC_00000160:
    lfs f1, 0x3e4(r31)
    bl fn_8068AD58
    lfs f0, 0x3e4(r31)
    frsp f3, f1
    fneg f1, f0
    stfs f3, 0x3ec(r31)
    bl fn_8068A850
    frsp f0, f1
    stfs f0, 0x3f4(r31)
    b lbl_fn_804052EC_00000198
lbl_fn_804052EC_00000188:
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    psq_st f1, 0x3d4(r31), 0, 0
    stfs f2, 0x3dc(r31)
lbl_fn_804052EC_00000198:
    addi r3, r1, 0x8
    psq_l f1, 0x3d4(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r28, r1, 0x14
    lfs f2, 0x3dc(r31)
    li r27, 0x0
    stfs f2, 0x10(r1)
    li r30, 0x0
    lwz r29, 0x0(r31)
    lfs f30, 0x8(r1)
    lfs f31, lbl_808861F8
    b lbl_fn_804052EC_0000027C
lbl_fn_804052EC_000001C8:
    lwz r3, 0x60c(r29)
    li r0, 0x0
    add r3, r3, r30
    lfs f2, 0x3dc(r3)
    psq_l f1, 0x3d4(r3), 0, 0
    psq_st f1, 0x614(r29), 0, 0
    stfs f2, 0x61c(r29)
    lfs f0, 0x614(r29)
    psq_st f1, 0x0(r28), 0, 0
    fcmpu cr0, f30, f0
    stfs f2, 0x1c(r1)
    bne lbl_fn_804052EC_0000021C
    lfs f3, 0xc(r1)
    lfs f0, 0x618(r29)
    fcmpu cr0, f3, f0
    bne lbl_fn_804052EC_0000021C
    lfs f3, 0x10(r1)
    lfs f0, 0x61c(r29)
    fcmpu cr0, f3, f0
    bne lbl_fn_804052EC_0000021C
    li r0, 0x1
lbl_fn_804052EC_0000021C:
    cmpwi r0, 0x0
    bne lbl_fn_804052EC_00000274
    lfs f3, 0x61c(r29)
    addi r3, r1, 0x20
    lfs f0, 0x10(r1)
    lfs f5, 0x618(r29)
    fsubs f6, f3, f0
    lfs f4, 0xc(r1)
    lfs f3, 0x614(r29)
    lfs f0, 0x8(r1)
    fsubs f4, f5, f4
    stfs f6, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    bge lbl_fn_804052EC_00000274
    mulli r0, r27, 0x43c
    lwz r3, 0x60c(r29)
    add r4, r3, r0
    b lbl_fn_804052EC_0000028C
lbl_fn_804052EC_00000274:
    addi r27, r27, 0x1
    addi r30, r30, 0x43c
lbl_fn_804052EC_0000027C:
    lwz r0, 0x610(r29)
    cmpw r27, r0
    blt lbl_fn_804052EC_000001C8
    li r4, 0x0
lbl_fn_804052EC_0000028C:
    cmpwi r4, 0x0
    beq lbl_fn_804052EC_000003F4
    addi r3, r1, 0x38
    psq_l f1, 0x3d4(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x44
    lfs f2, 0x3dc(r4)
    addi r3, r1, 0x50
    lfs f3, 0x3c(r1)
    mr r4, r3
    lfs f0, 0x3d8(r31)
    lfs f4, 0x3dc(r31)
    fsubs f5, f3, f0
    lfs f3, 0x38(r1)
    lfs f0, 0x3d4(r31)
    fsubs f4, f2, f4
    stfs f2, 0x40(r1)
    fsubs f3, f3, f0
    stfs f5, 0x48(r1)
    fmr f2, f4
    lfs f0, lbl_808861F0
    stfs f3, 0x44(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f4, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x54(r1)
    bl fn_805F98D0
    lfs f4, 0x3f4(r31)
    lis r3, lbl_80752888@ha
    lfs f0, 0x58(r1)
    lfs f3, 0x3ec(r31)
    fmuls f4, f4, f0
    lfs f0, 0x50(r1)
    lfd f1, lbl_80752888@l(r3)
    fmadds f30, f3, f0, f4
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f30, f0
    ble lbl_fn_804052EC_000003F4
    lwz r0, 0x41c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_804052EC_00000394
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752880@ha
    addi r0, r5, 0x6667
    lfd f6, lbl_80752880@l(r4)
    mulhw r0, r0, r3
    lfs f4, lbl_80886218
    lfs f3, lbl_80886210
    lfs f0, 0x3e4(r31)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f5, 0x68(r1)
    fsubs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
    b lbl_fn_804052EC_000003E4
lbl_fn_804052EC_00000394:
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752880@ha
    addi r0, r5, 0x6667
    lfd f5, lbl_80752880@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_80886210
    lfs f0, 0x3e4(r31)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f4, 0x70(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
lbl_fn_804052EC_000003E4:
    psq_l f1, 0x3f8(r31), 0, 0
    lfs f2, 0x400(r31)
    psq_st f1, 0x3d4(r31), 0, 0
    stfs f2, 0x3dc(r31)
lbl_fn_804052EC_000003F4:
    lwz r4, lbl_8087F8A0
    mr r3, r31
    lwz r4, 0x48(r4)
    bl fn_80405A14
    lwz r0, 0x418(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804052EC_00000584
    li r0, 0x0
    stb r0, 0x424(r31)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_804052EC_0000046C
    bl fn_80680CF8
    lis r4, 0x8889
    li r0, 0x1
    subi r4, r4, 0x7777
    stw r0, 0x420(r31)
    mulhw r0, r4, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x418(r31)
    b lbl_fn_804052EC_000004A4
lbl_fn_804052EC_0000046C:
    lfs f0, lbl_808861FC
    stfs f0, 0x414(r31)
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
    stw r0, 0x418(r31)
lbl_fn_804052EC_000004A4:
    lwz r0, 0x41c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_804052EC_0000050C
    bl fn_80680CF8
    lis r5, 0x8889
    lis r4, lbl_80752880@ha
    subi r0, r5, 0x7777
    lfd f5, lbl_80752880@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_80886210
    lfs f0, 0x3e4(r31)
    add r0, r0, r3
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xf
    subf r3, r0, r3
    subi r0, r3, 0xf
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f4, 0x68(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
    b lbl_fn_804052EC_00000560
lbl_fn_804052EC_0000050C:
    bl fn_80680CF8
    lis r5, 0x8889
    lis r4, lbl_80752880@ha
    subi r0, r5, 0x7777
    lfd f5, lbl_80752880@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_80886210
    lfs f0, 0x3e4(r31)
    add r0, r0, r3
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xf
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f4, 0x70(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
lbl_fn_804052EC_00000560:
    lfs f1, 0x3e4(r31)
    bl fn_8068AD58
    lfs f0, 0x3e4(r31)
    frsp f3, f1
    fneg f1, f0
    stfs f3, 0x3ec(r31)
    bl fn_8068A850
    frsp f0, f1
    stfs f0, 0x3f4(r31)
lbl_fn_804052EC_00000584:
    lwz r3, 0x418(r31)
    subi r0, r3, 0x1
    stw r0, 0x418(r31)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804058A4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r4, 0x418(r3)
    cmpwi r4, 0x0
    blt lbl_fn_804058A4_000005E4
    subi r0, r4, 0x1
    stw r0, 0x418(r3)
lbl_fn_804058A4_000005E4:
    lwz r0, 0x418(r3)
    cmpwi r0, 0x0
    bge lbl_fn_804058A4_0000060C
    li r4, 0xf
    li r5, 0x0
    addi r3, r3, 0x430
    bl fn_800CB5C8
    li r0, 0x0
    stw r0, 0x420(r30)
    b lbl_fn_804058A4_00000710
lbl_fn_804058A4_0000060C:
    lfs f3, 0x3ec(r3)
    addi r4, r3, 0x3d4
    lfs f7, 0x414(r3)
    lfs f0, 0x3d4(r3)
    lwz r0, 0x430(r3)
    fmadds f6, f3, f7, f0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x3dc(r3)
    cmpwi r0, 0x0
    lfs f5, 0x3f0(r3)
    lfs f4, 0x3d8(r3)
    lfs f3, 0x3f4(r3)
    lfs f0, 0x3dc(r3)
    fmadds f4, f5, f7, f4
    psq_st f1, 0x3f8(r3), 0, 0
    fmadds f0, f3, f7, f0
    stfs f2, 0x400(r3)
    stfs f6, 0x3d4(r3)
    stfs f4, 0x3d8(r3)
    stfs f0, 0x3dc(r3)
    beq lbl_fn_804058A4_00000668
    addi r3, r3, 0x430
    bl fn_800CB6E4
lbl_fn_804058A4_00000668:
    lfs f0, 0x3dc(r30)
    addi r31, r1, 0x2c
    lfs f3, 0x3d8(r30)
    addi r10, r1, 0x20
    lfs f4, 0x3d4(r30)
    addi r6, r1, 0x14
    stfs f4, 0x8(r1)
    mr r4, r31
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x8
    stfs f3, 0xc(r1)
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x10(r1)
    lfs f4, 0x414(r30)
    lfs f0, 0x3f4(r30)
    lfs f3, 0x3f0(r30)
    fmuls f2, f0, f4
    lfs f0, 0x3ec(r30)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f2, 0x28(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r10), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f1, lbl_8088621C
    stfs f2, 0x1c(r1)
    bl fn_8004D314
    cmpwi r3, 0x0
    bne lbl_fn_804058A4_000006FC
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x34(r1)
lbl_fn_804058A4_000006FC:
    addi r3, r1, 0x2c
    lfs f2, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x3d4(r30), 0, 0
    stfs f2, 0x3dc(r30)
lbl_fn_804058A4_00000710:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80405A14(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    lfs f3, 0x3dc(r3)
    lfs f0, 0x530(r4)
    lfs f5, 0x3d8(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x3d4(r3)
    addi r3, r1, 0x60
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x64(r1)
    stfs f0, 0x60(r1)
    stfs f6, 0x68(r1)
    bl fn_805F9920
    lfs f0, lbl_80886220
    fcmpo cr0, f1, f0
    bge lbl_fn_80405A14_00000820
    lfs f0, lbl_80886208
    li r0, 0x3
    stfs f0, 0x414(r30)
    addi r3, r1, 0x60
    lfs f0, lbl_80886224
    mr r4, r3
    stw r0, 0x420(r30)
    stfs f0, 0x64(r1)
    bl fn_805F98D0
    addi r3, r1, 0x60
    lfs f2, 0x68(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x3ec(r30), 0, 0
    lfs f1, 0x3ec(r30)
    stfs f2, 0x3f4(r30)
    bl fn_8068AEA4
    frsp f0, f1
    lis r3, lbl_80752878@ha
    li r0, 0x12c
    lwz r4, lbl_80752878@l(r3)
    stw r0, 0x418(r30)
    addi r3, r1, 0x8
    stfs f0, 0x3e4(r30)
    addi r5, r30, 0x3d4
    lfs f1, lbl_80886200
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r30, 0x430
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80405A14_00000AC0
lbl_fn_80405A14_00000820:
    lfs f0, lbl_80886228
    fcmpo cr0, f1, f0
    bge lbl_fn_80405A14_00000AC0
    lfs f0, lbl_80886204
    li r0, 0x2
    stfs f0, 0x414(r30)
    addi r3, r1, 0x60
    lfs f0, lbl_808861F0
    mr r4, r3
    stw r0, 0x420(r30)
    stfs f0, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x68(r1)
    addi r3, r1, 0x60
    lfs f0, lbl_8088622C
    addi r31, r1, 0x54
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x5c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80405A14_000008A0
    lfs f3, 0x54(r1)
    lfs f0, lbl_808861F0
    fcmpo cr0, f3, f0
    ble lbl_fn_80405A14_00000894
    lfs f0, lbl_80886230
    b lbl_fn_80405A14_00000898
lbl_fn_80405A14_00000894:
    lfs f0, lbl_80886234
lbl_fn_80405A14_00000898:
    stfs f0, 0x4c(r1)
    b lbl_fn_80405A14_000008B4
lbl_fn_80405A14_000008A0:
    frsp f2, f2
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_80405A14_000008B4:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x70
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808861F0
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
    lfs f0, lbl_80886200
    psq_l f1, 0x0(r31), 0, 0
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
    lfs f0, lbl_8088622C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80405A14_000009D0
    lfs f3, 0x40(r1)
    lfs f0, lbl_808861F0
    fcmpo cr0, f3, f0
    ble lbl_fn_80405A14_000009C0
    lfs f0, lbl_80886230
    b lbl_fn_80405A14_000009C4
lbl_fn_80405A14_000009C0:
    lfs f0, lbl_80886234
lbl_fn_80405A14_000009C4:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_80405A14_000009E4
lbl_fn_80405A14_000009D0:
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_80405A14_000009E4:
    addi r3, r1, 0x48
    lfs f4, lbl_808861F0
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80752890@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x3e4(r30)
    lfs f3, 0x58(r1)
    stfs f2, 0x5c(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80752890@l(r3)
    stfs f4, 0x50(r1)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80886238
    fcmpo cr0, f1, f0
    ble lbl_fn_80405A14_00000A30
    lfs f0, lbl_8088623C
    fsubs f1, f1, f0
lbl_fn_80405A14_00000A30:
    lfs f0, lbl_80886240
    fcmpo cr0, f1, f0
    bge lbl_fn_80405A14_00000A44
    lfs f0, lbl_8088623C
    fadds f1, f1, f0
lbl_fn_80405A14_00000A44:
    lfs f0, lbl_808861F0
    fcmpo cr0, f1, f0
    bge lbl_fn_80405A14_00000A58
    fneg f0, f1
    b lbl_fn_80405A14_00000A5C
lbl_fn_80405A14_00000A58:
    fmr f0, f1
lbl_fn_80405A14_00000A5C:
    lfs f3, lbl_80886244
    fcmpo cr0, f0, f3
    ble lbl_fn_80405A14_00000A90
    lfs f0, lbl_808861F0
    fcmpo cr0, f1, f0
    ble lbl_fn_80405A14_00000A84
    fmr f1, f3
    li r0, 0x1
    stw r0, 0x41c(r30)
    b lbl_fn_80405A14_00000A90
lbl_fn_80405A14_00000A84:
    li r0, 0x0
    stw r0, 0x41c(r30)
    lfs f1, lbl_80886248
lbl_fn_80405A14_00000A90:
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r30, 0x3ec
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x3f4(r30)
    lfs f1, 0x3ec(r30)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x3e4(r30)
lbl_fn_80405A14_00000AC0:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_80405DD4(void)
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
    beq lbl_fn_80405DD4_00000B40
    lis r5, lbl_807528AC@ha
    li r3, 0x640
    addi r5, r5, lbl_807528AC@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80405DD4_00000B44
    mr r4, r30
    mr r5, r31
    bl fn_80405E48
    b lbl_fn_80405DD4_00000B44
lbl_fn_80405DD4_00000B40:
    li r3, 0x0
lbl_fn_80405DD4_00000B44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80405E48(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r3, lbl_8078D290@ha
    li r31, 0x0
    addi r3, r3, lbl_8078D290@l
    stw r3, 0x0(r29)
    addi r3, r29, 0x634
    stw r31, 0x608(r29)
    stw r31, 0x60c(r29)
    stw r30, 0x630(r29)
    bl fn_800CB360
    lwz r3, 0x60c(r29)
    stw r31, 0x638(r29)
    lwz r4, 0x630(r29)
    cmpwi r3, 0x0
    lwz r31, 0x20(r4)
    stw r31, 0x610(r29)
    beq lbl_fn_80405E48_00000BD4
    lis r4, fn_80404864@ha
    addi r4, r4, fn_80404864@l
    bl fn_80695A50
lbl_fn_80405E48_00000BD4:
    cmpwi r31, 0x0
    stw r31, 0x608(r29)
    beq lbl_fn_80405E48_00000C20
    mulli r3, r31, 0x43c
    li r4, 0x0
    la r5, lbl_8087DF74
    la r6, lbl_8087DF70
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_804047A4@ha
    lis r5, fn_80404864@ha
    mr r7, r31
    li r6, 0x43c
    addi r4, r4, fn_804047A4@l
    addi r5, r5, fn_80404864@l
    bl fn_80695720
    stw r3, 0x60c(r29)
    b lbl_fn_80405E48_00000C28
lbl_fn_80405E48_00000C20:
    li r0, 0x0
    stw r0, 0x60c(r29)
lbl_fn_80405E48_00000C28:
    lwz r4, 0x630(r29)
    addi r5, r1, 0x8
    lfs f3, lbl_808861F0
    li r0, 0x0
    lfs f0, 0x14(r4)
    mr r3, r29
    stfs f3, 0x8(r1)
    fmr f2, f3
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x78(r29), 0, 0
    stfs f2, 0x80(r29)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r29)
    psq_st f1, 0x6c(r29), 0, 0
    psq_st f1, 0x620(r29), 0, 0
    stfs f2, 0x628(r29)
    lfs f0, 0x40(r4)
    stfs f0, 0x62c(r29)
    stb r0, 0xf4(r29)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    stfs f3, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80405F88(void)
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
    beq lbl_fn_80405F88_00000D30
    lis r5, lbl_8078D290@ha
    li r4, 0x0
    addi r5, r5, lbl_8078D290@l
    stw r5, 0x0(r3)
    li r5, 0x0
    addi r3, r3, 0x634
    bl fn_800CB5C8
    addi r3, r30, 0x634
    li r4, -0x1
    bl fn_800CB3A0
    addic. r0, r30, 0x608
    beq lbl_fn_80405F88_00000D14
    lwz r3, 0x60c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80405F88_00000D08
    lis r4, fn_80404864@ha
    addi r4, r4, fn_80404864@l
    bl fn_80695A50
lbl_fn_80405F88_00000D08:
    li r0, 0x0
    stw r0, 0x60c(r30)
    stw r0, 0x608(r30)
lbl_fn_80405F88_00000D14:
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_80405F88_00000D30
    mr r3, r30
    bl dtor_80084684
lbl_fn_80405F88_00000D30:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80406038(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x70
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    bl _savegpr_21
    mr r26, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80406038_00000FE4
    lbz r0, 0xf4(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80406038_00000E38
    addi r23, r1, 0x2c
    li r25, 0x0
    li r24, 0x0
    b lbl_fn_80406038_00000E24
lbl_fn_80406038_00000D9C:
    lwz r3, 0x60c(r26)
    addi r4, r26, 0xf5
    li r5, 0x0
    stwx r26, r3, r24
    lwz r0, 0x60c(r26)
    add r3, r0, r24
    addi r3, r3, 0x4
    bl fn_8008AD4C
    mr r22, r26
    addi r21, r26, 0x1f5
    li r27, 0x0
lbl_fn_80406038_00000DC8:
    lwz r0, 0x60c(r26)
    mr r5, r21
    lwz r4, 0x5f8(r22)
    add r3, r0, r24
    addi r3, r3, 0x4
    bl fn_80097A88
    addi r27, r27, 0x1
    addi r22, r22, 0x4
    cmpwi r27, 0x4
    addi r21, r21, 0x100
    blt lbl_fn_80406038_00000DC8
    lwz r0, 0x60c(r26)
    addi r25, r25, 0x1
    lfs f2, 0x628(r26)
    add r3, r0, r24
    psq_l f1, 0x620(r26), 0, 0
    lfs f0, 0x62c(r26)
    addi r24, r24, 0x43c
    psq_st f1, 0x0(r23), 0, 0
    psq_st f1, 0x404(r3), 0, 0
    stfs f2, 0x40c(r3)
    stfs f2, 0x34(r1)
    stfs f0, 0x410(r3)
lbl_fn_80406038_00000E24:
    lwz r0, 0x610(r26)
    cmpw r25, r0
    blt lbl_fn_80406038_00000D9C
    li r0, 0x1
    stb r0, 0xf4(r26)
lbl_fn_80406038_00000E38:
    lbz r0, 0xf4(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80406038_00000FE4
    lfs f31, lbl_808861F8
    addi r30, r1, 0x14
    addi r31, r1, 0x20
    li r28, 0x1
    li r27, 0x0
    li r25, 0x0
    li r23, 0x1
    b lbl_fn_80406038_00000FC8
lbl_fn_80406038_00000E64:
    lwz r0, 0x60c(r26)
    add r29, r0, r25
    lbz r0, 0x425(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80406038_00000FB0
    addi r3, r29, 0x4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_80406038_00000FA8
    mr r3, r29
    bl fn_80404E70
    psq_l f1, 0x3d4(r29), 0, 0
    li r22, 0x0
    psq_st f1, 0x0(r31), 0, 0
    li r24, 0x0
    lfs f2, 0x3dc(r29)
    stfs f2, 0x28(r1)
    lwz r21, 0x0(r29)
    lfs f30, 0x20(r1)
    b lbl_fn_80406038_00000F68
lbl_fn_80406038_00000EB4:
    lwz r3, 0x60c(r21)
    li r0, 0x0
    add r3, r3, r24
    lfs f2, 0x3dc(r3)
    psq_l f1, 0x3d4(r3), 0, 0
    psq_st f1, 0x614(r21), 0, 0
    stfs f2, 0x61c(r21)
    lfs f0, 0x614(r21)
    psq_st f1, 0x0(r30), 0, 0
    fcmpu cr0, f30, f0
    stfs f2, 0x1c(r1)
    bne lbl_fn_80406038_00000F08
    lfs f3, 0x24(r1)
    lfs f0, 0x618(r21)
    fcmpu cr0, f3, f0
    bne lbl_fn_80406038_00000F08
    lfs f3, 0x28(r1)
    lfs f0, 0x61c(r21)
    fcmpu cr0, f3, f0
    bne lbl_fn_80406038_00000F08
    li r0, 0x1
lbl_fn_80406038_00000F08:
    cmpwi r0, 0x0
    bne lbl_fn_80406038_00000F60
    lfs f3, 0x61c(r21)
    addi r3, r1, 0x8
    lfs f0, 0x28(r1)
    lfs f5, 0x618(r21)
    fsubs f6, f3, f0
    lfs f4, 0x24(r1)
    lfs f3, 0x614(r21)
    lfs f0, 0x20(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    bge lbl_fn_80406038_00000F60
    mulli r0, r22, 0x43c
    lwz r3, 0x60c(r21)
    add r0, r3, r0
    b lbl_fn_80406038_00000F78
lbl_fn_80406038_00000F60:
    addi r22, r22, 0x1
    addi r24, r24, 0x43c
lbl_fn_80406038_00000F68:
    lwz r0, 0x610(r21)
    cmpw r22, r0
    blt lbl_fn_80406038_00000EB4
    li r0, 0x0
lbl_fn_80406038_00000F78:
    cmpwi r0, 0x0
    beq lbl_fn_80406038_00000F9C
    lwz r3, 0x428(r29)
    cmpwi r3, 0x0
    ble lbl_fn_80406038_00000F9C
    subi r0, r3, 0x1
    stw r0, 0x428(r29)
    li r0, 0x0
    b lbl_fn_80406038_00000FB4
lbl_fn_80406038_00000F9C:
    stb r23, 0x425(r29)
    li r0, 0x1
    b lbl_fn_80406038_00000FB4
lbl_fn_80406038_00000FA8:
    li r0, 0x0
    b lbl_fn_80406038_00000FB4
lbl_fn_80406038_00000FB0:
    li r0, 0x1
lbl_fn_80406038_00000FB4:
    cmpwi r0, 0x0
    bne lbl_fn_80406038_00000FC0
    li r28, 0x0
lbl_fn_80406038_00000FC0:
    addi r27, r27, 0x1
    addi r25, r25, 0x43c
lbl_fn_80406038_00000FC8:
    lwz r0, 0x610(r26)
    cmpw r27, r0
    blt lbl_fn_80406038_00000E64
    cmpwi r28, 0x0
    beq lbl_fn_80406038_00000FE4
    li r3, 0x1
    b lbl_fn_80406038_00000FE8
lbl_fn_80406038_00000FE4:
    li r3, 0x0
lbl_fn_80406038_00000FE8:
    addi r11, r1, 0x70
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    bl _restgpr_21
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_804062FC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r4, 0x630(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804062FC_00001254
    lwz r0, 0x638(r3)
    li r29, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_804062FC_00001190
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_804062FC_00001094
lbl_fn_804062FC_0000105C:
    lwz r0, 0x60c(r31)
    add r3, r0, r30
    lwz r0, 0x420(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804062FC_0000108C
    bl fn_804048CC
    lwz r0, 0x60c(r31)
    add r3, r0, r30
    lwz r0, 0x420(r3)
    cmpwi r0, 0x3
    beq lbl_fn_804062FC_0000108C
    addi r29, r29, 0x1
lbl_fn_804062FC_0000108C:
    addi r28, r28, 0x1
    addi r30, r30, 0x43c
lbl_fn_804062FC_00001094:
    lwz r0, 0x610(r31)
    cmpw r28, r0
    blt lbl_fn_804062FC_0000105C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_804062FC_000011CC
    lwz r4, 0x48(r3)
    addi r3, r1, 0x18
    lfs f0, 0x74(r31)
    lfs f1, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r31)
    lfs f1, 0x528(r4)
    lfs f0, 0x6c(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f4, 0x20(r1)
    bl fn_805F9940
    lfs f0, 0x62c(r31)
    cmpwi r29, 0x2
    fsubs f1, f1, f0
    blt lbl_fn_804062FC_0000117C
    lfs f0, lbl_8088624C
    fcmpo cr0, f1, f0
    bge lbl_fn_804062FC_0000115C
    lwz r0, 0x634(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804062FC_000011CC
    lis r4, lbl_80752878@ha
    lfs f1, lbl_80886200
    addi r4, r4, lbl_80752878@l
    addi r3, r1, 0x8
    lwz r4, 0x4(r4)
    addi r5, r31, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x634
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r31, 0x634
    li r4, 0x1e
    bl fn_800CB518
    b lbl_fn_804062FC_000011CC
lbl_fn_804062FC_0000115C:
    lfs f0, lbl_80886250
    fcmpo cr0, f1, f0
    ble lbl_fn_804062FC_000011CC
    addi r3, r31, 0x634
    li r4, 0x1e
    li r5, 0x0
    bl fn_800CB5C8
    b lbl_fn_804062FC_000011CC
lbl_fn_804062FC_0000117C:
    addi r3, r31, 0x634
    li r4, 0x1e
    li r5, 0x0
    bl fn_800CB5C8
    b lbl_fn_804062FC_000011CC
lbl_fn_804062FC_00001190:
    cmpwi r0, 0x2
    bne lbl_fn_804062FC_000011CC
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_804062FC_000011B8
lbl_fn_804062FC_000011A4:
    lwz r0, 0x60c(r31)
    add r3, r0, r30
    bl fn_80404E70
    addi r29, r29, 0x1
    addi r30, r30, 0x43c
lbl_fn_804062FC_000011B8:
    lwz r0, 0x610(r31)
    cmpw r29, r0
    blt lbl_fn_804062FC_000011A4
    li r0, 0x0
    stw r0, 0x638(r31)
lbl_fn_804062FC_000011CC:
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0xc
    lfs f0, 0x628(r31)
    lwz r4, 0x48(r4)
    lfs f2, 0x624(r31)
    lfs f4, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f4, f0
    lfs f1, 0x528(r4)
    lfs f0, 0x620(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
    stfs f4, 0x14(r1)
    bl fn_805F9940
    lwz r0, 0x638(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804062FC_00001224
    cmpwi r0, 0x1
    beq lbl_fn_804062FC_0000123C
    b lbl_fn_804062FC_00001254
lbl_fn_804062FC_00001224:
    lfs f0, lbl_80886254
    fcmpo cr0, f1, f0
    ble lbl_fn_804062FC_00001254
    li r0, 0x1
    stw r0, 0x638(r31)
    b lbl_fn_804062FC_00001254
lbl_fn_804062FC_0000123C:
    lfs f0, lbl_80886228
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804062FC_00001254
    li r0, 0x2
    stw r0, 0x638(r31)
lbl_fn_804062FC_00001254:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80406560(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, 0x630(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80406560_000012F8
    lwz r0, 0x638(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80406560_000012F8
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80406560_000012EC
lbl_fn_80406560_000012B8:
    lwz r0, 0x60c(r29)
    add r4, r0, r31
    lwz r0, 0x420(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80406560_000012E4
    lwz r3, lbl_8087F0A8
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80406560_000012E4
    addi r3, r4, 0x4
    bl fn_8008CD60
lbl_fn_80406560_000012E4:
    addi r30, r30, 0x1
    addi r31, r31, 0x43c
lbl_fn_80406560_000012EC:
    lwz r0, 0x610(r29)
    cmpw r30, r0
    blt lbl_fn_80406560_000012B8
lbl_fn_80406560_000012F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80406600(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r27, 0x64c(r1)
    mr r27, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r27, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_807528AC@ha
    mr r29, r27
    addi r30, r27, 0x1f5
    addi r31, r31, lbl_807528AC@l
lbl_fn_80406600_000013C4:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80406600_00001444
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80406600_00001404
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r27, 0xf5
    bl strcpy
    b lbl_fn_80406600_00001444
lbl_fn_80406600_00001404:
    mr r3, r28
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80406600_00001444
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r30
    bl strcpy
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_802180A8
    stw r3, 0x5f8(r29)
    addi r30, r30, 0x100
    addi r29, r29, 0x4
lbl_fn_80406600_00001444:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80406600_000013C4
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_80406754(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80406754_000014CC
    lis r5, lbl_80752900@ha
    li r3, 0x970
    addi r5, r5, lbl_80752900@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80406754_000014D0
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_804068B8
    b lbl_fn_80406754_000014D0
lbl_fn_80406754_000014CC:
    li r3, 0x0
lbl_fn_80406754_000014D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804067D8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    beq lbl_fn_804067D8_000015B0
    lis r5, lbl_80752900@ha
    li r3, 0x970
    addi r5, r5, lbl_80752900@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804067D8_00001544
    lwz r5, 0x18(r31)
    mr r4, r30
    lwz r6, 0x1c(r31)
    bl fn_804068B8
lbl_fn_804067D8_00001544:
    cmpwi r3, 0x0
    beq lbl_fn_804067D8_000015B4
    lfs f2, 0xc(r31)
    addi r4, r1, 0x14
    psq_l f1, 0x4(r31), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x6c(r3), 0, 0
    lfs f0, lbl_8088625C
    stfs f2, 0x74(r3)
    lfs f3, lbl_80886258
    lfs f4, 0x14(r31)
    stfs f3, 0x14(r1)
    fmr f2, f3
    stfs f4, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    fmr f2, f0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x90(r3), 0, 0
    stfs f2, 0x98(r3)
    stfs f3, 0x1c(r1)
    stfs f0, 0x10(r1)
    stw r31, 0x964(r3)
    b lbl_fn_804067D8_000015B4
lbl_fn_804067D8_000015B0:
    li r3, 0x0
lbl_fn_804067D8_000015B4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804068B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC568
    lis r4, lbl_8078D328@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078D328@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x4c4
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x894
    bl fn_80057F28
    addi r3, r31, 0x91c
    bl fn_802377B8
    addi r3, r31, 0x928
    bl fn_802377B8
    addi r3, r31, 0x934
    bl fn_802377B8
    addi r3, r31, 0x940
    bl fn_800CB360
    lwz r0, 0x89c(r31)
    li r7, 0x0
    lfs f1, lbl_80886258
    li r6, -0x1
    ori r4, r0, 0x8
    lfs f0, lbl_80886260
    li r5, 0x1
    li r0, 0x6
    stfs f1, 0x944(r31)
    mr r3, r31
    stfs f1, 0x948(r31)
    stfs f1, 0x94c(r31)
    stfs f1, 0x950(r31)
    stfs f0, 0x954(r31)
    stw r7, 0x958(r31)
    stw r7, 0x95c(r31)
    stw r6, 0x960(r31)
    stw r7, 0x964(r31)
    stw r5, 0x968(r31)
    stw r7, 0x54(r31)
    stw r4, 0x89c(r31)
    stw r31, 0x8a0(r31)
    stw r0, 0xe8(r31)
    stw r7, 0xec(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80406998(void)
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
    beq lbl_fn_80406998_00001798
    li r4, -0x1
    addi r3, r3, 0x940
    bl fn_800CB3A0
    addic. r31, r29, 0x934
    beq lbl_fn_80406998_00001700
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80406998_00001700
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80406998_00001700:
    addic. r31, r29, 0x928
    beq lbl_fn_80406998_00001720
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80406998_00001720
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80406998_00001720:
    addic. r31, r29, 0x91c
    beq lbl_fn_80406998_00001740
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80406998_00001740
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80406998_00001740:
    addic. r31, r29, 0x894
    beq lbl_fn_80406998_00001764
    addic. r3, r31, 0x3c
    beq lbl_fn_80406998_00001758
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80406998_00001758:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_80406998_00001764:
    addi r3, r29, 0x4c4
    li r4, -0x1
    bl fn_800971D4
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_80406998_00001798
    mr r3, r29
    bl dtor_80084684
lbl_fn_80406998_00001798:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80406AA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_803EC91C
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80406ACC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    lwz r4, 0x964(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80406ACC_0000187C
    lwz r5, 0x968(r3)
    lwz r0, 0x7c(r4)
    cmpw r5, r0
    beq lbl_fn_80406ACC_0000186C
    cmpwi r5, 0x0
    beq lbl_fn_80406ACC_00001850
    lwz r0, 0x89c(r3)
    mr r4, r31
    li r5, 0x1
    li r6, 0x0
    clrrwi r0, r0, 1
    stw r0, 0x89c(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    b lbl_fn_80406ACC_00001860
lbl_fn_80406ACC_00001850:
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_80406ACC_00001860:
    lwz r3, 0x964(r31)
    lwz r0, 0x7c(r3)
    stw r0, 0x968(r31)
lbl_fn_80406ACC_0000186C:
    lwz r3, 0x964(r31)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80406ACC_00001BB0
lbl_fn_80406ACC_0000187C:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80406ACC_000018A0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_80406ACC_00001900
lbl_fn_80406ACC_000018A0:
    cmpwi r0, 0x2
    bne lbl_fn_80406ACC_00001900
    addi r3, r1, 0x58
    li r4, 0x0
    li r5, 0x30
    bl memset
    lfs f0, lbl_80886258
    li r0, 0x0
    stfs f0, 0x2c(r1)
    addi r6, r1, 0x2c
    lfs f2, lbl_8088625C
    addi r5, r1, 0x74
    stfs f0, 0x30(r1)
    mr r3, r31
    addi r4, r1, 0x58
    psq_l f1, 0x0(r6), 0, 0
    stw r0, 0x58(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    lwz r12, 0x0(r31)
    stfs f2, 0x34(r1)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80406ACC_00001900:
    mr r3, r31
    bl fn_80407D24
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ED0D4
    mr r3, r31
    addi r4, r31, 0x4c4
    li r5, 0x1
    bl fn_803ED0D4
    lwz r3, 0x54(r31)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_80406ACC_00001944
    cmpwi r3, 0x5
    beq lbl_fn_80406ACC_00001B18
    b lbl_fn_80406ACC_00001B78
lbl_fn_80406ACC_00001944:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80406ACC_00001980
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80406ACC_00001980:
    lwz r0, 0x940(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80406ACC_00001998
    addi r3, r31, 0x940
    addi r4, r31, 0x6c
    bl fn_800CB6E4
lbl_fn_80406ACC_00001998:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80406ACC_000019EC
    lfs f30, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80406ACC_000019EC
    li r0, 0x4
    stw r0, 0x54(r31)
    lfs f1, lbl_80886258
    addi r3, r31, 0xf4
    lfs f2, lbl_80886264
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80406ACC_000019EC:
    addi r3, r31, 0x944
    lfs f2, 0x94c(r31)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x8
    psq_st f1, 0x0(r4), 0, 0
    lis r30, lbl_807C7030@ha
    lfs f9, lbl_80886258
    addi r5, r1, 0x14
    lfs f30, 0x954(r31)
    addi r6, r30, lbl_807C7030@l
    lfs f7, 0x8(r1)
    li r4, 0x0
    fmuls f13, f9, f30
    lfs f0, 0x70(r31)
    fmuls f12, f7, f30
    lfs f8, 0x74(r31)
    fmuls f31, f2, f30
    lfs f7, 0x6c(r31)
    fadds f10, f0, f13
    lfs f0, lbl_80886268
    fadds f11, f8, f31
    stfs f2, 0x10(r1)
    fadds f8, f7, f12
    lwz r3, lbl_8087EE98
    fadds f7, f10, f30
    stfs f9, 0xc(r1)
    fmuls f1, f0, f30
    lis r7, 0x8000
    stfs f12, 0x20(r1)
    li r8, 0x0
    stfs f13, 0x24(r1)
    li r9, 0x0
    stfs f31, 0x28(r1)
    stfs f8, 0x14(r1)
    stfs f11, 0x1c(r1)
    stfs f7, 0x18(r1)
    bl fn_8004D314
    cmpwi r3, 0x0
    beq lbl_fn_80406ACC_00001A90
    li r0, 0x1
    b lbl_fn_80406ACC_00001AC8
lbl_fn_80406ACC_00001A90:
    lfs f7, lbl_8088626C
    addi r5, r31, 0x6c
    lfs f0, 0x954(r31)
    addi r6, r30, lbl_807C7030@l
    lwz r3, lbl_8087EE98
    li r4, 0x0
    fmuls f1, f7, f0
    lis r7, 0x4000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D314
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80406ACC_00001AC8:
    cmpwi r0, 0x0
    beq lbl_fn_80406ACC_00001B78
    lfs f0, lbl_80886258
    li r0, 0x0
    li r3, 0x5
    stw r3, 0x38(r1)
    mr r3, r31
    addi r4, r1, 0x38
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80406ACC_00001B78
lbl_fn_80406ACC_00001B18:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80406ACC_00001B54
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80406ACC_00001B54:
    mr r3, r31
    bl fn_80407E8C
    cmpwi r3, 0x0
    beq lbl_fn_80406ACC_00001B78
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_80406ACC_00001B78:
    addi r3, r31, 0x894
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
lbl_fn_80406ACC_00001BB0:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
