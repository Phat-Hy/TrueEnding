#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006EF48(void);
extern void fn_800A4450(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801231D0(void);
extern void fn_801F0544(void);
extern void fn_801F4728(void);
extern void fn_801F4998(void);
extern void fn_801F4AA0(void);
extern void fn_801F4E8C(void);
extern void fn_801FEC08(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_804A436C(void);
extern void fn_804AC734(void);
extern void fn_804AC79C(void);
extern void fn_804AC7EC(void);
extern void fn_804AC96C(void);
extern void fn_804ACAF8(void);
extern void fn_804ACD10(void);
extern void fn_804ACDBC(void);
extern void fn_804AD000(void);
extern void fn_804AF520(void);
extern void fn_804B3C78(void);
extern void fn_804B3EFC(void);
extern void fn_804BA350(void);
extern void fn_804C35F0(void);
extern void fn_804E4DD8(void);
extern void fn_804EA524(void);
extern void fn_804EAA54(void);
extern void fn_804EAA60(void);
extern void fn_804FB224(void);
extern void fn_80502978(void);
extern void fn_805053FC(void);
extern void fn_8050C844(void);
extern void fn_8050F5AC(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_807909CC[];
extern u8 lbl_80757B7C[];

/* Small data declarations */
extern u32 lbl_8087E0FC;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F588;
extern u32 lbl_8087F5A0;
extern u32 lbl_8087F5A4;
extern u32 lbl_8087F5B0;
extern u32 lbl_8087F5B8;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F5D4;
extern u32 lbl_8087F5EC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F860;
extern u32 lbl_808813D0;
extern u32 lbl_80887308;
extern u32 lbl_80887310;
extern u32 lbl_80887318;
extern u32 lbl_8088731C;
extern u32 lbl_80887320;
extern u32 lbl_80887324;
extern u32 lbl_80887328;
extern u32 lbl_80887330;
extern u32 lbl_80887334;
extern u32 lbl_80887338;

/* Function declarations */
void fn_804B0F58(void);
void fn_804B12F8(void);
void fn_804B1528(void);
void fn_804B1C88(void);
void fn_804B1E48(void);
void fn_804B274C(void);
void fn_804B2934(void);

asm void fn_804B0F58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B0F58_00000030
    li r0, 0x0
    stw r0, 0xd8(r3)
    b lbl_fn_804B0F58_00000388
lbl_fn_804B0F58_00000030:
    lwz r0, 0xbc(r3)
    cmplwi r0, 0x13
    bgt lbl_fn_804B0F58_0000034C
    lis r4, jumptable_807909CC@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807909CC@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    bl fn_804B12F8
    b lbl_fn_804B0F58_0000034C
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B0F58_0000034C
    bl fn_804AC79C
    cmpwi r3, 0x0
    beq lbl_fn_804B0F58_00000088
    mr r3, r31
    li r4, 0x13
    bl fn_804AF520
    b lbl_fn_804B0F58_0000034C
lbl_fn_804B0F58_00000088:
    lwz r3, lbl_8087F588
    bl fn_804AC7EC
    cmpwi r3, 0x0
    beq lbl_fn_804B0F58_0000034C
    mr r3, r31
    li r4, 0x2
    bl fn_804AF520
    b lbl_fn_804B0F58_0000034C
    lwz r4, lbl_8087F5EC
    lwz r0, 0xd8(r4)
    cmpwi r0, 0x8
    bne lbl_fn_804B0F58_000000C4
    li r4, 0x2
    bl fn_804AF520
    b lbl_fn_804B0F58_0000034C
lbl_fn_804B0F58_000000C4:
    cmpwi r0, 0x1
    bne lbl_fn_804B0F58_000000FC
    lwz r30, 0x70(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804B0F58_0000034C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
    b lbl_fn_804B0F58_0000034C
lbl_fn_804B0F58_000000FC:
    cmpwi r0, 0x7
    bne lbl_fn_804B0F58_0000034C
    lwz r30, 0x70(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804B0F58_0000034C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887330
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
    b lbl_fn_804B0F58_0000034C
    bl fn_804B2934
    b lbl_fn_804B0F58_0000034C
    lwz r4, lbl_8087F5B0
    lwz r0, 0x2bc(r4)
    cmpwi r0, 0x6
    bne lbl_fn_804B0F58_0000034C
    lwz r4, 0xc0(r3)
    bl fn_804AF520
    b lbl_fn_804B0F58_0000034C
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B0F58_0000034C
    bl fn_804AC79C
    cmpwi r3, 0x0
    beq lbl_fn_804B0F58_000001E4
    li r0, -0x1
    stw r0, 0xf4(r31)
    mr r3, r31
    li r4, 0x2
    stw r0, 0xf8(r31)
    stw r0, 0xfc(r31)
    stw r0, 0x100(r31)
    stw r0, 0x104(r31)
    stw r0, 0x108(r31)
    stw r0, 0x10c(r31)
    stw r0, 0x110(r31)
    stw r0, 0x114(r31)
    stw r0, 0x118(r31)
    stw r0, 0x11c(r31)
    stw r0, 0x120(r31)
    stw r0, 0x124(r31)
    stw r0, 0x128(r31)
    stw r0, 0x12c(r31)
    stw r0, 0x130(r31)
    stw r0, 0x134(r31)
    stw r0, 0x138(r31)
    stw r0, 0x13c(r31)
    stw r0, 0x140(r31)
    stw r0, 0x144(r31)
    stw r0, 0x148(r31)
    stw r0, 0x14c(r31)
    bl fn_804AF520
    b lbl_fn_804B0F58_0000034C
lbl_fn_804B0F58_000001E4:
    lwz r3, lbl_8087F588
    bl fn_804AC7EC
    cmpwi r3, 0x0
    beq lbl_fn_804B0F58_0000034C
    mr r3, r31
    li r4, 0x9
    bl fn_804AF520
    b lbl_fn_804B0F58_0000034C
    bl fn_804B1528
    b lbl_fn_804B0F58_0000034C
    lwz r3, lbl_8087F0A8
    li r4, 0x34
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_804B0F58_0000034C
    lwz r3, lbl_8087F610
    bl fn_804EA524
    cmpwi r3, 0x0
    beq lbl_fn_804B0F58_0000034C
    lwz r3, lbl_8087F5D4
    cmpwi r3, 0x0
    beq lbl_fn_804B0F58_0000034C
    lwz r0, 0x94(r3)
    cmpwi r0, 0x4
    bne lbl_fn_804B0F58_0000034C
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804B0F58_00000268
    lwz r0, 0x50c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B0F58_0000034C
lbl_fn_804B0F58_00000268:
    addi r3, r1, 0x8
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F5D4
    li r4, 0x1
    bl fn_804C35F0
    b lbl_fn_804B0F58_0000034C
    bl fn_804B1C88
    b lbl_fn_804B0F58_0000034C
    bl fn_804B1E48
    b lbl_fn_804B0F58_0000034C
    bl fn_804B274C
    b lbl_fn_804B0F58_0000034C
    lwz r3, lbl_8087F5B8
    lwz r0, 0x88(r3)
    cmpwi r0, 0x5
    bne lbl_fn_804B0F58_0000034C
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B0F58_0000034C
    li r4, 0x6
    bl fn_804BA350
    mr r3, r31
    li r4, 0xa
    bl fn_804AF520
    b lbl_fn_804B0F58_0000034C
    lwz r3, lbl_8087F5C4
    lwz r0, 0xd88(r3)
    cmpwi r0, 0x9
    bne lbl_fn_804B0F58_0000034C
    lwz r0, 0xda4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B0F58_0000034C
    cmpwi r3, 0x0
    beq lbl_fn_804B0F58_00000304
    bl fn_800D2338
lbl_fn_804B0F58_00000304:
    lwz r3, lbl_8087F610
    bl fn_804EAA54
    cmpwi r3, 0x1
    bne lbl_fn_804B0F58_00000324
    mr r3, r31
    li r4, 0xb
    bl fn_804AF520
    b lbl_fn_804B0F58_0000034C
lbl_fn_804B0F58_00000324:
    mr r3, r31
    li r4, 0xa
    bl fn_804AF520
    b lbl_fn_804B0F58_0000034C
    lwz r4, 0x29a0(r3)
    lwz r0, 0x29a4(r3)
    cmpw r4, r0
    bne lbl_fn_804B0F58_0000034C
    li r4, 0x14
    bl fn_804AF520
lbl_fn_804B0F58_0000034C:
    lwz r0, 0x299c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804B0F58_00000388
    lwz r0, 0x29a8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804B0F58_00000388
    lwz r3, 0x29a0(r31)
    lwz r4, 0x29a4(r31)
    addi r0, r3, 0x1
    stw r0, 0x29a0(r31)
    cmpw r0, r4
    blt lbl_fn_804B0F58_00000388
    li r0, 0x1
    stw r4, 0x29a0(r31)
    stw r0, 0x29a8(r31)
lbl_fn_804B0F58_00000388:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B12F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x299c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B12F8_000003F0
    lwz r4, 0x29a0(r3)
    lwz r0, 0x29a4(r3)
    cmpw r4, r0
    bne lbl_fn_804B12F8_000005B4
    li r0, 0x0
    stw r0, 0x299c(r3)
    stw r0, 0x29a4(r3)
    stw r0, 0x29a0(r3)
    stw r0, 0x29a8(r3)
    b lbl_fn_804B12F8_000005B4
lbl_fn_804B12F8_000003F0:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B12F8_0000047C
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804B12F8_000005B4
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    lwz r31, 0x48(r29)
    cmpwi r31, 0x0
    beq lbl_fn_804B12F8_00000448
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_804B12F8_00000448:
    lwz r31, 0x4c(r29)
    cmpwi r31, 0x0
    beq lbl_fn_804B12F8_0000047C
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
    b lbl_fn_804B12F8_0000047C
    b lbl_fn_804B12F8_000005B4
lbl_fn_804B12F8_0000047C:
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    lwz r0, -0x3e0c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804B12F8_000005B4
    lwz r30, lbl_8087EF70
    addi r3, r29, 0xe4
    li r31, 0x0
    li r4, 0x5
    li r5, 0x5
    li r6, 0x1
    li r7, 0x3
    bl fn_804A436C
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B12F8_000004E8
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r31, 0x1
    b lbl_fn_804B12F8_0000051C
lbl_fn_804B12F8_000004E8:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B12F8_0000051C
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    li r31, 0x2
lbl_fn_804B12F8_0000051C:
    cmpwi r31, 0x1
    bne lbl_fn_804B12F8_000005A0
    lwz r0, 0xe4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_804B12F8_00000540
    mr r3, r29
    li r4, 0x7
    bl fn_804AF520
    b lbl_fn_804B12F8_000005B4
lbl_fn_804B12F8_00000540:
    cmpwi r0, 0x1
    bne lbl_fn_804B12F8_00000558
    mr r3, r29
    li r4, 0x4
    bl fn_804AF520
    b lbl_fn_804B12F8_000005B4
lbl_fn_804B12F8_00000558:
    cmpwi r0, 0x2
    bne lbl_fn_804B12F8_00000570
    mr r3, r29
    li r4, 0x5
    bl fn_804AF520
    b lbl_fn_804B12F8_000005B4
lbl_fn_804B12F8_00000570:
    cmpwi r0, 0x3
    bne lbl_fn_804B12F8_00000588
    mr r3, r29
    li r4, 0x6
    bl fn_804AF520
    b lbl_fn_804B12F8_000005B4
lbl_fn_804B12F8_00000588:
    cmpwi r0, 0x4
    bne lbl_fn_804B12F8_000005B4
    mr r3, r29
    li r4, 0x3
    bl fn_804AF520
    b lbl_fn_804B12F8_000005B4
lbl_fn_804B12F8_000005A0:
    cmpwi r31, 0x2
    bne lbl_fn_804B12F8_000005B4
    mr r3, r29
    li r4, 0x3
    bl fn_804AF520
lbl_fn_804B12F8_000005B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B1528(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    lwz r4, lbl_8087F588
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804B1528_00000BB4
    mr r3, r4
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804B1528_00000D08
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    lwz r30, 0x50(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r29, r4, 0x2ec
    addi r3, r30, 0x58
    addi r4, r4, 0x2fa
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x40
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x40(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804B1528_00000674
    addi r4, r1, 0x42
    b lbl_fn_804B1528_00000678
lbl_fn_804B1528_00000674:
    lwz r4, 0x48(r1)
lbl_fn_804B1528_00000678:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x40(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804B1528_000006A0
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_804B1528_000006A0:
    mr r3, r29
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r30, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r29, 0x50(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r30, r4, 0x3a3
    addi r3, r29, 0x58
    addi r4, r4, 0x3ae
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x34
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x34(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804B1528_00000714
    addi r4, r1, 0x36
    b lbl_fn_804B1528_00000718
lbl_fn_804B1528_00000714:
    lwz r4, 0x3c(r1)
lbl_fn_804B1528_00000718:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x34(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804B1528_00000740
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_804B1528_00000740:
    mr r3, r30
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r29, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r29, 0x50(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r30, r4, 0x3c8
    addi r3, r29, 0x58
    addi r4, r4, 0x3d3
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x28
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x28(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804B1528_000007B4
    addi r4, r1, 0x2a
    b lbl_fn_804B1528_000007B8
lbl_fn_804B1528_000007B4:
    lwz r4, 0x30(r1)
lbl_fn_804B1528_000007B8:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x28(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804B1528_000007E0
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_804B1528_000007E0:
    mr r3, r30
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r29, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r29, 0x50(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r30, r4, 0x3e1
    addi r3, r29, 0x58
    addi r4, r4, 0x3ec
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x1c
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x1c(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804B1528_00000854
    addi r4, r1, 0x1e
    b lbl_fn_804B1528_00000858
lbl_fn_804B1528_00000854:
    lwz r4, 0x24(r1)
lbl_fn_804B1528_00000858:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x1c(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804B1528_00000880
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_804B1528_00000880:
    mr r3, r30
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r29, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r29, 0x50(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r30, r4, 0x352
    addi r3, r29, 0x58
    addi r4, r4, 0x35d
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x10
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x10(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_8088731C
    bne lbl_fn_804B1528_000008F4
    addi r4, r1, 0x12
    b lbl_fn_804B1528_000008F8
lbl_fn_804B1528_000008F4:
    lwz r4, 0x18(r1)
lbl_fn_804B1528_000008F8:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x10(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804B1528_00000920
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_804B1528_00000920:
    mr r3, r30
    bl fn_800DC6B4
    lfs f1, lbl_80887320
    mr r4, r3
    lfs f0, lbl_80887324
    addi r3, r29, 0x58
    fadds f1, f1, f31
    li r5, 0x2
    fdivs f1, f1, f0
    bl fn_801FED24
    lwz r29, 0x50(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804B1528_00000974
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804B1528_00000974:
    lwz r29, 0x54(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804B1528_000009A0
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804B1528_000009A0:
    lfs f31, lbl_80887318
    mr r28, r31
    li r30, 0x0
lbl_fn_804B1528_000009AC:
    lwz r29, 0x58(r28)
    cmpwi r29, 0x0
    beq lbl_fn_804B1528_000009D4
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r29)
lbl_fn_804B1528_000009D4:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmplwi r30, 0x3
    blt lbl_fn_804B1528_000009AC
    lwz r3, 0x64(r31)
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    addi r4, r4, 0x3fa
    addi r3, r3, 0x58
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x4c
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x4c(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_80887310
    bne lbl_fn_804B1528_00000A2C
    addi r4, r1, 0x4e
    b lbl_fn_804B1528_00000A30
lbl_fn_804B1528_00000A2C:
    lwz r4, 0x54(r1)
lbl_fn_804B1528_00000A30:
    lfs f2, lbl_80887308
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x4c(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804B1528_00000A58
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_804B1528_00000A58:
    lwz r3, 0x64(r31)
    lis r30, lbl_80757B7C@ha
    addi r30, r30, lbl_80757B7C@l
    addi r4, r30, 0x40b
    addi r3, r3, 0x58
    bl fn_801FEC08
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    lwz r4, 0x64(r31)
    fadds f31, f31, f1
    addi r3, r30, 0x413
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r29, 0x64(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804B1528_00000AD0
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887318
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804B1528_00000AD0:
    lwz r28, lbl_8087F5A0
    li r30, 0x0
    lfs f31, lbl_80887318
lbl_fn_804B1528_00000ADC:
    cmpwi r30, 0x0
    bne lbl_fn_804B1528_00000B0C
    lwz r29, 0xb8(r28)
    cmpwi r29, 0x0
    beq lbl_fn_804B1528_00000B0C
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804B1528_00000B0C:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_804B1528_00000ADC
    lwz r3, lbl_8087F5A0
    lwz r3, 0xb8(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804B1528_00000B40
    stw r0, 0x38(r3)
    b lbl_fn_804B1528_00000B40
    stw r0, 0x38(r3)
lbl_fn_804B1528_00000B40:
    lwz r3, lbl_8087F628
    li r4, 0x0
    addi r3, r3, 0x430
    bl fn_8050F5AC
    subfic r4, r3, -0x1
    addi r0, r3, 0x1
    or r0, r4, r0
    srwi. r0, r0, 31
    stw r0, 0xd4(r31)
    beq lbl_fn_804B1528_00000B8C
    lfs f1, lbl_80887328
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    lwz r3, 0x50(r31)
    fmr f2, f1
    addi r4, r4, 0x368
    fmr f3, f1
    bl fn_801F4AA0
    b lbl_fn_804B1528_00000BB4
lbl_fn_804B1528_00000B8C:
    lfs f1, lbl_80887324
    lis r4, lbl_80757B7C@ha
    addi r4, r4, lbl_80757B7C@l
    lwz r3, 0x50(r31)
    fmr f2, f1
    addi r4, r4, 0x368
    fmr f3, f1
    bl fn_801F4AA0
    b lbl_fn_804B1528_00000BB4
    b lbl_fn_804B1528_00000D08
lbl_fn_804B1528_00000BB4:
    lwz r0, 0xe4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_804B1528_00000BD4
    lwz r0, 0xd4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804B1528_00000BD4
    li r0, 0x0
    stw r0, 0xe4(r31)
lbl_fn_804B1528_00000BD4:
    lwz r29, lbl_8087EF70
lbl_fn_804B1528_00000BD8:
    addi r3, r31, 0xe4
    li r4, 0x5
    li r5, 0x5
    li r6, 0x1
    li r7, 0x3
    bl fn_804A436C
    lwz r0, 0xe4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_804B1528_00000C08
    lwz r0, 0xd4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804B1528_00000BD8
lbl_fn_804B1528_00000C08:
    mr r3, r29
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B1528_00000CCC
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0xe4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804B1528_00000C60
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804EAA60
    mr r3, r31
    li r4, 0xa
    bl fn_804AF520
    b lbl_fn_804B1528_00000D08
lbl_fn_804B1528_00000C60:
    cmpwi r0, 0x1
    bne lbl_fn_804B1528_00000C84
    lwz r3, lbl_8087F610
    li r4, 0x1
    bl fn_804EAA60
    mr r3, r31
    li r4, 0xa
    bl fn_804AF520
    b lbl_fn_804B1528_00000D08
lbl_fn_804B1528_00000C84:
    cmpwi r0, 0x2
    bne lbl_fn_804B1528_00000C9C
    mr r3, r31
    li r4, 0x11
    bl fn_804AF520
    b lbl_fn_804B1528_00000D08
lbl_fn_804B1528_00000C9C:
    cmpwi r0, 0x3
    bne lbl_fn_804B1528_00000CB4
    mr r3, r31
    li r4, 0x6
    bl fn_804AF520
    b lbl_fn_804B1528_00000D08
lbl_fn_804B1528_00000CB4:
    cmpwi r0, 0x4
    bne lbl_fn_804B1528_00000D08
    mr r3, r31
    li r4, 0x8
    bl fn_804AF520
    b lbl_fn_804B1528_00000D08
lbl_fn_804B1528_00000CCC:
    mr r3, r29
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B1528_00000D08
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x8
    bl fn_804AF520
lbl_fn_804B1528_00000D08:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804B1C88(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lis r4, lbl_80757B7C@ha
    mr r31, r3
    mr r28, r31
    li r27, 0x0
    addi r29, r4, lbl_80757B7C@l
    li r30, -0x1
lbl_fn_804B1C88_00000D5C:
    lwz r3, 0xec(r28)
    cmpwi r3, -0x1
    beq lbl_fn_804B1C88_00000DE0
    cmpwi r3, 0x5
    bgt lbl_fn_804B1C88_00000D78
    mulli r4, r3, 0x1e
    b lbl_fn_804B1C88_00000D84
lbl_fn_804B1C88_00000D78:
    subi r0, r3, 0x5
    mulli r0, r0, 0x1e
    subfic r4, r0, 0x96
lbl_fn_804B1C88_00000D84:
    clrlslwi r0, r4, 24, 16
    cmpwi r27, 0x0
    clrlslwi r3, r4, 24, 8
    rlwimi r3, r4, 0, 24, 31
    oris r0, r0, 0xff00
    or r5, r3, r0
    bne lbl_fn_804B1C88_00000DB0
    lwz r3, 0x78(r31)
    addi r4, r29, 0x41e
    bl fn_801F4998
    b lbl_fn_804B1C88_00000DC4
lbl_fn_804B1C88_00000DB0:
    cmpwi r27, 0x1
    bne lbl_fn_804B1C88_00000DC4
    lwz r3, 0x78(r31)
    addi r4, r29, 0x429
    bl fn_801F4998
lbl_fn_804B1C88_00000DC4:
    lwz r3, 0xec(r28)
    addi r0, r3, 0x1
    stw r0, 0xec(r28)
    cmpwi r0, 0xa
    ble lbl_fn_804B1C88_00000E14
    stw r30, 0xec(r28)
    b lbl_fn_804B1C88_00000E14
lbl_fn_804B1C88_00000DE0:
    cmpwi r27, 0x0
    bne lbl_fn_804B1C88_00000DFC
    lwz r3, 0x78(r31)
    addi r4, r29, 0x41e
    lis r5, 0xff00
    bl fn_801F4998
    b lbl_fn_804B1C88_00000E14
lbl_fn_804B1C88_00000DFC:
    cmpwi r27, 0x1
    bne lbl_fn_804B1C88_00000E14
    lwz r3, 0x78(r31)
    addi r4, r29, 0x429
    lis r5, 0xff00
    bl fn_801F4998
lbl_fn_804B1C88_00000E14:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0x2
    blt lbl_fn_804B1C88_00000D5C
    lwz r0, 0xdc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804B1C88_00000ED8
    lwz r5, 0xe0(r31)
    lwz r3, lbl_8087F610
    neg r0, r5
    lwz r4, 0xc8(r31)
    or r0, r0, r5
    srwi r5, r0, 31
    bl fn_804E4DD8
    cmpwi r3, 0x0
    li r0, 0x0
    stw r3, 0xdc(r31)
    stw r0, 0xe0(r31)
    bne lbl_fn_804B1C88_00000E7C
    mr r3, r31
    li r4, 0x12
    bl fn_804AF520
    lwz r3, lbl_8087F610
    li r4, 0x2a
    addi r3, r3, 0x4fc
    bl fn_804FB224
lbl_fn_804B1C88_00000E7C:
    lis r30, lbl_80757B7C@ha
    lwz r29, 0x80(r31)
    addi r30, r30, lbl_80757B7C@l
    addi r3, r30, 0x434
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f0, lbl_80887318
    addi r4, r30, 0x444
    stfs f0, 0x14(r1)
    addi r5, r1, 0x8
    lwz r3, 0xb4(r31)
    bl fn_801F4728
    lwz r4, 0xb4(r31)
    addi r3, r30, 0x44c
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887334
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
lbl_fn_804B1C88_00000ED8:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804B1E48(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x160
    bl _savegpr_22
    lfs f0, lbl_80887308
    li r0, 0x0
    mr r29, r3
    lis r25, lbl_80757B7C@ha
    stw r0, 0xf8(r1)
    mr r22, r29
    lwz r31, lbl_8087EF70
    addi r25, r25, lbl_80757B7C@l
    stw r0, 0xfc(r1)
    li r23, 0x0
    stw r0, 0x100(r1)
    stw r0, 0x104(r1)
    stw r0, 0x108(r1)
    stw r0, 0x10c(r1)
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x118(r1)
    stw r0, 0x11c(r1)
    stw r0, 0x120(r1)
    stw r0, 0x124(r1)
    stw r0, 0x128(r1)
    stw r0, 0x12c(r1)
    stw r0, 0x130(r1)
    stw r0, 0x134(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f0, 0xb4(r1)
lbl_fn_804B1E48_00000F78:
    addi r3, r1, 0xf8
    addi r4, r25, 0x457
    addi r5, r23, 0x1
    crclr 6
    bl sprintf
    lwz r26, 0x80(r29)
    addi r3, r1, 0xf8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x90
    bl fn_801F4E8C
    lfs f4, 0x90(r1)
    addi r4, r25, 0x468
    lfs f3, 0x94(r1)
    addi r5, r1, 0xa4
    lfs f2, 0x98(r1)
    lfs f1, 0x9c(r1)
    lfs f0, 0xa0(r1)
    stfs f4, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f2, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f0, 0xb4(r1)
    lwz r3, 0x8c(r22)
    bl fn_801F4728
    addi r23, r23, 0x1
    addi r22, r22, 0x4
    cmpwi r23, 0xa
    blt lbl_fn_804B1E48_00000F78
    lwz r23, lbl_8087EF70
    addi r3, r29, 0xe4
    li r25, 0x0
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x3
    bl fn_804A436C
    mr r3, r23
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B1E48_00001048
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r25, 0x1
    b lbl_fn_804B1E48_0000107C
lbl_fn_804B1E48_00001048:
    mr r3, r23
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B1E48_0000107C
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    li r25, 0x2
lbl_fn_804B1E48_0000107C:
    cmpwi r25, 0x1
    bne lbl_fn_804B1E48_00001094
    mr r3, r29
    li r4, 0x9
    bl fn_804AF520
    b lbl_fn_804B1E48_000010A8
lbl_fn_804B1E48_00001094:
    cmpwi r25, 0x2
    bne lbl_fn_804B1E48_000010A8
    mr r3, r29
    li r4, 0x9
    bl fn_804AF520
lbl_fn_804B1E48_000010A8:
    lis r3, lbl_80757B7C@ha
    mr r22, r29
    li r23, 0x0
    li r25, -0x1
    addi r26, r3, lbl_80757B7C@l
lbl_fn_804B1E48_000010BC:
    lwz r3, 0xec(r22)
    cmpwi r3, -0x1
    beq lbl_fn_804B1E48_00001140
    cmpwi r3, 0x5
    bgt lbl_fn_804B1E48_000010D8
    mulli r4, r3, 0x1e
    b lbl_fn_804B1E48_000010E4
lbl_fn_804B1E48_000010D8:
    subi r0, r3, 0x5
    mulli r0, r0, 0x1e
    subfic r4, r0, 0x96
lbl_fn_804B1E48_000010E4:
    clrlslwi r0, r4, 24, 16
    cmpwi r23, 0x0
    clrlslwi r3, r4, 24, 8
    rlwimi r3, r4, 0, 24, 31
    oris r0, r0, 0xff00
    or r5, r3, r0
    bne lbl_fn_804B1E48_00001110
    lwz r3, 0x78(r29)
    addi r4, r26, 0x41e
    bl fn_801F4998
    b lbl_fn_804B1E48_00001124
lbl_fn_804B1E48_00001110:
    cmpwi r23, 0x1
    bne lbl_fn_804B1E48_00001124
    lwz r3, 0x78(r29)
    addi r4, r26, 0x429
    bl fn_801F4998
lbl_fn_804B1E48_00001124:
    lwz r3, 0xec(r22)
    addi r0, r3, 0x1
    stw r0, 0xec(r22)
    cmpwi r0, 0xa
    ble lbl_fn_804B1E48_00001174
    stw r25, 0xec(r22)
    b lbl_fn_804B1E48_00001174
lbl_fn_804B1E48_00001140:
    cmpwi r23, 0x0
    bne lbl_fn_804B1E48_0000115C
    lwz r3, 0x78(r29)
    addi r4, r26, 0x41e
    lis r5, 0xff00
    bl fn_801F4998
    b lbl_fn_804B1E48_00001174
lbl_fn_804B1E48_0000115C:
    cmpwi r23, 0x1
    bne lbl_fn_804B1E48_00001174
    lwz r3, 0x78(r29)
    addi r4, r26, 0x429
    lis r5, 0xff00
    bl fn_801F4998
lbl_fn_804B1E48_00001174:
    addi r23, r23, 0x1
    addi r22, r22, 0x4
    cmpwi r23, 0x2
    blt lbl_fn_804B1E48_000010BC
    lwz r30, 0xc8(r29)
    mr r3, r31
    li r22, 0x0
    li r4, 0x0
    li r5, 0x17
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_804B1E48_000011BC
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B1E48_000011E4
lbl_fn_804B1E48_000011BC:
    lwz r3, 0xc8(r29)
    li r0, 0x0
    stw r0, 0xec(r29)
    subic. r0, r3, 0x1
    stw r0, 0xc8(r29)
    bge lbl_fn_804B1E48_000011DC
    li r0, 0x2
    stw r0, 0xc8(r29)
lbl_fn_804B1E48_000011DC:
    li r22, 0x1
    b lbl_fn_804B1E48_00001238
lbl_fn_804B1E48_000011E4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_804B1E48_00001214
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B1E48_00001238
lbl_fn_804B1E48_00001214:
    lwz r3, 0xc8(r29)
    li r0, 0x0
    stw r0, 0xf0(r29)
    addi r3, r3, 0x1
    cmpwi r3, 0x2
    stw r3, 0xc8(r29)
    ble lbl_fn_804B1E48_00001234
    stw r0, 0xc8(r29)
lbl_fn_804B1E48_00001234:
    li r22, 0x1
lbl_fn_804B1E48_00001238:
    cmpwi r22, 0x0
    beq lbl_fn_804B1E48_000014F4
    addi r3, r1, 0x14
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F5A4
    lwz r4, 0xc8(r29)
    bl fn_8050C844
    cmpwi r3, 0x0
    beq lbl_fn_804B1E48_0000127C
    mr r3, r29
    li r4, 0x11
    bl fn_804AF520
    b lbl_fn_804B1E48_000014DC
lbl_fn_804B1E48_0000127C:
    li r26, 0x0
    stw r26, 0xdc(r29)
    mr r3, r29
    li r4, -0x1
    li r5, 0x0
    li r6, 0xa
    bl fn_804B3EFC
    lwz r0, 0xdc(r29)
    lfs f0, lbl_80887308
    cmpwi r0, 0x0
    stw r26, 0xb8(r1)
    stw r26, 0xbc(r1)
    stw r26, 0xc0(r1)
    stw r26, 0xc4(r1)
    stw r26, 0xc8(r1)
    stw r26, 0xcc(r1)
    stw r26, 0xd0(r1)
    stw r26, 0xd4(r1)
    stw r26, 0xd8(r1)
    stw r26, 0xdc(r1)
    stw r26, 0xe0(r1)
    stw r26, 0xe4(r1)
    stw r26, 0xe8(r1)
    stw r26, 0xec(r1)
    stw r26, 0xf0(r1)
    stw r26, 0xf4(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x64(r1)
    beq lbl_fn_804B1E48_000014B4
    lwz r0, 0xc8(r29)
    li r23, 0x0
    li r25, -0x1
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r24, 0x25c(r3)
    b lbl_fn_804B1E48_00001354
lbl_fn_804B1E48_00001318:
    lwz r12, 0x8(r24)
    mr r3, r24
    mr r4, r23
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r26, 0x0(r3)
    la r4, lbl_8087E0FC
    stw r26, 0x4(r3)
    stw r25, 0x4c(r3)
    stw r26, 0x48(r3)
    crclr 6
    addi r3, r3, 0x8
    bl fn_800DD3FC
    addi r23, r23, 0x1
lbl_fn_804B1E48_00001354:
    lwz r12, 0x8(r24)
    mr r3, r24
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpw r23, r3
    blt lbl_fn_804B1E48_00001318
    lwz r0, 0xc8(r29)
    li r24, 0x0
    lwz r4, lbl_8087F5A4
    mr r28, r24
    slwi r0, r0, 2
    li r31, 0x0
    add r3, r29, r0
    addi r22, r4, 0x14
    lwz r23, 0x25c(r3)
    li r26, 0x1
    b lbl_fn_804B1E48_00001478
lbl_fn_804B1E48_0000139C:
    lwz r0, 0x0(r22)
    cmplw r24, r0
    bge lbl_fn_804B1E48_00001454
    lwz r12, 0x8(r23)
    add r25, r22, r31
    mr r3, r23
    mr r4, r24
    lwz r12, 0xc(r12)
    lwz r27, 0x4(r25)
    mtctr r12
    bctrl
    stw r27, 0x0(r3)
    mr r3, r23
    mr r4, r24
    lwz r12, 0x8(r23)
    lwz r27, 0xc(r25)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r27, 0x4(r3)
    mr r3, r23
    mr r4, r24
    lwz r12, 0x8(r23)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r4, 0x1c(r25)
    crclr 6
    addi r3, r3, 0x8
    bl fn_800DD3FC
    lwz r12, 0x8(r23)
    mr r3, r23
    mr r4, r24
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r26, 0x48(r3)
    mr r3, r23
    mr r4, r24
    lwz r12, 0x8(r23)
    lwz r27, 0x8(r25)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r27, 0x4c(r3)
    b lbl_fn_804B1E48_00001470
lbl_fn_804B1E48_00001454:
    lwz r12, 0x8(r23)
    mr r3, r23
    mr r4, r24
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r28, 0x48(r3)
lbl_fn_804B1E48_00001470:
    addi r24, r24, 0x1
    addi r31, r31, 0x1c
lbl_fn_804B1E48_00001478:
    lwz r12, 0x8(r23)
    mr r3, r23
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpw r24, r3
    blt lbl_fn_804B1E48_0000139C
    lwz r0, 0x0(r22)
    li r4, 0x0
    stw r0, 0x4(r23)
    lwz r0, 0xc8(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r3, 0x25c(r3)
    stw r4, 0x0(r3)
lbl_fn_804B1E48_000014B4:
    lwz r4, 0xc8(r29)
    mr r3, r29
    li r6, 0xa
    slwi r0, r4, 2
    add r5, r29, r0
    lwz r5, 0x25c(r5)
    lwz r5, 0x0(r5)
    bl fn_804B3EFC
    li r0, 0x1
    stw r0, 0xdc(r29)
lbl_fn_804B1E48_000014DC:
    lwz r5, 0xc8(r29)
    mr r3, r29
    mr r4, r30
    li r6, 0x1
    bl fn_804B3C78
    b lbl_fn_804B1E48_00001650
lbl_fn_804B1E48_000014F4:
    lwz r0, 0xc8(r29)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    slwi r0, r0, 2
    add r6, r29, r0
    lwz r6, 0x25c(r6)
    lwz r30, 0x0(r6)
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B1E48_00001538
    mr r3, r31
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B1E48_00001574
lbl_fn_804B1E48_00001538:
    lwz r0, 0xc8(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r4, 0x25c(r3)
    lwz r3, 0x0(r4)
    subic. r0, r3, 0x1
    stw r0, 0x0(r4)
    bge lbl_fn_804B1E48_00001610
    lwz r0, 0xc8(r29)
    li r4, 0x0
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r3, 0x25c(r3)
    stw r4, 0x0(r3)
    b lbl_fn_804B1E48_00001610
lbl_fn_804B1E48_00001574:
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B1E48_000015A4
    mr r3, r31
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B1E48_00001610
lbl_fn_804B1E48_000015A4:
    lwz r0, 0xc8(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r3, 0x25c(r3)
    lwz r12, 0x8(r3)
    lwz r4, 0x0(r3)
    lwz r12, 0xc(r12)
    addi r4, r4, 0xa
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_804B1E48_000015DC
    li r0, 0x0
    b lbl_fn_804B1E48_000015EC
lbl_fn_804B1E48_000015DC:
    lwz r3, 0x48(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804B1E48_000015EC:
    cmplwi r0, 0x1
    bne lbl_fn_804B1E48_00001610
    lwz r0, 0xc8(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r4, 0x25c(r3)
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
lbl_fn_804B1E48_00001610:
    lwz r4, 0xc8(r29)
    slwi r0, r4, 2
    add r3, r29, r0
    lwz r3, 0x25c(r3)
    lwz r5, 0x0(r3)
    cmpw r30, r5
    beq lbl_fn_804B1E48_00001650
    mr r3, r29
    li r6, 0xa
    bl fn_804B3EFC
    addi r3, r1, 0x10
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804B1E48_00001650:
    li r0, 0x2
    mr r4, r29
    lfs f0, lbl_80887308
    li r5, 0x0
    lfs f1, lbl_80887338
    mtctr r0
lbl_fn_804B1E48_00001668:
    lwz r0, 0xcc(r29)
    cmpw r5, r0
    beq lbl_fn_804B1E48_00001694
    lwz r3, 0x8c(r4)
    lfs f2, 0x100(r3)
    fcmpo cr0, f2, f1
    cror eq, gt, eq
    bne lbl_fn_804B1E48_00001694
    stfs f0, 0x104(r3)
    lwz r3, 0x8c(r4)
    stfs f1, 0x100(r3)
lbl_fn_804B1E48_00001694:
    lwz r0, 0xcc(r29)
    addi r5, r5, 0x1
    cmpw r5, r0
    beq lbl_fn_804B1E48_000016C4
    lwz r3, 0x90(r4)
    lfs f2, 0x100(r3)
    fcmpo cr0, f2, f1
    cror eq, gt, eq
    bne lbl_fn_804B1E48_000016C4
    stfs f0, 0x104(r3)
    lwz r3, 0x90(r4)
    stfs f1, 0x100(r3)
lbl_fn_804B1E48_000016C4:
    lwz r0, 0xcc(r29)
    addi r5, r5, 0x1
    cmpw r5, r0
    beq lbl_fn_804B1E48_000016F4
    lwz r3, 0x94(r4)
    lfs f2, 0x100(r3)
    fcmpo cr0, f2, f1
    cror eq, gt, eq
    bne lbl_fn_804B1E48_000016F4
    stfs f0, 0x104(r3)
    lwz r3, 0x94(r4)
    stfs f1, 0x100(r3)
lbl_fn_804B1E48_000016F4:
    lwz r0, 0xcc(r29)
    addi r5, r5, 0x1
    cmpw r5, r0
    beq lbl_fn_804B1E48_00001724
    lwz r3, 0x98(r4)
    lfs f2, 0x100(r3)
    fcmpo cr0, f2, f1
    cror eq, gt, eq
    bne lbl_fn_804B1E48_00001724
    stfs f0, 0x104(r3)
    lwz r3, 0x98(r4)
    stfs f1, 0x100(r3)
lbl_fn_804B1E48_00001724:
    lwz r0, 0xcc(r29)
    addi r5, r5, 0x1
    cmpw r5, r0
    beq lbl_fn_804B1E48_00001754
    lwz r3, 0x9c(r4)
    lfs f2, 0x100(r3)
    fcmpo cr0, f2, f1
    cror eq, gt, eq
    bne lbl_fn_804B1E48_00001754
    stfs f0, 0x104(r3)
    lwz r3, 0x9c(r4)
    stfs f1, 0x100(r3)
lbl_fn_804B1E48_00001754:
    addi r4, r4, 0x14
    addi r5, r5, 0x1
    bdnz lbl_fn_804B1E48_00001668
    lis r30, lbl_80757B7C@ha
    lwz r23, 0x80(r29)
    addi r30, r30, lbl_80757B7C@l
    addi r3, r30, 0x434
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r23
    addi r3, r1, 0x7c
    bl fn_801F4E8C
    lfs f4, 0x7c(r1)
    addi r4, r30, 0x444
    lfs f3, 0x80(r1)
    addi r5, r1, 0xa4
    lfs f2, 0x84(r1)
    lfs f1, 0x8c(r1)
    lfs f0, lbl_80887318
    stfs f4, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f2, 0xac(r1)
    stfs f1, 0xb4(r1)
    stfs f0, 0xb0(r1)
    lwz r3, 0xb4(r29)
    bl fn_801F4728
    lwz r4, 0xb4(r29)
    addi r3, r30, 0x44c
    addi r22, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887334
    mr r4, r3
    mr r3, r22
    bl fn_801FECE0
    addi r11, r1, 0x160
    bl _restgpr_22
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_804B274C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x3
    li r5, 0x3
    stw r0, 0x24(r1)
    li r6, 0x1
    li r7, 0x3
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0xe4
    stw r29, 0x14(r1)
    lwz r29, lbl_8087EF70
    bl fn_804A436C
    mr r3, r29
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B274C_00001868
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r31, 0x1
    b lbl_fn_804B274C_0000189C
lbl_fn_804B274C_00001868:
    mr r3, r29
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B274C_0000189C
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    li r31, 0x2
lbl_fn_804B274C_0000189C:
    cmpwi r31, 0x1
    bne lbl_fn_804B274C_000019AC
    lwz r3, lbl_8087F610
    li r31, 0xc
    bl fn_804EAA54
    cmpwi r3, 0x1
    bne lbl_fn_804B274C_000018BC
    li r31, 0xb
lbl_fn_804B274C_000018BC:
    lwz r0, 0xe4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804B274C_0000192C
    li r0, 0x3
    stw r0, 0xc4(r30)
    li r0, 0x0
    lwz r3, lbl_8087F610
    stw r0, 0x540(r3)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804B274C_0000191C
    addic. r29, r0, 0xc1
    beq lbl_fn_804B274C_0000191C
    lwz r3, lbl_8087F610
    bl fn_804EAA54
    stb r3, 0x0(r29)
    mr r4, r29
    li r5, 0x4
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    stb r0, 0x1(r29)
    lwz r3, lbl_8087F628
    addi r3, r3, 0xc1
    bl memcpy
lbl_fn_804B274C_0000191C:
    mr r3, r30
    mr r4, r31
    bl fn_804AF520
    b lbl_fn_804B274C_000019C0
lbl_fn_804B274C_0000192C:
    cmpwi r0, 0x1
    bne lbl_fn_804B274C_00001994
    li r0, 0x2
    stw r0, 0xc4(r30)
    lwz r3, lbl_8087F610
    stw r0, 0x540(r3)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804B274C_00001984
    addic. r29, r0, 0xc1
    beq lbl_fn_804B274C_00001984
    lwz r3, lbl_8087F610
    bl fn_804EAA54
    stb r3, 0x0(r29)
    mr r4, r29
    li r5, 0x4
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    stb r0, 0x1(r29)
    lwz r3, lbl_8087F628
    addi r3, r3, 0xc1
    bl memcpy
lbl_fn_804B274C_00001984:
    mr r3, r30
    mr r4, r31
    bl fn_804AF520
    b lbl_fn_804B274C_000019C0
lbl_fn_804B274C_00001994:
    cmpwi r0, 0x2
    bne lbl_fn_804B274C_000019C0
    mr r3, r30
    li r4, 0x9
    bl fn_804AF520
    b lbl_fn_804B274C_000019C0
lbl_fn_804B274C_000019AC:
    cmpwi r31, 0x2
    bne lbl_fn_804B274C_000019C0
    mr r3, r30
    li r4, 0x9
    bl fn_804AF520
lbl_fn_804B274C_000019C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B2934(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x154(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B2934_00001A20
    cmpwi r0, 0x1
    beq lbl_fn_804B2934_00001B00
    cmpwi r0, 0x2
    beq lbl_fn_804B2934_00001B8C
    cmpwi r0, 0x3
    beq lbl_fn_804B2934_00001C8C
    b lbl_fn_804B2934_00001CAC
lbl_fn_804B2934_00001A20:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B2934_00001CAC
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804B2934_00001CAC
    li r0, -0x1
    stw r0, 0xf4(r31)
    stw r0, 0xf8(r31)
    stw r0, 0xfc(r31)
    stw r0, 0x100(r31)
    stw r0, 0x104(r31)
    stw r0, 0x108(r31)
    stw r0, 0x10c(r31)
    stw r0, 0x110(r31)
    stw r0, 0x114(r31)
    stw r0, 0x118(r31)
    stw r0, 0x11c(r31)
    stw r0, 0x120(r31)
    stw r0, 0x124(r31)
    stw r0, 0x128(r31)
    stw r0, 0x12c(r31)
    stw r0, 0x130(r31)
    stw r0, 0x134(r31)
    stw r0, 0x138(r31)
    stw r0, 0x13c(r31)
    stw r0, 0x140(r31)
    stw r0, 0x144(r31)
    stw r0, 0x148(r31)
    stw r0, 0x14c(r31)
    lwz r0, lbl_8087F860
    cmpwi r0, 0x0
    bne lbl_fn_804B2934_00001AB0
    mr r3, r31
    bl fn_80502978
lbl_fn_804B2934_00001AB0:
    lwz r3, lbl_8087F628
    lwz r29, lbl_8087F860
    addi r30, r3, 0x5f0
    addi r0, r29, 0xfc
    cmplw r30, r0
    beq lbl_fn_804B2934_00001AE4
    mr r3, r30
    bl fn_80686A48
    mr r5, r3
    mr r4, r30
    addi r3, r29, 0xfc
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804B2934_00001AE4:
    lwz r3, lbl_8087F860
    bl fn_805053FC
    li r3, 0x0
    li r0, 0x3
    stw r3, 0xdc(r31)
    stw r0, 0x154(r31)
    b lbl_fn_804B2934_00001CAC
lbl_fn_804B2934_00001B00:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B2934_00001CAC
    bl fn_804AC79C
    cmpwi r3, 0x0
    beq lbl_fn_804B2934_00001B6C
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887318
    li r5, 0x1
    li r6, 0x0
    bl fn_804AC96C
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F588
    lwz r4, 0xe74(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B2934_00001B4C
    b lbl_fn_804B2934_00001B50
lbl_fn_804B2934_00001B4C:
    la r4, lbl_808813D0
lbl_fn_804B2934_00001B50:
    li r5, 0x0
    bl fn_804AD000
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    li r0, 0x2
    stw r0, 0x154(r31)
    b lbl_fn_804B2934_00001CAC
lbl_fn_804B2934_00001B6C:
    lwz r3, lbl_8087F588
    bl fn_804AC7EC
    cmpwi r3, 0x0
    beq lbl_fn_804B2934_00001CAC
    mr r3, r31
    li r4, 0x2
    bl fn_804AF520
    b lbl_fn_804B2934_00001CAC
lbl_fn_804B2934_00001B8C:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B2934_00001CAC
    bl fn_804AC79C
    cmpwi r3, 0x0
    beq lbl_fn_804B2934_00001C6C
    li r0, -0x1
    stw r0, 0xf4(r31)
    stw r0, 0xf8(r31)
    stw r0, 0xfc(r31)
    stw r0, 0x100(r31)
    stw r0, 0x104(r31)
    stw r0, 0x108(r31)
    stw r0, 0x10c(r31)
    stw r0, 0x110(r31)
    stw r0, 0x114(r31)
    stw r0, 0x118(r31)
    stw r0, 0x11c(r31)
    stw r0, 0x120(r31)
    stw r0, 0x124(r31)
    stw r0, 0x128(r31)
    stw r0, 0x12c(r31)
    stw r0, 0x130(r31)
    stw r0, 0x134(r31)
    stw r0, 0x138(r31)
    stw r0, 0x13c(r31)
    stw r0, 0x140(r31)
    stw r0, 0x144(r31)
    stw r0, 0x148(r31)
    stw r0, 0x14c(r31)
    lwz r0, lbl_8087F860
    cmpwi r0, 0x0
    bne lbl_fn_804B2934_00001C1C
    mr r3, r31
    bl fn_80502978
lbl_fn_804B2934_00001C1C:
    lwz r3, lbl_8087F628
    lwz r29, lbl_8087F860
    addi r30, r3, 0x5f0
    addi r0, r29, 0xfc
    cmplw r30, r0
    beq lbl_fn_804B2934_00001C50
    mr r3, r30
    bl fn_80686A48
    mr r5, r3
    mr r4, r30
    addi r3, r29, 0xfc
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804B2934_00001C50:
    lwz r3, lbl_8087F860
    bl fn_805053FC
    li r3, 0x0
    li r0, 0x3
    stw r3, 0xdc(r31)
    stw r0, 0x154(r31)
    b lbl_fn_804B2934_00001CAC
lbl_fn_804B2934_00001C6C:
    lwz r3, lbl_8087F588
    bl fn_804AC7EC
    cmpwi r3, 0x0
    beq lbl_fn_804B2934_00001CAC
    mr r3, r31
    li r4, 0x2
    bl fn_804AF520
    b lbl_fn_804B2934_00001CAC
lbl_fn_804B2934_00001C8C:
    lwz r4, lbl_8087F860
    lwz r0, 0x25ac(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804B2934_00001CAC
    li r0, 0x1
    stw r0, 0x154(r3)
    li r4, 0x2
    bl fn_804AF520
lbl_fn_804B2934_00001CAC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
