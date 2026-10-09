#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_80098948(void);
extern void fn_800A0548(void);
extern void fn_800A08D4(void);
extern void fn_800A08E0(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA6C(void);
extern void fn_805ED460(void);
extern void fn_805ED5A0(void);
extern void fn_805F89F0(void);
extern void fn_805F9160(void);
extern void fn_805F9190(void);
extern void fn_805F93C0(void);
extern void fn_805F99F0(void);
extern void fn_806952C4(void);
extern void fn_80695AD0(void);
extern void fn_8072D210(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80766768[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80778930[];
extern u8 lbl_8077893C[];
extern u8 lbl_80778948[];
extern u8 lbl_807C7050[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_80880BF8;
extern u32 lbl_80880BFC;
extern u32 lbl_80880C00;
extern u32 lbl_80880C08;
extern u32 lbl_80880C34;
extern u32 lbl_80880C38;
extern u32 lbl_80880C3C;
extern u32 lbl_80880C40;
extern u32 lbl_80880C44;

/* Function declarations */
void fn_800991D0(void);
void fn_80099E9C(void);
void fn_80099F68(void);
void fn_80099F70(void);
void fn_80099F74(void);
void fn_8009A018(void);
void fn_8009A0F8(void);
void fn_8009A2C0(void);
void fn_8009A490(void);
void fn_8009A504(void);
void fn_8009A584(void);
void fn_8009A5A8(void);
void fn_8009A5CC(void);
void fn_8009ADA4(void);

asm void fn_800991D0(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    stw r0, 0x314(r1)
    addi r11, r1, 0x290
    stfd f31, 0x300(r1)
    psq_st f31, 0x308(r1), 0, 0
    stfd f30, 0x2f0(r1)
    psq_st f30, 0x2f8(r1), 0, 0
    stfd f29, 0x2e0(r1)
    psq_st f29, 0x2e8(r1), 0, 0
    stfd f28, 0x2d0(r1)
    psq_st f28, 0x2d8(r1), 0, 0
    stfd f27, 0x2c0(r1)
    psq_st f27, 0x2c8(r1), 0, 0
    stfd f26, 0x2b0(r1)
    psq_st f26, 0x2b8(r1), 0, 0
    stfd f25, 0x2a0(r1)
    psq_st f25, 0x2a8(r1), 0, 0
    stfd f24, 0x290(r1)
    psq_st f24, 0x298(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x50(r3)
    mr r15, r3
    stw r4, 0x8(r1)
    mulli r0, r0, 0x18
    add r4, r3, r0
    addi r3, r1, 0x1e8
    lwz r20, 0x16c(r4)
    lwz r21, 0x178(r4)
    bl fn_800A08E0
    addi r3, r1, 0x1bc
    bl fn_800A08E0
    lwz r3, lbl_8087EFA8
    lis r0, 0x8078
    stw r0, 0x228(r1)
    lis r0, 0x8076
    lfs f3, 0x3a4(r3)
    addi r28, r1, 0xe0
    stw r0, 0x224(r1)
    lis r0, 0x8077
    lwz r3, 0x228(r1)
    addi r24, r1, 0x1ec
    stw r0, 0x22c(r1)
    lis r0, 0x8077
    subi r3, r3, 0x7790
    lfs f0, 0x350(r15)
    stw r3, 0x228(r1)
    addi r26, r1, 0xa8
    lwz r3, 0x224(r1)
    fmuls f26, f0, f3
    stw r0, 0x230(r1)
    lis r0, lbl_80775B30@ha
    addi r3, r3, 0x6768
    lfs f30, lbl_80880C08
    stw r3, 0x224(r1)
    lwz r3, 0x22c(r1)
    addi r25, r1, 0x1f8
    lfs f31, lbl_80880C34
    addi r27, r1, 0x208
    addi r3, r3, 0x5b60
    stw r3, 0x22c(r1)
    lwz r3, 0x230(r1)
    addi r14, r1, 0x1cc
    lfs f29, lbl_80880BF8
    li r30, 0x0
    addi r3, r3, 0x5b98
    stw r3, 0x230(r1)
    mr r3, r0
    li r0, 0x4
    addi r3, r3, lbl_80775B30@l
    stw r0, 0x220(r1)
    li r0, 0xc0
    lfs f27, lbl_80880C00
    lfs f28, lbl_80880BFC
    stw r3, 0x234(r1)
    stw r0, 0x238(r1)
lbl_fn_800991D0_00000130:
    lwz r0, 0x238(r1)
    add r29, r15, r0
    lwz r19, 0x230(r29)
    cmpwi r19, 0x0
    beq lbl_fn_800991D0_00000754
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_800991D0_00000160
    lfs f3, 0x23c(r29)
    lfs f0, 0x240(r29)
    fadds f0, f3, f0
    stfs f0, 0x23c(r29)
lbl_fn_800991D0_00000160:
    lfs f3, 0x23c(r29)
    lfs f0, 0x248(r29)
    fcmpo cr0, f3, f0
    ble lbl_fn_800991D0_00000174
    stfs f0, 0x23c(r29)
lbl_fn_800991D0_00000174:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_800991D0_00000190
    lfs f3, 0x258(r29)
    lfs f0, 0x240(r29)
    fsubs f0, f3, f0
    stfs f0, 0x258(r29)
lbl_fn_800991D0_00000190:
    lfs f0, 0x258(r29)
    fcmpo cr0, f0, f29
    bge lbl_fn_800991D0_000001A4
    stfs f29, 0x258(r29)
    stw r30, 0x250(r29)
lbl_fn_800991D0_000001A4:
    lfs f0, 0x23c(r29)
    fsubs f0, f0, f27
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f28
    mfcr r18
    li r17, 0x0
    srwi r18, r18, 31
    li r31, 0x0
    b lbl_fn_800991D0_000006F0
lbl_fn_800991D0_000001CC:
    lwz r3, 0x48(r20)
    cmpwi r21, 0x0
    lwzx r16, r3, r31
    beq lbl_fn_800991D0_000001EC
    lwz r0, 0x18(r16)
    slwi r0, r0, 2
    lwzx r23, r21, r0
    b lbl_fn_800991D0_000001F0
lbl_fn_800991D0_000001EC:
    lwz r23, 0x18(r16)
lbl_fn_800991D0_000001F0:
    cmpwi r18, 0x0
    beq lbl_fn_800991D0_00000224
    mulli r4, r23, 0x2c
    lwz r7, 0x220(r15)
    lwz r6, 0x218(r15)
    mr r3, r19
    lwz r5, 0x14(r16)
    mulli r0, r23, 0x12
    lfs f1, 0x234(r29)
    add r4, r7, r4
    add r6, r6, r0
    bl fn_800A0548
    b lbl_fn_800991D0_000006E8
lbl_fn_800991D0_00000224:
    stw r30, 0x1e8(r1)
    mulli r0, r23, 0x12
    mr r3, r19
    lwz r6, 0x218(r15)
    addi r4, r1, 0x1e8
    lwz r5, 0x14(r16)
    lfs f1, 0x234(r29)
    add r6, r6, r0
    bl fn_800A0548
    cmpwi r3, 0x0
    beq lbl_fn_800991D0_000006E8
    mulli r0, r23, 0x2c
    lwz r3, 0x220(r15)
    add r22, r3, r0
    lwzx r0, r3, r0
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_800991D0_00000294
    lfs f2, 0x54(r16)
    addi r3, r1, 0x178
    psq_l f1, 0x4c(r16), 0, 0
    psq_st f1, 0x4(r22), 0, 0
    stfs f2, 0xc(r22)
    lwz r0, 0x0(r22)
    psq_st f1, 0x0(r3), 0, 0
    ori r0, r0, 0x1
    stfs f2, 0x180(r1)
    stw r0, 0x0(r22)
lbl_fn_800991D0_00000294:
    lwz r0, 0x0(r22)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800991D0_00000380
    psq_l f1, 0x40(r16), 0, 0
    addi r4, r1, 0x198
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x78
    lfs f2, 0x48(r16)
    addi r4, r1, 0x84
    lfs f0, 0x198(r1)
    fmr f24, f2
    stfs f2, 0x1a0(r1)
    fmuls f0, f0, f30
    lfs f25, 0x19c(r1)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f24, f30
    addi r3, r1, 0x70
    addi r4, r1, 0x7c
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f11, 0x80(r1)
    addi r3, r1, 0x188
    lfs f8, 0x78(r1)
    lfs f5, 0x74(r1)
    lfs f6, 0x84(r1)
    fmuls f3, f8, f11
    lfs f9, 0x70(r1)
    fmuls f0, f8, f5
    fmuls f4, f6, f5
    lfs f10, 0x7c(r1)
    fmuls f7, f5, f9
    fmuls f3, f9, f3
    fmuls f12, f11, f10
    fmuls f5, f6, f7
    fmadds f3, f10, f4, f3
    fmuls f7, f8, f7
    fmsubs f4, f8, f12, f5
    stfs f3, 0x18c(r1)
    fmuls f3, f6, f11
    fmuls f0, f10, f0
    stfs f4, 0x188(r1)
    fmadds f5, f6, f12, f7
    psq_l f1, 0x0(r3), 0, 0
    fmsubs f0, f9, f3, f0
    stfs f5, 0x194(r1)
    stfs f0, 0x190(r1)
    psq_st f1, 0x10(r22), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x18(r22), 0, 0
    lwz r0, 0x0(r22)
    ori r0, r0, 0x2
    stw r0, 0x0(r22)
lbl_fn_800991D0_00000380:
    lwz r0, 0x0(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800991D0_000003B8
    lfs f2, 0x3c(r16)
    addi r3, r1, 0x1a4
    psq_l f1, 0x34(r16), 0, 0
    psq_st f1, 0x20(r22), 0, 0
    stfs f2, 0x28(r22)
    lwz r0, 0x0(r22)
    psq_st f1, 0x0(r3), 0, 0
    ori r0, r0, 0x4
    stfs f2, 0x1ac(r1)
    stw r0, 0x0(r22)
lbl_fn_800991D0_000003B8:
    lwz r3, 0x1e8(r1)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_800991D0_000003EC
    lfs f2, 0x54(r16)
    ori r0, r3, 0x1
    psq_l f1, 0x4c(r16), 0, 0
    addi r3, r1, 0x140
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x1f4(r1)
    stw r0, 0x1e8(r1)
lbl_fn_800991D0_000003EC:
    lwz r0, 0x1e8(r1)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800991D0_000004D8
    psq_l f1, 0x40(r16), 0, 0
    addi r4, r1, 0x160
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x60
    lfs f2, 0x48(r16)
    addi r4, r1, 0x6c
    lfs f0, 0x160(r1)
    fmr f25, f2
    stfs f2, 0x168(r1)
    fmuls f0, f0, f30
    lfs f24, 0x164(r1)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f24, f30
    addi r3, r1, 0x5c
    addi r4, r1, 0x68
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x58
    addi r4, r1, 0x64
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f11, 0x68(r1)
    addi r3, r1, 0x150
    lfs f8, 0x60(r1)
    lfs f5, 0x5c(r1)
    lfs f7, 0x6c(r1)
    fmuls f3, f8, f11
    lfs f9, 0x58(r1)
    fmuls f0, f8, f5
    fmuls f4, f7, f5
    lfs f10, 0x64(r1)
    fmuls f3, f9, f3
    fmuls f5, f5, f9
    lwz r0, 0x1e8(r1)
    fmuls f12, f11, f10
    fmadds f3, f10, f4, f3
    ori r0, r0, 0x2
    fmuls f6, f8, f5
    fmuls f5, f7, f5
    stfs f3, 0x154(r1)
    fmuls f3, f7, f11
    fmuls f0, f10, f0
    stw r0, 0x1e8(r1)
    fmadds f6, f7, f12, f6
    fmsubs f4, f8, f12, f5
    fmsubs f0, f9, f3, f0
    stfs f6, 0x15c(r1)
    stfs f4, 0x150(r1)
    stfs f0, 0x158(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
lbl_fn_800991D0_000004D8:
    lwz r3, 0x1e8(r1)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800991D0_0000050C
    lfs f2, 0x3c(r16)
    ori r0, r3, 0x4
    psq_l f1, 0x34(r16), 0, 0
    addi r3, r1, 0x16c
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x174(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x210(r1)
    stw r0, 0x1e8(r1)
lbl_fn_800991D0_0000050C:
    lwz r3, 0x250(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800991D0_000006C8
    lfs f0, 0x258(r29)
    fcmpo cr0, f0, f29
    ble lbl_fn_800991D0_000006C8
    stw r30, 0x1bc(r1)
    mulli r0, r23, 0x12
    addi r4, r1, 0x1bc
    lwz r6, 0x218(r15)
    lwz r5, 0x14(r16)
    lfs f1, 0x254(r29)
    add r6, r6, r0
    bl fn_800A0548
    cmpwi r3, 0x0
    beq lbl_fn_800991D0_000006C8
    lwz r3, 0x1bc(r1)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_800991D0_00000584
    ori r0, r3, 0x1
    lfs f2, 0x54(r16)
    psq_l f1, 0x4c(r16), 0, 0
    addi r3, r1, 0x108
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1c0
    stfs f2, 0x110(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1c8(r1)
    stw r0, 0x1bc(r1)
lbl_fn_800991D0_00000584:
    lwz r0, 0x1bc(r1)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800991D0_00000670
    psq_l f1, 0x40(r16), 0, 0
    addi r4, r1, 0x128
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x48
    lfs f2, 0x48(r16)
    addi r4, r1, 0x54
    lfs f0, 0x128(r1)
    fmr f25, f2
    stfs f2, 0x130(r1)
    fmuls f0, f0, f30
    lfs f24, 0x12c(r1)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f24, f30
    addi r3, r1, 0x44
    addi r4, r1, 0x50
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x40
    addi r4, r1, 0x4c
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f11, 0x50(r1)
    addi r3, r1, 0x118
    lfs f8, 0x48(r1)
    lfs f5, 0x44(r1)
    lfs f7, 0x54(r1)
    fmuls f3, f8, f11
    lfs f9, 0x40(r1)
    fmuls f0, f8, f5
    fmuls f4, f7, f5
    lfs f10, 0x4c(r1)
    fmuls f3, f9, f3
    fmuls f5, f5, f9
    lwz r0, 0x1bc(r1)
    fmuls f12, f11, f10
    fmadds f3, f10, f4, f3
    ori r0, r0, 0x2
    fmuls f6, f8, f5
    fmuls f5, f7, f5
    stfs f3, 0x11c(r1)
    fmuls f3, f7, f11
    fmuls f0, f10, f0
    stw r0, 0x1bc(r1)
    fmadds f6, f7, f12, f6
    fmsubs f4, f8, f12, f5
    fmsubs f0, f9, f3, f0
    stfs f6, 0x124(r1)
    stfs f4, 0x118(r1)
    stfs f0, 0x120(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r14), 0, 0
    psq_st f2, 0x8(r14), 0, 0
lbl_fn_800991D0_00000670:
    lwz r3, 0x1bc(r1)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800991D0_000006A8
    ori r0, r3, 0x4
    lfs f2, 0x3c(r16)
    psq_l f1, 0x34(r16), 0, 0
    addi r3, r1, 0x134
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1dc
    stfs f2, 0x13c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1e4(r1)
    stw r0, 0x1bc(r1)
lbl_fn_800991D0_000006A8:
    mulli r0, r23, 0x2c
    lwz r3, 0x220(r15)
    lfs f1, 0x258(r29)
    addi r6, r1, 0x1bc
    li r4, 0x1
    add r3, r3, r0
    mr r5, r3
    bl fn_80098948
lbl_fn_800991D0_000006C8:
    mulli r0, r23, 0x2c
    lwz r3, 0x220(r15)
    lfs f1, 0x23c(r29)
    addi r6, r1, 0x1e8
    li r4, 0x1
    add r3, r3, r0
    mr r5, r3
    bl fn_80098948
lbl_fn_800991D0_000006E8:
    addi r17, r17, 0x1
    addi r31, r31, 0x4
lbl_fn_800991D0_000006F0:
    lwz r0, 0x44(r20)
    cmpw r17, r0
    blt lbl_fn_800991D0_000001CC
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_800991D0_00000718
    lfs f3, 0x238(r29)
    lfs f0, 0x234(r29)
    fmadds f0, f3, f26, f0
    stfs f0, 0x234(r29)
lbl_fn_800991D0_00000718:
    lbz r0, 0x244(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800991D0_00000AD8
    mr r3, r19
    bl fn_800A08D4
    lfs f0, 0x234(r29)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_800991D0_00000AD8
    mr r3, r19
    bl fn_800A08D4
    lfs f0, 0x234(r29)
    fsubs f0, f0, f1
    stfs f0, 0x234(r29)
    b lbl_fn_800991D0_00000AD8
lbl_fn_800991D0_00000754:
    lwz r0, 0x250(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800991D0_00000AD8
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_800991D0_0000077C
    lfs f3, 0x258(r29)
    lfs f0, 0x240(r29)
    fsubs f0, f3, f0
    stfs f0, 0x258(r29)
lbl_fn_800991D0_0000077C:
    lfs f0, 0x258(r29)
    fcmpo cr0, f0, f29
    bge lbl_fn_800991D0_00000794
    stfs f29, 0x258(r29)
    stw r30, 0x250(r29)
    b lbl_fn_800991D0_00000C50
lbl_fn_800991D0_00000794:
    li r19, 0x0
    li r16, 0x0
    b lbl_fn_800991D0_00000ACC
lbl_fn_800991D0_000007A0:
    lwz r3, 0x48(r20)
    cmpwi r21, 0x0
    lwzx r22, r3, r16
    beq lbl_fn_800991D0_000007C0
    lwz r0, 0x18(r22)
    slwi r0, r0, 2
    lwzx r17, r21, r0
    b lbl_fn_800991D0_000007C4
lbl_fn_800991D0_000007C0:
    lwz r17, 0x18(r22)
lbl_fn_800991D0_000007C4:
    stw r30, 0x1e8(r1)
    mulli r0, r17, 0x12
    addi r4, r1, 0x1e8
    lwz r6, 0x218(r15)
    lwz r3, 0x250(r29)
    lwz r5, 0x14(r22)
    add r6, r6, r0
    lfs f1, 0x254(r29)
    bl fn_800A0548
    cmpwi r3, 0x0
    beq lbl_fn_800991D0_00000AC4
    mulli r0, r17, 0x2c
    lwz r3, 0x220(r15)
    add r18, r3, r0
    lwzx r0, r3, r0
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_800991D0_00000834
    lfs f2, 0x54(r22)
    addi r3, r1, 0xd0
    psq_l f1, 0x4c(r22), 0, 0
    psq_st f1, 0x4(r18), 0, 0
    stfs f2, 0xc(r18)
    lwz r0, 0x0(r18)
    psq_st f1, 0x0(r3), 0, 0
    ori r0, r0, 0x1
    stfs f2, 0xd8(r1)
    stw r0, 0x0(r18)
lbl_fn_800991D0_00000834:
    lwz r0, 0x0(r18)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800991D0_0000091C
    psq_l f1, 0x40(r22), 0, 0
    addi r4, r1, 0xf0
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x30
    lfs f2, 0x48(r22)
    addi r4, r1, 0x3c
    lfs f0, 0xf0(r1)
    fmr f25, f2
    stfs f2, 0xf8(r1)
    fmuls f0, f0, f30
    lfs f24, 0xf4(r1)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f24, f30
    addi r3, r1, 0x2c
    addi r4, r1, 0x38
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x28
    addi r4, r1, 0x34
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f11, 0x38(r1)
    lfs f8, 0x30(r1)
    lfs f5, 0x2c(r1)
    lfs f6, 0x3c(r1)
    fmuls f3, f8, f11
    lfs f9, 0x28(r1)
    fmuls f0, f8, f5
    fmuls f4, f6, f5
    lfs f10, 0x34(r1)
    fmuls f7, f5, f9
    fmuls f3, f9, f3
    fmuls f12, f11, f10
    fmuls f5, f6, f7
    fmadds f3, f10, f4, f3
    fmuls f7, f8, f7
    fmsubs f4, f8, f12, f5
    stfs f3, 0xe4(r1)
    fmuls f3, f6, f11
    fmuls f0, f10, f0
    stfs f4, 0xe0(r1)
    fmadds f5, f6, f12, f7
    psq_l f1, 0x0(r28), 0, 0
    fmsubs f0, f9, f3, f0
    stfs f5, 0xec(r1)
    stfs f0, 0xe8(r1)
    psq_st f1, 0x10(r18), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_st f2, 0x18(r18), 0, 0
    lwz r0, 0x0(r18)
    ori r0, r0, 0x2
    stw r0, 0x0(r18)
lbl_fn_800991D0_0000091C:
    lwz r0, 0x0(r18)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800991D0_00000954
    lfs f2, 0x3c(r22)
    addi r3, r1, 0xfc
    psq_l f1, 0x34(r22), 0, 0
    psq_st f1, 0x20(r18), 0, 0
    stfs f2, 0x28(r18)
    lwz r0, 0x0(r18)
    psq_st f1, 0x0(r3), 0, 0
    ori r0, r0, 0x4
    stfs f2, 0x104(r1)
    stw r0, 0x0(r18)
lbl_fn_800991D0_00000954:
    lwz r3, 0x1e8(r1)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_800991D0_00000988
    lfs f2, 0x54(r22)
    ori r0, r3, 0x1
    psq_l f1, 0x4c(r22), 0, 0
    addi r3, r1, 0x9c
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa4(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x1f4(r1)
    stw r0, 0x1e8(r1)
lbl_fn_800991D0_00000988:
    lwz r0, 0x1e8(r1)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800991D0_00000A70
    psq_l f1, 0x40(r22), 0, 0
    addi r4, r1, 0xb8
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x18
    lfs f2, 0x48(r22)
    addi r4, r1, 0x24
    lfs f0, 0xb8(r1)
    fmr f25, f2
    stfs f2, 0xc0(r1)
    fmuls f0, f0, f30
    lfs f24, 0xbc(r1)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f24, f30
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x10
    addi r4, r1, 0x1c
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f11, 0x20(r1)
    lfs f8, 0x18(r1)
    lfs f5, 0x14(r1)
    lfs f7, 0x24(r1)
    fmuls f3, f8, f11
    lfs f9, 0x10(r1)
    fmuls f0, f8, f5
    fmuls f4, f7, f5
    lfs f10, 0x1c(r1)
    fmuls f3, f9, f3
    fmuls f5, f5, f9
    lwz r0, 0x1e8(r1)
    fmuls f12, f11, f10
    fmadds f3, f10, f4, f3
    ori r0, r0, 0x2
    fmuls f6, f8, f5
    fmuls f5, f7, f5
    stfs f3, 0xac(r1)
    fmuls f3, f7, f11
    fmuls f0, f10, f0
    stw r0, 0x1e8(r1)
    fmadds f6, f7, f12, f6
    fmsubs f4, f8, f12, f5
    fmsubs f0, f9, f3, f0
    stfs f6, 0xb4(r1)
    stfs f4, 0xa8(r1)
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
lbl_fn_800991D0_00000A70:
    lwz r3, 0x1e8(r1)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800991D0_00000AA4
    lfs f2, 0x3c(r22)
    ori r0, r3, 0x4
    psq_l f1, 0x34(r22), 0, 0
    addi r3, r1, 0xc4
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xcc(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x210(r1)
    stw r0, 0x1e8(r1)
lbl_fn_800991D0_00000AA4:
    mulli r0, r17, 0x2c
    lwz r3, 0x220(r15)
    lfs f1, 0x258(r29)
    addi r6, r1, 0x1e8
    li r4, 0x1
    add r3, r3, r0
    mr r5, r3
    bl fn_80098948
lbl_fn_800991D0_00000AC4:
    addi r19, r19, 0x1
    addi r16, r16, 0x4
lbl_fn_800991D0_00000ACC:
    lwz r0, 0x44(r20)
    cmpw r19, r0
    blt lbl_fn_800991D0_000007A0
lbl_fn_800991D0_00000AD8:
    lwz r0, 0x220(r1)
    cmpwi r0, 0x4
    bne lbl_fn_800991D0_00000C50
    lwz r0, 0x370(r15)
    cmpwi r0, 0x0
    bne lbl_fn_800991D0_00000B10
    lwz r3, 0x224(r1)
    lwz r5, 0x0(r3)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x214(r1)
    stw r4, 0x218(r1)
    stw r0, 0x21c(r1)
    b lbl_fn_800991D0_00000B2C
lbl_fn_800991D0_00000B10:
    lwz r3, 0x228(r1)
    lwz r5, 0x0(r3)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x214(r1)
    stw r4, 0x218(r1)
    stw r0, 0x21c(r1)
lbl_fn_800991D0_00000B2C:
    lwz r5, 0x214(r1)
    addi r3, r1, 0x1b0
    lwz r4, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r5, 0x1b0(r1)
    stw r4, 0x1b4(r1)
    stw r0, 0x1b8(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800991D0_00000C50
    lwz r0, 0x370(r15)
    lwz r3, 0x16c(r15)
    cmpwi r0, 0x0
    lwz r17, 0x220(r15)
    lwz r16, 0x44(r3)
    bne lbl_fn_800991D0_00000C34
    lwz r0, 0x22c(r1)
    lis r3, lbl_80775BC8@ha
    stw r0, 0x90(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r30, 0xc(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0xc
    stw r3, 0x94(r1)
    mr r18, r3
    stw r3, 0x88(r1)
    li r3, 0x10
    stw r0, 0x8c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800991D0_00000BD4
    li r0, 0x1
    stw r0, 0x4(r3)
    li r0, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x230(r1)
    stw r0, 0x0(r3)
    stw r18, 0xc(r3)
lbl_fn_800991D0_00000BD4:
    cmpwi r30, 0x0
    stw r3, 0x98(r1)
    stw r30, 0x88(r1)
    beq lbl_fn_800991D0_00000BEC
    li r3, 0x0
    bl fn_80084C24
lbl_fn_800991D0_00000BEC:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x94(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lwz r0, 0x234(r1)
    addi r3, r1, 0x90
    stw r0, 0x90(r1)
    bl fn_800DCA6C
    addic. r0, r1, 0x90
    beq lbl_fn_800991D0_00000C34
    mr r3, r0
    addic. r3, r3, 0x4
    beq lbl_fn_800991D0_00000C34
    beq lbl_fn_800991D0_00000C34
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800991D0_00000C34
    bl fn_806952C4
lbl_fn_800991D0_00000C34:
    lwz r6, 0x370(r15)
    mr r4, r17
    mr r5, r16
    addi r3, r15, 0x374
    lwz r12, 0x4(r6)
    mtctr r12
    bctrl
lbl_fn_800991D0_00000C50:
    lwz r3, 0x220(r1)
    addi r3, r3, 0x1
    stw r3, 0x220(r1)
    mr r0, r3
    lwz r3, 0x238(r1)
    cmpwi r0, 0x5
    addi r3, r3, 0x30
    stw r3, 0x238(r1)
    ble lbl_fn_800991D0_00000130
    addi r11, r1, 0x290
    psq_l f31, 0x308(r1), 0, 0
    lfd f31, 0x300(r1)
    psq_l f30, 0x2f8(r1), 0, 0
    lfd f30, 0x2f0(r1)
    psq_l f29, 0x2e8(r1), 0, 0
    lfd f29, 0x2e0(r1)
    psq_l f28, 0x2d8(r1), 0, 0
    lfd f28, 0x2d0(r1)
    psq_l f27, 0x2c8(r1), 0, 0
    lfd f27, 0x2c0(r1)
    psq_l f26, 0x2b8(r1), 0, 0
    lfd f26, 0x2b0(r1)
    psq_l f25, 0x2a8(r1), 0, 0
    lfd f25, 0x2a0(r1)
    psq_l f24, 0x298(r1), 0, 0
    lfd f24, 0x290(r1)
    bl _restgpr_14
    lwz r0, 0x314(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}

asm void fn_80099E9C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r5
    stw r30, 0x10(r1)
    mr r30, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r5, 0x16c(r30)
    cmpwi r5, 0x0
    bne lbl_fn_80099E9C_00000D0C
    li r6, -0x1
    b lbl_fn_80099E9C_00000D4C
lbl_fn_80099E9C_00000D0C:
    lwz r0, 0x44(r5)
    li r6, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80099E9C_00000D48
lbl_fn_80099E9C_00000D24:
    lwz r4, 0x48(r5)
    lwzx r4, r4, r7
    lwz r0, 0x14(r4)
    cmplw r3, r0
    bne lbl_fn_80099E9C_00000D3C
    b lbl_fn_80099E9C_00000D4C
lbl_fn_80099E9C_00000D3C:
    addi r7, r7, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_80099E9C_00000D24
lbl_fn_80099E9C_00000D48:
    li r6, -0x1
lbl_fn_80099E9C_00000D4C:
    addi r0, r30, 0x3c8
    stw r6, 0x3c0(r30)
    cmplw r31, r0
    stfs f31, 0x3c4(r30)
    beq lbl_fn_80099E9C_00000D7C
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r30, 0x3c8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80099E9C_00000D7C:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80099F68(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80099F70(void)
{
    nofralloc
    blr
}

asm void fn_80099F74(void)
{
    nofralloc
    mtctr r6
    subi r5, r5, 0x8
lbl_fn_80099F74_00000DAC:
    lwz r7, 0x4(r3)
    lwz r8, 0xc(r3)
    lfs f0, 0x8(r3)
    lfs f1, 0x10(r3)
    mulli r7, r7, 0x30
    mulli r8, r8, 0x30
    psq_lux f2, r7, r4, 0, 0
    psq_lu f3, 0x8(r7), 0, 0
    psq_lu f4, 0x8(r7), 0, 0
    psq_lu f5, 0x8(r7), 0, 0
    psq_lu f6, 0x8(r7), 0, 0
    psq_lu f7, 0x8(r7), 0, 0
    psq_lux f8, r8, r4, 0, 0
    psq_lu f9, 0x8(r8), 0, 0
    psq_lu f10, 0x8(r8), 0, 0
    psq_lu f11, 0x8(r8), 0, 0
    psq_lu f12, 0x8(r8), 0, 0
    psq_lu f13, 0x8(r8), 0, 0
    ps_muls0 f2, f2, f0
    ps_muls0 f3, f3, f0
    ps_muls0 f4, f4, f0
    ps_muls0 f5, f5, f0
    ps_muls0 f6, f6, f0
    ps_muls0 f7, f7, f0
    ps_madds0 f2, f8, f1, f2
    ps_madds0 f3, f9, f1, f3
    ps_madds0 f4, f10, f1, f4
    ps_madds0 f5, f11, f1, f5
    ps_madds0 f6, f12, f1, f6
    ps_madds0 f7, f13, f1, f7
    psq_stu f2, 0x8(r5), 0, 0
    psq_stu f3, 0x8(r5), 0, 0
    psq_stu f4, 0x8(r5), 0, 0
    psq_stu f5, 0x8(r5), 0, 0
    psq_stu f6, 0x8(r5), 0, 0
    psq_stu f7, 0x8(r5), 0, 0
    addi r3, r3, 0x14
    bdnz lbl_fn_80099F74_00000DAC
    blr
}

asm void fn_8009A018(void)
{
    nofralloc
    mtctr r6
    subi r5, r5, 0x8
lbl_fn_8009A018_00000E50:
    lwz r7, 0x4(r3)
    lwz r8, 0xc(r3)
    lfs f0, 0x8(r3)
    lfs f1, 0x10(r3)
    mulli r7, r7, 0x30
    mulli r8, r8, 0x30
    psq_lux f2, r7, r4, 0, 0
    psq_lu f3, 0x8(r7), 0, 0
    psq_lu f4, 0x8(r7), 0, 0
    psq_lu f5, 0x8(r7), 0, 0
    psq_lu f6, 0x8(r7), 0, 0
    psq_lu f7, 0x8(r7), 0, 0
    psq_lux f8, r8, r4, 0, 0
    psq_lu f9, 0x8(r8), 0, 0
    psq_lu f10, 0x8(r8), 0, 0
    psq_lu f11, 0x8(r8), 0, 0
    psq_lu f12, 0x8(r8), 0, 0
    psq_lu f13, 0x8(r8), 0, 0
    ps_muls0 f2, f2, f0
    ps_muls0 f3, f3, f0
    ps_muls0 f4, f4, f0
    ps_muls0 f5, f5, f0
    ps_muls0 f6, f6, f0
    ps_muls0 f7, f7, f0
    ps_madds0 f2, f8, f1, f2
    ps_madds0 f3, f9, f1, f3
    ps_madds0 f4, f10, f1, f4
    ps_madds0 f5, f11, f1, f5
    ps_madds0 f6, f12, f1, f6
    ps_madds0 f7, f13, f1, f7
    lwz r8, 0x14(r3)
    lfs f1, 0x18(r3)
    mulli r8, r8, 0x30
    psq_lux f8, r8, r4, 0, 0
    psq_lu f9, 0x8(r8), 0, 0
    psq_lu f10, 0x8(r8), 0, 0
    psq_lu f11, 0x8(r8), 0, 0
    psq_lu f12, 0x8(r8), 0, 0
    psq_lu f13, 0x8(r8), 0, 0
    ps_madds0 f2, f8, f1, f2
    ps_madds0 f3, f9, f1, f3
    ps_madds0 f4, f10, f1, f4
    ps_madds0 f5, f11, f1, f5
    ps_madds0 f6, f12, f1, f6
    ps_madds0 f7, f13, f1, f7
    psq_stu f2, 0x8(r5), 0, 0
    psq_stu f3, 0x8(r5), 0, 0
    psq_stu f4, 0x8(r5), 0, 0
    psq_stu f5, 0x8(r5), 0, 0
    psq_stu f6, 0x8(r5), 0, 0
    psq_stu f7, 0x8(r5), 0, 0
    addi r3, r3, 0x1c
    bdnz lbl_fn_8009A018_00000E50
    blr
}

asm void fn_8009A0F8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x54(r1)
    stmw r24, 0x30(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r6
    beq lbl_fn_8009A0F8_000010DC
    lis r3, 0xe000
    cmpwi r6, 0x20
    addi r4, r3, 0x1800
    li r7, 0x0
    addi r0, r3, 0x1aa0
    stw r5, 0x8(r1)
    li r27, 0x20
    stw r6, 0xc(r1)
    stw r7, 0x10(r1)
    stw r4, 0x14(r1)
    stw r0, 0x18(r1)
    bge lbl_fn_8009A0F8_00000F80
    mr r27, r26
lbl_fn_8009A0F8_00000F80:
    cmpwi r27, 0x0
    beq lbl_fn_8009A0F8_00000FE0
    lwz r0, 0x10(r1)
    addi r6, r1, 0x1c
    lwz r4, 0x8(r1)
    addi r3, r1, 0x14
    slwi r0, r0, 2
    clrlwi r4, r4, 27
    stwx r4, r6, r0
    mulli r5, r27, 0x14
    lwz r4, 0x10(r1)
    lwz r0, 0x8(r1)
    slwi r7, r4, 2
    lwzx r4, r6, r7
    lwzx r3, r3, r7
    subf r4, r4, r0
    bl fn_805ED460
    mulli r3, r27, 0x14
    lwz r4, 0x8(r1)
    lwz r0, 0xc(r1)
    add r3, r4, r3
    subf r0, r27, r0
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
lbl_fn_8009A0F8_00000FE0:
    addi r31, r1, 0x8
    li r27, 0x0
lbl_fn_8009A0F8_00000FE8:
    cmpwi r26, 0x20
    li r29, 0x20
    bgt lbl_fn_8009A0F8_00000FF8
    mr r29, r26
lbl_fn_8009A0F8_00000FF8:
    lwz r4, 0x10(r1)
    addi r5, r1, 0x8
    lwz r6, 0xc(r1)
    li r30, 0x20
    slwi r3, r4, 2
    addi r0, r4, 0x1
    add r5, r5, r3
    cmpwi r6, 0x20
    lwz r4, 0x14(r5)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    lwz r5, 0xc(r5)
    mulli r4, r4, 0x14
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x10(r1)
    add r28, r5, r4
    bge lbl_fn_8009A0F8_00001044
    mr r30, r6
lbl_fn_8009A0F8_00001044:
    cmpwi r30, 0x0
    beq lbl_fn_8009A0F8_000010A8
    lwz r0, 0x10(r1)
    mulli r5, r30, 0x14
    lwz r4, 0x8(r1)
    slwi r0, r0, 2
    add r3, r31, r0
    clrlwi r0, r4, 27
    stw r0, 0x14(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x8(r1)
    slwi r3, r3, 2
    add r3, r31, r3
    lwz r4, 0x14(r3)
    lwz r3, 0xc(r3)
    subf r4, r4, r0
    bl fn_805ED460
    mulli r4, r30, 0x14
    lwz r5, 0x8(r1)
    lwz r0, 0xc(r1)
    add r4, r5, r4
    subf r0, r30, r0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    b lbl_fn_8009A0F8_000010AC
lbl_fn_8009A0F8_000010A8:
    li r3, 0x0
lbl_fn_8009A0F8_000010AC:
    add r3, r27, r3
    bl fn_805ED5A0
    mr r3, r28
    mr r4, r25
    mr r5, r24
    mr r6, r29
    li r27, 0x0
    bl fn_80099F74
    mulli r0, r29, 0x30
    subf. r26, r29, r26
    add r24, r24, r0
    bgt lbl_fn_8009A0F8_00000FE8
lbl_fn_8009A0F8_000010DC:
    lmw r24, 0x30(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8009A2C0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x54(r1)
    stmw r24, 0x30(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r6
    beq lbl_fn_8009A2C0_000012AC
    lis r3, 0xe000
    cmpwi r6, 0x20
    addi r4, r3, 0x1800
    li r7, 0x0
    addi r0, r3, 0x1ba0
    stw r5, 0x8(r1)
    li r27, 0x20
    stw r6, 0xc(r1)
    stw r7, 0x10(r1)
    stw r4, 0x14(r1)
    stw r0, 0x18(r1)
    bge lbl_fn_8009A2C0_00001148
    mr r27, r26
lbl_fn_8009A2C0_00001148:
    cmpwi r27, 0x0
    beq lbl_fn_8009A2C0_000011A8
    lwz r0, 0x10(r1)
    addi r6, r1, 0x1c
    lwz r4, 0x8(r1)
    addi r3, r1, 0x14
    slwi r0, r0, 2
    clrlwi r4, r4, 27
    stwx r4, r6, r0
    mulli r5, r27, 0x1c
    lwz r4, 0x10(r1)
    lwz r0, 0x8(r1)
    slwi r7, r4, 2
    lwzx r4, r6, r7
    lwzx r3, r3, r7
    subf r4, r4, r0
    bl fn_805ED460
    mulli r3, r27, 0x1c
    lwz r4, 0x8(r1)
    lwz r0, 0xc(r1)
    add r3, r4, r3
    subf r0, r27, r0
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
lbl_fn_8009A2C0_000011A8:
    addi r31, r1, 0x8
    li r27, 0x0
lbl_fn_8009A2C0_000011B0:
    cmpwi r26, 0x20
    li r29, 0x20
    bgt lbl_fn_8009A2C0_000011C0
    mr r29, r26
lbl_fn_8009A2C0_000011C0:
    lwz r4, 0x10(r1)
    addi r5, r1, 0x8
    lwz r6, 0xc(r1)
    li r30, 0x20
    slwi r3, r4, 2
    addi r0, r4, 0x1
    add r5, r5, r3
    cmpwi r6, 0x20
    lwz r4, 0x14(r5)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    lwz r5, 0xc(r5)
    mulli r4, r4, 0x1c
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x10(r1)
    add r28, r5, r4
    bge lbl_fn_8009A2C0_0000120C
    mr r30, r6
lbl_fn_8009A2C0_0000120C:
    cmpwi r30, 0x0
    beq lbl_fn_8009A2C0_00001270
    lwz r0, 0x10(r1)
    mulli r5, r30, 0x1c
    lwz r4, 0x8(r1)
    slwi r0, r0, 2
    add r3, r31, r0
    clrlwi r0, r4, 27
    stw r0, 0x14(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x8(r1)
    slwi r3, r3, 2
    add r3, r31, r3
    lwz r4, 0x14(r3)
    lwz r3, 0xc(r3)
    subf r4, r4, r0
    bl fn_805ED460
    mulli r4, r30, 0x1c
    lwz r5, 0x8(r1)
    lwz r0, 0xc(r1)
    add r4, r5, r4
    subf r0, r30, r0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    b lbl_fn_8009A2C0_00001274
lbl_fn_8009A2C0_00001270:
    li r3, 0x0
lbl_fn_8009A2C0_00001274:
    add r3, r27, r3
    bl fn_805ED5A0
    lwz r5, 0x0(r24)
    mr r3, r28
    mr r4, r25
    mr r6, r29
    li r27, 0x0
    bl fn_8009A018
    mulli r0, r29, 0x30
    lwz r3, 0x0(r24)
    subf. r26, r29, r26
    add r0, r3, r0
    stw r0, 0x0(r24)
    bgt lbl_fn_8009A2C0_000011B0
lbl_fn_8009A2C0_000012AC:
    lmw r24, 0x30(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8009A490(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r31, r4
    mr r30, r5
    mr r28, r6
    mr r29, r7
    b lbl_fn_8009A490_00001318
lbl_fn_8009A490_000012E8:
    mr r3, r30
    mr r4, r31
    mr r5, r27
    bl fn_805F89F0
    mr r3, r29
    mr r4, r27
    mr r5, r27
    bl fn_805F89F0
    addi r27, r27, 0x30
    subi r28, r28, 0x1
    addi r31, r31, 0x30
    addi r30, r30, 0x30
lbl_fn_8009A490_00001318:
    cmpwi r28, 0x0
    bne lbl_fn_8009A490_000012E8
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8009A504(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r30, r4
    mr r27, r5
    mr r31, r6
    mr r28, r7
    mr r29, r8
    b lbl_fn_8009A504_00001398
lbl_fn_8009A504_00001360:
    lwz r0, 0x0(r31)
    mr r4, r30
    mr r5, r26
    mulli r0, r0, 0x30
    add r3, r27, r0
    bl fn_805F89F0
    mr r3, r29
    mr r4, r26
    mr r5, r26
    bl fn_805F89F0
    addi r26, r26, 0x30
    addi r30, r30, 0x30
    addi r31, r31, 0x4
    subi r28, r28, 0x1
lbl_fn_8009A504_00001398:
    cmpwi r28, 0x0
    bne lbl_fn_8009A504_00001360
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8009A584(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r0, 0x44(r5)
    cmpwi r0, 0x0
    blelr
    mr r5, r4
    li r4, 0x0
    li r6, 0x0
    b fn_8009A5CC
    blr
}

asm void fn_8009A5A8(void)
{
    nofralloc
    lwz r6, 0x0(r3)
    lwz r0, 0x44(r6)
    cmpwi r0, 0x0
    blelr
    mr r6, r4
    li r4, 0x0
    li r7, 0x0
    b fn_8009ADA4
    blr
}

asm void fn_8009A5CC(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    addi r11, r1, 0x270
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    stfd f28, 0x2a0(r1)
    psq_st f28, 0x2a8(r1), 0, 0
    stfd f27, 0x290(r1)
    psq_st f27, 0x298(r1), 0, 0
    stfd f26, 0x280(r1)
    psq_st f26, 0x288(r1), 0, 0
    stfd f25, 0x270(r1)
    psq_st f25, 0x278(r1), 0, 0
    bl _savegpr_14
    lis r0, 0x8077
    stw r0, 0x21c(r1)
    lis r0, 0x8077
    mr r15, r3
    stw r0, 0x220(r1)
    lis r26, lbl_807C7050@ha
    lwz r3, 0x21c(r1)
    lis r30, lbl_80778930@ha
    lis r29, lbl_80766768@ha
    lis r0, lbl_80775B30@ha
    addi r3, r3, 0x5b60
    stw r3, 0x21c(r1)
    lwz r3, 0x220(r1)
    mr r16, r5
    lfs f29, lbl_80880C38
    mr r17, r6
    addi r3, r3, 0x5b98
    stw r3, 0x220(r1)
    mr r3, r0
    lfs f30, lbl_80880C40
    addi r3, r3, lbl_80775B30@l
    lfs f31, lbl_80880C3C
    lfs f28, lbl_80880C44
    addi r23, r1, 0xf0
    stw r3, 0x224(r1)
    addi r24, r1, 0x1e0
    addi r28, r1, 0x1b0
    addi r27, r1, 0x150
    addi r25, r1, 0x98
    addi r26, r26, lbl_807C7050@l
    addi r30, r30, lbl_80778930@l
    addi r29, r29, lbl_80766768@l
    addi r21, r1, 0x180
    addi r22, r1, 0xc0
    li r14, 0x0
    b lbl_fn_8009A5CC_00001B7C
lbl_fn_8009A5CC_000014D8:
    lwz r3, 0x0(r15)
    slwi r0, r4, 2
    lwz r4, 0x8(r15)
    lwz r3, 0x48(r3)
    cmpwi r4, 0x0
    lwzx r20, r3, r0
    beq lbl_fn_8009A5CC_00001504
    lwz r0, 0x18(r20)
    slwi r0, r0, 2
    lwzx r19, r4, r0
    b lbl_fn_8009A5CC_00001508
lbl_fn_8009A5CC_00001504:
    lwz r19, 0x18(r20)
lbl_fn_8009A5CC_00001508:
    psq_l f1, 0x0(r16), 0, 0
    psq_l f2, 0x8(r16), 0, 0
    psq_l f3, 0x10(r16), 0, 0
    psq_l f4, 0x18(r16), 0, 0
    psq_l f5, 0x20(r16), 0, 0
    psq_l f6, 0x28(r16), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    lwz r0, 0x14(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8009A5CC_00001568
    lwz r3, 0xc(r15)
    slwi r0, r19, 1
    lhax r0, r3, r0
    cmpwi r0, -0x1
    beq lbl_fn_8009A5CC_00001568
    mulli r0, r0, 0x2c
    lwz r3, 0x10(r15)
    add r18, r3, r0
    b lbl_fn_8009A5CC_0000156C
lbl_fn_8009A5CC_00001568:
    li r18, 0x0
lbl_fn_8009A5CC_0000156C:
    psq_l f1, 0x4c(r20), 0, 0
    cmpwi r18, 0x0
    lfs f2, 0x54(r20)
    addi r3, r1, 0xb4
    stfs f2, 0xbc(r1)
    psq_st f1, 0x0(r3), 0, 0
    beq lbl_fn_8009A5CC_000015C8
    lwz r0, 0x4(r18)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8009A5CC_000015C8
    lfs f9, 0xb4(r1)
    frsp f7, f2
    lfs f0, 0x8(r18)
    lfs f8, 0xb8(r1)
    fadds f0, f9, f0
    stfs f0, 0xb4(r1)
    lfs f0, 0xc(r18)
    fadds f0, f8, f0
    stfs f0, 0xb8(r1)
    lfs f0, 0x10(r18)
    fadds f0, f7, f0
    stfs f0, 0xbc(r1)
lbl_fn_8009A5CC_000015C8:
    lwz r0, 0x30(r20)
    cmpwi r0, 0x0
    bne lbl_fn_8009A5CC_00001620
    cmpwi r17, 0x0
    beq lbl_fn_8009A5CC_00001638
    mr r4, r17
    addi r3, r1, 0x1b0
    addi r5, r1, 0x150
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    b lbl_fn_8009A5CC_00001638
lbl_fn_8009A5CC_00001620:
    cmpwi r17, 0x0
    beq lbl_fn_8009A5CC_00001638
    addi r4, r1, 0xb4
    mr r3, r17
    mr r5, r4
    bl fn_805F93C0
lbl_fn_8009A5CC_00001638:
    psq_l f1, 0x40(r20), 0, 0
    addi r3, r1, 0xa8
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x48(r20)
    lfs f0, 0xa8(r1)
    stfs f2, 0xb0(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_8009A5CC_00001678
    lfs f0, 0xac(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_8009A5CC_00001678
    frsp f0, f2
    fcmpu cr0, f29, f0
    bne lbl_fn_8009A5CC_00001678
    li r0, 0x1
lbl_fn_8009A5CC_00001678:
    cmpwi r0, 0x0
    beq lbl_fn_8009A5CC_00001694
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    b lbl_fn_8009A5CC_00001750
lbl_fn_8009A5CC_00001694:
    lfs f0, 0xa8(r1)
    addi r3, r1, 0x30
    lfs f26, 0xac(r1)
    addi r4, r1, 0x24
    fmuls f0, f0, f30
    lfs f25, 0xb0(r1)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f26, f30
    addi r3, r1, 0x34
    addi r4, r1, 0x28
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f27, 0x28(r1)
    addi r3, r1, 0x78
    lfs f12, 0x30(r1)
    lfs f9, 0x34(r1)
    lfs f11, 0x24(r1)
    fmuls f7, f12, f27
    lfs f13, 0x38(r1)
    fmuls f0, f12, f9
    fmuls f8, f11, f9
    lfs f26, 0x2c(r1)
    fmuls f7, f13, f7
    fmuls f9, f9, f13
    fmuls f25, f27, f26
    fmadds f7, f26, f8, f7
    fmuls f10, f12, f9
    fmuls f9, f11, f9
    stfs f7, 0x7c(r1)
    fmuls f7, f11, f27
    fmuls f0, f26, f0
    fmadds f10, f11, f25, f10
    fmsubs f8, f12, f25, f9
    fmsubs f0, f13, f7, f0
    stfs f10, 0x84(r1)
    stfs f8, 0x78(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
lbl_fn_8009A5CC_00001750:
    cmpwi r18, 0x0
    beq lbl_fn_8009A5CC_00001820
    lwz r0, 0x4(r18)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8009A5CC_00001820
    lfs f0, 0x14(r18)
    addi r3, r1, 0x18
    lfs f26, 0x18(r18)
    addi r4, r1, 0xc
    fmuls f0, f0, f30
    lfs f25, 0x1c(r18)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f26, f30
    addi r3, r1, 0x1c
    addi r4, r1, 0x10
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f26, 0x10(r1)
    addi r4, r1, 0x98
    lfs f12, 0x18(r1)
    mr r5, r4
    lfs f9, 0x1c(r1)
    addi r3, r1, 0x68
    lfs f11, 0xc(r1)
    fmuls f7, f12, f26
    lfs f13, 0x20(r1)
    fmuls f0, f12, f9
    fmuls f8, f11, f9
    lfs f27, 0x14(r1)
    fmuls f7, f13, f7
    fmuls f9, f9, f13
    fmuls f25, f26, f27
    fmadds f7, f27, f8, f7
    fmuls f10, f12, f9
    fmuls f9, f11, f9
    stfs f7, 0x6c(r1)
    fmuls f7, f11, f26
    fmuls f0, f27, f0
    fmadds f10, f11, f25, f10
    fmsubs f8, f12, f25, f9
    fmsubs f0, f13, f7, f0
    stfs f10, 0x74(r1)
    stfs f8, 0x68(r1)
    stfs f0, 0x70(r1)
    bl fn_805F99F0
lbl_fn_8009A5CC_00001820:
    addi r3, r1, 0x120
    addi r4, r1, 0x98
    bl fn_805F9190
    lfs f8, 0xb4(r1)
    addi r3, r1, 0x1b0
    lfs f7, 0xb8(r1)
    addi r4, r1, 0x120
    lfs f0, 0xbc(r1)
    addi r5, r1, 0x180
    stfs f8, 0x12c(r1)
    stfs f7, 0x13c(r1)
    stfs f0, 0x14c(r1)
    bl fn_805F89F0
    lfs f2, 0x3c(r20)
    cmpwi r18, 0x0
    psq_l f1, 0x34(r20), 0, 0
    addi r3, r1, 0x88
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x90(r1)
    beq lbl_fn_8009A5CC_000018B0
    lwz r0, 0x4(r18)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8009A5CC_000018B0
    frsp f7, f2
    lfs f0, 0x28(r18)
    lfs f10, 0x88(r1)
    lfs f9, 0x20(r18)
    fmuls f0, f7, f0
    lfs f8, 0x8c(r1)
    lfs f7, 0x24(r18)
    fmuls f9, f10, f9
    stfs f0, 0x90(r1)
    fmuls f0, f8, f7
    stfs f9, 0x88(r1)
    stfs f0, 0x8c(r1)
lbl_fn_8009A5CC_000018B0:
    lwz r0, 0x18(r15)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8009A5CC_000018DC
    lwz r4, 0x0(r29)
    lwz r3, 0x4(r29)
    lwz r0, 0x8(r29)
    stw r4, 0x210(r1)
    stw r3, 0x214(r1)
    stw r0, 0x218(r1)
    b lbl_fn_8009A5CC_000018F4
lbl_fn_8009A5CC_000018DC:
    lwz r4, 0x0(r30)
    lwz r3, 0x4(r30)
    lwz r0, 0x8(r30)
    stw r4, 0x210(r1)
    stw r3, 0x214(r1)
    stw r0, 0x218(r1)
lbl_fn_8009A5CC_000018F4:
    lwz r5, 0x210(r1)
    addi r3, r1, 0x5c
    lwz r4, 0x214(r1)
    lwz r0, 0x218(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8009A5CC_00001A60
    lwz r18, 0x48(r15)
    lwz r3, 0x44(r15)
    slwi r4, r18, 2
    subf r0, r18, r3
    mtctr r0
    cmplw r18, r3
    bge lbl_fn_8009A5CC_00001A60
lbl_fn_8009A5CC_00001938:
    lwz r3, 0x40(r15)
    lwzx r0, r3, r4
    cmplw r19, r0
    bne lbl_fn_8009A5CC_00001A54
    stw r28, 0x48(r1)
    stw r25, 0x4c(r1)
    lwz r0, 0x18(r15)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8009A5CC_00001A28
    lwz r0, 0x21c(r1)
    lis r3, lbl_80775BC8@ha
    stw r0, 0x50(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r14, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x54(r1)
    mr r31, r3
    stw r3, 0x40(r1)
    li r3, 0x10
    stw r0, 0x44(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8009A5CC_000019C8
    li r0, 0x1
    stw r0, 0x4(r3)
    li r0, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x220(r1)
    stw r0, 0x0(r3)
    stw r31, 0xc(r3)
lbl_fn_8009A5CC_000019C8:
    cmpwi r14, 0x0
    stw r3, 0x58(r1)
    stw r14, 0x40(r1)
    beq lbl_fn_8009A5CC_000019E0
    li r3, 0x0
    bl fn_80084C24
lbl_fn_8009A5CC_000019E0:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x54(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lwz r0, 0x224(r1)
    addi r3, r1, 0x50
    stw r0, 0x50(r1)
    bl fn_800DCA6C
    addic. r0, r1, 0x50
    beq lbl_fn_8009A5CC_00001A28
    mr r3, r0
    addic. r3, r3, 0x4
    beq lbl_fn_8009A5CC_00001A28
    beq lbl_fn_8009A5CC_00001A28
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8009A5CC_00001A28
    bl fn_806952C4
lbl_fn_8009A5CC_00001A28:
    lwz r6, 0x18(r15)
    mr r5, r20
    addi r3, r15, 0x1c
    addi r4, r1, 0x180
    lwz r12, 0x4(r6)
    addi r6, r1, 0x48
    mtctr r12
    bctrl
    addi r0, r18, 0x1
    stw r0, 0x48(r15)
    b lbl_fn_8009A5CC_00001A60
lbl_fn_8009A5CC_00001A54:
    addi r4, r4, 0x4
    addi r18, r18, 0x1
    bdnz lbl_fn_8009A5CC_00001938
lbl_fn_8009A5CC_00001A60:
    lfs f0, 0x88(r1)
    li r18, 0x0
    fcmpu cr0, f28, f0
    bne lbl_fn_8009A5CC_00001A88
    lfs f0, 0x8c(r1)
    fcmpu cr0, f28, f0
    bne lbl_fn_8009A5CC_00001A88
    lfs f0, 0x90(r1)
    fcmpu cr0, f28, f0
    beq lbl_fn_8009A5CC_00001B20
lbl_fn_8009A5CC_00001A88:
    lfs f1, 0x88(r1)
    addi r3, r1, 0xf0
    lfs f2, 0x8c(r1)
    lfs f3, 0x90(r1)
    bl fn_805F9160
    psq_l f1, 0x0(r23), 0, 0
    mr r18, r24
    psq_l f2, 0x8(r23), 0, 0
    mr r4, r24
    psq_l f3, 0x10(r23), 0, 0
    addi r3, r1, 0x180
    psq_l f4, 0x18(r23), 0, 0
    addi r5, r1, 0xc0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
    bl fn_805F89F0
    mulli r0, r19, 0x30
    lwz r3, 0x4(r15)
    psq_l f2, 0x8(r22), 0, 0
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    add r3, r3, r0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_8009A5CC_00001B5C
lbl_fn_8009A5CC_00001B20:
    mulli r0, r19, 0x30
    lwz r3, 0x4(r15)
    psq_l f2, 0x8(r21), 0, 0
    psq_l f3, 0x10(r21), 0, 0
    psq_l f4, 0x18(r21), 0, 0
    add r3, r3, r0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_8009A5CC_00001B5C:
    lwz r4, 0x20(r20)
    cmpwi r4, 0x0
    blt lbl_fn_8009A5CC_00001B78
    mr r3, r15
    mr r6, r18
    addi r5, r1, 0x180
    bl fn_8009A5CC
lbl_fn_8009A5CC_00001B78:
    lwz r4, 0x24(r20)
lbl_fn_8009A5CC_00001B7C:
    cmpwi r4, 0x0
    bge lbl_fn_8009A5CC_000014D8
    addi r11, r1, 0x270
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    psq_l f28, 0x2a8(r1), 0, 0
    lfd f28, 0x2a0(r1)
    psq_l f27, 0x298(r1), 0, 0
    lfd f27, 0x290(r1)
    psq_l f26, 0x288(r1), 0, 0
    lfd f26, 0x280(r1)
    psq_l f25, 0x278(r1), 0, 0
    lfd f25, 0x270(r1)
    bl _restgpr_14
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_8009ADA4(void)
{
    nofralloc
    stwu r1, -0x390(r1)
    mflr r0
    stw r0, 0x394(r1)
    addi r11, r1, 0x320
    stfd f31, 0x380(r1)
    psq_st f31, 0x388(r1), 0, 0
    stfd f30, 0x370(r1)
    psq_st f30, 0x378(r1), 0, 0
    stfd f29, 0x360(r1)
    psq_st f29, 0x368(r1), 0, 0
    stfd f28, 0x350(r1)
    psq_st f28, 0x358(r1), 0, 0
    stfd f27, 0x340(r1)
    psq_st f27, 0x348(r1), 0, 0
    stfd f26, 0x330(r1)
    psq_st f26, 0x338(r1), 0, 0
    stfd f25, 0x320(r1)
    psq_st f25, 0x328(r1), 0, 0
    bl _savegpr_14
    lis r0, 0x8077
    stw r0, 0x2c0(r1)
    lis r0, 0x8077
    mr r15, r3
    stw r0, 0x2c4(r1)
    lis r26, lbl_807C7050@ha
    lwz r3, 0x2c0(r1)
    lis r29, lbl_80766768@ha
    lis r30, lbl_8077893C@ha
    lis r31, lbl_80778948@ha
    addi r3, r3, 0x5b60
    stw r3, 0x2c0(r1)
    lwz r3, 0x2c4(r1)
    lis r0, lbl_80775B30@ha
    lfs f29, lbl_80880C38
    mr r16, r6
    addi r3, r3, 0x5b98
    stw r3, 0x2c4(r1)
    mr r3, r0
    lfs f30, lbl_80880C40
    addi r3, r3, lbl_80775B30@l
    lfs f31, lbl_80880C3C
    lfs f28, lbl_80880C44
    mr r17, r7
    stw r5, 0x8(r1)
    addi r23, r1, 0x188
    addi r24, r1, 0x218
    addi r25, r1, 0x138
    stw r3, 0x2c8(r1)
    addi r26, r26, lbl_807C7050@l
    addi r28, r1, 0x278
    addi r14, r1, 0x1e8
    addi r30, r30, lbl_8077893C@l
    addi r29, r29, lbl_80766768@l
    addi r21, r1, 0x248
    addi r22, r1, 0x158
    addi r31, r31, lbl_80778948@l
    b lbl_fn_8009ADA4_00002710
lbl_fn_8009ADA4_00001CB8:
    lwz r3, 0x0(r15)
    slwi r0, r4, 2
    lwz r4, 0x8(r15)
    lwz r3, 0x48(r3)
    cmpwi r4, 0x0
    lwzx r19, r3, r0
    beq lbl_fn_8009ADA4_00001CE4
    lwz r0, 0x18(r19)
    slwi r0, r0, 2
    lwzx r20, r4, r0
    b lbl_fn_8009ADA4_00001CE8
lbl_fn_8009ADA4_00001CE4:
    lwz r20, 0x18(r19)
lbl_fn_8009ADA4_00001CE8:
    psq_l f1, 0x0(r16), 0, 0
    mulli r3, r20, 0x2c
    psq_l f2, 0x8(r16), 0, 0
    psq_l f3, 0x10(r16), 0, 0
    psq_l f4, 0x18(r16), 0, 0
    psq_l f5, 0x20(r16), 0, 0
    psq_l f6, 0x28(r16), 0, 0
    lwz r0, 0x8(r1)
    psq_st f1, 0x0(r28), 0, 0
    add r18, r0, r3
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    lwz r0, 0x14(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8009ADA4_00001D54
    lwz r3, 0xc(r15)
    slwi r0, r20, 1
    lhax r0, r3, r0
    cmpwi r0, -0x1
    beq lbl_fn_8009ADA4_00001D54
    mulli r0, r0, 0x2c
    lwz r3, 0x10(r15)
    add r27, r3, r0
    b lbl_fn_8009ADA4_00001D58
lbl_fn_8009ADA4_00001D54:
    li r27, 0x0
lbl_fn_8009ADA4_00001D58:
    lwz r0, 0x0(r18)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8009ADA4_00001D70
    addi r3, r18, 0x4
    b lbl_fn_8009ADA4_00001D84
lbl_fn_8009ADA4_00001D70:
    psq_l f1, 0x4c(r19), 0, 0
    addi r3, r1, 0x104
    lfs f2, 0x54(r19)
    stfs f2, 0x10c(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8009ADA4_00001D84:
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r27, 0x0
    lfs f2, 0x8(r3)
    addi r3, r1, 0x148
    stfs f2, 0x150(r1)
    psq_st f1, 0x0(r3), 0, 0
    beq lbl_fn_8009ADA4_00001E10
    lwz r3, 0x4(r27)
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8009ADA4_00001DD4
    lfs f2, 0x54(r19)
    addi r3, r1, 0xf8
    psq_l f1, 0x4c(r19), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x148
    stfs f2, 0x100(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x150(r1)
    b lbl_fn_8009ADA4_00001E10
lbl_fn_8009ADA4_00001DD4:
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_8009ADA4_00001E10
    lfs f9, 0x148(r1)
    frsp f7, f2
    lfs f0, 0x8(r27)
    lfs f8, 0x14c(r1)
    fadds f0, f9, f0
    stfs f0, 0x148(r1)
    lfs f0, 0xc(r27)
    fadds f0, f8, f0
    stfs f0, 0x14c(r1)
    lfs f0, 0x10(r27)
    fadds f0, f7, f0
    stfs f0, 0x150(r1)
lbl_fn_8009ADA4_00001E10:
    lwz r0, 0x30(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8009ADA4_00001E68
    cmpwi r17, 0x0
    beq lbl_fn_8009ADA4_00001E80
    mr r4, r17
    addi r3, r1, 0x278
    addi r5, r1, 0x1e8
    bl fn_805F89F0
    psq_l f1, 0x0(r14), 0, 0
    psq_l f2, 0x8(r14), 0, 0
    psq_l f3, 0x10(r14), 0, 0
    psq_l f4, 0x18(r14), 0, 0
    psq_l f5, 0x20(r14), 0, 0
    psq_l f6, 0x28(r14), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    b lbl_fn_8009ADA4_00001E80
lbl_fn_8009ADA4_00001E68:
    cmpwi r17, 0x0
    beq lbl_fn_8009ADA4_00001E80
    addi r4, r1, 0x148
    mr r3, r17
    mr r5, r4
    bl fn_805F93C0
lbl_fn_8009ADA4_00001E80:
    cmpwi r27, 0x0
    beq lbl_fn_8009ADA4_000020A0
    lwz r0, 0x0(r18)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8009ADA4_00001EBC
    lwz r0, 0x4(r27)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8009ADA4_00001EBC
    psq_l f1, 0x10(r18), 0, 0
    psq_l f2, 0x18(r18), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    b lbl_fn_8009ADA4_00001FD4
lbl_fn_8009ADA4_00001EBC:
    psq_l f1, 0x40(r19), 0, 0
    addi r3, r1, 0x128
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x48(r19)
    lfs f0, 0x128(r1)
    stfs f2, 0x130(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_8009ADA4_00001EFC
    lfs f0, 0x12c(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_8009ADA4_00001EFC
    frsp f0, f2
    fcmpu cr0, f29, f0
    bne lbl_fn_8009ADA4_00001EFC
    li r0, 0x1
lbl_fn_8009ADA4_00001EFC:
    cmpwi r0, 0x0
    beq lbl_fn_8009ADA4_00001F18
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    b lbl_fn_8009ADA4_00001FD4
lbl_fn_8009ADA4_00001F18:
    lfs f0, 0x128(r1)
    addi r3, r1, 0x50
    lfs f26, 0x12c(r1)
    addi r4, r1, 0x44
    fmuls f0, f0, f30
    lfs f25, 0x130(r1)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f26, f30
    addi r3, r1, 0x54
    addi r4, r1, 0x48
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x58
    addi r4, r1, 0x4c
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f27, 0x48(r1)
    addi r3, r1, 0xe8
    lfs f12, 0x50(r1)
    lfs f9, 0x54(r1)
    lfs f11, 0x44(r1)
    fmuls f7, f12, f27
    lfs f13, 0x58(r1)
    fmuls f0, f12, f9
    fmuls f8, f11, f9
    lfs f26, 0x4c(r1)
    fmuls f7, f13, f7
    fmuls f9, f9, f13
    fmuls f25, f27, f26
    fmadds f7, f26, f8, f7
    fmuls f10, f12, f9
    fmuls f9, f11, f9
    stfs f7, 0xec(r1)
    fmuls f7, f11, f27
    fmuls f0, f26, f0
    fmadds f10, f11, f25, f10
    fmsubs f8, f12, f25, f9
    fmsubs f0, f13, f7, f0
    stfs f10, 0xf4(r1)
    stfs f8, 0xe8(r1)
    stfs f0, 0xf0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
lbl_fn_8009ADA4_00001FD4:
    lwz r0, 0x4(r27)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8009ADA4_000021DC
    lfs f0, 0x14(r27)
    addi r3, r1, 0x38
    lfs f26, 0x18(r27)
    addi r4, r1, 0x2c
    fmuls f0, f0, f30
    lfs f25, 0x1c(r27)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f26, f30
    addi r3, r1, 0x3c
    addi r4, r1, 0x30
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x40
    addi r4, r1, 0x34
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f27, 0x30(r1)
    addi r4, r1, 0x138
    lfs f12, 0x38(r1)
    mr r5, r4
    lfs f9, 0x3c(r1)
    addi r3, r1, 0xd8
    lfs f11, 0x2c(r1)
    fmuls f7, f12, f27
    lfs f13, 0x40(r1)
    fmuls f0, f12, f9
    fmuls f8, f11, f9
    lfs f26, 0x34(r1)
    fmuls f7, f13, f7
    fmuls f9, f9, f13
    fmuls f25, f27, f26
    fmadds f7, f26, f8, f7
    fmuls f10, f12, f9
    fmuls f9, f11, f9
    stfs f7, 0xdc(r1)
    fmuls f7, f11, f27
    fmuls f0, f26, f0
    fmadds f10, f11, f25, f10
    fmsubs f8, f12, f25, f9
    fmsubs f0, f13, f7, f0
    stfs f10, 0xe4(r1)
    stfs f8, 0xd8(r1)
    stfs f0, 0xe0(r1)
    bl fn_805F99F0
    b lbl_fn_8009ADA4_000021DC
lbl_fn_8009ADA4_000020A0:
    lwz r0, 0x0(r18)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8009ADA4_000020C4
    psq_l f1, 0x10(r18), 0, 0
    psq_l f2, 0x18(r18), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    b lbl_fn_8009ADA4_000021DC
lbl_fn_8009ADA4_000020C4:
    psq_l f1, 0x40(r19), 0, 0
    addi r3, r1, 0x11c
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x48(r19)
    lfs f0, 0x11c(r1)
    stfs f2, 0x124(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_8009ADA4_00002104
    lfs f0, 0x120(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_8009ADA4_00002104
    frsp f0, f2
    fcmpu cr0, f29, f0
    bne lbl_fn_8009ADA4_00002104
    li r0, 0x1
lbl_fn_8009ADA4_00002104:
    cmpwi r0, 0x0
    beq lbl_fn_8009ADA4_00002120
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    b lbl_fn_8009ADA4_000021DC
lbl_fn_8009ADA4_00002120:
    lfs f0, 0x11c(r1)
    addi r3, r1, 0x20
    lfs f26, 0x120(r1)
    addi r4, r1, 0x14
    fmuls f0, f0, f30
    lfs f25, 0x124(r1)
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f26, f30
    addi r3, r1, 0x24
    addi r4, r1, 0x18
    fmuls f1, f31, f0
    bl fn_8072D210
    fmuls f0, f25, f30
    addi r3, r1, 0x28
    addi r4, r1, 0x1c
    fmuls f1, f31, f0
    bl fn_8072D210
    lfs f26, 0x18(r1)
    addi r3, r1, 0xc8
    lfs f12, 0x20(r1)
    lfs f9, 0x24(r1)
    lfs f11, 0x14(r1)
    fmuls f7, f12, f26
    lfs f13, 0x28(r1)
    fmuls f0, f12, f9
    fmuls f8, f11, f9
    lfs f27, 0x1c(r1)
    fmuls f7, f13, f7
    fmuls f9, f9, f13
    fmuls f25, f26, f27
    fmadds f7, f27, f8, f7
    fmuls f10, f12, f9
    fmuls f9, f11, f9
    stfs f7, 0xcc(r1)
    fmuls f7, f11, f26
    fmuls f0, f27, f0
    fmadds f10, f11, f25, f10
    fmsubs f8, f12, f25, f9
    fmsubs f0, f13, f7, f0
    stfs f10, 0xd4(r1)
    stfs f8, 0xc8(r1)
    stfs f0, 0xd0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
lbl_fn_8009ADA4_000021DC:
    addi r3, r1, 0x1b8
    addi r4, r1, 0x138
    bl fn_805F9190
    lfs f8, 0x148(r1)
    addi r3, r1, 0x278
    lfs f7, 0x14c(r1)
    addi r4, r1, 0x1b8
    lfs f0, 0x150(r1)
    addi r5, r1, 0x248
    stfs f8, 0x1c4(r1)
    stfs f7, 0x1d4(r1)
    stfs f0, 0x1e4(r1)
    bl fn_805F89F0
    lwz r0, 0x0(r18)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8009ADA4_00002228
    addi r3, r18, 0x20
    b lbl_fn_8009ADA4_0000223C
lbl_fn_8009ADA4_00002228:
    psq_l f1, 0x34(r19), 0, 0
    addi r3, r1, 0xbc
    lfs f2, 0x3c(r19)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8009ADA4_0000223C:
    lfs f2, 0x8(r3)
    cmpwi r27, 0x0
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x110
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
    beq lbl_fn_8009ADA4_000022C8
    lwz r0, 0x4(r27)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8009ADA4_00002288
    psq_l f1, 0x34(r19), 0, 0
    addi r3, r1, 0xb0
    lfs f2, 0x3c(r19)
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x110
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
lbl_fn_8009ADA4_00002288:
    lwz r0, 0x4(r27)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8009ADA4_000022C8
    lfs f7, 0x110(r1)
    lfs f0, 0x20(r27)
    lfs f9, 0x114(r1)
    fmuls f10, f7, f0
    lfs f8, 0x24(r27)
    lfs f7, 0x118(r1)
    lfs f0, 0x28(r27)
    fmuls f8, f9, f8
    stfs f10, 0x110(r1)
    fmuls f0, f7, f0
    stfs f8, 0x114(r1)
    stfs f0, 0x118(r1)
lbl_fn_8009ADA4_000022C8:
    lwz r0, 0x18(r15)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8009ADA4_000022F4
    lwz r4, 0x0(r29)
    lwz r3, 0x4(r29)
    lwz r0, 0x8(r29)
    stw r4, 0x2a8(r1)
    stw r3, 0x2ac(r1)
    stw r0, 0x2b0(r1)
    b lbl_fn_8009ADA4_0000230C
lbl_fn_8009ADA4_000022F4:
    lwz r4, 0x0(r30)
    lwz r3, 0x4(r30)
    lwz r0, 0x8(r30)
    stw r4, 0x2a8(r1)
    stw r3, 0x2ac(r1)
    stw r0, 0x2b0(r1)
lbl_fn_8009ADA4_0000230C:
    lwz r5, 0x2a8(r1)
    addi r3, r1, 0xa4
    lwz r4, 0x2ac(r1)
    lwz r0, 0x2b0(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r0, 0xac(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8009ADA4_00002478
    lwz r18, 0x48(r15)
    lwz r3, 0x44(r15)
    slwi r4, r18, 2
    subf r0, r18, r3
    mtctr r0
    cmplw r18, r3
    bge lbl_fn_8009ADA4_00002478
lbl_fn_8009ADA4_00002350:
    lwz r3, 0x40(r15)
    lwzx r0, r3, r4
    cmplw r20, r0
    bne lbl_fn_8009ADA4_0000246C
    stw r28, 0x78(r1)
    stw r25, 0x7c(r1)
    lwz r0, 0x18(r15)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8009ADA4_00002440
    lwz r0, 0x2c0(r1)
    lis r3, lbl_80775BC8@ha
    stw r0, 0x8c(r1)
    li r0, 0x0
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x10(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x10
    stw r3, 0x90(r1)
    mr r27, r3
    stw r3, 0x68(r1)
    li r3, 0x10
    stw r0, 0x6c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8009ADA4_000023E4
    li r0, 0x1
    stw r0, 0x4(r3)
    li r0, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x2c4(r1)
    stw r0, 0x0(r3)
    stw r27, 0xc(r3)
lbl_fn_8009ADA4_000023E4:
    li r0, 0x0
    stw r3, 0x94(r1)
    stw r0, 0x68(r1)
    b lbl_fn_8009ADA4_000023F8
    bl fn_80084C24
lbl_fn_8009ADA4_000023F8:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x90(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lwz r0, 0x2c8(r1)
    addi r3, r1, 0x8c
    stw r0, 0x8c(r1)
    bl fn_800DCA6C
    addic. r0, r1, 0x8c
    beq lbl_fn_8009ADA4_00002440
    mr r3, r0
    addic. r3, r3, 0x4
    beq lbl_fn_8009ADA4_00002440
    beq lbl_fn_8009ADA4_00002440
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8009ADA4_00002440
    bl fn_806952C4
lbl_fn_8009ADA4_00002440:
    lwz r6, 0x18(r15)
    mr r5, r19
    addi r3, r15, 0x1c
    addi r4, r1, 0x248
    lwz r12, 0x4(r6)
    addi r6, r1, 0x78
    mtctr r12
    bctrl
    addi r0, r18, 0x1
    stw r0, 0x48(r15)
    b lbl_fn_8009ADA4_00002478
lbl_fn_8009ADA4_0000246C:
    addi r4, r4, 0x4
    addi r18, r18, 0x1
    bdnz lbl_fn_8009ADA4_00002350
lbl_fn_8009ADA4_00002478:
    lfs f0, 0x110(r1)
    li r18, 0x0
    fcmpu cr0, f28, f0
    bne lbl_fn_8009ADA4_000024A0
    lfs f0, 0x114(r1)
    fcmpu cr0, f28, f0
    bne lbl_fn_8009ADA4_000024A0
    lfs f0, 0x118(r1)
    fcmpu cr0, f28, f0
    beq lbl_fn_8009ADA4_00002538
lbl_fn_8009ADA4_000024A0:
    lfs f1, 0x110(r1)
    addi r3, r1, 0x188
    lfs f2, 0x114(r1)
    lfs f3, 0x118(r1)
    bl fn_805F9160
    psq_l f1, 0x0(r23), 0, 0
    mr r18, r24
    psq_l f2, 0x8(r23), 0, 0
    mr r4, r24
    psq_l f3, 0x10(r23), 0, 0
    addi r3, r1, 0x248
    psq_l f4, 0x18(r23), 0, 0
    addi r5, r1, 0x158
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
    bl fn_805F89F0
    mulli r0, r20, 0x30
    lwz r3, 0x4(r15)
    psq_l f2, 0x8(r22), 0, 0
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    add r3, r3, r0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_8009ADA4_00002574
lbl_fn_8009ADA4_00002538:
    mulli r0, r20, 0x30
    lwz r3, 0x4(r15)
    psq_l f2, 0x8(r21), 0, 0
    psq_l f3, 0x10(r21), 0, 0
    psq_l f4, 0x18(r21), 0, 0
    add r3, r3, r0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_8009ADA4_00002574:
    lwz r0, 0x2c(r15)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8009ADA4_000025A0
    lwz r4, 0x0(r29)
    lwz r3, 0x4(r29)
    lwz r0, 0x8(r29)
    stw r4, 0x2b4(r1)
    stw r3, 0x2b8(r1)
    stw r0, 0x2bc(r1)
    b lbl_fn_8009ADA4_000025B8
lbl_fn_8009ADA4_000025A0:
    lwz r4, 0x0(r31)
    lwz r3, 0x4(r31)
    lwz r0, 0x8(r31)
    stw r4, 0x2b4(r1)
    stw r3, 0x2b8(r1)
    stw r0, 0x2bc(r1)
lbl_fn_8009ADA4_000025B8:
    lwz r5, 0x2b4(r1)
    addi r3, r1, 0x98
    lwz r4, 0x2b8(r1)
    lwz r0, 0x2bc(r1)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r0, 0xa0(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8009ADA4_000026EC
    stw r28, 0x70(r1)
    mulli r3, r20, 0x30
    stw r25, 0x74(r1)
    lwz r0, 0x2c(r15)
    lwz r4, 0x4(r15)
    cntlzw r0, r0
    srwi. r0, r0, 5
    add r20, r4, r3
    beq lbl_fn_8009ADA4_000026CC
    lwz r0, 0x2c0(r1)
    lis r3, lbl_80775BC8@ha
    stw r0, 0x80(r1)
    li r0, 0x0
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0xc(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0xc
    stw r3, 0x84(r1)
    mr r27, r3
    stw r3, 0x60(r1)
    li r3, 0x10
    stw r0, 0x64(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8009ADA4_00002670
    li r0, 0x1
    stw r0, 0x4(r3)
    li r0, 0x1
    stw r0, 0x8(r3)
    lwz r0, 0x2c4(r1)
    stw r0, 0x0(r3)
    stw r27, 0xc(r3)
lbl_fn_8009ADA4_00002670:
    li r0, 0x0
    stw r3, 0x88(r1)
    stw r0, 0x60(r1)
    b lbl_fn_8009ADA4_00002684
    bl fn_80084C24
lbl_fn_8009ADA4_00002684:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x84(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lwz r0, 0x2c8(r1)
    addi r3, r1, 0x80
    stw r0, 0x80(r1)
    bl fn_800DCA6C
    addic. r0, r1, 0x80
    beq lbl_fn_8009ADA4_000026CC
    mr r3, r0
    addic. r3, r3, 0x4
    beq lbl_fn_8009ADA4_000026CC
    beq lbl_fn_8009ADA4_000026CC
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8009ADA4_000026CC
    bl fn_806952C4
lbl_fn_8009ADA4_000026CC:
    lwz r6, 0x2c(r15)
    mr r4, r20
    mr r5, r19
    addi r3, r15, 0x30
    lwz r12, 0x4(r6)
    addi r6, r1, 0x70
    mtctr r12
    bctrl
lbl_fn_8009ADA4_000026EC:
    lwz r4, 0x20(r19)
    cmpwi r4, 0x0
    blt lbl_fn_8009ADA4_0000270C
    lwz r5, 0x8(r1)
    mr r3, r15
    mr r7, r18
    addi r6, r1, 0x248
    bl fn_8009ADA4
lbl_fn_8009ADA4_0000270C:
    lwz r4, 0x24(r19)
lbl_fn_8009ADA4_00002710:
    cmpwi r4, 0x0
    bge lbl_fn_8009ADA4_00001CB8
    addi r11, r1, 0x320
    psq_l f31, 0x388(r1), 0, 0
    lfd f31, 0x380(r1)
    psq_l f30, 0x378(r1), 0, 0
    lfd f30, 0x370(r1)
    psq_l f29, 0x368(r1), 0, 0
    lfd f29, 0x360(r1)
    psq_l f28, 0x358(r1), 0, 0
    lfd f28, 0x350(r1)
    psq_l f27, 0x348(r1), 0, 0
    lfd f27, 0x340(r1)
    psq_l f26, 0x338(r1), 0, 0
    lfd f26, 0x330(r1)
    psq_l f25, 0x328(r1), 0, 0
    lfd f25, 0x320(r1)
    bl _restgpr_14
    lwz r0, 0x394(r1)
    mtlr r0
    addi r1, r1, 0x390
    blr
}
