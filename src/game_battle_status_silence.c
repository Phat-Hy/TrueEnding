#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80051CD8(void);
extern void fn_80056DB8(void);
extern void fn_80056E40(void);
extern void fn_800575BC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_8006AA20(void);
extern void fn_8007FAF0(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092954(void);
extern void fn_80092F1C(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_8011D424(void);
extern void fn_8011E81C(void);
extern void fn_801354B4(void);
extern void fn_80136138(void);
extern void fn_80136544(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_80176548(void);
extern void fn_802180A8(void);
extern void fn_80373148(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_803EDCF4(void);
extern void fn_803F11F8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_8068AD58(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075387C[];
extern u8 lbl_807538D8[];
extern u8 lbl_80753960[];
extern u8 lbl_80753E80[];
extern u8 lbl_80753E98[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_807775F8[];
extern u8 lbl_8078E8A0[];
extern u8 lbl_8078E9A8[];
extern u8 lbl_8078EA40[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DFC0;
extern u32 lbl_8087DFC4;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4E0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886758;
extern u32 lbl_8088675C;
extern u32 lbl_80886760;
extern u32 lbl_80886764;
extern u32 lbl_80886768;
extern u32 lbl_8088676C;
extern u32 lbl_80886770;
extern u32 lbl_80886774;
extern u32 lbl_80886778;
extern u32 lbl_8088677C;
extern u32 lbl_80886780;
extern u32 lbl_80886784;
extern u32 lbl_80886788;
extern u32 lbl_8088678C;
extern u32 lbl_80886790;
extern u32 lbl_80886798;
extern u32 lbl_8088679C;
extern u32 lbl_808867A0;
extern u32 lbl_808867A4;
extern u32 lbl_808867A8;
extern u32 lbl_808867AC;
extern u32 lbl_808867B0;
extern u32 lbl_808867B4;
extern u32 lbl_808867B8;
extern u32 lbl_808867C0;
extern u32 lbl_808867C4;
extern u32 lbl_808867C8;
extern u32 lbl_808867CC;
extern u32 lbl_808867D0;
extern u32 lbl_808867D4;

/* Function declarations */
void fn_8042C30C(void);
void fn_8042C384(void);
void fn_8042C4A4(void);
void fn_8042C5AC(void);
void fn_8042C9B4(void);
void fn_8042CA24(void);
void fn_8042CA54(void);
void fn_8042CC10(void);
void fn_8042CC40(void);
void fn_8042CC98(void);
void fn_8042CCAC(void);
void fn_8042CE28(void);
void fn_8042CE30(void);
void fn_8042CEE8(void);
void fn_8042CF40(void);
void fn_8042CFB4(void);
void fn_8042D0DC(void);
void fn_8042D114(void);
void fn_8042D138(void);
void fn_8042D140(void);
void fn_8042D3EC(void);
void fn_8042D41C(void);
void fn_8042D474(void);
void fn_8042D488(void);
void fn_8042D5A0(void);
void fn_8042D5A4(void);
void fn_8042D5A8(void);
void fn_8042D5D0(void);
void fn_8042D628(void);
void fn_8042D748(void);
void fn_8042D7C0(void);
void fn_8042D8C0(void);
void fn_8042D93C(void);

asm void fn_8042C30C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8042C30C_0000005C
    addic. r3, r3, 0x4c4
    beq lbl_fn_8042C30C_00000034
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8042C30C_00000034:
    addi r3, r30, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8042C30C_0000005C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8042C30C_0000005C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042C384(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8042C384_00000180
    lwz r7, 0x260(r31)
    addi r3, r1, 0x14
    addi r4, r1, 0x30
    addi r6, r1, 0x3c
    psq_l f1, 0x10(r7), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x18(r7)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x1c(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x30(r1)
    lfs f4, 0x3c(r1)
    lfs f0, lbl_8088675C
    fsubs f5, f4, f3
    stfs f2, 0x1c(r1)
    stfs f2, 0x38(r1)
    lfs f2, 0x24(r7)
    fcmpo cr0, f5, f0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x44(r1)
    bge lbl_fn_8042C384_000000F8
    fneg f5, f5
lbl_fn_8042C384_000000F8:
    lfs f3, 0x40(r1)
    lfs f0, 0x34(r1)
    lfs f4, lbl_80886760
    fsubs f6, f3, f0
    lfs f0, lbl_8088675C
    fmuls f3, f5, f4
    fcmpo cr0, f6, f0
    stfs f3, 0x20(r1)
    bge lbl_fn_8042C384_00000120
    fneg f6, f6
lbl_fn_8042C384_00000120:
    lfs f3, 0x44(r1)
    lfs f0, 0x38(r1)
    lfs f4, lbl_80886760
    fsubs f5, f3, f0
    lfs f0, lbl_8088675C
    fmuls f3, f6, f4
    fcmpo cr0, f5, f0
    stfs f3, 0x24(r1)
    bge lbl_fn_8042C384_00000148
    fneg f5, f5
lbl_fn_8042C384_00000148:
    lfs f0, lbl_80886760
    mr r3, r31
    addi r4, r31, 0xf4
    fmuls f0, f5, f0
    stfs f0, 0x28(r1)
    bl fn_803EDB18
    stw r31, 0x4d0(r31)
    addi r3, r31, 0x4c4
    addi r4, r31, 0x6c
    addi r5, r31, 0x78
    addi r6, r1, 0x20
    bl fn_800575BC
    li r3, 0x1
    b lbl_fn_8042C384_00000184
lbl_fn_8042C384_00000180:
    li r3, 0x0
lbl_fn_8042C384_00000184:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8042C4A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042C4A4_000001FC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042C4A4_000001FC:
    lwz r0, 0x4cc(r31)
    addi r3, r31, 0xf4
    lfs f1, lbl_8088675C
    li r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x4cc(r31)
    lfs f2, lbl_80886764
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_8088675C
    addi r6, r31, 0x83c
    psq_l f1, 0x6c(r31), 0, 0
    li r5, 0x1
    lfs f2, 0x74(r31)
    li r0, 0x0
    stfs f0, 0x32c(r31)
    mr r3, r31
    addi r4, r1, 0x8
    stfs f0, 0x328(r31)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x844(r31)
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042C5AC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8042C5AC_000002F0
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8042C5AC_000002F0:
    lwz r0, lbl_8087F8A0
    cmpwi r0, 0x0
    beq lbl_fn_8042C5AC_00000674
    lwz r7, 0x260(r31)
    addi r3, r1, 0x14
    addi r4, r1, 0x48
    addi r6, r1, 0x54
    psq_l f1, 0x10(r7), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x18(r7)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x1c(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x48(r1)
    lfs f4, 0x54(r1)
    lfs f0, lbl_8088675C
    fsubs f5, f4, f3
    stfs f2, 0x1c(r1)
    stfs f2, 0x50(r1)
    lfs f2, 0x24(r7)
    fcmpo cr0, f5, f0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x5c(r1)
    bge lbl_fn_8042C5AC_0000035C
    fneg f5, f5
lbl_fn_8042C5AC_0000035C:
    lfs f4, lbl_80886760
    lfs f3, 0x58(r1)
    lfs f0, 0x4c(r1)
    fmuls f5, f5, f4
    lfs f4, lbl_80886768
    fsubs f6, f3, f0
    lfs f0, lbl_8088675C
    fmuls f3, f4, f5
    fcmpo cr0, f6, f0
    stfs f3, 0x3c(r1)
    bge lbl_fn_8042C5AC_0000038C
    fneg f6, f6
lbl_fn_8042C5AC_0000038C:
    lfs f3, 0x5c(r1)
    lfs f0, 0x50(r1)
    lfs f4, lbl_80886760
    fsubs f5, f3, f0
    lfs f0, lbl_8088675C
    fmuls f3, f6, f4
    fcmpo cr0, f5, f0
    stfs f3, 0x40(r1)
    bge lbl_fn_8042C5AC_000003B4
    fneg f5, f5
lbl_fn_8042C5AC_000003B4:
    lfs f0, lbl_80886760
    lfs f3, lbl_80886768
    fmuls f4, f5, f0
    lfs f0, lbl_8088675C
    fmuls f3, f3, f4
    stfs f3, 0x44(r1)
    lfs f3, 0x84c(r31)
    fcmpo cr0, f3, f0
    ble lbl_fn_8042C5AC_000003E4
    lfs f0, lbl_8088676C
    fsubs f0, f3, f0
    stfs f0, 0x84c(r31)
lbl_fn_8042C5AC_000003E4:
    lfs f3, 0x850(r31)
    lfs f0, lbl_80886770
    lfs f30, lbl_80886778
    fsubs f0, f3, f0
    lfs f29, lbl_80886774
    lfs f31, lbl_80886760
    stfs f0, 0x850(r31)
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    b lbl_fn_8042C5AC_00000568
lbl_fn_8042C5AC_0000040C:
    lfs f3, 0x74(r31)
    addi r3, r1, 0x30
    lfs f0, 0x530(r30)
    li r29, 0x0
    lfs f5, 0x70(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x6c(r31)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x34(r1)
    stfs f0, 0x30(r1)
    stfs f6, 0x38(r1)
    bl fn_805F9920
    lfs f0, 0x44(r1)
    fmuls f0, f0, f0
    fmuls f0, f29, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8042C5AC_00000490
    mr r4, r30
    addi r5, r30, 0x528
    addi r3, r1, 0x20
    bl fn_80176548
    lfs f0, 0x24(r1)
    addi r3, r1, 0x20
    addi r4, r31, 0x500
    fsubs f0, f0, f30
    stfs f0, 0x24(r1)
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_8042C5AC_00000490
    li r29, 0x1
lbl_fn_8042C5AC_00000490:
    lwz r0, 0x854(r31)
    addi r4, r31, 0x858
    li r6, 0x0
    slwi r0, r0, 2
    add r3, r31, r0
    addi r3, r3, 0x858
    b lbl_fn_8042C5AC_0000050C
lbl_fn_8042C5AC_000004AC:
    lwz r0, 0x0(r4)
    cmplw r0, r30
    bne lbl_fn_8042C5AC_00000508
    cmpwi r29, 0x0
    li r6, 0x1
    bne lbl_fn_8042C5AC_00000514
    addi r0, r31, 0x858
    subf r0, r0, r4
    srawi r0, r0, 2
    addze r4, r0
    slwi r0, r4, 2
    add r5, r31, r0
    b lbl_fn_8042C5AC_000004F0
lbl_fn_8042C5AC_000004E0:
    lwz r0, 0x85c(r5)
    addi r4, r4, 0x1
    stw r0, 0x858(r5)
    addi r5, r5, 0x4
lbl_fn_8042C5AC_000004F0:
    lwz r3, 0x854(r31)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_8042C5AC_000004E0
    stw r0, 0x854(r31)
    b lbl_fn_8042C5AC_00000514
lbl_fn_8042C5AC_00000508:
    addi r4, r4, 0x4
lbl_fn_8042C5AC_0000050C:
    cmplw r4, r3
    bne lbl_fn_8042C5AC_000004AC
lbl_fn_8042C5AC_00000514:
    cmpwi r29, 0x0
    beq lbl_fn_8042C5AC_00000564
    cmpwi r6, 0x0
    bne lbl_fn_8042C5AC_00000550
    lwz r0, 0x854(r31)
    lfs f0, 0x848(r31)
    slwi r0, r0, 2
    stfs f0, 0x84c(r31)
    add r0, r31, r0
    addic. r3, r0, 0x858
    beq lbl_fn_8042C5AC_00000544
    stw r30, 0x0(r3)
lbl_fn_8042C5AC_00000544:
    lwz r3, 0x854(r31)
    addi r0, r3, 0x1
    stw r0, 0x854(r31)
lbl_fn_8042C5AC_00000550:
    lfs f0, 0x570(r30)
    fcmpo cr0, f0, f31
    ble lbl_fn_8042C5AC_00000564
    lfs f0, 0x848(r31)
    stfs f0, 0x84c(r31)
lbl_fn_8042C5AC_00000564:
    lwz r30, 0x14ac(r30)
lbl_fn_8042C5AC_00000568:
    cmpwi r30, 0x0
    bne lbl_fn_8042C5AC_0000040C
    lfs f3, 0x84c(r31)
    lfs f0, lbl_8088675C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8042C5AC_00000588
    stfs f0, 0x850(r31)
lbl_fn_8042C5AC_00000588:
    addi r3, r31, 0x83c
    lfs f0, 0x850(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6c(r31), 0, 0
    fmr f1, f0
    lfs f2, 0x844(r31)
    stfs f2, 0x74(r31)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x84c(r31)
    lfs f0, 0x70(r31)
    addi r3, r31, 0x4c4
    addi r4, r31, 0x6c
    addi r5, r31, 0x78
    fmadds f0, f3, f4, f0
    addi r6, r1, 0x3c
    stfs f0, 0x70(r31)
    bl fn_800575BC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042C5AC_0000060C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8042C5AC_0000060C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042C5AC_0000064C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042C5AC_0000064C:
    lfs f3, 0x878(r31)
    lfs f0, lbl_8088675C
    fcmpu cr0, f3, f0
    beq lbl_fn_8042C5AC_00000674
    lwz r3, lbl_8087F4A0
    lwz r3, 0x48(r3)
    b lbl_fn_8042C5AC_0000066C
lbl_fn_8042C5AC_00000668:
    lwz r3, 0x5c(r3)
lbl_fn_8042C5AC_0000066C:
    cmpwi r3, 0x0
    bne lbl_fn_8042C5AC_00000668
lbl_fn_8042C5AC_00000674:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8042C9B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8042C9B4_00000704
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042C9B4_00000704
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_8042C9B4_00000704:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042CA24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0xf4
    stw r0, 0x14(r1)
    bl fn_8008B140
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042CA54(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r31, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_8075387C@ha
    addi r31, r31, lbl_8075387C@l
lbl_fn_8042CA54_000007F8:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8042CA54_000008D8
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042CA54_0000084C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_8042CA54_000008D8
lbl_fn_8042CA54_0000084C:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042CA54_00000894
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r29, 0xf4
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_8042CA54_000008D8
lbl_fn_8042CA54_00000894:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042CA54_000008D8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
lbl_fn_8042CA54_000008D8:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042CA54_000007F8
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_8042CC10(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8042CC10_00000914
    li r3, 0x0
    blr
lbl_fn_8042CC10_00000914:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmplwi r0, 0x2
    ble lbl_fn_8042CC10_0000092C
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_8042CC10_0000092C:
    lwz r3, 0x54(r3)
    blr
}

asm void fn_8042CC40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_8088675C
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042CC98(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8042CCAC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r0, lbl_8087F4E0
    cmpwi r0, 0x0
    bne lbl_fn_8042CCAC_00000B00
    addi r4, r1, 0x8
    bl fn_803EC758
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8042CCAC_00000A0C
    cmpwi r30, 0x0
    beq lbl_fn_8042CCAC_00000A0C
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8042CCAC_00000A0C
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_8042CCAC_00000A10
lbl_fn_8042CCAC_00000A0C:
    li r30, 0x0
lbl_fn_8042CCAC_00000A10:
    lis r31, lbl_8075387C@ha
    mr r3, r30
    addi r31, r31, lbl_8075387C@l
    addi r5, r29, 0x54
    addi r4, r31, 0x18
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_8088677C
    mr r3, r30
    lfs f2, lbl_80886780
    addi r4, r31, 0x1e
    lfs f3, lbl_80886784
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80886788
    mr r3, r30
    lfs f2, lbl_8088678C
    addi r4, r31, 0x22
    lfs f3, lbl_80886790
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_8088677C
    mr r3, r30
    lfs f2, lbl_80886780
    addi r4, r31, 0x26
    lfs f3, lbl_80886784
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x2a
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x31
    addi r5, r29, 0x58
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r4, r30
    addi r3, r29, 0xb0
    bl fn_803F11F8
    lfs f0, lbl_80886758
    li r0, 0x1
    stfs f0, 0x878(r29)
    stw r0, lbl_8087F4E0
lbl_fn_8042CCAC_00000B00:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8042CE28(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_8042CE30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8042CE30_00000BB8
    lis r5, lbl_807538D8@ha
    li r3, 0x100
    addi r5, r5, lbl_807538D8@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8042CE30_00000BB0
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r3, lbl_8078E9A8@ha
    li r0, 0x0
    addi r3, r3, lbl_8078E9A8@l
    stw r3, 0x0(r31)
    lfs f0, lbl_80886798
    stw r0, 0xf4(r31)
    stw r0, 0xf8(r31)
    stfs f0, 0xfc(r31)
    stw r0, 0x54(r31)
lbl_fn_8042CE30_00000BB0:
    mr r3, r31
    b lbl_fn_8042CE30_00000BBC
lbl_fn_8042CE30_00000BB8:
    li r3, 0x0
lbl_fn_8042CE30_00000BBC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042CEE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8042CEE8_00000C18
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8042CEE8_00000C18
    mr r3, r30
    bl dtor_80084684
lbl_fn_8042CEE8_00000C18:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042CF40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8042CF40_00000C90
    lwz r3, 0xf4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8042CF40_00000C88
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8042CF40_00000C80
    li r4, 0x0
    bl fn_800D246C
    li r3, 0x1
    b lbl_fn_8042CF40_00000C94
lbl_fn_8042CF40_00000C80:
    li r3, 0x0
    b lbl_fn_8042CF40_00000C94
lbl_fn_8042CF40_00000C88:
    li r3, 0x1
    b lbl_fn_8042CF40_00000C94
lbl_fn_8042CF40_00000C90:
    li r3, 0x0
lbl_fn_8042CF40_00000C94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042CFB4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80886798
    li r0, 0x0
    li r31, 0x1
    stw r31, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0xf4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8042CFB4_00000DB8
    lfs f2, 0x74(r30)
    li r4, 0x0
    psq_l f1, 0x6c(r30), 0, 0
    li r5, 0x13f
    psq_st f1, 0x528(r3), 0, 0
    li r6, 0x1
    lfs f0, lbl_8088679C
    li r7, 0x0
    stfs f2, 0x530(r3)
    li r8, 0x1
    lwz r3, 0xf4(r30)
    lfs f2, 0x80(r30)
    psq_l f1, 0x78(r30), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    fmr f1, f0
    stfs f2, 0x53c(r3)
    lfs f2, lbl_808867A0
    lwz r3, 0xf4(r30)
    stw r31, 0x3fc(r3)
    lwz r3, 0xf4(r30)
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf4(r30)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf4(r30)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r0, 0xf8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8042CFB4_00000DB8
    lwz r3, 0xf4(r30)
    li r4, 0x142
    lfs f1, lbl_8088679C
    li r5, 0x1
    lfs f2, lbl_80886798
    addi r3, r3, 0x1188
    li r6, 0x1
    li r7, 0x1
    bl fn_8011E81C
lbl_fn_8042CFB4_00000DB8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042D0DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8042D0DC_00000DF8
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8042D0DC_00000DF8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042D114(void)
{
    nofralloc
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r4, lbl_8087F0A8
    lwz r0, 0x74(r4)
    cmpwi r0, 0x0
    beqlr
    b fn_803EDCF4
    blr
}

asm void fn_8042D138(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8042D140(void)
{
    nofralloc
    stwu r1, -0x780(r1)
    mflr r0
    stw r0, 0x784(r1)
    stmw r24, 0x760(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r26, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r31, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x120(r1)
    mr r25, r3
    addi r3, r1, 0x130
    stw r31, 0x124(r1)
    li r4, 0x0
    li r5, 0x400
    stw r31, 0x128(r1)
    stw r31, 0x12c(r1)
    stw r31, 0x750(r1)
    bl memset
    addi r3, r1, 0x730
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x120(r1)
    mr r4, r25
    mr r5, r26
    addi r3, r1, 0x120
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x120
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x120(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r26, lbl_8078E8A0@ha
    lis r25, lbl_807538D8@ha
    addi r29, r1, 0x11
    addi r30, r1, 0x10
    addi r26, r26, lbl_8078E8A0@l
    addi r25, r25, lbl_807538D8@l
    li r27, 0x1
lbl_fn_8042D140_00000EF0:
    addi r3, r1, 0x120
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r24, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8042D140_000010BC
    addi r4, r25, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042D140_00001024
    addi r3, r1, 0x120
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x20
    bl strcpy
    addi r3, r1, 0x20
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_8042D140_000010BC
    stw r31, 0x10(r1)
    addi r3, r1, 0x20
    stw r31, 0x14(r1)
    stw r31, 0x18(r1)
    bl strlen
    mr r24, r3
    mr r3, r30
    mr r4, r24
    bl fn_80013DC4
    addi r6, r1, 0x20
    lbz r0, 0xc(r1)
    mr r7, r6
    stb r0, 0x8(r1)
    mr r3, r30
    addi r8, r1, 0x8
    add r7, r7, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    cmpwi r28, 0x0
    beq lbl_fn_8042D140_00000FF8
    li r3, 0x1428
    li r4, 0x1
    la r5, lbl_8087DFC4
    la r6, lbl_8087DFC0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_8042D140_00000FFC
    mr r4, r28
    li r5, 0x5
    li r6, 0x0
    bl fn_801354B4
    stw r26, 0x0(r24)
    mr r3, r24
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8042D140_00000FE0
    mr r4, r29
    b lbl_fn_8042D140_00000FE4
lbl_fn_8042D140_00000FE0:
    lwz r4, 0x18(r1)
lbl_fn_8042D140_00000FE4:
    bl fn_80136544
    addi r3, r24, 0x1188
    addi r4, r24, 0xb0
    bl fn_8011D424
    b lbl_fn_8042D140_00000FFC
lbl_fn_8042D140_00000FF8:
    li r24, 0x0
lbl_fn_8042D140_00000FFC:
    stw r24, 0xf4(r28)
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8042D140_00001014
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8042D140_00001014:
    lwz r3, 0xf4(r28)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_8042D140_000010BC
lbl_fn_8042D140_00001024:
    mr r3, r24
    addi r4, r25, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042D140_00001070
    lwz r0, 0xf4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8042D140_000010BC
    addi r3, r1, 0x120
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x20
    bl strcpy
    lwz r3, 0xf4(r28)
    addi r5, r1, 0x20
    li r4, 0x13f
    addi r3, r3, 0xb0
    bl fn_80097A88
    b lbl_fn_8042D140_000010BC
lbl_fn_8042D140_00001070:
    mr r3, r24
    addi r4, r25, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042D140_000010BC
    lwz r0, 0xf4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8042D140_000010BC
    addi r3, r1, 0x120
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x20
    bl strcpy
    lwz r3, 0xf4(r28)
    addi r5, r1, 0x20
    li r4, 0x142
    addi r3, r3, 0xb0
    bl fn_80097A88
    stw r27, 0xf8(r28)
lbl_fn_8042D140_000010BC:
    addi r3, r1, 0x120
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042D140_00000EF0
    lmw r24, 0x760(r1)
    lwz r0, 0x784(r1)
    mtlr r0
    addi r1, r1, 0x780
    blr
}

asm void fn_8042D3EC(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8042D3EC_000010F0
    li r3, 0x0
    blr
lbl_fn_8042D3EC_000010F0:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmplwi r0, 0x1
    ble lbl_fn_8042D3EC_00001108
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_8042D3EC_00001108:
    lwz r3, 0x54(r3)
    blr
}

asm void fn_8042D41C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886798
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042D474(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8042D488(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    addi r4, r1, 0x8
    stw r29, 0x34(r1)
    mr r29, r3
    bl fn_803EC758
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8042D488_000011DC
    cmpwi r30, 0x0
    beq lbl_fn_8042D488_000011DC
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8042D488_000011DC
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_8042D488_000011E0
lbl_fn_8042D488_000011DC:
    li r30, 0x0
lbl_fn_8042D488_000011E0:
    lis r31, lbl_807538D8@ha
    mr r3, r30
    addi r31, r31, lbl_807538D8@l
    addi r5, r29, 0x54
    addi r4, r31, 0x1a
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808867A4
    mr r3, r30
    lfs f2, lbl_808867A8
    addi r4, r31, 0x20
    lfs f3, lbl_808867AC
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808867B0
    mr r3, r30
    lfs f2, lbl_808867B4
    addi r4, r31, 0x24
    lfs f3, lbl_808867B8
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_808867A4
    mr r3, r30
    lfs f2, lbl_808867A8
    addi r4, r31, 0x28
    lfs f3, lbl_808867AC
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8042D5A0(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_8042D5A4(void)
{
    nofralloc
    b fn_80145334
}

asm void fn_8042D5A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8013655C
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042D5D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8042D5D0_00001300
    li r4, 0x0
    bl fn_80136138
    cmpwi r31, 0x0
    ble lbl_fn_8042D5D0_00001300
    mr r3, r30
    bl dtor_80084684
lbl_fn_8042D5D0_00001300:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042D628(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8042D628_00001418
    lis r5, lbl_80753E98@ha
    li r3, 0x928
    addi r5, r5, lbl_80753E98@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8042D628_00001410
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r4, lbl_8078EA40@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078EA40@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r30, r31, 0x4c4
    li r4, 0x2
    mr r3, r30
    bl fn_80056DB8
    lis r3, lbl_807775F8@ha
    addi r5, r31, 0x86c
    addi r3, r3, lbl_807775F8@l
    stw r3, 0x0(r30)
    addi r3, r31, 0x88c
    li r4, 0x0
    stw r4, 0x860(r31)
    cmplw r5, r3
    stw r4, 0x864(r31)
    stw r4, 0x868(r31)
    bge lbl_fn_8042D628_00001400
    addi r0, r3, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_8042D628_00001400
lbl_fn_8042D628_000013F0:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_8042D628_000013F0
lbl_fn_8042D628_00001400:
    lfs f0, lbl_808867C4
    li r0, 0x0
    stfs f0, 0x920(r31)
    stw r0, 0x54(r31)
lbl_fn_8042D628_00001410:
    mr r3, r31
    b lbl_fn_8042D628_0000141C
lbl_fn_8042D628_00001418:
    li r3, 0x0
lbl_fn_8042D628_0000141C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042D748(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8042D748_00001498
    addic. r3, r3, 0x4c4
    beq lbl_fn_8042D748_00001470
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8042D748_00001470:
    addi r3, r30, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8042D748_00001498
    mr r3, r30
    bl dtor_80084684
lbl_fn_8042D748_00001498:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042D7C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r21, 0x14(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8042D7C0_0000159C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8042D7C0_00001590
    lwz r5, 0x4c(r31)
    lis r4, lbl_80753960@ha
    addi r4, r4, lbl_80753960@l
    subi r0, r5, 0x1
    mulli r0, r0, 0x144
    add r24, r4, r0
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8042D7C0_00001590
    lwz r23, 0x70(r3)
    b lbl_fn_8042D7C0_00001588
lbl_fn_8042D7C0_0000150C:
    lwz r0, 0x48(r23)
    cmpwi r0, 0x4
    bne lbl_fn_8042D7C0_00001584
    lwz r29, 0x0(r24)
    mr r25, r31
    addi r26, r24, 0x4
    li r22, 0x0
    b lbl_fn_8042D7C0_0000157C
lbl_fn_8042D7C0_0000152C:
    li r21, 0x0
    li r30, 0x0
    b lbl_fn_8042D7C0_00001564
lbl_fn_8042D7C0_00001538:
    lwz r4, 0x348(r23)
    mr r3, r26
    lwzx r28, r4, r30
    lwz r27, 0x8c(r28)
    bl fn_800DC6B4
    cmplw r27, r3
    bne lbl_fn_8042D7C0_0000155C
    stw r28, 0x868(r25)
    stw r28, 0x864(r25)
lbl_fn_8042D7C0_0000155C:
    addi r21, r21, 0x1
    addi r30, r30, 0x4
lbl_fn_8042D7C0_00001564:
    lwz r0, 0x344(r23)
    cmpw r21, r0
    blt lbl_fn_8042D7C0_00001538
    addi r26, r26, 0x40
    addi r25, r25, 0x8
    addi r22, r22, 0x1
lbl_fn_8042D7C0_0000157C:
    cmpw r22, r29
    blt lbl_fn_8042D7C0_0000152C
lbl_fn_8042D7C0_00001584:
    lwz r23, 0x4c(r23)
lbl_fn_8042D7C0_00001588:
    cmpwi r23, 0x0
    bne lbl_fn_8042D7C0_0000150C
lbl_fn_8042D7C0_00001590:
    stw r31, 0x4d0(r31)
    li r3, 0x1
    b lbl_fn_8042D7C0_000015A0
lbl_fn_8042D7C0_0000159C:
    li r3, 0x0
lbl_fn_8042D7C0_000015A0:
    lmw r21, 0x14(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8042D8C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_808867C4
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042D93C(void)
{
    nofralloc
    stwu r1, -0x360(r1)
    mflr r0
    lis r4, 0x4330
    stw r0, 0x364(r1)
    stfd f31, 0x350(r1)
    psq_st f31, 0x358(r1), 0, 0
    stfd f30, 0x340(r1)
    psq_st f30, 0x348(r1), 0, 0
    stfd f29, 0x330(r1)
    psq_st f29, 0x338(r1), 0, 0
    stw r31, 0x32c(r1)
    mr r31, r3
    stw r30, 0x328(r1)
    stw r29, 0x324(r1)
    lwz r0, 0x54(r3)
    stw r4, 0x2f0(r1)
    cmpwi r0, 0x0
    stw r4, 0x2f8(r1)
    bne lbl_fn_8042D93C_0000168C
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8042D93C_0000168C:
    lfs f30, lbl_808867C8
    mr r30, r31
    li r29, 0x0
lbl_fn_8042D93C_00001698:
    lwz r3, 0x868(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8042D93C_000016F8
    lwz r6, 0x864(r30)
    cmpwi r6, 0x0
    beq lbl_fn_8042D93C_000016F8
    lfs f0, 0x5c(r6)
    addi r4, r1, 0x44
    lfs f7, 0x4c(r6)
    mr r5, r4
    lfs f8, 0x3c(r6)
    addi r3, r3, 0x30
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f0, 0x4c(r1)
    bl fn_805F93C0
    lfs f0, 0x48(r1)
    fabs f7, f30
    fabs f8, f0
    frsp f7, f7
    frsp f8, f8
    fcmpo cr0, f8, f7
    bge lbl_fn_8042D93C_000016F8
    fmr f30, f0
lbl_fn_8042D93C_000016F8:
    addi r29, r29, 0x1
    addi r30, r30, 0x8
    cmpwi r29, 0x5
    blt lbl_fn_8042D93C_00001698
    lwz r4, 0x860(r31)
    li r0, 0x4
    mr r3, r31
    li r5, 0x0
    stw r0, 0x860(r31)
    mtctr r0
lbl_fn_8042D93C_00001720:
    lfs f0, 0x90c(r3)
    fcmpo cr0, f30, f0
    bge lbl_fn_8042D93C_000018E4
    cmpw r4, r5
    stw r5, 0x860(r31)
    beq lbl_fn_8042D93C_000018F0
    cmpwi r5, 0x2
    bne lbl_fn_8042D93C_000018F0
    lfs f7, lbl_808867C4
    addi r30, r1, 0x2c0
    lfs f0, lbl_808867D0
    lfs f8, lbl_808867CC
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f7, 0x2ec(r1)
    stfs f7, 0x2e4(r1)
    stfs f7, 0x2e0(r1)
    stfs f7, 0x2dc(r1)
    stfs f7, 0x2d8(r1)
    stfs f7, 0x2d0(r1)
    stfs f7, 0x2cc(r1)
    stfs f7, 0x2c8(r1)
    stfs f7, 0x2c4(r1)
    stfs f0, 0x2e8(r1)
    stfs f0, 0x2d4(r1)
    stfs f0, 0x2c0(r1)
    lfs f1, 0x80(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_8042D93C_000017E8
    addi r3, r1, 0x1d0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1d0
    addi r5, r1, 0x1a0
    bl fn_805F89F0
    addi r3, r1, 0x1a0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8042D93C_000017E8:
    lfs f0, lbl_808867C4
    lfs f1, 0x7c(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8042D93C_00001848
    addi r3, r1, 0x230
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x230
    addi r5, r1, 0x200
    bl fn_805F89F0
    addi r3, r1, 0x200
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8042D93C_00001848:
    lfs f0, lbl_808867C4
    lfs f1, 0x78(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8042D93C_000018A8
    addi r3, r1, 0x290
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x290
    addi r5, r1, 0x260
    bl fn_805F89F0
    addi r3, r1, 0x260
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8042D93C_000018A8:
    addi r4, r1, 0x38
    addi r3, r1, 0x2c0
    mr r5, r4
    bl fn_805F93C0
    lwz r4, lbl_808867C0
    addi r3, r1, 0xc
    lfs f1, lbl_808867D0
    addi r5, r1, 0x38
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8042D93C_000018F0
lbl_fn_8042D93C_000018E4:
    addi r3, r3, 0x4
    addi r5, r5, 0x1
    bdnz lbl_fn_8042D93C_00001720
lbl_fn_8042D93C_000018F0:
    lwz r0, 0x860(r31)
    lfs f29, lbl_808867C4
    cmpwi r0, 0x1
    bne lbl_fn_8042D93C_00001918
    lfs f0, 0x90c(r31)
    lfs f7, 0x910(r31)
    fsubs f8, f30, f0
    fsubs f0, f7, f0
    fdivs f29, f8, f0
    b lbl_fn_8042D93C_00001944
lbl_fn_8042D93C_00001918:
    cmpwi r0, 0x2
    bne lbl_fn_8042D93C_00001928
    lfs f29, lbl_808867D0
    b lbl_fn_8042D93C_00001944
lbl_fn_8042D93C_00001928:
    cmpwi r0, 0x3
    bne lbl_fn_8042D93C_00001944
    lfs f7, 0x918(r31)
    lfs f0, 0x914(r31)
    fsubs f8, f7, f30
    fsubs f0, f7, f0
    fdivs f29, f8, f0
lbl_fn_8042D93C_00001944:
    lfs f7, lbl_808867C4
    fcmpo cr0, f29, f7
    ble lbl_fn_8042D93C_00001954
    fmr f7, f29
lbl_fn_8042D93C_00001954:
    lfs f0, lbl_808867D0
    fcmpo cr0, f7, f0
    bge lbl_fn_8042D93C_00001978
    lfs f0, lbl_808867C4
    fcmpo cr0, f29, f0
    ble lbl_fn_8042D93C_00001970
    b lbl_fn_8042D93C_0000197C
lbl_fn_8042D93C_00001970:
    fmr f29, f0
    b lbl_fn_8042D93C_0000197C
lbl_fn_8042D93C_00001978:
    fmr f29, f0
lbl_fn_8042D93C_0000197C:
    lis r3, lbl_80753E80@ha
    lfs f31, lbl_808867D4
    lfd f30, lbl_80753E80@l(r3)
    addi r30, r31, 0x88c
    li r29, 0x0
lbl_fn_8042D93C_00001990:
    mr r4, r30
    addi r3, r31, 0xf4
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_8042D93C_00001A7C
    lwz r0, 0x18(r3)
    frsp f0, f29
    stw r0, 0x14(r1)
    li r4, 0x3
    lbz r0, 0x14(r1)
    fmuls f0, f31, f0
    stw r0, 0x2f4(r1)
    lbz r5, 0x15(r1)
    lfd f7, 0x2f0(r1)
    fctiwz f0, f0
    lbz r0, 0x16(r1)
    fsubs f7, f7, f30
    stw r5, 0x2fc(r1)
    stw r0, 0x2f4(r1)
    fdivs f10, f7, f31
    lfd f8, 0x2f8(r1)
    lfd f7, 0x2f0(r1)
    stfd f0, 0x318(r1)
    lwz r0, 0x31c(r1)
    stb r0, 0xb(r1)
    fsubs f9, f8, f30
    stfs f29, 0x34(r1)
    fsubs f0, f7, f30
    fmuls f8, f31, f10
    stfs f10, 0x28(r1)
    fdivs f7, f9, f31
    stfs f7, 0x2c(r1)
    fdivs f0, f0, f31
    stfs f0, 0x30(r1)
    fmuls f7, f31, f7
    fmuls f0, f31, f0
    fctiwz f8, f8
    fctiwz f7, f7
    fctiwz f0, f0
    stfd f8, 0x300(r1)
    stfd f7, 0x308(r1)
    lwz r6, 0x304(r1)
    stfd f0, 0x310(r1)
    lwz r5, 0x30c(r1)
    lwz r0, 0x314(r1)
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r0, 0xa(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    lbz r0, 0x10(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x11(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x12(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x13(r1)
    stb r0, 0x1b(r3)
    bl fn_8007FAF0
lbl_fn_8042D93C_00001A7C:
    addi r29, r29, 0x1
    addi r30, r30, 0x40
    cmpwi r29, 0x2
    blt lbl_fn_8042D93C_00001990
    lwz r0, 0x860(r31)
    lwz r3, 0xf8(r31)
    cmpwi r0, 0x2
    ori r0, r3, 0x10
    stw r0, 0xf8(r31)
    bne lbl_fn_8042D93C_00001C48
    lfs f7, lbl_808867C4
    addi r30, r1, 0x50
    lfs f0, lbl_808867D0
    lfs f8, lbl_808867CC
    stfs f8, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f7, 0x20(r1)
    stfs f7, 0x7c(r1)
    stfs f7, 0x74(r1)
    stfs f7, 0x70(r1)
    stfs f7, 0x6c(r1)
    stfs f7, 0x68(r1)
    stfs f7, 0x60(r1)
    stfs f7, 0x5c(r1)
    stfs f7, 0x58(r1)
    stfs f7, 0x54(r1)
    stfs f0, 0x78(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x50(r1)
    lfs f1, 0x80(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_8042D93C_00001B4C
    addi r3, r1, 0x140
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x140
    addi r5, r1, 0x170
    bl fn_805F89F0
    addi r3, r1, 0x170
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8042D93C_00001B4C:
    lfs f0, lbl_808867C4
    lfs f1, 0x7c(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8042D93C_00001BAC
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xe0
    addi r5, r1, 0x110
    bl fn_805F89F0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8042D93C_00001BAC:
    lfs f0, lbl_808867C4
    lfs f1, 0x78(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8042D93C_00001C0C
    addi r3, r1, 0x80
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x80
    addi r5, r1, 0xb0
    bl fn_805F89F0
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8042D93C_00001C0C:
    addi r4, r1, 0x18
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    addi r3, r31, 0x4c4
    addi r4, r1, 0x18
    addi r5, r31, 0x78
    addi r6, r31, 0x854
    bl fn_800575BC
    lwz r3, 0x4cc(r31)
    li r0, 0x4000
    stw r0, 0x4e4(r31)
    ori r0, r3, 0x1
    stw r0, 0x4cc(r31)
    b lbl_fn_8042D93C_00001C54
lbl_fn_8042D93C_00001C48:
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
lbl_fn_8042D93C_00001C54:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042D93C_00001C94
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042D93C_00001C94:
    lwz r0, 0x364(r1)
    psq_l f31, 0x358(r1), 0, 0
    lfd f31, 0x350(r1)
    psq_l f30, 0x348(r1), 0, 0
    lfd f30, 0x340(r1)
    psq_l f29, 0x338(r1), 0, 0
    lfd f29, 0x330(r1)
    lwz r31, 0x32c(r1)
    lwz r30, 0x328(r1)
    lwz r29, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x360
    blr
}
