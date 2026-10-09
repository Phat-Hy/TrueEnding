#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8006AD24(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_800FB4B0(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_80178864(void);
extern void fn_801789D8(void);
extern void fn_80192758(void);
extern void fn_8020924C(void);
extern void fn_802180A8(void);
extern void fn_80219544(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_803EA77C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695B00(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073B9A8[];
extern u8 lbl_8073BC18[];
extern u8 lbl_8073BC30[];
extern u8 lbl_807822D0[];
extern u8 lbl_807822DC[];
extern u8 lbl_807822E8[];
extern u8 lbl_807822F8[];
extern u8 lbl_80782300[];
extern u8 lbl_80782308[];
extern u8 lbl_80782310[];
extern u8 lbl_80782388[];
extern u8 lbl_80782480[];
extern u8 lbl_8078249C[];
extern u8 lbl_807824B8[];
extern u8 lbl_807824D8[];
extern u8 lbl_8078FEF0[];
extern u8 lbl_807C7C88[];
extern u8 lbl_807C7C90[];
extern u8 lbl_807C7C98[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F118;
extern u32 lbl_8087F119;
extern u32 lbl_8087F11A;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_80882920;
extern u32 lbl_80882928;
extern u32 lbl_80882930;
extern u32 lbl_80882934;
extern u32 lbl_80882938;
extern u32 lbl_80882940;
extern u32 lbl_80882948;
extern u32 lbl_8088294C;
extern u32 lbl_80882950;
extern u32 lbl_80882954;
extern u32 lbl_80882968;
extern u32 lbl_80882978;
extern u32 lbl_8088297C;
extern u32 lbl_80882980;
extern u32 lbl_80882984;
extern u32 lbl_80882988;
extern u32 lbl_8088298C;
extern u32 lbl_80882990;
extern u32 lbl_80882994;

/* Function declarations */
void fn_801CAAF0(void);
void fn_801CAFB4(void);
void fn_801CAFE4(void);
void fn_801CB100(void);
void fn_801CB130(void);
void fn_801CB24C(void);
void fn_801CB2BC(void);
void fn_801CB2D4(void);
void fn_801CB41C(void);
void fn_801CB434(void);
void fn_801CB76C(void);
void fn_801CBAAC(void);
void fn_801CBAC0(void);
void fn_801CBAD8(void);
void fn_801CBAEC(void);
void fn_801CBB34(void);
void fn_801CBE84(void);
void fn_801CBEB8(void);
void fn_801CBFE4(void);
void fn_801CBFEC(void);
void fn_801CC02C(void);
void fn_801CC06C(void);
void fn_801CC0AC(void);
void fn_801CC3AC(void);

asm void fn_801CAAF0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    stw r28, 0xd0(r1)
    mr r28, r4
    lbz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801CAAF0_00000208
    lwz r4, 0x50(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801CAAF0_00000054
    lwz r12, 0x0(r4)
    lwz r5, 0x4(r28)
    lwz r12, 0xb4(r12)
    mtctr r12
    bctrl
    b lbl_fn_801CAAF0_000004A4
lbl_fn_801CAAF0_00000054:
    lis r5, lbl_8073BC18@ha
    li r3, 0x44
    addi r5, r5, lbl_8073BC18@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801CAAF0_00000088
    lwz r4, 0x4(r28)
    addi r5, r28, 0x8
    li r6, 0x0
    bl fn_801CB434
lbl_fn_801CAAF0_00000088:
    lis r4, lbl_807822D0@ha
    lwzu r6, lbl_807822D0@l(r4)
    lwz r7, 0x4(r28)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x10(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F119
    stw r3, 0x14(r1)
    extsb. r0, r0
    stw r6, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r6, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r6, 0xb8(r1)
    stw r5, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r7, 0xc4(r1)
    stw r3, 0xc8(r1)
    bne lbl_fn_801CAAF0_0000010C
    lis r6, lbl_807C7C90@ha
    lis r4, fn_801CB100@ha
    lis r3, fn_801CB130@ha
    li r0, 0x1
    addi r3, r3, fn_801CB130@l
    addi r5, r6, lbl_807C7C90@l
    addi r4, r4, fn_801CB100@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C90@l(r6)
    stb r0, lbl_8087F119
lbl_fn_801CAAF0_0000010C:
    lwz r7, 0xb8(r1)
    addi r3, r1, 0x90
    lwz r6, 0xbc(r1)
    lwz r5, 0xc0(r1)
    lwz r4, 0xc4(r1)
    lwz r0, 0xc8(r1)
    stw r7, 0x90(r1)
    stw r6, 0x94(r1)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r0, 0xa0(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801CAAF0_000001E0
    lwz r7, 0x90(r1)
    li r3, 0x14
    lwz r6, 0x94(r1)
    lwz r5, 0x98(r1)
    lwz r4, 0x9c(r1)
    lwz r0, 0xa0(r1)
    stw r7, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801CAAF0_000001A4
    lis r3, __files@ha
    lis r4, lbl_8078249C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078249C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801CAAF0_000001A4:
    cmpwi r30, 0x0
    beq lbl_fn_801CAAF0_000001D4
    lwz r0, 0x7c(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x80(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x84(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x88(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x8c(r1)
    stw r0, 0x10(r30)
lbl_fn_801CAAF0_000001D4:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801CAAF0_000001E4
lbl_fn_801CAAF0_000001E0:
    li r0, 0x0
lbl_fn_801CAAF0_000001E4:
    cmpwi r0, 0x0
    beq lbl_fn_801CAAF0_000001FC
    lis r3, lbl_807C7C90@ha
    addi r3, r3, lbl_807C7C90@l
    stw r3, 0x0(r31)
    b lbl_fn_801CAAF0_000004A4
lbl_fn_801CAAF0_000001FC:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801CAAF0_000004A4
lbl_fn_801CAAF0_00000208:
    lis r5, lbl_8073BC18@ha
    li r3, 0x20
    addi r5, r5, lbl_8073BC18@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801CAAF0_00000328
    lwz r6, 0x4(r28)
    lis r4, lbl_80782388@ha
    stw r6, 0x4(r3)
    addi r4, r4, lbl_80782388@l
    li r0, 0x10
    addi r5, r1, 0x18
    stw r4, 0x0(r3)
    lis r4, lbl_8073B9A8@ha
    lfs f3, lbl_80882978
    lfs f2, 0x1c(r28)
    psq_l f1, 0x14(r28), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r0, 0x560(r6)
    lwz r6, 0x4(r3)
    lfs f2, 0x530(r6)
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    lwz r3, 0x4(r3)
    psq_l f1, 0x534(r3), 0, 0
    addi r29, r3, 0xb0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x53c(r3)
    lfs f0, 0x1c(r1)
    stfs f2, 0x20(r1)
    fadds f1, f3, f0
    lfd f2, lbl_8073B9A8@l(r4)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80882978
    fcmpo cr0, f3, f0
    ble lbl_fn_801CAAF0_000002BC
    lfs f0, lbl_8088297C
    fsubs f3, f3, f0
lbl_fn_801CAAF0_000002BC:
    lfs f0, lbl_80882980
    fcmpo cr0, f3, f0
    bge lbl_fn_801CAAF0_000002D0
    lfs f0, lbl_8088297C
    fadds f3, f3, f0
lbl_fn_801CAAF0_000002D0:
    stfs f3, 0x1c(r1)
    addi r3, r1, 0x18
    lwz r6, 0x4(r30)
    li r0, 0x1
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    psq_st f1, 0x534(r6), 0, 0
    li r4, 0x0
    lfs f2, 0x20(r1)
    li r5, 0x16d
    stfs f2, 0x53c(r6)
    li r6, 0x0
    lfs f0, lbl_80882930
    li r7, 0x0
    stw r0, 0x34c(r29)
    li r8, 0x1
    lfs f1, lbl_80882984
    stfs f0, 0x24c(r29)
    lfs f2, lbl_80882940
    bl fn_80097C08
    lfs f0, lbl_80882930
    stfs f0, 0x238(r29)
lbl_fn_801CAAF0_00000328:
    lis r3, lbl_807822DC@ha
    lwzu r5, lbl_807822DC@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F118
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r3, 0xac(r1)
    stw r6, 0xb0(r1)
    stw r30, 0xb4(r1)
    bne lbl_fn_801CAAF0_000003AC
    lis r6, lbl_807C7C88@ha
    lis r4, fn_801CAFB4@ha
    lis r3, fn_801CAFE4@ha
    li r0, 0x1
    addi r3, r3, fn_801CAFE4@l
    addi r5, r6, lbl_807C7C88@l
    addi r4, r4, fn_801CAFB4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C88@l(r6)
    stb r0, lbl_8087F118
lbl_fn_801CAAF0_000003AC:
    lwz r7, 0xa4(r1)
    addi r3, r1, 0x68
    lwz r6, 0xa8(r1)
    lwz r5, 0xac(r1)
    lwz r4, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r0, 0x78(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801CAAF0_00000480
    lwz r7, 0x68(r1)
    li r3, 0x14
    lwz r6, 0x6c(r1)
    lwz r5, 0x70(r1)
    lwz r4, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_801CAAF0_00000444
    lis r3, __files@ha
    lis r4, lbl_807824B8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807824B8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801CAAF0_00000444:
    cmpwi r29, 0x0
    beq lbl_fn_801CAAF0_00000474
    lwz r0, 0x54(r1)
    stw r0, 0x0(r29)
    lwz r0, 0x58(r1)
    stw r0, 0x4(r29)
    lwz r0, 0x5c(r1)
    stw r0, 0x8(r29)
    lwz r0, 0x60(r1)
    stw r0, 0xc(r29)
    lwz r0, 0x64(r1)
    stw r0, 0x10(r29)
lbl_fn_801CAAF0_00000474:
    stw r29, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801CAAF0_00000484
lbl_fn_801CAAF0_00000480:
    li r0, 0x0
lbl_fn_801CAAF0_00000484:
    cmpwi r0, 0x0
    beq lbl_fn_801CAAF0_0000049C
    lis r3, lbl_807C7C88@ha
    addi r3, r3, lbl_807C7C88@l
    stw r3, 0x0(r31)
    b lbl_fn_801CAAF0_000004A4
lbl_fn_801CAAF0_0000049C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801CAAF0_000004A4:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r28, 0xd0(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_801CAFB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CAFE4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801CAFE4_0000052C
    lis r3, lbl_80782300@ha
    addi r3, r3, lbl_80782300@l
    stw r3, 0x0(r4)
    b lbl_fn_801CAFE4_000005F4
lbl_fn_801CAFE4_0000052C:
    cmpwi r5, 0x0
    bne lbl_fn_801CAFE4_000005A4
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801CAFE4_0000056C
    lis r3, __files@ha
    lis r4, lbl_807824B8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807824B8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801CAFE4_0000056C:
    cmpwi r30, 0x0
    beq lbl_fn_801CAFE4_0000059C
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801CAFE4_0000059C:
    stw r30, 0x0(r29)
    b lbl_fn_801CAFE4_000005F4
lbl_fn_801CAFE4_000005A4:
    cmpwi r5, 0x1
    bne lbl_fn_801CAFE4_000005C0
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801CAFE4_000005F4
lbl_fn_801CAFE4_000005C0:
    lwz r5, 0x0(r4)
    lis r3, lbl_80782300@ha
    lwz r4, lbl_80782300@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801CAFE4_000005EC
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801CAFE4_000005F4
lbl_fn_801CAFE4_000005EC:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801CAFE4_000005F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801CB100(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CB130(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801CB130_00000678
    lis r3, lbl_80782308@ha
    addi r3, r3, lbl_80782308@l
    stw r3, 0x0(r4)
    b lbl_fn_801CB130_00000740
lbl_fn_801CB130_00000678:
    cmpwi r5, 0x0
    bne lbl_fn_801CB130_000006F0
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801CB130_000006B8
    lis r3, __files@ha
    lis r4, lbl_8078249C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078249C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801CB130_000006B8:
    cmpwi r30, 0x0
    beq lbl_fn_801CB130_000006E8
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801CB130_000006E8:
    stw r30, 0x0(r29)
    b lbl_fn_801CB130_00000740
lbl_fn_801CB130_000006F0:
    cmpwi r5, 0x1
    bne lbl_fn_801CB130_0000070C
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801CB130_00000740
lbl_fn_801CB130_0000070C:
    lwz r5, 0x0(r4)
    lis r3, lbl_80782308@ha
    lwz r4, lbl_80782308@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801CB130_00000738
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801CB130_00000740
lbl_fn_801CB130_00000738:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801CB130_00000740:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801CB24C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f2, lbl_80882928
    lfs f1, 0x40(r3)
    lfs f0, lbl_80882920
    lwz r3, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, lbl_80882930
    lwz r0, 0x524(r3)
    lwz r3, 0x2d0(r3)
    mulli r0, r0, 0x2c
    stfs f2, 0x8(r1)
    fsubs f3, f0, f1
    add r3, r3, r0
    lfs f0, 0x4(r3)
    lfs f1, lbl_80882934
    fadds f0, f0, f2
    stfs f2, 0xc(r1)
    fmuls f1, f1, f3
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r3)
    stfs f1, 0x10(r1)
    fadds f0, f0, f2
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r3)
    fadds f0, f0, f1
    stfs f0, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_801CB2BC(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    lfs f2, 0x1c(r3)
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    blr
}

asm void fn_801CB2D4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r5, 0x4(r3)
    addi r31, r5, 0xb0
    lfs f31, 0x2e4(r5)
    mr r3, r31
    bl fn_80097D7C
    fdivs f0, f31, f1
    lfs f10, lbl_80882930
    fcmpo cr0, f10, f0
    bge lbl_fn_801CB2D4_00000838
    b lbl_fn_801CB2D4_0000084C
lbl_fn_801CB2D4_00000838:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f10, f31, f1
lbl_fn_801CB2D4_0000084C:
    lfs f0, 0x18(r29)
    addi r5, r1, 0x20
    lfs f4, 0xc(r29)
    mr r3, r31
    lfs f3, 0x14(r29)
    li r4, 0x0
    fsubs f8, f0, f4
    lfs f0, 0x8(r29)
    lfs f5, 0x1c(r29)
    fsubs f7, f3, f0
    lfs f3, 0x10(r29)
    fmuls f6, f8, f10
    fsubs f9, f5, f3
    stfs f7, 0x14(r1)
    fmuls f5, f7, f10
    fadds f4, f6, f4
    lwz r6, 0x4(r29)
    fmuls f7, f9, f10
    fadds f0, f5, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    fadds f2, f7, f3
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    stfs f8, 0x18(r1)
    lfs f31, 0x234(r31)
    stfs f9, 0x1c(r1)
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f2, 0x28(r1)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801CB2D4_00000904
    lwz r3, 0x4(r29)
    lwz r0, 0x564(r3)
    cmpwi r0, 0x2
    bne lbl_fn_801CB2D4_00000900
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
lbl_fn_801CB2D4_00000900:
    li r30, 0x1
lbl_fn_801CB2D4_00000904:
    psq_l f31, 0x48(r1), 0, 0
    mr r3, r30
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801CB41C(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    lfs f2, 0x1c(r3)
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    blr
}

asm void fn_801CB434(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lis r9, lbl_80782310@ha
    lfs f0, lbl_80882988
    stw r0, 0x104(r1)
    neg r0, r6
    or r0, r0, r6
    addi r9, r9, lbl_80782310@l
    stfd f31, 0xf0(r1)
    srwi r7, r0, 31
    li r8, 0x0
    li r0, 0xb
    psq_st f31, 0xf8(r1), 0, 0
    cmpwi r6, 0x0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r9, 0x0(r3)
    stfs f0, 0x2c(r3)
    stw r8, 0x30(r3)
    stw r7, 0x34(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x4(r3)
    psq_l f1, 0x528(r4), 0, 0
    addi r31, r4, 0xb0
    lfs f2, 0x530(r4)
    stfs f2, 0x28(r3)
    lfs f2, 0x8(r5)
    psq_st f1, 0x20(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    beq lbl_fn_801CB434_000009E4
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0x40(r3)
    psq_st f1, 0x38(r3), 0, 0
lbl_fn_801CB434_000009E4:
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f1, lbl_80882930
    mr r3, r31
    lfs f2, lbl_80882940
    li r4, 0x0
    stfs f1, 0x24c(r31)
    li r5, 0x16c
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882930
    addi r3, r1, 0x5c
    stfs f0, 0x238(r31)
    addi r31, r1, 0x50
    lfs f3, lbl_80882928
    lfs f5, 0x1c(r30)
    lfs f0, 0x28(r30)
    lfs f4, 0x14(r30)
    fsubs f2, f5, f0
    lfs f0, 0x20(r30)
    stfs f3, 0x60(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_80882948
    stfs f2, 0x64(r1)
    stfs f4, 0x5c(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_801CB434_00000A90
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_801CB434_00000A84
    lfs f0, lbl_8088294C
    b lbl_fn_801CB434_00000A88
lbl_fn_801CB434_00000A84:
    lfs f0, lbl_80882950
lbl_fn_801CB434_00000A88:
    stfs f0, 0x48(r1)
    b lbl_fn_801CB434_00000AA4
lbl_fn_801CB434_00000A90:
    fmr f2, f4
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801CB434_00000AA4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882928
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80882930
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882948
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801CB434_00000BC0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882928
    fcmpo cr0, f3, f0
    ble lbl_fn_801CB434_00000BB0
    lfs f0, lbl_8088294C
    b lbl_fn_801CB434_00000BB4
lbl_fn_801CB434_00000BB0:
    lfs f0, lbl_80882950
lbl_fn_801CB434_00000BB4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801CB434_00000BD4
lbl_fn_801CB434_00000BC0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801CB434_00000BD4:
    lfs f0, lbl_80882928
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    lwz r3, 0x4(r30)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_l f1, 0x20(r30), 0, 0
    lfs f2, 0x28(r30)
    psq_st f1, 0x8(r30), 0, 0
    stfs f2, 0x10(r30)
    lwz r0, lbl_8087F498
    stfs f0, 0x4c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_801CB434_00000C50
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801CB434_00000C50
    lwz r3, lbl_8087F498
    li r5, 0x20
    lwz r4, 0x4(r30)
    li r6, 0x0
    lfs f1, lbl_80882930
    lfs f2, lbl_80882968
    bl fn_803EA77C
lbl_fn_801CB434_00000C50:
    psq_l f31, 0xf8(r1), 0, 0
    mr r3, r30
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_801CB76C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_26
    lwz r4, 0x4(r3)
    mr r30, r3
    lwz r0, 0x48(r4)
    addi r31, r4, 0xb0
    cmpwi r0, 0x0
    bne lbl_fn_801CB76C_00000F98
    lwz r4, lbl_8087EFA8
    lfs f4, 0x238(r31)
    lfs f5, 0x3a4(r4)
    lfs f3, 0x2c(r3)
    lfs f0, lbl_80882988
    fnmsubs f3, f5, f4, f3
    lfs f10, lbl_80882928
    stfs f3, 0x2c(r3)
    fdivs f0, f3, f0
    fcmpo cr0, f10, f0
    ble lbl_fn_801CB76C_00000CE0
    b lbl_fn_801CB76C_00000CE4
lbl_fn_801CB76C_00000CE0:
    fmr f10, f0
lbl_fn_801CB76C_00000CE4:
    lfs f0, lbl_80882984
    addi r4, r1, 0x28
    lfs f4, lbl_80882934
    fsubs f5, f10, f0
    lfs f3, lbl_8088298C
    lfs f0, lbl_80882990
    lfs f6, 0x28(r3)
    fmuls f4, f4, f5
    lfs f8, 0x1c(r3)
    lfs f7, 0x24(r3)
    fsubs f9, f6, f8
    lfs f6, 0x18(r3)
    fnmsubs f3, f4, f5, f3
    fsubs f7, f7, f6
    lfs f4, 0x20(r3)
    fmuls f5, f9, f10
    fdivs f0, f3, f0
    lfs f3, 0x14(r3)
    stfs f7, 0x20(r1)
    lfs f11, lbl_80882930
    stfs f5, 0x18(r1)
    stfs f9, 0x24(r1)
    fadds f2, f5, f8
    fsubs f4, f4, f3
    fmuls f7, f7, f10
    stfs f2, 0x30(r1)
    fcmpo cr0, f11, f0
    fmuls f5, f4, f10
    stfs f4, 0x1c(r1)
    fadds f4, f7, f6
    stfs f7, 0x14(r1)
    fadds f3, f5, f3
    stfs f4, 0x2c(r1)
    stfs f3, 0x28(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x10(r1)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    bge lbl_fn_801CB76C_00000D84
    b lbl_fn_801CB76C_00000D88
lbl_fn_801CB76C_00000D84:
    fmr f11, f0
lbl_fn_801CB76C_00000D88:
    lfs f6, lbl_80882928
    fcmpo cr0, f6, f11
    ble lbl_fn_801CB76C_00000D98
    b lbl_fn_801CB76C_00000DCC
lbl_fn_801CB76C_00000D98:
    lfs f0, lbl_80882984
    lfs f4, lbl_80882934
    fsubs f5, f10, f0
    lfs f3, lbl_8088298C
    lfs f0, lbl_80882990
    lfs f6, lbl_80882930
    fmuls f4, f4, f5
    fnmsubs f3, f4, f5, f3
    fdivs f0, f3, f0
    fcmpo cr0, f6, f0
    bge lbl_fn_801CB76C_00000DC8
    b lbl_fn_801CB76C_00000DCC
lbl_fn_801CB76C_00000DC8:
    fmr f6, f0
lbl_fn_801CB76C_00000DCC:
    lfs f5, lbl_80882938
    addi r4, r1, 0x28
    lfs f4, 0x2c(r1)
    lfs f3, lbl_80882920
    lfs f0, 0xc(r3)
    fmadds f4, f5, f6, f4
    lwz r5, 0x4(r3)
    fmadds f0, f3, f6, f0
    stfs f4, 0x2c(r1)
    lfs f2, 0x30(r1)
    stfs f0, 0xc(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801CB76C_00000F3C
    lfs f3, 0x2c(r3)
    lfs f0, lbl_80882928
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801CB76C_00000F3C
    li r29, 0x1
    stw r29, 0x30(r3)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r27, 0x4(r30)
    lwz r26, lbl_8087F048
    lwz r28, 0x638(r27)
    mr r3, r26
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80882928
    stw r0, 0xc(r1)
    mr r3, r26
    lfs f2, lbl_80882930
    mr r5, r28
    lwz r4, 0x4(r30)
    addi r7, r27, 0x528
    addi r8, r27, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, 0x4(r30)
    lfs f0, lbl_80882928
    lfs f3, 0xac8(r3)
    fcmpo cr0, f3, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_801CB76C_00000F04
    li r3, 0x1395
    bl fn_80219E6C
    lwz r26, lbl_8087F048
    mr r27, r3
    mr r3, r26
    bl fn_800F8548
    stw r29, 0x8(r1)
    mr r6, r3
    mr r3, r26
    mr r5, r27
    lwz r4, 0x4(r30)
    li r8, 0x0
    li r9, 0x1e
    li r10, -0x1
    addi r7, r4, 0x528
    bl fn_800FB4B0
    lwz r3, 0x4(r30)
    li r4, 0x1395
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_801CB76C_00000F04
    lwz r3, 0x4(r30)
    mr r4, r27
    mr r5, r3
    bl fn_80178864
lbl_fn_801CB76C_00000F04:
    lwz r3, 0x4(r30)
    lwz r4, 0x648(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801CB76C_00000F3C
    lwz r0, 0x28c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801CB76C_00000F3C
    lwz r3, 0x288(r4)
    subi r3, r3, 0x1
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    stw r0, 0x288(r4)
lbl_fn_801CB76C_00000F3C:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_801CB76C_00000F74
    lfs f3, 0x2c(r30)
    lfs f0, lbl_80882954
    fcmpo cr0, f3, f0
    ble lbl_fn_801CB76C_00000F68
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80882994
    stfs f0, 0x3a4(r3)
    b lbl_fn_801CB76C_00000F74
lbl_fn_801CB76C_00000F68:
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80882930
    stfs f0, 0x3a4(r3)
lbl_fn_801CB76C_00000F74:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801CB76C_00000F98
    li r3, 0x1
    b lbl_fn_801CB76C_00000F9C
lbl_fn_801CB76C_00000F98:
    li r3, 0x0
lbl_fn_801CB76C_00000F9C:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801CBAAC(void)
{
    nofralloc
    psq_l f1, 0x14(r4), 0, 0
    lfs f2, 0x1c(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_801CBAC0(void)
{
    nofralloc
    lfs f1, 0x2c(r3)
    lfs f0, lbl_80882968
    fcmpo cr0, f1, f0
    mfcr r3
    srwi r3, r3, 31
    blr
}

asm void fn_801CBAD8(void)
{
    nofralloc
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_801CBAEC(void)
{
    nofralloc
    lwz r4, lbl_8087EFA8
    lfs f0, lbl_80882930
    stfs f0, 0x3a4(r4)
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801CBAEC_0000102C
    lwz r4, 0x4(r3)
    lfs f2, 0x40(r3)
    psq_l f1, 0x38(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    blr
lbl_fn_801CBAEC_0000102C:
    lwz r4, 0x4(r3)
    lfs f2, 0x1c(r3)
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    blr
}

asm void fn_801CBB34(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x1d0
    bl _savegpr_27
    lwz r0, 0x34(r4)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_801CBB34_00001378
    lfs f2, 0x40(r4)
    li r5, 0x0
    lwz r10, 0x4(r4)
    lis r6, lbl_807822E8@ha
    stfs f2, 0x64(r1)
    addi r9, r1, 0x5c
    lwzu r8, lbl_807822E8@l(r6)
    addi r29, r1, 0x38
    stfs f2, 0x40(r1)
    frsp f2, f2
    lwz r7, 0x4(r6)
    addi r11, r1, 0x50
    lwz r6, 0x8(r6)
    addi r30, r1, 0x44
    psq_l f1, 0x38(r4), 0, 0
    stfs f2, 0x58(r1)
    addi r12, r1, 0x17c
    addi r4, r1, 0x1a0
    addi r27, r1, 0x88
    stfs f2, 0x4c(r1)
    frsp f2, f2
    addi r28, r1, 0x168
    stw r5, 0x0(r3)
    stfs f2, 0x184(r1)
    frsp f2, f2
    lbz r0, lbl_8087F11A
    stfs f2, 0x1a8(r1)
    extsb. r0, r0
    stfs f2, 0x90(r1)
    frsp f2, f2
    psq_st f1, 0x0(r9), 0, 0
    stw r8, 0x68(r1)
    stw r7, 0x6c(r1)
    stw r6, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r11), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stw r10, 0x178(r1)
    psq_st f1, 0x0(r12), 0, 0
    stb r5, 0x188(r1)
    stw r8, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r8, 0x14(r1)
    stw r7, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r8, 0x190(r1)
    stw r7, 0x194(r1)
    stw r6, 0x198(r1)
    stw r10, 0x19c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stb r5, 0x1ac(r1)
    stw r8, 0x78(r1)
    stw r7, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r10, 0x84(r1)
    psq_st f1, 0x0(r27), 0, 0
    stb r5, 0x94(r1)
    stw r8, 0x158(r1)
    stw r7, 0x15c(r1)
    stw r6, 0x160(r1)
    stw r10, 0x164(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x170(r1)
    stb r5, 0x174(r1)
    bne lbl_fn_801CBB34_00001218
    frsp f2, f2
    lis r12, lbl_807C7C98@ha
    addi r28, r1, 0xa8
    addi r9, r1, 0x108
    addi r11, r1, 0xe8
    lis r4, fn_801CBE84@ha
    lis r3, fn_801CBEB8@ha
    stfs f2, 0xb0(r1)
    li r0, 0x1
    addi r12, r12, lbl_807C7C98@l
    stfs f2, 0x110(r1)
    frsp f2, f2
    addi r4, r4, fn_801CBE84@l
    addi r3, r3, fn_801CBEB8@l
    stw r8, 0x98(r1)
    stw r7, 0x9c(r1)
    stw r6, 0xa0(r1)
    stw r10, 0xa4(r1)
    psq_st f1, 0x0(r28), 0, 0
    stb r5, 0xb4(r1)
    stw r8, 0xf8(r1)
    stw r7, 0xfc(r1)
    stw r6, 0x100(r1)
    stw r10, 0x104(r1)
    psq_st f1, 0x0(r9), 0, 0
    stb r5, 0x114(r1)
    stw r8, 0xd8(r1)
    stw r7, 0xdc(r1)
    stw r6, 0xe0(r1)
    stw r10, 0xe4(r1)
    psq_st f1, 0x0(r11), 0, 0
    stfs f2, 0xf0(r1)
    stb r5, 0xf4(r1)
    stw r4, 0x4(r12)
    stw r3, 0x0(r12)
    stb r0, lbl_8087F11A
lbl_fn_801CBB34_00001218:
    addi r3, r1, 0x168
    lwz r7, 0x158(r1)
    lwz r6, 0x15c(r1)
    addi r9, r1, 0xc8
    lwz r5, 0x160(r1)
    addi r8, r1, 0x148
    lwz r4, 0x164(r1)
    addi r28, r1, 0x138
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x170(r1)
    lbz r0, 0x174(r1)
    stw r7, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0xd0(r1)
    stb r0, 0xd4(r1)
    stw r7, 0x138(r1)
    stw r6, 0x13c(r1)
    stw r5, 0x140(r1)
    stw r4, 0x144(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x150(r1)
    stb r0, 0x154(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801CBB34_00001350
    lwz r7, 0x138(r1)
    addi r8, r1, 0x128
    lwz r6, 0x13c(r1)
    li r3, 0x20
    lwz r5, 0x140(r1)
    lwz r4, 0x144(r1)
    psq_l f1, 0x10(r28), 0, 0
    lfs f2, 0x150(r1)
    lbz r0, 0x154(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r5, 0x120(r1)
    stw r4, 0x124(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x130(r1)
    stb r0, 0x134(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_801CBB34_00001300
    lis r3, __files@ha
    lis r4, lbl_80782480@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80782480@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801CBB34_00001300:
    cmpwi r28, 0x0
    beq lbl_fn_801CBB34_00001344
    lwz r0, 0x118(r1)
    addi r3, r1, 0x128
    stw r0, 0x0(r28)
    lwz r0, 0x11c(r1)
    stw r0, 0x4(r28)
    lwz r0, 0x120(r1)
    stw r0, 0x8(r28)
    lwz r0, 0x124(r1)
    stw r0, 0xc(r28)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r28), 0, 0
    lfs f2, 0x130(r1)
    stfs f2, 0x18(r28)
    lbz r0, 0x134(r1)
    stb r0, 0x1c(r28)
lbl_fn_801CBB34_00001344:
    stw r28, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801CBB34_00001354
lbl_fn_801CBB34_00001350:
    li r0, 0x0
lbl_fn_801CBB34_00001354:
    cmpwi r0, 0x0
    beq lbl_fn_801CBB34_0000136C
    lis r3, lbl_807C7C98@ha
    addi r3, r3, lbl_807C7C98@l
    stw r3, 0x0(r31)
    b lbl_fn_801CBB34_0000137C
lbl_fn_801CBB34_0000136C:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801CBB34_0000137C
lbl_fn_801CBB34_00001378:
    bl fn_80192758
lbl_fn_801CBB34_0000137C:
    addi r11, r1, 0x1d0
    bl _restgpr_27
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_801CBE84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    addi r4, r12, 0x10
    lbz r5, 0x1c(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CBEB8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801CBEB8_00001400
    lis r3, lbl_807822F8@ha
    addi r3, r3, lbl_807822F8@l
    stw r3, 0x0(r4)
    b lbl_fn_801CBEB8_000014D8
lbl_fn_801CBEB8_00001400:
    cmpwi r5, 0x0
    bne lbl_fn_801CBEB8_00001488
    lwz r31, 0x0(r3)
    li r3, 0x20
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801CBEB8_00001440
    lis r3, __files@ha
    lis r4, lbl_80782480@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80782480@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801CBEB8_00001440:
    cmpwi r30, 0x0
    beq lbl_fn_801CBEB8_00001480
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lfs f2, 0x18(r31)
    psq_l f1, 0x10(r31), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
    lbz r0, 0x1c(r31)
    stb r0, 0x1c(r30)
lbl_fn_801CBEB8_00001480:
    stw r30, 0x0(r29)
    b lbl_fn_801CBEB8_000014D8
lbl_fn_801CBEB8_00001488:
    cmpwi r5, 0x1
    bne lbl_fn_801CBEB8_000014A4
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801CBEB8_000014D8
lbl_fn_801CBEB8_000014A4:
    lwz r5, 0x0(r4)
    lis r3, lbl_807822F8@ha
    lwz r4, lbl_807822F8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801CBEB8_000014D0
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801CBEB8_000014D8
lbl_fn_801CBEB8_000014D0:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801CBEB8_000014D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801CBFE4(void)
{
    nofralloc
    lwz r3, 0x30(r3)
    blr
}

asm void fn_801CBFEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801CBFEC_00001524
    cmpwi r4, 0x0
    ble lbl_fn_801CBFEC_00001524
    bl dtor_80084684
lbl_fn_801CBFEC_00001524:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CC02C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801CC02C_00001564
    cmpwi r4, 0x0
    ble lbl_fn_801CC02C_00001564
    bl dtor_80084684
lbl_fn_801CC02C_00001564:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CC06C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801CC06C_000015A4
    cmpwi r4, 0x0
    ble lbl_fn_801CC06C_000015A4
    bl dtor_80084684
lbl_fn_801CC06C_000015A4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CC0AC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lwz r6, 0x20(r5)
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r29, r3
    subis r3, r6, 0x3
    mr r30, r4
    subi r0, r3, 0x1416
    mr r31, r5
    cmplwi r0, 0x9
    bgt lbl_fn_801CC0AC_00001628
    lis r3, 0x6666
    lwz r4, lbl_8087F4F0
    addi r0, r3, 0x6667
    mulhw r0, r0, r6
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xa
    subf r0, r0, r6
    slwi r0, r0, 2
    add r3, r4, r0
    lwz r3, 0x64a0(r3)
    bl fn_80219544
    mr r6, r3
    b lbl_fn_801CC0AC_000016B0
lbl_fn_801CC0AC_00001628:
    cmplwi r3, 0x13ec
    beq lbl_fn_801CC0AC_00001664
    cmplwi r3, 0x13ed
    beq lbl_fn_801CC0AC_0000166C
    cmplwi r3, 0x13fa
    beq lbl_fn_801CC0AC_00001678
    cmplwi r3, 0x13fb
    beq lbl_fn_801CC0AC_00001684
    cmplwi r3, 0x1c92
    beq lbl_fn_801CC0AC_00001690
    cmplwi r3, 0x1c93
    beq lbl_fn_801CC0AC_0000169C
    cmplwi r3, 0x1c94
    beq lbl_fn_801CC0AC_000016A8
    b lbl_fn_801CC0AC_000016B0
lbl_fn_801CC0AC_00001664:
    li r6, 0x1
    b lbl_fn_801CC0AC_000016B0
lbl_fn_801CC0AC_0000166C:
    lis r3, 0x2
    subi r6, r3, 0x7897
    b lbl_fn_801CC0AC_000016B0
lbl_fn_801CC0AC_00001678:
    lis r3, 0x2
    subi r6, r3, 0x776b
    b lbl_fn_801CC0AC_000016B0
lbl_fn_801CC0AC_00001684:
    lis r3, 0x2
    subi r6, r3, 0x77cf
    b lbl_fn_801CC0AC_000016B0
lbl_fn_801CC0AC_00001690:
    lis r3, 0x2
    subi r6, r3, 0x77cf
    b lbl_fn_801CC0AC_000016B0
lbl_fn_801CC0AC_0000169C:
    lis r3, 0x2
    subi r6, r3, 0x776b
    b lbl_fn_801CC0AC_000016B0
lbl_fn_801CC0AC_000016A8:
    lis r3, 0x2
    subi r6, r3, 0x7707
lbl_fn_801CC0AC_000016B0:
    mr r3, r29
    mr r4, r30
    mr r5, r6
    bl fn_8035B694
    lis r3, lbl_807824D8@ha
    li r28, 0x0
    addi r3, r3, lbl_807824D8@l
    stw r3, 0x0(r29)
    addi r3, r29, 0x14bc
    stw r28, 0x14b0(r29)
    stw r28, 0x14b4(r29)
    stw r28, 0x14b8(r29)
    bl fn_802377B8
    addi r3, r29, 0x14c8
    bl fn_802377B8
    addi r27, r29, 0x14d4
    mr r3, r27
    bl fn_80473E74
    lwz r0, 0x54c(r29)
    lis r3, lbl_8078FEF0@ha
    lis r5, fn_802180A8@ha
    lis r30, lbl_8073BC30@ha
    addi r3, r3, lbl_8078FEF0@l
    ori r0, r0, 0x2000
    addi r5, r5, fn_802180A8@l
    stw r3, 0x0(r27)
    addi r3, r29, 0x14bc
    addi r4, r30, lbl_8073BC30@l
    stw r5, 0x8(r27)
    stw r0, 0x54c(r29)
    bl fn_8023780C
    addi r30, r30, lbl_8073BC30@l
    addi r3, r29, 0x14c8
    addi r4, r30, 0x15
    bl fn_8023780C
    lwz r3, 0x20(r31)
    bl fn_8020924C
    addi r27, r30, 0x2a
    stw r28, 0x2c(r1)
    mr r30, r3
    addi r31, r1, 0x2c
    stw r28, 0x30(r1)
    mr r3, r27
    stw r28, 0x34(r1)
    bl strlen
    mr r28, r3
    mr r3, r31
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r31
    stb r0, 0x18(r1)
    mr r6, r27
    add r7, r27, r28
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x2c(r1)
    lwz r27, 0x18(r30)
    srwi. r0, r0, 31
    bne lbl_fn_801CC0AC_000017B4
    lbz r0, 0x2c(r1)
    clrlwi r28, r0, 25
    b lbl_fn_801CC0AC_000017B8
lbl_fn_801CC0AC_000017B4:
    lwz r28, 0x30(r1)
lbl_fn_801CC0AC_000017B8:
    lbz r0, 0x14(r1)
    mr r3, r27
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r4, r28
    mr r6, r27
    addi r3, r1, 0x2c
    add r7, r27, r0
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_8073BC30@ha
    li r0, 0x0
    addi r3, r3, lbl_8073BC30@l
    stw r0, 0x20(r1)
    addi r27, r3, 0x42
    addi r28, r1, 0x20
    stw r0, 0x24(r1)
    mr r3, r27
    stw r0, 0x28(r1)
    bl strlen
    mr r30, r3
    mr r3, r28
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    mr r6, r27
    add r7, r27, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x2c
    bl fn_8006AD24
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801CC0AC_00001864
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_801CC0AC_00001864:
    lwz r0, 0x2c(r1)
    addi r3, r29, 0x14d4
    srwi. r0, r0, 31
    bne lbl_fn_801CC0AC_0000187C
    addi r4, r1, 0x2d
    b lbl_fn_801CC0AC_00001880
lbl_fn_801CC0AC_0000187C:
    lwz r4, 0x34(r1)
lbl_fn_801CC0AC_00001880:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801CC0AC_000018A4
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_801CC0AC_000018A4:
    mr r3, r29
    lmw r27, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801CC3AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_801CC3AC_00001950
    addic. r3, r3, 0x14d4
    beq lbl_fn_801CC3AC_000018F4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_801CC3AC_000018F4:
    addic. r31, r29, 0x14c8
    beq lbl_fn_801CC3AC_00001914
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_801CC3AC_00001914
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_801CC3AC_00001914:
    addic. r31, r29, 0x14bc
    beq lbl_fn_801CC3AC_00001934
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_801CC3AC_00001934
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_801CC3AC_00001934:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_801CC3AC_00001950
    mr r3, r29
    bl dtor_80084684
lbl_fn_801CC3AC_00001950:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
