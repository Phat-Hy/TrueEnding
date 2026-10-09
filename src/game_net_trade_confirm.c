#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006A250(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008C828(void);
extern void fn_800C16B4(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC3CC(void);
extern void fn_80453DBC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_804741C0(void);
extern void fn_8047C7FC(void);
extern void fn_80513024(void);
extern void fn_8052BBF0(void);
extern void fn_8052DEF0(void);
extern void fn_8052E8D8(void);
extern void fn_8052E984(void);
extern void fn_8052EEC0(void);
extern void fn_8052F890(void);
extern void fn_80531814(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_8075D31C[];
extern u8 lbl_8075D468[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80793868[];
extern u8 lbl_80793888[];
extern u8 lbl_807938C0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C9120[];
extern u8 lbl_807C912C[];
extern u8 lbl_807C9138[];

/* Small data declarations */
extern u32 lbl_8087D720;
extern u32 lbl_8087E4B0;
extern u32 lbl_8087E4B4;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_80887AB0;
extern u32 lbl_80887AB8;
extern u32 lbl_80887ABC;
extern u32 lbl_80887AC0;
extern u32 lbl_80887AD4;
extern u32 lbl_80887B1C;
extern u32 lbl_80887B20;
extern u32 lbl_80887B24;
extern u32 lbl_80887B28;
extern u32 lbl_80887B2C;
extern u32 lbl_80887B30;
extern u32 lbl_80887B34;
extern u32 lbl_80887B38;
extern u32 lbl_80887B3C;
extern u32 lbl_80887B40;
extern u32 lbl_80887B44;
extern u32 lbl_80887B48;

/* Function declarations */
void fn_8052FA48(void);
void fn_80530178(void);
void fn_80530330(void);
void fn_80530388(void);
void fn_805303D4(void);
void fn_805305D4(void);
void fn_80530CD4(void);
void fn_80530D34(void);
void fn_80530D8C(void);
void fn_80530DB8(void);
void fn_80530FB4(void);
void fn_80531018(void);
void fn_80531090(void);
void fn_805311DC(void);
void fn_8053121C(void);
void fn_8053133C(void);
void fn_80531398(void);

asm void fn_8052FA48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    mr r31, r3
    addi r4, r30, 0x258
    bl fn_804741C0
    lwz r0, 0x260(r30)
    addi r3, r31, 0x58
    stw r0, 0x8(r31)
    addi r4, r30, 0x2b0
    lwz r0, 0x268(r30)
    lwz r5, 0x264(r30)
    stw r5, 0xc(r31)
    stw r0, 0x10(r31)
    lwz r0, 0x270(r30)
    lwz r5, 0x26c(r30)
    stw r5, 0x14(r31)
    stw r0, 0x18(r31)
    lwz r0, 0x278(r30)
    lwz r5, 0x274(r30)
    stw r5, 0x1c(r31)
    stw r0, 0x20(r31)
    lwz r0, 0x280(r30)
    lwz r5, 0x27c(r30)
    stw r5, 0x24(r31)
    stw r0, 0x28(r31)
    lwz r0, 0x288(r30)
    lwz r5, 0x284(r30)
    stw r5, 0x2c(r31)
    stw r0, 0x30(r31)
    lwz r0, 0x290(r30)
    lwz r5, 0x28c(r30)
    stw r5, 0x34(r31)
    stw r0, 0x38(r31)
    lwz r0, 0x298(r30)
    lwz r5, 0x294(r30)
    stw r5, 0x3c(r31)
    stw r0, 0x40(r31)
    lwz r0, 0x2a0(r30)
    lwz r5, 0x29c(r30)
    stw r5, 0x44(r31)
    stw r0, 0x48(r31)
    lwz r0, 0x2a8(r30)
    lwz r5, 0x2a4(r30)
    stw r5, 0x4c(r31)
    stw r0, 0x50(r31)
    lwz r0, 0x2ac(r30)
    stw r0, 0x54(r31)
    bl fn_8052E984
    addi r3, r31, 0x64
    addi r4, r30, 0x2bc
    bl fn_8052EEC0
    lwz r0, 0x2c8(r30)
    addi r3, r31, 0x78
    stw r0, 0x70(r31)
    addi r4, r30, 0x2d0
    lwz r0, 0x2cc(r30)
    stw r0, 0x74(r31)
    bl fn_8052F890
    lwz r0, 0x320(r30)
    addi r3, r31, 0xd0
    stw r0, 0xc8(r31)
    addi r4, r30, 0x328
    lwz r0, 0x324(r30)
    stw r0, 0xcc(r31)
    bl fn_8052F890
    lwz r0, 0x378(r30)
    addi r3, r31, 0x164
    stw r0, 0x120(r31)
    addi r4, r30, 0x3bc
    psq_l f2, 0x384(r30), 0, 0
    psq_l f3, 0x38c(r30), 0, 0
    psq_l f4, 0x394(r30), 0, 0
    psq_l f5, 0x39c(r30), 0, 0
    psq_l f6, 0x3a4(r30), 0, 0
    psq_l f1, 0x37c(r30), 0, 0
    psq_st f1, 0x124(r31), 0, 0
    psq_st f2, 0x12c(r31), 0, 0
    psq_st f3, 0x134(r31), 0, 0
    psq_st f4, 0x13c(r31), 0, 0
    psq_st f5, 0x144(r31), 0, 0
    psq_st f6, 0x14c(r31), 0, 0
    lfs f2, 0x3b4(r30)
    psq_l f1, 0x3ac(r30), 0, 0
    psq_st f1, 0x154(r31), 0, 0
    stfs f2, 0x15c(r31)
    lfs f0, 0x3b8(r30)
    stfs f0, 0x160(r31)
    bl fn_8052E8D8
    lwz r0, 0x3ec(r30)
    addi r3, r31, 0x198
    stw r0, 0x194(r31)
    addi r4, r30, 0x3f0
    bl fn_8052BBF0
    lwz r0, 0x438(r30)
    addi r3, r31, 0x1f8
    stw r0, 0x1e0(r31)
    addi r4, r30, 0x450
    lwz r0, 0x440(r30)
    lwz r5, 0x43c(r30)
    stw r5, 0x1e4(r31)
    stw r0, 0x1e8(r31)
    lwz r0, 0x448(r30)
    lwz r5, 0x444(r30)
    stw r5, 0x1ec(r31)
    stw r0, 0x1f0(r31)
    lwz r0, 0x44c(r30)
    stw r0, 0x1f4(r31)
    bl fn_8047C7FC
    lwz r0, 0x48c(r30)
    addi r3, r31, 0x264
    stw r0, 0x234(r31)
    addi r4, r30, 0x4bc
    lwz r0, 0x490(r30)
    stw r0, 0x238(r31)
    lwz r0, 0x494(r30)
    stw r0, 0x23c(r31)
    lfs f0, 0x498(r30)
    stfs f0, 0x240(r31)
    lwz r0, 0x4a0(r30)
    lwz r5, 0x49c(r30)
    stw r5, 0x244(r31)
    stw r0, 0x248(r31)
    lwz r0, 0x4a8(r30)
    lwz r5, 0x4a4(r30)
    stw r5, 0x24c(r31)
    stw r0, 0x250(r31)
    lfs f2, 0x4b4(r30)
    psq_l f1, 0x4ac(r30), 0, 0
    psq_st f1, 0x254(r31), 0, 0
    stfs f2, 0x25c(r31)
    lwz r0, 0x4b8(r30)
    stw r0, 0x260(r31)
    bl fn_80453DBC
    lwz r3, lbl_8087EFB4
    lwz r0, 0x0(r30)
    stw r0, 0x104(r3)
    lwz r0, 0x4(r30)
    stw r0, 0x108(r3)
    lfs f2, 0x10(r30)
    psq_l f1, 0x8(r30), 0, 0
    psq_st f1, 0x10c(r3), 0, 0
    stfs f2, 0x114(r3)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x118(r3), 0, 0
    stfs f2, 0x120(r3)
    lfs f2, 0x28(r30)
    psq_l f1, 0x20(r30), 0, 0
    psq_st f1, 0x124(r3), 0, 0
    stfs f2, 0x12c(r3)
    lfs f2, 0x34(r30)
    psq_l f1, 0x2c(r30), 0, 0
    psq_st f1, 0x130(r3), 0, 0
    stfs f2, 0x138(r3)
    lfs f0, 0x38(r30)
    stfs f0, 0x13c(r3)
    lfs f0, 0x3c(r30)
    stfs f0, 0x140(r3)
    lfs f0, 0x40(r30)
    stfs f0, 0x144(r3)
    lfs f0, 0x44(r30)
    stfs f0, 0x148(r3)
    lfs f0, 0x48(r30)
    stfs f0, 0x14c(r3)
    lfs f0, 0x4c(r30)
    stfs f0, 0x150(r3)
    lfs f0, 0x50(r30)
    stfs f0, 0x154(r3)
    lfs f0, 0x54(r30)
    stfs f0, 0x158(r3)
    psq_l f2, 0x60(r30), 0, 0
    psq_l f3, 0x68(r30), 0, 0
    psq_l f4, 0x70(r30), 0, 0
    psq_l f5, 0x78(r30), 0, 0
    psq_l f6, 0x80(r30), 0, 0
    psq_l f1, 0x58(r30), 0, 0
    psq_st f1, 0x15c(r3), 0, 0
    psq_st f2, 0x164(r3), 0, 0
    psq_st f3, 0x16c(r3), 0, 0
    psq_st f4, 0x174(r3), 0, 0
    psq_st f5, 0x17c(r3), 0, 0
    psq_st f6, 0x184(r3), 0, 0
    psq_l f2, 0x90(r30), 0, 0
    psq_l f3, 0x98(r30), 0, 0
    psq_l f4, 0xa0(r30), 0, 0
    psq_l f5, 0xa8(r30), 0, 0
    psq_l f6, 0xb0(r30), 0, 0
    psq_l f7, 0xb8(r30), 0, 0
    psq_l f8, 0xc0(r30), 0, 0
    psq_l f1, 0x88(r30), 0, 0
    psq_st f1, 0x18c(r3), 0, 0
    psq_st f2, 0x194(r3), 0, 0
    psq_st f3, 0x19c(r3), 0, 0
    psq_st f4, 0x1a4(r3), 0, 0
    psq_st f5, 0x1ac(r3), 0, 0
    psq_st f6, 0x1b4(r3), 0, 0
    psq_st f7, 0x1bc(r3), 0, 0
    psq_st f8, 0x1c4(r3), 0, 0
    lfs f0, 0xc8(r30)
    addi r4, r3, 0x204
    stfs f0, 0x1cc(r3)
    addi r6, r4, 0x94
    addi r5, r30, 0x194
    addi r0, r4, 0xf4
    lfs f0, 0xcc(r30)
    stfs f0, 0x1d0(r3)
    psq_l f2, 0xd8(r30), 0, 0
    psq_l f3, 0xe0(r30), 0, 0
    psq_l f4, 0xe8(r30), 0, 0
    psq_l f5, 0xf0(r30), 0, 0
    psq_l f6, 0xf8(r30), 0, 0
    psq_l f1, 0xd0(r30), 0, 0
    psq_st f1, 0x1d4(r3), 0, 0
    psq_st f2, 0x1dc(r3), 0, 0
    psq_st f3, 0x1e4(r3), 0, 0
    psq_st f4, 0x1ec(r3), 0, 0
    psq_st f5, 0x1f4(r3), 0, 0
    psq_st f6, 0x1fc(r3), 0, 0
    psq_l f2, 0x108(r30), 0, 0
    psq_l f3, 0x110(r30), 0, 0
    psq_l f4, 0x118(r30), 0, 0
    psq_l f5, 0x120(r30), 0, 0
    psq_l f6, 0x128(r30), 0, 0
    psq_l f1, 0x100(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    lwz r3, 0x130(r30)
    stw r3, 0x30(r4)
    lfs f0, 0x134(r30)
    stfs f0, 0x34(r4)
    lfs f0, 0x138(r30)
    stfs f0, 0x38(r4)
    lfs f2, 0x144(r30)
    psq_l f1, 0x13c(r30), 0, 0
    psq_st f1, 0x3c(r4), 0, 0
    stfs f2, 0x44(r4)
    lfs f0, 0x148(r30)
    stfs f0, 0x48(r4)
    lfs f2, 0x154(r30)
    psq_l f1, 0x14c(r30), 0, 0
    psq_st f1, 0x4c(r4), 0, 0
    stfs f2, 0x54(r4)
    lfs f0, 0x158(r30)
    stfs f0, 0x58(r4)
    lfs f2, 0x164(r30)
    psq_l f1, 0x15c(r30), 0, 0
    psq_st f1, 0x5c(r4), 0, 0
    stfs f2, 0x64(r4)
    lfs f0, 0x168(r30)
    stfs f0, 0x68(r4)
    lfs f2, 0x174(r30)
    psq_l f1, 0x16c(r30), 0, 0
    psq_st f1, 0x6c(r4), 0, 0
    stfs f2, 0x74(r4)
    lfs f0, 0x178(r30)
    stfs f0, 0x78(r4)
    lfs f2, 0x184(r30)
    psq_l f1, 0x17c(r30), 0, 0
    psq_st f1, 0x7c(r4), 0, 0
    stfs f2, 0x84(r4)
    lfs f2, 0x190(r30)
    psq_l f1, 0x188(r30), 0, 0
    psq_st f1, 0x88(r4), 0, 0
    stfs f2, 0x90(r4)
lbl_fn_8052FA48_00000448:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_8052FA48_00000448
    lwz r3, lbl_8087EFA8
    lfs f0, 0x238(r30)
    stfs f0, 0x3c(r3)
    lfs f0, 0x23c(r30)
    stfs f0, 0x40(r3)
    lfs f0, 0x240(r30)
    stfs f0, 0x44(r3)
    lfs f0, 0x244(r30)
    stfs f0, 0x48(r3)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x50c(r30)
    stw r0, 0xd4(r3)
    lwz r0, 0x510(r30)
    stw r0, 0xd8(r3)
    lwz r0, 0x514(r30)
    stw r0, 0xdc(r3)
    lwz r0, 0x518(r30)
    stw r0, 0xe0(r3)
    lfs f0, 0x51c(r30)
    stfs f0, 0xe4(r3)
    lfs f0, 0x520(r30)
    stfs f0, 0xe8(r3)
    lfs f0, 0x524(r30)
    stfs f0, 0xec(r3)
    lfs f0, 0x528(r30)
    stfs f0, 0xf0(r3)
    lwz r0, 0x52c(r30)
    stw r0, 0xf4(r3)
    lwz r0, 0x530(r30)
    stw r0, 0xf8(r3)
    lfs f0, 0x534(r30)
    stfs f0, 0xfc(r3)
    lfs f0, 0x538(r30)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x53c(r30)
    stw r0, 0x54(r3)
    lwz r0, 0x540(r30)
    stw r0, 0x58(r3)
    lwz r0, 0x544(r30)
    stw r0, 0x5c(r3)
    lwz r0, 0x548(r30)
    stw r0, 0x60(r3)
    lwz r0, 0x54c(r30)
    stw r0, 0x64(r3)
    lfs f0, 0x550(r30)
    stfs f0, 0x68(r3)
    lfs f0, 0x554(r30)
    stfs f0, 0x6c(r3)
    lfs f0, 0x558(r30)
    stfs f0, 0x70(r3)
    lfs f0, 0x55c(r30)
    stfs f0, 0x74(r3)
    lwz r0, 0x564(r30)
    lwz r4, 0x560(r30)
    stw r4, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x56c(r30)
    lwz r4, 0x568(r30)
    stw r4, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x570(r30)
    stw r0, 0x88(r3)
    lwz r0, 0x578(r30)
    lwz r4, 0x574(r30)
    stw r4, 0x8c(r3)
    stw r0, 0x90(r3)
    lwz r0, 0x580(r30)
    lwz r4, 0x57c(r30)
    stw r4, 0x94(r3)
    stw r0, 0x98(r3)
    lwz r0, 0x588(r30)
    lwz r4, 0x584(r30)
    stw r4, 0x9c(r3)
    stw r0, 0xa0(r3)
    lwz r0, 0x590(r30)
    lwz r4, 0x58c(r30)
    stw r4, 0xa4(r3)
    stw r0, 0xa8(r3)
    lwz r0, 0x598(r30)
    lwz r4, 0x594(r30)
    stw r4, 0xac(r3)
    stw r0, 0xb0(r3)
    lwz r0, 0x5a0(r30)
    lwz r4, 0x59c(r30)
    stw r4, 0xb4(r3)
    stw r0, 0xb8(r3)
    lwz r0, 0x5a8(r30)
    lwz r4, 0x5a4(r30)
    stw r4, 0xbc(r3)
    stw r0, 0xc0(r3)
    lwz r0, 0x5ac(r30)
    stw r0, 0xc4(r3)
    lwz r0, 0x5b4(r30)
    lwz r4, 0x5b0(r30)
    stw r4, 0xc8(r3)
    stw r0, 0xcc(r3)
    lwz r0, 0x5b8(r30)
    stw r0, 0xd0(r3)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x654(r30)
    stw r0, 0x104(r4)
    lwz r0, 0x658(r30)
    stw r0, 0x108(r4)
    lfs f0, 0x65c(r30)
    stfs f0, 0x10c(r4)
    lwz r0, 0x664(r30)
    lwz r3, 0x660(r30)
    stw r3, 0x110(r4)
    stw r0, 0x114(r4)
    lwz r0, 0x66c(r30)
    lwz r3, 0x668(r30)
    stw r3, 0x118(r4)
    stw r0, 0x11c(r4)
    lfs f2, 0x678(r30)
    psq_l f1, 0x670(r30), 0, 0
    psq_st f1, 0x120(r4), 0, 0
    stfs f2, 0x128(r4)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x604(r30)
    stw r0, 0x324(r3)
    psq_l f2, 0x610(r30), 0, 0
    psq_l f1, 0x608(r30), 0, 0
    psq_st f1, 0x328(r3), 0, 0
    psq_st f2, 0x330(r3), 0, 0
    psq_l f2, 0x620(r30), 0, 0
    psq_l f1, 0x618(r30), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    psq_st f2, 0x340(r3), 0, 0
    psq_l f2, 0x630(r30), 0, 0
    psq_l f1, 0x628(r30), 0, 0
    psq_st f1, 0x348(r3), 0, 0
    psq_st f2, 0x350(r3), 0, 0
    psq_l f2, 0x640(r30), 0, 0
    psq_l f1, 0x638(r30), 0, 0
    psq_st f1, 0x358(r3), 0, 0
    psq_st f2, 0x360(r3), 0, 0
    lwz r0, 0x648(r30)
    stw r0, 0x368(r3)
    lwz r0, 0x64c(r30)
    stw r0, 0x36c(r3)
    lfs f0, 0x650(r30)
    stfs f0, 0x370(r3)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x67c(r30)
    stw r0, 0x3dc(r4)
    lwz r0, 0x680(r30)
    stw r0, 0x3e0(r4)
    lfs f0, 0x684(r30)
    stfs f0, 0x3e4(r4)
    lwz r0, 0x68c(r30)
    lwz r3, 0x688(r30)
    stw r3, 0x3e8(r4)
    stw r0, 0x3ec(r4)
    lwz r0, 0x694(r30)
    lwz r3, 0x690(r30)
    stw r3, 0x3f0(r4)
    stw r0, 0x3f4(r4)
    lwz r0, 0x69c(r30)
    lwz r3, 0x698(r30)
    stw r3, 0x3f8(r4)
    stw r0, 0x3fc(r4)
    lwz r0, 0x6a4(r30)
    lwz r3, 0x6a0(r30)
    stw r3, 0x400(r4)
    stw r0, 0x404(r4)
    lfs f0, 0x6a8(r30)
    stfs f0, 0x408(r4)
    lfs f0, 0x6ac(r30)
    stfs f0, 0x40c(r4)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80530178(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f5, lbl_80887ABC
    lis r10, lbl_807C7030@ha
    lfs f6, lbl_80887AB0
    addi r6, r1, 0x38
    stw r0, 0x54(r1)
    fmr f2, f5
    lfs f7, lbl_80887AB8
    addi r5, r3, 0x11fc
    lfs f4, lbl_80887AC0
    addi r8, r1, 0x2c
    li r4, 0x0
    stfs f2, 0x1204(r3)
    fmr f2, f4
    lfs f3, lbl_80887B1C
    addi r7, r3, 0x1208
    lfs f0, 0x1368(r3)
    addi r10, r10, lbl_807C7030@l
    stfs f7, 0x38(r1)
    addi r9, r3, 0x12ec
    lwz r0, 0x136c(r3)
    stfs f6, 0x3c(r1)
    addi r11, r3, 0x12d4
    cmpwi r0, 0x0
    addi r12, r3, 0x12e0
    psq_l f1, 0x0(r6), 0, 0
    addi r6, r3, 0x12f8
    stfs f7, 0x2c(r1)
    stfs f6, 0x30(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stw r4, 0x11f8(r3)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1210(r3)
    stfs f3, 0x1214(r3)
    stfs f6, 0x458(r3)
    stfs f0, 0x45c(r3)
    stw r4, 0x121c(r3)
    stw r4, 0x1220(r3)
    stw r4, 0x11f0(r3)
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x8(r10)
    stfs f2, 0x12f4(r3)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x8(r10)
    stfs f2, 0x1300(r3)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x8(r10)
    stfs f2, 0x12dc(r3)
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x8(r10)
    stfs f5, 0x40(r1)
    stfs f4, 0x34(r1)
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0x12e8(r3)
    beq lbl_fn_80530178_00000828
    addi r6, r3, 0x1370
    b lbl_fn_80530178_00000838
lbl_fn_80530178_00000828:
    stfs f6, 0x20(r1)
    addi r6, r1, 0x20
    stfs f6, 0x24(r1)
    stfs f6, 0x28(r1)
lbl_fn_80530178_00000838:
    addi r4, r1, 0x44
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r1, 0x14
    lfs f2, 0x8(r6)
    addi r6, r1, 0x8
    lfs f3, 0x1204(r3)
    li r4, 0x0
    lfs f0, 0x1200(r3)
    fadds f7, f3, f2
    lfs f6, 0x48(r1)
    stfs f2, 0x4c(r1)
    fadds f8, f0, f6
    lfs f3, 0x120c(r3)
    lfs f5, 0x11fc(r3)
    fadds f6, f3, f6
    lfs f4, 0x44(r1)
    fmr f2, f7
    fadds f5, f5, f4
    lfs f0, 0x1208(r3)
    lfs f3, 0x1210(r3)
    fadds f4, f0, f4
    lfs f0, 0x4c(r1)
    lfs f9, 0x1214(r3)
    fadds f0, f3, f0
    stfs f2, 0x7c(r3)
    stfs f5, 0x14(r1)
    fmr f2, f0
    stfs f8, 0x18(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x8(r1)
    stfs f6, 0xc(r1)
    psq_st f1, 0x74(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f7, 0x1c(r1)
    stfs f0, 0x10(r1)
    psq_st f1, 0x80(r3), 0, 0
    stfs f2, 0x88(r3)
    stfs f9, 0xbc(r3)
    bl fn_8052DEF0
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80530330(void)
{
    nofralloc
    lwz r6, 0x12b4(r3)
    li r7, 0x0
    lwz r0, 0x12c4(r3)
    addi r8, r3, 0x12d4
    lfs f0, lbl_80887AB0
    subf r6, r6, r6
    subf r0, r0, r0
    stw r7, 0x12ac(r3)
    addi r9, r3, 0x12e0
    stw r6, 0x12b4(r3)
    stfs f0, 0x12bc(r3)
    stw r0, 0x12c4(r3)
    stw r7, 0x12cc(r3)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x12dc(r3)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x12e8(r3)
    psq_st f1, 0x0(r9), 0, 0
    blr
}

asm void fn_80530388(void)
{
    nofralloc
    lwz r0, 0x1224(r3)
    mr r5, r3
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80530388_00000980
lbl_fn_80530388_00000958:
    lwz r0, 0x1228(r5)
    cmpw r4, r0
    bne lbl_fn_80530388_00000974
    slwi r0, r6, 3
    add r3, r3, r0
    addi r3, r3, 0x1228
    blr
lbl_fn_80530388_00000974:
    addi r5, r5, 0x8
    addi r6, r6, 0x1
    bdnz lbl_fn_80530388_00000958
lbl_fn_80530388_00000980:
    lis r3, lbl_807C9138@ha
    addi r3, r3, lbl_807C9138@l
    blr
}

asm void fn_805303D4(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r4, lbl_807772D0@ha
    li r5, 0x400
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r1, 0x18
    stw r4, 0x8(r1)
    li r4, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r5, lbl_8087EFA8
    addi r3, r29, 0x1334
    lwz r0, 0x374(r5)
    stw r0, 0x1310(r29)
    lwz r0, 0x378(r5)
    stw r0, 0x1314(r29)
    lwz r4, 0x37c(r5)
    lwz r0, 0x380(r5)
    stw r0, 0x131c(r29)
    stw r4, 0x1318(r29)
    lwz r4, 0x384(r5)
    lwz r0, 0x388(r5)
    stw r0, 0x1324(r29)
    stw r4, 0x1320(r29)
    lfs f0, 0x38c(r5)
    stfs f0, 0x1328(r29)
    lfs f0, 0x390(r5)
    stfs f0, 0x132c(r29)
    lfs f0, 0x394(r5)
    stfs f0, 0x1330(r29)
    bl fn_8047059C
    mr r31, r3
    addi r3, r29, 0x1334
    bl fn_80470580
    lwz r12, 0x8(r1)
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r31, lbl_8075D31C@ha
    addi r31, r31, lbl_8075D31C@l
lbl_fn_805303D4_00000A84:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0x11b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805303D4_00000AB4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1328(r29)
    b lbl_fn_805303D4_00000B58
lbl_fn_805303D4_00000AB4:
    mr r3, r30
    addi r4, r31, 0x121
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805303D4_00000B0C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1318(r29)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x131c(r29)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1320(r29)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1324(r29)
    b lbl_fn_805303D4_00000B58
lbl_fn_805303D4_00000B0C:
    mr r3, r30
    addi r4, r31, 0x127
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805303D4_00000B34
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x132c(r29)
    b lbl_fn_805303D4_00000B58
lbl_fn_805303D4_00000B34:
    mr r3, r30
    addi r4, r31, 0x12d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805303D4_00000B58
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1330(r29)
lbl_fn_805303D4_00000B58:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_805303D4_00000A84
    addi r3, r29, 0x1334
    bl fn_80473F88
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_805305D4(void)
{
    nofralloc
    stwu r1, -0x700(r1)
    mflr r0
    lis r4, lbl_807772D0@ha
    li r5, 0x400
    stw r0, 0x704(r1)
    addi r4, r4, lbl_807772D0@l
    stmw r17, 0x6c4(r1)
    li r18, 0x0
    mr r30, r3
    addi r3, r1, 0x9c
    stw r4, 0x8c(r1)
    li r4, 0x0
    stw r18, 0x90(r1)
    stw r18, 0x94(r1)
    stw r18, 0x98(r1)
    stw r18, 0x6bc(r1)
    bl memset
    addi r3, r1, 0x69c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8c
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8c(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    addi r3, r30, 0x1344
    bl fn_8047059C
    mr r17, r3
    addi r3, r30, 0x1344
    bl fn_80470580
    lwz r12, 0x8c(r1)
    mr r4, r3
    mr r5, r17
    addi r3, r1, 0x8c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, __files@ha
    lis r4, lbl_8075D31C@ha
    lis r19, lbl_807C912C@ha
    stw r18, 0x4c(r1)
    addi r20, r19, lbl_807C912C@l
    addi r22, r4, lbl_8075D31C@l
    stw r18, 0x50(r1)
    addi r23, r3, __files@l
    addi r31, r1, 0x14
    lis r26, 0xcccd
    stw r18, 0x54(r1)
    lis r21, 0x28f
    lis r25, 0xda
    lis r27, 0x1b5
    stw r18, 0x58(r1)
    lis r28, lbl_80793868@ha
    li r29, 0x64
    stw r18, 0x5c(r1)
    stw r18, 0x60(r1)
    stw r18, 0x64(r1)
    stw r18, 0x68(r1)
    stw r18, 0x6c(r1)
    stw r18, 0x70(r1)
    stw r18, 0x74(r1)
    stw r18, 0x78(r1)
    stw r18, 0x7c(r1)
    stw r18, 0x80(r1)
    stw r18, 0x84(r1)
    stw r18, 0x88(r1)
lbl_fn_805305D4_00000C9C:
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_805305D4_00001260
    cmpwi r0, 0x3b
    beq lbl_fn_805305D4_00001260
    mr r4, r3
    addi r3, r1, 0x2c
    bl strcpy
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x28(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x4c(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x50(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x54(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x58(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x5c(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x60(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x64(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x68(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x6c(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x70(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x74(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x78(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x7c(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x80(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x84(r1)
    addi r3, r1, 0x8c
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r17, 0x4(r20)
    lwz r4, 0x8(r20)
    stw r3, 0x88(r1)
    cmplw r17, r4
    bge lbl_fn_805305D4_00000EC4
    addi r3, r17, 0x1
    lwz r4, lbl_807C912C@l(r19)
    subi r0, r3, 0x1
    stw r3, 0x4(r20)
    mulli r3, r0, 0x64
    lwz r0, 0x28(r1)
    stwux r0, r3, r4
    lwz r0, 0x30(r1)
    lwz r4, 0x2c(r1)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x38(r1)
    lwz r4, 0x34(r1)
    stw r4, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x40(r1)
    lwz r4, 0x3c(r1)
    stw r4, 0x14(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x48(r1)
    lwz r4, 0x44(r1)
    stw r4, 0x1c(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x50(r1)
    lwz r4, 0x4c(r1)
    stw r4, 0x24(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x58(r1)
    lwz r4, 0x54(r1)
    stw r4, 0x2c(r3)
    stw r0, 0x30(r3)
    lwz r0, 0x60(r1)
    lwz r4, 0x5c(r1)
    stw r4, 0x34(r3)
    stw r0, 0x38(r3)
    lwz r0, 0x68(r1)
    lwz r4, 0x64(r1)
    stw r4, 0x3c(r3)
    stw r0, 0x40(r3)
    lwz r0, 0x70(r1)
    lwz r4, 0x6c(r1)
    stw r4, 0x44(r3)
    stw r0, 0x48(r3)
    lwz r0, 0x78(r1)
    lwz r4, 0x74(r1)
    stw r4, 0x4c(r3)
    stw r0, 0x50(r3)
    lwz r0, 0x80(r1)
    lwz r4, 0x7c(r1)
    stw r4, 0x54(r3)
    stw r0, 0x58(r3)
    lwz r0, 0x88(r1)
    lwz r4, 0x84(r1)
    stw r4, 0x5c(r3)
    stw r0, 0x60(r3)
    b lbl_fn_805305D4_00001260
lbl_fn_805305D4_00000EC4:
    addi r0, r21, 0x5c28
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_805305D4_00000EE8
    addi r4, r22, 0x107
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805305D4_00000EE8:
    lwz r24, 0x8(r20)
    addi r3, r17, 0x1
    addi r0, r21, 0x5c28
    addi r4, r20, 0x8
    subf r3, r24, r3
    stw r18, 0x14(r1)
    subf r0, r24, r0
    cmplw r3, r0
    stw r18, 0x18(r1)
    stw r18, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r18, 0x24(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_805305D4_00000F34
    addi r4, r22, 0x107
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805305D4_00000F34:
    addi r0, r25, 0x740d
    cmplw r24, r0
    bge lbl_fn_805305D4_00000F7C
    addi r4, r24, 0x1
    subi r5, r26, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_805305D4_00000F70
    addi r3, r1, 0x10
lbl_fn_805305D4_00000F70:
    lwz r0, 0x0(r3)
    add r24, r24, r0
    b lbl_fn_805305D4_00000FB8
lbl_fn_805305D4_00000F7C:
    subi r0, r27, 0x17e6
    cmplw r24, r0
    bge lbl_fn_805305D4_00000FB4
    addi r3, r24, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_805305D4_00000FA8
    addi r3, r1, 0x10
lbl_fn_805305D4_00000FA8:
    lwz r0, 0x0(r3)
    add r24, r24, r0
    b lbl_fn_805305D4_00000FB8
lbl_fn_805305D4_00000FB4:
    addi r24, r21, 0x5c28
lbl_fn_805305D4_00000FB8:
    addi r0, r21, 0x5c28
    cmplw r24, r0
    ble lbl_fn_805305D4_00000FD8
    addi r4, r22, 0x107
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805305D4_00000FD8:
    mulli r3, r24, 0x64
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_805305D4_00001000
    addi r3, r23, 0xa0
    addi r4, r28, lbl_80793868@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805305D4_00001000:
    lwz r6, 0x4(r20)
    lwz r3, 0x18(r1)
    mulli r5, r6, 0x64
    stw r17, 0x14(r1)
    lwz r0, 0x28(r1)
    stw r24, 0x1c(r1)
    mulli r4, r3, 0x64
    stw r6, 0x24(r1)
    add r3, r17, r5
    stwux r0, r3, r4
    lwz r0, 0x30(r1)
    lwz r4, 0x2c(r1)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x38(r1)
    lwz r4, 0x34(r1)
    stw r4, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x40(r1)
    lwz r4, 0x3c(r1)
    stw r4, 0x14(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x48(r1)
    lwz r4, 0x44(r1)
    stw r4, 0x1c(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x50(r1)
    lwz r4, 0x4c(r1)
    stw r4, 0x24(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x58(r1)
    lwz r4, 0x54(r1)
    stw r4, 0x2c(r3)
    stw r0, 0x30(r3)
    lwz r0, 0x60(r1)
    lwz r4, 0x5c(r1)
    stw r4, 0x34(r3)
    stw r0, 0x38(r3)
    lwz r0, 0x68(r1)
    lwz r4, 0x64(r1)
    stw r4, 0x3c(r3)
    stw r0, 0x40(r3)
    lwz r0, 0x70(r1)
    lwz r4, 0x6c(r1)
    stw r4, 0x44(r3)
    stw r0, 0x48(r3)
    lwz r0, 0x78(r1)
    lwz r4, 0x74(r1)
    stw r4, 0x4c(r3)
    stw r0, 0x50(r3)
    lwz r0, 0x80(r1)
    lwz r4, 0x7c(r1)
    stw r4, 0x54(r3)
    stw r0, 0x58(r3)
    lwz r0, 0x88(r1)
    lwz r4, 0x84(r1)
    stw r4, 0x5c(r3)
    stw r0, 0x60(r3)
    lwz r0, 0x4(r20)
    lwz r7, lbl_807C912C@l(r19)
    mulli r0, r0, 0x64
    lwz r3, 0x24(r1)
    lwz r6, 0x18(r1)
    lwz r5, 0x14(r1)
    add r4, r7, r0
    addi r6, r6, 0x1
    addi r0, r4, 0x63
    stw r6, 0x18(r1)
    subf r0, r7, r0
    divwu r0, r0, r29
    mulli r3, r3, 0x64
    add r3, r5, r3
    mtctr r0
    cmplw r4, r7
    ble lbl_fn_805305D4_0000121C
lbl_fn_805305D4_0000112C:
    subic. r3, r3, 0x64
    subi r4, r4, 0x64
    beq lbl_fn_805305D4_00001200
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x8(r4)
    lwz r5, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r4)
    lwz r5, 0xc(r4)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x18(r4)
    lwz r5, 0x14(r4)
    stw r5, 0x14(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x20(r4)
    lwz r5, 0x1c(r4)
    stw r5, 0x1c(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x24(r4)
    stw r0, 0x24(r3)
    lwz r0, 0x28(r4)
    stw r0, 0x28(r3)
    lwz r0, 0x2c(r4)
    stw r0, 0x2c(r3)
    lwz r0, 0x30(r4)
    stw r0, 0x30(r3)
    lwz r0, 0x34(r4)
    stw r0, 0x34(r3)
    lwz r0, 0x38(r4)
    stw r0, 0x38(r3)
    lwz r0, 0x3c(r4)
    stw r0, 0x3c(r3)
    lwz r0, 0x40(r4)
    stw r0, 0x40(r3)
    lwz r0, 0x44(r4)
    stw r0, 0x44(r3)
    lwz r0, 0x48(r4)
    stw r0, 0x48(r3)
    lwz r0, 0x4c(r4)
    stw r0, 0x4c(r3)
    lwz r0, 0x50(r4)
    stw r0, 0x50(r3)
    lwz r0, 0x54(r4)
    stw r0, 0x54(r3)
    lwz r0, 0x58(r4)
    stw r0, 0x58(r3)
    lwz r0, 0x5c(r4)
    stw r0, 0x5c(r3)
    lwz r0, 0x60(r4)
    stw r0, 0x60(r3)
lbl_fn_805305D4_00001200:
    lwz r6, 0x24(r1)
    lwz r5, 0x18(r1)
    subi r0, r6, 0x1
    stw r0, 0x24(r1)
    addi r0, r5, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_805305D4_0000112C
lbl_fn_805305D4_0000121C:
    lwz r0, 0x18(r1)
    cmpwi r31, 0x0
    lwz r6, 0x8(r20)
    lwz r5, 0x1c(r1)
    lwz r3, lbl_807C912C@l(r19)
    lwz r4, 0x14(r1)
    stw r5, 0x8(r20)
    stw r6, 0x1c(r1)
    stw r4, lbl_807C912C@l(r19)
    stw r3, 0x14(r1)
    stw r0, 0x4(r20)
    stw r18, 0x18(r1)
    beq lbl_fn_805305D4_00001260
    cmpwi r3, 0x0
    beq lbl_fn_805305D4_00001260
    stw r18, 0x18(r1)
    bl dtor_80084684
lbl_fn_805305D4_00001260:
    addi r3, r1, 0x8c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_805305D4_00000C9C
    addi r3, r30, 0x1344
    bl fn_80473F88
    lmw r17, 0x6c4(r1)
    lwz r0, 0x704(r1)
    mtlr r0
    addi r1, r1, 0x700
    blr
}

asm void fn_80530CD4(void)
{
    nofralloc
    lwz r7, 0x64(r3)
    li r8, 0x0
    lis r6, 0xf
    lis r5, 0xff00
    stw r8, 0x4c(r7)
    addi r6, r6, 0x423f
    lfs f0, lbl_80887B20
    li r0, 0x1
    lwz r7, 0x64(r3)
    stw r8, 0x58(r7)
    lwz r7, 0x64(r3)
    stw r4, 0x54(r7)
    lwz r4, 0x64(r3)
    stw r6, 0x5c(r4)
    lwz r4, 0x64(r3)
    stw r8, 0x6c(r4)
    lwz r4, 0x64(r3)
    stw r5, 0x70(r4)
    lwz r4, 0x64(r3)
    stfs f0, 0x74(r4)
    lwz r4, 0x64(r3)
    stw r0, 0x48(r4)
    stw r0, 0x68(r3)
    blr
}

asm void fn_80530D34(void)
{
    nofralloc
    lwz r6, 0x64(r3)
    li r7, 0x0
    lis r5, 0xff00
    lfs f0, lbl_80887B20
    stw r7, 0x4c(r6)
    li r0, 0x1
    lwz r6, 0x64(r3)
    stw r7, 0x58(r6)
    lwz r6, 0x64(r3)
    stw r4, 0x54(r6)
    lwz r4, 0x64(r3)
    stw r7, 0x5c(r4)
    lwz r4, 0x64(r3)
    stw r5, 0x6c(r4)
    lwz r4, 0x64(r3)
    stw r7, 0x70(r4)
    lwz r4, 0x64(r3)
    stfs f0, 0x74(r4)
    lwz r4, 0x64(r3)
    stw r0, 0x48(r4)
    stw r7, 0x68(r3)
    blr
}

asm void fn_80530D8C(void)
{
    nofralloc
    cmpwi r5, 0x0
    beqlr
    cmpwi r4, 0x0
    bltlr
    cmpwi r4, 0x3
    blt lbl_fn_80530D8C_00001360
    blr
lbl_fn_80530D8C_00001360:
    mr r3, r5
    li r4, 0x0
    b fn_8008C828
    blr
}

asm void fn_80530DB8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r0, 0x1354(r3)
    lwz r5, 0x464(r3)
    stw r0, 0x1358(r3)
    lwz r3, 0x11ec(r3)
    bl fn_80513024
    lwz r3, 0x11d0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11dc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11dc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r4, 0x460(r31)
    lwz r5, 0xc4(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80530DB8_000014DC
    lwz r3, 0x108(r4)
    lwz r0, 0x10c(r4)
    cmpw r3, r0
    beq lbl_fn_80530DB8_000014DC
    b lbl_fn_80530DB8_00001518
lbl_fn_80530DB8_000014DC:
    lwz r5, 0x108(r4)
    li r3, 0x0
    cmpwi r5, 0x0
    blt lbl_fn_80530DB8_000014FC
    lwz r0, 0xa0(r4)
    cmpw r5, r0
    bge lbl_fn_80530DB8_000014FC
    li r3, 0x1
lbl_fn_80530DB8_000014FC:
    cmpwi r3, 0x0
    beq lbl_fn_80530DB8_00001514
    slwi r0, r5, 2
    add r3, r4, r0
    lwz r5, 0xa4(r3)
    b lbl_fn_80530DB8_00001518
lbl_fn_80530DB8_00001514:
    li r5, 0x0
lbl_fn_80530DB8_00001518:
    lwz r3, 0x58(r5)
    lfs f4, lbl_80887B24
    lwz r4, 0x0(r3)
    lfs f3, lbl_80887B28
    stfs f4, 0x94(r4)
    lfs f2, lbl_80887B2C
    stfs f3, 0x98(r4)
    lfs f1, lbl_80887AD4
    stfs f2, 0x9c(r4)
    stfs f1, 0xa0(r4)
    lwz r0, 0xa0(r4)
    stw r0, 0xa0(r4)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80530FB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_80531018@ha
    stw r0, 0x14(r1)
    addi r4, r4, fn_80531018@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lis r30, lbl_807C9120@ha
    addi r30, r30, lbl_807C9120@l
    addi r3, r30, 0xc
    stw r31, 0xc(r30)
    addi r5, r30, 0x0
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    bl __register_global_object
    addi r3, r30, 0x18
    stw r31, 0x18(r30)
    stw r31, 0x4(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80531018(void)
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
    beq lbl_fn_80531018_0000162C
    beq lbl_fn_80531018_0000161C
    beq lbl_fn_80531018_0000161C
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80531018_0000161C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_80531018_0000161C:
    cmpwi r31, 0x0
    ble lbl_fn_80531018_0000162C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80531018_0000162C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80531090(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800D1D3C
    lfs f1, lbl_80887B30
    lis r3, lbl_80793888@ha
    lfs f0, lbl_80887B34
    addi r3, r3, lbl_80793888@l
    addi r30, r29, 0x64
    stw r3, 0x0(r29)
    mr r3, r30
    stfs f1, 0x48(r29)
    stfs f0, 0x4c(r29)
    stfs f1, 0x50(r29)
    stfs f1, 0x54(r29)
    stfs f1, 0x58(r29)
    stfs f1, 0x5c(r29)
    stfs f1, 0x60(r29)
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r31, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    addi r3, r29, 0x7c
    stw r31, 0x6c(r29)
    stw r31, 0x70(r29)
    stw r31, 0x74(r29)
    stw r31, 0x78(r29)
    bl fn_800D5738
    stw r31, 0xac(r29)
    lis r31, lbl_8075D468@ha
    mr r3, r30
    lwz r12, 0x0(r30)
    addi r4, r31, lbl_8075D468@l
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x78(r29)
    addi r3, r31, lbl_8075D468@l
    addi r4, r3, 0x2a
    cmpwi r0, 0x0
    bne lbl_fn_80531090_00001720
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80531090_00001720
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x78(r29)
    mr r30, r3
    b lbl_fn_80531090_00001724
lbl_fn_80531090_00001720:
    li r30, 0x0
lbl_fn_80531090_00001724:
    lis r31, lbl_8075D468@ha
    mr r3, r30
    addi r31, r31, lbl_8075D468@l
    addi r5, r29, 0x74
    addi r4, r31, 0x34
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80887B30
    mr r3, r30
    lfs f2, lbl_80887B38
    addi r4, r31, 0x3c
    lfs f3, lbl_80887B3C
    addi r5, r29, 0x4c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    addi r3, r29, 0x7c
    addi r4, r31, 0x42
    bl fn_800D5908
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805311DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805311DC_000017BC
    cmpwi r4, 0x0
    ble lbl_fn_805311DC_000017BC
    bl dtor_80084684
lbl_fn_805311DC_000017BC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053121C(void)
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
    beq lbl_fn_8053121C_000018D8
    lis r4, lbl_80793888@ha
    addi r4, r4, lbl_80793888@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8053121C_00001850
    li r4, 0xf
    lis r5, 0xff00
    li r6, 0x0
    bl fn_8006A250
    stw r3, 0xac(r30)
    lis r4, 0x2
    subi r0, r4, 0x7961
    lfs f0, lbl_80887B40
    stw r0, 0x58(r3)
    li r0, 0x1
    lwz r3, 0xac(r30)
    stfs f0, 0x74(r3)
    lwz r3, 0xac(r30)
    stw r0, 0x68(r3)
    lwz r3, 0xac(r30)
    stw r0, 0x48(r3)
lbl_fn_8053121C_00001850:
    addi r3, r30, 0x7c
    li r4, -0x1
    bl fn_800D5808
    addic. r0, r30, 0x78
    beq lbl_fn_8053121C_00001880
    lwz r4, 0x78(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8053121C_00001880
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8053121C_00001880
    bl fn_800897D8
lbl_fn_8053121C_00001880:
    addic. r0, r30, 0x6c
    beq lbl_fn_8053121C_000018AC
    lwz r3, 0x70(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8053121C_000018A0
    lis r4, fn_805311DC@ha
    addi r4, r4, fn_805311DC@l
    bl fn_80695A50
lbl_fn_8053121C_000018A0:
    li r0, 0x0
    stw r0, 0x70(r30)
    stw r0, 0x6c(r30)
lbl_fn_8053121C_000018AC:
    addic. r3, r30, 0x64
    beq lbl_fn_8053121C_000018BC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8053121C_000018BC:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8053121C_000018D8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053121C_000018D8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053133C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x64
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8053133C_00001928
    addi r3, r31, 0x7c
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_8053133C_00001930
lbl_fn_8053133C_00001928:
    li r3, 0x0
    b lbl_fn_8053133C_0000193C
lbl_fn_8053133C_00001930:
    mr r3, r31
    bl fn_80531398
    li r3, 0x1
lbl_fn_8053133C_0000193C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80531398(void)
{
    nofralloc
    stwu r1, -0xcc0(r1)
    mflr r0
    stw r0, 0xcc4(r1)
    li r0, 0xcb8
    addi r11, r1, 0xc90
    stfd f31, 0xcb0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xca8
    stfd f30, 0xca0(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0xc98
    stfd f29, 0xc90(r1)
    psq_stx f29, r1, r0, 0, 0
    bl _savegpr_23
    mr r26, r3
    addi r3, r3, 0x64
    bl fn_8047059C
    srwi r28, r3, 1
    addi r3, r26, 0x64
    bl fn_80470580
    lis r4, lbl_8077A090@ha
    li r0, 0x0
    addi r4, r4, lbl_8077A090@l
    stw r4, 0x8(r1)
    mr r27, r3
    addi r25, r1, 0x8
    stw r0, 0xc(r1)
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x800
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0xc58(r1)
    bl memset
    addi r3, r1, 0xc18
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r28, 0x0
    mr r5, r28
    beq lbl_fn_80531398_000019F8
    subi r5, r28, 0x1
lbl_fn_80531398_000019F8:
    cmpwi r28, 0x0
    mr r3, r25
    beq lbl_fn_80531398_00001A0C
    addi r4, r27, 0x2
    b lbl_fn_80531398_00001A10
lbl_fn_80531398_00001A0C:
    mr r4, r27
lbl_fn_80531398_00001A10:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x8(r1)
    mr r3, r25
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    lis r28, lbl_807938C0@ha
    li r23, 0x0
    addi r27, r28, lbl_807938C0@l
    li r25, 0x2
    b lbl_fn_80531398_00001AD4
lbl_fn_80531398_00001A50:
    addi r3, r1, 0x8
    bl fn_8005B710
    mr r29, r3
    addi r4, r28, lbl_807938C0@l
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001A74
    li r0, 0x1
    b lbl_fn_80531398_00001AC8
lbl_fn_80531398_00001A74:
    mr r3, r29
    addi r4, r27, 0xa
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001A90
    li r0, 0x4
    b lbl_fn_80531398_00001AC8
lbl_fn_80531398_00001A90:
    mr r3, r29
    addi r4, r27, 0x12
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001AAC
    li r0, 0x3
    b lbl_fn_80531398_00001AC8
lbl_fn_80531398_00001AAC:
    mr r3, r29
    addi r4, r27, 0x1e
    bl fn_80686AF0
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    andc r0, r25, r0
lbl_fn_80531398_00001AC8:
    cmpwi r0, 0x0
    beq lbl_fn_80531398_00001AD4
    addi r23, r23, 0x1
lbl_fn_80531398_00001AD4:
    addi r3, r1, 0x8
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001A50
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x800
    bl memset
    addi r3, r1, 0xc18
    li r4, 0x0
    li r5, 0x40
    bl memset
    lwz r12, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, 0xc(r1)
    lwz r12, 0x8(r12)
    lwz r5, 0x10(r1)
    mtctr r12
    bctrl
    lwz r3, 0x70(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80531398_00001B38
    lis r4, fn_805311DC@ha
    addi r4, r4, fn_805311DC@l
    bl fn_80695A50
lbl_fn_80531398_00001B38:
    cmpwi r23, 0x0
    stw r23, 0x6c(r26)
    beq lbl_fn_80531398_00001B84
    mulli r3, r23, 0x110
    li r4, 0x0
    la r5, lbl_8087E4B4
    la r6, lbl_8087E4B0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80531814@ha
    lis r5, fn_805311DC@ha
    mr r7, r23
    li r6, 0x110
    addi r4, r4, fn_80531814@l
    addi r5, r5, fn_805311DC@l
    bl fn_80695720
    stw r3, 0x70(r26)
    b lbl_fn_80531398_00001B8C
lbl_fn_80531398_00001B84:
    li r0, 0x0
    stw r0, 0x70(r26)
lbl_fn_80531398_00001B8C:
    lis r29, lbl_807938C0@ha
    lfs f29, lbl_80887B30
    lfs f31, lbl_80887B44
    addi r30, r29, lbl_807938C0@l
    lfs f30, lbl_80887B48
    li r27, 0x0
    li r28, 0x0
    li r31, 0x2
    li r25, 0x4
    b lbl_fn_80531398_00001D80
lbl_fn_80531398_00001BB4:
    lwz r0, 0x6c(r26)
    cmplw r27, r0
    bge lbl_fn_80531398_00001D90
    addi r3, r1, 0x8
    bl fn_8005B710
    mr r24, r3
    addi r4, r29, lbl_807938C0@l
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001BE4
    li r0, 0x1
    b lbl_fn_80531398_00001C38
lbl_fn_80531398_00001BE4:
    mr r3, r24
    addi r4, r30, 0xa
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001C00
    li r0, 0x4
    b lbl_fn_80531398_00001C38
lbl_fn_80531398_00001C00:
    mr r3, r24
    addi r4, r30, 0x12
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001C1C
    li r0, 0x3
    b lbl_fn_80531398_00001C38
lbl_fn_80531398_00001C1C:
    mr r3, r24
    addi r4, r30, 0x1e
    bl fn_80686AF0
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    andc r0, r31, r0
lbl_fn_80531398_00001C38:
    lwz r3, 0x70(r26)
    stwx r0, r3, r28
    lwz r0, 0x70(r26)
    add r23, r0, r28
    lwzx r0, r28, r0
    cmpwi r0, 0x0
    beq lbl_fn_80531398_00001D80
    addi r3, r1, 0x8
    bl fn_8005B710
    bl fn_800DC3CC
    fmadds f0, f31, f1, f29
    addi r3, r1, 0x8
    stfs f0, 0x4(r23)
    bl fn_8005B710
    addi r4, r30, 0x32
    bl fn_80686AF0
    lwz r0, 0x70(r26)
    addi r3, r1, 0x8
    add r4, r0, r28
    stfs f30, 0x8(r4)
    bl fn_8005B710
    mr r24, r3
    addi r4, r30, 0x3a
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001CA8
    li r5, 0x0
    b lbl_fn_80531398_00001D18
lbl_fn_80531398_00001CA8:
    mr r3, r24
    addi r4, r30, 0x48
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001CC4
    li r5, 0x1
    b lbl_fn_80531398_00001D18
lbl_fn_80531398_00001CC4:
    mr r3, r24
    addi r4, r30, 0x52
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001CE0
    li r5, 0x2
    b lbl_fn_80531398_00001D18
lbl_fn_80531398_00001CE0:
    mr r3, r24
    addi r4, r30, 0x5e
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001CFC
    li r5, 0x3
    b lbl_fn_80531398_00001D18
lbl_fn_80531398_00001CFC:
    mr r3, r24
    addi r4, r30, 0x6c
    bl fn_80686AF0
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    andc r5, r25, r0
lbl_fn_80531398_00001D18:
    lwz r0, 0x70(r26)
    addi r3, r1, 0x8
    add r4, r0, r28
    stw r5, 0xc(r4)
    bl fn_8005B710
    lwz r0, 0x70(r26)
    mr r23, r3
    add r24, r0, r28
    addi r24, r24, 0x10
    cmplw r3, r24
    beq lbl_fn_80531398_00001D5C
    bl fn_80686A48
    mr r5, r3
    mr r3, r24
    mr r4, r23
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80531398_00001D5C:
    lwz r0, 0x70(r26)
    add r3, r0, r28
    lwzx r0, r28, r0
    lfs f29, 0x4(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80531398_00001D78
    stfs f29, 0x50(r26)
lbl_fn_80531398_00001D78:
    addi r28, r28, 0x110
    addi r27, r27, 0x1
lbl_fn_80531398_00001D80:
    addi r3, r1, 0x8
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80531398_00001BB4
lbl_fn_80531398_00001D90:
    li r0, 0xcb8
    addi r11, r1, 0xc90
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xcb0(r1)
    li r0, 0xca8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xca0(r1)
    li r0, 0xc98
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0xc90(r1)
    bl _restgpr_23
    lwz r0, 0xcc4(r1)
    mtlr r0
    addi r1, r1, 0xcc0
    blr
}
