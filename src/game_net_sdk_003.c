#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSRegisterVersion(void);
extern void _restgpr_16(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8069A100(void);
extern void fn_8069A15C(void);
extern void fn_8069A1A0(void);
extern void fn_8069A1B0(void);
extern void fn_8069A1B8(void);
extern void fn_8069A348(void);
extern void fn_8069A9B4(void);
extern void fn_8069AA08(void);
extern void fn_8069AA0C(void);
extern void fn_8069AAEC(void);
extern void fn_8069ABDC(void);
extern void fn_8069AECC(void);
extern void fn_8069B0BC(void);
extern void fn_8069B200(void);
extern void fn_8069B21C(void);
extern void fn_8069B23C(void);
extern void fn_8069B284(void);
extern void fn_8069B9B0(void);
extern void fn_8069BA88(void);
extern void fn_8069BD80(void);
extern void fn_8069BEB4(void);
extern void fn_8069BF0C(void);
extern void fn_8069BFE0(void);
extern void fn_8069C04C(void);
extern void fn_8069C10C(void);
extern void fn_8069C3C8(void);
extern void fn_8069C63C(void);
extern void fn_8069C73C(void);
extern void fn_8069C7B0(void);
extern void fn_8069C7B4(void);
extern void fn_8069C7B8(void);
extern void fn_8069C7BC(void);
extern void fn_8069C7C8(void);
extern void fn_8069C894(void);
extern void fn_8069C978(void);
extern void fn_8069CA18(void);
extern void fn_8069CB3C(void);
extern void fn_8069CBDC(void);
extern void fn_8069D144(void);
extern void fn_8069D2EC(void);
extern void fn_8069D3F0(void);
extern void fn_8069D580(void);
extern void fn_8069D64C(void);
extern void fn_8069D6F8(void);
extern void fn_8069D9A0(void);
extern void fn_8069DB98(void);
extern void fn_8069DC90(void);
extern void fn_8069DE18(void);
extern void fn_806A0B48(void);
extern void fn_806A0CD4(void);
extern void fn_806A0D34(void);
extern void fn_806A0D6C(void);
extern void fn_806A0DA4(void);
extern void fn_806A0DAC(void);
extern void fn_806A0DB4(void);
extern void fn_806A1064(void);
extern void fn_806A117C(void);
extern void fn_806A11D4(void);
extern void fn_806A123C(void);
extern void fn_806A1240(void);
extern void fn_806A1248(void);
extern void fn_806A1250(void);
extern void fn_806A1258(void);
extern void fn_806A1260(void);
extern void fn_806A1270(void);

/* External data declarations */
extern u8 lbl_80767314[];
extern u8 lbl_807BC558[];
extern u8 lbl_807BC5B4[];

/* Small data declarations */
extern u32 lbl_8087ED64;
extern u32 lbl_8087ED6C;
extern u32 lbl_8087ED70;
extern u32 lbl_8087ED88;
extern u32 lbl_8087ED8C;
extern u32 lbl_8087ED90;
extern u32 lbl_8087ED98;
extern u32 lbl_8087EDA0;
extern u32 lbl_8087EDA8;
extern u32 lbl_8087EDAC;
extern u32 lbl_8087EDB8;
extern u32 lbl_8087EDC0;
extern u32 lbl_808803E8;

/* Function declarations */
void fn_8069E1BC(void);
void fn_8069E480(void);
void fn_8069E600(void);
void fn_8069E6B8(void);
void fn_8069E80C(void);
void fn_8069E9C8(void);
void fn_8069EB1C(void);
void fn_8069EFB8(void);
void fn_8069F1A4(void);
void fn_8069F4D4(void);
void fn_8069FAC4(void);
void fn_8069FCC8(void);
void fn_8069FE10(void);
void fn_8069FE9C(void);
void fn_8069FF38(void);
void fn_8069FFAC(void);
void fn_8069FFF8(void);
void fn_806A0084(void);
void fn_806A00B8(void);
void fn_806A00DC(void);

asm void fn_8069E1BC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r27, r3
    bl fn_806A11D4
    mr r25, r3
    bl fn_806A1258
    mr r30, r3
    mr r3, r25
    bl fn_806A1248
    lwz r4, 0x0(r3)
    mr r3, r25
    lwz r29, 0xc(r4)
    bl fn_806A1250
    mr r28, r3
    mr r3, r25
    bl fn_806A123C
    li r0, 0x0
    mr r31, r3
    stw r0, 0x8(r1)
    addi r28, r28, 0x360
    lwz r25, 0x34(r29)
    b lbl_fn_8069E1BC_000000E0
lbl_fn_8069E1BC_00000064:
    lwz r3, 0x8(r25)
    bl fn_8069C894
    lwz r0, 0x8(r1)
    add r3, r0, r3
    addi r0, r3, 0x1
    stw r0, 0x8(r1)
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    bne lbl_fn_8069E1BC_000000B0
    lwz r5, 0x8(r25)
    mr r3, r30
    mr r4, r29
    addi r6, r1, 0x8
    li r7, 0x2
    bl fn_8069D2EC
    cmpwi r3, 0x0
    bne lbl_fn_8069E1BC_000000C0
    li r3, 0x3
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_000000B0:
    bl fn_8069C894
    lwz r0, 0x8(r1)
    add r0, r0, r3
    stw r0, 0x8(r1)
lbl_fn_8069E1BC_000000C0:
    lwz r3, 0x34(r29)
    lwz r0, 0x0(r3)
    cmplw r25, r0
    beq lbl_fn_8069E1BC_000000E8
    lwz r3, 0x8(r1)
    addi r0, r3, 0x1
    stw r0, 0x8(r1)
    lwz r25, 0x4(r25)
lbl_fn_8069E1BC_000000E0:
    cmpwi r25, 0x0
    bne lbl_fn_8069E1BC_00000064
lbl_fn_8069E1BC_000000E8:
    lwz r4, 0x8(r1)
    addi r3, r1, 0xc
    bl fn_8069CBDC
    lis r4, lbl_80767314@ha
    mr r25, r3
    mr r3, r27
    li r5, 0x31
    addi r4, r4, lbl_80767314@l
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_00000118
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_00000118:
    lis r4, lbl_807BC5B4@ha
    mr r3, r27
    addi r4, r4, lbl_807BC5B4@l
    li r5, 0x10
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_00000138
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_00000138:
    mr r3, r27
    mr r5, r25
    addi r4, r1, 0xc
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_00000154
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_00000154:
    mr r3, r27
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_00000170
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_00000170:
    mr r3, r27
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_0000018C
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_0000018C:
    lwz r26, 0x34(r29)
    b lbl_fn_8069E1BC_000002A0
lbl_fn_8069E1BC_00000194:
    li r25, 0x0
    b lbl_fn_8069E1BC_000001C8
lbl_fn_8069E1BC_0000019C:
    addi r3, r1, 0xc
    extsb r4, r4
    bl fn_8069C978
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0xc
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_000001C4
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_000001C4:
    addi r25, r25, 0x1
lbl_fn_8069E1BC_000001C8:
    lwz r3, 0x8(r26)
    lbzx r4, r3, r25
    extsb. r0, r4
    bne lbl_fn_8069E1BC_0000019C
    mr r3, r27
    la r4, lbl_8087ED88
    li r5, 0x1
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_000001F4
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_000001F4:
    lwz r0, 0xc(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8069E1BC_0000022C
    lwz r6, 0x8(r26)
    mr r3, r30
    lwz r7, 0x7d0(r31)
    mr r4, r29
    mr r5, r28
    addi r8, r27, 0x324
    li r9, 0x2
    bl fn_8069D3F0
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_00000270
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_0000022C:
    li r25, 0x0
    b lbl_fn_8069E1BC_00000260
lbl_fn_8069E1BC_00000234:
    addi r3, r1, 0xc
    extsb r4, r4
    bl fn_8069C978
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0xc
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_0000025C
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_0000025C:
    addi r25, r25, 0x1
lbl_fn_8069E1BC_00000260:
    lwz r3, 0xc(r26)
    lbzx r4, r3, r25
    extsb. r0, r4
    bne lbl_fn_8069E1BC_00000234
lbl_fn_8069E1BC_00000270:
    lwz r3, 0x34(r29)
    lwz r0, 0x0(r3)
    cmplw r26, r0
    beq lbl_fn_8069E1BC_000002A8
    mr r3, r27
    la r4, lbl_8087ED8C
    li r5, 0x1
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069E1BC_0000029C
    b lbl_fn_8069E1BC_000002AC
lbl_fn_8069E1BC_0000029C:
    lwz r26, 0x4(r26)
lbl_fn_8069E1BC_000002A0:
    cmpwi r26, 0x0
    bne lbl_fn_8069E1BC_00000194
lbl_fn_8069E1BC_000002A8:
    li r3, 0x0
lbl_fn_8069E1BC_000002AC:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8069E480(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r26, r3
    bl fn_806A11D4
    mr r25, r3
    bl fn_806A123C
    mr r24, r3
    mr r3, r25
    bl fn_806A1248
    mr r31, r3
    mr r3, r25
    bl fn_806A1258
    lwz r4, 0x0(r31)
    mr r30, r3
    lwz r29, 0xc(r4)
    lwz r28, 0x2c(r29)
    mr r4, r29
    bl fn_806A0DA4
    lwz r0, 0x0(r29)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_8069E480_00000338
    li r3, 0x8
    li r0, 0x0
    stw r3, 0x330(r26)
    stw r0, 0x338(r26)
lbl_fn_8069E480_00000338:
    lwz r0, 0x338(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8069E480_00000374
    lwz r5, 0x7d0(r24)
    cmpwi r5, 0x0
    blt lbl_fn_8069E480_00000374
    mr r3, r30
    mr r4, r29
    bl fn_8069BFE0
    cmpwi r3, 0x0
    bge lbl_fn_8069E480_0000036C
    li r0, 0xa
    stw r0, 0x330(r26)
lbl_fn_8069E480_0000036C:
    li r0, -0x1
    stw r0, 0x7d0(r24)
lbl_fn_8069E480_00000374:
    lwz r0, 0x330(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8069E480_0000038C
    li r0, 0x1
    stw r0, 0x10(r28)
    b lbl_fn_8069E480_000003B8
lbl_fn_8069E480_0000038C:
    li r25, 0x0
    mr r3, r24
    stw r25, 0x10(r28)
    lwz r4, 0x330(r26)
    bl fn_8069A1A0
    lwz r3, 0x28(r28)
    addi r0, r26, 0x104
    cmplw r3, r0
    bne lbl_fn_8069E480_000003B8
    stw r25, 0x28(r28)
    stw r25, 0x1c(r28)
lbl_fn_8069E480_000003B8:
    cmpwi r27, 0x0
    beq lbl_fn_8069E480_000003C8
    lwz r0, 0x330(r26)
    stw r0, 0x4(r27)
lbl_fn_8069E480_000003C8:
    mr r3, r30
    bl fn_8069AA08
    lwz r3, 0x0(r31)
    bl fn_8069A15C
    li r0, 0x0
    mr r3, r30
    stw r0, 0x0(r31)
    bl fn_8069AA0C
    mr r3, r30
    mr r4, r29
    bl fn_8069B9B0
    cmpwi r27, 0x0
    beq lbl_fn_8069E480_00000410
    lwz r0, 0x10(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8069E480_00000410
    li r0, 0x5
    stw r0, 0x0(r27)
lbl_fn_8069E480_00000410:
    mr r3, r30
    mr r4, r27
    bl fn_806A117C
    cmpwi r27, 0x0
    beq lbl_fn_8069E480_0000042C
    mr r3, r27
    bl fn_806A0B48
lbl_fn_8069E480_0000042C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069E600(void)
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
    bl fn_806A11D4
    mr r30, r3
    bl fn_806A1258
    mr r29, r3
    bl fn_8069AA08
    mr r3, r30
    bl fn_806A1240
    bl fn_8069A9B4
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8069E600_000004A8
    mr r3, r30
    bl fn_806A1248
    lwz r0, 0x8(r31)
    stw r0, 0x0(r28)
    stw r31, 0x0(r3)
    b lbl_fn_8069E600_000004B0
lbl_fn_8069E600_000004A8:
    li r0, -0x1
    stw r0, 0x0(r28)
lbl_fn_8069E600_000004B0:
    mr r3, r29
    bl fn_8069AA0C
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bge lbl_fn_8069E600_000004D8
    mr r3, r30
    bl fn_806A1250
    bl fn_8069AAEC
    li r3, 0x0
    b lbl_fn_8069E600_000004DC
lbl_fn_8069E600_000004D8:
    li r3, 0x1
lbl_fn_8069E600_000004DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069E6B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_806A11D4
    bl fn_806A1248
    lwz r3, 0x0(r3)
    lwz r30, 0xc(r3)
    lwz r0, 0xc(r30)
    lwz r29, 0x28(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8069E6B8_0000053C
    addi r29, r30, 0xe0
lbl_fn_8069E6B8_0000053C:
    mr r3, r29
    bl fn_8069C7B4
    cmpwi r3, 0x0
    beq lbl_fn_8069E6B8_00000560
    mr r3, r29
    addi r4, r31, 0x4
    bl fn_8069C7B8
    cmpwi r3, 0x0
    beq lbl_fn_8069E6B8_000005A4
lbl_fn_8069E6B8_00000560:
    mr r3, r30
    mr r4, r29
    bl fn_8069C73C
    cmpwi r3, 0x0
    stw r3, 0x314(r31)
    bne lbl_fn_8069E6B8_000005AC
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8069E6B8_00000594
    li r0, 0xc
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_fn_8069E6B8_00000634
lbl_fn_8069E6B8_00000594:
    li r0, 0x4
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_fn_8069E6B8_00000634
lbl_fn_8069E6B8_000005A4:
    lwz r0, 0x318(r31)
    stw r0, 0x314(r31)
lbl_fn_8069E6B8_000005AC:
    addi r3, r31, 0x4
    li r4, 0x100
    bl fn_8069C7BC
    mr r3, r29
    bl fn_8069C7B4
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x4
    bl fn_8069C7B0
    lwz r0, 0x20(r30)
    stw r0, 0x31c(r31)
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8069E6B8_000005EC
    lwz r0, 0x1e0(r30)
    stw r0, 0x31c(r31)
lbl_fn_8069E6B8_000005EC:
    lwz r3, 0x314(r31)
    lwz r0, 0x318(r31)
    cmplw r3, r0
    bne lbl_fn_8069E6B8_00000618
    lwz r3, 0x31c(r31)
    lwz r0, 0x320(r31)
    cmpw r3, r0
    bne lbl_fn_8069E6B8_00000618
    lwz r0, 0x8(r30)
    cmpwi r0, 0x1
    bne lbl_fn_8069E6B8_00000620
lbl_fn_8069E6B8_00000618:
    li r0, 0x0
    stw r0, 0x338(r31)
lbl_fn_8069E6B8_00000620:
    lwz r4, 0x314(r31)
    li r3, 0x1
    lwz r0, 0x31c(r31)
    stw r4, 0x318(r31)
    stw r0, 0x320(r31)
lbl_fn_8069E6B8_00000634:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069E80C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    bl fn_806A11D4
    mr r29, r3
    bl fn_806A123C
    mr r28, r3
    mr r3, r29
    bl fn_806A1248
    lwz r4, 0x0(r3)
    mr r30, r3
    mr r3, r29
    lwz r29, 0xc(r4)
    bl fn_806A1258
    lwz r0, 0x338(r31)
    mr r27, r3
    li r26, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_8069E80C_000006C4
    lwz r3, 0x7d0(r28)
    bl fn_8069BEB4
    cmpwi r3, -0x1
    bne lbl_fn_8069E80C_000006C4
    li r0, 0x0
    li r26, 0x1
    stw r0, 0x338(r31)
lbl_fn_8069E80C_000006C4:
    lwz r0, 0x338(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8069E80C_000007D4
    lwz r5, 0x7d0(r28)
    cmpwi r5, 0x0
    blt lbl_fn_8069E80C_00000710
    mr r3, r27
    mr r4, r29
    bl fn_8069BFE0
    cmpwi r3, 0x0
    bge lbl_fn_8069E80C_00000710
    cmpwi r26, 0x0
    bne lbl_fn_8069E80C_00000710
    li r3, -0x1
    li r0, 0xa
    stw r3, 0x7d0(r28)
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_fn_8069E80C_000007F4
lbl_fn_8069E80C_00000710:
    mr r3, r29
    bl fn_8069BF0C
    cmpwi r3, 0x0
    stw r3, 0x7d0(r28)
    bge lbl_fn_8069E80C_00000734
    li r0, 0x3
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_fn_8069E80C_000007F4
lbl_fn_8069E80C_00000734:
    mr r3, r27
    bl fn_8069AA08
    lwz r0, 0x7d0(r28)
    mr r3, r27
    lwz r4, 0x0(r30)
    stw r0, 0x10(r4)
    bl fn_8069AA0C
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8069E80C_00000764
    li r3, 0x0
    b lbl_fn_8069E80C_000007F4
lbl_fn_8069E80C_00000764:
    lwz r6, 0x7d0(r28)
    mr r3, r28
    lwz r7, 0x314(r31)
    mr r4, r27
    lwz r8, 0x31c(r31)
    mr r5, r29
    bl fn_8069C04C
    cmpwi r3, 0x0
    bge lbl_fn_8069E80C_000007F0
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8069E80C_000007A4
    li r0, 0xd
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_fn_8069E80C_000007F4
lbl_fn_8069E80C_000007A4:
    mr r3, r28
    bl fn_8069A1B0
    cmpwi r3, 0x0
    beq lbl_fn_8069E80C_000007C4
    li r0, 0xe
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_fn_8069E80C_000007F4
lbl_fn_8069E80C_000007C4:
    li r0, 0x5
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_fn_8069E80C_000007F4
lbl_fn_8069E80C_000007D4:
    mr r3, r27
    bl fn_8069AA08
    lwz r0, 0x7d0(r28)
    mr r3, r27
    lwz r4, 0x0(r30)
    stw r0, 0x10(r4)
    bl fn_8069AA0C
lbl_fn_8069E80C_000007F0:
    li r3, 0x1
lbl_fn_8069E80C_000007F4:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069E9C8(void)
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
    bl fn_806A11D4
    mr r30, r3
    bl fn_806A123C
    mr r29, r3
    mr r3, r30
    bl fn_806A1248
    mr r31, r3
    mr r3, r30
    bl fn_806A1258
    lwz r5, 0x0(r31)
    li r4, 0xa
    li r0, 0x0
    mr r30, r3
    lwz r31, 0xc(r5)
    stw r4, 0x330(r28)
    stw r0, 0x324(r28)
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8069E9C8_0000093C
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8069E9C8_0000093C
    mr r3, r28
    bl fn_8069D6F8
    cmpwi r3, 0x0
    beq lbl_fn_8069E9C8_00000898
    b lbl_fn_8069E9C8_00000940
lbl_fn_8069E9C8_00000898:
    mr r3, r28
    bl fn_8069D9A0
    cmpwi r3, 0x0
    bne lbl_fn_8069E9C8_000008B0
    li r3, 0x1
    b lbl_fn_8069E9C8_00000940
lbl_fn_8069E9C8_000008B0:
    lwz r6, 0x7d0(r29)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_8069C10C
    cmpwi r3, 0x0
    beq lbl_fn_8069E9C8_0000093C
    cmpwi r3, -0x3ec
    bne lbl_fn_8069E9C8_000008F4
    mr r3, r29
    bl fn_8069A1B0
    cmpwi r3, 0x0
    beq lbl_fn_8069E9C8_000008EC
    li r0, 0x10
    stw r0, 0x330(r28)
lbl_fn_8069E9C8_000008EC:
    li r3, 0x1
    b lbl_fn_8069E9C8_00000940
lbl_fn_8069E9C8_000008F4:
    cmpwi r3, -0x3ed
    bne lbl_fn_8069E9C8_0000091C
    mr r3, r29
    bl fn_8069A1B0
    cmpwi r3, 0x0
    beq lbl_fn_8069E9C8_00000914
    li r0, 0x11
    stw r0, 0x330(r28)
lbl_fn_8069E9C8_00000914:
    li r3, 0x1
    b lbl_fn_8069E9C8_00000940
lbl_fn_8069E9C8_0000091C:
    mr r3, r29
    bl fn_8069A1B0
    cmpwi r3, 0x0
    beq lbl_fn_8069E9C8_00000934
    li r0, 0xe
    stw r0, 0x330(r28)
lbl_fn_8069E9C8_00000934:
    li r3, 0x1
    b lbl_fn_8069E9C8_00000940
lbl_fn_8069E9C8_0000093C:
    li r3, 0x0
lbl_fn_8069E9C8_00000940:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069EB1C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r30, lbl_807BC558@ha
    mr r27, r3
    addi r30, r30, lbl_807BC558@l
    bl fn_806A11D4
    mr r28, r3
    bl fn_806A1248
    lwz r4, 0x0(r3)
    mr r3, r28
    lwz r29, 0xc(r4)
    bl fn_806A1258
    mr r26, r3
    mr r3, r28
    bl fn_806A123C
    mr r31, r3
    mr r3, r26
    mr r4, r29
    bl fn_806A0DA4
    mr r26, r3
    mr r3, r28
    bl fn_806A1250
    addi r28, r3, 0x360
    lwz r3, 0x24(r29)
    bl fn_8069C7B4
    li r0, 0xa
    cmpwi r26, 0x0
    stw r0, 0x330(r27)
    mr r25, r3
    li r3, 0x0
    beq lbl_fn_8069EB1C_000009F0
    li r0, 0x2
    stw r0, 0x0(r26)
lbl_fn_8069EB1C_000009F0:
    li r0, 0x0
    stw r0, 0x324(r27)
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x1
    beq lbl_fn_8069EB1C_00000A34
    bge lbl_fn_8069EB1C_00000A14
    cmpwi r0, 0x0
    bge lbl_fn_8069EB1C_00000A20
    b lbl_fn_8069EB1C_00000A58
lbl_fn_8069EB1C_00000A14:
    cmpwi r0, 0x3
    bge lbl_fn_8069EB1C_00000A58
    b lbl_fn_8069EB1C_00000A48
lbl_fn_8069EB1C_00000A20:
    mr r3, r27
    la r4, lbl_8087ED90
    li r5, 0x4
    bl fn_8069D64C
    b lbl_fn_8069EB1C_00000A58
lbl_fn_8069EB1C_00000A34:
    mr r3, r27
    la r4, lbl_8087ED98
    li r5, 0x5
    bl fn_8069D64C
    b lbl_fn_8069EB1C_00000A58
lbl_fn_8069EB1C_00000A48:
    mr r3, r27
    la r4, lbl_8087EDA0
    li r5, 0x5
    bl fn_8069D64C
lbl_fn_8069EB1C_00000A58:
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000A64
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000A64:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8069EB1C_00000A98
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8069EB1C_00000A98
    lwz r4, 0x24(r29)
    mr r3, r27
    mr r5, r25
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000AE0
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000A98:
    lwz r4, 0x18(r29)
    cmpw r25, r4
    ble lbl_fn_8069EB1C_00000AC4
    lwz r0, 0x24(r29)
    subf r5, r4, r25
    mr r3, r27
    add r4, r0, r4
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000AE0
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000AC4:
    mr r3, r27
    la r4, lbl_8087EDA8
    li r5, 0x1
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000AE0
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000AE0:
    mr r3, r27
    addi r4, r30, 0xc
    li r5, 0xb
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000AFC
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000AFC:
    lwz r6, 0x8(r29)
    mr r3, r27
    la r4, lbl_8087ED64
    li r5, 0x6
    neg r0, r6
    or r0, r0, r6
    srwi r6, r0, 31
    addi r26, r6, 0x7
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000B2C
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000B2C:
    lwz r4, 0x24(r29)
    mr r3, r27
    lwz r0, 0x14(r29)
    add r4, r4, r26
    subf r5, r26, r0
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000B50
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000B50:
    mr r3, r27
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000B6C
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000B6C:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8069EB1C_00000C0C
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8069EB1C_00000C0C
    bl fn_806A11D4
    bl fn_806A1248
    lwz r3, 0x0(r3)
    lwz r26, 0xc(r3)
    lwz r0, 0x240(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8069EB1C_00000BA8
    li r3, 0x0
    b lbl_fn_8069EB1C_00000C00
lbl_fn_8069EB1C_00000BA8:
    mr r3, r27
    addi r4, r30, 0x40
    li r5, 0x1b
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000BC4
    b lbl_fn_8069EB1C_00000C00
lbl_fn_8069EB1C_00000BC4:
    lwz r5, 0x240(r26)
    mr r3, r27
    addi r4, r26, 0x1e4
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000BE0
    b lbl_fn_8069EB1C_00000C00
lbl_fn_8069EB1C_00000BE0:
    mr r3, r27
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r3, r3, r0
lbl_fn_8069EB1C_00000C00:
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000C0C
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000C0C:
    bl fn_806A11D4
    bl fn_806A1248
    lwz r3, 0x0(r3)
    lwz r26, 0xc(r3)
    lwz r0, 0xa8(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8069EB1C_00000C30
    li r3, 0x0
    b lbl_fn_8069EB1C_00000C88
lbl_fn_8069EB1C_00000C30:
    mr r3, r27
    addi r4, r30, 0x70
    li r5, 0x15
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000C4C
    b lbl_fn_8069EB1C_00000C88
lbl_fn_8069EB1C_00000C4C:
    lwz r5, 0xa8(r26)
    mr r3, r27
    addi r4, r26, 0x4c
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000C68
    b lbl_fn_8069EB1C_00000C88
lbl_fn_8069EB1C_00000C68:
    mr r3, r27
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r3, r3, r0
lbl_fn_8069EB1C_00000C88:
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000C94
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000C94:
    mr r3, r27
    bl fn_8069DB98
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000CA8
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000CA8:
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8069EB1C_00000D5C
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8069EB1C_00000CCC
    mr r3, r27
    bl fn_8069DC90
    b lbl_fn_8069EB1C_00000D40
lbl_fn_8069EB1C_00000CCC:
    lwz r3, 0xd0(r29)
    cmpwi r3, 0x0
    bne lbl_fn_8069EB1C_00000D18
    lwz r3, 0x34(r29)
    li r4, 0x0
    mr r5, r3
    b lbl_fn_8069EB1C_00000D0C
lbl_fn_8069EB1C_00000CE8:
    lwz r0, 0x14(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8069EB1C_00000CFC
    li r4, 0x1
    b lbl_fn_8069EB1C_00000D24
lbl_fn_8069EB1C_00000CFC:
    lwz r0, 0x0(r3)
    cmplw r5, r0
    beq lbl_fn_8069EB1C_00000D24
    lwz r5, 0x4(r5)
lbl_fn_8069EB1C_00000D0C:
    cmpwi r5, 0x0
    bne lbl_fn_8069EB1C_00000CE8
    b lbl_fn_8069EB1C_00000D24
lbl_fn_8069EB1C_00000D18:
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r4, r0, 5
lbl_fn_8069EB1C_00000D24:
    cmpwi r4, 0x0
    beq lbl_fn_8069EB1C_00000D38
    mr r3, r27
    bl fn_8069DE18
    b lbl_fn_8069EB1C_00000D40
lbl_fn_8069EB1C_00000D38:
    mr r3, r27
    bl fn_8069E1BC
lbl_fn_8069EB1C_00000D40:
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000D78
    cmpwi r3, 0x3
    bne lbl_fn_8069EB1C_00000DE4
    li r0, 0x3
    stw r0, 0x330(r27)
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000D5C:
    mr r3, r27
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069EB1C_00000D78
    b lbl_fn_8069EB1C_00000DE4
lbl_fn_8069EB1C_00000D78:
    lwz r6, 0x324(r27)
    li r26, 0x0
    cmpwi r6, 0x0
    ble lbl_fn_8069EB1C_00000DCC
    lwz r4, 0x7d0(r31)
    mr r3, r29
    mr r5, r28
    li r7, 0x0
    bl fn_8069C63C
    li r0, 0x0
    mr r29, r3
    stw r0, 0x324(r27)
    mr r3, r28
    li r4, 0x100
    bl fn_8069C7BC
    cmpwi r29, 0x0
    bge lbl_fn_8069EB1C_00000DC0
    li r26, 0x1
lbl_fn_8069EB1C_00000DC0:
    cmpwi r29, 0x0
    bne lbl_fn_8069EB1C_00000DCC
    li r26, 0x2
lbl_fn_8069EB1C_00000DCC:
    li r0, 0x0
    mr r3, r28
    stw r0, 0x324(r27)
    li r4, 0x100
    bl fn_8069C7BC
    mr r3, r26
lbl_fn_8069EB1C_00000DE4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069EFB8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r25, r3
    bl fn_806A11D4
    mr r23, r3
    bl fn_806A1248
    lwz r4, 0x0(r3)
    mr r3, r23
    lwz r29, 0xc(r4)
    lwz r28, 0x2c(r29)
    bl fn_806A1258
    mr r27, r3
    mr r4, r29
    bl fn_806A0DA4
    mr r24, r3
    mr r3, r23
    bl fn_806A123C
    li r0, 0x0
    cmpwi r24, 0x0
    stw r0, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8069EFB8_00000E68
    li r0, 0x3
    stw r0, 0x0(r24)
lbl_fn_8069EFB8_00000E68:
    li r31, 0x0
    addi r3, r25, 0x304
    stw r31, 0x0(r28)
    li r4, 0xe
    bl fn_8069C7BC
    lwz r26, 0x34(r28)
    addi r24, r1, 0x8
    stw r31, 0x328(r25)
lbl_fn_8069EFB8_00000E88:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8069EFB8_00000E9C
    li r3, 0x0
    b lbl_fn_8069EFB8_00000FD0
lbl_fn_8069EFB8_00000E9C:
    lwz r0, 0x328(r25)
    cmpwi r0, 0x400
    bge lbl_fn_8069EFB8_00000EE4
    add r6, r28, r0
    lwz r5, 0x7d0(r30)
    mr r3, r27
    mr r4, r29
    addi r6, r6, 0x38
    li r7, 0x1
    li r8, 0x0
    bl fn_8069C3C8
    lwz r0, 0x328(r25)
    mr r4, r3
    add r3, r28, r0
    clrlwi r0, r0, 30
    lbz r3, 0x38(r3)
    stbx r3, r24, r0
    b lbl_fn_8069EFB8_00000F74
lbl_fn_8069EFB8_00000EE4:
    clrlwi. r23, r0, 23
    bne lbl_fn_8069EFB8_00000F3C
    cmpwi r26, 0x0
    beq lbl_fn_8069EFB8_00000F0C
    li r3, 0x204
    li r4, 0x4
    bl fn_8069A100
    stw r3, 0x0(r26)
    mr r26, r3
    b lbl_fn_8069EFB8_00000F20
lbl_fn_8069EFB8_00000F0C:
    li r3, 0x204
    li r4, 0x4
    bl fn_8069A100
    mr r26, r3
    stw r3, 0x34(r28)
lbl_fn_8069EFB8_00000F20:
    cmpwi r26, 0x0
    bne lbl_fn_8069EFB8_00000F38
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x330(r25)
    b lbl_fn_8069EFB8_00000FD0
lbl_fn_8069EFB8_00000F38:
    stw r31, 0x0(r26)
lbl_fn_8069EFB8_00000F3C:
    add r3, r26, r23
    lwz r5, 0x7d0(r30)
    addi r23, r3, 0x4
    mr r4, r29
    mr r3, r27
    li r7, 0x1
    mr r6, r23
    li r8, 0x0
    bl fn_8069C3C8
    lwz r0, 0x328(r25)
    mr r4, r3
    lbz r3, 0x0(r23)
    clrlwi r0, r0, 30
    stbx r3, r24, r0
lbl_fn_8069EFB8_00000F74:
    cmpwi r4, 0x0
    bgt lbl_fn_8069EFB8_00000F8C
    li r0, 0xa
    li r3, 0x0
    stw r0, 0x330(r25)
    b lbl_fn_8069EFB8_00000FD0
lbl_fn_8069EFB8_00000F8C:
    lwz r0, 0x328(r25)
    addi r3, r1, 0x8
    add r4, r0, r4
    stw r4, 0x328(r25)
    bl fn_8069D144
    cmpwi r3, 0x0
    beq lbl_fn_8069EFB8_00000E88
    lwz r0, 0x328(r25)
    stw r0, 0x0(r28)
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8069EFB8_00000FCC
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r25)
    b lbl_fn_8069EFB8_00000FD0
lbl_fn_8069EFB8_00000FCC:
    li r3, 0x1
lbl_fn_8069EFB8_00000FD0:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8069F1A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r28, lbl_807BC558@ha
    mr r30, r3
    addi r28, r28, lbl_807BC558@l
    bl fn_806A11D4
    mr r29, r3
    bl fn_806A1248
    lwz r4, 0x0(r3)
    mr r3, r29
    lwz r29, 0xc(r4)
    lwz r31, 0x2c(r29)
    bl fn_806A1250
    addi r27, r3, 0x360
    mr r3, r31
    addi r4, r30, 0x304
    li r5, 0x0
    li r6, 0xe
    bl fn_8069B0BC
    cmpwi r3, 0x0
    bne lbl_fn_8069F1A4_00001058
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_00001058:
    addi r3, r30, 0x304
    la r4, lbl_8087ED70
    li r5, 0x5
    bl fn_8069C7C8
    cmpwi r3, 0x0
    beq lbl_fn_8069F1A4_00001080
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_00001080:
    lbz r0, 0x30c(r30)
    cmpwi r0, 0x20
    beq lbl_fn_8069F1A4_0000109C
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_0000109C:
    addi r3, r30, 0x30d
    li r4, 0x3
    bl fn_8069CB3C
    cmpwi r3, 0x0
    stw r3, 0x18(r31)
    bge lbl_fn_8069F1A4_000010C4
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_000010C4:
    lwz r5, 0x0(r31)
    mr r3, r31
    addi r6, r1, 0xc
    li r4, 0xc
    li r7, 0x0
    bl fn_8069ABDC
    cmpwi r3, 0x0
    bge lbl_fn_8069F1A4_000010F4
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_000010F4:
    mr r3, r31
    addi r4, r28, 0x88
    addi r5, r1, 0x8
    bl fn_8069BD80
    cmpwi cr1, r3, 0x0
    stw r3, 0x32c(r30)
    mr r6, r3
    bne cr1, lbl_fn_8069F1A4_00001124
    li r0, 0x0
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_00001124:
    cmpwi r3, 0x100
    ble lbl_fn_8069F1A4_0000113C
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_0000113C:
    ble cr1, lbl_fn_8069F1A4_00001198
    lwz r5, 0x8(r1)
    mr r3, r31
    mr r4, r27
    bl fn_8069B0BC
    cmpwi r3, 0x0
    bne lbl_fn_8069F1A4_00001168
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_00001168:
    lwz r4, 0x32c(r30)
    mr r3, r27
    bl fn_8069CB3C
    cmpwi r3, 0x0
    stw r3, 0x32c(r30)
    bge lbl_fn_8069F1A4_00001190
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_00001190:
    stw r3, 0xc(r31)
    b lbl_fn_8069F1A4_000011A0
lbl_fn_8069F1A4_00001198:
    li r0, -0x1
    stw r0, 0xc(r31)
lbl_fn_8069F1A4_000011A0:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8069F1A4_000011B8
    li r0, 0x0
    stw r0, 0x338(r30)
    b lbl_fn_8069F1A4_00001278
lbl_fn_8069F1A4_000011B8:
    mr r3, r31
    addi r4, r28, 0x98
    addi r5, r1, 0x8
    bl fn_8069BD80
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8069F1A4_000011EC
    li r3, 0x7
    li r0, 0x0
    stw r3, 0x330(r30)
    li r3, 0x0
    stw r0, 0x338(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_000011EC:
    addi r3, r30, 0x304
    addi r4, r28, 0xa4
    li r5, 0x8
    bl fn_8069C7C8
    cmpwi r3, 0x0
    bne lbl_fn_8069F1A4_00001210
    li r0, 0x1
    stw r0, 0x338(r30)
    b lbl_fn_8069F1A4_00001218
lbl_fn_8069F1A4_00001210:
    li r0, 0x0
    stw r0, 0x338(r30)
lbl_fn_8069F1A4_00001218:
    cmpwi r29, 0x100
    bgt lbl_fn_8069F1A4_00001278
    cmpwi r29, 0x0
    ble lbl_fn_8069F1A4_00001278
    lwz r4, 0x8(r1)
    mr r3, r31
    addi r6, r28, 0xb0
    li r7, 0x0
    add r5, r4, r29
    bl fn_8069AECC
    cmpwi r3, 0x0
    bne lbl_fn_8069F1A4_00001250
    li r0, 0x1
    stw r0, 0x338(r30)
lbl_fn_8069F1A4_00001250:
    lwz r4, 0x8(r1)
    mr r3, r31
    la r6, lbl_8087EDAC
    li r7, 0x0
    add r5, r4, r29
    bl fn_8069AECC
    cmpwi r3, 0x0
    bne lbl_fn_8069F1A4_00001278
    li r0, 0x0
    stw r0, 0x338(r30)
lbl_fn_8069F1A4_00001278:
    mr r3, r31
    addi r4, r28, 0xbc
    addi r5, r1, 0x8
    bl fn_8069BD80
    cmpwi cr1, r3, 0x0
    stw r3, 0x33c(r30)
    mr r0, r3
    bne cr1, lbl_fn_8069F1A4_000012A8
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_fn_8069F1A4_00001300
lbl_fn_8069F1A4_000012A8:
    cmpwi r3, 0x100
    ble lbl_fn_8069F1A4_000012BC
    li r0, 0x0
    stw r0, 0x33c(r30)
    b lbl_fn_8069F1A4_000012EC
lbl_fn_8069F1A4_000012BC:
    ble cr1, lbl_fn_8069F1A4_000012E4
    lwz r4, 0x8(r1)
    mr r3, r31
    la r6, lbl_8087EDB8
    li r7, 0x3b
    add r5, r4, r0
    bl fn_8069AECC
    cntlzw r0, r3
    srwi r0, r0, 5
    b lbl_fn_8069F1A4_000012E8
lbl_fn_8069F1A4_000012E4:
    li r0, 0x0
lbl_fn_8069F1A4_000012E8:
    stw r0, 0x33c(r30)
lbl_fn_8069F1A4_000012EC:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x330(r30)
    li r3, 0x1
    stw r0, 0x14(r31)
lbl_fn_8069F1A4_00001300:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069F4D4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_16
    mr r16, r3
    bl fn_806A11D4
    mr r17, r3
    bl fn_806A1248
    lwz r4, 0x0(r3)
    mr r3, r17
    lwz r22, 0xc(r4)
    lwz r21, 0x2c(r22)
    bl fn_806A123C
    mr r27, r3
    mr r3, r17
    bl fn_806A1258
    mr r20, r3
    mr r4, r22
    bl fn_806A0DA4
    mr r19, r3
    mr r3, r17
    bl fn_806A1250
    lwz r0, 0x1c(r22)
    addi r18, r3, 0x360
    cmpwi r0, 0x2
    beq lbl_fn_8069F4D4_000013A8
    lwz r0, 0x18(r21)
    cmpwi r0, 0xcc
    beq lbl_fn_8069F4D4_000013A8
    cmpwi r0, 0x130
    beq lbl_fn_8069F4D4_000013A8
    cmpwi r0, 0x64
    blt lbl_fn_8069F4D4_000013B0
    cmpwi r0, 0xc8
    bge lbl_fn_8069F4D4_000013B0
lbl_fn_8069F4D4_000013A8:
    li r3, 0x1
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_000013B0:
    mr r3, r19
    li r4, 0x0
    bl fn_806A1260
    cmpwi r19, 0x0
    beq lbl_fn_8069F4D4_000013CC
    li r0, 0x4
    stw r0, 0x0(r19)
lbl_fn_8069F4D4_000013CC:
    lwz r4, 0x32c(r16)
    cmpwi r4, 0x0
    blt lbl_fn_8069F4D4_000014FC
    mr r3, r19
    bl fn_806A1260
    li r18, 0x6
    li r17, 0x200
    b lbl_fn_8069F4D4_000014A8
lbl_fn_8069F4D4_000013EC:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_fn_8069F4D4_0000141C
    mr r3, r20
    mr r4, r21
    bl fn_8069D580
    cmpwi r3, 0x0
    bne lbl_fn_8069F4D4_0000141C
    stw r18, 0x330(r16)
    addi r0, r16, 0x104
    stw r0, 0x28(r21)
    stw r17, 0x1c(r21)
lbl_fn_8069F4D4_0000141C:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    bne lbl_fn_8069F4D4_00001448
    lwz r5, 0x7d0(r27)
    mr r3, r20
    lwz r7, 0x32c(r16)
    mr r4, r22
    li r6, 0x0
    li r8, 0x0
    bl fn_8069B23C
    b lbl_fn_8069F4D4_00001464
lbl_fn_8069F4D4_00001448:
    lwz r5, 0x7d0(r27)
    mr r3, r20
    lwz r6, 0x4(r21)
    mr r4, r22
    lwz r7, 0x32c(r16)
    li r8, 0x0
    bl fn_8069B23C
lbl_fn_8069F4D4_00001464:
    cmpwi r3, 0x0
    bge lbl_fn_8069F4D4_00001474
    li r3, 0x0
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_00001474:
    beq lbl_fn_8069F4D4_000014B4
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_fn_8069F4D4_0000149C
    lwz r0, 0x4(r21)
    add r0, r0, r3
    stw r0, 0x4(r21)
    lwz r0, 0x8(r21)
    add r0, r0, r3
    stw r0, 0x8(r21)
lbl_fn_8069F4D4_0000149C:
    lwz r0, 0x32c(r16)
    subf r0, r3, r0
    stw r0, 0x32c(r16)
lbl_fn_8069F4D4_000014A8:
    lwz r0, 0x32c(r16)
    cmpwi r0, 0x0
    bgt lbl_fn_8069F4D4_000013EC
lbl_fn_8069F4D4_000014B4:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_fn_8069F4D4_000018C0
    lwz r0, 0x32c(r16)
    cmpwi r0, 0x0
    beq lbl_fn_8069F4D4_000014F0
    lwz r4, 0x4(r21)
    mr r3, r21
    bl fn_8069B200
    cmpwi r3, 0x0
    li r0, 0xa
    beq lbl_fn_8069F4D4_000014E8
    li r0, 0x6
lbl_fn_8069F4D4_000014E8:
    stw r0, 0x330(r16)
    b lbl_fn_8069F4D4_000018C0
lbl_fn_8069F4D4_000014F0:
    li r0, 0x0
    stw r0, 0x330(r16)
    b lbl_fn_8069F4D4_000018C0
lbl_fn_8069F4D4_000014FC:
    lwz r0, 0x33c(r16)
    li r3, 0xa
    stw r3, 0x330(r16)
    cmpwi r0, 0x0
    beq lbl_fn_8069F4D4_0000180C
    addi r29, r1, 0xc
    addi r23, r1, 0x10
    li r24, -0x1
    li r30, 0x6
    li r31, 0x200
    li r28, 0x0
lbl_fn_8069F4D4_00001528:
    stb r28, 0x10(r1)
    stb r28, 0x11(r1)
    stw r28, 0x328(r16)
    b lbl_fn_8069F4D4_00001674
lbl_fn_8069F4D4_00001538:
    lwz r5, 0x7d0(r27)
    mr r3, r20
    mr r4, r22
    add r6, r18, r0
    li r7, 0x1
    li r8, 0x0
    bl fn_8069C3C8
    cmpwi r3, 0x0
    bge lbl_fn_8069F4D4_00001564
    li r3, 0x0
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_00001564:
    lwz r17, 0x328(r16)
    lbzx r3, r18, r17
    clrlwi r4, r17, 31
    extsb r0, r3
    stbx r3, r23, r4
    cmpwi r0, 0x3b
    beq lbl_fn_8069F4D4_000015A0
    cmpwi r0, 0xa
    bne lbl_fn_8069F4D4_00001668
    subi r0, r17, 0x1
    clrlwi r0, r0, 31
    lbzx r0, r23, r0
    extsb r0, r0
    cmpwi r0, 0xd
    bne lbl_fn_8069F4D4_00001668
lbl_fn_8069F4D4_000015A0:
    extsb r0, r3
    cmpwi r0, 0xa
    bne lbl_fn_8069F4D4_000015B4
    subi r17, r17, 0x1
    b lbl_fn_8069F4D4_00001638
lbl_fn_8069F4D4_000015B4:
    lwz r26, 0x7d0(r27)
    li r25, 0x0
    li r24, 0x0
    stb r25, 0xc(r1)
    stb r25, 0xd(r1)
    b lbl_fn_8069F4D4_000015F8
lbl_fn_8069F4D4_000015CC:
    mr r3, r20
    mr r4, r22
    mr r5, r26
    li r7, 0x1
    li r8, 0x0
    bl fn_8069C3C8
    cmpwi r3, 0x0
    bgt lbl_fn_8069F4D4_000015F0
    b lbl_fn_8069F4D4_00001628
lbl_fn_8069F4D4_000015F0:
    add r25, r25, r3
    addi r24, r24, 0x1
lbl_fn_8069F4D4_000015F8:
    clrlwi r0, r24, 31
    addi r6, r1, 0xc
    lbzux r0, r6, r0
    cmpwi r0, 0xd
    bne lbl_fn_8069F4D4_000015CC
    subi r0, r24, 0x1
    clrlwi r0, r0, 31
    lbzx r0, r29, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_fn_8069F4D4_000015CC
    mr r3, r25
lbl_fn_8069F4D4_00001628:
    cmpwi r3, 0x0
    bgt lbl_fn_8069F4D4_00001638
    li r3, 0x0
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_00001638:
    cmpwi r17, 0x0
    bne lbl_fn_8069F4D4_00001648
    li r3, 0x0
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_00001648:
    mr r3, r18
    mr r4, r17
    bl fn_8069CA18
    cmpwi r3, 0x0
    mr r24, r3
    bge lbl_fn_8069F4D4_00001680
    li r3, 0x0
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_00001668:
    lwz r3, 0x328(r16)
    addi r0, r3, 0x1
    stw r0, 0x328(r16)
lbl_fn_8069F4D4_00001674:
    lwz r0, 0x328(r16)
    cmpwi r0, 0x100
    blt lbl_fn_8069F4D4_00001538
lbl_fn_8069F4D4_00001680:
    lwz r0, 0x328(r16)
    cmpwi r0, 0x100
    bne lbl_fn_8069F4D4_0000169C
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r16)
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_0000169C:
    cmpwi r24, 0x0
    ble lbl_fn_8069F4D4_00001794
    mr r3, r19
    mr r4, r24
    bl fn_806A1260
    b lbl_fn_8069F4D4_00001788
lbl_fn_8069F4D4_000016B4:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_fn_8069F4D4_000016E4
    mr r3, r20
    mr r4, r21
    bl fn_8069D580
    cmpwi r3, 0x0
    bne lbl_fn_8069F4D4_000016E4
    stw r30, 0x330(r16)
    addi r0, r16, 0x104
    stw r0, 0x28(r21)
    stw r31, 0x1c(r21)
lbl_fn_8069F4D4_000016E4:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    bne lbl_fn_8069F4D4_00001710
    lwz r5, 0x7d0(r27)
    mr r3, r20
    mr r4, r22
    mr r7, r24
    li r6, 0x0
    li r8, 0x0
    bl fn_8069B23C
    b lbl_fn_8069F4D4_0000172C
lbl_fn_8069F4D4_00001710:
    lwz r5, 0x7d0(r27)
    mr r3, r20
    lwz r6, 0x4(r21)
    mr r4, r22
    mr r7, r24
    li r8, 0x0
    bl fn_8069B23C
lbl_fn_8069F4D4_0000172C:
    cmpwi r3, 0x0
    bgt lbl_fn_8069F4D4_0000173C
    li r3, 0x0
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_0000173C:
    lwz r0, 0x4(r21)
    subf. r24, r3, r24
    add r0, r0, r3
    stw r0, 0x4(r21)
    lwz r0, 0x8(r21)
    add r0, r0, r3
    stw r0, 0x8(r21)
    bne lbl_fn_8069F4D4_00001788
    lwz r5, 0x7d0(r27)
    mr r3, r20
    mr r4, r22
    mr r6, r18
    li r7, 0x2
    li r8, 0x0
    bl fn_8069C3C8
    cmpwi r3, 0x0
    bgt lbl_fn_8069F4D4_00001788
    li r3, 0x0
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_00001788:
    cmpwi r24, 0x0
    bgt lbl_fn_8069F4D4_000016B4
    b lbl_fn_8069F4D4_00001528
lbl_fn_8069F4D4_00001794:
    lwz r18, 0x7d0(r27)
    li r0, 0x0
    addi r17, r1, 0x8
    li r19, 0x0
    stb r0, 0x8(r1)
    stb r0, 0x9(r1)
    b lbl_fn_8069F4D4_000017D4
lbl_fn_8069F4D4_000017B0:
    mr r3, r20
    mr r4, r22
    mr r5, r18
    li r7, 0x1
    li r8, 0x0
    bl fn_8069C3C8
    cmpwi r3, 0x0
    ble lbl_fn_8069F4D4_00001800
    addi r19, r19, 0x1
lbl_fn_8069F4D4_000017D4:
    clrlwi r0, r19, 31
    addi r6, r1, 0x8
    lbzux r0, r6, r0
    cmpwi r0, 0xd
    bne lbl_fn_8069F4D4_000017B0
    subi r0, r19, 0x1
    clrlwi r0, r0, 31
    lbzx r0, r17, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_fn_8069F4D4_000017B0
lbl_fn_8069F4D4_00001800:
    li r0, 0x0
    stw r0, 0x330(r16)
    b lbl_fn_8069F4D4_000018C0
lbl_fn_8069F4D4_0000180C:
    li r18, 0x6
    li r17, 0x200
lbl_fn_8069F4D4_00001814:
    mr r3, r20
    mr r4, r21
    bl fn_8069D580
    cmpwi r3, 0x0
    bne lbl_fn_8069F4D4_00001838
    stw r18, 0x330(r16)
    addi r0, r16, 0x104
    stw r0, 0x28(r21)
    stw r17, 0x1c(r21)
lbl_fn_8069F4D4_00001838:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    bne lbl_fn_8069F4D4_00001860
    lwz r5, 0x7d0(r27)
    mr r3, r20
    mr r4, r22
    li r6, 0x0
    li r7, 0x0
    bl fn_8069B21C
    b lbl_fn_8069F4D4_00001878
lbl_fn_8069F4D4_00001860:
    lwz r5, 0x7d0(r27)
    mr r3, r20
    lwz r6, 0x4(r21)
    mr r4, r22
    li r7, 0x0
    bl fn_8069B21C
lbl_fn_8069F4D4_00001878:
    cmpwi r3, 0x0
    bge lbl_fn_8069F4D4_00001888
    li r3, 0x0
    b lbl_fn_8069F4D4_000018F0
lbl_fn_8069F4D4_00001888:
    bne lbl_fn_8069F4D4_000018A4
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_fn_8069F4D4_000018C0
    li r0, 0x0
    stw r0, 0x330(r16)
    b lbl_fn_8069F4D4_000018C0
lbl_fn_8069F4D4_000018A4:
    lwz r0, 0x4(r21)
    add r0, r0, r3
    stw r0, 0x4(r21)
    lwz r0, 0x8(r21)
    add r0, r0, r3
    stw r0, 0x8(r21)
    b lbl_fn_8069F4D4_00001814
lbl_fn_8069F4D4_000018C0:
    mr r3, r20
    mr r4, r21
    bl fn_806A0DAC
    lwz r0, 0x330(r16)
    mr r4, r3
    cmpwi r0, 0x0
    bne lbl_fn_8069F4D4_000018EC
    cmpwi r3, 0x0
    beq lbl_fn_8069F4D4_000018EC
    mr r3, r20
    bl fn_806A1064
lbl_fn_8069F4D4_000018EC:
    li r3, 0x1
lbl_fn_8069F4D4_000018F0:
    addi r11, r1, 0x60
    bl _restgpr_16
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8069FAC4(void)
{
    nofralloc
    stwu r1, -0x360(r1)
    mflr r0
    stw r0, 0x364(r1)
    addi r11, r1, 0x360
    bl _savegpr_27
    bl fn_806A11D4
    mr r28, r3
    bl fn_806A123C
    mr r27, r3
    mr r3, r28
    bl fn_806A1248
    li r29, -0x1
    mr r28, r3
    stw r29, 0x8(r1)
    addi r3, r1, 0xc
    li r4, 0x100
    bl fn_8069C7BC
    addi r3, r1, 0x10c
    li r4, 0x200
    bl fn_8069C7BC
    li r30, 0x0
    stw r29, 0x31c(r1)
    li r31, 0x1
    stw r29, 0x320(r1)
    stw r30, 0x32c(r1)
    stw r30, 0x340(r1)
    stw r30, 0x344(r1)
    stw r30, 0x33c(r1)
    stw r30, 0x334(r1)
    stw r30, 0x338(r1)
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_00001984:
    lwz r0, 0x33c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8069FAC4_000019DC
    addi r3, r1, 0x8
    bl fn_8069E600
    cmpwi r3, 0x0
    beq lbl_fn_8069FAC4_00001AE8
    lwz r3, 0x0(r28)
    lwz r3, 0xc(r3)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8069FAC4_000019C0
    addi r3, r1, 0x8
    bl fn_8069E480
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_000019C0:
    addi r3, r1, 0x8
    bl fn_8069E6B8
    cmpwi r3, 0x0
    bne lbl_fn_8069FAC4_000019DC
    addi r3, r1, 0x8
    bl fn_8069E480
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_000019DC:
    lwz r0, 0x33c(r1)
    cmpwi r0, 0x1
    bne lbl_fn_8069FAC4_000019EC
    stw r30, 0x33c(r1)
lbl_fn_8069FAC4_000019EC:
    addi r3, r1, 0x8
    bl fn_8069E80C
    cmpwi r3, 0x0
    bne lbl_fn_8069FAC4_00001A08
    addi r3, r1, 0x8
    bl fn_8069E480
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_00001A08:
    addi r3, r1, 0x8
    bl fn_8069E9C8
    cmpwi r3, 0x1
    beq lbl_fn_8069FAC4_00001A30
    bge lbl_fn_8069FAC4_00001A20
    b lbl_fn_8069FAC4_00001A3C
lbl_fn_8069FAC4_00001A20:
    cmpwi r3, 0x3
    bge lbl_fn_8069FAC4_00001A3C
    stw r31, 0x33c(r1)
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_00001A30:
    addi r3, r1, 0x8
    bl fn_8069E480
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_00001A3C:
    addi r3, r1, 0x8
    bl fn_8069EB1C
    cmpwi r3, 0x2
    beq lbl_fn_8069FAC4_00001A6C
    bge lbl_fn_8069FAC4_00001A60
    cmpwi r3, 0x0
    beq lbl_fn_8069FAC4_00001A80
    bge lbl_fn_8069FAC4_00001A74
    b lbl_fn_8069FAC4_00001A80
lbl_fn_8069FAC4_00001A60:
    cmpwi r3, 0x4
    bge lbl_fn_8069FAC4_00001A80
    b lbl_fn_8069FAC4_00001A74
lbl_fn_8069FAC4_00001A6C:
    stw r31, 0x33c(r1)
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_00001A74:
    addi r3, r1, 0x8
    bl fn_8069E480
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_00001A80:
    lwz r3, 0x0(r28)
    lwz r3, 0xc(r3)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8069FAC4_00001AA0
    addi r3, r1, 0x8
    bl fn_8069E480
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_00001AA0:
    addi r3, r1, 0x8
    bl fn_8069EFB8
    cmpwi r3, 0x0
    bne lbl_fn_8069FAC4_00001ABC
    addi r3, r1, 0x8
    bl fn_8069E480
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_00001ABC:
    addi r3, r1, 0x8
    bl fn_8069F1A4
    cmpwi r3, 0x0
    bne lbl_fn_8069FAC4_00001AD8
    addi r3, r1, 0x8
    bl fn_8069E480
    b lbl_fn_8069FAC4_00001AE8
lbl_fn_8069FAC4_00001AD8:
    addi r3, r1, 0x8
    bl fn_8069F4D4
    addi r3, r1, 0x8
    bl fn_8069E480
lbl_fn_8069FAC4_00001AE8:
    lwz r0, 0x7dc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8069FAC4_00001984
    addi r11, r1, 0x360
    bl _restgpr_27
    lwz r0, 0x364(r1)
    mtlr r0
    addi r1, r1, 0x360
    blr
}

asm void fn_8069FCC8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    bl fn_806A11D4
    mr r29, r3
    bl fn_806A123C
    mr r31, r3
    mr r3, r29
    bl fn_806A1258
    lis r30, 0x1
    mr r28, r3
    subi r3, r30, 0x7fa0
    li r4, 0x20
    bl fn_8069A100
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8069FCC8_00001B84
    mr r3, r31
    li r4, 0x1
    bl fn_8069A1A0
    li r3, 0x0
    b lbl_fn_8069FCC8_00001C3C
lbl_fn_8069FCC8_00001B84:
    subi r4, r30, 0x7fa0
    bl fn_8069C7BC
    mr r3, r31
    mr r4, r22
    mr r5, r23
    mr r6, r24
    mr r7, r25
    mr r8, r27
    li r9, 0x0
    li r10, 0x0
    bl fn_8069B284
    cmpwi r3, 0x0
    stw r3, 0x10(r29)
    bne lbl_fn_8069FCC8_00001BCC
    mr r3, r29
    bl fn_8069A15C
    li r3, 0x0
    b lbl_fn_8069FCC8_00001C3C
lbl_fn_8069FCC8_00001BCC:
    lwz r4, 0x2c(r3)
    li r31, 0x0
    li r0, -0x1
    mr r3, r28
    stw r4, 0x14(r29)
    mr r4, r29
    stw r31, 0x0(r29)
    stw r26, 0x1c(r29)
    stw r31, 0x24(r29)
    stw r31, 0x28(r29)
    stw r0, 0x18(r29)
    bl fn_806A0CD4
    li r3, 0xf
    li r0, 0x1
    stw r3, 0x4(r29)
    mr r3, r29
    li r4, 0x0
    stw r31, 0x8(r29)
    stw r0, 0xc(r29)
    bl fn_806A1260
    stw r31, 0x30(r29)
    addis r5, r29, 0x1
    addi r3, r29, 0x40
    addi r4, r30, -0x8000
    stw r31, -0x7fc0(r5)
    stw r31, -0x7fbc(r5)
    bl fn_8069C7BC
    mr r3, r29
lbl_fn_8069FCC8_00001C3C:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069FE10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_806A11D4
    mr r30, r3
    bl fn_806A1258
    mr r4, r31
    bl fn_806A0DB4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8069FE10_00001C94
    li r3, -0x1
    b lbl_fn_8069FE10_00001CC8
lbl_fn_8069FE10_00001C94:
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8069FE10_00001CA8
    li r3, -0x1
    b lbl_fn_8069FE10_00001CC8
lbl_fn_8069FE10_00001CA8:
    mr r3, r30
    bl fn_8069BA88
    cmpwi r3, 0x0
    stw r3, 0x18(r31)
    blt lbl_fn_8069FE10_00001CC4
    li r0, 0x1
    stw r0, 0x0(r31)
lbl_fn_8069FE10_00001CC4:
    li r3, 0x0
lbl_fn_8069FE10_00001CC8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069FE9C(void)
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
    bl fn_806A11D4
    bl fn_806A1258
    mr r31, r3
    mr r4, r28
    bl fn_806A0DB4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8069FE9C_00001D58
    mr r3, r31
    bl fn_806A0D6C
    cmpwi r3, 0x0
    beq lbl_fn_8069FE9C_00001D50
    lwz r0, 0x28(r3)
    stw r0, 0x0(r29)
    lwz r0, 0x1c(r3)
    stw r0, 0x0(r30)
    lwz r3, 0x4(r3)
    b lbl_fn_8069FE9C_00001D5C
lbl_fn_8069FE9C_00001D50:
    li r3, -0x1
    b lbl_fn_8069FE9C_00001D5C
lbl_fn_8069FE9C_00001D58:
    li r3, -0x1
lbl_fn_8069FE9C_00001D5C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069FF38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r31, r3
    mr r4, r30
    bl fn_806A0DB4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8069FF38_00001DD4
    mr r3, r31
    bl fn_806A0D6C
    cmpwi r3, 0x0
    beq lbl_fn_8069FF38_00001DCC
    lwz r3, 0x438(r3)
    b lbl_fn_8069FF38_00001DD8
lbl_fn_8069FF38_00001DCC:
    li r3, 0x0
    b lbl_fn_8069FF38_00001DD8
lbl_fn_8069FF38_00001DD4:
    li r3, 0x0
lbl_fn_8069FF38_00001DD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069FFAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r4, r31
    bl fn_806A0DB4
    cmpwi r3, 0x0
    beq lbl_fn_8069FFAC_00001E24
    lwz r3, 0x4(r3)
    b lbl_fn_8069FFAC_00001E28
lbl_fn_8069FFAC_00001E24:
    li r3, -0x1
lbl_fn_8069FFAC_00001E28:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069FFF8(void)
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
    bl fn_806A11D4
    lwz r0, lbl_808803E8
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_8069FFF8_00001E88
    lwz r3, lbl_8087EDC0
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_808803E8
lbl_fn_8069FFF8_00001E88:
    mr r3, r31
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_8069A1B8
    cntlzw r0, r3
    lwz r31, 0x1c(r1)
    srwi r0, r0, 5
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    neg r3, r0
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A0084(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A11D4
    mr r4, r31
    bl fn_8069A348
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A00B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806A11D4
    bl fn_8069A1B0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A00DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r30, r3
    mr r4, r28
    bl fn_806A0DB4
    cmpwi r31, 0x3
    mr r28, r3
    li r0, 0x0
    beq lbl_fn_806A00DC_000020E0
    bge lbl_fn_806A00DC_00001F80
    cmpwi r31, 0x1
    beq lbl_fn_806A00DC_00001F8C
    bge lbl_fn_806A00DC_00001FEC
    b lbl_fn_806A00DC_000020E0
lbl_fn_806A00DC_00001F80:
    cmpwi r31, 0x5
    bge lbl_fn_806A00DC_000020E0
    b lbl_fn_806A00DC_00002084
lbl_fn_806A00DC_00001F8C:
    cmpwi r3, 0x0
    beq lbl_fn_806A00DC_00001FE0
    mr r3, r30
    mr r4, r28
    bl fn_806A0D34
    cmpwi r3, 0x0
    beq lbl_fn_806A00DC_00001FE0
    lwz r31, 0x254(r3)
    cmpwi r31, 0x0
    beq lbl_fn_806A00DC_00001FE0
    mr r3, r28
    bl fn_8069FF38
    mr r12, r31
    mr r7, r3
    addi r4, r29, 0x4
    addi r5, r29, 0x8
    lwz r3, 0x0(r29)
    lwz r6, 0xc(r29)
    mtctr r12
    bctrl
    b lbl_fn_806A00DC_00001FE4
lbl_fn_806A00DC_00001FE0:
    li r3, -0x1
lbl_fn_806A00DC_00001FE4:
    mr r0, r3
    b lbl_fn_806A00DC_000020E0
lbl_fn_806A00DC_00001FEC:
    cmpwi r3, 0x0
    beq lbl_fn_806A00DC_0000207C
    mr r3, r30
    mr r4, r28
    bl fn_806A0D6C
    cmpwi r3, 0x0
    beq lbl_fn_806A00DC_0000207C
    lwz r30, 0x2c(r3)
    cmpwi r30, 0x0
    beq lbl_fn_806A00DC_0000207C
    lwz r0, 0x0(r29)
    mr r3, r28
    stw r0, 0x8(r1)
    bl fn_806A1270
    mr r31, r3
    mr r3, r28
    bl fn_8069FF38
    lis r6, fn_8069A100@ha
    lis r7, fn_8069A15C@ha
    mr r8, r3
    mr r12, r30
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r29, 0x4
    addi r6, r6, fn_8069A100@l
    addi r7, r7, fn_8069A15C@l
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r29)
    beq lbl_fn_806A00DC_0000207C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806A00DC_0000207C
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_fn_806A00DC_0000207C:
    li r0, 0x0
    b lbl_fn_806A00DC_000020E0
lbl_fn_806A00DC_00002084:
    cmpwi r3, 0x0
    beq lbl_fn_806A00DC_000020DC
    lwz r29, 0x30(r3)
    cmpwi r29, 0x0
    beq lbl_fn_806A00DC_000020DC
    mr r3, r30
    mr r4, r28
    bl fn_806A0D6C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_806A00DC_000020DC
    mr r3, r28
    bl fn_8069FFAC
    mr r30, r3
    mr r3, r28
    bl fn_8069FF38
    mr r12, r29
    mr r5, r3
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
lbl_fn_806A00DC_000020DC:
    li r0, 0x0
lbl_fn_806A00DC_000020E0:
    lwz r31, 0x1c(r1)
    mr r3, r0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
