#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80044E0C(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80097D7C(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_8011BEB8(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_8016E970(void);
extern void fn_8018B48C(void);
extern void fn_8018CAEC(void);
extern void fn_8018DAE4(void);
extern void fn_801A5E90(void);
extern void fn_801C3DCC(void);
extern void fn_801C9F6C(void);
extern void fn_80219E6C(void);
extern void fn_80370174(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_8077B1F4[];
extern u8 lbl_8077B200[];
extern u8 lbl_8077B20C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_80881964;
extern u32 lbl_80881968;
extern u32 lbl_8088196C;
extern u32 lbl_80881978;
extern u32 lbl_8088197C;
extern u32 lbl_808819B0;
extern u32 lbl_808819B8;
extern u32 lbl_808819C0;
extern u32 lbl_80881B04;

/* Function declarations */
void fn_80157C34(void);
void fn_8015802C(void);
void fn_801588A0(void);
void fn_80158BB4(void);
void fn_80158C9C(void);
void fn_80158CA4(void);
void fn_80158D58(void);
void fn_80158D60(void);
void fn_80158E14(void);
void fn_80158E1C(void);
void fn_80158EF0(void);
void fn_801591E8(void);

asm void fn_80157C34(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    li r6, 0x1
    stw r0, 0xb4(r1)
    li r0, 0x0
    stw r31, 0xac(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xa8(r1)
    mr r30, r5
    stw r29, 0xa4(r1)
    mr r29, r3
    stb r6, 0x59d(r3)
    stb r0, 0x59c(r3)
    stb r0, 0x59f(r3)
    beq lbl_fn_80157C34_00000054
    lwz r0, 0x638(r3)
    stw r0, 0x63c(r3)
    stw r4, 0x638(r3)
    b lbl_fn_80157C34_00000068
lbl_fn_80157C34_00000054:
    li r3, 0xc8
    bl fn_80219E6C
    lwz r0, 0x638(r29)
    stw r0, 0x63c(r29)
    stw r3, 0x638(r29)
lbl_fn_80157C34_00000068:
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80157C34_00000098
    lwz r12, 0x0(r3)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r6, 0x0
    lwz r12, 0x18(r12)
    mr r5, r4
    li r7, 0xc8
    mtctr r12
    bctrl
lbl_fn_80157C34_00000098:
    lfs f5, 0x8(r30)
    addi r3, r1, 0x38
    lfs f0, 0x530(r29)
    lfs f4, 0x0(r30)
    lfs f3, 0x528(r29)
    fsubs f5, f5, f0
    lfs f0, lbl_8088196C
    fsubs f3, f4, f3
    stfs f5, 0x40(r1)
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_805F9920
    lfs f0, lbl_808819B8
    fcmpo cr0, f1, f0
    ble lbl_fn_80157C34_000000E4
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_80157C34_00000130
lbl_fn_80157C34_000000E4:
    lfs f3, lbl_8088196C
    addi r3, r1, 0x48
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_80157C34_00000130:
    lis r5, lbl_80737A9C@ha
    li r3, 0x1c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80157C34_0000016C
    mr r4, r29
    addi r5, r1, 0x38
    bl fn_8018CAEC
    mr r30, r3
lbl_fn_80157C34_0000016C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80157C34_000001FC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80157C34_000001A4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x78(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
    b lbl_fn_80157C34_000001C0
lbl_fn_80157C34_000001A4:
    addi r3, r31, 0xa38
    lwz r5, 0xa38(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r0, 0x80(r1)
lbl_fn_80157C34_000001C0:
    lwz r5, 0x78(r1)
    addi r3, r1, 0x8
    lwz r4, 0x7c(r1)
    lwz r0, 0x80(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80157C34_000001FC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80157C34_000001FC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80157C34_000003B0
    cmpwi r0, 0x8
    beq lbl_fn_80157C34_00000214
    stw r0, 0x564(r29)
lbl_fn_80157C34_00000214:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80157C34_000003B0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80157C34_0000024C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x84(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    b lbl_fn_80157C34_00000268
lbl_fn_80157C34_0000024C:
    addi r3, r31, 0xa44
    lwz r5, 0xa44(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
lbl_fn_80157C34_00000268:
    lwz r5, 0x84(r1)
    addi r3, r1, 0x20
    lwz r4, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80157C34_000002A4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80157C34_000002A4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80157C34_00000380
    cmpwi r0, 0x8
    beq lbl_fn_80157C34_000002BC
    stw r0, 0x564(r29)
lbl_fn_80157C34_000002BC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80157C34_00000380
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80157C34_000002F4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x90(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x94(r1)
    stw r0, 0x98(r1)
    b lbl_fn_80157C34_00000310
lbl_fn_80157C34_000002F4:
    addi r3, r31, 0xa50
    lwz r5, 0xa50(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x90(r1)
    stw r4, 0x94(r1)
    stw r0, 0x98(r1)
lbl_fn_80157C34_00000310:
    lwz r5, 0x90(r1)
    addi r3, r1, 0x14
    lwz r4, 0x94(r1)
    lwz r0, 0x98(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80157C34_0000034C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80157C34_0000034C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80157C34_00000380
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80157C34_00000380:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80157C34_000003B0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80157C34_000003B0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80157C34_000003DC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80157C34_000003DC:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8015802C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xb4(r1)
    li r0, 0x0
    stw r31, 0xac(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    mr r29, r5
    stw r28, 0xa0(r1)
    mr r28, r3
    stb r0, 0x59d(r3)
    stb r0, 0x59c(r3)
    stb r0, 0x59f(r3)
    beq lbl_fn_8015802C_0000044C
    lwz r0, 0x638(r3)
    stw r0, 0x63c(r3)
    stw r4, 0x638(r3)
    b lbl_fn_8015802C_00000460
lbl_fn_8015802C_0000044C:
    li r3, 0xc8
    bl fn_80219E6C
    lwz r0, 0x638(r28)
    stw r0, 0x63c(r28)
    stw r3, 0x638(r28)
lbl_fn_8015802C_00000460:
    lwz r3, 0x648(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_00000490
    lwz r12, 0x0(r3)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r6, 0x0
    lwz r12, 0x18(r12)
    mr r5, r4
    li r7, 0xc8
    mtctr r12
    bctrl
lbl_fn_8015802C_00000490:
    lis r5, lbl_80737A9C@ha
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015802C_000004DC
    lfs f1, lbl_80881968
    mr r4, r29
    li r5, 0x46
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    bl fn_801C3DCC
    mr r30, r3
lbl_fn_8015802C_000004DC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015802C_0000056C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015802C_00000514
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_8015802C_00000530
lbl_fn_8015802C_00000514:
    addi r3, r31, 0xa5c
    lwz r5, 0xa5c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_8015802C_00000530:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_0000056C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_0000056C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015802C_00000720
    cmpwi r0, 0x8
    beq lbl_fn_8015802C_00000584
    stw r0, 0x564(r29)
lbl_fn_8015802C_00000584:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015802C_00000720
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015802C_000005BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_8015802C_000005D8
lbl_fn_8015802C_000005BC:
    addi r3, r31, 0xa68
    lwz r5, 0xa68(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_8015802C_000005D8:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x44
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_00000614
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_00000614:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015802C_000006F0
    cmpwi r0, 0x8
    beq lbl_fn_8015802C_0000062C
    stw r0, 0x564(r29)
lbl_fn_8015802C_0000062C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015802C_000006F0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015802C_00000664
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_8015802C_00000680
lbl_fn_8015802C_00000664:
    addi r3, r31, 0xa74
    lwz r5, 0xa74(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_8015802C_00000680:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x38
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_000006BC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_000006BC:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015802C_000006F0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_000006F0:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015802C_00000720
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_00000720:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015802C_0000074C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_0000074C:
    addi r3, r29, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8015802C_000008A0
    lwz r0, 0x12a4(r29)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r29)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8015802C_000007C8
    lwz r3, 0xc38(r29)
    cmpwi r3, 0x0
    ble lbl_fn_8015802C_000007C8
    lwz r0, 0xc3c(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8015802C_000007C8
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r29)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8015802C_000007C8:
    lwz r4, 0x48(r29)
    cmpwi r4, 0x0
    bne lbl_fn_8015802C_000007FC
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8015802C_000007FC
    lwz r3, 0x5c(r29)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8015802C_000007FC
    li r0, 0x1
    b lbl_fn_8015802C_0000081C
lbl_fn_8015802C_000007FC:
    cmpwi r4, 0x0
    bne lbl_fn_8015802C_00000818
    lwz r0, 0x12a8(r29)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8015802C_00000818
    li r0, 0x1
    b lbl_fn_8015802C_0000081C
lbl_fn_8015802C_00000818:
    li r0, 0x0
lbl_fn_8015802C_0000081C:
    cmpwi r0, 0x0
    beq lbl_fn_8015802C_000008A0
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8015802C_00000880
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_0000084C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8015802C_0000084C:
    lwz r3, 0x64c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_00000860
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8015802C_00000860:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r29)
    mr r3, r29
    stw r0, 0x648(r29)
    stw r0, 0x64c(r29)
    bl fn_8014C228
    b lbl_fn_8015802C_000008A0
lbl_fn_8015802C_00000880:
    lwz r0, 0x674(r29)
    cmpwi r0, 0x0
    blt lbl_fn_8015802C_000008A0
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8015802C_000008A0:
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8015802C_000008B8
    lwz r0, 0x12a4(r29)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r29)
lbl_fn_8015802C_000008B8:
    lwz r7, 0xd1c(r29)
    cmpwi r7, 0x0
    beq lbl_fn_8015802C_00000960
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8015802C_00000900
lbl_fn_8015802C_000008E4:
    lwz r0, 0xfe8(r5)
    cmplw r0, r29
    bne lbl_fn_8015802C_000008F8
    li r0, 0x1
    b lbl_fn_8015802C_0000091C
lbl_fn_8015802C_000008F8:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8015802C_00000900:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8015802C_00000910
    slwi r0, r6, 1
lbl_fn_8015802C_00000910:
    cmpw r4, r0
    blt lbl_fn_8015802C_000008E4
    li r0, 0x0
lbl_fn_8015802C_0000091C:
    cmpwi r0, 0x0
    beq lbl_fn_8015802C_00000960
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8015802C_00000934:
    lwz r0, 0xfe8(r4)
    cmplw r0, r29
    bne lbl_fn_8015802C_00000954
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8015802C_00000960
lbl_fn_8015802C_00000954:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8015802C_00000934
lbl_fn_8015802C_00000960:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_00000980
    mr r4, r29
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r29
    bl fn_80105B3C
lbl_fn_8015802C_00000980:
    lwz r0, 0x12a8(r29)
    lis r3, lbl_80737A9C@ha
    lfs f0, lbl_8088196C
    addi r3, r3, lbl_80737A9C@l
    addi r5, r3, 0x24
    rlwinm r0, r0, 0, 24, 22
    li r8, 0x0
    stw r0, 0x12a8(r29)
    mr r6, r5
    li r3, 0x3c
    stfs f0, 0xfb8(r29)
    li r4, 0x0
    li r7, 0x0
    stfs f0, 0xfbc(r29)
    stw r8, 0x58c(r29)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015802C_000009DC
    mr r4, r28
    mr r5, r29
    bl fn_8018DAE4
    mr r30, r3
lbl_fn_8015802C_000009DC:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8015802C_00000A6C
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8015802C_00000A14
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x74(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_8015802C_00000A30
lbl_fn_8015802C_00000A14:
    addi r3, r31, 0xa80
    lwz r5, 0xa80(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
lbl_fn_8015802C_00000A30:
    lwz r5, 0x74(r1)
    addi r3, r1, 0x8
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_00000A6C
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_00000A6C:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8015802C_00000C20
    cmpwi r0, 0x8
    beq lbl_fn_8015802C_00000A84
    stw r0, 0x564(r28)
lbl_fn_8015802C_00000A84:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8015802C_00000C20
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8015802C_00000ABC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x80(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
    b lbl_fn_8015802C_00000AD8
lbl_fn_8015802C_00000ABC:
    addi r3, r31, 0xa8c
    lwz r5, 0xa8c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_8015802C_00000AD8:
    lwz r5, 0x80(r1)
    addi r3, r1, 0x20
    lwz r4, 0x84(r1)
    lwz r0, 0x88(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_00000B14
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_00000B14:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8015802C_00000BF0
    cmpwi r0, 0x8
    beq lbl_fn_8015802C_00000B2C
    stw r0, 0x564(r28)
lbl_fn_8015802C_00000B2C:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8015802C_00000BF0
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8015802C_00000B64
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x8c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    b lbl_fn_8015802C_00000B80
lbl_fn_8015802C_00000B64:
    addi r3, r31, 0xa98
    lwz r5, 0xa98(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
lbl_fn_8015802C_00000B80:
    lwz r5, 0x8c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015802C_00000BBC
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_00000BBC:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8015802C_00000BF0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_00000BF0:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8015802C_00000C20
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_00000C20:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_8015802C_00000C4C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015802C_00000C4C:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_801588A0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r3
    stw r28, 0x50(r1)
    mr r28, r5
    beq lbl_fn_801588A0_00000CAC
    lwz r0, 0x638(r3)
    stw r0, 0x63c(r3)
    stw r4, 0x638(r3)
lbl_fn_801588A0_00000CAC:
    lis r5, lbl_80737A9C@ha
    li r3, 0x30
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801588A0_00000CF0
    lfs f1, lbl_80881B04
    mr r4, r29
    mr r5, r28
    li r6, 0x0
    bl fn_801A5E90
    mr r30, r3
lbl_fn_801588A0_00000CF0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801588A0_00000D80
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801588A0_00000D28
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801588A0_00000D44
lbl_fn_801588A0_00000D28:
    addi r3, r31, 0xaa4
    lwz r5, 0xaa4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801588A0_00000D44:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801588A0_00000D80
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801588A0_00000D80:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801588A0_00000F34
    cmpwi r0, 0x8
    beq lbl_fn_801588A0_00000D98
    stw r0, 0x564(r29)
lbl_fn_801588A0_00000D98:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801588A0_00000F34
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801588A0_00000DD0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801588A0_00000DEC
lbl_fn_801588A0_00000DD0:
    addi r3, r31, 0xab0
    lwz r5, 0xab0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801588A0_00000DEC:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801588A0_00000E28
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801588A0_00000E28:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801588A0_00000F04
    cmpwi r0, 0x8
    beq lbl_fn_801588A0_00000E40
    stw r0, 0x564(r29)
lbl_fn_801588A0_00000E40:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801588A0_00000F04
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801588A0_00000E78
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801588A0_00000E94
lbl_fn_801588A0_00000E78:
    addi r3, r31, 0xabc
    lwz r5, 0xabc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801588A0_00000E94:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801588A0_00000ED0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801588A0_00000ED0:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801588A0_00000F04
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801588A0_00000F04:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801588A0_00000F34
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801588A0_00000F34:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801588A0_00000F60
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801588A0_00000F60:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80158BB4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80158BB4_0000104C
    lwz r4, 0x560(r3)
    subi r0, r4, 0x4
    cmplwi r0, 0x6
    ble lbl_fn_80158BB4_00000FC4
    cmpwi r4, 0x8d
    beq lbl_fn_80158BB4_00000FC4
    cmpwi r4, 0xb
    beq lbl_fn_80158BB4_00001020
    b lbl_fn_80158BB4_0000104C
lbl_fn_80158BB4_00000FC4:
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x162
    bne lbl_fn_80158BB4_00000FFC
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80881978
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_80158BB4_00001050
lbl_fn_80158BB4_00000FFC:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_80158BB4_00001050
lbl_fn_80158BB4_00001020:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_808819C0
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_80158BB4_00001050
lbl_fn_80158BB4_0000104C:
    li r3, 0x1
lbl_fn_80158BB4_00001050:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80158C9C(void)
{
    nofralloc
    lfs f1, lbl_8088196C
    blr
}

asm void fn_80158CA4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80158CA4_000010B0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_80158CA4_000010CC
lbl_fn_80158CA4_000010B0:
    lis r5, lbl_8077B1F4@ha
    lwzu r4, lbl_8077B1F4@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_80158CA4_000010CC:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80158CA4_0000110C
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    b lbl_fn_80158CA4_00001110
lbl_fn_80158CA4_0000110C:
    li r3, 0x0
lbl_fn_80158CA4_00001110:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80158D58(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80158D60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80158D60_0000116C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_80158D60_00001188
lbl_fn_80158D60_0000116C:
    lis r5, lbl_8077B200@ha
    lwzu r4, lbl_8077B200@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_80158D60_00001188:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80158D60_000011C8
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_80158D60_000011CC
lbl_fn_80158D60_000011C8:
    li r3, 0x0
lbl_fn_80158D60_000011CC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80158E14(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80158E1C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0xf80(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80158E1C_00001230
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_80158E1C_0000124C
lbl_fn_80158E1C_00001230:
    lis r5, lbl_8077B20C@ha
    lwzu r4, lbl_8077B20C@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_80158E1C_0000124C:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80158E1C_00001290
    lwz r4, 0xf80(r31)
    mr r3, r30
    lwz r12, 0x0(r4)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    b lbl_fn_80158E1C_000012A4
lbl_fn_80158E1C_00001290:
    lfs f1, lbl_8088196C
    lfs f0, lbl_80881964
    stfs f1, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
lbl_fn_80158E1C_000012A4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80158EF0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r6, r5
    stw r30, 0x58(r1)
    addi r31, r31, lbl_8077A720@l
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0xc
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80158EF0_00001324
    mr r4, r29
    mr r5, r28
    bl fn_8018B48C
    mr r30, r3
lbl_fn_80158EF0_00001324:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80158EF0_000013B4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80158EF0_0000135C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80158EF0_00001378
lbl_fn_80158EF0_0000135C:
    addi r3, r31, 0xaf8
    lwz r5, 0xaf8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80158EF0_00001378:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80158EF0_000013B4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80158EF0_000013B4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80158EF0_00001568
    cmpwi r0, 0x8
    beq lbl_fn_80158EF0_000013CC
    stw r0, 0x564(r29)
lbl_fn_80158EF0_000013CC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80158EF0_00001568
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80158EF0_00001404
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80158EF0_00001420
lbl_fn_80158EF0_00001404:
    addi r3, r31, 0xb04
    lwz r5, 0xb04(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80158EF0_00001420:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80158EF0_0000145C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80158EF0_0000145C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80158EF0_00001538
    cmpwi r0, 0x8
    beq lbl_fn_80158EF0_00001474
    stw r0, 0x564(r29)
lbl_fn_80158EF0_00001474:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80158EF0_00001538
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80158EF0_000014AC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80158EF0_000014C8
lbl_fn_80158EF0_000014AC:
    addi r3, r31, 0xb10
    lwz r5, 0xb10(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80158EF0_000014C8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80158EF0_00001504
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80158EF0_00001504:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80158EF0_00001538
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80158EF0_00001538:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80158EF0_00001568
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80158EF0_00001568:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80158EF0_00001594
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80158EF0_00001594:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801591E8(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    lis r7, 0x8000
    lfs f4, lbl_8088197C
    stw r0, 0xf4(r1)
    addi r5, r1, 0x5c
    lfs f3, 0x8(r4)
    addi r6, r1, 0x50
    stw r31, 0xec(r1)
    lis r31, lbl_8077A720@ha
    lfs f2, 0x4(r4)
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xe8(r1)
    li r30, 0x0
    lfs f1, 0x0(r4)
    addi r7, r7, 0x20
    stw r29, 0xe4(r1)
    mr r29, r3
    li r8, 0x0
    li r9, 0x0
    stw r30, 0x9c(r1)
    addi r4, r1, 0x68
    stw r30, 0xa0(r1)
    stw r30, 0xa4(r1)
    stw r30, 0xa8(r1)
    lfs f0, 0x52c(r3)
    lfs f6, 0x530(r3)
    fadds f5, f4, f0
    lfs f4, 0x528(r3)
    stfs f4, 0x5c(r1)
    lfs f0, lbl_808819B0
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    lfs f7, 0x620(r3)
    lwz r3, lbl_8087EE98
    fmuls f3, f3, f7
    fmuls f2, f2, f7
    fmuls f1, f1, f7
    stfs f3, 0x40(r1)
    fmuls f3, f3, f0
    fmuls f7, f2, f0
    stfs f2, 0x3c(r1)
    fmuls f0, f1, f0
    stfs f1, 0x38(r1)
    fadds f1, f6, f3
    fadds f2, f5, f7
    fadds f4, f4, f0
    stfs f0, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f3, 0x4c(r1)
    stfs f4, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f1, 0x58(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801591E8_0000196C
    lfs f2, 0x98(r1)
    lis r3, lbl_80737A9C@ha
    lfs f1, 0x94(r1)
    addi r3, r3, lbl_80737A9C@l
    lfs f0, 0x90(r1)
    fneg f2, f2
    fneg f1, f1
    addi r5, r3, 0x24
    fneg f0, f0
    stfs f2, 0x34(r1)
    mr r6, r5
    stfs f0, 0x2c(r1)
    li r3, 0x54
    li r4, 0x0
    stfs f1, 0x30(r1)
    li r7, 0x0
    stw r30, 0x13ac(r29)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801591E8_000016FC
    mr r4, r29
    addi r5, r1, 0x6c
    addi r6, r1, 0x2c
    bl fn_801C9F6C
    mr r30, r3
lbl_fn_801591E8_000016FC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801591E8_0000178C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801591E8_00001734
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xb8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xbc(r1)
    stw r0, 0xc0(r1)
    b lbl_fn_801591E8_00001750
lbl_fn_801591E8_00001734:
    addi r3, r31, 0xb1c
    lwz r5, 0xb1c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xb8(r1)
    stw r4, 0xbc(r1)
    stw r0, 0xc0(r1)
lbl_fn_801591E8_00001750:
    lwz r5, 0xb8(r1)
    addi r3, r1, 0x20
    lwz r4, 0xbc(r1)
    lwz r0, 0xc0(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801591E8_0000178C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801591E8_0000178C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801591E8_00001940
    cmpwi r0, 0x8
    beq lbl_fn_801591E8_000017A4
    stw r0, 0x564(r29)
lbl_fn_801591E8_000017A4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801591E8_00001940
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801591E8_000017DC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xc4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    b lbl_fn_801591E8_000017F8
lbl_fn_801591E8_000017DC:
    addi r3, r31, 0xb28
    lwz r5, 0xb28(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xc4(r1)
    stw r4, 0xc8(r1)
    stw r0, 0xcc(r1)
lbl_fn_801591E8_000017F8:
    lwz r5, 0xc4(r1)
    addi r3, r1, 0x8
    lwz r4, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801591E8_00001834
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801591E8_00001834:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801591E8_00001910
    cmpwi r0, 0x8
    beq lbl_fn_801591E8_0000184C
    stw r0, 0x564(r29)
lbl_fn_801591E8_0000184C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801591E8_00001910
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801591E8_00001884
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xd0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xd4(r1)
    stw r0, 0xd8(r1)
    b lbl_fn_801591E8_000018A0
lbl_fn_801591E8_00001884:
    addi r3, r31, 0xb34
    lwz r5, 0xb34(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xd0(r1)
    stw r4, 0xd4(r1)
    stw r0, 0xd8(r1)
lbl_fn_801591E8_000018A0:
    lwz r5, 0xd0(r1)
    addi r3, r1, 0x14
    lwz r4, 0xd4(r1)
    lwz r0, 0xd8(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801591E8_000018DC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801591E8_000018DC:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801591E8_00001910
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801591E8_00001910:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801591E8_00001940
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801591E8_00001940:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801591E8_0000196C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801591E8_0000196C:
    lwz r0, 0xf4(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
