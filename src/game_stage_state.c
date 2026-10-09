#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800DCA6C(void);
extern void fn_8012476C(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_80188F08(void);
extern void fn_80188F40(void);
extern void fn_801905AC(void);
extern void fn_801905DC(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_806952C4(void);
extern void fn_80695B00(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_8077CF28[];
extern u8 lbl_8077DC10[];
extern u8 lbl_8077DCF0[];
extern u8 lbl_8077DDC0[];
extern u8 lbl_8077E1C0[];
extern u8 lbl_8077ED78[];
extern u8 lbl_8077EEB8[];
extern u8 lbl_8077EED4[];
extern u8 lbl_807C7B58[];
extern u8 lbl_807C7B78[];
extern u8 lbl_807C7BB0[];
extern u8 lbl_807C7BB8[];

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0B2;
extern u32 lbl_8087F0BB;
extern u32 lbl_8087F0C3;
extern u32 lbl_8087F0C4;
extern u32 lbl_8087F490;
extern u32 lbl_80881FBC;
extern u32 lbl_80881FCC;
extern u32 lbl_80881FDC;

/* Function declarations */
void fn_8019BF8C(void);
void fn_8019BFF0(void);
void fn_8019C104(void);
void fn_8019C234(void);
void fn_8019C8A8(void);
void fn_8019C94C(void);
void fn_8019CA80(void);
void fn_8019CBB4(void);
void fn_8019CE1C(void);
void fn_8019CF64(void);
void fn_8019D0C4(void);
void fn_8019D1A8(void);
void fn_8019D2E0(void);
void fn_8019D410(void);
void fn_8019D42C(void);
void fn_8019D634(void);
void fn_8019D81C(void);
void fn_8019D858(void);

asm void fn_8019BF8C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8019BF8C_00000028
    li r3, 0x1
    b lbl_fn_8019BF8C_0000004C
lbl_fn_8019BF8C_00000028:
    lwz r3, 0x4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
lbl_fn_8019BF8C_0000004C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019BFF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r9, lbl_8077E1C0@ha
    li r8, 0x0
    stw r0, 0x14(r1)
    addi r9, r9, lbl_8077E1C0@l
    li r0, 0x7a
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r4, 0x4(r3)
    stw r9, 0x0(r3)
    stw r8, 0x8(r3)
    stw r5, 0xc(r3)
    stw r8, 0x10(r3)
    stw r7, 0x14(r3)
    stw r6, 0x18(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8019BFF0_000000C8
    li r0, 0x1
    stw r0, 0x564(r4)
    b lbl_fn_8019BFF0_000000D0
lbl_fn_8019BFF0_000000C8:
    li r0, 0x2
    stw r0, 0x564(r4)
lbl_fn_8019BFF0_000000D0:
    lwz r3, 0x4(r3)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8019BFF0_000000E4
    bl fn_801539E0
lbl_fn_8019BFF0_000000E4:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8019BFF0_000000FC
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8019BFF0_000000FC:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8019BFF0_00000118
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
lbl_fn_8019BFF0_00000118:
    lwz r3, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    lfs f1, lbl_80881FCC
    mr r3, r30
    lfs f2, lbl_80881FDC
    li r5, 0x84
    stfs f0, 0x24c(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r31
    stfs f0, 0x238(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019C104(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x8(r3)
    lwz r5, 0x4(r3)
    cmpwi r0, 0x0
    addi r31, r5, 0xb0
    bne lbl_fn_8019C104_00000214
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8019C104_00000284
    lwz r4, 0x8(r30)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    mr r3, r31
    addi r4, r4, 0x1
    stw r4, 0x8(r30)
    lfs f1, lbl_80881FCC
    li r4, 0x0
    stw r0, 0x34c(r31)
    li r5, 0x1e4
    lfs f2, lbl_80881FDC
    li r6, 0x1
    stfs f0, 0x24c(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r31)
    b lbl_fn_8019C104_00000284
lbl_fn_8019C104_00000214:
    lwz r4, 0x10(r3)
    lwz r0, 0xc(r3)
    addi r4, r4, 0x1
    stw r4, 0x10(r3)
    cmpw r4, r0
    ble lbl_fn_8019C104_00000234
    li r3, 0x1
    b lbl_fn_8019C104_00000288
lbl_fn_8019C104_00000234:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8019C104_00000284
    lwz r3, lbl_8087F490
    li r0, 0x1
    li r4, 0x22
    stw r0, 0x728(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_8019C104_00000270
    lwz r3, 0x14(r30)
    subi r0, r3, 0x1
    stw r0, 0x14(r30)
lbl_fn_8019C104_00000270:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_8019C104_00000284
    li r3, 0x1
    b lbl_fn_8019C104_00000288
lbl_fn_8019C104_00000284:
    li r3, 0x0
lbl_fn_8019C104_00000288:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019C234(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    lwz r0, 0x14(r4)
    stw r31, 0x1ac(r1)
    lis r31, lbl_8077DCF0@ha
    cmpwi r0, 0x0
    stw r30, 0x1a8(r1)
    mr r30, r4
    addi r31, r31, lbl_8077DCF0@l
    stw r29, 0x1a4(r1)
    mr r29, r3
    stw r28, 0x1a0(r1)
    ble lbl_fn_8019C234_0000077C
    lbz r0, lbl_8087F0B2
    li r7, 0x0
    lwz r6, 0x60(r31)
    addi r3, r31, 0x60
    extsb. r0, r0
    lwz r5, 0x4(r3)
    lwz r0, 0x8(r3)
    lwz r3, 0x4(r4)
    stw r3, 0x10(r1)
    stb r7, 0x14(r1)
    stb r7, 0x15(r1)
    stb r7, 0x16(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r6, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r6, 0x164(r1)
    stw r5, 0x168(r1)
    stw r0, 0x16c(r1)
    stw r3, 0x170(r1)
    stb r7, 0x174(r1)
    stb r7, 0x175(r1)
    stb r7, 0x176(r1)
    stw r7, 0x150(r1)
    bne lbl_fn_8019C234_00000374
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
lbl_fn_8019C234_00000374:
    lwz r7, 0x164(r1)
    addi r3, r1, 0xf0
    lwz r6, 0x168(r1)
    lwz r5, 0x16c(r1)
    lwz r4, 0x170(r1)
    lwz r0, 0x174(r1)
    stw r7, 0xf0(r1)
    stw r6, 0xf4(r1)
    stw r5, 0xf8(r1)
    stw r4, 0xfc(r1)
    stw r0, 0x100(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8019C234_00000458
    lwz r7, 0xf0(r1)
    li r3, 0x14
    lwz r6, 0xf4(r1)
    lwz r5, 0xf8(r1)
    lwz r4, 0xfc(r1)
    lwz r0, 0x100(r1)
    stw r7, 0xdc(r1)
    stw r6, 0xe0(r1)
    stw r5, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r0, 0xec(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8019C234_0000040C
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019C234_0000040C:
    cmpwi r28, 0x0
    beq lbl_fn_8019C234_0000044C
    lwz r0, 0xdc(r1)
    stw r0, 0x0(r28)
    lwz r0, 0xe0(r1)
    stw r0, 0x4(r28)
    lwz r0, 0xe4(r1)
    stw r0, 0x8(r28)
    lwz r0, 0xe8(r1)
    stw r0, 0xc(r28)
    lbz r0, 0xec(r1)
    stb r0, 0x10(r28)
    lbz r0, 0xed(r1)
    stb r0, 0x11(r28)
    lbz r0, 0xee(r1)
    stb r0, 0x12(r28)
lbl_fn_8019C234_0000044C:
    stw r28, 0x154(r1)
    li r0, 0x1
    b lbl_fn_8019C234_0000045C
lbl_fn_8019C234_00000458:
    li r0, 0x0
lbl_fn_8019C234_0000045C:
    cmpwi r0, 0x0
    beq lbl_fn_8019C234_00000474
    lis r3, lbl_807C7B58@ha
    addi r3, r3, lbl_807C7B58@l
    stw r3, 0x150(r1)
    b lbl_fn_8019C234_0000047C
lbl_fn_8019C234_00000474:
    li r0, 0x0
    stw r0, 0x150(r1)
lbl_fn_8019C234_0000047C:
    lbz r0, lbl_8087F0C4
    li r6, 0x0
    lwz r7, 0x4(r30)
    addi r3, r31, 0x6c
    extsb. r0, r0
    lwz r5, 0x6c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    lwz r3, 0x18(r30)
    stw r7, 0xc8(r1)
    stw r3, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r7, 0xd4(r1)
    stw r6, 0xd8(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    stw r5, 0x130(r1)
    stw r4, 0x134(r1)
    stw r0, 0x138(r1)
    stw r7, 0x13c(r1)
    stw r3, 0x140(r1)
    stw r7, 0x144(r1)
    stw r7, 0x148(r1)
    stw r6, 0x14c(r1)
    stw r6, 0x118(r1)
    bne lbl_fn_8019C234_0000051C
    lis r6, lbl_807C7BB8@ha
    lis r4, fn_8019D81C@ha
    lis r3, fn_8019D858@ha
    li r0, 0x1
    addi r3, r3, fn_8019D858@l
    addi r5, r6, lbl_807C7BB8@l
    addi r4, r4, fn_8019D81C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BB8@l(r6)
    stb r0, lbl_8087F0C4
lbl_fn_8019C234_0000051C:
    lwz r10, 0x130(r1)
    addi r3, r1, 0xa8
    lwz r9, 0x134(r1)
    lwz r8, 0x138(r1)
    lwz r7, 0x13c(r1)
    lwz r6, 0x140(r1)
    lwz r5, 0x144(r1)
    lwz r4, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r10, 0xa8(r1)
    stw r9, 0xac(r1)
    stw r8, 0xb0(r1)
    stw r7, 0xb4(r1)
    stw r6, 0xb8(r1)
    stw r5, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r0, 0xc4(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8019C234_00000638
    lwz r10, 0xa8(r1)
    li r3, 0x20
    lwz r9, 0xac(r1)
    lwz r8, 0xb0(r1)
    lwz r7, 0xb4(r1)
    lwz r6, 0xb8(r1)
    lwz r5, 0xbc(r1)
    lwz r4, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r10, 0x88(r1)
    stw r9, 0x8c(r1)
    stw r8, 0x90(r1)
    stw r7, 0x94(r1)
    stw r6, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r0, 0xa4(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8019C234_000005E4
    lis r3, __files@ha
    lis r4, lbl_8077EEB8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EEB8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019C234_000005E4:
    cmpwi r28, 0x0
    beq lbl_fn_8019C234_0000062C
    lwz r0, 0x88(r1)
    stw r0, 0x0(r28)
    lwz r0, 0x8c(r1)
    stw r0, 0x4(r28)
    lwz r0, 0x90(r1)
    stw r0, 0x8(r28)
    lwz r0, 0x94(r1)
    stw r0, 0xc(r28)
    lwz r0, 0x98(r1)
    stw r0, 0x10(r28)
    lwz r0, 0x9c(r1)
    stw r0, 0x14(r28)
    lwz r0, 0xa0(r1)
    stw r0, 0x18(r28)
    lwz r0, 0xa4(r1)
    stw r0, 0x1c(r28)
lbl_fn_8019C234_0000062C:
    stw r28, 0x11c(r1)
    li r0, 0x1
    b lbl_fn_8019C234_0000063C
lbl_fn_8019C234_00000638:
    li r0, 0x0
lbl_fn_8019C234_0000063C:
    cmpwi r0, 0x0
    beq lbl_fn_8019C234_00000654
    lis r3, lbl_807C7BB8@ha
    addi r3, r3, lbl_807C7BB8@l
    stw r3, 0x118(r1)
    b lbl_fn_8019C234_0000065C
lbl_fn_8019C234_00000654:
    li r0, 0x0
    stw r0, 0x118(r1)
lbl_fn_8019C234_0000065C:
    addi r3, r1, 0x178
    addi r4, r1, 0x150
    addi r5, r1, 0x118
    bl fn_8019C8A8
    mr r3, r29
    addi r4, r1, 0x178
    li r5, 0x0
    bl fn_8019C94C
    addi r28, r1, 0x178
    addic. r29, r28, 0x14
    beq lbl_fn_8019C234_000006C0
    beq lbl_fn_8019C234_000006C0
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8019C234_000006C0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019C234_000006B8
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019C234_000006B8:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019C234_000006C0:
    cmpwi r28, 0x0
    beq lbl_fn_8019C234_00000700
    beq lbl_fn_8019C234_00000700
    lwz r3, 0x178(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019C234_00000700
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019C234_000006F8
    addi r3, r28, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019C234_000006F8:
    li r0, 0x0
    stw r0, 0x178(r1)
lbl_fn_8019C234_00000700:
    addic. r3, r1, 0x118
    beq lbl_fn_8019C234_0000073C
    lwz r4, 0x118(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8019C234_0000073C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8019C234_00000734
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019C234_00000734:
    li r0, 0x0
    stw r0, 0x118(r1)
lbl_fn_8019C234_0000073C:
    addic. r3, r1, 0x150
    beq lbl_fn_8019C234_000008FC
    lwz r4, 0x150(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8019C234_000008FC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8019C234_00000770
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019C234_00000770:
    li r0, 0x0
    stw r0, 0x150(r1)
    b lbl_fn_8019C234_000008FC
lbl_fn_8019C234_0000077C:
    lwz r8, 0x4(r4)
    addi r4, r31, 0x78
    lwz r5, 0x4(r4)
    li r0, 0x0
    lwz r6, 0x78(r31)
    lwz r4, 0x8(r4)
    lwz r7, 0x564(r8)
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
    stw r6, 0x104(r1)
    stw r5, 0x108(r1)
    stw r4, 0x10c(r1)
    stw r8, 0x110(r1)
    stw r7, 0x114(r1)
    bne lbl_fn_8019C234_00000804
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
lbl_fn_8019C234_00000804:
    lwz r7, 0x104(r1)
    addi r3, r1, 0x74
    lwz r6, 0x108(r1)
    lwz r5, 0x10c(r1)
    lwz r4, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r7, 0x74(r1)
    stw r6, 0x78(r1)
    stw r5, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r0, 0x84(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8019C234_000008D8
    lwz r7, 0x74(r1)
    li r3, 0x14
    lwz r6, 0x78(r1)
    lwz r5, 0x7c(r1)
    lwz r4, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r7, 0x60(r1)
    stw r6, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8019C234_0000089C
    lis r3, __files@ha
    lis r4, lbl_8077DC10@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC10@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019C234_0000089C:
    cmpwi r28, 0x0
    beq lbl_fn_8019C234_000008CC
    lwz r0, 0x60(r1)
    stw r0, 0x0(r28)
    lwz r0, 0x64(r1)
    stw r0, 0x4(r28)
    lwz r0, 0x68(r1)
    stw r0, 0x8(r28)
    lwz r0, 0x6c(r1)
    stw r0, 0xc(r28)
    lwz r0, 0x70(r1)
    stw r0, 0x10(r28)
lbl_fn_8019C234_000008CC:
    stw r28, 0x4(r29)
    li r0, 0x1
    b lbl_fn_8019C234_000008DC
lbl_fn_8019C234_000008D8:
    li r0, 0x0
lbl_fn_8019C234_000008DC:
    cmpwi r0, 0x0
    beq lbl_fn_8019C234_000008F4
    lis r3, lbl_807C7B78@ha
    addi r3, r3, lbl_807C7B78@l
    stw r3, 0x0(r29)
    b lbl_fn_8019C234_000008FC
lbl_fn_8019C234_000008F4:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019C234_000008FC:
    lwz r0, 0x1b4(r1)
    lwz r31, 0x1ac(r1)
    lwz r30, 0x1a8(r1)
    lwz r29, 0x1a4(r1)
    lwz r28, 0x1a0(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_8019C8A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r4
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8019C8A8_00000970
    stw r0, 0x0(r3)
    addi r3, r4, 0x4
    addi r4, r30, 0x4
    li r5, 0x0
    lwz r6, 0x0(r6)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019C8A8_00000970:
    li r0, 0x0
    stw r0, 0x14(r30)
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8019C8A8_000009A4
    stw r0, 0x14(r30)
    addi r3, r31, 0x4
    addi r4, r30, 0x18
    li r5, 0x0
    lwz r6, 0x0(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019C8A8_000009A4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019C94C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r0, 0x8(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8019C94C_00000A10
    stw r6, 0x8(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019C94C_00000A10:
    li r0, 0x0
    stw r0, 0x1c(r1)
    lwz r6, 0x14(r30)
    cmpwi r6, 0x0
    beq lbl_fn_8019C94C_00000A40
    stw r6, 0x1c(r1)
    addi r3, r30, 0x18
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019C94C_00000A40:
    mr r3, r29
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8019CA80
    addi r31, r1, 0x8
    addic. r30, r31, 0x14
    beq lbl_fn_8019C94C_00000A94
    beq lbl_fn_8019C94C_00000A94
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8019C94C_00000A94
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019C94C_00000A8C
    addi r3, r30, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019C94C_00000A8C:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8019C94C_00000A94:
    cmpwi r31, 0x0
    beq lbl_fn_8019C94C_00000AD4
    beq lbl_fn_8019C94C_00000AD4
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019C94C_00000AD4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019C94C_00000ACC
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019C94C_00000ACC:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8019C94C_00000AD4:
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8019CA80(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r0, 0x0(r3)
    stw r0, 0x8(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8019CA80_00000B48
    stw r6, 0x8(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CA80_00000B48:
    li r0, 0x0
    stw r0, 0x1c(r1)
    lwz r6, 0x14(r30)
    cmpwi r6, 0x0
    beq lbl_fn_8019CA80_00000B78
    stw r6, 0x1c(r1)
    addi r3, r30, 0x18
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CA80_00000B78:
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_8019CBB4
    addi r31, r1, 0x8
    addic. r30, r31, 0x14
    beq lbl_fn_8019CA80_00000BC8
    beq lbl_fn_8019CA80_00000BC8
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8019CA80_00000BC8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CA80_00000BC0
    addi r3, r30, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CA80_00000BC0:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8019CA80_00000BC8:
    cmpwi r31, 0x0
    beq lbl_fn_8019CA80_00000C08
    beq lbl_fn_8019CA80_00000C08
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019CA80_00000C08
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CA80_00000C00
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CA80_00000C00:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8019CA80_00000C08:
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8019CBB4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    lbz r0, lbl_8087F0C3
    extsb. r0, r0
    bne lbl_fn_8019CBB4_00000D54
    li r0, 0x0
    stw r0, 0x30(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8019CBB4_00000C88
    stw r6, 0x30(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0x34
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CBB4_00000C88:
    li r0, 0x0
    stw r0, 0x44(r1)
    lwz r6, 0x14(r31)
    cmpwi r6, 0x0
    beq lbl_fn_8019CBB4_00000CB8
    stw r6, 0x44(r1)
    addi r3, r31, 0x18
    addi r4, r1, 0x48
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CBB4_00000CB8:
    lis r3, lbl_807C7BB0@ha
    addi r4, r1, 0x30
    addi r3, r3, lbl_807C7BB0@l
    bl fn_8019D1A8
    addi r29, r1, 0x30
    addic. r28, r29, 0x14
    beq lbl_fn_8019CBB4_00000D0C
    beq lbl_fn_8019CBB4_00000D0C
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8019CBB4_00000D0C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CBB4_00000D04
    addi r3, r28, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CBB4_00000D04:
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_fn_8019CBB4_00000D0C:
    cmpwi r29, 0x0
    beq lbl_fn_8019CBB4_00000D4C
    beq lbl_fn_8019CBB4_00000D4C
    lwz r3, 0x30(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019CBB4_00000D4C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CBB4_00000D44
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CBB4_00000D44:
    li r0, 0x0
    stw r0, 0x30(r1)
lbl_fn_8019CBB4_00000D4C:
    li r0, 0x1
    stb r0, lbl_8087F0C3
lbl_fn_8019CBB4_00000D54:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r31)
    cmpwi r6, 0x0
    beq lbl_fn_8019CBB4_00000D84
    stw r6, 0x8(r1)
    addi r3, r31, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CBB4_00000D84:
    li r0, 0x0
    stw r0, 0x1c(r1)
    lwz r6, 0x14(r31)
    cmpwi r6, 0x0
    beq lbl_fn_8019CBB4_00000DB4
    stw r6, 0x1c(r1)
    addi r3, r31, 0x18
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CBB4_00000DB4:
    lis r3, lbl_807C7BB0@ha
    addi r4, r1, 0x8
    addi r3, r3, lbl_807C7BB0@l
    addi r5, r30, 0x4
    bl fn_8019CE1C
    addi r28, r1, 0x8
    mr r31, r3
    addic. r29, r28, 0x14
    beq lbl_fn_8019CBB4_00000E10
    beq lbl_fn_8019CBB4_00000E10
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8019CBB4_00000E10
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CBB4_00000E08
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CBB4_00000E08:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019CBB4_00000E10:
    cmpwi r28, 0x0
    beq lbl_fn_8019CBB4_00000E50
    beq lbl_fn_8019CBB4_00000E50
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019CBB4_00000E50
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CBB4_00000E48
    addi r3, r28, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CBB4_00000E48:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8019CBB4_00000E50:
    cmpwi r31, 0x0
    beq lbl_fn_8019CBB4_00000E68
    lis r3, lbl_807C7BB0@ha
    addi r3, r3, lbl_807C7BB0@l
    stw r3, 0x0(r30)
    b lbl_fn_8019CBB4_00000E70
lbl_fn_8019CBB4_00000E68:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8019CBB4_00000E70:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8019CE1C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r5
    stw r0, 0x10(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8019CE1C_00000EE4
    stw r6, 0x10(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0x14
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CE1C_00000EE4:
    li r0, 0x0
    stw r0, 0x24(r1)
    lwz r6, 0x14(r30)
    cmpwi r6, 0x0
    beq lbl_fn_8019CE1C_00000F14
    stw r6, 0x24(r1)
    addi r3, r30, 0x18
    addi r4, r1, 0x28
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CE1C_00000F14:
    li r0, 0x0
    stb r0, 0x8(r1)
    mr r3, r31
    mr r5, r29
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    bl fn_8019CF64
    addi r30, r1, 0x10
    mr r31, r3
    addic. r29, r30, 0x14
    beq lbl_fn_8019CE1C_00000F78
    beq lbl_fn_8019CE1C_00000F78
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8019CE1C_00000F78
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CE1C_00000F70
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CE1C_00000F70:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019CE1C_00000F78:
    cmpwi r30, 0x0
    beq lbl_fn_8019CE1C_00000FB8
    beq lbl_fn_8019CE1C_00000FB8
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019CE1C_00000FB8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CE1C_00000FB0
    addi r3, r30, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CE1C_00000FB0:
    li r0, 0x0
    stw r0, 0x10(r1)
lbl_fn_8019CE1C_00000FB8:
    mr r3, r31
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8019CF64(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r3
    mr r3, r31
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8019CF64_00001118
    li r0, 0x0
    stw r0, 0x10(r1)
    lwz r6, 0x0(r31)
    cmpwi r6, 0x0
    beq lbl_fn_8019CF64_00001040
    stw r6, 0x10(r1)
    addi r3, r31, 0x4
    addi r4, r1, 0x14
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CF64_00001040:
    li r0, 0x0
    stw r0, 0x24(r1)
    lwz r6, 0x14(r31)
    cmpwi r6, 0x0
    beq lbl_fn_8019CF64_00001070
    stw r6, 0x24(r1)
    addi r3, r31, 0x18
    addi r4, r1, 0x28
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019CF64_00001070:
    li r0, 0x0
    stb r0, 0x8(r1)
    mr r3, r29
    mr r5, r30
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    bl fn_8019D0C4
    addi r31, r1, 0x10
    addic. r30, r31, 0x14
    beq lbl_fn_8019CF64_000010D0
    beq lbl_fn_8019CF64_000010D0
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8019CF64_000010D0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CF64_000010C8
    addi r3, r30, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CF64_000010C8:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8019CF64_000010D0:
    cmpwi r31, 0x0
    beq lbl_fn_8019CF64_00001110
    beq lbl_fn_8019CF64_00001110
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019CF64_00001110
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019CF64_00001108
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019CF64_00001108:
    li r0, 0x0
    stw r0, 0x10(r1)
lbl_fn_8019CF64_00001110:
    li r3, 0x1
    b lbl_fn_8019CF64_0000111C
lbl_fn_8019CF64_00001118:
    li r3, 0x0
lbl_fn_8019CF64_0000111C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8019D0C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x28
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8019D0C4_0000118C
    lis r3, __files@ha
    lis r4, lbl_8077EED4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EED4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019D0C4_0000118C:
    cmpwi r31, 0x0
    beq lbl_fn_8019D0C4_000011FC
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8019D0C4_000011C8
    stw r0, 0x0(r31)
    addi r3, r29, 0x4
    addi r4, r31, 0x4
    li r5, 0x0
    lwz r6, 0x0(r29)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019D0C4_000011C8:
    li r0, 0x0
    stw r0, 0x14(r31)
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8019D0C4_000011FC
    stw r0, 0x14(r31)
    addi r3, r29, 0x18
    addi r4, r31, 0x18
    li r5, 0x0
    lwz r6, 0x14(r29)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019D0C4_000011FC:
    stw r31, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019D1A8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8019D1A8_00001274
    stw r6, 0x8(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019D1A8_00001274:
    li r0, 0x0
    stw r0, 0x1c(r1)
    lwz r6, 0x14(r30)
    cmpwi r6, 0x0
    beq lbl_fn_8019D1A8_000012A4
    stw r6, 0x1c(r1)
    addi r3, r30, 0x18
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019D1A8_000012A4:
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_8019D2E0
    addi r31, r1, 0x8
    addic. r30, r31, 0x14
    beq lbl_fn_8019D1A8_000012F4
    beq lbl_fn_8019D1A8_000012F4
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8019D1A8_000012F4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019D1A8_000012EC
    addi r3, r30, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019D1A8_000012EC:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8019D1A8_000012F4:
    cmpwi r31, 0x0
    beq lbl_fn_8019D1A8_00001334
    beq lbl_fn_8019D1A8_00001334
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019D1A8_00001334
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019D1A8_0000132C
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019D1A8_0000132C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8019D1A8_00001334:
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8019D2E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    mr r30, r4
    stw r0, 0x10(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8019D2E0_000013A0
    stw r6, 0x10(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0x14
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019D2E0_000013A0:
    li r0, 0x0
    stw r0, 0x24(r1)
    lwz r6, 0x14(r30)
    cmpwi r6, 0x0
    beq lbl_fn_8019D2E0_000013D0
    stw r6, 0x24(r1)
    addi r3, r30, 0x18
    addi r4, r1, 0x28
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019D2E0_000013D0:
    li r0, 0x0
    stb r0, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    bl fn_8019D410
    addi r31, r1, 0x10
    addic. r30, r31, 0x14
    beq lbl_fn_8019D2E0_0000142C
    beq lbl_fn_8019D2E0_0000142C
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8019D2E0_0000142C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019D2E0_00001424
    addi r3, r30, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019D2E0_00001424:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8019D2E0_0000142C:
    cmpwi r31, 0x0
    beq lbl_fn_8019D2E0_0000146C
    beq lbl_fn_8019D2E0_0000146C
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8019D2E0_0000146C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019D2E0_00001464
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019D2E0_00001464:
    li r0, 0x0
    stw r0, 0x10(r1)
lbl_fn_8019D2E0_0000146C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8019D410(void)
{
    nofralloc
    lis r5, fn_8019D42C@ha
    lis r4, fn_8019D634@ha
    addi r5, r5, fn_8019D42C@l
    stw r5, 0x4(r3)
    addi r4, r4, fn_8019D634@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8019D42C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r31, 0x0(r3)
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8019D42C_00001590
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x20(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x24(r1)
    mr r30, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8019D42C_00001534
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_8019D42C_00001534:
    li r0, 0x0
    stw r3, 0x28(r1)
    stw r0, 0x10(r1)
    b lbl_fn_8019D42C_00001548
    bl fn_80084C24
lbl_fn_8019D42C_00001548:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x24(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x20
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x20(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x20
    beq lbl_fn_8019D42C_00001590
    addic. r3, r3, 0x4
    beq lbl_fn_8019D42C_00001590
    beq lbl_fn_8019D42C_00001590
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8019D42C_00001590
    bl fn_806952C4
lbl_fn_8019D42C_00001590:
    lwz r4, 0x0(r31)
    addi r3, r31, 0x4
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8019D42C_0000167C
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x2c(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0xc(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0xc
    stw r3, 0x30(r1)
    mr r30, r3
    stw r3, 0x18(r1)
    li r3, 0x10
    stw r0, 0x1c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8019D42C_00001620
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_8019D42C_00001620:
    li r0, 0x0
    stw r3, 0x34(r1)
    stw r0, 0x18(r1)
    b lbl_fn_8019D42C_00001634
    bl fn_80084C24
lbl_fn_8019D42C_00001634:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x30(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x2c
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x2c(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x2c
    beq lbl_fn_8019D42C_0000167C
    addic. r3, r3, 0x4
    beq lbl_fn_8019D42C_0000167C
    beq lbl_fn_8019D42C_0000167C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8019D42C_0000167C
    bl fn_806952C4
lbl_fn_8019D42C_0000167C:
    lwz r4, 0x14(r31)
    addi r3, r31, 0x18
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8019D634(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_8019D634_000016E0
    lis r3, lbl_8077ED78@ha
    addi r3, r3, lbl_8077ED78@l
    stw r3, 0x0(r4)
    b lbl_fn_8019D634_00001874
lbl_fn_8019D634_000016E0:
    cmpwi r5, 0x0
    bne lbl_fn_8019D634_00001798
    lwz r30, 0x0(r3)
    li r3, 0x28
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8019D634_00001720
    lis r3, __files@ha
    lis r4, lbl_8077EED4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EED4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019D634_00001720:
    cmpwi r29, 0x0
    beq lbl_fn_8019D634_00001790
    li r0, 0x0
    stw r0, 0x0(r29)
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8019D634_0000175C
    stw r0, 0x0(r29)
    addi r3, r30, 0x4
    addi r4, r29, 0x4
    li r5, 0x0
    lwz r6, 0x0(r30)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019D634_0000175C:
    li r0, 0x0
    stw r0, 0x14(r29)
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8019D634_00001790
    stw r0, 0x14(r29)
    addi r3, r30, 0x18
    addi r4, r29, 0x18
    li r5, 0x0
    lwz r6, 0x14(r30)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8019D634_00001790:
    stw r29, 0x0(r31)
    b lbl_fn_8019D634_00001874
lbl_fn_8019D634_00001798:
    cmpwi r5, 0x1
    bne lbl_fn_8019D634_00001840
    lwz r30, 0x0(r4)
    cmpwi r30, 0x0
    beq lbl_fn_8019D634_0000182C
    addic. r29, r30, 0x14
    beq lbl_fn_8019D634_000017EC
    beq lbl_fn_8019D634_000017EC
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8019D634_000017EC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019D634_000017E4
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019D634_000017E4:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019D634_000017EC:
    cmpwi r30, 0x0
    beq lbl_fn_8019D634_0000182C
    beq lbl_fn_8019D634_0000182C
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8019D634_0000182C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8019D634_00001824
    addi r3, r30, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8019D634_00001824:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8019D634_0000182C:
    mr r3, r30
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_8019D634_00001874
lbl_fn_8019D634_00001840:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077ED78@ha
    lwz r4, lbl_8077ED78@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8019D634_0000186C
    lwz r0, 0x0(r29)
    stw r0, 0x0(r31)
    b lbl_fn_8019D634_00001874
lbl_fn_8019D634_0000186C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019D634_00001874:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019D81C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    lwz r5, 0x14(r12)
    lwz r6, 0x18(r12)
    lwz r7, 0x1c(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019D858(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_8019D858_00001904
    lis r3, lbl_8077DDC0@ha
    addi r3, r3, lbl_8077DDC0@l
    stw r3, 0x0(r4)
    b lbl_fn_8019D858_000019E4
lbl_fn_8019D858_00001904:
    cmpwi r5, 0x0
    bne lbl_fn_8019D858_00001994
    lwz r30, 0x0(r3)
    li r3, 0x20
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8019D858_00001944
    lis r3, __files@ha
    lis r4, lbl_8077EEB8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EEB8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019D858_00001944:
    cmpwi r29, 0x0
    beq lbl_fn_8019D858_0000198C
    lwz r0, 0x4(r30)
    lwz r3, 0x0(r30)
    stw r3, 0x0(r29)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r29)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r29)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r29)
    lwz r0, 0x1c(r30)
    stw r0, 0x1c(r29)
lbl_fn_8019D858_0000198C:
    stw r29, 0x0(r31)
    b lbl_fn_8019D858_000019E4
lbl_fn_8019D858_00001994:
    cmpwi r5, 0x1
    bne lbl_fn_8019D858_000019B0
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_8019D858_000019E4
lbl_fn_8019D858_000019B0:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077DDC0@ha
    lwz r4, lbl_8077DDC0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8019D858_000019DC
    lwz r0, 0x0(r29)
    stw r0, 0x0(r31)
    b lbl_fn_8019D858_000019E4
lbl_fn_8019D858_000019DC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019D858_000019E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
