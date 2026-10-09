#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void fn_80044E0C(void);
extern void fn_80050A1C(void);
extern void fn_80061824(void);
extern void fn_80063D3C(void);
extern void fn_8006EF48(void);
extern void fn_8006F2F0(void);
extern void fn_8008CD60(void);
extern void fn_80092814(void);
extern void fn_8009373C(void);
extern void fn_80094F98(void);
extern void fn_800BFAC8(void);
extern void fn_800DD3FC(void);
extern void fn_8010A4A8(void);
extern void fn_8011D21C(void);
extern void fn_801333A4(void);
extern void fn_80134290(void);
extern void fn_8014FB60(void);
extern void fn_8021BE98(void);
extern void fn_80370174(void);
extern void fn_80481654(void);
extern void fn_804918A4(void);
extern void fn_80565F38(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9920(void);
extern void fn_805F99F0(void);
extern void fn_805F9A50(void);
extern void fn_806868C4(void);
extern void fn_8072D210(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_8077A998[];
extern u8 lbl_807375C0[];
extern u8 lbl_80737808[];
extern u8 lbl_80737A9C[];
extern u8 lbl_8077C6F8[];
extern u8 lbl_807C7B28[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F540;
extern u32 lbl_8087F558;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_808813D0;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881974;
extern u32 lbl_80881980;
extern u32 lbl_80881994;
extern u32 lbl_808819A0;
extern u32 lbl_808819A4;
extern u32 lbl_808819A8;
extern u32 lbl_808819AC;
extern u32 lbl_808819BC;
extern u32 lbl_808819D4;
extern u32 lbl_808819E0;
extern u32 lbl_808819FC;
extern u32 lbl_80881A20;
extern u32 lbl_80881A88;
extern u32 lbl_80881AA4;
extern u32 lbl_80881AD8;
extern u32 lbl_80881ADC;
extern u32 lbl_80881AE0;
extern u32 lbl_80881AE4;
extern u32 lbl_80881AE8;

/* Function declarations */
void fn_801495E8(void);
void fn_80149624(void);
void fn_8014969C(void);
void fn_801496A8(void);
void fn_80149884(void);
void fn_80149888(void);
void fn_8014989C(void);
void fn_801498D8(void);
void fn_801498F0(void);
void fn_80149A30(void);

asm void fn_801495E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    mr r4, r31
    mr r5, r31
    bl fn_805F89F0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80149624(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r4, 0x79
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8014969C(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 1
    blr
}

asm void fn_801496A8(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    frsp f0, f3
    lfs f8, lbl_8088196C
    stw r0, 0x1a4(r1)
    lfs f7, lbl_80881964
    stw r31, 0x19c(r1)
    fcmpu cr0, f8, f0
    addi r31, r1, 0x138
    stw r30, 0x198(r1)
    mr r30, r3
    stfs f1, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f8, 0x164(r1)
    stfs f8, 0x15c(r1)
    stfs f8, 0x158(r1)
    stfs f8, 0x154(r1)
    stfs f8, 0x150(r1)
    stfs f8, 0x148(r1)
    stfs f8, 0x144(r1)
    stfs f8, 0x140(r1)
    stfs f8, 0x13c(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x14c(r1)
    stfs f7, 0x138(r1)
    beq lbl_fn_801496A8_00000180
    fmr f1, f0
    addi r3, r1, 0xd8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xd8
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_801496A8_00000180:
    lfs f0, lbl_8088196C
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_801496A8_000001E0
    addi r3, r1, 0x78
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x78
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_801496A8_000001E0:
    lfs f0, lbl_8088196C
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_801496A8_00000240
    addi r3, r1, 0x18
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x18
    addi r5, r1, 0x48
    bl fn_805F89F0
    addi r3, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_801496A8_00000240:
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x168
    bl fn_805F89F0
    addi r3, r1, 0x168
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80149884(void)
{
    nofralloc
    blr
}

asm void fn_80149888(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    blr
}

asm void fn_8014989C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    mr r4, r31
    mr r5, r31
    bl fn_805F99F0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801498D8(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    mr r4, r3
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    b fn_805F9A50
}

asm void fn_801498F0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f2, 0x0(r4)
    stw r0, 0x54(r1)
    lfs f1, lbl_808819A8
    stfd f31, 0x40(r1)
    fmuls f1, f2, f1
    lfs f0, lbl_80881AD8
    psq_st f31, 0x48(r1), 0, 0
    lfs f31, 0x4(r4)
    stfd f30, 0x30(r1)
    fmuls f1, f0, f1
    psq_st f30, 0x38(r1), 0, 0
    lfs f30, 0x8(r4)
    addi r4, r1, 0x1c
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    bl fn_8072D210
    lfs f1, lbl_808819A8
    addi r3, r1, 0xc
    lfs f0, lbl_80881AD8
    addi r4, r1, 0x18
    fmuls f1, f31, f1
    fmuls f1, f0, f1
    bl fn_8072D210
    lfs f1, lbl_808819A8
    addi r3, r1, 0x8
    lfs f0, lbl_80881AD8
    addi r4, r1, 0x14
    fmuls f1, f30, f1
    fmuls f1, f0, f1
    bl fn_8072D210
    lfs f1, 0xc(r1)
    lfs f0, 0x8(r1)
    lfs f3, 0x18(r1)
    fmuls f4, f1, f0
    lfs f2, 0x14(r1)
    lfs f1, 0x10(r1)
    fmuls f2, f3, f2
    lfs f0, 0x1c(r1)
    fmuls f1, f1, f4
    fmadds f0, f0, f2, f1
    stfs f0, 0xc(r31)
    lfs f1, 0x1c(r1)
    lfs f0, 0x10(r1)
    fmuls f1, f1, f4
    fmsubs f0, f0, f2, f1
    stfs f0, 0x0(r31)
    lfs f1, 0x10(r1)
    lfs f0, 0x18(r1)
    lfs f4, 0x1c(r1)
    fmuls f2, f1, f0
    lfs f3, 0xc(r1)
    lfs f1, 0x8(r1)
    fmuls f3, f4, f3
    lfs f0, 0x14(r1)
    fmuls f1, f1, f2
    fmadds f0, f0, f3, f1
    stfs f0, 0x4(r31)
    lfs f1, 0x10(r1)
    lfs f0, 0xc(r1)
    lfs f4, 0x1c(r1)
    fmuls f2, f1, f0
    lfs f3, 0x18(r1)
    lfs f1, 0x14(r1)
    fmuls f3, f4, f3
    lfs f0, 0x8(r1)
    fmuls f1, f1, f2
    fmsubs f0, f0, f3, f1
    stfs f0, 0x8(r31)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80149A30(void)
{
    nofralloc
    stwu r1, -0xc50(r1)
    mflr r0
    stw r0, 0xc54(r1)
    li r0, 0xc48
    addi r11, r1, 0xc30
    stfd f31, 0xc40(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xc38
    stfd f30, 0xc30(r1)
    psq_stx f30, r1, r0, 0, 0
    bl _savegpr_24
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0xbf8(r1)
    mr r24, r3
    lwz r4, 0x20(r4)
    stw r0, 0xc00(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00002798
    lwz r0, 0x54c(r3)
    rlwinm r5, r0, 0, 28, 28
    subfic r4, r5, 0x8
    subi r0, r5, 0x8
    or r0, r4, r0
    srwi. r0, r0, 31
    beq lbl_fn_80149A30_00002798
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 22
    bne lbl_fn_80149A30_00002798
    lwz r4, lbl_8087EFB4
    lfs f0, 0x530(r3)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0xf4
    lfs f3, 0x10c(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xf8(r1)
    stfs f0, 0xf4(r1)
    stfs f6, 0xfc(r1)
    bl fn_805F9920
    lwz r0, 0x55c(r24)
    fmr f31, f1
    cmpwi r0, 0x8
    beq lbl_fn_80149A30_00000AEC
    lwz r3, 0x48(r24)
    li r0, 0x1
    lfs f0, lbl_80881964
    cmpwi r3, 0x1
    stfs f0, 0x15c(r24)
    beq lbl_fn_80149A30_0000052C
    cmpwi r3, 0x4
    beq lbl_fn_80149A30_0000052C
    li r0, 0x0
lbl_fn_80149A30_0000052C:
    cmpwi r0, 0x0
    bne lbl_fn_80149A30_00000540
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_0000054C
lbl_fn_80149A30_00000540:
    lfs f0, lbl_80881ADC
    fcmpo cr0, f1, f0
    bgt lbl_fn_80149A30_00002798
lbl_fn_80149A30_0000054C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00000AF4
    lwz r0, 0x868(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80149A30_00000AF4
    lwz r0, 0x520(r24)
    cmpwi r0, 0x0
    blt lbl_fn_80149A30_000005B8
    bge lbl_fn_80149A30_0000057C
    li r5, 0x0
    b lbl_fn_80149A30_00000588
lbl_fn_80149A30_0000057C:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r24)
    add r5, r3, r0
lbl_fn_80149A30_00000588:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0xe8
    lfs f3, 0xc(r5)
    addi r3, r1, 0x1d0
    lfs f2, 0x2c(r5)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xf0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1d8(r1)
    b lbl_fn_80149A30_00000620
lbl_fn_80149A30_000005B8:
    lwz r0, 0x524(r24)
    cmpwi r0, 0x0
    blt lbl_fn_80149A30_0000060C
    bge lbl_fn_80149A30_000005D0
    li r5, 0x0
    b lbl_fn_80149A30_000005DC
lbl_fn_80149A30_000005D0:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r24)
    add r5, r3, r0
lbl_fn_80149A30_000005DC:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0xdc
    lfs f3, 0xc(r5)
    addi r3, r1, 0x1d0
    lfs f2, 0x2c(r5)
    stfs f3, 0xdc(r1)
    stfs f0, 0xe0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xe4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1d8(r1)
    b lbl_fn_80149A30_00000620
lbl_fn_80149A30_0000060C:
    psq_l f1, 0x528(r24), 0, 0
    addi r3, r1, 0x1d0
    lfs f2, 0x530(r24)
    stfs f2, 0x1d8(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80149A30_00000620:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x1c4
    addi r5, r1, 0x1d0
    bl fn_800BFAC8
    lfs f0, 0x1cc(r1)
    lfs f4, lbl_8088196C
    fcmpo cr0, f0, f4
    bge lbl_fn_80149A30_00000644
    b lbl_fn_80149A30_00000680
lbl_fn_80149A30_00000644:
    lwz r3, lbl_8087EFB4
    lfs f0, 0x1d8(r1)
    lfs f4, 0x114(r3)
    lfs f3, 0x10c(r3)
    fsubs f5, f4, f0
    lfs f0, 0x1d0(r1)
    lfs f4, 0x110(r3)
    fsubs f6, f3, f0
    lfs f3, 0x1d4(r1)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0xd0(r1)
    fmadds f4, f6, f6, f0
    stfs f3, 0xd4(r1)
    stfs f5, 0xd8(r1)
lbl_fn_80149A30_00000680:
    lwz r0, 0x48(r24)
    cmpwi r0, 0x0
    bne lbl_fn_80149A30_00000AB0
    lwz r3, lbl_8087F430
    li r4, 0x1
    lwz r0, 0x868(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80149A30_000006A8
    li r4, 0x0
    b lbl_fn_80149A30_000006D8
lbl_fn_80149A30_000006A8:
    cmpwi r0, 0x4
    bne lbl_fn_80149A30_000006D8
    lwz r0, 0x12a4(r24)
    li r4, 0x0
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80149A30_000006D8
    lwz r0, 0x674(r24)
    srwi r0, r0, 31
    xori r0, r0, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_80149A30_000006D8
    li r4, 0x1
lbl_fn_80149A30_000006D8:
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000AF4
    lwz r5, lbl_8087EFB4
    lis r3, lbl_80737A9C@ha
    addi r3, r3, lbl_80737A9C@l
    addi r6, r1, 0x1b8
    psq_l f1, 0x10c(r5), 0, 0
    addi r4, r3, 0x56
    lfs f2, 0x114(r5)
    addi r3, r24, 0xb0
    stfs f2, 0x1c0(r1)
    li r5, 0x0
    psq_st f1, 0x0(r6), 0, 0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80149A30_00000720
    li r31, 0x0
    b lbl_fn_80149A30_0000072C
lbl_fn_80149A30_00000720:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r24)
    add r31, r3, r0
lbl_fn_80149A30_0000072C:
    lis r4, lbl_80737A9C@ha
    addi r3, r24, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x5b
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80149A30_00000754
    li r30, 0x0
    b lbl_fn_80149A30_00000760
lbl_fn_80149A30_00000754:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r24)
    add r30, r3, r0
lbl_fn_80149A30_00000760:
    lis r4, lbl_80737A9C@ha
    addi r3, r24, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x60
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80149A30_00000788
    li r29, 0x0
    b lbl_fn_80149A30_00000794
lbl_fn_80149A30_00000788:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r24)
    add r29, r3, r0
lbl_fn_80149A30_00000794:
    lis r4, lbl_80737A9C@ha
    addi r3, r24, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x72
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80149A30_000007BC
    li r28, 0x0
    b lbl_fn_80149A30_000007C8
lbl_fn_80149A30_000007BC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r24)
    add r28, r3, r0
lbl_fn_80149A30_000007C8:
    lis r4, lbl_80737A9C@ha
    addi r3, r24, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x368
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80149A30_000007F0
    li r27, 0x0
    b lbl_fn_80149A30_000007FC
lbl_fn_80149A30_000007F0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r24)
    add r27, r3, r0
lbl_fn_80149A30_000007FC:
    lis r4, lbl_80737A9C@ha
    addi r3, r24, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x80
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80149A30_00000824
    li r26, 0x0
    b lbl_fn_80149A30_00000830
lbl_fn_80149A30_00000824:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r24)
    add r26, r3, r0
lbl_fn_80149A30_00000830:
    lis r4, lbl_80737A9C@ha
    addi r3, r24, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x373
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80149A30_00000858
    li r25, 0x0
    b lbl_fn_80149A30_00000864
lbl_fn_80149A30_00000858:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r24)
    add r25, r3, r0
lbl_fn_80149A30_00000864:
    cmpwi r31, 0x0
    beq lbl_fn_80149A30_00000AF4
    cmpwi r30, 0x0
    beq lbl_fn_80149A30_00000AF4
    cmpwi r29, 0x0
    beq lbl_fn_80149A30_00000AF4
    cmpwi r28, 0x0
    beq lbl_fn_80149A30_00000AF4
    cmpwi r27, 0x0
    beq lbl_fn_80149A30_00000AF4
    cmpwi r26, 0x0
    beq lbl_fn_80149A30_00000AF4
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_00000AF4
    lfs f0, 0x1c(r31)
    addi r5, r1, 0xc4
    lfs f3, 0xc(r31)
    addi r4, r1, 0x1a8
    stfs f3, 0xc4(r1)
    addi r3, r1, 0xb8
    lfs f2, 0x2c(r31)
    stfs f0, 0xc8(r1)
    lfs f5, lbl_80881AE0
    frsp f0, f2
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x1c0(r1)
    lfs f4, lbl_808819FC
    fsubs f7, f3, f0
    lfs f6, 0x1ac(r1)
    lfs f3, 0x1b8(r1)
    fadds f6, f6, f4
    lfs f4, 0x1bc(r1)
    lfs f0, 0x1a8(r1)
    stfs f2, 0xcc(r1)
    fsubs f4, f4, f6
    fsubs f0, f3, f0
    stfs f2, 0x1b0(r1)
    stfs f6, 0x1ac(r1)
    stfs f5, 0x1b4(r1)
    stfs f0, 0xb8(r1)
    stfs f4, 0xbc(r1)
    stfs f7, 0xc0(r1)
    bl fn_805F9920
    lfs f0, 0x1b4(r1)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    blt lbl_fn_80149A30_00002798
    lfs f0, 0x1c(r30)
    addi r31, r1, 0x1dc
    lfs f3, 0xc(r30)
    addi r5, r1, 0xac
    lfs f2, 0x2c(r30)
    addi r6, r1, 0xa0
    stfs f3, 0xac(r1)
    addi r30, r1, 0x1e8
    lfs f3, lbl_80881980
    mr r4, r31
    stfs f0, 0xb0(r1)
    addi r3, r1, 0x1b8
    lfs f0, lbl_80881AE4
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x1e0(r1)
    stfs f2, 0x1e4(r1)
    fsubs f3, f4, f3
    stfs f2, 0xb4(r1)
    stfs f3, 0x1e0(r1)
    lfs f3, 0x1c(r29)
    lfs f4, 0xc(r29)
    lfs f2, 0x2c(r29)
    stfs f4, 0xa0(r1)
    stfs f3, 0xa4(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xa8(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1f0(r1)
    stfs f0, 0x1f4(r1)
    bl fn_80050A1C
    lfs f0, 0x1f4(r1)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    blt lbl_fn_80149A30_00002798
    lfs f3, 0x2c(r28)
    addi r6, r1, 0x94
    lfs f4, 0x1c(r28)
    addi r7, r1, 0x88
    lfs f0, 0xc(r28)
    fmr f2, f3
    stfs f0, 0x94(r1)
    mr r4, r31
    lfs f0, lbl_80881AE4
    addi r3, r1, 0x1b8
    stfs f4, 0x98(r1)
    li r5, 0x0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1e4(r1)
    lfs f4, 0x1c(r27)
    lfs f5, 0xc(r27)
    lfs f2, 0x2c(r27)
    stfs f5, 0x88(r1)
    stfs f4, 0x8c(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f3, 0x9c(r1)
    stfs f2, 0x90(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1f0(r1)
    stfs f0, 0x1f4(r1)
    bl fn_80050A1C
    lfs f0, 0x1f4(r1)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    blt lbl_fn_80149A30_00002798
    lfs f3, 0x2c(r26)
    addi r6, r1, 0x7c
    lfs f4, 0x1c(r26)
    addi r7, r1, 0x70
    lfs f0, 0xc(r26)
    fmr f2, f3
    stfs f0, 0x7c(r1)
    mr r4, r31
    lfs f0, lbl_80881AE4
    addi r3, r1, 0x1b8
    stfs f4, 0x80(r1)
    li r5, 0x0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1e4(r1)
    lfs f4, 0x1c(r25)
    lfs f5, 0xc(r25)
    lfs f2, 0x2c(r25)
    stfs f5, 0x70(r1)
    stfs f4, 0x74(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f3, 0x84(r1)
    stfs f2, 0x78(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1f0(r1)
    stfs f0, 0x1f4(r1)
    bl fn_80050A1C
    lfs f0, 0x1f4(r1)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80149A30_00000AF4
    b lbl_fn_80149A30_00002798
lbl_fn_80149A30_00000AB0:
    lwz r0, 0x12a4(r24)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_80149A30_00000AF4
    lfs f0, lbl_80881AE8
    fcmpo cr0, f4, f0
    bge lbl_fn_80149A30_00000AF4
    lwz r3, lbl_8087EFB4
    lfs f3, 0x1d4(r1)
    lfs f4, 0x110(r3)
    lfs f0, lbl_80881974
    fsubs f3, f4, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80149A30_00000AF4
    b lbl_fn_80149A30_00002798
lbl_fn_80149A30_00000AEC:
    lfs f0, lbl_808819AC
    stfs f0, 0x15c(r24)
lbl_fn_80149A30_00000AF4:
    lwz r3, lbl_8087F430
    cmpwi cr1, r3, 0x0
    beq cr1, lbl_fn_80149A30_00000E64
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    bne lbl_fn_80149A30_00000E64
    li r25, 0x1
    beq cr1, lbl_fn_80149A30_00000BA0
    li r4, 0xd9
    bl fn_80370174
    cmpwi r3, 0x1
    beq lbl_fn_80149A30_00000B38
    cmpwi r3, 0x2
    beq lbl_fn_80149A30_00000B7C
    cmpwi r3, 0x3
    beq lbl_fn_80149A30_00000B90
    b lbl_fn_80149A30_00000BA0
lbl_fn_80149A30_00000B38:
    lwz r0, 0x48(r24)
    li r25, 0x1
    li r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_00000B60
    lwz r0, 0x12a4(r24)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_80149A30_00000B60
    li r3, 0x0
lbl_fn_80149A30_00000B60:
    cmpwi r3, 0x0
    bne lbl_fn_80149A30_00000BA0
    lwz r0, 0x55c(r24)
    cmpwi r0, 0x8
    beq lbl_fn_80149A30_00000BA0
    li r25, 0x0
    b lbl_fn_80149A30_00000BA0
lbl_fn_80149A30_00000B7C:
    lwz r3, 0x55c(r24)
    subi r0, r3, 0x8
    cntlzw r0, r0
    srwi r25, r0, 5
    b lbl_fn_80149A30_00000BA0
lbl_fn_80149A30_00000B90:
    lwz r3, 0x48(r24)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r25, r0, 5
lbl_fn_80149A30_00000BA0:
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_00000D08
    lwz r0, 0xb4(r24)
    mr r3, r24
    ori r0, r0, 0x400
    stw r0, 0xb4(r24)
    bl fn_8014FB60
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00000BEC
    lwz r3, 0x648(r24)
    lwz r0, 0x14(r3)
    ori r0, r0, 0x400
    stw r0, 0x14(r3)
    lwz r3, 0x64c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00000BEC
    lwz r0, 0x14(r3)
    ori r0, r0, 0x400
    stw r0, 0x14(r3)
lbl_fn_80149A30_00000BEC:
    li r0, 0x2
    addi r5, r24, 0x680
    li r7, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_80149A30_00000C00:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000C2C
    lwz r0, 0x6a0(r24)
    slw r6, r3, r7
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_80149A30_00000C2C
    lwz r0, 0x28(r4)
    ori r0, r0, 0x400
    stw r0, 0x28(r4)
lbl_fn_80149A30_00000C2C:
    lwz r4, 0x4(r5)
    addi r7, r7, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000C5C
    lwz r0, 0x6a0(r24)
    slw r6, r3, r7
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_80149A30_00000C5C
    lwz r0, 0x28(r4)
    ori r0, r0, 0x400
    stw r0, 0x28(r4)
lbl_fn_80149A30_00000C5C:
    lwz r4, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000C8C
    lwz r0, 0x6a0(r24)
    slw r6, r3, r7
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_80149A30_00000C8C
    lwz r0, 0x28(r4)
    ori r0, r0, 0x400
    stw r0, 0x28(r4)
lbl_fn_80149A30_00000C8C:
    lwz r4, 0xc(r5)
    addi r7, r7, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000CBC
    lwz r0, 0x6a0(r24)
    slw r6, r3, r7
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_80149A30_00000CBC
    lwz r0, 0x28(r4)
    ori r0, r0, 0x400
    stw r0, 0x28(r4)
lbl_fn_80149A30_00000CBC:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_fn_80149A30_00000C00
    mr r3, r24
    li r5, 0x0
    b lbl_fn_80149A30_00000CF8
lbl_fn_80149A30_00000CD4:
    lwz r4, 0x6a8(r3)
    lwz r0, 0x3dc(r4)
    srawi. r0, r0, 31
    beq lbl_fn_80149A30_00000CF0
    lwz r0, 0x8(r4)
    ori r0, r0, 0x400
    stw r0, 0x8(r4)
lbl_fn_80149A30_00000CF0:
    addi r3, r3, 0x4
    addi r5, r5, 0x1
lbl_fn_80149A30_00000CF8:
    lwz r0, 0x6a4(r24)
    cmplw r5, r0
    blt lbl_fn_80149A30_00000CD4
    b lbl_fn_80149A30_00000E64
lbl_fn_80149A30_00000D08:
    lwz r0, 0xb4(r24)
    mr r3, r24
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0xb4(r24)
    bl fn_8014FB60
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00000D4C
    lwz r3, 0x648(r24)
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x14(r3)
    lwz r3, 0x64c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00000D4C
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x14(r3)
lbl_fn_80149A30_00000D4C:
    li r0, 0x2
    addi r5, r24, 0x680
    li r7, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_80149A30_00000D60:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000D8C
    lwz r0, 0x6a0(r24)
    slw r6, r3, r7
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_80149A30_00000D8C
    lwz r0, 0x28(r4)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x28(r4)
lbl_fn_80149A30_00000D8C:
    lwz r4, 0x4(r5)
    addi r7, r7, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000DBC
    lwz r0, 0x6a0(r24)
    slw r6, r3, r7
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_80149A30_00000DBC
    lwz r0, 0x28(r4)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x28(r4)
lbl_fn_80149A30_00000DBC:
    lwz r4, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000DEC
    lwz r0, 0x6a0(r24)
    slw r6, r3, r7
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_80149A30_00000DEC
    lwz r0, 0x28(r4)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x28(r4)
lbl_fn_80149A30_00000DEC:
    lwz r4, 0xc(r5)
    addi r7, r7, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000E1C
    lwz r0, 0x6a0(r24)
    slw r6, r3, r7
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_80149A30_00000E1C
    lwz r0, 0x28(r4)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x28(r4)
lbl_fn_80149A30_00000E1C:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_fn_80149A30_00000D60
    mr r3, r24
    li r5, 0x0
    b lbl_fn_80149A30_00000E58
lbl_fn_80149A30_00000E34:
    lwz r4, 0x6a8(r3)
    lwz r0, 0x3dc(r4)
    srawi. r0, r0, 31
    beq lbl_fn_80149A30_00000E50
    lwz r0, 0x8(r4)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x8(r4)
lbl_fn_80149A30_00000E50:
    addi r3, r3, 0x4
    addi r5, r5, 0x1
lbl_fn_80149A30_00000E58:
    lwz r0, 0x6a4(r24)
    cmplw r5, r0
    blt lbl_fn_80149A30_00000E34
lbl_fn_80149A30_00000E64:
    lwz r0, 0x137c(r24)
    li r25, 0x1
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80149A30_00000E80
    li r0, 0x0
    b lbl_fn_80149A30_00000F14
lbl_fn_80149A30_00000E80:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00000F10
    lwz r0, 0x48(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80149A30_00000EA0
    li r0, 0x1
    b lbl_fn_80149A30_00000F14
lbl_fn_80149A30_00000EA0:
    cmpwi r0, 0x2
    bne lbl_fn_80149A30_00000F10
    lwz r0, 0x4c(r4)
    cmplwi r0, 0x41
    bgt lbl_fn_80149A30_00000F10
    lis r3, jumptable_8077A998@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8077A998@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x1
    b lbl_fn_80149A30_00000F14
    lwz r3, 0x50(r4)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80149A30_00000F14
    lwz r3, 0x50(r4)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_80149A30_00000F08
    cmpwi r3, 0x6
    beq lbl_fn_80149A30_00000F08
    cmpwi r3, 0xb
    bne lbl_fn_80149A30_00000F10
lbl_fn_80149A30_00000F08:
    li r0, 0x1
    b lbl_fn_80149A30_00000F14
lbl_fn_80149A30_00000F10:
    li r0, 0x0
lbl_fn_80149A30_00000F14:
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_00000F88
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00000F88
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00000F88
    lwz r0, 0x48(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_00000F88
    lfs f3, 0x52c(r3)
    lfs f0, 0x52c(r24)
    lfs f5, 0x530(r3)
    fsubs f6, f3, f0
    lfs f4, 0x530(r24)
    lfs f3, 0x528(r3)
    fsubs f4, f5, f4
    lfs f0, 0x528(r24)
    fabs f5, f6
    fsubs f3, f3, f0
    lfs f0, lbl_80881974
    stfs f6, 0x1a0(r1)
    frsp f5, f5
    stfs f3, 0x19c(r1)
    fcmpo cr0, f5, f0
    stfs f4, 0x1a4(r1)
    mfcr r25
    srwi r25, r25, 31
lbl_fn_80149A30_00000F88:
    lwz r0, 0x12a4(r24)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_80149A30_00000FB0
    lwz r0, 0x12a8(r24)
    extrwi. r0, r0, 1, 30
    bne lbl_fn_80149A30_00000FB0
    lwz r0, 0x137c(r24)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80149A30_00000FB4
lbl_fn_80149A30_00000FB0:
    li r25, 0x0
lbl_fn_80149A30_00000FB4:
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_00000FCC
    lwz r0, 0xb4(r24)
    ori r0, r0, 0x4
    stw r0, 0xb4(r24)
    b lbl_fn_80149A30_00000FD8
lbl_fn_80149A30_00000FCC:
    lwz r0, 0xb4(r24)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xb4(r24)
lbl_fn_80149A30_00000FD8:
    addi r3, r24, 0xb0
    bl fn_8008CD60
    mr r3, r24
    bl fn_8014FB60
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80149A30_00001118
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_00001090
    lwz r3, 0x678(r24)
    cmpwi r3, 0x0
    bne lbl_fn_80149A30_00001018
    lwz r0, 0x67c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_00001090
lbl_fn_80149A30_00001018:
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_0000104C
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80149A30_0000104C
    lwz r3, 0x648(r24)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_80149A30_0000104C:
    lwz r3, 0x67c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001140
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80149A30_00001140
    lwz r3, 0x64c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001140
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    b lbl_fn_80149A30_00001140
lbl_fn_80149A30_00001090:
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_000010AC
    lwz r3, 0x648(r24)
    lwz r0, 0x14(r3)
    ori r0, r0, 0x4
    stw r0, 0x14(r3)
    b lbl_fn_80149A30_000010BC
lbl_fn_80149A30_000010AC:
    lwz r3, 0x648(r24)
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x14(r3)
lbl_fn_80149A30_000010BC:
    lwz r3, 0x648(r24)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r3, 0x64c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001140
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_000010F4
    lwz r0, 0x14(r3)
    ori r0, r0, 0x4
    stw r0, 0x14(r3)
    b lbl_fn_80149A30_00001100
lbl_fn_80149A30_000010F4:
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x14(r3)
lbl_fn_80149A30_00001100:
    lwz r3, 0x64c(r24)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    b lbl_fn_80149A30_00001140
lbl_fn_80149A30_00001118:
    lwz r3, 0x648(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_0000112C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80149A30_0000112C:
    lwz r3, 0x64c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001140
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80149A30_00001140:
    lwz r0, 0x1208(r24)
    cntlzw r0, r0
    srwi. r31, r0, 5
    beq lbl_fn_80149A30_00001168
    lwz r3, 0x2dc(r24)
    subi r3, r3, 0x6c
    xori r0, r3, 0x4
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r31, r0, 31
lbl_fn_80149A30_00001168:
    cmpwi r31, 0x0
    beq lbl_fn_80149A30_0000119C
    lwz r3, 0x648(r24)
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_80149A30_00001194
    lwz r3, 0x4(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_80149A30_00001194:
    cntlzw r0, r0
    srwi r31, r0, 5
lbl_fn_80149A30_0000119C:
    addi r29, r24, 0x680
    li r27, 0x0
    li r28, 0x1
lbl_fn_80149A30_000011A8:
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00001230
    lwz r0, 0x6a0(r24)
    slw r3, r28, r27
    and r0, r3, r0
    cmplw r3, r0
    bne lbl_fn_80149A30_00001230
    lwz r5, 0x0(r4)
    cmpwi r5, 0x4
    bne lbl_fn_80149A30_000011E8
    lwz r0, 0x7e0(r24)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80149A30_00001230
lbl_fn_80149A30_000011E8:
    cmpwi r5, 0x4
    bne lbl_fn_80149A30_00001214
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_00001208
    lwz r0, 0x28(r4)
    ori r0, r0, 0x4
    stw r0, 0x28(r4)
    b lbl_fn_80149A30_00001214
lbl_fn_80149A30_00001208:
    lwz r0, 0x28(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x28(r4)
lbl_fn_80149A30_00001214:
    lwz r3, 0x0(r29)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80149A30_0000122C
    cmpwi r31, 0x0
    beq lbl_fn_80149A30_00001230
lbl_fn_80149A30_0000122C:
    bl fn_80565F38
lbl_fn_80149A30_00001230:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmplwi r27, 0x8
    blt lbl_fn_80149A30_000011A8
    mr r25, r24
    li r27, 0x0
    b lbl_fn_80149A30_00001274
lbl_fn_80149A30_0000124C:
    lwz r3, 0x6a8(r25)
    lwz r0, 0x3dc(r3)
    srawi. r0, r0, 31
    beq lbl_fn_80149A30_0000126C
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80149A30_0000126C:
    addi r25, r25, 0x4
    addi r27, r27, 0x1
lbl_fn_80149A30_00001274:
    lwz r0, 0x6a4(r24)
    cmplw r27, r0
    blt lbl_fn_80149A30_0000124C
    lwz r3, 0x50(r24)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    bne lbl_fn_80149A30_00001334
    lis r25, lbl_80737A9C@ha
    mr r5, r31
    addi r25, r25, lbl_80737A9C@l
    addi r3, r24, 0xb0
    addi r4, r25, 0x37d
    bl fn_8009373C
    mr r5, r31
    addi r3, r24, 0xb0
    addi r4, r25, 0x38b
    bl fn_8009373C
    mr r5, r31
    addi r3, r24, 0xb0
    addi r4, r25, 0x399
    bl fn_8009373C
    cntlzw r0, r31
    addi r3, r24, 0xb0
    srwi r26, r0, 5
    addi r4, r25, 0x3ac
    mr r5, r26
    bl fn_8009373C
    mr r5, r26
    addi r3, r24, 0xb0
    addi r4, r25, 0x3b7
    bl fn_8009373C
    mr r5, r26
    addi r3, r24, 0xb0
    addi r4, r25, 0x3c4
    bl fn_8009373C
    mr r5, r31
    addi r3, r24, 0xb0
    addi r4, r25, 0x3d1
    bl fn_8009373C
    mr r5, r31
    addi r3, r24, 0xb0
    addi r4, r25, 0x3dc
    bl fn_8009373C
    mr r5, r31
    addi r3, r24, 0xb0
    addi r4, r25, 0x3e9
    bl fn_8009373C
    b lbl_fn_80149A30_00001384
lbl_fn_80149A30_00001334:
    cmplwi r0, 0xae77
    bne lbl_fn_80149A30_00001384
    lis r25, lbl_80737A9C@ha
    mr r5, r26
    addi r25, r25, lbl_80737A9C@l
    addi r3, r24, 0xb0
    addi r4, r25, 0x3f6
    bl fn_8009373C
    mr r5, r26
    addi r3, r24, 0xb0
    addi r4, r25, 0x3ff
    bl fn_8009373C
    mr r5, r26
    addi r3, r24, 0xb0
    addi r4, r25, 0x40e
    bl fn_8009373C
    mr r5, r26
    addi r3, r24, 0xb0
    addi r4, r25, 0x417
    bl fn_8009373C
lbl_fn_80149A30_00001384:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x190
    addi r5, r24, 0x528
    bl fn_800BFAC8
    lwz r3, lbl_8087F0A8
    lfs f3, 0x194(r1)
    lfs f0, lbl_808819E0
    lwz r0, 0x34(r3)
    fsubs f30, f3, f0
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_00001674
    lfs f0, lbl_80881AA4
    fcmpo cr0, f31, f0
    bge lbl_fn_80149A30_00001674
    lwz r3, lbl_8087EEB0
    addi r4, r24, 0x614
    lfs f1, 0x620(r24)
    li r5, -0x100
    lfs f2, lbl_8088196C
    bl fn_80063D3C
    lfs f3, 0x198(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80149A30_00001674
    lfs f0, lbl_80881964
    fcmpo cr0, f3, f0
    bge lbl_fn_80149A30_00001674
    lis r3, 0x51ec
    lwz r8, 0x50(r24)
    subi r0, r3, 0x7ae1
    lis r25, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r4, lbl_80737A9C@ha
    addi r3, r25, lbl_807C7B28@l
    addi r4, r4, lbl_80737A9C@l
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x9f8
    addi r5, r25, lbl_807C7B28@l
    li r6, 0x100
    bl fn_8006F2F0
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x9f8
    lfs f1, lbl_80881A88
    li r5, 0x1
    lfs f2, lbl_8088196C
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_8088196C
    fmr f2, f30
    lfs f4, lbl_80881A88
    addi r4, r1, 0x9f8
    lfs f9, lbl_808819A8
    fmr f6, f3
    lfs f0, 0x190(r1)
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f7, f3
    li r5, -0x1
    fmr f8, f3
    li r6, 0x1
    fnmsubs f1, f9, f1, f0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_80881A88
    lis r25, lbl_8077C6F8@ha
    lwz r6, 0x55c(r24)
    addi r3, r1, 0x9f8
    fadds f30, f30, f0
    lwz r7, 0x560(r24)
    addi r5, r25, lbl_8077C6F8@l
    li r4, 0x100
    crclr 6
    bl fn_806868C4
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x9f8
    lfs f1, lbl_80881A88
    li r5, 0x1
    lfs f2, lbl_8088196C
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_8088196C
    fmr f2, f30
    lfs f4, lbl_80881A88
    addi r4, r1, 0x9f8
    lfs f9, lbl_808819A8
    fmr f6, f3
    lfs f0, 0x190(r1)
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f7, f3
    li r5, -0x1
    fmr f8, f3
    li r6, 0x1
    fnmsubs f1, f9, f1, f0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_80881A88
    addi r25, r25, lbl_8077C6F8@l
    lfs f6, 0x348(r24)
    addi r3, r1, 0x9f8
    fadds f30, f30, f0
    lfs f5, 0x35c(r24)
    lfs f4, 0x318(r24)
    addi r5, r25, 0x26
    lfs f3, 0x32c(r24)
    li r4, 0x100
    lfs f2, 0x2e8(r24)
    lfs f1, 0x2fc(r24)
    crset 6
    bl fn_806868C4
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x9f8
    lfs f1, lbl_80881A88
    li r5, 0x1
    lfs f2, lbl_8088196C
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_8088196C
    fmr f2, f30
    lfs f4, lbl_80881A88
    addi r4, r1, 0x9f8
    lfs f9, lbl_808819A8
    fmr f6, f3
    lfs f0, 0x190(r1)
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f7, f3
    li r5, -0x1
    fmr f8, f3
    li r6, 0x1
    fnmsubs f1, f9, f1, f0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_80881A88
    addi r3, r1, 0x9f8
    lfs f1, 0x570(r24)
    addi r5, r25, 0xaa
    fadds f30, f30, f0
    li r4, 0x100
    crset 6
    bl fn_806868C4
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x9f8
    lfs f1, lbl_80881A88
    li r5, 0x1
    lfs f2, lbl_8088196C
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_8088196C
    fmr f2, f30
    lfs f4, lbl_80881A88
    addi r4, r1, 0x9f8
    lfs f9, lbl_808819A8
    fmr f6, f3
    lfs f0, 0x190(r1)
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f7, f3
    li r5, -0x1
    fmr f8, f3
    li r6, 0x1
    fnmsubs f1, f9, f1, f0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_80881A88
    fadds f30, f30, f0
lbl_fn_80149A30_00001674:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_00001774
    lfs f0, lbl_80881AA4
    fcmpo cr0, f31, f0
    bge lbl_fn_80149A30_00001774
    lfs f3, 0x198(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80149A30_00001774
    lfs f0, lbl_80881964
    fcmpo cr0, f3, f0
    bge lbl_fn_80149A30_00001774
    lwz r25, lbl_8087F558
    addi r3, r1, 0x60
    addi r4, r24, 0xb0
    bl fn_80094F98
    mr r3, r25
    addi r4, r1, 0x60
    bl fn_804918A4
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_80149A30_000016F4
    lis r4, lbl_80737A9C@ha
    addi r3, r1, 0x2f8
    addi r4, r4, lbl_80737A9C@l
    addi r5, r5, 0x4
    addi r4, r4, 0x426
    crclr 6
    bl sprintf
    b lbl_fn_80149A30_00001710
lbl_fn_80149A30_000016F4:
    lis r4, lbl_80737A9C@ha
    addi r3, r1, 0x2f8
    addi r4, r4, lbl_80737A9C@l
    addi r5, r5, 0x4
    addi r4, r4, 0x430
    crclr 6
    bl sprintf
lbl_fn_80149A30_00001710:
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x7f8
    addi r5, r1, 0x2f8
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_8088196C
    lis r5, 0xb000
    lfs f4, lbl_80881A88
    fmr f2, f30
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, 0x190(r1)
    fmr f7, f3
    fmr f8, f3
    addi r4, r1, 0x7f8
    subi r5, r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_80881A88
    fadds f30, f30, f0
lbl_fn_80149A30_00001774:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_00001CD0
    lwz r0, 0x48(r24)
    cmpwi r0, 0x5
    beq lbl_fn_80149A30_00001CD0
    lfs f0, lbl_80881AA4
    fcmpo cr0, f31, f0
    bge lbl_fn_80149A30_00001CD0
    lfs f3, 0x198(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80149A30_00001CD0
    lfs f0, lbl_80881964
    fcmpo cr0, f3, f0
    bge lbl_fn_80149A30_00001CD0
    lis r3, 0x51ec
    lwz r8, 0x50(r24)
    subi r0, r3, 0x7ae1
    lis r26, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r25, lbl_80737A9C@ha
    addi r3, r26, lbl_807C7B28@l
    addi r4, r25, lbl_80737A9C@l
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    lwz r4, 0x60(r24)
    addi r7, r25, lbl_80737A9C@l
    lwz r5, 0x58(r24)
    addi r3, r1, 0x1f8
    lwz r6, 0xc(r4)
    addi r4, r7, 0x43b
    addi r7, r26, lbl_807C7B28@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x5f8
    addi r5, r1, 0x1f8
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_8088196C
    lis r5, 0xb000
    lfs f4, lbl_80881A88
    fmr f2, f30
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, 0x190(r1)
    fmr f7, f3
    fmr f8, f3
    addi r4, r1, 0x5f8
    subi r5, r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_80881A88
    lwz r0, 0x48(r24)
    fadds f30, f30, f0
    cmpwi r0, 0x0
    bne lbl_fn_80149A30_000018C4
    lis r4, lbl_8077C6F8@ha
    lfs f2, 0xc00(r24)
    addi r4, r4, lbl_8077C6F8@l
    lwz r6, 0x934(r24)
    addi r5, r4, 0xc4
    lwz r7, 0x9f8(r24)
    lfs f1, 0x9fc(r24)
    addi r3, r1, 0x5f8
    li r4, 0x100
    crset 6
    bl fn_806868C4
    b lbl_fn_80149A30_0000191C
lbl_fn_80149A30_000018C4:
    cmpwi r0, 0x3
    bne lbl_fn_80149A30_000018F8
    lis r4, lbl_8077C6F8@ha
    lwz r6, 0x934(r24)
    addi r4, r4, lbl_8077C6F8@l
    lwz r7, 0x9f8(r24)
    addi r5, r4, 0x11c
    lfs f1, 0x9fc(r24)
    addi r3, r1, 0x5f8
    li r4, 0x100
    crset 6
    bl fn_806868C4
    b lbl_fn_80149A30_0000191C
lbl_fn_80149A30_000018F8:
    lis r5, lbl_8077C6F8@ha
    lwz r6, 0x934(r24)
    addi r5, r5, lbl_8077C6F8@l
    lfs f1, 0x9fc(r24)
    addi r3, r1, 0x5f8
    li r4, 0x100
    addi r5, r5, 0x152
    crset 6
    bl fn_806868C4
lbl_fn_80149A30_0000191C:
    lfs f3, lbl_8088196C
    lis r5, 0xb000
    lfs f4, lbl_80881A88
    fmr f2, f30
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, 0x190(r1)
    fmr f7, f3
    fmr f8, f3
    addi r4, r1, 0x5f8
    subi r5, r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r0, 0x7e0(r24)
    lis r4, lbl_8077C6F8@ha
    lfs f0, lbl_80881A88
    addi r4, r4, lbl_8077C6F8@l
    rlwinm r0, r0, 0, 26, 26
    lfs f1, 0x7d8(r24)
    cmplwi r0, 0x20
    fadds f30, f30, f0
    lfs f2, 0x7dc(r24)
    addi r5, r4, 0x174
    addi r3, r1, 0x5f8
    li r4, 0x100
    li r6, 0x20
    bne lbl_fn_80149A30_000019A0
    li r6, 0x44
lbl_fn_80149A30_000019A0:
    crset 6
    bl fn_806868C4
    lfs f3, lbl_8088196C
    lis r26, 0xb000
    lfs f4, lbl_80881A88
    fmr f2, f30
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, 0x190(r1)
    fmr f7, f3
    fmr f8, f3
    addi r4, r1, 0x5f8
    subi r5, r26, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_80881A88
    lis r3, lbl_8077C6F8@ha
    addi r25, r3, lbl_8077C6F8@l
    lfs f1, 0x8bc(r24)
    fadds f30, f30, f0
    lfs f2, 0x8c0(r24)
    addi r3, r1, 0x5f8
    addi r5, r25, 0x1a2
    li r4, 0x100
    crset 6
    bl fn_806868C4
    lfs f3, lbl_8088196C
    fmr f2, f30
    lfs f4, lbl_80881A88
    addi r4, r1, 0x5f8
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f7, f3
    lfs f1, 0x190(r1)
    fmr f8, f3
    subi r5, r26, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_80881A88
    addi r3, r1, 0x5f8
    lfs f1, 0x8c4(r24)
    addi r5, r25, 0x1cc
    fadds f30, f30, f0
    lfs f2, 0x8c8(r24)
    li r4, 0x100
    crset 6
    bl fn_806868C4
    lfs f3, lbl_8088196C
    fmr f2, f30
    lfs f4, lbl_80881A88
    addi r4, r1, 0x5f8
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f7, f3
    lfs f1, 0x190(r1)
    fmr f8, f3
    subi r5, r26, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f31, lbl_80881A88
    addi r27, r24, 0x12d4
    li r28, 0x0
    fadds f30, f30, f31
    b lbl_fn_80149A30_00001B60
lbl_fn_80149A30_00001ADC:
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00001B58
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80149A30_00001B58
    lwz r5, 0x4(r4)
    addi r3, r1, 0x5f8
    lwz r6, 0x8(r4)
    addi r4, r25, 0x1f6
    lwz r7, 0x8(r27)
    crclr 6
    bl fn_800DD3FC
    lfs f3, lbl_8088196C
    fmr f2, f30
    lfs f4, lbl_80881A88
    addi r4, r1, 0x5f8
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f7, f3
    lfs f1, 0x190(r1)
    fmr f8, f3
    subi r5, r26, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fadds f30, f30, f31
lbl_fn_80149A30_00001B58:
    addi r27, r27, 0x14
    addi r28, r28, 0x1
lbl_fn_80149A30_00001B60:
    lwz r0, 0x12d0(r24)
    cmplw r28, r0
    blt lbl_fn_80149A30_00001ADC
    lis r26, lbl_8077C6F8@ha
    lfs f31, lbl_80881A88
    addi r27, r24, 0xb58
    li r28, 0x0
    addi r26, r26, lbl_8077C6F8@l
    lis r25, 0xb000
    b lbl_fn_80149A30_00001C04
lbl_fn_80149A30_00001B88:
    lwz r4, 0x0(r27)
    addi r3, r1, 0x3f8
    bl fn_8021BE98
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001BFC
    lwz r6, 0xc(r27)
    addi r3, r1, 0x5f8
    addi r4, r26, 0x228
    addi r5, r1, 0x3f8
    crclr 6
    bl fn_800DD3FC
    lfs f3, lbl_8088196C
    fmr f2, f30
    lfs f4, lbl_80881A88
    addi r4, r1, 0x5f8
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f7, f3
    lfs f1, 0x190(r1)
    fmr f8, f3
    subi r5, r25, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fadds f30, f30, f31
lbl_fn_80149A30_00001BFC:
    addi r27, r27, 0x14
    addi r28, r28, 0x1
lbl_fn_80149A30_00001C04:
    lwz r0, 0xb54(r24)
    cmplw r28, r0
    blt lbl_fn_80149A30_00001B88
    lis r28, lbl_807375C0@ha
    lis r26, lbl_80737A9C@ha
    lfs f31, lbl_80881A88
    addi r28, r28, lbl_807375C0@l
    addi r26, r26, lbl_80737A9C@l
    li r29, 0x0
    lis r25, 0xb000
    li r27, 0x1
lbl_fn_80149A30_00001C30:
    lwz r0, 0x7e0(r24)
    slw r4, r27, r29
    and r0, r4, r0
    cmplw r4, r0
    bne lbl_fn_80149A30_00001CC0
    addi r3, r24, 0x7d4
    bl fn_801333A4
    lwz r5, 0x0(r28)
    mr r6, r3
    addi r3, r1, 0x1f8
    addi r4, r26, 0x448
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x5f8
    addi r5, r1, 0x1f8
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_8088196C
    fmr f2, f30
    lfs f4, lbl_80881A88
    addi r4, r1, 0x5f8
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f7, f3
    lfs f1, 0x190(r1)
    fmr f8, f3
    subi r5, r25, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fadds f30, f30, f31
lbl_fn_80149A30_00001CC0:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmplwi r29, 0x20
    blt lbl_fn_80149A30_00001C30
lbl_fn_80149A30_00001CD0:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_00001D38
    addi r26, r1, 0x50
    li r27, 0x0
    li r25, 0x0
    b lbl_fn_80149A30_00001D2C
lbl_fn_80149A30_00001CF0:
    lwz r0, 0x62c(r24)
    mr r4, r26
    lwz r3, lbl_8087EEB0
    li r5, -0x1
    add r6, r0, r25
    psq_l f1, 0x4(r6), 0, 0
    lfs f2, 0xc(r6)
    stfs f2, 0x58(r1)
    lfs f2, lbl_8088196C
    psq_st f1, 0x0(r26), 0, 0
    lfs f1, 0x10(r6)
    stfs f1, 0x5c(r1)
    bl fn_80063D3C
    addi r27, r27, 0x1
    addi r25, r25, 0x14
lbl_fn_80149A30_00001D2C:
    lwz r0, 0x624(r24)
    cmplw r27, r0
    blt lbl_fn_80149A30_00001CF0
lbl_fn_80149A30_00001D38:
    lwz r3, lbl_8087F430
    li r25, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001D70
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    bne lbl_fn_80149A30_00001D70
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001D70
    bl fn_80481654
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001D70
    li r25, 0x1
lbl_fn_80149A30_00001D70:
    lwz r0, 0x38(r24)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80149A30_00002798
    cmpwi r25, 0x0
    bne lbl_fn_80149A30_00002798
    lwz r0, 0x12a4(r24)
    extrwi. r0, r0, 1, 21
    beq lbl_fn_80149A30_00001DA8
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001DA8
    mr r4, r24
    bl fn_8010A4A8
lbl_fn_80149A30_00001DA8:
    lwz r4, lbl_8087F610
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00001DDC
    lwz r0, 0x4fc(r4)
    li r3, 0x0
    cmpwi r0, 0x1e
    bne lbl_fn_80149A30_00001DD4
    lwz r0, 0x50c(r4)
    cmpwi r0, 0x5
    bge lbl_fn_80149A30_00001DD4
    li r3, 0x1
lbl_fn_80149A30_00001DD4:
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00002178
lbl_fn_80149A30_00001DDC:
    lwz r0, 0x7e8(r24)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_80149A30_00001F6C
    lfs f3, lbl_80881A20
    lfs f0, 0x5b0(r24)
    lfs f5, lbl_8088196C
    fmuls f6, f3, f0
    lfs f4, 0x608(r24)
    lfs f3, 0x604(r24)
    lfs f0, 0x600(r24)
    fadds f4, f4, f5
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f4, 0x18c(r1)
    stfs f0, 0x184(r1)
    stfs f3, 0x188(r1)
    lwz r0, 0x48(r24)
    stfs f5, 0x44(r1)
    cmpwi r0, 0x2
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    bne lbl_fn_80149A30_00001EB4
    lwz r3, 0x7e0(r24)
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_80149A30_00001EB4
    rlwinm r3, r3, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_80149A30_00001EB4
    cmpwi r4, 0x0
    li r0, 0x0
    beq lbl_fn_80149A30_00001E90
    lwz r4, lbl_8087F610
    li r3, 0x1
    lwz r4, 0x540(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80149A30_00001E84
    cmpwi r4, 0x1
    beq lbl_fn_80149A30_00001E84
    li r3, 0x0
lbl_fn_80149A30_00001E84:
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_00001E90
    li r0, 0x1
lbl_fn_80149A30_00001E90:
    cmpwi r0, 0x0
    bne lbl_fn_80149A30_00001EB4
    lwz r3, lbl_8087F1E4
    lwz r25, 0x1fc(r3)
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_00001EAC
    b lbl_fn_80149A30_00001ECC
lbl_fn_80149A30_00001EAC:
    la r25, lbl_808813D0
    b lbl_fn_80149A30_00001ECC
lbl_fn_80149A30_00001EB4:
    lwz r3, lbl_8087F1E4
    lwz r25, 0x204(r3)
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_00001EC8
    b lbl_fn_80149A30_00001ECC
lbl_fn_80149A30_00001EC8:
    la r25, lbl_808813D0
lbl_fn_80149A30_00001ECC:
    lfs f31, lbl_80881A88
    mr r4, r25
    lwz r3, lbl_8087EEC8
    li r5, 0x1
    fmr f1, f31
    lfs f2, lbl_8088196C
    li r6, 0x1
    bl fn_8006EF48
    fmr f30, f1
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x178
    addi r5, r1, 0x184
    bl fn_800BFAC8
    lfs f4, 0x180(r1)
    lfs f3, lbl_8088196C
    fcmpo cr0, f4, f3
    ble lbl_fn_80149A30_00002178
    lfs f0, lbl_80881964
    fcmpo cr0, f4, f0
    bge lbl_fn_80149A30_00002178
    lfs f9, lbl_808819A8
    lis r5, 0xa001
    lfs f0, 0x178(r1)
    fmr f4, f31
    fmr f5, f31
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f2, 0x17c(r1)
    fmr f7, f3
    fmr f8, f3
    fnmsubs f1, f9, f30, f0
    mr r4, r25
    subi r5, r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_80149A30_00002178
lbl_fn_80149A30_00001F6C:
    lwz r3, 0x7e0(r24)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_80149A30_00002074
    lfs f3, lbl_80881A20
    lfs f0, 0x5b0(r24)
    lfs f5, lbl_8088196C
    fmuls f6, f3, f0
    lfs f4, 0x608(r24)
    lfs f3, 0x604(r24)
    lfs f0, 0x600(r24)
    fadds f4, f4, f5
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f4, 0x174(r1)
    lwz r3, lbl_8087F1E4
    stfs f0, 0x16c(r1)
    stfs f3, 0x170(r1)
    lwz r25, 0x104(r3)
    stfs f5, 0x38(r1)
    cmpwi r25, 0x0
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    beq lbl_fn_80149A30_00001FD0
    b lbl_fn_80149A30_00001FD4
lbl_fn_80149A30_00001FD0:
    la r25, lbl_808813D0
lbl_fn_80149A30_00001FD4:
    lfs f31, lbl_80881A88
    mr r4, r25
    lwz r3, lbl_8087EEC8
    li r5, 0x1
    fmr f1, f31
    lfs f2, lbl_8088196C
    li r6, 0x1
    bl fn_8006EF48
    fmr f30, f1
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x160
    addi r5, r1, 0x16c
    bl fn_800BFAC8
    lfs f4, 0x168(r1)
    lfs f3, lbl_8088196C
    fcmpo cr0, f4, f3
    ble lbl_fn_80149A30_00002178
    lfs f0, lbl_80881964
    fcmpo cr0, f4, f0
    bge lbl_fn_80149A30_00002178
    lfs f9, lbl_808819A8
    lis r5, 0xd0ab
    lfs f0, 0x160(r1)
    fmr f4, f31
    fmr f5, f31
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f2, 0x164(r1)
    fmr f7, f3
    fmr f8, f3
    fnmsubs f1, f9, f30, f0
    mr r4, r25
    subi r5, r5, 0x7756
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_80149A30_00002178
lbl_fn_80149A30_00002074:
    rlwinm r3, r3, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_80149A30_00002178
    lfs f3, lbl_80881A20
    lfs f0, 0x5b0(r24)
    lfs f5, lbl_8088196C
    fmuls f6, f3, f0
    lfs f4, 0x608(r24)
    lfs f3, 0x604(r24)
    lfs f0, 0x600(r24)
    fadds f4, f4, f5
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f4, 0x15c(r1)
    lwz r3, lbl_8087F1E4
    stfs f0, 0x154(r1)
    stfs f3, 0x158(r1)
    lwz r25, 0x184(r3)
    stfs f5, 0x2c(r1)
    cmpwi r25, 0x0
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    beq lbl_fn_80149A30_000020D8
    b lbl_fn_80149A30_000020DC
lbl_fn_80149A30_000020D8:
    la r25, lbl_808813D0
lbl_fn_80149A30_000020DC:
    lfs f31, lbl_80881A88
    mr r4, r25
    lwz r3, lbl_8087EEC8
    li r5, 0x1
    fmr f1, f31
    lfs f2, lbl_8088196C
    li r6, 0x1
    bl fn_8006EF48
    fmr f30, f1
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x148
    addi r5, r1, 0x154
    bl fn_800BFAC8
    lfs f4, 0x150(r1)
    lfs f3, lbl_8088196C
    fcmpo cr0, f4, f3
    ble lbl_fn_80149A30_00002178
    lfs f0, lbl_80881964
    fcmpo cr0, f4, f0
    bge lbl_fn_80149A30_00002178
    lfs f9, lbl_808819A8
    lis r5, 0xc0ab
    lfs f0, 0x148(r1)
    fmr f4, f31
    fmr f5, f31
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f2, 0x14c(r1)
    fmr f7, f3
    fmr f8, f3
    fnmsubs f1, f9, f30, f0
    mr r4, r25
    subi r5, r5, 0x7701
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_80149A30_00002178:
    lbz r4, 0xd75(r24)
    extsb. r3, r4
    beq lbl_fn_80149A30_00002484
    lwz r0, 0x48(r24)
    cmpwi r0, 0x2
    bne lbl_fn_80149A30_00002484
    lwz r0, 0x7e0(r24)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80149A30_00002798
    cmpwi r3, 0x2
    beq lbl_fn_80149A30_00002798
    lfs f3, lbl_80881A20
    lis r3, lbl_80737808@ha
    lfs f0, 0x5b0(r24)
    lfs f7, lbl_8088196C
    fmuls f8, f3, f0
    lfs f4, 0x608(r24)
    lfs f3, 0x604(r24)
    lfs f0, 0x600(r24)
    fadds f4, f4, f7
    fadds f3, f3, f8
    fadds f0, f0, f7
    stfs f4, 0x144(r1)
    lfd f6, lbl_80737808@l(r3)
    stfs f0, 0x13c(r1)
    lfs f4, lbl_808819A0
    stfs f3, 0x140(r1)
    lwz r3, lbl_8087F1E4
    lwz r0, 0x12c8(r24)
    lwz r27, 0x1e4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xbfc(r1)
    lfs f3, lbl_80881964
    cmpwi r27, 0x0
    lfd f5, 0xbf8(r1)
    lfs f0, lbl_808819D4
    fsubs f5, f5, f6
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    fmadds f3, f4, f5, f3
    stfs f7, 0x28(r1)
    fmuls f30, f0, f3
    beq lbl_fn_80149A30_0000222C
    b lbl_fn_80149A30_00002230
lbl_fn_80149A30_0000222C:
    la r27, lbl_808813D0
lbl_fn_80149A30_00002230:
    lwz r28, 0x1ec(r3)
    cmpwi r28, 0x0
    beq lbl_fn_80149A30_00002240
    b lbl_fn_80149A30_00002244
lbl_fn_80149A30_00002240:
    la r28, lbl_808813D0
lbl_fn_80149A30_00002244:
    lwz r25, 0xe7c(r3)
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_00002254
    b lbl_fn_80149A30_00002258
lbl_fn_80149A30_00002254:
    la r25, lbl_808813D0
lbl_fn_80149A30_00002258:
    lis r4, 0xa100
    addi r3, r24, 0xd74
    subi r26, r4, 0x3fc0
    bl fn_8011D21C
    cmpwi r3, 0x0
    bne lbl_fn_80149A30_00002280
    lwz r4, 0xd94(r24)
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80149A30_00002290
lbl_fn_80149A30_00002280:
    lwz r4, 0xd94(r24)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80149A30_0000229C
lbl_fn_80149A30_00002290:
    lfs f0, lbl_808819A4
    fmuls f30, f30, f0
    b lbl_fn_80149A30_000022BC
lbl_fn_80149A30_0000229C:
    lbz r0, 0xd75(r24)
    cmpwi r0, 0x1
    bne lbl_fn_80149A30_000022B8
    lis r3, 0xa0ff
    mr r25, r28
    addi r26, r3, 0x4040
    b lbl_fn_80149A30_000022BC
lbl_fn_80149A30_000022B8:
    mr r25, r27
lbl_fn_80149A30_000022BC:
    lbz r0, 0xd74(r24)
    cmpwi r0, 0x1
    bne lbl_fn_80149A30_000022E4
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80149A30_000022E4
    lha r0, 0xd78(r24)
    cmpwi r0, 0x5a
    blt lbl_fn_80149A30_000022E4
    li r25, 0x0
lbl_fn_80149A30_000022E4:
    cmpwi r25, 0x0
    beq lbl_fn_80149A30_00002798
    fmr f1, f30
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_8088196C
    mr r4, r25
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    fmr f31, f1
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x130
    addi r5, r1, 0x13c
    bl fn_800BFAC8
    lfs f3, 0x138(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80149A30_00002798
    lfs f0, lbl_80881964
    fcmpo cr0, f3, f0
    bge lbl_fn_80149A30_00002798
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_0000240C
    lwz r0, 0x868(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80149A30_0000240C
    lwz r4, lbl_8087EEE0
    lis r3, lbl_80737808@ha
    lfd f4, lbl_80737808@l(r3)
    lwz r3, 0x40(r4)
    lfs f3, lbl_80881994
    xoris r0, r3, 0x8000
    stw r0, 0xc04(r1)
    lfs f5, 0x134(r1)
    lfd f0, 0xc00(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_80149A30_00002388
    b lbl_fn_80149A30_00002398
lbl_fn_80149A30_00002388:
    stw r0, 0xbfc(r1)
    lfd f0, 0xbf8(r1)
    fsubs f0, f0, f4
    fmuls f5, f3, f0
lbl_fn_80149A30_00002398:
    xoris r0, r3, 0x8000
    stw r0, 0xc04(r1)
    lis r3, lbl_80737808@ha
    lfs f3, lbl_808819BC
    lfd f4, lbl_80737808@l(r3)
    lfd f0, 0xc00(r1)
    fsubs f0, f0, f4
    fmsubs f0, f3, f0, f30
    fcmpo cr0, f5, f0
    bge lbl_fn_80149A30_000023F8
    stw r0, 0xbfc(r1)
    lfs f3, lbl_80881994
    lfd f0, 0xbf8(r1)
    lfs f5, 0x134(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_80149A30_000023E4
    b lbl_fn_80149A30_00002408
lbl_fn_80149A30_000023E4:
    stw r0, 0xc04(r1)
    lfd f0, 0xc00(r1)
    fsubs f0, f0, f4
    fmuls f5, f3, f0
    b lbl_fn_80149A30_00002408
lbl_fn_80149A30_000023F8:
    stw r0, 0xbfc(r1)
    lfd f0, 0xbf8(r1)
    fsubs f0, f0, f4
    fmsubs f5, f3, f0, f30
lbl_fn_80149A30_00002408:
    stfs f5, 0x134(r1)
lbl_fn_80149A30_0000240C:
    lwz r0, 0x12c8(r24)
    lis r3, lbl_80737808@ha
    lfd f8, lbl_80737808@l(r3)
    fmr f4, f30
    xoris r0, r0, 0x8000
    stw r0, 0xc04(r1)
    lfs f3, lbl_8088196C
    fmr f5, f30
    lfd f0, 0xc00(r1)
    lfs f9, 0x134(r1)
    fmr f6, f3
    lfs f7, lbl_80881A88
    fsubs f0, f0, f8
    lfs f11, lbl_808819A8
    fmr f8, f3
    fsubs f9, f9, f7
    lfs f10, 0x130(r1)
    fmr f7, f3
    lwz r3, lbl_8087EEB0
    mr r4, r25
    fnmsubs f1, f11, f31, f10
    fsubs f2, f9, f0
    mr r5, r26
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_80149A30_00002798
lbl_fn_80149A30_00002484:
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_80149A30_0000262C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80149A30_0000262C
    extsb. r0, r4
    beq lbl_fn_80149A30_00002798
    lfs f3, lbl_80881A20
    lfs f0, 0x5b0(r24)
    lfs f5, lbl_8088196C
    fmuls f6, f3, f0
    lfs f4, 0x608(r24)
    lfs f3, 0x604(r24)
    lfs f0, 0x600(r24)
    fadds f4, f4, f5
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f4, 0x12c(r1)
    lwz r4, lbl_8087F1E4
    stfs f0, 0x124(r1)
    stfs f3, 0x128(r1)
    lwz r3, 0x1e4(r4)
    stfs f5, 0x14(r1)
    cmpwi r3, 0x0
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    beq lbl_fn_80149A30_000024F8
    b lbl_fn_80149A30_000024FC
lbl_fn_80149A30_000024F8:
    la r3, lbl_808813D0
lbl_fn_80149A30_000024FC:
    lwz r27, 0x1ec(r4)
    cmpwi r27, 0x0
    beq lbl_fn_80149A30_0000250C
    b lbl_fn_80149A30_00002510
lbl_fn_80149A30_0000250C:
    la r27, lbl_808813D0
lbl_fn_80149A30_00002510:
    lbz r4, 0xd75(r24)
    cmpwi r4, 0x1
    bne lbl_fn_80149A30_00002520
    b lbl_fn_80149A30_00002524
lbl_fn_80149A30_00002520:
    mr r27, r3
lbl_fn_80149A30_00002524:
    extsb r0, r4
    lis r3, 0xa100
    cmpwi r0, 0x1
    subi r26, r3, 0x3fc0
    bne lbl_fn_80149A30_00002540
    lis r3, 0xa0ff
    addi r26, r3, 0x4040
lbl_fn_80149A30_00002540:
    lwz r0, 0x12c8(r24)
    lis r25, lbl_80737808@ha
    lfd f5, lbl_80737808@l(r25)
    mr r4, r27
    xoris r0, r0, 0x8000
    stw r0, 0xbfc(r1)
    lfs f4, lbl_808819A0
    li r5, 0x1
    lfd f0, 0xbf8(r1)
    li r6, 0x1
    lfs f3, lbl_80881964
    fsubs f5, f0, f5
    lfs f0, lbl_808819D4
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_8088196C
    fmadds f3, f4, f5, f3
    fmuls f31, f0, f3
    fmr f1, f31
    bl fn_8006EF48
    fmr f30, f1
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x118
    addi r5, r1, 0x124
    bl fn_800BFAC8
    lfs f4, 0x120(r1)
    lfs f3, lbl_8088196C
    fcmpo cr0, f4, f3
    ble lbl_fn_80149A30_00002798
    lfs f0, lbl_80881964
    fcmpo cr0, f4, f0
    bge lbl_fn_80149A30_00002798
    lwz r0, 0x12c8(r24)
    fmr f4, f31
    lfs f8, 0x11c(r1)
    fmr f5, f31
    xoris r0, r0, 0x8000
    stw r0, 0xc04(r1)
    lfs f6, lbl_80881A88
    lfd f7, lbl_80737808@l(r25)
    mr r4, r27
    lfd f0, 0xc00(r1)
    fsubs f9, f8, f6
    lfs f11, lbl_808819A8
    fmr f6, f3
    fsubs f0, f0, f7
    lfs f10, 0x118(r1)
    fmr f7, f3
    fmr f8, f3
    lwz r3, lbl_8087EEB0
    fnmsubs f1, f11, f30, f10
    fsubs f2, f9, f0
    mr r5, r26
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_80149A30_00002798
lbl_fn_80149A30_0000262C:
    lwz r0, 0x55c(r24)
    cmpwi r0, 0x6
    bne lbl_fn_80149A30_00002798
    lwz r0, 0x560(r24)
    cmpwi r0, 0x60
    bne lbl_fn_80149A30_00002798
    addi r3, r24, 0x7d4
    bl fn_80134290
    cmpwi r3, 0x0
    bne lbl_fn_80149A30_00002798
    lfs f3, lbl_80881A20
    lfs f0, 0x5b0(r24)
    lfs f5, lbl_8088196C
    fmuls f6, f3, f0
    lfs f4, 0x608(r24)
    lfs f3, 0x604(r24)
    lfs f0, 0x600(r24)
    fadds f4, f4, f5
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f4, 0x114(r1)
    lwz r3, lbl_8087F1E4
    stfs f0, 0x10c(r1)
    stfs f3, 0x110(r1)
    lwz r26, 0x1e4(r3)
    stfs f5, 0x8(r1)
    cmpwi r26, 0x0
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    beq lbl_fn_80149A30_000026A8
    b lbl_fn_80149A30_000026AC
lbl_fn_80149A30_000026A8:
    la r26, lbl_808813D0
lbl_fn_80149A30_000026AC:
    lwz r0, 0x12c8(r24)
    lis r25, lbl_80737808@ha
    lfd f5, lbl_80737808@l(r25)
    mr r4, r26
    xoris r0, r0, 0x8000
    stw r0, 0xbfc(r1)
    lfs f4, lbl_808819A0
    li r5, 0x1
    lfd f0, 0xbf8(r1)
    li r6, 0x1
    lfs f3, lbl_80881964
    fsubs f5, f0, f5
    lfs f0, lbl_808819D4
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_8088196C
    fmadds f3, f4, f5, f3
    fmuls f31, f0, f3
    fmr f1, f31
    bl fn_8006EF48
    fmr f30, f1
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x100
    addi r5, r1, 0x10c
    bl fn_800BFAC8
    lfs f4, 0x108(r1)
    lfs f3, lbl_8088196C
    fcmpo cr0, f4, f3
    ble lbl_fn_80149A30_00002798
    lfs f0, lbl_80881964
    fcmpo cr0, f4, f0
    bge lbl_fn_80149A30_00002798
    lwz r0, 0x12c8(r24)
    lis r5, 0xa100
    lfs f7, 0x104(r1)
    fmr f4, f31
    xoris r0, r0, 0x8000
    stw r0, 0xc04(r1)
    lfs f5, lbl_80881A88
    fmr f8, f3
    lfd f6, lbl_80737808@l(r25)
    lfd f0, 0xc00(r1)
    fsubs f9, f7, f5
    lfs f11, lbl_808819A8
    fmr f5, f31
    fsubs f0, f0, f6
    lfs f10, 0x100(r1)
    fmr f6, f3
    fmr f7, f3
    lwz r3, lbl_8087EEB0
    fnmsubs f1, f11, f30, f10
    fsubs f2, f9, f0
    mr r4, r26
    subi r5, r5, 0x3fc0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_80149A30_00002798:
    li r0, 0xc48
    addi r11, r1, 0xc30
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xc40(r1)
    li r0, 0xc38
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xc30(r1)
    bl _restgpr_24
    lwz r0, 0xc54(r1)
    mtlr r0
    addi r1, r1, 0xc50
    blr
}
