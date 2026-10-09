#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_8004D388(void);
extern void fn_80084320(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_800A08D4(void);
extern void fn_8011BF3C(void);
extern void fn_8012A288(void);
extern void fn_8012B0B0(void);
extern void fn_8012B3A8(void);
extern void fn_8012DB04(void);
extern void fn_80176548(void);
extern void fn_80178208(void);
extern void fn_801B3E70(void);
extern void fn_801C0C70(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F99F0(void);
extern void fn_805F9AB0(void);
extern void fn_80682428(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_8075FCA0[];
extern u8 lbl_8075FCA8[];
extern u8 lbl_8075FE30[];
extern u8 lbl_80766768[];
extern u8 lbl_807956D0[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_80887F40;
extern u32 lbl_80887F50;
extern u32 lbl_80887F58;
extern u32 lbl_80887F5C;
extern u32 lbl_80887F60;
extern u32 lbl_80887F64;
extern u32 lbl_80887F68;
extern u32 lbl_80887F6C;
extern u32 lbl_80887F70;
extern u32 lbl_80887F74;
extern u32 lbl_80887F78;
extern u32 lbl_80887F9C;
extern u32 lbl_80887FA0;
extern u32 lbl_80887FA4;
extern u32 lbl_80887FA8;
extern u32 lbl_80887FAC;
extern u32 lbl_80887FB0;
extern u32 lbl_80887FB4;
extern u32 lbl_80887FB8;
extern u32 lbl_80887FBC;
extern u32 lbl_80887FC0;
extern u32 lbl_80887FC4;
extern u32 lbl_80887FC8;
extern u32 lbl_80887FCC;
extern u32 lbl_80887FD0;
extern u32 lbl_80887FD4;
extern u32 lbl_80887FD8;
extern u32 lbl_80887FDC;
extern u32 lbl_80887FE0;
extern u32 lbl_80887FE4;
extern u32 lbl_80887FE8;
extern u32 lbl_80887FEC;
extern u32 lbl_80887FF0;
extern u32 lbl_80887FF4;
extern u32 lbl_80887FF8;
extern u32 lbl_80887FFC;
extern u32 lbl_80888000;

/* Function declarations */
void fn_8056795C(void);
void fn_8056796C(void);
void fn_805682DC(void);
void fn_805686F4(void);
void fn_805688D0(void);
void fn_80568B9C(void);
void fn_80568DF0(void);
void fn_80568E6C(void);
void fn_80568EE4(void);
void fn_80568F14(void);

asm void fn_8056795C(void)
{
    nofralloc
    lfs f0, 0x568(r3)
    li r5, 0x0
    fmuls f2, f0, f2
    b fn_8056796C
}

asm void fn_8056796C(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lfs f3, 0x4(r4)
    lis r4, lbl_8075FCA0@ha
    stw r0, 0x664(r1)
    addi r6, r1, 0xd0
    stfd f31, 0x650(r1)
    psq_st f31, 0x658(r1), 0, 0
    stfd f30, 0x640(r1)
    psq_st f30, 0x648(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x630(r1)
    psq_st f29, 0x638(r1), 0, 0
    fmr f29, f1
    stw r31, 0x62c(r1)
    stw r30, 0x628(r1)
    mr r30, r5
    stw r29, 0x624(r1)
    mr r29, r3
    stw r28, 0x620(r1)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0xd8(r1)
    psq_st f1, 0x0(r6), 0, 0
    addi r6, r1, 0xc4
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x53c(r3)
    lfs f0, 0xc8(r1)
    stfs f2, 0xcc(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8075FCA0@l(r4)
    bl fn_8068AEA8
    frsp f0, f1
    lfs f3, lbl_80887F68
    fcmpo cr0, f0, f3
    ble lbl_fn_8056796C_000000AC
    lfs f3, lbl_80887F9C
    fsubs f0, f0, f3
lbl_fn_8056796C_000000AC:
    lfs f3, lbl_80887FA0
    fcmpo cr0, f0, f3
    bge lbl_fn_8056796C_000000C0
    lfs f3, lbl_80887F9C
    fadds f0, f0, f3
lbl_fn_8056796C_000000C0:
    lfs f3, lbl_80887F68
    lwz r3, lbl_8087EFA8
    fdivs f3, f0, f3
    lfs f4, 0x570(r29)
    lfs f31, 0x3a4(r3)
    lfs f6, lbl_80887FAC
    lfs f5, lbl_80887F60
    lfs f9, 0x56c(r29)
    fabs f7, f3
    lfs f3, lbl_80887FB0
    lfs f8, 0xc8(r1)
    fmuls f30, f30, f31
    fmuls f4, f4, f3
    lfs f3, lbl_80887FB4
    frsp f7, f7
    stfs f4, 0x570(r29)
    fcmpo cr0, f4, f3
    fmuls f3, f7, f6
    fadds f3, f5, f3
    fmuls f9, f9, f3
    fmuls f3, f0, f9
    fadds f8, f8, f3
    stfs f8, 0xc8(r1)
    bge lbl_fn_8056796C_00000128
    lfs f3, lbl_80887F40
    stfs f3, 0x570(r29)
lbl_fn_8056796C_00000128:
    lfs f3, lbl_80887F60
    fcmpo cr0, f29, f3
    ble lbl_fn_8056796C_00000138
    fmr f29, f3
lbl_fn_8056796C_00000138:
    lfs f3, lbl_80887F5C
    fcmpo cr0, f29, f3
    ble lbl_fn_8056796C_000001BC
    fsubs f6, f29, f3
    lfs f5, lbl_80887FB8
    lfs f4, 0x570(r29)
    lfs f3, lbl_80887FC0
    fdivs f29, f6, f5
    lfs f5, lbl_80887FBC
    fcmpo cr0, f4, f3
    fmuls f29, f29, f30
    bge lbl_fn_8056796C_0000016C
    lfs f5, lbl_80887F40
lbl_fn_8056796C_0000016C:
    lfs f4, lbl_80887F68
    lfs f3, lbl_80887F40
    fdivs f4, f0, f4
    fabs f4, f4
    frsp f4, f4
    fsubs f7, f4, f5
    fcmpo cr0, f7, f3
    bge lbl_fn_8056796C_00000190
    fmr f7, f3
lbl_fn_8056796C_00000190:
    lfs f6, lbl_80887F60
    lfs f4, lbl_80887FC4
    fsubs f5, f6, f5
    lfs f3, lbl_80887F40
    fdivs f7, f7, f5
    fnmsubs f4, f4, f7, f6
    fmuls f29, f29, f4
    fcmpo cr0, f29, f3
    bge lbl_fn_8056796C_000001C0
    fmr f29, f3
    b lbl_fn_8056796C_000001C0
lbl_fn_8056796C_000001BC:
    lfs f29, lbl_80887F40
lbl_fn_8056796C_000001C0:
    lfs f3, lbl_80887FC8
    lfs f4, lbl_80887F5C
    fmuls f6, f3, f0
    lfs f5, 0x580(r29)
    lfs f3, lbl_80887FBC
    fmuls f4, f4, f5
    lfs f0, lbl_80887FB4
    fmsubs f3, f3, f6, f4
    fadds f3, f5, f3
    stfs f3, 0x580(r29)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056796C_00000200
    lfs f0, lbl_80887F40
    stfs f0, 0x580(r29)
lbl_fn_8056796C_00000200:
    lfs f3, lbl_80887FD0
    mr r3, r29
    lfs f4, 0x570(r29)
    lfs f0, lbl_80887FCC
    fmuls f3, f3, f4
    fmsubs f0, f0, f29, f3
    fadds f0, f4, f0
    stfs f0, 0x570(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lfs f3, 0x574(r29)
    lfs f4, lbl_80887F74
    lfs f0, 0x57c(r29)
    fmuls f3, f3, f4
    lfs f1, 0xc8(r1)
    fmuls f0, f0, f4
    stfs f3, 0x574(r29)
    stfs f0, 0x57c(r29)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x570(r29)
    lfs f0, lbl_80887F40
    lfs f1, 0xc8(r1)
    fmuls f3, f3, f4
    stfs f0, 0xbc(r1)
    stfs f3, 0xb8(r1)
    bl fn_8068A850
    frsp f0, f1
    lfs f6, 0x570(r29)
    lfs f4, 0xb8(r1)
    lfs f3, 0xbc(r1)
    fmuls f5, f6, f0
    lfs f0, lbl_80887F60
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    fmuls f5, f5, f31
    stfs f4, 0xb8(r1)
    fcmpo cr0, f6, f0
    stfs f3, 0xbc(r1)
    stfs f5, 0xc0(r1)
    ble lbl_fn_8056796C_000002C8
    lfs f0, lbl_80887FD4
    fmuls f4, f4, f0
    fmuls f3, f3, f0
    fmuls f0, f5, f0
    stfs f4, 0xb8(r1)
    stfs f3, 0xbc(r1)
    stfs f0, 0xc0(r1)
lbl_fn_8056796C_000002C8:
    addi r3, r1, 0x1d0
    bl fn_8012B0B0
    lwz r0, 0x354(r1)
    addi r3, r1, 0x1d0
    li r4, -0x1
    clrlwi r6, r0, 31
    subfic r5, r6, 0x1
    subi r0, r6, 0x1
    or r0, r5, r0
    srwi r28, r0, 31
    bl fn_8012B3A8
    cmpwi r28, 0x0
    beq lbl_fn_8056796C_0000033C
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x610(r1)
    lis r3, lbl_8075FCA8@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_8075FCA8@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80887FD8
    lfs f0, 0x578(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x614(r1)
    lfd f4, 0x610(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fmadds f0, f31, f3, f0
    stfs f0, 0x578(r29)
lbl_fn_8056796C_0000033C:
    lfs f3, 0xb8(r1)
    addi r3, r29, 0x6b8
    lfs f0, 0x6b8(r29)
    lfs f6, 0xbc(r1)
    fadds f0, f3, f0
    lfs f4, 0xc0(r1)
    lfs f5, lbl_80887F6C
    stfs f0, 0xb8(r1)
    lfs f0, lbl_80887F40
    lfs f3, 0x6bc(r29)
    fadds f3, f6, f3
    stfs f3, 0xbc(r1)
    lfs f3, 0x6c0(r29)
    fadds f3, f4, f3
    stfs f3, 0xc0(r1)
    lfs f4, 0x6b8(r29)
    lfs f3, 0x6c0(r29)
    fmuls f4, f4, f5
    stfs f0, 0x6bc(r29)
    fmuls f0, f3, f5
    stfs f4, 0x6b8(r29)
    stfs f0, 0x6c0(r29)
    bl fn_805F9940
    lfs f0, lbl_80887F58
    fcmpo cr0, f1, f0
    bge lbl_fn_8056796C_000003B4
    lfs f0, lbl_80887F40
    stfs f0, 0x6b8(r29)
    stfs f0, 0x6bc(r29)
    stfs f0, 0x6c0(r29)
lbl_fn_8056796C_000003B4:
    lfs f3, 0xb8(r1)
    lfs f0, 0x574(r29)
    lfs f5, 0xbc(r1)
    fadds f3, f3, f0
    lfs f0, lbl_80887FDC
    lfs f4, 0xc0(r1)
    stfs f3, 0xb8(r1)
    lfs f3, 0x578(r29)
    fadds f3, f5, f3
    stfs f3, 0xbc(r1)
    fcmpo cr0, f3, f0
    lfs f3, 0x57c(r29)
    fadds f3, f4, f3
    stfs f3, 0xc0(r1)
    bge lbl_fn_8056796C_000003F4
    stfs f0, 0xbc(r1)
lbl_fn_8056796C_000003F4:
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8056796C_00000498
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80887FE0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8056796C_00000498
    lfs f3, lbl_80887F40
    addi r3, r1, 0x150
    lfs f0, lbl_80887FE4
    li r4, 0x79
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0xac
    addi r3, r1, 0x150
    mr r5, r4
    bl fn_805F93C0
    addi r3, r29, 0x7d4
    bl fn_8012DB04
    lfs f4, 0xb4(r1)
    lfs f3, 0xb0(r1)
    fmuls f5, f4, f1
    lfs f0, 0xac(r1)
    fmuls f6, f3, f1
    lfs f3, 0xbc(r1)
    fmuls f7, f0, f1
    lfs f4, 0xb8(r1)
    lfs f0, 0xc0(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x74(r1)
    fadds f0, f0, f5
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0xb8(r1)
    stfs f3, 0xbc(r1)
    stfs f0, 0xc0(r1)
lbl_fn_8056796C_00000498:
    addi r5, r1, 0xd0
    li r0, 0x0
    lfs f2, 0xd8(r1)
    addi r3, r1, 0xa0
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r29
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x90
    li r31, 0x1
    stfs f2, 0xa8(r1)
    stw r0, 0x1b4(r1)
    stw r0, 0x1b8(r1)
    stw r0, 0x1bc(r1)
    stw r0, 0x1c0(r1)
    bl fn_80176548
    lwz r4, 0x48(r29)
    neg r0, r30
    or r3, r0, r30
    cmpwi r4, 0x0
    lis r0, 0x8000
    srawi r3, r3, 31
    and r7, r0, r3
    bne lbl_fn_8056796C_000004FC
    ori r7, r7, 0x20
    b lbl_fn_8056796C_00000518
lbl_fn_8056796C_000004FC:
    cmpwi r4, 0x3
    bne lbl_fn_8056796C_0000050C
    ori r7, r7, 0x40
    b lbl_fn_8056796C_00000518
lbl_fn_8056796C_0000050C:
    cmpwi r4, 0x2
    bne lbl_fn_8056796C_00000518
    ori r7, r7, 0x80
lbl_fn_8056796C_00000518:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x180
    lfs f1, 0x9c(r1)
    addi r5, r1, 0x90
    addi r6, r1, 0xb8
    addi r8, r29, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r5, r1, 0x190
    lfs f2, 0x198(r1)
    addi r4, r1, 0xd0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r3, 0x0
    lfs f0, 0x9c(r1)
    stfs f2, 0xd8(r1)
    lfs f5, 0xd0(r1)
    lfs f3, 0x5a4(r29)
    lfs f4, 0xd4(r1)
    fsubs f3, f5, f3
    stfs f3, 0xd0(r1)
    lfs f3, 0x5a8(r29)
    fsubs f3, f4, f3
    stfs f3, 0xd4(r1)
    fsubs f5, f3, f0
    lfs f0, 0x5ac(r29)
    fsubs f0, f2, f0
    stfs f5, 0xd4(r1)
    stfs f0, 0xd8(r1)
    beq lbl_fn_8056796C_000005B8
    lfs f0, 0xbc(r1)
    lfs f4, 0xa4(r1)
    fneg f3, f0
    lfs f0, lbl_80887FE8
    fsubs f4, f4, f5
    fmuls f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_8056796C_000005B8
    lfs f0, lbl_80887F40
    stfs f0, 0xbc(r1)
lbl_fn_8056796C_000005B8:
    lwz r4, 0x1b4(r1)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8056796C_000005D8
    lwz r0, 0x0(r4)
    cmplwi r0, 0x1a
    bne lbl_fn_8056796C_000005D8
    li r3, 0x1
lbl_fn_8056796C_000005D8:
    lwz r0, 0x12a4(r29)
    rlwimi r0, r3, 3, 28, 28
    stw r0, 0x12a4(r29)
    addi r3, r1, 0x80
    lfs f3, 0xa8(r1)
    lfs f5, 0xd8(r1)
    lfs f4, 0xd4(r1)
    fsubs f5, f5, f3
    lfs f0, 0xa4(r1)
    lfs f3, 0xc0(r1)
    fsubs f6, f4, f0
    lfs f0, 0xbc(r1)
    fadds f7, f3, f5
    lfs f4, 0xd0(r1)
    lfs f3, 0xa0(r1)
    fadds f8, f0, f6
    lfs f0, 0xb8(r1)
    fsubs f3, f4, f3
    stfs f6, 0x6c(r1)
    lfs f30, lbl_80887F40
    stfs f3, 0x68(r1)
    fadds f0, f0, f3
    stfs f5, 0x70(r1)
    stfs f0, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    bl fn_805F9920
    lfs f0, lbl_80887FB4
    fcmpo cr0, f1, f0
    ble lbl_fn_8056796C_0000086C
    fcmpo cr0, f29, f0
    ble lbl_fn_8056796C_0000086C
    addi r3, r1, 0x80
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x88(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r28, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80887FA4
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8056796C_000006C8
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_8056796C_000006BC
    lfs f0, lbl_80887F64
    b lbl_fn_8056796C_000006C0
lbl_fn_8056796C_000006BC:
    lfs f0, lbl_80887FA8
lbl_fn_8056796C_000006C0:
    stfs f0, 0x48(r1)
    b lbl_fn_8056796C_000006DC
lbl_fn_8056796C_000006C8:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8056796C_000006DC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xe0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0x38
    lfs f30, 0xe8(r1)
    mr r5, r4
    lfs f29, 0xe4(r1)
    addi r3, r1, 0x110
    lfs f13, 0xe0(r1)
    lfs f12, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f10, 0xf0(r1)
    lfs f9, 0x108(r1)
    lfs f8, 0x104(r1)
    lfs f7, 0x100(r1)
    lfs f6, 0x10c(r1)
    lfs f5, 0xfc(r1)
    lfs f4, 0xec(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x110(r1)
    stfs f29, 0x114(r1)
    stfs f30, 0x118(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f12, 0x128(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x11c(r1)
    stfs f5, 0x12c(r1)
    stfs f6, 0x13c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056796C_000007F8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_8056796C_000007E8
    lfs f0, lbl_80887F64
    b lbl_fn_8056796C_000007EC
lbl_fn_8056796C_000007E8:
    lfs f0, lbl_80887FA8
lbl_fn_8056796C_000007EC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8056796C_0000080C
lbl_fn_8056796C_000007F8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8056796C_0000080C:
    addi r3, r1, 0x44
    lfs f4, lbl_80887F40
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8075FCA0@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r29)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8075FCA0@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f30, f1
    lfs f0, lbl_80887F68
    fcmpo cr0, f30, f0
    ble lbl_fn_8056796C_00000858
    lfs f0, lbl_80887F9C
    fsubs f30, f30, f0
lbl_fn_8056796C_00000858:
    lfs f0, lbl_80887FA0
    fcmpo cr0, f30, f0
    bge lbl_fn_8056796C_0000086C
    lfs f0, lbl_80887F9C
    fadds f30, f30, f0
lbl_fn_8056796C_0000086C:
    lfs f0, lbl_80887FD4
    lfs f4, lbl_80887FC0
    fmuls f30, f30, f0
    lfs f3, 0x584(r29)
    lfs f0, lbl_80887FEC
    fnmsubs f3, f4, f30, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056796C_00000890
    b lbl_fn_8056796C_00000894
lbl_fn_8056796C_00000890:
    fmr f3, f0
lbl_fn_8056796C_00000894:
    lfs f4, lbl_80887FF0
    fcmpo cr0, f3, f4
    ble lbl_fn_8056796C_000008C0
    lfs f4, lbl_80887FC0
    lfs f3, 0x584(r29)
    lfs f0, lbl_80887FEC
    fnmsubs f4, f4, f30, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_8056796C_000008BC
    b lbl_fn_8056796C_000008C0
lbl_fn_8056796C_000008BC:
    fmr f4, f0
lbl_fn_8056796C_000008C0:
    frsp f3, f4
    lfs f0, lbl_80887FF4
    lwz r0, 0x54c(r29)
    fmuls f0, f3, f0
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    stfs f0, 0x584(r29)
    bne lbl_fn_8056796C_000008F4
    lfs f3, 0xd4(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    bge lbl_fn_8056796C_000008F4
    stfs f0, 0xd4(r1)
lbl_fn_8056796C_000008F4:
    addi r3, r1, 0xd0
    lfs f2, 0xd8(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r31, 0x0
    psq_st f1, 0x528(r29), 0, 0
    stfs f2, 0x530(r29)
    beq lbl_fn_8056796C_00000924
    addi r3, r1, 0xc4
    lfs f2, 0xcc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
lbl_fn_8056796C_00000924:
    lfs f2, 0xc0(r1)
    addi r3, r1, 0xb8
    psq_l f1, 0x0(r3), 0, 0
    fdivs f0, f2, f31
    psq_st f1, 0x574(r29), 0, 0
    lfs f3, 0x574(r29)
    stfs f0, 0x57c(r29)
    fdivs f0, f3, f31
    stfs f0, 0x574(r29)
    psq_l f31, 0x658(r1), 0, 0
    lfd f31, 0x650(r1)
    psq_l f30, 0x648(r1), 0, 0
    lfd f30, 0x640(r1)
    psq_l f29, 0x638(r1), 0, 0
    lfd f29, 0x630(r1)
    lwz r31, 0x62c(r1)
    lwz r30, 0x628(r1)
    lwz r29, 0x624(r1)
    lwz r28, 0x620(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_805682DC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_805682DC_00000D64
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_805682DC_00000A58
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805682DC_000009F8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_805682DC_00000A14
lbl_fn_805682DC_000009F8:
    lis r5, lbl_807956D0@ha
    lwzu r4, lbl_807956D0@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_805682DC_00000A14:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x14
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_805682DC_00000A58
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805682DC_00000D64
lbl_fn_805682DC_00000A58:
    lwz r3, 0x55c(r31)
    cmpwi r3, 0x9
    beq lbl_fn_805682DC_00000D64
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_805682DC_00000A74
    b lbl_fn_805682DC_00000D64
lbl_fn_805682DC_00000A74:
    cmpwi r3, 0x2
    bne lbl_fn_805682DC_00000A9C
    lha r3, 0xd3a(r31)
    subi r0, r3, 0x14
    clrlwi r0, r0, 16
    cmplwi r0, 0x2
    bgt lbl_fn_805682DC_00000A9C
    lhz r0, 0xd38(r31)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_805682DC_00000D64
lbl_fn_805682DC_00000A9C:
    lwz r5, lbl_8087EFA8
    addi r3, r31, 0xb0
    lwz r4, 0x488(r31)
    lfs f29, 0x3a4(r5)
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_805682DC_00000AC0
    bl fn_800A08D4
    b lbl_fn_805682DC_00000AC4
lbl_fn_805682DC_00000AC0:
    lfs f1, lbl_80887F50
lbl_fn_805682DC_00000AC4:
    lfs f0, lbl_80887F40
    fcmpu cr0, f0, f1
    lwz r4, 0x490(r31)
    addi r3, r31, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_805682DC_00000AE8
    bl fn_800A08D4
    b lbl_fn_805682DC_00000AEC
lbl_fn_805682DC_00000AE8:
    lfs f1, lbl_80887F50
lbl_fn_805682DC_00000AEC:
    lfs f0, lbl_80887F40
    fcmpu cr0, f0, f1
    lfs f0, 0x570(r31)
    lfs f2, 0x500(r31)
    fdivs f1, f0, f29
    lfs f0, 0x508(r31)
    fcmpo cr0, f1, f2
    bge lbl_fn_805682DC_00000B1C
    fdivs f31, f1, f2
    lfs f30, lbl_80887F60
    lfs f29, lbl_80887F40
    b lbl_fn_805682DC_00000B5C
lbl_fn_805682DC_00000B1C:
    fcmpo cr0, f1, f0
    bge lbl_fn_805682DC_00000B40
    fsubs f1, f1, f2
    lfs f31, lbl_80887F60
    fsubs f0, f0, f2
    lfs f29, lbl_80887F40
    fdivs f0, f1, f0
    fadds f30, f31, f0
    b lbl_fn_805682DC_00000B5C
lbl_fn_805682DC_00000B40:
    fdivs f1, f1, f0
    lfs f2, lbl_80887F60
    lfs f0, lbl_80887F58
    lfs f31, lbl_80887FD4
    lfs f30, lbl_80887F40
    fsubs f1, f1, f2
    fmadds f29, f0, f1, f2
lbl_fn_805682DC_00000B5C:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x10c(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80887FF8
    fcmpo cr0, f1, f0
    ble lbl_fn_805682DC_00000C54
    lfs f0, lbl_80887FC0
    li r0, 0x1
    lfs f1, lbl_80887F60
    fcmpo cr0, f31, f0
    stw r0, 0x3fc(r31)
    stfs f1, 0x2fc(r31)
    bge lbl_fn_805682DC_00000BF0
    lwz r5, 0x484(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80887F40
    li r4, 0x0
    lfs f2, lbl_80887F58
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80887F60
    stfs f0, 0x2e8(r31)
    b lbl_fn_805682DC_00000D64
lbl_fn_805682DC_00000BF0:
    lfs f0, lbl_80887FC4
    fcmpo cr0, f31, f0
    bge lbl_fn_805682DC_00000C28
    lwz r5, 0x488(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80887F40
    li r4, 0x0
    lfs f2, lbl_80887F58
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f30, 0x2e8(r31)
    b lbl_fn_805682DC_00000D64
lbl_fn_805682DC_00000C28:
    lwz r5, 0x490(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80887F40
    li r4, 0x0
    lfs f2, lbl_80887F58
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f29, 0x2e8(r31)
    b lbl_fn_805682DC_00000D64
lbl_fn_805682DC_00000C54:
    lfs f1, lbl_80887F60
    li r0, 0x3
    lfs f0, lbl_80887F40
    fsubs f28, f1, f31
    stw r0, 0x3fc(r31)
    fcmpo cr0, f28, f0
    bge lbl_fn_805682DC_00000C78
    fmr f28, f0
    b lbl_fn_805682DC_00000C84
lbl_fn_805682DC_00000C78:
    fcmpo cr0, f28, f1
    ble lbl_fn_805682DC_00000C84
    fmr f28, f1
lbl_fn_805682DC_00000C84:
    lwz r5, 0x484(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80887F40
    li r4, 0x0
    lfs f2, lbl_80887F58
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f2, lbl_80887F60
    stfs f28, 0x2fc(r31)
    fsubs f1, f2, f31
    lfs f0, lbl_80887F40
    stfs f2, 0x2e8(r31)
    fabs f1, f1
    frsp f1, f1
    fsubs f28, f2, f1
    fcmpo cr0, f28, f0
    bge lbl_fn_805682DC_00000CD8
    fmr f28, f0
    b lbl_fn_805682DC_00000CE4
lbl_fn_805682DC_00000CD8:
    fcmpo cr0, f28, f2
    ble lbl_fn_805682DC_00000CE4
    fmr f28, f2
lbl_fn_805682DC_00000CE4:
    lwz r5, 0x488(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80887F40
    li r4, 0x1
    lfs f2, lbl_80887F58
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80887F60
    lfs f0, lbl_80887F40
    fsubs f31, f31, f1
    stfs f30, 0x318(r31)
    stfs f28, 0x32c(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_805682DC_00000D2C
    fmr f31, f0
    b lbl_fn_805682DC_00000D38
lbl_fn_805682DC_00000D2C:
    fcmpo cr0, f31, f1
    ble lbl_fn_805682DC_00000D38
    fmr f31, f1
lbl_fn_805682DC_00000D38:
    lwz r5, 0x490(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80887F40
    li r4, 0x2
    lfs f2, lbl_80887F58
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f29, 0x348(r31)
    stfs f31, 0x35c(r31)
lbl_fn_805682DC_00000D64:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_805686F4(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    bl _savegpr_22
    lis r24, lbl_8075FE30@ha
    lfs f28, lbl_80887FC8
    lfs f29, lbl_80887F60
    mr r27, r3
    lfs f30, lbl_80887F40
    mr r28, r4
    lfs f31, lbl_80887FF4
    mr r29, r5
    addi r23, r1, 0x50
    addi r24, r24, lbl_8075FE30@l
    addi r31, r1, 0x40
    li r30, 0x0
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_805686F4_00000F34
lbl_fn_805686F4_00000E08:
    lwz r3, 0x21c(r27)
    addi r4, r24, 0x9
    lwz r3, 0x48(r3)
    lwzx r3, r3, r25
    lwz r22, 0x10(r3)
    mr r3, r22
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805686F4_00000E98
    lwz r0, 0x648(r27)
    cmpwi r0, 0x0
    bne lbl_fn_805686F4_00000F28
    add r5, r28, r26
    addi r3, r1, 0x30
    psq_l f1, 0x10(r5), 0, 0
    addi r4, r1, 0x14
    psq_l f2, 0x18(r5), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    lfs f3, 0x584(r27)
    lfs f0, 0x580(r27)
    fnmsubs f1, f28, f3, f0
    stfs f29, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f30, 0x1c(r1)
    bl fn_805F9AB0
    mr r4, r23
    mr r5, r23
    addi r3, r1, 0x30
    bl fn_805F99F0
    psq_l f2, 0x8(r23), 0, 0
    add r3, r28, r26
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    b lbl_fn_805686F4_00000F28
lbl_fn_805686F4_00000E98:
    mr r3, r22
    addi r4, r24, 0x28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805686F4_00000F28
    lwz r0, 0x648(r27)
    cmpwi r0, 0x0
    bne lbl_fn_805686F4_00000F28
    lwz r3, 0x12a4(r27)
    srwi. r0, r3, 31
    bne lbl_fn_805686F4_00000F28
    extrwi. r0, r3, 1, 25
    bne lbl_fn_805686F4_00000F28
    add r5, r28, r26
    addi r3, r1, 0x20
    psq_l f1, 0x10(r5), 0, 0
    addi r4, r1, 0x8
    psq_l f2, 0x18(r5), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f3, 0x580(r27)
    lfs f0, 0x584(r27)
    fmadds f1, f31, f3, f0
    stfs f29, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f30, 0x10(r1)
    bl fn_805F9AB0
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x20
    bl fn_805F99F0
    psq_l f2, 0x8(r31), 0, 0
    add r3, r28, r26
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_st f2, 0x18(r3), 0, 0
lbl_fn_805686F4_00000F28:
    addi r30, r30, 0x1
    addi r26, r26, 0x2c
    addi r25, r25, 0x4
lbl_fn_805686F4_00000F34:
    cmpw r30, r29
    blt lbl_fn_805686F4_00000E08
    addi r11, r1, 0x90
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    bl _restgpr_22
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_805688D0(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stw r31, 0x1bc(r1)
    stw r30, 0x1b8(r1)
    mr r30, r5
    stw r29, 0x1b4(r1)
    mr r29, r4
    stw r28, 0x1b0(r1)
    mr r28, r3
    addi r3, r3, 0x10d8
    bl fn_8012A288
    cmpwi r3, 0x0
    bne lbl_fn_805688D0_00001220
    lwz r30, 0x10(r30)
    lis r31, lbl_8075FE30@ha
    addi r31, r31, lbl_8075FE30@l
    mr r3, r30
    addi r4, r31, 0x9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805688D0_00001048
    lwz r0, 0x648(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805688D0_00001220
    lfs f9, 0x2c(r29)
    addi r3, r1, 0x180
    lfs f10, 0x1c(r29)
    li r4, 0x79
    lfs f0, lbl_80887F40
    lfs f11, 0xc(r29)
    stfs f0, 0x1c(r29)
    lfs f8, lbl_80887FC8
    stfs f0, 0xc(r29)
    stfs f0, 0x2c(r29)
    lfs f7, 0x584(r28)
    lfs f0, 0x580(r28)
    stfs f11, 0x20(r1)
    fnmsubs f1, f8, f7, f0
    stfs f10, 0x24(r1)
    stfs f9, 0x28(r1)
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x180
    bl fn_805F89F0
    lfs f8, 0x20(r1)
    lfs f7, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f8, 0xc(r29)
    stfs f7, 0x1c(r29)
    stfs f0, 0x2c(r29)
    b lbl_fn_805688D0_00001220
lbl_fn_805688D0_00001048:
    mr r3, r30
    addi r4, r31, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805688D0_00001220
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x8
    beq lbl_fn_805688D0_00001220
    lfs f10, 0x2c(r29)
    addi r31, r1, 0x150
    lfs f9, lbl_80887F40
    lfs f11, 0x1c(r29)
    lfs f12, 0xc(r29)
    stfs f9, 0x1c(r29)
    lfs f8, lbl_80887F58
    stfs f9, 0xc(r29)
    lfs f0, lbl_80887F60
    stfs f9, 0x2c(r29)
    lfs f7, 0x14b4(r28)
    stfs f12, 0x14(r1)
    fmuls f1, f8, f7
    stfs f11, 0x18(r1)
    fcmpu cr0, f9, f1
    stfs f10, 0x1c(r1)
    stfs f9, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f9, 0x17c(r1)
    stfs f9, 0x174(r1)
    stfs f9, 0x170(r1)
    stfs f9, 0x16c(r1)
    stfs f9, 0x168(r1)
    stfs f9, 0x160(r1)
    stfs f9, 0x15c(r1)
    stfs f9, 0x158(r1)
    stfs f9, 0x154(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x150(r1)
    beq lbl_fn_805688D0_00001138
    addi r3, r1, 0xf0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xf0
    addi r5, r1, 0x120
    bl fn_805F89F0
    addi r3, r1, 0x120
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_805688D0_00001138:
    lfs f0, lbl_80887F40
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_805688D0_00001198
    addi r3, r1, 0x90
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x90
    addi r5, r1, 0xc0
    bl fn_805F89F0
    addi r3, r1, 0xc0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_805688D0_00001198:
    lfs f0, lbl_80887F40
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_805688D0_000011F8
    addi r3, r1, 0x30
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x30
    addi r5, r1, 0x60
    bl fn_805F89F0
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_805688D0_000011F8:
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x150
    bl fn_805F89F0
    lfs f8, 0x14(r1)
    lfs f7, 0x18(r1)
    lfs f0, 0x1c(r1)
    stfs f8, 0xc(r29)
    stfs f7, 0x1c(r29)
    stfs f0, 0x2c(r29)
lbl_fn_805688D0_00001220:
    lwz r0, 0x1c4(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    lwz r29, 0x1b4(r1)
    lwz r28, 0x1b0(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80568B9C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    lfs f7, 0x5b0(r3)
    extrwi. r0, r0, 1, 18
    stfs f7, 0x620(r3)
    beq lbl_fn_80568B9C_000012D0
    lwz r0, 0x648(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80568B9C_00001290
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80568B9C_000012D0
    lfs f0, lbl_80887FD4
    fadds f0, f7, f0
    stfs f0, 0x620(r3)
    b lbl_fn_80568B9C_000012D0
lbl_fn_80568B9C_00001290:
    lfs f6, lbl_80887FD4
    lfs f5, 0x500(r3)
    lfs f3, 0x570(r3)
    fmuls f0, f6, f5
    fcmpo cr0, f3, f0
    ble lbl_fn_80568B9C_000012D0
    lfs f0, lbl_80887FFC
    lfs f4, 0x508(r3)
    fmuls f0, f0, f5
    fcmpo cr0, f4, f0
    ble lbl_fn_80568B9C_000012D0
    fnmsubs f3, f6, f5, f3
    fnmsubs f0, f6, f5, f4
    fdivs f0, f3, f0
    fmadds f0, f6, f0, f7
    stfs f0, 0x620(r3)
lbl_fn_80568B9C_000012D0:
    lfs f5, 0x52c(r3)
    lis r4, lbl_8075FE30@ha
    lfs f4, 0x5a8(r3)
    addi r4, r4, lbl_8075FE30@l
    lfs f3, 0x528(r3)
    addi r6, r1, 0x20
    lfs f0, 0x5a4(r3)
    fadds f4, f5, f4
    lfs f8, 0x530(r3)
    addi r4, r4, 0x2e
    fadds f0, f3, f0
    stfs f4, 0x24(r1)
    lfs f3, 0x620(r3)
    stfs f0, 0x20(r1)
    li r5, 0x0
    lfs f0, lbl_80887FC4
    psq_l f1, 0x0(r6), 0, 0
    fmuls f5, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f0, 0x52c(r3)
    lfs f3, 0x618(r3)
    fadds f7, f0, f5
    lfs f4, 0x530(r3)
    fadds f0, f3, f5
    lfs f3, 0x5ac(r3)
    lfs f6, 0x528(r3)
    fadds f2, f4, f3
    stfs f5, 0x620(r3)
    stfs f0, 0x618(r3)
    stfs f2, 0x61c(r3)
    addi r3, r3, 0xb0
    stfs f2, 0x28(r1)
    stfs f6, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    bl fn_80092814
    cmpwi r3, -0x1
    ble lbl_fn_80568B9C_000013B4
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    addi r5, r1, 0x14
    lfs f0, lbl_80887F60
    addi r4, r1, 0x2c
    add r3, r3, r0
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x14(r1)
    lfs f2, 0x2c(r3)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x30(r1)
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f2, 0x34(r1)
    stfs f0, 0x30(r1)
    b lbl_fn_80568B9C_000013E8
lbl_fn_80568B9C_000013B4:
    addi r4, r1, 0x38
    lfs f2, 0x40(r1)
    addi r3, r1, 0x2c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f5, lbl_80887FD4
    lfs f4, 0x620(r31)
    lfs f3, 0x5b4(r31)
    lfs f0, 0x30(r1)
    fnmsubs f3, f5, f4, f3
    stfs f2, 0x34(r1)
    fadds f0, f0, f3
    stfs f0, 0x30(r1)
lbl_fn_80568B9C_000013E8:
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x2c
    psq_st f1, 0x5f4(r31), 0, 0
    lis r3, lbl_8075FE30@ha
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r3, lbl_8075FE30@l
    lfs f0, 0x620(r31)
    addi r4, r3, 0x9
    stfs f2, 0x5fc(r31)
    addi r3, r31, 0xb0
    lfs f2, 0x34(r1)
    li r5, 0x0
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f0, 0x60c(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80568B9C_00001440
    li r5, 0x0
    b lbl_fn_80568B9C_0000144C
lbl_fn_80568B9C_00001440:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80568B9C_0000144C:
    lfs f3, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f4, 0xc(r5)
    addi r3, r31, 0x148c
    lfs f2, 0x2c(r5)
    lfs f0, lbl_80887F78
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1494(r31)
    stfs f0, 0x1498(r31)
    lwz r31, 0x4c(r1)
    lwz r0, 0x54(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80568DF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8075FE30@ha
    li r7, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8075FE30@l
    addi r5, r5, 0x33
    stw r31, 0xc(r1)
    mr r31, r4
    mr r6, r5
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x30
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80568DF0_000014F0
    lfs f1, lbl_80888000
    mr r4, r30
    mr r5, r31
    bl fn_801C0C70
    mr r4, r3
lbl_fn_80568DF0_000014F0:
    mr r3, r30
    bl fn_80178208
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80568E6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8075FE30@ha
    li r7, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8075FE30@l
    addi r5, r5, 0x33
    stw r31, 0xc(r1)
    mr r31, r4
    mr r6, r5
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x34
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80568E6C_00001568
    mr r4, r30
    mr r5, r31
    bl fn_801B3E70
    mr r4, r3
lbl_fn_80568E6C_00001568:
    mr r3, r30
    bl fn_80178208
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80568EE4(void)
{
    nofralloc
    lwz r4, 0xd14(r3)
    cmpwi r4, 0x0
    ble lbl_fn_80568EE4_0000159C
    subi r0, r4, 0x1
    stw r0, 0xd14(r3)
lbl_fn_80568EE4_0000159C:
    lwz r0, 0xd14(r3)
    cmpwi r0, 0x0
    bgtlr
    lhz r0, 0xd38(r3)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r3)
    blr
}

asm void fn_80568F14(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    lfs f0, lbl_80887FC0
    stw r0, 0x1e4(r1)
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stw r31, 0x1bc(r1)
    stw r30, 0x1b8(r1)
    mr r30, r5
    li r5, 0x0
    stw r29, 0x1b4(r1)
    mr r29, r3
    addi r3, r1, 0xb0
    stfs f0, 0x0(r4)
    addi r4, r29, 0xc58
    bl fn_8011BF3C
    lfs f3, 0xb8(r1)
    addi r3, r1, 0xbc
    lfs f0, 0x530(r29)
    addi r31, r1, 0xa4
    lfs f5, 0xb4(r1)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0xb0(r1)
    fsubs f4, f5, f4
    lfs f0, 0x528(r29)
    stfs f2, 0xc4(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80887FA4
    stfs f4, 0xc0(r1)
    frsp f4, f2
    stfs f3, 0xbc(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80568F14_00001680
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80568F14_00001674
    lfs f0, lbl_80887F64
    b lbl_fn_80568F14_00001678
lbl_fn_80568F14_00001674:
    lfs f0, lbl_80887FA8
lbl_fn_80568F14_00001678:
    stfs f0, 0x90(r1)
    b lbl_fn_80568F14_00001694
lbl_fn_80568F14_00001680:
    fmr f2, f4
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80568F14_00001694:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0x80
    lfs f30, 0x140(r1)
    mr r5, r4
    lfs f31, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f13, 0x138(r1)
    lfs f12, 0x150(r1)
    lfs f11, 0x14c(r1)
    lfs f10, 0x148(r1)
    lfs f9, 0x160(r1)
    lfs f8, 0x15c(r1)
    lfs f7, 0x158(r1)
    lfs f6, 0x164(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x144(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x168(r1)
    stfs f31, 0x16c(r1)
    stfs f30, 0x170(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80568F14_000017B0
    lfs f3, 0x84(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80568F14_000017A0
    lfs f0, lbl_80887F64
    b lbl_fn_80568F14_000017A4
lbl_fn_80568F14_000017A0:
    lfs f0, lbl_80887FA8
lbl_fn_80568F14_000017A4:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80568F14_000017C4
lbl_fn_80568F14_000017B0:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80568F14_000017C4:
    lfs f4, lbl_80887F40
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8075FCA0@ha
    fmr f2, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xac(r1)
    frsp f2, f2
    lfs f3, 0x4(r30)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r30)
    lfd f2, lbl_8075FCA0@l(r3)
    lfs f0, 0x538(r29)
    stfs f4, 0x94(r1)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80887F68
    fcmpo cr0, f3, f0
    ble lbl_fn_80568F14_0000181C
    lfs f0, lbl_80887F9C
    fsubs f3, f3, f0
lbl_fn_80568F14_0000181C:
    lfs f0, lbl_80887FA0
    fcmpo cr0, f3, f0
    bge lbl_fn_80568F14_00001830
    lfs f0, lbl_80887F9C
    fadds f3, f3, f0
lbl_fn_80568F14_00001830:
    fabs f3, f3
    lfs f0, lbl_80887F70
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_80568F14_00001A00
    lfs f2, 0xc4(r1)
    addi r3, r1, 0xbc
    lfs f0, lbl_80887FA4
    addi r31, r1, 0x98
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80568F14_00001894
    lfs f3, 0x98(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80568F14_00001888
    lfs f0, lbl_80887F64
    b lbl_fn_80568F14_0000188C
lbl_fn_80568F14_00001888:
    lfs f0, lbl_80887FA8
lbl_fn_80568F14_0000188C:
    stfs f0, 0x48(r1)
    b lbl_fn_80568F14_000018A8
lbl_fn_80568F14_00001894:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80568F14_000018A8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887F40
    addi r4, r1, 0x38
    lfs f31, 0xd0(r1)
    mr r5, r4
    lfs f30, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80887F60
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0xf8(r1)
    stfs f30, 0xfc(r1)
    stfs f31, 0x100(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80887FA4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80568F14_000019C4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80887F40
    fcmpo cr0, f3, f0
    ble lbl_fn_80568F14_000019B4
    lfs f0, lbl_80887F64
    b lbl_fn_80568F14_000019B8
lbl_fn_80568F14_000019B4:
    lfs f0, lbl_80887FA8
lbl_fn_80568F14_000019B8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80568F14_000019D8
lbl_fn_80568F14_000019C4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80568F14_000019D8:
    lfs f2, lbl_80887F40
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    b lbl_fn_80568F14_00001A10
lbl_fn_80568F14_00001A00:
    psq_l f1, 0x534(r29), 0, 0
    lfs f2, 0x53c(r29)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
lbl_fn_80568F14_00001A10:
    lwz r0, 0xd1c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80568F14_00001A48
    lwz r3, 0xd14(r29)
    cmpwi r3, 0x0
    ble lbl_fn_80568F14_00001A30
    subi r0, r3, 0x1
    stw r0, 0xd14(r29)
lbl_fn_80568F14_00001A30:
    lwz r0, 0xd14(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_80568F14_00001A48
    lhz r0, 0xd38(r29)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r29)
lbl_fn_80568F14_00001A48:
    lwz r0, 0x1e4(r1)
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    lwz r29, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}
