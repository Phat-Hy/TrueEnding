#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_20(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_20(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800928B0(void);
extern void fn_800BDB58(void);
extern void fn_8022BEAC(void);
extern void fn_8022C3F0(void);
extern void fn_8022FAC4(void);
extern void fn_80232AC4(void);
extern void fn_80232ACC(void);
extern void fn_80232B7C(void);
extern void fn_80232B88(void);
extern void fn_80232B90(void);
extern void fn_80232B98(void);
extern void fn_80232BEC(void);
extern void fn_80232D04(void);
extern void fn_80232E48(void);
extern void fn_80232ED4(void);
extern void fn_80232F84(void);
extern void fn_80232FF4(void);
extern void fn_802330A4(void);
extern void fn_80233158(void);
extern void fn_802331B0(void);
extern void fn_80233260(void);
extern void fn_802346AC(void);
extern void fn_802346B4(void);
extern void fn_802346BC(void);
extern void fn_802346F0(void);
extern void fn_80234764(void);
extern void fn_802347DC(void);
extern void fn_802348E4(void);
extern void fn_8023686C(void);
extern void fn_802368B0(void);
extern void fn_80239AB4(void);
extern void fn_80473F18(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_806827C4(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_8074308C[];

/* Small data declarations */
extern u32 lbl_8087DC18;
extern u32 lbl_8087DC1C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80883160;
extern u32 lbl_80883164;
extern u32 lbl_80883168;

/* Function declarations */
void fn_80239BD0(void);
void fn_80239C14(void);
void fn_80239C20(void);
void fn_80239C6C(void);
void fn_80239D1C(void);
void fn_80239D58(void);
void fn_80239DAC(void);
void fn_8023A02C(void);
void fn_8023A098(void);
void fn_8023A108(void);
void fn_8023A184(void);
void fn_8023A1F4(void);
void fn_8023A254(void);
void fn_8023A2A8(void);
void fn_8023A340(void);
void fn_8023A5A8(void);
void fn_8023A60C(void);
void fn_8023A614(void);
void fn_8023A664(void);
void fn_8023A678(void);
void fn_8023A680(void);
void fn_8023A8B4(void);
void fn_8023AE34(void);

asm void fn_80239BD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r6, -0x1
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8023AE34
    lfs f1, lbl_80883164
    addi r3, r31, 0x4c
    bl fn_8023686C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80239C14(void)
{
    nofralloc
    lfs f1, lbl_80883164
    addi r3, r3, 0x4c
    b fn_8023686C
}

asm void fn_80239C20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xc0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80239C20_00000088
    li r0, 0x1
    stw r0, 0xc0(r3)
    addi r3, r3, 0x4c
    bl fn_8022C3F0
    li r0, 0x0
    stw r0, 0xc0(r31)
lbl_fn_80239C20_00000088:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80239C6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4c
    bl fn_8022C3F0
    cmpwi r31, 0x0
    mr r4, r31
    beq lbl_fn_80239C6C_000000C8
    addi r4, r31, 0x48
lbl_fn_80239C6C_000000C8:
    lwz r3, lbl_8087EFB4
    li r5, 0xb
    lfs f1, lbl_80883160
    bl fn_800BDB58
    lwz r0, 0xb0(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80239C6C_00000108
    cmpwi r31, 0x0
    mr r4, r31
    beq lbl_fn_80239C6C_000000F8
    addi r4, r31, 0x48
lbl_fn_80239C6C_000000F8:
    lwz r3, lbl_8087EFB4
    li r5, 0x6
    lfs f1, lbl_80883160
    bl fn_800BDB58
lbl_fn_80239C6C_00000108:
    lwz r0, 0xb0(r31)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80239C6C_00000138
    cmpwi r31, 0x0
    beq lbl_fn_80239C6C_00000124
    addi r31, r31, 0x48
lbl_fn_80239C6C_00000124:
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, lbl_80883168
    li r5, 0x4
    bl fn_800BDB58
lbl_fn_80239C6C_00000138:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80239D1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0xf4(r3)
    addi r3, r3, 0x4c
    bl fn_802368B0
    li r0, 0x0
    stw r0, 0xf4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80239D58(void)
{
    nofralloc
    lwz r0, 0xd8(r3)
    lwz r7, 0xe0(r3)
    mulli r0, r0, 0x64
    add r6, r7, r0
    b lbl_fn_80239D58_000001C8
lbl_fn_80239D58_0000019C:
    lwz r0, 0x8(r7)
    cmplw r0, r4
    bne lbl_fn_80239D58_000001C4
    lwz r0, 0xc(r7)
    cmpw r0, r5
    beq lbl_fn_80239D58_000001BC
    cmpwi r5, -0x2
    bne lbl_fn_80239D58_000001C4
lbl_fn_80239D58_000001BC:
    li r3, 0x1
    blr
lbl_fn_80239D58_000001C4:
    addi r7, r7, 0x64
lbl_fn_80239D58_000001C8:
    cmplw r7, r6
    bne lbl_fn_80239D58_0000019C
    addi r3, r3, 0x4c
    b fn_80232B98
    blr
}

asm void fn_80239DAC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lwz r9, 0xe0(r3)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    li r26, 0x0
    lis r7, 0x51ec
    li r12, -0x1
    b lbl_fn_80239DAC_00000390
lbl_fn_80239DAC_00000214:
    lwz r0, 0x8(r9)
    cmplw r0, r4
    bne lbl_fn_80239DAC_0000038C
    lwz r0, 0xc(r9)
    cmpw r0, r5
    beq lbl_fn_80239DAC_00000234
    cmpwi r5, -0x2
    bne lbl_fn_80239DAC_0000038C
lbl_fn_80239DAC_00000234:
    cmpwi r6, 0x0
    bne lbl_fn_80239DAC_0000037C
    lwz r0, 0xd8(r3)
    lwz r8, 0xe0(r3)
    mulli r0, r0, 0x64
    add r0, r8, r0
    cmplw r9, r0
    bne lbl_fn_80239DAC_00000258
    b lbl_fn_80239DAC_00000374
lbl_fn_80239DAC_00000258:
    subf r0, r8, r9
    subi r8, r7, 0x7ae1
    mulhw r0, r8, r0
    srawi r0, r0, 5
    srwi r8, r0, 31
    add r0, r0, r8
    mulli r11, r0, 0x64
    mr r10, r0
    b lbl_fn_80239DAC_00000354
lbl_fn_80239DAC_0000027C:
    lwz r26, 0xe0(r3)
    addi r8, r10, 0x1
    mulli r8, r8, 0x64
    addi r10, r10, 0x1
    add r9, r26, r11
    lwzux r26, r8, r26
    stw r26, 0x0(r9)
    addi r11, r11, 0x64
    lwz r26, 0x4(r8)
    stw r26, 0x4(r9)
    lwz r26, 0x8(r8)
    stw r26, 0x8(r9)
    lwz r26, 0xc(r8)
    stw r26, 0xc(r9)
    lwz r26, 0x10(r8)
    stw r26, 0x10(r9)
    lwz r26, 0x14(r8)
    stw r26, 0x14(r9)
    lfs f2, 0x20(r8)
    psq_l f1, 0x18(r8), 0, 0
    psq_st f1, 0x18(r9), 0, 0
    stfs f2, 0x20(r9)
    lfs f2, 0x2c(r8)
    psq_l f1, 0x24(r8), 0, 0
    psq_st f1, 0x24(r9), 0, 0
    stfs f2, 0x2c(r9)
    lfs f0, 0x30(r8)
    stfs f0, 0x30(r9)
    lfs f2, 0x3c(r8)
    psq_l f1, 0x34(r8), 0, 0
    psq_st f1, 0x34(r9), 0, 0
    stfs f2, 0x3c(r9)
    lwz r26, 0x40(r8)
    stw r26, 0x40(r9)
    lha r26, 0x44(r8)
    sth r26, 0x44(r9)
    lha r26, 0x46(r8)
    sth r26, 0x46(r9)
    lha r26, 0x48(r8)
    sth r26, 0x48(r9)
    lha r26, 0x4a(r8)
    sth r26, 0x4a(r9)
    lwz r26, 0x50(r8)
    lwz r27, 0x4c(r8)
    stw r27, 0x4c(r9)
    stw r26, 0x50(r9)
    lwz r27, 0x58(r8)
    lwz r26, 0x54(r8)
    stw r26, 0x54(r9)
    stw r27, 0x58(r9)
    lfs f0, 0x5c(r8)
    stfs f0, 0x5c(r9)
    lfs f0, 0x60(r8)
    stfs f0, 0x60(r9)
lbl_fn_80239DAC_00000354:
    lwz r8, 0xd8(r3)
    subi r9, r8, 0x1
    cmplw r10, r9
    blt lbl_fn_80239DAC_0000027C
    mulli r0, r0, 0x64
    lwz r8, 0xe0(r3)
    stw r9, 0xd8(r3)
    add r0, r8, r0
lbl_fn_80239DAC_00000374:
    mr r9, r0
    b lbl_fn_80239DAC_00000384
lbl_fn_80239DAC_0000037C:
    stw r12, 0x14(r9)
    addi r9, r9, 0x64
lbl_fn_80239DAC_00000384:
    li r26, 0x1
    b lbl_fn_80239DAC_00000390
lbl_fn_80239DAC_0000038C:
    addi r9, r9, 0x64
lbl_fn_80239DAC_00000390:
    lwz r0, 0xd8(r3)
    lwz r8, 0xe0(r3)
    mulli r0, r0, 0x64
    add r0, r8, r0
    cmplw r9, r0
    bne lbl_fn_80239DAC_00000214
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80239DAC_000003E0
    mr r4, r29
    mr r5, r30
    mr r6, r31
    addi r3, r3, 0x4c
    bl fn_80232D04
    cmpwi r26, 0x0
    li r26, 0x0
    bne lbl_fn_80239DAC_000003DC
    cmpwi r3, 0x0
    ble lbl_fn_80239DAC_000003E0
lbl_fn_80239DAC_000003DC:
    li r26, 0x1
lbl_fn_80239DAC_000003E0:
    lwz r3, 0xcc(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80239DAC_00000444
    lwz r0, 0xd0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80239DAC_00000444
    cmpwi r26, 0x0
    beq lbl_fn_80239DAC_00000444
    li r0, 0x0
    li r4, 0x1
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r29, 0x54(r1)
    stw r30, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r31, 0x64(r1)
    stw r0, 0x60(r1)
    stw r0, 0x50(r1)
    lwz r0, 0xb8(r28)
    stw r0, 0x68(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80239DAC_00000444:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8023A02C(void)
{
    nofralloc
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_8023A02C_000004A4
lbl_fn_8023A02C_00000468:
    lwz r0, 0xe0(r3)
    add r8, r0, r7
    lwz r0, 0x8(r8)
    cmplw r0, r4
    bne lbl_fn_8023A02C_0000049C
    lwz r0, 0xc(r8)
    cmpw r0, r5
    beq lbl_fn_8023A02C_00000490
    cmpwi r5, -0x2
    bne lbl_fn_8023A02C_0000049C
lbl_fn_8023A02C_00000490:
    lwz r0, 0x10(r8)
    or r0, r0, r6
    stw r0, 0x10(r8)
lbl_fn_8023A02C_0000049C:
    addi r9, r9, 0x1
    addi r7, r7, 0x64
lbl_fn_8023A02C_000004A4:
    lwz r0, 0xd8(r3)
    cmplw r9, r0
    blt lbl_fn_8023A02C_00000468
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beqlr
    addi r3, r3, 0x4c
    b fn_80232FF4
    blr
}

asm void fn_8023A098(void)
{
    nofralloc
    nor r9, r6, r6
    li r10, 0x0
    li r7, 0x0
    b lbl_fn_8023A098_00000514
lbl_fn_8023A098_000004D8:
    lwz r0, 0xe0(r3)
    add r8, r0, r7
    lwz r0, 0x8(r8)
    cmplw r0, r4
    bne lbl_fn_8023A098_0000050C
    lwz r0, 0xc(r8)
    cmpw r0, r5
    beq lbl_fn_8023A098_00000500
    cmpwi r5, -0x2
    bne lbl_fn_8023A098_0000050C
lbl_fn_8023A098_00000500:
    lwz r0, 0x10(r8)
    and r0, r0, r9
    stw r0, 0x10(r8)
lbl_fn_8023A098_0000050C:
    addi r10, r10, 0x1
    addi r7, r7, 0x64
lbl_fn_8023A098_00000514:
    lwz r0, 0xd8(r3)
    cmplw r10, r0
    blt lbl_fn_8023A098_000004D8
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beqlr
    addi r3, r3, 0x4c
    b fn_802330A4
    blr
}

asm void fn_8023A108(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    li r31, 0x0
    b lbl_fn_8023A108_00000578
lbl_fn_8023A108_00000560:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    li r6, -0x1
    bl fn_8023AE34
    addi r31, r31, 0x1
lbl_fn_8023A108_00000578:
    cmpw r31, r30
    blt lbl_fn_8023A108_00000560
    lwz r0, 0x58(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8023A108_000005A0
    mr r4, r28
    mr r5, r29
    mr r6, r30
    addi r3, r27, 0x4c
    bl fn_80232BEC
lbl_fn_8023A108_000005A0:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8023A184(void)
{
    nofralloc
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_8023A184_00000610
lbl_fn_8023A184_000005C0:
    lwz r0, 0xe0(r3)
    add r8, r0, r7
    lwz r0, 0x8(r8)
    cmplw r0, r4
    bne lbl_fn_8023A184_00000608
    lwz r0, 0xc(r8)
    cmpw r0, r5
    beq lbl_fn_8023A184_000005E8
    cmpwi r5, -0x2
    bne lbl_fn_8023A184_00000608
lbl_fn_8023A184_000005E8:
    lfs f0, 0x0(r6)
    stfs f0, 0x4c(r8)
    lfs f0, 0x4(r6)
    stfs f0, 0x50(r8)
    lfs f0, 0x8(r6)
    stfs f0, 0x54(r8)
    lfs f0, 0xc(r6)
    stfs f0, 0x58(r8)
lbl_fn_8023A184_00000608:
    addi r9, r9, 0x1
    addi r7, r7, 0x64
lbl_fn_8023A184_00000610:
    lwz r0, 0xd8(r3)
    cmplw r9, r0
    blt lbl_fn_8023A184_000005C0
    addi r3, r3, 0x4c
    b fn_80233158
}

asm void fn_8023A1F4(void)
{
    nofralloc
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_8023A1F4_00000670
lbl_fn_8023A1F4_00000630:
    lwz r0, 0xe0(r3)
    add r8, r0, r7
    lwz r0, 0x8(r8)
    cmplw r0, r4
    bne lbl_fn_8023A1F4_00000668
    lwz r0, 0xc(r8)
    cmpw r0, r5
    beq lbl_fn_8023A1F4_00000658
    cmpwi r5, -0x2
    bne lbl_fn_8023A1F4_00000668
lbl_fn_8023A1F4_00000658:
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x34(r8), 0, 0
    stfs f2, 0x3c(r8)
lbl_fn_8023A1F4_00000668:
    addi r9, r9, 0x1
    addi r7, r7, 0x64
lbl_fn_8023A1F4_00000670:
    lwz r0, 0xd8(r3)
    cmplw r9, r0
    blt lbl_fn_8023A1F4_00000630
    addi r3, r3, 0x4c
    b fn_802331B0
}

asm void fn_8023A254(void)
{
    nofralloc
    li r8, 0x0
    li r6, 0x0
    b lbl_fn_8023A254_000006C4
lbl_fn_8023A254_00000690:
    lwz r0, 0xe0(r3)
    add r7, r0, r6
    lwz r0, 0x8(r7)
    cmplw r0, r4
    bne lbl_fn_8023A254_000006BC
    lwz r0, 0xc(r7)
    cmpw r0, r5
    beq lbl_fn_8023A254_000006B8
    cmpwi r5, -0x2
    bne lbl_fn_8023A254_000006BC
lbl_fn_8023A254_000006B8:
    stfs f1, 0x5c(r7)
lbl_fn_8023A254_000006BC:
    addi r8, r8, 0x1
    addi r6, r6, 0x64
lbl_fn_8023A254_000006C4:
    lwz r0, 0xd8(r3)
    cmplw r8, r0
    blt lbl_fn_8023A254_00000690
    addi r3, r3, 0x4c
    b fn_80233260
}

asm void fn_8023A2A8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r4
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r3, 0x4c
    bl fn_80232ACC
    lwz r3, 0xcc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8023A2A8_00000758
    lwz r0, 0xd0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8023A2A8_00000758
    li r0, 0x0
    li r4, 0x1
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r31, 0xc(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x64(r1)
    stw r0, 0x60(r1)
    stw r0, 0x50(r1)
    lwz r0, 0xb8(r30)
    stw r0, 0x68(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8023A2A8_00000758:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8023A340(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_22
    lwz r28, 0xe0(r3)
    mr r26, r3
    mr r27, r4
    li r29, 0x1
    li r30, 0x0
    lis r31, 0x51ec
    b lbl_fn_8023A340_000009A8
lbl_fn_8023A340_000007A0:
    lwz r0, 0x0(r28)
    cmplw r0, r27
    bne lbl_fn_8023A340_000009A4
    lwz r24, 0x0(r27)
    li r23, 0x0
    li r25, 0x0
    b lbl_fn_8023A340_00000854
lbl_fn_8023A340_000007BC:
    lha r0, 0x44(r28)
    cmpwi r0, 0x0
    blt lbl_fn_8023A340_000007D0
    cmplw r0, r23
    bne lbl_fn_8023A340_0000084C
lbl_fn_8023A340_000007D0:
    lwz r3, 0x4(r24)
    lwzx r0, r3, r25
    cmpwi r0, 0x0
    beq lbl_fn_8023A340_0000084C
    lwz r0, 0x40(r28)
    addi r3, r26, 0x4c
    li r5, 0x0
    add r22, r0, r23
    mr r4, r22
    bl fn_802347DC
    lwz r3, 0xcc(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8023A340_0000084C
    lwz r0, 0xd0(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8023A340_0000084C
    stw r29, 0x8(r1)
    addi r4, r1, 0x8
    stw r30, 0xc(r1)
    stw r30, 0x54(r1)
    stw r30, 0x58(r1)
    stw r30, 0x5c(r1)
    stw r30, 0x64(r1)
    stw r22, 0x60(r1)
    stw r30, 0x50(r1)
    lwz r0, 0xb8(r26)
    stw r0, 0x68(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8023A340_0000084C:
    addi r25, r25, 0x54
    addi r23, r23, 0x1
lbl_fn_8023A340_00000854:
    lwz r0, 0x0(r24)
    cmplw r23, r0
    blt lbl_fn_8023A340_000007BC
    lwz r0, 0xd8(r26)
    lwz r3, 0xe0(r26)
    mulli r0, r0, 0x64
    add r0, r3, r0
    cmplw r28, r0
    bne lbl_fn_8023A340_0000087C
    b lbl_fn_8023A340_0000099C
lbl_fn_8023A340_0000087C:
    subf r0, r3, r28
    subi r3, r31, 0x7ae1
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r4, r0, 0x64
    mr r3, r0
    b lbl_fn_8023A340_0000097C
lbl_fn_8023A340_000008A0:
    addi r5, r3, 0x1
    lwz r6, 0xe0(r26)
    mulli r5, r5, 0x64
    addi r3, r3, 0x1
    add r8, r6, r4
    add r7, r6, r5
    lwzx r5, r6, r5
    stwx r5, r6, r4
    addi r4, r4, 0x64
    lwz r5, 0x4(r7)
    stw r5, 0x4(r8)
    lwz r5, 0x8(r7)
    stw r5, 0x8(r8)
    lwz r5, 0xc(r7)
    stw r5, 0xc(r8)
    lwz r5, 0x10(r7)
    stw r5, 0x10(r8)
    lwz r5, 0x14(r7)
    stw r5, 0x14(r8)
    lfs f2, 0x20(r7)
    psq_l f1, 0x18(r7), 0, 0
    psq_st f1, 0x18(r8), 0, 0
    stfs f2, 0x20(r8)
    lfs f2, 0x2c(r7)
    psq_l f1, 0x24(r7), 0, 0
    psq_st f1, 0x24(r8), 0, 0
    stfs f2, 0x2c(r8)
    lfs f0, 0x30(r7)
    stfs f0, 0x30(r8)
    lfs f2, 0x3c(r7)
    psq_l f1, 0x34(r7), 0, 0
    psq_st f1, 0x34(r8), 0, 0
    stfs f2, 0x3c(r8)
    lwz r5, 0x40(r7)
    stw r5, 0x40(r8)
    lha r5, 0x44(r7)
    sth r5, 0x44(r8)
    lha r5, 0x46(r7)
    sth r5, 0x46(r8)
    lha r5, 0x48(r7)
    sth r5, 0x48(r8)
    lha r5, 0x4a(r7)
    sth r5, 0x4a(r8)
    lwz r5, 0x50(r7)
    lwz r6, 0x4c(r7)
    stw r6, 0x4c(r8)
    stw r5, 0x50(r8)
    lwz r5, 0x58(r7)
    lwz r6, 0x54(r7)
    stw r6, 0x54(r8)
    stw r5, 0x58(r8)
    lfs f0, 0x5c(r7)
    stfs f0, 0x5c(r8)
    lfs f0, 0x60(r7)
    stfs f0, 0x60(r8)
lbl_fn_8023A340_0000097C:
    lwz r5, 0xd8(r26)
    subi r5, r5, 0x1
    cmplw r3, r5
    blt lbl_fn_8023A340_000008A0
    mulli r0, r0, 0x64
    lwz r3, 0xe0(r26)
    stw r5, 0xd8(r26)
    add r0, r3, r0
lbl_fn_8023A340_0000099C:
    mr r28, r0
    b lbl_fn_8023A340_000009A8
lbl_fn_8023A340_000009A4:
    addi r28, r28, 0x64
lbl_fn_8023A340_000009A8:
    lwz r0, 0xd8(r26)
    lwz r3, 0xe0(r26)
    mulli r0, r0, 0x64
    add r0, r3, r0
    cmplw r28, r0
    bne lbl_fn_8023A340_000007A0
    addi r11, r1, 0xa0
    bl _restgpr_22
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8023A5A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8023A5A8_00000A20
    lwz r4, 0xe0(r3)
    li r0, 0x0
    stw r0, 0xd8(r3)
    cmpwi r4, 0x0
    stw r0, 0xdc(r3)
    beq lbl_fn_8023A5A8_00000A20
    beq lbl_fn_8023A5A8_00000A18
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_8023A5A8_00000A18:
    li r0, 0x0
    stw r0, 0xe0(r31)
lbl_fn_8023A5A8_00000A20:
    addi r3, r31, 0x4c
    bl fn_80232E48
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8023A60C(void)
{
    nofralloc
    addi r3, r3, 0x4c
    b fn_80232ED4
}

asm void fn_8023A614(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r6, r31
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8023AE34
    mr r4, r31
    addi r3, r30, 0x4c
    bl fn_80232F84
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8023A664(void)
{
    nofralloc
    stw r4, 0xf4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctr
}

asm void fn_8023A678(void)
{
    nofralloc
    addi r3, r3, 0x4c
    b fn_8022BEAC
}

asm void fn_8023A680(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_20
    lwz r0, 0x0(r4)
    fmr f31, f1
    lwz r27, 0xe8(r1)
    mr r31, r3
    cmpwi r0, 0x0
    lwz r28, 0xec(r1)
    mr r20, r4
    mr r21, r5
    mr r22, r6
    mr r23, r7
    mr r24, r8
    mr r25, r9
    mr r26, r10
    bne lbl_fn_8023A680_00000B0C
    li r3, 0x0
    b lbl_fn_8023A680_00000CC4
lbl_fn_8023A680_00000B0C:
    mr r3, r20
    bl fn_80232AC4
    lwz r4, 0x0(r20)
    fmr f1, f31
    mr r5, r21
    mr r6, r22
    stw r27, 0x8(r1)
    mr r7, r23
    mr r8, r24
    stw r28, 0xc(r1)
    mr r9, r25
    mr r10, r26
    addi r3, r31, 0x4c
    bl fn_8022FAC4
    lwz r0, 0xf0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_8023A680_00000B94
    addi r3, r20, 0x4
    li r29, 0x0
    bl fn_80473F18
    lis r4, lbl_8074308C@ha
    addi r4, r4, lbl_8074308C@l
    addi r4, r4, 0xd
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8023A680_00000B7C
    ori r29, r29, 0x18
lbl_fn_8023A680_00000B7C:
    cmpwi r29, 0x0
    beq lbl_fn_8023A680_00000B94
    mr r4, r30
    mr r5, r29
    addi r3, r31, 0x4c
    bl fn_802348E4
lbl_fn_8023A680_00000B94:
    lwz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8023A680_00000CC0
    lwz r0, 0xd0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8023A680_00000CC0
    li r0, 0x0
    stw r0, 0x38(r1)
    stw r20, 0x3c(r1)
    bl fn_80232B88
    stw r3, 0x84(r1)
    bl fn_80232B90
    stw r3, 0x88(r1)
    lwz r0, 0xec(r31)
    stw r0, 0x8c(r1)
    bl fn_802346B4
    cmpwi r24, 0x0
    stw r3, 0x90(r1)
    stw r30, 0x80(r1)
    stw r21, 0x40(r1)
    stw r22, 0x44(r1)
    stw r23, 0x48(r1)
    beq lbl_fn_8023A680_00000BF4
    b lbl_fn_8023A680_00000C08
lbl_fn_8023A680_00000BF4:
    lfs f0, lbl_80883160
    addi r24, r1, 0x2c
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_fn_8023A680_00000C08:
    psq_l f1, 0x0(r24), 0, 0
    cmpwi r25, 0x0
    lfs f2, 0x8(r24)
    addi r3, r1, 0x4c
    stfs f2, 0x54(r1)
    psq_st f1, 0x0(r3), 0, 0
    beq lbl_fn_8023A680_00000C28
    b lbl_fn_8023A680_00000C3C
lbl_fn_8023A680_00000C28:
    lfs f0, lbl_80883160
    addi r25, r1, 0x20
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_fn_8023A680_00000C3C:
    psq_l f1, 0x0(r25), 0, 0
    cmpwi r26, 0x0
    lfs f2, 0x8(r25)
    addi r3, r1, 0x58
    stfs f2, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f31, 0x64(r1)
    beq lbl_fn_8023A680_00000C60
    b lbl_fn_8023A680_00000C78
lbl_fn_8023A680_00000C60:
    lfs f0, lbl_80883164
    addi r26, r1, 0x10
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_8023A680_00000C78:
    lfs f0, 0x0(r26)
    addi r4, r1, 0x38
    stfs f0, 0x68(r1)
    lfs f0, 0x4(r26)
    stfs f0, 0x6c(r1)
    lfs f0, 0x8(r26)
    stfs f0, 0x70(r1)
    lfs f0, 0xc(r26)
    stfs f0, 0x74(r1)
    stw r27, 0x78(r1)
    stw r28, 0x7c(r1)
    lwz r0, 0xb8(r31)
    stw r0, 0x98(r1)
    lwz r3, 0xcc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8023A680_00000CC0:
    mr r3, r30
lbl_fn_8023A680_00000CC4:
    addi r11, r1, 0xd0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    bl _restgpr_20
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8023A8B4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x0(r4)
    fmr f31, f1
    lwz r30, 0xa8(r1)
    mr r24, r3
    cmpwi r0, 0x0
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r31, r10
    bne lbl_fn_8023A8B4_00000D38
    li r3, 0x0
    b lbl_fn_8023A8B4_00001244
lbl_fn_8023A8B4_00000D38:
    lwz r5, 0xd8(r3)
    lwz r0, 0xd4(r3)
    cmplw r5, r0
    blt lbl_fn_8023A8B4_00000D50
    li r3, 0x0
    b lbl_fn_8023A8B4_00001244
lbl_fn_8023A8B4_00000D50:
    lwz r5, 0xe4(r3)
    lis r0, 0x1
    addi r5, r5, 0x1
    stw r5, 0xe4(r3)
    cmplw r5, r0
    blt lbl_fn_8023A8B4_00000D70
    li r0, 0x1
    stw r0, 0xe4(r3)
lbl_fn_8023A8B4_00000D70:
    stw r4, 0x8(r1)
    bl fn_80232B88
    stw r3, 0x10(r1)
    bl fn_80232B90
    lwz r0, 0xc4(r24)
    lwz r4, 0xec(r24)
    cmpwi r0, 0x0
    stw r3, 0x14(r1)
    stw r4, 0x18(r1)
    beq lbl_fn_8023A8B4_00000DA0
    ori r0, r4, 0x20
    stw r0, 0x18(r1)
lbl_fn_8023A8B4_00000DA0:
    lwz r0, 0xc8(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8023A8B4_00000DB8
    lwz r0, 0x18(r1)
    ori r0, r0, 0x100
    stw r0, 0x18(r1)
lbl_fn_8023A8B4_00000DB8:
    cmpwi r26, 0x0
    beq lbl_fn_8023A8B4_00000DD4
    lwz r0, 0x18(r1)
    stw r26, 0xc(r1)
    oris r0, r0, 0x1
    stw r0, 0x18(r1)
    b lbl_fn_8023A8B4_00000DD8
lbl_fn_8023A8B4_00000DD4:
    stw r25, 0xc(r1)
lbl_fn_8023A8B4_00000DD8:
    lwz r0, 0xe0(r24)
    li r5, 0x0
    lfs f7, lbl_80883160
    addi r3, r1, 0x20
    cmpwi r0, 0x0
    lwz r0, 0xe4(r24)
    lfs f2, 0x8(r27)
    addi r6, r1, 0x2c
    slwi r4, r0, 16
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x28(r1)
    lfs f2, 0x8(r28)
    lwz r3, 0xb8(r24)
    lwz r0, 0xbc(r24)
    lfs f6, 0x0(r29)
    lfs f5, 0x4(r29)
    lfs f4, 0x8(r29)
    lfs f3, 0xc(r29)
    lfs f0, lbl_80883164
    stw r5, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f7, 0x44(r1)
    stw r4, 0x48(r1)
    sth r31, 0x4c(r1)
    sth r30, 0x4e(r1)
    sth r3, 0x50(r1)
    sth r0, 0x52(r1)
    stfs f6, 0x54(r1)
    stfs f5, 0x58(r1)
    stfs f4, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f7, 0x68(r1)
    beq lbl_fn_8023A8B4_00000E84
    lwz r0, 0xdc(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8023A8B4_00000FEC
lbl_fn_8023A8B4_00000E84:
    lwz r0, 0xdc(r24)
    li r31, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_8023A8B4_0000115C
    li r3, 0x330
    li r4, 0x0
    la r5, lbl_8087DC1C
    la r6, lbl_8087DC18
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80239AB4@ha
    li r5, 0x0
    addi r4, r4, fn_80239AB4@l
    li r6, 0x64
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0xe0(r24)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_8023A8B4_00000FE0
    lwz r4, 0xd8(r24)
    li r0, 0x8
    cmplwi r4, 0x8
    bge lbl_fn_8023A8B4_00000EE8
    mr r0, r4
lbl_fn_8023A8B4_00000EE8:
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8023A8B4_00000FCC
lbl_fn_8023A8B4_00000EF8:
    lwz r0, 0xe0(r24)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x64
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lwz r0, 0x8(r7)
    stw r0, 0x8(r6)
    lwz r0, 0xc(r7)
    stw r0, 0xc(r6)
    lwz r0, 0x10(r7)
    stw r0, 0x10(r6)
    lwz r0, 0x14(r7)
    stw r0, 0x14(r6)
    lfs f2, 0x20(r7)
    psq_l f1, 0x18(r7), 0, 0
    psq_st f1, 0x18(r6), 0, 0
    stfs f2, 0x20(r6)
    lfs f2, 0x2c(r7)
    psq_l f1, 0x24(r7), 0, 0
    psq_st f1, 0x24(r6), 0, 0
    stfs f2, 0x2c(r6)
    lfs f0, 0x30(r7)
    stfs f0, 0x30(r6)
    lfs f2, 0x3c(r7)
    psq_l f1, 0x34(r7), 0, 0
    psq_st f1, 0x34(r6), 0, 0
    stfs f2, 0x3c(r6)
    lwz r0, 0x40(r7)
    stw r0, 0x40(r6)
    lha r0, 0x44(r7)
    sth r0, 0x44(r6)
    lha r0, 0x46(r7)
    sth r0, 0x46(r6)
    lha r0, 0x48(r7)
    sth r0, 0x48(r6)
    lha r0, 0x4a(r7)
    sth r0, 0x4a(r6)
    lwz r0, 0x50(r7)
    lwz r5, 0x4c(r7)
    stw r5, 0x4c(r6)
    stw r0, 0x50(r6)
    lwz r0, 0x58(r7)
    lwz r5, 0x54(r7)
    stw r5, 0x54(r6)
    stw r0, 0x58(r6)
    lfs f0, 0x5c(r7)
    stfs f0, 0x5c(r6)
    lfs f0, 0x60(r7)
    stfs f0, 0x60(r6)
    bdnz lbl_fn_8023A8B4_00000EF8
lbl_fn_8023A8B4_00000FCC:
    lwz r3, 0xe0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8023A8B4_00000FE0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8023A8B4_00000FE0:
    stw r30, 0xe0(r24)
    stw r31, 0xdc(r24)
    b lbl_fn_8023A8B4_0000115C
lbl_fn_8023A8B4_00000FEC:
    lwz r3, 0xd8(r24)
    cmplw r3, r0
    blt lbl_fn_8023A8B4_0000115C
    slwi r31, r3, 1
    cmplw r0, r31
    bgt lbl_fn_8023A8B4_0000115C
    mulli r3, r31, 0x64
    li r4, 0x0
    la r5, lbl_8087DC1C
    la r6, lbl_8087DC18
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80239AB4@ha
    mr r7, r31
    addi r4, r4, fn_80239AB4@l
    li r5, 0x0
    li r6, 0x64
    bl fn_80695720
    lwz r0, 0xe0(r24)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_8023A8B4_00001154
    lwz r4, 0xd8(r24)
    mr r0, r31
    cmplw r31, r4
    ble lbl_fn_8023A8B4_0000105C
    mr r0, r4
lbl_fn_8023A8B4_0000105C:
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8023A8B4_00001140
lbl_fn_8023A8B4_0000106C:
    lwz r0, 0xe0(r24)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x64
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lwz r0, 0x8(r7)
    stw r0, 0x8(r6)
    lwz r0, 0xc(r7)
    stw r0, 0xc(r6)
    lwz r0, 0x10(r7)
    stw r0, 0x10(r6)
    lwz r0, 0x14(r7)
    stw r0, 0x14(r6)
    lfs f2, 0x20(r7)
    psq_l f1, 0x18(r7), 0, 0
    psq_st f1, 0x18(r6), 0, 0
    stfs f2, 0x20(r6)
    lfs f2, 0x2c(r7)
    psq_l f1, 0x24(r7), 0, 0
    psq_st f1, 0x24(r6), 0, 0
    stfs f2, 0x2c(r6)
    lfs f0, 0x30(r7)
    stfs f0, 0x30(r6)
    lfs f2, 0x3c(r7)
    psq_l f1, 0x34(r7), 0, 0
    psq_st f1, 0x34(r6), 0, 0
    stfs f2, 0x3c(r6)
    lwz r0, 0x40(r7)
    stw r0, 0x40(r6)
    lha r0, 0x44(r7)
    sth r0, 0x44(r6)
    lha r0, 0x46(r7)
    sth r0, 0x46(r6)
    lha r0, 0x48(r7)
    sth r0, 0x48(r6)
    lha r0, 0x4a(r7)
    sth r0, 0x4a(r6)
    lwz r0, 0x50(r7)
    lwz r5, 0x4c(r7)
    stw r5, 0x4c(r6)
    stw r0, 0x50(r6)
    lwz r0, 0x58(r7)
    lwz r5, 0x54(r7)
    stw r5, 0x54(r6)
    stw r0, 0x58(r6)
    lfs f0, 0x5c(r7)
    stfs f0, 0x5c(r6)
    lfs f0, 0x60(r7)
    stfs f0, 0x60(r6)
    bdnz lbl_fn_8023A8B4_0000106C
lbl_fn_8023A8B4_00001140:
    lwz r3, 0xe0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8023A8B4_00001154
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8023A8B4_00001154:
    stw r30, 0xe0(r24)
    stw r31, 0xdc(r24)
lbl_fn_8023A8B4_0000115C:
    lwz r0, 0xd8(r24)
    addi r7, r1, 0x20
    lwz r6, 0xe0(r24)
    addi r8, r1, 0x2c
    mulli r5, r0, 0x64
    lwz r4, 0x8(r1)
    stwux r4, r5, r6
    addi r9, r1, 0x3c
    lwz r3, 0xc(r1)
    stw r3, 0x4(r5)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r5)
    lwz r4, 0x14(r1)
    stw r4, 0xc(r5)
    lwz r3, 0x18(r1)
    stw r3, 0x10(r5)
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r5)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x18(r5), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x20(r5)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x24(r5), 0, 0
    lfs f2, 0x34(r1)
    stfs f2, 0x2c(r5)
    lfs f0, 0x38(r1)
    stfs f0, 0x30(r5)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x34(r5), 0, 0
    lfs f2, 0x44(r1)
    stfs f2, 0x3c(r5)
    lwz r4, 0x48(r1)
    stw r4, 0x40(r5)
    lha r3, 0x4c(r1)
    sth r3, 0x44(r5)
    lha r0, 0x4e(r1)
    sth r0, 0x46(r5)
    lha r4, 0x50(r1)
    sth r4, 0x48(r5)
    lha r3, 0x52(r1)
    sth r3, 0x4a(r5)
    lwz r0, 0x54(r1)
    stw r0, 0x4c(r5)
    lwz r4, 0x58(r1)
    stw r4, 0x50(r5)
    lwz r3, 0x5c(r1)
    stw r3, 0x54(r5)
    lwz r0, 0x60(r1)
    stw r0, 0x58(r5)
    lfs f3, 0x64(r1)
    stfs f3, 0x5c(r5)
    lfs f0, 0x68(r1)
    stfs f0, 0x60(r5)
    lwz r4, 0xd8(r24)
    lwz r3, 0xe4(r24)
    addi r0, r4, 0x1
    stw r0, 0xd8(r24)
lbl_fn_8023A8B4_00001244:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8023AE34(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    stw r0, 0x284(r1)
    addi r11, r1, 0x250
    stfd f31, 0x270(r1)
    psq_st f31, 0x278(r1), 0, 0
    stfd f30, 0x260(r1)
    psq_st f30, 0x268(r1), 0, 0
    stfd f29, 0x250(r1)
    psq_st f29, 0x258(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0xe8(r3)
    mr r15, r3
    stw r5, 0x18(r1)
    mr r14, r4
    cmpwi r0, 0x0
    stw r6, 0x1c(r1)
    bne lbl_fn_8023AE34_00001B1C
    lwz r20, 0xe0(r3)
    addi r23, r1, 0x48
    lfs f30, lbl_80883160
    addi r28, r1, 0x3c
    lfs f31, lbl_80883164
    addi r27, r1, 0x30
    addi r26, r1, 0x168
    addi r24, r1, 0xa8
    addi r25, r1, 0x108
    li r29, 0x1
    li r30, 0x0
    b lbl_fn_8023AE34_00001B04
lbl_fn_8023AE34_000012DC:
    lwz r0, 0x10(r20)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8023AE34_000012F4
    addi r20, r20, 0x64
    b lbl_fn_8023AE34_00001B04
lbl_fn_8023AE34_000012F4:
    lwz r0, 0x14(r20)
    cmpwi r0, 0x0
    bge lbl_fn_8023AE34_00001460
    lwz r4, 0x40(r20)
    addi r3, r15, 0x4c
    bl fn_802346BC
    cmpwi r3, 0x0
    bne lbl_fn_8023AE34_00001458
    lwz r3, 0xd8(r15)
    lwz r0, 0xe0(r15)
    mulli r3, r3, 0x64
    add r3, r0, r3
    cmplw r20, r3
    bne lbl_fn_8023AE34_00001330
    b lbl_fn_8023AE34_00001450
lbl_fn_8023AE34_00001330:
    lis r3, 0x51ec
    subf r0, r0, r20
    subi r3, r3, 0x7ae1
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r6, r0, 0x64
    mr r5, r0
    b lbl_fn_8023AE34_00001430
lbl_fn_8023AE34_00001358:
    lwz r7, 0xe0(r15)
    addi r3, r5, 0x1
    mulli r3, r3, 0x64
    addi r5, r5, 0x1
    add r4, r7, r6
    lwzux r7, r3, r7
    stw r7, 0x0(r4)
    addi r6, r6, 0x64
    lwz r7, 0x4(r3)
    stw r7, 0x4(r4)
    lwz r7, 0x8(r3)
    stw r7, 0x8(r4)
    lwz r7, 0xc(r3)
    stw r7, 0xc(r4)
    lwz r7, 0x10(r3)
    stw r7, 0x10(r4)
    lwz r7, 0x14(r3)
    stw r7, 0x14(r4)
    lfs f2, 0x20(r3)
    psq_l f1, 0x18(r3), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    lfs f2, 0x2c(r3)
    psq_l f1, 0x24(r3), 0, 0
    psq_st f1, 0x24(r4), 0, 0
    stfs f2, 0x2c(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r4)
    lfs f2, 0x3c(r3)
    psq_l f1, 0x34(r3), 0, 0
    psq_st f1, 0x34(r4), 0, 0
    stfs f2, 0x3c(r4)
    lwz r7, 0x40(r3)
    stw r7, 0x40(r4)
    lha r7, 0x44(r3)
    sth r7, 0x44(r4)
    lha r7, 0x46(r3)
    sth r7, 0x46(r4)
    lha r7, 0x48(r3)
    sth r7, 0x48(r4)
    lha r7, 0x4a(r3)
    sth r7, 0x4a(r4)
    lwz r7, 0x50(r3)
    lwz r8, 0x4c(r3)
    stw r8, 0x4c(r4)
    stw r7, 0x50(r4)
    lwz r7, 0x58(r3)
    lwz r8, 0x54(r3)
    stw r8, 0x54(r4)
    stw r7, 0x58(r4)
    lfs f0, 0x5c(r3)
    stfs f0, 0x5c(r4)
    lfs f0, 0x60(r3)
    stfs f0, 0x60(r4)
lbl_fn_8023AE34_00001430:
    lwz r3, 0xd8(r15)
    subi r4, r3, 0x1
    cmplw r5, r4
    blt lbl_fn_8023AE34_00001358
    mulli r0, r0, 0x64
    lwz r3, 0xe0(r15)
    stw r4, 0xd8(r15)
    add r3, r3, r0
lbl_fn_8023AE34_00001450:
    mr r20, r3
    b lbl_fn_8023AE34_00001B04
lbl_fn_8023AE34_00001458:
    addi r20, r20, 0x64
    b lbl_fn_8023AE34_00001B04
lbl_fn_8023AE34_00001460:
    cmpwi r14, 0x0
    beq lbl_fn_8023AE34_00001494
    lwz r0, 0x8(r20)
    cmplw r0, r14
    bne lbl_fn_8023AE34_0000148C
    lwz r3, 0xc(r20)
    lwz r0, 0x18(r1)
    cmpw r3, r0
    beq lbl_fn_8023AE34_00001494
    cmpwi r0, -0x2
    beq lbl_fn_8023AE34_00001494
lbl_fn_8023AE34_0000148C:
    addi r20, r20, 0x64
    b lbl_fn_8023AE34_00001B04
lbl_fn_8023AE34_00001494:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    blt lbl_fn_8023AE34_000014B4
    lha r3, 0x48(r20)
    cmpw r3, r0
    beq lbl_fn_8023AE34_000014B4
    addi r20, r20, 0x64
    b lbl_fn_8023AE34_00001B04
lbl_fn_8023AE34_000014B4:
    lwz r3, lbl_8087EFA8
    lfs f7, 0x5c(r20)
    lfs f8, 0x3a4(r3)
    lfs f0, 0x60(r20)
    fmadds f0, f7, f8, f0
    stfs f0, 0x60(r20)
    b lbl_fn_8023AE34_00001978
lbl_fn_8023AE34_000014D0:
    lwz r3, 0x0(r20)
    li r19, 0x0
    li r31, 0x0
    lwz r21, 0x0(r3)
    b lbl_fn_8023AE34_00001954
lbl_fn_8023AE34_000014E4:
    lha r0, 0x44(r20)
    cmpwi r0, 0x0
    blt lbl_fn_8023AE34_000014F8
    cmplw r0, r19
    bne lbl_fn_8023AE34_0000194C
lbl_fn_8023AE34_000014F8:
    lwz r0, 0x4(r21)
    add r22, r0, r31
    lwzx r0, r31, r0
    cmpwi r0, 0x0
    beq lbl_fn_8023AE34_0000194C
    lwz r4, 0x14(r20)
    lwz r0, 0x4(r22)
    lwz r3, 0x40(r20)
    cmpw r0, r4
    add r18, r3, r19
    bne lbl_fn_8023AE34_000018D4
    lwz r16, 0x4(r20)
    lwz r17, 0x38(r22)
    cmpwi r16, 0x0
    beq lbl_fn_8023AE34_000015F8
    lwz r0, 0x10(r20)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_8023AE34_000015A8
    cmplwi r17, 0x3
    bne lbl_fn_8023AE34_0000155C
    addi r16, r16, 0x30
    li r17, 0x5
    b lbl_fn_8023AE34_00001604
lbl_fn_8023AE34_0000155C:
    cmplwi r17, 0x4
    bne lbl_fn_8023AE34_00001604
    lwz r3, 0x4(r16)
    li r5, 0x0
    lwz r4, 0x3c(r22)
    addi r3, r3, 0x10
    bl fn_800928B0
    cmpwi r3, 0x0
    blt lbl_fn_8023AE34_000015A0
    lwz r4, 0x4(r20)
    lwz r4, 0x80(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8023AE34_000015A0
    mulli r0, r3, 0x30
    li r17, 0x5
    add r16, r4, r0
    b lbl_fn_8023AE34_00001604
lbl_fn_8023AE34_000015A0:
    li r17, 0x0
    b lbl_fn_8023AE34_00001604
lbl_fn_8023AE34_000015A8:
    cmplwi r17, 0x4
    bne lbl_fn_8023AE34_00001604
    lwz r4, 0x3c(r22)
    mr r3, r16
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_8023AE34_000015D0
    li r0, 0x0
    b lbl_fn_8023AE34_000015DC
lbl_fn_8023AE34_000015D0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r16)
    add r0, r3, r0
lbl_fn_8023AE34_000015DC:
    cmpwi r0, 0x0
    beq lbl_fn_8023AE34_000015F0
    mr r16, r0
    li r17, 0x5
    b lbl_fn_8023AE34_00001604
lbl_fn_8023AE34_000015F0:
    li r17, 0x0
    b lbl_fn_8023AE34_00001604
lbl_fn_8023AE34_000015F8:
    cmplwi r17, 0x1
    ble lbl_fn_8023AE34_00001604
    li r17, 0x0
lbl_fn_8023AE34_00001604:
    psq_l f1, 0xc(r22), 0, 0
    lfs f2, 0x14(r22)
    stfs f2, 0x44(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x18(r22), 0, 0
    lfs f2, 0x20(r22)
    stfs f2, 0x38(r1)
    psq_st f1, 0x0(r27), 0, 0
    lfs f9, 0x34(r22)
    lfs f8, 0x58(r20)
    lfs f7, 0x30(r22)
    fmuls f10, f9, f8
    lfs f0, 0x54(r20)
    lfs f9, 0x2c(r22)
    fmuls f11, f7, f0
    lfs f8, 0x50(r20)
    lfs f7, 0x28(r22)
    lfs f0, 0x4c(r20)
    fmuls f8, f9, f8
    lfs f29, 0x24(r22)
    fmuls f0, f7, f0
    stfs f8, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f11, 0x28(r1)
    stfs f10, 0x2c(r1)
    stfs f30, 0x194(r1)
    stfs f30, 0x18c(r1)
    stfs f30, 0x188(r1)
    stfs f30, 0x184(r1)
    stfs f30, 0x180(r1)
    stfs f30, 0x178(r1)
    stfs f30, 0x174(r1)
    stfs f30, 0x170(r1)
    stfs f30, 0x16c(r1)
    stfs f31, 0x190(r1)
    stfs f31, 0x17c(r1)
    stfs f31, 0x168(r1)
    lfs f1, 0x2c(r20)
    fcmpu cr0, f30, f1
    beq lbl_fn_8023AE34_000016F0
    addi r3, r1, 0x78
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x78
    addi r5, r1, 0x48
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8023AE34_000016F0:
    lfs f1, 0x28(r20)
    fcmpu cr0, f30, f1
    beq lbl_fn_8023AE34_00001748
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8023AE34_00001748:
    lfs f1, 0x24(r20)
    fcmpu cr0, f30, f1
    beq lbl_fn_8023AE34_000017A0
    addi r3, r1, 0x138
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8023AE34_000017A0:
    addi r4, r1, 0x3c
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F93C0
    lfs f10, 0x30(r20)
    lfs f8, 0x3c(r1)
    lfs f7, 0x40(r1)
    fmuls f12, f8, f10
    lfs f0, 0x44(r1)
    fmuls f11, f7, f10
    lfs f9, 0x30(r1)
    fmuls f10, f0, f10
    stfs f12, 0x3c(r1)
    stfs f11, 0x40(r1)
    lfs f8, 0x34(r1)
    stfs f10, 0x44(r1)
    lfs f7, 0x38(r1)
    lfs f0, 0x18(r20)
    fadds f0, f12, f0
    stfs f0, 0x3c(r1)
    lfs f0, 0x1c(r20)
    fadds f0, f11, f0
    stfs f0, 0x40(r1)
    lfs f0, 0x20(r20)
    fadds f0, f10, f0
    stfs f0, 0x44(r1)
    lfs f0, 0x24(r20)
    fadds f0, f9, f0
    stfs f0, 0x30(r1)
    lfs f0, 0x28(r20)
    fadds f0, f8, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x2c(r20)
    fadds f0, f7, f0
    stfs f0, 0x38(r1)
    lfs f0, 0x30(r20)
    lha r0, 0x48(r20)
    stw r0, 0xb8(r15)
    fmuls f29, f29, f0
    lha r0, 0x4a(r20)
    stw r0, 0xbc(r15)
    lwz r3, 0x8(r20)
    lwz r4, 0xc(r20)
    bl fn_80232B7C
    mr r3, r18
    bl fn_802346AC
    lwz r0, 0x40(r22)
    fmr f1, f29
    stw r0, 0x8(r1)
    mr r3, r15
    mr r6, r17
    mr r7, r16
    lwz r0, 0x44(r22)
    stw r0, 0xc(r1)
    addi r4, r22, 0x48
    addi r8, r1, 0x3c
    addi r9, r1, 0x30
    stw r29, 0x10(r1)
    addi r10, r1, 0x20
    lha r5, 0x46(r20)
    bl fn_8023A680
    mr r4, r18
    addi r3, r15, 0x4c
    addi r5, r20, 0x34
    bl fn_80234764
    lwz r5, 0x10(r20)
    mr r4, r18
    addi r3, r15, 0x4c
    bl fn_802346F0
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    li r3, 0x0
    bl fn_802346AC
    stw r30, 0xbc(r15)
    stw r30, 0xb8(r15)
    b lbl_fn_8023AE34_0000194C
lbl_fn_8023AE34_000018D4:
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_fn_8023AE34_0000194C
    cmpw r0, r4
    bne lbl_fn_8023AE34_0000194C
    mr r4, r18
    addi r3, r15, 0x4c
    li r5, 0x1
    bl fn_802347DC
    lwz r3, 0xcc(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8023AE34_0000194C
    lwz r0, 0xd0(r15)
    cmpwi r0, 0x0
    bne lbl_fn_8023AE34_0000194C
    stw r29, 0x198(r1)
    addi r4, r1, 0x198
    stw r30, 0x19c(r1)
    stw r30, 0x1e4(r1)
    stw r30, 0x1e8(r1)
    stw r30, 0x1ec(r1)
    stw r29, 0x1f4(r1)
    stw r18, 0x1f0(r1)
    stw r30, 0x1e0(r1)
    lwz r0, 0xb8(r15)
    stw r0, 0x1f8(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8023AE34_0000194C:
    addi r19, r19, 0x1
    addi r31, r31, 0x54
lbl_fn_8023AE34_00001954:
    lwz r0, 0x0(r21)
    cmplw r19, r0
    blt lbl_fn_8023AE34_000014E4
    lwz r3, 0x14(r20)
    addi r0, r3, 0x1
    stw r0, 0x14(r20)
    lfs f0, 0x60(r20)
    fsubs f0, f0, f31
    stfs f0, 0x60(r20)
lbl_fn_8023AE34_00001978:
    lfs f0, 0x60(r20)
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    beq lbl_fn_8023AE34_000014D0
    lwz r3, 0x0(r20)
    lwz r0, 0x14(r20)
    lwz r3, 0x0(r3)
    lwz r3, 0x10(r3)
    cmpw r0, r3
    blt lbl_fn_8023AE34_00001B00
    cmpwi r3, 0x0
    beq lbl_fn_8023AE34_00001B00
    lwz r4, 0x40(r20)
    addi r3, r15, 0x4c
    bl fn_802346BC
    cmpwi r3, 0x0
    bne lbl_fn_8023AE34_00001B00
    lwz r0, 0xd8(r15)
    lwz r3, 0xe0(r15)
    mulli r0, r0, 0x64
    add r0, r3, r0
    cmplw r20, r0
    bne lbl_fn_8023AE34_000019D8
    b lbl_fn_8023AE34_00001AF8
lbl_fn_8023AE34_000019D8:
    subf r0, r3, r20
    lis r3, 0x51ec
    subi r3, r3, 0x7ae1
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r6, r0, 0x64
    mr r5, r0
    b lbl_fn_8023AE34_00001AD8
lbl_fn_8023AE34_00001A00:
    lwz r7, 0xe0(r15)
    addi r3, r5, 0x1
    mulli r3, r3, 0x64
    addi r5, r5, 0x1
    add r4, r7, r6
    lwzux r7, r3, r7
    stw r7, 0x0(r4)
    addi r6, r6, 0x64
    lwz r7, 0x4(r3)
    stw r7, 0x4(r4)
    lwz r7, 0x8(r3)
    stw r7, 0x8(r4)
    lwz r7, 0xc(r3)
    stw r7, 0xc(r4)
    lwz r7, 0x10(r3)
    stw r7, 0x10(r4)
    lwz r7, 0x14(r3)
    stw r7, 0x14(r4)
    lfs f2, 0x20(r3)
    psq_l f1, 0x18(r3), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    lfs f2, 0x2c(r3)
    psq_l f1, 0x24(r3), 0, 0
    psq_st f1, 0x24(r4), 0, 0
    stfs f2, 0x2c(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r4)
    lfs f2, 0x3c(r3)
    psq_l f1, 0x34(r3), 0, 0
    psq_st f1, 0x34(r4), 0, 0
    stfs f2, 0x3c(r4)
    lwz r7, 0x40(r3)
    stw r7, 0x40(r4)
    lha r7, 0x44(r3)
    sth r7, 0x44(r4)
    lha r7, 0x46(r3)
    sth r7, 0x46(r4)
    lha r7, 0x48(r3)
    sth r7, 0x48(r4)
    lha r7, 0x4a(r3)
    sth r7, 0x4a(r4)
    lwz r7, 0x50(r3)
    lwz r8, 0x4c(r3)
    stw r8, 0x4c(r4)
    stw r7, 0x50(r4)
    lwz r7, 0x58(r3)
    lwz r8, 0x54(r3)
    stw r8, 0x54(r4)
    stw r7, 0x58(r4)
    lfs f0, 0x5c(r3)
    stfs f0, 0x5c(r4)
    lfs f0, 0x60(r3)
    stfs f0, 0x60(r4)
lbl_fn_8023AE34_00001AD8:
    lwz r3, 0xd8(r15)
    subi r3, r3, 0x1
    cmplw r5, r3
    blt lbl_fn_8023AE34_00001A00
    mulli r0, r0, 0x64
    lwz r4, 0xe0(r15)
    stw r3, 0xd8(r15)
    add r0, r4, r0
lbl_fn_8023AE34_00001AF8:
    mr r20, r0
    b lbl_fn_8023AE34_00001B04
lbl_fn_8023AE34_00001B00:
    addi r20, r20, 0x64
lbl_fn_8023AE34_00001B04:
    lwz r0, 0xd8(r15)
    lwz r3, 0xe0(r15)
    mulli r0, r0, 0x64
    add r0, r3, r0
    cmplw r20, r0
    bne lbl_fn_8023AE34_000012DC
lbl_fn_8023AE34_00001B1C:
    addi r11, r1, 0x250
    psq_l f31, 0x278(r1), 0, 0
    lfd f31, 0x270(r1)
    psq_l f30, 0x268(r1), 0, 0
    lfd f30, 0x260(r1)
    psq_l f29, 0x258(r1), 0, 0
    lfd f29, 0x250(r1)
    bl _restgpr_14
    lwz r0, 0x284(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}
