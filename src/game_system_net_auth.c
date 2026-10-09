#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void fn_80092814(void);
extern void fn_800D246C(void);
extern void fn_8012D8B8(void);
extern void fn_80145334(void);
extern void fn_80154654(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80176ACC(void);
extern void fn_801781B0(void);
extern void fn_80395848(void);
extern void fn_80396F44(void);
extern void fn_80399148(void);
extern void fn_80399734(void);
extern void fn_8039AB10(void);
extern void fn_8039AF50(void);
extern void fn_8039B2BC(void);
extern void fn_8039B7B0(void);
extern void fn_8039C7F0(void);
extern void fn_8039CF8C(void);
extern void fn_803AB428(void);
extern void fn_803AD750(void);
extern void fn_803ADC90(void);
extern void fn_803AE1D4(void);
extern void fn_803AED54(void);
extern void fn_803AF0FC(void);
extern void fn_803AF49C(void);
extern void fn_803AF83C(void);
extern void fn_803B0808(void);
extern void fn_803B17C4(void);
extern void fn_803EE45C(void);
extern void fn_8047F580(void);
extern void fn_80695B00(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_8074F8CC[];
extern u8 lbl_80766768[];
extern u8 lbl_8078A80C[];

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F450;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;
extern u32 lbl_80885B18;

/* Function declarations */
void fn_803972A8(void);
void fn_80397BEC(void);
void fn_80398530(void);
void fn_80398590(void);
void fn_80398704(void);

asm void fn_803972A8(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_14
    lfs f31, lbl_80885B10
    mr r15, r3
    stw r7, 0x8(r1)
    mr r14, r4
    mr r16, r5
    mr r17, r6
    stw r8, 0xc(r1)
    li r18, 0x0
    li r31, 0x0
    li r30, 0x0
    stw r9, 0x10(r1)
    li r29, 0x0
    lis r28, 0x68dc
    stw r10, 0x14(r1)
    b lbl_fn_803972A8_00000918
lbl_fn_803972A8_00000058:
    lwz r0, 0x10(r1)
    lwz r3, 0x4(r14)
    cmpwi r0, 0x0
    add r21, r3, r31
    beq lbl_fn_803972A8_00000310
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_803972A8_00000310
    lwz r0, 0x12c(r21)
    addi r27, r15, 0x80
    li r22, 0x0
    li r20, 0x0
    extrwi r0, r0, 1, 20
    xori r26, r0, 0x1
    b lbl_fn_803972A8_000002E4
lbl_fn_803972A8_00000094:
    lwz r3, 0x144(r21)
    addi r4, r15, 0x80
    lwz r5, 0x80(r15)
    lwzx r6, r3, r20
    b lbl_fn_803972A8_000000C4
lbl_fn_803972A8_000000A8:
    lwz r0, 0xc(r5)
    cmpw r0, r6
    blt lbl_fn_803972A8_000000C0
    mr r4, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803972A8_000000C4
lbl_fn_803972A8_000000C0:
    lwz r5, 0x4(r5)
lbl_fn_803972A8_000000C4:
    cmpwi r5, 0x0
    bne lbl_fn_803972A8_000000A8
    cmplw r4, r27
    beq lbl_fn_803972A8_000000E0
    lwz r0, 0xc(r4)
    cmpw r6, r0
    bge lbl_fn_803972A8_000000E4
lbl_fn_803972A8_000000E0:
    addi r4, r15, 0x80
lbl_fn_803972A8_000000E4:
    cmplw r4, r27
    beq lbl_fn_803972A8_00000118
    subi r3, r28, 0x7453
    lwz r0, 0x10(r4)
    mulhw r3, r3, r6
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r15, r3
    lwz r3, 0x64(r3)
    add r23, r3, r0
    b lbl_fn_803972A8_0000011C
lbl_fn_803972A8_00000118:
    li r23, 0x0
lbl_fn_803972A8_0000011C:
    cmpwi r23, 0x0
    beq lbl_fn_803972A8_000002DC
    cmpwi r26, 0x0
    beq lbl_fn_803972A8_00000190
    lwz r7, 0x4(r23)
    li r5, 0x1
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r7, 0x0
    lwz r4, 0x10d0(r3)
    bne lbl_fn_803972A8_00000158
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_803972A8_00000158
    li r6, 0x1
lbl_fn_803972A8_00000158:
    cmpwi r6, 0x0
    bne lbl_fn_803972A8_00000188
    cmpw r4, r7
    li r3, 0x0
    blt lbl_fn_803972A8_0000017C
    lwz r0, 0x8(r23)
    cmpw r4, r0
    bgt lbl_fn_803972A8_0000017C
    li r3, 0x1
lbl_fn_803972A8_0000017C:
    cmpwi r3, 0x0
    bne lbl_fn_803972A8_00000188
    li r5, 0x0
lbl_fn_803972A8_00000188:
    cmpwi r5, 0x0
    bne lbl_fn_803972A8_000002D4
lbl_fn_803972A8_00000190:
    cmpwi r26, 0x0
    bne lbl_fn_803972A8_000002DC
    cmpwi r23, 0x0
    li r25, 0x0
    beq lbl_fn_803972A8_000002CC
    lwz r7, 0x4(r23)
    li r5, 0x1
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r7, 0x0
    lwz r4, 0x10d0(r3)
    bne lbl_fn_803972A8_000001D0
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_803972A8_000001D0
    li r6, 0x1
lbl_fn_803972A8_000001D0:
    cmpwi r6, 0x0
    bne lbl_fn_803972A8_00000200
    cmpw r4, r7
    li r3, 0x0
    blt lbl_fn_803972A8_000001F4
    lwz r0, 0x8(r23)
    cmpw r4, r0
    bgt lbl_fn_803972A8_000001F4
    li r3, 0x1
lbl_fn_803972A8_000001F4:
    cmpwi r3, 0x0
    bne lbl_fn_803972A8_00000200
    li r5, 0x0
lbl_fn_803972A8_00000200:
    cmpwi r5, 0x0
    beq lbl_fn_803972A8_000002CC
    addi r19, r23, 0x10
    li r25, 0x1
    li r24, 0x0
    b lbl_fn_803972A8_000002C0
lbl_fn_803972A8_00000218:
    lwz r4, 0x0(r19)
    cmpwi r4, 0x1
    bne lbl_fn_803972A8_000002B8
    cmpwi r4, 0x0
    lwz r3, 0x0(r23)
    bge lbl_fn_803972A8_00000290
    lwz r4, 0x13c(r15)
    addi r5, r15, 0x13c
    b lbl_fn_803972A8_00000258
lbl_fn_803972A8_0000023C:
    lwz r0, 0xc(r4)
    cmpw r0, r3
    blt lbl_fn_803972A8_00000254
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_803972A8_00000258
lbl_fn_803972A8_00000254:
    lwz r4, 0x4(r4)
lbl_fn_803972A8_00000258:
    cmpwi r4, 0x0
    bne lbl_fn_803972A8_0000023C
    addi r0, r15, 0x13c
    cmplw r5, r0
    beq lbl_fn_803972A8_00000278
    lwz r0, 0xc(r5)
    cmpw r3, r0
    bge lbl_fn_803972A8_0000027C
lbl_fn_803972A8_00000278:
    addi r5, r15, 0x13c
lbl_fn_803972A8_0000027C:
    addi r0, r15, 0x13c
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_803972A8_000002A8
lbl_fn_803972A8_00000290:
    lwz r5, 0x4(r19)
    mr r3, r15
    lwz r6, 0x10(r19)
    lwz r7, 0x8(r19)
    lwz r8, 0xc(r19)
    bl fn_8039C7F0
lbl_fn_803972A8_000002A8:
    cmpwi r3, 0x0
    bne lbl_fn_803972A8_000002B8
    li r25, 0x0
    b lbl_fn_803972A8_000002CC
lbl_fn_803972A8_000002B8:
    addi r19, r19, 0x14
    addi r24, r24, 0x1
lbl_fn_803972A8_000002C0:
    lwz r0, 0xb0(r23)
    cmpw r24, r0
    blt lbl_fn_803972A8_00000218
lbl_fn_803972A8_000002CC:
    cmpwi r25, 0x0
    beq lbl_fn_803972A8_000002DC
lbl_fn_803972A8_000002D4:
    li r0, 0x1
    b lbl_fn_803972A8_000002F4
lbl_fn_803972A8_000002DC:
    addi r20, r20, 0x4
    addi r22, r22, 0x1
lbl_fn_803972A8_000002E4:
    lwz r0, 0x140(r21)
    cmplw r22, r0
    blt lbl_fn_803972A8_00000094
    li r0, 0x0
lbl_fn_803972A8_000002F4:
    cmpwi r0, 0x0
    bne lbl_fn_803972A8_00000310
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    ori r0, r0, 0x10
    stw r0, 0x4(r3)
lbl_fn_803972A8_00000310:
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_803972A8_00000908
    mr r3, r15
    mr r4, r21
    bl fn_80396F44
    lwz r4, 0x8(r1)
    mr r19, r3
    lwz r22, 0x48(r4)
    b lbl_fn_803972A8_00000358
lbl_fn_803972A8_00000344:
    lwz r4, 0x0(r21)
    lwz r0, 0x58(r22)
    cmpw r4, r0
    beq lbl_fn_803972A8_00000360
    lwz r22, 0x14ac(r22)
lbl_fn_803972A8_00000358:
    cmpwi r22, 0x0
    bne lbl_fn_803972A8_00000344
lbl_fn_803972A8_00000360:
    cmpwi r3, 0x0
    blt lbl_fn_803972A8_00000400
    lwz r4, 0x144(r21)
    slwi r0, r3, 2
    lwz r6, 0x80(r15)
    addi r7, r15, 0x80
    lwzx r5, r4, r0
    b lbl_fn_803972A8_0000039C
lbl_fn_803972A8_00000380:
    lwz r0, 0xc(r6)
    cmpw r0, r5
    blt lbl_fn_803972A8_00000398
    mr r7, r6
    lwz r6, 0x0(r6)
    b lbl_fn_803972A8_0000039C
lbl_fn_803972A8_00000398:
    lwz r6, 0x4(r6)
lbl_fn_803972A8_0000039C:
    cmpwi r6, 0x0
    bne lbl_fn_803972A8_00000380
    addi r0, r15, 0x80
    cmplw r7, r0
    beq lbl_fn_803972A8_000003BC
    lwz r0, 0xc(r7)
    cmpw r5, r0
    bge lbl_fn_803972A8_000003C0
lbl_fn_803972A8_000003BC:
    addi r7, r15, 0x80
lbl_fn_803972A8_000003C0:
    addi r0, r15, 0x80
    cmplw r7, r0
    beq lbl_fn_803972A8_000003F8
    subi r4, r28, 0x7453
    lwz r0, 0x10(r7)
    mulhw r4, r4, r5
    srawi r4, r4, 12
    srwi r5, r4, 31
    add r4, r4, r5
    slwi r4, r4, 2
    add r4, r15, r4
    lwz r4, 0x64(r4)
    add r20, r4, r0
    b lbl_fn_803972A8_00000404
lbl_fn_803972A8_000003F8:
    li r20, 0x0
    b lbl_fn_803972A8_00000404
lbl_fn_803972A8_00000400:
    li r20, 0x0
lbl_fn_803972A8_00000404:
    lwz r0, 0x4(r16)
    add r4, r0, r29
    lwz r0, 0x4(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803972A8_00000524
    cmpwi r3, 0x0
    blt lbl_fn_803972A8_000004F4
    cmpwi r22, 0x0
    beq lbl_fn_803972A8_00000834
    lwz r0, 0x38(r22)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803972A8_00000834
    lwz r3, 0x88(r15)
    li r5, 0x0
    lwz r4, 0xc0(r20)
    li r6, 0x0
    lwz r0, 0x78(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803972A8_00000484
lbl_fn_803972A8_0000045C:
    lwz r7, 0x7c(r3)
    lwzx r0, r7, r6
    cmpw r4, r0
    bne lbl_fn_803972A8_00000478
    mulli r0, r5, 0x28
    add r3, r7, r0
    b lbl_fn_803972A8_00000488
lbl_fn_803972A8_00000478:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803972A8_0000045C
lbl_fn_803972A8_00000484:
    li r3, 0x0
lbl_fn_803972A8_00000488:
    cmpwi r3, 0x0
    beq lbl_fn_803972A8_000004C4
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f31
    lfs f0, 0x14(r3)
    addi r3, r1, 0x30
    stfs f31, 0x30(r1)
    stfs f0, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f31, 0x38(r1)
    stfs f2, 0x53c(r22)
lbl_fn_803972A8_000004C4:
    lwz r4, 0xc50(r22)
    mr r3, r22
    lwz r5, 0x24(r21)
    bl fn_80154654
    mr r3, r22
    bl fn_80176ACC
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    ori r0, r0, 0x2
    stw r0, 0x4(r3)
    b lbl_fn_803972A8_00000834
lbl_fn_803972A8_000004F4:
    cmpwi r22, 0x0
    beq lbl_fn_803972A8_00000834
    lwz r3, 0x38(r22)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803972A8_00000834
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803972A8_00000834
    mr r3, r22
    bl fn_801765D8
    b lbl_fn_803972A8_00000834
lbl_fn_803972A8_00000524:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    beq lbl_fn_803972A8_00000834
    cmpwi r22, 0x0
    bne lbl_fn_803972A8_00000558
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803972A8_00000558
    mr r4, r0
    lwz r5, 0x0(r21)
    lwz r0, 0x58(r4)
    cmpw r5, r0
    beq lbl_fn_803972A8_00000834
lbl_fn_803972A8_00000558:
    cmpwi r3, 0x0
    blt lbl_fn_803972A8_0000081C
    lwz r4, 0x48(r22)
    lwz r0, 0xc50(r22)
    cmpw r0, r4
    bne lbl_fn_803972A8_00000580
    lwz r3, 0x24(r21)
    lwz r0, 0xc54(r22)
    cmpw r3, r0
    beq lbl_fn_803972A8_00000594
lbl_fn_803972A8_00000580:
    lwz r5, 0x24(r21)
    cmpwi r5, 0x0
    beq lbl_fn_803972A8_00000594
    mr r3, r22
    bl fn_80154654
lbl_fn_803972A8_00000594:
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803972A8_00000834
    lwz r3, 0x88(r15)
    li r5, 0x0
    lwz r4, 0xc0(r20)
    li r6, 0x0
    lwz r0, 0x78(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803972A8_000005EC
lbl_fn_803972A8_000005C4:
    lwz r7, 0x7c(r3)
    lwzx r0, r7, r6
    cmpw r4, r0
    bne lbl_fn_803972A8_000005E0
    mulli r0, r5, 0x28
    add r3, r7, r0
    b lbl_fn_803972A8_000005F0
lbl_fn_803972A8_000005E0:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803972A8_000005C4
lbl_fn_803972A8_000005EC:
    li r3, 0x0
lbl_fn_803972A8_000005F0:
    cmpwi r3, 0x0
    beq lbl_fn_803972A8_00000630
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f31
    lfs f0, 0x14(r3)
    addi r3, r1, 0x24
    stfs f31, 0x24(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f31, 0x2c(r1)
    stfs f2, 0x53c(r22)
    b lbl_fn_803972A8_00000664
lbl_fn_803972A8_00000630:
    lfs f2, 0xc(r21)
    addi r3, r1, 0x18
    psq_l f1, 0x4(r21), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f31
    lfs f0, 0x14(r21)
    stfs f31, 0x18(r1)
    stfs f0, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f31, 0x20(r1)
    stfs f2, 0x53c(r22)
lbl_fn_803972A8_00000664:
    lwz r0, 0x48(r22)
    cmpwi r0, 0x2
    bne lbl_fn_803972A8_00000810
    lwz r0, 0x7e0(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803972A8_00000810
    lwz r3, 0x4(r16)
    li r23, 0x1
    lwzx r0, r3, r29
    cmpwi r0, 0x0
    blt lbl_fn_803972A8_00000798
    cmpwi r19, 0x0
    blt lbl_fn_803972A8_00000798
    lwz r3, 0x88(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803972A8_000006B0
    lwz r3, 0x64(r3)
    b lbl_fn_803972A8_000006B4
lbl_fn_803972A8_000006B0:
    li r3, 0x0
lbl_fn_803972A8_000006B4:
    cmpwi r3, 0x0
    beq lbl_fn_803972A8_00000798
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803972A8_00000798
    lwz r4, 0x4c(r3)
    cmpwi r4, 0x1
    bne lbl_fn_803972A8_000006E0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803972A8_00000794
lbl_fn_803972A8_000006E0:
    cmpwi r4, 0x3
    bne lbl_fn_803972A8_000006F4
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803972A8_00000794
lbl_fn_803972A8_000006F4:
    cmpwi r4, 0xc
    bne lbl_fn_803972A8_00000708
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803972A8_00000794
lbl_fn_803972A8_00000708:
    cmpwi r4, 0x16
    bne lbl_fn_803972A8_0000071C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803972A8_00000794
lbl_fn_803972A8_0000071C:
    cmpwi r4, 0x16
    bne lbl_fn_803972A8_00000730
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    beq lbl_fn_803972A8_00000794
lbl_fn_803972A8_00000730:
    cmpwi r4, 0x24
    bne lbl_fn_803972A8_00000744
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803972A8_00000794
lbl_fn_803972A8_00000744:
    cmpwi r4, 0x24
    bne lbl_fn_803972A8_00000758
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    beq lbl_fn_803972A8_00000794
lbl_fn_803972A8_00000758:
    cmpwi r4, 0x24
    bne lbl_fn_803972A8_0000076C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803972A8_00000794
lbl_fn_803972A8_0000076C:
    cmpwi r4, 0x24
    bne lbl_fn_803972A8_00000780
    lwz r0, 0x50(r3)
    cmpwi r0, 0x4
    beq lbl_fn_803972A8_00000794
lbl_fn_803972A8_00000780:
    cmpwi r4, 0x27
    bne lbl_fn_803972A8_00000798
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    bne lbl_fn_803972A8_00000798
lbl_fn_803972A8_00000794:
    li r23, 0x0
lbl_fn_803972A8_00000798:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_803972A8_000007B8
    mr r4, r22
    bl fn_803EE45C
    cmpwi r3, 0x0
    beq lbl_fn_803972A8_000007B8
    li r23, 0x0
lbl_fn_803972A8_000007B8:
    cmpwi r23, 0x0
    beq lbl_fn_803972A8_00000810
    addi r3, r22, 0x7d4
    bl fn_8012D8B8
    lwz r0, 0x954(r22)
    mr r3, r22
    stw r0, 0x9f8(r22)
    li r0, 0x0
    li r4, 0x0
    stw r0, 0x58c(r22)
    bl fn_800D246C
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_803972A8_000007FC
    lwz r0, 0x12a4(r22)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r22)
lbl_fn_803972A8_000007FC:
    lwz r0, 0x12a4(r22)
    mr r3, r22
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r22)
    bl fn_80145334
lbl_fn_803972A8_00000810:
    mr r3, r22
    bl fn_80176ACC
    b lbl_fn_803972A8_00000834
lbl_fn_803972A8_0000081C:
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803972A8_00000834
    mr r3, r22
    bl fn_801765D8
lbl_fn_803972A8_00000834:
    cmpwi r22, 0x0
    beq lbl_fn_803972A8_00000880
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803972A8_00000880
    cmpwi r20, 0x0
    beq lbl_fn_803972A8_00000880
    lwz r0, 0xb8(r20)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_803972A8_00000874
    lwz r0, 0x54c(r22)
    oris r0, r0, 0x40
    stw r0, 0x54c(r22)
    b lbl_fn_803972A8_00000880
lbl_fn_803972A8_00000874:
    lwz r0, 0x54c(r22)
    rlwinm r0, r0, 0, 10, 8
    stw r0, 0x54c(r22)
lbl_fn_803972A8_00000880:
    lwz r3, 0x4(r16)
    lwzx r0, r3, r29
    cmpw r19, r0
    beq lbl_fn_803972A8_000008B4
    add r3, r3, r29
    lwz r0, 0x4(r3)
    clrrwi r0, r0, 1
    stw r0, 0x4(r3)
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r3)
lbl_fn_803972A8_000008B4:
    lwz r0, 0x37c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803972A8_00000900
    lwz r0, 0x4(r17)
    add r3, r0, r30
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x4(r17)
    lwz r4, 0x0(r21)
    add r3, r0, r30
    stw r4, 0x8(r3)
    lwz r3, 0x4(r16)
    lwz r0, 0x4(r17)
    lwzx r4, r3, r29
    add r3, r0, r30
    stw r4, 0x10(r3)
    lwz r0, 0x4(r17)
    add r3, r0, r30
    stw r19, 0x14(r3)
lbl_fn_803972A8_00000900:
    lwz r3, 0x4(r16)
    stwx r19, r3, r29
lbl_fn_803972A8_00000908:
    addi r18, r18, 0x1
    addi r31, r31, 0x148
    addi r30, r30, 0x18
    addi r29, r29, 0xc
lbl_fn_803972A8_00000918:
    lwz r0, 0x0(r14)
    cmplw r18, r0
    blt lbl_fn_803972A8_00000058
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80397BEC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_14
    lfs f31, lbl_80885B10
    mr r15, r3
    stw r7, 0x8(r1)
    mr r14, r4
    mr r16, r5
    mr r17, r6
    stw r8, 0xc(r1)
    li r18, 0x0
    li r31, 0x0
    li r30, 0x0
    stw r9, 0x10(r1)
    li r29, 0x0
    lis r28, 0x68dc
    stw r10, 0x14(r1)
    b lbl_fn_80397BEC_0000125C
lbl_fn_80397BEC_0000099C:
    lwz r0, 0x10(r1)
    lwz r3, 0x4(r14)
    cmpwi r0, 0x0
    add r21, r3, r31
    beq lbl_fn_80397BEC_00000C54
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_80397BEC_00000C54
    lwz r0, 0x12c(r21)
    addi r27, r15, 0x80
    li r22, 0x0
    li r20, 0x0
    extrwi r0, r0, 1, 20
    xori r26, r0, 0x1
    b lbl_fn_80397BEC_00000C28
lbl_fn_80397BEC_000009D8:
    lwz r3, 0x144(r21)
    addi r4, r15, 0x80
    lwz r5, 0x80(r15)
    lwzx r6, r3, r20
    b lbl_fn_80397BEC_00000A08
lbl_fn_80397BEC_000009EC:
    lwz r0, 0xc(r5)
    cmpw r0, r6
    blt lbl_fn_80397BEC_00000A04
    mr r4, r5
    lwz r5, 0x0(r5)
    b lbl_fn_80397BEC_00000A08
lbl_fn_80397BEC_00000A04:
    lwz r5, 0x4(r5)
lbl_fn_80397BEC_00000A08:
    cmpwi r5, 0x0
    bne lbl_fn_80397BEC_000009EC
    cmplw r4, r27
    beq lbl_fn_80397BEC_00000A24
    lwz r0, 0xc(r4)
    cmpw r6, r0
    bge lbl_fn_80397BEC_00000A28
lbl_fn_80397BEC_00000A24:
    addi r4, r15, 0x80
lbl_fn_80397BEC_00000A28:
    cmplw r4, r27
    beq lbl_fn_80397BEC_00000A5C
    subi r3, r28, 0x7453
    lwz r0, 0x10(r4)
    mulhw r3, r3, r6
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r15, r3
    lwz r3, 0x64(r3)
    add r23, r3, r0
    b lbl_fn_80397BEC_00000A60
lbl_fn_80397BEC_00000A5C:
    li r23, 0x0
lbl_fn_80397BEC_00000A60:
    cmpwi r23, 0x0
    beq lbl_fn_80397BEC_00000C20
    cmpwi r26, 0x0
    beq lbl_fn_80397BEC_00000AD4
    lwz r7, 0x4(r23)
    li r5, 0x1
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r7, 0x0
    lwz r4, 0x10d0(r3)
    bne lbl_fn_80397BEC_00000A9C
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_80397BEC_00000A9C
    li r6, 0x1
lbl_fn_80397BEC_00000A9C:
    cmpwi r6, 0x0
    bne lbl_fn_80397BEC_00000ACC
    cmpw r4, r7
    li r3, 0x0
    blt lbl_fn_80397BEC_00000AC0
    lwz r0, 0x8(r23)
    cmpw r4, r0
    bgt lbl_fn_80397BEC_00000AC0
    li r3, 0x1
lbl_fn_80397BEC_00000AC0:
    cmpwi r3, 0x0
    bne lbl_fn_80397BEC_00000ACC
    li r5, 0x0
lbl_fn_80397BEC_00000ACC:
    cmpwi r5, 0x0
    bne lbl_fn_80397BEC_00000C18
lbl_fn_80397BEC_00000AD4:
    cmpwi r26, 0x0
    bne lbl_fn_80397BEC_00000C20
    cmpwi r23, 0x0
    li r25, 0x0
    beq lbl_fn_80397BEC_00000C10
    lwz r7, 0x4(r23)
    li r5, 0x1
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r7, 0x0
    lwz r4, 0x10d0(r3)
    bne lbl_fn_80397BEC_00000B14
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    bne lbl_fn_80397BEC_00000B14
    li r6, 0x1
lbl_fn_80397BEC_00000B14:
    cmpwi r6, 0x0
    bne lbl_fn_80397BEC_00000B44
    cmpw r4, r7
    li r3, 0x0
    blt lbl_fn_80397BEC_00000B38
    lwz r0, 0x8(r23)
    cmpw r4, r0
    bgt lbl_fn_80397BEC_00000B38
    li r3, 0x1
lbl_fn_80397BEC_00000B38:
    cmpwi r3, 0x0
    bne lbl_fn_80397BEC_00000B44
    li r5, 0x0
lbl_fn_80397BEC_00000B44:
    cmpwi r5, 0x0
    beq lbl_fn_80397BEC_00000C10
    addi r19, r23, 0x10
    li r25, 0x1
    li r24, 0x0
    b lbl_fn_80397BEC_00000C04
lbl_fn_80397BEC_00000B5C:
    lwz r4, 0x0(r19)
    cmpwi r4, 0x1
    bne lbl_fn_80397BEC_00000BFC
    cmpwi r4, 0x0
    lwz r3, 0x0(r23)
    bge lbl_fn_80397BEC_00000BD4
    lwz r4, 0x13c(r15)
    addi r5, r15, 0x13c
    b lbl_fn_80397BEC_00000B9C
lbl_fn_80397BEC_00000B80:
    lwz r0, 0xc(r4)
    cmpw r0, r3
    blt lbl_fn_80397BEC_00000B98
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_80397BEC_00000B9C
lbl_fn_80397BEC_00000B98:
    lwz r4, 0x4(r4)
lbl_fn_80397BEC_00000B9C:
    cmpwi r4, 0x0
    bne lbl_fn_80397BEC_00000B80
    addi r0, r15, 0x13c
    cmplw r5, r0
    beq lbl_fn_80397BEC_00000BBC
    lwz r0, 0xc(r5)
    cmpw r3, r0
    bge lbl_fn_80397BEC_00000BC0
lbl_fn_80397BEC_00000BBC:
    addi r5, r15, 0x13c
lbl_fn_80397BEC_00000BC0:
    addi r0, r15, 0x13c
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80397BEC_00000BEC
lbl_fn_80397BEC_00000BD4:
    lwz r5, 0x4(r19)
    mr r3, r15
    lwz r6, 0x10(r19)
    lwz r7, 0x8(r19)
    lwz r8, 0xc(r19)
    bl fn_8039C7F0
lbl_fn_80397BEC_00000BEC:
    cmpwi r3, 0x0
    bne lbl_fn_80397BEC_00000BFC
    li r25, 0x0
    b lbl_fn_80397BEC_00000C10
lbl_fn_80397BEC_00000BFC:
    addi r19, r19, 0x14
    addi r24, r24, 0x1
lbl_fn_80397BEC_00000C04:
    lwz r0, 0xb0(r23)
    cmpw r24, r0
    blt lbl_fn_80397BEC_00000B5C
lbl_fn_80397BEC_00000C10:
    cmpwi r25, 0x0
    beq lbl_fn_80397BEC_00000C20
lbl_fn_80397BEC_00000C18:
    li r0, 0x1
    b lbl_fn_80397BEC_00000C38
lbl_fn_80397BEC_00000C20:
    addi r20, r20, 0x4
    addi r22, r22, 0x1
lbl_fn_80397BEC_00000C28:
    lwz r0, 0x140(r21)
    cmplw r22, r0
    blt lbl_fn_80397BEC_000009D8
    li r0, 0x0
lbl_fn_80397BEC_00000C38:
    cmpwi r0, 0x0
    bne lbl_fn_80397BEC_00000C54
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    ori r0, r0, 0x10
    stw r0, 0x4(r3)
lbl_fn_80397BEC_00000C54:
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80397BEC_0000124C
    mr r3, r15
    mr r4, r21
    bl fn_80396F44
    lwz r4, 0x8(r1)
    mr r19, r3
    lwz r22, 0x48(r4)
    b lbl_fn_80397BEC_00000C9C
lbl_fn_80397BEC_00000C88:
    lwz r4, 0x0(r21)
    lwz r0, 0x58(r22)
    cmpw r4, r0
    beq lbl_fn_80397BEC_00000CA4
    lwz r22, 0x1424(r22)
lbl_fn_80397BEC_00000C9C:
    cmpwi r22, 0x0
    bne lbl_fn_80397BEC_00000C88
lbl_fn_80397BEC_00000CA4:
    cmpwi r3, 0x0
    blt lbl_fn_80397BEC_00000D44
    lwz r4, 0x144(r21)
    slwi r0, r3, 2
    lwz r6, 0x80(r15)
    addi r7, r15, 0x80
    lwzx r5, r4, r0
    b lbl_fn_80397BEC_00000CE0
lbl_fn_80397BEC_00000CC4:
    lwz r0, 0xc(r6)
    cmpw r0, r5
    blt lbl_fn_80397BEC_00000CDC
    mr r7, r6
    lwz r6, 0x0(r6)
    b lbl_fn_80397BEC_00000CE0
lbl_fn_80397BEC_00000CDC:
    lwz r6, 0x4(r6)
lbl_fn_80397BEC_00000CE0:
    cmpwi r6, 0x0
    bne lbl_fn_80397BEC_00000CC4
    addi r0, r15, 0x80
    cmplw r7, r0
    beq lbl_fn_80397BEC_00000D00
    lwz r0, 0xc(r7)
    cmpw r5, r0
    bge lbl_fn_80397BEC_00000D04
lbl_fn_80397BEC_00000D00:
    addi r7, r15, 0x80
lbl_fn_80397BEC_00000D04:
    addi r0, r15, 0x80
    cmplw r7, r0
    beq lbl_fn_80397BEC_00000D3C
    subi r4, r28, 0x7453
    lwz r0, 0x10(r7)
    mulhw r4, r4, r5
    srawi r4, r4, 12
    srwi r5, r4, 31
    add r4, r4, r5
    slwi r4, r4, 2
    add r4, r15, r4
    lwz r4, 0x64(r4)
    add r20, r4, r0
    b lbl_fn_80397BEC_00000D48
lbl_fn_80397BEC_00000D3C:
    li r20, 0x0
    b lbl_fn_80397BEC_00000D48
lbl_fn_80397BEC_00000D44:
    li r20, 0x0
lbl_fn_80397BEC_00000D48:
    lwz r0, 0x4(r16)
    add r4, r0, r29
    lwz r0, 0x4(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80397BEC_00000E68
    cmpwi r3, 0x0
    blt lbl_fn_80397BEC_00000E38
    cmpwi r22, 0x0
    beq lbl_fn_80397BEC_00001178
    lwz r0, 0x38(r22)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80397BEC_00001178
    lwz r3, 0x88(r15)
    li r5, 0x0
    lwz r4, 0xc0(r20)
    li r6, 0x0
    lwz r0, 0x78(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80397BEC_00000DC8
lbl_fn_80397BEC_00000DA0:
    lwz r7, 0x7c(r3)
    lwzx r0, r7, r6
    cmpw r4, r0
    bne lbl_fn_80397BEC_00000DBC
    mulli r0, r5, 0x28
    add r3, r7, r0
    b lbl_fn_80397BEC_00000DCC
lbl_fn_80397BEC_00000DBC:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80397BEC_00000DA0
lbl_fn_80397BEC_00000DC8:
    li r3, 0x0
lbl_fn_80397BEC_00000DCC:
    cmpwi r3, 0x0
    beq lbl_fn_80397BEC_00000E08
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f31
    lfs f0, 0x14(r3)
    addi r3, r1, 0x30
    stfs f31, 0x30(r1)
    stfs f0, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f31, 0x38(r1)
    stfs f2, 0x53c(r22)
lbl_fn_80397BEC_00000E08:
    lwz r4, 0xc50(r22)
    mr r3, r22
    lwz r5, 0x24(r21)
    bl fn_80154654
    mr r3, r22
    bl fn_80176ACC
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    ori r0, r0, 0x2
    stw r0, 0x4(r3)
    b lbl_fn_80397BEC_00001178
lbl_fn_80397BEC_00000E38:
    cmpwi r22, 0x0
    beq lbl_fn_80397BEC_00001178
    lwz r3, 0x38(r22)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80397BEC_00001178
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80397BEC_00001178
    mr r3, r22
    bl fn_801765D8
    b lbl_fn_80397BEC_00001178
lbl_fn_80397BEC_00000E68:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    beq lbl_fn_80397BEC_00001178
    cmpwi r22, 0x0
    bne lbl_fn_80397BEC_00000E9C
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80397BEC_00000E9C
    mr r4, r0
    lwz r5, 0x0(r21)
    lwz r0, 0x58(r4)
    cmpw r5, r0
    beq lbl_fn_80397BEC_00001178
lbl_fn_80397BEC_00000E9C:
    cmpwi r3, 0x0
    blt lbl_fn_80397BEC_00001160
    lwz r4, 0x48(r22)
    lwz r0, 0xc50(r22)
    cmpw r0, r4
    bne lbl_fn_80397BEC_00000EC4
    lwz r3, 0x24(r21)
    lwz r0, 0xc54(r22)
    cmpw r3, r0
    beq lbl_fn_80397BEC_00000ED8
lbl_fn_80397BEC_00000EC4:
    lwz r5, 0x24(r21)
    cmpwi r5, 0x0
    beq lbl_fn_80397BEC_00000ED8
    mr r3, r22
    bl fn_80154654
lbl_fn_80397BEC_00000ED8:
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80397BEC_00001178
    lwz r3, 0x88(r15)
    li r5, 0x0
    lwz r4, 0xc0(r20)
    li r6, 0x0
    lwz r0, 0x78(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80397BEC_00000F30
lbl_fn_80397BEC_00000F08:
    lwz r7, 0x7c(r3)
    lwzx r0, r7, r6
    cmpw r4, r0
    bne lbl_fn_80397BEC_00000F24
    mulli r0, r5, 0x28
    add r3, r7, r0
    b lbl_fn_80397BEC_00000F34
lbl_fn_80397BEC_00000F24:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80397BEC_00000F08
lbl_fn_80397BEC_00000F30:
    li r3, 0x0
lbl_fn_80397BEC_00000F34:
    cmpwi r3, 0x0
    beq lbl_fn_80397BEC_00000F74
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f31
    lfs f0, 0x14(r3)
    addi r3, r1, 0x24
    stfs f31, 0x24(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f31, 0x2c(r1)
    stfs f2, 0x53c(r22)
    b lbl_fn_80397BEC_00000FA8
lbl_fn_80397BEC_00000F74:
    lfs f2, 0xc(r21)
    addi r3, r1, 0x18
    psq_l f1, 0x4(r21), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f31
    lfs f0, 0x14(r21)
    stfs f31, 0x18(r1)
    stfs f0, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f31, 0x20(r1)
    stfs f2, 0x53c(r22)
lbl_fn_80397BEC_00000FA8:
    lwz r0, 0x48(r22)
    cmpwi r0, 0x2
    bne lbl_fn_80397BEC_00001154
    lwz r0, 0x7e0(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80397BEC_00001154
    lwz r3, 0x4(r16)
    li r23, 0x1
    lwzx r0, r3, r29
    cmpwi r0, 0x0
    blt lbl_fn_80397BEC_000010DC
    cmpwi r19, 0x0
    blt lbl_fn_80397BEC_000010DC
    lwz r3, 0x88(r15)
    cmpwi r3, 0x0
    beq lbl_fn_80397BEC_00000FF4
    lwz r3, 0x64(r3)
    b lbl_fn_80397BEC_00000FF8
lbl_fn_80397BEC_00000FF4:
    li r3, 0x0
lbl_fn_80397BEC_00000FF8:
    cmpwi r3, 0x0
    beq lbl_fn_80397BEC_000010DC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80397BEC_000010DC
    lwz r4, 0x4c(r3)
    cmpwi r4, 0x1
    bne lbl_fn_80397BEC_00001024
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80397BEC_000010D8
lbl_fn_80397BEC_00001024:
    cmpwi r4, 0x3
    bne lbl_fn_80397BEC_00001038
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80397BEC_000010D8
lbl_fn_80397BEC_00001038:
    cmpwi r4, 0xc
    bne lbl_fn_80397BEC_0000104C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80397BEC_000010D8
lbl_fn_80397BEC_0000104C:
    cmpwi r4, 0x16
    bne lbl_fn_80397BEC_00001060
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80397BEC_000010D8
lbl_fn_80397BEC_00001060:
    cmpwi r4, 0x16
    bne lbl_fn_80397BEC_00001074
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80397BEC_000010D8
lbl_fn_80397BEC_00001074:
    cmpwi r4, 0x24
    bne lbl_fn_80397BEC_00001088
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80397BEC_000010D8
lbl_fn_80397BEC_00001088:
    cmpwi r4, 0x24
    bne lbl_fn_80397BEC_0000109C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80397BEC_000010D8
lbl_fn_80397BEC_0000109C:
    cmpwi r4, 0x24
    bne lbl_fn_80397BEC_000010B0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80397BEC_000010D8
lbl_fn_80397BEC_000010B0:
    cmpwi r4, 0x24
    bne lbl_fn_80397BEC_000010C4
    lwz r0, 0x50(r3)
    cmpwi r0, 0x4
    beq lbl_fn_80397BEC_000010D8
lbl_fn_80397BEC_000010C4:
    cmpwi r4, 0x27
    bne lbl_fn_80397BEC_000010DC
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80397BEC_000010DC
lbl_fn_80397BEC_000010D8:
    li r23, 0x0
lbl_fn_80397BEC_000010DC:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_80397BEC_000010FC
    mr r4, r22
    bl fn_803EE45C
    cmpwi r3, 0x0
    beq lbl_fn_80397BEC_000010FC
    li r23, 0x0
lbl_fn_80397BEC_000010FC:
    cmpwi r23, 0x0
    beq lbl_fn_80397BEC_00001154
    addi r3, r22, 0x7d4
    bl fn_8012D8B8
    lwz r0, 0x954(r22)
    mr r3, r22
    stw r0, 0x9f8(r22)
    li r0, 0x0
    li r4, 0x0
    stw r0, 0x58c(r22)
    bl fn_800D246C
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_80397BEC_00001140
    lwz r0, 0x12a4(r22)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r22)
lbl_fn_80397BEC_00001140:
    lwz r0, 0x12a4(r22)
    mr r3, r22
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r22)
    bl fn_80145334
lbl_fn_80397BEC_00001154:
    mr r3, r22
    bl fn_80176ACC
    b lbl_fn_80397BEC_00001178
lbl_fn_80397BEC_00001160:
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80397BEC_00001178
    mr r3, r22
    bl fn_801765D8
lbl_fn_80397BEC_00001178:
    cmpwi r22, 0x0
    beq lbl_fn_80397BEC_000011C4
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80397BEC_000011C4
    cmpwi r20, 0x0
    beq lbl_fn_80397BEC_000011C4
    lwz r0, 0xb8(r20)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_80397BEC_000011B8
    lwz r0, 0x54c(r22)
    oris r0, r0, 0x40
    stw r0, 0x54c(r22)
    b lbl_fn_80397BEC_000011C4
lbl_fn_80397BEC_000011B8:
    lwz r0, 0x54c(r22)
    rlwinm r0, r0, 0, 10, 8
    stw r0, 0x54c(r22)
lbl_fn_80397BEC_000011C4:
    lwz r3, 0x4(r16)
    lwzx r0, r3, r29
    cmpw r19, r0
    beq lbl_fn_80397BEC_000011F8
    add r3, r3, r29
    lwz r0, 0x4(r3)
    clrrwi r0, r0, 1
    stw r0, 0x4(r3)
    lwz r0, 0x4(r16)
    add r3, r0, r29
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r3)
lbl_fn_80397BEC_000011F8:
    lwz r0, 0x37c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80397BEC_00001244
    lwz r0, 0x4(r17)
    add r3, r0, r30
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x4(r17)
    lwz r4, 0x0(r21)
    add r3, r0, r30
    stw r4, 0x8(r3)
    lwz r3, 0x4(r16)
    lwz r0, 0x4(r17)
    lwzx r4, r3, r29
    add r3, r0, r30
    stw r4, 0x10(r3)
    lwz r0, 0x4(r17)
    add r3, r0, r30
    stw r19, 0x14(r3)
lbl_fn_80397BEC_00001244:
    lwz r3, 0x4(r16)
    stwx r19, r3, r29
lbl_fn_80397BEC_0000124C:
    addi r18, r18, 0x1
    addi r31, r31, 0x148
    addi r30, r30, 0x18
    addi r29, r29, 0xc
lbl_fn_80397BEC_0000125C:
    lwz r0, 0x0(r14)
    cmplw r18, r0
    blt lbl_fn_80397BEC_0000099C
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80398530(void)
{
    nofralloc
    lwz r8, 0x4(r4)
    li r3, 0x1
    lwz r5, lbl_8087F430
    li r7, 0x0
    cmpwi r8, 0x0
    lwz r6, 0x10d0(r5)
    bne lbl_fn_80398530_000012B4
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80398530_000012B4
    li r7, 0x1
lbl_fn_80398530_000012B4:
    cmpwi r7, 0x0
    bnelr
    cmpw r6, r8
    li r5, 0x0
    blt lbl_fn_80398530_000012D8
    lwz r0, 0x8(r4)
    cmpw r6, r0
    bgt lbl_fn_80398530_000012D8
    li r5, 0x1
lbl_fn_80398530_000012D8:
    cmpwi r5, 0x0
    bnelr
    li r3, 0x0
    blr
}

asm void fn_80398590(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r31, 0x0
    beq lbl_fn_80398590_00001444
    lwz r8, 0x4(r4)
    li r6, 0x1
    lwz r3, lbl_8087F430
    li r7, 0x0
    cmpwi r8, 0x0
    lwz r5, 0x10d0(r3)
    bne lbl_fn_80398590_0000133C
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80398590_0000133C
    li r7, 0x1
lbl_fn_80398590_0000133C:
    cmpwi r7, 0x0
    bne lbl_fn_80398590_0000136C
    cmpw r5, r8
    li r3, 0x0
    blt lbl_fn_80398590_00001360
    lwz r0, 0x8(r4)
    cmpw r5, r0
    bgt lbl_fn_80398590_00001360
    li r3, 0x1
lbl_fn_80398590_00001360:
    cmpwi r3, 0x0
    bne lbl_fn_80398590_0000136C
    li r6, 0x0
lbl_fn_80398590_0000136C:
    cmpwi r6, 0x0
    beq lbl_fn_80398590_00001444
    addi r27, r4, 0x10
    li r31, 0x1
    li r26, 0x0
    b lbl_fn_80398590_00001438
lbl_fn_80398590_00001384:
    cmpwi r30, 0x0
    beq lbl_fn_80398590_00001398
    lwz r0, 0x0(r27)
    cmpwi r0, 0x1
    bne lbl_fn_80398590_00001430
lbl_fn_80398590_00001398:
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r29)
    cmpwi r4, 0x0
    bge lbl_fn_80398590_00001408
    lwz r4, 0x13c(r28)
    addi r5, r28, 0x13c
    b lbl_fn_80398590_000013D0
lbl_fn_80398590_000013B4:
    lwz r0, 0xc(r4)
    cmpw r0, r3
    blt lbl_fn_80398590_000013CC
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_80398590_000013D0
lbl_fn_80398590_000013CC:
    lwz r4, 0x4(r4)
lbl_fn_80398590_000013D0:
    cmpwi r4, 0x0
    bne lbl_fn_80398590_000013B4
    addi r0, r28, 0x13c
    cmplw r5, r0
    beq lbl_fn_80398590_000013F0
    lwz r0, 0xc(r5)
    cmpw r3, r0
    bge lbl_fn_80398590_000013F4
lbl_fn_80398590_000013F0:
    addi r5, r28, 0x13c
lbl_fn_80398590_000013F4:
    addi r0, r28, 0x13c
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80398590_00001420
lbl_fn_80398590_00001408:
    lwz r5, 0x4(r27)
    mr r3, r28
    lwz r6, 0x10(r27)
    lwz r7, 0x8(r27)
    lwz r8, 0xc(r27)
    bl fn_8039C7F0
lbl_fn_80398590_00001420:
    cmpwi r3, 0x0
    bne lbl_fn_80398590_00001430
    li r31, 0x0
    b lbl_fn_80398590_00001444
lbl_fn_80398590_00001430:
    addi r27, r27, 0x14
    addi r26, r26, 0x1
lbl_fn_80398590_00001438:
    lwz r0, 0xb0(r29)
    cmpw r26, r0
    blt lbl_fn_80398590_00001384
lbl_fn_80398590_00001444:
    mr r3, r31
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80398704(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_27
    lwz r4, lbl_8087F0A8
    mr r28, r3
    lwz r0, 0x78(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80398704_00001E88
    lwz r29, 0xe4(r3)
    cmpwi r29, 0x0
    beq lbl_fn_80398704_00001634
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_80398704_00001634
    lis r4, lbl_8074F8CC@ha
    addi r27, r29, 0xb0
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x0
    mr r3, r27
    addi r4, r4, 0x69
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80398704_000014C8
    li r4, 0x0
    b lbl_fn_80398704_000014D4
lbl_fn_80398704_000014C8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r4, r3, r0
lbl_fn_80398704_000014D4:
    cmpwi r4, 0x0
    beq lbl_fn_80398704_000014FC
    lfs f4, 0x2c(r4)
    addi r3, r1, 0x4c
    lfs f3, 0x1c(r4)
    lfs f0, 0xc(r4)
    stfs f0, 0x4c(r1)
    stfs f3, 0x50(r1)
    stfs f4, 0x54(r1)
    b lbl_fn_80398704_0000161C
lbl_fn_80398704_000014FC:
    lis r4, lbl_8074F8CC@ha
    mr r3, r27
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x0
    addi r4, r4, 0x6e
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80398704_00001524
    li r4, 0x0
    b lbl_fn_80398704_00001530
lbl_fn_80398704_00001524:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r4, r3, r0
lbl_fn_80398704_00001530:
    cmpwi r4, 0x0
    beq lbl_fn_80398704_00001584
    lfs f3, lbl_80885B10
    addi r3, r1, 0x4c
    lfs f9, 0x2c(r4)
    lfs f7, 0xc(r4)
    lfs f0, lbl_80885B14
    fsubs f6, f9, f3
    lfs f8, 0x1c(r4)
    fsubs f4, f7, f3
    stfs f3, 0x28(r1)
    fsubs f5, f8, f0
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f7, 0x1c(r1)
    stfs f8, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f4, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f6, 0x54(r1)
    b lbl_fn_80398704_0000161C
lbl_fn_80398704_00001584:
    lis r4, lbl_8074F8CC@ha
    mr r3, r27
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x0
    addi r4, r4, 0x73
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80398704_000015AC
    li r4, 0x0
    b lbl_fn_80398704_000015B8
lbl_fn_80398704_000015AC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r4, r3, r0
lbl_fn_80398704_000015B8:
    cmpwi r4, 0x0
    beq lbl_fn_80398704_0000160C
    lfs f3, lbl_80885B10
    addi r3, r1, 0x4c
    lfs f9, 0x2c(r4)
    lfs f7, 0xc(r4)
    lfs f0, lbl_80885B18
    fadds f6, f9, f3
    lfs f8, 0x1c(r4)
    fadds f4, f7, f3
    stfs f3, 0x40(r1)
    fadds f5, f8, f0
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f7, 0x34(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f4, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f6, 0x54(r1)
    b lbl_fn_80398704_0000161C
lbl_fn_80398704_0000160C:
    mr r4, r29
    addi r3, r1, 0x4c
    bl fn_801781B0
    addi r3, r1, 0x4c
lbl_fn_80398704_0000161C:
    lwz r4, lbl_8087F430
    lfs f2, 0x8(r3)
    addi r4, r4, 0x988
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
lbl_fn_80398704_00001634:
    lwz r0, 0x8c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80398704_00001AEC
    lbz r0, lbl_8087F450
    extsb. r0, r0
    bne lbl_fn_80398704_00001A88
    lis r4, lbl_80766768@ha
    lwzu r6, lbl_80766768@l(r4)
    lis r3, lbl_8078A80C@ha
    stwu r6, lbl_8078A80C@l(r3)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r5, 0x4(r3)
    stw r4, 0x8(r3)
    stw r6, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r4, 0x20(r3)
    stw r6, 0x24(r3)
    stw r5, 0x28(r3)
    stw r4, 0x2c(r3)
    stw r6, 0x48(r3)
    stw r5, 0x4c(r3)
    stw r4, 0x50(r3)
    stw r6, 0x6c(r3)
    stw r5, 0x70(r3)
    stw r4, 0x74(r3)
    stw r6, 0x78(r3)
    stw r5, 0x7c(r3)
    stw r4, 0x80(r3)
    stw r6, 0x84(r3)
    stw r5, 0x88(r3)
    stw r4, 0x8c(r3)
    stw r6, 0x90(r3)
    stw r5, 0x94(r3)
    stw r4, 0x98(r3)
    stw r6, 0x9c(r3)
    stw r5, 0xa0(r3)
    stw r4, 0xa4(r3)
    stw r6, 0xa8(r3)
    stw r5, 0xac(r3)
    stw r4, 0xb0(r3)
    stw r6, 0xc0(r3)
    stw r5, 0xc4(r3)
    stw r4, 0xc8(r3)
    stw r6, 0xcc(r3)
    stw r5, 0xd0(r3)
    stw r4, 0xd4(r3)
    stw r6, 0xd8(r3)
    stw r5, 0xdc(r3)
    stw r4, 0xe0(r3)
    stw r6, 0xe4(r3)
    stw r5, 0xe8(r3)
    stw r4, 0xec(r3)
    stw r6, 0xf0(r3)
    stw r5, 0xf4(r3)
    stw r4, 0xf8(r3)
    stw r6, 0xfc(r3)
    stw r5, 0x100(r3)
    stw r4, 0x104(r3)
    stw r6, 0x108(r3)
    stw r5, 0x10c(r3)
    stw r4, 0x110(r3)
    stw r6, 0x114(r3)
    stw r5, 0x118(r3)
    stw r4, 0x11c(r3)
    stw r6, 0x120(r3)
    stw r5, 0x124(r3)
    stw r4, 0x128(r3)
    stw r6, 0x12c(r3)
    stw r5, 0x130(r3)
    stw r4, 0x134(r3)
    stw r6, 0x138(r3)
    stw r5, 0x13c(r3)
    stw r4, 0x140(r3)
    stw r6, 0x144(r3)
    stw r5, 0x148(r3)
    stw r4, 0x14c(r3)
    stw r6, 0x150(r3)
    stw r5, 0x154(r3)
    stw r4, 0x158(r3)
    stw r6, 0x15c(r3)
    stw r5, 0x160(r3)
    stw r4, 0x164(r3)
    stw r6, 0x168(r3)
    stw r5, 0x16c(r3)
    stw r4, 0x170(r3)
    stw r6, 0x174(r3)
    stw r5, 0x178(r3)
    stw r4, 0x17c(r3)
    stw r6, 0x180(r3)
    stw r5, 0x184(r3)
    stw r4, 0x188(r3)
    stw r6, 0x18c(r3)
    stw r5, 0x190(r3)
    stw r4, 0x194(r3)
    stw r6, 0x198(r3)
    stw r5, 0x19c(r3)
    stw r4, 0x1a0(r3)
    stw r6, 0x1a4(r3)
    stw r5, 0x1a8(r3)
    stw r4, 0x1ac(r3)
    stw r6, 0x1b0(r3)
    stw r5, 0x1b4(r3)
    stw r4, 0x1b8(r3)
    stw r6, 0x1c8(r3)
    stw r5, 0x1cc(r3)
    stw r4, 0x1d0(r3)
    stw r6, 0x1f8(r3)
    stw r5, 0x1fc(r3)
    stw r4, 0x200(r3)
    stw r6, 0x21c(r3)
    stw r5, 0x220(r3)
    stw r4, 0x224(r3)
    stw r6, 0x234(r3)
    stw r5, 0x238(r3)
    stw r4, 0x23c(r3)
    stw r6, 0x240(r3)
    stw r5, 0x244(r3)
    stw r4, 0x248(r3)
    stw r6, 0x24c(r3)
    stw r5, 0x250(r3)
    stw r4, 0x254(r3)
    stw r6, 0x258(r3)
    stw r5, 0x25c(r3)
    stw r4, 0x260(r3)
    stw r6, 0x264(r3)
    stw r5, 0x268(r3)
    stw r4, 0x26c(r3)
    stw r6, 0x270(r3)
    stw r5, 0x274(r3)
    stw r4, 0x278(r3)
    stw r6, 0x27c(r3)
    stw r5, 0x280(r3)
    stw r4, 0x284(r3)
    stw r6, 0x288(r3)
    stw r5, 0x28c(r3)
    stw r4, 0x290(r3)
    stw r6, 0x294(r3)
    stw r5, 0x298(r3)
    stw r4, 0x29c(r3)
    stw r6, 0x2ac(r3)
    stw r5, 0x2b0(r3)
    stw r4, 0x2b4(r3)
    stw r6, 0x2b8(r3)
    stw r5, 0x2bc(r3)
    stw r4, 0x2c0(r3)
    stw r6, 0x2c4(r3)
    stw r5, 0x2c8(r3)
    stw r4, 0x2cc(r3)
    stw r6, 0x2d0(r3)
    stw r5, 0x2d4(r3)
    stw r4, 0x2d8(r3)
    stw r6, 0x2dc(r3)
    stw r5, 0x2e0(r3)
    stw r4, 0x2e4(r3)
    stw r6, 0x2f4(r3)
    stw r5, 0x2f8(r3)
    stw r4, 0x2fc(r3)
    stw r6, 0x300(r3)
    stw r5, 0x304(r3)
    stw r4, 0x308(r3)
    stw r6, 0x30c(r3)
    stw r5, 0x310(r3)
    stw r4, 0x314(r3)
    stw r6, 0x318(r3)
    stw r5, 0x31c(r3)
    stw r4, 0x320(r3)
    stw r6, 0x324(r3)
    stw r5, 0x328(r3)
    stw r4, 0x32c(r3)
    stw r6, 0x330(r3)
    stw r5, 0x334(r3)
    stw r4, 0x338(r3)
    stw r6, 0x33c(r3)
    stw r5, 0x340(r3)
    stw r4, 0x344(r3)
    stw r6, 0x348(r3)
    stw r5, 0x34c(r3)
    stw r4, 0x350(r3)
    stw r6, 0x354(r3)
    stw r5, 0x358(r3)
    stw r4, 0x35c(r3)
    stw r6, 0x360(r3)
    stw r5, 0x364(r3)
    stw r4, 0x368(r3)
    stw r6, 0x36c(r3)
    stw r5, 0x370(r3)
    stw r4, 0x374(r3)
    stw r6, 0x378(r3)
    stw r5, 0x37c(r3)
    stw r4, 0x380(r3)
    stw r6, 0x384(r3)
    stw r5, 0x388(r3)
    stw r4, 0x38c(r3)
    stw r6, 0x390(r3)
    stw r5, 0x394(r3)
    stw r4, 0x398(r3)
    stw r6, 0x39c(r3)
    stw r5, 0x3a0(r3)
    stw r4, 0x3a4(r3)
    stw r6, 0x3a8(r3)
    stw r5, 0x3ac(r3)
    stw r4, 0x3b0(r3)
    stw r6, 0x3b4(r3)
    stw r5, 0x3b8(r3)
    stw r4, 0x3bc(r3)
    stw r6, 0x3c0(r3)
    stw r5, 0x3c4(r3)
    stw r4, 0x3c8(r3)
    stw r6, 0x3cc(r3)
    stw r5, 0x3d0(r3)
    stw r4, 0x3d4(r3)
    stw r6, 0x3d8(r3)
    stw r5, 0x3dc(r3)
    stw r4, 0x3e0(r3)
    stw r6, 0x3e4(r3)
    stw r5, 0x3e8(r3)
    stw r4, 0x3ec(r3)
    stw r6, 0x3f0(r3)
    stw r5, 0x3f4(r3)
    stw r4, 0x3f8(r3)
    stw r6, 0x3fc(r3)
    stw r5, 0x400(r3)
    stw r4, 0x404(r3)
    stw r6, 0x414(r3)
    stw r5, 0x418(r3)
    stw r4, 0x41c(r3)
    stw r6, 0x420(r3)
    stw r5, 0x424(r3)
    stw r4, 0x428(r3)
    stw r6, 0x42c(r3)
    stw r5, 0x430(r3)
    stw r4, 0x434(r3)
    stw r6, 0x438(r3)
    stw r5, 0x43c(r3)
    stw r4, 0x440(r3)
    stw r6, 0x444(r3)
    stw r5, 0x448(r3)
    stw r4, 0x44c(r3)
    stw r6, 0x45c(r3)
    stw r5, 0x460(r3)
    stw r4, 0x464(r3)
    li r0, 0x1
    stw r6, 0x498(r3)
    stw r5, 0x49c(r3)
    stw r4, 0x4a0(r3)
    stw r6, 0x4a4(r3)
    stw r5, 0x4a8(r3)
    stw r4, 0x4ac(r3)
    stw r6, 0x4b0(r3)
    stw r5, 0x4b4(r3)
    stw r4, 0x4b8(r3)
    stw r6, 0x4bc(r3)
    stw r5, 0x4c0(r3)
    stw r4, 0x4c4(r3)
    stw r6, 0x4c8(r3)
    stw r5, 0x4cc(r3)
    stw r4, 0x4d0(r3)
    stw r6, 0x4d4(r3)
    stw r5, 0x4d8(r3)
    stw r4, 0x4dc(r3)
    stw r6, 0x4e0(r3)
    stw r5, 0x4e4(r3)
    stw r4, 0x4e8(r3)
    stw r6, 0x4ec(r3)
    stw r5, 0x4f0(r3)
    stw r4, 0x4f4(r3)
    stw r6, 0x4f8(r3)
    stw r5, 0x4fc(r3)
    stw r4, 0x500(r3)
    stw r6, 0x504(r3)
    stw r5, 0x508(r3)
    stw r4, 0x50c(r3)
    stb r0, lbl_8087F450
lbl_fn_80398704_00001A88:
    lwz r5, 0x90(r28)
    lis r6, lbl_8078A80C@ha
    addi r6, r6, lbl_8078A80C@l
    mr r3, r28
    lwz r0, 0x0(r5)
    addi r4, r1, 0x8
    mulli r0, r0, 0xc
    add r12, r6, r0
    bl fn_80695B00
    nop
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80398704_00001AC4
    li r3, 0x0
    b lbl_fn_80398704_00001AE4
lbl_fn_80398704_00001AC4:
    lwz r5, 0x8(r1)
    cmpwi r5, 0x0
    beq lbl_fn_80398704_00001AE0
    lwz r4, 0x94(r28)
    mr r3, r28
    bl fn_8039CF8C
    b lbl_fn_80398704_00001AE4
lbl_fn_80398704_00001AE0:
    li r3, 0x1
lbl_fn_80398704_00001AE4:
    cmpwi r3, 0x0
    beq lbl_fn_80398704_00001E88
lbl_fn_80398704_00001AEC:
    li r31, 0x0
    stw r31, 0x8c(r28)
    li r29, 0x0
    li r30, 0x0
    lis r27, 0x6666
    b lbl_fn_80398704_00001BCC
lbl_fn_80398704_00001B04:
    lwz r8, 0x12c(r28)
    lwzx r6, r8, r30
    add r7, r8, r30
    lwz r5, 0x4(r7)
    lwz r0, 0x105c(r6)
    lwz r4, 0x8(r7)
    lwz r3, 0xc(r7)
    cmpwi r0, 0x0
    lwz r0, 0x10(r7)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r3, 0x64(r1)
    stw r0, 0x68(r1)
    beq lbl_fn_80398704_00001BC0
    lwz r0, 0x130(r28)
    add r3, r8, r31
    addi r5, r27, 0x6667
    mulli r0, r0, 0x14
    addi r4, r3, 0x14
    add r0, r8, r0
    subf r0, r3, r0
    mulhw r0, r5, r0
    srawi r0, r0, 3
    srwi r5, r0, 31
    add r5, r0, r5
    subi r0, r5, 0x1
    mulli r5, r0, 0x14
    bl memmove
    lwz r5, 0x60(r1)
    lwz r3, 0x130(r28)
    cmpwi r5, 0x0
    subi r0, r3, 0x1
    stw r0, 0x130(r28)
    beq lbl_fn_80398704_00001BCC
    lwz r4, 0x5c(r1)
    mr r3, r28
    bl fn_8039CF8C
    cmpwi r3, 0x0
    bne lbl_fn_80398704_00001BCC
    lwz r3, 0x64(r1)
    li r4, 0x1
    lwz r0, 0x68(r1)
    stw r4, 0x8c(r28)
    stw r3, 0x9c(r28)
    stw r0, 0xa0(r28)
    b lbl_fn_80398704_00001E88
lbl_fn_80398704_00001BC0:
    addi r30, r30, 0x14
    addi r29, r29, 0x1
    addi r31, r31, 0x14
lbl_fn_80398704_00001BCC:
    lwz r0, 0x130(r28)
    cmplw r29, r0
    blt lbl_fn_80398704_00001B04
    lwz r0, 0xf0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80398704_00001C08
    lwz r0, 0xe8(r28)
    li r29, 0x0
    stw r29, 0xf0(r28)
    cmpwi r0, 0x0
    ble lbl_fn_80398704_00001C08
    lwz r3, lbl_8087F540
    bl fn_8047F580
    stw r29, 0xe8(r28)
    stw r29, 0xec(r28)
lbl_fn_80398704_00001C08:
    mr r3, r28
    li r4, 0x0
    bl fn_80395848
    lwz r0, 0xd0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80398704_00001C44
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x105c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80398704_00001C44
    li r4, 0x1
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0xd0(r28)
lbl_fn_80398704_00001C44:
    lwz r0, 0x37c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80398704_00001CA8
    lwz r3, 0x8c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80398704_00001C68
    lwz r0, 0x380(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80398704_00001CA8
lbl_fn_80398704_00001C68:
    stw r3, 0x380(r28)
    mr r3, r28
    addi r4, r28, 0x364
    bl fn_803AB428
    mr r3, r28
    addi r4, r28, 0x36c
    bl fn_803AB428
    mr r3, r28
    addi r4, r28, 0x374
    bl fn_803AB428
    mr r3, r28
    addi r4, r28, 0x35c
    bl fn_803AB428
    mr r3, r28
    addi r4, r28, 0x354
    bl fn_803AB428
lbl_fn_80398704_00001CA8:
    li r29, 0x0
    stw r29, 0xf4(r28)
    lwz r5, 0x88(r28)
    mr r3, r28
    lwz r4, lbl_8087F890
    addi r6, r28, 0x114
    addi r5, r5, 0x80
    li r7, 0x1
    bl fn_803AF49C
    lwz r5, 0x88(r28)
    mr r3, r28
    lwz r4, lbl_8087F408
    addi r6, r28, 0x11c
    addi r5, r5, 0x88
    li r7, 0x2
    bl fn_803AF0FC
    lwz r5, 0x88(r28)
    mr r3, r28
    lwz r4, lbl_8087F428
    addi r6, r28, 0x124
    addi r5, r5, 0x90
    li r7, 0x3
    bl fn_803AED54
    mr r3, r28
    bl fn_8039AB10
    mr r3, r28
    bl fn_8039AF50
    lwz r4, lbl_8087F490
    mr r3, r28
    addi r6, r28, 0x114
    li r7, 0x1
    stw r29, 0xc38(r4)
    lwz r5, 0x88(r28)
    lwz r4, lbl_8087F890
    addi r5, r5, 0x80
    bl fn_803AE1D4
    lwz r5, 0x88(r28)
    mr r3, r28
    lwz r4, lbl_8087F408
    addi r6, r28, 0x11c
    addi r5, r5, 0x88
    li r7, 0x2
    bl fn_803ADC90
    lwz r5, 0x88(r28)
    mr r3, r28
    lwz r4, lbl_8087F428
    addi r6, r28, 0x124
    addi r5, r5, 0x90
    li r7, 0x3
    bl fn_803AD750
    mr r3, r28
    bl fn_8039B2BC
    mr r3, r28
    bl fn_8039B7B0
    lwz r0, 0x8c(r28)
    stw r29, 0xf8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80398704_00001DAC
    lwz r5, 0x88(r28)
    mr r3, r28
    lwz r4, lbl_8087F890
    addi r6, r28, 0x114
    addi r5, r5, 0x80
    li r7, 0x1
    bl fn_803B17C4
lbl_fn_80398704_00001DAC:
    lwz r0, 0x8c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80398704_00001DD4
    lwz r5, 0x88(r28)
    mr r3, r28
    lwz r4, lbl_8087F408
    addi r6, r28, 0x11c
    addi r5, r5, 0x88
    li r7, 0x2
    bl fn_803B0808
lbl_fn_80398704_00001DD4:
    lwz r0, 0x8c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80398704_00001DFC
    lwz r5, 0x88(r28)
    mr r3, r28
    lwz r4, lbl_8087F428
    addi r6, r28, 0x124
    addi r5, r5, 0x90
    li r7, 0x3
    bl fn_803AF83C
lbl_fn_80398704_00001DFC:
    lwz r0, 0x8c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80398704_00001E10
    mr r3, r28
    bl fn_80399148
lbl_fn_80398704_00001E10:
    lwz r0, 0x8c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80398704_00001E24
    mr r3, r28
    bl fn_80399734
lbl_fn_80398704_00001E24:
    lwz r0, 0xf8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80398704_00001E3C
    li r0, 0x0
    stw r0, 0xd4(r28)
    stw r0, 0xd8(r28)
lbl_fn_80398704_00001E3C:
    lwz r0, 0x8c(r28)
    lwz r3, 0xb0(r28)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0xb0(r28)
    bne lbl_fn_80398704_00001E68
    lwz r3, 0xe0(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80398704_00001E68
    subi r0, r3, 0x1
    stw r0, 0xe0(r28)
lbl_fn_80398704_00001E68:
    lwz r0, 0xe8(r28)
    cmpwi r0, 0x0
    ble lbl_fn_80398704_00001E88
    lwz r3, lbl_8087F540
    bl fn_8047F580
    li r0, 0x0
    stw r0, 0xe8(r28)
    stw r0, 0xec(r28)
lbl_fn_80398704_00001E88:
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
