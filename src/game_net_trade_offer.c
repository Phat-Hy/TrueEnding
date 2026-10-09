#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004B338(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_800C16B4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_80117228(void);
extern void fn_803750E4(void);
extern void fn_80453DBC(void);
extern void fn_804741C0(void);
extern void fn_804786F8(void);
extern void fn_8047C7FC(void);
extern void fn_80512C94(void);
extern void fn_8052BBF0(void);
extern void fn_805BDCC0(void);
extern void fn_805BF414(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 jumptable_8079380C[];
extern u8 lbl_8075D31C[];
extern u8 lbl_8077927C[];
extern u8 lbl_807933A8[];

/* Small data declarations */
extern u32 lbl_8087D918;
extern u32 lbl_8087D91C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087FA20;
extern u32 lbl_80887AB0;

/* Function declarations */
void fn_8052DEA8(void);
void fn_8052DEBC(void);
void fn_8052DED0(void);
void fn_8052DED8(void);
void fn_8052DEF0(void);
void fn_8052E1A4(void);
void fn_8052E8D8(void);
void fn_8052E984(void);
void fn_8052EEC0(void);
void fn_8052F890(void);

asm void fn_8052DEA8(void)
{
    nofralloc
    psq_l f1, 0x64(r4), 0, 0
    lfs f2, 0x6c(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_8052DEBC(void)
{
    nofralloc
    psq_l f1, 0x70(r4), 0, 0
    lfs f2, 0x78(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_8052DED0(void)
{
    nofralloc
    lfs f1, 0x14(r3)
    blr
}

asm void fn_8052DED8(void)
{
    nofralloc
    lwz r4, 0x11f8(r3)
    subfic r3, r4, 0x1
    subi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_8052DEF0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplwi r4, 0x8
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r31, 0x464(r3)
    lwz r0, 0x11f0(r3)
    stw r0, 0x11f4(r3)
    stw r4, 0x464(r3)
    bgt lbl_fn_8052DEF0_00000138
    lis r5, jumptable_8079380C@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_8079380C@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lwz r0, 0x11d0(r3)
    li r30, 0x1
    stw r0, 0x11f0(r3)
    b lbl_fn_8052DEF0_00000138
    lwz r3, lbl_8087F430
    li r4, 0x146
    bl fn_803750E4
    lwz r0, 0x11d4(r29)
    stw r0, 0x11f0(r29)
    b lbl_fn_8052DEF0_00000138
    lwz r3, lbl_8087F430
    li r4, 0xec
    bl fn_803750E4
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_8052DEF0_000000E4
    lwz r3, lbl_8087F430
    li r4, 0x1ba
    bl fn_803750E4
lbl_fn_8052DEF0_000000E4:
    lwz r0, 0x11d8(r29)
    stw r0, 0x11f0(r29)
    b lbl_fn_8052DEF0_00000138
    lwz r0, 0x11dc(r3)
    stw r0, 0x11f0(r3)
    b lbl_fn_8052DEF0_00000138
    lwz r4, 0x11e4(r3)
    li r0, 0x0
    stw r4, 0x11f0(r3)
    stw r0, 0x1e0(r4)
    b lbl_fn_8052DEF0_00000138
    lwz r4, 0x11e4(r3)
    li r0, 0x1
    stw r4, 0x11f0(r3)
    stw r0, 0x1e0(r4)
    b lbl_fn_8052DEF0_00000138
    lwz r0, 0x11e0(r3)
    stw r0, 0x11f0(r3)
    b lbl_fn_8052DEF0_00000138
    lwz r0, 0x11e8(r3)
    stw r0, 0x11f0(r3)
lbl_fn_8052DEF0_00000138:
    lwz r3, 0x11f0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x464(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8052DEF0_00000178
    cmpwi r0, 0x1
    beq lbl_fn_8052DEF0_00000178
    lwz r3, 0x11f0(r29)
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
lbl_fn_8052DEF0_00000178:
    cmpwi r31, 0x0
    bne lbl_fn_8052DEF0_000001B0
    lwz r0, 0x464(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8052DEF0_000001B0
    addi r3, r1, 0x8
    li r4, 0x7
    bl fn_80117228
    addi r3, r29, 0x1340
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8052DEF0_000001B0:
    cmpwi r30, 0x0
    beq lbl_fn_8052DEF0_00000298
    lwz r3, 0x11f4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8052DEF0_00000204
    li r0, 0x1
    stw r0, 0x11f8(r29)
    addi r3, r3, 0x5c
    bl fn_804786F8
    lwz r4, 0x11f4(r29)
    stw r3, 0x454(r29)
    addi r3, r4, 0x5c
    bl fn_804786F8
    li r4, 0x0
    bl fn_805BDCC0
    lfs f0, 0x1368(r29)
    lfs f3, 0x14(r3)
    fneg f0, f0
    stfs f3, 0x458(r29)
    stfs f0, 0x45c(r29)
    b lbl_fn_8052DEF0_000002C0
lbl_fn_8052DEF0_00000204:
    lwz r3, 0x11d4(r29)
    li r0, 0x0
    stw r0, 0x11f8(r29)
    addi r3, r3, 0x5c
    bl fn_804786F8
    li r4, 0x0
    bl fn_805BDCC0
    lfs f1, lbl_80887AB0
    addi r4, r1, 0x18
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    addi r3, r1, 0x18
    lfs f2, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r29, 0x11fc
    lwz r5, 0x11d4(r29)
    stfs f2, 0x1204(r29)
    addi r3, r5, 0x5c
    psq_st f1, 0x0(r4), 0, 0
    bl fn_804786F8
    li r4, 0x0
    bl fn_805BDCC0
    lfs f1, lbl_80887AB0
    addi r4, r1, 0xc
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    addi r3, r1, 0xc
    lfs f2, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0x1208
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1210(r29)
    b lbl_fn_8052DEF0_000002C0
lbl_fn_8052DEF0_00000298:
    lwz r3, 0x11f0(r29)
    li r0, 0x1
    stw r0, 0x11f8(r29)
    addi r3, r3, 0x5c
    bl fn_804786F8
    lfs f3, lbl_80887AB0
    lfs f0, 0x1368(r29)
    stw r3, 0x454(r29)
    stfs f3, 0x458(r29)
    stfs f0, 0x45c(r29)
lbl_fn_8052DEF0_000002C0:
    lwz r0, 0x5c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8052DEF0_000002D8
    lwz r3, 0x11ec(r29)
    lwz r4, 0x464(r29)
    bl fn_80512C94
lbl_fn_8052DEF0_000002D8:
    li r0, 0x0
    stw r0, 0x1304(r29)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8052E1A4(void)
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
    addi r3, r30, 0x258
    mr r4, r31
    bl fn_804741C0
    lwz r0, 0x8(r31)
    addi r3, r30, 0x2b0
    stw r0, 0x260(r30)
    addi r4, r31, 0x58
    lwz r5, 0xc(r31)
    lwz r0, 0x10(r31)
    stw r0, 0x268(r30)
    stw r5, 0x264(r30)
    lwz r5, 0x14(r31)
    lwz r0, 0x18(r31)
    stw r0, 0x270(r30)
    stw r5, 0x26c(r30)
    lwz r5, 0x1c(r31)
    lwz r0, 0x20(r31)
    stw r0, 0x278(r30)
    stw r5, 0x274(r30)
    lwz r5, 0x24(r31)
    lwz r0, 0x28(r31)
    stw r0, 0x280(r30)
    stw r5, 0x27c(r30)
    lwz r5, 0x2c(r31)
    lwz r0, 0x30(r31)
    stw r0, 0x288(r30)
    stw r5, 0x284(r30)
    lwz r5, 0x34(r31)
    lwz r0, 0x38(r31)
    stw r0, 0x290(r30)
    stw r5, 0x28c(r30)
    lwz r5, 0x3c(r31)
    lwz r0, 0x40(r31)
    stw r0, 0x298(r30)
    stw r5, 0x294(r30)
    lwz r5, 0x44(r31)
    lwz r0, 0x48(r31)
    stw r0, 0x2a0(r30)
    stw r5, 0x29c(r30)
    lwz r5, 0x4c(r31)
    lwz r0, 0x50(r31)
    stw r0, 0x2a8(r30)
    stw r5, 0x2a4(r30)
    lwz r0, 0x54(r31)
    stw r0, 0x2ac(r30)
    bl fn_8052E984
    addi r3, r30, 0x2bc
    addi r4, r31, 0x64
    bl fn_8052EEC0
    lwz r0, 0x70(r31)
    addi r3, r30, 0x2d0
    stw r0, 0x2c8(r30)
    addi r4, r31, 0x78
    lwz r0, 0x74(r31)
    stw r0, 0x2cc(r30)
    bl fn_8052F890
    lwz r0, 0xc8(r31)
    addi r3, r30, 0x328
    stw r0, 0x320(r30)
    addi r4, r31, 0xd0
    lwz r0, 0xcc(r31)
    stw r0, 0x324(r30)
    bl fn_8052F890
    lwz r0, 0x120(r31)
    addi r3, r30, 0x3bc
    stw r0, 0x378(r30)
    addi r4, r31, 0x164
    psq_l f1, 0x124(r31), 0, 0
    psq_l f2, 0x12c(r31), 0, 0
    psq_l f3, 0x134(r31), 0, 0
    psq_l f4, 0x13c(r31), 0, 0
    psq_l f5, 0x144(r31), 0, 0
    psq_l f6, 0x14c(r31), 0, 0
    psq_st f6, 0x3a4(r30), 0, 0
    psq_st f1, 0x37c(r30), 0, 0
    psq_st f2, 0x384(r30), 0, 0
    psq_st f3, 0x38c(r30), 0, 0
    psq_st f4, 0x394(r30), 0, 0
    psq_st f5, 0x39c(r30), 0, 0
    psq_l f1, 0x154(r31), 0, 0
    lfs f2, 0x15c(r31)
    stfs f2, 0x3b4(r30)
    psq_st f1, 0x3ac(r30), 0, 0
    lfs f0, 0x160(r31)
    stfs f0, 0x3b8(r30)
    bl fn_8052E8D8
    lwz r0, 0x194(r31)
    addi r3, r30, 0x3f0
    stw r0, 0x3ec(r30)
    addi r4, r31, 0x198
    bl fn_8052BBF0
    lwz r0, 0x1e0(r31)
    addi r3, r30, 0x450
    stw r0, 0x438(r30)
    addi r4, r31, 0x1f8
    lwz r5, 0x1e4(r31)
    lwz r0, 0x1e8(r31)
    stw r0, 0x440(r30)
    stw r5, 0x43c(r30)
    lwz r5, 0x1ec(r31)
    lwz r0, 0x1f0(r31)
    stw r0, 0x448(r30)
    stw r5, 0x444(r30)
    lwz r0, 0x1f4(r31)
    stw r0, 0x44c(r30)
    bl fn_8047C7FC
    lwz r0, 0x234(r31)
    addi r3, r30, 0x4bc
    stw r0, 0x48c(r30)
    addi r4, r31, 0x264
    lwz r0, 0x238(r31)
    stw r0, 0x490(r30)
    lwz r0, 0x23c(r31)
    stw r0, 0x494(r30)
    lfs f0, 0x240(r31)
    stfs f0, 0x498(r30)
    lwz r5, 0x244(r31)
    lwz r0, 0x248(r31)
    stw r0, 0x4a0(r30)
    stw r5, 0x49c(r30)
    lwz r5, 0x24c(r31)
    lwz r0, 0x250(r31)
    stw r0, 0x4a8(r30)
    stw r5, 0x4a4(r30)
    psq_l f1, 0x254(r31), 0, 0
    lfs f2, 0x25c(r31)
    stfs f2, 0x4b4(r30)
    psq_st f1, 0x4ac(r30), 0, 0
    lwz r0, 0x260(r31)
    stw r0, 0x4b8(r30)
    bl fn_80453DBC
    lwz r3, lbl_8087EFB4
    lwz r0, 0x104(r3)
    stw r0, 0x0(r30)
    lwz r0, 0x108(r3)
    stw r0, 0x4(r30)
    psq_l f1, 0x10c(r3), 0, 0
    lfs f2, 0x114(r3)
    stfs f2, 0x10(r30)
    psq_st f1, 0x8(r30), 0, 0
    psq_l f1, 0x118(r3), 0, 0
    lfs f2, 0x120(r3)
    stfs f2, 0x1c(r30)
    psq_st f1, 0x14(r30), 0, 0
    psq_l f1, 0x124(r3), 0, 0
    lfs f2, 0x12c(r3)
    stfs f2, 0x28(r30)
    psq_st f1, 0x20(r30), 0, 0
    psq_l f1, 0x130(r3), 0, 0
    lfs f2, 0x138(r3)
    stfs f2, 0x34(r30)
    psq_st f1, 0x2c(r30), 0, 0
    lfs f0, 0x13c(r3)
    stfs f0, 0x38(r30)
    lfs f0, 0x140(r3)
    stfs f0, 0x3c(r30)
    lfs f0, 0x144(r3)
    stfs f0, 0x40(r30)
    lfs f0, 0x148(r3)
    stfs f0, 0x44(r30)
    lfs f0, 0x14c(r3)
    stfs f0, 0x48(r30)
    lfs f0, 0x150(r3)
    stfs f0, 0x4c(r30)
    lfs f0, 0x154(r3)
    stfs f0, 0x50(r30)
    lfs f0, 0x158(r3)
    stfs f0, 0x54(r30)
    psq_l f1, 0x15c(r3), 0, 0
    psq_l f2, 0x164(r3), 0, 0
    psq_l f3, 0x16c(r3), 0, 0
    psq_l f4, 0x174(r3), 0, 0
    psq_l f5, 0x17c(r3), 0, 0
    psq_l f6, 0x184(r3), 0, 0
    psq_st f6, 0x80(r30), 0, 0
    psq_st f1, 0x58(r30), 0, 0
    psq_st f2, 0x60(r30), 0, 0
    psq_st f3, 0x68(r30), 0, 0
    psq_st f4, 0x70(r30), 0, 0
    psq_st f5, 0x78(r30), 0, 0
    psq_l f1, 0x18c(r3), 0, 0
    psq_l f2, 0x194(r3), 0, 0
    psq_l f3, 0x19c(r3), 0, 0
    psq_l f4, 0x1a4(r3), 0, 0
    psq_l f5, 0x1ac(r3), 0, 0
    psq_l f6, 0x1b4(r3), 0, 0
    psq_l f7, 0x1bc(r3), 0, 0
    psq_l f8, 0x1c4(r3), 0, 0
    psq_st f8, 0xc0(r30), 0, 0
    psq_st f1, 0x88(r30), 0, 0
    psq_st f2, 0x90(r30), 0, 0
    psq_st f3, 0x98(r30), 0, 0
    psq_st f4, 0xa0(r30), 0, 0
    psq_st f5, 0xa8(r30), 0, 0
    psq_st f6, 0xb0(r30), 0, 0
    psq_st f7, 0xb8(r30), 0, 0
    lfs f0, 0x1cc(r3)
    addi r6, r3, 0x204
    stfs f0, 0xc8(r30)
    addi r4, r30, 0x194
    addi r5, r6, 0x94
    addi r0, r30, 0x1f4
    lfs f0, 0x1d0(r3)
    stfs f0, 0xcc(r30)
    psq_l f1, 0x1d4(r3), 0, 0
    psq_l f2, 0x1dc(r3), 0, 0
    psq_l f3, 0x1e4(r3), 0, 0
    psq_l f4, 0x1ec(r3), 0, 0
    psq_l f5, 0x1f4(r3), 0, 0
    psq_l f6, 0x1fc(r3), 0, 0
    psq_st f6, 0xf8(r30), 0, 0
    psq_st f1, 0xd0(r30), 0, 0
    psq_st f2, 0xd8(r30), 0, 0
    psq_st f3, 0xe0(r30), 0, 0
    psq_st f4, 0xe8(r30), 0, 0
    psq_st f5, 0xf0(r30), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x128(r30), 0, 0
    psq_st f1, 0x100(r30), 0, 0
    psq_st f2, 0x108(r30), 0, 0
    psq_st f3, 0x110(r30), 0, 0
    psq_st f4, 0x118(r30), 0, 0
    psq_st f5, 0x120(r30), 0, 0
    lwz r3, 0x234(r3)
    stw r3, 0x130(r30)
    lfs f0, 0x34(r6)
    stfs f0, 0x134(r30)
    lfs f0, 0x38(r6)
    stfs f0, 0x138(r30)
    psq_l f1, 0x3c(r6), 0, 0
    lfs f2, 0x44(r6)
    stfs f2, 0x144(r30)
    psq_st f1, 0x13c(r30), 0, 0
    lfs f0, 0x48(r6)
    stfs f0, 0x148(r30)
    psq_l f1, 0x4c(r6), 0, 0
    lfs f2, 0x54(r6)
    stfs f2, 0x154(r30)
    psq_st f1, 0x14c(r30), 0, 0
    lfs f0, 0x58(r6)
    stfs f0, 0x158(r30)
    psq_l f1, 0x5c(r6), 0, 0
    lfs f2, 0x64(r6)
    stfs f2, 0x164(r30)
    psq_st f1, 0x15c(r30), 0, 0
    lfs f0, 0x68(r6)
    stfs f0, 0x168(r30)
    psq_l f1, 0x6c(r6), 0, 0
    lfs f2, 0x74(r6)
    stfs f2, 0x174(r30)
    psq_st f1, 0x16c(r30), 0, 0
    lfs f0, 0x78(r6)
    stfs f0, 0x178(r30)
    psq_l f1, 0x7c(r6), 0, 0
    lfs f2, 0x84(r6)
    stfs f2, 0x184(r30)
    psq_st f1, 0x17c(r30), 0, 0
    psq_l f1, 0x88(r6), 0, 0
    lfs f2, 0x90(r6)
    stfs f2, 0x190(r30)
    psq_st f1, 0x188(r30), 0, 0
lbl_fn_8052E1A4_00000748:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_8052E1A4_00000748
    lwz r4, lbl_8087EFA8
    lwz r0, 0x104(r4)
    stw r0, 0x654(r30)
    lwz r0, 0x108(r4)
    stw r0, 0x658(r30)
    lfs f0, 0x10c(r4)
    stfs f0, 0x65c(r30)
    lwz r3, 0x110(r4)
    lwz r0, 0x114(r4)
    stw r0, 0x664(r30)
    stw r3, 0x660(r30)
    lwz r3, 0x118(r4)
    lwz r0, 0x11c(r4)
    stw r0, 0x66c(r30)
    stw r3, 0x668(r30)
    psq_l f1, 0x120(r4), 0, 0
    lfs f2, 0x128(r4)
    stfs f2, 0x678(r30)
    psq_st f1, 0x670(r30), 0, 0
    lwz r3, lbl_8087EFA8
    lfs f0, 0x3c(r3)
    stfs f0, 0x238(r30)
    lfs f0, 0x40(r3)
    stfs f0, 0x23c(r30)
    lfs f0, 0x44(r3)
    stfs f0, 0x240(r30)
    lfs f0, 0x48(r3)
    stfs f0, 0x244(r30)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x54(r3)
    stw r0, 0x53c(r30)
    lwz r0, 0x58(r3)
    stw r0, 0x540(r30)
    lwz r0, 0x5c(r3)
    stw r0, 0x544(r30)
    lwz r0, 0x60(r3)
    stw r0, 0x548(r30)
    lwz r0, 0x64(r3)
    stw r0, 0x54c(r30)
    lfs f0, 0x68(r3)
    stfs f0, 0x550(r30)
    lfs f0, 0x6c(r3)
    stfs f0, 0x554(r30)
    lfs f0, 0x70(r3)
    stfs f0, 0x558(r30)
    lfs f0, 0x74(r3)
    stfs f0, 0x55c(r30)
    lwz r4, 0x78(r3)
    lwz r0, 0x7c(r3)
    stw r0, 0x564(r30)
    stw r4, 0x560(r30)
    lwz r4, 0x80(r3)
    lwz r0, 0x84(r3)
    stw r0, 0x56c(r30)
    stw r4, 0x568(r30)
    lwz r0, 0x88(r3)
    stw r0, 0x570(r30)
    lwz r4, 0x8c(r3)
    lwz r0, 0x90(r3)
    stw r0, 0x578(r30)
    stw r4, 0x574(r30)
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    stw r0, 0x580(r30)
    stw r4, 0x57c(r30)
    lwz r4, 0x9c(r3)
    lwz r0, 0xa0(r3)
    stw r0, 0x588(r30)
    stw r4, 0x584(r30)
    lwz r4, 0xa4(r3)
    lwz r0, 0xa8(r3)
    stw r0, 0x590(r30)
    stw r4, 0x58c(r30)
    lwz r4, 0xac(r3)
    lwz r0, 0xb0(r3)
    stw r0, 0x598(r30)
    stw r4, 0x594(r30)
    lwz r4, 0xb4(r3)
    lwz r0, 0xb8(r3)
    stw r0, 0x5a0(r30)
    stw r4, 0x59c(r30)
    lwz r4, 0xbc(r3)
    lwz r0, 0xc0(r3)
    stw r0, 0x5a8(r30)
    stw r4, 0x5a4(r30)
    lwz r0, 0xc4(r3)
    stw r0, 0x5ac(r30)
    lwz r4, 0xc8(r3)
    lwz r0, 0xcc(r3)
    stw r0, 0x5b4(r30)
    stw r4, 0x5b0(r30)
    lwz r0, 0xd0(r3)
    stw r0, 0x5b8(r30)
    lwz r3, lbl_8087EFA8
    lwz r0, 0xd4(r3)
    stw r0, 0x50c(r30)
    lwz r0, 0xd8(r3)
    stw r0, 0x510(r30)
    lwz r0, 0xdc(r3)
    stw r0, 0x514(r30)
    lwz r0, 0xe0(r3)
    stw r0, 0x518(r30)
    lfs f0, 0xe4(r3)
    stfs f0, 0x51c(r30)
    lfs f0, 0xe8(r3)
    stfs f0, 0x520(r30)
    lfs f0, 0xec(r3)
    stfs f0, 0x524(r30)
    lfs f0, 0xf0(r3)
    stfs f0, 0x528(r30)
    lwz r0, 0xf4(r3)
    stw r0, 0x52c(r30)
    lwz r0, 0xf8(r3)
    stw r0, 0x530(r30)
    lfs f0, 0xfc(r3)
    stfs f0, 0x534(r30)
    lfs f0, 0x100(r3)
    stfs f0, 0x538(r30)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x324(r3)
    stw r0, 0x604(r30)
    psq_l f1, 0x328(r3), 0, 0
    psq_l f2, 0x330(r3), 0, 0
    psq_st f2, 0x610(r30), 0, 0
    psq_st f1, 0x608(r30), 0, 0
    psq_l f1, 0x338(r3), 0, 0
    psq_l f2, 0x340(r3), 0, 0
    psq_st f2, 0x620(r30), 0, 0
    psq_st f1, 0x618(r30), 0, 0
    psq_l f1, 0x348(r3), 0, 0
    psq_l f2, 0x350(r3), 0, 0
    psq_st f2, 0x630(r30), 0, 0
    psq_st f1, 0x628(r30), 0, 0
    psq_l f1, 0x358(r3), 0, 0
    psq_l f2, 0x360(r3), 0, 0
    psq_st f2, 0x640(r30), 0, 0
    psq_st f1, 0x638(r30), 0, 0
    lwz r0, 0x368(r3)
    stw r0, 0x648(r30)
    lwz r0, 0x36c(r3)
    stw r0, 0x64c(r30)
    lfs f0, 0x370(r3)
    stfs f0, 0x650(r30)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x3dc(r4)
    stw r0, 0x67c(r30)
    lwz r0, 0x3e0(r4)
    stw r0, 0x680(r30)
    lfs f0, 0x3e4(r4)
    stfs f0, 0x684(r30)
    lwz r3, 0x3e8(r4)
    lwz r0, 0x3ec(r4)
    stw r0, 0x68c(r30)
    stw r3, 0x688(r30)
    lwz r3, 0x3f0(r4)
    lwz r0, 0x3f4(r4)
    stw r0, 0x694(r30)
    stw r3, 0x690(r30)
    lwz r3, 0x3f8(r4)
    lwz r0, 0x3fc(r4)
    stw r0, 0x69c(r30)
    stw r3, 0x698(r30)
    lwz r3, 0x400(r4)
    lwz r0, 0x404(r4)
    stw r0, 0x6a4(r30)
    stw r3, 0x6a0(r30)
    lfs f0, 0x408(r4)
    stfs f0, 0x6a8(r30)
    lfs f0, 0x40c(r4)
    stfs f0, 0x6ac(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8052E8D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    stw r5, 0x8(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r3)
    stw r5, 0x10(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    addi r4, r4, 0x20
    stw r0, 0x1c(r3)
    stw r5, 0x18(r3)
    addi r3, r3, 0x20
    bl fn_804741C0
    lwz r0, 0x28(r31)
    mr r3, r30
    stw r0, 0x28(r30)
    lbz r0, 0x2c(r31)
    stb r0, 0x2c(r30)
    lbz r0, 0x2d(r31)
    stb r0, 0x2d(r30)
    lbz r0, 0x2e(r31)
    stb r0, 0x2e(r30)
    lbz r0, 0x2f(r31)
    stb r0, 0x2f(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8052E984(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmplw r3, r4
    mr r27, r3
    beq lbl_fn_8052E984_00000FFC
    lwz r0, 0x4(r4)
    lis r5, 0x7878
    lwz r29, 0x0(r4)
    addi r4, r5, 0x7879
    mulli r0, r0, 0x44
    add r30, r29, r0
    subf r0, r29, r30
    mulhw r0, r4, r0
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r4, r0, r4
    stw r4, 0x14(r1)
    lwz r28, 0x8(r3)
    cmplw r4, r28
    ble lbl_fn_8052E984_00000C08
    lis r3, 0x3c4
    subf r31, r28, r4
    subi r0, r3, 0x3c3d
    stw r31, 0x10(r1)
    subf r0, r28, r0
    cmplw r31, r0
    ble lbl_fn_8052E984_00000B78
    lis r4, lbl_8075D31C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075D31C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x107
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8052E984_00000B78:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r28, r0
    bge lbl_fn_8052E984_00000BC4
    addi r5, r28, 0x1
    lis r4, 0xcccd
    slwi r0, r5, 2
    addi r3, r1, 0x8
    subf r0, r5, r0
    subi r4, r4, 0x3333
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    stw r0, 0x8(r1)
    cmplw r0, r31
    bge lbl_fn_8052E984_00000BB8
    addi r3, r1, 0x10
lbl_fn_8052E984_00000BB8:
    lwz r0, 0x0(r3)
    add r28, r28, r0
    b lbl_fn_8052E984_00000EB8
lbl_fn_8052E984_00000BC4:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r28, r0
    bge lbl_fn_8052E984_00000BFC
    addi r0, r28, 0x1
    addi r3, r1, 0xc
    srwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplw r0, r31
    bge lbl_fn_8052E984_00000BF0
    addi r3, r1, 0x10
lbl_fn_8052E984_00000BF0:
    lwz r0, 0x0(r3)
    add r28, r28, r0
    b lbl_fn_8052E984_00000EB8
lbl_fn_8052E984_00000BFC:
    lis r3, 0x3c4
    subi r28, r3, 0x3c3d
    b lbl_fn_8052E984_00000EB8
lbl_fn_8052E984_00000C08:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl_fn_8052E984_00000C1C
    addi r4, r3, 0x4
    b lbl_fn_8052E984_00000C20
lbl_fn_8052E984_00000C1C:
    addi r4, r1, 0x14
lbl_fn_8052E984_00000C20:
    lwz r4, 0x0(r4)
    li r0, 0x44
    lwz r6, 0x0(r3)
    mulli r4, r4, 0x44
    add r7, r29, r4
    addi r4, r7, 0x43
    subf r4, r29, r4
    cmplw r29, r7
    divwu r4, r4, r0
    bge lbl_fn_8052E984_00000DE0
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_8052E984_00000D58
lbl_fn_8052E984_00000C54:
    lwz r0, 0x0(r29)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r29)
    psq_l f1, 0x14(r29), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lwz r0, 0x20(r29)
    stw r0, 0x20(r6)
    lfs f0, 0x24(r29)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r29)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r29)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r29)
    stfs f0, 0x30(r6)
    lwz r0, 0x38(r29)
    lwz r5, 0x34(r29)
    stw r5, 0x34(r6)
    stw r0, 0x38(r6)
    lwz r0, 0x40(r29)
    lwz r5, 0x3c(r29)
    stw r5, 0x3c(r6)
    stw r0, 0x40(r6)
    lwz r0, 0x44(r29)
    stw r0, 0x44(r6)
    lwz r0, 0x48(r29)
    stw r0, 0x48(r6)
    lfs f2, 0x54(r29)
    psq_l f1, 0x4c(r29), 0, 0
    psq_st f1, 0x4c(r6), 0, 0
    stfs f2, 0x54(r6)
    lfs f2, 0x60(r29)
    psq_l f1, 0x58(r29), 0, 0
    psq_st f1, 0x58(r6), 0, 0
    stfs f2, 0x60(r6)
    lwz r0, 0x64(r29)
    stw r0, 0x64(r6)
    lfs f0, 0x68(r29)
    stfs f0, 0x68(r6)
    lfs f0, 0x6c(r29)
    stfs f0, 0x6c(r6)
    lfs f0, 0x70(r29)
    stfs f0, 0x70(r6)
    lfs f0, 0x74(r29)
    stfs f0, 0x74(r6)
    lwz r0, 0x7c(r29)
    lwz r5, 0x78(r29)
    stw r5, 0x78(r6)
    stw r0, 0x7c(r6)
    lwz r0, 0x84(r29)
    lwz r5, 0x80(r29)
    addi r29, r29, 0x88
    stw r5, 0x80(r6)
    stw r0, 0x84(r6)
    addi r6, r6, 0x88
    bdnz lbl_fn_8052E984_00000C54
    andi. r4, r4, 0x1
    beq lbl_fn_8052E984_00000DE0
lbl_fn_8052E984_00000D58:
    mtctr r4
lbl_fn_8052E984_00000D5C:
    lwz r0, 0x0(r29)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r29)
    psq_l f1, 0x14(r29), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lwz r0, 0x20(r29)
    stw r0, 0x20(r6)
    lfs f0, 0x24(r29)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r29)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r29)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r29)
    stfs f0, 0x30(r6)
    lwz r0, 0x38(r29)
    lwz r5, 0x34(r29)
    stw r5, 0x34(r6)
    stw r0, 0x38(r6)
    lwz r0, 0x40(r29)
    lwz r5, 0x3c(r29)
    addi r29, r29, 0x44
    stw r5, 0x3c(r6)
    stw r0, 0x40(r6)
    addi r6, r6, 0x44
    bdnz lbl_fn_8052E984_00000D5C
lbl_fn_8052E984_00000DE0:
    lwz r4, 0x4(r3)
    lwz r0, 0x14(r1)
    cmplw r0, r4
    bge lbl_fn_8052E984_00000E00
    subf r0, r0, r4
    subf r0, r0, r4
    stw r0, 0x4(r3)
    b lbl_fn_8052E984_00000FFC
lbl_fn_8052E984_00000E00:
    cmplw r4, r0
    bge lbl_fn_8052E984_00000FFC
    mulli r0, r4, 0x44
    lwz r4, 0x0(r3)
    add r5, r4, r0
    b lbl_fn_8052E984_00000EAC
lbl_fn_8052E984_00000E18:
    cmpwi r5, 0x0
    beq lbl_fn_8052E984_00000E98
    lwz r0, 0x0(r7)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r7)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lwz r0, 0x20(r7)
    stw r0, 0x20(r5)
    lfs f0, 0x24(r7)
    stfs f0, 0x24(r5)
    lfs f0, 0x28(r7)
    stfs f0, 0x28(r5)
    lfs f0, 0x2c(r7)
    stfs f0, 0x2c(r5)
    lfs f0, 0x30(r7)
    stfs f0, 0x30(r5)
    lfs f0, 0x34(r7)
    stfs f0, 0x34(r5)
    lfs f0, 0x38(r7)
    stfs f0, 0x38(r5)
    lfs f0, 0x3c(r7)
    stfs f0, 0x3c(r5)
    lfs f0, 0x40(r7)
    stfs f0, 0x40(r5)
lbl_fn_8052E984_00000E98:
    lwz r4, 0x4(r3)
    addi r7, r7, 0x44
    addi r5, r5, 0x44
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
lbl_fn_8052E984_00000EAC:
    cmplw r7, r30
    bne lbl_fn_8052E984_00000E18
    b lbl_fn_8052E984_00000FFC
lbl_fn_8052E984_00000EB8:
    lwz r3, 0x0(r27)
    lwz r0, 0x4(r27)
    cmpwi r3, 0x0
    subf r0, r0, r0
    stw r0, 0x4(r27)
    beq lbl_fn_8052E984_00000EE0
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r27)
    stw r0, 0x8(r27)
lbl_fn_8052E984_00000EE0:
    lis r3, 0x3c4
    subi r0, r3, 0x3c3d
    cmplw r28, r0
    ble lbl_fn_8052E984_00000F14
    lis r4, lbl_8075D31C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075D31C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x107
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8052E984_00000F14:
    mulli r3, r28, 0x44
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8052E984_00000F48
    lis r3, __files@ha
    lis r4, lbl_8077927C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077927C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8052E984_00000F48:
    lwz r0, 0x4(r27)
    stw r31, 0x0(r27)
    mulli r0, r0, 0x44
    stw r28, 0x8(r27)
    add r4, r31, r0
    b lbl_fn_8052E984_00000FF4
lbl_fn_8052E984_00000F60:
    cmpwi r4, 0x0
    beq lbl_fn_8052E984_00000FE0
    lwz r0, 0x0(r29)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r29)
    psq_l f1, 0x14(r29), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lwz r0, 0x20(r29)
    stw r0, 0x20(r4)
    lfs f0, 0x24(r29)
    stfs f0, 0x24(r4)
    lfs f0, 0x28(r29)
    stfs f0, 0x28(r4)
    lfs f0, 0x2c(r29)
    stfs f0, 0x2c(r4)
    lfs f0, 0x30(r29)
    stfs f0, 0x30(r4)
    lfs f0, 0x34(r29)
    stfs f0, 0x34(r4)
    lfs f0, 0x38(r29)
    stfs f0, 0x38(r4)
    lfs f0, 0x3c(r29)
    stfs f0, 0x3c(r4)
    lfs f0, 0x40(r29)
    stfs f0, 0x40(r4)
lbl_fn_8052E984_00000FE0:
    lwz r3, 0x4(r27)
    addi r29, r29, 0x44
    addi r4, r4, 0x44
    addi r0, r3, 0x1
    stw r0, 0x4(r27)
lbl_fn_8052E984_00000FF4:
    cmplw r29, r30
    bne lbl_fn_8052E984_00000F60
lbl_fn_8052E984_00000FFC:
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8052EEC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmplw r3, r4
    mr r27, r3
    beq lbl_fn_8052EEC0_000019CC
    lwz r0, 0x4(r4)
    lis r5, 0x1062
    lwz r29, 0x0(r4)
    addi r4, r5, 0x4dd3
    mulli r0, r0, 0x1f4
    add r30, r29, r0
    subf r0, r29, r30
    mulhw r0, r4, r0
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r4, r0, r4
    stw r4, 0x14(r1)
    lwz r28, 0x8(r3)
    cmplw r4, r28
    ble lbl_fn_8052EEC0_00001144
    lis r3, 0x83
    subf r31, r28, r4
    addi r0, r3, 0x126e
    stw r31, 0x10(r1)
    subf r0, r28, r0
    cmplw r31, r0
    ble lbl_fn_8052EEC0_000010B4
    lis r4, lbl_8075D31C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075D31C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x107
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8052EEC0_000010B4:
    lis r3, 0x2c
    subi r0, r3, 0x4f31
    cmplw r28, r0
    bge lbl_fn_8052EEC0_00001100
    addi r5, r28, 0x1
    lis r4, 0xcccd
    slwi r0, r5, 2
    addi r3, r1, 0x8
    subf r0, r5, r0
    subi r4, r4, 0x3333
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    stw r0, 0x8(r1)
    cmplw r0, r31
    bge lbl_fn_8052EEC0_000010F4
    addi r3, r1, 0x10
lbl_fn_8052EEC0_000010F4:
    lwz r0, 0x0(r3)
    add r28, r28, r0
    b lbl_fn_8052EEC0_00001698
lbl_fn_8052EEC0_00001100:
    lis r3, 0x57
    addi r0, r3, 0x619e
    cmplw r28, r0
    bge lbl_fn_8052EEC0_00001138
    addi r0, r28, 0x1
    addi r3, r1, 0xc
    srwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplw r0, r31
    bge lbl_fn_8052EEC0_0000112C
    addi r3, r1, 0x10
lbl_fn_8052EEC0_0000112C:
    lwz r0, 0x0(r3)
    add r28, r28, r0
    b lbl_fn_8052EEC0_00001698
lbl_fn_8052EEC0_00001138:
    lis r3, 0x83
    addi r28, r3, 0x126e
    b lbl_fn_8052EEC0_00001698
lbl_fn_8052EEC0_00001144:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bge lbl_fn_8052EEC0_00001158
    addi r4, r3, 0x4
    b lbl_fn_8052EEC0_0000115C
lbl_fn_8052EEC0_00001158:
    addi r4, r1, 0x14
lbl_fn_8052EEC0_0000115C:
    lwz r4, 0x0(r4)
    li r0, 0x1f4
    lwz r6, 0x0(r3)
    mulli r4, r4, 0x1f4
    add r7, r29, r4
    addi r4, r7, 0x1f3
    subf r4, r29, r4
    divwu r4, r4, r0
    mtctr r4
    cmplw r29, r7
    bge lbl_fn_8052EEC0_000013D0
lbl_fn_8052EEC0_00001188:
    lwz r0, 0x0(r29)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r29)
    psq_l f1, 0x14(r29), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r29)
    psq_l f1, 0x20(r29), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    lfs f2, 0x34(r29)
    psq_l f1, 0x2c(r29), 0, 0
    psq_st f1, 0x2c(r6), 0, 0
    stfs f2, 0x34(r6)
    lfs f0, 0x38(r29)
    stfs f0, 0x38(r6)
    lfs f0, 0x3c(r29)
    stfs f0, 0x3c(r6)
    lfs f0, 0x40(r29)
    stfs f0, 0x40(r6)
    lfs f0, 0x44(r29)
    stfs f0, 0x44(r6)
    lfs f0, 0x48(r29)
    stfs f0, 0x48(r6)
    lfs f0, 0x4c(r29)
    stfs f0, 0x4c(r6)
    lfs f0, 0x50(r29)
    stfs f0, 0x50(r6)
    lfs f0, 0x54(r29)
    stfs f0, 0x54(r6)
    psq_l f2, 0x60(r29), 0, 0
    psq_l f3, 0x68(r29), 0, 0
    psq_l f4, 0x70(r29), 0, 0
    psq_l f5, 0x78(r29), 0, 0
    psq_l f6, 0x80(r29), 0, 0
    psq_l f1, 0x58(r29), 0, 0
    psq_st f1, 0x58(r6), 0, 0
    psq_st f2, 0x60(r6), 0, 0
    psq_st f3, 0x68(r6), 0, 0
    psq_st f4, 0x70(r6), 0, 0
    psq_st f5, 0x78(r6), 0, 0
    psq_st f6, 0x80(r6), 0, 0
    psq_l f2, 0x90(r29), 0, 0
    psq_l f3, 0x98(r29), 0, 0
    psq_l f4, 0xa0(r29), 0, 0
    psq_l f5, 0xa8(r29), 0, 0
    psq_l f6, 0xb0(r29), 0, 0
    psq_l f7, 0xb8(r29), 0, 0
    psq_l f8, 0xc0(r29), 0, 0
    psq_l f1, 0x88(r29), 0, 0
    psq_st f1, 0x88(r6), 0, 0
    psq_st f2, 0x90(r6), 0, 0
    psq_st f3, 0x98(r6), 0, 0
    psq_st f4, 0xa0(r6), 0, 0
    psq_st f5, 0xa8(r6), 0, 0
    psq_st f6, 0xb0(r6), 0, 0
    psq_st f7, 0xb8(r6), 0, 0
    psq_st f8, 0xc0(r6), 0, 0
    lfs f0, 0xc8(r29)
    stfs f0, 0xc8(r6)
    lfs f0, 0xcc(r29)
    stfs f0, 0xcc(r6)
    psq_l f2, 0xd8(r29), 0, 0
    psq_l f3, 0xe0(r29), 0, 0
    psq_l f4, 0xe8(r29), 0, 0
    psq_l f5, 0xf0(r29), 0, 0
    psq_l f6, 0xf8(r29), 0, 0
    psq_l f1, 0xd0(r29), 0, 0
    psq_st f1, 0xd0(r6), 0, 0
    psq_st f2, 0xd8(r6), 0, 0
    psq_st f3, 0xe0(r6), 0, 0
    psq_st f4, 0xe8(r6), 0, 0
    psq_st f5, 0xf0(r6), 0, 0
    psq_st f6, 0xf8(r6), 0, 0
    psq_l f2, 0x108(r29), 0, 0
    psq_l f3, 0x110(r29), 0, 0
    psq_l f4, 0x118(r29), 0, 0
    psq_l f5, 0x120(r29), 0, 0
    psq_l f6, 0x128(r29), 0, 0
    psq_l f1, 0x100(r29), 0, 0
    psq_st f1, 0x100(r6), 0, 0
    psq_st f2, 0x108(r6), 0, 0
    psq_st f3, 0x110(r6), 0, 0
    psq_st f4, 0x118(r6), 0, 0
    psq_st f5, 0x120(r6), 0, 0
    psq_st f6, 0x128(r6), 0, 0
    lwz r0, 0x130(r29)
    addi r4, r6, 0x194
    stw r0, 0x130(r6)
    addi r5, r29, 0x194
    addi r0, r6, 0x1f4
    lfs f0, 0x134(r29)
    stfs f0, 0x134(r6)
    lfs f0, 0x138(r29)
    stfs f0, 0x138(r6)
    lfs f2, 0x144(r29)
    psq_l f1, 0x13c(r29), 0, 0
    psq_st f1, 0x13c(r6), 0, 0
    stfs f2, 0x144(r6)
    lfs f0, 0x148(r29)
    stfs f0, 0x148(r6)
    lfs f2, 0x154(r29)
    psq_l f1, 0x14c(r29), 0, 0
    psq_st f1, 0x14c(r6), 0, 0
    stfs f2, 0x154(r6)
    lfs f0, 0x158(r29)
    stfs f0, 0x158(r6)
    lfs f2, 0x164(r29)
    psq_l f1, 0x15c(r29), 0, 0
    psq_st f1, 0x15c(r6), 0, 0
    stfs f2, 0x164(r6)
    lfs f0, 0x168(r29)
    stfs f0, 0x168(r6)
    lfs f2, 0x174(r29)
    psq_l f1, 0x16c(r29), 0, 0
    psq_st f1, 0x16c(r6), 0, 0
    stfs f2, 0x174(r6)
    lfs f0, 0x178(r29)
    stfs f0, 0x178(r6)
    lfs f2, 0x184(r29)
    psq_l f1, 0x17c(r29), 0, 0
    psq_st f1, 0x17c(r6), 0, 0
    stfs f2, 0x184(r6)
    lfs f2, 0x190(r29)
    psq_l f1, 0x188(r29), 0, 0
    psq_st f1, 0x188(r6), 0, 0
    stfs f2, 0x190(r6)
lbl_fn_8052EEC0_0000139C:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_8052EEC0_0000139C
    addi r29, r29, 0x1f4
    addi r6, r6, 0x1f4
    bdnz lbl_fn_8052EEC0_00001188
lbl_fn_8052EEC0_000013D0:
    lwz r0, 0x4(r3)
    lwz r5, 0x14(r1)
    cmplw r5, r0
    bge lbl_fn_8052EEC0_0000141C
    mulli r4, r0, 0x1f4
    subf r29, r5, r0
    lwz r5, 0x0(r3)
    subf r0, r29, r0
    stw r0, 0x4(r3)
    add r28, r5, r4
    b lbl_fn_8052EEC0_00001410
lbl_fn_8052EEC0_000013FC:
    subi r28, r28, 0x1f4
    li r4, -0x1
    mr r3, r28
    bl fn_8004B338
    subi r29, r29, 0x1
lbl_fn_8052EEC0_00001410:
    cmpwi r29, 0x0
    bne lbl_fn_8052EEC0_000013FC
    b lbl_fn_8052EEC0_000019CC
lbl_fn_8052EEC0_0000141C:
    cmplw r0, r5
    bge lbl_fn_8052EEC0_000019CC
    mulli r0, r0, 0x1f4
    lwz r4, 0x0(r3)
    add r5, r4, r0
    b lbl_fn_8052EEC0_0000168C
lbl_fn_8052EEC0_00001434:
    cmpwi r5, 0x0
    beq lbl_fn_8052EEC0_00001678
    lwz r0, 0x0(r7)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r7)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    lfs f2, 0x34(r7)
    psq_l f1, 0x2c(r7), 0, 0
    psq_st f1, 0x2c(r5), 0, 0
    stfs f2, 0x34(r5)
    lfs f0, 0x38(r7)
    stfs f0, 0x38(r5)
    lfs f0, 0x3c(r7)
    stfs f0, 0x3c(r5)
    lfs f0, 0x40(r7)
    stfs f0, 0x40(r5)
    lfs f0, 0x44(r7)
    stfs f0, 0x44(r5)
    lfs f0, 0x48(r7)
    stfs f0, 0x48(r5)
    lfs f0, 0x4c(r7)
    stfs f0, 0x4c(r5)
    lfs f0, 0x50(r7)
    stfs f0, 0x50(r5)
    lfs f0, 0x54(r7)
    stfs f0, 0x54(r5)
    psq_l f2, 0x60(r7), 0, 0
    psq_l f3, 0x68(r7), 0, 0
    psq_l f4, 0x70(r7), 0, 0
    psq_l f5, 0x78(r7), 0, 0
    psq_l f6, 0x80(r7), 0, 0
    psq_l f1, 0x58(r7), 0, 0
    psq_st f1, 0x58(r5), 0, 0
    psq_st f2, 0x60(r5), 0, 0
    psq_st f3, 0x68(r5), 0, 0
    psq_st f4, 0x70(r5), 0, 0
    psq_st f5, 0x78(r5), 0, 0
    psq_st f6, 0x80(r5), 0, 0
    psq_l f2, 0x90(r7), 0, 0
    psq_l f3, 0x98(r7), 0, 0
    psq_l f4, 0xa0(r7), 0, 0
    psq_l f5, 0xa8(r7), 0, 0
    psq_l f6, 0xb0(r7), 0, 0
    psq_l f7, 0xb8(r7), 0, 0
    psq_l f8, 0xc0(r7), 0, 0
    psq_l f1, 0x88(r7), 0, 0
    psq_st f1, 0x88(r5), 0, 0
    psq_st f2, 0x90(r5), 0, 0
    psq_st f3, 0x98(r5), 0, 0
    psq_st f4, 0xa0(r5), 0, 0
    psq_st f5, 0xa8(r5), 0, 0
    psq_st f6, 0xb0(r5), 0, 0
    psq_st f7, 0xb8(r5), 0, 0
    psq_st f8, 0xc0(r5), 0, 0
    lfs f0, 0xc8(r7)
    stfs f0, 0xc8(r5)
    lfs f0, 0xcc(r7)
    stfs f0, 0xcc(r5)
    psq_l f2, 0xd8(r7), 0, 0
    psq_l f3, 0xe0(r7), 0, 0
    psq_l f4, 0xe8(r7), 0, 0
    psq_l f5, 0xf0(r7), 0, 0
    psq_l f6, 0xf8(r7), 0, 0
    psq_l f1, 0xd0(r7), 0, 0
    psq_st f1, 0xd0(r5), 0, 0
    psq_st f2, 0xd8(r5), 0, 0
    psq_st f3, 0xe0(r5), 0, 0
    psq_st f4, 0xe8(r5), 0, 0
    psq_st f5, 0xf0(r5), 0, 0
    psq_st f6, 0xf8(r5), 0, 0
    psq_l f2, 0x108(r7), 0, 0
    psq_l f3, 0x110(r7), 0, 0
    psq_l f4, 0x118(r7), 0, 0
    psq_l f5, 0x120(r7), 0, 0
    psq_l f6, 0x128(r7), 0, 0
    psq_l f1, 0x100(r7), 0, 0
    psq_st f1, 0x100(r5), 0, 0
    psq_st f2, 0x108(r5), 0, 0
    psq_st f3, 0x110(r5), 0, 0
    psq_st f4, 0x118(r5), 0, 0
    psq_st f5, 0x120(r5), 0, 0
    psq_st f6, 0x128(r5), 0, 0
    lwz r0, 0x130(r7)
    addi r6, r5, 0x194
    stw r0, 0x130(r5)
    addi r4, r7, 0x194
    addi r0, r5, 0x1f4
    lfs f0, 0x134(r7)
    stfs f0, 0x134(r5)
    lfs f0, 0x138(r7)
    stfs f0, 0x138(r5)
    lfs f2, 0x144(r7)
    psq_l f1, 0x13c(r7), 0, 0
    psq_st f1, 0x13c(r5), 0, 0
    stfs f2, 0x144(r5)
    lfs f0, 0x148(r7)
    stfs f0, 0x148(r5)
    lfs f2, 0x154(r7)
    psq_l f1, 0x14c(r7), 0, 0
    psq_st f1, 0x14c(r5), 0, 0
    stfs f2, 0x154(r5)
    lfs f0, 0x158(r7)
    stfs f0, 0x158(r5)
    lfs f2, 0x164(r7)
    psq_l f1, 0x15c(r7), 0, 0
    psq_st f1, 0x15c(r5), 0, 0
    stfs f2, 0x164(r5)
    lfs f0, 0x168(r7)
    stfs f0, 0x168(r5)
    lfs f2, 0x174(r7)
    psq_l f1, 0x16c(r7), 0, 0
    psq_st f1, 0x16c(r5), 0, 0
    stfs f2, 0x174(r5)
    lfs f0, 0x178(r7)
    stfs f0, 0x178(r5)
    lfs f2, 0x184(r7)
    psq_l f1, 0x17c(r7), 0, 0
    psq_st f1, 0x17c(r5), 0, 0
    stfs f2, 0x184(r5)
    lfs f2, 0x190(r7)
    psq_l f1, 0x188(r7), 0, 0
    psq_st f1, 0x188(r5), 0, 0
    stfs f2, 0x190(r5)
lbl_fn_8052EEC0_00001650:
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r4)
    addi r4, r4, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_8052EEC0_00001650
lbl_fn_8052EEC0_00001678:
    lwz r4, 0x4(r3)
    addi r7, r7, 0x1f4
    addi r5, r5, 0x1f4
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
lbl_fn_8052EEC0_0000168C:
    cmplw r7, r30
    bne lbl_fn_8052EEC0_00001434
    b lbl_fn_8052EEC0_000019CC
lbl_fn_8052EEC0_00001698:
    lwz r26, 0x4(r27)
    lwz r4, 0x0(r27)
    mulli r3, r26, 0x1f4
    subf r0, r26, r26
    stw r0, 0x4(r27)
    add r31, r4, r3
    b lbl_fn_8052EEC0_000016C8
lbl_fn_8052EEC0_000016B4:
    subi r31, r31, 0x1f4
    li r4, -0x1
    mr r3, r31
    bl fn_8004B338
    subi r26, r26, 0x1
lbl_fn_8052EEC0_000016C8:
    cmpwi r26, 0x0
    bne lbl_fn_8052EEC0_000016B4
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8052EEC0_000016EC
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r27)
    stw r0, 0x8(r27)
lbl_fn_8052EEC0_000016EC:
    lis r3, 0x83
    addi r0, r3, 0x126e
    cmplw r28, r0
    ble lbl_fn_8052EEC0_00001720
    lis r4, lbl_8075D31C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075D31C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x107
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8052EEC0_00001720:
    mulli r3, r28, 0x1f4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8052EEC0_00001754
    lis r3, __files@ha
    lis r4, lbl_807933A8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807933A8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8052EEC0_00001754:
    lwz r0, 0x4(r27)
    stw r31, 0x0(r27)
    mulli r0, r0, 0x1f4
    stw r28, 0x8(r27)
    add r4, r31, r0
    b lbl_fn_8052EEC0_000019C4
lbl_fn_8052EEC0_0000176C:
    cmpwi r4, 0x0
    beq lbl_fn_8052EEC0_000019B0
    lwz r0, 0x0(r29)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r29)
    psq_l f1, 0x14(r29), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r29)
    psq_l f1, 0x20(r29), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
    lfs f2, 0x34(r29)
    psq_l f1, 0x2c(r29), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    stfs f2, 0x34(r4)
    lfs f0, 0x38(r29)
    stfs f0, 0x38(r4)
    lfs f0, 0x3c(r29)
    stfs f0, 0x3c(r4)
    lfs f0, 0x40(r29)
    stfs f0, 0x40(r4)
    lfs f0, 0x44(r29)
    stfs f0, 0x44(r4)
    lfs f0, 0x48(r29)
    stfs f0, 0x48(r4)
    lfs f0, 0x4c(r29)
    stfs f0, 0x4c(r4)
    lfs f0, 0x50(r29)
    stfs f0, 0x50(r4)
    lfs f0, 0x54(r29)
    stfs f0, 0x54(r4)
    psq_l f2, 0x60(r29), 0, 0
    psq_l f3, 0x68(r29), 0, 0
    psq_l f4, 0x70(r29), 0, 0
    psq_l f5, 0x78(r29), 0, 0
    psq_l f6, 0x80(r29), 0, 0
    psq_l f1, 0x58(r29), 0, 0
    psq_st f1, 0x58(r4), 0, 0
    psq_st f2, 0x60(r4), 0, 0
    psq_st f3, 0x68(r4), 0, 0
    psq_st f4, 0x70(r4), 0, 0
    psq_st f5, 0x78(r4), 0, 0
    psq_st f6, 0x80(r4), 0, 0
    psq_l f2, 0x90(r29), 0, 0
    psq_l f3, 0x98(r29), 0, 0
    psq_l f4, 0xa0(r29), 0, 0
    psq_l f5, 0xa8(r29), 0, 0
    psq_l f6, 0xb0(r29), 0, 0
    psq_l f7, 0xb8(r29), 0, 0
    psq_l f8, 0xc0(r29), 0, 0
    psq_l f1, 0x88(r29), 0, 0
    psq_st f1, 0x88(r4), 0, 0
    psq_st f2, 0x90(r4), 0, 0
    psq_st f3, 0x98(r4), 0, 0
    psq_st f4, 0xa0(r4), 0, 0
    psq_st f5, 0xa8(r4), 0, 0
    psq_st f6, 0xb0(r4), 0, 0
    psq_st f7, 0xb8(r4), 0, 0
    psq_st f8, 0xc0(r4), 0, 0
    lfs f0, 0xc8(r29)
    stfs f0, 0xc8(r4)
    lfs f0, 0xcc(r29)
    stfs f0, 0xcc(r4)
    psq_l f2, 0xd8(r29), 0, 0
    psq_l f3, 0xe0(r29), 0, 0
    psq_l f4, 0xe8(r29), 0, 0
    psq_l f5, 0xf0(r29), 0, 0
    psq_l f6, 0xf8(r29), 0, 0
    psq_l f1, 0xd0(r29), 0, 0
    psq_st f1, 0xd0(r4), 0, 0
    psq_st f2, 0xd8(r4), 0, 0
    psq_st f3, 0xe0(r4), 0, 0
    psq_st f4, 0xe8(r4), 0, 0
    psq_st f5, 0xf0(r4), 0, 0
    psq_st f6, 0xf8(r4), 0, 0
    psq_l f2, 0x108(r29), 0, 0
    psq_l f3, 0x110(r29), 0, 0
    psq_l f4, 0x118(r29), 0, 0
    psq_l f5, 0x120(r29), 0, 0
    psq_l f6, 0x128(r29), 0, 0
    psq_l f1, 0x100(r29), 0, 0
    psq_st f1, 0x100(r4), 0, 0
    psq_st f2, 0x108(r4), 0, 0
    psq_st f3, 0x110(r4), 0, 0
    psq_st f4, 0x118(r4), 0, 0
    psq_st f5, 0x120(r4), 0, 0
    psq_st f6, 0x128(r4), 0, 0
    lwz r0, 0x130(r29)
    addi r5, r4, 0x194
    stw r0, 0x130(r4)
    addi r3, r29, 0x194
    addi r0, r4, 0x1f4
    lfs f0, 0x134(r29)
    stfs f0, 0x134(r4)
    lfs f0, 0x138(r29)
    stfs f0, 0x138(r4)
    lfs f2, 0x144(r29)
    psq_l f1, 0x13c(r29), 0, 0
    psq_st f1, 0x13c(r4), 0, 0
    stfs f2, 0x144(r4)
    lfs f0, 0x148(r29)
    stfs f0, 0x148(r4)
    lfs f2, 0x154(r29)
    psq_l f1, 0x14c(r29), 0, 0
    psq_st f1, 0x14c(r4), 0, 0
    stfs f2, 0x154(r4)
    lfs f0, 0x158(r29)
    stfs f0, 0x158(r4)
    lfs f2, 0x164(r29)
    psq_l f1, 0x15c(r29), 0, 0
    psq_st f1, 0x15c(r4), 0, 0
    stfs f2, 0x164(r4)
    lfs f0, 0x168(r29)
    stfs f0, 0x168(r4)
    lfs f2, 0x174(r29)
    psq_l f1, 0x16c(r29), 0, 0
    psq_st f1, 0x16c(r4), 0, 0
    stfs f2, 0x174(r4)
    lfs f0, 0x178(r29)
    stfs f0, 0x178(r4)
    lfs f2, 0x184(r29)
    psq_l f1, 0x17c(r29), 0, 0
    psq_st f1, 0x17c(r4), 0, 0
    stfs f2, 0x184(r4)
    lfs f2, 0x190(r29)
    psq_l f1, 0x188(r29), 0, 0
    psq_st f1, 0x188(r4), 0, 0
    stfs f2, 0x190(r4)
lbl_fn_8052EEC0_00001988:
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r3)
    addi r3, r3, 0x10
    stfs f0, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_8052EEC0_00001988
lbl_fn_8052EEC0_000019B0:
    lwz r3, 0x4(r27)
    addi r29, r29, 0x1f4
    addi r4, r4, 0x1f4
    addi r0, r3, 0x1
    stw r0, 0x4(r27)
lbl_fn_8052EEC0_000019C4:
    cmplw r29, r30
    bne lbl_fn_8052EEC0_0000176C
lbl_fn_8052EEC0_000019CC:
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8052F890(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    psq_l f1, 0x4(r4), 0, 0
    mr r26, r3
    psq_st f1, 0x4(r3), 0, 0
    mr r27, r4
    psq_l f1, 0xc(r4), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    lwz r5, 0x40(r3)
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x24(r4), 0, 0
    cmpwi r5, 0x0
    lfs f2, 0x2c(r4)
    psq_st f1, 0x24(r3), 0, 0
    lwz r0, 0x0(r4)
    stfs f2, 0x2c(r3)
    lfs f3, 0x1c(r4)
    lfs f0, 0x20(r4)
    psq_l f1, 0x30(r4), 0, 0
    lfs f2, 0x38(r4)
    stw r0, 0x0(r3)
    lwz r28, 0x3c(r4)
    stfs f3, 0x1c(r3)
    stfs f0, 0x20(r3)
    psq_st f1, 0x30(r3), 0, 0
    stfs f2, 0x38(r3)
    beq lbl_fn_8052F890_00001A74
    lis r4, fn_800D5808@ha
    mr r3, r5
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_8052F890_00001A74:
    cmpwi r28, 0x0
    stw r28, 0x3c(r26)
    beq lbl_fn_8052F890_00001AC0
    mulli r3, r28, 0x30
    li r4, 0x0
    la r5, lbl_8087D91C
    la r6, lbl_8087D918
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    mr r7, r28
    li r6, 0x30
    addi r4, r4, fn_800D5738@l
    addi r5, r5, fn_800D5808@l
    bl fn_80695720
    stw r3, 0x40(r26)
    b lbl_fn_8052F890_00001AC8
lbl_fn_8052F890_00001AC0:
    li r0, 0x0
    stw r0, 0x40(r26)
lbl_fn_8052F890_00001AC8:
    li r30, 0x0
    li r28, 0x0
    b lbl_fn_8052F890_00001B60
lbl_fn_8052F890_00001AD4:
    lwz r0, 0x40(r27)
    lwz r3, 0x40(r26)
    add r29, r0, r28
    lwz r0, 0x4(r29)
    add r31, r3, r28
    lwz r4, 0x0(r29)
    addi r3, r31, 0x20
    stw r4, 0x0(r31)
    addi r4, r29, 0x20
    stw r0, 0x4(r31)
    lwz r0, 0xc(r29)
    lwz r5, 0x8(r29)
    stw r5, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r0, 0x14(r29)
    lwz r5, 0x10(r29)
    stw r5, 0x10(r31)
    stw r0, 0x14(r31)
    lwz r0, 0x1c(r29)
    lwz r5, 0x18(r29)
    stw r5, 0x18(r31)
    stw r0, 0x1c(r31)
    bl fn_804741C0
    lwz r0, 0x28(r29)
    addi r28, r28, 0x30
    stw r0, 0x28(r31)
    addi r30, r30, 0x1
    lbz r0, 0x2c(r29)
    stb r0, 0x2c(r31)
    lbz r0, 0x2d(r29)
    stb r0, 0x2d(r31)
    lbz r0, 0x2e(r29)
    stb r0, 0x2e(r31)
    lbz r0, 0x2f(r29)
    stb r0, 0x2f(r31)
lbl_fn_8052F890_00001B60:
    lwz r0, 0x3c(r26)
    cmplw r30, r0
    blt lbl_fn_8052F890_00001AD4
    lwz r5, 0x44(r27)
    addi r11, r1, 0x20
    lwz r4, 0x48(r27)
    mr r3, r26
    lwz r0, 0x4c(r27)
    stw r5, 0x44(r26)
    stw r4, 0x48(r26)
    stw r0, 0x4c(r26)
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
