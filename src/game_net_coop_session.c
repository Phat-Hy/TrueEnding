#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006F72C(void);
extern void fn_800844D8(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_800E0000(void);
extern void fn_80117228(void);
extern void fn_801F0544(void);
extern void fn_801F48C8(void);
extern void fn_801F6C2C(void);
extern void fn_801F6C38(void);
extern void fn_801F6C80(void);
extern void fn_801F6D7C(void);
extern void fn_801F7590(void);
extern void fn_801F791C(void);
extern void fn_801FEB9C(void);
extern void fn_801FECE0(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_80202D00(void);
extern void fn_8020303C(void);
extern void fn_80203260(void);
extern void fn_802091E8(void);
extern void fn_804A660C(void);
extern void fn_804A71F0(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80757108[];
extern u8 lbl_807573D0[];
extern u8 lbl_807799A0[];

/* Small data declarations */
extern u32 lbl_8087E0E0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F138;
extern u32 lbl_8087F580;
extern u32 lbl_808871D0;
extern u32 lbl_808871E4;
extern u32 lbl_80887200;
extern u32 lbl_8088720C;
extern u32 lbl_80887210;
extern u32 lbl_80887214;
extern u32 lbl_80887218;
extern u32 lbl_8088721C;
extern u32 lbl_80887220;

/* Function declarations */
void fn_804A3AF0(void);
void fn_804A3B60(void);
void fn_804A3BD4(void);
void fn_804A3C24(void);
void fn_804A4264(void);
void fn_804A4280(void);
void fn_804A4294(void);
void fn_804A4300(void);
void fn_804A436C(void);
void fn_804A4494(void);
void fn_804A4738(void);
void fn_804A473C(void);
void fn_804A4930(void);
void fn_804A4934(void);
void fn_804A4AEC(void);
void fn_804A4CE4(void);
void fn_804A4EEC(void);
void fn_804A5160(void);
void fn_804A53D4(void);

asm void fn_804A3AF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f2
    stfd f30, 0x10(r1)
    fmr f30, f1
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_804A3AF0_00000050
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0xfc(r30)
    rlwimi r0, r31, 28, 3, 3
    stw r0, 0xfc(r30)
    stfs f31, 0x104(r30)
    stfs f30, 0x100(r30)
lbl_fn_804A3AF0_00000050:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A3B60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f2
    stfd f30, 0x10(r1)
    fmr f30, f1
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_804A3B60_000000C4
    li r4, 0x0
    bl fn_800D246C
    neg r0, r31
    stfs f31, 0x54(r30)
    or r0, r0, r31
    srwi r0, r0, 31
    stb r0, 0x4d(r30)
    stfs f30, 0x50(r30)
lbl_fn_804A3B60_000000C4:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A3BD4(void)
{
    nofralloc
    lwz r8, lbl_8087F138
    mr r0, r3
    mr r6, r4
    mr r7, r5
    cmpwi r8, 0x0
    beqlr
    lwz r3, lbl_8087F580
    cmpwi r3, 0x0
    beqlr
    lwz r4, 0x1ac(r8)
    cmpwi r4, 0x0
    beq lbl_fn_804A3BD4_0000011C
    mr r5, r0
    b fn_804A71F0
lbl_fn_804A3BD4_0000011C:
    lwz r4, 0x1a8(r8)
    cmpwi r4, 0x0
    beqlr
    mr r5, r0
    b fn_804A660C
    blr
}

asm void fn_804A3C24(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    cmpwi r4, 0x0
    mr r15, r3
    mr r16, r5
    beq lbl_fn_804A3C24_0000075C
    li r23, 0x0
    stw r23, 0x38(r1)
    lfs f1, lbl_8088720C
    addi r3, r1, 0x38
    stw r23, 0x3c(r1)
    li r5, 0x1
    lfs f2, lbl_80887210
    li r6, 0x1
    stw r23, 0x40(r1)
    li r7, 0x0
    lfs f3, lbl_808871D0
    bl fn_800E0000
    lis r3, __files@ha
    lis r4, lbl_807573D0@ha
    lbz r24, 0x1c(r1)
    addi r21, r1, 0x2c
    addi r14, r4, lbl_807573D0@l
    addi r26, r3, __files@l
    addi r27, r1, 0x40
    addi r19, r1, 0x44
    lis r29, 0xcccd
    la r22, lbl_8087E0E0
    lis r25, 0x1555
    lis r28, 0x71c
    lis r30, 0xe39
    lis r31, 0x2aab
    b lbl_fn_804A3C24_000005C0
lbl_fn_804A3C24_000001C4:
    stw r23, 0x2c(r1)
    mr r3, r22
    stw r23, 0x30(r1)
    stw r23, 0x34(r1)
    bl fn_80686A48
    mr r17, r3
    mr r3, r21
    mr r4, r17
    bl fn_800DBF68
    slwi r0, r17, 1
    stb r24, 0x18(r1)
    mr r3, r21
    mr r6, r22
    add r7, r22, r0
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x3c(r1)
    lwz r3, 0x40(r1)
    cmplw r0, r3
    bge lbl_fn_804A3C24_000002A4
    mulli r0, r0, 0xc
    lwz r3, 0x38(r1)
    add. r17, r3, r0
    beq lbl_fn_804A3C24_00000294
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_804A3C24_00000250
    lwz r0, 0x30(r1)
    stw r3, 0x0(r17)
    stw r0, 0x4(r17)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r17)
    b lbl_fn_804A3C24_00000294
lbl_fn_804A3C24_00000250:
    stw r23, 0x0(r17)
    mr r3, r17
    stw r23, 0x4(r17)
    stw r23, 0x8(r17)
    lwz r4, 0x30(r1)
    bl fn_800DBF68
    lwz r0, 0x30(r1)
    mr r3, r17
    lbz r4, 0xc(r1)
    addi r8, r1, 0x8
    stb r4, 0x8(r1)
    slwi r0, r0, 1
    lwz r6, 0x34(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_804A3C24_00000294:
    lwz r3, 0x3c(r1)
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
    b lbl_fn_804A3C24_000005AC
lbl_fn_804A3C24_000002A4:
    addi r0, r25, 0x5555
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_804A3C24_000002C8
    addi r4, r14, 0x143
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804A3C24_000002C8:
    lwz r3, 0x3c(r1)
    addi r0, r25, 0x5555
    lwz r17, 0x40(r1)
    addi r3, r3, 0x1
    stw r23, 0x44(r1)
    subf r3, r17, r3
    subf r0, r17, r0
    cmplw r3, r0
    stw r23, 0x48(r1)
    stw r23, 0x4c(r1)
    stw r27, 0x50(r1)
    stw r23, 0x54(r1)
    stw r3, 0x28(r1)
    ble lbl_fn_804A3C24_00000314
    addi r4, r14, 0x143
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804A3C24_00000314:
    addi r0, r28, 0x71c7
    cmplw r17, r0
    bge lbl_fn_804A3C24_0000035C
    addi r4, r17, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x28(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_804A3C24_00000350
    addi r3, r1, 0x28
lbl_fn_804A3C24_00000350:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_804A3C24_00000398
lbl_fn_804A3C24_0000035C:
    subi r0, r30, 0x1c72
    cmplw r17, r0
    bge lbl_fn_804A3C24_00000394
    addi r3, r17, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_804A3C24_00000388
    addi r3, r1, 0x28
lbl_fn_804A3C24_00000388:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_804A3C24_00000398
lbl_fn_804A3C24_00000394:
    addi r17, r25, 0x5555
lbl_fn_804A3C24_00000398:
    addi r0, r25, 0x5555
    cmplw r17, r0
    ble lbl_fn_804A3C24_000003B8
    addi r4, r14, 0x143
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804A3C24_000003B8:
    mulli r3, r17, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_804A3C24_000003E4
    lis r4, lbl_807799A0@ha
    addi r3, r26, 0xa0
    addi r4, r4, lbl_807799A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804A3C24_000003E4:
    lwz r5, 0x3c(r1)
    lwz r0, 0x48(r1)
    mulli r4, r5, 0xc
    stw r17, 0x4c(r1)
    stw r18, 0x44(r1)
    mulli r3, r0, 0xc
    add r0, r18, r4
    stw r5, 0x54(r1)
    add. r17, r3, r0
    beq lbl_fn_804A3C24_00000474
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_804A3C24_00000430
    lwz r0, 0x30(r1)
    stw r3, 0x0(r17)
    stw r0, 0x4(r17)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r17)
    b lbl_fn_804A3C24_00000474
lbl_fn_804A3C24_00000430:
    stw r23, 0x0(r17)
    mr r3, r17
    stw r23, 0x4(r17)
    stw r23, 0x8(r17)
    lwz r4, 0x30(r1)
    bl fn_800DBF68
    lwz r0, 0x30(r1)
    mr r3, r17
    lbz r4, 0x10(r1)
    addi r8, r1, 0x14
    stb r4, 0x14(r1)
    slwi r0, r0, 1
    lwz r6, 0x34(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_804A3C24_00000474:
    lwz r0, 0x3c(r1)
    subi r6, r31, 0x5555
    lwz r17, 0x38(r1)
    mulli r5, r0, 0xc
    lwz r3, 0x48(r1)
    lwz r0, 0x54(r1)
    mr r4, r17
    addi r7, r3, 0x1
    lwz r3, 0x44(r1)
    add r5, r17, r5
    stw r7, 0x48(r1)
    subf r5, r17, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r20, r5, r6
    subf r0, r20, r0
    stw r0, 0x54(r1)
    mulli r18, r20, 0xc
    mulli r0, r0, 0xc
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r17
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x54(r1)
    lwz r8, 0x3c(r1)
    mulli r3, r0, 0xc
    lwz r0, 0x48(r1)
    lwz r7, 0x38(r1)
    lwz r4, 0x44(r1)
    add r5, r0, r20
    add r18, r7, r3
    mulli r0, r8, 0xc
    lwz r6, 0x40(r1)
    lwz r3, 0x4c(r1)
    stw r3, 0x40(r1)
    add r17, r18, r0
    stw r6, 0x4c(r1)
    stw r4, 0x38(r1)
    stw r7, 0x44(r1)
    stw r5, 0x3c(r1)
    stw r8, 0x48(r1)
    b lbl_fn_804A3C24_00000548
lbl_fn_804A3C24_0000052C:
    subic. r17, r17, 0xc
    beq lbl_fn_804A3C24_00000548
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_804A3C24_00000548
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_804A3C24_00000548:
    cmplw r17, r18
    bgt lbl_fn_804A3C24_0000052C
    cmpwi r19, 0x0
    stw r23, 0x48(r1)
    beq lbl_fn_804A3C24_000005AC
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804A3C24_000005AC
    mulli r0, r23, 0xc
    stw r23, 0x48(r1)
    li r17, 0x0
    add r18, r3, r0
    b lbl_fn_804A3C24_0000059C
lbl_fn_804A3C24_0000057C:
    subic. r18, r18, 0xc
    beq lbl_fn_804A3C24_00000598
    lwz r0, 0x0(r18)
    srwi. r0, r0, 31
    beq lbl_fn_804A3C24_00000598
    lwz r3, 0x8(r18)
    bl dtor_80084684
lbl_fn_804A3C24_00000598:
    subi r17, r17, 0x1
lbl_fn_804A3C24_0000059C:
    cmpwi r17, 0x0
    bne lbl_fn_804A3C24_0000057C
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_804A3C24_000005AC:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A3C24_000005C0
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_804A3C24_000005C0:
    lwz r0, 0x3c(r1)
    cmplwi r0, 0x3
    blt lbl_fn_804A3C24_000001C4
    lwz r4, 0x38(r1)
    lwz r0, 0x18(r4)
    srwi. r0, r0, 31
    bne lbl_fn_804A3C24_000005E4
    addi r14, r4, 0x1a
    b lbl_fn_804A3C24_000005E8
lbl_fn_804A3C24_000005E4:
    lwz r14, 0x20(r4)
lbl_fn_804A3C24_000005E8:
    lwz r0, 0xc(r4)
    srwi. r0, r0, 31
    bne lbl_fn_804A3C24_000005FC
    addi r19, r4, 0xe
    b lbl_fn_804A3C24_00000600
lbl_fn_804A3C24_000005FC:
    lwz r19, 0x14(r4)
lbl_fn_804A3C24_00000600:
    lwz r3, 0x38(r1)
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_804A3C24_00000618
    addi r18, r4, 0x2
    b lbl_fn_804A3C24_0000061C
lbl_fn_804A3C24_00000618:
    lwz r18, 0x8(r4)
lbl_fn_804A3C24_0000061C:
    lwz r4, 0x1c8(r15)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    li r0, 0x0
    cmpwi r18, 0x0
    stw r0, 0x1c0(r15)
    addi r3, r3, 0x157
    addi r17, r4, 0x58
    beq lbl_fn_804A3C24_00000644
    b lbl_fn_804A3C24_00000648
lbl_fn_804A3C24_00000644:
    la r18, lbl_8087E0E0
lbl_fn_804A3C24_00000648:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r17
    mr r5, r18
    bl fn_801FEE08
    lwz r4, 0x1c8(r15)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    cmpwi r19, 0x0
    addi r3, r3, 0x15d
    addi r17, r4, 0x58
    beq lbl_fn_804A3C24_0000067C
    b lbl_fn_804A3C24_00000680
lbl_fn_804A3C24_0000067C:
    la r19, lbl_8087E0E0
lbl_fn_804A3C24_00000680:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r17
    mr r5, r19
    bl fn_801FEE08
    lwz r4, 0x1c8(r15)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    cmpwi r14, 0x0
    addi r3, r3, 0x163
    addi r17, r4, 0x58
    beq lbl_fn_804A3C24_000006B4
    b lbl_fn_804A3C24_000006B8
lbl_fn_804A3C24_000006B4:
    la r14, lbl_8087E0E0
lbl_fn_804A3C24_000006B8:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r17
    mr r5, r14
    bl fn_801FEE08
    lwz r4, 0x1c8(r15)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    la r14, lbl_8087E0E0
    addi r3, r3, 0x169
    addi r17, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r17
    mr r5, r14
    bl fn_801FEE08
    addic. r0, r1, 0x38
    stw r16, 0x1c4(r15)
    beq lbl_fn_804A3C24_0000075C
    beq lbl_fn_804A3C24_0000075C
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804A3C24_0000075C
    lwz r15, 0x3c(r1)
    mulli r3, r15, 0xc
    subf r0, r15, r15
    stw r0, 0x3c(r1)
    add r14, r4, r3
    b lbl_fn_804A3C24_0000074C
lbl_fn_804A3C24_0000072C:
    subic. r14, r14, 0xc
    beq lbl_fn_804A3C24_00000748
    lwz r0, 0x0(r14)
    srwi. r0, r0, 31
    beq lbl_fn_804A3C24_00000748
    lwz r3, 0x8(r14)
    bl dtor_80084684
lbl_fn_804A3C24_00000748:
    subi r15, r15, 0x1
lbl_fn_804A3C24_0000074C:
    cmpwi r15, 0x0
    bne lbl_fn_804A3C24_0000072C
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_804A3C24_0000075C:
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804A4264(void)
{
    nofralloc
    lwz r3, 0x1c8(r3)
    lfs f1, lbl_80887200
    lfs f2, 0x100(r3)
    lfs f0, lbl_80887214
    fsubs f1, f1, f2
    fmuls f1, f0, f1
    blr
}

asm void fn_804A4280(void)
{
    nofralloc
    lwz r3, 0x1c8(r3)
    lfs f0, lbl_80887200
    lfs f1, 0x100(r3)
    fdivs f1, f1, f0
    blr
}

asm void fn_804A4294(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lis r3, lbl_807573D0@ha
    lwz r5, 0x50(r29)
    addi r3, r3, lbl_807573D0@l
    addi r3, r3, 0x16f
    addi r31, r5, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_801FEE08
    li r0, 0x1
    stw r0, 0x4c(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A4300(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lis r3, lbl_807573D0@ha
    lwz r5, 0x58(r29)
    addi r3, r3, lbl_807573D0@l
    addi r3, r3, 0x16f
    addi r31, r5, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_801FEE08
    li r0, 0x1
    stw r0, 0x54(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A436C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r6
    mr r29, r7
    ble lbl_fn_804A436C_00000990
    lwz r31, lbl_8087EF70
    li r4, 0x0
    lwz r30, 0x0(r3)
    li r5, 0x1a
    mr r3, r31
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804A436C_000008DC
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804A436C_0000090C
lbl_fn_804A436C_000008DC:
    lwz r3, 0x0(r26)
    subic. r0, r3, 0x1
    stw r0, 0x0(r26)
    bge lbl_fn_804A436C_0000096C
    cmpwi r28, 0x0
    beq lbl_fn_804A436C_00000900
    subi r0, r27, 0x1
    stw r0, 0x0(r26)
    b lbl_fn_804A436C_0000096C
lbl_fn_804A436C_00000900:
    li r0, 0x0
    stw r0, 0x0(r26)
    b lbl_fn_804A436C_0000096C
lbl_fn_804A436C_0000090C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804A436C_0000093C
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804A436C_0000096C
lbl_fn_804A436C_0000093C:
    lwz r3, 0x0(r26)
    addi r0, r3, 0x1
    stw r0, 0x0(r26)
    cmpw r0, r27
    blt lbl_fn_804A436C_0000096C
    cmpwi r28, 0x0
    beq lbl_fn_804A436C_00000964
    li r0, 0x0
    stw r0, 0x0(r26)
    b lbl_fn_804A436C_0000096C
lbl_fn_804A436C_00000964:
    subi r0, r27, 0x1
    stw r0, 0x0(r26)
lbl_fn_804A436C_0000096C:
    lwz r0, 0x0(r26)
    cmpw r0, r30
    beq lbl_fn_804A436C_00000990
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804A436C_00000990:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804A4494(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    stmw r22, 0x18(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r8
    ble lbl_fn_804A4494_00000C34
    lwz r30, 0x0(r3)
    subf r7, r6, r5
    lwz r4, 0x0(r4)
    srawi r3, r7, 31
    cmpw r6, r5
    subf r0, r30, r4
    andc r31, r7, r3
    cntlzw r0, r0
    srwi r24, r0, 5
    blt lbl_fn_804A4494_00000A10
    add r3, r4, r5
    subi r0, r3, 0x1
    subf r0, r30, r0
    cntlzw r0, r0
    srwi r22, r0, 5
    b lbl_fn_804A4494_00000A24
lbl_fn_804A4494_00000A10:
    add r3, r4, r6
    subi r0, r3, 0x1
    subf r0, r30, r0
    cntlzw r0, r0
    srwi r22, r0, 5
lbl_fn_804A4494_00000A24:
    lwz r23, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    mr r3, r23
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804A4494_00000A58
    mr r3, r23
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804A4494_00000A94
lbl_fn_804A4494_00000A58:
    lwz r3, 0x0(r25)
    cmpwi r24, 0x0
    subi r0, r3, 0x1
    stw r0, 0x0(r25)
    beq lbl_fn_804A4494_00000A78
    lwz r3, 0x0(r26)
    subi r0, r3, 0x1
    stw r0, 0x0(r26)
lbl_fn_804A4494_00000A78:
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    bge lbl_fn_804A4494_00000C10
    subi r0, r27, 0x1
    stw r0, 0x0(r25)
    stw r31, 0x0(r26)
    b lbl_fn_804A4494_00000C10
lbl_fn_804A4494_00000A94:
    mr r3, r23
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804A4494_00000AC4
    mr r3, r23
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804A4494_00000B00
lbl_fn_804A4494_00000AC4:
    lwz r3, 0x0(r25)
    cmpwi r22, 0x0
    addi r0, r3, 0x1
    stw r0, 0x0(r25)
    beq lbl_fn_804A4494_00000AE4
    lwz r3, 0x0(r26)
    addi r0, r3, 0x1
    stw r0, 0x0(r26)
lbl_fn_804A4494_00000AE4:
    lwz r0, 0x0(r25)
    cmpw r0, r27
    blt lbl_fn_804A4494_00000C10
    li r0, 0x0
    stw r0, 0x0(r25)
    stw r0, 0x0(r26)
    b lbl_fn_804A4494_00000C10
lbl_fn_804A4494_00000B00:
    mr r3, r23
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804A4494_00000B30
    mr r3, r23
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804A4494_00000B88
lbl_fn_804A4494_00000B30:
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    bne lbl_fn_804A4494_00000B4C
    subi r0, r27, 0x1
    stw r0, 0x0(r25)
    stw r31, 0x0(r26)
    b lbl_fn_804A4494_00000C10
lbl_fn_804A4494_00000B4C:
    subf r0, r28, r0
    stw r0, 0x0(r25)
    lwz r0, 0x0(r26)
    subf. r0, r28, r0
    stw r0, 0x0(r26)
    bge lbl_fn_804A4494_00000B6C
    li r0, 0x0
    stw r0, 0x0(r26)
lbl_fn_804A4494_00000B6C:
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    bge lbl_fn_804A4494_00000C10
    li r0, 0x0
    stw r0, 0x0(r25)
    stw r0, 0x0(r26)
    b lbl_fn_804A4494_00000C10
lbl_fn_804A4494_00000B88:
    mr r3, r23
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804A4494_00000BB8
    mr r3, r23
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804A4494_00000C10
lbl_fn_804A4494_00000BB8:
    lwz r3, 0x0(r25)
    subi r0, r27, 0x1
    cmpw r3, r0
    bne lbl_fn_804A4494_00000BD8
    li r0, 0x0
    stw r0, 0x0(r25)
    stw r0, 0x0(r26)
    b lbl_fn_804A4494_00000C10
lbl_fn_804A4494_00000BD8:
    add r0, r3, r28
    stw r0, 0x0(r25)
    lwz r0, 0x0(r26)
    add r0, r0, r28
    stw r0, 0x0(r26)
    cmpw r0, r31
    ble lbl_fn_804A4494_00000BF8
    stw r31, 0x0(r26)
lbl_fn_804A4494_00000BF8:
    lwz r0, 0x0(r25)
    cmpw r0, r27
    blt lbl_fn_804A4494_00000C10
    subi r0, r27, 0x1
    stw r0, 0x0(r25)
    stw r31, 0x0(r26)
lbl_fn_804A4494_00000C10:
    lwz r0, 0x0(r25)
    cmpw r0, r30
    beq lbl_fn_804A4494_00000C34
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804A4494_00000C34:
    lmw r22, 0x18(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804A4738(void)
{
    nofralloc
    b fn_804A473C
}

asm void fn_804A473C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    stw r0, 0x10(r1)
    mr r30, r6
    beq lbl_fn_804A473C_00000E18
    lis r31, lbl_807573D0@ha
    addi r31, r31, lbl_807573D0@l
    addi r3, r31, 0x17b
    bl fn_800DC6B4
    lfs f1, lbl_808871D0
    mr r4, r3
    addi r3, r27, 0x58
    li r5, 0x0
    bl fn_801FEDBC
    cmpw r29, r30
    ble lbl_fn_804A473C_00000E18
    addi r3, r31, 0x17b
    bl fn_800DC6B4
    lfs f1, lbl_80887218
    mr r4, r3
    addi r3, r27, 0x58
    li r5, 0x0
    bl fn_801FEDBC
    addi r4, r31, 0x183
    addi r3, r27, 0x58
    bl fn_801FEB9C
    cmpwi r3, 0x0
    beq lbl_fn_804A473C_00000E18
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    xoris r3, r29, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80757108@ha
    xoris r0, r30, 0x8000
    lfd f0, 0x8(r1)
    fmr f5, f1
    stw r3, 0x14(r1)
    lfd f4, lbl_80757108@l(r4)
    stw r0, 0xc(r1)
    fsubs f3, f0, f4
    lfd f2, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f2, f4
    fsubs f0, f0, f4
    fdivs f31, f1, f3
    fdivs f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_804A473C_00000D4C
    fmr f0, f5
    b lbl_fn_804A473C_00000D68
lbl_fn_804A473C_00000D4C:
    stw r3, 0x14(r1)
    stw r0, 0xc(r1)
    lfd f2, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f2, f4
    fsubs f0, f0, f4
    fdivs f0, f2, f0
lbl_fn_804A473C_00000D68:
    fdivs f0, f1, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_804A473C_00000D78
    b lbl_fn_804A473C_00000D7C
lbl_fn_804A473C_00000D78:
    fmr f5, f0
lbl_fn_804A473C_00000D7C:
    lfs f0, lbl_8088721C
    fmr f30, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_804A473C_00000DB4
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    fsubs f3, f0, f5
    lis r3, lbl_80757108@ha
    fmr f30, f0
    lfd f2, lbl_80757108@l(r3)
    lfd f0, 0x10(r1)
    fsubs f5, f1, f3
    fsubs f0, f0, f2
    fdivs f31, f5, f0
lbl_fn_804A473C_00000DB4:
    lis r31, lbl_807573D0@ha
    addi r31, r31, lbl_807573D0@l
    addi r3, r31, 0x18e
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    addi r3, r27, 0x58
    bl fn_801FECE0
    addi r3, r31, 0x194
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r27, 0x58
    bl fn_801FECE0
    addi r3, r31, 0x19e
    bl fn_800DC6B4
    xoris r0, r28, 0x8000
    stw r0, 0xc(r1)
    lis r5, lbl_80757108@ha
    mr r4, r3
    lfd f1, lbl_80757108@l(r5)
    addi r3, r27, 0x58
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_801FECE0
lbl_fn_804A473C_00000E18:
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804A4930(void)
{
    nofralloc
    b fn_804A4934
}

asm void fn_804A4934(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    stw r0, 0x10(r1)
    mr r30, r6
    beq lbl_fn_804A4934_00000FDC
    lis r31, lbl_807573D0@ha
    lfs f1, lbl_808871D0
    addi r31, r31, lbl_807573D0@l
    li r5, 0x0
    addi r4, r31, 0x17b
    bl fn_801F791C
    cmpw r29, r30
    ble lbl_fn_804A4934_00000FDC
    lfs f1, lbl_80887218
    mr r3, r27
    addi r4, r31, 0x17b
    li r5, 0x0
    bl fn_801F791C
    mr r3, r27
    addi r4, r31, 0x183
    bl fn_801F6C38
    cmpwi r3, 0x0
    beq lbl_fn_804A4934_00000FDC
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    xoris r3, r29, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80757108@ha
    xoris r0, r30, 0x8000
    lfd f0, 0x8(r1)
    fmr f5, f1
    stw r3, 0x14(r1)
    lfd f4, lbl_80757108@l(r4)
    stw r0, 0xc(r1)
    fsubs f3, f0, f4
    lfd f2, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f2, f4
    fsubs f0, f0, f4
    fdivs f31, f1, f3
    fdivs f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_804A4934_00000F28
    fmr f0, f5
    b lbl_fn_804A4934_00000F44
lbl_fn_804A4934_00000F28:
    stw r3, 0x14(r1)
    stw r0, 0xc(r1)
    lfd f2, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f2, f4
    fsubs f0, f0, f4
    fdivs f0, f2, f0
lbl_fn_804A4934_00000F44:
    fdivs f0, f1, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_804A4934_00000F54
    b lbl_fn_804A4934_00000F58
lbl_fn_804A4934_00000F54:
    fmr f5, f0
lbl_fn_804A4934_00000F58:
    lfs f0, lbl_8088721C
    fmr f4, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_804A4934_00000F90
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    fsubs f3, f0, f5
    lis r3, lbl_80757108@ha
    fmr f4, f0
    lfd f2, lbl_80757108@l(r3)
    lfd f0, 0x10(r1)
    fsubs f5, f1, f3
    fsubs f0, f0, f2
    fdivs f31, f5, f0
lbl_fn_804A4934_00000F90:
    lis r31, lbl_807573D0@ha
    fmr f1, f4
    addi r31, r31, lbl_807573D0@l
    mr r3, r27
    addi r4, r31, 0x18e
    bl fn_801F6C80
    fmr f1, f31
    mr r3, r27
    addi r4, r31, 0x194
    bl fn_801F6C80
    xoris r0, r28, 0x8000
    stw r0, 0xc(r1)
    lis r4, lbl_80757108@ha
    mr r3, r27
    lfd f1, lbl_80757108@l(r4)
    addi r4, r31, 0x19e
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_801F6C80
lbl_fn_804A4934_00000FDC:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804A4AEC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lfs f0, lbl_808871D0
    cmpwi r4, 0x0
    stw r0, 0x94(r1)
    lis r0, 0x4330
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    stw r0, 0x68(r1)
    stw r0, 0x70(r1)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    beq lbl_fn_804A4AEC_0000114C
    lwz r3, 0x2c(r4)
    cmpwi r3, 0x0
    ble lbl_fn_804A4AEC_0000114C
    mullw r0, r5, r6
    cmpw r3, r0
    bge lbl_fn_804A4AEC_0000114C
    xoris r4, r5, 0x8000
    stw r4, 0x6c(r1)
    subi r7, r3, 0x1
    xoris r3, r6, 0x8000
    lfd f0, 0x68(r1)
    lis r5, lbl_80757108@ha
    lfd f11, lbl_80757108@l(r5)
    srawi r0, r7, 2
    stw r3, 0x6c(r1)
    addze r8, r0
    addi r0, r8, 0x1
    fsubs f6, f0, f11
    lfd f3, 0x68(r1)
    slwi r5, r7, 30
    srwi r6, r7, 31
    lfs f10, lbl_808871E4
    stw r4, 0x6c(r1)
    subf r5, r6, r5
    fsubs f4, f3, f11
    lfd f0, 0x68(r1)
    rotlwi r4, r5, 2
    add r4, r4, r6
    fdivs f9, f10, f6
    stw r3, 0x6c(r1)
    xoris r5, r4, 0x8000
    addi r3, r4, 0x1
    stw r5, 0x74(r1)
    xoris r4, r8, 0x8000
    fsubs f5, f0, f11
    lfd f6, 0x70(r1)
    lfd f0, 0x68(r1)
    fdivs f7, f10, f4
    stw r4, 0x74(r1)
    xoris r3, r3, 0x8000
    xoris r0, r0, 0x8000
    addi r5, r1, 0x18
    addi r4, r1, 0x8
    fsubs f3, f0, f11
    lfd f0, 0x70(r1)
    fsubs f8, f6, f11
    stw r3, 0x74(r1)
    fsubs f6, f0, f11
    fdivs f5, f10, f5
    lfd f4, 0x70(r1)
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f4, f4, f11
    fmuls f8, f9, f8
    fmuls f6, f7, f6
    fmuls f4, f5, f4
    stfs f8, 0x18(r1)
    fdivs f3, f10, f3
    stfs f6, 0x1c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x20(r1)
    psq_st f1, 0x0(r4), 0, 0
    fsubs f0, f0, f11
    fmuls f0, f3, f0
    stfs f0, 0x24(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x8(r4), 0, 0
lbl_fn_804A4AEC_0000114C:
    addi r29, r1, 0x8
    lis r30, lbl_807573D0@ha
    addi r5, r1, 0x28
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    addi r30, r30, lbl_807573D0@l
    psq_st f1, 0x0(r5), 0, 0
    mr r3, r31
    addi r4, r30, 0x1a4
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    addi r5, r1, 0x38
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r30, 0x1ab
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    addi r5, r1, 0x48
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r30, 0x1b3
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    addi r5, r1, 0x58
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r30, 0x1bd
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_804A4CE4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    lis r0, 0x4330
    stw r31, 0x8c(r1)
    mr r31, r3
    mr r3, r4
    stw r30, 0x88(r1)
    mr r30, r5
    stw r29, 0x84(r1)
    mr r29, r6
    stw r0, 0x68(r1)
    stw r0, 0x70(r1)
    bl fn_802091E8
    lfs f0, lbl_808871D0
    cmpwi r3, 0x0
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    beq lbl_fn_804A4CE4_00001354
    lwz r3, 0x2c(r3)
    cmpwi r3, 0x0
    ble lbl_fn_804A4CE4_00001354
    mullw r0, r30, r29
    cmpw r3, r0
    bge lbl_fn_804A4CE4_00001354
    xoris r4, r30, 0x8000
    stw r4, 0x6c(r1)
    subi r6, r3, 0x1
    lis r5, lbl_80757108@ha
    lfd f0, 0x68(r1)
    xoris r3, r29, 0x8000
    lfd f11, lbl_80757108@l(r5)
    srawi r0, r6, 2
    stw r3, 0x6c(r1)
    slwi r5, r6, 30
    srwi r6, r6, 31
    addze r7, r0
    lfd f3, 0x68(r1)
    addi r0, r7, 0x1
    fsubs f6, f0, f11
    lfs f10, lbl_808871E4
    stw r4, 0x6c(r1)
    subf r5, r6, r5
    rotlwi r4, r5, 2
    fsubs f4, f3, f11
    lfd f0, 0x68(r1)
    add r4, r4, r6
    xoris r5, r4, 0x8000
    stw r5, 0x74(r1)
    fsubs f5, f0, f11
    xoris r0, r0, 0x8000
    stw r3, 0x6c(r1)
    addi r3, r4, 0x1
    fdivs f9, f10, f6
    lfd f6, 0x70(r1)
    lfd f0, 0x68(r1)
    xoris r4, r7, 0x8000
    stw r4, 0x74(r1)
    xoris r3, r3, 0x8000
    fsubs f3, f0, f11
    lfd f0, 0x70(r1)
    fsubs f8, f6, f11
    addi r5, r1, 0x48
    fdivs f7, f10, f4
    stw r3, 0x74(r1)
    lfd f4, 0x70(r1)
    addi r4, r1, 0x58
    stw r0, 0x74(r1)
    fsubs f6, f0, f11
    lfd f0, 0x70(r1)
    fmuls f8, f9, f8
    fdivs f5, f10, f5
    stfs f8, 0x48(r1)
    fsubs f4, f4, f11
    fmuls f6, f7, f6
    fdivs f3, f10, f3
    stfs f6, 0x4c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f0, f0, f11
    fmuls f4, f5, f4
    fmuls f0, f3, f0
    stfs f4, 0x50(r1)
    stfs f0, 0x54(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x8(r4), 0, 0
lbl_fn_804A4CE4_00001354:
    addi r29, r1, 0x58
    lis r30, lbl_807573D0@ha
    addi r5, r1, 0x38
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    addi r30, r30, lbl_807573D0@l
    psq_st f1, 0x0(r5), 0, 0
    mr r3, r31
    addi r4, r30, 0x1a4
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    addi r5, r1, 0x28
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r30, 0x1ab
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    addi r5, r1, 0x18
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r30, 0x1b3
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    addi r5, r1, 0x8
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r30, 0x1bd
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_804A4EEC(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    bl _savegpr_26
    lwz r8, 0x74(r3)
    fmr f27, f1
    fmr f28, f2
    mr r31, r3
    addic. r0, r8, 0x1
    fmr f29, f3
    fmr f30, f4
    fmr f31, f5
    stw r0, 0x74(r3)
    mr r26, r4
    mr r27, r5
    mr r28, r7
    blt lbl_fn_804A4EEC_00001538
    cmpwi r0, 0x4
    bge lbl_fn_804A4EEC_00001538
    slwi r0, r0, 2
    add r29, r3, r0
    lwz r3, 0x78(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804A4EEC_00001538
    mr r4, r6
    bl fn_8020303C
    lwz r3, 0x78(r29)
    bl fn_80203260
    lwz r3, 0x78(r29)
    bl fn_80202D00
    lis r30, lbl_807573D0@ha
    fmr f1, f27
    addi r30, r30, lbl_807573D0@l
    li r5, 0x0
    addi r4, r30, 0x128
    bl fn_801F6D7C
    lwz r3, 0x78(r29)
    bl fn_80202D00
    fmr f1, f28
    addi r4, r30, 0x128
    li r5, 0x1
    bl fn_801F6D7C
    lwz r3, 0x78(r29)
    bl fn_80202D00
    fmr f1, f31
    addi r4, r30, 0x128
    li r5, 0x4
    bl fn_801F6D7C
    lwz r3, 0x78(r29)
    bl fn_80202D00
    fmr f1, f29
    addi r4, r30, 0x133
    bl fn_801F6C80
    lwz r3, 0x78(r29)
    bl fn_80202D00
    fmr f1, f30
    addi r4, r30, 0x139
    bl fn_801F6C80
    cmpwi r28, 0x0
    beq lbl_fn_804A4EEC_00001538
    lwz r3, 0x78(r29)
    bl fn_80202D00
    bl fn_801F6C2C
    lfs f0, lbl_80887220
    lwz r3, 0x78(r29)
    fsubs f31, f1, f0
    bl fn_80202D00
    stfs f31, 0x50(r3)
lbl_fn_804A4EEC_00001538:
    cmpwi r26, 0x0
    beq lbl_fn_804A4EEC_00001630
    lwz r0, 0x9c(r31)
    cmplwi r0, 0x4
    bge lbl_fn_804A4EEC_00001630
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    li r4, 0x0
    stw r0, 0xc(r1)
    li r5, 0x40
    bl memset
    cmpwi r27, 0x0
    stw r26, 0x8(r1)
    beq lbl_fn_804A4EEC_00001580
    mr r4, r27
    addi r3, r1, 0x10
    bl strcpy
lbl_fn_804A4EEC_00001580:
    lwz r0, 0x9c(r31)
    mulli r0, r0, 0x48
    add r0, r31, r0
    addic. r4, r0, 0xa0
    beq lbl_fn_804A4EEC_00001624
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x14(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x1c(r1)
    lwz r3, 0x18(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x24(r1)
    lwz r3, 0x20(r1)
    stw r3, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x2c(r1)
    lwz r3, 0x28(r1)
    stw r3, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x40(r4)
    stw r0, 0x44(r4)
lbl_fn_804A4EEC_00001624:
    lwz r3, 0x9c(r31)
    addi r0, r3, 0x1
    stw r0, 0x9c(r31)
lbl_fn_804A4EEC_00001630:
    addi r11, r1, 0x70
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_804A5160(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    bl _savegpr_26
    lwz r8, 0x74(r3)
    fmr f27, f1
    fmr f28, f2
    mr r31, r3
    addic. r0, r8, 0x1
    fmr f29, f3
    fmr f30, f4
    fmr f31, f5
    stw r0, 0x74(r3)
    mr r26, r4
    mr r27, r5
    mr r28, r7
    blt lbl_fn_804A5160_000017AC
    cmpwi r0, 0x4
    bge lbl_fn_804A5160_000017AC
    slwi r0, r0, 2
    add r29, r3, r0
    lwz r3, 0x78(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804A5160_000017AC
    mr r4, r6
    bl fn_8020303C
    lwz r3, 0x78(r29)
    bl fn_80203260
    lwz r3, 0x78(r29)
    bl fn_80202D00
    lis r30, lbl_807573D0@ha
    fmr f1, f27
    addi r30, r30, lbl_807573D0@l
    li r5, 0x0
    addi r4, r30, 0x128
    bl fn_801F6D7C
    lwz r3, 0x78(r29)
    bl fn_80202D00
    fmr f1, f28
    addi r4, r30, 0x128
    li r5, 0x1
    bl fn_801F6D7C
    lwz r3, 0x78(r29)
    bl fn_80202D00
    fmr f1, f31
    addi r4, r30, 0x128
    li r5, 0x4
    bl fn_801F6D7C
    lwz r3, 0x78(r29)
    bl fn_80202D00
    fmr f1, f29
    addi r4, r30, 0x133
    bl fn_801F6C80
    lwz r3, 0x78(r29)
    bl fn_80202D00
    fmr f1, f30
    addi r4, r30, 0x139
    bl fn_801F6C80
    cmpwi r28, 0x0
    beq lbl_fn_804A5160_000017AC
    lwz r3, 0x78(r29)
    bl fn_80202D00
    bl fn_801F6C2C
    lfs f0, lbl_80887220
    lwz r3, 0x78(r29)
    fsubs f31, f1, f0
    bl fn_80202D00
    stfs f31, 0x50(r3)
lbl_fn_804A5160_000017AC:
    cmpwi r26, 0x0
    beq lbl_fn_804A5160_000018A4
    lwz r0, 0x9c(r31)
    cmplwi r0, 0x4
    bge lbl_fn_804A5160_000018A4
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    li r4, 0x0
    stw r0, 0xc(r1)
    li r5, 0x40
    bl memset
    cmpwi r27, 0x0
    stw r26, 0xc(r1)
    beq lbl_fn_804A5160_000017F4
    mr r4, r27
    addi r3, r1, 0x10
    bl strcpy
lbl_fn_804A5160_000017F4:
    lwz r0, 0x9c(r31)
    mulli r0, r0, 0x48
    add r0, r31, r0
    addic. r4, r0, 0xa0
    beq lbl_fn_804A5160_00001898
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x14(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x1c(r1)
    lwz r3, 0x18(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x24(r1)
    lwz r3, 0x20(r1)
    stw r3, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x2c(r1)
    lwz r3, 0x28(r1)
    stw r3, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x40(r4)
    stw r0, 0x44(r4)
lbl_fn_804A5160_00001898:
    lwz r3, 0x9c(r31)
    addi r0, r3, 0x1
    stw r0, 0x9c(r31)
lbl_fn_804A5160_000018A4:
    addi r11, r1, 0x70
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_804A53D4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    lwz r8, 0x88(r3)
    mr r28, r4
    mr r27, r3
    mr r29, r5
    addi r4, r8, 0x1
    mr r30, r6
    cmpwi r4, 0x4
    mr r31, r7
    bge lbl_fn_804A53D4_000019FC
    slwi r0, r4, 2
    stw r4, 0x88(r3)
    add r3, r3, r0
    lwz r3, 0x8c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804A53D4_000019FC
    lis r26, lbl_807573D0@ha
    lfs f1, 0x0(r6)
    addi r26, r26, lbl_807573D0@l
    li r5, 0x0
    addi r4, r26, 0x128
    bl fn_801F6D7C
    lwz r0, 0x88(r27)
    addi r4, r26, 0x128
    lfs f1, 0x4(r30)
    li r5, 0x1
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6D7C
    lwz r0, 0x88(r27)
    addi r4, r26, 0x128
    lfs f1, 0x10(r30)
    li r5, 0x4
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6D7C
    lwz r0, 0x88(r27)
    addi r4, r26, 0x133
    lfs f1, 0x8(r30)
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6C80
    lwz r0, 0x88(r27)
    addi r4, r26, 0x139
    lfs f1, 0xc(r30)
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6C80
    cmpwi r31, 0x0
    beq lbl_fn_804A53D4_000019FC
    lwz r0, 0x88(r27)
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6C2C
    lwz r0, 0x88(r27)
    lfs f0, lbl_80887220
    slwi r0, r0, 2
    add r3, r27, r0
    fsubs f0, f1, f0
    lwz r3, 0x8c(r3)
    stfs f0, 0x50(r3)
lbl_fn_804A53D4_000019FC:
    cmpwi r28, 0x0
    beq lbl_fn_804A53D4_00001AF4
    lwz r0, 0x9c(r27)
    cmplwi r0, 0x4
    bge lbl_fn_804A53D4_00001AF4
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    li r4, 0x0
    stw r0, 0xc(r1)
    li r5, 0x40
    bl memset
    cmpwi r29, 0x0
    stw r28, 0x8(r1)
    beq lbl_fn_804A53D4_00001A44
    mr r4, r29
    addi r3, r1, 0x10
    bl strcpy
lbl_fn_804A53D4_00001A44:
    lwz r0, 0x9c(r27)
    mulli r0, r0, 0x48
    add r0, r27, r0
    addic. r4, r0, 0xa0
    beq lbl_fn_804A53D4_00001AE8
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x14(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x1c(r1)
    lwz r3, 0x18(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x24(r1)
    lwz r3, 0x20(r1)
    stw r3, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x2c(r1)
    lwz r3, 0x28(r1)
    stw r3, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x40(r4)
    stw r0, 0x44(r4)
lbl_fn_804A53D4_00001AE8:
    lwz r3, 0x9c(r27)
    addi r0, r3, 0x1
    stw r0, 0x9c(r27)
lbl_fn_804A53D4_00001AF4:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
