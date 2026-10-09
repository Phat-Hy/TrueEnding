#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_17(void);
extern void _restgpr_23(void);
extern void _savegpr_14(void);
extern void _savegpr_17(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ED34(void);
extern void fn_80051A88(void);
extern void fn_80051CD8(void);
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_800844D8(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803ACE18(void);
extern void fn_803ACF88(void);
extern void fn_803AD3D8(void);
extern void fn_803E3C78(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074E440[];
extern u8 lbl_8074EB1C[];
extern u8 lbl_8074EFC8[];
extern u8 lbl_8074F8CC[];
extern u8 lbl_80778910[];

/* Small data declarations */
extern u32 lbl_8087DD3C;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;
extern u32 lbl_80885B1C;
extern u32 lbl_80885B30;
extern u32 lbl_80885B3C;
extern u32 lbl_80885B40;
extern u32 lbl_80885B44;
extern u32 lbl_80885B48;
extern u32 lbl_80885B4C;
extern u32 lbl_80885B50;
extern u32 lbl_80885B54;
extern u32 lbl_80885B58;
extern u32 lbl_80885B5C;
extern u32 lbl_80885B60;
extern u32 lbl_80885B64;
extern u32 lbl_80885B68;
extern u32 lbl_80885B6C;
extern u32 lbl_80885B70;

/* Function declarations */
void fn_8039AB10(void);
void fn_8039AF50(void);
void fn_8039B2BC(void);
void fn_8039B7B0(void);
void fn_8039BC0C(void);
void fn_8039BC6C(void);
void fn_8039BDB4(void);
void fn_8039BEA4(void);
void fn_8039BF04(void);

asm void fn_8039AB10(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x140
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stfd f28, 0x150(r1)
    psq_st f28, 0x158(r1), 0, 0
    stfd f27, 0x140(r1)
    psq_st f27, 0x148(r1), 0, 0
    bl _savegpr_23
    lwz r4, lbl_8087F8A0
    addi r26, r1, 0x50
    mr r25, r3
    lwz r29, 0x48(r4)
    psq_l f1, 0x614(r29), 0, 0
    lfs f2, 0x61c(r29)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r26), 0, 0
    lfs f0, 0x620(r29)
    stfs f0, 0x5c(r1)
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8039AB10_00000138
    lwz r0, 0x560(r29)
    cmpwi r0, 0xb
    bne lbl_fn_8039AB10_00000138
    frsp f0, f2
    li r0, 0x0
    lfs f5, lbl_80885B10
    mr r5, r26
    lfs f4, lbl_80885B1C
    addi r4, r1, 0xc0
    fadds f6, f0, f5
    lfs f3, 0x54(r1)
    lfs f0, 0x50(r1)
    addi r6, r1, 0x8
    fadds f3, f3, f4
    stw r0, 0xf4(r1)
    fadds f0, f0, f5
    stw r0, 0xf8(r1)
    lwz r3, lbl_8087EE98
    lis r7, 0x8000
    stw r0, 0xfc(r1)
    li r8, 0x0
    stw r0, 0x100(r1)
    li r9, 0x0
    stfs f5, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f6, 0x10(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8039AB10_00000138
    lfs f4, lbl_80885B10
    addi r3, r1, 0x20
    lfs f0, 0xd8(r1)
    lfs f5, 0x5c(r1)
    fadds f2, f0, f4
    lfs f3, 0xd4(r1)
    lfs f0, 0xd0(r1)
    fadds f3, f3, f5
    stfs f4, 0x2c(r1)
    fadds f0, f0, f4
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x58(r1)
lbl_fn_8039AB10_00000138:
    lwz r30, 0x88(r25)
    li r26, 0x0
    lfs f27, lbl_80885B10
    li r28, 0x0
    lfs f28, lbl_80885B30
    lis r31, 0x68dc
    lfs f29, lbl_80885B3C
    lfs f30, lbl_80885B40
    lfs f31, lbl_80885B14
    b lbl_fn_8039AB10_000003F4
lbl_fn_8039AB10_00000160:
    lwz r0, 0xe8(r30)
    mr r3, r26
    add r5, r0, r28
    lwz r0, 0x2c(r5)
    cmpwi r0, 0x0
    blt lbl_fn_8039AB10_0000017C
    mr r3, r0
lbl_fn_8039AB10_0000017C:
    mulli r0, r3, 0xc
    lwz r4, 0x100(r25)
    add r27, r4, r0
    lwzx r0, r4, r0
    cmpwi r0, 0x0
    blt lbl_fn_8039AB10_000003EC
    lwz r0, 0x4(r27)
    mulli r3, r3, 0x48
    addi r7, r25, 0x80
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x4(r27)
    lwz r4, 0xe8(r30)
    lwz r0, 0x0(r27)
    add r3, r4, r3
    lwz r6, 0x80(r25)
    lwz r3, 0x28(r3)
    slwi r0, r0, 2
    lwzx r4, r3, r0
    b lbl_fn_8039AB10_000001E4
lbl_fn_8039AB10_000001C8:
    lwz r0, 0xc(r6)
    cmpw r0, r4
    blt lbl_fn_8039AB10_000001E0
    mr r7, r6
    lwz r6, 0x0(r6)
    b lbl_fn_8039AB10_000001E4
lbl_fn_8039AB10_000001E0:
    lwz r6, 0x4(r6)
lbl_fn_8039AB10_000001E4:
    cmpwi r6, 0x0
    bne lbl_fn_8039AB10_000001C8
    addi r0, r25, 0x80
    cmplw r7, r0
    beq lbl_fn_8039AB10_00000204
    lwz r0, 0xc(r7)
    cmpw r4, r0
    bge lbl_fn_8039AB10_00000208
lbl_fn_8039AB10_00000204:
    addi r7, r25, 0x80
lbl_fn_8039AB10_00000208:
    addi r0, r25, 0x80
    cmplw r7, r0
    beq lbl_fn_8039AB10_00000240
    subi r3, r31, 0x7453
    lwz r0, 0x10(r7)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r25, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_8039AB10_00000244
lbl_fn_8039AB10_00000240:
    li r3, 0x0
lbl_fn_8039AB10_00000244:
    cmpwi r3, 0x0
    beq lbl_fn_8039AB10_000003EC
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8039AB10_000003EC
    lwz r0, 0x40(r5)
    li r23, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8039AB10_000002DC
    stfs f27, 0x44(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    stfs f27, 0x48(r1)
    stfs f28, 0x4c(r1)
    lfs f0, 0x14(r5)
    fadds f1, f29, f0
    bl fn_805F8E70
    addi r4, r1, 0x44
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    stfs f27, 0x38(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    stfs f27, 0x3c(r1)
    stfs f28, 0x40(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x44
    addi r4, r1, 0x38
    bl fn_805F9990
    fcmpo cr0, f1, f30
    mfcr r0
    extrwi r23, r0, 1, 1
lbl_fn_8039AB10_000002DC:
    mr r3, r25
    mr r4, r26
    addi r5, r1, 0x50
    li r6, 0x0
    bl fn_803ACE18
    and. r23, r23, r3
    beq lbl_fn_8039AB10_000003EC
    lwz r3, 0x55c(r29)
    cmplwi r3, 0x1
    ble lbl_fn_8039AB10_0000031C
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_8039AB10_0000031C
    cmpwi r3, 0x6
    beq lbl_fn_8039AB10_00000350
    b lbl_fn_8039AB10_00000368
lbl_fn_8039AB10_0000031C:
    lwz r3, 0x12a4(r29)
    srwi. r0, r3, 31
    bne lbl_fn_8039AB10_00000368
    extrwi. r0, r3, 1, 25
    bne lbl_fn_8039AB10_00000368
    lwz r0, 0x14a0(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_8039AB10_00000368
    lwz r0, 0x1208(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8039AB10_00000368
    li r0, 0x1
    b lbl_fn_8039AB10_0000036C
lbl_fn_8039AB10_00000350:
    lwz r3, 0x560(r29)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_8039AB10_00000368
    li r0, 0x1
    b lbl_fn_8039AB10_0000036C
lbl_fn_8039AB10_00000368:
    li r0, 0x0
lbl_fn_8039AB10_0000036C:
    cmpwi r0, 0x0
    beq lbl_fn_8039AB10_000003EC
    lwz r0, 0xe0(r25)
    li r24, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_8039AB10_000003B4
    lwz r3, lbl_8087F430
    li r23, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8039AB10_000003A8
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8039AB10_000003A8
    li r23, 0x1
lbl_fn_8039AB10_000003A8:
    cmpwi r23, 0x0
    bne lbl_fn_8039AB10_000003B4
    li r24, 0x0
lbl_fn_8039AB10_000003B4:
    cmpwi r24, 0x0
    bne lbl_fn_8039AB10_000003EC
    lwz r0, 0x4(r27)
    ori r0, r0, 0x20
    stw r0, 0x4(r27)
    stfs f31, 0x8(r27)
    lwz r3, 0xf4(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8039AB10_000003E8
    lfs f3, 0x8(r27)
    lfs f0, 0x8(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_8039AB10_000003EC
lbl_fn_8039AB10_000003E8:
    stw r27, 0xf4(r25)
lbl_fn_8039AB10_000003EC:
    addi r28, r28, 0x48
    addi r26, r26, 0x1
lbl_fn_8039AB10_000003F4:
    lwz r0, 0xe4(r30)
    cmplw r26, r0
    blt lbl_fn_8039AB10_00000160
    addi r11, r1, 0x140
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    psq_l f28, 0x158(r1), 0, 0
    lfd f28, 0x150(r1)
    psq_l f27, 0x148(r1), 0, 0
    lfd f27, 0x140(r1)
    bl _restgpr_23
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_8039AF50(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    bl _savegpr_23
    lwz r4, lbl_8087F8A0
    addi r26, r1, 0x38
    mr r25, r3
    lwz r29, 0x48(r4)
    psq_l f1, 0x614(r29), 0, 0
    lfs f2, 0x61c(r29)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r26), 0, 0
    lfs f0, 0x620(r29)
    stfs f0, 0x44(r1)
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8039AF50_00000558
    lwz r0, 0x560(r29)
    cmpwi r0, 0xb
    bne lbl_fn_8039AF50_00000558
    frsp f0, f2
    li r0, 0x0
    lfs f5, lbl_80885B10
    mr r5, r26
    lfs f4, lbl_80885B1C
    addi r4, r1, 0x48
    fadds f6, f0, f5
    lfs f3, 0x3c(r1)
    lfs f0, 0x38(r1)
    addi r6, r1, 0x8
    fadds f3, f3, f4
    stw r0, 0x7c(r1)
    fadds f0, f0, f5
    stw r0, 0x80(r1)
    lwz r3, lbl_8087EE98
    lis r7, 0x8000
    stw r0, 0x84(r1)
    li r8, 0x0
    stw r0, 0x88(r1)
    li r9, 0x0
    stfs f5, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f6, 0x10(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8039AF50_00000558
    lfs f4, lbl_80885B10
    addi r3, r1, 0x20
    lfs f0, 0x60(r1)
    lfs f5, 0x44(r1)
    fadds f2, f0, f4
    lfs f3, 0x5c(r1)
    lfs f0, 0x58(r1)
    fadds f3, f3, f5
    stfs f4, 0x2c(r1)
    fadds f0, f0, f4
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_8039AF50_00000558:
    lwz r30, 0x88(r25)
    li r26, 0x0
    lfs f31, lbl_80885B14
    li r28, 0x0
    lis r31, 0x68dc
    b lbl_fn_8039AF50_00000780
lbl_fn_8039AF50_00000570:
    lwz r0, 0xf0(r30)
    mr r3, r26
    add r4, r0, r28
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    blt lbl_fn_8039AF50_0000058C
    mr r3, r0
lbl_fn_8039AF50_0000058C:
    mulli r0, r3, 0xc
    lwz r4, 0x110(r25)
    add r27, r4, r0
    lwzx r0, r4, r0
    cmpwi r0, 0x0
    blt lbl_fn_8039AF50_00000778
    lwz r0, 0x4(r27)
    mulli r3, r3, 0x28
    addi r6, r25, 0x80
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x4(r27)
    lwz r4, 0xf0(r30)
    lwz r0, 0x0(r27)
    add r3, r4, r3
    lwz r5, 0x80(r25)
    lwz r3, 0x1c(r3)
    slwi r0, r0, 2
    lwzx r4, r3, r0
    b lbl_fn_8039AF50_000005F4
lbl_fn_8039AF50_000005D8:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_8039AF50_000005F0
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_8039AF50_000005F4
lbl_fn_8039AF50_000005F0:
    lwz r5, 0x4(r5)
lbl_fn_8039AF50_000005F4:
    cmpwi r5, 0x0
    bne lbl_fn_8039AF50_000005D8
    addi r0, r25, 0x80
    cmplw r6, r0
    beq lbl_fn_8039AF50_00000614
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_8039AF50_00000618
lbl_fn_8039AF50_00000614:
    addi r6, r25, 0x80
lbl_fn_8039AF50_00000618:
    addi r0, r25, 0x80
    cmplw r6, r0
    beq lbl_fn_8039AF50_00000650
    subi r3, r31, 0x7453
    lwz r0, 0x10(r6)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r25, r3
    lwz r3, 0x64(r3)
    add r3, r3, r0
    b lbl_fn_8039AF50_00000654
lbl_fn_8039AF50_00000650:
    li r3, 0x0
lbl_fn_8039AF50_00000654:
    cmpwi r3, 0x0
    beq lbl_fn_8039AF50_00000778
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8039AF50_00000778
    mr r3, r25
    mr r4, r26
    addi r5, r1, 0x38
    li r6, 0x0
    bl fn_803ACF88
    cmpwi r3, 0x0
    beq lbl_fn_8039AF50_00000778
    lwz r3, 0x55c(r29)
    cmplwi r3, 0x1
    ble lbl_fn_8039AF50_000006A8
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_8039AF50_000006A8
    cmpwi r3, 0x6
    beq lbl_fn_8039AF50_000006DC
    b lbl_fn_8039AF50_000006F4
lbl_fn_8039AF50_000006A8:
    lwz r3, 0x12a4(r29)
    srwi. r0, r3, 31
    bne lbl_fn_8039AF50_000006F4
    extrwi. r0, r3, 1, 25
    bne lbl_fn_8039AF50_000006F4
    lwz r0, 0x14a0(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_8039AF50_000006F4
    lwz r0, 0x1208(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8039AF50_000006F4
    li r0, 0x1
    b lbl_fn_8039AF50_000006F8
lbl_fn_8039AF50_000006DC:
    lwz r3, 0x560(r29)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_8039AF50_000006F4
    li r0, 0x1
    b lbl_fn_8039AF50_000006F8
lbl_fn_8039AF50_000006F4:
    li r0, 0x0
lbl_fn_8039AF50_000006F8:
    cmpwi r0, 0x0
    beq lbl_fn_8039AF50_00000778
    lwz r0, 0xe0(r25)
    li r24, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_8039AF50_00000740
    lwz r3, lbl_8087F430
    li r23, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8039AF50_00000734
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8039AF50_00000734
    li r23, 0x1
lbl_fn_8039AF50_00000734:
    cmpwi r23, 0x0
    bne lbl_fn_8039AF50_00000740
    li r24, 0x0
lbl_fn_8039AF50_00000740:
    cmpwi r24, 0x0
    bne lbl_fn_8039AF50_00000778
    lwz r0, 0x4(r27)
    ori r0, r0, 0x20
    stw r0, 0x4(r27)
    stfs f31, 0x8(r27)
    lwz r3, 0xf4(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8039AF50_00000774
    lfs f3, 0x8(r27)
    lfs f0, 0x8(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_8039AF50_00000778
lbl_fn_8039AF50_00000774:
    stw r27, 0xf4(r25)
lbl_fn_8039AF50_00000778:
    addi r28, r28, 0x28
    addi r26, r26, 0x1
lbl_fn_8039AF50_00000780:
    lwz r0, 0xec(r30)
    cmplw r26, r0
    blt lbl_fn_8039AF50_00000570
    addi r11, r1, 0xc0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    bl _restgpr_23
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8039B2BC(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    stfd f28, 0x1c0(r1)
    psq_st f28, 0x1c8(r1), 0, 0
    stfd f27, 0x1b0(r1)
    psq_st f27, 0x1b8(r1), 0, 0
    bl _savegpr_14
    lwz r6, lbl_8087F8A0
    addi r5, r1, 0x50
    lfs f30, lbl_80885B48
    addi r4, r1, 0x60
    lwz r22, 0x48(r6)
    addi r7, r1, 0x30
    lfs f7, lbl_80885B44
    addi r6, r1, 0x40
    psq_l f1, 0x614(r22), 0, 0
    mr r15, r3
    lfs f2, 0x61c(r22)
    addi r29, r1, 0x120
    lfs f8, 0x620(r22)
    addi r27, r1, 0xf0
    psq_st f1, 0x0(r4), 0, 0
    addi r28, r1, 0x12c
    lfs f0, lbl_80885B4C
    addi r26, r1, 0x90
    psq_st f1, 0x0(r5), 0, 0
    addi r23, r1, 0x20
    lfs f28, lbl_80885B10
    addi r24, r1, 0x74
    stfs f2, 0x58(r1)
    li r16, 0x0
    lfs f31, lbl_80885B50
    li r31, 0x0
    stfs f7, 0x5c(r1)
    lis r14, 0x68dc
    lfs f27, lbl_80885B54
    li r30, 0x0
    psq_l f1, 0x614(r22), 0, 0
    stfs f2, 0x68(r1)
    lfs f2, 0x61c(r22)
    stfs f2, 0x38(r1)
    lfs f29, lbl_80885B30
    psq_st f1, 0x0(r7), 0, 0
    stfs f0, 0x3c(r1)
    stfs f8, 0x6c(r1)
    lwz r17, 0x88(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x48(r1)
    stfs f30, 0x4c(r1)
    b lbl_fn_8039B2BC_00000C54
lbl_fn_8039B2BC_00000894:
    lwz r0, 0xe8(r17)
    mr r18, r16
    add r21, r0, r31
    lwz r0, 0x2c(r21)
    cmpwi r0, 0x0
    blt lbl_fn_8039B2BC_000008B0
    mr r18, r0
lbl_fn_8039B2BC_000008B0:
    mulli r0, r18, 0xc
    lwz r3, 0x100(r15)
    add r20, r3, r0
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    blt lbl_fn_8039B2BC_00000C4C
    psq_l f1, 0x18(r21), 0, 0
    addi r3, r1, 0xf0
    lfs f2, 0x20(r21)
    stfs f2, 0x128(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f1, 0x4(r21)
    lfs f2, 0x8(r21)
    lfs f3, 0xc(r21)
    bl fn_805F90D0
    psq_l f1, 0x0(r27), 0, 0
    addi r3, r1, 0xc0
    psq_l f2, 0x8(r27), 0, 0
    li r4, 0x79
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
    lfs f1, 0x14(r21)
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0xc0
    addi r5, r1, 0x90
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    mulli r0, r18, 0x48
    psq_l f2, 0x8(r26), 0, 0
    addi r5, r15, 0x80
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    lwz r3, 0xe8(r17)
    lwz r4, 0x0(r20)
    add r6, r3, r0
    lwz r3, 0x80(r15)
    lwz r6, 0x28(r6)
    slwi r0, r4, 2
    lwzx r4, r6, r0
    b lbl_fn_8039B2BC_000009B0
lbl_fn_8039B2BC_00000994:
    lwz r0, 0xc(r3)
    cmpw r0, r4
    blt lbl_fn_8039B2BC_000009AC
    mr r5, r3
    lwz r3, 0x0(r3)
    b lbl_fn_8039B2BC_000009B0
lbl_fn_8039B2BC_000009AC:
    lwz r3, 0x4(r3)
lbl_fn_8039B2BC_000009B0:
    cmpwi r3, 0x0
    bne lbl_fn_8039B2BC_00000994
    addi r0, r15, 0x80
    cmplw r5, r0
    beq lbl_fn_8039B2BC_000009D0
    lwz r0, 0xc(r5)
    cmpw r4, r0
    bge lbl_fn_8039B2BC_000009D4
lbl_fn_8039B2BC_000009D0:
    addi r5, r15, 0x80
lbl_fn_8039B2BC_000009D4:
    addi r0, r15, 0x80
    cmplw r5, r0
    beq lbl_fn_8039B2BC_00000A0C
    subi r3, r14, 0x7453
    lwz r0, 0x10(r5)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r15, r3
    lwz r3, 0x64(r3)
    add r25, r3, r0
    b lbl_fn_8039B2BC_00000A10
lbl_fn_8039B2BC_00000A0C:
    li r25, 0x0
lbl_fn_8039B2BC_00000A10:
    cmpwi r25, 0x0
    beq lbl_fn_8039B2BC_00000C4C
    lwz r0, 0x8c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8039B2BC_00000A30
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8039B2BC_00000C4C
lbl_fn_8039B2BC_00000A30:
    addi r3, r1, 0x30
    addi r4, r1, 0x120
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_8039B2BC_00000C4C
    lwz r0, 0xe0(r15)
    li r19, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_8039B2BC_00000A84
    lwz r3, lbl_8087F430
    li r18, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8039B2BC_00000A78
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8039B2BC_00000A78
    li r18, 0x1
lbl_fn_8039B2BC_00000A78:
    cmpwi r18, 0x0
    bne lbl_fn_8039B2BC_00000A84
    li r19, 0x0
lbl_fn_8039B2BC_00000A84:
    cmpwi r19, 0x0
    bne lbl_fn_8039B2BC_00000C4C
    lwz r3, 0x55c(r22)
    cmplwi r3, 0x1
    ble lbl_fn_8039B2BC_00000AB0
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_8039B2BC_00000AB0
    cmpwi r3, 0x6
    beq lbl_fn_8039B2BC_00000AE4
    b lbl_fn_8039B2BC_00000AFC
lbl_fn_8039B2BC_00000AB0:
    lwz r0, 0x12a4(r22)
    srwi. r3, r0, 31
    bne lbl_fn_8039B2BC_00000AFC
    extrwi. r0, r0, 1, 25
    bne lbl_fn_8039B2BC_00000AFC
    lwz r0, 0x14a0(r22)
    cmpwi r0, 0x0
    bgt lbl_fn_8039B2BC_00000AFC
    lwz r0, 0x1208(r22)
    cmpwi r0, 0x0
    bne lbl_fn_8039B2BC_00000AFC
    li r0, 0x1
    b lbl_fn_8039B2BC_00000B00
lbl_fn_8039B2BC_00000AE4:
    lwz r3, 0x560(r22)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_8039B2BC_00000AFC
    li r0, 0x1
    b lbl_fn_8039B2BC_00000B00
lbl_fn_8039B2BC_00000AFC:
    li r0, 0x0
lbl_fn_8039B2BC_00000B00:
    cmpwi r0, 0x0
    bne lbl_fn_8039B2BC_00000B14
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8039B2BC_00000C4C
lbl_fn_8039B2BC_00000B14:
    stw r30, 0x70(r1)
    stfs f28, 0x74(r1)
    stfs f28, 0x78(r1)
    stfs f28, 0x7c(r1)
    stw r30, 0x84(r1)
    stw r30, 0x88(r1)
    stfs f28, 0x8c(r1)
    lwz r0, 0xc8(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_8039B2BC_00000B50
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8039B2BC_00000C4C
    stw r30, 0x70(r1)
    b lbl_fn_8039B2BC_00000B54
lbl_fn_8039B2BC_00000B50:
    stw r0, 0x70(r1)
lbl_fn_8039B2BC_00000B54:
    lfs f0, 0xc(r21)
    addi r3, r1, 0x50
    lfs f7, 0x8(r21)
    addi r4, r1, 0x120
    fadds f2, f0, f28
    lfs f0, 0x4(r21)
    fadds f7, f7, f31
    stfs f28, 0x14(r1)
    fadds f0, f0, f28
    stfs f7, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x7c(r1)
    lwz r0, 0xf4(r15)
    stfs f31, 0x18(r1)
    subf r0, r0, r20
    cntlzw r0, r0
    stfs f28, 0x1c(r1)
    srwi r0, r0, 5
    stfs f2, 0x28(r1)
    stw r0, 0x84(r1)
    bl fn_80051CD8
    cntlzw r0, r3
    lfs f0, 0x7c(r1)
    srwi r0, r0, 5
    stw r0, 0x88(r1)
    lfs f8, 0x78(r1)
    addi r3, r1, 0x8
    lfs f10, 0x530(r22)
    lfs f9, 0x52c(r22)
    fsubs f10, f10, f0
    lfs f7, 0x528(r22)
    lfs f0, 0x74(r1)
    fsubs f8, f9, f8
    stfs f10, 0x10(r1)
    fsubs f0, f7, f0
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    fsubs f0, f1, f30
    fdivs f0, f0, f27
    stfs f0, 0x8c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_8039B2BC_00000C0C
    b lbl_fn_8039B2BC_00000C10
lbl_fn_8039B2BC_00000C0C:
    fmr f0, f28
lbl_fn_8039B2BC_00000C10:
    fcmpo cr0, f0, f29
    bge lbl_fn_8039B2BC_00000C30
    lfs f0, 0x8c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_8039B2BC_00000C28
    b lbl_fn_8039B2BC_00000C34
lbl_fn_8039B2BC_00000C28:
    fmr f0, f28
    b lbl_fn_8039B2BC_00000C34
lbl_fn_8039B2BC_00000C30:
    fmr f0, f29
lbl_fn_8039B2BC_00000C34:
    fsubs f0, f29, f0
    stw r30, 0x80(r1)
    lwz r3, lbl_8087F490
    addi r4, r1, 0x70
    stfs f0, 0x8c(r1)
    bl fn_803E3C78
lbl_fn_8039B2BC_00000C4C:
    addi r16, r16, 0x1
    addi r31, r31, 0x48
lbl_fn_8039B2BC_00000C54:
    lwz r0, 0xe4(r17)
    cmplw r16, r0
    blt lbl_fn_8039B2BC_00000894
    addi r11, r1, 0x1b0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    psq_l f28, 0x1c8(r1), 0, 0
    lfd f28, 0x1c0(r1)
    psq_l f27, 0x1b8(r1), 0, 0
    lfd f27, 0x1b0(r1)
    bl _restgpr_14
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_8039B7B0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0xe0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stfd f28, 0xf0(r1)
    psq_st f28, 0xf8(r1), 0, 0
    stfd f27, 0xe0(r1)
    psq_st f27, 0xe8(r1), 0, 0
    bl _savegpr_17
    lwz r6, lbl_8087F8A0
    addi r5, r1, 0x60
    lfs f31, lbl_80885B48
    addi r4, r1, 0x70
    lwz r25, 0x48(r6)
    addi r7, r1, 0x40
    lfs f3, lbl_80885B44
    addi r6, r1, 0x50
    psq_l f1, 0x614(r25), 0, 0
    mr r20, r3
    lfs f2, 0x61c(r25)
    addi r29, r1, 0x30
    lfs f4, 0x620(r25)
    addi r26, r1, 0x20
    psq_st f1, 0x0(r4), 0, 0
    addi r27, r1, 0x84
    lfs f0, lbl_80885B4C
    li r21, 0x0
    psq_st f1, 0x0(r5), 0, 0
    li r19, 0x0
    lfs f29, lbl_80885B10
    lis r30, 0x68dc
    stfs f2, 0x68(r1)
    li r31, 0x0
    lfs f27, lbl_80885B50
    stfs f3, 0x6c(r1)
    lfs f28, lbl_80885B54
    psq_l f1, 0x614(r25), 0, 0
    stfs f2, 0x78(r1)
    lfs f2, 0x61c(r25)
    stfs f2, 0x48(r1)
    lfs f30, lbl_80885B30
    psq_st f1, 0x0(r7), 0, 0
    stfs f0, 0x4c(r1)
    stfs f4, 0x7c(r1)
    lwz r22, 0x88(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    stfs f31, 0x5c(r1)
    b lbl_fn_8039B7B0_000010B0
lbl_fn_8039B7B0_00000D7C:
    lwz r0, 0xf0(r22)
    mr r4, r21
    add r24, r0, r19
    lwz r0, 0x20(r24)
    cmpwi r0, 0x0
    blt lbl_fn_8039B7B0_00000D98
    mr r4, r0
lbl_fn_8039B7B0_00000D98:
    mulli r0, r4, 0xc
    lwz r3, 0x110(r20)
    add r23, r3, r0
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    blt lbl_fn_8039B7B0_000010A8
    psq_l f1, 0x4(r24), 0, 0
    mulli r0, r4, 0x28
    lfs f2, 0xc(r24)
    addi r5, r20, 0x80
    stfs f2, 0x38(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x14(r24)
    stfs f0, 0x3c(r1)
    lwz r3, 0xf0(r22)
    lwz r4, 0x0(r23)
    add r6, r3, r0
    lwz r3, 0x80(r20)
    lwz r6, 0x1c(r6)
    slwi r0, r4, 2
    lwzx r4, r6, r0
    b lbl_fn_8039B7B0_00000E0C
lbl_fn_8039B7B0_00000DF0:
    lwz r0, 0xc(r3)
    cmpw r0, r4
    blt lbl_fn_8039B7B0_00000E08
    mr r5, r3
    lwz r3, 0x0(r3)
    b lbl_fn_8039B7B0_00000E0C
lbl_fn_8039B7B0_00000E08:
    lwz r3, 0x4(r3)
lbl_fn_8039B7B0_00000E0C:
    cmpwi r3, 0x0
    bne lbl_fn_8039B7B0_00000DF0
    addi r0, r20, 0x80
    cmplw r5, r0
    beq lbl_fn_8039B7B0_00000E2C
    lwz r0, 0xc(r5)
    cmpw r4, r0
    bge lbl_fn_8039B7B0_00000E30
lbl_fn_8039B7B0_00000E2C:
    addi r5, r20, 0x80
lbl_fn_8039B7B0_00000E30:
    addi r0, r20, 0x80
    cmplw r5, r0
    beq lbl_fn_8039B7B0_00000E68
    subi r3, r30, 0x7453
    lwz r0, 0x10(r5)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r20, r3
    lwz r3, 0x64(r3)
    add r28, r3, r0
    b lbl_fn_8039B7B0_00000E6C
lbl_fn_8039B7B0_00000E68:
    li r28, 0x0
lbl_fn_8039B7B0_00000E6C:
    cmpwi r28, 0x0
    beq lbl_fn_8039B7B0_000010A8
    lwz r0, 0x8c(r20)
    cmpwi r0, 0x0
    beq lbl_fn_8039B7B0_00000E8C
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8039B7B0_000010A8
lbl_fn_8039B7B0_00000E8C:
    addi r3, r1, 0x40
    addi r4, r1, 0x30
    bl fn_80051A88
    cmpwi r3, 0x0
    beq lbl_fn_8039B7B0_000010A8
    lwz r0, 0xe0(r20)
    li r18, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_8039B7B0_00000EE0
    lwz r3, lbl_8087F430
    li r17, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8039B7B0_00000ED4
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8039B7B0_00000ED4
    li r17, 0x1
lbl_fn_8039B7B0_00000ED4:
    cmpwi r17, 0x0
    bne lbl_fn_8039B7B0_00000EE0
    li r18, 0x0
lbl_fn_8039B7B0_00000EE0:
    cmpwi r18, 0x0
    bne lbl_fn_8039B7B0_000010A8
    lwz r3, 0x55c(r25)
    cmplwi r3, 0x1
    ble lbl_fn_8039B7B0_00000F0C
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_8039B7B0_00000F0C
    cmpwi r3, 0x6
    beq lbl_fn_8039B7B0_00000F40
    b lbl_fn_8039B7B0_00000F58
lbl_fn_8039B7B0_00000F0C:
    lwz r0, 0x12a4(r25)
    srwi. r3, r0, 31
    bne lbl_fn_8039B7B0_00000F58
    extrwi. r0, r0, 1, 25
    bne lbl_fn_8039B7B0_00000F58
    lwz r0, 0x14a0(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_8039B7B0_00000F58
    lwz r0, 0x1208(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8039B7B0_00000F58
    li r0, 0x1
    b lbl_fn_8039B7B0_00000F5C
lbl_fn_8039B7B0_00000F40:
    lwz r3, 0x560(r25)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_8039B7B0_00000F58
    li r0, 0x1
    b lbl_fn_8039B7B0_00000F5C
lbl_fn_8039B7B0_00000F58:
    li r0, 0x0
lbl_fn_8039B7B0_00000F5C:
    cmpwi r0, 0x0
    bne lbl_fn_8039B7B0_00000F70
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8039B7B0_000010A8
lbl_fn_8039B7B0_00000F70:
    stw r31, 0x80(r1)
    stfs f29, 0x84(r1)
    stfs f29, 0x88(r1)
    stfs f29, 0x8c(r1)
    stw r31, 0x94(r1)
    stw r31, 0x98(r1)
    stfs f29, 0x9c(r1)
    lwz r0, 0xc8(r28)
    cmpwi r0, 0x0
    bgt lbl_fn_8039B7B0_00000FAC
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8039B7B0_000010A8
    stw r31, 0x80(r1)
    b lbl_fn_8039B7B0_00000FB0
lbl_fn_8039B7B0_00000FAC:
    stw r0, 0x80(r1)
lbl_fn_8039B7B0_00000FB0:
    lfs f0, 0xc(r24)
    addi r3, r1, 0x60
    lfs f3, 0x8(r24)
    addi r4, r1, 0x30
    fadds f2, f0, f29
    lfs f0, 0x4(r24)
    fadds f3, f3, f27
    stfs f29, 0x14(r1)
    fadds f0, f0, f29
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x8c(r1)
    lwz r0, 0xf4(r20)
    stfs f27, 0x18(r1)
    subf r0, r0, r23
    cntlzw r0, r0
    stfs f29, 0x1c(r1)
    srwi r0, r0, 5
    stfs f2, 0x28(r1)
    stw r0, 0x94(r1)
    bl fn_80051A88
    cntlzw r0, r3
    lfs f0, 0x8c(r1)
    srwi r0, r0, 5
    stw r0, 0x98(r1)
    lfs f4, 0x88(r1)
    addi r3, r1, 0x8
    lfs f6, 0x530(r25)
    lfs f5, 0x52c(r25)
    fsubs f6, f6, f0
    lfs f3, 0x528(r25)
    lfs f0, 0x84(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    fsubs f0, f1, f31
    fdivs f0, f0, f28
    stfs f0, 0x9c(r1)
    fcmpo cr0, f0, f29
    ble lbl_fn_8039B7B0_00001068
    b lbl_fn_8039B7B0_0000106C
lbl_fn_8039B7B0_00001068:
    fmr f0, f29
lbl_fn_8039B7B0_0000106C:
    fcmpo cr0, f0, f30
    bge lbl_fn_8039B7B0_0000108C
    lfs f0, 0x9c(r1)
    fcmpo cr0, f0, f29
    ble lbl_fn_8039B7B0_00001084
    b lbl_fn_8039B7B0_00001090
lbl_fn_8039B7B0_00001084:
    fmr f0, f29
    b lbl_fn_8039B7B0_00001090
lbl_fn_8039B7B0_0000108C:
    fmr f0, f30
lbl_fn_8039B7B0_00001090:
    fsubs f0, f30, f0
    stw r31, 0x90(r1)
    lwz r3, lbl_8087F490
    addi r4, r1, 0x80
    stfs f0, 0x9c(r1)
    bl fn_803E3C78
lbl_fn_8039B7B0_000010A8:
    addi r21, r21, 0x1
    addi r19, r19, 0x28
lbl_fn_8039B7B0_000010B0:
    lwz r0, 0xec(r22)
    cmplw r21, r0
    blt lbl_fn_8039B7B0_00000D7C
    addi r11, r1, 0xe0
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    psq_l f28, 0xf8(r1), 0, 0
    lfd f28, 0xf0(r1)
    psq_l f27, 0xe8(r1), 0, 0
    lfd f27, 0xe0(r1)
    bl _restgpr_17
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8039BC0C(void)
{
    nofralloc
    li r9, 0x0
    stw r9, 0x0(r5)
    li r8, 0x1
    addi r10, r3, 0x4
    lwz r11, 0x4(r3)
    stb r8, 0x0(r6)
    stb r8, 0x0(r7)
    b lbl_fn_8039BC0C_0000114C
lbl_fn_8039BC0C_0000111C:
    lwz r3, 0x0(r4)
    mr r10, r11
    lwz r0, 0xc(r11)
    cmpw r3, r0
    bge lbl_fn_8039BC0C_0000113C
    lwz r11, 0x0(r11)
    stb r8, 0x0(r6)
    b lbl_fn_8039BC0C_0000114C
lbl_fn_8039BC0C_0000113C:
    stw r11, 0x0(r5)
    lwz r11, 0x4(r11)
    stb r9, 0x0(r6)
    stb r9, 0x0(r7)
lbl_fn_8039BC0C_0000114C:
    cmpwi r11, 0x0
    bne lbl_fn_8039BC0C_0000111C
    mr r3, r10
    blr
}

asm void fn_8039BC6C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x3c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8039BC6C_0000128C
    lwz r3, lbl_8087EEB0
    lis r4, 0x8000
    lfs f1, lbl_80885B58
    lfs f2, lbl_80885B5C
    lfs f3, lbl_80885B10
    lfs f4, lbl_80885B60
    lfs f5, lbl_80885B64
    bl fn_80060D58
    lwz r0, 0x8c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8039BC6C_0000128C
    lwz r0, 0x9c(r30)
    lis r3, lbl_8074EFC8@ha
    lwz r7, 0xa4(r30)
    lis r31, lbl_8074F8CC@ha
    slwi r0, r0, 2
    addi r3, r3, lbl_8074EFC8@l
    addi r31, r31, lbl_8074F8CC@l
    lwzx r5, r3, r0
    lwz r6, 0xa0(r30)
    addi r3, r1, 0x8
    addi r4, r31, 0x7a
    addi r7, r7, 0x1
    crclr 6
    bl sprintf
    lfs f3, lbl_80885B10
    addi r4, r1, 0x8
    lfs f4, lbl_80885B6C
    li r5, -0x1
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, lbl_80885B68
    lfs f2, lbl_80885B5C
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0x94(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8039BC6C_0000128C
    lwz r3, 0x90(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8039BC6C_0000128C
    lwz r0, 0x0(r3)
    lis r5, lbl_8074EB1C@ha
    addi r5, r5, lbl_8074EB1C@l
    addi r3, r1, 0x8
    slwi r0, r0, 2
    addi r4, r31, 0x8d
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    lfs f3, lbl_80885B10
    addi r4, r1, 0x8
    lfs f4, lbl_80885B6C
    li r5, -0x1
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, lbl_80885B68
    lfs f2, lbl_80885B70
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_8039BC6C_0000128C:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8039BDB4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    slwi r0, r4, 2
    stmw r26, 0x28(r1)
    add r31, r3, r0
    lwz r28, 0x4(r5)
    mulli r29, r4, 0x2710
    addi r0, r5, 0xc
    mr r26, r3
    li r27, 0x0
    li r30, 0x0
    stw r5, 0x64(r31)
    lwz r4, 0x60(r3)
    add r4, r4, r28
    stw r4, 0x60(r3)
    stw r0, 0x70(r31)
    b lbl_fn_8039BDB4_00001378
lbl_fn_8039BDB4_000012EC:
    lwz r6, 0x70(r31)
    addi r3, r26, 0x7c
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    lwzx r0, r6, r30
    addi r6, r1, 0x8
    addi r7, r1, 0x9
    add r0, r29, r0
    stw r0, 0x10(r1)
    bl fn_8039BEA4
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8039BDB4_00001334
    addi r5, r4, 0xc
    lwz r0, 0x10(r1)
    lwz r4, 0xc(r4)
    cmpw r4, r0
    bge lbl_fn_8039BDB4_00001360
lbl_fn_8039BDB4_00001334:
    lwz r5, 0x10(r1)
    mr r4, r3
    lwz r0, lbl_8087DD3C
    addi r3, r26, 0x7c
    stw r5, 0x18(r1)
    addi r7, r1, 0x18
    lbz r5, 0x8(r1)
    stw r0, 0x1c(r1)
    lbz r6, 0x9(r1)
    bl fn_803AD3D8
    addi r5, r3, 0xc
lbl_fn_8039BDB4_00001360:
    lwz r0, 0x70(r31)
    addi r27, r27, 0x1
    add r3, r0, r30
    addi r30, r30, 0x8
    lwz r0, 0x4(r3)
    stw r0, 0x4(r5)
lbl_fn_8039BDB4_00001378:
    cmpw r27, r28
    blt lbl_fn_8039BDB4_000012EC
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8039BEA4(void)
{
    nofralloc
    li r9, 0x0
    stw r9, 0x0(r5)
    li r8, 0x1
    addi r10, r3, 0x4
    lwz r11, 0x4(r3)
    stb r8, 0x0(r6)
    stb r8, 0x0(r7)
    b lbl_fn_8039BEA4_000013E4
lbl_fn_8039BEA4_000013B4:
    lwz r3, 0x0(r4)
    mr r10, r11
    lwz r0, 0xc(r11)
    cmpw r3, r0
    bge lbl_fn_8039BEA4_000013D4
    lwz r11, 0x0(r11)
    stb r8, 0x0(r6)
    b lbl_fn_8039BEA4_000013E4
lbl_fn_8039BEA4_000013D4:
    stw r11, 0x0(r5)
    lwz r11, 0x4(r11)
    stb r9, 0x0(r6)
    stb r9, 0x0(r7)
lbl_fn_8039BEA4_000013E4:
    cmpwi r11, 0x0
    bne lbl_fn_8039BEA4_000013B4
    mr r3, r10
    blr
}

asm void fn_8039BF04(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stmw r21, 0x174(r1)
    lis r30, lbl_8074E440@ha
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r31, r6
    mr r25, r7
    mr r26, r8
    addi r30, r30, lbl_8074E440@l
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    bne lbl_fn_8039BF04_00001438
    li r3, 0x0
    b lbl_fn_8039BF04_00001CCC
lbl_fn_8039BF04_00001438:
    bne lbl_fn_8039BF04_00001444
    li r29, 0x0
    b lbl_fn_8039BF04_0000146C
lbl_fn_8039BF04_00001444:
    cmpwi r4, 0x1
    bne lbl_fn_8039BF04_0000145C
    mr r3, r0
    mr r4, r24
    bl fn_80370174
    b lbl_fn_8039BF04_00001468
lbl_fn_8039BF04_0000145C:
    mr r3, r0
    mr r4, r24
    bl fn_80370A78
lbl_fn_8039BF04_00001468:
    mr r29, r3
lbl_fn_8039BF04_0000146C:
    cmpwi r31, 0x0
    li r27, 0x0
    beq lbl_fn_8039BF04_0000149C
    cmpwi r31, 0x1
    beq lbl_fn_8039BF04_00001504
    cmpwi r31, 0x2
    beq lbl_fn_8039BF04_000015A0
    cmpwi r31, 0x3
    beq lbl_fn_8039BF04_0000163C
    cmpwi r31, 0x4
    beq lbl_fn_8039BF04_000016D8
    b lbl_fn_8039BF04_00001770
lbl_fn_8039BF04_0000149C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_000014B0
    li r3, 0x0
    b lbl_fn_8039BF04_000014FC
lbl_fn_8039BF04_000014B0:
    cmpwi r25, 0x2
    bne lbl_fn_8039BF04_000014C4
    mr r4, r26
    bl fn_80370174
    b lbl_fn_8039BF04_000014FC
lbl_fn_8039BF04_000014C4:
    cmpwi r25, 0x1
    bne lbl_fn_8039BF04_000014D8
    mr r4, r26
    bl fn_80370A78
    b lbl_fn_8039BF04_000014FC
lbl_fn_8039BF04_000014D8:
    cmpwi r25, 0x3
    bne lbl_fn_8039BF04_000014F8
    bl fn_80680CF8
    divw r0, r3, r26
    mullw r0, r0, r26
    subf r3, r0, r3
    addi r3, r3, 0x1
    b lbl_fn_8039BF04_000014FC
lbl_fn_8039BF04_000014F8:
    mr r3, r26
lbl_fn_8039BF04_000014FC:
    mr r27, r3
    b lbl_fn_8039BF04_00001770
lbl_fn_8039BF04_00001504:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_00001518
    li r27, 0x0
    b lbl_fn_8039BF04_00001538
lbl_fn_8039BF04_00001518:
    cmpwi r23, 0x1
    bne lbl_fn_8039BF04_0000152C
    mr r4, r24
    bl fn_80370174
    b lbl_fn_8039BF04_00001534
lbl_fn_8039BF04_0000152C:
    mr r4, r24
    bl fn_80370A78
lbl_fn_8039BF04_00001534:
    mr r27, r3
lbl_fn_8039BF04_00001538:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_0000154C
    li r3, 0x0
    b lbl_fn_8039BF04_00001598
lbl_fn_8039BF04_0000154C:
    cmpwi r25, 0x2
    bne lbl_fn_8039BF04_00001560
    mr r4, r26
    bl fn_80370174
    b lbl_fn_8039BF04_00001598
lbl_fn_8039BF04_00001560:
    cmpwi r25, 0x1
    bne lbl_fn_8039BF04_00001574
    mr r4, r26
    bl fn_80370A78
    b lbl_fn_8039BF04_00001598
lbl_fn_8039BF04_00001574:
    cmpwi r25, 0x3
    bne lbl_fn_8039BF04_00001594
    bl fn_80680CF8
    divw r0, r3, r26
    mullw r0, r0, r26
    subf r3, r0, r3
    addi r3, r3, 0x1
    b lbl_fn_8039BF04_00001598
lbl_fn_8039BF04_00001594:
    mr r3, r26
lbl_fn_8039BF04_00001598:
    add r27, r27, r3
    b lbl_fn_8039BF04_00001770
lbl_fn_8039BF04_000015A0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_000015B4
    li r27, 0x0
    b lbl_fn_8039BF04_000015D4
lbl_fn_8039BF04_000015B4:
    cmpwi r23, 0x1
    bne lbl_fn_8039BF04_000015C8
    mr r4, r24
    bl fn_80370174
    b lbl_fn_8039BF04_000015D0
lbl_fn_8039BF04_000015C8:
    mr r4, r24
    bl fn_80370A78
lbl_fn_8039BF04_000015D0:
    mr r27, r3
lbl_fn_8039BF04_000015D4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_000015E8
    li r3, 0x0
    b lbl_fn_8039BF04_00001634
lbl_fn_8039BF04_000015E8:
    cmpwi r25, 0x2
    bne lbl_fn_8039BF04_000015FC
    mr r4, r26
    bl fn_80370174
    b lbl_fn_8039BF04_00001634
lbl_fn_8039BF04_000015FC:
    cmpwi r25, 0x1
    bne lbl_fn_8039BF04_00001610
    mr r4, r26
    bl fn_80370A78
    b lbl_fn_8039BF04_00001634
lbl_fn_8039BF04_00001610:
    cmpwi r25, 0x3
    bne lbl_fn_8039BF04_00001630
    bl fn_80680CF8
    divw r0, r3, r26
    mullw r0, r0, r26
    subf r3, r0, r3
    addi r3, r3, 0x1
    b lbl_fn_8039BF04_00001634
lbl_fn_8039BF04_00001630:
    mr r3, r26
lbl_fn_8039BF04_00001634:
    subf r27, r3, r27
    b lbl_fn_8039BF04_00001770
lbl_fn_8039BF04_0000163C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_00001650
    li r27, 0x0
    b lbl_fn_8039BF04_00001670
lbl_fn_8039BF04_00001650:
    cmpwi r23, 0x1
    bne lbl_fn_8039BF04_00001664
    mr r4, r24
    bl fn_80370174
    b lbl_fn_8039BF04_0000166C
lbl_fn_8039BF04_00001664:
    mr r4, r24
    bl fn_80370A78
lbl_fn_8039BF04_0000166C:
    mr r27, r3
lbl_fn_8039BF04_00001670:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_00001684
    li r3, 0x0
    b lbl_fn_8039BF04_000016D0
lbl_fn_8039BF04_00001684:
    cmpwi r25, 0x2
    bne lbl_fn_8039BF04_00001698
    mr r4, r26
    bl fn_80370174
    b lbl_fn_8039BF04_000016D0
lbl_fn_8039BF04_00001698:
    cmpwi r25, 0x1
    bne lbl_fn_8039BF04_000016AC
    mr r4, r26
    bl fn_80370A78
    b lbl_fn_8039BF04_000016D0
lbl_fn_8039BF04_000016AC:
    cmpwi r25, 0x3
    bne lbl_fn_8039BF04_000016CC
    bl fn_80680CF8
    divw r0, r3, r26
    mullw r0, r0, r26
    subf r3, r0, r3
    addi r3, r3, 0x1
    b lbl_fn_8039BF04_000016D0
lbl_fn_8039BF04_000016CC:
    mr r3, r26
lbl_fn_8039BF04_000016D0:
    mullw r27, r27, r3
    b lbl_fn_8039BF04_00001770
lbl_fn_8039BF04_000016D8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_000016EC
    li r27, 0x0
    b lbl_fn_8039BF04_0000170C
lbl_fn_8039BF04_000016EC:
    cmpwi r23, 0x1
    bne lbl_fn_8039BF04_00001700
    mr r4, r24
    bl fn_80370174
    b lbl_fn_8039BF04_00001708
lbl_fn_8039BF04_00001700:
    mr r4, r24
    bl fn_80370A78
lbl_fn_8039BF04_00001708:
    mr r27, r3
lbl_fn_8039BF04_0000170C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_00001720
    li r3, 0x0
    b lbl_fn_8039BF04_0000176C
lbl_fn_8039BF04_00001720:
    cmpwi r25, 0x2
    bne lbl_fn_8039BF04_00001734
    mr r4, r26
    bl fn_80370174
    b lbl_fn_8039BF04_0000176C
lbl_fn_8039BF04_00001734:
    cmpwi r25, 0x1
    bne lbl_fn_8039BF04_00001748
    mr r4, r26
    bl fn_80370A78
    b lbl_fn_8039BF04_0000176C
lbl_fn_8039BF04_00001748:
    cmpwi r25, 0x3
    bne lbl_fn_8039BF04_00001768
    bl fn_80680CF8
    divw r0, r3, r26
    mullw r0, r0, r26
    subf r3, r0, r3
    addi r3, r3, 0x1
    b lbl_fn_8039BF04_0000176C
lbl_fn_8039BF04_00001768:
    mr r3, r26
lbl_fn_8039BF04_0000176C:
    divw r27, r27, r3
lbl_fn_8039BF04_00001770:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039BF04_00001784
    li r28, 0x0
    b lbl_fn_8039BF04_000017C8
lbl_fn_8039BF04_00001784:
    lwz r21, 0x37c(r22)
    li r0, 0x0
    cmpwi r23, 0x1
    stw r0, 0x37c(r22)
    bne lbl_fn_8039BF04_000017AC
    mr r4, r24
    mr r5, r27
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_8039BF04_000017B8
lbl_fn_8039BF04_000017AC:
    mr r4, r24
    mr r5, r27
    bl fn_80370AE4
lbl_fn_8039BF04_000017B8:
    li r0, 0x1
    stw r0, 0xf0(r22)
    li r28, 0x1
    stw r21, 0x37c(r22)
lbl_fn_8039BF04_000017C8:
    lwz r0, 0x37c(r22)
    cmpwi r0, 0x0
    beq lbl_fn_8039BF04_00001CC8
    slwi r0, r31, 2
    addi r3, r30, 0x8b8
    lwzx r4, r3, r0
    lis r31, lbl_8074F8CC@ha
    stw r24, 0x8(r1)
    slwi r0, r25, 2
    addi r3, r30, 0x8a8
    addi r6, r30, 0xb88
    lwzx r0, r3, r0
    addi r3, r30, 0x898
    stw r4, 0xc(r1)
    addi r31, r31, lbl_8074F8CC@l
    addi r9, r30, 0x6dc
    stw r0, 0x10(r1)
    slwi r0, r23, 2
    lwzx r10, r3, r0
    addi r3, r1, 0x70
    stw r26, 0x14(r1)
    addi r4, r31, 0x94
    stw r10, 0x18(r1)
    stw r24, 0x1c(r1)
    stw r29, 0x20(r1)
    stw r27, 0x24(r1)
    lwz r5, 0x90(r22)
    lwz r7, 0x9c(r22)
    lwz r0, 0x0(r5)
    slwi r8, r7, 2
    lwz r7, 0xa4(r22)
    slwi r0, r0, 2
    lwzx r6, r6, r8
    addi r8, r7, 0x1
    lwz r5, 0xb0(r22)
    lwz r7, 0xa0(r22)
    lwzx r9, r9, r0
    crclr 6
    bl sprintf
    li r23, 0x0
    stw r23, 0x4c(r1)
    addi r21, r1, 0x4c
    addi r3, r1, 0x70
    stw r23, 0x50(r1)
    stw r23, 0x54(r1)
    bl strlen
    mr r24, r3
    mr r3, r21
    mr r4, r24
    bl fn_80013DC4
    addi r6, r1, 0x70
    lbz r0, 0x3c(r1)
    mr r7, r6
    stb r0, 0x38(r1)
    mr r3, r21
    addi r8, r1, 0x38
    add r7, r7, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x388(r22)
    lwz r4, 0x38c(r22)
    cmplw r0, r4
    bge lbl_fn_8039BF04_0000194C
    mulli r0, r0, 0xc
    lwz r3, 0x384(r22)
    add. r21, r3, r0
    beq lbl_fn_8039BF04_0000193C
    lwz r3, 0x4c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8039BF04_000018FC
    lwz r0, 0x50(r1)
    stw r3, 0x0(r21)
    stw r0, 0x4(r21)
    lwz r0, 0x54(r1)
    stw r0, 0x8(r21)
    b lbl_fn_8039BF04_0000193C
lbl_fn_8039BF04_000018FC:
    stw r23, 0x0(r21)
    mr r3, r21
    stw r23, 0x4(r21)
    stw r23, 0x8(r21)
    lwz r4, 0x50(r1)
    bl fn_80013DC4
    lbz r5, 0x2c(r1)
    mr r3, r21
    stb r5, 0x28(r1)
    addi r8, r1, 0x28
    lwz r6, 0x54(r1)
    li r4, 0x0
    lwz r0, 0x50(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8039BF04_0000193C:
    lwz r3, 0x388(r22)
    addi r0, r3, 0x1
    stw r0, 0x388(r22)
    b lbl_fn_8039BF04_00001CB4
lbl_fn_8039BF04_0000194C:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8039BF04_0000197C
    lis r3, __files@ha
    addi r4, r31, 0xce
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8039BF04_0000197C:
    lwz r4, 0x388(r22)
    li r6, 0x0
    lis r3, 0x1555
    lwz r31, 0x38c(r22)
    addi r0, r3, 0x5555
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r5, r22, 0x38c
    subf r0, r31, r0
    stw r6, 0x58(r1)
    cmplw r3, r0
    stw r6, 0x5c(r1)
    stw r6, 0x60(r1)
    stw r5, 0x64(r1)
    stw r6, 0x68(r1)
    stw r3, 0x48(r1)
    ble lbl_fn_8039BF04_000019E4
    lis r4, lbl_8074F8CC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r3, __files@l
    addi r4, r4, 0xce
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8039BF04_000019E4:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_8039BF04_00001A34
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x48(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x40
    srwi r4, r4, 2
    stw r4, 0x40(r1)
    cmplw r4, r0
    bge lbl_fn_8039BF04_00001A28
    addi r3, r1, 0x48
lbl_fn_8039BF04_00001A28:
    lwz r0, 0x0(r3)
    add r21, r31, r0
    b lbl_fn_8039BF04_00001A78
lbl_fn_8039BF04_00001A34:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_8039BF04_00001A70
    addi r3, r31, 0x1
    lwz r0, 0x48(r1)
    srwi r3, r3, 1
    stw r3, 0x44(r1)
    cmplw r3, r0
    addi r3, r1, 0x44
    bge lbl_fn_8039BF04_00001A64
    addi r3, r1, 0x48
lbl_fn_8039BF04_00001A64:
    lwz r0, 0x0(r3)
    add r21, r31, r0
    b lbl_fn_8039BF04_00001A78
lbl_fn_8039BF04_00001A70:
    lis r3, 0x1555
    addi r21, r3, 0x5555
lbl_fn_8039BF04_00001A78:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r21, r0
    ble lbl_fn_8039BF04_00001AAC
    lis r4, lbl_8074F8CC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r3, __files@l
    addi r4, r4, 0xce
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8039BF04_00001AAC:
    mulli r3, r21, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_8039BF04_00001AE0
    lis r3, __files@ha
    lis r4, lbl_80778910@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8039BF04_00001AE0:
    lwz r6, 0x388(r22)
    li r0, 0x0
    lwz r3, 0x5c(r1)
    mulli r5, r6, 0xc
    stw r21, 0x60(r1)
    stw r23, 0x58(r1)
    mulli r4, r3, 0xc
    add r3, r23, r5
    stw r6, 0x68(r1)
    add. r21, r4, r3
    beq lbl_fn_8039BF04_00001B70
    lwz r4, 0x4c(r1)
    srwi. r3, r4, 31
    bne lbl_fn_8039BF04_00001B30
    lwz r0, 0x50(r1)
    stw r4, 0x0(r21)
    stw r0, 0x4(r21)
    lwz r0, 0x54(r1)
    stw r0, 0x8(r21)
    b lbl_fn_8039BF04_00001B70
lbl_fn_8039BF04_00001B30:
    stw r0, 0x0(r21)
    mr r3, r21
    stw r0, 0x4(r21)
    stw r0, 0x8(r21)
    lwz r4, 0x50(r1)
    bl fn_80013DC4
    lbz r5, 0x30(r1)
    mr r3, r21
    stb r5, 0x34(r1)
    addi r8, r1, 0x34
    lwz r6, 0x54(r1)
    li r4, 0x0
    lwz r0, 0x50(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8039BF04_00001B70:
    lwz r0, 0x388(r22)
    lis r3, 0x2aab
    lwz r29, 0x384(r22)
    subi r6, r3, 0x5555
    mulli r5, r0, 0xc
    lwz r3, 0x5c(r1)
    lwz r0, 0x68(r1)
    mr r4, r29
    addi r7, r3, 0x1
    lwz r3, 0x58(r1)
    add r5, r29, r5
    stw r7, 0x5c(r1)
    subf r5, r29, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r21, r5, r6
    subf r0, r21, r0
    stw r0, 0x68(r1)
    mulli r23, r21, 0xc
    mulli r0, r0, 0xc
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    mr r3, r29
    mr r5, r23
    li r4, 0x0
    bl memset
    lwz r0, 0x68(r1)
    addi r23, r1, 0x58
    lwz r8, 0x388(r22)
    mulli r3, r0, 0xc
    lwz r0, 0x5c(r1)
    lwz r7, 0x384(r22)
    lwz r4, 0x58(r1)
    add r5, r0, r21
    add r24, r7, r3
    mulli r0, r8, 0xc
    lwz r6, 0x38c(r22)
    lwz r3, 0x60(r1)
    stw r3, 0x38c(r22)
    add r21, r24, r0
    stw r6, 0x60(r1)
    stw r4, 0x384(r22)
    stw r7, 0x58(r1)
    stw r5, 0x388(r22)
    stw r8, 0x5c(r1)
    b lbl_fn_8039BF04_00001C4C
lbl_fn_8039BF04_00001C30:
    subic. r21, r21, 0xc
    beq lbl_fn_8039BF04_00001C4C
    lwz r0, 0x0(r21)
    srwi. r0, r0, 31
    beq lbl_fn_8039BF04_00001C4C
    lwz r3, 0x8(r21)
    bl dtor_80084684
lbl_fn_8039BF04_00001C4C:
    cmplw r21, r24
    bgt lbl_fn_8039BF04_00001C30
    cmpwi r23, 0x0
    li r0, 0x0
    stw r0, 0x5c(r1)
    beq lbl_fn_8039BF04_00001CB4
    lwz r3, 0x58(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8039BF04_00001CB4
    mulli r0, r0, 0xc
    li r21, 0x0
    stw r21, 0x5c(r1)
    add r22, r3, r0
    b lbl_fn_8039BF04_00001CA4
lbl_fn_8039BF04_00001C84:
    subic. r22, r22, 0xc
    beq lbl_fn_8039BF04_00001CA0
    lwz r0, 0x0(r22)
    srwi. r0, r0, 31
    beq lbl_fn_8039BF04_00001CA0
    lwz r3, 0x8(r22)
    bl dtor_80084684
lbl_fn_8039BF04_00001CA0:
    subi r21, r21, 0x1
lbl_fn_8039BF04_00001CA4:
    cmpwi r21, 0x0
    bne lbl_fn_8039BF04_00001C84
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_8039BF04_00001CB4:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8039BF04_00001CC8
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_8039BF04_00001CC8:
    mr r3, r28
lbl_fn_8039BF04_00001CCC:
    lmw r21, 0x174(r1)
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}
