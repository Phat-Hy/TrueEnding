#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __div2u(void);
extern void __files(void);
extern void __mod2u(void);
extern void _restgpr_15(void);
extern void _restgpr_18(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_15(void);
extern void _savegpr_18(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_80117228(void);
extern void fn_801F4728(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801FECE0(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_804A4738(void);
extern void fn_804A53D4(void);
extern void fn_804AC734(void);
extern void fn_804AC79C(void);
extern void fn_804AC7EC(void);
extern void fn_804AC83C(void);
extern void fn_804ACAF8(void);
extern void fn_804ACD10(void);
extern void fn_804ACDBC(void);
extern void fn_804AD1EC(void);
extern void fn_804B6F08(void);
extern void fn_804B9B68(void);
extern void fn_804DCA50(void);
extern void fn_804F7EF4(void);
extern void fn_8050284C(void);
extern void fn_8050EAEC(void);
extern void fn_8050EBCC(void);
extern void fn_8050F5AC(void);
extern void fn_8050F668(void);
extern void fn_8050F728(void);
extern void fn_8050F768(void);
extern void fn_8050F7DC(void);
extern void fn_8050F86C(void);
extern void fn_8050F8A4(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068B2A0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80758368[];
extern u8 lbl_80758370[];
extern u8 lbl_80758398[];
extern u8 lbl_807583DC[];
extern u8 lbl_80775A88[];

/* Small data declarations */
extern u32 lbl_8087E100;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_808873A8;
extern u32 lbl_808873B0;
extern u32 lbl_808873B8;
extern u32 lbl_808873C0;
extern u32 lbl_808873C4;
extern u32 lbl_808873C8;

/* Function declarations */
void fn_804B7F88(void);
void fn_804B83F4(void);
void fn_804B8A80(void);
void fn_804B8C54(void);
void fn_804B8E14(void);
void fn_804B9014(void);
void fn_804B9694(void);
void fn_804B988C(void);
void fn_804B9960(void);

asm void fn_804B7F88(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_18
    lbz r0, 0x248(r3)
    mr r19, r3
    cmpwi r0, 0x0
    bne lbl_fn_804B7F88_000003CC
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B7F88_00000454
    bl fn_804AC79C
    cmpwi r3, 0x0
    beq lbl_fn_804B7F88_0000039C
    mr r3, r19
    addi r4, r19, 0x48
    bl fn_804B9B68
    cmplwi r3, 0x1
    bne lbl_fn_804B7F88_00000060
    li r0, 0x1
    stb r0, 0x248(r19)
    b lbl_fn_804B7F88_0000006C
lbl_fn_804B7F88_00000060:
    mr r3, r19
    li r4, 0x2
    bl fn_804B6F08
lbl_fn_804B7F88_0000006C:
    lwz r0, 0x3ac(r19)
    li r4, 0x0
    subf r0, r0, r0
    stw r0, 0x3ac(r19)
    lwz r3, lbl_8087F628
    addi r21, r3, 0x430
    mr r3, r21
    bl fn_8050F5AC
    lis r4, __files@ha
    lis r5, lbl_807583DC@ha
    mr r20, r3
    addi r22, r1, 0x18
    addi r24, r5, lbl_807583DC@l
    addi r25, r4, __files@l
    lis r29, 0xcccd
    lis r23, 0x4000
    li r26, 0x0
    lis r28, 0x1555
    lis r30, 0x2aab
    lis r31, lbl_80775A88@ha
    b lbl_fn_804B7F88_00000318
lbl_fn_804B7F88_000000C0:
    lwz r4, 0x3ac(r19)
    lwz r3, 0x3b0(r19)
    cmplw r4, r3
    bge lbl_fn_804B7F88_000000EC
    addi r4, r4, 0x1
    lwz r3, 0x3a8(r19)
    slwi r0, r4, 2
    stw r4, 0x3ac(r19)
    add r3, r3, r0
    stw r20, -0x4(r3)
    b lbl_fn_804B7F88_00000308
lbl_fn_804B7F88_000000EC:
    subi r0, r23, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_804B7F88_00000110
    addi r4, r24, 0x13a
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804B7F88_00000110:
    addi r3, r19, 0x3b0
    stw r26, 0x18(r1)
    subi r0, r23, 0x1
    stw r26, 0x1c(r1)
    stw r26, 0x20(r1)
    stw r3, 0x24(r1)
    stw r26, 0x28(r1)
    lwz r3, 0x3ac(r19)
    lwz r27, 0x3b0(r19)
    addi r3, r3, 0x1
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_804B7F88_00000160
    addi r4, r24, 0x13a
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804B7F88_00000160:
    addi r0, r28, 0x5555
    cmplw r27, r0
    bge lbl_fn_804B7F88_000001A8
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_804B7F88_0000019C
    addi r3, r1, 0x10
lbl_fn_804B7F88_0000019C:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_804B7F88_000001E4
lbl_fn_804B7F88_000001A8:
    subi r0, r30, 0x5556
    cmplw r27, r0
    bge lbl_fn_804B7F88_000001E0
    addi r3, r27, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_804B7F88_000001D4
    addi r3, r1, 0x10
lbl_fn_804B7F88_000001D4:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_804B7F88_000001E4
lbl_fn_804B7F88_000001E0:
    subi r18, r23, 0x1
lbl_fn_804B7F88_000001E4:
    subi r0, r23, 0x1
    cmplw r18, r0
    ble lbl_fn_804B7F88_00000204
    addi r4, r24, 0x13a
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804B7F88_00000204:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_804B7F88_0000022C
    addi r3, r25, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804B7F88_0000022C:
    lwz r0, 0x1c(r1)
    stw r27, 0x18(r1)
    slwi r3, r0, 2
    stw r18, 0x20(r1)
    lwz r0, 0x3ac(r19)
    stw r0, 0x28(r1)
    slwi r0, r0, 2
    add r0, r27, r0
    stwx r20, r3, r0
    lwz r3, 0x1c(r1)
    lwz r0, 0x28(r1)
    addi r3, r3, 0x1
    stw r3, 0x1c(r1)
    lwz r3, 0x18(r1)
    lwz r4, 0x3ac(r19)
    lwz r20, 0x3a8(r19)
    slwi r4, r4, 2
    add r5, r20, r4
    subf r5, r20, r5
    mr r4, r20
    srawi r5, r5, 2
    addze r27, r5
    subf r0, r27, r0
    stw r0, 0x28(r1)
    slwi r18, r27, 2
    slwi r0, r0, 2
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r20
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x1c(r1)
    cmpwi r22, 0x0
    add r0, r0, r27
    stw r0, 0x1c(r1)
    stw r26, 0x3ac(r19)
    lwz r3, 0x3b0(r19)
    lwz r0, 0x20(r1)
    stw r0, 0x3b0(r19)
    stw r3, 0x20(r1)
    lwz r0, 0x18(r1)
    lwz r3, 0x3a8(r19)
    stw r0, 0x3a8(r19)
    stw r3, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x3ac(r19)
    stw r26, 0x1c(r1)
    beq lbl_fn_804B7F88_00000308
    lwz r3, 0x18(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804B7F88_00000308
    stw r26, 0x1c(r1)
    bl dtor_80084684
lbl_fn_804B7F88_00000308:
    mr r3, r21
    li r4, 0x0
    bl fn_8050F668
    mr r20, r3
lbl_fn_804B7F88_00000318:
    cmpwi r20, -0x1
    bne lbl_fn_804B7F88_000000C0
    lwz r3, 0x2c8(r19)
    cmpwi r3, 0x0
    ble lbl_fn_804B7F88_00000354
    lwz r4, 0x3ac(r19)
    addi r0, r3, 0xa
    cmplw r0, r4
    blt lbl_fn_804B7F88_00000354
    subi r3, r4, 0xa
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    stw r0, 0x2c8(r19)
lbl_fn_804B7F88_00000354:
    mr r3, r19
    bl fn_804B9014
    lwz r3, 0x2b8(r19)
    li r6, 0xa
    lwz r4, 0x2c8(r19)
    lwz r5, 0x3ac(r19)
    bl fn_804A4738
    lwz r3, 0x3ac(r19)
    cmpwi r3, 0x0
    bne lbl_fn_804B7F88_00000388
    li r0, 0x0
    stw r0, 0x2e0(r19)
    b lbl_fn_804B7F88_00000454
lbl_fn_804B7F88_00000388:
    lwz r0, 0x2e0(r19)
    cmplw r0, r3
    ble lbl_fn_804B7F88_00000454
    stw r3, 0x2e0(r19)
    b lbl_fn_804B7F88_00000454
lbl_fn_804B7F88_0000039C:
    lwz r3, lbl_8087F588
    bl fn_804AC7EC
    cmpwi r3, 0x0
    beq lbl_fn_804B7F88_00000454
    mr r3, r19
    li r4, 0x2
    bl fn_804B6F08
    lwz r3, 0x318(r19)
    li r0, -0x1
    stw r3, 0x2e0(r19)
    stw r0, 0x318(r19)
    b lbl_fn_804B7F88_00000454
lbl_fn_804B7F88_000003CC:
    lhz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804B7F88_000003F4
    lwz r3, lbl_8087F610
    lwz r3, 0x514(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804B7F88_000003F4
    bl fn_8050284C
    cmpwi r3, 0x0
    bne lbl_fn_804B7F88_00000454
lbl_fn_804B7F88_000003F4:
    addi r3, r1, 0x14
    li r4, 0xc
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r19
    li r4, 0x2
    bl fn_804B6F08
    lhz r0, 0x48(r19)
    cmpwi r0, 0x0
    beq lbl_fn_804B7F88_0000044C
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_808873A8
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r3, lbl_8087F588
    addi r4, r19, 0x48
    bl fn_804AD1EC
lbl_fn_804B7F88_0000044C:
    li r0, 0x0
    stb r0, 0x248(r19)
lbl_fn_804B7F88_00000454:
    addi r11, r1, 0x70
    bl _restgpr_18
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804B83F4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x60
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    bl _savegpr_25
    lwz r4, lbl_8087F588
    mr r29, r3
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804B83F4_000004E4
    mr r3, r4
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804B83F4_00000AD0
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    lwz r3, lbl_8087F628
    lwz r0, 0xe34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B83F4_00000AD0
    mr r3, r29
    li r4, 0x1
    bl fn_804B6F08
    b lbl_fn_804B83F4_00000AD0
lbl_fn_804B83F4_000004E4:
    lbz r0, 0x248(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B83F4_00000978
    lwz r31, lbl_8087EF70
    li r4, 0x0
    lwz r30, 0x2e4(r3)
    li r5, 0x1a
    mr r3, r31
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B83F4_00000528
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B83F4_00000584
lbl_fn_804B83F4_00000528:
    lwz r0, 0x2e4(r29)
    slwi r0, r0, 2
    add r4, r29, r0
    lwz r3, 0x2e8(r4)
    addi r0, r3, 0x1
    stw r0, 0x2e8(r4)
    lwz r0, 0x2e4(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r0, 0x2e8(r3)
    cmpwi r0, 0x9
    ble lbl_fn_804B83F4_00000560
    li r0, 0x0
    stw r0, 0x2e8(r3)
lbl_fn_804B83F4_00000560:
    li r0, 0x0
    stw r0, 0x2cc(r29)
    addi r3, r1, 0x28
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804B83F4_00000690
lbl_fn_804B83F4_00000584:
    mr r3, r31
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B83F4_000005B4
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B83F4_00000610
lbl_fn_804B83F4_000005B4:
    lwz r0, 0x2e4(r29)
    slwi r0, r0, 2
    add r4, r29, r0
    lwz r3, 0x2e8(r4)
    subi r0, r3, 0x1
    stw r0, 0x2e8(r4)
    lwz r0, 0x2e4(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r0, 0x2e8(r3)
    cmpwi r0, 0x0
    bge lbl_fn_804B83F4_000005EC
    li r0, 0x9
    stw r0, 0x2e8(r3)
lbl_fn_804B83F4_000005EC:
    li r0, 0x0
    stw r0, 0x2d0(r29)
    addi r3, r1, 0x24
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804B83F4_00000690
lbl_fn_804B83F4_00000610:
    mr r3, r31
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B83F4_00000640
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B83F4_00000650
lbl_fn_804B83F4_00000640:
    subic. r30, r30, 0x1
    bge lbl_fn_804B83F4_00000690
    li r30, 0xb
    b lbl_fn_804B83F4_00000690
lbl_fn_804B83F4_00000650:
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804B83F4_00000680
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804B83F4_00000690
lbl_fn_804B83F4_00000680:
    addi r30, r30, 0x1
    cmpwi r30, 0xc
    blt lbl_fn_804B83F4_00000690
    li r30, 0x0
lbl_fn_804B83F4_00000690:
    lwz r0, 0x2e4(r29)
    cmpw r30, r0
    beq lbl_fn_804B83F4_000006B8
    addi r3, r1, 0x20
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    stw r30, 0x2e4(r29)
lbl_fn_804B83F4_000006B8:
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B83F4_000008FC
    li r4, 0x2
    mr r3, r29
    li r6, 0x0
    li r5, 0x0
    li r0, 0xa
    mtctr r4
lbl_fn_804B83F4_000006E8:
    mulhwu r12, r6, r0
    lwz r11, 0x2e8(r3)
    lwz r10, 0x2ec(r3)
    srawi r4, r11, 31
    lwz r9, 0x2f0(r3)
    lwz r8, 0x2f4(r3)
    mullw r28, r5, r0
    lwz r7, 0x2f8(r3)
    lwz r5, 0x2fc(r3)
    addi r3, r3, 0x18
    mulli r30, r6, 0xa
    add r6, r12, r28
    addc r12, r30, r11
    adde r11, r6, r4
    mulhwu r6, r12, r0
    srawi r4, r10, 31
    mullw r11, r11, r0
    mulli r12, r12, 0xa
    add r6, r6, r11
    addc r11, r12, r10
    adde r10, r6, r4
    mulhwu r6, r11, r0
    srawi r4, r9, 31
    mullw r10, r10, r0
    mulli r11, r11, 0xa
    add r6, r6, r10
    addc r10, r11, r9
    adde r9, r6, r4
    mulhwu r6, r10, r0
    srawi r4, r8, 31
    mullw r9, r9, r0
    mulli r10, r10, 0xa
    add r6, r6, r9
    addc r9, r10, r8
    adde r8, r6, r4
    mulhwu r6, r9, r0
    srawi r4, r7, 31
    mullw r8, r8, r0
    mulli r9, r9, 0xa
    add r6, r6, r8
    addc r8, r9, r7
    adde r7, r6, r4
    mulhwu r6, r8, r0
    srawi r4, r5, 31
    mullw r7, r7, r0
    mulli r8, r8, 0xa
    add r7, r6, r7
    addc r6, r8, r5
    adde r5, r7, r4
    bdnz lbl_fn_804B83F4_000006E8
    lwz r3, lbl_8087F628
    li r7, 0x0
    addi r3, r3, 0x430
    bl fn_8050EBCC
    lwz r3, lbl_8087F628
    addi r3, r3, 0x430
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    bne lbl_fn_804B83F4_00000814
    bl fn_8050EAEC
    lwz r3, lbl_8087F628
    li r4, 0x9f0
    addi r3, r3, 0x430
    bl fn_804F7EF4
    li r0, 0x1
    stb r0, 0x248(r29)
    mr r3, r29
    bl fn_804B9694
    addi r3, r1, 0x1c
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804B83F4_0000096C
lbl_fn_804B83F4_00000814:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_808873A8
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    cmpwi r28, 0x3
    bne lbl_fn_804B83F4_00000874
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7ac(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B83F4_00000850
    b lbl_fn_804B83F4_00000854
lbl_fn_804B83F4_00000850:
    la r4, lbl_808813D0
lbl_fn_804B83F4_00000854:
    bl fn_804AD1EC
    addi r3, r1, 0x18
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804B83F4_0000096C
lbl_fn_804B83F4_00000874:
    cmpwi r28, 0x1
    bne lbl_fn_804B83F4_000008B8
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7b4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B83F4_00000894
    b lbl_fn_804B83F4_00000898
lbl_fn_804B83F4_00000894:
    la r4, lbl_808813D0
lbl_fn_804B83F4_00000898:
    bl fn_804AD1EC
    addi r3, r1, 0x14
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804B83F4_0000096C
lbl_fn_804B83F4_000008B8:
    cmpwi r28, 0x2
    bne lbl_fn_804B83F4_0000096C
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7f4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B83F4_000008D8
    b lbl_fn_804B83F4_000008DC
lbl_fn_804B83F4_000008D8:
    la r4, lbl_808813D0
lbl_fn_804B83F4_000008DC:
    bl fn_804AD1EC
    addi r3, r1, 0x10
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804B83F4_0000096C
lbl_fn_804B83F4_000008FC:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804B83F4_0000096C
    li r0, 0x0
    stw r0, 0x2e8(r29)
    addi r3, r1, 0xc
    li r4, 0x2
    stw r0, 0x2ec(r29)
    stw r0, 0x2f0(r29)
    stw r0, 0x2f4(r29)
    stw r0, 0x2f8(r29)
    stw r0, 0x2fc(r29)
    stw r0, 0x300(r29)
    stw r0, 0x304(r29)
    stw r0, 0x308(r29)
    stw r0, 0x30c(r29)
    stw r0, 0x310(r29)
    stw r0, 0x314(r29)
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0x1
    bl fn_804B6F08
lbl_fn_804B83F4_0000096C:
    mr r3, r29
    bl fn_804B9960
    b lbl_fn_804B83F4_000009F0
lbl_fn_804B83F4_00000978:
    lwz r3, lbl_8087F610
    lwz r3, 0x514(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804B83F4_00000994
    bl fn_8050284C
    cmpwi r3, 0x0
    bne lbl_fn_804B83F4_000009F0
lbl_fn_804B83F4_00000994:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_808873A8
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7a4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804B83F4_000009C8
    b lbl_fn_804B83F4_000009CC
lbl_fn_804B83F4_000009C8:
    la r4, lbl_808813D0
lbl_fn_804B83F4_000009CC:
    bl fn_804AD1EC
    addi r3, r1, 0x8
    li r4, 0xc
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r0, 0x0
    stb r0, 0x248(r29)
lbl_fn_804B83F4_000009F0:
    lis r4, lbl_80758368@ha
    lis r3, lbl_807583DC@ha
    lfd f31, lbl_80758368@l(r4)
    mr r26, r29
    addi r31, r3, lbl_807583DC@l
    li r25, 0x0
    lis r28, 0x4330
    li r30, -0x1
lbl_fn_804B83F4_00000A10:
    lwz r3, 0x2cc(r26)
    cmpwi r3, -0x1
    beq lbl_fn_804B83F4_00000AC0
    cmpwi r3, 0x5
    bgt lbl_fn_804B83F4_00000A2C
    mulli r0, r3, 0x33
    b lbl_fn_804B83F4_00000A38
lbl_fn_804B83F4_00000A2C:
    subi r0, r3, 0x5
    mulli r0, r0, 0x33
    subfic r0, r0, 0xff
lbl_fn_804B83F4_00000A38:
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    cmpwi r25, 0x0
    stw r28, 0x30(r1)
    lfd f0, 0x30(r1)
    fsubs f30, f0, f31
    bne lbl_fn_804B83F4_00000A7C
    lwz r4, 0x284(r29)
    addi r3, r31, 0x156
    addi r27, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804B83F4_00000AA8
lbl_fn_804B83F4_00000A7C:
    cmpwi r25, 0x1
    bne lbl_fn_804B83F4_00000AA8
    lwz r4, 0x284(r29)
    addi r3, r31, 0x161
    addi r27, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_804B83F4_00000AA8:
    lwz r3, 0x2cc(r26)
    addi r0, r3, 0x1
    stw r0, 0x2cc(r26)
    cmpwi r0, 0xa
    ble lbl_fn_804B83F4_00000AC0
    stw r30, 0x2cc(r26)
lbl_fn_804B83F4_00000AC0:
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmpwi r25, 0x2
    blt lbl_fn_804B83F4_00000A10
lbl_fn_804B83F4_00000AD0:
    addi r11, r1, 0x60
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804B8A80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_fn_804B8A80_00000B34
lbl_fn_804B8A80_00000B18:
    add r5, r3, r4
    addi r6, r6, 0x1
    lwz r5, 0x328(r5)
    addi r4, r4, 0x4
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_804B8A80_00000B34:
    lwz r0, 0x324(r3)
    cmplw r6, r0
    blt lbl_fn_804B8A80_00000B18
    lwz r4, 0x2bc(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_804B8A80_00000B70
    subi r0, r4, 0x5
    cmplwi r0, 0x1
    ble lbl_fn_804B8A80_00000C9C
    cmpwi r4, 0x3
    beq lbl_fn_804B8A80_00000B7C
    cmpwi r4, 0x4
    beq lbl_fn_804B8A80_00000B98
    b lbl_fn_804B8A80_00000CB8
lbl_fn_804B8A80_00000B70:
    mr r3, r31
    bl fn_804B8C54
    b lbl_fn_804B8A80_00000CB8
lbl_fn_804B8A80_00000B7C:
    mr r3, r31
    bl fn_804B8C54
    lwz r3, lbl_8087F588
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804B8A80_00000CB8
lbl_fn_804B8A80_00000B98:
    lwz r4, 0x24c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x280(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x288(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x28c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x290(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x294(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x298(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x29c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x2a0(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x2a4(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x2a8(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x2ac(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x2b0(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x2b4(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F588
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804B8A80_00000CB8
    lwz r3, 0x284(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804B8A80_00000CB8
lbl_fn_804B8A80_00000C9C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_804B8E14
lbl_fn_804B8A80_00000CB8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B8C54(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    beq lbl_fn_804B8C54_00000E74
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B8C54_00000D54
    lwz r5, 0x2e0(r31)
    lis r4, lbl_807583DC@ha
    addi r4, r4, lbl_807583DC@l
    addi r3, r1, 0x20
    addi r4, r4, 0x18c
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r30, 0x250(r31)
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
lbl_fn_804B8C54_00000D54:
    lwz r4, 0x24c(r31)
    lis r3, lbl_807583DC@ha
    addi r3, r3, lbl_807583DC@l
    lwz r0, 0x38(r4)
    addi r3, r3, 0x198
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x250(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x254(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x258(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x25c(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x260(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x264(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x268(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x26c(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x270(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x274(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x278(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x27c(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x2b8(r31)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x250(r31)
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873C0
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    lwz r3, 0x2b8(r31)
    li r6, 0xa
    lwz r4, 0x2c8(r31)
    lwz r5, 0x3ac(r31)
    bl fn_804A4738
lbl_fn_804B8C54_00000E74:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804B8E14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807583DC@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807583DC@l
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r5, 0x24c(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x250(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x254(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x258(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x25c(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x260(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x264(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x268(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x26c(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x270(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x274(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x278(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x27c(r3)
    addi r3, r4, 0x198
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r4, 0x250(r31)
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873C0
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    lwz r4, 0x320(r31)
    lis r3, lbl_80758368@ha
    li r0, 0x5
    lfd f1, lbl_80758368@l(r3)
    subi r4, r4, 0x1
    mr r5, r31
    stw r4, 0x320(r31)
    li r6, 0x0
    lis r3, 0x4330
    mtctr r0
lbl_fn_804B8E14_00000FC8:
    lwz r4, 0x258(r5)
    lfs f0, 0x100(r4)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r7, 0xc(r1)
    cmpwi r7, 0xc
    bne lbl_fn_804B8E14_00000FE8
    li r7, 0xa
lbl_fn_804B8E14_00000FE8:
    lwz r0, 0x320(r31)
    cmpw r7, r0
    ble lbl_fn_804B8E14_00001018
    cmpwi r7, 0x0
    ble lbl_fn_804B8E14_00001018
    subi r0, r7, 0x1
    stw r3, 0x8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x100(r4)
lbl_fn_804B8E14_00001018:
    lwz r4, 0x25c(r5)
    lfs f0, 0x100(r4)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r7, 0xc(r1)
    cmpwi r7, 0xc
    bne lbl_fn_804B8E14_00001038
    li r7, 0xa
lbl_fn_804B8E14_00001038:
    lwz r0, 0x320(r31)
    cmpw r7, r0
    ble lbl_fn_804B8E14_00001068
    cmpwi r7, 0x0
    ble lbl_fn_804B8E14_00001068
    subi r0, r7, 0x1
    stw r3, 0x8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x100(r4)
lbl_fn_804B8E14_00001068:
    addi r5, r5, 0x8
    addi r6, r6, 0x1
    bdnz lbl_fn_804B8E14_00000FC8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B9014(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x100
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    bl _savegpr_15
    lfs f0, lbl_808873B0
    lis r19, lbl_80758370@ha
    li r20, 0x0
    lwzu r12, lbl_80758370@l(r19)
    lwz r4, lbl_8087F628
    lis r18, lbl_807583DC@ha
    lwz r11, 0x4(r19)
    mr r17, r3
    addi r21, r4, 0x430
    lwz r10, 0x8(r19)
    lwz r9, 0xc(r19)
    addi r18, r18, lbl_807583DC@l
    lwz r8, 0x10(r19)
    addi r3, r18, 0x1a0
    lwz r7, 0x14(r19)
    lwz r6, 0x18(r19)
    lwz r5, 0x1c(r19)
    lwz r4, 0x20(r19)
    lwz r0, 0x24(r19)
    stw r20, 0x70(r1)
    stw r20, 0x74(r1)
    stw r20, 0x78(r1)
    stw r20, 0x7c(r1)
    stw r20, 0x80(r1)
    stw r20, 0x84(r1)
    stw r20, 0x88(r1)
    stw r20, 0x8c(r1)
    stw r20, 0x90(r1)
    stw r20, 0x94(r1)
    stw r20, 0x98(r1)
    stw r20, 0x9c(r1)
    stw r20, 0xa0(r1)
    stw r20, 0xa4(r1)
    stw r20, 0xa8(r1)
    stw r20, 0xac(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stw r12, 0x48(r1)
    lwz r19, 0x250(r17)
    stw r11, 0x4c(r1)
    stw r10, 0x50(r1)
    stw r9, 0x54(r1)
    stw r8, 0x58(r1)
    stw r7, 0x5c(r1)
    stw r6, 0x60(r1)
    stw r5, 0x64(r1)
    stw r4, 0x68(r1)
    stw r0, 0x6c(r1)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r19
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    addi r4, r18, 0x1aa
    lfs f3, 0x20(r1)
    addi r5, r1, 0x30
    lfs f2, 0x24(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    lwz r3, 0x254(r17)
    bl fn_801F4728
    lwz r4, 0x254(r17)
    addi r3, r18, 0x1b5
    addi r16, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r16
    addi r5, r21, 0x1c0
    bl fn_801FEE08
    lwz r16, 0x9f8(r21)
    lwz r19, 0x9fc(r21)
    or. r0, r19, r16
    beq lbl_fn_804B9014_000012AC
    mr r3, r16
    mr r4, r19
    li r6, 0x2710
    li r5, 0x0
    bl __mod2u
    lwz r3, 0x254(r17)
    mr r5, r4
    addi r4, r18, 0x1c3
    li r6, -0x4
    bl fn_801F4CB4
    mr r3, r16
    mr r4, r19
    li r6, 0x2710
    li r5, 0x0
    bl __div2u
    mr r16, r4
    mr r15, r3
    li r6, 0x2710
    li r5, 0x0
    bl __mod2u
    lwz r3, 0x254(r17)
    mr r5, r4
    addi r4, r18, 0x1ce
    li r6, -0x4
    bl fn_801F4CB4
    mr r3, r15
    mr r4, r16
    li r6, 0x2710
    li r5, 0x0
    bl __div2u
    li r6, 0x2710
    li r5, 0x0
    bl __mod2u
    lwz r3, 0x254(r17)
    mr r5, r4
    addi r4, r18, 0x1da
    li r6, -0x4
    bl fn_801F4CB4
    lwz r4, 0x254(r17)
    addi r3, r18, 0x1e5
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873B0
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    b lbl_fn_804B9014_000012CC
lbl_fn_804B9014_000012AC:
    lwz r4, 0x254(r17)
    addi r3, r18, 0x1e5
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873A8
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
lbl_fn_804B9014_000012CC:
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x7
    bne lbl_fn_804B9014_000012F8
    lwz r3, lbl_8087F86C
    lwz r16, 0x924(r3)
    cmpwi r16, 0x0
    beq lbl_fn_804B9014_000012F0
    b lbl_fn_804B9014_00001310
lbl_fn_804B9014_000012F0:
    la r16, lbl_808813D0
    b lbl_fn_804B9014_00001310
lbl_fn_804B9014_000012F8:
    lwz r3, lbl_8087F86C
    lwz r16, 0x944(r3)
    cmpwi r16, 0x0
    beq lbl_fn_804B9014_0000130C
    b lbl_fn_804B9014_00001310
lbl_fn_804B9014_0000130C:
    la r16, lbl_808813D0
lbl_fn_804B9014_00001310:
    lwz r4, 0x254(r17)
    lis r3, lbl_807583DC@ha
    addi r31, r3, lbl_807583DC@l
    addi r3, r31, 0x1ef
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    mr r5, r16
    bl fn_801FEE08
    lfs f31, lbl_808873B0
    mr r23, r17
    addi r24, r1, 0x48
    li r20, 0x0
    la r30, lbl_8087E100
    la r29, lbl_8087E100
    la r28, lbl_8087E100
    la r27, lbl_8087E100
    la r26, lbl_8087E100
    la r25, lbl_8087E100
lbl_fn_804B9014_00001360:
    lwz r0, 0x2c8(r17)
    addi r3, r1, 0x70
    lwz r5, 0x0(r24)
    addi r4, r31, 0x1fd
    add r15, r20, r0
    crclr 6
    bl sprintf
    lwz r18, 0x250(r17)
    addi r3, r1, 0x70
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r18
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addi r4, r31, 0x1aa
    lfs f3, 0xc(r1)
    addi r5, r1, 0x30
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    lwz r3, 0x258(r23)
    bl fn_801F4728
    lwz r0, 0x3ac(r17)
    cmplw r15, r0
    bge lbl_fn_804B9014_00001608
    lwz r4, 0x3a8(r17)
    slwi r22, r15, 2
    mr r3, r21
    lwzx r4, r4, r22
    bl fn_8050F768
    lwz r5, 0x3a8(r17)
    mr r18, r4
    mr r19, r3
    mr r3, r21
    lwzx r4, r5, r22
    bl fn_8050F86C
    cmpwi r3, 0x0
    bne lbl_fn_804B9014_0000144C
    lwz r3, lbl_8087F86C
    lwz r16, 0x94c(r3)
    cmpwi r16, 0x0
    beq lbl_fn_804B9014_00001424
    b lbl_fn_804B9014_00001428
lbl_fn_804B9014_00001424:
    la r16, lbl_808813D0
lbl_fn_804B9014_00001428:
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1b5
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r16
    bl fn_801FEE08
    b lbl_fn_804B9014_000014A8
lbl_fn_804B9014_0000144C:
    lwz r4, 0x3a8(r17)
    mr r3, r21
    lwzx r4, r4, r22
    bl fn_8050F728
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804B9014_00001484
    lwz r3, lbl_8087F86C
    lwz r16, 0x95c(r3)
    cmpwi r16, 0x0
    beq lbl_fn_804B9014_0000147C
    b lbl_fn_804B9014_00001488
lbl_fn_804B9014_0000147C:
    la r16, lbl_808813D0
    b lbl_fn_804B9014_00001488
lbl_fn_804B9014_00001484:
    mr r16, r3
lbl_fn_804B9014_00001488:
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1b5
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r16
    bl fn_801FEE08
lbl_fn_804B9014_000014A8:
    lwz r4, 0x258(r23)
    addi r3, r31, 0x20c
    addi r15, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873A8
    mr r4, r3
    mr r3, r15
    bl fn_801FECE0
    mr r3, r19
    mr r4, r18
    li r6, 0x2710
    li r5, 0x0
    bl __mod2u
    lwz r3, 0x258(r23)
    mr r5, r4
    addi r4, r31, 0x1c3
    li r6, -0x4
    bl fn_801F4CB4
    mr r3, r19
    mr r4, r18
    li r6, 0x2710
    li r5, 0x0
    bl __div2u
    mr r16, r4
    mr r15, r3
    li r6, 0x2710
    li r5, 0x0
    bl __mod2u
    lwz r3, 0x258(r23)
    mr r5, r4
    addi r4, r31, 0x1ce
    li r6, -0x4
    bl fn_801F4CB4
    mr r3, r15
    mr r4, r16
    li r6, 0x2710
    li r5, 0x0
    bl __div2u
    li r6, 0x2710
    li r5, 0x0
    bl __mod2u
    lwz r3, 0x258(r23)
    mr r5, r4
    addi r4, r31, 0x1da
    li r6, -0x4
    bl fn_801F4CB4
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1e5
    addi r15, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873B0
    mr r4, r3
    mr r3, r15
    bl fn_801FECE0
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    blt lbl_fn_804B9014_000015E4
    lwz r4, 0x3a8(r17)
    mr r3, r17
    lwzx r4, r4, r22
    bl fn_804B988C
    lwz r4, lbl_8087F86C
    slwi r0, r3, 3
    add r3, r4, r0
    lwz r15, 0x4c(r3)
    cmpwi r15, 0x0
    beq lbl_fn_804B9014_000015BC
    b lbl_fn_804B9014_000015C0
lbl_fn_804B9014_000015BC:
    la r15, lbl_808813D0
lbl_fn_804B9014_000015C0:
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1ef
    addi r16, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r16
    mr r5, r15
    bl fn_801FEE08
    b lbl_fn_804B9014_000016D8
lbl_fn_804B9014_000015E4:
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1ef
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r30
    bl fn_801FEE08
    b lbl_fn_804B9014_000016D8
lbl_fn_804B9014_00001608:
    lwz r4, 0x258(r23)
    addi r3, r31, 0x20c
    addi r15, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873B0
    mr r4, r3
    mr r3, r15
    bl fn_801FECE0
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1c3
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1ce
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r28
    bl fn_801FEE08
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1da
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r27
    bl fn_801FEE08
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1b5
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r26
    bl fn_801FEE08
    lwz r4, 0x258(r23)
    addi r3, r31, 0x1ef
    addi r15, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r15
    mr r5, r25
    bl fn_801FEE08
    lwz r3, 0x258(r23)
    stfs f31, 0x104(r3)
    lwz r3, 0x258(r23)
    stfs f31, 0x100(r3)
lbl_fn_804B9014_000016D8:
    addi r20, r20, 0x1
    addi r23, r23, 0x4
    cmpwi r20, 0xa
    addi r24, r24, 0x4
    blt lbl_fn_804B9014_00001360
    addi r11, r1, 0x100
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    bl _restgpr_15
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_804B9694(void)
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
    bl _savegpr_23
    lwz r5, lbl_8087F628
    li r0, 0x0
    lis r4, lbl_807583DC@ha
    mr r27, r3
    stw r0, 0x8(r1)
    mr r30, r27
    lfs f28, lbl_808873B0
    addi r29, r5, 0x430
    stw r0, 0xc(r1)
    addi r26, r4, lbl_807583DC@l
    lfs f31, lbl_808873B8
    li r28, 0x0
    stw r0, 0x10(r1)
    la r31, lbl_8087E100
    lfs f30, lbl_808873C8
    stw r0, 0x14(r1)
    lfs f29, lbl_808873C4
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
lbl_fn_804B9694_000017B4:
    lwz r3, 0x2c8(r27)
    lwz r0, 0x3ac(r27)
    add r3, r28, r3
    cmplw r3, r0
    bge lbl_fn_804B9694_000018CC
    lwz r4, 0x3a8(r27)
    slwi r23, r3, 2
    mr r3, r29
    lwzx r4, r4, r23
    bl fn_8050F7DC
    lwz r4, 0x3a8(r27)
    mr r3, r27
    lwzx r4, r4, r23
    bl fn_804B988C
    lwz r24, 0x258(r30)
    mr r25, r3
    cmpwi r24, 0x0
    beq lbl_fn_804B9694_00001818
    mr r3, r24
    li r4, 0x0
    bl fn_800D246C
    stfs f28, 0x104(r24)
    lwz r0, 0xfc(r24)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r24)
lbl_fn_804B9694_00001818:
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    blt lbl_fn_804B9694_0000186C
    lwz r3, lbl_8087F86C
    slwi r0, r25, 3
    add r3, r3, r0
    lwz r24, 0x4c(r3)
    cmpwi r24, 0x0
    beq lbl_fn_804B9694_00001844
    b lbl_fn_804B9694_00001848
lbl_fn_804B9694_00001844:
    la r24, lbl_808813D0
lbl_fn_804B9694_00001848:
    lwz r4, 0x258(r30)
    addi r3, r26, 0x1ef
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    mr r5, r24
    bl fn_801FEE08
    b lbl_fn_804B9694_0000188C
lbl_fn_804B9694_0000186C:
    lwz r4, 0x258(r30)
    addi r3, r26, 0x1ef
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    mr r5, r31
    bl fn_801FEE08
lbl_fn_804B9694_0000188C:
    cmpwi r25, 0x11b
    bne lbl_fn_804B9694_000018A0
    lwz r3, 0x258(r30)
    stfs f29, 0x100(r3)
    b lbl_fn_804B9694_000018BC
lbl_fn_804B9694_000018A0:
    cmpwi r25, 0x11c
    bne lbl_fn_804B9694_000018B4
    lwz r3, 0x258(r30)
    stfs f30, 0x100(r3)
    b lbl_fn_804B9694_000018BC
lbl_fn_804B9694_000018B4:
    lwz r3, 0x258(r30)
    stfs f31, 0x100(r3)
lbl_fn_804B9694_000018BC:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0xa
    blt lbl_fn_804B9694_000017B4
lbl_fn_804B9694_000018CC:
    addi r11, r1, 0x70
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    bl _restgpr_23
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804B988C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r3, lbl_8087F628
    addi r30, r3, 0x430
    mr r3, r30
    bl fn_8050F7DC
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_804B988C_00001944
    li r3, 0x11b
    b lbl_fn_804B988C_000019BC
lbl_fn_804B988C_00001944:
    mr r3, r30
    mr r4, r29
    bl fn_8050F8A4
    cmpwi r3, 0x0
    beq lbl_fn_804B988C_00001960
    li r3, 0x11b
    b lbl_fn_804B988C_000019BC
lbl_fn_804B988C_00001960:
    cmpwi r31, 0x4
    beq lbl_fn_804B988C_000019B0
    lwz r3, lbl_8087F610
    mr r4, r29
    li r5, 0x1
    bl fn_804DCA50
    cmpwi r3, 0x0
    bne lbl_fn_804B988C_000019B0
    lwz r3, lbl_8087F610
    mr r4, r29
    li r5, 0x0
    bl fn_804DCA50
    cmpwi r3, 0x0
    bne lbl_fn_804B988C_000019B0
    lwz r3, lbl_8087F610
    mr r4, r29
    li r5, 0x2
    bl fn_804DCA50
    cmpwi r3, 0x0
    beq lbl_fn_804B988C_000019B8
lbl_fn_804B988C_000019B0:
    li r3, 0x11c
    b lbl_fn_804B988C_000019BC
lbl_fn_804B988C_000019B8:
    li r3, 0x121
lbl_fn_804B988C_000019BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B9960(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_24
    li r0, 0x10
    li r4, 0x0
    mr r27, r3
    stw r4, 0x60(r1)
    addi r3, r1, 0x9c
    stw r4, 0x64(r1)
    stw r4, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r4, 0x70(r1)
    stw r4, 0x74(r1)
    stw r4, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r4, 0x84(r1)
    stw r4, 0x88(r1)
    stw r4, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r4, 0x94(r1)
    stw r4, 0x98(r1)
    stw r4, 0x9c(r1)
    mtctr r0
lbl_fn_804B9960_00001A40:
    stw r4, 0x4(r3)
    stwu r4, 0x8(r3)
    bdnz lbl_fn_804B9960_00001A40
    lis r24, lbl_80758398@ha
    lwzu r25, lbl_80758398@l(r24)
    lfs f0, lbl_808873B0
    lis r26, lbl_807583DC@ha
    lwz r12, 0x4(r24)
    addi r26, r26, lbl_807583DC@l
    lwz r11, 0x8(r24)
    mr r29, r27
    lwz r10, 0xc(r24)
    addi r31, r26, 0x215
    lwz r9, 0x10(r24)
    addi r30, r1, 0x30
    lwz r8, 0x14(r24)
    li r28, 0x0
    lwz r7, 0x18(r24)
    lwz r6, 0x1c(r24)
    lwz r5, 0x20(r24)
    lwz r4, 0x24(r24)
    lwz r3, 0x28(r24)
    lwz r0, 0x2c(r24)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stw r25, 0x30(r1)
    stw r12, 0x34(r1)
    stw r11, 0x38(r1)
    stw r10, 0x3c(r1)
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
lbl_fn_804B9960_00001AE0:
    lwz r5, 0x0(r30)
    addi r3, r1, 0x60
    addi r4, r26, 0x1fd
    crclr 6
    bl sprintf
    lwz r24, 0x280(r27)
    addi r3, r1, 0x60
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r24
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addi r4, r26, 0x219
    lfs f3, 0xc(r1)
    addi r5, r1, 0x1c
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    lwz r3, 0x288(r29)
    bl fn_801F4728
    lwz r3, 0x2e8(r29)
    addi r4, r1, 0xa0
    li r5, 0xa
    bl fn_8068B2A0
    lwz r4, 0x288(r29)
    mr r3, r31
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    addi r5, r1, 0xa0
    bl fn_801FEE08
    lwz r0, 0x2e4(r27)
    cmpw r28, r0
    bne lbl_fn_804B9960_00001BB4
    lwz r3, 0x284(r27)
    addi r4, r26, 0x219
    addi r5, r1, 0x1c
    bl fn_801F4728
    lwz r4, 0x284(r27)
    addi r3, r26, 0x215
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    addi r5, r1, 0xa0
    bl fn_801FEE08
lbl_fn_804B9960_00001BB4:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0xc
    addi r30, r30, 0x4
    blt lbl_fn_804B9960_00001AE0
    addi r11, r1, 0x140
    bl _restgpr_24
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}
