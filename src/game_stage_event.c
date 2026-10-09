#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8003EA3C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800A555C(void);
extern void fn_80108C10(void);
extern void fn_8012476C(void);
extern void fn_8012DF7C(void);
extern void fn_80148B0C(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_8018F81C(void);
extern void fn_8018F84C(void);
extern void fn_801AD34C(void);
extern void fn_8054D798(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_806868C4(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_80739708[];
extern u8 lbl_80739F34[];
extern u8 lbl_8077DC48[];
extern u8 lbl_8077DD74[];
extern u8 lbl_8077DD80[];
extern u8 lbl_8077DDB0[];
extern u8 lbl_8077DEF0[];
extern u8 lbl_8077DF68[];
extern u8 lbl_8077DFE0[];
extern u8 lbl_8077E058[];
extern u8 lbl_8077E0D0[];
extern u8 lbl_8077EE80[];
extern u8 lbl_8077EFA8[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C7B68[];
extern u8 lbl_807C7BC0[];

/* Small data declarations */
extern u32 lbl_8087DA00;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0B9;
extern u32 lbl_8087F0C5;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A8;
extern u32 lbl_80881FB8;
extern u32 lbl_80881FBC;
extern u32 lbl_80881FCC;
extern u32 lbl_80881FD0;
extern u32 lbl_80881FD4;
extern u32 lbl_80881FD8;
extern u32 lbl_80881FDC;
extern u32 lbl_80881FE4;
extern u32 lbl_80881FE8;
extern u32 lbl_80882008;
extern u32 lbl_80882068;
extern u32 lbl_8088209C;
extern u32 lbl_808820E8;
extern u32 lbl_808820F4;

/* Function declarations */
void fn_8019D98C(void);
void fn_8019DA3C(void);
void fn_8019DA50(void);
void fn_8019DBA4(void);
void fn_8019DF0C(void);
void fn_8019E358(void);
void fn_8019E388(void);
void fn_8019E4A4(void);
void fn_8019E4F4(void);
void fn_8019E670(void);
void fn_8019EAF0(void);
void fn_8019EB7C(void);
void fn_8019EC68(void);
void fn_8019EF70(void);
void fn_8019F0A8(void);

asm void fn_8019D98C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r4, lbl_80739708@ha
    lis r0, 0x4330
    lfd f6, lbl_80739708@l(r4)
    lwz r6, 0x4(r3)
    addi r5, r1, 0x8
    lfs f4, 0x18(r3)
    lfs f5, 0x52c(r6)
    lfs f3, 0x528(r6)
    fadds f5, f5, f4
    lfs f0, 0x14(r3)
    lfs f4, 0x530(r6)
    fadds f3, f3, f0
    stfs f5, 0xc(r1)
    lfs f0, 0x1c(r3)
    stfs f3, 0x8(r1)
    fadds f2, f4, f0
    lfs f4, lbl_808820E8
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    lfs f3, lbl_80881FB8
    stfs f2, 0x530(r6)
    lwz r4, lbl_8087F0A8
    lwz r6, lbl_8087EFA8
    lwz r5, 0x30(r4)
    lwz r4, 0x20(r3)
    mullw r5, r5, r5
    stw r0, 0x18(r1)
    subi r0, r4, 0x1
    lfs f7, 0x3a4(r6)
    lfs f0, 0x18(r3)
    stfs f2, 0x10(r1)
    xoris r4, r5, 0x8000
    stw r4, 0x1c(r1)
    lfd f5, 0x18(r1)
    stw r0, 0x20(r3)
    fsubs f5, f5, f6
    fdivs f4, f4, f5
    fmuls f3, f3, f4
    fmadds f0, f7, f3, f0
    stfs f0, 0x18(r3)
    li r3, 0x0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019DA3C(void)
{
    nofralloc
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_8019DA50(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r10, lbl_8077E0D0@ha
    li r9, 0x1e
    stw r0, 0x74(r1)
    addi r10, r10, lbl_8077E0D0@l
    li r8, 0x3
    li r7, 0x0
    stw r31, 0x6c(r1)
    li r0, 0x82
    lfs f3, lbl_80881FCC
    mr r31, r3
    stw r4, 0x4(r3)
    lfs f0, lbl_8088209C
    stw r10, 0x0(r3)
    stw r9, 0x14(r3)
    stw r8, 0x18(r3)
    stw r7, 0x58c(r4)
    li r4, 0x79
    lwz r7, 0x4(r3)
    stw r0, 0x560(r7)
    stw r5, 0x1c(r3)
    stw r6, 0x20(r3)
    addi r3, r1, 0x30
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lwz r10, 0x1c(r31)
    addi r3, r1, 0x8
    lfs f3, lbl_80881FCC
    addi r9, r1, 0x14
    lfs f4, 0x530(r10)
    li r0, 0x1
    lfs f0, 0x28(r1)
    li r4, 0x0
    lfs f6, 0x52c(r10)
    li r5, 0x227
    fadds f7, f4, f0
    lfs f5, 0x24(r1)
    lfs f4, 0x528(r10)
    li r6, 0x0
    lfs f0, 0x20(r1)
    fadds f5, f6, f5
    fadds f0, f4, f0
    stfs f5, 0xc(r1)
    fmr f2, f7
    lfs f5, lbl_80881FE8
    stfs f0, 0x8(r1)
    li r7, 0x0
    psq_l f1, 0x0(r3), 0, 0
    li r8, 0x1
    stfs f2, 0x10(r31)
    fmr f2, f3
    lwz r3, 0x4(r31)
    psq_st f1, 0x8(r31), 0, 0
    lfs f0, lbl_80881FBC
    lfs f4, 0x538(r10)
    stfs f3, 0x14(r1)
    fadds f4, f5, f4
    stfs f7, 0x10(r1)
    stfs f4, 0x18(r1)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    fmr f1, f3
    stfs f2, 0x53c(r3)
    lfs f2, lbl_80881FDC
    lwz r3, 0x4(r31)
    stfs f3, 0x1c(r1)
    addi r3, r3, 0xb0
    stw r0, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    bl fn_80097C08
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8019DBA4(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    stw r28, 0xe0(r1)
    lwz r6, 0x4(r3)
    lwz r0, 0x7e0(r6)
    addi r28, r6, 0xb0
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8019DBA4_00000274
    lwz r12, 0x0(r6)
    mr r3, r6
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_8019DBA4_00000558
lbl_fn_8019DBA4_00000274:
    lwz r0, 0x22c(r28)
    cmpwi r0, 0x227
    bne lbl_fn_8019DBA4_0000036C
    lfs f31, 0x234(r28)
    mr r3, r28
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8019DBA4_000002D4
    li r0, 0x1
    stw r0, 0x34c(r28)
    lfs f0, lbl_80881FBC
    mr r3, r28
    stfs f0, 0x24c(r28)
    li r4, 0x0
    lfs f1, lbl_80881FCC
    li r5, 0x228
    stfs f0, 0x238(r28)
    li r6, 0x1
    lfs f2, lbl_80881FDC
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8019DBA4_000002D4:
    lwz r5, 0x4(r31)
    addi r3, r1, 0x68
    lfs f3, 0xc(r31)
    addi r4, r1, 0x50
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x10(r31)
    lfs f5, 0x6c(r1)
    lfs f2, 0x530(r5)
    fsubs f6, f3, f5
    lfs f4, 0x8(r31)
    fsubs f10, f0, f2
    lfs f3, 0x68(r1)
    lfs f0, lbl_80882008
    fsubs f4, f4, f3
    fmuls f9, f10, f0
    stfs f6, 0x30(r1)
    fmuls f8, f6, f0
    fmuls f7, f4, f0
    stfs f4, 0x2c(r1)
    fadds f6, f9, f2
    fadds f4, f8, f5
    stfs f10, 0x34(r1)
    fadds f0, f7, f3
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    frsp f2, f2
    psq_st f1, 0x528(r5), 0, 0
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x530(r5)
    b lbl_fn_8019DBA4_00000548
lbl_fn_8019DBA4_0000036C:
    lwz r4, 0x18(r3)
    subic. r0, r4, 0x1
    stw r0, 0x18(r3)
    bge lbl_fn_8019DBA4_00000508
    li r0, 0x1e
    stw r0, 0x18(r3)
    li r29, 0x0
    li r30, -0x1
    lwz r0, 0x94(r1)
    lis r8, lbl_807C6B90@ha
    stw r29, 0x78(r1)
    addi r3, r1, 0x78
    clrlwi r0, r0, 4
    addi r8, r8, lbl_807C6B90@l
    stw r29, 0x7c(r1)
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    stw r29, 0x80(r1)
    stw r29, 0x84(r1)
    stw r29, 0x88(r1)
    stw r30, 0x8c(r1)
    stw r0, 0x94(r1)
    stw r30, 0x90(r1)
    lwz r4, 0x20(r31)
    lwz r5, 0x1c(r31)
    bl fn_8003EA3C
    lwz r3, 0x4(r31)
    li r4, 0x0
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    addi r28, r1, 0x5c
    psq_l f1, 0x4(r3), 0, 0
    mr r5, r28
    lfs f6, lbl_80881FCC
    addi r4, r1, 0x78
    psq_st f1, 0x0(r28), 0, 0
    li r8, 0x0
    lfs f5, lbl_8088209C
    fadds f0, f2, f6
    lfs f4, 0x5c(r1)
    li r9, 0x0
    lfs f3, 0x60(r1)
    fadds f4, f4, f6
    stfs f0, 0x64(r1)
    fadds f0, f3, f5
    lwz r3, lbl_8087F048
    stfs f4, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f6, 0x44(r1)
    lwz r6, 0x1c(r31)
    stfs f5, 0x48(r1)
    lwz r7, 0x4(r31)
    stfs f6, 0x4c(r1)
    bl fn_80108C10
    lwz r3, 0x1c(r31)
    li r5, 0x0
    lwz r0, 0x7c(r1)
    li r6, 0x0
    addi r3, r3, 0x7d4
    neg r4, r0
    bl fn_8012DF7C
    lwz r3, 0x1c(r31)
    li r4, 0x0
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    lis r5, lbl_8077EFA8@ha
    psq_l f1, 0x4(r3), 0, 0
    addi r3, r1, 0x98
    psq_st f1, 0x0(r28), 0, 0
    addi r5, r5, lbl_8077EFA8@l
    lfs f6, lbl_80881FCC
    li r4, 0x20
    lfs f5, lbl_8088209C
    lfs f4, 0x5c(r1)
    fadds f0, f2, f6
    lfs f3, 0x60(r1)
    fadds f4, f4, f6
    stfs f6, 0x38(r1)
    fadds f3, f3, f5
    lwz r6, 0x7c(r1)
    stfs f5, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f4, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    crclr 6
    bl fn_806868C4
    stw r29, 0x8(r1)
    li r0, 0x1
    mr r6, r28
    addi r5, r1, 0x98
    stw r29, 0xc(r1)
    li r4, 0x1
    li r7, 0x0
    li r8, 0x0
    stw r0, 0x10(r1)
    li r9, 0x1
    li r10, 0x0
    stw r30, 0x14(r1)
    stw r30, 0x18(r1)
    lwz r3, lbl_8087F8A8
    bl fn_8054D798
lbl_fn_8019DBA4_00000508:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8019DBA4_00000548
    lwz r3, lbl_8087F490
    li r0, 0x1
    li r4, 0x22
    stw r0, 0x728(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_8019DBA4_00000548
    lwz r3, 0x14(r31)
    subi r0, r3, 0x1
    stw r0, 0x14(r31)
lbl_fn_8019DBA4_00000548:
    lwz r0, 0x14(r31)
    li r3, 0x1
    cntlzw r0, r0
    rlwnm r3, r3, r0, 31, 31
lbl_fn_8019DBA4_00000558:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8019DF0C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    lwz r0, 0x14(r4)
    stw r31, 0x10c(r1)
    mr r31, r3
    cmpwi r0, 0x0
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    stw r28, 0x100(r1)
    mr r28, r4
    ble lbl_fn_8019DF0C_000007A4
    lfs f1, lbl_80881FCC
    addi r3, r1, 0xd0
    lfs f0, lbl_80881FE4
    lwz r5, 0x4(r4)
    li r4, 0x79
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x48
    addi r3, r1, 0xd0
    mr r5, r4
    bl fn_805F93C0
    lis r5, lbl_80739F34@ha
    li r3, 0x40
    addi r5, r5, lbl_80739F34@l
    li r4, 0x0
    addi r5, r5, 0x27
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8019DF0C_00000624
    lwz r4, 0x4(r28)
    addi r5, r1, 0x48
    li r6, -0x1
    li r7, 0x0
    bl fn_801AD34C
lbl_fn_8019DF0C_00000624:
    lis r4, lbl_8077DD74@ha
    lwzu r6, lbl_8077DD74@l(r4)
    lwz r7, 0x4(r28)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x10(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0B9
    stw r3, 0x14(r1)
    extsb. r0, r0
    stw r6, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r6, 0xb8(r1)
    stw r5, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r7, 0xc4(r1)
    stw r3, 0xc8(r1)
    bne lbl_fn_8019DF0C_000006A8
    lis r6, lbl_807C7B68@ha
    lis r4, fn_8018F81C@ha
    lis r3, fn_8018F84C@ha
    li r0, 0x1
    addi r3, r3, fn_8018F84C@l
    addi r5, r6, lbl_807C7B68@l
    addi r4, r4, fn_8018F81C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B68@l(r6)
    stb r0, lbl_8087F0B9
lbl_fn_8019DF0C_000006A8:
    lwz r7, 0xb8(r1)
    addi r3, r1, 0x90
    lwz r6, 0xbc(r1)
    lwz r5, 0xc0(r1)
    lwz r4, 0xc4(r1)
    lwz r0, 0xc8(r1)
    stw r7, 0x90(r1)
    stw r6, 0x94(r1)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r0, 0xa0(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8019DF0C_0000077C
    lwz r7, 0x90(r1)
    li r3, 0x14
    lwz r6, 0x94(r1)
    lwz r5, 0x98(r1)
    lwz r4, 0x9c(r1)
    lwz r0, 0xa0(r1)
    stw r7, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019DF0C_00000740
    lis r3, __files@ha
    lis r4, lbl_8077DC48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019DF0C_00000740:
    cmpwi r30, 0x0
    beq lbl_fn_8019DF0C_00000770
    lwz r0, 0x7c(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x80(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x84(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x88(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x8c(r1)
    stw r0, 0x10(r30)
lbl_fn_8019DF0C_00000770:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_8019DF0C_00000780
lbl_fn_8019DF0C_0000077C:
    li r0, 0x0
lbl_fn_8019DF0C_00000780:
    cmpwi r0, 0x0
    beq lbl_fn_8019DF0C_00000798
    lis r3, lbl_807C7B68@ha
    addi r3, r3, lbl_807C7B68@l
    stw r3, 0x0(r31)
    b lbl_fn_8019DF0C_000009AC
lbl_fn_8019DF0C_00000798:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_8019DF0C_000009AC
lbl_fn_8019DF0C_000007A4:
    lis r5, lbl_80739F34@ha
    li r3, 0x8
    addi r5, r5, lbl_80739F34@l
    li r4, 0x0
    addi r5, r5, 0x27
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8019DF0C_00000830
    lwz r7, 0x4(r28)
    lis r4, lbl_8077E058@ha
    stw r7, 0x4(r3)
    addi r4, r4, lbl_8077E058@l
    li r6, 0x83
    li r0, 0x1
    stw r4, 0x0(r3)
    li r4, 0x0
    lfs f0, lbl_80881FBC
    li r5, 0x229
    stw r6, 0x560(r7)
    li r6, 0x0
    lfs f1, lbl_80881FCC
    li r7, 0x0
    lwz r3, 0x4(r3)
    li r8, 0x1
    lfs f2, lbl_80881FDC
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r29)
lbl_fn_8019DF0C_00000830:
    lis r3, lbl_8077DD80@ha
    lwzu r5, lbl_8077DD80@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0C5
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r3, 0xac(r1)
    stw r6, 0xb0(r1)
    stw r30, 0xb4(r1)
    bne lbl_fn_8019DF0C_000008B4
    lis r6, lbl_807C7BC0@ha
    lis r4, fn_8019E358@ha
    lis r3, fn_8019E388@ha
    li r0, 0x1
    addi r3, r3, fn_8019E388@l
    addi r5, r6, lbl_807C7BC0@l
    addi r4, r4, fn_8019E358@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BC0@l(r6)
    stb r0, lbl_8087F0C5
lbl_fn_8019DF0C_000008B4:
    lwz r7, 0xa4(r1)
    addi r3, r1, 0x68
    lwz r6, 0xa8(r1)
    lwz r5, 0xac(r1)
    lwz r4, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r0, 0x78(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8019DF0C_00000988
    lwz r7, 0x68(r1)
    li r3, 0x14
    lwz r6, 0x6c(r1)
    lwz r5, 0x70(r1)
    lwz r4, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019DF0C_0000094C
    lis r3, __files@ha
    lis r4, lbl_8077EE80@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EE80@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019DF0C_0000094C:
    cmpwi r30, 0x0
    beq lbl_fn_8019DF0C_0000097C
    lwz r0, 0x54(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x58(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x5c(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x60(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x64(r1)
    stw r0, 0x10(r30)
lbl_fn_8019DF0C_0000097C:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_8019DF0C_0000098C
lbl_fn_8019DF0C_00000988:
    li r0, 0x0
lbl_fn_8019DF0C_0000098C:
    cmpwi r0, 0x0
    beq lbl_fn_8019DF0C_000009A4
    lis r3, lbl_807C7BC0@ha
    addi r3, r3, lbl_807C7BC0@l
    stw r3, 0x0(r31)
    b lbl_fn_8019DF0C_000009AC
lbl_fn_8019DF0C_000009A4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019DF0C_000009AC:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8019E358(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019E388(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_8019E388_00000A34
    lis r3, lbl_8077DDB0@ha
    addi r3, r3, lbl_8077DDB0@l
    stw r3, 0x0(r4)
    b lbl_fn_8019E388_00000AFC
lbl_fn_8019E388_00000A34:
    cmpwi r5, 0x0
    bne lbl_fn_8019E388_00000AAC
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019E388_00000A74
    lis r3, __files@ha
    lis r4, lbl_8077EE80@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EE80@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019E388_00000A74:
    cmpwi r30, 0x0
    beq lbl_fn_8019E388_00000AA4
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_8019E388_00000AA4:
    stw r30, 0x0(r29)
    b lbl_fn_8019E388_00000AFC
lbl_fn_8019E388_00000AAC:
    cmpwi r5, 0x1
    bne lbl_fn_8019E388_00000AC8
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8019E388_00000AFC
lbl_fn_8019E388_00000AC8:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077DDB0@ha
    lwz r4, lbl_8077DDB0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8019E388_00000AF4
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_8019E388_00000AFC
lbl_fn_8019E388_00000AF4:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019E388_00000AFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019E4A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    lwz r3, 0x4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    extrwi r3, r3, 1, 2
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019E4F4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    psq_l f1, 0x0(r5), 0, 0
    li r8, 0x0
    stw r0, 0x34(r1)
    li r0, 0x85
    lfs f2, 0x8(r5)
    lis r5, lbl_8077DFE0@ha
    stw r31, 0x2c(r1)
    addi r5, r5, lbl_8077DFE0@l
    stw r30, 0x28(r1)
    mr r30, r3
    psq_st f1, 0x10(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x18(r3)
    lfs f2, 0x8(r6)
    psq_st f1, 0x1c(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x24(r3)
    lfs f2, 0x8(r7)
    stw r4, 0x4(r3)
    stw r5, 0x0(r3)
    stw r8, 0x8(r3)
    stw r8, 0xc(r3)
    psq_st f1, 0x34(r3), 0, 0
    stfs f2, 0x3c(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8019E4F4_00000BF4
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8019E4F4_00000BF4:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8019E4F4_00000C08
    bl fn_801539E0
lbl_fn_8019E4F4_00000C08:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8019E4F4_00000C24
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
lbl_fn_8019E4F4_00000C24:
    lfs f3, 0x24(r30)
    addi r31, r1, 0x14
    lfs f0, 0x18(r30)
    addi r5, r1, 0x8
    lfs f5, 0x20(r30)
    mr r3, r31
    fsubs f2, f3, f0
    lfs f4, 0x14(r30)
    lfs f3, 0x1c(r30)
    mr r4, r31
    lfs f0, 0x10(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r31), 0, 0
    li r0, 0x1
    lfs f2, 0x1c(r1)
    li r4, 0x0
    lwz r3, 0x4(r30)
    li r5, 0x3a
    psq_st f1, 0x28(r30), 0, 0
    li r6, 0x0
    addi r31, r3, 0xb0
    lfs f0, lbl_80881FBC
    stfs f2, 0x30(r30)
    mr r3, r31
    lfs f1, lbl_80881FCC
    li r7, 0x0
    stw r0, 0x34c(r31)
    li r8, 0x1
    lfs f2, lbl_80881FDC
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8019E670(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    mr r30, r3
    stw r29, 0x124(r1)
    lwz r0, 0x8(r3)
    lwz r7, 0x4(r3)
    cmpwi r0, 0x0
    addi r31, r7, 0xb0
    bne lbl_fn_8019E670_0000104C
    lfs f0, 0x234(r31)
    addi r4, r1, 0xa4
    lfs f7, lbl_80882068
    addi r5, r1, 0x98
    lfs f5, 0x20(r3)
    addi r6, r1, 0x8c
    fdivs f8, f0, f7
    lfs f4, 0x14(r3)
    lfs f0, 0x1c(r3)
    addi r29, r1, 0x80
    lfs f3, 0x10(r3)
    lfs f6, 0x24(r3)
    fsubs f9, f5, f4
    lfs f5, 0x18(r3)
    fsubs f10, f0, f3
    lfs f0, lbl_80881FD0
    fsubs f11, f6, f5
    stfs f9, 0x78(r1)
    fmuls f9, f9, f8
    stfs f10, 0x74(r1)
    fmuls f6, f10, f8
    fmuls f10, f11, f8
    stfs f11, 0x7c(r1)
    fadds f4, f9, f4
    fadds f3, f6, f3
    stfs f6, 0x68(r1)
    fadds f8, f10, f5
    stfs f3, 0xa4(r1)
    stfs f4, 0xa8(r1)
    fmr f2, f8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r7), 0, 0
    stfs f2, 0x530(r7)
    lfs f3, 0x234(r31)
    lwz r4, 0x4(r3)
    fdivs f11, f3, f7
    lfs f3, 0x3c(r3)
    lfs f7, 0x30(r3)
    lfs f2, 0x53c(r4)
    psq_l f1, 0x534(r4), 0, 0
    lfs f6, 0x38(r3)
    fsubs f30, f3, f7
    lfs f5, 0x2c(r3)
    lfs f4, 0x34(r3)
    lfs f3, 0x28(r3)
    fsubs f31, f6, f5
    fmuls f12, f30, f11
    fsubs f13, f4, f3
    stfs f2, 0xa0(r1)
    fadds f2, f12, f7
    psq_st f1, 0x0(r5), 0, 0
    fmuls f7, f31, f11
    fmuls f6, f13, f11
    stfs f9, 0x6c(r1)
    fadds f4, f7, f5
    stfs f10, 0x70(r1)
    fadds f3, f6, f3
    frsp f5, f2
    stfs f4, 0x90(r1)
    stfs f3, 0x8c(r1)
    fabs f3, f5
    psq_l f1, 0x0(r6), 0, 0
    stfs f8, 0xac(r1)
    frsp f3, f3
    stfs f13, 0x5c(r1)
    fcmpo cr0, f3, f0
    stfs f31, 0x60(r1)
    stfs f30, 0x64(r1)
    stfs f6, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f12, 0x58(r1)
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x88(r1)
    bge lbl_fn_8019E670_00000E74
    lfs f3, 0x80(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019E670_00000E68
    lfs f0, lbl_80881FD4
    b lbl_fn_8019E670_00000E6C
lbl_fn_8019E670_00000E68:
    lfs f0, lbl_80881FD8
lbl_fn_8019E670_00000E6C:
    stfs f0, 0x48(r1)
    b lbl_fn_8019E670_00000E88
lbl_fn_8019E670_00000E74:
    fmr f2, f5
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8019E670_00000E88:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f31, 0xb8(r1)
    mr r5, r4
    lfs f30, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f13, 0xb0(r1)
    lfs f12, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f10, 0xc0(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f7, 0xd0(r1)
    lfs f6, 0xdc(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xbc(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x88(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0xe0(r1)
    stfs f30, 0xe4(r1)
    stfs f31, 0xe8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f12, 0xf8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xec(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8019E670_00000FA4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019E670_00000F94
    lfs f0, lbl_80881FD4
    b lbl_fn_8019E670_00000F98
lbl_fn_8019E670_00000F94:
    lfs f0, lbl_80881FD8
lbl_fn_8019E670_00000F98:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8019E670_00000FB8
lbl_fn_8019E670_00000FA4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8019E670_00000FB8:
    addi r3, r1, 0x44
    lfs f3, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x98
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f3
    lwz r4, 0x4(r30)
    lfs f0, 0x84(r1)
    stfs f0, 0x9c(r1)
    lfs f0, lbl_80882068
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x88(r1)
    lfs f2, 0xa0(r1)
    stfs f2, 0x53c(r4)
    lfs f4, 0x234(r31)
    stfs f3, 0x4c(r1)
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8019E670_00001134
    li r0, 0x1
    stw r0, 0x8(r30)
    fmr f1, f3
    lfs f0, lbl_80881FBC
    stw r0, 0x34c(r31)
    mr r3, r31
    lfs f2, lbl_80881FDC
    li r4, 0x0
    stfs f0, 0x24c(r31)
    li r5, 0x22a
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r31)
    b lbl_fn_8019E670_00001134
lbl_fn_8019E670_0000104C:
    cmpwi r0, 0x1
    bne lbl_fn_8019E670_000010FC
    lwz r3, lbl_8087F490
    li r0, 0x1
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x738(r3)
    lwz r3, lbl_8087EF70
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8019E670_00001084
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
lbl_fn_8019E670_00001084:
    lwz r5, 0x4(r30)
    mr r3, r31
    lfs f2, 0x24(r30)
    li r4, 0x0
    psq_l f1, 0x1c(r30), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lfs f30, 0x234(r31)
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8019E670_00001134
    li r0, 0x2
    stw r0, 0x8(r30)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    stw r0, 0x34c(r31)
    mr r3, r31
    lfs f1, lbl_80881FCC
    li r4, 0x0
    stfs f0, 0x24c(r31)
    li r5, 0x22b
    lfs f2, lbl_80881FDC
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r31)
    b lbl_fn_8019E670_00001134
lbl_fn_8019E670_000010FC:
    cmpwi r0, 0x2
    bne lbl_fn_8019E670_00001134
    lwz r3, lbl_8087F490
    li r0, 0x1
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x738(r3)
    lwz r3, lbl_8087EF70
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8019E670_00001134
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
lbl_fn_8019E670_00001134:
    psq_l f31, 0x148(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_8019EAF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x4(r4)
    lis r4, lbl_80739F34@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80739F34@l
    addi r4, r4, 0x35
    stw r31, 0xc(r1)
    addi r31, r5, 0xb0
    li r5, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8019EAF0_000011AC
    li r3, 0x0
    b lbl_fn_8019EAF0_000011B8
lbl_fn_8019EAF0_000011AC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_8019EAF0_000011B8:
    lfs f2, 0x1c(r3)
    lfs f0, lbl_8088209C
    lfs f1, 0x2c(r3)
    lfs f3, 0xc(r3)
    fsubs f0, f2, f0
    stfs f3, 0x0(r30)
    stfs f1, 0x8(r30)
    stfs f0, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019EB7C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8077DF68@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8077DF68@l
    lfs f2, 0x8(r5)
    li r0, 0x86
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r4, 0x4(r30)
    addi r6, r1, 0x8
    lfs f0, 0x10(r30)
    li r0, 0x1
    lfs f3, 0x530(r4)
    addi r31, r4, 0xb0
    lfs f5, 0x52c(r4)
    mr r3, r31
    fsubs f6, f3, f0
    lfs f4, 0xc(r30)
    lfs f3, 0x528(r4)
    li r4, 0x0
    lfs f0, 0x8(r30)
    fsubs f4, f5, f4
    fsubs f3, f3, f0
    stfs f4, 0xc(r1)
    fmr f2, f6
    lfs f0, lbl_80881FBC
    stfs f3, 0x8(r1)
    li r5, 0x22c
    psq_l f1, 0x0(r6), 0, 0
    li r6, 0x0
    psq_st f1, 0x14(r30), 0, 0
    li r7, 0x0
    lfs f1, lbl_80881FCC
    li r8, 0x1
    stfs f2, 0x1c(r30)
    lfs f2, lbl_80881FDC
    stw r0, 0x34c(r31)
    stfs f6, 0x10(r1)
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019EC68(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    stw r30, 0x128(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f30, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fdivs f4, f30, f1
    lfs f0, lbl_808820F4
    lfs f3, lbl_8087DA00
    addi r3, r1, 0xf0
    li r4, 0x79
    fsubs f0, f0, f3
    fmr f31, f1
    fmadds f1, f4, f0, f3
    bl fn_805F8E70
    psq_l f1, 0x14(r30), 0, 0
    addi r4, r1, 0x5c
    lfs f2, 0x1c(r30)
    mr r5, r4
    stfs f2, 0x64(r1)
    addi r3, r1, 0xf0
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F93C0
    lfs f5, 0x10(r30)
    addi r3, r1, 0x50
    lfs f0, 0x64(r1)
    addi r31, r1, 0x68
    lfs f4, 0xc(r30)
    fadds f6, f5, f0
    lfs f0, 0x60(r1)
    lfs f3, 0x8(r30)
    fadds f7, f4, f0
    lfs f0, 0x5c(r1)
    fsubs f2, f5, f6
    fadds f5, f3, f0
    lfs f0, lbl_80881FD0
    fsubs f4, f4, f7
    stfs f5, 0x74(r1)
    fsubs f3, f3, f5
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    stfs f7, 0x78(r1)
    frsp f3, f3
    stfs f6, 0x7c(r1)
    fcmpo cr0, f3, f0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x70(r1)
    bge lbl_fn_8019EC68_00001404
    lfs f3, 0x68(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019EC68_000013F8
    lfs f0, lbl_80881FD4
    b lbl_fn_8019EC68_000013FC
lbl_fn_8019EC68_000013F8:
    lfs f0, lbl_80881FD8
lbl_fn_8019EC68_000013FC:
    stfs f0, 0x48(r1)
    b lbl_fn_8019EC68_00001418
lbl_fn_8019EC68_00001404:
    fmr f2, f4
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8019EC68_00001418:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f28, 0x88(r1)
    mr r5, r4
    lfs f29, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f29, 0xb4(r1)
    stfs f28, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8019EC68_00001534
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019EC68_00001524
    lfs f0, lbl_80881FD4
    b lbl_fn_8019EC68_00001528
lbl_fn_8019EC68_00001524:
    lfs f0, lbl_80881FD8
lbl_fn_8019EC68_00001528:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8019EC68_00001548
lbl_fn_8019EC68_00001534:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8019EC68_00001548:
    lfs f0, lbl_80881FCC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x74
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    lwz r5, 0x4(r30)
    addi r4, r1, 0x68
    psq_l f1, 0x0(r3), 0, 0
    fcmpo cr0, f30, f31
    psq_st f1, 0x528(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    lfs f2, 0x7c(r1)
    stfs f2, 0x530(r5)
    lfs f2, 0x70(r1)
    lwz r3, 0x4(r30)
    stfs f0, 0x4c(r1)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    cror eq, gt, eq
    bne lbl_fn_8019EC68_000015A8
    li r3, 0x1
    b lbl_fn_8019EC68_000015AC
lbl_fn_8019EC68_000015A8:
    li r3, 0x0
lbl_fn_8019EC68_000015AC:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8019EF70(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r5, 0x4(r4)
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    addi r31, r5, 0xb0
    stw r30, 0x38(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x34(r1)
    mr r29, r3
    mr r3, r31
    lfs f30, 0x2e4(r5)
    bl fn_80097D7C
    lis r4, lbl_80739F34@ha
    fmr f31, f1
    addi r4, r4, lbl_80739F34@l
    mr r3, r31
    addi r4, r4, 0x35
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8019EF70_00001658
    li r4, 0x0
    b lbl_fn_8019EF70_00001664
lbl_fn_8019EF70_00001658:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r4, r3, r0
lbl_fn_8019EF70_00001664:
    fdivs f0, f30, f31
    lfs f4, 0x1c(r4)
    lfs f3, lbl_8088209C
    addi r3, r1, 0x20
    lfs f6, 0x2c(r4)
    lfs f7, 0xc(r4)
    fsubs f5, f4, f3
    stfs f7, 0x0(r29)
    lwz r4, 0x4(r30)
    stfs f6, 0x8(r29)
    stfs f5, 0x4(r29)
    lfs f3, 0x530(r4)
    lfs f4, 0x52c(r4)
    fsubs f8, f3, f6
    lfs f3, 0x528(r4)
    fsubs f10, f4, f5
    fsubs f3, f3, f7
    stfs f8, 0x1c(r1)
    fmuls f9, f8, f0
    fmuls f8, f10, f0
    stfs f3, 0x14(r1)
    fmuls f4, f3, f0
    fadds f2, f9, f6
    stfs f10, 0x18(r1)
    fadds f3, f8, f5
    fadds f0, f4, f7
    stfs f2, 0x8(r29)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x64(r1)
    stfs f4, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f2, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8019F0A8(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lis r7, lbl_8077DEF0@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x104(r1)
    addi r7, r7, lbl_8077DEF0@l
    lfs f2, 0x8(r5)
    li r0, 0x87
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8(r6)
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8019F0A8_0000179C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8019F0A8_0000179C:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8019F0A8_000017B0
    bl fn_801539E0
lbl_fn_8019F0A8_000017B0:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8019F0A8_000017CC
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
lbl_fn_8019F0A8_000017CC:
    lfs f2, 0x1c(r31)
    addi r30, r1, 0x50
    psq_l f1, 0x14(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881FD0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8019F0A8_00001818
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019F0A8_0000180C
    lfs f0, lbl_80881FD4
    b lbl_fn_8019F0A8_00001810
lbl_fn_8019F0A8_0000180C:
    lfs f0, lbl_80881FD8
lbl_fn_8019F0A8_00001810:
    stfs f0, 0x48(r1)
    b lbl_fn_8019F0A8_0000182C
lbl_fn_8019F0A8_00001818:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8019F0A8_0000182C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
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
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
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
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8019F0A8_00001948
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019F0A8_00001938
    lfs f0, lbl_80881FD4
    b lbl_fn_8019F0A8_0000193C
lbl_fn_8019F0A8_00001938:
    lfs f0, lbl_80881FD8
lbl_fn_8019F0A8_0000193C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8019F0A8_0000195C
lbl_fn_8019F0A8_00001948:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8019F0A8_0000195C:
    lfs f3, lbl_80881FCC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    lwz r3, 0x4(r31)
    psq_st f1, 0x0(r30), 0, 0
    li r4, 0x0
    lfs f0, lbl_80881FBC
    li r5, 0x22d
    stfs f2, 0x58(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r3), 0, 0
    li r8, 0x1
    stfs f2, 0x53c(r3)
    lwz r3, 0x4(r31)
    lfs f2, 0x10(r31)
    psq_l f1, 0x8(r31), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    fmr f1, f3
    stfs f2, 0x530(r3)
    lfs f2, lbl_80881FDC
    lwz r3, 0x4(r31)
    stfs f3, 0x4c(r1)
    addi r30, r3, 0xb0
    stw r0, 0x3fc(r3)
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r31
    stfs f0, 0x238(r30)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}
