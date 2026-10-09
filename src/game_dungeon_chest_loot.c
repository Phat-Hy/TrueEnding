#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_80049B2C(void);
extern void fn_80049B74(void);
extern void fn_80049C3C(void);
extern void fn_80049CDC(void);
extern void fn_800697D8(void);
extern void fn_8006AA20(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800C93D4(void);
extern void fn_800C97F8(void);
extern void fn_800C9C64(void);
extern void fn_800CA7D4(void);
extern void fn_800CB360(void);
extern void fn_800CB36C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB404(void);
extern void fn_800CB440(void);
extern void fn_800CB58C(void);
extern void fn_800CB5B4(void);
extern void fn_800CB5C8(void);
extern void fn_800CB654(void);
extern void fn_800CB6F8(void);
extern void fn_800CFDA0(void);
extern void fn_800CFDC8(void);
extern void fn_800D0AB0(void);
extern void fn_8011F944(void);
extern void fn_80179EBC(void);
extern void fn_8021FD7C(void);
extern void fn_8036554C(void);
extern void fn_803761CC(void);
extern void fn_803EB668(void);
extern void fn_803EB7E4(void);
extern void fn_80473F88(void);
extern void fn_80680CF8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80751D1C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F540;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885F48;
extern u32 lbl_80885F4C;

/* Function declarations */
void fn_803E907C(void);
void fn_803E9608(void);
void fn_803E9B7C(void);
void fn_803EA09C(void);
void fn_803EA77C(void);

asm void fn_803E907C(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x210
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    bl _savegpr_24
    fmr f31, f1
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r24, r8
    addi r3, r1, 0x8
    bl fn_800CB360
    lwz r0, 0x394(r27)
    cmplwi r0, 0x20
    blt lbl_fn_803E907C_00000068
    mr r3, r26
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E907C_0000056C
lbl_fn_803E907C_00000068:
    cmpwi r28, 0x0
    beq lbl_fn_803E907C_00000084
    lwz r3, lbl_8087EE90
    mr r4, r28
    bl fn_80049B74
    mr r4, r3
    b lbl_fn_803E907C_00000088
lbl_fn_803E907C_00000084:
    li r4, 0x0
lbl_fn_803E907C_00000088:
    mr r3, r27
    mr r5, r24
    bl fn_803EB7E4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_803E907C_000000BC
    mr r3, r26
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E907C_0000056C
lbl_fn_803E907C_000000BC:
    lbz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803E907C_000001D8
    cmpwi r28, 0x0
    beq lbl_fn_803E907C_000000E4
    lwz r3, lbl_8087EE90
    mr r4, r28
    bl fn_80049B74
    mr r24, r3
    b lbl_fn_803E907C_000000E8
lbl_fn_803E907C_000000E4:
    li r24, 0x0
lbl_fn_803E907C_000000E8:
    mr r3, r31
    bl fn_800CB6F8
    cmplw r24, r3
    beq lbl_fn_803E907C_000001D8
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_803E907C_0000015C
    lwz r25, lbl_8087EE90
    mr r3, r31
    bl fn_800CB6F8
    mr r4, r3
    mr r3, r25
    bl fn_80049CDC
    mr r25, r3
    mr r3, r31
    bl fn_800CB6F8
    lis r4, lbl_80751D1C@ha
    mr r7, r3
    addi r4, r4, lbl_80751D1C@l
    mr r5, r24
    mr r6, r28
    mr r8, r25
    addi r3, r1, 0x10
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x10
    bl fn_800697D8
lbl_fn_803E907C_0000015C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803E907C_000001A4
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803E907C_000001A4
    lwz r3, 0x1154(r4)
    addi r0, r31, 0x4
    cmplw r3, r0
    bne lbl_fn_803E907C_000001A4
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803E907C_000001A4:
    addi r3, r31, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r3, lbl_807C7030@ha
    stw r0, 0x18(r31)
    addi r3, r3, lbl_807C7030@l
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    stw r0, 0x28(r31)
    stb r0, 0x2c(r31)
    stb r0, 0x2d(r31)
lbl_fn_803E907C_000001D8:
    lbz r0, 0x2c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803E907C_00000310
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803E907C_0000022C
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803E907C_0000022C
    lwz r3, 0x1154(r4)
    addi r0, r31, 0x4
    cmplw r3, r0
    bne lbl_fn_803E907C_0000022C
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803E907C_0000022C:
    addi r3, r31, 0x10
    bl fn_80473F88
    li r25, 0x0
    lis r3, lbl_807C7030@ha
    stw r25, 0x18(r31)
    addi r3, r3, lbl_807C7030@l
    mr r4, r28
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    stw r25, 0x28(r31)
    stb r25, 0x2c(r31)
    stb r25, 0x2d(r31)
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    lwz r5, lbl_8087EFE8
    mr r4, r3
    stw r25, 0x34c8(r5)
    lwz r3, lbl_8087EFE8
    bl fn_800D0AB0
    lwz r4, lbl_8087EFE8
    li r0, 0x1
    cmpwi r3, 0x0
    mr r25, r3
    stw r0, 0x34c8(r4)
    bne lbl_fn_803E907C_000002A0
    li r25, 0x0
    b lbl_fn_803E907C_000002DC
lbl_fn_803E907C_000002A0:
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    bl fn_800CFDA0
    stw r3, 0xa8(r25)
    li r4, 0x8
    lwz r3, lbl_8087EFE8
    bl fn_800CFDC8
    stw r3, 0xac(r25)
    mr r3, r25
    mr r4, r30
    bl fn_800CA7D4
    mr r3, r25
    mr r4, r28
    mr r5, r29
    bl fn_800C97F8
lbl_fn_803E907C_000002DC:
    mr r3, r31
    mr r4, r25
    bl fn_800CB404
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803E907C_00000310
    mr r3, r26
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E907C_0000056C
lbl_fn_803E907C_00000310:
    li r0, 0x0
    stb r0, 0x2c(r31)
    fmr f1, f31
    mr r3, r31
    stb r0, 0x2d(r31)
    li r4, 0x0
    bl fn_800CB5B4
    lfs f1, lbl_80885F48
    mr r3, r31
    fmr f2, f1
    fmr f3, f1
    bl fn_800CB654
    lwz r3, lbl_8087EE90
    mr r4, r28
    bl fn_80049C3C
    cmpwi r3, 0x0
    beq lbl_fn_803E907C_00000368
    lfs f1, lbl_80885F4C
    mr r3, r31
    fmr f2, f1
    fmr f3, f1
    bl fn_800CB654
lbl_fn_803E907C_00000368:
    lfs f2, 0x8(r29)
    li r4, 0x0
    psq_l f1, 0x0(r29), 0, 0
    li r3, -0x1
    psq_st f1, 0x1c(r31), 0, 0
    li r0, 0x1
    lfs f0, lbl_80885F4C
    stfs f2, 0x24(r31)
    stw r4, 0x110(r1)
    stw r4, 0x134(r1)
    stw r4, 0x138(r1)
    stw r4, 0x13c(r1)
    stw r4, 0x140(r1)
    stw r4, 0x144(r1)
    stb r4, 0x148(r1)
    stw r4, 0x168(r1)
    stw r4, 0x16c(r1)
    stw r4, 0x114(r1)
    stw r4, 0x118(r1)
    stw r4, 0x11c(r1)
    stw r3, 0x120(r1)
    stfs f0, 0x124(r1)
    stw r0, 0x128(r1)
    stw r4, 0x12c(r1)
    stw r4, 0x130(r1)
    b lbl_fn_803E907C_00000444
    bl fn_800CB5C8
    lwz r3, 0x18(r4)
    cmpwi r3, 0x0
    beq lbl_fn_803E907C_00000408
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803E907C_00000408
    lwz r3, 0x1154(r3)
    li r0, 0x4
    cmplw r3, r0
    bne lbl_fn_803E907C_00000408
    stw r4, 0x1154(r3)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r3)
lbl_fn_803E907C_00000408:
    li r3, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r4, lbl_807C7030@ha
    stw r0, 0x18(r3)
    addi r4, r4, lbl_807C7030@l
    li r5, 0x1c
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    stw r0, 0x28(r3)
    stb r0, 0x2c(r3)
    stb r0, 0x2d(r3)
    stw r0, 0x134(r1)
lbl_fn_803E907C_00000444:
    li r0, 0x1
    stw r0, 0x114(r1)
    stw r31, 0x134(r1)
    lwz r0, 0x394(r27)
    mulli r0, r0, 0xe0
    add r0, r27, r0
    addic. r3, r0, 0x398
    beq lbl_fn_803E907C_00000548
    lwz r4, 0x110(r1)
    li r0, 0x10
    stw r4, 0x0(r3)
    addi r5, r3, 0x5c
    addi r4, r1, 0x16c
    lwz r6, 0x114(r1)
    stw r6, 0x4(r3)
    lwz r6, 0x118(r1)
    stw r6, 0x8(r3)
    lwz r6, 0x11c(r1)
    stw r6, 0xc(r3)
    lwz r6, 0x120(r1)
    stw r6, 0x10(r3)
    lfs f0, 0x124(r1)
    stfs f0, 0x14(r3)
    lwz r6, 0x128(r1)
    stw r6, 0x18(r3)
    lwz r6, 0x12c(r1)
    stw r6, 0x1c(r3)
    lwz r6, 0x130(r1)
    stw r6, 0x20(r3)
    lwz r6, 0x134(r1)
    stw r6, 0x24(r3)
    lwz r6, 0x138(r1)
    stw r6, 0x28(r3)
    lwz r6, 0x13c(r1)
    stw r6, 0x2c(r3)
    lwz r6, 0x140(r1)
    stw r6, 0x30(r3)
    lwz r6, 0x144(r1)
    stw r6, 0x34(r3)
    lwz r6, 0x14c(r1)
    lwz r7, 0x148(r1)
    stw r7, 0x38(r3)
    stw r6, 0x3c(r3)
    lwz r6, 0x154(r1)
    lwz r7, 0x150(r1)
    stw r7, 0x40(r3)
    stw r6, 0x44(r3)
    lwz r6, 0x15c(r1)
    lwz r7, 0x158(r1)
    stw r7, 0x48(r3)
    stw r6, 0x4c(r3)
    lwz r6, 0x164(r1)
    lwz r7, 0x160(r1)
    stw r7, 0x50(r3)
    stw r6, 0x54(r3)
    lwz r6, 0x168(r1)
    stw r6, 0x58(r3)
    lwz r6, 0x16c(r1)
    stw r6, 0x5c(r3)
    mtctr r0
lbl_fn_803E907C_00000534:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803E907C_00000534
lbl_fn_803E907C_00000548:
    lwz r5, 0x394(r27)
    mr r3, r26
    mr r4, r31
    addi r0, r5, 0x1
    stw r0, 0x394(r27)
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803E907C_0000056C:
    addi r11, r1, 0x210
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    bl _restgpr_24
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_803E9608(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x210
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    bl _savegpr_25
    fmr f31, f1
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r25, r7
    addi r3, r1, 0x8
    bl fn_800CB360
    lwz r0, 0x394(r28)
    cmplwi r0, 0x20
    blt lbl_fn_803E9608_000005F0
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E9608_00000AE0
lbl_fn_803E9608_000005F0:
    cmpwi r29, 0x0
    beq lbl_fn_803E9608_0000060C
    lwz r3, lbl_8087EE90
    mr r4, r29
    bl fn_80049B74
    mr r4, r3
    b lbl_fn_803E9608_00000610
lbl_fn_803E9608_0000060C:
    li r4, 0x0
lbl_fn_803E9608_00000610:
    mr r3, r28
    mr r5, r25
    bl fn_803EB7E4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_803E9608_00000644
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E9608_00000AE0
lbl_fn_803E9608_00000644:
    lbz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803E9608_00000760
    cmpwi r29, 0x0
    beq lbl_fn_803E9608_0000066C
    lwz r3, lbl_8087EE90
    mr r4, r29
    bl fn_80049B74
    mr r25, r3
    b lbl_fn_803E9608_00000670
lbl_fn_803E9608_0000066C:
    li r25, 0x0
lbl_fn_803E9608_00000670:
    mr r3, r31
    bl fn_800CB6F8
    cmplw r25, r3
    beq lbl_fn_803E9608_00000760
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_803E9608_000006E4
    lwz r26, lbl_8087EE90
    mr r3, r31
    bl fn_800CB6F8
    mr r4, r3
    mr r3, r26
    bl fn_80049CDC
    mr r26, r3
    mr r3, r31
    bl fn_800CB6F8
    lis r4, lbl_80751D1C@ha
    mr r7, r3
    addi r4, r4, lbl_80751D1C@l
    mr r5, r25
    mr r6, r29
    mr r8, r26
    addi r3, r1, 0x10
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x10
    bl fn_800697D8
lbl_fn_803E9608_000006E4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803E9608_0000072C
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803E9608_0000072C
    lwz r3, 0x1154(r4)
    addi r0, r31, 0x4
    cmplw r3, r0
    bne lbl_fn_803E9608_0000072C
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803E9608_0000072C:
    addi r3, r31, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r3, lbl_807C7030@ha
    stw r0, 0x18(r31)
    addi r3, r3, lbl_807C7030@l
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    stw r0, 0x28(r31)
    stb r0, 0x2c(r31)
    stb r0, 0x2d(r31)
lbl_fn_803E9608_00000760:
    lbz r0, 0x2c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803E9608_00000894
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803E9608_000007B4
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803E9608_000007B4
    lwz r3, 0x1154(r4)
    addi r0, r31, 0x4
    cmplw r3, r0
    bne lbl_fn_803E9608_000007B4
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803E9608_000007B4:
    addi r3, r31, 0x10
    bl fn_80473F88
    li r26, 0x0
    lis r3, lbl_807C7030@ha
    stw r26, 0x18(r31)
    addi r3, r3, lbl_807C7030@l
    mr r4, r29
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    stw r26, 0x28(r31)
    stb r26, 0x2c(r31)
    stb r26, 0x2d(r31)
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    lwz r5, lbl_8087EFE8
    mr r4, r3
    stw r26, 0x34c8(r5)
    lwz r3, lbl_8087EFE8
    bl fn_800D0AB0
    lwz r4, lbl_8087EFE8
    li r0, 0x1
    cmpwi r3, 0x0
    mr r26, r3
    stw r0, 0x34c8(r4)
    bne lbl_fn_803E9608_00000828
    li r26, 0x0
    b lbl_fn_803E9608_00000860
lbl_fn_803E9608_00000828:
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    bl fn_800CFDA0
    stw r3, 0xa8(r26)
    li r4, 0x8
    lwz r3, lbl_8087EFE8
    bl fn_800CFDC8
    stw r3, 0xac(r26)
    mr r3, r26
    mr r4, r30
    bl fn_800CA7D4
    mr r3, r26
    mr r4, r29
    bl fn_800C93D4
lbl_fn_803E9608_00000860:
    mr r3, r31
    mr r4, r26
    bl fn_800CB404
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803E9608_00000894
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E9608_00000AE0
lbl_fn_803E9608_00000894:
    li r0, 0x0
    stb r0, 0x2c(r31)
    fmr f1, f31
    mr r3, r31
    stb r0, 0x2d(r31)
    li r4, 0x0
    bl fn_800CB5B4
    lfs f1, lbl_80885F48
    mr r3, r31
    fmr f2, f1
    fmr f3, f1
    bl fn_800CB654
    lwz r3, lbl_8087EE90
    mr r4, r29
    bl fn_80049C3C
    cmpwi r3, 0x0
    beq lbl_fn_803E9608_000008EC
    lfs f1, lbl_80885F4C
    mr r3, r31
    fmr f2, f1
    fmr f3, f1
    bl fn_800CB654
lbl_fn_803E9608_000008EC:
    lfs f0, lbl_80885F4C
    li r4, 0x0
    li r3, -0x1
    li r0, 0x1
    stw r4, 0x110(r1)
    stw r4, 0x134(r1)
    stw r4, 0x138(r1)
    stw r4, 0x13c(r1)
    stw r4, 0x140(r1)
    stw r4, 0x144(r1)
    stb r4, 0x148(r1)
    stw r4, 0x168(r1)
    stw r4, 0x16c(r1)
    stw r4, 0x114(r1)
    stw r4, 0x118(r1)
    stw r4, 0x11c(r1)
    stw r3, 0x120(r1)
    stfs f0, 0x124(r1)
    stw r0, 0x128(r1)
    stw r4, 0x12c(r1)
    stw r4, 0x130(r1)
    b lbl_fn_803E9608_000009B8
    bl fn_800CB5C8
    lwz r3, 0x18(r4)
    cmpwi r3, 0x0
    beq lbl_fn_803E9608_0000097C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803E9608_0000097C
    lwz r3, 0x1154(r3)
    li r0, 0x4
    cmplw r3, r0
    bne lbl_fn_803E9608_0000097C
    stw r4, 0x1154(r3)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r3)
lbl_fn_803E9608_0000097C:
    li r3, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r4, lbl_807C7030@ha
    stw r0, 0x18(r3)
    addi r4, r4, lbl_807C7030@l
    li r5, 0x1c
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    stw r0, 0x28(r3)
    stb r0, 0x2c(r3)
    stb r0, 0x2d(r3)
    stw r0, 0x134(r1)
lbl_fn_803E9608_000009B8:
    li r0, 0x1
    stw r0, 0x114(r1)
    stw r31, 0x134(r1)
    lwz r0, 0x394(r28)
    mulli r0, r0, 0xe0
    add r0, r28, r0
    addic. r3, r0, 0x398
    beq lbl_fn_803E9608_00000ABC
    lwz r4, 0x110(r1)
    li r0, 0x10
    stw r4, 0x0(r3)
    addi r5, r3, 0x5c
    addi r4, r1, 0x16c
    lwz r6, 0x114(r1)
    stw r6, 0x4(r3)
    lwz r6, 0x118(r1)
    stw r6, 0x8(r3)
    lwz r6, 0x11c(r1)
    stw r6, 0xc(r3)
    lwz r6, 0x120(r1)
    stw r6, 0x10(r3)
    lfs f0, 0x124(r1)
    stfs f0, 0x14(r3)
    lwz r6, 0x128(r1)
    stw r6, 0x18(r3)
    lwz r6, 0x12c(r1)
    stw r6, 0x1c(r3)
    lwz r6, 0x130(r1)
    stw r6, 0x20(r3)
    lwz r6, 0x134(r1)
    stw r6, 0x24(r3)
    lwz r6, 0x138(r1)
    stw r6, 0x28(r3)
    lwz r6, 0x13c(r1)
    stw r6, 0x2c(r3)
    lwz r6, 0x140(r1)
    stw r6, 0x30(r3)
    lwz r6, 0x144(r1)
    stw r6, 0x34(r3)
    lwz r6, 0x14c(r1)
    lwz r7, 0x148(r1)
    stw r7, 0x38(r3)
    stw r6, 0x3c(r3)
    lwz r6, 0x154(r1)
    lwz r7, 0x150(r1)
    stw r7, 0x40(r3)
    stw r6, 0x44(r3)
    lwz r6, 0x15c(r1)
    lwz r7, 0x158(r1)
    stw r7, 0x48(r3)
    stw r6, 0x4c(r3)
    lwz r6, 0x164(r1)
    lwz r7, 0x160(r1)
    stw r7, 0x50(r3)
    stw r6, 0x54(r3)
    lwz r6, 0x168(r1)
    stw r6, 0x58(r3)
    lwz r6, 0x16c(r1)
    stw r6, 0x5c(r3)
    mtctr r0
lbl_fn_803E9608_00000AA8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803E9608_00000AA8
lbl_fn_803E9608_00000ABC:
    lwz r5, 0x394(r28)
    mr r3, r27
    mr r4, r31
    addi r0, r5, 0x1
    stw r0, 0x394(r28)
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803E9608_00000AE0:
    addi r11, r1, 0x210
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    bl _restgpr_25
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_803E9B7C(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x210
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    bl _savegpr_25
    fmr f31, f1
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r25, r7
    addi r3, r1, 0x8
    bl fn_800CB360
    lwz r0, 0x394(r28)
    cmplwi r0, 0x20
    blt lbl_fn_803E9B7C_00000B64
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E9B7C_00001000
lbl_fn_803E9B7C_00000B64:
    mr r3, r28
    mr r4, r29
    mr r5, r25
    bl fn_803EB7E4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_803E9B7C_00000B9C
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E9B7C_00001000
lbl_fn_803E9B7C_00000B9C:
    lbz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803E9B7C_00000CA4
    bl fn_800CB6F8
    cmplw r29, r3
    beq lbl_fn_803E9B7C_00000CA4
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_803E9B7C_00000C28
    lwz r3, lbl_8087EE90
    mr r4, r29
    bl fn_80049CDC
    lwz r26, lbl_8087EE90
    mr r25, r3
    mr r3, r31
    bl fn_800CB6F8
    mr r4, r3
    mr r3, r26
    bl fn_80049CDC
    mr r26, r3
    mr r3, r31
    bl fn_800CB6F8
    lis r4, lbl_80751D1C@ha
    mr r7, r3
    addi r4, r4, lbl_80751D1C@l
    mr r5, r29
    mr r6, r25
    mr r8, r26
    addi r3, r1, 0x10
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x10
    bl fn_800697D8
lbl_fn_803E9B7C_00000C28:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803E9B7C_00000C70
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803E9B7C_00000C70
    lwz r3, 0x1154(r4)
    addi r0, r31, 0x4
    cmplw r3, r0
    bne lbl_fn_803E9B7C_00000C70
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803E9B7C_00000C70:
    addi r3, r31, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r3, lbl_807C7030@ha
    stw r0, 0x18(r31)
    addi r3, r3, lbl_807C7030@l
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    stw r0, 0x28(r31)
    stb r0, 0x2c(r31)
    stb r0, 0x2d(r31)
lbl_fn_803E9B7C_00000CA4:
    lbz r0, 0x2c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803E9B7C_00000DCC
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803E9B7C_00000CF8
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803E9B7C_00000CF8
    lwz r3, 0x1154(r4)
    addi r0, r31, 0x4
    cmplw r3, r0
    bne lbl_fn_803E9B7C_00000CF8
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803E9B7C_00000CF8:
    addi r3, r31, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r3, lbl_807C7030@ha
    stw r0, 0x18(r31)
    addi r3, r3, lbl_807C7030@l
    mr r4, r29
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    stw r0, 0x28(r31)
    stb r0, 0x2c(r31)
    stb r0, 0x2d(r31)
    lwz r3, lbl_8087EFE8
    stw r0, 0x34c8(r3)
    lwz r3, lbl_8087EFE8
    bl fn_800D0AB0
    lwz r4, lbl_8087EFE8
    li r0, 0x1
    cmpwi r3, 0x0
    mr r25, r3
    stw r0, 0x34c8(r4)
    bne lbl_fn_803E9B7C_00000D60
    li r25, 0x0
    b lbl_fn_803E9B7C_00000D98
lbl_fn_803E9B7C_00000D60:
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    bl fn_800CFDA0
    stw r3, 0xa8(r25)
    li r4, 0x8
    lwz r3, lbl_8087EFE8
    bl fn_800CFDC8
    stw r3, 0xac(r25)
    mr r3, r25
    mr r4, r30
    bl fn_800CA7D4
    mr r3, r25
    mr r4, r29
    bl fn_800C9C64
lbl_fn_803E9B7C_00000D98:
    mr r3, r31
    mr r4, r25
    bl fn_800CB404
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803E9B7C_00000DCC
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803E9B7C_00001000
lbl_fn_803E9B7C_00000DCC:
    li r29, 0x0
    stb r29, 0x2c(r31)
    fmr f1, f31
    mr r3, r31
    stb r29, 0x2d(r31)
    li r4, 0x0
    bl fn_800CB5B4
    lfs f1, lbl_80885F48
    mr r3, r31
    fmr f2, f1
    fmr f3, f1
    bl fn_800CB654
    lfs f0, lbl_80885F4C
    cmpwi r29, 0x0
    li r3, -0x1
    li r0, 0x1
    stw r29, 0x110(r1)
    stw r29, 0x134(r1)
    stw r29, 0x138(r1)
    stw r29, 0x13c(r1)
    stw r29, 0x140(r1)
    stw r29, 0x144(r1)
    stb r29, 0x148(r1)
    stw r29, 0x168(r1)
    stw r29, 0x16c(r1)
    stw r29, 0x114(r1)
    stw r29, 0x118(r1)
    stw r29, 0x11c(r1)
    stw r3, 0x120(r1)
    stfs f0, 0x124(r1)
    stw r0, 0x128(r1)
    stw r29, 0x12c(r1)
    stw r29, 0x130(r1)
    beq lbl_fn_803E9B7C_00000ED8
    li r25, 0x0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803E9B7C_00000E9C
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803E9B7C_00000E9C
    lwz r3, 0x1154(r4)
    li r0, 0x4
    cmplw r3, r0
    bne lbl_fn_803E9B7C_00000E9C
    stw r29, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803E9B7C_00000E9C:
    li r3, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r3, lbl_807C7030@ha
    stw r0, 0x18(r25)
    addi r3, r3, lbl_807C7030@l
    li r4, 0x1c
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    stw r0, 0x28(r25)
    stb r0, 0x2c(r25)
    stb r0, 0x2d(r25)
    stw r0, 0x134(r1)
lbl_fn_803E9B7C_00000ED8:
    li r0, 0x1
    stw r0, 0x114(r1)
    stw r31, 0x134(r1)
    lwz r0, 0x394(r28)
    mulli r0, r0, 0xe0
    add r0, r28, r0
    addic. r3, r0, 0x398
    beq lbl_fn_803E9B7C_00000FDC
    lwz r4, 0x110(r1)
    li r0, 0x10
    stw r4, 0x0(r3)
    addi r5, r3, 0x5c
    addi r4, r1, 0x16c
    lwz r6, 0x114(r1)
    stw r6, 0x4(r3)
    lwz r6, 0x118(r1)
    stw r6, 0x8(r3)
    lwz r6, 0x11c(r1)
    stw r6, 0xc(r3)
    lwz r6, 0x120(r1)
    stw r6, 0x10(r3)
    lfs f0, 0x124(r1)
    stfs f0, 0x14(r3)
    lwz r6, 0x128(r1)
    stw r6, 0x18(r3)
    lwz r6, 0x12c(r1)
    stw r6, 0x1c(r3)
    lwz r6, 0x130(r1)
    stw r6, 0x20(r3)
    lwz r6, 0x134(r1)
    stw r6, 0x24(r3)
    lwz r6, 0x138(r1)
    stw r6, 0x28(r3)
    lwz r6, 0x13c(r1)
    stw r6, 0x2c(r3)
    lwz r6, 0x140(r1)
    stw r6, 0x30(r3)
    lwz r6, 0x144(r1)
    stw r6, 0x34(r3)
    lwz r6, 0x14c(r1)
    lwz r7, 0x148(r1)
    stw r7, 0x38(r3)
    stw r6, 0x3c(r3)
    lwz r6, 0x154(r1)
    lwz r7, 0x150(r1)
    stw r7, 0x40(r3)
    stw r6, 0x44(r3)
    lwz r6, 0x15c(r1)
    lwz r7, 0x158(r1)
    stw r7, 0x48(r3)
    stw r6, 0x4c(r3)
    lwz r6, 0x164(r1)
    lwz r7, 0x160(r1)
    stw r7, 0x50(r3)
    stw r6, 0x54(r3)
    lwz r6, 0x168(r1)
    stw r6, 0x58(r3)
    lwz r6, 0x16c(r1)
    stw r6, 0x5c(r3)
    mtctr r0
lbl_fn_803E9B7C_00000FC8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803E9B7C_00000FC8
lbl_fn_803E9B7C_00000FDC:
    lwz r5, 0x394(r28)
    mr r3, r27
    mr r4, r31
    addi r0, r5, 0x1
    stw r0, 0x394(r28)
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803E9B7C_00001000:
    addi r11, r1, 0x210
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    bl _restgpr_25
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_803EA09C(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    addi r11, r1, 0x320
    stfd f31, 0x320(r1)
    psq_st f31, 0x328(r1), 0, 0
    bl _savegpr_23
    fmr f31, f1
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r23, r8
    mr r30, r9
    addi r3, r1, 0x10
    bl fn_800CB360
    lwz r0, 0x394(r26)
    cmplwi r0, 0x20
    blt lbl_fn_803EA09C_0000108C
    mr r3, r25
    addi r4, r1, 0x10
    bl fn_800CB36C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803EA09C_000016E0
lbl_fn_803EA09C_0000108C:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r23
    bl fn_803EB668
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_803EA09C_000010C8
    mr r3, r25
    addi r4, r1, 0x10
    bl fn_800CB36C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803EA09C_000016E0
lbl_fn_803EA09C_000010C8:
    lbz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EA09C_000011E4
    cmpwi r28, 0x0
    beq lbl_fn_803EA09C_000010F0
    lwz r3, lbl_8087EE90
    mr r4, r28
    bl fn_80049B74
    mr r23, r3
    b lbl_fn_803EA09C_000010F4
lbl_fn_803EA09C_000010F0:
    li r23, 0x0
lbl_fn_803EA09C_000010F4:
    mr r3, r31
    bl fn_800CB6F8
    cmplw r23, r3
    beq lbl_fn_803EA09C_000011E4
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_803EA09C_00001168
    lwz r24, lbl_8087EE90
    mr r3, r31
    bl fn_800CB6F8
    mr r4, r3
    mr r3, r24
    bl fn_80049CDC
    mr r24, r3
    mr r3, r31
    bl fn_800CB6F8
    lis r4, lbl_80751D1C@ha
    mr r7, r3
    addi r4, r4, lbl_80751D1C@l
    mr r5, r23
    mr r6, r28
    mr r8, r24
    addi r3, r1, 0x118
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x118
    bl fn_800697D8
lbl_fn_803EA09C_00001168:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803EA09C_000011B0
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803EA09C_000011B0
    lwz r3, 0x1154(r4)
    addi r0, r31, 0x4
    cmplw r3, r0
    bne lbl_fn_803EA09C_000011B0
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803EA09C_000011B0:
    addi r3, r31, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r3, lbl_807C7030@ha
    stw r0, 0x18(r31)
    addi r3, r3, lbl_807C7030@l
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    stw r0, 0x28(r31)
    stb r0, 0x2c(r31)
    stb r0, 0x2d(r31)
lbl_fn_803EA09C_000011E4:
    lbz r0, 0x2c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803EA09C_00001434
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803EA09C_00001238
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803EA09C_00001238
    lwz r3, 0x1154(r4)
    addi r0, r31, 0x4
    cmplw r3, r0
    bne lbl_fn_803EA09C_00001238
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803EA09C_00001238:
    addi r3, r31, 0x10
    bl fn_80473F88
    li r24, 0x0
    lis r3, lbl_807C7030@ha
    stw r24, 0x18(r31)
    addi r3, r3, lbl_807C7030@l
    mr r4, r28
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    stw r24, 0x28(r31)
    stb r24, 0x2c(r31)
    stb r24, 0x2d(r31)
    lwz r23, lbl_8087EE90
    mr r3, r23
    bl fn_80049B74
    mr r4, r3
    mr r3, r23
    bl fn_80049B2C
    cmpwi r3, 0x0
    beq lbl_fn_803EA09C_000013BC
    cmpwi r29, 0x0
    beq lbl_fn_803EA09C_00001330
    cmpwi r27, 0x0
    beq lbl_fn_803EA09C_00001330
    lwz r3, lbl_8087EE90
    mr r4, r28
    addi r23, r27, 0x528
    bl fn_80049B74
    lwz r5, lbl_8087EFE8
    mr r4, r3
    stw r24, 0x34c8(r5)
    lwz r3, lbl_8087EFE8
    bl fn_800D0AB0
    lwz r4, lbl_8087EFE8
    li r0, 0x1
    cmpwi r3, 0x0
    mr r24, r3
    stw r0, 0x34c8(r4)
    bne lbl_fn_803EA09C_000012E4
    li r24, 0x0
    b lbl_fn_803EA09C_00001320
lbl_fn_803EA09C_000012E4:
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    bl fn_800CFDA0
    stw r3, 0xa8(r24)
    li r4, 0x8
    lwz r3, lbl_8087EFE8
    bl fn_800CFDC8
    stw r3, 0xac(r24)
    mr r3, r24
    li r4, 0x0
    bl fn_800CA7D4
    mr r3, r24
    mr r4, r28
    mr r5, r23
    bl fn_800C97F8
lbl_fn_803EA09C_00001320:
    mr r3, r31
    mr r4, r24
    bl fn_800CB404
    b lbl_fn_803EA09C_00001434
lbl_fn_803EA09C_00001330:
    lwz r3, lbl_8087EE90
    mr r4, r28
    bl fn_80049B74
    lwz r5, lbl_8087EFE8
    li r0, 0x0
    mr r4, r3
    stw r0, 0x34c8(r5)
    lwz r3, lbl_8087EFE8
    bl fn_800D0AB0
    lwz r4, lbl_8087EFE8
    li r0, 0x1
    cmpwi r3, 0x0
    mr r24, r3
    stw r0, 0x34c8(r4)
    bne lbl_fn_803EA09C_00001374
    li r24, 0x0
    b lbl_fn_803EA09C_000013AC
lbl_fn_803EA09C_00001374:
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    bl fn_800CFDA0
    stw r3, 0xa8(r24)
    li r4, 0x8
    lwz r3, lbl_8087EFE8
    bl fn_800CFDC8
    stw r3, 0xac(r24)
    mr r3, r24
    li r4, 0x0
    bl fn_800CA7D4
    mr r3, r24
    mr r4, r28
    bl fn_800C93D4
lbl_fn_803EA09C_000013AC:
    mr r3, r31
    mr r4, r24
    bl fn_800CB404
    b lbl_fn_803EA09C_00001434
lbl_fn_803EA09C_000013BC:
    cmpwi r29, 0x0
    beq lbl_fn_803EA09C_00001404
    cmpwi r27, 0x0
    beq lbl_fn_803EA09C_00001404
    fmr f1, f31
    mr r4, r28
    mr r6, r30
    addi r3, r1, 0xc
    addi r5, r27, 0x528
    li r7, 0x2
    bl fn_800C344C
    mr r3, r31
    addi r4, r1, 0xc
    bl fn_800CB440
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803EA09C_00001434
lbl_fn_803EA09C_00001404:
    fmr f1, f31
    mr r4, r28
    mr r5, r30
    addi r3, r1, 0x8
    li r6, 0x2
    bl fn_800C31F4
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803EA09C_00001434:
    li r0, 0x0
    stb r0, 0x2c(r31)
    lbz r0, 0x2d(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803EA09C_00001494
    lis r4, lbl_80751D1C@ha
    mr r5, r28
    addi r4, r4, lbl_80751D1C@l
    addi r3, r1, 0x18
    addi r4, r4, 0x41
    crclr 6
    bl sprintf
    addi r3, r1, 0x18
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803EA09C_0000148C
    lwz r12, 0x10(r31)
    addi r3, r31, 0x10
    addi r4, r1, 0x18
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_803EA09C_0000148C:
    li r0, 0x1
    stb r0, 0x2d(r31)
lbl_fn_803EA09C_00001494:
    li r4, 0x0
    stb r4, 0x2d(r31)
    lfs f0, lbl_80885F4C
    li r3, -0x1
    li r0, 0x1
    stw r4, 0x218(r1)
    stw r4, 0x23c(r1)
    stw r4, 0x240(r1)
    stw r4, 0x244(r1)
    stw r4, 0x248(r1)
    stw r4, 0x24c(r1)
    stb r4, 0x250(r1)
    stw r4, 0x270(r1)
    stw r4, 0x274(r1)
    stw r4, 0x21c(r1)
    stw r4, 0x220(r1)
    stw r4, 0x224(r1)
    stw r3, 0x228(r1)
    stfs f0, 0x22c(r1)
    stw r0, 0x230(r1)
    stw r4, 0x234(r1)
    stw r4, 0x238(r1)
    b lbl_fn_803EA09C_00001564
    bl fn_800CB5C8
    lwz r3, 0x18(r4)
    cmpwi r3, 0x0
    beq lbl_fn_803EA09C_00001528
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803EA09C_00001528
    lwz r3, 0x1154(r3)
    li r0, 0x4
    cmplw r3, r0
    bne lbl_fn_803EA09C_00001528
    stw r4, 0x1154(r3)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r3)
lbl_fn_803EA09C_00001528:
    li r3, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r4, lbl_807C7030@ha
    stw r0, 0x18(r3)
    addi r4, r4, lbl_807C7030@l
    li r5, 0x1c
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    stw r0, 0x28(r3)
    stb r0, 0x2c(r3)
    stb r0, 0x2d(r3)
    stw r0, 0x23c(r1)
lbl_fn_803EA09C_00001564:
    li r0, 0x1
    stw r0, 0x21c(r1)
    fmr f1, f31
    li r4, 0x0
    stw r31, 0x23c(r1)
    stw r27, 0x220(r1)
    stw r27, 0x18(r31)
    lwz r3, 0x23c(r1)
    bl fn_800CB5B4
    lfs f1, lbl_80885F48
    lwz r3, 0x23c(r1)
    fmr f2, f1
    fmr f3, f1
    bl fn_800CB654
    lwz r3, lbl_8087EE90
    mr r4, r28
    bl fn_80049C3C
    cmpwi r3, 0x0
    beq lbl_fn_803EA09C_000015C4
    lfs f1, lbl_80885F4C
    lwz r3, 0x23c(r1)
    fmr f2, f1
    fmr f3, f1
    bl fn_800CB654
lbl_fn_803EA09C_000015C4:
    lwz r0, 0x394(r26)
    mulli r0, r0, 0xe0
    add r0, r26, r0
    addic. r3, r0, 0x398
    beq lbl_fn_803EA09C_000016BC
    lwz r4, 0x218(r1)
    li r0, 0x10
    stw r4, 0x0(r3)
    addi r5, r3, 0x5c
    addi r4, r1, 0x274
    lwz r6, 0x21c(r1)
    stw r6, 0x4(r3)
    lwz r6, 0x220(r1)
    stw r6, 0x8(r3)
    lwz r6, 0x224(r1)
    stw r6, 0xc(r3)
    lwz r6, 0x228(r1)
    stw r6, 0x10(r3)
    lfs f0, 0x22c(r1)
    stfs f0, 0x14(r3)
    lwz r6, 0x230(r1)
    stw r6, 0x18(r3)
    lwz r6, 0x234(r1)
    stw r6, 0x1c(r3)
    lwz r6, 0x238(r1)
    stw r6, 0x20(r3)
    lwz r6, 0x23c(r1)
    stw r6, 0x24(r3)
    lwz r6, 0x240(r1)
    stw r6, 0x28(r3)
    lwz r6, 0x244(r1)
    stw r6, 0x2c(r3)
    lwz r6, 0x248(r1)
    stw r6, 0x30(r3)
    lwz r6, 0x24c(r1)
    stw r6, 0x34(r3)
    lwz r6, 0x254(r1)
    lwz r7, 0x250(r1)
    stw r7, 0x38(r3)
    stw r6, 0x3c(r3)
    lwz r6, 0x25c(r1)
    lwz r7, 0x258(r1)
    stw r7, 0x40(r3)
    stw r6, 0x44(r3)
    lwz r6, 0x264(r1)
    lwz r7, 0x260(r1)
    stw r7, 0x48(r3)
    stw r6, 0x4c(r3)
    lwz r6, 0x26c(r1)
    lwz r7, 0x268(r1)
    stw r7, 0x50(r3)
    stw r6, 0x54(r3)
    lwz r6, 0x270(r1)
    stw r6, 0x58(r3)
    lwz r6, 0x274(r1)
    stw r6, 0x5c(r3)
    mtctr r0
lbl_fn_803EA09C_000016A8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803EA09C_000016A8
lbl_fn_803EA09C_000016BC:
    lwz r5, 0x394(r26)
    mr r3, r25
    mr r4, r31
    addi r0, r5, 0x1
    stw r0, 0x394(r26)
    bl fn_800CB36C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803EA09C_000016E0:
    addi r11, r1, 0x320
    psq_l f31, 0x328(r1), 0, 0
    lfd f31, 0x320(r1)
    bl _restgpr_23
    lwz r0, 0x334(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_803EA77C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x50
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    bl _savegpr_26
    lwz r0, lbl_8087F430
    fmr f30, f1
    fmr f31, f2
    mr r28, r3
    cmpwi r0, 0x0
    mr r29, r4
    mr r30, r5
    mr r31, r6
    beq lbl_fn_803EA77C_00001758
    mr r3, r0
    bl fn_803761CC
    cmpwi r3, 0x0
    beq lbl_fn_803EA77C_000019D8
lbl_fn_803EA77C_00001758:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803EA77C_00001770
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    beq lbl_fn_803EA77C_000019D8
lbl_fn_803EA77C_00001770:
    lwz r4, lbl_8087F540
    cmpwi r4, 0x0
    beq lbl_fn_803EA77C_0000178C
    lwz r0, 0x70(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803EA77C_0000178C
    b lbl_fn_803EA77C_000019D8
lbl_fn_803EA77C_0000178C:
    cmpwi r3, 0x0
    beq lbl_fn_803EA77C_000017A4
    lwz r3, lbl_8087F430
    lwz r0, 0x5538(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803EA77C_000019D8
lbl_fn_803EA77C_000017A4:
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803EA77C_000017DC
    lwz r3, 0x2640(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803EA77C_000017DC
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EA77C_000017DC
    lfs f0, 0x60(r3)
    fcmpo cr0, f0, f31
    bge lbl_fn_803EA77C_000017DC
    li r0, 0x0
    b lbl_fn_803EA77C_000017E0
lbl_fn_803EA77C_000017DC:
    li r0, 0x1
lbl_fn_803EA77C_000017E0:
    cmpwi r0, 0x0
    beq lbl_fn_803EA77C_000019D8
    lwz r0, 0x110(r28)
    cmplwi r0, 0x10
    bge lbl_fn_803EA77C_000019D8
    addi r26, r28, 0x48
    li r27, 0x0
    b lbl_fn_803EA77C_00001820
lbl_fn_803EA77C_00001800:
    mr r3, r26
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_803EA77C_00001818
    li r0, 0x1
    b lbl_fn_803EA77C_00001830
lbl_fn_803EA77C_00001818:
    addi r26, r26, 0x30
    addi r27, r27, 0x1
lbl_fn_803EA77C_00001820:
    lwz r0, 0x10c(r28)
    cmpw r27, r0
    blt lbl_fn_803EA77C_00001800
    li r0, 0x0
lbl_fn_803EA77C_00001830:
    cmpwi r0, 0x0
    beq lbl_fn_803EA77C_000019D8
    cmpwi r29, 0x0
    bne lbl_fn_803EA77C_000018D0
    lwz r0, lbl_8087F428
    cmpwi r0, 0x0
    beq lbl_fn_803EA77C_000018D0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x4c(r3)
    subic. r26, r3, 0x1
    ble lbl_fn_803EA77C_000018D0
    bl fn_80680CF8
    divw r0, r3, r26
    mullw r0, r0, r26
    subf r4, r0, r3
    lwz r3, lbl_8087F8A0
    addi r4, r4, 0x1
    bl fn_8011F944
    mr r27, r3
    mr r26, r27
lbl_fn_803EA77C_00001880:
    mr r3, r26
    mr r4, r30
    bl fn_80179EBC
    cmpwi r3, 0x0
    beq lbl_fn_803EA77C_000018B0
    lwz r3, 0x7c(r26)
    mr r4, r30
    bl fn_8021FD7C
    cmpwi r3, 0x0
    beq lbl_fn_803EA77C_000018B0
    mr r29, r26
    b lbl_fn_803EA77C_000018D0
lbl_fn_803EA77C_000018B0:
    lwz r26, 0x14ac(r26)
    cmpwi r26, 0x0
    bne lbl_fn_803EA77C_000018C8
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r26, r3
lbl_fn_803EA77C_000018C8:
    cmplw r26, r27
    bne lbl_fn_803EA77C_00001880
lbl_fn_803EA77C_000018D0:
    cmpwi r29, 0x0
    beq lbl_fn_803EA77C_000019D8
    mr r3, r29
    mr r4, r30
    bl fn_80179EBC
    cmpwi r3, 0x0
    bne lbl_fn_803EA77C_000018F0
    b lbl_fn_803EA77C_000019D8
lbl_fn_803EA77C_000018F0:
    lwz r3, 0x7c(r29)
    mr r4, r30
    bl fn_8021FD7C
    cmpwi r3, 0x0
    beq lbl_fn_803EA77C_000019D8
    lwz r4, lbl_8087F0A8
    lwz r0, 0x174(r4)
    cmpwi r0, 0x1
    blt lbl_fn_803EA77C_00001918
    lfs f30, lbl_80885F4C
lbl_fn_803EA77C_00001918:
    subi r4, r30, 0x24
    li r7, 0x0
    cmplwi r4, 0x4
    bgt lbl_fn_803EA77C_0000193C
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0x15
    beq lbl_fn_803EA77C_0000193C
    li r7, 0x1
lbl_fn_803EA77C_0000193C:
    cmplwi r4, 0x4
    li r5, 0x0
    bgt lbl_fn_803EA77C_00001958
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0x15
    bne lbl_fn_803EA77C_0000195C
lbl_fn_803EA77C_00001958:
    li r5, 0x1
lbl_fn_803EA77C_0000195C:
    lwz r0, 0x110(r28)
    li r4, 0x0
    stw r4, 0xc(r1)
    mulli r0, r0, 0x28
    stw r4, 0x2c(r1)
    add r0, r28, r0
    stw r29, 0x8(r1)
    addic. r6, r0, 0x114
    stw r30, 0x10(r1)
    stw r3, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f31, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r7, 0x24(r1)
    stw r31, 0x28(r1)
    beq lbl_fn_803EA77C_000019CC
    stw r29, 0x0(r6)
    frsp f1, f30
    frsp f0, f31
    stw r4, 0x4(r6)
    stw r30, 0x8(r6)
    stw r3, 0xc(r6)
    stfs f1, 0x10(r6)
    stfs f0, 0x14(r6)
    stw r5, 0x18(r6)
    stw r7, 0x1c(r6)
    stw r31, 0x20(r6)
    stw r4, 0x24(r6)
lbl_fn_803EA77C_000019CC:
    lwz r3, 0x110(r28)
    addi r0, r3, 0x1
    stw r0, 0x110(r28)
lbl_fn_803EA77C_000019D8:
    addi r11, r1, 0x50
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
