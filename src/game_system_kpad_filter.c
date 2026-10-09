#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_80016FB4(void);
extern void fn_8003EA3C(void);
extern void fn_800697D8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CFA28(void);
extern void fn_800CFBA0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800F0D14(void);
extern void fn_801058F8(void);
extern void fn_8010ABF4(void);
extern void fn_8010AC60(void);
extern void fn_80124BE4(void);
extern void fn_8012D8B8(void);
extern void fn_80133B30(void);
extern void fn_801346C8(void);
extern void fn_801546F4(void);
extern void fn_80164DCC(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_801750FC(void);
extern void fn_80178A6C(void);
extern void fn_801E97DC(void);
extern void fn_801FECE0(void);
extern void fn_802085E0(void);
extern void fn_8021771C(void);
extern void fn_80219074(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8021CF08(void);
extern void fn_802328DC(void);
extern void fn_8023A60C(void);
extern void fn_80370320(void);
extern void fn_80371790(void);
extern void fn_803731E8(void);
extern void fn_80378CAC(void);
extern void fn_80378CCC(void);
extern void fn_8037D49C(void);
extern void fn_80389838(void);
extern void fn_803903E0(void);
extern void fn_803CDAE4(void);
extern void fn_803CDB64(void);
extern void fn_803CDB68(void);
extern void fn_803CDC48(void);
extern void fn_803E0D84(void);
extern void fn_803E4950(void);
extern void fn_80449ABC(void);
extern void fn_8044D028(void);
extern void fn_80450B28(void);
extern void fn_80450B44(void);
extern void fn_804A2F98(void);
extern void fn_804A2FBC(void);
extern void fn_80570A50(void);
extern void fn_8059C330(void);
extern void fn_8059D17C(void);
extern void fn_8059D26C(void);
extern void fn_805AA4E8(void);
extern void fn_805ADC04(void);
extern void fn_805ADC14(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_8078A2CC[];
extern u8 lbl_8074DA2C[];
extern u8 lbl_8074DAF8[];
extern u8 lbl_8074DB70[];
extern u8 lbl_8074DC1C[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F040;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F448;
extern u32 lbl_8087F480;
extern u32 lbl_8087F488;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F8;
extern u32 lbl_80885708;
extern u32 lbl_8088570C;
extern u32 lbl_8088571C;
extern u32 lbl_808857C8;
extern u32 lbl_808857F0;

/* Function declarations */
void fn_80373F78(void);
void fn_80373FC4(void);
void fn_803743AC(void);
void fn_80374710(void);
void fn_803748E0(void);
void fn_80374964(void);
void fn_80374D64(void);
void fn_803750E4(void);
void fn_80375184(void);
void fn_80375194(void);
void fn_80375254(void);
void fn_8037529C(void);
void fn_803752F4(void);
void fn_803754C4(void);
void fn_803754F0(void);
void fn_8037587C(void);

asm void fn_80373F78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x5590(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80373F78_00000038
    mr r3, r0
    bl fn_80570A50
    cmpwi r3, 0x0
    beq lbl_fn_80373F78_00000038
    mr r3, r31
    bl fn_803731E8
lbl_fn_80373F78_00000038:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80373FC4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    li r5, 0xe
    li r4, 0x2
    li r0, 0x1
    stw r5, 0x54e4(r3)
    mr r31, r3
    stw r4, 0x55b8(r3)
    stw r0, 0x10ac(r3)
    addi r3, r3, 0xd18
    bl fn_80378CAC
    lwz r3, lbl_8087F048
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F8A8
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F8A0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087EE68
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x10d8(r31)
    bl fn_800D246C
    lwz r3, lbl_8087F4A0
    li r4, 0x1
    bl fn_800D246C
    bl fn_80450B28
    lwz r3, lbl_8087F488
    li r4, 0x1
    lfs f0, lbl_8088570C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r5, 0xb08(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb0c(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb10(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb14(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb24(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb24(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb28(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb28(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb2c(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb2c(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb30(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb30(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb34(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r3, 0xb34(r3)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087F3C0
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x5
    bl fn_8023A60C
    lwz r3, lbl_8087F580
    bl fn_804A2F98
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    li r5, 0x1
    li r6, 0x2
    li r7, 0xa
    bl fn_800CFA28
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_80373FC4_00000218
    lfs f3, 0x94(r3)
    li r4, 0xa
    lfs f0, lbl_8088571C
    fmuls f1, f0, f3
    bl fn_8037D49C
lbl_fn_80373FC4_00000218:
    lwz r3, lbl_8087EFA8
    li r8, 0x1
    addi r11, r1, 0x2c
    addi r10, r1, 0x3c
    stw r8, 0x240(r3)
    addi r9, r1, 0x4c
    addi r5, r1, 0x5c
    addi r28, r31, 0x55c8
    lwz r25, lbl_8087EFA8
    addi r29, r31, 0x55d8
    addi r30, r31, 0x55e8
    addi r12, r31, 0x55f8
    psq_l f1, 0x328(r25), 0, 0
    addi r27, r1, 0x18
    psq_l f2, 0x330(r25), 0, 0
    addi r26, r1, 0xc
    psq_st f1, 0x0(r11), 0, 0
    addi r3, r31, 0x6c
    psq_l f1, 0x338(r25), 0, 0
    li r4, 0x6
    psq_st f2, 0x8(r11), 0, 0
    psq_l f2, 0x340(r25), 0, 0
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x348(r25), 0, 0
    psq_st f2, 0x8(r10), 0, 0
    psq_l f2, 0x350(r25), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    lwz r7, 0x324(r25)
    psq_st f2, 0x8(r9), 0, 0
    psq_l f1, 0x358(r25), 0, 0
    psq_l f2, 0x360(r25), 0, 0
    lwz r6, 0x368(r25)
    lwz r0, 0x36c(r25)
    lfs f3, 0x370(r25)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stw r7, 0x55c4(r31)
    lfs f0, lbl_80885708
    psq_st f1, 0x0(r12), 0, 0
    psq_st f2, 0x8(r12), 0, 0
    stw r6, 0x5608(r31)
    stw r0, 0x560c(r31)
    stfs f3, 0x5610(r31)
    lwz r5, lbl_8087EFA8
    stw r6, 0x6c(r1)
    lfs f4, 0x3a4(r5)
    stfs f4, 0x55c0(r31)
    lwz r5, lbl_8087EFA8
    stw r7, 0x28(r1)
    stfs f0, 0x3a4(r5)
    lwz r6, lbl_8087F8A0
    stw r0, 0x70(r1)
    lwz r5, 0x48(r6)
    stfs f3, 0x74(r1)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x20(r1)
    psq_st f1, 0x0(r27), 0, 0
    lwz r5, 0x48(r6)
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x14(r1)
    stw r8, 0x950(r31)
    bl fn_80389838
    lfs f0, 0x10(r1)
    mr r4, r27
    addi r3, r31, 0x6c
    li r5, 0x1
    fneg f1, f0
    bl fn_803903E0
    li r3, 0x3c
    bl fn_802328DC
    lwz r3, lbl_8087F9E8
    bl fn_8059D17C
    li r3, 0x0
    bl fn_802328DC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    li r4, 0x1
    stw r0, 0xe8(r3)
    lwz r3, lbl_8087F3C0
    bl fn_800D246C
    lwz r0, 0x10ac(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80373FC4_000003B0
    lwz r3, lbl_8087F9F8
    bl fn_805AA4E8
lbl_fn_80373FC4_000003B0:
    lis r4, lbl_8074DC1C@ha
    lfs f1, lbl_80885708
    addi r4, r4, lbl_8074DC1C@l
    addi r3, r1, 0x8
    addi r4, r4, 0x1c9
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    li r4, 0x8
    li r5, 0x1
    li r6, 0x2
    lwz r3, 0x263c(r3)
    li r7, 0xf
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x2640(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EFE8
    bl fn_800CFBA0
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_803743AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r31, 0x54e4(r3)
    addi r3, r3, 0xd18
    bl fn_80378CCC
    stw r31, 0x55b8(r30)
    li r4, 0x0
    stw r31, 0x55bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800D246C
    lwz r3, lbl_8087F8A8
    li r4, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F8A0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087EE68
    li r4, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x10d8(r30)
    bl fn_800D246C
    lwz r3, lbl_8087F4A0
    li r4, 0x0
    bl fn_800D246C
    bl fn_80450B44
    lwz r4, lbl_8087F488
    lis r3, lbl_8074DC1C@ha
    addi r3, r3, lbl_8074DC1C@l
    lfs f0, lbl_8088570C
    lwz r0, 0x38(r4)
    addi r3, r3, 0x15d
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r31, lbl_8087F490
    lwz r4, 0xb08(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb08(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb0c(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb0c(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb10(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb10(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb14(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb14(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb18(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb18(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb1c(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb1c(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb1c(r31)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885708
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r3, 0xb20(r31)
    lfs f0, lbl_8088570C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb20(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb24(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb24(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb28(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb28(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb2c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb2c(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb30(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb30(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb34(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb34(r31)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087F490
    bl fn_803E4950
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    li r5, 0x0
    li r6, 0x2
    li r7, 0x1e
    bl fn_800CFA28
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803743AC_0000067C
    lfs f1, 0xe0(r3)
    li r4, 0x1e
    bl fn_8037D49C
lbl_fn_803743AC_0000067C:
    lwz r3, lbl_8087F9E8
    li r4, 0x1
    bl fn_8059D26C
    lwz r3, lbl_8087F580
    bl fn_804A2FBC
    lwz r3, lbl_8087F048
    bl fn_801058F8
    lwz r4, lbl_8087EFA8
    li r0, 0x0
    addi r3, r30, 0x55c8
    addi r8, r30, 0x55d8
    stw r0, 0x240(r4)
    addi r9, r30, 0x55e8
    addi r10, r30, 0x55f8
    li r4, 0x8
    lwz r11, lbl_8087EFA8
    li r5, 0x0
    lwz r0, 0x55c4(r30)
    li r6, 0x2
    stw r0, 0x324(r11)
    li r7, 0xf
    psq_l f2, 0x8(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x328(r11), 0, 0
    psq_st f2, 0x330(r11), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x338(r11), 0, 0
    psq_st f2, 0x340(r11), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x348(r11), 0, 0
    psq_st f2, 0x350(r11), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    psq_st f1, 0x358(r11), 0, 0
    psq_st f2, 0x360(r11), 0, 0
    lwz r0, 0x5608(r30)
    stw r0, 0x368(r11)
    lwz r0, 0x560c(r30)
    stw r0, 0x36c(r11)
    lfs f0, 0x5610(r30)
    stfs f0, 0x370(r11)
    lwz r3, lbl_8087EFA8
    lfs f0, 0x55c0(r30)
    stfs f0, 0x3a4(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x2640(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EFE8
    bl fn_800CFBA0
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_80124BE4
    lwz r3, lbl_8087F0A8
    li r0, 0x1
    stb r0, 0x4a7(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80374710(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    li r4, 0x6
    stw r29, 0x24(r1)
    mr r29, r3
    addi r3, r3, 0x6c
    lwz r5, lbl_8087F8A0
    lwz r31, 0x48(r5)
    bl fn_80389838
    psq_l f1, 0x528(r31), 0, 0
    addi r3, r1, 0x8
    lfs f2, 0x530(r31)
    cmpwi r30, 0x0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x538(r31)
    fneg f1, f0
    ble lbl_fn_80374710_00000878
    lwz r6, 0x10d8(r29)
    cmpwi r6, 0x0
    beq lbl_fn_80374710_00000844
    lwz r0, 0x78(r6)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80374710_0000083C
lbl_fn_80374710_00000814:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r5
    cmpw r30, r0
    bne lbl_fn_80374710_00000830
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_80374710_00000848
lbl_fn_80374710_00000830:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80374710_00000814
lbl_fn_80374710_0000083C:
    li r3, 0x0
    b lbl_fn_80374710_00000848
lbl_fn_80374710_00000844:
    li r3, 0x0
lbl_fn_80374710_00000848:
    cmpwi r3, 0x0
    beq lbl_fn_80374710_0000086C
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0xc(r3)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x14(r3)
    fneg f1, f0
lbl_fn_80374710_0000086C:
    li r0, 0x0
    stw r0, 0x950(r29)
    b lbl_fn_80374710_00000880
lbl_fn_80374710_00000878:
    li r0, 0x1
    stw r0, 0x950(r29)
lbl_fn_80374710_00000880:
    addi r3, r29, 0x6c
    addi r4, r1, 0x8
    li r5, 0x1
    bl fn_803903E0
    lwz r4, 0x10d8(r29)
    li r0, 0x0
    stw r0, 0x954(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80374710_000008A8
    lwz r0, 0x64(r4)
lbl_fn_80374710_000008A8:
    cmpwi r0, 0x0
    beq lbl_fn_80374710_00000920
    cmpwi r4, 0x0
    beq lbl_fn_80374710_000008C0
    lwz r3, 0x64(r4)
    b lbl_fn_80374710_000008C4
lbl_fn_80374710_000008C0:
    li r3, 0x0
lbl_fn_80374710_000008C4:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80374710_00000920
    cmpwi r4, 0x0
    beq lbl_fn_80374710_000008E0
    lwz r3, 0x64(r4)
    b lbl_fn_80374710_000008E4
lbl_fn_80374710_000008E0:
    li r3, 0x0
lbl_fn_80374710_000008E4:
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xb
    bne lbl_fn_80374710_00000920
    cmpwi r4, 0x0
    beq lbl_fn_80374710_00000900
    lwz r3, 0x64(r4)
    b lbl_fn_80374710_00000904
lbl_fn_80374710_00000900:
    li r3, 0x0
lbl_fn_80374710_00000904:
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80374710_00000920
    cmpwi r30, 0x1773
    bne lbl_fn_80374710_00000920
    li r0, 0x1
    stw r0, 0x954(r29)
lbl_fn_80374710_00000920:
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x10
    stw r0, 0x54c(r31)
    lwz r3, lbl_8087F048
    lwz r0, 0x561c(r29)
    addis r3, r3, 0x3
    stw r0, 0x67b0(r3)
    lwz r3, lbl_8087F480
    cmpwi r3, 0x0
    beq lbl_fn_80374710_0000094C
    bl fn_803CDAE4
lbl_fn_80374710_0000094C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803748E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x870(r3)
    addi r3, r3, 0x6c
    bl fn_80389838
    li r0, 0x0
    stw r0, 0x954(r30)
    cmpwi r31, 0x0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
    lwz r3, lbl_8087F048
    lwz r0, 0x5618(r30)
    addis r3, r3, 0x3
    stw r0, 0x67b0(r3)
    beq lbl_fn_803748E0_000009D4
    lwz r3, lbl_8087F480
    cmpwi r3, 0x0
    beq lbl_fn_803748E0_000009D4
    bl fn_803CDB64
lbl_fn_803748E0_000009D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80374964(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x5638(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_80374964_00000A20
    cmpwi r4, 0x0
    beq lbl_fn_80374964_00000DCC
lbl_fn_80374964_00000A20:
    cmpwi r0, 0x0
    beq lbl_fn_80374964_00000A34
    cmpwi r4, 0x0
    beq lbl_fn_80374964_00000A34
    b lbl_fn_80374964_00000DCC
lbl_fn_80374964_00000A34:
    cmpwi r4, 0x0
    stw r4, 0x5638(r3)
    bne lbl_fn_80374964_00000B08
    lwz r0, 0x10f8(r3)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80374964_00000A58
    li r0, 0x0
    stw r0, 0x10f4(r3)
lbl_fn_80374964_00000A58:
    li r0, 0x0
    stw r0, 0x5644(r3)
    lfs f31, lbl_808857F0
    stw r0, 0x5640(r3)
    lwz r3, lbl_8087F8A0
    lwz r28, 0x48(r3)
    mr r27, r28
    b lbl_fn_80374964_00000ACC
lbl_fn_80374964_00000A78:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80374964_00000AC8
    lwz r0, 0x54c(r27)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80374964_00000AC8
    lwz r0, 0xc54(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80374964_00000AC8
    psq_l f1, 0x528(r28), 0, 0
    addi r5, r1, 0x8
    lfs f2, 0x530(r28)
    mr r3, r27
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f31
    lwz r4, 0x5640(r31)
    bl fn_801546F4
lbl_fn_80374964_00000AC8:
    lwz r27, 0x14ac(r27)
lbl_fn_80374964_00000ACC:
    cmpwi r27, 0x0
    bne lbl_fn_80374964_00000A78
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80374964_00000AE4
    bl fn_8010ABF4
lbl_fn_80374964_00000AE4:
    lwz r3, lbl_8087F480
    cmpwi r3, 0x0
    beq lbl_fn_80374964_00000AF4
    bl fn_803CDB68
lbl_fn_80374964_00000AF4:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80374964_00000DCC
    bl fn_805ADC04
    b lbl_fn_80374964_00000DCC
lbl_fn_80374964_00000B08:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x280(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80374964_00000B28
    lwz r3, lbl_8087F4F0
    li r4, 0x0
    li r5, -0x1
    bl fn_80449ABC
lbl_fn_80374964_00000B28:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80374964_00000B38
    bl fn_8010AC60
lbl_fn_80374964_00000B38:
    lwz r0, 0x5638(r31)
    cmpwi r0, 0x1
    beq lbl_fn_80374964_00000B4C
    cmpwi r0, 0x3
    bne lbl_fn_80374964_00000B68
lbl_fn_80374964_00000B4C:
    lwz r3, lbl_8087F040
    li r4, 0x0
    bl fn_800F0D14
    lwz r3, lbl_8087F480
    cmpwi r3, 0x0
    beq lbl_fn_80374964_00000B68
    bl fn_803CDC48
lbl_fn_80374964_00000B68:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80374964_00000B78
    bl fn_805ADC14
lbl_fn_80374964_00000B78:
    lwz r0, 0x5638(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80374964_00000B8C
    mr r3, r31
    bl fn_80374D64
lbl_fn_80374964_00000B8C:
    lwz r3, lbl_8087F8A0
    lwz r27, 0x48(r3)
    b lbl_fn_80374964_00000BCC
lbl_fn_80374964_00000B98:
    mr r3, r27
    bl fn_8016DA4C
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_80374964_00000BC8
    lwz r3, 0xf80(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80374964_00000BC8
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
lbl_fn_80374964_00000BC8:
    lwz r27, 0x14ac(r27)
lbl_fn_80374964_00000BCC:
    cmpwi r27, 0x0
    bne lbl_fn_80374964_00000B98
    lwz r0, 0x5638(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80374964_00000BEC
    mr r3, r31
    bl fn_80371790
    b lbl_fn_80374964_00000BF4
lbl_fn_80374964_00000BEC:
    lwz r3, lbl_8087F4F0
    bl fn_8044D028
lbl_fn_80374964_00000BF4:
    lwz r3, 0x10d8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80374964_00000C0C
    lwz r4, 0x64(r3)
    cmpwi r4, 0x0
    bne lbl_fn_80374964_00000C14
lbl_fn_80374964_00000C0C:
    li r3, 0x0
    b lbl_fn_80374964_00000C34
lbl_fn_80374964_00000C14:
    lwz r0, 0x10f4(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80374964_00000C34
    lwz r0, 0x48(r4)
    cmpwi r0, 0x1
    beq lbl_fn_80374964_00000C34
    li r3, 0x1
lbl_fn_80374964_00000C34:
    cmpwi r3, 0x0
    beq lbl_fn_80374964_00000C50
    lwz r0, 0x10f8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80374964_00000C50
    li r0, 0x1
    stw r0, 0x10f4(r31)
lbl_fn_80374964_00000C50:
    lwz r3, lbl_8087F8A0
    li r27, 0x0
    lfs f31, lbl_8088570C
    li r28, -0x1
    lwz r31, 0x48(r3)
    lis r29, lbl_807C6B90@ha
    li r30, 0x1
    b lbl_fn_80374964_00000DA0
lbl_fn_80374964_00000C70:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x3dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80374964_00000C8C
    mr r3, r31
    li r4, 0x1
    bl fn_80164DCC
lbl_fn_80374964_00000C8C:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80374964_00000CF0
    li r3, 0x2711
    bl fn_80219E6C
    lwz r0, 0x34(r1)
    mr r4, r3
    stw r27, 0x18(r1)
    mr r5, r31
    clrlwi r0, r0, 4
    mr r6, r31
    stw r27, 0x1c(r1)
    addi r3, r1, 0x18
    addi r8, r29, lbl_807C6B90@l
    li r7, 0x0
    stw r27, 0x20(r1)
    li r9, 0x0
    li r10, 0x0
    stw r27, 0x24(r1)
    stw r27, 0x28(r1)
    stw r28, 0x2c(r1)
    stw r0, 0x34(r1)
    stw r28, 0x30(r1)
    bl fn_8003EA3C
lbl_fn_80374964_00000CF0:
    addi r3, r31, 0x7d4
    li r4, 0x0
    bl fn_80133B30
    addi r3, r31, 0x7d4
    bl fn_8012D8B8
    lwz r0, 0x954(r31)
    mr r3, r31
    stw r0, 0x9f8(r31)
    stfs f31, 0xac8(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_80178A6C
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_80374964_00000D50
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80374964_00000D50:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80374964_00000D70
    lwz r0, 0x560(r31)
    cmpwi r0, 0xf
    bne lbl_fn_80374964_00000D70
    lwz r3, 0xf80(r31)
    stb r30, 0x4e(r3)
lbl_fn_80374964_00000D70:
    mr r3, r31
    bl fn_801750FC
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80374964_00000D9C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x21
    bne lbl_fn_80374964_00000D9C
    lwz r4, 0x564(r31)
    mr r3, r31
    bl fn_8016E970
lbl_fn_80374964_00000D9C:
    lwz r31, 0x14ac(r31)
lbl_fn_80374964_00000DA0:
    cmpwi r31, 0x0
    bne lbl_fn_80374964_00000C70
    lwz r3, lbl_8087F9E8
    li r4, 0x0
    bl fn_8059C330
    lwz r3, lbl_8087EE68
    bl fn_80016FB4
    lwz r3, lbl_8087F120
    bl fn_801E97DC
    lwz r3, lbl_8087F490
    bl fn_803E0D84
lbl_fn_80374964_00000DCC:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80374D64(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r26, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_00001158
    lwz r3, lbl_8087F8A0
    lis r31, jumptable_8078A2CC@ha
    lwz r28, 0x48(r3)
    b lbl_fn_80374D64_00001150
lbl_fn_80374D64_00000E20:
    mr r3, r28
    bl fn_80219074
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80374D64_0000114C
    lwz r3, 0x50(r28)
    bl fn_80219558
    mr r30, r3
    li r27, 0x0
    li r25, 0x0
lbl_fn_80374D64_00000E48:
    add r3, r29, r27
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80374D64_000010E0
    mr r4, r27
    addi r3, r28, 0x7d4
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_80374D64_000010E0
    cmplwi r27, 0x2e
    bgt lbl_fn_80374D64_00000FF8
    addi r3, r31, jumptable_8078A2CC@l
    lwzx r3, r3, r25
    mtctr r3
    bctr
    lwz r0, 0x1370(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0xa3
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
    lwz r0, 0x1374(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0xa4
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
    lwz r0, 0x13dc(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0xbe
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
    lwz r0, 0x1468(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0xe1
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
    lwz r0, 0x1358(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0x9d
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
    lwz r0, 0x1458(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0xdd
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
    lwz r0, 0x145c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0xde
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
    lwz r0, 0x146c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0xe2
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
    lwz r0, 0x1594(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0x12c
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
    cmpwi r30, 0x5
    bne lbl_fn_80374D64_00000FF8
    lwz r0, 0x1598(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0x12d
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
lbl_fn_80374D64_00000FF8:
    cmpwi r27, 0x39
    bne lbl_fn_80374D64_00001024
    lwz r0, 0x159c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0x12e
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
lbl_fn_80374D64_00001024:
    cmpwi r27, 0x17
    bne lbl_fn_80374D64_00001050
    lwz r0, 0x15a0(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0x12f
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
lbl_fn_80374D64_00001050:
    cmpwi r27, 0x32
    bne lbl_fn_80374D64_0000107C
    lwz r0, 0x15a4(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0x130
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
lbl_fn_80374D64_0000107C:
    cmpwi r27, 0x1a
    bne lbl_fn_80374D64_000010B0
    cmpwi r30, 0x1
    bne lbl_fn_80374D64_000010B0
    lwz r0, 0x15a8(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0x131
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_000010E0
lbl_fn_80374D64_000010B0:
    cmpwi r27, 0x3e
    beq lbl_fn_80374D64_000010C0
    cmpwi r27, 0x3f
    bne lbl_fn_80374D64_000010E0
lbl_fn_80374D64_000010C0:
    lwz r0, 0x161c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_000010E0
    mr r3, r26
    li r4, 0x14e
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_80374D64_000010E0:
    addi r27, r27, 0x1
    addi r25, r25, 0x4
    cmpwi r27, 0x80
    blt lbl_fn_80374D64_00000E48
    lbz r0, 0x87(r29)
    extsb. r0, r0
    ble lbl_fn_80374D64_0000114C
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_0000112C
    lwz r0, 0x1380(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_0000114C
    mr r3, r26
    li r4, 0xa7
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80374D64_0000114C
lbl_fn_80374D64_0000112C:
    lwz r0, 0x1470(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80374D64_0000114C
    mr r3, r26
    li r4, 0xe3
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_80374D64_0000114C:
    lwz r28, 0x14ac(r28)
lbl_fn_80374D64_00001150:
    cmpwi r28, 0x0
    bne lbl_fn_80374D64_00000E20
lbl_fn_80374D64_00001158:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803750E4(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    cmplwi r4, 0xfff
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r4
    stw r30, 0x108(r1)
    mr r30, r3
    ble lbl_fn_803750E4_000011CC
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_803750E4_000011C4
    lis r4, lbl_8074DC1C@ha
    mr r5, r31
    addi r4, r4, lbl_8074DC1C@l
    addi r3, r1, 0x8
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_803750E4_000011C4:
    li r0, 0x0
    b lbl_fn_803750E4_000011D8
lbl_fn_803750E4_000011CC:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r0, 0x10e4(r3)
lbl_fn_803750E4_000011D8:
    cmpwi r0, 0x0
    bne lbl_fn_803750E4_000011F4
    mr r3, r30
    mr r4, r31
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_803750E4_000011F4:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80375184(void)
{
    nofralloc
    lwz r0, 0x5638(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80375194(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f1
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    stw r4, 0x5644(r3)
    stw r5, 0x5640(r3)
    lwz r3, lbl_8087F8A0
    lwz r31, 0x48(r3)
    mr r30, r31
    b lbl_fn_80375194_000012B0
lbl_fn_80375194_0000125C:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80375194_000012AC
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80375194_000012AC
    lwz r0, 0xc54(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80375194_000012AC
    psq_l f1, 0x528(r31), 0, 0
    addi r5, r1, 0x8
    lfs f2, 0x530(r31)
    mr r3, r30
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f31
    lwz r4, 0x5640(r29)
    bl fn_801546F4
lbl_fn_80375194_000012AC:
    lwz r30, 0x14ac(r30)
lbl_fn_80375194_000012B0:
    cmpwi r30, 0x0
    bne lbl_fn_80375194_0000125C
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80375254(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x5644(r3)
    lwz r4, 0x5640(r31)
    bl fn_8021CF08
    cmpwi r3, 0x0
    bne lbl_fn_80375254_00001310
    lwz r4, 0x5640(r31)
    li r3, 0x0
    bl fn_8021CF08
lbl_fn_80375254_00001310:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037529C(void)
{
    nofralloc
    lwz r9, 0x5624(r3)
    li r10, 0x0
    li r0, 0x1
    lfs f0, lbl_808857C8
    stw r10, 0x4c(r9)
    lwz r9, 0x5624(r3)
    stw r4, 0x6c(r9)
    lwz r4, 0x5624(r3)
    stw r5, 0x70(r4)
    lwz r4, 0x5624(r3)
    stw r6, 0x58(r4)
    lwz r4, 0x5624(r3)
    stw r7, 0x5c(r4)
    lwz r4, 0x5624(r3)
    stw r8, 0x54(r4)
    lwz r4, 0x5624(r3)
    stw r0, 0x50(r4)
    lwz r4, 0x5624(r3)
    stfs f0, 0x74(r4)
    lwz r3, 0x5624(r3)
    stw r0, 0x48(r3)
    blr
}

asm void fn_803752F4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r4
    stw r28, 0x110(r1)
    mr r28, r3
    beq lbl_fn_803752F4_000013B8
    mr r3, r29
    bl strlen
    cmplwi r3, 0x5
    bge lbl_fn_803752F4_000013C0
lbl_fn_803752F4_000013B8:
    li r3, 0x1
    b lbl_fn_803752F4_0000152C
lbl_fn_803752F4_000013C0:
    lis r31, lbl_8074DC1C@ha
    mr r3, r29
    addi r31, r31, lbl_8074DC1C@l
    li r5, 0x2
    addi r4, r31, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803752F4_00001528
    addi r3, r29, 0x2
    bl fn_80684600
    mr r30, r3
    addi r4, r31, 0xc9
    mr r3, r29
    li r31, -0x1
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803752F4_00001438
    addi r3, r29, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r31, r3, 0x64
    bne lbl_fn_803752F4_00001438
    mr r3, r29
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_803752F4_00001438
    addi r3, r29, 0x6
    bl fn_80684600
    add r31, r31, r3
lbl_fn_803752F4_00001438:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_803752F4_0000146C
lbl_fn_803752F4_00001448:
    cmpw r31, r0
    bne lbl_fn_803752F4_00001464
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r31, r3, r0
    b lbl_fn_803752F4_0000147C
lbl_fn_803752F4_00001464:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_803752F4_0000146C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_803752F4_00001448
    li r31, 0x0
lbl_fn_803752F4_0000147C:
    cmpwi r31, 0x0
    bne lbl_fn_803752F4_000014C0
    mr r4, r30
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_803752F4_00001528
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803752F4_00001528
    lwz r5, 0x10d0(r28)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r3, r4, r3
    b lbl_fn_803752F4_0000152C
lbl_fn_803752F4_000014C0:
    lwz r5, 0x4(r31)
    cmplwi r5, 0xfff
    ble lbl_fn_803752F4_00001504
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_803752F4_000014FC
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_803752F4_000014FC:
    li r5, 0x0
    b lbl_fn_803752F4_00001510
lbl_fn_803752F4_00001504:
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r5, 0x10e4(r3)
lbl_fn_803752F4_00001510:
    lwz r0, 0x8(r31)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r3, r4, r3
    b lbl_fn_803752F4_0000152C
lbl_fn_803752F4_00001528:
    li r3, 0x1
lbl_fn_803752F4_0000152C:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803754C4(void)
{
    nofralloc
    lwz r3, 0x567c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803754C4_00001570
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803754C4_00001570
    li r3, 0x1
    blr
lbl_fn_803754C4_00001570:
    li r3, 0x0
    blr
}

asm void fn_803754F0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stmw r24, 0x110(r1)
    mr r27, r3
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803754F0_000018EC
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803754F0_000015AC
    lwz r0, 0x64(r4)
    b lbl_fn_803754F0_000015B0
lbl_fn_803754F0_000015AC:
    li r0, 0x0
lbl_fn_803754F0_000015B0:
    cmpwi r0, 0x0
    beq lbl_fn_803754F0_000018EC
    cmpwi r4, 0x0
    beq lbl_fn_803754F0_000015C8
    lwz r3, 0x64(r4)
    b lbl_fn_803754F0_000015CC
lbl_fn_803754F0_000015C8:
    li r3, 0x0
lbl_fn_803754F0_000015CC:
    cmpwi r4, 0x0
    lwz r29, 0x48(r3)
    beq lbl_fn_803754F0_000015E0
    lwz r3, 0x64(r4)
    b lbl_fn_803754F0_000015E4
lbl_fn_803754F0_000015E0:
    li r3, 0x0
lbl_fn_803754F0_000015E4:
    cmpwi r4, 0x0
    lwz r28, 0x4c(r3)
    beq lbl_fn_803754F0_000015F8
    lwz r3, 0x64(r4)
    b lbl_fn_803754F0_000015FC
lbl_fn_803754F0_000015F8:
    li r3, 0x0
lbl_fn_803754F0_000015FC:
    lwz r24, 0x50(r3)
    mr r3, r29
    mr r4, r28
    li r30, 0x0
    mr r5, r24
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803754F0_000018C4
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803754F0_000018C4
    mr r3, r29
    mr r4, r28
    mr r5, r24
    li r30, 0x0
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_803754F0_0000182C
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803754F0_0000182C
    lwz r25, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r24, -0x1
    mr r3, r25
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803754F0_000016B0
    addi r3, r25, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r24, r3, 0x64
    bne lbl_fn_803754F0_000016B0
    mr r3, r25
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_803754F0_000016B0
    addi r3, r25, 0x6
    bl fn_80684600
    add r24, r24, r3
lbl_fn_803754F0_000016B0:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_803754F0_000016D0
lbl_fn_803754F0_000016BC:
    cmpw r24, r0
    bne lbl_fn_803754F0_000016CC
    li r0, 0x1
    b lbl_fn_803754F0_000016E0
lbl_fn_803754F0_000016CC:
    addi r3, r3, 0x4
lbl_fn_803754F0_000016D0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_803754F0_000016BC
    li r0, 0x0
lbl_fn_803754F0_000016E0:
    cmpwi r0, 0x0
    beq lbl_fn_803754F0_0000182C
    lwz r24, 0x0(r26)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r25, -0x1
    mr r3, r24
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803754F0_00001740
    addi r3, r24, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r25, r3, 0x64
    bne lbl_fn_803754F0_00001740
    mr r3, r24
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_803754F0_00001740
    addi r3, r24, 0x6
    bl fn_80684600
    add r25, r25, r3
lbl_fn_803754F0_00001740:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_803754F0_00001774
lbl_fn_803754F0_00001750:
    cmpw r25, r0
    bne lbl_fn_803754F0_0000176C
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r24, r3, r0
    b lbl_fn_803754F0_00001784
lbl_fn_803754F0_0000176C:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_803754F0_00001774:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_803754F0_00001750
    li r24, 0x0
lbl_fn_803754F0_00001784:
    cmpwi r24, 0x0
    bne lbl_fn_803754F0_000017C8
    lwz r4, 0x48(r26)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_803754F0_0000182C
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803754F0_0000182C
    lwz r5, 0x10d0(r27)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
    b lbl_fn_803754F0_0000182C
lbl_fn_803754F0_000017C8:
    lwz r5, 0x4(r24)
    cmplwi r5, 0xfff
    ble lbl_fn_803754F0_0000180C
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_803754F0_00001804
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_803754F0_00001804:
    li r5, 0x0
    b lbl_fn_803754F0_00001818
lbl_fn_803754F0_0000180C:
    slwi r0, r5, 2
    add r3, r27, r0
    lwz r5, 0x10e4(r3)
lbl_fn_803754F0_00001818:
    lwz r0, 0x8(r24)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
lbl_fn_803754F0_0000182C:
    cmpwi r30, 0x0
    beq lbl_fn_803754F0_000018C4
    lwz r27, 0x0(r31)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r26, -0x1
    mr r3, r27
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803754F0_0000188C
    addi r3, r27, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r26, r3, 0x64
    bne lbl_fn_803754F0_0000188C
    mr r3, r27
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_803754F0_0000188C
    addi r3, r27, 0x6
    bl fn_80684600
    add r26, r26, r3
lbl_fn_803754F0_0000188C:
    lis r3, lbl_8074DB70@ha
    addi r3, r3, lbl_8074DB70@l
    b lbl_fn_803754F0_000018AC
lbl_fn_803754F0_00001898:
    cmpw r26, r0
    bne lbl_fn_803754F0_000018A8
    li r0, 0x1
    b lbl_fn_803754F0_000018BC
lbl_fn_803754F0_000018A8:
    addi r3, r3, 0x4
lbl_fn_803754F0_000018AC:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_803754F0_00001898
    li r0, 0x0
lbl_fn_803754F0_000018BC:
    cntlzw r0, r0
    srwi r30, r0, 5
lbl_fn_803754F0_000018C4:
    cmpwi r30, 0x0
    beq lbl_fn_803754F0_000018EC
    cmpwi r29, 0x2
    bne lbl_fn_803754F0_000018E4
    cmpwi r28, 0x9
    bne lbl_fn_803754F0_000018E4
    li r3, 0x0
    b lbl_fn_803754F0_000018F0
lbl_fn_803754F0_000018E4:
    li r3, 0x1
    b lbl_fn_803754F0_000018F0
lbl_fn_803754F0_000018EC:
    li r3, 0x0
lbl_fn_803754F0_000018F0:
    lmw r24, 0x110(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8037587C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stmw r26, 0x108(r1)
    mr r28, r4
    mr r27, r5
    mr r26, r6
    mr r29, r3
    mr r3, r28
    mr r4, r27
    mr r5, r26
    li r30, 0x0
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8037587C_00001BE8
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8037587C_00001BE8
    mr r3, r28
    mr r4, r27
    mr r5, r26
    li r30, 0x0
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8037587C_00001B50
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8037587C_00001B50
    lwz r27, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r26, -0x1
    mr r3, r27
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8037587C_000019D4
    addi r3, r27, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r26, r3, 0x64
    bne lbl_fn_8037587C_000019D4
    mr r3, r27
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_8037587C_000019D4
    addi r3, r27, 0x6
    bl fn_80684600
    add r26, r26, r3
lbl_fn_8037587C_000019D4:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_8037587C_000019F4
lbl_fn_8037587C_000019E0:
    cmpw r26, r0
    bne lbl_fn_8037587C_000019F0
    li r0, 0x1
    b lbl_fn_8037587C_00001A04
lbl_fn_8037587C_000019F0:
    addi r3, r3, 0x4
lbl_fn_8037587C_000019F4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8037587C_000019E0
    li r0, 0x0
lbl_fn_8037587C_00001A04:
    cmpwi r0, 0x0
    beq lbl_fn_8037587C_00001B50
    lwz r26, 0x0(r28)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r27, -0x1
    mr r3, r26
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8037587C_00001A64
    addi r3, r26, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r27, r3, 0x64
    bne lbl_fn_8037587C_00001A64
    mr r3, r26
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_8037587C_00001A64
    addi r3, r26, 0x6
    bl fn_80684600
    add r27, r27, r3
lbl_fn_8037587C_00001A64:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_8037587C_00001A98
lbl_fn_8037587C_00001A74:
    cmpw r27, r0
    bne lbl_fn_8037587C_00001A90
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r26, r3, r0
    b lbl_fn_8037587C_00001AA8
lbl_fn_8037587C_00001A90:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_8037587C_00001A98:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_8037587C_00001A74
    li r26, 0x0
lbl_fn_8037587C_00001AA8:
    cmpwi r26, 0x0
    bne lbl_fn_8037587C_00001AEC
    lwz r4, 0x48(r28)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_8037587C_00001B50
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8037587C_00001B50
    lwz r5, 0x10d0(r29)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
    b lbl_fn_8037587C_00001B50
lbl_fn_8037587C_00001AEC:
    lwz r5, 0x4(r26)
    cmplwi r5, 0xfff
    ble lbl_fn_8037587C_00001B30
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_8037587C_00001B28
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_8037587C_00001B28:
    li r5, 0x0
    b lbl_fn_8037587C_00001B3C
lbl_fn_8037587C_00001B30:
    slwi r0, r5, 2
    add r3, r29, r0
    lwz r5, 0x10e4(r3)
lbl_fn_8037587C_00001B3C:
    lwz r0, 0x8(r26)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
lbl_fn_8037587C_00001B50:
    cmpwi r30, 0x0
    beq lbl_fn_8037587C_00001BE8
    lwz r26, 0x0(r31)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r27, -0x1
    mr r3, r26
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8037587C_00001BB0
    addi r3, r26, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r27, r3, 0x64
    bne lbl_fn_8037587C_00001BB0
    mr r3, r26
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_8037587C_00001BB0
    addi r3, r26, 0x6
    bl fn_80684600
    add r27, r27, r3
lbl_fn_8037587C_00001BB0:
    lis r3, lbl_8074DB70@ha
    addi r3, r3, lbl_8074DB70@l
    b lbl_fn_8037587C_00001BD0
lbl_fn_8037587C_00001BBC:
    cmpw r27, r0
    bne lbl_fn_8037587C_00001BCC
    li r0, 0x1
    b lbl_fn_8037587C_00001BE0
lbl_fn_8037587C_00001BCC:
    addi r3, r3, 0x4
lbl_fn_8037587C_00001BD0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8037587C_00001BBC
    li r0, 0x0
lbl_fn_8037587C_00001BE0:
    cntlzw r0, r0
    srwi r30, r0, 5
lbl_fn_8037587C_00001BE8:
    mr r3, r30
    lmw r26, 0x108(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
