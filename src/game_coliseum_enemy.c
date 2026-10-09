#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_80043014(void);
extern void fn_8005B9CC(void);
extern void fn_800709F4(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_8009E5A0(void);
extern void fn_8009E6EC(void);
extern void fn_8009EB20(void);
extern void fn_8009EE30(void);
extern void fn_8009F788(void);
extern void fn_8009FFCC(void);
extern void fn_800C1FB4(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA6C(void);
extern void fn_80373148(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_804962B0(void);
extern void fn_804963A4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_806952C4(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807566C4[];
extern u8 lbl_80756700[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807901D8[];
extern u8 lbl_807901E0[];
extern u8 lbl_80790218[];
extern u8 lbl_807C8AC8[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F550;
extern u32 lbl_8087F558;
extern u32 lbl_8087F55C;
extern u32 lbl_8087F610;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80887050;
extern u32 lbl_80887054;
extern u32 lbl_80887058;
extern u32 lbl_8088705C;
extern u32 lbl_80887060;

/* Function declarations */
void fn_80490884(void);
void fn_80490B0C(void);
void fn_80490DE8(void);
void fn_80490E38(void);
void fn_80490EA0(void);
void fn_80490EB8(void);
void fn_8049103C(void);
void fn_80491234(void);
void fn_80491280(void);
void fn_80491324(void);
void fn_80491414(void);
void fn_80491418(void);
void fn_80491440(void);
void fn_804914BC(void);
void fn_80491528(void);
void fn_804918A4(void);
void fn_80491D50(void);
void fn_80491DF8(void);
void fn_80491EA0(void);
void fn_80491F94(void);
void fn_80492080(void);
void fn_804920D8(void);

asm void fn_80490884(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stw r31, 0x1dc(r1)
    stw r30, 0x1d8(r1)
    mr r30, r5
    stw r29, 0x1d4(r1)
    mr r29, r3
    mr r3, r4
    bl fn_8009F788
    mr r4, r3
    mr r3, r29
    bl fn_8009E5A0
    lwz r5, lbl_8087F550
    addi r3, r1, 0x198
    lwz r0, 0x88(r29)
    addi r4, r5, 0x1
    lfs f9, 0x18(r30)
    lfs f0, lbl_80887050
    rlwimi r0, r5, 0, 16, 31
    lfs f8, 0x14(r30)
    clrlwi r0, r0, 16
    fmuls f9, f0, f9
    stw r4, lbl_8087F550
    fmuls f8, f0, f8
    lfs f7, 0x10(r30)
    lfs f1, 0x1c(r30)
    fmuls f0, f0, f7
    stw r0, 0x88(r29)
    lfs f2, 0x20(r30)
    stfs f0, 0x8(r1)
    lfs f3, 0x24(r30)
    stfs f8, 0xc(r1)
    stfs f9, 0x10(r1)
    bl fn_805F9160
    lfs f7, lbl_80887054
    addi r31, r1, 0x168
    lfs f1, 0x10(r1)
    lfs f0, lbl_80887058
    fcmpu cr0, f7, f1
    stfs f7, 0x194(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x184(r1)
    stfs f7, 0x180(r1)
    stfs f7, 0x178(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f0, 0x190(r1)
    stfs f0, 0x17c(r1)
    stfs f0, 0x168(r1)
    beq lbl_fn_80490884_00000124
    addi r3, r1, 0x48
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x48
    addi r5, r1, 0x18
    bl fn_805F89F0
    addi r3, r1, 0x18
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80490884_00000124:
    lfs f0, lbl_80887054
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80490884_00000184
    addi r3, r1, 0xa8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xa8
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80490884_00000184:
    lfs f0, lbl_80887054
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80490884_000001E4
    addi r3, r1, 0x108
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80490884_000001E4:
    addi r4, r1, 0x198
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F89F0
    lfs f1, 0x4(r30)
    addi r3, r1, 0x138
    lfs f2, 0x8(r30)
    lfs f3, 0xc(r30)
    bl fn_805F90D0
    addi r4, r1, 0x198
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F89F0
    mr r3, r29
    addi r4, r1, 0x198
    bl fn_8009EE30
    lwz r4, 0x2c(r30)
    lfs f8, lbl_8088705C
    lfs f9, 0xc(r4)
    stfs f9, 0x70(r29)
    lfs f0, lbl_80887058
    lfs f7, 0x4(r4)
    lwz r3, 0x0(r30)
    fmuls f7, f8, f7
    fdivs f7, f7, f9
    stfs f7, 0x74(r29)
    lfs f7, 0x8(r4)
    fadds f7, f7, f9
    fdivs f7, f7, f9
    fsubs f0, f0, f7
    stfs f0, 0x78(r29)
    bl fn_800DC6B4
    stw r3, 0x8c(r29)
    mr r3, r29
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_80490B0C(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stw r31, 0x20c(r1)
    stw r30, 0x208(r1)
    mr r30, r5
    stw r29, 0x204(r1)
    mr r29, r3
    mr r3, r4
    bl fn_8009F788
    mr r4, r3
    mr r3, r29
    bl fn_8009E5A0
    lwz r5, lbl_8087F550
    addi r3, r1, 0x1c8
    lwz r0, 0x88(r29)
    addi r4, r5, 0x1
    lfs f9, 0x18(r30)
    lfs f0, lbl_80887050
    rlwimi r0, r5, 0, 16, 31
    lfs f8, 0x14(r30)
    clrlwi r0, r0, 16
    fmuls f9, f0, f9
    stw r4, lbl_8087F550
    fmuls f8, f0, f8
    lfs f7, 0x10(r30)
    lfs f1, 0x1c(r30)
    fmuls f0, f0, f7
    stw r0, 0x88(r29)
    lfs f2, 0x20(r30)
    stfs f0, 0x8(r1)
    lfs f3, 0x24(r30)
    stfs f8, 0xc(r1)
    stfs f9, 0x10(r1)
    bl fn_805F9160
    lfs f10, lbl_80887054
    addi r4, r1, 0x1c8
    lfs f9, lbl_80887058
    mr r5, r4
    lfs f8, 0x30(r30)
    addi r3, r1, 0x198
    lfs f7, 0x34(r30)
    lfs f0, 0x38(r30)
    stfs f10, 0x1c4(r1)
    stfs f10, 0x1bc(r1)
    stfs f10, 0x1b8(r1)
    stfs f10, 0x1b4(r1)
    stfs f10, 0x1a8(r1)
    stfs f10, 0x1a4(r1)
    stfs f9, 0x1c0(r1)
    stfs f9, 0x1ac(r1)
    stfs f9, 0x198(r1)
    stfs f8, 0x19c(r1)
    stfs f7, 0x1a0(r1)
    stfs f0, 0x1b0(r1)
    bl fn_805F89F0
    lfs f7, lbl_80887054
    addi r31, r1, 0x168
    lfs f1, 0x10(r1)
    lfs f0, lbl_80887058
    fcmpu cr0, f7, f1
    stfs f7, 0x194(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x184(r1)
    stfs f7, 0x180(r1)
    stfs f7, 0x178(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f0, 0x190(r1)
    stfs f0, 0x17c(r1)
    stfs f0, 0x168(r1)
    beq lbl_fn_80490B0C_00000400
    addi r3, r1, 0x48
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x48
    addi r5, r1, 0x18
    bl fn_805F89F0
    addi r3, r1, 0x18
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80490B0C_00000400:
    lfs f0, lbl_80887054
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80490B0C_00000460
    addi r3, r1, 0xa8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xa8
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80490B0C_00000460:
    lfs f0, lbl_80887054
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80490B0C_000004C0
    addi r3, r1, 0x108
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80490B0C_000004C0:
    addi r4, r1, 0x1c8
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F89F0
    lfs f1, 0x4(r30)
    addi r3, r1, 0x138
    lfs f2, 0x8(r30)
    lfs f3, 0xc(r30)
    bl fn_805F90D0
    addi r4, r1, 0x1c8
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F89F0
    mr r3, r29
    addi r4, r1, 0x1c8
    bl fn_8009EE30
    lwz r4, 0x2c(r30)
    lfs f8, lbl_8088705C
    lfs f9, 0xc(r4)
    stfs f9, 0x70(r29)
    lfs f0, lbl_80887058
    lfs f7, 0x4(r4)
    lwz r3, 0x0(r30)
    fmuls f7, f8, f7
    fdivs f7, f7, f9
    stfs f7, 0x74(r29)
    lfs f7, 0x8(r4)
    fadds f7, f7, f9
    fdivs f7, f7, f9
    fsubs f0, f0, f7
    stfs f0, 0x78(r29)
    bl fn_800DC6B4
    stw r3, 0x8c(r29)
    mr r3, r29
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80490DE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x4(r3)
    bl fn_8009FFCC
    cmpwi r3, 0x0
    beq lbl_fn_80490DE8_00000590
    li r3, 0x0
    b lbl_fn_80490DE8_000005A0
lbl_fn_80490DE8_00000590:
    mr r3, r31
    addi r4, r31, 0x30
    bl fn_8009EE30
    li r3, 0x1
lbl_fn_80490DE8_000005A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80490E38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x88(r3)
    clrlwi r4, r0, 16
    extrwi r0, r0, 15, 1
    add r4, r4, r0
    slwi r0, r4, 29
    srwi r4, r4, 31
    subf r0, r4, r0
    rotlwi r0, r0, 3
    add. r0, r0, r4
    bne lbl_fn_80490E38_000005F4
    bl fn_8009EB20
lbl_fn_80490E38_000005F4:
    lwz r4, 0x88(r31)
    extrwi r3, r4, 15, 1
    addi r0, r3, 0x1
    rlwimi r4, r0, 16, 1, 15
    stw r4, 0x88(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80490EA0(void)
{
    nofralloc
    lwz r0, 0x88(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    beqlr
    b fn_8009E6EC
    blr
}

asm void fn_80490EB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    beq lbl_fn_80490EB8_0000079C
    lwz r0, lbl_8087F558
    cmpwi r0, 0x0
    bne lbl_fn_80490EB8_0000079C
    lis r5, lbl_807566C4@ha
    li r3, 0x160
    addi r5, r5, lbl_807566C4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80490EB8_00000798
    mr r4, r30
    bl fn_800D1D3C
    lis r4, lbl_807901E0@ha
    li r3, 0x0
    addi r4, r4, lbl_807901E0@l
    stw r4, 0x0(r31)
    stw r3, 0x48(r31)
    stw r3, 0x14c(r31)
    stw r3, 0x150(r31)
    stw r3, 0x154(r31)
    stw r3, 0x158(r31)
    lbz r0, lbl_8087F55C
    stw r3, 0x8(r1)
    extsb. r0, r0
    bne lbl_fn_80490EB8_000006EC
    lis r6, lbl_807C8AC8@ha
    lis r4, fn_80491234@ha
    lis r3, fn_80491280@ha
    li r0, 0x1
    addi r3, r3, fn_80491280@l
    addi r5, r6, lbl_807C8AC8@l
    addi r4, r4, fn_80491234@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8AC8@l(r6)
    stb r0, lbl_8087F55C
lbl_fn_80490EB8_000006EC:
    lis r3, lbl_807C8AC8@ha
    lwz r12, lbl_807C8AC8@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80490EB8_00000710
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80490EB8_00000710:
    lis r0, fn_804914BC@ha
    addic. r0, r0, 5308
    beq lbl_fn_80490EB8_00000728
    stw r0, 0xc(r1)
    li r0, 0x1
    b lbl_fn_80490EB8_0000072C
lbl_fn_80490EB8_00000728:
    li r0, 0x0
lbl_fn_80490EB8_0000072C:
    cmpwi r0, 0x0
    beq lbl_fn_80490EB8_00000744
    lis r3, lbl_807C8AC8@ha
    addi r3, r3, lbl_807C8AC8@l
    stw r3, 0x8(r1)
    b lbl_fn_80490EB8_0000074C
lbl_fn_80490EB8_00000744:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80490EB8_0000074C:
    lwz r3, lbl_8087EFB4
    mr r5, r31
    addi r4, r1, 0x8
    bl fn_8049103C
    addic. r3, r1, 0x8
    beq lbl_fn_80490EB8_00000798
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80490EB8_00000798
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80490EB8_00000790
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80490EB8_00000790:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80490EB8_00000798:
    stw r31, lbl_8087F558
lbl_fn_80490EB8_0000079C:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    lwz r3, lbl_8087F558
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8049103C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x8(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8049103C_00000804
    stw r6, 0x8(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8049103C_00000804:
    addi r3, r30, 0x300
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_8049103C_00000958
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8049103C_00000848
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8049103C_00000848:
    addi r3, r30, 0x300
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_8049103C_000008B4
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8049103C_0000088C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8049103C_00000884
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8049103C_00000884:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8049103C_0000088C:
    lwz r6, 0x300(r30)
    cmpwi r6, 0x0
    beq lbl_fn_8049103C_000008B4
    stw r6, 0x8(r1)
    addi r3, r30, 0x304
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8049103C_000008B4:
    addi r3, r1, 0x1c
    addi r0, r30, 0x300
    cmplw r3, r0
    beq lbl_fn_8049103C_00000924
    lwz r3, 0x300(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8049103C_000008F8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8049103C_000008F0
    addi r3, r30, 0x304
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8049103C_000008F0:
    li r0, 0x0
    stw r0, 0x300(r30)
lbl_fn_8049103C_000008F8:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8049103C_00000924
    stw r0, 0x300(r30)
    addi r3, r1, 0x20
    addi r4, r30, 0x304
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8049103C_00000924:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8049103C_00000958
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8049103C_00000950
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8049103C_00000950:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_8049103C_00000958:
    addic. r3, r1, 0x8
    beq lbl_fn_8049103C_00000994
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8049103C_00000994
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8049103C_0000098C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8049103C_0000098C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8049103C_00000994:
    stw r31, 0x314(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80491234(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r6, r4
    stw r0, 0x24(r1)
    lwz r12, 0x0(r3)
    addi r3, r1, 0x8
    lfs f2, 0x8(r4)
    mr r4, r5
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    lfs f0, 0xc(r6)
    stfs f0, 0x14(r1)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80491280(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_80491280_00000A30
    lis r3, lbl_807901D8@ha
    addi r3, r3, lbl_807901D8@l
    stw r3, 0x0(r4)
    b lbl_fn_80491280_00000A88
lbl_fn_80491280_00000A30:
    cmpwi r5, 0x0
    bne lbl_fn_80491280_00000A44
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_80491280_00000A88
lbl_fn_80491280_00000A44:
    cmpwi r5, 0x1
    bne lbl_fn_80491280_00000A58
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_80491280_00000A88
lbl_fn_80491280_00000A58:
    lwz r5, 0x0(r4)
    lis r3, lbl_807901D8@ha
    lwz r4, lbl_807901D8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80491280_00000A80
    stw r30, 0x0(r31)
    b lbl_fn_80491280_00000A88
lbl_fn_80491280_00000A80:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80491280_00000A88:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80491324(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    beq lbl_fn_80491324_00000B74
    lis r4, lbl_807901E0@ha
    li r0, 0x0
    addi r4, r4, lbl_807901E0@l
    stw r4, 0x0(r3)
    addi r4, r1, 0x8
    li r5, 0x0
    stw r0, lbl_8087F558
    lwz r3, lbl_8087EFB4
    stw r0, 0x8(r1)
    bl fn_8049103C
    addic. r3, r1, 0x8
    beq lbl_fn_80491324_00000B28
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80491324_00000B28
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80491324_00000B20
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80491324_00000B20:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80491324_00000B28:
    addic. r4, r30, 0x150
    beq lbl_fn_80491324_00000B58
    beq lbl_fn_80491324_00000B58
    beq lbl_fn_80491324_00000B58
    beq lbl_fn_80491324_00000B58
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80491324_00000B58
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80491324_00000B58:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80491324_00000B74
    mr r3, r30
    bl dtor_80084684
lbl_fn_80491324_00000B74:
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80491414(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_80491418(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r5, r0, 0x4c
    beq lbl_fn_80491418_00000BAC
    stw r4, 0x0(r5)
lbl_fn_80491418_00000BAC:
    lwz r4, 0x48(r3)
    addi r0, r4, 0x1
    stw r0, 0x48(r3)
    blr
}

asm void fn_80491440(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    addi r6, r3, 0x4c
    slwi r0, r0, 2
    add r5, r3, r0
    addi r5, r5, 0x4c
    b lbl_fn_80491440_00000BD8
lbl_fn_80491440_00000BD4:
    addi r6, r6, 0x4
lbl_fn_80491440_00000BD8:
    cmplw r6, r5
    beq lbl_fn_80491440_00000BEC
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_80491440_00000BD4
lbl_fn_80491440_00000BEC:
    cmplw r6, r5
    beqlr
    addi r0, r3, 0x4c
    subf r0, r0, r6
    srawi r0, r0, 2
    addze r5, r0
    slwi r0, r5, 2
    add r6, r3, r0
    b lbl_fn_80491440_00000C20
lbl_fn_80491440_00000C10:
    lwz r0, 0x50(r6)
    addi r5, r5, 0x1
    stw r0, 0x4c(r6)
    addi r6, r6, 0x4
lbl_fn_80491440_00000C20:
    lwz r4, 0x48(r3)
    subi r0, r4, 0x1
    cmplw r5, r0
    blt lbl_fn_80491440_00000C10
    stw r0, 0x48(r3)
    blr
}

asm void fn_804914BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r7, r3
    stw r0, 0x34(r1)
    addi r5, r1, 0x18
    addi r6, r1, 0x8
    lfs f2, 0x8(r3)
    mr r3, r4
    psq_l f1, 0x0(r7), 0, 0
    mr r4, r6
    lfs f0, 0xc(r7)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x20(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_804918A4
    cmpwi r3, 0x0
    beq lbl_fn_804914BC_00000C90
    addi r3, r3, 0x4c
    b lbl_fn_804914BC_00000C94
lbl_fn_804914BC_00000C90:
    li r3, 0x0
lbl_fn_804914BC_00000C94:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80491528(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r15, 0x3c(r1)
    lis r28, lbl_80775B60@ha
    lis r23, lbl_80775B98@ha
    lis r22, lbl_80775B30@ha
    mr r29, r3
    mr r30, r4
    mr r31, r5
    addi r17, r3, 0x4c
    addi r28, r28, lbl_80775B60@l
    addi r25, r1, 0xc
    addi r23, r23, lbl_80775B98@l
    addi r22, r22, lbl_80775B30@l
    addi r20, r1, 0x2c
    li r27, 0x0
    lis r26, lbl_80775BC8@ha
    li r24, 0x1
    b lbl_fn_80491528_00000EA4
lbl_fn_80491528_00000CF4:
    lwz r3, 0x14c(r29)
    lwz r5, 0x0(r17)
    cmpwi r3, 0x0
    bne lbl_fn_80491528_00000D10
    lwz r0, 0x48(r5)
    cmpwi r0, 0x6
    beq lbl_fn_80491528_00000EA0
lbl_fn_80491528_00000D10:
    cmpwi r3, 0x0
    beq lbl_fn_80491528_00000D24
    lwz r0, 0x48(r5)
    cmpw r3, r0
    bne lbl_fn_80491528_00000EA0
lbl_fn_80491528_00000D24:
    lwz r0, 0xf8(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80491528_00000EA0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80491528_00000D48
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80491528_00000EA0
lbl_fn_80491528_00000D48:
    lwz r19, 0xc4(r5)
    cmpwi r19, 0x0
    beq lbl_fn_80491528_00000D68
    lwz r3, 0x108(r5)
    lwz r0, 0x10c(r5)
    cmpw r3, r0
    beq lbl_fn_80491528_00000D68
    b lbl_fn_80491528_00000DA4
lbl_fn_80491528_00000D68:
    lwz r4, 0x108(r5)
    li r3, 0x0
    cmpwi r4, 0x0
    blt lbl_fn_80491528_00000D88
    lwz r0, 0xa0(r5)
    cmpw r4, r0
    bge lbl_fn_80491528_00000D88
    li r3, 0x1
lbl_fn_80491528_00000D88:
    cmpwi r3, 0x0
    beq lbl_fn_80491528_00000DA0
    slwi r0, r4, 2
    add r3, r5, r0
    lwz r19, 0xa4(r3)
    b lbl_fn_80491528_00000DA4
lbl_fn_80491528_00000DA0:
    li r19, 0x0
lbl_fn_80491528_00000DA4:
    cmpwi r19, 0x0
    beq lbl_fn_80491528_00000EA0
    lwz r18, 0x58(r19)
    b lbl_fn_80491528_00000E88
lbl_fn_80491528_00000DB4:
    lwz r0, 0x0(r30)
    lwz r21, 0x0(r18)
    cmpwi r0, 0x0
    bne lbl_fn_80491528_00000E68
    stw r28, 0x2c(r1)
    addi r3, r26, lbl_80775BC8@l
    stb r27, 0xc(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x30(r1)
    mr r15, r3
    stw r3, 0x18(r1)
    li r3, 0x10
    stw r25, 0x1c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80491528_00000E14
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    stw r23, 0x0(r3)
    stw r15, 0xc(r3)
lbl_fn_80491528_00000E14:
    cmpwi r27, 0x0
    stw r3, 0x34(r1)
    stw r27, 0x18(r1)
    beq lbl_fn_80491528_00000E2C
    li r3, 0x0
    bl fn_80084C24
lbl_fn_80491528_00000E2C:
    lwz r3, 0x30(r1)
    addi r4, r26, lbl_80775BC8@l
    bl strcpy
    stw r22, 0x2c(r1)
    addi r3, r1, 0x2c
    bl fn_800DCA6C
    cmpwi r20, 0x0
    beq lbl_fn_80491528_00000E68
    addic. r3, r20, 0x4
    beq lbl_fn_80491528_00000E68
    beq lbl_fn_80491528_00000E68
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80491528_00000E68
    bl fn_806952C4
lbl_fn_80491528_00000E68:
    lwz r6, 0x0(r30)
    mr r4, r21
    mr r5, r31
    addi r3, r30, 0x4
    lwz r12, 0x4(r6)
    mtctr r12
    bctrl
    addi r18, r18, 0x4
lbl_fn_80491528_00000E88:
    lwz r0, 0x5c(r19)
    lwz r3, 0x58(r19)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r18, r0
    bne lbl_fn_80491528_00000DB4
lbl_fn_80491528_00000EA0:
    addi r17, r17, 0x4
lbl_fn_80491528_00000EA4:
    lwz r0, 0x48(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    addi r0, r3, 0x4c
    cmplw r17, r0
    bne lbl_fn_80491528_00000CF4
    lis r22, lbl_80775B60@ha
    lis r27, lbl_80775B98@ha
    lis r28, lbl_80775B30@ha
    addi r25, r1, 0x8
    addi r22, r22, lbl_80775B60@l
    addi r27, r27, lbl_80775B98@l
    addi r28, r28, lbl_80775B30@l
    addi r21, r1, 0x20
    li r17, 0x0
    li r19, 0x0
    li r23, 0x0
    lis r24, lbl_80775BC8@ha
    li r26, 0x1
    b lbl_fn_80491528_00001000
lbl_fn_80491528_00000EF4:
    lwz r3, 0x150(r29)
    lwzx r16, r3, r19
    cmpwi r16, 0x0
    beq lbl_fn_80491528_00000FF8
    lwz r18, 0x58(r16)
    b lbl_fn_80491528_00000FE0
lbl_fn_80491528_00000F0C:
    lwz r0, 0x0(r30)
    lwz r20, 0x0(r18)
    cmpwi r0, 0x0
    bne lbl_fn_80491528_00000FC0
    stw r22, 0x20(r1)
    addi r3, r24, lbl_80775BC8@l
    stb r23, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x24(r1)
    mr r15, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r25, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80491528_00000F6C
    stw r26, 0x4(r3)
    stw r26, 0x8(r3)
    stw r27, 0x0(r3)
    stw r15, 0xc(r3)
lbl_fn_80491528_00000F6C:
    cmpwi r23, 0x0
    stw r3, 0x28(r1)
    stw r23, 0x10(r1)
    beq lbl_fn_80491528_00000F84
    li r3, 0x0
    bl fn_80084C24
lbl_fn_80491528_00000F84:
    lwz r3, 0x24(r1)
    addi r4, r24, lbl_80775BC8@l
    bl strcpy
    stw r28, 0x20(r1)
    addi r3, r1, 0x20
    bl fn_800DCA6C
    cmpwi r21, 0x0
    beq lbl_fn_80491528_00000FC0
    addic. r3, r21, 0x4
    beq lbl_fn_80491528_00000FC0
    beq lbl_fn_80491528_00000FC0
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80491528_00000FC0
    bl fn_806952C4
lbl_fn_80491528_00000FC0:
    lwz r6, 0x0(r30)
    mr r4, r20
    mr r5, r31
    addi r3, r30, 0x4
    lwz r12, 0x4(r6)
    mtctr r12
    bctrl
    addi r18, r18, 0x4
lbl_fn_80491528_00000FE0:
    lwz r0, 0x5c(r16)
    lwz r3, 0x58(r16)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r18, r0
    bne lbl_fn_80491528_00000F0C
lbl_fn_80491528_00000FF8:
    addi r19, r19, 0x4
    addi r17, r17, 0x1
lbl_fn_80491528_00001000:
    lwz r0, 0x154(r29)
    cmplw r17, r0
    blt lbl_fn_80491528_00000EF4
    lmw r15, 0x3c(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804918A4(void)
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
    bl _savegpr_23
    lwz r5, 0x14c(r3)
    mr r30, r3
    mr r31, r4
    cmpwi r5, 0x0
    beq lbl_fn_804918A4_00001100
    lwz r0, 0x48(r3)
    addi r7, r3, 0x4c
    slwi r0, r0, 2
    add r3, r3, r0
    addi r4, r3, 0x4c
    b lbl_fn_804918A4_000010F4
lbl_fn_804918A4_00001070:
    lwz r8, 0x0(r7)
    lwz r0, 0x48(r8)
    cmpw r5, r0
    bne lbl_fn_804918A4_000010F0
    lwz r6, 0xc4(r8)
    cmpwi r6, 0x0
    beq lbl_fn_804918A4_000010A0
    lwz r3, 0x108(r8)
    lwz r0, 0x10c(r8)
    cmpw r3, r0
    beq lbl_fn_804918A4_000010A0
    b lbl_fn_804918A4_000010DC
lbl_fn_804918A4_000010A0:
    lwz r6, 0x108(r8)
    li r3, 0x0
    cmpwi r6, 0x0
    blt lbl_fn_804918A4_000010C0
    lwz r0, 0xa0(r8)
    cmpw r6, r0
    bge lbl_fn_804918A4_000010C0
    li r3, 0x1
lbl_fn_804918A4_000010C0:
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_000010D8
    slwi r0, r6, 2
    add r3, r8, r0
    lwz r6, 0xa4(r3)
    b lbl_fn_804918A4_000010DC
lbl_fn_804918A4_000010D8:
    li r6, 0x0
lbl_fn_804918A4_000010DC:
    cmpwi r6, 0x0
    beq lbl_fn_804918A4_000010F0
    lwz r3, 0x58(r6)
    lwz r3, 0x0(r3)
    b lbl_fn_804918A4_000014A4
lbl_fn_804918A4_000010F0:
    addi r7, r7, 0x4
lbl_fn_804918A4_000010F4:
    cmplw r7, r4
    bne lbl_fn_804918A4_00001070
    b lbl_fn_804918A4_00001348
lbl_fn_804918A4_00001100:
    addi r26, r3, 0x4c
    b lbl_fn_804918A4_000011C8
lbl_fn_804918A4_00001108:
    lwz r27, 0x0(r26)
    lwz r3, 0x48(r27)
    cmpwi r3, 0x6
    beq lbl_fn_804918A4_000011C4
    lwz r0, 0xf8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804918A4_000011C4
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_804918A4_00001138
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_000011C4
lbl_fn_804918A4_00001138:
    mr r4, r31
    addi r3, r27, 0x88
    bl fn_800709F4
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_000011C4
    lwz r3, 0xc4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_0000116C
    lwz r4, 0x108(r27)
    lwz r0, 0x10c(r27)
    cmpw r4, r0
    beq lbl_fn_804918A4_0000116C
    b lbl_fn_804918A4_000011A8
lbl_fn_804918A4_0000116C:
    lwz r4, 0x108(r27)
    li r3, 0x0
    cmpwi r4, 0x0
    blt lbl_fn_804918A4_0000118C
    lwz r0, 0xa0(r27)
    cmpw r4, r0
    bge lbl_fn_804918A4_0000118C
    li r3, 0x1
lbl_fn_804918A4_0000118C:
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_000011A4
    slwi r0, r4, 2
    add r3, r27, r0
    lwz r3, 0xa4(r3)
    b lbl_fn_804918A4_000011A8
lbl_fn_804918A4_000011A4:
    li r3, 0x0
lbl_fn_804918A4_000011A8:
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_000011C4
    mr r4, r31
    bl fn_804962B0
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_000011C4
    b lbl_fn_804918A4_000014A4
lbl_fn_804918A4_000011C4:
    addi r26, r26, 0x4
lbl_fn_804918A4_000011C8:
    lwz r0, 0x48(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x4c
    cmplw r26, r0
    bne lbl_fn_804918A4_00001108
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_00001348
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_00001348
    lwz r0, 0x108(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804918A4_00001348
    lwz r5, 0xc4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_804918A4_00001224
    lwz r4, 0x108(r3)
    lwz r0, 0x10c(r3)
    cmpw r4, r0
    beq lbl_fn_804918A4_00001224
    b lbl_fn_804918A4_00001260
lbl_fn_804918A4_00001224:
    lwz r5, 0x108(r3)
    li r4, 0x0
    cmpwi r5, 0x0
    blt lbl_fn_804918A4_00001244
    lwz r0, 0xa0(r3)
    cmpw r5, r0
    bge lbl_fn_804918A4_00001244
    li r4, 0x1
lbl_fn_804918A4_00001244:
    cmpwi r4, 0x0
    beq lbl_fn_804918A4_0000125C
    slwi r0, r5, 2
    add r4, r3, r0
    lwz r5, 0xa4(r4)
    b lbl_fn_804918A4_00001260
lbl_fn_804918A4_0000125C:
    li r5, 0x0
lbl_fn_804918A4_00001260:
    cmpwi r5, 0x0
    beq lbl_fn_804918A4_0000128C
    lwz r0, 0x5c(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804918A4_0000128C
    lwz r0, 0xf8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804918A4_0000128C
    lwz r3, 0x58(r5)
    lwz r3, 0x0(r3)
    b lbl_fn_804918A4_000014A4
lbl_fn_804918A4_0000128C:
    lwz r0, 0x48(r30)
    addi r6, r30, 0x4c
    slwi r0, r0, 2
    add r3, r30, r0
    addi r4, r3, 0x4c
    b lbl_fn_804918A4_00001340
lbl_fn_804918A4_000012A4:
    lwz r7, 0x0(r6)
    lwz r0, 0x48(r7)
    cmpwi r0, 0x6
    beq lbl_fn_804918A4_0000133C
    lwz r0, 0xf8(r7)
    cmpwi r0, 0x0
    bne lbl_fn_804918A4_0000133C
    lwz r5, 0xc4(r7)
    cmpwi r5, 0x0
    beq lbl_fn_804918A4_000012E0
    lwz r3, 0x108(r7)
    lwz r0, 0x10c(r7)
    cmpw r3, r0
    beq lbl_fn_804918A4_000012E0
    b lbl_fn_804918A4_0000131C
lbl_fn_804918A4_000012E0:
    lwz r5, 0x108(r7)
    li r3, 0x0
    cmpwi r5, 0x0
    blt lbl_fn_804918A4_00001300
    lwz r0, 0xa0(r7)
    cmpw r5, r0
    bge lbl_fn_804918A4_00001300
    li r3, 0x1
lbl_fn_804918A4_00001300:
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_00001318
    slwi r0, r5, 2
    add r3, r7, r0
    lwz r5, 0xa4(r3)
    b lbl_fn_804918A4_0000131C
lbl_fn_804918A4_00001318:
    li r5, 0x0
lbl_fn_804918A4_0000131C:
    cmpwi r5, 0x0
    beq lbl_fn_804918A4_0000133C
    lwz r0, 0x5c(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804918A4_0000133C
    lwz r3, 0x58(r5)
    lwz r3, 0x0(r3)
    b lbl_fn_804918A4_000014A4
lbl_fn_804918A4_0000133C:
    addi r6, r6, 0x4
lbl_fn_804918A4_00001340:
    cmplw r6, r4
    bne lbl_fn_804918A4_000012A4
lbl_fn_804918A4_00001348:
    li r26, 0x0
    li r27, 0x0
    b lbl_fn_804918A4_00001380
lbl_fn_804918A4_00001354:
    lwz r3, 0x150(r30)
    lwzx r3, r3, r27
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_00001378
    mr r4, r31
    bl fn_804962B0
    cmpwi r3, 0x0
    beq lbl_fn_804918A4_00001378
    b lbl_fn_804918A4_000014A4
lbl_fn_804918A4_00001378:
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_804918A4_00001380:
    lwz r0, 0x154(r30)
    cmplw r26, r0
    blt lbl_fn_804918A4_00001354
    lfs f0, 0xc(r31)
    li r25, 0x0
    li r28, 0x0
    fmuls f31, f0, f0
    b lbl_fn_804918A4_00001494
lbl_fn_804918A4_000013A0:
    lwz r3, 0x150(r30)
    lwzx r24, r3, r28
    cmpwi r24, 0x0
    beq lbl_fn_804918A4_0000148C
    lwz r26, 0x58(r24)
    b lbl_fn_804918A4_00001474
lbl_fn_804918A4_000013B8:
    li r23, 0x0
    li r27, 0x0
    b lbl_fn_804918A4_00001460
lbl_fn_804918A4_000013C4:
    lwz r0, 0x28(r3)
    addi r3, r1, 0x14
    lfs f0, 0x8(r31)
    add r29, r0, r27
    lfs f2, 0x4(r31)
    lfs f4, 0x8(r29)
    lfs f3, 0x4(r29)
    fsubs f4, f4, f0
    lfsx f1, r27, r0
    lfs f0, 0x0(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    lfs f4, 0x14(r29)
    fmr f30, f1
    lfs f0, 0x8(r31)
    addi r3, r1, 0x8
    lfs f3, 0x10(r29)
    lfs f2, 0x4(r31)
    fsubs f4, f4, f0
    lfs f1, 0xc(r29)
    lfs f0, 0x0(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f30, f31
    bge lbl_fn_804918A4_00001458
    fcmpo cr0, f1, f31
    bge lbl_fn_804918A4_00001458
    lwz r3, 0x0(r26)
    b lbl_fn_804918A4_000014A4
lbl_fn_804918A4_00001458:
    addi r27, r27, 0x18
    addi r23, r23, 0x1
lbl_fn_804918A4_00001460:
    lwz r3, 0x0(r26)
    lwz r0, 0x2c(r3)
    cmplw r23, r0
    blt lbl_fn_804918A4_000013C4
    addi r26, r26, 0x4
lbl_fn_804918A4_00001474:
    lwz r0, 0x5c(r24)
    lwz r3, 0x58(r24)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r26, r0
    bne lbl_fn_804918A4_000013B8
lbl_fn_804918A4_0000148C:
    addi r28, r28, 0x4
    addi r25, r25, 0x1
lbl_fn_804918A4_00001494:
    lwz r0, 0x154(r30)
    cmplw r25, r0
    blt lbl_fn_804918A4_000013A0
    li r3, 0x0
lbl_fn_804918A4_000014A4:
    addi r11, r1, 0x50
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    bl _restgpr_23
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80491D50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x8(r5)
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    psq_l f1, 0x0(r5), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f0, 0xc(r5)
    mr r3, r4
    psq_st f1, 0x0(r6), 0, 0
    mr r4, r6
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_804918A4
    cmpwi r3, 0x0
    beq lbl_fn_80491D50_0000154C
    lwz r3, 0x300(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80491D50_0000154C
    li r4, 0x2
    li r5, 0x0
    bl fn_80043014
    lfs f0, 0x0(r3)
    stfs f0, 0x0(r31)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r31)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r31)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r31)
    b lbl_fn_80491D50_00001560
lbl_fn_80491D50_0000154C:
    lfs f0, lbl_80887060
    stfs f0, 0x0(r31)
    stfs f0, 0x4(r31)
    stfs f0, 0x8(r31)
    stfs f0, 0xc(r31)
lbl_fn_80491D50_00001560:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80491DF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x8(r5)
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    psq_l f1, 0x0(r5), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f0, 0xc(r5)
    mr r3, r4
    psq_st f1, 0x0(r6), 0, 0
    mr r4, r6
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_804918A4
    cmpwi r3, 0x0
    beq lbl_fn_80491DF8_000015F4
    lwz r3, 0x300(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80491DF8_000015F4
    li r4, 0x3
    li r5, 0x0
    bl fn_80043014
    lfs f0, 0x0(r3)
    stfs f0, 0x0(r31)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r31)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r31)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r31)
    b lbl_fn_80491DF8_00001608
lbl_fn_80491DF8_000015F4:
    lfs f0, lbl_80887060
    stfs f0, 0x0(r31)
    stfs f0, 0x4(r31)
    stfs f0, 0x8(r31)
    stfs f0, 0xc(r31)
lbl_fn_80491DF8_00001608:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80491EA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r5
    bl fn_8005B9CC
    cmpwi r28, 0x0
    mr r31, r3
    beq lbl_fn_80491EA0_000016E8
    lis r5, lbl_80756700@ha
    li r3, 0x70
    addi r5, r5, lbl_80756700@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80491EA0_000016EC
    mr r4, r28
    mr r5, r30
    bl fn_804963A4
    lis r3, lbl_80790218@ha
    addi r30, r29, 0x50
    addi r3, r3, lbl_80790218@l
    stw r3, 0x0(r29)
    mr r3, r30
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    mr r3, r31
    stw r0, 0x58(r29)
    stw r0, 0x5c(r29)
    stw r0, 0x60(r29)
    stw r0, 0x64(r29)
    bl fn_800DC6B4
    stw r3, 0x68(r29)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x0(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80491EA0_000016EC
lbl_fn_80491EA0_000016E8:
    li r29, 0x0
lbl_fn_80491EA0_000016EC:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80491F94(void)
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
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_80491F94_000017D8
    lis r5, lbl_80756700@ha
    li r3, 0x70
    addi r5, r5, lbl_80756700@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80491F94_000017D0
    mr r4, r28
    mr r5, r30
    bl fn_804963A4
    lis r3, lbl_80790218@ha
    addi r30, r31, 0x50
    addi r3, r3, lbl_80790218@l
    stw r3, 0x0(r31)
    mr r3, r30
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    mr r3, r29
    stw r0, 0x58(r31)
    stw r0, 0x5c(r31)
    stw r0, 0x60(r31)
    stw r0, 0x64(r31)
    bl fn_800DC6B4
    stw r3, 0x68(r31)
    mr r3, r30
    mr r4, r29
    lwz r12, 0x0(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80491F94_000017D0:
    mr r3, r31
    b lbl_fn_80491F94_000017DC
lbl_fn_80491F94_000017D8:
    li r3, 0x0
lbl_fn_80491F94_000017DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80492080(void)
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
    beq lbl_fn_80492080_00001838
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80492080_00001838
    mr r3, r30
    bl dtor_80084684
lbl_fn_80492080_00001838:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804920D8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_804920D8_00001B10
    lis r4, lbl_80790218@ha
    li r29, 0x0
    addi r4, r4, lbl_80790218@l
    stw r4, 0x0(r3)
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_804920D8_00001AA0
lbl_fn_804920D8_00001890:
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_804920D8_00001980
    lwz r3, 0x58(r27)
    lwz r4, lbl_8087F8A0
    lwzx r3, r3, r30
    cmpwi r4, 0x0
    addi r0, r3, 0x4c
    beq lbl_fn_804920D8_000018E8
    lwz r4, 0x48(r4)
    b lbl_fn_804920D8_000018E0
lbl_fn_804920D8_000018BC:
    lwz r3, 0x28c(r4)
    cmpwi r3, 0x0
    bne lbl_fn_804920D8_000018D0
    lwz r3, lbl_8087EFB4
    lwz r3, 0x2fc(r3)
lbl_fn_804920D8_000018D0:
    cmplw r3, r0
    bne lbl_fn_804920D8_000018DC
    stw r31, 0x28c(r4)
lbl_fn_804920D8_000018DC:
    lwz r4, 0x14ac(r4)
lbl_fn_804920D8_000018E0:
    cmpwi r4, 0x0
    bne lbl_fn_804920D8_000018BC
lbl_fn_804920D8_000018E8:
    lwz r3, 0x58(r27)
    lwz r4, lbl_8087F408
    lwzx r3, r3, r30
    cmpwi r4, 0x0
    addi r0, r3, 0x4c
    beq lbl_fn_804920D8_00001934
    lwz r4, 0x48(r4)
    b lbl_fn_804920D8_0000192C
lbl_fn_804920D8_00001908:
    lwz r3, 0x28c(r4)
    cmpwi r3, 0x0
    bne lbl_fn_804920D8_0000191C
    lwz r3, lbl_8087EFB4
    lwz r3, 0x2fc(r3)
lbl_fn_804920D8_0000191C:
    cmplw r3, r0
    bne lbl_fn_804920D8_00001928
    stw r31, 0x28c(r4)
lbl_fn_804920D8_00001928:
    lwz r4, 0x14ac(r4)
lbl_fn_804920D8_0000192C:
    cmpwi r4, 0x0
    bne lbl_fn_804920D8_00001908
lbl_fn_804920D8_00001934:
    lwz r3, 0x58(r27)
    lwz r4, lbl_8087F890
    lwzx r3, r3, r30
    cmpwi r4, 0x0
    addi r0, r3, 0x4c
    beq lbl_fn_804920D8_00001980
    lwz r4, 0x48(r4)
    b lbl_fn_804920D8_00001978
lbl_fn_804920D8_00001954:
    lwz r3, 0x28c(r4)
    cmpwi r3, 0x0
    bne lbl_fn_804920D8_00001968
    lwz r3, lbl_8087EFB4
    lwz r3, 0x2fc(r3)
lbl_fn_804920D8_00001968:
    cmplw r3, r0
    bne lbl_fn_804920D8_00001974
    stw r31, 0x28c(r4)
lbl_fn_804920D8_00001974:
    lwz r4, 0x1424(r4)
lbl_fn_804920D8_00001978:
    cmpwi r4, 0x0
    bne lbl_fn_804920D8_00001954
lbl_fn_804920D8_00001980:
    lwz r3, 0x58(r27)
    lwzx r26, r3, r30
    cmpwi r26, 0x0
    beq lbl_fn_804920D8_00001A98
    addic. r3, r26, 0x308
    beq lbl_fn_804920D8_000019C0
    beq lbl_fn_804920D8_000019C0
    beq lbl_fn_804920D8_000019C0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804920D8_000019C0
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_804920D8_000019C0:
    addi r3, r26, 0x4c
    li r4, -0x1
    bl fn_800C1FB4
    addic. r23, r26, 0x40
    beq lbl_fn_804920D8_00001A30
    beq lbl_fn_804920D8_00001A30
    beq lbl_fn_804920D8_00001A30
    lwz r4, 0x0(r23)
    cmpwi r4, 0x0
    beq lbl_fn_804920D8_00001A30
    lwz r24, 0x4(r23)
    mulli r3, r24, 0xc
    subf r0, r24, r24
    stw r0, 0x4(r23)
    add r25, r4, r3
    b lbl_fn_804920D8_00001A20
lbl_fn_804920D8_00001A00:
    subic. r25, r25, 0xc
    beq lbl_fn_804920D8_00001A1C
    lwz r0, 0x0(r25)
    srwi. r0, r0, 31
    beq lbl_fn_804920D8_00001A1C
    lwz r3, 0x8(r25)
    bl dtor_80084684
lbl_fn_804920D8_00001A1C:
    subi r24, r24, 0x1
lbl_fn_804920D8_00001A20:
    cmpwi r24, 0x0
    bne lbl_fn_804920D8_00001A00
    lwz r3, 0x0(r23)
    bl dtor_80084684
lbl_fn_804920D8_00001A30:
    addic. r3, r26, 0x34
    beq lbl_fn_804920D8_00001A60
    beq lbl_fn_804920D8_00001A60
    beq lbl_fn_804920D8_00001A60
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804920D8_00001A60
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_804920D8_00001A60:
    addic. r3, r26, 0x28
    beq lbl_fn_804920D8_00001A90
    beq lbl_fn_804920D8_00001A90
    beq lbl_fn_804920D8_00001A90
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804920D8_00001A90
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_804920D8_00001A90:
    mr r3, r26
    bl dtor_80084684
lbl_fn_804920D8_00001A98:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_804920D8_00001AA0:
    lwz r0, 0x5c(r27)
    cmplw r29, r0
    blt lbl_fn_804920D8_00001890
    addic. r4, r27, 0x58
    beq lbl_fn_804920D8_00001ADC
    beq lbl_fn_804920D8_00001ADC
    beq lbl_fn_804920D8_00001ADC
    beq lbl_fn_804920D8_00001ADC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804920D8_00001ADC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_804920D8_00001ADC:
    addic. r3, r27, 0x50
    beq lbl_fn_804920D8_00001AEC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804920D8_00001AEC:
    cmpwi r27, 0x0
    beq lbl_fn_804920D8_00001B00
    mr r3, r27
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_804920D8_00001B00:
    cmpwi r28, 0x0
    ble lbl_fn_804920D8_00001B10
    mr r3, r27
    bl dtor_80084684
lbl_fn_804920D8_00001B10:
    mr r3, r27
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
