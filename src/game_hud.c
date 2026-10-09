#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_20(void);
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004FF58(void);
extern void fn_8006B174(void);
extern void fn_80070B60(void);
extern void fn_80079ECC(void);
extern void fn_8007A36C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_8008A4E0(void);
extern void fn_8008A76C(void);
extern void fn_8008B140(void);
extern void fn_80091684(void);
extern void fn_800954DC(void);
extern void fn_80095CD0(void);
extern void fn_8009D58C(void);
extern void fn_800A005C(void);
extern void fn_800BDB58(void);
extern void fn_800C0A50(void);
extern void fn_800C122C(void);
extern void fn_800DC6B4(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80475DF8(void);
extern void fn_805F89F0(void);
extern void fn_805F93C0(void);
extern void fn_805F9420(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807326CC[];
extern u8 lbl_807326D0[];
extern u8 lbl_807326D8[];
extern u8 lbl_80775A88[];
extern u8 lbl_80778958[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C73A0[];
extern u8 lbl_807C73AC[];

/* Small data declarations */
extern u32 lbl_8087EEF8;
extern u32 lbl_8087EF40;
extern u32 lbl_8087EF48;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880C70;
extern u32 lbl_80880C78;
extern u32 lbl_80880C7C;
extern u32 lbl_80880C80;
extern u32 lbl_80880C88;

/* Function declarations */
void fn_8009E1E4(void);
void fn_8009E448(void);
void fn_8009E5A0(void);
void fn_8009E690(void);
void fn_8009E6EC(void);
void fn_8009EB20(void);
void fn_8009EC2C(void);
void fn_8009EE30(void);
void fn_8009F444(void);
void fn_8009F448(void);
void fn_8009F4AC(void);
void fn_8009F688(void);
void fn_8009F690(void);
void fn_8009F694(void);
void fn_8009F704(void);
void fn_8009F70C(void);
void fn_8009F788(void);
void fn_8009FE24(void);
void fn_8009FFCC(void);

asm void fn_8009E1E4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x80
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    bl _savegpr_27
    lwz r12, 0xb0(r1)
    li r11, -0x1
    li r0, 0x0
    stw r11, 0x0(r3)
    lwz r27, 0xa8(r1)
    mr r31, r3
    stw r12, 0x4(r3)
    lwz r11, 0xac(r1)
    stw r4, 0x8(r3)
    lwz r28, 0xb4(r1)
    stw r5, 0x10(r3)
    lwz r29, 0xb8(r1)
    stw r6, 0x14(r3)
    lwz r30, 0xbc(r1)
    stw r7, 0x18(r3)
    stw r8, 0x1c(r3)
    stw r9, 0x20(r3)
    stw r10, 0x24(r3)
    stw r0, 0x28(r3)
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x8(r27)
    stfs f2, 0x38(r3)
    psq_st f1, 0x30(r3), 0, 0
    lfs f0, 0xc(r27)
    stfs f0, 0x3c(r3)
    stw r11, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x58(r3)
    stw r0, 0x5c(r3)
    addi r3, r3, 0x60
    bl fn_80079ECC
    stw r28, 0x84(r31)
    lwz r3, 0x8(r31)
    lwz r0, 0x0(r30)
    stw r0, 0x88(r31)
    lwz r0, 0x4(r30)
    stw r0, 0x8c(r31)
    lwz r0, 0x8(r30)
    stw r0, 0x90(r31)
    lwz r0, 0xc(r30)
    stw r0, 0x94(r31)
    stw r29, 0x98(r31)
    bl fn_80475DF8
    stw r3, 0xc(r31)
    addi r3, r1, 0x20
    lwz r30, 0x10(r31)
    lfs f0, 0x28(r30)
    lfs f3, 0x18(r30)
    lfs f4, 0x8(r30)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x24(r30)
    fmr f30, f1
    lfs f3, 0x14(r30)
    addi r3, r1, 0x14
    lfs f4, 0x4(r30)
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    lfs f0, 0x20(r30)
    fmr f31, f1
    lfs f3, 0x10(r30)
    addi r3, r1, 0x8
    lfs f4, 0x0(r30)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9940
    frsp f3, f31
    stfs f1, 0x38(r1)
    frsp f0, f30
    stfs f31, 0x3c(r1)
    fcmpo cr0, f3, f0
    stfs f30, 0x40(r1)
    ble lbl_fn_8009E1E4_00000170
    b lbl_fn_8009E1E4_00000174
lbl_fn_8009E1E4_00000170:
    fmr f3, f0
lbl_fn_8009E1E4_00000174:
    lfs f4, 0x38(r1)
    fcmpo cr0, f4, f3
    ble lbl_fn_8009E1E4_00000184
    b lbl_fn_8009E1E4_0000019C
lbl_fn_8009E1E4_00000184:
    lfs f4, 0x3c(r1)
    lfs f0, 0x40(r1)
    fcmpo cr0, f4, f0
    ble lbl_fn_8009E1E4_00000198
    b lbl_fn_8009E1E4_0000019C
lbl_fn_8009E1E4_00000198:
    fmr f4, f0
lbl_fn_8009E1E4_0000019C:
    lfs f3, 0x3c(r31)
    lfs f0, lbl_80880C70
    stfs f4, 0x2c(r31)
    fcmpo cr0, f3, f0
    blt lbl_fn_8009E1E4_000001C0
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_8009E1E4_000001C8
lbl_fn_8009E1E4_000001C0:
    li r0, 0x1
    stw r0, 0x28(r31)
lbl_fn_8009E1E4_000001C8:
    psq_l f1, 0x30(r31), 0, 0
    addi r5, r1, 0x2c
    lfs f2, 0x38(r31)
    addi r3, r1, 0x44
    stfs f2, 0x34(r1)
    lwz r4, lbl_8087EEF8
    psq_st f1, 0x0(r5), 0, 0
    lfs f1, 0x3c(r31)
    lwz r6, 0x84(r31)
    bl fn_8007A36C
    lwz r0, 0x44(r1)
    mr r3, r31
    stw r0, 0x60(r31)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0x68(r31)
    stw r4, 0x64(r31)
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r0, 0x70(r31)
    stw r4, 0x6c(r31)
    lwz r4, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x78(r31)
    stw r4, 0x74(r31)
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r0, 0x80(r31)
    stw r4, 0x7c(r31)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8009E448(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r3
    li r30, 0x1
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_8009E448_0000029C
    lwz r3, lbl_8087EFA8
    lwz r0, 0x104(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8009E448_000002AC
lbl_fn_8009E448_0000029C:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009E448_000002D4
lbl_fn_8009E448_000002AC:
    lwz r0, 0x150(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009E448_000002D4
    lwz r3, lbl_8087EFB4
    addi r4, r27, 0x30
    addi r3, r3, 0x418
    bl fn_8004FF58
    cmpwi r3, 0x0
    bne lbl_fn_8009E448_000002D4
    li r30, 0x0
lbl_fn_8009E448_000002D4:
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_8009E448_0000039C
lbl_fn_8009E448_000002E0:
    lwz r3, 0x50(r27)
    lwz r4, 0xc(r27)
    lhax r0, r3, r31
    lwz r5, 0x40(r27)
    lwz r4, 0x48(r4)
    slwi r0, r0, 2
    cmpwi r5, 0x0
    lwz r3, 0x44(r27)
    lwzx r28, r4, r0
    beq lbl_fn_8009E448_00000318
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    lwzx r0, r5, r0
    b lbl_fn_8009E448_0000031C
lbl_fn_8009E448_00000318:
    lwz r0, 0x18(r28)
lbl_fn_8009E448_0000031C:
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_8009E448_00000394
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8009E448_0000035C
    lwz r3, 0x10(r28)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x6f
    bne lbl_fn_8009E448_00000394
    lbz r0, 0x1(r3)
    cmpwi r0, 0x70
    bne lbl_fn_8009E448_00000394
    lbz r0, 0x2(r3)
    cmpwi r0, 0x5f
    bne lbl_fn_8009E448_00000394
lbl_fn_8009E448_0000035C:
    li r25, 0x0
    li r26, 0x0
    b lbl_fn_8009E448_00000388
lbl_fn_8009E448_00000368:
    lwz r0, 0x74(r28)
    mr r3, r27
    mr r4, r28
    mr r6, r30
    add r5, r0, r26
    bl fn_8009D58C
    addi r26, r26, 0xc
    addi r25, r25, 0x1
lbl_fn_8009E448_00000388:
    lwz r0, 0x70(r28)
    cmpw r25, r0
    blt lbl_fn_8009E448_00000368
lbl_fn_8009E448_00000394:
    addi r31, r31, 0x2
    addi r29, r29, 0x1
lbl_fn_8009E448_0000039C:
    lwz r0, 0x54(r27)
    cmplw r29, r0
    blt lbl_fn_8009E448_000002E0
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8009E5A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80778958@ha
    lfs f1, lbl_80880C78
    stw r0, 0x14(r1)
    li r0, 0x0
    lfs f0, lbl_80880C7C
    addi r5, r5, lbl_80778958@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stfs f1, 0x5c(r3)
    stfs f1, 0x54(r3)
    stfs f1, 0x50(r3)
    stfs f1, 0x4c(r3)
    stfs f1, 0x48(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x34(r3)
    stfs f0, 0x58(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x30(r3)
    stw r0, 0x60(r3)
    stw r0, 0x64(r3)
    stw r0, 0x6c(r3)
    stfs f0, 0x70(r3)
    stfs f1, 0x74(r3)
    stfs f1, 0x78(r3)
    stw r0, 0x7c(r3)
    stw r0, 0x80(r3)
    lwz r0, lbl_8087EF40
    cmpwi r0, 0x0
    bne lbl_fn_8009E5A0_0000047C
    lis r5, lbl_807326CC@ha
    li r3, 0x3010
    addi r5, r5, lbl_807326CC@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    li r4, 0x0
    li r5, 0x0
    li r6, 0x30
    li r7, 0x100
    bl fn_80695720
    stw r3, lbl_8087EF40
lbl_fn_8009E5A0_0000047C:
    li r0, 0x0
    stb r0, 0x84(r31)
    lwz r5, 0x4(r31)
    mr r3, r31
    lwz r4, 0x228(r5)
    addi r0, r4, 0x1
    stw r0, 0x228(r5)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8009E690(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8009E690_000004F0
    lis r6, lbl_80778958@ha
    lwz r5, 0x4(r3)
    addi r6, r6, lbl_80778958@l
    stw r6, 0x0(r3)
    cmpwi r4, 0x0
    lwz r4, 0x228(r5)
    subi r0, r4, 0x1
    stw r0, 0x228(r5)
    ble lbl_fn_8009E690_000004F0
    bl dtor_80084684
lbl_fn_8009E690_000004F0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8009E6EC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    addi r31, r3, 0x8
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    lwz r29, 0x4(r3)
    lwz r0, 0x64(r3)
    lwz r4, 0x1ec(r29)
    cmpwi r4, 0x0
    bne lbl_fn_8009E6EC_00000544
    lwz r4, lbl_8087EFB4
    lwz r4, 0x2fc(r4)
lbl_fn_8009E6EC_00000544:
    cmpwi r0, 0x0
    stw r4, 0x68(r3)
    bne lbl_fn_8009E6EC_0000057C
    psq_l f1, 0x8(r3), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0x10(r3)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x14(r1)
    lwz r3, lbl_8087EFB4
    bl fn_800C122C
    mr r0, r3
    stw r3, 0x64(r30)
lbl_fn_8009E6EC_0000057C:
    stw r0, 0x1ec(r29)
    lis r3, 0x4
    addi r0, r3, 0x2030
    mr r4, r31
    lwz r5, 0x4(r30)
    lwz r3, 0x14(r5)
    and r0, r3, r0
    stw r0, 0x14(r5)
    lwz r5, 0x4(r30)
    lwz r3, 0x6c(r30)
    lwz r0, 0x14(r5)
    or r0, r0, r3
    stw r0, 0x14(r5)
    lbz r0, 0x84(r30)
    ori r0, r0, 0x80
    stb r0, 0x84(r30)
    lwz r3, lbl_8087EFB4
    addi r3, r3, 0x204
    bl fn_8004FF58
    cmpwi r3, 0x0
    bne lbl_fn_8009E6EC_000005DC
    lbz r0, 0x84(r30)
    rlwinm r0, r0, 0, 25, 23
    stb r0, 0x84(r30)
lbl_fn_8009E6EC_000005DC:
    lbz r0, 0x84(r30)
    li r3, 0x0
    lwz r7, 0x4(r30)
    li r4, 0x1
    rlwinm r0, r0, 0, 27, 25
    stb r0, 0x84(r30)
    lwz r6, 0x14(r7)
    rlwinm r0, r6, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8009E6EC_00000614
    rlwinm r0, r6, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_8009E6EC_00000614
    li r4, 0x0
lbl_fn_8009E6EC_00000614:
    cmpwi r4, 0x0
    beq lbl_fn_8009E6EC_0000065C
    lwz r5, 0x1ec(r7)
    li r4, 0x1
    cmpwi r5, 0x0
    bne lbl_fn_8009E6EC_00000634
    lwz r5, lbl_8087EFB4
    lwz r5, 0x2fc(r5)
lbl_fn_8009E6EC_00000634:
    lwz r0, 0x120(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8009E6EC_00000650
    rlwinm r0, r6, 0, 19, 19
    cmplwi r0, 0x1000
    beq lbl_fn_8009E6EC_00000650
    li r4, 0x0
lbl_fn_8009E6EC_00000650:
    cmpwi r4, 0x0
    beq lbl_fn_8009E6EC_0000065C
    li r3, 0x1
lbl_fn_8009E6EC_0000065C:
    cmpwi r3, 0x0
    beq lbl_fn_8009E6EC_000006E8
    lwz r0, 0x14(r7)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_8009E6EC_000006E8
    lwz r3, 0x1ec(r7)
    cmpwi r3, 0x0
    bne lbl_fn_8009E6EC_00000688
    lwz r3, lbl_8087EFB4
    lwz r3, 0x2fc(r3)
lbl_fn_8009E6EC_00000688:
    psq_l f1, 0x0(r31), 0, 0
    addi r29, r1, 0x18
    lfs f2, 0x8(r31)
    mr r4, r29
    stfs f2, 0x20(r1)
    mr r5, r29
    addi r3, r3, 0x124
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F93C0
    lfs f2, 0x20(r1)
    addi r4, r1, 0x28
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, lbl_8087EFB4
    stfs f2, 0x30(r1)
    addi r3, r3, 0x204
    lfs f0, 0xc(r31)
    stfs f0, 0x34(r1)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_8009E6EC_000006E8
    lbz r0, 0x84(r30)
    ori r0, r0, 0x20
    stb r0, 0x84(r30)
lbl_fn_8009E6EC_000006E8:
    lbz r3, 0x84(r30)
    rlwinm r3, r3, 0, 26, 24
    stb r3, 0x84(r30)
    extrwi. r0, r3, 1, 24
    bne lbl_fn_8009E6EC_00000704
    extrwi. r0, r3, 1, 26
    beq lbl_fn_8009E6EC_00000920
lbl_fn_8009E6EC_00000704:
    lwz r3, lbl_8087EFB4
    mr r4, r30
    lfs f1, lbl_80880C78
    li r5, 0x2
    bl fn_800BDB58
    lwz r5, 0x4(r30)
    lwz r0, 0x14(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8009E6EC_0000074C
    lbz r0, 0x84(r30)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_8009E6EC_0000074C
    lfs f1, 0xa8(r5)
    mr r4, r30
    lwz r3, lbl_8087EFB4
    li r5, 0x3
    bl fn_800BDB58
lbl_fn_8009E6EC_0000074C:
    lwz r5, 0x4(r30)
    li r4, 0x0
    li r3, 0x1
    lwz r7, 0x14(r5)
    rlwinm r0, r7, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8009E6EC_00000778
    rlwinm r0, r7, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_8009E6EC_00000778
    li r3, 0x0
lbl_fn_8009E6EC_00000778:
    cmpwi r3, 0x0
    beq lbl_fn_8009E6EC_000007C0
    lwz r3, 0x1ec(r5)
    li r6, 0x1
    cmpwi r3, 0x0
    bne lbl_fn_8009E6EC_00000798
    lwz r3, lbl_8087EFB4
    lwz r3, 0x2fc(r3)
lbl_fn_8009E6EC_00000798:
    lwz r0, 0x120(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8009E6EC_000007B4
    rlwinm r0, r7, 0, 19, 19
    cmplwi r0, 0x1000
    beq lbl_fn_8009E6EC_000007B4
    li r6, 0x0
lbl_fn_8009E6EC_000007B4:
    cmpwi r6, 0x0
    beq lbl_fn_8009E6EC_000007C0
    li r4, 0x1
lbl_fn_8009E6EC_000007C0:
    cmpwi r4, 0x0
    beq lbl_fn_8009E6EC_00000854
    rlwinm r0, r7, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_8009E6EC_00000834
    lbz r0, 0x84(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8009E6EC_00000854
    lwz r3, 0x1ec(r5)
    cmpwi r3, 0x0
    bne lbl_fn_8009E6EC_000007F4
    lwz r3, lbl_8087EFB4
    lwz r3, 0x2fc(r3)
lbl_fn_8009E6EC_000007F4:
    addi r29, r3, 0x154
    addi r4, r1, 0x28
    mr r3, r29
    bl fn_805F9990
    lfs f3, 0xc(r29)
    lfs f0, 0x34(r1)
    fadds f3, f3, f1
    fcmpo cr0, f3, f0
    bge lbl_fn_8009E6EC_00000854
    lwz r6, 0x4(r30)
    mr r4, r30
    lwz r3, lbl_8087EFB4
    li r5, 0x4
    lfs f1, 0xa8(r6)
    bl fn_800BDB58
    b lbl_fn_8009E6EC_00000854
lbl_fn_8009E6EC_00000834:
    lbz r0, 0x84(r30)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_8009E6EC_00000854
    lfs f1, 0xa8(r5)
    mr r4, r30
    lwz r3, lbl_8087EFB4
    li r5, 0x4
    bl fn_800BDB58
lbl_fn_8009E6EC_00000854:
    lbz r0, 0x84(r30)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_8009E6EC_000008B0
    lwz r5, 0x4(r30)
    lwz r0, 0x14(r5)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8009E6EC_00000888
    lfs f1, 0xa8(r5)
    mr r4, r30
    lwz r3, lbl_8087EFB4
    li r5, 0x8
    bl fn_800BDB58
lbl_fn_8009E6EC_00000888:
    lwz r5, 0x4(r30)
    lwz r0, 0x14(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8009E6EC_000008B0
    lfs f1, 0xa8(r5)
    mr r4, r30
    lwz r3, lbl_8087EFB4
    li r5, 0x6
    bl fn_800BDB58
lbl_fn_8009E6EC_000008B0:
    lwz r5, 0x4(r30)
    lwz r0, 0x14(r5)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8009E6EC_000008D8
    lfs f1, 0xa8(r5)
    mr r4, r30
    lwz r3, lbl_8087EFB4
    li r5, 0x9
    bl fn_800BDB58
lbl_fn_8009E6EC_000008D8:
    lwz r3, 0x4(r30)
    lwz r0, 0x14(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8009E6EC_00000900
    lwz r3, lbl_8087EFB4
    li r0, 0x1
    addis r3, r3, 0x5
    stw r0, 0x4960(r3)
lbl_fn_8009E6EC_00000900:
    lbz r0, 0x84(r30)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8009E6EC_00000920
    lwz r3, lbl_8087EFB4
    mr r4, r30
    lfs f1, lbl_80880C78
    li r5, 0x0
    bl fn_800BDB58
lbl_fn_8009E6EC_00000920:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8009EB20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    lwz r0, 0x21c(r4)
    extlwi r0, r0, 9, 8
    srawi r0, r0, 24
    cmpwi r0, 0x1
    ble lbl_fn_8009EB20_00000A34
    lwz r4, lbl_8087EFB4
    lfs f1, 0x10(r3)
    lfs f0, 0x114(r4)
    lfs f3, 0xc(r3)
    fsubs f4, f1, f0
    lfs f2, 0x110(r4)
    lfs f1, 0x8(r3)
    addi r3, r1, 0x8
    lfs f0, 0x10c(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    lfs f0, 0x14(r31)
    lfs f2, lbl_80880C78
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8009EB20_000009BC
    b lbl_fn_8009EB20_000009C0
lbl_fn_8009EB20_000009BC:
    fmr f2, f0
lbl_fn_8009EB20_000009C0:
    lwz r3, 0x4(r31)
    lfs f0, lbl_80880C80
    lwz r0, 0x21c(r3)
    extlwi r0, r0, 9, 8
    srawi r3, r0, 24
    subi r0, r3, 0x1
    stw r0, 0x60(r31)
    b lbl_fn_8009EB20_00000A28
lbl_fn_8009EB20_000009E0:
    mulli r0, r4, 0x18
    lwz r3, 0x4(r31)
    add r3, r3, r0
    lfs f3, 0x180(r3)
    fabs f1, f3
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8009EB20_00000A10
    lwz r3, lbl_8087EFA8
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f3, 0x208(r3)
lbl_fn_8009EB20_00000A10:
    fcmpo cr0, f3, f2
    cror eq, lt, eq
    beq lbl_fn_8009EB20_00000A34
    lwz r3, 0x60(r31)
    subi r0, r3, 0x1
    stw r0, 0x60(r31)
lbl_fn_8009EB20_00000A28:
    lwz r4, 0x60(r31)
    cmpwi r4, 0x0
    bne lbl_fn_8009EB20_000009E0
lbl_fn_8009EB20_00000A34:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8009EC2C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    lwz r0, 0x2f8(r4)
    lwz r5, 0x4(r3)
    cmpwi r0, 0x0
    addi r31, r5, 0x10
    beq lbl_fn_8009EC2C_00000A94
    cmpwi r0, 0x4
    beq lbl_fn_8009EC2C_00000AA4
    cmpwi r0, 0x6
    beq lbl_fn_8009EC2C_00000AB4
    cmpwi r0, 0x8
    beq lbl_fn_8009EC2C_00000AB4
    b lbl_fn_8009EC2C_00000AC0
lbl_fn_8009EC2C_00000A94:
    lbz r0, 0x84(r3)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_8009EC2C_00000AC0
    b lbl_fn_8009EC2C_00000C30
lbl_fn_8009EC2C_00000AA4:
    lbz r0, 0x84(r3)
    extrwi. r0, r0, 1, 26
    bne lbl_fn_8009EC2C_00000AC0
    b lbl_fn_8009EC2C_00000C30
lbl_fn_8009EC2C_00000AB4:
    lbz r0, 0x84(r3)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_8009EC2C_00000C30
lbl_fn_8009EC2C_00000AC0:
    lwz r0, 0x20c(r31)
    mr r29, r4
    srawi r0, r0, 24
    cmpwi r0, 0x8
    bne lbl_fn_8009EC2C_00000BCC
    lwz r6, 0x6c(r3)
    lis r5, fn_8009F444@ha
    lwz r0, 0x4(r31)
    addi r5, r5, fn_8009F444@l
    lis r4, fn_8009F448@ha
    stw r5, 0x18(r1)
    or r0, r0, r6
    stw r0, 0x4(r31)
    addi r4, r4, fn_8009F448@l
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_l f1, 0x30(r3), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    psq_st f2, 0x10(r31), 0, 0
    psq_st f3, 0x18(r31), 0, 0
    psq_st f4, 0x20(r31), 0, 0
    psq_st f5, 0x28(r31), 0, 0
    psq_st f6, 0x30(r31), 0, 0
    stw r5, 0x1f0(r31)
    stw r4, 0x1f4(r31)
    stw r3, 0x1f8(r31)
    stw r31, 0x1fc(r31)
    lwz r5, 0x60(r3)
    stw r5, 0x50(r31)
    lwz r0, 0x20c(r31)
    stw r4, 0x1c(r1)
    extlwi r0, r0, 9, 8
    srawi r4, r0, 24
    stw r3, 0x20(r1)
    cmpw r5, r4
    stw r31, 0x24(r1)
    blt lbl_fn_8009EC2C_00000B68
    subi r0, r4, 0x1
    stw r0, 0x50(r31)
lbl_fn_8009EC2C_00000B68:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x10
    cmplw r31, r0
    bne lbl_fn_8009EC2C_00000BCC
    lwz r4, 0x1dc(r31)
    lwz r0, 0x64(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8009EC2C_00000B90
    lwz r4, lbl_8087EFB4
    lwz r4, 0x2fc(r4)
lbl_fn_8009EC2C_00000B90:
    cmpwi r0, 0x0
    stw r4, 0x68(r3)
    bne lbl_fn_8009EC2C_00000BC8
    psq_l f1, 0x8(r3), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0x10(r3)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x14(r1)
    lwz r3, lbl_8087EFB4
    bl fn_800C122C
    mr r0, r3
    stw r3, 0x64(r30)
lbl_fn_8009EC2C_00000BC8:
    stw r0, 0x1dc(r31)
lbl_fn_8009EC2C_00000BCC:
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r4, 0x0
    stw r4, 0x1f0(r31)
    stw r4, 0x1f4(r31)
    stw r4, 0x1f8(r31)
    stw r4, 0x1fc(r31)
    lwz r3, 0x4(r30)
    stw r4, 0x28(r1)
    addi r0, r3, 0x10
    cmplw r31, r0
    stw r4, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r4, 0x34(r1)
    bne lbl_fn_8009EC2C_00000C20
    lwz r0, 0x68(r30)
    stw r0, 0x1dc(r31)
lbl_fn_8009EC2C_00000C20:
    lwz r3, 0x6c(r30)
    lwz r0, 0x4(r31)
    andc r0, r0, r3
    stw r0, 0x4(r31)
lbl_fn_8009EC2C_00000C30:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8009EE30(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    bl _savegpr_20
    addi r23, r3, 0x30
    psq_l f2, 0x8(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    mr r22, r3
    psq_l f6, 0x28(r4), 0, 0
    addi r3, r1, 0x98
    psq_st f2, 0x8(r23), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    lfs f10, 0x28(r23)
    psq_st f3, 0x10(r23), 0, 0
    lfs f11, 0x18(r23)
    psq_st f5, 0x20(r23), 0, 0
    lfs f12, 0x8(r23)
    stfs f12, 0x98(r1)
    stfs f11, 0x9c(r1)
    stfs f10, 0xa0(r1)
    bl fn_805F9940
    lfs f10, 0x24(r23)
    fmr f30, f1
    lfs f11, 0x14(r23)
    addi r3, r1, 0x8c
    lfs f12, 0x4(r23)
    stfs f12, 0x8c(r1)
    stfs f11, 0x90(r1)
    stfs f10, 0x94(r1)
    bl fn_805F9940
    lfs f10, 0x20(r23)
    fmr f31, f1
    lfs f11, 0x10(r23)
    addi r3, r1, 0x80
    lfs f12, 0x0(r23)
    stfs f12, 0x80(r1)
    stfs f11, 0x84(r1)
    stfs f10, 0x88(r1)
    bl fn_805F9940
    frsp f11, f31
    stfs f1, 0xbc(r1)
    frsp f10, f30
    stfs f31, 0xc0(r1)
    fcmpo cr0, f11, f10
    stfs f30, 0xc4(r1)
    ble lbl_fn_8009EE30_00000D30
    b lbl_fn_8009EE30_00000D34
lbl_fn_8009EE30_00000D30:
    fmr f11, f10
lbl_fn_8009EE30_00000D34:
    lfs f30, 0xbc(r1)
    fcmpo cr0, f30, f11
    ble lbl_fn_8009EE30_00000D44
    b lbl_fn_8009EE30_00000D5C
lbl_fn_8009EE30_00000D44:
    lfs f30, 0xc0(r1)
    lfs f10, 0xc4(r1)
    fcmpo cr0, f30, f10
    ble lbl_fn_8009EE30_00000D58
    b lbl_fn_8009EE30_00000D5C
lbl_fn_8009EE30_00000D58:
    fmr f30, f10
lbl_fn_8009EE30_00000D5C:
    lwz r3, 0x4(r22)
    bl fn_8009FFCC
    cmpwi r3, 0x0
    bne lbl_fn_8009EE30_00001238
    lwz r6, 0x4(r22)
    addi r4, r22, 0x8
    mr r3, r23
    psq_l f1, 0xac(r6), 0, 0
    mr r5, r4
    lfs f2, 0xb4(r6)
    stfs f2, 0x10(r22)
    psq_st f1, 0x0(r4), 0, 0
    lfs f10, 0xb8(r6)
    stfs f10, 0x14(r22)
    bl fn_805F93C0
    lwz r3, 0x4(r22)
    lfs f10, 0x14(r22)
    lfs f11, 0xbc(r3)
    lwz r4, 0x4(r22)
    fmuls f11, f30, f11
    fmuls f10, f10, f11
    stfs f10, 0x14(r22)
    lwz r3, 0x17c(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8009EE30_00001238
    lfs f2, 0x18(r3)
    addi r24, r1, 0xf8
    psq_l f1, 0x10(r3), 0, 0
    addi r3, r1, 0xb0
    psq_st f1, 0x18(r22), 0, 0
    addi r6, r1, 0xa4
    addi r20, r1, 0x20
    addi r21, r1, 0x2c
    stfs f2, 0x20(r22)
    addi r25, r1, 0x104
    addi r12, r1, 0x38
    addi r26, r1, 0x110
    lwz r4, 0x17c(r4)
    addi r11, r1, 0x44
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r23
    psq_l f1, 0x1c(r4), 0, 0
    addi r27, r1, 0x11c
    stfs f2, 0xb8(r1)
    addi r10, r1, 0x50
    lfs f2, 0x24(r4)
    addi r28, r1, 0x128
    psq_st f1, 0x0(r6), 0, 0
    addi r9, r1, 0x5c
    frsp f31, f2
    addi r29, r1, 0x134
    psq_st f1, 0x24(r22), 0, 0
    addi r8, r1, 0x68
    addi r30, r1, 0x140
    addi r7, r1, 0x74
    lfs f30, 0x28(r22)
    addi r31, r1, 0x14c
    lfs f13, 0x24(r22)
    mr r4, r24
    stfs f13, 0x20(r1)
    mr r5, r24
    addi r23, r1, 0xe0
    li r6, 0x8
    stfs f30, 0x24(r1)
    stfs f2, 0x2c(r22)
    psq_l f1, 0x0(r20), 0, 0
    stfs f2, 0xac(r1)
    fmr f2, f31
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x100(r1)
    lfs f12, 0x2c(r22)
    lfs f11, 0x18(r22)
    fmr f2, f12
    stfs f11, 0x2c(r1)
    stfs f30, 0x30(r1)
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x10c(r1)
    lfs f10, 0x1c(r22)
    stfs f13, 0x38(r1)
    stfs f10, 0x3c(r1)
    psq_l f1, 0x0(r12), 0, 0
    stfs f11, 0x44(r1)
    stfs f10, 0x48(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f2, 0x118(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x124(r1)
    lfs f2, 0x20(r22)
    stfs f13, 0x50(r1)
    stfs f30, 0x54(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f11, 0x5c(r1)
    stfs f30, 0x60(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f13, 0x68(r1)
    stfs f10, 0x6c(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f31, 0x28(r1)
    stfs f12, 0x34(r1)
    stfs f12, 0x40(r1)
    stfs f12, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x130(r1)
    stfs f2, 0x64(r1)
    stfs f2, 0x13c(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x148(r1)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x154(r1)
    bl fn_805F9420
    addi r5, r1, 0x8
    addi r3, r1, 0x14
    psq_l f1, 0x0(r24), 0, 0
    mr r6, r5
    lfs f2, 0x100(r1)
    mr r4, r3
    psq_st f1, 0x0(r5), 0, 0
    mr r7, r5
    psq_lu f0, 0x0(r25), 0, 0
    mr r8, r3
    stfs f2, 0x10(r1)
    psq_lu f4, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    ps_sub f8, f0, f4
    lfs f1, 0x8(r25)
    stfs f2, 0x1c(r1)
    lfs f5, 0x8(r6)
    psq_lu f2, 0x0(r4), 0, 0
    ps_sel f8, f8, f0, f4
    fsub f9, f1, f5
    ps_sub f6, f0, f2
    lfs f3, 0x8(r4)
    fsub f7, f1, f3
    ps_sel f6, f6, f2, f0
    fsel f9, f9, f1, f5
    fsel f7, f7, f3, f1
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r6, r5
    mr r4, r3
    psq_lu f2, 0x0(r4), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r5
    psq_lu f4, 0x0(r6), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r26), 0, 0
    lfs f3, 0x8(r4)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r26)
    lfs f5, 0x8(r6)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r6, r5
    mr r4, r3
    psq_lu f2, 0x0(r4), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r5
    psq_lu f4, 0x0(r6), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r27), 0, 0
    lfs f3, 0x8(r4)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r27)
    lfs f5, 0x8(r6)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r6, r5
    mr r4, r3
    psq_lu f2, 0x0(r4), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r5
    psq_lu f4, 0x0(r6), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r28), 0, 0
    lfs f3, 0x8(r4)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r28)
    lfs f5, 0x8(r6)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    stfs f9, 0x8(r7)
    mr r6, r5
    mr r4, r3
    psq_lu f0, 0x0(r29), 0, 0
    mr r7, r5
    psq_lu f2, 0x0(r4), 0, 0
    mr r8, r3
    psq_lu f4, 0x0(r6), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r29)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r6)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r6, r5
    mr r4, r3
    psq_lu f2, 0x0(r4), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r5
    psq_lu f4, 0x0(r6), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r30), 0, 0
    lfs f3, 0x8(r4)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r30)
    lfs f5, 0x8(r6)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r6, r5
    mr r4, r3
    psq_lu f2, 0x0(r4), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r5
    psq_lu f4, 0x0(r6), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r31), 0, 0
    lfs f3, 0x8(r4)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r31)
    lfs f5, 0x8(r6)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    addi r4, r22, 0x18
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    lfs f2, 0x1c(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xe8(r1)
    lfs f2, 0x10(r1)
    stfs f9, 0x8(r7)
    psq_st f1, 0xc(r23), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    stfs f2, 0xf4(r1)
    lfs f2, 0xe8(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0xc(r23), 0, 0
    stfs f2, 0x20(r22)
    lfs f2, 0xf4(r1)
    psq_st f1, 0xc(r4), 0, 0
    lwz r5, 0x4(r22)
    stfs f2, 0x2c(r22)
    lfs f1, 0xbc(r5)
    bl fn_80070B60
    addi r3, r1, 0xc8
    lfs f2, 0xd0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x18(r22), 0, 0
    stfs f2, 0x20(r22)
    psq_l f1, 0xc(r3), 0, 0
    lfs f2, 0xdc(r1)
    stfs f2, 0x2c(r22)
    psq_st f1, 0x24(r22), 0, 0
lbl_fn_8009EE30_00001238:
    addi r11, r1, 0x190
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    bl _restgpr_20
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_8009F444(void)
{
    nofralloc
    b fn_8009F4AC
}

asm void fn_8009F448(void)
{
    nofralloc
    lwz r8, 0x3c(r4)
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_8009F448_000012B8
lbl_fn_8009F448_00001274:
    lwz r0, lbl_8087EF40
    add r6, r8, r3
    addi r7, r7, 0x1
    add r5, r0, r3
    addi r3, r3, 0x30
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    psq_st f6, 0x28(r6), 0, 0
lbl_fn_8009F448_000012B8:
    lwz r0, 0x38(r4)
    cmplw r7, r0
    blt lbl_fn_8009F448_00001274
    blr
}

asm void fn_8009F4AC(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_27
    psq_l f1, 0x30(r3), 0, 0
    addi r29, r1, 0x70
    psq_l f2, 0x38(r3), 0, 0
    mr r30, r3
    psq_l f3, 0x40(r3), 0, 0
    mr r31, r4
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x400
    bne lbl_fn_8009F4AC_00001380
    lwz r3, lbl_8087EFB4
    lwz r0, 0x2f8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8009F4AC_00001380
    lwz r3, 0x2fc(r3)
    mr r4, r29
    addi r5, r1, 0x40
    addi r3, r3, 0x124
    bl fn_805F89F0
    addi r3, r1, 0x40
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
lbl_fn_8009F4AC_00001380:
    lwz r29, 0x3c(r31)
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_8009F4AC_0000142C
lbl_fn_8009F4AC_00001390:
    add r4, r29, r28
    lwz r0, lbl_8087EF40
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    add r3, r0, r28
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lwz r0, 0x80(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8009F4AC_000013E0
    add r4, r0, r28
    b lbl_fn_8009F4AC_000013F0
lbl_fn_8009F4AC_000013E0:
    addi r3, r1, 0x70
    addi r5, r1, 0x10
    bl fn_805F89F0
    addi r4, r1, 0x10
lbl_fn_8009F4AC_000013F0:
    psq_l f2, 0x8(r4), 0, 0
    add r3, r29, r28
    psq_l f3, 0x10(r4), 0, 0
    addi r27, r27, 0x1
    psq_l f4, 0x18(r4), 0, 0
    addi r28, r28, 0x30
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_8009F4AC_0000142C:
    lwz r0, 0x38(r31)
    cmplw r27, r0
    blt lbl_fn_8009F4AC_00001390
    lwz r0, 0x50(r31)
    mr r3, r31
    lwz r4, lbl_8087EFB4
    mulli r0, r0, 0x18
    addi r4, r4, 0x15c
    add r5, r31, r0
    lwz r5, 0x178(r5)
    bl fn_80091684
    lwz r3, 0x4(r30)
    addi r0, r3, 0x10
    cmplw r31, r0
    bne lbl_fn_8009F4AC_0000148C
    lwz r4, 0x7c(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8009F4AC_0000148C
    addi r5, r1, 0x8
    psq_l f1, 0x74(r30), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    mr r3, r31
    lfs f1, 0x70(r30)
    bl fn_800954DC
lbl_fn_8009F4AC_0000148C:
    addi r11, r1, 0xc0
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8009F688(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8009F690(void)
{
    nofralloc
    blr
}

asm void fn_8009F694(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x4(r3)
    lwz r0, 0x21c(r5)
    srawi r0, r0, 24
    cmpwi r0, 0x8
    bne lbl_fn_8009F694_0000150C
    lbz r0, 0x84(r3)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_8009F694_0000150C
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1d0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009F694_0000150C
    mr r3, r4
    addi r4, r31, 0x18
    bl fn_800C0A50
    lbz r0, 0x84(r31)
    rlwimi r0, r3, 7, 24, 24
    stb r0, 0x84(r31)
lbl_fn_8009F694_0000150C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8009F704(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8009F70C(void)
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
    beq lbl_fn_8009F70C_00001588
    beq lbl_fn_8009F70C_00001578
    beq lbl_fn_8009F70C_00001578
    beq lbl_fn_8009F70C_00001578
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8009F70C_00001578
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_8009F70C_00001578:
    cmpwi r31, 0x0
    ble lbl_fn_8009F70C_00001588
    mr r3, r30
    bl dtor_80084684
lbl_fn_8009F70C_00001588:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8009F788(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_22
    li r0, 0x0
    stw r0, 0x3c(r1)
    mr r29, r3
    addi r24, r1, 0x3c
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl strlen
    mr r25, r3
    mr r3, r24
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r24
    stb r0, 0x10(r1)
    mr r6, r29
    add r7, r29, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r24
    addi r3, r1, 0x48
    bl fn_8006B174
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8009F788_00001628
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_8009F788_00001628:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8009F788_0000163C
    addi r3, r1, 0x49
    b lbl_fn_8009F788_00001640
lbl_fn_8009F788_0000163C:
    lwz r3, 0x50(r1)
lbl_fn_8009F788_00001640:
    bl fn_800DC6B4
    lbz r0, lbl_8087EF48
    mr r31, r3
    extsb. r0, r0
    bne lbl_fn_8009F788_00001688
    lis r6, lbl_807C73AC@ha
    li r0, 0x0
    addi r3, r6, lbl_807C73AC@l
    lis r4, fn_8009F70C@ha
    lis r5, lbl_807C73A0@ha
    stw r0, lbl_807C73AC@l(r6)
    addi r4, r4, fn_8009F70C@l
    stw r0, 0x4(r3)
    addi r5, r5, lbl_807C73A0@l
    stw r0, 0x8(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF48
lbl_fn_8009F788_00001688:
    lis r30, lbl_807C73AC@ha
    lbz r0, lbl_8087EF48
    lwz r22, lbl_807C73AC@l(r30)
    addi r27, r30, lbl_807C73AC@l
    li r28, 0x0
    lis r26, fn_8009F70C@ha
    lis r25, lbl_807C73A0@ha
    li r24, 0x1
    b lbl_fn_8009F788_000016E4
lbl_fn_8009F788_000016AC:
    lwz r23, 0x0(r22)
    cmpwi r23, 0x0
    beq lbl_fn_8009F788_000016E0
    lwz r3, 0x224(r23)
    cmplw r31, r3
    bne lbl_fn_8009F788_000016E0
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8009F788_000016D8
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_8009F788_000016D8:
    mr r3, r23
    b lbl_fn_8009F788_00001C28
lbl_fn_8009F788_000016E0:
    addi r22, r22, 0x4
lbl_fn_8009F788_000016E4:
    extsb. r3, r0
    bne lbl_fn_8009F788_00001710
    stw r28, lbl_807C73AC@l(r30)
    mr r3, r27
    addi r4, r26, fn_8009F70C@l
    addi r5, r25, lbl_807C73A0@l
    stw r28, 0x4(r27)
    stw r28, 0x8(r27)
    bl __register_global_object
    stb r24, lbl_8087EF48
    li r0, 0x1
lbl_fn_8009F788_00001710:
    lwz r3, 0x4(r27)
    lwz r4, lbl_807C73AC@l(r30)
    slwi r3, r3, 2
    add r3, r4, r3
    cmplw r22, r3
    bne lbl_fn_8009F788_000016AC
    lis r5, lbl_807326D8@ha
    li r3, 0x22c
    addi r5, r5, lbl_807326D8@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8009F788_00001874
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r24, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    addi r3, r30, 0x10
    li r4, 0x9
    stw r24, 0x8(r30)
    stw r24, 0xc(r30)
    bl fn_8008A4E0
    stw r24, 0x228(r30)
    mr r3, r29
    addi r25, r1, 0x30
    stw r24, 0x30(r1)
    stw r24, 0x34(r1)
    stw r24, 0x38(r1)
    bl strlen
    mr r24, r3
    mr r3, r25
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r25
    stb r0, 0xc(r1)
    mr r6, r29
    add r7, r29, r24
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r25
    addi r3, r1, 0x24
    bl fn_8006B174
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8009F788_000017E8
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_8009F788_000017E8:
    lwz r0, 0x24(r1)
    mr r3, r30
    srwi. r0, r0, 31
    bne lbl_fn_8009F788_00001800
    addi r4, r1, 0x25
    b lbl_fn_8009F788_00001804
lbl_fn_8009F788_00001800:
    lwz r4, 0x2c(r1)
lbl_fn_8009F788_00001804:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8009F788_00001828
    addi r3, r1, 0x25
    b lbl_fn_8009F788_0000182C
lbl_fn_8009F788_00001828:
    lwz r3, 0x2c(r1)
lbl_fn_8009F788_0000182C:
    bl fn_800DC6B4
    clrlwi r5, r3, 16
    lis r0, 0x4330
    lis r4, lbl_807326D0@ha
    stw r5, 0x6c(r1)
    lfd f2, lbl_807326D0@l(r4)
    stw r0, 0x68(r1)
    lfs f0, lbl_80880C88
    lfd f1, 0x68(r1)
    stw r3, 0x224(r30)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    stfs f0, 0xa8(r30)
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8009F788_00001874
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_8009F788_00001874:
    lbz r0, lbl_8087EF48
    li r29, 0x0
    extsb. r0, r0
    bne lbl_fn_8009F788_000018B8
    lis r6, lbl_807C73AC@ha
    li r0, 0x0
    addi r3, r6, lbl_807C73AC@l
    lis r4, fn_8009F70C@ha
    lis r5, lbl_807C73A0@ha
    stw r0, lbl_807C73AC@l(r6)
    addi r4, r4, fn_8009F70C@l
    stw r0, 0x4(r3)
    addi r5, r5, lbl_807C73A0@l
    stw r0, 0x8(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF48
lbl_fn_8009F788_000018B8:
    lis r24, lbl_807C73AC@ha
    lbz r0, lbl_8087EF48
    lwz r22, lbl_807C73AC@l(r24)
    addi r26, r24, lbl_807C73AC@l
    li r25, 0x0
    lis r27, fn_8009F70C@ha
    lis r28, lbl_807C73A0@ha
    li r31, 0x1
    b lbl_fn_8009F788_000018F8
lbl_fn_8009F788_000018DC:
    lwz r3, 0x0(r22)
    cmpwi r3, 0x0
    bne lbl_fn_8009F788_000018F4
    stw r30, 0x0(r22)
    li r29, 0x1
    b lbl_fn_8009F788_0000193C
lbl_fn_8009F788_000018F4:
    addi r22, r22, 0x4
lbl_fn_8009F788_000018F8:
    extsb. r3, r0
    bne lbl_fn_8009F788_00001924
    stw r25, lbl_807C73AC@l(r24)
    mr r3, r26
    addi r4, r27, fn_8009F70C@l
    addi r5, r28, lbl_807C73A0@l
    stw r25, 0x4(r26)
    stw r25, 0x8(r26)
    bl __register_global_object
    stb r31, lbl_8087EF48
    li r0, 0x1
lbl_fn_8009F788_00001924:
    lwz r3, 0x4(r26)
    lwz r4, lbl_807C73AC@l(r24)
    slwi r3, r3, 2
    add r3, r4, r3
    cmplw r22, r3
    bne lbl_fn_8009F788_000018DC
lbl_fn_8009F788_0000193C:
    cmpwi r29, 0x0
    bne lbl_fn_8009F788_00001C10
    lbz r0, lbl_8087EF48
    extsb. r0, r0
    bne lbl_fn_8009F788_00001984
    lis r6, lbl_807C73AC@ha
    li r0, 0x0
    addi r3, r6, lbl_807C73AC@l
    lis r4, fn_8009F70C@ha
    lis r5, lbl_807C73A0@ha
    stw r0, lbl_807C73AC@l(r6)
    addi r4, r4, fn_8009F70C@l
    stw r0, 0x4(r3)
    addi r5, r5, lbl_807C73A0@l
    stw r0, 0x8(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF48
lbl_fn_8009F788_00001984:
    lis r29, lbl_807C73AC@ha
    addi r29, r29, lbl_807C73AC@l
    lwz r3, 0x4(r29)
    lwz r4, 0x8(r29)
    cmplw r3, r4
    bge lbl_fn_8009F788_000019B8
    addi r3, r3, 0x1
    stw r3, 0x4(r29)
    subi r0, r3, 0x1
    lwz r3, 0x0(r29)
    slwi r0, r0, 2
    stwx r30, r3, r0
    b lbl_fn_8009F788_00001C10
lbl_fn_8009F788_000019B8:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8009F788_000019F0
    lis r4, lbl_807326D8@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807326D8@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8009F788_000019F0:
    lwz r4, 0x4(r29)
    li r6, 0x0
    lis r3, 0x4000
    lwz r31, 0x8(r29)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r5, r29, 0x8
    subf r0, r31, r0
    stw r6, 0x54(r1)
    cmplw r3, r0
    stw r6, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r6, 0x64(r1)
    stw r3, 0x18(r1)
    ble lbl_fn_8009F788_00001A58
    lis r4, lbl_807326D8@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807326D8@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8009F788_00001A58:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8009F788_00001AA8
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x18(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_8009F788_00001A9C
    addi r3, r1, 0x18
lbl_fn_8009F788_00001A9C:
    lwz r0, 0x0(r3)
    add r24, r31, r0
    b lbl_fn_8009F788_00001AEC
lbl_fn_8009F788_00001AA8:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8009F788_00001AE4
    addi r3, r31, 0x1
    lwz r0, 0x18(r1)
    srwi r3, r3, 1
    stw r3, 0x1c(r1)
    cmplw r3, r0
    addi r3, r1, 0x1c
    bge lbl_fn_8009F788_00001AD8
    addi r3, r1, 0x18
lbl_fn_8009F788_00001AD8:
    lwz r0, 0x0(r3)
    add r24, r31, r0
    b lbl_fn_8009F788_00001AEC
lbl_fn_8009F788_00001AE4:
    lis r3, 0x4000
    subi r24, r3, 0x1
lbl_fn_8009F788_00001AEC:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r24, r0
    ble lbl_fn_8009F788_00001B20
    lis r4, lbl_807326D8@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807326D8@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8009F788_00001B20:
    slwi r3, r24, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_8009F788_00001B54
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8009F788_00001B54:
    lwz r5, 0x4(r29)
    lwz r3, 0x58(r1)
    slwi r0, r5, 2
    stw r24, 0x5c(r1)
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r0, r25, r0
    stw r3, 0x58(r1)
    stwx r30, r4, r0
    lwz r0, 0x4(r29)
    lwz r23, 0x0(r29)
    slwi r0, r0, 2
    add r0, r23, r0
    mr r4, r23
    subf r0, r23, r0
    srawi r0, r0, 2
    addze r24, r0
    subf r0, r24, r5
    stw r0, 0x64(r1)
    slwi r26, r24, 2
    slwi r0, r0, 2
    mr r5, r26
    add r3, r25, r0
    bl memcpy
    mr r3, r23
    mr r5, r26
    li r4, 0x0
    bl memset
    addic. r0, r1, 0x54
    lwz r0, 0x58(r1)
    lwz r3, 0x0(r29)
    li r5, 0x0
    lwz r7, 0x8(r29)
    lwz r4, 0x5c(r1)
    add r6, r0, r24
    mr r0, r25
    stw r4, 0x8(r29)
    stw r7, 0x5c(r1)
    stw r0, 0x0(r29)
    stw r3, 0x54(r1)
    stw r6, 0x4(r29)
    stw r5, 0x58(r1)
    beq lbl_fn_8009F788_00001C10
    cmpwi r3, 0x0
    beq lbl_fn_8009F788_00001C10
    stw r5, 0x58(r1)
    bl dtor_80084684
lbl_fn_8009F788_00001C10:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8009F788_00001C24
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_8009F788_00001C24:
    mr r3, r30
lbl_fn_8009F788_00001C28:
    addi r11, r1, 0xa0
    bl _restgpr_22
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8009FE24(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    lbz r0, lbl_8087EF48
    extsb. r0, r0
    bne lbl_fn_8009FE24_00001C90
    lis r6, lbl_807C73AC@ha
    li r0, 0x0
    addi r3, r6, lbl_807C73AC@l
    lis r4, fn_8009F70C@ha
    lis r5, lbl_807C73A0@ha
    stw r0, lbl_807C73AC@l(r6)
    addi r4, r4, fn_8009F70C@l
    stw r0, 0x4(r3)
    addi r5, r5, lbl_807C73A0@l
    stw r0, 0x8(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF48
lbl_fn_8009FE24_00001C90:
    lis r31, lbl_807C73AC@ha
    li r25, 0x0
    lwz r30, lbl_807C73AC@l(r31)
    addi r26, r31, lbl_807C73AC@l
    lis r27, fn_8009F70C@ha
    lis r28, lbl_807C73A0@ha
    li r29, 0x1
    b lbl_fn_8009FE24_00001D90
lbl_fn_8009FE24_00001CB0:
    lwz r24, 0x0(r30)
    cmpwi cr1, r24, 0x0
    beq cr1, lbl_fn_8009FE24_00001CFC
    lwz r0, 0x228(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8009FE24_00001CFC
    beq cr1, lbl_fn_8009FE24_00001CF4
    addi r3, r24, 0x10
    li r4, -0x1
    bl fn_8008A76C
    cmpwi r24, 0x0
    beq lbl_fn_8009FE24_00001CEC
    mr r3, r24
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8009FE24_00001CEC:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8009FE24_00001CF4:
    stw r25, 0x0(r30)
    b lbl_fn_8009FE24_00001D8C
lbl_fn_8009FE24_00001CFC:
    cmpwi r24, 0x0
    beq lbl_fn_8009FE24_00001D8C
    lwz r24, 0x0(r30)
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8009FE24_00001D40
    mr r3, r24
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8009FE24_00001D2C
    li r0, 0x1
    b lbl_fn_8009FE24_00001D6C
lbl_fn_8009FE24_00001D2C:
    mr r3, r24
    bl fn_800A005C
    mr r3, r24
    bl fn_80473F88
    stw r29, 0x8(r24)
lbl_fn_8009FE24_00001D40:
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8009FE24_00001D68
    addi r3, r24, 0x10
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8009FE24_00001D64
    li r0, 0x1
    b lbl_fn_8009FE24_00001D6C
lbl_fn_8009FE24_00001D64:
    stw r29, 0xc(r24)
lbl_fn_8009FE24_00001D68:
    li r0, 0x0
lbl_fn_8009FE24_00001D6C:
    cmpwi r0, 0x0
    bne lbl_fn_8009FE24_00001D8C
    lwz r3, 0x0(r30)
    lwz r0, 0x21c(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_8009FE24_00001D8C
    addi r3, r3, 0x10
    bl fn_80095CD0
lbl_fn_8009FE24_00001D8C:
    addi r30, r30, 0x4
lbl_fn_8009FE24_00001D90:
    lbz r0, lbl_8087EF48
    extsb. r0, r0
    bne lbl_fn_8009FE24_00001DBC
    stw r25, lbl_807C73AC@l(r31)
    mr r3, r26
    addi r4, r27, fn_8009F70C@l
    addi r5, r28, lbl_807C73A0@l
    stw r25, 0x4(r26)
    stw r25, 0x8(r26)
    bl __register_global_object
    stb r29, lbl_8087EF48
lbl_fn_8009FE24_00001DBC:
    lwz r0, 0x4(r26)
    lwz r3, lbl_807C73AC@l(r31)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r30, r0
    bne lbl_fn_8009FE24_00001CB0
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8009FFCC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8009FFCC_00001E34
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8009FFCC_00001E1C
    li r3, 0x1
    b lbl_fn_8009FFCC_00001E64
lbl_fn_8009FFCC_00001E1C:
    mr r3, r31
    bl fn_800A005C
    mr r3, r31
    bl fn_80473F88
    li r0, 0x1
    stw r0, 0x8(r31)
lbl_fn_8009FFCC_00001E34:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8009FFCC_00001E60
    addi r3, r31, 0x10
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8009FFCC_00001E58
    li r3, 0x1
    b lbl_fn_8009FFCC_00001E64
lbl_fn_8009FFCC_00001E58:
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_fn_8009FFCC_00001E60:
    li r3, 0x0
lbl_fn_8009FFCC_00001E64:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
