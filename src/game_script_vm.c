#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __div2u(void);
extern void __mod2u(void);
extern void __register_global_object(void);
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000EB8C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004212C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800E0CF0(void);
extern void fn_800E0D54(void);
extern void fn_800E0D70(void);
extern void fn_800E0F84(void);
extern void fn_800E114C(void);
extern void fn_800E19AC(void);
extern void fn_800E1D5C(void);
extern void fn_800E2778(void);
extern void fn_801F3FF8(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_80237784(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80239AB8(void);
extern void fn_80239D1C(void);
extern void fn_8035B694(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);
extern void fn_806920C0(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80743140[];
extern u8 lbl_8074320C[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80783C60[];
extern u8 lbl_80783C98[];
extern u8 lbl_80783CA0[];
extern u8 lbl_80783D08[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C82E8[];
extern u8 lbl_807C82F4[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087DC20;
extern u32 lbl_8087DC24;
extern u32 lbl_8087F3C8;
extern u32 lbl_8087F3CC;
extern u32 lbl_8087F3CD;
extern u32 lbl_8087F3D0;
extern u32 lbl_8087F3D4;
extern u32 lbl_80880390;
extern u32 lbl_80883170;
extern u32 lbl_80883174;
extern u32 lbl_80883178;
extern u32 lbl_80883180;

/* Function declarations */
void fn_802428D8(void);
void fn_80242A8C(void);
void fn_80242FF4(void);
void fn_80243514(void);
void fn_8024359C(void);
void fn_802435A8(void);
void fn_802435B8(void);
void fn_80243650(void);
void fn_8024365C(void);
void fn_80243700(void);
void fn_8024372C(void);
void fn_80243734(void);
void fn_8024373C(void);
void fn_80243758(void);
void fn_802437B4(void);
void fn_802437C0(void);
void fn_80243814(void);
void fn_802438C4(void);
void fn_802438D4(void);
void fn_80243EF0(void);
void fn_80243EF8(void);
void fn_80243F24(void);
void fn_80243FAC(void);
void fn_8024405C(void);
void fn_802440F0(void);
void fn_802441CC(void);
void fn_80244228(void);

asm void fn_802428D8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r29, r4
    mr r30, r5
    mr r31, r6
    lwz r0, 0x0(r5)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r8, r0, 5
    beq lbl_fn_802428D8_0000003C
    lbz r0, 0x0(r5)
    clrlwi r0, r0, 25
    b lbl_fn_802428D8_00000040
lbl_fn_802428D8_0000003C:
    lwz r0, 0x4(r5)
lbl_fn_802428D8_00000040:
    cmpwi r0, 0x0
    beq lbl_fn_802428D8_000001A0
    lwz r0, 0x0(r6)
    srwi r7, r0, 31
    cntlzw r0, r7
    srwi. r4, r0, 5
    beq lbl_fn_802428D8_00000068
    lbz r0, 0x0(r6)
    clrlwi r0, r0, 25
    b lbl_fn_802428D8_0000006C
lbl_fn_802428D8_00000068:
    lwz r0, 0x4(r6)
lbl_fn_802428D8_0000006C:
    cmplwi r0, 0x1
    ble lbl_fn_802428D8_000001A0
    cmpwi r7, 0x0
    bne lbl_fn_802428D8_0000008C
    lbz r0, 0x0(r6)
    addi r10, r6, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_802428D8_00000094
lbl_fn_802428D8_0000008C:
    lwz r10, 0x8(r6)
    lwz r0, 0x4(r6)
lbl_fn_802428D8_00000094:
    cmpwi r0, 0x0
    beq lbl_fn_802428D8_000000D8
    add r9, r10, r0
    mr r7, r10
    subf r0, r10, r9
    extsb r3, r3
    mtctr r0
    cmplw r10, r9
    bge lbl_fn_802428D8_000000D8
lbl_fn_802428D8_000000B8:
    lbz r0, 0x0(r7)
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_802428D8_000000D0
    subf r27, r10, r7
    b lbl_fn_802428D8_000000DC
lbl_fn_802428D8_000000D0:
    addi r7, r7, 0x1
    bdnz lbl_fn_802428D8_000000B8
lbl_fn_802428D8_000000D8:
    li r27, -0x1
lbl_fn_802428D8_000000DC:
    addis r0, r27, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_802428D8_00000100
    cmpwi r4, 0x0
    beq lbl_fn_802428D8_000000FC
    lbz r0, 0x0(r6)
    clrlwi r27, r0, 25
    b lbl_fn_802428D8_00000100
lbl_fn_802428D8_000000FC:
    lwz r27, 0x4(r6)
lbl_fn_802428D8_00000100:
    cmpwi r8, 0x0
    li r26, 0x0
    beq lbl_fn_802428D8_00000114
    addi r3, r5, 0x1
    b lbl_fn_802428D8_00000118
lbl_fn_802428D8_00000114:
    lwz r3, 0x8(r5)
lbl_fn_802428D8_00000118:
    lbz r25, 0x0(r3)
    addi r28, r5, 0x1
    li r3, 0x0
    b lbl_fn_802428D8_00000198
lbl_fn_802428D8_00000128:
    addi r3, r3, 0x1
    cmplw r3, r25
    bne lbl_fn_802428D8_00000198
    mr r3, r31
    mr r4, r27
    extsb r7, r29
    li r5, 0x0
    li r6, 0x1
    bl fn_800E2778
    lwz r0, 0x0(r30)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_802428D8_0000016C
    lbz r0, 0x0(r30)
    clrlwi r0, r0, 25
    b lbl_fn_802428D8_00000170
lbl_fn_802428D8_0000016C:
    lwz r0, 0x4(r30)
lbl_fn_802428D8_00000170:
    addi r26, r26, 0x1
    cmplw r26, r0
    bge lbl_fn_802428D8_00000194
    cmpwi r3, 0x0
    beq lbl_fn_802428D8_0000018C
    mr r3, r28
    b lbl_fn_802428D8_00000190
lbl_fn_802428D8_0000018C:
    lwz r3, 0x8(r30)
lbl_fn_802428D8_00000190:
    lbzx r25, r3, r26
lbl_fn_802428D8_00000194:
    li r3, 0x0
lbl_fn_802428D8_00000198:
    subic. r27, r27, 0x1
    bne lbl_fn_802428D8_00000128
lbl_fn_802428D8_000001A0:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80242A8C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r14, 0x48(r1)
    mr r27, r3
    mr r16, r5
    mr r15, r6
    mr r17, r7
    mr r18, r8
    mr r26, r9
    mr r4, r27
    addi r3, r1, 0x18
    bl fn_800E1D5C
    or. r0, r15, r16
    bne lbl_fn_80242A8C_0000022C
    lwz r12, 0x0(r18)
    mr r3, r18
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addic. r0, r1, 0x18
    stb r3, 0x0(r17)
    beq lbl_fn_80242A8C_00000224
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80242A8C_00000224
    bl fn_806952C4
lbl_fn_80242A8C_00000224:
    li r3, 0x1
    b lbl_fn_80242A8C_00000708
lbl_fn_80242A8C_0000022C:
    lwz r14, lbl_8087F3C8
    cmpwi r14, 0x0
    bne lbl_fn_80242A8C_00000248
    lwz r3, lbl_80880390
    addi r14, r3, 0x1
    stw r14, lbl_80880390
    stw r14, lbl_8087F3C8
lbl_fn_80242A8C_00000248:
    lwz r3, 0x18(r1)
    lwz r0, 0x4(r3)
    cmplw r14, r0
    bge lbl_fn_80242A8C_0000026C
    lwz r3, 0x0(r3)
    slwi r0, r14, 2
    lwzx r25, r3, r0
    cmpwi r25, 0x0
    bne lbl_fn_80242A8C_00000464
lbl_fn_80242A8C_0000026C:
    lwz r19, 0x18(r1)
    li r3, 0x30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_80242A8C_0000042C
    li r6, 0x0
    stw r6, 0x4(r3)
    lis r5, lbl_80783C60@ha
    lis r4, lbl_80783CA0@ha
    addi r5, r5, lbl_80783C60@l
    stw r5, 0x0(r3)
    li r5, 0x2e
    li r0, 0x2c
    stb r5, 0x8(r3)
    addi r4, r4, lbl_80783CA0@l
    li r5, 0x0
    stb r0, 0x9(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    stw r6, 0x28(r3)
    stw r6, 0x2c(r3)
    addi r3, r1, 0x20
    bl fn_80243514
    lwz r0, 0x18(r20)
    srwi. r4, r0, 31
    bne lbl_fn_80242A8C_00000310
    lwz r3, 0x20(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80242A8C_00000310
    lwz r0, 0x24(r1)
    stw r3, 0x18(r20)
    stw r0, 0x1c(r20)
    lwz r0, 0x28(r1)
    stw r0, 0x20(r20)
    b lbl_fn_80242A8C_00000368
lbl_fn_80242A8C_00000310:
    cmpwi r4, 0x0
    beq lbl_fn_80242A8C_00000320
    lwz r5, 0x1c(r20)
    b lbl_fn_80242A8C_00000328
lbl_fn_80242A8C_00000320:
    lbz r0, 0x18(r20)
    clrlwi r5, r0, 25
lbl_fn_80242A8C_00000328:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80242A8C_00000344
    lbz r0, 0x20(r1)
    addi r6, r1, 0x21
    clrlwi r4, r0, 25
    b lbl_fn_80242A8C_0000034C
lbl_fn_80242A8C_00000344:
    lwz r6, 0x28(r1)
    lwz r4, 0x24(r1)
lbl_fn_80242A8C_0000034C:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r20, 0x18
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80242A8C_00000368:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80242A8C_0000037C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80242A8C_0000037C:
    lis r4, lbl_80783C98@ha
    addi r3, r1, 0x2c
    addi r4, r4, lbl_80783C98@l
    li r5, 0x0
    bl fn_80243514
    lwz r0, 0x24(r20)
    srwi. r4, r0, 31
    bne lbl_fn_80242A8C_000003C0
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80242A8C_000003C0
    lwz r0, 0x30(r1)
    stw r3, 0x24(r20)
    stw r0, 0x28(r20)
    lwz r0, 0x34(r1)
    stw r0, 0x2c(r20)
    b lbl_fn_80242A8C_00000418
lbl_fn_80242A8C_000003C0:
    cmpwi r4, 0x0
    beq lbl_fn_80242A8C_000003D0
    lwz r5, 0x28(r20)
    b lbl_fn_80242A8C_000003D8
lbl_fn_80242A8C_000003D0:
    lbz r0, 0x24(r20)
    clrlwi r5, r0, 25
lbl_fn_80242A8C_000003D8:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80242A8C_000003F4
    lbz r0, 0x2c(r1)
    addi r6, r1, 0x2d
    clrlwi r4, r0, 25
    b lbl_fn_80242A8C_000003FC
lbl_fn_80242A8C_000003F4:
    lwz r6, 0x34(r1)
    lwz r4, 0x30(r1)
lbl_fn_80242A8C_000003FC:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r3, r20, 0x24
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80242A8C_00000418:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80242A8C_0000042C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80242A8C_0000042C:
    lwz r5, lbl_8087F3C8
    cmpwi r5, 0x0
    bne lbl_fn_80242A8C_00000448
    lwz r3, lbl_80880390
    addi r5, r3, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_8087F3C8
lbl_fn_80242A8C_00000448:
    mr r3, r19
    mr r4, r20
    bl fn_806920C0
    lwz r3, 0x18(r1)
    slwi r0, r14, 2
    lwz r3, 0x0(r3)
    lwzx r25, r3, r0
lbl_fn_80242A8C_00000464:
    lhz r0, 0x30(r27)
    li r24, 0xa
    andi. r0, r0, 0x4a
    cmpwi r0, 0x40
    beq lbl_fn_80242A8C_00000484
    cmpwi r0, 0x8
    beq lbl_fn_80242A8C_0000048C
    b lbl_fn_80242A8C_00000490
lbl_fn_80242A8C_00000484:
    li r24, 0x8
    b lbl_fn_80242A8C_00000490
lbl_fn_80242A8C_0000048C:
    li r24, 0x10
lbl_fn_80242A8C_00000490:
    mr r23, r17
    mr r4, r25
    addi r3, r1, 0x38
    bl fn_802435A8
    lwz r0, 0x38(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r4, r0, 5
    beq lbl_fn_80242A8C_000004C0
    lbz r0, 0x38(r1)
    clrlwi r3, r0, 25
    b lbl_fn_80242A8C_000004C4
lbl_fn_80242A8C_000004C0:
    lwz r3, 0x3c(r1)
lbl_fn_80242A8C_000004C4:
    neg r0, r3
    li r21, 0x0
    or r0, r0, r3
    li r20, 0x0
    srwi. r22, r0, 31
    li r19, 0x0
    beq lbl_fn_80242A8C_00000504
    cmpwi r4, 0x0
    beq lbl_fn_80242A8C_000004F0
    addi r3, r1, 0x39
    b lbl_fn_80242A8C_000004F4
lbl_fn_80242A8C_000004F0:
    lwz r3, 0x40(r1)
lbl_fn_80242A8C_000004F4:
    lbz r19, 0x0(r3)
    cmpwi r19, 0x0
    bne lbl_fn_80242A8C_00000504
    li r22, 0x0
lbl_fn_80242A8C_00000504:
    cmpwi r26, 0x0
    beq lbl_fn_80242A8C_00000510
    li r22, 0x0
lbl_fn_80242A8C_00000510:
    cmpwi r22, 0x0
    beq lbl_fn_80242A8C_00000534
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r26, r3
    b lbl_fn_80242A8C_00000538
lbl_fn_80242A8C_00000534:
    li r26, 0x0
lbl_fn_80242A8C_00000538:
    lhz r0, 0x30(r27)
    addi r25, r1, 0x39
    li r30, 0x30
    li r31, 0x37
    rlwinm r3, r0, 0, 17, 17
    li r28, 0xa
    neg r0, r3
    li r29, 0x0
    or r0, r0, r3
    li r14, 0x57
    srwi r27, r0, 31
    b lbl_fn_80242A8C_00000698
lbl_fn_80242A8C_00000568:
    mr r3, r16
    mr r4, r15
    mr r6, r24
    li r5, 0x0
    bl __mod2u
    subfc r0, r28, r4
    subfe r0, r29, r3
    subfe r0, r4, r4
    neg. r0, r0
    beq lbl_fn_80242A8C_000005B0
    lwz r12, 0x0(r18)
    addc r0, r4, r30
    mr r3, r18
    lwz r12, 0x1c(r12)
    extsb r4, r0
    mtctr r12
    bctrl
    b lbl_fn_80242A8C_000005F4
lbl_fn_80242A8C_000005B0:
    cmpwi r27, 0x0
    beq lbl_fn_80242A8C_000005D8
    lwz r12, 0x0(r18)
    addc r0, r4, r31
    mr r3, r18
    lwz r12, 0x1c(r12)
    extsb r4, r0
    mtctr r12
    bctrl
    b lbl_fn_80242A8C_000005F4
lbl_fn_80242A8C_000005D8:
    lwz r12, 0x0(r18)
    addc r0, r4, r14
    mr r3, r18
    lwz r12, 0x1c(r12)
    extsb r4, r0
    mtctr r12
    bctrl
lbl_fn_80242A8C_000005F4:
    stb r3, 0x0(r23)
    mr r3, r16
    mr r4, r15
    mr r6, r24
    li r5, 0x0
    addi r23, r23, 0x1
    bl __div2u
    or. r0, r4, r3
    mr r15, r4
    mr r16, r3
    beq lbl_fn_80242A8C_00000698
    cmpwi r22, 0x0
    beq lbl_fn_80242A8C_00000698
    addi r20, r20, 0x1
    clrlwi r0, r20, 24
    cmplw r0, r19
    bne lbl_fn_80242A8C_00000698
    stb r26, 0x0(r23)
    addi r23, r23, 0x1
    lwz r0, 0x38(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_80242A8C_00000660
    lbz r0, 0x38(r1)
    clrlwi r0, r0, 25
    b lbl_fn_80242A8C_00000664
lbl_fn_80242A8C_00000660:
    lwz r0, 0x3c(r1)
lbl_fn_80242A8C_00000664:
    addi r21, r21, 0x1
    cmplw r21, r0
    bge lbl_fn_80242A8C_00000694
    cmpwi r3, 0x0
    beq lbl_fn_80242A8C_00000680
    mr r3, r25
    b lbl_fn_80242A8C_00000684
lbl_fn_80242A8C_00000680:
    lwz r3, 0x40(r1)
lbl_fn_80242A8C_00000684:
    lbzx r19, r3, r21
    cmpwi r19, 0x0
    bne lbl_fn_80242A8C_00000694
    li r22, 0x0
lbl_fn_80242A8C_00000694:
    li r20, 0x0
lbl_fn_80242A8C_00000698:
    or. r0, r15, r16
    bne lbl_fn_80242A8C_00000568
    cmplw r17, r23
    mr r4, r23
    mr r5, r17
    beq lbl_fn_80242A8C_000006D4
    b lbl_fn_80242A8C_000006C8
lbl_fn_80242A8C_000006B4:
    lbz r3, 0x0(r5)
    lbz r0, 0x0(r4)
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r3, 0x0(r4)
lbl_fn_80242A8C_000006C8:
    subi r4, r4, 0x1
    cmplw r5, r4
    blt lbl_fn_80242A8C_000006B4
lbl_fn_80242A8C_000006D4:
    lwz r0, 0x38(r1)
    subf r14, r17, r23
    srwi. r0, r0, 31
    beq lbl_fn_80242A8C_000006EC
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80242A8C_000006EC:
    addic. r0, r1, 0x18
    beq lbl_fn_80242A8C_00000704
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80242A8C_00000704
    bl fn_806952C4
lbl_fn_80242A8C_00000704:
    mr r3, r14
lbl_fn_80242A8C_00000708:
    lmw r14, 0x48(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80242FF4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r18, 0x48(r1)
    mr r18, r3
    mr r19, r4
    mr r20, r5
    mr r21, r6
    mr r22, r7
    mr r4, r18
    addi r3, r1, 0x18
    bl fn_800E1D5C
    cmpwi r19, 0x0
    bne lbl_fn_80242FF4_00000790
    lwz r12, 0x0(r21)
    mr r3, r21
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addic. r0, r1, 0x18
    stb r3, 0x0(r20)
    beq lbl_fn_80242FF4_00000788
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80242FF4_00000788
    bl fn_806952C4
lbl_fn_80242FF4_00000788:
    li r3, 0x1
    b lbl_fn_80242FF4_00000C28
lbl_fn_80242FF4_00000790:
    lwz r31, lbl_8087F3C8
    cmpwi r31, 0x0
    bne lbl_fn_80242FF4_000007AC
    lwz r3, lbl_80880390
    addi r31, r3, 0x1
    stw r31, lbl_80880390
    stw r31, lbl_8087F3C8
lbl_fn_80242FF4_000007AC:
    lwz r3, 0x18(r1)
    lwz r0, 0x4(r3)
    cmplw r31, r0
    bge lbl_fn_80242FF4_000007D0
    lwz r3, 0x0(r3)
    slwi r0, r31, 2
    lwzx r29, r3, r0
    cmpwi r29, 0x0
    bne lbl_fn_80242FF4_000009C8
lbl_fn_80242FF4_000007D0:
    lwz r30, 0x18(r1)
    li r3, 0x30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80242FF4_00000990
    li r6, 0x0
    stw r6, 0x4(r3)
    lis r5, lbl_80783C60@ha
    lis r4, lbl_80783CA0@ha
    addi r5, r5, lbl_80783C60@l
    stw r5, 0x0(r3)
    li r5, 0x2e
    li r0, 0x2c
    stb r5, 0x8(r3)
    addi r4, r4, lbl_80783CA0@l
    li r5, 0x0
    stb r0, 0x9(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    stw r6, 0x28(r3)
    stw r6, 0x2c(r3)
    addi r3, r1, 0x20
    bl fn_80243514
    lwz r0, 0x18(r29)
    srwi. r4, r0, 31
    bne lbl_fn_80242FF4_00000874
    lwz r3, 0x20(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80242FF4_00000874
    lwz r0, 0x24(r1)
    stw r3, 0x18(r29)
    stw r0, 0x1c(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x20(r29)
    b lbl_fn_80242FF4_000008CC
lbl_fn_80242FF4_00000874:
    cmpwi r4, 0x0
    beq lbl_fn_80242FF4_00000884
    lwz r5, 0x1c(r29)
    b lbl_fn_80242FF4_0000088C
lbl_fn_80242FF4_00000884:
    lbz r0, 0x18(r29)
    clrlwi r5, r0, 25
lbl_fn_80242FF4_0000088C:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80242FF4_000008A8
    lbz r0, 0x20(r1)
    addi r6, r1, 0x21
    clrlwi r4, r0, 25
    b lbl_fn_80242FF4_000008B0
lbl_fn_80242FF4_000008A8:
    lwz r6, 0x28(r1)
    lwz r4, 0x24(r1)
lbl_fn_80242FF4_000008B0:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r29, 0x18
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80242FF4_000008CC:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80242FF4_000008E0
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80242FF4_000008E0:
    lis r4, lbl_80783C98@ha
    addi r3, r1, 0x2c
    addi r4, r4, lbl_80783C98@l
    li r5, 0x0
    bl fn_80243514
    lwz r0, 0x24(r29)
    srwi. r4, r0, 31
    bne lbl_fn_80242FF4_00000924
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80242FF4_00000924
    lwz r0, 0x30(r1)
    stw r3, 0x24(r29)
    stw r0, 0x28(r29)
    lwz r0, 0x34(r1)
    stw r0, 0x2c(r29)
    b lbl_fn_80242FF4_0000097C
lbl_fn_80242FF4_00000924:
    cmpwi r4, 0x0
    beq lbl_fn_80242FF4_00000934
    lwz r5, 0x28(r29)
    b lbl_fn_80242FF4_0000093C
lbl_fn_80242FF4_00000934:
    lbz r0, 0x24(r29)
    clrlwi r5, r0, 25
lbl_fn_80242FF4_0000093C:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80242FF4_00000958
    lbz r0, 0x2c(r1)
    addi r6, r1, 0x2d
    clrlwi r4, r0, 25
    b lbl_fn_80242FF4_00000960
lbl_fn_80242FF4_00000958:
    lwz r6, 0x34(r1)
    lwz r4, 0x30(r1)
lbl_fn_80242FF4_00000960:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r3, r29, 0x24
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80242FF4_0000097C:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80242FF4_00000990
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80242FF4_00000990:
    lwz r5, lbl_8087F3C8
    cmpwi r5, 0x0
    bne lbl_fn_80242FF4_000009AC
    lwz r3, lbl_80880390
    addi r5, r3, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_8087F3C8
lbl_fn_80242FF4_000009AC:
    mr r3, r30
    mr r4, r29
    bl fn_806920C0
    lwz r3, 0x18(r1)
    slwi r0, r31, 2
    lwz r3, 0x0(r3)
    lwzx r29, r3, r0
lbl_fn_80242FF4_000009C8:
    lhz r0, 0x30(r18)
    li r28, 0xa
    andi. r0, r0, 0x4a
    cmpwi r0, 0x40
    beq lbl_fn_80242FF4_000009E8
    cmpwi r0, 0x8
    beq lbl_fn_80242FF4_000009F0
    b lbl_fn_80242FF4_000009F4
lbl_fn_80242FF4_000009E8:
    li r28, 0x8
    b lbl_fn_80242FF4_000009F4
lbl_fn_80242FF4_000009F0:
    li r28, 0x10
lbl_fn_80242FF4_000009F4:
    mr r27, r20
    mr r4, r29
    addi r3, r1, 0x38
    bl fn_802435A8
    lwz r0, 0x38(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r4, r0, 5
    beq lbl_fn_80242FF4_00000A24
    lbz r0, 0x38(r1)
    clrlwi r3, r0, 25
    b lbl_fn_80242FF4_00000A28
lbl_fn_80242FF4_00000A24:
    lwz r3, 0x3c(r1)
lbl_fn_80242FF4_00000A28:
    neg r0, r3
    li r25, 0x0
    or r0, r0, r3
    li r24, 0x0
    srwi. r26, r0, 31
    li r23, 0x0
    beq lbl_fn_80242FF4_00000A68
    cmpwi r4, 0x0
    beq lbl_fn_80242FF4_00000A54
    addi r3, r1, 0x39
    b lbl_fn_80242FF4_00000A58
lbl_fn_80242FF4_00000A54:
    lwz r3, 0x40(r1)
lbl_fn_80242FF4_00000A58:
    lbz r23, 0x0(r3)
    cmpwi r23, 0x0
    bne lbl_fn_80242FF4_00000A68
    li r26, 0x0
lbl_fn_80242FF4_00000A68:
    cmpwi r22, 0x0
    beq lbl_fn_80242FF4_00000A74
    li r26, 0x0
lbl_fn_80242FF4_00000A74:
    cmpwi r26, 0x0
    beq lbl_fn_80242FF4_00000A98
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r29, r3
    b lbl_fn_80242FF4_00000A9C
lbl_fn_80242FF4_00000A98:
    li r29, 0x0
lbl_fn_80242FF4_00000A9C:
    lhz r0, 0x30(r18)
    addi r30, r1, 0x39
    rlwinm r3, r0, 0, 17, 17
    neg r0, r3
    or r0, r0, r3
    srwi r31, r0, 31
    b lbl_fn_80242FF4_00000BB8
lbl_fn_80242FF4_00000AB8:
    divwu r0, r19, r28
    mullw r0, r0, r28
    subf r4, r0, r19
    cmplwi r4, 0xa
    bge lbl_fn_80242FF4_00000AEC
    lwz r12, 0x0(r21)
    addi r0, r4, 0x30
    mr r3, r21
    lwz r12, 0x1c(r12)
    extsb r4, r0
    mtctr r12
    bctrl
    b lbl_fn_80242FF4_00000B30
lbl_fn_80242FF4_00000AEC:
    cmpwi r31, 0x0
    beq lbl_fn_80242FF4_00000B14
    lwz r12, 0x0(r21)
    addi r0, r4, 0x37
    mr r3, r21
    lwz r12, 0x1c(r12)
    extsb r4, r0
    mtctr r12
    bctrl
    b lbl_fn_80242FF4_00000B30
lbl_fn_80242FF4_00000B14:
    lwz r12, 0x0(r21)
    addi r0, r4, 0x57
    mr r3, r21
    lwz r12, 0x1c(r12)
    extsb r4, r0
    mtctr r12
    bctrl
lbl_fn_80242FF4_00000B30:
    divwu. r19, r19, r28
    stb r3, 0x0(r27)
    addi r27, r27, 0x1
    beq lbl_fn_80242FF4_00000BB8
    cmpwi r26, 0x0
    beq lbl_fn_80242FF4_00000BB8
    addi r24, r24, 0x1
    clrlwi r0, r24, 24
    cmplw r0, r23
    bne lbl_fn_80242FF4_00000BB8
    stb r29, 0x0(r27)
    addi r27, r27, 0x1
    lwz r0, 0x38(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_80242FF4_00000B80
    lbz r0, 0x38(r1)
    clrlwi r0, r0, 25
    b lbl_fn_80242FF4_00000B84
lbl_fn_80242FF4_00000B80:
    lwz r0, 0x3c(r1)
lbl_fn_80242FF4_00000B84:
    addi r25, r25, 0x1
    cmplw r25, r0
    bge lbl_fn_80242FF4_00000BB4
    cmpwi r3, 0x0
    beq lbl_fn_80242FF4_00000BA0
    mr r3, r30
    b lbl_fn_80242FF4_00000BA4
lbl_fn_80242FF4_00000BA0:
    lwz r3, 0x40(r1)
lbl_fn_80242FF4_00000BA4:
    lbzx r23, r3, r25
    cmpwi r23, 0x0
    bne lbl_fn_80242FF4_00000BB4
    li r26, 0x0
lbl_fn_80242FF4_00000BB4:
    li r24, 0x0
lbl_fn_80242FF4_00000BB8:
    cmpwi r19, 0x0
    bne lbl_fn_80242FF4_00000AB8
    cmplw r20, r27
    mr r4, r27
    mr r5, r20
    beq lbl_fn_80242FF4_00000BF4
    b lbl_fn_80242FF4_00000BE8
lbl_fn_80242FF4_00000BD4:
    lbz r3, 0x0(r5)
    lbz r0, 0x0(r4)
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r3, 0x0(r4)
lbl_fn_80242FF4_00000BE8:
    subi r4, r4, 0x1
    cmplw r5, r4
    blt lbl_fn_80242FF4_00000BD4
lbl_fn_80242FF4_00000BF4:
    lwz r0, 0x38(r1)
    subf r18, r20, r27
    srwi. r0, r0, 31
    beq lbl_fn_80242FF4_00000C0C
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80242FF4_00000C0C:
    addic. r0, r1, 0x18
    beq lbl_fn_80242FF4_00000C24
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80242FF4_00000C24
    bl fn_806952C4
lbl_fn_80242FF4_00000C24:
    mr r3, r18
lbl_fn_80242FF4_00000C28:
    lmw r18, 0x48(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80243514(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r30
    bl strlen
    mr r31, r3
    mr r3, r29
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r29
    stb r0, 0x8(r1)
    mr r6, r30
    add r7, r30, r31
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8024359C(void)
{
    nofralloc
    lbz r0, 0x8(r3)
    extsb r3, r0
    blr
}

asm void fn_802435A8(void)
{
    nofralloc
    lwz r12, 0x0(r4)
    lwz r12, 0x14(r12)
    mtctr r12
    bctr
}

asm void fn_802435B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, 0xc(r4)
    srwi. r0, r5, 31
    bne lbl_fn_802435B8_00000D20
    lwz r0, 0x10(r4)
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    lwz r0, 0x14(r4)
    stw r0, 0x8(r3)
    b lbl_fn_802435B8_00000D60
lbl_fn_802435B8_00000D20:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r4, 0x10(r4)
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x14(r31)
    lwz r0, 0x10(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802435B8_00000D60:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80243650(void)
{
    nofralloc
    lbz r0, 0x9(r3)
    extsb r3, r0
    blr
}

asm void fn_8024365C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8024365C_00000E0C
    addic. r0, r3, 0x24
    beq lbl_fn_8024365C_00000DC4
    lwz r0, 0x24(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8024365C_00000DC4
    lwz r3, 0x2c(r3)
    bl dtor_80084684
lbl_fn_8024365C_00000DC4:
    addic. r0, r30, 0x18
    beq lbl_fn_8024365C_00000DE0
    lwz r0, 0x18(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8024365C_00000DE0
    lwz r3, 0x20(r30)
    bl dtor_80084684
lbl_fn_8024365C_00000DE0:
    addic. r0, r30, 0xc
    beq lbl_fn_8024365C_00000DFC
    lwz r0, 0xc(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8024365C_00000DFC
    lwz r3, 0x14(r30)
    bl dtor_80084684
lbl_fn_8024365C_00000DFC:
    cmpwi r31, 0x0
    ble lbl_fn_8024365C_00000E0C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8024365C_00000E0C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80243700(void)
{
    nofralloc
    lbz r0, lbl_8087F3CC
    extsb. r0, r0
    bne lbl_fn_80243700_00000E3C
    li r0, 0x1
    stb r0, lbl_8087F3CC
lbl_fn_80243700_00000E3C:
    lbz r0, lbl_8087F3CD
    extsb. r0, r0
    bnelr
    li r0, 0x1
    stb r0, lbl_8087F3CD
    blr
}

asm void fn_8024372C(void)
{
    nofralloc
    subi r3, r3, 0x48
    b fn_80239D1C
}

asm void fn_80243734(void)
{
    nofralloc
    subi r3, r3, 0x48
    b fn_80239AB8
}

asm void fn_8024373C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    blr
}

asm void fn_80243758(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80243758_00000EC0
    li r4, -0x1
    addi r3, r3, 0x48
    bl fn_802375C4
    cmpwi r31, 0x0
    ble lbl_fn_80243758_00000EC0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80243758_00000EC0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802437B4(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0x8(r3)
    blr
}

asm void fn_802437C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802437C0_00000F18
    lis r4, fn_80243758@ha
    mr r3, r0
    addi r4, r4, fn_80243758@l
    bl fn_80695A50
lbl_fn_802437C0_00000F18:
    li r0, 0x0
    stw r0, 0x4(r31)
    stw r0, 0x0(r31)
    stw r0, 0x8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80243814(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80243814_00000F70
    cmpwi r0, 0x2
    beq lbl_fn_80243814_00000F7C
    b lbl_fn_80243814_00000FCC
lbl_fn_80243814_00000F70:
    bl fn_802438D4
    li r0, 0x2
    stw r0, 0x8(r29)
lbl_fn_80243814_00000F7C:
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80243814_00000FB0
lbl_fn_80243814_00000F88:
    lwz r0, 0x4(r29)
    add r3, r0, r31
    addi r3, r3, 0x48
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_80243814_00000FA8
    li r3, 0x1
    b lbl_fn_80243814_00000FD0
lbl_fn_80243814_00000FA8:
    addi r31, r31, 0x54
    addi r30, r30, 0x1
lbl_fn_80243814_00000FB0:
    lwz r0, 0x0(r29)
    cmplw r30, r0
    blt lbl_fn_80243814_00000F88
    mr r3, r29
    bl fn_802440F0
    li r0, 0x3
    stw r0, 0x8(r29)
lbl_fn_80243814_00000FCC:
    li r3, 0x0
lbl_fn_80243814_00000FD0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802438C4(void)
{
    nofralloc
    mulli r0, r4, 0x54
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_802438D4(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    stfd f31, 0x288(r1)
    stmw r24, 0x268(r1)
    mr r24, r3
    addi r3, r1, 0x130
    bl fn_800E0CF0
    lis r28, lbl_80743140@ha
    li r27, 0x0
    stw r27, 0x10(r24)
    addi r29, r28, lbl_80743140@l
    li r26, 0x0
    li r25, 0x1
    li r31, -0x1
    b lbl_fn_802438D4_000015E4
lbl_fn_802438D4_0000103C:
    addi r3, r1, 0x130
    bl fn_80243EF0
    cmpwi r3, 0x1
    bne lbl_fn_802438D4_00001568
    addi r3, r1, 0x130
    bl fn_800E0F84
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_800E19AC
    cmpwi r26, 0x0
    beq lbl_fn_802438D4_00001074
    cmpwi r26, 0x1
    beq lbl_fn_802438D4_00001164
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_00001074:
    addi r3, r1, 0x20
    addi r4, r28, lbl_80743140@l
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_000010A4
    addi r3, r1, 0x130
    li r4, 0x0
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC12C
    mr r25, r3
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_000010A4:
    addi r3, r1, 0x20
    addi r4, r29, 0x10
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_000010E4
    addi r3, r1, 0x130
    li r4, 0x0
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC12C
    mr r4, r3
    mr r3, r24
    addi r6, r29, 0x10
    li r5, 0x7
    bl fn_80243FAC
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_000010E4:
    addi r3, r1, 0x20
    addi r4, r29, 0x1b
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_00001558
    addi r3, r1, 0x130
    li r4, 0x0
    bl fn_800E114C
    bl fn_8004212C
    mr r5, r3
    addi r3, r1, 0x30
    addi r4, r29, 0x22
    crclr 6
    bl sprintf
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    addi r3, r3, 0x48
    addi r4, r1, 0x30
    bl fn_80237654
    addi r3, r1, 0x130
    li r4, 0x1
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC12C
    mr r30, r3
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stw r30, 0x0(r3)
    li r26, 0x1
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_00001164:
    addi r3, r1, 0x20
    addi r4, r29, 0x25
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_00001200
    addi r3, r1, 0x130
    li r4, 0x0
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC12C
    mr r30, r3
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stw r30, 0x4(r3)
    addi r3, r1, 0x130
    li r4, 0x1
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC12C
    mr r30, r3
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stw r30, 0x8(r3)
    mr r3, r24
    mr r4, r27
    lwz r30, 0x10(r24)
    bl fn_802438C4
    lwz r0, 0x8(r3)
    cmpw r30, r0
    ble lbl_fn_802438D4_000011E8
    b lbl_fn_802438D4_000011F8
lbl_fn_802438D4_000011E8:
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    lwz r30, 0x8(r3)
lbl_fn_802438D4_000011F8:
    stw r30, 0x10(r24)
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_00001200:
    addi r3, r1, 0x20
    addi r4, r29, 0x2b
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_00001290
    addi r3, r1, 0x130
    li r4, 0x0
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0xc(r3)
    addi r3, r1, 0x130
    li r4, 0x1
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x10(r3)
    addi r3, r1, 0x130
    li r4, 0x2
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x14(r3)
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_00001290:
    addi r3, r1, 0x20
    addi r4, r29, 0x2f
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_00001334
    addi r3, r1, 0x130
    li r4, 0x0
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x18(r3)
    addi r3, r1, 0x130
    li r4, 0x1
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x1c(r3)
    addi r3, r1, 0x130
    li r4, 0x2
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x20(r3)
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    addi r3, r3, 0x18
    bl fn_80243EF8
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_00001334:
    addi r3, r1, 0x20
    addi r4, r29, 0x33
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_00001374
    addi r3, r1, 0x130
    li r4, 0x0
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x24(r3)
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_00001374:
    addi r3, r1, 0x20
    addi r4, r29, 0x37
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_0000142C
    addi r3, r1, 0x130
    li r4, 0x0
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x34(r3)
    addi r3, r1, 0x130
    li r4, 0x1
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x28(r3)
    addi r3, r1, 0x130
    li r4, 0x2
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x2c(r3)
    addi r3, r1, 0x130
    li r4, 0x3
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC288
    fmr f31, f1
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stfs f31, 0x30(r3)
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_0000142C:
    addi r3, r1, 0x20
    addi r4, r29, 0x3d
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_00001530
    addi r3, r1, 0x130
    li r4, 0x0
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC12C
    mr r30, r3
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stw r30, 0x38(r3)
    addi r3, r1, 0x130
    li r4, 0x1
    bl fn_800E114C
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_800E19AC
    addi r3, r1, 0x14
    bl fn_8004212C
    bl fn_800DC6B4
    mr r30, r3
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stw r30, 0x3c(r3)
    addi r3, r1, 0x130
    li r4, 0x3
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC12C
    mr r30, r3
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stw r30, 0x40(r3)
    addi r3, r1, 0x130
    li r4, 0x4
    bl fn_800E114C
    bl fn_8004212C
    bl fn_800DC12C
    mr r30, r3
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    cmpwi r25, 0x2
    stw r30, 0x44(r3)
    bge lbl_fn_802438D4_00001520
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802438D4_00001520
    mr r3, r24
    mr r4, r27
    bl fn_802438C4
    stw r31, 0x44(r3)
lbl_fn_802438D4_00001520:
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_00001530:
    addi r3, r1, 0x20
    addi r4, r29, 0x44
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_0000154C
    li r26, 0x2
    b lbl_fn_802438D4_00001558
lbl_fn_802438D4_0000154C:
    addi r3, r1, 0x20
    addi r4, r29, 0x4a
    bl fn_8000EB8C
lbl_fn_802438D4_00001558:
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_802438D4_000015DC
lbl_fn_802438D4_00001568:
    cmpwi r3, 0x2
    bne lbl_fn_802438D4_000015DC
    addi r3, r1, 0x130
    bl fn_800E0F84
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_800E19AC
    cmpwi r26, 0x1
    beq lbl_fn_802438D4_00001598
    cmpwi r26, 0x2
    beq lbl_fn_802438D4_000015B8
    b lbl_fn_802438D4_000015D0
lbl_fn_802438D4_00001598:
    addi r3, r1, 0x8
    addi r4, r29, 0x1b
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_000015D0
    li r26, 0x0
    addi r27, r27, 0x1
    b lbl_fn_802438D4_000015D0
lbl_fn_802438D4_000015B8:
    addi r3, r1, 0x8
    addi r4, r29, 0x44
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_802438D4_000015D0
    li r26, 0x1
lbl_fn_802438D4_000015D0:
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_802438D4_000015DC:
    addi r3, r1, 0x130
    bl fn_800E0D70
lbl_fn_802438D4_000015E4:
    addi r3, r1, 0x130
    bl fn_800E0D54
    cmpwi r3, 0x0
    bne lbl_fn_802438D4_0000103C
    addi r3, r1, 0x130
    li r4, -0x1
    bl fn_80243F24
    lfd f31, 0x288(r1)
    lmw r24, 0x268(r1)
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_80243EF0(void)
{
    nofralloc
    lwz r3, 0x124(r3)
    blr
}

asm void fn_80243EF8(void)
{
    nofralloc
    lfs f1, 0x0(r3)
    lfs f0, lbl_80883170
    lfs f2, 0x4(r3)
    fmuls f1, f0, f1
    lfs f3, 0x8(r3)
    fmuls f2, f0, f2
    fmuls f0, f0, f3
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_80243F24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80243F24_000016B8
    addic. r0, r3, 0x18
    beq lbl_fn_80243F24_0000168C
    lwz r0, 0x18(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80243F24_0000168C
    lwz r3, 0x20(r3)
    bl dtor_80084684
lbl_fn_80243F24_0000168C:
    addic. r0, r30, 0xc
    beq lbl_fn_80243F24_000016A8
    lwz r0, 0xc(r30)
    srwi. r0, r0, 31
    beq lbl_fn_80243F24_000016A8
    lwz r3, 0x14(r30)
    bl dtor_80084684
lbl_fn_80243F24_000016A8:
    cmpwi r31, 0x0
    ble lbl_fn_80243F24_000016B8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80243F24_000016B8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80243FAC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80243FAC_00001714
    lis r4, fn_80243758@ha
    mr r3, r0
    addi r4, r4, fn_80243758@l
    bl fn_80695A50
lbl_fn_80243FAC_00001714:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_80243FAC_00001760
    mulli r3, r30, 0x54
    mr r4, r31
    la r5, lbl_8087DC24
    la r6, lbl_8087DC20
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8024405C@ha
    lis r5, fn_80243758@ha
    mr r7, r30
    li r6, 0x54
    addi r4, r4, fn_8024405C@l
    addi r5, r5, fn_80243758@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_80243FAC_00001768
lbl_fn_80243FAC_00001760:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_80243FAC_00001768:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8024405C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f1, lbl_80883174
    li r5, 0x0
    stw r0, 0x14(r1)
    li r6, 0x1
    lfs f0, lbl_80883178
    li r4, 0x7d0
    stw r31, 0xc(r1)
    li r0, -0x1
    mr r31, r3
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stw r5, 0x38(r3)
    stw r5, 0x3c(r3)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    addi r3, r3, 0x48
    bl fn_80237518
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802440F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    stw r0, 0xc(r3)
    b lbl_fn_802440F0_000018B4
lbl_fn_802440F0_0000184C:
    lwz r0, 0x4(r28)
    add r31, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_fn_802440F0_000018AC
    lwz r4, 0x4(r31)
    addi r3, r31, 0x48
    lwz r0, 0x8(r31)
    subf r4, r4, r0
    srawi r0, r4, 31
    andc r4, r4, r0
    bl fn_80237784
    cmpwi r3, 0x0
    bne lbl_fn_802440F0_00001890
    li r0, 0x0
    stw r0, 0xc(r28)
    b lbl_fn_802440F0_000018C0
lbl_fn_802440F0_00001890:
    lwz r0, 0x4(r31)
    lwz r4, 0xc(r28)
    add r0, r3, r0
    cmpw r4, r0
    ble lbl_fn_802440F0_000018A8
    mr r0, r4
lbl_fn_802440F0_000018A8:
    stw r0, 0xc(r28)
lbl_fn_802440F0_000018AC:
    addi r30, r30, 0x54
    addi r29, r29, 0x1
lbl_fn_802440F0_000018B4:
    lwz r0, 0x0(r28)
    cmplw r29, r0
    blt lbl_fn_802440F0_0000184C
lbl_fn_802440F0_000018C0:
    lwz r3, 0xc(r28)
    lwz r0, 0x10(r28)
    cmpw r3, r0
    bge lbl_fn_802440F0_000018D4
    stw r3, 0x10(r28)
lbl_fn_802440F0_000018D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802441CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087F3D0
    stw r0, 0x14(r1)
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    lis r5, lbl_807C82E8@ha
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F3D0
    addi r5, r5, lbl_807C82E8@l
    bl __register_global_object
    la r3, lbl_8087F3D4
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    lis r5, lbl_807C82F4@ha
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F3D4
    addi r5, r5, lbl_807C82F4@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80244228(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r29, r5
    lwz r5, 0x20(r5)
    mr r28, r3
    bl fn_8035B694
    lis r3, lbl_80783D08@ha
    addi r30, r28, 0x14b0
    addi r3, r3, lbl_80783D08@l
    stw r3, 0x0(r28)
    mr r3, r30
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r31, 0x0
    addi r3, r3, lbl_8078FBB0@l
    li r0, 0x1
    stw r3, 0x0(r30)
    addi r3, r28, 0x1578
    stw r31, 0x14b8(r28)
    stw r31, 0x14c4(r28)
    stw r31, 0x14c8(r28)
    stw r31, 0x14cc(r28)
    stw r31, 0x14d0(r28)
    stw r31, 0x14d4(r28)
    stw r31, 0x14d8(r28)
    stw r31, 0x14dc(r28)
    stw r31, 0x14e0(r28)
    stw r31, 0x14e4(r28)
    stw r31, 0x14e8(r28)
    stw r31, 0x150c(r28)
    stw r31, 0x1510(r28)
    stw r31, 0x1514(r28)
    stw r31, 0x1518(r28)
    stw r31, 0x151c(r28)
    stw r0, 0x152c(r28)
    stw r31, 0x1530(r28)
    stw r31, 0x154c(r28)
    stw r31, 0x1550(r28)
    stw r31, 0x1554(r28)
    stw r31, 0x1570(r28)
    bl fn_802377B8
    addi r3, r28, 0x1584
    bl fn_802377B8
    addi r3, r28, 0x1590
    bl fn_802377B8
    addi r3, r28, 0x159c
    bl fn_802377B8
    lwz r0, 0x7ec(r28)
    lis r3, lbl_8074320C@ha
    lwz r7, 0x12a4(r28)
    addi r30, r3, lbl_8074320C@l
    ori r0, r0, 0x140
    lwz r3, 0x958(r28)
    oris r0, r0, 0x1
    lwz r4, 0x14c8(r28)
    ori r0, r0, 0xc005
    lfs f0, lbl_80883180
    ori r6, r3, 0x10
    oris r7, r7, 0x40
    oris r5, r0, 0x100
    lwz r8, 0x14d4(r28)
    subf r4, r4, r4
    stw r7, 0x12a4(r28)
    subf r0, r8, r8
    mr r3, r30
    stw r6, 0x958(r28)
    addi r27, r1, 0x38
    stw r5, 0x7ec(r28)
    stfs f0, 0x14c0(r28)
    stw r4, 0x14c8(r28)
    stw r0, 0x14d4(r28)
    stw r31, 0x15a8(r28)
    stw r31, 0x15ac(r28)
    stw r31, 0x15c0(r28)
    stw r31, 0x15c4(r28)
    stw r31, 0x14bc(r28)
    stw r31, 0x38(r1)
    stw r31, 0x3c(r1)
    stw r31, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r30
    add r7, r30, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r30, 0x18
    stw r31, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r31, 0x30(r1)
    mr r3, r27
    stw r31, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r27
    add r7, r27, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r29, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r31, 0x48(r1)
    li r4, 0x0
    stw r31, 0x4c(r1)
    stw r31, 0x50(r1)
    stw r31, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r29, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_80244228_00001B9C:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80244228_00001C34
    addi r4, r30, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80244228_00001C34
    mr r3, r26
    addi r4, r30, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80244228_00001C24
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80244228_00001BF0
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_80244228_00001BF4
lbl_fn_80244228_00001BF0:
    lwz r25, 0x30(r1)
lbl_fn_80244228_00001BF4:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80244228_00001C24:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80244228_00001B9C
lbl_fn_80244228_00001C34:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r28, 0x14b0
    srwi. r0, r0, 31
    bne lbl_fn_80244228_00001C5C
    addi r4, r1, 0x21
    b lbl_fn_80244228_00001C60
lbl_fn_80244228_00001C5C:
    lwz r4, 0x28(r1)
lbl_fn_80244228_00001C60:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r29, lbl_8074320C@ha
    addi r3, r28, 0x1578
    addi r29, r29, lbl_8074320C@l
    addi r4, r29, 0x35
    bl fn_8023780C
    addi r3, r28, 0x1584
    addi r4, r29, 0x50
    bl fn_8023780C
    addi r3, r28, 0x1590
    addi r4, r29, 0x66
    bl fn_8023780C
    addi r5, r29, 0x2b
    li r3, 0xc
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80244228_00001CC0
    bl fn_802377B8
lbl_fn_80244228_00001CC0:
    lwz r26, 0x121c(r28)
    cmpwi r26, 0x0
    stw r3, 0x121c(r28)
    beq lbl_fn_80244228_00001CF0
    mr r3, r26
    bl fn_8023781C
    addic. r3, r26, 0x4
    beq lbl_fn_80244228_00001CE8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80244228_00001CE8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_80244228_00001CF0:
    lis r29, lbl_8074320C@ha
    lwz r3, 0x121c(r28)
    addi r29, r29, lbl_8074320C@l
    addi r4, r29, 0x7c
    bl fn_8023780C
    mr r3, r28
    addi r4, r29, 0x91
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x15bc(r28)
    li r4, 0x1
    bl fn_800D246C
    li r3, 0x65
    bl fn_80219E6C
    stw r3, 0x1520(r28)
    li r3, 0x65
    bl fn_80219E6C
    stw r3, 0x1524(r28)
    li r3, 0x65
    bl fn_80219E6C
    stw r3, 0x1528(r28)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80244228_00001D58
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80244228_00001D58:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80244228_00001D6C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80244228_00001D6C:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80244228_00001D80
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80244228_00001D80:
    addi r11, r1, 0x6a0
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}
