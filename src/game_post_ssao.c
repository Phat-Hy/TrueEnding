#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _savegpr_20(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80103600(void);
extern void fn_80107850(void);
extern void fn_80108C10(void);
extern void fn_80109828(void);
extern void fn_8012DF7C(void);
extern void fn_80148B0C(void);
extern void fn_8015E7A0(void);
extern void fn_80160170(void);
extern void fn_8016CDB8(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80219E6C(void);
extern void fn_8021A888(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_802D5D18(void);
extern void fn_802D67F8(void);
extern void fn_802D7058(void);
extern void fn_80370320(void);
extern void fn_80370AE4(void);
extern void fn_80389838(void);
extern void fn_805991E4(void);
extern void fn_805A4A20(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80747090[];
extern u8 lbl_807470A4[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808813D0;
extern u32 lbl_8088455C;
extern u32 lbl_80884564;
extern u32 lbl_80884588;
extern u32 lbl_8088458C;
extern u32 lbl_8088459C;
extern u32 lbl_808845A0;
extern u32 lbl_808845A8;
extern u32 lbl_808845AC;
extern u32 lbl_808845B0;
extern u32 lbl_808845C4;
extern u32 lbl_808845C8;
extern u32 lbl_808845CC;
extern u32 lbl_808845D0;
extern u32 lbl_808845D4;
extern u32 lbl_808845D8;
extern u32 lbl_808845DC;
extern u32 lbl_808845E0;

/* Function declarations */
void fn_802D3C74(void);
void fn_802D404C(void);
void fn_802D4238(void);
void fn_802D4378(void);
void fn_802D4628(void);
void fn_802D4E9C(void);
void fn_802D5020(void);
void fn_802D52A0(void);

asm void fn_802D3C74(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    stw r0, 0x284(r1)
    stfd f31, 0x270(r1)
    psq_st f31, 0x278(r1), 0, 0
    stw r31, 0x26c(r1)
    mr r31, r3
    stw r30, 0x268(r1)
    stw r29, 0x264(r1)
    stw r28, 0x260(r1)
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3C74_0000003C
    li r0, 0x0
    stw r0, 0x14ec(r3)
lbl_fn_802D3C74_0000003C:
    lwz r4, 0x14ec(r3)
    lwz r0, 0x14f0(r3)
    cmpw r4, r0
    bgt lbl_fn_802D3C74_00000058
    lwz r0, 0x1508(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D3C74_00000078
lbl_fn_802D3C74_00000058:
    li r4, 0x0
    li r0, 0x2
    stw r4, 0x14ec(r3)
    stw r0, 0x14e0(r3)
    stw r4, 0x14e4(r3)
    stw r4, 0x14f4(r3)
    li r3, 0x0
    b lbl_fn_802D3C74_000003B0
lbl_fn_802D3C74_00000078:
    lwz r0, 0x1500(r3)
    cmpwi r0, 0x0
    ble lbl_fn_802D3C74_000003AC
    lwz r0, 0x14fc(r3)
    cmpwi r0, 0x2
    blt lbl_fn_802D3C74_00000108
    li r30, 0x0
    stw r30, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f1, lbl_80884564
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_8088458C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884564
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x153
    lfs f2, lbl_8088455C
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stw r30, 0x14fc(r31)
    b lbl_fn_802D3C74_000003A4
lbl_fn_802D3C74_00000108:
    addi r4, r1, 0x38
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    li r28, 0x0
    lwz r4, lbl_8087F8A0
    li r29, 0x0
    lfs f4, 0x540(r3)
    lfs f5, lbl_808845C8
    lfs f3, lbl_80884588
    lfs f0, 0x3c(r1)
    fmuls f31, f5, f4
    lfs f2, 0x530(r3)
    fmadds f0, f3, f4, f0
    stfs f2, 0x40(r1)
    lwz r30, 0x48(r4)
    stfs f0, 0x3c(r1)
    b lbl_fn_802D3C74_000001AC
lbl_fn_802D3C74_0000014C:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802D3C74_000001A8
    lfs f3, 0x530(r30)
    addi r3, r1, 0x44
    lfs f0, 0x40(r1)
    addi r29, r29, 0x1
    lfs f5, 0x52c(r30)
    fsubs f6, f3, f0
    lfs f4, 0x3c(r1)
    lfs f3, 0x528(r30)
    lfs f0, 0x38(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_802D3C74_000001A8
    addi r28, r28, 0x1
lbl_fn_802D3C74_000001A8:
    lwz r30, 0x14ac(r30)
lbl_fn_802D3C74_000001AC:
    cmpwi r30, 0x0
    bne lbl_fn_802D3C74_0000014C
    lis r3, 0x4330
    xoris r4, r28, 0x8000
    lis r5, lbl_80747090@ha
    stw r4, 0x254(r1)
    xoris r0, r29, 0x8000
    lfd f5, lbl_80747090@l(r5)
    stw r3, 0x250(r1)
    lfs f0, lbl_808845CC
    lfd f3, 0x250(r1)
    stw r0, 0x25c(r1)
    fsubs f4, f3, f5
    stw r3, 0x258(r1)
    lfd f3, 0x258(r1)
    fsubs f3, f3, f5
    fdivs f3, f4, f3
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802D3C74_000002B8
    li r0, 0x0
    stw r0, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f1, lbl_80884564
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_8088458C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884564
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x145
    lfs f2, lbl_8088455C
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x50
    lwz r4, 0x48c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802D3C74_00000294
    b lbl_fn_802D3C74_00000298
lbl_fn_802D3C74_00000294:
    la r4, lbl_808813D0
lbl_fn_802D3C74_00000298:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x50
    bl fn_80109828
    b lbl_fn_802D3C74_00000398
lbl_fn_802D3C74_000002B8:
    mr r3, r31
    li r4, 0xb
    bl fn_80232B7C
    lfs f0, lbl_80884564
    li r0, -0x1
    lfs f1, lbl_8088458C
    li r30, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x1548
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088458C
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884564
    li r5, 0x142
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_8088455C
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    li r4, 0x32
    li r5, 0x2
    bl fn_80370AE4
    stw r30, 0x1538(r31)
lbl_fn_802D3C74_00000398:
    lwz r3, 0x14fc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14fc(r31)
lbl_fn_802D3C74_000003A4:
    li r0, 0x0
    stw r0, 0x1500(r31)
lbl_fn_802D3C74_000003AC:
    li r3, 0x1
lbl_fn_802D3C74_000003B0:
    lwz r0, 0x284(r1)
    psq_l f31, 0x278(r1), 0, 0
    lfd f31, 0x270(r1)
    lwz r31, 0x26c(r1)
    lwz r30, 0x268(r1)
    lwz r29, 0x264(r1)
    lwz r28, 0x260(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_802D404C(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stw r31, 0x24c(r1)
    mr r31, r3
    stw r30, 0x248(r1)
    stw r29, 0x244(r1)
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802D404C_00000450
    lwz r3, lbl_8087F8A0
    li r30, 0x0
    lwz r29, 0x48(r3)
    b lbl_fn_802D404C_00000448
lbl_fn_802D404C_00000410:
    stw r30, 0xd1c(r29)
    mr r4, r29
    stw r30, 0xd20(r29)
    lwz r3, lbl_8087F048
    bl fn_80103600
    lwz r3, 0x638(r29)
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_802D404C_00000444
    lwz r4, 0x638(r29)
    mr r3, r29
    lwz r5, 0xd1c(r29)
    bl fn_80160170
lbl_fn_802D404C_00000444:
    lwz r29, 0x14ac(r29)
lbl_fn_802D404C_00000448:
    cmpwi r29, 0x0
    bne lbl_fn_802D404C_00000410
lbl_fn_802D404C_00000450:
    lwz r0, 0x14e4(r31)
    li r30, 0x0
    lwz r3, 0x54c(r31)
    cmpwi r0, 0x0
    stw r30, 0xd18(r31)
    ori r0, r3, 0x2000
    stw r0, 0x54c(r31)
    bne lbl_fn_802D404C_0000054C
    mr r3, r31
    li r4, 0x15
    bl fn_80232B7C
    lfs f0, lbl_80884564
    li r3, -0x1
    lfs f1, lbl_8088458C
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x15d8
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r30, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x7
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    addi r3, r1, 0x38
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x38
    lwz r4, 0x484(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802D404C_0000052C
    b lbl_fn_802D404C_00000530
lbl_fn_802D404C_0000052C:
    la r4, lbl_808813D0
lbl_fn_802D404C_00000530:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x38
    bl fn_80109828
lbl_fn_802D404C_0000054C:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x186
    bge lbl_fn_802D404C_00000570
    mr r3, r31
    bl fn_802D7058
    cmpwi r3, 0x0
    beq lbl_fn_802D404C_00000570
    li r0, 0x186
    stw r0, 0x14e4(r31)
lbl_fn_802D404C_00000570:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1c2
    ble lbl_fn_802D404C_000005A4
    lwz r3, 0x54c(r31)
    li r0, 0x0
    li r4, 0x1
    stw r4, 0xd18(r31)
    rlwinm r4, r3, 0, 19, 17
    li r3, 0x0
    stw r4, 0x54c(r31)
    stw r0, 0x14e0(r31)
    stw r0, 0x14e4(r31)
    b lbl_fn_802D404C_000005A8
lbl_fn_802D404C_000005A4:
    li r3, 0x1
lbl_fn_802D404C_000005A8:
    lwz r0, 0x254(r1)
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    lwz r29, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_802D4238(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x14e8(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_802D4238_00000694
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F3C0
    addi r4, r29, 0x15f0
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    li r30, 0x0
    li r31, 0x0
lbl_fn_802D4238_0000061C:
    cmplwi r30, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_802D4238_00000630
    li r3, 0x0
    b lbl_fn_802D4238_00000638
lbl_fn_802D4238_00000630:
    add r3, r0, r31
    addi r3, r3, 0x48
lbl_fn_802D4238_00000638:
    lwz r0, 0x4(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_802D4238_00000658
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_802D4238_00000658
    li r4, 0x1
lbl_fn_802D4238_00000658:
    cmpwi r4, 0x0
    beq lbl_fn_802D4238_0000067C
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802D4238_00000678
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    beq lbl_fn_802D4238_0000067C
lbl_fn_802D4238_00000678:
    bl fn_805991E4
lbl_fn_802D4238_0000067C:
    addi r30, r30, 0x1
    addi r31, r31, 0x140
    cmpwi r30, 0x20
    blt lbl_fn_802D4238_0000061C
    li r0, 0x1
    stw r0, 0x15c8(r29)
lbl_fn_802D4238_00000694:
    lwz r0, 0x14e8(r29)
    cmpwi r0, 0x3c
    ble lbl_fn_802D4238_000006E8
    li r0, -0x1
    li r31, 0x0
    stw r0, 0x14d8(r29)
    stw r31, 0x14e8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r31, 0x58c(r29)
    bl fn_8016E970
    lwz r0, 0x1678(r29)
    cmpwi r0, 0x0
    blt lbl_fn_802D4238_000006E8
    mr r3, r29
    addi r4, r29, 0x1678
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_802D4238_000006E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802D4378(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stw r31, 0x2cc(r1)
    stw r30, 0x2c8(r1)
    stw r29, 0x2c4(r1)
    mr r29, r3
    lwz r3, 0x1534(r3)
    bl fn_80219E6C
    lfs f31, 0x2e4(r29)
    mr r30, r3
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802D4378_00000774
    li r31, 0x0
    stw r31, 0x14e8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r31, 0x58c(r29)
    bl fn_8016E970
lbl_fn_802D4378_00000774:
    addi r3, r1, 0xc0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r0, 0x14e8(r29)
    cmpwi r0, 0xf
    bne lbl_fn_802D4378_000008E4
    lwz r3, 0x1620(r29)
    addi r5, r29, 0x153c
    lfs f3, lbl_8088458C
    addi r6, r1, 0x34
    lfs f2, 0x530(r3)
    li r0, 0x0
    psq_l f1, 0x528(r3), 0, 0
    addi r4, r1, 0x70
    psq_st f1, 0x0(r5), 0, 0
    lis r7, 0x8000
    lfs f0, lbl_808845D0
    li r8, 0x0
    lfs f4, 0x1540(r29)
    li r9, 0x0
    stfs f2, 0x1544(r29)
    fadds f3, f4, f3
    stfs f3, 0x1540(r29)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lwz r3, lbl_8087EE98
    lfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    fsubs f0, f3, f0
    stw r0, 0xa4(r1)
    stfs f0, 0x38(r1)
    stw r0, 0xa8(r1)
    stw r0, 0xac(r1)
    stw r0, 0xb0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802D4378_00000824
    addi r3, r1, 0x80
    lfs f2, 0x88(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0x153c
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1544(r29)
lbl_fn_802D4378_00000824:
    lwz r5, 0x1620(r29)
    addi r3, r1, 0x40
    lfs f3, lbl_80884564
    li r4, 0x79
    lfs f0, lbl_8088458C
    stfs f3, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x28
    addi r3, r1, 0x40
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x153c(r29)
    mr r3, r29
    lfs f0, 0x28(r1)
    li r4, 0xa
    lfs f4, 0x1540(r29)
    fadds f0, f3, f0
    lfs f3, 0x1544(r29)
    stfs f0, 0x153c(r29)
    lfs f0, 0x2c(r1)
    fadds f0, f4, f0
    stfs f0, 0x1540(r29)
    lfs f0, 0x30(r1)
    fadds f0, f3, f0
    stfs f0, 0x1544(r29)
    bl fn_80232B7C
    lfs f1, lbl_8088458C
    lis r8, lbl_807C7030@ha
    stfs f1, 0x18(r1)
    li r3, -0x1
    li r0, 0x1
    addi r4, r29, 0x1554
    stfs f1, 0x1c(r1)
    addi r7, r29, 0x153c
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x18
    stfs f1, 0x20(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x24(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_802D4378_000008E4:
    lwz r0, 0x14e8(r29)
    cmpwi r0, 0x41
    bne lbl_fn_802D4378_00000990
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80884564
    mr r4, r29
    stw r0, 0xc(r1)
    mr r5, r30
    lfs f2, lbl_8088458C
    addi r7, r29, 0x153c
    lwz r3, lbl_8087F048
    addi r8, r29, 0x534
    lwz r6, 0x590(r29)
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0xc0
    lwz r4, 0x454(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802D4378_00000940
    b lbl_fn_802D4378_00000944
lbl_fn_802D4378_00000940:
    la r4, lbl_808813D0
lbl_fn_802D4378_00000944:
    lwz r5, 0x60(r29)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0xc0
    bl fn_80109828
    lis r4, lbl_807470A4@ha
    lfs f1, lbl_8088458C
    addi r4, r4, lbl_807470A4@l
    addi r3, r1, 0x10
    addi r4, r4, 0x2e9
    addi r5, r29, 0x153c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802D4378_00000990:
    lwz r0, 0x2e4(r1)
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    lwz r31, 0x2cc(r1)
    lwz r30, 0x2c8(r1)
    lwz r29, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_802D4628(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    stw r0, 0x284(r1)
    addi r11, r1, 0x220
    stfd f31, 0x270(r1)
    psq_st f31, 0x278(r1), 0, 0
    stfd f30, 0x260(r1)
    psq_st f30, 0x268(r1), 0, 0
    stfd f29, 0x250(r1)
    psq_st f29, 0x258(r1), 0, 0
    stfd f28, 0x240(r1)
    psq_st f28, 0x248(r1), 0, 0
    stfd f27, 0x230(r1)
    psq_st f27, 0x238(r1), 0, 0
    stfd f26, 0x220(r1)
    psq_st f26, 0x228(r1), 0, 0
    bl _savegpr_20
    lwz r0, 0x14e8(r3)
    mr r24, r3
    cmpwi r0, 0xa
    bne lbl_fn_802D4628_00000BD0
    lis r4, lbl_807470A4@ha
    addi r22, r3, 0xb0
    addi r4, r4, lbl_807470A4@l
    li r5, 0x0
    mr r3, r22
    addi r4, r4, 0x2b2
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D4628_00000A34
    li r3, 0x0
    b lbl_fn_802D4628_00000A40
lbl_fn_802D4628_00000A34:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r22)
    add r3, r3, r0
lbl_fn_802D4628_00000A40:
    lfs f0, 0x1c(r3)
    addi r6, r1, 0x110
    lfs f3, 0xc(r3)
    addi r5, r24, 0x1570
    lfs f2, 0x2c(r3)
    mr r3, r24
    stfs f3, 0x110(r1)
    li r4, 0xc
    stfs f0, 0x114(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x118(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1578(r24)
    bl fn_80232B7C
    li r27, 0x0
    lis r28, lbl_807470A4@ha
    lfs f27, lbl_80884564
    mr r26, r27
    lfs f26, lbl_8088458C
    addi r28, r28, lbl_807470A4@l
    addi r29, r1, 0x104
    li r23, 0x0
    li r25, -0x1
    li r22, 0x1
    b lbl_fn_802D4628_00000BC4
lbl_fn_802D4628_00000AA4:
    lwz r3, 0x15ac(r24)
    addi r4, r28, 0x2f6
    li r5, 0x0
    lwzx r3, r3, r23
    addi r30, r3, 0xb0
    mr r3, r30
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D4628_00000AD0
    li r3, 0x0
    b lbl_fn_802D4628_00000ADC
lbl_fn_802D4628_00000AD0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_802D4628_00000ADC:
    lfs f0, 0x1c(r3)
    addi r4, r24, 0x157c
    lfs f3, 0xc(r3)
    li r5, -0x1
    lfs f2, 0x2c(r3)
    li r6, 0x6
    lwz r0, 0x15ac(r24)
    li r8, 0x0
    stfs f3, 0x104(r1)
    li r9, 0x0
    add r3, r0, r23
    li r10, 0x0
    stfs f0, 0x108(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    lwz r0, 0x15ac(r24)
    stfs f2, 0x10c(r1)
    add r3, r0, r23
    lfs f2, 0x18(r3)
    psq_l f1, 0x10(r3), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f1, lbl_8088458C
    stfs f2, 0xc(r3)
    stw r26, 0x8(r1)
    stw r25, 0xc(r1)
    stw r22, 0x10(r1)
    lwz r0, 0x15ac(r24)
    lwz r3, lbl_8087F3C0
    add r7, r0, r23
    addi r7, r7, 0x4
    bl fn_8023A680
    lwz r3, 0x15ac(r24)
    fmr f1, f26
    addi r4, r24, 0x15a0
    addi r7, r1, 0x88
    lwzx r3, r3, r23
    addi r8, r1, 0x94
    addi r9, r1, 0xa0
    stfs f27, 0x94(r1)
    addi r5, r3, 0xb0
    li r6, 0x0
    li r10, -0x1
    stfs f27, 0x98(r1)
    stfs f27, 0x9c(r1)
    stfs f27, 0x88(r1)
    stfs f27, 0x8c(r1)
    stfs f27, 0x90(r1)
    stfs f26, 0xa0(r1)
    stfs f26, 0xa4(r1)
    stfs f26, 0xa8(r1)
    stfs f26, 0xac(r1)
    stw r25, 0x8(r1)
    stw r22, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    addi r27, r27, 0x1
    addi r23, r23, 0x1c
lbl_fn_802D4628_00000BC4:
    lwz r0, 0x15b0(r24)
    cmplw r27, r0
    blt lbl_fn_802D4628_00000AA4
lbl_fn_802D4628_00000BD0:
    lwz r0, 0x14e8(r24)
    cmpwi r0, 0x19
    bne lbl_fn_802D4628_00000C4C
    mr r3, r24
    li r4, 0xf
    bl fn_80232B7C
    lfs f0, lbl_80884564
    li r11, -0x1
    lfs f1, lbl_8088458C
    li r0, 0x1
    stfs f0, 0x6c(r1)
    addi r4, r24, 0x1594
    lwz r3, lbl_8087F3C0
    addi r5, r24, 0xb0
    stfs f0, 0x70(r1)
    addi r7, r1, 0x60
    addi r8, r1, 0x6c
    addi r9, r1, 0x78
    stfs f0, 0x74(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_802D4628_00000C4C:
    lwz r3, 0x14e8(r24)
    cmpwi r3, 0x14
    ble lbl_fn_802D4628_00000D50
    cmpwi r3, 0x5a
    bgt lbl_fn_802D4628_00000D50
    subi r3, r3, 0x14
    lis r0, 0x4330
    xoris r3, r3, 0x8000
    stw r3, 0x1cc(r1)
    lis r3, lbl_80747090@ha
    lfs f3, lbl_808845D4
    stw r0, 0x1c8(r1)
    addi r5, r1, 0xf8
    lfd f5, lbl_80747090@l(r3)
    li r6, 0x0
    lfd f4, 0x1c8(r1)
    li r3, 0x0
    lfs f0, lbl_8088458C
    fsubs f4, f4, f5
    fdivs f13, f4, f3
    fnmsubs f7, f13, f13, f0
    fmuls f5, f13, f13
    fsubs f4, f0, f13
    b lbl_fn_802D4628_00000D44
lbl_fn_802D4628_00000CAC:
    lwz r0, 0x15ac(r24)
    addi r6, r6, 0x1
    lfs f3, 0x1574(r24)
    add r4, r0, r3
    lfs f0, 0x1570(r24)
    fmuls f8, f3, f5
    lfs f6, 0x14(r4)
    lfs f3, 0x10(r4)
    fmuls f9, f0, f5
    fmuls f11, f6, f7
    lfs f6, 0x18(r4)
    fmuls f3, f3, f7
    lfs f0, 0x1578(r24)
    fmuls f10, f6, f7
    stfs f11, 0xe4(r1)
    fmuls f6, f0, f5
    fadds f12, f8, f11
    fadds f0, f9, f3
    stfs f3, 0xe0(r1)
    fadds f2, f6, f10
    stfs f12, 0xfc(r1)
    stfs f0, 0xf8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lwz r0, 0x15ac(r24)
    lfs f0, 0x1574(r24)
    add r4, r0, r3
    stfs f10, 0xe8(r1)
    lfs f3, 0x14(r4)
    addi r3, r3, 0x1c
    stfs f9, 0xec(r1)
    fmuls f3, f4, f3
    stfs f8, 0xf0(r1)
    fmadds f0, f0, f13, f3
    stfs f6, 0xf4(r1)
    stfs f2, 0x100(r1)
    stfs f0, 0x8(r4)
lbl_fn_802D4628_00000D44:
    lwz r0, 0x15b0(r24)
    cmplw r6, r0
    blt lbl_fn_802D4628_00000CAC
lbl_fn_802D4628_00000D50:
    lwz r0, 0x14e8(r24)
    cmpwi r0, 0x64
    ble lbl_fn_802D4628_000011E0
    lwz r3, lbl_8087F3C0
    mr r4, r24
    li r5, 0xc
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x154(r1)
    li r26, 0x0
    lis r3, lbl_80747090@ha
    li r5, -0x1
    clrlwi r4, r0, 4
    li r0, 0x1
    lfs f31, lbl_80884564
    addi r31, r1, 0xbc
    stw r26, 0x13c(r1)
    addi r30, r1, 0x48
    lfd f28, lbl_80747090@l(r3)
    addi r29, r1, 0x54
    stw r26, 0x140(r1)
    addi r27, r1, 0xc8
    lfs f29, lbl_808845A8
    addi r28, r1, 0x128
    stw r26, 0x144(r1)
    li r25, 0x0
    lfs f30, lbl_8088458C
    li r23, 0x0
    stw r26, 0x148(r1)
    lis r22, 0x4330
    lfs f26, lbl_808845D8
    stw r5, 0x14c(r1)
    lfs f27, lbl_8088459C
    stw r4, 0x154(r1)
    stw r5, 0x150(r1)
    stw r0, 0x138(r1)
    b lbl_fn_802D4628_000010C8
lbl_fn_802D4628_00000DE4:
    lwz r0, 0x1560(r24)
    lwz r3, 0x15ac(r24)
    xoris r0, r0, 0x8000
    stw r0, 0x1cc(r1)
    lfs f4, 0x1568(r24)
    stw r22, 0x1c8(r1)
    lfs f3, 0x1564(r24)
    lfd f0, 0x1c8(r1)
    lfs f5, 0x156c(r24)
    fsubs f0, f0, f28
    lwzx r20, r3, r23
    fnmsubs f0, f4, f0, f3
    fcmpo cr0, f5, f0
    ble lbl_fn_802D4628_00000E20
    b lbl_fn_802D4628_00000E34
lbl_fn_802D4628_00000E20:
    stw r0, 0x1d4(r1)
    stw r22, 0x1d0(r1)
    lfd f0, 0x1d0(r1)
    fsubs f0, f0, f28
    fnmsubs f5, f4, f0, f3
lbl_fn_802D4628_00000E34:
    lfs f0, 0x7d8(r20)
    addi r3, r20, 0x7d4
    li r5, 0x0
    li r6, 0x0
    fmuls f3, f0, f5
    fctiwz f0, f0
    fctiwz f3, f3
    stfd f0, 0x1e0(r1)
    stfd f3, 0x1d8(r1)
    lwz r4, 0x1e4(r1)
    lwz r7, 0x1dc(r1)
    addi r4, r4, 0x1
    stw r4, 0x13c(r1)
    addi r0, r7, 0x1
    subf r26, r0, r26
    bl fn_8012DF7C
    lwz r12, 0x0(r20)
    mr r4, r20
    addi r3, r1, 0xd4
    lwz r21, lbl_8087F048
    lwz r12, 0xac(r12)
    mtctr r12
    bctrl
    mr r3, r21
    mr r6, r24
    mr r7, r20
    addi r4, r1, 0x138
    addi r5, r1, 0xd4
    li r8, 0x0
    li r9, 0x0
    bl fn_80108C10
    lwz r3, lbl_8087F048
    addi r4, r20, 0xb0
    bl fn_80107850
    lfs f2, 0x53c(r20)
    psq_l f1, 0x534(r20), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xc4(r1)
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_802D4628_00000EFC
    lfs f0, 0xbc(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_802D4628_00000EF0
    lfs f0, lbl_808845AC
    b lbl_fn_802D4628_00000EF4
lbl_fn_802D4628_00000EF0:
    lfs f0, lbl_808845B0
lbl_fn_802D4628_00000EF4:
    stfs f0, 0x58(r1)
    b lbl_fn_802D4628_00000F10
lbl_fn_802D4628_00000EFC:
    frsp f2, f2
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x58(r1)
lbl_fn_802D4628_00000F10:
    lfs f0, 0x58(r1)
    addi r3, r1, 0x158
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f13, 0x160(r1)
    mr r4, r30
    lfs f12, 0x15c(r1)
    mr r5, r30
    lfs f11, 0x158(r1)
    addi r3, r1, 0x188
    lfs f10, 0x170(r1)
    lfs f9, 0x16c(r1)
    lfs f8, 0x168(r1)
    lfs f7, 0x180(r1)
    lfs f6, 0x17c(r1)
    lfs f5, 0x178(r1)
    lfs f4, 0x184(r1)
    lfs f3, 0x174(r1)
    lfs f0, 0x164(r1)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xc4(r1)
    stfs f31, 0x1b8(r1)
    stfs f31, 0x1bc(r1)
    stfs f31, 0x1c0(r1)
    stfs f30, 0x1c4(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f13, 0x20(r1)
    stfs f11, 0x188(r1)
    stfs f12, 0x18c(r1)
    stfs f13, 0x190(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f10, 0x2c(r1)
    stfs f8, 0x198(r1)
    stfs f9, 0x19c(r1)
    stfs f10, 0x1a0(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f7, 0x38(r1)
    stfs f5, 0x1a8(r1)
    stfs f6, 0x1ac(r1)
    stfs f7, 0x1b0(r1)
    stfs f0, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f4, 0x44(r1)
    stfs f0, 0x194(r1)
    stfs f3, 0x1a4(r1)
    stfs f4, 0x1b4(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x50(r1)
    bl fn_805F9750
    lfs f2, 0x50(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_802D4628_0000101C
    lfs f0, 0x4c(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_802D4628_0000100C
    lfs f0, lbl_808845AC
    b lbl_fn_802D4628_00001010
lbl_fn_802D4628_0000100C:
    lfs f0, lbl_808845B0
lbl_fn_802D4628_00001010:
    fneg f0, f0
    stfs f0, 0x54(r1)
    b lbl_fn_802D4628_00001030
lbl_fn_802D4628_0000101C:
    lfs f1, 0x4c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x54(r1)
lbl_fn_802D4628_00001030:
    psq_l f1, 0x0(r29), 0, 0
    fmr f2, f31
    psq_st f1, 0x0(r31), 0, 0
    mr r3, r28
    mr r4, r28
    lfs f3, 0xc0(r1)
    frsp f4, f2
    lfs f0, 0xbc(r1)
    fmuls f3, f3, f26
    stfs f2, 0xc4(r1)
    fmuls f0, f0, f26
    stfs f3, 0xcc(r1)
    fmuls f2, f4, f26
    stfs f0, 0xc8(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f31, 0x5c(r1)
    stfs f2, 0xd0(r1)
    stfs f2, 0x130(r1)
    stfs f31, 0x12c(r1)
    bl fn_805F98D0
    lfs f4, 0x128(r1)
    mr r3, r20
    lfs f3, 0x12c(r1)
    mr r4, r28
    lfs f0, 0x130(r1)
    fmuls f4, f4, f27
    fmuls f3, f3, f27
    li r5, -0x1
    fmuls f0, f0, f27
    stfs f4, 0x128(r1)
    li r6, 0x0
    stfs f3, 0x12c(r1)
    stfs f0, 0x130(r1)
    bl fn_8015E7A0
    stw r24, 0x13b0(r20)
    addi r25, r25, 0x1
    addi r23, r23, 0x1c
lbl_fn_802D4628_000010C8:
    lwz r0, 0x15b0(r24)
    cmplw r25, r0
    blt lbl_fn_802D4628_00000DE4
    cmpwi r26, 0x0
    bge lbl_fn_802D4628_00001170
    stw r26, 0x13c(r1)
    mr r3, r24
    li r4, 0x0
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    addi r22, r1, 0x11c
    psq_l f1, 0x4(r3), 0, 0
    mr r4, r26
    psq_st f1, 0x0(r22), 0, 0
    addi r3, r24, 0x7d4
    lfs f6, lbl_80884564
    li r5, 0x0
    lfs f5, lbl_808845DC
    li r6, 0x0
    lfs f4, 0x11c(r1)
    fadds f0, f2, f6
    lfs f3, 0x120(r1)
    fadds f4, f4, f6
    stfs f6, 0xb0(r1)
    fadds f3, f3, f5
    stfs f5, 0xb4(r1)
    stfs f6, 0xb8(r1)
    stfs f4, 0x11c(r1)
    stfs f3, 0x120(r1)
    stfs f0, 0x124(r1)
    bl fn_8012DF7C
    lwz r3, lbl_8087F048
    mr r5, r22
    mr r7, r24
    addi r4, r1, 0x138
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_80108C10
    lwz r3, 0x1560(r24)
    addi r0, r3, 0x1
    stw r0, 0x1560(r24)
lbl_fn_802D4628_00001170:
    li r23, 0x0
    stw r23, 0x14e8(r24)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r24)
    mr r3, r24
    li r4, 0x3
    stw r23, 0x58c(r24)
    bl fn_8016E970
    lwz r0, 0x1698(r24)
    cmpwi r0, 0x0
    blt lbl_fn_802D4628_000011B0
    mr r3, r24
    addi r4, r24, 0x1698
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_802D4628_000011B0:
    lwz r0, 0x1538(r24)
    cmpwi r0, 0x0
    beq lbl_fn_802D4628_000011D0
    lwz r3, lbl_8087F430
    li r4, 0x32
    li r5, 0x2
    bl fn_80370AE4
    b lbl_fn_802D4628_000011E0
lbl_fn_802D4628_000011D0:
    lwz r3, lbl_8087F430
    li r4, 0x32
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802D4628_000011E0:
    addi r11, r1, 0x220
    psq_l f31, 0x278(r1), 0, 0
    lfd f31, 0x270(r1)
    psq_l f30, 0x268(r1), 0, 0
    lfd f30, 0x260(r1)
    psq_l f29, 0x258(r1), 0, 0
    lfd f29, 0x250(r1)
    psq_l f28, 0x248(r1), 0, 0
    lfd f28, 0x240(r1)
    psq_l f27, 0x238(r1), 0, 0
    lfd f27, 0x230(r1)
    psq_l f26, 0x228(r1), 0, 0
    lfd f26, 0x220(r1)
    bl _restgpr_20
    lwz r0, 0x284(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_802D4E9C(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x224(r1)
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r30, 0x208(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802D4E9C_00001288
    li r30, 0x0
    stw r30, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_802D4E9C_00001288:
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0xf
    bne lbl_fn_802D4E9C_000012C4
    lwz r5, lbl_8087F430
    li r0, 0x19
    lfs f0, lbl_808845A0
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_802D4E9C_000012C4:
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x46
    bne lbl_fn_802D4E9C_0000138C
    lwz r5, lbl_8087F430
    li r0, 0x28
    lfs f0, lbl_8088458C
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    b lbl_fn_802D4E9C_0000133C
lbl_fn_802D4E9C_0000130C:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802D4E9C_00001338
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x1
    bne lbl_fn_802D4E9C_00001338
    mr r3, r30
    li r4, 0x28
    li r5, 0x0
    bl fn_8016CDB8
lbl_fn_802D4E9C_00001338:
    lwz r30, 0x14ac(r30)
lbl_fn_802D4E9C_0000133C:
    cmpwi r30, 0x0
    bne lbl_fn_802D4E9C_0000130C
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x46c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802D4E9C_0000136C
    b lbl_fn_802D4E9C_00001370
lbl_fn_802D4E9C_0000136C:
    la r4, lbl_808813D0
lbl_fn_802D4E9C_00001370:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x8
    bl fn_80109828
lbl_fn_802D4E9C_0000138C:
    lwz r0, 0x224(r1)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_802D5020(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    stfd f31, 0x290(r1)
    psq_st f31, 0x298(r1), 0, 0
    stfd f30, 0x280(r1)
    psq_st f30, 0x288(r1), 0, 0
    stw r31, 0x27c(r1)
    mr r31, r3
    stw r30, 0x278(r1)
    stw r29, 0x274(r1)
    stw r28, 0x270(r1)
    lwz r0, 0x14e8(r3)
    cmpwi r0, 0x37
    bne lbl_fn_802D5020_000014A0
    lfs f2, lbl_80884588
    li r4, 0x65
    lfs f1, 0x540(r3)
    lfs f0, lbl_80884564
    fmuls f1, f2, f1
    stfs f0, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
    bl fn_80232B7C
    lfs f1, lbl_8088458C
    lis r8, lbl_807C7030@ha
    stfs f1, 0x38(r1)
    li r3, -0x1
    li r0, 0x1
    addi r4, r31, 0x1514
    stfs f1, 0x3c(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x48
    addi r8, r8, lbl_807C7030@l
    stfs f1, 0x40(r1)
    addi r9, r1, 0x38
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x44(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    addi r3, r1, 0x58
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x58
    lwz r4, 0x474(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802D5020_00001480
    b lbl_fn_802D5020_00001484
lbl_fn_802D5020_00001480:
    la r4, lbl_808813D0
lbl_fn_802D5020_00001484:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x58
    bl fn_80109828
lbl_fn_802D5020_000014A0:
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x50
    bne lbl_fn_802D5020_00001538
    lwz r3, lbl_8087F8A0
    li r29, -0x1
    lfs f30, lbl_80884564
    li r30, 0x1
    lwz r28, 0x48(r3)
    lfs f31, lbl_8088458C
    b lbl_fn_802D5020_00001530
lbl_fn_802D5020_000014C8:
    mr r3, r28
    li r4, 0x3e8
    bl fn_80232B7C
    stfs f30, 0x1c(r1)
    fmr f1, f31
    addi r4, r31, 0x1520
    addi r5, r28, 0xb0
    stfs f30, 0x20(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f30, 0x24(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f30, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f31, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r28, 0x14ac(r28)
lbl_fn_802D5020_00001530:
    cmpwi r28, 0x0
    bne lbl_fn_802D5020_000014C8
lbl_fn_802D5020_00001538:
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x78
    ble lbl_fn_802D5020_000015FC
    lwz r0, 0x152c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802D5020_000015C8
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x258(r1)
    lis r3, lbl_80747090@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_80747090@l(r3)
    stw r0, 0x25c(r1)
    mr r3, r31
    lfs f2, 0x7d8(r31)
    lfd f0, 0x258(r1)
    lfs f1, lbl_8088458C
    fsubs f3, f0, f3
    lfs f0, lbl_808845C4
    fdivs f2, f2, f3
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x260(r1)
    lwz r4, 0x264(r1)
    bl fn_802D67F8
    lwz r0, 0x1510(r31)
    cmpwi r0, 0x3
    bne lbl_fn_802D5020_000015C8
    lwz r0, 0x16a0(r31)
    cmpwi r0, 0x0
    blt lbl_fn_802D5020_000015C8
    mr r3, r31
    addi r4, r31, 0x16a0
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_802D5020_000015C8:
    lwz r4, 0x1510(r31)
    mr r3, r31
    bl fn_802D5D18
    li r30, 0x0
    stw r30, 0x152c(r31)
    stw r30, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_802D5020_000015FC:
    lwz r0, 0x2a4(r1)
    psq_l f31, 0x298(r1), 0, 0
    lfd f31, 0x290(r1)
    psq_l f30, 0x288(r1), 0, 0
    lfd f30, 0x280(r1)
    lwz r31, 0x27c(r1)
    lwz r30, 0x278(r1)
    lwz r29, 0x274(r1)
    lwz r28, 0x270(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_802D52A0(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    lis r4, lbl_807470A4@ha
    addi r6, r3, 0x15bc
    stw r0, 0x164(r1)
    addi r4, r4, lbl_807470A4@l
    addi r5, r1, 0x78
    stfd f31, 0x150(r1)
    addi r4, r4, 0x2b2
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    mr r31, r3
    stw r30, 0x138(r1)
    lfs f2, 0x15c4(r3)
    addi r3, r3, 0xb0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0x80(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D52A0_00001694
    li r3, 0x0
    b lbl_fn_802D52A0_000016A0
lbl_fn_802D52A0_00001694:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802D52A0_000016A0:
    lfs f0, 0x1c(r3)
    li r0, 0x0
    lfs f3, 0xc(r3)
    addi r4, r1, 0x5c
    lfs f8, 0x2c(r3)
    addi r3, r1, 0x84
    stfs f3, 0x5c(r1)
    addi r5, r1, 0x78
    fmr f2, f8
    lwz r7, lbl_8087F430
    stfs f0, 0x60(r1)
    addi r6, r1, 0x68
    lfs f7, lbl_808845E0
    addi r30, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x568(r7), 0, 0
    psq_l f1, 0xc(r5), 0, 0
    stfs f2, 0x8c(r1)
    lfs f2, 0x80(r1)
    stfs f2, 0x570(r7)
    lfs f2, 0x8c(r1)
    psq_st f1, 0x574(r7), 0, 0
    lfs f3, lbl_80884564
    stfs f2, 0x57c(r7)
    lfs f0, lbl_808845A8
    stfs f7, 0x580(r7)
    stw r0, 0x584(r7)
    lfs f6, 0x15c4(r31)
    lfs f4, 0x530(r31)
    lfs f5, 0x15bc(r31)
    fsubs f2, f6, f4
    lfs f4, 0x528(r31)
    stfs f3, 0x6c(r1)
    fsubs f4, f5, f4
    stfs f8, 0x64(r1)
    stfs f4, 0x68(r1)
    frsp f4, f2
    psq_l f1, 0x0(r6), 0, 0
    fabs f5, f4
    stfs f7, 0x90(r1)
    stw r0, 0x94(r1)
    frsp f5, f5
    stfs f2, 0x70(r1)
    fcmpo cr0, f5, f0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bge lbl_fn_802D52A0_00001784
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802D52A0_00001778
    lfs f0, lbl_808845AC
    b lbl_fn_802D52A0_0000177C
lbl_fn_802D52A0_00001778:
    lfs f0, lbl_808845B0
lbl_fn_802D52A0_0000177C:
    stfs f0, 0x48(r1)
    b lbl_fn_802D52A0_00001798
lbl_fn_802D52A0_00001784:
    fmr f2, f4
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802D52A0_00001798:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884564
    addi r4, r1, 0x38
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_8088458C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808845A8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802D52A0_000018B4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884564
    fcmpo cr0, f3, f0
    ble lbl_fn_802D52A0_000018A4
    lfs f0, lbl_808845AC
    b lbl_fn_802D52A0_000018A8
lbl_fn_802D52A0_000018A4:
    lfs f0, lbl_808845B0
lbl_fn_802D52A0_000018A8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802D52A0_000018C8
lbl_fn_802D52A0_000018B4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802D52A0_000018C8:
    addi r3, r1, 0x44
    lfs f2, lbl_80884564
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0xb0
    psq_st f1, 0x0(r30), 0, 0
    li r4, 0x0
    lfs f30, 0x2e4(r31)
    lfs f0, 0x54(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x538(r31)
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802D52A0_000019D8
    lwz r3, 0x12a4(r31)
    li r4, 0xd0
    lwz r0, 0x5c0(r31)
    li r5, 0x0
    oris r3, r3, 0x200
    stw r3, 0x12a4(r31)
    clrrwi r0, r0, 1
    li r6, 0x0
    stw r0, 0x5c0(r31)
    lwz r3, lbl_8087F430
    bl fn_80370320
    mr r3, r31
    bl fn_800EE360
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
    lwz r3, lbl_8087F430
    addi r3, r3, 0x6c
    lwz r4, 0x804(r3)
    bl fn_80389838
    lwz r7, lbl_8087EFA8
    li r0, 0x0
    lfs f0, lbl_8088458C
    lwz r3, 0x244(r7)
    lwz r6, 0x248(r7)
    lfs f6, 0x24c(r7)
    lfs f5, 0x250(r7)
    lwz r5, 0x254(r7)
    lwz r4, 0x258(r7)
    lfs f4, 0x25c(r7)
    lfs f3, 0x260(r7)
    stw r3, 0x10c(r1)
    stw r0, 0x240(r7)
    stw r3, 0x244(r7)
    stw r6, 0x248(r7)
    stfs f6, 0x24c(r7)
    stfs f5, 0x250(r7)
    stw r5, 0x254(r7)
    stw r4, 0x258(r7)
    stfs f4, 0x25c(r7)
    stfs f3, 0x260(r7)
    lwz r3, lbl_8087EFA8
    stw r6, 0x110(r1)
    stfs f6, 0x114(r1)
    stfs f5, 0x118(r1)
    stw r5, 0x11c(r1)
    stw r4, 0x120(r1)
    stfs f4, 0x124(r1)
    stfs f3, 0x128(r1)
    stw r0, 0x108(r1)
    stfs f0, 0x3a4(r3)
lbl_fn_802D52A0_000019D8:
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
