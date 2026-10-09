#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005DF90(void);
extern void fn_80075DEC(void);
extern void fn_80075F58(void);
extern void fn_800761A8(void);
extern void fn_800763FC(void);
extern void fn_80076760(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A96AC(void);
extern void fn_800B0A70(void);
extern void fn_800B23C4(void);
extern void fn_800B257C(void);
extern void fn_800BDB58(void);
extern void fn_800BFB70(void);
extern void fn_800BFCB4(void);
extern void fn_800C0508(void);
extern void fn_800C1424(void);
extern void fn_805F8C50(void);
extern void fn_805F8CA0(void);
extern void fn_805F9160(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614190(void);
extern void fn_80614790(void);
extern void fn_806149C0(void);
extern void fn_80614A00(void);
extern void fn_80614A40(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615190(void);
extern void fn_80615560(void);
extern void fn_80615B60(void);
extern void fn_80615C40(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806167B0(void);
extern void fn_80616EF0(void);
extern void fn_80617030(void);
extern void fn_80617130(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617270(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176A0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80618350(void);
extern void fn_806183A0(void);
extern void fn_80618400(void);
extern void fn_80618420(void);
extern void fn_80680CF8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80732CE8[];
extern u8 lbl_80778EF8[];

/* Small data declarations */
extern u32 lbl_8087D878;
extern u32 lbl_8087D87C;
extern u32 lbl_8087D880;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880E60;
extern u32 lbl_80880E6C;
extern u32 lbl_80880E70;
extern u32 lbl_80880E74;
extern u32 lbl_80880E78;
extern u32 lbl_80880E84;
extern u32 lbl_80880E88;
extern u32 lbl_80880E8C;
extern u32 lbl_80880E90;
extern u32 lbl_80880E94;
extern u32 lbl_80880E98;
extern u32 lbl_80880E9C;
extern u32 lbl_80880EA0;
extern u32 lbl_80880EA4;
extern u32 lbl_80880EA8;
extern u32 lbl_80880EAC;
extern u32 lbl_80880EB0;
extern u32 lbl_80880EB4;
extern u32 lbl_80880EB8;
extern u32 lbl_80880EBC;
extern u32 lbl_80880EC0;
extern u32 lbl_80880EC8;
extern u32 lbl_80880ECC;
extern u32 lbl_80880ED0;
extern u32 lbl_80880ED4;
extern u32 lbl_80880ED8;
extern u32 lbl_80880EDC;
extern u32 lbl_80880EE0;
extern u32 lbl_80880EE4;
extern u32 lbl_80880EE8;
extern u32 lbl_80880EEC;
extern u32 lbl_80880EF0;
extern u32 lbl_80880EF4;
extern u32 lbl_80880EF8;

/* Function declarations */
void fn_800B0CD4(void);
void fn_800B105C(void);
void fn_800B1554(void);
void fn_800B1598(void);
void fn_800B1B28(void);
void fn_800B1BAC(void);
void fn_800B1C1C(void);
void fn_800B1C30(void);
void fn_800B1C44(void);
void fn_800B2180(void);

asm void fn_800B0CD4(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    bl fn_806167B0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r4, 0x54(r31)
    addi r3, r1, 0x8
    lfs f2, 0x58(r31)
    lfs f0, 0xc(r4)
    psq_l f1, 0x14(r4), 0, 0
    fadds f0, f2, f0
    lfs f3, 0x5c(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f0, 0x58(r31)
    lfs f0, 0xc(r1)
    lfs f2, 0x10(r4)
    fadds f2, f3, f2
    stfs f2, 0x5c(r31)
    fcmpo cr0, f2, f0
    ble lbl_fn_800B0CD4_000000D8
    fsubs f0, f2, f0
    stfs f0, 0x5c(r31)
lbl_fn_800B0CD4_000000D8:
    lfs f2, 0x58(r31)
    lfs f0, 0x8(r1)
    fcmpo cr0, f2, f0
    ble lbl_fn_800B0CD4_000000F0
    fsubs f0, f2, f0
    stfs f0, 0x58(r31)
lbl_fn_800B0CD4_000000F0:
    lfs f2, 0xc(r1)
    addi r3, r1, 0xa0
    lfs f1, 0x8(r1)
    lfs f3, lbl_80880E60
    stfs f1, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f3, 0x18(r1)
    bl fn_805F9160
    lfs f3, 0x5c(r31)
    addi r3, r1, 0xa0
    lfs f2, 0x58(r31)
    li r4, 0x1e
    lfs f0, lbl_80880E6C
    li r5, 0x1
    stfs f2, 0xac(r1)
    stfs f3, 0xbc(r1)
    stfs f0, 0xcc(r1)
    bl fn_80618420
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x7
    li r5, 0x5
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    lwz r3, lbl_8087EEE0
    addi r4, r31, 0xb8
    li r5, 0x0
    bl fn_800763FC
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x3
    bl fn_80617D50
    lwz r3, 0x54(r31)
    lfs f6, lbl_80880E60
    lfs f3, 0x20(r3)
    lfs f0, 0x1c(r3)
    fctiwz f3, f3
    lfs f2, 0x24(r3)
    fctiwz f4, f0
    lfs f0, 0x28(r3)
    stfd f3, 0xd8(r1)
    fctiwz f2, f2
    stfd f4, 0xd0(r1)
    fctiwz f0, f0
    lfs f7, 0x20(r31)
    lfs f3, 0x2c(r3)
    lfs f5, 0x30(r3)
    fmuls f8, f7, f3
    lfs f3, 0x38(r3)
    lfs f4, 0x34(r3)
    fmuls f5, f7, f5
    stfd f2, 0xe0(r1)
    fmuls f3, f7, f3
    fmuls f2, f7, f4
    stfd f0, 0xe8(r1)
    lwz r3, lbl_8087EEE0
    stfs f6, 0x60(r1)
    lwz r4, 0xd4(r1)
    stfs f6, 0x64(r1)
    lwz r5, 0xdc(r1)
    stfs f6, 0x68(r1)
    lwz r6, 0xe4(r1)
    stfs f8, 0x6c(r1)
    lwz r7, 0xec(r1)
    stfs f6, 0x70(r1)
    stfs f6, 0x74(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f6, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f6, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f6, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f6, 0x98(r1)
    stfs f3, 0x9c(r1)
    bl fn_80075F58
    lwz r3, lbl_8087EEE0
    addi r4, r1, 0x50
    lfs f1, lbl_80880E6C
    addi r5, r1, 0x40
    lwz r9, 0x40(r3)
    addi r6, r1, 0x30
    lwz r8, 0x3c(r3)
    fmr f2, f1
    lfs f28, 0x90(r1)
    addi r7, r1, 0x20
    lfs f29, 0x94(r1)
    lfs f30, 0x98(r1)
    lfs f31, 0x9c(r1)
    lfs f13, 0x80(r1)
    lfs f12, 0x84(r1)
    lfs f11, 0x88(r1)
    lfs f10, 0x8c(r1)
    lfs f9, 0x70(r1)
    lfs f8, 0x74(r1)
    lfs f7, 0x78(r1)
    lfs f6, 0x7c(r1)
    lfs f5, 0x60(r1)
    lfs f4, 0x64(r1)
    lfs f3, 0x68(r1)
    lfs f0, 0x6c(r1)
    stfs f28, 0x20(r1)
    lwz r3, lbl_8087EFB4
    stfs f29, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f11, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f4, 0x54(r1)
    stfs f3, 0x58(r1)
    stfs f0, 0x5c(r1)
    bl fn_800BFCB4
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    lwz r31, 0xfc(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_800B105C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    lwz r0, 0x4(r3)
    mr r31, r3
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_800B105C_000003BC
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B105C_000003C0
lbl_fn_800B105C_000003BC:
    li r4, 0x1
lbl_fn_800B105C_000003C0:
    cmpwi r4, 0x0
    beq lbl_fn_800B105C_00000868
    lwz r4, lbl_8087EEE0
    li r6, 0x1
    lwz r3, lbl_8087EF8C
    lwz r29, 0x3c(r4)
    lwz r28, 0x40(r4)
    srawi r27, r29, 1
    mr r4, r29
    mr r5, r28
    srawi r26, r28, 1
    bl fn_800A96AC
    mr r25, r3
    addi r3, r31, 0x60
    mr r4, r25
    clrlwi r5, r27, 16
    clrlwi r6, r26, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880E6C
    addi r3, r31, 0x60
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    bl fn_80614190
    li r0, 0x7f
    stb r0, 0xc(r1)
    lis r30, 0x100
    addi r3, r1, 0x14
    stb r0, 0xd(r1)
    subi r4, r30, 0x1
    stb r0, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x14(r1)
    bl fn_80615190
    lwz r3, lbl_8087EFB4
    li r4, 0x1
    bl fn_800C0508
    lwz r5, lbl_8087EEE0
    addi r3, r1, 0x10
    subi r4, r30, 0x1
    lwz r0, 0x48(r5)
    stb r0, 0xa(r1)
    extrwi r6, r0, 8, 8
    extrwi r5, r0, 8, 16
    srwi r0, r0, 24
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80615190
    mr r3, r31
    bl fn_800B0CD4
    mr r3, r31
    bl fn_800B0A70
    clrlslwi r5, r27, 17, 1
    clrlslwi r6, r26, 17, 1
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r27, 16
    clrlwi r4, r26, 16
    li r5, 0x28
    li r6, 0x1
    bl fn_80614D30
    mr r3, r25
    li r4, 0x1
    bl fn_80615560
    bl fn_80614190
    bl fn_806167B0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80617200
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x21
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lfs f1, lbl_80880E6C
    addi r3, r1, 0x38
    lfs f0, lbl_80880E60
    li r4, 0x21
    stfs f1, 0x64(r1)
    li r5, 0x1
    stfs f1, 0x5c(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    bl fn_80618420
    addi r3, r1, 0x38
    li r4, 0x1e
    li r5, 0x1
    bl fn_80618420
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl fn_80617130
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    lwz r4, lbl_8087EFB4
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    addi r4, r31, 0x60
    li r5, 0x1
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    li r7, 0x1
    bl fn_80617270
    lfs f0, lbl_80880E6C
    li r6, 0x0
    lfs f8, lbl_80880E60
    li r7, 0x1
    stfs f8, 0x20(r1)
    li r0, 0x2
    lfs f5, lbl_80880E88
    stfs f0, 0x24(r1)
    lfs f7, lbl_80880E84
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_fn_800B105C_000006BC:
    lfs f0, 0x20(r1)
    addi r4, r1, 0x20
    stfs f0, 0x18(r1)
    li r8, 0x0
    mtctr r0
lbl_fn_800B105C_000006D0:
    frsp f0, f0
    lfs f1, 0x0(r4)
    fcmpo cr0, f0, f1
    bge lbl_fn_800B105C_000006E8
    mr r3, r4
    b lbl_fn_800B105C_000006EC
lbl_fn_800B105C_000006E8:
    addi r3, r1, 0x18
lbl_fn_800B105C_000006EC:
    lfs f0, 0x0(r3)
    addi r5, r4, 0x4
    stfs f0, 0x18(r1)
    lfs f1, 0x4(r4)
    fcmpo cr0, f0, f1
    bge lbl_fn_800B105C_0000070C
    mr r3, r5
    b lbl_fn_800B105C_00000710
lbl_fn_800B105C_0000070C:
    addi r3, r1, 0x18
lbl_fn_800B105C_00000710:
    lfs f0, 0x0(r3)
    stfs f0, 0x18(r1)
    lfsu f1, 0x4(r5)
    fcmpo cr0, f0, f1
    bge lbl_fn_800B105C_0000072C
    mr r3, r5
    b lbl_fn_800B105C_00000730
lbl_fn_800B105C_0000072C:
    addi r3, r1, 0x18
lbl_fn_800B105C_00000730:
    lfs f0, 0x0(r3)
    addi r4, r4, 0xc
    stfs f0, 0x18(r1)
    bdnz lbl_fn_800B105C_000006D0
    fcmpo cr0, f0, f8
    cror eq, gt, eq
    beq lbl_fn_800B105C_00000754
    fcmpo cr0, f0, f7
    bge lbl_fn_800B105C_000007B0
lbl_fn_800B105C_00000754:
    lfs f6, 0x20(r1)
    cmpwi r7, 0x0
    lfs f3, 0x24(r1)
    li r8, 0x1
    fmuls f4, f6, f5
    lfs f1, 0x28(r1)
    fmuls f2, f3, f5
    lfs f6, 0x2c(r1)
    fmuls f0, f1, f5
    stfs f4, 0x20(r1)
    fmuls f4, f6, f5
    lfs f3, 0x30(r1)
    stfs f2, 0x24(r1)
    fmuls f2, f3, f5
    lfs f1, 0x34(r1)
    stfs f0, 0x28(r1)
    fmuls f0, f1, f5
    stfs f4, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    bne lbl_fn_800B105C_000007AC
    addi r6, r6, 0x1
lbl_fn_800B105C_000007AC:
    li r7, 0x0
lbl_fn_800B105C_000007B0:
    cmpwi r8, 0x0
    bne lbl_fn_800B105C_000006BC
    addi r4, r1, 0x20
    extsb r5, r6
    li r3, 0x1
    bl fn_80616EF0
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFA8
    lwz r0, 0x2b0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800B105C_00000808
    lwz r0, 0x2c0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B105C_00000868
lbl_fn_800B105C_00000808:
    lis r3, 0x4330
    xoris r4, r29, 0x8000
    stw r4, 0x6c(r1)
    lis r6, lbl_80732CE8@ha
    xoris r0, r28, 0x8000
    lfd f6, lbl_80732CE8@l(r6)
    stw r3, 0x68(r1)
    addi r5, r31, 0x60
    lfs f1, lbl_80880E8C
    li r4, -0x1
    lfd f0, 0x68(r1)
    li r6, 0x0
    stw r3, 0x70(r1)
    fmr f2, f1
    fsubs f3, f0, f6
    lfs f5, lbl_80880E90
    stw r0, 0x74(r1)
    lwz r3, lbl_8087EEB0
    lfd f0, 0x70(r1)
    fdivs f4, f3, f5
    lfs f3, lbl_80880E6C
    fsubs f0, f0, f6
    fdivs f5, f0, f5
    bl fn_8005DF90
lbl_fn_800B105C_00000868:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_800B1554(void)
{
    nofralloc
    lfs f0, lbl_80880E6C
    li r7, 0x0
    stfs f0, 0x10(r3)
    li r6, 0x0
    li r5, 0x0
    stfs f0, 0xc(r3)
    stfs f0, 0x20(r3)
    b lbl_fn_800B1554_000008B4
lbl_fn_800B1554_000008A0:
    lwz r0, 0x84(r3)
    addi r7, r7, 0x1
    add r4, r0, r6
    addi r6, r6, 0x1c
    stw r5, 0x18(r4)
lbl_fn_800B1554_000008B4:
    lwz r0, 0x80(r3)
    cmplw r7, r0
    blt lbl_fn_800B1554_000008A0
    blr
}

asm void fn_800B1598(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x30
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stfd f28, 0x70(r1)
    psq_st f28, 0x78(r1), 0, 0
    stfd f27, 0x60(r1)
    psq_st f27, 0x68(r1), 0, 0
    stfd f26, 0x50(r1)
    psq_st f26, 0x58(r1), 0, 0
    stfd f25, 0x40(r1)
    psq_st f25, 0x48(r1), 0, 0
    stfd f24, 0x30(r1)
    psq_st f24, 0x38(r1), 0, 0
    bl _savegpr_27
    mr r27, r3
    lwz r4, lbl_8087EFA8
    lwz r3, lbl_8087EFB4
    lis r5, 0x4330
    addi r0, r4, 0x2ac
    stw r5, 0x8(r1)
    stw r0, 0x14(r27)
    lwz r4, lbl_8087EFA8
    stw r5, 0x10(r1)
    addi r0, r4, 0x2bc
    stw r0, 0x54(r27)
    bl fn_800C1424
    lwz r0, 0x1e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B1598_0000095C
    addi r0, r3, 0x1e4
    stw r0, 0x14(r27)
lbl_fn_800B1598_0000095C:
    lwz r0, 0x1f4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B1598_00000970
    addi r0, r3, 0x1f8
    stw r0, 0x54(r27)
lbl_fn_800B1598_00000970:
    lwz r3, 0x14(r27)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800B1598_00000988
    lfs f3, 0x8(r3)
    b lbl_fn_800B1598_0000098C
lbl_fn_800B1598_00000988:
    lfs f3, lbl_80880E6C
lbl_fn_800B1598_0000098C:
    cmpwi r4, 0x0
    beq lbl_fn_800B1598_0000099C
    lfs f4, 0xc(r3)
    b lbl_fn_800B1598_000009A0
lbl_fn_800B1598_0000099C:
    lfs f4, lbl_80880E6C
lbl_fn_800B1598_000009A0:
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_fn_800B1598_000009B4
    stw r4, 0x4(r27)
    b lbl_fn_800B1598_000009D4
lbl_fn_800B1598_000009B4:
    cmpwi r4, 0x0
    bne lbl_fn_800B1598_000009D4
    lfs f1, 0xc(r27)
    lfs f0, lbl_80880E6C
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
    stw r0, 0x4(r27)
lbl_fn_800B1598_000009D4:
    lwz r3, 0x54(r27)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800B1598_000009EC
    lfs f5, 0x8(r3)
    b lbl_fn_800B1598_000009F0
lbl_fn_800B1598_000009EC:
    lfs f5, lbl_80880E6C
lbl_fn_800B1598_000009F0:
    lwz r0, 0x18(r27)
    cmpwi r0, 0x0
    bne lbl_fn_800B1598_00000A04
    stw r4, 0x18(r27)
    b lbl_fn_800B1598_00000A24
lbl_fn_800B1598_00000A04:
    cmpwi r4, 0x0
    bne lbl_fn_800B1598_00000A24
    lfs f1, 0x20(r27)
    lfs f0, lbl_80880E6C
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
    stw r0, 0x18(r27)
lbl_fn_800B1598_00000A24:
    lwz r0, 0x4(r27)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_800B1598_00000A40
    lwz r0, 0x18(r27)
    cmpwi r0, 0x0
    beq lbl_fn_800B1598_00000A44
lbl_fn_800B1598_00000A40:
    li r3, 0x1
lbl_fn_800B1598_00000A44:
    cmpwi r3, 0x0
    beq lbl_fn_800B1598_00000DFC
    lfs f2, 0xc(r27)
    lfs f0, lbl_80880E70
    fsubs f6, f3, f2
    fabs f1, f6
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_800B1598_00000A70
    stfs f3, 0xc(r27)
    b lbl_fn_800B1598_00000A84
lbl_fn_800B1598_00000A70:
    lfs f1, lbl_80880E98
    lfs f0, lbl_80880E94
    fmuls f1, f1, f6
    fmadds f0, f0, f2, f1
    stfs f0, 0xc(r27)
lbl_fn_800B1598_00000A84:
    lfs f2, 0x10(r27)
    lfs f0, lbl_80880E70
    fsubs f1, f4, f2
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_800B1598_00000AA8
    stfs f4, 0x10(r27)
    b lbl_fn_800B1598_00000ABC
lbl_fn_800B1598_00000AA8:
    lfs f1, lbl_80880E98
    lfs f0, lbl_80880E94
    fmuls f1, f1, f4
    fmadds f0, f0, f2, f1
    stfs f0, 0x10(r27)
lbl_fn_800B1598_00000ABC:
    lfs f2, 0x20(r27)
    lfs f0, lbl_80880E70
    fsubs f1, f5, f2
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_800B1598_00000AE0
    stfs f5, 0x20(r27)
    b lbl_fn_800B1598_00000AF4
lbl_fn_800B1598_00000AE0:
    lfs f1, lbl_80880E98
    lfs f0, lbl_80880E94
    fmuls f1, f1, f5
    fmadds f0, f0, f2, f1
    stfs f0, 0x20(r27)
lbl_fn_800B1598_00000AF4:
    lis r3, lbl_80732CE8@ha
    lis r31, 0x4178
    lfs f28, 0x10(r27)
    addi r29, r31, 0x749f
    lfd f29, lbl_80732CE8@l(r3)
    li r30, 0x1
    lfs f30, lbl_80880E9C
    lfs f31, lbl_80880E6C
    lfs f25, lbl_80880EA0
    lfs f26, lbl_80880E74
    lfs f27, lbl_80880E60
lbl_fn_800B1598_00000B20:
    bl fn_80680CF8
    mulhw r0, r29, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f29
    fdivs f0, f0, f30
    fmadds f0, f27, f0, f31
    fcmpo cr0, f0, f28
    bge lbl_fn_800B1598_00000CC4
    lwz r0, 0x80(r27)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800B1598_00000CC4
lbl_fn_800B1598_00000B70:
    lwz r0, 0x84(r27)
    add r28, r0, r3
    lwz r0, 0x18(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800B1598_00000CBC
    stw r30, 0x18(r28)
    lwz r3, lbl_8087EEE0
    lwz r0, 0x3c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f24, f0, f29
    bl fn_80680CF8
    addi r0, r31, 0x749f
    fsubs f0, f24, f31
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f29
    fdivs f1, f1, f30
    fmadds f0, f0, f1, f31
    stfs f0, 0x0(r28)
    lwz r3, lbl_8087EEE0
    lwz r0, 0x40(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f24, f0, f29
    bl fn_80680CF8
    addi r0, r31, 0x749f
    fsubs f0, f24, f31
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f29
    fdivs f1, f1, f30
    fmadds f0, f0, f1, f31
    stfs f0, 0x4(r28)
    bl fn_80680CF8
    addi r0, r31, 0x749f
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f29
    fdivs f0, f0, f30
    fmadds f0, f25, f0, f26
    stfs f0, 0x8(r28)
    stfs f0, 0xc(r28)
    bl fn_80680CF8
    addi r0, r31, 0x749f
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f29
    fdivs f0, f0, f30
    fmadds f0, f27, f0, f31
    stfs f0, 0x14(r28)
    stfs f27, 0x10(r28)
    b lbl_fn_800B1598_00000CC4
lbl_fn_800B1598_00000CBC:
    addi r3, r3, 0x1c
    bdnz lbl_fn_800B1598_00000B70
lbl_fn_800B1598_00000CC4:
    fsubs f28, f28, f27
    fcmpo cr0, f28, f31
    bgt lbl_fn_800B1598_00000B20
    lfs f13, lbl_80880EA4
    li r7, 0x0
    lfs f10, lbl_80880EAC
    li r6, 0x0
    lfs f9, lbl_80880E78
    li r3, 0x0
    lfs f8, lbl_80880EB0
    li r4, 0x2
    lfs f7, lbl_80880EB4
    lfs f6, lbl_80880EB8
    lfs f4, lbl_80880E88
    lfs f3, lbl_80880EBC
    lfs f2, lbl_80880EC0
    lfs f0, lbl_80880E70
    lfs f11, lbl_80880E6C
    lfs f12, lbl_80880EA8
    b lbl_fn_800B1598_00000DF0
lbl_fn_800B1598_00000D14:
    lwz r0, 0x84(r27)
    add r5, r0, r6
    lwz r0, 0x18(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800B1598_00000DE8
    lfs f1, 0x14(r5)
    fadds f1, f1, f13
    stfs f1, 0x14(r5)
    lwz r0, 0x18(r5)
    cmpwi r0, 0x1
    bne lbl_fn_800B1598_00000D58
    lfs f1, 0x14(r5)
    fcmpo cr0, f1, f12
    ble lbl_fn_800B1598_00000DE8
    stfs f11, 0x14(r5)
    stw r4, 0x18(r5)
    b lbl_fn_800B1598_00000DE8
lbl_fn_800B1598_00000D58:
    cmpwi r0, 0x2
    bne lbl_fn_800B1598_00000DE8
    lfs f1, 0x10(r5)
    fmuls f1, f1, f10
    stfs f1, 0x10(r5)
    lfs f5, 0x14(r5)
    lfs f1, 0x4(r5)
    fdivs f5, f5, f9
    fmuls f5, f5, f5
    fmadds f1, f8, f5, f1
    stfs f1, 0x4(r5)
    lfs f24, 0x8(r5)
    fmuls f1, f7, f24
    fcmpo cr0, f1, f6
    cror eq, gt, eq
    bne lbl_fn_800B1598_00000D9C
    b lbl_fn_800B1598_00000DA0
lbl_fn_800B1598_00000D9C:
    fmr f1, f6
lbl_fn_800B1598_00000DA0:
    frsp f5, f1
    stfs f1, 0x8(r5)
    lfs f1, 0x0(r5)
    fsubs f5, f5, f24
    fnmsubs f1, f4, f5, f1
    stfs f1, 0x0(r5)
    lfs f1, 0xc(r5)
    fmuls f1, f3, f1
    fcmpo cr0, f1, f2
    cror eq, lt, eq
    bne lbl_fn_800B1598_00000DD0
    b lbl_fn_800B1598_00000DD4
lbl_fn_800B1598_00000DD0:
    fmr f1, f2
lbl_fn_800B1598_00000DD4:
    stfs f1, 0xc(r5)
    lfs f1, 0x10(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_800B1598_00000DE8
    stw r3, 0x18(r5)
lbl_fn_800B1598_00000DE8:
    addi r6, r6, 0x1c
    addi r7, r7, 0x1
lbl_fn_800B1598_00000DF0:
    lwz r0, 0x80(r27)
    cmplw r7, r0
    blt lbl_fn_800B1598_00000D14
lbl_fn_800B1598_00000DFC:
    addi r11, r1, 0x30
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    psq_l f27, 0x68(r1), 0, 0
    lfd f27, 0x60(r1)
    psq_l f26, 0x58(r1), 0, 0
    lfd f26, 0x50(r1)
    psq_l f25, 0x48(r1), 0, 0
    lfd f25, 0x40(r1)
    psq_l f24, 0x38(r1), 0, 0
    lfd f24, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_800B1B28(void)
{
    nofralloc
    lfs f1, lbl_80880EEC
    lis r5, lbl_80778EF8@ha
    li r4, 0x0
    lfs f10, lbl_80880EC8
    lfs f9, lbl_80880ECC
    addi r5, r5, lbl_80778EF8@l
    lfs f8, lbl_80880ED0
    li r0, -0x1
    lfs f7, lbl_80880ED4
    lfs f6, lbl_80880ED8
    lfs f5, lbl_80880EDC
    lfs f4, lbl_80880EE0
    lfs f3, lbl_80880EE4
    lfs f2, lbl_80880EE8
    lfs f0, lbl_80880EF0
    stw r5, 0x0(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
    stfs f10, 0x14(r3)
    stfs f9, 0x18(r3)
    stfs f8, 0x1c(r3)
    stfs f7, 0x20(r3)
    stfs f6, 0x24(r3)
    stfs f5, 0x28(r3)
    stfs f4, 0x2c(r3)
    stw r0, 0x48(r3)
    stfs f3, 0x4c(r3)
    stfs f2, 0x50(r3)
    stfs f1, 0x54(r3)
    stfs f1, 0x58(r3)
    stfs f0, 0x5c(r3)
    blr
}

asm void fn_800B1BAC(void)
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
    beq lbl_fn_800B1BAC_00000F2C
    addic. r0, r3, 0x8
    beq lbl_fn_800B1BAC_00000F1C
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800B1BAC_00000F1C
    beq lbl_fn_800B1BAC_00000F1C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800B1BAC_00000F1C:
    cmpwi r31, 0x0
    ble lbl_fn_800B1BAC_00000F2C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800B1BAC_00000F2C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B1C1C(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087EFB4
    lfs f1, lbl_80880ECC
    li r5, 0x8
    b fn_800BDB58
}

asm void fn_800B1C30(void)
{
    nofralloc
    lwz r0, 0x2f8(r4)
    cmpwi r0, 0x8
    bnelr
    b fn_800B1C44
    blr
}

asm void fn_800B1C44(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    mr r31, r3
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    mr r28, r4
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    ble lbl_fn_800B1C44_0000148C
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    li r5, 0x1
    mr r3, r29
    bl fn_80076760
    mr r3, r29
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r29
    li r4, 0xa
    li r5, 0x0
    bl fn_80076760
    mr r3, r29
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    mr r3, r29
    bl fn_800761A8
    bl fn_806134E0
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    lfs f10, lbl_80880EF4
    addi r4, r1, 0x1c
    lfs f0, 0x20(r31)
    li r3, 0x4
    lfs f8, 0x24(r31)
    fmuls f9, f10, f0
    lfs f7, 0x28(r31)
    lfs f0, 0x2c(r31)
    fmuls f8, f10, f8
    fmuls f7, f10, f7
    fmuls f0, f10, f0
    fctiwz f9, f9
    fctiwz f8, f8
    fctiwz f7, f7
    stfd f9, 0xb8(r1)
    fctiwz f0, f0
    stfd f8, 0xc0(r1)
    lwz r7, 0xbc(r1)
    stfd f7, 0xc8(r1)
    lwz r6, 0xc4(r1)
    stfd f0, 0xd0(r1)
    lwz r5, 0xcc(r1)
    lwz r0, 0xd4(r1)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stw r0, 0x1c(r1)
    bl fn_80615C40
    lfs f7, lbl_80880EF0
    addi r4, r1, 0x18
    lfs f0, lbl_80880EF4
    li r3, 0x4
    stfs f7, 0x30(r1)
    fmuls f0, f0, f7
    stfs f7, 0x34(r1)
    fctiwz f0, f0
    stfs f7, 0x38(r1)
    stfd f0, 0xd8(r1)
    stfd f0, 0xe0(r1)
    lwz r7, 0xdc(r1)
    stfd f0, 0xe8(r1)
    lwz r6, 0xe4(r1)
    stfd f0, 0xf0(r1)
    lwz r5, 0xec(r1)
    lwz r0, 0xf4(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stfs f7, 0x3c(r1)
    stw r0, 0x18(r1)
    bl fn_80615B60
    li r3, 0x0
    bl fn_80618400
    psq_l f1, 0x15c(r28), 0, 0
    addi r30, r1, 0x88
    psq_l f2, 0x164(r28), 0, 0
    mr r3, r30
    psq_l f3, 0x16c(r28), 0, 0
    li r4, 0x0
    psq_l f4, 0x174(r28), 0, 0
    psq_l f5, 0x17c(r28), 0, 0
    psq_l f6, 0x184(r28), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    bl fn_80618350
    addi r29, r1, 0x58
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    mr r3, r29
    psq_l f3, 0x10(r30), 0, 0
    mr r4, r29
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    bl fn_805F8CA0
    mr r3, r29
    mr r4, r29
    bl fn_805F8C50
    mr r3, r29
    li r4, 0x0
    bl fn_806183A0
    li r3, 0x0
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    lfs f10, lbl_80880EF4
    addi r4, r1, 0x14
    lfs f0, 0x20(r31)
    li r3, 0x0
    lfs f8, 0x24(r31)
    fmuls f9, f10, f0
    lfs f7, 0x28(r31)
    lfs f0, 0x2c(r31)
    fmuls f8, f10, f8
    fmuls f7, f10, f7
    fmuls f0, f10, f0
    fctiwz f9, f9
    fctiwz f8, f8
    fctiwz f7, f7
    stfd f9, 0xf8(r1)
    fctiwz f0, f0
    stfd f8, 0x100(r1)
    lwz r7, 0xfc(r1)
    stfd f7, 0x108(r1)
    lwz r6, 0x104(r1)
    stfd f0, 0x110(r1)
    lwz r5, 0x10c(r1)
    lwz r0, 0x114(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x14(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0x1c
    bl fn_806176A0
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xa
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x5
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    lfs f7, lbl_80880EF8
    lfs f0, 0x54(r31)
    lfs f8, lbl_80880EF4
    fmuls f0, f7, f0
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_800B1C44_00001304
    b lbl_fn_800B1C44_00001308
lbl_fn_800B1C44_00001304:
    fmr f8, f0
lbl_fn_800B1C44_00001308:
    lfs f0, lbl_80880ED0
    fcmpo cr0, f0, f8
    cror eq, gt, eq
    bne lbl_fn_800B1C44_0000131C
    b lbl_fn_800B1C44_00001320
lbl_fn_800B1C44_0000131C:
    fmr f0, f8
lbl_fn_800B1C44_00001320:
    fctiwz f0, f0
    li r4, 0x4
    stfd f0, 0x118(r1)
    lwz r29, 0x11c(r1)
    clrlwi r3, r29, 24
    bl fn_80614A00
    clrlwi r3, r29, 24
    li r4, 0x4
    bl fn_806149C0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl fn_80614A40
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x3
    bl fn_80617D50
    lwz r0, lbl_8087D878
    cmpwi r0, 0x0
    bne lbl_fn_800B1C44_000013D0
    lwz r0, 0x48(r31)
    li r3, 0xb8
    li r4, 0x0
    clrlwi r5, r0, 16
    bl fn_80614790
    li r6, 0x0
    li r3, 0x0
    lis r4, 0xcc01
    b lbl_fn_800B1C44_000013C0
lbl_fn_800B1C44_00001398:
    lwz r0, 0x10(r31)
    addi r6, r6, 0x1
    add r5, r0, r3
    lfsx f0, r3, r0
    lfs f8, 0x8(r5)
    addi r3, r3, 0x18
    lfs f7, 0x4(r5)
    stfs f0, -0x8000(r4)
    stfs f7, -0x8000(r4)
    stfs f8, -0x8000(r4)
lbl_fn_800B1C44_000013C0:
    lwz r0, 0x48(r31)
    cmplw r6, r0
    blt lbl_fn_800B1C44_00001398
    b lbl_fn_800B1C44_0000148C
lbl_fn_800B1C44_000013D0:
    lwz r0, 0x48(r31)
    li r3, 0xa8
    li r4, 0x0
    clrlslwi r5, r0, 17, 1
    bl fn_80614790
    addi r5, r1, 0x4c
    li r7, 0x0
    li r3, 0x0
    lis r4, 0xcc01
    b lbl_fn_800B1C44_00001480
lbl_fn_800B1C44_000013F8:
    lwz r0, 0x10(r31)
    addi r7, r7, 0x1
    lfs f8, 0x58(r31)
    add r6, r0, r3
    lfs f0, 0x1c(r31)
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r3, 0x18
    psq_st f1, 0x0(r5), 0, 0
    fmuls f9, f0, f8
    lfs f2, 0x8(r6)
    lfs f7, 0x18(r31)
    lfs f0, 0x14(r31)
    fadds f10, f2, f9
    fmuls f7, f7, f8
    lfs f11, 0x4c(r1)
    fmuls f8, f0, f8
    stfs f11, -0x8000(r4)
    lfs f11, 0x50(r1)
    stfs f11, -0x8000(r4)
    lfs f0, 0x4c(r1)
    stfs f2, -0x8000(r4)
    fadds f11, f0, f8
    lfs f0, 0x50(r1)
    stfs f2, 0x54(r1)
    fadds f0, f0, f7
    stfs f11, -0x8000(r4)
    stfs f0, -0x8000(r4)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f11, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f10, 0x48(r1)
    stfs f10, -0x8000(r4)
lbl_fn_800B1C44_00001480:
    lwz r0, 0x48(r31)
    cmplw r7, r0
    blt lbl_fn_800B1C44_000013F8
lbl_fn_800B1C44_0000148C:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_800B2180(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x48(r3)
    cmpwi r31, 0x0
    beq lbl_fn_800B2180_00001514
    mulli r3, r31, 0x18
    li r4, 0x6
    la r5, lbl_8087D880
    la r6, lbl_8087D87C
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800B23C4@ha
    mr r7, r31
    addi r4, r4, fn_800B23C4@l
    li r5, 0x0
    li r6, 0x18
    bl fn_80695720
    mr r30, r3
    b lbl_fn_800B2180_00001518
lbl_fn_800B2180_00001514:
    li r30, 0x0
lbl_fn_800B2180_00001518:
    lwz r0, 0x10(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800B2180_00001690
    lwz r0, 0x8(r28)
    mr r4, r31
    cmplw r31, r0
    ble lbl_fn_800B2180_00001538
    mr r4, r0
lbl_fn_800B2180_00001538:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_800B2180_0000167C
    srwi. r0, r4, 2
    mtctr r0
    beq lbl_fn_800B2180_0000163C
lbl_fn_800B2180_00001550:
    lwz r0, 0x10(r28)
    add r6, r30, r3
    add r5, r0, r3
    addi r3, r3, 0x18
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r6)
    lfs f0, 0x14(r5)
    stfs f0, 0x14(r6)
    add r6, r30, r3
    lwz r0, 0x10(r28)
    add r5, r0, r3
    addi r3, r3, 0x18
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r6)
    lfs f0, 0x14(r5)
    stfs f0, 0x14(r6)
    add r6, r30, r3
    lwz r0, 0x10(r28)
    add r5, r0, r3
    addi r3, r3, 0x18
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r6)
    lfs f0, 0x14(r5)
    stfs f0, 0x14(r6)
    add r6, r30, r3
    lwz r0, 0x10(r28)
    add r5, r0, r3
    addi r3, r3, 0x18
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r6)
    lfs f0, 0x14(r5)
    stfs f0, 0x14(r6)
    bdnz lbl_fn_800B2180_00001550
    andi. r4, r4, 0x3
    beq lbl_fn_800B2180_0000167C
lbl_fn_800B2180_0000163C:
    mtctr r4
lbl_fn_800B2180_00001640:
    lwz r0, 0x10(r28)
    add r6, r30, r3
    add r5, r0, r3
    addi r3, r3, 0x18
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r6)
    lfs f0, 0x14(r5)
    stfs f0, 0x14(r6)
    bdnz lbl_fn_800B2180_00001640
lbl_fn_800B2180_0000167C:
    lwz r3, 0x10(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800B2180_00001690
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800B2180_00001690:
    stw r30, 0x10(r28)
    li r29, 0x0
    li r30, 0x0
    stw r31, 0x8(r28)
    stw r31, 0xc(r28)
    b lbl_fn_800B2180_000016C4
lbl_fn_800B2180_000016A8:
    lwz r0, 0x10(r28)
    mr r3, r28
    li r5, 0x1
    add r4, r0, r30
    bl fn_800B257C
    addi r30, r30, 0x18
    addi r29, r29, 0x1
lbl_fn_800B2180_000016C4:
    lwz r0, 0x48(r28)
    cmpw r29, r0
    blt lbl_fn_800B2180_000016A8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
