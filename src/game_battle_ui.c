#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80134208(void);
extern void fn_801346C8(void);
extern void fn_8016E970(void);
extern void fn_801C1578(void);
extern void fn_801C9B24(void);
extern void fn_801C9F6C(void);
extern void fn_80370174(void);
extern void fn_80375184(void);
extern void fn_803CC3BC(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737808[];
extern u8 lbl_80737830[];
extern u8 lbl_80737838[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881978;
extern u32 lbl_8088197C;
extern u32 lbl_8088199C;
extern u32 lbl_808819B0;
extern u32 lbl_808819BC;
extern u32 lbl_808819C4;
extern u32 lbl_808819C8;
extern u32 lbl_808819CC;
extern u32 lbl_808819DC;
extern u32 lbl_808819F4;
extern u32 lbl_808819F8;
extern u32 lbl_80881A0C;
extern u32 lbl_80881A48;
extern u32 lbl_80881B0C;
extern u32 lbl_80881B38;
extern u32 lbl_80881B40;
extern u32 lbl_80881B44;

/* Function declarations */
void fn_80172EFC(void);
void fn_8017380C(void);
void fn_80174104(void);

asm void fn_80172EFC(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x1c0
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    stfd f28, 0x1f0(r1)
    psq_st f28, 0x1f8(r1), 0, 0
    stfd f27, 0x1e0(r1)
    psq_st f27, 0x1e8(r1), 0, 0
    stfd f26, 0x1d0(r1)
    psq_st f26, 0x1d8(r1), 0, 0
    stfd f25, 0x1c0(r1)
    psq_st f25, 0x1c8(r1), 0, 0
    bl _savegpr_23
    lis r31, lbl_8077A720@ha
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r31, lbl_8077A720@l
    bl fn_8017380C
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_0000007C
    li r0, 0x0
    stw r0, 0x13ac(r27)
    li r3, 0x1
    b lbl_fn_80172EFC_000008C0
lbl_fn_80172EFC_0000007C:
    lwz r0, 0x48(r27)
    li r30, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80172EFC_00000090
    li r30, 0x0
lbl_fn_80172EFC_00000090:
    cmpwi r30, 0x0
    beq lbl_fn_80172EFC_000000B0
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_80172EFC_000000AC
    cmpwi r0, 0x8
    bne lbl_fn_80172EFC_000000B0
lbl_fn_80172EFC_000000AC:
    li r30, 0x0
lbl_fn_80172EFC_000000B0:
    cmpwi r30, 0x0
    beq lbl_fn_80172EFC_000000F0
    addi r3, r27, 0x7d4
    li r4, 0x10
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    bne lbl_fn_80172EFC_000000F0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80172EFC_000000EC
    addi r3, r27, 0x7d4
    bl fn_80134208
    cmpwi r3, 0x0
    bne lbl_fn_80172EFC_000000F0
lbl_fn_80172EFC_000000EC:
    li r30, 0x0
lbl_fn_80172EFC_000000F0:
    cmpwi r30, 0x0
    beq lbl_fn_80172EFC_000001F4
    lwz r6, 0x38(r27)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_80172EFC_00000124
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_80172EFC_00000124
    li r3, 0x1
lbl_fn_80172EFC_00000124:
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_00000140
    lwz r3, 0x7e0(r27)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_80172EFC_00000140
    li r0, 0x1
lbl_fn_80172EFC_00000140:
    cmpwi r0, 0x0
    beq lbl_fn_80172EFC_00000174
    lwz r0, 0x55c(r27)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80172EFC_00000168
    lwz r0, 0x560(r27)
    cmpwi r0, 0x1c
    bne lbl_fn_80172EFC_00000168
    li r3, 0x1
lbl_fn_80172EFC_00000168:
    cmpwi r3, 0x0
    bne lbl_fn_80172EFC_00000174
    li r4, 0x1
lbl_fn_80172EFC_00000174:
    cmpwi r4, 0x0
    bne lbl_fn_80172EFC_00000184
    li r0, 0x0
    b lbl_fn_80172EFC_000001D0
lbl_fn_80172EFC_00000184:
    lwz r0, 0x7e0(r27)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80172EFC_000001A8
    lwz r0, 0xf94(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80172EFC_000001A8
    li r0, 0x0
    b lbl_fn_80172EFC_000001D0
lbl_fn_80172EFC_000001A8:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_80172EFC_000001CC
    lwz r3, 0x560(r27)
    subi r0, r3, 0x11
    cmplwi r0, 0x2
    bgt lbl_fn_80172EFC_000001CC
    li r0, 0x0
    b lbl_fn_80172EFC_000001D0
lbl_fn_80172EFC_000001CC:
    li r0, 0x1
lbl_fn_80172EFC_000001D0:
    cmpwi r0, 0x0
    beq lbl_fn_80172EFC_000001F0
    lwz r0, 0x1208(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80172EFC_000001F0
    lwz r0, 0x139c(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80172EFC_000001F4
lbl_fn_80172EFC_000001F0:
    li r30, 0x0
lbl_fn_80172EFC_000001F4:
    cmpwi r30, 0x0
    beq lbl_fn_80172EFC_00000218
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_00000214
    bl fn_80375184
    cmpwi r3, 0x0
    bne lbl_fn_80172EFC_00000218
lbl_fn_80172EFC_00000214:
    li r30, 0x0
lbl_fn_80172EFC_00000218:
    lfs f4, 0x8(r29)
    cmpwi r30, 0x0
    lfs f3, 0x0(r29)
    lfs f0, lbl_8088196C
    stfs f3, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f4, 0xac(r1)
    beq lbl_fn_80172EFC_000002B8
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_8088199C
    lfs f4, 0x3a4(r3)
    lfs f3, 0x570(r27)
    fmuls f0, f0, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_80172EFC_0000025C
    li r30, 0x0
    b lbl_fn_80172EFC_000002B8
lbl_fn_80172EFC_0000025C:
    addi r3, r1, 0xa4
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_8088196C
    addi r3, r1, 0xb0
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x5c
    addi r3, r1, 0xb0
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xa4
    addi r4, r1, 0x5c
    bl fn_805F9990
    lfs f0, lbl_80881B38
    fcmpo cr0, f1, f0
    bge lbl_fn_80172EFC_000002B8
    li r30, 0x0
lbl_fn_80172EFC_000002B8:
    lwz r3, lbl_8087F430
    li r24, 0xc
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_000002EC
    li r4, 0x120
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_80172EFC_000002E0
    li r24, 0x4
    b lbl_fn_80172EFC_000002EC
lbl_fn_80172EFC_000002E0:
    cmpwi r3, 0x2
    bne lbl_fn_80172EFC_000002EC
    li r24, 0x18
lbl_fn_80172EFC_000002EC:
    cmpwi r30, 0x0
    bne lbl_fn_80172EFC_00000304
    li r0, 0x0
    stw r0, 0x13ac(r27)
    li r3, 0x0
    b lbl_fn_80172EFC_000008C0
lbl_fn_80172EFC_00000304:
    lfs f2, 0x8(r28)
    addi r26, r1, 0x98
    psq_l f1, 0x0(r28), 0, 0
    addi r25, r1, 0x8c
    psq_st f1, 0x0(r25), 0, 0
    lis r3, 0x8000
    addi r30, r3, 0x20
    lfs f3, lbl_808819DC
    psq_st f1, 0x0(r26), 0, 0
    li r29, 0x0
    lfs f0, 0x90(r1)
    mr r5, r26
    lfs f4, 0x9c(r1)
    mr r6, r25
    fadds f8, f0, f3
    stfs f2, 0xa0(r1)
    fadds f0, f4, f3
    lfs f4, lbl_80881978
    stfs f2, 0x94(r1)
    mr r7, r30
    stfs f0, 0x9c(r1)
    addi r4, r1, 0x110
    lfs f6, lbl_808819F8
    li r8, 0x0
    stfs f8, 0x90(r1)
    li r9, 0x0
    lfs f5, 0xac(r1)
    lfs f0, 0x620(r27)
    lfs f3, 0xa8(r1)
    fadds f7, f4, f0
    lfs f0, 0xa4(r1)
    lfs f4, 0x8c(r1)
    stw r29, 0x144(r1)
    fadds f6, f6, f7
    lwz r3, lbl_8087EE98
    stw r29, 0x148(r1)
    fmuls f7, f3, f6
    stw r29, 0x14c(r1)
    fmuls f5, f5, f6
    fmuls f6, f0, f6
    stfs f7, 0x54(r1)
    fadds f3, f8, f7
    fadds f0, f2, f5
    stfs f5, 0x58(r1)
    fadds f4, f4, f6
    stfs f6, 0x50(r1)
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    stw r29, 0x150(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_000008B8
    lwz r3, 0x13ac(r27)
    addi r0, r3, 0x1
    stw r0, 0x13ac(r27)
    cmpw r0, r24
    ble lbl_fn_80172EFC_000008B0
    lwz r3, lbl_8087F430
    mr r4, r28
    mr r6, r27
    addi r5, r1, 0xa4
    lwz r3, 0x10d8(r3)
    bl fn_803CC3BC
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_000008B0
    lfs f4, 0xac(r1)
    addi r3, r1, 0x138
    lfs f3, 0xa8(r1)
    addi r4, r1, 0x44
    lfs f0, 0xa4(r1)
    fneg f4, f4
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x4c(r1)
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    bl fn_805F9990
    lfs f0, lbl_80881B38
    fcmpo cr0, f1, f0
    ble lbl_fn_80172EFC_000008B0
    addi r3, r1, 0x114
    lfs f2, 0x11c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x80
    stfs f2, 0x88(r1)
    lis r3, lbl_80737808@ha
    lfs f2, 0x140(r1)
    addi r5, r1, 0x138
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0x74
    psq_l f1, 0x0(r5), 0, 0
    li r24, 0x0
    psq_st f1, 0x0(r4), 0, 0
    li r23, 0x0
    lfs f26, lbl_8088196C
    lis r29, 0x4330
    stfs f2, 0x7c(r1)
    lfs f27, lbl_80881964
    lfd f28, lbl_80737808@l(r3)
    lfs f29, lbl_80881A0C
    lfs f30, lbl_80881978
    lfs f31, lbl_808819DC
    lfs f25, lbl_80881B40
lbl_fn_80172EFC_000004A4:
    stfs f26, 0x38(r1)
    addi r3, r1, 0xa4
    addi r4, r1, 0x38
    addi r5, r1, 0x68
    stfs f27, 0x3c(r1)
    stfs f26, 0x40(r1)
    bl fn_805F99B0
    xoris r0, r23, 0x8000
    stw r0, 0x164(r1)
    addi r3, r1, 0xe0
    addi r4, r1, 0xa4
    stw r29, 0x160(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f28
    fmuls f1, f29, f0
    bl fn_805F9050
    addi r4, r1, 0x68
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x68(r1)
    mr r5, r26
    lfs f3, 0x6c(r1)
    mr r6, r25
    fmuls f7, f4, f30
    lfs f0, 0x70(r1)
    fmuls f6, f3, f30
    lfs f5, 0xac(r1)
    fmuls f4, f0, f30
    stfs f7, 0x68(r1)
    stfs f6, 0x6c(r1)
    mr r7, r30
    lfs f3, 0xa8(r1)
    addi r4, r1, 0x110
    stfs f4, 0x70(r1)
    li r8, 0x0
    lfs f0, 0xa4(r1)
    li r9, 0x0
    lfs f2, 0x8(r28)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    lwz r3, lbl_8087EE98
    psq_st f1, 0x0(r26), 0, 0
    lfs f4, 0x90(r1)
    lfs f6, 0x9c(r1)
    fadds f7, f4, f31
    stfs f2, 0xa0(r1)
    fadds f6, f6, f31
    lfs f4, 0x8c(r1)
    stfs f2, 0x94(r1)
    stfs f6, 0x9c(r1)
    stfs f7, 0x90(r1)
    lfs f6, 0x620(r27)
    fadds f6, f30, f6
    fmuls f8, f3, f6
    fmuls f5, f5, f6
    fmuls f6, f0, f6
    stfs f8, 0x30(r1)
    fadds f3, f7, f8
    fadds f0, f2, f5
    stfs f5, 0x34(r1)
    fadds f4, f4, f6
    stfs f6, 0x2c(r1)
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_000005D4
    addi r3, r1, 0x138
    addi r4, r1, 0x74
    bl fn_805F9990
    fcmpo cr0, f1, f25
    bge lbl_fn_80172EFC_000005D4
    li r24, 0x1
    b lbl_fn_80172EFC_000005E0
lbl_fn_80172EFC_000005D4:
    addi r23, r23, 0x1
    cmpwi r23, 0x2
    blt lbl_fn_80172EFC_000004A4
lbl_fn_80172EFC_000005E0:
    cmpwi r24, 0x0
    bne lbl_fn_80172EFC_000008B0
    lfs f3, 0x84(r1)
    lis r3, lbl_80737A9C@ha
    lfs f0, lbl_80881B0C
    addi r3, r3, lbl_80737A9C@l
    addi r5, r3, 0x24
    li r0, 0x0
    fadds f0, f3, f0
    mr r6, r5
    li r3, 0x54
    li r4, 0x0
    stfs f0, 0x84(r1)
    li r7, 0x0
    stw r0, 0x13ac(r27)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80172EFC_00000640
    mr r4, r27
    addi r5, r1, 0x80
    addi r6, r1, 0xa4
    bl fn_801C9F6C
    mr r30, r3
lbl_fn_80172EFC_00000640:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_80172EFC_000006D0
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80172EFC_00000678
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x168(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x16c(r1)
    stw r0, 0x170(r1)
    b lbl_fn_80172EFC_00000694
lbl_fn_80172EFC_00000678:
    addi r3, r31, 0x1b18
    lwz r5, 0x1b18(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x168(r1)
    stw r4, 0x16c(r1)
    stw r0, 0x170(r1)
lbl_fn_80172EFC_00000694:
    lwz r5, 0x168(r1)
    addi r3, r1, 0x20
    lwz r4, 0x16c(r1)
    lwz r0, 0x170(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_000006D0
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80172EFC_000006D0:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_80172EFC_00000884
    cmpwi r0, 0x8
    beq lbl_fn_80172EFC_000006E8
    stw r0, 0x564(r27)
lbl_fn_80172EFC_000006E8:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_80172EFC_00000884
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80172EFC_00000720
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x174(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x178(r1)
    stw r0, 0x17c(r1)
    b lbl_fn_80172EFC_0000073C
lbl_fn_80172EFC_00000720:
    addi r3, r31, 0x1b24
    lwz r5, 0x1b24(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x174(r1)
    stw r4, 0x178(r1)
    stw r0, 0x17c(r1)
lbl_fn_80172EFC_0000073C:
    lwz r5, 0x174(r1)
    addi r3, r1, 0x8
    lwz r4, 0x178(r1)
    lwz r0, 0x17c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_00000778
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80172EFC_00000778:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_80172EFC_00000854
    cmpwi r0, 0x8
    beq lbl_fn_80172EFC_00000790
    stw r0, 0x564(r27)
lbl_fn_80172EFC_00000790:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_80172EFC_00000854
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80172EFC_000007C8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x180(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x184(r1)
    stw r0, 0x188(r1)
    b lbl_fn_80172EFC_000007E4
lbl_fn_80172EFC_000007C8:
    addi r3, r31, 0x1b30
    lwz r5, 0x1b30(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x180(r1)
    stw r4, 0x184(r1)
    stw r0, 0x188(r1)
lbl_fn_80172EFC_000007E4:
    lwz r5, 0x180(r1)
    addi r3, r1, 0x14
    lwz r4, 0x184(r1)
    lwz r0, 0x188(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80172EFC_00000820
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80172EFC_00000820:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_80172EFC_00000854
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80172EFC_00000854:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_80172EFC_00000884
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80172EFC_00000884:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r30, 0xf80(r27)
    beq lbl_fn_80172EFC_000008B0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80172EFC_000008B0:
    li r3, 0x1
    b lbl_fn_80172EFC_000008C0
lbl_fn_80172EFC_000008B8:
    stw r29, 0x13ac(r27)
    li r3, 0x0
lbl_fn_80172EFC_000008C0:
    addi r11, r1, 0x1c0
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    psq_l f28, 0x1f8(r1), 0, 0
    lfd f28, 0x1f0(r1)
    psq_l f27, 0x1e8(r1), 0, 0
    lfd f27, 0x1e0(r1)
    psq_l f26, 0x1d8(r1), 0, 0
    lfd f26, 0x1d0(r1)
    psq_l f25, 0x1c8(r1), 0, 0
    lfd f25, 0x1c0(r1)
    bl _restgpr_23
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_8017380C(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x208(r1)
    mr r30, r4
    stw r29, 0x204(r1)
    mr r29, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8017380C_00000954
    li r3, 0x0
    b lbl_fn_8017380C_000011E4
lbl_fn_8017380C_00000954:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8017380C_00000968
    cmpwi r0, 0x8
    bne lbl_fn_8017380C_00000970
lbl_fn_8017380C_00000968:
    li r3, 0x0
    b lbl_fn_8017380C_000011E4
lbl_fn_8017380C_00000970:
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8017380C_00000988
    lwz r0, 0x139c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8017380C_00000990
lbl_fn_8017380C_00000988:
    li r3, 0x0
    b lbl_fn_8017380C_000011E4
lbl_fn_8017380C_00000990:
    lfs f4, 0x8(r5)
    addi r3, r1, 0xd4
    lfs f3, 0x0(r5)
    lfs f0, lbl_8088196C
    stfs f3, 0xd4(r1)
    lwz r4, lbl_8087EFA8
    stfs f0, 0xd8(r1)
    stfs f4, 0xdc(r1)
    lfs f31, 0x3a4(r4)
    bl fn_805F9920
    lfs f0, lbl_808819BC
    fmuls f0, f0, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_8017380C_000009D0
    li r3, 0x0
    b lbl_fn_8017380C_000011E4
lbl_fn_8017380C_000009D0:
    addi r3, r1, 0xd4
    mr r4, r3
    bl fn_805F98D0
    lis r3, lbl_80737830@ha
    lfd f1, lbl_80737830@l(r3)
    bl fn_8068A850
    lfs f3, lbl_8088196C
    frsp f31, f1
    lfs f0, lbl_80881964
    addi r3, r1, 0xe0
    stfs f3, 0xb0(r1)
    li r4, 0x79
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0xb0
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xd4
    addi r4, r1, 0xb0
    bl fn_805F9990
    fcmpo cr0, f1, f31
    bge lbl_fn_8017380C_00000A3C
    li r3, 0x0
    b lbl_fn_8017380C_000011E4
lbl_fn_8017380C_00000A3C:
    addi r5, r1, 0xc8
    psq_l f1, 0x0(r30), 0, 0
    addi r6, r1, 0xbc
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r30)
    lis r3, 0x8000
    psq_st f1, 0x0(r6), 0, 0
    addi r7, r3, 0x20
    lfs f3, lbl_808819F8
    li r0, 0x0
    lfs f0, 0xc0(r1)
    addi r4, r1, 0x160
    lfs f4, 0xcc(r1)
    li r8, 0x0
    fadds f8, f0, f3
    stfs f2, 0xd0(r1)
    fadds f0, f4, f3
    lfs f7, lbl_80881978
    stfs f2, 0xc4(r1)
    li r9, 0x0
    stfs f0, 0xcc(r1)
    lfs f5, 0xdc(r1)
    stfs f8, 0xc0(r1)
    lfs f3, 0xd8(r1)
    lfs f6, 0x620(r29)
    lfs f0, 0xd4(r1)
    fadds f6, f7, f6
    lfs f4, 0xbc(r1)
    stw r0, 0x194(r1)
    lwz r3, lbl_8087EE98
    fmuls f5, f5, f6
    stw r0, 0x198(r1)
    fmuls f3, f3, f6
    fmuls f6, f0, f6
    stw r0, 0x19c(r1)
    fadds f0, f2, f5
    stfs f3, 0xa8(r1)
    fadds f3, f8, f3
    fadds f4, f4, f6
    stfs f6, 0xa4(r1)
    stfs f5, 0xac(r1)
    stfs f4, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    stw r0, 0x1a0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8017380C_000011E0
    lwz r0, 0x19c(r1)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8017380C_00000B1C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x2c0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8017380C_000011E0
lbl_fn_8017380C_00000B1C:
    lfs f4, 0xdc(r1)
    addi r3, r1, 0x188
    lfs f3, 0xd8(r1)
    addi r4, r1, 0x98
    lfs f0, 0xd4(r1)
    fneg f4, f4
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0xa0(r1)
    stfs f0, 0x98(r1)
    stfs f3, 0x9c(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f31
    ble lbl_fn_8017380C_000011D8
    lfs f3, 0x52c(r29)
    lfs f0, lbl_80881A48
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8017380C_00000F00
    li r30, 0x0
    stw r30, 0x144(r1)
    lis r3, 0x8000
    lfs f6, lbl_8088197C
    stw r30, 0x148(r1)
    addi r7, r3, 0x20
    lfs f5, 0xdc(r1)
    addi r4, r1, 0x110
    stw r30, 0x14c(r1)
    addi r5, r1, 0x2c
    lfs f4, 0xd8(r1)
    addi r6, r1, 0x38
    stw r30, 0x150(r1)
    li r8, 0x0
    lfs f3, 0xd4(r1)
    li r9, 0x0
    lfs f0, 0x52c(r29)
    lfs f9, 0x530(r29)
    lfs f11, 0x528(r29)
    fadds f10, f6, f0
    stfs f11, 0x2c(r1)
    lfs f0, lbl_808819B0
    stfs f10, 0x30(r1)
    lwz r3, lbl_8087EE98
    stfs f9, 0x34(r1)
    lfs f6, 0x620(r29)
    fmuls f5, f5, f6
    fmuls f8, f4, f6
    fmuls f3, f3, f6
    stfs f5, 0x58(r1)
    fmuls f7, f5, f0
    fmuls f6, f8, f0
    stfs f3, 0x50(r1)
    fmuls f5, f3, f0
    fadds f4, f9, f7
    stfs f8, 0x54(r1)
    fadds f3, f10, f6
    fadds f0, f11, f5
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f4, 0x40(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8017380C_000011D8
    lfs f4, 0x140(r1)
    lis r3, lbl_80737A9C@ha
    lfs f3, 0x13c(r1)
    addi r3, r3, lbl_80737A9C@l
    lfs f0, 0x138(r1)
    fneg f4, f4
    fneg f3, f3
    addi r5, r3, 0x24
    fneg f0, f0
    stfs f4, 0x64(r1)
    mr r6, r5
    stfs f0, 0x5c(r1)
    li r3, 0x54
    li r4, 0x0
    stfs f3, 0x60(r1)
    li r7, 0x0
    stw r30, 0x13ac(r29)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8017380C_00000C8C
    mr r4, r29
    addi r5, r1, 0x114
    addi r6, r1, 0x5c
    bl fn_801C9F6C
    mr r30, r3
lbl_fn_8017380C_00000C8C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017380C_00000D1C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017380C_00000CC4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1b0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1b4(r1)
    stw r0, 0x1b8(r1)
    b lbl_fn_8017380C_00000CE0
lbl_fn_8017380C_00000CC4:
    addi r3, r31, 0x1b3c
    lwz r5, 0x1b3c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1b0(r1)
    stw r4, 0x1b4(r1)
    stw r0, 0x1b8(r1)
lbl_fn_8017380C_00000CE0:
    lwz r5, 0x1b0(r1)
    addi r3, r1, 0x68
    lwz r4, 0x1b4(r1)
    lwz r0, 0x1b8(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017380C_00000D1C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_00000D1C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8017380C_00000ED0
    cmpwi r0, 0x8
    beq lbl_fn_8017380C_00000D34
    stw r0, 0x564(r29)
lbl_fn_8017380C_00000D34:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017380C_00000ED0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017380C_00000D6C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1bc(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1c0(r1)
    stw r0, 0x1c4(r1)
    b lbl_fn_8017380C_00000D88
lbl_fn_8017380C_00000D6C:
    addi r3, r31, 0x1b48
    lwz r5, 0x1b48(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1bc(r1)
    stw r4, 0x1c0(r1)
    stw r0, 0x1c4(r1)
lbl_fn_8017380C_00000D88:
    lwz r5, 0x1bc(r1)
    addi r3, r1, 0x80
    lwz r4, 0x1c0(r1)
    lwz r0, 0x1c4(r1)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017380C_00000DC4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_00000DC4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8017380C_00000EA0
    cmpwi r0, 0x8
    beq lbl_fn_8017380C_00000DDC
    stw r0, 0x564(r29)
lbl_fn_8017380C_00000DDC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017380C_00000EA0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017380C_00000E14
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1c8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1cc(r1)
    stw r0, 0x1d0(r1)
    b lbl_fn_8017380C_00000E30
lbl_fn_8017380C_00000E14:
    addi r3, r31, 0x1b54
    lwz r5, 0x1b54(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1c8(r1)
    stw r4, 0x1cc(r1)
    stw r0, 0x1d0(r1)
lbl_fn_8017380C_00000E30:
    lwz r5, 0x1c8(r1)
    addi r3, r1, 0x74
    lwz r4, 0x1cc(r1)
    lwz r0, 0x1d0(r1)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017380C_00000E6C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_00000E6C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017380C_00000EA0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_00000EA0:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017380C_00000ED0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_00000ED0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8017380C_000011D8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8017380C_000011D8
lbl_fn_8017380C_00000F00:
    lis r5, lbl_80737A9C@ha
    li r3, 0x3c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x1
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8017380C_00000F68
    lfs f4, 0x190(r1)
    mr r4, r29
    lfs f3, 0x18c(r1)
    addi r5, r1, 0x8c
    lfs f0, 0x188(r1)
    fneg f4, f4
    fneg f3, f3
    addi r6, r1, 0x164
    fneg f0, f0
    stfs f4, 0x94(r1)
    li r7, 0x0
    stfs f0, 0x8c(r1)
    stfs f3, 0x90(r1)
    bl fn_801C1578
    mr r30, r3
lbl_fn_8017380C_00000F68:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017380C_00000FF8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017380C_00000FA0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1d4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1d8(r1)
    stw r0, 0x1dc(r1)
    b lbl_fn_8017380C_00000FBC
lbl_fn_8017380C_00000FA0:
    addi r3, r31, 0x1b60
    lwz r5, 0x1b60(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1d4(r1)
    stw r4, 0x1d8(r1)
    stw r0, 0x1dc(r1)
lbl_fn_8017380C_00000FBC:
    lwz r5, 0x1d4(r1)
    addi r3, r1, 0x8
    lwz r4, 0x1d8(r1)
    lwz r0, 0x1dc(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017380C_00000FF8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_00000FF8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8017380C_000011AC
    cmpwi r0, 0x8
    beq lbl_fn_8017380C_00001010
    stw r0, 0x564(r29)
lbl_fn_8017380C_00001010:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017380C_000011AC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017380C_00001048
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1e0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1e4(r1)
    stw r0, 0x1e8(r1)
    b lbl_fn_8017380C_00001064
lbl_fn_8017380C_00001048:
    addi r3, r31, 0x1b6c
    lwz r5, 0x1b6c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1e0(r1)
    stw r4, 0x1e4(r1)
    stw r0, 0x1e8(r1)
lbl_fn_8017380C_00001064:
    lwz r5, 0x1e0(r1)
    addi r3, r1, 0x20
    lwz r4, 0x1e4(r1)
    lwz r0, 0x1e8(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017380C_000010A0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_000010A0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8017380C_0000117C
    cmpwi r0, 0x8
    beq lbl_fn_8017380C_000010B8
    stw r0, 0x564(r29)
lbl_fn_8017380C_000010B8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017380C_0000117C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017380C_000010F0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1ec(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1f0(r1)
    stw r0, 0x1f4(r1)
    b lbl_fn_8017380C_0000110C
lbl_fn_8017380C_000010F0:
    addi r3, r31, 0x1b78
    lwz r5, 0x1b78(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1ec(r1)
    stw r4, 0x1f0(r1)
    stw r0, 0x1f4(r1)
lbl_fn_8017380C_0000110C:
    lwz r5, 0x1ec(r1)
    addi r3, r1, 0x14
    lwz r4, 0x1f0(r1)
    lwz r0, 0x1f4(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017380C_00001148
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_00001148:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017380C_0000117C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_0000117C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017380C_000011AC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_000011AC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8017380C_000011D8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017380C_000011D8:
    li r3, 0x1
    b lbl_fn_8017380C_000011E4
lbl_fn_8017380C_000011E0:
    li r3, 0x0
lbl_fn_8017380C_000011E4:
    lwz r0, 0x224(r1)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80174104(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stw r31, 0x2ac(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x2a8(r1)
    mr r30, r5
    stw r29, 0x2a4(r1)
    mr r29, r4
    stw r28, 0x2a0(r1)
    mr r28, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80174104_0000125C
    li r3, 0x0
    b lbl_fn_80174104_00001AC0
lbl_fn_80174104_0000125C:
    lwz r4, lbl_8087F098
    cmpwi r4, 0x0
    beq lbl_fn_80174104_0000127C
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80174104_0000127C
    li r3, 0x0
    b lbl_fn_80174104_00001AC0
lbl_fn_80174104_0000127C:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80174104_00001290
    cmpwi r0, 0x8
    bne lbl_fn_80174104_00001298
lbl_fn_80174104_00001290:
    li r3, 0x0
    b lbl_fn_80174104_00001AC0
lbl_fn_80174104_00001298:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80174104_000012D0
    li r4, 0x1f
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_80174104_000012C8
    lwz r3, lbl_8087F430
    li r4, 0xd2
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80174104_000012D0
lbl_fn_80174104_000012C8:
    li r3, 0x0
    b lbl_fn_80174104_00001AC0
lbl_fn_80174104_000012D0:
    lfs f4, 0x8(r30)
    addi r3, r1, 0x128
    lfs f3, 0x0(r30)
    lfs f0, lbl_8088196C
    stfs f3, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f4, 0x130(r1)
    bl fn_805F9920
    lfs f0, lbl_808819F4
    fcmpo cr0, f1, f0
    bge lbl_fn_80174104_00001350
    lfs f3, lbl_8088196C
    addi r3, r1, 0x1a8
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f0, 0xe8(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0xe0
    addi r3, r1, 0x1a8
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0xe0
    lfs f2, 0xe8(r1)
    addi r3, r1, 0x128
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r3, 0x0
    stfs f2, 0x130(r1)
    b lbl_fn_80174104_00001AC0
lbl_fn_80174104_00001350:
    addi r3, r1, 0x128
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x8(r29)
    addi r5, r1, 0x11c
    psq_l f1, 0x0(r29), 0, 0
    addi r6, r1, 0x110
    psq_st f1, 0x0(r6), 0, 0
    li r30, 0x0
    lfs f3, lbl_808819F8
    addi r4, r1, 0x228
    psq_st f1, 0x0(r5), 0, 0
    lis r7, 0x8000
    lfs f0, 0x114(r1)
    li r8, 0x0
    lfs f4, 0x120(r1)
    li r9, 0x0
    fadds f7, f0, f3
    stfs f2, 0x124(r1)
    fadds f0, f4, f3
    lfs f6, lbl_80881B44
    stfs f2, 0x118(r1)
    lfs f5, 0x130(r1)
    stfs f0, 0x120(r1)
    lfs f3, 0x12c(r1)
    stfs f7, 0x114(r1)
    lfs f0, 0x128(r1)
    lfs f4, 0x620(r28)
    lwz r3, lbl_8087EE98
    fmuls f6, f6, f4
    lfs f4, 0x110(r1)
    stw r30, 0x25c(r1)
    fmuls f8, f3, f6
    stw r30, 0x260(r1)
    fmuls f5, f5, f6
    fmuls f6, f0, f6
    stfs f8, 0xd8(r1)
    fadds f3, f7, f8
    fadds f0, f2, f5
    stfs f5, 0xdc(r1)
    fadds f4, f4, f6
    stfs f6, 0xd4(r1)
    stfs f4, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f0, 0x118(r1)
    stw r30, 0x264(r1)
    stw r30, 0x268(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80174104_00001ABC
    lwz r3, 0x264(r1)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80174104_00001ABC
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_80174104_0000143C
    li r3, 0x0
    b lbl_fn_80174104_00001AC0
lbl_fn_80174104_0000143C:
    lfs f4, 0x130(r1)
    addi r3, r1, 0x250
    lfs f3, 0x12c(r1)
    addi r4, r1, 0xc8
    lfs f0, 0x128(r1)
    fneg f4, f4
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0xd0(r1)
    stfs f0, 0xc8(r1)
    stfs f3, 0xcc(r1)
    bl fn_805F9990
    fmr f31, f1
    lis r3, lbl_80737838@ha
    lfd f1, lbl_80737838@l(r3)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_80174104_00001ABC
    lwz r0, 0x264(r1)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_80174104_00001ABC
    lfs f3, lbl_8088196C
    addi r3, r1, 0x128
    lfs f0, lbl_80881964
    addi r4, r1, 0xb0
    stw r30, 0x20c(r1)
    addi r5, r1, 0xbc
    stw r30, 0x210(r1)
    stw r30, 0x214(r1)
    stw r30, 0x218(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f3, 0xb8(r1)
    bl fn_805F99B0
    lfs f5, 0xc4(r1)
    addi r4, r1, 0x1d8
    lfs f4, lbl_80881978
    addi r5, r1, 0xa4
    lfs f0, 0xc0(r1)
    addi r6, r1, 0x98
    fmuls f7, f5, f4
    lfs f3, 0xbc(r1)
    fmuls f8, f0, f4
    lfs f0, 0x118(r1)
    fmuls f9, f3, f4
    lfs f6, 0x114(r1)
    fadds f10, f0, f7
    lfs f5, 0x110(r1)
    lfs f4, 0x124(r1)
    fadds f6, f6, f8
    lfs f3, 0x120(r1)
    fadds f5, f5, f9
    lfs f0, 0x11c(r1)
    fadds f4, f4, f7
    fadds f3, f3, f8
    stfs f9, 0x104(r1)
    fadds f0, f0, f9
    lwz r3, lbl_8087EE98
    stfs f8, 0x108(r1)
    lis r7, 0x8000
    stfs f7, 0x10c(r1)
    li r8, 0x0
    li r9, 0x0
    stw r30, 0x264(r1)
    stfs f5, 0x98(r1)
    stfs f6, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f4, 0xac(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80174104_00001ABC
    lwz r0, 0x214(r1)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_80174104_00001ABC
    lfs f3, 0x118(r1)
    addi r4, r1, 0x1d8
    lfs f4, 0x10c(r1)
    addi r5, r1, 0x8c
    lfs f0, 0x124(r1)
    addi r6, r1, 0x80
    fsubs f7, f3, f4
    lfs f3, 0x114(r1)
    fsubs f6, f0, f4
    lfs f5, 0x108(r1)
    lfs f0, 0x120(r1)
    lis r7, 0x8000
    fsubs f8, f3, f5
    lfs f4, 0x110(r1)
    fsubs f5, f0, f5
    lfs f3, 0x104(r1)
    lfs f0, 0x11c(r1)
    li r8, 0x0
    fsubs f4, f4, f3
    stw r30, 0x264(r1)
    fsubs f0, f0, f3
    lwz r3, lbl_8087EE98
    stfs f4, 0x80(r1)
    li r9, 0x0
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f6, 0x94(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80174104_00001ABC
    lwz r0, 0x214(r1)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_80174104_00001ABC
    lfs f2, 0x258(r1)
    addi r3, r1, 0x250
    lfs f5, 0x258(r1)
    addi r30, r1, 0xec
    fabs f9, f2
    lfs f4, lbl_80881978
    lfs f3, 0x254(r1)
    fmuls f6, f5, f4
    lfs f0, 0x250(r1)
    fmuls f7, f3, f4
    fmuls f8, f0, f4
    lfs f5, 0x234(r1)
    lfs f4, 0x230(r1)
    lfs f3, 0x22c(r1)
    fadds f5, f5, f6
    fadds f4, f4, f7
    fadds f3, f3, f8
    psq_l f1, 0x0(r3), 0, 0
    frsp f9, f9
    lfs f0, lbl_808819C4
    stfs f8, 0x74(r1)
    fcmpo cr0, f9, f0
    stfs f7, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f3, 0xf8(r1)
    stfs f4, 0xfc(r1)
    stfs f5, 0x100(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xf4(r1)
    bge lbl_fn_80174104_000016A4
    lfs f3, 0xec(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80174104_00001698
    lfs f0, lbl_808819C8
    b lbl_fn_80174104_0000169C
lbl_fn_80174104_00001698:
    lfs f0, lbl_808819CC
lbl_fn_80174104_0000169C:
    stfs f0, 0x6c(r1)
    b lbl_fn_80174104_000016B8
lbl_fn_80174104_000016A4:
    frsp f2, f2
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x6c(r1)
lbl_fn_80174104_000016B8:
    lfs f0, 0x6c(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088196C
    addi r4, r1, 0x5c
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
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f30, 0x34(r1)
    stfs f13, 0x168(r1)
    stfs f31, 0x16c(r1)
    stfs f30, 0x170(r1)
    stfs f10, 0x38(r1)
    stfs f11, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x50(r1)
    stfs f5, 0x54(r1)
    stfs f6, 0x58(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    lfs f0, lbl_808819C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80174104_000017D4
    lfs f3, 0x60(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80174104_000017C4
    lfs f0, lbl_808819C8
    b lbl_fn_80174104_000017C8
lbl_fn_80174104_000017C4:
    lfs f0, lbl_808819CC
lbl_fn_80174104_000017C8:
    fneg f0, f0
    stfs f0, 0x68(r1)
    b lbl_fn_80174104_000017E8
lbl_fn_80174104_000017D4:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x68(r1)
lbl_fn_80174104_000017E8:
    addi r4, r1, 0x68
    lis r3, lbl_80737A9C@ha
    lfs f2, lbl_8088196C
    addi r3, r3, lbl_80737A9C@l
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r3, 0x24
    stfs f2, 0x70(r1)
    mr r6, r5
    li r3, 0x3c
    li r4, 0x1
    psq_st f1, 0x0(r30), 0, 0
    li r7, 0x0
    stfs f2, 0xf4(r1)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80174104_00001844
    mr r4, r28
    mr r5, r29
    addi r6, r1, 0xf8
    addi r7, r1, 0xec
    bl fn_801C9B24
    mr r30, r3
lbl_fn_80174104_00001844:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_80174104_000018D4
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80174104_0000187C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x278(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x27c(r1)
    stw r0, 0x280(r1)
    b lbl_fn_80174104_00001898
lbl_fn_80174104_0000187C:
    addi r3, r31, 0x1b84
    lwz r5, 0x1b84(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x278(r1)
    stw r4, 0x27c(r1)
    stw r0, 0x280(r1)
lbl_fn_80174104_00001898:
    lwz r5, 0x278(r1)
    addi r3, r1, 0x8
    lwz r4, 0x27c(r1)
    lwz r0, 0x280(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80174104_000018D4
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80174104_000018D4:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_80174104_00001A88
    cmpwi r0, 0x8
    beq lbl_fn_80174104_000018EC
    stw r0, 0x564(r28)
lbl_fn_80174104_000018EC:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_80174104_00001A88
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80174104_00001924
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x284(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x288(r1)
    stw r0, 0x28c(r1)
    b lbl_fn_80174104_00001940
lbl_fn_80174104_00001924:
    addi r3, r31, 0x1b90
    lwz r5, 0x1b90(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x284(r1)
    stw r4, 0x288(r1)
    stw r0, 0x28c(r1)
lbl_fn_80174104_00001940:
    lwz r5, 0x284(r1)
    addi r3, r1, 0x20
    lwz r4, 0x288(r1)
    lwz r0, 0x28c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80174104_0000197C
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80174104_0000197C:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_80174104_00001A58
    cmpwi r0, 0x8
    beq lbl_fn_80174104_00001994
    stw r0, 0x564(r28)
lbl_fn_80174104_00001994:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_80174104_00001A58
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80174104_000019CC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x290(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x294(r1)
    stw r0, 0x298(r1)
    b lbl_fn_80174104_000019E8
lbl_fn_80174104_000019CC:
    addi r3, r31, 0x1b9c
    lwz r5, 0x1b9c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x290(r1)
    stw r4, 0x294(r1)
    stw r0, 0x298(r1)
lbl_fn_80174104_000019E8:
    lwz r5, 0x290(r1)
    addi r3, r1, 0x14
    lwz r4, 0x294(r1)
    lwz r0, 0x298(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80174104_00001A24
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80174104_00001A24:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_80174104_00001A58
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80174104_00001A58:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_80174104_00001A88
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80174104_00001A88:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_80174104_00001AB4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80174104_00001AB4:
    li r3, 0x1
    b lbl_fn_80174104_00001AC0
lbl_fn_80174104_00001ABC:
    li r3, 0x0
lbl_fn_80174104_00001AC0:
    lwz r0, 0x2d4(r1)
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    lwz r31, 0x2ac(r1)
    lwz r30, 0x2a8(r1)
    lwz r29, 0x2a4(r1)
    lwz r28, 0x2a0(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}
