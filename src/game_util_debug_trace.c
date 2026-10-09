#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004ECC0(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6E4(void);
extern void fn_800DCA6C(void);
extern void fn_800EFC64(void);
extern void fn_800EFE3C(void);
extern void fn_800EFEA0(void);
extern void fn_8016F3D0(void);
extern void fn_8017639C(void);
extern void fn_801763E0(void);
extern void fn_80178864(void);
extern void fn_801F6C80(void);
extern void fn_801F7590(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_80206C50(void);
extern void fn_80219E6C(void);
extern void fn_8021A4E0(void);
extern void fn_8021A960(void);
extern void fn_8021A984(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80444BE8(void);
extern void fn_80444C48(void);
extern void fn_80444C50(void);
extern void fn_80491D50(void);
extern void fn_80491DF8(void);
extern void fn_80581FDC(void);
extern void fn_8058DB14(void);
extern void fn_8059A29C(void);
extern void fn_8059D3B4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9920(void);
extern void fn_806952C4(void);
extern void fn_80695AD0(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80796AFC[];
extern u8 lbl_80761D5C[];
extern u8 lbl_80766768[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80796ACC[];
extern u8 lbl_80796AF0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F558;
extern u32 lbl_8087F9E8;
extern u32 lbl_808813D0;
extern u32 lbl_80888150;
extern u32 lbl_80888154;
extern u32 lbl_80888178;
extern u32 lbl_8088817C;
extern u32 lbl_80888180;
extern u32 lbl_80888184;
extern u32 lbl_80888188;
extern u32 lbl_8088818C;

/* Function declarations */
void fn_80598534(void);
void fn_805987C8(void);
void fn_80598870(void);
void fn_80598878(void);
void fn_80598904(void);
void fn_805989A8(void);
void fn_805991E4(void);
void fn_80599458(void);
void fn_80599C70(void);
void fn_80599C94(void);
void fn_80599D64(void);

asm void fn_80598534(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    lwz r0, 0x38(r4)
    cmpwi r5, 0x0
    mr r30, r4
    mr r25, r5
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    mr r31, r6
    mr r26, r7
    mr r27, r8
    li r28, 0x0
    beq lbl_fn_80598534_000001D8
    cmpwi r9, 0x0
    bne lbl_fn_80598534_00000110
    lwz r3, 0x4(r5)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_80598534_000000A0
    lwz r3, 0xb8(r3)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r3, r0, 3
    addi r5, r4, 0x4
    lwzx r0, r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_80598534_00000084
    add r3, r4, r3
    lwz r5, 0x4(r3)
    b lbl_fn_80598534_00000088
lbl_fn_80598534_00000084:
    la r5, lbl_808813D0
lbl_fn_80598534_00000088:
    lis r4, lbl_80761D5C@ha
    mr r3, r30
    addi r4, r4, lbl_80761D5C@l
    addi r4, r4, 0x380
    bl fn_801F837C
    b lbl_fn_80598534_000000C0
lbl_fn_80598534_000000A0:
    lis r4, lbl_80761D5C@ha
    lis r5, lbl_80796ACC@ha
    addi r4, r4, lbl_80761D5C@l
    mr r3, r30
    addi r5, r5, lbl_80796ACC@l
    addi r4, r4, 0x380
    addi r5, r5, 0x1a
    bl fn_801F837C
lbl_fn_80598534_000000C0:
    lis r28, lbl_80761D5C@ha
    lis r29, lbl_80796ACC@ha
    addi r28, r28, lbl_80761D5C@l
    mr r3, r30
    addi r29, r29, lbl_80796ACC@l
    addi r4, r28, 0x389
    addi r5, r29, 0x20
    bl fn_801F837C
    lfs f1, lbl_80888150
    mr r3, r30
    addi r4, r28, 0x391
    bl fn_801F6C80
    mr r3, r30
    addi r4, r28, 0x39a
    addi r5, r29, 0x10
    bl fn_801F837C
    lwz r3, lbl_8087F4F0
    bl fn_80444C48
    mr r28, r3
    b lbl_fn_80598534_000001D8
lbl_fn_80598534_00000110:
    lis r29, lbl_80761D5C@ha
    lwz r5, 0x8(r5)
    addi r29, r29, lbl_80761D5C@l
    mr r3, r30
    addi r4, r29, 0x380
    bl fn_801F837C
    cmpwi r26, 0x0
    bge lbl_fn_80598534_0000014C
    lis r5, lbl_80796ACC@ha
    mr r3, r30
    addi r5, r5, lbl_80796ACC@l
    addi r4, r29, 0x389
    addi r5, r5, 0x20
    bl fn_801F837C
    b lbl_fn_80598534_00000160
lbl_fn_80598534_0000014C:
    mr r3, r30
    mr r5, r26
    addi r4, r29, 0x389
    li r6, 0x0
    bl fn_801F8598
lbl_fn_80598534_00000160:
    cmpwi r27, 0x0
    bge lbl_fn_80598534_0000019C
    lis r29, lbl_80761D5C@ha
    lfs f1, lbl_80888150
    addi r29, r29, lbl_80761D5C@l
    mr r3, r30
    addi r4, r29, 0x391
    bl fn_801F6C80
    lis r5, lbl_80796ACC@ha
    mr r3, r30
    addi r5, r5, lbl_80796ACC@l
    addi r4, r29, 0x39a
    addi r5, r5, 0x10
    bl fn_801F837C
    b lbl_fn_80598534_000001C8
lbl_fn_80598534_0000019C:
    lis r29, lbl_80761D5C@ha
    lfs f1, lbl_80888154
    addi r29, r29, lbl_80761D5C@l
    mr r3, r30
    addi r4, r29, 0x391
    bl fn_801F6C80
    mr r3, r30
    mr r5, r27
    addi r4, r29, 0x39a
    li r6, 0x0
    bl fn_801F8598
lbl_fn_80598534_000001C8:
    lwz r3, lbl_8087F4F0
    mr r4, r25
    bl fn_80444BE8
    mr r28, r3
lbl_fn_80598534_000001D8:
    cmpwi r31, 0x0
    bge lbl_fn_80598534_00000214
    lis r29, lbl_80761D5C@ha
    lfs f1, lbl_80888150
    addi r29, r29, lbl_80761D5C@l
    mr r3, r30
    addi r4, r29, 0x39e
    bl fn_801F6C80
    lis r5, lbl_80796ACC@ha
    mr r3, r30
    addi r5, r5, lbl_80796ACC@l
    addi r4, r29, 0x3a8
    addi r5, r5, 0x10
    bl fn_801F837C
    b lbl_fn_80598534_00000240
lbl_fn_80598534_00000214:
    lis r29, lbl_80761D5C@ha
    lfs f1, lbl_80888154
    addi r29, r29, lbl_80761D5C@l
    mr r3, r30
    addi r4, r29, 0x39e
    bl fn_801F6C80
    mr r3, r30
    mr r5, r31
    addi r4, r29, 0x3a8
    li r6, 0x0
    bl fn_801F8598
lbl_fn_80598534_00000240:
    lwz r4, lbl_8087F4F0
    mr r5, r28
    addi r3, r1, 0x18
    bl fn_80444C50
    addi r3, r1, 0x18
    lis r4, lbl_80761D5C@ha
    addi r5, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    addi r4, r4, lbl_80761D5C@l
    psq_st f1, 0x0(r5), 0, 0
    mr r3, r30
    addi r4, r4, 0x3ae
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    addi r11, r1, 0x50
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805987C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xe4(r3)
    cmpwi r0, 0x7
    bne lbl_fn_805987C8_0000031C
    bl fn_8058DB14
    addis r4, r31, 0x2
    lwz r3, 0x60a8(r4)
    lwz r0, 0x5b04(r4)
    stw r3, 0x5b08(r4)
    cmpw r0, r3
    blt lbl_fn_805987C8_000002E0
    subi r3, r3, 0x1
    srawi r0, r3, 31
    andc r0, r3, r0
    stw r0, 0x5b04(r4)
lbl_fn_805987C8_000002E0:
    addis r5, r31, 0x2
    lwz r6, 0x5b10(r5)
    lwz r0, 0x5b04(r5)
    cmpw r0, r6
    blt lbl_fn_805987C8_00000328
    lwz r0, 0x5b0c(r5)
    lwz r7, 0x5b08(r5)
    add r3, r6, r0
    subi r4, r7, 0x1
    subi r0, r3, 0x1
    cmpw r4, r0
    bgt lbl_fn_805987C8_00000328
    subf r0, r6, r7
    stw r0, 0x5b0c(r5)
    b lbl_fn_805987C8_00000328
lbl_fn_805987C8_0000031C:
    cmpwi r0, 0x5
    bne lbl_fn_805987C8_00000328
    bl fn_80581FDC
lbl_fn_805987C8_00000328:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80598870(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_80598878(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f1, lbl_80888178
    stw r0, 0x14(r1)
    li r0, 0x3
    lfs f0, lbl_8088817C
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x20(r3)
    stfs f1, 0x24(r3)
    stfs f0, 0x28(r3)
    stw r31, 0x60(r3)
    addi r3, r3, 0x64
    bl fn_800CB360
    stw r31, 0x68(r30)
    addi r3, r30, 0x80
    stw r31, 0x7c(r30)
    bl fn_8021A4E0
    stw r31, 0x13c(r30)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80598904(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80598904_00000454
    addic. r31, r3, 0x68
    beq lbl_fn_80598904_00000438
    beq lbl_fn_80598904_00000438
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80598904_00000438
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80598904_00000430
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80598904_00000430:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80598904_00000438:
    addi r3, r29, 0x64
    li r4, -0x1
    bl fn_800CB3A0
    cmpwi r30, 0x0
    ble lbl_fn_80598904_00000454
    mr r3, r29
    bl dtor_80084684
lbl_fn_80598904_00000454:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805989A8(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    bl _savegpr_26
    fmr f31, f1
    cmpwi r4, 0x0
    mr r28, r3
    mr r29, r4
    mr r26, r6
    mr r30, r7
    mr r31, r8
    mr r27, r9
    beq lbl_fn_805989A8_00000C90
    cmpwi r5, 0x0
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    beq lbl_fn_805989A8_000004D8
    mr r3, r5
    mr r4, r28
    bl fn_8017639C
lbl_fn_805989A8_000004D8:
    stw r26, 0xc(r28)
    li r0, 0x0
    lwz r3, 0x4(r28)
    lfs f0, 0x58(r3)
    stfs f0, 0x5c(r28)
    stfs f31, 0x28(r28)
    stw r0, 0x60(r28)
    stw r0, 0x8(r1)
    lwz r6, 0x0(r27)
    cntlzw r0, r6
    srwi. r0, r0, 5
    bne lbl_fn_805989A8_00000524
    stw r6, 0x8(r1)
    addi r3, r27, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805989A8_00000524:
    addi r3, r28, 0x68
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_805989A8_0000068C
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cntlzw r0, r3
    srwi. r0, r0, 5
    bne lbl_fn_805989A8_0000056C
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805989A8_0000056C:
    addi r3, r28, 0x68
    addi r0, r1, 0x8
    cmplw r3, r0
    bne lbl_fn_805989A8_00000580
    b lbl_fn_805989A8_000005E0
lbl_fn_805989A8_00000580:
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805989A8_000005B4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805989A8_000005AC
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805989A8_000005AC:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_805989A8_000005B4:
    lwz r6, 0x68(r28)
    cntlzw r0, r6
    srwi. r0, r0, 5
    bne lbl_fn_805989A8_000005E0
    stw r6, 0x8(r1)
    addi r3, r28, 0x6c
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805989A8_000005E0:
    addi r3, r1, 0x1c
    addi r0, r28, 0x68
    cmplw r3, r0
    bne lbl_fn_805989A8_000005F4
    b lbl_fn_805989A8_00000658
lbl_fn_805989A8_000005F4:
    lwz r3, 0x68(r28)
    cmpwi r3, 0x0
    beq lbl_fn_805989A8_00000628
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805989A8_00000620
    addi r3, r28, 0x6c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805989A8_00000620:
    li r0, 0x0
    stw r0, 0x68(r28)
lbl_fn_805989A8_00000628:
    lwz r3, 0x1c(r1)
    cntlzw r0, r3
    srwi. r0, r0, 5
    bne lbl_fn_805989A8_00000658
    stw r3, 0x68(r28)
    addi r3, r1, 0x20
    addi r4, r28, 0x6c
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805989A8_00000658:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805989A8_0000068C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805989A8_00000684
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805989A8_00000684:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_805989A8_0000068C:
    addic. r3, r1, 0x8
    beq lbl_fn_805989A8_000006C8
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805989A8_000006C8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805989A8_000006C0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805989A8_000006C0:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_805989A8_000006C8:
    li r0, 0x0
    stw r0, 0x7c(r28)
    lwz r3, 0x4(r28)
    stw r0, 0x13c(r28)
    lbz r0, 0x2(r3)
    extsb. r0, r0
    bne lbl_fn_805989A8_0000070C
    lwz r3, 0xc(r28)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x18(r28)
    psq_st f1, 0x10(r28), 0, 0
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x24(r28)
    psq_st f1, 0x1c(r28), 0, 0
    b lbl_fn_805989A8_00000788
lbl_fn_805989A8_0000070C:
    cmpwi r0, 0x4
    bne lbl_fn_805989A8_0000073C
    lwz r3, 0x8(r28)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x18(r28)
    psq_st f1, 0x10(r28), 0, 0
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x24(r28)
    psq_st f1, 0x1c(r28), 0, 0
    b lbl_fn_805989A8_00000788
lbl_fn_805989A8_0000073C:
    cmpwi r0, 0x3
    bne lbl_fn_805989A8_00000768
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    psq_st f1, 0x10(r28), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f2, 0x18(r28)
    lfs f2, 0x8(r31)
    psq_st f1, 0x1c(r28), 0, 0
    stfs f2, 0x24(r28)
    b lbl_fn_805989A8_00000788
lbl_fn_805989A8_00000768:
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    psq_st f1, 0x10(r28), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f2, 0x18(r28)
    lfs f2, 0x8(r31)
    psq_st f1, 0x1c(r28), 0, 0
    stfs f2, 0x24(r28)
lbl_fn_805989A8_00000788:
    lfs f7, lbl_80888178
    addi r31, r28, 0x2c
    lfs f0, lbl_8088817C
    addi r30, r1, 0x150
    stfs f7, 0x58(r28)
    stfs f7, 0x50(r28)
    stfs f7, 0x4c(r28)
    stfs f7, 0x48(r28)
    stfs f7, 0x44(r28)
    stfs f7, 0x3c(r28)
    stfs f7, 0x38(r28)
    stfs f7, 0x34(r28)
    stfs f7, 0x30(r28)
    stfs f0, 0x54(r28)
    stfs f0, 0x40(r28)
    stfs f0, 0x2c(r28)
    stfs f7, 0x17c(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f7, 0x168(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x15c(r1)
    stfs f7, 0x158(r1)
    stfs f7, 0x154(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x150(r1)
    lfs f1, 0x24(r28)
    fcmpu cr0, f7, f1
    beq lbl_fn_805989A8_00000854
    addi r3, r1, 0x60
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    addi r3, r1, 0x30
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_805989A8_00000854:
    lfs f0, lbl_80888178
    lfs f1, 0x20(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_805989A8_000008B4
    addi r3, r1, 0xc0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc0
    addi r5, r1, 0x90
    bl fn_805F89F0
    addi r3, r1, 0x90
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_805989A8_000008B4:
    lfs f0, lbl_80888178
    lfs f1, 0x1c(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_805989A8_00000914
    addi r3, r1, 0x120
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    addi r3, r1, 0xf0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_805989A8_00000914:
    mr r3, r31
    mr r4, r30
    addi r5, r1, 0x180
    bl fn_805F89F0
    addi r3, r1, 0x180
    lfs f8, 0x10(r28)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0xc
    psq_l f2, 0x8(r3), 0, 0
    addi r5, r28, 0x90
    psq_l f3, 0x10(r3), 0, 0
    addi r4, r29, 0x10
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    lfs f0, 0x18(r28)
    psq_st f2, 0x8(r31), 0, 0
    lfs f7, 0x14(r28)
    psq_st f4, 0x18(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    stfs f8, 0x38(r28)
    stfs f7, 0x48(r28)
    stfs f0, 0x58(r28)
    lbz r3, 0x0(r29)
    stb r3, 0x80(r28)
    lbz r3, 0x1(r29)
    stb r3, 0x81(r28)
    lbz r3, 0x2(r29)
    stb r3, 0x82(r28)
    lbz r3, 0x3(r29)
    stb r3, 0x83(r28)
    lwz r3, 0x4(r29)
    stw r3, 0x84(r28)
    lwz r3, 0x8(r29)
    stw r3, 0x88(r28)
    lwz r3, 0xc(r29)
    stw r3, 0x8c(r28)
    lwz r3, 0x10(r29)
    stw r3, 0x90(r28)
    mtctr r0
lbl_fn_805989A8_000009C0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_805989A8_000009C0
    lwz r4, 0x74(r29)
    lwz r0, 0x78(r29)
    stw r0, 0xf8(r28)
    lwz r3, 0x4(r28)
    stw r4, 0xf4(r28)
    lwz r4, 0x7c(r29)
    lwz r0, 0x80(r29)
    stw r0, 0x100(r28)
    stw r4, 0xfc(r28)
    lwz r4, 0x84(r29)
    lwz r0, 0x88(r29)
    stw r0, 0x108(r28)
    stw r4, 0x104(r28)
    lwz r0, 0x8c(r29)
    stw r0, 0x10c(r28)
    lwz r4, 0x90(r29)
    lwz r0, 0x94(r29)
    stw r0, 0x114(r28)
    stw r4, 0x110(r28)
    lwz r4, 0x98(r29)
    lwz r0, 0x9c(r29)
    stw r0, 0x11c(r28)
    stw r4, 0x118(r28)
    lwz r4, 0xa0(r29)
    lwz r0, 0xa4(r29)
    stw r0, 0x124(r28)
    stw r4, 0x120(r28)
    lwz r0, 0xa8(r29)
    stw r0, 0x128(r28)
    lwz r0, 0xac(r29)
    stw r0, 0x12c(r28)
    lwz r0, 0xb0(r29)
    stw r0, 0x130(r28)
    lwz r4, 0xb4(r29)
    lwz r0, 0xb8(r29)
    stw r0, 0x138(r28)
    stw r4, 0x134(r28)
    bl fn_8021A960
    cmpwi r3, 0x0
    bne lbl_fn_805989A8_00000A84
    lwz r3, 0x4(r28)
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_805989A8_00000C70
lbl_fn_805989A8_00000A84:
    lwz r3, 0x4(r28)
    li r0, 0x2
    mr r4, r28
    li r5, 0x0
    lwz r3, 0x5c(r3)
    stw r3, 0xdc(r28)
    mtctr r0
lbl_fn_805989A8_00000AA0:
    lwz r3, 0x118(r4)
    cmpwi r3, 0x0
    ble lbl_fn_805989A8_00000AC8
    cmpwi r3, 0x5
    li r0, 0x5
    bge lbl_fn_805989A8_00000ABC
    mr r0, r3
lbl_fn_805989A8_00000ABC:
    neg r0, r0
    stw r0, 0x118(r4)
    b lbl_fn_805989A8_00000AE0
lbl_fn_805989A8_00000AC8:
    cmpwi r3, -0x5
    li r0, -0x5
    ble lbl_fn_805989A8_00000AD8
    mr r0, r3
lbl_fn_805989A8_00000AD8:
    neg r0, r0
    stw r0, 0x118(r4)
lbl_fn_805989A8_00000AE0:
    lwz r3, 0x11c(r4)
    cmpwi r3, 0x0
    ble lbl_fn_805989A8_00000B08
    cmpwi r3, 0x5
    li r0, 0x5
    bge lbl_fn_805989A8_00000AFC
    mr r0, r3
lbl_fn_805989A8_00000AFC:
    neg r0, r0
    stw r0, 0x11c(r4)
    b lbl_fn_805989A8_00000B20
lbl_fn_805989A8_00000B08:
    cmpwi r3, -0x5
    li r0, -0x5
    ble lbl_fn_805989A8_00000B18
    mr r0, r3
lbl_fn_805989A8_00000B18:
    neg r0, r0
    stw r0, 0x11c(r4)
lbl_fn_805989A8_00000B20:
    addi r4, r4, 0x8
    addi r5, r5, 0x1
    bdnz lbl_fn_805989A8_00000AA0
    lbz r0, 0x81(r28)
    extsb r0, r0
    cmpwi r0, 0x5
    bne lbl_fn_805989A8_00000BBC
    li r0, 0x4
    stb r0, 0x81(r28)
    li r3, 0x694
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_805989A8_00000C70
    lwz r0, 0x4(r3)
    addi r4, r3, 0x74
    stw r0, 0x84(r28)
    li r5, 0x1c
    lwz r0, 0x8(r3)
    stw r0, 0x88(r28)
    lwz r0, 0xc(r3)
    stw r0, 0x8c(r28)
    lwz r0, 0x64(r3)
    stw r0, 0xe4(r28)
    lwz r0, 0x6c(r3)
    stw r0, 0xec(r28)
    lwz r0, 0x70(r3)
    stw r0, 0xf0(r28)
    lbz r0, 0x2(r3)
    stb r0, 0x82(r28)
    lwz r0, 0x90(r3)
    stw r0, 0x110(r28)
    lwz r0, 0x94(r3)
    stw r0, 0x114(r28)
    lwz r0, 0xac(r3)
    addi r3, r28, 0xf4
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12c(r28)
    bl memcpy
    b lbl_fn_805989A8_00000C70
lbl_fn_805989A8_00000BBC:
    cmpwi r0, 0x4
    bne lbl_fn_805989A8_00000C70
    li r0, 0x5
    stb r0, 0x81(r28)
    li r3, 0x7ec
    bl fn_80219E6C
    mr r30, r3
    li r3, 0x4ef8
    bl fn_80219E6C
    cmpwi r30, 0x0
    beq lbl_fn_805989A8_00000C70
    cmpwi r3, 0x0
    beq lbl_fn_805989A8_00000C70
    lwz r0, 0x4(r3)
    addi r4, r30, 0x74
    stw r0, 0x84(r28)
    li r5, 0x1c
    lwz r0, 0x8(r3)
    stw r0, 0x88(r28)
    lwz r0, 0xc(r3)
    addi r3, r28, 0xf4
    stw r0, 0x8c(r28)
    lwz r0, 0x64(r30)
    stw r0, 0xe4(r28)
    lwz r0, 0x6c(r30)
    stw r0, 0xec(r28)
    lwz r0, 0x70(r30)
    stw r0, 0xf0(r28)
    lbz r0, 0x2(r30)
    stb r0, 0x82(r28)
    lwz r0, 0x90(r30)
    stw r0, 0x110(r28)
    lwz r0, 0x94(r30)
    stw r0, 0x114(r28)
    lwz r0, 0xac(r30)
    stw r0, 0x12c(r28)
    bl memcpy
    lwz r0, 0xac(r29)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x20
    bne lbl_fn_805989A8_00000C70
    lfs f0, 0x58(r30)
    stfs f0, 0xd8(r28)
    lwz r0, 0x5c(r30)
    stw r0, 0xdc(r28)
lbl_fn_805989A8_00000C70:
    lwz r0, 0xac(r29)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_805989A8_00000C90
    lwz r3, lbl_8087F9E8
    lwz r4, 0x8(r28)
    bl fn_8059D3B4
lbl_fn_805989A8_00000C90:
    addi r11, r1, 0x1d0
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    bl _restgpr_26
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_805991E4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805991E4_00000CF4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
    b lbl_fn_805991E4_00000D10
lbl_fn_805991E4_00000CF4:
    lis r5, lbl_80796AF0@ha
    lwzu r4, lbl_80796AF0@l(r5)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
lbl_fn_805991E4_00000D10:
    lwz r5, 0x30(r1)
    addi r3, r1, 0x24
    lwz r4, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_805991E4_00000E28
    lwz r0, 0x68(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805991E4_00000E10
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x18(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x1c(r1)
    mr r30, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_805991E4_00000DB4
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_805991E4_00000DB4:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_805991E4_00000DC8
    bl fn_80084C24
lbl_fn_805991E4_00000DC8:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x1c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x18(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x18
    beq lbl_fn_805991E4_00000E10
    addic. r3, r3, 0x4
    beq lbl_fn_805991E4_00000E10
    beq lbl_fn_805991E4_00000E10
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805991E4_00000E10
    bl fn_806952C4
lbl_fn_805991E4_00000E10:
    lwz r5, 0x68(r31)
    mr r4, r31
    addi r3, r31, 0x6c
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_805991E4_00000E28:
    lwz r5, 0x4(r31)
    mr r4, r31
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    lwz r5, 0x4(r5)
    bl fn_80239DAC
    addi r3, r31, 0x64
    li r4, 0x1e
    li r5, 0x0
    bl fn_800CB5C8
    lwz r0, 0x7c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805991E4_00000E8C
    lwz r3, lbl_8087F3C0
    li r0, 0x1
    addi r4, r31, 0x2c
    li r5, 0x1
    stw r0, 0xd0(r3)
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xd0(r3)
    stw r0, 0x7c(r31)
lbl_fn_805991E4_00000E8C:
    lwz r3, 0x8(r31)
    li r0, 0x3
    stw r0, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805991E4_00000EC4
    mr r4, r31
    bl fn_801763E0
    lwz r4, 0x4(r31)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1774
    bne lbl_fn_805991E4_00000EC4
    lwz r3, 0x8(r31)
    mr r5, r3
    bl fn_80178864
lbl_fn_805991E4_00000EC4:
    lwz r3, 0x68(r31)
    li r0, 0x0
    stw r0, 0x8(r31)
    cmpwi r3, 0x0
    stw r0, 0xc(r31)
    stw r0, 0x4(r31)
    stw r0, 0x60(r31)
    beq lbl_fn_805991E4_00000F0C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805991E4_00000F04
    addi r3, r31, 0x6c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805991E4_00000F04:
    li r0, 0x0
    stw r0, 0x68(r31)
lbl_fn_805991E4_00000F0C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80599458(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stw r31, 0x23c(r1)
    stw r30, 0x238(r1)
    mr r30, r3
    stw r29, 0x234(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80599458_00001204
    li r0, 0x1
    stw r0, 0x0(r3)
    lwz r3, 0x4(r3)
    lwz r3, 0xb0(r3)
    bl fn_800EFC64
    lfs f8, lbl_80888180
    mr r31, r3
    lfs f7, 0x5c(r30)
    lfs f31, lbl_8088817C
    fcmpo cr0, f8, f7
    cror eq, lt, eq
    bne lbl_fn_80599458_00000F98
    lfs f0, lbl_80888184
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80599458_00000F98
    fdivs f31, f7, f8
lbl_fn_80599458_00000F98:
    lwz r4, 0x4(r30)
    lfs f0, 0x28(r30)
    lbz r0, 0x2(r4)
    fmuls f31, f31, f0
    extsb r5, r0
    cmplwi r5, 0x9
    bgt lbl_fn_80599458_00001184
    lis r4, jumptable_80796AFC@ha
    slwi r0, r5, 2
    addi r4, r4, jumptable_80796AFC@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r3, 0x0
    beq lbl_fn_80599458_00001184
    lwz r4, 0xc(r30)
    addi r5, r1, 0x98
    lfs f0, lbl_80888188
    addi r3, r1, 0x88
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0xa0(r1)
    lwz r4, lbl_8087F558
    psq_st f1, 0x0(r5), 0, 0
    stfs f0, 0xa4(r1)
    bl fn_80491D50
    lwz r4, 0x4(r30)
    mr r3, r30
    lwz r4, 0x4(r4)
    bl fn_80232B7C
    lwz r5, 0xc(r30)
    lis r7, lbl_807C7030@ha
    lwz r3, lbl_8087F3C0
    li r0, -0x1
    fmr f1, f31
    addi r7, r7, lbl_807C7030@l
    stw r0, 0x8(r1)
    li r0, 0x1
    mr r4, r31
    mr r8, r7
    stw r0, 0xc(r1)
    addi r5, r5, 0xb0
    addi r9, r1, 0x88
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    b lbl_fn_80599458_00001184
    cmpwi r3, 0x0
    beq lbl_fn_80599458_00001184
    lwz r4, 0xc(r30)
    addi r5, r1, 0x78
    lfs f0, lbl_80888188
    addi r3, r1, 0x68
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x80(r1)
    lwz r4, lbl_8087F558
    psq_st f1, 0x0(r5), 0, 0
    stfs f0, 0x84(r1)
    bl fn_80491D50
    lwz r4, 0x4(r30)
    mr r3, r30
    lwz r4, 0x4(r4)
    bl fn_80232B7C
    lwz r5, 0xc(r30)
    lis r7, lbl_807C7030@ha
    lwz r3, lbl_8087F3C0
    li r0, -0x1
    fmr f1, f31
    addi r7, r7, lbl_807C7030@l
    stw r0, 0x8(r1)
    li r0, 0x1
    mr r4, r31
    mr r8, r7
    stw r0, 0xc(r1)
    addi r5, r5, 0xb0
    addi r9, r1, 0x68
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    b lbl_fn_80599458_00001184
    subi r0, r5, 0x5
    addi r3, r30, 0x10
    cntlzw r0, r0
    addi r4, r30, 0x1c
    srwi r5, r0, 5
    bl fn_8059A29C
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80599458_0000110C
    mr r3, r30
    bl fn_805991E4
    b lbl_fn_80599458_00001718
lbl_fn_80599458_0000110C:
    cmpwi r31, 0x0
    beq lbl_fn_80599458_00001184
    psq_l f1, 0x10(r30), 0, 0
    addi r5, r1, 0x58
    lfs f2, 0x18(r30)
    addi r3, r1, 0x48
    lfs f0, lbl_80888188
    psq_st f1, 0x0(r5), 0, 0
    lwz r4, lbl_8087F558
    stfs f2, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_80491DF8
    lwz r4, 0x4(r30)
    mr r3, r30
    lwz r4, 0x4(r4)
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r4, -0x1
    fmr f1, f31
    li r0, 0x1
    stw r4, 0x8(r1)
    mr r4, r31
    addi r7, r30, 0x10
    addi r8, r30, 0x1c
    stw r0, 0xc(r1)
    addi r9, r1, 0x48
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_80599458_00001184:
    lwz r3, 0x4(r30)
    lwz r3, 0xb0(r3)
    bl fn_800EFE3C
    lwz r4, 0x4(r30)
    mr r29, r3
    lwz r3, 0xb0(r4)
    bl fn_800EFEA0
    lfs f1, lbl_8088817C
    mr r31, r3
    mr r4, r29
    addi r3, r1, 0x14
    addi r5, r30, 0x10
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lfs f1, lbl_8088817C
    mr r4, r31
    addi r3, r1, 0x10
    addi r5, r30, 0x10
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r30, 0x64
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80599458_00001530
lbl_fn_80599458_00001204:
    cmpwi r0, 0x1
    bne lbl_fn_80599458_00001520
    cmpwi r4, 0x0
    bne lbl_fn_80599458_00001530
    lwz r0, 0x13c(r3)
    lwz r4, 0x4(r3)
    cmpwi r0, 0x0
    lwz r0, 0x5c(r4)
    beq lbl_fn_80599458_0000122C
    lwz r0, 0xdc(r3)
lbl_fn_80599458_0000122C:
    cmpwi r0, 0x0
    blt lbl_fn_80599458_00001254
    lwz r4, 0x60(r3)
    cmpw r4, r0
    blt lbl_fn_80599458_0000124C
    li r0, 0x2
    stw r0, 0x0(r3)
    b lbl_fn_80599458_00001254
lbl_fn_80599458_0000124C:
    addi r0, r4, 0x1
    stw r0, 0x60(r3)
lbl_fn_80599458_00001254:
    lwz r4, 0x4(r3)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1774
    beq lbl_fn_80599458_0000126C
    cmpwi r0, 0x179f
    bne lbl_fn_80599458_000012B8
lbl_fn_80599458_0000126C:
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80599458_00001290
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80599458_00001290
    li r0, 0x2
    stw r0, 0x0(r3)
lbl_fn_80599458_00001290:
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80599458_000013E8
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80599458_000013E8
    li r0, 0x2
    stw r0, 0x0(r3)
    b lbl_fn_80599458_000013E8
lbl_fn_80599458_000012B8:
    lwz r6, 0x8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80599458_00001350
    lwz r8, 0x38(r6)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r7, r8, 0, 29, 29
    cmplwi r7, 0x4
    beq lbl_fn_80599458_000012F0
    clrlwi r7, r8, 31
    cmplwi r7, 0x1
    beq lbl_fn_80599458_000012F0
    li r4, 0x1
lbl_fn_80599458_000012F0:
    cmpwi r4, 0x0
    beq lbl_fn_80599458_0000130C
    lwz r4, 0x7e0(r6)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80599458_0000130C
    li r0, 0x1
lbl_fn_80599458_0000130C:
    cmpwi r0, 0x0
    beq lbl_fn_80599458_00001340
    lwz r0, 0x55c(r6)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80599458_00001334
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_80599458_00001334
    li r4, 0x1
lbl_fn_80599458_00001334:
    cmpwi r4, 0x0
    bne lbl_fn_80599458_00001340
    li r5, 0x1
lbl_fn_80599458_00001340:
    cmpwi r5, 0x0
    bne lbl_fn_80599458_00001350
    li r0, 0x2
    stw r0, 0x0(r3)
lbl_fn_80599458_00001350:
    lwz r6, 0xc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80599458_000013E8
    lwz r8, 0x38(r6)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r7, r8, 0, 29, 29
    cmplwi r7, 0x4
    beq lbl_fn_80599458_00001388
    clrlwi r7, r8, 31
    cmplwi r7, 0x1
    beq lbl_fn_80599458_00001388
    li r4, 0x1
lbl_fn_80599458_00001388:
    cmpwi r4, 0x0
    beq lbl_fn_80599458_000013A4
    lwz r4, 0x7e0(r6)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80599458_000013A4
    li r0, 0x1
lbl_fn_80599458_000013A4:
    cmpwi r0, 0x0
    beq lbl_fn_80599458_000013D8
    lwz r0, 0x55c(r6)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80599458_000013CC
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_80599458_000013CC
    li r4, 0x1
lbl_fn_80599458_000013CC:
    cmpwi r4, 0x0
    bne lbl_fn_80599458_000013D8
    li r5, 0x1
lbl_fn_80599458_000013D8:
    cmpwi r5, 0x0
    bne lbl_fn_80599458_000013E8
    li r0, 0x2
    stw r0, 0x0(r3)
lbl_fn_80599458_000013E8:
    lwz r4, 0x4(r3)
    lbz r0, 0x2(r4)
    extsb r0, r0
    cmpwi r0, 0x5
    beq lbl_fn_80599458_00001404
    cmpwi r0, 0x3
    bne lbl_fn_80599458_0000148C
lbl_fn_80599458_00001404:
    lfs f10, lbl_80888178
    addi r5, r1, 0x3c
    lfs f0, 0x18(r3)
    addi r6, r1, 0x24
    lfs f9, lbl_8088818C
    li r4, 0x0
    lfs f8, 0x14(r3)
    fadds f11, f0, f10
    lfs f7, 0x10(r3)
    lis r7, 0x8000
    lfs f0, lbl_80888188
    fadds f12, f8, f9
    fadds f13, f7, f10
    fadds f7, f8, f0
    stfs f10, 0x18(r1)
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f9, 0x1c(r1)
    li r9, 0x0
    stfs f10, 0x20(r1)
    stfs f13, 0x24(r1)
    stfs f12, 0x28(r1)
    stfs f11, 0x2c(r1)
    stfs f10, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f10, 0x38(r1)
    stfs f13, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f11, 0x44(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_80599458_0000148C
    li r0, 0x2
    stw r0, 0x0(r30)
lbl_fn_80599458_0000148C:
    lwz r5, 0xc(r30)
    cmpwi r5, 0x0
    beq lbl_fn_80599458_000014D4
    lwz r3, 0x4(r30)
    lbz r0, 0x2(r3)
    extsb. r0, r0
    bne lbl_fn_80599458_000014D4
    psq_l f1, 0x528(r5), 0, 0
    addi r4, r30, 0x10
    lfs f2, 0x530(r5)
    addi r3, r30, 0x64
    stfs f2, 0x18(r30)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    bl fn_800CB6E4
lbl_fn_80599458_000014D4:
    lwz r5, 0x8(r30)
    cmpwi r5, 0x0
    beq lbl_fn_80599458_00001530
    lwz r3, 0x4(r30)
    lbz r0, 0x2(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80599458_00001530
    psq_l f1, 0x528(r5), 0, 0
    addi r4, r30, 0x10
    lfs f2, 0x530(r5)
    addi r3, r30, 0x64
    stfs f2, 0x18(r30)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    bl fn_800CB6E4
    b lbl_fn_80599458_00001530
lbl_fn_80599458_00001520:
    cmpwi r0, 0x2
    bne lbl_fn_80599458_00001530
    bl fn_805991E4
    b lbl_fn_80599458_00001718
lbl_fn_80599458_00001530:
    lfs f7, lbl_80888178
    addi r29, r30, 0x2c
    lfs f0, lbl_8088817C
    addi r31, r1, 0x1c8
    stfs f7, 0x58(r30)
    stfs f7, 0x50(r30)
    stfs f7, 0x4c(r30)
    stfs f7, 0x48(r30)
    stfs f7, 0x44(r30)
    stfs f7, 0x3c(r30)
    stfs f7, 0x38(r30)
    stfs f7, 0x34(r30)
    stfs f7, 0x30(r30)
    stfs f0, 0x54(r30)
    stfs f0, 0x40(r30)
    stfs f0, 0x2c(r30)
    stfs f7, 0x1f4(r1)
    stfs f7, 0x1ec(r1)
    stfs f7, 0x1e8(r1)
    stfs f7, 0x1e4(r1)
    stfs f7, 0x1e0(r1)
    stfs f7, 0x1d8(r1)
    stfs f7, 0x1d4(r1)
    stfs f7, 0x1d0(r1)
    stfs f7, 0x1cc(r1)
    stfs f0, 0x1f0(r1)
    stfs f0, 0x1dc(r1)
    stfs f0, 0x1c8(r1)
    lfs f1, 0x24(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_80599458_000015FC
    addi r3, r1, 0xd8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80599458_000015FC:
    lfs f0, lbl_80888178
    lfs f1, 0x20(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80599458_0000165C
    addi r3, r1, 0x138
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80599458_0000165C:
    lfs f0, lbl_80888178
    lfs f1, 0x1c(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80599458_000016BC
    addi r3, r1, 0x198
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x198
    addi r5, r1, 0x168
    bl fn_805F89F0
    addi r3, r1, 0x168
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80599458_000016BC:
    mr r3, r29
    mr r4, r31
    addi r5, r1, 0x1f8
    bl fn_805F89F0
    addi r3, r1, 0x1f8
    lfs f8, 0x10(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lfs f0, 0x18(r30)
    psq_st f2, 0x8(r29), 0, 0
    lfs f7, 0x14(r30)
    psq_st f4, 0x18(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    stfs f8, 0x38(r30)
    stfs f7, 0x48(r30)
    stfs f0, 0x58(r30)
lbl_fn_80599458_00001718:
    lwz r0, 0x254(r1)
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    lwz r29, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_80599C70(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beqlr
    li r4, 0x1
    blr
}

asm void fn_80599C94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r5, 0x8(r3)
    lwz r6, 0x4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80599C94_00001798
    cmpwi r6, 0x0
    beq lbl_fn_80599C94_00001798
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80599C94_00001798
    li r0, 0x1
    b lbl_fn_80599C94_0000179C
lbl_fn_80599C94_00001798:
    li r0, 0x0
lbl_fn_80599C94_0000179C:
    cmpwi r0, 0x0
    beq lbl_fn_80599C94_000017A8
    addi r6, r3, 0x80
lbl_fn_80599C94_000017A8:
    lwz r3, 0x64(r6)
    cmpwi r3, 0x0
    bne lbl_fn_80599C94_000017C4
    cmplw r4, r5
    beq lbl_fn_80599C94_0000181C
    li r3, 0x0
    b lbl_fn_80599C94_00001820
lbl_fn_80599C94_000017C4:
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80599C94_000017F0
    mr r3, r4
    mr r4, r5
    li r5, 0x0
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_80599C94_0000181C
    li r3, 0x0
    b lbl_fn_80599C94_00001820
lbl_fn_80599C94_000017F0:
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_80599C94_0000181C
    mr r3, r4
    mr r4, r5
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_80599C94_0000181C
    li r3, 0x0
    b lbl_fn_80599C94_00001820
lbl_fn_80599C94_0000181C:
    li r3, 0x1
lbl_fn_80599C94_00001820:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80599D64(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80599D64_00001868
    li r3, 0x0
    b lbl_fn_80599D64_00001A64
lbl_fn_80599D64_00001868:
    cmpwi r5, 0x0
    beq lbl_fn_80599D64_00001934
    lwz r6, 0x8(r3)
    lwz r5, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80599D64_0000189C
    cmpwi r5, 0x0
    beq lbl_fn_80599D64_0000189C
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80599D64_0000189C
    li r0, 0x1
    b lbl_fn_80599D64_000018A0
lbl_fn_80599D64_0000189C:
    li r0, 0x0
lbl_fn_80599D64_000018A0:
    cmpwi r0, 0x0
    beq lbl_fn_80599D64_000018AC
    addi r5, r3, 0x80
lbl_fn_80599D64_000018AC:
    lwz r3, 0x64(r5)
    cmpwi r3, 0x0
    bne lbl_fn_80599D64_000018C8
    cmplw r4, r6
    beq lbl_fn_80599D64_00001920
    li r0, 0x0
    b lbl_fn_80599D64_00001924
lbl_fn_80599D64_000018C8:
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80599D64_000018F4
    mr r3, r31
    mr r4, r6
    li r5, 0x0
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_80599D64_00001920
    li r0, 0x0
    b lbl_fn_80599D64_00001924
lbl_fn_80599D64_000018F4:
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_80599D64_00001920
    mr r3, r31
    mr r4, r6
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_80599D64_00001920
    li r0, 0x0
    b lbl_fn_80599D64_00001924
lbl_fn_80599D64_00001920:
    li r0, 0x1
lbl_fn_80599D64_00001924:
    cmpwi r0, 0x0
    bne lbl_fn_80599D64_00001934
    li r3, 0x0
    b lbl_fn_80599D64_00001A64
lbl_fn_80599D64_00001934:
    lwz r4, 0x8(r30)
    lwz r5, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80599D64_00001960
    cmpwi r5, 0x0
    beq lbl_fn_80599D64_00001960
    lwz r0, 0x13c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80599D64_00001960
    li r0, 0x1
    b lbl_fn_80599D64_00001964
lbl_fn_80599D64_00001960:
    li r0, 0x0
lbl_fn_80599D64_00001964:
    cmpwi r0, 0x0
    beq lbl_fn_80599D64_00001970
    addi r5, r30, 0x80
lbl_fn_80599D64_00001970:
    lwz r0, 0xac(r5)
    rlwinm r3, r0, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    bne lbl_fn_80599D64_000019E8
    lwz r3, 0x7e0(r4)
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80599D64_000019E0
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80599D64_000019E0
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_80599D64_000019E0
    rlwinm r0, r3, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_80599D64_000019E0
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_80599D64_000019E0
    rlwinm r0, r3, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_80599D64_000019E0
    rlwinm r3, r3, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_80599D64_000019E8
lbl_fn_80599D64_000019E0:
    li r3, 0x0
    b lbl_fn_80599D64_00001A64
lbl_fn_80599D64_000019E8:
    lbz r3, 0x2(r5)
    subi r0, r3, 0x3
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_80599D64_00001A04
    extsb. r0, r3
    bne lbl_fn_80599D64_00001A60
lbl_fn_80599D64_00001A04:
    lfs f1, 0x530(r31)
    addi r3, r1, 0x8
    lfs f0, 0x18(r30)
    lfs f3, 0x52c(r31)
    fsubs f4, f1, f0
    lfs f2, 0x14(r30)
    lfs f1, 0x528(r31)
    lfs f0, 0x10(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    lfs f1, 0x5c(r30)
    lfs f0, 0x28(r30)
    fmuls f31, f1, f0
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80599D64_00001A60
    li r3, 0x1
    b lbl_fn_80599D64_00001A64
lbl_fn_80599D64_00001A60:
    li r3, 0x0
lbl_fn_80599D64_00001A64:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
