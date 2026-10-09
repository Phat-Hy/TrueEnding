#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_800928B0(void);
extern void fn_8009E5A0(void);
extern void fn_8009EB20(void);
extern void fn_8009EE30(void);
extern void fn_8009F788(void);
extern void fn_8009FFCC(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_80376224(void);
extern void fn_803EC758(void);
extern void fn_803ED610(void);
extern void fn_803FDFC0(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_807525D8[];
extern u8 lbl_807526BC[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8770[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_808860C0;
extern u32 lbl_808860C4;
extern u32 lbl_808860C8;
extern u32 lbl_808860CC;
extern u32 lbl_808860D0;
extern u32 lbl_808860D4;
extern u32 lbl_808860D8;
extern u32 lbl_808860DC;
extern u32 lbl_808860E0;
extern u32 lbl_808860E4;
extern u32 lbl_808860E8;
extern u32 lbl_808860EC;
extern u32 lbl_808860F0;
extern u32 lbl_808860F4;
extern u32 lbl_808860FC;
extern u32 lbl_80886100;
extern u32 lbl_80886104;
extern u32 lbl_80886108;
extern u32 lbl_8088610C;
extern u32 lbl_80886110;
extern u32 lbl_80886114;

/* Function declarations */
void fn_803FEF78(void);
void fn_803FF818(void);
void fn_803FF834(void);
void fn_803FF94C(void);
void fn_803FF9A4(void);
void fn_803FFC50(void);
void fn_803FFD10(void);
void fn_803FFF40(void);

asm void fn_803FEF78(void)
{
    nofralloc
    stwu r1, -0x5b0(r1)
    mflr r0
    lwz r5, 0x14(r5)
    stw r0, 0x5b4(r1)
    stw r31, 0x5ac(r1)
    mr r31, r4
    stw r30, 0x5a8(r1)
    mr r30, r3
    lwz r0, 0x360(r3)
    cmplw r5, r0
    bne lbl_fn_803FEF78_00000608
    lwz r4, 0x35c(r3)
    lfs f0, lbl_808860C0
    lfs f7, 0x4(r4)
    fcmpo cr0, f7, f0
    ble lbl_fn_803FEF78_00000284
    lfs f0, 0x390(r3)
    lwz r0, 0x388(r3)
    fneg f1, f0
    cmpwi r0, 0x0
    beq lbl_fn_803FEF78_00000080
    cmpwi r0, 0x1
    beq lbl_fn_803FEF78_000000D4
    cmpwi r0, 0x2
    beq lbl_fn_803FEF78_00000128
    cmpwi r0, 0x3
    beq lbl_fn_803FEF78_0000017C
    cmpwi r0, 0x4
    beq lbl_fn_803FEF78_000001D4
    cmpwi r0, 0x5
    beq lbl_fn_803FEF78_0000022C
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_00000080:
    addi r3, r1, 0x248
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x248
    addi r5, r1, 0x278
    bl fn_805F89F0
    addi r3, r1, 0x278
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
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_000000D4:
    addi r3, r1, 0x2a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x2a8
    addi r5, r1, 0x2d8
    bl fn_805F89F0
    addi r3, r1, 0x2d8
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
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_00000128:
    addi r3, r1, 0x308
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x308
    addi r5, r1, 0x338
    bl fn_805F89F0
    addi r3, r1, 0x338
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
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_0000017C:
    fneg f1, f1
    addi r3, r1, 0x368
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x368
    addi r5, r1, 0x398
    bl fn_805F89F0
    addi r3, r1, 0x398
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
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_000001D4:
    fneg f1, f1
    addi r3, r1, 0x3c8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x3c8
    addi r5, r1, 0x3f8
    bl fn_805F89F0
    addi r3, r1, 0x3f8
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
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_0000022C:
    fneg f1, f1
    addi r3, r1, 0x428
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x428
    addi r5, r1, 0x458
    bl fn_805F89F0
    addi r3, r1, 0x458
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
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_00000284:
    bge lbl_fn_803FEF78_000004C4
    lwz r0, 0x388(r3)
    lfs f1, 0x390(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FEF78_000002C4
    cmpwi r0, 0x1
    beq lbl_fn_803FEF78_00000318
    cmpwi r0, 0x2
    beq lbl_fn_803FEF78_0000036C
    cmpwi r0, 0x3
    beq lbl_fn_803FEF78_000003C0
    cmpwi r0, 0x4
    beq lbl_fn_803FEF78_00000418
    cmpwi r0, 0x5
    beq lbl_fn_803FEF78_00000470
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_000002C4:
    addi r3, r1, 0x8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
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
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_00000318:
    addi r3, r1, 0x68
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
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
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_0000036C:
    addi r3, r1, 0xc8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
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
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_000003C0:
    fneg f1, f1
    addi r3, r1, 0x128
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x128
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
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
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_00000418:
    fneg f1, f1
    addi r3, r1, 0x188
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x188
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    addi r3, r1, 0x1b8
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
    b lbl_fn_803FEF78_000004C4
lbl_fn_803FEF78_00000470:
    fneg f1, f1
    addi r3, r1, 0x1e8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x1e8
    addi r5, r1, 0x218
    bl fn_805F89F0
    addi r3, r1, 0x218
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
lbl_fn_803FEF78_000004C4:
    lfs f0, 0x378(r30)
    lwz r0, 0x388(r30)
    fneg f1, f0
    cmpwi r0, 0x0
    beq lbl_fn_803FEF78_00000504
    cmpwi r0, 0x1
    beq lbl_fn_803FEF78_00000518
    cmpwi r0, 0x2
    beq lbl_fn_803FEF78_0000052C
    cmpwi r0, 0x3
    beq lbl_fn_803FEF78_00000540
    cmpwi r0, 0x4
    beq lbl_fn_803FEF78_00000558
    cmpwi r0, 0x5
    beq lbl_fn_803FEF78_00000570
    b lbl_fn_803FEF78_00000588
lbl_fn_803FEF78_00000504:
    addi r3, r1, 0x548
    li r4, 0x78
    bl fn_805F8E70
    addi r4, r1, 0x548
    b lbl_fn_803FEF78_000005C4
lbl_fn_803FEF78_00000518:
    addi r3, r1, 0x548
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x548
    b lbl_fn_803FEF78_000005C4
lbl_fn_803FEF78_0000052C:
    addi r3, r1, 0x548
    li r4, 0x7a
    bl fn_805F8E70
    addi r4, r1, 0x548
    b lbl_fn_803FEF78_000005C4
lbl_fn_803FEF78_00000540:
    fneg f1, f1
    addi r3, r1, 0x548
    li r4, 0x78
    bl fn_805F8E70
    addi r4, r1, 0x548
    b lbl_fn_803FEF78_000005C4
lbl_fn_803FEF78_00000558:
    fneg f1, f1
    addi r3, r1, 0x548
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x548
    b lbl_fn_803FEF78_000005C4
lbl_fn_803FEF78_00000570:
    fneg f1, f1
    addi r3, r1, 0x548
    li r4, 0x7a
    bl fn_805F8E70
    addi r4, r1, 0x548
    b lbl_fn_803FEF78_000005C4
lbl_fn_803FEF78_00000588:
    lfs f7, lbl_808860C0
    addi r4, r1, 0x548
    lfs f0, lbl_808860C4
    stfs f7, 0x574(r1)
    stfs f7, 0x56c(r1)
    stfs f7, 0x568(r1)
    stfs f7, 0x564(r1)
    stfs f7, 0x560(r1)
    stfs f7, 0x558(r1)
    stfs f7, 0x554(r1)
    stfs f7, 0x550(r1)
    stfs f7, 0x54c(r1)
    stfs f0, 0x570(r1)
    stfs f0, 0x55c(r1)
    stfs f0, 0x548(r1)
lbl_fn_803FEF78_000005C4:
    mr r3, r31
    addi r5, r1, 0x578
    bl fn_805F89F0
    addi r3, r1, 0x578
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
    b lbl_fn_803FEF78_00000888
lbl_fn_803FEF78_00000608:
    lfs f0, 0x37c(r3)
    lwz r0, 0x388(r3)
    fneg f1, f0
    cmpwi r0, 0x0
    beq lbl_fn_803FEF78_00000648
    cmpwi r0, 0x1
    beq lbl_fn_803FEF78_0000065C
    cmpwi r0, 0x2
    beq lbl_fn_803FEF78_00000670
    cmpwi r0, 0x3
    beq lbl_fn_803FEF78_00000684
    cmpwi r0, 0x4
    beq lbl_fn_803FEF78_0000069C
    cmpwi r0, 0x5
    beq lbl_fn_803FEF78_000006B4
    b lbl_fn_803FEF78_000006CC
lbl_fn_803FEF78_00000648:
    addi r3, r1, 0x4e8
    li r4, 0x78
    bl fn_805F8E70
    addi r4, r1, 0x4e8
    b lbl_fn_803FEF78_00000708
lbl_fn_803FEF78_0000065C:
    addi r3, r1, 0x4e8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x4e8
    b lbl_fn_803FEF78_00000708
lbl_fn_803FEF78_00000670:
    addi r3, r1, 0x4e8
    li r4, 0x7a
    bl fn_805F8E70
    addi r4, r1, 0x4e8
    b lbl_fn_803FEF78_00000708
lbl_fn_803FEF78_00000684:
    fneg f1, f1
    addi r3, r1, 0x4e8
    li r4, 0x78
    bl fn_805F8E70
    addi r4, r1, 0x4e8
    b lbl_fn_803FEF78_00000708
lbl_fn_803FEF78_0000069C:
    fneg f1, f1
    addi r3, r1, 0x4e8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x4e8
    b lbl_fn_803FEF78_00000708
lbl_fn_803FEF78_000006B4:
    fneg f1, f1
    addi r3, r1, 0x4e8
    li r4, 0x7a
    bl fn_805F8E70
    addi r4, r1, 0x4e8
    b lbl_fn_803FEF78_00000708
lbl_fn_803FEF78_000006CC:
    lfs f7, lbl_808860C0
    addi r4, r1, 0x4e8
    lfs f0, lbl_808860C4
    stfs f7, 0x514(r1)
    stfs f7, 0x50c(r1)
    stfs f7, 0x508(r1)
    stfs f7, 0x504(r1)
    stfs f7, 0x500(r1)
    stfs f7, 0x4f8(r1)
    stfs f7, 0x4f4(r1)
    stfs f7, 0x4f0(r1)
    stfs f7, 0x4ec(r1)
    stfs f0, 0x510(r1)
    stfs f0, 0x4fc(r1)
    stfs f0, 0x4e8(r1)
lbl_fn_803FEF78_00000708:
    mr r3, r31
    addi r5, r1, 0x518
    bl fn_805F89F0
    addi r3, r1, 0x518
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
    lfs f0, 0x380(r30)
    lwz r0, 0x38c(r30)
    fneg f1, f0
    cmpwi r0, 0x0
    beq lbl_fn_803FEF78_00000788
    cmpwi r0, 0x1
    beq lbl_fn_803FEF78_0000079C
    cmpwi r0, 0x2
    beq lbl_fn_803FEF78_000007B0
    cmpwi r0, 0x3
    beq lbl_fn_803FEF78_000007C4
    cmpwi r0, 0x4
    beq lbl_fn_803FEF78_000007DC
    cmpwi r0, 0x5
    beq lbl_fn_803FEF78_000007F4
    b lbl_fn_803FEF78_0000080C
lbl_fn_803FEF78_00000788:
    addi r3, r1, 0x488
    li r4, 0x78
    bl fn_805F8E70
    addi r4, r1, 0x488
    b lbl_fn_803FEF78_00000848
lbl_fn_803FEF78_0000079C:
    addi r3, r1, 0x488
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x488
    b lbl_fn_803FEF78_00000848
lbl_fn_803FEF78_000007B0:
    addi r3, r1, 0x488
    li r4, 0x7a
    bl fn_805F8E70
    addi r4, r1, 0x488
    b lbl_fn_803FEF78_00000848
lbl_fn_803FEF78_000007C4:
    fneg f1, f1
    addi r3, r1, 0x488
    li r4, 0x78
    bl fn_805F8E70
    addi r4, r1, 0x488
    b lbl_fn_803FEF78_00000848
lbl_fn_803FEF78_000007DC:
    fneg f1, f1
    addi r3, r1, 0x488
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x488
    b lbl_fn_803FEF78_00000848
lbl_fn_803FEF78_000007F4:
    fneg f1, f1
    addi r3, r1, 0x488
    li r4, 0x7a
    bl fn_805F8E70
    addi r4, r1, 0x488
    b lbl_fn_803FEF78_00000848
lbl_fn_803FEF78_0000080C:
    lfs f7, lbl_808860C0
    addi r4, r1, 0x488
    lfs f0, lbl_808860C4
    stfs f7, 0x4b4(r1)
    stfs f7, 0x4ac(r1)
    stfs f7, 0x4a8(r1)
    stfs f7, 0x4a4(r1)
    stfs f7, 0x4a0(r1)
    stfs f7, 0x498(r1)
    stfs f7, 0x494(r1)
    stfs f7, 0x490(r1)
    stfs f7, 0x48c(r1)
    stfs f0, 0x4b0(r1)
    stfs f0, 0x49c(r1)
    stfs f0, 0x488(r1)
lbl_fn_803FEF78_00000848:
    mr r3, r31
    addi r5, r1, 0x4b8
    bl fn_805F89F0
    addi r3, r1, 0x4b8
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
lbl_fn_803FEF78_00000888:
    lwz r0, 0x5b4(r1)
    lwz r31, 0x5ac(r1)
    lwz r30, 0x5a8(r1)
    mtlr r0
    addi r1, r1, 0x5b0
    blr
}

asm void fn_803FF818(void)
{
    nofralloc
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beqlr
    addi r4, r3, 0xf4
    b fn_803ED610
    blr
}

asm void fn_803FF834(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_807526BC@ha
    addi r31, r31, lbl_807526BC@l
lbl_fn_803FF834_0000096C:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803FF834_000009A8
    addi r4, r31, 0x38
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FF834_000009A8
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
lbl_fn_803FF834_000009A8:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803FF834_0000096C
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_803FF94C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x60
    bl fn_80470580
    mr r4, r31
    addi r5, r30, 0x314
    addi r6, r30, 0x360
    addi r7, r30, 0x398
    bl fn_803FDFC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FF9A4(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_26
    mr r27, r4
    mr r26, r3
    addi r4, r1, 0x8
    bl fn_803EC758
    lwz r0, 0xf0(r26)
    cmpwi r0, 0x0
    bne lbl_fn_803FF9A4_00000A88
    cmpwi r27, 0x0
    beq lbl_fn_803FF9A4_00000A88
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_803FF9A4_00000A88
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r26)
    mr r29, r3
    b lbl_fn_803FF9A4_00000A8C
lbl_fn_803FF9A4_00000A88:
    li r29, 0x0
lbl_fn_803FF9A4_00000A8C:
    lis r3, lbl_807526BC@ha
    addi r5, r26, 0x54
    addi r31, r3, lbl_807526BC@l
    li r6, 0x0
    mr r3, r29
    li r7, 0x270f
    addi r4, r31, 0x3e
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808860FC
    mr r3, r29
    lfs f2, lbl_80886100
    addi r4, r31, 0x44
    lfs f3, lbl_80886104
    addi r5, r26, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r29
    addi r4, r31, 0x48
    addi r5, r26, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    addi r30, r26, 0x314
    li r28, 0x0
lbl_fn_803FF9A4_00000AFC:
    addi r3, r1, 0x28
    addi r4, r31, 0x4f
    addi r5, r28, 0x1
    crclr 6
    bl sprintf
    mr r3, r29
    addi r4, r1, 0x28
    bl fn_8008937C
    lfs f1, lbl_808860C0
    mr r27, r3
    lfs f2, lbl_808860C8
    mr r5, r30
    lfs f3, lbl_808860C4
    addi r4, r31, 0x58
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f2, lbl_808860C4
    mr r3, r27
    lfs f1, lbl_80886108
    addi r4, r31, 0x63
    fmr f3, f2
    addi r5, r30, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808860C0
    mr r3, r27
    lfs f2, lbl_8088610C
    addi r4, r31, 0x6c
    lfs f3, lbl_808860C4
    addi r5, r30, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808860C0
    mr r3, r27
    lfs f2, lbl_8088610C
    addi r4, r31, 0x77
    lfs f3, lbl_808860C4
    addi r5, r30, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808860C0
    mr r3, r27
    lfs f2, lbl_808860C8
    addi r4, r31, 0x82
    lfs f3, lbl_808860C4
    addi r5, r30, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808860C0
    mr r3, r27
    lfs f2, lbl_80886110
    addi r4, r31, 0x94
    lfs f3, lbl_808860C4
    addi r5, r30, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808860C0
    mr r3, r27
    lfs f2, lbl_80886110
    addi r4, r31, 0xa2
    lfs f3, lbl_808860C4
    addi r5, r30, 0x18
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808860C0
    mr r3, r27
    lfs f2, lbl_80886110
    addi r4, r31, 0xad
    lfs f3, lbl_80886114
    addi r5, r30, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808860C0
    mr r3, r27
    lfs f2, lbl_808860C8
    addi r4, r31, 0xb9
    lfs f3, lbl_808860C4
    addi r5, r30, 0x20
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    addi r28, r28, 0x1
    addi r30, r30, 0x24
    cmpwi r28, 0x2
    blt lbl_fn_803FF9A4_00000AFC
    lis r31, lbl_807526BC@ha
    mr r3, r29
    addi r31, r31, lbl_807526BC@l
    addi r5, r26, 0x388
    addi r4, r31, 0xc9
    li r6, 0x0
    li r7, 0x5
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r31, 0xcf
    addi r5, r26, 0x38c
    li r6, 0x0
    li r7, 0x5
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    addi r11, r1, 0x140
    bl _restgpr_26
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_803FFC50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x58(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803FFC50_00000D28
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803FFC50_00000D28
    bl fn_80376224
    cmpwi r3, 0x0
    bne lbl_fn_803FFC50_00000D20
    li r0, 0x1
    stw r0, 0x54(r31)
    b lbl_fn_803FFC50_00000D28
lbl_fn_803FFC50_00000D20:
    li r0, 0x2
    stw r0, 0x54(r31)
lbl_fn_803FFC50_00000D28:
    lwz r4, 0x54(r31)
    li r5, 0x0
    cmpwi r4, 0x2
    bne lbl_fn_803FFC50_00000D50
    lwz r3, 0x35c(r31)
    addi r0, r31, 0x314
    cmplw r3, r0
    bne lbl_fn_803FFC50_00000D50
    addi r5, r31, 0x338
    b lbl_fn_803FFC50_00000D6C
lbl_fn_803FFC50_00000D50:
    cmpwi r4, 0x1
    bne lbl_fn_803FFC50_00000D6C
    lwz r3, 0x35c(r31)
    addi r0, r31, 0x338
    cmplw r3, r0
    bne lbl_fn_803FFC50_00000D6C
    addi r5, r31, 0x314
lbl_fn_803FFC50_00000D6C:
    cmpwi r5, 0x0
    beq lbl_fn_803FFC50_00000D84
    lwz r0, 0x35c(r31)
    cmplw r0, r5
    beq lbl_fn_803FFC50_00000D84
    stw r5, 0x35c(r31)
lbl_fn_803FFC50_00000D84:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FFD10(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lis r5, 0x1062
    mr r28, r6
    addi r0, r5, 0x4dd3
    mr r29, r7
    mulhw r0, r0, r4
    lis r25, lbl_807C8770@ha
    mr r27, r3
    lis r5, lbl_807526BC@ha
    addi r3, r25, lbl_807C8770@l
    srawi r6, r0, 6
    srwi r7, r6, 31
    srawi r0, r0, 6
    add r6, r6, r7
    mulli r7, r6, 0x3e8
    srwi r6, r0, 31
    subf r31, r7, r4
    add r30, r0, r6
    addi r4, r5, lbl_807526BC@l
    mr r5, r30
    mr r6, r31
    crclr 6
    bl sprintf
    addi r3, r25, lbl_807C8770@l
    bl fn_8009F788
    mr r4, r3
    mr r3, r27
    bl fn_8009E5A0
    addi r25, r27, 0x88
    mr r3, r25
    bl fn_80473E74
    addi r5, r27, 0xcc
    addi r3, r27, 0xf0
    lfs f1, lbl_808860C0
    lis r4, lbl_8078FBB0@ha
    li r0, 0x0
    lfs f0, lbl_808860E4
    addi r4, r4, lbl_8078FBB0@l
    cmplw r5, r3
    stw r4, 0x0(r25)
    stw r0, 0x90(r27)
    stw r28, 0x94(r27)
    stw r0, 0x98(r27)
    stw r0, 0x9c(r27)
    stw r0, 0xa0(r27)
    stw r0, 0xa4(r27)
    stfs f1, 0xac(r27)
    stfs f0, 0xc4(r27)
    stfs f1, 0xc8(r27)
    bge lbl_fn_803FFD10_00000E9C
    addi r3, r3, 0x23
    li r0, 0x24
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_803FFD10_00000E9C
lbl_fn_803FFD10_00000E88:
    stfs f1, 0x4(r5)
    stfs f0, 0x1c(r5)
    stfs f1, 0x20(r5)
    addi r5, r5, 0x24
    bdnz lbl_fn_803FFD10_00000E88
lbl_fn_803FFD10_00000E9C:
    lfs f1, lbl_808860F0
    lfs f0, lbl_808860C0
    stfs f1, 0x100(r27)
    stfs f0, 0x104(r27)
    bl fn_80680CF8
    lis r25, 0x6666
    lfs f0, lbl_808860C0
    addi r0, r25, 0x6667
    lis r28, 0x4330
    mulhw r0, r0, r3
    lis r26, lbl_807525D8@ha
    stw r28, 0x8(r1)
    lfd f1, lbl_807525D8@l(r26)
    stfs f0, 0x10c(r27)
    srawi r0, r0, 1
    srwi r4, r0, 31
    stfs f0, 0x110(r27)
    add r0, r0, r4
    mulli r0, r0, 0x5
    stfs f0, 0x114(r27)
    subf r3, r0, r3
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x108(r27)
    bl fn_80680CF8
    addi r0, r25, 0x6667
    li r4, 0x2
    mulhw r5, r0, r3
    lfs f0, lbl_808860C0
    li r0, 0x1
    stw r4, 0x11c(r27)
    lfd f2, lbl_807525D8@l(r26)
    stw r0, 0x120(r27)
    srawi r5, r5, 3
    stw r28, 0x10(r1)
    srwi r6, r5, 31
    lfs f1, lbl_808860F4
    add r4, r5, r6
    stfs f0, 0x124(r27)
    mulli r4, r4, 0x14
    subf r4, r4, r3
    addi r3, r27, 0x128
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f0, f1
    stfs f0, 0x118(r27)
    bl fn_802377B8
    lis r28, lbl_807C8770@ha
    lis r4, lbl_807526BC@ha
    stw r29, 0x134(r27)
    mr r5, r30
    mr r6, r31
    addi r3, r28, lbl_807C8770@l
    addi r4, r4, lbl_807526BC@l
    crclr 6
    bl sprintf
    lwz r12, 0x88(r27)
    addi r3, r27, 0x88
    addi r4, r28, lbl_807C8770@l
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r11, r1, 0x40
    mr r3, r27
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803FFF40(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0x90(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803FFF40_00001000
    cmpwi r0, 0x1
    beq lbl_fn_803FFF40_00001060
    b lbl_fn_803FFF40_00001444
lbl_fn_803FFF40_00001000:
    lwz r3, 0x4(r3)
    bl fn_8009FFCC
    cmpwi r3, 0x0
    bne lbl_fn_803FFF40_00001020
    addi r3, r31, 0x88
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803FFF40_00001028
lbl_fn_803FFF40_00001020:
    li r3, 0x0
    b lbl_fn_803FFF40_00001448
lbl_fn_803FFF40_00001028:
    addi r3, r31, 0x88
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x88
    bl fn_80470580
    mr r4, r30
    addi r5, r31, 0xa8
    addi r6, r31, 0xf4
    addi r7, r31, 0x128
    bl fn_803FDFC0
    addi r3, r31, 0x88
    bl fn_80473F88
    li r0, 0x1
    stw r0, 0x90(r31)
lbl_fn_803FFF40_00001060:
    addi r3, r31, 0x128
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_803FFF40_00001078
    li r3, 0x0
    b lbl_fn_803FFF40_00001448
lbl_fn_803FFF40_00001078:
    li r0, 0x2
    stw r0, 0x90(r31)
    mr r3, r31
    addi r4, r31, 0x30
    bl fn_8009EE30
    lwz r3, 0x134(r31)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_803FFF40_000010A8
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803FFF40_00001178
lbl_fn_803FFF40_000010A8:
    lwz r5, 0x4(r31)
    lis r3, lbl_807526BC@ha
    addi r3, r3, lbl_807526BC@l
    li r4, 0x6
    lwz r8, 0x17c(r5)
    addi r5, r3, 0x37
    mr r6, r5
    li r7, 0x0
    lwz r30, 0x44(r8)
    mulli r3, r30, 0x30
    addi r3, r3, 0x10
    bl fn_800846FC
    mr r7, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x30
    bl fn_80695720
    lwz r4, 0x98(r31)
    cmpwi r4, 0x0
    stw r3, 0x98(r31)
    beq lbl_fn_803FFF40_00001104
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_803FFF40_00001104:
    lwz r3, 0x4(r31)
    li r5, 0x0
    lwz r28, 0x98(r31)
    lwz r4, 0xf4(r31)
    addi r3, r3, 0x10
    bl fn_800928B0
    mulli r0, r3, 0x30
    lwz r3, 0x4(r31)
    lwz r29, 0x98(r31)
    li r5, 0x0
    lwz r4, 0xf8(r31)
    addi r3, r3, 0x10
    add r0, r28, r0
    stw r0, 0x9c(r31)
    bl fn_800928B0
    mulli r0, r3, 0x30
    lwz r3, 0x4(r31)
    lwz r28, 0x98(r31)
    li r5, 0x0
    lwz r4, 0xfc(r31)
    addi r3, r3, 0x10
    add r0, r29, r0
    stw r0, 0xa0(r31)
    bl fn_800928B0
    mulli r0, r3, 0x30
    lwz r3, 0x98(r31)
    stw r3, 0x80(r31)
    add r0, r28, r0
    stw r0, 0xa4(r31)
lbl_fn_803FFF40_00001178:
    lwz r0, 0x134(r31)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803FFF40_000011F4
    mr r3, r31
    li r4, 0x1
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lis r7, lbl_807C7030@ha
    lfs f1, lbl_808860C4
    stw r11, 0xb8(r3)
    addi r7, r7, lbl_807C7030@l
    li r0, -0x1
    mr r6, r31
    stfs f1, 0x10(r1)
    mr r8, r7
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x128
    stfs f1, 0x14(r1)
    addi r9, r1, 0x10
    li r5, 0x0
    li r10, -0x1
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_803FFF40_000011F4:
    lfs f9, 0xb4(r31)
    addi r30, r31, 0xa8
    lfs f0, 0xb0(r31)
    lfs f8, 0x100(r31)
    fsubs f9, f9, f0
    lfs f7, 0xa8(r31)
    lfs f0, 0x104(r31)
    stw r30, 0xf0(r31)
    fadds f0, f7, f0
    fdivs f7, f9, f8
    fcmpo cr0, f0, f8
    fmuls f31, f7, f0
    ble lbl_fn_803FFF40_0000122C
    fmr f31, f9
lbl_fn_803FFF40_0000122C:
    lfs f7, 0x118(r31)
    lfs f0, 0x14(r30)
    fadds f1, f7, f0
    bl fn_8068AD58
    lfs f7, lbl_808860C8
    frsp f9, f1
    lfs f0, 0x10(r30)
    lfs f8, 0x8(r30)
    fdivs f7, f7, f0
    lfs f0, lbl_808860CC
    lfs f1, 0x118(r31)
    fadds f8, f8, f31
    fdivs f7, f8, f7
    fmuls f0, f0, f7
    fmuls f0, f0, f9
    stfs f0, 0x10c(r31)
    bl fn_8068AD58
    lfs f0, 0x8(r30)
    frsp f10, f1
    lfs f7, 0x118(r31)
    fadds f9, f0, f31
    lfs f0, 0x108(r31)
    lfs f8, lbl_808860CC
    fadds f1, f7, f0
    fmuls f0, f9, f10
    fmuls f0, f8, f0
    stfs f0, 0x110(r31)
    bl fn_8068AD58
    lfs f7, 0xc(r30)
    frsp f13, f1
    lfs f0, lbl_808860D0
    lfs f11, 0x8(r30)
    fdivs f12, f7, f0
    lfs f10, lbl_808860CC
    lfs f8, 0x0(r30)
    lfs f7, 0x104(r31)
    lfs f9, 0x1c(r30)
    lfs f0, lbl_808860D4
    fadds f11, f11, f31
    fadds f7, f8, f7
    fmuls f12, f10, f12
    fmuls f8, f11, f13
    fmuls f7, f7, f12
    fmuls f8, f10, f8
    stfs f7, 0x124(r31)
    fcmpo cr0, f7, f0
    fmuls f0, f9, f8
    stfs f0, 0x114(r31)
    cror eq, gt, eq
    bne lbl_fn_803FFF40_00001304
    lfs f7, 0x100(r31)
    lfs f0, lbl_808860D8
    fmuls f0, f7, f0
    stfs f0, 0x124(r31)
lbl_fn_803FFF40_00001304:
    lfs f9, 0x0(r30)
    lfs f0, lbl_808860C0
    fcmpo cr0, f9, f0
    ble lbl_fn_803FFF40_00001354
    lfs f8, lbl_808860E0
    lfs f7, lbl_808860DC
    lfs f0, 0x118(r31)
    fnmsubs f7, f8, f9, f7
    fdivs f1, f0, f7
    bl fn_8068A850
    frsp f9, f1
    lfs f0, lbl_808860C4
    lfs f8, 0x20(r30)
    lfs f7, lbl_808860E4
    fsubs f9, f0, f9
    lfs f0, 0x0(r30)
    fmuls f8, f8, f9
    fmadds f0, f7, f0, f8
    stfs f0, 0x104(r31)
    b lbl_fn_803FFF40_00001358
lbl_fn_803FFF40_00001354:
    stfs f0, 0x104(r31)
lbl_fn_803FFF40_00001358:
    lfs f10, 0x0(r30)
    mr r3, r31
    lfs f7, 0x104(r31)
    lfs f8, lbl_808860EC
    lfs f0, lbl_808860E8
    fadds f9, f10, f7
    lfs f7, 0x18(r30)
    fnmsubs f8, f8, f10, f0
    lfs f0, 0x118(r31)
    fdivs f8, f9, f8
    fadds f7, f7, f8
    fadds f0, f0, f7
    stfs f0, 0x118(r31)
    bl fn_8009EB20
    lwz r25, 0x98(r31)
    cmpwi r25, 0x0
    beq lbl_fn_803FFF40_00001444
    lwz r5, 0x4(r31)
    addi r4, r1, 0x20
    psq_l f1, 0x30(r31), 0, 0
    addi r29, r1, 0x50
    lwz r3, 0x17c(r5)
    li r28, 0x0
    lwz r26, 0x4c(r5)
    li r30, 0x0
    lwz r27, 0x44(r3)
    psq_l f2, 0x38(r31), 0, 0
    psq_l f3, 0x40(r31), 0, 0
    psq_l f4, 0x48(r31), 0, 0
    psq_l f5, 0x50(r31), 0, 0
    psq_l f6, 0x58(r31), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    b lbl_fn_803FFF40_0000143C
lbl_fn_803FFF40_000013F0:
    addi r3, r1, 0x20
    add r4, r26, r30
    addi r5, r1, 0x50
    bl fn_805F89F0
    psq_l f2, 0x8(r29), 0, 0
    add r3, r25, r30
    psq_l f3, 0x10(r29), 0, 0
    addi r28, r28, 0x1
    psq_l f4, 0x18(r29), 0, 0
    addi r30, r30, 0x30
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_803FFF40_0000143C:
    cmpw r28, r27
    blt lbl_fn_803FFF40_000013F0
lbl_fn_803FFF40_00001444:
    li r3, 0x1
lbl_fn_803FFF40_00001448:
    addi r11, r1, 0xa0
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    bl _restgpr_25
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
