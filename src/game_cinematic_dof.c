#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D760(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8000DD0C(void);
extern void fn_8003E4A4(void);
extern void fn_8004203C(void);
extern void fn_8004212C(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_80057A68(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8006AFF8(void);
extern void fn_8006CA80(void);
extern void fn_800844D8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8009373C(void);
extern void fn_80097D7C(void);
extern void fn_80099E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800F52F0(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_8011FC10(void);
extern void fn_80121F00(void);
extern void fn_80122550(void);
extern void fn_80129978(void);
extern void fn_80129A48(void);
extern void fn_8012D180(void);
extern void fn_8013655C(void);
extern void fn_80139550(void);
extern void fn_80139F3C(void);
extern void fn_8013C38C(void);
extern void fn_8013C480(void);
extern void fn_8013C504(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8015ECC4(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_801A03E0(void);
extern void fn_8020A780(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A108(void);
extern void fn_8023A254(void);
extern void fn_80265804(void);
extern void fn_8026607C(void);
extern void fn_80267B28(void);
extern void fn_80276AE4(void);
extern void fn_80288390(void);
extern void fn_80288E30(void);
extern void fn_8028CFB8(void);
extern void fn_8029F3AC(void);
extern void fn_802A36B0(void);
extern void fn_802A4094(void);
extern void fn_802A4968(void);
extern void fn_802A49BC(void);
extern void fn_802BABC0(void);
extern void fn_803165E0(void);
extern void fn_80339F04(void);
extern void fn_80339F14(void);
extern void fn_80339F24(void);
extern void fn_80339F34(void);
extern void fn_80339F5C(void);
extern void fn_80339F6C(void);
extern void fn_80339F74(void);
extern void fn_80339F7C(void);
extern void fn_80339F84(void);
extern void fn_8033A7A0(void);
extern void fn_8033AB88(void);
extern void fn_8033C3D8(void);
extern void fn_8033C490(void);
extern void fn_8033D040(void);
extern void fn_8033D750(void);
extern void fn_8033DB8C(void);
extern void fn_8033E058(void);
extern void fn_8033EF90(void);
extern void fn_8033F7FC(void);
extern void fn_803405C0(void);
extern void fn_80340E54(void);
extern void fn_8034100C(void);
extern void fn_803412AC(void);
extern void fn_80341BEC(void);
extern void fn_80341E14(void);
extern void fn_80341EE4(void);
extern void fn_80342004(void);
extern void fn_8034228C(void);
extern void fn_803435B8(void);
extern void fn_803441AC(void);
extern void fn_8034441C(void);
extern void fn_80344454(void);
extern void fn_8034472C(void);
extern void fn_80344780(void);
extern void fn_803449AC(void);
extern void fn_80344BB4(void);
extern void fn_8035B694(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80373148(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804A04AC(void);
extern void fn_8054A340(void);
extern void fn_805A3D00(void);
extern void fn_805A5224(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_806958E0(void);

/* External data declarations */
extern u8 jumptable_80789330[];
extern u8 lbl_8074A2D8[];
extern u8 lbl_8074A4C0[];
extern u8 lbl_80775A88[];
extern u8 lbl_80789388[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_808851B0;
extern u32 lbl_808851B4;
extern u32 lbl_808851B8;
extern u32 lbl_808851BC;
extern u32 lbl_80885230;
extern u32 lbl_80885234;
extern u32 lbl_80885238;
extern u32 lbl_8088523C;
extern u32 lbl_80885240;
extern u32 lbl_80885244;
extern u32 lbl_80885248;
extern u32 lbl_8088524C;
extern u32 lbl_80885250;
extern u32 lbl_80885254;
extern u32 lbl_80885258;
extern u32 lbl_8088525C;
extern u32 lbl_80885260;
extern u32 lbl_80885264;
extern u32 lbl_80885268;
extern u32 lbl_8088526C;
extern u32 lbl_80885270;
extern u32 lbl_80885274;
extern u32 lbl_80885278;
extern u32 lbl_8088527C;
extern u32 lbl_80885280;

/* Function declarations */
void fn_803383E4(void);
void fn_80338568(void);
void fn_803386FC(void);
void fn_80338770(void);
void fn_803387DC(void);
void fn_803388A4(void);
void fn_80338CDC(void);
void fn_80338D04(void);
void fn_80338D08(void);
void fn_80338D14(void);
void fn_80338FD0(void);
void fn_803396EC(void);
void fn_803396FC(void);
void fn_80339718(void);
void fn_80339760(void);

asm void fn_803383E4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r4, 0xd1c(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x530(r4)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x2c
    lfs f4, 0x528(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_808851B0
    fsubs f3, f4, f3
    stfs f5, 0x34(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    bl fn_805F9940
    lfs f0, lbl_808851BC
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_803383E4_00000160
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    li r0, 0x0
    stw r0, 0x6c(r1)
    lfs f0, lbl_808851BC
    addi r31, r1, 0x14
    stw r0, 0x70(r1)
    addi r5, r1, 0x20
    fsubs f4, f31, f0
    lfs f3, 0x34(r1)
    stw r0, 0x74(r1)
    mr r6, r31
    lfs f0, 0x30(r1)
    addi r4, r1, 0x38
    stw r0, 0x78(r1)
    fmuls f7, f3, f4
    lfs f3, 0x2c(r1)
    fmuls f8, f0, f4
    lfs f2, 0x530(r30)
    lis r7, 0x8000
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmuls f9, f3, f4
    lfs f5, lbl_808851B4
    frsp f0, f2
    lfs f6, 0x24(r1)
    li r8, 0x0
    stfs f2, 0x28(r1)
    fadds f3, f6, f5
    lwz r3, lbl_8087EE98
    fadds f0, f0, f7
    stfs f9, 0x8(r1)
    li r9, 0x0
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x14(r1)
    lfs f3, 0x18(r1)
    fadds f4, f4, f9
    stfs f8, 0xc(r1)
    fadds f3, f3, f8
    stfs f7, 0x10(r1)
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_803383E4_00000160
    lfs f2, 0x530(r30)
    addi r4, r30, 0x14f8
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r30, 0x14ec
    psq_st f1, 0x0(r4), 0, 0
    li r3, 0x1
    lfs f0, 0x52c(r30)
    stfs f2, 0x1500(r30)
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x14f4(r30)
    stfs f0, 0x14f0(r30)
    b lbl_fn_803383E4_00000164
lbl_fn_803383E4_00000160:
    li r3, 0x0
lbl_fn_803383E4_00000164:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80338568(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8074A2D8@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_8074A2D8@l
    addi r4, r4, 0x17c
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x156c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80338568_000001D8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80338568_000001D8
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x156c(r29)
    mr r30, r3
    b lbl_fn_80338568_000001DC
lbl_fn_80338568_000001D8:
    li r30, 0x0
lbl_fn_80338568_000001DC:
    mr r3, r29
    mr r4, r30
    bl fn_805A5224
    lis r31, lbl_8074A2D8@ha
    mr r3, r30
    addi r31, r31, lbl_8074A2D8@l
    addi r5, r29, 0x1570
    addi r4, r31, 0x18c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x196
    addi r5, r29, 0x1574
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r6, 0x2
    mr r3, r30
    subi r7, r6, 0x7960
    addi r4, r31, 0x19f
    addi r5, r29, 0x58c
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x1aa
    addi r5, r29, 0x14d4
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0xbb
    addi r5, r29, 0x1504
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0xe5
    addi r5, r29, 0x1508
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808851B0
    mr r3, r30
    lfs f2, lbl_80885230
    addi r4, r31, 0xd6
    lfs f3, lbl_808851B8
    addi r5, r29, 0x14e8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808851B0
    mr r3, r30
    lfs f2, lbl_80885234
    addi r4, r31, 0x1b0
    lfs f3, lbl_808851B8
    addi r5, r29, 0x7d8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803386FC(void)
{
    nofralloc
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803386FC_00000384
    lwz r6, 0x7e0(r3)
    li r5, 0x1
    rlwinm r4, r6, 0, 12, 12
    subis r0, r4, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_803386FC_00000350
    rlwinm r4, r6, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_803386FC_00000350
    li r5, 0x0
lbl_fn_803386FC_00000350:
    cmpwi r5, 0x0
    bne lbl_fn_803386FC_00000384
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_803386FC_0000036C
    li r3, 0x2
    blr
lbl_fn_803386FC_0000036C:
    lwz r0, 0x560(r3)
    li r3, 0x1
    cmpwi r0, 0xa
    bnelr
    li r3, 0x3
    blr
lbl_fn_803386FC_00000384:
    li r3, 0x0
    blr
}

asm void fn_80338770(void)
{
    nofralloc
    cmpwi r4, 0x1
    bne lbl_fn_80338770_000003F0
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80338770_000003F0
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    beq lbl_fn_80338770_000003F0
    cmpwi r0, 0x1
    beq lbl_fn_80338770_000003F0
    lwz r5, 0x7e0(r3)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80338770_000003E0
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80338770_000003E0
    li r4, 0x0
lbl_fn_80338770_000003E0:
    cmpwi r4, 0x0
    bne lbl_fn_80338770_000003F0
    li r3, 0x3
    blr
lbl_fn_80338770_000003F0:
    li r3, -0x1
    blr
}

asm void fn_803387DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803387DC_000004A0
    addic. r0, r3, 0x156c
    beq lbl_fn_803387DC_00000444
    lwz r4, 0x156c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803387DC_00000444
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803387DC_00000444
    bl fn_800897D8
lbl_fn_803387DC_00000444:
    addic. r31, r29, 0x1534
    beq lbl_fn_803387DC_00000464
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803387DC_00000464
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803387DC_00000464:
    addic. r31, r29, 0x1528
    beq lbl_fn_803387DC_00000484
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803387DC_00000484
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803387DC_00000484:
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_803387DC_000004A0
    mr r3, r29
    bl dtor_80084684
lbl_fn_803387DC_000004A0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803388A4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_27
    mr r27, r5
    lwz r5, 0x20(r5)
    mr r31, r3
    bl fn_8035B694
    lis r3, lbl_80789388@ha
    li r28, 0x0
    addi r3, r3, lbl_80789388@l
    lis r4, fn_80288390@ha
    lis r5, fn_8000D760@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0x14ec
    addi r4, r4, fn_80288390@l
    stw r28, 0x14b0(r31)
    addi r5, r5, fn_8000D760@l
    li r6, 0xc
    li r7, 0x9
    stw r28, 0x14b4(r31)
    stw r28, 0x14b8(r31)
    stw r28, 0x14bc(r31)
    stw r28, 0x14c0(r31)
    stw r28, 0x14c4(r31)
    stb r28, 0x14c8(r31)
    stw r28, 0x14d8(r31)
    bl fn_806958E0
    stw r28, 0x1558(r31)
    addi r3, r31, 0x1568
    stw r28, 0x155c(r31)
    stw r28, 0x1560(r31)
    stw r28, 0x1564(r31)
    bl fn_80338D04
    addi r3, r31, 0x1598
    bl fn_80057A64
    addi r3, r31, 0x15a4
    bl fn_802377B8
    addi r3, r31, 0x15b0
    bl fn_802377B8
    addi r3, r31, 0x15bc
    bl fn_802377B8
    addi r3, r31, 0x15c8
    bl fn_80237518
    addi r3, r31, 0x15d4
    bl fn_80057A64
    addi r3, r31, 0x15e0
    bl fn_803165E0
    addi r3, r31, 0x1610
    bl fn_802377B8
    addi r3, r31, 0x161c
    bl fn_802377B8
    stb r28, 0x1628(r31)
    addi r3, r31, 0x162c
    bl fn_802377B8
    addi r3, r31, 0x1638
    bl fn_802377B8
    lfs f0, lbl_80885238
    addi r3, r31, 0x164c
    stb r28, 0x1644(r31)
    stfs f0, 0x1648(r31)
    bl fn_80057A64
    stw r28, 0x165c(r31)
    addi r3, r31, 0x1668
    stw r28, 0x1660(r31)
    stw r28, 0x1664(r31)
    bl fn_80237518
    addi r3, r31, 0x1674
    bl fn_802377B8
    addi r3, r31, 0x1680
    bl fn_802377B8
    addi r3, r31, 0x168c
    bl fn_802377B8
    addi r3, r31, 0x1698
    bl fn_802377B8
    li r3, 0x96
    li r30, 0xa
    li r0, 0x1
    stw r3, 0x16a4(r31)
    addi r3, r31, 0x16b8
    stw r30, 0x16a8(r31)
    stw r28, 0x16ac(r31)
    stb r28, 0x16b0(r31)
    stb r28, 0x16b1(r31)
    stb r28, 0x16b2(r31)
    stb r0, 0x16b3(r31)
    stb r28, 0x16b4(r31)
    bl fn_8006CA80
    li r4, 0xf
    li r0, 0x4b0
    stw r28, 0x16c8(r31)
    addi r3, r31, 0x16d4
    stw r4, 0x16cc(r31)
    stw r0, 0x16d0(r31)
    bl fn_80338D08
    stw r28, 0x1758(r31)
    addi r3, r31, 0x175c
    bl fn_802BABC0
    lwz r0, 0x12a4(r31)
    li r5, 0x1e
    lfs f2, lbl_8088523C
    lis r29, lbl_8074A4C0@ha
    lfs f1, lbl_80885240
    oris r0, r0, 0x40
    lfs f0, lbl_80885244
    addi r3, r1, 0x2c
    stw r28, 0x1760(r31)
    addi r4, r29, lbl_8074A4C0@l
    stfs f2, 0x1764(r31)
    stfs f1, 0x1768(r31)
    stw r30, 0x1770(r31)
    stfs f0, 0x1774(r31)
    stw r5, 0x1778(r31)
    stw r0, 0x12a4(r31)
    bl fn_8003E4A4
    addi r29, r29, lbl_8074A4C0@l
    addi r3, r1, 0x20
    addi r4, r29, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r27, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r29, 0x32
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x14
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    b lbl_fn_803388A4_00000730
lbl_fn_803388A4_000006EC:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r29, 0x34
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803388A4_00000728
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
lbl_fn_803388A4_00000728:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_803388A4_00000730:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r30, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r30, 0x0
    bne lbl_fn_803388A4_000006EC
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x16b8(r31)
    mr r4, r3
    addi r3, r31, 0x16b8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r30, lbl_8074A4C0@ha
    addi r3, r31, 0x15a4
    addi r30, r30, lbl_8074A4C0@l
    addi r4, r30, 0x3d
    bl fn_8023780C
    addi r3, r31, 0x15b0
    addi r4, r30, 0x4b
    bl fn_8023780C
    addi r3, r31, 0x15bc
    addi r4, r30, 0x59
    bl fn_8023780C
    addi r3, r31, 0x15c8
    addi r4, r30, 0x67
    bl fn_80237654
    addi r3, r31, 0x162c
    addi r4, r30, 0x78
    bl fn_8023780C
    addi r3, r31, 0x1638
    addi r4, r30, 0x86
    bl fn_8023780C
    addi r3, r31, 0x1668
    addi r4, r30, 0x94
    bl fn_80237654
    addi r3, r31, 0x1610
    addi r4, r30, 0xa2
    bl fn_8023780C
    addi r3, r31, 0x161c
    addi r4, r30, 0xb0
    bl fn_8023780C
    addi r3, r31, 0x1674
    addi r4, r30, 0xbe
    bl fn_8023780C
    addi r3, r31, 0x1680
    addi r4, r30, 0xcc
    bl fn_8023780C
    addi r3, r31, 0x168c
    addi r4, r30, 0xda
    bl fn_8023780C
    addi r3, r31, 0x1698
    addi r4, r30, 0xe8
    bl fn_8023780C
    bl fn_80121F00
    li r4, 0x65
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    bl fn_80121F00
    li r4, 0x68
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    addi r3, r31, 0x5b8
    li r4, 0x0
    bl fn_80338CDC
    lfs f1, lbl_80885238
    addi r3, r31, 0x1598
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
    lwz r5, 0x12a8(r31)
    addi r3, r1, 0x8
    lwz r0, 0x12a4(r31)
    li r4, -0x1
    ori r5, r5, 0x800
    stw r5, 0x12a8(r31)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x12a4(r31)
    bl dtor_80013D60
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    addi r11, r1, 0x120
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80338CDC(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_80338CDC_00000910
    lwz r0, 0x8(r3)
    oris r0, r0, 0x8000
    stw r0, 0x8(r3)
    blr
lbl_fn_80338CDC_00000910:
    lwz r0, 0x8(r3)
    clrlwi r0, r0, 1
    stw r0, 0x8(r3)
    blr
}

asm void fn_80338D04(void)
{
    nofralloc
    blr
}

asm void fn_80338D08(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_80338D14(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, __files@ha
    lis r6, lbl_8074A4C0@ha
    stw r0, 0x64(r1)
    stmw r18, 0x28(r1)
    mr r20, r3
    mr r21, r4
    addi r25, r6, lbl_8074A4C0@l
    addi r26, r5, __files@l
    addi r22, r1, 0x14
    li r19, 0x0
    lis r29, 0xcccd
    lis r24, 0x4000
    lis r28, 0x1555
    lis r30, 0x2aab
    lis r31, lbl_80775A88@ha
lbl_fn_80338D14_00000974:
    mr r3, r21
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_80338D14_00000BD8
    lwz r5, 0x4(r20)
    lwz r4, 0x8(r20)
    cmplw r5, r4
    bge lbl_fn_80338D14_000009B8
    addi r5, r5, 0x1
    lwz r4, 0x0(r20)
    slwi r0, r5, 2
    stw r5, 0x4(r20)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_80338D14_00000974
lbl_fn_80338D14_000009B8:
    subi r0, r24, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80338D14_000009DC
    addi r4, r25, 0xf6
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80338D14_000009DC:
    addi r3, r20, 0x8
    stw r19, 0x14(r1)
    subi r0, r24, 0x1
    stw r19, 0x18(r1)
    stw r19, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r19, 0x24(r1)
    lwz r3, 0x4(r20)
    lwz r27, 0x8(r20)
    addi r3, r3, 0x1
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_80338D14_00000A2C
    addi r4, r25, 0xf6
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80338D14_00000A2C:
    addi r0, r28, 0x5555
    cmplw r27, r0
    bge lbl_fn_80338D14_00000A74
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80338D14_00000A68
    addi r3, r1, 0x8
lbl_fn_80338D14_00000A68:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_80338D14_00000AB0
lbl_fn_80338D14_00000A74:
    subi r0, r30, 0x5556
    cmplw r27, r0
    bge lbl_fn_80338D14_00000AAC
    addi r3, r27, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80338D14_00000AA0
    addi r3, r1, 0x8
lbl_fn_80338D14_00000AA0:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_80338D14_00000AB0
lbl_fn_80338D14_00000AAC:
    subi r18, r24, 0x1
lbl_fn_80338D14_00000AB0:
    subi r0, r24, 0x1
    cmplw r18, r0
    ble lbl_fn_80338D14_00000AD0
    addi r4, r25, 0xf6
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80338D14_00000AD0:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80338D14_00000AF8
    addi r3, r26, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80338D14_00000AF8:
    lwz r0, 0x18(r1)
    stw r27, 0x14(r1)
    slwi r3, r0, 2
    stw r18, 0x1c(r1)
    lwz r0, 0x4(r20)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r27, r0
    stwx r23, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r20)
    lwz r27, 0x0(r20)
    slwi r4, r4, 2
    add r5, r27, r4
    subf r5, r27, r5
    mr r4, r27
    srawi r5, r5, 2
    addze r23, r5
    subf r0, r23, r0
    stw r0, 0x24(r1)
    slwi r18, r23, 2
    slwi r0, r0, 2
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r27
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r22, 0x0
    add r0, r0, r23
    stw r0, 0x18(r1)
    stw r19, 0x4(r20)
    lwz r3, 0x8(r20)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r20)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r20)
    stw r0, 0x0(r20)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r20)
    stw r19, 0x18(r1)
    beq lbl_fn_80338D14_00000974
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80338D14_00000974
    stw r19, 0x18(r1)
    bl dtor_80084684
    b lbl_fn_80338D14_00000974
lbl_fn_80338D14_00000BD8:
    lmw r18, 0x28(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80338FD0(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stw r31, 0x65c(r1)
    mr r31, r3
    stw r30, 0x658(r1)
    stw r29, 0x654(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x15a4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x15b0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x15bc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x15c8
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x1638
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x162c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x1668
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x16b8
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x1610
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x161c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x1674
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x1680
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x168c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    addi r3, r31, 0x1698
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000012E8
    mr r3, r31
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80338FD0_000012E8
    mr r3, r31
    bl fn_80344780
    mr r3, r31
    li r4, 0x200
    bl fn_803396EC
    lfs f1, lbl_80885248
    mr r3, r31
    bl fn_80288E30
    lis r5, lbl_8074A4C0@ha
    lfs f1, lbl_8088524C
    addi r5, r5, lbl_8074A4C0@l
    addi r3, r31, 0xb0
    addi r4, r5, 0x10a
    addi r5, r5, 0x10f
    bl fn_80099E9C
    lis r3, 0x6666
    lwz r0, 0x940(r31)
    addi r3, r3, 0x6667
    lwz r4, 0x7ec(r31)
    mulhw r0, r3, r0
    ori r3, r4, 0x1c0
    oris r3, r3, 0x1
    ori r3, r3, 0x15
    oris r3, r3, 0x40
    srawi r0, r0, 1
    ori r3, r3, 0xc208
    oris r4, r3, 0x388
    srwi r3, r0, 31
    ori r4, r4, 0x400
    stw r4, 0x7ec(r31)
    add r0, r0, r3
    stw r0, 0x16c4(r31)
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_80338FD0_00000DA0
    bl fn_80121F00
    bl fn_8013C504
    mr r29, r3
    b lbl_fn_80338FD0_00000DA4
lbl_fn_80338FD0_00000DA0:
    li r29, 0x0
lbl_fn_80338FD0_00000DA4:
    addi r3, r31, 0x16b8
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80338FD0_000012A0
    cmpwi r29, 0x0
    beq lbl_fn_80338FD0_000012A0
    addi r3, r31, 0x16b8
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x16b8
    bl fn_80470580
    mr r4, r3
    mr r5, r29
    addi r3, r1, 0x10
    bl fn_8004203C
    lis r29, lbl_8074A4C0@ha
    addi r29, r29, lbl_8074A4C0@l
lbl_fn_80338FD0_00000DE8:
    addi r3, r1, 0x10
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r29, 0x115
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000E18
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1764(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000E18:
    mr r3, r30
    addi r4, r29, 0x129
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000E40
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x176c(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000E40:
    mr r3, r30
    addi r4, r29, 0x138
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000E68
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16c4(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000E68:
    mr r3, r30
    addi r4, r29, 0x142
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000E90
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16cc(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000E90:
    mr r3, r30
    addi r4, r29, 0x156
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000EB8
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16a4(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000EB8:
    mr r3, r30
    addi r4, r29, 0x160
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000EE0
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x16a8(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000EE0:
    mr r3, r30
    addi r4, r29, 0x173
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000F08
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1770(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000F08:
    mr r3, r30
    addi r4, r29, 0x186
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000F30
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1774(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000F30:
    mr r3, r30
    addi r4, r29, 0x199
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000F58
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1778(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000F58:
    mr r3, r30
    addi r4, r29, 0x1a8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000F80
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x177c(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000F80:
    mr r3, r30
    addi r4, r29, 0x1b3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000FA8
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1780(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000FA8:
    mr r3, r30
    addi r4, r29, 0x1bf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000FD0
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1784(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000FD0:
    mr r3, r30
    addi r4, r29, 0x1c9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000FF4
    addi r3, r31, 0x14ec
    addi r4, r1, 0x10
    bl fn_80338D14
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00000FF4:
    mr r3, r30
    addi r4, r29, 0x1de
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00001018
    addi r3, r31, 0x14f8
    addi r4, r1, 0x10
    bl fn_80338D14
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00001018:
    mr r3, r30
    addi r4, r29, 0x1f4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_0000103C
    addi r3, r31, 0x1504
    addi r4, r1, 0x10
    bl fn_80338D14
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_0000103C:
    mr r3, r30
    addi r4, r29, 0x208
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00001060
    addi r3, r31, 0x1510
    addi r4, r1, 0x10
    bl fn_80338D14
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00001060:
    mr r3, r30
    addi r4, r29, 0x21d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00001084
    addi r3, r31, 0x151c
    addi r4, r1, 0x10
    bl fn_80338D14
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00001084:
    mr r3, r30
    addi r4, r29, 0x233
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000010A8
    addi r3, r31, 0x1528
    addi r4, r1, 0x10
    bl fn_80338D14
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_000010A8:
    mr r3, r30
    addi r4, r29, 0x247
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000010CC
    addi r3, r31, 0x1534
    addi r4, r1, 0x10
    bl fn_80338D14
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_000010CC:
    mr r3, r30
    addi r4, r29, 0x25c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000010F0
    addi r3, r31, 0x1540
    addi r4, r1, 0x10
    bl fn_80338D14
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_000010F0:
    mr r3, r30
    addi r4, r29, 0x272
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00001114
    addi r3, r31, 0x154c
    addi r4, r1, 0x10
    bl fn_80338D14
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00001114:
    mr r3, r30
    addi r4, r29, 0x286
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00001140
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d0(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00001140:
    mr r3, r30
    addi r4, r29, 0x293
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_0000116C
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d4(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_0000116C:
    mr r3, r30
    addi r4, r29, 0x2a1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00001198
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d8(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00001198:
    mr r3, r30
    addi r4, r29, 0x2ae
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000011C4
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14dc(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_000011C4:
    mr r3, r30
    addi r4, r29, 0x2bb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_000011F0
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e0(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_000011F0:
    mr r3, r30
    addi r4, r29, 0x2c7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_0000121C
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14cc(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_0000121C:
    mr r3, r30
    addi r4, r29, 0x2d2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00001254
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    mr r30, r3
    bl fn_801A03E0
    mr r4, r30
    bl fn_8011FC10
    stw r3, 0x1758(r31)
    b lbl_fn_80338FD0_00001290
lbl_fn_80338FD0_00001254:
    mr r3, r30
    addi r4, r29, 0x2e0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00001290
    mr r30, r31
lbl_fn_80338FD0_0000126C:
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r3, 0x0
    beq lbl_fn_80338FD0_00001290
    bl fn_80219E6C
    stw r3, 0x14e4(r30)
    addi r30, r30, 0x4
    b lbl_fn_80338FD0_0000126C
lbl_fn_80338FD0_00001290:
    addi r3, r1, 0x10
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80338FD0_00000DE8
lbl_fn_80338FD0_000012A0:
    lwz r0, 0x16c4(r31)
    stw r0, 0x16c0(r31)
    bl fn_8000D9E8
    li r4, 0x4
    bl fn_8054A340
    lwz r4, 0x14d8(r31)
    stw r3, 0x14c4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80338FD0_000012E0
    lwz r4, 0x4(r4)
    addi r3, r1, 0x8
    bl fn_80339718
    mr r5, r3
    addi r3, r31, 0x7d4
    li r4, 0x3
    bl fn_803396FC
lbl_fn_80338FD0_000012E0:
    li r3, 0x1
    b lbl_fn_80338FD0_000012EC
lbl_fn_80338FD0_000012E8:
    li r3, 0x0
lbl_fn_80338FD0_000012EC:
    lwz r0, 0x664(r1)
    lwz r31, 0x65c(r1)
    lwz r30, 0x658(r1)
    lwz r29, 0x654(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_803396EC(void)
{
    nofralloc
    lwz r0, 0x54c(r3)
    or r0, r0, r4
    stw r0, 0x54c(r3)
    blr
}

asm void fn_803396FC(void)
{
    nofralloc
    slwi r0, r4, 3
    lwz r4, 0x0(r5)
    add r3, r3, r0
    lwz r0, 0x4(r5)
    stw r4, 0x2d0(r3)
    stw r0, 0x2d4(r3)
    blr
}

asm void fn_80339718(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl memset
    stw r31, 0x0(r30)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80339760(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lbz r0, 0x16b4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80339760_00001514
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80139550
    lfs f0, lbl_80885250
    fcmpo cr0, f1, f0
    bge lbl_fn_80339760_000013E0
    mr r3, r31
    li r4, 0x0
    bl fn_8016E4C4
    li r0, 0x0
    stw r0, 0x14b4(r31)
    b lbl_fn_80339760_000014BC
lbl_fn_80339760_000013E0:
    mr r3, r31
    bl fn_80339F04
    cmpwi r3, 0x0
    bne lbl_fn_80339760_0000143C
    bl fn_800F7FA0
    addi r4, r31, 0x1680
    li r5, 0x0
    bl fn_800F7FA8
    bl fn_800F7FA0
    addi r4, r31, 0x1680
    addi r5, r31, 0xb0
    li r6, 0x1
    bl fn_8026607C
    bl fn_800F7FA0
    addi r4, r31, 0x1680
    li r5, 0x0
    li r6, 0x6
    bl fn_8023A108
    bl fn_800F7FA0
    lfs f1, lbl_80885254
    addi r4, r31, 0x1680
    li r5, 0x0
    bl fn_8023A254
lbl_fn_80339760_0000143C:
    lfs f1, lbl_80885254
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139F3C
    mr r3, r31
    li r4, 0x1
    bl fn_8016E4C4
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80885258
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80339760_000014BC
    lwz r0, 0x14b4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80339760_000014BC
    bl fn_80121F00
    bl fn_80122550
    lfs f1, lbl_80885238
    li r4, 0x14
    lfs f2, lbl_8088525C
    bl fn_8028CFB8
    addi r3, r31, 0x6a4
    li r4, 0x0
    bl fn_80339F24
    lwz r3, 0x0(r3)
    li r4, 0x1
    bl fn_80339F14
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
lbl_fn_80339760_000014BC:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_80339760_00001500
    li r0, 0x0
    stb r0, 0x16b4(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80339F34
    mr r3, r31
    bl fn_80341EE4
lbl_fn_80339760_00001500:
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8033AB88
    b lbl_fn_80339760_00001AF8
lbl_fn_80339760_00001514:
    lbz r0, 0x1644(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80339760_00001524
    bl fn_803441AC
lbl_fn_80339760_00001524:
    lwz r5, 0x14b8(r31)
    mr r3, r31
    lwz r4, 0x14c0(r31)
    lwz r0, 0xd1c(r31)
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    stw r5, 0x14b8(r31)
    stw r4, 0x14c0(r31)
    stw r0, 0x14b0(r31)
    bl fn_803449AC
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80339760_00001568
    bl fn_8000D9E8
    bl fn_8000DCF4
    stw r3, 0x14b0(r31)
    stw r3, 0xd1c(r31)
lbl_fn_80339760_00001568:
    bl fn_80121F00
    li r4, 0x8c
    bl fn_80370A78
    cmpwi r3, 0x0
    beq lbl_fn_80339760_00001720
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xd
    bne lbl_fn_80339760_000015CC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_80885260
    mr r3, r31
    li r4, 0x3e
    li r5, 0x1
    bl fn_8034441C
    lfs f1, lbl_80885260
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80339F5C
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x14b4(r31)
    stw r0, 0x14b8(r31)
    b lbl_fn_80339760_0000163C
lbl_fn_80339760_000015CC:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    mr r3, r31
    bl fn_80341EE4
    mr r3, r31
    bl fn_80341E14
    mr r3, r31
    bl fn_80344BB4
    bl fn_8000D9E8
    bl fn_802A36B0
    mr r29, r3
    b lbl_fn_80339760_00001634
lbl_fn_80339760_00001600:
    mr r3, r29
    bl fn_80267B28
    cmpwi r3, 0x53
    bne lbl_fn_80339760_00001628
    mr r3, r29
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_80339760_00001628
    mr r3, r29
    bl fn_8015ECC4
lbl_fn_80339760_00001628:
    mr r3, r29
    bl fn_802A4094
    mr r29, r3
lbl_fn_80339760_00001634:
    cmpwi r29, 0x0
    bne lbl_fn_80339760_00001600
lbl_fn_80339760_0000163C:
    bl fn_80121F00
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80339760_00001720
    bl fn_800F7FA0
    addi r4, r31, 0x1610
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    bl fn_800F7FA0
    addi r4, r31, 0x1610
    li r5, 0x0
    bl fn_800F7FA8
    lfs f1, lbl_80885238
    addi r3, r1, 0x8
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f1, lbl_80885238
    mr r29, r3
    addi r3, r1, 0x14
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    mr r30, r3
    bl fn_800F7FA0
    lfs f1, lbl_80885264
    mr r6, r30
    mr r7, r29
    addi r4, r31, 0x1610
    addi r5, r31, 0xb0
    li r8, -0x1
    li r9, -0x1
    li r10, 0x1
    bl fn_80276AE4
    bl fn_80121F00
    li r4, 0x38c
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r3, 0x14c4(r31)
    bl fn_800F52F0
    bl fn_8012D180
    lfs f31, lbl_80885260
    lwz r3, 0x14c4(r31)
    bl fn_800F52F0
    stfs f31, 0x228(r3)
    lwz r3, 0x14c4(r31)
    bl fn_8000DD0C
    lis r4, lbl_8074A4C0@ha
    li r5, 0x0
    addi r4, r4, lbl_8074A4C0@l
    addi r4, r4, 0x2ea
    bl fn_8009373C
lbl_fn_80339760_00001720:
    addi r3, r31, 0x7d4
    bl fn_8029F3AC
    lfs f0, lbl_80885254
    fcmpo cr0, f1, f0
    bge lbl_fn_80339760_00001740
    li r0, 0x2
    stw r0, 0x1558(r31)
    b lbl_fn_80339760_00001768
lbl_fn_80339760_00001740:
    addi r3, r31, 0x7d4
    bl fn_8029F3AC
    lfs f0, lbl_80885268
    fcmpo cr0, f1, f0
    bge lbl_fn_80339760_00001760
    li r0, 0x1
    stw r0, 0x1558(r31)
    b lbl_fn_80339760_00001768
lbl_fn_80339760_00001760:
    li r0, 0x0
    stw r0, 0x1558(r31)
lbl_fn_80339760_00001768:
    lwz r0, 0x1558(r31)
    cmpwi r0, 0x1
    ble lbl_fn_80339760_00001784
    lfs f1, lbl_8088526C
    addi r3, r31, 0x7d4
    bl fn_80265804
    b lbl_fn_80339760_000017A8
lbl_fn_80339760_00001784:
    cmpwi r0, 0x0
    ble lbl_fn_80339760_0000179C
    lfs f1, lbl_80885270
    addi r3, r31, 0x7d4
    bl fn_80265804
    b lbl_fn_80339760_000017A8
lbl_fn_80339760_0000179C:
    lfs f1, lbl_80885238
    addi r3, r31, 0x7d4
    bl fn_80265804
lbl_fn_80339760_000017A8:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80339760_00001860
    lwz r3, 0x14c4(r31)
    bl fn_800F52F0
    lfs f1, 0x228(r3)
    lfs f0, lbl_80885260
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80339760_00001860
    lbz r0, 0x14c8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80339760_00001834
    lwz r3, 0x14c4(r31)
    bl fn_80267B28
    cmpwi r3, 0x1e
    bne lbl_fn_80339760_00001808
    mr r3, r31
    li r4, 0x77
    li r5, 0x1
    bl fn_8034472C
    li r0, 0x0
    stb r0, 0x14c8(r31)
    b lbl_fn_80339760_00001860
lbl_fn_80339760_00001808:
    lwz r3, 0x14c4(r31)
    bl fn_80267B28
    cmpwi r3, 0x1d
    beq lbl_fn_80339760_00001860
    mr r3, r31
    li r4, 0x75
    li r5, 0x1
    bl fn_8034472C
    li r0, 0x0
    stb r0, 0x14c8(r31)
    b lbl_fn_80339760_00001860
lbl_fn_80339760_00001834:
    lwz r3, 0x14c4(r31)
    bl fn_80267B28
    cmpwi r3, 0x1d
    bne lbl_fn_80339760_00001860
    lwz r3, 0x14c4(r31)
    bl fn_80339F6C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x179a
    bne lbl_fn_80339760_00001860
    li r0, 0x1
    stb r0, 0x14c8(r31)
lbl_fn_80339760_00001860:
    bl fn_8000D9E8
    bl fn_8000DCF4
    lwz r0, 0xd18(r31)
    li r30, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80339760_00001884
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80339760_000018A0
lbl_fn_80339760_00001884:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    mr r3, r31
    li r4, 0x1
    bl fn_80339F74
    b lbl_fn_80339760_00001A5C
lbl_fn_80339760_000018A0:
    beq lbl_fn_80339760_0000197C
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0xb
    bgt lbl_fn_80339760_00001968
    lis r3, jumptable_80789330@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80789330@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_8033C490
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_8033D040
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_8033EF90
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_8033D750
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_8033E058
    li r30, 0x1
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_80340E54
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_8034100C
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_803412AC
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_8033DB8C
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_8033F7FC
    li r30, 0x1
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_803405C0
    li r30, 0x1
    b lbl_fn_80339760_0000197C
    mr r3, r31
    bl fn_80341BEC
    b lbl_fn_80339760_0000197C
lbl_fn_80339760_00001968:
    mr r3, r31
    bl fn_8033C3D8
    mr r3, r31
    bl fn_8033A7A0
    li r30, 0x1
lbl_fn_80339760_0000197C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80339760_000019C0
    lwz r3, 0x14b0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80339760_000019CC
    bl fn_8000DD0C
    lis r5, lbl_8074A4C0@ha
    lis r6, lbl_807C7030@ha
    addi r5, r5, lbl_8074A4C0@l
    lfs f1, lbl_80885274
    mr r4, r3
    addi r3, r31, 0x10d8
    addi r5, r5, 0x2f6
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    b lbl_fn_80339760_000019CC
lbl_fn_80339760_000019C0:
    lfs f1, lbl_80885274
    addi r3, r31, 0x10d8
    bl fn_80129A48
lbl_fn_80339760_000019CC:
    lwz r3, 0x58c(r31)
    li r4, 0x1
    subi r0, r3, 0x6
    cmplwi r0, 0x4
    bgt lbl_fn_80339760_000019E4
    li r4, 0x0
lbl_fn_80339760_000019E4:
    mr r3, r31
    bl fn_80339F74
    bl fn_80121F00
    bl fn_80373148
    mr r28, r3
    bl fn_8000D9E8
    bl fn_8000DCF4
    bl fn_8013C38C
    lfs f2, 0x4(r3)
    lfs f1, 0x52c(r31)
    lfs f0, lbl_80885278
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80339760_00001A24
    li r29, 0x3
    b lbl_fn_80339760_00001A28
lbl_fn_80339760_00001A24:
    li r29, 0x0
lbl_fn_80339760_00001A28:
    mr r3, r28
    bl fn_80339F7C
    cmpw r29, r3
    beq lbl_fn_80339760_00001A5C
    mr r3, r28
    mr r4, r29
    li r5, 0xf
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    mr r3, r28
    mr r4, r29
    bl fn_80339F84
lbl_fn_80339760_00001A5C:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8033AB88
    lfs f1, lbl_8088527C
    mr r3, r31
    lfs f2, lbl_80885280
    mr r5, r30
    li r4, 0x64
    bl fn_80344454
    lwz r0, 0x1760(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80339760_00001AF8
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x4c
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_80339760_00001AB8
    mr r3, r31
    bl fn_80342004
lbl_fn_80339760_00001AB8:
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x44
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_80339760_00001AD8
    mr r3, r31
    bl fn_8034228C
lbl_fn_80339760_00001AD8:
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x4d
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_80339760_00001AF8
    mr r3, r31
    bl fn_803435B8
lbl_fn_80339760_00001AF8:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
