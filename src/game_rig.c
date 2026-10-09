#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800499D0(void);
extern void fn_80049A28(void);
extern void fn_80084320(void);
extern void fn_8008BBD8(void);
extern void fn_800C7DC4(void);
extern void fn_800C8078(void);
extern void fn_800C81CC(void);
extern void fn_800CB7F0(void);
extern void fn_800CB7F4(void);
extern void fn_800CB7F8(void);
extern void fn_800CB7FC(void);
extern void fn_800CDD40(void);
extern void fn_800CDD4C(void);
extern void fn_800D0180(void);
extern void fn_800D0198(void);
extern void fn_800D07E8(void);
extern void fn_800D07FC(void);
extern void fn_800D0DB0(void);
extern void fn_800D0F34(void);
extern void fn_800D10B8(void);
extern void fn_800D1430(void);
extern void fn_806958E0(void);

/* External data declarations */
extern u8 lbl_80734440[];
extern u8 lbl_80779698[];
extern u8 lbl_807C75C0[];
extern u8 lbl_807C75C8[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087EFEE;
extern u32 lbl_8087EFEF;
extern u32 lbl_80881188;
extern u32 lbl_8088118C;
extern u32 lbl_80881190;
extern u32 lbl_80881194;
extern u32 lbl_80881198;
extern u32 lbl_8088119C;
extern u32 lbl_808811A0;

/* Function declarations */
void fn_800CB800(void);
void fn_800CBE8C(void);
void fn_800CC518(void);
void fn_800CCBA4(void);
void fn_800CCBF8(void);

asm void fn_800CB800(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r30, lbl_8087EFE8
    cmpwi r30, 0x0
    beq lbl_fn_800CB800_00000670
    lwz r31, 0x0(r3)
    lwz r4, 0x4(r3)
    cmpwi r31, 0x0
    blt lbl_fn_800CB800_00000040
    cmpwi r31, 0x8
    blt lbl_fn_800CB800_00000048
lbl_fn_800CB800_00000040:
    li r3, 0x0
    b lbl_fn_800CB800_00000054
lbl_fn_800CB800_00000048:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CB800_00000054:
    cmpwi r3, 0x0
    beq lbl_fn_800CB800_00000168
    stw r4, 0x4(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x68(r1)
    extsb. r0, r0
    stw r4, 0x6c(r1)
    stw r4, 0xd0(r1)
    bne lbl_fn_800CB800_000000AC
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CB800_000000AC:
    lwz r4, 0x68(r1)
    addi r3, r1, 0x70
    lwz r0, 0x6c(r1)
    stw r4, 0x70(r1)
    stw r0, 0x74(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CB800_000000F8
    addic. r0, r1, 0xd4
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    beq lbl_fn_800CB800_000000F0
    stw r3, 0xd4(r1)
    stw r0, 0xd8(r1)
lbl_fn_800CB800_000000F0:
    li r0, 0x1
    b lbl_fn_800CB800_000000FC
lbl_fn_800CB800_000000F8:
    li r0, 0x0
lbl_fn_800CB800_000000FC:
    cmpwi r0, 0x0
    beq lbl_fn_800CB800_00000114
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xd0(r1)
    b lbl_fn_800CB800_0000011C
lbl_fn_800CB800_00000114:
    li r0, 0x0
    stw r0, 0xd0(r1)
lbl_fn_800CB800_0000011C:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xd0
    bl fn_800D0DB0
    addic. r3, r1, 0xd0
    beq lbl_fn_800CB800_00000168
    lwz r4, 0xd0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CB800_00000168
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CB800_00000160
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CB800_00000160:
    li r0, 0x0
    stw r0, 0xd0(r1)
lbl_fn_800CB800_00000168:
    lwz r31, 0x0(r29)
    lfs f0, 0x8(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CB800_00000184
    cmpwi r31, 0x8
    blt lbl_fn_800CB800_0000018C
lbl_fn_800CB800_00000184:
    li r3, 0x0
    b lbl_fn_800CB800_00000198
lbl_fn_800CB800_0000018C:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CB800_00000198:
    cmpwi r3, 0x0
    beq lbl_fn_800CB800_000002AC
    stfs f0, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x50(r1)
    extsb. r0, r0
    stw r4, 0x54(r1)
    stw r4, 0xbc(r1)
    bne lbl_fn_800CB800_000001F0
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CB800_000001F0:
    lwz r4, 0x50(r1)
    addi r3, r1, 0x58
    lwz r0, 0x54(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CB800_0000023C
    addic. r0, r1, 0xc0
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    beq lbl_fn_800CB800_00000234
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
lbl_fn_800CB800_00000234:
    li r0, 0x1
    b lbl_fn_800CB800_00000240
lbl_fn_800CB800_0000023C:
    li r0, 0x0
lbl_fn_800CB800_00000240:
    cmpwi r0, 0x0
    beq lbl_fn_800CB800_00000258
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xbc(r1)
    b lbl_fn_800CB800_00000260
lbl_fn_800CB800_00000258:
    li r0, 0x0
    stw r0, 0xbc(r1)
lbl_fn_800CB800_00000260:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xbc
    bl fn_800D0DB0
    addic. r3, r1, 0xbc
    beq lbl_fn_800CB800_000002AC
    lwz r4, 0xbc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CB800_000002AC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CB800_000002A4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CB800_000002A4:
    li r0, 0x0
    stw r0, 0xbc(r1)
lbl_fn_800CB800_000002AC:
    lwz r31, 0x0(r29)
    lfs f0, 0xc(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CB800_000002C8
    cmpwi r31, 0x8
    blt lbl_fn_800CB800_000002D0
lbl_fn_800CB800_000002C8:
    li r3, 0x0
    b lbl_fn_800CB800_000002DC
lbl_fn_800CB800_000002D0:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CB800_000002DC:
    cmpwi r3, 0x0
    beq lbl_fn_800CB800_000003F0
    stfs f0, 0xc(r3)
    li r4, 0x0
    lis r3, fn_800CB7F4@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F4@l
    stw r3, 0x38(r1)
    extsb. r0, r0
    stw r4, 0x3c(r1)
    stw r4, 0xa8(r1)
    bne lbl_fn_800CB800_00000334
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CB800_00000334:
    lwz r4, 0x38(r1)
    addi r3, r1, 0x40
    lwz r0, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CB800_00000380
    addic. r0, r1, 0xac
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    beq lbl_fn_800CB800_00000378
    stw r3, 0xac(r1)
    stw r0, 0xb0(r1)
lbl_fn_800CB800_00000378:
    li r0, 0x1
    b lbl_fn_800CB800_00000384
lbl_fn_800CB800_00000380:
    li r0, 0x0
lbl_fn_800CB800_00000384:
    cmpwi r0, 0x0
    beq lbl_fn_800CB800_0000039C
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xa8(r1)
    b lbl_fn_800CB800_000003A4
lbl_fn_800CB800_0000039C:
    li r0, 0x0
    stw r0, 0xa8(r1)
lbl_fn_800CB800_000003A4:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xa8
    bl fn_800D0DB0
    addic. r3, r1, 0xa8
    beq lbl_fn_800CB800_000003F0
    lwz r4, 0xa8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CB800_000003F0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CB800_000003E8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CB800_000003E8:
    li r0, 0x0
    stw r0, 0xa8(r1)
lbl_fn_800CB800_000003F0:
    lwz r31, 0x0(r29)
    lfs f0, 0x10(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CB800_0000040C
    cmpwi r31, 0x8
    blt lbl_fn_800CB800_00000414
lbl_fn_800CB800_0000040C:
    li r3, 0x0
    b lbl_fn_800CB800_00000420
lbl_fn_800CB800_00000414:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CB800_00000420:
    cmpwi r3, 0x0
    beq lbl_fn_800CB800_00000534
    stfs f0, 0x10(r3)
    li r4, 0x0
    lis r3, fn_800CB7F8@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F8@l
    stw r3, 0x20(r1)
    extsb. r0, r0
    stw r4, 0x24(r1)
    stw r4, 0x94(r1)
    bne lbl_fn_800CB800_00000478
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CB800_00000478:
    lwz r4, 0x20(r1)
    addi r3, r1, 0x28
    lwz r0, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CB800_000004C4
    addic. r0, r1, 0x98
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_fn_800CB800_000004BC
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
lbl_fn_800CB800_000004BC:
    li r0, 0x1
    b lbl_fn_800CB800_000004C8
lbl_fn_800CB800_000004C4:
    li r0, 0x0
lbl_fn_800CB800_000004C8:
    cmpwi r0, 0x0
    beq lbl_fn_800CB800_000004E0
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x94(r1)
    b lbl_fn_800CB800_000004E8
lbl_fn_800CB800_000004E0:
    li r0, 0x0
    stw r0, 0x94(r1)
lbl_fn_800CB800_000004E8:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x94
    bl fn_800D0DB0
    addic. r3, r1, 0x94
    beq lbl_fn_800CB800_00000534
    lwz r4, 0x94(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CB800_00000534
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CB800_0000052C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CB800_0000052C:
    li r0, 0x0
    stw r0, 0x94(r1)
lbl_fn_800CB800_00000534:
    lwz r31, 0x0(r29)
    lfs f0, 0x14(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CB800_00000550
    cmpwi r31, 0x8
    blt lbl_fn_800CB800_00000558
lbl_fn_800CB800_00000550:
    li r3, 0x0
    b lbl_fn_800CB800_00000564
lbl_fn_800CB800_00000558:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CB800_00000564:
    cmpwi r3, 0x0
    beq lbl_fn_800CB800_00000670
    stfs f0, 0x14(r3)
    lis r4, fn_800CB7FC@ha
    addi r4, r4, fn_800CB7FC@l
    li r3, 0x0
    lbz r0, lbl_8087EFEF
    stw r4, 0x8(r1)
    extsb. r0, r0
    stw r3, 0x80(r1)
    bne lbl_fn_800CB800_000005B8
    lis r6, lbl_807C75C8@ha
    lis r4, fn_800D07E8@ha
    lis r3, fn_800D07FC@ha
    li r0, 0x1
    addi r3, r3, fn_800D07FC@l
    addi r5, r6, lbl_807C75C8@l
    addi r4, r4, fn_800D07E8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C8@l(r6)
    stb r0, lbl_8087EFEF
lbl_fn_800CB800_000005B8:
    lwz r4, 0x8(r1)
    addi r3, r1, 0x10
    lwz r0, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CB800_00000600
    addic. r0, r1, 0x84
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_800CB800_000005F8
    stw r3, 0x84(r1)
lbl_fn_800CB800_000005F8:
    li r0, 0x1
    b lbl_fn_800CB800_00000604
lbl_fn_800CB800_00000600:
    li r0, 0x0
lbl_fn_800CB800_00000604:
    cmpwi r0, 0x0
    beq lbl_fn_800CB800_0000061C
    lis r3, lbl_807C75C8@ha
    addi r3, r3, lbl_807C75C8@l
    stw r3, 0x80(r1)
    b lbl_fn_800CB800_00000624
lbl_fn_800CB800_0000061C:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_800CB800_00000624:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x80
    bl fn_800D0DB0
    addic. r3, r1, 0x80
    beq lbl_fn_800CB800_00000670
    lwz r4, 0x80(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CB800_00000670
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CB800_00000668
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CB800_00000668:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_800CB800_00000670:
    lwz r0, 0x104(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_800CBE8C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r30, lbl_8087EFE8
    cmpwi r30, 0x0
    beq lbl_fn_800CBE8C_00000CFC
    lwz r31, 0x0(r3)
    lwz r4, 0x4(r3)
    cmpwi r31, 0x0
    blt lbl_fn_800CBE8C_000006CC
    cmpwi r31, 0x20
    blt lbl_fn_800CBE8C_000006D4
lbl_fn_800CBE8C_000006CC:
    li r3, 0x0
    b lbl_fn_800CBE8C_000006E0
lbl_fn_800CBE8C_000006D4:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2b98
lbl_fn_800CBE8C_000006E0:
    cmpwi r3, 0x0
    beq lbl_fn_800CBE8C_000007F4
    stw r4, 0x4(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x68(r1)
    extsb. r0, r0
    stw r4, 0x6c(r1)
    stw r4, 0xd0(r1)
    bne lbl_fn_800CBE8C_00000738
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CBE8C_00000738:
    lwz r4, 0x68(r1)
    addi r3, r1, 0x70
    lwz r0, 0x6c(r1)
    stw r4, 0x70(r1)
    stw r0, 0x74(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CBE8C_00000784
    addic. r0, r1, 0xd4
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    beq lbl_fn_800CBE8C_0000077C
    stw r3, 0xd4(r1)
    stw r0, 0xd8(r1)
lbl_fn_800CBE8C_0000077C:
    li r0, 0x1
    b lbl_fn_800CBE8C_00000788
lbl_fn_800CBE8C_00000784:
    li r0, 0x0
lbl_fn_800CBE8C_00000788:
    cmpwi r0, 0x0
    beq lbl_fn_800CBE8C_000007A0
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xd0(r1)
    b lbl_fn_800CBE8C_000007A8
lbl_fn_800CBE8C_000007A0:
    li r0, 0x0
    stw r0, 0xd0(r1)
lbl_fn_800CBE8C_000007A8:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xd0
    bl fn_800D0F34
    addic. r3, r1, 0xd0
    beq lbl_fn_800CBE8C_000007F4
    lwz r4, 0xd0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CBE8C_000007F4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CBE8C_000007EC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CBE8C_000007EC:
    li r0, 0x0
    stw r0, 0xd0(r1)
lbl_fn_800CBE8C_000007F4:
    lwz r31, 0x0(r29)
    lfs f0, 0x8(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CBE8C_00000810
    cmpwi r31, 0x20
    blt lbl_fn_800CBE8C_00000818
lbl_fn_800CBE8C_00000810:
    li r3, 0x0
    b lbl_fn_800CBE8C_00000824
lbl_fn_800CBE8C_00000818:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2b98
lbl_fn_800CBE8C_00000824:
    cmpwi r3, 0x0
    beq lbl_fn_800CBE8C_00000938
    stfs f0, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x50(r1)
    extsb. r0, r0
    stw r4, 0x54(r1)
    stw r4, 0xbc(r1)
    bne lbl_fn_800CBE8C_0000087C
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CBE8C_0000087C:
    lwz r4, 0x50(r1)
    addi r3, r1, 0x58
    lwz r0, 0x54(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CBE8C_000008C8
    addic. r0, r1, 0xc0
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    beq lbl_fn_800CBE8C_000008C0
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
lbl_fn_800CBE8C_000008C0:
    li r0, 0x1
    b lbl_fn_800CBE8C_000008CC
lbl_fn_800CBE8C_000008C8:
    li r0, 0x0
lbl_fn_800CBE8C_000008CC:
    cmpwi r0, 0x0
    beq lbl_fn_800CBE8C_000008E4
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xbc(r1)
    b lbl_fn_800CBE8C_000008EC
lbl_fn_800CBE8C_000008E4:
    li r0, 0x0
    stw r0, 0xbc(r1)
lbl_fn_800CBE8C_000008EC:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xbc
    bl fn_800D0F34
    addic. r3, r1, 0xbc
    beq lbl_fn_800CBE8C_00000938
    lwz r4, 0xbc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CBE8C_00000938
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CBE8C_00000930
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CBE8C_00000930:
    li r0, 0x0
    stw r0, 0xbc(r1)
lbl_fn_800CBE8C_00000938:
    lwz r31, 0x0(r29)
    lfs f0, 0xc(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CBE8C_00000954
    cmpwi r31, 0x20
    blt lbl_fn_800CBE8C_0000095C
lbl_fn_800CBE8C_00000954:
    li r3, 0x0
    b lbl_fn_800CBE8C_00000968
lbl_fn_800CBE8C_0000095C:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2b98
lbl_fn_800CBE8C_00000968:
    cmpwi r3, 0x0
    beq lbl_fn_800CBE8C_00000A7C
    stfs f0, 0xc(r3)
    li r4, 0x0
    lis r3, fn_800CB7F4@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F4@l
    stw r3, 0x38(r1)
    extsb. r0, r0
    stw r4, 0x3c(r1)
    stw r4, 0xa8(r1)
    bne lbl_fn_800CBE8C_000009C0
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CBE8C_000009C0:
    lwz r4, 0x38(r1)
    addi r3, r1, 0x40
    lwz r0, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CBE8C_00000A0C
    addic. r0, r1, 0xac
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    beq lbl_fn_800CBE8C_00000A04
    stw r3, 0xac(r1)
    stw r0, 0xb0(r1)
lbl_fn_800CBE8C_00000A04:
    li r0, 0x1
    b lbl_fn_800CBE8C_00000A10
lbl_fn_800CBE8C_00000A0C:
    li r0, 0x0
lbl_fn_800CBE8C_00000A10:
    cmpwi r0, 0x0
    beq lbl_fn_800CBE8C_00000A28
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xa8(r1)
    b lbl_fn_800CBE8C_00000A30
lbl_fn_800CBE8C_00000A28:
    li r0, 0x0
    stw r0, 0xa8(r1)
lbl_fn_800CBE8C_00000A30:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xa8
    bl fn_800D0F34
    addic. r3, r1, 0xa8
    beq lbl_fn_800CBE8C_00000A7C
    lwz r4, 0xa8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CBE8C_00000A7C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CBE8C_00000A74
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CBE8C_00000A74:
    li r0, 0x0
    stw r0, 0xa8(r1)
lbl_fn_800CBE8C_00000A7C:
    lwz r31, 0x0(r29)
    lfs f0, 0x10(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CBE8C_00000A98
    cmpwi r31, 0x20
    blt lbl_fn_800CBE8C_00000AA0
lbl_fn_800CBE8C_00000A98:
    li r3, 0x0
    b lbl_fn_800CBE8C_00000AAC
lbl_fn_800CBE8C_00000AA0:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2b98
lbl_fn_800CBE8C_00000AAC:
    cmpwi r3, 0x0
    beq lbl_fn_800CBE8C_00000BC0
    stfs f0, 0x10(r3)
    li r4, 0x0
    lis r3, fn_800CB7F8@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F8@l
    stw r3, 0x20(r1)
    extsb. r0, r0
    stw r4, 0x24(r1)
    stw r4, 0x94(r1)
    bne lbl_fn_800CBE8C_00000B04
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CBE8C_00000B04:
    lwz r4, 0x20(r1)
    addi r3, r1, 0x28
    lwz r0, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CBE8C_00000B50
    addic. r0, r1, 0x98
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_fn_800CBE8C_00000B48
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
lbl_fn_800CBE8C_00000B48:
    li r0, 0x1
    b lbl_fn_800CBE8C_00000B54
lbl_fn_800CBE8C_00000B50:
    li r0, 0x0
lbl_fn_800CBE8C_00000B54:
    cmpwi r0, 0x0
    beq lbl_fn_800CBE8C_00000B6C
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x94(r1)
    b lbl_fn_800CBE8C_00000B74
lbl_fn_800CBE8C_00000B6C:
    li r0, 0x0
    stw r0, 0x94(r1)
lbl_fn_800CBE8C_00000B74:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x94
    bl fn_800D0F34
    addic. r3, r1, 0x94
    beq lbl_fn_800CBE8C_00000BC0
    lwz r4, 0x94(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CBE8C_00000BC0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CBE8C_00000BB8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CBE8C_00000BB8:
    li r0, 0x0
    stw r0, 0x94(r1)
lbl_fn_800CBE8C_00000BC0:
    lwz r31, 0x0(r29)
    lfs f0, 0x14(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CBE8C_00000BDC
    cmpwi r31, 0x20
    blt lbl_fn_800CBE8C_00000BE4
lbl_fn_800CBE8C_00000BDC:
    li r3, 0x0
    b lbl_fn_800CBE8C_00000BF0
lbl_fn_800CBE8C_00000BE4:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2b98
lbl_fn_800CBE8C_00000BF0:
    cmpwi r3, 0x0
    beq lbl_fn_800CBE8C_00000CFC
    stfs f0, 0x14(r3)
    lis r4, fn_800CB7FC@ha
    addi r4, r4, fn_800CB7FC@l
    li r3, 0x0
    lbz r0, lbl_8087EFEF
    stw r4, 0x8(r1)
    extsb. r0, r0
    stw r3, 0x80(r1)
    bne lbl_fn_800CBE8C_00000C44
    lis r6, lbl_807C75C8@ha
    lis r4, fn_800D07E8@ha
    lis r3, fn_800D07FC@ha
    li r0, 0x1
    addi r3, r3, fn_800D07FC@l
    addi r5, r6, lbl_807C75C8@l
    addi r4, r4, fn_800D07E8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C8@l(r6)
    stb r0, lbl_8087EFEF
lbl_fn_800CBE8C_00000C44:
    lwz r4, 0x8(r1)
    addi r3, r1, 0x10
    lwz r0, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CBE8C_00000C8C
    addic. r0, r1, 0x84
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_800CBE8C_00000C84
    stw r3, 0x84(r1)
lbl_fn_800CBE8C_00000C84:
    li r0, 0x1
    b lbl_fn_800CBE8C_00000C90
lbl_fn_800CBE8C_00000C8C:
    li r0, 0x0
lbl_fn_800CBE8C_00000C90:
    cmpwi r0, 0x0
    beq lbl_fn_800CBE8C_00000CA8
    lis r3, lbl_807C75C8@ha
    addi r3, r3, lbl_807C75C8@l
    stw r3, 0x80(r1)
    b lbl_fn_800CBE8C_00000CB0
lbl_fn_800CBE8C_00000CA8:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_800CBE8C_00000CB0:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x80
    bl fn_800D0F34
    addic. r3, r1, 0x80
    beq lbl_fn_800CBE8C_00000CFC
    lwz r4, 0x80(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CBE8C_00000CFC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CBE8C_00000CF4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CBE8C_00000CF4:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_800CBE8C_00000CFC:
    lwz r0, 0x104(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_800CC518(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r30, lbl_8087EFE8
    cmpwi r30, 0x0
    beq lbl_fn_800CC518_00001388
    lwz r31, 0x0(r3)
    lwz r4, 0x4(r3)
    cmpwi r31, 0x0
    blt lbl_fn_800CC518_00000D58
    cmpwi r31, 0x10
    blt lbl_fn_800CC518_00000D60
lbl_fn_800CC518_00000D58:
    li r3, 0x0
    b lbl_fn_800CC518_00000D6C
lbl_fn_800CC518_00000D60:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x3198
lbl_fn_800CC518_00000D6C:
    cmpwi r3, 0x0
    beq lbl_fn_800CC518_00000E80
    stw r4, 0x4(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x68(r1)
    extsb. r0, r0
    stw r4, 0x6c(r1)
    stw r4, 0xd0(r1)
    bne lbl_fn_800CC518_00000DC4
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CC518_00000DC4:
    lwz r4, 0x68(r1)
    addi r3, r1, 0x70
    lwz r0, 0x6c(r1)
    stw r4, 0x70(r1)
    stw r0, 0x74(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CC518_00000E10
    addic. r0, r1, 0xd4
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    beq lbl_fn_800CC518_00000E08
    stw r3, 0xd4(r1)
    stw r0, 0xd8(r1)
lbl_fn_800CC518_00000E08:
    li r0, 0x1
    b lbl_fn_800CC518_00000E14
lbl_fn_800CC518_00000E10:
    li r0, 0x0
lbl_fn_800CC518_00000E14:
    cmpwi r0, 0x0
    beq lbl_fn_800CC518_00000E2C
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xd0(r1)
    b lbl_fn_800CC518_00000E34
lbl_fn_800CC518_00000E2C:
    li r0, 0x0
    stw r0, 0xd0(r1)
lbl_fn_800CC518_00000E34:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xd0
    bl fn_800D10B8
    addic. r3, r1, 0xd0
    beq lbl_fn_800CC518_00000E80
    lwz r4, 0xd0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CC518_00000E80
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CC518_00000E78
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CC518_00000E78:
    li r0, 0x0
    stw r0, 0xd0(r1)
lbl_fn_800CC518_00000E80:
    lwz r31, 0x0(r29)
    lfs f0, 0x8(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CC518_00000E9C
    cmpwi r31, 0x10
    blt lbl_fn_800CC518_00000EA4
lbl_fn_800CC518_00000E9C:
    li r3, 0x0
    b lbl_fn_800CC518_00000EB0
lbl_fn_800CC518_00000EA4:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x3198
lbl_fn_800CC518_00000EB0:
    cmpwi r3, 0x0
    beq lbl_fn_800CC518_00000FC4
    stfs f0, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x50(r1)
    extsb. r0, r0
    stw r4, 0x54(r1)
    stw r4, 0xbc(r1)
    bne lbl_fn_800CC518_00000F08
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CC518_00000F08:
    lwz r4, 0x50(r1)
    addi r3, r1, 0x58
    lwz r0, 0x54(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CC518_00000F54
    addic. r0, r1, 0xc0
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    beq lbl_fn_800CC518_00000F4C
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
lbl_fn_800CC518_00000F4C:
    li r0, 0x1
    b lbl_fn_800CC518_00000F58
lbl_fn_800CC518_00000F54:
    li r0, 0x0
lbl_fn_800CC518_00000F58:
    cmpwi r0, 0x0
    beq lbl_fn_800CC518_00000F70
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xbc(r1)
    b lbl_fn_800CC518_00000F78
lbl_fn_800CC518_00000F70:
    li r0, 0x0
    stw r0, 0xbc(r1)
lbl_fn_800CC518_00000F78:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xbc
    bl fn_800D10B8
    addic. r3, r1, 0xbc
    beq lbl_fn_800CC518_00000FC4
    lwz r4, 0xbc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CC518_00000FC4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CC518_00000FBC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CC518_00000FBC:
    li r0, 0x0
    stw r0, 0xbc(r1)
lbl_fn_800CC518_00000FC4:
    lwz r31, 0x0(r29)
    lfs f0, 0xc(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CC518_00000FE0
    cmpwi r31, 0x10
    blt lbl_fn_800CC518_00000FE8
lbl_fn_800CC518_00000FE0:
    li r3, 0x0
    b lbl_fn_800CC518_00000FF4
lbl_fn_800CC518_00000FE8:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x3198
lbl_fn_800CC518_00000FF4:
    cmpwi r3, 0x0
    beq lbl_fn_800CC518_00001108
    stfs f0, 0xc(r3)
    li r4, 0x0
    lis r3, fn_800CB7F4@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F4@l
    stw r3, 0x38(r1)
    extsb. r0, r0
    stw r4, 0x3c(r1)
    stw r4, 0xa8(r1)
    bne lbl_fn_800CC518_0000104C
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CC518_0000104C:
    lwz r4, 0x38(r1)
    addi r3, r1, 0x40
    lwz r0, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CC518_00001098
    addic. r0, r1, 0xac
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    beq lbl_fn_800CC518_00001090
    stw r3, 0xac(r1)
    stw r0, 0xb0(r1)
lbl_fn_800CC518_00001090:
    li r0, 0x1
    b lbl_fn_800CC518_0000109C
lbl_fn_800CC518_00001098:
    li r0, 0x0
lbl_fn_800CC518_0000109C:
    cmpwi r0, 0x0
    beq lbl_fn_800CC518_000010B4
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xa8(r1)
    b lbl_fn_800CC518_000010BC
lbl_fn_800CC518_000010B4:
    li r0, 0x0
    stw r0, 0xa8(r1)
lbl_fn_800CC518_000010BC:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xa8
    bl fn_800D10B8
    addic. r3, r1, 0xa8
    beq lbl_fn_800CC518_00001108
    lwz r4, 0xa8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CC518_00001108
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CC518_00001100
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CC518_00001100:
    li r0, 0x0
    stw r0, 0xa8(r1)
lbl_fn_800CC518_00001108:
    lwz r31, 0x0(r29)
    lfs f0, 0x10(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CC518_00001124
    cmpwi r31, 0x10
    blt lbl_fn_800CC518_0000112C
lbl_fn_800CC518_00001124:
    li r3, 0x0
    b lbl_fn_800CC518_00001138
lbl_fn_800CC518_0000112C:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x3198
lbl_fn_800CC518_00001138:
    cmpwi r3, 0x0
    beq lbl_fn_800CC518_0000124C
    stfs f0, 0x10(r3)
    li r4, 0x0
    lis r3, fn_800CB7F8@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F8@l
    stw r3, 0x20(r1)
    extsb. r0, r0
    stw r4, 0x24(r1)
    stw r4, 0x94(r1)
    bne lbl_fn_800CC518_00001190
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CC518_00001190:
    lwz r4, 0x20(r1)
    addi r3, r1, 0x28
    lwz r0, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CC518_000011DC
    addic. r0, r1, 0x98
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_fn_800CC518_000011D4
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
lbl_fn_800CC518_000011D4:
    li r0, 0x1
    b lbl_fn_800CC518_000011E0
lbl_fn_800CC518_000011DC:
    li r0, 0x0
lbl_fn_800CC518_000011E0:
    cmpwi r0, 0x0
    beq lbl_fn_800CC518_000011F8
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x94(r1)
    b lbl_fn_800CC518_00001200
lbl_fn_800CC518_000011F8:
    li r0, 0x0
    stw r0, 0x94(r1)
lbl_fn_800CC518_00001200:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x94
    bl fn_800D10B8
    addic. r3, r1, 0x94
    beq lbl_fn_800CC518_0000124C
    lwz r4, 0x94(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CC518_0000124C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CC518_00001244
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CC518_00001244:
    li r0, 0x0
    stw r0, 0x94(r1)
lbl_fn_800CC518_0000124C:
    lwz r31, 0x0(r29)
    lfs f0, 0x14(r29)
    cmpwi r31, 0x0
    lwz r30, lbl_8087EFE8
    blt lbl_fn_800CC518_00001268
    cmpwi r31, 0x10
    blt lbl_fn_800CC518_00001270
lbl_fn_800CC518_00001268:
    li r3, 0x0
    b lbl_fn_800CC518_0000127C
lbl_fn_800CC518_00001270:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x3198
lbl_fn_800CC518_0000127C:
    cmpwi r3, 0x0
    beq lbl_fn_800CC518_00001388
    stfs f0, 0x14(r3)
    lis r4, fn_800CB7FC@ha
    addi r4, r4, fn_800CB7FC@l
    li r3, 0x0
    lbz r0, lbl_8087EFEF
    stw r4, 0x8(r1)
    extsb. r0, r0
    stw r3, 0x80(r1)
    bne lbl_fn_800CC518_000012D0
    lis r6, lbl_807C75C8@ha
    lis r4, fn_800D07E8@ha
    lis r3, fn_800D07FC@ha
    li r0, 0x1
    addi r3, r3, fn_800D07FC@l
    addi r5, r6, lbl_807C75C8@l
    addi r4, r4, fn_800D07E8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C8@l(r6)
    stb r0, lbl_8087EFEF
lbl_fn_800CC518_000012D0:
    lwz r4, 0x8(r1)
    addi r3, r1, 0x10
    lwz r0, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CC518_00001318
    addic. r0, r1, 0x84
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_800CC518_00001310
    stw r3, 0x84(r1)
lbl_fn_800CC518_00001310:
    li r0, 0x1
    b lbl_fn_800CC518_0000131C
lbl_fn_800CC518_00001318:
    li r0, 0x0
lbl_fn_800CC518_0000131C:
    cmpwi r0, 0x0
    beq lbl_fn_800CC518_00001334
    lis r3, lbl_807C75C8@ha
    addi r3, r3, lbl_807C75C8@l
    stw r3, 0x80(r1)
    b lbl_fn_800CC518_0000133C
lbl_fn_800CC518_00001334:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_800CC518_0000133C:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x80
    bl fn_800D10B8
    addic. r3, r1, 0x80
    beq lbl_fn_800CC518_00001388
    lwz r4, 0x80(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CC518_00001388
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CC518_00001380
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CC518_00001380:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_800CC518_00001388:
    lwz r0, 0x104(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_800CCBA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    bne lbl_fn_800CCBA4_000013E8
    lis r5, lbl_80734440@ha
    li r3, 0x46e8
    addi r5, r5, lbl_80734440@l
    li r4, 0xa
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800CCBA4_000013E4
    bl fn_800CCBF8
lbl_fn_800CCBA4_000013E4:
    stw r3, lbl_8087EFE8
lbl_fn_800CCBA4_000013E8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CCBF8(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    lis r6, lbl_80779698@ha
    lis r4, fn_800C8078@ha
    stw r0, 0x174(r1)
    lis r5, fn_800C81CC@ha
    addi r6, r6, lbl_80779698@l
    addi r4, r4, fn_800C8078@l
    stw r31, 0x16c(r1)
    addi r5, r5, fn_800C81CC@l
    li r7, 0x20
    stw r30, 0x168(r1)
    mr r30, r3
    stw r6, 0x0(r3)
    li r6, 0x14c
    addi r3, r3, 0x4
    bl fn_806958E0
    addi r3, r30, 0x2984
    bl fn_800C7DC4
    addi r6, r30, 0x2a30
    addi r3, r30, 0x2ad8
    lfs f1, lbl_80881188
    cmplw r6, r3
    li r5, 0x0
    lfs f0, lbl_8088118C
    li r4, -0x1
    stw r5, 0x2a0c(r30)
    stw r5, 0x2a10(r30)
    stfs f1, 0x2a14(r30)
    stw r4, 0x2a18(r30)
    stw r5, 0x2a1c(r30)
    stfs f1, 0x2a20(r30)
    stfs f1, 0x2a24(r30)
    stfs f0, 0x2a28(r30)
    stfs f1, 0x2a2c(r30)
    bge lbl_fn_800CCBF8_000014C0
    addi r3, r3, 0x17
    li r0, 0x18
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_800CCBF8_000014C0
lbl_fn_800CCBF8_000014A0:
    stw r4, 0x0(r6)
    stw r5, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_800CCBF8_000014A0
lbl_fn_800CCBF8_000014C0:
    addi r6, r30, 0x2af0
    addi r3, r30, 0x2b98
    lfs f1, lbl_80881188
    cmplw r6, r3
    lfs f0, lbl_8088118C
    li r5, -0x1
    li r4, 0x0
    stw r5, 0x2ad8(r30)
    stw r4, 0x2adc(r30)
    stfs f1, 0x2ae0(r30)
    stfs f1, 0x2ae4(r30)
    stfs f0, 0x2ae8(r30)
    stfs f1, 0x2aec(r30)
    bge lbl_fn_800CCBF8_00001530
    addi r3, r3, 0x17
    li r0, 0x18
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_800CCBF8_00001530
lbl_fn_800CCBF8_00001510:
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_800CCBF8_00001510
lbl_fn_800CCBF8_00001530:
    addi r6, r30, 0x2bb0
    addi r3, r30, 0x2e98
    lfs f1, lbl_80881188
    cmplw r6, r3
    lfs f0, lbl_8088118C
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x2b98(r30)
    stw r0, 0x2b9c(r30)
    stfs f1, 0x2ba0(r30)
    stfs f1, 0x2ba4(r30)
    stfs f0, 0x2ba8(r30)
    stfs f1, 0x2bac(r30)
    bge lbl_fn_800CCBF8_000016DC
    addi r0, r30, 0x2bb0
    addi r5, r30, 0x2dd8
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_800CCBF8_00001584
    li r3, 0x1
lbl_fn_800CCBF8_00001584:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_00001590
    li r0, 0x1
lbl_fn_800CCBF8_00001590:
    cmpwi r0, 0x0
    beq lbl_fn_800CCBF8_0000168C
    addi r3, r5, 0xbf
    li r0, 0xc0
    subf r3, r6, r3
    lfs f1, lbl_80881188
    divwu r3, r3, r0
    lfs f0, lbl_8088118C
    li r4, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r5
    bge lbl_fn_800CCBF8_0000168C
lbl_fn_800CCBF8_000015C4:
    stw r4, 0x0(r6)
    stw r0, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    stw r4, 0x18(r6)
    stw r0, 0x1c(r6)
    stfs f1, 0x20(r6)
    stfs f1, 0x24(r6)
    stfs f0, 0x28(r6)
    stfs f1, 0x2c(r6)
    stw r4, 0x30(r6)
    stw r0, 0x34(r6)
    stfs f1, 0x38(r6)
    stfs f1, 0x3c(r6)
    stfs f0, 0x40(r6)
    stfs f1, 0x44(r6)
    stw r4, 0x48(r6)
    stw r0, 0x4c(r6)
    stfs f1, 0x50(r6)
    stfs f1, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f1, 0x5c(r6)
    stw r4, 0x60(r6)
    stw r0, 0x64(r6)
    stfs f1, 0x68(r6)
    stfs f1, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f1, 0x74(r6)
    stw r4, 0x78(r6)
    stw r0, 0x7c(r6)
    stfs f1, 0x80(r6)
    stfs f1, 0x84(r6)
    stfs f0, 0x88(r6)
    stfs f1, 0x8c(r6)
    stw r4, 0x90(r6)
    stw r0, 0x94(r6)
    stfs f1, 0x98(r6)
    stfs f1, 0x9c(r6)
    stfs f0, 0xa0(r6)
    stfs f1, 0xa4(r6)
    stw r4, 0xa8(r6)
    stw r0, 0xac(r6)
    stfs f1, 0xb0(r6)
    stfs f1, 0xb4(r6)
    stfs f0, 0xb8(r6)
    stfs f1, 0xbc(r6)
    addi r6, r6, 0xc0
    bdnz lbl_fn_800CCBF8_000015C4
lbl_fn_800CCBF8_0000168C:
    addi r4, r30, 0x2e98
    li r0, 0x18
    addi r3, r4, 0x17
    lfs f1, lbl_80881188
    subf r3, r6, r3
    lfs f0, lbl_8088118C
    divwu r3, r3, r0
    li r5, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_800CCBF8_000016DC
lbl_fn_800CCBF8_000016BC:
    stw r5, 0x0(r6)
    stw r0, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_800CCBF8_000016BC
lbl_fn_800CCBF8_000016DC:
    addi r6, r30, 0x2eb0
    addi r3, r30, 0x3198
    lfs f1, lbl_80881188
    cmplw r6, r3
    lfs f0, lbl_8088118C
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x2e98(r30)
    stw r0, 0x2e9c(r30)
    stfs f1, 0x2ea0(r30)
    stfs f1, 0x2ea4(r30)
    stfs f0, 0x2ea8(r30)
    stfs f1, 0x2eac(r30)
    bge lbl_fn_800CCBF8_00001888
    addi r0, r30, 0x2eb0
    addi r5, r30, 0x30d8
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_800CCBF8_00001730
    li r3, 0x1
lbl_fn_800CCBF8_00001730:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_0000173C
    li r0, 0x1
lbl_fn_800CCBF8_0000173C:
    cmpwi r0, 0x0
    beq lbl_fn_800CCBF8_00001838
    addi r3, r5, 0xbf
    li r0, 0xc0
    subf r3, r6, r3
    lfs f1, lbl_80881188
    divwu r3, r3, r0
    lfs f0, lbl_8088118C
    li r4, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r5
    bge lbl_fn_800CCBF8_00001838
lbl_fn_800CCBF8_00001770:
    stw r4, 0x0(r6)
    stw r0, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    stw r4, 0x18(r6)
    stw r0, 0x1c(r6)
    stfs f1, 0x20(r6)
    stfs f1, 0x24(r6)
    stfs f0, 0x28(r6)
    stfs f1, 0x2c(r6)
    stw r4, 0x30(r6)
    stw r0, 0x34(r6)
    stfs f1, 0x38(r6)
    stfs f1, 0x3c(r6)
    stfs f0, 0x40(r6)
    stfs f1, 0x44(r6)
    stw r4, 0x48(r6)
    stw r0, 0x4c(r6)
    stfs f1, 0x50(r6)
    stfs f1, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f1, 0x5c(r6)
    stw r4, 0x60(r6)
    stw r0, 0x64(r6)
    stfs f1, 0x68(r6)
    stfs f1, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f1, 0x74(r6)
    stw r4, 0x78(r6)
    stw r0, 0x7c(r6)
    stfs f1, 0x80(r6)
    stfs f1, 0x84(r6)
    stfs f0, 0x88(r6)
    stfs f1, 0x8c(r6)
    stw r4, 0x90(r6)
    stw r0, 0x94(r6)
    stfs f1, 0x98(r6)
    stfs f1, 0x9c(r6)
    stfs f0, 0xa0(r6)
    stfs f1, 0xa4(r6)
    stw r4, 0xa8(r6)
    stw r0, 0xac(r6)
    stfs f1, 0xb0(r6)
    stfs f1, 0xb4(r6)
    stfs f0, 0xb8(r6)
    stfs f1, 0xbc(r6)
    addi r6, r6, 0xc0
    bdnz lbl_fn_800CCBF8_00001770
lbl_fn_800CCBF8_00001838:
    addi r4, r30, 0x3198
    li r0, 0x18
    addi r3, r4, 0x17
    lfs f1, lbl_80881188
    subf r3, r6, r3
    lfs f0, lbl_8088118C
    divwu r3, r3, r0
    li r5, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_800CCBF8_00001888
lbl_fn_800CCBF8_00001868:
    stw r5, 0x0(r6)
    stw r0, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_800CCBF8_00001868
lbl_fn_800CCBF8_00001888:
    addi r6, r30, 0x31b0
    addi r3, r30, 0x3318
    lfs f1, lbl_80881188
    cmplw r6, r3
    lfs f0, lbl_8088118C
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x3198(r30)
    stw r0, 0x319c(r30)
    stfs f1, 0x31a0(r30)
    stfs f1, 0x31a4(r30)
    stfs f0, 0x31a8(r30)
    stfs f1, 0x31ac(r30)
    bge lbl_fn_800CCBF8_00001A34
    addi r0, r30, 0x31b0
    addi r5, r30, 0x3258
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_800CCBF8_000018DC
    li r3, 0x1
lbl_fn_800CCBF8_000018DC:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_000018E8
    li r0, 0x1
lbl_fn_800CCBF8_000018E8:
    cmpwi r0, 0x0
    beq lbl_fn_800CCBF8_000019E4
    addi r3, r5, 0xbf
    li r0, 0xc0
    subf r3, r6, r3
    lfs f1, lbl_80881188
    divwu r3, r3, r0
    lfs f0, lbl_8088118C
    li r4, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r5
    bge lbl_fn_800CCBF8_000019E4
lbl_fn_800CCBF8_0000191C:
    stw r4, 0x0(r6)
    stw r0, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    stw r4, 0x18(r6)
    stw r0, 0x1c(r6)
    stfs f1, 0x20(r6)
    stfs f1, 0x24(r6)
    stfs f0, 0x28(r6)
    stfs f1, 0x2c(r6)
    stw r4, 0x30(r6)
    stw r0, 0x34(r6)
    stfs f1, 0x38(r6)
    stfs f1, 0x3c(r6)
    stfs f0, 0x40(r6)
    stfs f1, 0x44(r6)
    stw r4, 0x48(r6)
    stw r0, 0x4c(r6)
    stfs f1, 0x50(r6)
    stfs f1, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f1, 0x5c(r6)
    stw r4, 0x60(r6)
    stw r0, 0x64(r6)
    stfs f1, 0x68(r6)
    stfs f1, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f1, 0x74(r6)
    stw r4, 0x78(r6)
    stw r0, 0x7c(r6)
    stfs f1, 0x80(r6)
    stfs f1, 0x84(r6)
    stfs f0, 0x88(r6)
    stfs f1, 0x8c(r6)
    stw r4, 0x90(r6)
    stw r0, 0x94(r6)
    stfs f1, 0x98(r6)
    stfs f1, 0x9c(r6)
    stfs f0, 0xa0(r6)
    stfs f1, 0xa4(r6)
    stw r4, 0xa8(r6)
    stw r0, 0xac(r6)
    stfs f1, 0xb0(r6)
    stfs f1, 0xb4(r6)
    stfs f0, 0xb8(r6)
    stfs f1, 0xbc(r6)
    addi r6, r6, 0xc0
    bdnz lbl_fn_800CCBF8_0000191C
lbl_fn_800CCBF8_000019E4:
    addi r4, r30, 0x3318
    li r0, 0x18
    addi r3, r4, 0x17
    lfs f1, lbl_80881188
    subf r3, r6, r3
    lfs f0, lbl_8088118C
    divwu r3, r3, r0
    li r5, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_800CCBF8_00001A34
lbl_fn_800CCBF8_00001A14:
    stw r5, 0x0(r6)
    stw r0, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_800CCBF8_00001A14
lbl_fn_800CCBF8_00001A34:
    addi r6, r30, 0x3330
    addi r3, r30, 0x3498
    lfs f1, lbl_80881188
    cmplw r6, r3
    lfs f0, lbl_8088118C
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x3318(r30)
    stw r0, 0x331c(r30)
    stfs f1, 0x3320(r30)
    stfs f1, 0x3324(r30)
    stfs f0, 0x3328(r30)
    stfs f1, 0x332c(r30)
    bge lbl_fn_800CCBF8_00001BE0
    addi r0, r30, 0x3330
    addi r5, r30, 0x33d8
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_800CCBF8_00001A88
    li r3, 0x1
lbl_fn_800CCBF8_00001A88:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_00001A94
    li r0, 0x1
lbl_fn_800CCBF8_00001A94:
    cmpwi r0, 0x0
    beq lbl_fn_800CCBF8_00001B90
    addi r3, r5, 0xbf
    li r0, 0xc0
    subf r3, r6, r3
    lfs f1, lbl_80881188
    divwu r3, r3, r0
    lfs f0, lbl_8088118C
    li r4, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r5
    bge lbl_fn_800CCBF8_00001B90
lbl_fn_800CCBF8_00001AC8:
    stw r4, 0x0(r6)
    stw r0, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    stw r4, 0x18(r6)
    stw r0, 0x1c(r6)
    stfs f1, 0x20(r6)
    stfs f1, 0x24(r6)
    stfs f0, 0x28(r6)
    stfs f1, 0x2c(r6)
    stw r4, 0x30(r6)
    stw r0, 0x34(r6)
    stfs f1, 0x38(r6)
    stfs f1, 0x3c(r6)
    stfs f0, 0x40(r6)
    stfs f1, 0x44(r6)
    stw r4, 0x48(r6)
    stw r0, 0x4c(r6)
    stfs f1, 0x50(r6)
    stfs f1, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f1, 0x5c(r6)
    stw r4, 0x60(r6)
    stw r0, 0x64(r6)
    stfs f1, 0x68(r6)
    stfs f1, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f1, 0x74(r6)
    stw r4, 0x78(r6)
    stw r0, 0x7c(r6)
    stfs f1, 0x80(r6)
    stfs f1, 0x84(r6)
    stfs f0, 0x88(r6)
    stfs f1, 0x8c(r6)
    stw r4, 0x90(r6)
    stw r0, 0x94(r6)
    stfs f1, 0x98(r6)
    stfs f1, 0x9c(r6)
    stfs f0, 0xa0(r6)
    stfs f1, 0xa4(r6)
    stw r4, 0xa8(r6)
    stw r0, 0xac(r6)
    stfs f1, 0xb0(r6)
    stfs f1, 0xb4(r6)
    stfs f0, 0xb8(r6)
    stfs f1, 0xbc(r6)
    addi r6, r6, 0xc0
    bdnz lbl_fn_800CCBF8_00001AC8
lbl_fn_800CCBF8_00001B90:
    addi r4, r30, 0x3498
    li r0, 0x18
    addi r3, r4, 0x17
    lfs f1, lbl_80881188
    subf r3, r6, r3
    lfs f0, lbl_8088118C
    divwu r3, r3, r0
    li r5, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_800CCBF8_00001BE0
lbl_fn_800CCBF8_00001BC0:
    stw r5, 0x0(r6)
    stw r0, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f1, 0x14(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_800CCBF8_00001BC0
lbl_fn_800CCBF8_00001BE0:
    lfs f4, lbl_80881190
    li r0, 0x1
    li r31, 0x0
    lfs f3, lbl_80881194
    lfs f2, lbl_80881198
    lis r4, fn_800CDD40@ha
    lfs f1, lbl_8088119C
    lis r5, fn_800CDD4C@ha
    lfs f0, lbl_808811A0
    addi r3, r30, 0x34e4
    stw r0, 0x3498(r30)
    addi r4, r4, fn_800CDD40@l
    addi r5, r5, fn_800CDD4C@l
    li r6, 0x90
    stw r0, 0x349c(r30)
    li r7, 0x20
    stw r0, 0x34a0(r30)
    stfs f4, 0x34a4(r30)
    stfs f3, 0x34a8(r30)
    stfs f2, 0x34ac(r30)
    stw r0, 0x34b0(r30)
    stw r31, 0x34b4(r30)
    stw r0, 0x34b8(r30)
    stw r31, 0x34bc(r30)
    stw r0, 0x34c0(r30)
    stfs f1, 0x34c4(r30)
    stw r0, 0x34c8(r30)
    stfs f0, 0x34cc(r30)
    stw r31, 0x34d0(r30)
    stw r31, 0x34d8(r30)
    stw r31, 0x34dc(r30)
    stw r31, 0x34e0(r30)
    bl fn_806958E0
    stw r31, 0x46e4(r30)
    lwz r3, lbl_8087EE90
    bl fn_800499D0
    stw r3, 0x2a10(r30)
    lwz r3, lbl_8087EE90
    bl fn_80049A28
    lfs f2, lbl_80881188
    cmpwi r31, 0x0
    lfs f0, lbl_8088118C
    stfs f1, 0x2a14(r30)
    stw r31, 0x148(r1)
    stw r31, 0x14c(r1)
    stfs f2, 0x150(r1)
    stfs f2, 0x154(r1)
    stfs f0, 0x158(r1)
    stfs f2, 0x15c(r1)
    blt lbl_fn_800CCBF8_00001CB0
    cmpwi r31, 0x8
    blt lbl_fn_800CCBF8_00001CB8
lbl_fn_800CCBF8_00001CB0:
    li r3, 0x0
    b lbl_fn_800CCBF8_00001CC4
lbl_fn_800CCBF8_00001CB8:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CCBF8_00001CC4:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_00001E34
    lwz r31, 0x148(r1)
    stw r31, 0x0(r3)
    lwz r0, 0x14c(r1)
    cmpwi r31, 0x0
    stw r0, 0x4(r3)
    lfs f1, 0x150(r1)
    stfs f1, 0x8(r3)
    lfs f0, 0x154(r1)
    stfs f0, 0xc(r3)
    lfs f0, 0x158(r1)
    stfs f0, 0x10(r3)
    lfs f0, 0x15c(r1)
    stfs f0, 0x14(r3)
    blt lbl_fn_800CCBF8_00001D0C
    cmpwi r31, 0x8
    blt lbl_fn_800CCBF8_00001D14
lbl_fn_800CCBF8_00001D0C:
    li r3, 0x0
    b lbl_fn_800CCBF8_00001D20
lbl_fn_800CCBF8_00001D14:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CCBF8_00001D20:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_00001E34
    stfs f1, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x78(r1)
    extsb. r0, r0
    stw r4, 0x7c(r1)
    stw r4, 0xd0(r1)
    bne lbl_fn_800CCBF8_00001D78
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CCBF8_00001D78:
    lwz r4, 0x78(r1)
    addi r3, r1, 0x70
    lwz r0, 0x7c(r1)
    stw r4, 0x70(r1)
    stw r0, 0x74(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CCBF8_00001DC4
    addic. r0, r1, 0xd4
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    beq lbl_fn_800CCBF8_00001DBC
    stw r3, 0xd4(r1)
    stw r0, 0xd8(r1)
lbl_fn_800CCBF8_00001DBC:
    li r0, 0x1
    b lbl_fn_800CCBF8_00001DC8
lbl_fn_800CCBF8_00001DC4:
    li r0, 0x0
lbl_fn_800CCBF8_00001DC8:
    cmpwi r0, 0x0
    beq lbl_fn_800CCBF8_00001DE0
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xd0(r1)
    b lbl_fn_800CCBF8_00001DE8
lbl_fn_800CCBF8_00001DE0:
    li r0, 0x0
    stw r0, 0xd0(r1)
lbl_fn_800CCBF8_00001DE8:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xd0
    bl fn_800D0DB0
    addic. r3, r1, 0xd0
    beq lbl_fn_800CCBF8_00001E34
    lwz r4, 0xd0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CCBF8_00001E34
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CCBF8_00001E2C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CCBF8_00001E2C:
    li r0, 0x0
    stw r0, 0xd0(r1)
lbl_fn_800CCBF8_00001E34:
    li r3, 0x1
    lfs f1, lbl_80881188
    lfs f0, lbl_8088118C
    cmpwi r3, 0x0
    li r0, 0x0
    stw r3, 0x130(r1)
    stw r0, 0x134(r1)
    stfs f1, 0x138(r1)
    stfs f1, 0x13c(r1)
    stfs f0, 0x140(r1)
    stfs f1, 0x144(r1)
    blt lbl_fn_800CCBF8_00001E6C
    cmpwi r3, 0x8
    blt lbl_fn_800CCBF8_00001E74
lbl_fn_800CCBF8_00001E6C:
    li r3, 0x0
    b lbl_fn_800CCBF8_00001E80
lbl_fn_800CCBF8_00001E74:
    mulli r0, r3, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CCBF8_00001E80:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_00001FF0
    lwz r31, 0x130(r1)
    stw r31, 0x0(r3)
    lwz r0, 0x134(r1)
    cmpwi r31, 0x0
    stw r0, 0x4(r3)
    lfs f1, 0x138(r1)
    stfs f1, 0x8(r3)
    lfs f0, 0x13c(r1)
    stfs f0, 0xc(r3)
    lfs f0, 0x140(r1)
    stfs f0, 0x10(r3)
    lfs f0, 0x144(r1)
    stfs f0, 0x14(r3)
    blt lbl_fn_800CCBF8_00001EC8
    cmpwi r31, 0x8
    blt lbl_fn_800CCBF8_00001ED0
lbl_fn_800CCBF8_00001EC8:
    li r3, 0x0
    b lbl_fn_800CCBF8_00001EDC
lbl_fn_800CCBF8_00001ED0:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CCBF8_00001EDC:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_00001FF0
    stfs f1, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x60(r1)
    extsb. r0, r0
    stw r4, 0x64(r1)
    stw r4, 0xbc(r1)
    bne lbl_fn_800CCBF8_00001F34
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CCBF8_00001F34:
    lwz r4, 0x60(r1)
    addi r3, r1, 0x58
    lwz r0, 0x64(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CCBF8_00001F80
    addic. r0, r1, 0xc0
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    beq lbl_fn_800CCBF8_00001F78
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
lbl_fn_800CCBF8_00001F78:
    li r0, 0x1
    b lbl_fn_800CCBF8_00001F84
lbl_fn_800CCBF8_00001F80:
    li r0, 0x0
lbl_fn_800CCBF8_00001F84:
    cmpwi r0, 0x0
    beq lbl_fn_800CCBF8_00001F9C
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xbc(r1)
    b lbl_fn_800CCBF8_00001FA4
lbl_fn_800CCBF8_00001F9C:
    li r0, 0x0
    stw r0, 0xbc(r1)
lbl_fn_800CCBF8_00001FA4:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xbc
    bl fn_800D0DB0
    addic. r3, r1, 0xbc
    beq lbl_fn_800CCBF8_00001FF0
    lwz r4, 0xbc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CCBF8_00001FF0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CCBF8_00001FE8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CCBF8_00001FE8:
    li r0, 0x0
    stw r0, 0xbc(r1)
lbl_fn_800CCBF8_00001FF0:
    li r3, 0x2
    lfs f1, lbl_80881188
    lfs f0, lbl_8088118C
    cmpwi r3, 0x0
    li r0, 0x0
    stw r3, 0x118(r1)
    stw r0, 0x11c(r1)
    stfs f1, 0x120(r1)
    stfs f1, 0x124(r1)
    stfs f0, 0x128(r1)
    stfs f1, 0x12c(r1)
    blt lbl_fn_800CCBF8_00002028
    cmpwi r3, 0x8
    blt lbl_fn_800CCBF8_00002030
lbl_fn_800CCBF8_00002028:
    li r3, 0x0
    b lbl_fn_800CCBF8_0000203C
lbl_fn_800CCBF8_00002030:
    mulli r0, r3, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CCBF8_0000203C:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_000021AC
    lwz r31, 0x118(r1)
    stw r31, 0x0(r3)
    lwz r0, 0x11c(r1)
    cmpwi r31, 0x0
    stw r0, 0x4(r3)
    lfs f1, 0x120(r1)
    stfs f1, 0x8(r3)
    lfs f0, 0x124(r1)
    stfs f0, 0xc(r3)
    lfs f0, 0x128(r1)
    stfs f0, 0x10(r3)
    lfs f0, 0x12c(r1)
    stfs f0, 0x14(r3)
    blt lbl_fn_800CCBF8_00002084
    cmpwi r31, 0x8
    blt lbl_fn_800CCBF8_0000208C
lbl_fn_800CCBF8_00002084:
    li r3, 0x0
    b lbl_fn_800CCBF8_00002098
lbl_fn_800CCBF8_0000208C:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2a18
lbl_fn_800CCBF8_00002098:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_000021AC
    stfs f1, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x48(r1)
    extsb. r0, r0
    stw r4, 0x4c(r1)
    stw r4, 0xa8(r1)
    bne lbl_fn_800CCBF8_000020F0
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CCBF8_000020F0:
    lwz r4, 0x48(r1)
    addi r3, r1, 0x40
    lwz r0, 0x4c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CCBF8_0000213C
    addic. r0, r1, 0xac
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    beq lbl_fn_800CCBF8_00002134
    stw r3, 0xac(r1)
    stw r0, 0xb0(r1)
lbl_fn_800CCBF8_00002134:
    li r0, 0x1
    b lbl_fn_800CCBF8_00002140
lbl_fn_800CCBF8_0000213C:
    li r0, 0x0
lbl_fn_800CCBF8_00002140:
    cmpwi r0, 0x0
    beq lbl_fn_800CCBF8_00002158
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0xa8(r1)
    b lbl_fn_800CCBF8_00002160
lbl_fn_800CCBF8_00002158:
    li r0, 0x0
    stw r0, 0xa8(r1)
lbl_fn_800CCBF8_00002160:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0xa8
    bl fn_800D0DB0
    addic. r3, r1, 0xa8
    beq lbl_fn_800CCBF8_000021AC
    lwz r4, 0xa8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CCBF8_000021AC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CCBF8_000021A4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CCBF8_000021A4:
    li r0, 0x0
    stw r0, 0xa8(r1)
lbl_fn_800CCBF8_000021AC:
    li r0, 0x0
    lfs f1, lbl_80881188
    lfs f0, lbl_8088118C
    cmpwi r0, 0x0
    stw r0, 0x100(r1)
    stw r0, 0x104(r1)
    stfs f1, 0x108(r1)
    stfs f1, 0x10c(r1)
    stfs f0, 0x110(r1)
    stfs f1, 0x114(r1)
    blt lbl_fn_800CCBF8_000021E0
    cmpwi r0, 0x20
    blt lbl_fn_800CCBF8_000021E8
lbl_fn_800CCBF8_000021E0:
    li r3, 0x0
    b lbl_fn_800CCBF8_000021F4
lbl_fn_800CCBF8_000021E8:
    mulli r0, r0, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2b98
lbl_fn_800CCBF8_000021F4:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_00002364
    lwz r31, 0x100(r1)
    stw r31, 0x0(r3)
    lwz r0, 0x104(r1)
    cmpwi r31, 0x0
    stw r0, 0x4(r3)
    lfs f1, 0x108(r1)
    stfs f1, 0x8(r3)
    lfs f0, 0x10c(r1)
    stfs f0, 0xc(r3)
    lfs f0, 0x110(r1)
    stfs f0, 0x10(r3)
    lfs f0, 0x114(r1)
    stfs f0, 0x14(r3)
    blt lbl_fn_800CCBF8_0000223C
    cmpwi r31, 0x20
    blt lbl_fn_800CCBF8_00002244
lbl_fn_800CCBF8_0000223C:
    li r3, 0x0
    b lbl_fn_800CCBF8_00002250
lbl_fn_800CCBF8_00002244:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x2b98
lbl_fn_800CCBF8_00002250:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_00002364
    stfs f1, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x30(r1)
    extsb. r0, r0
    stw r4, 0x34(r1)
    stw r4, 0x94(r1)
    bne lbl_fn_800CCBF8_000022A8
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CCBF8_000022A8:
    lwz r4, 0x30(r1)
    addi r3, r1, 0x28
    lwz r0, 0x34(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CCBF8_000022F4
    addic. r0, r1, 0x98
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_800CCBF8_000022EC
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
lbl_fn_800CCBF8_000022EC:
    li r0, 0x1
    b lbl_fn_800CCBF8_000022F8
lbl_fn_800CCBF8_000022F4:
    li r0, 0x0
lbl_fn_800CCBF8_000022F8:
    cmpwi r0, 0x0
    beq lbl_fn_800CCBF8_00002310
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x94(r1)
    b lbl_fn_800CCBF8_00002318
lbl_fn_800CCBF8_00002310:
    li r0, 0x0
    stw r0, 0x94(r1)
lbl_fn_800CCBF8_00002318:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x94
    bl fn_800D0F34
    addic. r3, r1, 0x94
    beq lbl_fn_800CCBF8_00002364
    lwz r4, 0x94(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CCBF8_00002364
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CCBF8_0000235C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CCBF8_0000235C:
    li r0, 0x0
    stw r0, 0x94(r1)
lbl_fn_800CCBF8_00002364:
    li r0, 0x0
    lfs f1, lbl_80881188
    lfs f0, lbl_8088118C
    cmpwi r0, 0x0
    stw r0, 0xe8(r1)
    stw r0, 0xec(r1)
    stfs f1, 0xf0(r1)
    stfs f1, 0xf4(r1)
    stfs f0, 0xf8(r1)
    stfs f1, 0xfc(r1)
    blt lbl_fn_800CCBF8_00002398
    cmpwi r0, 0x10
    blt lbl_fn_800CCBF8_000023A0
lbl_fn_800CCBF8_00002398:
    li r3, 0x0
    b lbl_fn_800CCBF8_000023AC
lbl_fn_800CCBF8_000023A0:
    mulli r0, r0, 0x18
    add r3, r30, r0
    addi r3, r3, 0x3198
lbl_fn_800CCBF8_000023AC:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_0000251C
    lwz r31, 0xe8(r1)
    stw r31, 0x0(r3)
    lwz r0, 0xec(r1)
    cmpwi r31, 0x0
    stw r0, 0x4(r3)
    lfs f1, 0xf0(r1)
    stfs f1, 0x8(r3)
    lfs f0, 0xf4(r1)
    stfs f0, 0xc(r3)
    lfs f0, 0xf8(r1)
    stfs f0, 0x10(r3)
    lfs f0, 0xfc(r1)
    stfs f0, 0x14(r3)
    blt lbl_fn_800CCBF8_000023F4
    cmpwi r31, 0x10
    blt lbl_fn_800CCBF8_000023FC
lbl_fn_800CCBF8_000023F4:
    li r3, 0x0
    b lbl_fn_800CCBF8_00002408
lbl_fn_800CCBF8_000023FC:
    mulli r0, r31, 0x18
    add r3, r30, r0
    addi r3, r3, 0x3198
lbl_fn_800CCBF8_00002408:
    cmpwi r3, 0x0
    beq lbl_fn_800CCBF8_0000251C
    stfs f1, 0x8(r3)
    li r4, 0x0
    lis r3, fn_800CB7F0@ha
    lbz r0, lbl_8087EFEE
    addi r3, r3, fn_800CB7F0@l
    stw r3, 0x18(r1)
    extsb. r0, r0
    stw r4, 0x1c(r1)
    stw r4, 0x80(r1)
    bne lbl_fn_800CCBF8_00002460
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_800CCBF8_00002460:
    lwz r4, 0x18(r1)
    addi r3, r1, 0x10
    lwz r0, 0x1c(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CCBF8_000024AC
    addic. r0, r1, 0x84
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_800CCBF8_000024A4
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_800CCBF8_000024A4:
    li r0, 0x1
    b lbl_fn_800CCBF8_000024B0
lbl_fn_800CCBF8_000024AC:
    li r0, 0x0
lbl_fn_800CCBF8_000024B0:
    cmpwi r0, 0x0
    beq lbl_fn_800CCBF8_000024C8
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x80(r1)
    b lbl_fn_800CCBF8_000024D0
lbl_fn_800CCBF8_000024C8:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_800CCBF8_000024D0:
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x80
    bl fn_800D10B8
    addic. r3, r1, 0x80
    beq lbl_fn_800CCBF8_0000251C
    lwz r4, 0x80(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CCBF8_0000251C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CCBF8_00002514
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CCBF8_00002514:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_800CCBF8_0000251C:
    mr r3, r30
    bl fn_800D1430
    mr r3, r30
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}
