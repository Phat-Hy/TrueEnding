#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_8006FE08(void);
extern void fn_8009FE24(void);
extern void fn_800BB6C0(void);
extern void fn_800BBD90(void);
extern void fn_800BBFE8(void);
extern void fn_800BC328(void);
extern void fn_800C16B4(void);
extern void fn_800C16C0(void);
extern void fn_800C18BC(void);
extern void fn_800C2448(void);
extern void fn_800C289C(void);
extern void fn_800C2C20(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D5808(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_8037E12C(void);
extern void fn_80389884(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F18(void);
extern void fn_80491F94(void);
extern void fn_804963F8(void);
extern void fn_80496414(void);
extern void fn_80496A28(void);
extern void fn_80496B3C(void);
extern void fn_8049D2E4(void);
extern void fn_804A06B4(void);
extern void fn_804A0BCC(void);
extern void fn_804A0F80(void);
extern void fn_805F98D0(void);
extern void fn_80682428(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_80756EC8[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087FA20;
extern u32 lbl_80887160;
extern u32 lbl_80887164;
extern u32 lbl_80887174;
extern u32 lbl_80887178;
extern u32 lbl_8088717C;
extern u32 lbl_80887180;
extern u32 lbl_80887184;
extern u32 lbl_80887188;
extern u32 lbl_8088718C;
extern u32 lbl_80887190;
extern u32 lbl_80887194;
extern u32 lbl_80887198;
extern u32 lbl_8088719C;
extern u32 lbl_808871A0;
extern u32 lbl_808871A4;

/* Function declarations */
void fn_8049EBAC(void);
void fn_8049ED6C(void);
void fn_8049ED90(void);
void fn_8049F4F4(void);
void fn_804A04AC(void);
void fn_804A0580(void);

asm void fn_8049EBAC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r31, r3
    bl fn_804A0F80
    lwz r28, 0xc4(r31)
    cmpwi r28, 0x0
    beq lbl_fn_8049EBAC_0000003C
    lwz r3, 0x108(r31)
    lwz r0, 0x10c(r31)
    cmpw r3, r0
    beq lbl_fn_8049EBAC_0000003C
    b lbl_fn_8049EBAC_00000078
lbl_fn_8049EBAC_0000003C:
    lwz r4, 0x108(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    blt lbl_fn_8049EBAC_0000005C
    lwz r0, 0xa0(r31)
    cmpw r4, r0
    bge lbl_fn_8049EBAC_0000005C
    li r3, 0x1
lbl_fn_8049EBAC_0000005C:
    cmpwi r3, 0x0
    beq lbl_fn_8049EBAC_00000074
    slwi r0, r4, 2
    add r3, r31, r0
    lwz r28, 0xa4(r3)
    b lbl_fn_8049EBAC_00000078
lbl_fn_8049EBAC_00000074:
    li r28, 0x0
lbl_fn_8049EBAC_00000078:
    cmpwi r28, 0x0
    beq lbl_fn_8049EBAC_0000010C
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_8049EBAC_00000100
lbl_fn_8049EBAC_0000008C:
    lwz r3, 0x58(r28)
    li r25, 0x0
    li r29, 0x0
    lwzx r26, r3, r30
    b lbl_fn_8049EBAC_000000EC
lbl_fn_8049EBAC_000000A0:
    lwz r5, 0x308(r26)
    mr r3, r31
    li r4, 0x0
    lwzx r5, r5, r29
    bl fn_804A0BCC
    cmpwi r3, 0x0
    beq lbl_fn_8049EBAC_000000E4
    lwz r0, 0x308(r26)
    add r4, r0, r29
    lfs f0, 0x4(r4)
    stfs f0, 0x90(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x94(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0x98(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x9c(r3)
lbl_fn_8049EBAC_000000E4:
    addi r29, r29, 0x14
    addi r25, r25, 0x1
lbl_fn_8049EBAC_000000EC:
    lwz r0, 0x30c(r26)
    cmplw r25, r0
    blt lbl_fn_8049EBAC_000000A0
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_8049EBAC_00000100:
    lwz r0, 0x5c(r28)
    cmplw r27, r0
    blt lbl_fn_8049EBAC_0000008C
lbl_fn_8049EBAC_0000010C:
    lwz r0, 0xf4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8049EBAC_0000011C
    bl fn_8009FE24
lbl_fn_8049EBAC_0000011C:
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    bne lbl_fn_8049EBAC_000001A8
    lwz r3, lbl_8087EFB4
    lwz r4, 0x2fc(r3)
    lwz r0, 0x74(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8049EBAC_000001A8
    bl fn_800C16B4
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049EBAC_00000164
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049EBAC_0000015C
    b lbl_fn_8049EBAC_00000168
lbl_fn_8049EBAC_0000015C:
    addi r0, r3, 0x78
    b lbl_fn_8049EBAC_00000168
lbl_fn_8049EBAC_00000164:
    li r0, 0x0
lbl_fn_8049EBAC_00000168:
    cmpwi r0, 0x0
    beq lbl_fn_8049EBAC_000001A8
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049EBAC_0000019C
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049EBAC_00000194
    b lbl_fn_8049EBAC_000001A0
lbl_fn_8049EBAC_00000194:
    addi r0, r3, 0x78
    b lbl_fn_8049EBAC_000001A0
lbl_fn_8049EBAC_0000019C:
    li r0, 0x0
lbl_fn_8049EBAC_000001A0:
    mr r3, r0
    bl fn_800C18BC
lbl_fn_8049EBAC_000001A8:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8049ED6C(void)
{
    nofralloc
    lwz r4, lbl_8087F0A8
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x0
    beqlr
    lis r4, 0xff01
    addi r3, r3, 0x88
    subi r4, r4, 0x1
    b fn_8006FE08
    blr
}

asm void fn_8049ED90(void)
{
    nofralloc
    stwu r1, -0x860(r1)
    mflr r0
    stw r0, 0x864(r1)
    addi r11, r1, 0x860
    bl _savegpr_26
    mr r31, r3
    addi r3, r3, 0x58
    bl fn_8047059C
    mr r28, r3
    addi r3, r31, 0x58
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r30, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x210(r1)
    mr r29, r3
    addi r3, r1, 0x220
    stw r30, 0x214(r1)
    li r4, 0x0
    li r5, 0x400
    stw r30, 0x218(r1)
    stw r30, 0x21c(r1)
    stw r30, 0x840(r1)
    bl memset
    addi r3, r1, 0x820
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x210(r1)
    mr r4, r29
    mr r5, r28
    addi r3, r1, 0x210
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x210
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x210(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lwz r0, 0xf4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8049ED90_00000920
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    cmpwi r30, 0x0
    stw r30, 0x74(r3)
    bne lbl_fn_8049ED90_000002B4
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049ED90_000002B8
lbl_fn_8049ED90_000002B4:
    li r30, 0x1
lbl_fn_8049ED90_000002B8:
    stw r30, 0x70(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    li r4, 0x0
    bl fn_800C289C
    lwz r7, lbl_8087EFA8
    li r5, 0x0
    lfs f10, lbl_80887164
    li r6, 0x1
    lfs f9, lbl_80887174
    li r0, 0x3
    lfs f7, lbl_8088717C
    stw r6, 0x54(r7)
    lfs f8, lbl_80887160
    lfs f0, lbl_80887178
    stw r6, 0xf8(r1)
    stw r5, 0xfc(r1)
    stw r0, 0x100(r1)
    stw r0, 0x104(r1)
    stw r6, 0x108(r1)
    stfs f10, 0x10c(r1)
    stfs f9, 0x110(r1)
    stfs f9, 0x114(r1)
    stfs f8, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f10, 0x120(r1)
    stfs f10, 0x128(r1)
    stfs f7, 0x124(r1)
    stfs f7, 0x12c(r1)
    stfs f10, 0x40(r1)
    stfs f10, 0x44(r1)
    stfs f10, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f10, 0x130(r1)
    stfs f10, 0x134(r1)
    stfs f10, 0x138(r1)
    stfs f10, 0x13c(r1)
    stfs f10, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f10, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f10, 0x140(r1)
    stfs f10, 0x144(r1)
    stfs f10, 0x148(r1)
    stfs f10, 0x14c(r1)
    stfs f10, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f10, 0x28(r1)
    stfs f10, 0x2c(r1)
    stfs f10, 0x150(r1)
    stfs f10, 0x154(r1)
    stfs f10, 0x158(r1)
    stfs f10, 0x15c(r1)
    stw r5, 0x160(r1)
    stw r5, 0x164(r1)
    stw r5, 0x168(r1)
    stw r5, 0x16c(r1)
    stw r5, 0x170(r1)
    stw r5, 0x174(r1)
    stw r6, 0x54(r7)
    stw r5, 0x58(r7)
    li r4, 0x140
    lfs f5, lbl_80887190
    li r3, 0xe0
    stw r0, 0x5c(r7)
    lfs f6, lbl_80887180
    stw r0, 0x60(r7)
    lfs f4, lbl_80887184
    stw r6, 0x64(r7)
    lfs f3, lbl_80887188
    stfs f10, 0x68(r7)
    lfs f0, lbl_8088718C
    stfs f9, 0x6c(r7)
    lwz r9, 0x11c(r1)
    stfs f9, 0x70(r7)
    lwz r8, 0x120(r1)
    stfs f8, 0x74(r7)
    lwz r10, 0x124(r1)
    stw r9, 0x78(r7)
    lwz r9, 0x128(r1)
    stw r8, 0x7c(r7)
    lwz r8, 0x12c(r1)
    stw r10, 0x80(r7)
    lwz r10, 0x130(r1)
    stw r9, 0x84(r7)
    lwz r9, 0x134(r1)
    stw r8, 0x88(r7)
    lwz r8, 0x138(r1)
    stw r10, 0x8c(r7)
    lwz r10, 0x13c(r1)
    stw r9, 0x90(r7)
    lwz r9, 0x140(r1)
    stw r8, 0x94(r7)
    lwz r8, 0x144(r1)
    stw r10, 0x98(r7)
    lwz r10, 0x148(r1)
    stw r9, 0x9c(r7)
    lwz r9, 0x14c(r1)
    stw r8, 0xa0(r7)
    lwz r8, 0x150(r1)
    stw r10, 0xa4(r7)
    lwz r10, 0x154(r1)
    stw r9, 0xa8(r7)
    lwz r9, 0x158(r1)
    stw r8, 0xac(r7)
    lwz r8, 0x15c(r1)
    stw r10, 0xb0(r7)
    stw r9, 0xb4(r7)
    stw r8, 0xb8(r7)
    stw r5, 0xbc(r7)
    stw r5, 0xc0(r7)
    stw r5, 0xc4(r7)
    stw r5, 0xc8(r7)
    stw r5, 0xcc(r7)
    stw r5, 0xd0(r7)
    stw r6, 0xd4(r7)
    stw r5, 0xd8(r7)
    stw r5, 0xdc(r7)
    stw r6, 0xe0(r7)
    stfs f6, 0xe4(r7)
    stw r6, 0xc8(r1)
    stw r5, 0xcc(r1)
    stw r5, 0xd0(r1)
    stw r6, 0xd4(r1)
    stfs f6, 0xd8(r1)
    stfs f4, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r3, 0xec(r1)
    stfs f5, 0xf0(r1)
    stfs f5, 0xf4(r1)
    stfs f4, 0xe8(r7)
    stfs f3, 0xec(r7)
    li r8, 0x2
    lfs f3, lbl_80887198
    addi r9, r1, 0x1b0
    stfs f0, 0xf0(r7)
    fmr f2, f8
    lfs f4, lbl_80887194
    stw r4, 0xf4(r7)
    lfs f0, lbl_8088719C
    stw r3, 0xf8(r7)
    stfs f5, 0xfc(r7)
    stfs f5, 0x100(r7)
    stw r5, 0x264(r7)
    stw r5, 0x268(r7)
    stw r8, 0x26c(r7)
    stw r0, 0x270(r7)
    stw r6, 0x274(r7)
    stw r5, 0x278(r7)
    stw r5, 0x27c(r7)
    stfs f4, 0x280(r7)
    stfs f4, 0x284(r7)
    stfs f3, 0x1a0(r1)
    stfs f3, 0x1a4(r1)
    lwz r4, 0x1a0(r1)
    stfs f10, 0x288(r7)
    lwz r3, 0x1a4(r1)
    stw r4, 0x28c(r7)
    stfs f3, 0x1a8(r1)
    stw r3, 0x290(r7)
    lwz r4, 0x1a8(r1)
    stfs f10, 0x1ac(r1)
    stw r4, 0x294(r7)
    lwz r3, 0x1ac(r1)
    stfs f8, 0x1b0(r1)
    stfs f10, 0x1b4(r1)
    stw r3, 0x298(r7)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x29c(r7), 0, 0
    stfs f2, 0x2a4(r7)
    stw r5, 0x178(r1)
    stw r5, 0x17c(r1)
    stw r8, 0x180(r1)
    stw r0, 0x184(r1)
    stw r6, 0x188(r1)
    stw r5, 0x18c(r1)
    stw r5, 0x190(r1)
    stfs f4, 0x194(r1)
    stfs f4, 0x198(r1)
    stfs f10, 0x19c(r1)
    stfs f8, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f0, 0x2a8(r7)
    stw r5, 0x1c0(r1)
    stfs f10, 0x80(r1)
    addi r27, r1, 0x14
    addi r9, r1, 0x80
    lfs f0, lbl_808871A4
    stfs f8, 0x84(r1)
    addi r8, r1, 0x1c4
    addi r11, r1, 0x70
    addi r10, r1, 0x1d4
    psq_l f1, 0x0(r9), 0, 0
    addi r28, r1, 0x60
    stfs f8, 0x70(r1)
    addi r12, r1, 0x1e4
    addi r30, r1, 0x50
    addi r29, r1, 0x1f4
    stfs f10, 0x74(r1)
    addi r26, r1, 0x8
    lfs f3, lbl_808871A0
    mr r3, r27
    psq_st f1, 0x0(r8), 0, 0
    mr r4, r27
    psq_l f1, 0x0(r11), 0, 0
    stfs f8, 0x88(r1)
    stfs f8, 0x8c(r1)
    psq_l f2, 0x8(r9), 0, 0
    stfs f8, 0x60(r1)
    stfs f8, 0x64(r1)
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f8, 0x78(r1)
    stfs f8, 0x7c(r1)
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f8, 0x50(r1)
    stfs f8, 0x54(r1)
    psq_st f1, 0x0(r12), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stw r5, 0x324(r7)
    psq_st f1, 0x328(r7), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f10, 0x68(r1)
    stfs f8, 0x6c(r1)
    psq_st f2, 0x8(r10), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    stfs f8, 0x58(r1)
    stfs f8, 0x5c(r1)
    psq_st f2, 0x8(r12), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f2, 0x330(r7), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    psq_st f1, 0x338(r7), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    psq_st f2, 0x340(r7), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    psq_st f1, 0x348(r7), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f2, 0x350(r7), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_st f1, 0x358(r7), 0, 0
    psq_st f2, 0x360(r7), 0, 0
    fmr f2, f10
    stw r5, 0x368(r7)
    stw r5, 0x36c(r7)
    stfs f10, 0x370(r7)
    lwz r7, lbl_8087EFA8
    stfs f10, 0x8(r1)
    stw r5, 0x3e0(r7)
    stfs f0, 0xc(r1)
    lwz r28, lbl_8087EFA8
    psq_l f1, 0x0(r26), 0, 0
    stw r5, 0x204(r1)
    stw r5, 0x208(r1)
    stfs f10, 0x20c(r1)
    stw r6, 0xa0(r1)
    stw r5, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f7, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f10, 0x10(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0xbc
    psq_l f1, 0x0(r27), 0, 0
    lwz r0, 0xa0(r1)
    stw r0, 0x104(r28)
    lwz r0, 0xa4(r1)
    stw r0, 0x108(r28)
    lfs f0, 0xa8(r1)
    stfs f0, 0x10c(r28)
    lwz r0, 0xac(r1)
    stw r0, 0x110(r28)
    lwz r0, 0xb0(r1)
    stw r0, 0x114(r28)
    lwz r0, 0xb4(r1)
    stw r0, 0x118(r28)
    lwz r0, 0xb8(r1)
    stw r0, 0x11c(r28)
    lfs f3, lbl_80887160
    psq_st f1, 0x120(r28), 0, 0
    lfs f0, lbl_80887164
    stfs f2, 0x128(r28)
    lwz r4, lbl_8087EFA8
    psq_st f1, 0x0(r3), 0, 0
    stfs f3, 0x3c(r4)
    stfs f3, 0x40(r4)
    stfs f3, 0x44(r4)
    stfs f0, 0x48(r4)
    stfs f2, 0xc4(r1)
    lwz r3, 0x48(r31)
    stfs f3, 0x90(r1)
    lwz r4, 0x4c(r31)
    stfs f3, 0x94(r1)
    lwz r5, 0x50(r31)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_8049D2E4
    lwz r4, lbl_8087EFA8
    stw r3, 0x134(r4)
    lwz r0, 0x48(r31)
    lwz r4, 0x50(r31)
    cmpwi r0, 0x1
    lwz r3, 0x4c(r31)
    bne lbl_fn_8049ED90_000007B0
    li r4, 0x0
    b lbl_fn_8049ED90_000007F4
lbl_fn_8049ED90_000007B0:
    cmpwi r0, 0x2
    bne lbl_fn_8049ED90_000007F0
    cmpwi r3, 0x4
    bne lbl_fn_8049ED90_000007D0
    cmpwi r4, 0x3
    bne lbl_fn_8049ED90_000007D0
    li r4, 0x1
    b lbl_fn_8049ED90_000007F4
lbl_fn_8049ED90_000007D0:
    cmpwi r3, 0x12
    bne lbl_fn_8049ED90_000007E8
    cmpwi r4, 0x1
    bne lbl_fn_8049ED90_000007E8
    li r4, 0x0
    b lbl_fn_8049ED90_000007F4
lbl_fn_8049ED90_000007E8:
    li r4, 0x1
    b lbl_fn_8049ED90_000007F4
lbl_fn_8049ED90_000007F0:
    li r4, 0x1
lbl_fn_8049ED90_000007F4:
    lwz r3, lbl_8087EFA8
    li r0, 0x2
    lfs f0, lbl_80887160
    li r6, 0x0
    stw r4, 0x398(r3)
    li r5, 0x0
    li r3, 0x1
    lwz r4, lbl_8087EF8C
    stfs f0, 0x2ec(r4)
    stfs f0, 0x2f0(r4)
    stfs f0, 0x2f4(r4)
    stfs f0, 0x2f8(r4)
    mtctr r0
lbl_fn_8049ED90_00000828:
    lwz r4, lbl_8087EFB4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_0000083C
    stw r3, 0x4(r4)
lbl_fn_8049ED90_0000083C:
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_00000854
    stw r3, 0x4(r4)
lbl_fn_8049ED90_00000854:
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_0000086C
    stw r3, 0x4(r4)
lbl_fn_8049ED90_0000086C:
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_00000884
    stw r3, 0x4(r4)
lbl_fn_8049ED90_00000884:
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_0000089C
    stw r3, 0x4(r4)
lbl_fn_8049ED90_0000089C:
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_000008B4
    stw r3, 0x4(r4)
lbl_fn_8049ED90_000008B4:
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_000008CC
    stw r3, 0x4(r4)
lbl_fn_8049ED90_000008CC:
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_000008E4
    stw r3, 0x4(r4)
lbl_fn_8049ED90_000008E4:
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_000008FC
    stw r3, 0x4(r4)
lbl_fn_8049ED90_000008FC:
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x4
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8049ED90_00000914
    stw r3, 0x4(r4)
lbl_fn_8049ED90_00000914:
    addi r5, r5, 0x4
    addi r6, r6, 0x9
    bdnz lbl_fn_8049ED90_00000828
lbl_fn_8049ED90_00000920:
    mr r3, r31
    addi r4, r1, 0x210
    li r5, 0x0
    bl fn_8049F4F4
    addi r11, r1, 0x860
    bl _restgpr_26
    lwz r0, 0x864(r1)
    mtlr r0
    addi r1, r1, 0x860
    blr
}

asm void fn_8049F4F4(void)
{
    nofralloc
    stwu r1, -0x350(r1)
    mflr r0
    stw r0, 0x354(r1)
    addi r11, r1, 0x250
    stfd f31, 0x340(r1)
    psq_st f31, 0x348(r1), 0, 0
    stfd f30, 0x330(r1)
    psq_st f30, 0x338(r1), 0, 0
    stfd f29, 0x320(r1)
    psq_st f29, 0x328(r1), 0, 0
    stfd f28, 0x310(r1)
    psq_st f28, 0x318(r1), 0, 0
    stfd f27, 0x300(r1)
    psq_st f27, 0x308(r1), 0, 0
    stfd f26, 0x2f0(r1)
    psq_st f26, 0x2f8(r1), 0, 0
    stfd f25, 0x2e0(r1)
    psq_st f25, 0x2e8(r1), 0, 0
    stfd f24, 0x2d0(r1)
    psq_st f24, 0x2d8(r1), 0, 0
    stfd f23, 0x2c0(r1)
    psq_st f23, 0x2c8(r1), 0, 0
    stfd f22, 0x2b0(r1)
    psq_st f22, 0x2b8(r1), 0, 0
    stfd f21, 0x2a0(r1)
    psq_st f21, 0x2a8(r1), 0, 0
    stfd f20, 0x290(r1)
    psq_st f20, 0x298(r1), 0, 0
    stfd f19, 0x280(r1)
    psq_st f19, 0x288(r1), 0, 0
    stfd f18, 0x270(r1)
    psq_st f18, 0x278(r1), 0, 0
    stfd f17, 0x260(r1)
    psq_st f17, 0x268(r1), 0, 0
    stfd f16, 0x250(r1)
    psq_st f16, 0x258(r1), 0, 0
    bl _savegpr_14
    lis r6, lbl_80756EC8@ha
    lwz r25, 0xf4(r3)
    lfs f22, lbl_80887160
    mr r21, r3
    lfs f27, lbl_80887190
    mr r22, r4
    lfs f28, lbl_80887194
    mr r23, r5
    lfs f29, lbl_80887164
    addi r20, r6, lbl_80756EC8@l
    lfs f30, lbl_80887198
    addi r14, r1, 0x8
    lfs f31, lbl_8088719C
    addi r29, r1, 0x98
    addi r28, r1, 0x9c
    li r30, 0x1
    li r31, 0x0
lbl_fn_8049F4F4_00000A20:
    mr r3, r22
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r16, r3
    extsb. r0, r0
    beq lbl_fn_8049F4F4_00001858
    cmpwi r0, 0x23
    beq lbl_fn_8049F4F4_00001858
    addi r4, r20, 0xfb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00000AA4
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00000AA4
    lwz r4, lbl_8087EFB4
    mr r3, r22
    lwz r15, 0x2fc(r4)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r15)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10(r15)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x14(r15)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x18(r15)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00000AA4:
    mr r3, r16
    addi r4, r20, 0x109
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00000B18
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00000B18
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x78(r21)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x7c(r21)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x80(r21)
    lfs f0, 0x78(r21)
    lwz r3, lbl_8087EFA8
    stfs f0, 0x3c(r3)
    lfs f0, 0x7c(r21)
    stfs f0, 0x40(r3)
    lfs f0, 0x80(r21)
    stfs f0, 0x44(r3)
    lfs f0, 0x84(r21)
    stfs f0, 0x48(r3)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00000B18:
    mr r3, r16
    addi r4, r20, 0x115
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00000C18
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00000C18
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x1b0
    lwz r15, 0x2fc(r4)
    bl fn_800C16C0
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f17, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f16, f1
    mr r3, r22
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r15
    bl fn_800C289C
    lwz r0, 0x70(r15)
    stfs f22, 0x10(r1)
    cmpwi r0, 0x0
    stfs f22, 0x14(r1)
    beq lbl_fn_8049F4F4_00000BA4
    lwz r4, 0x74(r15)
    cmpwi r4, 0x0
    beq lbl_fn_8049F4F4_00000B9C
    b lbl_fn_8049F4F4_00000BA8
lbl_fn_8049F4F4_00000B9C:
    addi r4, r15, 0x78
    b lbl_fn_8049F4F4_00000BA8
lbl_fn_8049F4F4_00000BA4:
    li r4, 0x0
lbl_fn_8049F4F4_00000BA8:
    addi r3, r1, 0x10
    stfs f17, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    lwz r0, 0x70(r15)
    stfs f16, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8049F4F4_00000BE0
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049F4F4_00000BD8
    b lbl_fn_8049F4F4_00000BE4
lbl_fn_8049F4F4_00000BD8:
    addi r3, r15, 0x78
    b lbl_fn_8049F4F4_00000BE4
lbl_fn_8049F4F4_00000BE0:
    li r3, 0x0
lbl_fn_8049F4F4_00000BE4:
    psq_l f1, 0x0(r14), 0, 0
    addic. r0, r1, 0x1ec
    psq_st f1, 0xc(r3), 0, 0
    beq lbl_fn_8049F4F4_00001858
    lwz r3, 0x1f0(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8049F4F4_00000C0C
    lis r4, fn_800D5808@ha
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_8049F4F4_00000C0C:
    stw r31, 0x1f0(r1)
    stw r31, 0x1ec(r1)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00000C18:
    mr r3, r16
    addi r4, r20, 0x11e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00000C64
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00000C64
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f16, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    lwz r3, lbl_8087EFA8
    stfs f1, 0x1c4(r3)
    lwz r3, lbl_8087EFA8
    stfs f16, 0x1c0(r3)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00000C64:
    mr r3, r16
    addi r4, r20, 0x12a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00000DE8
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00000DE8
    mr r3, r22
    bl fn_8005B9CC
    addi r4, r20, 0x12e
    bl fn_80682428
    cntlzw r0, r3
    lwz r3, lbl_8087EFA8
    srwi. r4, r0, 5
    stw r4, 0xd4(r3)
    beq lbl_fn_8049F4F4_00001858
    li r0, 0x140
    stw r0, 0x88(r1)
    li r0, 0xe0
    mr r3, r22
    stw r31, 0x6c(r1)
    stw r31, 0x70(r1)
    stw r30, 0x74(r1)
    stw r0, 0x8c(r1)
    stfs f27, 0x90(r1)
    stfs f27, 0x94(r1)
    stw r4, 0x68(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x78(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x7c(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x80(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x84(r1)
    mr r3, r22
    bl fn_8005B9CC
    mr r15, r3
    addi r3, r20, 0x5a
    mr r4, r15
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8049F4F4_00000D48
    mr r3, r15
    bl fn_800DC288
    stfs f1, 0x90(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x94(r1)
lbl_fn_8049F4F4_00000D48:
    mr r3, r22
    bl fn_8005B9CC
    mr r15, r3
    addi r3, r20, 0x5a
    mr r4, r15
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8049F4F4_00000D80
    mr r3, r15
    addi r4, r20, 0x133
    bl fn_80682428
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x74(r1)
lbl_fn_8049F4F4_00000D80:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x68(r1)
    stw r0, 0xd4(r3)
    lwz r0, 0x6c(r1)
    stw r0, 0xd8(r3)
    lwz r0, 0x70(r1)
    stw r0, 0xdc(r3)
    lwz r0, 0x74(r1)
    stw r0, 0xe0(r3)
    lfs f0, 0x78(r1)
    stfs f0, 0xe4(r3)
    lfs f0, 0x7c(r1)
    stfs f0, 0xe8(r3)
    lfs f0, 0x80(r1)
    stfs f0, 0xec(r3)
    lfs f0, 0x84(r1)
    stfs f0, 0xf0(r3)
    lwz r0, 0x88(r1)
    stw r0, 0xf4(r3)
    lwz r0, 0x8c(r1)
    stw r0, 0xf8(r3)
    lfs f0, 0x90(r1)
    stfs f0, 0xfc(r3)
    lfs f0, 0x94(r1)
    stfs f0, 0x100(r3)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00000DE8:
    mr r3, r16
    addi r4, r20, 0x13c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00000EC8
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00000EC8
    lwz r4, lbl_8087EFB4
    mr r3, r22
    lwz r16, 0x2fc(r4)
    bl fn_8005B9CC
    addi r4, r20, 0x140
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8049F4F4_00000EC0
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r15, r3
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f19, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f18, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f17, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f16, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stw r15, 0x3c(r16)
    frsp f4, f17
    frsp f3, f16
    stfs f19, 0x40(r16)
    frsp f0, f1
    stfs f18, 0x44(r16)
    stfs f4, 0x48(r16)
    stfs f3, 0x4c(r16)
    stfs f0, 0x50(r16)
    stfs f17, 0x38(r1)
    stfs f16, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f29, 0x44(r1)
    stfs f29, 0x54(r16)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00000EC0:
    stw r31, 0x3c(r16)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00000EC8:
    mr r3, r16
    addi r4, r20, 0x143
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_000011E8
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_000011E8
    mr r3, r22
    bl fn_8005B9CC
    addi r4, r20, 0x12e
    bl fn_80682428
    cntlzw r0, r3
    lwz r3, lbl_8087EFA8
    srwi. r0, r0, 5
    stw r0, 0x54(r3)
    beq lbl_fn_8049F4F4_00001858
    lwz r3, lbl_8087EFA8
    addi r27, r1, 0x130
    mr r26, r27
    li r24, 0x0
    lwz r15, 0x54(r3)
    lwz r16, 0x58(r3)
    lwz r17, 0x5c(r3)
    lwz r18, 0x60(r3)
    lwz r19, 0x64(r3)
    lfs f19, 0x68(r3)
    lfs f18, 0x6c(r3)
    lfs f17, 0x70(r3)
    lfs f16, 0x74(r3)
    lwz r12, 0x78(r3)
    lwz r11, 0x7c(r3)
    lwz r10, 0x80(r3)
    lwz r9, 0x84(r3)
    lwz r8, 0x88(r3)
    lfs f13, 0x8c(r3)
    lfs f12, 0x90(r3)
    lfs f11, 0x94(r3)
    lfs f10, 0x98(r3)
    lfs f9, 0x9c(r3)
    lfs f8, 0xa0(r3)
    lfs f7, 0xa4(r3)
    lfs f6, 0xa8(r3)
    lfs f5, 0xac(r3)
    lfs f4, 0xb0(r3)
    lfs f3, 0xb4(r3)
    lfs f0, 0xb8(r3)
    lwz r7, 0xbc(r3)
    lwz r6, 0xc0(r3)
    lwz r5, 0xc4(r3)
    lwz r4, 0xc8(r3)
    lwz r0, 0xcc(r3)
    lwz r3, 0xd0(r3)
    stw r15, 0x130(r1)
    stw r16, 0x134(r1)
    stw r17, 0x138(r1)
    stw r18, 0x13c(r1)
    stw r19, 0x140(r1)
    stfs f19, 0x144(r1)
    stfs f18, 0x148(r1)
    stfs f17, 0x14c(r1)
    stfs f16, 0x150(r1)
    stw r12, 0x154(r1)
    stw r11, 0x158(r1)
    stw r10, 0x15c(r1)
    stw r9, 0x160(r1)
    stw r8, 0x164(r1)
    stfs f13, 0x168(r1)
    stfs f12, 0x16c(r1)
    stfs f11, 0x170(r1)
    stfs f10, 0x174(r1)
    stfs f9, 0x178(r1)
    stfs f8, 0x17c(r1)
    stfs f7, 0x180(r1)
    stfs f6, 0x184(r1)
    stfs f5, 0x188(r1)
    stfs f4, 0x18c(r1)
    stfs f3, 0x190(r1)
    stfs f0, 0x194(r1)
    stw r7, 0x198(r1)
    stw r6, 0x19c(r1)
    stw r5, 0x1a0(r1)
    stw r4, 0x1a4(r1)
    stw r0, 0x1a8(r1)
    stw r3, 0x1ac(r1)
lbl_fn_8049F4F4_00001018:
    mr r3, r22
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r20, 0x5a
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8049F4F4_00001094
    addi r3, r22, 0x10
    bl fn_800DC288
    stfs f1, 0x38(r27)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3c(r27)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x40(r27)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC12C
    stw r3, 0x68(r26)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC12C
    addi r24, r24, 0x1
    stw r3, 0x74(r26)
    cmpwi r24, 0x3
    addi r27, r27, 0x10
    addi r26, r26, 0x4
    blt lbl_fn_8049F4F4_00001018
lbl_fn_8049F4F4_00001094:
    mr r3, r22
    bl fn_8005B9CC
    mr r15, r3
    addi r3, r20, 0x5a
    mr r4, r15
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8049F4F4_000010E0
    mr r3, r15
    bl fn_800DC288
    stfs f1, 0x148(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x14c(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x150(r1)
lbl_fn_8049F4F4_000010E0:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x130(r1)
    stw r0, 0x54(r3)
    lwz r0, 0x134(r1)
    stw r0, 0x58(r3)
    lwz r0, 0x138(r1)
    stw r0, 0x5c(r3)
    lwz r0, 0x13c(r1)
    stw r0, 0x60(r3)
    lwz r0, 0x140(r1)
    stw r0, 0x64(r3)
    lfs f0, 0x144(r1)
    stfs f0, 0x68(r3)
    lfs f0, 0x148(r1)
    stfs f0, 0x6c(r3)
    lfs f0, 0x14c(r1)
    stfs f0, 0x70(r3)
    lfs f0, 0x150(r1)
    stfs f0, 0x74(r3)
    lwz r0, 0x154(r1)
    stw r0, 0x78(r3)
    lwz r0, 0x158(r1)
    stw r0, 0x7c(r3)
    lwz r0, 0x15c(r1)
    stw r0, 0x80(r3)
    lwz r0, 0x160(r1)
    stw r0, 0x84(r3)
    lwz r0, 0x164(r1)
    stw r0, 0x88(r3)
    lwz r0, 0x168(r1)
    stw r0, 0x8c(r3)
    lwz r0, 0x16c(r1)
    stw r0, 0x90(r3)
    lwz r0, 0x170(r1)
    stw r0, 0x94(r3)
    lwz r0, 0x174(r1)
    stw r0, 0x98(r3)
    lwz r0, 0x178(r1)
    stw r0, 0x9c(r3)
    lwz r0, 0x17c(r1)
    stw r0, 0xa0(r3)
    lwz r0, 0x180(r1)
    stw r0, 0xa4(r3)
    lwz r0, 0x184(r1)
    stw r0, 0xa8(r3)
    lwz r0, 0x188(r1)
    stw r0, 0xac(r3)
    lwz r0, 0x18c(r1)
    stw r0, 0xb0(r3)
    lwz r0, 0x190(r1)
    stw r0, 0xb4(r3)
    lwz r0, 0x194(r1)
    stw r0, 0xb8(r3)
    lwz r0, 0x198(r1)
    stw r0, 0xbc(r3)
    lwz r0, 0x19c(r1)
    stw r0, 0xc0(r3)
    lwz r0, 0x1a0(r1)
    stw r0, 0xc4(r3)
    lwz r0, 0x1a4(r1)
    stw r0, 0xc8(r3)
    lwz r0, 0x1a8(r1)
    stw r0, 0xcc(r3)
    lwz r0, 0x1ac(r1)
    stw r0, 0xd0(r3)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_000011E8:
    mr r3, r16
    addi r4, r20, 0x149
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_000012F4
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_000012F4
    li r0, 0x2
    stw r0, 0xf0(r1)
    li r0, 0x3
    mr r4, r22
    stw r31, 0xe8(r1)
    addi r3, r1, 0xe8
    stw r31, 0xec(r1)
    stw r0, 0xf4(r1)
    stw r30, 0xf8(r1)
    stw r31, 0xfc(r1)
    stw r31, 0x100(r1)
    stfs f28, 0x104(r1)
    stfs f28, 0x108(r1)
    stfs f29, 0x10c(r1)
    stfs f30, 0x110(r1)
    stfs f30, 0x114(r1)
    stfs f30, 0x118(r1)
    stfs f29, 0x11c(r1)
    stfs f22, 0x120(r1)
    stfs f29, 0x124(r1)
    stfs f22, 0x128(r1)
    stfs f31, 0x12c(r1)
    bl fn_800BB6C0
    lwz r4, lbl_8087EFA8
    lwz r0, 0xe8(r1)
    stw r0, 0x264(r4)
    lwz r0, 0xec(r1)
    stw r0, 0x268(r4)
    lwz r0, 0xf0(r1)
    stw r0, 0x26c(r4)
    lwz r0, 0xf4(r1)
    stw r0, 0x270(r4)
    lwz r0, 0xf8(r1)
    stw r0, 0x274(r4)
    lwz r0, 0xfc(r1)
    stw r0, 0x278(r4)
    lwz r0, 0x100(r1)
    stw r0, 0x27c(r4)
    lfs f0, 0x104(r1)
    stfs f0, 0x280(r4)
    lfs f0, 0x108(r1)
    stfs f0, 0x284(r4)
    lfs f0, 0x10c(r1)
    stfs f0, 0x288(r4)
    lwz r0, 0x114(r1)
    lwz r3, 0x110(r1)
    stw r3, 0x28c(r4)
    stw r0, 0x290(r4)
    lwz r0, 0x11c(r1)
    lwz r3, 0x118(r1)
    stw r3, 0x294(r4)
    addi r3, r1, 0x120
    stw r0, 0x298(r4)
    lfs f2, 0x128(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x29c(r4), 0, 0
    stfs f2, 0x2a4(r4)
    lfs f0, 0x12c(r1)
    stfs f0, 0x2a8(r4)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_000012F4:
    mr r3, r16
    addi r4, r20, 0x150
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00001324
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00001324
    lwz r3, lbl_8087EFA8
    mr r4, r22
    addi r3, r3, 0x104
    bl fn_800BBD90
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00001324:
    mr r3, r16
    addi r4, r20, 0x157
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00001354
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00001354
    lwz r3, lbl_8087EFA8
    mr r4, r22
    addi r3, r3, 0x3dc
    bl fn_800BC328
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00001354:
    mr r3, r16
    addi r4, r20, 0x15d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00001408
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00001408
    lwz r4, lbl_8087EFB4
    mr r3, r22
    lwz r15, 0x2fc(r4)
    stw r30, 0x120(r15)
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f17, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f16, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x28(r1)
    frsp f2, f17
    addi r4, r1, 0x28
    mr r3, r22
    stfs f16, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x58
    stfs f17, 0x30(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x60(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x64(r1)
    mr r3, r22
    bl fn_8005B9CC
    addi r4, r20, 0x165
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_000013F8
    stw r31, 0x120(r15)
lbl_fn_8049F4F4_000013F8:
    mr r3, r15
    addi r4, r1, 0x58
    bl fn_800C2C20
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00001408:
    mr r3, r16
    addi r4, r20, 0x169
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_0000151C
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_0000151C
    mr r3, r22
    bl fn_8005B9CC
    addi r4, r20, 0x16f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00001858
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f16, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f17, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f18, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f19, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f20, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f21, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    stfs f20, 0x48(r1)
    lwz r15, 0x2fc(r3)
    stfs f21, 0x4c(r1)
    mr r3, r15
    stfs f1, 0x50(r1)
    bl fn_800C2448
    addi r4, r1, 0x48
    lfs f2, 0x50(r1)
    psq_l f1, 0x0(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    mr r3, r15
    stfs f16, 0x18(r1)
    stfs f17, 0x1c(r1)
    stfs f18, 0x20(r1)
    stfs f19, 0x24(r1)
    bl fn_800C2448
    frsp f0, f16
    stfs f0, 0x34(r3)
    frsp f0, f17
    stfs f0, 0x38(r3)
    frsp f0, f18
    stfs f0, 0x3c(r3)
    frsp f0, f19
    stfs f0, 0x40(r3)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_0000151C:
    mr r3, r16
    addi r4, r20, 0x173
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00001610
    cmpwi r25, 0x0
    bne lbl_fn_8049F4F4_00001610
    lwz r5, lbl_8087EFA8
    mr r3, r29
    mr r4, r22
    lwz r0, 0x324(r5)
    stw r0, 0x98(r1)
    psq_l f1, 0x328(r5), 0, 0
    psq_l f2, 0x330(r5), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x338(r5), 0, 0
    psq_l f2, 0x340(r5), 0, 0
    psq_st f2, 0x1c(r29), 0, 0
    psq_st f1, 0x14(r29), 0, 0
    psq_l f1, 0x348(r5), 0, 0
    psq_l f2, 0x350(r5), 0, 0
    psq_st f2, 0x2c(r29), 0, 0
    psq_st f1, 0x24(r29), 0, 0
    psq_l f1, 0x358(r5), 0, 0
    psq_l f2, 0x360(r5), 0, 0
    psq_st f2, 0x3c(r29), 0, 0
    psq_st f1, 0x34(r29), 0, 0
    lwz r0, 0x368(r5)
    stw r0, 0xdc(r1)
    lwz r0, 0x36c(r5)
    stw r0, 0xe0(r1)
    lfs f0, 0x370(r5)
    stfs f0, 0xe4(r1)
    bl fn_800BBFE8
    lwz r3, lbl_8087EFA8
    lwz r0, 0x98(r1)
    stw r0, 0x324(r3)
    psq_l f2, 0x8(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x328(r3), 0, 0
    psq_st f2, 0x330(r3), 0, 0
    psq_l f2, 0x1c(r29), 0, 0
    psq_l f1, 0x14(r29), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    psq_st f2, 0x340(r3), 0, 0
    psq_l f2, 0x2c(r29), 0, 0
    psq_l f1, 0x24(r29), 0, 0
    psq_st f1, 0x348(r3), 0, 0
    psq_st f2, 0x350(r3), 0, 0
    psq_l f2, 0x3c(r29), 0, 0
    psq_l f1, 0x34(r29), 0, 0
    psq_st f1, 0x358(r3), 0, 0
    psq_st f2, 0x360(r3), 0, 0
    lwz r0, 0xdc(r1)
    stw r0, 0x368(r3)
    lwz r0, 0xe0(r1)
    stw r0, 0x36c(r3)
    lfs f0, 0xe4(r1)
    stfs f0, 0x370(r3)
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_00001610:
    cmpwi r23, 0x0
    beq lbl_fn_8049F4F4_000016C0
    mr r3, r16
    addi r4, r20, 0x180
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_000016C0
    mr r3, r22
    bl fn_8005B9CC
    bl fn_80496A28
    mr r15, r3
    mr r3, r22
    bl fn_8005B9CC
    mr r5, r3
    mr r3, r21
    mr r4, r15
    bl fn_804A06B4
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_8049F4F4_00001858
    beq lbl_fn_8049F4F4_00001858
    lwz r5, 0x70(r21)
    cmplw r3, r5
    bne lbl_fn_8049F4F4_000016B4
    lwz r0, 0x4c(r3)
    stw r0, 0x70(r21)
    b lbl_fn_8049F4F4_00001858
    b lbl_fn_8049F4F4_000016B4
lbl_fn_8049F4F4_00001680:
    lwz r0, 0x4c(r5)
    cmplw r0, r3
    bne lbl_fn_8049F4F4_000016B0
    lwz r4, 0x4c(r15)
    mr r3, r5
    bl fn_80496414
    mr r3, r15
    li r4, 0x0
    bl fn_80496414
    mr r3, r15
    bl fn_800D2338
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_000016B0:
    mr r5, r0
lbl_fn_8049F4F4_000016B4:
    cmpwi r5, 0x0
    bne lbl_fn_8049F4F4_00001680
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_000016C0:
    cmpwi r23, 0x0
    li r15, 0x0
    beq lbl_fn_8049F4F4_0000173C
    mr r3, r16
    bl fn_80496A28
    mr r15, r3
    mr r3, r22
    bl fn_8005B9CC
    mr r5, r3
    mr r3, r21
    mr r4, r15
    bl fn_804A06B4
    mr r15, r3
    addi r3, r22, 0x10
    li r4, 0x0
    li r5, 0x400
    bl memset
    addi r3, r22, 0x610
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x0(r22)
    mr r3, r22
    lwz r4, 0x4(r22)
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r22)
    mtctr r12
    bctrl
    mr r3, r22
    bl fn_8005B9CC
    mr r16, r3
lbl_fn_8049F4F4_0000173C:
    mr r3, r21
    mr r4, r16
    mr r5, r22
    bl fn_80496B3C
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_fn_8049F4F4_000017F0
    beq lbl_fn_8049F4F4_00001780
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x70(r21)
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00001778
    stw r16, 0x70(r21)
    b lbl_fn_8049F4F4_00001780
lbl_fn_8049F4F4_00001778:
    mr r4, r16
    bl fn_804963F8
lbl_fn_8049F4F4_00001780:
    lwz r0, 0x48(r16)
    cmpwi r0, 0x6
    bne lbl_fn_8049F4F4_000017E4
    lwz r0, 0xa0(r21)
    cmpwi r0, 0x0
    beq lbl_fn_8049F4F4_000017C0
    lwz r0, 0xc4(r21)
    cmpwi r0, 0x0
    bne lbl_fn_8049F4F4_000017C0
    addi r3, r16, 0x50
    bl fn_80473F18
    mr r5, r3
    mr r3, r21
    li r4, 0x6
    bl fn_80491F94
    stw r3, 0xc4(r21)
lbl_fn_8049F4F4_000017C0:
    lwz r0, 0xa0(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r3, r0, 0xa4
    beq lbl_fn_8049F4F4_000017D8
    stw r16, 0x0(r3)
lbl_fn_8049F4F4_000017D8:
    lwz r3, 0xa0(r21)
    addi r0, r3, 0x1
    stw r0, 0xa0(r21)
lbl_fn_8049F4F4_000017E4:
    lwz r0, 0x38(r21)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x38(r21)
lbl_fn_8049F4F4_000017F0:
    cmpwi r23, 0x0
    beq lbl_fn_8049F4F4_00001858
    cmpwi r15, 0x0
    beq lbl_fn_8049F4F4_00001858
    beq lbl_fn_8049F4F4_00001858
    lwz r3, 0x70(r21)
    cmplw r15, r3
    bne lbl_fn_8049F4F4_00001850
    lwz r0, 0x4c(r15)
    stw r0, 0x70(r21)
    b lbl_fn_8049F4F4_00001858
    b lbl_fn_8049F4F4_00001850
lbl_fn_8049F4F4_00001820:
    lwz r0, 0x4c(r3)
    cmplw r0, r15
    bne lbl_fn_8049F4F4_0000184C
    lwz r4, 0x4c(r15)
    bl fn_80496414
    mr r3, r15
    li r4, 0x0
    bl fn_80496414
    mr r3, r15
    bl fn_800D2338
    b lbl_fn_8049F4F4_00001858
lbl_fn_8049F4F4_0000184C:
    mr r3, r0
lbl_fn_8049F4F4_00001850:
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00001820
lbl_fn_8049F4F4_00001858:
    mr r3, r22
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8049F4F4_00000A20
    addi r11, r1, 0x250
    psq_l f31, 0x348(r1), 0, 0
    lfd f31, 0x340(r1)
    psq_l f30, 0x338(r1), 0, 0
    lfd f30, 0x330(r1)
    psq_l f29, 0x328(r1), 0, 0
    lfd f29, 0x320(r1)
    psq_l f28, 0x318(r1), 0, 0
    lfd f28, 0x310(r1)
    psq_l f27, 0x308(r1), 0, 0
    lfd f27, 0x300(r1)
    psq_l f26, 0x2f8(r1), 0, 0
    lfd f26, 0x2f0(r1)
    psq_l f25, 0x2e8(r1), 0, 0
    lfd f25, 0x2e0(r1)
    psq_l f24, 0x2d8(r1), 0, 0
    lfd f24, 0x2d0(r1)
    psq_l f23, 0x2c8(r1), 0, 0
    lfd f23, 0x2c0(r1)
    psq_l f22, 0x2b8(r1), 0, 0
    lfd f22, 0x2b0(r1)
    psq_l f21, 0x2a8(r1), 0, 0
    lfd f21, 0x2a0(r1)
    psq_l f20, 0x298(r1), 0, 0
    lfd f20, 0x290(r1)
    psq_l f19, 0x288(r1), 0, 0
    lfd f19, 0x280(r1)
    psq_l f18, 0x278(r1), 0, 0
    lfd f18, 0x270(r1)
    psq_l f17, 0x268(r1), 0, 0
    lfd f17, 0x260(r1)
    psq_l f16, 0x258(r1), 0, 0
    lfd f16, 0x250(r1)
    bl _restgpr_14
    lwz r0, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x350
    blr
}

asm void fn_804A04AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    stw r4, 0xe0(r3)
    blt lbl_fn_804A04AC_00001938
    stw r5, 0xe4(r3)
    b lbl_fn_804A04AC_0000193C
lbl_fn_804A04AC_00001938:
    lwz r27, 0xe4(r3)
lbl_fn_804A04AC_0000193C:
    lwz r4, lbl_8087F430
    addi r3, r3, 0x60
    addi r30, r4, 0x6c
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_804A04AC_00001980
    addi r3, r25, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r25, 0x60
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    mr r6, r26
    mr r7, r27
    bl fn_8037E12C
lbl_fn_804A04AC_00001980:
    cmpwi r28, 0x1
    stw r29, 0xc20(r30)
    bne lbl_fn_804A04AC_0000199C
    mr r3, r30
    li r4, 0xa
    bl fn_80389884
    b lbl_fn_804A04AC_000019C0
lbl_fn_804A04AC_0000199C:
    cmpwi r28, 0x2
    bne lbl_fn_804A04AC_000019B4
    mr r3, r30
    li r4, 0xb
    bl fn_80389884
    b lbl_fn_804A04AC_000019C0
lbl_fn_804A04AC_000019B4:
    mr r3, r30
    li r4, 0x0
    bl fn_80389884
lbl_fn_804A04AC_000019C0:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804A0580(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r31, 0x70(r3)
    b lbl_fn_804A0580_00001A44
lbl_fn_804A0580_000019FC:
    cmpwi r29, 0x0
    beq lbl_fn_804A0580_00001A14
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r31)
    b lbl_fn_804A0580_00001A40
lbl_fn_804A0580_00001A14:
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r30
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804A0580_00001A40
    lwz r0, 0x38(r31)
    ori r0, r0, 0x4
    stw r0, 0x38(r31)
lbl_fn_804A0580_00001A40:
    lwz r31, 0x4c(r31)
lbl_fn_804A0580_00001A44:
    cmpwi r31, 0x0
    bne lbl_fn_804A0580_000019FC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
