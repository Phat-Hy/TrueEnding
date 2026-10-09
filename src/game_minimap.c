#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_8004FF58(void);
extern void fn_80063764(void);
extern void fn_80063D3C(void);
extern void fn_800697D8(void);
extern void fn_8006FEBC(void);
extern void fn_80080048(void);
extern void fn_80080528(void);
extern void fn_800816A8(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800902C0(void);
extern void fn_80091684(void);
extern void fn_80095300(void);
extern void fn_800BDB58(void);
extern void fn_800C0A50(void);
extern void fn_800C122C(void);
extern void fn_80473F18(void);
extern void fn_80476130(void);
extern void fn_80476194(void);
extern void fn_804761B0(void);
extern void fn_805F89F0(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80732368[];

/* Small data declarations */
extern u32 lbl_8087D7E4;
extern u32 lbl_8087D7E8;
extern u32 lbl_8087D7EC;
extern u32 lbl_8087D7F0;
extern u32 lbl_8087D7F4;
extern u32 lbl_8087D7F8;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880BF8;
extern u32 lbl_80880C08;
extern u32 lbl_80880C0C;

/* Function declarations */
void fn_8008C828(void);
void fn_8008C850(void);
void fn_8008C950(void);
void fn_8008CCC0(void);
void fn_8008CCD4(void);
void fn_8008CCE8(void);
void fn_8008CD1C(void);
void fn_8008CD50(void);
void fn_8008CD60(void);
void fn_8008D6C0(void);
void fn_8008D784(void);
void fn_8008D78C(void);

asm void fn_8008C828(void)
{
    nofralloc
    lwz r0, 0x138(r3)
    cmplw r4, r0
    beqlr
    cmpwi r4, 0x0
    stw r4, 0x138(r3)
    beq lbl_fn_8008C828_0000001C
    b fn_8008C850
lbl_fn_8008C828_0000001C:
    addi r4, r3, 0x104
    b fn_8008C850
    blr
}

asm void fn_8008C850(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    li r30, 0x0
    li r31, 0x0
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 19, 17
    rlwinm r0, r0, 0, 14, 12
    rlwinm r0, r0, 0, 28, 25
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x4(r3)
    b lbl_fn_8008C850_00000108
lbl_fn_8008C850_00000064:
    lwz r3, 0x4(r28)
    lwzx r29, r3, r31
    mr r3, r29
    bl fn_800816A8
    cmpwi r3, 0x0
    beq lbl_fn_8008C850_0000008C
    lwz r0, 0x4(r27)
    ori r0, r0, 0x10
    stw r0, 0x4(r27)
    b lbl_fn_8008C850_00000098
lbl_fn_8008C850_0000008C:
    lwz r0, 0x4(r27)
    ori r0, r0, 0x20
    stw r0, 0x4(r27)
lbl_fn_8008C850_00000098:
    mr r3, r29
    li r4, 0x15
    bl fn_80080528
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_8008C850_000000C0
    lwz r0, 0x4(r27)
    ori r0, r0, 0x2000
    stw r0, 0x4(r27)
lbl_fn_8008C850_000000C0:
    mr r3, r29
    li r4, 0x14
    bl fn_80080528
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_8008C850_000000E8
    lwz r0, 0x4(r27)
    oris r0, r0, 0x4
    stw r0, 0x4(r27)
lbl_fn_8008C850_000000E8:
    lbz r0, 0x48(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_8008C850_00000100
    lwz r0, 0x4(r27)
    oris r0, r0, 0x2
    stw r0, 0x4(r27)
lbl_fn_8008C850_00000100:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8008C850_00000108:
    lwz r0, 0x0(r28)
    cmplw r30, r0
    blt lbl_fn_8008C850_00000064
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8008C950(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stw r31, 0x17c(r1)
    addi r31, r3, 0x164
    stw r30, 0x178(r1)
    mr r30, r3
    stw r29, 0x174(r1)
    lwz r4, 0x16c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8008C950_0000047C
    lwz r3, 0x3c(r3)
    lwz r29, 0x44(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8008C950_00000170
    beq lbl_fn_8008C950_00000170
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8008C950_00000170:
    cmpwi r29, 0x0
    stw r29, 0x38(r30)
    beq lbl_fn_8008C950_000001B4
    mulli r3, r29, 0x30
    li r4, 0x6
    la r5, lbl_8087D7F0
    la r6, lbl_8087D7EC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x30
    bl fn_80695720
    stw r3, 0x3c(r30)
    b lbl_fn_8008C950_000001BC
lbl_fn_8008C950_000001B4:
    li r0, 0x0
    stw r0, 0x3c(r30)
lbl_fn_8008C950_000001BC:
    lwz r3, 0x8(r31)
    lwz r0, 0x44(r3)
    mulli r0, r0, 0x30
    cmpwi r0, 0x1800
    ble lbl_fn_8008C950_0000020C
    addi r3, r30, 0x164
    bl fn_80473F18
    lwz r4, 0x8(r31)
    lis r7, lbl_80732368@ha
    mr r5, r3
    addi r3, r1, 0x70
    addi r7, r7, lbl_80732368@l
    lwz r6, 0x44(r4)
    addi r4, r7, 0x15c
    li r7, 0x80
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x70
    bl fn_800697D8
lbl_fn_8008C950_0000020C:
    lwz r3, 0x8(r31)
    lwz r3, 0x38(r3)
    lwz r0, 0x10(r3)
    mulli r3, r0, 0x30
    addi r0, r3, 0x1f
    clrrwi r29, r0, 5
    bl fn_800827E0
    lis r6, lbl_80732368@ha
    mr r4, r29
    addi r6, r6, lbl_80732368@l
    li r5, 0x20
    addi r7, r6, 0xa
    li r9, 0x0
    li r6, 0x9
    mr r8, r7
    bl fn_800838B8
    lwz r0, 0xe8(r30)
    stw r3, 0x58(r30)
    lwz r3, 0x8(r31)
    cmpwi r0, 0x0
    lwz r29, 0x44(r3)
    beq lbl_fn_8008C950_0000026C
    mr r3, r0
    bl fn_80084C24
lbl_fn_8008C950_0000026C:
    cmpwi r29, 0x0
    stw r29, 0xe4(r30)
    beq lbl_fn_8008C950_00000298
    slwi r3, r29, 1
    li r4, 0x6
    la r5, lbl_8087D7E8
    la r6, lbl_8087D7E4
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xe8(r30)
    b lbl_fn_8008C950_000002A0
lbl_fn_8008C950_00000298:
    li r0, 0x0
    stw r0, 0xe8(r30)
lbl_fn_8008C950_000002A0:
    lwz r3, 0xf0(r30)
    lwz r4, 0x8(r31)
    cmpwi r3, 0x0
    lwz r29, 0x44(r4)
    beq lbl_fn_8008C950_000002B8
    bl fn_80084C24
lbl_fn_8008C950_000002B8:
    cmpwi r29, 0x0
    stw r29, 0xec(r30)
    beq lbl_fn_8008C950_000002E4
    mr r3, r29
    li r4, 0x6
    la r5, lbl_8087D7F8
    la r6, lbl_8087D7F4
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xf0(r30)
    b lbl_fn_8008C950_000002EC
lbl_fn_8008C950_000002E4:
    li r0, 0x0
    stw r0, 0xf0(r30)
lbl_fn_8008C950_000002EC:
    li r7, 0x0
    li r3, 0x0
    li r6, -0x1
    li r5, 0x1
    b lbl_fn_8008C950_00000318
lbl_fn_8008C950_00000300:
    lwz r4, 0xe8(r30)
    sthx r6, r4, r3
    addi r3, r3, 0x2
    lwz r4, 0xf0(r30)
    stbx r5, r4, r7
    addi r7, r7, 0x1
lbl_fn_8008C950_00000318:
    lwz r4, 0x8(r31)
    lwz r0, 0x44(r4)
    cmpw r7, r0
    blt lbl_fn_8008C950_00000300
    mr r3, r31
    bl fn_80476130
    stw r3, 0x90(r30)
    addi r3, r1, 0x38
    lwz r8, 0x8(r31)
    addi r4, r1, 0x2c
    lfs f0, lbl_80880C08
    addi r5, r1, 0x50
    lfs f2, 0x24(r8)
    addi r6, r1, 0x14
    stfs f2, 0x40(r1)
    addi r7, r1, 0x8
    psq_l f1, 0x1c(r8), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x20
    psq_l f1, 0x10(r8), 0, 0
    lfs f2, 0x18(r8)
    lfs f3, 0x40(r1)
    psq_st f1, 0x0(r4), 0, 0
    fadds f6, f3, f2
    lfs f5, 0x3c(r1)
    lfs f3, 0x30(r1)
    lfs f4, 0x38(r1)
    fadds f7, f5, f3
    lfs f3, 0x2c(r1)
    fmuls f8, f6, f0
    stfs f2, 0x34(r1)
    fadds f3, f4, f3
    fmuls f4, f7, f0
    fmr f2, f8
    stfs f3, 0x44(r1)
    fmuls f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x9c(r30), 0, 0
    stfs f2, 0xa4(r30)
    lfs f2, 0x24(r8)
    stfs f2, 0x1c(r1)
    lfs f2, 0x18(r8)
    psq_l f1, 0x1c(r8), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    frsp f0, f2
    psq_l f1, 0x10(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    lfs f3, 0x1c(r1)
    lfs f5, 0x18(r1)
    fsubs f9, f3, f0
    lfs f4, 0xc(r1)
    lfs f3, 0x14(r1)
    lfs f0, 0x8(r1)
    fsubs f4, f5, f4
    stfs f7, 0x48(r1)
    fsubs f0, f3, f0
    stfs f6, 0x4c(r1)
    stfs f8, 0x58(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f9, 0x28(r1)
    bl fn_805F9940
    lfs f0, lbl_80880C08
    li r0, 0x0
    mr r3, r30
    addi r5, r1, 0x5c
    fmuls f0, f0, f1
    li r4, 0x0
    stfs f0, 0xa8(r30)
    stw r0, 0x5c(r1)
    bl fn_800902C0
    addic. r3, r1, 0x5c
    beq lbl_fn_8008C950_0000047C
    lwz r4, 0x5c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8008C950_0000047C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8008C950_00000474
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8008C950_00000474:
    li r0, 0x0
    stw r0, 0x5c(r1)
lbl_fn_8008C950_0000047C:
    lwz r0, 0x184(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_8008CCC0(void)
{
    nofralloc
    psq_l f1, 0x1c(r4), 0, 0
    lfs f2, 0x24(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_8008CCD4(void)
{
    nofralloc
    psq_l f1, 0x10(r4), 0, 0
    lfs f2, 0x18(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_8008CCE8(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    blr
}

asm void fn_8008CD1C(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    blr
}

asm void fn_8008CD50(void)
{
    nofralloc
    mr r0, r3
    mr r3, r5
    mr r5, r0
    b fn_805F89F0
}

asm void fn_8008CD60(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x1a0
    stfd f31, 0x280(r1)
    psq_st f31, 0x288(r1), 0, 0
    stfd f30, 0x270(r1)
    psq_st f30, 0x278(r1), 0, 0
    stfd f29, 0x260(r1)
    psq_st f29, 0x268(r1), 0, 0
    stfd f28, 0x250(r1)
    psq_st f28, 0x258(r1), 0, 0
    stfd f27, 0x240(r1)
    psq_st f27, 0x248(r1), 0, 0
    stfd f26, 0x230(r1)
    psq_st f26, 0x238(r1), 0, 0
    stfd f25, 0x220(r1)
    psq_st f25, 0x228(r1), 0, 0
    stfd f24, 0x210(r1)
    psq_st f24, 0x218(r1), 0, 0
    stfd f23, 0x200(r1)
    psq_st f23, 0x208(r1), 0, 0
    stfd f22, 0x1f0(r1)
    psq_st f22, 0x1f8(r1), 0, 0
    stfd f21, 0x1e0(r1)
    psq_st f21, 0x1e8(r1), 0, 0
    stfd f20, 0x1d0(r1)
    psq_st f20, 0x1d8(r1), 0, 0
    stfd f19, 0x1c0(r1)
    psq_st f19, 0x1c8(r1), 0, 0
    stfd f18, 0x1b0(r1)
    psq_st f18, 0x1b8(r1), 0, 0
    stfd f17, 0x1a0(r1)
    psq_st f17, 0x1a8(r1), 0, 0
    bl _savegpr_26
    mr r31, r3
    addi r3, r3, 0x164
    bl fn_804761B0
    cmpwi r3, 0x0
    beq lbl_fn_8008CD60_000005F0
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0x0
    bl fn_800BDB58
    b lbl_fn_8008CD60_00000E08
lbl_fn_8008CD60_000005F0:
    lwz r0, 0x16c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8008CD60_00000E08
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, lbl_80880BF8
    li r5, 0x2
    bl fn_800BDB58
    lwz r3, 0x4(r31)
    lis r0, 0x1
    rlwinm r4, r3, 0, 15, 15
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_8008CD60_00000888
    psq_l f1, 0x8(r31), 0, 0
    addi r4, r1, 0xf8
    psq_l f2, 0x10(r31), 0, 0
    addi r30, r1, 0x48
    psq_l f3, 0x18(r31), 0, 0
    psq_l f4, 0x20(r31), 0, 0
    psq_l f5, 0x28(r31), 0, 0
    psq_l f6, 0x30(r31), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    lwz r7, 0xb0(r31)
    cmpwi r7, 0x0
    blt lbl_fn_8008CD60_0000082C
    lwz r0, 0xb4(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8008CD60_000007F0
    mulli r0, r0, 0x30
    lwz r6, 0x3c(r31)
    lfs f20, lbl_80880C08
    addi r3, r1, 0x128
    add r5, r6, r0
    mulli r0, r7, 0x30
    lfs f9, 0x2c(r5)
    lfs f7, 0x28(r5)
    lfs f8, 0x24(r5)
    add r6, r6, r0
    lfs f0, 0x20(r5)
    lfs f11, 0x2c(r6)
    lfs f10, 0x28(r6)
    fadds f22, f11, f9
    lfs f9, 0x24(r6)
    fadds f23, f10, f7
    lfs f7, 0x20(r6)
    fadds f24, f9, f8
    lfs f8, 0x1c(r6)
    fadds f25, f7, f0
    lfs f0, 0x1c(r5)
    lfs f7, 0x18(r6)
    fmuls f11, f22, f20
    fadds f26, f8, f0
    lfs f0, 0x18(r5)
    fadds f27, f7, f0
    lfs f7, 0x14(r6)
    lfs f0, 0x14(r5)
    fmuls f10, f23, f20
    lfs f12, 0x10(r6)
    fmuls f9, f24, f20
    fadds f28, f7, f0
    lfs f0, 0x10(r5)
    lfs f21, 0x8(r6)
    fmuls f8, f25, f20
    fadds f29, f12, f0
    lfs f12, 0x8(r5)
    fadds f31, f21, f12
    lfs f13, 0x4(r6)
    lfs f12, 0x4(r5)
    fmuls f17, f28, f20
    lfs f7, 0xc(r6)
    fadds f13, f13, f12
    lfs f0, 0xc(r5)
    fmuls f19, f31, f20
    stfs f17, 0x13c(r1)
    fmuls f17, f29, f20
    fadds f30, f7, f0
    fmuls f0, f27, f20
    stfs f17, 0x138(r1)
    fmuls f7, f26, f20
    lfs f21, 0x0(r6)
    lfs f12, 0x0(r5)
    fmuls f18, f30, f20
    fadds f12, f21, f12
    stfs f0, 0x140(r1)
    fmuls f21, f13, f20
    psq_l f3, 0x10(r3), 0, 0
    stfs f7, 0x144(r1)
    fmuls f0, f12, f20
    psq_l f4, 0x18(r3), 0, 0
    stfs f0, 0x128(r1)
    stfs f21, 0x12c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f19, 0x130(r1)
    stfs f18, 0x134(r1)
    psq_l f2, 0x8(r3), 0, 0
    stfs f8, 0x148(r1)
    stfs f9, 0x14c(r1)
    psq_l f5, 0x20(r3), 0, 0
    stfs f10, 0x150(r1)
    stfs f11, 0x154(r1)
    psq_l f6, 0x28(r3), 0, 0
    stfs f12, 0x158(r1)
    stfs f13, 0x15c(r1)
    stfs f31, 0x160(r1)
    stfs f30, 0x164(r1)
    stfs f29, 0x168(r1)
    stfs f28, 0x16c(r1)
    stfs f27, 0x170(r1)
    stfs f26, 0x174(r1)
    stfs f25, 0x178(r1)
    stfs f24, 0x17c(r1)
    stfs f23, 0x180(r1)
    stfs f22, 0x184(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    b lbl_fn_8008CD60_0000082C
lbl_fn_8008CD60_000007F0:
    mulli r0, r7, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
lbl_fn_8008CD60_0000082C:
    lfs f7, 0x54(r31)
    addi r29, r1, 0x14
    lfs f0, 0xac(r31)
    mr r4, r29
    psq_l f1, 0x9c(r31), 0, 0
    mr r5, r29
    lfs f2, 0xa4(r31)
    fmuls f17, f7, f0
    stfs f2, 0x1c(r1)
    addi r3, r1, 0xf8
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r30
    lfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, lbl_8087EFB4
    stfs f2, 0x50(r1)
    lfs f0, 0xa8(r31)
    fmuls f0, f0, f17
    stfs f0, 0x54(r1)
    bl fn_800C122C
    stw r3, 0x1dc(r31)
lbl_fn_8008CD60_00000888:
    lwz r3, 0x4(r31)
    rlwinm r4, r3, 0, 9, 9
    subis r0, r4, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_8008CD60_000008B4
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0x10
    bl fn_800BDB58
    b lbl_fn_8008CD60_00000E08
lbl_fn_8008CD60_000008B4:
    rlwinm r0, r3, 0, 30, 30
    li r29, 0x1
    cmplwi r0, 0x2
    li r30, 0x1
    beq lbl_fn_8008CD60_000008DC
    addi r3, r31, 0x164
    bl fn_80476194
    cmpwi r3, 0x0
    bne lbl_fn_8008CD60_000008DC
    li r30, 0x0
lbl_fn_8008CD60_000008DC:
    cmpwi r30, 0x0
    bne lbl_fn_8008CD60_000008F8
    addi r3, r31, 0x164
    bl fn_804761B0
    cmpwi r3, 0x0
    bne lbl_fn_8008CD60_000008F8
    li r29, 0x0
lbl_fn_8008CD60_000008F8:
    cmpwi r29, 0x0
    beq lbl_fn_8008CD60_00000918
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0x0
    bl fn_800BDB58
    b lbl_fn_8008CD60_00000AA4
lbl_fn_8008CD60_00000918:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8008CD60_00000AA4
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8008CD60_0000094C
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0x3
    bl fn_800BDB58
lbl_fn_8008CD60_0000094C:
    lwz r6, 0x4(r31)
    li r3, 0x0
    li r0, 0x1
    rlwinm r4, r6, 0, 21, 21
    cmplwi r4, 0x400
    beq lbl_fn_8008CD60_00000974
    rlwinm r4, r6, 0, 20, 20
    cmplwi r4, 0x800
    beq lbl_fn_8008CD60_00000974
    li r0, 0x0
lbl_fn_8008CD60_00000974:
    cmpwi r0, 0x0
    beq lbl_fn_8008CD60_000009BC
    lwz r5, 0x1dc(r31)
    li r4, 0x1
    cmpwi r5, 0x0
    bne lbl_fn_8008CD60_00000994
    lwz r5, lbl_8087EFB4
    lwz r5, 0x2fc(r5)
lbl_fn_8008CD60_00000994:
    lwz r0, 0x120(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8008CD60_000009B0
    rlwinm r0, r6, 0, 19, 19
    cmplwi r0, 0x1000
    beq lbl_fn_8008CD60_000009B0
    li r4, 0x0
lbl_fn_8008CD60_000009B0:
    cmpwi r4, 0x0
    beq lbl_fn_8008CD60_000009BC
    li r3, 0x1
lbl_fn_8008CD60_000009BC:
    cmpwi r3, 0x0
    beq lbl_fn_8008CD60_000009D8
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0x4
    bl fn_800BDB58
lbl_fn_8008CD60_000009D8:
    lwz r0, 0x4(r31)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8008CD60_00000A10
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8008CD60_00000A10
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0x8
    bl fn_800BDB58
lbl_fn_8008CD60_00000A10:
    lwz r0, 0x4(r31)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8008CD60_00000A48
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8008CD60_00000A48
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0x6
    bl fn_800BDB58
lbl_fn_8008CD60_00000A48:
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_8008CD60_00000A80
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0xa
    bl fn_800BDB58
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0x5
    bl fn_800BDB58
lbl_fn_8008CD60_00000A80:
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8008CD60_00000AA4
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, 0x98(r31)
    li r5, 0x9
    bl fn_800BDB58
lbl_fn_8008CD60_00000AA4:
    lwz r3, lbl_8087EFA8
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008CD60_00000B9C
    li r27, 0x0
    li r30, 0x0
    li r28, 0x0
    b lbl_fn_8008CD60_00000B8C
lbl_fn_8008CD60_00000AC4:
    cmpwi r27, 0x0
    bge lbl_fn_8008CD60_00000AD4
    li r29, 0x0
    b lbl_fn_8008CD60_00000ADC
lbl_fn_8008CD60_00000AD4:
    lwz r0, 0x3c(r31)
    add r29, r0, r30
lbl_fn_8008CD60_00000ADC:
    lwz r3, 0x48(r3)
    addi r4, r1, 0x38
    lfs f0, 0x2c(r29)
    li r5, -0x1
    lwzx r26, r3, r28
    lfs f7, 0x1c(r29)
    lfs f8, 0xc(r29)
    stfs f8, 0x38(r1)
    lwz r3, lbl_8087EEB0
    stfs f7, 0x3c(r1)
    lfs f1, lbl_80880C08
    stfs f0, 0x40(r1)
    lfs f2, 0x98(r31)
    bl fn_80063D3C
    lwz r0, 0x1c(r26)
    cmpwi r0, 0x0
    blt lbl_fn_8008CD60_00000B80
    bge lbl_fn_8008CD60_00000B2C
    li r7, 0x0
    b lbl_fn_8008CD60_00000B38
lbl_fn_8008CD60_00000B2C:
    mulli r0, r0, 0x30
    lwz r3, 0x3c(r31)
    add r7, r3, r0
lbl_fn_8008CD60_00000B38:
    lfs f0, 0x2c(r29)
    addi r4, r1, 0x2c
    lfs f7, 0x1c(r29)
    addi r5, r1, 0x20
    lfs f8, 0xc(r29)
    li r6, -0x1
    stfs f8, 0x20(r1)
    lwz r3, lbl_8087EEB0
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f0, 0x2c(r7)
    lfs f7, 0x1c(r7)
    lfs f8, 0xc(r7)
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x98(r31)
    bl fn_80063764
lbl_fn_8008CD60_00000B80:
    addi r28, r28, 0x4
    addi r27, r27, 0x1
    addi r30, r30, 0x30
lbl_fn_8008CD60_00000B8C:
    lwz r3, 0x16c(r31)
    lwz r0, 0x44(r3)
    cmpw r27, r0
    blt lbl_fn_8008CD60_00000AC4
lbl_fn_8008CD60_00000B9C:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008CD60_00000E08
    psq_l f1, 0x8(r31), 0, 0
    addi r4, r1, 0x68
    psq_l f2, 0x10(r31), 0, 0
    addi r29, r1, 0x58
    psq_l f3, 0x18(r31), 0, 0
    psq_l f4, 0x20(r31), 0, 0
    psq_l f5, 0x28(r31), 0, 0
    psq_l f6, 0x30(r31), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    lwz r7, 0xb0(r31)
    cmpwi r7, 0x0
    blt lbl_fn_8008CD60_00000DA8
    lwz r0, 0xb4(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8008CD60_00000D6C
    mulli r0, r0, 0x30
    lwz r6, 0x3c(r31)
    lfs f21, lbl_80880C08
    addi r3, r1, 0x98
    add r5, r6, r0
    mulli r0, r7, 0x30
    lfs f9, 0x2c(r5)
    lfs f7, 0x28(r5)
    lfs f8, 0x24(r5)
    add r6, r6, r0
    lfs f0, 0x20(r5)
    lfs f11, 0x2c(r6)
    lfs f10, 0x28(r6)
    fadds f31, f11, f9
    lfs f9, 0x24(r6)
    fadds f30, f10, f7
    lfs f7, 0x20(r6)
    fadds f29, f9, f8
    lfs f8, 0x1c(r6)
    fadds f28, f7, f0
    lfs f0, 0x1c(r5)
    lfs f7, 0x18(r6)
    fmuls f11, f31, f21
    fadds f27, f8, f0
    lfs f0, 0x18(r5)
    fadds f26, f7, f0
    lfs f7, 0x14(r6)
    lfs f0, 0x14(r5)
    fmuls f10, f30, f21
    lfs f12, 0x10(r6)
    fmuls f9, f29, f21
    fadds f25, f7, f0
    lfs f0, 0x10(r5)
    lfs f20, 0x8(r6)
    fmuls f8, f28, f21
    fadds f24, f12, f0
    lfs f12, 0x8(r5)
    fadds f22, f20, f12
    lfs f13, 0x4(r6)
    lfs f12, 0x4(r5)
    fmuls f17, f25, f21
    lfs f7, 0xc(r6)
    fadds f13, f13, f12
    lfs f0, 0xc(r5)
    fmuls f18, f22, f21
    stfs f17, 0xac(r1)
    fadds f23, f7, f0
    lfs f20, 0x0(r6)
    lfs f12, 0x0(r5)
    fmuls f0, f26, f21
    fmuls f7, f27, f21
    stfs f18, 0xa0(r1)
    fadds f12, f20, f12
    stfs f0, 0xb0(r1)
    fmuls f20, f24, f21
    fmuls f19, f23, f21
    stfs f7, 0xb4(r1)
    fmuls f17, f13, f21
    fmuls f0, f12, f21
    stfs f20, 0xa8(r1)
    psq_l f4, 0x18(r3), 0, 0
    stfs f19, 0xa4(r1)
    psq_l f3, 0x10(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    stfs f0, 0x98(r1)
    stfs f17, 0x9c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f8, 0xb8(r1)
    stfs f9, 0xbc(r1)
    psq_l f5, 0x20(r3), 0, 0
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    psq_l f6, 0x28(r3), 0, 0
    stfs f12, 0xc8(r1)
    stfs f13, 0xcc(r1)
    stfs f22, 0xd0(r1)
    stfs f23, 0xd4(r1)
    stfs f24, 0xd8(r1)
    stfs f25, 0xdc(r1)
    stfs f26, 0xe0(r1)
    stfs f27, 0xe4(r1)
    stfs f28, 0xe8(r1)
    stfs f29, 0xec(r1)
    stfs f30, 0xf0(r1)
    stfs f31, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    b lbl_fn_8008CD60_00000DA8
lbl_fn_8008CD60_00000D6C:
    mulli r0, r7, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
lbl_fn_8008CD60_00000DA8:
    lfs f7, 0x54(r31)
    addi r30, r1, 0x8
    lfs f0, 0xac(r31)
    mr r4, r30
    psq_l f1, 0x9c(r31), 0, 0
    mr r5, r30
    lfs f2, 0xa4(r31)
    fmuls f17, f7, f0
    stfs f2, 0x10(r1)
    addi r3, r1, 0x68
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r30), 0, 0
    addi r4, r1, 0x58
    lfs f2, 0x10(r1)
    li r5, -0x1
    psq_st f1, 0x0(r29), 0, 0
    lwz r3, lbl_8087EEB0
    stfs f2, 0x60(r1)
    lfs f0, 0xa8(r31)
    fmuls f1, f0, f17
    stfs f1, 0x64(r1)
    lfs f2, 0x98(r31)
    bl fn_80063D3C
lbl_fn_8008CD60_00000E08:
    addi r11, r1, 0x1a0
    psq_l f31, 0x288(r1), 0, 0
    lfd f31, 0x280(r1)
    psq_l f30, 0x278(r1), 0, 0
    lfd f30, 0x270(r1)
    psq_l f29, 0x268(r1), 0, 0
    lfd f29, 0x260(r1)
    psq_l f28, 0x258(r1), 0, 0
    lfd f28, 0x250(r1)
    psq_l f27, 0x248(r1), 0, 0
    lfd f27, 0x240(r1)
    psq_l f26, 0x238(r1), 0, 0
    lfd f26, 0x230(r1)
    psq_l f25, 0x228(r1), 0, 0
    lfd f25, 0x220(r1)
    psq_l f24, 0x218(r1), 0, 0
    lfd f24, 0x210(r1)
    psq_l f23, 0x208(r1), 0, 0
    lfd f23, 0x200(r1)
    psq_l f22, 0x1f8(r1), 0, 0
    lfd f22, 0x1f0(r1)
    psq_l f21, 0x1e8(r1), 0, 0
    lfd f21, 0x1e0(r1)
    psq_l f20, 0x1d8(r1), 0, 0
    lfd f20, 0x1d0(r1)
    psq_l f19, 0x1c8(r1), 0, 0
    lfd f19, 0x1c0(r1)
    psq_l f18, 0x1b8(r1), 0, 0
    lfd f18, 0x1b0(r1)
    psq_l f17, 0x1a8(r1), 0, 0
    lfd f17, 0x1a0(r1)
    bl _restgpr_26
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_8008D6C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x20c(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x8
    bne lbl_fn_8008D6C0_00000F40
    bl fn_8008D78C
    lwz r0, 0x20c(r29)
    extlwi r0, r0, 2, 25
    srawi. r0, r0, 31
    beq lbl_fn_8008D6C0_00000EF8
    lwz r0, 0x50(r29)
    mr r3, r29
    addi r4, r30, 0x15c
    mulli r0, r0, 0x18
    add r5, r29, r0
    lwz r5, 0x178(r5)
    bl fn_80091684
lbl_fn_8008D6C0_00000EF8:
    lwz r0, 0x20c(r29)
    clrlwi. r0, r0, 31
    beq lbl_fn_8008D6C0_00000F40
    li r31, 0x0
    li r30, 0x0
    b lbl_fn_8008D6C0_00000F34
lbl_fn_8008D6C0_00000F10:
    lwz r3, 0x108(r29)
    lwzx r3, r3, r30
    lbz r0, 0x4b(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008D6C0_00000F2C
    lfs f1, lbl_80880C0C
    bl fn_80080048
lbl_fn_8008D6C0_00000F2C:
    addi r30, r30, 0x4
    addi r31, r31, 0x1
lbl_fn_8008D6C0_00000F34:
    lwz r0, 0x104(r29)
    cmplw r31, r0
    blt lbl_fn_8008D6C0_00000F10
lbl_fn_8008D6C0_00000F40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8008D784(void)
{
    nofralloc
    addi r3, r3, 0x8
    blr
}

asm void fn_8008D78C(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r5, r1, 0x1e0
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stfd f30, 0x350(r1)
    psq_st f30, 0x358(r1), 0, 0
    stfd f29, 0x340(r1)
    psq_st f29, 0x348(r1), 0, 0
    stfd f28, 0x330(r1)
    psq_st f28, 0x338(r1), 0, 0
    stfd f27, 0x320(r1)
    psq_st f27, 0x328(r1), 0, 0
    stfd f26, 0x310(r1)
    psq_st f26, 0x318(r1), 0, 0
    stfd f25, 0x300(r1)
    psq_st f25, 0x308(r1), 0, 0
    stfd f24, 0x2f0(r1)
    psq_st f24, 0x2f8(r1), 0, 0
    stfd f23, 0x2e0(r1)
    psq_st f23, 0x2e8(r1), 0, 0
    stfd f22, 0x2d0(r1)
    psq_st f22, 0x2d8(r1), 0, 0
    stfd f21, 0x2c0(r1)
    psq_st f21, 0x2c8(r1), 0, 0
    stfd f20, 0x2b0(r1)
    psq_st f20, 0x2b8(r1), 0, 0
    stfd f19, 0x2a0(r1)
    psq_st f19, 0x2a8(r1), 0, 0
    stfd f18, 0x290(r1)
    psq_st f18, 0x298(r1), 0, 0
    stfd f17, 0x280(r1)
    psq_st f17, 0x288(r1), 0, 0
    stw r31, 0x27c(r1)
    mr r31, r4
    stw r30, 0x278(r1)
    mr r30, r3
    stw r29, 0x274(r1)
    addi r29, r1, 0xe0
    stw r28, 0x270(r1)
    psq_l f1, 0x8(r3), 0, 0
    psq_l f2, 0x10(r3), 0, 0
    psq_l f3, 0x18(r3), 0, 0
    psq_l f4, 0x20(r3), 0, 0
    psq_l f5, 0x28(r3), 0, 0
    psq_l f6, 0x30(r3), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    lwz r8, 0xb0(r3)
    cmpwi r8, 0x0
    blt lbl_fn_8008D78C_000011FC
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8008D78C_000011C0
    mulli r0, r0, 0x30
    lwz r7, 0x3c(r3)
    lfs f20, lbl_80880C08
    addi r4, r1, 0x210
    add r6, r7, r0
    mulli r0, r8, 0x30
    lfs f9, 0x2c(r6)
    lfs f7, 0x28(r6)
    lfs f8, 0x24(r6)
    add r7, r7, r0
    lfs f0, 0x20(r6)
    lfs f11, 0x2c(r7)
    lfs f10, 0x28(r7)
    fadds f22, f11, f9
    lfs f9, 0x24(r7)
    fadds f23, f10, f7
    lfs f7, 0x20(r7)
    fadds f24, f9, f8
    lfs f8, 0x1c(r7)
    fadds f25, f7, f0
    lfs f0, 0x1c(r6)
    lfs f7, 0x18(r7)
    fmuls f11, f22, f20
    fadds f26, f8, f0
    lfs f0, 0x18(r6)
    fadds f27, f7, f0
    lfs f7, 0x14(r7)
    lfs f0, 0x14(r6)
    fmuls f10, f23, f20
    lfs f12, 0x10(r7)
    fmuls f9, f24, f20
    fadds f28, f7, f0
    lfs f0, 0x10(r6)
    lfs f21, 0x8(r7)
    fmuls f8, f25, f20
    fadds f29, f12, f0
    lfs f12, 0x8(r6)
    fadds f31, f21, f12
    lfs f13, 0x4(r7)
    lfs f12, 0x4(r6)
    fmuls f17, f28, f20
    lfs f7, 0xc(r7)
    fadds f13, f13, f12
    lfs f0, 0xc(r6)
    fmuls f19, f31, f20
    stfs f17, 0x224(r1)
    fmuls f17, f29, f20
    fadds f30, f7, f0
    fmuls f0, f27, f20
    stfs f17, 0x220(r1)
    fmuls f7, f26, f20
    lfs f21, 0x0(r7)
    lfs f12, 0x0(r6)
    fmuls f18, f30, f20
    fadds f12, f21, f12
    stfs f0, 0x228(r1)
    fmuls f21, f13, f20
    psq_l f3, 0x10(r4), 0, 0
    stfs f7, 0x22c(r1)
    fmuls f0, f12, f20
    psq_l f4, 0x18(r4), 0, 0
    stfs f0, 0x210(r1)
    stfs f21, 0x214(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f19, 0x218(r1)
    stfs f18, 0x21c(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f8, 0x230(r1)
    stfs f9, 0x234(r1)
    psq_l f5, 0x20(r4), 0, 0
    stfs f10, 0x238(r1)
    stfs f11, 0x23c(r1)
    psq_l f6, 0x28(r4), 0, 0
    stfs f12, 0x240(r1)
    stfs f13, 0x244(r1)
    stfs f31, 0x248(r1)
    stfs f30, 0x24c(r1)
    stfs f29, 0x250(r1)
    stfs f28, 0x254(r1)
    stfs f27, 0x258(r1)
    stfs f26, 0x25c(r1)
    stfs f25, 0x260(r1)
    stfs f24, 0x264(r1)
    stfs f23, 0x268(r1)
    stfs f22, 0x26c(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    b lbl_fn_8008D78C_000011FC
lbl_fn_8008D78C_000011C0:
    mulli r0, r8, 0x30
    lwz r4, 0x3c(r3)
    add r4, r4, r0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
lbl_fn_8008D78C_000011FC:
    lfs f7, 0x54(r3)
    addi r28, r1, 0x74
    lfs f0, 0xac(r3)
    mr r4, r28
    psq_l f1, 0x9c(r30), 0, 0
    mr r5, r28
    lfs f2, 0xa4(r30)
    fmuls f17, f7, f0
    stfs f2, 0x7c(r1)
    addi r3, r1, 0x1e0
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r28), 0, 0
    li r3, 0x0
    lfs f2, 0x7c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xe8(r1)
    lfs f0, 0xa8(r30)
    fmuls f0, f0, f17
    stfs f0, 0xec(r1)
    lwz r5, 0x200(r30)
    cmpwi r5, 0x0
    beq lbl_fn_8008D78C_00001268
    lwz r0, 0x204(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8008D78C_00001268
    li r3, 0x1
lbl_fn_8008D78C_00001268:
    cmpwi r3, 0x0
    beq lbl_fn_8008D78C_00001288
    lwz r4, 0x204(r30)
    lwz r3, 0xc(r5)
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_fn_8008D78C_0000128C
lbl_fn_8008D78C_00001288:
    li r3, 0x1
lbl_fn_8008D78C_0000128C:
    lwz r0, 0x20c(r30)
    rlwimi r0, r3, 6, 25, 25
    stw r0, 0x20c(r30)
    extlwi r0, r0, 2, 25
    srawi. r0, r0, 31
    beq lbl_fn_8008D78C_0000161C
    addi r3, r31, 0x204
    addi r4, r1, 0xe0
    bl fn_8004FF58
    cmpwi r3, 0x0
    bne lbl_fn_8008D78C_0000161C
    lwz r3, 0x20c(r30)
    rlwinm r3, r3, 0, 26, 24
    stw r3, 0x20c(r30)
    extlwi r0, r3, 2, 26
    srawi. r0, r0, 31
    beq lbl_fn_8008D78C_0000161C
    extlwi r0, r3, 2, 27
    srawi. r0, r0, 31
    beq lbl_fn_8008D78C_0000161C
    lwz r8, 0x1cc(r30)
    addi r3, r1, 0x2c
    addi r7, r1, 0x38
    lfs f0, lbl_80880C08
    lfs f2, 0x24(r8)
    addi r6, r1, 0x14
    stfs f2, 0x34(r1)
    addi r28, r1, 0xd0
    psq_l f1, 0x1c(r8), 0, 0
    addi r5, r1, 0x50
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x5c
    psq_l f1, 0x10(r8), 0, 0
    addi r3, r1, 0x44
    lfs f2, 0x18(r8)
    lfs f7, 0x34(r1)
    psq_st f1, 0x0(r7), 0, 0
    fadds f13, f7, f2
    lfs f9, 0x30(r1)
    lfs f7, 0x3c(r1)
    lfs f8, 0x2c(r1)
    fadds f12, f9, f7
    lfs f7, 0x38(r1)
    fmuls f11, f13, f0
    stfs f2, 0x40(r1)
    fadds f8, f8, f7
    fmuls f7, f12, f0
    fmr f2, f11
    stfs f8, 0x20(r1)
    fmuls f0, f8, f0
    stfs f7, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xd8(r1)
    lfs f2, 0x24(r8)
    stfs f2, 0x58(r1)
    lfs f2, 0x18(r8)
    psq_l f1, 0x1c(r8), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    frsp f0, f2
    psq_l f1, 0x10(r8), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x58(r1)
    lfs f9, 0x54(r1)
    fsubs f10, f7, f0
    lfs f8, 0x60(r1)
    lfs f7, 0x50(r1)
    lfs f0, 0x5c(r1)
    fsubs f8, f9, f8
    stfs f12, 0x24(r1)
    fsubs f0, f7, f0
    stfs f13, 0x28(r1)
    stfs f11, 0x1c(r1)
    stfs f2, 0x64(r1)
    stfs f0, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f10, 0x4c(r1)
    bl fn_805F9940
    lfs f0, lbl_80880C08
    addi r4, r1, 0x150
    fmuls f7, f0, f1
    stfs f7, 0xdc(r1)
    psq_l f1, 0x8(r30), 0, 0
    psq_l f2, 0x10(r30), 0, 0
    psq_l f3, 0x18(r30), 0, 0
    psq_l f4, 0x20(r30), 0, 0
    psq_l f5, 0x28(r30), 0, 0
    psq_l f6, 0x30(r30), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    lwz r7, 0xb0(r30)
    cmpwi r7, 0x0
    blt lbl_fn_8008D78C_000015C8
    lwz r0, 0xb4(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8008D78C_0000158C
    mulli r0, r0, 0x30
    lwz r6, 0x3c(r30)
    addi r3, r1, 0x180
    add r5, r6, r0
    mulli r0, r7, 0x30
    lfs f10, 0x2c(r5)
    lfs f8, 0x28(r5)
    lfs f9, 0x24(r5)
    add r6, r6, r0
    lfs f7, 0x20(r5)
    lfs f12, 0x2c(r6)
    lfs f11, 0x28(r6)
    fadds f21, f12, f10
    lfs f10, 0x24(r6)
    fadds f31, f11, f8
    lfs f8, 0x20(r6)
    fadds f30, f10, f9
    lfs f9, 0x1c(r6)
    fadds f29, f8, f7
    lfs f7, 0x1c(r5)
    lfs f8, 0x18(r6)
    fmuls f12, f21, f0
    fadds f28, f9, f7
    lfs f7, 0x18(r5)
    fadds f27, f8, f7
    lfs f8, 0x14(r6)
    lfs f7, 0x14(r5)
    fmuls f11, f31, f0
    lfs f13, 0x10(r6)
    fmuls f10, f30, f0
    fadds f26, f8, f7
    lfs f7, 0x10(r5)
    lfs f20, 0x8(r6)
    fmuls f9, f29, f0
    fadds f25, f13, f7
    lfs f13, 0x8(r5)
    fadds f23, f20, f13
    lfs f22, 0x4(r6)
    lfs f13, 0x4(r5)
    fmuls f17, f26, f0
    fmuls f19, f25, f0
    lfs f8, 0xc(r6)
    fadds f22, f22, f13
    lfs f7, 0xc(r5)
    stfs f17, 0x194(r1)
    fmuls f17, f23, f0
    fadds f24, f8, f7
    lfs f20, 0x0(r6)
    lfs f13, 0x0(r5)
    fmuls f7, f27, f0
    fmuls f8, f28, f0
    stfs f19, 0x190(r1)
    fadds f13, f20, f13
    fmuls f18, f24, f0
    stfs f7, 0x198(r1)
    fmuls f7, f22, f0
    fmuls f0, f13, f0
    stfs f8, 0x19c(r1)
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    stfs f0, 0x180(r1)
    stfs f7, 0x184(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f17, 0x188(r1)
    stfs f18, 0x18c(r1)
    psq_l f2, 0x8(r3), 0, 0
    stfs f9, 0x1a0(r1)
    stfs f10, 0x1a4(r1)
    psq_l f5, 0x20(r3), 0, 0
    stfs f11, 0x1a8(r1)
    stfs f12, 0x1ac(r1)
    psq_l f6, 0x28(r3), 0, 0
    stfs f13, 0x1b0(r1)
    stfs f22, 0x1b4(r1)
    stfs f23, 0x1b8(r1)
    stfs f24, 0x1bc(r1)
    stfs f25, 0x1c0(r1)
    stfs f26, 0x1c4(r1)
    stfs f27, 0x1c8(r1)
    stfs f28, 0x1cc(r1)
    stfs f29, 0x1d0(r1)
    stfs f30, 0x1d4(r1)
    stfs f31, 0x1d8(r1)
    stfs f21, 0x1dc(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    b lbl_fn_8008D78C_000015C8
lbl_fn_8008D78C_0000158C:
    mulli r0, r7, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
lbl_fn_8008D78C_000015C8:
    addi r29, r1, 0x68
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xd8(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    mr r5, r29
    addi r3, r1, 0x150
    stfs f2, 0x70(r1)
    bl fn_805F93C0
    psq_l f1, 0x0(r29), 0, 0
    addi r3, r31, 0x204
    lfs f2, 0x70(r1)
    addi r4, r1, 0xd0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xd8(r1)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_8008D78C_0000161C
    lwz r0, 0x20c(r30)
    ori r0, r0, 0x40
    stw r0, 0x20c(r30)
lbl_fn_8008D78C_0000161C:
    lwz r0, 0x20c(r30)
    extlwi r0, r0, 2, 25
    srawi. r0, r0, 31
    beq lbl_fn_8008D78C_000017A4
    lwz r0, 0x4(r30)
    li r28, 0x1
    li r29, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8008D78C_00001658
    addi r3, r30, 0x164
    bl fn_80476194
    cmpwi r3, 0x0
    bne lbl_fn_8008D78C_00001658
    li r29, 0x0
lbl_fn_8008D78C_00001658:
    cmpwi r29, 0x0
    bne lbl_fn_8008D78C_00001674
    addi r3, r30, 0x164
    bl fn_804761B0
    cmpwi r3, 0x0
    bne lbl_fn_8008D78C_00001674
    li r28, 0x0
lbl_fn_8008D78C_00001674:
    cmpwi r28, 0x0
    bne lbl_fn_8008D78C_000017A4
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1d0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008D78C_000018B8
    lwz r0, 0x2f8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8008D78C_000018B8
    lwz r0, 0x4(r30)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    beq lbl_fn_8008D78C_000018B8
    lwz r0, 0x4(r30)
    clrlwi r4, r0, 31
    subfic r3, r4, 0x1
    subi r0, r4, 0x1
    or r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_8008D78C_00001754
    lfs f9, 0xec(r1)
    addi r4, r1, 0xb0
    lfs f8, 0xe8(r1)
    addi r3, r1, 0x138
    lfs f7, 0xe4(r1)
    addi r6, r1, 0x98
    fsubs f10, f8, f9
    lfs f0, 0xe0(r1)
    fsubs f11, f7, f9
    addi r5, r1, 0x144
    fsubs f12, f0, f9
    stfs f9, 0xa4(r1)
    fadds f8, f8, f9
    stfs f12, 0xb0(r1)
    fadds f7, f7, f9
    fadds f0, f0, f9
    stfs f11, 0xb4(r1)
    fmr f2, f10
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x140(r1)
    fmr f2, f8
    stfs f0, 0x98(r1)
    stfs f7, 0x9c(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f9, 0xa8(r1)
    stfs f9, 0xac(r1)
    stfs f10, 0xb8(r1)
    stfs f9, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f8, 0xa0(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x14c(r1)
    b lbl_fn_8008D78C_00001788
lbl_fn_8008D78C_00001754:
    mr r4, r30
    addi r3, r1, 0x108
    bl fn_80095300
    addi r4, r1, 0x108
    lfs f2, 0x110(r1)
    addi r3, r1, 0x138
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0xc(r4), 0, 0
    stfs f2, 0x140(r1)
    lfs f2, 0x11c(r1)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14c(r1)
lbl_fn_8008D78C_00001788:
    lwz r3, lbl_8087EFB4
    addi r4, r1, 0x138
    bl fn_800C0A50
    lwz r0, 0x20c(r30)
    rlwimi r0, r3, 6, 25, 25
    stw r0, 0x20c(r30)
    b lbl_fn_8008D78C_000018B8
lbl_fn_8008D78C_000017A4:
    lwz r0, 0x20c(r30)
    extlwi r0, r0, 2, 25
    srawi. r0, r0, 31
    beq lbl_fn_8008D78C_000018B8
    lwz r0, 0x4(r30)
    li r28, 0x1
    li r29, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8008D78C_000017E0
    addi r3, r30, 0x164
    bl fn_80476194
    cmpwi r3, 0x0
    bne lbl_fn_8008D78C_000017E0
    li r29, 0x0
lbl_fn_8008D78C_000017E0:
    cmpwi r29, 0x0
    bne lbl_fn_8008D78C_000017FC
    addi r3, r30, 0x164
    bl fn_804761B0
    cmpwi r3, 0x0
    bne lbl_fn_8008D78C_000017FC
    li r28, 0x0
lbl_fn_8008D78C_000017FC:
    cmpwi r28, 0x0
    beq lbl_fn_8008D78C_000018B8
    lfs f7, 0x114(r31)
    addi r3, r1, 0x8
    lfs f0, 0xe8(r1)
    lfs f9, 0x110(r31)
    fsubs f10, f7, f0
    lfs f8, 0xe4(r1)
    lfs f7, 0x10c(r31)
    lfs f0, 0xe0(r1)
    fsubs f8, f9, f8
    stfs f10, 0x10(r1)
    fsubs f0, f7, f0
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    lfs f0, 0xec(r1)
    lwz r3, lbl_8087EFA8
    fsubs f7, f1, f0
    lfs f0, 0x1ec(r3)
    fcmpo cr0, f7, f0
    ble lbl_fn_8008D78C_00001864
    lwz r0, 0x20c(r30)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x20c(r30)
    b lbl_fn_8008D78C_000018B8
lbl_fn_8008D78C_00001864:
    mr r4, r30
    addi r3, r1, 0xf0
    bl fn_80095300
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_8006FEBC
    lfs f8, 0x12c(r1)
    lfs f0, 0x120(r1)
    lfs f7, 0x130(r1)
    fsubs f9, f8, f0
    lfs f0, 0x124(r1)
    lwz r3, lbl_8087EFA8
    fsubs f0, f7, f0
    lfs f8, 0x1f0(r3)
    fmuls f7, f8, f8
    fmuls f0, f9, f0
    fcmpo cr0, f0, f7
    bge lbl_fn_8008D78C_000018B8
    lwz r0, 0x20c(r30)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x20c(r30)
lbl_fn_8008D78C_000018B8:
    lwz r0, 0x20c(r30)
    extlwi r0, r0, 2, 25
    srawi. r0, r0, 31
    bne lbl_fn_8008D78C_000019C4
    lwz r6, 0x4(r30)
    li r3, 0x0
    li r0, 0x1
    rlwinm r4, r6, 0, 21, 21
    cmplwi r4, 0x400
    beq lbl_fn_8008D78C_000018F0
    rlwinm r4, r6, 0, 20, 20
    cmplwi r4, 0x800
    beq lbl_fn_8008D78C_000018F0
    li r0, 0x0
lbl_fn_8008D78C_000018F0:
    cmpwi r0, 0x0
    beq lbl_fn_8008D78C_00001938
    lwz r5, 0x1dc(r30)
    li r4, 0x1
    cmpwi r5, 0x0
    bne lbl_fn_8008D78C_00001910
    lwz r5, lbl_8087EFB4
    lwz r5, 0x2fc(r5)
lbl_fn_8008D78C_00001910:
    lwz r0, 0x120(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8008D78C_0000192C
    rlwinm r0, r6, 0, 19, 19
    cmplwi r0, 0x1000
    beq lbl_fn_8008D78C_0000192C
    li r4, 0x0
lbl_fn_8008D78C_0000192C:
    cmpwi r4, 0x0
    beq lbl_fn_8008D78C_00001938
    li r3, 0x1
lbl_fn_8008D78C_00001938:
    cmpwi r3, 0x0
    beq lbl_fn_8008D78C_000019C4
    lwz r0, 0x4(r30)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_8008D78C_000019C4
    lwz r6, 0x1dc(r30)
    cmpwi r6, 0x0
    bne lbl_fn_8008D78C_00001964
    lwz r3, lbl_8087EFB4
    lwz r6, 0x2fc(r3)
lbl_fn_8008D78C_00001964:
    addi r3, r1, 0xe0
    addi r28, r1, 0x80
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r28
    lfs f2, 0xe8(r1)
    mr r5, r28
    psq_st f1, 0x0(r28), 0, 0
    addi r3, r6, 0x124
    stfs f2, 0x88(r1)
    bl fn_805F93C0
    lfs f2, 0x88(r1)
    addi r4, r1, 0xc0
    psq_l f1, 0x0(r28), 0, 0
    addi r3, r31, 0x204
    lfs f0, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc8(r1)
    stfs f0, 0xcc(r1)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_8008D78C_000019C4
    lwz r0, 0x20c(r30)
    ori r0, r0, 0x40
    stw r0, 0x20c(r30)
lbl_fn_8008D78C_000019C4:
    lwz r0, 0x20c(r30)
    extlwi r0, r0, 2, 25
    srawi. r0, r0, 31
    beq lbl_fn_8008D78C_000019F4
    lwz r0, 0x4(r30)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8008D78C_000019F4
    addis r3, r31, 0x5
    li r0, 0x1
    stw r0, 0x4960(r3)
lbl_fn_8008D78C_000019F4:
    lwz r0, 0x4(r30)
    rlwinm r3, r0, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_8008D78C_00001A14
    lwz r0, 0x20c(r30)
    ori r0, r0, 0x40
    stw r0, 0x20c(r30)
lbl_fn_8008D78C_00001A14:
    lwz r0, 0x374(r1)
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    psq_l f30, 0x358(r1), 0, 0
    lfd f30, 0x350(r1)
    psq_l f29, 0x348(r1), 0, 0
    lfd f29, 0x340(r1)
    psq_l f28, 0x338(r1), 0, 0
    lfd f28, 0x330(r1)
    psq_l f27, 0x328(r1), 0, 0
    lfd f27, 0x320(r1)
    psq_l f26, 0x318(r1), 0, 0
    lfd f26, 0x310(r1)
    psq_l f25, 0x308(r1), 0, 0
    lfd f25, 0x300(r1)
    psq_l f24, 0x2f8(r1), 0, 0
    lfd f24, 0x2f0(r1)
    psq_l f23, 0x2e8(r1), 0, 0
    lfd f23, 0x2e0(r1)
    psq_l f22, 0x2d8(r1), 0, 0
    lfd f22, 0x2d0(r1)
    psq_l f21, 0x2c8(r1), 0, 0
    lfd f21, 0x2c0(r1)
    psq_l f20, 0x2b8(r1), 0, 0
    lfd f20, 0x2b0(r1)
    psq_l f19, 0x2a8(r1), 0, 0
    lfd f19, 0x2a0(r1)
    psq_l f18, 0x298(r1), 0, 0
    lfd f18, 0x290(r1)
    psq_l f17, 0x288(r1), 0, 0
    lfd f17, 0x280(r1)
    lwz r31, 0x27c(r1)
    lwz r30, 0x278(r1)
    lwz r29, 0x274(r1)
    lwz r28, 0x270(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}
