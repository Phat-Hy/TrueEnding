#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8000D430(void);
extern void fn_8000DD0C(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_800928B0(void);
extern void fn_800929C0(void);
extern void fn_80094958(void);
extern void fn_80097A9C(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D40(void);
extern void fn_800D1E9C(void);
extern void fn_800DC6B4(void);
extern void fn_8011E81C(void);
extern void fn_80129930(void);
extern void fn_80129954(void);
extern void fn_80129A48(void);
extern void fn_8012ABD0(void);
extern void fn_8012ABF4(void);
extern void fn_8012AC18(void);
extern void fn_8012AC40(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_8016E5F0(void);
extern void fn_80176DFC(void);
extern void fn_802096A8(void);
extern void fn_80473F18(void);
extern void fn_804768D0(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8072F890[];
extern u8 lbl_8072F898[];
extern u8 lbl_8072F8A0[];
extern u8 lbl_8072F924[];
extern u8 lbl_80775A88[];
extern u8 lbl_80775AA4[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_80880668;
extern u32 lbl_8088066C;
extern u32 lbl_80880670;
extern u32 lbl_80880678;
extern u32 lbl_80880680;
extern u32 lbl_80880684;
extern u32 lbl_80880688;
extern u32 lbl_8088068C;
extern u32 lbl_80880690;
extern u32 lbl_80880694;
extern u32 lbl_80880698;

/* Function declarations */
void fn_8001011C(void);
void fn_80010374(void);
void fn_8001047C(void);
void fn_80010490(void);
void fn_800109E0(void);
void fn_80010B68(void);
void fn_80011034(void);
void fn_80011220(void);
void fn_8001122C(void);
void fn_800112E0(void);
void fn_80011410(void);
void fn_80011420(void);
void fn_80011964(void);
void fn_800119B8(void);
void fn_800119C0(void);
void fn_80011E98(void);
void fn_80012054(void);
void fn_800121F0(void);
void fn_80012294(void);
void fn_80012540(void);
void fn_8001256C(void);
void fn_800125C8(void);
void fn_8001260C(void);
void fn_80012638(void);
void fn_8001268C(void);
void fn_80012714(void);
void fn_8001271C(void);
void fn_80012774(void);
void fn_800127CC(void);
void fn_8001282C(void);
void fn_800128FC(void);
void fn_80012934(void);
void fn_8001296C(void);
void fn_80012A14(void);
void fn_80012A1C(void);
void fn_80012AC4(void);
void fn_80012C3C(void);
void fn_80012C88(void);
void fn_80012CBC(void);
void fn_80012CE4(void);
void fn_80012D0C(void);
void fn_80012D34(void);
void fn_800132EC(void);
void fn_80013338(void);
void fn_8001336C(void);
void fn_800133B0(void);
void fn_80013404(void);
void fn_80013410(void);
void fn_80013444(void);
void fn_80013484(void);
void fn_800134B8(void);
void fn_800134E0(void);
void fn_80013508(void);
void fn_80013530(void);
void fn_80013558(void);
void fn_80013CAC(void);
void fn_80013CB0(void);
void fn_80013D08(void);

asm void fn_8001011C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8001011C_00000058
    cmpwi r0, 0x1
    beq lbl_fn_8001011C_00000058
    cmpwi r0, 0x2
    beq lbl_fn_8001011C_00000074
    cmpwi r0, 0x3
    beq lbl_fn_8001011C_0000008C
    cmpwi r0, 0x4
    beq lbl_fn_8001011C_00000214
    b lbl_fn_8001011C_00000230
lbl_fn_8001011C_00000058:
    lwz r3, 0x1c(r3)
    psq_l f1, 0x0(r4), 0, 0
    lwz r3, 0x48(r3)
    lfs f2, 0x8(r4)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    b lbl_fn_8001011C_00000230
lbl_fn_8001011C_00000074:
    lwz r3, 0x1c(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x6c(r3), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x74(r3)
    b lbl_fn_8001011C_00000230
lbl_fn_8001011C_0000008C:
    lwz r6, 0x1c(r3)
    addi r5, r1, 0x50
    lfs f0, 0x0(r4)
    addi r3, r1, 0x14
    lwz r31, 0x48(r6)
    lfs f7, 0x4(r4)
    psq_l f2, 0x10(r31), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_l f3, 0x18(r31), 0, 0
    stfs f0, 0x5c(r1)
    psq_l f4, 0x20(r31), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_l f5, 0x28(r31), 0, 0
    stfs f7, 0x6c(r1)
    psq_l f6, 0x30(r31), 0, 0
    psq_l f1, 0x8(r31), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    lfs f0, 0x8(r4)
    stfs f0, 0x7c(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_st f2, 0x10(r31), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f3, 0x18(r31), 0, 0
    lfs f9, 0x78(r1)
    psq_st f4, 0x20(r31), 0, 0
    lfs f8, 0x68(r1)
    psq_st f5, 0x28(r31), 0, 0
    lfs f7, 0x58(r1)
    psq_st f6, 0x30(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    stfs f7, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f9, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x74(r1)
    fmr f30, f1
    lfs f7, 0x64(r1)
    addi r3, r1, 0x20
    lfs f0, 0x54(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x70(r1)
    fmr f31, f1
    lfs f7, 0x60(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x50(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_8001011C_0000018C
    b lbl_fn_8001011C_00000190
lbl_fn_8001011C_0000018C:
    fmr f7, f0
lbl_fn_8001011C_00000190:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8001011C_000001A0
    b lbl_fn_8001011C_000001B8
lbl_fn_8001011C_000001A0:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8001011C_000001B4
    b lbl_fn_8001011C_000001B8
lbl_fn_8001011C_000001B4:
    fmr f8, f0
lbl_fn_8001011C_000001B8:
    stfs f8, 0x54(r31)
    li r0, 0x0
    addi r4, r1, 0x38
    stw r0, 0x38(r1)
    lwz r3, 0x1c(r30)
    lwz r3, 0x48(r3)
    bl fn_8000D430
    addic. r3, r1, 0x38
    beq lbl_fn_8001011C_00000230
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8001011C_00000230
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8001011C_00000208
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8001011C_00000208:
    li r0, 0x0
    stw r0, 0x38(r1)
    b lbl_fn_8001011C_00000230
lbl_fn_8001011C_00000214:
    lwz r3, 0x1c(r3)
    lfs f0, 0x0(r4)
    stfs f0, 0x24(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x44(r3)
lbl_fn_8001011C_00000230:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80010374(void)
{
    nofralloc
    lwz r0, 0x20(r4)
    cmpwi r0, 0x6
    beq lbl_fn_80010374_00000290
    cmpwi r0, 0x7
    beq lbl_fn_80010374_000002AC
    cmpwi r0, 0x1
    beq lbl_fn_80010374_000002AC
    cmpwi r0, 0x2
    beq lbl_fn_80010374_000002D0
    cmpwi r0, 0x3
    beq lbl_fn_80010374_000002F0
    cmpwi r0, 0x4
    beq lbl_fn_80010374_0000031C
    b lbl_fn_80010374_00000344
lbl_fn_80010374_00000290:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
lbl_fn_80010374_000002AC:
    lwz r5, 0x1c(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80010374_000002D0
    lwz r4, 0x48(r5)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
lbl_fn_80010374_000002D0:
    lwz r5, 0x1c(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80010374_000002F0
    psq_l f1, 0x6c(r5), 0, 0
    lfs f2, 0x74(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
lbl_fn_80010374_000002F0:
    lwz r5, 0x1c(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80010374_0000031C
    lwz r4, 0x48(r5)
    lfs f0, 0x34(r4)
    lfs f3, 0x24(r4)
    lfs f4, 0x14(r4)
    stfs f4, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
lbl_fn_80010374_0000031C:
    lwz r4, 0x1c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80010374_00000344
    lfs f4, 0x44(r4)
    lfs f3, 0x34(r4)
    lfs f0, 0x24(r4)
    stfs f0, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f4, 0x8(r3)
    blr
lbl_fn_80010374_00000344:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_8001047C(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_80010490(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    stfd f31, 0x330(r1)
    psq_st f31, 0x338(r1), 0, 0
    stfd f30, 0x320(r1)
    psq_st f30, 0x328(r1), 0, 0
    stw r31, 0x31c(r1)
    stw r30, 0x318(r1)
    stw r29, 0x314(r1)
    mr r29, r4
    stw r28, 0x310(r1)
    mr r28, r3
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80010490_000003D8
    cmpwi r0, 0x1
    beq lbl_fn_80010490_000003D8
    cmpwi r0, 0x2
    beq lbl_fn_80010490_000003F4
    cmpwi r0, 0x3
    beq lbl_fn_80010490_0000040C
    cmpwi r0, 0x4
    beq lbl_fn_80010490_000006D8
    b lbl_fn_80010490_00000894
lbl_fn_80010490_000003D8:
    lwz r3, 0x1c(r3)
    psq_l f1, 0x0(r4), 0, 0
    lwz r3, 0x48(r3)
    lfs f2, 0x8(r4)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    b lbl_fn_80010490_00000894
lbl_fn_80010490_000003F4:
    lwz r3, 0x1c(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x80(r3)
    b lbl_fn_80010490_00000894
lbl_fn_80010490_0000040C:
    lfs f7, lbl_80880668
    addi r31, r1, 0x2d8
    lfs f1, 0x8(r4)
    lfs f0, lbl_8088066C
    fcmpu cr0, f7, f1
    stfs f7, 0x304(r1)
    stfs f7, 0x2fc(r1)
    stfs f7, 0x2f8(r1)
    stfs f7, 0x2f4(r1)
    stfs f7, 0x2f0(r1)
    stfs f7, 0x2e8(r1)
    stfs f7, 0x2e4(r1)
    stfs f7, 0x2e0(r1)
    stfs f7, 0x2dc(r1)
    stfs f0, 0x300(r1)
    stfs f0, 0x2ec(r1)
    stfs f0, 0x2d8(r1)
    beq lbl_fn_80010490_000004A4
    addi r3, r1, 0x1e8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x1e8
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    addi r3, r1, 0x1b8
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
lbl_fn_80010490_000004A4:
    lfs f0, lbl_80880668
    lfs f1, 0x4(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80010490_00000504
    addi r3, r1, 0x248
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x248
    addi r5, r1, 0x218
    bl fn_805F89F0
    addi r3, r1, 0x218
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
lbl_fn_80010490_00000504:
    lfs f0, lbl_80880668
    lfs f1, 0x0(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80010490_00000564
    addi r3, r1, 0x2a8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x2a8
    addi r5, r1, 0x278
    bl fn_805F89F0
    addi r3, r1, 0x278
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
lbl_fn_80010490_00000564:
    lwz r6, 0x1c(r28)
    addi r4, r1, 0x2d8
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0x20
    lwz r5, 0x48(r6)
    psq_l f5, 0x20(r4), 0, 0
    lfs f0, 0x34(r5)
    lfs f7, 0x24(r5)
    lfs f8, 0x14(r5)
    stfs f8, 0x2e4(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x2f4(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f0, 0x304(r1)
    psq_l f4, 0x18(r4), 0, 0
    lwz r30, 0x48(r6)
    psq_l f6, 0x28(r4), 0, 0
    stfs f8, 0x44(r1)
    psq_st f1, 0x8(r30), 0, 0
    psq_st f2, 0x10(r30), 0, 0
    psq_st f3, 0x18(r30), 0, 0
    psq_st f4, 0x20(r30), 0, 0
    psq_st f5, 0x28(r30), 0, 0
    psq_st f6, 0x30(r30), 0, 0
    lfs f10, 0x300(r1)
    lfs f9, 0x2f0(r1)
    lfs f8, 0x2e0(r1)
    stfs f7, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f8, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f10, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x2fc(r1)
    fmr f30, f1
    lfs f7, 0x2ec(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x2dc(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    lfs f8, 0x2f8(r1)
    fmr f31, f1
    lfs f7, 0x2e8(r1)
    addi r3, r1, 0x38
    lfs f0, 0x2d8(r1)
    stfs f0, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x14(r1)
    frsp f0, f30
    stfs f31, 0x18(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x1c(r1)
    ble lbl_fn_80010490_00000650
    b lbl_fn_80010490_00000654
lbl_fn_80010490_00000650:
    fmr f7, f0
lbl_fn_80010490_00000654:
    lfs f8, 0x14(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80010490_00000664
    b lbl_fn_80010490_0000067C
lbl_fn_80010490_00000664:
    lfs f8, 0x18(r1)
    lfs f0, 0x1c(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80010490_00000678
    b lbl_fn_80010490_0000067C
lbl_fn_80010490_00000678:
    fmr f8, f0
lbl_fn_80010490_0000067C:
    stfs f8, 0x54(r30)
    li r0, 0x0
    addi r4, r1, 0x50
    stw r0, 0x50(r1)
    lwz r3, 0x1c(r28)
    lwz r3, 0x48(r3)
    bl fn_8000D430
    addic. r3, r1, 0x50
    beq lbl_fn_80010490_00000894
    lwz r4, 0x50(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80010490_00000894
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80010490_000006CC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80010490_000006CC:
    li r0, 0x0
    stw r0, 0x50(r1)
    b lbl_fn_80010490_00000894
lbl_fn_80010490_000006D8:
    lwz r31, 0x1c(r3)
    addi r30, r1, 0x68
    lfs f7, lbl_80880668
    lfs f1, 0x8(r4)
    lfs f8, 0x44(r31)
    lfs f9, 0x34(r31)
    fcmpu cr0, f7, f1
    lfs f10, 0x24(r31)
    lfs f0, lbl_8088066C
    stfs f10, 0x8(r1)
    stfs f9, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f7, 0x94(r1)
    stfs f7, 0x8c(r1)
    stfs f7, 0x88(r1)
    stfs f7, 0x84(r1)
    stfs f7, 0x80(r1)
    stfs f7, 0x78(r1)
    stfs f7, 0x74(r1)
    stfs f7, 0x70(r1)
    stfs f7, 0x6c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x68(r1)
    beq lbl_fn_80010490_0000078C
    addi r3, r1, 0x158
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x158
    addi r5, r1, 0x188
    bl fn_805F89F0
    addi r3, r1, 0x188
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80010490_0000078C:
    lfs f0, lbl_80880668
    lfs f1, 0x4(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80010490_000007EC
    addi r3, r1, 0xf8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xf8
    addi r5, r1, 0x128
    bl fn_805F89F0
    addi r3, r1, 0x128
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80010490_000007EC:
    lfs f0, lbl_80880668
    lfs f1, 0x0(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80010490_0000084C
    addi r3, r1, 0x98
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x98
    addi r5, r1, 0xc8
    bl fn_805F89F0
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80010490_0000084C:
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x18(r31), 0, 0
    lfs f8, 0x8(r1)
    psq_st f2, 0x20(r31), 0, 0
    lfs f7, 0xc(r1)
    psq_st f3, 0x28(r31), 0, 0
    lfs f0, 0x10(r1)
    psq_st f4, 0x30(r31), 0, 0
    psq_st f5, 0x38(r31), 0, 0
    psq_st f6, 0x40(r31), 0, 0
    stfs f8, 0x24(r31)
    stfs f7, 0x34(r31)
    stfs f0, 0x44(r31)
lbl_fn_80010490_00000894:
    lwz r0, 0x344(r1)
    psq_l f31, 0x338(r1), 0, 0
    lfd f31, 0x330(r1)
    psq_l f30, 0x328(r1), 0, 0
    lfd f30, 0x320(r1)
    lwz r31, 0x31c(r1)
    lwz r30, 0x318(r1)
    lwz r29, 0x314(r1)
    lwz r28, 0x310(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

asm void fn_800109E0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    lfs f7, lbl_80880668
    stw r0, 0x134(r1)
    lfs f1, 0x8(r4)
    stw r31, 0x12c(r1)
    mr r31, r4
    lfs f0, lbl_8088066C
    fcmpu cr0, f7, f1
    stw r30, 0x128(r1)
    mr r30, r3
    stfs f7, 0x2c(r3)
    stfs f7, 0x24(r3)
    stfs f7, 0x20(r3)
    stfs f7, 0x1c(r3)
    stfs f7, 0x18(r3)
    stfs f7, 0x10(r3)
    stfs f7, 0xc(r3)
    stfs f7, 0x8(r3)
    stfs f7, 0x4(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x0(r3)
    beq lbl_fn_800109E0_00000974
    addi r3, r1, 0xc8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc8
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_800109E0_00000974:
    lfs f0, lbl_80880668
    lfs f1, 0x4(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_800109E0_000009D4
    addi r3, r1, 0x68
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x68
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_800109E0_000009D4:
    lfs f0, lbl_80880668
    lfs f1, 0x0(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_800109E0_00000A34
    addi r3, r1, 0x8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_800109E0_00000A34:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80010B68(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    lwz r0, 0x20(r4)
    stfd f31, 0x1c0(r1)
    cmpwi r0, 0x6
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stw r31, 0x1ac(r1)
    stw r30, 0x1a8(r1)
    mr r30, r3
    beq lbl_fn_80010B68_00000AAC
    cmpwi r0, 0x7
    beq lbl_fn_80010B68_00000AC8
    cmpwi r0, 0x1
    beq lbl_fn_80010B68_00000AC8
    cmpwi r0, 0x2
    beq lbl_fn_80010B68_00000AEC
    cmpwi r0, 0x3
    beq lbl_fn_80010B68_00000B0C
    cmpwi r0, 0x4
    beq lbl_fn_80010B68_00000D08
    b lbl_fn_80010B68_00000ED8
lbl_fn_80010B68_00000AAC:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80010B68_00000EF0
lbl_fn_80010B68_00000AC8:
    lwz r4, 0x1c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80010B68_00000ED8
    lwz r4, 0x48(r4)
    psq_l f1, 0x534(r4), 0, 0
    lfs f2, 0x53c(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80010B68_00000EF0
lbl_fn_80010B68_00000AEC:
    lwz r4, 0x1c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80010B68_00000ED8
    psq_l f1, 0x78(r4), 0, 0
    lfs f2, 0x80(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80010B68_00000EF0
lbl_fn_80010B68_00000B0C:
    lwz r4, 0x1c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80010B68_00000ED8
    lwz r4, 0x48(r4)
    addi r3, r1, 0xa4
    lfs f0, lbl_80880680
    addi r31, r1, 0xb0
    lfs f2, 0x30(r4)
    lfs f4, 0x28(r4)
    stfs f4, 0xa4(r1)
    frsp f4, f2
    lfs f3, 0x2c(r4)
    stfs f3, 0xa8(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xac(r1)
    frsp f3, f3
    psq_st f1, 0x0(r31), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0xb8(r1)
    bge lbl_fn_80010B68_00000B84
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80880668
    fcmpo cr0, f3, f0
    ble lbl_fn_80010B68_00000B78
    lfs f0, lbl_80880684
    b lbl_fn_80010B68_00000B7C
lbl_fn_80010B68_00000B78:
    lfs f0, lbl_80880688
lbl_fn_80010B68_00000B7C:
    stfs f0, 0x9c(r1)
    b lbl_fn_80010B68_00000B98
lbl_fn_80010B68_00000B84:
    fmr f2, f4
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x9c(r1)
lbl_fn_80010B68_00000B98:
    lfs f0, 0x9c(r1)
    addi r3, r1, 0x130
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80880668
    addi r4, r1, 0x8c
    lfs f30, 0x138(r1)
    mr r5, r4
    lfs f31, 0x134(r1)
    addi r3, r1, 0x160
    lfs f13, 0x130(r1)
    lfs f12, 0x148(r1)
    lfs f11, 0x144(r1)
    lfs f10, 0x140(r1)
    lfs f9, 0x158(r1)
    lfs f8, 0x154(r1)
    lfs f7, 0x150(r1)
    lfs f6, 0x15c(r1)
    lfs f5, 0x14c(r1)
    lfs f4, 0x13c(r1)
    lfs f0, lbl_8088066C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x190(r1)
    stfs f3, 0x194(r1)
    stfs f3, 0x198(r1)
    stfs f0, 0x19c(r1)
    stfs f13, 0x5c(r1)
    stfs f31, 0x60(r1)
    stfs f30, 0x64(r1)
    stfs f13, 0x160(r1)
    stfs f31, 0x164(r1)
    stfs f30, 0x168(r1)
    stfs f10, 0x68(r1)
    stfs f11, 0x6c(r1)
    stfs f12, 0x70(r1)
    stfs f10, 0x170(r1)
    stfs f11, 0x174(r1)
    stfs f12, 0x178(r1)
    stfs f7, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f7, 0x180(r1)
    stfs f8, 0x184(r1)
    stfs f9, 0x188(r1)
    stfs f4, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f6, 0x88(r1)
    stfs f4, 0x16c(r1)
    stfs f5, 0x17c(r1)
    stfs f6, 0x18c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9750
    lfs f2, 0x94(r1)
    lfs f0, lbl_80880680
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80010B68_00000CB4
    lfs f3, 0x90(r1)
    lfs f0, lbl_80880668
    fcmpo cr0, f3, f0
    ble lbl_fn_80010B68_00000CA4
    lfs f0, lbl_80880684
    b lbl_fn_80010B68_00000CA8
lbl_fn_80010B68_00000CA4:
    lfs f0, lbl_80880688
lbl_fn_80010B68_00000CA8:
    fneg f0, f0
    stfs f0, 0x98(r1)
    b lbl_fn_80010B68_00000CC8
lbl_fn_80010B68_00000CB4:
    lfs f1, 0x90(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x98(r1)
lbl_fn_80010B68_00000CC8:
    addi r3, r1, 0x98
    lfs f2, lbl_80880668
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f4, f2
    lfs f3, 0xb4(r1)
    lfs f0, 0xb0(r1)
    fneg f3, f3
    stfs f2, 0xa0(r1)
    fneg f5, f0
    fneg f0, f4
    stfs f2, 0xb8(r1)
    stfs f5, 0x0(r30)
    stfs f3, 0x4(r30)
    stfs f0, 0x8(r30)
    b lbl_fn_80010B68_00000EF0
lbl_fn_80010B68_00000D08:
    lwz r5, 0x1c(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80010B68_00000ED8
    lfs f2, 0x40(r5)
    addi r4, r1, 0x8
    lfs f4, 0x3c(r5)
    frsp f3, f2
    lfs f0, 0x38(r5)
    stfs f4, 0xc(r1)
    fabs f4, f3
    stfs f0, 0x8(r1)
    lfs f0, lbl_80880680
    psq_l f1, 0x0(r4), 0, 0
    frsp f4, f4
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    fcmpo cr0, f4, f0
    stfs f2, 0x8(r3)
    bge lbl_fn_80010B68_00000D78
    lfs f3, 0x0(r3)
    lfs f0, lbl_80880668
    fcmpo cr0, f3, f0
    ble lbl_fn_80010B68_00000D6C
    lfs f0, lbl_80880684
    b lbl_fn_80010B68_00000D70
lbl_fn_80010B68_00000D6C:
    lfs f0, lbl_80880688
lbl_fn_80010B68_00000D70:
    stfs f0, 0x18(r1)
    b lbl_fn_80010B68_00000D8C
lbl_fn_80010B68_00000D78:
    fmr f2, f3
    lfs f1, 0x0(r3)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x18(r1)
lbl_fn_80010B68_00000D8C:
    lfs f0, 0x18(r1)
    addi r3, r1, 0x100
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80880668
    addi r4, r1, 0x20
    lfs f4, 0x108(r1)
    mr r5, r4
    lfs f5, 0x104(r1)
    addi r3, r1, 0xc0
    lfs f6, 0x100(r1)
    lfs f7, 0x118(r1)
    lfs f8, 0x114(r1)
    lfs f9, 0x110(r1)
    lfs f10, 0x128(r1)
    lfs f11, 0x124(r1)
    lfs f12, 0x120(r1)
    lfs f13, 0x12c(r1)
    lfs f30, 0x11c(r1)
    lfs f31, 0x10c(r1)
    lfs f0, lbl_8088066C
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f6, 0xc0(r1)
    stfs f5, 0xc4(r1)
    stfs f4, 0xc8(r1)
    stfs f9, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f7, 0xd8(r1)
    stfs f12, 0xe0(r1)
    stfs f11, 0xe4(r1)
    stfs f10, 0xe8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xdc(r1)
    stfs f13, 0xec(r1)
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    stfs f6, 0x50(r1)
    stfs f5, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f9, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f12, 0x38(r1)
    stfs f11, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f31, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f13, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F9750
    lfs f2, 0x28(r1)
    lfs f0, lbl_80880680
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80010B68_00000EA8
    lfs f3, 0x24(r1)
    lfs f0, lbl_80880668
    fcmpo cr0, f3, f0
    ble lbl_fn_80010B68_00000E98
    lfs f0, lbl_80880684
    b lbl_fn_80010B68_00000E9C
lbl_fn_80010B68_00000E98:
    lfs f0, lbl_80880688
lbl_fn_80010B68_00000E9C:
    fneg f0, f0
    stfs f0, 0x14(r1)
    b lbl_fn_80010B68_00000EBC
lbl_fn_80010B68_00000EA8:
    lfs f1, 0x24(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x14(r1)
lbl_fn_80010B68_00000EBC:
    addi r3, r1, 0x14
    lfs f2, lbl_80880668
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    b lbl_fn_80010B68_00000EF0
lbl_fn_80010B68_00000ED8:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80010B68_00000EF0:
    lwz r0, 0x1d4(r1)
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    lwz r31, 0x1ac(r1)
    lwz r30, 0x1a8(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_80011034(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    lfs f2, 0x8(r4)
    stw r0, 0xf4(r1)
    fabs f3, f2
    lfs f0, lbl_80880680
    stfd f31, 0xe0(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f31, 0xe8(r1), 0, 0
    frsp f3, f3
    stfd f30, 0xd0(r1)
    fcmpo cr0, f3, f0
    psq_st f30, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    bge lbl_fn_80011034_00000F84
    lfs f3, 0x0(r3)
    lfs f0, lbl_80880668
    fcmpo cr0, f3, f0
    ble lbl_fn_80011034_00000F78
    lfs f0, lbl_80880684
    b lbl_fn_80011034_00000F7C
lbl_fn_80011034_00000F78:
    lfs f0, lbl_80880688
lbl_fn_80011034_00000F7C:
    stfs f0, 0xc(r1)
    b lbl_fn_80011034_00000F98
lbl_fn_80011034_00000F84:
    frsp f2, f2
    lfs f1, 0x0(r3)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_80011034_00000F98:
    lfs f0, 0xc(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80880668
    addi r4, r1, 0x14
    lfs f4, 0x98(r1)
    mr r5, r4
    lfs f5, 0x94(r1)
    addi r3, r1, 0x50
    lfs f6, 0x90(r1)
    lfs f7, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f9, 0xa0(r1)
    lfs f10, 0xb8(r1)
    lfs f11, 0xb4(r1)
    lfs f12, 0xb0(r1)
    lfs f13, 0xbc(r1)
    lfs f31, 0xac(r1)
    lfs f30, 0x9c(r1)
    lfs f0, lbl_8088066C
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f3, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0x50(r1)
    stfs f5, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f9, 0x60(r1)
    stfs f8, 0x64(r1)
    stfs f7, 0x68(r1)
    stfs f12, 0x70(r1)
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f30, 0x5c(r1)
    stfs f31, 0x6c(r1)
    stfs f13, 0x7c(r1)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f13, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80880680
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80011034_000010B4
    lfs f3, 0x18(r1)
    lfs f0, lbl_80880668
    fcmpo cr0, f3, f0
    ble lbl_fn_80011034_000010A4
    lfs f0, lbl_80880684
    b lbl_fn_80011034_000010A8
lbl_fn_80011034_000010A4:
    lfs f0, lbl_80880688
lbl_fn_80011034_000010A8:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_80011034_000010C8
lbl_fn_80011034_000010B4:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_80011034_000010C8:
    addi r3, r1, 0x8
    lfs f2, lbl_80880668
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r0, 0xf4(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80011220(void)
{
    nofralloc
    fabs f0, f1
    frsp f1, f0
    blr
}

asm void fn_8001122C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8001122C_00001144
    cmpwi r0, 0x1
    beq lbl_fn_8001122C_00001144
    cmpwi r0, 0x2
    beq lbl_fn_8001122C_000011BC
    cmpwi r0, 0x3
    beq lbl_fn_8001122C_000011AC
    cmpwi r0, 0x4
    beq lbl_fn_8001122C_000011BC
    b lbl_fn_8001122C_000011BC
lbl_fn_8001122C_00001144:
    psq_l f2, 0x8(r7), 0, 0
    addi r8, r1, 0x8
    psq_l f3, 0x10(r7), 0, 0
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lwz r7, 0x1c(r3)
    psq_st f1, 0x0(r8), 0, 0
    psq_st f1, 0x58(r7), 0, 0
    psq_st f2, 0x60(r7), 0, 0
    psq_st f3, 0x68(r7), 0, 0
    psq_st f4, 0x70(r7), 0, 0
    psq_st f5, 0x78(r7), 0, 0
    psq_st f6, 0x80(r7), 0, 0
    lwz r3, 0x1c(r3)
    psq_st f2, 0x8(r8), 0, 0
    stw r4, 0x54(r3)
    stb r5, 0xb8(r3)
    psq_st f3, 0x10(r8), 0, 0
    psq_st f4, 0x18(r8), 0, 0
    psq_st f5, 0x20(r8), 0, 0
    psq_st f6, 0x28(r8), 0, 0
    stb r6, 0xb9(r3)
    b lbl_fn_8001122C_000011BC
    b lbl_fn_8001122C_000011BC
lbl_fn_8001122C_000011AC:
    lwz r3, 0x1c(r3)
    stw r4, 0x54(r3)
    stb r5, 0xb8(r3)
    stb r6, 0xb9(r3)
lbl_fn_8001122C_000011BC:
    addi r1, r1, 0x40
    blr
}

asm void fn_800112E0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    lwz r0, 0x20(r4)
    stw r31, 0x6c(r1)
    mr r31, r3
    cmpwi r0, 0x7
    beq lbl_fn_800112E0_00001208
    cmpwi r0, 0x1
    beq lbl_fn_800112E0_00001208
    cmpwi r0, 0x2
    beq lbl_fn_800112E0_00001248
    cmpwi r0, 0x3
    beq lbl_fn_800112E0_00001284
    cmpwi r0, 0x4
    beq lbl_fn_800112E0_000012A8
    b lbl_fn_800112E0_000012C8
lbl_fn_800112E0_00001208:
    lwz r5, 0x1c(r4)
    li r4, 0x79
    lfs f3, lbl_80880668
    lwz r5, 0x48(r5)
    lfs f0, lbl_8088066C
    stfs f3, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f0, 0x8(r3)
    addi r3, r1, 0x38
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x38
    bl fn_805F93C0
    b lbl_fn_800112E0_000012E0
lbl_fn_800112E0_00001248:
    lfs f3, lbl_80880668
    lfs f0, lbl_8088066C
    lwz r5, 0x1c(r4)
    li r4, 0x79
    stfs f3, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f0, 0x8(r3)
    addi r3, r1, 0x8
    lfs f1, 0x7c(r5)
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_805F93C0
    b lbl_fn_800112E0_000012E0
lbl_fn_800112E0_00001284:
    lwz r4, 0x1c(r4)
    lwz r4, 0x48(r4)
    lfs f0, 0x30(r4)
    lfs f3, 0x2c(r4)
    lfs f4, 0x28(r4)
    stfs f4, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_fn_800112E0_000012E0
lbl_fn_800112E0_000012A8:
    lwz r4, 0x1c(r4)
    lfs f4, 0x40(r4)
    lfs f3, 0x3c(r4)
    lfs f0, 0x38(r4)
    stfs f0, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f4, 0x8(r3)
    b lbl_fn_800112E0_000012E0
lbl_fn_800112E0_000012C8:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_800112E0_000012E0:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80011410(void)
{
    nofralloc
    mr r5, r3
    mr r3, r4
    mr r4, r5
    b fn_805F93C0
}

asm void fn_80011420(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    lfs f2, lbl_80880668
    stw r0, 0x344(r1)
    addi r4, r1, 0x50
    stfd f31, 0x330(r1)
    psq_st f31, 0x338(r1), 0, 0
    stfd f30, 0x320(r1)
    psq_st f30, 0x328(r1), 0, 0
    stw r31, 0x31c(r1)
    mr r31, r3
    stw r30, 0x318(r1)
    lwz r0, 0x20(r3)
    stfs f2, 0x50(r1)
    cmpwi r0, 0x7
    stfs f2, 0x58(r1)
    stfs f1, 0x54(r1)
    beq lbl_fn_80011420_00001370
    cmpwi r0, 0x1
    beq lbl_fn_80011420_00001370
    cmpwi r0, 0x2
    beq lbl_fn_80011420_0000138C
    cmpwi r0, 0x3
    beq lbl_fn_80011420_000013A0
    cmpwi r0, 0x4
    beq lbl_fn_80011420_00001668
    b lbl_fn_80011420_00001820
lbl_fn_80011420_00001370:
    lwz r3, 0x1c(r3)
    psq_l f1, 0x0(r4), 0, 0
    lwz r3, 0x48(r3)
    lfs f2, 0x58(r1)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    b lbl_fn_80011420_00001820
lbl_fn_80011420_0000138C:
    lwz r3, 0x1c(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    b lbl_fn_80011420_00001820
lbl_fn_80011420_000013A0:
    lfs f0, lbl_8088066C
    fcmpu cr0, f2, f2
    stfs f2, 0x9c(r1)
    addi r30, r1, 0x70
    stfs f2, 0x94(r1)
    stfs f2, 0x90(r1)
    stfs f2, 0x8c(r1)
    stfs f2, 0x88(r1)
    stfs f2, 0x80(r1)
    stfs f2, 0x7c(r1)
    stfs f2, 0x78(r1)
    stfs f2, 0x74(r1)
    stfs f0, 0x98(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x70(r1)
    beq lbl_fn_80011420_00001434
    fmr f1, f2
    addi r3, r1, 0x160
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x160
    addi r5, r1, 0x190
    bl fn_805F89F0
    addi r3, r1, 0x190
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80011420_00001434:
    lfs f0, lbl_80880668
    lfs f1, 0x54(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80011420_00001494
    addi r3, r1, 0x100
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x100
    addi r5, r1, 0x130
    bl fn_805F89F0
    addi r3, r1, 0x130
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80011420_00001494:
    lfs f0, lbl_80880668
    lfs f1, 0x50(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80011420_000014F4
    addi r3, r1, 0xa0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xa0
    addi r5, r1, 0xd0
    bl fn_805F89F0
    addi r3, r1, 0xd0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80011420_000014F4:
    lwz r6, 0x1c(r31)
    addi r4, r1, 0x70
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0x2c
    lwz r5, 0x48(r6)
    psq_l f5, 0x20(r4), 0, 0
    lfs f10, 0x34(r5)
    lfs f9, 0x24(r5)
    lfs f0, 0x14(r5)
    stfs f0, 0x7c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x8c(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f10, 0x9c(r1)
    psq_l f4, 0x18(r4), 0, 0
    lwz r30, 0x48(r6)
    psq_l f6, 0x28(r4), 0, 0
    stfs f0, 0x8(r1)
    psq_st f1, 0x8(r30), 0, 0
    psq_st f2, 0x10(r30), 0, 0
    psq_st f3, 0x18(r30), 0, 0
    psq_st f4, 0x20(r30), 0, 0
    psq_st f5, 0x28(r30), 0, 0
    psq_st f6, 0x30(r30), 0, 0
    lfs f0, 0x98(r1)
    lfs f7, 0x88(r1)
    lfs f8, 0x78(r1)
    stfs f9, 0xc(r1)
    stfs f10, 0x10(r1)
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F9940
    lfs f0, 0x94(r1)
    fmr f30, f1
    lfs f7, 0x84(r1)
    addi r3, r1, 0x20
    lfs f8, 0x74(r1)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x90(r1)
    fmr f31, f1
    lfs f7, 0x80(r1)
    addi r3, r1, 0x14
    lfs f8, 0x70(r1)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x38(r1)
    frsp f0, f30
    stfs f31, 0x3c(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x40(r1)
    ble lbl_fn_80011420_000015E0
    b lbl_fn_80011420_000015E4
lbl_fn_80011420_000015E0:
    fmr f7, f0
lbl_fn_80011420_000015E4:
    lfs f8, 0x38(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80011420_000015F4
    b lbl_fn_80011420_0000160C
lbl_fn_80011420_000015F4:
    lfs f8, 0x3c(r1)
    lfs f0, 0x40(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80011420_00001608
    b lbl_fn_80011420_0000160C
lbl_fn_80011420_00001608:
    fmr f8, f0
lbl_fn_80011420_0000160C:
    stfs f8, 0x54(r30)
    li r0, 0x0
    addi r4, r1, 0x5c
    stw r0, 0x5c(r1)
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    bl fn_8000D430
    addic. r3, r1, 0x5c
    beq lbl_fn_80011420_00001820
    lwz r4, 0x5c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80011420_00001820
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80011420_0000165C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80011420_0000165C:
    li r0, 0x0
    stw r0, 0x5c(r1)
    b lbl_fn_80011420_00001820
lbl_fn_80011420_00001668:
    lwz r30, 0x1c(r3)
    fcmpu cr0, f2, f2
    lfs f0, lbl_8088066C
    addi r31, r1, 0x2e0
    lfs f9, 0x44(r30)
    lfs f8, 0x34(r30)
    lfs f7, 0x24(r30)
    stfs f7, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f2, 0x30c(r1)
    stfs f2, 0x304(r1)
    stfs f2, 0x300(r1)
    stfs f2, 0x2fc(r1)
    stfs f2, 0x2f8(r1)
    stfs f2, 0x2f0(r1)
    stfs f2, 0x2ec(r1)
    stfs f2, 0x2e8(r1)
    stfs f2, 0x2e4(r1)
    stfs f0, 0x308(r1)
    stfs f0, 0x2f4(r1)
    stfs f0, 0x2e0(r1)
    beq lbl_fn_80011420_00001718
    fmr f1, f2
    addi r3, r1, 0x1f0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x1f0
    addi r5, r1, 0x1c0
    bl fn_805F89F0
    addi r3, r1, 0x1c0
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
lbl_fn_80011420_00001718:
    lfs f0, lbl_80880668
    lfs f1, 0x54(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80011420_00001778
    addi r3, r1, 0x250
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x250
    addi r5, r1, 0x220
    bl fn_805F89F0
    addi r3, r1, 0x220
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
lbl_fn_80011420_00001778:
    lfs f0, lbl_80880668
    lfs f1, 0x50(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80011420_000017D8
    addi r3, r1, 0x2b0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x2b0
    addi r5, r1, 0x280
    bl fn_805F89F0
    addi r3, r1, 0x280
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
lbl_fn_80011420_000017D8:
    psq_l f2, 0x8(r31), 0, 0
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x18(r30), 0, 0
    lfs f8, 0x44(r1)
    psq_st f2, 0x20(r30), 0, 0
    lfs f7, 0x48(r1)
    psq_st f3, 0x28(r30), 0, 0
    lfs f0, 0x4c(r1)
    psq_st f4, 0x30(r30), 0, 0
    psq_st f5, 0x38(r30), 0, 0
    psq_st f6, 0x40(r30), 0, 0
    stfs f8, 0x24(r30)
    stfs f7, 0x34(r30)
    stfs f0, 0x44(r30)
lbl_fn_80011420_00001820:
    lwz r0, 0x344(r1)
    psq_l f31, 0x338(r1), 0, 0
    lfd f31, 0x330(r1)
    psq_l f30, 0x328(r1), 0, 0
    lfd f30, 0x320(r1)
    lwz r31, 0x31c(r1)
    lwz r30, 0x318(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

asm void fn_80011964(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80011964_00001870
    cmpwi r0, 0x7
    beq lbl_fn_80011964_00001878
    cmpwi r0, 0x1
    beq lbl_fn_80011964_00001878
    cmpwi r0, 0x2
    beq lbl_fn_80011964_00001888
    b lbl_fn_80011964_00001894
lbl_fn_80011964_00001870:
    lfs f1, lbl_80880668
    blr
lbl_fn_80011964_00001878:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    lfs f1, 0x538(r3)
    blr
lbl_fn_80011964_00001888:
    lwz r3, 0x1c(r3)
    lfs f1, 0x7c(r3)
    blr
lbl_fn_80011964_00001894:
    lfs f1, lbl_80880668
    blr
}

asm void fn_800119B8(void)
{
    nofralloc
    li r3, 0x8
    blr
}

asm void fn_800119C0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_24
    mfcr r0
    stw r0, 0x1c(r1)
    lwz r0, 0x20(r3)
    fmr f30, f1
    fmr f31, f2
    mr r24, r3
    cmpwi cr4, r0, 0x7
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r31, r9
    mr r30, r10
    beq cr4, lbl_fn_800119C0_00001920
    cmpwi cr7, r0, 0x2
    beq cr7, lbl_fn_800119C0_00001A84
    cmpwi cr6, r0, 0x1
    beq cr6, lbl_fn_800119C0_00001920
    cmpwi cr1, r0, 0x3
    beq cr1, lbl_fn_800119C0_00001BE0
    b lbl_fn_800119C0_00001D4C
lbl_fn_800119C0_00001920:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800119C0_00001938
    lwz r3, 0x48(r3)
    addi r24, r3, 0xb0
    b lbl_fn_800119C0_0000193C
lbl_fn_800119C0_00001938:
    li r24, 0x0
lbl_fn_800119C0_0000193C:
    subi r0, r5, 0xef
    cmplwi r0, 0x4f
    bgt lbl_fn_800119C0_00001998
    lwz r0, 0xc8(r8)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800119C0_0000197C
lbl_fn_800119C0_0000195C:
    lwz r0, 0xc4(r8)
    add r4, r0, r3
    lwz r0, 0x14(r4)
    cmpw r5, r0
    bne lbl_fn_800119C0_00001974
    b lbl_fn_800119C0_00001980
lbl_fn_800119C0_00001974:
    addi r3, r3, 0x1c
    bdnz lbl_fn_800119C0_0000195C
lbl_fn_800119C0_0000197C:
    li r4, 0x0
lbl_fn_800119C0_00001980:
    cmpwi r4, 0x0
    beq lbl_fn_800119C0_00001D4C
    lwz r5, 0x18(r4)
    mr r3, r24
    mr r4, r26
    bl fn_80097A9C
lbl_fn_800119C0_00001998:
    cmpwi r25, 0x0
    beq lbl_fn_800119C0_000019BC
    cmpwi r25, 0x1
    beq lbl_fn_800119C0_000019F8
    cmpwi r25, 0x2
    beq lbl_fn_800119C0_000019EC
    cmpwi r25, 0x3
    beq lbl_fn_800119C0_000019F4
    b lbl_fn_800119C0_000019F8
lbl_fn_800119C0_000019BC:
    mr r3, r24
    mr r4, r26
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_800119C0_000019F8
    bl fn_804768D0
    cmpwi r3, 0x4
    bne lbl_fn_800119C0_000019F8
    li r31, 0x4
    b lbl_fn_800119C0_000019F8
    b lbl_fn_800119C0_000019F8
    b lbl_fn_800119C0_000019F8
lbl_fn_800119C0_000019EC:
    li r31, 0x3
    b lbl_fn_800119C0_000019F8
lbl_fn_800119C0_000019F4:
    li r31, 0x4
lbl_fn_800119C0_000019F8:
    mulli r25, r31, 0x30
    li r0, 0x1
    stw r0, 0x34c(r24)
    mr r3, r24
    lfs f0, lbl_8088066C
    mr r4, r31
    add r5, r24, r25
    lfs f1, lbl_80880668
    stfs f0, 0x24c(r5)
    mr r5, r26
    lfs f2, lbl_80880678
    mr r6, r27
    mr r8, r30
    li r7, 0x1
    bl fn_80097C08
    add r3, r24, r25
    cmpwi r28, 0x0
    stfs f30, 0x238(r3)
    bne lbl_fn_800119C0_00001A4C
    lfs f0, lbl_8088066C
    b lbl_fn_800119C0_00001A74
lbl_fn_800119C0_00001A4C:
    xoris r3, r28, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8072F898@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_8072F898@l(r4)
    stw r0, 0x8(r1)
    lfs f0, lbl_8088066C
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f0, f1
lbl_fn_800119C0_00001A74:
    add r3, r24, r25
    stfs f0, 0x240(r3)
    stfs f31, 0x234(r3)
    b lbl_fn_800119C0_00001D4C
lbl_fn_800119C0_00001A84:
    cmpwi r5, 0xef
    blt lbl_fn_800119C0_00001D4C
    beq cr4, lbl_fn_800119C0_00001AB8
    cmpwi r0, 0x1
    beq lbl_fn_800119C0_00001AB8
    beq cr7, lbl_fn_800119C0_00001AD8
    cmpwi r0, 0x3
    beq lbl_fn_800119C0_00001B04
    cmpwi r0, 0x4
    beq lbl_fn_800119C0_00001B20
    cmpwi r0, 0x6
    beq lbl_fn_800119C0_00001B20
    b lbl_fn_800119C0_00001B28
lbl_fn_800119C0_00001AB8:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800119C0_00001AD0
    lwz r3, 0x48(r3)
    addi r24, r3, 0xb0
    b lbl_fn_800119C0_00001B2C
lbl_fn_800119C0_00001AD0:
    li r24, 0x0
    b lbl_fn_800119C0_00001B2C
lbl_fn_800119C0_00001AD8:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800119C0_00001AF8
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_fn_800119C0_00001AFC
lbl_fn_800119C0_00001AF8:
    li r3, 0x0
lbl_fn_800119C0_00001AFC:
    mr r24, r3
    b lbl_fn_800119C0_00001B2C
lbl_fn_800119C0_00001B04:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800119C0_00001B18
    lwz r24, 0x48(r3)
    b lbl_fn_800119C0_00001B2C
lbl_fn_800119C0_00001B18:
    li r24, 0x0
    b lbl_fn_800119C0_00001B2C
lbl_fn_800119C0_00001B20:
    li r24, 0x0
    b lbl_fn_800119C0_00001B2C
lbl_fn_800119C0_00001B28:
    li r24, 0x0
lbl_fn_800119C0_00001B2C:
    lwz r0, 0xc8(r29)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800119C0_00001B60
lbl_fn_800119C0_00001B40:
    lwz r0, 0xc4(r29)
    add r4, r0, r3
    lwz r0, 0x14(r4)
    cmpw r26, r0
    bne lbl_fn_800119C0_00001B58
    b lbl_fn_800119C0_00001B64
lbl_fn_800119C0_00001B58:
    addi r3, r3, 0x1c
    bdnz lbl_fn_800119C0_00001B40
lbl_fn_800119C0_00001B60:
    li r4, 0x0
lbl_fn_800119C0_00001B64:
    lwz r5, 0x18(r4)
    mr r3, r24
    subi r4, r26, 0xe5
    bl fn_80097A9C
    li r0, 0x1
    stw r0, 0x34c(r24)
    lfs f0, lbl_8088066C
    mr r3, r24
    stfs f0, 0x24c(r24)
    mr r6, r27
    lfs f1, lbl_80880668
    subi r5, r26, 0xe5
    lfs f2, lbl_80880678
    li r4, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    xoris r3, r28, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8072F898@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_8072F898@l(r4)
    stw r0, 0x8(r1)
    lfs f0, lbl_8088066C
    lfd f1, 0x8(r1)
    stfs f30, 0x238(r24)
    fsubs f1, f1, f2
    fdivs f0, f0, f1
    stfs f0, 0x240(r24)
    stfs f31, 0x234(r24)
    b lbl_fn_800119C0_00001D4C
lbl_fn_800119C0_00001BE0:
    cmpwi r5, 0xef
    blt lbl_fn_800119C0_00001D4C
    subi r31, r5, 0xef
    beq cr4, lbl_fn_800119C0_00001C10
    beq cr6, lbl_fn_800119C0_00001C10
    beq cr7, lbl_fn_800119C0_00001C30
    beq cr1, lbl_fn_800119C0_00001C5C
    cmpwi r0, 0x4
    beq lbl_fn_800119C0_00001C78
    cmpwi r0, 0x6
    beq lbl_fn_800119C0_00001C78
    b lbl_fn_800119C0_00001C80
lbl_fn_800119C0_00001C10:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800119C0_00001C28
    lwz r3, 0x48(r3)
    addi r25, r3, 0xb0
    b lbl_fn_800119C0_00001C84
lbl_fn_800119C0_00001C28:
    li r25, 0x0
    b lbl_fn_800119C0_00001C84
lbl_fn_800119C0_00001C30:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800119C0_00001C50
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_fn_800119C0_00001C54
lbl_fn_800119C0_00001C50:
    li r3, 0x0
lbl_fn_800119C0_00001C54:
    mr r25, r3
    b lbl_fn_800119C0_00001C84
lbl_fn_800119C0_00001C5C:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800119C0_00001C70
    lwz r25, 0x48(r3)
    b lbl_fn_800119C0_00001C84
lbl_fn_800119C0_00001C70:
    li r25, 0x0
    b lbl_fn_800119C0_00001C84
lbl_fn_800119C0_00001C78:
    li r25, 0x0
    b lbl_fn_800119C0_00001C84
lbl_fn_800119C0_00001C80:
    li r25, 0x0
lbl_fn_800119C0_00001C84:
    lwz r0, 0xc8(r29)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800119C0_00001CB8
lbl_fn_800119C0_00001C98:
    lwz r0, 0xc4(r29)
    add r4, r0, r3
    lwz r0, 0x14(r4)
    cmpw r26, r0
    bne lbl_fn_800119C0_00001CB0
    b lbl_fn_800119C0_00001CBC
lbl_fn_800119C0_00001CB0:
    addi r3, r3, 0x1c
    bdnz lbl_fn_800119C0_00001C98
lbl_fn_800119C0_00001CB8:
    li r4, 0x0
lbl_fn_800119C0_00001CBC:
    lwz r5, 0x18(r4)
    mr r3, r25
    mr r4, r31
    bl fn_80097A9C
    lwz r3, 0x22c(r25)
    li r0, 0x1
    stw r3, 0x58(r24)
    mr r3, r25
    lfs f0, lbl_8088066C
    mr r5, r31
    stw r0, 0x34c(r25)
    mr r6, r27
    lfs f1, lbl_80880668
    mr r8, r30
    stfs f0, 0x24c(r25)
    li r4, 0x0
    lfs f2, lbl_80880678
    li r7, 0x1
    bl fn_80097C08
    cmpwi r28, 0x0
    stfs f30, 0x238(r25)
    bne lbl_fn_800119C0_00001D1C
    lfs f0, lbl_8088066C
    b lbl_fn_800119C0_00001D44
lbl_fn_800119C0_00001D1C:
    xoris r3, r28, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8072F898@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_8072F898@l(r4)
    stw r0, 0x8(r1)
    lfs f0, lbl_8088066C
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f0, f1
lbl_fn_800119C0_00001D44:
    stfs f0, 0x240(r25)
    stfs f31, 0x234(r25)
lbl_fn_800119C0_00001D4C:
    lwz r12, 0x1c(r1)
    mtcrf 255, r12
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80011E98(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x20(r3)
    fmr f31, f1
    mr r28, r4
    mr r26, r5
    cmpwi r0, 0x7
    mr r29, r6
    mr r30, r7
    mr r31, r8
    beq lbl_fn_80011E98_00001DC4
    cmpwi r0, 0x1
    bne lbl_fn_80011E98_00001F18
lbl_fn_80011E98_00001DC4:
    lwz r4, 0x1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80011E98_00001DD8
    lwz r27, 0x48(r4)
    b lbl_fn_80011E98_00001DDC
lbl_fn_80011E98_00001DD8:
    li r27, 0x0
lbl_fn_80011E98_00001DDC:
    cmpwi r27, 0x0
    beq lbl_fn_80011E98_00001F18
    cmpwi r0, 0x7
    beq lbl_fn_80011E98_00001E18
    cmpwi r0, 0x1
    beq lbl_fn_80011E98_00001E18
    cmpwi r0, 0x2
    beq lbl_fn_80011E98_00001E38
    cmpwi r0, 0x3
    beq lbl_fn_80011E98_00001E60
    cmpwi r0, 0x4
    beq lbl_fn_80011E98_00001E7C
    cmpwi r0, 0x6
    beq lbl_fn_80011E98_00001E7C
    b lbl_fn_80011E98_00001E84
lbl_fn_80011E98_00001E18:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80011E98_00001E30
    lwz r3, 0x48(r3)
    addi r3, r3, 0xb0
    b lbl_fn_80011E98_00001E88
lbl_fn_80011E98_00001E30:
    li r3, 0x0
    b lbl_fn_80011E98_00001E88
lbl_fn_80011E98_00001E38:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80011E98_00001E58
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_fn_80011E98_00001E88
lbl_fn_80011E98_00001E58:
    li r3, 0x0
    b lbl_fn_80011E98_00001E88
lbl_fn_80011E98_00001E60:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80011E98_00001E74
    lwz r3, 0x48(r3)
    b lbl_fn_80011E98_00001E88
lbl_fn_80011E98_00001E74:
    li r3, 0x0
    b lbl_fn_80011E98_00001E88
lbl_fn_80011E98_00001E7C:
    li r3, 0x0
    b lbl_fn_80011E98_00001E88
lbl_fn_80011E98_00001E84:
    li r3, 0x0
lbl_fn_80011E98_00001E88:
    subi r0, r28, 0xef
    cmplwi r0, 0x4f
    bgt lbl_fn_80011E98_00001EE0
    lwz r0, 0xc8(r26)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80011E98_00001EC8
lbl_fn_80011E98_00001EA8:
    lwz r0, 0xc4(r26)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r28, r0
    bne lbl_fn_80011E98_00001EC0
    b lbl_fn_80011E98_00001ECC
lbl_fn_80011E98_00001EC0:
    addi r4, r4, 0x1c
    bdnz lbl_fn_80011E98_00001EA8
lbl_fn_80011E98_00001EC8:
    li r5, 0x0
lbl_fn_80011E98_00001ECC:
    cmpwi r5, 0x0
    beq lbl_fn_80011E98_00001F18
    lwz r5, 0x18(r5)
    mr r4, r28
    bl fn_80097A9C
lbl_fn_80011E98_00001EE0:
    neg r4, r29
    neg r3, r30
    or r5, r4, r29
    neg r0, r31
    or r3, r3, r30
    fmr f1, f31
    or r0, r0, r31
    lfs f2, lbl_80880668
    srwi r6, r3, 31
    mr r4, r28
    srwi r5, r5, 31
    addi r3, r27, 0x1188
    srwi r7, r0, 31
    bl fn_8011E81C
lbl_fn_80011E98_00001F18:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80012054(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_27
    lwz r7, 0x20(r3)
    fmr f30, f1
    fmr f31, f2
    mr r27, r3
    cmpwi r7, 0x7
    mr r28, r5
    mr r29, r6
    beq lbl_fn_80012054_00001F84
    cmpwi r7, 0x1
    bne lbl_fn_80012054_000020AC
lbl_fn_80012054_00001F84:
    lwz r3, 0x1c(r3)
    slwi r0, r4, 2
    cmpwi r7, 0x7
    lwz r30, 0x48(r3)
    add r4, r30, r0
    lwz r31, 0x484(r4)
    beq lbl_fn_80012054_00001FCC
    cmpwi r7, 0x1
    beq lbl_fn_80012054_00001FCC
    cmpwi r7, 0x2
    beq lbl_fn_80012054_00001FE4
    cmpwi r7, 0x3
    beq lbl_fn_80012054_0000200C
    cmpwi r7, 0x4
    beq lbl_fn_80012054_00002020
    cmpwi r7, 0x6
    beq lbl_fn_80012054_00002020
    b lbl_fn_80012054_00002028
lbl_fn_80012054_00001FCC:
    cmpwi r3, 0x0
    beq lbl_fn_80012054_00001FDC
    addi r30, r30, 0xb0
    b lbl_fn_80012054_0000202C
lbl_fn_80012054_00001FDC:
    li r30, 0x0
    b lbl_fn_80012054_0000202C
lbl_fn_80012054_00001FE4:
    cmpwi r3, 0x0
    beq lbl_fn_80012054_00002000
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_fn_80012054_00002004
lbl_fn_80012054_00002000:
    li r3, 0x0
lbl_fn_80012054_00002004:
    mr r30, r3
    b lbl_fn_80012054_0000202C
lbl_fn_80012054_0000200C:
    cmpwi r3, 0x0
    beq lbl_fn_80012054_00002018
    b lbl_fn_80012054_0000202C
lbl_fn_80012054_00002018:
    li r30, 0x0
    b lbl_fn_80012054_0000202C
lbl_fn_80012054_00002020:
    li r30, 0x0
    b lbl_fn_80012054_0000202C
lbl_fn_80012054_00002028:
    li r30, 0x0
lbl_fn_80012054_0000202C:
    lwz r3, 0x22c(r30)
    li r0, 0x1
    stw r3, 0x58(r27)
    mr r3, r30
    lfs f0, lbl_8088066C
    mr r5, r31
    stw r0, 0x34c(r30)
    mr r6, r28
    lfs f1, lbl_80880668
    li r4, 0x0
    stfs f0, 0x24c(r30)
    li r7, 0x1
    lfs f2, lbl_80880678
    li r8, 0x1
    bl fn_80097C08
    cmpwi r29, 0x0
    stfs f30, 0x238(r30)
    bne lbl_fn_80012054_0000207C
    lfs f0, lbl_8088066C
    b lbl_fn_80012054_000020A4
lbl_fn_80012054_0000207C:
    xoris r3, r29, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8072F898@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_8072F898@l(r4)
    stw r0, 0x8(r1)
    lfs f0, lbl_8088066C
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f0, f1
lbl_fn_80012054_000020A4:
    stfs f0, 0x240(r30)
    stfs f31, 0x234(r30)
lbl_fn_80012054_000020AC:
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800121F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    fmr f31, f1
    stw r31, 0xc(r1)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_800121F0_00002104
    cmpwi r0, 0x1
    bne lbl_fn_800121F0_0000215C
lbl_fn_800121F0_00002104:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800121F0_0000211C
    lwz r3, 0x48(r3)
    addi r31, r3, 0xb0
    b lbl_fn_800121F0_00002120
lbl_fn_800121F0_0000211C:
    li r31, 0x0
lbl_fn_800121F0_00002120:
    mr r3, r31
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_800121F0_0000213C
    bl fn_80473F18
    bl fn_802096A8
    b lbl_fn_800121F0_00002140
lbl_fn_800121F0_0000213C:
    li r3, 0x0
lbl_fn_800121F0_00002140:
    cmpwi r3, 0x0
    beq lbl_fn_800121F0_00002154
    lfs f0, 0x4(r3)
    fdivs f0, f31, f0
    b lbl_fn_800121F0_00002158
lbl_fn_800121F0_00002154:
    lfs f0, lbl_80880668
lbl_fn_800121F0_00002158:
    stfs f0, 0x238(r31)
lbl_fn_800121F0_0000215C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80012294(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r6
    lwz r0, 0x20(r3)
    cmpwi cr6, r0, 0x7
    beq cr6, lbl_fn_80012294_000021B4
    cmpwi cr1, r0, 0x3
    beq cr1, lbl_fn_80012294_000022F4
    cmpwi r0, 0x1
    bne lbl_fn_80012294_00002408
lbl_fn_80012294_000021B4:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80012294_000021CC
    lwz r3, 0x48(r3)
    addi r30, r3, 0xb0
    b lbl_fn_80012294_000021D0
lbl_fn_80012294_000021CC:
    li r30, 0x0
lbl_fn_80012294_000021D0:
    cmpwi r4, 0x0
    beq lbl_fn_80012294_000021F4
    cmpwi r4, 0x1
    beq lbl_fn_80012294_00002224
    cmpwi r4, 0x2
    beq lbl_fn_80012294_0000222C
    cmpwi r4, 0x3
    beq lbl_fn_80012294_00002234
    b lbl_fn_80012294_0000223C
lbl_fn_80012294_000021F4:
    mr r3, r30
    mr r4, r5
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_80012294_0000223C
    bl fn_804768D0
    cmpwi r3, 0x4
    bne lbl_fn_80012294_0000221C
    li r4, 0x4
    b lbl_fn_80012294_00002240
lbl_fn_80012294_0000221C:
    li r4, 0x0
    b lbl_fn_80012294_00002240
lbl_fn_80012294_00002224:
    li r4, 0x0
    b lbl_fn_80012294_00002240
lbl_fn_80012294_0000222C:
    li r4, 0x3
    b lbl_fn_80012294_00002240
lbl_fn_80012294_00002234:
    li r4, 0x4
    b lbl_fn_80012294_00002240
lbl_fn_80012294_0000223C:
    li r4, 0x0
lbl_fn_80012294_00002240:
    subi r0, r4, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_80012294_00002280
    xoris r3, r29, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r5, lbl_8072F898@ha
    lfd f2, lbl_8072F898@l(r5)
    mr r3, r30
    stw r0, 0x8(r1)
    lfs f0, lbl_8088066C
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    bl fn_80097CCC
    b lbl_fn_80012294_00002408
lbl_fn_80012294_00002280:
    xoris r3, r29, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r4, lbl_8072F898@ha
    lfd f1, lbl_8072F898@l(r4)
    li r6, 0x1
    stw r0, 0x8(r1)
    mr r3, r30
    lfs f2, lbl_8088066C
    li r4, 0x0
    lfd f0, 0x8(r1)
    li r5, 0x2
    stw r6, 0x34c(r30)
    fsubs f0, f0, f1
    stfs f2, 0x24c(r30)
    fdivs f0, f2, f0
    stfs f2, 0x238(r30)
    stfs f0, 0x240(r30)
    lwz r0, 0x58(r31)
    cmpwi r0, -0x1
    beq lbl_fn_80012294_000022D8
    mr r5, r0
lbl_fn_80012294_000022D8:
    lfs f1, lbl_80880668
    li r6, 0x1
    lfs f2, lbl_80880678
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80012294_00002408
lbl_fn_80012294_000022F4:
    cmpwi r4, 0x0
    bne lbl_fn_80012294_00002408
    beq cr6, lbl_fn_80012294_00002328
    cmpwi r0, 0x1
    beq lbl_fn_80012294_00002328
    cmpwi r0, 0x2
    beq lbl_fn_80012294_00002348
    beq cr1, lbl_fn_80012294_00002370
    cmpwi r0, 0x4
    beq lbl_fn_80012294_0000238C
    cmpwi r0, 0x6
    beq lbl_fn_80012294_0000238C
    b lbl_fn_80012294_00002394
lbl_fn_80012294_00002328:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80012294_00002340
    lwz r3, 0x48(r3)
    addi r3, r3, 0xb0
    b lbl_fn_80012294_00002398
lbl_fn_80012294_00002340:
    li r3, 0x0
    b lbl_fn_80012294_00002398
lbl_fn_80012294_00002348:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80012294_00002368
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_fn_80012294_00002398
lbl_fn_80012294_00002368:
    li r3, 0x0
    b lbl_fn_80012294_00002398
lbl_fn_80012294_00002370:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80012294_00002384
    lwz r3, 0x48(r3)
    b lbl_fn_80012294_00002398
lbl_fn_80012294_00002384:
    li r3, 0x0
    b lbl_fn_80012294_00002398
lbl_fn_80012294_0000238C:
    li r3, 0x0
    b lbl_fn_80012294_00002398
lbl_fn_80012294_00002394:
    li r3, 0x0
lbl_fn_80012294_00002398:
    xoris r4, r29, 0x8000
    lis r0, 0x4330
    stw r4, 0xc(r1)
    lis r5, lbl_8072F898@ha
    lfd f1, lbl_8072F898@l(r5)
    li r5, 0x1
    stw r0, 0x8(r1)
    li r4, 0x0
    lfs f3, lbl_8088066C
    li r6, 0x1
    lfd f0, 0x8(r1)
    li r7, 0x1
    stw r5, 0x34c(r3)
    li r8, 0x1
    fsubs f0, f0, f1
    lfs f1, lbl_80880668
    stfs f3, 0x24c(r3)
    lfs f2, lbl_80880678
    fdivs f0, f3, f0
    stfs f3, 0x238(r3)
    stfs f0, 0x240(r3)
    lwz r9, 0x58(r31)
    addi r5, r9, 0x1
    subfic r0, r9, -0x1
    nor r0, r5, r0
    srawi r0, r0, 31
    andc r5, r9, r0
    bl fn_80097C08
lbl_fn_80012294_00002408:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80012540(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80012540_00002438
    cmpwi r0, 0x1
    bnelr
lbl_fn_80012540_00002438:
    lwz r3, 0x1c(r3)
    mr r5, r4
    li r6, 0x0
    lwz r3, 0x48(r3)
    b fn_80176DFC
    blr
}

asm void fn_8001256C(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8001256C_00002478
    cmpwi r0, 0x1
    beq lbl_fn_8001256C_00002478
    cmpwi r0, 0x2
    beq lbl_fn_8001256C_00002484
    cmpwi r0, 0x3
    beq lbl_fn_8001256C_00002490
    blr
lbl_fn_8001256C_00002478:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    b fn_8016E5F0
lbl_fn_8001256C_00002484:
    lwz r3, 0x1c(r3)
    stw r4, 0x9c(r3)
    blr
lbl_fn_8001256C_00002490:
    lwz r5, 0x1c(r3)
    neg r0, r4
    or r3, r0, r4
    lwz r0, 0x4c(r5)
    rlwimi r0, r3, 0, 0, 0
    stw r0, 0x4c(r5)
    blr
}

asm void fn_800125C8(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_800125C8_000024C0
    cmpwi r0, 0x1
    bnelr
lbl_fn_800125C8_000024C0:
    lwz r3, 0x1c(r3)
    cmpwi r4, 0x0
    lwz r3, 0x48(r3)
    beq lbl_fn_800125C8_000024E0
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    blr
lbl_fn_800125C8_000024E0:
    lwz r0, 0x5c0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r3)
    blr
}

asm void fn_8001260C(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8001260C_00002504
    cmpwi r0, 0x1
    bne lbl_fn_8001260C_00002514
lbl_fn_8001260C_00002504:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0x5b8
    blr
lbl_fn_8001260C_00002514:
    li r3, 0x0
    blr
}

asm void fn_80012638(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80012638_00002530
    cmpwi r0, 0x1
    bnelr
lbl_fn_80012638_00002530:
    cmpwi r4, 0x0
    beq lbl_fn_80012638_00002550
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x98(r12)
    mtctr r12
    bctr
lbl_fn_80012638_00002550:
    lwz r3, 0x1c(r3)
    li r4, 0x0
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_8001268C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8001268C_000025E8
    cmpwi r5, 0x0
    beq lbl_fn_8001268C_000025A8
    lwz r3, 0x1c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    b lbl_fn_8001268C_000025E8
lbl_fn_8001268C_000025A8:
    lfs f0, lbl_80880668
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r3, 0x1c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8001268C_000025E8:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80012714(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8001271C(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8001271C_00002620
    cmpwi r0, 0x1
    beq lbl_fn_8001271C_00002620
    cmpwi r0, 0x2
    beq lbl_fn_8001271C_0000263C
    blr
lbl_fn_8001271C_00002620:
    lwz r3, 0x1c(r3)
    neg r0, r4
    or r0, r0, r4
    lwz r3, 0x48(r3)
    srwi r0, r0, 31
    stb r0, 0x1230(r3)
    blr
lbl_fn_8001271C_0000263C:
    lwz r3, 0x1c(r3)
    stw r4, 0xdc(r3)
    lwz r3, 0xe4(r3)
    cmpwi r3, 0x0
    beqlr
    stw r4, 0x50(r3)
    blr
}

asm void fn_80012774(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80012774_00002678
    cmpwi r0, 0x1
    beq lbl_fn_80012774_00002678
    cmpwi r0, 0x2
    beq lbl_fn_80012774_00002694
    blr
lbl_fn_80012774_00002678:
    lwz r3, 0x1c(r3)
    neg r0, r4
    or r0, r0, r4
    lwz r3, 0x48(r3)
    srwi r0, r0, 31
    stb r0, 0x1231(r3)
    blr
lbl_fn_80012774_00002694:
    lwz r3, 0x1c(r3)
    stw r4, 0xe0(r3)
    lwz r3, 0xe4(r3)
    cmpwi r3, 0x0
    beqlr
    stw r4, 0x54(r3)
    blr
}

asm void fn_800127CC(void)
{
    nofralloc
    cmpwi r4, -0x1
    beq lbl_fn_800127CC_000026C0
    cmpwi r5, -0x1
    bne lbl_fn_800127CC_000026C8
lbl_fn_800127CC_000026C0:
    li r3, 0x0
    blr
lbl_fn_800127CC_000026C8:
    lwz r5, 0x1c(r3)
    li r3, 0x0
    lwz r6, 0x48(r5)
    lwzu r0, 0x650(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800127CC_00002708
lbl_fn_800127CC_000026E4:
    add r5, r6, r3
    lwz r5, 0x4(r5)
    lwz r0, 0x4(r5)
    cmpw r4, r0
    bne lbl_fn_800127CC_00002700
    li r3, 0x1
    blr
lbl_fn_800127CC_00002700:
    addi r3, r3, 0x4
    bdnz lbl_fn_800127CC_000026E4
lbl_fn_800127CC_00002708:
    li r3, 0x0
    blr
}

asm void fn_8001282C(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8001282C_00002724
    cmpwi r0, 0x1
    bnelr
lbl_fn_8001282C_00002724:
    cmpwi r4, -0x1
    bne lbl_fn_8001282C_00002748
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    lwz r0, 0x648(r3)
    cmpwi r0, 0x0
    beqlr
    li r4, 0x0
    b fn_8014EEC4
lbl_fn_8001282C_00002748:
    cmpwi r5, -0x1
    beq lbl_fn_8001282C_00002788
    lwz r6, 0x1c(r3)
    li r5, 0x0
    lwz r7, 0x48(r6)
    lwzu r0, 0x650(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8001282C_00002788
lbl_fn_8001282C_0000276C:
    add r6, r7, r5
    lwz r6, 0x4(r6)
    lwz r0, 0x4(r6)
    cmpw r4, r0
    beq lbl_fn_8001282C_00002788
    addi r5, r5, 0x4
    bdnz lbl_fn_8001282C_0000276C
lbl_fn_8001282C_00002788:
    lwz r3, 0x1c(r3)
    li r7, 0x0
    li r5, 0x0
    lwz r3, 0x48(r3)
    lwz r0, 0x650(r3)
    addi r8, r3, 0x650
    mtctr r0
    cmpwi r0, 0x0
    blelr
lbl_fn_8001282C_000027AC:
    add r6, r8, r5
    lwz r6, 0x4(r6)
    lwz r0, 0x4(r6)
    cmpw r4, r0
    bne lbl_fn_8001282C_000027D0
    mr r4, r7
    li r5, 0x0
    li r6, 0x0
    b fn_8014DEE4
lbl_fn_8001282C_000027D0:
    addi r7, r7, 0x1
    addi r5, r5, 0x4
    bdnz lbl_fn_8001282C_000027AC
    blr
}

asm void fn_800128FC(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_800128FC_000027F4
    cmpwi r0, 0x1
    bne lbl_fn_800128FC_00002810
lbl_fn_800128FC_000027F4:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800128FC_00002808
    lwz r3, 0x48(r3)
    blr
lbl_fn_800128FC_00002808:
    li r3, 0x0
    blr
lbl_fn_800128FC_00002810:
    li r3, 0x0
    blr
}

asm void fn_80012934(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80012934_0000282C
    cmpwi r0, 0x1
    bne lbl_fn_80012934_00002848
lbl_fn_80012934_0000282C:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80012934_00002840
    lwz r3, 0x48(r3)
    blr
lbl_fn_80012934_00002840:
    li r3, 0x0
    blr
lbl_fn_80012934_00002848:
    li r3, 0x0
    blr
}

asm void fn_8001296C(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8001296C_00002888
    cmpwi r0, 0x1
    beq lbl_fn_8001296C_00002888
    cmpwi r0, 0x2
    beq lbl_fn_8001296C_000028A8
    cmpwi r0, 0x3
    beq lbl_fn_8001296C_000028CC
    cmpwi r0, 0x4
    beq lbl_fn_8001296C_000028E8
    cmpwi r0, 0x6
    beq lbl_fn_8001296C_000028E8
    b lbl_fn_8001296C_000028F0
lbl_fn_8001296C_00002888:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8001296C_000028A0
    lwz r3, 0x48(r3)
    addi r3, r3, 0xb0
    blr
lbl_fn_8001296C_000028A0:
    li r3, 0x0
    blr
lbl_fn_8001296C_000028A8:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8001296C_000028C4
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
lbl_fn_8001296C_000028C4:
    li r3, 0x0
    blr
lbl_fn_8001296C_000028CC:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8001296C_000028E0
    lwz r3, 0x48(r3)
    blr
lbl_fn_8001296C_000028E0:
    li r3, 0x0
    blr
lbl_fn_8001296C_000028E8:
    li r3, 0x0
    blr
lbl_fn_8001296C_000028F0:
    li r3, 0x0
    blr
}

asm void fn_80012A14(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80012A1C(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80012A1C_00002938
    cmpwi r0, 0x1
    beq lbl_fn_80012A1C_00002938
    cmpwi r0, 0x2
    beq lbl_fn_80012A1C_00002958
    cmpwi r0, 0x3
    beq lbl_fn_80012A1C_0000297C
    cmpwi r0, 0x4
    beq lbl_fn_80012A1C_00002998
    cmpwi r0, 0x6
    beq lbl_fn_80012A1C_00002998
    b lbl_fn_80012A1C_000029A0
lbl_fn_80012A1C_00002938:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80012A1C_00002950
    lwz r3, 0x48(r3)
    addi r3, r3, 0xb0
    blr
lbl_fn_80012A1C_00002950:
    li r3, 0x0
    blr
lbl_fn_80012A1C_00002958:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80012A1C_00002974
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
lbl_fn_80012A1C_00002974:
    li r3, 0x0
    blr
lbl_fn_80012A1C_0000297C:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80012A1C_00002990
    lwz r3, 0x48(r3)
    blr
lbl_fn_80012A1C_00002990:
    li r3, 0x0
    blr
lbl_fn_80012A1C_00002998:
    li r3, 0x0
    blr
lbl_fn_80012A1C_000029A0:
    li r3, 0x0
    blr
}

asm void fn_80012AC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x20(r3)
    stw r31, 0xc(r1)
    cmpwi r0, 0x7
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_80012AC4_000029F0
    cmpwi r0, 0x1
    beq lbl_fn_80012AC4_000029F0
    cmpwi r0, 0x2
    beq lbl_fn_80012AC4_00002A44
    cmpwi r0, 0x3
    beq lbl_fn_80012AC4_00002AAC
    cmpwi r0, 0x4
    beq lbl_fn_80012AC4_00002AF8
    b lbl_fn_80012AC4_00002B04
lbl_fn_80012AC4_000029F0:
    cmpwi r4, 0x0
    beq lbl_fn_80012AC4_00002A34
    lwz r3, 0x1c(r3)
    mr r4, r30
    li r5, 0x0
    lwz r3, 0x48(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80012AC4_00002A24
    li r3, 0x0
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002A24:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002A34:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0xb8
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002A44:
    cmpwi r4, 0x0
    beq lbl_fn_80012AC4_00002A90
    lwz r3, 0x1c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r31, r3
    mr r4, r30
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80012AC4_00002A80
    li r3, 0x0
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002A80:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002A90:
    lwz r3, 0x1c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addi r3, r3, 0x8
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002AAC:
    cmpwi r4, 0x0
    beq lbl_fn_80012AC4_00002AE8
    lwz r3, 0x1c(r3)
    li r5, 0x0
    lwz r31, 0x48(r3)
    mr r3, r31
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80012AC4_00002AD8
    li r3, 0x0
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002AD8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002AE8:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0x8
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002AF8:
    lwz r3, 0x1c(r3)
    addi r3, r3, 0x18
    b lbl_fn_80012AC4_00002B08
lbl_fn_80012AC4_00002B04:
    li r3, 0x0
lbl_fn_80012AC4_00002B08:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80012C3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80012C3C_00002B4C
    li r3, 0x0
    b lbl_fn_80012C3C_00002B58
lbl_fn_80012C3C_00002B4C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_80012C3C_00002B58:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80012C88(void)
{
    nofralloc
    lfs f1, 0x0(r3)
    lfs f0, 0x0(r4)
    lfs f3, 0x4(r3)
    fadds f4, f1, f0
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r3)
    lfs f0, 0x8(r4)
    fadds f2, f3, f2
    stfs f4, 0x0(r3)
    fadds f0, f1, f0
    stfs f2, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_80012CBC(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80012CBC_00002BB4
    cmpwi r0, 0x1
    bnelr
lbl_fn_80012CBC_00002BB4:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    b fn_80129954
    blr
}

asm void fn_80012CE4(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80012CE4_00002BDC
    cmpwi r0, 0x1
    bnelr
lbl_fn_80012CE4_00002BDC:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    b fn_80129930
    blr
}

asm void fn_80012D0C(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80012D0C_00002C04
    cmpwi r0, 0x1
    bnelr
lbl_fn_80012D0C_00002C04:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    b fn_80129A48
    blr
}

asm void fn_80012D34(void)
{
    nofralloc
    stwu r1, -0x300(r1)
    mflr r0
    stw r0, 0x304(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x2f0(r1)
    psq_st f31, 0x2f8(r1), 0, 0
    stfd f30, 0x2e0(r1)
    psq_st f30, 0x2e8(r1), 0, 0
    stfd f29, 0x2d0(r1)
    psq_st f29, 0x2d8(r1), 0, 0
    stfd f28, 0x2c0(r1)
    psq_st f28, 0x2c8(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x20(r3)
    fmr f28, f1
    fmr f29, f2
    mr r26, r3
    cmpwi r0, 0x7
    mr r27, r4
    mr r31, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    beq lbl_fn_80012D34_00002C80
    cmpwi r0, 0x1
    bne lbl_fn_80012D34_00003198
lbl_fn_80012D34_00002C80:
    cmpwi r9, 0x0
    beq lbl_fn_80012D34_00002F00
    mr r4, r28
    addi r3, r1, 0x17c
    bl fn_8001047C
    mr r3, r26
    bl fn_800128FC
    bl fn_8000DD0C
    lis r4, lbl_8072F924@ha
    addi r4, r4, lbl_8072F924@l
    addi r4, r4, 0x7c
    bl fn_800132EC
    mr r31, r3
    addi r3, r1, 0xc8
    mr r4, r31
    bl fn_8000D0F8
    addi r3, r1, 0x170
    addi r4, r1, 0x17c
    addi r5, r1, 0xc8
    bl fn_80013338
    addi r3, r1, 0x170
    bl fn_8000D3A4
    fmr f3, f1
    lfs f1, lbl_80880668
    addi r3, r1, 0x164
    fmr f2, f1
    bl fn_8000D114
    mr r4, r31
    addi r3, r1, 0x278
    bl fn_8001336C
    addi r3, r1, 0x164
    addi r4, r1, 0x278
    bl fn_80011410
    mr r4, r31
    addi r3, r1, 0xb0
    bl fn_8000D0F8
    mr r4, r28
    addi r3, r1, 0xbc
    addi r5, r1, 0xb0
    bl fn_80013338
    addi r3, r1, 0x158
    addi r4, r1, 0xbc
    bl fn_80011034
    addi r3, r1, 0xa4
    addi r4, r1, 0x164
    bl fn_80011034
    lfs f1, 0xa4(r1)
    lfs f0, 0x158(r1)
    fsubs f1, f0, f1
    bl fn_800133B0
    fmr f31, f1
    addi r3, r1, 0x98
    addi r4, r1, 0x164
    bl fn_80011034
    lfs f1, 0x9c(r1)
    lfs f0, 0x15c(r1)
    fsubs f1, f0, f1
    bl fn_800133B0
    fmr f30, f1
    fmr f1, f31
    bl fn_80013404
    fcmpo cr0, f1, f29
    cror eq, lt, eq
    bne lbl_fn_80012D34_00002D94
    fmr f1, f30
    bl fn_80013404
    fcmpo cr0, f1, f29
    cror eq, lt, eq
    beq lbl_fn_80012D34_00002DA8
lbl_fn_80012D34_00002D94:
    fmr f1, f29
    bl fn_80011220
    lfs f0, lbl_80880680
    fcmpo cr0, f1, f0
    bge lbl_fn_80012D34_00002DB8
lbl_fn_80012D34_00002DA8:
    mr r4, r28
    addi r3, r1, 0x17c
    bl fn_8000D124
    b lbl_fn_80012D34_00002E84
lbl_fn_80012D34_00002DB8:
    fmr f1, f29
    lfs f3, lbl_80880668
    fmr f2, f29
    addi r3, r1, 0x14c
    bl fn_8000D114
    fmr f1, f31
    bl fn_80013404
    fcmpo cr0, f1, f29
    cror eq, lt, eq
    bne lbl_fn_80012D34_00002DE8
    stfs f31, 0x14c(r1)
    b lbl_fn_80012D34_00002E08
lbl_fn_80012D34_00002DE8:
    lfs f0, lbl_80880668
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_80012D34_00002E08
    lfs f1, 0x14c(r1)
    lfs f0, lbl_8088068C
    fmuls f0, f1, f0
    stfs f0, 0x14c(r1)
lbl_fn_80012D34_00002E08:
    fmr f1, f30
    bl fn_80013404
    fcmpo cr0, f1, f29
    cror eq, lt, eq
    bne lbl_fn_80012D34_00002E24
    stfs f30, 0x150(r1)
    b lbl_fn_80012D34_00002E44
lbl_fn_80012D34_00002E24:
    lfs f0, lbl_80880668
    fcmpo cr0, f30, f0
    cror eq, lt, eq
    bne lbl_fn_80012D34_00002E44
    lfs f1, 0x150(r1)
    lfs f0, lbl_8088068C
    fmuls f0, f1, f0
    stfs f0, 0x150(r1)
lbl_fn_80012D34_00002E44:
    addi r3, r1, 0x248
    addi r4, r1, 0x14c
    bl fn_800109E0
    addi r3, r1, 0x164
    addi r4, r1, 0x248
    bl fn_80011410
    mr r4, r31
    addi r3, r1, 0x80
    bl fn_8000D0F8
    addi r3, r1, 0x8c
    addi r4, r1, 0x80
    addi r5, r1, 0x164
    bl fn_80013410
    addi r3, r1, 0x17c
    addi r4, r1, 0x8c
    bl fn_8000D124
lbl_fn_80012D34_00002E84:
    lis r4, lbl_807C7030@ha
    mr r3, r30
    addi r4, r4, lbl_807C7030@l
    bl fn_80013444
    cmpwi r3, 0x0
    beq lbl_fn_80012D34_00002EEC
    mr r4, r26
    addi r3, r1, 0x140
    bl fn_80010374
    addi r3, r1, 0x134
    addi r4, r1, 0x17c
    addi r5, r1, 0x140
    bl fn_80013338
    mr r4, r30
    addi r3, r1, 0x218
    bl fn_800109E0
    addi r3, r1, 0x134
    addi r4, r1, 0x218
    bl fn_80011410
    addi r3, r1, 0x74
    addi r4, r1, 0x140
    addi r5, r1, 0x134
    bl fn_80013410
    addi r3, r1, 0x17c
    addi r4, r1, 0x74
    bl fn_8000D124
lbl_fn_80012D34_00002EEC:
    fmr f1, f28
    mr r3, r26
    addi r4, r1, 0x17c
    bl fn_800134E0
    b lbl_fn_80012D34_00003198
lbl_fn_80012D34_00002F00:
    mr r3, r27
    bl fn_80012A1C
    cmpwi r3, 0x0
    beq lbl_fn_80012D34_000030D0
    mr r3, r27
    bl fn_80012A1C
    mr r4, r31
    bl fn_80012C3C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80012D34_00003198
    lfs f1, lbl_80880668
    addi r3, r1, 0x128
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    cmpwi r29, 0x0
    beq lbl_fn_80012D34_00002FF4
    lfs f1, lbl_80880668
    addi r3, r1, 0x11c
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lis r4, lbl_807C7030@ha
    mr r3, r28
    addi r4, r4, lbl_807C7030@l
    bl fn_80013444
    cmpwi r3, 0x0
    beq lbl_fn_80012D34_00003000
    mr r4, r26
    addi r3, r1, 0x110
    bl fn_80010374
    mr r4, r31
    addi r3, r1, 0x5c
    bl fn_8000D0F8
    addi r3, r1, 0x68
    addi r4, r1, 0x5c
    addi r5, r1, 0x110
    bl fn_80013338
    addi r3, r1, 0x11c
    addi r4, r1, 0x68
    bl fn_8000D124
    mr r4, r28
    addi r3, r1, 0x1e8
    bl fn_800109E0
    addi r3, r1, 0x11c
    addi r4, r1, 0x1e8
    bl fn_80011410
    addi r3, r1, 0x11c
    addi r4, r1, 0x110
    bl fn_80012C88
    mr r4, r31
    addi r3, r1, 0x50
    bl fn_8000D0F8
    addi r3, r1, 0x11c
    addi r4, r1, 0x50
    bl fn_80013484
    addi r3, r1, 0x128
    addi r4, r1, 0x11c
    bl fn_8000D124
    b lbl_fn_80012D34_00003000
lbl_fn_80012D34_00002FF4:
    mr r4, r28
    addi r3, r1, 0x128
    bl fn_80012C88
lbl_fn_80012D34_00003000:
    lis r4, lbl_807C7030@ha
    mr r3, r30
    addi r4, r4, lbl_807C7030@l
    bl fn_80013444
    cmpwi r3, 0x0
    beq lbl_fn_80012D34_000030B8
    lfs f1, lbl_80880668
    addi r3, r1, 0x104
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    mr r4, r26
    addi r3, r1, 0xf8
    bl fn_80010374
    mr r4, r31
    addi r3, r1, 0x2c
    bl fn_8000D0F8
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    addi r5, r1, 0x128
    bl fn_80013410
    addi r3, r1, 0x44
    addi r4, r1, 0x38
    addi r5, r1, 0xf8
    bl fn_80013338
    addi r3, r1, 0x104
    addi r4, r1, 0x44
    bl fn_8000D124
    mr r4, r30
    addi r3, r1, 0x1b8
    bl fn_800109E0
    addi r3, r1, 0x104
    addi r4, r1, 0x1b8
    bl fn_80011410
    addi r3, r1, 0x104
    addi r4, r1, 0xf8
    bl fn_80012C88
    mr r4, r31
    addi r3, r1, 0x20
    bl fn_8000D0F8
    addi r3, r1, 0x104
    addi r4, r1, 0x20
    bl fn_80013484
    addi r3, r1, 0x128
    addi r4, r1, 0x104
    bl fn_8000D124
lbl_fn_80012D34_000030B8:
    fmr f1, f28
    mr r3, r26
    mr r4, r31
    addi r5, r1, 0x128
    bl fn_80013508
    b lbl_fn_80012D34_00003198
lbl_fn_80012D34_000030D0:
    mr r4, r26
    addi r3, r1, 0xec
    bl fn_80010374
    mr r4, r27
    addi r3, r1, 0xe0
    bl fn_80010374
    cmpwi r29, 0x0
    beq lbl_fn_80012D34_00003120
    mr r4, r28
    mr r5, r30
    addi r3, r1, 0x14
    bl fn_80013410
    addi r3, r1, 0xe0
    addi r4, r1, 0x14
    bl fn_8000D124
    fmr f1, f28
    mr r3, r26
    addi r4, r1, 0xe0
    bl fn_800134B8
    b lbl_fn_80012D34_00003198
lbl_fn_80012D34_00003120:
    mr r4, r28
    addi r3, r1, 0xe0
    bl fn_80012C88
    lis r4, lbl_807C7030@ha
    mr r3, r30
    addi r4, r4, lbl_807C7030@l
    bl fn_80013444
    cmpwi r3, 0x0
    beq lbl_fn_80012D34_00003188
    addi r3, r1, 0xd4
    addi r4, r1, 0xe0
    addi r5, r1, 0xec
    bl fn_80013338
    mr r4, r30
    addi r3, r1, 0x188
    bl fn_800109E0
    addi r3, r1, 0xd4
    addi r4, r1, 0x188
    bl fn_80011410
    addi r3, r1, 0x8
    addi r4, r1, 0xec
    addi r5, r1, 0xd4
    bl fn_80013410
    addi r3, r1, 0xe0
    addi r4, r1, 0x8
    bl fn_8000D124
lbl_fn_80012D34_00003188:
    fmr f1, f28
    mr r3, r26
    addi r4, r1, 0xe0
    bl fn_800134E0
lbl_fn_80012D34_00003198:
    addi r11, r1, 0x2c0
    psq_l f31, 0x2f8(r1), 0, 0
    lfd f31, 0x2f0(r1)
    psq_l f30, 0x2e8(r1), 0, 0
    lfd f30, 0x2e0(r1)
    psq_l f29, 0x2d8(r1), 0, 0
    lfd f29, 0x2d0(r1)
    psq_l f28, 0x2c8(r1), 0, 0
    lfd f28, 0x2c0(r1)
    bl _restgpr_26
    lwz r0, 0x304(r1)
    mtlr r0
    addi r1, r1, 0x300
    blr
}

asm void fn_800132EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_800132EC_000031FC
    li r3, 0x0
    b lbl_fn_800132EC_00003208
lbl_fn_800132EC_000031FC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_800132EC_00003208:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80013338(void)
{
    nofralloc
    lfs f1, 0x8(r4)
    lfs f0, 0x8(r5)
    lfs f3, 0x4(r4)
    fsubs f4, f1, f0
    lfs f2, 0x4(r5)
    lfs f1, 0x0(r4)
    lfs f0, 0x0(r5)
    fsubs f2, f3, f2
    stfs f4, 0x8(r3)
    fsubs f0, f1, f0
    stfs f2, 0x4(r3)
    stfs f0, 0x0(r3)
    blr
}

asm void fn_8001336C(void)
{
    nofralloc
    psq_l f2, 0x8(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    lfs f0, lbl_80880668
    psq_st f4, 0x18(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0xc(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x2c(r3)
    blr
}

asm void fn_800133B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8072F8A0@ha
    stw r0, 0x14(r1)
    lfd f2, lbl_8072F8A0@l(r3)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80880690
    fcmpo cr0, f1, f0
    ble lbl_fn_800133B0_000032C4
    lfs f0, lbl_80880694
    fsubs f1, f1, f0
lbl_fn_800133B0_000032C4:
    lfs f0, lbl_80880698
    fcmpo cr0, f1, f0
    bge lbl_fn_800133B0_000032D8
    lfs f0, lbl_80880694
    fadds f1, f1, f0
lbl_fn_800133B0_000032D8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80013404(void)
{
    nofralloc
    fabs f0, f1
    frsp f1, f0
    blr
}

asm void fn_80013410(void)
{
    nofralloc
    lfs f1, 0x8(r4)
    lfs f0, 0x8(r5)
    lfs f3, 0x4(r4)
    fadds f4, f1, f0
    lfs f2, 0x4(r5)
    lfs f1, 0x0(r4)
    lfs f0, 0x0(r5)
    fadds f2, f3, f2
    stfs f4, 0x8(r3)
    fadds f0, f1, f0
    stfs f2, 0x4(r3)
    stfs f0, 0x0(r3)
    blr
}

asm void fn_80013444(void)
{
    nofralloc
    lfs f1, 0x0(r3)
    li r0, 0x0
    lfs f0, 0x0(r4)
    fcmpu cr0, f1, f0
    bne lbl_fn_80013444_0000335C
    lfs f1, 0x4(r3)
    lfs f0, 0x4(r4)
    fcmpu cr0, f1, f0
    bne lbl_fn_80013444_0000335C
    lfs f1, 0x8(r3)
    lfs f0, 0x8(r4)
    fcmpu cr0, f1, f0
    beq lbl_fn_80013444_00003360
lbl_fn_80013444_0000335C:
    li r0, 0x1
lbl_fn_80013444_00003360:
    mr r3, r0
    blr
}

asm void fn_80013484(void)
{
    nofralloc
    lfs f1, 0x0(r3)
    lfs f0, 0x0(r4)
    lfs f3, 0x4(r3)
    fsubs f4, f1, f0
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r3)
    lfs f0, 0x8(r4)
    fsubs f2, f3, f2
    stfs f4, 0x0(r3)
    fsubs f0, f1, f0
    stfs f2, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_800134B8(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_800134B8_000033B0
    cmpwi r0, 0x1
    bnelr
lbl_fn_800134B8_000033B0:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    b fn_8012ABD0
    blr
}

asm void fn_800134E0(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_800134E0_000033D8
    cmpwi r0, 0x1
    bnelr
lbl_fn_800134E0_000033D8:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    b fn_8012ABF4
    blr
}

asm void fn_80013508(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80013508_00003400
    cmpwi r0, 0x1
    bnelr
lbl_fn_80013508_00003400:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    b fn_8012AC18
    blr
}

asm void fn_80013530(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80013530_00003428
    cmpwi r0, 0x1
    bnelr
lbl_fn_80013530_00003428:
    lwz r3, 0x1c(r3)
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    b fn_8012AC40
    blr
}

asm void fn_80013558(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x174(r3)
    lis r5, 0x4330
    lwz r4, 0x180(r3)
    mr r15, r3
    subf r0, r0, r0
    stw r0, 0x174(r3)
    subf r0, r4, r4
    lwz r4, 0x1c(r3)
    stw r0, 0x180(r3)
    lwz r3, 0x48(r4)
    stw r5, 0x70(r1)
    lwz r20, 0x21c(r3)
    stw r5, 0x78(r1)
    cmpwi r20, 0x0
    beq lbl_fn_80013558_00003B68
    lis r3, lbl_8072F890@ha
    li r16, 0x0
    lfd f30, lbl_8072F890@l(r3)
    mr r19, r20
    lfs f31, lbl_80880670
    mr r24, r16
    mr r26, r16
    mr r25, r16
    mr r28, r16
    mr r14, r16
    mr r29, r16
    li r31, 0x0
    li r30, 0x0
    lis r23, 0x1000
    lis r27, 0x4000
    b lbl_fn_80013558_00003B5C
lbl_fn_80013558_000034DC:
    lwz r4, 0x174(r15)
    lwz r3, 0x178(r15)
    lwz r0, 0x158(r15)
    cmplw r4, r3
    add r17, r0, r31
    bge lbl_fn_80013558_00003534
    lwz r3, 0x170(r15)
    slwi r0, r4, 4
    add. r3, r3, r0
    beq lbl_fn_80013558_00003524
    lfs f0, 0x0(r17)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r17)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r17)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r17)
    stfs f0, 0xc(r3)
lbl_fn_80013558_00003524:
    lwz r3, 0x174(r15)
    addi r0, r3, 0x1
    stw r0, 0x174(r15)
    b lbl_fn_80013558_000037D0
lbl_fn_80013558_00003534:
    subi r0, r23, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_80013558_00003564
    lis r3, lbl_8072F924@ha
    addi r4, r3, lbl_8072F924@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013558_00003564:
    addi r3, r15, 0x178
    stw r24, 0x5c(r1)
    subi r0, r23, 0x1
    stw r24, 0x60(r1)
    stw r24, 0x64(r1)
    stw r3, 0x68(r1)
    stw r24, 0x6c(r1)
    lwz r3, 0x174(r15)
    lwz r18, 0x178(r15)
    addi r3, r3, 0x1
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r3, 0x1c(r1)
    ble lbl_fn_80013558_000035C0
    lis r3, lbl_8072F924@ha
    addi r4, r3, lbl_8072F924@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013558_000035C0:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r18, r0
    bge lbl_fn_80013558_00003610
    lis r3, 0xcccd
    addi r4, r18, 0x1
    subi r5, r3, 0x3333
    lwz r0, 0x1c(r1)
    slwi r3, r4, 2
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_80013558_00003604
    addi r3, r1, 0x1c
lbl_fn_80013558_00003604:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_80013558_00003650
lbl_fn_80013558_00003610:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r18, r0
    bge lbl_fn_80013558_0000364C
    addi r3, r18, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_80013558_00003640
    addi r3, r1, 0x1c
lbl_fn_80013558_00003640:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_80013558_00003650
lbl_fn_80013558_0000364C:
    subi r18, r23, 0x1
lbl_fn_80013558_00003650:
    subi r0, r23, 0x1
    cmplw r18, r0
    ble lbl_fn_80013558_0000367C
    lis r3, lbl_8072F924@ha
    addi r4, r3, lbl_8072F924@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013558_0000367C:
    slwi r3, r18, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_80013558_000036B0
    lis r3, __files@ha
    lis r4, lbl_80775AA4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775AA4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013558_000036B0:
    lwz r0, 0x60(r1)
    stw r21, 0x5c(r1)
    slwi r3, r0, 4
    stw r18, 0x64(r1)
    lwz r0, 0x174(r15)
    stw r0, 0x6c(r1)
    slwi r0, r0, 4
    add r0, r21, r0
    add. r3, r3, r0
    beq lbl_fn_80013558_000036F8
    lfs f0, 0x0(r17)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r17)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r17)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r17)
    stfs f0, 0xc(r3)
lbl_fn_80013558_000036F8:
    lwz r3, 0x60(r1)
    lwz r0, 0x6c(r1)
    addi r3, r3, 0x1
    stw r3, 0x60(r1)
    lwz r3, 0x5c(r1)
    slwi r0, r0, 4
    lwz r4, 0x174(r15)
    lwz r7, 0x170(r15)
    add r5, r3, r0
    slwi r0, r4, 4
    add r6, r7, r0
    addi r0, r6, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_80013558_00003784
lbl_fn_80013558_0000373C:
    subic. r5, r5, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_80013558_00003768
    lfs f0, 0x0(r6)
    stfs f0, 0x0(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
lbl_fn_80013558_00003768:
    lwz r4, 0x6c(r1)
    lwz r3, 0x60(r1)
    subi r0, r4, 0x1
    stw r0, 0x6c(r1)
    addi r0, r3, 0x1
    stw r0, 0x60(r1)
    bdnz lbl_fn_80013558_0000373C
lbl_fn_80013558_00003784:
    stw r25, 0x174(r15)
    addic. r0, r1, 0x5c
    lwz r3, 0x178(r15)
    lwz r0, 0x64(r1)
    stw r0, 0x178(r15)
    stw r3, 0x64(r1)
    lwz r0, 0x5c(r1)
    lwz r3, 0x170(r15)
    stw r0, 0x170(r15)
    stw r3, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r0, 0x174(r15)
    stw r25, 0x60(r1)
    beq lbl_fn_80013558_000037D0
    lwz r3, 0x5c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80013558_000037D0
    stw r26, 0x60(r1)
    bl dtor_80084684
lbl_fn_80013558_000037D0:
    lwz r4, 0x180(r15)
    lwz r3, 0x184(r15)
    lwz r18, 0x164(r15)
    cmplw r4, r3
    bge lbl_fn_80013558_00003804
    addi r0, r4, 0x1
    stw r0, 0x180(r15)
    lwz r3, 0x17c(r15)
    slwi r0, r0, 2
    lwzx r4, r18, r30
    add r3, r3, r0
    stw r4, -0x4(r3)
    b lbl_fn_80013558_00003A3C
lbl_fn_80013558_00003804:
    subi r0, r27, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_80013558_00003834
    lis r3, lbl_8072F924@ha
    addi r4, r3, lbl_8072F924@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013558_00003834:
    lwz r3, 0x180(r15)
    addi r4, r15, 0x184
    lwz r17, 0x184(r15)
    subi r0, r27, 0x1
    addi r3, r3, 0x1
    stw r28, 0x48(r1)
    subf r3, r17, r3
    subf r0, r17, r0
    cmplw r3, r0
    stw r28, 0x4c(r1)
    stw r28, 0x50(r1)
    stw r4, 0x54(r1)
    stw r28, 0x58(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_80013558_00003890
    lis r3, lbl_8072F924@ha
    addi r4, r3, lbl_8072F924@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013558_00003890:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r17, r0
    bge lbl_fn_80013558_000038E0
    lis r3, 0xcccd
    addi r4, r17, 0x1
    subi r5, r3, 0x3333
    lwz r0, 0x8(r1)
    slwi r3, r4, 2
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80013558_000038D4
    addi r3, r1, 0x8
lbl_fn_80013558_000038D4:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_80013558_00003920
lbl_fn_80013558_000038E0:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r17, r0
    bge lbl_fn_80013558_0000391C
    addi r3, r17, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80013558_00003910
    addi r3, r1, 0x8
lbl_fn_80013558_00003910:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_80013558_00003920
lbl_fn_80013558_0000391C:
    subi r17, r27, 0x1
lbl_fn_80013558_00003920:
    subi r0, r27, 0x1
    cmplw r17, r0
    ble lbl_fn_80013558_0000394C
    lis r3, lbl_8072F924@ha
    addi r4, r3, lbl_8072F924@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013558_0000394C:
    slwi r3, r17, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_80013558_00003980
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013558_00003980:
    lwz r0, 0x180(r15)
    lwz r3, 0x4c(r1)
    slwi r6, r0, 2
    lwzx r7, r18, r30
    addi r5, r3, 0x1
    slwi r4, r3, 2
    add r3, r21, r6
    stw r17, 0x50(r1)
    stwx r7, r4, r3
    lwz r3, 0x180(r15)
    lwz r18, 0x17c(r15)
    slwi r3, r3, 2
    stw r5, 0x4c(r1)
    add r3, r18, r3
    mr r4, r18
    subf r3, r18, r3
    srawi r3, r3, 2
    addze r22, r3
    subf r0, r22, r0
    stw r0, 0x58(r1)
    slwi r17, r22, 2
    slwi r0, r0, 2
    mr r5, r17
    add r3, r21, r0
    bl memcpy
    mr r3, r18
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r3, 0x4c(r1)
    addic. r0, r1, 0x48
    lwz r6, 0x184(r15)
    mr r0, r21
    lwz r4, 0x50(r1)
    add r5, r3, r22
    lwz r3, 0x17c(r15)
    stw r4, 0x184(r15)
    stw r6, 0x50(r1)
    stw r0, 0x17c(r15)
    stw r3, 0x48(r1)
    stw r5, 0x180(r15)
    stw r29, 0x4c(r1)
    beq lbl_fn_80013558_00003A3C
    cmpwi r3, 0x0
    beq lbl_fn_80013558_00003A3C
    stw r14, 0x4c(r1)
    bl dtor_80084684
lbl_fn_80013558_00003A3C:
    lwz r3, 0x50(r19)
    bl fn_800DC6B4
    lwz r5, 0x1c(r15)
    mr r4, r3
    lwz r3, 0x48(r5)
    addi r3, r3, 0xb0
    bl fn_800929C0
    lwz r0, 0x1c(r3)
    addi r6, r1, 0x38
    stw r0, 0x20(r1)
    addi r7, r1, 0x28
    lbz r4, 0x20(r1)
    stw r4, 0x74(r1)
    lbz r0, 0x21(r1)
    lfd f0, 0x70(r1)
    stw r0, 0x7c(r1)
    fsubs f1, f0, f30
    lbz r4, 0x22(r1)
    lfd f0, 0x78(r1)
    lbz r0, 0x23(r1)
    stw r4, 0x74(r1)
    fdivs f3, f1, f31
    lfd f1, 0x70(r1)
    stw r0, 0x7c(r1)
    stfs f3, 0x28(r1)
    fsubs f2, f0, f30
    lfd f0, 0x78(r1)
    fsubs f1, f1, f30
    fsubs f0, f0, f30
    fdivs f2, f2, f31
    stfs f2, 0x2c(r1)
    fdivs f1, f1, f31
    stfs f1, 0x30(r1)
    fdivs f0, f0, f31
    stfs f0, 0x34(r1)
    lwz r0, 0x20(r3)
    stw r0, 0x24(r1)
    lbz r3, 0x24(r1)
    stw r3, 0x74(r1)
    lbz r0, 0x25(r1)
    lfd f0, 0x70(r1)
    stw r0, 0x7c(r1)
    fsubs f1, f0, f30
    lbz r3, 0x26(r1)
    lfd f0, 0x78(r1)
    lbz r0, 0x27(r1)
    fsubs f2, f0, f30
    stw r0, 0x7c(r1)
    fdivs f3, f1, f31
    stw r3, 0x74(r1)
    lfd f0, 0x78(r1)
    lfd f1, 0x70(r1)
    stfs f3, 0x38(r1)
    fsubs f1, f1, f30
    fsubs f0, f0, f30
    fdivs f2, f2, f31
    stfs f2, 0x3c(r1)
    fdivs f1, f1, f31
    stfs f1, 0x40(r1)
    fdivs f0, f0, f31
    stfs f0, 0x44(r1)
    lwz r3, 0x1c(r15)
    lwz r0, 0x158(r15)
    lwz r3, 0x48(r3)
    lwz r4, 0x50(r19)
    add r5, r0, r31
    addi r3, r3, 0xb0
    bl fn_80094958
    addi r19, r19, 0x4
    addi r16, r16, 0x1
    addi r31, r31, 0x10
    addi r30, r30, 0x4
lbl_fn_80013558_00003B5C:
    lwz r0, 0x30(r20)
    cmpw r16, r0
    blt lbl_fn_80013558_000034DC
lbl_fn_80013558_00003B68:
    addi r11, r1, 0xd0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    bl _restgpr_14
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80013CAC(void)
{
    nofralloc
    blr
}

asm void fn_80013CB0(void)
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
    beq lbl_fn_80013CB0_00003BD0
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80013CB0_00003BD0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80013CB0_00003BD0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80013D08(void)
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
    beq lbl_fn_80013D08_00003C28
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80013D08_00003C28
    mr r3, r30
    bl dtor_80084684
lbl_fn_80013D08_00003C28:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
