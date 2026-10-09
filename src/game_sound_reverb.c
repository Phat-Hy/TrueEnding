#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void fn_800DD3FC(void);
extern void fn_801DBAC0(void);
extern void fn_801DBAD8(void);
extern void fn_801DBAF8(void);
extern void fn_801DBB14(void);
extern void fn_801DBB78(void);
extern void fn_801DC000(void);
extern void fn_801DC028(void);
extern void fn_801DC038(void);
extern void fn_801DC044(void);
extern void fn_801DC058(void);
extern void fn_801DC064(void);
extern void fn_801DC074(void);
extern void fn_801DC07C(void);
extern void fn_801DFFA4(void);
extern void fn_801E057C(void);
extern void fn_8020EF80(void);
extern void fn_80211480(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);

/* External data declarations */
extern u8 lbl_80782898[];

/* Small data declarations */
extern u32 lbl_8087DA7C;
extern u32 lbl_8087DA80;
extern u32 lbl_8087DA84;
extern u32 lbl_80882AF0;

/* Function declarations */
void fn_801DE38C(void);
void fn_801DEF68(void);
void fn_801DF3D4(void);
void fn_801DF904(void);
void fn_801DFA74(void);

asm void fn_801DE38C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_22
    lis r31, 0x2aab
    lis r6, 0x6666
    lfs f31, lbl_80882AF0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r28, r6, 0x6667
    subi r27, r31, 0x5555
lbl_fn_801DE38C_0000003C:
    lwz r30, 0x0(r24)
    lwz r29, 0x0(r25)
    subf r0, r30, r29
    mulhw r0, r27, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_801DE38C_00000BBC
    cmpwi r7, 0x14
    bgt lbl_fn_801DE38C_000001E0
    cmplw r30, r29
    beq lbl_fn_801DE38C_00000BBC
    subi r28, r29, 0x18
    cmplw r30, r28
    beq lbl_fn_801DE38C_00000BBC
    lfs f31, lbl_80882AF0
    b lbl_fn_801DE38C_000001D4
lbl_fn_801DE38C_00000084:
    cmplw r30, r29
    mr r25, r30
    beq lbl_fn_801DE38C_00000168
    addi r24, r30, 0x18
    b lbl_fn_801DE38C_00000160
lbl_fn_801DE38C_00000098:
    lwz r3, 0x8(r24)
    lwz r0, 0x8(r25)
    cmpw r3, r0
    bne lbl_fn_801DE38C_000000F0
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000000D8
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801DE38C_000000D8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DE38C_00000150
lbl_fn_801DE38C_000000D8:
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000000E8
    li r0, 0x1
    b lbl_fn_801DE38C_00000150
lbl_fn_801DE38C_000000E8:
    li r0, 0x0
    b lbl_fn_801DE38C_00000150
lbl_fn_801DE38C_000000F0:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r24)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DE38C_00000144
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r25)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DE38C_00000150
lbl_fn_801DE38C_00000144:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DE38C_00000150:
    cmpwi r0, 0x0
    beq lbl_fn_801DE38C_0000015C
    mr r25, r24
lbl_fn_801DE38C_0000015C:
    addi r24, r24, 0x18
lbl_fn_801DE38C_00000160:
    cmplw r24, r29
    bne lbl_fn_801DE38C_00000098
lbl_fn_801DE38C_00000168:
    cmplw r25, r30
    beq lbl_fn_801DE38C_000001D0
    lwz r3, 0x0(r25)
    lwz r4, 0x4(r25)
    lwz r5, 0x8(r25)
    lwz r6, 0xc(r25)
    lwz r7, 0x10(r25)
    lwz r8, 0x14(r25)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r25)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r25)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r25)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r25)
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
lbl_fn_801DE38C_000001D0:
    addi r30, r30, 0x18
lbl_fn_801DE38C_000001D4:
    cmplw r30, r28
    bne lbl_fn_801DE38C_00000084
    b lbl_fn_801DE38C_00000BBC
lbl_fn_801DE38C_000001E0:
    lwz r4, lbl_8087DA7C
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r28, r4
    addi r8, r4, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x18
    add r0, r30, r0
    blt lbl_fn_801DE38C_00000220
    li r8, -0x4
lbl_fn_801DE38C_00000220:
    mulhw r4, r28, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087DA7C
    cmpwi r3, 0x5
    lwz r6, 0x0(r24)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0x18
    add r7, r6, r3
    blt lbl_fn_801DE38C_00000270
    li r8, -0x4
    stw r8, lbl_8087DA7C
lbl_fn_801DE38C_00000270:
    lwz r5, 0x0(r25)
    mr r6, r26
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r29, r5, 0x18
    stw r29, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801DEF68
    lwz r23, 0x0(r24)
    mr r30, r29
    b lbl_fn_801DE38C_000002A8
lbl_fn_801DE38C_000002A4:
    addi r23, r23, 0x18
lbl_fn_801DE38C_000002A8:
    lwz r3, 0x8(r23)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DE38C_00000300
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000002E8
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DE38C_000002E8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DE38C_00000360
lbl_fn_801DE38C_000002E8:
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000002F8
    li r0, 0x1
    b lbl_fn_801DE38C_00000360
lbl_fn_801DE38C_000002F8:
    li r0, 0x0
    b lbl_fn_801DE38C_00000360
lbl_fn_801DE38C_00000300:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DE38C_00000354
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DE38C_00000360
lbl_fn_801DE38C_00000354:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DE38C_00000360:
    cmpwi r0, 0x0
    bne lbl_fn_801DE38C_000002A4
lbl_fn_801DE38C_00000368:
    subi r30, r30, 0x18
    cmplw r23, r30
    beq lbl_fn_801DE38C_00000434
    lwz r3, 0x8(r30)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DE38C_000003CC
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000003B4
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DE38C_000003B4
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DE38C_0000042C
lbl_fn_801DE38C_000003B4:
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000003C4
    li r0, 0x1
    b lbl_fn_801DE38C_0000042C
lbl_fn_801DE38C_000003C4:
    li r0, 0x0
    b lbl_fn_801DE38C_0000042C
lbl_fn_801DE38C_000003CC:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DE38C_00000420
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DE38C_0000042C
lbl_fn_801DE38C_00000420:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DE38C_0000042C:
    cmpwi r0, 0x0
    beq lbl_fn_801DE38C_00000368
lbl_fn_801DE38C_00000434:
    cmplw r23, r30
    bge lbl_fn_801DE38C_000006A8
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
    b lbl_fn_801DE38C_000004A8
lbl_fn_801DE38C_000004A4:
    addi r23, r23, 0x18
lbl_fn_801DE38C_000004A8:
    lwz r3, 0x8(r23)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DE38C_00000500
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000004E8
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DE38C_000004E8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DE38C_00000560
lbl_fn_801DE38C_000004E8:
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000004F8
    li r0, 0x1
    b lbl_fn_801DE38C_00000560
lbl_fn_801DE38C_000004F8:
    li r0, 0x0
    b lbl_fn_801DE38C_00000560
lbl_fn_801DE38C_00000500:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DE38C_00000554
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DE38C_00000560
lbl_fn_801DE38C_00000554:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DE38C_00000560:
    cmpwi r0, 0x0
    bne lbl_fn_801DE38C_000004A4
lbl_fn_801DE38C_00000568:
    subi r30, r30, 0x18
    lwz r0, 0x8(r29)
    lwz r3, 0x8(r30)
    cmpw r3, r0
    bne lbl_fn_801DE38C_000005C4
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000005AC
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DE38C_000005AC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DE38C_00000624
lbl_fn_801DE38C_000005AC:
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_000005BC
    li r0, 0x1
    b lbl_fn_801DE38C_00000624
lbl_fn_801DE38C_000005BC:
    li r0, 0x0
    b lbl_fn_801DE38C_00000624
lbl_fn_801DE38C_000005C4:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DE38C_00000618
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DE38C_00000624
lbl_fn_801DE38C_00000618:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DE38C_00000624:
    cmpwi r0, 0x0
    beq lbl_fn_801DE38C_00000568
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801DE38C_000006A8
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
    b lbl_fn_801DE38C_000004A8
lbl_fn_801DE38C_000006A8:
    lwz r6, 0x0(r24)
    cmplw r23, r6
    bne lbl_fn_801DE38C_00000B44
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r29)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r29)
    stw r4, 0x4(r29)
    stw r5, 0x8(r29)
    stw r6, 0xc(r29)
    stw r7, 0x10(r29)
    stw r8, 0x14(r29)
    lwz r3, 0x0(r25)
    lwz r5, 0x0(r24)
    subi r30, r3, 0x18
    lwz r3, 0x8(r5)
    lwz r0, 0x8(r30)
    cmpw r3, r0
    bne lbl_fn_801DE38C_0000077C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_00000764
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801DE38C_00000764
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DE38C_000007DC
lbl_fn_801DE38C_00000764:
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_00000774
    li r0, 0x1
    b lbl_fn_801DE38C_000007DC
lbl_fn_801DE38C_00000774:
    li r0, 0x0
    b lbl_fn_801DE38C_000007DC
lbl_fn_801DE38C_0000077C:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DE38C_000007D0
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DE38C_000007DC
lbl_fn_801DE38C_000007D0:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DE38C_000007DC:
    cmpwi r0, 0x0
    bne lbl_fn_801DE38C_00000924
    b lbl_fn_801DE38C_000007EC
lbl_fn_801DE38C_000007E8:
    addi r23, r23, 0x18
lbl_fn_801DE38C_000007EC:
    lwz r0, 0x0(r25)
    cmplw r23, r0
    beq lbl_fn_801DE38C_000008BC
    lwz r5, 0x0(r24)
    lwz r0, 0x8(r23)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DE38C_00000854
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_0000083C
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801DE38C_0000083C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DE38C_000008B4
lbl_fn_801DE38C_0000083C:
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_0000084C
    li r0, 0x1
    b lbl_fn_801DE38C_000008B4
lbl_fn_801DE38C_0000084C:
    li r0, 0x0
    b lbl_fn_801DE38C_000008B4
lbl_fn_801DE38C_00000854:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DE38C_000008A8
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DE38C_000008B4
lbl_fn_801DE38C_000008A8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DE38C_000008B4:
    cmpwi r0, 0x0
    beq lbl_fn_801DE38C_000007E8
lbl_fn_801DE38C_000008BC:
    cmplw r23, r30
    bge lbl_fn_801DE38C_00000924
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
lbl_fn_801DE38C_00000924:
    cmplw r23, r30
    bge lbl_fn_801DE38C_00000B3C
    b lbl_fn_801DE38C_00000934
lbl_fn_801DE38C_00000930:
    addi r23, r23, 0x18
lbl_fn_801DE38C_00000934:
    lwz r5, 0x0(r24)
    lwz r0, 0x8(r23)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DE38C_00000990
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_00000978
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801DE38C_00000978
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DE38C_000009F0
lbl_fn_801DE38C_00000978:
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_00000988
    li r0, 0x1
    b lbl_fn_801DE38C_000009F0
lbl_fn_801DE38C_00000988:
    li r0, 0x0
    b lbl_fn_801DE38C_000009F0
lbl_fn_801DE38C_00000990:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DE38C_000009E4
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DE38C_000009F0
lbl_fn_801DE38C_000009E4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DE38C_000009F0:
    cmpwi r0, 0x0
    beq lbl_fn_801DE38C_00000930
lbl_fn_801DE38C_000009F8:
    lwz r5, 0x0(r24)
    subi r30, r30, 0x18
    lwz r0, 0x8(r30)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DE38C_00000A58
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_00000A40
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801DE38C_00000A40
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DE38C_00000AB8
lbl_fn_801DE38C_00000A40:
    cmpwi r0, 0x0
    blt lbl_fn_801DE38C_00000A50
    li r0, 0x1
    b lbl_fn_801DE38C_00000AB8
lbl_fn_801DE38C_00000A50:
    li r0, 0x0
    b lbl_fn_801DE38C_00000AB8
lbl_fn_801DE38C_00000A58:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DE38C_00000AAC
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DE38C_00000AB8
lbl_fn_801DE38C_00000AAC:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DE38C_00000AB8:
    cmpwi r0, 0x0
    bne lbl_fn_801DE38C_000009F8
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801DE38C_00000B3C
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
    b lbl_fn_801DE38C_00000934
lbl_fn_801DE38C_00000B3C:
    stw r23, 0x0(r24)
    b lbl_fn_801DE38C_0000003C
lbl_fn_801DE38C_00000B44:
    lwz r3, 0x0(r25)
    subf r0, r6, r23
    subi r5, r31, 0x5555
    mulhw r4, r5, r0
    subf r0, r23, r3
    mulhw r0, r5, r0
    srawi r4, r4, 2
    srwi r5, r4, 31
    srawi r0, r0, 2
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_801DE38C_00000B9C
    stw r23, 0x10(r1)
    mr r5, r26
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_801DE38C
    stw r23, 0x0(r24)
    b lbl_fn_801DE38C_0000003C
lbl_fn_801DE38C_00000B9C:
    stw r3, 0x8(r1)
    mr r5, r26
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r23, 0xc(r1)
    bl fn_801DE38C
    stw r23, 0x0(r25)
    b lbl_fn_801DE38C_0000003C
lbl_fn_801DE38C_00000BBC:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801DEF68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r31, 0x0(r3)
    mr r28, r3
    lwz r6, 0x0(r5)
    mr r29, r4
    lwz r0, 0x8(r31)
    mr r30, r5
    lwz r3, 0x8(r6)
    cmpw r3, r0
    bne lbl_fn_801DEF68_00000C5C
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    blt lbl_fn_801DEF68_00000C44
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    blt lbl_fn_801DEF68_00000C44
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DEF68_00000CC0
lbl_fn_801DEF68_00000C44:
    cmpwi r0, 0x0
    blt lbl_fn_801DEF68_00000C54
    li r0, 0x1
    b lbl_fn_801DEF68_00000CC0
lbl_fn_801DEF68_00000C54:
    li r0, 0x0
    b lbl_fn_801DEF68_00000CC0
lbl_fn_801DEF68_00000C5C:
    lwz r4, 0x0(r31)
    lwz r3, 0x0(r6)
    lfs f1, 0xc(r4)
    lfs f2, 0xc(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801DEF68_00000CB4
    bl fn_8020EF80
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r31)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DEF68_00000CC0
lbl_fn_801DEF68_00000CB4:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DEF68_00000CC0:
    lwz r5, 0x0(r29)
    cntlzw r0, r0
    lwz r26, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x8(r5)
    lwz r0, 0x8(r26)
    cmpw r3, r0
    bne lbl_fn_801DEF68_00000D28
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DEF68_00000D10
    lwz r4, 0xc(r26)
    cmpwi r4, 0x0
    blt lbl_fn_801DEF68_00000D10
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DEF68_00000D8C
lbl_fn_801DEF68_00000D10:
    cmpwi r0, 0x0
    blt lbl_fn_801DEF68_00000D20
    li r0, 0x1
    b lbl_fn_801DEF68_00000D8C
lbl_fn_801DEF68_00000D20:
    li r0, 0x0
    b lbl_fn_801DEF68_00000D8C
lbl_fn_801DEF68_00000D28:
    lwz r4, 0x0(r26)
    lwz r3, 0x0(r5)
    lfs f1, 0xc(r4)
    lfs f2, 0xc(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801DEF68_00000D80
    bl fn_8020EF80
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r26)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DEF68_00000D8C
lbl_fn_801DEF68_00000D80:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DEF68_00000D8C:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_801DEF68_00000DA4
    cmpwi r0, 0x0
    bne lbl_fn_801DEF68_00001030
lbl_fn_801DEF68_00000DA4:
    cmpwi r31, 0x0
    bne lbl_fn_801DEF68_00000E20
    cmpwi r0, 0x0
    bne lbl_fn_801DEF68_00000E20
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r29)
    lwz r5, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r8, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r4)
    stw r5, 0x0(r3)
    stw r6, 0x4(r3)
    stw r7, 0x8(r3)
    stw r8, 0xc(r3)
    stw r9, 0x10(r3)
    stw r10, 0x14(r3)
    b lbl_fn_801DEF68_00001030
lbl_fn_801DEF68_00000E20:
    lwz r26, 0x0(r28)
    lwz r5, 0x0(r29)
    lwz r0, 0x8(r26)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DEF68_00000E80
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DEF68_00000E68
    lwz r4, 0xc(r26)
    cmpwi r4, 0x0
    blt lbl_fn_801DEF68_00000E68
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DEF68_00000EE4
lbl_fn_801DEF68_00000E68:
    cmpwi r0, 0x0
    blt lbl_fn_801DEF68_00000E78
    li r0, 0x1
    b lbl_fn_801DEF68_00000EE4
lbl_fn_801DEF68_00000E78:
    li r0, 0x0
    b lbl_fn_801DEF68_00000EE4
lbl_fn_801DEF68_00000E80:
    lwz r4, 0x0(r26)
    lwz r3, 0x0(r5)
    lfs f1, 0xc(r4)
    lfs f2, 0xc(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801DEF68_00000ED8
    bl fn_8020EF80
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r26)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DEF68_00000EE4
lbl_fn_801DEF68_00000ED8:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DEF68_00000EE4:
    cmpwi r0, 0x0
    beq lbl_fn_801DEF68_00000F54
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r29)
    lwz r5, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r8, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r4)
    stw r5, 0x0(r3)
    stw r6, 0x4(r3)
    stw r7, 0x8(r3)
    stw r8, 0xc(r3)
    stw r9, 0x10(r3)
    stw r10, 0x14(r3)
lbl_fn_801DEF68_00000F54:
    cmpwi r31, 0x0
    beq lbl_fn_801DEF68_00000FC8
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lwz r5, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r8, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r4)
    stw r5, 0x0(r3)
    stw r6, 0x4(r3)
    stw r7, 0x8(r3)
    stw r8, 0xc(r3)
    stw r9, 0x10(r3)
    stw r10, 0x14(r3)
    b lbl_fn_801DEF68_00001030
lbl_fn_801DEF68_00000FC8:
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r30)
    lwz r5, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r8, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r4)
    stw r5, 0x0(r3)
    stw r6, 0x4(r3)
    stw r7, 0x8(r3)
    stw r8, 0xc(r3)
    stw r9, 0x10(r3)
    stw r10, 0x14(r3)
lbl_fn_801DEF68_00001030:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801DF3D4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_801DF3D4_0000106C:
    mr r3, r28
    mr r4, r27
    bl fn_801DC000
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_801DF3D4_00001564
    cmpwi r3, 0x14
    bgt lbl_fn_801DF3D4_000010B0
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_801E057C
    b lbl_fn_801DF3D4_00001564
lbl_fn_801DF3D4_000010B0:
    lwz r5, lbl_8087DA80
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_801DC028
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_801DC038
    lwz r3, lbl_8087DA80
    addi r6, r3, 0x1
    stw r6, lbl_8087DA80
    cmpwi r6, 0x5
    blt lbl_fn_801DF3D4_0000110C
    li r6, -0x4
    stw r6, lbl_8087DA80
lbl_fn_801DF3D4_0000110C:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_801DC028
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_801DC038
    lwz r3, lbl_8087DA80
    addi r0, r3, 0x1
    stw r0, lbl_8087DA80
    cmpwi r0, 0x5
    blt lbl_fn_801DF3D4_0000116C
    li r6, -0x4
    stw r6, lbl_8087DA80
lbl_fn_801DF3D4_0000116C:
    mr r3, r28
    li r4, 0x1
    bl fn_801DC044
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_801DC038
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801DFFA4
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801DC058
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_801DC058
    b lbl_fn_801DF3D4_000011D8
lbl_fn_801DF3D4_000011D0:
    addi r3, r1, 0x40
    bl fn_801DC064
lbl_fn_801DF3D4_000011D8:
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    bne lbl_fn_801DF3D4_000011D0
lbl_fn_801DF3D4_00001204:
    addi r3, r1, 0x3c
    bl fn_801DC07C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_801DBB78
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_0000124C
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_00001204
lbl_fn_801DF3D4_0000124C:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAF8
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_00001328
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
    addi r3, r1, 0x40
    bl fn_801DC064
    b lbl_fn_801DF3D4_00001290
lbl_fn_801DF3D4_00001288:
    addi r3, r1, 0x40
    bl fn_801DC064
lbl_fn_801DF3D4_00001290:
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    bne lbl_fn_801DF3D4_00001288
lbl_fn_801DF3D4_000012BC:
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_801DC07C
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_000012BC
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAD8
    cmpwi r3, 0x0
    bne lbl_fn_801DF3D4_00001328
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
    addi r3, r1, 0x40
    bl fn_801DC064
    b lbl_fn_801DF3D4_00001290
lbl_fn_801DF3D4_00001328:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801DBAC0
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_000014E0
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
    addi r3, r1, 0x40
    bl fn_801DC064
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_801DC058
    addi r3, r1, 0x3c
    bl fn_801DC07C
    bl fn_801DC074
    mr r30, r3
    mr r3, r27
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    bne lbl_fn_801DF3D4_00001418
    b lbl_fn_801DF3D4_000013A8
lbl_fn_801DF3D4_000013A0:
    addi r3, r1, 0x40
    bl fn_801DC064
lbl_fn_801DF3D4_000013A8:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_801DBB78
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_000013E8
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r30, r3
    mr r3, r27
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_000013A0
lbl_fn_801DF3D4_000013E8:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAF8
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_00001418
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
lbl_fn_801DF3D4_00001418:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAF8
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_000014D0
    b lbl_fn_801DF3D4_00001438
lbl_fn_801DF3D4_00001430:
    addi r3, r1, 0x40
    bl fn_801DC064
lbl_fn_801DF3D4_00001438:
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r30, r3
    mr r3, r27
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    beq lbl_fn_801DF3D4_00001430
lbl_fn_801DF3D4_00001464:
    addi r3, r1, 0x3c
    bl fn_801DC07C
    bl fn_801DC074
    mr r30, r3
    mr r3, r27
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    bne lbl_fn_801DF3D4_00001464
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAD8
    cmpwi r3, 0x0
    bne lbl_fn_801DF3D4_000014D0
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
    addi r3, r1, 0x40
    bl fn_801DC064
    b lbl_fn_801DF3D4_00001438
lbl_fn_801DF3D4_000014D0:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_801DC058
    b lbl_fn_801DF3D4_0000106C
lbl_fn_801DF3D4_000014E0:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_801DC000
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801DC000
    cmpw r3, r30
    bge lbl_fn_801DF3D4_00001534
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_801DFA74
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_801DC058
    b lbl_fn_801DF3D4_0000106C
lbl_fn_801DF3D4_00001534:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_801DFA74
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_801DC058
    b lbl_fn_801DF3D4_0000106C
lbl_fn_801DF3D4_00001564:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801DF904(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lwz r3, 0x8(r4)
    stw r0, 0x124(r1)
    lwz r0, 0x8(r5)
    stw r31, 0x11c(r1)
    cmpw r3, r0
    stw r30, 0x118(r1)
    mr r30, r5
    stw r29, 0x114(r1)
    bne lbl_fn_801DF904_000015EC
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801DF904_000015D4
    lwz r4, 0xc(r5)
    cmpwi r4, 0x0
    blt lbl_fn_801DF904_000015D4
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801DF904_000016CC
lbl_fn_801DF904_000015D4:
    cmpwi r0, 0x0
    blt lbl_fn_801DF904_000015E4
    li r3, 0x1
    b lbl_fn_801DF904_000016CC
lbl_fn_801DF904_000015E4:
    li r3, 0x0
    b lbl_fn_801DF904_000016CC
lbl_fn_801DF904_000015EC:
    lwz r3, 0x0(r4)
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_8020EF80
    bl fn_80211480
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r29)
    mr r30, r3
    addi r3, r1, 0x88
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x88
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801DF904_00001640
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801DF904_00001640:
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r30)
    addi r3, r1, 0x8
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801DF904_00001674
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801DF904_00001674:
    addi r3, r1, 0x88
    addi r4, r1, 0x8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801DF904_000016BC
    lwz r3, 0x8(r29)
    bl fn_80686A48
    mr r31, r3
    lwz r3, 0x8(r30)
    bl fn_80686A48
    cmpw r31, r3
    beq lbl_fn_801DF904_000016BC
    xor r0, r3, r31
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r3, r0, 31
    b lbl_fn_801DF904_000016CC
lbl_fn_801DF904_000016BC:
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r30)
    bl fn_80686AF0
    srwi r3, r3, 31
lbl_fn_801DF904_000016CC:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801DFA74(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_801DFA74_0000170C:
    mr r3, r28
    mr r4, r27
    bl fn_801DC000
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_801DFA74_00001C04
    cmpwi r3, 0x14
    bgt lbl_fn_801DFA74_00001750
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_801E057C
    b lbl_fn_801DFA74_00001C04
lbl_fn_801DFA74_00001750:
    lwz r5, lbl_8087DA84
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_801DC028
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_801DC038
    lwz r3, lbl_8087DA84
    addi r6, r3, 0x1
    stw r6, lbl_8087DA84
    cmpwi r6, 0x5
    blt lbl_fn_801DFA74_000017AC
    li r6, -0x4
    stw r6, lbl_8087DA84
lbl_fn_801DFA74_000017AC:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_801DC028
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_801DC038
    lwz r3, lbl_8087DA84
    addi r0, r3, 0x1
    stw r0, lbl_8087DA84
    cmpwi r0, 0x5
    blt lbl_fn_801DFA74_0000180C
    li r6, -0x4
    stw r6, lbl_8087DA84
lbl_fn_801DFA74_0000180C:
    mr r3, r28
    li r4, 0x1
    bl fn_801DC044
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_801DC038
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801DFFA4
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801DC058
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_801DC058
    b lbl_fn_801DFA74_00001878
lbl_fn_801DFA74_00001870:
    addi r3, r1, 0x40
    bl fn_801DC064
lbl_fn_801DFA74_00001878:
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    bne lbl_fn_801DFA74_00001870
lbl_fn_801DFA74_000018A4:
    addi r3, r1, 0x3c
    bl fn_801DC07C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_801DBB78
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_000018EC
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_000018A4
lbl_fn_801DFA74_000018EC:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAF8
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_000019C8
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
    addi r3, r1, 0x40
    bl fn_801DC064
    b lbl_fn_801DFA74_00001930
lbl_fn_801DFA74_00001928:
    addi r3, r1, 0x40
    bl fn_801DC064
lbl_fn_801DFA74_00001930:
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    bne lbl_fn_801DFA74_00001928
lbl_fn_801DFA74_0000195C:
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_801DC07C
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_0000195C
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAD8
    cmpwi r3, 0x0
    bne lbl_fn_801DFA74_000019C8
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
    addi r3, r1, 0x40
    bl fn_801DC064
    b lbl_fn_801DFA74_00001930
lbl_fn_801DFA74_000019C8:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801DBAC0
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_00001B80
    addi r3, r1, 0x38
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
    addi r3, r1, 0x40
    bl fn_801DC064
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_801DC058
    addi r3, r1, 0x3c
    bl fn_801DC07C
    bl fn_801DC074
    mr r30, r3
    mr r3, r27
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    bne lbl_fn_801DFA74_00001AB8
    b lbl_fn_801DFA74_00001A48
lbl_fn_801DFA74_00001A40:
    addi r3, r1, 0x40
    bl fn_801DC064
lbl_fn_801DFA74_00001A48:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_801DBB78
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_00001A88
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r30, r3
    mr r3, r27
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_00001A40
lbl_fn_801DFA74_00001A88:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAF8
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_00001AB8
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
lbl_fn_801DFA74_00001AB8:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAF8
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_00001B70
    b lbl_fn_801DFA74_00001AD8
lbl_fn_801DFA74_00001AD0:
    addi r3, r1, 0x40
    bl fn_801DC064
lbl_fn_801DFA74_00001AD8:
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r30, r3
    mr r3, r27
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    beq lbl_fn_801DFA74_00001AD0
lbl_fn_801DFA74_00001B04:
    addi r3, r1, 0x3c
    bl fn_801DC07C
    bl fn_801DC074
    mr r30, r3
    mr r3, r27
    bl fn_801DC074
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801DF904
    cmpwi r3, 0x0
    bne lbl_fn_801DFA74_00001B04
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801DBAD8
    cmpwi r3, 0x0
    bne lbl_fn_801DFA74_00001B70
    addi r3, r1, 0x3c
    bl fn_801DC074
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801DC074
    mr r4, r30
    bl fn_801DBB14
    addi r3, r1, 0x40
    bl fn_801DC064
    b lbl_fn_801DFA74_00001AD8
lbl_fn_801DFA74_00001B70:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_801DC058
    b lbl_fn_801DFA74_0000170C
lbl_fn_801DFA74_00001B80:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_801DC000
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801DC000
    cmpw r3, r30
    bge lbl_fn_801DFA74_00001BD4
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_801DFA74
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_801DC058
    b lbl_fn_801DFA74_0000170C
lbl_fn_801DFA74_00001BD4:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_801DFA74
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_801DC058
    b lbl_fn_801DFA74_0000170C
lbl_fn_801DFA74_00001C04:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
