#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8000FAE4(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004FF58(void);
extern void fn_8006AD24(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008A00C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80096E94(void);
extern void fn_800A03A0(void);
extern void fn_800A03E4(void);
extern void fn_800A0448(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_801F3FF8(void);
extern void fn_801F64D0(void);
extern void fn_801F69A8(void);
extern void fn_801F6A38(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_8023772C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_805F89F0(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_806827C4(void);
extern void fn_8068B100(void);
extern void fn_80695720(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073E6B0[];
extern u8 lbl_8073E6B8[];
extern u8 lbl_8073E6D8[];
extern u8 lbl_8073E780[];
extern u8 lbl_80782E28[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80790000[];

/* Small data declarations */
extern u32 lbl_8087D6DC;
extern u32 lbl_8087D6E0;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_80882CF8;
extern u32 lbl_80882CFC;
extern u32 lbl_80882D00;
extern u32 lbl_80882D04;
extern u32 lbl_80882D08;
extern u32 lbl_80882D0C;
extern u32 lbl_80882D10;
extern u32 lbl_80882D14;

/* Function declarations */
void fn_80202A6C(void);
void fn_80202AF0(void);
void fn_80202C4C(void);
void fn_80202CA4(void);
void fn_80202D00(void);
void fn_80202D20(void);
void fn_80202DB8(void);
void fn_80202E48(void);
void fn_8020303C(void);
void fn_80203260(void);
void fn_80203328(void);
void fn_80203930(void);
void fn_802039A0(void);
void fn_80203A18(void);
void fn_80203A44(void);
void fn_80203BA4(void);
void fn_80203C10(void);
void fn_80203C7C(void);
void fn_80203CF8(void);
void fn_80203D50(void);
void fn_80203D7C(void);
void fn_80203E78(void);
void fn_80203F1C(void);
void fn_80203F90(void);
void fn_80204028(void);
void fn_8020408C(void);
void fn_802040B8(void);
void fn_80204150(void);
void fn_802041F0(void);
void fn_80204230(void);

asm void fn_80202A6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80202A6C_00000064
    lis r5, lbl_8073E6D8@ha
    li r3, 0x108
    addi r5, r5, lbl_8073E6D8@l
    li r4, 0x8
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80202A6C_00000068
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80202AF0
    b lbl_fn_80202A6C_00000068
lbl_fn_80202A6C_00000064:
    li r3, 0x0
lbl_fn_80202A6C_00000068:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80202AF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D1D3C
    lwz r0, 0x104(r28)
    lis r3, lbl_80782E28@ha
    lfs f0, lbl_80882D00
    addi r3, r3, lbl_80782E28@l
    clrlwi r0, r0, 8
    lfs f2, lbl_80882CF8
    oris r0, r0, 0x80
    lfs f1, lbl_80882CFC
    rlwinm r0, r0, 0, 10, 8
    li r31, 0x0
    oris r0, r0, 0x20
    stw r3, 0x0(r28)
    addi r3, r28, 0x4c
    li r4, 0x0
    stw r31, 0x48(r28)
    li r5, 0x40
    stfs f2, 0xbc(r28)
    stfs f1, 0xc0(r28)
    stfs f2, 0xc4(r28)
    stfs f0, 0xf8(r28)
    stfs f0, 0xfc(r28)
    stfs f0, 0x100(r28)
    stw r0, 0x104(r28)
    bl memset
    lfs f1, lbl_80882CF8
    mr r4, r29
    lfs f0, lbl_80882D00
    addi r3, r28, 0x4c
    stfs f1, 0xf4(r28)
    stfs f1, 0xec(r28)
    stfs f1, 0xe8(r28)
    stfs f1, 0xe4(r28)
    stfs f1, 0xe0(r28)
    stfs f1, 0xd8(r28)
    stfs f1, 0xd4(r28)
    stfs f1, 0xd0(r28)
    stfs f1, 0xcc(r28)
    stfs f0, 0xf0(r28)
    stfs f0, 0xdc(r28)
    stfs f0, 0xc8(r28)
    stfs f1, 0xb8(r28)
    stfs f1, 0xb0(r28)
    stfs f1, 0xac(r28)
    stfs f1, 0xa8(r28)
    stfs f1, 0xa4(r28)
    stfs f1, 0x9c(r28)
    stfs f1, 0x98(r28)
    stfs f1, 0x94(r28)
    stfs f1, 0x90(r28)
    stfs f0, 0xb4(r28)
    stfs f0, 0xa0(r28)
    stfs f0, 0x8c(r28)
    bl strcpy
    cmpwi r30, 0x0
    beq lbl_fn_80202AF0_000001BC
    lwz r0, 0x104(r28)
    li r3, 0x1
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x104(r28)
    mr r3, r28
    addi r4, r28, 0x4c
    bl fn_801F64D0
    stw r3, 0x48(r28)
    li r4, 0x1
    stb r31, 0x4e(r3)
    lwz r3, 0x48(r28)
    bl fn_800D246C
lbl_fn_80202AF0_000001BC:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80202C4C(void)
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
    beq lbl_fn_80202C4C_0000021C
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80202C4C_0000021C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80202C4C_0000021C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80202CA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x104(r3)
    rlwimi r0, r4, 24, 0, 7
    stw r0, 0x104(r3)
    addi r4, r3, 0x4c
    bl fn_801F64D0
    stw r3, 0x48(r31)
    li r0, 0x0
    li r4, 0x1
    stb r0, 0x4e(r3)
    lwz r3, 0x48(r31)
    bl fn_800D246C
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80202D00(void)
{
    nofralloc
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80202D00_000002AC
    li r3, 0x0
    blr
lbl_fn_80202D00_000002AC:
    lwz r3, 0x48(r3)
    blr
}

asm void fn_80202D20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80202D20_0000032C
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80202D20_0000032C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80202D20_00000324
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    li r3, 0x2
    li r5, 0x0
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0x104(r31)
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x104(r31)
    b lbl_fn_80202D20_00000330
lbl_fn_80202D20_00000324:
    li r5, 0x1
    b lbl_fn_80202D20_00000330
lbl_fn_80202D20_0000032C:
    li r5, 0x0
lbl_fn_80202D20_00000330:
    cntlzw r0, r5
    lwz r31, 0xc(r1)
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80202DB8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80202DB8_000003C4
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80202DB8_000003C4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80202DB8_000003BC
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    li r3, 0x2
    li r5, 0x0
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0x104(r31)
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x104(r31)
    b lbl_fn_80202DB8_000003C8
lbl_fn_80202DB8_000003BC:
    li r5, 0x1
    b lbl_fn_80202DB8_000003C8
lbl_fn_80202DB8_000003C4:
    li r5, 0x0
lbl_fn_80202DB8_000003C8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80202E48(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80202E48_0000045C
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80202E48_0000045C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80202E48_00000454
    li r4, 0x0
    bl fn_800D246C
    lwz r5, 0x48(r31)
    li r3, 0x2
    li r4, 0x0
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r0, 0x104(r31)
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x104(r31)
    b lbl_fn_80202E48_00000460
lbl_fn_80202E48_00000454:
    li r4, 0x1
    b lbl_fn_80202E48_00000460
lbl_fn_80202E48_0000045C:
    li r4, 0x0
lbl_fn_80202E48_00000460:
    cmpwi r4, 0x0
    bne lbl_fn_80202E48_000005B4
    addi r30, r31, 0x8c
    psq_l f2, 0xd0(r31), 0, 0
    psq_l f4, 0xe0(r31), 0, 0
    addi r3, r1, 0x60
    psq_l f6, 0xf0(r31), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_l f1, 0xc8(r31), 0, 0
    psq_l f3, 0xd8(r31), 0, 0
    psq_l f5, 0xe8(r31), 0, 0
    lfs f8, 0xbc(r31)
    psq_st f1, 0x0(r30), 0, 0
    lfs f7, 0xc0(r31)
    psq_st f4, 0x18(r30), 0, 0
    lfs f0, 0xc4(r31)
    psq_st f6, 0x28(r30), 0, 0
    lfs f1, 0xf8(r31)
    psq_st f3, 0x10(r30), 0, 0
    lfs f2, 0xfc(r31)
    psq_st f5, 0x20(r30), 0, 0
    lfs f3, 0x100(r31)
    stfs f8, 0x98(r31)
    stfs f7, 0xa8(r31)
    stfs f0, 0xb8(r31)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    addi r4, r1, 0x30
    lwz r3, 0x48(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    cmpwi r3, 0x0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    beq lbl_fn_80202E48_0000051C
    bl fn_801F69A8
lbl_fn_80202E48_0000051C:
    lwz r0, 0x104(r31)
    extlwi r0, r0, 2, 8
    srawi. r0, r0, 31
    beq lbl_fn_80202E48_000005B4
    lfs f8, lbl_80882CF8
    addi r5, r1, 0x18
    lfs f0, 0xc4(r31)
    addi r30, r1, 0x8
    lfs f9, lbl_80882D04
    lis r3, lbl_8073E6B0@ha
    fadds f2, f0, f8
    lfs f7, 0xc0(r31)
    lfs f0, 0xbc(r31)
    fadds f7, f7, f9
    lwz r4, lbl_8087EFB4
    fadds f0, f0, f9
    stfs f7, 0x1c(r1)
    addi r29, r4, 0x204
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfd f1, lbl_8073E6B0@l(r3)
    stfs f9, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f2, 0x20(r1)
    stfs f2, 0x10(r1)
    bl fn_8068B100
    frsp f0, f1
    mr r3, r29
    mr r4, r30
    stfs f0, 0x14(r1)
    bl fn_8004FF58
    cntlzw r0, r3
    srwi. r0, r0, 5
    bne lbl_fn_80202E48_000005B4
    mr r3, r31
    bl fn_80203328
lbl_fn_80202E48_000005B4:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8020303C(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lfs f0, 0x28(r4)
    stw r0, 0xe4(r1)
    lfs f7, 0x18(r4)
    stfd f31, 0xd0(r1)
    lfs f8, 0x8(r4)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r4
    stw r30, 0xb8(r1)
    mr r30, r3
    addi r3, r1, 0x20
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x24(r31)
    fmr f30, f1
    lfs f7, 0x14(r31)
    addi r3, r1, 0x14
    lfs f8, 0x4(r31)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    lfs f0, 0x20(r31)
    fmr f31, f1
    lfs f7, 0x10(r31)
    addi r3, r1, 0x8
    lfs f8, 0x0(r31)
    stfs f8, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9940
    stfs f1, 0x38(r1)
    frsp f2, f30
    addi r3, r1, 0x38
    lfs f7, 0x2c(r31)
    stfs f31, 0x3c(r1)
    addi r4, r1, 0x2c
    lfs f8, 0x1c(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xf8(r30), 0, 0
    lfs f0, 0xc(r31)
    lfs f9, 0xf8(r30)
    stfs f2, 0x100(r30)
    fmr f2, f7
    fabs f10, f9
    psq_l f4, 0x18(r31), 0, 0
    stfs f0, 0x2c(r1)
    psq_l f6, 0x28(r31), 0, 0
    stfs f8, 0x30(r1)
    frsp f8, f10
    lfs f0, lbl_80882D08
    stfs f2, 0xc4(r30)
    psq_l f2, 0x8(r31), 0, 0
    fcmpo cr0, f8, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f3, 0x10(r31), 0, 0
    psq_st f1, 0xbc(r30), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_st f2, 0xd0(r30), 0, 0
    lfs f8, lbl_80882CF8
    psq_st f4, 0xe0(r30), 0, 0
    psq_st f6, 0xf0(r30), 0, 0
    stfs f30, 0x40(r1)
    stfs f7, 0x34(r1)
    psq_st f1, 0xc8(r30), 0, 0
    psq_st f3, 0xd8(r30), 0, 0
    psq_st f5, 0xe8(r30), 0, 0
    stfs f8, 0xd4(r30)
    stfs f8, 0xe4(r30)
    stfs f8, 0xf4(r30)
    bge lbl_fn_8020303C_0000070C
    b lbl_fn_8020303C_00000714
lbl_fn_8020303C_0000070C:
    lfs f0, lbl_80882D00
    fdivs f8, f0, f9
lbl_fn_8020303C_00000714:
    lfs f7, 0xfc(r30)
    stfs f8, 0x44(r1)
    fabs f9, f7
    lfs f0, lbl_80882D08
    frsp f8, f9
    fcmpo cr0, f8, f0
    bge lbl_fn_8020303C_00000738
    lfs f8, lbl_80882CF8
    b lbl_fn_8020303C_00000740
lbl_fn_8020303C_00000738:
    lfs f0, lbl_80882D00
    fdivs f8, f0, f7
lbl_fn_8020303C_00000740:
    lfs f7, 0x100(r30)
    stfs f8, 0x48(r1)
    fabs f9, f7
    lfs f0, lbl_80882D08
    frsp f8, f9
    fcmpo cr0, f8, f0
    bge lbl_fn_8020303C_00000764
    lfs f0, lbl_80882CF8
    b lbl_fn_8020303C_0000076C
lbl_fn_8020303C_00000764:
    lfs f0, lbl_80882D00
    fdivs f0, f0, f7
lbl_fn_8020303C_0000076C:
    frsp f3, f0
    stfs f0, 0x4c(r1)
    lfs f1, 0x44(r1)
    addi r31, r30, 0xc8
    lfs f2, 0x48(r1)
    addi r3, r1, 0x80
    bl fn_805F9160
    mr r3, r31
    addi r4, r1, 0x80
    addi r5, r1, 0x50
    bl fn_805F89F0
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80203260(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    addi r31, r3, 0x8c
    psq_l f2, 0xd0(r3), 0, 0
    psq_l f4, 0xe0(r3), 0, 0
    psq_l f6, 0xf0(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_l f1, 0xc8(r3), 0, 0
    psq_l f3, 0xd8(r3), 0, 0
    psq_l f5, 0xe8(r3), 0, 0
    lfs f8, 0xbc(r3)
    psq_st f1, 0x0(r31), 0, 0
    lfs f7, 0xc0(r3)
    psq_st f4, 0x18(r31), 0, 0
    lfs f0, 0xc4(r3)
    psq_st f6, 0x28(r31), 0, 0
    lfs f1, 0xf8(r3)
    psq_st f3, 0x10(r31), 0, 0
    lfs f2, 0xfc(r3)
    psq_st f5, 0x20(r31), 0, 0
    lfs f3, 0x100(r3)
    stfs f8, 0x98(r3)
    stfs f7, 0xa8(r3)
    stfs f0, 0xb8(r3)
    addi r3, r1, 0x38
    bl fn_805F9160
    mr r3, r31
    addi r4, r1, 0x38
    addi r5, r1, 0x8
    bl fn_805F89F0
    addi r3, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80203328(void)
{
    nofralloc
    stwu r1, -0x360(r1)
    mflr r0
    lis r6, 0x4330
    lis r8, lbl_8073E6B8@ha
    stw r0, 0x364(r1)
    addi r9, r1, 0x2f0
    lfd f7, lbl_8073E6B8@l(r8)
    addi r10, r1, 0x2c0
    stfd f31, 0x350(r1)
    addi r11, r1, 0x290
    psq_st f31, 0x358(r1), 0, 0
    stfd f30, 0x340(r1)
    psq_st f30, 0x348(r1), 0, 0
    stw r31, 0x33c(r1)
    stw r30, 0x338(r1)
    mr r30, r3
    stw r29, 0x334(r1)
    stw r28, 0x330(r1)
    lwz r12, lbl_8087EEB0
    lwz r5, lbl_8087EEE0
    psq_l f2, 0xdc(r12), 0, 0
    lwz r0, 0x3c(r5)
    psq_l f3, 0xe4(r12), 0, 0
    psq_l f4, 0xec(r12), 0, 0
    xoris r7, r0, 0x8000
    psq_l f5, 0xf4(r12), 0, 0
    psq_l f6, 0xfc(r12), 0, 0
    lwz r5, 0x40(r5)
    psq_l f1, 0xd4(r12), 0, 0
    lwz r4, lbl_8087EFB4
    xoris r5, r5, 0x8000
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x164(r4), 0, 0
    psq_st f3, 0x10(r9), 0, 0
    psq_l f3, 0x16c(r4), 0, 0
    psq_st f4, 0x18(r9), 0, 0
    psq_l f4, 0x174(r4), 0, 0
    psq_st f5, 0x20(r9), 0, 0
    psq_l f5, 0x17c(r4), 0, 0
    psq_st f6, 0x28(r9), 0, 0
    psq_l f6, 0x184(r4), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x15c(r4), 0, 0
    psq_st f1, 0xd4(r12), 0, 0
    psq_st f2, 0xdc(r12), 0, 0
    psq_st f3, 0xe4(r12), 0, 0
    psq_st f4, 0xec(r12), 0, 0
    psq_st f5, 0xf4(r12), 0, 0
    psq_st f6, 0xfc(r12), 0, 0
    lwz r0, 0x104(r3)
    lwz r3, lbl_8087EEB0
    extlwi r0, r0, 2, 9
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0xa4(r3), 0, 0
    srawi. r0, r0, 31
    psq_st f2, 0x8(r10), 0, 0
    psq_l f2, 0xac(r3), 0, 0
    psq_st f3, 0x10(r10), 0, 0
    psq_l f3, 0xb4(r3), 0, 0
    psq_st f4, 0x18(r10), 0, 0
    psq_l f4, 0xbc(r3), 0, 0
    psq_st f5, 0x20(r10), 0, 0
    psq_l f5, 0xc4(r3), 0, 0
    psq_st f6, 0x28(r10), 0, 0
    psq_l f6, 0xcc(r3), 0, 0
    stw r7, 0x324(r1)
    lwz r31, 0xa0(r3)
    stw r6, 0x320(r1)
    lfd f0, 0x320(r1)
    stw r5, 0x32c(r1)
    fsubs f31, f0, f7
    stw r6, 0x328(r1)
    lfd f0, 0x328(r1)
    psq_st f1, 0x0(r11), 0, 0
    fsubs f30, f0, f7
    psq_st f2, 0x8(r11), 0, 0
    psq_st f3, 0x10(r11), 0, 0
    psq_st f4, 0x18(r11), 0, 0
    psq_st f5, 0x20(r11), 0, 0
    psq_st f6, 0x28(r11), 0, 0
    beq lbl_fn_80203328_00000AD8
    lfs f1, lbl_80882D00
    addi r3, r1, 0x200
    lfs f2, lbl_80882D0C
    fmr f3, f1
    stfs f1, 0x44(r1)
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    bl fn_805F9160
    fneg f8, f30
    addi r4, r1, 0x200
    lfs f7, lbl_80882D14
    fneg f0, f31
    lfs f9, lbl_80882D10
    addi r29, r1, 0x260
    fmuls f8, f7, f8
    psq_l f1, 0x0(r4), 0, 0
    fmuls f0, f7, f0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0x110
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f0
    psq_l f4, 0x18(r4), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    fmr f2, f8
    psq_l f5, 0x20(r4), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    fmr f3, f9
    psq_l f6, 0x28(r4), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    stfs f0, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f9, 0x40(r1)
    bl fn_805F90D0
    mr r3, r29
    addi r4, r1, 0x110
    addi r5, r1, 0x140
    bl fn_805F89F0
    addi r3, r1, 0x140
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
    b lbl_fn_80203328_00000B30
lbl_fn_80203328_00000AD8:
    lfs f1, lbl_80882D00
    addi r3, r1, 0x1d0
    lfs f2, lbl_80882D0C
    fmr f3, f1
    stfs f1, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f1, 0x34(r1)
    bl fn_805F9160
    addi r4, r1, 0x1d0
    addi r3, r1, 0x260
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_80203328_00000B30:
    addi r4, r1, 0x260
    addi r3, r30, 0x8c
    mr r5, r4
    bl fn_805F89F0
    lwz r0, 0x104(r30)
    extlwi r0, r0, 2, 9
    srawi. r0, r0, 31
    beq lbl_fn_80203328_00000C28
    lfs f1, lbl_80882D00
    addi r3, r1, 0x1a0
    lfs f2, lbl_80882D0C
    fmr f3, f1
    stfs f1, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    bl fn_805F9160
    fneg f8, f30
    addi r4, r1, 0x1a0
    lfs f7, lbl_80882D14
    fneg f0, f31
    lfs f9, lbl_80882CF8
    addi r29, r1, 0x260
    fmuls f8, f7, f8
    psq_l f1, 0x0(r4), 0, 0
    fmuls f0, f7, f0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0xb0
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f0
    psq_l f4, 0x18(r4), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    fmr f2, f8
    psq_l f5, 0x20(r4), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    fmr f3, f9
    psq_l f6, 0x28(r4), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    stfs f0, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f9, 0x1c(r1)
    bl fn_805F90D0
    mr r3, r29
    addi r4, r1, 0xb0
    addi r5, r1, 0xe0
    bl fn_805F89F0
    addi r3, r1, 0xe0
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
    b lbl_fn_80203328_00000C80
lbl_fn_80203328_00000C28:
    lfs f1, lbl_80882D00
    addi r3, r1, 0x170
    lfs f2, lbl_80882D0C
    fmr f3, f1
    stfs f1, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_805F9160
    addi r4, r1, 0x170
    addi r3, r1, 0x260
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_80203328_00000C80:
    addi r4, r1, 0x260
    addi r3, r30, 0x8c
    mr r5, r4
    bl fn_805F89F0
    lfs f2, lbl_80882CF8
    addi r29, r1, 0xa4
    stfs f2, 0x98(r1)
    addi r6, r1, 0x98
    mr r4, r29
    mr r5, r29
    stfs f2, 0x9c(r1)
    addi r3, r1, 0x260
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F93C0
    lfs f0, lbl_80882CF8
    addi r28, r1, 0x8c
    lfs f7, lbl_80882D00
    addi r6, r1, 0x230
    lfs f2, 0xac(r1)
    addi r7, r1, 0x80
    stfs f2, 0x238(r1)
    fmr f2, f0
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r28
    stfs f7, 0x80(r1)
    mr r5, r28
    addi r3, r1, 0x260
    stfs f0, 0x84(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x88(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F93C0
    lfs f7, lbl_80882CF8
    addi r29, r1, 0x74
    lfs f0, lbl_80882D00
    addi r6, r1, 0x23c
    lfs f2, 0x94(r1)
    addi r7, r1, 0x68
    stfs f2, 0x244(r1)
    fmr f2, f7
    psq_l f1, 0x0(r28), 0, 0
    mr r4, r29
    stfs f7, 0x68(r1)
    mr r5, r29
    addi r3, r1, 0x260
    stfs f0, 0x6c(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f7, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F93C0
    lfs f7, lbl_80882D00
    addi r28, r1, 0x5c
    lfs f0, lbl_80882CF8
    addi r6, r1, 0x248
    lfs f2, 0x7c(r1)
    addi r7, r1, 0x50
    stfs f2, 0x250(r1)
    fmr f2, f0
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r28
    stfs f7, 0x50(r1)
    mr r5, r28
    addi r3, r1, 0x260
    stfs f7, 0x54(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x58(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F93C0
    lfs f2, 0x64(r1)
    li r0, 0xd
    psq_l f1, 0x0(r28), 0, 0
    addi r3, r1, 0x254
    lwz r5, lbl_8087EEB0
    addi r4, r1, 0x260
    stfs f2, 0x25c(r1)
    stw r0, 0xa0(r5)
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, lbl_8087EEB0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xa4(r3), 0, 0
    psq_st f2, 0xac(r3), 0, 0
    psq_st f3, 0xb4(r3), 0, 0
    psq_st f4, 0xbc(r3), 0, 0
    psq_st f5, 0xc4(r3), 0, 0
    psq_st f6, 0xcc(r3), 0, 0
    lwz r3, 0x48(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80203328_00000E1C
    bl fn_801F6A38
lbl_fn_80203328_00000E1C:
    lwz r5, lbl_8087EEB0
    addi r3, r1, 0x290
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x2f0
    stw r31, 0xa0(r5)
    psq_l f2, 0x8(r3), 0, 0
    lwz r5, lbl_8087EEB0
    psq_l f3, 0x10(r3), 0, 0
    psq_st f1, 0xa4(r5), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_st f2, 0xac(r5), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_st f3, 0xb4(r5), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f4, 0xbc(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f5, 0xc4(r5), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f6, 0xcc(r5), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    lwz r3, lbl_8087EEB0
    psq_l f4, 0x18(r4), 0, 0
    psq_st f1, 0xd4(r3), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_st f2, 0xdc(r3), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f3, 0xe4(r3), 0, 0
    psq_st f4, 0xec(r3), 0, 0
    psq_st f5, 0xf4(r3), 0, 0
    psq_st f6, 0xfc(r3), 0, 0
    psq_l f31, 0x358(r1), 0, 0
    lfd f31, 0x350(r1)
    psq_l f30, 0x348(r1), 0, 0
    lfd f30, 0x340(r1)
    lwz r31, 0x33c(r1)
    lwz r30, 0x338(r1)
    lwz r29, 0x334(r1)
    lwz r28, 0x330(r1)
    lwz r0, 0x364(r1)
    mtlr r0
    addi r1, r1, 0x360
    blr
}

asm void fn_80203930(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8073E780@ha
    li r4, 0x4
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8073E780@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0xc
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80203930_00000F00
    bl fn_800A03A0
lbl_fn_80203930_00000F00:
    lwz r0, 0x8(r31)
    stw r3, 0x18(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80203930_00000F18
    addi r4, r31, 0x9
    b lbl_fn_80203930_00000F1C
lbl_fn_80203930_00000F18:
    lwz r4, 0x10(r31)
lbl_fn_80203930_00000F1C:
    bl fn_800A03E4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802039A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x18(r3)
    cmpwi r31, 0x0
    beq lbl_fn_802039A0_00000F94
    mr r3, r31
    bl fn_80473F88
    li r0, 0x0
    stw r0, 0x8(r31)
    lwz r31, 0x18(r30)
    cmpwi r31, 0x0
    beq lbl_fn_802039A0_00000F8C
    beq lbl_fn_802039A0_00000F84
    mr r3, r31
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802039A0_00000F84:
    mr r3, r31
    bl dtor_80084684
lbl_fn_802039A0_00000F8C:
    li r0, 0x0
    stw r0, 0x18(r30)
lbl_fn_802039A0_00000F94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80203A18(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x18(r3)
    stw r0, 0x14(r1)
    bl fn_800A0448
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80203A44(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r30, r3
    lwz r4, 0x8(r3)
    lwz r31, 0x4(r3)
    srwi. r0, r4, 31
    bne lbl_fn_80203A44_00001014
    lwz r0, 0xc(r3)
    stw r0, 0x28(r1)
    stw r4, 0x24(r1)
    lwz r0, 0x10(r3)
    stw r0, 0x2c(r1)
    b lbl_fn_80203A44_0000105C
lbl_fn_80203A44_00001014:
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r29, r1, 0x24
    stw r0, 0x28(r1)
    mr r3, r29
    stw r0, 0x2c(r1)
    lwz r4, 0xc(r30)
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r29
    stb r0, 0x10(r1)
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x10(r30)
    lwz r0, 0xc(r30)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80203A44_0000105C:
    lis r3, lbl_8073E780@ha
    li r0, 0x0
    addi r3, r3, lbl_8073E780@l
    stw r0, 0x18(r1)
    addi r29, r3, 0x1
    addi r28, r1, 0x18
    stw r0, 0x1c(r1)
    mr r3, r29
    stw r0, 0x20(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r27
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x24
    bl fn_8006AD24
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80203A44_000010D8
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_80203A44_000010D8:
    lwz r0, 0x24(r1)
    mr r3, r31
    srwi. r0, r0, 31
    bne lbl_fn_80203A44_000010F0
    addi r4, r1, 0x25
    b lbl_fn_80203A44_000010F4
lbl_fn_80203A44_000010F0:
    lwz r4, 0x2c(r1)
lbl_fn_80203A44_000010F4:
    li r5, 0x0
    bl fn_801F3FF8
    li r0, 0x1
    stw r3, 0x18(r30)
    li r4, 0x1
    stw r0, 0x1c(r30)
    bl fn_800D246C
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80203A44_00001124
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_80203A44_00001124:
    lmw r27, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80203BA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    lwz r5, 0x18(r3)
    lwz r0, 0x98(r4)
    cmpwi r5, 0x0
    extrwi r0, r0, 1, 5
    beq lbl_fn_80203BA4_00001190
    cmpwi r0, 0x0
    beq lbl_fn_80203BA4_00001188
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80203BA4_00001188
    mr r3, r5
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x18(r31)
lbl_fn_80203BA4_00001188:
    li r0, 0x0
    stw r0, 0x18(r31)
lbl_fn_80203BA4_00001190:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80203C10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x1c(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x1
    bne lbl_fn_80203C10_000011F8
    lwz r3, 0x18(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80203C10_000011F8
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x18(r31)
    li r3, 0x1
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_80203C10_000011FC
lbl_fn_80203C10_000011F8:
    li r3, 0x0
lbl_fn_80203C10_000011FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80203C7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8073E780@ha
    li r4, 0x4
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8073E780@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x3d0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80203C7C_00001254
    li r4, 0x100
    li r5, 0x28
    bl fn_80096E94
lbl_fn_80203C7C_00001254:
    lwz r0, 0x8(r31)
    stw r3, 0x24(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80203C7C_0000126C
    addi r4, r31, 0x9
    b lbl_fn_80203C7C_00001270
lbl_fn_80203C7C_0000126C:
    lwz r4, 0x10(r31)
lbl_fn_80203C7C_00001270:
    li r5, 0x0
    bl fn_8008AD4C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80203CF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80203CF8_000012D0
    beq lbl_fn_80203CF8_000012C8
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80203CF8_000012C8:
    li r0, 0x0
    stw r0, 0x24(r31)
lbl_fn_80203CF8_000012D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80203D50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x24(r3)
    stw r0, 0x14(r1)
    bl fn_8008B140
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80203D7C(void)
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
    lwz r0, 0x8(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80203D7C_00001344
    addi r29, r3, 0x9
    b lbl_fn_80203D7C_00001348
lbl_fn_80203D7C_00001344:
    lwz r29, 0x10(r3)
lbl_fn_80203D7C_00001348:
    lis r30, lbl_8073E780@ha
    mr r3, r29
    addi r30, r30, lbl_8073E780@l
    addi r4, r30, 0x5
    bl fn_806827C4
    mr r31, r3
    mr r3, r29
    addi r4, r30, 0xa
    bl fn_806827C4
    cmplw r31, r3
    ble lbl_fn_80203D7C_000013B0
    mr r5, r30
    mr r6, r30
    li r3, 0xc
    li r4, 0x4
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80203D7C_00001398
    bl fn_802377B8
lbl_fn_80203D7C_00001398:
    stw r3, 0x18(r28)
    mr r4, r29
    bl fn_8023780C
    li r0, 0x1
    stw r0, 0x1c(r28)
    b lbl_fn_80203D7C_000013EC
lbl_fn_80203D7C_000013B0:
    bge lbl_fn_80203D7C_000013EC
    mr r5, r30
    mr r6, r30
    li r3, 0xc
    li r4, 0x4
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80203D7C_000013D8
    bl fn_80237518
lbl_fn_80203D7C_000013D8:
    stw r3, 0x18(r28)
    mr r4, r29
    bl fn_80237654
    li r0, 0x2
    stw r0, 0x1c(r28)
lbl_fn_80203D7C_000013EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80203E78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80203E78_00001498
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x1
    bne lbl_fn_80203E78_00001474
    mr r3, r0
    bl fn_8023781C
    lwz r31, 0x18(r30)
    cmpwi r31, 0x0
    beq lbl_fn_80203E78_00001490
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80203E78_00001468
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80203E78_00001468:
    mr r3, r31
    bl dtor_80084684
    b lbl_fn_80203E78_00001490
lbl_fn_80203E78_00001474:
    cmpwi r3, 0x2
    bne lbl_fn_80203E78_00001490
    mr r3, r0
    bl fn_8023772C
    lwz r3, 0x18(r30)
    li r4, 0x1
    bl fn_802375C4
lbl_fn_80203E78_00001490:
    li r0, 0x0
    stw r0, 0x18(r30)
lbl_fn_80203E78_00001498:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80203F1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x1c(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x1
    bne lbl_fn_80203F1C_000014E8
    lwz r3, 0x18(r3)
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80203F1C_000014E8
    li r3, 0x0
    b lbl_fn_80203F1C_00001510
lbl_fn_80203F1C_000014E8:
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80203F1C_0000150C
    lwz r3, 0x18(r31)
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_80203F1C_0000150C
    li r3, 0x0
    b lbl_fn_80203F1C_00001510
lbl_fn_80203F1C_0000150C:
    li r3, 0x1
lbl_fn_80203F1C_00001510:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80203F90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8073E780@ha
    li r4, 0x4
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8073E780@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x8
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80203F90_00001574
    bl fn_80473E74
    lis r3, lbl_80790000@ha
    addi r3, r3, lbl_80790000@l
    stw r3, 0x0(r31)
lbl_fn_80203F90_00001574:
    lwz r0, 0x8(r30)
    mr r3, r31
    stw r31, 0x18(r30)
    srwi. r0, r0, 31
    bne lbl_fn_80203F90_00001590
    addi r4, r30, 0x9
    b lbl_fn_80203F90_00001594
lbl_fn_80203F90_00001590:
    lwz r4, 0x10(r30)
lbl_fn_80203F90_00001594:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80204028(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80204028_0000160C
    mr r3, r0
    bl fn_80473F88
    lwz r3, 0x18(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80204028_00001604
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80204028_00001604:
    li r0, 0x0
    stw r0, 0x18(r31)
lbl_fn_80204028_0000160C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020408C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x18(r3)
    stw r0, 0x14(r1)
    bl fn_80473F50
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802040B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8073E780@ha
    li r4, 0x4
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8073E780@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x8
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_802040B8_0000169C
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r31)
lbl_fn_802040B8_0000169C:
    lwz r0, 0x8(r30)
    mr r3, r31
    stw r31, 0x18(r30)
    srwi. r0, r0, 31
    bne lbl_fn_802040B8_000016B8
    addi r4, r30, 0x9
    b lbl_fn_802040B8_000016BC
lbl_fn_802040B8_000016B8:
    lwz r4, 0x10(r30)
lbl_fn_802040B8_000016BC:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80204150(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80204150_0000176C
    mr r3, r0
    bl fn_80473F88
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80204150_00001730
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80204150_00001730:
    lwz r31, 0x1c(r30)
    li r0, 0x0
    stw r0, 0x18(r30)
    cmpwi r31, 0x0
    beq lbl_fn_80204150_00001764
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80204150_0000175C
    beq lbl_fn_80204150_0000175C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80204150_0000175C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_80204150_00001764:
    li r0, 0x0
    stw r0, 0x1c(r30)
lbl_fn_80204150_0000176C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802041F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802041F0_000017A4
    li r3, 0x1
    b lbl_fn_802041F0_000017B4
lbl_fn_802041F0_000017A4:
    lwz r3, 0x18(r3)
    bl fn_80473F50
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_fn_802041F0_000017B4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80204230(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80204230_00001ABC
    lis r5, lbl_8073E780@ha
    li r3, 0xc
    addi r5, r5, lbl_8073E780@l
    li r4, 0x4
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80204230_00001820
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
lbl_fn_80204230_00001820:
    stw r3, 0x1c(r29)
    li r30, 0x0
    stw r30, 0x8(r1)
    stw r30, 0xc(r1)
    stw r30, 0x10(r1)
    lwz r3, 0x18(r29)
    bl fn_8047059C
    mr r31, r3
    lwz r3, 0x18(r29)
    bl fn_80470580
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_8008A00C
    lwz r31, 0x1c(r29)
    stw r30, 0x0(r31)
    stw r30, 0x4(r31)
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80204230_00001884
    beq lbl_fn_80204230_0000187C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80204230_0000187C:
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_fn_80204230_00001884:
    lwz r30, 0x8(r1)
    cmpwi r30, 0x0
    beq lbl_fn_80204230_000018CC
    mulli r3, r30, 0x2c
    li r4, 0x0
    la r5, lbl_8087D6E0
    la r6, lbl_8087D6DC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8000FAE4@ha
    mr r7, r30
    addi r4, r4, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    mr r29, r3
    b lbl_fn_80204230_000018D0
lbl_fn_80204230_000018CC:
    li r29, 0x0
lbl_fn_80204230_000018D0:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80204230_00001A20
    lwz r0, 0x0(r31)
    mr r4, r30
    cmplw r30, r0
    ble lbl_fn_80204230_000018F0
    mr r4, r0
lbl_fn_80204230_000018F0:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_80204230_00001A0C
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_80204230_000019B4
lbl_fn_80204230_00001908:
    lwz r0, 0x8(r31)
    add r5, r29, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r29, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    add r5, r29, r3
    lwz r0, 0x8(r31)
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r29, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_80204230_00001908
    andi. r4, r4, 0x1
    beq lbl_fn_80204230_00001A0C
lbl_fn_80204230_000019B4:
    mtctr r4
lbl_fn_80204230_000019B8:
    lwz r0, 0x8(r31)
    add r5, r29, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r29, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_80204230_000019B8
lbl_fn_80204230_00001A0C:
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80204230_00001A20
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80204230_00001A20:
    stw r29, 0x8(r31)
    li r5, 0x0
    li r3, 0x0
    stw r30, 0x0(r31)
    stw r30, 0x4(r31)
    b lbl_fn_80204230_00001A90
lbl_fn_80204230_00001A38:
    lwz r4, 0x10(r1)
    addi r5, r5, 0x1
    lwz r0, 0x8(r31)
    add r6, r4, r3
    add r4, r0, r3
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
lbl_fn_80204230_00001A90:
    lwz r0, 0x0(r31)
    cmplw r5, r0
    blt lbl_fn_80204230_00001A38
    addic. r0, r1, 0x8
    beq lbl_fn_80204230_00001ABC
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80204230_00001ABC
    beq lbl_fn_80204230_00001ABC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80204230_00001ABC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
