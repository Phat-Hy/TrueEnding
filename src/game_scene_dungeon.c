#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004ECC0(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800A55D4(void);
extern void fn_8013CB68(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_803C18DC(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8073A958[];
extern u8 lbl_8073A9B8[];
extern u8 lbl_8077FF88[];
extern u8 lbl_80780000[];
extern u8 lbl_80780078[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_80882290;
extern u32 lbl_80882294;
extern u32 lbl_80882298;
extern u32 lbl_808822A0;
extern u32 lbl_808822AC;
extern u32 lbl_808822B0;
extern u32 lbl_808822B4;
extern u32 lbl_808822B8;
extern u32 lbl_808822BC;
extern u32 lbl_808822C0;
extern u32 lbl_808822C4;
extern u32 lbl_808822C8;
extern u32 lbl_808822CC;
extern u32 lbl_808822D0;
extern u32 lbl_808822D4;
extern u32 lbl_808822D8;
extern u32 lbl_808822DC;
extern u32 lbl_808822E0;
extern u32 lbl_808822E4;
extern u32 lbl_808822E8;
extern u32 lbl_808822EC;
extern u32 lbl_808822F0;
extern u32 lbl_808822F4;
extern u32 lbl_808822F8;
extern u32 lbl_808822FC;
extern u32 lbl_80882300;
extern u32 lbl_80882304;
extern u32 lbl_80882308;
extern u32 lbl_8088230C;
extern u32 lbl_80882310;
extern u32 lbl_80882314;
extern u32 lbl_80882318;

/* Function declarations */
void fn_801AB6B8(void);
void fn_801AB9E4(void);
void fn_801AC14C(void);
void fn_801AC2FC(void);
void fn_801AC3F4(void);
void fn_801AC434(void);
void fn_801ACA74(void);
void fn_801ACB38(void);
void fn_801ACE88(void);
void fn_801ACF4C(void);

asm void fn_801AB6B8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f1
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    mr r29, r5
    lwz r6, 0x4(r3)
    addi r31, r6, 0xb0
    bl fn_801AB9E4
    cmpwi r3, 0x0
    bne lbl_fn_801AB6B8_00000104
    lwz r0, 0x80(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_801AB6B8_000000F8
    lwz r0, 0x98(r30)
    li r3, 0x2
    stw r3, 0x7c(r30)
    mr r3, r31
    cmpwi r0, 0x0
    li r4, 0x0
    li r5, 0x59
    beq lbl_fn_801AB6B8_00000074
    li r5, 0x206
lbl_fn_801AB6B8_00000074:
    lfs f1, lbl_80882290
    li r6, 0x0
    lfs f2, lbl_80882298
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808822A0
    stfs f0, 0x238(r31)
    lwz r3, 0x4(r30)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x8c(r30)
    psq_st f1, 0x84(r30), 0, 0
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801AB6B8_00000308
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801AB6B8_000000D8
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801AB6B8_00000308
lbl_fn_801AB6B8_000000D8:
    lwz r3, lbl_8087F498
    li r5, 0xf
    lwz r4, 0x4(r30)
    li r6, 0x0
    lfs f1, lbl_808822A0
    lfs f2, lbl_808822AC
    bl fn_803EA77C
    b lbl_fn_801AB6B8_00000308
lbl_fn_801AB6B8_000000F8:
    li r0, 0x1
    stw r0, 0xc(r30)
    b lbl_fn_801AB6B8_00000308
lbl_fn_801AB6B8_00000104:
    lwz r4, 0x4(r30)
    addi r3, r1, 0x8
    lwz r0, 0x40(r30)
    psq_l f1, 0x534(r4), 0, 0
    lfs f2, 0x53c(r4)
    cmpwi r0, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    beq lbl_fn_801AB6B8_00000134
    lfs f0, 0x38(r30)
    stfs f0, 0xc(r1)
    b lbl_fn_801AB6B8_00000140
lbl_fn_801AB6B8_00000134:
    cmpwi r29, 0x0
    beq lbl_fn_801AB6B8_00000140
    stfs f31, 0xc(r1)
lbl_fn_801AB6B8_00000140:
    lwz r0, 0x7c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801AB6B8_00000158
    cmpwi r0, 0x1
    beq lbl_fn_801AB6B8_00000260
    b lbl_fn_801AB6B8_000002F0
lbl_fn_801AB6B8_00000158:
    lwz r0, 0x98(r30)
    mr r3, r31
    li r4, 0x0
    li r5, 0x1f8
    cmpwi r0, 0x0
    beq lbl_fn_801AB6B8_00000174
    li r5, 0x204
lbl_fn_801AB6B8_00000174:
    lfs f1, lbl_80882290
    li r6, 0x0
    lfs f2, lbl_80882298
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x4(r30)
    lis r3, lbl_8073A958@ha
    lfs f3, 0xc(r1)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8c(r30)
    lfd f2, lbl_8073A958@l(r3)
    psq_st f1, 0x84(r30), 0, 0
    lfs f0, 0x538(r4)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_808822B0
    fcmpo cr0, f31, f0
    ble lbl_fn_801AB6B8_000001D0
    lfs f0, lbl_808822B4
    fsubs f31, f31, f0
lbl_fn_801AB6B8_000001D0:
    lfs f0, lbl_808822B8
    fcmpo cr0, f31, f0
    bge lbl_fn_801AB6B8_000001E4
    lfs f0, lbl_808822B4
    fadds f31, f31, f0
lbl_fn_801AB6B8_000001E4:
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882294
    lwz r0, 0x98(r30)
    fsubs f0, f1, f0
    cmpwi r0, 0x0
    fdivs f0, f31, f0
    stfs f0, 0x90(r30)
    beq lbl_fn_801AB6B8_000002F0
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801AB6B8_000002F0
    lwz r3, 0x4(r30)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801AB6B8_00000240
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801AB6B8_000002F0
lbl_fn_801AB6B8_00000240:
    lwz r3, lbl_8087F498
    li r5, 0xc
    lwz r4, 0x4(r30)
    li r6, 0x0
    lfs f1, lbl_808822A0
    lfs f2, lbl_808822AC
    bl fn_803EA77C
    b lbl_fn_801AB6B8_000002F0
lbl_fn_801AB6B8_00000260:
    lwz r4, 0x4(r30)
    addi r3, r1, 0x8
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x530(r4)
    lfs f2, 0x10(r1)
    lwz r3, 0x4(r30)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r0, 0x78(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801AB6B8_000002CC
    lwz r0, 0x10(r30)
    mr r3, r31
    lfs f1, lbl_80882290
    li r4, 0x0
    slwi r0, r0, 2
    lfs f2, lbl_80882298
    add r5, r30, r0
    li r6, 0x0
    lwz r5, 0x44(r5)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801AB6B8_000002F0
lbl_fn_801AB6B8_000002CC:
    lwz r5, 0x44(r30)
    mr r3, r31
    lfs f1, lbl_80882290
    li r4, 0x0
    lfs f2, lbl_80882298
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801AB6B8_000002F0:
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_808822A0
    stfs f0, 0x238(r31)
    lwz r0, 0x78(r30)
    stw r0, 0x8(r30)
lbl_fn_801AB6B8_00000308:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801AB9E4(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x1a0
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    bl _savegpr_26
    lwz r5, lbl_8087F430
    mr r30, r3
    mr r26, r4
    cmpwi r5, 0x0
    beq lbl_fn_801AB9E4_0000036C
    lwz r28, 0x10d8(r5)
    b lbl_fn_801AB9E4_00000370
lbl_fn_801AB9E4_0000036C:
    li r28, 0x0
lbl_fn_801AB9E4_00000370:
    cmpwi r28, 0x0
    bne lbl_fn_801AB9E4_00000380
    li r3, 0x0
    b lbl_fn_801AB9E4_00000A6C
lbl_fn_801AB9E4_00000380:
    mr r3, r28
    mr r5, r26
    li r4, 0x5
    bl fn_803C18DC
    cmpwi r3, 0x0
    bne lbl_fn_801AB9E4_000003A0
    li r3, 0x0
    b lbl_fn_801AB9E4_00000A6C
lbl_fn_801AB9E4_000003A0:
    lwz r4, 0x0(r3)
    li r29, 0x0
    lwz r5, 0x4(r3)
    li r0, 0x1
    mulli r3, r4, 0x30
    lwz r4, 0xc8(r28)
    lfs f3, lbl_80882290
    lfs f0, lbl_808822A0
    add r31, r4, r3
    mulli r3, r5, 0x30
    psq_l f1, 0x4(r31), 0, 0
    lfs f2, 0xc(r31)
    stfs f2, 0x1c(r30)
    add r27, r4, r3
    psq_st f1, 0x14(r30), 0, 0
    psq_l f1, 0x4(r27), 0, 0
    lfs f2, 0xc(r27)
    stfs f2, 0x28(r30)
    psq_st f1, 0x20(r30), 0, 0
    stw r26, 0x2c(r30)
    lwzx r3, r4, r3
    stw r3, 0x30(r30)
    stfs f3, 0x74(r30)
    stw r29, 0x78(r30)
    stw r0, 0x40(r30)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f3, 0x100(r1)
    lfs f5, 0x8(r27)
    lfs f3, 0x8(r31)
    fcmpo cr0, f5, f3
    ble lbl_fn_801AB9E4_00000488
    lfs f4, 0xc(r27)
    fsubs f5, f5, f3
    lfs f0, 0xc(r31)
    addi r28, r1, 0xd4
    lfs f3, 0x4(r27)
    addi r5, r1, 0xc8
    fsubs f2, f4, f0
    lfs f0, 0x4(r31)
    mr r3, r28
    stfs f5, 0xcc(r1)
    mr r4, r28
    fsubs f0, f3, f0
    stfs f2, 0xd0(r1)
    stfs f0, 0xc8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xdc(r1)
    bl fn_805F98D0
    mr r4, r28
    addi r3, r1, 0xf8
    bl fn_805F9990
    lfs f0, lbl_808822BC
    fcmpo cr0, f1, f0
    ble lbl_fn_801AB9E4_000004EC
    stw r29, 0x40(r30)
    b lbl_fn_801AB9E4_000004EC
lbl_fn_801AB9E4_00000488:
    lfs f4, 0xc(r31)
    fsubs f5, f3, f5
    lfs f0, 0xc(r27)
    addi r28, r1, 0xbc
    lfs f3, 0x4(r31)
    addi r5, r1, 0xb0
    fsubs f2, f4, f0
    lfs f0, 0x4(r27)
    mr r3, r28
    stfs f5, 0xb4(r1)
    mr r4, r28
    fsubs f0, f3, f0
    stfs f2, 0xb8(r1)
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F98D0
    mr r4, r28
    addi r3, r1, 0xf8
    bl fn_805F9990
    lfs f0, lbl_808822BC
    fcmpo cr0, f1, f0
    ble lbl_fn_801AB9E4_000004EC
    stw r29, 0x40(r30)
lbl_fn_801AB9E4_000004EC:
    lwz r0, 0x40(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801AB9E4_000006F8
    lfs f3, 0xc(r27)
    addi r3, r1, 0xec
    lfs f0, 0xc(r31)
    lfs f5, 0x8(r27)
    fsubs f6, f3, f0
    lfs f4, 0x8(r31)
    lfs f3, 0x4(r27)
    lfs f0, 0x4(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    stfs f6, 0xf4(r1)
    bl fn_805F9940
    fabs f3, f1
    lfs f0, lbl_808822C0
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801AB9E4_00000550
    addi r3, r1, 0xec
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801AB9E4_00000550:
    lfs f3, lbl_80882290
    addi r3, r1, 0xec
    lfs f0, lbl_808822A0
    addi r4, r1, 0xa4
    stfs f3, 0xa4(r1)
    addi r5, r1, 0xe0
    stfs f0, 0xa8(r1)
    stfs f3, 0xac(r1)
    bl fn_805F99B0
    addi r3, r1, 0xe0
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808822C0
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801AB9E4_000005CC
    lfs f3, lbl_80882290
    addi r3, r1, 0xec
    lfs f0, lbl_808822C4
    addi r4, r1, 0x8c
    stfs f3, 0x8c(r1)
    addi r5, r1, 0x98
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_805F99B0
    addi r4, r1, 0x98
    lfs f2, 0xa0(r1)
    addi r3, r1, 0xe0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xe8(r1)
lbl_fn_801AB9E4_000005CC:
    addi r3, r1, 0xe0
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808822C0
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801AB9E4_000005F4
    addi r3, r1, 0xe0
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801AB9E4_000005F4:
    lfs f4, 0xe8(r1)
    addi r5, r31, 0x4
    lfs f5, lbl_808822C8
    addi r6, r1, 0x80
    lfs f3, 0xe4(r1)
    li r4, 0x0
    fmuls f6, f4, f5
    lfs f4, 0xc(r31)
    fmuls f7, f3, f5
    lfs f0, 0xe0(r1)
    lfs f3, 0x8(r31)
    lis r7, 0x8000
    fmuls f5, f0, f5
    lfs f0, 0x4(r31)
    fadds f4, f4, f6
    lwz r3, lbl_8087EE98
    fadds f3, f3, f7
    stfs f5, 0x74(r1)
    fadds f0, f0, f5
    stfs f7, 0x78(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f6, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f4, 0x88(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_801AB9E4_00000684
    addi r4, r1, 0xe0
    lfs f2, 0xe8(r1)
    addi r3, r1, 0x104
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
    b lbl_fn_801AB9E4_000006C0
lbl_fn_801AB9E4_00000684:
    lfs f0, 0xe8(r1)
    addi r4, r1, 0x68
    lfs f3, 0xe4(r1)
    addi r3, r1, 0x104
    fneg f4, f0
    lfs f0, 0xe0(r1)
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x70(r1)
    frsp f2, f4
    stfs f0, 0x68(r1)
    stfs f3, 0x6c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
lbl_fn_801AB9E4_000006C0:
    addi r3, r1, 0xec
    addi r4, r1, 0x104
    addi r5, r1, 0x5c
    bl fn_805F99B0
    lfs f3, 0x60(r1)
    lfs f0, lbl_80882290
    fcmpo cr0, f3, f0
    bge lbl_fn_801AB9E4_000006EC
    li r0, 0x3
    stw r0, 0x10(r30)
    b lbl_fn_801AB9E4_0000071C
lbl_fn_801AB9E4_000006EC:
    li r0, 0x4
    stw r0, 0x10(r30)
    b lbl_fn_801AB9E4_0000071C
lbl_fn_801AB9E4_000006F8:
    lfs f3, 0x8(r27)
    lfs f0, 0x8(r31)
    fcmpo cr0, f3, f0
    ble lbl_fn_801AB9E4_00000714
    li r0, 0x1
    stw r0, 0x10(r30)
    b lbl_fn_801AB9E4_0000071C
lbl_fn_801AB9E4_00000714:
    li r0, 0x2
    stw r0, 0x10(r30)
lbl_fn_801AB9E4_0000071C:
    lfs f2, 0x10c(r1)
    addi r3, r1, 0x104
    lfs f0, lbl_808822C0
    addi r28, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801AB9E4_0000076C
    lfs f3, 0x50(r1)
    lfs f0, lbl_80882290
    fcmpo cr0, f3, f0
    ble lbl_fn_801AB9E4_00000760
    lfs f0, lbl_808822CC
    b lbl_fn_801AB9E4_00000764
lbl_fn_801AB9E4_00000760:
    lfs f0, lbl_808822D0
lbl_fn_801AB9E4_00000764:
    stfs f0, 0x48(r1)
    b lbl_fn_801AB9E4_00000780
lbl_fn_801AB9E4_0000076C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801AB9E4_00000780:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x110
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882290
    addi r4, r1, 0x38
    lfs f30, 0x118(r1)
    mr r5, r4
    lfs f31, 0x114(r1)
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
    lfs f0, lbl_808822A0
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x170(r1)
    stfs f3, 0x174(r1)
    stfs f3, 0x178(r1)
    stfs f0, 0x17c(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x140(r1)
    stfs f31, 0x144(r1)
    stfs f30, 0x148(r1)
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
    lfs f0, lbl_808822C0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801AB9E4_0000089C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882290
    fcmpo cr0, f3, f0
    ble lbl_fn_801AB9E4_0000088C
    lfs f0, lbl_808822CC
    b lbl_fn_801AB9E4_00000890
lbl_fn_801AB9E4_0000088C:
    lfs f0, lbl_808822D0
lbl_fn_801AB9E4_00000890:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801AB9E4_000008B0
lbl_fn_801AB9E4_0000089C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801AB9E4_000008B0:
    lfs f4, lbl_80882290
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f4
    psq_st f1, 0x34(r30), 0, 0
    stfs f2, 0x58(r1)
    frsp f2, f2
    stfs f4, 0x4c(r1)
    stfs f2, 0x3c(r30)
    lwz r0, 0x18(r31)
    psq_st f1, 0x0(r28), 0, 0
    cmpwi r0, 0x0
    beq lbl_fn_801AB9E4_00000900
    cmpwi r0, 0x1
    beq lbl_fn_801AB9E4_00000998
    cmpwi r0, 0x2
    beq lbl_fn_801AB9E4_000009DC
    cmpwi r0, 0x3
    beq lbl_fn_801AB9E4_00000A20
    b lbl_fn_801AB9E4_00000A68
lbl_fn_801AB9E4_00000900:
    lwz r0, 0x98(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801AB9E4_00000954
    lfs f3, lbl_808822D4
    li r6, 0x205
    lfs f0, lbl_808822C8
    li r5, 0x203
    li r4, 0x202
    li r3, 0x1f5
    li r0, 0x1f6
    stw r6, 0x44(r30)
    stfs f4, 0x58(r30)
    stw r5, 0x48(r30)
    stfs f3, 0x5c(r30)
    stw r4, 0x4c(r30)
    stfs f3, 0x60(r30)
    stw r3, 0x50(r30)
    stfs f0, 0x64(r30)
    stw r0, 0x54(r30)
    stfs f0, 0x68(r30)
    b lbl_fn_801AB9E4_00000A68
lbl_fn_801AB9E4_00000954:
    lfs f3, lbl_808822D8
    li r4, 0x1fa
    lfs f0, lbl_808822C8
    li r5, 0x1f9
    li r3, 0x1f5
    li r0, 0x1f6
    stw r5, 0x44(r30)
    stfs f4, 0x58(r30)
    stw r4, 0x48(r30)
    stfs f3, 0x5c(r30)
    stw r4, 0x4c(r30)
    stfs f3, 0x60(r30)
    stw r3, 0x50(r30)
    stfs f0, 0x64(r30)
    stw r0, 0x54(r30)
    stfs f0, 0x68(r30)
    b lbl_fn_801AB9E4_00000A68
lbl_fn_801AB9E4_00000998:
    lfs f3, lbl_808822DC
    li r4, 0x58
    lfs f0, lbl_808822C8
    li r5, 0x1f9
    li r3, 0x1f5
    li r0, 0x1f6
    stw r5, 0x44(r30)
    stfs f4, 0x58(r30)
    stw r4, 0x48(r30)
    stfs f3, 0x5c(r30)
    stw r4, 0x4c(r30)
    stfs f3, 0x60(r30)
    stw r3, 0x50(r30)
    stfs f0, 0x64(r30)
    stw r0, 0x54(r30)
    stfs f0, 0x68(r30)
    b lbl_fn_801AB9E4_00000A68
lbl_fn_801AB9E4_000009DC:
    lfs f3, lbl_808822D8
    li r4, 0x1fa
    lfs f0, lbl_808822C8
    li r5, 0x1fe
    li r3, 0x1fc
    li r0, 0x1fd
    stw r5, 0x44(r30)
    stfs f4, 0x58(r30)
    stw r4, 0x48(r30)
    stfs f3, 0x5c(r30)
    stw r4, 0x4c(r30)
    stfs f3, 0x60(r30)
    stw r3, 0x50(r30)
    stfs f0, 0x64(r30)
    stw r0, 0x54(r30)
    stfs f0, 0x68(r30)
    b lbl_fn_801AB9E4_00000A68
lbl_fn_801AB9E4_00000A20:
    lwz r0, 0x10(r30)
    li r5, 0x57
    lfs f0, lbl_808822AC
    li r4, 0x1
    slwi r0, r0, 2
    add r3, r30, r0
    stw r5, 0x44(r3)
    lwz r0, 0x10(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    stfs f0, 0x58(r3)
    lwz r0, 0x10(r30)
    stw r4, 0x70(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    lfs f0, 0x58(r3)
    stfs f0, 0x6c(r30)
    stw r4, 0x78(r30)
lbl_fn_801AB9E4_00000A68:
    li r3, 0x1
lbl_fn_801AB9E4_00000A6C:
    addi r11, r1, 0x1a0
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    bl _restgpr_26
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_801AC14C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x1a
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r3, lbl_8087EF70
    bl fn_800A55D4
    mr r29, r3
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55D4
    mr r30, r3
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55D4
    mr r31, r3
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55D4
    lwz r0, 0x10(r28)
    li r4, -0x1
    cmpwi r0, 0x1
    bne lbl_fn_801AC14C_00000B58
    cmpwi r29, 0x0
    beq lbl_fn_801AC14C_00000B34
    lfs f1, 0x74(r28)
    lfs f0, lbl_808822A0
    fcmpo cr0, f1, f0
    bge lbl_fn_801AC14C_00000B34
    li r4, 0x1
    stw r4, 0x70(r28)
    b lbl_fn_801AC14C_00000C20
lbl_fn_801AC14C_00000B34:
    cmpwi r30, 0x0
    beq lbl_fn_801AC14C_00000C20
    lwz r0, 0x80(r28)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801AC14C_00000C20
    li r0, 0x1
    stw r0, 0x94(r28)
    b lbl_fn_801AC14C_00000C20
lbl_fn_801AC14C_00000B58:
    cmpwi r0, 0x2
    bne lbl_fn_801AC14C_00000BA0
    cmpwi r29, 0x0
    beq lbl_fn_801AC14C_00000B78
    lfs f1, 0x74(r28)
    lfs f0, lbl_80882290
    fcmpo cr0, f1, f0
    bgt lbl_fn_801AC14C_00000C20
lbl_fn_801AC14C_00000B78:
    cmpwi r30, 0x0
    beq lbl_fn_801AC14C_00000C20
    lfs f1, 0x74(r28)
    lfs f0, lbl_808822A0
    fcmpo cr0, f1, f0
    bge lbl_fn_801AC14C_00000C20
    li r0, 0x1
    stw r0, 0x70(r28)
    li r4, 0x2
    b lbl_fn_801AC14C_00000C20
lbl_fn_801AC14C_00000BA0:
    cmpwi r0, 0x3
    bne lbl_fn_801AC14C_00000BDC
    cmpwi r31, 0x0
    beq lbl_fn_801AC14C_00000BD0
    lfs f1, 0x74(r28)
    lfs f0, lbl_808822A0
    fcmpo cr0, f1, f0
    bge lbl_fn_801AC14C_00000BD0
    li r0, 0x1
    stw r0, 0x70(r28)
    li r4, 0x3
    b lbl_fn_801AC14C_00000C20
lbl_fn_801AC14C_00000BD0:
    cmpwi r3, 0x0
    beq lbl_fn_801AC14C_00000C20
    b lbl_fn_801AC14C_00000C20
lbl_fn_801AC14C_00000BDC:
    cmpwi r0, 0x4
    bne lbl_fn_801AC14C_00000C20
    cmpwi r31, 0x0
    beq lbl_fn_801AC14C_00000BFC
    lfs f1, 0x74(r28)
    lfs f0, lbl_80882290
    fcmpo cr0, f1, f0
    bgt lbl_fn_801AC14C_00000C20
lbl_fn_801AC14C_00000BFC:
    cmpwi r3, 0x0
    beq lbl_fn_801AC14C_00000C20
    lfs f1, 0x74(r28)
    lfs f0, lbl_808822A0
    fcmpo cr0, f1, f0
    bge lbl_fn_801AC14C_00000C20
    li r0, 0x1
    stw r0, 0x70(r28)
    li r4, 0x4
lbl_fn_801AC14C_00000C20:
    lwz r31, 0x1c(r1)
    mr r3, r4
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AC2FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r5, 0x4(r4)
    lwz r0, 0x2dc(r5)
    cmpwi r0, 0x59
    beq lbl_fn_801AC2FC_00000C60
    cmpwi r0, 0x206
    bne lbl_fn_801AC2FC_00000D24
lbl_fn_801AC2FC_00000C60:
    lfs f4, 0x2e4(r5)
    lfs f3, lbl_808822E0
    lfs f0, lbl_808822E4
    fsubs f3, f4, f3
    lfs f4, lbl_80882290
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801AC2FC_00000C84
    b lbl_fn_801AC2FC_00000C88
lbl_fn_801AC2FC_00000C84:
    fmr f4, f0
lbl_fn_801AC2FC_00000C88:
    lfs f10, lbl_808822A0
    fcmpo cr0, f10, f4
    bge lbl_fn_801AC2FC_00000C98
    b lbl_fn_801AC2FC_00000CC0
lbl_fn_801AC2FC_00000C98:
    lfs f4, 0x2e4(r5)
    lfs f3, lbl_808822E0
    lfs f0, lbl_808822E4
    fsubs f3, f4, f3
    lfs f10, lbl_80882290
    fdivs f0, f3, f0
    fcmpo cr0, f10, f0
    ble lbl_fn_801AC2FC_00000CBC
    b lbl_fn_801AC2FC_00000CC0
lbl_fn_801AC2FC_00000CBC:
    fmr f10, f0
lbl_fn_801AC2FC_00000CC0:
    lfs f3, 0x530(r5)
    lfs f5, 0x8c(r4)
    lfs f0, 0x52c(r5)
    fsubs f9, f3, f5
    lfs f4, 0x88(r4)
    lfs f3, 0x528(r5)
    fsubs f6, f0, f4
    lfs f0, 0x84(r4)
    fmuls f8, f9, f10
    fsubs f3, f3, f0
    stfs f6, 0x18(r1)
    fmuls f7, f6, f10
    fadds f5, f8, f5
    stfs f3, 0x14(r1)
    fmuls f6, f3, f10
    fadds f3, f7, f4
    stfs f9, 0x1c(r1)
    fadds f0, f6, f0
    stfs f6, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f0, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f5, 0x8(r3)
    b lbl_fn_801AC2FC_00000D34
lbl_fn_801AC2FC_00000D24:
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_801AC2FC_00000D34:
    addi r1, r1, 0x20
    blr
}

asm void fn_801AC3F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801AC3F4_00000D64
    cmpwi r4, 0x0
    ble lbl_fn_801AC3F4_00000D64
    bl dtor_80084684
lbl_fn_801AC3F4_00000D64:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AC434(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x210
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    bl _savegpr_25
    lis r7, lbl_80780078@ha
    stw r4, 0x4(r3)
    addi r7, r7, lbl_80780078@l
    li r0, 0x16
    stw r7, 0x0(r3)
    mr r29, r6
    addi r26, r1, 0xd4
    mr r27, r3
    stw r0, 0x560(r4)
    mr r28, r5
    mr r4, r26
    lwz r6, 0x4(r3)
    mr r3, r26
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    addi r31, r6, 0xb0
    stfs f2, 0xdc(r1)
    psq_st f1, 0x0(r26), 0, 0
    bl fn_805F98D0
    addi r5, r1, 0xc8
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r1, 0x1c0
    lfs f2, 0x8(r28)
    li r30, 0x0
    lfs f3, 0xcc(r1)
    li r4, 0x79
    lfs f0, lbl_808822E8
    lwz r6, 0x4(r27)
    fmuls f4, f3, f0
    lfs f3, lbl_808822EC
    lfs f0, lbl_808822F0
    stfs f4, 0xcc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x6b8(r6), 0, 0
    stfs f2, 0x6c0(r6)
    lwz r5, 0x4(r27)
    stfs f2, 0xd0(r1)
    stfs f3, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xbc
    addi r3, r1, 0x1c0
    mr r5, r4
    bl fn_805F93C0
    mr r3, r26
    addi r4, r1, 0xbc
    bl fn_805F9990
    fmr f31, f1
    lis r3, lbl_8073A9B8@ha
    lfd f1, lbl_8073A9B8@l(r3)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_801AC434_00001040
    lfs f2, 0xdc(r1)
    addi r25, r1, 0xb0
    psq_l f1, 0x0(r26), 0, 0
    fabs f3, f2
    lfs f0, lbl_808822F4
    psq_st f1, 0x0(r25), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801AC434_00000ED0
    lfs f3, 0xb0(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801AC434_00000EC4
    lfs f0, lbl_808822F8
    b lbl_fn_801AC434_00000EC8
lbl_fn_801AC434_00000EC4:
    lfs f0, lbl_808822FC
lbl_fn_801AC434_00000EC8:
    stfs f0, 0x90(r1)
    b lbl_fn_801AC434_00000EE4
lbl_fn_801AC434_00000ED0:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_801AC434_00000EE4:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x150
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808822EC
    addi r4, r1, 0x80
    lfs f30, 0x158(r1)
    mr r5, r4
    lfs f31, 0x154(r1)
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
    lfs f0, lbl_808822F0
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x180(r1)
    stfs f31, 0x184(r1)
    stfs f30, 0x188(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x190(r1)
    stfs f11, 0x194(r1)
    stfs f12, 0x198(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f9, 0x1a8(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x18c(r1)
    stfs f5, 0x19c(r1)
    stfs f6, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_808822F4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801AC434_00001000
    lfs f3, 0x84(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801AC434_00000FF0
    lfs f0, lbl_808822F8
    b lbl_fn_801AC434_00000FF4
lbl_fn_801AC434_00000FF0:
    lfs f0, lbl_808822FC
lbl_fn_801AC434_00000FF4:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_801AC434_00001014
lbl_fn_801AC434_00001000:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_801AC434_00001014:
    lfs f2, lbl_808822EC
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    li r30, 0x1
    stfs f2, 0x94(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r25), 0, 0
    psq_st f1, 0x8(r27), 0, 0
    stfs f2, 0x10(r27)
    b lbl_fn_801AC434_0000121C
lbl_fn_801AC434_00001040:
    lfs f3, 0xdc(r1)
    addi r3, r1, 0x98
    lfs f0, 0xd8(r1)
    addi r25, r1, 0xa4
    fneg f4, f3
    lfs f3, 0xd4(r1)
    fneg f5, f0
    lfs f0, lbl_808822F4
    fneg f3, f3
    stfs f4, 0xa0(r1)
    frsp f2, f4
    stfs f3, 0x98(r1)
    stfs f5, 0x9c(r1)
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801AC434_000010B4
    lfs f3, 0xa4(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801AC434_000010A8
    lfs f0, lbl_808822F8
    b lbl_fn_801AC434_000010AC
lbl_fn_801AC434_000010A8:
    lfs f0, lbl_808822FC
lbl_fn_801AC434_000010AC:
    stfs f0, 0x48(r1)
    b lbl_fn_801AC434_000010C8
lbl_fn_801AC434_000010B4:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801AC434_000010C8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xe0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808822EC
    addi r4, r1, 0x38
    lfs f31, 0xe8(r1)
    mr r5, r4
    lfs f30, 0xe4(r1)
    addi r3, r1, 0x110
    lfs f13, 0xe0(r1)
    lfs f12, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f10, 0xf0(r1)
    lfs f9, 0x108(r1)
    lfs f8, 0x104(r1)
    lfs f7, 0x100(r1)
    lfs f6, 0x10c(r1)
    lfs f5, 0xfc(r1)
    lfs f4, 0xec(r1)
    lfs f0, lbl_808822F0
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x110(r1)
    stfs f30, 0x114(r1)
    stfs f31, 0x118(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f12, 0x128(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x11c(r1)
    stfs f5, 0x12c(r1)
    stfs f6, 0x13c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808822F4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801AC434_000011E4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801AC434_000011D4
    lfs f0, lbl_808822F8
    b lbl_fn_801AC434_000011D8
lbl_fn_801AC434_000011D4:
    lfs f0, lbl_808822FC
lbl_fn_801AC434_000011D8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801AC434_000011F8
lbl_fn_801AC434_000011E4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801AC434_000011F8:
    lfs f2, lbl_808822EC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0xac(r1)
    frsp f2, f2
    psq_st f1, 0x0(r25), 0, 0
    psq_st f1, 0x8(r27), 0, 0
    stfs f2, 0x10(r27)
lbl_fn_801AC434_0000121C:
    lwz r3, 0x4(r27)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801AC434_00001230
    bl fn_801539E0
lbl_fn_801AC434_00001230:
    lwz r3, 0x4(r27)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801AC434_00001248
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801AC434_00001248:
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_808822F0
    cmpwi r30, 0x0
    stfs f0, 0x24c(r31)
    beq lbl_fn_801AC434_00001268
    li r29, 0x37
    b lbl_fn_801AC434_000012E0
lbl_fn_801AC434_00001268:
    cmpwi r29, -0x1
    bne lbl_fn_801AC434_000012B0
    mr r3, r28
    bl fn_805F9920
    lfs f0, lbl_80882300
    fcmpo cr0, f1, f0
    ble lbl_fn_801AC434_0000128C
    li r29, 0x36
    b lbl_fn_801AC434_000012E0
lbl_fn_801AC434_0000128C:
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    li r29, 0x34
    subf. r0, r4, r0
    bne lbl_fn_801AC434_000012E0
    li r29, 0x33
    b lbl_fn_801AC434_000012E0
lbl_fn_801AC434_000012B0:
    mr r3, r28
    bl fn_805F9920
    lfs f0, lbl_80882300
    fcmpo cr0, f1, f0
    ble lbl_fn_801AC434_000012E0
    cmpwi r29, 0x33
    bne lbl_fn_801AC434_000012D4
    li r29, 0x36
    b lbl_fn_801AC434_000012E0
lbl_fn_801AC434_000012D4:
    cmpwi r29, 0x34
    bne lbl_fn_801AC434_000012E0
    li r29, 0x36
lbl_fn_801AC434_000012E0:
    mr r3, r31
    mr r4, r29
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_801AC434_000012F8
    li r29, 0x33
lbl_fn_801AC434_000012F8:
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882304
    mr r5, r29
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808822F0
    stfs f0, 0x238(r31)
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_801AC434_00001338
    lfs f0, lbl_80882308
    stfs f0, 0x238(r31)
lbl_fn_801AC434_00001338:
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088230C
    fmuls f0, f0, f1
    stfs f0, 0x14(r27)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801AC434_00001390
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801AC434_00001390
    lwz r3, lbl_8087F498
    li r5, 0x6
    lwz r4, 0x4(r27)
    li r6, 0x0
    lfs f1, lbl_808822F0
    lfs f2, lbl_80882310
    bl fn_803EA77C
lbl_fn_801AC434_00001390:
    psq_l f31, 0x228(r1), 0, 0
    mr r3, r27
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    addi r11, r1, 0x210
    bl _restgpr_25
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_801ACA74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, lbl_8087EFA8
    lfs f0, 0x14(r3)
    lfs f1, 0x3a4(r4)
    li r4, 0x0
    lwz r5, 0x4(r3)
    fsubs f0, f0, f1
    addi r5, r5, 0xb0
    stfs f0, 0x14(r3)
    mr r3, r5
    lfs f31, 0x234(r5)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801ACA74_0000142C
    lwz r3, 0x4(r30)
    lfs f0, lbl_80882314
    lfs f1, 0x578(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_801ACA74_00001440
lbl_fn_801ACA74_0000142C:
    lfs f1, 0x14(r30)
    lfs f0, lbl_808822EC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_801ACA74_00001444
lbl_fn_801ACA74_00001440:
    li r31, 0x1
lbl_fn_801ACA74_00001444:
    lwz r3, 0x4(r30)
    addi r4, r30, 0x8
    lfs f1, lbl_808822EC
    li r5, 0x0
    lfs f2, 0x568(r3)
    bl fn_8013CB68
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801ACB38(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lis r7, lbl_80780000@ha
    lfs f0, lbl_808822EC
    stw r0, 0x124(r1)
    addi r7, r7, lbl_80780000@l
    li r0, 0x14
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r5
    stw r29, 0xf4(r1)
    stw r28, 0xf0(r1)
    mr r28, r3
    stw r7, 0x0(r3)
    addi r7, r1, 0x74
    stw r4, 0x4(r3)
    stw r6, 0x14(r3)
    stw r0, 0x560(r4)
    lfs f4, 0x4(r5)
    lfs f3, 0x0(r5)
    fmuls f5, f4, f1
    lfs f4, 0x8(r5)
    fmuls f3, f3, f1
    lwz r4, 0x4(r3)
    fmuls f2, f4, f1
    fmuls f0, f5, f0
    stfs f3, 0x74(r1)
    addi r29, r4, 0xb0
    stfs f0, 0x78(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    stfs f2, 0x6c0(r4)
    stfs f2, 0x7c(r1)
    lwz r3, 0x4(r3)
    bl fn_801446F0
    mr r3, r30
    bl fn_805F9920
    lfs f0, lbl_80882318
    fcmpo cr0, f1, f0
    ble lbl_fn_801ACB38_00001730
    lfs f0, 0x8(r30)
    addi r31, r1, 0x5c
    lfs f3, 0x4(r30)
    addi r5, r1, 0x50
    fneg f4, f0
    lfs f0, 0x0(r30)
    fneg f3, f3
    mr r3, r31
    fneg f0, f0
    stfs f4, 0x58(r1)
    stfs f0, 0x50(r1)
    frsp f2, f4
    mr r4, r31
    stfs f3, 0x54(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808822F4
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801ACB38_000015C4
    lfs f3, 0x68(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801ACB38_000015B8
    lfs f0, lbl_808822F8
    b lbl_fn_801ACB38_000015BC
lbl_fn_801ACB38_000015B8:
    lfs f0, lbl_808822FC
lbl_fn_801ACB38_000015BC:
    stfs f0, 0x48(r1)
    b lbl_fn_801ACB38_000015D8
lbl_fn_801ACB38_000015C4:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801ACB38_000015D8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808822EC
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_808822F0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808822F4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801ACB38_000016F4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801ACB38_000016E4
    lfs f0, lbl_808822F8
    b lbl_fn_801ACB38_000016E8
lbl_fn_801ACB38_000016E4:
    lfs f0, lbl_808822FC
lbl_fn_801ACB38_000016E8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801ACB38_00001708
lbl_fn_801ACB38_000016F4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801ACB38_00001708:
    lfs f2, lbl_808822EC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x8(r28), 0, 0
    stfs f2, 0x10(r28)
    b lbl_fn_801ACB38_00001744
lbl_fn_801ACB38_00001730:
    lwz r3, 0x4(r28)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x10(r28)
    psq_st f1, 0x8(r28), 0, 0
lbl_fn_801ACB38_00001744:
    li r0, 0x1
    stw r0, 0x34c(r29)
    lfs f0, lbl_808822F0
    mr r3, r29
    stfs f0, 0x24c(r29)
    li r4, 0x0
    lfs f1, lbl_808822EC
    li r6, 0x0
    lwz r5, 0x4(r28)
    li r7, 0x0
    lfs f2, lbl_80882304
    li r8, 0x1
    lwz r5, 0x4ec(r5)
    bl fn_80097C08
    lfs f0, lbl_808822F0
    mr r3, r29
    stfs f0, 0x238(r29)
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088230C
    mr r3, r28
    fmuls f0, f0, f1
    stfs f0, 0x18(r28)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801ACE88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, lbl_8087EFA8
    lfs f0, 0x18(r3)
    lfs f1, 0x3a4(r4)
    li r4, 0x0
    lwz r5, 0x4(r3)
    fsubs f0, f0, f1
    addi r5, r5, 0xb0
    stfs f0, 0x18(r3)
    mr r3, r5
    lfs f31, 0x234(r5)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801ACE88_00001840
    lwz r3, 0x4(r30)
    lfs f0, lbl_80882314
    lfs f1, 0x578(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_801ACE88_00001854
lbl_fn_801ACE88_00001840:
    lfs f1, 0x18(r30)
    lfs f0, lbl_808822EC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_801ACE88_00001858
lbl_fn_801ACE88_00001854:
    li r31, 0x1
lbl_fn_801ACE88_00001858:
    lwz r3, 0x4(r30)
    addi r4, r30, 0x8
    lfs f1, lbl_808822EC
    li r5, 0x0
    lfs f2, 0x568(r3)
    bl fn_8013CB68
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801ACF4C(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    lis r6, lbl_8077FF88@ha
    stw r0, 0x154(r1)
    addi r6, r6, lbl_8077FF88@l
    li r0, 0x40
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    mr r30, r5
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    mr r28, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    addi r29, r3, 0xb0
    bl fn_801446F0
    mr r3, r30
    bl fn_805F9920
    lfs f0, lbl_80882318
    fcmpo cr0, f1, f0
    ble lbl_fn_801ACF4C_00001B00
    lfs f0, 0x8(r30)
    addi r31, r1, 0x68
    lfs f3, 0x4(r30)
    addi r5, r1, 0x5c
    fneg f4, f0
    lfs f0, 0x0(r30)
    fneg f3, f3
    mr r3, r31
    fneg f0, f0
    stfs f4, 0x64(r1)
    stfs f0, 0x5c(r1)
    frsp f2, f4
    mr r4, r31
    stfs f3, 0x60(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    lfs f2, 0x70(r1)
    addi r30, r1, 0x74
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808822F4
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x7c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801ACF4C_00001994
    lfs f3, 0x74(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801ACF4C_00001988
    lfs f0, lbl_808822F8
    b lbl_fn_801ACF4C_0000198C
lbl_fn_801ACF4C_00001988:
    lfs f0, lbl_808822FC
lbl_fn_801ACF4C_0000198C:
    stfs f0, 0x48(r1)
    b lbl_fn_801ACF4C_000019A8
lbl_fn_801ACF4C_00001994:
    frsp f2, f2
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801ACF4C_000019A8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808822EC
    addi r4, r1, 0x38
    lfs f30, 0xb8(r1)
    mr r5, r4
    lfs f31, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f13, 0xb0(r1)
    lfs f12, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f10, 0xc0(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f7, 0xd0(r1)
    lfs f6, 0xdc(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xbc(r1)
    lfs f0, lbl_808822F0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x7c(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xe0(r1)
    stfs f31, 0xe4(r1)
    stfs f30, 0xe8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f12, 0xf8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xec(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808822F4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801ACF4C_00001AC4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801ACF4C_00001AB4
    lfs f0, lbl_808822F8
    b lbl_fn_801ACF4C_00001AB8
lbl_fn_801ACF4C_00001AB4:
    lfs f0, lbl_808822FC
lbl_fn_801ACF4C_00001AB8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801ACF4C_00001AD8
lbl_fn_801ACF4C_00001AC4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801ACF4C_00001AD8:
    lfs f2, lbl_808822EC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x7c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x8(r28), 0, 0
    stfs f2, 0x10(r28)
    b lbl_fn_801ACF4C_00001B4C
lbl_fn_801ACF4C_00001B00:
    lwz r5, 0x4(r28)
    addi r3, r1, 0x80
    lfs f3, lbl_808822EC
    li r4, 0x79
    lfs f0, lbl_808822F0
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x80
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r28), 0, 0
    stfs f2, 0x10(r28)
lbl_fn_801ACF4C_00001B4C:
    li r0, 0x1
    stw r0, 0x34c(r29)
    lfs f0, lbl_808822F0
    mr r3, r29
    stfs f0, 0x24c(r29)
    li r4, 0x0
    lfs f1, lbl_808822EC
    li r5, 0x1ea
    lfs f2, lbl_80882304
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808822F0
    stfs f0, 0x238(r29)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801ACF4C_00001BC8
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801ACF4C_00001BC8
    lwz r3, lbl_8087F498
    li r5, 0xc
    lwz r4, 0x4(r28)
    li r6, 0x0
    lfs f1, lbl_808822F0
    lfs f2, lbl_80882310
    bl fn_803EA77C
lbl_fn_801ACF4C_00001BC8:
    psq_l f31, 0x148(r1), 0, 0
    mr r3, r28
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
