#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8009E5A0(void);
extern void fn_8009E6EC(void);
extern void fn_8009EB20(void);
extern void fn_8009EE30(void);
extern void fn_8009F788(void);
extern void fn_8009FFCC(void);
extern void fn_800DC288(void);
extern void fn_8036554C(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_80401E50(void);
extern void fn_804023E0(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_80695720(void);
extern void fn_80695B00(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80752798[];
extern u8 lbl_807527C0[];
extern u8 lbl_807527D4[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D130[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF58;
extern u32 lbl_8087DF5C;
extern u32 lbl_8087DF60;
extern u32 lbl_8087DF64;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_808860C0;
extern u32 lbl_808860C4;
extern u32 lbl_808860C8;
extern u32 lbl_808860CC;
extern u32 lbl_808860D0;
extern u32 lbl_808860D4;
extern u32 lbl_808860D8;
extern u32 lbl_808860DC;
extern u32 lbl_808860E0;
extern u32 lbl_808860E4;
extern u32 lbl_808860E8;
extern u32 lbl_808860EC;
extern u32 lbl_808860F8;
extern u32 lbl_80886118;
extern u32 lbl_8088611C;
extern u32 lbl_80886120;
extern u32 lbl_80886124;
extern u32 lbl_80886128;
extern u32 lbl_8088612C;
extern u32 lbl_80886130;
extern u32 lbl_80886134;
extern u32 lbl_80886138;
extern u32 lbl_8088613C;
extern u32 lbl_80886140;
extern u32 lbl_80886144;
extern u32 lbl_80886148;
extern u32 lbl_8088614C;
extern u32 lbl_80886150;
extern u32 lbl_80886154;

/* Function declarations */
void fn_804003E0(void);
void fn_804006E0(void);
void fn_804006FC(void);
void fn_80400714(void);
void fn_80400728(void);
void fn_80400818(void);
void fn_80400904(void);
void fn_8040099C(void);
void fn_80400C74(void);
void fn_80400D08(void);
void fn_8040134C(void);
void fn_80401610(void);
void fn_8040161C(void);
void fn_80401BF0(void);

asm void fn_804003E0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_25
    lwz r5, 0x94(r3)
    mr r25, r3
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    lfs f0, 0xc(r5)
    lfs f7, 0x114(r4)
    lfs f9, 0x110(r4)
    fsubs f10, f7, f0
    lfs f8, 0x8(r5)
    lfs f7, 0x10c(r4)
    lfs f0, 0x4(r5)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f10, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_808860F8
    fcmpo cr0, f1, f0
    bgt lbl_fn_804003E0_000002E0
    lwz r31, 0xf0(r25)
    lfs f8, 0x100(r25)
    lfs f9, 0xc(r31)
    lfs f0, 0x8(r31)
    lfs f7, 0x0(r31)
    fsubs f9, f9, f0
    lfs f0, 0x104(r25)
    fadds f0, f7, f0
    fdivs f7, f9, f8
    fcmpo cr0, f0, f8
    fmuls f31, f7, f0
    ble lbl_fn_804003E0_000000A0
    fmr f31, f9
lbl_fn_804003E0_000000A0:
    lfs f7, 0x118(r25)
    lfs f0, 0x14(r31)
    fadds f1, f7, f0
    bl fn_8068AD58
    lfs f7, lbl_808860C8
    frsp f9, f1
    lfs f0, 0x10(r31)
    lfs f8, 0x8(r31)
    fdivs f7, f7, f0
    lfs f0, lbl_808860CC
    lfs f1, 0x118(r25)
    fadds f8, f8, f31
    fdivs f7, f8, f7
    fmuls f0, f0, f7
    fmuls f0, f0, f9
    stfs f0, 0x10c(r25)
    bl fn_8068AD58
    lfs f0, 0x8(r31)
    frsp f10, f1
    lfs f7, 0x118(r25)
    fadds f9, f0, f31
    lfs f0, 0x108(r25)
    lfs f8, lbl_808860CC
    fadds f1, f7, f0
    fmuls f0, f9, f10
    fmuls f0, f8, f0
    stfs f0, 0x110(r25)
    bl fn_8068AD58
    lfs f0, 0x8(r31)
    frsp f10, f1
    lfs f11, lbl_808860CC
    fadds f0, f0, f31
    lfs f8, 0x1c(r31)
    lfs f9, lbl_808860D0
    lfs f7, 0x104(r25)
    fmuls f10, f0, f10
    lfs f0, lbl_808860D4
    fmuls f10, f11, f10
    fmuls f8, f8, f10
    stfs f8, 0x114(r25)
    lfs f10, 0xc(r31)
    lfs f8, 0x0(r31)
    fdivs f9, f10, f9
    fmuls f9, f11, f9
    fadds f7, f8, f7
    fmuls f7, f7, f9
    stfs f7, 0x124(r25)
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_804003E0_00000178
    lfs f7, 0x100(r25)
    lfs f0, lbl_808860D8
    fmuls f0, f7, f0
    stfs f0, 0x124(r25)
lbl_fn_804003E0_00000178:
    lfs f9, 0x0(r31)
    lfs f0, lbl_808860C0
    fcmpo cr0, f9, f0
    ble lbl_fn_804003E0_000001C8
    lfs f8, lbl_808860E0
    lfs f7, lbl_808860DC
    lfs f0, 0x118(r25)
    fnmsubs f7, f8, f9, f7
    fdivs f1, f0, f7
    bl fn_8068A850
    frsp f9, f1
    lfs f0, lbl_808860C4
    lfs f8, 0x20(r31)
    lfs f7, lbl_808860E4
    fsubs f9, f0, f9
    lfs f0, 0x0(r31)
    fmuls f8, f8, f9
    fmadds f0, f7, f0, f8
    stfs f0, 0x104(r25)
    b lbl_fn_804003E0_000001CC
lbl_fn_804003E0_000001C8:
    stfs f0, 0x104(r25)
lbl_fn_804003E0_000001CC:
    lfs f10, 0x0(r31)
    lfs f8, 0x104(r25)
    lfs f7, lbl_808860EC
    lfs f0, lbl_808860E8
    fadds f9, f10, f8
    lwz r0, 0x9c(r25)
    fnmsubs f8, f7, f10, f0
    lfs f7, 0x18(r31)
    lfs f0, 0x118(r25)
    cmpwi r0, 0x0
    fdivs f8, f9, f8
    fadds f7, f7, f8
    fadds f0, f0, f7
    stfs f0, 0x118(r25)
    beq lbl_fn_804003E0_000002E0
    lwz r0, 0xa0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_804003E0_000002E0
    lwz r0, 0xa4(r25)
    cmpwi r0, 0x0
    bne lbl_fn_804003E0_00000224
    b lbl_fn_804003E0_000002E0
lbl_fn_804003E0_00000224:
    mr r3, r25
    bl fn_8009EB20
    lwz r26, 0x98(r25)
    cmpwi r26, 0x0
    beq lbl_fn_804003E0_000002E0
    lwz r5, 0x4(r25)
    addi r4, r1, 0x18
    psq_l f1, 0x30(r25), 0, 0
    addi r30, r1, 0x48
    lwz r3, 0x17c(r5)
    li r29, 0x0
    lwz r27, 0x4c(r5)
    li r31, 0x0
    lwz r28, 0x44(r3)
    psq_l f2, 0x38(r25), 0, 0
    psq_l f3, 0x40(r25), 0, 0
    psq_l f4, 0x48(r25), 0, 0
    psq_l f5, 0x50(r25), 0, 0
    psq_l f6, 0x58(r25), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    b lbl_fn_804003E0_000002D8
lbl_fn_804003E0_0000028C:
    addi r3, r1, 0x18
    add r4, r27, r31
    addi r5, r1, 0x48
    bl fn_805F89F0
    psq_l f2, 0x8(r30), 0, 0
    add r3, r26, r31
    psq_l f3, 0x10(r30), 0, 0
    addi r29, r29, 0x1
    psq_l f4, 0x18(r30), 0, 0
    addi r31, r31, 0x30
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_804003E0_000002D8:
    cmpw r29, r28
    blt lbl_fn_804003E0_0000028C
lbl_fn_804003E0_000002E0:
    addi r11, r1, 0xa0
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    bl _restgpr_25
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804006E0(void)
{
    nofralloc
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beqlr
    li r4, 0x0
    b fn_8009E6EC
    blr
}

asm void fn_804006FC(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_804006FC_0000032C
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
lbl_fn_804006FC_0000032C:
    li r3, 0x0
    blr
}

asm void fn_80400714(void)
{
    nofralloc
    lwz r0, 0xf8(r3)
    stw r4, 0x2d0(r3)
    oris r0, r0, 0x1
    stw r0, 0xf8(r3)
    blr
}

asm void fn_80400728(void)
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
    beq lbl_fn_80400728_00000414
    lis r5, lbl_807527D4@ha
    li r3, 0x138
    addi r5, r5, lbl_807527D4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80400728_0000040C
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r3, lbl_8078D130@ha
    lfs f3, lbl_80886118
    addi r3, r3, lbl_8078D130@l
    stw r3, 0x0(r31)
    lfs f2, lbl_8088611C
    li r3, 0xa
    stfs f3, 0xfc(r31)
    li r0, 0x0
    lfs f1, lbl_80886120
    stfs f3, 0x100(r31)
    lfs f0, lbl_80886124
    stfs f2, 0x104(r31)
    stfs f1, 0x108(r31)
    stfs f1, 0x10c(r31)
    stfs f0, 0x110(r31)
    stw r3, 0x114(r31)
    stb r0, 0x118(r31)
    stfs f3, 0x120(r31)
    stfs f3, 0x124(r31)
    stw r0, 0x128(r31)
    stw r0, 0x12c(r31)
    stw r0, 0x130(r31)
    stw r0, 0xf4(r31)
lbl_fn_80400728_0000040C:
    mr r3, r31
    b lbl_fn_80400728_00000418
lbl_fn_80400728_00000414:
    li r3, 0x0
lbl_fn_80400728_00000418:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80400818(void)
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
    beq lbl_fn_80400818_00000500
    lis r4, lbl_8078D130@ha
    li r30, 0x0
    addi r4, r4, lbl_8078D130@l
    stw r4, 0x0(r3)
    li r31, 0x0
    b lbl_fn_80400818_000004AC
lbl_fn_80400818_0000047C:
    lwz r3, 0x130(r28)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_fn_80400818_000004A4
    beq lbl_fn_80400818_000004A4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80400818_000004A4:
    addi r31, r31, 0x30
    addi r30, r30, 0x1
lbl_fn_80400818_000004AC:
    lwz r0, 0x12c(r28)
    cmplw r30, r0
    blt lbl_fn_80400818_0000047C
    addic. r0, r28, 0x12c
    beq lbl_fn_80400818_000004E4
    lwz r3, 0x130(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80400818_000004D8
    beq lbl_fn_80400818_000004D8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80400818_000004D8:
    li r0, 0x0
    stw r0, 0x130(r28)
    stw r0, 0x12c(r28)
lbl_fn_80400818_000004E4:
    mr r3, r28
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r29, 0x0
    ble lbl_fn_80400818_00000500
    mr r3, r28
    bl dtor_80084684
lbl_fn_80400818_00000500:
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

asm void fn_80400904(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80400904_0000059C
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80400904_00000580
lbl_fn_80400904_00000558:
    lwz r3, 0x130(r29)
    lwzx r3, r3, r31
    lwz r3, 0x4(r3)
    bl fn_8009FFCC
    cmpwi r3, 0x0
    beq lbl_fn_80400904_00000578
    li r3, 0x0
    b lbl_fn_80400904_000005A0
lbl_fn_80400904_00000578:
    addi r30, r30, 0x1
    addi r31, r31, 0x30
lbl_fn_80400904_00000580:
    lwz r0, 0x114(r29)
    cmpw r30, r0
    blt lbl_fn_80400904_00000558
    mr r3, r29
    bl fn_80400D08
    li r3, 0x1
    b lbl_fn_80400904_000005A0
lbl_fn_80400904_0000059C:
    li r3, 0x0
lbl_fn_80400904_000005A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040099C(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x1f0
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0xf4(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8040099C_00000604
    cmplwi r0, 0x1
    beq lbl_fn_8040099C_0000060C
    b lbl_fn_8040099C_0000065C
lbl_fn_8040099C_00000604:
    bl fn_80400D08
    b lbl_fn_8040099C_0000065C
lbl_fn_8040099C_0000060C:
    lwz r0, 0xf8(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8040099C_00000638
    cmpwi r0, 0x3
    bge lbl_fn_8040099C_00000638
    mulli r0, r0, 0xc
    lis r4, lbl_80752798@ha
    addi r4, r4, lbl_80752798@l
    add r12, r4, r0
    bl fn_80695B00
    nop
lbl_fn_8040099C_00000638:
    lfs f7, 0x10c(r31)
    lfs f0, lbl_80886128
    lfs f8, 0x108(r31)
    fsubs f0, f7, f0
    fcmpo cr0, f0, f8
    bge lbl_fn_8040099C_00000654
    b lbl_fn_8040099C_00000658
lbl_fn_8040099C_00000654:
    fmr f8, f0
lbl_fn_8040099C_00000658:
    stfs f8, 0x10c(r31)
lbl_fn_8040099C_0000065C:
    lfs f29, lbl_80886118
    addi r29, r1, 0x198
    lfs f30, lbl_8088611C
    addi r25, r1, 0x18
    lfs f31, lbl_8088612C
    addi r28, r1, 0x138
    addi r27, r1, 0xd8
    li r24, 0x0
    li r30, 0x0
    b lbl_fn_8040099C_00000858
lbl_fn_8040099C_00000684:
    lwz r0, lbl_8087DF58
    cmpwi r0, 0x0
    beq lbl_fn_8040099C_00000850
    lwz r3, 0x130(r31)
    lwzx r3, r3, r30
    bl fn_8009EB20
    lwz r0, 0x130(r31)
    stfs f29, 0x44(r1)
    add r26, r0, r30
    stfs f29, 0x3c(r1)
    stfs f29, 0x38(r1)
    stfs f29, 0x34(r1)
    stfs f29, 0x30(r1)
    stfs f29, 0x28(r1)
    stfs f29, 0x24(r1)
    stfs f29, 0x20(r1)
    stfs f29, 0x1c(r1)
    stfs f30, 0x40(r1)
    stfs f30, 0x2c(r1)
    stfs f30, 0x18(r1)
    lfs f1, 0x18(r26)
    fcmpu cr0, f29, f1
    beq lbl_fn_8040099C_0000072C
    addi r3, r1, 0x168
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0x168
    addi r5, r1, 0x198
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_8040099C_0000072C:
    lfs f1, 0x14(r26)
    fcmpu cr0, f29, f1
    beq lbl_fn_8040099C_00000784
    addi r3, r1, 0x108
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0x108
    addi r5, r1, 0x138
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_8040099C_00000784:
    lfs f1, 0x10(r26)
    fcmpu cr0, f29, f1
    beq lbl_fn_8040099C_000007DC
    addi r3, r1, 0xa8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0xa8
    addi r5, r1, 0xd8
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_8040099C_000007DC:
    fmr f1, f31
    stfs f31, 0x8(r1)
    addi r3, r1, 0x48
    stfs f31, 0xc(r1)
    fmr f2, f1
    fmr f3, f1
    stfs f31, 0x10(r1)
    bl fn_805F9160
    addi r3, r1, 0x18
    addi r4, r1, 0x48
    addi r5, r1, 0x78
    bl fn_805F89F0
    lwz r3, 0x130(r31)
    addi r4, r1, 0x78
    lfs f10, 0x74(r31)
    add r5, r3, r30
    lfs f9, 0x70(r31)
    lfs f0, 0xc(r5)
    lfs f8, 0x8(r5)
    fadds f10, f10, f0
    lfs f7, 0x6c(r31)
    lfs f0, 0x4(r5)
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f8, 0x94(r1)
    stfs f0, 0x84(r1)
    stfs f10, 0xa4(r1)
    lwzx r3, r3, r30
    bl fn_8009EE30
lbl_fn_8040099C_00000850:
    addi r24, r24, 0x1
    addi r30, r30, 0x30
lbl_fn_8040099C_00000858:
    lwz r0, 0x114(r31)
    cmpw r24, r0
    blt lbl_fn_8040099C_00000684
    addi r11, r1, 0x1f0
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    bl _restgpr_24
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80400C74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    mr r30, r29
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_80400C74_000008FC
lbl_fn_80400C74_000008C4:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80400C74_000008F4
    lwz r0, 0x9c(r28)
    lwz r3, 0x130(r28)
    cmpwi r0, 0x0
    lwzx r3, r3, r31
    beq lbl_fn_80400C74_000008F4
    stw r30, 0x64(r3)
    li r4, 0x1
    bl fn_8009E6EC
lbl_fn_80400C74_000008F4:
    addi r29, r29, 0x1
    addi r31, r31, 0x30
lbl_fn_80400C74_000008FC:
    lwz r0, 0x114(r28)
    cmpw r29, r0
    blt lbl_fn_80400C74_000008C4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80400D08(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x210
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
    bl _savegpr_25
    lfs f7, lbl_80886118
    lis r0, 0x4330
    lfs f0, lbl_8088611C
    mr r26, r3
    stfs f7, 0x1cc(r1)
    addi r25, r1, 0x1a0
    addi r27, r1, 0x50
    stfs f7, 0x1c4(r1)
    stfs f7, 0x1c0(r1)
    stfs f7, 0x1bc(r1)
    stfs f7, 0x1b8(r1)
    stfs f7, 0x1b0(r1)
    stfs f7, 0x1ac(r1)
    stfs f7, 0x1a8(r1)
    stfs f7, 0x1a4(r1)
    stfs f0, 0x1c8(r1)
    stfs f0, 0x1b4(r1)
    stfs f0, 0x1a0(r1)
    stfs f7, 0x7c(r1)
    stfs f7, 0x74(r1)
    stfs f7, 0x70(r1)
    stfs f7, 0x6c(r1)
    stfs f7, 0x68(r1)
    stfs f7, 0x60(r1)
    stfs f7, 0x5c(r1)
    stfs f7, 0x58(r1)
    stfs f7, 0x54(r1)
    stfs f0, 0x78(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x50(r1)
    lfs f1, 0x80(r3)
    stw r0, 0x1d0(r1)
    fcmpu cr0, f7, f1
    stw r0, 0x1d8(r1)
    beq lbl_fn_80400D08_00000A58
    addi r3, r1, 0x140
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x140
    addi r5, r1, 0x170
    bl fn_805F89F0
    addi r3, r1, 0x170
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80400D08_00000A58:
    lfs f0, lbl_80886118
    lfs f1, 0x7c(r26)
    fcmpu cr0, f0, f1
    beq lbl_fn_80400D08_00000AB8
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0xe0
    addi r5, r1, 0x110
    bl fn_805F89F0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80400D08_00000AB8:
    lfs f0, lbl_80886118
    lfs f1, 0x78(r26)
    fcmpu cr0, f0, f1
    beq lbl_fn_80400D08_00000B18
    addi r3, r1, 0x80
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x80
    addi r5, r1, 0xb0
    bl fn_805F89F0
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80400D08_00000B18:
    mr r3, r25
    mr r4, r27
    addi r5, r1, 0x20
    bl fn_805F89F0
    addi r6, r1, 0x20
    addi r4, r26, 0xfc
    psq_l f1, 0x0(r6), 0, 0
    mr r5, r4
    psq_l f2, 0x8(r6), 0, 0
    addi r3, r1, 0x1a0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
    bl fn_805F93C0
    lis r4, lbl_807527C0@ha
    lis r3, 0x4178
    lis r5, 0x5ac5
    lfd f28, lbl_807527C0@l(r4)
    lfs f31, lbl_80886130
    addi r31, r5, 0x242b
    lfs f30, lbl_80886134
    addi r30, r3, 0x749f
    lfs f29, lbl_80886138
    addi r29, r1, 0x14
    lfs f25, lbl_80886118
    addi r28, r1, 0x8
    li r27, 0x0
    li r25, 0x0
    b lbl_fn_80400D08_00000D10
lbl_fn_80400D08_00000BA8:
    bl fn_80680CF8
    mulhw r0, r31, r3
    srawi r0, r0, 7
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x169
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1d4(r1)
    lfd f0, 0x1d0(r1)
    fsubs f0, f0, f28
    fmuls f26, f31, f0
    fmr f1, f26
    bl fn_8068AD58
    frsp f24, f1
    bl fn_80680CF8
    mulhw r0, r30, r3
    lfs f0, 0x11c(r26)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1dc(r1)
    lfd f7, 0x1d8(r1)
    fsubs f7, f7, f28
    fdivs f7, f7, f30
    fmuls f0, f0, f7
    fmuls f27, f24, f0
    bl fn_80680CF8
    lfs f7, 0x11c(r26)
    fmr f1, f26
    fctiwz f0, f7
    stfd f0, 0x1e0(r1)
    lwz r4, 0x1e4(r1)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1d4(r1)
    lfd f0, 0x1d0(r1)
    fsubs f0, f0, f28
    fnmsubs f24, f7, f29, f0
    bl fn_8068A850
    frsp f26, f1
    bl fn_80680CF8
    mulhw r0, r30, r3
    lwz r4, 0x130(r26)
    lfs f0, 0x11c(r26)
    fmr f2, f27
    add r5, r4, r25
    stfs f24, 0x18(r1)
    srawi r0, r0, 8
    stfs f25, 0x8(r1)
    srwi r4, r0, 31
    addi r27, r27, 0x1
    add r0, r0, r4
    stfs f25, 0xc(r1)
    mulli r0, r0, 0x3e9
    stfs f27, 0x1c(r1)
    subf r0, r0, r3
    stfs f25, 0x10(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1dc(r1)
    lfd f7, 0x1d8(r1)
    fsubs f7, f7, f28
    fdivs f7, f7, f30
    fmuls f0, f0, f7
    fmuls f0, f26, f0
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0xc(r5)
    fmr f2, f25
    lwz r0, 0x130(r26)
    add r3, r0, r25
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    lwz r0, 0x130(r26)
    add r3, r0, r25
    stfs f25, 0x1c(r3)
    lwz r0, 0x130(r26)
    add r3, r0, r25
    stfs f25, 0x20(r3)
    lwz r0, 0x130(r26)
    add r3, r0, r25
    addi r25, r25, 0x30
    stfs f25, 0x24(r3)
lbl_fn_80400D08_00000D10:
    lwz r0, 0x114(r26)
    cmpw r27, r0
    blt lbl_fn_80400D08_00000BA8
    lwz r0, 0xf8(r26)
    cmpwi r0, 0x2
    beq lbl_fn_80400D08_00000F0C
    lis r4, lbl_807527C0@ha
    lis r3, 0x4178
    lis r5, 0x5ac5
    lfd f29, lbl_807527C0@l(r4)
    lfs f30, lbl_80886130
    addi r30, r5, 0x242b
    lfs f31, lbl_80886134
    addi r31, r3, 0x749f
    li r29, 0x0
    li r27, 0x0
    b lbl_fn_80400D08_00000F00
lbl_fn_80400D08_00000D54:
    bl fn_80680CF8
    mulhw r0, r30, r3
    srawi r0, r0, 7
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x169
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1d4(r1)
    lfd f0, 0x1d0(r1)
    fsubs f0, f0, f29
    fmuls f26, f30, f0
    fmr f1, f26
    bl fn_8068A850
    lwz r0, 0x130(r26)
    frsp f24, f1
    add r28, r0, r27
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f0, 0x11c(r26)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1dc(r1)
    lfd f7, 0x1d8(r1)
    fsubs f7, f7, f29
    fdivs f7, f7, f31
    fmuls f0, f0, f7
    fmuls f27, f24, f0
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f7, 0x110(r26)
    lfs f0, 0xfc(r26)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1d4(r1)
    lfd f8, 0x1d0(r1)
    fsubs f8, f8, f29
    fdivs f8, f8, f31
    fmuls f7, f7, f8
    fmadds f0, f0, f7, f27
    stfs f0, 0x4(r28)
    lwz r0, 0x130(r26)
    add r25, r0, r27
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f7, 0x110(r26)
    lfs f0, 0x100(r26)
    fmr f1, f26
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1dc(r1)
    lfd f8, 0x1d8(r1)
    fsubs f8, f8, f29
    fdivs f8, f8, f31
    fmuls f7, f7, f8
    fmuls f0, f0, f7
    stfs f0, 0x8(r25)
    bl fn_8068AD58
    lwz r0, 0x130(r26)
    frsp f24, f1
    add r28, r0, r27
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f0, 0x11c(r26)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1d4(r1)
    lfd f7, 0x1d0(r1)
    fsubs f7, f7, f29
    fdivs f7, f7, f31
    fmuls f0, f0, f7
    fmuls f26, f24, f0
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f7, 0x110(r26)
    lfs f0, 0x104(r26)
    addi r29, r29, 0x1
    addi r27, r27, 0x30
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1dc(r1)
    lfd f8, 0x1d8(r1)
    fsubs f8, f8, f29
    fdivs f8, f8, f31
    fmuls f7, f7, f8
    fmadds f0, f0, f7, f26
    stfs f0, 0xc(r28)
lbl_fn_80400D08_00000F00:
    lwz r0, 0x114(r26)
    cmpw r29, r0
    blt lbl_fn_80400D08_00000D54
lbl_fn_80400D08_00000F0C:
    li r0, 0x1
    stw r0, 0xf4(r26)
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
    addi r11, r1, 0x210
    bl _restgpr_25
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_8040134C(void)
{
    nofralloc
    stwu r1, -0x780(r1)
    mflr r0
    stw r0, 0x784(r1)
    addi r11, r1, 0x760
    stfd f31, 0x770(r1)
    psq_st f31, 0x778(r1), 0, 0
    stfd f30, 0x760(r1)
    psq_st f30, 0x768(r1), 0, 0
    bl _savegpr_27
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r29, r3
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
    mr r4, r29
    mr r5, r30
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
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x100
    bl memset
    lis r29, lbl_807527D4@ha
    lfs f30, lbl_8088612C
    lfs f31, lbl_8088613C
    addi r29, r29, lbl_807527D4@l
lbl_fn_8040134C_00001040:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r27, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8040134C_00001124
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040134C_00001090
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r27, r3
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x8
    addi r5, r5, 0x1
    bl memcpy
    b lbl_fn_8040134C_00001124
lbl_fn_8040134C_00001090:
    mr r3, r27
    addi r4, r29, 0x10
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040134C_00001124
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xf8(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x114(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    lwz r0, 0xf8(r31)
    stfs f1, 0x10c(r31)
    cmpwi r0, 0x1
    stfs f1, 0x108(r31)
    bne lbl_fn_8040134C_000010EC
    stfs f30, 0x10c(r31)
    stfs f30, 0x108(r31)
lbl_fn_8040134C_000010EC:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x110(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    frsp f0, f1
    stfs f1, 0x11c(r31)
    fcmpo cr0, f0, f31
    ble lbl_fn_8040134C_0000111C
    b lbl_fn_8040134C_00001120
lbl_fn_8040134C_0000111C:
    fmr f0, f31
lbl_fn_8040134C_00001120:
    stfs f0, 0x11c(r31)
lbl_fn_8040134C_00001124:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8040134C_00001040
    lwz r3, 0x130(r31)
    lwz r29, 0x114(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8040134C_00001150
    beq lbl_fn_8040134C_00001150
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8040134C_00001150:
    cmpwi r29, 0x0
    stw r29, 0x12c(r31)
    beq lbl_fn_8040134C_00001198
    mulli r3, r29, 0x30
    li r4, 0x0
    la r5, lbl_8087DF64
    la r6, lbl_8087DF60
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80401610@ha
    mr r7, r29
    addi r4, r4, fn_80401610@l
    li r5, 0x0
    li r6, 0x30
    bl fn_80695720
    stw r3, 0x130(r31)
    b lbl_fn_8040134C_000011A0
lbl_fn_8040134C_00001198:
    li r0, 0x0
    stw r0, 0x130(r31)
lbl_fn_8040134C_000011A0:
    li r27, 0x0
    li r30, 0x0
    lis r29, lbl_807527D4@ha
    b lbl_fn_8040134C_000011FC
lbl_fn_8040134C_000011B0:
    addi r5, r29, lbl_807527D4@l
    li r3, 0x88
    mr r6, r5
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8040134C_000011EC
    addi r3, r1, 0x8
    bl fn_8009F788
    mr r4, r3
    mr r3, r28
    bl fn_8009E5A0
    mr r28, r3
lbl_fn_8040134C_000011EC:
    lwz r3, 0x130(r31)
    addi r27, r27, 0x1
    stwx r28, r3, r30
    addi r30, r30, 0x30
lbl_fn_8040134C_000011FC:
    lwz r0, 0x114(r31)
    cmpw r27, r0
    blt lbl_fn_8040134C_000011B0
    addi r11, r1, 0x760
    psq_l f31, 0x778(r1), 0, 0
    lfd f31, 0x770(r1)
    psq_l f30, 0x768(r1), 0, 0
    lfd f30, 0x760(r1)
    bl _restgpr_27
    lwz r0, 0x784(r1)
    mtlr r0
    addi r1, r1, 0x780
    blr
}

asm void fn_80401610(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_8040161C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x70
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    stfd f27, 0xf0(r1)
    psq_st f27, 0xf8(r1), 0, 0
    stfd f26, 0xe0(r1)
    psq_st f26, 0xe8(r1), 0, 0
    stfd f25, 0xd0(r1)
    psq_st f25, 0xd8(r1), 0, 0
    stfd f24, 0xc0(r1)
    psq_st f24, 0xc8(r1), 0, 0
    stfd f23, 0xb0(r1)
    psq_st f23, 0xb8(r1), 0, 0
    stfd f22, 0xa0(r1)
    psq_st f22, 0xa8(r1), 0, 0
    stfd f21, 0x90(r1)
    psq_st f21, 0x98(r1), 0, 0
    stfd f20, 0x80(r1)
    psq_st f20, 0x88(r1), 0, 0
    stfd f19, 0x70(r1)
    psq_st f19, 0x78(r1), 0, 0
    bl _savegpr_23
    lwz r0, lbl_8087DF5C
    lis r4, 0x4330
    stw r4, 0x30(r1)
    mr r25, r3
    cmplwi r0, 0x1
    stw r4, 0x38(r1)
    bne lbl_fn_8040161C_00001790
    lis r3, lbl_807527C0@ha
    lis r30, 0x6666
    lis r28, 0x4178
    lfd f22, lbl_807527C0@l(r3)
    lfs f23, lbl_80886134
    addi r27, r28, 0x749f
    lfs f24, lbl_80886148
    addi r31, r30, 0x6667
    lfs f25, lbl_80886144
    li r26, 0x0
    lfs f26, lbl_80886140
    li r24, 0x0
    lfs f27, lbl_80886130
    lis r29, 0x5ac5
    lfs f29, lbl_8088614C
    lfs f28, lbl_80886118
    lfs f30, lbl_80886138
    lfs f31, lbl_8088613C
    b lbl_fn_8040161C_000016E8
lbl_fn_8040161C_00001320:
    bl fn_80680CF8
    mulhw r4, r27, r3
    lwz r0, 0x130(r25)
    lfs f0, 0x10c(r25)
    add r5, r0, r24
    lfs f4, 0x120(r25)
    fdivs f0, f0, f25
    srawi r0, r4, 8
    lfs f1, 0xfc(r25)
    srwi r4, r0, 31
    lfs f3, 0x104(r25)
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    fmuls f5, f26, f0
    lfs f0, 0x4(r5)
    lfs f2, 0x100(r25)
    subf r0, r0, r3
    addi r3, r1, 0x20
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f6, 0x30(r1)
    fsubs f6, f6, f22
    fdivs f6, f6, f23
    fmuls f6, f24, f6
    fmadds f21, f5, f6, f4
    fmuls f4, f1, f21
    fmuls f2, f2, f21
    fmuls f1, f3, f21
    stfs f4, 0x14(r1)
    fadds f0, f0, f4
    stfs f2, 0x18(r1)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r5)
    stfs f1, 0x1c(r1)
    fadds f0, f0, f2
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r5)
    fadds f0, f0, f1
    stfs f0, 0xc(r5)
    lwz r0, 0x130(r25)
    lfs f3, 0x74(r25)
    add r4, r0, r24
    lfs f2, 0x70(r25)
    lfs f1, 0xc(r4)
    lfs f0, 0x8(r4)
    fadds f4, f3, f1
    lfs f1, 0x6c(r25)
    fadds f5, f2, f0
    lfs f0, 0x4(r4)
    stfs f4, 0x10(r1)
    fadds f0, f1, f0
    fsubs f3, f3, f4
    stfs f5, 0xc(r1)
    fsubs f2, f2, f5
    fsubs f1, f1, f0
    stfs f0, 0x8(r1)
    stfs f1, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f3, 0x28(r1)
    bl fn_805F9920
    lfs f0, 0x110(r25)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8040161C_0000154C
    bl fn_80680CF8
    addi r0, r29, 0x242b
    mulhw r0, r0, r3
    srawi r0, r0, 7
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x169
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f22
    fmuls f20, f27, f0
    fmr f1, f20
    bl fn_8068A850
    lwz r0, 0x130(r25)
    frsp f19, f1
    add r23, r0, r24
    bl fn_80680CF8
    addi r0, r28, 0x749f
    lfs f0, 0x11c(r25)
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f22
    fdivs f1, f1, f23
    fmuls f0, f0, f1
    fmuls f0, f19, f0
    stfs f0, 0x4(r23)
    lwz r0, 0x130(r25)
    add r23, r0, r24
    bl fn_80680CF8
    addi r0, r28, 0x749f
    lfs f0, 0x11c(r25)
    mulhw r0, r0, r3
    fmr f1, f20
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f2, 0x38(r1)
    fsubs f2, f2, f22
    fdivs f2, f2, f23
    fmuls f0, f0, f2
    stfs f0, 0x8(r23)
    bl fn_8068AD58
    lwz r0, 0x130(r25)
    frsp f19, f1
    add r23, r0, r24
    bl fn_80680CF8
    addi r0, r28, 0x749f
    lfs f0, 0x11c(r25)
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f22
    fdivs f1, f1, f23
    fmuls f0, f0, f1
    fmuls f0, f19, f0
    stfs f0, 0xc(r23)
lbl_fn_8040161C_0000154C:
    lwz r0, 0xf8(r25)
    cmpwi r0, 0x1
    beq lbl_fn_8040161C_0000156C
    lwz r0, 0x130(r25)
    add r3, r0, r24
    lfs f0, 0x8(r3)
    fcmpo cr0, f0, f28
    ble lbl_fn_8040161C_000015B0
lbl_fn_8040161C_0000156C:
    lwz r0, 0x130(r25)
    add r23, r0, r24
    bl fn_80680CF8
    addi r0, r30, 0x6667
    lfs f0, 0x8(r23)
    mulhw r0, r0, r3
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f1, 0x38(r1)
    fsubs f1, f1, f22
    fmadds f0, f29, f1, f0
    stfs f0, 0x8(r23)
lbl_fn_8040161C_000015B0:
    lwz r0, 0xf8(r25)
    cmpwi r0, 0x1
    beq lbl_fn_8040161C_00001608
    lwz r0, 0x130(r25)
    add r23, r0, r24
    bl fn_80680CF8
    addi r0, r28, 0x749f
    lfs f0, 0x8(r23)
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f22
    fdivs f1, f1, f23
    fmuls f1, f30, f1
    fmadds f0, f21, f1, f0
    stfs f0, 0x8(r23)
lbl_fn_8040161C_00001608:
    lwz r0, 0x130(r25)
    add r23, r0, r24
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f1, 0x10c(r25)
    lfs f0, 0x10(r23)
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x14
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f2, 0x38(r1)
    fsubs f2, f2, f22
    fmadds f1, f31, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x10(r23)
    lwz r0, 0x130(r25)
    add r23, r0, r24
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f1, 0x10c(r25)
    lfs f0, 0x14(r23)
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x14
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f2, 0x30(r1)
    fsubs f2, f2, f22
    fmadds f1, f31, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x14(r23)
    lwz r0, 0x130(r25)
    add r23, r0, r24
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f1, 0x10c(r25)
    lfs f0, 0x18(r23)
    addi r26, r26, 0x1
    addi r24, r24, 0x30
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x14
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f2, 0x38(r1)
    fsubs f2, f2, f22
    fmadds f1, f31, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x18(r23)
lbl_fn_8040161C_000016E8:
    lwz r0, 0x114(r25)
    cmpw r26, r0
    blt lbl_fn_8040161C_00001320
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf. r0, r0, r3
    bne lbl_fn_8040161C_0000172C
    lfs f1, 0x10c(r25)
    lfs f0, lbl_8088613C
    fadds f0, f1, f0
    stfs f0, 0x10c(r25)
lbl_fn_8040161C_0000172C:
    lwz r3, 0x128(r25)
    cmpwi r3, 0x0
    ble lbl_fn_8040161C_00001764
    lfs f2, 0x120(r25)
    subi r0, r3, 0x1
    lfs f1, 0x124(r25)
    stw r0, 0x128(r25)
    fcmpo cr0, f2, f1
    bge lbl_fn_8040161C_00001790
    lfs f0, lbl_80886144
    fdivs f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x120(r25)
    b lbl_fn_8040161C_00001790
lbl_fn_8040161C_00001764:
    lfs f3, 0x120(r25)
    lfs f2, lbl_80886118
    fcmpo cr0, f3, f2
    ble lbl_fn_8040161C_00001790
    lfs f1, lbl_80886150
    lfs f0, lbl_80886154
    fmuls f1, f3, f1
    stfs f1, 0x120(r25)
    fcmpo cr0, f1, f0
    bge lbl_fn_8040161C_00001790
    stfs f2, 0x120(r25)
lbl_fn_8040161C_00001790:
    addi r11, r1, 0x70
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    psq_l f27, 0xf8(r1), 0, 0
    lfd f27, 0xf0(r1)
    psq_l f26, 0xe8(r1), 0, 0
    lfd f26, 0xe0(r1)
    psq_l f25, 0xd8(r1), 0, 0
    lfd f25, 0xd0(r1)
    psq_l f24, 0xc8(r1), 0, 0
    lfd f24, 0xc0(r1)
    psq_l f23, 0xb8(r1), 0, 0
    lfd f23, 0xb0(r1)
    psq_l f22, 0xa8(r1), 0, 0
    lfd f22, 0xa0(r1)
    psq_l f21, 0x98(r1), 0, 0
    lfd f21, 0x90(r1)
    psq_l f20, 0x88(r1), 0, 0
    lfd f20, 0x80(r1)
    psq_l f19, 0x78(r1), 0, 0
    lfd f19, 0x70(r1)
    bl _restgpr_23
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_80401BF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_80401BF0_0000183C
    lwz r4, 0x48(r4)
    bl fn_80401E50
lbl_fn_80401BF0_0000183C:
    lwz r3, lbl_8087F428
    cmpwi r3, 0x0
    beq lbl_fn_80401BF0_000018F0
    bl fn_8036554C
    mr r30, r3
    b lbl_fn_80401BF0_000018E8
lbl_fn_80401BF0_00001854:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80401BF0_00001880
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80401BF0_00001880
    li r5, 0x1
lbl_fn_80401BF0_00001880:
    cmpwi r5, 0x0
    beq lbl_fn_80401BF0_0000189C
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80401BF0_0000189C
    li r3, 0x1
lbl_fn_80401BF0_0000189C:
    cmpwi r3, 0x0
    beq lbl_fn_80401BF0_000018D0
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80401BF0_000018C4
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_80401BF0_000018C4
    li r3, 0x1
lbl_fn_80401BF0_000018C4:
    cmpwi r3, 0x0
    bne lbl_fn_80401BF0_000018D0
    li r4, 0x1
lbl_fn_80401BF0_000018D0:
    cmpwi r4, 0x0
    beq lbl_fn_80401BF0_000018E4
    mr r3, r31
    mr r4, r30
    bl fn_80401E50
lbl_fn_80401BF0_000018E4:
    lwz r30, 0x14ac(r30)
lbl_fn_80401BF0_000018E8:
    cmpwi r30, 0x0
    bne lbl_fn_80401BF0_00001854
lbl_fn_80401BF0_000018F0:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_80401BF0_000019A0
    lwz r30, 0x48(r3)
    b lbl_fn_80401BF0_00001998
lbl_fn_80401BF0_00001904:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80401BF0_00001930
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80401BF0_00001930
    li r5, 0x1
lbl_fn_80401BF0_00001930:
    cmpwi r5, 0x0
    beq lbl_fn_80401BF0_0000194C
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80401BF0_0000194C
    li r3, 0x1
lbl_fn_80401BF0_0000194C:
    cmpwi r3, 0x0
    beq lbl_fn_80401BF0_00001980
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80401BF0_00001974
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_80401BF0_00001974
    li r3, 0x1
lbl_fn_80401BF0_00001974:
    cmpwi r3, 0x0
    bne lbl_fn_80401BF0_00001980
    li r4, 0x1
lbl_fn_80401BF0_00001980:
    cmpwi r4, 0x0
    beq lbl_fn_80401BF0_00001994
    mr r3, r31
    mr r4, r30
    bl fn_80401E50
lbl_fn_80401BF0_00001994:
    lwz r30, 0x14ac(r30)
lbl_fn_80401BF0_00001998:
    cmpwi r30, 0x0
    bne lbl_fn_80401BF0_00001904
lbl_fn_80401BF0_000019A0:
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_80401BF0_00001A50
    lwz r30, 0x48(r3)
    b lbl_fn_80401BF0_00001A48
lbl_fn_80401BF0_000019B4:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80401BF0_000019E0
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80401BF0_000019E0
    li r5, 0x1
lbl_fn_80401BF0_000019E0:
    cmpwi r5, 0x0
    beq lbl_fn_80401BF0_000019FC
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80401BF0_000019FC
    li r3, 0x1
lbl_fn_80401BF0_000019FC:
    cmpwi r3, 0x0
    beq lbl_fn_80401BF0_00001A30
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80401BF0_00001A24
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_80401BF0_00001A24
    li r3, 0x1
lbl_fn_80401BF0_00001A24:
    cmpwi r3, 0x0
    bne lbl_fn_80401BF0_00001A30
    li r4, 0x1
lbl_fn_80401BF0_00001A30:
    cmpwi r4, 0x0
    beq lbl_fn_80401BF0_00001A44
    mr r3, r31
    mr r4, r30
    bl fn_80401E50
lbl_fn_80401BF0_00001A44:
    lwz r30, 0x1424(r30)
lbl_fn_80401BF0_00001A48:
    cmpwi r30, 0x0
    bne lbl_fn_80401BF0_000019B4
lbl_fn_80401BF0_00001A50:
    mr r3, r31
    bl fn_804023E0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
