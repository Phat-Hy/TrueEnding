#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B9CC(void);
extern void fn_8006B174(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_8008A4B0(void);
extern void fn_8008A76C(void);
extern void fn_800970CC(void);
extern void fn_80097180(void);
extern void fn_800991D0(void);
extern void fn_800A03E4(void);
extern void fn_800A0448(void);
extern void fn_800A05FC(void);
extern void fn_800A08D4(void);
extern void fn_800A08E0(void);
extern void fn_800A0A68(void);
extern void fn_800A1060(void);
extern void fn_800A787C(void);
extern void fn_800A8BE4(void);
extern void fn_800DC12C(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA6C(void);
extern void fn_80473F18(void);
extern void fn_80473F88(void);
extern void fn_804741C0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9D20(void);
extern void fn_80680CF8(void);
extern void fn_80682544(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern void fn_80695AD0(void);
extern void fn_8072D210(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80732258[];
extern u8 lbl_80732368[];
extern u8 lbl_80766768[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80778864[];
extern u8 lbl_80778888[];

/* Small data declarations */
extern u32 lbl_8087D7AC;
extern u32 lbl_8087D7B0;
extern u32 lbl_8087D7B4;
extern u32 lbl_8087D7B8;
extern u32 lbl_8087D7BC;
extern u32 lbl_8087D7C0;
extern u32 lbl_8087EF18;
extern u32 lbl_8087EFA8;
extern u32 lbl_80880BF8;
extern u32 lbl_80880BFC;
extern u32 lbl_80880C00;
extern u32 lbl_80880C08;
extern u32 lbl_80880C28;
extern u32 lbl_80880C2C;
extern u32 lbl_80880C30;
extern u32 lbl_80880C34;

/* Function declarations */
void fn_800971D4(void);
void fn_800973C0(void);
void fn_80097510(void);
void fn_8009757C(void);
void fn_80097750(void);
void fn_800977F0(void);
void fn_800979E8(void);
void fn_80097A20(void);
void fn_80097A88(void);
void fn_80097A9C(void);
void fn_80097B34(void);
void fn_80097B74(void);
void fn_80097BF4(void);
void fn_80097C08(void);
void fn_80097CCC(void);
void fn_80097D40(void);
void fn_80097D7C(void);
void fn_80097D9C(void);
void fn_80097E80(void);
void fn_80098698(void);
void fn_80098948(void);
void fn_80098C90(void);
void fn_80098DD8(void);
void fn_80099010(void);

asm void fn_800971D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    beq lbl_fn_800971D4_000001C8
    lis r4, lbl_80778888@ha
    li r28, 0x0
    addi r4, r4, lbl_80778888@l
    stw r4, 0x0(r3)
    li r29, 0x0
    b lbl_fn_800971D4_00000070
lbl_fn_800971D4_00000044:
    add r3, r30, r29
    lwz r3, 0x388(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800971D4_00000068
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_800971D4_00000068:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_800971D4_00000070:
    lwz r0, 0x384(r30)
    cmplw r28, r0
    blt lbl_fn_800971D4_00000044
    addic. r29, r30, 0x370
    beq lbl_fn_800971D4_000000BC
    beq lbl_fn_800971D4_000000BC
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800971D4_000000BC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800971D4_000000B4
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800971D4_000000B4:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_800971D4_000000BC:
    addic. r29, r30, 0x35c
    beq lbl_fn_800971D4_000000FC
    beq lbl_fn_800971D4_000000FC
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800971D4_000000FC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800971D4_000000F4
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800971D4_000000F4:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_800971D4_000000FC:
    addic. r0, r30, 0x354
    beq lbl_fn_800971D4_00000128
    lwz r3, 0x358(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800971D4_0000011C
    lis r4, fn_80097180@ha
    addi r4, r4, fn_80097180@l
    bl fn_80695A50
lbl_fn_800971D4_0000011C:
    li r0, 0x0
    stw r0, 0x358(r30)
    stw r0, 0x354(r30)
lbl_fn_800971D4_00000128:
    addic. r0, r30, 0x224
    beq lbl_fn_800971D4_00000154
    lwz r3, 0x228(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800971D4_00000148
    lis r4, fn_800970CC@ha
    addi r4, r4, fn_800970CC@l
    bl fn_80695A50
lbl_fn_800971D4_00000148:
    li r0, 0x0
    stw r0, 0x228(r30)
    stw r0, 0x224(r30)
lbl_fn_800971D4_00000154:
    addic. r0, r30, 0x21c
    beq lbl_fn_800971D4_00000180
    lwz r3, 0x220(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800971D4_00000174
    beq lbl_fn_800971D4_00000174
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800971D4_00000174:
    li r0, 0x0
    stw r0, 0x220(r30)
    stw r0, 0x21c(r30)
lbl_fn_800971D4_00000180:
    addic. r0, r30, 0x214
    beq lbl_fn_800971D4_000001AC
    lwz r3, 0x218(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800971D4_000001A0
    beq lbl_fn_800971D4_000001A0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800971D4_000001A0:
    li r0, 0x0
    stw r0, 0x218(r30)
    stw r0, 0x214(r30)
lbl_fn_800971D4_000001AC:
    mr r3, r30
    li r4, 0x0
    bl fn_8008A76C
    cmpwi r31, 0x0
    ble lbl_fn_800971D4_000001C8
    mr r3, r30
    bl dtor_80084684
lbl_fn_800971D4_000001C8:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800973C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, 0x384(r3)
    cmplwi r0, 0x8
    bge lbl_fn_800973C0_00000320
    mr r3, r29
    bl fn_8005B9CC
    bl fn_800DC12C
    cmpwi r3, 0x0
    bne lbl_fn_800973C0_000002A4
    lis r5, lbl_80732368@ha
    li r3, 0x78
    addi r5, r5, lbl_80732368@l
    li r4, 0x6
    addi r5, r5, 0xa
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_800973C0_00000260
    bl fn_800A787C
    mr r30, r3
lbl_fn_800973C0_00000260:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    mr r5, r29
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x384(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x388
    beq lbl_fn_800973C0_00000294
    stw r30, 0x0(r3)
lbl_fn_800973C0_00000294:
    lwz r3, 0x384(r31)
    addi r0, r3, 0x1
    stw r0, 0x384(r31)
    b lbl_fn_800973C0_00000320
lbl_fn_800973C0_000002A4:
    cmpwi r3, 0x1
    bne lbl_fn_800973C0_00000320
    lis r5, lbl_80732368@ha
    li r3, 0x78
    addi r5, r5, lbl_80732368@l
    li r4, 0x6
    addi r5, r5, 0xa
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_800973C0_000002E0
    bl fn_800A8BE4
    mr r30, r3
lbl_fn_800973C0_000002E0:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    mr r5, r29
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x384(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x388
    beq lbl_fn_800973C0_00000314
    stw r30, 0x0(r3)
lbl_fn_800973C0_00000314:
    lwz r3, 0x384(r31)
    addi r0, r3, 0x1
    stw r0, 0x384(r31)
lbl_fn_800973C0_00000320:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80097510(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    mr r31, r29
    b lbl_fn_80097510_00000380
lbl_fn_80097510_00000364:
    lwz r3, 0x388(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_80097510_00000380:
    lwz r0, 0x384(r29)
    cmplw r30, r0
    blt lbl_fn_80097510_00000364
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8009757C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    bl _savegpr_26
    lis r4, lbl_80732258@ha
    lfs f28, lbl_80880C28
    lfd f31, lbl_80732258@l(r4)
    mr r29, r3
    lfs f29, lbl_80880C30
    addi r31, r1, 0x8
    lfs f30, lbl_80880C2C
    li r30, 0x0
    li r28, 0x0
    lis r26, 0x4330
    lis r27, 0x4178
    b lbl_fn_8009757C_0000051C
lbl_fn_8009757C_0000041C:
    lwz r0, 0x3bc(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8009757C_000004FC
    psq_l f1, 0x3a8(r29), 0, 0
    lfs f2, 0x3b0(r29)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r31), 0, 0
    lfs f26, 0x3b4(r29)
    lfs f27, 0x3b8(r29)
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x4c(r1)
    fsubs f5, f26, f27
    lfs f4, 0x8(r1)
    stw r26, 0x48(r1)
    lfs f3, 0xc(r1)
    lfd f6, 0x48(r1)
    lfs f0, 0x10(r1)
    fsubs f6, f6, f31
    fdivs f6, f6, f28
    fmadds f5, f5, f6, f27
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_80680CF8
    addi r0, r27, 0x749f
    stw r26, 0x50(r1)
    mulhw r0, r0, r3
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x18
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f31
    fdivs f0, f0, f29
    fmuls f1, f30, f0
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x18
    bl fn_805F93C0
    add r3, r29, r28
    mr r4, r31
    lwz r3, 0x388(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8009757C_000004FC:
    add r3, r29, r28
    lwz r3, 0x388(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    addi r30, r30, 0x1
    addi r28, r28, 0x4
lbl_fn_8009757C_0000051C:
    lwz r0, 0x384(r29)
    cmplw r30, r0
    blt lbl_fn_8009757C_0000041C
    lwz r3, 0x3bc(r29)
    subi r0, r3, 0x1
    stw r0, 0x3bc(r29)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80097750(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    fmr f30, f1
    stw r31, 0x2c(r1)
    addi r31, r1, 0x8
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r3
    mr r3, r31
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    mr r4, r31
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F98D0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
    stfs f2, 0x3b0(r29)
    psq_st f1, 0x3a8(r29), 0, 0
    stfs f30, 0x3b4(r29)
    stfs f31, 0x3b8(r29)
    stw r30, 0x3bc(r29)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800977F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r4, 0x16c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800977F0_000007F4
    lwz r0, 0x4(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_800977F0_00000734
    lwz r3, 0x218(r3)
    lwz r30, 0x44(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800977F0_00000674
    beq lbl_fn_800977F0_00000674
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800977F0_00000674:
    cmpwi r30, 0x0
    stw r30, 0x214(r31)
    beq lbl_fn_800977F0_000006BC
    mulli r3, r30, 0x12
    li r4, 0xb
    la r5, lbl_8087D7C0
    la r6, lbl_8087D7BC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800979E8@ha
    mr r7, r30
    addi r4, r4, fn_800979E8@l
    li r5, 0x0
    li r6, 0x12
    bl fn_80695720
    stw r3, 0x218(r31)
    b lbl_fn_800977F0_000006C4
lbl_fn_800977F0_000006BC:
    li r0, 0x0
    stw r0, 0x218(r31)
lbl_fn_800977F0_000006C4:
    lwz r4, 0x220(r31)
    lwz r3, 0x16c(r31)
    cmpwi r4, 0x0
    lwz r30, 0x44(r3)
    beq lbl_fn_800977F0_000006E4
    beq lbl_fn_800977F0_000006E4
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_800977F0_000006E4:
    cmpwi r30, 0x0
    stw r30, 0x21c(r31)
    beq lbl_fn_800977F0_0000072C
    mulli r3, r30, 0x2c
    li r4, 0xb
    la r5, lbl_8087D7B8
    la r6, lbl_8087D7B4
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8008A4B0@ha
    mr r7, r30
    addi r4, r4, fn_8008A4B0@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    stw r3, 0x220(r31)
    b lbl_fn_800977F0_00000734
lbl_fn_800977F0_0000072C:
    li r0, 0x0
    stw r0, 0x220(r31)
lbl_fn_800977F0_00000734:
    lwz r0, 0x4(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_800977F0_000007F4
    lwz r3, 0x358(r31)
    lwz r30, 0x224(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800977F0_00000760
    lis r4, fn_80097180@ha
    addi r4, r4, fn_80097180@l
    bl fn_80695A50
lbl_fn_800977F0_00000760:
    cmpwi r30, 0x0
    stw r30, 0x354(r31)
    beq lbl_fn_800977F0_000007AC
    slwi r3, r30, 4
    li r4, 0x6
    addi r3, r3, 0x10
    la r5, lbl_8087D7B0
    la r6, lbl_8087D7AC
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80097BF4@ha
    lis r5, fn_80097180@ha
    mr r7, r30
    li r6, 0x10
    addi r4, r4, fn_80097BF4@l
    addi r5, r5, fn_80097180@l
    bl fn_80695720
    stw r3, 0x358(r31)
    b lbl_fn_800977F0_000007B4
lbl_fn_800977F0_000007AC:
    li r0, 0x0
    stw r0, 0x358(r31)
lbl_fn_800977F0_000007B4:
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_800977F0_000007E8
lbl_fn_800977F0_000007C4:
    lwz r3, 0x358(r31)
    mr r4, r31
    lwz r0, 0x228(r31)
    add r3, r3, r28
    add r5, r0, r29
    bl fn_800A0A68
    addi r29, r29, 0xc
    addi r28, r28, 0x10
    addi r30, r30, 0x1
lbl_fn_800977F0_000007E8:
    lwz r0, 0x224(r31)
    cmplw r30, r0
    blt lbl_fn_800977F0_000007C4
lbl_fn_800977F0_000007F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800979E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x12
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80097A20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    mulli r0, r4, 0xc
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x228(r3)
    add r31, r5, r0
    mr r3, r31
    bl fn_80473F88
    li r0, 0x0
    stw r0, 0x8(r31)
    slwi r0, r30, 4
    lwz r3, 0x358(r29)
    add r3, r3, r0
    bl fn_800A1060
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80097A88(void)
{
    nofralloc
    mulli r0, r4, 0xc
    lwz r3, 0x228(r3)
    mr r4, r5
    add r3, r3, r0
    b fn_800A03E4
}

asm void fn_80097A9C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x224(r3)
    cmpw r0, r4
    ble lbl_fn_80097A9C_00000940
    cmpwi r4, 0x0
    bge lbl_fn_80097A9C_00000908
    b lbl_fn_80097A9C_00000940
lbl_fn_80097A9C_00000908:
    mulli r0, r4, 0xc
    lwz r3, 0x228(r3)
    mr r4, r30
    add r31, r3, r0
    mr r3, r31
    bl fn_804741C0
    lwz r3, 0x8(r30)
    slwi r0, r29, 4
    stw r3, 0x8(r31)
    mr r4, r28
    mr r5, r30
    lwz r3, 0x358(r28)
    add r3, r3, r0
    bl fn_800A0A68
lbl_fn_80097A9C_00000940:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80097B34(void)
{
    nofralloc
    lwz r0, 0x224(r3)
    li r6, 0x0
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80097B34_00000998
lbl_fn_80097B34_00000978:
    lwz r0, 0x228(r3)
    add r5, r0, r4
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80097B34_00000990
    addi r6, r6, 0x1
lbl_fn_80097B34_00000990:
    addi r4, r4, 0xc
    bdnz lbl_fn_80097B34_00000978
lbl_fn_80097B34_00000998:
    mr r3, r6
    blr
}

asm void fn_80097B74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_80097B74_000009F0
lbl_fn_80097B74_000009D0:
    lwz r0, 0x228(r28)
    add r3, r0, r31
    bl fn_800A0448
    cmpwi r3, 0x0
    beq lbl_fn_80097B74_000009E8
    li r30, 0x1
lbl_fn_80097B74_000009E8:
    addi r29, r29, 0x1
    addi r31, r31, 0xc
lbl_fn_80097B74_000009F0:
    lwz r0, 0x224(r28)
    cmpw r29, r0
    blt lbl_fn_80097B74_000009D0
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80097BF4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x0(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80097C08(void)
{
    nofralloc
    cmpwi r7, 0x0
    bne lbl_fn_80097C08_00000A50
    mulli r0, r4, 0x30
    add r7, r3, r0
    lwz r0, 0x22c(r7)
    cmpw r5, r0
    beq lbl_fn_80097C08_00000AE4
lbl_fn_80097C08_00000A50:
    mulli r0, r4, 0x30
    cmpwi r5, 0x0
    add r4, r3, r0
    lwz r0, 0x230(r4)
    stw r0, 0x250(r4)
    lfs f0, 0x234(r4)
    stfs f0, 0x254(r4)
    lfs f0, 0x23c(r4)
    stfs f0, 0x258(r4)
    stw r5, 0x22c(r4)
    blt lbl_fn_80097C08_00000AD8
    lwz r0, 0x224(r3)
    cmpw r5, r0
    bge lbl_fn_80097C08_00000AD8
    mulli r0, r5, 0xc
    lwz r3, 0x228(r3)
    add r3, r3, r0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80097C08_00000AD8
    stw r3, 0x230(r4)
    neg r0, r6
    lfs f0, lbl_80880BF8
    or r3, r0, r6
    stfs f0, 0x234(r4)
    neg r0, r8
    or r0, r0, r8
    srwi r3, r3, 31
    stfs f1, 0x23c(r4)
    srwi r0, r0, 31
    stb r3, 0x244(r4)
    stfs f2, 0x240(r4)
    stb r0, 0x245(r4)
    blr
lbl_fn_80097C08_00000AD8:
    li r0, 0x0
    stw r0, 0x230(r4)
    blr
lbl_fn_80097C08_00000AE4:
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stb r0, 0x244(r7)
    blr
}

asm void fn_80097CCC(void)
{
    nofralloc
    mulli r0, r4, 0x30
    cmpwi r4, 0x3
    add r3, r3, r0
    lwz r0, 0x230(r3)
    stw r0, 0x250(r3)
    lfs f0, 0x234(r3)
    stfs f0, 0x254(r3)
    lfs f0, 0x23c(r3)
    stfs f0, 0x258(r3)
    bne lbl_fn_80097CCC_00000B44
    li r0, 0x0
    stw r0, 0x230(r3)
    lfs f0, 0x258(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80097CCC_00000B38
    b lbl_fn_80097CCC_00000B3C
lbl_fn_80097CCC_00000B38:
    fmr f1, f0
lbl_fn_80097CCC_00000B3C:
    stfs f1, 0x23c(r3)
    blr
lbl_fn_80097CCC_00000B44:
    li r0, -0x1
    stw r0, 0x22c(r3)
    li r0, 0x0
    stw r0, 0x230(r3)
    bltlr
    lfs f0, lbl_80880BF8
    stfs f0, 0x234(r3)
    stfs f1, 0x23c(r3)
    stb r0, 0x244(r3)
    blr
}

asm void fn_80097D40(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_80097D40_00000B80
    lwz r0, 0x224(r3)
    cmpw r4, r0
    blt lbl_fn_80097D40_00000B88
lbl_fn_80097D40_00000B80:
    li r3, 0x0
    blr
lbl_fn_80097D40_00000B88:
    mulli r0, r4, 0xc
    lwz r3, 0x228(r3)
    add r3, r3, r0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bnelr
    li r3, 0x0
    blr
}

asm void fn_80097D7C(void)
{
    nofralloc
    mulli r0, r4, 0x30
    add r3, r3, r0
    lwz r3, 0x230(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80097D7C_00000BC0
    b fn_800A08D4
lbl_fn_80097D7C_00000BC0:
    lfs f1, lbl_80880BF8
    blr
}

asm void fn_80097D9C(void)
{
    nofralloc
    li r12, 0x0
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_80097D9C_00000C98
lbl_fn_80097D9C_00000BD8:
    lwz r7, 0x48(r7)
    lwz r11, 0x16c(r4)
    lwzx r7, r7, r6
    cmpwi r11, 0x0
    lwz r8, 0x14(r7)
    bne lbl_fn_80097D9C_00000BF8
    li r9, -0x1
    b lbl_fn_80097D9C_00000C38
lbl_fn_80097D9C_00000BF8:
    lwz r0, 0x44(r11)
    li r9, 0x0
    li r10, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80097D9C_00000C34
lbl_fn_80097D9C_00000C10:
    lwz r7, 0x48(r11)
    lwzx r7, r7, r10
    lwz r0, 0x14(r7)
    cmplw r8, r0
    bne lbl_fn_80097D9C_00000C28
    b lbl_fn_80097D9C_00000C38
lbl_fn_80097D9C_00000C28:
    addi r10, r10, 0x4
    addi r9, r9, 0x1
    bdnz lbl_fn_80097D9C_00000C10
lbl_fn_80097D9C_00000C34:
    li r9, -0x1
lbl_fn_80097D9C_00000C38:
    cmpwi r9, 0x0
    blt lbl_fn_80097D9C_00000C8C
    mulli r7, r9, 0x2c
    lwz r8, 0x220(r4)
    lwz r0, 0x220(r3)
    add r7, r8, r7
    add r8, r0, r5
    lwz r0, 0x0(r7)
    stw r0, 0x0(r8)
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r8), 0, 0
    stfs f2, 0xc(r8)
    psq_l f2, 0x18(r7), 0, 0
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r8), 0, 0
    psq_st f2, 0x18(r8), 0, 0
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r8), 0, 0
    stfs f2, 0x28(r8)
lbl_fn_80097D9C_00000C8C:
    addi r12, r12, 0x1
    addi r5, r5, 0x2c
    addi r6, r6, 0x4
lbl_fn_80097D9C_00000C98:
    lwz r7, 0x16c(r3)
    lwz r0, 0x44(r7)
    cmpw r12, r0
    blt lbl_fn_80097D9C_00000BD8
    blr
}

asm void fn_80097E80(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xd0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x16c(r3)
    mr r24, r3
    mr r25, r4
    cmpwi r0, 0x0
    bne lbl_fn_80097E80_00000CFC
    li r3, 0x0
    b lbl_fn_80097E80_0000148C
lbl_fn_80097E80_00000CFC:
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80097E80_00000D28
    lwz r0, 0x20c(r3)
    extlwi r0, r0, 2, 25
    srawi. r0, r0, 31
    bne lbl_fn_80097E80_00000D28
    bl fn_80098698
    li r3, 0x0
    b lbl_fn_80097E80_0000148C
lbl_fn_80097E80_00000D28:
    lis r14, lbl_80732368@ha
    addi r14, r14, lbl_80732368@l
    addi r3, r14, 0x260
    bl fn_800DC6B4
    mr r19, r3
    addi r3, r14, 0x266
    bl fn_800DC6B4
    lwz r0, 0x230(r24)
    mr r20, r3
    cmpwi r0, 0x0
    beq lbl_fn_80097E80_00001300
    lwz r0, 0x50(r24)
    li r26, 0x0
    lwz r3, lbl_8087EFA8
    addi r30, r24, 0x22c
    mulli r0, r0, 0x18
    lwz r4, lbl_8087EF18
    lfs f1, 0x3a4(r3)
    mr r15, r30
    lfs f0, 0x350(r24)
    addis r29, r4, 0x1
    add r3, r24, r0
    fmuls f29, f0, f1
    lwz r28, 0x16c(r3)
    mr r21, r26
    lwz r27, 0x178(r3)
    mr r22, r26
    lfs f28, lbl_80880BF8
    lfs f30, lbl_80880C00
    addi r14, r1, 0x4c
    lfs f31, lbl_80880BFC
    li r23, 0x0
    subi r29, r29, 0x7c00
    b lbl_fn_80097E80_000011E8
lbl_fn_80097E80_00000DB0:
    lwz r31, 0x4(r15)
    cmpwi r31, 0x0
    beq lbl_fn_80097E80_000011DC
    cmpwi r25, 0x0
    beq lbl_fn_80097E80_00000DD4
    lfs f1, 0x14(r15)
    lfs f0, 0x10(r15)
    fmadds f0, f1, f29, f0
    stfs f0, 0x10(r15)
lbl_fn_80097E80_00000DD4:
    lfs f1, 0x10(r15)
    lfs f0, 0x1c(r15)
    fcmpo cr0, f1, f0
    ble lbl_fn_80097E80_00000DE8
    stfs f0, 0x10(r15)
lbl_fn_80097E80_00000DE8:
    lwz r0, 0x34c(r24)
    cmpwi r0, 0x1
    bne lbl_fn_80097E80_00000FB0
    lfs f0, 0x10(r15)
    fsubs f0, f0, f30
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_80097E80_00000E10
    lwz r29, 0x220(r24)
lbl_fn_80097E80_00000E10:
    lwz r0, 0x21c(r24)
    mr r3, r29
    li r4, 0x0
    mulli r5, r0, 0x2c
    bl memset
    li r17, 0x0
    li r16, 0x0
    b lbl_fn_80097E80_00000EC0
lbl_fn_80097E80_00000E30:
    lbz r0, 0x19(r15)
    lwz r3, 0x48(r28)
    cmpwi r0, 0x0
    lwzx r3, r3, r16
    bne lbl_fn_80097E80_00000E58
    lwz r0, 0x14(r3)
    cmplw r0, r19
    beq lbl_fn_80097E80_00000EB8
    cmplw r0, r20
    beq lbl_fn_80097E80_00000EB8
lbl_fn_80097E80_00000E58:
    cmpwi r27, 0x0
    beq lbl_fn_80097E80_00000E70
    lwz r0, 0x18(r3)
    slwi r0, r0, 2
    lwzx r7, r27, r0
    b lbl_fn_80097E80_00000E74
lbl_fn_80097E80_00000E70:
    lwz r7, 0x18(r3)
lbl_fn_80097E80_00000E74:
    lwz r3, 0x0(r15)
    slwi r0, r7, 1
    lwz r4, 0x358(r24)
    slwi r3, r3, 4
    add r3, r4, r3
    lwz r3, 0x8(r3)
    lhax r5, r3, r0
    cmpwi r5, 0x0
    blt lbl_fn_80097E80_00000EB8
    mulli r4, r7, 0x2c
    lwz r6, 0x218(r24)
    lfs f1, 0x8(r15)
    mr r3, r31
    mulli r0, r7, 0x12
    add r4, r29, r4
    add r6, r6, r0
    bl fn_800A05FC
lbl_fn_80097E80_00000EB8:
    addi r16, r16, 0x4
    addi r17, r17, 0x1
lbl_fn_80097E80_00000EC0:
    lwz r0, 0x44(r28)
    cmpw r17, r0
    blt lbl_fn_80097E80_00000E30
    lwz r0, 0x3c0(r24)
    cmpwi r0, 0x0
    blt lbl_fn_80097E80_00001140
    mr r3, r31
    bl fn_80473F18
    stw r21, 0x64(r1)
    mr r16, r3
    stw r21, 0x68(r1)
    stw r21, 0x6c(r1)
    bl strlen
    mr r17, r3
    addi r3, r1, 0x64
    mr r4, r17
    bl fn_80013DC4
    lbz r0, 0x18(r1)
    addi r3, r1, 0x64
    stb r0, 0x14(r1)
    mr r6, r16
    add r7, r16, r17
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r4, r1, 0x64
    addi r3, r1, 0x58
    bl fn_8006B174
    addi r3, r24, 0x3c8
    bl strlen
    lwz r0, 0x58(r1)
    mr r5, r3
    addi r4, r24, 0x3c8
    srwi. r16, r0, 31
    bne lbl_fn_80097E80_00000F58
    addi r3, r1, 0x59
    b lbl_fn_80097E80_00000F5C
lbl_fn_80097E80_00000F58:
    lwz r3, 0x60(r1)
lbl_fn_80097E80_00000F5C:
    bl fn_80682544
    cmpwi r16, 0x0
    mr r16, r3
    beq lbl_fn_80097E80_00000F74
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_80097E80_00000F74:
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80097E80_00000F88
    lwz r3, 0x6c(r1)
    bl dtor_80084684
lbl_fn_80097E80_00000F88:
    cmpwi r16, 0x0
    beq lbl_fn_80097E80_00001140
    lwz r0, 0x3c0(r24)
    lfs f0, 0x3c4(r24)
    mulli r0, r0, 0x2c
    add r3, r29, r0
    lfs f1, 0x8(r3)
    fmuls f0, f1, f0
    stfs f0, 0x8(r3)
    b lbl_fn_80097E80_00001140
lbl_fn_80097E80_00000FB0:
    lfs f0, 0x20(r15)
    lwz r0, lbl_8087EF18
    fcmpo cr0, f0, f28
    add r18, r0, r23
    ble lbl_fn_80097E80_00001060
    lwz r0, 0x21c(r24)
    mr r3, r18
    li r4, 0x0
    mulli r5, r0, 0x2c
    bl memset
    li r17, 0x0
    li r16, 0x0
    b lbl_fn_80097E80_00001054
lbl_fn_80097E80_00000FE4:
    lwz r3, 0x48(r28)
    cmpwi r27, 0x0
    lwzx r3, r3, r16
    beq lbl_fn_80097E80_00001004
    lwz r0, 0x18(r3)
    slwi r0, r0, 2
    lwzx r0, r27, r0
    b lbl_fn_80097E80_00001008
lbl_fn_80097E80_00001004:
    lwz r0, 0x18(r3)
lbl_fn_80097E80_00001008:
    lwz r4, 0x0(r15)
    slwi r3, r0, 1
    lwz r5, 0x358(r24)
    slwi r4, r4, 4
    add r4, r5, r4
    lwz r4, 0x8(r4)
    lhax r5, r4, r3
    cmpwi r5, 0x0
    blt lbl_fn_80097E80_0000104C
    mulli r4, r0, 0x2c
    lwz r6, 0x218(r24)
    lfs f1, 0x8(r15)
    mr r3, r31
    mulli r0, r0, 0x12
    add r4, r18, r4
    add r6, r6, r0
    bl fn_800A05FC
lbl_fn_80097E80_0000104C:
    addi r16, r16, 0x4
    addi r17, r17, 0x1
lbl_fn_80097E80_00001054:
    lwz r0, 0x44(r28)
    cmpw r17, r0
    blt lbl_fn_80097E80_00000FE4
lbl_fn_80097E80_00001060:
    lwz r0, 0x3c0(r24)
    cmpwi r0, 0x0
    blt lbl_fn_80097E80_00001140
    mr r3, r31
    bl fn_80473F18
    stw r22, 0x4c(r1)
    mr r17, r3
    stw r22, 0x50(r1)
    stw r22, 0x54(r1)
    bl strlen
    mr r16, r3
    mr r3, r14
    mr r4, r16
    bl fn_80013DC4
    lbz r0, 0x10(r1)
    mr r3, r14
    stb r0, 0xc(r1)
    mr r6, r17
    add r7, r17, r16
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r14
    addi r3, r1, 0x40
    bl fn_8006B174
    addi r3, r24, 0x3c8
    bl strlen
    lwz r0, 0x40(r1)
    mr r5, r3
    addi r4, r24, 0x3c8
    srwi. r16, r0, 31
    bne lbl_fn_80097E80_000010EC
    addi r3, r1, 0x41
    b lbl_fn_80097E80_000010F0
lbl_fn_80097E80_000010EC:
    lwz r3, 0x48(r1)
lbl_fn_80097E80_000010F0:
    bl fn_80682544
    cmpwi r16, 0x0
    mr r16, r3
    beq lbl_fn_80097E80_00001108
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_80097E80_00001108:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80097E80_0000111C
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_80097E80_0000111C:
    cmpwi r16, 0x0
    beq lbl_fn_80097E80_00001140
    lwz r0, 0x3c0(r24)
    lfs f0, 0x3c4(r24)
    mulli r0, r0, 0x2c
    add r3, r18, r0
    lfs f1, 0x8(r3)
    fmuls f0, f1, f0
    stfs f0, 0x8(r3)
lbl_fn_80097E80_00001140:
    cmpwi r25, 0x0
    beq lbl_fn_80097E80_00001170
    lfs f1, 0xc(r15)
    lfs f0, 0x8(r15)
    fmadds f0, f1, f29, f0
    stfs f0, 0x8(r15)
    b lbl_fn_80097E80_00001170
lbl_fn_80097E80_0000115C:
    mr r3, r31
    bl fn_800A08D4
    lfs f0, 0x8(r15)
    fsubs f0, f0, f1
    stfs f0, 0x8(r15)
lbl_fn_80097E80_00001170:
    lbz r0, 0x18(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80097E80_000011B8
    mr r3, r31
    bl fn_800A08D4
    lfs f0, 0x8(r15)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80097E80_000011B8
    lfs f0, 0xc(r15)
    fcmpo cr0, f0, f28
    bgt lbl_fn_80097E80_0000115C
    b lbl_fn_80097E80_000011B8
lbl_fn_80097E80_000011A4:
    mr r3, r31
    bl fn_800A08D4
    lfs f0, 0x8(r15)
    fadds f0, f0, f1
    stfs f0, 0x8(r15)
lbl_fn_80097E80_000011B8:
    lbz r0, 0x18(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80097E80_000011DC
    lfs f0, 0x8(r15)
    fcmpo cr0, f0, f28
    bge lbl_fn_80097E80_000011DC
    lfs f0, 0xc(r15)
    fcmpo cr0, f0, f28
    blt lbl_fn_80097E80_000011A4
lbl_fn_80097E80_000011DC:
    addi r15, r15, 0x30
    addi r23, r23, 0x2c00
    addi r26, r26, 0x1
lbl_fn_80097E80_000011E8:
    lwz r0, 0x34c(r24)
    cmpw r26, r0
    blt lbl_fn_80097E80_00000DB0
    cmpwi r0, 0x1
    beq lbl_fn_80097E80_000012AC
    lfs f29, lbl_80880BF8
    mr r15, r24
    li r16, 0x1
    li r17, 0x0
    li r14, 0x0
    b lbl_fn_80097E80_000012A0
lbl_fn_80097E80_00001214:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80097E80_00001290
    lfs f1, 0x20(r30)
    fcmpo cr0, f1, f29
    cror eq, lt, eq
    beq lbl_fn_80097E80_00001290
    lwz r5, lbl_8087EF18
    cmpwi r16, 0x0
    add r6, r5, r14
    beq lbl_fn_80097E80_0000125C
    lwz r0, 0x21c(r24)
    mr r3, r29
    mr r4, r6
    mulli r5, r0, 0x2c
    bl memcpy
    li r16, 0x0
    b lbl_fn_80097E80_00001290
lbl_fn_80097E80_0000125C:
    lfs f0, 0x21c(r15)
    cmpwi r17, 0x1
    fadds f0, f1, f0
    fdivs f1, f1, f0
    bne lbl_fn_80097E80_00001280
    lwz r4, 0x21c(r24)
    mr r3, r29
    bl fn_80098948
    b lbl_fn_80097E80_00001290
lbl_fn_80097E80_00001280:
    lwz r4, 0x21c(r24)
    mr r3, r29
    mr r5, r29
    bl fn_80098948
lbl_fn_80097E80_00001290:
    addi r30, r30, 0x30
    addi r14, r14, 0x2c00
    addi r15, r15, 0x30
    addi r17, r17, 0x1
lbl_fn_80097E80_000012A0:
    lwz r0, 0x34c(r24)
    cmpw r17, r0
    blt lbl_fn_80097E80_00001214
lbl_fn_80097E80_000012AC:
    lfs f1, 0x23c(r24)
    lfs f2, lbl_80880C00
    lfs f0, lbl_80880BFC
    fsubs f2, f1, f2
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f0
    bge lbl_fn_80097E80_000012EC
    cmpwi r0, 0x1
    beq lbl_fn_80097E80_00001300
    lwz r0, 0x21c(r24)
    mr r4, r29
    lwz r3, 0x220(r24)
    mulli r5, r0, 0x2c
    bl memcpy
    b lbl_fn_80097E80_00001300
lbl_fn_80097E80_000012EC:
    lwz r3, 0x220(r24)
    mr r6, r29
    lwz r4, 0x21c(r24)
    mr r5, r3
    bl fn_80098948
lbl_fn_80097E80_00001300:
    mr r3, r24
    mr r4, r25
    bl fn_80098DD8
    mr r3, r24
    mr r4, r25
    bl fn_800991D0
    lwz r0, 0x35c(r24)
    cmpwi r0, 0x0
    bne lbl_fn_80097E80_00001344
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x70(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x74(r1)
    stw r0, 0x78(r1)
    b lbl_fn_80097E80_00001360
lbl_fn_80097E80_00001344:
    lis r5, lbl_80778864@ha
    lwzu r4, lbl_80778864@l(r5)
    stw r4, 0x70(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x74(r1)
    stw r0, 0x78(r1)
lbl_fn_80097E80_00001360:
    lwz r5, 0x70(r1)
    addi r3, r1, 0x34
    lwz r4, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r0, 0x3c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80097E80_00001488
    lwz r0, 0x35c(r24)
    lwz r3, 0x16c(r24)
    cmpwi r0, 0x0
    lwz r16, 0x220(r24)
    lwz r15, 0x44(r3)
    bne lbl_fn_80097E80_0000146C
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x28(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x2c(r1)
    mr r14, r3
    stw r3, 0x20(r1)
    li r3, 0x10
    stw r0, 0x24(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80097E80_00001410
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r14, 0xc(r3)
lbl_fn_80097E80_00001410:
    li r0, 0x0
    stw r3, 0x30(r1)
    stw r0, 0x20(r1)
    b lbl_fn_80097E80_00001424
    bl fn_80084C24
lbl_fn_80097E80_00001424:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x2c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x28(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x28
    beq lbl_fn_80097E80_0000146C
    addic. r3, r3, 0x4
    beq lbl_fn_80097E80_0000146C
    beq lbl_fn_80097E80_0000146C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80097E80_0000146C
    bl fn_806952C4
lbl_fn_80097E80_0000146C:
    lwz r6, 0x35c(r24)
    mr r4, r16
    mr r5, r15
    addi r3, r24, 0x360
    lwz r12, 0x4(r6)
    mtctr r12
    bctrl
lbl_fn_80097E80_00001488:
    li r3, 0x1
lbl_fn_80097E80_0000148C:
    addi r11, r1, 0xd0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    bl _restgpr_14
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80098698(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    lfs f30, lbl_80880BF8
    stw r31, 0x1c(r1)
    addi r31, r3, 0x22c
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r4, lbl_8087EFA8
    lfs f0, 0x350(r3)
    lfs f1, 0x3a4(r4)
    fmuls f31, f0, f1
    b lbl_fn_80098698_000015D4
lbl_fn_80098698_00001514:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80098698_000015CC
    lfs f1, 0x14(r31)
    lfs f0, 0x10(r31)
    fmadds f1, f1, f31, f0
    stfs f1, 0x10(r31)
    lfs f0, 0x1c(r31)
    fcmpo cr0, f1, f0
    ble lbl_fn_80098698_00001540
    stfs f0, 0x10(r31)
lbl_fn_80098698_00001540:
    lfs f1, 0xc(r31)
    lfs f0, 0x8(r31)
    fmadds f0, f1, f31, f0
    stfs f0, 0x8(r31)
    lbz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80098698_00001594
    mr r3, r30
    bl fn_800A08D4
    lfs f0, 0x8(r31)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80098698_00001594
    lfs f0, 0xc(r31)
    fcmpo cr0, f0, f30
    ble lbl_fn_80098698_00001594
    mr r3, r30
    bl fn_800A08D4
    lfs f0, 0x8(r31)
    fsubs f0, f0, f1
    stfs f0, 0x8(r31)
lbl_fn_80098698_00001594:
    lbz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80098698_000015CC
    lfs f0, 0x8(r31)
    fcmpo cr0, f0, f30
    bge lbl_fn_80098698_000015CC
    lfs f0, 0xc(r31)
    fcmpo cr0, f0, f30
    bge lbl_fn_80098698_000015CC
    mr r3, r30
    bl fn_800A08D4
    lfs f0, 0x8(r31)
    fadds f0, f0, f1
    stfs f0, 0x8(r31)
lbl_fn_80098698_000015CC:
    addi r31, r31, 0x30
    addi r29, r29, 0x1
lbl_fn_80098698_000015D4:
    lwz r0, 0x34c(r28)
    cmpw r29, r0
    blt lbl_fn_80098698_00001514
    lwz r3, 0x2c0(r28)
    cmpwi r3, 0x0
    bne lbl_fn_80098698_000015F8
    lwz r0, 0x2e0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80098698_000016B8
lbl_fn_80098698_000015F8:
    cmpwi r3, 0x0
    beq lbl_fn_80098698_00001608
    mr r31, r3
    b lbl_fn_80098698_0000160C
lbl_fn_80098698_00001608:
    lwz r31, 0x2e0(r28)
lbl_fn_80098698_0000160C:
    cmpwi r3, 0x0
    bne lbl_fn_80098698_0000164C
    lfs f2, 0x2d0(r28)
    lfs f1, 0x2cc(r28)
    lfs f0, lbl_80880BF8
    fnmsubs f1, f2, f31, f1
    stfs f1, 0x2cc(r28)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80098698_0000165C
    li r3, 0x0
    li r0, -0x1
    stfs f0, 0x2cc(r28)
    stw r3, 0x2e0(r28)
    stw r0, 0x2bc(r28)
    b lbl_fn_80098698_0000165C
lbl_fn_80098698_0000164C:
    lfs f1, 0x2d0(r28)
    lfs f0, 0x2cc(r28)
    fmadds f0, f1, f31, f0
    stfs f0, 0x2cc(r28)
lbl_fn_80098698_0000165C:
    lfs f1, 0x2cc(r28)
    lfs f0, 0x2d8(r28)
    fcmpo cr0, f1, f0
    ble lbl_fn_80098698_00001670
    stfs f0, 0x2cc(r28)
lbl_fn_80098698_00001670:
    lfs f1, 0x2c8(r28)
    lfs f0, 0x2c4(r28)
    lbz r0, 0x2d4(r28)
    fmadds f0, f1, f31, f0
    cmpwi r0, 0x0
    stfs f0, 0x2c4(r28)
    beq lbl_fn_80098698_000016B8
    mr r3, r31
    bl fn_800A08D4
    lfs f0, 0x2c4(r28)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80098698_000016B8
    mr r3, r31
    bl fn_800A08D4
    lfs f0, 0x2c4(r28)
    fsubs f0, f0, f1
    stfs f0, 0x2c4(r28)
lbl_fn_80098698_000016B8:
    addi r31, r28, 0x2ec
    li r29, 0x4
lbl_fn_80098698_000016C0:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80098698_00001734
    lfs f1, 0x14(r31)
    lfs f0, 0x10(r31)
    fmadds f1, f1, f31, f0
    stfs f1, 0x10(r31)
    lfs f0, 0x1c(r31)
    fcmpo cr0, f1, f0
    ble lbl_fn_80098698_000016EC
    stfs f0, 0x10(r31)
lbl_fn_80098698_000016EC:
    lfs f1, 0xc(r31)
    lfs f0, 0x8(r31)
    fmadds f0, f1, f31, f0
    stfs f0, 0x8(r31)
    lbz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80098698_00001734
    mr r3, r30
    bl fn_800A08D4
    lfs f0, 0x8(r31)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80098698_00001734
    mr r3, r30
    bl fn_800A08D4
    lfs f0, 0x8(r31)
    fsubs f0, f0, f1
    stfs f0, 0x8(r31)
lbl_fn_80098698_00001734:
    addi r29, r29, 0x1
    addi r31, r31, 0x30
    cmpwi r29, 0x5
    ble lbl_fn_80098698_000016C0
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80098948(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x30
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stfd f27, 0x30(r1)
    psq_st f27, 0x38(r1), 0, 0
    bl _savegpr_26
    lfs f29, lbl_80880C00
    fmr f27, f1
    lfs f31, lbl_80880BFC
    mr r26, r3
    fsubs f28, f29, f1
    lfs f30, lbl_80880BF8
    mr r27, r4
    mr r28, r5
    mr r29, r6
    addi r31, r1, 0x8
    li r30, 0x0
    b lbl_fn_80098948_00001A74
lbl_fn_80098948_000017E0:
    lwz r0, 0x0(r28)
    clrlwi. r0, r0, 31
    beq lbl_fn_80098948_0000188C
    lwz r0, 0x0(r29)
    clrlwi. r0, r0, 31
    beq lbl_fn_80098948_00001878
    fabs f0, f27
    frsp f0, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_80098948_0000181C
    lfs f2, 0xc(r28)
    psq_l f1, 0x4(r28), 0, 0
    psq_st f1, 0x4(r26), 0, 0
    stfs f2, 0xc(r26)
    b lbl_fn_80098948_000018B8
lbl_fn_80098948_0000181C:
    fcmpu cr0, f29, f27
    bne lbl_fn_80098948_00001838
    lfs f2, 0xc(r29)
    psq_l f1, 0x4(r29), 0, 0
    psq_st f1, 0x4(r26), 0, 0
    stfs f2, 0xc(r26)
    b lbl_fn_80098948_000018B8
lbl_fn_80098948_00001838:
    lfs f3, 0x4(r29)
    lfs f0, 0x4(r28)
    fmuls f3, f3, f27
    fmadds f0, f0, f28, f3
    stfs f0, 0x4(r26)
    lfs f3, 0x8(r29)
    lfs f0, 0x8(r28)
    fmuls f3, f3, f27
    fmadds f0, f0, f28, f3
    stfs f0, 0x8(r26)
    lfs f3, 0xc(r29)
    lfs f0, 0xc(r28)
    fmuls f3, f3, f27
    fmadds f0, f0, f28, f3
    stfs f0, 0xc(r26)
    b lbl_fn_80098948_000018B8
lbl_fn_80098948_00001878:
    lfs f2, 0xc(r28)
    psq_l f1, 0x4(r28), 0, 0
    psq_st f1, 0x4(r26), 0, 0
    stfs f2, 0xc(r26)
    b lbl_fn_80098948_000018B8
lbl_fn_80098948_0000188C:
    lwz r0, 0x0(r29)
    clrlwi. r0, r0, 31
    beq lbl_fn_80098948_000018AC
    lfs f2, 0xc(r29)
    psq_l f1, 0x4(r29), 0, 0
    psq_st f1, 0x4(r26), 0, 0
    stfs f2, 0xc(r26)
    b lbl_fn_80098948_000018B8
lbl_fn_80098948_000018AC:
    stfs f30, 0x4(r26)
    stfs f30, 0x8(r26)
    stfs f30, 0xc(r26)
lbl_fn_80098948_000018B8:
    lwz r0, 0x0(r28)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_80098948_0000194C
    lwz r0, 0x0(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_80098948_00001938
    fabs f0, f27
    frsp f0, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_80098948_000018F4
    psq_l f2, 0x18(r28), 0, 0
    psq_l f1, 0x10(r28), 0, 0
    psq_st f1, 0x10(r26), 0, 0
    psq_st f2, 0x18(r26), 0, 0
    b lbl_fn_80098948_0000197C
lbl_fn_80098948_000018F4:
    fcmpu cr0, f29, f27
    bne lbl_fn_80098948_00001910
    psq_l f2, 0x18(r29), 0, 0
    psq_l f1, 0x10(r29), 0, 0
    psq_st f1, 0x10(r26), 0, 0
    psq_st f2, 0x18(r26), 0, 0
    b lbl_fn_80098948_0000197C
lbl_fn_80098948_00001910:
    fmr f1, f27
    addi r3, r28, 0x10
    addi r4, r29, 0x10
    addi r5, r1, 0x8
    bl fn_805F9D20
    psq_l f2, 0x8(r31), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x10(r26), 0, 0
    psq_st f2, 0x18(r26), 0, 0
    b lbl_fn_80098948_0000197C
lbl_fn_80098948_00001938:
    psq_l f2, 0x18(r28), 0, 0
    psq_l f1, 0x10(r28), 0, 0
    psq_st f1, 0x10(r26), 0, 0
    psq_st f2, 0x18(r26), 0, 0
    b lbl_fn_80098948_0000197C
lbl_fn_80098948_0000194C:
    lwz r0, 0x0(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_80098948_0000196C
    psq_l f2, 0x18(r29), 0, 0
    psq_l f1, 0x10(r29), 0, 0
    psq_st f1, 0x10(r26), 0, 0
    psq_st f2, 0x18(r26), 0, 0
    b lbl_fn_80098948_0000197C
lbl_fn_80098948_0000196C:
    stfs f30, 0x10(r26)
    stfs f30, 0x14(r26)
    stfs f30, 0x18(r26)
    stfs f29, 0x1c(r26)
lbl_fn_80098948_0000197C:
    lwz r0, 0x0(r28)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80098948_00001A28
    lwz r0, 0x0(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80098948_00001A14
    fabs f0, f27
    frsp f0, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_80098948_000019B8
    lfs f2, 0x28(r28)
    psq_l f1, 0x20(r28), 0, 0
    psq_st f1, 0x20(r26), 0, 0
    stfs f2, 0x28(r26)
    b lbl_fn_80098948_00001A54
lbl_fn_80098948_000019B8:
    fcmpu cr0, f29, f27
    bne lbl_fn_80098948_000019D4
    lfs f2, 0x28(r29)
    psq_l f1, 0x20(r29), 0, 0
    psq_st f1, 0x20(r26), 0, 0
    stfs f2, 0x28(r26)
    b lbl_fn_80098948_00001A54
lbl_fn_80098948_000019D4:
    lfs f3, 0x20(r29)
    lfs f0, 0x20(r28)
    fmuls f3, f3, f27
    fmadds f0, f0, f28, f3
    stfs f0, 0x20(r26)
    lfs f3, 0x24(r29)
    lfs f0, 0x24(r28)
    fmuls f3, f3, f27
    fmadds f0, f0, f28, f3
    stfs f0, 0x24(r26)
    lfs f3, 0x28(r29)
    lfs f0, 0x28(r28)
    fmuls f3, f3, f27
    fmadds f0, f0, f28, f3
    stfs f0, 0x28(r26)
    b lbl_fn_80098948_00001A54
lbl_fn_80098948_00001A14:
    lfs f2, 0x28(r28)
    psq_l f1, 0x20(r28), 0, 0
    psq_st f1, 0x20(r26), 0, 0
    stfs f2, 0x28(r26)
    b lbl_fn_80098948_00001A54
lbl_fn_80098948_00001A28:
    lwz r0, 0x0(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80098948_00001A48
    lfs f2, 0x28(r29)
    psq_l f1, 0x20(r29), 0, 0
    psq_st f1, 0x20(r26), 0, 0
    stfs f2, 0x28(r26)
    b lbl_fn_80098948_00001A54
lbl_fn_80098948_00001A48:
    stfs f29, 0x20(r26)
    stfs f29, 0x24(r26)
    stfs f29, 0x28(r26)
lbl_fn_80098948_00001A54:
    lwz r3, 0x0(r28)
    addi r28, r28, 0x2c
    lwz r0, 0x0(r29)
    addi r29, r29, 0x2c
    addi r30, r30, 0x1
    or r0, r3, r0
    stw r0, 0x0(r26)
    addi r26, r26, 0x2c
lbl_fn_80098948_00001A74:
    cmplw r30, r27
    blt lbl_fn_80098948_000017E0
    addi r11, r1, 0x30
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    psq_l f27, 0x38(r1), 0, 0
    lfd f27, 0x30(r1)
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80098C90(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r24, r3
    mr r30, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    addi r3, r1, 0x8
    bl fn_800A08E0
    b lbl_fn_80098C90_00001BE4
lbl_fn_80098C90_00001AF8:
    lwz r3, 0x48(r27)
    slwi r0, r30, 2
    cmpwi r29, 0x0
    lwzx r30, r3, r0
    beq lbl_fn_80098C90_00001B1C
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lwzx r31, r29, r0
    b lbl_fn_80098C90_00001B20
lbl_fn_80098C90_00001B1C:
    lwz r31, 0x18(r30)
lbl_fn_80098C90_00001B20:
    lwz r3, 0x0(r28)
    slwi r0, r31, 1
    lwz r4, 0x358(r24)
    slwi r3, r3, 4
    add r3, r4, r3
    lwz r3, 0x8(r3)
    lhax r5, r3, r0
    cmpwi r5, 0x0
    blt lbl_fn_80098C90_00001BB0
    cmpwi r26, 0x0
    beq lbl_fn_80098C90_00001B74
    mulli r4, r31, 0x2c
    lwz r7, 0x220(r24)
    lwz r6, 0x218(r24)
    lwz r3, 0x4(r28)
    mulli r0, r31, 0x12
    lfs f1, 0x8(r28)
    add r4, r7, r4
    add r6, r6, r0
    bl fn_800A05FC
    b lbl_fn_80098C90_00001BB0
lbl_fn_80098C90_00001B74:
    mulli r0, r31, 0x12
    lwz r6, 0x218(r24)
    lwz r3, 0x4(r28)
    addi r4, r1, 0x8
    lfs f1, 0x8(r28)
    add r6, r6, r0
    bl fn_800A05FC
    mulli r0, r31, 0x2c
    lwz r3, 0x220(r24)
    lfs f1, 0x10(r28)
    addi r6, r1, 0x8
    li r4, 0x1
    add r3, r3, r0
    mr r5, r3
    bl fn_80098948
lbl_fn_80098C90_00001BB0:
    lwz r4, 0x20(r30)
    cmpwi r4, 0x0
    blt lbl_fn_80098C90_00001BD8
    mr r3, r24
    mr r6, r26
    mr r7, r27
    mr r8, r28
    mr r9, r29
    li r5, 0x1
    bl fn_80098C90
lbl_fn_80098C90_00001BD8:
    cmpwi r25, 0x0
    beq lbl_fn_80098C90_00001BEC
    lwz r30, 0x24(r30)
lbl_fn_80098C90_00001BE4:
    cmpwi r30, 0x0
    bge lbl_fn_80098C90_00001AF8
lbl_fn_80098C90_00001BEC:
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80098DD8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_24
    lwz r6, 0x2c0(r3)
    addi r30, r3, 0x2bc
    mr r26, r3
    mr r27, r4
    cmpwi r6, 0x0
    bne lbl_fn_80098DD8_00001C44
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80098DD8_00001E1C
lbl_fn_80098DD8_00001C44:
    lwz r0, 0x50(r3)
    cmpwi r6, 0x0
    mulli r0, r0, 0x18
    add r5, r3, r0
    lwz r29, 0x16c(r5)
    lwz r24, 0x178(r5)
    beq lbl_fn_80098DD8_00001C68
    mr r31, r6
    b lbl_fn_80098DD8_00001C6C
lbl_fn_80098DD8_00001C68:
    lwz r31, 0x24(r30)
lbl_fn_80098DD8_00001C6C:
    lwz r5, lbl_8087EFA8
    cmpwi r6, 0x0
    lfs f0, 0x350(r3)
    li r28, 0x0
    lfs f1, 0x3a4(r5)
    fmuls f31, f0, f1
    bne lbl_fn_80098DD8_00001CD4
    cmpwi r4, 0x0
    beq lbl_fn_80098DD8_00001CA0
    lfs f1, 0x10(r30)
    lfs f0, 0x14(r30)
    fsubs f0, f1, f0
    stfs f0, 0x10(r30)
lbl_fn_80098DD8_00001CA0:
    lfs f1, 0x10(r30)
    lfs f0, lbl_80880BF8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80098DD8_00001CCC
    li r3, 0x0
    li r0, -0x1
    stfs f0, 0x10(r30)
    stw r3, 0x24(r30)
    stw r0, 0x0(r30)
    b lbl_fn_80098DD8_00001E1C
lbl_fn_80098DD8_00001CCC:
    li r28, 0x1
    b lbl_fn_80098DD8_00001CEC
lbl_fn_80098DD8_00001CD4:
    cmpwi r4, 0x0
    beq lbl_fn_80098DD8_00001CEC
    lfs f1, 0x10(r30)
    lfs f0, 0x14(r30)
    fadds f0, f1, f0
    stfs f0, 0x10(r30)
lbl_fn_80098DD8_00001CEC:
    lfs f1, 0x10(r30)
    lfs f0, 0x1c(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80098DD8_00001D00
    stfs f0, 0x10(r30)
lbl_fn_80098DD8_00001D00:
    cmpwi r28, 0x0
    beq lbl_fn_80098DD8_00001D10
    lwz r0, 0x24(r30)
    stw r0, 0x4(r30)
lbl_fn_80098DD8_00001D10:
    lis r4, lbl_80732368@ha
    lwz r25, 0x50(r3)
    addi r4, r4, lbl_80732368@l
    addi r3, r4, 0x26c
    bl fn_800DC6B4
    mulli r0, r25, 0x18
    add r4, r26, r0
    lwz r6, 0x16c(r4)
    cmpwi r6, 0x0
    bne lbl_fn_80098DD8_00001D40
    li r4, -0x1
    b lbl_fn_80098DD8_00001D80
lbl_fn_80098DD8_00001D40:
    lwz r0, 0x44(r6)
    li r4, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80098DD8_00001D7C
lbl_fn_80098DD8_00001D58:
    lwz r5, 0x48(r6)
    lwzx r5, r5, r7
    lwz r0, 0x14(r5)
    cmplw r3, r0
    bne lbl_fn_80098DD8_00001D70
    b lbl_fn_80098DD8_00001D80
lbl_fn_80098DD8_00001D70:
    addi r7, r7, 0x4
    addi r4, r4, 0x1
    bdnz lbl_fn_80098DD8_00001D58
lbl_fn_80098DD8_00001D7C:
    li r4, -0x1
lbl_fn_80098DD8_00001D80:
    lfs f2, 0x10(r30)
    mr r3, r26
    lfs f1, lbl_80880C00
    li r5, 0x0
    lfs f0, lbl_80880BFC
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r6
    mr r7, r29
    srwi r6, r6, 31
    mr r8, r30
    mr r9, r24
    bl fn_80098C90
    cmpwi r28, 0x0
    beq lbl_fn_80098DD8_00001DCC
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_80098DD8_00001DCC:
    cmpwi r27, 0x0
    beq lbl_fn_80098DD8_00001DE4
    lfs f1, 0xc(r30)
    lfs f0, 0x8(r30)
    fmadds f0, f1, f31, f0
    stfs f0, 0x8(r30)
lbl_fn_80098DD8_00001DE4:
    lbz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80098DD8_00001E1C
    mr r3, r31
    bl fn_800A08D4
    lfs f0, 0x8(r30)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80098DD8_00001E1C
    mr r3, r31
    bl fn_800A08D4
    lfs f0, 0x8(r30)
    fsubs f0, f0, f1
    stfs f0, 0x8(r30)
lbl_fn_80098DD8_00001E1C:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80099010(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r5, 0x0(r3)
    clrlwi r0, r5, 31
    cmplwi r0, 0x1
    beq lbl_fn_80099010_00001E9C
    lfs f2, 0x54(r4)
    addi r6, r1, 0x48
    psq_l f1, 0x4c(r4), 0, 0
    ori r0, r5, 0x1
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x50(r1)
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    stw r0, 0x0(r3)
lbl_fn_80099010_00001E9C:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80099010_00001FA0
    addi r3, r1, 0x2c
    psq_l f1, 0x40(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x14
    lfs f2, 0x48(r4)
    addi r4, r1, 0x8
    lfs f4, 0x2c(r1)
    lfs f3, lbl_80880C08
    fmr f31, f2
    lfs f0, lbl_80880C34
    fmuls f3, f4, f3
    stfs f2, 0x34(r1)
    lfs f30, 0x30(r1)
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80880C08
    addi r3, r1, 0x18
    lfs f0, lbl_80880C34
    addi r4, r1, 0xc
    fmuls f3, f30, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80880C08
    addi r3, r1, 0x1c
    lfs f0, lbl_80880C34
    addi r4, r1, 0x10
    fmuls f3, f31, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f11, 0xc(r1)
    addi r3, r1, 0x38
    lfs f8, 0x14(r1)
    lfs f5, 0x18(r1)
    lfs f7, 0x8(r1)
    fmuls f3, f8, f11
    lfs f9, 0x1c(r1)
    fmuls f0, f8, f5
    fmuls f4, f7, f5
    lfs f10, 0x10(r1)
    fmuls f3, f9, f3
    fmuls f5, f5, f9
    lwz r0, 0x0(r30)
    fmuls f12, f11, f10
    fmadds f3, f10, f4, f3
    ori r0, r0, 0x2
    fmuls f6, f8, f5
    fmuls f5, f7, f5
    stfs f3, 0x3c(r1)
    fmuls f3, f7, f11
    fmuls f0, f10, f0
    stw r0, 0x0(r30)
    fmadds f6, f7, f12, f6
    fmsubs f4, f8, f12, f5
    fmsubs f0, f9, f3, f0
    stfs f6, 0x44(r1)
    stfs f4, 0x38(r1)
    stfs f0, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    psq_st f2, 0x18(r30), 0, 0
lbl_fn_80099010_00001FA0:
    lwz r3, 0x0(r30)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80099010_00001FD4
    lfs f2, 0x3c(r31)
    addi r4, r1, 0x20
    psq_l f1, 0x34(r31), 0, 0
    ori r0, r3, 0x4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x20(r30), 0, 0
    stfs f2, 0x28(r30)
    stw r0, 0x0(r30)
lbl_fn_80099010_00001FD4:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
