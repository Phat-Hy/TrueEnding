#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80017EB0(void);
extern void fn_8003E120(void);
extern void fn_800697D8(void);
extern void fn_800844D8(void);
extern void fn_800FDE60(void);
extern void fn_80102890(void);
extern void fn_80102A40(void);
extern void fn_80103F60(void);
extern void fn_801333E4(void);
extern void fn_8014FCC4(void);
extern void fn_8014FCE8(void);
extern void fn_8014FD0C(void);
extern void fn_8016FDCC(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805AE5EC(void);
extern void fn_805AEB38(void);
extern void fn_805AED78(void);
extern void fn_805AF1C8(void);
extern void fn_805B01C4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80797740[];
extern u8 lbl_80763C28[];
extern u8 lbl_80763C38[];
extern u8 lbl_80797774[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA00;
extern u32 lbl_80888368;
extern u32 lbl_8088836C;
extern u32 lbl_80888370;
extern u32 lbl_80888374;
extern u32 lbl_8088837C;
extern u32 lbl_80888380;
extern u32 lbl_8088838C;

/* Function declarations */
void fn_805B191C(void);
void fn_805B1AA0(void);
void fn_805B1C88(void);
void fn_805B1E60(void);
void fn_805B202C(void);
void fn_805B2290(void);
void fn_805B2564(void);
void fn_805B27A4(void);
void fn_805B3124(void);
void fn_805B325C(void);

asm void fn_805B191C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r3
    mr r29, r4
    lbz r0, 0x23e(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_805B191C_00000158
    lbz r7, 0xa(r4)
    addi r0, r7, 0xfd
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_805B191C_0000004C
    lbz r4, 0x8(r4)
    lwz r5, 0x0(r29)
    lwz r6, 0x4(r29)
    bl fn_805B01C4
    b lbl_fn_805B191C_00000148
lbl_fn_805B191C_0000004C:
    li r0, 0x0
    stb r0, 0x23c(r3)
    li r4, 0x0
    li r5, 0x20
    addi r3, r3, 0x21c
    bl memset
    mr r31, r28
    li r30, 0x0
    b lbl_fn_805B191C_0000013C
lbl_fn_805B191C_00000070:
    lwz r0, 0x4(r29)
    lwz r27, 0x250(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_805B191C_000000A4
    lwz r3, 0x218(r28)
    cmpwi r3, 0x0
    beq lbl_fn_805B191C_00000098
    lwz r0, 0x8c(r3)
    b lbl_fn_805B191C_0000009C
lbl_fn_805B191C_00000098:
    li r0, 0x0
lbl_fn_805B191C_0000009C:
    cmplw r27, r0
    beq lbl_fn_805B191C_00000134
lbl_fn_805B191C_000000A4:
    lwz r0, 0x38(r27)
    li r3, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805B191C_000000D4
    lwz r0, 0x48(r27)
    cmpwi r0, 0x2
    bne lbl_fn_805B191C_000000D8
    lwz r0, 0x7e0(r27)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_805B191C_000000D8
lbl_fn_805B191C_000000D4:
    li r3, 0x1
lbl_fn_805B191C_000000D8:
    cmpwi r3, 0x0
    bne lbl_fn_805B191C_00000134
    lbz r0, 0x8(r29)
    cmpwi r0, 0x1
    bne lbl_fn_805B191C_00000170
    lwz r5, 0x0(r29)
    mr r3, r28
    mr r4, r30
    li r6, 0x2
    addi r5, r5, 0x10
    bl fn_805AF1C8
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_8016FDCC
    b lbl_fn_805B191C_0000011C
    b lbl_fn_805B191C_00000170
lbl_fn_805B191C_0000011C:
    lbz r0, 0x9(r29)
    cmplwi r0, 0x2
    bne lbl_fn_805B191C_00000134
    lbz r0, 0x23c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805B191C_00000148
lbl_fn_805B191C_00000134:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_805B191C_0000013C:
    lbz r0, 0x24c(r28)
    cmpw r30, r0
    blt lbl_fn_805B191C_00000070
lbl_fn_805B191C_00000148:
    lbz r0, 0x23e(r28)
    ori r0, r0, 0x1
    stb r0, 0x23e(r28)
    b lbl_fn_805B191C_00000170
lbl_fn_805B191C_00000158:
    lbz r4, 0x9(r4)
    bl fn_805AEB38
    cmpwi r3, 0x0
    beq lbl_fn_805B191C_00000170
    li r0, 0x0
    stb r0, 0x23e(r28)
lbl_fn_805B191C_00000170:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B1AA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    lbz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B1AA0_000001B4
    cmpwi r0, 0x1
    beq lbl_fn_805B1AA0_000001C8
    b lbl_fn_805B1AA0_00000354
lbl_fn_805B1AA0_000001B4:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r4)
    bl fn_80370A78
    mr r30, r3
    b lbl_fn_805B1AA0_000001E0
lbl_fn_805B1AA0_000001C8:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r4)
    bl fn_80370174
    mr r30, r3
    b lbl_fn_805B1AA0_000001E0
    b lbl_fn_805B1AA0_00000354
lbl_fn_805B1AA0_000001E0:
    lbz r0, 0x9(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805B1AA0_00000208
    cmpwi r0, 0x1
    beq lbl_fn_805B1AA0_00000210
    cmpwi r0, 0x2
    beq lbl_fn_805B1AA0_00000220
    cmpwi r0, 0x3
    beq lbl_fn_805B1AA0_00000230
    b lbl_fn_805B1AA0_00000354
lbl_fn_805B1AA0_00000208:
    lwz r3, 0x4(r31)
    b lbl_fn_805B1AA0_00000238
lbl_fn_805B1AA0_00000210:
    lwz r3, lbl_8087F430
    lwz r4, 0x4(r31)
    bl fn_80370A78
    b lbl_fn_805B1AA0_00000238
lbl_fn_805B1AA0_00000220:
    lwz r3, lbl_8087F430
    lwz r4, 0x4(r31)
    bl fn_80370174
    b lbl_fn_805B1AA0_00000238
lbl_fn_805B1AA0_00000230:
    bl fn_80680CF8
    b lbl_fn_805B1AA0_00000354
lbl_fn_805B1AA0_00000238:
    lbz r0, 0xa(r31)
    cmplwi r0, 0xc
    bgt lbl_fn_805B1AA0_00000354
    lis r4, jumptable_80797740@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80797740@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    mr r30, r3
    b lbl_fn_805B1AA0_00000314
    add r30, r30, r3
    b lbl_fn_805B1AA0_00000314
    subf r30, r3, r30
    b lbl_fn_805B1AA0_00000314
    mullw r30, r30, r3
    b lbl_fn_805B1AA0_00000314
    divw r30, r30, r3
    b lbl_fn_805B1AA0_00000314
    subf r0, r30, r3
    cntlzw r0, r0
    srwi r30, r0, 5
    b lbl_fn_805B1AA0_00000314
    subf r4, r30, r3
    subf r0, r3, r30
    or r0, r4, r0
    srwi r30, r0, 31
    b lbl_fn_805B1AA0_00000314
    xor r0, r3, r30
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r30, r0, 31
    b lbl_fn_805B1AA0_00000314
    srawi r5, r3, 31
    srwi r4, r30, 31
    subfc r0, r30, r3
    adde r30, r5, r4
    b lbl_fn_805B1AA0_00000314
    xor r0, r30, r3
    srawi r3, r0, 1
    and r0, r0, r30
    subf r0, r0, r3
    srwi r30, r0, 31
    b lbl_fn_805B1AA0_00000314
    srawi r5, r30, 31
    srwi r4, r3, 31
    subfc r0, r3, r30
    adde r30, r5, r4
    b lbl_fn_805B1AA0_00000314
    and r30, r30, r3
    b lbl_fn_805B1AA0_00000314
    or r30, r30, r3
    b lbl_fn_805B1AA0_00000314
    b lbl_fn_805B1AA0_00000354
lbl_fn_805B1AA0_00000314:
    lbz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805B1AA0_0000032C
    cmpwi r0, 0x1
    beq lbl_fn_805B1AA0_00000340
    b lbl_fn_805B1AA0_00000354
lbl_fn_805B1AA0_0000032C:
    lwz r3, lbl_8087F430
    mr r5, r30
    lwz r4, 0x0(r31)
    bl fn_80370AE4
    b lbl_fn_805B1AA0_00000354
lbl_fn_805B1AA0_00000340:
    lwz r3, lbl_8087F430
    mr r5, r30
    lwz r4, 0x0(r31)
    li r6, 0x0
    bl fn_80370320
lbl_fn_805B1AA0_00000354:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B1C88(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r4
    stw r30, 0x118(r1)
    mr r30, r3
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    lwz r0, 0x8(r4)
    cmplwi r0, 0x1
    ble lbl_fn_805B1C88_000003A8
    cmpwi r0, 0x2
    beq lbl_fn_805B1C88_00000470
    b lbl_fn_805B1C88_00000524
lbl_fn_805B1C88_000003A8:
    mr r29, r30
    li r28, 0x0
    b lbl_fn_805B1C88_00000460
lbl_fn_805B1C88_000003B4:
    lwz r4, 0x250(r29)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    lwz r7, 0x38(r4)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805B1C88_000003E4
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_805B1C88_000003E4
    li r6, 0x1
lbl_fn_805B1C88_000003E4:
    cmpwi r6, 0x0
    beq lbl_fn_805B1C88_00000400
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805B1C88_00000400
    li r3, 0x1
lbl_fn_805B1C88_00000400:
    cmpwi r3, 0x0
    beq lbl_fn_805B1C88_00000434
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805B1C88_00000428
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_805B1C88_00000428
    li r3, 0x1
lbl_fn_805B1C88_00000428:
    cmpwi r3, 0x0
    bne lbl_fn_805B1C88_00000434
    li r5, 0x1
lbl_fn_805B1C88_00000434:
    cmpwi r5, 0x0
    bne lbl_fn_805B1C88_00000448
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805B1C88_00000458
lbl_fn_805B1C88_00000448:
    lwz r3, lbl_8087EE68
    lwz r5, 0x0(r31)
    lwz r6, 0x4(r31)
    bl fn_80017EB0
lbl_fn_805B1C88_00000458:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_805B1C88_00000460:
    lbz r0, 0x24c(r30)
    cmpw r28, r0
    blt lbl_fn_805B1C88_000003B4
    b lbl_fn_805B1C88_00000524
lbl_fn_805B1C88_00000470:
    lbz r0, 0x24c(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B1C88_000004A0
lbl_fn_805B1C88_00000480:
    lwz r6, 0x250(r30)
    lwz r5, 0x5c(r6)
    lbz r0, 0x122(r5)
    cmpwi r0, 0x2
    bne lbl_fn_805B1C88_00000498
    b lbl_fn_805B1C88_000004A4
lbl_fn_805B1C88_00000498:
    addi r30, r30, 0x4
    bdnz lbl_fn_805B1C88_00000480
lbl_fn_805B1C88_000004A0:
    lwz r6, 0x250(r3)
lbl_fn_805B1C88_000004A4:
    cmpwi r6, 0x0
    beq lbl_fn_805B1C88_000004C4
    mr r4, r6
    lwz r3, lbl_8087EE68
    lwz r5, 0x0(r31)
    lwz r6, 0x4(r31)
    bl fn_80017EB0
    b lbl_fn_805B1C88_00000524
lbl_fn_805B1C88_000004C4:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_805B1C88_00000524
    lis r3, 0x1062
    lwz r9, 0x0(r4)
    addi r0, r3, 0x4dd3
    lis r4, lbl_80763C38@ha
    mulhw r0, r0, r9
    lwz r7, 0x4(r31)
    addi r3, r1, 0x8
    addi r4, r4, lbl_80763C38@l
    srawi r6, r0, 6
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r8, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r8
    subf r6, r0, r9
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_805B1C88_00000524:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_805B1E60(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_25
    lbz r0, 0x4(r4)
    mr r29, r3
    mr r30, r4
    cmplwi r0, 0x1
    ble lbl_fn_805B1E60_00000580
    cmpwi r0, 0x2
    beq lbl_fn_805B1E60_00000650
    b lbl_fn_805B1E60_000006F0
lbl_fn_805B1E60_00000580:
    mr r26, r29
    li r31, 0x0
    lis r28, 0x2
    b lbl_fn_805B1E60_00000640
lbl_fn_805B1E60_00000590:
    lwz r4, 0x250(r26)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    lwz r7, 0x38(r4)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805B1E60_000005C0
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_805B1E60_000005C0
    li r6, 0x1
lbl_fn_805B1E60_000005C0:
    cmpwi r6, 0x0
    beq lbl_fn_805B1E60_000005DC
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805B1E60_000005DC
    li r3, 0x1
lbl_fn_805B1E60_000005DC:
    cmpwi r3, 0x0
    beq lbl_fn_805B1E60_00000610
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805B1E60_00000604
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_805B1E60_00000604
    li r3, 0x1
lbl_fn_805B1E60_00000604:
    cmpwi r3, 0x0
    bne lbl_fn_805B1E60_00000610
    li r5, 0x1
lbl_fn_805B1E60_00000610:
    cmpwi r5, 0x0
    bne lbl_fn_805B1E60_00000624
    lbz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805B1E60_00000638
lbl_fn_805B1E60_00000624:
    lwz r3, lbl_8087F048
    subi r6, r28, 0x7960
    lwz r5, 0x0(r30)
    li r7, -0x1
    bl fn_80102A40
lbl_fn_805B1E60_00000638:
    addi r26, r26, 0x4
    addi r31, r31, 0x1
lbl_fn_805B1E60_00000640:
    lbz r0, 0x24c(r29)
    cmpw r31, r0
    blt lbl_fn_805B1E60_00000590
    b lbl_fn_805B1E60_000006F0
lbl_fn_805B1E60_00000650:
    lbz r0, 0x24c(r3)
    li r31, 0x0
    lwz r28, 0x0(r4)
    cmpwi r0, 0x0
    lwz r27, 0x250(r3)
    lfs f31, lbl_80888374
    ble lbl_fn_805B1E60_000006D4
    mr r26, r29
    b lbl_fn_805B1E60_000006C8
lbl_fn_805B1E60_00000674:
    lwz r25, 0x250(r26)
    addi r3, r1, 0x8
    lfs f1, 0x530(r28)
    lfs f0, 0x530(r25)
    lfs f3, 0x52c(r28)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r25)
    lfs f1, 0x528(r28)
    lfs f0, 0x528(r25)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_805B1E60_000006C0
    mr r27, r25
    fmr f31, f1
lbl_fn_805B1E60_000006C0:
    addi r26, r26, 0x4
    addi r31, r31, 0x1
lbl_fn_805B1E60_000006C8:
    lbz r0, 0x24c(r29)
    cmpw r31, r0
    blt lbl_fn_805B1E60_00000674
lbl_fn_805B1E60_000006D4:
    lis r6, 0x2
    lwz r3, lbl_8087F048
    lwz r5, 0x0(r30)
    mr r4, r27
    subi r6, r6, 0x7960
    li r7, -0x1
    bl fn_80102A40
lbl_fn_805B1E60_000006F0:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805B202C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stfd f28, 0x70(r1)
    psq_st f28, 0x78(r1), 0, 0
    bl _savegpr_26
    lbz r0, 0x4(r4)
    mr r30, r3
    mr r26, r4
    cmpwi r0, 0x0
    beq lbl_fn_805B202C_00000774
    cmpwi r0, 0x1
    beq lbl_fn_805B202C_0000077C
    cmpwi r0, 0x2
    beq lbl_fn_805B202C_00000790
    cmpwi r0, 0x3
    beq lbl_fn_805B202C_000007A4
    b lbl_fn_805B202C_0000093C
lbl_fn_805B202C_00000774:
    lwz r31, 0x0(r4)
    b lbl_fn_805B202C_000007AC
lbl_fn_805B202C_0000077C:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r4)
    bl fn_80370A78
    mr r31, r3
    b lbl_fn_805B202C_000007AC
lbl_fn_805B202C_00000790:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r4)
    bl fn_80370174
    mr r31, r3
    b lbl_fn_805B202C_000007AC
lbl_fn_805B202C_000007A4:
    bl fn_80680CF8
    b lbl_fn_805B202C_0000093C
lbl_fn_805B202C_000007AC:
    lbz r0, 0x5(r26)
    cmpwi r0, 0x0
    beq lbl_fn_805B202C_000007D4
    cmpwi r0, 0x3
    beq lbl_fn_805B202C_000008B8
    cmpwi r0, 0x4
    beq lbl_fn_805B202C_000008D0
    cmpwi r0, 0x5
    beq lbl_fn_805B202C_00000908
    b lbl_fn_805B202C_0000093C
lbl_fn_805B202C_000007D4:
    lis r3, lbl_80763C28@ha
    lfs f29, lbl_8088836C
    lfd f28, lbl_80763C28@l(r3)
    mr r26, r30
    lfs f30, lbl_80888368
    li r27, 0x0
    lfs f31, lbl_80888370
    lis r29, 0x4330
    b lbl_fn_805B202C_000008A8
lbl_fn_805B202C_000007F8:
    lwz r28, 0x250(r26)
    stw r29, 0x50(r1)
    lwz r0, 0x940(r28)
    addi r3, r28, 0x7d4
    mullw r0, r31, r0
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f28
    fdivs f0, f0, f29
    stfs f0, 0x7d8(r28)
    bl fn_801333E4
    cmpwi r31, 0x0
    bgt lbl_fn_805B202C_000008A0
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_805B202C_000008A0
    stfs f30, 0x14(r1)
    addi r3, r1, 0x20
    li r4, 0x79
    stfs f30, 0x18(r1)
    stfs f31, 0x1c(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x1c(r1)
    mr r5, r28
    lfs f1, 0x18(r1)
    addi r6, r1, 0x8
    lfs f0, 0x14(r1)
    fneg f2, f2
    fneg f1, f1
    lwz r3, lbl_8087F048
    fneg f0, f0
    stfs f2, 0x10(r1)
    li r4, 0x0
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    bl fn_800FDE60
lbl_fn_805B202C_000008A0:
    addi r26, r26, 0x4
    addi r27, r27, 0x1
lbl_fn_805B202C_000008A8:
    lbz r0, 0x24c(r30)
    cmpw r27, r0
    blt lbl_fn_805B202C_000007F8
    b lbl_fn_805B202C_0000093C
lbl_fn_805B202C_000008B8:
    cmplwi r31, 0x2
    bgt lbl_fn_805B202C_0000093C
    li r0, 0x1
    stb r31, 0x23f(r30)
    stw r0, 0x378(r30)
    b lbl_fn_805B202C_0000093C
lbl_fn_805B202C_000008D0:
    li r0, 0x1
    stb r31, 0x240(r30)
    mr r5, r30
    li r4, 0x0
    stw r0, 0x378(r30)
    b lbl_fn_805B202C_000008F8
lbl_fn_805B202C_000008E8:
    lwz r3, 0x250(r5)
    addi r5, r5, 0x4
    addi r4, r4, 0x1
    stw r31, 0xd18(r3)
lbl_fn_805B202C_000008F8:
    lbz r0, 0x24c(r30)
    cmpw r4, r0
    blt lbl_fn_805B202C_000008E8
    b lbl_fn_805B202C_0000093C
lbl_fn_805B202C_00000908:
    li r0, 0x1
    stb r31, 0x241(r30)
    mr r5, r30
    li r4, 0x0
    stw r0, 0x378(r30)
    b lbl_fn_805B202C_00000930
lbl_fn_805B202C_00000920:
    lwz r3, 0x250(r5)
    addi r5, r5, 0x4
    addi r4, r4, 0x1
    stw r31, 0xd0c(r3)
lbl_fn_805B202C_00000930:
    lbz r0, 0x24c(r30)
    cmpw r4, r0
    blt lbl_fn_805B202C_00000920
lbl_fn_805B202C_0000093C:
    addi r11, r1, 0x70
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    bl _restgpr_26
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_805B2290(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lbz r0, 0x5(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B2290_000009C8
    cmpwi r0, 0x1
    beq lbl_fn_805B2290_00000B58
    cmpwi r0, 0x2
    beq lbl_fn_805B2290_00000B6C
    cmpwi r0, 0x3
    beq lbl_fn_805B2290_00000BD8
    cmpwi r0, 0x4
    beq lbl_fn_805B2290_00000BE0
    cmpwi r0, 0x5
    beq lbl_fn_805B2290_00000BE8
    b lbl_fn_805B2290_00000C2C
lbl_fn_805B2290_000009C8:
    lbz r7, 0x24c(r3)
    li r30, 0x0
    lfs f2, lbl_80888368
    li r12, 0x0
    cmpwi cr1, r7, 0x0
    ble cr1, lbl_fn_805B2290_00000B0C
    cmpwi r7, 0x8
    subi r5, r7, 0x8
    ble lbl_fn_805B2290_00000AD4
    li r6, 0x0
    blt cr1, lbl_fn_805B2290_00000A08
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r7, r0
    bgt lbl_fn_805B2290_00000A08
    li r6, 0x1
lbl_fn_805B2290_00000A08:
    cmpwi r6, 0x0
    beq lbl_fn_805B2290_00000AD4
    addi r0, r5, 0x7
    mr r29, r3
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_805B2290_00000AD4
lbl_fn_805B2290_00000A28:
    lwz r11, 0x250(r29)
    addi r12, r12, 0x8
    lwz r6, 0x264(r29)
    lfs f0, 0x7d8(r11)
    lwz r10, 0x254(r29)
    fadds f2, f2, f0
    lwz r0, 0x940(r11)
    lfs f0, 0x7d8(r10)
    lwz r9, 0x258(r29)
    add r30, r30, r0
    fadds f2, f2, f0
    lfs f0, 0x7d8(r9)
    lwz r8, 0x25c(r29)
    fadds f2, f2, f0
    lwz r10, 0x940(r10)
    lfs f0, 0x7d8(r8)
    lwz r7, 0x260(r29)
    add r30, r30, r10
    fadds f2, f2, f0
    lfs f0, 0x7d8(r7)
    lwz r0, 0x940(r9)
    fadds f2, f2, f0
    lfs f1, 0x7d8(r6)
    lwz r5, 0x268(r29)
    add r30, r30, r0
    lwz r8, 0x940(r8)
    fadds f2, f2, f1
    lfs f0, 0x7d8(r5)
    add r30, r30, r8
    lwz r4, 0x26c(r29)
    addi r29, r29, 0x20
    lwz r0, 0x940(r7)
    fadds f2, f2, f0
    lfs f0, 0x7d8(r4)
    add r30, r30, r0
    lwz r0, 0x940(r6)
    lwz r5, 0x940(r5)
    add r30, r30, r0
    fadds f2, f2, f0
    lwz r0, 0x940(r4)
    add r30, r30, r5
    add r30, r30, r0
    bdnz lbl_fn_805B2290_00000A28
lbl_fn_805B2290_00000AD4:
    lbz r5, 0x24c(r3)
    slwi r0, r12, 2
    add r4, r3, r0
    subf r0, r12, r5
    mtctr r0
    cmpw r12, r5
    bge lbl_fn_805B2290_00000B0C
lbl_fn_805B2290_00000AF0:
    lwz r3, 0x250(r4)
    addi r4, r4, 0x4
    lfs f0, 0x7d8(r3)
    lwz r0, 0x940(r3)
    fadds f2, f2, f0
    add r30, r30, r0
    bdnz lbl_fn_805B2290_00000AF0
lbl_fn_805B2290_00000B0C:
    cmpwi r30, 0x0
    bne lbl_fn_805B2290_00000B1C
    lfs f0, lbl_80888368
    b lbl_fn_805B2290_00000B48
lbl_fn_805B2290_00000B1C:
    xoris r3, r30, 0x8000
    lis r0, 0x4330
    lfs f0, lbl_8088836C
    lis r4, lbl_80763C28@ha
    stw r3, 0xc(r1)
    lfd f1, lbl_80763C28@l(r4)
    fmuls f2, f0, f2
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
lbl_fn_805B2290_00000B48:
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r5, 0x14(r1)
    b lbl_fn_805B2290_00000BF4
lbl_fn_805B2290_00000B58:
    bl fn_805AE5EC
    fctiwz f0, f1
    stfd f0, 0x10(r1)
    lwz r5, 0x14(r1)
    b lbl_fn_805B2290_00000BF4
lbl_fn_805B2290_00000B6C:
    lwz r3, 0x218(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805B2290_00000B80
    lwz r5, 0x8c(r3)
    b lbl_fn_805B2290_00000B84
lbl_fn_805B2290_00000B80:
    li r5, 0x0
lbl_fn_805B2290_00000B84:
    cmpwi r5, 0x0
    bne lbl_fn_805B2290_00000B94
    lfs f0, lbl_80888368
    b lbl_fn_805B2290_00000BC8
lbl_fn_805B2290_00000B94:
    lwz r4, 0x940(r5)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r3, lbl_80763C28@ha
    xoris r0, r4, 0x8000
    lfs f3, lbl_8088836C
    stw r0, 0x14(r1)
    lfs f2, 0x7d8(r5)
    lfd f1, lbl_80763C28@l(r3)
    lfd f0, 0x10(r1)
    fmuls f2, f3, f2
    fsubs f0, f0, f1
    fdivs f0, f2, f0
lbl_fn_805B2290_00000BC8:
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r5, 0x14(r1)
    b lbl_fn_805B2290_00000BF4
lbl_fn_805B2290_00000BD8:
    lbz r5, 0x23f(r3)
    b lbl_fn_805B2290_00000BF4
lbl_fn_805B2290_00000BE0:
    lbz r5, 0x240(r3)
    b lbl_fn_805B2290_00000BF4
lbl_fn_805B2290_00000BE8:
    lbz r5, 0x241(r3)
    b lbl_fn_805B2290_00000BF4
    b lbl_fn_805B2290_00000C2C
lbl_fn_805B2290_00000BF4:
    lbz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805B2290_00000C0C
    cmpwi r0, 0x1
    beq lbl_fn_805B2290_00000C1C
    b lbl_fn_805B2290_00000C2C
lbl_fn_805B2290_00000C0C:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r31)
    bl fn_80370AE4
    b lbl_fn_805B2290_00000C2C
lbl_fn_805B2290_00000C1C:
    lwz r3, lbl_8087F430
    li r6, 0x0
    lwz r4, 0x0(r31)
    bl fn_80370320
lbl_fn_805B2290_00000C2C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805B2564(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x210(r3)
    subic. r4, r4, 0x1
    bge lbl_fn_805B2564_00000C6C
    addi r4, r4, 0x20
lbl_fn_805B2564_00000C6C:
    lwz r0, 0x214(r3)
    cmpw r4, r0
    bne lbl_fn_805B2564_00000C80
    li r4, 0x0
    b lbl_fn_805B2564_00000DB0
lbl_fn_805B2564_00000C80:
    lwz r4, 0x210(r3)
    subic. r4, r4, 0x1
    bge lbl_fn_805B2564_00000C90
    addi r4, r4, 0x20
lbl_fn_805B2564_00000C90:
    slwi r0, r4, 4
    add r3, r3, r0
    addi r4, r3, 0x10
    b lbl_fn_805B2564_00000DB0
lbl_fn_805B2564_00000CA0:
    lhz r0, 0x0(r4)
    cmpwi r0, 0x1c
    beq lbl_fn_805B2564_00000CE0
    cmpwi r0, 0x1d
    beq lbl_fn_805B2564_00000CF0
    cmpwi r0, 0x20
    beq lbl_fn_805B2564_00000D00
    cmpwi r0, 0x21
    beq lbl_fn_805B2564_00000D10
    cmpwi r0, 0x22
    beq lbl_fn_805B2564_00000D20
    cmpwi r0, 0x24
    beq lbl_fn_805B2564_00000D30
    cmpwi r0, 0x23
    beq lbl_fn_805B2564_00000D40
    b lbl_fn_805B2564_00000D4C
lbl_fn_805B2564_00000CE0:
    mr r3, r31
    addi r4, r4, 0x4
    bl fn_805AED78
    b lbl_fn_805B2564_00000D4C
lbl_fn_805B2564_00000CF0:
    mr r3, r31
    addi r4, r4, 0x4
    bl fn_805B191C
    b lbl_fn_805B2564_00000D4C
lbl_fn_805B2564_00000D00:
    mr r3, r31
    addi r4, r4, 0x4
    bl fn_805B1AA0
    b lbl_fn_805B2564_00000D4C
lbl_fn_805B2564_00000D10:
    mr r3, r31
    addi r4, r4, 0x4
    bl fn_805B1C88
    b lbl_fn_805B2564_00000D4C
lbl_fn_805B2564_00000D20:
    mr r3, r31
    addi r4, r4, 0x4
    bl fn_805B1E60
    b lbl_fn_805B2564_00000D4C
lbl_fn_805B2564_00000D30:
    mr r3, r31
    addi r4, r4, 0x4
    bl fn_805B202C
    b lbl_fn_805B2564_00000D4C
lbl_fn_805B2564_00000D40:
    mr r3, r31
    addi r4, r4, 0x4
    bl fn_805B2290
lbl_fn_805B2564_00000D4C:
    lbz r0, 0x23e(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_805B2564_00000DB8
    lwz r3, 0x210(r31)
    subic. r3, r3, 0x1
    stw r3, 0x210(r31)
    bge lbl_fn_805B2564_00000D70
    addi r0, r3, 0x20
    stw r0, 0x210(r31)
lbl_fn_805B2564_00000D70:
    lwz r3, 0x210(r31)
    subic. r3, r3, 0x1
    bge lbl_fn_805B2564_00000D80
    addi r3, r3, 0x20
lbl_fn_805B2564_00000D80:
    lwz r0, 0x214(r31)
    cmpw r3, r0
    bne lbl_fn_805B2564_00000D94
    li r4, 0x0
    b lbl_fn_805B2564_00000DB0
lbl_fn_805B2564_00000D94:
    lwz r3, 0x210(r31)
    subic. r3, r3, 0x1
    bge lbl_fn_805B2564_00000DA4
    addi r3, r3, 0x20
lbl_fn_805B2564_00000DA4:
    slwi r0, r3, 4
    add r3, r31, r0
    addi r4, r3, 0x10
lbl_fn_805B2564_00000DB0:
    cmpwi r4, 0x0
    bne lbl_fn_805B2564_00000CA0
lbl_fn_805B2564_00000DB8:
    lbz r0, 0x24c(r31)
    mr r8, r31
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B2564_00000E64
lbl_fn_805B2564_00000DD0:
    lwz r4, 0x250(r8)
    li r6, 0x0
    li r3, 0x0
    li r7, 0x0
    lwz r9, 0x38(r4)
    rlwinm r0, r9, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805B2564_00000E00
    clrlwi r0, r9, 31
    cmplwi r0, 0x1
    beq lbl_fn_805B2564_00000E00
    li r7, 0x1
lbl_fn_805B2564_00000E00:
    cmpwi r7, 0x0
    beq lbl_fn_805B2564_00000E1C
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805B2564_00000E1C
    li r3, 0x1
lbl_fn_805B2564_00000E1C:
    cmpwi r3, 0x0
    beq lbl_fn_805B2564_00000E50
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805B2564_00000E44
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_805B2564_00000E44
    li r3, 0x1
lbl_fn_805B2564_00000E44:
    cmpwi r3, 0x0
    bne lbl_fn_805B2564_00000E50
    li r6, 0x1
lbl_fn_805B2564_00000E50:
    cmpwi r6, 0x0
    beq lbl_fn_805B2564_00000E5C
    addi r5, r5, 0x1
lbl_fn_805B2564_00000E5C:
    addi r8, r8, 0x4
    bdnz lbl_fn_805B2564_00000DD0
lbl_fn_805B2564_00000E64:
    cmpwi r5, 0x0
    ble lbl_fn_805B2564_00000E74
    mr r3, r31
    bl fn_805B27A4
lbl_fn_805B2564_00000E74:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B27A4(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x270
    stfd f31, 0x280(r1)
    psq_st f31, 0x288(r1), 0, 0
    stfd f30, 0x270(r1)
    psq_st f30, 0x278(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0x378(r3)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000017E0
    li r4, 0x0
    stw r4, 0x378(r3)
    lwz r3, lbl_8087F048
    addis r29, r3, 0x1
    subic. r29, r29, 0x3410
    beq lbl_fn_805B27A4_000017E0
    li r0, 0x3
    addi r3, r1, 0x128
    addi r5, r1, 0x8
    lfs f0, lbl_80888370
    mtctr r0
lbl_fn_805B27A4_00000EE8:
    stfs f0, 0x0(r3)
    stw r4, 0x0(r5)
    stfs f0, 0x4(r3)
    stw r4, 0x4(r5)
    stfs f0, 0x8(r3)
    stw r4, 0x8(r5)
    stfs f0, 0xc(r3)
    stw r4, 0xc(r5)
    stfs f0, 0x10(r3)
    stw r4, 0x10(r5)
    stfs f0, 0x14(r3)
    stw r4, 0x14(r5)
    stfs f0, 0x18(r3)
    stw r4, 0x18(r5)
    stfs f0, 0x1c(r3)
    stw r4, 0x1c(r5)
    stfs f0, 0x20(r3)
    stw r4, 0x20(r5)
    stfs f0, 0x24(r3)
    stw r4, 0x24(r5)
    stfs f0, 0x28(r3)
    stw r4, 0x28(r5)
    stfs f0, 0x2c(r3)
    stw r4, 0x2c(r5)
    stfs f0, 0x30(r3)
    stw r4, 0x30(r5)
    stfs f0, 0x34(r3)
    stw r4, 0x34(r5)
    stfs f0, 0x38(r3)
    stw r4, 0x38(r5)
    stfs f0, 0x3c(r3)
    stw r4, 0x3c(r5)
    stfs f0, 0x40(r3)
    stw r4, 0x40(r5)
    stfs f0, 0x44(r3)
    stw r4, 0x44(r5)
    stfs f0, 0x48(r3)
    stw r4, 0x48(r5)
    stfs f0, 0x4c(r3)
    stw r4, 0x4c(r5)
    stfs f0, 0x50(r3)
    stw r4, 0x50(r5)
    stfs f0, 0x54(r3)
    stw r4, 0x54(r5)
    stfs f0, 0x58(r3)
    stw r4, 0x58(r5)
    stfs f0, 0x5c(r3)
    addi r3, r3, 0x60
    stw r4, 0x5c(r5)
    addi r5, r5, 0x60
    bdnz lbl_fn_805B27A4_00000EE8
    lwz r31, lbl_8087FA00
    addi r25, r1, 0x8
    li r28, 0x0
    li r26, 0x0
    li r24, 0x1
    b lbl_fn_805B27A4_000010DC
lbl_fn_805B27A4_00000FCC:
    lwz r0, 0x4c(r31)
    lbz r3, 0x23d(r27)
    add r30, r0, r26
    lbz r0, 0x23d(r30)
    cmpw r3, r0
    beq lbl_fn_805B27A4_000010D4
    lbz r0, 0x24c(r30)
    mr r8, r30
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B27A4_00001090
lbl_fn_805B27A4_00000FFC:
    lwz r4, 0x250(r8)
    li r6, 0x0
    li r3, 0x0
    li r7, 0x0
    lwz r9, 0x38(r4)
    rlwinm r0, r9, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805B27A4_0000102C
    clrlwi r0, r9, 31
    cmplwi r0, 0x1
    beq lbl_fn_805B27A4_0000102C
    li r7, 0x1
lbl_fn_805B27A4_0000102C:
    cmpwi r7, 0x0
    beq lbl_fn_805B27A4_00001048
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805B27A4_00001048
    li r3, 0x1
lbl_fn_805B27A4_00001048:
    cmpwi r3, 0x0
    beq lbl_fn_805B27A4_0000107C
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805B27A4_00001070
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_805B27A4_00001070
    li r3, 0x1
lbl_fn_805B27A4_00001070:
    cmpwi r3, 0x0
    bne lbl_fn_805B27A4_0000107C
    li r6, 0x1
lbl_fn_805B27A4_0000107C:
    cmpwi r6, 0x0
    beq lbl_fn_805B27A4_00001088
    addi r5, r5, 0x1
lbl_fn_805B27A4_00001088:
    addi r8, r8, 0x4
    bdnz lbl_fn_805B27A4_00000FFC
lbl_fn_805B27A4_00001090:
    cmpwi r5, 0x0
    ble lbl_fn_805B27A4_000010D4
    addi r23, r30, 0x250
    li r22, 0x0
    b lbl_fn_805B27A4_000010C8
lbl_fn_805B27A4_000010A4:
    lwz r3, lbl_8087F048
    lwz r4, 0x0(r23)
    bl fn_80102890
    cmpwi r3, 0x0
    blt lbl_fn_805B27A4_000010C0
    slwi r0, r3, 2
    stwx r24, r25, r0
lbl_fn_805B27A4_000010C0:
    addi r23, r23, 0x4
    addi r22, r22, 0x1
lbl_fn_805B27A4_000010C8:
    lbz r0, 0x24c(r30)
    cmpw r22, r0
    blt lbl_fn_805B27A4_000010A4
lbl_fn_805B27A4_000010D4:
    addi r28, r28, 0x1
    addi r26, r26, 0x37c
lbl_fn_805B27A4_000010DC:
    lwz r0, 0x48(r31)
    cmpw r28, r0
    blt lbl_fn_805B27A4_00000FCC
    lwz r4, 0x370(r27)
    subic. r3, r4, 0x1
    bge lbl_fn_805B27A4_000010F8
    addi r3, r3, 0x20
lbl_fn_805B27A4_000010F8:
    lwz r0, 0x374(r27)
    cmpw r3, r0
    bne lbl_fn_805B27A4_0000110C
    li r3, 0x0
    b lbl_fn_805B27A4_00001120
lbl_fn_805B27A4_0000110C:
    subic. r3, r4, 0x1
    bge lbl_fn_805B27A4_00001118
    addi r3, r3, 0x20
lbl_fn_805B27A4_00001118:
    add r3, r27, r3
    addi r3, r3, 0x350
lbl_fn_805B27A4_00001120:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B27A4_000016DC
    lbz r0, 0x243(r27)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_0000114C
    cmpwi r0, 0x1
    beq lbl_fn_805B27A4_00001158
    cmpwi r0, 0x2
    beq lbl_fn_805B27A4_00001164
    b lbl_fn_805B27A4_0000116C
lbl_fn_805B27A4_0000114C:
    li r0, 0x2
    stb r0, 0x245(r27)
    b lbl_fn_805B27A4_0000116C
lbl_fn_805B27A4_00001158:
    li r0, 0x1
    stb r0, 0x245(r27)
    b lbl_fn_805B27A4_0000116C
lbl_fn_805B27A4_00001164:
    li r0, 0x4
    stb r0, 0x245(r27)
lbl_fn_805B27A4_0000116C:
    lbz r0, 0x244(r27)
    cmpwi r0, 0x1
    beq lbl_fn_805B27A4_000011A4
    cmpwi r0, 0x2
    beq lbl_fn_805B27A4_00001374
    cmpwi r0, 0x3
    beq lbl_fn_805B27A4_00001544
    cmpwi r0, 0x4
    beq lbl_fn_805B27A4_000015D4
    cmpwi r0, 0x5
    beq lbl_fn_805B27A4_0000162C
    cmpwi r0, 0x6
    beq lbl_fn_805B27A4_00001684
    b lbl_fn_805B27A4_0000170C
lbl_fn_805B27A4_000011A4:
    li r0, 0x12
    addi r3, r1, 0x8
    lfs f1, lbl_8088838C
    li r5, -0x1
    li r4, 0x0
    mtctr r0
lbl_fn_805B27A4_000011BC:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000011E0
    lwz r6, 0x0(r29)
    lfs f0, 0x7d8(r6)
    fcmpo cr0, f0, f1
    bge lbl_fn_805B27A4_000011E0
    fmr f1, f0
    mr r5, r4
lbl_fn_805B27A4_000011E0:
    lwz r0, 0x4(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001208
    lwz r6, 0x934(r29)
    lfs f0, 0x7d8(r6)
    fcmpo cr0, f0, f1
    bge lbl_fn_805B27A4_00001208
    fmr f1, f0
    mr r5, r4
lbl_fn_805B27A4_00001208:
    lwz r0, 0x8(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001230
    lwz r6, 0x1268(r29)
    lfs f0, 0x7d8(r6)
    fcmpo cr0, f0, f1
    bge lbl_fn_805B27A4_00001230
    fmr f1, f0
    mr r5, r4
lbl_fn_805B27A4_00001230:
    lwz r0, 0xc(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001258
    lwz r6, 0x1b9c(r29)
    lfs f0, 0x7d8(r6)
    fcmpo cr0, f0, f1
    bge lbl_fn_805B27A4_00001258
    fmr f1, f0
    mr r5, r4
lbl_fn_805B27A4_00001258:
    addi r3, r3, 0x10
    addi r29, r29, 0x24d0
    addi r4, r4, 0x1
    bdnz lbl_fn_805B27A4_000011BC
    cmpwi r5, 0x0
    blt lbl_fn_805B27A4_0000170C
    li r0, 0xc
    addi r3, r1, 0x8
    addi r4, r1, 0x128
    lfs f0, lbl_8088837C
    lfs f1, lbl_80888380
    li r6, 0x0
    mtctr r0
lbl_fn_805B27A4_0000128C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000012AC
    cmpw r6, r5
    bne lbl_fn_805B27A4_000012A8
    stfs f1, 0x0(r4)
    b lbl_fn_805B27A4_000012AC
lbl_fn_805B27A4_000012A8:
    stfs f0, 0x0(r4)
lbl_fn_805B27A4_000012AC:
    lwz r0, 0x4(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000012D0
    cmpw r6, r5
    bne lbl_fn_805B27A4_000012CC
    stfs f1, 0x4(r4)
    b lbl_fn_805B27A4_000012D0
lbl_fn_805B27A4_000012CC:
    stfs f0, 0x4(r4)
lbl_fn_805B27A4_000012D0:
    lwz r0, 0x8(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000012F4
    cmpw r6, r5
    bne lbl_fn_805B27A4_000012F0
    stfs f1, 0x8(r4)
    b lbl_fn_805B27A4_000012F4
lbl_fn_805B27A4_000012F0:
    stfs f0, 0x8(r4)
lbl_fn_805B27A4_000012F4:
    lwz r0, 0xc(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001318
    cmpw r6, r5
    bne lbl_fn_805B27A4_00001314
    stfs f1, 0xc(r4)
    b lbl_fn_805B27A4_00001318
lbl_fn_805B27A4_00001314:
    stfs f0, 0xc(r4)
lbl_fn_805B27A4_00001318:
    lwz r0, 0x10(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_0000133C
    cmpw r6, r5
    bne lbl_fn_805B27A4_00001338
    stfs f1, 0x10(r4)
    b lbl_fn_805B27A4_0000133C
lbl_fn_805B27A4_00001338:
    stfs f0, 0x10(r4)
lbl_fn_805B27A4_0000133C:
    lwz r0, 0x14(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001360
    cmpw r6, r5
    bne lbl_fn_805B27A4_0000135C
    stfs f1, 0x14(r4)
    b lbl_fn_805B27A4_00001360
lbl_fn_805B27A4_0000135C:
    stfs f0, 0x14(r4)
lbl_fn_805B27A4_00001360:
    addi r3, r3, 0x18
    addi r4, r4, 0x18
    addi r6, r6, 0x1
    bdnz lbl_fn_805B27A4_0000128C
    b lbl_fn_805B27A4_0000170C
lbl_fn_805B27A4_00001374:
    li r0, 0x12
    addi r3, r1, 0x8
    lfs f1, lbl_80888368
    li r5, -0x1
    li r4, 0x0
    mtctr r0
lbl_fn_805B27A4_0000138C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000013B0
    lwz r6, 0x0(r29)
    lfs f0, 0x7d8(r6)
    fcmpo cr0, f0, f1
    ble lbl_fn_805B27A4_000013B0
    fmr f1, f0
    mr r5, r4
lbl_fn_805B27A4_000013B0:
    lwz r0, 0x4(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000013D8
    lwz r6, 0x934(r29)
    lfs f0, 0x7d8(r6)
    fcmpo cr0, f0, f1
    ble lbl_fn_805B27A4_000013D8
    fmr f1, f0
    mr r5, r4
lbl_fn_805B27A4_000013D8:
    lwz r0, 0x8(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001400
    lwz r6, 0x1268(r29)
    lfs f0, 0x7d8(r6)
    fcmpo cr0, f0, f1
    ble lbl_fn_805B27A4_00001400
    fmr f1, f0
    mr r5, r4
lbl_fn_805B27A4_00001400:
    lwz r0, 0xc(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001428
    lwz r6, 0x1b9c(r29)
    lfs f0, 0x7d8(r6)
    fcmpo cr0, f0, f1
    ble lbl_fn_805B27A4_00001428
    fmr f1, f0
    mr r5, r4
lbl_fn_805B27A4_00001428:
    addi r3, r3, 0x10
    addi r29, r29, 0x24d0
    addi r4, r4, 0x1
    bdnz lbl_fn_805B27A4_0000138C
    cmpwi r5, 0x0
    blt lbl_fn_805B27A4_0000170C
    li r0, 0xc
    addi r3, r1, 0x8
    addi r4, r1, 0x128
    lfs f0, lbl_8088837C
    lfs f1, lbl_80888380
    li r6, 0x0
    mtctr r0
lbl_fn_805B27A4_0000145C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_0000147C
    cmpw r6, r5
    bne lbl_fn_805B27A4_00001478
    stfs f1, 0x0(r4)
    b lbl_fn_805B27A4_0000147C
lbl_fn_805B27A4_00001478:
    stfs f0, 0x0(r4)
lbl_fn_805B27A4_0000147C:
    lwz r0, 0x4(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000014A0
    cmpw r6, r5
    bne lbl_fn_805B27A4_0000149C
    stfs f1, 0x4(r4)
    b lbl_fn_805B27A4_000014A0
lbl_fn_805B27A4_0000149C:
    stfs f0, 0x4(r4)
lbl_fn_805B27A4_000014A0:
    lwz r0, 0x8(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000014C4
    cmpw r6, r5
    bne lbl_fn_805B27A4_000014C0
    stfs f1, 0x8(r4)
    b lbl_fn_805B27A4_000014C4
lbl_fn_805B27A4_000014C0:
    stfs f0, 0x8(r4)
lbl_fn_805B27A4_000014C4:
    lwz r0, 0xc(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000014E8
    cmpw r6, r5
    bne lbl_fn_805B27A4_000014E4
    stfs f1, 0xc(r4)
    b lbl_fn_805B27A4_000014E8
lbl_fn_805B27A4_000014E4:
    stfs f0, 0xc(r4)
lbl_fn_805B27A4_000014E8:
    lwz r0, 0x10(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_0000150C
    cmpw r6, r5
    bne lbl_fn_805B27A4_00001508
    stfs f1, 0x10(r4)
    b lbl_fn_805B27A4_0000150C
lbl_fn_805B27A4_00001508:
    stfs f0, 0x10(r4)
lbl_fn_805B27A4_0000150C:
    lwz r0, 0x14(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001530
    cmpw r6, r5
    bne lbl_fn_805B27A4_0000152C
    stfs f1, 0x14(r4)
    b lbl_fn_805B27A4_00001530
lbl_fn_805B27A4_0000152C:
    stfs f0, 0x14(r4)
lbl_fn_805B27A4_00001530:
    addi r3, r3, 0x18
    addi r4, r4, 0x18
    addi r6, r6, 0x1
    bdnz lbl_fn_805B27A4_0000145C
    b lbl_fn_805B27A4_0000170C
lbl_fn_805B27A4_00001544:
    lfs f1, lbl_8088837C
    addi r5, r1, 0x8
    lfs f0, lbl_80888380
    addi r6, r1, 0x128
    li r7, 0x0
lbl_fn_805B27A4_00001558:
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000015B8
    lwz r0, 0x48(r31)
    li r3, 0x0
    stfs f1, 0x0(r6)
    lwz r8, 0x0(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B27A4_000015B8
lbl_fn_805B27A4_00001580:
    lwz r0, 0x4c(r31)
    add r4, r0, r3
    lwz r4, 0x218(r4)
    cmpwi r4, 0x0
    beq lbl_fn_805B27A4_0000159C
    lwz r0, 0x8c(r4)
    b lbl_fn_805B27A4_000015A0
lbl_fn_805B27A4_0000159C:
    li r0, 0x0
lbl_fn_805B27A4_000015A0:
    cmplw r8, r0
    bne lbl_fn_805B27A4_000015B0
    stfs f0, 0x0(r6)
    b lbl_fn_805B27A4_000015B8
lbl_fn_805B27A4_000015B0:
    addi r3, r3, 0x37c
    bdnz lbl_fn_805B27A4_00001580
lbl_fn_805B27A4_000015B8:
    addi r7, r7, 0x1
    addi r29, r29, 0x934
    cmpwi r7, 0x48
    addi r6, r6, 0x4
    addi r5, r5, 0x4
    blt lbl_fn_805B27A4_00001558
    b lbl_fn_805B27A4_0000170C
lbl_fn_805B27A4_000015D4:
    lfs f30, lbl_8088837C
    addi r24, r1, 0x8
    lfs f31, lbl_80888380
    addi r25, r1, 0x128
    li r22, 0x0
lbl_fn_805B27A4_000015E8:
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001610
    lwz r3, 0x0(r29)
    bl fn_8014FCC4
    cmpwi r3, 0x0
    beq lbl_fn_805B27A4_0000160C
    stfs f31, 0x0(r25)
    b lbl_fn_805B27A4_00001610
lbl_fn_805B27A4_0000160C:
    stfs f30, 0x0(r25)
lbl_fn_805B27A4_00001610:
    addi r22, r22, 0x1
    addi r29, r29, 0x934
    cmpwi r22, 0x48
    addi r25, r25, 0x4
    addi r24, r24, 0x4
    blt lbl_fn_805B27A4_000015E8
    b lbl_fn_805B27A4_0000170C
lbl_fn_805B27A4_0000162C:
    lfs f30, lbl_8088837C
    addi r24, r1, 0x8
    lfs f31, lbl_80888380
    addi r25, r1, 0x128
    li r22, 0x0
lbl_fn_805B27A4_00001640:
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001668
    lwz r3, 0x0(r29)
    bl fn_8014FCE8
    cmpwi r3, 0x0
    beq lbl_fn_805B27A4_00001664
    stfs f31, 0x0(r25)
    b lbl_fn_805B27A4_00001668
lbl_fn_805B27A4_00001664:
    stfs f30, 0x0(r25)
lbl_fn_805B27A4_00001668:
    addi r22, r22, 0x1
    addi r29, r29, 0x934
    cmpwi r22, 0x48
    addi r25, r25, 0x4
    addi r24, r24, 0x4
    blt lbl_fn_805B27A4_00001640
    b lbl_fn_805B27A4_0000170C
lbl_fn_805B27A4_00001684:
    lfs f31, lbl_8088837C
    addi r24, r1, 0x8
    lfs f30, lbl_80888380
    addi r25, r1, 0x128
    li r22, 0x0
lbl_fn_805B27A4_00001698:
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000016C0
    lwz r3, 0x0(r29)
    bl fn_8014FD0C
    cmpwi r3, 0x0
    beq lbl_fn_805B27A4_000016BC
    stfs f30, 0x0(r25)
    b lbl_fn_805B27A4_000016C0
lbl_fn_805B27A4_000016BC:
    stfs f31, 0x0(r25)
lbl_fn_805B27A4_000016C0:
    addi r22, r22, 0x1
    addi r29, r29, 0x934
    cmpwi r22, 0x48
    addi r25, r25, 0x4
    addi r24, r24, 0x4
    blt lbl_fn_805B27A4_00001698
    b lbl_fn_805B27A4_0000170C
lbl_fn_805B27A4_000016DC:
    cmplwi r0, 0x1
    bne lbl_fn_805B27A4_0000170C
    lwz r4, lbl_8087F8A0
    lwz r3, lbl_8087F048
    lwz r4, 0x48(r4)
    bl fn_80102890
    cmpwi r3, 0x0
    blt lbl_fn_805B27A4_0000170C
    slwi r0, r3, 2
    addi r3, r1, 0x128
    lfs f0, lbl_80888368
    stfsx f0, r3, r0
lbl_fn_805B27A4_0000170C:
    mr r24, r27
    li r22, 0x0
    li r28, 0xc
    b lbl_fn_805B27A4_000017D4
lbl_fn_805B27A4_0000171C:
    lwz r3, lbl_8087F048
    lwz r4, 0x250(r24)
    bl fn_80103F60
    cmpwi r3, 0x0
    beq lbl_fn_805B27A4_000017CC
    addi r4, r1, 0x8
    addi r5, r1, 0x128
    li r6, 0x0
    mtctr r28
lbl_fn_805B27A4_00001740:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001754
    lfs f0, 0x0(r5)
    stfs f0, 0x128(r3)
lbl_fn_805B27A4_00001754:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001768
    lfs f0, 0x4(r5)
    stfs f0, 0x12c(r3)
lbl_fn_805B27A4_00001768:
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_0000177C
    lfs f0, 0x8(r5)
    stfs f0, 0x130(r3)
lbl_fn_805B27A4_0000177C:
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_00001790
    lfs f0, 0xc(r5)
    stfs f0, 0x134(r3)
lbl_fn_805B27A4_00001790:
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000017A4
    lfs f0, 0x10(r5)
    stfs f0, 0x138(r3)
lbl_fn_805B27A4_000017A4:
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B27A4_000017B8
    lfs f0, 0x14(r5)
    stfs f0, 0x13c(r3)
lbl_fn_805B27A4_000017B8:
    addi r4, r4, 0x18
    addi r5, r5, 0x18
    addi r3, r3, 0x18
    addi r6, r6, 0x5
    bdnz lbl_fn_805B27A4_00001740
lbl_fn_805B27A4_000017CC:
    addi r24, r24, 0x4
    addi r22, r22, 0x1
lbl_fn_805B27A4_000017D4:
    lbz r0, 0x24c(r27)
    cmpw r22, r0
    blt lbl_fn_805B27A4_0000171C
lbl_fn_805B27A4_000017E0:
    addi r11, r1, 0x270
    psq_l f31, 0x288(r1), 0, 0
    lfd f31, 0x280(r1)
    psq_l f30, 0x278(r1), 0, 0
    lfd f30, 0x270(r1)
    bl _restgpr_22
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_805B3124(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r8, 0x0(r3)
    mr r31, r3
    mr r26, r4
    mr r27, r5
    addis r0, r8, 0x1
    mr r28, r6
    cmplwi r0, 0xffff
    mr r29, r7
    bne lbl_fn_805B3124_00001864
    lis r4, lbl_80763C38@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80763C38@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805B3124_00001864:
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_805B3124_00001898
    lis r3, __files@ha
    lis r4, lbl_80797774@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80797774@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805B3124_00001898:
    addic. r3, r30, 0xc
    addi r0, r31, 0x4
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    beq lbl_fn_805B3124_000018BC
    lfs f0, 0x0(r29)
    stfs f0, 0x0(r3)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r3)
lbl_fn_805B3124_000018BC:
    lwz r30, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r30)
    addic. r3, r30, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r30)
    beq lbl_fn_805B3124_000018DC
    stw r26, 0x0(r3)
lbl_fn_805B3124_000018DC:
    cmpwi r27, 0x0
    beq lbl_fn_805B3124_000018EC
    stw r30, 0x0(r26)
    b lbl_fn_805B3124_000018F0
lbl_fn_805B3124_000018EC:
    stw r30, 0x4(r26)
lbl_fn_805B3124_000018F0:
    lwz r5, 0x0(r31)
    mr r3, r30
    lwz r4, 0x4(r31)
    addi r0, r5, 0x1
    stw r0, 0x0(r31)
    bl fn_8003E120
    cmpwi r28, 0x0
    beq lbl_fn_805B3124_00001914
    stw r30, 0x8(r31)
lbl_fn_805B3124_00001914:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805B3124_00001924
    bl dtor_80084684
lbl_fn_805B3124_00001924:
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805B325C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_805B325C_000019EC
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_805B325C_000019A8
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B325C_0000198C
    bl fn_805B325C
lbl_fn_805B325C_0000198C:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B325C_000019A0
    mr r3, r28
    bl fn_805B325C
lbl_fn_805B325C_000019A0:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B325C_000019A8:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_805B325C_000019E4
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B325C_000019C8
    mr r3, r28
    bl fn_805B325C
lbl_fn_805B325C_000019C8:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B325C_000019DC
    mr r3, r28
    bl fn_805B325C
lbl_fn_805B325C_000019DC:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B325C_000019E4:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805B325C_000019EC:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_805B325C_00001A78
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_805B325C_00001A34
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805B325C_00001A18
    mr r3, r28
    bl fn_805B325C
lbl_fn_805B325C_00001A18:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805B325C_00001A2C
    mr r3, r28
    bl fn_805B325C
lbl_fn_805B325C_00001A2C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805B325C_00001A34:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_805B325C_00001A70
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805B325C_00001A54
    mr r3, r28
    bl fn_805B325C
lbl_fn_805B325C_00001A54:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805B325C_00001A68
    mr r3, r28
    bl fn_805B325C
lbl_fn_805B325C_00001A68:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805B325C_00001A70:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B325C_00001A78:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
