#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8004B338(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_80087994(void);
extern void fn_80087BB4(void);
extern void fn_80087E9C(void);
extern void fn_8008826C(void);
extern void fn_80088AF4(void);
extern void fn_80088FAC(void);
extern void fn_8008937C(void);
extern void fn_805F98D0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80732F00[];

/* Small data declarations */
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_80880FB8;
extern u32 lbl_80880FBC;
extern u32 lbl_80880FC0;
extern u32 lbl_80880FC4;
extern u32 lbl_80880FC8;
extern u32 lbl_80880FCC;
extern u32 lbl_80880FD0;
extern u32 lbl_80880FD4;
extern u32 lbl_80880FD8;
extern u32 lbl_80880FDC;
extern u32 lbl_80880FE0;
extern u32 lbl_80880FE4;
extern u32 lbl_80880FE8;
extern u32 lbl_80880FEC;
extern u32 lbl_80880FF0;
extern u32 lbl_80880FF4;
extern u32 lbl_80880FF8;
extern u32 lbl_80880FFC;
extern u32 lbl_80881000;
extern u32 lbl_80881004;
extern u32 lbl_80881008;
extern u32 lbl_8088100C;
extern u32 lbl_80881010;
extern u32 lbl_80881014;
extern u32 lbl_80881018;
extern u32 lbl_8088101C;
extern u32 lbl_80881020;
extern u32 lbl_80881024;
extern u32 lbl_80881028;
extern u32 lbl_8088102C;
extern u32 lbl_80881030;
extern u32 lbl_80881034;
extern u32 lbl_80881038;
extern u32 lbl_8088103C;
extern u32 lbl_80881040;
extern u32 lbl_80881044;
extern u32 lbl_80881048;
extern u32 lbl_8088104C;
extern u32 lbl_80881050;
extern u32 lbl_80881054;
extern u32 lbl_80881058;
extern u32 lbl_8088105C;
extern u32 lbl_80881060;
extern u32 lbl_80881064;
extern u32 lbl_80881068;
extern u32 lbl_8088106C;
extern u32 lbl_80881070;
extern u32 lbl_80881074;
extern u32 lbl_80881078;
extern u32 lbl_8088107C;
extern u32 lbl_80881080;

/* Function declarations */
void fn_800B955C(void);
void fn_800B95C4(void);
void fn_800B9618(void);

asm void fn_800B955C(void)
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
    beq lbl_fn_800B955C_0000004C
    li r4, -0x1
    addi r3, r3, 0x268
    bl fn_8004B338
    addi r3, r30, 0x74
    li r4, -0x1
    bl fn_8004B338
    cmpwi r31, 0x0
    ble lbl_fn_800B955C_0000004C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800B955C_0000004C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B95C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087EFA8
    cmpwi r0, 0x0
    bne lbl_fn_800B95C4_000000AC
    lis r5, lbl_80732F00@ha
    li r3, 0x424
    addi r5, r5, lbl_80732F00@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800B95C4_000000A8
    bl fn_800B9618
lbl_fn_800B95C4_000000A8:
    stw r3, lbl_8087EFA8
lbl_fn_800B95C4_000000AC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B9618(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x1b0
    bl _savegpr_25
    lfs f2, lbl_80880FBC
    li r26, 0x0
    lfs f4, lbl_80880FB8
    li r27, 0x1
    lfs f3, lbl_80880FC0
    li r28, 0x3
    lfs f9, lbl_80880FC8
    li r0, 0xa
    lfs f0, lbl_80880FC4
    mr r31, r3
    stw r26, 0x0(r3)
    stw r26, 0x4(r3)
    stw r26, 0x8(r3)
    stw r26, 0xc(r3)
    stw r26, 0x10(r3)
    stw r26, 0x14(r3)
    stw r26, 0x18(r3)
    stw r26, 0x1c(r3)
    stw r26, 0x20(r3)
    stw r26, 0x24(r3)
    stw r26, 0x28(r3)
    stw r26, 0x2c(r3)
    stw r26, 0x30(r3)
    stw r0, 0x34(r3)
    stw r26, 0x38(r3)
    stfs f4, 0x3c(r3)
    stfs f4, 0x40(r3)
    stfs f4, 0x44(r3)
    stfs f2, 0x48(r3)
    stw r26, 0x50(r3)
    stw r27, 0x54(r3)
    stw r26, 0x58(r3)
    stw r28, 0x5c(r3)
    stw r28, 0x60(r3)
    stw r27, 0x64(r3)
    stfs f2, 0x68(r3)
    stfs f3, 0x6c(r3)
    stfs f3, 0x70(r3)
    stfs f4, 0x74(r3)
    stfs f0, 0x78(r3)
    stfs f2, 0x7c(r3)
    stfs f2, 0x84(r3)
    stfs f9, 0x80(r3)
    stfs f9, 0x88(r3)
    stfs f2, 0x60(r1)
    stfs f2, 0x64(r1)
    stfs f2, 0x68(r1)
    stfs f2, 0x6c(r1)
    stfs f2, 0x8c(r3)
    stfs f2, 0x90(r3)
    stfs f2, 0x94(r3)
    stfs f2, 0x98(r3)
    stfs f2, 0x70(r1)
    stfs f2, 0x74(r1)
    stfs f2, 0x78(r1)
    stfs f2, 0x7c(r1)
    lfs f0, lbl_80880FE4
    li r29, 0x140
    lfs f4, lbl_80880FDC
    li r30, 0xe0
    lfs f8, lbl_80880FCC
    addi r5, r1, 0x54
    lfs f7, lbl_80880FD0
    addi r25, r1, 0x48
    lfs f6, lbl_80880FD4
    mr r4, r25
    lfs f5, lbl_80880FD8
    lfs f3, lbl_80880FE0
    stfs f2, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f2, 0x9c(r3)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xa0(r3)
    stfs f2, 0xa4(r3)
    stfs f2, 0xa8(r3)
    stfs f2, 0xac(r3)
    stfs f2, 0xb0(r3)
    stfs f2, 0xb4(r3)
    stfs f2, 0xb8(r3)
    stw r26, 0xbc(r3)
    stw r26, 0xc0(r3)
    stw r26, 0xc4(r3)
    stw r26, 0xc8(r3)
    stw r26, 0xcc(r3)
    stw r26, 0xd0(r3)
    stw r27, 0xd4(r3)
    stw r26, 0xd8(r3)
    stw r26, 0xdc(r3)
    stw r27, 0xe0(r3)
    stfs f8, 0xe4(r3)
    stfs f7, 0xe8(r3)
    stfs f6, 0xec(r3)
    stfs f5, 0xf0(r3)
    stw r29, 0xf4(r3)
    stw r30, 0xf8(r3)
    stfs f4, 0xfc(r3)
    stfs f4, 0x100(r3)
    stw r27, 0x104(r3)
    stw r26, 0x108(r3)
    stfs f3, 0x10c(r3)
    stfs f9, 0x110(r3)
    stfs f9, 0x114(r3)
    stfs f9, 0x118(r3)
    stfs f2, 0x11c(r3)
    mr r3, r25
    stfs f2, 0x80(r1)
    stfs f2, 0x84(r1)
    stfs f2, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f2, 0x5c(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x50(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r25), 0, 0
    li r5, 0x2
    lfs f2, 0x50(r1)
    stfs f2, 0x128(r31)
    lfs f6, lbl_80880FCC
    psq_st f1, 0x120(r31), 0, 0
    lfs f5, lbl_80880FE8
    stw r26, 0x12c(r31)
    lfs f13, lbl_80880FD8
    stw r27, 0x138(r31)
    lfs f12, lbl_80880FB8
    stw r26, 0x13c(r31)
    lfs f4, lbl_80880FD0
    stw r27, 0x140(r31)
    lfs f3, lbl_80880FEC
    stw r27, 0x144(r31)
    lfs f11, lbl_80880FC8
    stw r26, 0x148(r31)
    lfs f10, lbl_80880FBC
    stw r26, 0x14c(r31)
    lfs f0, lbl_80880FF0
    stw r27, 0x150(r31)
    stw r26, 0x154(r31)
    lwz r3, lbl_8087EEE0
    lwz r0, 0x3c(r3)
    stw r0, 0x158(r31)
    lwz r3, lbl_8087EEE0
    lwz r0, 0x40(r3)
    stw r0, 0x15c(r31)
    stfs f6, 0x160(r31)
    stfs f5, 0x164(r31)
    stfs f6, 0x168(r31)
    stfs f5, 0x16c(r31)
    stfs f6, 0x170(r31)
    stfs f5, 0x174(r31)
    stw r5, 0x178(r31)
    stw r27, 0x17c(r31)
    stfs f13, 0x180(r31)
    stw r26, 0x184(r31)
    stw r26, 0x188(r31)
    stw r27, 0x18c(r31)
    stfs f13, 0x190(r31)
    stw r26, 0x194(r31)
    stfs f12, 0x198(r31)
    stfs f4, 0x19c(r31)
    stfs f3, 0x1a0(r31)
    stfs f3, 0x1a4(r31)
    stfs f11, 0x1a8(r31)
    stfs f10, 0x1ac(r31)
    stfs f12, 0x1b0(r31)
    stw r26, 0x1b4(r31)
    stfs f6, 0x1b8(r31)
    stw r26, 0x1bc(r31)
    stfs f10, 0x1c0(r31)
    stfs f0, 0x1c4(r31)
    lfs f0, lbl_8088100C
    li r0, 0x6
    lfs f4, lbl_80881004
    lfs f3, lbl_80881008
    lfs f8, lbl_80880FF4
    lfs f7, lbl_80880FF8
    lfs f6, lbl_80880FFC
    lfs f5, lbl_80881000
    stw r26, 0x1c8(r31)
    stw r5, 0x1cc(r31)
    stw r27, 0x1d0(r31)
    stw r27, 0x1d4(r31)
    stfs f8, 0x1d8(r31)
    stw r26, 0x1dc(r31)
    stw r26, 0x1e0(r31)
    stw r26, 0x1e4(r31)
    stw r0, 0x1e8(r31)
    stfs f7, 0x1ec(r31)
    stfs f6, 0x1f0(r31)
    stfs f5, 0x1f4(r31)
    stfs f10, 0x1f8(r31)
    stfs f10, 0x1fc(r31)
    stfs f10, 0x200(r31)
    stw r27, 0x204(r31)
    stw r26, 0x208(r31)
    stw r27, 0x224(r31)
    stw r27, 0x228(r31)
    stfs f12, 0x22c(r31)
    stw r26, 0x230(r31)
    stw r26, 0x234(r31)
    stfs f12, 0x238(r31)
    stfs f12, 0x23c(r31)
    stw r26, 0x240(r31)
    stw r26, 0x244(r31)
    stw r26, 0x248(r31)
    stfs f10, 0x24c(r31)
    stfs f12, 0x250(r31)
    stw r26, 0x254(r31)
    stw r26, 0x258(r31)
    stfs f4, 0x25c(r31)
    stfs f4, 0x260(r31)
    stw r26, 0x264(r31)
    stw r26, 0x268(r31)
    stw r5, 0x26c(r31)
    stw r28, 0x270(r31)
    stw r27, 0x274(r31)
    stw r26, 0x278(r31)
    stw r26, 0x27c(r31)
    stfs f3, 0x280(r31)
    stfs f3, 0x284(r31)
    stfs f10, 0x288(r31)
    stfs f0, 0x28c(r31)
    stfs f0, 0x290(r31)
    stfs f0, 0x294(r31)
    stfs f10, 0x298(r31)
    stfs f12, 0x29c(r31)
    lfs f4, lbl_80881024
    lfs f9, lbl_80881010
    lfs f8, lbl_80881014
    lfs f7, lbl_80881018
    lfs f6, lbl_8088101C
    lfs f5, lbl_80881020
    lfs f3, lbl_80881028
    lfs f0, lbl_8088102C
    stfs f10, 0x2a0(r31)
    stfs f12, 0x2a4(r31)
    stfs f9, 0x2a8(r31)
    stw r26, 0x2ac(r31)
    stw r26, 0x2b0(r31)
    stfs f10, 0x2b4(r31)
    stfs f8, 0x2b8(r31)
    stw r26, 0x2bc(r31)
    stw r26, 0x2c0(r31)
    stfs f7, 0x2c4(r31)
    stfs f12, 0x2c8(r31)
    stfs f6, 0x2cc(r31)
    stfs f13, 0x2d0(r31)
    stfs f5, 0x2d4(r31)
    stfs f12, 0x2d8(r31)
    stfs f4, 0x2dc(r31)
    stfs f3, 0x2e0(r31)
    stfs f4, 0x2e4(r31)
    stfs f12, 0x2e8(r31)
    stfs f12, 0x2ec(r31)
    stfs f10, 0x2f0(r31)
    stfs f10, 0x2f4(r31)
    stw r27, 0x2f8(r31)
    stfs f0, 0x2fc(r31)
    stfs f11, 0x300(r31)
    stfs f11, 0x304(r31)
    stw r26, 0x308(r31)
    stw r26, 0x30c(r31)
    stw r26, 0x310(r31)
    stw r29, 0x314(r31)
    stw r30, 0x318(r31)
    stw r26, 0x31c(r31)
    stw r26, 0x320(r31)
    stw r26, 0x324(r31)
    stw r26, 0x368(r31)
    stw r26, 0x36c(r31)
    stfs f10, 0x370(r31)
    stfs f10, 0x8(r1)
    stfs f12, 0xc(r1)
    stfs f12, 0x10(r1)
    stfs f12, 0x14(r1)
    addi r3, r1, 0x8
    stfs f12, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x18
    psq_l f2, 0x8(r3), 0, 0
    addi r4, r1, 0x28
    stfs f10, 0x1c(r1)
    addi r3, r1, 0x38
    lfs f7, lbl_80881030
    psq_st f1, 0x328(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f6, lbl_80881034
    lfs f5, lbl_80881038
    lfs f4, lbl_80880FE0
    lfs f3, lbl_8088103C
    lfs f0, lbl_80881040
    lwz r0, 0x0(r31)
    stfs f12, 0x20(r1)
    cmpwi r0, 0x0
    stfs f12, 0x24(r1)
    psq_st f2, 0x330(r31), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f12, 0x28(r1)
    stfs f12, 0x2c(r1)
    psq_st f1, 0x338(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0x30(r1)
    stfs f12, 0x34(r1)
    psq_st f2, 0x340(r31), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f12, 0x38(r1)
    stfs f12, 0x3c(r1)
    psq_st f1, 0x348(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f12, 0x40(r1)
    stfs f12, 0x44(r1)
    psq_st f2, 0x350(r31), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    lis r3, lbl_80732F00@ha
    addi r3, r3, lbl_80732F00@l
    psq_st f1, 0x358(r31), 0, 0
    addi r4, r3, 0x1
    psq_st f2, 0x360(r31), 0, 0
    stw r26, 0x374(r31)
    stw r26, 0x378(r31)
    stfs f10, 0x37c(r31)
    stfs f10, 0x380(r31)
    stfs f10, 0x384(r31)
    stfs f10, 0x388(r31)
    stfs f12, 0x38c(r31)
    stfs f12, 0x390(r31)
    stfs f12, 0x394(r31)
    stw r27, 0x398(r31)
    stw r27, 0x39c(r31)
    stw r27, 0x3a0(r31)
    stfs f10, 0x3a4(r31)
    stw r5, 0x3a8(r31)
    stw r26, 0x3d0(r31)
    stw r26, 0x3d4(r31)
    stfs f12, 0x3d8(r31)
    stw r26, 0x3dc(r31)
    stw r26, 0x3e0(r31)
    stfs f12, 0x3e4(r31)
    stfs f7, 0x408(r31)
    stfs f10, 0x40c(r31)
    stfs f10, 0x3e8(r31)
    stfs f10, 0x3ec(r31)
    stfs f10, 0x3f0(r31)
    stfs f10, 0x3f4(r31)
    stfs f10, 0x3f8(r31)
    stfs f10, 0x3fc(r31)
    stfs f10, 0x400(r31)
    stfs f10, 0x404(r31)
    stw r27, 0x410(r31)
    stw r26, 0x414(r31)
    stfs f11, 0x418(r31)
    stfs f11, 0x41c(r31)
    stfs f12, 0x420(r31)
    stfs f6, 0x20c(r31)
    stfs f5, 0x210(r31)
    stfs f4, 0x214(r31)
    stfs f3, 0x218(r31)
    stfs f0, 0x21c(r31)
    stw r5, 0x220(r31)
    lwz r3, lbl_8087EEE0
    lwz r3, 0x3c(r3)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    stw r0, 0xf4(r31)
    lwz r3, lbl_8087EEE0
    lwz r3, 0x40(r3)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    stw r0, 0xf8(r31)
    bne lbl_fn_800B9618_000006B4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_800B9618_000006B4
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x0(r31)
    b lbl_fn_800B9618_000006B8
lbl_fn_800B9618_000006B4:
    li r3, 0x0
lbl_fn_800B9618_000006B8:
    lis r4, lbl_80732F00@ha
    stw r3, 0x4c(r31)
    addi r30, r4, lbl_80732F00@l
    addi r4, r30, 0x8
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0xe
    bl fn_8008937C
    mr r26, r3
    mr r3, r25
    addi r4, r30, 0x16
    addi r5, r31, 0x38
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x21
    addi r5, r31, 0x414
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x27
    addi r5, r31, 0x3a8
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x31
    addi r5, r31, 0x30
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x31
    addi r5, r31, 0x34
    li r6, 0x1
    li r7, 0x1e
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80880FBC
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x37
    fmr f3, f1
    addi r5, r31, 0x1c0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FBC
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x43
    fmr f3, f1
    addi r5, r31, 0x1c4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x4e
    addi r5, r31, 0x398
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x57
    addi r5, r31, 0x39c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x64
    addi r5, r31, 0x3a0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    li r10, 0x8
    li r9, 0xa
    li r3, 0x1
    li r8, 0xc
    li r0, 0x40
    stw r3, 0x3ac(r31)
    mr r3, r26
    addi r4, r30, 0x73
    stw r10, 0x3b0(r31)
    addi r5, r31, 0x3ac
    li r6, 0x0
    li r7, 0x0
    stw r10, 0x3b4(r31)
    stw r9, 0x3b8(r31)
    stw r8, 0x3bc(r31)
    stw r9, 0x3c0(r31)
    stw r10, 0x3c4(r31)
    stw r10, 0x3c8(r31)
    stw r0, 0x3cc(r31)
    bl fn_80087994
    mr r3, r26
    addi r4, r30, 0x7a
    addi r5, r31, 0x3b0
    li r6, 0x0
    li r7, 0x3f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x7d
    addi r5, r31, 0x3b4
    li r6, 0x0
    li r7, 0x3f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x80
    addi r5, r31, 0x3b8
    li r6, 0x0
    li r7, 0x3f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x83
    addi r5, r31, 0x3bc
    li r6, 0x0
    li r7, 0x3f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x86
    addi r5, r31, 0x3c0
    li r6, 0x0
    li r7, 0x3f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x89
    addi r5, r31, 0x3c4
    li r6, 0x0
    li r7, 0x3f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x8c
    addi r5, r31, 0x3c8
    li r6, 0x0
    li r7, 0x3f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x8f
    addi r5, r31, 0x3cc
    li r6, 0x0
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x93
    addi r5, r31, 0x308
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0xa3
    addi r5, r31, 0x31c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0xad
    addi r5, r31, 0x320
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0xbc
    addi r5, r31, 0x28
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0xcd
    addi r5, r31, 0x2c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0xd9
    addi r5, r31, 0x50
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0xe8
    addi r5, r31, 0x204
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0xf5
    addi r5, r31, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0xff
    addi r5, r31, 0x208
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x112
    addi r5, r31, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x124
    addi r5, r31, 0x1c8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x132
    addi r5, r31, 0x1cc
    li r6, 0x0
    li r7, 0xa
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x141
    addi r5, r31, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x14f
    addi r5, r31, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x161
    addi r5, r31, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x16e
    addi r5, r31, 0x18
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x17b
    addi r5, r31, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x187
    addi r5, r31, 0x20
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881048
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x191
    fmr f3, f1
    addi r5, r31, 0x3a4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r3, 0x4c(r31)
    addi r4, r30, 0x19c
    bl fn_8008937C
    mr r28, r3
    lwz r3, 0x4c(r31)
    addi r4, r30, 0x1a3
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x1ac
    addi r5, r31, 0x230
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x1ba
    addi r5, r31, 0x234
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x1c4
    addi r5, r31, 0x224
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x1ca
    addi r5, r31, 0x228
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_8088104C
    mr r3, r25
    lfs f2, lbl_80880FD8
    addi r4, r30, 0x1d6
    lfs f3, lbl_8088101C
    addi r5, r31, 0x22c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r3, 0x4c(r31)
    addi r4, r30, 0x1df
    bl fn_8008937C
    lfs f1, lbl_80881050
    mr r25, r3
    lfs f2, lbl_80880FF8
    addi r4, r30, 0x1e3
    lfs f3, lbl_80880FC8
    addi r5, r31, 0x20c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881050
    mr r3, r25
    lfs f2, lbl_80880FF8
    addi r4, r30, 0x1ee
    lfs f3, lbl_80880FC8
    addi r5, r31, 0x210
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881050
    mr r3, r25
    lfs f2, lbl_80880FF8
    addi r4, r30, 0x1f9
    lfs f3, lbl_80880FC8
    addi r5, r31, 0x214
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881050
    mr r3, r25
    lfs f2, lbl_80880FF8
    addi r4, r30, 0x204
    lfs f3, lbl_80880FC8
    addi r5, r31, 0x218
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881050
    mr r3, r25
    lfs f2, lbl_80880FF8
    addi r4, r30, 0x20e
    lfs f3, lbl_80880FC8
    addi r5, r31, 0x21c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x21a
    addi r5, r31, 0x220
    li r6, 0x1
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881050
    mr r3, r25
    lfs f2, lbl_80880FF8
    addi r4, r30, 0x224
    lfs f3, lbl_80880FC8
    addi r5, r31, 0x1b0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x230
    addi r5, r31, 0x1b4
    li r6, -0xa
    li r7, 0xa
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x23c
    lfs f3, lbl_80880FBC
    addi r5, r31, 0x1b8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x246
    addi r5, r31, 0x1bc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lwz r3, 0x4c(r31)
    addi r4, r30, 0x251
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x25b
    addi r5, r31, 0x1d0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x263
    addi r5, r31, 0x1d4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881050
    mr r3, r25
    lfs f2, lbl_80880FF8
    addi r4, r30, 0x270
    lfs f3, lbl_8088101C
    addi r5, r31, 0x1d8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x276
    addi r5, r31, 0x1dc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x284
    addi r5, r31, 0x1e4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x295
    addi r5, r31, 0x1e0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FD8
    addi r4, r30, 0x2a1
    lfs f3, lbl_80881054
    addi r5, r31, 0x1f8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x2a7
    lfs f3, lbl_80881020
    addi r5, r31, 0x1f4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x2b2
    lfs f3, lbl_80881020
    addi r5, r31, 0x1ec
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x2bc
    lfs f3, lbl_80881020
    addi r5, r31, 0x1f0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x2c6
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x25b
    addi r5, r31, 0x324
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x2d2
    addi r5, r31, 0x368
    li r6, -0xa
    li r7, 0xa
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881058
    addi r4, r30, 0x2db
    lfs f3, lbl_8088101C
    addi r5, r31, 0x328
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881058
    addi r4, r30, 0x2e1
    lfs f3, lbl_8088101C
    addi r5, r31, 0x338
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881058
    addi r4, r30, 0x2e7
    lfs f3, lbl_8088101C
    addi r5, r31, 0x348
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    lfs f1, lbl_8088105C
    mr r3, r25
    lfs f2, lbl_80880FC8
    addi r4, r30, 0x2ed
    lfs f3, lbl_8088101C
    addi r5, r31, 0x358
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    mr r3, r25
    addi r4, r30, 0x2f3
    addi r5, r31, 0x36c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881058
    addi r4, r30, 0x2fe
    lfs f3, lbl_8088101C
    addi r5, r31, 0x370
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x31
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x25b
    addi r5, r31, 0x3e0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x8
    addi r5, r31, 0x3dc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881060
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x2d2
    lfs f3, lbl_8088101C
    addi r5, r31, 0x3e4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881060
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x307
    lfs f3, lbl_8088101C
    addi r5, r31, 0x408
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881060
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x311
    lfs f3, lbl_8088101C
    addi r5, r31, 0x40c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    li r26, 0x0
    li r27, 0x0
lbl_fn_800B9618_00001068:
    mr r5, r26
    addi r3, r1, 0x90
    addi r4, r30, 0x31d
    crclr 6
    bl sprintf
    add r5, r31, r27
    lfs f1, lbl_8088104C
    lfs f2, lbl_80880FD8
    mr r3, r25
    lfs f3, lbl_8088101C
    addi r4, r1, 0x90
    addi r5, r5, 0x3e8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmpwi r26, 0x8
    blt lbl_fn_800B9618_00001068
    lis r30, lbl_80732F00@ha
    mr r3, r28
    addi r30, r30, lbl_80732F00@l
    addi r4, r30, 0x326
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x32d
    addi r5, r31, 0x264
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x8
    addi r5, r31, 0x268
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x336
    addi r5, r31, 0x27c
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x33c
    addi r5, r31, 0x274
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881060
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x349
    lfs f3, lbl_8088101C
    addi r5, r31, 0x29c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FBC
    addi r4, r30, 0x353
    lfs f3, lbl_8088101C
    addi r5, r31, 0x28c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    lfs f1, lbl_80881064
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x35a
    lfs f3, lbl_8088101C
    addi r5, r31, 0x280
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881064
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x365
    lfs f3, lbl_8088101C
    addi r5, r31, 0x284
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x371
    addi r5, r31, 0x278
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FF8
    addi r4, r30, 0x37b
    lfs f3, lbl_8088101C
    addi r5, r31, 0x2a8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881064
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x382
    lfs f3, lbl_8088101C
    addi r5, r31, 0x288
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x38e
    addi r5, r31, 0x270
    li r6, 0x0
    li r7, 0x40
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x399
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x39f
    addi r5, r31, 0x54
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x3ae
    addi r5, r31, 0x58
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FBC
    addi r4, r30, 0x3ba
    lfs f3, lbl_8088101C
    addi r5, r31, 0x8c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FBC
    addi r4, r30, 0x3c3
    lfs f3, lbl_8088101C
    addi r5, r31, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FBC
    addi r4, r30, 0x3cc
    lfs f3, lbl_8088101C
    addi r5, r31, 0xac
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    mr r3, r25
    addi r4, r30, 0x3d5
    addi r5, r31, 0xbc
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x3dd
    addi r5, r31, 0xc0
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x3e5
    addi r5, r31, 0xc4
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x3ed
    addi r5, r31, 0xc8
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x3f6
    addi r5, r31, 0xcc
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x3ff
    addi r5, r31, 0xd0
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FD8
    addi r4, r30, 0x408
    lfs f3, lbl_80881048
    addi r5, r31, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FD8
    addi r4, r30, 0x414
    lfs f3, lbl_80881048
    addi r5, r31, 0x70
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x421
    addi r5, r31, 0x5c
    li r6, 0x1
    li r7, 0x8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x42b
    addi r5, r31, 0x64
    li r6, 0x0
    li r7, 0x80
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FBC
    addi r4, r30, 0x434
    lfs f3, lbl_80881004
    addi r5, r31, 0x68
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x443
    addi r5, r31, 0x60
    li r6, 0x0
    li r7, 0x40
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881068
    mr r3, r25
    lfs f2, lbl_8088106C
    addi r4, r30, 0x44e
    lfs f3, lbl_80880FC4
    addi r5, r31, 0x74
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x459
    lfs f3, lbl_80881048
    addi r5, r31, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x461
    lfs f3, lbl_80881048
    addi r5, r31, 0x7c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x469
    lfs f3, lbl_80881048
    addi r5, r31, 0x80
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x471
    lfs f3, lbl_80881048
    addi r5, r31, 0x84
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x479
    lfs f3, lbl_80881048
    addi r5, r31, 0x88
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x481
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x485
    addi r5, r31, 0xd4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x492
    addi r5, r31, 0xd8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x49c
    addi r5, r31, 0xdc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x4a5
    addi r5, r31, 0xe0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881070
    addi r4, r30, 0x4af
    lfs f3, lbl_80880FBC
    addi r5, r31, 0xe4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881070
    addi r4, r30, 0x4ba
    lfs f3, lbl_80880FBC
    addi r5, r31, 0xe8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881070
    addi r4, r30, 0x4c3
    lfs f3, lbl_80880FBC
    addi r5, r31, 0xec
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881070
    addi r4, r30, 0x4d3
    lfs f3, lbl_80880FBC
    addi r5, r31, 0xf0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x4e1
    addi r5, r31, 0xf4
    li r6, 0x10
    li r7, 0x140
    li r8, 0x10
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r6, lbl_8087EEE0
    mr r3, r25
    addi r4, r30, 0x4e8
    addi r5, r31, 0xf8
    lwz r7, 0x40(r6)
    li r6, 0x10
    li r8, 0x10
    li r9, 0x0
    srwi r0, r7, 31
    li r10, 0x0
    add r0, r0, r7
    srawi r7, r0, 1
    bl fn_800874C8
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FD8
    addi r4, r30, 0x4f0
    lfs f3, lbl_80881048
    addi r5, r31, 0xfc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FD8
    addi r4, r30, 0x4fb
    lfs f3, lbl_80881048
    addi r5, r31, 0x100
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x507
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x25b
    addi r5, r31, 0x240
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x8
    addi r5, r31, 0x244
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x512
    addi r5, r31, 0x248
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x2a1
    lfs f3, lbl_80881048
    addi r5, r31, 0x24c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x519
    lfs f3, lbl_80881048
    addi r5, r31, 0x250
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x51f
    addi r5, r31, 0x254
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x52a
    addi r5, r31, 0x258
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x533
    lfs f3, lbl_8088101C
    addi r5, r31, 0x25c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x543
    lfs f3, lbl_8088101C
    addi r5, r31, 0x260
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x551
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x25b
    addi r5, r31, 0x374
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x8
    addi r5, r31, 0x378
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881074
    mr r3, r25
    lfs f2, lbl_80881078
    addi r4, r30, 0x558
    lfs f3, lbl_80881014
    addi r5, r31, 0x38c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_80881068
    mr r3, r25
    lfs f2, lbl_8088106C
    addi r4, r30, 0x2a1
    lfs f3, lbl_80881014
    addi r5, r31, 0x390
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088107C
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x55e
    lfs f3, lbl_80881014
    addi r5, r31, 0x394
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881058
    addi r4, r30, 0x563
    lfs f3, lbl_8088101C
    addi r5, r31, 0x37c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    mr r3, r28
    addi r4, r30, 0x569
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x25b
    addi r5, r31, 0x2ac
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x8
    addi r5, r31, 0x2b0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FD8
    addi r4, r30, 0x56e
    lfs f3, lbl_8088101C
    addi r5, r31, 0x2b8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881064
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x573
    lfs f3, lbl_8088101C
    addi r5, r31, 0x2b4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x578
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x25b
    addi r5, r31, 0x2bc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x8
    addi r5, r31, 0x2c0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881064
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x573
    lfs f3, lbl_8088101C
    addi r5, r31, 0x2c4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x2a1
    lfs f3, lbl_8088101C
    addi r5, r31, 0x2d0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881010
    addi r4, r30, 0x57d
    lfs f3, lbl_80881054
    addi r5, r31, 0x2c8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881028
    addi r4, r30, 0x584
    lfs f3, lbl_80881054
    addi r5, r31, 0x2d8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80880FBC
    mr r3, r25
    lfs f2, lbl_80881028
    addi r4, r30, 0x58d
    lfs f3, lbl_80881054
    addi r5, r31, 0x2e0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FBC
    addi r4, r30, 0x592
    lfs f3, lbl_80881054
    addi r5, r31, 0x2e8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    lwz r3, 0x4c(r31)
    addi r4, r30, 0x597
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x59e
    addi r5, r31, 0x410
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x5a9
    addi r5, r31, 0x104
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FE4
    mr r3, r25
    lfs f2, lbl_80880FBC
    addi r4, r30, 0x5b8
    lfs f3, lbl_8088101C
    addi r5, r31, 0x120
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FF0
    addi r4, r30, 0x5c2
    lfs f3, lbl_80880FD8
    addi r5, r31, 0x10c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FBC
    addi r4, r30, 0x563
    lfs f3, lbl_8088101C
    addi r5, r31, 0x110
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    mr r3, r25
    addi r4, r30, 0x5d0
    addi r5, r31, 0x108
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x5d5
    addi r5, r31, 0x12c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x5e2
    addi r5, r31, 0x134
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x5eb
    addi r5, r31, 0x184
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x5f7
    addi r5, r31, 0x188
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x605
    addi r5, r31, 0x18c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x614
    lfs f3, lbl_8088101C
    addi r5, r31, 0x190
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x61e
    addi r5, r31, 0x17c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FBC
    mr r3, r25
    lfs f2, lbl_80880FF8
    addi r4, r30, 0x62b
    fmr f3, f1
    addi r5, r31, 0x180
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x631
    addi r5, r31, 0x178
    li r6, 0x0
    li r7, 0x5
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x63a
    addi r5, r31, 0x138
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x646
    addi r5, r31, 0x140
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x657
    addi r5, r31, 0x144
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x667
    addi r5, r31, 0x14c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x676
    addi r5, r31, 0x148
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x685
    addi r5, r31, 0x150
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x699
    addi r5, r31, 0x158
    li r6, 0x10
    li r7, 0x280
    li r8, 0x10
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x6a3
    addi r5, r31, 0x15c
    li r6, 0x10
    li r7, 0x210
    li r8, 0x10
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881080
    mr r3, r25
    lfs f2, lbl_80880FF0
    addi r4, r30, 0x6ae
    lfs f3, lbl_80880FD8
    addi r5, r31, 0x174
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881080
    mr r3, r25
    lfs f2, lbl_80880FF0
    addi r4, r30, 0x6b4
    lfs f3, lbl_80880FD8
    addi r5, r31, 0x170
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881080
    mr r3, r25
    lfs f2, lbl_80880FF0
    addi r4, r30, 0x6ba
    lfs f3, lbl_80880FD8
    addi r5, r31, 0x16c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881080
    mr r3, r25
    lfs f2, lbl_80880FF0
    addi r4, r30, 0x6c0
    lfs f3, lbl_80880FD8
    addi r5, r31, 0x168
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881080
    mr r3, r25
    lfs f2, lbl_80880FF0
    addi r4, r30, 0x6c6
    lfs f3, lbl_80880FD8
    addi r5, r31, 0x164
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881080
    mr r3, r25
    lfs f2, lbl_80880FF0
    addi r4, r30, 0x6cc
    lfs f3, lbl_80880FD8
    addi r5, r31, 0x160
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r25
    addi r4, r30, 0x6d2
    addi r5, r31, 0x130
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x6e0
    addi r5, r31, 0x13c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x6ec
    addi r5, r31, 0x154
    li r6, -0x7530
    li r7, 0x7530
    li r8, 0x8
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r3, 0x4c(r31)
    addi r4, r30, 0x6f1
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x6f9
    addi r5, r31, 0x2f8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FBC
    mr r3, r25
    lfs f2, lbl_80881070
    addi r4, r30, 0x708
    fmr f3, f1
    addi r5, r31, 0x2fc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881060
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x713
    lfs f3, lbl_80880FBC
    addi r5, r31, 0x300
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881060
    mr r3, r25
    lfs f2, lbl_80881044
    addi r4, r30, 0x721
    lfs f3, lbl_80880FBC
    addi r5, r31, 0x304
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r3, 0x4c(r31)
    addi r4, r30, 0x72f
    lfs f1, lbl_80880FB8
    addi r5, r31, 0x3c
    lfs f2, lbl_80880FBC
    li r6, 0x0
    lfs f3, lbl_8088101C
    li r7, 0x0
    bl fn_80088FAC
    lwz r3, 0x4c(r31)
    addi r4, r30, 0x73a
    bl fn_8008937C
    lfs f1, lbl_80880FB8
    mr r25, r3
    lfs f2, lbl_80880FD8
    addi r4, r30, 0x4f0
    lfs f3, lbl_80881048
    addi r5, r31, 0x418
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r25
    lfs f2, lbl_80880FD8
    addi r4, r30, 0x4fb
    lfs f3, lbl_80881048
    addi r5, r31, 0x41c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881068
    mr r3, r25
    lfs f2, lbl_8088106C
    addi r4, r30, 0x44e
    lfs f3, lbl_80880FC4
    addi r5, r31, 0x420
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    addi r11, r1, 0x1b0
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
