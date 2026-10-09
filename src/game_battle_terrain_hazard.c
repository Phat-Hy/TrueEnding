#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_80092814(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EF73C(void);
extern void fn_802377B8(void);
extern void fn_80373148(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_803F11F8(void);
extern void fn_8041AAC0(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F89F0(void);
extern void fn_805F8CA0(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068AC5C(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA8(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80752F28[];
extern u8 lbl_80752FA8[];
extern u8 lbl_80752FB0[];
extern u8 lbl_80752FCC[];
extern u8 lbl_80753038[];
extern u8 lbl_80753050[];
extern u8 lbl_80766768[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078DBA8[];
extern u8 lbl_8078DC40[];
extern u8 lbl_8078DC4C[];
extern u8 lbl_8078DC58[];
extern u8 lbl_8078DC88[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF88;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4B8;
extern u32 lbl_80886490;
extern u32 lbl_808864A8;
extern u32 lbl_808864B4;
extern u32 lbl_808864B8;
extern u32 lbl_808864BC;
extern u32 lbl_808864C0;
extern u32 lbl_808864C4;
extern u32 lbl_808864C8;
extern u32 lbl_808864CC;
extern u32 lbl_808864D0;
extern u32 lbl_808864D4;
extern u32 lbl_808864D8;
extern u32 lbl_808864DC;
extern u32 lbl_808864E0;
extern u32 lbl_808864E4;
extern u32 lbl_808864E8;
extern u32 lbl_808864EC;
extern u32 lbl_808864F0;
extern u32 lbl_808864F8;
extern u32 lbl_808864FC;
extern u32 lbl_80886500;
extern u32 lbl_80886504;

/* Function declarations */
void fn_80417E88(void);
void fn_80417F14(void);
void fn_80417F1C(void);
void fn_80417F40(void);
void fn_80417FF8(void);
void fn_804180B0(void);
void fn_804180BC(void);
void fn_804180CC(void);
void fn_8041814C(void);
void fn_8041816C(void);
void fn_80418198(void);
void fn_804182A8(void);
void fn_80418318(void);
void fn_80418320(void);
void fn_804183B0(void);
void fn_8041841C(void);
void fn_8041847C(void);
void fn_804184BC(void);
void fn_8041867C(void);
void fn_804186D8(void);
void fn_804188A0(void);
void fn_80418BC4(void);
void fn_80418BE4(void);
void fn_80418C4C(void);
void fn_80418EA4(void);
void fn_80418EAC(void);
void fn_80418F30(void);
void fn_80419010(void);
void fn_8041919C(void);
void fn_804192A0(void);
void fn_80419354(void);
void fn_8041953C(void);

asm void fn_80417E88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    lfs f2, 0x34cc(r31)
    mulhw r5, r5, r3
    lis r4, lbl_80752F28@ha
    stw r0, 0x8(r1)
    lfs f0, lbl_808864B4
    lfd f5, lbl_80752F28@l(r4)
    fmuls f1, f0, f2
    srawi r0, r5, 8
    lfs f3, lbl_808864A8
    srwi r4, r0, 31
    lfs f0, lbl_80886490
    add r0, r0, r4
    lwz r31, 0x1c(r1)
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r0, 0x24(r1)
    lfd f4, 0x8(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmsubs f1, f2, f3, f1
    fadds f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80417F14(void)
{
    nofralloc
    addi r3, r3, 0x40
    blr
}

asm void fn_80417F1C(void)
{
    nofralloc
    lfs f3, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    stfs f3, 0x40(r3)
    stfs f2, 0x44(r3)
    stfs f1, 0x48(r3)
    stfs f0, 0x4c(r3)
    blr
}

asm void fn_80417F40(void)
{
    nofralloc
    lwz r4, 0x48(r4)
    b lbl_fn_80417F40_00000164
lbl_fn_80417F40_000000C0:
    lwz r5, 0x38(r4)
    li r7, 0x0
    mr r6, r7
    rlwinm r0, r5, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80417F40_000000E4
    clrlwi r0, r5, 31
    cmplwi r0, 0x1
    bne lbl_fn_80417F40_000000E8
lbl_fn_80417F40_000000E4:
    li r6, 0x1
lbl_fn_80417F40_000000E8:
    cmpwi r6, 0x0
    bne lbl_fn_80417F40_0000012C
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80417F40_0000012C
    lwz r0, 0x55c(r4)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80417F40_00000120
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_80417F40_00000120
    li r5, 0x1
lbl_fn_80417F40_00000120:
    cmpwi r5, 0x0
    bne lbl_fn_80417F40_0000012C
    li r7, 0x1
lbl_fn_80417F40_0000012C:
    cmpwi r7, 0x0
    beq lbl_fn_80417F40_00000160
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_80417F40_0000014C
    stw r4, 0x0(r5)
lbl_fn_80417F40_0000014C:
    lwz r5, 0x0(r3)
    addi r0, r5, 0x1
    stw r0, 0x0(r3)
    cmplwi r0, 0x10
    bgelr
lbl_fn_80417F40_00000160:
    lwz r4, 0x14ac(r4)
lbl_fn_80417F40_00000164:
    cmpwi r4, 0x0
    bne lbl_fn_80417F40_000000C0
    blr
}

asm void fn_80417FF8(void)
{
    nofralloc
    lwz r4, 0x48(r4)
    b lbl_fn_80417FF8_0000021C
lbl_fn_80417FF8_00000178:
    lwz r5, 0x38(r4)
    li r7, 0x0
    mr r6, r7
    rlwinm r0, r5, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80417FF8_0000019C
    clrlwi r0, r5, 31
    cmplwi r0, 0x1
    bne lbl_fn_80417FF8_000001A0
lbl_fn_80417FF8_0000019C:
    li r6, 0x1
lbl_fn_80417FF8_000001A0:
    cmpwi r6, 0x0
    bne lbl_fn_80417FF8_000001E4
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80417FF8_000001E4
    lwz r0, 0x55c(r4)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80417FF8_000001D8
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_80417FF8_000001D8
    li r5, 0x1
lbl_fn_80417FF8_000001D8:
    cmpwi r5, 0x0
    bne lbl_fn_80417FF8_000001E4
    li r7, 0x1
lbl_fn_80417FF8_000001E4:
    cmpwi r7, 0x0
    beq lbl_fn_80417FF8_00000218
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_80417FF8_00000204
    stw r4, 0x0(r5)
lbl_fn_80417FF8_00000204:
    lwz r5, 0x0(r3)
    addi r0, r5, 0x1
    stw r0, 0x0(r3)
    cmplwi r0, 0x10
    bgelr
lbl_fn_80417FF8_00000218:
    lwz r4, 0x14ac(r4)
lbl_fn_80417FF8_0000021C:
    cmpwi r4, 0x0
    bne lbl_fn_80417FF8_00000178
    blr
}

asm void fn_804180B0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_804180BC(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_804180CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804180CC_000002A8
    addi r31, r29, 0x4cc
    li r30, 0x0
lbl_fn_804180CC_00000280:
    lwz r0, 0x89c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804180CC_00000294
    mr r3, r31
    bl fn_8008CD60
lbl_fn_804180CC_00000294:
    addi r30, r30, 0x1
    addi r31, r31, 0x3ec
    cmplwi r30, 0x8
    addi r29, r29, 0x3ec
    blt lbl_fn_804180CC_00000280
lbl_fn_804180CC_000002A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8041814C(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8041814C_000002D4
    li r3, 0x0
    blr
lbl_fn_8041814C_000002D4:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    mr r3, r0
    blr
}

asm void fn_8041816C(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8041816C_00000308
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8041816C_00000308
    li r4, 0x1
lbl_fn_8041816C_00000308:
    mr r3, r4
    blr
}

asm void fn_80418198(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_80418198_000003FC
    lis r5, lbl_80752FCC@ha
    li r3, 0x500
    addi r5, r5, lbl_80752FCC@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80418198_000003F4
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r4, lbl_8078DBA8@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078DBA8@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    lfs f1, lbl_808864B8
    addi r4, r31, 0x4d0
    stfs f1, 0x4c4(r31)
    addi r3, r31, 0x4f4
    lfs f0, lbl_808864BC
    cmplw r4, r3
    stfs f0, 0x4c8(r31)
    stfs f1, 0x4cc(r31)
    bge lbl_fn_80418198_000003E4
    addi r3, r3, 0xb
    li r0, 0xc
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_80418198_000003E4
lbl_fn_80418198_000003D0:
    stfs f1, 0x0(r4)
    stfs f0, 0x4(r4)
    stfs f1, 0x8(r4)
    addi r4, r4, 0xc
    bdnz lbl_fn_80418198_000003D0
lbl_fn_80418198_000003E4:
    lfs f0, lbl_808864B8
    li r0, 0x0
    stfs f0, 0x4fc(r31)
    stw r0, 0x54(r31)
lbl_fn_80418198_000003F4:
    mr r3, r31
    b lbl_fn_80418198_00000400
lbl_fn_80418198_000003FC:
    li r3, 0x0
lbl_fn_80418198_00000400:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804182A8(void)
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
    beq lbl_fn_804182A8_00000474
    li r0, 0x0
    stw r0, lbl_8087F4B8
    li r4, -0x1
    addi r3, r3, 0xf4
    bl fn_800971D4
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_804182A8_00000474
    mr r3, r30
    bl dtor_80084684
lbl_fn_804182A8_00000474:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80418318(void)
{
    nofralloc
    lwz r3, lbl_8087F4B8
    blr
}

asm void fn_80418320(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80418320_00000510
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80418320_00000504
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80418320_00000504:
    stw r31, lbl_8087F4B8
    li r3, 0x1
    b lbl_fn_80418320_00000514
lbl_fn_80418320_00000510:
    li r3, 0x0
lbl_fn_80418320_00000514:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804183B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804183B0_00000578
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_804183B0_00000578:
    mr r3, r31
    bl fn_804186D8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041841C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041841C_000005E0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_8041841C_000005E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041847C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0xf4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8041847C_0000061C
    li r31, 0x1
lbl_fn_8041847C_0000061C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804184BC(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stfd f31, 0x650(r1)
    psq_st f31, 0x658(r1), 0, 0
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r30, r3
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
    mr r4, r30
    mr r5, r31
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
    lis r30, lbl_80752FCC@ha
    lfs f31, lbl_808864C0
    addi r30, r30, lbl_80752FCC@l
lbl_fn_804184BC_000006F0:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r31, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804184BC_000007C0
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804184BC_00000744
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0xf4
    addi r5, r1, 0x8
    bl fn_803EC7A0
    b lbl_fn_804184BC_000007C0
lbl_fn_804184BC_00000744:
    mr r3, r31
    addi r4, r30, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804184BC_000007C0
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC12C
    cmplwi r3, 0x1
    bgt lbl_fn_804184BC_000007C0
    mulli r0, r31, 0x18
    mulli r4, r3, 0xc
    addi r3, r1, 0x8
    add r0, r29, r0
    add r31, r4, r0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4c4(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4c8(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f0, f31, f1
    stfs f0, 0x4cc(r31)
lbl_fn_804184BC_000007C0:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804184BC_000006F0
    lwz r0, 0x664(r1)
    psq_l f31, 0x658(r1), 0, 0
    lfd f31, 0x650(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8041867C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808864B8
    li r4, 0x1
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804186D8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    bl _savegpr_25
    lis r28, lbl_80752FCC@ha
    mr r31, r3
    addi r28, r28, lbl_80752FCC@l
    li r5, 0x0
    addi r4, r28, 0xc
    addi r3, r3, 0xf4
    bl fn_80092814
    stw r3, 0x10(r1)
    addi r3, r31, 0xf4
    addi r4, r28, 0x13
    li r5, 0x0
    bl fn_80092814
    stw r3, 0x14(r1)
    addi r30, r1, 0x8
    lfs f30, lbl_808864C8
    li r26, 0x0
    lfs f29, lbl_808864C4
    li r27, 0x0
    lfs f31, lbl_808864CC
    lis r28, lbl_80752FA8@ha
lbl_fn_804186D8_000008CC:
    lwz r0, 0x54(r31)
    lfs f8, 0x4fc(r31)
    mulli r0, r0, 0x18
    lfd f2, lbl_80752FA8@l(r28)
    add r0, r31, r0
    add r29, r0, r27
    lfs f7, 0x4c8(r29)
    lfs f0, 0x4cc(r29)
    fmadds f1, f7, f8, f0
    bl fn_8068AEA8
    frsp f1, f1
    fcmpo cr0, f1, f29
    ble lbl_fn_804186D8_00000904
    fsubs f1, f1, f30
lbl_fn_804186D8_00000904:
    fcmpo cr0, f1, f31
    bge lbl_fn_804186D8_00000910
    fadds f1, f1, f30
lbl_fn_804186D8_00000910:
    bl fn_8068AD58
    frsp f7, f1
    lfs f0, 0x4c4(r29)
    addi r26, r26, 0x1
    addi r27, r27, 0xc
    cmpwi r26, 0x2
    fmuls f0, f0, f7
    stfs f0, 0x0(r30)
    addi r30, r30, 0x4
    blt lbl_fn_804186D8_000008CC
    lfs f31, lbl_808864B8
    addi r29, r1, 0x8
    addi r27, r1, 0x28
    addi r28, r1, 0x10
    li r26, 0x0
    li r30, 0x0
lbl_fn_804186D8_00000950:
    lwzx r0, r28, r30
    cmpwi r0, -0x1
    ble lbl_fn_804186D8_000009C8
    fmr f1, f31
    lfsx f2, r29, r30
    mulli r0, r0, 0x30
    lwz r3, 0x130(r31)
    stfs f31, 0x18(r1)
    fmr f3, f1
    stfs f2, 0x1c(r1)
    add r25, r3, r0
    addi r3, r1, 0x28
    stfs f31, 0x20(r1)
    bl fn_805F90D0
    psq_l f2, 0x8(r27), 0, 0
    mr r4, r25
    psq_l f3, 0x10(r27), 0, 0
    mr r5, r25
    psq_l f4, 0x18(r27), 0, 0
    addi r3, r31, 0xfc
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
    bl fn_805F89F0
lbl_fn_804186D8_000009C8:
    addi r26, r26, 0x1
    addi r30, r30, 0x4
    cmpwi r26, 0x2
    blt lbl_fn_804186D8_00000950
    lfs f7, 0x4fc(r31)
    lfs f0, lbl_808864D0
    fadds f0, f7, f0
    stfs f0, 0x4fc(r31)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_25
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804188A0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    bl _savegpr_27
    psq_l f1, 0xfc(r4), 0, 0
    addi r27, r1, 0x68
    lfs f7, lbl_808864D4
    mr r29, r3
    lfs f0, lbl_808864B8
    mr r30, r4
    psq_l f2, 0x104(r4), 0, 0
    mr r31, r5
    psq_l f3, 0x10c(r4), 0, 0
    mr r3, r27
    psq_l f4, 0x114(r4), 0, 0
    psq_l f5, 0x11c(r4), 0, 0
    psq_l f6, 0x124(r4), 0, 0
    mr r4, r27
    stfs f7, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f7, 0x64(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    bl fn_805F8CA0
    psq_l f1, 0x0(r31), 0, 0
    addi r4, r1, 0x50
    lfs f2, 0x8(r31)
    mr r3, r27
    stfs f2, 0x58(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F93C0
    lfs f8, 0x50(r1)
    addi r3, r1, 0x18
    lfs f7, 0x5c(r1)
    lfs f0, lbl_8087DF88
    fsubs f7, f8, f7
    fdivs f1, f7, f0
    bl fn_8068AC5C
    lfs f8, 0x58(r1)
    fmr f31, f1
    lfs f7, 0x5c(r1)
    addi r3, r1, 0x10
    lfs f0, lbl_8087DF88
    fsubs f7, f8, f7
    fdivs f1, f7, f0
    bl fn_8068AC5C
    lfd f0, 0x10(r1)
    lis r7, lbl_80752FB0@ha
    lwzu r10, lbl_80752FB0@l(r7)
    frsp f9, f1
    lfd f7, 0x18(r1)
    fctiwz f0, f0
    lwz r9, 0x4(r7)
    frsp f10, f31
    fctiwz f7, f7
    stfd f0, 0xa0(r1)
    addi r5, r1, 0x40
    lwz r8, 0x8(r7)
    lwz r3, 0xa4(r1)
    stfd f7, 0x98(r1)
    slwi r0, r3, 30
    srwi r6, r3, 31
    subf r0, r6, r0
    lwz r3, 0x9c(r1)
    rotlwi r4, r0, 2
    lfs f30, lbl_808864BC
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    add r4, r4, r6
    rotlwi r0, r0, 2
    fsubs f7, f30, f9
    subfic r4, r4, 0x4
    lwz r7, 0xc(r7)
    add r0, r0, r3
    stw r10, 0x40(r1)
    add r11, r0, r4
    addi r3, r11, 0x1
    stw r9, 0x44(r1)
    slwi r0, r3, 30
    slwi r4, r11, 30
    srwi r3, r3, 31
    srwi r6, r11, 31
    subf r0, r3, r0
    stw r8, 0x48(r1)
    rotlwi r0, r0, 2
    subf r4, r6, r4
    add r0, r0, r3
    stw r7, 0x4c(r1)
    rotlwi r3, r4, 2
    fsubs f8, f30, f10
    add r4, r3, r6
    fmuls f0, f10, f7
    slwi r3, r0, 2
    addi r10, r11, 0x3
    lfsx f13, r5, r3
    slwi r4, r4, 2
    fmuls f7, f8, f7
    lfsx f31, r5, r4
    fmuls f0, f13, f0
    slwi r0, r10, 30
    srwi r3, r10, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    fmadds f0, f31, f7, f0
    add r0, r0, r3
    addi r9, r11, 0x4
    slwi r4, r0, 2
    fmuls f8, f8, f9
    lfsx f12, r5, r4
    slwi r0, r9, 30
    srwi r3, r9, 31
    subf r0, r3, r0
    fmuls f7, f10, f9
    rotlwi r0, r0, 2
    fmadds f0, f12, f8, f0
    add r0, r0, r3
    stfs f31, 0x30(r1)
    slwi r0, r0, 2
    lfsx f11, r5, r0
    stfs f13, 0x34(r1)
    fmadds f0, f11, f7, f0
    stfs f12, 0x38(r1)
    fcmpo cr0, f30, f0
    stfs f11, 0x3c(r1)
    cror eq, lt, eq
    bne lbl_fn_804188A0_00000C40
    b lbl_fn_804188A0_00000C44
lbl_fn_804188A0_00000C40:
    fmr f30, f0
lbl_fn_804188A0_00000C44:
    lfs f31, lbl_808864B8
    fcmpo cr0, f31, f30
    cror eq, gt, eq
    bne lbl_fn_804188A0_00000C58
    b lbl_fn_804188A0_00000C5C
lbl_fn_804188A0_00000C58:
    fmr f31, f30
lbl_fn_804188A0_00000C5C:
    lis r27, lbl_80752FCC@ha
    addi r3, r30, 0xf4
    addi r27, r27, lbl_80752FCC@l
    li r5, 0x0
    addi r4, r27, 0xc
    bl fn_80092814
    mr r28, r3
    addi r3, r30, 0xf4
    addi r4, r27, 0x13
    li r5, 0x0
    bl fn_80092814
    cmpwi r28, -0x1
    ble lbl_fn_804188A0_00000CB8
    mulli r0, r28, 0x30
    lwz r4, 0x130(r30)
    add r4, r4, r0
    lfs f0, 0x2c(r4)
    lfs f8, 0xc(r4)
    lfs f7, 0x1c(r4)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f7, 0x8(r1)
lbl_fn_804188A0_00000CB8:
    cmpwi r3, -0x1
    ble lbl_fn_804188A0_00000CE8
    mulli r0, r3, 0x30
    lwz r4, 0x130(r30)
    add r4, r4, r0
    lfs f0, 0x2c(r4)
    lfs f8, 0xc(r4)
    lfs f7, 0x1c(r4)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f7, 0xc(r1)
lbl_fn_804188A0_00000CE8:
    lfs f0, lbl_808864BC
    lfs f7, 0xc(r1)
    fsubs f8, f0, f31
    lfs f0, 0x8(r1)
    lfs f2, 0x8(r31)
    psq_l f1, 0x0(r31), 0, 0
    fmuls f7, f7, f8
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    fmadds f0, f0, f31, f7
    stfs f0, 0x4(r29)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    addi r11, r1, 0xc0
    bl _restgpr_27
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80418BC4(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_80418BC4_00000D4C
    li r3, 0x0
    blr
lbl_fn_80418BC4_00000D4C:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    mr r3, r0
    blr
}

asm void fn_80418BE4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808864B8
    cmplwi r4, 0x1
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bgt lbl_fn_80418BE4_00000DB4
    li r0, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80418BE4_00000DB4:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80418C4C(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x260
    bl _savegpr_20
    mr r20, r4
    mr r21, r3
    addi r4, r1, 0x8
    bl fn_803EC758
    lwz r0, 0xf0(r21)
    cmpwi r0, 0x0
    bne lbl_fn_80418C4C_00000E20
    cmpwi r20, 0x0
    beq lbl_fn_80418C4C_00000E20
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80418C4C_00000E20
    mr r3, r20
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r21)
    mr r24, r3
    b lbl_fn_80418C4C_00000E24
lbl_fn_80418C4C_00000E20:
    li r24, 0x0
lbl_fn_80418C4C_00000E24:
    lis r3, lbl_80752FCC@ha
    addi r5, r21, 0x54
    addi r31, r3, lbl_80752FCC@l
    li r6, 0x0
    mr r3, r24
    li r7, 0x63
    addi r4, r31, 0x1a
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808864D8
    mr r3, r24
    lfs f2, lbl_808864DC
    addi r4, r31, 0x20
    lfs f3, lbl_808864E0
    addi r5, r21, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808864CC
    mr r3, r24
    lfs f2, lbl_808864C4
    addi r4, r31, 0x24
    lfs f3, lbl_808864E4
    addi r5, r21, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_808864D8
    mr r3, r24
    lfs f2, lbl_808864DC
    addi r4, r31, 0x28
    lfs f3, lbl_808864E0
    addi r5, r21, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r24
    addi r4, r31, 0x2c
    addi r5, r21, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r24
    addi r4, r31, 0x33
    addi r5, r21, 0x58
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r4, r24
    addi r3, r21, 0xb0
    bl fn_803F11F8
    addi r30, r21, 0x4c4
    addi r29, r21, 0x4c8
    addi r28, r21, 0x4cc
    li r23, 0x0
lbl_fn_80418C4C_00000F14:
    mr r5, r23
    addi r3, r1, 0x128
    addi r4, r31, 0x3b
    crclr 6
    bl sprintf
    mr r3, r24
    addi r4, r1, 0x128
    bl fn_8008937C
    mr r22, r3
    mr r27, r30
    mr r26, r29
    mr r25, r28
    li r21, 0x0
lbl_fn_80418C4C_00000F48:
    mr r5, r21
    addi r3, r1, 0x28
    addi r4, r31, 0x45
    crclr 6
    bl sprintf
    mr r3, r22
    addi r4, r1, 0x28
    bl fn_8008937C
    lfs f1, lbl_808864E8
    mr r20, r3
    lfs f2, lbl_808864EC
    mr r5, r27
    lfs f3, lbl_808864F0
    addi r4, r31, 0x4e
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808864E8
    mr r3, r20
    lfs f2, lbl_808864EC
    mr r5, r26
    lfs f3, lbl_808864F0
    addi r4, r31, 0x58
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808864E8
    mr r3, r20
    lfs f2, lbl_808864EC
    mr r5, r25
    lfs f3, lbl_808864F0
    addi r4, r31, 0x5f
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    addi r21, r21, 0x1
    addi r26, r26, 0xc
    cmpwi r21, 0x2
    addi r25, r25, 0xc
    addi r27, r27, 0xc
    blt lbl_fn_80418C4C_00000F48
    addi r23, r23, 0x1
    addi r29, r29, 0x18
    cmpwi r23, 0x2
    addi r28, r28, 0x18
    addi r30, r30, 0x18
    blt lbl_fn_80418C4C_00000F14
    addi r11, r1, 0x260
    bl _restgpr_20
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_80418EA4(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_80418EAC(void)
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
    beq lbl_fn_80418EAC_00001088
    lis r5, lbl_80753050@ha
    li r3, 0x818
    addi r5, r5, lbl_80753050@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80418EAC_0000108C
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80419010
    b lbl_fn_80418EAC_0000108C
lbl_fn_80418EAC_00001088:
    li r3, 0x0
lbl_fn_80418EAC_0000108C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80418F30(void)
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
    beq lbl_fn_80418F30_0000116C
    lis r5, lbl_80753050@ha
    li r3, 0x818
    addi r5, r5, lbl_80753050@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80418F30_00001100
    lwz r5, 0x18(r31)
    mr r4, r30
    lwz r6, 0x1c(r31)
    bl fn_80419010
lbl_fn_80418F30_00001100:
    cmpwi r3, 0x0
    beq lbl_fn_80418F30_00001170
    lfs f2, 0xc(r31)
    addi r4, r1, 0x14
    psq_l f1, 0x4(r31), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x6c(r3), 0, 0
    lfs f0, lbl_808864FC
    stfs f2, 0x74(r3)
    lfs f3, lbl_808864F8
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
    stw r31, 0x814(r3)
    b lbl_fn_80418F30_00001170
lbl_fn_80418F30_0000116C:
    li r3, 0x0
lbl_fn_80418F30_00001170:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80419010(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_803EC568
    lis r4, lbl_8078DC88@ha
    addi r3, r28, 0xf4
    addi r4, r4, lbl_8078DC88@l
    stw r4, 0x0(r28)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    li r31, 0x0
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    stw r31, 0x4c4(r28)
    addi r3, r28, 0x4c8
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x7
    bl fn_806958E0
    addi r5, r28, 0x544
    addi r3, r28, 0x634
    lfs f0, lbl_808864F8
    cmplw r5, r3
    li r4, 0x1
    stw r31, 0x51c(r28)
    stfs f0, 0x520(r28)
    stb r4, 0x524(r28)
    stb r4, 0x525(r28)
    stfs f0, 0x528(r28)
    stw r31, 0x52c(r28)
    stw r31, 0x530(r28)
    stfs f0, 0x534(r28)
    stfs f0, 0x538(r28)
    stfs f0, 0x53c(r28)
    stfs f0, 0x540(r28)
    bge lbl_fn_80419010_00001280
    addi r3, r3, 0x27
    li r0, 0x28
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_80419010_00001280
lbl_fn_80419010_0000124C:
    stw r31, 0x0(r5)
    stfs f0, 0x4(r5)
    stb r4, 0x8(r5)
    stb r4, 0x9(r5)
    stfs f0, 0xc(r5)
    stw r31, 0x10(r5)
    stw r31, 0x14(r5)
    stfs f0, 0x18(r5)
    stfs f0, 0x1c(r5)
    stfs f0, 0x20(r5)
    stfs f0, 0x24(r5)
    addi r5, r5, 0x28
    bdnz lbl_fn_80419010_0000124C
lbl_fn_80419010_00001280:
    li r31, 0x0
    stw r31, 0x634(r28)
    addi r30, r28, 0x638
    addi r29, r28, 0x7f8
lbl_fn_80419010_00001290:
    stb r31, 0x0(r30)
    addi r3, r30, 0x8
    li r4, 0x0
    li r5, 0x14
    stb r31, 0x1(r30)
    stw r31, 0x4(r30)
    bl memset
    addi r30, r30, 0x1c
    cmplw r30, r29
    blt lbl_fn_80419010_00001290
    lfs f0, lbl_808864F8
    li r4, 0x0
    li r0, 0x6
    stw r4, 0x7f8(r28)
    mr r3, r28
    stfs f0, 0x7fc(r28)
    stfs f0, 0x800(r28)
    stfs f0, 0x804(r28)
    stfs f0, 0x808(r28)
    stfs f0, 0x80c(r28)
    stfs f0, 0x810(r28)
    stw r4, 0x814(r28)
    stw r4, 0x54(r28)
    stw r0, 0xe8(r28)
    stw r4, 0xec(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8041919C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8041919C_000013F4
    lis r4, lbl_8078DC88@ha
    li r30, 0x0
    addi r4, r4, lbl_8078DC88@l
    stw r4, 0x0(r3)
    li r31, 0x0
lbl_fn_8041919C_00001354:
    add r3, r28, r31
    lwz r3, 0x530(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8041919C_0000137C
    beq lbl_fn_8041919C_0000137C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8041919C_0000137C:
    addi r30, r30, 0x1
    addi r31, r31, 0x28
    cmplwi r30, 0x7
    blt lbl_fn_8041919C_00001354
    lis r4, fn_800EF73C@ha
    addi r3, r28, 0x4c8
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x7
    bl fn_806959D8
    addic. r0, r28, 0x4c4
    beq lbl_fn_8041919C_000013CC
    lwz r3, 0x4c4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8041919C_000013CC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8041919C_000013CC:
    addi r3, r28, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r28
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r29, 0x0
    ble lbl_fn_8041919C_000013F4
    mr r3, r28
    bl dtor_80084684
lbl_fn_8041919C_000013F4:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804192A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_804192A0_000014B4
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    lis r3, 0x8
    li r0, 0x7
    mr r5, r31
    addi r4, r3, 0x8f8
    mtctr r0
lbl_fn_804192A0_00001458:
    lwz r3, 0x530(r5)
    cmpwi r3, 0x0
    beq lbl_fn_804192A0_00001480
    lwz r0, 0x8(r3)
    ori r0, r0, 0x8
    stw r0, 0x8(r3)
    lwz r3, 0x530(r5)
    stw r31, 0xc(r3)
    lwz r3, 0x530(r5)
    stw r4, 0x20(r3)
lbl_fn_804192A0_00001480:
    addi r5, r5, 0x28
    bdnz lbl_fn_804192A0_00001458
    psq_l f1, 0x6c(r31), 0, 0
    addi r4, r31, 0x808
    lfs f2, 0x74(r31)
    li r3, 0x1
    psq_st f1, 0x7fc(r31), 0, 0
    psq_l f1, 0x78(r31), 0, 0
    stfs f2, 0x804(r31)
    lfs f2, 0x80(r31)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x810(r31)
    b lbl_fn_804192A0_000014B8
lbl_fn_804192A0_000014B4:
    li r3, 0x0
lbl_fn_804192A0_000014B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80419354(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80419354_00001530
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80419354_00001530:
    lwz r0, 0x4c4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80419354_0000155C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    b lbl_fn_80419354_00001578
lbl_fn_80419354_0000155C:
    lis r5, lbl_8078DC40@ha
    lwzu r4, lbl_8078DC40@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
lbl_fn_80419354_00001578:
    lwz r5, 0x40(r1)
    addi r3, r1, 0x8
    lwz r4, 0x44(r1)
    lwz r0, 0x48(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80419354_000015D8
    lwz r3, 0x4c4(r31)
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_l f1, 0xfc(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
lbl_fn_80419354_000015D8:
    lwz r0, 0x4c4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80419354_00001604
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    b lbl_fn_80419354_00001620
lbl_fn_80419354_00001604:
    lis r5, lbl_8078DC4C@ha
    lwzu r4, lbl_8078DC4C@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
lbl_fn_80419354_00001620:
    lwz r5, 0x4c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80419354_00001658
    lwz r3, 0x4c4(r31)
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
lbl_fn_80419354_00001658:
    lwz r4, 0x58(r31)
    li r0, 0x0
    lfs f0, lbl_808864F8
    mr r3, r31
    addi r4, r4, 0x1
    stw r4, 0x20(r1)
    addi r4, r1, 0x20
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8041953C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    lis r0, 0x4330
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    mr r31, r3
    lwz r4, 0x814(r3)
    stw r0, 0x88(r1)
    cmpwi r4, 0x0
    stw r0, 0x90(r1)
    beq lbl_fn_8041953C_000016F4
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8041953C_00001BA4
lbl_fn_8041953C_000016F4:
    lwz r4, lbl_8087EFB4
    lfs f0, 0x74(r3)
    lfs f7, 0x114(r4)
    lfs f9, 0x110(r4)
    fsubs f10, f7, f0
    lfs f8, 0x70(r3)
    lfs f0, 0x6c(r3)
    addi r3, r1, 0x5c
    lfs f7, 0x10c(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f10, 0x64(r1)
    bl fn_805F9920
    lwz r3, lbl_8087F430
    fmr f31, f1
    cmpwi r3, 0x0
    beq lbl_fn_8041953C_0000176C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8041953C_0000176C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8041953C_0000176C
    lfs f0, lbl_80886500
    fcmpo cr0, f31, f0
    bgt lbl_fn_8041953C_00001BA4
lbl_fn_8041953C_0000176C:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8041953C_00001BA4
    mulli r5, r0, 0x28
    add r4, r31, r5
    lwz r3, 0x52c(r4)
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8041953C_00001878
    lwz r6, 0x7f8(r31)
    lis r3, lbl_80753038@ha
    lfd f8, lbl_80753038@l(r3)
    xoris r0, r6, 0x8000
    stw r0, 0x8c(r1)
    lfs f7, 0x540(r4)
    lfd f0, 0x88(r1)
    lfs f9, lbl_808864F8
    fsubs f0, f0, f8
    fdivs f0, f0, f7
    fcmpo cr0, f0, f9
    ble lbl_fn_8041953C_000017D0
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f0, f0, f8
    fdivs f9, f0, f7
lbl_fn_8041953C_000017D0:
    lfs f11, lbl_808864FC
    fcmpo cr0, f9, f11
    bge lbl_fn_8041953C_00001818
    xoris r0, r6, 0x8000
    stw r0, 0x8c(r1)
    lis r3, lbl_80753038@ha
    lfs f7, 0x540(r4)
    lfd f8, lbl_80753038@l(r3)
    lfd f0, 0x88(r1)
    lfs f11, lbl_808864F8
    fsubs f0, f0, f8
    fdivs f0, f0, f7
    fcmpo cr0, f0, f11
    ble lbl_fn_8041953C_00001818
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f0, f0, f8
    fdivs f11, f0, f7
lbl_fn_8041953C_00001818:
    add r3, r31, r5
    lfs f8, 0x804(r31)
    lfs f0, 0x53c(r3)
    addi r4, r1, 0x50
    lfs f7, 0x538(r3)
    fmuls f9, f0, f11
    lfs f0, 0x534(r3)
    fmuls f10, f7, f11
    lfs f7, 0x800(r31)
    fmuls f11, f0, f11
    lfs f0, 0x7fc(r31)
    fadds f2, f8, f9
    stfs f11, 0x44(r1)
    fadds f7, f7, f10
    fadds f0, f0, f11
    stfs f10, 0x48(r1)
    stfs f0, 0x50(r1)
    stfs f7, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x4c(r1)
    stfs f2, 0x58(r1)
    psq_st f1, 0x6c(r31), 0, 0
    stfs f2, 0x74(r31)
    b lbl_fn_8041953C_00001998
lbl_fn_8041953C_00001878:
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8041953C_00001988
    lwz r6, 0x7f8(r31)
    lis r3, lbl_80753038@ha
    lfd f9, lbl_80753038@l(r3)
    xoris r0, r6, 0x8000
    stw r0, 0x8c(r1)
    lfs f8, 0x540(r4)
    lfd f0, 0x88(r1)
    lfs f7, lbl_808864FC
    fsubs f0, f0, f9
    lfs f10, lbl_808864F8
    fdivs f0, f0, f8
    fsubs f0, f7, f0
    fcmpo cr0, f0, f10
    ble lbl_fn_8041953C_000018D0
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f0, f0, f9
    fdivs f0, f0, f8
    fsubs f10, f7, f0
lbl_fn_8041953C_000018D0:
    lfs f9, lbl_808864FC
    fcmpo cr0, f10, f9
    bge lbl_fn_8041953C_00001924
    xoris r0, r6, 0x8000
    stw r0, 0x8c(r1)
    lis r3, lbl_80753038@ha
    lfs f7, 0x540(r4)
    lfd f8, lbl_80753038@l(r3)
    lfd f0, 0x88(r1)
    lfs f11, lbl_808864F8
    fsubs f0, f0, f8
    fdivs f0, f0, f7
    fsubs f0, f9, f0
    fcmpo cr0, f0, f11
    ble lbl_fn_8041953C_00001928
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f0, f0, f8
    fdivs f0, f0, f7
    fsubs f11, f9, f0
    b lbl_fn_8041953C_00001928
lbl_fn_8041953C_00001924:
    fmr f11, f9
lbl_fn_8041953C_00001928:
    add r3, r31, r5
    lfs f8, 0x804(r31)
    lfs f0, 0x53c(r3)
    addi r4, r1, 0x38
    lfs f7, 0x538(r3)
    fmuls f9, f0, f11
    lfs f0, 0x534(r3)
    fmuls f10, f7, f11
    lfs f7, 0x800(r31)
    fmuls f11, f0, f11
    lfs f0, 0x7fc(r31)
    fadds f2, f8, f9
    stfs f11, 0x2c(r1)
    fadds f7, f7, f10
    fadds f0, f0, f11
    stfs f10, 0x30(r1)
    stfs f0, 0x38(r1)
    stfs f7, 0x3c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x34(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x6c(r31), 0, 0
    stfs f2, 0x74(r31)
    b lbl_fn_8041953C_00001998
lbl_fn_8041953C_00001988:
    psq_l f1, 0x7fc(r31), 0, 0
    lfs f2, 0x804(r31)
    psq_st f1, 0x6c(r31), 0, 0
    stfs f2, 0x74(r31)
lbl_fn_8041953C_00001998:
    lwz r0, 0x54(r31)
    mulli r0, r0, 0x28
    add r3, r31, r0
    lwz r0, 0x52c(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8041953C_00001A00
    lfs f9, lbl_808864F8
    addi r3, r1, 0x20
    lfs f0, 0x810(r31)
    lfs f8, lbl_80886504
    fadds f2, f0, f9
    lfs f7, 0x80c(r31)
    lfs f0, 0x808(r31)
    fadds f7, f7, f8
    stfs f9, 0x14(r1)
    fadds f0, f0, f9
    stfs f7, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f8, 0x18(r1)
    stfs f9, 0x1c(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x78(r31), 0, 0
    stfs f2, 0x80(r31)
    b lbl_fn_8041953C_00001A14
lbl_fn_8041953C_00001A00:
    addi r3, r31, 0x808
    lfs f2, 0x810(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x78(r31), 0, 0
    stfs f2, 0x80(r31)
lbl_fn_8041953C_00001A14:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041953C_00001A50
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8041953C_00001A50:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041953C_00001A90
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8041953C_00001A90:
    lwz r0, 0x4c4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8041953C_00001ABC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x98(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x9c(r1)
    stw r0, 0xa0(r1)
    b lbl_fn_8041953C_00001AD8
lbl_fn_8041953C_00001ABC:
    lis r5, lbl_8078DC58@ha
    lwzu r4, lbl_8078DC58@l(r5)
    stw r4, 0x98(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x9c(r1)
    stw r0, 0xa0(r1)
lbl_fn_8041953C_00001AD8:
    lwz r5, 0x98(r1)
    addi r3, r1, 0x8
    lwz r4, 0x9c(r1)
    lwz r0, 0xa0(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8041953C_00001B38
    lwz r3, 0x4c4(r31)
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_l f1, 0xfc(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
lbl_fn_8041953C_00001B38:
    lwz r4, 0x7f8(r31)
    mr r3, r31
    addi r0, r4, 0x1
    stw r0, 0x7f8(r31)
    bl fn_8041AAC0
    cmpwi r3, 0x0
    blt lbl_fn_8041953C_00001BA4
    mulli r4, r3, 0x1c
    lfs f0, lbl_808864F8
    li r0, 0x0
    mr r3, r31
    add r5, r31, r4
    lbz r5, 0x639(r5)
    addi r4, r1, 0x68
    extsb r5, r5
    stw r5, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8041953C_00001BA4:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
