#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80084320(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807321F0[];
extern u8 lbl_80778610[];
extern u8 lbl_80778658[];
extern u8 lbl_80778730[];
extern u8 lbl_80778808[];

/* Small data declarations */

/* Function declarations */
void fn_8008826C(void);
void fn_80088724(void);
void fn_80088AF4(void);
void fn_80088FAC(void);

asm void fn_8008826C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, lbl_807321F0@ha
    stw r0, 0x44(r1)
    addi r8, r8, lbl_807321F0@l
    stfd f31, 0x38(r1)
    fmr f31, f3
    stfd f30, 0x30(r1)
    fmr f30, f2
    stfd f29, 0x28(r1)
    fmr f29, f1
    stmw r25, 0xc(r1)
    mr r28, r5
    mr r27, r3
    mr r25, r4
    mr r30, r7
    addi r5, r8, 0x23
    mr r29, r6
    li r3, 0x64
    mr r6, r5
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8008826C_000000D0
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_8008826C_0000009C
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8008826C_0000009C:
    li r4, 0x0
    stw r4, 0x44(r31)
    lis r3, lbl_80778610@ha
    li r0, 0x1
    stw r27, 0x48(r31)
    addi r3, r3, lbl_80778610@l
    stw r0, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r3, 0x0(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
lbl_fn_8008826C_000000D0:
    cmpwi r31, 0x0
    beq lbl_fn_8008826C_00000498
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r26, r8, 0x24
    bl fn_80084320
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_8008826C_00000174
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r26, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_8008826C_0000013C
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r25, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8008826C_0000013C:
    li r0, 0x0
    stw r0, 0x44(r25)
    lis r3, lbl_80778730@ha
    stw r31, 0x48(r25)
    addi r3, r3, lbl_80778730@l
    stw r0, 0x4c(r25)
    stw r0, 0x50(r25)
    stw r0, 0x54(r25)
    stw r3, 0x0(r25)
    stw r28, 0x58(r25)
    stfs f29, 0x5c(r25)
    stfs f30, 0x60(r25)
    stfs f31, 0x64(r25)
    stb r0, 0x68(r25)
lbl_fn_8008826C_00000174:
    cmpwi r25, 0x0
    beq lbl_fn_8008826C_000001BC
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8008826C_000001B0
    stw r25, 0x58(r31)
    stw r25, 0x5c(r31)
    b lbl_fn_8008826C_000001BC
lbl_fn_8008826C_000001B0:
    lwz r3, 0x5c(r31)
    stw r25, 0x44(r3)
    stw r25, 0x5c(r31)
lbl_fn_8008826C_000001BC:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x26
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8008826C_0000025C
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_8008826C_00000220
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8008826C_00000220:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0x4
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_8008826C_0000025C:
    cmpwi r26, 0x0
    beq lbl_fn_8008826C_000002A4
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8008826C_00000298
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_8008826C_000002A4
lbl_fn_8008826C_00000298:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_8008826C_000002A4:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x28
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8008826C_00000344
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_8008826C_00000308
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8008826C_00000308:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0x8
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_8008826C_00000344:
    cmpwi r26, 0x0
    beq lbl_fn_8008826C_0000038C
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8008826C_00000380
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_8008826C_0000038C
lbl_fn_8008826C_00000380:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_8008826C_0000038C:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x2a
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8008826C_0000042C
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_8008826C_000003F0
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8008826C_000003F0:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0xc
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_8008826C_0000042C:
    cmpwi r26, 0x0
    beq lbl_fn_8008826C_00000474
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8008826C_00000468
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_8008826C_00000474
lbl_fn_8008826C_00000468:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_8008826C_00000474:
    lwz r0, 0x58(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8008826C_0000048C
    stw r31, 0x58(r27)
    stw r31, 0x5c(r27)
    b lbl_fn_8008826C_00000498
lbl_fn_8008826C_0000048C:
    lwz r3, 0x5c(r27)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r27)
lbl_fn_8008826C_00000498:
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    lfd f29, 0x28(r1)
    lmw r25, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80088724(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, lbl_807321F0@ha
    stw r0, 0x44(r1)
    addi r8, r8, lbl_807321F0@l
    stfd f31, 0x38(r1)
    fmr f31, f3
    stfd f30, 0x30(r1)
    fmr f30, f2
    stfd f29, 0x28(r1)
    fmr f29, f1
    stmw r25, 0xc(r1)
    mr r28, r5
    mr r27, r3
    mr r25, r4
    mr r30, r7
    addi r5, r8, 0x23
    mr r29, r6
    li r3, 0x64
    mr r6, r5
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80088724_00000588
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088724_00000554
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088724_00000554:
    li r4, 0x0
    stw r4, 0x44(r31)
    lis r3, lbl_80778610@ha
    li r0, 0x1
    stw r27, 0x48(r31)
    addi r3, r3, lbl_80778610@l
    stw r0, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r3, 0x0(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
lbl_fn_80088724_00000588:
    cmpwi r31, 0x0
    beq lbl_fn_80088724_00000868
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r26, r8, 0x24
    bl fn_80084320
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80088724_0000062C
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r26, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088724_000005F4
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r25, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088724_000005F4:
    li r0, 0x0
    stw r0, 0x44(r25)
    lis r3, lbl_80778658@ha
    stw r31, 0x48(r25)
    addi r3, r3, lbl_80778658@l
    stw r0, 0x4c(r25)
    stw r0, 0x50(r25)
    stw r0, 0x54(r25)
    stw r3, 0x0(r25)
    stw r28, 0x58(r25)
    stfs f29, 0x5c(r25)
    stfs f30, 0x60(r25)
    stfs f31, 0x64(r25)
    stb r0, 0x68(r25)
lbl_fn_80088724_0000062C:
    cmpwi r25, 0x0
    beq lbl_fn_80088724_00000674
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088724_00000668
    stw r25, 0x58(r31)
    stw r25, 0x5c(r31)
    b lbl_fn_80088724_00000674
lbl_fn_80088724_00000668:
    lwz r3, 0x5c(r31)
    stw r25, 0x44(r3)
    stw r25, 0x5c(r31)
lbl_fn_80088724_00000674:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x26
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80088724_00000714
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088724_000006D8
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088724_000006D8:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778658@ha
    addi r0, r28, 0x4
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778658@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80088724_00000714:
    cmpwi r26, 0x0
    beq lbl_fn_80088724_0000075C
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088724_00000750
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80088724_0000075C
lbl_fn_80088724_00000750:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80088724_0000075C:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x28
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80088724_000007FC
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088724_000007C0
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088724_000007C0:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778658@ha
    addi r0, r28, 0x8
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778658@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80088724_000007FC:
    cmpwi r26, 0x0
    beq lbl_fn_80088724_00000844
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088724_00000838
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80088724_00000844
lbl_fn_80088724_00000838:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80088724_00000844:
    lwz r0, 0x58(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80088724_0000085C
    stw r31, 0x58(r27)
    stw r31, 0x5c(r27)
    b lbl_fn_80088724_00000868
lbl_fn_80088724_0000085C:
    lwz r3, 0x5c(r27)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r27)
lbl_fn_80088724_00000868:
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    lfd f29, 0x28(r1)
    lmw r25, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80088AF4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, lbl_807321F0@ha
    stw r0, 0x44(r1)
    addi r8, r8, lbl_807321F0@l
    stfd f31, 0x38(r1)
    fmr f31, f3
    stfd f30, 0x30(r1)
    fmr f30, f2
    stfd f29, 0x28(r1)
    fmr f29, f1
    stmw r25, 0xc(r1)
    mr r28, r5
    mr r27, r3
    mr r25, r4
    mr r30, r7
    addi r5, r8, 0x23
    mr r29, r6
    li r3, 0x64
    mr r6, r5
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80088AF4_00000958
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088AF4_00000924
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088AF4_00000924:
    li r4, 0x0
    stw r4, 0x44(r31)
    lis r3, lbl_80778610@ha
    li r0, 0x1
    stw r27, 0x48(r31)
    addi r3, r3, lbl_80778610@l
    stw r0, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r3, 0x0(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
lbl_fn_80088AF4_00000958:
    cmpwi r31, 0x0
    beq lbl_fn_80088AF4_00000D20
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r26, r8, 0x2c
    bl fn_80084320
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80088AF4_000009FC
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r26, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088AF4_000009C4
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r25, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088AF4_000009C4:
    li r0, 0x0
    stw r0, 0x44(r25)
    lis r3, lbl_80778730@ha
    stw r31, 0x48(r25)
    addi r3, r3, lbl_80778730@l
    stw r0, 0x4c(r25)
    stw r0, 0x50(r25)
    stw r0, 0x54(r25)
    stw r3, 0x0(r25)
    stw r28, 0x58(r25)
    stfs f29, 0x5c(r25)
    stfs f30, 0x60(r25)
    stfs f31, 0x64(r25)
    stb r0, 0x68(r25)
lbl_fn_80088AF4_000009FC:
    cmpwi r25, 0x0
    beq lbl_fn_80088AF4_00000A44
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088AF4_00000A38
    stw r25, 0x58(r31)
    stw r25, 0x5c(r31)
    b lbl_fn_80088AF4_00000A44
lbl_fn_80088AF4_00000A38:
    lwz r3, 0x5c(r31)
    stw r25, 0x44(r3)
    stw r25, 0x5c(r31)
lbl_fn_80088AF4_00000A44:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x2e
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80088AF4_00000AE4
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088AF4_00000AA8
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088AF4_00000AA8:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0x4
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80088AF4_00000AE4:
    cmpwi r26, 0x0
    beq lbl_fn_80088AF4_00000B2C
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088AF4_00000B20
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80088AF4_00000B2C
lbl_fn_80088AF4_00000B20:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80088AF4_00000B2C:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x30
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80088AF4_00000BCC
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088AF4_00000B90
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088AF4_00000B90:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0x8
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80088AF4_00000BCC:
    cmpwi r26, 0x0
    beq lbl_fn_80088AF4_00000C14
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088AF4_00000C08
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80088AF4_00000C14
lbl_fn_80088AF4_00000C08:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80088AF4_00000C14:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x32
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80088AF4_00000CB4
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088AF4_00000C78
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088AF4_00000C78:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0xc
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80088AF4_00000CB4:
    cmpwi r26, 0x0
    beq lbl_fn_80088AF4_00000CFC
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088AF4_00000CF0
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80088AF4_00000CFC
lbl_fn_80088AF4_00000CF0:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80088AF4_00000CFC:
    lwz r0, 0x58(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80088AF4_00000D14
    stw r31, 0x58(r27)
    stw r31, 0x5c(r27)
    b lbl_fn_80088AF4_00000D20
lbl_fn_80088AF4_00000D14:
    lwz r3, 0x5c(r27)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r27)
lbl_fn_80088AF4_00000D20:
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    lfd f29, 0x28(r1)
    lmw r25, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80088FAC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, lbl_807321F0@ha
    stw r0, 0x44(r1)
    addi r8, r8, lbl_807321F0@l
    stfd f31, 0x38(r1)
    fmr f31, f3
    stfd f30, 0x30(r1)
    fmr f30, f2
    stfd f29, 0x28(r1)
    fmr f29, f1
    stmw r25, 0xc(r1)
    mr r28, r5
    mr r27, r3
    mr r25, r4
    mr r30, r7
    addi r5, r8, 0x23
    mr r29, r6
    li r3, 0x64
    mr r6, r5
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80088FAC_00000E10
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088FAC_00000DDC
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088FAC_00000DDC:
    li r4, 0x0
    stw r4, 0x44(r31)
    lis r3, lbl_80778610@ha
    li r0, 0x1
    stw r27, 0x48(r31)
    addi r3, r3, lbl_80778610@l
    stw r0, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r3, 0x0(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
lbl_fn_80088FAC_00000E10:
    cmpwi r31, 0x0
    beq lbl_fn_80088FAC_000010F0
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r26, r8, 0x2c
    bl fn_80084320
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80088FAC_00000EB4
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r26, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088FAC_00000E7C
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r25, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088FAC_00000E7C:
    li r0, 0x0
    stw r0, 0x44(r25)
    lis r3, lbl_80778730@ha
    stw r31, 0x48(r25)
    addi r3, r3, lbl_80778730@l
    stw r0, 0x4c(r25)
    stw r0, 0x50(r25)
    stw r0, 0x54(r25)
    stw r3, 0x0(r25)
    stw r28, 0x58(r25)
    stfs f29, 0x5c(r25)
    stfs f30, 0x60(r25)
    stfs f31, 0x64(r25)
    stb r0, 0x68(r25)
lbl_fn_80088FAC_00000EB4:
    cmpwi r25, 0x0
    beq lbl_fn_80088FAC_00000EFC
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088FAC_00000EF0
    stw r25, 0x58(r31)
    stw r25, 0x5c(r31)
    b lbl_fn_80088FAC_00000EFC
lbl_fn_80088FAC_00000EF0:
    lwz r3, 0x5c(r31)
    stw r25, 0x44(r3)
    stw r25, 0x5c(r31)
lbl_fn_80088FAC_00000EFC:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x2e
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80088FAC_00000F9C
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088FAC_00000F60
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088FAC_00000F60:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0x4
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80088FAC_00000F9C:
    cmpwi r26, 0x0
    beq lbl_fn_80088FAC_00000FE4
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088FAC_00000FD8
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80088FAC_00000FE4
lbl_fn_80088FAC_00000FD8:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80088FAC_00000FE4:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x30
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80088FAC_00001084
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80088FAC_00001048
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80088FAC_00001048:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0x8
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80088FAC_00001084:
    cmpwi r26, 0x0
    beq lbl_fn_80088FAC_000010CC
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80088FAC_000010C0
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80088FAC_000010CC
lbl_fn_80088FAC_000010C0:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80088FAC_000010CC:
    lwz r0, 0x58(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80088FAC_000010E4
    stw r31, 0x58(r27)
    stw r31, 0x5c(r27)
    b lbl_fn_80088FAC_000010F0
lbl_fn_80088FAC_000010E4:
    lwz r3, 0x5c(r27)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r27)
lbl_fn_80088FAC_000010F0:
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    lfd f29, 0x28(r1)
    lmw r25, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
