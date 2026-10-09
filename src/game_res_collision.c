#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800844D8(void);
extern void fn_800E1D5C(void);
extern void fn_80242A8C(void);
extern void fn_80242FF4(void);
extern void fn_806920C0(void);
extern void fn_8069293C(void);
extern void fn_806952C4(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_80880390;
extern u32 lbl_808803C0;

/* Function declarations */
void fn_8023D308(void);
void fn_8023DE24(void);
void fn_8023EA78(void);

asm void fn_8023D308(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stmw r22, 0xa8(r1)
    mr r26, r5
    mr r27, r6
    mr r29, r7
    lhz r0, 0x30(r5)
    andi. r0, r0, 0x4a
    cmpwi r0, 0x40
    beq lbl_fn_8023D308_00000038
    cmpwi r0, 0x8
    beq lbl_fn_8023D308_000003AC
    b lbl_fn_8023D308_000007E0
lbl_fn_8023D308_00000038:
    lwz r28, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x20
    bl fn_800E1D5C
    lwz r25, lbl_808803C0
    cmpwi r25, 0x0
    bne lbl_fn_8023D308_00000064
    lwz r3, lbl_80880390
    addi r25, r3, 0x1
    stw r25, lbl_80880390
    stw r25, lbl_808803C0
lbl_fn_8023D308_00000064:
    lwz r3, 0x20(r1)
    lwz r0, 0x4(r3)
    cmplw r25, r0
    bge lbl_fn_8023D308_00000088
    lwz r3, 0x0(r3)
    slwi r0, r25, 2
    lwzx r24, r3, r0
    cmpwi r24, 0x0
    bne lbl_fn_8023D308_000000E4
lbl_fn_8023D308_00000088:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023D308_000000B0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023D308_000000B0:
    lwz r5, lbl_808803C0
    lwz r3, 0x20(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023D308_000000D0
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023D308_000000D0:
    bl fn_806920C0
    lwz r3, 0x20(r1)
    slwi r0, r25, 2
    lwz r3, 0x0(r3)
    lwzx r24, r3, r0
lbl_fn_8023D308_000000E4:
    addic. r0, r1, 0x20
    beq lbl_fn_8023D308_000000FC
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023D308_000000FC
    bl fn_806952C4
lbl_fn_8023D308_000000FC:
    cmpwi r29, 0x0
    addi r25, r1, 0x70
    li r30, 0x0
    beq lbl_fn_8023D308_00000118
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8023D308_0000013C
lbl_fn_8023D308_00000118:
    lwz r12, 0x0(r24)
    mr r3, r24
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x70(r1)
    li r30, 0x1
    addi r25, r25, 0x1
lbl_fn_8023D308_0000013C:
    cmpwi r29, 0x0
    beq lbl_fn_8023D308_00000160
    mr r3, r26
    mr r4, r29
    mr r5, r25
    mr r6, r24
    li r7, 0x0
    bl fn_80242FF4
    add r30, r30, r3
lbl_fn_8023D308_00000160:
    lwz r0, 0x2c(r26)
    li r31, 0x0
    cmpw r0, r30
    ble lbl_fn_8023D308_00000174
    subf r31, r30, r0
lbl_fn_8023D308_00000174:
    lhz r0, 0x30(r26)
    andi. r25, r0, 0xb0
    cmplwi r25, 0x20
    beq lbl_fn_8023D308_00000208
    cmplwi r25, 0x10
    beq lbl_fn_8023D308_00000208
    cmpwi r31, 0x0
    li r29, 0x0
    ble lbl_fn_8023D308_00000208
    b lbl_fn_8023D308_00000200
lbl_fn_8023D308_0000019C:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023D308_000001F0
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023D308_000001CC
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_000001E4
lbl_fn_8023D308_000001CC:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_000001E4:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_000001F0
    li r23, 0x1
lbl_fn_8023D308_000001F0:
    cmpwi r23, 0x0
    beq lbl_fn_8023D308_000001FC
    li r28, 0x0
lbl_fn_8023D308_000001FC:
    addi r29, r29, 0x1
lbl_fn_8023D308_00000200:
    cmpw r29, r31
    blt lbl_fn_8023D308_0000019C
lbl_fn_8023D308_00000208:
    cmplwi r25, 0x10
    bne lbl_fn_8023D308_0000028C
    cmpwi r31, 0x0
    li r29, 0x0
    ble lbl_fn_8023D308_0000028C
    b lbl_fn_8023D308_00000284
lbl_fn_8023D308_00000220:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023D308_00000274
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023D308_00000250
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_00000268
lbl_fn_8023D308_00000250:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_00000268:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_00000274
    li r23, 0x1
lbl_fn_8023D308_00000274:
    cmpwi r23, 0x0
    beq lbl_fn_8023D308_00000280
    li r28, 0x0
lbl_fn_8023D308_00000280:
    addi r29, r29, 0x1
lbl_fn_8023D308_00000284:
    cmpw r29, r31
    blt lbl_fn_8023D308_00000220
lbl_fn_8023D308_0000028C:
    cmpwi r30, 0x0
    addi r29, r1, 0x70
    li r24, 0x0
    ble lbl_fn_8023D308_00000318
    b lbl_fn_8023D308_00000310
lbl_fn_8023D308_000002A0:
    lbz r0, 0x0(r29)
    cmpwi r28, 0x0
    li r23, 0x0
    addi r29, r29, 0x1
    extsb r4, r0
    beq lbl_fn_8023D308_00000300
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023D308_000002DC
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_000002F4
lbl_fn_8023D308_000002DC:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_000002F4:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_00000300
    li r23, 0x1
lbl_fn_8023D308_00000300:
    cmpwi r23, 0x0
    beq lbl_fn_8023D308_0000030C
    li r28, 0x0
lbl_fn_8023D308_0000030C:
    addi r24, r24, 0x1
lbl_fn_8023D308_00000310:
    cmpw r24, r30
    blt lbl_fn_8023D308_000002A0
lbl_fn_8023D308_00000318:
    cmplwi r25, 0x20
    bne lbl_fn_8023D308_0000039C
    cmpwi r31, 0x0
    li r24, 0x0
    ble lbl_fn_8023D308_0000039C
    b lbl_fn_8023D308_00000394
lbl_fn_8023D308_00000330:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023D308_00000384
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023D308_00000360
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_00000378
lbl_fn_8023D308_00000360:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_00000378:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_00000384
    li r23, 0x1
lbl_fn_8023D308_00000384:
    cmpwi r23, 0x0
    beq lbl_fn_8023D308_00000390
    li r28, 0x0
lbl_fn_8023D308_00000390:
    addi r24, r24, 0x1
lbl_fn_8023D308_00000394:
    cmpw r24, r31
    blt lbl_fn_8023D308_00000330
lbl_fn_8023D308_0000039C:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r28
    b lbl_fn_8023D308_00000B08
lbl_fn_8023D308_000003AC:
    lwz r25, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x18
    li r28, 0x0
    bl fn_800E1D5C
    lwz r30, lbl_808803C0
    cmpwi r30, 0x0
    bne lbl_fn_8023D308_000003DC
    lwz r3, lbl_80880390
    addi r30, r3, 0x1
    stw r30, lbl_80880390
    stw r30, lbl_808803C0
lbl_fn_8023D308_000003DC:
    lwz r3, 0x18(r1)
    lwz r0, 0x4(r3)
    cmplw r30, r0
    bge lbl_fn_8023D308_00000400
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    lwzx r23, r3, r0
    cmpwi r23, 0x0
    bne lbl_fn_8023D308_0000045C
lbl_fn_8023D308_00000400:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023D308_00000428
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023D308_00000428:
    lwz r5, lbl_808803C0
    lwz r3, 0x18(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023D308_00000448
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023D308_00000448:
    bl fn_806920C0
    lwz r3, 0x18(r1)
    slwi r0, r30, 2
    lwz r3, 0x0(r3)
    lwzx r23, r3, r0
lbl_fn_8023D308_0000045C:
    addic. r0, r1, 0x18
    beq lbl_fn_8023D308_00000474
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023D308_00000474
    bl fn_806952C4
lbl_fn_8023D308_00000474:
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8023D308_000004E8
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lhz r0, 0x30(r26)
    stb r3, 0x8(r1)
    rlwinm. r0, r0, 0, 17, 17
    beq lbl_fn_8023D308_000004C8
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x58
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x9(r1)
    b lbl_fn_8023D308_000004E4
lbl_fn_8023D308_000004C8:
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x78
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x9(r1)
lbl_fn_8023D308_000004E4:
    li r28, 0x2
lbl_fn_8023D308_000004E8:
    mr r3, r26
    mr r4, r29
    mr r6, r23
    addi r5, r1, 0x28
    li r7, 0x0
    bl fn_80242FF4
    lwz r4, 0x2c(r26)
    add r0, r28, r3
    mr r31, r3
    li r30, 0x0
    cmpw r4, r0
    ble lbl_fn_8023D308_0000051C
    subf r30, r0, r4
lbl_fn_8023D308_0000051C:
    lhz r0, 0x30(r26)
    andi. r29, r0, 0xb0
    cmplwi r29, 0x20
    beq lbl_fn_8023D308_000005B0
    cmplwi r29, 0x10
    beq lbl_fn_8023D308_000005B0
    cmpwi r30, 0x0
    li r24, 0x0
    ble lbl_fn_8023D308_000005B0
    b lbl_fn_8023D308_000005A8
lbl_fn_8023D308_00000544:
    cmpwi r25, 0x0
    li r23, 0x0
    beq lbl_fn_8023D308_00000598
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023D308_00000574
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_0000058C
lbl_fn_8023D308_00000574:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_0000058C:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_00000598
    li r23, 0x1
lbl_fn_8023D308_00000598:
    cmpwi r23, 0x0
    beq lbl_fn_8023D308_000005A4
    li r25, 0x0
lbl_fn_8023D308_000005A4:
    addi r24, r24, 0x1
lbl_fn_8023D308_000005A8:
    cmpw r24, r30
    blt lbl_fn_8023D308_00000544
lbl_fn_8023D308_000005B0:
    cmpwi r28, 0x0
    addi r24, r1, 0x8
    li r23, 0x0
    ble lbl_fn_8023D308_0000063C
    b lbl_fn_8023D308_00000634
lbl_fn_8023D308_000005C4:
    lbz r0, 0x0(r24)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r24, r24, 0x1
    extsb r4, r0
    beq lbl_fn_8023D308_00000624
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023D308_00000600
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_00000618
lbl_fn_8023D308_00000600:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_00000618:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_00000624
    li r22, 0x1
lbl_fn_8023D308_00000624:
    cmpwi r22, 0x0
    beq lbl_fn_8023D308_00000630
    li r25, 0x0
lbl_fn_8023D308_00000630:
    addi r23, r23, 0x1
lbl_fn_8023D308_00000634:
    cmpw r23, r28
    blt lbl_fn_8023D308_000005C4
lbl_fn_8023D308_0000063C:
    cmplwi r29, 0x10
    bne lbl_fn_8023D308_000006C0
    cmpwi r30, 0x0
    li r23, 0x0
    ble lbl_fn_8023D308_000006C0
    b lbl_fn_8023D308_000006B8
lbl_fn_8023D308_00000654:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023D308_000006A8
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023D308_00000684
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_0000069C
lbl_fn_8023D308_00000684:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_0000069C:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_000006A8
    li r22, 0x1
lbl_fn_8023D308_000006A8:
    cmpwi r22, 0x0
    beq lbl_fn_8023D308_000006B4
    li r25, 0x0
lbl_fn_8023D308_000006B4:
    addi r23, r23, 0x1
lbl_fn_8023D308_000006B8:
    cmpw r23, r30
    blt lbl_fn_8023D308_00000654
lbl_fn_8023D308_000006C0:
    cmpwi r31, 0x0
    addi r23, r1, 0x28
    li r24, 0x0
    ble lbl_fn_8023D308_0000074C
    b lbl_fn_8023D308_00000744
lbl_fn_8023D308_000006D4:
    lbz r0, 0x0(r23)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r23, r23, 0x1
    extsb r4, r0
    beq lbl_fn_8023D308_00000734
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023D308_00000710
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_00000728
lbl_fn_8023D308_00000710:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_00000728:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_00000734
    li r22, 0x1
lbl_fn_8023D308_00000734:
    cmpwi r22, 0x0
    beq lbl_fn_8023D308_00000740
    li r25, 0x0
lbl_fn_8023D308_00000740:
    addi r24, r24, 0x1
lbl_fn_8023D308_00000744:
    cmpw r24, r31
    blt lbl_fn_8023D308_000006D4
lbl_fn_8023D308_0000074C:
    cmplwi r29, 0x20
    bne lbl_fn_8023D308_000007D0
    cmpwi r30, 0x0
    li r23, 0x0
    ble lbl_fn_8023D308_000007D0
    b lbl_fn_8023D308_000007C8
lbl_fn_8023D308_00000764:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023D308_000007B8
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023D308_00000794
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_000007AC
lbl_fn_8023D308_00000794:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_000007AC:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_000007B8
    li r22, 0x1
lbl_fn_8023D308_000007B8:
    cmpwi r22, 0x0
    beq lbl_fn_8023D308_000007C4
    li r25, 0x0
lbl_fn_8023D308_000007C4:
    addi r23, r23, 0x1
lbl_fn_8023D308_000007C8:
    cmpw r23, r30
    blt lbl_fn_8023D308_00000764
lbl_fn_8023D308_000007D0:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r25
    b lbl_fn_8023D308_00000B08
lbl_fn_8023D308_000007E0:
    lwz r25, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x10
    bl fn_800E1D5C
    lwz r28, lbl_808803C0
    cmpwi r28, 0x0
    bne lbl_fn_8023D308_0000080C
    lwz r3, lbl_80880390
    addi r28, r3, 0x1
    stw r28, lbl_80880390
    stw r28, lbl_808803C0
lbl_fn_8023D308_0000080C:
    lwz r3, 0x10(r1)
    lwz r0, 0x4(r3)
    cmplw r28, r0
    bge lbl_fn_8023D308_00000830
    lwz r3, 0x0(r3)
    slwi r0, r28, 2
    lwzx r23, r3, r0
    cmpwi r23, 0x0
    bne lbl_fn_8023D308_0000088C
lbl_fn_8023D308_00000830:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023D308_00000858
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023D308_00000858:
    lwz r5, lbl_808803C0
    lwz r3, 0x10(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023D308_00000878
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023D308_00000878:
    bl fn_806920C0
    lwz r3, 0x10(r1)
    slwi r0, r28, 2
    lwz r3, 0x0(r3)
    lwzx r23, r3, r0
lbl_fn_8023D308_0000088C:
    addic. r0, r1, 0x10
    beq lbl_fn_8023D308_000008A4
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023D308_000008A4
    bl fn_806952C4
lbl_fn_8023D308_000008A4:
    mr r3, r26
    mr r4, r29
    mr r6, r23
    addi r5, r1, 0x48
    li r7, 0x0
    bl fn_80242FF4
    lwz r0, 0x2c(r26)
    mr r29, r3
    li r28, 0x0
    cmpw r0, r3
    ble lbl_fn_8023D308_000008D4
    subf r28, r3, r0
lbl_fn_8023D308_000008D4:
    lhz r0, 0x30(r26)
    andi. r23, r0, 0xb0
    cmplwi r23, 0x20
    beq lbl_fn_8023D308_00000968
    cmplwi r23, 0x10
    beq lbl_fn_8023D308_00000968
    cmpwi r28, 0x0
    li r24, 0x0
    ble lbl_fn_8023D308_00000968
    b lbl_fn_8023D308_00000960
lbl_fn_8023D308_000008FC:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023D308_00000950
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023D308_0000092C
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_00000944
lbl_fn_8023D308_0000092C:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_00000944:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_00000950
    li r22, 0x1
lbl_fn_8023D308_00000950:
    cmpwi r22, 0x0
    beq lbl_fn_8023D308_0000095C
    li r25, 0x0
lbl_fn_8023D308_0000095C:
    addi r24, r24, 0x1
lbl_fn_8023D308_00000960:
    cmpw r24, r28
    blt lbl_fn_8023D308_000008FC
lbl_fn_8023D308_00000968:
    cmplwi r23, 0x10
    bne lbl_fn_8023D308_000009EC
    cmpwi r28, 0x0
    li r24, 0x0
    ble lbl_fn_8023D308_000009EC
    b lbl_fn_8023D308_000009E4
lbl_fn_8023D308_00000980:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023D308_000009D4
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023D308_000009B0
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_000009C8
lbl_fn_8023D308_000009B0:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_000009C8:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_000009D4
    li r22, 0x1
lbl_fn_8023D308_000009D4:
    cmpwi r22, 0x0
    beq lbl_fn_8023D308_000009E0
    li r25, 0x0
lbl_fn_8023D308_000009E0:
    addi r24, r24, 0x1
lbl_fn_8023D308_000009E4:
    cmpw r24, r28
    blt lbl_fn_8023D308_00000980
lbl_fn_8023D308_000009EC:
    cmpwi r29, 0x0
    addi r24, r1, 0x48
    li r30, 0x0
    ble lbl_fn_8023D308_00000A78
    b lbl_fn_8023D308_00000A70
lbl_fn_8023D308_00000A00:
    lbz r0, 0x0(r24)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r24, r24, 0x1
    extsb r4, r0
    beq lbl_fn_8023D308_00000A60
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023D308_00000A3C
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_00000A54
lbl_fn_8023D308_00000A3C:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_00000A54:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_00000A60
    li r22, 0x1
lbl_fn_8023D308_00000A60:
    cmpwi r22, 0x0
    beq lbl_fn_8023D308_00000A6C
    li r25, 0x0
lbl_fn_8023D308_00000A6C:
    addi r30, r30, 0x1
lbl_fn_8023D308_00000A70:
    cmpw r30, r29
    blt lbl_fn_8023D308_00000A00
lbl_fn_8023D308_00000A78:
    cmplwi r23, 0x20
    bne lbl_fn_8023D308_00000AFC
    cmpwi r28, 0x0
    li r23, 0x0
    ble lbl_fn_8023D308_00000AFC
    b lbl_fn_8023D308_00000AF4
lbl_fn_8023D308_00000A90:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023D308_00000AE4
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023D308_00000AC0
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023D308_00000AD8
lbl_fn_8023D308_00000AC0:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023D308_00000AD8:
    cmpwi r3, -0x1
    bne lbl_fn_8023D308_00000AE4
    li r22, 0x1
lbl_fn_8023D308_00000AE4:
    cmpwi r22, 0x0
    beq lbl_fn_8023D308_00000AF0
    li r25, 0x0
lbl_fn_8023D308_00000AF0:
    addi r23, r23, 0x1
lbl_fn_8023D308_00000AF4:
    cmpw r23, r28
    blt lbl_fn_8023D308_00000A90
lbl_fn_8023D308_00000AFC:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r25
lbl_fn_8023D308_00000B08:
    lmw r22, 0xa8(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8023DE24(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stmw r22, 0xa8(r1)
    mr r26, r5
    mr r27, r6
    mr r29, r7
    mr r31, r8
    lhz r0, 0x30(r5)
    andi. r0, r0, 0x4a
    cmpwi r0, 0x40
    beq lbl_fn_8023DE24_00000B58
    cmpwi r0, 0x8
    beq lbl_fn_8023DE24_00000ED0
    b lbl_fn_8023DE24_00001308
lbl_fn_8023DE24_00000B58:
    lwz r28, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x20
    bl fn_800E1D5C
    lwz r25, lbl_808803C0
    cmpwi r25, 0x0
    bne lbl_fn_8023DE24_00000B84
    lwz r3, lbl_80880390
    addi r25, r3, 0x1
    stw r25, lbl_80880390
    stw r25, lbl_808803C0
lbl_fn_8023DE24_00000B84:
    lwz r3, 0x20(r1)
    lwz r0, 0x4(r3)
    cmplw r25, r0
    bge lbl_fn_8023DE24_00000BA8
    lwz r3, 0x0(r3)
    slwi r0, r25, 2
    lwzx r24, r3, r0
    cmpwi r24, 0x0
    bne lbl_fn_8023DE24_00000C04
lbl_fn_8023DE24_00000BA8:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023DE24_00000BD0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023DE24_00000BD0:
    lwz r5, lbl_808803C0
    lwz r3, 0x20(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023DE24_00000BF0
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023DE24_00000BF0:
    bl fn_806920C0
    lwz r3, 0x20(r1)
    slwi r0, r25, 2
    lwz r3, 0x0(r3)
    lwzx r24, r3, r0
lbl_fn_8023DE24_00000C04:
    addic. r0, r1, 0x20
    beq lbl_fn_8023DE24_00000C1C
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023DE24_00000C1C
    bl fn_806952C4
lbl_fn_8023DE24_00000C1C:
    or. r0, r31, r29
    addi r25, r1, 0x70
    li r30, 0x0
    beq lbl_fn_8023DE24_00000C38
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8023DE24_00000C5C
lbl_fn_8023DE24_00000C38:
    lwz r12, 0x0(r24)
    mr r3, r24
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x70(r1)
    li r30, 0x1
    addi r25, r25, 0x1
lbl_fn_8023DE24_00000C5C:
    or. r0, r31, r29
    beq lbl_fn_8023DE24_00000C84
    mr r3, r26
    mr r6, r31
    mr r5, r29
    mr r7, r25
    mr r8, r24
    li r9, 0x0
    bl fn_80242A8C
    add r30, r30, r3
lbl_fn_8023DE24_00000C84:
    lwz r0, 0x2c(r26)
    li r31, 0x0
    cmpw r0, r30
    ble lbl_fn_8023DE24_00000C98
    subf r31, r30, r0
lbl_fn_8023DE24_00000C98:
    lhz r0, 0x30(r26)
    andi. r25, r0, 0xb0
    cmplwi r25, 0x20
    beq lbl_fn_8023DE24_00000D2C
    cmplwi r25, 0x10
    beq lbl_fn_8023DE24_00000D2C
    cmpwi r31, 0x0
    li r29, 0x0
    ble lbl_fn_8023DE24_00000D2C
    b lbl_fn_8023DE24_00000D24
lbl_fn_8023DE24_00000CC0:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023DE24_00000D14
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00000CF0
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_00000D08
lbl_fn_8023DE24_00000CF0:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_00000D08:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_00000D14
    li r23, 0x1
lbl_fn_8023DE24_00000D14:
    cmpwi r23, 0x0
    beq lbl_fn_8023DE24_00000D20
    li r28, 0x0
lbl_fn_8023DE24_00000D20:
    addi r29, r29, 0x1
lbl_fn_8023DE24_00000D24:
    cmpw r29, r31
    blt lbl_fn_8023DE24_00000CC0
lbl_fn_8023DE24_00000D2C:
    cmplwi r25, 0x10
    bne lbl_fn_8023DE24_00000DB0
    cmpwi r31, 0x0
    li r29, 0x0
    ble lbl_fn_8023DE24_00000DB0
    b lbl_fn_8023DE24_00000DA8
lbl_fn_8023DE24_00000D44:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023DE24_00000D98
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00000D74
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_00000D8C
lbl_fn_8023DE24_00000D74:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_00000D8C:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_00000D98
    li r23, 0x1
lbl_fn_8023DE24_00000D98:
    cmpwi r23, 0x0
    beq lbl_fn_8023DE24_00000DA4
    li r28, 0x0
lbl_fn_8023DE24_00000DA4:
    addi r29, r29, 0x1
lbl_fn_8023DE24_00000DA8:
    cmpw r29, r31
    blt lbl_fn_8023DE24_00000D44
lbl_fn_8023DE24_00000DB0:
    cmpwi r30, 0x0
    addi r29, r1, 0x70
    li r24, 0x0
    ble lbl_fn_8023DE24_00000E3C
    b lbl_fn_8023DE24_00000E34
lbl_fn_8023DE24_00000DC4:
    lbz r0, 0x0(r29)
    cmpwi r28, 0x0
    li r23, 0x0
    addi r29, r29, 0x1
    extsb r4, r0
    beq lbl_fn_8023DE24_00000E24
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00000E00
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_00000E18
lbl_fn_8023DE24_00000E00:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_00000E18:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_00000E24
    li r23, 0x1
lbl_fn_8023DE24_00000E24:
    cmpwi r23, 0x0
    beq lbl_fn_8023DE24_00000E30
    li r28, 0x0
lbl_fn_8023DE24_00000E30:
    addi r24, r24, 0x1
lbl_fn_8023DE24_00000E34:
    cmpw r24, r30
    blt lbl_fn_8023DE24_00000DC4
lbl_fn_8023DE24_00000E3C:
    cmplwi r25, 0x20
    bne lbl_fn_8023DE24_00000EC0
    cmpwi r31, 0x0
    li r24, 0x0
    ble lbl_fn_8023DE24_00000EC0
    b lbl_fn_8023DE24_00000EB8
lbl_fn_8023DE24_00000E54:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023DE24_00000EA8
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00000E84
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_00000E9C
lbl_fn_8023DE24_00000E84:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_00000E9C:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_00000EA8
    li r23, 0x1
lbl_fn_8023DE24_00000EA8:
    cmpwi r23, 0x0
    beq lbl_fn_8023DE24_00000EB4
    li r28, 0x0
lbl_fn_8023DE24_00000EB4:
    addi r24, r24, 0x1
lbl_fn_8023DE24_00000EB8:
    cmpw r24, r31
    blt lbl_fn_8023DE24_00000E54
lbl_fn_8023DE24_00000EC0:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r28
    b lbl_fn_8023DE24_0000175C
lbl_fn_8023DE24_00000ED0:
    lwz r25, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x18
    li r28, 0x0
    bl fn_800E1D5C
    lwz r30, lbl_808803C0
    cmpwi r30, 0x0
    bne lbl_fn_8023DE24_00000F00
    lwz r3, lbl_80880390
    addi r30, r3, 0x1
    stw r30, lbl_80880390
    stw r30, lbl_808803C0
lbl_fn_8023DE24_00000F00:
    lwz r3, 0x18(r1)
    lwz r0, 0x4(r3)
    cmplw r30, r0
    bge lbl_fn_8023DE24_00000F24
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    lwzx r23, r3, r0
    cmpwi r23, 0x0
    bne lbl_fn_8023DE24_00000F80
lbl_fn_8023DE24_00000F24:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023DE24_00000F4C
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023DE24_00000F4C:
    lwz r5, lbl_808803C0
    lwz r3, 0x18(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023DE24_00000F6C
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023DE24_00000F6C:
    bl fn_806920C0
    lwz r3, 0x18(r1)
    slwi r0, r30, 2
    lwz r3, 0x0(r3)
    lwzx r23, r3, r0
lbl_fn_8023DE24_00000F80:
    addic. r0, r1, 0x18
    beq lbl_fn_8023DE24_00000F98
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023DE24_00000F98
    bl fn_806952C4
lbl_fn_8023DE24_00000F98:
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8023DE24_0000100C
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lhz r0, 0x30(r26)
    stb r3, 0xc(r1)
    rlwinm. r0, r0, 0, 17, 17
    beq lbl_fn_8023DE24_00000FEC
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x58
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0xd(r1)
    b lbl_fn_8023DE24_00001008
lbl_fn_8023DE24_00000FEC:
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x78
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0xd(r1)
lbl_fn_8023DE24_00001008:
    li r28, 0x2
lbl_fn_8023DE24_0000100C:
    mr r3, r26
    mr r6, r31
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x28
    li r9, 0x0
    bl fn_80242A8C
    lwz r4, 0x2c(r26)
    add r0, r28, r3
    mr r31, r3
    li r30, 0x0
    cmpw r4, r0
    ble lbl_fn_8023DE24_00001044
    subf r30, r0, r4
lbl_fn_8023DE24_00001044:
    lhz r0, 0x30(r26)
    andi. r29, r0, 0xb0
    cmplwi r29, 0x20
    beq lbl_fn_8023DE24_000010D8
    cmplwi r29, 0x10
    beq lbl_fn_8023DE24_000010D8
    cmpwi r30, 0x0
    li r24, 0x0
    ble lbl_fn_8023DE24_000010D8
    b lbl_fn_8023DE24_000010D0
lbl_fn_8023DE24_0000106C:
    cmpwi r25, 0x0
    li r23, 0x0
    beq lbl_fn_8023DE24_000010C0
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_0000109C
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_000010B4
lbl_fn_8023DE24_0000109C:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_000010B4:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_000010C0
    li r23, 0x1
lbl_fn_8023DE24_000010C0:
    cmpwi r23, 0x0
    beq lbl_fn_8023DE24_000010CC
    li r25, 0x0
lbl_fn_8023DE24_000010CC:
    addi r24, r24, 0x1
lbl_fn_8023DE24_000010D0:
    cmpw r24, r30
    blt lbl_fn_8023DE24_0000106C
lbl_fn_8023DE24_000010D8:
    cmpwi r28, 0x0
    addi r24, r1, 0xc
    li r23, 0x0
    ble lbl_fn_8023DE24_00001164
    b lbl_fn_8023DE24_0000115C
lbl_fn_8023DE24_000010EC:
    lbz r0, 0x0(r24)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r24, r24, 0x1
    extsb r4, r0
    beq lbl_fn_8023DE24_0000114C
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00001128
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_00001140
lbl_fn_8023DE24_00001128:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_00001140:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_0000114C
    li r22, 0x1
lbl_fn_8023DE24_0000114C:
    cmpwi r22, 0x0
    beq lbl_fn_8023DE24_00001158
    li r25, 0x0
lbl_fn_8023DE24_00001158:
    addi r23, r23, 0x1
lbl_fn_8023DE24_0000115C:
    cmpw r23, r28
    blt lbl_fn_8023DE24_000010EC
lbl_fn_8023DE24_00001164:
    cmplwi r29, 0x10
    bne lbl_fn_8023DE24_000011E8
    cmpwi r30, 0x0
    li r23, 0x0
    ble lbl_fn_8023DE24_000011E8
    b lbl_fn_8023DE24_000011E0
lbl_fn_8023DE24_0000117C:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023DE24_000011D0
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_000011AC
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_000011C4
lbl_fn_8023DE24_000011AC:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_000011C4:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_000011D0
    li r22, 0x1
lbl_fn_8023DE24_000011D0:
    cmpwi r22, 0x0
    beq lbl_fn_8023DE24_000011DC
    li r25, 0x0
lbl_fn_8023DE24_000011DC:
    addi r23, r23, 0x1
lbl_fn_8023DE24_000011E0:
    cmpw r23, r30
    blt lbl_fn_8023DE24_0000117C
lbl_fn_8023DE24_000011E8:
    cmpwi r31, 0x0
    addi r23, r1, 0x28
    li r24, 0x0
    ble lbl_fn_8023DE24_00001274
    b lbl_fn_8023DE24_0000126C
lbl_fn_8023DE24_000011FC:
    lbz r0, 0x0(r23)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r23, r23, 0x1
    extsb r4, r0
    beq lbl_fn_8023DE24_0000125C
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00001238
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_00001250
lbl_fn_8023DE24_00001238:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_00001250:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_0000125C
    li r22, 0x1
lbl_fn_8023DE24_0000125C:
    cmpwi r22, 0x0
    beq lbl_fn_8023DE24_00001268
    li r25, 0x0
lbl_fn_8023DE24_00001268:
    addi r24, r24, 0x1
lbl_fn_8023DE24_0000126C:
    cmpw r24, r31
    blt lbl_fn_8023DE24_000011FC
lbl_fn_8023DE24_00001274:
    cmplwi r29, 0x20
    bne lbl_fn_8023DE24_000012F8
    cmpwi r30, 0x0
    li r23, 0x0
    ble lbl_fn_8023DE24_000012F8
    b lbl_fn_8023DE24_000012F0
lbl_fn_8023DE24_0000128C:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023DE24_000012E0
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_000012BC
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_000012D4
lbl_fn_8023DE24_000012BC:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_000012D4:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_000012E0
    li r22, 0x1
lbl_fn_8023DE24_000012E0:
    cmpwi r22, 0x0
    beq lbl_fn_8023DE24_000012EC
    li r25, 0x0
lbl_fn_8023DE24_000012EC:
    addi r23, r23, 0x1
lbl_fn_8023DE24_000012F0:
    cmpw r23, r30
    blt lbl_fn_8023DE24_0000128C
lbl_fn_8023DE24_000012F8:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r25
    b lbl_fn_8023DE24_0000175C
lbl_fn_8023DE24_00001308:
    lwz r25, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x10
    bl fn_800E1D5C
    lwz r30, lbl_808803C0
    cmpwi r30, 0x0
    bne lbl_fn_8023DE24_00001334
    lwz r3, lbl_80880390
    addi r30, r3, 0x1
    stw r30, lbl_80880390
    stw r30, lbl_808803C0
lbl_fn_8023DE24_00001334:
    lwz r3, 0x10(r1)
    lwz r0, 0x4(r3)
    cmplw r30, r0
    bge lbl_fn_8023DE24_00001358
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    lwzx r28, r3, r0
    cmpwi r28, 0x0
    bne lbl_fn_8023DE24_000013B4
lbl_fn_8023DE24_00001358:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023DE24_00001380
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023DE24_00001380:
    lwz r5, lbl_808803C0
    lwz r3, 0x10(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023DE24_000013A0
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023DE24_000013A0:
    bl fn_806920C0
    lwz r3, 0x10(r1)
    slwi r0, r30, 2
    lwz r3, 0x0(r3)
    lwzx r28, r3, r0
lbl_fn_8023DE24_000013B4:
    addic. r0, r1, 0x10
    beq lbl_fn_8023DE24_000013CC
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023DE24_000013CC
    bl fn_806952C4
lbl_fn_8023DE24_000013CC:
    li r30, 0x0
    xoris r0, r29, 0x8000
    xoris r4, r30, 0x8000
    subfc r3, r30, r31
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    bne lbl_fn_8023DE24_0000141C
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_fn_8023DE24_0000141C
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x2b
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x8(r1)
    li r30, 0x1
    b lbl_fn_8023DE24_00001464
lbl_fn_8023DE24_0000141C:
    li r3, 0x0
    xoris r0, r29, 0x8000
    xoris r4, r3, 0x8000
    subfc r3, r3, r31
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    beq lbl_fn_8023DE24_00001464
    lwz r12, 0x0(r28)
    mr r3, r28
    li r30, 0x1
    li r4, 0x2d
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    subfic r31, r31, 0x0
    stb r3, 0x8(r1)
    subfze r29, r29
lbl_fn_8023DE24_00001464:
    mr r3, r26
    mr r6, r31
    mr r5, r29
    mr r8, r28
    addi r7, r1, 0x48
    li r9, 0x0
    bl fn_80242A8C
    lwz r4, 0x2c(r26)
    add r0, r30, r3
    mr r31, r3
    li r28, 0x0
    cmpw r4, r0
    ble lbl_fn_8023DE24_0000149C
    subf r28, r0, r4
lbl_fn_8023DE24_0000149C:
    lhz r0, 0x30(r26)
    andi. r29, r0, 0xb0
    cmplwi r29, 0x20
    beq lbl_fn_8023DE24_00001530
    cmplwi r29, 0x10
    beq lbl_fn_8023DE24_00001530
    cmpwi r28, 0x0
    li r23, 0x0
    ble lbl_fn_8023DE24_00001530
    b lbl_fn_8023DE24_00001528
lbl_fn_8023DE24_000014C4:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023DE24_00001518
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_000014F4
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_0000150C
lbl_fn_8023DE24_000014F4:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_0000150C:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_00001518
    li r22, 0x1
lbl_fn_8023DE24_00001518:
    cmpwi r22, 0x0
    beq lbl_fn_8023DE24_00001524
    li r25, 0x0
lbl_fn_8023DE24_00001524:
    addi r23, r23, 0x1
lbl_fn_8023DE24_00001528:
    cmpw r23, r28
    blt lbl_fn_8023DE24_000014C4
lbl_fn_8023DE24_00001530:
    cmpwi r30, 0x0
    addi r23, r1, 0x8
    li r24, 0x0
    ble lbl_fn_8023DE24_000015BC
    b lbl_fn_8023DE24_000015B4
lbl_fn_8023DE24_00001544:
    lbz r0, 0x0(r23)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r23, r23, 0x1
    extsb r4, r0
    beq lbl_fn_8023DE24_000015A4
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00001580
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_00001598
lbl_fn_8023DE24_00001580:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_00001598:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_000015A4
    li r22, 0x1
lbl_fn_8023DE24_000015A4:
    cmpwi r22, 0x0
    beq lbl_fn_8023DE24_000015B0
    li r25, 0x0
lbl_fn_8023DE24_000015B0:
    addi r24, r24, 0x1
lbl_fn_8023DE24_000015B4:
    cmpw r24, r30
    blt lbl_fn_8023DE24_00001544
lbl_fn_8023DE24_000015BC:
    cmplwi r29, 0x10
    bne lbl_fn_8023DE24_00001640
    cmpwi r28, 0x0
    li r23, 0x0
    ble lbl_fn_8023DE24_00001640
    b lbl_fn_8023DE24_00001638
lbl_fn_8023DE24_000015D4:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023DE24_00001628
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00001604
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_0000161C
lbl_fn_8023DE24_00001604:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_0000161C:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_00001628
    li r22, 0x1
lbl_fn_8023DE24_00001628:
    cmpwi r22, 0x0
    beq lbl_fn_8023DE24_00001634
    li r25, 0x0
lbl_fn_8023DE24_00001634:
    addi r23, r23, 0x1
lbl_fn_8023DE24_00001638:
    cmpw r23, r28
    blt lbl_fn_8023DE24_000015D4
lbl_fn_8023DE24_00001640:
    cmpwi r31, 0x0
    addi r23, r1, 0x48
    li r24, 0x0
    ble lbl_fn_8023DE24_000016CC
    b lbl_fn_8023DE24_000016C4
lbl_fn_8023DE24_00001654:
    lbz r0, 0x0(r23)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r23, r23, 0x1
    extsb r4, r0
    beq lbl_fn_8023DE24_000016B4
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00001690
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_000016A8
lbl_fn_8023DE24_00001690:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_000016A8:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_000016B4
    li r22, 0x1
lbl_fn_8023DE24_000016B4:
    cmpwi r22, 0x0
    beq lbl_fn_8023DE24_000016C0
    li r25, 0x0
lbl_fn_8023DE24_000016C0:
    addi r24, r24, 0x1
lbl_fn_8023DE24_000016C4:
    cmpw r24, r31
    blt lbl_fn_8023DE24_00001654
lbl_fn_8023DE24_000016CC:
    cmplwi r29, 0x20
    bne lbl_fn_8023DE24_00001750
    cmpwi r28, 0x0
    li r23, 0x0
    ble lbl_fn_8023DE24_00001750
    b lbl_fn_8023DE24_00001748
lbl_fn_8023DE24_000016E4:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023DE24_00001738
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023DE24_00001714
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023DE24_0000172C
lbl_fn_8023DE24_00001714:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023DE24_0000172C:
    cmpwi r3, -0x1
    bne lbl_fn_8023DE24_00001738
    li r22, 0x1
lbl_fn_8023DE24_00001738:
    cmpwi r22, 0x0
    beq lbl_fn_8023DE24_00001744
    li r25, 0x0
lbl_fn_8023DE24_00001744:
    addi r23, r23, 0x1
lbl_fn_8023DE24_00001748:
    cmpw r23, r28
    blt lbl_fn_8023DE24_000016E4
lbl_fn_8023DE24_00001750:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r25
lbl_fn_8023DE24_0000175C:
    lmw r22, 0xa8(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8023EA78(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stmw r22, 0xa8(r1)
    mr r26, r5
    mr r27, r6
    mr r29, r7
    mr r31, r8
    lhz r0, 0x30(r5)
    andi. r0, r0, 0x4a
    cmpwi r0, 0x40
    beq lbl_fn_8023EA78_000017AC
    cmpwi r0, 0x8
    beq lbl_fn_8023EA78_00001B24
    b lbl_fn_8023EA78_00001F5C
lbl_fn_8023EA78_000017AC:
    lwz r28, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x20
    bl fn_800E1D5C
    lwz r25, lbl_808803C0
    cmpwi r25, 0x0
    bne lbl_fn_8023EA78_000017D8
    lwz r3, lbl_80880390
    addi r25, r3, 0x1
    stw r25, lbl_80880390
    stw r25, lbl_808803C0
lbl_fn_8023EA78_000017D8:
    lwz r3, 0x20(r1)
    lwz r0, 0x4(r3)
    cmplw r25, r0
    bge lbl_fn_8023EA78_000017FC
    lwz r3, 0x0(r3)
    slwi r0, r25, 2
    lwzx r24, r3, r0
    cmpwi r24, 0x0
    bne lbl_fn_8023EA78_00001858
lbl_fn_8023EA78_000017FC:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023EA78_00001824
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023EA78_00001824:
    lwz r5, lbl_808803C0
    lwz r3, 0x20(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023EA78_00001844
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023EA78_00001844:
    bl fn_806920C0
    lwz r3, 0x20(r1)
    slwi r0, r25, 2
    lwz r3, 0x0(r3)
    lwzx r24, r3, r0
lbl_fn_8023EA78_00001858:
    addic. r0, r1, 0x20
    beq lbl_fn_8023EA78_00001870
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023EA78_00001870
    bl fn_806952C4
lbl_fn_8023EA78_00001870:
    or. r0, r31, r29
    addi r25, r1, 0x70
    li r30, 0x0
    beq lbl_fn_8023EA78_0000188C
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8023EA78_000018B0
lbl_fn_8023EA78_0000188C:
    lwz r12, 0x0(r24)
    mr r3, r24
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x70(r1)
    li r30, 0x1
    addi r25, r25, 0x1
lbl_fn_8023EA78_000018B0:
    or. r0, r31, r29
    beq lbl_fn_8023EA78_000018D8
    mr r3, r26
    mr r6, r31
    mr r5, r29
    mr r7, r25
    mr r8, r24
    li r9, 0x0
    bl fn_80242A8C
    add r30, r30, r3
lbl_fn_8023EA78_000018D8:
    lwz r0, 0x2c(r26)
    li r31, 0x0
    cmpw r0, r30
    ble lbl_fn_8023EA78_000018EC
    subf r31, r30, r0
lbl_fn_8023EA78_000018EC:
    lhz r0, 0x30(r26)
    andi. r25, r0, 0xb0
    cmplwi r25, 0x20
    beq lbl_fn_8023EA78_00001980
    cmplwi r25, 0x10
    beq lbl_fn_8023EA78_00001980
    cmpwi r31, 0x0
    li r29, 0x0
    ble lbl_fn_8023EA78_00001980
    b lbl_fn_8023EA78_00001978
lbl_fn_8023EA78_00001914:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023EA78_00001968
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00001944
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_0000195C
lbl_fn_8023EA78_00001944:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_0000195C:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00001968
    li r23, 0x1
lbl_fn_8023EA78_00001968:
    cmpwi r23, 0x0
    beq lbl_fn_8023EA78_00001974
    li r28, 0x0
lbl_fn_8023EA78_00001974:
    addi r29, r29, 0x1
lbl_fn_8023EA78_00001978:
    cmpw r29, r31
    blt lbl_fn_8023EA78_00001914
lbl_fn_8023EA78_00001980:
    cmplwi r25, 0x10
    bne lbl_fn_8023EA78_00001A04
    cmpwi r31, 0x0
    li r29, 0x0
    ble lbl_fn_8023EA78_00001A04
    b lbl_fn_8023EA78_000019FC
lbl_fn_8023EA78_00001998:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023EA78_000019EC
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023EA78_000019C8
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_000019E0
lbl_fn_8023EA78_000019C8:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_000019E0:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_000019EC
    li r23, 0x1
lbl_fn_8023EA78_000019EC:
    cmpwi r23, 0x0
    beq lbl_fn_8023EA78_000019F8
    li r28, 0x0
lbl_fn_8023EA78_000019F8:
    addi r29, r29, 0x1
lbl_fn_8023EA78_000019FC:
    cmpw r29, r31
    blt lbl_fn_8023EA78_00001998
lbl_fn_8023EA78_00001A04:
    cmpwi r30, 0x0
    addi r29, r1, 0x70
    li r24, 0x0
    ble lbl_fn_8023EA78_00001A90
    b lbl_fn_8023EA78_00001A88
lbl_fn_8023EA78_00001A18:
    lbz r0, 0x0(r29)
    cmpwi r28, 0x0
    li r23, 0x0
    addi r29, r29, 0x1
    extsb r4, r0
    beq lbl_fn_8023EA78_00001A78
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00001A54
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_00001A6C
lbl_fn_8023EA78_00001A54:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_00001A6C:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00001A78
    li r23, 0x1
lbl_fn_8023EA78_00001A78:
    cmpwi r23, 0x0
    beq lbl_fn_8023EA78_00001A84
    li r28, 0x0
lbl_fn_8023EA78_00001A84:
    addi r24, r24, 0x1
lbl_fn_8023EA78_00001A88:
    cmpw r24, r30
    blt lbl_fn_8023EA78_00001A18
lbl_fn_8023EA78_00001A90:
    cmplwi r25, 0x20
    bne lbl_fn_8023EA78_00001B14
    cmpwi r31, 0x0
    li r24, 0x0
    ble lbl_fn_8023EA78_00001B14
    b lbl_fn_8023EA78_00001B0C
lbl_fn_8023EA78_00001AA8:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023EA78_00001AFC
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00001AD8
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_00001AF0
lbl_fn_8023EA78_00001AD8:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_00001AF0:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00001AFC
    li r23, 0x1
lbl_fn_8023EA78_00001AFC:
    cmpwi r23, 0x0
    beq lbl_fn_8023EA78_00001B08
    li r28, 0x0
lbl_fn_8023EA78_00001B08:
    addi r24, r24, 0x1
lbl_fn_8023EA78_00001B0C:
    cmpw r24, r31
    blt lbl_fn_8023EA78_00001AA8
lbl_fn_8023EA78_00001B14:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r28
    b lbl_fn_8023EA78_00002288
lbl_fn_8023EA78_00001B24:
    lwz r25, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x18
    li r28, 0x0
    bl fn_800E1D5C
    lwz r30, lbl_808803C0
    cmpwi r30, 0x0
    bne lbl_fn_8023EA78_00001B54
    lwz r3, lbl_80880390
    addi r30, r3, 0x1
    stw r30, lbl_80880390
    stw r30, lbl_808803C0
lbl_fn_8023EA78_00001B54:
    lwz r3, 0x18(r1)
    lwz r0, 0x4(r3)
    cmplw r30, r0
    bge lbl_fn_8023EA78_00001B78
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    lwzx r23, r3, r0
    cmpwi r23, 0x0
    bne lbl_fn_8023EA78_00001BD4
lbl_fn_8023EA78_00001B78:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023EA78_00001BA0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023EA78_00001BA0:
    lwz r5, lbl_808803C0
    lwz r3, 0x18(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023EA78_00001BC0
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023EA78_00001BC0:
    bl fn_806920C0
    lwz r3, 0x18(r1)
    slwi r0, r30, 2
    lwz r3, 0x0(r3)
    lwzx r23, r3, r0
lbl_fn_8023EA78_00001BD4:
    addic. r0, r1, 0x18
    beq lbl_fn_8023EA78_00001BEC
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023EA78_00001BEC
    bl fn_806952C4
lbl_fn_8023EA78_00001BEC:
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8023EA78_00001C60
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lhz r0, 0x30(r26)
    stb r3, 0x8(r1)
    rlwinm. r0, r0, 0, 17, 17
    beq lbl_fn_8023EA78_00001C40
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x58
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x9(r1)
    b lbl_fn_8023EA78_00001C5C
lbl_fn_8023EA78_00001C40:
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x78
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x9(r1)
lbl_fn_8023EA78_00001C5C:
    li r28, 0x2
lbl_fn_8023EA78_00001C60:
    mr r3, r26
    mr r6, r31
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x28
    li r9, 0x0
    bl fn_80242A8C
    lwz r4, 0x2c(r26)
    add r0, r28, r3
    mr r31, r3
    li r30, 0x0
    cmpw r4, r0
    ble lbl_fn_8023EA78_00001C98
    subf r30, r0, r4
lbl_fn_8023EA78_00001C98:
    lhz r0, 0x30(r26)
    andi. r29, r0, 0xb0
    cmplwi r29, 0x20
    beq lbl_fn_8023EA78_00001D2C
    cmplwi r29, 0x10
    beq lbl_fn_8023EA78_00001D2C
    cmpwi r30, 0x0
    li r24, 0x0
    ble lbl_fn_8023EA78_00001D2C
    b lbl_fn_8023EA78_00001D24
lbl_fn_8023EA78_00001CC0:
    cmpwi r25, 0x0
    li r23, 0x0
    beq lbl_fn_8023EA78_00001D14
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00001CF0
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_00001D08
lbl_fn_8023EA78_00001CF0:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_00001D08:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00001D14
    li r23, 0x1
lbl_fn_8023EA78_00001D14:
    cmpwi r23, 0x0
    beq lbl_fn_8023EA78_00001D20
    li r25, 0x0
lbl_fn_8023EA78_00001D20:
    addi r24, r24, 0x1
lbl_fn_8023EA78_00001D24:
    cmpw r24, r30
    blt lbl_fn_8023EA78_00001CC0
lbl_fn_8023EA78_00001D2C:
    cmpwi r28, 0x0
    addi r24, r1, 0x8
    li r23, 0x0
    ble lbl_fn_8023EA78_00001DB8
    b lbl_fn_8023EA78_00001DB0
lbl_fn_8023EA78_00001D40:
    lbz r0, 0x0(r24)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r24, r24, 0x1
    extsb r4, r0
    beq lbl_fn_8023EA78_00001DA0
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00001D7C
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_00001D94
lbl_fn_8023EA78_00001D7C:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_00001D94:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00001DA0
    li r22, 0x1
lbl_fn_8023EA78_00001DA0:
    cmpwi r22, 0x0
    beq lbl_fn_8023EA78_00001DAC
    li r25, 0x0
lbl_fn_8023EA78_00001DAC:
    addi r23, r23, 0x1
lbl_fn_8023EA78_00001DB0:
    cmpw r23, r28
    blt lbl_fn_8023EA78_00001D40
lbl_fn_8023EA78_00001DB8:
    cmplwi r29, 0x10
    bne lbl_fn_8023EA78_00001E3C
    cmpwi r30, 0x0
    li r23, 0x0
    ble lbl_fn_8023EA78_00001E3C
    b lbl_fn_8023EA78_00001E34
lbl_fn_8023EA78_00001DD0:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023EA78_00001E24
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00001E00
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_00001E18
lbl_fn_8023EA78_00001E00:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_00001E18:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00001E24
    li r22, 0x1
lbl_fn_8023EA78_00001E24:
    cmpwi r22, 0x0
    beq lbl_fn_8023EA78_00001E30
    li r25, 0x0
lbl_fn_8023EA78_00001E30:
    addi r23, r23, 0x1
lbl_fn_8023EA78_00001E34:
    cmpw r23, r30
    blt lbl_fn_8023EA78_00001DD0
lbl_fn_8023EA78_00001E3C:
    cmpwi r31, 0x0
    addi r23, r1, 0x28
    li r24, 0x0
    ble lbl_fn_8023EA78_00001EC8
    b lbl_fn_8023EA78_00001EC0
lbl_fn_8023EA78_00001E50:
    lbz r0, 0x0(r23)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r23, r23, 0x1
    extsb r4, r0
    beq lbl_fn_8023EA78_00001EB0
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00001E8C
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_00001EA4
lbl_fn_8023EA78_00001E8C:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_00001EA4:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00001EB0
    li r22, 0x1
lbl_fn_8023EA78_00001EB0:
    cmpwi r22, 0x0
    beq lbl_fn_8023EA78_00001EBC
    li r25, 0x0
lbl_fn_8023EA78_00001EBC:
    addi r24, r24, 0x1
lbl_fn_8023EA78_00001EC0:
    cmpw r24, r31
    blt lbl_fn_8023EA78_00001E50
lbl_fn_8023EA78_00001EC8:
    cmplwi r29, 0x20
    bne lbl_fn_8023EA78_00001F4C
    cmpwi r30, 0x0
    li r23, 0x0
    ble lbl_fn_8023EA78_00001F4C
    b lbl_fn_8023EA78_00001F44
lbl_fn_8023EA78_00001EE0:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023EA78_00001F34
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00001F10
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_00001F28
lbl_fn_8023EA78_00001F10:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_00001F28:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00001F34
    li r22, 0x1
lbl_fn_8023EA78_00001F34:
    cmpwi r22, 0x0
    beq lbl_fn_8023EA78_00001F40
    li r25, 0x0
lbl_fn_8023EA78_00001F40:
    addi r23, r23, 0x1
lbl_fn_8023EA78_00001F44:
    cmpw r23, r30
    blt lbl_fn_8023EA78_00001EE0
lbl_fn_8023EA78_00001F4C:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r25
    b lbl_fn_8023EA78_00002288
lbl_fn_8023EA78_00001F5C:
    lwz r25, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x10
    bl fn_800E1D5C
    lwz r28, lbl_808803C0
    cmpwi r28, 0x0
    bne lbl_fn_8023EA78_00001F88
    lwz r3, lbl_80880390
    addi r28, r3, 0x1
    stw r28, lbl_80880390
    stw r28, lbl_808803C0
lbl_fn_8023EA78_00001F88:
    lwz r3, 0x10(r1)
    lwz r0, 0x4(r3)
    cmplw r28, r0
    bge lbl_fn_8023EA78_00001FAC
    lwz r3, 0x0(r3)
    slwi r0, r28, 2
    lwzx r23, r3, r0
    cmpwi r23, 0x0
    bne lbl_fn_8023EA78_00002008
lbl_fn_8023EA78_00001FAC:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023EA78_00001FD4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023EA78_00001FD4:
    lwz r5, lbl_808803C0
    lwz r3, 0x10(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023EA78_00001FF4
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023EA78_00001FF4:
    bl fn_806920C0
    lwz r3, 0x10(r1)
    slwi r0, r28, 2
    lwz r3, 0x0(r3)
    lwzx r23, r3, r0
lbl_fn_8023EA78_00002008:
    addic. r0, r1, 0x10
    beq lbl_fn_8023EA78_00002020
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023EA78_00002020
    bl fn_806952C4
lbl_fn_8023EA78_00002020:
    mr r3, r26
    mr r6, r31
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x48
    li r9, 0x0
    bl fn_80242A8C
    lwz r0, 0x2c(r26)
    mr r29, r3
    li r28, 0x0
    cmpw r0, r3
    ble lbl_fn_8023EA78_00002054
    subf r28, r3, r0
lbl_fn_8023EA78_00002054:
    lhz r0, 0x30(r26)
    andi. r23, r0, 0xb0
    cmplwi r23, 0x20
    beq lbl_fn_8023EA78_000020E8
    cmplwi r23, 0x10
    beq lbl_fn_8023EA78_000020E8
    cmpwi r28, 0x0
    li r24, 0x0
    ble lbl_fn_8023EA78_000020E8
    b lbl_fn_8023EA78_000020E0
lbl_fn_8023EA78_0000207C:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023EA78_000020D0
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023EA78_000020AC
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_000020C4
lbl_fn_8023EA78_000020AC:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_000020C4:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_000020D0
    li r22, 0x1
lbl_fn_8023EA78_000020D0:
    cmpwi r22, 0x0
    beq lbl_fn_8023EA78_000020DC
    li r25, 0x0
lbl_fn_8023EA78_000020DC:
    addi r24, r24, 0x1
lbl_fn_8023EA78_000020E0:
    cmpw r24, r28
    blt lbl_fn_8023EA78_0000207C
lbl_fn_8023EA78_000020E8:
    cmplwi r23, 0x10
    bne lbl_fn_8023EA78_0000216C
    cmpwi r28, 0x0
    li r24, 0x0
    ble lbl_fn_8023EA78_0000216C
    b lbl_fn_8023EA78_00002164
lbl_fn_8023EA78_00002100:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023EA78_00002154
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00002130
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_00002148
lbl_fn_8023EA78_00002130:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_00002148:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00002154
    li r22, 0x1
lbl_fn_8023EA78_00002154:
    cmpwi r22, 0x0
    beq lbl_fn_8023EA78_00002160
    li r25, 0x0
lbl_fn_8023EA78_00002160:
    addi r24, r24, 0x1
lbl_fn_8023EA78_00002164:
    cmpw r24, r28
    blt lbl_fn_8023EA78_00002100
lbl_fn_8023EA78_0000216C:
    cmpwi r29, 0x0
    addi r24, r1, 0x48
    li r30, 0x0
    ble lbl_fn_8023EA78_000021F8
    b lbl_fn_8023EA78_000021F0
lbl_fn_8023EA78_00002180:
    lbz r0, 0x0(r24)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r24, r24, 0x1
    extsb r4, r0
    beq lbl_fn_8023EA78_000021E0
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023EA78_000021BC
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_000021D4
lbl_fn_8023EA78_000021BC:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_000021D4:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_000021E0
    li r22, 0x1
lbl_fn_8023EA78_000021E0:
    cmpwi r22, 0x0
    beq lbl_fn_8023EA78_000021EC
    li r25, 0x0
lbl_fn_8023EA78_000021EC:
    addi r30, r30, 0x1
lbl_fn_8023EA78_000021F0:
    cmpw r30, r29
    blt lbl_fn_8023EA78_00002180
lbl_fn_8023EA78_000021F8:
    cmplwi r23, 0x20
    bne lbl_fn_8023EA78_0000227C
    cmpwi r28, 0x0
    li r23, 0x0
    ble lbl_fn_8023EA78_0000227C
    b lbl_fn_8023EA78_00002274
lbl_fn_8023EA78_00002210:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023EA78_00002264
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023EA78_00002240
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023EA78_00002258
lbl_fn_8023EA78_00002240:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023EA78_00002258:
    cmpwi r3, -0x1
    bne lbl_fn_8023EA78_00002264
    li r22, 0x1
lbl_fn_8023EA78_00002264:
    cmpwi r22, 0x0
    beq lbl_fn_8023EA78_00002270
    li r25, 0x0
lbl_fn_8023EA78_00002270:
    addi r23, r23, 0x1
lbl_fn_8023EA78_00002274:
    cmpw r23, r28
    blt lbl_fn_8023EA78_00002210
lbl_fn_8023EA78_0000227C:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r25
lbl_fn_8023EA78_00002288:
    lmw r22, 0xa8(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
