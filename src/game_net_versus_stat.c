#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801231D0(void);
extern void fn_801F4CB4(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_804A436C(void);
extern void fn_804AC734(void);
extern void fn_804AC79C(void);
extern void fn_804AC7EC(void);
extern void fn_804AC83C(void);
extern void fn_804ACAF8(void);
extern void fn_804ACD10(void);
extern void fn_804ACDBC(void);
extern void fn_804AD1EC(void);
extern void fn_804AD738(void);
extern void fn_804BC628(void);
extern void fn_804BF550(void);
extern void fn_804BF9AC(void);
extern void fn_804BFB54(void);
extern void fn_804C0094(void);
extern void fn_804C0430(void);
extern void fn_804C0548(void);
extern void fn_804C18A8(void);
extern void fn_804C35F0(void);
extern void fn_804C38C0(void);
extern void fn_804DBD0C(void);
extern void fn_804DC454(void);
extern void fn_804DD298(void);
extern void fn_804DD340(void);
extern void fn_804DDA08(void);
extern void fn_804DDE38(void);
extern void fn_804DE000(void);
extern void fn_804E8A84(void);
extern void fn_804EA5E0(void);
extern void fn_804EAFD4(void);
extern void fn_804EB1B0(void);
extern void fn_804EB270(void);
extern void fn_804EB2DC(void);
extern void fn_804EB874(void);
extern void fn_804FA94C(void);
extern void fn_804FB474(void);
extern void fn_804FC014(void);
extern void fn_8050A4E4(void);
extern void fn_8050BA6C(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern void fn_806B1250(void);
extern void fn_806B3CC0(void);

/* External data declarations */
extern u8 jumptable_80790C74[];
extern u8 lbl_80758848[];
extern u8 lbl_807588DC[];
extern u8 lbl_80790D74[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F588;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5C8;
extern u32 lbl_8087F5D4;
extern u32 lbl_8087F5F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_808873F8;
extern u32 lbl_80887400;
extern u32 lbl_80887404;
extern u32 lbl_80887410;
extern u32 lbl_80887414;

/* Function declarations */
void fn_804BD9B0(void);
void fn_804BD9B4(void);
void fn_804BD9B8(void);
void fn_804BDD68(void);
void fn_804BE330(void);
void fn_804BE4A4(void);
void fn_804BE610(void);
void fn_804BEDB8(void);

asm void fn_804BD9B0(void)
{
    nofralloc
    blr
}

asm void fn_804BD9B4(void)
{
    nofralloc
    blr
}

asm void fn_804BD9B8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0xd8c(r3)
    lwz r4, lbl_8087F59C
    cmpwi r0, 0x2
    lwz r29, 0xc4(r4)
    beq lbl_fn_804BD9B8_00000080
    cmpwi r0, 0x3
    beq lbl_fn_804BD9B8_00000094
    cmpwi r0, 0x4
    beq lbl_fn_804BD9B8_000000A8
    cmpwi r0, 0x5
    beq lbl_fn_804BD9B8_000000D4
    cmpwi r0, 0xa
    beq lbl_fn_804BD9B8_000002F4
    cmpwi r0, 0x7
    beq lbl_fn_804BD9B8_00000358
    b lbl_fn_804BD9B8_00000380
lbl_fn_804BD9B8_00000080:
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    b lbl_fn_804BD9B8_00000380
lbl_fn_804BD9B8_00000094:
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    b lbl_fn_804BD9B8_00000380
lbl_fn_804BD9B8_000000A8:
    lwz r31, 0x5c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804BD9B8_00000380
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r31)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r31)
    b lbl_fn_804BD9B8_00000380
lbl_fn_804BD9B8_000000D4:
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_804BF550
    lwz r30, 0x4c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_00000118
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BD9B8_00000118:
    lwz r30, 0x50(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_00000144
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BD9B8_00000144:
    cmpwi r29, 0x2
    bne lbl_fn_804BD9B8_0000017C
    lwz r30, 0x54(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_000001A8
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
    b lbl_fn_804BD9B8_000001A8
lbl_fn_804BD9B8_0000017C:
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_000001A8
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BD9B8_000001A8:
    lwz r30, 0x64(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_000001D4
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BD9B8_000001D4:
    lfs f29, lbl_80887400
    mr r29, r31
    lfs f30, lbl_80887404
    li r28, 0x0
    lfs f31, lbl_808873F8
lbl_fn_804BD9B8_000001E8:
    lwz r0, 0x98(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804BD9B8_0000025C
    lwz r30, 0x88(r29)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_0000021C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    stfs f29, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BD9B8_0000021C:
    lwz r30, 0x8c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_0000023C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r30)
    stfs f31, 0x100(r30)
lbl_fn_804BD9B8_0000023C:
    lwz r30, 0x90(r29)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_0000025C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r30)
    stfs f31, 0x100(r30)
lbl_fn_804BD9B8_0000025C:
    addi r28, r28, 0x1
    addi r29, r29, 0x22c
    cmpwi r28, 0x6
    blt lbl_fn_804BD9B8_000001E8
    lfs f31, lbl_80887400
    li r28, 0x0
lbl_fn_804BD9B8_00000274:
    lwz r0, 0xa0(r31)
    cmpwi r0, 0x0
    ble lbl_fn_804BD9B8_000002E0
    lwz r0, 0xa8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804BD9B8_000002B8
    lwz r30, 0x8c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_000002E0
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
    b lbl_fn_804BD9B8_000002E0
lbl_fn_804BD9B8_000002B8:
    lwz r30, 0x90(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_000002E0
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BD9B8_000002E0:
    addi r28, r28, 0x1
    addi r31, r31, 0x22c
    cmpwi r28, 0x6
    blt lbl_fn_804BD9B8_00000274
    b lbl_fn_804BD9B8_00000380
lbl_fn_804BD9B8_000002F4:
    lwz r4, 0x68(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r30, 0x68(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_0000032C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r30)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r30)
lbl_fn_804BD9B8_0000032C:
    lwz r30, 0x5c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804BD9B8_00000380
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r30)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r30)
    b lbl_fn_804BD9B8_00000380
lbl_fn_804BD9B8_00000358:
    lwz r3, lbl_8087F5D4
    cmpwi r3, 0x0
    beq lbl_fn_804BD9B8_00000378
    lwz r0, 0x94(r3)
    cmplwi r0, 0x2
    bgt lbl_fn_804BD9B8_00000378
    li r4, 0x3
    bl fn_804C35F0
lbl_fn_804BD9B8_00000378:
    li r0, 0x1e
    stw r0, 0xdcc(r31)
lbl_fn_804BD9B8_00000380:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804BDD68(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    lwz r0, 0xd98(r3)
    mr r31, r3
    lwz r4, 0xe7c(r3)
    cmpwi r0, 0x0
    addi r0, r4, 0x1
    stw r0, 0xe7c(r3)
    beq lbl_fn_804BDD68_00000408
    bl fn_804C18A8
    mr r3, r31
    bl fn_804BFB54
    mr r3, r31
    bl fn_804BF9AC
    li r0, 0x0
    stw r0, 0xd98(r31)
    b lbl_fn_804BDD68_00000968
lbl_fn_804BDD68_00000408:
    lwz r0, 0xd88(r3)
    cmplwi r0, 0xa
    bgt lbl_fn_804BDD68_00000968
    lis r4, jumptable_80790C74@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80790C74@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    bl fn_804C18A8
    mr r3, r31
    bl fn_804BFB54
    lwz r3, 0x4c(r31)
    lfs f0, lbl_80887410
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804BDD68_00000968
    mr r3, r31
    li r4, 0x4
    bl fn_804BC628
    b lbl_fn_804BDD68_00000968
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BDD68_00000538
    bl fn_804AC79C
    cmpwi r3, 0x0
    beq lbl_fn_804BDD68_000004B0
    li r28, 0x9
    stw r28, 0xd90(r31)
    mr r3, r31
    li r4, 0x8
    bl fn_804BC628
    stw r28, 0xd90(r31)
    mr r3, r31
    li r4, 0x8
    bl fn_804BC628
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804DC454
    b lbl_fn_804BDD68_00000538
lbl_fn_804BDD68_000004B0:
    lwz r3, lbl_8087F588
    bl fn_804AC7EC
    cmpwi r3, 0x0
    beq lbl_fn_804BDD68_000004D0
    lwz r4, 0xd8c(r31)
    mr r3, r31
    bl fn_804BC628
    b lbl_fn_804BDD68_00000538
lbl_fn_804BDD68_000004D0:
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    cmpwi r0, 0x5a
    bge lbl_fn_804BDD68_00000538
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BDD68_00000510
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BDD68_00000508
    li r3, 0x1
    b lbl_fn_804BDD68_00000528
lbl_fn_804BDD68_00000508:
    bl fn_806B0DE0
    b lbl_fn_804BDD68_00000528
lbl_fn_804BDD68_00000510:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BDD68_00000524
    li r3, 0x1
    b lbl_fn_804BDD68_00000528
lbl_fn_804BDD68_00000524:
    bl fn_806A8E70
lbl_fn_804BDD68_00000528:
    cmpwi r3, 0x1
    beq lbl_fn_804BDD68_00000538
    lwz r3, lbl_8087F588
    bl fn_804AD738
lbl_fn_804BDD68_00000538:
    mr r3, r31
    bl fn_804C18A8
    mr r3, r31
    bl fn_804BFB54
    mr r3, r31
    bl fn_804BF9AC
    b lbl_fn_804BDD68_00000968
    bl fn_804BE4A4
    mr r3, r31
    bl fn_804C18A8
    mr r3, r31
    bl fn_804BFB54
    mr r3, r31
    bl fn_804BF9AC
    b lbl_fn_804BDD68_00000968
    bl fn_804BE610
    b lbl_fn_804BDD68_00000968
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_804BDD68_00000968
    lwz r3, lbl_8087F5F0
    cmpwi r3, 0x0
    beq lbl_fn_804BDD68_00000968
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x5
    bne lbl_fn_804BDD68_00000968
    li r0, 0x0
    stw r0, 0xf90(r31)
    lis r28, lbl_807588DC@ha
    stw r0, 0x8(r1)
    addi r28, r28, lbl_807588DC@l
    lwz r4, lbl_8087F610
    addi r3, r28, 0x272
    stw r0, 0xc(r1)
    lwz r7, lbl_8087F59C
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r6, 0x564(r4)
    lwz r4, 0x4c(r31)
    addi r5, r6, 0x1
    subfic r0, r6, -0x1
    or r0, r5, r0
    lwz r27, 0xc4(r7)
    srawi r0, r0, 31
    addi r26, r4, 0x58
    clrlwi r29, r0, 24
    bl fn_800DC6B4
    xoris r0, r29, 0x8000
    lis r29, 0x4330
    lis r30, lbl_80758848@ha
    stw r0, 0x4c(r1)
    lfd f1, lbl_80758848@l(r30)
    mr r4, r3
    stw r29, 0x48(r1)
    mr r3, r26
    li r5, 0x0
    lfd f0, 0x48(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    subi r3, r27, 0x2
    subfic r0, r27, 0x2
    nor r0, r3, r0
    lwz r4, 0x4c(r31)
    srawi r0, r0, 31
    addi r3, r28, 0x27d
    addi r26, r4, 0x58
    clrlwi r27, r0, 24
    bl fn_800DC6B4
    xoris r0, r27, 0x8000
    stw r0, 0x54(r1)
    mr r4, r3
    lfd f1, lbl_80758848@l(r30)
    stw r29, 0x50(r1)
    mr r3, r26
    li r5, 0x0
    lfd f0, 0x50(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    lwz r5, lbl_8087F610
    addi r4, r28, 0x28a
    lwz r3, 0x4c(r31)
    li r6, 0x0
    lwz r5, 0x5a4(r5)
    bl fn_801F4CB4
    lwz r4, lbl_8087F610
    lis r3, lbl_80790D74@ha
    addi r3, r3, lbl_80790D74@l
    lwz r0, 0x5b0(r4)
    addi r29, r3, 0x6
    cmpwi r0, 0x0
    beq lbl_fn_804BDD68_000006DC
    mr r29, r3
lbl_fn_804BDD68_000006DC:
    lwz r4, 0x4c(r31)
    lis r30, lbl_807588DC@ha
    addi r30, r30, lbl_807588DC@l
    addi r3, r30, 0x298
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r29
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    lwz r5, 0x564(r3)
    cmpwi r5, -0x1
    beq lbl_fn_804BDD68_00000768
    lis r3, 0x8889
    lis r4, lbl_80790D74@ha
    subi r0, r3, 0x7777
    mulhw r0, r0, r5
    addi r4, r4, lbl_80790D74@l
    addi r3, r1, 0x8
    addi r4, r4, 0xe
    add r0, r0, r5
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r5, r0, r5
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x2a6
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    addi r5, r1, 0x8
    bl fn_801FEE08
lbl_fn_804BDD68_00000768:
    lwz r4, 0xd90(r31)
    mr r3, r31
    bl fn_804BC628
    b lbl_fn_804BDD68_00000968
    bl fn_804BEDB8
    b lbl_fn_804BDD68_00000968
    bl fn_806B3CC0
    lwz r4, 0xdb8(r31)
    subic. r0, r4, 0x1
    stw r0, 0xdb8(r31)
    bge lbl_fn_804BDD68_00000968
    cmpwi r3, 0x1
    beq lbl_fn_804BDD68_000007AC
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BDD68_00000968
lbl_fn_804BDD68_000007AC:
    lwz r3, lbl_8087F610
    bl fn_804DE000
    mr r3, r31
    li r4, 0x7
    bl fn_804BC628
    b lbl_fn_804BDD68_00000968
    lwz r4, lbl_8087F5C8
    lis r3, 0xcccd
    subi r0, r3, 0x3333
    addi r3, r4, 0x1
    stw r3, lbl_8087F5C8
    mulhwu r0, r0, r3
    srwi r0, r0, 2
    mulli r0, r0, 0x5
    subf. r0, r0, r3
    bne lbl_fn_804BDD68_00000968
    lwz r3, lbl_8087F5D4
    cmpwi r3, 0x0
    beq lbl_fn_804BDD68_00000968
    lwz r0, 0x94(r3)
    cmpwi r0, 0x4
    beq lbl_fn_804BDD68_00000968
    li r4, 0x8
    bl fn_804C35F0
    b lbl_fn_804BDD68_00000968
    bl fn_804C0430
    lwz r0, 0xda4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804BDD68_00000968
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BDD68_00000854
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BDD68_00000848
    li r0, 0x0
    b lbl_fn_804BDD68_00000858
lbl_fn_804BDD68_00000848:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804BDD68_00000858
lbl_fn_804BDD68_00000854:
    li r0, 0x0
lbl_fn_804BDD68_00000858:
    lwz r5, lbl_8087F610
    clrlwi r4, r0, 24
    li r3, 0x0
    lwz r0, 0x5e8(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804BDD68_000008A4
lbl_fn_804BDD68_00000874:
    lwz r0, 0x5e4(r5)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BDD68_0000089C
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804BDD68_0000089C
    b lbl_fn_804BDD68_000008A8
lbl_fn_804BDD68_0000089C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804BDD68_00000874
lbl_fn_804BDD68_000008A4:
    li r6, 0x0
lbl_fn_804BDD68_000008A8:
    cmpwi r6, 0x0
    beq lbl_fn_804BDD68_00000968
    lwz r0, 0xd0(r6)
    extrwi r0, r0, 4, 26
    stw r0, 0xdb4(r31)
    b lbl_fn_804BDD68_00000968
    lwz r0, 0xda4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BDD68_00000968
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BDD68_00000900
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BDD68_000008F4
    li r0, 0x0
    b lbl_fn_804BDD68_00000904
lbl_fn_804BDD68_000008F4:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804BDD68_00000904
lbl_fn_804BDD68_00000900:
    li r0, 0x0
lbl_fn_804BDD68_00000904:
    lwz r5, lbl_8087F610
    clrlwi r4, r0, 24
    li r3, 0x0
    lwz r0, 0x5e8(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804BDD68_00000950
lbl_fn_804BDD68_00000920:
    lwz r0, 0x5e4(r5)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BDD68_00000948
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804BDD68_00000948
    b lbl_fn_804BDD68_00000954
lbl_fn_804BDD68_00000948:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804BDD68_00000920
lbl_fn_804BDD68_00000950:
    li r6, 0x0
lbl_fn_804BDD68_00000954:
    cmpwi r6, 0x0
    beq lbl_fn_804BDD68_00000968
    lwz r0, 0xd0(r6)
    extrwi r0, r0, 4, 26
    stw r0, 0xdb4(r31)
lbl_fn_804BDD68_00000968:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804BE330(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    li r30, 0x0
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0xd88(r3)
    lwz r31, lbl_8087EF70
    cmpwi r0, 0x7
    bne lbl_fn_804BE330_000009C4
    mr r5, r4
    li r6, 0x1
    li r7, 0x3
    addi r3, r3, 0xdb4
    bl fn_804A436C
lbl_fn_804BE330_000009C4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804BE330_000009FC
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r30, 0x1
    b lbl_fn_804BE330_00000A30
lbl_fn_804BE330_000009FC:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804BE330_00000A30
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    li r30, 0x2
lbl_fn_804BE330_00000A30:
    cmpwi r30, 0x0
    bne lbl_fn_804BE330_00000AD4
    lwz r0, lbl_8087F5D4
    cmpwi r0, 0x0
    beq lbl_fn_804BE330_00000AD4
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    cmpwi r0, -0x1
    beq lbl_fn_804BE330_00000A5C
    cmpwi r0, 0x5a
    ble lbl_fn_804BE330_00000AD4
lbl_fn_804BE330_00000A5C:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BE330_00000A78
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804BE330_00000AD4
lbl_fn_804BE330_00000A78:
    lwz r3, lbl_8087F0A8
    li r4, 0x34
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_804BE330_00000AD4
    lwz r0, 0xd88(r29)
    cmpwi r0, 0x4
    beq lbl_fn_804BE330_00000AA4
    cmpwi r0, 0x6
    bne lbl_fn_804BE330_00000AD4
lbl_fn_804BE330_00000AA4:
    addi r3, r1, 0x8
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F5D4
    li r4, 0x1
    bl fn_804C35F0
    lwz r3, lbl_8087F5D4
    li r4, 0x0
    bl fn_804C38C0
lbl_fn_804BE330_00000AD4:
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804BE4A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, lbl_8087F588
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804BE4A4_00000C48
    mr r3, r4
    bl fn_804AC79C
    cmpwi r3, 0x0
    beq lbl_fn_804BE4A4_00000BC0
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BE4A4_00000B68
    li r0, 0x1
    stw r0, 0x540(r3)
    lwz r3, lbl_8087F59C
    stw r0, 0xc4(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804BE4A4_00000BB0
    lwz r3, lbl_8087F610
    bl fn_804DDA08
    b lbl_fn_804BE4A4_00000BB0
lbl_fn_804BE4A4_00000B68:
    cmpwi r0, 0x1
    bne lbl_fn_804BE4A4_00000BB0
    li r0, 0x0
    stw r0, 0x540(r3)
    lis r3, lbl_807588DC@ha
    lwz r4, lbl_8087F59C
    li r0, 0x3
    addi r3, r3, lbl_807588DC@l
    stw r0, 0xc4(r4)
    addi r3, r3, 0x324
    lwz r4, 0x64(r30)
    addi r31, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_804BE4A4_00000BB0:
    lwz r4, 0xd8c(r30)
    mr r3, r30
    bl fn_804BC628
    b lbl_fn_804BE4A4_00000C48
lbl_fn_804BE4A4_00000BC0:
    lwz r3, lbl_8087F588
    bl fn_804AC7EC
    cmpwi r3, 0x0
    beq lbl_fn_804BE4A4_00000BE0
    lwz r4, 0xd8c(r30)
    mr r3, r30
    bl fn_804BC628
    b lbl_fn_804BE4A4_00000C48
lbl_fn_804BE4A4_00000BE0:
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    cmpwi r0, 0x5a
    bge lbl_fn_804BE4A4_00000C48
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BE4A4_00000C20
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BE4A4_00000C18
    li r3, 0x1
    b lbl_fn_804BE4A4_00000C38
lbl_fn_804BE4A4_00000C18:
    bl fn_806B0DE0
    b lbl_fn_804BE4A4_00000C38
lbl_fn_804BE4A4_00000C20:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BE4A4_00000C34
    li r3, 0x1
    b lbl_fn_804BE4A4_00000C38
lbl_fn_804BE4A4_00000C34:
    bl fn_806A8E70
lbl_fn_804BE4A4_00000C38:
    cmpwi r3, 0x1
    beq lbl_fn_804BE4A4_00000C48
    lwz r3, lbl_8087F588
    bl fn_804AD738
lbl_fn_804BE4A4_00000C48:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804BE610(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    lwz r29, lbl_8087EF70
    lwz r3, lbl_8087F610
    bl fn_804EB874
    mr r31, r3
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    bne lbl_fn_804BE610_00000D58
    lwz r3, lbl_8087F610
    lwz r0, 0xe78(r27)
    lha r4, 0x508(r3)
    cmpw r4, r0
    ble lbl_fn_804BE610_00000D4C
    cmpwi r4, 0x384
    bgt lbl_fn_804BE610_00000D4C
    bl fn_804EB2DC
    cmpwi r3, 0x0
    bne lbl_fn_804BE610_00000D4C
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BE610_00000CDC
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_00000D4C
lbl_fn_804BE610_00000CDC:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887400
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804BE610_00000D10
    b lbl_fn_804BE610_00000D14
lbl_fn_804BE610_00000D10:
    la r4, lbl_808813D0
lbl_fn_804BE610_00000D14:
    bl fn_804AD1EC
    lwz r28, 0x64(r27)
    cmpwi r28, 0x0
    beq lbl_fn_804BE610_00000D44
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804BE610_00000D44:
    li r0, 0x1
    stw r0, 0xdac(r27)
lbl_fn_804BE610_00000D4C:
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    stw r0, 0xe78(r27)
lbl_fn_804BE610_00000D58:
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    bne lbl_fn_804BE610_00000D74
    mr r3, r27
    bl fn_804C0094
    b lbl_fn_804BE610_00000E2C
lbl_fn_804BE610_00000D74:
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    cmpwi r0, -0x1
    beq lbl_fn_804BE610_00000DDC
    cmpwi r0, 0x384
    bgt lbl_fn_804BE610_00000DDC
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BE610_00000DBC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BE610_00000DB4
    li r3, 0x1
    b lbl_fn_804BE610_00000DD4
lbl_fn_804BE610_00000DB4:
    bl fn_806B0DE0
    b lbl_fn_804BE610_00000DD4
lbl_fn_804BE610_00000DBC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BE610_00000DD0
    li r3, 0x1
    b lbl_fn_804BE610_00000DD4
lbl_fn_804BE610_00000DD0:
    bl fn_806A8E70
lbl_fn_804BE610_00000DD4:
    cmpwi r3, 0x1
    bne lbl_fn_804BE610_00000E2C
lbl_fn_804BE610_00000DDC:
    lwz r3, lbl_8087F0A8
    li r4, 0x35
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_00000E2C
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804BE610_000013F0
    mr r3, r27
    li r4, 0x3
    bl fn_804BC628
    addi r3, r1, 0x1c
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804BE610_000013F0
lbl_fn_804BE610_00000E2C:
    lwz r28, 0x5c(r27)
    lfs f0, lbl_80887410
    lfs f1, 0x100(r28)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804BE610_00000E78
    cmpwi r28, 0x0
    beq lbl_fn_804BE610_00000E6C
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804BE610_00000E6C:
    lwz r3, 0x5c(r27)
    lfs f0, lbl_80887414
    stfs f0, 0x100(r3)
lbl_fn_804BE610_00000E78:
    mr r3, r27
    bl fn_804C18A8
    mr r3, r27
    bl fn_804BFB54
    mr r3, r27
    bl fn_804BF550
    mr r3, r27
    bl fn_804BF9AC
    lwz r3, 0xe68(r27)
    cmpwi r3, -0x1
    beq lbl_fn_804BE610_00000EB8
    lwz r0, 0xb0(r31)
    cmpw r3, r0
    bne lbl_fn_804BE610_00000EB8
    li r0, -0x1
    stw r0, 0xe68(r27)
lbl_fn_804BE610_00000EB8:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BE610_00000F10
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_00000F10
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    lwz r28, 0x64(r27)
    cmpwi r28, 0x0
    beq lbl_fn_804BE610_00000F10
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804BE610_00000F10:
    mr r3, r27
    li r4, 0x0
    bl fn_804BE330
    lwz r4, lbl_8087F588
    mr r28, r3
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804BE610_00000F44
    mr r3, r4
    bl fn_804AC734
    cmpwi r3, 0x0
    bne lbl_fn_804BE610_00000F44
    li r28, 0x0
lbl_fn_804BE610_00000F44:
    cmpwi r28, 0x1
    bne lbl_fn_804BE610_00000F5C
    mr r3, r27
    li r4, 0x6
    bl fn_804BC628
    b lbl_fn_804BE610_00000FDC
lbl_fn_804BE610_00000F5C:
    cmpwi r28, 0x2
    bne lbl_fn_804BE610_00000FDC
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    cmpwi r0, -0x1
    beq lbl_fn_804BE610_00000FCC
    cmpwi r0, 0x5a
    bgt lbl_fn_804BE610_00000FCC
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BE610_00000FAC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BE610_00000FA4
    li r3, 0x1
    b lbl_fn_804BE610_00000FC4
lbl_fn_804BE610_00000FA4:
    bl fn_806B0DE0
    b lbl_fn_804BE610_00000FC4
lbl_fn_804BE610_00000FAC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BE610_00000FC0
    li r3, 0x1
    b lbl_fn_804BE610_00000FC4
lbl_fn_804BE610_00000FC0:
    bl fn_806A8E70
lbl_fn_804BE610_00000FC4:
    cmpwi r3, 0x1
    bne lbl_fn_804BE610_00000FDC
lbl_fn_804BE610_00000FCC:
    mr r3, r27
    li r4, 0x2
    bl fn_804BC628
    b lbl_fn_804BE610_000013F0
lbl_fn_804BE610_00000FDC:
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_00000FF4
    li r0, 0x0
    b lbl_fn_804BE610_00001100
lbl_fn_804BE610_00000FF4:
    li r30, 0x0
    b lbl_fn_804BE610_000010AC
lbl_fn_804BE610_00000FFC:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BE610_00001014
    li r4, 0x0
    b lbl_fn_804BE610_00001034
lbl_fn_804BE610_00001014:
    addi r3, r1, 0xc
    bl fn_8050BA6C
    cmpw r3, r30
    ble lbl_fn_804BE610_00001030
    lwz r3, 0xc(r1)
    lbzx r4, r3, r30
    b lbl_fn_804BE610_00001034
lbl_fn_804BE610_00001030:
    li r4, 0xff
lbl_fn_804BE610_00001034:
    lwz r6, lbl_8087F610
    li r3, 0x0
    lwz r0, 0x5e8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804BE610_0000107C
lbl_fn_804BE610_0000104C:
    lwz r0, 0x5e4(r6)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BE610_00001074
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804BE610_00001074
    b lbl_fn_804BE610_00001080
lbl_fn_804BE610_00001074:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804BE610_0000104C
lbl_fn_804BE610_0000107C:
    li r5, 0x0
lbl_fn_804BE610_00001080:
    cmpwi r5, 0x0
    beq lbl_fn_804BE610_000010A8
    lwz r3, 0xd0(r5)
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BE610_000010A8
    extrwi. r0, r3, 2, 20
    bne lbl_fn_804BE610_000010A8
    li r0, 0x1
    b lbl_fn_804BE610_00001100
lbl_fn_804BE610_000010A8:
    addi r30, r30, 0x1
lbl_fn_804BE610_000010AC:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BE610_000010DC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BE610_000010D4
    li r3, 0x1
    b lbl_fn_804BE610_000010F4
lbl_fn_804BE610_000010D4:
    bl fn_806B0DE0
    b lbl_fn_804BE610_000010F4
lbl_fn_804BE610_000010DC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BE610_000010F0
    li r3, 0x1
    b lbl_fn_804BE610_000010F4
lbl_fn_804BE610_000010F0:
    bl fn_806A8E70
lbl_fn_804BE610_000010F4:
    cmpw r30, r3
    blt lbl_fn_804BE610_00000FFC
    li r0, 0x0
lbl_fn_804BE610_00001100:
    cmpwi r0, 0x0
    beq lbl_fn_804BE610_00001194
    lwz r3, lbl_8087F610
    bl fn_804EB874
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_00001138
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0xd0(r3)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_804BE610_00001158
    lwz r0, 0xe7c(r27)
    cmpwi r0, 0x1e
    bge lbl_fn_804BE610_00001158
lbl_fn_804BE610_00001138:
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804DBD0C
    lwz r3, lbl_8087F610
    li r4, 0xa1
    li r5, 0x9
    bl fn_804FB474
    b lbl_fn_804BE610_000013F0
lbl_fn_804BE610_00001158:
    addi r3, r1, 0x8
    li r4, 0x6
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r27
    li r4, 0xa
    bl fn_804BC628
    lwz r3, lbl_8087F5D4
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_000013F0
    li r4, 0x3
    bl fn_804C35F0
    b lbl_fn_804BE610_000013F0
lbl_fn_804BE610_00001194:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804BE610_000011AC
    mr r3, r27
    bl fn_804C0548
lbl_fn_804BE610_000011AC:
    cmpwi r31, 0x0
    beq lbl_fn_804BE610_000013F0
    lwz r28, 0xe6c(r27)
    addi r30, r27, 0xe6c
    mr r3, r29
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804BE610_000011EC
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_00001208
lbl_fn_804BE610_000011EC:
    lwz r3, lbl_8087F610
    mr r5, r30
    li r4, 0x0
    bl fn_804DD340
    li r0, 0x0
    stw r0, 0xdbc(r27)
    b lbl_fn_804BE610_0000139C
lbl_fn_804BE610_00001208:
    mr r3, r29
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804BE610_00001238
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_00001254
lbl_fn_804BE610_00001238:
    lwz r3, lbl_8087F610
    mr r5, r30
    li r4, 0x0
    bl fn_804DD298
    li r0, 0x0
    stw r0, 0xdc0(r27)
    b lbl_fn_804BE610_0000139C
lbl_fn_804BE610_00001254:
    mr r3, r29
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804BE610_00001284
    mr r3, r29
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_00001300
lbl_fn_804BE610_00001284:
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    clrlwi r0, r0, 16
    cmplwi r0, 0x5a
    ble lbl_fn_804BE610_0000139C
    lwz r3, 0xe5c(r27)
    addi r0, r3, 0x1
    stw r0, 0xe5c(r27)
    lwz r3, lbl_8087F610
    lwz r4, 0x540(r3)
    bl fn_804EA5E0
    lwz r0, 0xe5c(r27)
    cmpw r0, r3
    ble lbl_fn_804BE610_000012C4
    li r0, 0x0
    stw r0, 0xe5c(r27)
lbl_fn_804BE610_000012C4:
    lwz r29, 0xe5c(r27)
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0xd0(r3)
    rlwimi r0, r29, 6, 22, 25
    stw r0, 0xd0(r3)
    li r0, 0x0
    addi r3, r1, 0x18
    li r4, 0x3
    stw r0, 0xdc8(r27)
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804BE610_0000139C
lbl_fn_804BE610_00001300:
    mr r3, r29
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804BE610_00001330
    mr r3, r29
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804BE610_0000139C
lbl_fn_804BE610_00001330:
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    clrlwi r0, r0, 16
    cmplwi r0, 0x5a
    ble lbl_fn_804BE610_0000139C
    lwz r3, 0xe5c(r27)
    subic. r0, r3, 0x1
    stw r0, 0xe5c(r27)
    bge lbl_fn_804BE610_00001364
    lwz r3, lbl_8087F610
    lwz r4, 0x540(r3)
    bl fn_804EA5E0
    stw r3, 0xe5c(r27)
lbl_fn_804BE610_00001364:
    lwz r29, 0xe5c(r27)
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0xd0(r3)
    rlwimi r0, r29, 6, 22, 25
    stw r0, 0xd0(r3)
    li r0, 0x0
    addi r3, r1, 0x14
    li r4, 0x3
    stw r0, 0xdc4(r27)
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804BE610_0000139C:
    lwz r0, 0x0(r30)
    cmpw r28, r0
    beq lbl_fn_804BE610_000013F0
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x1
    bne lbl_fn_804BE610_000013C4
    lwz r0, 0x0(r30)
    stw r0, 0xb0(r31)
    b lbl_fn_804BE610_000013D8
lbl_fn_804BE610_000013C4:
    lwz r4, 0x0(r30)
    li r5, 0x1
    stw r4, 0xe68(r27)
    lwz r3, lbl_8087F610
    bl fn_804FA94C
lbl_fn_804BE610_000013D8:
    addi r3, r1, 0x10
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804BE610_000013F0:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804BEDB8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r31, lbl_8087EF70
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    bne lbl_fn_804BEDB8_00001444
    mr r3, r29
    bl fn_804C0094
lbl_fn_804BEDB8_00001444:
    mr r3, r29
    bl fn_804C18A8
    mr r3, r29
    bl fn_804BFB54
    mr r3, r29
    bl fn_804BF550
    mr r3, r29
    bl fn_804BF9AC
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804EB270
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BEDB8_000014EC
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_000014EC
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    lwz r30, 0x64(r29)
    cmpwi r30, 0x0
    beq lbl_fn_804BEDB8_000014C8
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BEDB8_000014C8:
    lwz r0, 0xdac(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804BEDB8_000014EC
    li r0, 0x0
    stw r0, 0xdac(r29)
    mr r3, r29
    li r4, 0x4
    bl fn_804BC628
    b lbl_fn_804BEDB8_00001B80
lbl_fn_804BEDB8_000014EC:
    mr r3, r29
    li r4, 0x0
    bl fn_804BE330
    lwz r4, lbl_8087F588
    mr r28, r3
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804BEDB8_00001520
    mr r3, r4
    bl fn_804AC734
    cmpwi r3, 0x0
    bne lbl_fn_804BEDB8_00001520
    li r28, 0x0
lbl_fn_804BEDB8_00001520:
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BEDB8_00001534
    li r28, 0x1
lbl_fn_804BEDB8_00001534:
    lwz r3, lbl_8087F610
    bl fn_804FC014
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_00001550
    cmpwi r28, 0x1
    bne lbl_fn_804BEDB8_00001550
    li r28, 0x0
lbl_fn_804BEDB8_00001550:
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    bne lbl_fn_804BEDB8_00001620
    lwz r3, lbl_8087F610
    lwz r0, 0xe78(r29)
    lha r4, 0x508(r3)
    cmpw r4, r0
    ble lbl_fn_804BEDB8_00001614
    cmpwi r4, 0x384
    bgt lbl_fn_804BEDB8_00001614
    bl fn_804EB2DC
    cmpwi r3, 0x0
    bne lbl_fn_804BEDB8_00001614
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BEDB8_000015A4
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_00001614
lbl_fn_804BEDB8_000015A4:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887400
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804BEDB8_000015D8
    b lbl_fn_804BEDB8_000015DC
lbl_fn_804BEDB8_000015D8:
    la r4, lbl_808813D0
lbl_fn_804BEDB8_000015DC:
    bl fn_804AD1EC
    lwz r30, 0x64(r29)
    cmpwi r30, 0x0
    beq lbl_fn_804BEDB8_0000160C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804BEDB8_0000160C:
    li r0, 0x1
    stw r0, 0xdac(r29)
lbl_fn_804BEDB8_00001614:
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    stw r0, 0xe78(r29)
lbl_fn_804BEDB8_00001620:
    cmpwi r28, 0x1
    bne lbl_fn_804BEDB8_0000189C
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_000018B0
    lwz r4, lbl_8087F628
    li r30, 0x0
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BEDB8_0000166C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BEDB8_00001664
    li r3, 0x1
    b lbl_fn_804BEDB8_00001684
lbl_fn_804BEDB8_00001664:
    bl fn_806B0DE0
    b lbl_fn_804BEDB8_00001684
lbl_fn_804BEDB8_0000166C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BEDB8_00001680
    li r3, 0x1
    b lbl_fn_804BEDB8_00001684
lbl_fn_804BEDB8_00001680:
    bl fn_806A8E70
lbl_fn_804BEDB8_00001684:
    cmpwi r3, 0x1
    bgt lbl_fn_804BEDB8_000016A0
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BEDB8_00001884
lbl_fn_804BEDB8_000016A0:
    lwz r3, lbl_8087F610
    lha r0, 0x508(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BEDB8_000017B8
    bl fn_804EB2DC
    cmpwi r3, 0x0
    bne lbl_fn_804BEDB8_00001758
    lwz r3, lbl_8087F610
    li r0, 0x384
    sth r0, 0x508(r3)
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BEDB8_000016E4
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_00001884
lbl_fn_804BEDB8_000016E4:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887400
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804BEDB8_00001718
    b lbl_fn_804BEDB8_0000171C
lbl_fn_804BEDB8_00001718:
    la r4, lbl_808813D0
lbl_fn_804BEDB8_0000171C:
    bl fn_804AD1EC
    lwz r28, 0x64(r29)
    cmpwi r28, 0x0
    beq lbl_fn_804BEDB8_0000174C
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804BEDB8_0000174C:
    li r0, 0x1
    stw r0, 0xdac(r29)
    b lbl_fn_804BEDB8_00001884
lbl_fn_804BEDB8_00001758:
    lwz r4, lbl_8087F59C
    lwz r3, lbl_8087F610
    lwz r4, 0xc4(r4)
    bl fn_804DDE38
    cmpwi r3, 0x0
    bne lbl_fn_804BEDB8_00001778
    li r0, 0x0
    b lbl_fn_804BEDB8_00001798
lbl_fn_804BEDB8_00001778:
    lwz r3, lbl_8087F610
    li r0, 0x1
    li r4, 0x1
    addis r3, r3, 0x1
    stb r0, -0x6664(r3)
    lwz r3, lbl_8087F628
    bl fn_8050A4E4
    li r0, 0x1
lbl_fn_804BEDB8_00001798:
    cmplwi r0, 0x1
    bne lbl_fn_804BEDB8_000017A8
    li r30, 0x1
    b lbl_fn_804BEDB8_00001884
lbl_fn_804BEDB8_000017A8:
    lwz r3, lbl_8087F610
    li r0, 0x384
    sth r0, 0x508(r3)
    b lbl_fn_804BEDB8_00001884
lbl_fn_804BEDB8_000017B8:
    bl fn_804EB2DC
    cmpwi r3, 0x1
    bne lbl_fn_804BEDB8_00001884
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804EB270
    cmpwi r3, 0x1
    bne lbl_fn_804BEDB8_00001884
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BEDB8_0000180C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BEDB8_00001800
    li r3, 0x1
    b lbl_fn_804BEDB8_00001804
lbl_fn_804BEDB8_00001800:
    bl fn_806B0DE0
lbl_fn_804BEDB8_00001804:
    mr r28, r3
    b lbl_fn_804BEDB8_00001828
lbl_fn_804BEDB8_0000180C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BEDB8_00001820
    li r3, 0x1
    b lbl_fn_804BEDB8_00001824
lbl_fn_804BEDB8_00001820:
    bl fn_806A8E70
lbl_fn_804BEDB8_00001824:
    mr r28, r3
lbl_fn_804BEDB8_00001828:
    lwz r3, lbl_8087F610
    bl fn_804EAFD4
    cmpw r28, r3
    bne lbl_fn_804BEDB8_00001884
    lwz r4, lbl_8087F59C
    lwz r3, lbl_8087F610
    lwz r4, 0xc4(r4)
    bl fn_804DDE38
    cmpwi r3, 0x0
    bne lbl_fn_804BEDB8_00001858
    li r0, 0x0
    b lbl_fn_804BEDB8_00001878
lbl_fn_804BEDB8_00001858:
    lwz r3, lbl_8087F610
    li r0, 0x1
    li r4, 0x1
    addis r3, r3, 0x1
    stb r0, -0x6664(r3)
    lwz r3, lbl_8087F628
    bl fn_8050A4E4
    li r0, 0x1
lbl_fn_804BEDB8_00001878:
    cmplwi r0, 0x1
    bne lbl_fn_804BEDB8_00001884
    li r30, 0x1
lbl_fn_804BEDB8_00001884:
    cmplwi r30, 0x1
    bne lbl_fn_804BEDB8_000018B0
    mr r3, r29
    li r4, 0xa
    bl fn_804BC628
    b lbl_fn_804BEDB8_000018B0
lbl_fn_804BEDB8_0000189C:
    cmpwi r28, 0x2
    bne lbl_fn_804BEDB8_000018B0
    mr r3, r29
    li r4, 0x4
    bl fn_804BC628
lbl_fn_804BEDB8_000018B0:
    lwz r3, lbl_8087F59C
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804BEDB8_00001908
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_000018E4
    lwz r3, lbl_8087F610
    li r4, 0xdf
    bl fn_804E8A84
lbl_fn_804BEDB8_000018E4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_00001908
    lwz r3, lbl_8087F610
    li r4, 0xe0
    bl fn_804E8A84
lbl_fn_804BEDB8_00001908:
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_00001920
    li r0, 0x0
    b lbl_fn_804BEDB8_00001A2C
lbl_fn_804BEDB8_00001920:
    li r31, 0x0
    b lbl_fn_804BEDB8_000019D8
lbl_fn_804BEDB8_00001928:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BEDB8_00001940
    li r4, 0x0
    b lbl_fn_804BEDB8_00001960
lbl_fn_804BEDB8_00001940:
    addi r3, r1, 0xc
    bl fn_8050BA6C
    cmpw r3, r31
    ble lbl_fn_804BEDB8_0000195C
    lwz r3, 0xc(r1)
    lbzx r4, r3, r31
    b lbl_fn_804BEDB8_00001960
lbl_fn_804BEDB8_0000195C:
    li r4, 0xff
lbl_fn_804BEDB8_00001960:
    lwz r5, lbl_8087F610
    li r3, 0x0
    lwz r0, 0x5e8(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804BEDB8_000019A8
lbl_fn_804BEDB8_00001978:
    lwz r0, 0x5e4(r5)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BEDB8_000019A0
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804BEDB8_000019A0
    b lbl_fn_804BEDB8_000019AC
lbl_fn_804BEDB8_000019A0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804BEDB8_00001978
lbl_fn_804BEDB8_000019A8:
    li r6, 0x0
lbl_fn_804BEDB8_000019AC:
    cmpwi r6, 0x0
    beq lbl_fn_804BEDB8_000019D4
    lwz r3, 0xd0(r6)
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BEDB8_000019D4
    extrwi. r0, r3, 2, 20
    bne lbl_fn_804BEDB8_000019D4
    li r0, 0x1
    b lbl_fn_804BEDB8_00001A2C
lbl_fn_804BEDB8_000019D4:
    addi r31, r31, 0x1
lbl_fn_804BEDB8_000019D8:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BEDB8_00001A08
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BEDB8_00001A00
    li r3, 0x1
    b lbl_fn_804BEDB8_00001A20
lbl_fn_804BEDB8_00001A00:
    bl fn_806B0DE0
    b lbl_fn_804BEDB8_00001A20
lbl_fn_804BEDB8_00001A08:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BEDB8_00001A1C
    li r3, 0x1
    b lbl_fn_804BEDB8_00001A20
lbl_fn_804BEDB8_00001A1C:
    bl fn_806A8E70
lbl_fn_804BEDB8_00001A20:
    cmpw r31, r3
    blt lbl_fn_804BEDB8_00001928
    li r0, 0x0
lbl_fn_804BEDB8_00001A2C:
    cmpwi r0, 0x0
    beq lbl_fn_804BEDB8_00001AC0
    lwz r3, lbl_8087F610
    bl fn_804EB874
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_00001A64
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0xd0(r3)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_804BEDB8_00001A84
    lwz r0, 0xe7c(r29)
    cmpwi r0, 0x1e
    bge lbl_fn_804BEDB8_00001A84
lbl_fn_804BEDB8_00001A64:
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804DBD0C
    lwz r3, lbl_8087F610
    li r4, 0xa1
    li r5, 0x9
    bl fn_804FB474
    b lbl_fn_804BEDB8_00001B80
lbl_fn_804BEDB8_00001A84:
    addi r3, r1, 0x8
    li r4, 0x6
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0xa
    bl fn_804BC628
    lwz r3, lbl_8087F5D4
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_00001B80
    li r4, 0x3
    bl fn_804C35F0
    b lbl_fn_804BEDB8_00001B80
lbl_fn_804BEDB8_00001AC0:
    lwz r3, lbl_8087F59C
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804BEDB8_00001B80
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804EB270
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_00001B80
    lwz r3, lbl_8087F610
    bl fn_804EB2DC
    cmpwi r3, 0x0
    bne lbl_fn_804BEDB8_00001B80
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BEDB8_00001B10
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804BEDB8_00001B80
lbl_fn_804BEDB8_00001B10:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887400
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804BEDB8_00001B44
    b lbl_fn_804BEDB8_00001B48
lbl_fn_804BEDB8_00001B44:
    la r4, lbl_808813D0
lbl_fn_804BEDB8_00001B48:
    bl fn_804AD1EC
    lwz r28, 0x64(r29)
    cmpwi r28, 0x0
    beq lbl_fn_804BEDB8_00001B78
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804BEDB8_00001B78:
    li r0, 0x1
    stw r0, 0xdac(r29)
lbl_fn_804BEDB8_00001B80:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
