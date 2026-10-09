#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80013D60(void);
extern void fn_80018078(void);
extern void fn_80018BAC(void);
extern void fn_80018C80(void);
extern void fn_800197A4(void);
extern void fn_8001E0A8(void);
extern void fn_8001E0B8(void);
extern void fn_8001E168(void);
extern void fn_8001E1D0(void);
extern void fn_8001E340(void);
extern void fn_8001E350(void);
extern void fn_8001E360(void);
extern void fn_8001E370(void);
extern void fn_8001E380(void);
extern void fn_8001E390(void);
extern void fn_8001E3A0(void);
extern void fn_8001E3B0(void);
extern void fn_8001E3C0(void);
extern void fn_8001E3D0(void);
extern void fn_8001E3E0(void);
extern void fn_8001E3F0(void);
extern void fn_8001E400(void);
extern void fn_8001E410(void);
extern void fn_8001E420(void);
extern void fn_8001E430(void);
extern void fn_8001E440(void);
extern void fn_8001E450(void);
extern void fn_8001E460(void);
extern void fn_8001E470(void);
extern void fn_8001E480(void);
extern void fn_8001E490(void);
extern void fn_8001E4A0(void);
extern void fn_8001E4B0(void);
extern void fn_8001E4C0(void);
extern void fn_8001E4D0(void);
extern void fn_8001E4E0(void);
extern void fn_8001E4F0(void);
extern void fn_8001E500(void);
extern void fn_8001E510(void);
extern void fn_8001E520(void);
extern void fn_8001E530(void);
extern void fn_8001E540(void);
extern void fn_8001E550(void);
extern void fn_8001E560(void);
extern void fn_8001E570(void);
extern void fn_8001E580(void);
extern void fn_8001E590(void);
extern void fn_8001E5A0(void);
extern void fn_8001E5B0(void);
extern void fn_8001E5C0(void);
extern void fn_8001E5D0(void);
extern void fn_8001E5E0(void);
extern void fn_8001E5F0(void);
extern void fn_8001E600(void);
extern void fn_8001E610(void);
extern void fn_8001E620(void);
extern void fn_8001E630(void);
extern void fn_8001E640(void);
extern void fn_8001E650(void);
extern void fn_8001E660(void);
extern void fn_8001E670(void);
extern void fn_8001E680(void);
extern void fn_8001E690(void);
extern void fn_8001E6A0(void);
extern void fn_8001E6B0(void);
extern void fn_8001E6C0(void);
extern void fn_8001E6D0(void);
extern void fn_8001E6E0(void);
extern void fn_8001E6F0(void);
extern void fn_8001E700(void);
extern void fn_8001E710(void);
extern void fn_8001E720(void);
extern void fn_8001E730(void);
extern void fn_8001EA18(void);
extern void fn_8001ECD0(void);
extern void fn_8003E4A4(void);
extern void fn_8003F440(void);
extern void fn_80084320(void);
extern void fn_80092814(void);
extern void fn_80161570(void);
extern void fn_80161880(void);
extern void fn_80176428(void);
extern void fn_802180A8(void);
extern void fn_80219E6C(void);
extern void fn_8021A984(void);
extern void fn_80370174(void);
extern void fn_803C1560(void);
extern void fn_80599C94(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_8068236C(void);

/* External data declarations */
extern u8 lbl_8072FF50[];
extern u8 lbl_8072FF58[];
extern u8 lbl_807307A0[];
extern u8 lbl_807C68C0[];
extern u8 lbl_807C6A40[];
extern u8 lbl_807C6B30[];
extern u8 lbl_807C6B84[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE60;
extern u32 lbl_8087EE68;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80880760;
extern u32 lbl_80880764;
extern u32 lbl_80880768;
extern u32 lbl_8088076C;
extern u32 lbl_80880778;
extern u32 lbl_8088077C;
extern u32 lbl_80880780;
extern u32 lbl_80880784;
extern u32 lbl_80880788;
extern u32 lbl_8088078C;
extern u32 lbl_80880790;
extern u32 lbl_80880794;

/* Function declarations */
void fn_8001B4A4(void);
void fn_8001B4CC(void);
void fn_8001B508(void);
void fn_8001B5B4(void);
void fn_8001B5DC(void);
void fn_8001B634(void);
void fn_8001B714(void);
void fn_8001B984(void);
void fn_8001BA88(void);
void fn_8001BAA4(void);
void fn_8001BADC(void);
void fn_8001BB04(void);
void fn_8001BC38(void);
void fn_8001BC80(void);
void fn_8001BCB4(void);
void fn_8001BD14(void);
void fn_8001BE00(void);
void fn_8001BE90(void);
void fn_8001BEB0(void);
void fn_8001BEE0(void);
void fn_8001BF44(void);
void fn_8001BF4C(void);
void fn_8001BF58(void);
void fn_8001BF64(void);
void fn_8001C01C(void);
void fn_8001C038(void);
void fn_8001C068(void);
void fn_8001C088(void);
void fn_8001C1B4(void);
void fn_8001C1B8(void);
void fn_8001C1BC(void);
void fn_8001C1C0(void);
void fn_8001C260(void);
void fn_8001C26C(void);
void fn_8001C278(void);
void fn_8001C284(void);

asm void fn_8001B4A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lfs f0, lbl_80880760
    lwz r3, lbl_8087EE60
    lfs f1, 0x568(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r3, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_8001B4CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8072FF50@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_8072FF50@l(r4)
    stw r0, 0x8(r1)
    lfs f0, lbl_80880760
    lfd f1, 0x8(r1)
    lwz r3, lbl_8087EE60
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    stfs f0, 0x568(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_8001B508(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8001B508_000000D8
    addi r31, r4, 0xb0
    lis r4, lbl_8072FF58@ha
    mr r3, r31
    li r5, 0x0
    addi r4, r4, lbl_8072FF58@l
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8001B508_000000AC
    li r31, 0x0
    b lbl_fn_8001B508_000000B8
lbl_fn_8001B508_000000AC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r31, r3, r0
lbl_fn_8001B508_000000B8:
    mr r3, r30
    bl fn_802180A8
    mr r4, r3
    lwz r3, lbl_8087EE60
    mr r5, r31
    li r6, 0x0
    bl fn_80161880
    b lbl_fn_8001B508_000000F8
lbl_fn_8001B508_000000D8:
    bl fn_802180A8
    lfs f1, lbl_8088076C
    mr r4, r3
    lwz r3, lbl_8087EE60
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
lbl_fn_8001B508_000000F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001B5B4(void)
{
    nofralloc
    lwz r5, lbl_8087F430
    mr r0, r3
    mr r6, r4
    lfs f1, lbl_8088076C
    lwz r3, 0x10d8(r5)
    mr r4, r0
    li r5, 0x0
    li r7, 0x0
    li r8, 0x1
    b fn_803C1560
}

asm void fn_8001B5DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_807C7030@ha
    lfs f0, lbl_80880764
    stw r0, 0x24(r1)
    mr r6, r3
    li r0, 0x0
    lfs f1, lbl_80880778
    stfs f0, 0xc(r1)
    addi r4, r1, 0xc
    lwz r3, lbl_8087EE68
    addi r5, r1, 0x8
    stfs f0, 0x10(r1)
    addi r7, r7, lbl_807C7030@l
    li r8, 0x0
    stfs f0, 0x14(r1)
    stw r0, 0x8(r1)
    bl fn_800197A4
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001B634(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f0, lbl_80880764
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stw r0, 0x8(r1)
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8001B634_000001D0
    addi r5, r4, 0x528
    b lbl_fn_8001B634_000001D4
lbl_fn_8001B634_000001D0:
    addi r5, r3, 0x528
lbl_fn_8001B634_000001D4:
    addi r4, r1, 0x18
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r5)
    lfs f0, 0x530(r3)
    lfs f5, 0x1c(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0xc
    lfs f3, 0x18(r1)
    fsubs f4, f5, f4
    stfs f2, 0x20(r1)
    fsubs f0, f3, f0
    stfs f4, 0x10(r1)
    stfs f0, 0xc(r1)
    stfs f6, 0x14(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80880768
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8001B634_0000023C
    addi r3, r1, 0xc
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8001B634_0000023C:
    lwz r3, lbl_8087EE68
    mr r6, r31
    lfs f1, lbl_8088077C
    addi r4, r1, 0x24
    addi r5, r1, 0x8
    addi r7, r1, 0xc
    li r8, 0x0
    bl fn_800197A4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8001B714(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lfs f0, lbl_80880764
    stw r0, 0xc4(r1)
    li r0, 0x0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    mr r30, r3
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f0, 0x98(r1)
    stw r0, 0x8(r1)
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8001B714_000002BC
    addi r5, r4, 0x528
    b lbl_fn_8001B714_000002C0
lbl_fn_8001B714_000002BC:
    addi r5, r3, 0x528
lbl_fn_8001B714_000002C0:
    addi r4, r1, 0x84
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r5)
    lfs f0, 0x530(r3)
    lfs f5, 0x88(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x78
    lfs f3, 0x84(r1)
    fsubs f4, f5, f4
    stfs f2, 0x8c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x7c(r1)
    stfs f0, 0x78(r1)
    stfs f6, 0x80(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80880768
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8001B714_00000328
    addi r3, r1, 0x78
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8001B714_00000328:
    lfs f3, lbl_80880764
    addi r3, r1, 0x54
    lfs f0, lbl_80880780
    addi r4, r1, 0x78
    stfs f3, 0x54(r1)
    addi r5, r1, 0x6c
    stfs f0, 0x58(r1)
    stfs f3, 0x5c(r1)
    bl fn_805F99B0
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r3, r0, r4
    addi r31, r1, 0x60
    subf r3, r4, r3
    lis r0, 0x4330
    xoris r3, r3, 0x8000
    stw r3, 0xa4(r1)
    lis r4, lbl_8072FF50@ha
    lfs f5, lbl_80880784
    stw r0, 0xa0(r1)
    addi r9, r1, 0x48
    lfd f6, lbl_8072FF50@l(r4)
    mr r6, r30
    lfd f4, 0xa0(r1)
    mr r7, r31
    lfs f0, 0x74(r1)
    addi r4, r1, 0x90
    fsubs f6, f4, f6
    lfs f3, 0x70(r1)
    fmuls f7, f0, f5
    lfs f4, lbl_80880780
    fmuls f8, f3, f5
    lfs f0, 0x6c(r1)
    fmsubs f31, f5, f6, f4
    lfs f3, 0x7c(r1)
    fmuls f5, f0, f5
    lfs f0, 0x78(r1)
    lfs f4, 0x80(r1)
    addi r5, r1, 0x8
    fmuls f9, f8, f31
    stfs f5, 0x30(r1)
    fmuls f10, f5, f31
    lwz r3, lbl_8087EE68
    fmuls f6, f7, f31
    stfs f8, 0x34(r1)
    fadds f3, f9, f3
    stfs f7, 0x38(r1)
    fadds f2, f6, f4
    li r8, 0x0
    fadds f0, f10, f0
    stfs f3, 0x4c(r1)
    stfs f0, 0x48(r1)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, lbl_8088077C
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f6, 0x44(r1)
    stfs f2, 0x50(r1)
    stfs f2, 0x68(r1)
    bl fn_800197A4
    cmpwi r3, 0x0
    bne lbl_fn_8001B714_000004C0
    lfs f5, lbl_80880784
    fneg f0, f31
    lfs f3, 0x70(r1)
    addi r9, r1, 0x24
    lfs f4, 0x74(r1)
    mr r6, r30
    fmuls f7, f3, f5
    fmuls f6, f4, f5
    lfs f3, 0x6c(r1)
    lfs f4, 0x80(r1)
    mr r7, r31
    fmuls f5, f3, f5
    fmuls f9, f7, f0
    fmuls f8, f6, f0
    lfs f3, 0x7c(r1)
    fmuls f10, f5, f0
    lfs f0, 0x78(r1)
    fadds f3, f9, f3
    fadds f2, f8, f4
    fadds f0, f10, f0
    stfs f3, 0x28(r1)
    lwz r3, lbl_8087EE68
    addi r4, r1, 0x90
    stfs f0, 0x24(r1)
    addi r5, r1, 0x8
    psq_l f1, 0x0(r9), 0, 0
    li r8, 0x0
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, lbl_8088077C
    stfs f5, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f6, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f9, 0x1c(r1)
    stfs f8, 0x20(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x68(r1)
    bl fn_800197A4
lbl_fn_8001B714_000004C0:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8001B984(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_80880764
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stw r0, 0x8(r1)
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8001B984_00000520
    addi r5, r4, 0x528
    b lbl_fn_8001B984_00000524
lbl_fn_8001B984_00000520:
    addi r5, r3, 0x528
lbl_fn_8001B984_00000524:
    addi r4, r1, 0x24
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r5)
    lfs f0, 0x530(r3)
    lfs f5, 0x28(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x18
    lfs f3, 0x24(r1)
    fsubs f4, f5, f4
    stfs f2, 0x2c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f6, 0x20(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80880768
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8001B984_0000058C
    addi r3, r1, 0x18
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8001B984_0000058C:
    lfs f4, 0x20(r1)
    mr r6, r31
    lfs f3, 0x1c(r1)
    addi r4, r1, 0x30
    lfs f0, 0x18(r1)
    fneg f4, f4
    fneg f3, f3
    lwz r3, lbl_8087EE68
    fneg f0, f0
    stfs f4, 0x14(r1)
    lfs f1, lbl_80880788
    stfs f0, 0xc(r1)
    addi r5, r1, 0x8
    addi r7, r1, 0xc
    stfs f3, 0x10(r1)
    li r8, 0x0
    bl fn_800197A4
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8001BA88(void)
{
    nofralloc
    lfs f0, lbl_80880764
    mr r4, r3
    fcmpo cr0, f1, f0
    bge lbl_fn_8001BA88_000005F8
    lfs f1, lbl_8088078C
lbl_fn_8001BA88_000005F8:
    lwz r3, lbl_8087EE68
    b fn_80018C80
}

asm void fn_8001BAA4(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_8001BAA4_00000630
    cmpwi r4, 0x0
    blt lbl_fn_8001BAA4_00000630
    li r5, 0x1
    lwz r0, 0xd30(r3)
    slw r3, r5, r4
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_8001BAA4_00000630:
    mr r3, r0
    blr
}

asm void fn_8001BADC(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    bltlr
    li r0, 0x1
    lwz r5, 0xd30(r3)
    slw r0, r0, r4
    or r0, r5, r0
    stw r0, 0xd30(r3)
    blr
}

asm void fn_8001BB04(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    li r30, 0x1
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    beq lbl_fn_8001BB04_00000760
    cmpwi r5, 0x0
    beq lbl_fn_8001BB04_00000760
    cmpwi r4, 0x4
    bge lbl_fn_8001BB04_00000760
    lfs f1, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f3, 0x52c(r5)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x528(r5)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    slwi r0, r29, 3
    fmr f30, f1
    add r3, r28, r0
    lfs f31, lbl_80880790
    addi r31, r3, 0xaa4
    li r29, 0x0
lbl_fn_8001BB04_00000700:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8001BB04_00000750
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8001BB04_00000750
    lbz r0, 0x1(r3)
    extsb. r0, r0
    bne lbl_fn_8001BB04_00000734
    lfs f1, 0x40(r3)
    lfs f0, 0x8e4(r28)
    fadds f0, f1, f0
    b lbl_fn_8001BB04_00000738
lbl_fn_8001BB04_00000734:
    lfs f0, 0x44(r3)
lbl_fn_8001BB04_00000738:
    fmuls f0, f31, f0
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_8001BB04_00000750
    li r30, 0x0
    b lbl_fn_8001BB04_00000760
lbl_fn_8001BB04_00000750:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x2
    blt lbl_fn_8001BB04_00000700
lbl_fn_8001BB04_00000760:
    psq_l f31, 0x48(r1), 0, 0
    mr r3, r30
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8001BC38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    beq lbl_fn_8001BC38_000007C8
    cmpwi r4, 0x4
    bge lbl_fn_8001BC38_000007C8
    slwi r0, r4, 3
    add r4, r3, r0
    addi r4, r4, 0xaa4
    bl fn_8003F440
    mr r0, r3
lbl_fn_8001BC38_000007C8:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001BC80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    beq lbl_fn_8001BC80_000007FC
    bl fn_80176428
    mr r0, r3
lbl_fn_8001BC80_000007FC:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001BCB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    beq lbl_fn_8001BCB4_00000858
    cmpwi r4, 0x4
    bge lbl_fn_8001BCB4_00000858
    slwi r0, r4, 3
    add r3, r3, r0
    lwz r3, 0xaa4(r3)
    cmpwi r3, 0x0
    ble lbl_fn_8001BCB4_00000858
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8001BCB4_00000858
    li r31, 0x1
lbl_fn_8001BCB4_00000858:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001BD14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    lfs f31, lbl_80880764
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8001BD14_0000093C
    lwz r4, 0x648(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8001BD14_0000093C
    lwz r5, 0x64(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8001BD14_0000093C
    lwz r4, 0x274(r4)
    lwz r0, 0x78(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8001BD14_000008D4
    cmpwi r0, 0x1
    beq lbl_fn_8001BD14_000008DC
    cmpwi r0, 0x2
    beq lbl_fn_8001BD14_000008E4
    b lbl_fn_8001BD14_000008E8
lbl_fn_8001BD14_000008D4:
    lfs f31, 0x30(r5)
    b lbl_fn_8001BD14_000008E8
lbl_fn_8001BD14_000008DC:
    lfs f31, 0x34(r5)
    b lbl_fn_8001BD14_000008E8
lbl_fn_8001BD14_000008E4:
    lfs f31, 0x38(r5)
lbl_fn_8001BD14_000008E8:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8001BD14_0000093C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8001BD14_0000093C
    li r4, 0xa
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8001BD14_0000093C
    lwz r3, 0x5c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8001BD14_0000093C
    lbz r0, 0x122(r3)
    extsb r0, r0
    cmpwi r0, 0x4
    beq lbl_fn_8001BD14_00000934
    cmpwi r0, 0x2
    bne lbl_fn_8001BD14_0000093C
lbl_fn_8001BD14_00000934:
    lfs f0, lbl_80880794
    fmuls f31, f31, f0
lbl_fn_8001BD14_0000093C:
    fmr f1, f31
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001BE00(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r7, 0x0
    beq lbl_fn_8001BE00_000009E4
    lwz r6, 0x38(r3)
    li r7, 0x0
    li r4, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8001BE00_00000994
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8001BE00_00000994
    li r5, 0x1
lbl_fn_8001BE00_00000994:
    cmpwi r5, 0x0
    beq lbl_fn_8001BE00_000009B0
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8001BE00_000009B0
    li r4, 0x1
lbl_fn_8001BE00_000009B0:
    cmpwi r4, 0x0
    beq lbl_fn_8001BE00_000009E4
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8001BE00_000009D8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8001BE00_000009D8
    li r4, 0x1
lbl_fn_8001BE00_000009D8:
    cmpwi r4, 0x0
    bne lbl_fn_8001BE00_000009E4
    li r7, 0x1
lbl_fn_8001BE00_000009E4:
    mr r3, r7
    blr
}

asm void fn_8001BE90(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_8001BE90_00000A04
    lwz r0, 0x38(r3)
    extrwi r0, r0, 1, 29
    xori r0, r0, 0x1
lbl_fn_8001BE90_00000A04:
    mr r3, r0
    blr
}

asm void fn_8001BEB0(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8001BEB0_00000A20
    lwz r0, 0x12a4(r3)
    srwi r4, r0, 31
lbl_fn_8001BEB0_00000A20:
    lwz r3, 0x50(r3)
    subis r0, r3, 0x1
    cmplwi r0, 0x8709
    bne lbl_fn_8001BEB0_00000A34
    li r4, 0x1
lbl_fn_8001BEB0_00000A34:
    mr r3, r4
    blr
}

asm void fn_8001BEE0(void)
{
    nofralloc
    cmpwi r3, 0x0
    stwu r1, -0x20(r1)
    li r4, 0x0
    beq lbl_fn_8001BEE0_00000A94
    lwz r0, 0x940(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8001BEE0_00000A94
    xoris r4, r0, 0x8000
    lis r0, 0x4330
    lis r5, lbl_8072FF50@ha
    stw r4, 0xc(r1)
    lfd f3, lbl_8072FF50@l(r5)
    stw r0, 0x8(r1)
    lfs f1, 0x7d8(r3)
    lfd f2, 0x8(r1)
    lfs f0, lbl_80880760
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
lbl_fn_8001BEE0_00000A94:
    mr r3, r4
    addi r1, r1, 0x20
    blr
}

asm void fn_8001BF44(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8001BF4C(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087EE68
    b fn_80018078
}

asm void fn_8001BF58(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087EE68
    b fn_80018BAC
}

asm void fn_8001BF64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    li r29, 0x0
    li r28, 0x0
    li r30, 0x0
lbl_fn_8001BF64_00000AE0:
    cmplwi r28, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_8001BF64_00000AF4
    li r31, 0x0
    b lbl_fn_8001BF64_00000AFC
lbl_fn_8001BF64_00000AF4:
    add r3, r0, r30
    addi r31, r3, 0x48
lbl_fn_8001BF64_00000AFC:
    cmpwi r31, 0x0
    beq lbl_fn_8001BF64_00000B50
    lwz r3, 0x4(r31)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8001BF64_00000B24
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8001BF64_00000B24
    li r4, 0x1
lbl_fn_8001BF64_00000B24:
    cmpwi r4, 0x0
    beq lbl_fn_8001BF64_00000B50
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_8001BF64_00000B50
    mr r3, r31
    mr r4, r27
    bl fn_80599C94
    cmpwi r3, 0x0
    beq lbl_fn_8001BF64_00000B50
    addi r29, r29, 0x1
lbl_fn_8001BF64_00000B50:
    addi r28, r28, 0x1
    addi r30, r30, 0x140
    cmplwi r28, 0x20
    blt lbl_fn_8001BF64_00000AE0
    mr r3, r29
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001C01C(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_8001C01C_00000B8C
    lhz r0, 0xd38(r3)
    extrwi r0, r0, 1, 19
lbl_fn_8001C01C_00000B8C:
    mr r3, r0
    blr
}

asm void fn_8001C038(void)
{
    nofralloc
    lwz r4, lbl_8087F8A0
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8001C038_00000BAC
    lwz r4, 0x48(r4)
    b lbl_fn_8001C038_00000BB0
lbl_fn_8001C038_00000BAC:
    li r4, 0x0
lbl_fn_8001C038_00000BB0:
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x12a4(r4)
    extrwi r3, r0, 1, 3
    blr
}

asm void fn_8001C068(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    beqlr
    li r5, 0x100
    addi r3, r3, 0xe08
    b fn_8068236C
    blr
}

asm void fn_8001C088(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8001C260
    mr r31, r3
    bl fn_8001C26C
    li r0, 0x0
    stw r0, 0x0(r3)
    li r0, 0x5
    mr r5, r31
    lwz r4, 0x4(r31)
    mr r6, r3
    stw r4, 0x4(r3)
    lwz r4, 0x64(r31)
    stw r4, 0x8(r3)
    lwz r4, 0x68(r31)
    stw r4, 0xc(r3)
    lwz r4, 0x6c(r31)
    stw r4, 0x10(r3)
    mtctr r0
lbl_fn_8001C088_00000C38:
    lwz r0, 0xa4(r5)
    stw r0, 0x14(r6)
    lwz r0, 0xa8(r5)
    stw r0, 0x18(r6)
    lwz r0, 0xac(r5)
    stw r0, 0x1c(r6)
    lwz r0, 0xb0(r5)
    stw r0, 0x20(r6)
    lwz r0, 0xb4(r5)
    addi r5, r5, 0x14
    stw r0, 0x24(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_8001C088_00000C38
    li r0, 0x5
    mr r4, r31
    mr r5, r3
    mtctr r0
lbl_fn_8001C088_00000C7C:
    lwz r0, 0x108(r4)
    stw r0, 0x78(r5)
    lwz r0, 0x10c(r4)
    stw r0, 0x7c(r5)
    lwz r0, 0x110(r4)
    stw r0, 0x80(r5)
    lwz r0, 0x114(r4)
    stw r0, 0x84(r5)
    lwz r0, 0x118(r4)
    addi r4, r4, 0x14
    stw r0, 0x88(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_8001C088_00000C7C
    lwz r0, 0x16c(r31)
    stw r0, 0xdc(r3)
    lwz r0, 0x170(r31)
    stw r0, 0xe0(r3)
    lwz r0, 0x174(r31)
    stw r0, 0xe4(r3)
    lwz r0, 0x178(r31)
    stw r0, 0xe8(r3)
    lwz r0, 0x17c(r31)
    stw r0, 0xec(r3)
    bl fn_8001C278
    lwz r4, lbl_8087F8A0
    li r0, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8001C088_00000CF0
    lwz r0, 0x48(r4)
lbl_fn_8001C088_00000CF0:
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001C1B4(void)
{
    nofralloc
    b fn_8001C284
}

asm void fn_8001C1B8(void)
{
    nofralloc
    b fn_8001E730
}

asm void fn_8001C1BC(void)
{
    nofralloc
    blr
}

asm void fn_8001C1C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8001C088
    mr r3, r29
    bl fn_8001EA18
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8001C1C0_00000DA0
    bl fn_8001C260
    mr r30, r3
    bl fn_8001C26C
    lwz r0, 0x4(r30)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8001C1C0_00000D88
    mr r3, r29
    li r4, 0xe
    bl fn_8001ECD0
    cmpwi r3, 0x0
    blt lbl_fn_8001C1C0_00000D88
    stw r3, 0x4(r30)
    stw r3, 0x4(r31)
lbl_fn_8001C1C0_00000D88:
    lwz r4, 0x4(r30)
    mr r3, r29
    bl fn_8001ECD0
    cmpwi r3, 0x0
    blt lbl_fn_8001C1C0_00000DA0
    stw r3, 0x4(r31)
lbl_fn_8001C1C0_00000DA0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001C260(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    blr
}

asm void fn_8001C26C(void)
{
    nofralloc
    lis r3, lbl_807C6A40@ha
    addi r3, r3, lbl_807C6A40@l
    blr
}

asm void fn_8001C278(void)
{
    nofralloc
    lis r3, lbl_807C6B30@ha
    addi r3, r3, lbl_807C6B30@l
    blr
}

asm void fn_8001C284(void)
{
    nofralloc
    stwu r1, -0xb10(r1)
    mflr r0
    stw r0, 0xb14(r1)
    addi r3, r1, 0xaf8
    stw r31, 0xb0c(r1)
    lis r31, lbl_807307A0@ha
    addi r4, r31, lbl_807307A0@l
    bl fn_8003E4A4
    addi r4, r31, lbl_807307A0@l
    li r3, 0x4
    addi r5, r4, 0x10
    li r7, 0x0
    li r4, 0x3
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00000E28
    bl fn_8001E0A8
lbl_fn_8001C284_00000E28:
    stw r3, 0x104(r1)
    addi r3, r1, 0xae8
    addi r4, r1, 0xaf8
    addi r5, r1, 0x104
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x300
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0xae8
    bl fn_8001E1D0
    addi r3, r1, 0xae8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0xaf8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0xad8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x11
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00000EA0
    bl fn_8001E340
lbl_fn_8001C284_00000EA0:
    stw r3, 0x100(r1)
    addi r3, r1, 0xac8
    addi r4, r1, 0xad8
    addi r5, r1, 0x100
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2f8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0xac8
    bl fn_8001E1D0
    addi r3, r1, 0xac8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0xad8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0xab8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x20
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00000F18
    bl fn_8001E350
lbl_fn_8001C284_00000F18:
    stw r3, 0xfc(r1)
    addi r3, r1, 0xaa8
    addi r4, r1, 0xab8
    addi r5, r1, 0xfc
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2f0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0xaa8
    bl fn_8001E1D0
    addi r3, r1, 0xaa8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0xab8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0xa98
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x2a
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00000F90
    bl fn_8001E360
lbl_fn_8001C284_00000F90:
    stw r3, 0xf8(r1)
    addi r3, r1, 0xa88
    addi r4, r1, 0xa98
    addi r5, r1, 0xf8
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2e8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0xa88
    bl fn_8001E1D0
    addi r3, r1, 0xa88
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0xa98
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0xa78
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x40
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001008
    bl fn_8001E370
lbl_fn_8001C284_00001008:
    stw r3, 0xf4(r1)
    addi r3, r1, 0xa68
    addi r4, r1, 0xa78
    addi r5, r1, 0xf4
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2e0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0xa68
    bl fn_8001E1D0
    addi r3, r1, 0xa68
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0xa78
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0xa58
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x4f
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001080
    bl fn_8001E380
lbl_fn_8001C284_00001080:
    stw r3, 0xf0(r1)
    addi r3, r1, 0xa48
    addi r4, r1, 0xa58
    addi r5, r1, 0xf0
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2d8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0xa48
    bl fn_8001E1D0
    addi r3, r1, 0xa48
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0xa58
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0xa38
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x5e
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000010F8
    bl fn_8001E390
lbl_fn_8001C284_000010F8:
    stw r3, 0xec(r1)
    addi r3, r1, 0xa28
    addi r4, r1, 0xa38
    addi r5, r1, 0xec
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2d0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0xa28
    bl fn_8001E1D0
    addi r3, r1, 0xa28
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0xa38
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0xa18
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x72
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001170
    bl fn_8001E3A0
lbl_fn_8001C284_00001170:
    stw r3, 0xe8(r1)
    addi r3, r1, 0xa08
    addi r4, r1, 0xa18
    addi r5, r1, 0xe8
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2c8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0xa08
    bl fn_8001E1D0
    addi r3, r1, 0xa08
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0xa18
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x9f8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x85
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000011E8
    bl fn_8001E3B0
lbl_fn_8001C284_000011E8:
    stw r3, 0xe4(r1)
    addi r3, r1, 0x9e8
    addi r4, r1, 0x9f8
    addi r5, r1, 0xe4
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2c0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x9e8
    bl fn_8001E1D0
    addi r3, r1, 0x9e8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x9f8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x9d8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x96
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001260
    bl fn_8001E3C0
lbl_fn_8001C284_00001260:
    stw r3, 0xe0(r1)
    addi r3, r1, 0x9c8
    addi r4, r1, 0x9d8
    addi r5, r1, 0xe0
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2b8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x9c8
    bl fn_8001E1D0
    addi r3, r1, 0x9c8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x9d8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x9b8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0xaa
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000012D8
    bl fn_8001E3D0
lbl_fn_8001C284_000012D8:
    stw r3, 0xdc(r1)
    addi r3, r1, 0x9a8
    addi r4, r1, 0x9b8
    addi r5, r1, 0xdc
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2b0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x9a8
    bl fn_8001E1D0
    addi r3, r1, 0x9a8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x9b8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x998
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0xb3
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001350
    bl fn_8001E3E0
lbl_fn_8001C284_00001350:
    stw r3, 0xd8(r1)
    addi r3, r1, 0x988
    addi r4, r1, 0x998
    addi r5, r1, 0xd8
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2a8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x988
    bl fn_8001E1D0
    addi r3, r1, 0x988
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x998
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x978
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0xc5
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000013C8
    bl fn_8001E3F0
lbl_fn_8001C284_000013C8:
    stw r3, 0xd4(r1)
    addi r3, r1, 0x968
    addi r4, r1, 0x978
    addi r5, r1, 0xd4
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x2a0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x968
    bl fn_8001E1D0
    addi r3, r1, 0x968
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x978
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x958
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0xd7
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001440
    bl fn_8001E400
lbl_fn_8001C284_00001440:
    stw r3, 0xd0(r1)
    addi r3, r1, 0x948
    addi r4, r1, 0x958
    addi r5, r1, 0xd0
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x298
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x948
    bl fn_8001E1D0
    addi r3, r1, 0x948
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x958
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x938
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0xed
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000014B8
    bl fn_8001E410
lbl_fn_8001C284_000014B8:
    stw r3, 0xcc(r1)
    addi r3, r1, 0x928
    addi r4, r1, 0x938
    addi r5, r1, 0xcc
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x290
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x928
    bl fn_8001E1D0
    addi r3, r1, 0x928
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x938
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x918
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0xf8
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001530
    bl fn_8001E420
lbl_fn_8001C284_00001530:
    stw r3, 0xc8(r1)
    addi r3, r1, 0x908
    addi r4, r1, 0x918
    addi r5, r1, 0xc8
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x288
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x908
    bl fn_8001E1D0
    addi r3, r1, 0x908
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x918
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x8f8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x103
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000015A8
    bl fn_8001E430
lbl_fn_8001C284_000015A8:
    stw r3, 0xc4(r1)
    addi r3, r1, 0x8e8
    addi r4, r1, 0x8f8
    addi r5, r1, 0xc4
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x280
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x8e8
    bl fn_8001E1D0
    addi r3, r1, 0x8e8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x8f8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x8d8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x10e
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001620
    bl fn_8001E440
lbl_fn_8001C284_00001620:
    stw r3, 0xc0(r1)
    addi r3, r1, 0x8c8
    addi r4, r1, 0x8d8
    addi r5, r1, 0xc0
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x278
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x8c8
    bl fn_8001E1D0
    addi r3, r1, 0x8c8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x8d8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x8b8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x119
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001698
    bl fn_8001E450
lbl_fn_8001C284_00001698:
    stw r3, 0xbc(r1)
    addi r3, r1, 0x8a8
    addi r4, r1, 0x8b8
    addi r5, r1, 0xbc
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x270
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x8a8
    bl fn_8001E1D0
    addi r3, r1, 0x8a8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x8b8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x898
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x124
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001710
    bl fn_8001E460
lbl_fn_8001C284_00001710:
    stw r3, 0xb8(r1)
    addi r3, r1, 0x888
    addi r4, r1, 0x898
    addi r5, r1, 0xb8
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x268
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x888
    bl fn_8001E1D0
    addi r3, r1, 0x888
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x898
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x878
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x12f
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001788
    bl fn_8001E470
lbl_fn_8001C284_00001788:
    stw r3, 0xb4(r1)
    addi r3, r1, 0x868
    addi r4, r1, 0x878
    addi r5, r1, 0xb4
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x260
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x868
    bl fn_8001E1D0
    addi r3, r1, 0x868
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x878
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x858
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x13a
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001800
    bl fn_8001E480
lbl_fn_8001C284_00001800:
    stw r3, 0xb0(r1)
    addi r3, r1, 0x848
    addi r4, r1, 0x858
    addi r5, r1, 0xb0
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x258
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x848
    bl fn_8001E1D0
    addi r3, r1, 0x848
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x858
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x838
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x14b
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001878
    bl fn_8001E490
lbl_fn_8001C284_00001878:
    stw r3, 0xac(r1)
    addi r3, r1, 0x828
    addi r4, r1, 0x838
    addi r5, r1, 0xac
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x250
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x828
    bl fn_8001E1D0
    addi r3, r1, 0x828
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x838
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x818
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x15c
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000018F0
    bl fn_8001E4A0
lbl_fn_8001C284_000018F0:
    stw r3, 0xa8(r1)
    addi r3, r1, 0x808
    addi r4, r1, 0x818
    addi r5, r1, 0xa8
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x248
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x808
    bl fn_8001E1D0
    addi r3, r1, 0x808
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x818
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x7f8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x16d
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001968
    bl fn_8001E4B0
lbl_fn_8001C284_00001968:
    stw r3, 0xa4(r1)
    addi r3, r1, 0x7e8
    addi r4, r1, 0x7f8
    addi r5, r1, 0xa4
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x240
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x7e8
    bl fn_8001E1D0
    addi r3, r1, 0x7e8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x7f8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x7d8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x17d
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000019E0
    bl fn_8001E4C0
lbl_fn_8001C284_000019E0:
    stw r3, 0xa0(r1)
    addi r3, r1, 0x7c8
    addi r4, r1, 0x7d8
    addi r5, r1, 0xa0
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x238
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x7c8
    bl fn_8001E1D0
    addi r3, r1, 0x7c8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x7d8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x7b8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x18d
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001A58
    bl fn_8001E4D0
lbl_fn_8001C284_00001A58:
    stw r3, 0x9c(r1)
    addi r3, r1, 0x7a8
    addi r4, r1, 0x7b8
    addi r5, r1, 0x9c
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x230
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x7a8
    bl fn_8001E1D0
    addi r3, r1, 0x7a8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x7b8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x798
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x198
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001AD0
    bl fn_8001E4E0
lbl_fn_8001C284_00001AD0:
    stw r3, 0x98(r1)
    addi r3, r1, 0x788
    addi r4, r1, 0x798
    addi r5, r1, 0x98
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x228
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x788
    bl fn_8001E1D0
    addi r3, r1, 0x788
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x798
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x778
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x1aa
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001B48
    bl fn_8001E4F0
lbl_fn_8001C284_00001B48:
    stw r3, 0x94(r1)
    addi r3, r1, 0x768
    addi r4, r1, 0x778
    addi r5, r1, 0x94
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x220
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x768
    bl fn_8001E1D0
    addi r3, r1, 0x768
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x778
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x758
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x1ba
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001BC0
    bl fn_8001E500
lbl_fn_8001C284_00001BC0:
    stw r3, 0x90(r1)
    addi r3, r1, 0x748
    addi r4, r1, 0x758
    addi r5, r1, 0x90
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x218
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x748
    bl fn_8001E1D0
    addi r3, r1, 0x748
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x758
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x738
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x1ce
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001C38
    bl fn_8001E510
lbl_fn_8001C284_00001C38:
    stw r3, 0x8c(r1)
    addi r3, r1, 0x728
    addi r4, r1, 0x738
    addi r5, r1, 0x8c
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x210
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x728
    bl fn_8001E1D0
    addi r3, r1, 0x728
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x738
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x718
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x1e4
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001CB0
    bl fn_8001E520
lbl_fn_8001C284_00001CB0:
    stw r3, 0x88(r1)
    addi r3, r1, 0x708
    addi r4, r1, 0x718
    addi r5, r1, 0x88
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x208
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x708
    bl fn_8001E1D0
    addi r3, r1, 0x708
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x718
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x6f8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x1ef
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001D28
    bl fn_8001E530
lbl_fn_8001C284_00001D28:
    stw r3, 0x84(r1)
    addi r3, r1, 0x6e8
    addi r4, r1, 0x6f8
    addi r5, r1, 0x84
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x200
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x6e8
    bl fn_8001E1D0
    addi r3, r1, 0x6e8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x6f8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x6d8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x202
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001DA0
    bl fn_8001E540
lbl_fn_8001C284_00001DA0:
    stw r3, 0x80(r1)
    addi r3, r1, 0x6c8
    addi r4, r1, 0x6d8
    addi r5, r1, 0x80
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1f8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x6c8
    bl fn_8001E1D0
    addi r3, r1, 0x6c8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x6d8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x6b8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x20b
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001E18
    bl fn_8001E550
lbl_fn_8001C284_00001E18:
    stw r3, 0x7c(r1)
    addi r3, r1, 0x6a8
    addi r4, r1, 0x6b8
    addi r5, r1, 0x7c
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1f0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x6a8
    bl fn_8001E1D0
    addi r3, r1, 0x6a8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x6b8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x698
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x21a
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001E90
    bl fn_8001E560
lbl_fn_8001C284_00001E90:
    stw r3, 0x78(r1)
    addi r3, r1, 0x688
    addi r4, r1, 0x698
    addi r5, r1, 0x78
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1e8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x688
    bl fn_8001E1D0
    addi r3, r1, 0x688
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x698
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x678
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x22b
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001F08
    bl fn_8001E570
lbl_fn_8001C284_00001F08:
    stw r3, 0x74(r1)
    addi r3, r1, 0x668
    addi r4, r1, 0x678
    addi r5, r1, 0x74
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1e0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x668
    bl fn_8001E1D0
    addi r3, r1, 0x668
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x678
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x658
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x23a
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001F80
    bl fn_8001E580
lbl_fn_8001C284_00001F80:
    stw r3, 0x70(r1)
    addi r3, r1, 0x648
    addi r4, r1, 0x658
    addi r5, r1, 0x70
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1d8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x648
    bl fn_8001E1D0
    addi r3, r1, 0x648
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x658
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x638
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x24f
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00001FF8
    bl fn_8001E590
lbl_fn_8001C284_00001FF8:
    stw r3, 0x6c(r1)
    addi r3, r1, 0x628
    addi r4, r1, 0x638
    addi r5, r1, 0x6c
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1d0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x628
    bl fn_8001E1D0
    addi r3, r1, 0x628
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x638
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x618
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x25c
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002070
    bl fn_8001E5A0
lbl_fn_8001C284_00002070:
    stw r3, 0x68(r1)
    addi r3, r1, 0x608
    addi r4, r1, 0x618
    addi r5, r1, 0x68
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1c8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x608
    bl fn_8001E1D0
    addi r3, r1, 0x608
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x618
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x5f8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x26a
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000020E8
    bl fn_8001E5B0
lbl_fn_8001C284_000020E8:
    stw r3, 0x64(r1)
    addi r3, r1, 0x5e8
    addi r4, r1, 0x5f8
    addi r5, r1, 0x64
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1c0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x5e8
    bl fn_8001E1D0
    addi r3, r1, 0x5e8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x5f8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x5d8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x27a
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002160
    bl fn_8001E5C0
lbl_fn_8001C284_00002160:
    stw r3, 0x60(r1)
    addi r3, r1, 0x5c8
    addi r4, r1, 0x5d8
    addi r5, r1, 0x60
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1b8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x5c8
    bl fn_8001E1D0
    addi r3, r1, 0x5c8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x5d8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x5b8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x288
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000021D8
    bl fn_8001E5D0
lbl_fn_8001C284_000021D8:
    stw r3, 0x5c(r1)
    addi r3, r1, 0x5a8
    addi r4, r1, 0x5b8
    addi r5, r1, 0x5c
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1b0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x5a8
    bl fn_8001E1D0
    addi r3, r1, 0x5a8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x5b8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x598
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x294
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002250
    bl fn_8001E5E0
lbl_fn_8001C284_00002250:
    stw r3, 0x58(r1)
    addi r3, r1, 0x588
    addi r4, r1, 0x598
    addi r5, r1, 0x58
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1a8
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x588
    bl fn_8001E1D0
    addi r3, r1, 0x588
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x598
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x578
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x2a5
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000022C8
    bl fn_8001E5F0
lbl_fn_8001C284_000022C8:
    stw r3, 0x54(r1)
    addi r3, r1, 0x568
    addi r4, r1, 0x578
    addi r5, r1, 0x54
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x1a0
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x568
    bl fn_8001E1D0
    addi r3, r1, 0x568
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x578
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x558
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x2b6
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002340
    bl fn_8001E600
lbl_fn_8001C284_00002340:
    stw r3, 0x50(r1)
    addi r3, r1, 0x548
    addi r4, r1, 0x558
    addi r5, r1, 0x50
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x198
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x548
    bl fn_8001E1D0
    addi r3, r1, 0x548
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x558
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x538
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x2c7
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000023B8
    bl fn_8001E610
lbl_fn_8001C284_000023B8:
    stw r3, 0x4c(r1)
    addi r3, r1, 0x528
    addi r4, r1, 0x538
    addi r5, r1, 0x4c
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x190
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x528
    bl fn_8001E1D0
    addi r3, r1, 0x528
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x538
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x518
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x2d2
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002430
    bl fn_8001E620
lbl_fn_8001C284_00002430:
    stw r3, 0x48(r1)
    addi r3, r1, 0x508
    addi r4, r1, 0x518
    addi r5, r1, 0x48
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x188
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x508
    bl fn_8001E1D0
    addi r3, r1, 0x508
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x518
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x4f8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x2dd
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000024A8
    bl fn_8001E630
lbl_fn_8001C284_000024A8:
    stw r3, 0x44(r1)
    addi r3, r1, 0x4e8
    addi r4, r1, 0x4f8
    addi r5, r1, 0x44
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x180
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x4e8
    bl fn_8001E1D0
    addi r3, r1, 0x4e8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x4f8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x4d8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x2e8
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002520
    bl fn_8001E640
lbl_fn_8001C284_00002520:
    stw r3, 0x40(r1)
    addi r3, r1, 0x4c8
    addi r4, r1, 0x4d8
    addi r5, r1, 0x40
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x178
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x4c8
    bl fn_8001E1D0
    addi r3, r1, 0x4c8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x4d8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x4b8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x2f3
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002598
    bl fn_8001E650
lbl_fn_8001C284_00002598:
    stw r3, 0x3c(r1)
    addi r3, r1, 0x4a8
    addi r4, r1, 0x4b8
    addi r5, r1, 0x3c
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x170
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x4a8
    bl fn_8001E1D0
    addi r3, r1, 0x4a8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x4b8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x498
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x2fe
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002610
    bl fn_8001E660
lbl_fn_8001C284_00002610:
    stw r3, 0x38(r1)
    addi r3, r1, 0x488
    addi r4, r1, 0x498
    addi r5, r1, 0x38
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x168
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x488
    bl fn_8001E1D0
    addi r3, r1, 0x488
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x498
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x478
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x30f
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002688
    bl fn_8001E670
lbl_fn_8001C284_00002688:
    stw r3, 0x34(r1)
    addi r3, r1, 0x468
    addi r4, r1, 0x478
    addi r5, r1, 0x34
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x160
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x468
    bl fn_8001E1D0
    addi r3, r1, 0x468
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x478
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x458
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x326
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002700
    bl fn_8001E680
lbl_fn_8001C284_00002700:
    stw r3, 0x30(r1)
    addi r3, r1, 0x448
    addi r4, r1, 0x458
    addi r5, r1, 0x30
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x158
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x448
    bl fn_8001E1D0
    addi r3, r1, 0x448
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x458
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x438
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x33e
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002778
    bl fn_8001E690
lbl_fn_8001C284_00002778:
    stw r3, 0x2c(r1)
    addi r3, r1, 0x428
    addi r4, r1, 0x438
    addi r5, r1, 0x2c
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x150
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x428
    bl fn_8001E1D0
    addi r3, r1, 0x428
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x438
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x418
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x354
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000027F0
    bl fn_8001E6A0
lbl_fn_8001C284_000027F0:
    stw r3, 0x28(r1)
    addi r3, r1, 0x408
    addi r4, r1, 0x418
    addi r5, r1, 0x28
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x148
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x408
    bl fn_8001E1D0
    addi r3, r1, 0x408
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x418
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x3f8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x35c
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002868
    bl fn_8001E6B0
lbl_fn_8001C284_00002868:
    stw r3, 0x24(r1)
    addi r3, r1, 0x3e8
    addi r4, r1, 0x3f8
    addi r5, r1, 0x24
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x140
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x3e8
    bl fn_8001E1D0
    addi r3, r1, 0x3e8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x3f8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x3d8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x364
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000028E0
    bl fn_8001E6C0
lbl_fn_8001C284_000028E0:
    stw r3, 0x20(r1)
    addi r3, r1, 0x3c8
    addi r4, r1, 0x3d8
    addi r5, r1, 0x20
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x138
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x3c8
    bl fn_8001E1D0
    addi r3, r1, 0x3c8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x3d8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x3b8
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x374
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002958
    bl fn_8001E6D0
lbl_fn_8001C284_00002958:
    stw r3, 0x1c(r1)
    addi r3, r1, 0x3a8
    addi r4, r1, 0x3b8
    addi r5, r1, 0x1c
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x130
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x3a8
    bl fn_8001E1D0
    addi r3, r1, 0x3a8
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x3b8
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x398
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x382
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_000029D0
    bl fn_8001E6E0
lbl_fn_8001C284_000029D0:
    stw r3, 0x18(r1)
    addi r3, r1, 0x388
    addi r4, r1, 0x398
    addi r5, r1, 0x18
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x128
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x388
    bl fn_8001E1D0
    addi r3, r1, 0x388
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x398
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x378
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x396
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002A48
    bl fn_8001E6F0
lbl_fn_8001C284_00002A48:
    stw r3, 0x14(r1)
    addi r3, r1, 0x368
    addi r4, r1, 0x378
    addi r5, r1, 0x14
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x120
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x368
    bl fn_8001E1D0
    addi r3, r1, 0x368
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x378
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x358
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x3aa
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002AC0
    bl fn_8001E700
lbl_fn_8001C284_00002AC0:
    stw r3, 0x10(r1)
    addi r3, r1, 0x348
    addi r4, r1, 0x358
    addi r5, r1, 0x10
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x118
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x348
    bl fn_8001E1D0
    addi r3, r1, 0x348
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x358
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x338
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x3be
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002B38
    bl fn_8001E710
lbl_fn_8001C284_00002B38:
    stw r3, 0xc(r1)
    addi r3, r1, 0x328
    addi r4, r1, 0x338
    addi r5, r1, 0xc
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x110
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x328
    bl fn_8001E1D0
    addi r3, r1, 0x328
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x338
    li r4, -0x1
    bl dtor_80013D60
    lis r31, lbl_807307A0@ha
    addi r3, r1, 0x318
    addi r31, r31, lbl_807307A0@l
    addi r4, r31, 0x3d1
    bl fn_8003E4A4
    addi r5, r31, 0x10
    li r3, 0x4
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8001C284_00002BB0
    bl fn_8001E720
lbl_fn_8001C284_00002BB0:
    stw r3, 0x8(r1)
    addi r3, r1, 0x308
    addi r4, r1, 0x318
    addi r5, r1, 0x8
    bl fn_8001E0B8
    lis r4, lbl_807C6B84@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807C6B84@l
    addi r5, r1, 0x308
    bl fn_8001E1D0
    addi r3, r1, 0x308
    li r4, -0x1
    bl fn_8001E168
    addi r3, r1, 0x318
    li r4, -0x1
    bl dtor_80013D60
    lwz r0, 0xb14(r1)
    lwz r31, 0xb0c(r1)
    mtlr r0
    addi r1, r1, 0xb10
    blr
}
