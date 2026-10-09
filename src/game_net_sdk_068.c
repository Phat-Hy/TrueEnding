#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80725300(void);
extern void fn_80725310(void);
extern void fn_807257B0(void);
extern void fn_807257C0(void);
extern void fn_80726B50(void);
extern void fn_80727600(void);
extern void fn_8072BD60(void);
extern void fn_8072C330(void);

/* External data declarations */
extern u8 lbl_8087D6A0[];
extern u8 lbl_8087D6AC[];

/* Small data declarations */
extern u32 lbl_8088057C;
extern u32 lbl_80880584;
extern u32 lbl_80880588;
extern u32 lbl_80880589;
extern u32 lbl_8088937C;
extern u32 lbl_80889388;

/* Function declarations */
void pad_03_8072CC78_text(void);
void fn_8072CC80(void);
void fn_8072D160(void);
void fn_8072D180(void);

asm void pad_03_8072CC78_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_8072CC80(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x5c(r3)
    mr r28, r4
    lfs f31, lbl_8088937C
    mr r27, r3
    andi. r4, r0, 0x333
    mr r29, r5
    fmr f2, f31
    mr r30, r6
    mr r31, r7
    cmplwi r4, 0x300
    beq lbl_fn_8072CC80_0000017C
    cmpwi r4, 0x0
    beq lbl_fn_8072CC80_0000017C
    stfs f31, 0x30(r1)
    mr r5, r30
    mr r6, r31
    addi r4, r1, 0x30
    stfs f31, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f31, 0x3c(r1)
    lwz r7, 0x0(r3)
    stw r7, 0x108(r1)
    lwz r7, 0x4(r3)
    stw r7, 0x10c(r1)
    lwz r7, 0x8(r3)
    stw r7, 0x110(r1)
    lwz r7, 0xc(r3)
    stw r7, 0x114(r1)
    lwz r7, 0x10(r3)
    stw r7, 0x118(r1)
    lwz r7, 0x14(r3)
    stw r7, 0x11c(r1)
    lwz r7, 0x18(r3)
    stw r7, 0x120(r1)
    lwz r7, 0x1c(r3)
    stw r7, 0x124(r1)
    lwz r7, 0x20(r3)
    stw r7, 0x128(r1)
    lwz r8, 0x24(r3)
    lwz r7, 0x28(r3)
    stw r7, 0x130(r1)
    stw r8, 0x12c(r1)
    lwz r8, 0x2c(r3)
    lwz r7, 0x30(r3)
    stw r7, 0x138(r1)
    stw r8, 0x134(r1)
    lwz r7, 0x34(r3)
    stw r7, 0x13c(r1)
    lwz r8, 0x38(r3)
    lwz r7, 0x3c(r3)
    stw r7, 0x144(r1)
    stw r8, 0x140(r1)
    lhz r7, 0x40(r3)
    sth r7, 0x148(r1)
    lbz r7, 0x42(r3)
    stb r7, 0x14a(r1)
    lbz r7, 0x43(r3)
    stb r7, 0x14b(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x14c(r1)
    lwz r7, 0x48(r3)
    stw r7, 0x150(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x154(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x158(r1)
    lfs f0, 0x54(r3)
    stfs f0, 0x15c(r1)
    lwz r7, 0x58(r3)
    stw r7, 0x160(r1)
    stw r0, 0x164(r1)
    lwz r0, 0x60(r3)
    addi r3, r1, 0x108
    stw r0, 0x168(r1)
    bl fn_8072C330
    addi r3, r1, 0x108
    li r4, 0x0
    bl fn_80726B50
    lfs f3, 0x30(r1)
    lfs f2, 0x38(r1)
    lfs f1, 0x34(r1)
    lfs f0, 0x3c(r1)
    fadds f31, f3, f2
    fadds f2, f1, f0
lbl_fn_8072CC80_0000017C:
    lwz r0, 0x5c(r27)
    rlwinm r0, r0, 0, 26, 27
    cmplwi r0, 0x10
    bne lbl_fn_8072CC80_000001A4
    lfs f1, lbl_80889388
    lfs f0, 0x0(r28)
    fmuls f1, f31, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r28)
    b lbl_fn_8072CC80_000001B8
lbl_fn_8072CC80_000001A4:
    cmplwi r0, 0x20
    bne lbl_fn_8072CC80_000001B8
    lfs f0, 0x0(r28)
    fsubs f0, f0, f31
    stfs f0, 0x0(r28)
lbl_fn_8072CC80_000001B8:
    lwz r0, 0x5c(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    bne lbl_fn_8072CC80_000001E0
    lfs f1, lbl_80889388
    lfs f0, 0x0(r29)
    fmuls f1, f2, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r29)
    b lbl_fn_8072CC80_000001F4
lbl_fn_8072CC80_000001E0:
    cmplwi r0, 0x200
    bne lbl_fn_8072CC80_000001F4
    lfs f0, 0x0(r29)
    fsubs f0, f0, f2
    stfs f0, 0x0(r29)
lbl_fn_8072CC80_000001F4:
    lwz r0, 0x5c(r27)
    clrlwi r3, r0, 30
    cmplwi r3, 0x1
    bne lbl_fn_8072CC80_00000340
    lfs f1, lbl_8088937C
    mr r6, r31
    stw r30, 0xc(r1)
    addi r3, r1, 0xa4
    addi r4, r1, 0x20
    addi r5, r1, 0xc
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    lwz r7, 0x0(r27)
    stw r7, 0xa4(r1)
    lwz r7, 0x4(r27)
    stw r7, 0xa8(r1)
    lwz r7, 0x8(r27)
    stw r7, 0xac(r1)
    lwz r7, 0xc(r27)
    stw r7, 0xb0(r1)
    lwz r7, 0x10(r27)
    stw r7, 0xb4(r1)
    lwz r7, 0x14(r27)
    stw r7, 0xb8(r1)
    lwz r7, 0x18(r27)
    stw r7, 0xbc(r1)
    lwz r7, 0x1c(r27)
    stw r7, 0xc0(r1)
    lwz r7, 0x20(r27)
    stw r7, 0xc4(r1)
    lwz r8, 0x24(r27)
    lwz r7, 0x28(r27)
    stw r7, 0xcc(r1)
    stw r8, 0xc8(r1)
    lwz r8, 0x2c(r27)
    lwz r7, 0x30(r27)
    stw r7, 0xd4(r1)
    stw r8, 0xd0(r1)
    lwz r7, 0x34(r27)
    stw r7, 0xd8(r1)
    lwz r8, 0x38(r27)
    lwz r7, 0x3c(r27)
    stw r7, 0xe0(r1)
    stw r8, 0xdc(r1)
    lhz r7, 0x40(r27)
    sth r7, 0xe4(r1)
    lbz r7, 0x42(r27)
    stb r7, 0xe6(r1)
    lbz r7, 0x43(r27)
    stb r7, 0xe7(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0xe8(r1)
    lwz r7, 0x48(r27)
    stw r7, 0xec(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0xf0(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0xf4(r1)
    lfs f0, 0x54(r27)
    stfs f0, 0xf8(r1)
    lwz r7, 0x58(r27)
    stw r7, 0xfc(r1)
    stw r0, 0x100(r1)
    lwz r0, 0x60(r27)
    stw r0, 0x104(r1)
    stfs f1, 0xd0(r1)
    stfs f1, 0xd4(r1)
    bl fn_8072BD60
    lfs f1, 0x28(r1)
    addi r3, r1, 0xa4
    lfs f0, 0x20(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_80726B50
    fsubs f2, f31, f30
    lfs f1, lbl_80889388
    lfs f0, 0x0(r28)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x2c(r27)
    b lbl_fn_8072CC80_00000484
lbl_fn_8072CC80_00000340:
    cmplwi r3, 0x2
    bne lbl_fn_8072CC80_0000047C
    lfs f1, lbl_8088937C
    mr r6, r31
    stw r30, 0x8(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    lwz r7, 0x0(r27)
    stw r7, 0x40(r1)
    lwz r7, 0x4(r27)
    stw r7, 0x44(r1)
    lwz r7, 0x8(r27)
    stw r7, 0x48(r1)
    lwz r7, 0xc(r27)
    stw r7, 0x4c(r1)
    lwz r7, 0x10(r27)
    stw r7, 0x50(r1)
    lwz r7, 0x14(r27)
    stw r7, 0x54(r1)
    lwz r7, 0x18(r27)
    stw r7, 0x58(r1)
    lwz r7, 0x1c(r27)
    stw r7, 0x5c(r1)
    lwz r7, 0x20(r27)
    stw r7, 0x60(r1)
    lwz r8, 0x24(r27)
    lwz r7, 0x28(r27)
    stw r7, 0x68(r1)
    stw r8, 0x64(r1)
    lwz r8, 0x2c(r27)
    lwz r7, 0x30(r27)
    stw r7, 0x70(r1)
    stw r8, 0x6c(r1)
    lwz r7, 0x34(r27)
    stw r7, 0x74(r1)
    lwz r8, 0x38(r27)
    lwz r7, 0x3c(r27)
    stw r7, 0x7c(r1)
    stw r8, 0x78(r1)
    lhz r7, 0x40(r27)
    sth r7, 0x80(r1)
    lbz r7, 0x42(r27)
    stb r7, 0x82(r1)
    lbz r7, 0x43(r27)
    stb r7, 0x83(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0x84(r1)
    lwz r7, 0x48(r27)
    stw r7, 0x88(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0x8c(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0x90(r1)
    lfs f0, 0x54(r27)
    stfs f0, 0x94(r1)
    lwz r7, 0x58(r27)
    stw r7, 0x98(r1)
    stw r0, 0x9c(r1)
    lwz r0, 0x60(r27)
    stw r0, 0xa0(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    bl fn_8072BD60
    lfs f1, 0x18(r1)
    addi r3, r1, 0x40
    lfs f0, 0x10(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_80726B50
    fsubs f1, f31, f30
    lfs f0, 0x0(r28)
    fadds f0, f0, f1
    stfs f0, 0x2c(r27)
    b lbl_fn_8072CC80_00000484
lbl_fn_8072CC80_0000047C:
    lfs f0, 0x0(r28)
    stfs f0, 0x2c(r27)
lbl_fn_8072CC80_00000484:
    lwz r0, 0x5c(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x300
    bne lbl_fn_8072CC80_000004A0
    lfs f0, 0x0(r29)
    stfs f0, 0x30(r27)
    b lbl_fn_8072CC80_000004B4
lbl_fn_8072CC80_000004A0:
    mr r3, r27
    bl fn_80727600
    lfs f0, 0x0(r29)
    fadds f0, f0, f1
    stfs f0, 0x30(r27)
lbl_fn_8072CC80_000004B4:
    fmr f1, f31
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    addi r11, r1, 0x190
    bl _restgpr_27
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_8072D160(void)
{
    nofralloc
    lwz r0, 0x5c(r3)
    and r0, r0, r4
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8072D180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_80880588
    extsb. r0, r0
    bne lbl_fn_8072D180_00000548
    la r3, lbl_8088057C
    bl fn_80725300
    lis r4, fn_80725310@ha
    lis r5, lbl_8087D6A0@ha
    addi r4, r4, fn_80725310@l
    la r3, lbl_8088057C
    addi r5, r5, lbl_8087D6A0@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_80880588
lbl_fn_8072D180_00000548:
    lbz r0, lbl_80880589
    extsb. r0, r0
    bne lbl_fn_8072D180_0000057C
    la r3, lbl_80880584
    bl fn_807257B0
    lis r4, fn_807257C0@ha
    lis r5, lbl_8087D6AC@ha
    addi r4, r4, fn_807257C0@l
    la r3, lbl_80880584
    addi r5, r5, lbl_8087D6AC@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_80880589
lbl_fn_8072D180_0000057C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
