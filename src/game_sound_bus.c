#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_801347C8(void);
extern void fn_801CEA98(void);
extern void fn_801CFAA8(void);
extern void fn_801DC8C8(void);
extern void fn_801DCE88(void);
extern void fn_801DD26C(void);
extern void fn_8020ED84(void);
extern void fn_8020EF4C(void);
extern void fn_8020EF80(void);
extern void fn_80211480(void);
extern void fn_804439FC(void);
extern void fn_8044441C(void);
extern void fn_8044D0DC(void);
extern void fn_80680770(void);
extern void fn_80686AF0(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_8073CAA8[];
extern u8 lbl_80782860[];

/* Small data declarations */
extern u32 lbl_8087DA74;
extern u32 lbl_8087F4F0;
extern u32 lbl_80882AF0;

/* Function declarations */
void fn_801DAEE4(void);
void fn_801DBAC0(void);
void fn_801DBAD8(void);
void fn_801DBAF8(void);
void fn_801DBB14(void);
void fn_801DBB78(void);
void fn_801DBB94(void);
void fn_801DC000(void);
void fn_801DC028(void);
void fn_801DC038(void);
void fn_801DC044(void);
void fn_801DC058(void);
void fn_801DC064(void);
void fn_801DC074(void);
void fn_801DC07C(void);
void fn_801DC08C(void);
void fn_801DC09C(void);
void fn_801DC410(void);
void fn_801DC418(void);
void fn_801DC42C(void);

asm void fn_801DAEE4(void)
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
lbl_fn_801DAEE4_0000003C:
    lwz r30, 0x0(r24)
    lwz r29, 0x0(r25)
    subf r0, r30, r29
    mulhw r0, r27, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_801DAEE4_00000BBC
    cmpwi r7, 0x14
    bgt lbl_fn_801DAEE4_000001E0
    cmplw r30, r29
    beq lbl_fn_801DAEE4_00000BBC
    subi r28, r29, 0x18
    cmplw r30, r28
    beq lbl_fn_801DAEE4_00000BBC
    lfs f31, lbl_80882AF0
    b lbl_fn_801DAEE4_000001D4
lbl_fn_801DAEE4_00000084:
    cmplw r30, r29
    mr r25, r30
    beq lbl_fn_801DAEE4_00000168
    addi r24, r30, 0x18
    b lbl_fn_801DAEE4_00000160
lbl_fn_801DAEE4_00000098:
    lwz r3, 0x8(r24)
    lwz r0, 0x8(r25)
    cmpw r3, r0
    bne lbl_fn_801DAEE4_000000F0
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000000D8
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801DAEE4_000000D8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DAEE4_00000150
lbl_fn_801DAEE4_000000D8:
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000000E8
    li r0, 0x1
    b lbl_fn_801DAEE4_00000150
lbl_fn_801DAEE4_000000E8:
    li r0, 0x0
    b lbl_fn_801DAEE4_00000150
lbl_fn_801DAEE4_000000F0:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r24)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DAEE4_00000144
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
    b lbl_fn_801DAEE4_00000150
lbl_fn_801DAEE4_00000144:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DAEE4_00000150:
    cmpwi r0, 0x0
    beq lbl_fn_801DAEE4_0000015C
    mr r25, r24
lbl_fn_801DAEE4_0000015C:
    addi r24, r24, 0x18
lbl_fn_801DAEE4_00000160:
    cmplw r24, r29
    bne lbl_fn_801DAEE4_00000098
lbl_fn_801DAEE4_00000168:
    cmplw r25, r30
    beq lbl_fn_801DAEE4_000001D0
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
lbl_fn_801DAEE4_000001D0:
    addi r30, r30, 0x18
lbl_fn_801DAEE4_000001D4:
    cmplw r30, r28
    bne lbl_fn_801DAEE4_00000084
    b lbl_fn_801DAEE4_00000BBC
lbl_fn_801DAEE4_000001E0:
    lwz r4, lbl_8087DA74
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
    blt lbl_fn_801DAEE4_00000220
    li r8, -0x4
lbl_fn_801DAEE4_00000220:
    mulhw r4, r28, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087DA74
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
    blt lbl_fn_801DAEE4_00000270
    li r8, -0x4
    stw r8, lbl_8087DA74
lbl_fn_801DAEE4_00000270:
    lwz r5, 0x0(r25)
    mr r6, r26
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r29, r5, 0x18
    stw r29, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801DBB94
    lwz r23, 0x0(r24)
    mr r30, r29
    b lbl_fn_801DAEE4_000002A8
lbl_fn_801DAEE4_000002A4:
    addi r23, r23, 0x18
lbl_fn_801DAEE4_000002A8:
    lwz r3, 0x8(r23)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DAEE4_00000300
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000002E8
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DAEE4_000002E8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DAEE4_00000360
lbl_fn_801DAEE4_000002E8:
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000002F8
    li r0, 0x1
    b lbl_fn_801DAEE4_00000360
lbl_fn_801DAEE4_000002F8:
    li r0, 0x0
    b lbl_fn_801DAEE4_00000360
lbl_fn_801DAEE4_00000300:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DAEE4_00000354
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
    b lbl_fn_801DAEE4_00000360
lbl_fn_801DAEE4_00000354:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DAEE4_00000360:
    cmpwi r0, 0x0
    bne lbl_fn_801DAEE4_000002A4
lbl_fn_801DAEE4_00000368:
    subi r30, r30, 0x18
    cmplw r23, r30
    beq lbl_fn_801DAEE4_00000434
    lwz r3, 0x8(r30)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DAEE4_000003CC
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000003B4
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DAEE4_000003B4
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DAEE4_0000042C
lbl_fn_801DAEE4_000003B4:
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000003C4
    li r0, 0x1
    b lbl_fn_801DAEE4_0000042C
lbl_fn_801DAEE4_000003C4:
    li r0, 0x0
    b lbl_fn_801DAEE4_0000042C
lbl_fn_801DAEE4_000003CC:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DAEE4_00000420
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
    b lbl_fn_801DAEE4_0000042C
lbl_fn_801DAEE4_00000420:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DAEE4_0000042C:
    cmpwi r0, 0x0
    beq lbl_fn_801DAEE4_00000368
lbl_fn_801DAEE4_00000434:
    cmplw r23, r30
    bge lbl_fn_801DAEE4_000006A8
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
    b lbl_fn_801DAEE4_000004A8
lbl_fn_801DAEE4_000004A4:
    addi r23, r23, 0x18
lbl_fn_801DAEE4_000004A8:
    lwz r3, 0x8(r23)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DAEE4_00000500
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000004E8
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DAEE4_000004E8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DAEE4_00000560
lbl_fn_801DAEE4_000004E8:
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000004F8
    li r0, 0x1
    b lbl_fn_801DAEE4_00000560
lbl_fn_801DAEE4_000004F8:
    li r0, 0x0
    b lbl_fn_801DAEE4_00000560
lbl_fn_801DAEE4_00000500:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DAEE4_00000554
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
    b lbl_fn_801DAEE4_00000560
lbl_fn_801DAEE4_00000554:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DAEE4_00000560:
    cmpwi r0, 0x0
    bne lbl_fn_801DAEE4_000004A4
lbl_fn_801DAEE4_00000568:
    subi r30, r30, 0x18
    lwz r0, 0x8(r29)
    lwz r3, 0x8(r30)
    cmpw r3, r0
    bne lbl_fn_801DAEE4_000005C4
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000005AC
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DAEE4_000005AC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DAEE4_00000624
lbl_fn_801DAEE4_000005AC:
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_000005BC
    li r0, 0x1
    b lbl_fn_801DAEE4_00000624
lbl_fn_801DAEE4_000005BC:
    li r0, 0x0
    b lbl_fn_801DAEE4_00000624
lbl_fn_801DAEE4_000005C4:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DAEE4_00000618
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
    b lbl_fn_801DAEE4_00000624
lbl_fn_801DAEE4_00000618:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DAEE4_00000624:
    cmpwi r0, 0x0
    beq lbl_fn_801DAEE4_00000568
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801DAEE4_000006A8
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
    b lbl_fn_801DAEE4_000004A8
lbl_fn_801DAEE4_000006A8:
    lwz r6, 0x0(r24)
    cmplw r23, r6
    bne lbl_fn_801DAEE4_00000B44
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
    bne lbl_fn_801DAEE4_0000077C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_00000764
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801DAEE4_00000764
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DAEE4_000007DC
lbl_fn_801DAEE4_00000764:
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_00000774
    li r0, 0x1
    b lbl_fn_801DAEE4_000007DC
lbl_fn_801DAEE4_00000774:
    li r0, 0x0
    b lbl_fn_801DAEE4_000007DC
lbl_fn_801DAEE4_0000077C:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DAEE4_000007D0
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
    b lbl_fn_801DAEE4_000007DC
lbl_fn_801DAEE4_000007D0:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DAEE4_000007DC:
    cmpwi r0, 0x0
    bne lbl_fn_801DAEE4_00000924
    b lbl_fn_801DAEE4_000007EC
lbl_fn_801DAEE4_000007E8:
    addi r23, r23, 0x18
lbl_fn_801DAEE4_000007EC:
    lwz r0, 0x0(r25)
    cmplw r23, r0
    beq lbl_fn_801DAEE4_000008BC
    lwz r5, 0x0(r24)
    lwz r0, 0x8(r23)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DAEE4_00000854
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_0000083C
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801DAEE4_0000083C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DAEE4_000008B4
lbl_fn_801DAEE4_0000083C:
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_0000084C
    li r0, 0x1
    b lbl_fn_801DAEE4_000008B4
lbl_fn_801DAEE4_0000084C:
    li r0, 0x0
    b lbl_fn_801DAEE4_000008B4
lbl_fn_801DAEE4_00000854:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DAEE4_000008A8
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
    b lbl_fn_801DAEE4_000008B4
lbl_fn_801DAEE4_000008A8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DAEE4_000008B4:
    cmpwi r0, 0x0
    beq lbl_fn_801DAEE4_000007E8
lbl_fn_801DAEE4_000008BC:
    cmplw r23, r30
    bge lbl_fn_801DAEE4_00000924
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
lbl_fn_801DAEE4_00000924:
    cmplw r23, r30
    bge lbl_fn_801DAEE4_00000B3C
    b lbl_fn_801DAEE4_00000934
lbl_fn_801DAEE4_00000930:
    addi r23, r23, 0x18
lbl_fn_801DAEE4_00000934:
    lwz r5, 0x0(r24)
    lwz r0, 0x8(r23)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DAEE4_00000990
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_00000978
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801DAEE4_00000978
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DAEE4_000009F0
lbl_fn_801DAEE4_00000978:
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_00000988
    li r0, 0x1
    b lbl_fn_801DAEE4_000009F0
lbl_fn_801DAEE4_00000988:
    li r0, 0x0
    b lbl_fn_801DAEE4_000009F0
lbl_fn_801DAEE4_00000990:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DAEE4_000009E4
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
    b lbl_fn_801DAEE4_000009F0
lbl_fn_801DAEE4_000009E4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DAEE4_000009F0:
    cmpwi r0, 0x0
    beq lbl_fn_801DAEE4_00000930
lbl_fn_801DAEE4_000009F8:
    lwz r5, 0x0(r24)
    subi r30, r30, 0x18
    lwz r0, 0x8(r30)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DAEE4_00000A58
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_00000A40
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801DAEE4_00000A40
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DAEE4_00000AB8
lbl_fn_801DAEE4_00000A40:
    cmpwi r0, 0x0
    blt lbl_fn_801DAEE4_00000A50
    li r0, 0x1
    b lbl_fn_801DAEE4_00000AB8
lbl_fn_801DAEE4_00000A50:
    li r0, 0x0
    b lbl_fn_801DAEE4_00000AB8
lbl_fn_801DAEE4_00000A58:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DAEE4_00000AAC
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
    b lbl_fn_801DAEE4_00000AB8
lbl_fn_801DAEE4_00000AAC:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DAEE4_00000AB8:
    cmpwi r0, 0x0
    bne lbl_fn_801DAEE4_000009F8
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801DAEE4_00000B3C
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
    b lbl_fn_801DAEE4_00000934
lbl_fn_801DAEE4_00000B3C:
    stw r23, 0x0(r24)
    b lbl_fn_801DAEE4_0000003C
lbl_fn_801DAEE4_00000B44:
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
    bge lbl_fn_801DAEE4_00000B9C
    stw r23, 0x10(r1)
    mr r5, r26
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_801DAEE4
    stw r23, 0x0(r24)
    b lbl_fn_801DAEE4_0000003C
lbl_fn_801DAEE4_00000B9C:
    stw r3, 0x8(r1)
    mr r5, r26
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r23, 0xc(r1)
    bl fn_801DAEE4
    stw r23, 0x0(r25)
    b lbl_fn_801DAEE4_0000003C
lbl_fn_801DAEE4_00000BBC:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801DBAC0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_801DBAD8(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r3, 0x0(r4)
    subf r0, r3, r5
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_801DBAF8(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    lwz r3, 0x0(r4)
    xor r0, r3, r0
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_801DBB14(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r6, 0x4(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r7, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lwz r8, 0xc(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    lwz r9, 0x10(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r3)
    lwz r10, 0x14(r3)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r3)
    stw r5, 0x0(r4)
    stw r6, 0x4(r4)
    stw r7, 0x8(r4)
    stw r8, 0xc(r4)
    stw r9, 0x10(r4)
    stw r10, 0x14(r4)
    blr
}

asm void fn_801DBB78(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    subf r3, r5, r0
    subf r0, r0, r5
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_801DBB94(void)
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
    bne lbl_fn_801DBB94_00000D30
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    blt lbl_fn_801DBB94_00000D18
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    blt lbl_fn_801DBB94_00000D18
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DBB94_00000D94
lbl_fn_801DBB94_00000D18:
    cmpwi r0, 0x0
    blt lbl_fn_801DBB94_00000D28
    li r0, 0x1
    b lbl_fn_801DBB94_00000D94
lbl_fn_801DBB94_00000D28:
    li r0, 0x0
    b lbl_fn_801DBB94_00000D94
lbl_fn_801DBB94_00000D30:
    lwz r4, 0x0(r31)
    lwz r3, 0x0(r6)
    lfs f1, 0x8(r4)
    lfs f2, 0x8(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801DBB94_00000D88
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
    b lbl_fn_801DBB94_00000D94
lbl_fn_801DBB94_00000D88:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DBB94_00000D94:
    lwz r5, 0x0(r29)
    cntlzw r0, r0
    lwz r26, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x8(r5)
    lwz r0, 0x8(r26)
    cmpw r3, r0
    bne lbl_fn_801DBB94_00000DFC
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DBB94_00000DE4
    lwz r4, 0xc(r26)
    cmpwi r4, 0x0
    blt lbl_fn_801DBB94_00000DE4
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DBB94_00000E60
lbl_fn_801DBB94_00000DE4:
    cmpwi r0, 0x0
    blt lbl_fn_801DBB94_00000DF4
    li r0, 0x1
    b lbl_fn_801DBB94_00000E60
lbl_fn_801DBB94_00000DF4:
    li r0, 0x0
    b lbl_fn_801DBB94_00000E60
lbl_fn_801DBB94_00000DFC:
    lwz r4, 0x0(r26)
    lwz r3, 0x0(r5)
    lfs f1, 0x8(r4)
    lfs f2, 0x8(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801DBB94_00000E54
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
    b lbl_fn_801DBB94_00000E60
lbl_fn_801DBB94_00000E54:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DBB94_00000E60:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_801DBB94_00000E78
    cmpwi r0, 0x0
    bne lbl_fn_801DBB94_00001104
lbl_fn_801DBB94_00000E78:
    cmpwi r31, 0x0
    bne lbl_fn_801DBB94_00000EF4
    cmpwi r0, 0x0
    bne lbl_fn_801DBB94_00000EF4
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
    b lbl_fn_801DBB94_00001104
lbl_fn_801DBB94_00000EF4:
    lwz r26, 0x0(r28)
    lwz r5, 0x0(r29)
    lwz r0, 0x8(r26)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DBB94_00000F54
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DBB94_00000F3C
    lwz r4, 0xc(r26)
    cmpwi r4, 0x0
    blt lbl_fn_801DBB94_00000F3C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DBB94_00000FB8
lbl_fn_801DBB94_00000F3C:
    cmpwi r0, 0x0
    blt lbl_fn_801DBB94_00000F4C
    li r0, 0x1
    b lbl_fn_801DBB94_00000FB8
lbl_fn_801DBB94_00000F4C:
    li r0, 0x0
    b lbl_fn_801DBB94_00000FB8
lbl_fn_801DBB94_00000F54:
    lwz r4, 0x0(r26)
    lwz r3, 0x0(r5)
    lfs f1, 0x8(r4)
    lfs f2, 0x8(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801DBB94_00000FAC
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
    b lbl_fn_801DBB94_00000FB8
lbl_fn_801DBB94_00000FAC:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DBB94_00000FB8:
    cmpwi r0, 0x0
    beq lbl_fn_801DBB94_00001028
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
lbl_fn_801DBB94_00001028:
    cmpwi r31, 0x0
    beq lbl_fn_801DBB94_0000109C
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
    b lbl_fn_801DBB94_00001104
lbl_fn_801DBB94_0000109C:
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
lbl_fn_801DBB94_00001104:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801DC000(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    lis r4, 0x2aab
    lwz r0, 0x0(r3)
    subi r3, r4, 0x5555
    subf r0, r5, r0
    mulhw r0, r3, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r3, r0, r3
    blr
}

asm void fn_801DC028(void)
{
    nofralloc
    mulli r0, r4, 0x18
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_801DC038(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_801DC044(void)
{
    nofralloc
    neg r0, r4
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    blr
}

asm void fn_801DC058(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_801DC064(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    addi r0, r4, 0x18
    stw r0, 0x0(r3)
    blr
}

asm void fn_801DC074(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_801DC07C(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    subi r0, r4, 0x18
    stw r0, 0x0(r3)
    blr
}

asm void fn_801DC08C(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    blr
}

asm void fn_801DC09C(void)
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
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_801DC09C_00001238
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r7, 0x0(r3)
    mulli r5, r0, 0x18
    lwz r3, 0x0(r4)
    lwz r0, 0x4(r4)
    lwz r6, 0x8(r4)
    add r7, r7, r5
    lwz r5, 0xc(r4)
    stw r3, 0x0(r7)
    lwz r3, 0x10(r4)
    stw r0, 0x4(r7)
    lwz r0, 0x14(r4)
    stw r6, 0x8(r7)
    stw r5, 0xc(r7)
    stw r3, 0x10(r7)
    stw r0, 0x14(r7)
    b lbl_fn_801DC09C_0000150C
lbl_fn_801DC09C_00001238:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_801DC09C_0000126C
    lis r3, __files@ha
    lis r4, lbl_8073CAA8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073CAA8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801DC09C_0000126C:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0xaab
    stw r5, 0x14(r1)
    subi r0, r3, 0x5556
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_801DC09C_000012D0
    lis r3, __files@ha
    lis r4, lbl_8073CAA8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073CAA8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801DC09C_000012D0:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r31, r0
    bge lbl_fn_801DC09C_00001320
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_801DC09C_00001314
    addi r3, r1, 0x8
lbl_fn_801DC09C_00001314:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_801DC09C_00001364
lbl_fn_801DC09C_00001320:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r31, r0
    bge lbl_fn_801DC09C_0000135C
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_801DC09C_00001350
    addi r3, r1, 0x8
lbl_fn_801DC09C_00001350:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_801DC09C_00001364
lbl_fn_801DC09C_0000135C:
    lis r3, 0xaab
    subi r28, r3, 0x5556
lbl_fn_801DC09C_00001364:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r28, r0
    ble lbl_fn_801DC09C_00001394
    lis r3, __files@ha
    lis r4, lbl_8073CAA8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073CAA8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801DC09C_00001394:
    mulli r3, r28, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_801DC09C_000013C8
    lis r3, __files@ha
    lis r4, lbl_80782860@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80782860@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801DC09C_000013C8:
    lwz r3, 0x18(r1)
    li r0, 0x18
    stw r31, 0x14(r1)
    mulli r9, r3, 0x18
    lwz r8, 0x0(r30)
    stw r28, 0x1c(r1)
    lwz r7, 0x4(r30)
    lwz r3, 0x4(r29)
    stw r3, 0x24(r1)
    mulli r3, r3, 0x18
    lwz r6, 0x8(r30)
    lwz r5, 0xc(r30)
    lwz r4, 0x10(r30)
    add r3, r31, r3
    add r9, r9, r3
    lwz r3, 0x14(r30)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r3, 0x14(r9)
    lwz r4, 0x18(r1)
    lwz r3, 0x24(r1)
    addi r4, r4, 0x1
    stw r4, 0x18(r1)
    mulli r3, r3, 0x18
    lwz r4, 0x14(r1)
    lwz r5, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r5, r5, 0x18
    add r6, r4, r3
    add r5, r7, r5
    addi r3, r5, 0x17
    subf r3, r7, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    ble lbl_fn_801DC09C_000014BC
lbl_fn_801DC09C_00001464:
    subic. r6, r6, 0x18
    subi r5, r5, 0x18
    beq lbl_fn_801DC09C_000014A0
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r6)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r6)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r6)
    lwz r0, 0x14(r5)
    stw r0, 0x14(r6)
lbl_fn_801DC09C_000014A0:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_801DC09C_00001464
lbl_fn_801DC09C_000014BC:
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x14
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_801DC09C_0000150C
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801DC09C_0000150C
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_801DC09C_0000150C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801DC410(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_801DC418(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    blr
}

asm void fn_801DC42C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x44(r1)
    stmw r23, 0x1c(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    beq lbl_fn_801DC42C_000019CC
    lwz r7, 0x8(r6)
    cmpwi r7, 0x0
    blt lbl_fn_801DC42C_000019CC
    lwz r5, 0x0(r6)
    slwi r0, r4, 6
    lwz r4, lbl_8087F4F0
    li r31, 0x0
    lwz r5, 0x78(r5)
    addis r4, r4, 0x1
    cmpwi r5, 0x1
    add r4, r4, r0
    subi r4, r4, 0x7d70
    beq lbl_fn_801DC42C_000015B4
    cmpwi r5, 0x3
    bne lbl_fn_801DC42C_000015B8
lbl_fn_801DC42C_000015B4:
    li r31, 0x1
lbl_fn_801DC42C_000015B8:
    lwz r0, 0x1e8(r3)
    cmpwi r0, 0x2
    bne lbl_fn_801DC42C_000015DC
    slwi r0, r31, 3
    lwzx r0, r4, r0
    cmpw r7, r0
    bne lbl_fn_801DC42C_000015DC
    li r3, 0x0
    b lbl_fn_801DC42C_000019D0
lbl_fn_801DC42C_000015DC:
    cmpwi r31, 0x0
    li r23, 0x0
    bne lbl_fn_801DC42C_00001604
    lwz r4, 0x0(r4)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801DC42C_00001604
    li r23, 0x1
lbl_fn_801DC42C_00001604:
    cmpwi r31, 0x0
    li r24, 0x0
    bne lbl_fn_801DC42C_0000162C
    lwz r4, 0x8(r28)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801DC42C_0000162C
    li r24, 0x1
lbl_fn_801DC42C_0000162C:
    lwz r6, 0x8(r28)
    mr r3, r25
    mr r4, r26
    mr r5, r31
    bl fn_801DC8C8
    cmpwi r31, 0x0
    bne lbl_fn_801DC42C_00001660
    lwz r6, 0x8(r28)
    mr r3, r25
    mr r4, r26
    li r5, 0x2
    bl fn_801DC8C8
    b lbl_fn_801DC42C_0000167C
lbl_fn_801DC42C_00001660:
    cmpwi r31, 0x1
    bne lbl_fn_801DC42C_0000167C
    lwz r6, 0x8(r28)
    mr r3, r25
    mr r4, r26
    li r5, 0x3
    bl fn_801DC8C8
lbl_fn_801DC42C_0000167C:
    cmpwi r24, 0x0
    beq lbl_fn_801DC42C_000016AC
    lwz r6, 0x8(r28)
    mr r3, r25
    mr r4, r26
    li r5, 0x1
    bl fn_801DC8C8
    lwz r6, 0x8(r28)
    mr r3, r25
    mr r4, r26
    li r5, 0x3
    bl fn_801DC8C8
lbl_fn_801DC42C_000016AC:
    cmpwi r29, 0x0
    beq lbl_fn_801DC42C_000016F0
    mr r3, r25
    mr r4, r26
    mr r5, r31
    bl fn_801CFAA8
    lwz r29, lbl_8087F4F0
    bl fn_8020EF80
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_804439FC
lbl_fn_801DC42C_000016F0:
    cmpwi r23, 0x0
    bne lbl_fn_801DC42C_0000173C
    cmpwi r24, 0x0
    beq lbl_fn_801DC42C_0000173C
    mr r3, r25
    mr r4, r26
    li r5, 0x1
    bl fn_801CFAA8
    lwz r29, lbl_8087F4F0
    bl fn_8020EF80
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_804439FC
lbl_fn_801DC42C_0000173C:
    slwi r29, r26, 2
    lwz r3, lbl_8087F4F0
    lwz r5, 0x8(r28)
    mr r4, r31
    mr r7, r26
    add r6, r31, r29
    bl fn_8044D0DC
    cmpwi r31, 0x0
    bne lbl_fn_801DC42C_0000177C
    lwz r3, lbl_8087F4F0
    mr r7, r26
    lwz r5, 0x8(r28)
    addi r6, r29, 0x2
    li r4, 0x2
    bl fn_8044D0DC
    b lbl_fn_801DC42C_0000179C
lbl_fn_801DC42C_0000177C:
    cmpwi r31, 0x1
    bne lbl_fn_801DC42C_0000179C
    lwz r3, lbl_8087F4F0
    mr r7, r26
    lwz r5, 0x8(r28)
    addi r6, r29, 0x3
    li r4, 0x3
    bl fn_8044D0DC
lbl_fn_801DC42C_0000179C:
    cmpwi r24, 0x0
    beq lbl_fn_801DC42C_000017D4
    lwz r3, lbl_8087F4F0
    mr r7, r26
    lwz r5, 0x8(r28)
    addi r6, r29, 0x1
    li r4, 0x1
    bl fn_8044D0DC
    lwz r3, lbl_8087F4F0
    mr r7, r26
    lwz r5, 0x8(r28)
    addi r6, r29, 0x3
    li r4, 0x3
    bl fn_8044D0DC
lbl_fn_801DC42C_000017D4:
    cmpwi r30, 0x0
    beq lbl_fn_801DC42C_00001800
    lwz r4, 0x8(r28)
    mr r3, r31
    bl fn_8020ED84
    lwz r29, lbl_8087F4F0
    bl fn_8020EF80
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_8044441C
lbl_fn_801DC42C_00001800:
    mulli r0, r26, 0x43c
    lwz r3, lbl_8087F4F0
    cmpwi r24, 0x0
    add r3, r3, r0
    addi r29, r3, 0x64ec
    beq lbl_fn_801DC42C_00001820
    li r3, 0x0
    b lbl_fn_801DC42C_0000182C
lbl_fn_801DC42C_00001820:
    mr r3, r29
    mr r4, r31
    bl fn_801347C8
lbl_fn_801DC42C_0000182C:
    li r0, 0xe
    stw r0, 0x8(r1)
    mr r10, r3
    mr r3, r25
    lwz r7, 0x8(r28)
    mr r4, r26
    mr r5, r27
    mr r6, r31
    li r8, -0x1
    li r9, 0x0
    bl fn_801CEA98
    cmpwi r31, 0x0
    bne lbl_fn_801DC42C_000018AC
    cmpwi r24, 0x0
    beq lbl_fn_801DC42C_00001870
    li r3, 0x0
    b lbl_fn_801DC42C_0000187C
lbl_fn_801DC42C_00001870:
    mr r3, r29
    li r4, 0x2
    bl fn_801347C8
lbl_fn_801DC42C_0000187C:
    li r0, 0xe
    stw r0, 0x8(r1)
    mr r10, r3
    mr r3, r25
    lwz r7, 0x8(r28)
    mr r4, r26
    mr r5, r27
    li r6, 0x2
    li r8, -0x1
    li r9, 0x0
    bl fn_801CEA98
    b lbl_fn_801DC42C_000018FC
lbl_fn_801DC42C_000018AC:
    cmpwi r31, 0x1
    bne lbl_fn_801DC42C_000018FC
    cmpwi r24, 0x0
    beq lbl_fn_801DC42C_000018C4
    li r3, 0x0
    b lbl_fn_801DC42C_000018D0
lbl_fn_801DC42C_000018C4:
    mr r3, r29
    li r4, 0x3
    bl fn_801347C8
lbl_fn_801DC42C_000018D0:
    li r0, 0xe
    stw r0, 0x8(r1)
    mr r10, r3
    mr r3, r25
    lwz r7, 0x8(r28)
    mr r4, r26
    mr r5, r27
    li r6, 0x3
    li r8, -0x1
    li r9, 0x0
    bl fn_801CEA98
lbl_fn_801DC42C_000018FC:
    cmpwi r24, 0x0
    beq lbl_fn_801DC42C_00001978
    li r0, 0xe
    stw r0, 0x8(r1)
    mr r3, r25
    mr r4, r26
    lwz r7, 0x8(r28)
    mr r5, r27
    li r6, 0x1
    li r8, -0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_801CEA98
    cmpwi r24, 0x0
    beq lbl_fn_801DC42C_00001940
    li r3, 0x0
    b lbl_fn_801DC42C_0000194C
lbl_fn_801DC42C_00001940:
    mr r3, r29
    li r4, 0x3
    bl fn_801347C8
lbl_fn_801DC42C_0000194C:
    li r0, 0xe
    stw r0, 0x8(r1)
    mr r10, r3
    mr r3, r25
    lwz r7, 0x8(r28)
    mr r4, r26
    mr r5, r27
    li r6, 0x3
    li r8, -0x1
    li r9, 0x0
    bl fn_801CEA98
lbl_fn_801DC42C_00001978:
    cmpwi r23, 0x0
    beq lbl_fn_801DC42C_000019C4
    cmpwi r24, 0x0
    bne lbl_fn_801DC42C_000019C4
    mr r3, r25
    mr r4, r26
    bl fn_801DD26C
    mr r3, r25
    mr r4, r26
    li r5, 0x1
    li r6, 0x0
    bl fn_801DCE88
    mr r6, r3
    mr r3, r25
    mr r4, r26
    mr r5, r27
    li r7, 0x0
    li r8, 0x1
    bl fn_801DC42C
lbl_fn_801DC42C_000019C4:
    li r3, 0x1
    b lbl_fn_801DC42C_000019D0
lbl_fn_801DC42C_000019CC:
    li r3, 0x0
lbl_fn_801DC42C_000019D0:
    lmw r23, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
