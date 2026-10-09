#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004D314(void);
extern void fn_8004D388(void);
extern void fn_8004ECC0(void);
extern void fn_8004ED34(void);
extern void fn_8006B174(void);
extern void fn_80084320(void);
extern void fn_8008B130(void);
extern void fn_80125474(void);
extern void fn_8016E970(void);
extern void fn_801720AC(void);
extern void fn_80172EFC(void);
extern void fn_80174104(void);
extern void fn_801749EC(void);
extern void fn_80179D44(void);
extern void fn_8018059C(void);
extern void fn_801C48B4(void);
extern void fn_801C59D4(void);
extern void fn_801C61EC(void);
extern void fn_801C8938(void);
extern void fn_80370174(void);
extern void fn_803750E4(void);
extern void fn_803761DC(void);
extern void fn_805B96AC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8067E23C(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_80695AD0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80737808[];
extern u8 lbl_80737810[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087FA20;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881978;
extern u32 lbl_80881984;
extern u32 lbl_80881988;
extern u32 lbl_80881994;
extern u32 lbl_808819A0;
extern u32 lbl_808819A4;
extern u32 lbl_808819A8;
extern u32 lbl_808819B0;
extern u32 lbl_808819B4;
extern u32 lbl_808819B8;
extern u32 lbl_808819BC;
extern u32 lbl_808819C4;
extern u32 lbl_808819C8;
extern u32 lbl_808819CC;
extern u32 lbl_808819F0;
extern u32 lbl_808819FC;
extern u32 lbl_80881A00;
extern u32 lbl_80881A0C;
extern u32 lbl_80881A10;
extern u32 lbl_80881A14;
extern u32 lbl_80881A18;
extern u32 lbl_80881A1C;
extern u32 lbl_80881A20;
extern u32 lbl_80881A24;
extern u32 lbl_80881A28;
extern u32 lbl_80881A2C;
extern u32 lbl_80881A30;
extern u32 lbl_80881A34;
extern u32 lbl_80881A38;
extern u32 lbl_80881A3C;
extern u32 lbl_80881A40;
extern u32 lbl_80881A44;
extern u32 lbl_80881A48;
extern u32 lbl_80881A4C;
extern u32 lbl_80881A50;
extern u32 lbl_80881A54;
extern u32 lbl_80881A58;

/* Function declarations */
void fn_8013CB68(void);

asm void fn_8013CB68(void)
{
    nofralloc
    stwu r1, -0x6f0(r1)
    mflr r0
    stw r0, 0x6f4(r1)
    addi r11, r1, 0x6b0
    stfd f31, 0x6e0(r1)
    psq_st f31, 0x6e8(r1), 0, 0
    stfd f30, 0x6d0(r1)
    psq_st f30, 0x6d8(r1), 0, 0
    stfd f29, 0x6c0(r1)
    psq_st f29, 0x6c8(r1), 0, 0
    stfd f28, 0x6b0(r1)
    psq_st f28, 0x6b8(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0x55c(r3)
    lis r24, lbl_8077A720@ha
    fmr f28, f1
    mr r27, r3
    fmr f29, f2
    cmpwi r0, 0x6
    mr r25, r5
    addi r24, r24, lbl_8077A720@l
    bne lbl_fn_8013CB68_00000070
    lwz r0, 0x560(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8013CB68_00000070
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 25, 22
    stw r0, 0x54c(r3)
lbl_fn_8013CB68_00000070:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_8013CB68_00000088
    lfs f0, lbl_80881A00
    fmuls f29, f2, f0
lbl_fn_8013CB68_00000088:
    psq_l f1, 0x528(r3), 0, 0
    addi r5, r1, 0x3e0
    lfs f2, 0x530(r3)
    addi r6, r1, 0x3d4
    stfs f2, 0x3e8(r1)
    psq_st f1, 0x0(r5), 0, 0
    lwz r0, 0xf54(r3)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    cmpwi r0, 0x0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x3dc(r1)
    beq lbl_fn_8013CB68_000000CC
    lfs f3, 0x3d8(r1)
    lfs f0, lbl_80881A0C
    fadds f0, f3, f0
    stfs f0, 0x3d8(r1)
lbl_fn_8013CB68_000000CC:
    lfs f3, 0x4(r4)
    lis r3, lbl_80737810@ha
    lfs f0, 0x3d8(r1)
    lfd f2, lbl_80737810@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f31, f0
    ble lbl_fn_8013CB68_000000FC
    lfs f0, lbl_80881A10
    fsubs f31, f31, f0
lbl_fn_8013CB68_000000FC:
    lfs f0, lbl_80881A14
    fcmpo cr0, f31, f0
    bge lbl_fn_8013CB68_00000110
    lfs f0, lbl_80881A10
    fadds f31, f31, f0
lbl_fn_8013CB68_00000110:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x12a4(r27)
    lfs f0, 0x3a4(r3)
    lfs f3, 0x400(r27)
    extrwi. r0, r0, 1, 28
    lfs f1, 0x3d8(r1)
    fmuls f30, f0, f3
    lfs f5, 0x56c(r27)
    fmuls f29, f29, f30
    beq lbl_fn_8013CB68_00000154
    lwz r0, 0x54c(r27)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_8013CB68_00000154
    lfs f0, lbl_80881994
    fmuls f5, f5, f0
lbl_fn_8013CB68_00000154:
    lfs f0, lbl_80881A0C
    lis r3, lbl_80737810@ha
    lfs f3, lbl_808819B4
    fdivs f4, f31, f0
    lfs f0, lbl_80881964
    lfd f2, lbl_80737810@l(r3)
    fabs f4, f4
    frsp f4, f4
    fmuls f3, f4, f3
    fadds f0, f0, f3
    fmuls f5, f5, f0
    fmuls f0, f31, f5
    fadds f1, f1, f0
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f5, f0
    ble lbl_fn_8013CB68_000001A4
    lfs f0, lbl_80881A10
    fsubs f5, f5, f0
lbl_fn_8013CB68_000001A4:
    lfs f0, lbl_80881A14
    fcmpo cr0, f5, f0
    bge lbl_fn_8013CB68_000001B8
    lfs f0, lbl_80881A10
    fadds f5, f5, f0
lbl_fn_8013CB68_000001B8:
    lfs f4, 0x570(r27)
    lfs f3, lbl_80881A18
    lfs f0, lbl_80881A1C
    fmuls f3, f4, f3
    stfs f5, 0x3d8(r1)
    stfs f3, 0x570(r27)
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_000001E0
    lfs f0, lbl_8088196C
    stfs f0, 0x570(r27)
lbl_fn_8013CB68_000001E0:
    lfs f0, lbl_80881964
    fcmpo cr0, f28, f0
    ble lbl_fn_8013CB68_000001F0
    fmr f28, f0
lbl_fn_8013CB68_000001F0:
    lfs f0, lbl_808819A0
    fcmpo cr0, f28, f0
    ble lbl_fn_8013CB68_00000274
    fsubs f5, f28, f0
    lfs f4, lbl_808819A4
    lfs f3, 0x570(r27)
    lfs f0, lbl_808819A8
    fdivs f28, f5, f4
    lfs f4, lbl_80881988
    fcmpo cr0, f3, f0
    fmuls f28, f28, f29
    bge lbl_fn_8013CB68_00000224
    lfs f4, lbl_8088196C
lbl_fn_8013CB68_00000224:
    lfs f3, lbl_80881A0C
    lfs f0, lbl_8088196C
    fdivs f3, f31, f3
    fabs f3, f3
    frsp f3, f3
    fsubs f6, f3, f4
    fcmpo cr0, f6, f0
    bge lbl_fn_8013CB68_00000248
    fmr f6, f0
lbl_fn_8013CB68_00000248:
    lfs f5, lbl_80881964
    lfs f3, lbl_80881A20
    fsubs f4, f5, f4
    lfs f0, lbl_8088196C
    fdivs f6, f6, f4
    fnmsubs f3, f3, f6, f5
    fmuls f28, f28, f3
    fcmpo cr0, f28, f0
    bge lbl_fn_8013CB68_00000278
    fmr f28, f0
    b lbl_fn_8013CB68_00000278
lbl_fn_8013CB68_00000274:
    lfs f28, lbl_8088196C
lbl_fn_8013CB68_00000278:
    lfs f3, lbl_808819FC
    lfs f0, lbl_808819A0
    lfs f5, 0x580(r27)
    fmuls f6, f3, f31
    lfs f3, lbl_80881988
    fmuls f4, f0, f5
    lfs f0, lbl_80881A1C
    fmsubs f3, f3, f6, f4
    fadds f3, f5, f3
    stfs f3, 0x580(r27)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_000002B8
    lfs f0, lbl_8088196C
    stfs f0, 0x580(r27)
lbl_fn_8013CB68_000002B8:
    lfs f3, lbl_80881A28
    mr r3, r27
    lfs f4, 0x570(r27)
    lfs f0, lbl_80881A24
    fmuls f3, f3, f4
    fmsubs f0, f0, f28, f3
    fadds f0, f4, f0
    stfs f0, 0x570(r27)
    lwz r12, 0x0(r27)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_808819FC
    lfs f4, lbl_80881964
    fmuls f0, f0, f30
    fcmpo cr0, f4, f0
    bge lbl_fn_8013CB68_00000300
    b lbl_fn_8013CB68_00000304
lbl_fn_8013CB68_00000300:
    fmr f4, f0
lbl_fn_8013CB68_00000304:
    lfs f0, lbl_808819FC
    lfs f3, 0x574(r27)
    fmuls f0, f0, f30
    lfs f5, lbl_80881964
    fnmsubs f3, f3, f4, f3
    fcmpo cr0, f5, f0
    stfs f3, 0x574(r27)
    bge lbl_fn_8013CB68_00000328
    b lbl_fn_8013CB68_0000032C
lbl_fn_8013CB68_00000328:
    fmr f5, f0
lbl_fn_8013CB68_0000032C:
    lfs f0, 0x57c(r27)
    lfs f1, 0x3d8(r1)
    fnmsubs f0, f0, f5, f0
    stfs f0, 0x57c(r27)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x570(r27)
    lfs f0, lbl_8088196C
    lfs f1, 0x3d8(r1)
    fmuls f3, f3, f4
    stfs f0, 0x3cc(r1)
    stfs f3, 0x3c8(r1)
    bl fn_8068A850
    frsp f3, f1
    lfs f0, 0x570(r27)
    lfs f4, lbl_80881964
    fmuls f0, f0, f3
    fcmpo cr0, f4, f30
    stfs f0, 0x3d0(r1)
    bge lbl_fn_8013CB68_00000380
    b lbl_fn_8013CB68_00000384
lbl_fn_8013CB68_00000380:
    fmr f4, f30
lbl_fn_8013CB68_00000384:
    lfs f0, 0x3c8(r1)
    lfs f3, lbl_80881964
    fmuls f0, f0, f4
    fcmpo cr0, f3, f30
    stfs f0, 0x3c8(r1)
    bge lbl_fn_8013CB68_000003A0
    b lbl_fn_8013CB68_000003A4
lbl_fn_8013CB68_000003A0:
    fmr f3, f30
lbl_fn_8013CB68_000003A4:
    lfs f0, 0x3cc(r1)
    lfs f4, lbl_80881964
    fmuls f0, f0, f3
    fcmpo cr0, f4, f30
    stfs f0, 0x3cc(r1)
    bge lbl_fn_8013CB68_000003C0
    b lbl_fn_8013CB68_000003C4
lbl_fn_8013CB68_000003C0:
    fmr f4, f30
lbl_fn_8013CB68_000003C4:
    lfs f0, 0x3d0(r1)
    fmuls f0, f0, f4
    stfs f0, 0x3d0(r1)
    lwz r3, 0x958(r27)
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8013CB68_00000424
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x560(r1)
    lis r3, lbl_80737808@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_80737808@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80881A2C
    lfs f0, 0x578(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x564(r1)
    lfd f4, 0x560(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fsubs f0, f0, f3
    stfs f0, 0x578(r27)
    b lbl_fn_8013CB68_000004EC
lbl_fn_8013CB68_00000424:
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_8013CB68_000004EC
    lwz r0, 0x54c(r27)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_8013CB68_000004EC
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_8013CB68_00000488
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00000488
    lwz r3, 0x560(r27)
    subi r0, r3, 0xd
    cmplwi r0, 0x2
    ble lbl_fn_8013CB68_000004EC
    subi r0, r3, 0x1d
    cmplwi r0, 0x1
    ble lbl_fn_8013CB68_000004EC
    cmpwi r3, 0xb
    beq lbl_fn_8013CB68_000004EC
    cmpwi r3, 0x32
    beq lbl_fn_8013CB68_000004EC
lbl_fn_8013CB68_00000488:
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x560(r1)
    lis r3, lbl_80737808@ha
    lwz r0, 0x30(r4)
    lfd f6, lbl_80737808@l(r3)
    mullw r0, r0, r0
    lfs f4, lbl_80881A2C
    lfs f3, 0x578(r27)
    lfs f0, lbl_8088196C
    xoris r0, r0, 0x8000
    stw r0, 0x564(r1)
    lfd f5, 0x560(r1)
    fsubs f5, f5, f6
    fdivs f4, f4, f5
    fmadds f3, f30, f4, f3
    stfs f3, 0x578(r27)
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_000004EC
    lfs f0, lbl_80881A30
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_000004E4
    b lbl_fn_8013CB68_000004E8
lbl_fn_8013CB68_000004E4:
    fmr f3, f0
lbl_fn_8013CB68_000004E8:
    stfs f3, 0x578(r27)
lbl_fn_8013CB68_000004EC:
    lfs f4, lbl_80881964
    fcmpo cr0, f4, f30
    bge lbl_fn_8013CB68_000004FC
    b lbl_fn_8013CB68_00000500
lbl_fn_8013CB68_000004FC:
    fmr f4, f30
lbl_fn_8013CB68_00000500:
    lfs f3, 0x6b8(r27)
    lfs f0, 0x3c8(r1)
    lfs f5, lbl_80881964
    fmadds f0, f3, f4, f0
    fcmpo cr0, f5, f30
    stfs f0, 0x3c8(r1)
    bge lbl_fn_8013CB68_00000520
    b lbl_fn_8013CB68_00000524
lbl_fn_8013CB68_00000520:
    fmr f5, f30
lbl_fn_8013CB68_00000524:
    lfs f4, 0x6c0(r27)
    lfs f3, 0x3d0(r1)
    lfs f0, lbl_80881A34
    fmadds f3, f4, f5, f3
    lfs f4, 0x3cc(r1)
    fmuls f0, f0, f30
    lfs f5, lbl_80881964
    stfs f3, 0x3d0(r1)
    lfs f3, 0x6bc(r27)
    fcmpo cr0, f5, f0
    fadds f3, f4, f3
    stfs f3, 0x3cc(r1)
    bge lbl_fn_8013CB68_0000055C
    b lbl_fn_8013CB68_00000560
lbl_fn_8013CB68_0000055C:
    fmr f5, f0
lbl_fn_8013CB68_00000560:
    lfs f0, lbl_80881A34
    lfs f3, 0x6c0(r27)
    fmuls f0, f0, f30
    lfs f4, lbl_80881964
    fmuls f5, f3, f5
    fcmpo cr0, f4, f0
    bge lbl_fn_8013CB68_00000580
    b lbl_fn_8013CB68_00000584
lbl_fn_8013CB68_00000580:
    fmr f4, f0
lbl_fn_8013CB68_00000584:
    lfs f0, lbl_80881A34
    lfs f3, 0x6bc(r27)
    fmuls f0, f0, f30
    lfs f7, lbl_80881964
    fmuls f6, f3, f4
    fcmpo cr0, f7, f0
    bge lbl_fn_8013CB68_000005A4
    b lbl_fn_8013CB68_000005A8
lbl_fn_8013CB68_000005A4:
    fmr f7, f0
lbl_fn_8013CB68_000005A8:
    lfs f3, 0x6b8(r27)
    addi r3, r27, 0x6b8
    lfs f0, 0x6c0(r27)
    fmuls f7, f3, f7
    lfs f4, 0x6b8(r27)
    fsubs f3, f0, f5
    lfs f0, lbl_8088196C
    stfs f7, 0x31c(r1)
    fsubs f4, f4, f7
    stfs f6, 0x320(r1)
    stfs f5, 0x324(r1)
    stfs f4, 0x6b8(r27)
    stfs f3, 0x6c0(r27)
    stfs f0, 0x6bc(r27)
    bl fn_805F9940
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_8013CB68_00000604
    lfs f0, lbl_8088196C
    stfs f0, 0x6b8(r27)
    stfs f0, 0x6bc(r27)
    stfs f0, 0x6c0(r27)
lbl_fn_8013CB68_00000604:
    lfs f0, 0x578(r27)
    lfs f4, 0x57c(r27)
    fmuls f7, f0, f30
    lfs f3, 0x574(r27)
    lfs f0, 0x3cc(r1)
    fmuls f6, f4, f30
    fmuls f8, f3, f30
    lfs f5, 0x3c8(r1)
    fadds f4, f0, f7
    lfs f3, 0x3d0(r1)
    lfs f0, lbl_80881A38
    fadds f5, f5, f8
    fadds f3, f3, f6
    stfs f8, 0x310(r1)
    fcmpo cr0, f4, f0
    stfs f7, 0x314(r1)
    stfs f6, 0x318(r1)
    stfs f5, 0x3c8(r1)
    stfs f4, 0x3cc(r1)
    stfs f3, 0x3d0(r1)
    bge lbl_fn_8013CB68_0000065C
    stfs f0, 0x3cc(r1)
lbl_fn_8013CB68_0000065C:
    lwz r3, 0x48(r27)
    li r23, 0x1
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_8013CB68_0000067C
    cmpwi r3, 0x4
    beq lbl_fn_8013CB68_0000067C
    li r0, 0x0
lbl_fn_8013CB68_0000067C:
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00000690
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_00000720
lbl_fn_8013CB68_00000690:
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 19
    beq lbl_fn_8013CB68_000006A0
    li r23, 0x0
lbl_fn_8013CB68_000006A0:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x304
    lfs f0, 0x530(r27)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r27)
    lfs f3, 0x10c(r4)
    lfs f0, 0x528(r27)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x308(r1)
    stfs f0, 0x304(r1)
    stfs f6, 0x30c(r1)
    bl fn_805F9920
    lfs f0, lbl_80881A3C
    fcmpo cr0, f1, f0
    ble lbl_fn_8013CB68_000006F0
    li r23, 0x0
    b lbl_fn_8013CB68_00000720
lbl_fn_8013CB68_000006F0:
    lfs f0, lbl_80881A40
    fcmpo cr0, f1, f0
    ble lbl_fn_8013CB68_00000720
    lwz r0, 0x80(r27)
    lwz r3, 0x1390(r27)
    add r0, r3, r0
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    beq lbl_fn_8013CB68_00000720
    li r23, 0x0
lbl_fn_8013CB68_00000720:
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 22
    beq lbl_fn_8013CB68_00000730
    li r23, 0x0
lbl_fn_8013CB68_00000730:
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000758
    cmpwi r23, 0x0
    beq lbl_fn_8013CB68_00000758
    addi r4, r27, 0x528
    bl fn_805B96AC
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_00000758
    li r23, 0x0
lbl_fn_8013CB68_00000758:
    cmpwi r23, 0x0
    li r31, 0x1
    beq lbl_fn_8013CB68_000037A0
    lwz r0, 0x610(r27)
    cmpwi r0, 0x3
    ble lbl_fn_8013CB68_00000870
    addi r4, r1, 0x3e0
    lfs f2, 0x3e8(r1)
    addi r3, r1, 0x3bc
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x3b0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x3c4(r1)
    lfs f3, 0x3b4(r1)
    stfs f2, 0x3b8(r1)
    lfs f0, 0x5b4(r27)
    fadds f0, f3, f0
    stfs f0, 0x3b4(r1)
    lwz r0, 0x958(r27)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8013CB68_000007D4
    frsp f2, f2
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x3c4(r1)
    lfs f2, 0x3e8(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x3b8(r1)
lbl_fn_8013CB68_000007D4:
    lwz r23, lbl_8087EE98
    mr r3, r27
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r23
    addi r4, r1, 0x3a4
    addi r5, r1, 0x3b0
    addi r6, r1, 0x3bc
    addi r8, r27, 0x5b8
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000814
    lfs f0, 0x3a8(r1)
    stfs f0, 0x3e4(r1)
    b lbl_fn_8013CB68_00000870
lbl_fn_8013CB68_00000814:
    lwz r0, 0x958(r27)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8013CB68_00000870
    lfs f3, 0x3b4(r1)
    mr r3, r27
    lfs f0, 0x5b4(r27)
    lwz r23, lbl_8087EE98
    fadds f0, f3, f0
    stfs f0, 0x3b4(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r23
    addi r4, r1, 0x3a4
    addi r5, r1, 0x3b0
    addi r6, r1, 0x3bc
    addi r8, r27, 0x5b8
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000870
    lfs f0, 0x3a8(r1)
    stfs f0, 0x3e4(r1)
lbl_fn_8013CB68_00000870:
    li r0, 0x0
    addi r4, r1, 0x3e0
    lfs f2, 0x3e8(r1)
    addi r3, r1, 0x398
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x388
    stw r0, 0x544(r1)
    addi r5, r1, 0x1f0
    lfs f6, 0x3e8(r1)
    stw r0, 0x548(r1)
    lfs f5, 0x3e4(r1)
    stw r0, 0x54c(r1)
    lfs f3, 0x3e0(r1)
    stw r0, 0x550(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x614(r27), 0, 0
    stfs f2, 0x3a0(r1)
    lfs f2, 0x61c(r27)
    stfs f2, 0x390(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x620(r27)
    stfs f7, 0x394(r1)
    lfs f0, 0x5ac(r27)
    lfs f4, 0x5a8(r27)
    fadds f2, f6, f0
    lfs f0, 0x5a4(r27)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f2, 0x390(r1)
    stfs f0, 0x1f0(r1)
    stfs f4, 0x1f4(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x958(r27)
    stfs f2, 0x1f8(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8013CB68_00000918
    lfs f0, 0x38c(r1)
    fsubs f0, f0, f7
    stfs f0, 0x38c(r1)
    b lbl_fn_8013CB68_00000924
lbl_fn_8013CB68_00000918:
    lfs f0, 0x38c(r1)
    fadds f0, f0, f7
    stfs f0, 0x38c(r1)
lbl_fn_8013CB68_00000924:
    lwz r0, 0x12a8(r27)
    clrlwi. r0, r0, 31
    beq lbl_fn_8013CB68_00000934
    li r25, 0x1
lbl_fn_8013CB68_00000934:
    neg r3, r25
    lis r0, 0x8000
    or r4, r3, r25
    srawi r4, r4, 31
    mr r3, r27
    and r22, r0, r4
    bl fn_80179D44
    lwz r0, 0x48(r27)
    or r22, r22, r3
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00000968
    li r0, 0x1
    b lbl_fn_8013CB68_000009A4
lbl_fn_8013CB68_00000968:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_000009A0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8013CB68_000009A0
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x19
    bne lbl_fn_8013CB68_000009A0
    lwz r3, 0x50(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8013CB68_000009A4
lbl_fn_8013CB68_000009A0:
    li r0, 0x0
lbl_fn_8013CB68_000009A4:
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_000009B0
    oris r22, r22, 0x200
lbl_fn_8013CB68_000009B0:
    lwz r3, lbl_8087EE98
    mr r7, r22
    lfs f1, 0x394(r1)
    addi r4, r1, 0x510
    addi r5, r1, 0x388
    addi r6, r1, 0x3c8
    addi r8, r27, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    lwz r0, 0x54c(r27)
    mr r25, r3
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8013CB68_00000A20
    lfs f7, lbl_8088196C
    lfs f0, 0x3e4(r1)
    lfs f6, 0x3e0(r1)
    fadds f4, f0, f7
    lfs f5, 0x3c8(r1)
    lfs f3, 0x3e8(r1)
    lfs f0, 0x3d0(r1)
    fadds f5, f6, f5
    stfs f7, 0x3cc(r1)
    fadds f0, f3, f0
    stfs f5, 0x3e0(r1)
    stfs f4, 0x3e4(r1)
    stfs f0, 0x3e8(r1)
    b lbl_fn_8013CB68_00000A90
lbl_fn_8013CB68_00000A20:
    addi r5, r1, 0x520
    lfs f2, 0x528(r1)
    addi r4, r1, 0x3e0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x3e8(r1)
    lfs f4, 0x3e0(r1)
    lfs f0, 0x5a4(r27)
    lfs f3, 0x3e4(r1)
    fsubs f0, f4, f0
    stfs f0, 0x3e0(r1)
    lfs f0, 0x5a8(r27)
    fsubs f3, f3, f0
    stfs f3, 0x3e4(r1)
    lfs f0, 0x5ac(r27)
    fsubs f0, f2, f0
    stfs f0, 0x3e8(r1)
    lwz r0, 0x958(r27)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8013CB68_00000A84
    lfs f0, 0x394(r1)
    fadds f0, f3, f0
    stfs f0, 0x3e4(r1)
    b lbl_fn_8013CB68_00000A90
lbl_fn_8013CB68_00000A84:
    lfs f0, 0x394(r1)
    fsubs f0, f3, f0
    stfs f0, 0x3e4(r1)
lbl_fn_8013CB68_00000A90:
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000BF0
    lwz r3, 0x54c(r1)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_8013CB68_00000AB0
    lfs f0, lbl_8088196C
    stfs f0, 0x3cc(r1)
lbl_fn_8013CB68_00000AB0:
    lwz r0, 0x958(r27)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8013CB68_00000AD4
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8013CB68_00000AD4
    lfs f0, lbl_8088196C
    stfs f0, 0x3cc(r1)
lbl_fn_8013CB68_00000AD4:
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8013CB68_00000B54
    lfs f3, 0x3cc(r1)
    lfs f0, lbl_80881A44
    fcmpo cr0, f3, f0
    ble lbl_fn_8013CB68_00000AF4
    b lbl_fn_8013CB68_00000AF8
lbl_fn_8013CB68_00000AF4:
    fmr f3, f0
lbl_fn_8013CB68_00000AF8:
    stfs f3, 0x3cc(r1)
    lwz r0, 0x54c(r27)
    ori r0, r0, 0x80
    stw r0, 0x54c(r27)
    lwz r3, 0x54c(r1)
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8013CB68_00000B54
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_8013CB68_00000B54
    addi r3, r1, 0x3c8
    bl fn_805F9920
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    ble lbl_fn_8013CB68_00000B54
    lwz r0, 0x958(r27)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8013CB68_00000B54
    lwz r0, 0x54c(r27)
    ori r0, r0, 0x100
    stw r0, 0x54c(r27)
lbl_fn_8013CB68_00000B54:
    lwz r0, 0x54c(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8013CB68_00000B88
    lwz r0, 0x54c(r27)
    addi r4, r1, 0x554
    addi r3, r27, 0x13a0
    oris r0, r0, 0x2
    stw r0, 0x54c(r27)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x55c(r1)
    stfs f2, 0x13a8(r27)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8013CB68_00000B88:
    lwz r0, 0x54c(r1)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_8013CB68_00000BBC
    lwz r0, 0x54c(r27)
    addi r4, r1, 0x554
    addi r3, r27, 0x13a0
    oris r0, r0, 0x4
    stw r0, 0x54c(r27)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x55c(r1)
    stfs f2, 0x13a8(r27)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8013CB68_00000BBC:
    lwz r0, 0x54c(r1)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8013CB68_00000BF0
    lwz r0, 0x54c(r27)
    addi r4, r1, 0x554
    addi r3, r27, 0x13a0
    oris r0, r0, 0x10
    stw r0, 0x54c(r27)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x55c(r1)
    stfs f2, 0x13a8(r27)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8013CB68_00000BF0:
    lwz r4, 0x544(r1)
    li r3, 0x0
    li r0, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8013CB68_00000C14
    lwz r4, 0x0(r4)
    cmplwi r4, 0x1a
    bne lbl_fn_8013CB68_00000C14
    li r0, 0x1
lbl_fn_8013CB68_00000C14:
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_00000C34
    lwz r0, 0x54c(r27)
    rlwinm r4, r0, 0, 5, 5
    subis r0, r4, 0x400
    cmplwi r0, 0x0
    beq lbl_fn_8013CB68_00000C34
    li r3, 0x1
lbl_fn_8013CB68_00000C34:
    lwz r0, 0x54c(r27)
    lwz r4, 0x12a4(r27)
    rlwimi r4, r3, 3, 28, 28
    rlwinm r3, r0, 0, 10, 10
    stw r4, 0x12a4(r27)
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_8013CB68_00000C5C
    ori r0, r4, 0x8
    stw r0, 0x12a4(r27)
lbl_fn_8013CB68_00000C5C:
    lwz r3, 0x544(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000C70
    lwz r0, 0x0(r3)
    b lbl_fn_8013CB68_00000C74
lbl_fn_8013CB68_00000C70:
    li r0, -0x1
lbl_fn_8013CB68_00000C74:
    cmpwi r25, 0x0
    stw r0, 0x634(r27)
    beq lbl_fn_8013CB68_00000CE8
    lwz r0, 0x54c(r1)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8013CB68_00000CE8
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x7
    bne lbl_fn_8013CB68_00000CE8
    lfs f4, lbl_80881964
    lfs f3, 0x141c(r27)
    lfs f0, lbl_80881A48
    fadds f3, f4, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_00000CB8
    b lbl_fn_8013CB68_00000CBC
lbl_fn_8013CB68_00000CB8:
    fmr f3, f0
lbl_fn_8013CB68_00000CBC:
    lwz r3, 0x12a8(r27)
    stfs f3, 0x141c(r27)
    clrlwi. r0, r3, 31
    bne lbl_fn_8013CB68_00000D3C
    frsp f3, f3
    lfs f0, lbl_808819F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8013CB68_00000D3C
    ori r0, r3, 0x1
    stw r0, 0x12a8(r27)
    b lbl_fn_8013CB68_00000D3C
lbl_fn_8013CB68_00000CE8:
    lfs f4, 0x141c(r27)
    lfs f3, lbl_8088196C
    fcmpo cr0, f4, f3
    ble lbl_fn_8013CB68_00000D14
    lfs f0, lbl_808819FC
    fsubs f0, f4, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_8013CB68_00000D0C
    b lbl_fn_8013CB68_00000D10
lbl_fn_8013CB68_00000D0C:
    fmr f0, f3
lbl_fn_8013CB68_00000D10:
    stfs f0, 0x141c(r27)
lbl_fn_8013CB68_00000D14:
    lwz r3, 0x12a8(r27)
    clrlwi. r0, r3, 31
    beq lbl_fn_8013CB68_00000D3C
    lfs f3, 0x141c(r27)
    lfs f0, lbl_80881A4C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8013CB68_00000D3C
    clrrwi r0, r3, 1
    stw r0, 0x12a8(r27)
lbl_fn_8013CB68_00000D3C:
    cmpwi r25, 0x0
    beq lbl_fn_8013CB68_00002EBC
    lwz r0, 0x54c(r1)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8013CB68_00002EBC
    lwz r0, 0x48(r27)
    lwz r3, 0x548(r1)
    cmpwi r0, 0x0
    lwz r30, 0xc(r3)
    bne lbl_fn_8013CB68_00000DB4
    lwz r0, 0x648(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_00000DB4
    lwz r0, 0xd18(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00000DB4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000DB4
    lwz r0, 0x48(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8013CB68_00000DB4
    li r4, 0x3e8
    bl fn_80370174
    cmpwi r3, 0x30
    blt lbl_fn_8013CB68_00000DB4
    lwz r3, lbl_8087F430
    li r4, 0x132
    bl fn_803750E4
lbl_fn_8013CB68_00000DB4:
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_00000DC8
    cmpwi r0, 0x2
    bne lbl_fn_8013CB68_00002EBC
lbl_fn_8013CB68_00000DC8:
    lwz r0, 0x648(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002EBC
    lwz r0, 0x55c(r30)
    li r29, 0x1
    li r28, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00000E08
    lwz r0, 0x560(r30)
    cmpwi r0, 0x44
    bne lbl_fn_8013CB68_00000E08
    lwz r3, 0xf80(r30)
    bl fn_801C59D4
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_00000E08
    li r29, 0x0
lbl_fn_8013CB68_00000E08:
    lfs f3, 0x570(r27)
    lfs f0, lbl_80881984
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_00000E1C
    li r29, 0x0
lbl_fn_8013CB68_00000E1C:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8013CB68_00000E68
    lwz r3, 0x60(r30)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x35
    bne lbl_fn_8013CB68_00000E64
    lwz r4, 0x14b0(r30)
    li r3, 0x0
    cmpwi r4, 0x1
    beq lbl_fn_8013CB68_00000E54
    cmpwi r4, 0x3
    beq lbl_fn_8013CB68_00000E54
    li r3, 0x1
lbl_fn_8013CB68_00000E54:
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_00000E68
    li r29, 0x0
    b lbl_fn_8013CB68_00000E68
lbl_fn_8013CB68_00000E64:
    li r29, 0x0
lbl_fn_8013CB68_00000E68:
    lwz r3, 0x137c(r30)
    clrlwi r3, r3, 31
    cmplwi r3, 0x1
    bne lbl_fn_8013CB68_00000E98
    lwz r3, 0x55c(r27)
    cmpwi r3, 0x7
    bne lbl_fn_8013CB68_00000E94
    lwz r3, 0x1078(r27)
    rlwinm r3, r3, 0, 24, 24
    cmplwi r3, 0x80
    beq lbl_fn_8013CB68_00000E98
lbl_fn_8013CB68_00000E94:
    li r29, 0x0
lbl_fn_8013CB68_00000E98:
    lwz r3, 0x55c(r27)
    cmpwi r3, 0x6
    bne lbl_fn_8013CB68_00000EA8
    li r29, 0x0
lbl_fn_8013CB68_00000EA8:
    lwz r3, 0x55c(r30)
    li r4, 0x0
    cmpwi r3, 0x6
    bne lbl_fn_8013CB68_00000EFC
    lwz r5, 0x560(r30)
    li r3, 0x1
    cmpwi r5, 0x63
    beq lbl_fn_8013CB68_00000EF0
    cmpwi r5, 0x27
    li r5, 0x0
    bne lbl_fn_8013CB68_00000EE4
    lwz r6, 0x2dc(r30)
    cmpwi r6, 0x8e
    bne lbl_fn_8013CB68_00000EE4
    li r5, 0x1
lbl_fn_8013CB68_00000EE4:
    cmpwi r5, 0x0
    bne lbl_fn_8013CB68_00000EF0
    li r3, 0x0
lbl_fn_8013CB68_00000EF0:
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000EFC
    li r4, 0x1
lbl_fn_8013CB68_00000EFC:
    cmpwi r4, 0x0
    beq lbl_fn_8013CB68_00000F08
    li r29, 0x0
lbl_fn_8013CB68_00000F08:
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001348
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001348
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_00000F30
    cmpwi r0, 0x3
    bne lbl_fn_8013CB68_00000F34
lbl_fn_8013CB68_00000F30:
    li r29, 0x0
lbl_fn_8013CB68_00000F34:
    cmplw r30, r27
    beq lbl_fn_8013CB68_00000F94
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000F5C
    lwz r3, 0x540(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_00000F5C
    li r3, 0x0
    b lbl_fn_8013CB68_00000FF0
lbl_fn_8013CB68_00000F5C:
    lwz r3, 0x7e0(r30)
    rlwinm r3, r3, 0, 30, 30
    cmplwi r3, 0x2
    beq lbl_fn_8013CB68_00000F8C
    lwz r3, 0x7e0(r27)
    rlwinm r3, r3, 0, 30, 30
    cmplwi r3, 0x2
    beq lbl_fn_8013CB68_00000F8C
    lwz r3, lbl_8087F0A8
    lwz r3, 0xcc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000F94
lbl_fn_8013CB68_00000F8C:
    li r3, 0x0
    b lbl_fn_8013CB68_00000FF0
lbl_fn_8013CB68_00000F94:
    lwz r3, 0xf14(r30)
    cmpwi r3, 0x0
    blt lbl_fn_8013CB68_00000FBC
    lwz r4, 0xf14(r27)
    cmpwi r4, 0x0
    blt lbl_fn_8013CB68_00000FBC
    subf r3, r3, r4
    cntlzw r3, r3
    srwi r3, r3, 5
    b lbl_fn_8013CB68_00000FF0
lbl_fn_8013CB68_00000FBC:
    lwz r4, 0x48(r27)
    li r3, 0x0
    cmpw r0, r4
    beq lbl_fn_8013CB68_00000FEC
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00000FDC
    cmpwi r4, 0x3
    beq lbl_fn_8013CB68_00000FEC
lbl_fn_8013CB68_00000FDC:
    cmpwi r0, 0x3
    bne lbl_fn_8013CB68_00000FF0
    cmpwi r4, 0x0
    bne lbl_fn_8013CB68_00000FF0
lbl_fn_8013CB68_00000FEC:
    li r3, 0x1
lbl_fn_8013CB68_00000FF0:
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00000FFC
    li r29, 0x0
lbl_fn_8013CB68_00000FFC:
    lwz r3, 0x48(r27)
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_00001348
    cmpwi r0, 0x3
    bne lbl_fn_8013CB68_00001348
    cmpwi r29, 0x0
    beq lbl_fn_8013CB68_00001344
    lfs f3, 0x530(r30)
    addi r26, r1, 0x2f8
    lfs f0, 0x3a0(r1)
    addi r5, r1, 0x2ec
    lfs f5, 0x52c(r30)
    mr r3, r26
    fsubs f2, f3, f0
    lfs f4, 0x39c(r1)
    lfs f3, 0x528(r30)
    mr r4, r26
    lfs f0, 0x398(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x2f0(r1)
    stfs f0, 0x2ec(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x2f4(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x300(r1)
    bl fn_805F98D0
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00001080
    lwz r0, 0x560(r30)
    cmpwi r0, 0x68
    bne lbl_fn_8013CB68_00001344
lbl_fn_8013CB68_00001080:
    lwz r3, 0x13f8(r30)
    addi r0, r3, 0x2
    stw r0, 0x13f8(r30)
    cmpwi r0, 0x6
    ble lbl_fn_8013CB68_00001344
    lis r5, lbl_80737A9C@ha
    li r3, 0x3c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8013CB68_000010D4
    mr r4, r30
    mr r5, r26
    mr r6, r27
    bl fn_801C61EC
    mr r23, r3
lbl_fn_8013CB68_000010D4:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00001164
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_0000110C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x568(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x56c(r1)
    stw r0, 0x570(r1)
    b lbl_fn_8013CB68_00001128
lbl_fn_8013CB68_0000110C:
    addi r3, r24, 0xec
    lwz r5, 0xec(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x568(r1)
    stw r4, 0x56c(r1)
    stw r0, 0x570(r1)
lbl_fn_8013CB68_00001128:
    lwz r5, 0x568(r1)
    addi r3, r1, 0x1e4
    lwz r4, 0x56c(r1)
    lwz r0, 0x570(r1)
    stw r5, 0x1e4(r1)
    stw r4, 0x1e8(r1)
    stw r0, 0x1ec(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001164
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00001164:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00001318
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_0000117C
    stw r0, 0x564(r30)
lbl_fn_8013CB68_0000117C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00001318
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_000011B4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x574(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x578(r1)
    stw r0, 0x57c(r1)
    b lbl_fn_8013CB68_000011D0
lbl_fn_8013CB68_000011B4:
    addi r3, r24, 0xf8
    lwz r5, 0xf8(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x574(r1)
    stw r4, 0x578(r1)
    stw r0, 0x57c(r1)
lbl_fn_8013CB68_000011D0:
    lwz r5, 0x574(r1)
    addi r3, r1, 0x1cc
    lwz r4, 0x578(r1)
    lwz r0, 0x57c(r1)
    stw r5, 0x1cc(r1)
    stw r4, 0x1d0(r1)
    stw r0, 0x1d4(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_0000120C
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_0000120C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_000012E8
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00001224
    stw r0, 0x564(r30)
lbl_fn_8013CB68_00001224:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_000012E8
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_0000125C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x580(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x584(r1)
    stw r0, 0x588(r1)
    b lbl_fn_8013CB68_00001278
lbl_fn_8013CB68_0000125C:
    addi r3, r24, 0x104
    lwz r5, 0x104(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x580(r1)
    stw r4, 0x584(r1)
    stw r0, 0x588(r1)
lbl_fn_8013CB68_00001278:
    lwz r5, 0x580(r1)
    addi r3, r1, 0x1d8
    lwz r4, 0x584(r1)
    lwz r0, 0x588(r1)
    stw r5, 0x1d8(r1)
    stw r4, 0x1dc(r1)
    stw r0, 0x1e0(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_000012B4
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000012B4:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8013CB68_000012E8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000012E8:
    li r0, 0x6
    stw r0, 0x55c(r30)
    li r0, 0x0
    lwz r3, 0xf80(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8013CB68_00001318
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00001318:
    li r0, 0x6
    stw r0, 0x55c(r30)
    lwz r3, 0xf80(r30)
    cmpwi r3, 0x0
    stw r23, 0xf80(r30)
    beq lbl_fn_8013CB68_00001344
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00001344:
    li r29, 0x0
lbl_fn_8013CB68_00001348:
    cmpwi r29, 0x0
    beq lbl_fn_8013CB68_000021A4
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_000021A4
    addi r3, r30, 0xb0
    bl fn_8008B130
    li r0, 0x0
    stw r0, 0x1c0(r1)
    mr r26, r3
    addi r23, r1, 0x1c0
    stw r0, 0x1c4(r1)
    stw r0, 0x1c8(r1)
    bl strlen
    mr r22, r3
    mr r3, r23
    mr r4, r22
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r23
    stb r0, 0xc(r1)
    mr r6, r26
    add r7, r26, r22
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r23
    addi r3, r1, 0x1b4
    bl fn_8006B174
    lwz r0, 0x1c0(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8013CB68_000013E4
    lwz r3, 0x1c8(r1)
    bl dtor_80084684
lbl_fn_8013CB68_000013E4:
    lis r3, lbl_80737A9C@ha
    addi r3, r3, lbl_80737A9C@l
    addi r23, r3, 0x2a3
    mr r3, r23
    bl strlen
    lwz r0, 0x1b4(r1)
    mr r26, r3
    stw r3, 0x14(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_00001428
    lbz r0, 0x1b4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8013CB68_0000142C
lbl_fn_8013CB68_00001428:
    lwz r4, 0x1b8(r1)
lbl_fn_8013CB68_0000142C:
    lwz r0, 0x1b4(r1)
    stw r4, 0x10(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_0000145C
    lbz r0, 0x1b4(r1)
    addi r6, r1, 0x1b5
    clrlwi r0, r0, 25
    b lbl_fn_8013CB68_00001464
lbl_fn_8013CB68_0000145C:
    lwz r6, 0x1bc(r1)
    lwz r0, 0x1b8(r1)
lbl_fn_8013CB68_00001464:
    cmplw r4, r0
    stw r0, 0x18(r1)
    addi r4, r1, 0x18
    bge lbl_fn_8013CB68_00001478
    addi r4, r1, 0x10
lbl_fn_8013CB68_00001478:
    lwz r0, 0x0(r4)
    addi r4, r1, 0x1c
    stw r0, 0x1c(r1)
    cmplw r3, r0
    bge lbl_fn_8013CB68_00001490
    addi r4, r1, 0x14
lbl_fn_8013CB68_00001490:
    lwz r5, 0x0(r4)
    mr r3, r6
    mr r4, r23
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_000014CC
    lwz r0, 0x1c(r1)
    cmplw r0, r26
    bge lbl_fn_8013CB68_000014BC
    li r3, -0x1
    b lbl_fn_8013CB68_000014CC
lbl_fn_8013CB68_000014BC:
    bne lbl_fn_8013CB68_000014C8
    li r3, 0x0
    b lbl_fn_8013CB68_000014CC
lbl_fn_8013CB68_000014C8:
    li r3, 0x1
lbl_fn_8013CB68_000014CC:
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001984
    lis r3, lbl_80737A9C@ha
    addi r3, r3, lbl_80737A9C@l
    addi r23, r3, 0x2b3
    mr r3, r23
    bl strlen
    lwz r0, 0x1b4(r1)
    mr r26, r3
    stw r3, 0x24(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_00001518
    lbz r0, 0x1b4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8013CB68_0000151C
lbl_fn_8013CB68_00001518:
    lwz r4, 0x1b8(r1)
lbl_fn_8013CB68_0000151C:
    lwz r0, 0x1b4(r1)
    stw r4, 0x20(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_0000154C
    lbz r0, 0x1b4(r1)
    addi r6, r1, 0x1b5
    clrlwi r0, r0, 25
    b lbl_fn_8013CB68_00001554
lbl_fn_8013CB68_0000154C:
    lwz r6, 0x1bc(r1)
    lwz r0, 0x1b8(r1)
lbl_fn_8013CB68_00001554:
    cmplw r4, r0
    stw r0, 0x28(r1)
    addi r4, r1, 0x28
    bge lbl_fn_8013CB68_00001568
    addi r4, r1, 0x20
lbl_fn_8013CB68_00001568:
    lwz r0, 0x0(r4)
    addi r4, r1, 0x2c
    stw r0, 0x2c(r1)
    cmplw r3, r0
    bge lbl_fn_8013CB68_00001580
    addi r4, r1, 0x24
lbl_fn_8013CB68_00001580:
    lwz r5, 0x0(r4)
    mr r3, r6
    mr r4, r23
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_000015BC
    lwz r0, 0x2c(r1)
    cmplw r0, r26
    bge lbl_fn_8013CB68_000015AC
    li r3, -0x1
    b lbl_fn_8013CB68_000015BC
lbl_fn_8013CB68_000015AC:
    bne lbl_fn_8013CB68_000015B8
    li r3, 0x0
    b lbl_fn_8013CB68_000015BC
lbl_fn_8013CB68_000015B8:
    li r3, 0x1
lbl_fn_8013CB68_000015BC:
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001984
    lis r3, lbl_80737A9C@ha
    addi r3, r3, lbl_80737A9C@l
    addi r23, r3, 0x2c3
    mr r3, r23
    bl strlen
    lwz r0, 0x1b4(r1)
    mr r26, r3
    stw r3, 0x34(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_00001608
    lbz r0, 0x1b4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8013CB68_0000160C
lbl_fn_8013CB68_00001608:
    lwz r4, 0x1b8(r1)
lbl_fn_8013CB68_0000160C:
    lwz r0, 0x1b4(r1)
    stw r4, 0x30(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_0000163C
    lbz r0, 0x1b4(r1)
    addi r6, r1, 0x1b5
    clrlwi r0, r0, 25
    b lbl_fn_8013CB68_00001644
lbl_fn_8013CB68_0000163C:
    lwz r6, 0x1bc(r1)
    lwz r0, 0x1b8(r1)
lbl_fn_8013CB68_00001644:
    cmplw r4, r0
    stw r0, 0x38(r1)
    addi r4, r1, 0x38
    bge lbl_fn_8013CB68_00001658
    addi r4, r1, 0x30
lbl_fn_8013CB68_00001658:
    lwz r0, 0x0(r4)
    addi r4, r1, 0x3c
    stw r0, 0x3c(r1)
    cmplw r3, r0
    bge lbl_fn_8013CB68_00001670
    addi r4, r1, 0x34
lbl_fn_8013CB68_00001670:
    lwz r5, 0x0(r4)
    mr r3, r6
    mr r4, r23
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_000016AC
    lwz r0, 0x3c(r1)
    cmplw r0, r26
    bge lbl_fn_8013CB68_0000169C
    li r3, -0x1
    b lbl_fn_8013CB68_000016AC
lbl_fn_8013CB68_0000169C:
    bne lbl_fn_8013CB68_000016A8
    li r3, 0x0
    b lbl_fn_8013CB68_000016AC
lbl_fn_8013CB68_000016A8:
    li r3, 0x1
lbl_fn_8013CB68_000016AC:
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001984
    lis r3, lbl_80737A9C@ha
    addi r3, r3, lbl_80737A9C@l
    addi r23, r3, 0x2d3
    mr r3, r23
    bl strlen
    lwz r0, 0x1b4(r1)
    mr r26, r3
    stw r3, 0x44(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_000016F8
    lbz r0, 0x1b4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8013CB68_000016FC
lbl_fn_8013CB68_000016F8:
    lwz r4, 0x1b8(r1)
lbl_fn_8013CB68_000016FC:
    lwz r0, 0x1b4(r1)
    stw r4, 0x40(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_0000172C
    lbz r0, 0x1b4(r1)
    addi r6, r1, 0x1b5
    clrlwi r0, r0, 25
    b lbl_fn_8013CB68_00001734
lbl_fn_8013CB68_0000172C:
    lwz r6, 0x1bc(r1)
    lwz r0, 0x1b8(r1)
lbl_fn_8013CB68_00001734:
    cmplw r4, r0
    stw r0, 0x48(r1)
    addi r4, r1, 0x48
    bge lbl_fn_8013CB68_00001748
    addi r4, r1, 0x40
lbl_fn_8013CB68_00001748:
    lwz r0, 0x0(r4)
    addi r4, r1, 0x4c
    stw r0, 0x4c(r1)
    cmplw r3, r0
    bge lbl_fn_8013CB68_00001760
    addi r4, r1, 0x44
lbl_fn_8013CB68_00001760:
    lwz r5, 0x0(r4)
    mr r3, r6
    mr r4, r23
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_0000179C
    lwz r0, 0x4c(r1)
    cmplw r0, r26
    bge lbl_fn_8013CB68_0000178C
    li r3, -0x1
    b lbl_fn_8013CB68_0000179C
lbl_fn_8013CB68_0000178C:
    bne lbl_fn_8013CB68_00001798
    li r3, 0x0
    b lbl_fn_8013CB68_0000179C
lbl_fn_8013CB68_00001798:
    li r3, 0x1
lbl_fn_8013CB68_0000179C:
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001984
    lis r3, lbl_80737A9C@ha
    addi r3, r3, lbl_80737A9C@l
    addi r23, r3, 0x2e3
    mr r3, r23
    bl strlen
    lwz r0, 0x1b4(r1)
    mr r26, r3
    stw r3, 0x54(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_000017E8
    lbz r0, 0x1b4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8013CB68_000017EC
lbl_fn_8013CB68_000017E8:
    lwz r4, 0x1b8(r1)
lbl_fn_8013CB68_000017EC:
    lwz r0, 0x1b4(r1)
    stw r4, 0x50(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_0000181C
    lbz r0, 0x1b4(r1)
    addi r6, r1, 0x1b5
    clrlwi r0, r0, 25
    b lbl_fn_8013CB68_00001824
lbl_fn_8013CB68_0000181C:
    lwz r6, 0x1bc(r1)
    lwz r0, 0x1b8(r1)
lbl_fn_8013CB68_00001824:
    cmplw r4, r0
    stw r0, 0x58(r1)
    addi r4, r1, 0x58
    bge lbl_fn_8013CB68_00001838
    addi r4, r1, 0x50
lbl_fn_8013CB68_00001838:
    lwz r0, 0x0(r4)
    addi r4, r1, 0x5c
    stw r0, 0x5c(r1)
    cmplw r3, r0
    bge lbl_fn_8013CB68_00001850
    addi r4, r1, 0x54
lbl_fn_8013CB68_00001850:
    lwz r5, 0x0(r4)
    mr r3, r6
    mr r4, r23
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_0000188C
    lwz r0, 0x5c(r1)
    cmplw r0, r26
    bge lbl_fn_8013CB68_0000187C
    li r3, -0x1
    b lbl_fn_8013CB68_0000188C
lbl_fn_8013CB68_0000187C:
    bne lbl_fn_8013CB68_00001888
    li r3, 0x0
    b lbl_fn_8013CB68_0000188C
lbl_fn_8013CB68_00001888:
    li r3, 0x1
lbl_fn_8013CB68_0000188C:
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001984
    lis r3, lbl_80737A9C@ha
    addi r3, r3, lbl_80737A9C@l
    addi r23, r3, 0x2f3
    mr r3, r23
    bl strlen
    lwz r0, 0x1b4(r1)
    mr r26, r3
    stw r3, 0x64(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_000018D8
    lbz r0, 0x1b4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8013CB68_000018DC
lbl_fn_8013CB68_000018D8:
    lwz r4, 0x1b8(r1)
lbl_fn_8013CB68_000018DC:
    lwz r0, 0x1b4(r1)
    stw r4, 0x60(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8013CB68_0000190C
    lbz r0, 0x1b4(r1)
    addi r6, r1, 0x1b5
    clrlwi r0, r0, 25
    b lbl_fn_8013CB68_00001914
lbl_fn_8013CB68_0000190C:
    lwz r6, 0x1bc(r1)
    lwz r0, 0x1b8(r1)
lbl_fn_8013CB68_00001914:
    cmplw r4, r0
    stw r0, 0x68(r1)
    addi r4, r1, 0x68
    bge lbl_fn_8013CB68_00001928
    addi r4, r1, 0x60
lbl_fn_8013CB68_00001928:
    lwz r0, 0x0(r4)
    addi r4, r1, 0x6c
    stw r0, 0x6c(r1)
    cmplw r3, r0
    bge lbl_fn_8013CB68_00001940
    addi r4, r1, 0x64
lbl_fn_8013CB68_00001940:
    lwz r5, 0x0(r4)
    mr r3, r6
    mr r4, r23
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_0000197C
    lwz r0, 0x6c(r1)
    cmplw r0, r26
    bge lbl_fn_8013CB68_0000196C
    li r3, -0x1
    b lbl_fn_8013CB68_0000197C
lbl_fn_8013CB68_0000196C:
    bne lbl_fn_8013CB68_00001978
    li r3, 0x0
    b lbl_fn_8013CB68_0000197C
lbl_fn_8013CB68_00001978:
    li r3, 0x1
lbl_fn_8013CB68_0000197C:
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_000019B0
lbl_fn_8013CB68_00001984:
    lwz r0, 0x1b4(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8013CB68_000019A8
    lwz r3, 0x1bc(r1)
    bl dtor_80084684
lbl_fn_8013CB68_000019A8:
    li r0, 0x1
    b lbl_fn_8013CB68_000019D8
lbl_fn_8013CB68_000019B0:
    lwz r0, 0x1b4(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8013CB68_000019D4
    lwz r3, 0x1bc(r1)
    bl dtor_80084684
lbl_fn_8013CB68_000019D4:
    li r0, 0x0
lbl_fn_8013CB68_000019D8:
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_000021A4
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x7
    bne lbl_fn_8013CB68_000019FC
    lwz r0, 0x1078(r27)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_8013CB68_000021A4
lbl_fn_8013CB68_000019FC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001A14
    bl fn_803761DC
    cmpwi r3, 0x2
    bge lbl_fn_8013CB68_000021A4
lbl_fn_8013CB68_00001A14:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001DE8
    bl fn_803761DC
    cmpwi r3, 0x1
    bne lbl_fn_8013CB68_00001DE8
    lfs f3, 0x530(r30)
    addi r3, r1, 0x37c
    lfs f0, 0x3a0(r1)
    addi r5, r1, 0x2e0
    lfs f5, 0x52c(r30)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x39c(r1)
    lfs f3, 0x528(r30)
    lfs f0, 0x398(r1)
    fsubs f4, f5, f4
    stfs f2, 0x2e8(r1)
    fsubs f0, f3, f0
    stfs f4, 0x2e4(r1)
    stfs f0, 0x2e0(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x384(r1)
    bl fn_805F98D0
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x1
    bne lbl_fn_8013CB68_000021A4
    lfs f3, lbl_8088196C
    addi r3, r1, 0x4e0
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x2b0(r1)
    stfs f3, 0x2b4(r1)
    stfs f0, 0x2b8(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x2b0
    addi r3, r1, 0x4e0
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x384(r1)
    addi r26, r1, 0x2d4
    lfs f3, 0x380(r1)
    addi r5, r1, 0x2c8
    fneg f8, f0
    lfs f0, 0x37c(r1)
    fneg f9, f3
    lfs f4, 0x2b4(r1)
    fneg f3, f0
    lfs f0, 0x2b0(r1)
    frsp f5, f9
    stfs f3, 0x2bc(r1)
    frsp f3, f3
    lfs f6, 0x2b8(r1)
    frsp f7, f8
    stfs f9, 0x2c0(r1)
    fadds f4, f5, f4
    stfs f8, 0x2c4(r1)
    fadds f0, f3, f0
    mr r3, r26
    stfs f4, 0x2cc(r1)
    fadds f2, f7, f6
    stfs f0, 0x2c8(r1)
    mr r4, r26
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x2d0(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x2dc(r1)
    bl fn_805F98D0
    lis r5, lbl_80737A9C@ha
    li r3, 0x3c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8013CB68_00001B74
    mr r4, r27
    mr r5, r26
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_801C48B4
    mr r23, r3
lbl_fn_8013CB68_00001B74:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00001C04
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00001BAC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x58c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x590(r1)
    stw r0, 0x594(r1)
    b lbl_fn_8013CB68_00001BC8
lbl_fn_8013CB68_00001BAC:
    addi r3, r24, 0x110
    lwz r5, 0x110(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x58c(r1)
    stw r4, 0x590(r1)
    stw r0, 0x594(r1)
lbl_fn_8013CB68_00001BC8:
    lwz r5, 0x58c(r1)
    addi r3, r1, 0x1a8
    lwz r4, 0x590(r1)
    lwz r0, 0x594(r1)
    stw r5, 0x1a8(r1)
    stw r4, 0x1ac(r1)
    stw r0, 0x1b0(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001C04
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00001C04:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00001DB8
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00001C1C
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00001C1C:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00001DB8
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00001C54
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x598(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x59c(r1)
    stw r0, 0x5a0(r1)
    b lbl_fn_8013CB68_00001C70
lbl_fn_8013CB68_00001C54:
    addi r3, r24, 0x11c
    lwz r5, 0x11c(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x598(r1)
    stw r4, 0x59c(r1)
    stw r0, 0x5a0(r1)
lbl_fn_8013CB68_00001C70:
    lwz r5, 0x598(r1)
    addi r3, r1, 0x190
    lwz r4, 0x59c(r1)
    lwz r0, 0x5a0(r1)
    stw r5, 0x190(r1)
    stw r4, 0x194(r1)
    stw r0, 0x198(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001CAC
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00001CAC:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00001D88
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00001CC4
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00001CC4:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00001D88
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00001CFC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5a4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x5a8(r1)
    stw r0, 0x5ac(r1)
    b lbl_fn_8013CB68_00001D18
lbl_fn_8013CB68_00001CFC:
    addi r3, r24, 0x128
    lwz r5, 0x128(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5a4(r1)
    stw r4, 0x5a8(r1)
    stw r0, 0x5ac(r1)
lbl_fn_8013CB68_00001D18:
    lwz r5, 0x5a4(r1)
    addi r3, r1, 0x19c
    lwz r4, 0x5a8(r1)
    lwz r0, 0x5ac(r1)
    stw r5, 0x19c(r1)
    stw r4, 0x1a0(r1)
    stw r0, 0x1a4(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001D54
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00001D54:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_00001D88
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00001D88:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_00001DB8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00001DB8:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r23, 0xf80(r27)
    beq lbl_fn_8013CB68_000021A4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8013CB68_000021A4
lbl_fn_8013CB68_00001DE8:
    lfs f3, 0x530(r30)
    addi r3, r1, 0x370
    lfs f0, 0x3a0(r1)
    addi r5, r1, 0x2a4
    lfs f5, 0x52c(r30)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x39c(r1)
    lfs f3, 0x528(r30)
    lfs f0, 0x398(r1)
    fsubs f4, f5, f4
    stfs f2, 0x2ac(r1)
    fsubs f0, f3, f0
    stfs f4, 0x2a8(r1)
    stfs f0, 0x2a4(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x378(r1)
    bl fn_805F98D0
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x1
    bne lbl_fn_8013CB68_00003940
    lfs f3, lbl_8088196C
    addi r3, r1, 0x4b0
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x274(r1)
    stfs f3, 0x278(r1)
    stfs f0, 0x27c(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x274
    addi r3, r1, 0x4b0
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x378(r1)
    addi r25, r1, 0x298
    lfs f3, 0x374(r1)
    addi r5, r1, 0x28c
    fneg f8, f0
    lfs f0, 0x370(r1)
    fneg f9, f3
    lfs f4, 0x278(r1)
    fneg f3, f0
    lfs f0, 0x274(r1)
    frsp f5, f9
    stfs f3, 0x280(r1)
    frsp f3, f3
    lfs f6, 0x27c(r1)
    frsp f7, f8
    stfs f9, 0x284(r1)
    fadds f4, f5, f4
    stfs f8, 0x288(r1)
    fadds f0, f3, f0
    mr r3, r25
    stfs f4, 0x290(r1)
    fadds f2, f7, f6
    stfs f0, 0x28c(r1)
    mr r4, r25
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x294(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x2a0(r1)
    bl fn_805F98D0
    lis r5, lbl_80737A9C@ha
    li r3, 0x3c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8013CB68_00001F30
    mr r4, r27
    mr r5, r25
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_801C48B4
    mr r23, r3
lbl_fn_8013CB68_00001F30:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00001FC0
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00001F68
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5b0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x5b4(r1)
    stw r0, 0x5b8(r1)
    b lbl_fn_8013CB68_00001F84
lbl_fn_8013CB68_00001F68:
    addi r3, r24, 0x134
    lwz r5, 0x134(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5b0(r1)
    stw r4, 0x5b4(r1)
    stw r0, 0x5b8(r1)
lbl_fn_8013CB68_00001F84:
    lwz r5, 0x5b0(r1)
    addi r3, r1, 0x184
    lwz r4, 0x5b4(r1)
    lwz r0, 0x5b8(r1)
    stw r5, 0x184(r1)
    stw r4, 0x188(r1)
    stw r0, 0x18c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00001FC0
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00001FC0:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00002174
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00001FD8
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00001FD8:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00002174
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002010
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5bc(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x5c0(r1)
    stw r0, 0x5c4(r1)
    b lbl_fn_8013CB68_0000202C
lbl_fn_8013CB68_00002010:
    addi r3, r24, 0x140
    lwz r5, 0x140(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5bc(r1)
    stw r4, 0x5c0(r1)
    stw r0, 0x5c4(r1)
lbl_fn_8013CB68_0000202C:
    lwz r5, 0x5bc(r1)
    addi r3, r1, 0x16c
    lwz r4, 0x5c0(r1)
    lwz r0, 0x5c4(r1)
    stw r5, 0x16c(r1)
    stw r4, 0x170(r1)
    stw r0, 0x174(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002068
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002068:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00002144
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00002080
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00002080:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00002144
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_000020B8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x5cc(r1)
    stw r0, 0x5d0(r1)
    b lbl_fn_8013CB68_000020D4
lbl_fn_8013CB68_000020B8:
    addi r3, r24, 0x14c
    lwz r5, 0x14c(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c8(r1)
    stw r4, 0x5cc(r1)
    stw r0, 0x5d0(r1)
lbl_fn_8013CB68_000020D4:
    lwz r5, 0x5c8(r1)
    addi r3, r1, 0x178
    lwz r4, 0x5cc(r1)
    lwz r0, 0x5d0(r1)
    stw r5, 0x178(r1)
    stw r4, 0x17c(r1)
    stw r0, 0x180(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002110
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002110:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_00002144
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002144:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_00002174
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002174:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r23, 0xf80(r27)
    beq lbl_fn_8013CB68_00003940
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8013CB68_00003940
lbl_fn_8013CB68_000021A4:
    cmpwi r29, 0x0
    beq lbl_fn_8013CB68_00002EBC
    lwz r3, 0x48(r30)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_8013CB68_000021C8
    cmpwi r3, 0x4
    beq lbl_fn_8013CB68_000021C8
    li r0, 0x0
lbl_fn_8013CB68_000021C8:
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_000021DC
    lhz r0, 0xd38(r30)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_8013CB68_000021F4
lbl_fn_8013CB68_000021DC:
    cmpwi r3, 0x3
    bne lbl_fn_8013CB68_000021F8
    lwz r0, 0x137c(r30)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8013CB68_000021F8
lbl_fn_8013CB68_000021F4:
    li r28, 0x1
lbl_fn_8013CB68_000021F8:
    lfs f3, 0x530(r30)
    addi r25, r1, 0x364
    lfs f0, 0x3a0(r1)
    addi r5, r1, 0x268
    lfs f5, 0x52c(r30)
    mr r3, r25
    fsubs f2, f3, f0
    lfs f4, 0x39c(r1)
    lfs f3, 0x528(r30)
    mr r4, r25
    lfs f0, 0x398(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x26c(r1)
    stfs f0, 0x268(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x270(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x36c(r1)
    bl fn_805F98D0
    lwz r0, 0x48(r27)
    lis r5, lbl_80737A9C@ha
    addi r5, r5, lbl_80737A9C@l
    li r3, 0x3c
    cntlzw r0, r0
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    srwi r26, r0, 5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8013CB68_0000229C
    mr r4, r30
    mr r5, r25
    mr r7, r28
    mr r8, r26
    li r6, 0x0
    bl fn_801C48B4
    mr r23, r3
lbl_fn_8013CB68_0000229C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_0000232C
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_000022D4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5d4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x5d8(r1)
    stw r0, 0x5dc(r1)
    b lbl_fn_8013CB68_000022F0
lbl_fn_8013CB68_000022D4:
    addi r3, r24, 0x158
    lwz r5, 0x158(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5d4(r1)
    stw r4, 0x5d8(r1)
    stw r0, 0x5dc(r1)
lbl_fn_8013CB68_000022F0:
    lwz r5, 0x5d4(r1)
    addi r3, r1, 0x160
    lwz r4, 0x5d8(r1)
    lwz r0, 0x5dc(r1)
    stw r5, 0x160(r1)
    stw r4, 0x164(r1)
    stw r0, 0x168(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_0000232C
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_0000232C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_000024E0
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00002344
    stw r0, 0x564(r30)
lbl_fn_8013CB68_00002344:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_000024E0
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_0000237C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5e0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x5e4(r1)
    stw r0, 0x5e8(r1)
    b lbl_fn_8013CB68_00002398
lbl_fn_8013CB68_0000237C:
    addi r3, r24, 0x164
    lwz r5, 0x164(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5e0(r1)
    stw r4, 0x5e4(r1)
    stw r0, 0x5e8(r1)
lbl_fn_8013CB68_00002398:
    lwz r5, 0x5e0(r1)
    addi r3, r1, 0x148
    lwz r4, 0x5e4(r1)
    lwz r0, 0x5e8(r1)
    stw r5, 0x148(r1)
    stw r4, 0x14c(r1)
    stw r0, 0x150(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_000023D4
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000023D4:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_000024B0
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_000023EC
    stw r0, 0x564(r30)
lbl_fn_8013CB68_000023EC:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_000024B0
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002424
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5ec(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x5f0(r1)
    stw r0, 0x5f4(r1)
    b lbl_fn_8013CB68_00002440
lbl_fn_8013CB68_00002424:
    addi r3, r24, 0x170
    lwz r5, 0x170(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5ec(r1)
    stw r4, 0x5f0(r1)
    stw r0, 0x5f4(r1)
lbl_fn_8013CB68_00002440:
    lwz r5, 0x5ec(r1)
    addi r3, r1, 0x154
    lwz r4, 0x5f0(r1)
    lwz r0, 0x5f4(r1)
    stw r5, 0x154(r1)
    stw r4, 0x158(r1)
    stw r0, 0x15c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_0000247C
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_0000247C:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8013CB68_000024B0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000024B0:
    li r0, 0x6
    stw r0, 0x55c(r30)
    li r0, 0x0
    lwz r3, 0xf80(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8013CB68_000024E0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000024E0:
    li r0, 0x6
    stw r0, 0x55c(r30)
    lwz r3, 0xf80(r30)
    cmpwi r3, 0x0
    stw r23, 0xf80(r30)
    beq lbl_fn_8013CB68_0000250C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_0000250C:
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002824
    bl fn_8018059C
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002824
    bl fn_8018059C
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_00002824
    lwz r3, lbl_8087F0A8
    lwz r0, 0x580(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_00003940
    lfs f4, 0x36c(r1)
    lis r3, lbl_80737A9C@ha
    lfs f3, 0x368(r1)
    addi r3, r3, lbl_80737A9C@l
    lfs f0, 0x364(r1)
    fneg f4, f4
    fneg f3, f3
    addi r5, r3, 0x24
    fneg f0, f0
    stfs f4, 0x264(r1)
    mr r6, r5
    stfs f0, 0x25c(r1)
    li r3, 0x3c
    li r4, 0x0
    stfs f3, 0x260(r1)
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8013CB68_000025B0
    mr r4, r27
    mr r7, r28
    addi r5, r1, 0x25c
    li r6, 0x1
    li r8, 0x0
    bl fn_801C48B4
    mr r23, r3
lbl_fn_8013CB68_000025B0:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00002640
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_000025E8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5f8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x5fc(r1)
    stw r0, 0x600(r1)
    b lbl_fn_8013CB68_00002604
lbl_fn_8013CB68_000025E8:
    addi r3, r24, 0x17c
    lwz r5, 0x17c(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5f8(r1)
    stw r4, 0x5fc(r1)
    stw r0, 0x600(r1)
lbl_fn_8013CB68_00002604:
    lwz r5, 0x5f8(r1)
    addi r3, r1, 0x13c
    lwz r4, 0x5fc(r1)
    lwz r0, 0x600(r1)
    stw r5, 0x13c(r1)
    stw r4, 0x140(r1)
    stw r0, 0x144(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002640
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002640:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_000027F4
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00002658
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00002658:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_000027F4
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002690
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x604(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x608(r1)
    stw r0, 0x60c(r1)
    b lbl_fn_8013CB68_000026AC
lbl_fn_8013CB68_00002690:
    addi r3, r24, 0x188
    lwz r5, 0x188(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x604(r1)
    stw r4, 0x608(r1)
    stw r0, 0x60c(r1)
lbl_fn_8013CB68_000026AC:
    lwz r5, 0x604(r1)
    addi r3, r1, 0x124
    lwz r4, 0x608(r1)
    lwz r0, 0x60c(r1)
    stw r5, 0x124(r1)
    stw r4, 0x128(r1)
    stw r0, 0x12c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_000026E8
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000026E8:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_000027C4
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00002700
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00002700:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_000027C4
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002738
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x610(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x614(r1)
    stw r0, 0x618(r1)
    b lbl_fn_8013CB68_00002754
lbl_fn_8013CB68_00002738:
    addi r3, r24, 0x194
    lwz r5, 0x194(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x610(r1)
    stw r4, 0x614(r1)
    stw r0, 0x618(r1)
lbl_fn_8013CB68_00002754:
    lwz r5, 0x610(r1)
    addi r3, r1, 0x130
    lwz r4, 0x614(r1)
    lwz r0, 0x618(r1)
    stw r5, 0x130(r1)
    stw r4, 0x134(r1)
    stw r0, 0x138(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002790
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002790:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_000027C4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000027C4:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_000027F4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000027F4:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r23, 0xf80(r27)
    beq lbl_fn_8013CB68_00003940
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8013CB68_00003940
lbl_fn_8013CB68_00002824:
    lwz r0, 0x48(r27)
    cmpwi r0, 0x2
    bne lbl_fn_8013CB68_00002B3C
    bl fn_8018059C
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002B3C
    bl fn_8018059C
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_00002B3C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x57c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_00003940
    lfs f4, 0x36c(r1)
    lis r3, lbl_80737A9C@ha
    lfs f3, 0x368(r1)
    addi r3, r3, lbl_80737A9C@l
    lfs f0, 0x364(r1)
    fneg f4, f4
    fneg f3, f3
    addi r5, r3, 0x24
    fneg f0, f0
    stfs f4, 0x258(r1)
    mr r6, r5
    stfs f0, 0x250(r1)
    li r3, 0x3c
    li r4, 0x0
    stfs f3, 0x254(r1)
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8013CB68_000028C8
    mr r4, r27
    mr r7, r28
    addi r5, r1, 0x250
    li r6, 0x1
    li r8, 0x0
    bl fn_801C48B4
    mr r23, r3
lbl_fn_8013CB68_000028C8:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00002958
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002900
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x61c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x620(r1)
    stw r0, 0x624(r1)
    b lbl_fn_8013CB68_0000291C
lbl_fn_8013CB68_00002900:
    addi r3, r24, 0x1a0
    lwz r5, 0x1a0(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x61c(r1)
    stw r4, 0x620(r1)
    stw r0, 0x624(r1)
lbl_fn_8013CB68_0000291C:
    lwz r5, 0x61c(r1)
    addi r3, r1, 0x118
    lwz r4, 0x620(r1)
    lwz r0, 0x624(r1)
    stw r5, 0x118(r1)
    stw r4, 0x11c(r1)
    stw r0, 0x120(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002958
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002958:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00002B0C
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00002970
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00002970:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00002B0C
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_000029A8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x628(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x62c(r1)
    stw r0, 0x630(r1)
    b lbl_fn_8013CB68_000029C4
lbl_fn_8013CB68_000029A8:
    addi r3, r24, 0x1ac
    lwz r5, 0x1ac(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x628(r1)
    stw r4, 0x62c(r1)
    stw r0, 0x630(r1)
lbl_fn_8013CB68_000029C4:
    lwz r5, 0x628(r1)
    addi r3, r1, 0x100
    lwz r4, 0x62c(r1)
    lwz r0, 0x630(r1)
    stw r5, 0x100(r1)
    stw r4, 0x104(r1)
    stw r0, 0x108(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002A00
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002A00:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00002ADC
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00002A18
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00002A18:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00002ADC
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002A50
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x634(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x638(r1)
    stw r0, 0x63c(r1)
    b lbl_fn_8013CB68_00002A6C
lbl_fn_8013CB68_00002A50:
    addi r3, r24, 0x1b8
    lwz r5, 0x1b8(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x634(r1)
    stw r4, 0x638(r1)
    stw r0, 0x63c(r1)
lbl_fn_8013CB68_00002A6C:
    lwz r5, 0x634(r1)
    addi r3, r1, 0x10c
    lwz r4, 0x638(r1)
    lwz r0, 0x63c(r1)
    stw r5, 0x10c(r1)
    stw r4, 0x110(r1)
    stw r0, 0x114(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002AA8
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002AA8:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_00002ADC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002ADC:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_00002B0C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002B0C:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r23, 0xf80(r27)
    beq lbl_fn_8013CB68_00003940
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8013CB68_00003940
lbl_fn_8013CB68_00002B3C:
    lwz r0, 0x48(r27)
    cmpwi r0, 0x2
    bne lbl_fn_8013CB68_00003940
    lwz r3, 0x60(r27)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x35
    bne lbl_fn_8013CB68_00003940
    lfs f3, lbl_8088196C
    addi r3, r1, 0x480
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x220(r1)
    stfs f3, 0x224(r1)
    stfs f0, 0x228(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x220
    addi r3, r1, 0x480
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x36c(r1)
    addi r25, r1, 0x244
    lfs f3, 0x368(r1)
    addi r5, r1, 0x238
    fneg f8, f0
    lfs f0, 0x364(r1)
    fneg f9, f3
    lfs f4, 0x224(r1)
    fneg f3, f0
    lfs f0, 0x220(r1)
    frsp f5, f9
    stfs f3, 0x22c(r1)
    frsp f3, f3
    lfs f6, 0x228(r1)
    frsp f7, f8
    stfs f9, 0x230(r1)
    fadds f4, f5, f4
    stfs f8, 0x234(r1)
    fadds f0, f3, f0
    mr r3, r25
    stfs f4, 0x23c(r1)
    fadds f2, f7, f6
    stfs f0, 0x238(r1)
    mr r4, r25
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x240(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x24c(r1)
    bl fn_805F98D0
    lis r5, lbl_80737A9C@ha
    li r3, 0x3c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8013CB68_00002C48
    mr r4, r27
    mr r5, r25
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_801C48B4
    mr r23, r3
lbl_fn_8013CB68_00002C48:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00002CD8
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002C80
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x640(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x644(r1)
    stw r0, 0x648(r1)
    b lbl_fn_8013CB68_00002C9C
lbl_fn_8013CB68_00002C80:
    addi r3, r24, 0x1c4
    lwz r5, 0x1c4(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x640(r1)
    stw r4, 0x644(r1)
    stw r0, 0x648(r1)
lbl_fn_8013CB68_00002C9C:
    lwz r5, 0x640(r1)
    addi r3, r1, 0xf4
    lwz r4, 0x644(r1)
    lwz r0, 0x648(r1)
    stw r5, 0xf4(r1)
    stw r4, 0xf8(r1)
    stw r0, 0xfc(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002CD8
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002CD8:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00002E8C
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00002CF0
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00002CF0:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00002E8C
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002D28
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x64c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x650(r1)
    stw r0, 0x654(r1)
    b lbl_fn_8013CB68_00002D44
lbl_fn_8013CB68_00002D28:
    addi r3, r24, 0x1d0
    lwz r5, 0x1d0(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x64c(r1)
    stw r4, 0x650(r1)
    stw r0, 0x654(r1)
lbl_fn_8013CB68_00002D44:
    lwz r5, 0x64c(r1)
    addi r3, r1, 0xdc
    lwz r4, 0x650(r1)
    lwz r0, 0x654(r1)
    stw r5, 0xdc(r1)
    stw r4, 0xe0(r1)
    stw r0, 0xe4(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002D80
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002D80:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00002E5C
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00002D98
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00002D98:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00002E5C
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002DD0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x658(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x65c(r1)
    stw r0, 0x660(r1)
    b lbl_fn_8013CB68_00002DEC
lbl_fn_8013CB68_00002DD0:
    addi r3, r24, 0x1dc
    lwz r5, 0x1dc(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x658(r1)
    stw r4, 0x65c(r1)
    stw r0, 0x660(r1)
lbl_fn_8013CB68_00002DEC:
    lwz r5, 0x658(r1)
    addi r3, r1, 0xe8
    lwz r4, 0x65c(r1)
    lwz r0, 0x660(r1)
    stw r5, 0xe8(r1)
    stw r4, 0xec(r1)
    stw r0, 0xf0(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00002E28
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002E28:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_00002E5C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002E5C:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_00002E8C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00002E8C:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r23, 0xf80(r27)
    beq lbl_fn_8013CB68_00003940
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8013CB68_00003940
lbl_fn_8013CB68_00002EBC:
    cmpwi r25, 0x0
    li r23, 0x0
    beq lbl_fn_8013CB68_00002ED8
    lwz r0, 0x54c(r1)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8013CB68_00002FB8
lbl_fn_8013CB68_00002ED8:
    lwz r0, 0x958(r27)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8013CB68_00002FB8
    lwz r0, 0x54c(r27)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_8013CB68_00002FB8
    lwz r3, 0x48(r27)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_8013CB68_00002F18
    cmpwi r3, 0x4
    beq lbl_fn_8013CB68_00002F18
    li r0, 0x0
lbl_fn_8013CB68_00002F18:
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_00002FB8
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00002FB8
    addi r3, r1, 0x3e0
    lfs f2, 0x3e8(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x358
    addi r6, r1, 0x34c
    psq_st f1, 0x0(r5), 0, 0
    lfs f4, lbl_80881978
    addi r8, r27, 0x5b8
    psq_st f1, 0x0(r6), 0, 0
    li r4, 0x0
    lfs f5, 0x35c(r1)
    lis r7, 0x8000
    lfs f3, 0x350(r1)
    li r9, 0x0
    lfs f0, lbl_80881A50
    fadds f4, f5, f4
    stfs f2, 0x360(r1)
    fsubs f0, f3, f0
    lwz r3, lbl_8087EE98
    stfs f2, 0x354(r1)
    stfs f4, 0x35c(r1)
    stfs f0, 0x350(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_00002F94
    li r23, 0x1
lbl_fn_8013CB68_00002F94:
    lwz r0, 0x54c(r27)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8013CB68_00002FB8
    lfs f3, 0x350(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_00002FB8
    li r23, 0x0
lbl_fn_8013CB68_00002FB8:
    cmpwi r23, 0x0
    beq lbl_fn_8013CB68_00003050
    lwz r3, 0x630(r27)
    addi r0, r3, 0x1
    stw r0, 0x630(r27)
    cmpwi r0, 0x1
    ble lbl_fn_8013CB68_0000309C
    addi r3, r1, 0x3e0
    lfs f3, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x340
    lfs f2, 0x3e8(r1)
    addi r6, r1, 0x334
    lfs f0, lbl_80881A44
    li r4, 0x0
    psq_st f1, 0x0(r5), 0, 0
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f2, 0x348(r1)
    li r9, 0x0
    lfs f1, lbl_80881978
    stfs f3, 0x334(r1)
    stfs f0, 0x338(r1)
    stfs f3, 0x33c(r1)
    bl fn_8004D314
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_00003044
    lwz r12, 0x0(r27)
    mr r3, r27
    addi r4, r1, 0x3c8
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8013CB68_0000309C
lbl_fn_8013CB68_00003044:
    li r0, 0x0
    stw r0, 0x630(r27)
    b lbl_fn_8013CB68_0000309C
lbl_fn_8013CB68_00003050:
    cmpwi r25, 0x0
    li r0, 0x0
    stw r0, 0x630(r27)
    beq lbl_fn_8013CB68_0000309C
    lwz r0, 0x54c(r1)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8013CB68_00003080
    lwz r3, lbl_8087F0A8
    lwz r0, 0x2c0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8013CB68_0000309C
lbl_fn_8013CB68_00003080:
    mr r3, r27
    addi r4, r1, 0x3e0
    addi r5, r1, 0x3c8
    bl fn_801749EC
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_0000309C
    li r31, 0x0
lbl_fn_8013CB68_0000309C:
    lfs f5, 0x3e8(r1)
    addi r3, r1, 0x328
    lfs f3, 0x3a0(r1)
    lfs f4, 0x3e4(r1)
    fsubs f5, f5, f3
    lfs f0, 0x39c(r1)
    lfs f3, 0x3d0(r1)
    fsubs f6, f4, f0
    lfs f4, 0x3e0(r1)
    fadds f7, f3, f5
    lfs f3, 0x398(r1)
    lfs f0, 0x3cc(r1)
    fsubs f3, f4, f3
    stfs f6, 0x218(r1)
    fadds f8, f0, f6
    lfs f0, 0x3c8(r1)
    lfs f30, lbl_8088196C
    fadds f0, f0, f3
    stfs f3, 0x214(r1)
    stfs f5, 0x21c(r1)
    stfs f0, 0x328(r1)
    stfs f8, 0x32c(r1)
    stfs f7, 0x330(r1)
    bl fn_805F9920
    lfs f0, lbl_80881A1C
    fcmpo cr0, f1, f0
    ble lbl_fn_8013CB68_00003324
    fcmpo cr0, f28, f0
    ble lbl_fn_8013CB68_00003324
    addi r3, r1, 0x328
    addi r23, r1, 0x1fc
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r23
    lfs f2, 0x330(r1)
    mr r4, r23
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x204(r1)
    bl fn_805F98D0
    lfs f2, 0x204(r1)
    addi r25, r1, 0x208
    psq_l f1, 0x0(r23), 0, 0
    fabs f3, f2
    lfs f0, lbl_808819C4
    psq_st f1, 0x0(r25), 0, 0
    frsp f3, f3
    stfs f2, 0x210(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_00003180
    lfs f3, 0x208(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_8013CB68_00003174
    lfs f0, lbl_808819C8
    b lbl_fn_8013CB68_00003178
lbl_fn_8013CB68_00003174:
    lfs f0, lbl_808819CC
lbl_fn_8013CB68_00003178:
    stfs f0, 0xd4(r1)
    b lbl_fn_8013CB68_00003194
lbl_fn_8013CB68_00003180:
    frsp f2, f2
    lfs f1, 0x208(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd4(r1)
lbl_fn_8013CB68_00003194:
    lfs f0, 0xd4(r1)
    addi r3, r1, 0x410
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088196C
    addi r4, r1, 0xc4
    lfs f29, 0x418(r1)
    mr r5, r4
    lfs f28, 0x414(r1)
    addi r3, r1, 0x440
    lfs f13, 0x410(r1)
    lfs f12, 0x428(r1)
    lfs f11, 0x424(r1)
    lfs f10, 0x420(r1)
    lfs f9, 0x438(r1)
    lfs f8, 0x434(r1)
    lfs f7, 0x430(r1)
    lfs f6, 0x43c(r1)
    lfs f5, 0x42c(r1)
    lfs f4, 0x41c(r1)
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0x210(r1)
    stfs f3, 0x470(r1)
    stfs f3, 0x474(r1)
    stfs f3, 0x478(r1)
    stfs f0, 0x47c(r1)
    stfs f13, 0x94(r1)
    stfs f28, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f13, 0x440(r1)
    stfs f28, 0x444(r1)
    stfs f29, 0x448(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f10, 0x450(r1)
    stfs f11, 0x454(r1)
    stfs f12, 0x458(r1)
    stfs f7, 0xac(r1)
    stfs f8, 0xb0(r1)
    stfs f9, 0xb4(r1)
    stfs f7, 0x460(r1)
    stfs f8, 0x464(r1)
    stfs f9, 0x468(r1)
    stfs f4, 0xb8(r1)
    stfs f5, 0xbc(r1)
    stfs f6, 0xc0(r1)
    stfs f4, 0x44c(r1)
    stfs f5, 0x45c(r1)
    stfs f6, 0x46c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xcc(r1)
    bl fn_805F9750
    lfs f2, 0xcc(r1)
    lfs f0, lbl_808819C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_000032B0
    lfs f3, 0xc8(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_8013CB68_000032A0
    lfs f0, lbl_808819C8
    b lbl_fn_8013CB68_000032A4
lbl_fn_8013CB68_000032A0:
    lfs f0, lbl_808819CC
lbl_fn_8013CB68_000032A4:
    fneg f0, f0
    stfs f0, 0xd0(r1)
    b lbl_fn_8013CB68_000032C4
lbl_fn_8013CB68_000032B0:
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd0(r1)
lbl_fn_8013CB68_000032C4:
    addi r3, r1, 0xd0
    lfs f4, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80737810@ha
    psq_st f1, 0x0(r25), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r27)
    lfs f3, 0x20c(r1)
    stfs f2, 0x210(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80737810@l(r3)
    stfs f4, 0xd8(r1)
    bl fn_8068AEA8
    frsp f30, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f30, f0
    ble lbl_fn_8013CB68_00003310
    lfs f0, lbl_80881A10
    fsubs f30, f30, f0
lbl_fn_8013CB68_00003310:
    lfs f0, lbl_80881A14
    fcmpo cr0, f30, f0
    bge lbl_fn_8013CB68_00003324
    lfs f0, lbl_80881A10
    fadds f30, f30, f0
lbl_fn_8013CB68_00003324:
    lfs f0, lbl_808819B0
    lfs f4, lbl_808819A8
    fmuls f30, f30, f0
    lfs f3, 0x584(r27)
    lfs f0, lbl_80881A54
    fnmsubs f3, f4, f30, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_00003348
    b lbl_fn_8013CB68_0000334C
lbl_fn_8013CB68_00003348:
    fmr f3, f0
lbl_fn_8013CB68_0000334C:
    lfs f4, lbl_80881A58
    fcmpo cr0, f3, f4
    ble lbl_fn_8013CB68_00003378
    lfs f4, lbl_808819A8
    lfs f3, 0x584(r27)
    lfs f0, lbl_80881A54
    fnmsubs f4, f4, f30, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_8013CB68_00003374
    b lbl_fn_8013CB68_00003378
lbl_fn_8013CB68_00003374:
    fmr f4, f0
lbl_fn_8013CB68_00003378:
    frsp f3, f4
    lfs f0, lbl_808819BC
    lwz r0, 0x648(r27)
    li r3, 0x0
    stw r3, 0x610(r27)
    fmuls f0, f3, f0
    cmpwi r0, 0x0
    stfs f0, 0x584(r27)
    beq lbl_fn_8013CB68_00003748
    mr r3, r27
    addi r4, r1, 0x3e0
    addi r5, r1, 0x3c8
    bl fn_80172EFC
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_000038B8
    mr r3, r27
    addi r4, r1, 0x3e0
    addi r5, r1, 0x3c8
    bl fn_801720AC
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_000033D4
    li r31, 0x0
    b lbl_fn_8013CB68_000038B8
lbl_fn_8013CB68_000033D4:
    lwz r0, 0x7e0(r27)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_8013CB68_000038B8
    lwz r3, 0x55c(r27)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_8013CB68_000038B8
    lwz r0, 0x54c(r27)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8013CB68_000038B8
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_8013CB68_000038B8
    addi r3, r27, 0x574
    bl fn_805F9920
    lfs f0, lbl_80881964
    fcmpo cr0, f1, f0
    bgt lbl_fn_8013CB68_0000343C
    lfs f3, 0x570(r27)
    lfs f0, lbl_808819A8
    fcmpo cr0, f3, f0
    ble lbl_fn_8013CB68_000038B8
lbl_fn_8013CB68_0000343C:
    lwz r3, 0x1208(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00003498
    lfs f0, lbl_8088196C
    li r23, 0x0
    li r0, 0x3
    stw r23, 0x3f4(r1)
    addi r4, r1, 0x3f0
    stw r23, 0x3f8(r1)
    stw r23, 0x3fc(r1)
    stfs f0, 0x404(r1)
    stfs f0, 0x408(r1)
    stfs f0, 0x40c(r1)
    stw r0, 0x3f0(r1)
    stw r27, 0x400(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r27)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r23, 0x1208(r27)
lbl_fn_8013CB68_00003498:
    lis r5, lbl_80737A9C@ha
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8013CB68_000034D4
    mr r4, r27
    li r5, 0x0
    bl fn_801C8938
    mr r23, r3
lbl_fn_8013CB68_000034D4:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00003564
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_0000350C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x664(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x668(r1)
    stw r0, 0x66c(r1)
    b lbl_fn_8013CB68_00003528
lbl_fn_8013CB68_0000350C:
    addi r3, r24, 0x1e8
    lwz r5, 0x1e8(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x664(r1)
    stw r4, 0x668(r1)
    stw r0, 0x66c(r1)
lbl_fn_8013CB68_00003528:
    lwz r5, 0x664(r1)
    addi r3, r1, 0x88
    lwz r4, 0x668(r1)
    lwz r0, 0x66c(r1)
    stw r5, 0x88(r1)
    stw r4, 0x8c(r1)
    stw r0, 0x90(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00003564
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00003564:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_00003718
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_0000357C
    stw r0, 0x564(r27)
lbl_fn_8013CB68_0000357C:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00003718
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_000035B4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x670(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x674(r1)
    stw r0, 0x678(r1)
    b lbl_fn_8013CB68_000035D0
lbl_fn_8013CB68_000035B4:
    addi r3, r24, 0x1f4
    lwz r5, 0x1f4(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x670(r1)
    stw r4, 0x674(r1)
    stw r0, 0x678(r1)
lbl_fn_8013CB68_000035D0:
    lwz r5, 0x670(r1)
    addi r3, r1, 0x70
    lwz r4, 0x674(r1)
    lwz r0, 0x678(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r0, 0x78(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_0000360C
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_0000360C:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8013CB68_000036E8
    cmpwi r0, 0x8
    beq lbl_fn_8013CB68_00003624
    stw r0, 0x564(r27)
lbl_fn_8013CB68_00003624:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_000036E8
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013CB68_0000365C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x67c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x680(r1)
    stw r0, 0x684(r1)
    b lbl_fn_8013CB68_00003678
lbl_fn_8013CB68_0000365C:
    addi r3, r24, 0x200
    lwz r5, 0x200(r24)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x67c(r1)
    stw r4, 0x680(r1)
    stw r0, 0x684(r1)
lbl_fn_8013CB68_00003678:
    lwz r5, 0x67c(r1)
    addi r3, r1, 0x7c
    lwz r4, 0x680(r1)
    lwz r0, 0x684(r1)
    stw r5, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r0, 0x84(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_000036B4
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000036B4:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_000036E8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_000036E8:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8013CB68_00003718
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013CB68_00003718:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r23, 0xf80(r27)
    beq lbl_fn_8013CB68_00003940
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8013CB68_00003940
lbl_fn_8013CB68_00003748:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8013CB68_00003768
    lwz r0, 0x560(r27)
    cmpwi r0, 0x3c
    beq lbl_fn_8013CB68_000038B8
    cmpwi r0, 0x3d
    beq lbl_fn_8013CB68_000038B8
lbl_fn_8013CB68_00003768:
    mr r3, r27
    addi r4, r1, 0x3e0
    addi r5, r1, 0x3c8
    bl fn_80174104
    cmpwi r3, 0x0
    bne lbl_fn_8013CB68_00003940
    mr r3, r27
    addi r4, r1, 0x3e0
    addi r5, r1, 0x3c8
    bl fn_801720AC
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_000038B8
    li r31, 0x0
    b lbl_fn_8013CB68_000038B8
lbl_fn_8013CB68_000037A0:
    lfs f0, lbl_8088196C
    stfs f0, 0x3cc(r1)
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x2
    bne lbl_fn_8013CB68_00003810
    addi r3, r27, 0xc64
    bl fn_80125474
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00003810
    addi r3, r1, 0x3c8
    bl fn_805F9940
    lfs f3, 0xcc4(r27)
    fmr f28, f1
    lfs f0, 0xcbc(r27)
    fmuls f3, f3, f3
    fmadds f1, f0, f0, f3
    bl fn_8068B100
    lfs f0, lbl_808819B8
    frsp f3, f1
    fcmpo cr0, f28, f0
    ble lbl_fn_8013CB68_00003874
    fcmpo cr0, f3, f0
    ble lbl_fn_8013CB68_00003874
    fdivs f3, f3, f28
    lfs f0, 0xcc0(r27)
    fdivs f0, f0, f3
    stfs f0, 0x3cc(r1)
    b lbl_fn_8013CB68_00003874
lbl_fn_8013CB68_00003810:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x7
    bne lbl_fn_8013CB68_00003874
    addi r3, r27, 0x1030
    bl fn_80125474
    cmpwi r3, 0x0
    beq lbl_fn_8013CB68_00003874
    addi r3, r1, 0x3c8
    bl fn_805F9940
    lfs f3, 0x1090(r27)
    fmr f28, f1
    lfs f0, 0x1088(r27)
    fmuls f3, f3, f3
    fmadds f1, f0, f0, f3
    bl fn_8068B100
    lfs f0, lbl_808819B8
    frsp f3, f1
    fcmpo cr0, f28, f0
    ble lbl_fn_8013CB68_00003874
    fcmpo cr0, f3, f0
    ble lbl_fn_8013CB68_00003874
    fdivs f3, f3, f28
    lfs f0, 0x108c(r27)
    fdivs f0, f0, f3
    stfs f0, 0x3cc(r1)
lbl_fn_8013CB68_00003874:
    lfs f5, 0x3e0(r1)
    lfs f0, 0x3c8(r1)
    lfs f4, 0x3e4(r1)
    fadds f6, f5, f0
    lfs f3, 0x3cc(r1)
    lfs f0, lbl_8088196C
    fadds f5, f4, f3
    lfs f4, 0x3e8(r1)
    lfs f3, 0x3d0(r1)
    stfs f6, 0x3e0(r1)
    fadds f3, f4, f3
    stfs f5, 0x3e4(r1)
    stfs f3, 0x3e8(r1)
    stfs f0, 0x3cc(r1)
    lwz r3, 0x610(r27)
    addi r0, r3, 0x1
    stw r0, 0x610(r27)
lbl_fn_8013CB68_000038B8:
    lwz r0, 0x54c(r27)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8013CB68_000038E0
    lfs f3, 0x3e4(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    bge lbl_fn_8013CB68_000038E0
    stfs f0, 0x3e4(r1)
    stfs f0, 0x3cc(r1)
lbl_fn_8013CB68_000038E0:
    addi r3, r1, 0x3e0
    lfs f2, 0x3e8(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r31, 0x0
    psq_st f1, 0x528(r27), 0, 0
    stfs f2, 0x530(r27)
    beq lbl_fn_8013CB68_0000392C
    lwz r0, 0xf54(r27)
    addi r3, r1, 0x3d4
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x3dc(r1)
    cmpwi r0, 0x0
    psq_st f1, 0x534(r27), 0, 0
    stfs f2, 0x53c(r27)
    beq lbl_fn_8013CB68_0000392C
    lfs f3, 0x538(r27)
    lfs f0, lbl_80881A0C
    fsubs f0, f3, f0
    stfs f0, 0x538(r27)
lbl_fn_8013CB68_0000392C:
    addi r3, r1, 0x3c8
    lfs f2, 0x3d0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r27), 0, 0
    stfs f2, 0x57c(r27)
lbl_fn_8013CB68_00003940:
    addi r11, r1, 0x6b0
    psq_l f31, 0x6e8(r1), 0, 0
    lfd f31, 0x6e0(r1)
    psq_l f30, 0x6d8(r1), 0, 0
    lfd f30, 0x6d0(r1)
    psq_l f29, 0x6c8(r1), 0, 0
    lfd f29, 0x6c0(r1)
    psq_l f28, 0x6b8(r1), 0, 0
    lfd f28, 0x6b0(r1)
    bl _restgpr_22
    lwz r0, 0x6f4(r1)
    mtlr r0
    addi r1, r1, 0x6f0
    blr
}
