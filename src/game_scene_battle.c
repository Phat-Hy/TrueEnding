#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ED34(void);
extern void fn_8006B174(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_801070C8(void);
extern void fn_80107208(void);
extern void fn_8013CB68(void);
extern void fn_801539E0(void);
extern void fn_8015495C(void);
extern void fn_80155DAC(void);
extern void fn_80176DFC(void);
extern void fn_80179D44(void);
extern void fn_80188F08(void);
extern void fn_80188F40(void);
extern void fn_80191960(void);
extern void fn_8019198C(void);
extern void fn_8019C8A8(void);
extern void fn_8019C94C(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803EA77C(void);
extern void fn_80473F18(void);
extern void fn_804DA694(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8067E23C(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695AD0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073A9A8[];
extern u8 lbl_8073AAA8[];
extern u8 lbl_80766768[];
extern u8 lbl_8077CF28[];
extern u8 lbl_8077FBD8[];
extern u8 lbl_8077FBE4[];
extern u8 lbl_8077FE20[];
extern u8 lbl_8077FE98[];
extern u8 lbl_8077FF10[];
extern u8 lbl_807C7B58[];
extern u8 lbl_807C7B90[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0B2;
extern u32 lbl_8087F0BE;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_808822E8;
extern u32 lbl_808822EC;
extern u32 lbl_808822F0;
extern u32 lbl_808822F4;
extern u32 lbl_808822F8;
extern u32 lbl_808822FC;
extern u32 lbl_80882304;
extern u32 lbl_8088230C;
extern u32 lbl_80882310;
extern u32 lbl_80882314;
extern u32 lbl_8088231C;
extern u32 lbl_80882320;
extern u32 lbl_80882324;
extern u32 lbl_80882328;
extern u32 lbl_8088232C;
extern u32 lbl_80882330;
extern u32 lbl_80882334;
extern u32 lbl_80882338;
extern u32 lbl_8088233C;
extern u32 lbl_80882340;
extern u32 lbl_80882344;
extern u32 lbl_80882348;

/* Function declarations */
void fn_801AD2B4(void);
void fn_801AD34C(void);
void fn_801ADC14(void);
void fn_801AE41C(void);
void fn_801AE4E8(void);
void fn_801AE6D4(void);
void fn_801AE77C(void);
void fn_801AE8C8(void);
void fn_801AE978(void);
void fn_801AE9A4(void);
void fn_801AEA04(void);

asm void fn_801AD2B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AD2B4_0000005C
    lwz r3, 0x4(r30)
    lfs f0, lbl_80882314
    lfs f1, 0x578(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_801AD2B4_0000005C
    li r31, 0x1
lbl_fn_801AD2B4_0000005C:
    lwz r3, 0x4(r30)
    addi r4, r30, 0x8
    lfs f1, lbl_808822EC
    li r5, 0x0
    lfs f2, 0x568(r3)
    bl fn_8013CB68
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AD34C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x160
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    bl _savegpr_25
    lfs f0, lbl_8088231C
    lis r9, lbl_8077FF10@ha
    li r8, 0x0
    li r0, 0x1
    addi r9, r9, lbl_8077FF10@l
    stw r4, 0x4(r3)
    mr r27, r3
    mr r28, r4
    stw r9, 0x0(r3)
    mr r29, r6
    li r31, 0x0
    stw r8, 0x14(r3)
    stw r8, 0x18(r3)
    stfs f0, 0x1c(r3)
    stw r7, 0x20(r3)
    stw r8, 0x24(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x560(r4)
    cmpwi r0, 0x72
    bne lbl_fn_801AD34C_00000114
    li r31, 0x1
lbl_fn_801AD34C_00000114:
    addi r6, r1, 0xc4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    li r0, 0x17
    lfs f2, 0x8(r5)
    addi r5, r1, 0x94
    lfs f4, 0xc8(r1)
    addi r26, r1, 0xa0
    lfs f0, lbl_808822E8
    frsp f3, f2
    stw r0, 0x560(r4)
    mr r4, r26
    fmuls f4, f4, f0
    lfs f0, 0xc4(r1)
    lwz r7, 0x4(r3)
    stfs f4, 0xc8(r1)
    fneg f3, f3
    fneg f4, f4
    fneg f0, f0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x6b8(r7), 0, 0
    mr r3, r26
    addi r30, r7, 0xb0
    stfs f0, 0x94(r1)
    stfs f4, 0x98(r1)
    stfs f2, 0xcc(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x6c0(r7)
    frsp f2, f3
    stfs f3, 0x9c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xa8(r1)
    bl fn_805F98D0
    lfs f2, 0xa8(r1)
    addi r25, r1, 0xac
    psq_l f1, 0x0(r26), 0, 0
    fabs f3, f2
    lfs f0, lbl_808822F4
    psq_st f1, 0x0(r25), 0, 0
    frsp f3, f3
    stfs f2, 0xb4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801AD34C_000001E4
    lfs f3, 0xac(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801AD34C_000001D8
    lfs f0, lbl_808822F8
    b lbl_fn_801AD34C_000001DC
lbl_fn_801AD34C_000001D8:
    lfs f0, lbl_808822FC
lbl_fn_801AD34C_000001DC:
    stfs f0, 0x80(r1)
    b lbl_fn_801AD34C_000001F8
lbl_fn_801AD34C_000001E4:
    frsp f2, f2
    lfs f1, 0xac(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x80(r1)
lbl_fn_801AD34C_000001F8:
    lfs f0, 0x80(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808822EC
    addi r4, r1, 0x70
    lfs f30, 0xd8(r1)
    mr r5, r4
    lfs f31, 0xd4(r1)
    addi r3, r1, 0x100
    lfs f13, 0xd0(r1)
    lfs f12, 0xe8(r1)
    lfs f11, 0xe4(r1)
    lfs f10, 0xe0(r1)
    lfs f9, 0xf8(r1)
    lfs f8, 0xf4(r1)
    lfs f7, 0xf0(r1)
    lfs f6, 0xfc(r1)
    lfs f5, 0xec(r1)
    lfs f4, 0xdc(r1)
    lfs f0, lbl_808822F0
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0xb4(r1)
    stfs f3, 0x130(r1)
    stfs f3, 0x134(r1)
    stfs f3, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f13, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f13, 0x100(r1)
    stfs f31, 0x104(r1)
    stfs f30, 0x108(r1)
    stfs f10, 0x4c(r1)
    stfs f11, 0x50(r1)
    stfs f12, 0x54(r1)
    stfs f10, 0x110(r1)
    stfs f11, 0x114(r1)
    stfs f12, 0x118(r1)
    stfs f7, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f9, 0x60(r1)
    stfs f7, 0x120(r1)
    stfs f8, 0x124(r1)
    stfs f9, 0x128(r1)
    stfs f4, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f6, 0x6c(r1)
    stfs f4, 0x10c(r1)
    stfs f5, 0x11c(r1)
    stfs f6, 0x12c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F9750
    lfs f2, 0x78(r1)
    lfs f0, lbl_808822F4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801AD34C_00000314
    lfs f3, 0x74(r1)
    lfs f0, lbl_808822EC
    fcmpo cr0, f3, f0
    ble lbl_fn_801AD34C_00000304
    lfs f0, lbl_808822F8
    b lbl_fn_801AD34C_00000308
lbl_fn_801AD34C_00000304:
    lfs f0, lbl_808822FC
lbl_fn_801AD34C_00000308:
    fneg f0, f0
    stfs f0, 0x7c(r1)
    b lbl_fn_801AD34C_00000328
lbl_fn_801AD34C_00000314:
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x7c(r1)
lbl_fn_801AD34C_00000328:
    lfs f0, lbl_808822EC
    addi r3, r1, 0x7c
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    psq_st f1, 0x8(r27), 0, 0
    lwz r3, 0x4(r27)
    stfs f2, 0xb4(r1)
    frsp f2, f2
    stfs f0, 0x84(r1)
    stfs f2, 0x10(r27)
    lwz r0, 0x12a4(r3)
    psq_st f1, 0x0(r25), 0, 0
    srwi. r0, r0, 31
    beq lbl_fn_801AD34C_00000364
    bl fn_801539E0
lbl_fn_801AD34C_00000364:
    lwz r3, 0x4(r27)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801AD34C_0000037C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801AD34C_0000037C:
    li r0, 0x1
    stw r0, 0x34c(r30)
    lfs f0, lbl_808822F0
    cmpwi r29, 0x0
    stfs f0, 0x24c(r30)
    blt lbl_fn_801AD34C_000003AC
    mr r3, r30
    mr r4, r29
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_801AD34C_000003AC
    li r29, -0x1
lbl_fn_801AD34C_000003AC:
    cmpwi r29, 0x0
    bge lbl_fn_801AD34C_000004E0
    bl fn_80680CF8
    lis r4, 0x5555
    cmpwi r31, 0x0
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r25, r0, r3
    beq lbl_fn_801AD34C_00000404
    lfs f1, lbl_808822EC
    mr r3, r30
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x30
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801AD34C_0000050C
lbl_fn_801AD34C_00000404:
    lwz r3, 0x4(r27)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801AD34C_0000047C
    mr r3, r30
    addi r4, r25, 0x2e
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_801AD34C_00000454
    lfs f1, lbl_808822EC
    mr r3, r30
    lfs f2, lbl_80882304
    addi r5, r25, 0x2e
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801AD34C_0000050C
lbl_fn_801AD34C_00000454:
    lfs f1, lbl_808822EC
    mr r3, r30
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x2e
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801AD34C_0000050C
lbl_fn_801AD34C_0000047C:
    mr r3, r30
    addi r4, r25, 0x39
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_801AD34C_000004B8
    lfs f1, lbl_808822EC
    mr r3, r30
    lfs f2, lbl_80882304
    addi r5, r25, 0x38
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801AD34C_0000050C
lbl_fn_801AD34C_000004B8:
    lfs f1, lbl_808822EC
    mr r3, r30
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x38
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801AD34C_0000050C
lbl_fn_801AD34C_000004E0:
    lfs f1, lbl_808822EC
    mr r3, r30
    lfs f2, lbl_80882304
    mr r5, r29
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r0, 0x38(r27)
lbl_fn_801AD34C_0000050C:
    lwz r3, 0x4(r27)
    lwz r3, 0x50(r3)
    subis r0, r3, 0x3
    cmplwi r0, 0xe0d
    bne lbl_fn_801AD34C_0000052C
    lfs f0, lbl_80882320
    stfs f0, 0x238(r30)
    b lbl_fn_801AD34C_00000534
lbl_fn_801AD34C_0000052C:
    lfs f0, lbl_808822F0
    stfs f0, 0x238(r30)
lbl_fn_801AD34C_00000534:
    lwz r0, 0x22c(r30)
    cmpwi r0, 0x3a
    beq lbl_fn_801AD34C_00000548
    cmpwi r0, 0x30
    bne lbl_fn_801AD34C_0000055C
lbl_fn_801AD34C_00000548:
    lwz r3, 0x4(r27)
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_80176DFC
lbl_fn_801AD34C_0000055C:
    lwz r4, 0x22c(r30)
    mr r3, r30
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_801AD34C_00000878
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x88(r1)
    mr r26, r3
    addi r25, r1, 0x88
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    bl strlen
    mr r29, r3
    mr r3, r25
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r25
    stb r0, 0x8(r1)
    mr r6, r26
    add r7, r26, r29
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r25
    addi r3, r1, 0xb8
    bl fn_8006B174
    lwz r0, 0x88(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801AD34C_000005E4
    lwz r3, 0x90(r1)
    bl dtor_80084684
lbl_fn_801AD34C_000005E4:
    lis r25, lbl_8073AAA8@ha
    addi r25, r25, lbl_8073AAA8@l
    mr r3, r25
    bl strlen
    lwz r0, 0xb8(r1)
    mr r29, r3
    stw r3, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801AD34C_00000614
    lbz r0, 0xb8(r1)
    clrlwi r4, r0, 25
    b lbl_fn_801AD34C_00000618
lbl_fn_801AD34C_00000614:
    lwz r4, 0xbc(r1)
lbl_fn_801AD34C_00000618:
    lwz r0, 0xb8(r1)
    stw r4, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801AD34C_00000638
    lbz r0, 0xb8(r1)
    addi r3, r1, 0xb9
    clrlwi r0, r0, 25
    b lbl_fn_801AD34C_00000640
lbl_fn_801AD34C_00000638:
    lwz r3, 0xc0(r1)
    lwz r0, 0xbc(r1)
lbl_fn_801AD34C_00000640:
    cmplw r4, r0
    stw r0, 0x34(r1)
    addi r4, r1, 0x34
    bge lbl_fn_801AD34C_00000654
    addi r4, r1, 0x3c
lbl_fn_801AD34C_00000654:
    lwz r0, 0x0(r4)
    mr r4, r25
    stw r0, 0x30(r1)
    addi r5, r1, 0x30
    cmplw r29, r0
    bge lbl_fn_801AD34C_00000670
    addi r5, r1, 0x38
lbl_fn_801AD34C_00000670:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_801AD34C_000006A4
    lwz r0, 0x30(r1)
    cmplw r0, r29
    bge lbl_fn_801AD34C_00000694
    li r3, -0x1
    b lbl_fn_801AD34C_000006A4
lbl_fn_801AD34C_00000694:
    bne lbl_fn_801AD34C_000006A0
    li r3, 0x0
    b lbl_fn_801AD34C_000006A4
lbl_fn_801AD34C_000006A0:
    li r3, 0x1
lbl_fn_801AD34C_000006A4:
    cmpwi r3, 0x0
    bne lbl_fn_801AD34C_000006B8
    lfs f0, lbl_80882324
    stfs f0, 0x1c(r27)
    b lbl_fn_801AD34C_00000864
lbl_fn_801AD34C_000006B8:
    lis r3, lbl_8073AAA8@ha
    addi r3, r3, lbl_8073AAA8@l
    addi r25, r3, 0x17
    mr r3, r25
    bl strlen
    lwz r0, 0xb8(r1)
    mr r29, r3
    stw r3, 0x28(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801AD34C_000006EC
    lbz r0, 0xb8(r1)
    clrlwi r4, r0, 25
    b lbl_fn_801AD34C_000006F0
lbl_fn_801AD34C_000006EC:
    lwz r4, 0xbc(r1)
lbl_fn_801AD34C_000006F0:
    lwz r0, 0xb8(r1)
    stw r4, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801AD34C_00000710
    lbz r0, 0xb8(r1)
    addi r3, r1, 0xb9
    clrlwi r0, r0, 25
    b lbl_fn_801AD34C_00000718
lbl_fn_801AD34C_00000710:
    lwz r3, 0xc0(r1)
    lwz r0, 0xbc(r1)
lbl_fn_801AD34C_00000718:
    cmplw r4, r0
    stw r0, 0x24(r1)
    addi r4, r1, 0x24
    bge lbl_fn_801AD34C_0000072C
    addi r4, r1, 0x2c
lbl_fn_801AD34C_0000072C:
    lwz r0, 0x0(r4)
    mr r4, r25
    stw r0, 0x20(r1)
    addi r5, r1, 0x20
    cmplw r29, r0
    bge lbl_fn_801AD34C_00000748
    addi r5, r1, 0x28
lbl_fn_801AD34C_00000748:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_801AD34C_0000077C
    lwz r0, 0x20(r1)
    cmplw r0, r29
    bge lbl_fn_801AD34C_0000076C
    li r3, -0x1
    b lbl_fn_801AD34C_0000077C
lbl_fn_801AD34C_0000076C:
    bne lbl_fn_801AD34C_00000778
    li r3, 0x0
    b lbl_fn_801AD34C_0000077C
lbl_fn_801AD34C_00000778:
    li r3, 0x1
lbl_fn_801AD34C_0000077C:
    cmpwi r3, 0x0
    bne lbl_fn_801AD34C_00000790
    lfs f0, lbl_80882328
    stfs f0, 0x1c(r27)
    b lbl_fn_801AD34C_00000864
lbl_fn_801AD34C_00000790:
    lis r3, lbl_8073AAA8@ha
    addi r3, r3, lbl_8073AAA8@l
    addi r25, r3, 0x2e
    mr r3, r25
    bl strlen
    lwz r0, 0xb8(r1)
    mr r29, r3
    stw r3, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801AD34C_000007C4
    lbz r0, 0xb8(r1)
    clrlwi r4, r0, 25
    b lbl_fn_801AD34C_000007C8
lbl_fn_801AD34C_000007C4:
    lwz r4, 0xbc(r1)
lbl_fn_801AD34C_000007C8:
    lwz r0, 0xb8(r1)
    stw r4, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801AD34C_000007E8
    lbz r0, 0xb8(r1)
    addi r3, r1, 0xb9
    clrlwi r0, r0, 25
    b lbl_fn_801AD34C_000007F0
lbl_fn_801AD34C_000007E8:
    lwz r3, 0xc0(r1)
    lwz r0, 0xbc(r1)
lbl_fn_801AD34C_000007F0:
    cmplw r4, r0
    stw r0, 0x14(r1)
    addi r4, r1, 0x14
    bge lbl_fn_801AD34C_00000804
    addi r4, r1, 0x1c
lbl_fn_801AD34C_00000804:
    lwz r0, 0x0(r4)
    mr r4, r25
    stw r0, 0x10(r1)
    addi r5, r1, 0x10
    cmplw r29, r0
    bge lbl_fn_801AD34C_00000820
    addi r5, r1, 0x18
lbl_fn_801AD34C_00000820:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_801AD34C_00000854
    lwz r0, 0x10(r1)
    cmplw r0, r29
    bge lbl_fn_801AD34C_00000844
    li r3, -0x1
    b lbl_fn_801AD34C_00000854
lbl_fn_801AD34C_00000844:
    bne lbl_fn_801AD34C_00000850
    li r3, 0x0
    b lbl_fn_801AD34C_00000854
lbl_fn_801AD34C_00000850:
    li r3, 0x1
lbl_fn_801AD34C_00000854:
    cmpwi r3, 0x0
    bne lbl_fn_801AD34C_00000864
    lfs f0, lbl_8088232C
    stfs f0, 0x1c(r27)
lbl_fn_801AD34C_00000864:
    lwz r0, 0xb8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801AD34C_00000878
    lwz r3, 0xc0(r1)
    bl dtor_80084684
lbl_fn_801AD34C_00000878:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801AD34C_00000934
    lwz r4, 0x4(r27)
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_801AD34C_00000934
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801AD34C_00000900
    lfs f1, lbl_808822F0
    mr r4, r28
    lfs f2, lbl_80882310
    li r5, 0xa
    li r6, 0x0
    bl fn_803EA77C
    lwz r3, 0x4(r27)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801AD34C_00000934
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801AD34C_00000934
    li r4, 0xb6
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_801AD34C_00000934
    lwz r3, lbl_8087F430
    li r4, 0xb6
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_801AD34C_00000934
lbl_fn_801AD34C_00000900:
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801AD34C_00000934
    lwz r3, lbl_8087F498
    mr r4, r28
    lfs f1, lbl_808822F0
    li r5, 0x8
    lfs f2, lbl_80882310
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_801AD34C_00000934:
    psq_l f31, 0x178(r1), 0, 0
    mr r3, r27
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    addi r11, r1, 0x160
    bl _restgpr_25
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_801ADC14(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x1a0
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    bl _savegpr_26
    lwz r5, 0x14(r3)
    mr r29, r3
    lwz r4, 0x4(r3)
    li r31, 0x0
    cmpwi r5, 0x5a
    addi r30, r4, 0xb0
    ble lbl_fn_801ADC14_000009A0
    li r27, 0x1
    b lbl_fn_801ADC14_00000A14
lbl_fn_801ADC14_000009A0:
    lwz r0, 0x18(r3)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x0
    addi r3, r3, 0xb0
    beq lbl_fn_801ADC14_000009C0
    cmpwi r0, 0x3
    beq lbl_fn_801ADC14_000009F8
    b lbl_fn_801ADC14_00000A10
lbl_fn_801ADC14_000009C0:
    lfs f31, 0x234(r3)
    li r27, 0x0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801ADC14_00000A14
    lwz r3, 0x4(r29)
    lfs f0, lbl_80882314
    lfs f3, 0x578(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_801ADC14_00000A14
    li r27, 0x1
    b lbl_fn_801ADC14_00000A14
lbl_fn_801ADC14_000009F8:
    xori r0, r5, 0xf
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r27, r0, 31
    b lbl_fn_801ADC14_00000A14
lbl_fn_801ADC14_00000A10:
    li r27, 0x0
lbl_fn_801ADC14_00000A14:
    cmpwi r27, 0x0
    beq lbl_fn_801ADC14_00000A34
    lwz r3, 0x4(r29)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80176DFC
    li r31, 0x1
lbl_fn_801ADC14_00000A34:
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801ADC14_00000A5C
    cmpwi r0, 0x1
    beq lbl_fn_801ADC14_00000CEC
    cmpwi r0, 0x2
    beq lbl_fn_801ADC14_00000D68
    cmpwi r0, 0x3
    beq lbl_fn_801ADC14_00000E34
    b lbl_fn_801ADC14_00000E40
lbl_fn_801ADC14_00000A5C:
    lfs f3, 0x234(r30)
    lfs f0, 0x1c(r29)
    fcmpo cr0, f3, f0
    ble lbl_fn_801ADC14_00000A90
    lfs f2, lbl_808822EC
    addi r3, r1, 0x2c
    stfs f2, 0x2c(r1)
    lwz r4, 0x4(r29)
    stfs f2, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    stfs f2, 0x34(r1)
    stfs f2, 0x6c0(r4)
lbl_fn_801ADC14_00000A90:
    lwz r0, 0x38(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801ADC14_00000CDC
    mr r3, r30
    li r4, 0x3d
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_801ADC14_00000CDC
    lwz r5, 0x4(r29)
    addi r27, r1, 0x8c
    lfs f5, lbl_8088230C
    addi r3, r1, 0xb8
    psq_l f1, 0x528(r5), 0, 0
    li r4, 0x79
    lfs f2, 0x530(r5)
    stfs f2, 0x94(r1)
    lfs f0, lbl_808822EC
    psq_st f1, 0x0(r27), 0, 0
    lfs f3, lbl_80882330
    lfs f6, 0x90(r1)
    lfs f4, 0x620(r5)
    fadds f4, f6, f4
    stfs f4, 0x90(r1)
    lfs f4, 0x620(r5)
    fadds f4, f5, f4
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f4, 0x88(r1)
    lfs f0, 0xc(r29)
    fadds f1, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0xb8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x80(r1)
    li r28, 0x0
    lfs f0, 0x8c(r1)
    lfs f5, 0x84(r1)
    fadds f6, f3, f0
    lfs f4, 0x90(r1)
    lfs f3, 0x88(r1)
    lfs f0, 0x94(r1)
    fadds f4, f5, f4
    stfs f6, 0x80(r1)
    fadds f0, f3, f0
    lwz r26, lbl_8087EE98
    stfs f4, 0x84(r1)
    stfs f0, 0x88(r1)
    stw r28, 0x16c(r1)
    stw r28, 0x170(r1)
    stw r28, 0x174(r1)
    stw r28, 0x178(r1)
    lwz r3, 0x4(r29)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r26
    mr r5, r27
    addi r4, r1, 0x138
    addi r6, r1, 0x80
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801ADC14_00000CDC
    lwz r3, 0x170(r1)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_801ADC14_00000C20
    lwz r0, 0x20(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801ADC14_00000C20
    lwz r26, 0xc(r3)
    lwz r0, 0x50(r26)
    cmpwi r0, 0x1
    bne lbl_fn_801ADC14_00000C20
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_801ADC14_00000C20
    lfs f0, lbl_808822EC
    li r0, 0x4
    stw r28, 0x9c(r1)
    mr r3, r26
    addi r4, r1, 0x98
    stw r28, 0xa0(r1)
    stw r28, 0xa4(r1)
    stw r28, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stw r0, 0x98(r1)
    lwz r12, 0x0(r26)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_801ADC14_00000C20:
    lwz r0, 0x174(r1)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_801ADC14_00000CDC
    lfs f1, lbl_808822EC
    mr r3, r30
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x3f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x14(r29)
    lwz r4, 0x4(r29)
    stw r0, 0x18(r29)
    lfs f0, lbl_80882310
    lfs f3, 0x5b0(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_801ADC14_00000CAC
    lis r3, lbl_8073A9A8@ha
    lfs f1, lbl_808822F0
    addi r3, r3, lbl_8073A9A8@l
    addi r5, r4, 0x528
    lwz r4, 0x4(r3)
    addi r3, r1, 0xc
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801ADC14_00000CDC
lbl_fn_801ADC14_00000CAC:
    lis r3, lbl_8073A9A8@ha
    lfs f1, lbl_808822F0
    addi r3, r3, lbl_8073A9A8@l
    addi r5, r4, 0x528
    lwz r4, 0x8(r3)
    addi r3, r1, 0x8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_801ADC14_00000CDC:
    lwz r3, 0x14(r29)
    addi r0, r3, 0x1
    stw r0, 0x14(r29)
    b lbl_fn_801ADC14_00000E40
lbl_fn_801ADC14_00000CEC:
    lfs f31, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801ADC14_00000D38
    lfs f1, lbl_808822EC
    mr r3, r30
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x40
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x2
    stw r0, 0x18(r29)
    b lbl_fn_801ADC14_00000E40
lbl_fn_801ADC14_00000D38:
    lwz r4, 0x4(r29)
    addi r3, r1, 0x74
    lfs f0, lbl_808822EC
    psq_l f1, 0x574(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x57c(r4)
    stfs f0, 0x78(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r4), 0, 0
    stfs f2, 0x7c(r1)
    stfs f2, 0x57c(r4)
    b lbl_fn_801ADC14_00000E40
lbl_fn_801ADC14_00000D68:
    lwz r3, 0x4(r29)
    lfs f0, lbl_80882334
    lfs f3, 0x578(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_801ADC14_00000E24
    psq_l f1, 0x528(r3), 0, 0
    addi r27, r1, 0x68
    lfs f2, 0x530(r3)
    addi r28, r1, 0x5c
    stfs f2, 0x70(r1)
    lfs f4, lbl_80882320
    psq_st f1, 0x0(r27), 0, 0
    lwz r26, lbl_8087EE98
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f3, 0x6c(r1)
    lfs f0, 0x60(r1)
    fadds f3, f3, f4
    stfs f2, 0x64(r1)
    fsubs f0, f0, f4
    stfs f3, 0x6c(r1)
    stfs f0, 0x60(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r26
    mr r5, r27
    mr r6, r28
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801ADC14_00000E24
    lfs f1, lbl_808822EC
    mr r3, r30
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x3d
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x0
    li r0, 0x3
    stw r3, 0x14(r29)
    stw r0, 0x18(r29)
lbl_fn_801ADC14_00000E24:
    lwz r3, 0x14(r29)
    addi r0, r3, 0x1
    stw r0, 0x14(r29)
    b lbl_fn_801ADC14_00000E40
lbl_fn_801ADC14_00000E34:
    lwz r3, 0x14(r29)
    addi r0, r3, 0x1
    stw r0, 0x14(r29)
lbl_fn_801ADC14_00000E40:
    lwz r0, 0x3c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801ADC14_0000112C
    lwz r0, 0x22c(r30)
    li r3, 0x0
    lfs f3, 0x234(r30)
    cmpwi r0, 0x2e
    beq lbl_fn_801ADC14_00000E68
    cmpwi r0, 0x38
    bne lbl_fn_801ADC14_00000E80
lbl_fn_801ADC14_00000E68:
    lfs f0, lbl_80882338
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801ADC14_00000ECC
    li r3, 0x1
    b lbl_fn_801ADC14_00000ECC
lbl_fn_801ADC14_00000E80:
    cmpwi r0, 0x2f
    beq lbl_fn_801ADC14_00000E90
    cmpwi r0, 0x39
    bne lbl_fn_801ADC14_00000EA8
lbl_fn_801ADC14_00000E90:
    lfs f0, lbl_8088233C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801ADC14_00000ECC
    li r3, 0x1
    b lbl_fn_801ADC14_00000ECC
lbl_fn_801ADC14_00000EA8:
    cmpwi r0, 0x30
    beq lbl_fn_801ADC14_00000EB8
    cmpwi r0, 0x3a
    bne lbl_fn_801ADC14_00000ECC
lbl_fn_801ADC14_00000EB8:
    lfs f0, lbl_8088233C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801ADC14_00000ECC
    li r3, 0x1
lbl_fn_801ADC14_00000ECC:
    cmpwi r3, 0x0
    beq lbl_fn_801ADC14_0000112C
    lwz r3, 0x4(r29)
    li r0, 0x0
    stw r0, 0x3c(r29)
    lis r4, lbl_8073AAA8@ha
    addi r4, r4, lbl_8073AAA8@l
    addi r6, r1, 0x50
    psq_l f1, 0x528(r3), 0, 0
    addi r7, r1, 0x44
    lfs f2, 0x530(r3)
    addi r26, r3, 0xb0
    stfs f2, 0x58(r1)
    mr r3, r26
    addi r4, r4, 0x45
    li r5, 0x0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801ADC14_00000F2C
    li r3, 0x0
    b lbl_fn_801ADC14_00000F38
lbl_fn_801ADC14_00000F2C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_801ADC14_00000F38:
    cmpwi r3, 0x0
    bne lbl_fn_801ADC14_00000F7C
    lwz r3, 0x4(r29)
    lis r4, lbl_8073AAA8@ha
    addi r4, r4, lbl_8073AAA8@l
    li r5, 0x0
    addi r26, r3, 0xb0
    mr r3, r26
    addi r4, r4, 0x4c
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801ADC14_00000F70
    li r3, 0x0
    b lbl_fn_801ADC14_00000F7C
lbl_fn_801ADC14_00000F70:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_801ADC14_00000F7C:
    cmpwi r3, 0x0
    beq lbl_fn_801ADC14_00000FD8
    lfs f3, 0x1c(r3)
    addi r4, r1, 0x20
    lfs f0, 0xc(r3)
    addi r5, r1, 0x44
    lfs f4, 0x2c(r3)
    addi r3, r1, 0x50
    stfs f0, 0x20(r1)
    fmr f2, f4
    lfs f0, lbl_80882340
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0x48(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    fsubs f0, f3, f0
    stfs f4, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f0, 0x48(r1)
    b lbl_fn_801ADC14_00000FF4
lbl_fn_801ADC14_00000FD8:
    lfs f3, 0x54(r1)
    lfs f4, lbl_80882320
    lfs f0, 0x48(r1)
    fadds f3, f3, f4
    fsubs f0, f0, f4
    stfs f3, 0x54(r1)
    stfs f0, 0x48(r1)
lbl_fn_801ADC14_00000FF4:
    li r0, 0x0
    stw r0, 0x11c(r1)
    lwz r26, lbl_8087EE98
    stw r0, 0x120(r1)
    stw r0, 0x124(r1)
    stw r0, 0x128(r1)
    lwz r3, 0x4(r29)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r26
    addi r4, r1, 0xe8
    addi r5, r1, 0x50
    addi r6, r1, 0x44
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801ADC14_0000112C
    lwz r3, 0x11c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801ADC14_0000112C
    lwz r3, 0x0(r3)
    subi r0, r3, 0x14
    cmplwi r0, 0x1
    ble lbl_fn_801ADC14_00001064
    subi r0, r3, 0x1c
    cmplwi r0, 0x1
    bgt lbl_fn_801ADC14_0000112C
lbl_fn_801ADC14_00001064:
    lwz r5, 0x4(r29)
    addi r4, r1, 0xf8
    lfs f2, 0x100(r1)
    addi r3, r1, 0x38
    lwz r0, 0x28c(r5)
    psq_l f1, 0x0(r4), 0, 0
    cmpwi r0, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    bne lbl_fn_801ADC14_00001094
    lwz r3, lbl_8087EFB4
    lwz r0, 0x2fc(r3)
lbl_fn_801ADC14_00001094:
    cmpwi r0, 0x0
    beq lbl_fn_801ADC14_000010DC
    lwz r4, 0x28c(r5)
    cmpwi r4, 0x0
    bne lbl_fn_801ADC14_000010B0
    lwz r3, lbl_8087EFB4
    lwz r4, 0x2fc(r3)
lbl_fn_801ADC14_000010B0:
    lwz r3, 0x28c(r5)
    cmpwi r3, 0x0
    bne lbl_fn_801ADC14_000010C4
    lwz r3, lbl_8087EFB4
    lwz r3, 0x2fc(r3)
lbl_fn_801ADC14_000010C4:
    lfs f0, 0x160(r3)
    lfs f3, 0x158(r4)
    fneg f4, f0
    lfs f0, lbl_80882344
    fmadds f0, f4, f3, f0
    stfs f0, 0x3c(r1)
lbl_fn_801ADC14_000010DC:
    lfs f1, lbl_808822F0
    addi r8, r1, 0xf8
    stfs f1, 0x10(r1)
    addi r10, r1, 0x10
    lwz r3, lbl_8087F048
    li r4, 0x7d7
    stfs f1, 0x14(r1)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    lwz r9, 0x4(r29)
    addi r9, r9, 0x534
    bl fn_801070C8
    lwz r3, lbl_8087F048
    addi r5, r1, 0xf8
    lfs f1, lbl_808822F0
    li r4, 0x7d7
    bl fn_80107208
lbl_fn_801ADC14_0000112C:
    lwz r3, 0x4(r29)
    addi r4, r29, 0x8
    lfs f1, lbl_808822EC
    li r5, 0x0
    lfs f2, 0x568(r3)
    bl fn_8013CB68
    psq_l f31, 0x1a8(r1), 0, 0
    mr r3, r31
    lfd f31, 0x1a0(r1)
    addi r11, r1, 0x1a0
    bl _restgpr_26
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_801AE41C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x14(r3)
    cmpwi r4, 0x5a
    ble lbl_fn_801AE41C_0000119C
    li r3, 0x1
    b lbl_fn_801AE41C_00001214
lbl_fn_801AE41C_0000119C:
    lwz r0, 0x18(r3)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x0
    addi r3, r3, 0xb0
    beq lbl_fn_801AE41C_000011BC
    cmpwi r0, 0x3
    beq lbl_fn_801AE41C_000011F8
    b lbl_fn_801AE41C_00001210
lbl_fn_801AE41C_000011BC:
    lfs f31, 0x234(r3)
    li r31, 0x0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AE41C_000011F0
    lwz r3, 0x4(r30)
    lfs f0, lbl_80882314
    lfs f1, 0x578(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_801AE41C_000011F0
    li r31, 0x1
lbl_fn_801AE41C_000011F0:
    mr r3, r31
    b lbl_fn_801AE41C_00001214
lbl_fn_801AE41C_000011F8:
    xori r0, r4, 0xf
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801AE41C_00001214
lbl_fn_801AE41C_00001210:
    li r3, 0x0
lbl_fn_801AE41C_00001214:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AE4E8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r4
    lwz r0, 0x24(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801AE4E8_0000127C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_801AE4E8_00001298
lbl_fn_801AE4E8_0000127C:
    lis r5, lbl_8077FBD8@ha
    lwzu r4, lbl_8077FBD8@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_801AE4E8_00001298:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x50
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801AE4E8_000012F8
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801AE4E8_00001408
    stw r0, 0x0(r31)
    addi r3, r30, 0x28
    addi r4, r31, 0x4
    li r5, 0x0
    lwz r6, 0x24(r30)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
    b lbl_fn_801AE4E8_00001408
lbl_fn_801AE4E8_000012F8:
    lis r3, lbl_8077FBE4@ha
    lwzu r5, lbl_8077FBE4@l(r3)
    lwz r6, 0x4(r30)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r5, 0x34(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0BE
    stw r4, 0x38(r1)
    extsb. r0, r0
    stw r3, 0x3c(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r3, 0x48(r1)
    stw r6, 0x4c(r1)
    bne lbl_fn_801AE4E8_00001370
    lis r6, lbl_807C7B90@ha
    lis r4, fn_80191960@ha
    lis r3, fn_8019198C@ha
    li r0, 0x1
    addi r3, r3, fn_8019198C@l
    addi r5, r6, lbl_807C7B90@l
    addi r4, r4, fn_80191960@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B90@l(r6)
    stb r0, lbl_8087F0BE
lbl_fn_801AE4E8_00001370:
    lwz r6, 0x40(r1)
    addi r3, r1, 0x18
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801AE4E8_000013E4
    lwz r5, 0x18(r1)
    addic. r6, r31, 0x4
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_801AE4E8_000013DC
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_801AE4E8_000013DC:
    li r0, 0x1
    b lbl_fn_801AE4E8_000013E8
lbl_fn_801AE4E8_000013E4:
    li r0, 0x0
lbl_fn_801AE4E8_000013E8:
    cmpwi r0, 0x0
    beq lbl_fn_801AE4E8_00001400
    lis r3, lbl_807C7B90@ha
    addi r3, r3, lbl_807C7B90@l
    stw r3, 0x0(r31)
    b lbl_fn_801AE4E8_00001408
lbl_fn_801AE4E8_00001400:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801AE4E8_00001408:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801AE6D4(void)
{
    nofralloc
    lwz r8, 0x4(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    lwz r7, 0x38(r8)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_801AE6D4_00001450
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_801AE6D4_00001450
    li r6, 0x1
lbl_fn_801AE6D4_00001450:
    cmpwi r6, 0x0
    beq lbl_fn_801AE6D4_0000146C
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_801AE6D4_0000146C
    li r4, 0x1
lbl_fn_801AE6D4_0000146C:
    cmpwi r4, 0x0
    beq lbl_fn_801AE6D4_000014A0
    lwz r0, 0x55c(r8)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801AE6D4_00001494
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_801AE6D4_00001494
    li r4, 0x1
lbl_fn_801AE6D4_00001494:
    cmpwi r4, 0x0
    bne lbl_fn_801AE6D4_000014A0
    li r5, 0x1
lbl_fn_801AE6D4_000014A0:
    cmpwi r5, 0x0
    beq lbl_fn_801AE6D4_000014B4
    lwz r0, 0x5c0(r8)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r8)
lbl_fn_801AE6D4_000014B4:
    lwz r3, 0x4(r3)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    b fn_80176DFC
}

asm void fn_801AE77C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8077FE98@ha
    li r5, 0x1b
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8077FE98@l
    li r0, 0x1
    lfs f0, lbl_808822F0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x560(r4)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    stfs f0, 0x2fc(r3)
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x3d
    beq lbl_fn_801AE77C_00001524
    cmpwi r0, 0x1e0
    bne lbl_fn_801AE77C_0000154C
lbl_fn_801AE77C_00001524:
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x3e
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801AE77C_000015B0
lbl_fn_801AE77C_0000154C:
    cmpwi r0, 0x3a
    beq lbl_fn_801AE77C_00001564
    cmpwi r0, 0x30
    beq lbl_fn_801AE77C_00001564
    cmpwi r0, 0x171
    bne lbl_fn_801AE77C_0000158C
lbl_fn_801AE77C_00001564:
    lfs f1, lbl_808822F0
    mr r3, r31
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x3c
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801AE77C_000015B0
lbl_fn_801AE77C_0000158C:
    lfs f1, lbl_808822EC
    mr r3, r31
    lfs f2, lbl_80882304
    li r4, 0x0
    li r5, 0x3b
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801AE77C_000015B0:
    lwz r3, 0x4(r30)
    lwz r0, 0x48(r3)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_801AE77C_000015CC
    lfs f0, lbl_80882348
    b lbl_fn_801AE77C_000015D0
lbl_fn_801AE77C_000015CC:
    lfs f0, lbl_808822F0
lbl_fn_801AE77C_000015D0:
    lfs f2, lbl_808822EC
    addi r4, r1, 0x8
    stfs f0, 0x238(r31)
    mr r3, r30
    stfs f2, 0x8(r1)
    lwz r5, 0x4(r30)
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x6b8(r5), 0, 0
    stfs f2, 0x6c0(r5)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AE8C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AE8C8_00001688
    lwz r3, 0x4(r30)
    li r31, 0x1
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801AE8C8_00001688
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_801AE8C8_00001688
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_801AE8C8_00001688
    bl fn_804DA694
lbl_fn_801AE8C8_00001688:
    lwz r3, 0x4(r30)
    li r5, 0x0
    lfs f1, lbl_808822EC
    lfs f2, 0x568(r3)
    addi r4, r3, 0x534
    bl fn_8013CB68
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AE978(void)
{
    nofralloc
    lis r6, lbl_8077FE20@ha
    stw r4, 0x4(r3)
    addi r6, r6, lbl_8077FE20@l
    li r0, 0x1c
    stw r6, 0x0(r3)
    lfs f0, lbl_808822EC
    stw r5, 0x8(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x4(r3)
    stfs f0, 0x2e8(r4)
    blr
}

asm void fn_801AE9A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    lwz r4, 0x8(r3)
    subic. r0, r4, 0x1
    stw r0, 0x8(r3)
    bge lbl_fn_801AE9A4_0000173C
    lwz r8, 0x4(r3)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    lwz r0, 0x5c0(r8)
    li r7, 0x1
    ori r0, r0, 0x1
    stw r0, 0x5c0(r8)
    lwz r3, 0x4(r3)
    bl fn_8015495C
    li r5, 0x1
lbl_fn_801AE9A4_0000173C:
    lwz r0, 0x14(r1)
    mr r3, r5
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AEA04(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    lwz r7, 0x4(r4)
    stw r0, 0x164(r1)
    stw r31, 0x15c(r1)
    lis r31, lbl_8077FBD8@ha
    addi r31, r31, lbl_8077FBD8@l
    stw r30, 0x158(r1)
    mr r30, r4
    stw r29, 0x154(r1)
    mr r29, r3
    stw r28, 0x150(r1)
    lwz r0, 0x48(r7)
    cmpwi r0, 0x0
    beq lbl_fn_801AEA04_00001B60
    lwz r0, 0x564(r7)
    cmpwi r0, 0x7
    beq lbl_fn_801AEA04_00001B60
    lbz r0, lbl_8087F0B2
    li r6, 0x0
    lwz r5, 0x18(r31)
    addi r3, r31, 0x18
    extsb. r0, r0
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r7, 0x8(r1)
    stb r6, 0xc(r1)
    stb r6, 0xd(r1)
    stb r6, 0xe(r1)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
    stw r5, 0x108(r1)
    stw r4, 0x10c(r1)
    stw r0, 0x110(r1)
    stw r7, 0x114(r1)
    stb r6, 0x118(r1)
    stb r6, 0x119(r1)
    stb r6, 0x11a(r1)
    stw r6, 0xf4(r1)
    bne lbl_fn_801AEA04_00001828
    lis r6, lbl_807C7B58@ha
    lis r4, fn_80188F08@ha
    lis r3, fn_80188F40@ha
    li r0, 0x1
    addi r3, r3, fn_80188F40@l
    addi r5, r6, lbl_807C7B58@l
    addi r4, r4, fn_80188F08@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B58@l(r6)
    stb r0, lbl_8087F0B2
lbl_fn_801AEA04_00001828:
    lwz r7, 0x108(r1)
    addi r3, r1, 0xcc
    lwz r6, 0x10c(r1)
    lwz r5, 0x110(r1)
    lwz r4, 0x114(r1)
    lwz r0, 0x118(r1)
    stw r7, 0xcc(r1)
    stw r6, 0xd0(r1)
    stw r5, 0xd4(r1)
    stw r4, 0xd8(r1)
    stw r0, 0xdc(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801AEA04_0000190C
    lwz r7, 0xcc(r1)
    li r3, 0x14
    lwz r6, 0xd0(r1)
    lwz r5, 0xd4(r1)
    lwz r4, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r7, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r0, 0xc8(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_801AEA04_000018C0
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801AEA04_000018C0:
    cmpwi r28, 0x0
    beq lbl_fn_801AEA04_00001900
    lwz r0, 0xb8(r1)
    stw r0, 0x0(r28)
    lwz r0, 0xbc(r1)
    stw r0, 0x4(r28)
    lwz r0, 0xc0(r1)
    stw r0, 0x8(r28)
    lwz r0, 0xc4(r1)
    stw r0, 0xc(r28)
    lbz r0, 0xc8(r1)
    stb r0, 0x10(r28)
    lbz r0, 0xc9(r1)
    stb r0, 0x11(r28)
    lbz r0, 0xca(r1)
    stb r0, 0x12(r28)
lbl_fn_801AEA04_00001900:
    stw r28, 0xf8(r1)
    li r0, 0x1
    b lbl_fn_801AEA04_00001910
lbl_fn_801AEA04_0000190C:
    li r0, 0x0
lbl_fn_801AEA04_00001910:
    cmpwi r0, 0x0
    beq lbl_fn_801AEA04_00001928
    lis r3, lbl_807C7B58@ha
    addi r3, r3, lbl_807C7B58@l
    stw r3, 0xf4(r1)
    b lbl_fn_801AEA04_00001930
lbl_fn_801AEA04_00001928:
    li r0, 0x0
    stw r0, 0xf4(r1)
lbl_fn_801AEA04_00001930:
    lbz r0, lbl_8087F0BE
    addi r4, r31, 0x24
    lwz r6, 0x24(r31)
    li r3, 0x0
    extsb. r0, r0
    lwz r5, 0x4(r4)
    lwz r0, 0x8(r4)
    lwz r4, 0x4(r30)
    stw r6, 0x74(r1)
    stw r5, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r6, 0x68(r1)
    stw r5, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r0, 0xb0(r1)
    stw r4, 0xb4(r1)
    stw r3, 0xe0(r1)
    bne lbl_fn_801AEA04_000019A8
    lis r6, lbl_807C7B90@ha
    lis r4, fn_80191960@ha
    lis r3, fn_8019198C@ha
    li r0, 0x1
    addi r3, r3, fn_8019198C@l
    addi r5, r6, lbl_807C7B90@l
    addi r4, r4, fn_80191960@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B90@l(r6)
    stb r0, lbl_8087F0BE
lbl_fn_801AEA04_000019A8:
    lwz r6, 0xa8(r1)
    addi r3, r1, 0x58
    lwz r5, 0xac(r1)
    lwz r4, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801AEA04_00001A1C
    addic. r0, r1, 0xe4
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x48(r1)
    stw r4, 0x4c(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    beq lbl_fn_801AEA04_00001A14
    stw r5, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r3, 0xec(r1)
    stw r0, 0xf0(r1)
lbl_fn_801AEA04_00001A14:
    li r0, 0x1
    b lbl_fn_801AEA04_00001A20
lbl_fn_801AEA04_00001A1C:
    li r0, 0x0
lbl_fn_801AEA04_00001A20:
    cmpwi r0, 0x0
    beq lbl_fn_801AEA04_00001A38
    lis r3, lbl_807C7B90@ha
    addi r3, r3, lbl_807C7B90@l
    stw r3, 0xe0(r1)
    b lbl_fn_801AEA04_00001A40
lbl_fn_801AEA04_00001A38:
    li r0, 0x0
    stw r0, 0xe0(r1)
lbl_fn_801AEA04_00001A40:
    addi r3, r1, 0x120
    addi r4, r1, 0xf4
    addi r5, r1, 0xe0
    bl fn_8019C8A8
    mr r3, r29
    addi r4, r1, 0x120
    li r5, 0x0
    bl fn_8019C94C
    addi r28, r1, 0x120
    addic. r29, r28, 0x14
    beq lbl_fn_801AEA04_00001AA4
    beq lbl_fn_801AEA04_00001AA4
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801AEA04_00001AA4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_801AEA04_00001A9C
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801AEA04_00001A9C:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801AEA04_00001AA4:
    cmpwi r28, 0x0
    beq lbl_fn_801AEA04_00001AE4
    beq lbl_fn_801AEA04_00001AE4
    lwz r3, 0x120(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801AEA04_00001AE4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_801AEA04_00001ADC
    addi r3, r28, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801AEA04_00001ADC:
    li r0, 0x0
    stw r0, 0x120(r1)
lbl_fn_801AEA04_00001AE4:
    addic. r3, r1, 0xe0
    beq lbl_fn_801AEA04_00001B20
    lwz r4, 0xe0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801AEA04_00001B20
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_801AEA04_00001B18
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801AEA04_00001B18:
    li r0, 0x0
    stw r0, 0xe0(r1)
lbl_fn_801AEA04_00001B20:
    addic. r3, r1, 0xf4
    beq lbl_fn_801AEA04_00001C6C
    lwz r4, 0xf4(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801AEA04_00001C6C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_801AEA04_00001B54
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801AEA04_00001B54:
    li r0, 0x0
    stw r0, 0xf4(r1)
    b lbl_fn_801AEA04_00001C6C
lbl_fn_801AEA04_00001B60:
    addi r4, r31, 0x30
    lwz r6, 0x30(r31)
    lwz r5, 0x4(r4)
    li r0, 0x0
    lwz r4, 0x8(r4)
    stw r6, 0x3c(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BE
    stw r5, 0x40(r1)
    extsb. r0, r0
    stw r4, 0x44(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r6, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r7, 0xa4(r1)
    bne lbl_fn_801AEA04_00001BD4
    lis r6, lbl_807C7B90@ha
    lis r4, fn_80191960@ha
    lis r3, fn_8019198C@ha
    li r0, 0x1
    addi r3, r3, fn_8019198C@l
    addi r5, r6, lbl_807C7B90@l
    addi r4, r4, fn_80191960@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B90@l(r6)
    stb r0, lbl_8087F0BE
lbl_fn_801AEA04_00001BD4:
    lwz r6, 0x98(r1)
    addi r3, r1, 0x20
    lwz r5, 0x9c(r1)
    lwz r4, 0xa0(r1)
    lwz r0, 0xa4(r1)
    stw r6, 0x20(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801AEA04_00001C48
    lwz r5, 0x20(r1)
    addic. r6, r29, 0x4
    lwz r4, 0x24(r1)
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_801AEA04_00001C40
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_801AEA04_00001C40:
    li r0, 0x1
    b lbl_fn_801AEA04_00001C4C
lbl_fn_801AEA04_00001C48:
    li r0, 0x0
lbl_fn_801AEA04_00001C4C:
    cmpwi r0, 0x0
    beq lbl_fn_801AEA04_00001C64
    lis r3, lbl_807C7B90@ha
    addi r3, r3, lbl_807C7B90@l
    stw r3, 0x0(r29)
    b lbl_fn_801AEA04_00001C6C
lbl_fn_801AEA04_00001C64:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801AEA04_00001C6C:
    lwz r0, 0x164(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r28, 0x150(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
