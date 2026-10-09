#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006A900(void);
extern void fn_8009EE30(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5B4(void);
extern void fn_800D2338(void);
extern void fn_800DC12C(void);
extern void fn_80117228(void);
extern void fn_801F4D80(void);
extern void fn_80202118(void);
extern void fn_80239DAC(void);
extern void fn_8036F268(void);
extern void fn_8036FB4C(void);
extern void fn_80373148(void);
extern void fn_803743AC(void);
extern void fn_8037587C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F88(void);
extern void fn_804A62C8(void);
extern void fn_805113EC(void);
extern void fn_80521014(void);
extern void fn_805212C0(void);
extern void fn_8052190C(void);
extern void fn_80521A04(void);
extern void fn_8052C9C8(void);
extern void fn_8052CA70(void);
extern void fn_8052DEF0(void);
extern void fn_80530178(void);
extern void fn_80530330(void);
extern void fn_80530CD4(void);
extern void fn_80530D34(void);
extern void fn_80571630(void);
extern void fn_805AA738(void);
extern void fn_805B8114(void);
extern void fn_805F89F0(void);
extern void fn_805F9160(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075BF1C[];
extern u8 lbl_8075BF40[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D720;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F580;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9F8;
extern u32 lbl_8087FA20;
extern u32 lbl_80887904;
extern u32 lbl_80887908;
extern u32 lbl_8088798C;
extern u32 lbl_80887998;
extern u32 lbl_808879BC;

/* Function declarations */
void fn_8051EC54(void);
void fn_8051EF24(void);
void fn_8051F13C(void);
void fn_8051F7D4(void);
void fn_8051FB80(void);
void fn_8051FD24(void);
void fn_8051FF60(void);
void fn_8052009C(void);
void fn_805201F0(void);
void fn_80520638(void);

asm void fn_8051EC54(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_25
    lbz r0, 0x96(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8051EC54_000002B8
    lis r29, lbl_8075BF40@ha
    li r26, 0x0
    addi r29, r29, lbl_8075BF40@l
    li r30, 0x0
    li r27, 0x0
    b lbl_fn_8051EC54_000000CC
lbl_fn_8051EC54_0000003C:
    lwz r3, 0x50(r31)
    li r4, 0x1
    lfs f1, lbl_80887904
    li r5, 0x1
    lwzx r3, r3, r27
    lfs f2, lbl_80887908
    bl fn_805113EC
    lwz r3, 0x50(r31)
    lwzx r3, r3, r27
    cmpwi r3, 0x0
    beq lbl_fn_8051EC54_000000C0
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051EC54_000000C0
    add r28, r31, r30
    addi r25, r29, 0x29a
    addi r3, r28, 0x19fc
    addi r4, r29, 0x211
    li r5, 0x1
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_8051EC54_000000C0
    addi r3, r1, 0x18
    addi r4, r29, 0x2a4
    addi r5, r28, 0x19fc
    crclr 6
    bl sprintf
    lwz r3, 0x50(r31)
    lwzx r3, r3, r27
    bl fn_80202118
    mr r4, r25
    addi r5, r1, 0x18
    bl fn_801F4D80
lbl_fn_8051EC54_000000C0:
    addi r27, r27, 0x40
    addi r26, r26, 0x1
    addi r30, r30, 0x94
lbl_fn_8051EC54_000000CC:
    lwz r0, 0x4c(r31)
    cmpw r26, r0
    blt lbl_fn_8051EC54_0000003C
    lwz r3, 0x48(r31)
    lwz r0, 0x11f0(r3)
    cmplw r0, r31
    beq lbl_fn_8051EC54_00000100
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
lbl_fn_8051EC54_00000100:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    li r0, 0x4
    li r30, 0x0
    stb r30, 0x96(r31)
    mr r3, r31
    addi r4, r31, 0x19a4
    stw r0, 0x1998(r31)
    stw r0, 0x199c(r31)
    bl fn_805201F0
    stw r30, 0x19a8(r31)
    mr r4, r31
    lwz r6, 0x48(r31)
    li r3, 0x0
    stw r30, 0x19b0(r31)
    lwz r5, 0x3ed0(r31)
    lwz r6, 0x4c(r6)
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8051EC54_00000178
lbl_fn_8051EC54_0000015C:
    lwz r0, 0x3ed8(r4)
    cmpw r6, r0
    bne lbl_fn_8051EC54_0000016C
    b lbl_fn_8051EC54_0000017C
lbl_fn_8051EC54_0000016C:
    addi r4, r4, 0x1c
    addi r3, r3, 0x1
    bdnz lbl_fn_8051EC54_0000015C
lbl_fn_8051EC54_00000178:
    li r3, -0x1
lbl_fn_8051EC54_0000017C:
    cmpwi r3, 0x0
    ble lbl_fn_8051EC54_000001C8
    mr r4, r31
    li r3, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8051EC54_000001C0
lbl_fn_8051EC54_00000198:
    lwz r0, 0x3ed8(r4)
    cmpw r6, r0
    bne lbl_fn_8051EC54_000001B4
    mulli r0, r3, 0x1c
    add r3, r31, r0
    addi r0, r3, 0x3ed4
    b lbl_fn_8051EC54_000001C4
lbl_fn_8051EC54_000001B4:
    addi r4, r4, 0x1c
    addi r3, r3, 0x1
    bdnz lbl_fn_8051EC54_00000198
lbl_fn_8051EC54_000001C0:
    li r0, 0x0
lbl_fn_8051EC54_000001C4:
    cmpwi r0, 0x0
lbl_fn_8051EC54_000001C8:
    lwz r0, 0x19cc(r31)
    mr r5, r31
    lwz r3, 0x19a4(r31)
    li r4, 0x0
    stw r3, 0x19a0(r31)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8051EC54_00000210
lbl_fn_8051EC54_000001E8:
    lwz r0, 0x19d0(r5)
    cmpw r3, r0
    bne lbl_fn_8051EC54_00000204
    mulli r0, r4, 0x94
    add r3, r31, r0
    addi r6, r3, 0x19d0
    b lbl_fn_8051EC54_00000214
lbl_fn_8051EC54_00000204:
    addi r5, r5, 0x94
    addi r4, r4, 0x1
    bdnz lbl_fn_8051EC54_000001E8
lbl_fn_8051EC54_00000210:
    li r6, 0x0
lbl_fn_8051EC54_00000214:
    cmpwi r6, 0x0
    beq lbl_fn_8051EC54_00000288
    lwz r3, 0x18(r6)
    addi r4, r1, 0x8
    addi r5, r31, 0x480c
    lfs f5, 0x4800(r31)
    lfs f3, 0x28(r3)
    lfs f0, 0x18(r3)
    lfs f2, 0x38(r3)
    stfs f0, 0x8(r1)
    lfs f0, 0x4808(r31)
    stfs f3, 0xc(r1)
    frsp f3, f2
    lfs f4, 0x4804(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f0, f3, f0
    lfs f6, 0x480c(r31)
    lfs f3, 0x4810(r31)
    fsubs f5, f6, f5
    stfs f0, 0x4814(r31)
    fsubs f0, f3, f4
    stfs f5, 0x480c(r31)
    stfs f0, 0x4810(r31)
    lwz r0, 0x10(r6)
    stfs f2, 0x10(r1)
    stw r0, 0x19a8(r31)
    stw r0, 0x19b0(r31)
    b lbl_fn_8051EC54_000002A4
lbl_fn_8051EC54_00000288:
    lis r3, lbl_807C7030@ha
    addi r4, r31, 0x480c
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x4814(r31)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_8051EC54_000002A4:
    li r0, 0x0
    stw r0, 0x19b4(r31)
    mr r3, r31
    li r4, 0x1
    bl fn_8052190C
lbl_fn_8051EC54_000002B8:
    addi r11, r1, 0xc0
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8051EF24(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_25
    li r0, 0x1
    li r30, 0x0
    stw r0, 0xd8(r3)
    mr r25, r3
    li r4, 0x1
    stw r30, 0x19b4(r3)
    bl fn_8052190C
    lwz r3, lbl_8087F3C0
    mr r4, r25
    li r5, 0x1
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, 0x1908(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8051EF24_00000330
    bl fn_800D2338
    stw r30, 0x1908(r25)
lbl_fn_8051EF24_00000330:
    lwz r12, 0x0(r25)
    mr r3, r25
    li r4, 0x0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lfs f31, lbl_80887904
    li r30, 0x0
    li r0, 0x1
    stb r0, 0x96(r25)
    addi r28, r1, 0x20
    addi r29, r1, 0x80
    stb r30, 0xd6(r25)
    li r26, 0x0
    li r31, 0x0
    stb r30, 0xd7(r25)
    stw r30, 0xdc(r25)
    stw r30, 0x19a8(r25)
    stw r30, 0x19b0(r25)
    stfs f31, 0x19c0(r25)
    b lbl_fn_8051EF24_000004BC
lbl_fn_8051EF24_00000384:
    add r3, r25, r31
    stfs f31, 0x19f8(r3)
    lwz r0, 0x50(r25)
    add. r27, r0, r30
    beq lbl_fn_8051EF24_000004B0
    lwz r4, 0x8(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8051EF24_000003AC
    mr r0, r4
    b lbl_fn_8051EF24_000003B0
lbl_fn_8051EF24_000003AC:
    li r0, 0x0
lbl_fn_8051EF24_000003B0:
    cmpwi r0, 0x0
    beq lbl_fn_8051EF24_000004B0
    cmpwi r4, 0x0
    beq lbl_fn_8051EF24_000003C4
    b lbl_fn_8051EF24_000003C8
lbl_fn_8051EF24_000003C4:
    li r4, 0x0
lbl_fn_8051EF24_000003C8:
    psq_l f1, 0x30(r4), 0, 0
    addi r3, r1, 0x50
    psq_l f2, 0x38(r4), 0, 0
    psq_l f3, 0x40(r4), 0, 0
    psq_l f4, 0x48(r4), 0, 0
    psq_l f5, 0x50(r4), 0, 0
    psq_l f6, 0x58(r4), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    lfs f8, 0x4c(r1)
    psq_st f1, 0x0(r28), 0, 0
    fmr f1, f31
    psq_st f2, 0x8(r28), 0, 0
    fmr f2, f1
    lfs f0, 0x2c(r1)
    psq_st f4, 0x18(r28), 0, 0
    lfs f7, 0x3c(r1)
    psq_st f3, 0x10(r28), 0, 0
    fmr f3, f1
    psq_st f5, 0x20(r28), 0, 0
    stfs f0, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f31, 0x2c(r1)
    stfs f31, 0x3c(r1)
    stfs f31, 0x4c(r1)
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    bl fn_805F9160
    mr r3, r28
    addi r4, r1, 0x50
    addi r5, r1, 0x80
    bl fn_805F89F0
    psq_l f2, 0x8(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    lfs f8, 0x8(r1)
    psq_st f4, 0x18(r28), 0, 0
    lfs f7, 0xc(r1)
    psq_st f6, 0x28(r28), 0, 0
    lfs f0, 0x10(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    stfs f8, 0x2c(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x4c(r1)
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8051EF24_000004A4
    b lbl_fn_8051EF24_000004A8
lbl_fn_8051EF24_000004A4:
    li r3, 0x0
lbl_fn_8051EF24_000004A8:
    addi r4, r1, 0x20
    bl fn_8009EE30
lbl_fn_8051EF24_000004B0:
    addi r26, r26, 0x1
    addi r31, r31, 0x94
    addi r30, r30, 0x40
lbl_fn_8051EF24_000004BC:
    lwz r0, 0x4c(r25)
    cmpw r26, r0
    blt lbl_fn_8051EF24_00000384
    addi r11, r1, 0xd0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    bl _restgpr_25
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8051F13C(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x170
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    bl _savegpr_25
    lwz r4, 0x1908(r3)
    li r0, 0x4
    stw r0, 0x1998(r3)
    mr r31, r3
    cmpwi r4, 0x0
    stw r0, 0x199c(r3)
    beq lbl_fn_8051F13C_00000538
    mr r3, r4
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x1908(r31)
lbl_fn_8051F13C_00000538:
    li r29, 0x0
    stw r29, 0xd8(r31)
    addi r3, r31, 0x45d4
    li r4, 0x0
    stw r29, 0x3ed0(r31)
    li r5, 0x100
    bl memset
    lfs f0, lbl_80887904
    lis r3, lbl_807C7030@ha
    stw r29, 0x46d4(r31)
    addi r3, r3, lbl_807C7030@l
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    stw r29, 0xdc(r31)
    stw r29, 0x19a8(r31)
    stw r29, 0x19b0(r31)
    stfs f0, 0x19c0(r31)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    lwz r3, 0x48(r31)
    bl fn_80530330
    stw r29, 0x19b4(r31)
    mr r3, r31
    li r4, 0x1
    bl fn_8052190C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x8
    addi r3, r31, 0xe0
    lfs f7, lbl_80887904
    lfs f0, lbl_80887908
    mtctr r0
lbl_fn_8051F13C_000005D4:
    stw r29, 0x8(r3)
    stfs f7, 0x38(r3)
    stfs f7, 0x30(r3)
    stfs f7, 0x2c(r3)
    stfs f7, 0x28(r3)
    stfs f7, 0x24(r3)
    stfs f7, 0x1c(r3)
    stfs f7, 0x18(r3)
    stfs f7, 0x14(r3)
    stfs f7, 0x10(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0xc(r3)
    stb r29, 0x3c(r3)
    stw r29, 0x48(r3)
    stfs f7, 0x78(r3)
    stfs f7, 0x70(r3)
    stfs f7, 0x6c(r3)
    stfs f7, 0x68(r3)
    stfs f7, 0x64(r3)
    stfs f7, 0x5c(r3)
    stfs f7, 0x58(r3)
    stfs f7, 0x54(r3)
    stfs f7, 0x50(r3)
    stfs f0, 0x74(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x4c(r3)
    stb r29, 0x7c(r3)
    stw r29, 0x88(r3)
    stfs f7, 0xb8(r3)
    stfs f7, 0xb0(r3)
    stfs f7, 0xac(r3)
    stfs f7, 0xa8(r3)
    stfs f7, 0xa4(r3)
    stfs f7, 0x9c(r3)
    stfs f7, 0x98(r3)
    stfs f7, 0x94(r3)
    stfs f7, 0x90(r3)
    stfs f0, 0xb4(r3)
    stfs f0, 0xa0(r3)
    stfs f0, 0x8c(r3)
    stb r29, 0xbc(r3)
    stw r29, 0xc8(r3)
    stfs f7, 0xf8(r3)
    stfs f7, 0xf0(r3)
    stfs f7, 0xec(r3)
    stfs f7, 0xe8(r3)
    stfs f7, 0xe4(r3)
    stfs f7, 0xdc(r3)
    stfs f7, 0xd8(r3)
    stfs f7, 0xd4(r3)
    stfs f7, 0xd0(r3)
    stfs f0, 0xf4(r3)
    stfs f0, 0xe0(r3)
    stfs f0, 0xcc(r3)
    stb r29, 0xfc(r3)
    addi r3, r3, 0x100
    bdnz lbl_fn_8051F13C_000005D4
    mr r5, r31
    li r4, 0x0
    li r3, 0x0
    b lbl_fn_8051F13C_000006D8
lbl_fn_8051F13C_000006CC:
    stw r3, 0x19ec(r5)
    addi r5, r5, 0x94
    addi r4, r4, 0x1
lbl_fn_8051F13C_000006D8:
    lwz r0, 0x19cc(r31)
    cmplw r4, r0
    blt lbl_fn_8051F13C_000006CC
    li r0, 0x8
    addi r4, r31, 0x8e0
    lfs f7, lbl_80887904
    li r3, 0x0
    lfs f0, lbl_80887908
    mtctr r0
lbl_fn_8051F13C_000006FC:
    stw r3, 0x8(r4)
    stfs f7, 0x38(r4)
    stfs f7, 0x30(r4)
    stfs f7, 0x2c(r4)
    stfs f7, 0x28(r4)
    stfs f7, 0x24(r4)
    stfs f7, 0x1c(r4)
    stfs f7, 0x18(r4)
    stfs f7, 0x14(r4)
    stfs f7, 0x10(r4)
    stfs f0, 0x34(r4)
    stfs f0, 0x20(r4)
    stfs f0, 0xc(r4)
    stb r3, 0x3c(r4)
    stw r3, 0x48(r4)
    stfs f7, 0x78(r4)
    stfs f7, 0x70(r4)
    stfs f7, 0x6c(r4)
    stfs f7, 0x68(r4)
    stfs f7, 0x64(r4)
    stfs f7, 0x5c(r4)
    stfs f7, 0x58(r4)
    stfs f7, 0x54(r4)
    stfs f7, 0x50(r4)
    stfs f0, 0x74(r4)
    stfs f0, 0x60(r4)
    stfs f0, 0x4c(r4)
    stb r3, 0x7c(r4)
    stw r3, 0x88(r4)
    stfs f7, 0xb8(r4)
    stfs f7, 0xb0(r4)
    stfs f7, 0xac(r4)
    stfs f7, 0xa8(r4)
    stfs f7, 0xa4(r4)
    stfs f7, 0x9c(r4)
    stfs f7, 0x98(r4)
    stfs f7, 0x94(r4)
    stfs f7, 0x90(r4)
    stfs f0, 0xb4(r4)
    stfs f0, 0xa0(r4)
    stfs f0, 0x8c(r4)
    stb r3, 0xbc(r4)
    stw r3, 0xc8(r4)
    stfs f7, 0xf8(r4)
    stfs f7, 0xf0(r4)
    stfs f7, 0xec(r4)
    stfs f7, 0xe8(r4)
    stfs f7, 0xe4(r4)
    stfs f7, 0xdc(r4)
    stfs f7, 0xd8(r4)
    stfs f7, 0xd4(r4)
    stfs f7, 0xd0(r4)
    stfs f0, 0xf4(r4)
    stfs f0, 0xe0(r4)
    stfs f0, 0xcc(r4)
    stb r3, 0xfc(r4)
    addi r4, r4, 0x100
    bdnz lbl_fn_8051F13C_000006FC
    mr r5, r31
    li r4, 0x0
    li r3, 0x0
    b lbl_fn_8051F13C_00000800
lbl_fn_8051F13C_000007F4:
    stw r3, 0x19f0(r5)
    addi r5, r5, 0x94
    addi r4, r4, 0x1
lbl_fn_8051F13C_00000800:
    lwz r0, 0x19cc(r31)
    cmplw r4, r0
    blt lbl_fn_8051F13C_000007F4
    li r0, 0x8
    addi r4, r31, 0x10e0
    lfs f7, lbl_80887904
    li r3, 0x0
    lfs f0, lbl_80887908
    mtctr r0
lbl_fn_8051F13C_00000824:
    stw r3, 0x8(r4)
    stfs f7, 0x38(r4)
    stfs f7, 0x30(r4)
    stfs f7, 0x2c(r4)
    stfs f7, 0x28(r4)
    stfs f7, 0x24(r4)
    stfs f7, 0x1c(r4)
    stfs f7, 0x18(r4)
    stfs f7, 0x14(r4)
    stfs f7, 0x10(r4)
    stfs f0, 0x34(r4)
    stfs f0, 0x20(r4)
    stfs f0, 0xc(r4)
    stb r3, 0x3c(r4)
    stw r3, 0x48(r4)
    stfs f7, 0x78(r4)
    stfs f7, 0x70(r4)
    stfs f7, 0x6c(r4)
    stfs f7, 0x68(r4)
    stfs f7, 0x64(r4)
    stfs f7, 0x5c(r4)
    stfs f7, 0x58(r4)
    stfs f7, 0x54(r4)
    stfs f7, 0x50(r4)
    stfs f0, 0x74(r4)
    stfs f0, 0x60(r4)
    stfs f0, 0x4c(r4)
    stb r3, 0x7c(r4)
    stw r3, 0x88(r4)
    stfs f7, 0xb8(r4)
    stfs f7, 0xb0(r4)
    stfs f7, 0xac(r4)
    stfs f7, 0xa8(r4)
    stfs f7, 0xa4(r4)
    stfs f7, 0x9c(r4)
    stfs f7, 0x98(r4)
    stfs f7, 0x94(r4)
    stfs f7, 0x90(r4)
    stfs f0, 0xb4(r4)
    stfs f0, 0xa0(r4)
    stfs f0, 0x8c(r4)
    stb r3, 0xbc(r4)
    stw r3, 0xc8(r4)
    stfs f7, 0xf8(r4)
    stfs f7, 0xf0(r4)
    stfs f7, 0xec(r4)
    stfs f7, 0xe8(r4)
    stfs f7, 0xe4(r4)
    stfs f7, 0xdc(r4)
    stfs f7, 0xd8(r4)
    stfs f7, 0xd4(r4)
    stfs f7, 0xd0(r4)
    stfs f0, 0xf4(r4)
    stfs f0, 0xe0(r4)
    stfs f0, 0xcc(r4)
    stb r3, 0xfc(r4)
    addi r4, r4, 0x100
    bdnz lbl_fn_8051F13C_00000824
    mr r5, r31
    li r4, 0x0
    li r3, 0x0
    b lbl_fn_8051F13C_00000928
lbl_fn_8051F13C_0000091C:
    stw r3, 0x19f4(r5)
    addi r5, r5, 0x94
    addi r4, r4, 0x1
lbl_fn_8051F13C_00000928:
    lwz r0, 0x19cc(r31)
    cmplw r4, r0
    blt lbl_fn_8051F13C_0000091C
    lfs f0, lbl_80887904
    lis r30, lbl_8075BF40@ha
    stfs f0, 0x18fc(r31)
    addi r30, r30, lbl_8075BF40@l
    li r27, 0x0
    li r29, 0x0
    li r26, 0x0
    b lbl_fn_8051F13C_000009E0
lbl_fn_8051F13C_00000954:
    lwz r3, 0x50(r31)
    li r4, 0x1
    lfs f1, lbl_80887904
    li r5, 0x1
    lwzx r3, r3, r26
    lfs f2, lbl_80887908
    bl fn_805113EC
    lwz r3, 0x50(r31)
    lwzx r3, r3, r26
    cmpwi r3, 0x0
    beq lbl_fn_8051F13C_000009D4
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051F13C_000009D4
    add r3, r31, r29
    addi r28, r30, 0x29a
    addi r3, r3, 0x19fc
    addi r4, r30, 0x211
    li r5, 0x1
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_8051F13C_000009D4
    addi r3, r1, 0xc8
    addi r4, r30, 0x2bc
    crclr 6
    bl sprintf
    lwz r3, 0x50(r31)
    lwzx r3, r3, r26
    bl fn_80202118
    mr r4, r28
    addi r5, r1, 0xc8
    bl fn_801F4D80
lbl_fn_8051F13C_000009D4:
    addi r26, r26, 0x40
    addi r27, r27, 0x1
    addi r29, r29, 0x94
lbl_fn_8051F13C_000009E0:
    lwz r0, 0x4c(r31)
    cmpw r27, r0
    blt lbl_fn_8051F13C_00000954
    lfs f31, lbl_80887904
    li r0, 0x0
    stb r0, 0x96(r31)
    addi r27, r1, 0x38
    frsp f30, f31
    addi r28, r1, 0x98
    li r25, 0x0
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_8051F13C_00000B4C
lbl_fn_8051F13C_00000A14:
    add r3, r31, r30
    stfs f31, 0x19f8(r3)
    lwz r0, 0x50(r31)
    add. r26, r0, r29
    beq lbl_fn_8051F13C_00000B40
    lwz r4, 0x8(r26)
    cmpwi r4, 0x0
    beq lbl_fn_8051F13C_00000A3C
    mr r0, r4
    b lbl_fn_8051F13C_00000A40
lbl_fn_8051F13C_00000A3C:
    li r0, 0x0
lbl_fn_8051F13C_00000A40:
    cmpwi r0, 0x0
    beq lbl_fn_8051F13C_00000B40
    cmpwi r4, 0x0
    beq lbl_fn_8051F13C_00000A54
    b lbl_fn_8051F13C_00000A58
lbl_fn_8051F13C_00000A54:
    li r4, 0x0
lbl_fn_8051F13C_00000A58:
    psq_l f1, 0x30(r4), 0, 0
    addi r3, r1, 0x68
    psq_l f2, 0x38(r4), 0, 0
    psq_l f3, 0x40(r4), 0, 0
    psq_l f4, 0x48(r4), 0, 0
    psq_l f5, 0x50(r4), 0, 0
    psq_l f6, 0x58(r4), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    lfs f8, 0x64(r1)
    psq_st f1, 0x0(r27), 0, 0
    fmr f1, f30
    psq_st f2, 0x8(r27), 0, 0
    fmr f2, f1
    lfs f0, 0x44(r1)
    psq_st f4, 0x18(r27), 0, 0
    lfs f7, 0x54(r1)
    psq_st f3, 0x10(r27), 0, 0
    fmr f3, f1
    psq_st f5, 0x20(r27), 0, 0
    stfs f0, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f31, 0x44(r1)
    stfs f31, 0x54(r1)
    stfs f31, 0x64(r1)
    stfs f30, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f30, 0x1c(r1)
    bl fn_805F9160
    mr r3, r27
    addi r4, r1, 0x68
    addi r5, r1, 0x98
    bl fn_805F89F0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    lfs f8, 0x8(r1)
    psq_st f4, 0x18(r27), 0, 0
    lfs f7, 0xc(r1)
    psq_st f6, 0x28(r27), 0, 0
    lfs f0, 0x10(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    stfs f8, 0x44(r1)
    stfs f7, 0x54(r1)
    stfs f0, 0x64(r1)
    lwz r3, 0x8(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8051F13C_00000B34
    b lbl_fn_8051F13C_00000B38
lbl_fn_8051F13C_00000B34:
    li r3, 0x0
lbl_fn_8051F13C_00000B38:
    addi r4, r1, 0x38
    bl fn_8009EE30
lbl_fn_8051F13C_00000B40:
    addi r25, r25, 0x1
    addi r30, r30, 0x94
    addi r29, r29, 0x40
lbl_fn_8051F13C_00000B4C:
    lwz r0, 0x4c(r31)
    cmpw r25, r0
    blt lbl_fn_8051F13C_00000A14
    addi r11, r1, 0x170
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    bl _restgpr_25
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_8051F7D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    bl fn_80521014
    cmpwi r3, 0x0
    bne lbl_fn_8051F7D4_00000F18
    lbz r0, 0xd5(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8051F7D4_00000BB8
    mr r3, r31
    bl fn_8052009C
    b lbl_fn_8051F7D4_00000F18
lbl_fn_8051F7D4_00000BB8:
    lwz r0, 0x1998(r31)
    cmpwi r0, 0x4
    beq lbl_fn_8051F7D4_00000BF0
    cmpwi r0, 0x5
    beq lbl_fn_8051F7D4_00000C14
    cmpwi r0, 0x0
    beq lbl_fn_8051F7D4_00000D70
    cmpwi r0, 0x1
    beq lbl_fn_8051F7D4_00000D7C
    cmpwi r0, 0x2
    beq lbl_fn_8051F7D4_00000DE8
    cmpwi r0, 0x3
    beq lbl_fn_8051F7D4_00000E48
    b lbl_fn_8051F7D4_00000EC4
lbl_fn_8051F7D4_00000BF0:
    lfs f3, 0x19b8(r31)
    lfs f0, lbl_80887908
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8051F7D4_00000EC4
    mr r3, r31
    li r4, 0x0
    bl fn_8051FB80
    b lbl_fn_8051F7D4_00000EC4
lbl_fn_8051F7D4_00000C14:
    lfs f3, 0x19b8(r31)
    lfs f0, lbl_80887904
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8051F7D4_00000EC4
    lwz r0, 0x19a8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8051F7D4_00000C48
    cmpwi r0, 0x1
    beq lbl_fn_8051F7D4_00000C6C
    cmpwi r0, 0x2
    beq lbl_fn_8051F7D4_00000C78
    b lbl_fn_8051F7D4_00000C80
lbl_fn_8051F7D4_00000C48:
    lwz r0, 0x19b0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8051F7D4_00000C60
    li r0, 0x1f5
    stw r0, 0x19a4(r31)
    b lbl_fn_8051F7D4_00000C80
lbl_fn_8051F7D4_00000C60:
    li r0, 0x1f7
    stw r0, 0x19a4(r31)
    b lbl_fn_8051F7D4_00000C80
lbl_fn_8051F7D4_00000C6C:
    li r0, 0x1f4
    stw r0, 0x19a4(r31)
    b lbl_fn_8051F7D4_00000C80
lbl_fn_8051F7D4_00000C78:
    li r0, 0x1f6
    stw r0, 0x19a4(r31)
lbl_fn_8051F7D4_00000C80:
    lwz r5, 0x19cc(r31)
    mr r4, r31
    lwz r0, 0x19b0(r31)
    li r3, 0x0
    lwz r6, 0x19a4(r31)
    stw r0, 0x19a8(r31)
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8051F7D4_00000CCC
lbl_fn_8051F7D4_00000CA4:
    lwz r0, 0x19d0(r4)
    cmpw r6, r0
    bne lbl_fn_8051F7D4_00000CC0
    mulli r0, r3, 0x94
    add r3, r31, r0
    addi r4, r3, 0x19d0
    b lbl_fn_8051F7D4_00000CD0
lbl_fn_8051F7D4_00000CC0:
    addi r4, r4, 0x94
    addi r3, r3, 0x1
    bdnz lbl_fn_8051F7D4_00000CA4
lbl_fn_8051F7D4_00000CCC:
    li r4, 0x0
lbl_fn_8051F7D4_00000CD0:
    cmpwi r4, 0x0
    beq lbl_fn_8051F7D4_00000D44
    lwz r3, 0x18(r4)
    addi r6, r1, 0x14
    addi r5, r31, 0x480c
    lfs f5, 0x4800(r31)
    lfs f0, 0x28(r3)
    lfs f3, 0x18(r3)
    lfs f2, 0x38(r3)
    stfs f3, 0x14(r1)
    frsp f3, f2
    lfs f4, 0x4804(r31)
    stfs f0, 0x18(r1)
    lfs f0, 0x4808(r31)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f0, f3, f0
    lfs f6, 0x480c(r31)
    lfs f3, 0x4810(r31)
    fsubs f5, f6, f5
    stfs f0, 0x4814(r31)
    fsubs f0, f3, f4
    stfs f5, 0x480c(r31)
    stfs f0, 0x4810(r31)
    lwz r0, 0x10(r4)
    stfs f2, 0x1c(r1)
    stw r0, 0x19a8(r31)
    stw r0, 0x19b0(r31)
    b lbl_fn_8051F7D4_00000D60
lbl_fn_8051F7D4_00000D44:
    lis r4, lbl_807C7030@ha
    addi r3, r31, 0x480c
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x4814(r31)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8051F7D4_00000D60:
    mr r3, r31
    li r4, 0x4
    bl fn_8051FB80
    b lbl_fn_8051F7D4_00000EC4
lbl_fn_8051F7D4_00000D70:
    mr r3, r31
    bl fn_8051FD24
    b lbl_fn_8051F7D4_00000EC4
lbl_fn_8051F7D4_00000D7C:
    lwz r3, 0x1908(r31)
    cmpwi r3, 0x0
    bne lbl_fn_8051F7D4_00000D98
    mr r3, r31
    li r4, 0x0
    bl fn_8051FB80
    b lbl_fn_8051F7D4_00000EC4
lbl_fn_8051F7D4_00000D98:
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8051F7D4_00000EC4
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8051F7D4_00000DC0
    mr r3, r31
    li r4, 0x2
    bl fn_8051FB80
    b lbl_fn_8051F7D4_00000DCC
lbl_fn_8051F7D4_00000DC0:
    mr r3, r31
    li r4, 0x0
    bl fn_8051FB80
lbl_fn_8051F7D4_00000DCC:
    lwz r3, 0x1908(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8051F7D4_00000EC4
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x1908(r31)
    b lbl_fn_8051F7D4_00000EC4
lbl_fn_8051F7D4_00000DE8:
    lwz r3, lbl_8087F580
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8051F7D4_00000E20
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x3
    bl fn_8051FB80
    b lbl_fn_8051F7D4_00000EC4
lbl_fn_8051F7D4_00000E20:
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, 0x199c(r31)
    mr r3, r31
    bl fn_8051FB80
    b lbl_fn_8051F7D4_00000EC4
lbl_fn_8051F7D4_00000E48:
    lfs f4, 0x19c0(r31)
    lfs f3, lbl_80887908
    lfs f0, lbl_808879BC
    fadds f3, f4, f3
    stfs f3, 0x19c0(r31)
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8051F7D4_00000E84
    lfs f0, lbl_80887998
    fcmpo cr0, f3, f0
    bge lbl_fn_8051F7D4_00000E84
    lwz r3, 0x48(r31)
    li r4, 0xf
    bl fn_80530CD4
    b lbl_fn_8051F7D4_00000EC4
lbl_fn_8051F7D4_00000E84:
    lfs f3, lbl_8088798C
    lfs f0, 0x19c0(r31)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8051F7D4_00000EC4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8051F7D4_00000EC4
    lwz r3, 0x5624(r3)
    li r0, 0x12
    stw r0, 0x78(r3)
    lwz r3, lbl_8087F430
    lwz r3, 0x5624(r3)
    bl fn_8006A900
    li r0, 0x1
    stb r0, 0xd5(r31)
lbl_fn_8051F7D4_00000EC4:
    li r0, 0x1
    stb r0, 0xd7(r31)
    li r4, 0x0
    li r5, 0x6
    lwz r3, lbl_8087EF70
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8051F7D4_00000F18
    addi r3, r1, 0x10
    li r4, 0x21
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0xdc(r31)
    addi r0, r3, 0x1
    stw r0, 0xdc(r31)
    cmpwi r0, 0x1
    ble lbl_fn_8051F7D4_00000F18
    li r0, 0x0
    stw r0, 0xdc(r31)
lbl_fn_8051F7D4_00000F18:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8051FB80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x4
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x1998(r3)
    stw r0, 0x199c(r3)
    stw r4, 0x1998(r3)
    beq lbl_fn_8051FB80_00000F80
    cmpwi r4, 0x5
    beq lbl_fn_8051FB80_00000F8C
    cmpwi r4, 0x0
    beq lbl_fn_8051FB80_00000FAC
    cmpwi r4, 0x1
    beq lbl_fn_8051FB80_00000FB8
    cmpwi r4, 0x2
    beq lbl_fn_8051FB80_00001048
    cmpwi r4, 0x3
    beq lbl_fn_8051FB80_0000105C
    b lbl_fn_8051FB80_000010BC
lbl_fn_8051FB80_00000F80:
    li r4, 0x1
    bl fn_8052190C
    b lbl_fn_8051FB80_000010BC
lbl_fn_8051FB80_00000F8C:
    li r4, 0x0
    bl fn_8052190C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_8051FB80_000010BC
lbl_fn_8051FB80_00000FAC:
    lwz r4, 0x19a8(r3)
    bl fn_80521A04
    b lbl_fn_8051FB80_000010BC
lbl_fn_8051FB80_00000FB8:
    lwz r3, 0x1908(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8051FB80_00000FD0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x1908(r31)
lbl_fn_8051FB80_00000FD0:
    lwz r0, 0x3ed0(r31)
    mr r5, r31
    lwz r3, 0x19a4(r31)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8051FB80_00001014
lbl_fn_8051FB80_00000FEC:
    lwz r0, 0x3ed8(r5)
    cmpw r3, r0
    bne lbl_fn_8051FB80_00001008
    mulli r0, r4, 0x1c
    add r3, r31, r0
    addi r3, r3, 0x3ed4
    b lbl_fn_8051FB80_00001018
lbl_fn_8051FB80_00001008:
    addi r5, r5, 0x1c
    addi r4, r4, 0x1
    bdnz lbl_fn_8051FB80_00000FEC
lbl_fn_8051FB80_00001014:
    li r3, 0x0
lbl_fn_8051FB80_00001018:
    cmpwi r3, 0x0
    beq lbl_fn_8051FB80_00001038
    lwz r4, 0x4(r3)
    mr r3, r31
    li r5, 0x0
    bl fn_80571630
    stw r3, 0x1908(r31)
    b lbl_fn_8051FB80_000010BC
lbl_fn_8051FB80_00001038:
    mr r3, r31
    li r4, 0x0
    bl fn_8051FB80
    b lbl_fn_8051FB80_000010BC
lbl_fn_8051FB80_00001048:
    lwz r3, lbl_8087F580
    li r4, 0x0
    li r5, 0x1
    bl fn_804A62C8
    b lbl_fn_8051FB80_000010BC
lbl_fn_8051FB80_0000105C:
    lfs f0, lbl_80887904
    li r0, 0x2
    stw r0, 0xdc(r3)
    stfs f0, 0x19c0(r3)
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8051FB80_00001080
    li r0, 0x0
    stw r0, 0x34c8(r3)
lbl_fn_8051FB80_00001080:
    addi r3, r1, 0x8
    li r4, 0x7
    bl fn_80117228
    lfs f1, lbl_80887904
    addi r3, r1, 0x8
    li r4, 0x37
    bl fn_800CB5B4
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8051FB80_000010B0
    li r0, 0x1
    stw r0, 0x34c8(r3)
lbl_fn_8051FB80_000010B0:
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8051FB80_000010BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8051FD24(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lwz r30, lbl_8087EF70
    bl fn_805212C0
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8051FD24_00001190
    lwz r3, 0x48(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8051FD24_00001128
    bl fn_80530178
    lwz r3, 0x48(r31)
    bl fn_8052C9C8
    b lbl_fn_8051FD24_000012F4
lbl_fn_8051FD24_00001128:
    li r4, 0x0
    bl fn_8052DEF0
    lis r3, lbl_807C7030@ha
    addi r4, r1, 0x24
    addi r3, r3, lbl_807C7030@l
    addi r5, r1, 0x18
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x2c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x20(r1)
    lwz r3, 0x48(r31)
    bl fn_80530330
    addi r3, r1, 0x14
    li r4, 0x8
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    li r0, 0x0
    stw r0, 0xdc(r31)
    mr r3, r31
    li r4, 0x5
    bl fn_8051FB80
    b lbl_fn_8051FD24_000012F4
lbl_fn_8051FD24_00001190:
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8051FD24_000012F4
    lwz r0, 0x3ed0(r31)
    mr r5, r31
    lwz r3, 0x19a4(r31)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8051FD24_000011EC
lbl_fn_8051FD24_000011C4:
    lwz r0, 0x3ed8(r5)
    cmpw r3, r0
    bne lbl_fn_8051FD24_000011E0
    mulli r0, r4, 0x1c
    add r3, r31, r0
    addi r6, r3, 0x3ed4
    b lbl_fn_8051FD24_000011F0
lbl_fn_8051FD24_000011E0:
    addi r5, r5, 0x1c
    addi r4, r4, 0x1
    bdnz lbl_fn_8051FD24_000011C4
lbl_fn_8051FD24_000011EC:
    li r6, 0x0
lbl_fn_8051FD24_000011F0:
    cmpwi r6, 0x0
    beq lbl_fn_8051FD24_000012DC
    lwz r0, 0x8(r6)
    cmpwi r0, 0x2
    bne lbl_fn_8051FD24_000012DC
    lwz r0, 0x4(r6)
    cmpwi r0, 0x1f4
    bge lbl_fn_8051FD24_0000124C
    lwz r3, lbl_8087F430
    lwz r4, 0xc(r6)
    lwz r5, 0x10(r6)
    lwz r6, 0x14(r6)
    bl fn_8037587C
    cmpwi r3, 0x0
    beq lbl_fn_8051FD24_0000123C
    mr r3, r31
    li r4, 0x1
    bl fn_8051FB80
    b lbl_fn_8051FD24_000012C0
lbl_fn_8051FD24_0000123C:
    mr r3, r31
    li r4, 0x2
    bl fn_8051FB80
    b lbl_fn_8051FD24_000012C0
lbl_fn_8051FD24_0000124C:
    subic. r0, r0, 0x1f4
    beq lbl_fn_8051FD24_00001270
    cmpwi r0, 0x1
    beq lbl_fn_8051FD24_0000127C
    cmpwi r0, 0x2
    beq lbl_fn_8051FD24_00001288
    cmpwi r0, 0x3
    beq lbl_fn_8051FD24_00001294
    b lbl_fn_8051FD24_0000129C
lbl_fn_8051FD24_00001270:
    li r0, 0x1
    stw r0, 0x19b0(r31)
    b lbl_fn_8051FD24_0000129C
lbl_fn_8051FD24_0000127C:
    li r0, 0x0
    stw r0, 0x19b0(r31)
    b lbl_fn_8051FD24_0000129C
lbl_fn_8051FD24_00001288:
    li r0, 0x2
    stw r0, 0x19b0(r31)
    b lbl_fn_8051FD24_0000129C
lbl_fn_8051FD24_00001294:
    li r0, 0x0
    stw r0, 0x19b0(r31)
lbl_fn_8051FD24_0000129C:
    mr r3, r31
    li r4, 0x5
    bl fn_8051FB80
    addi r3, r1, 0x10
    li r4, 0x9
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8051FD24_000012C0:
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8051FD24_000012F4
lbl_fn_8051FD24_000012DC:
    addi r3, r1, 0x8
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8051FD24_000012F4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8051FF60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r5, r31
    stw r30, 0x18(r1)
    lwz r0, 0x19cc(r3)
    lwz r6, 0x19a0(r3)
    stw r6, 0x19a4(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8051FF60_0000136C
lbl_fn_8051FF60_00001344:
    lwz r0, 0x19d0(r5)
    cmpw r6, r0
    bne lbl_fn_8051FF60_00001360
    mulli r0, r4, 0x94
    add r4, r3, r0
    addi r7, r4, 0x19d0
    b lbl_fn_8051FF60_00001370
lbl_fn_8051FF60_00001360:
    addi r5, r5, 0x94
    addi r4, r4, 0x1
    bdnz lbl_fn_8051FF60_00001344
lbl_fn_8051FF60_0000136C:
    li r7, 0x0
lbl_fn_8051FF60_00001370:
    cmpwi r7, 0x0
    beq lbl_fn_8051FF60_000013E4
    lwz r4, 0x18(r7)
    addi r5, r1, 0x8
    addi r6, r3, 0x480c
    lfs f5, 0x4800(r3)
    lfs f3, 0x28(r4)
    lfs f0, 0x18(r4)
    lfs f2, 0x38(r4)
    stfs f0, 0x8(r1)
    lfs f0, 0x4808(r3)
    stfs f3, 0xc(r1)
    frsp f3, f2
    lfs f4, 0x4804(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    fsubs f0, f3, f0
    lfs f6, 0x480c(r3)
    lfs f3, 0x4810(r3)
    fsubs f5, f6, f5
    stfs f0, 0x4814(r3)
    fsubs f0, f3, f4
    stfs f5, 0x480c(r3)
    stfs f0, 0x4810(r3)
    lwz r0, 0x10(r7)
    stfs f2, 0x10(r1)
    stw r0, 0x19a8(r3)
    stw r0, 0x19b0(r3)
    b lbl_fn_8051FF60_00001400
lbl_fn_8051FF60_000013E4:
    lis r4, lbl_807C7030@ha
    addi r5, r3, 0x480c
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x4814(r3)
    psq_st f1, 0x0(r5), 0, 0
lbl_fn_8051FF60_00001400:
    li r30, 0x0
    li r0, 0x4
    stb r30, 0xd5(r3)
    li r4, 0x4
    stw r0, 0x1998(r3)
    mr r3, r31
    bl fn_8051FB80
    lfs f0, lbl_80887904
    li r0, 0x1
    stw r30, 0x80(r31)
    stfs f0, 0x19c0(r31)
    stw r0, 0xdc(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8052009C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8052009C_00001584
    lwz r3, 0x48(r3)
    li r4, 0x0
    bl fn_80530D34
    lwz r3, 0x48(r30)
    li r4, 0x0
    bl fn_8052DEF0
    lwz r0, 0x3ed0(r30)
    mr r5, r30
    lwz r3, 0x19a4(r30)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8052009C_000014C8
lbl_fn_8052009C_000014A0:
    lwz r0, 0x3ed8(r5)
    cmpw r3, r0
    bne lbl_fn_8052009C_000014BC
    mulli r0, r4, 0x1c
    add r3, r30, r0
    addi r31, r3, 0x3ed4
    b lbl_fn_8052009C_000014CC
lbl_fn_8052009C_000014BC:
    addi r5, r5, 0x1c
    addi r4, r4, 0x1
    bdnz lbl_fn_8052009C_000014A0
lbl_fn_8052009C_000014C8:
    li r31, 0x0
lbl_fn_8052009C_000014CC:
    lwz r3, 0x48(r30)
    bl fn_80530178
    lwz r3, 0x48(r30)
    bl fn_8052CA70
    lwz r3, lbl_8087F430
    li r0, 0x12
    stw r0, 0x563c(r3)
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8052009C_00001518
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8052009C_00001518
    lwz r3, lbl_8087F430
    lwz r4, 0x18(r31)
    bl fn_8036FB4C
    b lbl_fn_8052009C_00001584
lbl_fn_8052009C_00001518:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8052009C_0000153C
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8052009C_0000153C
    bl fn_805AA738
    lwz r3, lbl_8087F430
    bl fn_803743AC
lbl_fn_8052009C_0000153C:
    li r0, 0x1
    stw r0, 0x8(r1)
    li r8, 0x1
    li r9, 0x0
    lwz r3, lbl_8087F430
    li r10, 0x12
    lwz r4, 0xc(r31)
    lwz r5, 0x10(r31)
    lwz r6, 0x14(r31)
    lwz r7, 0x18(r31)
    bl fn_8036F268
    lwz r3, lbl_8087F430
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8052009C_00001584
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8052009C_00001584:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805201F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r5, 0x48(r3)
    li r0, 0xcd
    lwz r6, 0x4c(r3)
    mr r4, r30
    lwz r9, 0x50(r3)
    stw r0, 0x0(r31)
    lwz r0, 0x3ed0(r30)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805201F0_00001600
lbl_fn_805201F0_000015E8:
    lwz r3, 0x3ed8(r4)
    cmpwi r3, 0xcd
    bne lbl_fn_805201F0_000015F8
    b lbl_fn_805201F0_00001600
lbl_fn_805201F0_000015F8:
    addi r4, r4, 0x1c
    bdnz lbl_fn_805201F0_000015E8
lbl_fn_805201F0_00001600:
    cmpwi r5, 0x2
    bne lbl_fn_805201F0_00001620
    cmpwi r6, 0xf
    beq lbl_fn_805201F0_00001618
    cmpwi r6, 0x37
    bne lbl_fn_805201F0_00001620
lbl_fn_805201F0_00001618:
    li r3, 0x1
    b lbl_fn_805201F0_00001624
lbl_fn_805201F0_00001620:
    li r3, 0x0
lbl_fn_805201F0_00001624:
    cmpwi r3, 0x0
    beq lbl_fn_805201F0_00001680
    mr r4, r30
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805201F0_00001668
lbl_fn_805201F0_00001640:
    lwz r0, 0x3ed8(r4)
    cmpwi r0, 0xc9
    bne lbl_fn_805201F0_0000165C
    mulli r0, r3, 0x1c
    add r3, r30, r0
    addi r0, r3, 0x3ed4
    b lbl_fn_805201F0_0000166C
lbl_fn_805201F0_0000165C:
    addi r4, r4, 0x1c
    addi r3, r3, 0x1
    bdnz lbl_fn_805201F0_00001640
lbl_fn_805201F0_00001668:
    li r0, 0x0
lbl_fn_805201F0_0000166C:
    cmpwi r0, 0x0
    beq lbl_fn_805201F0_000019C8
    li r0, 0xc9
    stw r0, 0x0(r31)
    b lbl_fn_805201F0_000019C8
lbl_fn_805201F0_00001680:
    cmpwi r5, 0x2
    bne lbl_fn_805201F0_000016E4
    cmpwi r6, 0x9
    bne lbl_fn_805201F0_000016E4
    mr r4, r30
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805201F0_000016CC
lbl_fn_805201F0_000016A4:
    lwz r0, 0x3ed8(r4)
    cmpwi r0, 0xcb
    bne lbl_fn_805201F0_000016C0
    mulli r0, r3, 0x1c
    add r3, r30, r0
    addi r0, r3, 0x3ed4
    b lbl_fn_805201F0_000016D0
lbl_fn_805201F0_000016C0:
    addi r4, r4, 0x1c
    addi r3, r3, 0x1
    bdnz lbl_fn_805201F0_000016A4
lbl_fn_805201F0_000016CC:
    li r0, 0x0
lbl_fn_805201F0_000016D0:
    cmpwi r0, 0x0
    beq lbl_fn_805201F0_000019C8
    li r0, 0xcb
    stw r0, 0x0(r31)
    b lbl_fn_805201F0_000019C8
lbl_fn_805201F0_000016E4:
    cmpwi r5, 0x2
    bne lbl_fn_805201F0_00001748
    cmpwi r6, 0x19
    bne lbl_fn_805201F0_00001748
    mr r4, r30
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805201F0_00001730
lbl_fn_805201F0_00001708:
    lwz r0, 0x3ed8(r4)
    cmpwi r0, 0x136
    bne lbl_fn_805201F0_00001724
    mulli r0, r3, 0x1c
    add r3, r30, r0
    addi r0, r3, 0x3ed4
    b lbl_fn_805201F0_00001734
lbl_fn_805201F0_00001724:
    addi r4, r4, 0x1c
    addi r3, r3, 0x1
    bdnz lbl_fn_805201F0_00001708
lbl_fn_805201F0_00001730:
    li r0, 0x0
lbl_fn_805201F0_00001734:
    cmpwi r0, 0x0
    beq lbl_fn_805201F0_000019C8
    li r0, 0x136
    stw r0, 0x0(r31)
    b lbl_fn_805201F0_000019C8
lbl_fn_805201F0_00001748:
    cmpwi r5, 0x2
    bne lbl_fn_805201F0_000017AC
    cmpwi r6, 0x43
    bne lbl_fn_805201F0_000017AC
    mr r4, r30
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805201F0_00001794
lbl_fn_805201F0_0000176C:
    lwz r0, 0x3ed8(r4)
    cmpwi r0, 0x13a
    bne lbl_fn_805201F0_00001788
    mulli r0, r3, 0x1c
    add r3, r30, r0
    addi r0, r3, 0x3ed4
    b lbl_fn_805201F0_00001798
lbl_fn_805201F0_00001788:
    addi r4, r4, 0x1c
    addi r3, r3, 0x1
    bdnz lbl_fn_805201F0_0000176C
lbl_fn_805201F0_00001794:
    li r0, 0x0
lbl_fn_805201F0_00001798:
    cmpwi r0, 0x0
    beq lbl_fn_805201F0_000019C8
    li r0, 0x13a
    stw r0, 0x0(r31)
    b lbl_fn_805201F0_000019C8
lbl_fn_805201F0_000017AC:
    cmpwi r5, 0x2
    bne lbl_fn_805201F0_00001810
    cmpwi r6, 0x1b
    bne lbl_fn_805201F0_00001810
    mr r4, r30
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805201F0_000017F8
lbl_fn_805201F0_000017D0:
    lwz r0, 0x3ed8(r4)
    cmpwi r0, 0x193
    bne lbl_fn_805201F0_000017EC
    mulli r0, r3, 0x1c
    add r3, r30, r0
    addi r0, r3, 0x3ed4
    b lbl_fn_805201F0_000017FC
lbl_fn_805201F0_000017EC:
    addi r4, r4, 0x1c
    addi r3, r3, 0x1
    bdnz lbl_fn_805201F0_000017D0
lbl_fn_805201F0_000017F8:
    li r0, 0x0
lbl_fn_805201F0_000017FC:
    cmpwi r0, 0x0
    beq lbl_fn_805201F0_000019C8
    li r0, 0x193
    stw r0, 0x0(r31)
    b lbl_fn_805201F0_000019C8
lbl_fn_805201F0_00001810:
    cmpwi r5, 0x2
    bne lbl_fn_805201F0_00001874
    cmpwi r6, 0x3
    bne lbl_fn_805201F0_00001874
    mr r4, r30
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805201F0_0000185C
lbl_fn_805201F0_00001834:
    lwz r0, 0x3ed8(r4)
    cmpwi r0, 0xd0
    bne lbl_fn_805201F0_00001850
    mulli r0, r3, 0x1c
    add r3, r30, r0
    addi r0, r3, 0x3ed4
    b lbl_fn_805201F0_00001860
lbl_fn_805201F0_00001850:
    addi r4, r4, 0x1c
    addi r3, r3, 0x1
    bdnz lbl_fn_805201F0_00001834
lbl_fn_805201F0_0000185C:
    li r0, 0x0
lbl_fn_805201F0_00001860:
    cmpwi r0, 0x0
    beq lbl_fn_805201F0_000019C8
    li r0, 0xd0
    stw r0, 0x0(r31)
    b lbl_fn_805201F0_000019C8
lbl_fn_805201F0_00001874:
    cmpwi r5, 0x1
    bne lbl_fn_805201F0_00001958
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_805201F0_00001958
    lwz r5, lbl_8087F8A0
    addi r4, r1, 0x10
    li r0, 0x0
    addi r6, r1, 0x8
    lwz r7, 0x48(r5)
    addi r5, r1, 0xc
    psq_l f1, 0x528(r7), 0, 0
    lfs f2, 0x530(r7)
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r4), 0, 0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_805B8114
    lwz r4, 0x8(r1)
    mr r6, r30
    lwz r3, 0xc(r1)
    li r5, 0x0
    lwz r7, 0x3ed0(r30)
    li r0, 0x5
    b lbl_fn_805201F0_00001938
lbl_fn_805201F0_000018D8:
    li r8, 0x0
    mtctr r0
lbl_fn_805201F0_000018E0:
    lwz r9, 0x3ed4(r6)
    cmpwi r9, 0x0
    beq lbl_fn_805201F0_00001930
    add r9, r9, r8
    lwz r10, 0x6c(r9)
    cmpwi r10, 0x0
    blt lbl_fn_805201F0_00001930
    lwz r9, 0x70(r9)
    cmpwi r9, 0x0
    blt lbl_fn_805201F0_00001930
    cmpw r3, r10
    bne lbl_fn_805201F0_00001928
    cmpw r4, r9
    bne lbl_fn_805201F0_00001928
    mulli r0, r5, 0x1c
    add r3, r30, r0
    addi r3, r3, 0x3ed4
    b lbl_fn_805201F0_00001944
lbl_fn_805201F0_00001928:
    addi r8, r8, 0x8
    bdnz lbl_fn_805201F0_000018E0
lbl_fn_805201F0_00001930:
    addi r6, r6, 0x1c
    addi r5, r5, 0x1
lbl_fn_805201F0_00001938:
    cmplw r5, r7
    blt lbl_fn_805201F0_000018D8
    li r3, 0x0
lbl_fn_805201F0_00001944:
    cmpwi r3, 0x0
    beq lbl_fn_805201F0_000019C8
    lwz r0, 0x4(r3)
    stw r0, 0x0(r31)
    b lbl_fn_805201F0_000019C8
lbl_fn_805201F0_00001958:
    mr r7, r30
    li r10, 0x0
    b lbl_fn_805201F0_000019C0
lbl_fn_805201F0_00001964:
    lwz r3, 0x3ee0(r7)
    cmpw r5, r3
    bne lbl_fn_805201F0_000019B8
    lwz r3, 0x3ee4(r7)
    cmpw r6, r3
    bne lbl_fn_805201F0_000019B8
    lwz r4, 0x3ed8(r7)
    mr r8, r30
    stw r4, 0x0(r31)
    lwz r0, 0x3ed0(r30)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805201F0_000019AC
lbl_fn_805201F0_00001998:
    lwz r3, 0x3ed8(r8)
    cmpw r4, r3
    beq lbl_fn_805201F0_000019AC
    addi r8, r8, 0x1c
    bdnz lbl_fn_805201F0_00001998
lbl_fn_805201F0_000019AC:
    lwz r3, 0x3ee8(r7)
    cmpw r9, r3
    beq lbl_fn_805201F0_000019C8
lbl_fn_805201F0_000019B8:
    addi r7, r7, 0x1c
    addi r10, r10, 0x1
lbl_fn_805201F0_000019C0:
    cmplw r10, r0
    blt lbl_fn_805201F0_00001964
lbl_fn_805201F0_000019C8:
    lwz r31, 0x2c(r1)
    li r3, 0x1
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80520638(void)
{
    nofralloc
    stwu r1, -0x730(r1)
    mflr r0
    stw r0, 0x734(r1)
    addi r11, r1, 0x720
    stfd f31, 0x720(r1)
    psq_st f31, 0x728(r1), 0, 0
    bl _savegpr_21
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0xb0(r1)
    mr r23, r3
    addi r3, r1, 0xc0
    stw r0, 0xb4(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0xb8(r1)
    stw r0, 0xbc(r1)
    stw r0, 0x6e0(r1)
    bl memset
    addi r3, r1, 0x6c0
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xb0
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xb0(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    addi r5, r1, 0x90
    addi r3, r1, 0xb0
    cmplw r5, r3
    li r4, -0x1
    stw r4, 0x88(r1)
    stw r4, 0x8c(r1)
    bge lbl_fn_80520638_00001A9C
    addi r0, r3, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_80520638_00001A9C
lbl_fn_80520638_00001A8C:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_80520638_00001A8C
lbl_fn_80520638_00001A9C:
    lfs f0, lbl_80887904
    li r28, 0x0
    li r27, -0x1
    stw r27, 0x2c(r1)
    addi r3, r23, 0x19c4
    stw r28, 0x30(r1)
    stw r28, 0x34(r1)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_8047059C
    mr r24, r3
    addi r3, r23, 0x19c4
    bl fn_80470580
    lwz r12, 0xb0(r1)
    mr r4, r3
    mr r5, r24
    addi r3, r1, 0xb0
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r29, lbl_8075BF40@ha
    lfs f31, lbl_80887904
    addi r25, r1, 0x11
    lis r30, lbl_8075BF1C@ha
    addi r29, r29, lbl_8075BF40@l
lbl_fn_80520638_00001B08:
    stw r27, 0x2c(r1)
    addi r3, r1, 0xb0
    stw r28, 0x30(r1)
    stw r28, 0x34(r1)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    stfs f31, 0x44(r1)
    bl fn_8005B3CC
    addi r4, r29, 0x2db
    li r5, 0x1
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_80520638_00001E7C
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1c(r1)
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x24(r1)
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x28(r1)
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x20(r1)
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    mr r24, r3
    addi r21, r30, lbl_8075BF1C@l
    li r26, 0x0
lbl_fn_80520638_00001BAC:
    lwz r3, 0x0(r21)
    mr r4, r24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80520638_00001BC4
    b lbl_fn_80520638_00001BD8
lbl_fn_80520638_00001BC4:
    addi r26, r26, 0x1
    addi r21, r21, 0x4
    cmpwi r26, 0x3
    blt lbl_fn_80520638_00001BAC
    li r26, -0x1
lbl_fn_80520638_00001BD8:
    stw r26, 0x2c(r1)
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x30(r1)
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    mr r5, r3
    addi r3, r1, 0x48
    addi r4, r29, 0x2dd
    crclr 6
    bl sprintf
    stw r28, 0x10(r1)
    addi r26, r1, 0x1c
    lbz r31, 0xc(r1)
    li r24, 0x0
    stw r28, 0x14(r1)
    stw r28, 0x18(r1)
lbl_fn_80520638_00001C20:
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80520638_00001C40
    lbz r0, 0x10(r1)
    stb r28, 0x11(r1)
    clrrwi r0, r0, 7
    stb r0, 0x10(r1)
    b lbl_fn_80520638_00001C4C
lbl_fn_80520638_00001C40:
    lwz r3, 0x18(r1)
    stb r28, 0x0(r3)
    stw r28, 0x14(r1)
lbl_fn_80520638_00001C4C:
    addi r3, r1, 0xb0
    bl fn_8005B3CC
    lwz r0, 0x10(r1)
    mr r22, r3
    srwi. r0, r0, 31
    bne lbl_fn_80520638_00001C70
    lbz r0, 0x10(r1)
    clrlwi r21, r0, 25
    b lbl_fn_80520638_00001C74
lbl_fn_80520638_00001C70:
    lwz r21, 0x14(r1)
lbl_fn_80520638_00001C74:
    stb r31, 0x8(r1)
    mr r3, r22
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r22
    addi r3, r1, 0x10
    add r7, r22, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x10(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_80520638_00001CC0
    lbz r0, 0x10(r1)
    clrlwi r0, r0, 25
    b lbl_fn_80520638_00001CC4
lbl_fn_80520638_00001CC0:
    lwz r0, 0x14(r1)
lbl_fn_80520638_00001CC4:
    cmplwi r0, 0x3
    blt lbl_fn_80520638_00001D0C
    cmpwi r3, 0x0
    beq lbl_fn_80520638_00001CDC
    mr r3, r25
    b lbl_fn_80520638_00001CE0
lbl_fn_80520638_00001CDC:
    lwz r3, 0x18(r1)
lbl_fn_80520638_00001CE0:
    bl fn_800DC12C
    lwz r0, 0x10(r1)
    stw r3, 0x6c(r26)
    srwi. r0, r0, 31
    bne lbl_fn_80520638_00001CFC
    mr r3, r25
    b lbl_fn_80520638_00001D00
lbl_fn_80520638_00001CFC:
    lwz r3, 0x18(r1)
lbl_fn_80520638_00001D00:
    addi r3, r3, 0x2
    bl fn_800DC12C
    stw r3, 0x70(r26)
lbl_fn_80520638_00001D0C:
    addi r24, r24, 0x1
    addi r26, r26, 0x8
    cmpwi r24, 0x5
    blt lbl_fn_80520638_00001C20
    lwz r0, 0x19cc(r23)
    mulli r0, r0, 0x94
    add r0, r23, r0
    addic. r5, r0, 0x19d0
    beq lbl_fn_80520638_00001E5C
    lwz r0, 0x1c(r1)
    addi r3, r5, 0x74
    stw r0, 0x0(r5)
    addi r6, r5, 0x94
    cmplw r3, r6
    addi r4, r1, 0x90
    lwz r0, 0x20(r1)
    stw r0, 0x4(r5)
    lwz r0, 0x24(r1)
    stw r0, 0x8(r5)
    lwz r0, 0x28(r1)
    stw r0, 0xc(r5)
    lwz r0, 0x2c(r1)
    stw r0, 0x10(r5)
    lwz r0, 0x30(r1)
    stw r0, 0x14(r5)
    lwz r0, 0x34(r1)
    stw r0, 0x18(r5)
    lwz r0, 0x38(r1)
    stw r0, 0x1c(r5)
    lwz r0, 0x3c(r1)
    stw r0, 0x20(r5)
    lwz r0, 0x40(r1)
    stw r0, 0x24(r5)
    lfs f0, 0x44(r1)
    stfs f0, 0x28(r5)
    lwz r0, 0x4c(r1)
    lwz r7, 0x48(r1)
    stw r7, 0x2c(r5)
    stw r0, 0x30(r5)
    lwz r0, 0x54(r1)
    lwz r7, 0x50(r1)
    stw r7, 0x34(r5)
    stw r0, 0x38(r5)
    lwz r0, 0x5c(r1)
    lwz r7, 0x58(r1)
    stw r7, 0x3c(r5)
    stw r0, 0x40(r5)
    lwz r0, 0x64(r1)
    lwz r7, 0x60(r1)
    stw r7, 0x44(r5)
    stw r0, 0x48(r5)
    lwz r0, 0x6c(r1)
    lwz r7, 0x68(r1)
    stw r7, 0x4c(r5)
    stw r0, 0x50(r5)
    lwz r0, 0x74(r1)
    lwz r7, 0x70(r1)
    stw r7, 0x54(r5)
    stw r0, 0x58(r5)
    lwz r0, 0x7c(r1)
    lwz r7, 0x78(r1)
    stw r7, 0x5c(r5)
    stw r0, 0x60(r5)
    lwz r0, 0x84(r1)
    lwz r7, 0x80(r1)
    stw r7, 0x64(r5)
    stw r0, 0x68(r5)
    lwz r0, 0x88(r1)
    stw r0, 0x6c(r5)
    lwz r0, 0x8c(r1)
    stw r0, 0x70(r5)
    bge lbl_fn_80520638_00001E5C
    addi r0, r6, 0x7
    subf r0, r3, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_80520638_00001E5C
lbl_fn_80520638_00001E40:
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r4)
    addi r4, r4, 0x8
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_80520638_00001E40
lbl_fn_80520638_00001E5C:
    lwz r3, 0x19cc(r23)
    addi r0, r3, 0x1
    stw r0, 0x19cc(r23)
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80520638_00001E7C
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_80520638_00001E7C:
    addi r3, r1, 0xb0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80520638_00001B08
    addi r3, r23, 0x19c4
    bl fn_80473F88
    addi r11, r1, 0x720
    psq_l f31, 0x728(r1), 0, 0
    lfd f31, 0x720(r1)
    bl _restgpr_21
    lwz r0, 0x734(r1)
    mtlr r0
    addi r1, r1, 0x730
    blr
}
