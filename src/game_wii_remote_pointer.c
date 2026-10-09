#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _restgpr_23(void);
extern void _savegpr_18(void);
extern void _savegpr_23(void);
extern void fn_80084320(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB688(void);
extern void fn_800DC1DC(void);
extern void fn_800DD3FC(void);
extern void fn_8017A450(void);
extern void fn_803E6BF0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);

/* External data declarations */
extern u8 jumptable_80794A60[];
extern u8 lbl_8075E480[];
extern u8 lbl_8075E49C[];
extern u8 lbl_80794AC0[];
extern u8 lbl_80794AE0[];
extern u8 lbl_80794B48[];
extern u8 lbl_80794B80[];
extern u8 lbl_80794BB8[];
extern u8 lbl_80794BF0[];
extern u8 lbl_80794C28[];
extern u8 lbl_80794C60[];
extern u8 lbl_80794C98[];
extern u8 lbl_80794CD0[];
extern u8 lbl_80794D08[];
extern u8 lbl_80794D40[];
extern u8 lbl_80794DC8[];
extern u8 lbl_80794E00[];
extern u8 lbl_80794E38[];
extern u8 lbl_80794E70[];
extern u8 lbl_80794EA8[];
extern u8 lbl_80794EE0[];
extern u8 lbl_80794F18[];
extern u8 lbl_80794F98[];
extern u8 lbl_80794FD0[];
extern u8 lbl_80795008[];
extern u8 lbl_80795040[];
extern u8 lbl_80795078[];
extern u8 lbl_807950B0[];
extern u8 lbl_807950E8[];
extern u8 lbl_80795120[];
extern u8 lbl_80795158[];
extern u8 lbl_80795190[];
extern u8 lbl_807951C8[];
extern u8 lbl_80795200[];
extern u8 lbl_80795238[];
extern u8 lbl_80795270[];
extern u8 lbl_807952A8[];
extern u8 lbl_807952E0[];
extern u8 lbl_80795318[];
extern u8 lbl_80795350[];
extern u8 lbl_80795388[];
extern u8 lbl_807953C0[];
extern u8 lbl_807953F8[];
extern u8 lbl_80795430[];
extern u8 lbl_80795468[];
extern u8 lbl_807954A0[];
extern u8 lbl_807954D8[];
extern u8 lbl_80795510[];
extern u8 lbl_80795548[];
extern u8 lbl_80795580[];
extern u8 lbl_807955B8[];
extern u8 lbl_807955F0[];
extern u8 lbl_80795628[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C9140[];

/* Small data declarations */
extern u32 lbl_8087E4E8;
extern u32 lbl_8087E4EC;
extern u32 lbl_8087E4F0;
extern u32 lbl_8087E4F4;
extern u32 lbl_8087E4F8;
extern u32 lbl_8087E4FC;
extern u32 lbl_8087E500;
extern u32 lbl_8087E504;
extern u32 lbl_8087E508;
extern u32 lbl_8087E50C;
extern u32 lbl_8087E510;
extern u32 lbl_8087E514;
extern u32 lbl_8087E518;
extern u32 lbl_8087E51C;
extern u32 lbl_8087E520;
extern u32 lbl_8087E524;
extern u32 lbl_8087E528;
extern u32 lbl_8087E52C;
extern u32 lbl_8087E530;
extern u32 lbl_8087E534;
extern u32 lbl_8087E538;
extern u32 lbl_8087E53C;
extern u32 lbl_8087E540;
extern u32 lbl_8087E544;
extern u32 lbl_8087E548;
extern u32 lbl_8087E54C;
extern u32 lbl_8087E550;
extern u32 lbl_8087E554;
extern u32 lbl_8087E558;
extern u32 lbl_8087E55C;
extern u32 lbl_8087E560;
extern u32 lbl_8087E564;
extern u32 lbl_8087E568;
extern u32 lbl_8087E56C;
extern u32 lbl_8087E570;
extern u32 lbl_8087E574;
extern u32 lbl_8087E578;
extern u32 lbl_8087E57C;
extern u32 lbl_8087E580;
extern u32 lbl_8087E584;
extern u32 lbl_8087E588;
extern u32 lbl_8087E58C;
extern u32 lbl_8087E590;
extern u32 lbl_8087E594;
extern u32 lbl_8087E598;
extern u32 lbl_8087E59C;
extern u32 lbl_8087E5A0;
extern u32 lbl_8087E5A4;
extern u32 lbl_8087E5A8;
extern u32 lbl_8087E5AC;
extern u32 lbl_8087E5B0;
extern u32 lbl_8087E5B4;
extern u32 lbl_8087E5B8;
extern u32 lbl_8087E5BC;
extern u32 lbl_8087E5C0;
extern u32 lbl_8087E5C4;
extern u32 lbl_8087E5C8;
extern u32 lbl_8087E5CC;
extern u32 lbl_8087E5D0;
extern u32 lbl_8087E5D4;
extern u32 lbl_8087E5D8;
extern u32 lbl_8087E5DC;
extern u32 lbl_8087E5E0;
extern u32 lbl_8087E5E4;
extern u32 lbl_8087E5E8;
extern u32 lbl_8087E5EC;
extern u32 lbl_8087E5F0;
extern u32 lbl_8087E5F4;
extern u32 lbl_8087E5F8;
extern u32 lbl_8087E5FC;
extern u32 lbl_8087E600;
extern u32 lbl_8087E604;
extern u32 lbl_8087E608;
extern u32 lbl_8087E60C;
extern u32 lbl_8087E610;
extern u32 lbl_8087E614;
extern u32 lbl_8087E618;
extern u32 lbl_8087E61C;
extern u32 lbl_8087E620;
extern u32 lbl_8087E624;
extern u32 lbl_8087E628;
extern u32 lbl_8087E62C;
extern u32 lbl_8087E630;
extern u32 lbl_8087E634;
extern u32 lbl_8087E638;
extern u32 lbl_8087E63C;
extern u32 lbl_8087E640;
extern u32 lbl_8087E644;
extern u32 lbl_8087E648;
extern u32 lbl_8087E64C;
extern u32 lbl_8087E650;
extern u32 lbl_8087E654;
extern u32 lbl_8087E658;
extern u32 lbl_8087E65C;
extern u32 lbl_8087E660;
extern u32 lbl_8087E664;
extern u32 lbl_8087E668;
extern u32 lbl_8087E66C;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8B0;
extern u32 lbl_8087F8B4;
extern u32 lbl_8087F8B8;
extern u32 lbl_8087F8BC;
extern u32 lbl_8087F8C0;
extern u32 lbl_8087F8C4;
extern u32 lbl_8087F8C8;
extern u32 lbl_8087F8CC;
extern u32 lbl_8087F8D0;
extern u32 lbl_8087F8D4;
extern u32 lbl_8087F8D8;
extern u32 lbl_8087F8DC;
extern u32 lbl_8087F8E0;
extern u32 lbl_8087F8E4;
extern u32 lbl_8087F8E8;
extern u32 lbl_8087F8EC;
extern u32 lbl_8087F8F0;
extern u32 lbl_8087F8F4;
extern u32 lbl_8087F8F8;
extern u32 lbl_8087F8FC;
extern u32 lbl_8087F900;
extern u32 lbl_8087F904;
extern u32 lbl_8087F908;
extern u32 lbl_8087F90C;
extern u32 lbl_8087F910;
extern u32 lbl_8087F914;
extern u32 lbl_8087F918;
extern u32 lbl_8087F91C;
extern u32 lbl_8087F920;
extern u32 lbl_8087F924;
extern u32 lbl_8087F928;
extern u32 lbl_8087F92C;
extern u32 lbl_8087F930;
extern u32 lbl_8087F934;
extern u32 lbl_8087F938;
extern u32 lbl_8087F93C;
extern u32 lbl_8087F940;
extern u32 lbl_8087F944;
extern u32 lbl_8087F948;
extern u32 lbl_8087F94C;
extern u32 lbl_8087F950;
extern u32 lbl_8087F954;
extern u32 lbl_8087F958;
extern u32 lbl_8087F95C;
extern u32 lbl_8087F960;
extern u32 lbl_8087F964;
extern u32 lbl_8087F968;
extern u32 lbl_8087F96C;
extern u32 lbl_8087F970;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887D60;
extern u32 lbl_80887D70;
extern u32 lbl_80887D80;
extern u32 lbl_80887D8C;
extern u32 lbl_80887E04;
extern u32 lbl_80887E08;
extern u32 lbl_80887E0C;
extern u32 lbl_80887E10;
extern u32 lbl_80887E14;
extern u32 lbl_80887E18;
extern u32 lbl_80887E1C;

/* Function declarations */
void fn_8054D798(void);
void fn_8054E100(void);
void fn_8054E520(void);
void fn_8054E52C(void);
void fn_8054E578(void);

asm void fn_8054D798(void)
{
    nofralloc
    stwu r1, -0x300(r1)
    mflr r0
    stw r0, 0x304(r1)
    addi r11, r1, 0x300
    bl _savegpr_18
    lwz r0, 0x4c(r3)
    mr r19, r3
    lwz r26, 0x308(r1)
    mr r20, r4
    cmplwi r0, 0x20
    lwz r27, 0x30c(r1)
    lwz r28, 0x310(r1)
    mr r21, r5
    lwz r29, 0x314(r1)
    mr r22, r6
    lwz r30, 0x318(r1)
    mr r23, r7
    mr r24, r8
    mr r25, r9
    bge lbl_fn_8054D798_00000950
    cmpwi r27, 0x0
    beq lbl_fn_8054D798_0000007C
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8054D798_0000006C
    cmpwi r0, 0x3
    bne lbl_fn_8054D798_0000007C
lbl_fn_8054D798_0000006C:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054D798_00000950
lbl_fn_8054D798_0000007C:
    cmpwi r27, 0x0
    beq lbl_fn_8054D798_000000A0
    lwz r0, 0x48(r27)
    cmpwi r0, 0x2
    bne lbl_fn_8054D798_000000A0
    lwz r3, lbl_8087F9C0
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054D798_00000950
lbl_fn_8054D798_000000A0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8054D798_000000B8
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    beq lbl_fn_8054D798_00000950
lbl_fn_8054D798_000000B8:
    cmpwi r27, 0x0
    li r31, 0x0
    beq lbl_fn_8054D798_000000F8
    lwz r0, 0x48(r27)
    cmpwi r0, 0x2
    bne lbl_fn_8054D798_000000F8
    cmpwi r4, 0x1
    bne lbl_fn_8054D798_000000F8
    lwz r18, lbl_8087F490
    mr r3, r21
    bl fn_800DC1DC
    mr r5, r3
    mr r3, r18
    mr r4, r27
    bl fn_803E6BF0
    li r31, 0x1
lbl_fn_8054D798_000000F8:
    addi r18, r1, 0x2c
    li r4, 0x0
    lfs f0, lbl_80887D60
    cmplw r21, r18
    li r0, -0x1
    li r3, 0x1
    stw r4, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stw r4, 0x18(r1)
    stw r4, 0x20(r1)
    stw r4, 0x24(r1)
    stw r3, 0x28(r1)
    sth r4, 0x2c(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r4, 0x94(r1)
    stw r4, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r4, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r4, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r4, 0xb4(r1)
    stw r4, 0xb8(r1)
    stw r4, 0xbc(r1)
    stw r20, 0x1c(r1)
    beq lbl_fn_8054D798_000001A8
    mr r3, r21
    bl fn_80686A48
    mr r5, r3
    mr r3, r18
    mr r4, r21
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8054D798_000001A8:
    lis r5, lbl_807C7030@ha
    lfs f2, 0x8(r22)
    addi r3, r1, 0x6c
    psq_l f1, 0x0(r22), 0, 0
    lfs f3, lbl_80887D8C
    addi r5, r5, lbl_807C7030@l
    psq_st f1, 0x0(r3), 0, 0
    li r4, 0x0
    lfs f0, lbl_80887D60
    cmpwi r31, 0x0
    stfs f2, 0x74(r1)
    addi r3, r1, 0x78
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x80(r1)
    stw r23, 0x84(r1)
    stw r24, 0x20(r1)
    stw r28, 0x28(r1)
    stw r26, 0x94(r1)
    stw r27, 0x98(r1)
    stw r29, 0x88(r1)
    stw r30, 0x8c(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    stw r4, 0x18(r1)
    bne lbl_fn_8054D798_00000944
    cmplwi r20, 0x8
    bgt lbl_fn_8054D798_00000550
    lis r3, jumptable_80794A60@ha
    slwi r0, r20, 2
    addi r3, r3, jumptable_80794A60@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r27, 0x0
    stfs f3, 0x10(r1)
    beq lbl_fn_8054D798_000002B0
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8054D798_00000254
    cmpwi r0, 0x3
    bne lbl_fn_8054D798_000002B0
lbl_fn_8054D798_00000254:
    rlwinm r0, r24, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8054D798_00000270
    rlwinm r3, r24, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_8054D798_00000290
lbl_fn_8054D798_00000270:
    lwz r0, 0x177c(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000284
    li r0, 0x0
    b lbl_fn_8054D798_00000288
lbl_fn_8054D798_00000284:
    addi r0, r19, 0x1778
lbl_fn_8054D798_00000288:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
lbl_fn_8054D798_00000290:
    lwz r0, 0x1770(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_000002A4
    li r0, 0x0
    b lbl_fn_8054D798_000002A8
lbl_fn_8054D798_000002A4:
    addi r0, r19, 0x176c
lbl_fn_8054D798_000002A8:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
lbl_fn_8054D798_000002B0:
    cmpwi r29, 0x3
    beq lbl_fn_8054D798_0000032C
    bge lbl_fn_8054D798_000002D4
    cmpwi r29, 0x1
    beq lbl_fn_8054D798_0000030C
    bge lbl_fn_8054D798_00000550
    cmpwi r29, 0x0
    bge lbl_fn_8054D798_000002EC
    b lbl_fn_8054D798_000003AC
lbl_fn_8054D798_000002D4:
    cmpwi r29, 0x6
    beq lbl_fn_8054D798_0000036C
    bge lbl_fn_8054D798_00000550
    cmpwi r29, 0x5
    bge lbl_fn_8054D798_0000038C
    b lbl_fn_8054D798_0000034C
lbl_fn_8054D798_000002EC:
    lwz r0, 0x1728(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000300
    li r0, 0x0
    b lbl_fn_8054D798_00000304
lbl_fn_8054D798_00000300:
    addi r0, r19, 0x1724
lbl_fn_8054D798_00000304:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
lbl_fn_8054D798_0000030C:
    lwz r0, 0x1734(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000320
    li r0, 0x0
    b lbl_fn_8054D798_00000324
lbl_fn_8054D798_00000320:
    addi r0, r19, 0x1730
lbl_fn_8054D798_00000324:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
lbl_fn_8054D798_0000032C:
    lwz r0, 0x174c(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000340
    li r0, 0x0
    b lbl_fn_8054D798_00000344
lbl_fn_8054D798_00000340:
    addi r0, r19, 0x1748
lbl_fn_8054D798_00000344:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
lbl_fn_8054D798_0000034C:
    lwz r0, 0x1740(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000360
    li r0, 0x0
    b lbl_fn_8054D798_00000364
lbl_fn_8054D798_00000360:
    addi r0, r19, 0x173c
lbl_fn_8054D798_00000364:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
lbl_fn_8054D798_0000036C:
    lwz r0, 0x1758(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000380
    li r0, 0x0
    b lbl_fn_8054D798_00000384
lbl_fn_8054D798_00000380:
    addi r0, r19, 0x1754
lbl_fn_8054D798_00000384:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
lbl_fn_8054D798_0000038C:
    lwz r0, 0x1764(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_000003A0
    li r0, 0x0
    b lbl_fn_8054D798_000003A4
lbl_fn_8054D798_000003A0:
    addi r0, r19, 0x1760
lbl_fn_8054D798_000003A4:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
lbl_fn_8054D798_000003AC:
    rlwinm r0, r24, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8054D798_000003C8
    rlwinm r3, r24, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_8054D798_000003E8
lbl_fn_8054D798_000003C8:
    lwz r0, 0x171c(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_000003DC
    li r0, 0x0
    b lbl_fn_8054D798_000003E0
lbl_fn_8054D798_000003DC:
    addi r0, r19, 0x1718
lbl_fn_8054D798_000003E0:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
lbl_fn_8054D798_000003E8:
    lwz r0, 0x1710(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_000003FC
    li r0, 0x0
    b lbl_fn_8054D798_00000400
lbl_fn_8054D798_000003FC:
    addi r0, r19, 0x170c
lbl_fn_8054D798_00000400:
    stw r0, 0xa8(r1)
    b lbl_fn_8054D798_00000550
    stfs f3, 0x10(r1)
    lwz r0, 0x1788(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_0000041C
    b lbl_fn_8054D798_00000420
lbl_fn_8054D798_0000041C:
    addi r4, r19, 0x1784
lbl_fn_8054D798_00000420:
    stw r4, 0xa8(r1)
    b lbl_fn_8054D798_00000550
    mulli r0, r23, 0xc
    add r3, r19, r0
    lwz r0, 0x1794(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000440
    b lbl_fn_8054D798_00000444
lbl_fn_8054D798_00000440:
    addi r4, r3, 0x1790
lbl_fn_8054D798_00000444:
    cmpwi r4, 0x0
    stw r4, 0xac(r1)
    beq lbl_fn_8054D798_00000550
    lwz r3, 0x4(r4)
    lfs f0, 0xa0(r3)
    stfs f0, 0x10(r1)
    b lbl_fn_8054D798_00000550
    stfs f3, 0x10(r1)
    b lbl_fn_8054D798_00000550
    lwz r0, 0x17b8(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_0000047C
    li r3, 0x0
    b lbl_fn_8054D798_000004B4
lbl_fn_8054D798_0000047C:
    mr r6, r19
    addi r3, r19, 0x17b4
    li r5, 0x0
    b lbl_fn_8054D798_000004A4
lbl_fn_8054D798_0000048C:
    lwz r0, 0xf4(r6)
    cmplw r0, r3
    bne lbl_fn_8054D798_0000049C
    stw r4, 0xf4(r6)
lbl_fn_8054D798_0000049C:
    addi r6, r6, 0xb4
    addi r5, r5, 0x1
lbl_fn_8054D798_000004A4:
    lwz r0, 0x4c(r19)
    cmplw r5, r0
    blt lbl_fn_8054D798_0000048C
    addi r3, r19, 0x17b4
lbl_fn_8054D798_000004B4:
    cmpwi r3, 0x0
    stw r3, 0xb0(r1)
    beq lbl_fn_8054D798_00000550
    lwz r3, 0x4(r3)
    lfs f0, 0xa0(r3)
    stfs f0, 0x10(r1)
    b lbl_fn_8054D798_00000550
    lwz r0, 0x17c4(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_000004E0
    b lbl_fn_8054D798_000004E4
lbl_fn_8054D798_000004E0:
    addi r4, r19, 0x17c0
lbl_fn_8054D798_000004E4:
    cmpwi r4, 0x0
    stw r4, 0xb0(r1)
    beq lbl_fn_8054D798_00000550
    lwz r3, 0x4(r4)
    lfs f0, 0xa0(r3)
    stfs f0, 0x10(r1)
    b lbl_fn_8054D798_00000550
    lfs f0, lbl_80887E04
    lis r4, lbl_80794AC0@ha
    addi r4, r4, lbl_80794AC0@l
    stfs f0, 0x10(r1)
    mr r5, r23
    addi r3, r1, 0xc0
    addi r4, r4, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r21, r1, 0xc0
    addi r20, r1, 0x2c
    cmplw r21, r20
    beq lbl_fn_8054D798_00000550
    mr r3, r21
    bl fn_80686A48
    mr r5, r3
    mr r3, r20
    mr r4, r21
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8054D798_00000550:
    cmpwi r26, 0x0
    beq lbl_fn_8054D798_000006A0
    cmpwi r25, 0x1
    ble lbl_fn_8054D798_000006A0
    mr r3, r26
    bl fn_8017A450
    cmpwi r3, 0x0
    bne lbl_fn_8054D798_000006A0
    mr r6, r19
    addi r4, r19, 0x16d0
    li r5, 0x0
    li r3, 0x0
    b lbl_fn_8054D798_000005A8
lbl_fn_8054D798_00000584:
    lwz r0, 0xe4(r6)
    cmplw r0, r4
    bne lbl_fn_8054D798_000005A0
    lwz r0, 0xdc(r6)
    cmplw r0, r27
    bne lbl_fn_8054D798_000005A0
    stw r3, 0xe4(r6)
lbl_fn_8054D798_000005A0:
    addi r6, r6, 0xb4
    addi r5, r5, 0x1
lbl_fn_8054D798_000005A8:
    lwz r0, 0x4c(r19)
    cmplw r5, r0
    blt lbl_fn_8054D798_00000584
    addic. r3, r19, 0x16d0
    stw r3, 0xa0(r1)
    beq lbl_fn_8054D798_000006A0
    stw r25, 0x90(r1)
    lis r4, lbl_8075E49C@ha
    addi r4, r4, lbl_8075E49C@l
    lfs f1, lbl_80887E08
    lwz r6, 0x4(r3)
    addi r3, r1, 0x8
    addi r4, r4, 0x34e
    li r5, 0x0
    lfs f0, 0xa0(r6)
    li r6, -0x1
    stfs f0, 0x10(r1)
    bl fn_800C31F4
    subic. r3, r25, 0x1
    lfs f1, lbl_80887D70
    ble lbl_fn_8054D798_00000674
    cmpwi r3, 0x8
    ble lbl_fn_8054D798_0000065C
    cmpwi r3, -0x1
    li r0, 0x0
    ble lbl_fn_8054D798_00000614
    li r0, 0x1
lbl_fn_8054D798_00000614:
    cmpwi r0, 0x0
    beq lbl_fn_8054D798_0000065C
    subi r0, r3, 0x1
    lfs f0, lbl_80887E0C
    srwi r0, r0, 3
    mtctr r0
    cmpwi r3, 0x8
    ble lbl_fn_8054D798_0000065C
lbl_fn_8054D798_00000634:
    fmuls f1, f1, f0
    subi r3, r3, 0x8
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    bdnz lbl_fn_8054D798_00000634
lbl_fn_8054D798_0000065C:
    lfs f0, lbl_80887E0C
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_8054D798_00000674
lbl_fn_8054D798_0000066C:
    fmuls f1, f1, f0
    bdnz lbl_fn_8054D798_0000066C
lbl_fn_8054D798_00000674:
    lfs f0, lbl_80887D80
    fcmpo cr0, f1, f0
    bge lbl_fn_8054D798_00000684
    b lbl_fn_8054D798_00000688
lbl_fn_8054D798_00000684:
    fmr f1, f0
lbl_fn_8054D798_00000688:
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_800CB688
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8054D798_000006A0:
    rlwinm r0, r24, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8054D798_00000740
    lwz r0, 0x1704(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_000006C0
    li r6, 0x0
    b lbl_fn_8054D798_00000738
lbl_fn_8054D798_000006C0:
    mr r5, r19
    addi r6, r19, 0x1700
    li r4, 0x0
    li r3, 0x0
    b lbl_fn_8054D798_0000072C
lbl_fn_8054D798_000006D4:
    lwz r0, 0xe8(r5)
    cmplw r0, r6
    bne lbl_fn_8054D798_000006FC
    lwz r0, 0xd8(r5)
    cmplw r0, r26
    bne lbl_fn_8054D798_000006FC
    lwz r0, 0xdc(r5)
    cmplw r0, r27
    bne lbl_fn_8054D798_000006FC
    stw r3, 0xe8(r5)
lbl_fn_8054D798_000006FC:
    lwz r0, 0xfc(r5)
    cmplw r0, r6
    bne lbl_fn_8054D798_00000724
    lwz r0, 0xd8(r5)
    cmplw r0, r26
    bne lbl_fn_8054D798_00000724
    lwz r0, 0xdc(r5)
    cmplw r0, r27
    bne lbl_fn_8054D798_00000724
    stw r3, 0xfc(r5)
lbl_fn_8054D798_00000724:
    addi r5, r5, 0xb4
    addi r4, r4, 0x1
lbl_fn_8054D798_0000072C:
    lwz r0, 0x4c(r19)
    cmplw r4, r0
    blt lbl_fn_8054D798_000006D4
lbl_fn_8054D798_00000738:
    stw r6, 0xa4(r1)
    b lbl_fn_8054D798_000007E4
lbl_fn_8054D798_00000740:
    rlwinm r3, r24, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_8054D798_000007E4
    lwz r0, 0x16ec(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000764
    li r0, 0x0
    b lbl_fn_8054D798_000007E0
lbl_fn_8054D798_00000764:
    mr r6, r19
    addi r4, r19, 0x16e8
    li r5, 0x0
    li r3, 0x0
    b lbl_fn_8054D798_000007D0
lbl_fn_8054D798_00000778:
    lwz r0, 0xe8(r6)
    cmplw r0, r4
    bne lbl_fn_8054D798_000007A0
    lwz r0, 0xd8(r6)
    cmplw r0, r26
    bne lbl_fn_8054D798_000007A0
    lwz r0, 0xdc(r6)
    cmplw r0, r27
    bne lbl_fn_8054D798_000007A0
    stw r3, 0xe8(r6)
lbl_fn_8054D798_000007A0:
    lwz r0, 0xfc(r6)
    cmplw r0, r4
    bne lbl_fn_8054D798_000007C8
    lwz r0, 0xd8(r6)
    cmplw r0, r26
    bne lbl_fn_8054D798_000007C8
    lwz r0, 0xdc(r6)
    cmplw r0, r27
    bne lbl_fn_8054D798_000007C8
    stw r3, 0xfc(r6)
lbl_fn_8054D798_000007C8:
    addi r6, r6, 0xb4
    addi r5, r5, 0x1
lbl_fn_8054D798_000007D0:
    lwz r0, 0x4c(r19)
    cmplw r5, r0
    blt lbl_fn_8054D798_00000778
    addi r0, r19, 0x16e8
lbl_fn_8054D798_000007E0:
    stw r0, 0xa4(r1)
lbl_fn_8054D798_000007E4:
    clrrwi r3, r24, 31
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8054D798_00000884
    lwz r0, 0x16f8(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000808
    li r6, 0x0
    b lbl_fn_8054D798_00000880
lbl_fn_8054D798_00000808:
    mr r5, r19
    addi r6, r19, 0x16f4
    li r4, 0x0
    li r3, 0x0
    b lbl_fn_8054D798_00000874
lbl_fn_8054D798_0000081C:
    lwz r0, 0xe8(r5)
    cmplw r0, r6
    bne lbl_fn_8054D798_00000844
    lwz r0, 0xd8(r5)
    cmplw r0, r26
    bne lbl_fn_8054D798_00000844
    lwz r0, 0xdc(r5)
    cmplw r0, r27
    bne lbl_fn_8054D798_00000844
    stw r3, 0xe8(r5)
lbl_fn_8054D798_00000844:
    lwz r0, 0xfc(r5)
    cmplw r0, r6
    bne lbl_fn_8054D798_0000086C
    lwz r0, 0xd8(r5)
    cmplw r0, r26
    bne lbl_fn_8054D798_0000086C
    lwz r0, 0xdc(r5)
    cmplw r0, r27
    bne lbl_fn_8054D798_0000086C
    stw r3, 0xfc(r5)
lbl_fn_8054D798_0000086C:
    addi r5, r5, 0xb4
    addi r4, r4, 0x1
lbl_fn_8054D798_00000874:
    lwz r0, 0x4c(r19)
    cmplw r4, r0
    blt lbl_fn_8054D798_0000081C
lbl_fn_8054D798_00000880:
    stw r6, 0xb8(r1)
lbl_fn_8054D798_00000884:
    rlwinm r0, r24, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_8054D798_000008FC
    lwz r0, 0x16e0(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_000008A4
    li r0, 0x0
    b lbl_fn_8054D798_000008F8
lbl_fn_8054D798_000008A4:
    mr r6, r19
    addi r4, r19, 0x16dc
    li r5, 0x0
    li r3, 0x0
    b lbl_fn_8054D798_000008E8
lbl_fn_8054D798_000008B8:
    lwz r0, 0xe0(r6)
    cmplw r0, r4
    bne lbl_fn_8054D798_000008E0
    lwz r0, 0xd8(r6)
    cmplw r0, r26
    bne lbl_fn_8054D798_000008E0
    lwz r0, 0xdc(r6)
    cmplw r0, r27
    bne lbl_fn_8054D798_000008E0
    stw r3, 0xe0(r6)
lbl_fn_8054D798_000008E0:
    addi r6, r6, 0xb4
    addi r5, r5, 0x1
lbl_fn_8054D798_000008E8:
    lwz r0, 0x4c(r19)
    cmplw r5, r0
    blt lbl_fn_8054D798_000008B8
    addi r0, r19, 0x16dc
lbl_fn_8054D798_000008F8:
    stw r0, 0x9c(r1)
lbl_fn_8054D798_000008FC:
    cmpwi r27, 0x0
    beq lbl_fn_8054D798_00000944
    lwz r0, 0x48(r27)
    cmpwi r0, 0x2
    bne lbl_fn_8054D798_00000944
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_00000944
    cmpwi r30, 0x0
    blt lbl_fn_8054D798_00000944
    lwz r0, 0x17d0(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8054D798_0000093C
    li r0, 0x0
    b lbl_fn_8054D798_00000940
lbl_fn_8054D798_0000093C:
    addi r0, r19, 0x17cc
lbl_fn_8054D798_00000940:
    stw r0, 0xb4(r1)
lbl_fn_8054D798_00000944:
    mr r3, r19
    addi r4, r1, 0xc
    bl fn_8054E100
lbl_fn_8054D798_00000950:
    addi r11, r1, 0x300
    bl _restgpr_18
    lwz r0, 0x304(r1)
    mtlr r0
    addi r1, r1, 0x300
    blr
}

asm void fn_8054E100(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x80
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    stfd f25, 0x90(r1)
    psq_st f25, 0x98(r1), 0, 0
    stfd f24, 0x80(r1)
    psq_st f24, 0x88(r1), 0, 0
    bl _savegpr_23
    lwz r0, 0x4c(r3)
    mr r27, r3
    mr r28, r4
    cmplwi r0, 0x20
    bge lbl_fn_8054E100_00000D30
    lwz r3, 0x8c(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8054E100_00000A00
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054E100_000009F0
    cmpwi r0, 0x3
    bne lbl_fn_8054E100_00000A00
lbl_fn_8054E100_000009F0:
    lwz r4, lbl_8087F9C0
    lwz r0, 0x64(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8054E100_00000D30
lbl_fn_8054E100_00000A00:
    cmpwi r3, 0x0
    beq lbl_fn_8054E100_00000A24
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8054E100_00000A24
    lwz r3, lbl_8087F9C0
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054E100_00000D30
lbl_fn_8054E100_00000A24:
    lfs f31, lbl_80887D60
    lis r3, lbl_8075E480@ha
    lfs f30, lbl_80887D70
    addi r30, r1, 0x14
    fmr f25, f31
    lfs f29, lbl_80887E10
    lfs f28, lbl_80887E14
    li r29, 0x0
    lfs f24, lbl_80887E18
    li r26, 0x0
    lfd f26, lbl_8075E480@l(r3)
    li r31, 0x1
    lfs f27, lbl_80887E1C
    lis r24, 0x4178
    lis r25, 0x4330
    b lbl_fn_8054E100_00000BA8
lbl_fn_8054E100_00000A64:
    add r23, r27, r26
    lwz r0, 0x50(r23)
    cmpwi r0, 0x0
    bne lbl_fn_8054E100_00000BA0
    lfs f3, 0xb8(r23)
    addi r3, r1, 0x8
    lfs f0, 0x68(r28)
    lfs f5, 0xb4(r23)
    fsubs f6, f3, f0
    lfs f4, 0x64(r28)
    lfs f3, 0xb0(r23)
    lfs f0, 0x60(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f30
    bge lbl_fn_8054E100_00000BA0
    lwz r3, 0xdc(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8054E100_00000B10
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054E100_00000AD4
    cmpwi r0, 0x3
    bne lbl_fn_8054E100_00000B10
lbl_fn_8054E100_00000AD4:
    lfs f3, 0x8(r28)
    lfs f0, 0x4(r28)
    fadds f3, f3, f30
    fadds f0, f0, f30
    stfs f3, 0x8(r28)
    stfs f0, 0x4(r28)
    stw r31, 0x5c(r23)
    lwz r0, 0x177c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8054E100_00000B04
    li r0, 0x0
    b lbl_fn_8054E100_00000B08
lbl_fn_8054E100_00000B04:
    addi r0, r27, 0x1778
lbl_fn_8054E100_00000B08:
    stw r0, 0xec(r23)
    b lbl_fn_8054E100_00000B28
lbl_fn_8054E100_00000B10:
    lfs f3, 0x8(r28)
    lfs f0, 0x4(r28)
    fadds f3, f3, f29
    fadds f0, f0, f29
    stfs f3, 0x8(r28)
    stfs f0, 0x4(r28)
lbl_fn_8054E100_00000B28:
    stfs f24, 0x14(r1)
    stfs f25, 0x18(r1)
    stfs f25, 0x1c(r1)
    bl fn_80680CF8
    addi r0, r24, 0x749f
    stw r25, 0x50(r1)
    mulhw r0, r0, r3
    li r4, 0x7a
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x20
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f26
    fdivs f0, f0, f27
    fmadds f1, f28, f0, f31
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    psq_l f1, 0x0(r30), 0, 0
    fadds f31, f31, f28
    lfs f2, 0x1c(r1)
    stfs f2, 0x74(r28)
    psq_st f1, 0x6c(r28), 0, 0
lbl_fn_8054E100_00000BA0:
    addi r29, r29, 0x1
    addi r26, r26, 0xb4
lbl_fn_8054E100_00000BA8:
    lwz r0, 0x4c(r27)
    cmplw r29, r0
    blt lbl_fn_8054E100_00000A64
    lwz r0, 0x4c(r27)
    addi r3, r27, 0x4c
    mulli r0, r0, 0xb4
    add r0, r3, r0
    addic. r4, r0, 0x4
    beq lbl_fn_8054E100_00000D24
    lwz r0, 0x0(r28)
    stw r0, 0x0(r4)
    lfs f0, 0x4(r28)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r28)
    stfs f0, 0x8(r4)
    lwz r0, 0xc(r28)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r28)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r28)
    stw r0, 0x14(r4)
    lwz r0, 0x18(r28)
    stw r0, 0x18(r4)
    lwz r0, 0x1c(r28)
    stw r0, 0x1c(r4)
    lwz r0, 0x24(r28)
    lwz r5, 0x20(r28)
    stw r5, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x2c(r28)
    lwz r5, 0x28(r28)
    stw r5, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x34(r28)
    lwz r5, 0x30(r28)
    stw r5, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x3c(r28)
    lwz r5, 0x38(r28)
    stw r5, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x44(r28)
    lwz r5, 0x40(r28)
    stw r5, 0x40(r4)
    stw r0, 0x44(r4)
    lwz r0, 0x4c(r28)
    lwz r5, 0x48(r28)
    stw r5, 0x48(r4)
    stw r0, 0x4c(r4)
    lwz r0, 0x54(r28)
    lwz r5, 0x50(r28)
    stw r5, 0x50(r4)
    stw r0, 0x54(r4)
    lwz r0, 0x5c(r28)
    lwz r5, 0x58(r28)
    stw r5, 0x58(r4)
    stw r0, 0x5c(r4)
    lfs f2, 0x68(r28)
    psq_l f1, 0x60(r28), 0, 0
    psq_st f1, 0x60(r4), 0, 0
    stfs f2, 0x68(r4)
    lfs f2, 0x74(r28)
    psq_l f1, 0x6c(r28), 0, 0
    psq_st f1, 0x6c(r4), 0, 0
    stfs f2, 0x74(r4)
    lwz r0, 0x78(r28)
    stw r0, 0x78(r4)
    lwz r0, 0x7c(r28)
    stw r0, 0x7c(r4)
    lwz r0, 0x80(r28)
    stw r0, 0x80(r4)
    lwz r0, 0x84(r28)
    stw r0, 0x84(r4)
    lwz r0, 0x88(r28)
    stw r0, 0x88(r4)
    lwz r0, 0x8c(r28)
    stw r0, 0x8c(r4)
    lwz r0, 0x90(r28)
    stw r0, 0x90(r4)
    lwz r0, 0x94(r28)
    stw r0, 0x94(r4)
    lwz r0, 0x98(r28)
    stw r0, 0x98(r4)
    lwz r0, 0x9c(r28)
    stw r0, 0x9c(r4)
    lwz r0, 0xa0(r28)
    stw r0, 0xa0(r4)
    lwz r0, 0xa4(r28)
    stw r0, 0xa4(r4)
    lwz r0, 0xa8(r28)
    stw r0, 0xa8(r4)
    lwz r0, 0xac(r28)
    stw r0, 0xac(r4)
    lwz r0, 0xb0(r28)
    stw r0, 0xb0(r4)
lbl_fn_8054E100_00000D24:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_fn_8054E100_00000D30:
    addi r11, r1, 0x80
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    psq_l f25, 0x98(r1), 0, 0
    lfd f25, 0x90(r1)
    psq_l f24, 0x88(r1), 0, 0
    lfd f24, 0x80(r1)
    bl _restgpr_23
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8054E520(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4c(r3)
    blr
}

asm void fn_8054E52C(void)
{
    nofralloc
    mr r7, r3
    addi r6, r3, 0x16d0
    li r8, 0x0
    li r5, 0x0
    b lbl_fn_8054E52C_00000DCC
lbl_fn_8054E52C_00000DA8:
    lwz r0, 0xe4(r7)
    cmplw r0, r6
    bne lbl_fn_8054E52C_00000DC4
    lwz r0, 0xdc(r7)
    cmplw r0, r4
    bne lbl_fn_8054E52C_00000DC4
    stw r5, 0xe4(r7)
lbl_fn_8054E52C_00000DC4:
    addi r7, r7, 0xb4
    addi r8, r8, 0x1
lbl_fn_8054E52C_00000DCC:
    lwz r0, 0x4c(r3)
    cmplw r8, r0
    blt lbl_fn_8054E52C_00000DA8
    addi r3, r3, 0x16d0
    blr
}

asm void fn_8054E578(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r14, 0x8(r1)
    lwz r0, lbl_8087F970
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00000E2C
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E66C
    la r6, lbl_8087E668
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00000E28
    lis r4, lbl_80795628@ha
    addi r4, r4, lbl_80795628@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00000E28:
    stw r3, lbl_8087F970
lbl_fn_8054E578_00000E2C:
    lwz r0, lbl_8087F96C
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00000E68
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E664
    la r6, lbl_8087E660
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00000E64
    lis r4, lbl_807955F0@ha
    addi r4, r4, lbl_807955F0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00000E64:
    stw r3, lbl_8087F96C
lbl_fn_8054E578_00000E68:
    lwz r0, lbl_8087F960
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00000EA4
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E65C
    la r6, lbl_8087E658
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00000EA0
    lis r4, lbl_80795548@ha
    addi r4, r4, lbl_80795548@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00000EA0:
    stw r3, lbl_8087F960
lbl_fn_8054E578_00000EA4:
    lwz r0, lbl_8087F95C
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00000EE0
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E654
    la r6, lbl_8087E650
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00000EDC
    lis r4, lbl_80795510@ha
    addi r4, r4, lbl_80795510@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00000EDC:
    stw r3, lbl_8087F95C
lbl_fn_8054E578_00000EE0:
    lwz r0, lbl_8087F958
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00000F1C
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E64C
    la r6, lbl_8087E648
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00000F18
    lis r4, lbl_807954D8@ha
    addi r4, r4, lbl_807954D8@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00000F18:
    stw r3, lbl_8087F958
lbl_fn_8054E578_00000F1C:
    lwz r0, lbl_8087F954
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00000F58
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E644
    la r6, lbl_8087E640
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00000F54
    lis r4, lbl_807954A0@ha
    addi r4, r4, lbl_807954A0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00000F54:
    stw r3, lbl_8087F954
lbl_fn_8054E578_00000F58:
    lwz r0, lbl_8087F950
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00000F94
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E63C
    la r6, lbl_8087E638
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00000F90
    lis r4, lbl_80795468@ha
    addi r4, r4, lbl_80795468@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00000F90:
    stw r3, lbl_8087F950
lbl_fn_8054E578_00000F94:
    lwz r0, lbl_8087F94C
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00000FD0
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E634
    la r6, lbl_8087E630
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00000FCC
    lis r4, lbl_80795430@ha
    addi r4, r4, lbl_80795430@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00000FCC:
    stw r3, lbl_8087F94C
lbl_fn_8054E578_00000FD0:
    lwz r0, lbl_8087F948
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_0000100C
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E62C
    la r6, lbl_8087E628
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001008
    lis r4, lbl_807953F8@ha
    addi r4, r4, lbl_807953F8@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001008:
    stw r3, lbl_8087F948
lbl_fn_8054E578_0000100C:
    lwz r0, lbl_8087F944
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001048
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E624
    la r6, lbl_8087E620
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001044
    lis r4, lbl_807953C0@ha
    addi r4, r4, lbl_807953C0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001044:
    stw r3, lbl_8087F944
lbl_fn_8054E578_00001048:
    lwz r0, lbl_8087F940
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001084
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E61C
    la r6, lbl_8087E618
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001080
    lis r4, lbl_80795388@ha
    addi r4, r4, lbl_80795388@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001080:
    stw r3, lbl_8087F940
lbl_fn_8054E578_00001084:
    lwz r0, lbl_8087F93C
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000010C0
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E614
    la r6, lbl_8087E610
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000010BC
    lis r4, lbl_80795350@ha
    addi r4, r4, lbl_80795350@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000010BC:
    stw r3, lbl_8087F93C
lbl_fn_8054E578_000010C0:
    lwz r0, lbl_8087F968
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000010FC
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E60C
    la r6, lbl_8087E608
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000010F8
    lis r4, lbl_807955B8@ha
    addi r4, r4, lbl_807955B8@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000010F8:
    stw r3, lbl_8087F968
lbl_fn_8054E578_000010FC:
    lwz r0, lbl_8087F964
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001138
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E604
    la r6, lbl_8087E600
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001134
    lis r4, lbl_80795580@ha
    addi r4, r4, lbl_80795580@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001134:
    stw r3, lbl_8087F964
lbl_fn_8054E578_00001138:
    lwz r0, lbl_8087F938
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001174
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5FC
    la r6, lbl_8087E5F8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001170
    lis r4, lbl_80795318@ha
    addi r4, r4, lbl_80795318@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001170:
    stw r3, lbl_8087F938
lbl_fn_8054E578_00001174:
    lwz r0, lbl_8087F934
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000011B0
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5F4
    la r6, lbl_8087E5F0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000011AC
    lis r4, lbl_807952E0@ha
    addi r4, r4, lbl_807952E0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000011AC:
    stw r3, lbl_8087F934
lbl_fn_8054E578_000011B0:
    lwz r0, lbl_8087F930
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000011EC
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5EC
    la r6, lbl_8087E5E8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000011E8
    lis r4, lbl_807952A8@ha
    addi r4, r4, lbl_807952A8@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000011E8:
    stw r3, lbl_8087F930
lbl_fn_8054E578_000011EC:
    lwz r0, lbl_8087F92C
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001228
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5E4
    la r6, lbl_8087E5E0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001224
    lis r4, lbl_80795270@ha
    addi r4, r4, lbl_80795270@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001224:
    stw r3, lbl_8087F92C
lbl_fn_8054E578_00001228:
    lwz r0, lbl_8087F928
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001264
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5DC
    la r6, lbl_8087E5D8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001260
    lis r4, lbl_80795238@ha
    addi r4, r4, lbl_80795238@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001260:
    stw r3, lbl_8087F928
lbl_fn_8054E578_00001264:
    lwz r0, lbl_8087F924
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000012A0
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5D4
    la r6, lbl_8087E5D0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_0000129C
    lis r4, lbl_80795200@ha
    addi r4, r4, lbl_80795200@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_0000129C:
    stw r3, lbl_8087F924
lbl_fn_8054E578_000012A0:
    lwz r0, lbl_8087F920
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000012DC
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5CC
    la r6, lbl_8087E5C8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000012D8
    lis r4, lbl_807951C8@ha
    addi r4, r4, lbl_807951C8@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000012D8:
    stw r3, lbl_8087F920
lbl_fn_8054E578_000012DC:
    lwz r0, lbl_8087F91C
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001318
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5C4
    la r6, lbl_8087E5C0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001314
    lis r4, lbl_80795190@ha
    addi r4, r4, lbl_80795190@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001314:
    stw r3, lbl_8087F91C
lbl_fn_8054E578_00001318:
    lwz r0, lbl_8087F918
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001354
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5BC
    la r6, lbl_8087E5B8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001350
    lis r4, lbl_80795158@ha
    addi r4, r4, lbl_80795158@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001350:
    stw r3, lbl_8087F918
lbl_fn_8054E578_00001354:
    lwz r0, lbl_8087F914
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001390
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5B4
    la r6, lbl_8087E5B0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_0000138C
    lis r4, lbl_80795120@ha
    addi r4, r4, lbl_80795120@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_0000138C:
    stw r3, lbl_8087F914
lbl_fn_8054E578_00001390:
    lwz r0, lbl_8087F90C
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000013CC
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5AC
    la r6, lbl_8087E5A8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000013C8
    lis r4, lbl_807950B0@ha
    addi r4, r4, lbl_807950B0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000013C8:
    stw r3, lbl_8087F90C
lbl_fn_8054E578_000013CC:
    lwz r0, lbl_8087F910
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001408
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E5A4
    la r6, lbl_8087E5A0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001404
    lis r4, lbl_807950E8@ha
    addi r4, r4, lbl_807950E8@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001404:
    stw r3, lbl_8087F910
lbl_fn_8054E578_00001408:
    lwz r0, lbl_8087F908
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001444
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E59C
    la r6, lbl_8087E598
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001440
    lis r4, lbl_80795078@ha
    addi r4, r4, lbl_80795078@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001440:
    stw r3, lbl_8087F908
lbl_fn_8054E578_00001444:
    lwz r0, lbl_8087F904
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001480
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E594
    la r6, lbl_8087E590
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_0000147C
    lis r4, lbl_80795040@ha
    addi r4, r4, lbl_80795040@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_0000147C:
    stw r3, lbl_8087F904
lbl_fn_8054E578_00001480:
    lwz r0, lbl_8087F8F4
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000014BC
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E58C
    la r6, lbl_8087E588
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000014B8
    lis r4, lbl_80794F18@ha
    addi r4, r4, lbl_80794F18@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000014B8:
    stw r3, lbl_8087F8F4
lbl_fn_8054E578_000014BC:
    lwz r0, lbl_8087F8F0
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000014F8
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E584
    la r6, lbl_8087E580
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000014F4
    lis r4, lbl_80794EE0@ha
    addi r4, r4, lbl_80794EE0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000014F4:
    stw r3, lbl_8087F8F0
lbl_fn_8054E578_000014F8:
    lwz r0, lbl_8087F8EC
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001534
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E57C
    la r6, lbl_8087E578
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001530
    lis r4, lbl_80794EA8@ha
    addi r4, r4, lbl_80794EA8@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001530:
    stw r3, lbl_8087F8EC
lbl_fn_8054E578_00001534:
    lwz r0, lbl_8087F8E8
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001570
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E574
    la r6, lbl_8087E570
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_0000156C
    lis r4, lbl_80794E70@ha
    addi r4, r4, lbl_80794E70@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_0000156C:
    stw r3, lbl_8087F8E8
lbl_fn_8054E578_00001570:
    lwz r0, lbl_8087F8E4
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000015AC
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E56C
    la r6, lbl_8087E568
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000015A8
    lis r4, lbl_80794E38@ha
    addi r4, r4, lbl_80794E38@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000015A8:
    stw r3, lbl_8087F8E4
lbl_fn_8054E578_000015AC:
    lwz r0, lbl_8087F8E0
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000015E8
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E564
    la r6, lbl_8087E560
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000015E4
    lis r4, lbl_80794E00@ha
    addi r4, r4, lbl_80794E00@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000015E4:
    stw r3, lbl_8087F8E0
lbl_fn_8054E578_000015E8:
    lwz r0, lbl_8087F8DC
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001624
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E55C
    la r6, lbl_8087E558
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001620
    lis r4, lbl_80794DC8@ha
    addi r4, r4, lbl_80794DC8@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001620:
    stw r3, lbl_8087F8DC
lbl_fn_8054E578_00001624:
    lwz r0, lbl_8087F8D8
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001660
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E554
    la r6, lbl_8087E550
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_0000165C
    lis r4, lbl_80794AE0@ha
    addi r4, r4, lbl_80794AE0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_0000165C:
    stw r3, lbl_8087F8D8
lbl_fn_8054E578_00001660:
    lwz r0, lbl_8087F8D4
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_0000169C
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E54C
    la r6, lbl_8087E548
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001698
    lis r4, lbl_80794D40@ha
    addi r4, r4, lbl_80794D40@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001698:
    stw r3, lbl_8087F8D4
lbl_fn_8054E578_0000169C:
    lwz r0, lbl_8087F8D0
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000016D8
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E544
    la r6, lbl_8087E540
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000016D4
    lis r4, lbl_80794D08@ha
    addi r4, r4, lbl_80794D08@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000016D4:
    stw r3, lbl_8087F8D0
lbl_fn_8054E578_000016D8:
    lwz r0, lbl_8087F8CC
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001714
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E53C
    la r6, lbl_8087E538
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001710
    lis r4, lbl_80794CD0@ha
    addi r4, r4, lbl_80794CD0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001710:
    stw r3, lbl_8087F8CC
lbl_fn_8054E578_00001714:
    lwz r0, lbl_8087F8C8
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001750
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E534
    la r6, lbl_8087E530
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_0000174C
    lis r4, lbl_80794C98@ha
    addi r4, r4, lbl_80794C98@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_0000174C:
    stw r3, lbl_8087F8C8
lbl_fn_8054E578_00001750:
    lwz r0, lbl_8087F8C4
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_0000178C
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E52C
    la r6, lbl_8087E528
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001788
    lis r4, lbl_80794C60@ha
    addi r4, r4, lbl_80794C60@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001788:
    stw r3, lbl_8087F8C4
lbl_fn_8054E578_0000178C:
    lwz r0, lbl_8087F8C0
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000017C8
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E524
    la r6, lbl_8087E520
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000017C4
    lis r4, lbl_80794C28@ha
    addi r4, r4, lbl_80794C28@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000017C4:
    stw r3, lbl_8087F8C0
lbl_fn_8054E578_000017C8:
    lwz r0, lbl_8087F8BC
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001804
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E51C
    la r6, lbl_8087E518
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001800
    lis r4, lbl_80794BF0@ha
    addi r4, r4, lbl_80794BF0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001800:
    stw r3, lbl_8087F8BC
lbl_fn_8054E578_00001804:
    lwz r0, lbl_8087F8B8
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001840
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E514
    la r6, lbl_8087E510
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_0000183C
    lis r4, lbl_80794BB8@ha
    addi r4, r4, lbl_80794BB8@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_0000183C:
    stw r3, lbl_8087F8B8
lbl_fn_8054E578_00001840:
    lwz r0, lbl_8087F8B4
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_0000187C
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E50C
    la r6, lbl_8087E508
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001878
    lis r4, lbl_80794B80@ha
    addi r4, r4, lbl_80794B80@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001878:
    stw r3, lbl_8087F8B4
lbl_fn_8054E578_0000187C:
    lwz r0, lbl_8087F8B0
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000018B8
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E504
    la r6, lbl_8087E500
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000018B4
    lis r4, lbl_80794B48@ha
    addi r4, r4, lbl_80794B48@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000018B4:
    stw r3, lbl_8087F8B0
lbl_fn_8054E578_000018B8:
    lwz r0, lbl_8087F900
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_000018F4
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E4FC
    la r6, lbl_8087E4F8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_000018F0
    lis r4, lbl_80795008@ha
    addi r4, r4, lbl_80795008@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_000018F0:
    stw r3, lbl_8087F900
lbl_fn_8054E578_000018F4:
    lwz r0, lbl_8087F8FC
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_00001930
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E4F4
    la r6, lbl_8087E4F0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_0000192C
    lis r4, lbl_80794FD0@ha
    addi r4, r4, lbl_80794FD0@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_0000192C:
    stw r3, lbl_8087F8FC
lbl_fn_8054E578_00001930:
    lwz r0, lbl_8087F8F8
    cmpwi r0, 0x0
    bne lbl_fn_8054E578_0000196C
    li r3, 0x4
    li r4, 0x1
    la r5, lbl_8087E4EC
    la r6, lbl_8087E4E8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054E578_00001968
    lis r4, lbl_80794F98@ha
    addi r4, r4, lbl_80794F98@l
    stw r4, 0x0(r3)
lbl_fn_8054E578_00001968:
    stw r3, lbl_8087F8F8
lbl_fn_8054E578_0000196C:
    lis r3, lbl_807C9140@ha
    li r0, 0x0
    stwu r0, lbl_807C9140@l(r3)
    lwz r24, lbl_8087F970
    stw r0, 0x4(r3)
    lwz r23, lbl_8087F96C
    stw r0, 0x8(r3)
    lwz r22, lbl_8087F960
    stw r0, 0xc(r3)
    lwz r21, lbl_8087F95C
    stw r0, 0x10(r3)
    lwz r20, lbl_8087F958
    stw r0, 0x14(r3)
    lwz r19, lbl_8087F954
    stw r0, 0x18(r3)
    lwz r18, lbl_8087F950
    stw r0, 0x1c(r3)
    lwz r17, lbl_8087F94C
    stw r0, 0x20(r3)
    lwz r16, lbl_8087F948
    stw r0, 0x24(r3)
    lwz r15, lbl_8087F944
    stw r0, 0x28(r3)
    lwz r14, lbl_8087F940
    stw r0, 0x2c(r3)
    lwz r12, lbl_8087F93C
    stw r0, 0x30(r3)
    lwz r11, lbl_8087F968
    stw r0, 0x34(r3)
    lwz r10, lbl_8087F964
    stw r0, 0x38(r3)
    lwz r9, lbl_8087F938
    stw r0, 0x3c(r3)
    lwz r8, lbl_8087F934
    stw r0, 0x40(r3)
    lwz r7, lbl_8087F930
    stw r0, 0x44(r3)
    lwz r6, lbl_8087F92C
    stw r0, 0x48(r3)
    lwz r5, lbl_8087F928
    stw r0, 0x4c(r3)
    lwz r4, lbl_8087F924
    stw r0, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x58(r3)
    stw r0, 0x5c(r3)
    stw r0, 0x60(r3)
    stw r0, 0x64(r3)
    stw r0, 0x68(r3)
    stw r0, 0x6c(r3)
    stw r0, 0x70(r3)
    stw r0, 0x74(r3)
    stw r0, 0x78(r3)
    stw r0, 0x7c(r3)
    stw r0, 0x80(r3)
    stw r0, 0x84(r3)
    stw r0, 0x88(r3)
    stw r0, 0x8c(r3)
    stw r0, 0x90(r3)
    stw r0, 0x94(r3)
    stw r0, 0x98(r3)
    stw r0, 0x9c(r3)
    stw r0, 0xa0(r3)
    stw r0, 0xa4(r3)
    stw r0, 0xa8(r3)
    stw r0, 0xac(r3)
    stw r0, 0xb0(r3)
    stw r0, 0xb4(r3)
    stw r0, 0xb8(r3)
    stw r0, 0xbc(r3)
    stw r0, 0xc0(r3)
    stw r0, 0xc4(r3)
    stw r0, 0xc8(r3)
    stw r0, 0xcc(r3)
    stw r0, 0xd0(r3)
    stw r0, 0xd4(r3)
    stw r0, 0xd8(r3)
    lwz r0, lbl_8087F920
    stw r24, 0x1c(r3)
    stw r23, 0x3c(r3)
    stw r22, 0x28(r3)
    stw r21, 0x2c(r3)
    stw r20, 0x30(r3)
    stw r19, 0x4(r3)
    stw r18, 0x8(r3)
    stw r17, 0x10(r3)
    stw r16, 0xc(r3)
    stw r15, 0x14(r3)
    stw r14, 0xac(r3)
    stw r12, 0x18(r3)
    stw r11, 0x20(r3)
    stw r10, 0x24(r3)
    stw r9, 0xc0(r3)
    stw r8, 0x40(r3)
    stw r7, 0x48(r3)
    stw r6, 0x44(r3)
    stw r5, 0xbc(r3)
    stw r4, 0xc4(r3)
    stw r0, 0xc8(r3)
    lwz r15, lbl_8087F91C
    lwz r16, lbl_8087F918
    lwz r17, lbl_8087F914
    lwz r18, lbl_8087F90C
    lwz r19, lbl_8087F910
    lwz r20, lbl_8087F908
    lwz r21, lbl_8087F904
    lwz r22, lbl_8087F8F4
    lwz r23, lbl_8087F8F0
    lwz r24, lbl_8087F8EC
    lwz r25, lbl_8087F8E8
    lwz r26, lbl_8087F8E4
    lwz r27, lbl_8087F8E0
    lwz r28, lbl_8087F8DC
    lwz r29, lbl_8087F8D8
    lwz r30, lbl_8087F8D4
    lwz r31, lbl_8087F8D0
    lwz r12, lbl_8087F8CC
    lwz r11, lbl_8087F8C8
    lwz r10, lbl_8087F8C4
    lwz r9, lbl_8087F8C0
    lwz r8, lbl_8087F8BC
    lwz r7, lbl_8087F8B8
    lwz r6, lbl_8087F8B4
    lwz r5, lbl_8087F8B0
    lwz r4, lbl_8087F900
    lwz r0, lbl_8087F8FC
    lwz r14, lbl_8087F8F8
    stw r15, 0xcc(r3)
    stw r16, 0x4c(r3)
    stw r17, 0xd0(r3)
    stw r18, 0x50(r3)
    stw r19, 0x74(r3)
    stw r20, 0xb8(r3)
    stw r21, 0x54(r3)
    stw r22, 0x58(r3)
    stw r23, 0x68(r3)
    stw r24, 0x64(r3)
    stw r25, 0x6c(r3)
    stw r26, 0x60(r3)
    stw r27, 0x70(r3)
    stw r28, 0x78(r3)
    stw r29, 0x7c(r3)
    stw r30, 0x94(r3)
    stw r31, 0x84(r3)
    stw r12, 0x80(r3)
    stw r11, 0xb0(r3)
    stw r10, 0x88(r3)
    stw r9, 0x8c(r3)
    stw r8, 0xb4(r3)
    stw r7, 0x98(r3)
    stw r6, 0x9c(r3)
    stw r5, 0xd8(r3)
    stw r4, 0xa4(r3)
    stw r0, 0xa8(r3)
    stw r14, 0xd4(r3)
    lmw r14, 0x8(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
