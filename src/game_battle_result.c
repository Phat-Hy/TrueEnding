#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80129930(void);
extern void fn_80129954(void);
extern void fn_80129978(void);
extern void fn_80129A48(void);
extern void fn_8016E970(void);
extern void fn_801A0BA8(void);
extern void fn_801A17A4(void);
extern void fn_801B2888(void);
extern void fn_801B2984(void);
extern void fn_801C1DCC(void);
extern void fn_80219558(void);
extern void fn_803761DC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F098;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881978;
extern u32 lbl_80881994;
extern u32 lbl_808819A8;
extern u32 lbl_808819B0;
extern u32 lbl_808819DC;
extern u32 lbl_808819F8;
extern u32 lbl_80881A00;
extern u32 lbl_80881A0C;
extern u32 lbl_80881A54;
extern u32 lbl_80881A5C;
extern u32 lbl_80881A9C;
extern u32 lbl_80881B00;
extern u32 lbl_80881B48;
extern u32 lbl_80881B4C;
extern u32 lbl_80881B50;

/* Function declarations */
void fn_801749EC(void);
void fn_80174E04(void);
void fn_801750FC(void);
void fn_8017518C(void);
void fn_8017547C(void);
void fn_80175A38(void);
void fn_80175AEC(void);
void fn_80175B18(void);

asm void fn_801749EC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lwz r0, 0x48(r3)
    lis r31, lbl_8077A720@ha
    mr r29, r3
    mr r26, r4
    cmpwi r0, 0x0
    mr r27, r5
    addi r31, r31, lbl_8077A720@l
    beq lbl_fn_801749EC_0000003C
    li r3, 0x0
    b lbl_fn_801749EC_00000400
lbl_fn_801749EC_0000003C:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_801749EC_00000050
    cmpwi r0, 0x8
    bne lbl_fn_801749EC_00000058
lbl_fn_801749EC_00000050:
    li r3, 0x0
    b lbl_fn_801749EC_00000400
lbl_fn_801749EC_00000058:
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801749EC_00000070
    lwz r0, 0x139c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801749EC_00000078
lbl_fn_801749EC_00000070:
    li r3, 0x0
    b lbl_fn_801749EC_00000400
lbl_fn_801749EC_00000078:
    mr r3, r27
    bl fn_805F9940
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    bge lbl_fn_801749EC_00000094
    li r3, 0x0
    b lbl_fn_801749EC_00000400
lbl_fn_801749EC_00000094:
    psq_l f1, 0x0(r26), 0, 0
    addi r5, r1, 0x44
    lfs f2, 0x8(r26)
    addi r6, r1, 0x38
    stfs f2, 0x4c(r1)
    li r4, 0x0
    lfs f3, lbl_80881978
    lis r7, 0x8000
    psq_st f1, 0x0(r5), 0, 0
    li r8, 0x0
    lfs f0, lbl_808819F8
    li r9, 0x0
    lfs f6, 0x44(r1)
    lfs f4, 0x0(r27)
    lfs f5, 0x48(r1)
    fadds f4, f6, f4
    lwz r3, lbl_8087EE98
    stfs f4, 0x44(r1)
    lfs f4, 0x4(r27)
    fadds f4, f5, f4
    stfs f4, 0x48(r1)
    fadds f4, f4, f3
    lfs f3, 0x8(r27)
    psq_l f1, 0x0(r5), 0, 0
    fadds f2, f2, f3
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x3c(r1)
    stfs f2, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f2, 0x40(r1)
    stfs f4, 0x48(r1)
    stfs f0, 0x3c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_801749EC_000003FC
    lis r5, lbl_80737A9C@ha
    li r3, 0x3c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801749EC_00000184
    psq_l f1, 0x0(r27), 0, 0
    addi r28, r1, 0x2c
    lfs f2, 0x8(r27)
    mr r3, r28
    stfs f2, 0x34(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F98D0
    mr r3, r30
    mr r4, r29
    mr r5, r26
    mr r6, r28
    bl fn_801C1DCC
    mr r30, r3
lbl_fn_801749EC_00000184:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801749EC_00000214
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801749EC_000001BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_801749EC_000001D8
lbl_fn_801749EC_000001BC:
    addi r3, r31, 0x1ba8
    lwz r5, 0x1ba8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_801749EC_000001D8:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x8
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801749EC_00000214
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801749EC_00000214:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801749EC_000003C8
    cmpwi r0, 0x8
    beq lbl_fn_801749EC_0000022C
    stw r0, 0x564(r29)
lbl_fn_801749EC_0000022C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801749EC_000003C8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801749EC_00000264
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_801749EC_00000280
lbl_fn_801749EC_00000264:
    addi r3, r31, 0x1bb4
    lwz r5, 0x1bb4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_801749EC_00000280:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x20
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801749EC_000002BC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801749EC_000002BC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801749EC_00000398
    cmpwi r0, 0x8
    beq lbl_fn_801749EC_000002D4
    stw r0, 0x564(r29)
lbl_fn_801749EC_000002D4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801749EC_00000398
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801749EC_0000030C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_801749EC_00000328
lbl_fn_801749EC_0000030C:
    addi r3, r31, 0x1bc0
    lwz r5, 0x1bc0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_801749EC_00000328:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x14
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801749EC_00000364
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801749EC_00000364:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801749EC_00000398
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801749EC_00000398:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801749EC_000003C8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801749EC_000003C8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801749EC_000003F4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801749EC_000003F4:
    li r3, 0x1
    b lbl_fn_801749EC_00000400
lbl_fn_801749EC_000003FC:
    li r3, 0x0
lbl_fn_801749EC_00000400:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80174E04(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r6, r5
    stw r30, 0x58(r1)
    addi r31, r31, lbl_8077A720@l
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x10
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80174E04_00000480
    mr r4, r29
    mr r5, r28
    bl fn_801A0BA8
    mr r30, r3
lbl_fn_80174E04_00000480:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80174E04_00000510
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80174E04_000004B8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80174E04_000004D4
lbl_fn_80174E04_000004B8:
    addi r3, r31, 0x1bcc
    lwz r5, 0x1bcc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80174E04_000004D4:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80174E04_00000510
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80174E04_00000510:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80174E04_000006C4
    cmpwi r0, 0x8
    beq lbl_fn_80174E04_00000528
    stw r0, 0x564(r29)
lbl_fn_80174E04_00000528:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80174E04_000006C4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80174E04_00000560
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80174E04_0000057C
lbl_fn_80174E04_00000560:
    addi r3, r31, 0x1bd8
    lwz r5, 0x1bd8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80174E04_0000057C:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80174E04_000005B8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80174E04_000005B8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80174E04_00000694
    cmpwi r0, 0x8
    beq lbl_fn_80174E04_000005D0
    stw r0, 0x564(r29)
lbl_fn_80174E04_000005D0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80174E04_00000694
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80174E04_00000608
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80174E04_00000624
lbl_fn_80174E04_00000608:
    addi r3, r31, 0x1be4
    lwz r5, 0x1be4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80174E04_00000624:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80174E04_00000660
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80174E04_00000660:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80174E04_00000694
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80174E04_00000694:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80174E04_000006C4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80174E04_000006C4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80174E04_000006F0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80174E04_000006F0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801750FC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r4, 0x1208(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801750FC_00000788
    lfs f0, lbl_8088196C
    li r31, 0x0
    stw r3, 0x18(r1)
    li r0, 0x3
    mr r3, r4
    addi r4, r1, 0x8
    stw r31, 0xc(r1)
    stw r31, 0x10(r1)
    stw r31, 0x14(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r30)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r31, 0x1208(r30)
lbl_fn_801750FC_00000788:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8017518C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r5, r4, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    stw r30, 0x58(r1)
    li r4, 0x0
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x18
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8017518C_00000804
    lfs f1, 0xf78(r29)
    mr r4, r29
    addi r5, r29, 0xf6c
    bl fn_801A17A4
    mr r30, r3
lbl_fn_8017518C_00000804:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017518C_00000894
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017518C_0000083C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8017518C_00000858
lbl_fn_8017518C_0000083C:
    addi r3, r31, 0x1bf0
    lwz r5, 0x1bf0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8017518C_00000858:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017518C_00000894
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017518C_00000894:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8017518C_00000A48
    cmpwi r0, 0x8
    beq lbl_fn_8017518C_000008AC
    stw r0, 0x564(r29)
lbl_fn_8017518C_000008AC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017518C_00000A48
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017518C_000008E4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8017518C_00000900
lbl_fn_8017518C_000008E4:
    addi r3, r31, 0x1bfc
    lwz r5, 0x1bfc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8017518C_00000900:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017518C_0000093C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017518C_0000093C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8017518C_00000A18
    cmpwi r0, 0x8
    beq lbl_fn_8017518C_00000954
    stw r0, 0x564(r29)
lbl_fn_8017518C_00000954:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017518C_00000A18
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017518C_0000098C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8017518C_000009A8
lbl_fn_8017518C_0000098C:
    addi r3, r31, 0x1c08
    lwz r5, 0x1c08(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8017518C_000009A8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017518C_000009E4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017518C_000009E4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017518C_00000A18
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017518C_00000A18:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017518C_00000A48
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017518C_00000A48:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8017518C_00000A74
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017518C_00000A74:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8017547C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    mr r29, r4
    stw r28, 0xa0(r1)
    mr r28, r3
    beq lbl_fn_8017547C_0000102C
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8017547C_0000102C
    lis r5, lbl_80737A9C@ha
    li r3, 0x8
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8017547C_00000B10
    mr r4, r28
    mr r5, r29
    bl fn_801B2888
    mr r30, r3
lbl_fn_8017547C_00000B10:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8017547C_00000BA0
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8017547C_00000B48
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_8017547C_00000B64
lbl_fn_8017547C_00000B48:
    addi r3, r31, 0x1c14
    lwz r5, 0x1c14(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_8017547C_00000B64:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017547C_00000BA0
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000BA0:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8017547C_00000D54
    cmpwi r0, 0x8
    beq lbl_fn_8017547C_00000BB8
    stw r0, 0x564(r28)
lbl_fn_8017547C_00000BB8:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8017547C_00000D54
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8017547C_00000BF0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_8017547C_00000C0C
lbl_fn_8017547C_00000BF0:
    addi r3, r31, 0x1c20
    lwz r5, 0x1c20(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_8017547C_00000C0C:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x44
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017547C_00000C48
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000C48:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8017547C_00000D24
    cmpwi r0, 0x8
    beq lbl_fn_8017547C_00000C60
    stw r0, 0x564(r28)
lbl_fn_8017547C_00000C60:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8017547C_00000D24
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8017547C_00000C98
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_8017547C_00000CB4
lbl_fn_8017547C_00000C98:
    addi r3, r31, 0x1c2c
    lwz r5, 0x1c2c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_8017547C_00000CB4:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x38
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017547C_00000CF0
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000CF0:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8017547C_00000D24
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000D24:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8017547C_00000D54
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000D54:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_8017547C_00000D80
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000D80:
    lis r5, lbl_80737A9C@ha
    li r3, 0x8
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8017547C_00000DBC
    mr r4, r29
    mr r5, r28
    bl fn_801B2984
    mr r30, r3
lbl_fn_8017547C_00000DBC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017547C_00000E4C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017547C_00000DF4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x74(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_8017547C_00000E10
lbl_fn_8017547C_00000DF4:
    addi r3, r31, 0x1c38
    lwz r5, 0x1c38(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
lbl_fn_8017547C_00000E10:
    lwz r5, 0x74(r1)
    addi r3, r1, 0x20
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017547C_00000E4C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000E4C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8017547C_00001000
    cmpwi r0, 0x8
    beq lbl_fn_8017547C_00000E64
    stw r0, 0x564(r29)
lbl_fn_8017547C_00000E64:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017547C_00001000
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017547C_00000E9C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x80(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
    b lbl_fn_8017547C_00000EB8
lbl_fn_8017547C_00000E9C:
    addi r3, r31, 0x1c44
    lwz r5, 0x1c44(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_8017547C_00000EB8:
    lwz r5, 0x80(r1)
    addi r3, r1, 0x8
    lwz r4, 0x84(r1)
    lwz r0, 0x88(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017547C_00000EF4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000EF4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8017547C_00000FD0
    cmpwi r0, 0x8
    beq lbl_fn_8017547C_00000F0C
    stw r0, 0x564(r29)
lbl_fn_8017547C_00000F0C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017547C_00000FD0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017547C_00000F44
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x8c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    b lbl_fn_8017547C_00000F60
lbl_fn_8017547C_00000F44:
    addi r3, r31, 0x1c50
    lwz r5, 0x1c50(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
lbl_fn_8017547C_00000F60:
    lwz r5, 0x8c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017547C_00000F9C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000F9C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017547C_00000FD0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00000FD0:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017547C_00001000
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_00001000:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8017547C_0000102C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017547C_0000102C:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80175A38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80881964
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x1
    lfs f1, lbl_8088196C
    li r5, 0x2e
    stw r31, 0xc(r1)
    li r6, 0x0
    lfs f2, lbl_80881994
    li r7, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    li r8, 0x1
    lwz r31, 0xf54(r3)
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    stfs f0, 0x2fc(r31)
    bl fn_80097C08
    lfs f0, lbl_80881964
    addi r3, r31, 0xb0
    stfs f0, 0x2e8(r31)
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x2e4(r31)
    li r0, 0x0
    lwz r3, 0xf80(r31)
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_80175A38_000010DC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80175A38_000010DC:
    li r0, 0x0
    stw r0, 0xf50(r31)
    stw r0, 0xf54(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80175AEC(void)
{
    nofralloc
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80175AEC_00001124
    lwz r3, 0x560(r3)
    subi r0, r3, 0x74
    cmplwi r0, 0x3
    bgt lbl_fn_80175AEC_00001124
    li r3, 0x1
    blr
lbl_fn_80175AEC_00001124:
    li r3, 0x0
    blr
}

asm void fn_80175B18(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x100
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x12a4(r3)
    fmr f31, f1
    mr r29, r3
    extrwi. r0, r0, 1, 7
    beq lbl_fn_80175B18_00001990
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x8
    beq lbl_fn_80175B18_00001990
    cmpwi r0, 0x6
    bne lbl_fn_80175B18_0000118C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x2f
    beq lbl_fn_80175B18_00001990
    lfs f1, lbl_80881A00
    addi r3, r3, 0x10d8
    bl fn_80129A48
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_0000118C:
    lwz r0, 0x12bc(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80175B18_000011C4
    lfs f3, 0x580(r3)
    lfs f4, lbl_808819A8
    lfs f0, 0x584(r3)
    fmuls f3, f3, f4
    lfs f1, lbl_80881A00
    fmuls f0, f0, f4
    stfs f3, 0x580(r3)
    stfs f0, 0x584(r3)
    addi r3, r3, 0x10d8
    bl fn_80129A48
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_000011C4:
    lwz r4, 0x48(r3)
    li r0, 0x1
    cmpwi r4, 0x1
    beq lbl_fn_80175B18_000011E0
    cmpwi r4, 0x4
    beq lbl_fn_80175B18_000011E0
    li r0, 0x0
lbl_fn_80175B18_000011E0:
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_00001204
    lwz r0, 0xc54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80175B18_00001204
    lwz r0, 0x137c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80175B18_00001990
lbl_fn_80175B18_00001204:
    lwz r25, 0xfc4(r3)
    cmpwi r25, 0x0
    beq lbl_fn_80175B18_00001214
    b lbl_fn_80175B18_00001218
lbl_fn_80175B18_00001214:
    lwz r25, 0xfc0(r3)
lbl_fn_80175B18_00001218:
    cmpwi r4, 0x0
    bne lbl_fn_80175B18_00001290
    cmpwi r25, 0x0
    beq lbl_fn_80175B18_00001290
    lis r4, lbl_80737A9C@ha
    addi r27, r25, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    mr r3, r27
    addi r4, r4, 0x5b
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80175B18_00001254
    li r0, 0x0
    b lbl_fn_80175B18_00001260
lbl_fn_80175B18_00001254:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r0, r3, r0
lbl_fn_80175B18_00001260:
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_00001290
    lis r5, lbl_80737A9C@ha
    lis r6, lbl_807C7030@ha
    addi r5, r5, lbl_80737A9C@l
    lfs f1, lbl_80881A00
    addi r3, r29, 0x10d8
    addi r4, r25, 0xb0
    addi r5, r5, 0x5b
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_00001290:
    lwz r0, 0x139c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_0000133C
    lwz r3, 0x12a4(r29)
    srwi. r0, r3, 31
    beq lbl_fn_80175B18_0000132C
    extrwi. r0, r3, 1, 2
    beq lbl_fn_80175B18_000012B8
    lfs f3, lbl_80881B48
    b lbl_fn_80175B18_000012BC
lbl_fn_80175B18_000012B8:
    lfs f3, lbl_80881994
lbl_fn_80175B18_000012BC:
    lwz r0, 0x12a4(r29)
    lfs f0, lbl_80881A0C
    extrwi. r0, r0, 1, 1
    fmuls f5, f0, f3
    beq lbl_fn_80175B18_000012FC
    lfs f0, lbl_808819B0
    addi r3, r29, 0x10d8
    lfs f3, lbl_8088196C
    addi r4, r1, 0x50
    fmuls f0, f0, f5
    stfs f3, 0x50(r1)
    lfs f1, lbl_80881A00
    stfs f0, 0x54(r1)
    stfs f3, 0x58(r1)
    bl fn_80129954
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_000012FC:
    lfs f0, lbl_80881978
    addi r3, r29, 0x10d8
    lfs f4, lbl_80881B4C
    addi r4, r1, 0x44
    fmuls f3, f0, f5
    lfs f0, lbl_8088196C
    stfs f4, 0x44(r1)
    lfs f1, lbl_80881A00
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    bl fn_80129954
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_0000132C:
    lfs f1, lbl_80881A00
    addi r3, r29, 0x10d8
    bl fn_80129A48
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_0000133C:
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80175B18_00001358
    lfs f1, lbl_80881A00
    addi r3, r29, 0x10d8
    bl fn_80129A48
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_00001358:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80175B18_00001990
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80175B18_00001374
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_00001374:
    lwz r4, 0x48(r29)
    cmpwi r4, 0x0
    bne lbl_fn_80175B18_000013AC
    lwz r0, 0x868(r3)
    cmpwi r0, 0x9
    bne lbl_fn_80175B18_000013AC
    lfs f3, lbl_80881A54
    addi r3, r29, 0x10d8
    lfs f0, lbl_8088196C
    stfs f3, 0x580(r29)
    lfs f1, lbl_80881964
    stfs f0, 0x584(r29)
    bl fn_80129A48
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_000013AC:
    lwz r3, lbl_8087EFA8
    lfs f0, 0x21c(r3)
    fmuls f0, f0, f0
    fcmpo cr0, f31, f0
    ble lbl_fn_80175B18_000013D0
    lfs f1, lbl_80881A00
    addi r3, r29, 0x10d8
    bl fn_80129A48
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_000013D0:
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_80175B18_000014E0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_000014E0
    cmpwi r4, 0x1
    li r0, 0x0
    beq lbl_fn_80175B18_000013FC
    cmpwi r4, 0x4
    bne lbl_fn_80175B18_00001400
lbl_fn_80175B18_000013FC:
    li r0, 0x1
lbl_fn_80175B18_00001400:
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_000014E0
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x38
    lfs f0, 0x530(r29)
    lwz r25, 0x48(r4)
    lfs f4, 0x52c(r29)
    lfs f6, 0x530(r25)
    lfs f5, 0x52c(r25)
    fsubs f6, f6, f0
    lfs f3, 0x528(r25)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F9920
    lwz r3, lbl_8087F408
    fmr f31, f1
    lwz r26, 0x48(r3)
    b lbl_fn_80175B18_000014A4
lbl_fn_80175B18_00001458:
    lfs f3, 0x530(r26)
    addi r3, r1, 0x2c
    lfs f0, 0x530(r29)
    lfs f5, 0x52c(r26)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r26)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    ble lbl_fn_80175B18_000014A0
    fmr f31, f1
    mr r25, r26
lbl_fn_80175B18_000014A0:
    lwz r26, 0x14ac(r26)
lbl_fn_80175B18_000014A4:
    cmpwi r26, 0x0
    bne lbl_fn_80175B18_00001458
    lfs f0, lbl_80881B00
    fcmpo cr0, f31, f0
    bge lbl_fn_80175B18_000014E0
    lis r5, lbl_80737A9C@ha
    lis r6, lbl_807C7030@ha
    addi r5, r5, lbl_80737A9C@l
    lfs f1, lbl_80881A00
    addi r3, r29, 0x10d8
    addi r4, r25, 0xb0
    addi r5, r5, 0x5b
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    b lbl_fn_80175B18_00001990
lbl_fn_80175B18_000014E0:
    lwz r3, lbl_8087F430
    addi r27, r1, 0xa4
    lfs f31, lbl_808819DC
    li r31, 0x0
    lwz r26, 0x10d8(r3)
    li r30, 0x0
    li r28, 0x0
    b lbl_fn_80175B18_0000161C
lbl_fn_80175B18_00001500:
    lwz r0, 0x100(r26)
    add r25, r0, r28
    lwz r7, 0x38(r25)
    lwz r24, 0x18(r25)
    psq_l f1, 0x4(r25), 0, 0
    lfs f2, 0xc(r25)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r27), 0, 0
    lwz r5, 0x3c(r25)
    cmpwi r5, 0x0
    ble lbl_fn_80175B18_000015A8
    lwz r0, 0xfc(r26)
    li r3, 0x0
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80175B18_0000156C
lbl_fn_80175B18_00001544:
    lwz r6, 0x100(r26)
    lwzx r0, r6, r4
    cmpw r5, r0
    bne lbl_fn_80175B18_00001560
    slwi r0, r3, 6
    add r3, r6, r0
    b lbl_fn_80175B18_00001570
lbl_fn_80175B18_00001560:
    addi r4, r4, 0x40
    addi r3, r3, 0x1
    bdnz lbl_fn_80175B18_00001544
lbl_fn_80175B18_0000156C:
    li r3, 0x0
lbl_fn_80175B18_00001570:
    cmpwi r3, 0x0
    beq lbl_fn_80175B18_000015A8
    cmpwi r7, 0x0
    li r7, 0x0
    beq lbl_fn_80175B18_00001594
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_00001594
    li r7, 0x1
lbl_fn_80175B18_00001594:
    lwz r24, 0x18(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r27), 0, 0
lbl_fn_80175B18_000015A8:
    cmpwi r7, 0x0
    beq lbl_fn_80175B18_00001614
    cmpw r24, r31
    ble lbl_fn_80175B18_00001614
    lfs f3, 0xc(r25)
    addi r3, r1, 0x98
    lfs f0, 0x530(r29)
    lfs f5, 0x8(r25)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x4(r25)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0x98(r1)
    stfs f6, 0xa0(r1)
    bl fn_805F9940
    lfs f0, 0x14(r25)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_80175B18_00001614
    lfs f1, lbl_80881A00
    addi r3, r29, 0x10d8
    addi r4, r1, 0xa4
    bl fn_80129930
    mr r31, r24
lbl_fn_80175B18_00001614:
    addi r30, r30, 0x1
    addi r28, r28, 0x40
lbl_fn_80175B18_0000161C:
    lwz r0, 0xfc(r26)
    cmplw r30, r0
    blt lbl_fn_80175B18_00001500
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80175B18_00001728
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_80175B18_00001648
    lwz r24, 0x48(r3)
    b lbl_fn_80175B18_0000164C
lbl_fn_80175B18_00001648:
    li r24, 0x0
lbl_fn_80175B18_0000164C:
    lfs f31, lbl_80881A9C
    lis r28, 0xf
    b lbl_fn_80175B18_00001720
lbl_fn_80175B18_00001658:
    lwz r0, 0x38(r24)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80175B18_0000171C
    lwz r0, 0x9c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_0000171C
    lwz r3, 0x48(r24)
    addis r0, r3, 0x0
    cmplwi r0, 0x8534
    bne lbl_fn_80175B18_0000171C
    lwz r3, 0x54(r24)
    li r0, 0x0
    cmpwi r3, 0x0
    blt lbl_fn_80175B18_000016A0
    cmpwi r3, 0x7
    bge lbl_fn_80175B18_000016A0
    li r0, 0x1
lbl_fn_80175B18_000016A0:
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_000016BC
    mulli r0, r3, 0x28
    add r3, r24, r0
    lwz r0, 0x52c(r3)
    extrwi r0, r0, 1, 25
    b lbl_fn_80175B18_000016C0
lbl_fn_80175B18_000016BC:
    li r0, 0x0
lbl_fn_80175B18_000016C0:
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_0000171C
    lfs f3, 0x530(r29)
    addi r3, r1, 0x20
    lfs f0, 0x74(r24)
    lfs f5, 0x52c(r29)
    fsubs f6, f3, f0
    lfs f4, 0x70(r24)
    lfs f3, 0x528(r29)
    lfs f0, 0x6c(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bgt lbl_fn_80175B18_0000171C
    lfs f1, lbl_80881A00
    addi r3, r29, 0x10d8
    addi r4, r24, 0x6c
    bl fn_80129930
    addi r31, r28, 0x423f
lbl_fn_80175B18_0000171C:
    lwz r24, 0x5c(r24)
lbl_fn_80175B18_00001720:
    cmpwi r24, 0x0
    bne lbl_fn_80175B18_00001658
lbl_fn_80175B18_00001728:
    cmpwi r31, 0x0
    bne lbl_fn_80175B18_0000197C
    lwz r3, 0x48(r29)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_80175B18_0000174C
    cmpwi r3, 0x4
    beq lbl_fn_80175B18_0000174C
    li r0, 0x0
lbl_fn_80175B18_0000174C:
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_0000197C
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x8c
    lfs f0, 0x530(r29)
    lwz r24, 0x48(r4)
    lfs f4, 0x52c(r29)
    lfs f6, 0x530(r24)
    lfs f5, 0x52c(r24)
    fsubs f6, f6, f0
    lfs f3, 0x528(r24)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0x94(r1)
    bl fn_805F9920
    lfs f0, lbl_80881B50
    fcmpo cr0, f1, f0
    bge lbl_fn_80175B18_0000197C
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    ble lbl_fn_80175B18_0000197C
    addi r3, r1, 0x8c
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_8088196C
    addi r3, r1, 0xb0
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0xb0
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x8c
    addi r4, r1, 0x14
    bl fn_805F9990
    lfs f0, lbl_80881A5C
    fcmpo cr0, f1, f0
    ble lbl_fn_80175B18_0000197C
    lwz r3, lbl_8087F430
    bl fn_803761DC
    mr r25, r3
    lwz r3, 0x50(r29)
    bl fn_80219558
    cmpwi r3, 0x0
    li r0, 0x0
    blt lbl_fn_80175B18_00001830
    cmpwi r3, 0x7
    bge lbl_fn_80175B18_00001830
    li r0, 0x1
lbl_fn_80175B18_00001830:
    cmpwi r0, 0x0
    beq lbl_fn_80175B18_0000183C
    li r25, 0x2
lbl_fn_80175B18_0000183C:
    cmpwi r25, 0x1
    beq lbl_fn_80175B18_0000197C
    cmpwi r25, 0x2
    blt lbl_fn_80175B18_00001878
    lis r5, lbl_80737A9C@ha
    lis r6, lbl_807C7030@ha
    addi r5, r5, lbl_80737A9C@l
    lfs f1, lbl_80881A00
    addi r3, r29, 0x10d8
    addi r4, r24, 0xb0
    addi r5, r5, 0x5b
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    li r31, 0x1
    b lbl_fn_80175B18_0000197C
lbl_fn_80175B18_00001878:
    lwz r0, 0x520(r29)
    cmpwi r0, 0x0
    bge lbl_fn_80175B18_0000188C
    li r3, 0x0
    b lbl_fn_80175B18_00001898
lbl_fn_80175B18_0000188C:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r29)
    add r3, r3, r0
lbl_fn_80175B18_00001898:
    lwz r0, 0x520(r24)
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f4, 0xc(r3)
    stfs f4, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    bge lbl_fn_80175B18_000018C4
    li r5, 0x0
    b lbl_fn_80175B18_000018D0
lbl_fn_80175B18_000018C4:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r24)
    add r5, r3, r0
lbl_fn_80175B18_000018D0:
    lfs f4, 0x2c(r5)
    addi r3, r1, 0x68
    lfs f6, 0xc(r5)
    mr r4, r3
    lfs f3, 0x88(r1)
    lfs f0, 0x80(r1)
    lfs f5, 0x1c(r5)
    fsubs f3, f3, f4
    fsubs f7, f0, f6
    lfs f0, lbl_8088196C
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f7, 0x68(r1)
    stfs f3, 0x70(r1)
    stfs f0, 0x6c(r1)
    bl fn_805F98D0
    lfs f4, lbl_808819B0
    addi r3, r29, 0x10d8
    lfs f0, 0x6c(r1)
    addi r4, r1, 0x5c
    lfs f5, 0x70(r1)
    fmuls f6, f0, f4
    lfs f3, 0x68(r1)
    lfs f0, 0x84(r1)
    fmuls f5, f5, f4
    fmuls f7, f3, f4
    lfs f4, 0x88(r1)
    fadds f8, f0, f6
    lfs f3, 0x80(r1)
    lfs f0, lbl_80881964
    fadds f4, f4, f5
    fadds f3, f3, f7
    stfs f7, 0x8(r1)
    fsubs f0, f8, f0
    stfs f6, 0xc(r1)
    lfs f1, lbl_80881A00
    stfs f5, 0x10(r1)
    stfs f3, 0x5c(r1)
    stfs f4, 0x64(r1)
    stfs f0, 0x60(r1)
    bl fn_80129930
    li r31, 0x1
lbl_fn_80175B18_0000197C:
    cmpwi r31, 0x0
    bne lbl_fn_80175B18_00001990
    lfs f1, lbl_80881A00
    addi r3, r29, 0x10d8
    bl fn_80129A48
lbl_fn_80175B18_00001990:
    addi r11, r1, 0x100
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    bl _restgpr_24
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}
