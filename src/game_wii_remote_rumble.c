#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8000D844(void);
extern void fn_8000DB1C(void);
extern void fn_8001011C(void);
extern void fn_80010374(void);
extern void fn_8001047C(void);
extern void fn_80010490(void);
extern void fn_80010B68(void);
extern void fn_80011034(void);
extern void fn_8001122C(void);
extern void fn_80011410(void);
extern void fn_80011420(void);
extern void fn_800119C0(void);
extern void fn_800121F0(void);
extern void fn_8001296C(void);
extern void fn_80012C88(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_80057A68(void);
extern void fn_800844D8(void);
extern void fn_8008CCE8(void);
extern void fn_8008CD1C(void);
extern void fn_800928B0(void);
extern void fn_800F7FF0(void);
extern void fn_8010F668(void);
extern void fn_801479E4(void);
extern void fn_80223EB8(void);
extern void fn_802245B8(void);
extern void fn_80224610(void);
extern void fn_80224618(void);
extern void fn_80243EF8(void);
extern void fn_8032B314(void);
extern void fn_8032B6F8(void);
extern void fn_8032B7F0(void);
extern void fn_8032BE88(void);
extern void fn_8032C1EC(void);
extern void fn_803FAE8C(void);
extern void fn_8048B3B8(void);
extern void fn_8048BD04(void);
extern void fn_8048C884(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_805381F4(void);
extern void fn_805389BC(void);
extern void fn_80538C18(void);
extern void fn_80538CE4(void);
extern void fn_80538DC8(void);
extern void fn_80541BDC(void);
extern void fn_80541CF4(void);
extern void fn_8055A404(void);
extern void fn_805F89F0(void);
extern void fn_805F8C50(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8075E850[];
extern u8 lbl_8075EB60[];
extern u8 lbl_80788D00[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F540;
extern u32 lbl_80887E30;
extern u32 lbl_80887E34;
extern u32 lbl_80887E38;
extern u32 lbl_80887E3C;
extern u32 lbl_80887E40;
extern u32 lbl_80887E44;
extern u32 lbl_80887E48;
extern u32 lbl_80887E4C;

/* Function declarations */
void fn_805510FC(void);
void fn_80551104(void);
void fn_8055110C(void);
void fn_80551198(void);
void fn_80551D24(void);
void fn_80551D2C(void);
void fn_80551D34(void);
void fn_80551D70(void);
void fn_80551D78(void);
void fn_80551D8C(void);
void fn_80551D94(void);
void fn_80551DE0(void);
void fn_80551DFC(void);
void fn_80551E04(void);
void fn_80551E18(void);
void fn_80551E2C(void);
void fn_80551E40(void);
void fn_80551E54(void);
void fn_80551E90(void);
void fn_80551E98(void);
void fn_80551EA0(void);
void fn_80552028(void);
void fn_80552030(void);
void fn_805521DC(void);
void fn_805523E0(void);
void fn_80552434(void);
void fn_80552464(void);

asm void fn_805510FC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80551104(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055110C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    fmr f31, f1
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805F9940
    lfs f0, lbl_80887E30
    fcmpo cr0, f1, f0
    ble lbl_fn_8055110C_00000080
    fdivs f0, f1, f31
    lwz r5, lbl_8087F540
    mr r3, r31
    mr r4, r31
    lfs f1, 0xb4(r5)
    fmuls f31, f0, f1
    bl fn_805F98D0
    lfs f2, 0x0(r31)
    lfs f1, 0x4(r31)
    lfs f0, 0x8(r31)
    fmuls f2, f2, f31
    fmuls f1, f1, f31
    fmuls f0, f0, f31
    stfs f2, 0x0(r31)
    stfs f1, 0x4(r31)
    stfs f0, 0x8(r31)
lbl_fn_8055110C_00000080:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80551198(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    addi r11, r1, 0x3f0
    stfd f31, 0x410(r1)
    psq_st f31, 0x418(r1), 0, 0
    stfd f30, 0x400(r1)
    psq_st f30, 0x408(r1), 0, 0
    stfd f29, 0x3f0(r1)
    psq_st f29, 0x3f8(r1), 0, 0
    bl _savegpr_24
    fmr f31, f1
    mr r30, r3
    bl fn_805381A4
    mr r26, r3
    mr r3, r30
    bl fn_805381CC
    mr r25, r3
    mr r3, r26
    bl fn_80224618
    mr r26, r3
    mr r3, r25
    bl fn_80551D24
    mr r4, r26
    bl fn_8055A404
    mr r31, r3
    addi r3, r1, 0x260
    mr r4, r31
    bl fn_80010374
    mr r3, r30
    li r26, 0x0
    li r27, 0x0
    li r4, 0x0
    bl fn_80551D34
    bl fn_80551D2C
    cmpwi r3, 0x0
    bne lbl_fn_80551198_00000684
    mr r3, r30
    li r4, 0x1
    bl fn_80551D34
    bl fn_80551D70
    mr r26, r3
    mr r3, r25
    bl fn_80551D24
    mr r4, r26
    bl fn_8055A404
    mr r29, r3
    mr r4, r30
    addi r3, r1, 0x254
    li r5, 0x3
    bl fn_805381F4
    mr r3, r30
    li r4, 0x6
    bl fn_80551D34
    bl fn_80224610
    mr r26, r3
    mr r3, r30
    li r4, 0xa
    bl fn_80551D34
    bl fn_80224610
    mr r27, r3
    mr r3, r29
    bl fn_80551D78
    cmpwi r3, 0x0
    beq lbl_fn_80551198_000001BC
    mr r4, r25
    addi r3, r1, 0x14c
    addi r5, r1, 0x254
    bl fn_80541BDC
    addi r3, r1, 0x254
    addi r4, r1, 0x14c
    bl fn_8000D124
lbl_fn_80551198_000001BC:
    mr r4, r29
    addi r3, r1, 0x248
    bl fn_80010374
    mr r4, r31
    addi r3, r1, 0x23c
    bl fn_80010374
    mr r3, r29
    li r24, 0x0
    bl fn_8001296C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80551198_00000228
    mr r3, r30
    li r4, 0x2
    bl fn_80551D34
    bl fn_80551D8C
    mr r4, r3
    mr r3, r28
    bl fn_80551D94
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_80551198_00000228
    lfs f1, lbl_80887E30
    addi r3, r1, 0x248
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
lbl_fn_80551198_00000228:
    addi r3, r1, 0x248
    addi r4, r1, 0x254
    bl fn_80012C88
    lis r4, lbl_807C7030@ha
    addi r3, r1, 0x230
    addi r4, r4, lbl_807C7030@l
    bl fn_8001047C
    addi r3, r1, 0x224
    addi r4, r1, 0x248
    addi r5, r1, 0x23c
    bl fn_80013338
    mr r3, r30
    li r4, 0xb
    bl fn_80551D34
    bl fn_80224610
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80551198_00000294
    cmpwi r24, 0x0
    bne lbl_fn_80551198_00000304
    addi r3, r1, 0x140
    addi r4, r1, 0x224
    bl fn_80011034
    addi r3, r1, 0x230
    addi r4, r1, 0x140
    bl fn_8000D124
    b lbl_fn_80551198_00000304
lbl_fn_80551198_00000294:
    mr r4, r30
    addi r3, r1, 0x134
    li r5, 0x7
    bl fn_80538C18
    addi r3, r1, 0x230
    addi r4, r1, 0x134
    bl fn_8000D124
    addi r3, r1, 0x230
    bl fn_80243EF8
    mr r3, r29
    bl fn_80551D78
    cmpwi r3, 0x0
    beq lbl_fn_80551198_000002D8
    lfs f1, 0x234(r1)
    mr r3, r25
    bl fn_80541CF4
    stfs f1, 0x234(r1)
lbl_fn_80551198_000002D8:
    cmpwi r27, 0x0
    beq lbl_fn_80551198_00000304
    cmpwi r24, 0x0
    bne lbl_fn_80551198_00000304
    mr r4, r30
    addi r3, r1, 0x128
    li r5, 0xe
    bl fn_80538C18
    addi r3, r1, 0x230
    addi r4, r1, 0x128
    bl fn_80012C88
lbl_fn_80551198_00000304:
    lfs f0, lbl_80887E30
    fcmpo cr0, f31, f0
    ble lbl_fn_80551198_000004FC
    mr r3, r30
    bl fn_80223EB8
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0x3c4(r1)
    lis r4, lbl_8075E850@ha
    lfd f2, lbl_8075E850@l(r4)
    mr r3, r31
    stw r0, 0x3c0(r1)
    lfs f0, lbl_80887E34
    lfd f1, 0x3c0(r1)
    fsubs f1, f1, f2
    fdivs f1, f31, f1
    fsubs f30, f0, f1
    bl fn_80551DFC
    mr r29, r3
    bl fn_8000DB1C
    fmr f1, f30
    mr r4, r29
    bl fn_8048BD04
    fmr f30, f1
    mr r4, r31
    addi r3, r1, 0x218
    bl fn_80551E04
    addi r3, r1, 0x20c
    addi r4, r1, 0x248
    addi r5, r1, 0x218
    bl fn_80013338
    addi r3, r1, 0x20c
    bl fn_8000D3A4
    lfs f0, lbl_80887E30
    fmr f29, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80551198_000003A4
    addi r3, r1, 0x20c
    bl fn_800F7FF0
    fmuls f29, f29, f30
lbl_fn_80551198_000003A4:
    cmpwi r24, 0x0
    bne lbl_fn_80551198_000003DC
    fmr f1, f29
    addi r3, r1, 0x110
    addi r4, r1, 0x20c
    bl fn_803FAE8C
    addi r3, r1, 0x11c
    addi r4, r1, 0x218
    addi r5, r1, 0x110
    bl fn_80013410
    mr r3, r31
    addi r4, r1, 0x11c
    bl fn_8001011C
    b lbl_fn_80551198_00000480
lbl_fn_80551198_000003DC:
    mr r4, r24
    addi r3, r1, 0x390
    bl fn_8008CCE8
    addi r3, r1, 0xf8
    addi r4, r1, 0x390
    bl fn_8000D0F8
    addi r3, r1, 0x104
    addi r4, r1, 0x248
    addi r5, r1, 0xf8
    bl fn_80013410
    addi r3, r1, 0x200
    addi r4, r1, 0x104
    addi r5, r1, 0x218
    bl fn_80013338
    addi r3, r1, 0x200
    bl fn_8000D3A4
    lfs f0, lbl_80887E30
    fmr f29, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80551198_00000438
    addi r3, r1, 0x200
    bl fn_800F7FF0
    fmuls f29, f29, f30
lbl_fn_80551198_00000438:
    fmr f1, f29
    addi r3, r1, 0xec
    addi r4, r1, 0x200
    bl fn_803FAE8C
    addi r3, r1, 0x1f4
    addi r4, r1, 0x218
    addi r5, r1, 0xec
    bl fn_80013410
    addi r3, r1, 0xd4
    addi r4, r1, 0x390
    bl fn_8000D0F8
    addi r3, r1, 0xe0
    addi r4, r1, 0x1f4
    addi r5, r1, 0xd4
    bl fn_80013338
    addi r3, r1, 0x254
    addi r4, r1, 0xe0
    bl fn_8000D124
lbl_fn_80551198_00000480:
    cmpwi r28, 0x0
    beq lbl_fn_80551198_0000049C
    addi r3, r1, 0x224
    bl fn_8000D3A4
    lfs f0, lbl_80887E30
    fcmpo cr0, f1, f0
    ble lbl_fn_80551198_0000057C
lbl_fn_80551198_0000049C:
    mr r4, r31
    addi r3, r1, 0x1e8
    bl fn_80551E18
    addi r3, r1, 0x1dc
    addi r4, r1, 0x230
    addi r5, r1, 0x1e8
    bl fn_80013338
    fmr f1, f31
    addi r3, r1, 0x1dc
    bl fn_8055110C
    addi r3, r1, 0xc8
    addi r4, r1, 0x1e8
    addi r5, r1, 0x1dc
    bl fn_80013410
    addi r3, r1, 0x230
    addi r4, r1, 0xc8
    bl fn_8000D124
    mr r3, r31
    addi r4, r1, 0x230
    bl fn_80010490
    mr r3, r31
    addi r4, r1, 0x230
    bl fn_80551E2C
    b lbl_fn_80551198_0000057C
lbl_fn_80551198_000004FC:
    cmpwi r24, 0x0
    bne lbl_fn_80551198_00000514
    mr r3, r31
    addi r4, r1, 0x248
    bl fn_80551E40
    b lbl_fn_80551198_0000053C
lbl_fn_80551198_00000514:
    mr r4, r24
    addi r3, r1, 0xbc
    bl fn_8000D0F8
    addi r3, r1, 0x1d0
    addi r4, r1, 0x248
    addi r5, r1, 0xbc
    bl fn_80013410
    mr r3, r31
    addi r4, r1, 0x1d0
    bl fn_80551E40
lbl_fn_80551198_0000053C:
    mr r3, r31
    addi r4, r1, 0x248
    bl fn_8001011C
    cmpwi r28, 0x0
    beq lbl_fn_80551198_00000564
    addi r3, r1, 0x224
    bl fn_8000D3A4
    lfs f0, lbl_80887E30
    fcmpo cr0, f1, f0
    ble lbl_fn_80551198_0000057C
lbl_fn_80551198_00000564:
    mr r3, r31
    addi r4, r1, 0x230
    bl fn_80010490
    mr r3, r31
    addi r4, r1, 0x230
    bl fn_80551E2C
lbl_fn_80551198_0000057C:
    addi r3, r1, 0x360
    bl fn_80551E54
    cmpwi r24, 0x0
    beq lbl_fn_80551198_00000640
    mr r3, r31
    bl fn_80551E90
    cmpwi r3, 0x7
    beq lbl_fn_80551198_000005AC
    mr r3, r31
    bl fn_80551E90
    cmpwi r3, 0x1
    bne lbl_fn_80551198_00000640
lbl_fn_80551198_000005AC:
    mr r4, r24
    addi r3, r1, 0x330
    bl fn_8008CCE8
    addi r3, r1, 0x330
    bl fn_8010F668
    cmpwi r28, 0x0
    bne lbl_fn_80551198_000005F4
    cmpwi r27, 0x0
    bne lbl_fn_80551198_000005F4
    addi r3, r1, 0xa4
    addi r4, r1, 0x330
    bl fn_80551DE0
    addi r3, r1, 0xb0
    addi r4, r1, 0xa4
    bl fn_80011034
    addi r3, r1, 0x230
    addi r4, r1, 0xb0
    bl fn_80012C88
lbl_fn_80551198_000005F4:
    cmpwi r26, 0x0
    bne lbl_fn_80551198_0000061C
    addi r3, r1, 0x330
    bl fn_80551E98
    addi r3, r1, 0x254
    addi r4, r1, 0x330
    bl fn_80011410
    addi r3, r1, 0x248
    addi r4, r1, 0x254
    bl fn_8000D124
lbl_fn_80551198_0000061C:
    addi r3, r1, 0x2a0
    addi r4, r1, 0x230
    bl fn_80551EA0
    addi r3, r1, 0x360
    addi r4, r1, 0x2a0
    bl fn_8008CD1C
    addi r3, r1, 0x360
    addi r4, r1, 0x248
    bl fn_801479E4
lbl_fn_80551198_00000640:
    mr r3, r31
    mr r4, r24
    addi r7, r1, 0x360
    li r5, 0x1
    li r6, 0x1
    bl fn_8001122C
    mr r3, r30
    li r4, 0xc
    bl fn_80551D34
    bl fn_80224610
    mr r26, r3
    mr r3, r30
    li r4, 0xd
    bl fn_80551D34
    bl fn_802245B8
    mr r27, r3
    b lbl_fn_80551198_00000BCC
lbl_fn_80551198_00000684:
    cmpwi r3, 0x1
    bne lbl_fn_80551198_0000081C
    mr r3, r30
    li r4, 0x1
    bl fn_80551D34
    bl fn_80552028
    cmpwi r3, -0x1
    beq lbl_fn_80551198_000007F0
    mr r3, r30
    bl fn_80223EB8
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8075E850@ha
    stw r3, 0x3c4(r1)
    lfd f1, lbl_8075E850@l(r4)
    stw r0, 0x3c0(r1)
    lfs f3, lbl_80887E34
    lfd f0, 0x3c0(r1)
    lfs f2, lbl_80887E30
    fsubs f0, f0, f1
    fdivs f0, f31, f0
    fsubs f1, f3, f0
    bl fn_80552434
    fmr f31, f1
    mr r4, r31
    addi r3, r1, 0x98
    bl fn_80552030
    mr r4, r25
    addi r3, r1, 0x1c4
    addi r5, r1, 0x98
    bl fn_80541BDC
    mr r3, r31
    addi r4, r1, 0x1c4
    bl fn_8001011C
    mr r3, r30
    li r4, 0x2
    bl fn_80551D34
    bl fn_80551D2C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80551198_000007F0
    lfs f0, lbl_80887E38
    lfs f2, lbl_80887E30
    fsubs f1, f31, f0
    lfs f3, lbl_80887E34
    bl fn_80552434
    lfs f0, lbl_80887E38
    fmr f29, f1
    lfs f2, lbl_80887E30
    fadds f1, f0, f31
    lfs f3, lbl_80887E34
    bl fn_80552434
    fmr f30, f1
    mr r4, r31
    fmr f1, f29
    addi r3, r1, 0x8c
    bl fn_80552030
    mr r4, r25
    addi r3, r1, 0x1b8
    addi r5, r1, 0x8c
    bl fn_80541BDC
    fmr f1, f30
    mr r4, r31
    addi r3, r1, 0x80
    bl fn_80552030
    mr r4, r25
    addi r3, r1, 0x1ac
    addi r5, r1, 0x80
    bl fn_80541BDC
    cmpwi r29, 0x1
    bne lbl_fn_80551198_000007CC
    addi r3, r1, 0x68
    addi r4, r1, 0x1ac
    addi r5, r1, 0x1b8
    bl fn_80013338
    addi r3, r1, 0x74
    addi r4, r1, 0x68
    bl fn_80011034
    lfs f1, 0x78(r1)
    mr r3, r31
    bl fn_80011420
    b lbl_fn_80551198_000007F0
lbl_fn_80551198_000007CC:
    cmpwi r29, 0x2
    bne lbl_fn_80551198_000007F0
    addi r3, r1, 0x5c
    addi r4, r1, 0x1ac
    addi r5, r1, 0x1b8
    bl fn_80013338
    mr r3, r31
    addi r4, r1, 0x5c
    bl fn_805521DC
lbl_fn_80551198_000007F0:
    mr r3, r30
    li r4, 0x3
    bl fn_80551D34
    bl fn_80224610
    mr r26, r3
    mr r3, r30
    li r4, 0x4
    bl fn_80551D34
    bl fn_802245B8
    mr r27, r3
    b lbl_fn_80551198_00000BCC
lbl_fn_80551198_0000081C:
    cmpwi r3, 0x2
    bne lbl_fn_80551198_00000A40
    mr r3, r30
    li r4, 0x1
    bl fn_80551D34
    bl fn_80551D70
    mr r24, r3
    mr r3, r25
    bl fn_80551D24
    mr r4, r24
    bl fn_8055A404
    mr r24, r3
    addi r3, r1, 0x1a0
    mr r4, r24
    bl fn_80010374
    mr r4, r30
    addi r3, r1, 0x194
    li r5, 0x3
    bl fn_805381F4
    mr r3, r24
    bl fn_80551D78
    cmpwi r3, 0x0
    beq lbl_fn_80551198_00000894
    mr r4, r25
    addi r3, r1, 0x50
    addi r5, r1, 0x194
    bl fn_80541BDC
    addi r3, r1, 0x194
    addi r4, r1, 0x50
    bl fn_8000D124
lbl_fn_80551198_00000894:
    mr r3, r24
    bl fn_8001296C
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_80551198_00000920
    mr r3, r30
    li r4, 0x2
    bl fn_80551D34
    bl fn_80551D8C
    mr r4, r3
    mr r3, r24
    bl fn_80551D94
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_80551198_00000920
    mr r4, r24
    addi r3, r1, 0x44
    bl fn_8000D0F8
    addi r3, r1, 0x1a0
    addi r4, r1, 0x44
    bl fn_8000D124
    mr r4, r24
    addi r3, r1, 0x300
    bl fn_8008CCE8
    addi r3, r1, 0x300
    bl fn_8010F668
    mr r3, r30
    li r4, 0x6
    bl fn_80551D34
    bl fn_80224610
    cmpwi r3, 0x0
    beq lbl_fn_80551198_00000920
    addi r3, r1, 0x194
    addi r4, r1, 0x300
    bl fn_80011410
lbl_fn_80551198_00000920:
    addi r3, r1, 0x1a0
    addi r4, r1, 0x194
    bl fn_80012C88
    lfs f0, lbl_80887E30
    fcmpo cr0, f31, f0
    ble lbl_fn_80551198_000009FC
    mr r3, r30
    bl fn_80223EB8
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0x3c4(r1)
    lis r4, lbl_8075E850@ha
    lfd f2, lbl_8075E850@l(r4)
    mr r3, r31
    stw r0, 0x3c0(r1)
    lfs f0, lbl_80887E34
    lfd f1, 0x3c0(r1)
    fsubs f1, f1, f2
    fdivs f1, f31, f1
    fsubs f29, f0, f1
    bl fn_80551DFC
    mr r29, r3
    bl fn_8000DB1C
    fmr f1, f29
    mr r4, r29
    bl fn_8048BD04
    fmr f31, f1
    mr r4, r31
    addi r3, r1, 0x188
    bl fn_80551E04
    addi r3, r1, 0x17c
    addi r4, r1, 0x1a0
    addi r5, r1, 0x188
    bl fn_80013338
    addi r3, r1, 0x17c
    bl fn_8000D3A4
    lfs f0, lbl_80887E30
    fmr f29, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80551198_000009CC
    addi r3, r1, 0x17c
    bl fn_800F7FF0
    fmuls f29, f29, f31
lbl_fn_80551198_000009CC:
    fmr f1, f29
    addi r3, r1, 0x2c
    addi r4, r1, 0x17c
    bl fn_803FAE8C
    addi r3, r1, 0x38
    addi r4, r1, 0x188
    addi r5, r1, 0x2c
    bl fn_80013410
    mr r3, r31
    addi r4, r1, 0x38
    bl fn_8001011C
    b lbl_fn_80551198_00000A14
lbl_fn_80551198_000009FC:
    mr r3, r31
    addi r4, r1, 0x1a0
    bl fn_80551E40
    mr r3, r31
    addi r4, r1, 0x1a0
    bl fn_8001011C
lbl_fn_80551198_00000A14:
    mr r3, r30
    li r4, 0x8
    bl fn_80551D34
    bl fn_80224610
    mr r26, r3
    mr r3, r30
    li r4, 0x9
    bl fn_80551D34
    bl fn_802245B8
    mr r27, r3
    b lbl_fn_80551198_00000BCC
lbl_fn_80551198_00000A40:
    cmpwi r3, 0x3
    bne lbl_fn_80551198_00000BCC
    mr r3, r30
    li r4, 0x1
    bl fn_80551D34
    bl fn_80551D70
    mr r24, r3
    mr r3, r25
    bl fn_80551D24
    mr r4, r24
    bl fn_8055A404
    mr r24, r3
    mr r3, r30
    li r4, 0x1
    bl fn_805389BC
    mr r28, r3
    mr r3, r30
    li r4, 0x6
    bl fn_80551D34
    bl fn_80224610
    mr r29, r3
    mr r4, r30
    addi r3, r1, 0x170
    li r5, 0x3
    bl fn_80538C18
    addi r3, r1, 0x170
    bl fn_80243EF8
    mr r3, r24
    bl fn_80551D78
    cmpwi r3, 0x0
    beq lbl_fn_80551198_00000ACC
    lfs f1, 0x174(r1)
    mr r3, r25
    bl fn_80541CF4
    stfs f1, 0x174(r1)
lbl_fn_80551198_00000ACC:
    mr r4, r31
    addi r3, r1, 0x164
    bl fn_80551E18
    cmpwi r29, 0x0
    beq lbl_fn_80551198_00000B04
    cmpwi r28, 0x0
    bne lbl_fn_80551198_00000B04
    mr r4, r30
    addi r3, r1, 0x20
    li r5, 0x7
    bl fn_80538C18
    addi r3, r1, 0x170
    addi r4, r1, 0x20
    bl fn_80012C88
lbl_fn_80551198_00000B04:
    lfs f0, lbl_80887E30
    fcmpo cr0, f31, f0
    ble lbl_fn_80551198_00000B6C
    cmpwi r28, 0x0
    bne lbl_fn_80551198_00000B8C
    addi r3, r1, 0x158
    addi r4, r1, 0x170
    addi r5, r1, 0x164
    bl fn_80013338
    fmr f1, f31
    addi r3, r1, 0x158
    bl fn_8055110C
    addi r3, r1, 0x14
    addi r4, r1, 0x164
    addi r5, r1, 0x158
    bl fn_80013410
    addi r3, r1, 0x170
    addi r4, r1, 0x14
    bl fn_8000D124
    mr r3, r31
    addi r4, r1, 0x170
    bl fn_80010490
    mr r3, r31
    addi r4, r1, 0x170
    bl fn_80551E2C
    b lbl_fn_80551198_00000B8C
lbl_fn_80551198_00000B6C:
    cmpwi r28, 0x0
    bne lbl_fn_80551198_00000B80
    mr r3, r31
    addi r4, r1, 0x170
    bl fn_80010490
lbl_fn_80551198_00000B80:
    mr r3, r31
    addi r4, r1, 0x170
    bl fn_80551E2C
lbl_fn_80551198_00000B8C:
    addi r3, r1, 0x2d0
    bl fn_80551E54
    cmpwi r28, 0x0
    beq lbl_fn_80551198_00000BB4
    addi r3, r1, 0x270
    addi r4, r1, 0x170
    bl fn_80551EA0
    addi r3, r1, 0x2d0
    addi r4, r1, 0x270
    bl fn_8008CD1C
lbl_fn_80551198_00000BB4:
    mr r3, r31
    mr r4, r28
    addi r7, r1, 0x2d0
    li r5, 0x0
    li r6, 0x1
    bl fn_8001122C
lbl_fn_80551198_00000BCC:
    cmpwi r26, 0x0
    beq lbl_fn_80551198_00000BF8
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_80010374
    addi r3, r1, 0x260
    addi r4, r1, 0x8
    bl fn_805523E0
    mr r3, r31
    mr r4, r27
    bl fn_800121F0
lbl_fn_80551198_00000BF8:
    addi r11, r1, 0x3f0
    psq_l f31, 0x418(r1), 0, 0
    lfd f31, 0x410(r1)
    psq_l f30, 0x408(r1), 0, 0
    lfd f30, 0x400(r1)
    psq_l f29, 0x3f8(r1), 0, 0
    lfd f29, 0x3f0(r1)
    bl _restgpr_24
    lwz r0, 0x424(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_80551D24(void)
{
    nofralloc
    addi r3, r3, 0x164
    blr
}

asm void fn_80551D2C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80551D34(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r5, 0x0
    blt lbl_fn_80551D34_00000C54
    lwz r0, 0x30(r3)
    cmpw r4, r0
    bge lbl_fn_80551D34_00000C54
    li r5, 0x1
lbl_fn_80551D34_00000C54:
    cmpwi r5, 0x0
    beq lbl_fn_80551D34_00000C6C
    lwz r3, 0x2c(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    blr
lbl_fn_80551D34_00000C6C:
    li r3, 0x0
    blr
}

asm void fn_80551D70(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80551D78(void)
{
    nofralloc
    lwz r3, 0x20(r3)
    subi r0, r3, 0x6
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80551D8C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80551D94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80551D94_00000CC4
    li r3, 0x0
    b lbl_fn_80551D94_00000CD0
lbl_fn_80551D94_00000CC4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_80551D94_00000CD0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80551DE0(void)
{
    nofralloc
    lfs f2, 0x28(r4)
    lfs f1, 0x24(r4)
    lfs f0, 0x20(r4)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    blr
}

asm void fn_80551DFC(void)
{
    nofralloc
    lwz r3, 0x130(r3)
    blr
}

asm void fn_80551E04(void)
{
    nofralloc
    psq_l f1, 0xd0(r4), 0, 0
    lfs f2, 0xd8(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_80551E18(void)
{
    nofralloc
    psq_l f1, 0xc4(r4), 0, 0
    lfs f2, 0xcc(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_80551E2C(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0xc4(r3), 0, 0
    stfs f2, 0xcc(r3)
    blr
}

asm void fn_80551E40(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xd8(r3)
    psq_st f1, 0xd0(r3), 0, 0
    blr
}

asm void fn_80551E54(void)
{
    nofralloc
    lfs f1, lbl_80887E30
    lfs f0, lbl_80887E34
    stfs f1, 0x2c(r3)
    stfs f1, 0x24(r3)
    stfs f1, 0x20(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x0(r3)
    blr
}

asm void fn_80551E90(void)
{
    nofralloc
    lwz r3, 0x20(r3)
    blr
}

asm void fn_80551E98(void)
{
    nofralloc
    mr r4, r3
    b fn_805F8C50
}

asm void fn_80551EA0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    lfs f7, lbl_80887E30
    stw r0, 0x134(r1)
    lfs f1, 0x4(r4)
    stw r31, 0x12c(r1)
    mr r31, r4
    lfs f0, lbl_80887E34
    fcmpu cr0, f7, f1
    stw r30, 0x128(r1)
    mr r30, r3
    stfs f7, 0x2c(r3)
    stfs f7, 0x24(r3)
    stfs f7, 0x20(r3)
    stfs f7, 0x1c(r3)
    stfs f7, 0x18(r3)
    stfs f7, 0x10(r3)
    stfs f7, 0xc(r3)
    stfs f7, 0x8(r3)
    stfs f7, 0x4(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x0(r3)
    beq lbl_fn_80551EA0_00000E54
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
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
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_80551EA0_00000E54:
    lfs f0, lbl_80887E30
    lfs f1, 0x0(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80551EA0_00000EB4
    addi r3, r1, 0x68
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
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
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_80551EA0_00000EB4:
    lfs f0, lbl_80887E30
    lfs f1, 0x8(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80551EA0_00000F14
    addi r3, r1, 0x8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
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
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_80551EA0_00000F14:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80552028(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80552030(void)
{
    nofralloc
    lfs f0, lbl_80887E30
    stwu r1, -0x20(r1)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80552030_00000F5C
    psq_l f1, 0x64(r4), 0, 0
    lfs f2, 0x6c(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80552030_000010D8
lbl_fn_80552030_00000F5C:
    lfs f0, lbl_80887E34
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80552030_00000F80
    psq_l f1, 0x70(r4), 0, 0
    lfs f2, 0x78(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80552030_000010D8
lbl_fn_80552030_00000F80:
    lwz r8, 0x5c(r4)
    li r7, 0x0
    lfs f0, 0x60(r4)
    li r5, 0x0
    subic. r0, r8, 0x1
    fmuls f3, f0, f1
    mtctr r0
    ble lbl_fn_80552030_000010C8
lbl_fn_80552030_00000FA0:
    lwz r6, 0xa0(r4)
    lfsx f0, r6, r5
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80552030_000010B8
    lfs f8, lbl_80887E30
    fcmpu cr0, f8, f3
    bne lbl_fn_80552030_00000FC4
    b lbl_fn_80552030_00000FC8
lbl_fn_80552030_00000FC4:
    fdivs f8, f3, f0
lbl_fn_80552030_00000FC8:
    cmpwi r7, 0x0
    bge lbl_fn_80552030_00000FE4
    psq_l f1, 0x64(r4), 0, 0
    lfs f2, 0x6c(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80552030_000010D8
lbl_fn_80552030_00000FE4:
    subi r0, r8, 0x1
    cmpw r7, r0
    blt lbl_fn_80552030_00001004
    psq_l f1, 0x70(r4), 0, 0
    lfs f2, 0x78(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80552030_000010D8
lbl_fn_80552030_00001004:
    cmpwi r8, 0x2
    bge lbl_fn_80552030_00001028
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80552030_000010D8
lbl_fn_80552030_00001028:
    lwz r0, 0x7c(r4)
    slwi r8, r7, 4
    lwz r5, 0x88(r4)
    addi r6, r1, 0x8
    add r7, r0, r8
    lwz r0, 0x94(r4)
    add r4, r5, r8
    lfs f5, 0xc(r7)
    lfs f3, 0x8(r7)
    add r5, r0, r8
    lfs f4, 0xc(r4)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r4)
    lfs f6, 0x4(r7)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r4)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r7)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r4)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r5)
    lfs f0, 0x8(r5)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r5)
    stfs f6, 0x8(r1)
    fmadds f3, f8, f3, f0
    lfsx f0, r8, r0
    stfs f4, 0xc(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x8(r3)
    b lbl_fn_80552030_000010D8
lbl_fn_80552030_000010B8:
    fsubs f3, f3, f0
    addi r7, r7, 0x1
    addi r5, r5, 0x4
    bdnz lbl_fn_80552030_00000FA0
lbl_fn_80552030_000010C8:
    psq_l f1, 0x64(r4), 0, 0
    lfs f2, 0x6c(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80552030_000010D8:
    addi r1, r1, 0x20
    blr
}

asm void fn_805521DC(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lfs f2, 0x8(r4)
    stw r0, 0x104(r1)
    fabs f3, f2
    lfs f0, lbl_80887E3C
    stfd f31, 0xf0(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f31, 0xf8(r1), 0, 0
    frsp f3, f3
    stfd f30, 0xe0(r1)
    fcmpo cr0, f3, f0
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    addi r31, r1, 0x50
    stw r30, 0xd8(r1)
    mr r30, r3
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bge lbl_fn_805521DC_00001154
    lfs f3, 0x50(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f3, f0
    ble lbl_fn_805521DC_00001148
    lfs f0, lbl_80887E40
    b lbl_fn_805521DC_0000114C
lbl_fn_805521DC_00001148:
    lfs f0, lbl_80887E44
lbl_fn_805521DC_0000114C:
    stfs f0, 0x48(r1)
    b lbl_fn_805521DC_00001168
lbl_fn_805521DC_00001154:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_805521DC_00001168:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887E30
    addi r4, r1, 0x38
    lfs f30, 0x68(r1)
    mr r5, r4
    lfs f31, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_80887E34
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f30, 0x98(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80887E3C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_805521DC_00001284
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80887E30
    fcmpo cr0, f3, f0
    ble lbl_fn_805521DC_00001274
    lfs f0, lbl_80887E40
    b lbl_fn_805521DC_00001278
lbl_fn_805521DC_00001274:
    lfs f0, lbl_80887E44
lbl_fn_805521DC_00001278:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_805521DC_00001298
lbl_fn_805521DC_00001284:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_805521DC_00001298:
    addi r3, r1, 0x44
    lfs f2, lbl_80887E30
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    stfs f2, 0x4c(r1)
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_80010490
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_805523E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    lfs f0, 0x8(r3)
    lfs f3, 0x4(r4)
    fsubs f4, f1, f0
    lfs f2, 0x4(r3)
    lfs f0, 0x0(r3)
    addi r3, r1, 0x8
    lfs f1, 0x0(r4)
    fsubs f2, f3, f2
    stw r0, 0x24(r1)
    fsubs f0, f1, f0
    stfs f4, 0x10(r1)
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80552434(void)
{
    nofralloc
    fcmpo cr0, f3, f1
    cror eq, lt, eq
    bne lbl_fn_80552434_00001348
    b lbl_fn_80552434_0000134C
lbl_fn_80552434_00001348:
    fmr f3, f1
lbl_fn_80552434_0000134C:
    fcmpo cr0, f2, f3
    cror eq, gt, eq
    bne lbl_fn_80552434_0000135C
    b lbl_fn_80552434_00001360
lbl_fn_80552434_0000135C:
    fmr f2, f3
lbl_fn_80552434_00001360:
    fmr f1, f2
    blr
}

asm void fn_80552464(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_24
    cmpwi r5, 0x0
    mr r26, r4
    beq lbl_fn_80552464_000013A4
    cmpwi r5, 0x3
    beq lbl_fn_80552464_00001C78
    cmpwi r5, 0x5
    beq lbl_fn_80552464_00001D10
    cmpwi r5, 0x6
    beq lbl_fn_80552464_00002290
    b lbl_fn_80552464_00002390
lbl_fn_80552464_000013A4:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80552464_000013B8
    lwz r3, 0x2c(r4)
    b lbl_fn_80552464_000013BC
lbl_fn_80552464_000013B8:
    li r3, 0x0
lbl_fn_80552464_000013BC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80552464_00001538
    mr r3, r26
    bl fn_805381A4
    mr r25, r3
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x168(r3)
    mr r27, r3
    lwz r5, 0x10(r25)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00001418
lbl_fn_80552464_000013F8:
    lwz r0, 0x164(r3)
    add r24, r0, r4
    lwz r0, 0x14(r24)
    cmpw r5, r0
    bne lbl_fn_80552464_00001410
    b lbl_fn_80552464_0000141C
lbl_fn_80552464_00001410:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80552464_000013F8
lbl_fn_80552464_00001418:
    li r24, 0x0
lbl_fn_80552464_0000141C:
    mr r4, r24
    addi r3, r1, 0x8c
    bl fn_80010B68
    mr r3, r26
    addi r5, r1, 0x8c
    li r4, 0xe
    bl fn_80538CE4
    lwz r4, 0x30(r26)
    cmpwi r4, 0xc
    ble lbl_fn_80552464_00001450
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x60
    b lbl_fn_80552464_00001454
lbl_fn_80552464_00001450:
    li r3, 0x0
lbl_fn_80552464_00001454:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80552464_000014A4
    cmpwi r4, 0xd
    mr r3, r24
    li r4, 0x0
    ble lbl_fn_80552464_0000147C
    lwz r5, 0x2c(r26)
    addi r5, r5, 0x68
    b lbl_fn_80552464_00001480
lbl_fn_80552464_0000147C:
    li r5, 0x0
lbl_fn_80552464_00001480:
    lwz r5, 0x4(r5)
    mr r8, r27
    lfs f1, lbl_80887E34
    li r6, 0x1
    lfs f2, lbl_80887E30
    li r7, 0xa
    li r9, 0x0
    li r10, 0x1
    bl fn_800119C0
lbl_fn_80552464_000014A4:
    lwz r0, 0x18(r26)
    cmpwi r0, 0x0
    ble lbl_fn_80552464_000014DC
    lwz r0, 0x30(r26)
    lwz r3, lbl_8087F540
    cmpwi r0, 0x11
    ble lbl_fn_80552464_000014CC
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x88
    b lbl_fn_80552464_000014D0
lbl_fn_80552464_000014CC:
    li r4, 0x0
lbl_fn_80552464_000014D0:
    lwz r4, 0x4(r4)
    bl fn_8048B3B8
    stw r3, 0x130(r24)
lbl_fn_80552464_000014DC:
    lwz r24, 0x18(r26)
    mr r3, r26
    lwz r25, 0x10(r26)
    bl fn_805381CC
    add r4, r25, r24
    lis r0, 0x4330
    xoris r4, r4, 0x8000
    stw r4, 0x9c(r1)
    lis r5, lbl_8075E850@ha
    lfs f4, 0x198(r3)
    stw r0, 0x98(r1)
    lfd f3, lbl_8075E850@l(r5)
    lfd f0, 0x98(r1)
    lwz r4, lbl_8087F540
    fsubs f0, f0, f3
    lfs f3, 0xb4(r4)
    fsubs f1, f0, f4
    fcmpo cr0, f1, f3
    bge lbl_fn_80552464_0000152C
    lfs f1, lbl_80887E30
lbl_fn_80552464_0000152C:
    mr r3, r26
    bl fn_80551198
    b lbl_fn_80552464_00002390
lbl_fn_80552464_00001538:
    cmpwi r0, 0x1
    bne lbl_fn_80552464_00001B04
    mr r3, r26
    bl fn_805381A4
    mr r25, r3
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x168(r3)
    mr r28, r3
    lwz r5, 0x10(r25)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00001590
lbl_fn_80552464_00001570:
    lwz r0, 0x164(r3)
    add r27, r0, r4
    lwz r0, 0x14(r27)
    cmpw r5, r0
    bne lbl_fn_80552464_00001588
    b lbl_fn_80552464_00001594
lbl_fn_80552464_00001588:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80552464_00001570
lbl_fn_80552464_00001590:
    li r27, 0x0
lbl_fn_80552464_00001594:
    lwz r0, 0x30(r26)
    cmpwi r0, 0x1
    ble lbl_fn_80552464_000015AC
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x8
    b lbl_fn_80552464_000015B0
lbl_fn_80552464_000015AC:
    li r4, 0x0
lbl_fn_80552464_000015B0:
    lwz r0, 0x4(r4)
    cmpwi r0, -0x1
    beq lbl_fn_80552464_00001A94
    lwz r5, 0x158(r3)
    li r4, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_80552464_000015F0
lbl_fn_80552464_000015D0:
    lwz r5, 0x154(r3)
    add r29, r5, r4
    lwz r5, 0x14(r29)
    cmpw r0, r5
    bne lbl_fn_80552464_000015E8
    b lbl_fn_80552464_000015F4
lbl_fn_80552464_000015E8:
    addi r4, r4, 0x84
    bdnz lbl_fn_80552464_000015D0
lbl_fn_80552464_000015F0:
    li r29, 0x0
lbl_fn_80552464_000015F4:
    cmpwi r29, 0x0
    beq lbl_fn_80552464_00001A94
    lwz r25, 0x2c(r29)
    li r0, 0x0
    stw r0, 0x44(r1)
    cmpwi r25, 0x0
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    beq lbl_fn_80552464_000016CC
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r25, r0
    ble lbl_fn_80552464_00001648
    lis r3, __files@ha
    lis r4, lbl_8075EB60@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075EB60@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80552464_00001648:
    mulli r3, r25, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_80552464_0000167C
    lis r3, __files@ha
    lis r4, lbl_80788D00@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80552464_0000167C:
    lwz r0, 0x48(r1)
    addi r5, r1, 0x50
    stw r24, 0x44(r1)
    mulli r0, r0, 0xc
    stw r25, 0x4c(r1)
    add r4, r24, r0
    mtctr r25
    cmpwi r25, 0x0
    beq lbl_fn_80552464_000016CC
lbl_fn_80552464_000016A0:
    cmpwi r4, 0x0
    beq lbl_fn_80552464_000016B8
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x8(r4)
lbl_fn_80552464_000016B8:
    lwz r3, 0x48(r1)
    addi r4, r4, 0xc
    addi r0, r3, 0x1
    stw r0, 0x48(r1)
    bdnz lbl_fn_80552464_000016A0
lbl_fn_80552464_000016CC:
    lwz r5, 0x44(r1)
    li r7, 0x0
    li r3, 0x0
    li r4, 0x0
    b lbl_fn_80552464_00001708
lbl_fn_80552464_000016E0:
    lwz r0, 0x28(r29)
    add r8, r5, r4
    addi r7, r7, 0x1
    addi r4, r4, 0xc
    add r6, r0, r3
    addi r3, r3, 0x10
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x8(r8)
lbl_fn_80552464_00001708:
    lwz r0, 0x2c(r29)
    cmpw r7, r0
    blt lbl_fn_80552464_000016E0
    lwz r31, 0x48(r1)
    addi r29, r27, 0x5c
    stw r31, 0x5c(r27)
    addi r3, r29, 0x20
    lwz r30, 0x44(r1)
    subi r4, r31, 0x1
    bl fn_8032B314
    addi r3, r29, 0x2c
    subi r4, r31, 0x1
    bl fn_8032B314
    addi r3, r29, 0x38
    subi r4, r31, 0x1
    bl fn_8032B314
    mr r4, r31
    addi r3, r1, 0x5c
    bl fn_8032B6F8
    mr r4, r31
    addi r3, r1, 0x68
    bl fn_8032B6F8
    mr r4, r31
    addi r3, r1, 0x74
    bl fn_8032B6F8
    cmpwi cr1, r31, 0x0
    li r3, 0x0
    li r5, 0x0
    ble cr1, lbl_fn_80552464_00001994
    cmpwi r31, 0x8
    subi r6, r31, 0x8
    ble lbl_fn_80552464_00001948
    li r7, 0x0
    blt cr1, lbl_fn_80552464_000017A4
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r31, r0
    bgt lbl_fn_80552464_000017A4
    li r7, 0x1
lbl_fn_80552464_000017A4:
    cmpwi r7, 0x0
    beq lbl_fn_80552464_00001948
    addi r0, r6, 0x7
    mr r4, r30
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80552464_00001948
lbl_fn_80552464_000017C4:
    lwz r6, 0x5c(r1)
    addi r3, r3, 0x8
    lfs f0, 0x0(r4)
    stfsx f0, r6, r5
    lwz r6, 0x68(r1)
    lfs f0, 0x4(r4)
    stfsx f0, r6, r5
    lwz r6, 0x74(r1)
    lfs f0, 0x8(r4)
    stfsx f0, r6, r5
    lwz r0, 0x5c(r1)
    lfs f0, 0xc(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x68(r1)
    lfs f0, 0x10(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x74(r1)
    lfs f0, 0x14(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x5c(r1)
    lfs f0, 0x18(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x68(r1)
    lfs f0, 0x1c(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x74(r1)
    lfs f0, 0x20(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x5c(r1)
    lfs f0, 0x24(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x68(r1)
    lfs f0, 0x28(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x74(r1)
    lfs f0, 0x2c(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x5c(r1)
    lfs f0, 0x30(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x68(r1)
    lfs f0, 0x34(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x74(r1)
    lfs f0, 0x38(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x5c(r1)
    lfs f0, 0x3c(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x68(r1)
    lfs f0, 0x40(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x74(r1)
    lfs f0, 0x44(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x5c(r1)
    lfs f0, 0x48(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x68(r1)
    lfs f0, 0x4c(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x74(r1)
    lfs f0, 0x50(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x5c(r1)
    lfs f0, 0x54(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x68(r1)
    lfs f0, 0x58(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x74(r1)
    lfs f0, 0x5c(r4)
    addi r4, r4, 0x60
    add r6, r0, r5
    addi r5, r5, 0x20
    stfs f0, 0x1c(r6)
    bdnz lbl_fn_80552464_000017C4
lbl_fn_80552464_00001948:
    mulli r5, r3, 0xc
    subf r0, r3, r31
    slwi r4, r3, 2
    add r5, r30, r5
    mtctr r0
    cmpw r3, r31
    bge lbl_fn_80552464_00001994
lbl_fn_80552464_00001964:
    lwz r3, 0x5c(r1)
    lfs f0, 0x0(r5)
    stfsx f0, r3, r4
    lwz r3, 0x68(r1)
    lfs f0, 0x4(r5)
    stfsx f0, r3, r4
    lwz r3, 0x74(r1)
    lfs f0, 0x8(r5)
    addi r5, r5, 0xc
    stfsx f0, r3, r4
    addi r4, r4, 0x4
    bdnz lbl_fn_80552464_00001964
lbl_fn_80552464_00001994:
    lwz r5, 0x20(r29)
    mr r3, r29
    lwz r4, 0x5c(r1)
    bl fn_8032B7F0
    lwz r5, 0x2c(r29)
    mr r3, r29
    lwz r4, 0x68(r1)
    bl fn_8032B7F0
    lwz r5, 0x38(r29)
    mr r3, r29
    lwz r4, 0x74(r1)
    bl fn_8032B7F0
    lfs f2, 0x8(r30)
    subi r4, r31, 0x1
    psq_l f1, 0x0(r30), 0, 0
    mulli r0, r4, 0xc
    psq_st f1, 0x8(r29), 0, 0
    addi r3, r29, 0x44
    lfs f0, lbl_80887E30
    stfs f2, 0x10(r29)
    add r5, r30, r0
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x14(r29), 0, 0
    stfs f2, 0x1c(r29)
    stfs f0, 0x4(r29)
    bl fn_8032BE88
    subi r31, r31, 0x1
    li r24, 0x0
    li r30, 0x0
    b lbl_fn_80552464_00001A40
lbl_fn_80552464_00001A10:
    lwz r25, 0x44(r29)
    mr r3, r29
    mr r4, r24
    bl fn_8032C1EC
    stfsx f1, r25, r30
    addi r24, r24, 0x1
    lwz r3, 0x44(r29)
    lfs f3, 0x4(r29)
    lfsx f0, r3, r30
    addi r30, r30, 0x4
    fadds f0, f3, f0
    stfs f0, 0x4(r29)
lbl_fn_80552464_00001A40:
    cmpw r24, r31
    blt lbl_fn_80552464_00001A10
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x68
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x5c
    li r4, -0x1
    bl fn_8000D844
    addic. r0, r1, 0x44
    beq lbl_fn_80552464_00001A94
    beq lbl_fn_80552464_00001A94
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80552464_00001A94
    lwz r0, 0x48(r1)
    subf r0, r0, r0
    stw r0, 0x48(r1)
    bl dtor_80084684
lbl_fn_80552464_00001A94:
    lwz r4, 0x30(r26)
    cmpwi r4, 0x3
    ble lbl_fn_80552464_00001AAC
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x18
    b lbl_fn_80552464_00001AB0
lbl_fn_80552464_00001AAC:
    li r3, 0x0
lbl_fn_80552464_00001AB0:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80552464_00002390
    cmpwi r4, 0x4
    mr r3, r27
    li r4, 0x0
    ble lbl_fn_80552464_00001AD8
    lwz r5, 0x2c(r26)
    addi r5, r5, 0x20
    b lbl_fn_80552464_00001ADC
lbl_fn_80552464_00001AD8:
    li r5, 0x0
lbl_fn_80552464_00001ADC:
    lwz r5, 0x4(r5)
    mr r8, r28
    lfs f1, lbl_80887E34
    li r6, 0x1
    lfs f2, lbl_80887E30
    li r7, 0xa
    li r9, 0x0
    li r10, 0x1
    bl fn_800119C0
    b lbl_fn_80552464_00002390
lbl_fn_80552464_00001B04:
    cmpwi r0, 0x2
    bne lbl_fn_80552464_00001C04
    mr r3, r26
    bl fn_805381A4
    mr r27, r3
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x168(r3)
    mr r8, r3
    lwz r5, 0x10(r27)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00001B5C
lbl_fn_80552464_00001B3C:
    lwz r0, 0x164(r3)
    add r24, r0, r4
    lwz r0, 0x14(r24)
    cmpw r5, r0
    bne lbl_fn_80552464_00001B54
    b lbl_fn_80552464_00001B60
lbl_fn_80552464_00001B54:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80552464_00001B3C
lbl_fn_80552464_00001B5C:
    li r24, 0x0
lbl_fn_80552464_00001B60:
    lwz r4, 0x30(r26)
    cmpwi r4, 0x8
    ble lbl_fn_80552464_00001B78
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x40
    b lbl_fn_80552464_00001B7C
lbl_fn_80552464_00001B78:
    li r3, 0x0
lbl_fn_80552464_00001B7C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80552464_00001BC8
    cmpwi r4, 0x9
    mr r3, r24
    li r4, 0x0
    ble lbl_fn_80552464_00001BA4
    lwz r5, 0x2c(r26)
    addi r5, r5, 0x48
    b lbl_fn_80552464_00001BA8
lbl_fn_80552464_00001BA4:
    li r5, 0x0
lbl_fn_80552464_00001BA8:
    lwz r5, 0x4(r5)
    li r6, 0x1
    lfs f1, lbl_80887E34
    li r7, 0xa
    lfs f2, lbl_80887E30
    li r9, 0x0
    li r10, 0x1
    bl fn_800119C0
lbl_fn_80552464_00001BC8:
    lwz r0, 0x18(r26)
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00002390
    lwz r0, 0x30(r26)
    lwz r3, lbl_8087F540
    cmpwi r0, 0xa
    ble lbl_fn_80552464_00001BF0
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x50
    b lbl_fn_80552464_00001BF4
lbl_fn_80552464_00001BF0:
    li r4, 0x0
lbl_fn_80552464_00001BF4:
    lwz r4, 0x4(r4)
    bl fn_8048B3B8
    stw r3, 0x130(r24)
    b lbl_fn_80552464_00002390
lbl_fn_80552464_00001C04:
    cmpwi r0, 0x3
    bne lbl_fn_80552464_00002390
    mr r3, r26
    bl fn_805381A4
    mr r27, r3
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r5, 0x0
    lwz r6, 0x10(r27)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00001C58
lbl_fn_80552464_00001C38:
    lwz r0, 0x164(r3)
    add r4, r0, r5
    lwz r0, 0x14(r4)
    cmpw r6, r0
    bne lbl_fn_80552464_00001C50
    b lbl_fn_80552464_00001C5C
lbl_fn_80552464_00001C50:
    addi r5, r5, 0x1c0
    bdnz lbl_fn_80552464_00001C38
lbl_fn_80552464_00001C58:
    li r4, 0x0
lbl_fn_80552464_00001C5C:
    addi r3, r1, 0x80
    bl fn_80010B68
    mr r3, r26
    addi r5, r1, 0x80
    li r4, 0x7
    bl fn_80538CE4
    b lbl_fn_80552464_00002390
lbl_fn_80552464_00001C78:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00001C8C
    lwz r3, 0x2c(r4)
    b lbl_fn_80552464_00001C90
lbl_fn_80552464_00001C8C:
    li r3, 0x0
lbl_fn_80552464_00001C90:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80552464_00001CA4
    cmpwi r0, 0x2
    bne lbl_fn_80552464_00002390
lbl_fn_80552464_00001CA4:
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00002390
    mr r3, r26
    bl fn_805381A4
    mr r27, r3
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r27)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00001CFC
lbl_fn_80552464_00001CDC:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_80552464_00001CF4
    b lbl_fn_80552464_00001D00
lbl_fn_80552464_00001CF4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80552464_00001CDC
lbl_fn_80552464_00001CFC:
    li r6, 0x0
lbl_fn_80552464_00001D00:
    lwz r3, lbl_8087F540
    lwz r4, 0x130(r6)
    bl fn_8048C884
    b lbl_fn_80552464_00002390
lbl_fn_80552464_00001D10:
    lwz r5, 0x30(r4)
    cmpwi r5, 0x0
    ble lbl_fn_80552464_00001D24
    lwz r3, 0x2c(r4)
    b lbl_fn_80552464_00001D28
lbl_fn_80552464_00001D24:
    li r3, 0x0
lbl_fn_80552464_00001D28:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80552464_00002280
    cmpwi r5, 0x1
    ble lbl_fn_80552464_00001D48
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x8
    b lbl_fn_80552464_00001D4C
lbl_fn_80552464_00001D48:
    li r3, 0x0
lbl_fn_80552464_00001D4C:
    lwz r24, 0x4(r3)
    cmpwi r24, -0x1
    beq lbl_fn_80552464_00002280
    mr r3, r26
    bl fn_805381A4
    mr r27, r3
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r27)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00001DA4
lbl_fn_80552464_00001D84:
    lwz r0, 0x164(r3)
    add r29, r0, r4
    lwz r0, 0x14(r29)
    cmpw r5, r0
    bne lbl_fn_80552464_00001D9C
    b lbl_fn_80552464_00001DA8
lbl_fn_80552464_00001D9C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80552464_00001D84
lbl_fn_80552464_00001DA4:
    li r29, 0x0
lbl_fn_80552464_00001DA8:
    lwz r0, 0x158(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00001DDC
lbl_fn_80552464_00001DBC:
    lwz r0, 0x154(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r24, r0
    bne lbl_fn_80552464_00001DD4
    b lbl_fn_80552464_00001DE0
lbl_fn_80552464_00001DD4:
    addi r4, r4, 0x84
    bdnz lbl_fn_80552464_00001DBC
lbl_fn_80552464_00001DDC:
    li r30, 0x0
lbl_fn_80552464_00001DE0:
    cmpwi r30, 0x0
    beq lbl_fn_80552464_00002280
    lwz r25, 0x2c(r30)
    li r0, 0x0
    stw r0, 0x8(r1)
    cmpwi r25, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    beq lbl_fn_80552464_00001EB8
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r25, r0
    ble lbl_fn_80552464_00001E34
    lis r3, __files@ha
    lis r4, lbl_8075EB60@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075EB60@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80552464_00001E34:
    mulli r3, r25, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_80552464_00001E68
    lis r3, __files@ha
    lis r4, lbl_80788D00@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80552464_00001E68:
    lwz r0, 0xc(r1)
    addi r5, r1, 0x14
    stw r24, 0x8(r1)
    mulli r0, r0, 0xc
    stw r25, 0x10(r1)
    add r4, r24, r0
    mtctr r25
    cmpwi r25, 0x0
    beq lbl_fn_80552464_00001EB8
lbl_fn_80552464_00001E8C:
    cmpwi r4, 0x0
    beq lbl_fn_80552464_00001EA4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x1c(r1)
    stfs f2, 0x8(r4)
lbl_fn_80552464_00001EA4:
    lwz r3, 0xc(r1)
    addi r4, r4, 0xc
    addi r0, r3, 0x1
    stw r0, 0xc(r1)
    bdnz lbl_fn_80552464_00001E8C
lbl_fn_80552464_00001EB8:
    lwz r5, 0x8(r1)
    li r7, 0x0
    li r3, 0x0
    li r4, 0x0
    b lbl_fn_80552464_00001EF4
lbl_fn_80552464_00001ECC:
    lwz r0, 0x28(r30)
    add r8, r5, r4
    addi r7, r7, 0x1
    addi r4, r4, 0xc
    add r6, r0, r3
    addi r3, r3, 0x10
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x8(r8)
lbl_fn_80552464_00001EF4:
    lwz r0, 0x2c(r30)
    cmpw r7, r0
    blt lbl_fn_80552464_00001ECC
    addi r31, r29, 0x5c
    lwz r29, 0xc(r1)
    stw r29, 0x0(r31)
    addi r3, r31, 0x20
    lwz r30, 0x8(r1)
    subi r4, r29, 0x1
    bl fn_8032B314
    addi r3, r31, 0x2c
    subi r4, r29, 0x1
    bl fn_8032B314
    addi r3, r31, 0x38
    subi r4, r29, 0x1
    bl fn_8032B314
    mr r4, r29
    addi r3, r1, 0x20
    bl fn_8032B6F8
    mr r4, r29
    addi r3, r1, 0x2c
    bl fn_8032B6F8
    mr r4, r29
    addi r3, r1, 0x38
    bl fn_8032B6F8
    cmpwi cr1, r29, 0x0
    li r3, 0x0
    li r5, 0x0
    ble cr1, lbl_fn_80552464_00002180
    cmpwi r29, 0x8
    subi r6, r29, 0x8
    ble lbl_fn_80552464_00002134
    li r7, 0x0
    blt cr1, lbl_fn_80552464_00001F90
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r29, r0
    bgt lbl_fn_80552464_00001F90
    li r7, 0x1
lbl_fn_80552464_00001F90:
    cmpwi r7, 0x0
    beq lbl_fn_80552464_00002134
    addi r0, r6, 0x7
    mr r4, r30
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80552464_00002134
lbl_fn_80552464_00001FB0:
    lwz r6, 0x20(r1)
    addi r3, r3, 0x8
    lfs f0, 0x0(r4)
    stfsx f0, r6, r5
    lwz r6, 0x2c(r1)
    lfs f0, 0x4(r4)
    stfsx f0, r6, r5
    lwz r6, 0x38(r1)
    lfs f0, 0x8(r4)
    stfsx f0, r6, r5
    lwz r0, 0x20(r1)
    lfs f0, 0xc(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x10(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x14(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x18(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x1c(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x20(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x24(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x28(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x2c(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x30(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x34(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x38(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x3c(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x40(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x44(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x48(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x4c(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x50(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x54(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x58(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x5c(r4)
    addi r4, r4, 0x60
    add r6, r0, r5
    addi r5, r5, 0x20
    stfs f0, 0x1c(r6)
    bdnz lbl_fn_80552464_00001FB0
lbl_fn_80552464_00002134:
    mulli r5, r3, 0xc
    subf r0, r3, r29
    slwi r4, r3, 2
    add r5, r30, r5
    mtctr r0
    cmpw r3, r29
    bge lbl_fn_80552464_00002180
lbl_fn_80552464_00002150:
    lwz r3, 0x20(r1)
    lfs f0, 0x0(r5)
    stfsx f0, r3, r4
    lwz r3, 0x2c(r1)
    lfs f0, 0x4(r5)
    stfsx f0, r3, r4
    lwz r3, 0x38(r1)
    lfs f0, 0x8(r5)
    addi r5, r5, 0xc
    stfsx f0, r3, r4
    addi r4, r4, 0x4
    bdnz lbl_fn_80552464_00002150
lbl_fn_80552464_00002180:
    lwz r5, 0x20(r31)
    mr r3, r31
    lwz r4, 0x20(r1)
    bl fn_8032B7F0
    lwz r5, 0x2c(r31)
    mr r3, r31
    lwz r4, 0x2c(r1)
    bl fn_8032B7F0
    lwz r5, 0x38(r31)
    mr r3, r31
    lwz r4, 0x38(r1)
    bl fn_8032B7F0
    lfs f2, 0x8(r30)
    subi r4, r29, 0x1
    psq_l f1, 0x0(r30), 0, 0
    mulli r0, r4, 0xc
    psq_st f1, 0x8(r31), 0, 0
    addi r3, r31, 0x44
    lfs f0, lbl_80887E30
    stfs f2, 0x10(r31)
    add r5, r30, r0
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    stfs f0, 0x4(r31)
    bl fn_8032BE88
    subi r28, r29, 0x1
    li r24, 0x0
    li r27, 0x0
    b lbl_fn_80552464_0000222C
lbl_fn_80552464_000021FC:
    lwz r29, 0x44(r31)
    mr r3, r31
    mr r4, r24
    bl fn_8032C1EC
    stfsx f1, r29, r27
    addi r24, r24, 0x1
    lwz r3, 0x44(r31)
    lfs f3, 0x4(r31)
    lfsx f0, r3, r27
    addi r27, r27, 0x4
    fadds f0, f3, f0
    stfs f0, 0x4(r31)
lbl_fn_80552464_0000222C:
    cmpw r24, r28
    blt lbl_fn_80552464_000021FC
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_8000D844
    addic. r0, r1, 0x8
    beq lbl_fn_80552464_00002280
    beq lbl_fn_80552464_00002280
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80552464_00002280
    lwz r0, 0xc(r1)
    subf r0, r0, r0
    stw r0, 0xc(r1)
    bl dtor_80084684
lbl_fn_80552464_00002280:
    lfs f1, lbl_80887E30
    mr r3, r26
    bl fn_80551198
    b lbl_fn_80552464_00002390
lbl_fn_80552464_00002290:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80552464_000022A4
    lwz r3, 0x2c(r4)
    b lbl_fn_80552464_000022A8
lbl_fn_80552464_000022A4:
    li r3, 0x0
lbl_fn_80552464_000022A8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80552464_00002390
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x30(r26)
    mr r24, r3
    cmpwi r0, 0x1
    ble lbl_fn_80552464_000022D8
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x8
    b lbl_fn_80552464_000022DC
lbl_fn_80552464_000022D8:
    li r4, 0x0
lbl_fn_80552464_000022DC:
    lwz r0, 0x168(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80552464_00002314
lbl_fn_80552464_000022F4:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_80552464_0000230C
    b lbl_fn_80552464_00002318
lbl_fn_80552464_0000230C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80552464_000022F4
lbl_fn_80552464_00002314:
    li r6, 0x0
lbl_fn_80552464_00002318:
    lwz r0, 0x20(r6)
    cmpwi r0, 0x6
    bne lbl_fn_80552464_00002390
    mr r3, r26
    li r4, 0x3
    bl fn_80538DC8
    lwz r0, 0x30(r26)
    cmpwi r0, 0x8
    ble lbl_fn_80552464_00002348
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x40
    b lbl_fn_80552464_0000234C
lbl_fn_80552464_00002348:
    li r3, 0x0
lbl_fn_80552464_0000234C:
    lfs f3, 0x4(r3)
    mr r3, r24
    lfs f0, lbl_80887E48
    fmuls f1, f0, f3
    bl fn_80541CF4
    lfs f0, lbl_80887E4C
    lwz r0, 0x30(r26)
    fmuls f0, f0, f1
    cmpwi r0, 0x8
    ble lbl_fn_80552464_00002380
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x40
    b lbl_fn_80552464_00002384
lbl_fn_80552464_00002380:
    li r3, 0x0
lbl_fn_80552464_00002384:
    li r0, 0x3
    stw r0, 0x0(r3)
    stfs f0, 0x4(r3)
lbl_fn_80552464_00002390:
    addi r11, r1, 0xc0
    li r3, 0x0
    bl _restgpr_24
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
