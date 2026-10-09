#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_15(void);
extern void _savegpr_15(void);
extern void fn_800185B4(void);
extern void fn_80018608(void);
extern void fn_8003EA3C(void);
extern void fn_8003F030(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097D7C(void);
extern void fn_800DC6B4(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_800FB4B0(void);
extern void fn_801070C8(void);
extern void fn_80107168(void);
extern void fn_80107208(void);
extern void fn_80108C10(void);
extern void fn_801092C8(void);
extern void fn_8010CCD8(void);
extern void fn_8012F034(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_80192758(void);
extern void fn_801B2EDC(void);
extern void fn_801BDE68(void);
extern void fn_801BDE98(void);
extern void fn_80219344(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8021A888(void);
extern void fn_8021A8D0(void);
extern void fn_8021A918(void);
extern void fn_8021A984(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803750E4(void);
extern void fn_80375184(void);
extern void fn_803761AC(void);
extern void fn_803EA77C(void);
extern void fn_8054A340(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8073B3C8[];
extern u8 lbl_8073B410[];
extern u8 lbl_8073B428[];
extern u8 lbl_8073B5D0[];
extern u8 lbl_80781720[];
extern u8 lbl_80781740[];
extern u8 lbl_807818D4[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7C68[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F100;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F8A0;
extern u32 lbl_808825E4;
extern u32 lbl_808825E8;
extern u32 lbl_808825F4;
extern u32 lbl_80882600;
extern u32 lbl_80882608;
extern u32 lbl_80882618;
extern u32 lbl_8088261C;
extern u32 lbl_80882620;
extern u32 lbl_80882624;
extern u32 lbl_80882628;
extern u32 lbl_8088262C;
extern u32 lbl_80882644;
extern u32 lbl_80882648;
extern u32 lbl_8088264C;
extern u32 lbl_80882650;
extern u32 lbl_80882654;
extern u32 lbl_80882658;
extern u32 lbl_8088265C;
extern u32 lbl_80882660;
extern u32 lbl_80882664;
extern u32 lbl_80882668;
extern u32 lbl_8088266C;
extern u32 lbl_80882670;
extern u32 lbl_80882674;
extern u32 lbl_80882678;
extern u32 lbl_8088267C;
extern u32 lbl_80882680;
extern u32 lbl_80882684;
extern u32 lbl_80882688;
extern u32 lbl_8088268C;
extern u32 lbl_80882690;

/* Function declarations */
void fn_801BE630(void);
void fn_801BFF28(void);

asm void fn_801BE630(void)
{
    nofralloc
    stwu r1, -0x6c0(r1)
    mflr r0
    stw r0, 0x6c4(r1)
    addi r11, r1, 0x600
    stfd f31, 0x6b0(r1)
    psq_st f31, 0x6b8(r1), 0, 0
    stfd f30, 0x6a0(r1)
    psq_st f30, 0x6a8(r1), 0, 0
    stfd f29, 0x690(r1)
    psq_st f29, 0x698(r1), 0, 0
    stfd f28, 0x680(r1)
    psq_st f28, 0x688(r1), 0, 0
    stfd f27, 0x670(r1)
    psq_st f27, 0x678(r1), 0, 0
    stfd f26, 0x660(r1)
    psq_st f26, 0x668(r1), 0, 0
    stfd f25, 0x650(r1)
    psq_st f25, 0x658(r1), 0, 0
    stfd f24, 0x640(r1)
    psq_st f24, 0x648(r1), 0, 0
    stfd f23, 0x630(r1)
    psq_st f23, 0x638(r1), 0, 0
    stfd f22, 0x620(r1)
    psq_st f22, 0x628(r1), 0, 0
    stfd f21, 0x610(r1)
    psq_st f21, 0x618(r1), 0, 0
    stfd f20, 0x600(r1)
    psq_st f20, 0x608(r1), 0, 0
    bl _savegpr_15
    lbz r0, 0x1d(r3)
    lis r4, 0x4330
    lwz r5, 0x4(r3)
    mr r31, r3
    cmpwi r0, 0x0
    stw r4, 0x5a0(r1)
    lwz r19, 0x638(r5)
    addi r20, r5, 0xb0
    stw r4, 0x5a8(r1)
    li r18, 0x0
    li r21, 0x0
    bne lbl_fn_801BE630_0000011C
    lwz r4, 0x4(r3)
    lwz r0, 0x2dc(r4)
    cmpwi r0, 0x6b
    beq lbl_fn_801BE630_000000D8
    cmpwi r0, 0x6a
    beq lbl_fn_801BE630_000000E0
    cmpwi r0, 0x67
    beq lbl_fn_801BE630_000000E8
    cmpwi r0, 0x17a
    beq lbl_fn_801BE630_000000F0
    cmpwi r0, 0x17b
    beq lbl_fn_801BE630_000000F8
    b lbl_fn_801BE630_00000100
lbl_fn_801BE630_000000D8:
    lfs f0, lbl_80882644
    b lbl_fn_801BE630_00000104
lbl_fn_801BE630_000000E0:
    lfs f0, lbl_80882648
    b lbl_fn_801BE630_00000104
lbl_fn_801BE630_000000E8:
    lfs f0, lbl_8088264C
    b lbl_fn_801BE630_00000104
lbl_fn_801BE630_000000F0:
    lfs f0, lbl_80882650
    b lbl_fn_801BE630_00000104
lbl_fn_801BE630_000000F8:
    lfs f0, lbl_80882654
    b lbl_fn_801BE630_00000104
lbl_fn_801BE630_00000100:
    lfs f0, lbl_808825E4
lbl_fn_801BE630_00000104:
    lfs f3, 0x234(r20)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801BE630_00000130
    li r21, 0x1
    b lbl_fn_801BE630_00000130
lbl_fn_801BE630_0000011C:
    lwz r4, lbl_8087EFA8
    lfs f0, 0x18(r3)
    lfs f3, 0x3a4(r4)
    fadds f0, f0, f3
    stfs f0, 0x18(r3)
lbl_fn_801BE630_00000130:
    lwz r4, lbl_8087F0A8
    li r22, 0x0
    lwz r0, 0x2c4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_00000434
    lbz r0, 0x1d(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801BE630_00000434
    lbz r0, 0x2(r19)
    cmpwi r0, 0x2
    bne lbl_fn_801BE630_00000434
    lwz r4, 0x14(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801BE630_00000434
    lwz r0, 0x4(r3)
    cmplw r4, r0
    beq lbl_fn_801BE630_00000434
    lwz r7, 0x38(r4)
    li r5, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_801BE630_000001A0
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_801BE630_000001A0
    li r3, 0x1
lbl_fn_801BE630_000001A0:
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_000001BC
    lwz r3, 0x7e0(r4)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_801BE630_000001BC
    li r0, 0x1
lbl_fn_801BE630_000001BC:
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_000001F0
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801BE630_000001E4
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_801BE630_000001E4
    li r3, 0x1
lbl_fn_801BE630_000001E4:
    cmpwi r3, 0x0
    bne lbl_fn_801BE630_000001F0
    li r5, 0x1
lbl_fn_801BE630_000001F0:
    cmpwi r5, 0x0
    beq lbl_fn_801BE630_00000434
    lwz r12, 0x0(r4)
    addi r3, r1, 0x238
    li r5, 0x2
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x238
    lfs f2, 0x240(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x22c
    psq_st f1, 0x8(r31), 0, 0
    lwz r4, 0x4(r31)
    stfs f2, 0x10(r31)
    lfs f0, lbl_808825E4
    lfs f6, 0x240(r1)
    lfs f5, 0x530(r4)
    lfs f3, 0x528(r4)
    fsubs f5, f6, f5
    lfs f4, 0x238(r1)
    stfs f0, 0x230(r1)
    fsubs f0, f4, f3
    stfs f5, 0x234(r1)
    stfs f0, 0x22c(r1)
    bl fn_805F9920
    lfs f0, lbl_80882658
    fcmpo cr0, f1, f0
    ble lbl_fn_801BE630_00000410
    lfs f2, 0x234(r1)
    addi r15, r1, 0x22c
    lfs f0, lbl_80882624
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801BE630_000002A4
    lfs f3, 0x22c(r1)
    lfs f0, lbl_808825E4
    fcmpo cr0, f3, f0
    ble lbl_fn_801BE630_00000298
    lfs f0, lbl_80882628
    b lbl_fn_801BE630_0000029C
lbl_fn_801BE630_00000298:
    lfs f0, lbl_8088262C
lbl_fn_801BE630_0000029C:
    stfs f0, 0x5c(r1)
    b lbl_fn_801BE630_000002B4
lbl_fn_801BE630_000002A4:
    lfs f1, 0x22c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x5c(r1)
lbl_fn_801BE630_000002B4:
    lfs f0, 0x5c(r1)
    addi r3, r1, 0x3c8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808825E4
    addi r4, r1, 0x64
    lfs f4, 0x3d0(r1)
    mr r5, r4
    lfs f5, 0x3cc(r1)
    addi r3, r1, 0x388
    lfs f6, 0x3c8(r1)
    lfs f7, 0x3e0(r1)
    lfs f8, 0x3dc(r1)
    lfs f9, 0x3d8(r1)
    lfs f10, 0x3f0(r1)
    lfs f11, 0x3ec(r1)
    lfs f12, 0x3e8(r1)
    lfs f13, 0x3f4(r1)
    lfs f21, 0x3e4(r1)
    lfs f22, 0x3d4(r1)
    lfs f0, lbl_808825E8
    psq_l f1, 0x0(r15), 0, 0
    lfs f2, 0x234(r1)
    stfs f3, 0x3b8(r1)
    stfs f3, 0x3bc(r1)
    stfs f3, 0x3c0(r1)
    stfs f0, 0x3c4(r1)
    stfs f6, 0x94(r1)
    stfs f5, 0x98(r1)
    stfs f4, 0x9c(r1)
    stfs f6, 0x388(r1)
    stfs f5, 0x38c(r1)
    stfs f4, 0x390(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f9, 0x398(r1)
    stfs f8, 0x39c(r1)
    stfs f7, 0x3a0(r1)
    stfs f12, 0x7c(r1)
    stfs f11, 0x80(r1)
    stfs f10, 0x84(r1)
    stfs f12, 0x3a8(r1)
    stfs f11, 0x3ac(r1)
    stfs f10, 0x3b0(r1)
    stfs f22, 0x70(r1)
    stfs f21, 0x74(r1)
    stfs f13, 0x78(r1)
    stfs f22, 0x394(r1)
    stfs f21, 0x3a4(r1)
    stfs f13, 0x3b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x6c(r1)
    bl fn_805F9750
    lfs f2, 0x6c(r1)
    lfs f0, lbl_80882624
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801BE630_000003D0
    lfs f3, 0x68(r1)
    lfs f0, lbl_808825E4
    fcmpo cr0, f3, f0
    ble lbl_fn_801BE630_000003C0
    lfs f0, lbl_80882628
    b lbl_fn_801BE630_000003C4
lbl_fn_801BE630_000003C0:
    lfs f0, lbl_8088262C
lbl_fn_801BE630_000003C4:
    fneg f0, f0
    stfs f0, 0x58(r1)
    b lbl_fn_801BE630_000003E4
lbl_fn_801BE630_000003D0:
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x58(r1)
lbl_fn_801BE630_000003E4:
    lfs f0, lbl_808825E4
    addi r3, r1, 0x58
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    psq_st f1, 0x0(r15), 0, 0
    stfs f2, 0x234(r1)
    frsp f2, f2
    lwz r3, 0x4(r31)
    stfs f0, 0x60(r1)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
lbl_fn_801BE630_00000410:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_801BE630_00000430
    lwz r3, 0x14(r31)
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 20
    beq lbl_fn_801BE630_00000434
lbl_fn_801BE630_00000430:
    li r22, 0x1
lbl_fn_801BE630_00000434:
    cmpwi r21, 0x0
    beq lbl_fn_801BE630_000017D8
    lwz r3, 0x4(r31)
    bl fn_8016DA4C
    li r15, 0x1
    stb r15, 0x1d(r31)
    lwz r0, 0x4(r19)
    cmpwi r0, 0x6c2
    bne lbl_fn_801BE630_000004C4
    lwz r3, lbl_8087F430
    li r4, 0x38d
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_801BE630_0000048C
    lwz r3, lbl_8087F430
    li r4, 0x38e
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r3, 0x4(r31)
    lfs f0, lbl_808825E4
    stfs f0, 0x9fc(r3)
lbl_fn_801BE630_0000048C:
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_000004BC
    lwz r4, 0x4(r31)
    mr r5, r19
    bl fn_800185B4
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_000004BC
    lwz r3, lbl_8087EE68
    mr r5, r19
    lwz r4, 0x4(r31)
    bl fn_80018608
lbl_fn_801BE630_000004BC:
    li r3, 0x1
    b lbl_fn_801BE630_00001880
lbl_fn_801BE630_000004C4:
    lwz r4, 0x4(r31)
    addi r16, r1, 0x220
    lfs f0, lbl_80882620
    addi r3, r1, 0x214
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r16), 0, 0
    lfs f3, 0x224(r1)
    stfs f2, 0x228(r1)
    fadds f6, f3, f0
    lfs f0, 0x220(r1)
    stfs f6, 0x224(r1)
    lfs f5, 0x10(r31)
    lfs f4, 0xc(r31)
    lfs f3, 0x8(r31)
    fsubs f5, f5, f2
    fsubs f4, f4, f6
    fsubs f0, f3, f0
    stfs f5, 0x21c(r1)
    stfs f0, 0x214(r1)
    stfs f4, 0x218(r1)
    bl fn_805F9940
    fmr f21, f1
    addi r3, r1, 0x214
    mr r4, r3
    bl fn_805F98D0
    lbz r0, 0x2(r19)
    extsb r0, r0
    cmpwi r0, 0x2
    beq lbl_fn_801BE630_00000554
    cmpwi r0, 0x1
    beq lbl_fn_801BE630_00000554
    cmpwi r0, 0x6
    beq lbl_fn_801BE630_00000554
    cmpwi r0, 0x9
    bne lbl_fn_801BE630_00000DE4
lbl_fn_801BE630_00000554:
    lwz r3, 0x4(r19)
    subi r0, r3, 0x179b
    cmplwi r0, 0x3
    ble lbl_fn_801BE630_000005E8
    cmpwi r3, 0x179a
    bne lbl_fn_801BE630_00000D1C
    lbz r0, 0x1e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_00000580
    addi r3, r31, 0x8
    b lbl_fn_801BE630_00000588
lbl_fn_801BE630_00000580:
    lwz r3, 0x14(r31)
    addi r3, r3, 0x528
lbl_fn_801BE630_00000588:
    psq_l f1, 0x0(r3), 0, 0
    addi r15, r1, 0x208
    lfs f2, 0x8(r3)
    lwz r16, lbl_8087F048
    psq_st f1, 0x0(r15), 0, 0
    mr r3, r16
    stfs f2, 0x210(r1)
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    lis r8, lbl_807C7030@ha
    mr r6, r3
    stw r0, 0xc(r1)
    mr r3, r16
    lfs f1, lbl_808825E4
    mr r5, r19
    lwz r4, 0x4(r31)
    mr r7, r15
    lfs f2, lbl_808825E8
    addi r8, r8, lbl_807C7030@l
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_801BE630_0000158C
lbl_fn_801BE630_000005E8:
    lfs f4, 0x21c(r1)
    addi r3, r1, 0x1fc
    lfs f3, 0x214(r1)
    lfs f0, lbl_808825E4
    stfs f3, 0x1fc(r1)
    stfs f0, 0x200(r1)
    stfs f4, 0x204(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80882624
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801BE630_00000628
    addi r3, r1, 0x1fc
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801BE630_00000628:
    lfs f2, 0x204(r1)
    addi r3, r1, 0x1fc
    lfs f0, lbl_80882624
    addi r15, r1, 0x1a8
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r15), 0, 0
    frsp f3, f3
    stfs f2, 0x1b0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801BE630_00000678
    lfs f3, 0x1a8(r1)
    lfs f0, lbl_808825E4
    fcmpo cr0, f3, f0
    ble lbl_fn_801BE630_0000066C
    lfs f0, lbl_80882628
    b lbl_fn_801BE630_00000670
lbl_fn_801BE630_0000066C:
    lfs f0, lbl_8088262C
lbl_fn_801BE630_00000670:
    stfs f0, 0x50(r1)
    b lbl_fn_801BE630_0000068C
lbl_fn_801BE630_00000678:
    frsp f2, f2
    lfs f1, 0x1a8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_801BE630_0000068C:
    lfs f0, 0x50(r1)
    addi r3, r1, 0x318
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808825E4
    addi r4, r1, 0x40
    lfs f22, 0x320(r1)
    mr r5, r4
    lfs f21, 0x31c(r1)
    addi r3, r1, 0x348
    lfs f13, 0x318(r1)
    lfs f12, 0x330(r1)
    lfs f11, 0x32c(r1)
    lfs f10, 0x328(r1)
    lfs f9, 0x340(r1)
    lfs f8, 0x33c(r1)
    lfs f7, 0x338(r1)
    lfs f6, 0x344(r1)
    lfs f5, 0x334(r1)
    lfs f4, 0x324(r1)
    lfs f0, lbl_808825E8
    psq_l f1, 0x0(r15), 0, 0
    lfs f2, 0x1b0(r1)
    stfs f3, 0x378(r1)
    stfs f3, 0x37c(r1)
    stfs f3, 0x380(r1)
    stfs f0, 0x384(r1)
    stfs f13, 0x10(r1)
    stfs f21, 0x14(r1)
    stfs f22, 0x18(r1)
    stfs f13, 0x348(r1)
    stfs f21, 0x34c(r1)
    stfs f22, 0x350(r1)
    stfs f10, 0x1c(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f10, 0x358(r1)
    stfs f11, 0x35c(r1)
    stfs f12, 0x360(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f7, 0x368(r1)
    stfs f8, 0x36c(r1)
    stfs f9, 0x370(r1)
    stfs f4, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f4, 0x354(r1)
    stfs f5, 0x364(r1)
    stfs f6, 0x374(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    lfs f0, lbl_80882624
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801BE630_000007A8
    lfs f3, 0x44(r1)
    lfs f0, lbl_808825E4
    fcmpo cr0, f3, f0
    ble lbl_fn_801BE630_00000798
    lfs f0, lbl_80882628
    b lbl_fn_801BE630_0000079C
lbl_fn_801BE630_00000798:
    lfs f0, lbl_8088262C
lbl_fn_801BE630_0000079C:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_801BE630_000007BC
lbl_fn_801BE630_000007A8:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_801BE630_000007BC:
    addi r3, r1, 0x4c
    lfs f4, lbl_808825E4
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8073B428@ha
    psq_st f1, 0x0(r15), 0, 0
    fmr f2, f4
    lfs f3, lbl_8088265C
    lfs f0, 0x1ac(r1)
    stfs f2, 0x1b0(r1)
    fadds f1, f3, f0
    lfd f2, lbl_8073B428@l(r3)
    stfs f4, 0x54(r1)
    bl fn_8068AEA8
    frsp f23, f1
    lfs f0, lbl_8088265C
    fcmpo cr0, f23, f0
    ble lbl_fn_801BE630_00000808
    lfs f0, lbl_8088261C
    fsubs f23, f23, f0
lbl_fn_801BE630_00000808:
    lfs f0, lbl_80882660
    fcmpo cr0, f23, f0
    bge lbl_fn_801BE630_0000081C
    lfs f0, lbl_8088261C
    fadds f23, f23, f0
lbl_fn_801BE630_0000081C:
    lbz r0, 0x1e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_00000C50
    psq_l f1, 0x8(r31), 0, 0
    addi r3, r1, 0x54c
    lfs f2, 0x10(r31)
    stfs f2, 0x554(r1)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_80680CF8
    lis r26, 0x4178
    lis r25, lbl_8073B3C8@ha
    addi r0, r26, 0x749f
    lfs f0, lbl_80882664
    mulhw r0, r0, r3
    lfd f6, lbl_8073B3C8@l(r25)
    lfs f4, lbl_80882618
    fadds f0, f23, f0
    lfs f3, lbl_80882668
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x488
    xoris r0, r0, 0x8000
    stw r0, 0x5a4(r1)
    lfd f5, 0x5a0(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fnmsubs f1, f3, f4, f0
    bl fn_805F8E70
    addi r15, r1, 0x488
    bl fn_80680CF8
    addi r0, r26, 0x749f
    lfs f0, lbl_808825E4
    mulhw r0, r0, r3
    lfd f6, lbl_8073B3C8@l(r25)
    stfs f0, 0x16c(r1)
    addi r6, r1, 0x16c
    lfs f5, lbl_80882618
    addi r4, r1, 0x178
    srawi r0, r0, 8
    stfs f0, 0x170(r1)
    srwi r5, r0, 31
    lfs f4, lbl_80882608
    add r0, r0, r5
    psq_l f1, 0x0(r6), 0, 0
    mulli r0, r0, 0x3e9
    lfs f3, lbl_80882620
    psq_st f1, 0x0(r4), 0, 0
    mr r5, r4
    subf r0, r0, r3
    mr r3, r15
    xoris r0, r0, 0x8000
    stw r0, 0x5ac(r1)
    lfd f0, 0x5a8(r1)
    fsubs f0, f0, f6
    fdivs f0, f0, f5
    fmadds f2, f4, f0, f3
    stfs f2, 0x174(r1)
    stfs f2, 0x180(r1)
    bl fn_805F93C0
    lfs f4, 0x204(r1)
    addi r4, r1, 0x19c
    lfs f5, lbl_8088264C
    addi r3, r1, 0x528
    lfs f3, 0x200(r1)
    fmuls f6, f4, f5
    lfs f4, 0x554(r1)
    fmuls f7, f3, f5
    lfs f0, 0x1fc(r1)
    lfs f3, 0x54c(r1)
    fmuls f5, f0, f5
    lfs f0, 0x550(r1)
    fsubs f4, f4, f6
    stfs f5, 0x184(r1)
    fsubs f8, f0, f7
    lfs f0, 0x180(r1)
    fsubs f9, f3, f5
    lfs f3, 0x17c(r1)
    fadds f2, f4, f0
    lfs f0, 0x178(r1)
    fadds f3, f8, f3
    stfs f7, 0x188(r1)
    fadds f0, f9, f0
    stfs f3, 0x1a0(r1)
    stfs f0, 0x19c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f8, 0x194(r1)
    stfs f4, 0x198(r1)
    stfs f2, 0x1a4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x530(r1)
    bl fn_80680CF8
    addi r0, r26, 0x749f
    lfs f0, lbl_8088266C
    mulhw r0, r0, r3
    lfd f6, lbl_8073B3C8@l(r25)
    lfs f4, lbl_80882618
    fadds f0, f23, f0
    lfs f3, lbl_80882668
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x458
    xoris r0, r0, 0x8000
    stw r0, 0x5a4(r1)
    lfd f5, 0x5a0(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fnmsubs f1, f3, f4, f0
    bl fn_805F8E70
    addi r15, r1, 0x458
    bl fn_80680CF8
    addi r0, r26, 0x749f
    lfs f0, lbl_808825E4
    mulhw r0, r0, r3
    lfd f6, lbl_8073B3C8@l(r25)
    stfs f0, 0x130(r1)
    addi r6, r1, 0x130
    lfs f5, lbl_80882618
    addi r4, r1, 0x13c
    srawi r0, r0, 8
    stfs f0, 0x134(r1)
    srwi r5, r0, 31
    lfs f4, lbl_80882608
    add r0, r0, r5
    psq_l f1, 0x0(r6), 0, 0
    mulli r0, r0, 0x3e9
    lfs f3, lbl_80882620
    psq_st f1, 0x0(r4), 0, 0
    mr r5, r4
    subf r0, r0, r3
    mr r3, r15
    xoris r0, r0, 0x8000
    stw r0, 0x5ac(r1)
    lfd f0, 0x5a8(r1)
    fsubs f0, f0, f6
    fdivs f0, f0, f5
    fmadds f2, f4, f0, f3
    stfs f2, 0x138(r1)
    stfs f2, 0x144(r1)
    bl fn_805F93C0
    lfs f4, 0x204(r1)
    addi r4, r1, 0x160
    lfs f5, lbl_8088264C
    addi r3, r1, 0x534
    lfs f3, 0x200(r1)
    fmuls f6, f4, f5
    lfs f4, 0x554(r1)
    fmuls f7, f3, f5
    lfs f0, 0x1fc(r1)
    lfs f3, 0x54c(r1)
    fmuls f5, f0, f5
    lfs f0, 0x550(r1)
    fsubs f4, f4, f6
    stfs f5, 0x148(r1)
    fsubs f8, f0, f7
    lfs f0, 0x144(r1)
    fsubs f9, f3, f5
    lfs f3, 0x140(r1)
    fadds f2, f4, f0
    lfs f0, 0x13c(r1)
    fadds f3, f8, f3
    stfs f7, 0x14c(r1)
    fadds f0, f9, f0
    stfs f3, 0x164(r1)
    stfs f0, 0x160(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x150(r1)
    stfs f9, 0x154(r1)
    stfs f8, 0x158(r1)
    stfs f4, 0x15c(r1)
    stfs f2, 0x168(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x53c(r1)
    bl fn_80680CF8
    addi r0, r26, 0x749f
    lfs f0, lbl_80882670
    mulhw r0, r0, r3
    lfd f6, lbl_8073B3C8@l(r25)
    lfs f4, lbl_80882618
    fsubs f0, f23, f0
    lfs f3, lbl_80882668
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x428
    xoris r0, r0, 0x8000
    stw r0, 0x5a4(r1)
    lfd f5, 0x5a0(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fnmsubs f1, f3, f4, f0
    bl fn_805F8E70
    addi r15, r1, 0x428
    bl fn_80680CF8
    addi r0, r26, 0x749f
    lfs f0, lbl_808825E4
    mulhw r0, r0, r3
    lfd f6, lbl_8073B3C8@l(r25)
    stfs f0, 0xf4(r1)
    addi r6, r1, 0xf4
    lfs f5, lbl_80882618
    addi r4, r1, 0x100
    srawi r0, r0, 8
    stfs f0, 0xf8(r1)
    srwi r5, r0, 31
    lfs f4, lbl_80882608
    add r0, r0, r5
    psq_l f1, 0x0(r6), 0, 0
    mulli r0, r0, 0x3e9
    lfs f3, lbl_80882620
    psq_st f1, 0x0(r4), 0, 0
    mr r5, r4
    subf r0, r0, r3
    mr r3, r15
    xoris r0, r0, 0x8000
    stw r0, 0x5ac(r1)
    lfd f0, 0x5a8(r1)
    fsubs f0, f0, f6
    fdivs f0, f0, f5
    fmadds f2, f4, f0, f3
    stfs f2, 0xfc(r1)
    stfs f2, 0x108(r1)
    bl fn_805F93C0
    lfs f4, 0x204(r1)
    addi r4, r1, 0x124
    lfs f5, lbl_8088264C
    addi r3, r1, 0x540
    lfs f3, 0x200(r1)
    fmuls f6, f4, f5
    lfs f4, 0x554(r1)
    fmuls f7, f3, f5
    lfs f0, 0x1fc(r1)
    lfs f3, 0x54c(r1)
    fmuls f5, f0, f5
    lfs f0, 0x550(r1)
    fsubs f4, f4, f6
    stfs f5, 0x10c(r1)
    fsubs f8, f0, f7
    lfs f0, 0x108(r1)
    fsubs f9, f3, f5
    lfs f3, 0x104(r1)
    fadds f2, f4, f0
    lfs f0, 0x100(r1)
    fadds f3, f8, f3
    stfs f7, 0x110(r1)
    fadds f0, f9, f0
    stfs f3, 0x128(r1)
    stfs f0, 0x124(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x114(r1)
    stfs f9, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f4, 0x120(r1)
    stfs f2, 0x12c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x548(r1)
    b lbl_fn_801BE630_00000C6C
lbl_fn_801BE630_00000C50:
    lwz r3, 0x14(r31)
    addi r4, r1, 0x528
    addi r5, r1, 0x214
    lwz r12, 0x0(r3)
    lwz r12, 0xcc(r12)
    mtctr r12
    bctrl
lbl_fn_801BE630_00000C6C:
    lfs f21, lbl_808825E4
    addi r15, r1, 0x528
    li r17, 0x0
    li r16, 0x0
lbl_fn_801BE630_00000C7C:
    lfs f3, 0x8(r15)
    addi r3, r1, 0x1f0
    lfs f0, 0x228(r1)
    lfs f5, 0x4(r15)
    fsubs f6, f3, f0
    lfs f4, 0x224(r1)
    lfs f3, 0x0(r15)
    lfs f0, 0x220(r1)
    fsubs f4, f5, f4
    stfs f6, 0x1f8(r1)
    fsubs f0, f3, f0
    stfs f4, 0x1f4(r1)
    stfs f0, 0x1f0(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f21
    fmr f22, f1
    ble lbl_fn_801BE630_00000CCC
    addi r3, r1, 0x1f0
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801BE630_00000CCC:
    cmpwi r17, 0x3
    li r9, 0x2002
    bge lbl_fn_801BE630_00000CDC
    ori r9, r9, 0x1000
lbl_fn_801BE630_00000CDC:
    fmr f1, f22
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r31)
    mr r5, r19
    lfs f2, lbl_808825E8
    mr r10, r16
    addi r6, r1, 0x220
    addi r7, r1, 0x1f0
    li r8, 0x0
    bl fn_800F8574
    addi r17, r17, 0x1
    addi r16, r16, 0xf
    cmpwi r17, 0x4
    addi r15, r15, 0xc
    blt lbl_fn_801BE630_00000C7C
    b lbl_fn_801BE630_0000158C
lbl_fn_801BE630_00000D1C:
    cmpwi r22, 0x0
    beq lbl_fn_801BE630_00000DB4
    lfs f1, lbl_808825E4
    li r4, 0x0
    lfs f7, lbl_80882674
    li r0, -0x1
    lfs f6, lbl_80882608
    mr r5, r19
    lfs f5, lbl_80882678
    addi r6, r1, 0x220
    lfs f4, lbl_8088267C
    addi r7, r1, 0x214
    lfs f3, lbl_80882600
    addi r8, r1, 0x500
    stw r4, 0x500(r1)
    li r9, 0x100
    lfs f0, lbl_80882680
    li r10, 0x0
    stfs f1, 0x504(r1)
    lwz r3, lbl_8087F048
    stfs f7, 0x508(r1)
    lfs f2, lbl_808825E8
    stfs f6, 0x50c(r1)
    stfs f5, 0x510(r1)
    stfs f4, 0x514(r1)
    stfs f3, 0x518(r1)
    stw r4, 0x51c(r1)
    stw r0, 0x520(r1)
    lwz r0, 0x14(r31)
    stw r0, 0x500(r1)
    stfs f0, 0x510(r1)
    stfs f1, 0x518(r1)
    lfs f0, 0x4c(r19)
    fdivs f0, f21, f0
    stfs f0, 0x514(r1)
    lwz r4, 0x4(r31)
    bl fn_800F8574
    b lbl_fn_801BE630_0000158C
lbl_fn_801BE630_00000DB4:
    lwz r3, lbl_8087F048
    mr r5, r19
    lwz r4, 0x4(r31)
    addi r6, r1, 0x220
    lfs f1, lbl_808825E4
    addi r7, r1, 0x214
    lfs f2, 0x20(r31)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_801BE630_0000158C
lbl_fn_801BE630_00000DE4:
    cmpwi r0, 0x8
    bne lbl_fn_801BE630_00001260
    lwz r3, 0x4(r19)
    subi r0, r3, 0x179a
    cmplwi r0, 0x4
    bgt lbl_fn_801BE630_000011E8
    lwz r3, lbl_8087F408
    li r0, 0x0
    stw r0, 0x558(r1)
    lwz r3, 0x48(r3)
    b lbl_fn_801BE630_00000ED4
lbl_fn_801BE630_00000E10:
    lwz r4, 0x38(r3)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_801BE630_00000E3C
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_801BE630_00000E3C
    li r7, 0x1
lbl_fn_801BE630_00000E3C:
    cmpwi r7, 0x0
    beq lbl_fn_801BE630_00000E58
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_801BE630_00000E58
    li r6, 0x1
lbl_fn_801BE630_00000E58:
    cmpwi r6, 0x0
    beq lbl_fn_801BE630_00000E8C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801BE630_00000E80
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_801BE630_00000E80
    li r4, 0x1
lbl_fn_801BE630_00000E80:
    cmpwi r4, 0x0
    bne lbl_fn_801BE630_00000E8C
    li r5, 0x1
lbl_fn_801BE630_00000E8C:
    cmpwi r5, 0x0
    beq lbl_fn_801BE630_00000ED0
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_801BE630_00000ED0
    lwz r0, 0x558(r1)
    addi r4, r1, 0x55c
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_801BE630_00000EBC
    stw r3, 0x0(r4)
lbl_fn_801BE630_00000EBC:
    lwz r4, 0x558(r1)
    addi r0, r4, 0x1
    stw r0, 0x558(r1)
    cmplwi r0, 0x10
    bge lbl_fn_801BE630_00000EDC
lbl_fn_801BE630_00000ED0:
    lwz r3, 0x14ac(r3)
lbl_fn_801BE630_00000ED4:
    cmpwi r3, 0x0
    bne lbl_fn_801BE630_00000E10
lbl_fn_801BE630_00000EDC:
    lwz r5, 0x4(r31)
    addi r3, r1, 0x2e8
    lfs f3, lbl_808825E4
    li r4, 0x79
    lfs f0, lbl_808825E8
    stfs f3, 0x1e4(r1)
    stfs f3, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x1e4
    addi r3, r1, 0x2e8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x1e8(r1)
    addi r3, r1, 0x1e4
    lfs f0, lbl_80882684
    mr r4, r3
    fadds f0, f3, f0
    stfs f0, 0x1e8(r1)
    bl fn_805F98D0
    lwz r0, 0x4(r19)
    li r25, 0x4
    cmpwi r0, 0x179a
    bne lbl_fn_801BE630_00000F44
    li r25, 0x6
lbl_fn_801BE630_00000F44:
    lis r10, lbl_8073B410@ha
    lwzu r9, lbl_8073B410@l(r10)
    subi r0, r25, 0x1
    lis r4, lbl_8073B3C8@ha
    lwz r8, 0x4(r10)
    xoris r29, r0, 0x8000
    lwz r7, 0x8(r10)
    lis r3, 0x6666
    lwz r6, 0xc(r10)
    addi r21, r1, 0x55c
    lwz r5, 0x10(r10)
    addi r23, r1, 0x1e4
    lwz r0, 0x14(r10)
    addi r24, r1, 0x1d8
    stw r9, 0x2a0(r1)
    addi r30, r3, 0x6667
    lfs f23, lbl_808825E4
    addi r15, r1, 0x2a0
    stw r8, 0x2a4(r1)
    li r17, 0x0
    lfs f24, lbl_80882674
    li r16, 0x0
    stw r7, 0x2a8(r1)
    li r26, 0x0
    lfs f25, lbl_80882608
    li r27, -0x1
    stw r6, 0x2ac(r1)
    lfs f26, lbl_80882678
    stw r5, 0x2b0(r1)
    lfs f27, lbl_8088267C
    stw r0, 0x2b4(r1)
    lfs f28, lbl_80882600
    lwz r22, 0x558(r1)
    lwz r28, 0x558(r1)
    lfs f29, lbl_80882688
    lfd f30, lbl_8073B3C8@l(r4)
    lfs f31, lbl_808825F4
    lfs f21, lbl_808825E8
    lfs f22, lbl_8088268C
    b lbl_fn_801BE630_00001144
lbl_fn_801BE630_00000FE4:
    cmpwi r28, 0x0
    stw r26, 0x4dc(r1)
    stfs f23, 0x4e0(r1)
    stfs f24, 0x4e4(r1)
    stfs f25, 0x4e8(r1)
    stfs f26, 0x4ec(r1)
    stfs f27, 0x4f0(r1)
    stfs f28, 0x4f4(r1)
    stw r26, 0x4f8(r1)
    stw r27, 0x4fc(r1)
    bne lbl_fn_801BE630_0000101C
    lwz r3, lbl_8087F8A0
    lwz r5, 0x48(r3)
    b lbl_fn_801BE630_00001034
lbl_fn_801BE630_0000101C:
    bl fn_80680CF8
    divwu r0, r3, r22
    mullw r0, r0, r22
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r5, r21, r0
lbl_fn_801BE630_00001034:
    stw r29, 0x5a4(r1)
    xoris r0, r17, 0x8000
    psq_l f1, 0x0(r23), 0, 0
    addi r3, r1, 0x2b8
    lfd f0, 0x5a0(r1)
    li r4, 0x79
    stw r0, 0x5ac(r1)
    lfs f2, 0x1ec(r1)
    fsubs f4, f0, f30
    stw r29, 0x5a4(r1)
    lfd f3, 0x5a8(r1)
    lfd f0, 0x5a0(r1)
    fsubs f3, f3, f30
    stw r5, 0x4dc(r1)
    fsubs f0, f0, f30
    stfs f29, 0x4ec(r1)
    fnmsubs f3, f31, f4, f3
    fmuls f0, f31, f0
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x1e0(r1)
    fdivs f20, f3, f0
    lwz r5, 0x4(r31)
    stfs f23, 0xe8(r1)
    stfs f23, 0xec(r1)
    stfs f21, 0xf0(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xe8
    addi r3, r1, 0x2b8
    mr r5, r4
    bl fn_805F93C0
    fmuls f1, f22, f20
    addi r3, r1, 0x3f8
    addi r4, r1, 0xe8
    bl fn_805F9050
    mr r4, r24
    mr r5, r24
    addi r3, r1, 0x3f8
    bl fn_805F93C0
    bl fn_80680CF8
    mulhw r0, r30, r3
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r4, r0, r3
    lwzx r3, r15, r16
    addi r0, r4, 0xf
    xoris r0, r0, 0x8000
    stw r0, 0x5ac(r1)
    lfd f0, 0x5a8(r1)
    fsubs f0, f0, f30
    stfs f0, 0x4f4(r1)
    bl fn_800DC6B4
    stw r3, 0x4f8(r1)
    mr r5, r19
    lwz r3, lbl_8087F048
    mr r7, r24
    lwz r4, 0x4(r31)
    addi r6, r1, 0x220
    lfs f1, lbl_808825E4
    addi r8, r1, 0x4dc
    lfs f2, lbl_808825E8
    li r9, 0x2
    li r10, 0x0
    bl fn_800F8574
    addi r17, r17, 0x1
    addi r16, r16, 0x4
lbl_fn_801BE630_00001144:
    cmpw r17, r25
    blt lbl_fn_801BE630_00000FE4
    lwz r0, 0x4(r19)
    cmpwi r0, 0x179a
    bne lbl_fn_801BE630_0000158C
    lbz r0, 0x1e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_0000116C
    addi r3, r31, 0x8
    b lbl_fn_801BE630_00001174
lbl_fn_801BE630_0000116C:
    lwz r3, 0x14(r31)
    addi r3, r3, 0x528
lbl_fn_801BE630_00001174:
    psq_l f1, 0x0(r3), 0, 0
    addi r15, r1, 0x1cc
    lfs f2, 0x8(r3)
    lwz r17, lbl_8087F048
    psq_st f1, 0x0(r15), 0, 0
    mr r3, r17
    stfs f2, 0x1d4(r1)
    bl fn_800F8548
    mr r16, r3
    li r3, 0x17a1
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lis r8, lbl_807C7030@ha
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r17
    lfs f1, lbl_808825E4
    mr r6, r16
    lwz r4, 0x4(r31)
    mr r7, r15
    lfs f2, lbl_808825E8
    addi r8, r8, lbl_807C7030@l
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lfs f0, lbl_808825F4
    stfs f0, 0x238(r20)
    b lbl_fn_801BE630_0000158C
lbl_fn_801BE630_000011E8:
    lfs f1, lbl_808825E4
    li r4, 0x0
    lfs f6, lbl_80882674
    li r0, -0x1
    lfs f5, lbl_80882608
    mr r5, r19
    lfs f4, lbl_80882678
    mr r6, r16
    lfs f3, lbl_8088267C
    addi r7, r1, 0x214
    lfs f0, lbl_80882600
    addi r8, r1, 0x4b8
    stw r4, 0x4b8(r1)
    li r9, 0x0
    lwz r3, lbl_8087F048
    li r10, 0x0
    stfs f1, 0x4bc(r1)
    lfs f2, lbl_808825E8
    stfs f6, 0x4c0(r1)
    stfs f5, 0x4c4(r1)
    stfs f4, 0x4c8(r1)
    stfs f3, 0x4cc(r1)
    stfs f0, 0x4d0(r1)
    stw r4, 0x4d4(r1)
    stw r0, 0x4d8(r1)
    lwz r0, 0x14(r31)
    stw r0, 0x4b8(r1)
    lwz r4, 0x4(r31)
    bl fn_800F8574
    b lbl_fn_801BE630_0000158C
lbl_fn_801BE630_00001260:
    lwz r0, 0x4(r19)
    cmpwi r0, 0x177f
    bne lbl_fn_801BE630_000012A4
    lwz r16, lbl_8087F048
    mr r3, r16
    bl fn_800F8548
    stw r15, 0x8(r1)
    mr r6, r3
    mr r3, r16
    mr r5, r19
    lwz r4, 0x4(r31)
    li r8, 0x0
    li r9, 0x1e
    li r10, -0x1
    addi r7, r4, 0x528
    bl fn_800FB4B0
    b lbl_fn_801BE630_00001544
lbl_fn_801BE630_000012A4:
    cmpwi r0, 0x179f
    bne lbl_fn_801BE630_00001390
    lwz r3, lbl_8087F8A0
    lis r8, lbl_807C6B90@ha
    lwz r0, 0x29c(r1)
    li r12, 0x0
    lwz r15, 0x48(r3)
    li r11, -0x1
    clrlwi r0, r0, 4
    mr r4, r19
    stw r12, 0x280(r1)
    mr r5, r15
    mr r6, r15
    addi r3, r1, 0x280
    stw r12, 0x284(r1)
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    stw r12, 0x288(r1)
    li r10, 0x0
    stw r12, 0x28c(r1)
    stw r12, 0x290(r1)
    stw r11, 0x294(r1)
    stw r0, 0x29c(r1)
    stw r11, 0x298(r1)
    bl fn_8003EA3C
    lwz r0, 0xb0(r19)
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_0000136C
    lfs f1, lbl_808825E8
    lis r8, lbl_807C7030@ha
    stfs f1, 0xd8(r1)
    addi r8, r8, lbl_807C7030@l
    lwz r3, lbl_8087F048
    mr r9, r8
    stfs f1, 0xdc(r1)
    addi r7, r15, 0xb0
    addi r10, r1, 0xd8
    li r5, 0x0
    stfs f1, 0xe0(r1)
    li r6, 0x0
    stfs f1, 0xe4(r1)
    lwz r4, 0xb0(r19)
    bl fn_80107168
    lwz r5, 0x4(r31)
    lwz r3, lbl_8087F048
    lwz r4, 0xb0(r19)
    addi r5, r5, 0x528
    lfs f1, lbl_808825E8
    bl fn_80107208
lbl_fn_801BE630_0000136C:
    lwz r0, 0x944(r15)
    lis r3, lbl_8073B3C8@ha
    lfd f3, lbl_8073B3C8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x5a4(r1)
    lfd f0, 0x5a0(r1)
    fsubs f0, f0, f3
    stfs f0, 0x7dc(r15)
    b lbl_fn_801BE630_00001544
lbl_fn_801BE630_00001390:
    lwz r0, 0x27c(r1)
    li r6, 0x0
    li r3, -0x1
    stw r6, 0x260(r1)
    clrlwi r0, r0, 4
    stw r6, 0x264(r1)
    stw r6, 0x268(r1)
    stw r6, 0x26c(r1)
    stw r6, 0x270(r1)
    stw r3, 0x274(r1)
    stw r0, 0x27c(r1)
    stw r3, 0x278(r1)
    lbz r0, 0x1e(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801BE630_000014B8
    lfs f0, lbl_808825E8
    addi r4, r1, 0x1c0
    stw r15, 0x248(r1)
    addi r5, r1, 0x1b4
    stfs f0, 0x24c(r1)
    stfs f0, 0x250(r1)
    stw r6, 0x254(r1)
    stfs f0, 0x258(r1)
    stw r6, 0x25c(r1)
    lwz r3, 0x4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xa4(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001434
    lwz r5, 0x4(r31)
    mr r4, r19
    lwz r6, 0x14(r31)
    addi r3, r1, 0x260
    addi r8, r1, 0x248
    addi r9, r1, 0x1c0
    addi r10, r1, 0x1b4
    li r7, 0x0
    bl fn_8003EA3C
    b lbl_fn_801BE630_0000145C
lbl_fn_801BE630_00001434:
    lis r8, lbl_807C6B90@ha
    lwz r5, 0x4(r31)
    lwz r6, 0x14(r31)
    mr r4, r19
    addi r3, r1, 0x260
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
lbl_fn_801BE630_0000145C:
    lwz r7, 0x14(r31)
    addi r4, r1, 0x260
    lfs f6, lbl_808825E4
    addi r5, r1, 0xc8
    lfs f5, lbl_80882690
    li r8, 0x0
    lfs f4, 0x530(r7)
    li r9, 0x1
    lfs f3, 0x52c(r7)
    lfs f0, 0x528(r7)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0xbc(r1)
    fadds f0, f0, f6
    lwz r3, lbl_8087F048
    stfs f3, 0xcc(r1)
    stfs f0, 0xc8(r1)
    stfs f4, 0xd0(r1)
    stfs f5, 0xc0(r1)
    lwz r6, 0x4(r31)
    stfs f6, 0xc4(r1)
    bl fn_80108C10
    b lbl_fn_801BE630_000014E4
lbl_fn_801BE630_000014B8:
    psq_l f1, 0x8(r31), 0, 0
    addi r6, r1, 0xb0
    lfs f2, 0x10(r31)
    mr r4, r19
    stfs f2, 0xb8(r1)
    addi r3, r1, 0x260
    li r8, 0x0
    psq_st f1, 0x0(r6), 0, 0
    lwz r5, 0x4(r31)
    addi r7, r5, 0x534
    bl fn_8003F030
lbl_fn_801BE630_000014E4:
    lwz r0, 0xb0(r19)
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_00001544
    lfs f1, lbl_808825E8
    addi r10, r1, 0xa0
    stfs f1, 0xa0(r1)
    li r5, 0x0
    lwz r3, lbl_8087F048
    li r6, 0x0
    stfs f1, 0xa4(r1)
    li r7, 0x0
    stfs f1, 0xa8(r1)
    stfs f1, 0xac(r1)
    lwz r9, 0x4(r31)
    lwz r4, 0xb0(r19)
    addi r8, r9, 0x528
    addi r9, r9, 0x534
    bl fn_801070C8
    lwz r5, 0x4(r31)
    lwz r3, lbl_8087F048
    lwz r4, 0xb0(r19)
    addi r5, r5, 0x528
    lfs f1, lbl_808825E8
    bl fn_80107208
lbl_fn_801BE630_00001544:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_0000155C
    cmpwi r0, 0x3
    bne lbl_fn_801BE630_0000158C
lbl_fn_801BE630_0000155C:
    mr r3, r19
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_0000158C
    lwz r3, lbl_8087F430
    li r4, 0x442
    bl fn_80370174
    cmpwi r3, 0x7
    blt lbl_fn_801BE630_0000158C
    lwz r3, lbl_8087F430
    li r4, 0x9c
    bl fn_803750E4
lbl_fn_801BE630_0000158C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001688
    bl fn_803761AC
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001688
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    bl fn_8054A340
    li r4, 0x1
    bl fn_80219344
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001688
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001688
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_000015E0
    cmpwi r0, 0x3
    bne lbl_fn_801BE630_00001688
lbl_fn_801BE630_000015E0:
    lwz r3, 0x50(r3)
    bl fn_80219558
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_801BE630_00001610
    cmpwi r3, 0x1
    beq lbl_fn_801BE630_00001610
    cmpwi r3, 0x6
    beq lbl_fn_801BE630_00001630
    cmpwi r3, 0x4
    beq lbl_fn_801BE630_00001650
    b lbl_fn_801BE630_00001688
lbl_fn_801BE630_00001610:
    mr r3, r19
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001688
    lwz r3, lbl_8087F430
    li r4, 0xe0
    bl fn_803750E4
    b lbl_fn_801BE630_00001688
lbl_fn_801BE630_00001630:
    mr r3, r19
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001688
    lwz r3, lbl_8087F430
    li r4, 0xf5
    bl fn_803750E4
    b lbl_fn_801BE630_00001688
lbl_fn_801BE630_00001650:
    mr r3, r19
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001688
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001688
    lis r4, 0x3
    lwz r5, 0x10d0(r3)
    addi r0, r4, 0x1ce0
    cmpw r5, r0
    blt lbl_fn_801BE630_00001688
    li r4, 0x1c2
    bl fn_803750E4
lbl_fn_801BE630_00001688:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_000016DC
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_000016DC
    lwz r5, 0x4(r31)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    bne lbl_fn_801BE630_000016C8
    lwz r3, lbl_8087F048
    li r4, 0xc
    lwz r6, 0x4(r19)
    li r7, 0x0
    bl fn_801092C8
    b lbl_fn_801BE630_000016DC
lbl_fn_801BE630_000016C8:
    lwz r3, lbl_8087F048
    li r4, 0xd
    lwz r6, 0x4(r19)
    li r7, 0x0
    bl fn_801092C8
lbl_fn_801BE630_000016DC:
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801BE630_00001734
    mr r3, r19
    bl fn_8021A8D0
    cmpwi r3, 0x0
    bne lbl_fn_801BE630_00001708
    mr r3, r19
    bl fn_8021A918
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001734
lbl_fn_801BE630_00001708:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_801BE630_00001734
    lwz r3, lbl_8087F498
    li r4, 0x0
    lfs f1, lbl_808825E8
    li r5, 0x1e
    lfs f2, lbl_80882608
    li r6, 0x1e
    bl fn_803EA77C
lbl_fn_801BE630_00001734:
    mr r3, r19
    bl fn_8021A8D0
    cmpwi r3, 0x0
    bne lbl_fn_801BE630_00001754
    mr r3, r19
    bl fn_8021A918
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001774
lbl_fn_801BE630_00001754:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_00001774
    lwz r15, 0x4(r31)
    mr r4, r15
    bl fn_8010CCD8
    addi r3, r15, 0x7d4
    bl fn_8012F034
lbl_fn_801BE630_00001774:
    lwz r0, 0xac(r19)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_801BE630_000017C4
    lwz r3, 0x4(r31)
    lfs f0, lbl_808825E4
    stfs f0, 0x9fc(r3)
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_000017C4
    lwz r4, 0x4(r31)
    mr r5, r19
    bl fn_800185B4
    cmpwi r3, 0x0
    beq lbl_fn_801BE630_000017C4
    lwz r3, lbl_8087EE68
    mr r5, r19
    lwz r4, 0x4(r31)
    bl fn_80018608
lbl_fn_801BE630_000017C4:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a8(r3)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x12a8(r3)
    b lbl_fn_801BE630_0000187C
lbl_fn_801BE630_000017D8:
    lfs f21, 0x234(r20)
    mr r3, r20
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f21, f1
    cror eq, gt, eq
    bne lbl_fn_801BE630_0000187C
    lwz r0, 0xc0(r19)
    cmpwi r0, 0x0
    bgt lbl_fn_801BE630_0000184C
    lwz r4, 0x4(r31)
    lwz r3, 0x48(r4)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_801BE630_00001844
    lwz r3, 0x638(r4)
    li r0, 0x0
    stw r3, 0x63c(r4)
    stw r0, 0x638(r4)
    lwz r3, 0x4(r31)
    bl fn_8016DA4C
    lwz r3, 0x4(r31)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
lbl_fn_801BE630_00001844:
    li r18, 0x1
    b lbl_fn_801BE630_0000187C
lbl_fn_801BE630_0000184C:
    li r0, 0x1
    stb r0, 0x1c(r31)
    lwz r3, 0x4(r31)
    li r18, 0x1
    lwz r4, 0x638(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801BE630_0000187C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x179a
    bne lbl_fn_801BE630_0000187C
    lfs f0, lbl_808825E4
    stfs f0, 0x9fc(r3)
lbl_fn_801BE630_0000187C:
    mr r3, r18
lbl_fn_801BE630_00001880:
    addi r11, r1, 0x600
    psq_l f31, 0x6b8(r1), 0, 0
    lfd f31, 0x6b0(r1)
    psq_l f30, 0x6a8(r1), 0, 0
    lfd f30, 0x6a0(r1)
    psq_l f29, 0x698(r1), 0, 0
    lfd f29, 0x690(r1)
    psq_l f28, 0x688(r1), 0, 0
    lfd f28, 0x680(r1)
    psq_l f27, 0x678(r1), 0, 0
    lfd f27, 0x670(r1)
    psq_l f26, 0x668(r1), 0, 0
    lfd f26, 0x660(r1)
    psq_l f25, 0x658(r1), 0, 0
    lfd f25, 0x650(r1)
    psq_l f24, 0x648(r1), 0, 0
    lfd f24, 0x640(r1)
    psq_l f23, 0x638(r1), 0, 0
    lfd f23, 0x630(r1)
    psq_l f22, 0x628(r1), 0, 0
    lfd f22, 0x620(r1)
    psq_l f21, 0x618(r1), 0, 0
    lfd f21, 0x610(r1)
    psq_l f20, 0x608(r1), 0, 0
    lfd f20, 0x600(r1)
    bl _restgpr_15
    lwz r0, 0x6c4(r1)
    mtlr r0
    addi r1, r1, 0x6c0
    blr
}

asm void fn_801BFF28(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r4
    lbz r0, 0x1c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801BFF28_00001AF4
    lis r5, lbl_8073B5D0@ha
    li r3, 0x34
    addi r5, r5, lbl_8073B5D0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801BFF28_00001974
    lis r5, lbl_807C7030@ha
    lwz r4, 0x4(r29)
    addi r5, r5, lbl_807C7030@l
    bl fn_801B2EDC
    lis r3, lbl_80781740@ha
    li r0, 0x1f
    addi r3, r3, lbl_80781740@l
    stw r3, 0x0(r30)
    lwz r3, 0x4(r30)
    stw r0, 0x560(r3)
lbl_fn_801BFF28_00001974:
    lis r3, lbl_80781720@ha
    lwzu r5, lbl_80781720@l(r3)
    lwz r6, 0x4(r29)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F100
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r30, 0x60(r1)
    bne lbl_fn_801BFF28_000019F8
    lis r6, lbl_807C7C68@ha
    lis r4, fn_801BDE68@ha
    lis r3, fn_801BDE98@ha
    li r0, 0x1
    addi r3, r3, fn_801BDE98@l
    addi r5, r6, lbl_807C7C68@l
    addi r4, r4, fn_801BDE68@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C68@l(r6)
    stb r0, lbl_8087F100
lbl_fn_801BFF28_000019F8:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801BFF28_00001ACC
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801BFF28_00001A90
    lis r3, __files@ha
    lis r4, lbl_807818D4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807818D4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801BFF28_00001A90:
    cmpwi r30, 0x0
    beq lbl_fn_801BFF28_00001AC0
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_801BFF28_00001AC0:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801BFF28_00001AD0
lbl_fn_801BFF28_00001ACC:
    li r0, 0x0
lbl_fn_801BFF28_00001AD0:
    cmpwi r0, 0x0
    beq lbl_fn_801BFF28_00001AE8
    lis r3, lbl_807C7C68@ha
    addi r3, r3, lbl_807C7C68@l
    stw r3, 0x0(r31)
    b lbl_fn_801BFF28_00001AF8
lbl_fn_801BFF28_00001AE8:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801BFF28_00001AF8
lbl_fn_801BFF28_00001AF4:
    bl fn_80192758
lbl_fn_801BFF28_00001AF8:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
