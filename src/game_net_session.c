#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_800119B8(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097E80(void);
extern void fn_800BFAC8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_80129A48(void);
extern void fn_80129A6C(void);
extern void fn_80147A18(void);
extern void fn_80148B38(void);
extern void fn_8016E800(void);
extern void fn_801F3FF8(void);
extern void fn_801F64D0(void);
extern void fn_801F6D7C(void);
extern void fn_801FEE08(void);
extern void fn_80202118(void);
extern void fn_8020787C(void);
extern void fn_80219EB4(void);
extern void fn_80219EBC(void);
extern void fn_8021C6A4(void);
extern void fn_80370174(void);
extern void fn_804446BC(void);
extern void fn_804A4CE4(void);
extern void fn_80565F38(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80686A64(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8073CAA8[];
extern u8 lbl_8073CB8C[];
extern u8 lbl_8073CBEC[];
extern u8 lbl_80782898[];
extern u8 lbl_807828C8[];
extern u8 lbl_8078298C[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7D38[];

/* Small data declarations */
extern u32 lbl_8087DAA0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F120;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_80882B08;
extern u32 lbl_80882B0C;
extern u32 lbl_80882B10;
extern u32 lbl_80882B14;
extern u32 lbl_80882B18;
extern u32 lbl_80882B1C;
extern u32 lbl_80882B20;
extern u32 lbl_80882B24;
extern u32 lbl_80882B28;
extern u32 lbl_80882B2C;
extern u32 lbl_80882B30;

/* Function declarations */
void fn_801E7D78(void);
void fn_801E7EA8(void);
void fn_801E7FD8(void);
void fn_801E7FF8(void);
void fn_801E807C(void);
void fn_801E81DC(void);
void fn_801E8244(void);
void fn_801E8534(void);
void fn_801E8F9C(void);
void fn_801E9164(void);
void fn_801E9168(void);
void fn_801E917C(void);
void fn_801E91A0(void);
void fn_801E91B4(void);
void fn_801E9218(void);
void fn_801E92D4(void);
void fn_801E9398(void);
void fn_801E9464(void);
void fn_801E94D4(void);
void fn_801E9544(void);

asm void fn_801E7D78(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x174(r1)
    stmw r22, 0x148(r1)
    mr r22, r3
    mr r23, r4
    mr r24, r5
    beq lbl_fn_801E7D78_0000011C
    bl fn_80202118
    cmpwi r3, 0x0
    bne lbl_fn_801E7D78_00000034
    b lbl_fn_801E7D78_0000011C
lbl_fn_801E7D78_00000034:
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x80
    bl memset
    addi r3, r1, 0xc8
    li r4, 0x0
    li r5, 0x80
    bl memset
    lis r29, lbl_80782898@ha
    addi r28, r1, 0x48
    lis r30, lbl_8073CAA8@ha
    addi r27, r23, 0xc4
    mr r26, r28
    addi r29, r29, lbl_80782898@l
    addi r30, r30, lbl_8073CAA8@l
    li r25, 0x0
lbl_fn_801E7D78_00000074:
    cmpwi r23, 0x0
    bne lbl_fn_801E7D78_0000008C
    mr r3, r28
    addi r4, r29, 0x12
    bl fn_80686A64
    b lbl_fn_801E7D78_000000CC
lbl_fn_801E7D78_0000008C:
    cmpwi r24, 0x0
    bne lbl_fn_801E7D78_000000A4
    mr r3, r28
    addi r4, r29, 0x1e
    bl fn_80686A64
    b lbl_fn_801E7D78_000000CC
lbl_fn_801E7D78_000000A4:
    cmpwi r27, 0x0
    beq lbl_fn_801E7D78_000000C0
    mr r3, r28
    mr r4, r27
    bl fn_8021C6A4
    cmpwi r3, 0x0
    bne lbl_fn_801E7D78_000000CC
lbl_fn_801E7D78_000000C0:
    mr r3, r28
    addi r4, r29, 0x12
    bl fn_80686A64
lbl_fn_801E7D78_000000CC:
    mr r5, r25
    addi r3, r1, 0x8
    addi r4, r30, 0xc0
    crclr 6
    bl sprintf
    mr r3, r22
    bl fn_80202118
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r26
    addi r3, r31, 0x58
    bl fn_801FEE08
    addi r25, r25, 0x1
    addi r27, r27, 0x14
    cmpwi r25, 0x2
    addi r26, r26, 0x80
    addi r28, r28, 0x80
    blt lbl_fn_801E7D78_00000074
lbl_fn_801E7D78_0000011C:
    lmw r22, 0x148(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_801E7EA8(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x174(r1)
    stmw r22, 0x148(r1)
    mr r22, r3
    mr r23, r4
    mr r24, r5
    beq lbl_fn_801E7EA8_0000024C
    bl fn_80202118
    cmpwi r3, 0x0
    bne lbl_fn_801E7EA8_00000164
    b lbl_fn_801E7EA8_0000024C
lbl_fn_801E7EA8_00000164:
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x80
    bl memset
    addi r3, r1, 0xc8
    li r4, 0x0
    li r5, 0x80
    bl memset
    lis r29, lbl_80782898@ha
    addi r28, r1, 0x48
    lis r30, lbl_8073CAA8@ha
    addi r27, r23, 0xe4
    mr r26, r28
    addi r29, r29, lbl_80782898@l
    addi r30, r30, lbl_8073CAA8@l
    li r25, 0x0
lbl_fn_801E7EA8_000001A4:
    cmpwi r23, 0x0
    bne lbl_fn_801E7EA8_000001BC
    mr r3, r28
    addi r4, r29, 0x12
    bl fn_80686A64
    b lbl_fn_801E7EA8_000001FC
lbl_fn_801E7EA8_000001BC:
    cmpwi r24, 0x0
    bne lbl_fn_801E7EA8_000001D4
    mr r3, r28
    addi r4, r29, 0x1e
    bl fn_80686A64
    b lbl_fn_801E7EA8_000001FC
lbl_fn_801E7EA8_000001D4:
    cmpwi r27, 0x0
    beq lbl_fn_801E7EA8_000001F0
    mr r3, r28
    mr r4, r27
    bl fn_8021C6A4
    cmpwi r3, 0x0
    bne lbl_fn_801E7EA8_000001FC
lbl_fn_801E7EA8_000001F0:
    mr r3, r28
    addi r4, r29, 0x12
    bl fn_80686A64
lbl_fn_801E7EA8_000001FC:
    mr r5, r25
    addi r3, r1, 0x8
    addi r4, r30, 0xc0
    crclr 6
    bl sprintf
    mr r3, r22
    bl fn_80202118
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r26
    addi r3, r31, 0x58
    bl fn_801FEE08
    addi r25, r25, 0x1
    addi r27, r27, 0x14
    cmpwi r25, 0x2
    addi r26, r26, 0x80
    addi r28, r28, 0x80
    blt lbl_fn_801E7EA8_000001A4
lbl_fn_801E7EA8_0000024C:
    lmw r22, 0x148(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_801E7FD8(void)
{
    nofralloc
    lis r4, lbl_807C7D38@ha
    lfs f1, lbl_80882B08
    addi r3, r4, lbl_807C7D38@l
    lfs f0, lbl_80882B0C
    stfs f1, lbl_807C7D38@l(r4)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

asm void fn_801E7FF8(void)
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
    beq lbl_fn_801E7FF8_000002E4
    lis r5, lbl_8073CB8C@ha
    li r3, 0x4b0
    addi r5, r5, lbl_8073CB8C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801E7FF8_000002E8
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_801E807C
    b lbl_fn_801E7FF8_000002E8
lbl_fn_801E7FF8_000002E4:
    li r3, 0x0
lbl_fn_801E7FF8_000002E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801E807C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800D1D3C
    lfs f3, lbl_80882B10
    lis r3, lbl_807828C8@ha
    lfs f0, lbl_80882B14
    addi r3, r3, lbl_807828C8@l
    stw r3, 0x0(r29)
    addi r3, r29, 0xa4
    li r4, 0x1
    li r5, 0x20
    stfs f3, 0x80(r29)
    stfs f3, 0x84(r29)
    stfs f3, 0x88(r29)
    stfs f3, 0x8c(r29)
    stfs f3, 0x90(r29)
    stfs f3, 0x94(r29)
    stfs f0, 0x98(r29)
    stfs f0, 0x9c(r29)
    stfs f0, 0xa0(r29)
    bl fn_80096E94
    li r0, 0x0
    lis r3, lbl_807C7030@ha
    stw r0, 0x474(r29)
    addi r3, r3, lbl_807C7030@l
    cmpwi r30, 0x0
    lfs f3, lbl_80882B10
    stw r31, 0x4c(r29)
    lfs f0, lbl_80882B14
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x4a8(r29)
    psq_st f1, 0x4a0(r29), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x484(r29)
    psq_st f1, 0x47c(r29), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x490(r29)
    lfs f2, 0x4a8(r29)
    psq_st f1, 0x488(r29), 0, 0
    psq_l f1, 0x4a0(r29), 0, 0
    psq_st f1, 0x494(r29), 0, 0
    stfs f2, 0x49c(r29)
    stw r30, 0x48(r29)
    stfs f3, 0x7c(r29)
    stfs f3, 0x74(r29)
    stfs f3, 0x70(r29)
    stfs f3, 0x6c(r29)
    stfs f3, 0x68(r29)
    stfs f3, 0x60(r29)
    stfs f3, 0x5c(r29)
    stfs f3, 0x58(r29)
    stfs f3, 0x54(r29)
    stfs f0, 0x78(r29)
    stfs f0, 0x64(r29)
    stfs f0, 0x50(r29)
    bne lbl_fn_801E807C_0000042C
    lis r4, lbl_8073CB8C@ha
    mr r3, r29
    addi r4, r4, lbl_8073CB8C@l
    addi r4, r4, 0x1
    bl fn_801F64D0
    stw r3, 0x474(r29)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_801E807C_0000042C:
    lis r4, lbl_8073CB8C@ha
    addi r3, r29, 0xa4
    addi r4, r4, lbl_8073CB8C@l
    li r5, 0x0
    addi r4, r4, 0x1d
    bl fn_8008AD4C
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801E81DC(void)
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
    beq lbl_fn_801E81DC_000004B0
    li r4, -0x1
    addi r3, r3, 0xa4
    bl fn_800971D4
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_801E81DC_000004B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_801E81DC_000004B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801E8244(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_801E8244_00000790
    lwz r3, 0x48(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801E8244_00000740
    li r0, 0x1
    stw r0, 0x3fc(r3)
    lfs f1, lbl_80882B14
    li r4, 0x0
    lwz r3, 0x48(r31)
    li r5, 0x2
    lfs f2, lbl_80882B18
    li r6, 0x1
    stfs f1, 0x2fc(r3)
    li r7, 0x0
    li r8, 0x1
    lwz r3, 0x48(r31)
    stfs f1, 0x2e8(r3)
    lwz r3, 0x48(r31)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r30, 0x48(r31)
    addi r3, r1, 0x14
    psq_l f2, 0x58(r31), 0, 0
    psq_l f3, 0x60(r31), 0, 0
    psq_l f4, 0x68(r31), 0, 0
    psq_l f5, 0x70(r31), 0, 0
    psq_l f6, 0x78(r31), 0, 0
    psq_l f1, 0x50(r31), 0, 0
    psq_st f1, 0xb8(r30), 0, 0
    psq_st f2, 0xc0(r30), 0, 0
    psq_st f3, 0xc8(r30), 0, 0
    psq_st f4, 0xd0(r30), 0, 0
    psq_st f5, 0xd8(r30), 0, 0
    psq_st f6, 0xe0(r30), 0, 0
    lfs f8, 0x78(r31)
    lfs f7, 0x68(r31)
    lfs f0, 0x58(r31)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x74(r31)
    fmr f30, f1
    lfs f7, 0x64(r31)
    addi r3, r1, 0x20
    lfs f0, 0x54(r31)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x70(r31)
    fmr f31, f1
    lfs f7, 0x60(r31)
    addi r3, r1, 0x2c
    lfs f0, 0x50(r31)
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
    ble lbl_fn_801E8244_00000608
    b lbl_fn_801E8244_0000060C
lbl_fn_801E8244_00000608:
    fmr f7, f0
lbl_fn_801E8244_0000060C:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_801E8244_0000061C
    b lbl_fn_801E8244_00000634
lbl_fn_801E8244_0000061C:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_801E8244_00000630
    b lbl_fn_801E8244_00000634
lbl_fn_801E8244_00000630:
    fmr f8, f0
lbl_fn_801E8244_00000634:
    stfs f8, 0x104(r30)
    li r4, 0x1
    lwz r3, 0x48(r31)
    addi r3, r3, 0xb0
    bl fn_80097E80
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x44
    lfs f9, 0x7c(r31)
    lfs f10, 0x6c(r31)
    lfs f11, 0x5c(r31)
    lfs f8, 0x114(r4)
    lfs f7, 0x110(r4)
    lfs f0, 0x10c(r4)
    fsubs f8, f8, f9
    fsubs f7, f7, f10
    stfs f11, 0x38(r1)
    fsubs f0, f0, f11
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f8, 0x4c(r1)
    bl fn_805F9920
    lwz r3, 0x48(r31)
    bl fn_80148B38
    li r0, 0x0
    stw r0, 0x50(r1)
    addi r4, r1, 0x50
    lwz r3, 0x48(r31)
    addi r3, r3, 0xb0
    bl fn_8000D430
    addic. r3, r1, 0x50
    beq lbl_fn_801E8244_000006EC
    lwz r4, 0x50(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801E8244_000006EC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_801E8244_000006E4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801E8244_000006E4:
    li r0, 0x0
    stw r0, 0x50(r1)
lbl_fn_801E8244_000006EC:
    lwz r3, 0x48(r31)
    li r4, 0x0
    bl fn_80147A18
    lwz r30, 0x48(r31)
    li r4, 0x3
    lfs f1, lbl_80882B10
    addi r3, r30, 0xb0
    bl fn_80097CCC
    li r0, -0x1
    stw r0, 0x12bc(r30)
    lfs f0, lbl_80882B10
    lwz r3, 0x48(r31)
    lfs f1, lbl_80882B14
    stfs f0, 0x580(r3)
    stfs f0, 0x584(r3)
    lwz r3, 0x48(r31)
    addi r3, r3, 0x10d8
    bl fn_80129A48
    lwz r3, 0x48(r31)
    addi r3, r3, 0x10d8
    bl fn_80129A6C
lbl_fn_801E8244_00000740:
    lwz r3, 0x474(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801E8244_00000788
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x474(r31)
    li r0, 0x0
    lfs f0, lbl_80882B1C
    stfs f0, 0x54(r3)
    lfs f0, lbl_80882B10
    lwz r3, 0x474(r31)
    stb r0, 0x4d(r3)
    lwz r3, 0x474(r31)
    stfs f0, 0x50(r3)
    lwz r3, 0x474(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_801E8244_00000788:
    li r3, 0x1
    b lbl_fn_801E8244_00000794
lbl_fn_801E8244_00000790:
    li r3, 0x0
lbl_fn_801E8244_00000794:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_801E8534(void)
{
    nofralloc
    stwu r1, -0x480(r1)
    mflr r0
    stw r0, 0x484(r1)
    stfd f31, 0x470(r1)
    psq_st f31, 0x478(r1), 0, 0
    stfd f30, 0x460(r1)
    psq_st f30, 0x468(r1), 0, 0
    stfd f29, 0x450(r1)
    psq_st f29, 0x458(r1), 0, 0
    stfd f28, 0x440(r1)
    psq_st f28, 0x448(r1), 0, 0
    stfd f27, 0x430(r1)
    psq_st f27, 0x438(r1), 0, 0
    stfd f26, 0x420(r1)
    psq_st f26, 0x428(r1), 0, 0
    stfd f25, 0x410(r1)
    psq_st f25, 0x418(r1), 0, 0
    stfd f24, 0x400(r1)
    psq_st f24, 0x408(r1), 0, 0
    stfd f23, 0x3f0(r1)
    psq_st f23, 0x3f8(r1), 0, 0
    stfd f22, 0x3e0(r1)
    psq_st f22, 0x3e8(r1), 0, 0
    stfd f21, 0x3d0(r1)
    psq_st f21, 0x3d8(r1), 0, 0
    stw r31, 0x3cc(r1)
    stw r30, 0x3c8(r1)
    stw r29, 0x3c4(r1)
    lfs f7, 0x4a8(r3)
    addi r4, r1, 0x120
    lfs f11, 0x49c(r3)
    addi r5, r1, 0x114
    lwz r0, 0x48(r3)
    addi r6, r1, 0x108
    fsubs f10, f7, f11
    lfs f25, lbl_80882B20
    lfs f0, 0x4a4(r3)
    cmpwi r0, 0x0
    lfs f23, 0x498(r3)
    mr r31, r3
    fsubs f21, f0, f23
    lfs f0, 0x4a0(r3)
    fmuls f9, f10, f25
    lfs f24, 0x494(r3)
    lfs f7, 0x484(r3)
    fsubs f22, f0, f24
    fadds f0, f9, f11
    lfs f28, 0x490(r3)
    fmuls f8, f21, f25
    lfs f12, 0x480(r3)
    fsubs f29, f7, f28
    lfs f27, 0x48c(r3)
    fmuls f7, f22, f25
    lfs f11, 0x47c(r3)
    fsubs f30, f12, f27
    lfs f26, 0x488(r3)
    fmuls f13, f29, f25
    stfs f22, 0xe4(r1)
    fsubs f31, f11, f26
    stfs f21, 0xe8(r1)
    fmuls f12, f30, f25
    fmr f2, f0
    stfs f10, 0xec(r1)
    fmuls f11, f31, f25
    fadds f25, f8, f23
    stfs f2, 0x49c(r3)
    fadds f23, f7, f24
    fadds f24, f13, f28
    stfs f25, 0x124(r1)
    fadds f22, f12, f27
    fadds f21, f11, f26
    stfs f23, 0x120(r1)
    fmr f2, f24
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x494(r3), 0, 0
    frsp f26, f2
    lfs f10, 0x49c(r3)
    stfs f21, 0x114(r1)
    lfs f27, 0x498(r3)
    fadds f21, f26, f10
    stfs f22, 0x118(r1)
    lfs f10, 0x494(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x488(r3), 0, 0
    lfs f26, 0x48c(r3)
    lfs f28, 0x488(r3)
    fadds f22, f26, f27
    stfs f2, 0x490(r3)
    fadds f10, f28, f10
    fmr f2, f21
    stfs f22, 0x10c(r1)
    stfs f10, 0x108(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f7, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f9, 0xe0(r1)
    stfs f0, 0x128(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f29, 0xd4(r1)
    stfs f11, 0xc0(r1)
    stfs f12, 0xc4(r1)
    stfs f13, 0xc8(r1)
    stfs f24, 0x11c(r1)
    stfs f21, 0x110(r1)
    psq_st f1, 0x80(r3), 0, 0
    stfs f2, 0x88(r3)
    beq lbl_fn_801E8534_00000EFC
    lfs f1, 0x80(r31)
    addi r3, r1, 0x358
    lfs f2, 0x84(r31)
    lfs f3, 0x88(r31)
    bl fn_805F90D0
    addi r3, r1, 0x358
    addi r30, r31, 0x50
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x208
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f7, lbl_80882B10
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, lbl_80882B14
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    stfs f7, 0x234(r1)
    stfs f7, 0x22c(r1)
    stfs f7, 0x228(r1)
    stfs f7, 0x224(r1)
    stfs f7, 0x220(r1)
    stfs f7, 0x218(r1)
    stfs f7, 0x214(r1)
    stfs f7, 0x210(r1)
    stfs f7, 0x20c(r1)
    stfs f0, 0x230(r1)
    stfs f0, 0x21c(r1)
    stfs f0, 0x208(r1)
    lfs f1, 0x90(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_801E8534_00000A50
    addi r3, r1, 0x2f8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x2f8
    addi r5, r1, 0x328
    bl fn_805F89F0
    addi r3, r1, 0x328
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
lbl_fn_801E8534_00000A50:
    lfs f0, lbl_80882B10
    lfs f1, 0x8c(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_801E8534_00000AB0
    addi r3, r1, 0x298
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x298
    addi r5, r1, 0x2c8
    bl fn_805F89F0
    addi r3, r1, 0x2c8
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
lbl_fn_801E8534_00000AB0:
    lfs f0, lbl_80882B10
    lfs f1, 0x94(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_801E8534_00000B10
    addi r3, r1, 0x238
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x238
    addi r5, r1, 0x268
    bl fn_805F89F0
    addi r3, r1, 0x268
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
lbl_fn_801E8534_00000B10:
    mr r3, r30
    mr r4, r29
    addi r5, r1, 0x1d8
    bl fn_805F89F0
    addi r4, r1, 0x1d8
    addi r29, r31, 0x50
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x1a8
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f1, 0x98(r31)
    psq_st f2, 0x8(r30), 0, 0
    lfs f2, 0x9c(r31)
    psq_st f3, 0x10(r30), 0, 0
    lfs f3, 0xa0(r31)
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    bl fn_805F9160
    mr r3, r29
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    addi r4, r1, 0x178
    lwz r30, 0x48(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x9c
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0xb8(r30), 0, 0
    psq_st f2, 0xc0(r30), 0, 0
    psq_st f3, 0xc8(r30), 0, 0
    psq_st f4, 0xd0(r30), 0, 0
    psq_st f5, 0xd8(r30), 0, 0
    psq_st f6, 0xe0(r30), 0, 0
    lfs f8, 0x78(r31)
    lfs f7, 0x68(r31)
    lfs f0, 0x58(r31)
    stfs f0, 0x9c(r1)
    stfs f7, 0xa0(r1)
    stfs f8, 0xa4(r1)
    bl fn_805F9940
    lfs f8, 0x74(r31)
    fmr f30, f1
    lfs f7, 0x64(r31)
    addi r3, r1, 0xa8
    lfs f0, 0x54(r31)
    stfs f0, 0xa8(r1)
    stfs f7, 0xac(r1)
    stfs f8, 0xb0(r1)
    bl fn_805F9940
    lfs f8, 0x70(r31)
    fmr f29, f1
    lfs f7, 0x60(r31)
    addi r3, r1, 0xb4
    lfs f0, 0x50(r31)
    stfs f0, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    bl fn_805F9940
    frsp f7, f29
    stfs f1, 0x90(r1)
    frsp f0, f30
    stfs f29, 0x94(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x98(r1)
    ble lbl_fn_801E8534_00000C54
    b lbl_fn_801E8534_00000C58
lbl_fn_801E8534_00000C54:
    fmr f7, f0
lbl_fn_801E8534_00000C58:
    lfs f8, 0x90(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_801E8534_00000C68
    b lbl_fn_801E8534_00000C80
lbl_fn_801E8534_00000C68:
    lfs f8, 0x94(r1)
    lfs f0, 0x98(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_801E8534_00000C7C
    b lbl_fn_801E8534_00000C80
lbl_fn_801E8534_00000C7C:
    fmr f8, f0
lbl_fn_801E8534_00000C80:
    stfs f8, 0x104(r30)
    li r30, 0x0
    li r4, 0x1
    lwz r5, 0x48(r31)
    lwz r3, 0x100(r5)
    lwz r0, 0x2bc(r5)
    rlwimi r0, r3, 8, 16, 23
    stw r0, 0x2bc(r5)
    stw r30, 0x100(r5)
    lwz r3, 0x48(r31)
    addi r3, r3, 0xb0
    bl fn_80097E80
    stw r30, 0x160(r1)
    addi r4, r1, 0x160
    lwz r3, 0x48(r31)
    addi r3, r3, 0xb0
    bl fn_8000D430
    addic. r3, r1, 0x160
    beq lbl_fn_801E8534_00000D00
    lwz r4, 0x160(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801E8534_00000D00
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_801E8534_00000CF8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801E8534_00000CF8:
    li r0, 0x0
    stw r0, 0x160(r1)
lbl_fn_801E8534_00000D00:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0xfc
    lfs f9, 0x7c(r31)
    lfs f10, 0x6c(r31)
    lfs f11, 0x5c(r31)
    lfs f8, 0x114(r4)
    lfs f7, 0x110(r4)
    lfs f0, 0x10c(r4)
    fsubs f8, f8, f9
    fsubs f7, f7, f10
    stfs f11, 0xf0(r1)
    fsubs f0, f0, f11
    stfs f10, 0xf4(r1)
    stfs f9, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    bl fn_805F9920
    lwz r3, 0x48(r31)
    bl fn_80148B38
    addi r3, r31, 0xa4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_801E8534_00000E98
    psq_l f1, 0x50(r31), 0, 0
    addi r3, r1, 0x6c
    psq_l f2, 0x58(r31), 0, 0
    psq_l f3, 0x60(r31), 0, 0
    psq_l f4, 0x68(r31), 0, 0
    psq_l f5, 0x70(r31), 0, 0
    psq_l f6, 0x78(r31), 0, 0
    psq_st f1, 0xac(r31), 0, 0
    lfs f8, 0x78(r31)
    psq_st f2, 0xb4(r31), 0, 0
    lfs f7, 0x68(r31)
    psq_st f3, 0xbc(r31), 0, 0
    lfs f0, 0x58(r31)
    psq_st f4, 0xc4(r31), 0, 0
    psq_st f5, 0xcc(r31), 0, 0
    psq_st f6, 0xd4(r31), 0, 0
    stfs f0, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f8, 0x74(r1)
    bl fn_805F9940
    lfs f8, 0x74(r31)
    fmr f30, f1
    lfs f7, 0x64(r31)
    addi r3, r1, 0x78
    lfs f0, 0x54(r31)
    stfs f0, 0x78(r1)
    stfs f7, 0x7c(r1)
    stfs f8, 0x80(r1)
    bl fn_805F9940
    lfs f8, 0x70(r31)
    fmr f29, f1
    lfs f7, 0x60(r31)
    addi r3, r1, 0x84
    lfs f0, 0x50(r31)
    stfs f0, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f8, 0x8c(r1)
    bl fn_805F9940
    frsp f7, f29
    stfs f1, 0x60(r1)
    frsp f0, f30
    stfs f29, 0x64(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x68(r1)
    ble lbl_fn_801E8534_00000E18
    b lbl_fn_801E8534_00000E1C
lbl_fn_801E8534_00000E18:
    fmr f7, f0
lbl_fn_801E8534_00000E1C:
    lfs f8, 0x60(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_801E8534_00000E2C
    b lbl_fn_801E8534_00000E44
lbl_fn_801E8534_00000E2C:
    lfs f8, 0x64(r1)
    lfs f0, 0x68(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_801E8534_00000E40
    b lbl_fn_801E8534_00000E44
lbl_fn_801E8534_00000E40:
    fmr f8, f0
lbl_fn_801E8534_00000E44:
    stfs f8, 0xf8(r31)
    li r0, 0x0
    addi r3, r31, 0xa4
    addi r4, r1, 0x14c
    stw r0, 0x14c(r1)
    bl fn_8000D430
    addic. r3, r1, 0x14c
    beq lbl_fn_801E8534_00000E98
    lwz r4, 0x14c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801E8534_00000E98
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_801E8534_00000E90
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801E8534_00000E90:
    li r0, 0x0
    stw r0, 0x14c(r1)
lbl_fn_801E8534_00000E98:
    lfs f7, 0x490(r31)
    addi r3, r1, 0x54
    lfs f0, 0x484(r31)
    lfs f9, 0x48c(r31)
    fsubs f10, f7, f0
    lfs f8, 0x480(r31)
    lfs f7, 0x488(r31)
    lfs f0, 0x47c(r31)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x58(r1)
    stfs f0, 0x54(r1)
    stfs f10, 0x5c(r1)
    bl fn_805F9920
    lfs f0, lbl_80882B24
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_801E8534_00000EF0
    lwz r0, 0x478(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801E8534_00000EFC
lbl_fn_801E8534_00000EF0:
    lwz r3, 0x48(r31)
    li r4, 0x0
    bl fn_8016E800
lbl_fn_801E8534_00000EFC:
    lwz r0, 0x474(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801E8534_000011B0
    lfs f7, 0x490(r31)
    addi r3, r1, 0x48
    lfs f0, 0x484(r31)
    lfs f9, 0x48c(r31)
    fsubs f10, f7, f0
    lfs f8, 0x480(r31)
    lfs f7, 0x488(r31)
    lfs f0, 0x47c(r31)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x4c(r1)
    stfs f0, 0x48(r1)
    stfs f10, 0x50(r1)
    bl fn_805F9920
    lfs f0, lbl_80882B24
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_801E8534_00000F70
    lwz r0, 0x478(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801E8534_00000F70
    lwz r3, 0x474(r31)
    lfs f0, lbl_80882B28
    stfs f0, 0x54(r3)
    b lbl_fn_801E8534_00000F7C
lbl_fn_801E8534_00000F70:
    lwz r3, 0x474(r31)
    lfs f0, lbl_80882B1C
    stfs f0, 0x54(r3)
lbl_fn_801E8534_00000F7C:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x12c
    addi r5, r31, 0x80
    bl fn_800BFAC8
    lfs f0, lbl_80882B2C
    lis r30, lbl_8073CB8C@ha
    stfs f0, 0x130(r1)
    addi r30, r30, lbl_8073CB8C@l
    lwz r7, lbl_8087F580
    addi r3, r1, 0x10
    lfs f7, 0x12c(r1)
    addi r6, r1, 0x8
    psq_l f1, 0x1ec(r7), 0, 0
    addi r4, r30, 0x3b
    psq_st f1, 0x0(r3), 0, 0
    li r5, 0x0
    psq_l f1, 0x1f4(r7), 0, 0
    lfs f0, 0x10(r1)
    psq_st f1, 0x0(r6), 0, 0
    fadds f1, f7, f0
    lwz r3, 0x474(r31)
    bl fn_801F6D7C
    lfs f7, 0x130(r1)
    addi r4, r30, 0x3b
    lfs f0, 0x14(r1)
    li r5, 0x1
    lwz r3, 0x474(r31)
    fadds f1, f7, f0
    bl fn_801F6D7C
    lwz r3, 0x474(r31)
    addi r4, r30, 0x3b
    lfs f1, 0x8(r1)
    li r5, 0x2
    bl fn_801F6D7C
    lwz r3, 0x474(r31)
    addi r4, r30, 0x3b
    lfs f1, 0xc(r1)
    li r5, 0x3
    bl fn_801F6D7C
    lwz r3, 0x474(r31)
    li r5, 0x4
    lwz r4, 0x4c(r31)
    li r6, 0x2
    bl fn_804A4CE4
    addi r3, r31, 0xa4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_801E8534_000011B0
    lfs f10, lbl_80882B10
    addi r4, r1, 0x388
    lfs f9, lbl_80882B14
    addi r3, r1, 0x24
    lfs f8, 0x47c(r31)
    lfs f7, 0x480(r31)
    lfs f0, 0x484(r31)
    stfs f10, 0x3ac(r1)
    stfs f10, 0x3a8(r1)
    psq_l f5, 0x20(r4), 0, 0
    stfs f10, 0x3a0(r1)
    stfs f7, 0x3a4(r1)
    psq_l f4, 0x18(r4), 0, 0
    stfs f10, 0x398(r1)
    stfs f9, 0x39c(r1)
    psq_l f3, 0x10(r4), 0, 0
    stfs f10, 0x390(r1)
    stfs f8, 0x394(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f10, 0x38c(r1)
    stfs f9, 0x388(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x3b0(r1)
    stfs f0, 0x3b4(r1)
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0xac(r31), 0, 0
    psq_st f2, 0xb4(r31), 0, 0
    psq_st f3, 0xbc(r31), 0, 0
    psq_st f4, 0xc4(r31), 0, 0
    psq_st f5, 0xcc(r31), 0, 0
    psq_st f6, 0xd4(r31), 0, 0
    stfs f10, 0x24(r1)
    stfs f10, 0x28(r1)
    stfs f9, 0x2c(r1)
    bl fn_805F9940
    lfs f8, 0x3ac(r1)
    fmr f30, f1
    lfs f7, 0x39c(r1)
    addi r3, r1, 0x30
    lfs f0, 0x38c(r1)
    stfs f0, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f8, 0x38(r1)
    bl fn_805F9940
    lfs f8, 0x3a8(r1)
    fmr f29, f1
    lfs f7, 0x398(r1)
    addi r3, r1, 0x3c
    lfs f0, 0x388(r1)
    stfs f0, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    bl fn_805F9940
    frsp f7, f29
    stfs f1, 0x18(r1)
    frsp f0, f30
    stfs f29, 0x1c(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x20(r1)
    ble lbl_fn_801E8534_00001130
    b lbl_fn_801E8534_00001134
lbl_fn_801E8534_00001130:
    fmr f7, f0
lbl_fn_801E8534_00001134:
    lfs f8, 0x18(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_801E8534_00001144
    b lbl_fn_801E8534_0000115C
lbl_fn_801E8534_00001144:
    lfs f8, 0x1c(r1)
    lfs f0, 0x20(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_801E8534_00001158
    b lbl_fn_801E8534_0000115C
lbl_fn_801E8534_00001158:
    fmr f8, f0
lbl_fn_801E8534_0000115C:
    stfs f8, 0xf8(r31)
    li r0, 0x0
    addi r3, r31, 0xa4
    addi r4, r1, 0x138
    stw r0, 0x138(r1)
    bl fn_8000D430
    addic. r3, r1, 0x138
    beq lbl_fn_801E8534_000011B0
    lwz r4, 0x138(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801E8534_000011B0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_801E8534_000011A8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801E8534_000011A8:
    li r0, 0x0
    stw r0, 0x138(r1)
lbl_fn_801E8534_000011B0:
    lwz r0, 0x484(r1)
    psq_l f31, 0x478(r1), 0, 0
    lfd f31, 0x470(r1)
    psq_l f30, 0x468(r1), 0, 0
    lfd f30, 0x460(r1)
    psq_l f29, 0x458(r1), 0, 0
    lfd f29, 0x450(r1)
    psq_l f28, 0x448(r1), 0, 0
    lfd f28, 0x440(r1)
    psq_l f27, 0x438(r1), 0, 0
    lfd f27, 0x430(r1)
    psq_l f26, 0x428(r1), 0, 0
    lfd f26, 0x420(r1)
    psq_l f25, 0x418(r1), 0, 0
    lfd f25, 0x410(r1)
    psq_l f24, 0x408(r1), 0, 0
    lfd f24, 0x400(r1)
    psq_l f23, 0x3f8(r1), 0, 0
    lfd f23, 0x3f0(r1)
    psq_l f22, 0x3e8(r1), 0, 0
    lfd f22, 0x3e0(r1)
    psq_l f21, 0x3d8(r1), 0, 0
    lfd f21, 0x3d0(r1)
    lwz r31, 0x3cc(r1)
    lwz r30, 0x3c8(r1)
    lwz r29, 0x3c4(r1)
    mtlr r0
    addi r1, r1, 0x480
    blr
}

asm void fn_801E8F9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r0, 0x478(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801E8F9C_00001398
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801E8F9C_00001380
    lwz r0, 0xb4(r3)
    li r30, 0x0
    li r29, 0x0
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0xb4(r3)
    b lbl_fn_801E8F9C_0000129C
lbl_fn_801E8F9C_00001274:
    lwz r3, 0x48(r31)
    addi r3, r3, 0x680
    lwzx r3, r3, r29
    cmpwi r3, 0x0
    beq lbl_fn_801E8F9C_00001294
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x28(r3)
lbl_fn_801E8F9C_00001294:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_801E8F9C_0000129C:
    bl fn_800119B8
    cmplw r30, r3
    blt lbl_fn_801E8F9C_00001274
    lwz r3, 0x48(r31)
    lfs f0, lbl_80882B14
    stfs f0, 0xf0(r3)
    stfs f0, 0xf4(r3)
    stfs f0, 0xf8(r3)
    stfs f0, 0xfc(r3)
    lwz r3, 0x48(r31)
    stfs f0, 0x8(r1)
    addi r3, r3, 0xb0
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_8008CD60
    lwz r3, 0x48(r31)
    li r28, 0x0
    li r30, 0x1
    addi r29, r3, 0x680
lbl_fn_801E8F9C_000012EC:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801E8F9C_00001314
    lwz r4, 0x48(r31)
    slw r5, r30, r28
    lwz r0, 0x6a0(r4)
    and r0, r5, r0
    cmplw r5, r0
    bne lbl_fn_801E8F9C_00001314
    bl fn_80565F38
lbl_fn_801E8F9C_00001314:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmplwi r28, 0x8
    blt lbl_fn_801E8F9C_000012EC
    li r28, 0x0
    li r30, 0x0
lbl_fn_801E8F9C_0000132C:
    lwz r3, 0x48(r31)
    lwz r0, 0x6a4(r3)
    cmpw r28, r0
    bge lbl_fn_801E8F9C_00001348
    add r3, r3, r30
    lwz r3, 0x6a8(r3)
    b lbl_fn_801E8F9C_0000134C
lbl_fn_801E8F9C_00001348:
    li r3, 0x0
lbl_fn_801E8F9C_0000134C:
    cmpwi r3, 0x0
    beq lbl_fn_801E8F9C_00001370
    lwz r0, 0x3dc(r3)
    srawi. r0, r0, 31
    beq lbl_fn_801E8F9C_00001370
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_801E8F9C_00001370:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmplwi r28, 0x4
    blt lbl_fn_801E8F9C_0000132C
lbl_fn_801E8F9C_00001380:
    addi r3, r31, 0xa4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_801E8F9C_00001398
    addi r3, r31, 0xa4
    bl fn_8008CD60
lbl_fn_801E8F9C_00001398:
    lwz r3, 0x474(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801E8F9C_000013CC
    lwz r0, 0x478(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801E8F9C_000013C0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_801E8F9C_000013CC
lbl_fn_801E8F9C_000013C0:
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_801E8F9C_000013CC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801E9164(void)
{
    nofralloc
    blr
}

asm void fn_801E9168(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x484(r3)
    psq_st f1, 0x47c(r3), 0, 0
    blr
}

asm void fn_801E917C(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x490(r3)
    psq_st f1, 0x488(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x484(r3)
    psq_st f1, 0x47c(r3), 0, 0
    blr
}

asm void fn_801E91A0(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x94(r3)
    psq_st f1, 0x8c(r3), 0, 0
    blr
}

asm void fn_801E91B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lfs f1, 0x490(r3)
    lfs f0, 0x484(r3)
    lfs f3, 0x48c(r3)
    fsubs f4, f1, f0
    lfs f2, 0x480(r3)
    lfs f1, 0x488(r3)
    lfs f0, 0x47c(r3)
    fsubs f2, f3, f2
    addi r3, r1, 0x8
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80882B24
    fcmpo cr0, f1, f0
    mfcr r3
    lwz r0, 0x24(r1)
    srwi r3, r3, 31
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801E9218(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800D246C
    lwz r3, 0x48(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801E9218_00001540
    psq_l f1, 0x0(r30), 0, 0
    li r0, 0x1
    lfs f2, 0x8(r30)
    li r4, 0x0
    stfs f2, 0x94(r29)
    li r5, 0x73
    lfs f3, lbl_80882B14
    li r6, 0x0
    psq_st f1, 0x8c(r29), 0, 0
    li r7, 0x1
    lfs f0, lbl_80882B10
    li r8, 0x1
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f2, 0xa0(r29)
    lfs f2, lbl_80882B18
    psq_st f1, 0x98(r29), 0, 0
    fmr f1, f0
    stw r0, 0x3fc(r3)
    lwz r3, 0x48(r29)
    stfs f3, 0x2fc(r3)
    lwz r3, 0x48(r29)
    stfs f0, 0x2e8(r3)
    lwz r3, 0x48(r29)
    addi r3, r3, 0xb0
    bl fn_80097C08
lbl_fn_801E9218_00001540:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801E92D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x24(r1)
    mr r29, r3
    bl fn_800D246C
    lwz r0, 0x38(r29)
    addi r3, r1, 0x14
    lwz r5, 0x48(r29)
    addi r4, r1, 0x8
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
    cmpwi r5, 0x0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    stfs f2, 0x490(r29)
    psq_st f1, 0x488(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f2, 0x1c(r1)
    lfs f2, 0x8(r31)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x47c(r29), 0, 0
    stfs f2, 0x484(r29)
    beq lbl_fn_801E92D4_00001604
    lfs f1, lbl_80882B14
    li r4, 0x0
    stfs f1, 0x2e8(r5)
    li r5, 0x2
    lfs f2, lbl_80882B18
    li r6, 0x1
    lwz r3, 0x48(r29)
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
lbl_fn_801E92D4_00001604:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801E9398(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087F120
    cmpwi r0, 0x0
    bne lbl_fn_801E9398_000016CC
    lis r31, lbl_8073CBEC@ha
    li r3, 0x168
    addi r5, r31, lbl_8073CBEC@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801E9398_000016C8
    mr r4, r29
    bl fn_800D1D3C
    lis r3, lbl_8078298C@ha
    addi r4, r31, lbl_8073CBEC@l
    addi r3, r3, lbl_8078298C@l
    stw r3, 0x0(r30)
    li r5, 0x0
    li r6, 0x1
    stw r5, 0x4c(r30)
    li r0, 0x65
    mr r3, r30
    addi r4, r4, 0x1
    stw r5, 0x150(r30)
    li r5, 0x0
    stw r6, 0x154(r30)
    stw r0, 0x158(r30)
    stw r6, 0x15c(r30)
    stw r6, 0x160(r30)
    bl fn_801F3FF8
    stw r3, 0x48(r30)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_801E9398_000016C8:
    stw r30, lbl_8087F120
lbl_fn_801E9398_000016CC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F120
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801E9464(void)
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
    beq lbl_fn_801E9464_00001740
    lwz r0, lbl_8087F120
    cmpwi r0, 0x0
    beq lbl_fn_801E9464_00001724
    li r0, 0x0
    stw r0, lbl_8087F120
lbl_fn_801E9464_00001724:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_801E9464_00001740
    mr r3, r30
    bl dtor_80084684
lbl_fn_801E9464_00001740:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801E94D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_801E94D4_00001784
    li r3, 0x0
    b lbl_fn_801E94D4_000017B8
lbl_fn_801E94D4_00001784:
    lwz r3, 0x48(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    mr r3, r31
    lfs f0, lbl_80882B30
    stfs f0, 0x104(r4)
    lwz r4, 0x48(r31)
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    bl fn_801E9544
    li r3, 0x1
lbl_fn_801E94D4_000017B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801E9544(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x6d
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    bne lbl_fn_801E9544_00001804
    li r0, 0x65
    stw r0, 0x158(r31)
    b lbl_fn_801E9544_00001818
lbl_fn_801E9544_00001804:
    lwz r0, 0x160(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801E9544_00001818
    li r0, 0x0
    stw r0, 0x150(r31)
lbl_fn_801E9544_00001818:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x4c(r31)
    li r4, 0x64
    stw r0, 0x160(r31)
    lwz r3, lbl_8087F430
    bl fn_80370174
    bl fn_8020787C
    cmpwi r3, 0x0
    beq lbl_fn_801E9544_0000184C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801E9544_0000191C
lbl_fn_801E9544_0000184C:
    lwz r0, 0x4c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x50
    beq lbl_fn_801E9544_00001868
    lwz r0, 0x158(r31)
    stw r0, 0x0(r3)
lbl_fn_801E9544_00001868:
    lwz r3, 0x4c(r31)
    li r27, 0x0
    li r28, 0x0
    li r30, 0x0
    addi r0, r3, 0x1
    stw r0, 0x4c(r31)
    b lbl_fn_801E9544_000018E4
lbl_fn_801E9544_00001884:
    lwz r29, lbl_8087F4F0
    bl fn_80219EB4
    add r4, r3, r28
    mr r3, r29
    lwz r5, 0x4(r4)
    li r4, 0x5
    bl fn_804446BC
    cmpwi r3, 0x0
    beq lbl_fn_801E9544_000018DC
    lwz r0, 0x158(r31)
    cmpw r3, r0
    beq lbl_fn_801E9544_000018DC
    lwz r0, 0x4c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x50
    beq lbl_fn_801E9544_000018CC
    stw r3, 0x0(r4)
lbl_fn_801E9544_000018CC:
    lwz r3, 0x4c(r31)
    stw r30, 0x160(r31)
    addi r0, r3, 0x1
    stw r0, 0x4c(r31)
lbl_fn_801E9544_000018DC:
    addi r28, r28, 0xd0
    addi r27, r27, 0x1
lbl_fn_801E9544_000018E4:
    bl fn_80219EBC
    cmpw r27, r3
    blt lbl_fn_801E9544_00001884
    lwz r0, 0x4c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x50
    beq lbl_fn_801E9544_0000190C
    lwz r0, lbl_8087DAA0
    stw r0, 0x0(r3)
lbl_fn_801E9544_0000190C:
    lwz r3, 0x4c(r31)
    addi r0, r3, 0x1
    stw r0, 0x4c(r31)
    b lbl_fn_801E9544_00001A50
lbl_fn_801E9544_0000191C:
    li r8, 0x0
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_801E9544_00001A28
lbl_fn_801E9544_0000192C:
    lwz r7, 0x8(r3)
    lwz r0, 0x158(r31)
    lwzx r6, r7, r4
    cmpw r0, r6
    bne lbl_fn_801E9544_000019FC
    lwz r8, 0x4c(r31)
    cmpwi r8, 0x0
    beq lbl_fn_801E9544_000019E0
    cmplwi r8, 0x8
    ble lbl_fn_801E9544_000019B8
    subi r0, r8, 0x1
    slwi r6, r8, 2
    srwi r0, r0, 3
    add r6, r31, r6
    mtctr r0
    ble lbl_fn_801E9544_000019B8
lbl_fn_801E9544_0000196C:
    lwz r0, 0x4c(r6)
    subi r8, r8, 0x8
    stw r0, 0x50(r6)
    lwz r0, 0x48(r6)
    stw r0, 0x4c(r6)
    lwz r0, 0x44(r6)
    stw r0, 0x48(r6)
    lwz r0, 0x40(r6)
    stw r0, 0x44(r6)
    lwz r0, 0x3c(r6)
    stw r0, 0x40(r6)
    lwz r0, 0x38(r6)
    stw r0, 0x3c(r6)
    lwz r0, 0x34(r6)
    stw r0, 0x38(r6)
    lwz r0, 0x30(r6)
    stw r0, 0x34(r6)
    subi r6, r6, 0x20
    bdnz lbl_fn_801E9544_0000196C
lbl_fn_801E9544_000019B8:
    slwi r0, r8, 2
    add r6, r31, r0
    mtctr r8
    cmpwi r8, 0x0
    beq lbl_fn_801E9544_000019E0
lbl_fn_801E9544_000019CC:
    lwz r0, 0x4c(r6)
    subi r8, r8, 0x1
    stw r0, 0x50(r6)
    subi r6, r6, 0x4
    bdnz lbl_fn_801E9544_000019CC
lbl_fn_801E9544_000019E0:
    lwz r6, 0x4c(r31)
    li r8, 0x1
    lwzx r0, r7, r4
    stw r0, 0x50(r31)
    addi r0, r6, 0x1
    stw r0, 0x4c(r31)
    b lbl_fn_801E9544_00001A20
lbl_fn_801E9544_000019FC:
    lwz r0, 0x4c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r7, r0, 0x50
    beq lbl_fn_801E9544_00001A14
    stw r6, 0x0(r7)
lbl_fn_801E9544_00001A14:
    lwz r6, 0x4c(r31)
    addi r0, r6, 0x1
    stw r0, 0x4c(r31)
lbl_fn_801E9544_00001A20:
    addi r4, r4, 0x4
    addi r5, r5, 0x1
lbl_fn_801E9544_00001A28:
    lwz r0, 0x4(r3)
    cmplw r5, r0
    blt lbl_fn_801E9544_0000192C
    cmpwi r8, 0x0
    bne lbl_fn_801E9544_00001A50
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801E9544_00001A50
    lwz r0, 0x50(r31)
    stw r0, 0x158(r31)
lbl_fn_801E9544_00001A50:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
