#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80063D3C(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_8013322C(void);
extern void fn_801426A4(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_80176548(void);
extern void fn_801765D8(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_802F33A0(void);
extern void fn_802F62A0(void);
extern void fn_802F693C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80748538[];
extern u8 lbl_80748558[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_808848D8;
extern u32 lbl_808848DC;
extern u32 lbl_808848E0;
extern u32 lbl_808848E4;
extern u32 lbl_808848F8;
extern u32 lbl_808848FC;
extern u32 lbl_80884900;
extern u32 lbl_80884904;
extern u32 lbl_80884920;
extern u32 lbl_80884924;
extern u32 lbl_8088493C;
extern u32 lbl_80884948;
extern u32 lbl_8088494C;
extern u32 lbl_80884950;
extern u32 lbl_80884954;

/* Function declarations */
void fn_802F469C(void);
void fn_802F4A98(void);
void fn_802F5370(void);
void fn_802F566C(void);
void fn_802F58A0(void);
void fn_802F59D8(void);
void fn_802F5BCC(void);
void fn_802F5F20(void);

asm void fn_802F469C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    lwz r4, 0x1580(r3)
    lfs f0, 0x530(r3)
    lfs f4, 0x530(r4)
    lfs f3, 0x528(r4)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x5c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x60(r1)
    stfs f5, 0x64(r1)
    bl fn_8068B100
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    frsp f31, f1
    lfs f0, lbl_808848E4
    fabs f3, f2
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F469C_000000C4
    lfs f3, 0x50(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F469C_000000B8
    lfs f0, lbl_80884920
    b lbl_fn_802F469C_000000BC
lbl_fn_802F469C_000000B8:
    lfs f0, lbl_80884924
lbl_fn_802F469C_000000BC:
    stfs f0, 0x48(r1)
    b lbl_fn_802F469C_000000D8
lbl_fn_802F469C_000000C4:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802F469C_000000D8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
    addi r4, r1, 0x38
    lfs f29, 0x80(r1)
    mr r5, r4
    lfs f30, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f30, 0xac(r1)
    stfs f29, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F469C_000001F4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F469C_000001E4
    lfs f0, lbl_80884920
    b lbl_fn_802F469C_000001E8
lbl_fn_802F469C_000001E4:
    lfs f0, lbl_80884924
lbl_fn_802F469C_000001E8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802F469C_00000208
lbl_fn_802F469C_000001F4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802F469C_00000208:
    lfs f2, lbl_808848DC
    addi r3, r1, 0x44
    lwz r5, 0x1528(r31)
    addi r4, r1, 0x68
    stfs f2, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r5, 0x0
    stfs f2, 0x58(r1)
    frsp f2, f2
    lfs f29, lbl_808848D8
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    beq lbl_fn_802F469C_00000244
    lfs f29, 0x40(r5)
lbl_fn_802F469C_00000244:
    lwz r3, 0x1554(r31)
    lwz r0, 0x1558(r31)
    cmpw r3, r0
    blt lbl_fn_802F469C_0000026C
    lwz r0, 0x1574(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802F469C_0000026C
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802F693C
lbl_fn_802F469C_0000026C:
    fcmpo cr0, f31, f29
    bge lbl_fn_802F469C_00000358
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F469C_000003CC
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F469C_000003CC
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F469C_000002CC
    lwz r0, 0x68(r3)
    b lbl_fn_802F469C_000002D0
lbl_fn_802F469C_000002CC:
    li r0, 0x5a
lbl_fn_802F469C_000002D0:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1528(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F469C_00000344
    lwz r3, 0x68(r3)
    b lbl_fn_802F469C_00000348
lbl_fn_802F469C_00000344:
    li r3, 0x3c
lbl_fn_802F469C_00000348:
    lwz r0, 0x1580(r31)
    stw r3, 0x159c(r31)
    stw r0, 0x1584(r31)
    b lbl_fn_802F469C_000003CC
lbl_fn_802F469C_00000358:
    lfs f0, 0x1524(r31)
    fcmpo cr0, f31, f0
    ble lbl_fn_802F469C_00000398
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0x8
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F469C_000003CC
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802F5F20
    b lbl_fn_802F469C_000003CC
lbl_fn_802F469C_00000398:
    lwz r3, 0x55c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802F469C_000003C4
    li r0, 0x3
    stw r0, 0x55c(r31)
    lwz r4, 0x1580(r31)
    mr r3, r31
    lfs f1, lbl_80884904
    lwz r5, 0x15a8(r31)
    bl fn_80170A20
lbl_fn_802F469C_000003C4:
    mr r3, r31
    bl fn_802F33A0
lbl_fn_802F469C_000003CC:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802F4A98(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    lfs f30, lbl_808848FC
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    stfd f28, 0x2a0(r1)
    psq_st f28, 0x2a8(r1), 0, 0
    stw r31, 0x29c(r1)
    mr r31, r3
    stw r30, 0x298(r1)
    stw r29, 0x294(r1)
    lwz r4, 0x1580(r3)
    lfs f0, 0x530(r3)
    lfs f4, 0x530(r4)
    lfs f3, 0x528(r4)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x11c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x120(r1)
    stfs f5, 0x124(r1)
    bl fn_8068B100
    lfs f2, 0x124(r1)
    addi r3, r1, 0x11c
    frsp f31, f1
    lfs f0, lbl_808848E4
    fabs f3, f2
    addi r30, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x118(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F4A98_000004D0
    lfs f3, 0x110(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F4A98_000004C4
    lfs f0, lbl_80884920
    b lbl_fn_802F4A98_000004C8
lbl_fn_802F4A98_000004C4:
    lfs f0, lbl_80884924
lbl_fn_802F4A98_000004C8:
    stfs f0, 0xd8(r1)
    b lbl_fn_802F4A98_000004E4
lbl_fn_802F4A98_000004D0:
    frsp f2, f2
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_802F4A98_000004E4:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x218
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
    addi r4, r1, 0xc8
    lfs f28, 0x220(r1)
    mr r5, r4
    lfs f29, 0x21c(r1)
    addi r3, r1, 0x248
    lfs f13, 0x218(r1)
    lfs f12, 0x230(r1)
    lfs f11, 0x22c(r1)
    lfs f10, 0x228(r1)
    lfs f9, 0x240(r1)
    lfs f8, 0x23c(r1)
    lfs f7, 0x238(r1)
    lfs f6, 0x244(r1)
    lfs f5, 0x234(r1)
    lfs f4, 0x224(r1)
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x118(r1)
    stfs f3, 0x278(r1)
    stfs f3, 0x27c(r1)
    stfs f3, 0x280(r1)
    stfs f0, 0x284(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f13, 0x248(r1)
    stfs f29, 0x24c(r1)
    stfs f28, 0x250(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x258(r1)
    stfs f11, 0x25c(r1)
    stfs f12, 0x260(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x268(r1)
    stfs f8, 0x26c(r1)
    stfs f9, 0x270(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x254(r1)
    stfs f5, 0x264(r1)
    stfs f6, 0x274(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F4A98_00000600
    lfs f3, 0xcc(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F4A98_000005F0
    lfs f0, lbl_80884920
    b lbl_fn_802F4A98_000005F4
lbl_fn_802F4A98_000005F0:
    lfs f0, lbl_80884924
lbl_fn_802F4A98_000005F4:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_802F4A98_00000614
lbl_fn_802F4A98_00000600:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_802F4A98_00000614:
    lfs f0, lbl_808848DC
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x128
    fmr f2, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
    frsp f2, f2
    stfs f0, 0xdc(r1)
    stfs f2, 0x130(r1)
    lwz r3, 0x1554(r31)
    lwz r0, 0x1558(r31)
    psq_st f1, 0x0(r30), 0, 0
    cmpw r3, r0
    blt lbl_fn_802F4A98_0000066C
    lwz r0, 0x1574(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802F4A98_0000066C
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802F693C
    b lbl_fn_802F4A98_00000C98
lbl_fn_802F4A98_0000066C:
    lfs f3, 0x1524(r31)
    fcmpo cr0, f31, f3
    ble lbl_fn_802F4A98_000006AC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0x8
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F4A98_00000C98
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802F5F20
    b lbl_fn_802F4A98_00000C98
lbl_fn_802F4A98_000006AC:
    lfs f0, lbl_80884948
    fmuls f0, f0, f3
    fcmpo cr0, f31, f0
    ble lbl_fn_802F4A98_00000784
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F4A98_00000C98
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F4A98_00000C98
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F4A98_00000714
    lwz r0, 0x68(r3)
    b lbl_fn_802F4A98_00000718
lbl_fn_802F4A98_00000714:
    li r0, 0x5a
lbl_fn_802F4A98_00000718:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x1580(r31)
    stw r0, 0x1584(r31)
    b lbl_fn_802F4A98_00000C98
lbl_fn_802F4A98_00000784:
    lwz r0, 0x159c(r31)
    cmpwi r0, 0x0
    bge lbl_fn_802F4A98_000007C4
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0x7
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F4A98_00000C98
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802F5BCC
    b lbl_fn_802F4A98_00000C98
lbl_fn_802F4A98_000007C4:
    lwz r3, 0x1528(r31)
    lfs f5, lbl_808848D8
    cmpwi r3, 0x0
    beq lbl_fn_802F4A98_000007D8
    lfs f5, 0x40(r3)
lbl_fn_802F4A98_000007D8:
    lfs f0, lbl_80884948
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_802F4A98_0000080C
    lfs f0, lbl_8088494C
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802F4A98_0000080C
    li r0, 0x1
    stw r0, 0x1590(r31)
    b lbl_fn_802F4A98_00000840
lbl_fn_802F4A98_0000080C:
    lfs f0, lbl_80884948
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    bge lbl_fn_802F4A98_00000828
    li r0, 0x0
    stw r0, 0x1590(r31)
    b lbl_fn_802F4A98_00000840
lbl_fn_802F4A98_00000828:
    lfs f0, lbl_8088494C
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    ble lbl_fn_802F4A98_00000840
    li r0, 0x2
    stw r0, 0x1590(r31)
lbl_fn_802F4A98_00000840:
    lwz r0, 0x1590(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802F4A98_00000A68
    fdivs f4, f31, f5
    lfs f3, lbl_808848FC
    lfs f0, lbl_808848DC
    fsubs f3, f3, f4
    fmuls f31, f5, f3
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802F4A98_00000874
    addi r29, r31, 0x534
    b lbl_fn_802F4A98_00000A40
lbl_fn_802F4A98_00000874:
    addi r3, r1, 0x11c
    addi r30, r1, 0x104
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x124(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F98D0
    lfs f2, 0x10c(r1)
    addi r29, r1, 0xf8
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808848E4
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x100(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F4A98_000008E4
    lfs f3, 0xf8(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F4A98_000008D8
    lfs f0, lbl_80884920
    b lbl_fn_802F4A98_000008DC
lbl_fn_802F4A98_000008D8:
    lfs f0, lbl_80884924
lbl_fn_802F4A98_000008DC:
    stfs f0, 0x90(r1)
    b lbl_fn_802F4A98_000008F8
lbl_fn_802F4A98_000008E4:
    frsp f2, f2
    lfs f1, 0xf8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_802F4A98_000008F8:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
    addi r4, r1, 0x80
    lfs f29, 0x1b0(r1)
    mr r5, r4
    lfs f28, 0x1ac(r1)
    addi r3, r1, 0x1d8
    lfs f13, 0x1a8(r1)
    lfs f12, 0x1c0(r1)
    lfs f11, 0x1bc(r1)
    lfs f10, 0x1b8(r1)
    lfs f9, 0x1d0(r1)
    lfs f8, 0x1cc(r1)
    lfs f7, 0x1c8(r1)
    lfs f6, 0x1d4(r1)
    lfs f5, 0x1c4(r1)
    lfs f4, 0x1b4(r1)
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x100(r1)
    stfs f3, 0x208(r1)
    stfs f3, 0x20c(r1)
    stfs f3, 0x210(r1)
    stfs f0, 0x214(r1)
    stfs f13, 0x50(r1)
    stfs f28, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x1d8(r1)
    stfs f28, 0x1dc(r1)
    stfs f29, 0x1e0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1e8(r1)
    stfs f11, 0x1ec(r1)
    stfs f12, 0x1f0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1f8(r1)
    stfs f8, 0x1fc(r1)
    stfs f9, 0x200(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1e4(r1)
    stfs f5, 0x1f4(r1)
    stfs f6, 0x204(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F4A98_00000A14
    lfs f3, 0x84(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F4A98_00000A04
    lfs f0, lbl_80884920
    b lbl_fn_802F4A98_00000A08
lbl_fn_802F4A98_00000A04:
    lfs f0, lbl_80884924
lbl_fn_802F4A98_00000A08:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_802F4A98_00000A28
lbl_fn_802F4A98_00000A14:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_802F4A98_00000A28:
    addi r3, r1, 0x8c
    lfs f2, lbl_808848DC
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x100(r1)
lbl_fn_802F4A98_00000A40:
    lfs f2, 0x8(r29)
    addi r3, r1, 0x128
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_8088493C
    lfs f3, 0x12c(r1)
    stfs f2, 0x130(r1)
    fsubs f0, f3, f0
    stfs f0, 0x12c(r1)
    b lbl_fn_802F4A98_00000A88
lbl_fn_802F4A98_00000A68:
    cmpwi r0, 0x1
    bne lbl_fn_802F4A98_00000A78
    lfs f31, lbl_808848DC
    b lbl_fn_802F4A98_00000A88
lbl_fn_802F4A98_00000A78:
    cmpwi r0, 0x2
    bne lbl_fn_802F4A98_00000A88
    fdivs f0, f31, f5
    fmuls f31, f31, f0
lbl_fn_802F4A98_00000A88:
    lwz r4, 0x1580(r31)
    addi r3, r1, 0xe0
    lfs f0, 0x530(r31)
    addi r29, r1, 0xec
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r31)
    stfs f2, 0xe8(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_808848E4
    stfs f4, 0xe4(r1)
    frsp f4, f2
    stfs f3, 0xe0(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xf4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F4A98_00000B0C
    lfs f3, 0xec(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F4A98_00000B00
    lfs f0, lbl_80884920
    b lbl_fn_802F4A98_00000B04
lbl_fn_802F4A98_00000B00:
    lfs f0, lbl_80884924
lbl_fn_802F4A98_00000B04:
    stfs f0, 0x48(r1)
    b lbl_fn_802F4A98_00000B20
lbl_fn_802F4A98_00000B0C:
    fmr f2, f4
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802F4A98_00000B20:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
    addi r4, r1, 0x38
    lfs f29, 0x140(r1)
    mr r5, r4
    lfs f28, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f13, 0x138(r1)
    lfs f12, 0x150(r1)
    lfs f11, 0x14c(r1)
    lfs f10, 0x148(r1)
    lfs f9, 0x160(r1)
    lfs f8, 0x15c(r1)
    lfs f7, 0x158(r1)
    lfs f6, 0x164(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x144(r1)
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x168(r1)
    stfs f28, 0x16c(r1)
    stfs f29, 0x170(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F4A98_00000C3C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F4A98_00000C2C
    lfs f0, lbl_80884920
    b lbl_fn_802F4A98_00000C30
lbl_fn_802F4A98_00000C2C:
    lfs f0, lbl_80884924
lbl_fn_802F4A98_00000C30:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802F4A98_00000C50
lbl_fn_802F4A98_00000C3C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802F4A98_00000C50:
    lfs f4, lbl_808848DC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f4
    lfs f0, 0x568(r31)
    fmr f1, f31
    stfs f2, 0xf4(r1)
    addi r4, r1, 0x128
    lfs f3, 0xf0(r1)
    fmuls f2, f0, f30
    stfs f4, 0x4c(r1)
    stfs f3, 0x538(r31)
    bl fn_801426A4
    lwz r3, 0x159c(r31)
    subi r0, r3, 0x1
    stw r0, 0x159c(r31)
lbl_fn_802F4A98_00000C98:
    lwz r0, 0x2e4(r1)
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    psq_l f28, 0x2a8(r1), 0, 0
    lfd f28, 0x2a0(r1)
    lwz r31, 0x29c(r1)
    lwz r30, 0x298(r1)
    lwz r29, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_802F5370(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r3
    lfs f4, 0x156c(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x1564(r3)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x1568(r3)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x5c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x60(r1)
    stfs f5, 0x64(r1)
    bl fn_8068B100
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    frsp f31, f1
    lfs f0, lbl_808848E4
    fabs f3, f2
    addi r31, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F5370_00000D94
    lfs f3, 0x50(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F5370_00000D88
    lfs f0, lbl_80884920
    b lbl_fn_802F5370_00000D8C
lbl_fn_802F5370_00000D88:
    lfs f0, lbl_80884924
lbl_fn_802F5370_00000D8C:
    stfs f0, 0x48(r1)
    b lbl_fn_802F5370_00000DA8
lbl_fn_802F5370_00000D94:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802F5370_00000DA8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
    addi r4, r1, 0x38
    lfs f29, 0x80(r1)
    mr r5, r4
    lfs f30, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f30, 0xac(r1)
    stfs f29, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F5370_00000EC4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F5370_00000EB4
    lfs f0, lbl_80884920
    b lbl_fn_802F5370_00000EB8
lbl_fn_802F5370_00000EB4:
    lfs f0, lbl_80884924
lbl_fn_802F5370_00000EB8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802F5370_00000ED8
lbl_fn_802F5370_00000EC4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802F5370_00000ED8:
    lfs f2, lbl_808848DC
    addi r3, r1, 0x44
    lfs f0, lbl_80884950
    addi r4, r1, 0x68
    stfs f2, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    fcmpo cr0, f31, f0
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bge lbl_fn_802F5370_00000F48
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x1554(r30)
    lwz r4, 0x1580(r30)
    mr r3, r30
    li r5, 0x8
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F5370_00000FA0
    lwz r4, 0x1580(r30)
    mr r3, r30
    bl fn_802F5F20
    b lbl_fn_802F5370_00000FA0
lbl_fn_802F5370_00000F48:
    lwz r3, 0x55c(r30)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802F5370_00000F74
    li r0, 0x3
    stw r0, 0x55c(r30)
    lwz r4, 0x1560(r30)
    mr r3, r30
    lwz r5, 0x15a8(r30)
    lwz r4, 0x0(r4)
    bl fn_8017039C
lbl_fn_802F5370_00000F74:
    mr r3, r30
    bl fn_802F33A0
    lwz r0, 0x15d0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802F5370_00000FA0
    lwz r3, lbl_8087EEB0
    addi r4, r30, 0x1564
    lfs f1, lbl_80884950
    lis r5, 0xffff
    lfs f2, lbl_80884954
    bl fn_80063D3C
lbl_fn_802F5370_00000FA0:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802F566C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lis r5, lbl_80748538@ha
    lfs f3, lbl_808848F8
    stw r0, 0xb4(r1)
    lis r0, 0x4330
    lfd f5, lbl_80748538@l(r5)
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    li r30, 0x0
    lwz r4, lbl_8087F0A8
    lfs f2, 0x57c(r3)
    lwz r6, 0x30(r4)
    addi r4, r1, 0x38
    psq_l f1, 0x574(r3), 0, 0
    addi r3, r1, 0x28
    mullw r6, r6, r6
    psq_st f1, 0x0(r4), 0, 0
    mr r4, r31
    stw r0, 0x98(r1)
    lfs f0, 0x3c(r1)
    stfs f2, 0x40(r1)
    xoris r5, r6, 0x8000
    stw r5, 0x9c(r1)
    addi r5, r31, 0x528
    lfd f4, 0x98(r1)
    stw r30, 0x7c(r1)
    fsubs f4, f4, f5
    stw r30, 0x80(r1)
    fdivs f3, f3, f4
    stw r30, 0x84(r1)
    stw r30, 0x88(r1)
    fadds f0, f0, f3
    stfs f0, 0x3c(r1)
    bl fn_80176548
    lfs f3, 0x52c(r31)
    lfs f0, 0x3c(r1)
    lfs f4, 0x530(r31)
    fadds f5, f3, f0
    lfs f3, 0x40(r1)
    lfs f0, 0x34(r1)
    fadds f2, f4, f3
    lfs f4, 0x528(r31)
    lfs f3, 0x38(r1)
    fcmpo cr0, f5, f0
    stfs f5, 0x1c(r1)
    fadds f3, f4, f3
    stfs f2, 0x20(r1)
    stfs f3, 0x18(r1)
    cror eq, lt, eq
    bne lbl_fn_802F566C_000010C8
    stfs f3, 0xc(r1)
    addi r4, r1, 0xc
    addi r3, r1, 0x58
    li r30, 0x1
    stfs f5, 0x10(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14(r1)
    stfs f2, 0x60(r1)
    stfs f0, 0x5c(r1)
lbl_fn_802F566C_000010C8:
    cmpwi r30, 0x0
    beq lbl_fn_802F566C_000011A8
    addi r3, r1, 0x58
    lfs f2, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    psq_st f1, 0x528(r31), 0, 0
    lwz r3, 0x14ec(r31)
    stfs f2, 0x530(r31)
    lfs f3, 0x52c(r31)
    cmpwi r3, 0x0
    lfs f0, 0x34(r1)
    fadds f0, f3, f0
    stw r0, 0x1590(r31)
    stfs f0, 0x52c(r31)
    beq lbl_fn_802F566C_00001110
    lwz r0, 0x68(r3)
    b lbl_fn_802F566C_00001114
lbl_fn_802F566C_00001110:
    li r0, 0x5a
lbl_fn_802F566C_00001114:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x10
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14b
    lfs f2, lbl_80884900
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r4, lbl_80748558@ha
    lfs f1, lbl_808848FC
    addi r4, r4, lbl_80748558@l
    addi r3, r1, 0x8
    addi r4, r4, 0x197
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_802F566C_000011EC
lbl_fn_802F566C_000011A8:
    lfs f5, 0x528(r31)
    addi r3, r1, 0x38
    lfs f4, 0x38(r1)
    lfs f3, 0x52c(r31)
    fadds f5, f5, f4
    lfs f0, 0x3c(r1)
    psq_l f1, 0x0(r3), 0, 0
    fadds f4, f3, f0
    lfs f2, 0x40(r1)
    lfs f3, 0x530(r31)
    lfs f0, 0x40(r1)
    stfs f5, 0x528(r31)
    fadds f0, f3, f0
    stfs f4, 0x52c(r31)
    stfs f0, 0x530(r31)
    psq_st f1, 0x574(r31), 0, 0
    stfs f2, 0x57c(r31)
lbl_fn_802F566C_000011EC:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_802F58A0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802F58A0_00001318
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_802F58A0_00001304
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_802F58A0_00001320
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808848DC
    li r3, -0x1
    lfs f1, lbl_808848FC
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x15ac
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_800EB7A0
    b lbl_fn_802F58A0_00001320
lbl_fn_802F58A0_00001304:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    b lbl_fn_802F58A0_00001320
lbl_fn_802F58A0_00001318:
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_802F58A0_00001320:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802F59D8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802F59D8_00001458
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_802F59D8_0000143C
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_802F59D8_00001514
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808848DC
    li r3, -0x1
    lfs f1, lbl_808848FC
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x15ac
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_800EB7A0
    b lbl_fn_802F59D8_00001514
lbl_fn_802F59D8_0000143C:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_802F59D8_00001514
lbl_fn_802F59D8_00001458:
    lwz r0, 0x1594(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802F59D8_0000150C
    addi r3, r31, 0x7d4
    li r4, 0x20
    bl fn_8013322C
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    lfs f0, lbl_808848FC
    cmpwi r3, 0x0
    stfs f0, 0x7d8(r31)
    stw r0, 0x1590(r31)
    beq lbl_fn_802F59D8_00001494
    lwz r0, 0x68(r3)
    b lbl_fn_802F59D8_00001498
lbl_fn_802F59D8_00001494:
    li r0, 0x5a
lbl_fn_802F59D8_00001498:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x54c(r31)
    li r4, 0xe
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    ori r0, r0, 0x2000
    lfs f1, lbl_808848DC
    stw r4, 0x58c(r31)
    li r4, 0x0
    stw r0, 0x54c(r31)
    bl fn_80097CCC
    lfs f2, lbl_808848FC
    li r0, 0x1
    lfs f0, lbl_808848E0
    addi r3, r31, 0xb0
    stfs f2, 0x2fc(r31)
    li r4, 0x0
    lfs f1, lbl_808848DC
    li r5, 0x14
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80884900
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802F59D8_00001514
lbl_fn_802F59D8_0000150C:
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_802F59D8_00001514:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802F5BCC(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r4
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r0, 0x157c(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    beq lbl_fn_802F5BCC_00001590
    li r5, 0x8
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F5BCC_00001858
    lwz r4, 0x1580(r29)
    mr r3, r29
    bl fn_802F5F20
    b lbl_fn_802F5BCC_00001858
lbl_fn_802F5BCC_00001590:
    li r5, 0x7
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F5BCC_00001858
    lwz r3, 0x14ec(r29)
    li r0, 0x0
    stw r0, 0x1590(r29)
    cmpwi r3, 0x0
    beq lbl_fn_802F5BCC_000015BC
    lwz r0, 0x68(r3)
    b lbl_fn_802F5BCC_000015C0
lbl_fn_802F5BCC_000015BC:
    li r0, 0x5a
lbl_fn_802F5BCC_000015C0:
    stw r0, 0x15a0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x7
    mr r3, r29
    li r4, 0x6
    stw r0, 0x58c(r29)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r31, r1, 0x5c
    addi r3, r1, 0x74
    lfs f0, 0x530(r29)
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r1, 0x50
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x530(r30)
    mr r4, r31
    lfs f5, 0x78(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808848E4
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F5BCC_000016A8
    lfs f3, 0x68(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F5BCC_0000169C
    lfs f0, lbl_80884920
    b lbl_fn_802F5BCC_000016A0
lbl_fn_802F5BCC_0000169C:
    lfs f0, lbl_80884924
lbl_fn_802F5BCC_000016A0:
    stfs f0, 0x48(r1)
    b lbl_fn_802F5BCC_000016BC
lbl_fn_802F5BCC_000016A8:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802F5BCC_000016BC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F5BCC_000017D8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F5BCC_000017C8
    lfs f0, lbl_80884920
    b lbl_fn_802F5BCC_000017CC
lbl_fn_802F5BCC_000017C8:
    lfs f0, lbl_80884924
lbl_fn_802F5BCC_000017CC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802F5BCC_000017EC
lbl_fn_802F5BCC_000017D8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802F5BCC_000017EC:
    addi r3, r1, 0x44
    lfs f2, lbl_808848DC
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0xb0
    psq_st f1, 0x534(r29), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f2
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x534(r29)
    stfs f2, 0x53c(r29)
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x145
    lfs f2, lbl_80884900
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802F5BCC_00001858:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802F5F20(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r4
    lwz r0, 0x157c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    beq lbl_fn_802F5F20_0000191C
    li r5, 0x6
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F5F20_00001BD8
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F5F20_000018F0
    lwz r0, 0x68(r3)
    b lbl_fn_802F5F20_000018F4
lbl_fn_802F5F20_000018F0:
    li r0, 0x5a
lbl_fn_802F5F20_000018F4:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802F5F20_00001BD8
lbl_fn_802F5F20_0000191C:
    li r5, 0x8
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F5F20_00001BD8
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F5F20_0000195C
    lwz r0, 0x68(r3)
    b lbl_fn_802F5F20_00001960
lbl_fn_802F5F20_0000195C:
    li r0, 0x5a
lbl_fn_802F5F20_00001960:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r30, r1, 0x5c
    addi r3, r1, 0x74
    lfs f0, 0x530(r31)
    psq_l f1, 0x528(r29), 0, 0
    addi r5, r1, 0x50
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x530(r29)
    mr r4, r30
    lfs f5, 0x78(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r29, r1, 0x68
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808848E4
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F5F20_00001A20
    lfs f3, 0x68(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F5F20_00001A14
    lfs f0, lbl_80884920
    b lbl_fn_802F5F20_00001A18
lbl_fn_802F5F20_00001A14:
    lfs f0, lbl_80884924
lbl_fn_802F5F20_00001A18:
    stfs f0, 0x48(r1)
    b lbl_fn_802F5F20_00001A34
lbl_fn_802F5F20_00001A20:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802F5F20_00001A34:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_808848FC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F5F20_00001B50
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F5F20_00001B40
    lfs f0, lbl_80884920
    b lbl_fn_802F5F20_00001B44
lbl_fn_802F5F20_00001B40:
    lfs f0, lbl_80884924
lbl_fn_802F5F20_00001B44:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802F5F20_00001B64
lbl_fn_802F5F20_00001B50:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802F5F20_00001B64:
    addi r3, r1, 0x44
    lfs f2, lbl_808848DC
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    psq_st f1, 0x534(r31), 0, 0
    addi r3, r31, 0xb0
    li r4, 0x0
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f2
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x534(r31)
    stfs f2, 0x53c(r31)
    stw r0, 0x15a4(r31)
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_80884900
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802F5F20_00001BD8:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
