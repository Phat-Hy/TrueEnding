#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801173A8(void);
extern void fn_801F3FF8(void);
extern void fn_801F4E8C(void);
extern void fn_801F64D0(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_8020EF04(void);
extern void fn_804439FC(void);
extern void fn_8044441C(void);
extern void fn_804444E8(void);
extern void fn_80444564(void);
extern void fn_8044D490(void);
extern void fn_8044D678(void);
extern void fn_8044D6AC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804A24C4(void);
extern void fn_804A251C(void);
extern void fn_804A2800(void);
extern void fn_804A39EC(void);
extern void fn_804A436C(void);
extern void fn_804A4494(void);
extern void fn_804A4930(void);
extern void fn_804A55FC(void);
extern void fn_804A5824(void);
extern void fn_8057F284(void);
extern void fn_8057F7AC(void);
extern void fn_8057F884(void);
extern void fn_8057F8FC(void);
extern void fn_8057FB24(void);
extern void fn_8057FF3C(void);
extern void fn_80580100(void);
extern void fn_80580268(void);
extern void fn_80580584(void);
extern void fn_80580694(void);
extern void fn_80580D84(void);
extern void fn_80580DE4(void);
extern void fn_8058100C(void);
extern void fn_80581574(void);
extern void fn_80581664(void);
extern void fn_80581820(void);
extern void fn_80581FDC(void);
extern void fn_80585D0C(void);
extern void fn_80585E84(void);
extern void fn_80585FD8(void);
extern void fn_805860F4(void);
extern void fn_80586220(void);
extern void fn_80586624(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80796840[];
extern u8 lbl_80761220[];
extern u8 lbl_807612E4[];
extern u8 lbl_807616DC[];
extern u8 lbl_80796808[];
extern u8 lbl_80796824[];
extern u8 lbl_80796864[];

/* Small data declarations */
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F578;
extern u32 lbl_8087F580;
extern u32 lbl_8087F9C8;
extern u32 lbl_808813D0;
extern u32 lbl_808880D4;
extern u32 lbl_808880E8;
extern u32 lbl_808880F0;
extern u32 lbl_808880F4;
extern u32 lbl_808880F8;

/* Function declarations */
void fn_80584178(void);
void fn_805846C4(void);
void fn_80584754(void);
void fn_805847F0(void);
void fn_8058480C(void);
void fn_80584830(void);
void fn_805848E4(void);
void fn_805849EC(void);
void fn_80584D7C(void);
void fn_80584DDC(void);
void fn_80584F48(void);
void fn_80584FD4(void);
void fn_80584FE8(void);
void fn_80585084(void);
void fn_8058530C(void);
void fn_8058537C(void);
void fn_805855CC(void);
void fn_80585694(void);
void fn_80585994(void);

asm void fn_80584178(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    cmplw r3, r4
    stw r0, 0x1c4(r1)
    stmw r14, 0x178(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_80584178_00000538
    lis r3, lbl_80796824@ha
    subi r0, r4, 0x5c
    stw r0, 0x16c(r1)
    li r31, 0x0
    addi r30, r3, lbl_80796824@l
    b lbl_fn_80584178_0000052C
lbl_fn_80584178_00000038:
    cmplw r27, r28
    mr r29, r27
    beq lbl_fn_80584178_00000354
    addi r14, r27, 0x5c
    b lbl_fn_80584178_0000034C
lbl_fn_80584178_0000004C:
    lwz r15, 0x54(r14)
    lwz r16, 0x54(r29)
    mr r3, r15
    bl fn_801173A8
    mr r17, r3
    mr r3, r16
    bl fn_801173A8
    cmpw r17, r3
    beq lbl_fn_80584178_00000088
    xor r0, r3, r17
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_80584178_0000033C
lbl_fn_80584178_00000088:
    lha r4, 0xbc(r16)
    lha r0, 0xbc(r15)
    cmpw r0, r4
    beq lbl_fn_80584178_000000B0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80584178_0000033C
lbl_fn_80584178_000000B0:
    cmpwi r0, 0x2
    beq lbl_fn_80584178_000000F0
    cmpwi r4, 0x2
    beq lbl_fn_80584178_000000F0
    cmpwi r0, 0x3
    beq lbl_fn_80584178_000000F0
    cmpwi r4, 0x3
    beq lbl_fn_80584178_000000F0
    lwz r0, 0x58(r14)
    lwz r4, 0x58(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80584178_0000033C
lbl_fn_80584178_000000F0:
    lwz r3, 0x48(r14)
    cmpwi r3, 0x0
    beq lbl_fn_80584178_00000110
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80584178_00000110
    li r0, 0x1
    b lbl_fn_80584178_0000033C
lbl_fn_80584178_00000110:
    cmpwi r3, 0x0
    bne lbl_fn_80584178_0000012C
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80584178_0000012C
    li r0, 0x0
    b lbl_fn_80584178_0000033C
lbl_fn_80584178_0000012C:
    lwz r3, 0x0(r14)
    li r18, 0x0
    li r19, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80584178_00000150
    lwz r3, 0x0(r14)
    bl fn_80206C50
    mr r18, r3
lbl_fn_80584178_00000150:
    lwz r3, 0x0(r29)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80584178_0000016C
    lwz r3, 0x0(r29)
    bl fn_80206C50
    mr r19, r3
lbl_fn_80584178_0000016C:
    cmpwi r18, 0x0
    beq lbl_fn_80584178_000001A4
    cmpwi r19, 0x0
    beq lbl_fn_80584178_000001A4
    lwz r4, 0x78(r19)
    lwz r0, 0x78(r18)
    cmpw r0, r4
    beq lbl_fn_80584178_000001A4
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80584178_0000033C
lbl_fn_80584178_000001A4:
    lwz r0, 0x48(r14)
    lwz r17, 0x8(r15)
    cmpwi r0, 0x0
    bne lbl_fn_80584178_000001E4
    cmpwi r18, 0x0
    beq lbl_fn_80584178_000001E4
    lwz r3, 0xb8(r18)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r17, 0x4(r3)
    cmpwi r17, 0x0
    beq lbl_fn_80584178_000001E0
    b lbl_fn_80584178_000001E4
lbl_fn_80584178_000001E0:
    la r17, lbl_808813D0
lbl_fn_80584178_000001E4:
    lwz r0, 0x48(r29)
    lwz r18, 0x8(r16)
    cmpwi r0, 0x0
    bne lbl_fn_80584178_00000224
    cmpwi r19, 0x0
    beq lbl_fn_80584178_00000224
    lwz r3, 0xb8(r19)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r18, 0x4(r3)
    cmpwi r18, 0x0
    beq lbl_fn_80584178_00000220
    b lbl_fn_80584178_00000224
lbl_fn_80584178_00000220:
    la r18, lbl_808813D0
lbl_fn_80584178_00000224:
    mr r5, r17
    addi r3, r1, 0xe8
    addi r4, r30, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0xe8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_80584178_00000250
    sth r31, 0x0(r3)
lbl_fn_80584178_00000250:
    mr r5, r18
    addi r3, r1, 0x68
    addi r4, r30, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x68
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_80584178_0000027C
    sth r31, 0x0(r3)
lbl_fn_80584178_0000027C:
    addi r3, r1, 0xe8
    addi r4, r1, 0x68
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80584178_0000032C
    lwz r0, 0x48(r14)
    cmpwi r0, 0x0
    bne lbl_fn_80584178_000002F8
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80584178_000002F8
    lwz r16, 0x8(r16)
    lwz r15, 0x8(r15)
    mr r4, r16
    mr r3, r15
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80584178_000002E4
    lwz r4, 0x4c(r14)
    lwz r0, 0x4c(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80584178_0000033C
lbl_fn_80584178_000002E4:
    mr r3, r15
    mr r4, r16
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_80584178_0000033C
lbl_fn_80584178_000002F8:
    mr r3, r17
    bl fn_80686A48
    mr r15, r3
    mr r3, r18
    bl fn_80686A48
    cmpw r15, r3
    beq lbl_fn_80584178_0000032C
    xor r0, r3, r15
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_80584178_0000033C
lbl_fn_80584178_0000032C:
    mr r3, r17
    mr r4, r18
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_80584178_0000033C:
    cmpwi r0, 0x0
    beq lbl_fn_80584178_00000348
    mr r29, r14
lbl_fn_80584178_00000348:
    addi r14, r14, 0x5c
lbl_fn_80584178_0000034C:
    cmplw r14, r28
    bne lbl_fn_80584178_0000004C
lbl_fn_80584178_00000354:
    cmplw r29, r27
    beq lbl_fn_80584178_00000528
    lwz r14, 0x0(r29)
    lwz r17, 0x8(r29)
    lwz r18, 0xc(r29)
    lwz r19, 0x10(r29)
    lwz r20, 0x14(r29)
    lwz r21, 0x18(r29)
    lwz r22, 0x1c(r29)
    lwz r23, 0x20(r29)
    lwz r24, 0x24(r29)
    lwz r25, 0x28(r29)
    lwz r26, 0x2c(r29)
    lwz r12, 0x30(r29)
    lwz r11, 0x34(r29)
    lwz r10, 0x38(r29)
    lwz r9, 0x3c(r29)
    lwz r8, 0x40(r29)
    lwz r7, 0x44(r29)
    lwz r6, 0x48(r29)
    lwz r5, 0x4c(r29)
    lwz r4, 0x50(r29)
    lwz r3, 0x54(r29)
    lwz r0, 0x58(r29)
    stw r14, 0x168(r1)
    lwz r14, 0x4(r29)
    lwz r15, 0x0(r27)
    stw r15, 0x0(r29)
    lwz r15, 0x4(r27)
    stw r15, 0x4(r29)
    lwz r15, 0xc(r27)
    lwz r16, 0x8(r27)
    stw r16, 0x8(r29)
    stw r15, 0xc(r29)
    lwz r15, 0x14(r27)
    lwz r16, 0x10(r27)
    stw r16, 0x10(r29)
    stw r15, 0x14(r29)
    lwz r15, 0x1c(r27)
    lwz r16, 0x18(r27)
    stw r16, 0x18(r29)
    stw r15, 0x1c(r29)
    lwz r15, 0x24(r27)
    lwz r16, 0x20(r27)
    stw r16, 0x20(r29)
    stw r15, 0x24(r29)
    lwz r15, 0x2c(r27)
    lwz r16, 0x28(r27)
    stw r16, 0x28(r29)
    stw r15, 0x2c(r29)
    lwz r15, 0x34(r27)
    lwz r16, 0x30(r27)
    stw r16, 0x30(r29)
    stw r15, 0x34(r29)
    lwz r15, 0x3c(r27)
    lwz r16, 0x38(r27)
    stw r16, 0x38(r29)
    stw r15, 0x3c(r29)
    lwz r16, 0x44(r27)
    lwz r15, 0x40(r27)
    stw r15, 0x40(r29)
    stw r16, 0x44(r29)
    lwz r15, 0x48(r27)
    stw r15, 0x48(r29)
    lwz r15, 0x4c(r27)
    stw r15, 0x4c(r29)
    lwz r15, 0x50(r27)
    stw r15, 0x50(r29)
    lwz r15, 0x54(r27)
    stw r15, 0x54(r29)
    lwz r15, 0x58(r27)
    stw r15, 0x58(r29)
    lwz r15, 0x168(r1)
    stw r15, 0x0(r27)
    stw r14, 0x4(r27)
    stw r17, 0x8(r27)
    stw r18, 0xc(r27)
    stw r19, 0x10(r27)
    stw r20, 0x14(r27)
    stw r21, 0x18(r27)
    stw r22, 0x1c(r27)
    stw r23, 0x20(r27)
    stw r24, 0x24(r27)
    stw r25, 0x28(r27)
    stw r26, 0x2c(r27)
    stw r12, 0x30(r27)
    stw r11, 0x34(r27)
    stw r10, 0x38(r27)
    stw r9, 0x3c(r27)
    stw r8, 0x40(r27)
    stw r17, 0x10(r1)
    stw r18, 0x14(r1)
    stw r19, 0x18(r1)
    stw r20, 0x1c(r1)
    stw r21, 0x20(r1)
    stw r22, 0x24(r1)
    stw r23, 0x28(r1)
    stw r24, 0x2c(r1)
    stw r25, 0x30(r1)
    stw r26, 0x34(r1)
    stw r12, 0x38(r1)
    stw r11, 0x3c(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r7, 0x44(r27)
    stw r6, 0x48(r27)
    stw r5, 0x4c(r27)
    stw r4, 0x50(r27)
    stw r3, 0x54(r27)
    stw r0, 0x58(r27)
lbl_fn_80584178_00000528:
    addi r27, r27, 0x5c
lbl_fn_80584178_0000052C:
    lwz r0, 0x16c(r1)
    cmplw r27, r0
    bne lbl_fn_80584178_00000038
lbl_fn_80584178_00000538:
    lmw r14, 0x178(r1)
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_805846C4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r9, lbl_807612E4@ha
    subf r6, r7, r6
    stw r0, 0x74(r1)
    addi r9, r9, lbl_807612E4@l
    addi r3, r1, 0x20
    stw r31, 0x6c(r1)
    mr r31, r8
    stw r30, 0x68(r1)
    mr r30, r5
    addi r5, r6, 0x1
    stw r29, 0x64(r1)
    mr r29, r4
    addi r4, r9, 0x27e
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    mr r4, r30
    mr r7, r31
    addi r6, r1, 0x8
    li r5, 0x0
    bl fn_804A55FC
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80584754(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lis r31, lbl_807612E4@ha
    li r0, 0x1
    stw r0, 0x6c(r3)
    addi r31, r31, lbl_807612E4@l
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    addi r3, r31, 0x29c
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, 0x68(r26)
    addi r4, r31, 0x2a9
    addi r5, r1, 0x8
    bl fn_801F6E78
    lwz r3, 0x68(r26)
    addi r4, r31, 0x2b1
    lfs f1, lbl_808880D4
    bl fn_801F6C80
    lwz r3, 0x68(r26)
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_804A4930
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805847F0(void)
{
    nofralloc
    addis r3, r3, 0x2
    mr r6, r4
    lwz r4, 0x5b08(r3)
    li r7, 0x3
    lwz r5, 0x5b10(r3)
    addi r3, r3, 0x5b04
    b fn_804A436C
}

asm void fn_8058480C(void)
{
    nofralloc
    addis r3, r3, 0x2
    mr r7, r4
    mr r4, r3
    lwz r5, 0x5b08(r3)
    lwz r6, 0x5b10(r3)
    li r8, 0x3
    addi r3, r3, 0x5b04
    addi r4, r4, 0x5b0c
    b fn_804A4494
}

asm void fn_80584830(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r3, lbl_8087F4F0
    lwz r0, 0x4(r4)
    lwz r3, 0x6000(r3)
    cmpw r3, r0
    bge lbl_fn_80584830_000006E8
    li r3, 0x1
    b lbl_fn_80584830_00000758
lbl_fn_80584830_000006E8:
    lwz r3, 0x0(r4)
    bl fn_80206B9C
    cmpwi r3, 0x0
    bne lbl_fn_80584830_00000708
    lwz r3, 0x0(r31)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80584830_00000724
lbl_fn_80584830_00000708:
    lwz r3, lbl_8087F4F0
    lwz r4, 0x0(r31)
    bl fn_80444564
    cmpwi r3, 0xa
    blt lbl_fn_80584830_00000740
    li r3, 0x2
    b lbl_fn_80584830_00000758
lbl_fn_80584830_00000724:
    lwz r3, lbl_8087F4F0
    lwz r4, 0x0(r31)
    bl fn_804444E8
    cmpwi r3, 0x63
    blt lbl_fn_80584830_00000740
    li r3, 0x2
    b lbl_fn_80584830_00000758
lbl_fn_80584830_00000740:
    lwz r0, 0x60(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80584830_00000754
    li r3, 0x5
    b lbl_fn_80584830_00000758
lbl_fn_80584830_00000754:
    li r3, 0x0
lbl_fn_80584830_00000758:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805848E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r29, lbl_8087F4F0
    lwz r3, 0x0(r4)
    bl fn_80206B9C
    cmpwi r3, 0x0
    bne lbl_fn_805848E4_000007B4
    lwz r3, 0x0(r28)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_805848E4_000007B8
lbl_fn_805848E4_000007B4:
    li r30, 0x1
lbl_fn_805848E4_000007B8:
    cmpwi r30, 0x0
    li r31, 0x63
    beq lbl_fn_805848E4_000007C8
    li r31, 0xa
lbl_fn_805848E4_000007C8:
    cmpwi r30, 0x0
    beq lbl_fn_805848E4_000007E0
    lwz r4, 0x0(r28)
    mr r3, r29
    bl fn_80444564
    b lbl_fn_805848E4_000007EC
lbl_fn_805848E4_000007E0:
    lwz r4, 0x0(r28)
    mr r3, r29
    bl fn_804444E8
lbl_fn_805848E4_000007EC:
    lwz r4, 0x58(r28)
    subf r5, r3, r31
    cmpwi r4, 0x1
    ble lbl_fn_805848E4_0000081C
    divw r0, r5, r4
    mullw r0, r0, r4
    subf. r0, r0, r5
    beq lbl_fn_805848E4_00000818
    divw r5, r5, r4
    addi r5, r5, 0x1
    b lbl_fn_805848E4_0000081C
lbl_fn_805848E4_00000818:
    divw r5, r5, r4
lbl_fn_805848E4_0000081C:
    lwz r3, 0x6000(r29)
    lwz r0, 0x4(r28)
    divw r3, r3, r0
    cmpw r5, r3
    mr r0, r3
    bge lbl_fn_805848E4_00000838
    mr r0, r5
lbl_fn_805848E4_00000838:
    cmpwi r0, 0x1
    bge lbl_fn_805848E4_00000848
    li r3, 0x1
    b lbl_fn_805848E4_00000854
lbl_fn_805848E4_00000848:
    cmpw r5, r3
    bge lbl_fn_805848E4_00000854
    mr r3, r5
lbl_fn_805848E4_00000854:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805849EC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r8, 0x0
    li r9, 0x1
    stw r0, 0x54(r1)
    li r0, 0x0
    li r10, 0x1
    stmw r24, 0x30(r1)
    mr r27, r5
    mr r26, r4
    mr r25, r3
    lwz r6, lbl_8087F4F0
    lwz r7, 0x4(r4)
    addis r6, r6, 0x1
    stw r0, -0x24f4(r6)
    mullw r28, r7, r5
    li r7, 0x0
    lwz r0, 0x58(r4)
    lwz r3, lbl_8087F4F0
    lwz r4, 0x0(r4)
    mullw r5, r0, r5
    lwz r6, 0x54(r26)
    bl fn_804439FC
    lwz r3, lbl_8087F4F0
    li r0, 0x1
    addis r3, r3, 0x1
    stw r0, -0x24f4(r3)
    lwz r29, 0x5c(r26)
    cmpwi r29, 0x0
    beq lbl_fn_805849EC_00000BC0
    addis r5, r25, 0x2
    lwz r30, 0x0(r26)
    lwz r3, 0x5b34(r5)
    lwz r4, 0x5b38(r5)
    cmplw r3, r4
    bge lbl_fn_805849EC_00000924
    addi r4, r3, 0x1
    lwz r3, 0x5b30(r5)
    subi r0, r4, 0x1
    stw r4, 0x5b34(r5)
    slwi r0, r0, 3
    stwux r30, r3, r0
    stw r29, 0x4(r3)
    b lbl_fn_805849EC_00000BC0
lbl_fn_805849EC_00000924:
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_805849EC_0000095C
    lis r4, lbl_807612E4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807612E4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x377
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805849EC_0000095C:
    addis r5, r25, 0x2
    li r6, 0x0
    addi r4, r5, 0x5b38
    stw r6, 0x14(r1)
    lis r3, 0x2000
    stw r6, 0x18(r1)
    subi r0, r3, 0x1
    stw r6, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r6, 0x24(r1)
    lwz r3, 0x5b34(r5)
    lwz r31, 0x5b38(r5)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_805849EC_000009C8
    lis r4, lbl_807612E4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807612E4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x377
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805849EC_000009C8:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_805849EC_00000A18
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_805849EC_00000A0C
    addi r3, r1, 0x10
lbl_fn_805849EC_00000A0C:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_805849EC_00000A5C
lbl_fn_805849EC_00000A18:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_805849EC_00000A54
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_805849EC_00000A48
    addi r3, r1, 0x10
lbl_fn_805849EC_00000A48:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_805849EC_00000A5C
lbl_fn_805849EC_00000A54:
    lis r3, 0x2000
    subi r31, r3, 0x1
lbl_fn_805849EC_00000A5C:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_805849EC_00000A90
    lis r4, lbl_807612E4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807612E4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x377
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805849EC_00000A90:
    slwi r3, r31, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_805849EC_00000AC4
    lis r3, __files@ha
    lis r4, lbl_80796808@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80796808@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805849EC_00000AC4:
    lwz r0, 0x18(r1)
    addis r5, r25, 0x2
    stw r24, 0x14(r1)
    slwi r3, r0, 3
    stw r31, 0x1c(r1)
    lwz r0, 0x5b34(r5)
    stw r0, 0x24(r1)
    slwi r0, r0, 3
    add r0, r24, r0
    stwux r30, r3, r0
    stw r29, 0x4(r3)
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    slwi r0, r0, 3
    lwz r4, 0x5b34(r5)
    lwz r7, 0x5b30(r5)
    add r5, r3, r0
    slwi r0, r4, 3
    add r6, r7, r0
    addi r0, r6, 0x7
    subf r0, r7, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_805849EC_00000B6C
lbl_fn_805849EC_00000B34:
    subic. r5, r5, 0x8
    subi r6, r6, 0x8
    beq lbl_fn_805849EC_00000B50
    lwz r0, 0x4(r6)
    lwz r3, 0x0(r6)
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
lbl_fn_805849EC_00000B50:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_805849EC_00000B34
lbl_fn_805849EC_00000B6C:
    addis r3, r25, 0x2
    li r4, 0x0
    stw r4, 0x5b34(r3)
    addic. r0, r1, 0x14
    lwz r5, 0x5b38(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x5b38(r3)
    stw r5, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r5, 0x5b30(r3)
    stw r0, 0x5b30(r3)
    stw r5, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x5b34(r3)
    stw r4, 0x18(r1)
    beq lbl_fn_805849EC_00000BC0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805849EC_00000BC0
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_805849EC_00000BC0:
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_8044D6AC
    lwz r3, lbl_8087F578
    lwz r4, 0x0(r26)
    bl fn_804A24C4
    cmpwi r3, 0x0
    beq lbl_fn_805849EC_00000BF0
    lwz r3, lbl_8087F578
    mr r5, r27
    lwz r4, 0x0(r26)
    bl fn_804A2800
lbl_fn_805849EC_00000BF0:
    lmw r24, 0x30(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80584D7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r3, 0x4(r4)
    lwz r0, 0x48(r4)
    mullw r31, r3, r5
    cmpwi r0, 0x0
    beq lbl_fn_80584D7C_00000C38
    lwz r3, lbl_8087F4F0
    lwz r4, 0x0(r4)
    bl fn_8044441C
    b lbl_fn_80584D7C_00000C44
lbl_fn_80584D7C_00000C38:
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4c(r4)
    bl fn_8044D490
lbl_fn_80584D7C_00000C44:
    lwz r3, lbl_8087F4F0
    mr r4, r31
    bl fn_8044D678
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80584DDC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    fmr f30, f1
    cmpwi r4, 0x0
    lis r0, 0x4330
    fmr f31, f3
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bne lbl_fn_80584DDC_00000CA4
    li r3, 0x0
    b lbl_fn_80584DDC_00000DB0
lbl_fn_80584DDC_00000CA4:
    lha r0, 0xbc(r4)
    cmpwi r0, 0x9
    bne lbl_fn_80584DDC_00000D28
    lwz r3, lbl_8087F578
    cmpwi r3, 0x0
    beq lbl_fn_80584DDC_00000CF4
    lwz r4, 0x4(r4)
    bl fn_804A251C
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_80761220@ha
    lfd f1, lbl_80761220@l(r3)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
    b lbl_fn_80584DDC_00000DB0
lbl_fn_80584DDC_00000CF4:
    lwz r0, 0xc8(r4)
    lis r3, lbl_80761220@ha
    lfd f2, lbl_80761220@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    b lbl_fn_80584DDC_00000DB0
lbl_fn_80584DDC_00000D28:
    cmpwi r5, 0x0
    bne lbl_fn_80584DDC_00000D78
    lwz r3, 0x4(r4)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_80584DDC_00000D70
    lwz r0, 0x124(r3)
    lis r3, lbl_80761220@ha
    lfd f1, lbl_80761220@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f30
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    b lbl_fn_80584DDC_00000DB0
lbl_fn_80584DDC_00000D70:
    li r3, 0xa
    b lbl_fn_80584DDC_00000DB0
lbl_fn_80584DDC_00000D78:
    lwz r0, 0xc8(r4)
    lis r3, lbl_80761220@ha
    lfd f4, lbl_80761220@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f0, lbl_808880E8
    lfd f3, 0x10(r1)
    fsubs f3, f3, f4
    fmuls f0, f0, f3
    fmuls f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
lbl_fn_80584DDC_00000DB0:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80584F48(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    cmpwi r4, 0x0
    bne lbl_fn_80584F48_00000DF8
    li r3, 0x0
    b lbl_fn_80584F48_00000E44
lbl_fn_80584F48_00000DF8:
    lwz r3, 0x4(r4)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_80584F48_00000E40
    lwz r4, 0x124(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80761220@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_80761220@l(r3)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    b lbl_fn_80584F48_00000E44
lbl_fn_80584F48_00000E40:
    li r3, 0x0
lbl_fn_80584F48_00000E44:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80584FD4(void)
{
    nofralloc
    lwz r0, 0xe4(r3)
    cmpwi r0, 0x5
    bnelr
    b fn_80581FDC
    blr
}

asm void fn_80584FE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, lbl_8087F9C8
    cmpwi r0, 0x0
    bne lbl_fn_80584FE8_00000EE8
    lis r5, lbl_807616DC@ha
    lis r3, 0x2
    addi r5, r5, lbl_807616DC@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x5c98
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80584FE8_00000EE4
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_80585084
lbl_fn_80584FE8_00000EE4:
    stw r3, lbl_8087F9C8
lbl_fn_80584FE8_00000EE8:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F9C8
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80585084(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r19, 0xc(r1)
    mr r29, r3
    mr r30, r5
    mr r31, r6
    bl fn_8057F284
    lis r4, lbl_80796864@ha
    cmpwi r30, 0x4
    addi r4, r4, lbl_80796864@l
    addis r3, r29, 0x2
    li r0, 0x0
    stw r4, 0x0(r29)
    stw r0, 0x5c88(r3)
    stw r0, 0x5c8c(r3)
    stw r0, 0x5c90(r3)
    stw r0, 0x5c94(r3)
    bne lbl_fn_80585084_00000F84
    lis r4, lbl_807616DC@ha
    mr r3, r29
    addi r4, r4, lbl_807616DC@l
    li r5, 0x0
    addi r4, r4, 0x1
    bl fn_801F3FF8
    addis r5, r29, 0x2
    li r4, 0x1
    stw r3, 0x5b68(r5)
    bl fn_800D246C
    b lbl_fn_80585084_00000FAC
lbl_fn_80585084_00000F84:
    lis r4, lbl_807616DC@ha
    mr r3, r29
    addi r4, r4, lbl_807616DC@l
    li r5, 0x0
    addi r4, r4, 0x26
    bl fn_801F3FF8
    addis r5, r29, 0x2
    li r4, 0x1
    stw r3, 0x5b68(r5)
    bl fn_800D246C
lbl_fn_80585084_00000FAC:
    lis r4, lbl_807616DC@ha
    mr r3, r29
    addi r26, r4, lbl_807616DC@l
    li r5, 0x0
    addi r4, r26, 0x4f
    bl fn_801F3FF8
    addis r5, r29, 0x2
    li r4, 0x1
    stw r3, 0x5b6c(r5)
    bl fn_800D246C
    li r23, 0x0
    li r21, 0x0
lbl_fn_80585084_00000FDC:
    addis r4, r21, 0x2
    mr r3, r29
    addi r22, r4, 0x5b70
    li r5, 0x0
    addi r4, r26, 0x7b
    bl fn_801F3FF8
    stwx r3, r29, r22
    li r4, 0x1
    bl fn_800D246C
    addi r23, r23, 0x1
    addi r21, r21, 0x4
    cmpwi r23, 0x7
    blt lbl_fn_80585084_00000FDC
    lis r3, lbl_807616DC@ha
    li r20, 0x0
    addi r3, r3, lbl_807616DC@l
    li r22, 0x0
    addi r25, r3, 0xa7
    addi r24, r3, 0xcc
    addi r23, r3, 0xf3
lbl_fn_80585084_0000102C:
    add r3, r22, r29
    li r19, 0x0
    addis r3, r3, 0x2
    li r21, 0x0
    addi r26, r3, 0x5b8c
    addi r27, r3, 0x5be0
    addi r28, r3, 0x5c34
lbl_fn_80585084_00001048:
    mr r3, r29
    mr r4, r25
    bl fn_801F64D0
    stw r3, 0x0(r26)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    mr r4, r24
    bl fn_801F64D0
    stw r3, 0x0(r27)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    mr r4, r23
    bl fn_801F64D0
    stw r3, 0x0(r28)
    li r4, 0x1
    bl fn_800D246C
    addi r19, r19, 0x1
    addi r28, r28, 0x4
    cmpwi r19, 0x3
    addi r27, r27, 0x4
    addi r26, r26, 0x4
    addi r21, r21, 0x4
    blt lbl_fn_80585084_00001048
    addi r20, r20, 0x1
    addi r22, r22, 0xc
    cmpwi r20, 0x7
    blt lbl_fn_80585084_0000102C
    cmpwi r30, 0x4
    bne lbl_fn_80585084_0000117C
    cmpwi r31, 0x1
    beq lbl_fn_80585084_00001100
    cmpwi r31, 0x2
    beq lbl_fn_80585084_00001110
    cmpwi r31, 0x3
    beq lbl_fn_80585084_00001120
    cmpwi r31, 0x4
    beq lbl_fn_80585084_00001130
    cmpwi r31, 0x5
    beq lbl_fn_80585084_00001140
    cmpwi r31, 0x62
    beq lbl_fn_80585084_00001150
    cmpwi r31, 0x63
    beq lbl_fn_80585084_00001160
    b lbl_fn_80585084_00001170
lbl_fn_80585084_00001100:
    addis r3, r29, 0x2
    li r0, 0x1
    stw r0, 0x5b00(r3)
    b lbl_fn_80585084_0000117C
lbl_fn_80585084_00001110:
    addis r3, r29, 0x2
    li r0, 0x2
    stw r0, 0x5b00(r3)
    b lbl_fn_80585084_0000117C
lbl_fn_80585084_00001120:
    addis r3, r29, 0x2
    li r0, 0x3
    stw r0, 0x5b00(r3)
    b lbl_fn_80585084_0000117C
lbl_fn_80585084_00001130:
    addis r3, r29, 0x2
    li r0, 0x0
    stw r0, 0x5b00(r3)
    b lbl_fn_80585084_0000117C
lbl_fn_80585084_00001140:
    addis r3, r29, 0x2
    li r0, 0x4
    stw r0, 0x5b00(r3)
    b lbl_fn_80585084_0000117C
lbl_fn_80585084_00001150:
    addis r3, r29, 0x2
    li r0, 0x62
    stw r0, 0x5b00(r3)
    b lbl_fn_80585084_0000117C
lbl_fn_80585084_00001160:
    addis r3, r29, 0x2
    li r0, 0x63
    stw r0, 0x5b00(r3)
    b lbl_fn_80585084_0000117C
lbl_fn_80585084_00001170:
    addis r3, r29, 0x2
    li r0, 0x6
    stw r0, 0x5b00(r3)
lbl_fn_80585084_0000117C:
    mr r3, r29
    lmw r19, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8058530C(void)
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
    beq lbl_fn_8058530C_000011E8
    lwz r0, lbl_8087F9C8
    cmpwi r0, 0x0
    beq lbl_fn_8058530C_000011CC
    li r0, 0x0
    stw r0, lbl_8087F9C8
lbl_fn_8058530C_000011CC:
    mr r3, r30
    li r4, 0x0
    bl fn_8057F7AC
    cmpwi r31, 0x0
    ble lbl_fn_8058530C_000011E8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8058530C_000011E8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8058537C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x20
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    bl _savegpr_26
    mr r26, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8058537C_00001428
    mr r3, r26
    bl fn_8057F884
    cmpwi r3, 0x0
    bne lbl_fn_8058537C_00001428
    mr r3, r26
    bl fn_8057F8FC
    addi r3, r26, 0x58
    bl fn_8047059C
    mr r27, r3
    addi r3, r26, 0x58
    bl fn_80470580
    lwz r12, 0x0(r26)
    mr r4, r3
    mr r3, r26
    mr r5, r27
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addis r3, r26, 0x2
    lfs f1, lbl_808880F0
    lwz r3, 0x5b68(r3)
    li r4, 0x1
    lfs f2, lbl_808880F4
    li r5, 0x0
    bl fn_804A39EC
    addis r5, r26, 0x2
    li r4, 0x0
    lwz r3, 0x5b68(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b6c(r5)
    bl fn_800D246C
    addis r4, r26, 0x2
    mr r27, r26
    lwz r3, 0x5b6c(r4)
    li r28, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5b6c(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8058537C_000012E8:
    addis r3, r27, 0x2
    li r4, 0x0
    lwz r3, 0x5b70(r3)
    bl fn_800D246C
    addis r4, r27, 0x2
    addi r28, r28, 0x1
    lwz r3, 0x5b70(r4)
    cmpwi r28, 0x7
    addi r27, r27, 0x4
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5b70(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_8058537C_000012E8
    lfs f30, lbl_808880F0
    mr r30, r26
    lfs f31, lbl_808880F8
    li r28, 0x0
    li r31, 0x1
lbl_fn_8058537C_00001340:
    mr r29, r30
    li r27, 0x0
lbl_fn_8058537C_00001348:
    addis r3, r29, 0x2
    li r4, 0x0
    lwz r3, 0x5b8c(r3)
    bl fn_800D246C
    addis r5, r29, 0x2
    li r4, 0x0
    lwz r3, 0x5b8c(r5)
    stb r31, 0x4d(r3)
    lwz r3, 0x5b8c(r5)
    stfs f30, 0x54(r3)
    lwz r3, 0x5b8c(r5)
    stfs f31, 0x50(r3)
    lwz r3, 0x5b8c(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5be0(r5)
    bl fn_800D246C
    addis r5, r29, 0x2
    li r4, 0x0
    lwz r3, 0x5be0(r5)
    stb r31, 0x4d(r3)
    lwz r3, 0x5be0(r5)
    stfs f30, 0x54(r3)
    lwz r3, 0x5be0(r5)
    stfs f31, 0x50(r3)
    lwz r3, 0x5be0(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5c34(r5)
    bl fn_800D246C
    addis r4, r29, 0x2
    addi r27, r27, 0x1
    lwz r3, 0x5c34(r4)
    cmpwi r27, 0x3
    addi r29, r29, 0x4
    stb r31, 0x4d(r3)
    lwz r3, 0x5c34(r4)
    stfs f30, 0x54(r3)
    lwz r3, 0x5c34(r4)
    stfs f31, 0x50(r3)
    lwz r3, 0x5c34(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_8058537C_00001348
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmpwi r28, 0x7
    blt lbl_fn_8058537C_00001340
    addis r3, r26, 0x2
    li r0, 0x1
    stw r0, 0x5c88(r3)
    li r3, 0x1
    b lbl_fn_8058537C_0000142C
lbl_fn_8058537C_00001428:
    li r3, 0x0
lbl_fn_8058537C_0000142C:
    addi r11, r1, 0x20
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805855CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xe4(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_805855CC_00001500
    lis r4, jumptable_80796840@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80796840@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_805855CC_00001500
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_fn_805855CC_00001500
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_fn_805855CC_00001500
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_805855CC_00001500
    bl fn_80585D0C
    b lbl_fn_805855CC_00001500
    bl fn_80585E84
    b lbl_fn_805855CC_00001500
    bl fn_8057FF3C
    b lbl_fn_805855CC_00001500
    bl fn_80585FD8
    b lbl_fn_805855CC_00001500
    bl fn_80580100
lbl_fn_805855CC_00001500:
    mr r3, r31
    bl fn_80580268
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80585694(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    bl fn_80580DE4
    addis r4, r31, 0x2
    lwz r3, 0x5b68(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b6c(r4)
    bl fn_80580D84
    mr r30, r31
    li r29, 0x0
lbl_fn_80585694_00001560:
    addis r3, r30, 0x2
    lwz r3, 0x5b70(r3)
    bl fn_80580D84
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x7
    blt lbl_fn_80585694_00001560
    li r0, 0x7
    mr r3, r31
    mtctr r0
lbl_fn_80585694_00001588:
    addis r5, r3, 0x2
    addi r3, r3, 0xc
    lwz r4, 0x5b8c(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5be0(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5c34(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5b90(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5be4(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5c38(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5b94(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5be8(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5c3c(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    bdnz lbl_fn_80585694_00001588
    lwz r3, 0xe4(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_80585694_0000175C
    cmpwi r3, 0x4
    beq lbl_fn_80585694_00001660
    cmpwi r3, 0x7
    beq lbl_fn_80585694_000016AC
    cmpwi r3, 0x5
    beq lbl_fn_80585694_00001750
    cmpwi r3, 0x8
    beq lbl_fn_80585694_00001768
    cmpwi r3, 0x6
    beq lbl_fn_80585694_000017F8
    b lbl_fn_80585694_00001800
lbl_fn_80585694_00001660:
    addis r6, r31, 0x2
    lis r4, lbl_807616DC@ha
    lwz r5, 0x5b68(r6)
    addi r4, r4, lbl_807616DC@l
    addi r3, r1, 0x8
    lwz r0, 0x38(r5)
    addi r4, r4, 0x11a
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x5c8c(r6)
    crclr 6
    bl sprintf
    addis r4, r31, 0x2
    lwz r3, lbl_8087F580
    lwz r4, 0x5b68(r4)
    addi r5, r1, 0x8
    li r6, 0x0
    bl fn_804A5824
    b lbl_fn_80585694_00001800
lbl_fn_80585694_000016AC:
    mr r3, r31
    bl fn_80586220
    lwz r0, 0xf8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80585694_00001700
    addis r3, r31, 0x2
    lwz r3, 0x5c90(r3)
    cmpw r3, r0
    bge lbl_fn_80585694_00001700
    mulli r0, r3, 0x64
    mr r3, r31
    add r30, r31, r0
    lwz r4, 0xfc(r30)
    bl fn_80586624
    lwz r4, 0xfc(r30)
    mr r3, r31
    bl fn_8058100C
    lwz r4, 0xfc(r30)
    mr r3, r31
    lwz r5, 0x150(r30)
    bl fn_80581574
lbl_fn_80585694_00001700:
    lwz r0, 0xf8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80585694_00001720
    lwz r3, 0xd8(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_80585694_00001800
lbl_fn_80585694_00001720:
    addis r5, r31, 0x2
    lwz r4, 0xa8(r31)
    lwz r7, 0x5c94(r5)
    mr r3, r31
    lwz r6, 0x5c90(r5)
    li r8, 0x0
    subf r0, r7, r6
    slwi r0, r0, 2
    add r5, r31, r0
    lwz r5, 0xac(r5)
    bl fn_805846C4
    b lbl_fn_80585694_00001800
lbl_fn_80585694_00001750:
    mr r3, r31
    bl fn_80580584
    b lbl_fn_80585694_00001800
lbl_fn_80585694_0000175C:
    mr r3, r31
    bl fn_805860F4
    b lbl_fn_80585694_00001800
lbl_fn_80585694_00001768:
    mr r3, r31
    bl fn_80586220
    lwz r0, 0xf8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80585694_000017B0
    addis r3, r31, 0x2
    lwz r3, 0x5c90(r3)
    cmpw r3, r0
    bge lbl_fn_80585694_000017B0
    mulli r0, r3, 0x64
    mr r3, r31
    add r30, r31, r0
    lwz r4, 0xfc(r30)
    bl fn_80586624
    lwz r4, 0xfc(r30)
    mr r3, r31
    lwz r5, 0x150(r30)
    bl fn_80581574
lbl_fn_80585694_000017B0:
    addis r5, r31, 0x2
    lwz r4, 0xa8(r31)
    lwz r7, 0x5c94(r5)
    mr r3, r31
    lwz r6, 0x5c90(r5)
    li r8, 0x1
    subf r0, r7, r6
    slwi r0, r0, 2
    add r5, r31, r0
    lwz r5, 0xac(r5)
    bl fn_805846C4
    addis r5, r31, 0x2
    mr r3, r31
    lwz r4, 0x5c94(r5)
    lwz r0, 0x5c90(r5)
    subf r4, r4, r0
    bl fn_80581664
    b lbl_fn_80585694_00001800
lbl_fn_80585694_000017F8:
    mr r3, r31
    bl fn_80580694
lbl_fn_80585694_00001800:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80585994(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x1
    addis r6, r3, 0x2
    stw r0, 0x24(r1)
    li r5, 0x1
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0xe4(r3)
    stw r5, 0x5b40(r6)
    stw r0, 0xe8(r3)
    stw r4, 0xe4(r3)
    beq lbl_fn_80585994_00001880
    cmpwi r4, 0x4
    beq lbl_fn_80585994_00001890
    cmpwi r4, 0x7
    beq lbl_fn_80585994_000018CC
    cmpwi r4, 0x5
    beq lbl_fn_80585994_000019BC
    cmpwi r4, 0x8
    beq lbl_fn_80585994_00001A58
    cmpwi r4, 0x6
    beq lbl_fn_80585994_00001A90
    b lbl_fn_80585994_00001AE0
lbl_fn_80585994_00001880:
    li r0, 0x0
    stw r0, 0x5b40(r6)
    bl fn_8057FB24
    b lbl_fn_80585994_00001AE0
lbl_fn_80585994_00001890:
    lwz r0, 0x4c(r3)
    li r3, 0x0
    lwz r4, 0x5c8c(r6)
    cmpwi r0, 0x4
    stw r4, 0x5b04(r6)
    stw r3, 0x5b0c(r6)
    bne lbl_fn_80585994_000018BC
    li r0, 0x2
    stw r0, 0x5b08(r6)
    stw r0, 0x5b10(r6)
    b lbl_fn_80585994_00001AE0
lbl_fn_80585994_000018BC:
    li r0, 0x3
    stw r0, 0x5b08(r6)
    stw r0, 0x5b10(r6)
    b lbl_fn_80585994_00001AE0
lbl_fn_80585994_000018CC:
    lwz r5, 0x5c90(r6)
    li r0, 0xa
    lwz r4, 0x5c94(r6)
    addi r3, r3, 0x58
    stw r5, 0x5b04(r6)
    stw r4, 0x5b0c(r6)
    stw r0, 0x5b10(r6)
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x58
    bl fn_80470580
    lwz r12, 0x0(r31)
    mr r4, r3
    mr r3, r31
    mr r5, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addis r3, r31, 0x2
    lwz r4, 0xf8(r31)
    lwz r0, 0x5b04(r3)
    stw r4, 0x5b08(r3)
    cmpw r0, r4
    blt lbl_fn_80585994_0000193C
    subi r4, r4, 0x1
    srawi r0, r4, 31
    andc r0, r4, r0
    stw r0, 0x5b04(r3)
lbl_fn_80585994_0000193C:
    lwz r0, 0xe8(r31)
    cmpwi r0, 0x4
    bne lbl_fn_80585994_00001960
    addis r3, r31, 0x2
    li r0, 0x0
    stw r0, 0x5b04(r3)
    stw r0, 0x5b0c(r3)
    stw r0, 0x5c90(r3)
    stw r0, 0x5c94(r3)
lbl_fn_80585994_00001960:
    lwz r0, 0xf8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80585994_00001AE0
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0x9
    li r6, 0x0
    bl fn_80581820
    li r0, 0x4
    stw r0, 0xe4(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x0(r31)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80585994_00001AE0
lbl_fn_80585994_000019BC:
    lwz r5, 0xdc(r3)
    li r0, 0xa
    lwz r4, 0xe0(r3)
    stw r5, 0x5b04(r6)
    stw r4, 0x5b0c(r6)
    stw r0, 0x5b10(r6)
    bl fn_80581FDC
    lwz r0, 0xe8(r31)
    cmpwi r0, 0x4
    bne lbl_fn_80585994_000019FC
    addis r3, r31, 0x2
    li r0, 0x0
    stw r0, 0x5b04(r3)
    stw r0, 0x5b0c(r3)
    stw r0, 0xdc(r31)
    stw r0, 0xe0(r31)
lbl_fn_80585994_000019FC:
    lwz r0, 0x32fc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80585994_00001AE0
    addi r3, r1, 0x8
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0xa
    li r6, 0x0
    bl fn_80581820
    li r0, 0x4
    stw r0, 0xe4(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x0(r31)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80585994_00001AE0
lbl_fn_80585994_00001A58:
    lwz r0, 0x5c90(r6)
    li r4, 0x0
    stw r4, 0x5b40(r6)
    mulli r0, r0, 0x64
    stw r5, 0x5b24(r6)
    add r4, r3, r0
    addi r4, r4, 0xfc
    bl fn_805848E4
    addis r4, r31, 0x2
    lfs f0, lbl_808880F0
    stw r3, 0x5b28(r4)
    lwz r3, 0x5b2c(r4)
    stfs f0, 0x100(r3)
    b lbl_fn_80585994_00001AE0
lbl_fn_80585994_00001A90:
    lwz r0, 0xdc(r3)
    li r4, 0x0
    stw r4, 0x5b40(r6)
    mulli r0, r0, 0x5c
    stw r5, 0x5b24(r6)
    add r4, r3, r0
    lwz r0, 0x3348(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80585994_00001ACC
    lwz r3, lbl_8087F4F0
    lwz r4, 0x3300(r4)
    bl fn_804444E8
    addis r4, r31, 0x2
    stw r3, 0x5b28(r4)
    b lbl_fn_80585994_00001AD0
lbl_fn_80585994_00001ACC:
    stw r5, 0x5b28(r6)
lbl_fn_80585994_00001AD0:
    addis r3, r31, 0x2
    lfs f0, lbl_808880F0
    lwz r3, 0x5b2c(r3)
    stfs f0, 0x100(r3)
lbl_fn_80585994_00001AE0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
