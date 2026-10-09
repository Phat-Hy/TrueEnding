#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D9E8(void);
extern void fn_8000D9F8(void);
extern void fn_8001047C(void);
extern void fn_80012C88(void);
extern void fn_80013410(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_8004BF64(void);
extern void fn_8008B964(void);
extern void fn_800A97C4(void);
extern void fn_800C16B4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB58C(void);
extern void fn_800CB5C8(void);
extern void fn_800F52F0(void);
extern void fn_800F7260(void);
extern void fn_800F7FF0(void);
extern void fn_800F8524(void);
extern void fn_80112958(void);
extern void fn_80112960(void);
extern void fn_80113CCC(void);
extern void fn_80114AA0(void);
extern void fn_801156BC(void);
extern void fn_801156C4(void);
extern void fn_80116BD4(void);
extern void fn_80117228(void);
extern void fn_8011F970(void);
extern void fn_80121F00(void);
extern void fn_801D80B4(void);
extern void fn_80217D9C(void);
extern void fn_80219544(void);
extern void fn_8023A664(void);
extern void fn_80244CA0(void);
extern void fn_802F0990(void);
extern void fn_80366DAC(void);
extern void fn_80366E08(void);
extern void fn_8036E624(void);
extern void fn_80370174(void);
extern void fn_8037529C(void);
extern void fn_8037F688(void);
extern void fn_80383728(void);
extern void fn_80392A04(void);
extern void fn_803CF734(void);
extern void fn_803CFC58(void);
extern void fn_80453DBC(void);
extern void fn_804741C0(void);
extern void fn_804786F8(void);
extern void fn_8047C7FC(void);
extern void fn_804AB79C(void);
extern void fn_804ABF20(void);
extern void fn_80512C94(void);
extern void fn_80513024(void);
extern void fn_805282AC(void);
extern void fn_8052AFF4(void);
extern void fn_8052BBF0(void);
extern void fn_8052DEA8(void);
extern void fn_8052DEBC(void);
extern void fn_8052DED0(void);
extern void fn_8052DED8(void);
extern void fn_8052DEF0(void);
extern void fn_8052E1A4(void);
extern void fn_8052E8D8(void);
extern void fn_8052E984(void);
extern void fn_8052EEC0(void);
extern void fn_8052F890(void);
extern void fn_8052FA48(void);
extern void fn_80530DB8(void);
extern void fn_8054A340(void);
extern void fn_805BDCC0(void);
extern void fn_805BF414(void);

/* External data declarations */
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E4A8;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F890;
extern u32 lbl_80887AB0;
extern u32 lbl_80887AB4;
extern u32 lbl_80887AD4;
extern u32 lbl_80887B14;
extern u32 lbl_80887B18;

/* Function declarations */
void fn_8052C0EC(void);
void fn_8052C0F4(void);
void fn_8052C10C(void);
void fn_8052C650(void);
void fn_8052C658(void);
void fn_8052C660(void);
void fn_8052C668(void);
void fn_8052C670(void);
void fn_8052C678(void);
void fn_8052C684(void);
void fn_8052C68C(void);
void fn_8052C6A8(void);
void fn_8052C6C4(void);
void fn_8052C6D0(void);
void fn_8052C960(void);
void fn_8052C994(void);
void fn_8052C99C(void);
void fn_8052C9C8(void);
void fn_8052CA70(void);
void fn_8052D3CC(void);
void fn_8052D3D4(void);
void fn_8052D420(void);
void fn_8052D46C(void);
void fn_8052DADC(void);

asm void fn_8052C0EC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8052C0F4(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beqlr
    li r4, 0x1
    b fn_8023A664
    blr
}

asm void fn_8052C10C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_24
    li r0, 0x1
    stw r0, 0x5c(r3)
    mr r31, r3
    mr r24, r4
    addi r3, r1, 0x8
    li r4, 0x1f
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r31, 0x1224
    bl fn_803CF734
    addi r3, r31, 0x1268
    bl fn_803CF734
    addi r3, r1, 0x10
    bl fn_8052AFF4
    li r0, 0x0
    stw r0, 0x10(r1)
    bl fn_8000D9E8
    lwz r4, 0x10(r1)
    bl fn_8054A340
    stw r3, 0x14(r1)
    addi r3, r31, 0x1224
    addi r4, r1, 0x10
    bl fn_8052C960
    addi r3, r31, 0x1268
    addi r4, r1, 0x10
    bl fn_8052C960
    bl fn_80121F00
    bl fn_8052C650
    bl fn_80217D9C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8052C10C_000002F4
    li r27, 0x1
    lis r29, 0x2
lbl_fn_8052C10C_000000C4:
    cmpwi r27, 0x0
    li r30, 0x0
    beq lbl_fn_8052C10C_00000104
    cmplwi r27, 0x1
    beq lbl_fn_8052C10C_00000118
    cmplwi r27, 0x2
    beq lbl_fn_8052C10C_00000158
    cmplwi r27, 0x3
    beq lbl_fn_8052C10C_0000016C
    cmplwi r27, 0x4
    beq lbl_fn_8052C10C_00000180
    cmplwi r27, 0x5
    beq lbl_fn_8052C10C_00000194
    cmplwi r27, 0x6
    beq lbl_fn_8052C10C_000001A8
    b lbl_fn_8052C10C_000001B8
lbl_fn_8052C10C_00000104:
    bl fn_80121F00
    li r4, 0x124
    bl fn_80370174
    mr r30, r3
    b lbl_fn_8052C10C_000001B8
lbl_fn_8052C10C_00000118:
    bl fn_80121F00
    li r4, 0x125
    bl fn_80370174
    mr r30, r3
    bl fn_80121F00
    bl fn_8052C650
    subi r0, r29, 0x5638
    cmpw r3, r0
    bgt lbl_fn_8052C10C_000001B8
    bl fn_80121F00
    li r4, 0x764
    bl fn_80370174
    cmpwi r3, 0x1
    bge lbl_fn_8052C10C_000001B8
    li r30, 0x1
    b lbl_fn_8052C10C_000001B8
lbl_fn_8052C10C_00000158:
    bl fn_80121F00
    li r4, 0x126
    bl fn_80370174
    mr r30, r3
    b lbl_fn_8052C10C_000001B8
lbl_fn_8052C10C_0000016C:
    bl fn_80121F00
    li r4, 0x127
    bl fn_80370174
    mr r30, r3
    b lbl_fn_8052C10C_000001B8
lbl_fn_8052C10C_00000180:
    bl fn_80121F00
    li r4, 0x128
    bl fn_80370174
    mr r30, r3
    b lbl_fn_8052C10C_000001B8
lbl_fn_8052C10C_00000194:
    bl fn_80121F00
    li r4, 0x12a
    bl fn_80370174
    mr r30, r3
    b lbl_fn_8052C10C_000001B8
lbl_fn_8052C10C_000001A8:
    bl fn_80121F00
    li r4, 0x129
    bl fn_80370174
    mr r30, r3
lbl_fn_8052C10C_000001B8:
    add r3, r28, r27
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8052C10C_000002E8
    cmpwi r30, 0x0
    bne lbl_fn_8052C10C_000002E8
    stw r27, 0x10(r1)
    bl fn_8000D9E8
    mr r4, r27
    bl fn_8011F970
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8052C10C_00000258
    lwz r3, 0x10(r1)
    bl fn_80219544
    mr r30, r3
    bl fn_8052C658
    bl fn_8052C994
    mr r25, r3
    b lbl_fn_8052C10C_0000024C
lbl_fn_8052C10C_00000208:
    mr r3, r25
    bl fn_8000D9F8
    cmpw r30, r3
    bne lbl_fn_8052C10C_00000240
    mr r3, r25
    bl fn_80244CA0
    cmpwi r3, 0x0
    beq lbl_fn_8052C10C_00000240
    mr r3, r25
    bl fn_803CFC58
    cmpwi r3, 0x0
    bne lbl_fn_8052C10C_00000240
    mr r26, r25
    b lbl_fn_8052C10C_00000298
lbl_fn_8052C10C_00000240:
    mr r3, r25
    bl fn_8052C660
    mr r25, r3
lbl_fn_8052C10C_0000024C:
    cmpwi r25, 0x0
    bne lbl_fn_8052C10C_00000208
    b lbl_fn_8052C10C_00000298
lbl_fn_8052C10C_00000258:
    bl fn_800F52F0
    mr r30, r3
    bl fn_801D80B4
    lwz r4, 0x10(r1)
    bl fn_805282AC
    mr r4, r30
    bl fn_8052C668
    bl fn_801D80B4
    lwz r4, 0x10(r1)
    bl fn_805282AC
    li r4, 0x0
    bl fn_8052C670
    bl fn_801D80B4
    lwz r4, 0x10(r1)
    bl fn_805282AC
    bl fn_8052C678
lbl_fn_8052C10C_00000298:
    cmpwi r26, 0x0
    beq lbl_fn_8052C10C_000002C4
    mr r3, r26
    bl fn_80244CA0
    cmpwi r3, 0x0
    beq lbl_fn_8052C10C_000002C0
    mr r3, r26
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_8052C10C_000002C4
lbl_fn_8052C10C_000002C0:
    li r26, 0x0
lbl_fn_8052C10C_000002C4:
    stw r26, 0x14(r1)
    addi r3, r31, 0x1224
    addi r4, r1, 0x10
    bl fn_8052C960
    cmpwi r26, 0x0
    beq lbl_fn_8052C10C_000002E8
    addi r3, r31, 0x1268
    addi r4, r1, 0x10
    bl fn_8052C960
lbl_fn_8052C10C_000002E8:
    addi r27, r27, 0x1
    cmplwi r27, 0x7
    blt lbl_fn_8052C10C_000000C4
lbl_fn_8052C10C_000002F4:
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_8052C10C_0000031C
    bl fn_80121F00
    li r4, -0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0xa
    bl fn_8037529C
lbl_fn_8052C10C_0000031C:
    mr r4, r24
    addi r3, r31, 0x48
    bl fn_8052C99C
    lwz r3, 0x11d0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11dc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11ec(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e8(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x1308(r31)
    addi r3, r31, 0xb1c
    bl fn_8052E1A4
    addi r3, r31, 0x468
    bl fn_8052FA48
    lwz r0, 0x136c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052C10C_000003F4
    addi r3, r31, 0x1370
    b lbl_fn_8052C10C_00000408
lbl_fn_8052C10C_000003F4:
    lfs f1, lbl_80887AB0
    addi r3, r1, 0x48
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
lbl_fn_8052C10C_00000408:
    mr r4, r3
    addi r3, r1, 0x54
    bl fn_8001047C
    lwz r3, 0x11d4(r31)
    bl fn_8052C684
    li r4, 0x0
    bl fn_805BDCC0
    mr r25, r3
    lfs f1, lbl_80887AB0
    mr r4, r25
    addi r3, r1, 0x3c
    bl fn_8052C68C
    addi r3, r31, 0x11fc
    addi r4, r1, 0x3c
    bl fn_8000D124
    lfs f1, lbl_80887AB0
    mr r4, r25
    addi r3, r1, 0x30
    bl fn_8052C6A8
    addi r3, r31, 0x1208
    addi r4, r1, 0x30
    bl fn_8000D124
    addi r3, r1, 0x24
    addi r4, r31, 0x11fc
    addi r5, r1, 0x54
    bl fn_80013410
    addi r3, r31, 0x6c
    addi r4, r1, 0x24
    bl fn_80114AA0
    addi r3, r1, 0x18
    addi r4, r31, 0x1208
    addi r5, r1, 0x54
    bl fn_80013410
    addi r3, r31, 0x6c
    addi r4, r1, 0x18
    bl fn_80112960
    lfs f1, 0x1214(r31)
    addi r3, r31, 0x6c
    bl fn_8037F688
    addi r3, r31, 0x6c
    bl fn_8004B378
    bl fn_8008B964
    addi r4, r31, 0x6c
    bl fn_80116BD4
    addi r3, r31, 0x260
    addi r4, r31, 0x6c
    bl fn_80392A04
    bl fn_8008B964
    bl fn_8052C6C4
    bl fn_8008B964
    addi r4, r31, 0x260
    bl fn_8052C6D0
    li r0, 0x1
    stw r0, 0x1310(r31)
    addi r3, r1, 0x60
    addi r4, r31, 0x1310
    bl fn_80366E08
    mr r30, r3
    bl fn_802F0990
    mr r4, r30
    bl fn_80366DAC
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8052C10C_00000514
    mr r3, r31
    bl fn_8052DEF0
    b lbl_fn_8052C10C_00000520
lbl_fn_8052C10C_00000514:
    lwz r3, 0x11ec(r31)
    lwz r4, 0x464(r31)
    bl fn_80512C94
lbl_fn_8052C10C_00000520:
    lwz r3, 0x11ec(r31)
    lwz r4, 0x1354(r31)
    lwz r5, 0x464(r31)
    bl fn_80513024
    bl fn_801156C4
    bl fn_8052C0EC
    stw r3, 0x1360(r31)
    mr r3, r31
    bl fn_80530DB8
    bl fn_804ABF20
    bl fn_800A97C4
    addi r11, r1, 0xb0
    bl _restgpr_24
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8052C650(void)
{
    nofralloc
    lwz r3, 0x10d0(r3)
    blr
}

asm void fn_8052C658(void)
{
    nofralloc
    lwz r3, lbl_8087F890
    blr
}

asm void fn_8052C660(void)
{
    nofralloc
    lwz r3, 0x1424(r3)
    blr
}

asm void fn_8052C668(void)
{
    nofralloc
    li r5, 0x240
    b memcpy
}

asm void fn_8052C670(void)
{
    nofralloc
    stw r4, 0x2f0(r3)
    blr
}

asm void fn_8052C678(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x380(r3)
    blr
}

asm void fn_8052C684(void)
{
    nofralloc
    addi r3, r3, 0x5c
    b fn_804786F8
}

asm void fn_8052C68C(void)
{
    nofralloc
    mr r0, r3
    mr r3, r4
    mr r4, r0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    b fn_805BF414
}

asm void fn_8052C6A8(void)
{
    nofralloc
    mr r0, r3
    mr r3, r4
    mr r4, r0
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    b fn_805BF414
}

asm void fn_8052C6C4(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0x554(r3)
    blr
}

asm void fn_8052C6D0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stfd f28, 0x10(r1)
    psq_st f28, 0x18(r1), 0, 0
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x560(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    stfs f2, 0x568(r3)
    lfs f2, 0x1c(r4)
    psq_st f1, 0x56c(r3), 0, 0
    psq_l f1, 0x20(r4), 0, 0
    stfs f2, 0x574(r3)
    lfs f2, 0x28(r4)
    psq_st f1, 0x578(r3), 0, 0
    psq_l f1, 0x2c(r4), 0, 0
    stfs f2, 0x580(r3)
    lfs f2, 0x34(r4)
    psq_st f1, 0x584(r3), 0, 0
    psq_l f1, 0x58(r4), 0, 0
    stfs f2, 0x58c(r3)
    psq_l f2, 0x60(r4), 0, 0
    psq_l f3, 0x68(r4), 0, 0
    psq_l f4, 0x70(r4), 0, 0
    psq_l f5, 0x78(r4), 0, 0
    psq_l f6, 0x80(r4), 0, 0
    psq_st f1, 0x5b0(r3), 0, 0
    lwz r5, 0x0(r4)
    psq_st f2, 0x5b8(r3), 0, 0
    lwz r0, 0x4(r4)
    psq_st f3, 0x5c0(r3), 0, 0
    lfs f28, 0x38(r4)
    psq_st f4, 0x5c8(r3), 0, 0
    lfs f29, 0x3c(r4)
    psq_st f5, 0x5d0(r3), 0, 0
    lfs f30, 0x40(r4)
    psq_st f6, 0x5d8(r3), 0, 0
    lfs f31, 0x44(r4)
    lfs f13, 0x48(r4)
    lfs f12, 0x4c(r4)
    lfs f11, 0x50(r4)
    lfs f10, 0x54(r4)
    psq_l f1, 0x88(r4), 0, 0
    psq_l f2, 0x90(r4), 0, 0
    psq_l f3, 0x98(r4), 0, 0
    psq_l f4, 0xa0(r4), 0, 0
    psq_l f5, 0xa8(r4), 0, 0
    psq_l f6, 0xb0(r4), 0, 0
    psq_l f7, 0xb8(r4), 0, 0
    psq_l f8, 0xc0(r4), 0, 0
    lfs f9, 0xc8(r4)
    lfs f0, 0xcc(r4)
    stw r5, 0x558(r3)
    stw r0, 0x55c(r3)
    stfs f28, 0x590(r3)
    stfs f29, 0x594(r3)
    stfs f30, 0x598(r3)
    stfs f31, 0x59c(r3)
    stfs f13, 0x5a0(r3)
    stfs f12, 0x5a4(r3)
    stfs f11, 0x5a8(r3)
    stfs f10, 0x5ac(r3)
    psq_st f1, 0x5e0(r3), 0, 0
    psq_st f2, 0x5e8(r3), 0, 0
    psq_st f3, 0x5f0(r3), 0, 0
    psq_st f4, 0x5f8(r3), 0, 0
    psq_st f5, 0x600(r3), 0, 0
    psq_st f6, 0x608(r3), 0, 0
    psq_st f7, 0x610(r3), 0, 0
    psq_st f8, 0x618(r3), 0, 0
    stfs f9, 0x620(r3)
    stfs f0, 0x624(r3)
    psq_l f1, 0xd0(r4), 0, 0
    addi r8, r3, 0x658
    psq_l f2, 0xd8(r4), 0, 0
    addi r7, r4, 0x17c
    psq_st f1, 0x628(r3), 0, 0
    addi r5, r8, 0x94
    psq_l f1, 0x100(r4), 0, 0
    addi r6, r4, 0x194
    psq_st f2, 0x630(r3), 0, 0
    addi r0, r8, 0xf4
    psq_l f2, 0x108(r4), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x13c(r4), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    lfs f2, 0x144(r4)
    psq_st f1, 0x3c(r8), 0, 0
    psq_l f1, 0x14c(r4), 0, 0
    stfs f2, 0x69c(r3)
    lfs f2, 0x154(r4)
    psq_st f1, 0x4c(r8), 0, 0
    psq_l f1, 0x15c(r4), 0, 0
    stfs f2, 0x6ac(r3)
    lfs f2, 0x164(r4)
    psq_st f1, 0x5c(r8), 0, 0
    psq_l f1, 0x16c(r4), 0, 0
    stfs f2, 0x6bc(r3)
    lfs f2, 0x174(r4)
    psq_st f1, 0x6c(r8), 0, 0
    psq_l f3, 0xe0(r4), 0, 0
    stfs f2, 0x6cc(r3)
    psq_l f4, 0xe8(r4), 0, 0
    psq_l f5, 0xf0(r4), 0, 0
    psq_l f6, 0xf8(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x184(r4)
    psq_st f3, 0x638(r3), 0, 0
    psq_l f3, 0x110(r4), 0, 0
    psq_st f4, 0x640(r3), 0, 0
    psq_l f4, 0x118(r4), 0, 0
    psq_st f5, 0x648(r3), 0, 0
    psq_l f5, 0x120(r4), 0, 0
    psq_st f6, 0x650(r3), 0, 0
    psq_l f6, 0x128(r4), 0, 0
    psq_st f1, 0x7c(r8), 0, 0
    lwz r3, 0x130(r4)
    stfs f2, 0x84(r8)
    lfs f13, 0x134(r4)
    lfs f12, 0x138(r4)
    lfs f11, 0x148(r4)
    lfs f10, 0x158(r4)
    lfs f9, 0x168(r4)
    lfs f0, 0x178(r4)
    psq_l f1, 0xc(r7), 0, 0
    lfs f2, 0x190(r4)
    psq_st f3, 0x10(r8), 0, 0
    psq_st f4, 0x18(r8), 0, 0
    psq_st f5, 0x20(r8), 0, 0
    psq_st f6, 0x28(r8), 0, 0
    stw r3, 0x30(r8)
    stfs f13, 0x34(r8)
    stfs f12, 0x38(r8)
    stfs f11, 0x48(r8)
    stfs f10, 0x58(r8)
    stfs f9, 0x68(r8)
    stfs f0, 0x78(r8)
    psq_st f1, 0x88(r8), 0, 0
    stfs f2, 0x90(r8)
lbl_fn_8052C6D0_00000824:
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r6)
    addi r6, r6, 0x10
    stfs f0, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_8052C6D0_00000824
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    psq_l f28, 0x18(r1), 0, 0
    lfd f28, 0x10(r1)
    addi r1, r1, 0x50
    blr
}

asm void fn_8052C960(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_8052C960_00000898
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
lbl_fn_8052C960_00000898:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_8052C994(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_8052C99C(void)
{
    nofralloc
    lwz r8, 0x0(r4)
    lwz r7, 0x4(r4)
    lwz r6, 0x8(r4)
    lwz r5, 0xc(r4)
    lwz r0, 0x10(r4)
    stw r8, 0x0(r3)
    stw r7, 0x4(r3)
    stw r6, 0x8(r3)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    blr
}

asm void fn_8052C9C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x133c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8052C9C8_00000934
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8052C9C8_00000910
    li r0, 0x12
    stw r0, 0x563c(r4)
lbl_fn_8052C9C8_00000910:
    li r0, 0x1
    stw r0, 0x133c(r3)
    addi r3, r1, 0x8
    li r4, 0x20
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8052C9C8_00000968
lbl_fn_8052C9C8_00000934:
    bl fn_8052CA70
    li r0, 0x0
    stw r0, 0x133c(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8052C9C8_00000968
    lis r4, 0x100
    li r6, 0x0
    subi r5, r4, 0x1
    li r7, 0x0
    li r4, -0x1
    li r8, 0xa
    bl fn_8037529C
lbl_fn_8052C9C8_00000968:
    li r0, 0x0
    stw r0, 0x5c(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8052CA70(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8052CA70_000009B8
    mr r3, r0
    bl fn_8036E624
lbl_fn_8052CA70_000009B8:
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    mr r31, r3
    addi r4, r30, 0xd74
    bl fn_804741C0
    lwz r0, 0xd7c(r30)
    addi r3, r31, 0x58
    stw r0, 0x8(r31)
    addi r4, r30, 0xdcc
    lwz r0, 0xd84(r30)
    lwz r5, 0xd80(r30)
    stw r5, 0xc(r31)
    stw r0, 0x10(r31)
    lwz r0, 0xd8c(r30)
    lwz r5, 0xd88(r30)
    stw r5, 0x14(r31)
    stw r0, 0x18(r31)
    lwz r0, 0xd94(r30)
    lwz r5, 0xd90(r30)
    stw r5, 0x1c(r31)
    stw r0, 0x20(r31)
    lwz r0, 0xd9c(r30)
    lwz r5, 0xd98(r30)
    stw r5, 0x24(r31)
    stw r0, 0x28(r31)
    lwz r0, 0xda4(r30)
    lwz r5, 0xda0(r30)
    stw r5, 0x2c(r31)
    stw r0, 0x30(r31)
    lwz r0, 0xdac(r30)
    lwz r5, 0xda8(r30)
    stw r5, 0x34(r31)
    stw r0, 0x38(r31)
    lwz r0, 0xdb4(r30)
    lwz r5, 0xdb0(r30)
    stw r5, 0x3c(r31)
    stw r0, 0x40(r31)
    lwz r0, 0xdbc(r30)
    lwz r5, 0xdb8(r30)
    stw r5, 0x44(r31)
    stw r0, 0x48(r31)
    lwz r0, 0xdc4(r30)
    lwz r5, 0xdc0(r30)
    stw r5, 0x4c(r31)
    stw r0, 0x50(r31)
    lwz r0, 0xdc8(r30)
    stw r0, 0x54(r31)
    bl fn_8052E984
    addi r3, r31, 0x64
    addi r4, r30, 0xdd8
    bl fn_8052EEC0
    lwz r0, 0xde4(r30)
    addi r3, r31, 0x78
    stw r0, 0x70(r31)
    addi r4, r30, 0xdec
    lwz r0, 0xde8(r30)
    stw r0, 0x74(r31)
    bl fn_8052F890
    lwz r0, 0xe3c(r30)
    addi r3, r31, 0xd0
    stw r0, 0xc8(r31)
    addi r4, r30, 0xe44
    lwz r0, 0xe40(r30)
    stw r0, 0xcc(r31)
    bl fn_8052F890
    lwz r0, 0xe94(r30)
    addi r6, r30, 0xe98
    stw r0, 0x120(r31)
    addi r5, r30, 0xec8
    addi r3, r31, 0x164
    addi r4, r30, 0xed8
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x124(r31), 0, 0
    psq_st f2, 0x12c(r31), 0, 0
    psq_st f3, 0x134(r31), 0, 0
    psq_st f4, 0x13c(r31), 0, 0
    psq_st f5, 0x144(r31), 0, 0
    psq_st f6, 0x14c(r31), 0, 0
    lfs f2, 0xed0(r30)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x154(r31), 0, 0
    stfs f2, 0x15c(r31)
    lfs f0, 0xed4(r30)
    stfs f0, 0x160(r31)
    bl fn_8052E8D8
    lwz r0, 0xf08(r30)
    addi r3, r31, 0x198
    stw r0, 0x194(r31)
    addi r4, r30, 0xf0c
    bl fn_8052BBF0
    lwz r0, 0xf54(r30)
    addi r3, r31, 0x1f8
    stw r0, 0x1e0(r31)
    addi r4, r30, 0xf6c
    lwz r0, 0xf5c(r30)
    lwz r5, 0xf58(r30)
    stw r5, 0x1e4(r31)
    stw r0, 0x1e8(r31)
    lwz r0, 0xf64(r30)
    lwz r5, 0xf60(r30)
    stw r5, 0x1ec(r31)
    stw r0, 0x1f0(r31)
    lwz r0, 0xf68(r30)
    stw r0, 0x1f4(r31)
    bl fn_8047C7FC
    lwz r0, 0xfa8(r30)
    addi r6, r30, 0xfc8
    stw r0, 0x234(r31)
    addi r3, r31, 0x264
    addi r4, r30, 0xfd8
    lwz r0, 0xfac(r30)
    stw r0, 0x238(r31)
    lwz r0, 0xfb0(r30)
    stw r0, 0x23c(r31)
    lfs f0, 0xfb4(r30)
    stfs f0, 0x240(r31)
    lwz r0, 0xfbc(r30)
    lwz r5, 0xfb8(r30)
    stw r5, 0x244(r31)
    stw r0, 0x248(r31)
    lwz r0, 0xfc4(r30)
    lwz r5, 0xfc0(r30)
    stw r5, 0x24c(r31)
    stw r0, 0x250(r31)
    lfs f2, 0xfd0(r30)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x254(r31), 0, 0
    stfs f2, 0x25c(r31)
    lwz r0, 0xfd4(r30)
    stw r0, 0x260(r31)
    bl fn_80453DBC
    lwz r9, lbl_8087EFB4
    addi r8, r30, 0xb24
    lwz r0, 0xb1c(r30)
    addi r7, r30, 0xb30
    stw r0, 0x104(r9)
    addi r6, r30, 0xb3c
    addi r5, r30, 0xb48
    addi r4, r30, 0xb74
    lwz r0, 0xb20(r30)
    addi r3, r30, 0xba4
    stw r0, 0x108(r9)
    lfs f2, 0xb2c(r30)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x10c(r9), 0, 0
    stfs f2, 0x114(r9)
    lfs f2, 0xb38(r30)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x118(r9), 0, 0
    stfs f2, 0x120(r9)
    lfs f2, 0xb44(r30)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x124(r9), 0, 0
    stfs f2, 0x12c(r9)
    lfs f2, 0xb50(r30)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x130(r9), 0, 0
    stfs f2, 0x138(r9)
    lfs f0, 0xb54(r30)
    stfs f0, 0x13c(r9)
    lfs f0, 0xb58(r30)
    stfs f0, 0x140(r9)
    lfs f0, 0xb5c(r30)
    stfs f0, 0x144(r9)
    lfs f0, 0xb60(r30)
    stfs f0, 0x148(r9)
    lfs f0, 0xb64(r30)
    stfs f0, 0x14c(r9)
    lfs f0, 0xb68(r30)
    stfs f0, 0x150(r9)
    lfs f0, 0xb6c(r30)
    stfs f0, 0x154(r9)
    lfs f0, 0xb70(r30)
    stfs f0, 0x158(r9)
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x15c(r9), 0, 0
    psq_st f2, 0x164(r9), 0, 0
    psq_st f3, 0x16c(r9), 0, 0
    psq_st f4, 0x174(r9), 0, 0
    psq_st f5, 0x17c(r9), 0, 0
    psq_st f6, 0x184(r9), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f7, 0x30(r3), 0, 0
    psq_l f8, 0x38(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x18c(r9), 0, 0
    psq_st f2, 0x194(r9), 0, 0
    psq_st f3, 0x19c(r9), 0, 0
    psq_st f4, 0x1a4(r9), 0, 0
    psq_st f5, 0x1ac(r9), 0, 0
    psq_st f6, 0x1b4(r9), 0, 0
    psq_st f7, 0x1bc(r9), 0, 0
    psq_st f8, 0x1c4(r9), 0, 0
    lfs f0, 0xbe4(r30)
    addi r7, r9, 0x204
    stfs f0, 0x1cc(r9)
    addi r6, r30, 0xc1c
    addi r3, r30, 0xbec
    addi r4, r7, 0x94
    lfs f0, 0xbe8(r30)
    addi r5, r6, 0x94
    stfs f0, 0x1d0(r9)
    addi r0, r7, 0xf4
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1d4(r9), 0, 0
    psq_st f2, 0x1dc(r9), 0, 0
    psq_st f3, 0x1e4(r9), 0, 0
    psq_st f4, 0x1ec(r9), 0, 0
    psq_st f5, 0x1f4(r9), 0, 0
    psq_st f6, 0x1fc(r9), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_st f3, 0x10(r7), 0, 0
    psq_st f4, 0x18(r7), 0, 0
    psq_st f5, 0x20(r7), 0, 0
    psq_st f6, 0x28(r7), 0, 0
    lwz r3, 0xc4c(r30)
    stw r3, 0x234(r9)
    lfs f0, 0xc50(r30)
    stfs f0, 0x238(r9)
    lfs f0, 0xc54(r30)
    stfs f0, 0x23c(r9)
    lfs f2, 0xc60(r30)
    psq_l f1, 0x3c(r6), 0, 0
    psq_st f1, 0x3c(r7), 0, 0
    stfs f2, 0x248(r9)
    lfs f0, 0xc64(r30)
    stfs f0, 0x24c(r9)
    lfs f2, 0xc70(r30)
    psq_l f1, 0x4c(r6), 0, 0
    psq_st f1, 0x4c(r7), 0, 0
    stfs f2, 0x258(r9)
    lfs f0, 0xc74(r30)
    stfs f0, 0x25c(r9)
    lfs f2, 0xc80(r30)
    psq_l f1, 0x5c(r6), 0, 0
    psq_st f1, 0x5c(r7), 0, 0
    stfs f2, 0x268(r9)
    lfs f0, 0xc84(r30)
    stfs f0, 0x26c(r9)
    lfs f2, 0xc90(r30)
    psq_l f1, 0x6c(r6), 0, 0
    psq_st f1, 0x6c(r7), 0, 0
    stfs f2, 0x278(r9)
    lfs f0, 0xc94(r30)
    stfs f0, 0x27c(r9)
    lfs f2, 0xca0(r30)
    psq_l f1, 0x7c(r6), 0, 0
    psq_st f1, 0x7c(r7), 0, 0
    stfs f2, 0x288(r9)
    lfs f2, 0xcac(r30)
    psq_l f1, 0x88(r6), 0, 0
    psq_st f1, 0x88(r7), 0, 0
    stfs f2, 0x294(r9)
lbl_fn_8052CA70_00000E14:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_8052CA70_00000E14
    lwz r3, lbl_8087EFA8
    lfs f0, 0xd54(r30)
    stfs f0, 0x3c(r3)
    lfs f0, 0xd58(r30)
    stfs f0, 0x40(r3)
    lfs f0, 0xd5c(r30)
    stfs f0, 0x44(r3)
    lfs f0, 0xd60(r30)
    stfs f0, 0x48(r3)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1028(r30)
    stw r0, 0xd4(r3)
    lwz r0, 0x102c(r30)
    stw r0, 0xd8(r3)
    lwz r0, 0x1030(r30)
    stw r0, 0xdc(r3)
    lwz r0, 0x1034(r30)
    stw r0, 0xe0(r3)
    lfs f0, 0x1038(r30)
    stfs f0, 0xe4(r3)
    lfs f0, 0x103c(r30)
    stfs f0, 0xe8(r3)
    lfs f0, 0x1040(r30)
    stfs f0, 0xec(r3)
    lfs f0, 0x1044(r30)
    stfs f0, 0xf0(r3)
    lwz r0, 0x1048(r30)
    stw r0, 0xf4(r3)
    lwz r0, 0x104c(r30)
    stw r0, 0xf8(r3)
    lfs f0, 0x1050(r30)
    stfs f0, 0xfc(r3)
    lfs f0, 0x1054(r30)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1058(r30)
    stw r0, 0x54(r3)
    lwz r0, 0x105c(r30)
    stw r0, 0x58(r3)
    lwz r0, 0x1060(r30)
    stw r0, 0x5c(r3)
    lwz r0, 0x1064(r30)
    stw r0, 0x60(r3)
    lwz r0, 0x1068(r30)
    stw r0, 0x64(r3)
    lfs f0, 0x106c(r30)
    stfs f0, 0x68(r3)
    lfs f0, 0x1070(r30)
    stfs f0, 0x6c(r3)
    lfs f0, 0x1074(r30)
    stfs f0, 0x70(r3)
    lfs f0, 0x1078(r30)
    stfs f0, 0x74(r3)
    lwz r0, 0x1080(r30)
    lwz r4, 0x107c(r30)
    stw r4, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x1088(r30)
    lwz r4, 0x1084(r30)
    stw r4, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x108c(r30)
    stw r0, 0x88(r3)
    lwz r0, 0x1094(r30)
    lwz r4, 0x1090(r30)
    stw r4, 0x8c(r3)
    stw r0, 0x90(r3)
    lwz r0, 0x109c(r30)
    lwz r4, 0x1098(r30)
    stw r4, 0x94(r3)
    stw r0, 0x98(r3)
    lwz r0, 0x10a4(r30)
    lwz r4, 0x10a0(r30)
    stw r4, 0x9c(r3)
    stw r0, 0xa0(r3)
    lwz r0, 0x10ac(r30)
    lwz r4, 0x10a8(r30)
    stw r4, 0xa4(r3)
    stw r0, 0xa8(r3)
    lwz r0, 0x10b4(r30)
    lwz r4, 0x10b0(r30)
    stw r4, 0xac(r3)
    stw r0, 0xb0(r3)
    lwz r0, 0x10bc(r30)
    lwz r4, 0x10b8(r30)
    stw r4, 0xb4(r3)
    stw r0, 0xb8(r3)
    lwz r0, 0x10c4(r30)
    lwz r4, 0x10c0(r30)
    stw r4, 0xbc(r3)
    stw r0, 0xc0(r3)
    lwz r0, 0x10c8(r30)
    stw r0, 0xc4(r3)
    lwz r0, 0x10d0(r30)
    addi r8, r30, 0x118c
    lwz r4, 0x10cc(r30)
    addi r7, r30, 0x1124
    stw r4, 0xc8(r3)
    addi r6, r30, 0x1134
    addi r5, r30, 0x1144
    addi r4, r30, 0x1154
    stw r0, 0xcc(r3)
    lwz r0, 0x10d4(r30)
    stw r0, 0xd0(r3)
    lwz r9, lbl_8087EFA8
    lwz r0, 0x1170(r30)
    stw r0, 0x104(r9)
    lwz r0, 0x1174(r30)
    stw r0, 0x108(r9)
    lfs f0, 0x1178(r30)
    stfs f0, 0x10c(r9)
    lwz r0, 0x1180(r30)
    lwz r3, 0x117c(r30)
    stw r3, 0x110(r9)
    stw r0, 0x114(r9)
    lwz r0, 0x1188(r30)
    lwz r3, 0x1184(r30)
    stw r3, 0x118(r9)
    stw r0, 0x11c(r9)
    lfs f2, 0x1194(r30)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x120(r9), 0, 0
    stfs f2, 0x128(r9)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1120(r30)
    stw r0, 0x324(r3)
    psq_l f2, 0x8(r7), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x328(r3), 0, 0
    psq_st f2, 0x330(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    psq_st f2, 0x340(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x348(r3), 0, 0
    psq_st f2, 0x350(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x358(r3), 0, 0
    psq_st f2, 0x360(r3), 0, 0
    lwz r0, 0x1164(r30)
    stw r0, 0x368(r3)
    lwz r0, 0x1168(r30)
    stw r0, 0x36c(r3)
    lfs f0, 0x116c(r30)
    stfs f0, 0x370(r3)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x1198(r30)
    stw r0, 0x3dc(r4)
    lwz r0, 0x119c(r30)
    stw r0, 0x3e0(r4)
    lfs f0, 0x11a0(r30)
    stfs f0, 0x3e4(r4)
    lwz r0, 0x11a8(r30)
    lwz r3, 0x11a4(r30)
    stw r3, 0x3e8(r4)
    stw r0, 0x3ec(r4)
    lwz r0, 0x11b0(r30)
    lwz r3, 0x11ac(r30)
    stw r3, 0x3f0(r4)
    stw r0, 0x3f4(r4)
    lwz r0, 0x11b8(r30)
    lwz r3, 0x11b4(r30)
    stw r3, 0x3f8(r4)
    stw r0, 0x3fc(r4)
    lwz r0, 0x11c0(r30)
    lwz r3, 0x11bc(r30)
    stw r3, 0x400(r4)
    stw r0, 0x404(r4)
    lfs f0, 0x11c4(r30)
    stfs f0, 0x408(r4)
    lfs f0, 0x11c8(r30)
    stfs f0, 0x40c(r4)
    lwz r3, 0x11d0(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11d8(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11dc(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e0(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11ec(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x11e8(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    li r8, 0x0
    stw r8, 0x1310(r30)
    lwz r7, 0x1314(r30)
    lfs f11, 0x1318(r30)
    lfs f10, 0x131c(r30)
    lfs f9, 0x1320(r30)
    lfs f0, 0x1324(r30)
    lfs f31, 0x1328(r30)
    lfs f13, 0x132c(r30)
    lfs f12, 0x1330(r30)
    lwz r4, lbl_8087EFA8
    stfs f11, 0x10(r1)
    stw r8, 0x374(r4)
    lwz r0, 0x10(r1)
    stw r7, 0x378(r4)
    stfs f10, 0x14(r1)
    stw r0, 0x37c(r4)
    lwz r3, 0x14(r1)
    stfs f9, 0x18(r1)
    stw r3, 0x380(r4)
    lwz r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stw r0, 0x384(r4)
    lwz r0, 0x1c(r1)
    stw r0, 0x388(r4)
    stfs f31, 0x38c(r4)
    stfs f13, 0x390(r4)
    stfs f12, 0x394(r4)
    lwz r3, lbl_8087EFA8
    stw r8, 0x8(r1)
    lwz r6, 0x244(r3)
    lwz r5, 0x248(r3)
    lfs f11, 0x24c(r3)
    lfs f10, 0x250(r3)
    lwz r4, 0x254(r3)
    lwz r0, 0x258(r3)
    lfs f9, 0x25c(r3)
    lfs f0, 0x260(r3)
    stw r7, 0xc(r1)
    stw r8, 0x240(r3)
    stw r6, 0x244(r3)
    stw r5, 0x248(r3)
    stfs f11, 0x24c(r3)
    stfs f10, 0x250(r3)
    stw r4, 0x254(r3)
    stw r0, 0x258(r3)
    stfs f9, 0x25c(r3)
    stfs f0, 0x260(r3)
    lwz r3, lbl_8087EFB4
    stfs f31, 0x20(r1)
    stw r8, 0x554(r3)
    stfs f13, 0x24(r1)
    lwz r3, lbl_8087EF8C
    stfs f12, 0x28(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stfs f11, 0x38(r1)
    stfs f10, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f0, 0x4c(r1)
    stw r8, 0x2c(r1)
    bl fn_800A97C4
    addi r3, r30, 0x1340
    bl fn_800CB58C
    cmpwi r3, 0x0
    beq lbl_fn_8052CA70_000012B8
    addi r3, r30, 0x1340
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_8052CA70_000012B8:
    li r0, 0x0
    stw r0, 0x5c(r30)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8052D3CC(void)
{
    nofralloc
    addi r3, r3, 0x240
    blr
}

asm void fn_8052D3D4(void)
{
    nofralloc
    lwz r8, 0x0(r4)
    lwz r7, 0x4(r4)
    lwz r6, 0x8(r4)
    lfs f3, 0xc(r4)
    lfs f2, 0x10(r4)
    lwz r5, 0x14(r4)
    lwz r0, 0x18(r4)
    lfs f1, 0x1c(r4)
    lfs f0, 0x20(r4)
    stw r8, 0x240(r3)
    stw r7, 0x244(r3)
    stw r6, 0x248(r3)
    stfs f3, 0x24c(r3)
    stfs f2, 0x250(r3)
    stw r5, 0x254(r3)
    stw r0, 0x258(r3)
    stfs f1, 0x25c(r3)
    stfs f0, 0x260(r3)
    blr
}

asm void fn_8052D420(void)
{
    nofralloc
    lwz r8, 0x0(r4)
    lwz r7, 0x4(r4)
    lwz r6, 0x8(r4)
    lfs f3, 0xc(r4)
    lfs f2, 0x10(r4)
    lwz r5, 0x14(r4)
    lwz r0, 0x18(r4)
    lfs f1, 0x1c(r4)
    lfs f0, 0x20(r4)
    stw r8, 0x0(r3)
    stw r7, 0x4(r3)
    stw r6, 0x8(r3)
    stfs f3, 0xc(r3)
    stfs f2, 0x10(r3)
    stw r5, 0x14(r3)
    stw r0, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f0, 0x20(r3)
    blr
}

asm void fn_8052D46C(void)
{
    nofralloc
    stwu r1, -0x3f0(r1)
    mflr r0
    stw r0, 0x3f4(r1)
    stw r31, 0x3ec(r1)
    mr r31, r3
    addi r3, r1, 0x1e8
    stw r30, 0x3e8(r1)
    addi r4, r31, 0x260
    stw r29, 0x3e4(r1)
    bl fn_804AB79C
    addi r3, r1, 0x194
    addi r4, r31, 0x260
    bl fn_80383728
    addi r3, r1, 0x188
    addi r4, r31, 0x6c
    bl fn_80383728
    addi r3, r1, 0x140
    addi r4, r1, 0x188
    addi r5, r1, 0x194
    bl fn_80013410
    addi r3, r1, 0x188
    addi r4, r1, 0x140
    bl fn_8000D124
    addi r3, r1, 0x188
    bl fn_800F7FF0
    addi r3, r1, 0x134
    addi r4, r1, 0x188
    addi r5, r1, 0x194
    bl fn_80013410
    addi r3, r1, 0x188
    addi r4, r1, 0x134
    bl fn_8000D124
    addi r3, r1, 0x188
    bl fn_800F7FF0
    addi r3, r1, 0x1e8
    bl fn_80113CCC
    mr r4, r3
    addi r3, r1, 0x188
    bl fn_80012C88
    addi r3, r1, 0x1e8
    addi r4, r1, 0x188
    bl fn_80112960
    addi r3, r1, 0x1e8
    bl fn_8004B378
    bl fn_8008B964
    addi r4, r1, 0x1e8
    bl fn_8052C6D0
    bl fn_802F0990
    bl fn_8052D3CC
    mr r4, r3
    addi r3, r1, 0x1c4
    bl fn_8052D420
    li r0, 0x0
    stw r0, 0x1c4(r1)
    bl fn_802F0990
    addi r4, r1, 0x1c4
    bl fn_8052D3D4
    lwz r0, 0x136c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_00001478
    addi r3, r31, 0x1370
    b lbl_fn_8052D46C_0000148C
lbl_fn_8052D46C_00001478:
    lfs f1, lbl_80887AB0
    addi r3, r1, 0x128
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
lbl_fn_8052D46C_0000148C:
    mr r4, r3
    addi r3, r1, 0x17c
    bl fn_8001047C
    bl fn_801156BC
    lwz r0, 0x121c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_000014E4
    lfs f1, lbl_80887AB4
    addi r3, r31, 0x6c
    fmr f2, f1
    bl fn_8004BF64
    addi r3, r31, 0x6c
    bl fn_80113CCC
    mr r4, r3
    addi r3, r31, 0x11fc
    bl fn_8000D124
    addi r3, r31, 0x6c
    bl fn_80112958
    mr r4, r3
    addi r3, r31, 0x1208
    bl fn_8000D124
    b lbl_fn_8052D46C_00001978
lbl_fn_8052D46C_000014E4:
    lwz r0, 0x12ac(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8052D46C_00001540
    lfs f1, lbl_80887B14
    addi r3, r31, 0x12d0
    la r4, lbl_8087E4A8
    bl fn_800F8524
    stfs f1, 0x12d0(r31)
    frsp f1, f1
    addi r3, r1, 0x11c
    addi r4, r31, 0x12b0
    bl fn_8052DADC
    addi r3, r31, 0x12ec
    addi r4, r1, 0x11c
    bl fn_8000D124
    lfs f1, 0x12d0(r31)
    addi r3, r1, 0x110
    addi r4, r31, 0x12b0
    bl fn_8052DADC
    addi r3, r31, 0x12f8
    addi r4, r1, 0x110
    bl fn_8000D124
    b lbl_fn_8052D46C_00001580
lbl_fn_8052D46C_00001540:
    lfs f1, lbl_80887B14
    addi r3, r1, 0x104
    addi r4, r31, 0x12ec
    addi r5, r31, 0x12d4
    bl fn_800F7260
    addi r3, r31, 0x12ec
    addi r4, r1, 0x104
    bl fn_8000D124
    lfs f1, lbl_80887B14
    addi r3, r1, 0xf8
    addi r4, r31, 0x12f8
    addi r5, r31, 0x12e0
    bl fn_800F7260
    addi r3, r31, 0x12f8
    addi r4, r1, 0xf8
    bl fn_8000D124
lbl_fn_8052D46C_00001580:
    lwz r0, 0x11f8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8052D46C_000016A0
    lwz r0, 0x136c(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_000015AC
    lwz r0, 0x11f0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_000015AC
    li r3, 0x1
lbl_fn_8052D46C_000015AC:
    cmpwi r3, 0x0
    beq lbl_fn_8052D46C_000015C8
    lwz r4, 0x11f0(r31)
    addi r3, r1, 0xec
    bl fn_8052DEA8
    addi r4, r1, 0xec
    b lbl_fn_8052D46C_000015D0
lbl_fn_8052D46C_000015C8:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
lbl_fn_8052D46C_000015D0:
    addi r3, r1, 0x170
    bl fn_8001047C
    lwz r0, 0x136c(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8052D46C_000015F8
    lwz r0, 0x11f0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_000015F8
    li r3, 0x1
lbl_fn_8052D46C_000015F8:
    cmpwi r3, 0x0
    beq lbl_fn_8052D46C_00001614
    lwz r4, 0x11f0(r31)
    addi r3, r1, 0xe0
    bl fn_8052DEBC
    addi r4, r1, 0xe0
    b lbl_fn_8052D46C_0000161C
lbl_fn_8052D46C_00001614:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
lbl_fn_8052D46C_0000161C:
    addi r3, r1, 0x170
    bl fn_80012C88
    addi r3, r1, 0xbc
    addi r4, r31, 0x11fc
    addi r5, r31, 0x12ec
    bl fn_80013410
    addi r3, r1, 0xc8
    addi r4, r1, 0xbc
    addi r5, r1, 0x17c
    bl fn_80013410
    addi r3, r1, 0xd4
    addi r4, r1, 0xc8
    addi r5, r1, 0x170
    bl fn_80013410
    addi r3, r31, 0x6c
    addi r4, r1, 0xd4
    bl fn_80114AA0
    addi r3, r1, 0x98
    addi r4, r31, 0x1208
    addi r5, r31, 0x12f8
    bl fn_80013410
    addi r3, r1, 0xa4
    addi r4, r1, 0x98
    addi r5, r1, 0x17c
    bl fn_80013410
    addi r3, r1, 0xb0
    addi r4, r1, 0xa4
    addi r5, r1, 0x170
    bl fn_80013410
    addi r3, r31, 0x6c
    addi r4, r1, 0xb0
    bl fn_80112960
    b lbl_fn_8052D46C_00001978
lbl_fn_8052D46C_000016A0:
    cmpwi r0, 0x1
    bne lbl_fn_8052D46C_00001978
    lwz r3, 0x454(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8052D46C_00001978
    lfs f1, 0x458(r31)
    li r4, 0x0
    lfs f0, 0x45c(r31)
    fadds f0, f1, f0
    stfs f0, 0x458(r31)
    bl fn_805BDCC0
    mr r30, r3
    lfs f1, 0x458(r31)
    mr r4, r30
    addi r3, r1, 0x8c
    bl fn_8052C68C
    addi r3, r31, 0x11fc
    addi r4, r1, 0x8c
    bl fn_8000D124
    lfs f1, 0x458(r31)
    mr r4, r30
    addi r3, r1, 0x80
    bl fn_8052C6A8
    addi r3, r31, 0x1208
    addi r4, r1, 0x80
    bl fn_8000D124
    lwz r0, 0x136c(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_00001728
    lwz r0, 0x11f0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_00001728
    li r3, 0x1
lbl_fn_8052D46C_00001728:
    cmpwi r3, 0x0
    beq lbl_fn_8052D46C_00001744
    lwz r4, 0x11f0(r31)
    addi r3, r1, 0x74
    bl fn_8052DEA8
    addi r4, r1, 0x74
    b lbl_fn_8052D46C_0000174C
lbl_fn_8052D46C_00001744:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
lbl_fn_8052D46C_0000174C:
    addi r3, r1, 0x164
    bl fn_8001047C
    lwz r0, 0x136c(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_00001774
    lwz r0, 0x11f4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_00001774
    li r3, 0x1
lbl_fn_8052D46C_00001774:
    cmpwi r3, 0x0
    beq lbl_fn_8052D46C_00001790
    lwz r4, 0x11f4(r31)
    addi r3, r1, 0x68
    bl fn_8052DEA8
    addi r4, r1, 0x68
    b lbl_fn_8052D46C_00001798
lbl_fn_8052D46C_00001790:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
lbl_fn_8052D46C_00001798:
    addi r3, r1, 0x158
    bl fn_8001047C
    lwz r0, 0x136c(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8052D46C_000017C0
    lwz r0, 0x11f0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_000017C0
    li r3, 0x1
lbl_fn_8052D46C_000017C0:
    cmpwi r3, 0x0
    beq lbl_fn_8052D46C_000017DC
    lwz r4, 0x11f0(r31)
    addi r3, r1, 0x5c
    bl fn_8052DEBC
    addi r4, r1, 0x5c
    b lbl_fn_8052D46C_000017E4
lbl_fn_8052D46C_000017DC:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
lbl_fn_8052D46C_000017E4:
    addi r3, r1, 0x164
    bl fn_80012C88
    lwz r0, 0x136c(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8052D46C_0000180C
    lwz r0, 0x11f4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8052D46C_0000180C
    li r3, 0x1
lbl_fn_8052D46C_0000180C:
    cmpwi r3, 0x0
    beq lbl_fn_8052D46C_00001828
    lwz r4, 0x11f4(r31)
    addi r3, r1, 0x50
    bl fn_8052DEBC
    addi r4, r1, 0x50
    b lbl_fn_8052D46C_00001830
lbl_fn_8052D46C_00001828:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
lbl_fn_8052D46C_00001830:
    addi r3, r1, 0x158
    bl fn_80012C88
    mr r3, r30
    bl fn_8052DED0
    lfs f0, 0x458(r31)
    addi r3, r1, 0x14c
    addi r4, r1, 0x158
    addi r5, r1, 0x164
    fdivs f1, f0, f1
    bl fn_800F7260
    addi r3, r1, 0x2c
    addi r4, r31, 0x11fc
    addi r5, r31, 0x12ec
    bl fn_80013410
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    addi r5, r1, 0x17c
    bl fn_80013410
    addi r3, r1, 0x44
    addi r4, r1, 0x38
    addi r5, r1, 0x14c
    bl fn_80013410
    addi r3, r31, 0x6c
    addi r4, r1, 0x44
    bl fn_80114AA0
    addi r3, r1, 0x8
    addi r4, r31, 0x1208
    addi r5, r31, 0x12f8
    bl fn_80013410
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    addi r5, r1, 0x17c
    bl fn_80013410
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x14c
    bl fn_80013410
    addi r3, r31, 0x6c
    addi r4, r1, 0x20
    bl fn_80112960
    mr r3, r30
    bl fn_8052DED0
    lfs f2, 0x458(r31)
    fcmpo cr0, f2, f1
    bgt lbl_fn_8052D46C_000018F0
    lfs f0, lbl_80887AB0
    fcmpo cr0, f2, f0
    bge lbl_fn_8052D46C_000018F8
lbl_fn_8052D46C_000018F0:
    li r0, 0x0
    stw r0, 0x11f8(r31)
lbl_fn_8052D46C_000018F8:
    lfs f1, 0x45c(r31)
    li r29, 0x0
    lfs f0, lbl_80887AB0
    fcmpo cr0, f1, f0
    ble lbl_fn_8052D46C_00001930
    mr r3, r30
    bl fn_8052DED0
    lfs f2, lbl_80887B18
    lfs f0, 0x458(r31)
    fsubs f1, f1, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_8052D46C_00001948
    li r29, 0x1
    b lbl_fn_8052D46C_00001948
lbl_fn_8052D46C_00001930:
    bge lbl_fn_8052D46C_00001948
    lfs f1, 0x458(r31)
    lfs f0, lbl_80887B18
    fcmpo cr0, f1, f0
    ble lbl_fn_8052D46C_00001948
    li r29, 0x1
lbl_fn_8052D46C_00001948:
    cmpwi r29, 0x0
    beq lbl_fn_8052D46C_00001978
    bl fn_802F0990
    bl fn_8052D3CC
    mr r4, r3
    addi r3, r1, 0x1a0
    bl fn_8052D420
    li r0, 0x0
    stw r0, 0x1a0(r1)
    bl fn_802F0990
    addi r4, r1, 0x1a0
    bl fn_8052D3D4
lbl_fn_8052D46C_00001978:
    addi r3, r31, 0x1340
    bl fn_800CB58C
    cmpwi r3, 0x0
    beq lbl_fn_8052D46C_000019A8
    mr r3, r31
    bl fn_8052DED8
    cmpwi r3, 0x0
    beq lbl_fn_8052D46C_000019A8
    addi r3, r31, 0x1340
    li r4, 0x14
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_8052D46C_000019A8:
    lfs f1, 0x1214(r31)
    addi r3, r31, 0x6c
    bl fn_8037F688
    addi r3, r31, 0x6c
    bl fn_8004B378
    bl fn_8008B964
    addi r4, r31, 0x6c
    bl fn_80116BD4
    addi r3, r1, 0x1e8
    li r4, -0x1
    bl fn_8004B338
    lwz r0, 0x3f4(r1)
    lwz r31, 0x3ec(r1)
    lwz r30, 0x3e8(r1)
    lwz r29, 0x3e4(r1)
    mtlr r0
    addi r1, r1, 0x3f0
    blr
}

asm void fn_8052DADC(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stfd f29, 0x180(r1)
    psq_st f29, 0x188(r1), 0, 0
    stfd f28, 0x170(r1)
    psq_st f28, 0x178(r1), 0, 0
    stfd f27, 0x160(r1)
    psq_st f27, 0x168(r1), 0, 0
    stfd f26, 0x150(r1)
    psq_st f26, 0x158(r1), 0, 0
    stfd f25, 0x140(r1)
    psq_st f25, 0x148(r1), 0, 0
    stfd f24, 0x130(r1)
    psq_st f24, 0x138(r1), 0, 0
    stfd f23, 0x120(r1)
    psq_st f23, 0x128(r1), 0, 0
    stfd f22, 0x110(r1)
    psq_st f22, 0x118(r1), 0, 0
    stfd f21, 0x100(r1)
    psq_st f21, 0x108(r1), 0, 0
    stfd f20, 0xf0(r1)
    psq_st f20, 0xf8(r1), 0, 0
    stfd f19, 0xe0(r1)
    psq_st f19, 0xe8(r1), 0, 0
    lfs f0, lbl_80887AB0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8052DADC_00001A84
    lwz r4, 0x0(r4)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_8052DADC_00001D4C
lbl_fn_8052DADC_00001A84:
    lfs f0, lbl_80887AD4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8052DADC_00001ABC
    lwz r5, 0x4(r4)
    lwz r4, 0x0(r4)
    subi r0, r5, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_8052DADC_00001D4C
lbl_fn_8052DADC_00001ABC:
    lfs f0, 0xc(r4)
    li r7, 0x0
    lwz r0, 0x1c(r4)
    li r5, 0x0
    fmuls f3, f0, f1
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8052DADC_00001D34
lbl_fn_8052DADC_00001ADC:
    lwz r6, 0x10(r4)
    lfsx f0, r6, r5
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8052DADC_00001D24
    lfs f10, lbl_80887AB0
    fcmpu cr0, f10, f3
    bne lbl_fn_8052DADC_00001B00
    b lbl_fn_8052DADC_00001B04
lbl_fn_8052DADC_00001B00:
    fdivs f10, f3, f0
lbl_fn_8052DADC_00001B04:
    slwi r0, r7, 2
    lfs f0, lbl_80887AD4
    subf r6, r7, r0
    lwz r5, 0x0(r4)
    addi r4, r6, 0x3
    fsubs f29, f0, f10
    mulli r4, r4, 0xc
    addi r0, r6, 0x2
    lfs f13, lbl_80887AB4
    add r4, r5, r4
    lfs f3, 0x8(r4)
    mulli r0, r0, 0xc
    lfs f0, 0x4(r4)
    fmuls f7, f3, f10
    lfs f3, 0x0(r4)
    fmuls f4, f0, f10
    add r4, r5, r0
    lfs f0, 0x4(r4)
    fmuls f3, f3, f10
    fmuls f23, f0, f13
    lfsx f0, r5, r0
    fmuls f6, f7, f10
    stfs f3, 0xc8(r1)
    fmuls f22, f0, f13
    lfs f0, 0x8(r4)
    fmuls f24, f0, f13
    stfs f4, 0xcc(r1)
    fmuls f5, f4, f10
    fmuls f0, f3, f10
    stfs f7, 0xd0(r1)
    fmuls f12, f23, f10
    fmuls f21, f24, f10
    stfs f0, 0xbc(r1)
    fmuls f11, f22, f10
    fmuls f4, f6, f10
    stfs f5, 0xc0(r1)
    fmuls f3, f5, f10
    fmuls f0, f0, f10
    stfs f6, 0xc4(r1)
    fmuls f8, f12, f10
    fmuls f5, f11, f10
    stfs f0, 0xb0(r1)
    fmuls f9, f21, f10
    stfs f3, 0xb4(r1)
    stfs f4, 0xb8(r1)
    stfs f22, 0xa4(r1)
    stfs f23, 0xa8(r1)
    stfs f24, 0xac(r1)
    stfs f11, 0x98(r1)
    stfs f12, 0x9c(r1)
    stfs f21, 0xa0(r1)
    stfs f5, 0x8c(r1)
    stfs f8, 0x90(r1)
    addi r0, r6, 0x1
    fmuls f6, f8, f29
    mulli r0, r0, 0xc
    fmuls f7, f9, f29
    fmuls f5, f5, f29
    stfs f9, 0x94(r1)
    addi r4, r1, 0x8
    add r7, r5, r0
    mulli r0, r6, 0xc
    lfs f8, 0x8(r7)
    lfs f11, 0x4(r7)
    fmuls f9, f8, f13
    lfs f8, 0x0(r7)
    add r5, r5, r0
    fmuls f27, f11, f13
    lfs f12, 0x8(r5)
    fmuls f26, f8, f13
    fmuls f30, f9, f10
    lfs f11, 0x4(r5)
    fmuls f21, f12, f29
    fmuls f8, f27, f10
    stfs f26, 0x74(r1)
    fmuls f19, f26, f10
    fmuls f22, f11, f29
    lfs f10, 0x0(r5)
    fmuls f31, f30, f29
    fmuls f23, f10, f29
    stfs f27, 0x78(r1)
    fmuls f24, f21, f29
    fmuls f13, f8, f29
    stfs f9, 0x7c(r1)
    fmuls f20, f19, f29
    fmuls f25, f22, f29
    stfs f7, 0x88(r1)
    fmuls f26, f23, f29
    fmuls f12, f31, f29
    stfs f8, 0x6c(r1)
    fmuls f27, f24, f29
    fmuls f11, f13, f29
    stfs f30, 0x70(r1)
    fmuls f28, f25, f29
    fadds f9, f27, f12
    stfs f6, 0x84(r1)
    fmuls f10, f20, f29
    fmuls f29, f26, f29
    stfs f5, 0x80(r1)
    fadds f8, f28, f11
    fadds f7, f9, f7
    stfs f19, 0x68(r1)
    fadds f30, f29, f10
    fadds f6, f8, f6
    stfs f20, 0x5c(r1)
    fadds f2, f7, f4
    fadds f4, f30, f5
    stfs f13, 0x60(r1)
    fadds f3, f6, f3
    stfs f31, 0x64(r1)
    fadds f0, f4, f0
    stfs f3, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f12, 0x58(r1)
    stfs f23, 0x44(r1)
    stfs f22, 0x48(r1)
    stfs f21, 0x4c(r1)
    stfs f26, 0x38(r1)
    stfs f25, 0x3c(r1)
    stfs f24, 0x40(r1)
    stfs f29, 0x2c(r1)
    stfs f28, 0x30(r1)
    stfs f27, 0x34(r1)
    stfs f30, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f4, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    b lbl_fn_8052DADC_00001D4C
lbl_fn_8052DADC_00001D24:
    fsubs f3, f3, f0
    addi r7, r7, 0x1
    addi r5, r5, 0x4
    bdnz lbl_fn_8052DADC_00001ADC
lbl_fn_8052DADC_00001D34:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8052DADC_00001D4C:
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    psq_l f29, 0x188(r1), 0, 0
    lfd f29, 0x180(r1)
    psq_l f28, 0x178(r1), 0, 0
    lfd f28, 0x170(r1)
    psq_l f27, 0x168(r1), 0, 0
    lfd f27, 0x160(r1)
    psq_l f26, 0x158(r1), 0, 0
    lfd f26, 0x150(r1)
    psq_l f25, 0x148(r1), 0, 0
    lfd f25, 0x140(r1)
    psq_l f24, 0x138(r1), 0, 0
    lfd f24, 0x130(r1)
    psq_l f23, 0x128(r1), 0, 0
    lfd f23, 0x120(r1)
    psq_l f22, 0x118(r1), 0, 0
    lfd f22, 0x110(r1)
    psq_l f21, 0x108(r1), 0, 0
    lfd f21, 0x100(r1)
    psq_l f20, 0xf8(r1), 0, 0
    lfd f20, 0xf0(r1)
    psq_l f19, 0xe8(r1), 0, 0
    lfd f19, 0xe0(r1)
    addi r1, r1, 0x1b0
    blr
}
