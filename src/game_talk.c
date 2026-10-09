#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_8005691C(void);
extern void fn_8005C594(void);
extern void fn_80084320(void);

/* External data declarations */
extern u8 lbl_8073113C[];
extern u8 lbl_80777758[];

/* Small data declarations */
extern u32 lbl_80880990;

/* Function declarations */
void fn_8005B05C(void);
void fn_8005B064(void);
void fn_8005B3CC(void);
void fn_8005B5F8(void);
void fn_8005B6E8(void);
void fn_8005B710(void);
void fn_8005B8F8(void);
void fn_8005B9AC(void);
void fn_8005B9CC(void);
void fn_8005BBF8(void);
void fn_8005BCE8(void);
void fn_8005BD10(void);
void fn_8005BEF8(void);
void fn_8005BFAC(void);
void fn_8005BFCC(void);
void fn_8005C1F8(void);
void fn_8005C220(void);
void fn_8005C248(void);
void fn_8005C448(void);
void fn_8005C534(void);

asm void fn_8005B05C(void)
{
    nofralloc
    lwz r6, 0x14(r6)
    b fn_8005B064
}

asm void fn_8005B064(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_21
    lfs f0, 0x0(r5)
    mr r25, r3
    lfs f1, 0x18(r5)
    mr r26, r4
    lfs f2, 0x4(r6)
    mr r27, r5
    fadds f0, f0, f1
    mr r28, r6
    mr r29, r7
    mr r30, r8
    li r31, 0x0
    fcmpo cr0, f2, f0
    ble lbl_fn_8005B064_00000070
    lfs f0, 0xc(r5)
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8005B064_00000070
    li r0, 0x0
    b lbl_fn_8005B064_00000164
lbl_fn_8005B064_00000070:
    lfs f0, 0x4(r5)
    lfs f1, 0x18(r5)
    lfs f2, 0x8(r6)
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8005B064_000000A0
    lfs f0, 0x10(r5)
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8005B064_000000A0
    li r0, 0x0
    b lbl_fn_8005B064_00000164
lbl_fn_8005B064_000000A0:
    lfs f0, 0x8(r5)
    lfs f1, 0x18(r5)
    lfs f2, 0xc(r6)
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8005B064_000000D0
    lfs f0, 0x14(r5)
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8005B064_000000D0
    li r0, 0x0
    b lbl_fn_8005B064_00000164
lbl_fn_8005B064_000000D0:
    lfs f0, 0x0(r5)
    lfs f1, 0x18(r5)
    lfs f2, 0x10(r6)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8005B064_00000100
    lfs f0, 0xc(r5)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8005B064_00000100
    li r0, 0x0
    b lbl_fn_8005B064_00000164
lbl_fn_8005B064_00000100:
    lfs f0, 0x4(r5)
    lfs f1, 0x18(r5)
    lfs f2, 0x14(r6)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8005B064_00000130
    lfs f0, 0x10(r5)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8005B064_00000130
    li r0, 0x0
    b lbl_fn_8005B064_00000164
lbl_fn_8005B064_00000130:
    lfs f0, 0x8(r5)
    lfs f1, 0x18(r5)
    lfs f2, 0x18(r6)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8005B064_00000160
    lfs f0, 0x14(r5)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8005B064_00000160
    li r0, 0x0
    b lbl_fn_8005B064_00000164
lbl_fn_8005B064_00000160:
    li r0, 0x1
lbl_fn_8005B064_00000164:
    cmpwi r0, 0x0
    beq lbl_fn_8005B064_0000034C
    lwz r24, 0x3c(r6)
    li r23, 0x0
    b lbl_fn_8005B064_000001F4
lbl_fn_8005B064_00000178:
    cmpw r31, r26
    lwz r22, 0x0(r24)
    blt lbl_fn_8005B064_0000018C
    mr r3, r31
    b lbl_fn_8005B064_00000350
lbl_fn_8005B064_0000018C:
    lwz r21, 0x0(r22)
    lwz r0, 0x4(r21)
    and. r0, r29, r0
    bne lbl_fn_8005B064_000001EC
    cmpwi r30, 0x0
    blt lbl_fn_8005B064_000001B0
    lwz r0, 0x0(r21)
    cmplw r30, r0
    bne lbl_fn_8005B064_000001EC
lbl_fn_8005B064_000001B0:
    mr r3, r25
    mr r4, r27
    addi r5, r22, 0x8
    bl fn_8005691C
    cmpwi r3, 0x0
    beq lbl_fn_8005B064_000001EC
    addi r31, r31, 0x1
    stw r21, 0x34(r25)
    cmpw r31, r26
    addi r0, r22, 0x8
    stw r0, 0x40(r25)
    blt lbl_fn_8005B064_000001E8
    mr r3, r31
    b lbl_fn_8005B064_00000350
lbl_fn_8005B064_000001E8:
    addi r25, r25, 0x50
lbl_fn_8005B064_000001EC:
    addi r24, r24, 0x4
    addi r23, r23, 0x1
lbl_fn_8005B064_000001F4:
    lwz r0, 0x0(r28)
    cmpw r23, r0
    blt lbl_fn_8005B064_00000178
    lfs f4, 0xc(r28)
    li r21, 0x0
    lfs f2, 0x18(r28)
    lfs f0, 0x8(r27)
    lfs f1, 0x18(r27)
    fadds f3, f4, f2
    lfs f2, lbl_80880990
    fadds f0, f0, f1
    fmuls f31, f2, f3
    fcmpo cr0, f4, f0
    ble lbl_fn_8005B064_00000244
    lfs f0, 0x14(r27)
    fadds f0, f0, f1
    fcmpo cr0, f4, f0
    ble lbl_fn_8005B064_00000244
    li r0, 0x0
    b lbl_fn_8005B064_00000274
lbl_fn_8005B064_00000244:
    lfs f0, 0x8(r27)
    lfs f1, 0x18(r27)
    fsubs f0, f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_8005B064_00000270
    lfs f0, 0x14(r27)
    fsubs f0, f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_8005B064_00000270
    li r0, 0x0
    b lbl_fn_8005B064_00000274
lbl_fn_8005B064_00000270:
    li r0, 0x1
lbl_fn_8005B064_00000274:
    cmpwi r0, 0x0
    bne lbl_fn_8005B064_00000280
    li r21, 0x4
lbl_fn_8005B064_00000280:
    slwi r0, r21, 2
    add r24, r28, r0
    b lbl_fn_8005B064_00000344
lbl_fn_8005B064_0000028C:
    lwz r6, 0x1c(r24)
    cmpwi r6, 0x0
    beq lbl_fn_8005B064_000002CC
    mr r3, r25
    mr r5, r27
    mr r7, r29
    mr r8, r30
    subf r4, r31, r26
    bl fn_8005B064
    add r31, r31, r3
    cmpw r31, r26
    blt lbl_fn_8005B064_000002C4
    mr r3, r31
    b lbl_fn_8005B064_00000350
lbl_fn_8005B064_000002C4:
    mulli r0, r3, 0x50
    add r25, r25, r0
lbl_fn_8005B064_000002CC:
    cmpwi r21, 0x3
    bne lbl_fn_8005B064_0000033C
    lfs f0, 0x8(r27)
    lfs f1, 0x18(r27)
    lfs f2, 0x18(r28)
    fadds f0, f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_8005B064_00000304
    lfs f0, 0x14(r27)
    fadds f0, f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_8005B064_00000304
    li r0, 0x0
    b lbl_fn_8005B064_00000334
lbl_fn_8005B064_00000304:
    lfs f0, 0x8(r27)
    lfs f1, 0x18(r27)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8005B064_00000330
    lfs f0, 0x14(r27)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8005B064_00000330
    li r0, 0x0
    b lbl_fn_8005B064_00000334
lbl_fn_8005B064_00000330:
    li r0, 0x1
lbl_fn_8005B064_00000334:
    cmpwi r0, 0x0
    beq lbl_fn_8005B064_0000034C
lbl_fn_8005B064_0000033C:
    addi r24, r24, 0x4
    addi r21, r21, 0x1
lbl_fn_8005B064_00000344:
    cmpwi r21, 0x8
    blt lbl_fn_8005B064_0000028C
lbl_fn_8005B064_0000034C:
    mr r3, r31
lbl_fn_8005B064_00000350:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_21
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8005B3CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x600
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x10
    bl memset
    lwz r5, 0xc(r31)
    li r0, 0x0
    li r3, 0x1
    li r4, 0x0
    b lbl_fn_8005B3CC_000004AC
lbl_fn_8005B3CC_000003A8:
    cmpwi r0, 0x0
    beq lbl_fn_8005B3CC_00000428
    lwz r6, 0x4(r31)
    lbzx r8, r6, r5
    add r7, r6, r5
    cmpwi r8, 0x22
    bne lbl_fn_8005B3CC_000003EC
    lbz r6, 0x1(r7)
    cmpwi r6, 0x22
    bne lbl_fn_8005B3CC_000003E4
    add r6, r31, r4
    addi r4, r4, 0x1
    stb r8, 0x10(r6)
    addi r5, r5, 0x1
    b lbl_fn_8005B3CC_000004A8
lbl_fn_8005B3CC_000003E4:
    li r0, 0x0
    b lbl_fn_8005B3CC_000004A8
lbl_fn_8005B3CC_000003EC:
    add r6, r31, r4
    addi r4, r4, 0x1
    stb r8, 0x10(r6)
    lwz r7, 0x4(r31)
    lbzx r6, r7, r5
    addi r6, r6, 0x80
    clrlwi r6, r6, 24
    cmplwi r6, 0x1f
    bgt lbl_fn_8005B3CC_000004A8
    addi r5, r5, 0x1
    add r6, r31, r4
    lbzx r7, r7, r5
    addi r4, r4, 0x1
    stb r7, 0x10(r6)
    b lbl_fn_8005B3CC_000004A8
lbl_fn_8005B3CC_00000428:
    lwz r6, 0x4(r31)
    lbzx r7, r6, r5
    extsb r6, r7
    cmpwi r6, 0x22
    bne lbl_fn_8005B3CC_00000444
    li r0, 0x1
    b lbl_fn_8005B3CC_000004A8
lbl_fn_8005B3CC_00000444:
    cmpwi r6, 0x2c
    bne lbl_fn_8005B3CC_0000045C
    addi r0, r5, 0x1
    stw r0, 0xc(r31)
    li r3, 0x0
    b lbl_fn_8005B3CC_000004B8
lbl_fn_8005B3CC_0000045C:
    cmpwi r6, 0xd
    bne lbl_fn_8005B3CC_00000470
    stw r5, 0xc(r31)
    li r3, 0x0
    b lbl_fn_8005B3CC_000004B8
lbl_fn_8005B3CC_00000470:
    add r6, r31, r4
    addi r4, r4, 0x1
    stb r7, 0x10(r6)
    lwz r7, 0x4(r31)
    lbzx r6, r7, r5
    addi r6, r6, 0x80
    clrlwi r6, r6, 24
    cmplwi r6, 0x1f
    bgt lbl_fn_8005B3CC_000004A8
    addi r5, r5, 0x1
    add r6, r31, r4
    lbzx r7, r7, r5
    addi r4, r4, 0x1
    stb r7, 0x10(r6)
lbl_fn_8005B3CC_000004A8:
    addi r5, r5, 0x1
lbl_fn_8005B3CC_000004AC:
    lwz r6, 0x8(r31)
    cmplw r5, r6
    blt lbl_fn_8005B3CC_000003A8
lbl_fn_8005B3CC_000004B8:
    cmpwi r3, 0x0
    beq lbl_fn_8005B3CC_000004D8
    lwz r0, 0xc(r31)
    lwz r3, 0x8(r31)
    add r0, r4, r0
    cmplw r0, r3
    blt lbl_fn_8005B3CC_000004D8
    stw r3, 0xc(r31)
lbl_fn_8005B3CC_000004D8:
    lwz r0, 0x630(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8005B3CC_00000584
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_8005B3CC_00000538
lbl_fn_8005B3CC_000004F0:
    extsb r4, r3
    li r5, 0x0
    b lbl_fn_8005B3CC_00000514
lbl_fn_8005B3CC_000004FC:
    extsb r0, r3
    cmpw r4, r0
    bne lbl_fn_8005B3CC_00000510
    li r0, 0x1
    b lbl_fn_8005B3CC_00000528
lbl_fn_8005B3CC_00000510:
    addi r5, r5, 0x1
lbl_fn_8005B3CC_00000514:
    add r3, r31, r5
    lbz r3, 0x610(r3)
    extsb. r0, r3
    bne lbl_fn_8005B3CC_000004FC
    li r0, 0x0
lbl_fn_8005B3CC_00000528:
    cmpwi r0, 0x0
    beq lbl_fn_8005B3CC_00000548
    addi r7, r7, 0x1
    addi r6, r6, 0x1
lbl_fn_8005B3CC_00000538:
    add r3, r31, r6
    lbz r3, 0x10(r3)
    extsb. r0, r3
    bne lbl_fn_8005B3CC_000004F0
lbl_fn_8005B3CC_00000548:
    cmpwi r7, 0x0
    ble lbl_fn_8005B3CC_00000584
    add r5, r31, r7
    li r4, 0x0
    b lbl_fn_8005B3CC_0000056C
lbl_fn_8005B3CC_0000055C:
    add r3, r31, r4
    addi r4, r4, 0x1
    stb r6, 0x10(r3)
    addi r5, r5, 0x1
lbl_fn_8005B3CC_0000056C:
    lbz r6, 0x10(r5)
    extsb. r0, r6
    bne lbl_fn_8005B3CC_0000055C
    add r3, r31, r4
    li r0, 0x0
    stb r0, 0x10(r3)
lbl_fn_8005B3CC_00000584:
    addi r3, r31, 0x10
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005B5F8(void)
{
    nofralloc
    li r6, 0x0
    b lbl_fn_8005B5F8_00000674
lbl_fn_8005B5F8_000005A4:
    cmpwi r6, 0x0
    beq lbl_fn_8005B5F8_00000604
    lwz r0, 0x4(r3)
    add r4, r0, r5
    lbzx r5, r5, r0
    cmpwi r5, 0x22
    bne lbl_fn_8005B5F8_000005E4
    lbz r0, 0x1(r4)
    cmpwi r0, 0x22
    bne lbl_fn_8005B5F8_000005DC
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_8005B5F8_00000668
lbl_fn_8005B5F8_000005DC:
    li r6, 0x0
    b lbl_fn_8005B5F8_00000668
lbl_fn_8005B5F8_000005E4:
    addi r0, r5, 0x80
    clrlwi r0, r0, 24
    cmplwi r0, 0x1f
    bgt lbl_fn_8005B5F8_00000668
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_8005B5F8_00000668
lbl_fn_8005B5F8_00000604:
    lwz r4, 0x4(r3)
    lbzx r4, r4, r5
    extsb r0, r4
    cmpwi r0, 0x22
    bne lbl_fn_8005B5F8_00000620
    li r6, 0x1
    b lbl_fn_8005B5F8_00000668
lbl_fn_8005B5F8_00000620:
    cmpwi r0, 0xd
    bne lbl_fn_8005B5F8_0000064C
    lwz r5, 0xc(r3)
    lwz r4, 0x8(r3)
    addi r0, r5, 0x2
    stw r0, 0xc(r3)
    xor r0, r4, r0
    cntlzw r0, r0
    slw r0, r4, r0
    srwi r3, r0, 31
    blr
lbl_fn_8005B5F8_0000064C:
    addi r0, r4, 0x80
    clrlwi r0, r0, 24
    cmplwi r0, 0x1f
    bgt lbl_fn_8005B5F8_00000668
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
lbl_fn_8005B5F8_00000668:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
lbl_fn_8005B5F8_00000674:
    lwz r5, 0xc(r3)
    lwz r0, 0x8(r3)
    cmplw r5, r0
    blt lbl_fn_8005B5F8_000005A4
    li r3, 0x0
    blr
}

asm void fn_8005B6E8(void)
{
    nofralloc
    li r6, 0x0
lbl_fn_8005B6E8_00000690:
    lbz r0, 0x0(r4)
    add r5, r3, r6
    stb r0, 0x610(r5)
    extsb. r0, r0
    beqlr
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    b lbl_fn_8005B6E8_00000690
    blr
}

asm void fn_8005B710(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0xc00
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x10
    bl memset
    lwz r10, 0xc(r31)
    li r7, 0x0
    li r8, 0x1
    li r9, 0x0
    slwi r4, r10, 1
    li r3, 0x0
    b lbl_fn_8005B710_000007B0
lbl_fn_8005B710_000006F4:
    cmpwi r7, 0x0
    beq lbl_fn_8005B710_00000754
    lwz r0, 0x4(r31)
    lhzx r6, r4, r0
    add r5, r0, r4
    cmplwi r6, 0x22
    bne lbl_fn_8005B710_00000740
    lhz r0, 0x2(r5)
    cmplwi r0, 0x22
    bne lbl_fn_8005B710_00000738
    add r5, r31, r3
    addi r4, r4, 0x2
    sth r6, 0x10(r5)
    addi r9, r9, 0x1
    addi r3, r3, 0x2
    addi r10, r10, 0x1
    b lbl_fn_8005B710_000007A8
lbl_fn_8005B710_00000738:
    li r7, 0x0
    b lbl_fn_8005B710_000007A8
lbl_fn_8005B710_00000740:
    add r5, r31, r3
    addi r3, r3, 0x2
    sth r6, 0x10(r5)
    addi r9, r9, 0x1
    b lbl_fn_8005B710_000007A8
lbl_fn_8005B710_00000754:
    lwz r5, 0x4(r31)
    lhzx r0, r5, r4
    cmplwi r0, 0x22
    bne lbl_fn_8005B710_0000076C
    li r7, 0x1
    b lbl_fn_8005B710_000007A8
lbl_fn_8005B710_0000076C:
    cmplwi r0, 0x2c
    bne lbl_fn_8005B710_00000784
    addi r0, r10, 0x1
    stw r0, 0xc(r31)
    li r8, 0x0
    b lbl_fn_8005B710_000007BC
lbl_fn_8005B710_00000784:
    cmplwi r0, 0xd
    bne lbl_fn_8005B710_00000798
    stw r10, 0xc(r31)
    li r8, 0x0
    b lbl_fn_8005B710_000007BC
lbl_fn_8005B710_00000798:
    add r5, r31, r3
    addi r3, r3, 0x2
    sth r0, 0x10(r5)
    addi r9, r9, 0x1
lbl_fn_8005B710_000007A8:
    addi r10, r10, 0x1
    addi r4, r4, 0x2
lbl_fn_8005B710_000007B0:
    lwz r0, 0x8(r31)
    cmplw r10, r0
    blt lbl_fn_8005B710_000006F4
lbl_fn_8005B710_000007BC:
    cmpwi r8, 0x0
    beq lbl_fn_8005B710_000007DC
    lwz r0, 0xc(r31)
    lwz r3, 0x8(r31)
    add r0, r9, r0
    cmplw r0, r3
    blt lbl_fn_8005B710_000007DC
    stw r3, 0xc(r31)
lbl_fn_8005B710_000007DC:
    lwz r0, 0xc50(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8005B710_00000884
    mr r4, r31
    li r3, 0x0
    b lbl_fn_8005B710_00000830
lbl_fn_8005B710_000007F4:
    mr r5, r31
    b lbl_fn_8005B710_00000810
lbl_fn_8005B710_000007FC:
    cmplw r0, r6
    bne lbl_fn_8005B710_0000080C
    li r0, 0x1
    b lbl_fn_8005B710_00000820
lbl_fn_8005B710_0000080C:
    addi r5, r5, 0x2
lbl_fn_8005B710_00000810:
    lhz r6, 0xc10(r5)
    cmpwi r6, 0x0
    bne lbl_fn_8005B710_000007FC
    li r0, 0x0
lbl_fn_8005B710_00000820:
    cmpwi r0, 0x0
    beq lbl_fn_8005B710_0000083C
    addi r3, r3, 0x1
    addi r4, r4, 0x2
lbl_fn_8005B710_00000830:
    lhz r0, 0x10(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8005B710_000007F4
lbl_fn_8005B710_0000083C:
    cmpwi r3, 0x0
    ble lbl_fn_8005B710_00000884
    slwi r0, r3, 1
    mr r5, r31
    add r4, r31, r0
    li r3, 0x0
    b lbl_fn_8005B710_00000868
lbl_fn_8005B710_00000858:
    sth r0, 0x10(r5)
    addi r4, r4, 0x2
    addi r5, r5, 0x2
    addi r3, r3, 0x1
lbl_fn_8005B710_00000868:
    lhz r0, 0x10(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8005B710_00000858
    slwi r0, r3, 1
    li r4, 0x0
    add r3, r31, r0
    sth r4, 0x10(r3)
lbl_fn_8005B710_00000884:
    addi r3, r31, 0x10
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005B8F8(void)
{
    nofralloc
    li r6, 0x0
    b lbl_fn_8005B8F8_00000938
lbl_fn_8005B8F8_000008A4:
    cmpwi r6, 0x0
    beq lbl_fn_8005B8F8_000008E4
    slwi r0, r5, 1
    lwz r4, 0x4(r3)
    lhzux r0, r4, r0
    cmplwi r0, 0x22
    bne lbl_fn_8005B8F8_0000092C
    lhz r0, 0x2(r4)
    cmplwi r0, 0x22
    bne lbl_fn_8005B8F8_000008DC
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_8005B8F8_0000092C
lbl_fn_8005B8F8_000008DC:
    li r6, 0x0
    b lbl_fn_8005B8F8_0000092C
lbl_fn_8005B8F8_000008E4:
    lwz r4, 0x4(r3)
    slwi r0, r5, 1
    lhzx r0, r4, r0
    cmplwi r0, 0x22
    bne lbl_fn_8005B8F8_00000900
    li r6, 0x1
    b lbl_fn_8005B8F8_0000092C
lbl_fn_8005B8F8_00000900:
    cmplwi r0, 0xd
    bne lbl_fn_8005B8F8_0000092C
    lwz r5, 0xc(r3)
    lwz r4, 0x8(r3)
    addi r0, r5, 0x2
    stw r0, 0xc(r3)
    xor r0, r4, r0
    cntlzw r0, r0
    slw r0, r4, r0
    srwi r3, r0, 31
    blr
lbl_fn_8005B8F8_0000092C:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
lbl_fn_8005B8F8_00000938:
    lwz r5, 0xc(r3)
    lwz r0, 0x8(r3)
    cmplw r5, r0
    blt lbl_fn_8005B8F8_000008A4
    li r3, 0x0
    blr
}

asm void fn_8005B9AC(void)
{
    nofralloc
    lhz r0, 0x0(r4)
    sth r0, 0xc10(r3)
    cmpwi r0, 0x0
    beqlr
    addi r4, r4, 0x2
    addi r3, r3, 0x2
    b fn_8005B9AC
    blr
}

asm void fn_8005B9CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x600
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x10
    bl memset
    lwz r5, 0xc(r31)
    li r0, 0x0
    li r3, 0x1
    li r4, 0x0
    b lbl_fn_8005B9CC_00000AAC
lbl_fn_8005B9CC_000009A8:
    cmpwi r0, 0x0
    beq lbl_fn_8005B9CC_00000A28
    lwz r6, 0x4(r31)
    lbzx r8, r6, r5
    add r7, r6, r5
    cmpwi r8, 0x22
    bne lbl_fn_8005B9CC_000009EC
    lbz r6, 0x1(r7)
    cmpwi r6, 0x22
    bne lbl_fn_8005B9CC_000009E4
    add r6, r31, r4
    addi r4, r4, 0x1
    stb r8, 0x10(r6)
    addi r5, r5, 0x1
    b lbl_fn_8005B9CC_00000AA8
lbl_fn_8005B9CC_000009E4:
    li r0, 0x0
    b lbl_fn_8005B9CC_00000AA8
lbl_fn_8005B9CC_000009EC:
    add r6, r31, r4
    addi r4, r4, 0x1
    stb r8, 0x10(r6)
    lwz r7, 0x4(r31)
    lbzx r6, r7, r5
    addi r6, r6, 0x80
    clrlwi r6, r6, 24
    cmplwi r6, 0x1f
    bgt lbl_fn_8005B9CC_00000AA8
    addi r5, r5, 0x1
    add r6, r31, r4
    lbzx r7, r7, r5
    addi r4, r4, 0x1
    stb r7, 0x10(r6)
    b lbl_fn_8005B9CC_00000AA8
lbl_fn_8005B9CC_00000A28:
    lwz r6, 0x4(r31)
    lbzx r7, r6, r5
    extsb r6, r7
    cmpwi r6, 0x22
    bne lbl_fn_8005B9CC_00000A44
    li r0, 0x1
    b lbl_fn_8005B9CC_00000AA8
lbl_fn_8005B9CC_00000A44:
    cmpwi r6, 0x9
    bne lbl_fn_8005B9CC_00000A5C
    addi r0, r5, 0x1
    stw r0, 0xc(r31)
    li r3, 0x0
    b lbl_fn_8005B9CC_00000AB8
lbl_fn_8005B9CC_00000A5C:
    cmpwi r6, 0xd
    bne lbl_fn_8005B9CC_00000A70
    stw r5, 0xc(r31)
    li r3, 0x0
    b lbl_fn_8005B9CC_00000AB8
lbl_fn_8005B9CC_00000A70:
    add r6, r31, r4
    addi r4, r4, 0x1
    stb r7, 0x10(r6)
    lwz r7, 0x4(r31)
    lbzx r6, r7, r5
    addi r6, r6, 0x80
    clrlwi r6, r6, 24
    cmplwi r6, 0x1f
    bgt lbl_fn_8005B9CC_00000AA8
    addi r5, r5, 0x1
    add r6, r31, r4
    lbzx r7, r7, r5
    addi r4, r4, 0x1
    stb r7, 0x10(r6)
lbl_fn_8005B9CC_00000AA8:
    addi r5, r5, 0x1
lbl_fn_8005B9CC_00000AAC:
    lwz r6, 0x8(r31)
    cmplw r5, r6
    blt lbl_fn_8005B9CC_000009A8
lbl_fn_8005B9CC_00000AB8:
    cmpwi r3, 0x0
    beq lbl_fn_8005B9CC_00000AD8
    lwz r0, 0xc(r31)
    lwz r3, 0x8(r31)
    add r0, r4, r0
    cmplw r0, r3
    blt lbl_fn_8005B9CC_00000AD8
    stw r3, 0xc(r31)
lbl_fn_8005B9CC_00000AD8:
    lwz r0, 0x630(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8005B9CC_00000B84
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_8005B9CC_00000B38
lbl_fn_8005B9CC_00000AF0:
    extsb r4, r3
    li r5, 0x0
    b lbl_fn_8005B9CC_00000B14
lbl_fn_8005B9CC_00000AFC:
    extsb r0, r3
    cmpw r4, r0
    bne lbl_fn_8005B9CC_00000B10
    li r0, 0x1
    b lbl_fn_8005B9CC_00000B28
lbl_fn_8005B9CC_00000B10:
    addi r5, r5, 0x1
lbl_fn_8005B9CC_00000B14:
    add r3, r31, r5
    lbz r3, 0x610(r3)
    extsb. r0, r3
    bne lbl_fn_8005B9CC_00000AFC
    li r0, 0x0
lbl_fn_8005B9CC_00000B28:
    cmpwi r0, 0x0
    beq lbl_fn_8005B9CC_00000B48
    addi r7, r7, 0x1
    addi r6, r6, 0x1
lbl_fn_8005B9CC_00000B38:
    add r3, r31, r6
    lbz r3, 0x10(r3)
    extsb. r0, r3
    bne lbl_fn_8005B9CC_00000AF0
lbl_fn_8005B9CC_00000B48:
    cmpwi r7, 0x0
    ble lbl_fn_8005B9CC_00000B84
    add r5, r31, r7
    li r4, 0x0
    b lbl_fn_8005B9CC_00000B6C
lbl_fn_8005B9CC_00000B5C:
    add r3, r31, r4
    addi r4, r4, 0x1
    stb r6, 0x10(r3)
    addi r5, r5, 0x1
lbl_fn_8005B9CC_00000B6C:
    lbz r6, 0x10(r5)
    extsb. r0, r6
    bne lbl_fn_8005B9CC_00000B5C
    add r3, r31, r4
    li r0, 0x0
    stb r0, 0x10(r3)
lbl_fn_8005B9CC_00000B84:
    addi r3, r31, 0x10
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005BBF8(void)
{
    nofralloc
    li r6, 0x0
    b lbl_fn_8005BBF8_00000C74
lbl_fn_8005BBF8_00000BA4:
    cmpwi r6, 0x0
    beq lbl_fn_8005BBF8_00000C04
    lwz r0, 0x4(r3)
    add r4, r0, r5
    lbzx r5, r5, r0
    cmpwi r5, 0x22
    bne lbl_fn_8005BBF8_00000BE4
    lbz r0, 0x1(r4)
    cmpwi r0, 0x22
    bne lbl_fn_8005BBF8_00000BDC
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_8005BBF8_00000C68
lbl_fn_8005BBF8_00000BDC:
    li r6, 0x0
    b lbl_fn_8005BBF8_00000C68
lbl_fn_8005BBF8_00000BE4:
    addi r0, r5, 0x80
    clrlwi r0, r0, 24
    cmplwi r0, 0x1f
    bgt lbl_fn_8005BBF8_00000C68
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_8005BBF8_00000C68
lbl_fn_8005BBF8_00000C04:
    lwz r4, 0x4(r3)
    lbzx r4, r4, r5
    extsb r0, r4
    cmpwi r0, 0x22
    bne lbl_fn_8005BBF8_00000C20
    li r6, 0x1
    b lbl_fn_8005BBF8_00000C68
lbl_fn_8005BBF8_00000C20:
    cmpwi r0, 0xd
    bne lbl_fn_8005BBF8_00000C4C
    lwz r5, 0xc(r3)
    lwz r4, 0x8(r3)
    addi r0, r5, 0x2
    stw r0, 0xc(r3)
    xor r0, r4, r0
    cntlzw r0, r0
    slw r0, r4, r0
    srwi r3, r0, 31
    blr
lbl_fn_8005BBF8_00000C4C:
    addi r0, r4, 0x80
    clrlwi r0, r0, 24
    cmplwi r0, 0x1f
    bgt lbl_fn_8005BBF8_00000C68
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
lbl_fn_8005BBF8_00000C68:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
lbl_fn_8005BBF8_00000C74:
    lwz r5, 0xc(r3)
    lwz r0, 0x8(r3)
    cmplw r5, r0
    blt lbl_fn_8005BBF8_00000BA4
    li r3, 0x0
    blr
}

asm void fn_8005BCE8(void)
{
    nofralloc
    li r6, 0x0
lbl_fn_8005BCE8_00000C90:
    lbz r0, 0x0(r4)
    add r5, r3, r6
    stb r0, 0x610(r5)
    extsb. r0, r0
    beqlr
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    b lbl_fn_8005BCE8_00000C90
    blr
}

asm void fn_8005BD10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0xc00
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x10
    bl memset
    lwz r10, 0xc(r31)
    li r7, 0x0
    li r8, 0x1
    li r9, 0x0
    slwi r4, r10, 1
    li r3, 0x0
    b lbl_fn_8005BD10_00000DB0
lbl_fn_8005BD10_00000CF4:
    cmpwi r7, 0x0
    beq lbl_fn_8005BD10_00000D54
    lwz r0, 0x4(r31)
    lhzx r6, r4, r0
    add r5, r0, r4
    cmplwi r6, 0x22
    bne lbl_fn_8005BD10_00000D40
    lhz r0, 0x2(r5)
    cmplwi r0, 0x22
    bne lbl_fn_8005BD10_00000D38
    add r5, r31, r3
    addi r4, r4, 0x2
    sth r6, 0x10(r5)
    addi r9, r9, 0x1
    addi r3, r3, 0x2
    addi r10, r10, 0x1
    b lbl_fn_8005BD10_00000DA8
lbl_fn_8005BD10_00000D38:
    li r7, 0x0
    b lbl_fn_8005BD10_00000DA8
lbl_fn_8005BD10_00000D40:
    add r5, r31, r3
    addi r3, r3, 0x2
    sth r6, 0x10(r5)
    addi r9, r9, 0x1
    b lbl_fn_8005BD10_00000DA8
lbl_fn_8005BD10_00000D54:
    lwz r5, 0x4(r31)
    lhzx r0, r5, r4
    cmplwi r0, 0x22
    bne lbl_fn_8005BD10_00000D6C
    li r7, 0x1
    b lbl_fn_8005BD10_00000DA8
lbl_fn_8005BD10_00000D6C:
    cmplwi r0, 0x9
    bne lbl_fn_8005BD10_00000D84
    addi r0, r10, 0x1
    stw r0, 0xc(r31)
    li r8, 0x0
    b lbl_fn_8005BD10_00000DBC
lbl_fn_8005BD10_00000D84:
    cmplwi r0, 0xd
    bne lbl_fn_8005BD10_00000D98
    stw r10, 0xc(r31)
    li r8, 0x0
    b lbl_fn_8005BD10_00000DBC
lbl_fn_8005BD10_00000D98:
    add r5, r31, r3
    addi r3, r3, 0x2
    sth r0, 0x10(r5)
    addi r9, r9, 0x1
lbl_fn_8005BD10_00000DA8:
    addi r10, r10, 0x1
    addi r4, r4, 0x2
lbl_fn_8005BD10_00000DB0:
    lwz r0, 0x8(r31)
    cmplw r10, r0
    blt lbl_fn_8005BD10_00000CF4
lbl_fn_8005BD10_00000DBC:
    cmpwi r8, 0x0
    beq lbl_fn_8005BD10_00000DDC
    lwz r0, 0xc(r31)
    lwz r3, 0x8(r31)
    add r0, r9, r0
    cmplw r0, r3
    blt lbl_fn_8005BD10_00000DDC
    stw r3, 0xc(r31)
lbl_fn_8005BD10_00000DDC:
    lwz r0, 0xc50(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8005BD10_00000E84
    mr r4, r31
    li r3, 0x0
    b lbl_fn_8005BD10_00000E30
lbl_fn_8005BD10_00000DF4:
    mr r5, r31
    b lbl_fn_8005BD10_00000E10
lbl_fn_8005BD10_00000DFC:
    cmplw r0, r6
    bne lbl_fn_8005BD10_00000E0C
    li r0, 0x1
    b lbl_fn_8005BD10_00000E20
lbl_fn_8005BD10_00000E0C:
    addi r5, r5, 0x2
lbl_fn_8005BD10_00000E10:
    lhz r6, 0xc10(r5)
    cmpwi r6, 0x0
    bne lbl_fn_8005BD10_00000DFC
    li r0, 0x0
lbl_fn_8005BD10_00000E20:
    cmpwi r0, 0x0
    beq lbl_fn_8005BD10_00000E3C
    addi r3, r3, 0x1
    addi r4, r4, 0x2
lbl_fn_8005BD10_00000E30:
    lhz r0, 0x10(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8005BD10_00000DF4
lbl_fn_8005BD10_00000E3C:
    cmpwi r3, 0x0
    ble lbl_fn_8005BD10_00000E84
    slwi r0, r3, 1
    mr r5, r31
    add r4, r31, r0
    li r3, 0x0
    b lbl_fn_8005BD10_00000E68
lbl_fn_8005BD10_00000E58:
    sth r0, 0x10(r5)
    addi r4, r4, 0x2
    addi r5, r5, 0x2
    addi r3, r3, 0x1
lbl_fn_8005BD10_00000E68:
    lhz r0, 0x10(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8005BD10_00000E58
    slwi r0, r3, 1
    li r4, 0x0
    add r3, r31, r0
    sth r4, 0x10(r3)
lbl_fn_8005BD10_00000E84:
    addi r3, r31, 0x10
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005BEF8(void)
{
    nofralloc
    li r6, 0x0
    b lbl_fn_8005BEF8_00000F38
lbl_fn_8005BEF8_00000EA4:
    cmpwi r6, 0x0
    beq lbl_fn_8005BEF8_00000EE4
    slwi r0, r5, 1
    lwz r4, 0x4(r3)
    lhzux r0, r4, r0
    cmplwi r0, 0x22
    bne lbl_fn_8005BEF8_00000F2C
    lhz r0, 0x2(r4)
    cmplwi r0, 0x22
    bne lbl_fn_8005BEF8_00000EDC
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_8005BEF8_00000F2C
lbl_fn_8005BEF8_00000EDC:
    li r6, 0x0
    b lbl_fn_8005BEF8_00000F2C
lbl_fn_8005BEF8_00000EE4:
    lwz r4, 0x4(r3)
    slwi r0, r5, 1
    lhzx r0, r4, r0
    cmplwi r0, 0x22
    bne lbl_fn_8005BEF8_00000F00
    li r6, 0x1
    b lbl_fn_8005BEF8_00000F2C
lbl_fn_8005BEF8_00000F00:
    cmplwi r0, 0xd
    bne lbl_fn_8005BEF8_00000F2C
    lwz r5, 0xc(r3)
    lwz r4, 0x8(r3)
    addi r0, r5, 0x2
    stw r0, 0xc(r3)
    xor r0, r4, r0
    cntlzw r0, r0
    slw r0, r4, r0
    srwi r3, r0, 31
    blr
lbl_fn_8005BEF8_00000F2C:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
lbl_fn_8005BEF8_00000F38:
    lwz r5, 0xc(r3)
    lwz r0, 0x8(r3)
    cmplw r5, r0
    blt lbl_fn_8005BEF8_00000EA4
    li r3, 0x0
    blr
}

asm void fn_8005BFAC(void)
{
    nofralloc
    lhz r0, 0x0(r4)
    sth r0, 0xc10(r3)
    cmpwi r0, 0x0
    beqlr
    addi r4, r4, 0x2
    addi r3, r3, 0x2
    b fn_8005BFAC
    blr
}

asm void fn_8005BFCC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x600
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x10
    bl memset
    lwz r5, 0xc(r31)
    li r0, 0x0
    li r3, 0x1
    li r4, 0x0
    b lbl_fn_8005BFCC_000010AC
lbl_fn_8005BFCC_00000FA8:
    cmpwi r0, 0x0
    beq lbl_fn_8005BFCC_00001028
    lwz r6, 0x4(r31)
    lbzx r8, r6, r5
    add r7, r6, r5
    cmpwi r8, 0x22
    bne lbl_fn_8005BFCC_00000FEC
    lbz r6, 0x1(r7)
    cmpwi r6, 0x22
    bne lbl_fn_8005BFCC_00000FE4
    add r6, r31, r4
    addi r4, r4, 0x1
    stb r8, 0x10(r6)
    addi r5, r5, 0x1
    b lbl_fn_8005BFCC_000010A8
lbl_fn_8005BFCC_00000FE4:
    li r0, 0x0
    b lbl_fn_8005BFCC_000010A8
lbl_fn_8005BFCC_00000FEC:
    add r6, r31, r4
    addi r4, r4, 0x1
    stb r8, 0x10(r6)
    lwz r7, 0x4(r31)
    lbzx r6, r7, r5
    addi r6, r6, 0x80
    clrlwi r6, r6, 24
    cmplwi r6, 0x1f
    bgt lbl_fn_8005BFCC_000010A8
    addi r5, r5, 0x1
    add r6, r31, r4
    lbzx r7, r7, r5
    addi r4, r4, 0x1
    stb r7, 0x10(r6)
    b lbl_fn_8005BFCC_000010A8
lbl_fn_8005BFCC_00001028:
    lwz r6, 0x4(r31)
    lbzx r7, r6, r5
    extsb r6, r7
    cmpwi r6, 0x22
    bne lbl_fn_8005BFCC_00001044
    li r0, 0x1
    b lbl_fn_8005BFCC_000010A8
lbl_fn_8005BFCC_00001044:
    cmpwi r6, 0x7c
    bne lbl_fn_8005BFCC_0000105C
    addi r0, r5, 0x1
    stw r0, 0xc(r31)
    li r3, 0x0
    b lbl_fn_8005BFCC_000010B8
lbl_fn_8005BFCC_0000105C:
    cmpwi r6, 0xd
    bne lbl_fn_8005BFCC_00001070
    stw r5, 0xc(r31)
    li r3, 0x0
    b lbl_fn_8005BFCC_000010B8
lbl_fn_8005BFCC_00001070:
    add r6, r31, r4
    addi r4, r4, 0x1
    stb r7, 0x10(r6)
    lwz r7, 0x4(r31)
    lbzx r6, r7, r5
    addi r6, r6, 0x80
    clrlwi r6, r6, 24
    cmplwi r6, 0x1f
    bgt lbl_fn_8005BFCC_000010A8
    addi r5, r5, 0x1
    add r6, r31, r4
    lbzx r7, r7, r5
    addi r4, r4, 0x1
    stb r7, 0x10(r6)
lbl_fn_8005BFCC_000010A8:
    addi r5, r5, 0x1
lbl_fn_8005BFCC_000010AC:
    lwz r6, 0x8(r31)
    cmplw r5, r6
    blt lbl_fn_8005BFCC_00000FA8
lbl_fn_8005BFCC_000010B8:
    cmpwi r3, 0x0
    beq lbl_fn_8005BFCC_000010D8
    lwz r0, 0xc(r31)
    lwz r3, 0x8(r31)
    add r0, r4, r0
    cmplw r0, r3
    blt lbl_fn_8005BFCC_000010D8
    stw r3, 0xc(r31)
lbl_fn_8005BFCC_000010D8:
    lwz r0, 0x630(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8005BFCC_00001184
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_8005BFCC_00001138
lbl_fn_8005BFCC_000010F0:
    extsb r4, r3
    li r5, 0x0
    b lbl_fn_8005BFCC_00001114
lbl_fn_8005BFCC_000010FC:
    extsb r0, r3
    cmpw r4, r0
    bne lbl_fn_8005BFCC_00001110
    li r0, 0x1
    b lbl_fn_8005BFCC_00001128
lbl_fn_8005BFCC_00001110:
    addi r5, r5, 0x1
lbl_fn_8005BFCC_00001114:
    add r3, r31, r5
    lbz r3, 0x610(r3)
    extsb. r0, r3
    bne lbl_fn_8005BFCC_000010FC
    li r0, 0x0
lbl_fn_8005BFCC_00001128:
    cmpwi r0, 0x0
    beq lbl_fn_8005BFCC_00001148
    addi r7, r7, 0x1
    addi r6, r6, 0x1
lbl_fn_8005BFCC_00001138:
    add r3, r31, r6
    lbz r3, 0x10(r3)
    extsb. r0, r3
    bne lbl_fn_8005BFCC_000010F0
lbl_fn_8005BFCC_00001148:
    cmpwi r7, 0x0
    ble lbl_fn_8005BFCC_00001184
    add r5, r31, r7
    li r4, 0x0
    b lbl_fn_8005BFCC_0000116C
lbl_fn_8005BFCC_0000115C:
    add r3, r31, r4
    addi r4, r4, 0x1
    stb r6, 0x10(r3)
    addi r5, r5, 0x1
lbl_fn_8005BFCC_0000116C:
    lbz r6, 0x10(r5)
    extsb. r0, r6
    bne lbl_fn_8005BFCC_0000115C
    add r3, r31, r4
    li r0, 0x0
    stb r0, 0x10(r3)
lbl_fn_8005BFCC_00001184:
    addi r3, r31, 0x10
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005C1F8(void)
{
    nofralloc
    li r6, 0x0
lbl_fn_8005C1F8_000011A0:
    lbz r0, 0x0(r4)
    add r5, r3, r6
    stb r0, 0x610(r5)
    extsb. r0, r0
    beqlr
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    b lbl_fn_8005C1F8_000011A0
    blr
}

asm void fn_8005C220(void)
{
    nofralloc
    slwi r0, r4, 2
    li r4, 0x1
    add r3, r3, r0
    lwz r0, 0x8(r3)
    slw r3, r4, r5
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8005C248(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x18
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005C248_00001268
    lfs f0, 0xc(r28)
    lis r4, lbl_80777758@ha
    lfs f1, 0x10(r28)
    li r0, 0x0
    fneg f0, f0
    lfs f2, 0x14(r28)
    addi r4, r4, lbl_80777758@l
    stw r0, 0x0(r3)
    fdivs f0, f0, f1
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f2, 0x14(r3)
lbl_fn_8005C248_00001268:
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    stw r3, 0x0(r28)
    beq lbl_fn_8005C248_000013C8
    addic. r0, r29, 0x4
    beq lbl_fn_8005C248_0000131C
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005C248_0000131C
    addic. r0, r30, 0x4
    beq lbl_fn_8005C248_000012D0
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005C248_000012D0
    addic. r0, r31, 0x4
    beq lbl_fn_8005C248_000012B4
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C248_000012B4:
    cmpwi r31, 0x0
    beq lbl_fn_8005C248_000012C8
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C248_000012C8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005C248_000012D0:
    cmpwi r30, 0x0
    beq lbl_fn_8005C248_00001314
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005C248_00001314
    addic. r0, r31, 0x4
    beq lbl_fn_8005C248_000012F8
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C248_000012F8:
    cmpwi r31, 0x0
    beq lbl_fn_8005C248_0000130C
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C248_0000130C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005C248_00001314:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005C248_0000131C:
    cmpwi r29, 0x0
    beq lbl_fn_8005C248_000013C0
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005C248_000013C0
    addic. r0, r30, 0x4
    beq lbl_fn_8005C248_00001374
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005C248_00001374
    addic. r0, r31, 0x4
    beq lbl_fn_8005C248_00001358
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C248_00001358:
    cmpwi r31, 0x0
    beq lbl_fn_8005C248_0000136C
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C248_0000136C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005C248_00001374:
    cmpwi r30, 0x0
    beq lbl_fn_8005C248_000013B8
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005C248_000013B8
    addic. r0, r31, 0x4
    beq lbl_fn_8005C248_0000139C
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C248_0000139C:
    cmpwi r31, 0x0
    beq lbl_fn_8005C248_000013B0
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C248_000013B0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005C248_000013B8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005C248_000013C0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005C248_000013C8:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x0(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005C448(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8005C448_000014B4
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8005C448_000014A4
    addic. r0, r31, 0x4
    beq lbl_fn_8005C448_00001460
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8005C448_00001460
    addic. r0, r30, 0x4
    beq lbl_fn_8005C448_00001448
    lwz r3, 0x4(r30)
    bl fn_8005C534
lbl_fn_8005C448_00001448:
    cmpwi r30, 0x0
    beq lbl_fn_8005C448_00001458
    lwz r3, 0x0(r30)
    bl fn_8005C534
lbl_fn_8005C448_00001458:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005C448_00001460:
    cmpwi r31, 0x0
    beq lbl_fn_8005C448_0000149C
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8005C448_0000149C
    addic. r0, r30, 0x4
    beq lbl_fn_8005C448_00001484
    lwz r3, 0x4(r30)
    bl fn_8005C534
lbl_fn_8005C448_00001484:
    cmpwi r30, 0x0
    beq lbl_fn_8005C448_00001494
    lwz r3, 0x0(r30)
    bl fn_8005C534
lbl_fn_8005C448_00001494:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005C448_0000149C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005C448_000014A4:
    cmpwi r29, 0x0
    ble lbl_fn_8005C448_000014B4
    mr r3, r28
    bl dtor_80084684
lbl_fn_8005C448_000014B4:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005C534(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8005C534_00001524
    addic. r0, r3, 0x4
    beq lbl_fn_8005C534_00001508
    lwz r3, 0x4(r3)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C534_00001508:
    cmpwi r31, 0x0
    beq lbl_fn_8005C534_0000151C
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005C534_0000151C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005C534_00001524:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
