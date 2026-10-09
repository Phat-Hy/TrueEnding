#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void fn_8004B378(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800DC288(void);
extern void fn_80116BD4(void);
extern void fn_80124BE4(void);
extern void fn_8038EF94(void);
extern void fn_803918EC(void);
extern void fn_803920C8(void);
extern void fn_80392510(void);
extern void fn_803928C0(void);
extern void fn_80392A04(void);
extern void fn_80392FE8(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_8074E010[];
extern u8 lbl_8074E018[];
extern u8 lbl_8074E114[];
extern u8 lbl_8074E210[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_808858E8;
extern u32 lbl_808858EC;
extern u32 lbl_808858F8;
extern u32 lbl_80885920;
extern u32 lbl_80885930;
extern u32 lbl_80885958;
extern u32 lbl_80885980;
extern u32 lbl_8088599C;
extern u32 lbl_808859A0;
extern u32 lbl_808859A4;
extern u32 lbl_808859A8;
extern u32 lbl_808859AC;
extern u32 lbl_808859B0;
extern u32 lbl_808859B4;
extern u32 lbl_808859B8;
extern u32 lbl_808859BC;
extern u32 lbl_808859C0;
extern u32 lbl_808859C4;
extern u32 lbl_808859C8;
extern u32 lbl_808859CC;
extern u32 lbl_808859D0;
extern u32 lbl_808859D4;
extern u32 lbl_808859D8;

/* Function declarations */
void fn_8037E12C(void);
void fn_8037E89C(void);
void fn_8037E964(void);
void fn_8037E9E0(void);
void fn_8037ECF0(void);
void fn_8037EF30(void);
void fn_8037EF48(void);
void fn_8037F640(void);
void fn_8037F664(void);
void fn_8037F688(void);
void fn_8037F690(void);
void fn_8037F6D8(void);
void fn_8037F724(void);
void fn_8037F744(void);
void fn_8037F830(void);

asm void fn_8037E12C(void)
{
    nofralloc
    stwu r1, -0x810(r1)
    mflr r0
    stw r0, 0x814(r1)
    li r0, 0x808
    addi r11, r1, 0x7e0
    stfd f31, 0x800(r1)
    psq_stx f31, r1, r0, 0, 0
    stfd f30, 0x7f0(r1)
    psq_st f30, 0x7f8(r1), 0, 0
    stfd f29, 0x7e0(r1)
    psq_st f29, 0x7e8(r1), 0, 0
    bl _savegpr_22
    lfs f13, 0x51c(r3)
    lis r8, lbl_807772D0@ha
    lfs f12, 0x520(r3)
    mr r23, r4
    lfs f11, 0x524(r3)
    addi r8, r8, lbl_807772D0@l
    lfs f10, 0x528(r3)
    mr r22, r5
    lfs f9, 0x52c(r3)
    li r28, 0x0
    lfs f8, 0x530(r3)
    mr r24, r3
    lfs f7, 0x534(r3)
    mr r25, r6
    lfs f6, 0x538(r3)
    mr r26, r7
    lfs f5, 0x53c(r3)
    li r4, 0x0
    lfs f4, 0x540(r3)
    li r5, 0x400
    lfs f3, 0x544(r3)
    lfs f2, 0x548(r3)
    lfs f1, 0x54c(r3)
    lfs f0, 0x550(r3)
    lwz r0, 0x554(r3)
    addi r3, r1, 0x180
    stfs f13, 0x44(r1)
    stfs f12, 0x48(r1)
    stfs f11, 0x4c(r1)
    stfs f10, 0x50(r1)
    stfs f9, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f7, 0x5c(r1)
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r8, 0x170(r1)
    stw r28, 0x174(r1)
    stw r28, 0x178(r1)
    stw r28, 0x17c(r1)
    stw r28, 0x7a0(r1)
    bl memset
    addi r3, r1, 0x780
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x170(r1)
    mr r4, r23
    mr r5, r22
    addi r3, r1, 0x170
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x170
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x170(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r29, lbl_8074E210@ha
    lfs f29, lbl_808858E8
    lfs f30, lbl_80885920
    addi r30, r29, lbl_8074E210@l
    lfs f31, lbl_80885980
    li r31, 0x1e
    b lbl_fn_8037E12C_00000660
lbl_fn_8037E12C_0000014C:
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_80684600
    cmpw r25, r3
    bne lbl_fn_8037E12C_00000660
    addi r3, r1, 0x170
    bl fn_8005B3CC
    mr r23, r3
    addi r4, r29, lbl_8074E210@l
    li r22, -0x1
    li r27, -0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_0000018C
    li r22, -0x1
    b lbl_fn_8037E12C_000001A4
lbl_fn_8037E12C_0000018C:
    mr r3, r23
    addi r4, r30, 0x4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_000001A4
    li r22, 0x1
lbl_fn_8037E12C_000001A4:
    cmpwi r22, 0x0
    blt lbl_fn_8037E12C_00000660
    addi r3, r1, 0x170
    bl fn_8005B3CC
    mr r23, r3
    addi r4, r30, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_000001D0
    li r27, 0x0
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_000001D0:
    mr r3, r23
    addi r4, r30, 0x12
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_000001EC
    li r27, 0x2
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_000001EC:
    mr r3, r23
    addi r4, r30, 0x17
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_00000208
    li r27, 0x3
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_00000208:
    mr r3, r23
    addi r4, r30, 0x1d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_00000224
    li r27, 0x4
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_00000224:
    mr r3, r23
    addi r4, r30, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_00000240
    li r27, 0x1
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_00000240:
    mr r3, r23
    addi r4, r30, 0x2c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_0000025C
    li r27, 0x5
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_0000025C:
    mr r3, r23
    addi r4, r30, 0x32
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_00000278
    li r27, 0x6
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_00000278:
    mr r3, r23
    addi r4, r30, 0x3b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_00000294
    li r27, 0x8
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_00000294:
    mr r3, r23
    addi r4, r30, 0x41
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_000002B0
    li r27, 0x9
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_000002B0:
    mr r3, r23
    addi r4, r30, 0x4b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_000002CC
    li r27, 0xa
    b lbl_fn_8037E12C_000002E4
lbl_fn_8037E12C_000002CC:
    mr r3, r23
    addi r4, r30, 0x4f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_000002E4
    li r27, 0xb
lbl_fn_8037E12C_000002E4:
    cmpwi r27, 0x0
    blt lbl_fn_8037E12C_00000660
    stfs f29, 0x3c(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x8(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f30, f1
    addi r3, r1, 0x170
    stfs f0, 0xc(r1)
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f30, f1
    addi r3, r1, 0x170
    stfs f0, 0x10(r1)
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x18(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1c(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x20(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x24(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x28(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x2c(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x30(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x34(r1)
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    subfic r3, r27, 0x6
    subi r0, r27, 0x6
    or r0, r3, r0
    stfs f1, 0x38(r1)
    srwi r0, r0, 31
    mr r3, r24
    stw r0, 0x40(r1)
    mr r5, r27
    addi r4, r1, 0x8
    bl fn_8038EF94
    cmpwi r27, 0x0
    bne lbl_fn_8037E12C_00000624
    lwz r3, lbl_8087F0A8
    addi r5, r1, 0x7c
    addi r4, r3, 0x240
    mtctr r31
lbl_fn_8037E12C_00000404:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8037E12C_00000404
    addi r3, r1, 0x170
    bl fn_8005B3CC
    bl fn_800DC288
    fadds f0, f31, f1
    addi r3, r1, 0x170
    stfs f0, 0xa0(r1)
    bl fn_8005B3CC
    bl fn_800DC288
    fadds f0, f31, f1
    lwz r3, lbl_8087F0A8
    lwz r0, 0x80(r1)
    stfs f0, 0xa4(r1)
    stw r0, 0x244(r3)
    lfs f0, 0x84(r1)
    stfs f0, 0x248(r3)
    lfs f0, 0x88(r1)
    stfs f0, 0x24c(r3)
    lwz r0, 0x8c(r1)
    stw r0, 0x250(r3)
    lwz r0, 0x90(r1)
    stw r0, 0x254(r3)
    lfs f0, 0x94(r1)
    stfs f0, 0x258(r3)
    lwz r0, 0x98(r1)
    stw r0, 0x25c(r3)
    lwz r0, 0x9c(r1)
    stw r0, 0x260(r3)
    lfs f0, 0xa0(r1)
    stfs f0, 0x264(r3)
    lfs f0, 0xa4(r1)
    stfs f0, 0x268(r3)
    lfs f0, 0xa8(r1)
    stfs f0, 0x26c(r3)
    lwz r0, 0xac(r1)
    stw r0, 0x270(r3)
    lwz r0, 0xb0(r1)
    stw r0, 0x274(r3)
    lwz r0, 0xb4(r1)
    stw r0, 0x278(r3)
    lwz r0, 0xb8(r1)
    stw r0, 0x27c(r3)
    lwz r0, 0xbc(r1)
    stw r0, 0x280(r3)
    lwz r0, 0xc0(r1)
    stw r0, 0x284(r3)
    lwz r0, 0xc4(r1)
    stw r0, 0x288(r3)
    lwz r0, 0xc8(r1)
    stw r0, 0x28c(r3)
    lwz r0, 0xcc(r1)
    stw r0, 0x290(r3)
    lwz r0, 0xd0(r1)
    stw r0, 0x294(r3)
    lwz r0, 0xd4(r1)
    stw r0, 0x298(r3)
    lwz r0, 0xd8(r1)
    stw r0, 0x29c(r3)
    lwz r0, 0xdc(r1)
    stw r0, 0x2a0(r3)
    lfs f0, 0xe0(r1)
    stfs f0, 0x2a4(r3)
    lfs f0, 0xe4(r1)
    stfs f0, 0x2a8(r3)
    lfs f0, 0xe8(r1)
    stfs f0, 0x2ac(r3)
    lwz r0, 0xec(r1)
    stw r0, 0x2b0(r3)
    lfs f0, 0xf0(r1)
    stfs f0, 0x2b4(r3)
    lfs f0, 0xf4(r1)
    stfs f0, 0x2b8(r3)
    lfs f0, 0xf8(r1)
    stfs f0, 0x2bc(r3)
    lwz r0, 0xfc(r1)
    stw r0, 0x2c0(r3)
    lwz r0, 0x100(r1)
    stw r0, 0x2c4(r3)
    lfs f0, 0x104(r1)
    stfs f0, 0x2c8(r3)
    lwz r0, 0x108(r1)
    stw r0, 0x2cc(r3)
    lwz r0, 0x10c(r1)
    stw r0, 0x2d0(r3)
    lwz r0, 0x114(r1)
    lwz r4, 0x110(r1)
    stw r4, 0x2d4(r3)
    stw r0, 0x2d8(r3)
    lwz r0, 0x11c(r1)
    lwz r4, 0x118(r1)
    stw r4, 0x2dc(r3)
    stw r0, 0x2e0(r3)
    lwz r0, 0x124(r1)
    lwz r4, 0x120(r1)
    stw r4, 0x2e4(r3)
    stw r0, 0x2e8(r3)
    lwz r0, 0x12c(r1)
    lwz r4, 0x128(r1)
    stw r4, 0x2ec(r3)
    stw r0, 0x2f0(r3)
    lwz r0, 0x134(r1)
    lwz r4, 0x130(r1)
    stw r4, 0x2f4(r3)
    stw r0, 0x2f8(r3)
    lwz r0, 0x138(r1)
    stw r0, 0x2fc(r3)
    lwz r0, 0x13c(r1)
    stw r0, 0x300(r3)
    lwz r0, 0x140(r1)
    stw r0, 0x304(r3)
    lwz r0, 0x144(r1)
    stw r0, 0x308(r3)
    lfs f0, 0x148(r1)
    stfs f0, 0x30c(r3)
    lfs f0, 0x14c(r1)
    stfs f0, 0x310(r3)
    lwz r0, 0x150(r1)
    stw r0, 0x314(r3)
    lwz r0, 0x154(r1)
    stw r0, 0x318(r3)
    lfs f0, 0x158(r1)
    stfs f0, 0x31c(r3)
    lwz r0, 0x15c(r1)
    stw r0, 0x320(r3)
    lfs f0, 0x160(r1)
    stfs f0, 0x324(r3)
    lfs f0, 0x164(r1)
    stfs f0, 0x328(r3)
    lwz r0, 0x168(r1)
    stw r0, 0x32c(r3)
    lwz r0, 0x16c(r1)
    stw r0, 0x330(r3)
lbl_fn_8037E12C_00000624:
    cmpwi r27, 0xb
    bne lbl_fn_8037E12C_00000650
    lwz r3, lbl_8087F430
    li r26, 0x1e
    cmpwi r3, 0x0
    beq lbl_fn_8037E12C_0000064C
    lwz r0, 0x54ec(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8037E12C_0000064C
    li r26, 0x0
lbl_fn_8037E12C_0000064C:
    stw r28, 0x424(r24)
lbl_fn_8037E12C_00000650:
    lwz r0, 0x7fc(r24)
    cmpw r0, r27
    beq lbl_fn_8037E12C_00000660
    stw r28, 0x424(r24)
lbl_fn_8037E12C_00000660:
    addi r3, r1, 0x170
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8037E12C_0000014C
    cmpwi r26, 0x0
    ble lbl_fn_8037E12C_0000073C
    lwz r0, 0x424(r24)
    cmpwi r0, 0x1
    beq lbl_fn_8037E12C_0000073C
    cmpwi r0, 0x4
    beq lbl_fn_8037E12C_0000073C
    xoris r3, r26, 0x8000
    lis r0, 0x4330
    stw r3, 0x7ac(r1)
    lis r4, lbl_8074E008@ha
    lfd f2, lbl_8074E008@l(r4)
    li r3, 0x1
    stw r0, 0x7a8(r1)
    lfs f1, lbl_808858F8
    lfd f0, 0x7a8(r1)
    lfs f30, 0x44(r1)
    fsubs f0, f0, f2
    lfs f29, 0x48(r1)
    lfs f13, 0x4c(r1)
    lfs f12, 0x50(r1)
    fdivs f0, f1, f0
    lfs f11, 0x54(r1)
    lfs f10, 0x58(r1)
    lfs f9, 0x5c(r1)
    lfs f8, 0x60(r1)
    lfs f7, 0x64(r1)
    lfs f6, 0x68(r1)
    lfs f5, 0x6c(r1)
    lfs f4, 0x70(r1)
    lfs f3, 0x74(r1)
    lfs f2, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x424(r24)
    stfs f30, 0x430(r24)
    stfs f29, 0x434(r24)
    stfs f13, 0x438(r24)
    stfs f12, 0x43c(r24)
    stfs f11, 0x440(r24)
    stfs f10, 0x444(r24)
    stfs f9, 0x448(r24)
    stfs f8, 0x44c(r24)
    stfs f7, 0x450(r24)
    stfs f6, 0x454(r24)
    stfs f5, 0x458(r24)
    stfs f4, 0x45c(r24)
    stfs f3, 0x460(r24)
    stfs f2, 0x464(r24)
    stw r0, 0x468(r24)
    stfs f0, 0x42c(r24)
    stfs f1, 0x428(r24)
lbl_fn_8037E12C_0000073C:
    li r0, 0x808
    addi r11, r1, 0x7e0
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x800(r1)
    psq_l f30, 0x7f8(r1), 0, 0
    lfd f30, 0x7f0(r1)
    psq_l f29, 0x7e8(r1), 0, 0
    lfd f29, 0x7e0(r1)
    bl _restgpr_22
    lwz r0, 0x814(r1)
    mtlr r0
    addi r1, r1, 0x810
    blr
}

asm void fn_8037E89C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    lwz r0, 0x0(r3)
    cmpw r0, r4
    beq lbl_fn_8037E89C_00000820
    cmpwi r0, 0x4
    beq lbl_fn_8037E89C_00000820
    lfs f30, 0x0(r5)
    lfs f31, 0x4(r5)
    lfs f13, 0x8(r5)
    lfs f12, 0xc(r5)
    lfs f11, 0x10(r5)
    lfs f10, 0x14(r5)
    lfs f9, 0x18(r5)
    lfs f8, 0x1c(r5)
    lfs f7, 0x20(r5)
    lfs f6, 0x24(r5)
    lfs f5, 0x28(r5)
    lfs f4, 0x2c(r5)
    lfs f3, 0x30(r5)
    lfs f2, 0x34(r5)
    lwz r0, 0x38(r5)
    lfs f0, lbl_808858F8
    stw r4, 0x0(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
    stfs f13, 0x14(r3)
    stfs f12, 0x18(r3)
    stfs f11, 0x1c(r3)
    stfs f10, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f8, 0x28(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f2, 0x40(r3)
    stw r0, 0x44(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0x4(r3)
lbl_fn_8037E89C_00000820:
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_8037E964(void)
{
    nofralloc
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x0(r3)
    stfs f12, 0x4(r3)
    stfs f11, 0x8(r3)
    stfs f10, 0xc(r3)
    stfs f9, 0x10(r3)
    stfs f8, 0x14(r3)
    stfs f7, 0x18(r3)
    stfs f6, 0x1c(r3)
    stfs f5, 0x20(r3)
    stfs f4, 0x24(r3)
    stfs f3, 0x28(r3)
    stfs f2, 0x2c(r3)
    stfs f1, 0x30(r3)
    stfs f0, 0x34(r3)
    stw r0, 0x38(r3)
    blr
}

asm void fn_8037E9E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8074E210@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_8074E210@l
    addi r4, r4, 0x57
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x7ec(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8037E9E0_00000908
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8037E9E0_00000908
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x7ec(r29)
    mr r30, r3
    b lbl_fn_8037E9E0_0000090C
lbl_fn_8037E9E0_00000908:
    li r30, 0x0
lbl_fn_8037E9E0_0000090C:
    lis r31, lbl_8074E210@ha
    mr r3, r29
    addi r31, r31, lbl_8074E210@l
    mr r5, r30
    addi r4, r31, 0x62
    addi r6, r29, 0x51c
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0x6a
    addi r6, r29, 0x594
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0x6f
    addi r6, r29, 0x5d0
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0x75
    addi r6, r29, 0x60c
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0x7c
    addi r6, r29, 0x558
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0x84
    addi r6, r29, 0x648
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0x8a
    addi r6, r29, 0x684
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0x93
    addi r6, r29, 0x7b0
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0x9a
    addi r6, r29, 0x6c0
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0xa0
    addi r6, r29, 0x6fc
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0xaa
    addi r6, r29, 0x738
    bl fn_8037ECF0
    mr r3, r29
    mr r5, r30
    addi r4, r31, 0xae
    addi r6, r29, 0x774
    bl fn_8037ECF0
    mr r3, r30
    addi r4, r31, 0xb6
    addi r5, r29, 0x7f0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_8088599C
    addi r4, r31, 0xc4
    lfs f3, lbl_808858F8
    addi r5, r29, 0xa04
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    mr r3, r30
    addi r4, r31, 0xd4
    addi r5, r29, 0xa08
    li r6, 0x0
    li r7, 0x12c
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808859A0
    addi r4, r31, 0xe4
    lfs f3, lbl_80885958
    addi r5, r29, 0x8d8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808859A0
    addi r4, r31, 0xf8
    lfs f3, lbl_80885958
    addi r5, r29, 0x8dc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x10d
    addi r5, r29, 0x9f4
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x11b
    addi r5, r29, 0x9f0
    li r6, 0x1
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808858F8
    addi r4, r31, 0x127
    lfs f3, lbl_808859A4
    addi r5, r29, 0x9ec
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x133
    bl fn_8008937C
    lfs f1, lbl_808859A8
    mr r30, r3
    lfs f2, lbl_808859AC
    addi r4, r31, 0x13e
    lfs f3, lbl_808858F8
    addi r5, r29, 0x4fc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808859A8
    mr r3, r30
    lfs f2, lbl_808859AC
    addi r4, r31, 0x147
    lfs f3, lbl_808858F8
    addi r5, r29, 0x508
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808859A8
    mr r3, r30
    lfs f2, lbl_808859AC
    addi r4, r31, 0x14e
    lfs f3, lbl_808858F8
    addi r5, r29, 0x514
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    mr r3, r30
    addi r4, r31, 0x15a
    addi r5, r29, 0x518
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037ECF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r3, r5
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r6
    bl fn_8008937C
    lis r31, lbl_8074E210@ha
    lfs f1, lbl_808858F8
    addi r31, r31, lbl_8074E210@l
    lfs f2, lbl_808859AC
    lfs f3, lbl_80885930
    mr r30, r3
    mr r5, r29
    addi r4, r31, 0x167
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808859B0
    addi r4, r31, 0x14e
    lfs f3, lbl_80885930
    addi r5, r29, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_808859B4
    mr r3, r30
    lfs f2, lbl_808859B0
    addi r4, r31, 0x16e
    lfs f3, lbl_80885930
    addi r5, r29, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_808859B8
    mr r3, r30
    lfs f2, lbl_808859BC
    addi r4, r31, 0x174
    lfs f3, lbl_808858F8
    addi r5, r29, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808859B8
    mr r3, r30
    lfs f2, lbl_808859BC
    addi r4, r31, 0x17c
    lfs f3, lbl_808858F8
    addi r5, r29, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808859B8
    mr r3, r30
    lfs f2, lbl_808859BC
    addi r4, r31, 0x184
    lfs f3, lbl_808858F8
    addi r5, r29, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808859B8
    mr r3, r30
    lfs f2, lbl_808859BC
    addi r4, r31, 0x18c
    lfs f3, lbl_808858F8
    addi r5, r29, 0x18
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808858F8
    addi r4, r31, 0x199
    lfs f3, lbl_80885958
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808858F8
    addi r4, r31, 0x1a3
    lfs f3, lbl_80885958
    addi r5, r29, 0x20
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808858F8
    addi r4, r31, 0x1ae
    lfs f3, lbl_80885958
    addi r5, r29, 0x24
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808858F8
    addi r4, r31, 0x1b8
    lfs f3, lbl_80885958
    addi r5, r29, 0x28
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808858F8
    addi r4, r31, 0x1c2
    lfs f3, lbl_808859A4
    addi r5, r29, 0x2c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808858E8
    mr r3, r30
    lfs f2, lbl_808858F8
    addi r4, r31, 0x1d0
    lfs f3, lbl_80885958
    addi r5, r29, 0x30
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808859C0
    mr r3, r30
    lfs f2, lbl_8088599C
    addi r4, r31, 0x1e0
    lfs f3, lbl_808858F8
    addi r5, r29, 0x34
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037EF30(void)
{
    nofralloc
    lwz r7, lbl_8087F8A0
    mr r0, r4
    mr r6, r5
    lwz r4, 0x48(r7)
    mr r5, r0
    b fn_8037EF48
}

asm void fn_8037EF48(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    stw r0, 0x314(r1)
    addi r11, r1, 0x2b0
    stfd f31, 0x300(r1)
    psq_st f31, 0x308(r1), 0, 0
    stfd f30, 0x2f0(r1)
    psq_st f30, 0x2f8(r1), 0, 0
    stfd f29, 0x2e0(r1)
    psq_st f29, 0x2e8(r1), 0, 0
    stfd f28, 0x2d0(r1)
    psq_st f28, 0x2d8(r1), 0, 0
    stfd f27, 0x2c0(r1)
    psq_st f27, 0x2c8(r1), 0, 0
    stfd f26, 0x2b0(r1)
    psq_st f26, 0x2b8(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x7fc(r3)
    mr r30, r3
    mr r31, r4
    mr r27, r5
    cmpwi r0, 0x0
    mr r28, r6
    beq lbl_fn_8037EF48_00000E84
    cmpwi r0, 0x8
    bne lbl_fn_8037EF48_000014CC
lbl_fn_8037EF48_00000E84:
    frsp f7, f1
    lfs f0, lbl_808858E8
    li r0, 0x1
    stw r0, 0x7f4(r3)
    fcmpo cr0, f7, f0
    stfs f1, 0xca8(r3)
    bge lbl_fn_8037EF48_00000EAC
    lwz r5, lbl_8087F9C0
    lfs f0, 0x44(r5)
    stfs f0, 0xca8(r3)
lbl_fn_8037EF48_00000EAC:
    lfs f0, 0x538(r4)
    stfs f0, 0x7f8(r3)
    lwz r0, 0x12a4(r4)
    srwi. r0, r0, 31
    bne lbl_fn_8037EF48_00000ECC
    lwz r0, 0x2dc(r4)
    cmpwi r0, 0x55
    bne lbl_fn_8037EF48_00000EDC
lbl_fn_8037EF48_00000ECC:
    lfs f7, 0x7f8(r3)
    lfs f0, lbl_808858EC
    fadds f0, f7, f0
    stfs f0, 0x7f8(r3)
lbl_fn_8037EF48_00000EDC:
    lwz r5, 0xfc4(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8037EF48_00000EEC
    b lbl_fn_8037EF48_00000EF0
lbl_fn_8037EF48_00000EEC:
    lwz r5, 0xfc0(r4)
lbl_fn_8037EF48_00000EF0:
    cmpwi r5, 0x0
    beq lbl_fn_8037EF48_000010E8
    lfs f7, 0x530(r5)
    addi r3, r1, 0x74
    lfs f0, 0x530(r4)
    lfs f9, 0x52c(r5)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r4)
    lfs f7, 0x528(r5)
    lfs f0, 0x528(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x78(r1)
    stfs f0, 0x74(r1)
    stfs f10, 0x7c(r1)
    bl fn_805F9920
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_8037EF48_000010E8
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x7c(r1)
    addi r29, r1, 0x74
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037EF48_00000F88
    lfs f7, 0x74(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037EF48_00000F7C
    lfs f0, lbl_808859CC
    b lbl_fn_8037EF48_00000F80
lbl_fn_8037EF48_00000F7C:
    lfs f0, lbl_808859D0
lbl_fn_8037EF48_00000F80:
    stfs f0, 0x18(r1)
    b lbl_fn_8037EF48_00000F98
lbl_fn_8037EF48_00000F88:
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x18(r1)
lbl_fn_8037EF48_00000F98:
    lfs f0, 0x18(r1)
    addi r3, r1, 0x1e0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x20
    lfs f8, 0x1e8(r1)
    mr r5, r4
    lfs f9, 0x1e4(r1)
    addi r3, r1, 0x1a0
    lfs f10, 0x1e0(r1)
    lfs f11, 0x1f8(r1)
    lfs f12, 0x1f4(r1)
    lfs f13, 0x1f0(r1)
    lfs f31, 0x208(r1)
    lfs f30, 0x204(r1)
    lfs f29, 0x200(r1)
    lfs f28, 0x20c(r1)
    lfs f27, 0x1fc(r1)
    lfs f26, 0x1ec(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x7c(r1)
    stfs f7, 0x1d0(r1)
    stfs f7, 0x1d4(r1)
    stfs f7, 0x1d8(r1)
    stfs f0, 0x1dc(r1)
    stfs f10, 0x50(r1)
    stfs f9, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f10, 0x1a0(r1)
    stfs f9, 0x1a4(r1)
    stfs f8, 0x1a8(r1)
    stfs f13, 0x44(r1)
    stfs f12, 0x48(r1)
    stfs f11, 0x4c(r1)
    stfs f13, 0x1b0(r1)
    stfs f12, 0x1b4(r1)
    stfs f11, 0x1b8(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f31, 0x40(r1)
    stfs f29, 0x1c0(r1)
    stfs f30, 0x1c4(r1)
    stfs f31, 0x1c8(r1)
    stfs f26, 0x2c(r1)
    stfs f27, 0x30(r1)
    stfs f28, 0x34(r1)
    stfs f26, 0x1ac(r1)
    stfs f27, 0x1bc(r1)
    stfs f28, 0x1cc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F9750
    lfs f2, 0x28(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037EF48_000010B4
    lfs f7, 0x24(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037EF48_000010A4
    lfs f0, lbl_808859CC
    b lbl_fn_8037EF48_000010A8
lbl_fn_8037EF48_000010A4:
    lfs f0, lbl_808859D0
lbl_fn_8037EF48_000010A8:
    fneg f0, f0
    stfs f0, 0x14(r1)
    b lbl_fn_8037EF48_000010C8
lbl_fn_8037EF48_000010B4:
    lfs f1, 0x24(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x14(r1)
lbl_fn_8037EF48_000010C8:
    addi r3, r1, 0x14
    lfs f2, lbl_808858E8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x7c(r1)
    lfs f0, 0x78(r1)
    stfs f2, 0x1c(r1)
    stfs f0, 0x7f8(r30)
lbl_fn_8037EF48_000010E8:
    lis r3, lbl_8074E010@ha
    lfs f1, 0x7f8(r30)
    lfd f2, lbl_8074E010@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037EF48_00001110
    lfs f0, lbl_808859D4
    fsubs f7, f7, f0
lbl_fn_8037EF48_00001110:
    lfs f0, lbl_808859D8
    fcmpo cr0, f7, f0
    bge lbl_fn_8037EF48_00001124
    lfs f0, lbl_808859D4
    fadds f7, f7, f0
lbl_fn_8037EF48_00001124:
    cmpwi r28, 0x0
    stfs f7, 0x7f8(r30)
    beq lbl_fn_8037EF48_00001140
    lfs f0, lbl_808858E8
    stfs f0, 0xa0c(r30)
    stfs f0, 0xa10(r30)
    stfs f0, 0xa14(r30)
lbl_fn_8037EF48_00001140:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x290(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8037EF48_00001160
    cmpwi r28, 0x0
    bne lbl_fn_8037EF48_00001160
    li r0, 0x0
    stw r0, 0x7f4(r30)
lbl_fn_8037EF48_00001160:
    cmpwi r27, 0x0
    beq lbl_fn_8037EF48_000014C4
    psq_l f1, 0x8(r30), 0, 0
    addi r3, r1, 0x68
    lfs f2, 0x10(r30)
    addi r4, r1, 0x5c
    stfs f2, 0x70(r1)
    addi r5, r30, 0x868
    lfs f7, lbl_808858EC
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x14(r30), 0, 0
    lfs f2, 0x1c(r30)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f8, 0x60(r1)
    lfs f0, 0x52c(r30)
    fadds f0, f8, f0
    stfs f0, 0x60(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x870(r30)
    lfs f0, 0x538(r31)
    fadds f1, f7, f0
    bl fn_8068A850
    frsp f9, f1
    lfs f8, 0x528(r30)
    lfs f0, 0x5c(r1)
    lfs f7, lbl_808858EC
    fmadds f0, f8, f9, f0
    stfs f0, 0x5c(r1)
    lfs f0, 0x538(r31)
    fadds f1, f7, f0
    bl fn_8068AD58
    lfs f0, 0x528(r30)
    frsp f8, f1
    lfs f10, lbl_808858E8
    addi r29, r1, 0x210
    fneg f7, f0
    lfs f0, 0x64(r1)
    lfs f9, lbl_808858F8
    stfs f10, 0x68(r1)
    fcmpu cr0, f10, f10
    fmadds f0, f7, f8, f0
    stfs f10, 0x6c(r1)
    lfs f8, lbl_808858EC
    stfs f0, 0x64(r1)
    stfs f9, 0x70(r1)
    lfs f7, 0x538(r31)
    lfs f0, 0x524(r30)
    fadds f7, f8, f7
    stfs f10, 0x10(r1)
    fneg f0, f0
    stfs f7, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f10, 0x23c(r1)
    stfs f10, 0x234(r1)
    stfs f10, 0x230(r1)
    stfs f10, 0x22c(r1)
    stfs f10, 0x228(r1)
    stfs f10, 0x220(r1)
    stfs f10, 0x21c(r1)
    stfs f10, 0x218(r1)
    stfs f10, 0x214(r1)
    stfs f9, 0x238(r1)
    stfs f9, 0x224(r1)
    stfs f9, 0x210(r1)
    beq lbl_fn_8037EF48_000012D0
    fmr f1, f10
    addi r3, r1, 0x140
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
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
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8037EF48_000012D0:
    lfs f0, lbl_808858E8
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8037EF48_00001330
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
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
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8037EF48_00001330:
    lfs f0, lbl_808858E8
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8037EF48_00001390
    addi r3, r1, 0x80
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
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
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8037EF48_00001390:
    addi r4, r1, 0x68
    addi r3, r1, 0x210
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0x51c(r30)
    li r0, 0x0
    lfs f8, 0x68(r1)
    lis r7, 0x8000
    lfs f7, 0x6c(r1)
    addi r4, r1, 0x240
    fmuls f11, f8, f9
    lfs f8, 0x5c(r1)
    fmuls f10, f7, f9
    lfs f0, 0x70(r1)
    lfs f7, 0x60(r1)
    addi r5, r1, 0x5c
    fmuls f9, f0, f9
    lfs f0, 0x64(r1)
    fadds f8, f11, f8
    stw r0, 0x274(r1)
    fadds f7, f10, f7
    lwz r3, lbl_8087EE98
    fadds f0, f9, f0
    stfs f8, 0x68(r1)
    addi r6, r1, 0x68
    addi r7, r7, 0x8
    stfs f7, 0x6c(r1)
    li r8, 0x0
    stfs f0, 0x70(r1)
    li r9, 0x0
    stw r0, 0x278(r1)
    stw r0, 0x27c(r1)
    stw r0, 0x280(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8037EF48_00001438
    addi r4, r1, 0x250
    lfs f2, 0x258(r1)
    addi r3, r1, 0x68
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_8037EF48_00001438:
    addi r3, r1, 0x68
    lfs f2, 0x70(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x5c
    psq_st f1, 0x8(r30), 0, 0
    mr r3, r30
    lfs f0, 0x520(r30)
    stfs f2, 0x10(r30)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x64(r1)
    stfs f2, 0x1c(r30)
    psq_st f1, 0x14(r30), 0, 0
    stfs f0, 0x50(r30)
    bl fn_8004B378
    mr r4, r30
    addi r3, r30, 0x1f4
    bl fn_80392A04
    mr r3, r30
    bl fn_80392510
    mr r3, r30
    bl fn_80392FE8
    mr r3, r30
    bl fn_803918EC
    mr r3, r30
    bl fn_803920C8
    mr r3, r30
    bl fn_803928C0
    addi r3, r30, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r30, 0x1f4
    bl fn_80116BD4
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_80124BE4
lbl_fn_8037EF48_000014C4:
    li r0, 0x0
    stw r0, 0x880(r30)
lbl_fn_8037EF48_000014CC:
    addi r11, r1, 0x2b0
    psq_l f31, 0x308(r1), 0, 0
    lfd f31, 0x300(r1)
    psq_l f30, 0x2f8(r1), 0, 0
    lfd f30, 0x2f0(r1)
    psq_l f29, 0x2e8(r1), 0, 0
    lfd f29, 0x2e0(r1)
    psq_l f28, 0x2d8(r1), 0, 0
    lfd f28, 0x2d0(r1)
    psq_l f27, 0x2c8(r1), 0, 0
    lfd f27, 0x2c0(r1)
    psq_l f26, 0x2b8(r1), 0, 0
    lfd f26, 0x2b0(r1)
    bl _restgpr_27
    lwz r0, 0x314(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}

asm void fn_8037F640(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8068A850
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037F664(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8068AD58
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037F688(void)
{
    nofralloc
    stfs f1, 0x50(r3)
    blr
}

asm void fn_8037F690(void)
{
    nofralloc
    lfs f2, 0x8(r4)
    addi r5, r3, 0x840
    psq_l f1, 0x0(r4), 0, 0
    addi r6, r3, 0x84c
    li r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    li r4, 0x1
    stfs f2, 0x848(r3)
    lfs f2, 0x1c(r3)
    lfs f0, 0x50(r3)
    stw r4, 0x838(r3)
    stw r0, 0x83c(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x854(r3)
    stfs f0, 0x85c(r3)
    stw r0, 0x860(r3)
    blr
}

asm void fn_8037F6D8(void)
{
    nofralloc
    lfs f2, 0x8(r4)
    addi r5, r3, 0x840
    psq_l f1, 0x0(r4), 0, 0
    addi r6, r3, 0x84c
    li r4, 0x1
    li r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x848(r3)
    lfs f2, 0x1c(r3)
    lfs f0, 0x50(r3)
    stw r4, 0x858(r3)
    stw r4, 0x838(r3)
    stw r0, 0x83c(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x854(r3)
    stfs f0, 0x85c(r3)
    stw r0, 0x860(r3)
    blr
}

asm void fn_8037F724(void)
{
    nofralloc
    lfs f2, 0x8(r4)
    addi r5, r3, 0x840
    psq_l f1, 0x0(r4), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x848(r3)
    stw r0, 0x860(r3)
    blr
}

asm void fn_8037F744(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F8A0
    lwz r5, lbl_8087EFA8
    lwz r4, 0x48(r4)
    lfs f0, 0x1c0(r5)
    stfs f0, 0xc8(r3)
    lwz r6, 0x7fc(r3)
    lwz r5, lbl_8087EFA8
    lwz r0, 0x800(r3)
    lfs f0, 0x1c4(r5)
    cmpw r0, r6
    stfs f0, 0xcc(r3)
    beq lbl_fn_8037F744_00001678
    mulli r0, r6, 0xc
    lis r5, lbl_8074E018@ha
    addi r5, r5, lbl_8074E018@l
    add r12, r5, r0
    bl fn_80695B00
    nop
    b lbl_fn_8037F744_00001690
lbl_fn_8037F744_00001678:
    mulli r0, r6, 0xc
    lis r5, lbl_8074E114@ha
    addi r5, r5, lbl_8074E114@l
    add r12, r5, r0
    bl fn_80695B00
    nop
lbl_fn_8037F744_00001690:
    lwz r3, 0x900(r31)
    lwz r0, 0x904(r31)
    cmpw r3, r0
    bge lbl_fn_8037F744_000016A8
    addi r0, r3, 0x1
    stw r0, 0x900(r31)
lbl_fn_8037F744_000016A8:
    lbz r0, 0x910(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8037F744_000016D4
    lwz r3, 0x914(r31)
    lwz r4, 0x918(r31)
    addi r0, r3, 0x1
    cmpw r0, r4
    bge lbl_fn_8037F744_000016CC
    mr r4, r0
lbl_fn_8037F744_000016CC:
    stw r4, 0x914(r31)
    b lbl_fn_8037F744_000016F0
lbl_fn_8037F744_000016D4:
    lwz r3, 0x914(r31)
    subi r3, r3, 0x2
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    stw r0, 0x914(r31)
lbl_fn_8037F744_000016F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037F830(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    stfd f28, 0x20(r1)
    psq_st f28, 0x28(r1), 0, 0
    stfd f27, 0x10(r1)
    psq_st f27, 0x18(r1), 0, 0
    lfs f2, 0x0(r5)
    lfs f4, 0x0(r4)
    lfs f0, 0x4(r5)
    lfs f6, 0x4(r4)
    fsubs f3, f2, f4
    lfs f2, 0x8(r5)
    fsubs f5, f0, f6
    lfs f8, 0x8(r4)
    fmadds f0, f1, f3, f4
    lfs f3, 0xc(r5)
    fsubs f4, f2, f8
    lfs f7, 0xc(r4)
    fmadds f2, f1, f5, f6
    lfs f5, 0x10(r5)
    fsubs f6, f3, f7
    lfs f9, 0x10(r4)
    fmadds f3, f1, f4, f8
    lfs f4, 0x14(r5)
    fsubs f8, f5, f9
    lfs f13, 0x14(r4)
    lfs f5, 0x18(r5)
    fsubs f12, f4, f13
    lfs f11, 0x18(r4)
    fmadds f4, f1, f6, f7
    fsubs f7, f5, f11
    lfs f6, 0x1c(r5)
    fmadds f31, f1, f8, f9
    fmadds f13, f1, f12, f13
    lfs f10, 0x1c(r4)
    fmadds f30, f1, f7, f11
    fsubs f9, f6, f10
    lfs f5, 0x20(r5)
    lfs f8, 0x20(r4)
    lfs f7, 0x24(r4)
    fsubs f6, f5, f8
    lfs f5, 0x24(r5)
    fmadds f29, f1, f9, f10
    lfs f12, 0x28(r4)
    fsubs f5, f5, f7
    lwz r0, 0x38(r4)
    fmadds f28, f1, f6, f8
    lfs f6, 0x28(r5)
    fmadds f27, f1, f5, f7
    lfs f5, 0x2c(r5)
    fsubs f11, f6, f12
    lfs f10, 0x2c(r4)
    fsubs f9, f5, f10
    stfs f2, 0x4(r3)
    fmadds f11, f1, f11, f12
    lfs f7, 0x30(r5)
    lfs f8, 0x30(r4)
    fmadds f2, f1, f9, f10
    lfs f6, 0x34(r5)
    fsubs f7, f7, f8
    lfs f5, 0x34(r4)
    stfs f0, 0x0(r3)
    fsubs f0, f6, f5
    fmadds f6, f1, f7, f8
    stfs f3, 0x8(r3)
    fmadds f0, f1, f0, f5
    stfs f4, 0xc(r3)
    stfs f31, 0x10(r3)
    stfs f13, 0x14(r3)
    stfs f30, 0x18(r3)
    stfs f29, 0x1c(r3)
    stfs f28, 0x20(r3)
    stfs f27, 0x24(r3)
    stfs f11, 0x28(r3)
    stfs f2, 0x2c(r3)
    stfs f6, 0x30(r3)
    stw r0, 0x38(r3)
    stfs f0, 0x34(r3)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    psq_l f28, 0x28(r1), 0, 0
    lfd f28, 0x20(r1)
    psq_l f27, 0x18(r1), 0, 0
    lfd f27, 0x10(r1)
    addi r1, r1, 0x60
    blr
}
