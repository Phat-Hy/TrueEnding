#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_801028E4(void);
extern void fn_801077A8(void);
extern void fn_80107850(void);
extern void fn_801079C0(void);
extern void fn_80107A68(void);
extern void fn_80107A78(void);
extern void fn_80107FD8(void);
extern void fn_80108080(void);
extern void fn_80109828(void);
extern void fn_8012476C(void);
extern void fn_8013310C(void);
extern void fn_80133130(void);
extern void fn_8013322C(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_80154344(void);
extern void fn_80154654(void);
extern void fn_8015495C(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_80188F08(void);
extern void fn_80188F40(void);
extern void fn_80191960(void);
extern void fn_8019198C(void);
extern void fn_80192758(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_80739130[];
extern u8 lbl_807396D8[];
extern u8 lbl_8077CF28[];
extern u8 lbl_8077D614[];
extern u8 lbl_8077D620[];
extern u8 lbl_8077D62C[];
extern u8 lbl_8077D638[];
extern u8 lbl_8077D644[];
extern u8 lbl_8077D680[];
extern u8 lbl_8077D688[];
extern u8 lbl_8077D690[];
extern u8 lbl_8077D818[];
extern u8 lbl_8077D890[];
extern u8 lbl_8077D908[];
extern u8 lbl_8077D980[];
extern u8 lbl_8077DBD8[];
extern u8 lbl_8077DBF4[];
extern u8 lbl_8077DC10[];
extern u8 lbl_807C7B58[];
extern u8 lbl_807C7B78[];
extern u8 lbl_807C7B80[];
extern u8 lbl_807C7B88[];
extern u8 lbl_807C7B90[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0B2;
extern u32 lbl_8087F0BB;
extern u32 lbl_8087F0BC;
extern u32 lbl_8087F0BD;
extern u32 lbl_8087F0BE;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087FA20;
extern u32 lbl_808813D0;
extern u32 lbl_80881F68;
extern u32 lbl_80881F6C;
extern u32 lbl_80881F70;
extern u32 lbl_80881F74;
extern u32 lbl_80881F7C;
extern u32 lbl_80881F90;
extern u32 lbl_80881F94;
extern u32 lbl_80881F98;
extern u32 lbl_80881F9C;
extern u32 lbl_80881FA0;

/* Function declarations */
void fn_8018FF64(void);
void fn_8018FF6C(void);
void fn_80190150(void);
void fn_80190270(void);
void fn_801905AC(void);
void fn_801905DC(void);
void fn_801906F8(void);
void fn_80190728(void);
void fn_80190844(void);
void fn_801908F0(void);
void fn_80190A2C(void);
void fn_80190AB0(void);
void fn_80190AB8(void);
void fn_80190D34(void);
void fn_80190D64(void);
void fn_80190E80(void);
void fn_80190F40(void);
void fn_80190F90(void);
void fn_80191170(void);
void fn_801915B8(void);
void fn_8019163C(void);
void fn_80191828(void);

asm void fn_8018FF64(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8018FF6C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r7, lbl_8077D980@ha
    stw r0, 0xa4(r1)
    addi r7, r7, lbl_8077D980@l
    li r0, 0x0
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stw r5, 0x8(r3)
    stw r6, 0xc(r3)
    stw r0, 0x58c(r4)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8018FF6C_000000A0
    lwz r4, 0x4(r3)
    li r0, 0x35
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8018FF6C_0000008C
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    bne lbl_fn_8018FF6C_0000008C
    addi r3, r3, 0x7d4
    lis r4, 0x1
    li r5, 0x1c2
    li r6, 0x0
    bl fn_80133130
    b lbl_fn_8018FF6C_000000C0
lbl_fn_8018FF6C_0000008C:
    addi r3, r3, 0x7d4
    lis r4, 0x1
    li r5, 0x0
    bl fn_8013310C
    b lbl_fn_8018FF6C_000000C0
lbl_fn_8018FF6C_000000A0:
    lwz r6, 0x4(r3)
    li r0, 0x34
    li r4, 0x100
    li r5, 0x0
    stw r0, 0x560(r6)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013310C
lbl_fn_8018FF6C_000000C0:
    lwz r3, 0x4(r31)
    bl fn_8016DA4C
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x10
    lwz r5, 0x4(r31)
    lwz r4, 0xdc(r4)
    lwz r5, 0x60(r5)
    cmpwi r4, 0x0
    beq lbl_fn_8018FF6C_000000E8
    b lbl_fn_8018FF6C_000000EC
lbl_fn_8018FF6C_000000E8:
    la r4, lbl_808813D0
lbl_fn_8018FF6C_000000EC:
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x10
    bl fn_80109828
    lwz r3, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_80881F7C
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    li r5, 0x40
    stfs f0, 0x24c(r30)
    mr r3, r30
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8018FF6C_00000138
    li r5, 0x72
lbl_fn_8018FF6C_00000138:
    lfs f1, lbl_80881F70
    li r6, 0x0
    lfs f2, lbl_80881F90
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    stfs f0, 0x238(r30)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8018FF6C_00000178
    lwz r3, lbl_8087F048
    mr r4, r30
    mr r5, r30
    bl fn_80107A78
    b lbl_fn_8018FF6C_00000188
lbl_fn_8018FF6C_00000178:
    lwz r3, lbl_8087F048
    mr r4, r30
    mr r5, r30
    bl fn_801077A8
lbl_fn_8018FF6C_00000188:
    lwz r4, 0x4(r31)
    lis r6, lbl_807396D8@ha
    addi r6, r6, lbl_807396D8@l
    lfs f1, lbl_80881F7C
    addi r5, r4, 0x528
    addi r3, r1, 0x8
    addi r4, r6, 0x1b
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F048
    li r4, 0x0
    lwz r5, 0x4(r31)
    li r6, 0x0
    bl fn_801028E4
    mr r3, r31
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80190150(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xc(r3)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x0
    addi r4, r3, 0xb0
    beq lbl_fn_80190150_00000238
    lwz r0, 0x7e0(r3)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_80190150_00000258
    li r3, 0x1
    b lbl_fn_80190150_000002F0
lbl_fn_80190150_00000238:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_80190150_00000258
    lwz r3, lbl_8087F048
    bl fn_80107850
    li r3, 0x1
    b lbl_fn_80190150_000002F0
lbl_fn_80190150_00000258:
    lfs f31, 0x234(r4)
    mr r3, r4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80190150_000002EC
    lwz r3, 0x4(r31)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80190150_00000290
    lwz r4, 0xc50(r3)
    li r5, 0x238d
    bl fn_80154654
lbl_fn_80190150_00000290:
    lwz r3, 0x4(r31)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r3, 0x4(r31)
    li r0, 0x0
    stw r0, 0xd1c(r3)
    lwz r4, 0x4(r31)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80190150_000002D0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x68(r3)
    stw r0, 0xf84(r4)
lbl_fn_80190150_000002D0:
    lwz r4, 0x4(r31)
    li r3, 0x1
    lwz r5, 0x8(r31)
    lwz r0, 0xf14(r4)
    stw r0, 0xf18(r4)
    stw r5, 0xf14(r4)
    b lbl_fn_80190150_000002F0
lbl_fn_80190150_000002EC:
    li r3, 0x0
lbl_fn_80190150_000002F0:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80190270(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lwz r8, 0x4(r4)
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    lwz r0, 0x48(r8)
    cmpwi r0, 0x0
    bne lbl_fn_80190270_000004B4
    lis r4, lbl_8077D614@ha
    lwzu r6, lbl_8077D614@l(r4)
    li r7, 0x2
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r8, 0x10(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BC
    stw r7, 0x14(r1)
    extsb. r0, r0
    stw r6, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r6, 0xac(r1)
    stw r5, 0xb0(r1)
    stw r4, 0xb4(r1)
    stw r8, 0xb8(r1)
    stw r7, 0xbc(r1)
    bne lbl_fn_80190270_000003B8
    lis r6, lbl_807C7B80@ha
    lis r4, fn_801906F8@ha
    lis r3, fn_80190728@ha
    li r0, 0x1
    addi r3, r3, fn_80190728@l
    addi r5, r6, lbl_807C7B80@l
    addi r4, r4, fn_801906F8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B80@l(r6)
    stb r0, lbl_8087F0BC
lbl_fn_80190270_000003B8:
    lwz r7, 0xac(r1)
    addi r3, r1, 0x84
    lwz r6, 0xb0(r1)
    lwz r5, 0xb4(r1)
    lwz r4, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r7, 0x84(r1)
    stw r6, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80190270_0000048C
    lwz r7, 0x84(r1)
    li r3, 0x14
    lwz r6, 0x88(r1)
    lwz r5, 0x8c(r1)
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r7, 0x70(r1)
    stw r6, 0x74(r1)
    stw r5, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r0, 0x80(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80190270_00000450
    lis r3, __files@ha
    lis r4, lbl_8077DBF4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DBF4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80190270_00000450:
    cmpwi r30, 0x0
    beq lbl_fn_80190270_00000480
    lwz r0, 0x70(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x74(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x78(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x7c(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x80(r1)
    stw r0, 0x10(r30)
lbl_fn_80190270_00000480:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80190270_00000490
lbl_fn_80190270_0000048C:
    li r0, 0x0
lbl_fn_80190270_00000490:
    cmpwi r0, 0x0
    beq lbl_fn_80190270_000004A8
    lis r3, lbl_807C7B80@ha
    addi r3, r3, lbl_807C7B80@l
    stw r3, 0x0(r31)
    b lbl_fn_80190270_00000630
lbl_fn_80190270_000004A8:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_80190270_00000630
lbl_fn_80190270_000004B4:
    lis r4, lbl_8077D620@ha
    lwzu r6, lbl_8077D620@l(r4)
    lwz r7, 0x564(r8)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r8, 0x8(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BB
    stw r7, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r6, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r8, 0xa4(r1)
    stw r7, 0xa8(r1)
    bne lbl_fn_80190270_00000538
    lis r6, lbl_807C7B78@ha
    lis r4, fn_801905AC@ha
    lis r3, fn_801905DC@ha
    li r0, 0x1
    addi r3, r3, fn_801905DC@l
    addi r5, r6, lbl_807C7B78@l
    addi r4, r4, fn_801905AC@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B78@l(r6)
    stb r0, lbl_8087F0BB
lbl_fn_80190270_00000538:
    lwz r7, 0x98(r1)
    addi r3, r1, 0x5c
    lwz r6, 0x9c(r1)
    lwz r5, 0xa0(r1)
    lwz r4, 0xa4(r1)
    lwz r0, 0xa8(r1)
    stw r7, 0x5c(r1)
    stw r6, 0x60(r1)
    stw r5, 0x64(r1)
    stw r4, 0x68(r1)
    stw r0, 0x6c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80190270_0000060C
    lwz r7, 0x5c(r1)
    li r3, 0x14
    lwz r6, 0x60(r1)
    lwz r5, 0x64(r1)
    lwz r4, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80190270_000005D0
    lis r3, __files@ha
    lis r4, lbl_8077DC10@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC10@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80190270_000005D0:
    cmpwi r30, 0x0
    beq lbl_fn_80190270_00000600
    lwz r0, 0x48(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x4c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x50(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x54(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x58(r1)
    stw r0, 0x10(r30)
lbl_fn_80190270_00000600:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80190270_00000610
lbl_fn_80190270_0000060C:
    li r0, 0x0
lbl_fn_80190270_00000610:
    cmpwi r0, 0x0
    beq lbl_fn_80190270_00000628
    lis r3, lbl_807C7B78@ha
    addi r3, r3, lbl_807C7B78@l
    stw r3, 0x0(r31)
    b lbl_fn_80190270_00000630
lbl_fn_80190270_00000628:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80190270_00000630:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_801905AC(void)
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

asm void fn_801905DC(void)
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
    bne lbl_fn_801905DC_000006B0
    lis r3, lbl_8077D688@ha
    addi r3, r3, lbl_8077D688@l
    stw r3, 0x0(r4)
    b lbl_fn_801905DC_00000778
lbl_fn_801905DC_000006B0:
    cmpwi r5, 0x0
    bne lbl_fn_801905DC_00000728
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801905DC_000006F0
    lis r3, __files@ha
    lis r4, lbl_8077DC10@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC10@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801905DC_000006F0:
    cmpwi r30, 0x0
    beq lbl_fn_801905DC_00000720
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
lbl_fn_801905DC_00000720:
    stw r30, 0x0(r29)
    b lbl_fn_801905DC_00000778
lbl_fn_801905DC_00000728:
    cmpwi r5, 0x1
    bne lbl_fn_801905DC_00000744
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801905DC_00000778
lbl_fn_801905DC_00000744:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077D688@ha
    lwz r4, lbl_8077D688@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801905DC_00000770
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801905DC_00000778
lbl_fn_801905DC_00000770:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801905DC_00000778:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801906F8(void)
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

asm void fn_80190728(void)
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
    bne lbl_fn_80190728_000007FC
    lis r3, lbl_8077D690@ha
    addi r3, r3, lbl_8077D690@l
    stw r3, 0x0(r4)
    b lbl_fn_80190728_000008C4
lbl_fn_80190728_000007FC:
    cmpwi r5, 0x0
    bne lbl_fn_80190728_00000874
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80190728_0000083C
    lis r3, __files@ha
    lis r4, lbl_8077DBF4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DBF4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80190728_0000083C:
    cmpwi r30, 0x0
    beq lbl_fn_80190728_0000086C
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
lbl_fn_80190728_0000086C:
    stw r30, 0x0(r29)
    b lbl_fn_80190728_000008C4
lbl_fn_80190728_00000874:
    cmpwi r5, 0x1
    bne lbl_fn_80190728_00000890
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_80190728_000008C4
lbl_fn_80190728_00000890:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077D690@ha
    lwz r4, lbl_8077D690@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80190728_000008BC
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_80190728_000008C4
lbl_fn_80190728_000008BC:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_80190728_000008C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80190844(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80190844_00000978
    mr r3, r0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r4, 0x4(r31)
    lwz r6, 0x7e0(r4)
    rlwinm r0, r6, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80190844_00000978
    lwz r5, 0xc(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80190844_00000948
    rlwinm r3, r6, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_80190844_0000095C
lbl_fn_80190844_00000948:
    cmpwi r5, 0x0
    bne lbl_fn_80190844_00000978
    rlwinm r0, r6, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80190844_00000978
lbl_fn_80190844_0000095C:
    li r0, 0x0
    stw r0, 0xd1c(r4)
    lwz r3, 0x4(r31)
    lwz r4, 0x8(r31)
    lwz r0, 0xf14(r3)
    stw r0, 0xf18(r3)
    stw r4, 0xf14(r3)
lbl_fn_80190844_00000978:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801908F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8077D908@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8077D908@l
    li r0, 0x6a
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r5, 0x0(r3)
    li r5, 0x0
    stw r4, 0x4(r3)
    stw r6, 0x8(r3)
    stw r6, 0xc(r3)
    stw r0, 0x560(r4)
    li r4, 0x10
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013310C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    lwz r3, 0x4(r31)
    bl fn_8016DA4C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801908F0_00000A08
    bl fn_801539E0
lbl_fn_801908F0_00000A08:
    lwz r3, 0x4(r31)
    li r4, 0x0
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801908F0_00000A2C
    lwz r0, 0xc48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801908F0_00000A2C
    li r4, 0x1
lbl_fn_801908F0_00000A2C:
    cmpwi r4, 0x0
    beq lbl_fn_801908F0_00000A38
    bl fn_80154344
lbl_fn_801908F0_00000A38:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801908F0_00000A50
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801908F0_00000A50:
    lwz r3, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_80881F7C
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    lfs f1, lbl_80881F70
    mr r3, r30
    lfs f2, lbl_80881F90
    li r5, 0x7
    stfs f0, 0x24c(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    stfs f0, 0x238(r30)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801908F0_00000AAC
    mr r4, r30
    mr r5, r30
    bl fn_80107FD8
lbl_fn_801908F0_00000AAC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80190A2C(void)
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
    beq lbl_fn_80190A2C_00000B30
    lis r5, lbl_8077D908@ha
    lwz r4, 0x4(r3)
    addi r5, r5, lbl_8077D908@l
    stw r5, 0x0(r3)
    addi r3, r4, 0x7d4
    li r4, 0x10
    bl fn_8013322C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80190A2C_00000B20
    lwz r4, 0x4(r30)
    addi r4, r4, 0xb0
    bl fn_80108080
lbl_fn_80190A2C_00000B20:
    cmpwi r31, 0x0
    ble lbl_fn_80190A2C_00000B30
    mr r3, r30
    bl dtor_80084684
lbl_fn_80190A2C_00000B30:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80190AB0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80190AB8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_807396D8@ha
    li r7, 0x0
    stw r0, 0x84(r1)
    addi r5, r5, lbl_807396D8@l
    addi r5, r5, 0xd
    stw r31, 0x7c(r1)
    mr r31, r3
    li r3, 0x8
    mr r6, r5
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80190AB8_00000C34
    lwz r6, 0x4(r28)
    lis r4, lbl_8077D890@ha
    stw r6, 0x4(r3)
    addi r4, r4, lbl_8077D890@l
    li r5, 0x0
    li r0, 0x6b
    stw r4, 0x0(r3)
    li r4, 0x10
    stw r5, 0x58c(r6)
    lwz r5, 0x4(r3)
    stw r0, 0x560(r5)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_80881F7C
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    lfs f1, lbl_80881F70
    mr r3, r29
    lfs f2, lbl_80881F90
    li r5, 0x8
    stfs f0, 0x24c(r29)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    stfs f0, 0x238(r29)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80190AB8_00000C34
    mr r4, r29
    bl fn_80108080
lbl_fn_80190AB8_00000C34:
    lis r3, lbl_8077D62C@ha
    lwzu r5, lbl_8077D62C@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0BD
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r30, 0x60(r1)
    bne lbl_fn_80190AB8_00000CB8
    lis r6, lbl_807C7B88@ha
    lis r4, fn_80190D34@ha
    lis r3, fn_80190D64@ha
    li r0, 0x1
    addi r3, r3, fn_80190D64@l
    addi r5, r6, lbl_807C7B88@l
    addi r4, r4, fn_80190D34@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B88@l(r6)
    stb r0, lbl_8087F0BD
lbl_fn_80190AB8_00000CB8:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80190AB8_00000D8C
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80190AB8_00000D50
    lis r3, __files@ha
    lis r4, lbl_8077DBD8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DBD8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80190AB8_00000D50:
    cmpwi r30, 0x0
    beq lbl_fn_80190AB8_00000D80
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_80190AB8_00000D80:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80190AB8_00000D90
lbl_fn_80190AB8_00000D8C:
    li r0, 0x0
lbl_fn_80190AB8_00000D90:
    cmpwi r0, 0x0
    beq lbl_fn_80190AB8_00000DA8
    lis r3, lbl_807C7B88@ha
    addi r3, r3, lbl_807C7B88@l
    stw r3, 0x0(r31)
    b lbl_fn_80190AB8_00000DB0
lbl_fn_80190AB8_00000DA8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80190AB8_00000DB0:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80190D34(void)
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

asm void fn_80190D64(void)
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
    bne lbl_fn_80190D64_00000E38
    lis r3, lbl_8077D680@ha
    addi r3, r3, lbl_8077D680@l
    stw r3, 0x0(r4)
    b lbl_fn_80190D64_00000F00
lbl_fn_80190D64_00000E38:
    cmpwi r5, 0x0
    bne lbl_fn_80190D64_00000EB0
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80190D64_00000E78
    lis r3, __files@ha
    lis r4, lbl_8077DBD8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DBD8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80190D64_00000E78:
    cmpwi r30, 0x0
    beq lbl_fn_80190D64_00000EA8
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
lbl_fn_80190D64_00000EA8:
    stw r30, 0x0(r29)
    b lbl_fn_80190D64_00000F00
lbl_fn_80190D64_00000EB0:
    cmpwi r5, 0x1
    bne lbl_fn_80190D64_00000ECC
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_80190D64_00000F00
lbl_fn_80190D64_00000ECC:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077D680@ha
    lwz r4, lbl_8077D680@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80190D64_00000EF8
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_80190D64_00000F00
lbl_fn_80190D64_00000EF8:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_80190D64_00000F00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80190E80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8077D890@ha
    li r5, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8077D890@l
    li r0, 0x6b
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x58c(r4)
    li r4, 0x10
    lwz r5, 0x4(r3)
    stw r0, 0x560(r5)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_80881F7C
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_80881F70
    mr r3, r31
    lfs f2, lbl_80881F90
    li r5, 0x8
    stfs f0, 0x24c(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    stfs f0, 0x238(r31)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80190E80_00000FC0
    mr r4, r31
    bl fn_80108080
lbl_fn_80190E80_00000FC0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80190F40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    lwz r3, 0x4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    extrwi r3, r3, 1, 2
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80190F90(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r8, 0x4(r4)
    lwz r0, 0x564(r8)
    cmpwi r0, 0x7
    bne lbl_fn_80190F90_0000105C
    bl fn_80192758
    b lbl_fn_80190F90_000011F4
lbl_fn_80190F90_0000105C:
    lis r4, lbl_8077D638@ha
    lwzu r6, lbl_8077D638@l(r4)
    li r7, 0x0
    stw r8, 0x8(r1)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stb r7, 0xc(r1)
    stw r7, 0x0(r3)
    lbz r0, lbl_8087F0B2
    stb r7, 0xd(r1)
    extsb. r0, r0
    stb r7, 0xe(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r8, 0x5c(r1)
    stb r7, 0x60(r1)
    stb r7, 0x61(r1)
    stb r7, 0x62(r1)
    bne lbl_fn_80190F90_000010EC
    lis r6, lbl_807C7B58@ha
    lis r4, fn_80188F08@ha
    lis r3, fn_80188F40@ha
    li r0, 0x1
    addi r3, r3, fn_80188F40@l
    addi r5, r6, lbl_807C7B58@l
    addi r4, r4, fn_80188F08@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B58@l(r6)
    stb r0, lbl_8087F0B2
lbl_fn_80190F90_000010EC:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80190F90_000011D0
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80190F90_00001184
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80190F90_00001184:
    cmpwi r30, 0x0
    beq lbl_fn_80190F90_000011C4
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lbz r0, 0x38(r1)
    stb r0, 0x10(r30)
    lbz r0, 0x39(r1)
    stb r0, 0x11(r30)
    lbz r0, 0x3a(r1)
    stb r0, 0x12(r30)
lbl_fn_80190F90_000011C4:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80190F90_000011D4
lbl_fn_80190F90_000011D0:
    li r0, 0x0
lbl_fn_80190F90_000011D4:
    cmpwi r0, 0x0
    beq lbl_fn_80190F90_000011EC
    lis r3, lbl_807C7B58@ha
    addi r3, r3, lbl_807C7B58@l
    stw r3, 0x0(r31)
    b lbl_fn_80190F90_000011F4
lbl_fn_80190F90_000011EC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80190F90_000011F4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80191170(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    xoris r6, r6, 0x8000
    lis r8, lbl_80739130@ha
    stw r0, 0x164(r1)
    lis r0, 0x4330
    lfd f3, lbl_80739130@l(r8)
    lis r8, lbl_8077D818@ha
    stfd f31, 0x150(r1)
    addi r8, r8, lbl_8077D818@l
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    mr r31, r5
    li r5, 0x0
    stw r30, 0x138(r1)
    mr r30, r3
    stw r6, 0x124(r1)
    li r6, 0x0
    stw r0, 0x120(r1)
    li r0, 0x36
    stw r29, 0x134(r1)
    lfd f0, 0x120(r1)
    stw r28, 0x130(r1)
    mr r28, r7
    fsubs f0, f0, f3
    stw r4, 0x4(r3)
    stw r8, 0x0(r3)
    stfs f0, 0xc(r3)
    stw r7, 0x10(r3)
    stw r6, 0x8(r3)
    stw r6, 0x58c(r4)
    li r4, 0x4000
    lwz r6, 0x4(r3)
    stw r0, 0x560(r6)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013310C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    lwz r3, 0x4(r30)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80191170_000012D4
    bl fn_801539E0
lbl_fn_80191170_000012D4:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80191170_000012EC
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_80191170_000012EC:
    lwz r3, 0x4(r30)
    li r0, 0x1
    cmpwi r28, 0x0
    lfs f0, lbl_80881F7C
    stw r0, 0x3fc(r3)
    addi r28, r3, 0xb0
    li r4, 0x0
    li r5, 0x35
    stfs f0, 0x24c(r28)
    mr r3, r28
    beq lbl_fn_80191170_0000131C
    li r5, 0x1e1
lbl_fn_80191170_0000131C:
    lfs f1, lbl_80881F70
    li r6, 0x0
    lfs f2, lbl_80881F90
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    mr r3, r31
    stfs f0, 0x238(r28)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f2, 0x1c(r30)
    psq_st f1, 0x14(r30), 0, 0
    bl fn_805F9920
    fabs f0, f1
    lfs f4, lbl_80881F94
    frsp f0, f0
    fcmpo cr0, f0, f4
    blt lbl_fn_80191170_00001550
    lfs f0, 0x8(r31)
    addi r3, r1, 0x68
    lfs f3, 0x4(r31)
    addi r29, r1, 0x74
    fneg f5, f0
    lfs f0, 0x0(r31)
    fneg f3, f3
    fneg f0, f0
    stfs f5, 0x70(r1)
    frsp f2, f5
    stfs f0, 0x68(r1)
    fabs f0, f2
    stfs f3, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f0, f0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x7c(r1)
    fcmpo cr0, f0, f4
    bge lbl_fn_80191170_000013D8
    lfs f3, 0x74(r1)
    lfs f0, lbl_80881F70
    fcmpo cr0, f3, f0
    ble lbl_fn_80191170_000013CC
    lfs f0, lbl_80881F74
    b lbl_fn_80191170_000013D0
lbl_fn_80191170_000013CC:
    lfs f0, lbl_80881F98
lbl_fn_80191170_000013D0:
    stfs f0, 0x48(r1)
    b lbl_fn_80191170_000013EC
lbl_fn_80191170_000013D8:
    frsp f2, f2
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80191170_000013EC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881F70
    addi r4, r1, 0x38
    lfs f30, 0xb8(r1)
    mr r5, r4
    lfs f31, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f13, 0xb0(r1)
    lfs f12, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f10, 0xc0(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f7, 0xd0(r1)
    lfs f6, 0xdc(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xbc(r1)
    lfs f0, lbl_80881F7C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x7c(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xe0(r1)
    stfs f31, 0xe4(r1)
    stfs f30, 0xe8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f12, 0xf8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xec(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881F94
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80191170_00001508
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881F70
    fcmpo cr0, f3, f0
    ble lbl_fn_80191170_000014F8
    lfs f0, lbl_80881F74
    b lbl_fn_80191170_000014FC
lbl_fn_80191170_000014F8:
    lfs f0, lbl_80881F98
lbl_fn_80191170_000014FC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80191170_0000151C
lbl_fn_80191170_00001508:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80191170_0000151C:
    lfs f2, lbl_80881F70
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x14
    stfs f2, 0x4c(r1)
    mr r4, r3
    stfs f2, 0x7c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x20(r30), 0, 0
    stfs f2, 0x28(r30)
    bl fn_805F98D0
    b lbl_fn_80191170_000015D0
lbl_fn_80191170_00001550:
    lwz r5, 0x4(r30)
    addi r3, r1, 0x80
    lfs f3, lbl_80881F70
    li r4, 0x79
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    stfs f2, 0x28(r30)
    lfs f0, lbl_80881F7C
    psq_st f1, 0x20(r30), 0, 0
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x80
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x58(r1)
    addi r3, r1, 0x5c
    lfs f3, 0x54(r1)
    fneg f4, f0
    lfs f0, 0x50(r1)
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x64(r1)
    frsp f2, f4
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x14(r30), 0, 0
    stfs f2, 0x1c(r30)
lbl_fn_80191170_000015D0:
    lfs f3, 0xc(r30)
    lfs f0, lbl_80881F70
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80191170_00001600
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80191170_000015F8
    lfs f0, lbl_80881F6C
    b lbl_fn_80191170_000015FC
lbl_fn_80191170_000015F8:
    lfs f0, lbl_80881F68
lbl_fn_80191170_000015FC:
    stfs f0, 0xc(r30)
lbl_fn_80191170_00001600:
    lwz r3, 0x4(r30)
    bl fn_801446F0
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80191170_00001620
    mr r4, r28
    mr r5, r28
    bl fn_801079C0
lbl_fn_80191170_00001620:
    psq_l f31, 0x158(r1), 0, 0
    mr r3, r30
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r28, 0x130(r1)
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_801915B8(void)
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
    beq lbl_fn_801915B8_000016BC
    lis r5, lbl_8077D818@ha
    lwz r4, 0x4(r3)
    addi r5, r5, lbl_8077D818@l
    stw r5, 0x0(r3)
    addi r3, r4, 0x7d4
    li r4, 0x4000
    bl fn_8013322C
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r30)
    cmpwi r3, 0x0
    addi r4, r4, 0xb0
    beq lbl_fn_801915B8_000016AC
    bl fn_80107A68
lbl_fn_801915B8_000016AC:
    cmpwi r31, 0x0
    ble lbl_fn_801915B8_000016BC
    mr r3, r30
    bl dtor_80084684
lbl_fn_801915B8_000016BC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019163C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    lwz r4, lbl_8087EFA8
    lfs f0, 0xc(r3)
    lfs f3, 0x3a4(r4)
    lwz r5, 0x4(r3)
    fsubs f0, f0, f3
    addi r29, r5, 0xb0
    stfs f0, 0xc(r3)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8019163C_00001758
    lwz r3, lbl_8087F0A8
    li r4, 0x22
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_8019163C_00001758
    lwz r3, lbl_8087EFA8
    lfs f3, lbl_80881F9C
    lfs f4, 0x3a4(r3)
    lfs f0, 0xc(r30)
    fnmsubs f0, f3, f4, f0
    stfs f0, 0xc(r30)
lbl_fn_8019163C_00001758:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8019163C_00001770
    cmpwi r0, 0x1
    beq lbl_fn_8019163C_00001830
    b lbl_fn_8019163C_00001878
lbl_fn_8019163C_00001770:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8019163C_000017BC
    lfs f4, lbl_80881FA0
    addi r3, r1, 0x14
    lfs f3, 0x18(r30)
    lfs f0, 0x14(r30)
    fmuls f5, f3, f4
    lfs f3, 0x1c(r30)
    fmuls f0, f0, f4
    lwz r4, 0x4(r30)
    stfs f5, 0x18(r1)
    fmuls f2, f3, f4
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0x6c0(r4)
    b lbl_fn_8019163C_000017D0
lbl_fn_8019163C_000017BC:
    lwz r3, 0x4(r30)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x6b8(r3), 0, 0
    stfs f2, 0x6c0(r3)
lbl_fn_8019163C_000017D0:
    lfs f31, 0x234(r29)
    mr r3, r29
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8019163C_00001878
    li r0, 0x1
    stw r0, 0x8(r30)
    lfs f0, lbl_80881F7C
    mr r3, r29
    stw r0, 0x34c(r29)
    li r4, 0x0
    lfs f1, lbl_80881F70
    li r5, 0x1e2
    stfs f0, 0x24c(r29)
    li r6, 0x1
    lfs f2, lbl_80881F90
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    stfs f0, 0x238(r29)
    b lbl_fn_8019163C_00001878
lbl_fn_8019163C_00001830:
    lfs f2, lbl_80881F70
    addi r3, r1, 0x8
    stfs f2, 0x8(r1)
    lwz r4, 0x4(r30)
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    stfs f2, 0x6c0(r4)
    lfs f0, 0xc(r30)
    stfs f2, 0x10(r1)
    fcmpo cr0, f0, f2
    blt lbl_fn_8019163C_00001874
    lwz r3, 0x4(r30)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8019163C_00001878
lbl_fn_8019163C_00001874:
    li r31, 0x1
lbl_fn_8019163C_00001878:
    lwz r3, 0x4(r30)
    addi r4, r30, 0x20
    lfs f1, lbl_80881F70
    li r5, 0x0
    lwz r12, 0x0(r3)
    lfs f2, lbl_80881F7C
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    psq_l f31, 0x38(r1), 0, 0
    mr r3, r31
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80191828(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r8, 0x4(r4)
    lis r7, lbl_8077D644@ha
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r3
    lwzu r6, lbl_8077D644@l(r7)
    stw r6, 0x34(r1)
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    stw r5, 0x38(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BE
    stw r4, 0x3c(r1)
    extsb. r0, r0
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r8, 0x4c(r1)
    bne lbl_fn_80191828_00001950
    lis r6, lbl_807C7B90@ha
    lis r4, fn_80191960@ha
    lis r3, fn_8019198C@ha
    li r0, 0x1
    addi r3, r3, fn_8019198C@l
    addi r5, r6, lbl_807C7B90@l
    addi r4, r4, fn_80191960@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B90@l(r6)
    stb r0, lbl_8087F0BE
lbl_fn_80191828_00001950:
    lwz r6, 0x40(r1)
    addi r3, r1, 0x18
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80191828_000019C4
    lwz r5, 0x18(r1)
    addic. r6, r31, 0x4
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_80191828_000019BC
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_80191828_000019BC:
    li r0, 0x1
    b lbl_fn_80191828_000019C8
lbl_fn_80191828_000019C4:
    li r0, 0x0
lbl_fn_80191828_000019C8:
    cmpwi r0, 0x0
    beq lbl_fn_80191828_000019E0
    lis r3, lbl_807C7B90@ha
    addi r3, r3, lbl_807C7B90@l
    stw r3, 0x0(r31)
    b lbl_fn_80191828_000019E8
lbl_fn_80191828_000019E0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80191828_000019E8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
