#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D1C60(void);
extern void fn_800D1CD4(void);
extern void fn_800D5808(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807784B4[];
extern u8 jumptable_807784EC[];
extern u8 lbl_80731D40[];

/* Small data declarations */
extern u32 lbl_8087D768;
extern u32 lbl_8087D78C;
extern u32 lbl_8087D790;
extern u32 lbl_8087EF00;

/* Function declarations */
void fn_8007E9EC(void);
void fn_8007EA24(void);
void fn_8007ED30(void);
void fn_8007F388(void);
void fn_8007F464(void);
void fn_8007FAC8(void);
void fn_8007FAF0(void);
void fn_8007FE5C(void);

asm void fn_8007E9EC(void)
{
    nofralloc
    li r5, 0x0
    li r0, 0x1
    li r4, -0x1
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stb r4, 0x10(r3)
    stb r5, 0x11(r3)
    stb r5, 0x12(r3)
    stb r5, 0x13(r3)
    stb r0, 0x14(r3)
    stb r0, 0x15(r3)
    blr
}

asm void fn_8007EA24(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    lis r25, 0x2aab
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
    subi r30, r25, 0x5555
lbl_fn_8007EA24_00000064:
    subf r0, r26, r27
    mulhw r0, r30, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_8007EA24_00000330
    cmpwi r7, 0x14
    bgt lbl_fn_8007EA24_0000009C
    mr r3, r26
    mr r4, r27
    mr r5, r28
    bl fn_8007F464
    b lbl_fn_8007EA24_00000330
lbl_fn_8007EA24_0000009C:
    lwz r4, lbl_8087D768
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x18
    add r3, r26, r0
    blt lbl_fn_8007EA24_000000DC
    li r6, -0x4
lbl_fn_8007EA24_000000DC:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087D768
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0x18
    add r4, r26, r0
    blt lbl_fn_8007EA24_00000128
    li r6, -0x4
    stw r6, lbl_8087D768
lbl_fn_8007EA24_00000128:
    subi r23, r27, 0x18
    mr r6, r28
    mr r5, r23
    bl fn_8007F388
    mr r29, r26
    mr r24, r23
    b lbl_fn_8007EA24_00000148
lbl_fn_8007EA24_00000144:
    addi r29, r29, 0x18
lbl_fn_8007EA24_00000148:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_8007FAC8
    cmpwi r3, 0x0
    bne lbl_fn_8007EA24_00000144
lbl_fn_8007EA24_00000160:
    subi r24, r24, 0x18
    cmplw r29, r24
    beq lbl_fn_8007EA24_00000184
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_8007FAC8
    cmpwi r3, 0x0
    beq lbl_fn_8007EA24_00000160
lbl_fn_8007EA24_00000184:
    cmplw r29, r24
    bge lbl_fn_8007EA24_000001F4
    mr r3, r29
    mr r4, r24
    bl fn_8007ED30
    addi r29, r29, 0x18
    b lbl_fn_8007EA24_000001A4
lbl_fn_8007EA24_000001A0:
    addi r29, r29, 0x18
lbl_fn_8007EA24_000001A4:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_8007FAC8
    cmpwi r3, 0x0
    bne lbl_fn_8007EA24_000001A0
lbl_fn_8007EA24_000001BC:
    subi r24, r24, 0x18
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_8007FAC8
    cmpwi r3, 0x0
    beq lbl_fn_8007EA24_000001BC
    cmplw r29, r24
    bge lbl_fn_8007EA24_000001F4
    mr r3, r29
    mr r4, r24
    bl fn_8007ED30
    addi r29, r29, 0x18
    b lbl_fn_8007EA24_000001A4
lbl_fn_8007EA24_000001F4:
    cmplw r29, r26
    bne lbl_fn_8007EA24_000002CC
    mr r3, r29
    mr r4, r23
    bl fn_8007ED30
    subi r24, r27, 0x18
    mr r3, r28
    mr r4, r26
    addi r29, r29, 0x18
    mr r5, r24
    bl fn_8007FAC8
    cmpwi r3, 0x0
    bne lbl_fn_8007EA24_00000264
    b lbl_fn_8007EA24_00000230
lbl_fn_8007EA24_0000022C:
    addi r29, r29, 0x18
lbl_fn_8007EA24_00000230:
    cmplw r29, r27
    beq lbl_fn_8007EA24_00000250
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_8007FAC8
    cmpwi r3, 0x0
    beq lbl_fn_8007EA24_0000022C
lbl_fn_8007EA24_00000250:
    cmplw r29, r24
    bge lbl_fn_8007EA24_00000264
    mr r3, r29
    mr r4, r24
    bl fn_8007ED30
lbl_fn_8007EA24_00000264:
    cmplw r29, r24
    bge lbl_fn_8007EA24_000002C4
    b lbl_fn_8007EA24_00000274
lbl_fn_8007EA24_00000270:
    addi r29, r29, 0x18
lbl_fn_8007EA24_00000274:
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_8007FAC8
    cmpwi r3, 0x0
    beq lbl_fn_8007EA24_00000270
lbl_fn_8007EA24_0000028C:
    subi r24, r24, 0x18
    mr r3, r28
    mr r4, r26
    mr r5, r24
    bl fn_8007FAC8
    cmpwi r3, 0x0
    bne lbl_fn_8007EA24_0000028C
    cmplw r29, r24
    bge lbl_fn_8007EA24_000002C4
    mr r3, r29
    mr r4, r24
    bl fn_8007ED30
    addi r29, r29, 0x18
    b lbl_fn_8007EA24_00000274
lbl_fn_8007EA24_000002C4:
    mr r26, r29
    b lbl_fn_8007EA24_00000064
lbl_fn_8007EA24_000002CC:
    subf r0, r26, r29
    subi r4, r25, 0x5555
    mulhw r3, r4, r0
    subf r0, r29, r27
    mulhw r0, r4, r0
    srawi r3, r3, 2
    srwi r4, r3, 31
    srawi r0, r0, 2
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_8007EA24_00000318
    mr r3, r26
    mr r4, r29
    mr r5, r28
    bl fn_8007EA24
    mr r26, r29
    b lbl_fn_8007EA24_00000064
lbl_fn_8007EA24_00000318:
    mr r3, r29
    mr r4, r27
    mr r5, r28
    bl fn_8007EA24
    mr r27, r29
    b lbl_fn_8007EA24_00000064
lbl_fn_8007EA24_00000330:
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8007ED30(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lwz r29, 0x0(r3)
    li r6, 0x0
    lbz r5, 0x15(r3)
    mr r30, r3
    lbz r0, 0x14(r3)
    cmpwi r29, 0x0
    stw r6, 0x8(r1)
    mr r31, r4
    stw r6, 0xc(r1)
    stw r6, 0x10(r1)
    stw r6, 0x14(r1)
    stb r6, 0x19(r1)
    stb r6, 0x1a(r1)
    stb r6, 0x1b(r1)
    stb r5, 0x1d(r1)
    stb r0, 0x1c(r1)
    beq lbl_fn_8007ED30_000003A0
    b lbl_fn_8007ED30_000003A4
lbl_fn_8007ED30_000003A0:
    la r29, lbl_8087EF00
lbl_fn_8007ED30_000003A4:
    cmpwi r29, 0x0
    beq lbl_fn_8007ED30_000003BC
    mr r3, r29
    bl strlen
    mr r27, r3
    b lbl_fn_8007ED30_000003C0
lbl_fn_8007ED30_000003BC:
    li r27, 0x0
lbl_fn_8007ED30_000003C0:
    cmpwi r29, 0x0
    beq lbl_fn_8007ED30_0000041C
    cmpwi r27, 0x0
    beq lbl_fn_8007ED30_0000041C
    addi r3, r27, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r28, r3
    mr r4, r29
    mr r5, r27
    bl memcpy
    lwz r3, 0x8(r1)
    li r29, 0x0
    stbx r29, r28, r27
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000414
    bl fn_80084C24
    stw r29, 0x8(r1)
lbl_fn_8007ED30_00000414:
    stw r28, 0x8(r1)
    b lbl_fn_8007ED30_00000434
lbl_fn_8007ED30_0000041C:
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000434
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8007ED30_00000434:
    lwz r3, 0x10(r1)
    lbz r7, 0x11(r30)
    lwz r6, 0x4(r30)
    cmpwi r3, 0x0
    lbz r5, 0x10(r30)
    lbz r4, 0x12(r30)
    lbz r0, 0x13(r30)
    stb r7, 0x19(r1)
    stw r6, 0xc(r1)
    stb r5, 0x18(r1)
    stb r4, 0x1a(r1)
    stb r0, 0x1b(r1)
    beq lbl_fn_8007ED30_00000478
    beq lbl_fn_8007ED30_00000470
    bl dtor_80084684
lbl_fn_8007ED30_00000470:
    li r0, 0x0
    stw r0, 0x10(r1)
lbl_fn_8007ED30_00000478:
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000494
    beq lbl_fn_8007ED30_0000048C
    bl dtor_80084684
lbl_fn_8007ED30_0000048C:
    li r0, 0x0
    stw r0, 0x14(r1)
lbl_fn_8007ED30_00000494:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8007ED30_000004F4
    lis r5, lbl_80731D40@ha
    li r3, 0x14
    addi r5, r5, lbl_80731D40@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_000004F0
    lwz r4, 0x8(r30)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007ED30_000004F0:
    stw r3, 0x10(r1)
lbl_fn_8007ED30_000004F4:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8007ED30_00000554
    lis r5, lbl_80731D40@ha
    li r3, 0x14
    addi r5, r5, lbl_80731D40@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000550
    lwz r4, 0xc(r30)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007ED30_00000550:
    stw r3, 0x14(r1)
lbl_fn_8007ED30_00000554:
    lbz r0, 0x15(r31)
    stb r0, 0x15(r30)
    lbz r0, 0x14(r31)
    stb r0, 0x14(r30)
    lwz r29, 0x0(r31)
    cmpwi r29, 0x0
    beq lbl_fn_8007ED30_00000574
    b lbl_fn_8007ED30_00000578
lbl_fn_8007ED30_00000574:
    la r29, lbl_8087EF00
lbl_fn_8007ED30_00000578:
    cmpwi r29, 0x0
    beq lbl_fn_8007ED30_00000590
    mr r3, r29
    bl strlen
    mr r27, r3
    b lbl_fn_8007ED30_00000594
lbl_fn_8007ED30_00000590:
    li r27, 0x0
lbl_fn_8007ED30_00000594:
    cmpwi r29, 0x0
    beq lbl_fn_8007ED30_000005F0
    cmpwi r27, 0x0
    beq lbl_fn_8007ED30_000005F0
    addi r3, r27, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r28, r3
    mr r4, r29
    mr r5, r27
    bl memcpy
    li r29, 0x0
    stbx r29, r28, r27
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_000005E8
    bl fn_80084C24
    stw r29, 0x0(r30)
lbl_fn_8007ED30_000005E8:
    stw r28, 0x0(r30)
    b lbl_fn_8007ED30_00000608
lbl_fn_8007ED30_000005F0:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000608
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8007ED30_00000608:
    lbz r0, 0x11(r31)
    stb r0, 0x11(r30)
    lwz r3, 0x8(r30)
    lwz r0, 0x4(r31)
    stw r0, 0x4(r30)
    cmpwi r3, 0x0
    lbz r0, 0x10(r31)
    stb r0, 0x10(r30)
    lbz r0, 0x12(r31)
    stb r0, 0x12(r30)
    lbz r0, 0x13(r31)
    stb r0, 0x13(r30)
    beq lbl_fn_8007ED30_0000064C
    beq lbl_fn_8007ED30_00000644
    bl dtor_80084684
lbl_fn_8007ED30_00000644:
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_8007ED30_0000064C:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000668
    beq lbl_fn_8007ED30_00000660
    bl dtor_80084684
lbl_fn_8007ED30_00000660:
    li r0, 0x0
    stw r0, 0xc(r30)
lbl_fn_8007ED30_00000668:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8007ED30_000006C8
    lis r5, lbl_80731D40@ha
    li r3, 0x14
    addi r5, r5, lbl_80731D40@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_000006C4
    lwz r4, 0x8(r31)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007ED30_000006C4:
    stw r3, 0x8(r30)
lbl_fn_8007ED30_000006C8:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8007ED30_00000728
    lis r5, lbl_80731D40@ha
    li r3, 0x14
    addi r5, r5, lbl_80731D40@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000724
    lwz r4, 0xc(r31)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007ED30_00000724:
    stw r3, 0xc(r30)
lbl_fn_8007ED30_00000728:
    lwz r29, 0x8(r1)
    lbz r3, 0x1d(r1)
    lbz r0, 0x1c(r1)
    cmpwi r29, 0x0
    stb r3, 0x15(r31)
    stb r0, 0x14(r31)
    beq lbl_fn_8007ED30_00000748
    b lbl_fn_8007ED30_0000074C
lbl_fn_8007ED30_00000748:
    la r29, lbl_8087EF00
lbl_fn_8007ED30_0000074C:
    cmpwi r29, 0x0
    beq lbl_fn_8007ED30_00000764
    mr r3, r29
    bl strlen
    mr r27, r3
    b lbl_fn_8007ED30_00000768
lbl_fn_8007ED30_00000764:
    li r27, 0x0
lbl_fn_8007ED30_00000768:
    cmpwi r29, 0x0
    beq lbl_fn_8007ED30_000007C4
    cmpwi r27, 0x0
    beq lbl_fn_8007ED30_000007C4
    addi r3, r27, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r28, r3
    mr r4, r29
    mr r5, r27
    bl memcpy
    li r30, 0x0
    stbx r30, r28, r27
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_000007BC
    bl fn_80084C24
    stw r30, 0x0(r31)
lbl_fn_8007ED30_000007BC:
    stw r28, 0x0(r31)
    b lbl_fn_8007ED30_000007DC
lbl_fn_8007ED30_000007C4:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_000007DC
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8007ED30_000007DC:
    lwz r3, 0x8(r31)
    lbz r7, 0x19(r1)
    lwz r6, 0xc(r1)
    cmpwi r3, 0x0
    lbz r5, 0x18(r1)
    lbz r4, 0x1a(r1)
    lbz r0, 0x1b(r1)
    stb r7, 0x11(r31)
    stw r6, 0x4(r31)
    stb r5, 0x10(r31)
    stb r4, 0x12(r31)
    stb r0, 0x13(r31)
    beq lbl_fn_8007ED30_00000820
    beq lbl_fn_8007ED30_00000818
    bl dtor_80084684
lbl_fn_8007ED30_00000818:
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_fn_8007ED30_00000820:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_0000083C
    beq lbl_fn_8007ED30_00000834
    bl dtor_80084684
lbl_fn_8007ED30_00000834:
    li r0, 0x0
    stw r0, 0xc(r31)
lbl_fn_8007ED30_0000083C:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007ED30_0000089C
    lis r5, lbl_80731D40@ha
    li r3, 0x14
    addi r5, r5, lbl_80731D40@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000898
    lwz r4, 0x10(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007ED30_00000898:
    stw r3, 0x8(r31)
lbl_fn_8007ED30_0000089C:
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007ED30_000008FC
    lis r5, lbl_80731D40@ha
    li r3, 0x14
    addi r5, r5, lbl_80731D40@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_000008F8
    lwz r4, 0x14(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007ED30_000008F8:
    stw r3, 0xc(r31)
lbl_fn_8007ED30_000008FC:
    lwz r3, 0x10(r1)
    addi r28, r1, 0x8
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_0000091C
    beq lbl_fn_8007ED30_00000914
    bl dtor_80084684
lbl_fn_8007ED30_00000914:
    li r0, 0x0
    stw r0, 0x10(r1)
lbl_fn_8007ED30_0000091C:
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000938
    beq lbl_fn_8007ED30_00000930
    bl dtor_80084684
lbl_fn_8007ED30_00000930:
    li r0, 0x0
    stw r0, 0x14(r1)
lbl_fn_8007ED30_00000938:
    lbz r0, 0x19(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007ED30_00000964
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000964
    li r4, 0x1
    bl fn_800D5808
    li r0, 0x0
    stb r0, 0x19(r1)
    stw r0, 0xc(r1)
lbl_fn_8007ED30_00000964:
    cmpwi r28, 0x0
    beq lbl_fn_8007ED30_00000984
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007ED30_00000984
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8007ED30_00000984:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8007F388(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r29, r5
    mr r30, r6
    mr r28, r4
    mr r5, r27
    mr r3, r30
    mr r4, r29
    bl fn_8007FAC8
    cntlzw r0, r3
    mr r3, r30
    mr r4, r28
    mr r5, r29
    srwi r31, r0, 5
    bl fn_8007FAC8
    cmpwi r31, 0x0
    cntlzw r0, r3
    srwi r0, r0, 5
    beq lbl_fn_8007F388_000009FC
    cmpwi r0, 0x0
    bne lbl_fn_8007F388_00000A64
lbl_fn_8007F388_000009FC:
    cmpwi r31, 0x0
    bne lbl_fn_8007F388_00000A1C
    cmpwi r0, 0x0
    bne lbl_fn_8007F388_00000A1C
    mr r3, r27
    mr r4, r28
    bl fn_8007ED30
    b lbl_fn_8007F388_00000A64
lbl_fn_8007F388_00000A1C:
    mr r3, r30
    mr r4, r28
    mr r5, r27
    bl fn_8007FAC8
    cmpwi r3, 0x0
    beq lbl_fn_8007F388_00000A40
    mr r3, r27
    mr r4, r28
    bl fn_8007ED30
lbl_fn_8007F388_00000A40:
    cmpwi r31, 0x0
    beq lbl_fn_8007F388_00000A58
    mr r3, r28
    mr r4, r29
    bl fn_8007ED30
    b lbl_fn_8007F388_00000A64
lbl_fn_8007F388_00000A58:
    mr r3, r27
    mr r4, r29
    bl fn_8007ED30
lbl_fn_8007F388_00000A64:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8007F464(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_22
    cmplw r3, r4
    mr r27, r3
    mr r28, r4
    beq lbl_fn_8007F464_000010C4
    addi r29, r1, 0x8
    subi r26, r4, 0x18
    li r25, 0x0
    lis r31, lbl_80731D40@ha
    b lbl_fn_8007F464_000010BC
lbl_fn_8007F464_00000AB0:
    cmplw r27, r28
    mr r30, r27
    beq lbl_fn_8007F464_00000AEC
    addi r4, r27, 0x18
    b lbl_fn_8007F464_00000AE4
lbl_fn_8007F464_00000AC4:
    lbz r3, 0x10(r4)
    lbz r0, 0x10(r30)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bge lbl_fn_8007F464_00000AE0
    mr r30, r4
lbl_fn_8007F464_00000AE0:
    addi r4, r4, 0x18
lbl_fn_8007F464_00000AE4:
    cmplw r4, r28
    bne lbl_fn_8007F464_00000AC4
lbl_fn_8007F464_00000AEC:
    cmplw r30, r27
    beq lbl_fn_8007F464_000010B8
    lwz r22, 0x0(r30)
    lbz r3, 0x15(r30)
    lbz r0, 0x14(r30)
    cmpwi r22, 0x0
    stw r25, 0x8(r1)
    stw r25, 0xc(r1)
    stw r25, 0x10(r1)
    stw r25, 0x14(r1)
    stb r25, 0x19(r1)
    stb r25, 0x1a(r1)
    stb r25, 0x1b(r1)
    stb r3, 0x1d(r1)
    stb r0, 0x1c(r1)
    beq lbl_fn_8007F464_00000B30
    b lbl_fn_8007F464_00000B34
lbl_fn_8007F464_00000B30:
    la r22, lbl_8087EF00
lbl_fn_8007F464_00000B34:
    cmpwi r22, 0x0
    beq lbl_fn_8007F464_00000B4C
    mr r3, r22
    bl strlen
    mr r23, r3
    b lbl_fn_8007F464_00000B50
lbl_fn_8007F464_00000B4C:
    li r23, 0x0
lbl_fn_8007F464_00000B50:
    cmpwi r22, 0x0
    beq lbl_fn_8007F464_00000BA8
    cmpwi r23, 0x0
    beq lbl_fn_8007F464_00000BA8
    addi r3, r23, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r24, r3
    mr r4, r22
    mr r5, r23
    bl memcpy
    lwz r3, 0x8(r1)
    stbx r25, r24, r23
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000BA0
    bl fn_80084C24
    stw r25, 0x8(r1)
lbl_fn_8007F464_00000BA0:
    stw r24, 0x8(r1)
    b lbl_fn_8007F464_00000BBC
lbl_fn_8007F464_00000BA8:
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000BBC
    bl fn_80084C24
    stw r25, 0x8(r1)
lbl_fn_8007F464_00000BBC:
    lwz r3, 0x10(r1)
    lbz r7, 0x11(r30)
    lwz r6, 0x4(r30)
    cmpwi r3, 0x0
    lbz r5, 0x10(r30)
    lbz r4, 0x12(r30)
    lbz r0, 0x13(r30)
    stb r7, 0x19(r1)
    stw r6, 0xc(r1)
    stb r5, 0x18(r1)
    stb r4, 0x1a(r1)
    stb r0, 0x1b(r1)
    beq lbl_fn_8007F464_00000BFC
    beq lbl_fn_8007F464_00000BF8
    bl dtor_80084684
lbl_fn_8007F464_00000BF8:
    stw r25, 0x10(r1)
lbl_fn_8007F464_00000BFC:
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000C14
    beq lbl_fn_8007F464_00000C10
    bl dtor_80084684
lbl_fn_8007F464_00000C10:
    stw r25, 0x14(r1)
lbl_fn_8007F464_00000C14:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8007F464_00000C70
    addi r5, r31, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000C6C
    lwz r4, 0x8(r30)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007F464_00000C6C:
    stw r3, 0x10(r1)
lbl_fn_8007F464_00000C70:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8007F464_00000CCC
    addi r5, r31, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000CC8
    lwz r4, 0xc(r30)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007F464_00000CC8:
    stw r3, 0x14(r1)
lbl_fn_8007F464_00000CCC:
    lbz r0, 0x15(r27)
    stb r0, 0x15(r30)
    lbz r0, 0x14(r27)
    stb r0, 0x14(r30)
    lwz r22, 0x0(r27)
    cmpwi r22, 0x0
    beq lbl_fn_8007F464_00000CEC
    b lbl_fn_8007F464_00000CF0
lbl_fn_8007F464_00000CEC:
    la r22, lbl_8087EF00
lbl_fn_8007F464_00000CF0:
    cmpwi r22, 0x0
    beq lbl_fn_8007F464_00000D08
    mr r3, r22
    bl strlen
    mr r23, r3
    b lbl_fn_8007F464_00000D0C
lbl_fn_8007F464_00000D08:
    li r23, 0x0
lbl_fn_8007F464_00000D0C:
    cmpwi r22, 0x0
    beq lbl_fn_8007F464_00000D64
    cmpwi r23, 0x0
    beq lbl_fn_8007F464_00000D64
    addi r3, r23, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r24, r3
    mr r4, r22
    mr r5, r23
    bl memcpy
    stbx r25, r24, r23
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000D5C
    bl fn_80084C24
    stw r25, 0x0(r30)
lbl_fn_8007F464_00000D5C:
    stw r24, 0x0(r30)
    b lbl_fn_8007F464_00000D78
lbl_fn_8007F464_00000D64:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000D78
    bl fn_80084C24
    stw r25, 0x0(r30)
lbl_fn_8007F464_00000D78:
    lbz r0, 0x11(r27)
    stb r0, 0x11(r30)
    lwz r0, 0x4(r27)
    stw r0, 0x4(r30)
    lbz r0, 0x10(r27)
    stb r0, 0x10(r30)
    lbz r0, 0x12(r27)
    stb r0, 0x12(r30)
    lbz r0, 0x13(r27)
    stb r0, 0x13(r30)
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000DB8
    beq lbl_fn_8007F464_00000DB4
    bl dtor_80084684
lbl_fn_8007F464_00000DB4:
    stw r25, 0x8(r30)
lbl_fn_8007F464_00000DB8:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000DD0
    beq lbl_fn_8007F464_00000DCC
    bl dtor_80084684
lbl_fn_8007F464_00000DCC:
    stw r25, 0xc(r30)
lbl_fn_8007F464_00000DD0:
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8007F464_00000E2C
    addi r5, r31, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000E28
    lwz r4, 0x8(r27)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007F464_00000E28:
    stw r3, 0x8(r30)
lbl_fn_8007F464_00000E2C:
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8007F464_00000E88
    addi r5, r31, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000E84
    lwz r4, 0xc(r27)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007F464_00000E84:
    stw r3, 0xc(r30)
lbl_fn_8007F464_00000E88:
    lwz r22, 0x8(r1)
    lbz r0, 0x1d(r1)
    stb r0, 0x15(r27)
    cmpwi r22, 0x0
    lbz r0, 0x1c(r1)
    stb r0, 0x14(r27)
    beq lbl_fn_8007F464_00000EA8
    b lbl_fn_8007F464_00000EAC
lbl_fn_8007F464_00000EA8:
    la r22, lbl_8087EF00
lbl_fn_8007F464_00000EAC:
    cmpwi r22, 0x0
    beq lbl_fn_8007F464_00000EC4
    mr r3, r22
    bl strlen
    mr r23, r3
    b lbl_fn_8007F464_00000EC8
lbl_fn_8007F464_00000EC4:
    li r23, 0x0
lbl_fn_8007F464_00000EC8:
    cmpwi r22, 0x0
    beq lbl_fn_8007F464_00000F20
    cmpwi r23, 0x0
    beq lbl_fn_8007F464_00000F20
    addi r3, r23, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r30, r3
    mr r4, r22
    mr r5, r23
    bl memcpy
    stbx r25, r30, r23
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000F18
    bl fn_80084C24
    stw r25, 0x0(r27)
lbl_fn_8007F464_00000F18:
    stw r30, 0x0(r27)
    b lbl_fn_8007F464_00000F34
lbl_fn_8007F464_00000F20:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000F34
    bl fn_80084C24
    stw r25, 0x0(r27)
lbl_fn_8007F464_00000F34:
    lbz r0, 0x19(r1)
    stb r0, 0x11(r27)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r27)
    lbz r0, 0x18(r1)
    stb r0, 0x10(r27)
    lbz r0, 0x1a(r1)
    stb r0, 0x12(r27)
    lbz r0, 0x1b(r1)
    stb r0, 0x13(r27)
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000F74
    beq lbl_fn_8007F464_00000F70
    bl dtor_80084684
lbl_fn_8007F464_00000F70:
    stw r25, 0x8(r27)
lbl_fn_8007F464_00000F74:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000F8C
    beq lbl_fn_8007F464_00000F88
    bl dtor_80084684
lbl_fn_8007F464_00000F88:
    stw r25, 0xc(r27)
lbl_fn_8007F464_00000F8C:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007F464_00000FE8
    addi r5, r31, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00000FE4
    lwz r4, 0x10(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007F464_00000FE4:
    stw r3, 0x8(r27)
lbl_fn_8007F464_00000FE8:
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007F464_00001044
    addi r5, r31, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00001040
    lwz r4, 0x14(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007F464_00001040:
    stw r3, 0xc(r27)
lbl_fn_8007F464_00001044:
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_0000105C
    beq lbl_fn_8007F464_00001058
    bl dtor_80084684
lbl_fn_8007F464_00001058:
    stw r25, 0x10(r1)
lbl_fn_8007F464_0000105C:
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_00001074
    beq lbl_fn_8007F464_00001070
    bl dtor_80084684
lbl_fn_8007F464_00001070:
    stw r25, 0x14(r1)
lbl_fn_8007F464_00001074:
    lbz r0, 0x19(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007F464_0000109C
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_0000109C
    li r4, 0x1
    bl fn_800D5808
    stb r25, 0x19(r1)
    stw r25, 0xc(r1)
lbl_fn_8007F464_0000109C:
    cmpwi r29, 0x0
    beq lbl_fn_8007F464_000010B8
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007F464_000010B8
    bl fn_80084C24
    stw r25, 0x8(r1)
lbl_fn_8007F464_000010B8:
    addi r27, r27, 0x18
lbl_fn_8007F464_000010BC:
    cmplw r27, r26
    bne lbl_fn_8007F464_00000AB0
lbl_fn_8007F464_000010C4:
    addi r11, r1, 0x50
    bl _restgpr_22
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8007FAC8(void)
{
    nofralloc
    lbz r3, 0x10(r4)
    lbz r0, 0x10(r5)
    extsb r3, r3
    extsb r4, r0
    xor r0, r4, r3
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8007FAF0(void)
{
    nofralloc
    cmplwi r4, 0xd
    bgt lbl_fn_8007FAF0_000013A4
    lis r5, jumptable_807784B4@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_807784B4@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lwz r0, 0x14(r3)
    li r5, 0x2
    clrlwi r0, r0, 1
    rlwinm r0, r0, 0, 13, 11
    ori r0, r0, 0x400
    rlwimi r0, r5, 7, 22, 24
    ori r0, r0, 0x40
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r0, 0x14(r3)
    li r5, 0x2
    clrlwi r0, r0, 1
    rlwinm r0, r0, 0, 13, 11
    ori r0, r0, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r6, 0x14(r3)
    li r7, 0x4
    li r0, 0x5
    li r5, 0x2
    clrlwi r6, r6, 1
    oris r6, r6, 0x8
    rlwimi r6, r7, 16, 13, 15
    rlwimi r6, r0, 13, 16, 18
    ori r0, r6, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r6, 0x14(r3)
    li r7, 0x4
    li r0, 0x5
    li r5, 0x3
    clrlwi r6, r6, 1
    oris r6, r6, 0x8
    rlwimi r6, r7, 16, 13, 15
    rlwimi r6, r0, 13, 16, 18
    ori r0, r6, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r6, 0x14(r3)
    li r7, 0x4
    li r0, 0x5
    li r5, 0x2
    clrlwi r6, r6, 1
    oris r6, r6, 0x8
    rlwimi r6, r7, 16, 13, 15
    rlwimi r6, r0, 13, 16, 18
    ori r0, r6, 0x400
    rlwimi r0, r5, 7, 22, 24
    ori r0, r0, 0x40
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r6, 0x14(r3)
    li r7, 0x4
    li r0, 0x5
    li r5, 0x2
    oris r6, r6, 0x8000
    rlwinm r6, r6, 0, 12, 3
    rlwimi r6, r7, 28, 1, 3
    oris r6, r6, 0x8
    rlwimi r6, r7, 16, 13, 15
    rlwimi r6, r0, 13, 16, 18
    ori r0, r6, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r6, 0x14(r3)
    li r7, 0x4
    li r0, 0x5
    li r5, 0x3
    oris r6, r6, 0x8000
    rlwinm r6, r6, 0, 12, 3
    rlwimi r6, r7, 28, 1, 3
    oris r6, r6, 0x8
    rlwimi r6, r7, 16, 13, 15
    rlwimi r6, r0, 13, 16, 18
    ori r0, r6, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r6, 0x14(r3)
    li r7, 0x80
    li r0, 0x4
    li r5, 0x2
    rlwinm r6, r6, 0, 13, 11
    oris r6, r6, 0x8000
    rlwimi r6, r7, 20, 4, 11
    rlwimi r6, r0, 28, 1, 3
    ori r0, r6, 0x400
    rlwimi r0, r5, 7, 22, 24
    ori r0, r0, 0x40
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r0, 0x14(r3)
    li r6, 0x4
    li r7, 0x1
    li r5, 0x2
    clrlwi r0, r0, 1
    oris r0, r0, 0x8
    rlwimi r0, r6, 16, 13, 15
    rlwimi r0, r7, 13, 16, 18
    ori r0, r0, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r0, 0x14(r3)
    li r5, 0x2
    clrlwi r0, r0, 1
    oris r0, r0, 0x8
    rlwinm r0, r0, 0, 16, 12
    rlwimi r0, r5, 13, 16, 18
    ori r0, r0, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r0, 0x14(r3)
    li r6, 0x9
    li r7, 0x1
    li r5, 0x2
    clrlwi r0, r0, 1
    oris r0, r0, 0x8
    rlwimi r0, r6, 16, 13, 15
    rlwimi r0, r7, 13, 16, 18
    ori r0, r0, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r0, 0x14(r3)
    li r6, 0x5
    li r5, 0x2
    clrlwi r0, r0, 1
    oris r0, r0, 0x8
    rlwinm r0, r0, 0, 16, 12
    rlwimi r0, r6, 13, 16, 18
    ori r0, r0, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
    b lbl_fn_8007FAF0_000013A4
    lwz r0, 0x14(r3)
    li r6, 0x3
    li r5, 0x2
    clrlwi r0, r0, 1
    oris r0, r0, 0x8
    rlwinm r0, r0, 0, 16, 12
    rlwimi r0, r6, 13, 16, 18
    ori r0, r0, 0x400
    rlwimi r0, r5, 7, 22, 24
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x14(r3)
lbl_fn_8007FAF0_000013A4:
    lwz r0, 0x14(r3)
    li r7, 0x0
    stb r4, 0x4d(r3)
    ori r5, r7, 0x1
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8007FAF0_000013C0
    ori r5, r7, 0x2
lbl_fn_8007FAF0_000013C0:
    lbz r10, 0x4a(r3)
    mr r7, r5
    li r6, 0x0
    li r8, 0x0
    mtctr r10
    cmpwi r10, 0x0
    ble lbl_fn_8007FAF0_00001408
lbl_fn_8007FAF0_000013DC:
    lwz r9, 0xc(r3)
    add r4, r9, r8
    lbz r0, 0x10(r4)
    cmpwi r0, 0x15
    bne lbl_fn_8007FAF0_000013FC
    mulli r0, r6, 0x18
    add r0, r9, r0
    b lbl_fn_8007FAF0_0000140C
lbl_fn_8007FAF0_000013FC:
    addi r8, r8, 0x18
    addi r6, r6, 0x1
    bdnz lbl_fn_8007FAF0_000013DC
lbl_fn_8007FAF0_00001408:
    li r0, 0x0
lbl_fn_8007FAF0_0000140C:
    cmpwi r0, 0x0
    beq lbl_fn_8007FAF0_00001418
    ori r7, r5, 0x4
lbl_fn_8007FAF0_00001418:
    li r5, 0x0
    li r6, 0x0
    mtctr r10
    cmpwi r10, 0x0
    ble lbl_fn_8007FAF0_00001458
lbl_fn_8007FAF0_0000142C:
    lwz r8, 0xc(r3)
    add r4, r8, r6
    lbz r0, 0x10(r4)
    cmpwi r0, 0x14
    bne lbl_fn_8007FAF0_0000144C
    mulli r0, r5, 0x18
    add r0, r8, r0
    b lbl_fn_8007FAF0_0000145C
lbl_fn_8007FAF0_0000144C:
    addi r6, r6, 0x18
    addi r5, r5, 0x1
    bdnz lbl_fn_8007FAF0_0000142C
lbl_fn_8007FAF0_00001458:
    li r0, 0x0
lbl_fn_8007FAF0_0000145C:
    cmpwi r0, 0x0
    beq lbl_fn_8007FAF0_00001468
    ori r7, r7, 0x8
lbl_fn_8007FAF0_00001468:
    stb r7, 0x49(r3)
    blr
}

asm void fn_8007FE5C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0xa2c(r4)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_800D1C60
    lwz r0, 0xa28(r29)
    lwz r4, 0x14(r31)
    rlwimi r4, r0, 10, 21, 21
    lwz r0, 0xa30(r29)
    rlwimi r4, r3, 7, 22, 24
    lwz r3, 0xa3c(r29)
    rlwimi r4, r0, 6, 25, 25
    stw r4, 0x14(r31)
    bl fn_800D1CD4
    mr r30, r3
    lwz r3, 0xa40(r29)
    bl fn_800D1CD4
    lwz r0, 0x74(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8007FE5C_000014E0
    lwz r0, 0xa38(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8007FE5C_000014F8
lbl_fn_8007FE5C_000014E0:
    lwz r0, 0x14(r31)
    oris r0, r0, 0x8
    rlwimi r0, r30, 16, 13, 15
    rlwimi r0, r3, 13, 16, 18
    stw r0, 0x14(r31)
    b lbl_fn_8007FE5C_00001504
lbl_fn_8007FE5C_000014F8:
    lwz r0, 0x14(r31)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x14(r31)
lbl_fn_8007FE5C_00001504:
    lwz r0, 0xa14(r29)
    li r5, 0x7
    cmplwi r0, 0x7
    bgt lbl_fn_8007FE5C_00001568
    lis r3, jumptable_807784EC@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807784EC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r5, 0x0
    b lbl_fn_8007FE5C_00001568
    li r5, 0x1
    b lbl_fn_8007FE5C_00001568
    li r5, 0x3
    b lbl_fn_8007FE5C_00001568
    li r5, 0x2
    b lbl_fn_8007FE5C_00001568
    li r5, 0x4
    b lbl_fn_8007FE5C_00001568
    li r5, 0x6
    b lbl_fn_8007FE5C_00001568
    li r5, 0x5
    b lbl_fn_8007FE5C_00001568
    li r5, 0x7
lbl_fn_8007FE5C_00001568:
    lwz r0, 0x14(r31)
    li r6, 0x0
    lwz r3, 0xa18(r29)
    ori r4, r6, 0x1
    oris r0, r0, 0x8000
    rlwimi r0, r3, 20, 4, 11
    rlwimi r0, r5, 28, 1, 3
    stw r0, 0x14(r31)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8007FE5C_00001594
    ori r4, r6, 0x2
lbl_fn_8007FE5C_00001594:
    lbz r9, 0x4a(r31)
    mr r6, r4
    li r5, 0x0
    li r7, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_8007FE5C_000015DC
lbl_fn_8007FE5C_000015B0:
    lwz r8, 0xc(r31)
    add r3, r8, r7
    lbz r0, 0x10(r3)
    cmpwi r0, 0x15
    bne lbl_fn_8007FE5C_000015D0
    mulli r0, r5, 0x18
    add r0, r8, r0
    b lbl_fn_8007FE5C_000015E0
lbl_fn_8007FE5C_000015D0:
    addi r7, r7, 0x18
    addi r5, r5, 0x1
    bdnz lbl_fn_8007FE5C_000015B0
lbl_fn_8007FE5C_000015DC:
    li r0, 0x0
lbl_fn_8007FE5C_000015E0:
    cmpwi r0, 0x0
    beq lbl_fn_8007FE5C_000015EC
    ori r6, r4, 0x4
lbl_fn_8007FE5C_000015EC:
    li r4, 0x0
    li r5, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_8007FE5C_0000162C
lbl_fn_8007FE5C_00001600:
    lwz r7, 0xc(r31)
    add r3, r7, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0x14
    bne lbl_fn_8007FE5C_00001620
    mulli r0, r4, 0x18
    add r0, r7, r0
    b lbl_fn_8007FE5C_00001630
lbl_fn_8007FE5C_00001620:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_8007FE5C_00001600
lbl_fn_8007FE5C_0000162C:
    li r0, 0x0
lbl_fn_8007FE5C_00001630:
    cmpwi r0, 0x0
    beq lbl_fn_8007FE5C_0000163C
    ori r6, r6, 0x8
lbl_fn_8007FE5C_0000163C:
    stb r6, 0x49(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
