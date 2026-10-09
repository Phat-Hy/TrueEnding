#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_19(void);
extern void _restgpr_20(void);
extern void _restgpr_24(void);
extern void _savegpr_19(void);
extern void _savegpr_20(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800DC6B4(void);
extern void fn_80117200(void);
extern void fn_80134800(void);
extern void fn_801CF334(void);
extern void fn_801CFA5C(void);
extern void fn_801D4E74(void);
extern void fn_801DCE88(void);
extern void fn_801F48C8(void);
extern void fn_801F4AA0(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801F7590(void);
extern void fn_801F837C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80202118(void);
extern void fn_80202D00(void);
extern void fn_80206BE4(void);
extern void fn_80206C50(void);
extern void fn_8020924C(void);
extern void fn_8020ED84(void);
extern void fn_8020EF4C(void);
extern void fn_8020EF80(void);
extern void fn_80211480(void);
extern void fn_80219544(void);
extern void fn_80444B64(void);
extern void fn_80444BE8(void);
extern void fn_80444C48(void);
extern void fn_80444C50(void);
extern void fn_8051125C(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8073CAA0[];
extern u8 lbl_8073CAA8[];
extern u8 lbl_8078287C[];
extern u8 lbl_80782898[];
extern u8 lbl_807C7040[];
extern u8 lbl_807C7898[];
extern u8 lbl_807C78A8[];
extern u8 lbl_807C78B8[];

/* Small data declarations */
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F4F0;
extern u32 lbl_808813D0;
extern u32 lbl_80882AF4;
extern u32 lbl_80882AF8;
extern u32 lbl_80882AFC;
extern u32 lbl_80882B00;
extern u32 lbl_80882B04;
extern u32 lbl_80882B08;

/* Function declarations */
void fn_801E6374(void);
void fn_801E6384(void);
void fn_801E66F8(void);
void fn_801E6700(void);
void fn_801E6714(void);
void fn_801E6B10(void);
void fn_801E6EF0(void);
void fn_801E6FC8(void);
void fn_801E7098(void);
void fn_801E714C(void);
void fn_801E75F8(void);

asm void fn_801E6374(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    blr
}

asm void fn_801E6384(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_801E6384_00000090
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r7, 0x0(r3)
    mulli r5, r0, 0x18
    lwz r3, 0x0(r4)
    lwz r0, 0x4(r4)
    lwz r6, 0x8(r4)
    add r7, r7, r5
    lwz r5, 0xc(r4)
    stw r3, 0x0(r7)
    lwz r3, 0x10(r4)
    stw r0, 0x4(r7)
    lwz r0, 0x14(r4)
    stw r6, 0x8(r7)
    stw r5, 0xc(r7)
    stw r3, 0x10(r7)
    stw r0, 0x14(r7)
    b lbl_fn_801E6384_00000364
lbl_fn_801E6384_00000090:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_801E6384_000000C4
    lis r3, __files@ha
    lis r4, lbl_8073CAA8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073CAA8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801E6384_000000C4:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0xaab
    stw r5, 0x14(r1)
    subi r0, r3, 0x5556
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_801E6384_00000128
    lis r3, __files@ha
    lis r4, lbl_8073CAA8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073CAA8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801E6384_00000128:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r31, r0
    bge lbl_fn_801E6384_00000178
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_801E6384_0000016C
    addi r3, r1, 0x8
lbl_fn_801E6384_0000016C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_801E6384_000001BC
lbl_fn_801E6384_00000178:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r31, r0
    bge lbl_fn_801E6384_000001B4
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_801E6384_000001A8
    addi r3, r1, 0x8
lbl_fn_801E6384_000001A8:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_801E6384_000001BC
lbl_fn_801E6384_000001B4:
    lis r3, 0xaab
    subi r28, r3, 0x5556
lbl_fn_801E6384_000001BC:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r28, r0
    ble lbl_fn_801E6384_000001EC
    lis r3, __files@ha
    lis r4, lbl_8073CAA8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073CAA8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801E6384_000001EC:
    mulli r3, r28, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_801E6384_00000220
    lis r3, __files@ha
    lis r4, lbl_8078287C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078287C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801E6384_00000220:
    lwz r3, 0x18(r1)
    li r0, 0x18
    stw r31, 0x14(r1)
    mulli r9, r3, 0x18
    lwz r8, 0x0(r30)
    stw r28, 0x1c(r1)
    lwz r7, 0x4(r30)
    lwz r3, 0x4(r29)
    stw r3, 0x24(r1)
    mulli r3, r3, 0x18
    lwz r6, 0x8(r30)
    lwz r5, 0xc(r30)
    lwz r4, 0x10(r30)
    add r3, r31, r3
    add r9, r9, r3
    lwz r3, 0x14(r30)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r3, 0x14(r9)
    lwz r4, 0x18(r1)
    lwz r3, 0x24(r1)
    addi r4, r4, 0x1
    stw r4, 0x18(r1)
    mulli r3, r3, 0x18
    lwz r4, 0x14(r1)
    lwz r5, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r5, r5, 0x18
    add r6, r4, r3
    add r5, r7, r5
    addi r3, r5, 0x17
    subf r3, r7, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    ble lbl_fn_801E6384_00000314
lbl_fn_801E6384_000002BC:
    subic. r6, r6, 0x18
    subi r5, r5, 0x18
    beq lbl_fn_801E6384_000002F8
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x0(r6)
    stw r0, 0x4(r6)
    lwz r0, 0xc(r5)
    lwz r3, 0x8(r5)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
    lwz r0, 0x14(r5)
    lwz r3, 0x10(r5)
    stw r3, 0x10(r6)
    stw r0, 0x14(r6)
lbl_fn_801E6384_000002F8:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_801E6384_000002BC
lbl_fn_801E6384_00000314:
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x14
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_801E6384_00000364
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801E6384_00000364
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_801E6384_00000364:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801E66F8(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_801E6700(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    blr
}

asm void fn_801E6714(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xb0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    stfd f26, 0xc0(r1)
    psq_st f26, 0xc8(r1), 0, 0
    stfd f25, 0xb0(r1)
    psq_st f25, 0xb8(r1), 0, 0
    bl _savegpr_19
    lwz r6, 0x1e4(r3)
    lis r5, 0x4330
    stw r5, 0x68(r1)
    li r4, 0xa
    mulli r6, r6, 0xc
    lwz r0, 0x80(r3)
    stw r5, 0x70(r1)
    mr r22, r3
    add r5, r3, r6
    lwz r5, 0xb38(r5)
    stw r5, 0x84(r3)
    cmpw r0, r5
    stw r4, 0x8c(r3)
    blt lbl_fn_801E6714_00000434
    subi r4, r5, 0x1
    srawi r0, r4, 31
    andc r0, r4, r0
    stw r0, 0x80(r3)
lbl_fn_801E6714_00000434:
    lwz r6, 0x8c(r3)
    lwz r7, 0x84(r3)
    cmpw r7, r6
    blt lbl_fn_801E6714_00000464
    lwz r0, 0x88(r3)
    subi r5, r7, 0x1
    add r4, r6, r0
    subi r0, r4, 0x1
    cmpw r5, r0
    bgt lbl_fn_801E6714_00000464
    subf r0, r6, r7
    stw r0, 0x88(r3)
lbl_fn_801E6714_00000464:
    mr r3, r22
    bl fn_801CF334
    lwz r0, 0x4c(r3)
    lwz r4, lbl_8087F4F0
    lwz r3, 0x13c(r22)
    slwi r0, r0, 6
    addis r4, r4, 0x1
    add r4, r4, r0
    cmpwi r3, 0x0
    subi r27, r4, 0x7d70
    beq lbl_fn_801E6714_000004B4
    bl fn_80202118
    mr r20, r3
    mr r3, r22
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r22
    lwz r6, 0x1b98(r22)
    mr r5, r20
    bl fn_801D4E74
lbl_fn_801E6714_000004B4:
    lis r3, lbl_8073CAA0@ha
    lis r4, lbl_8073CAA8@ha
    lfs f29, lbl_80882AF4
    addi r31, r4, lbl_8073CAA8@l
    lfd f30, lbl_8073CAA0@l(r3)
    addi r30, r1, 0x48
    lfs f31, lbl_80882AF8
    addi r28, r1, 0x28
    lfs f25, lbl_80882AFC
    addi r29, r1, 0x58
    lfs f28, lbl_80882B08
    li r25, 0x0
    lfs f27, lbl_80882B04
    li r21, 0x0
    lfs f26, lbl_80882B00
    b lbl_fn_801E6714_00000740
lbl_fn_801E6714_000004F4:
    add r3, r22, r21
    lwz r3, 0x108(r3)
    bl fn_80202D00
    lwz r0, 0x88(r22)
    mr r24, r3
    add. r5, r0, r25
    blt lbl_fn_801E6714_00000734
    lwz r0, 0x1e4(r22)
    mulli r0, r0, 0xc
    add r4, r22, r0
    lwz r0, 0xb38(r4)
    cmpw r5, r0
    bge lbl_fn_801E6714_00000734
    mulli r0, r5, 0x18
    lwz r3, 0xb34(r4)
    li r23, 0x0
    add r26, r3, r0
    lwzx r3, r3, r0
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    beq lbl_fn_801E6714_00000550
    cmpwi r0, 0x3
    bne lbl_fn_801E6714_00000554
lbl_fn_801E6714_00000550:
    li r23, 0x1
lbl_fn_801E6714_00000554:
    bl fn_8020EF80
    mr r19, r3
    bl fn_80211480
    mr r20, r3
    lwz r3, lbl_8087F4F0
    mr r4, r19
    bl fn_80444B64
    stfs f29, 0x58(r1)
    mr r5, r3
    lwz r4, lbl_8087F4F0
    addi r3, r1, 0x48
    stfs f29, 0x5c(r1)
    stfs f29, 0x60(r1)
    stfs f29, 0x64(r1)
    bl fn_80444C50
    cmpwi r20, 0x0
    beq lbl_fn_801E6714_000005AC
    lwz r5, 0x8(r20)
    mr r3, r24
    addi r4, r31, 0x14
    bl fn_801F837C
    b lbl_fn_801E6714_000005C8
lbl_fn_801E6714_000005AC:
    lwz r3, 0x0(r26)
    cmpwi r3, 0x0
    beq lbl_fn_801E6714_000005C8
    lwz r5, 0x80(r3)
    mr r3, r24
    addi r4, r31, 0x14
    bl fn_801F837C
lbl_fn_801E6714_000005C8:
    addi r5, r1, 0x38
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    mr r3, r24
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r31, 0x1b
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    lwz r3, 0xc(r26)
    cmpwi r3, 0x0
    blt lbl_fn_801E6714_000006AC
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_801E6714_00000608
    lwz r3, 0x2c(r3)
    b lbl_fn_801E6714_0000060C
lbl_fn_801E6714_00000608:
    li r3, 0x0
lbl_fn_801E6714_0000060C:
    cmpwi r3, 0x0
    ble lbl_fn_801E6714_000006AC
    subi r0, r3, 0x1
    slwi r3, r0, 30
    srwi r4, r0, 31
    srawi r0, r0, 2
    subf r3, r4, r3
    addze r5, r0
    rotlwi r0, r3, 2
    add r3, r0, r4
    xoris r4, r3, 0x8000
    xoris r0, r5, 0x8000
    stw r0, 0x74(r1)
    addi r3, r3, 0x1
    addi r0, r5, 0x1
    stw r4, 0x6c(r1)
    xoris r3, r3, 0x8000
    lfd f0, 0x70(r1)
    xoris r0, r0, 0x8000
    lfd f4, 0x68(r1)
    fsubs f3, f0, f30
    stw r0, 0x74(r1)
    fsubs f5, f4, f30
    lfd f0, 0x70(r1)
    fmuls f4, f25, f3
    stw r3, 0x6c(r1)
    fsubs f0, f0, f30
    lfd f3, 0x68(r1)
    fmuls f5, f31, f5
    stfs f4, 0x2c(r1)
    fsubs f3, f3, f30
    fmuls f0, f25, f0
    stfs f5, 0x28(r1)
    fmuls f3, f31, f3
    psq_l f1, 0x0(r28), 0, 0
    stfs f0, 0x34(r1)
    stfs f3, 0x30(r1)
    psq_l f2, 0x8(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
lbl_fn_801E6714_000006AC:
    addi r5, r1, 0x18
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r24
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r31, 0x24
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    addi r5, r1, 0x8
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r24
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r31, 0x2b
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    slwi r0, r23, 3
    lwz r3, 0x8(r26)
    add r4, r27, r0
    lwzx r0, r27, r0
    cmpw r3, r0
    bne lbl_fn_801E6714_00000718
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bge lbl_fn_801E6714_00000718
    stfs f26, 0x50(r24)
    b lbl_fn_801E6714_00000738
lbl_fn_801E6714_00000718:
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    bne lbl_fn_801E6714_0000072C
    stfs f27, 0x50(r24)
    b lbl_fn_801E6714_00000738
lbl_fn_801E6714_0000072C:
    stfs f29, 0x50(r24)
    b lbl_fn_801E6714_00000738
lbl_fn_801E6714_00000734:
    stfs f28, 0x50(r3)
lbl_fn_801E6714_00000738:
    addi r25, r25, 0x1
    addi r21, r21, 0x4
lbl_fn_801E6714_00000740:
    lwz r0, 0x8c(r22)
    cmpw r25, r0
    blt lbl_fn_801E6714_000004F4
    addi r11, r1, 0xb0
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    psq_l f26, 0xc8(r1), 0, 0
    lfd f26, 0xc0(r1)
    psq_l f25, 0xb8(r1), 0, 0
    lfd f25, 0xb0(r1)
    bl _restgpr_19
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801E6B10(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xb0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    stfd f26, 0xc0(r1)
    psq_st f26, 0xc8(r1), 0, 0
    stfd f25, 0xb0(r1)
    psq_st f25, 0xb8(r1), 0, 0
    bl _savegpr_20
    lwz r6, 0xb50(r3)
    lis r5, 0x4330
    lwz r0, 0x80(r3)
    li r4, 0xa
    stw r5, 0x68(r1)
    mr r23, r3
    cmpw r0, r6
    stw r5, 0x70(r1)
    stw r6, 0x84(r3)
    stw r4, 0x8c(r3)
    blt lbl_fn_801E6B10_00000824
    subi r4, r6, 0x1
    srawi r0, r4, 31
    andc r0, r4, r0
    stw r0, 0x80(r3)
lbl_fn_801E6B10_00000824:
    lwz r6, 0x8c(r3)
    lwz r7, 0x84(r3)
    cmpw r7, r6
    blt lbl_fn_801E6B10_00000854
    lwz r0, 0x88(r3)
    subi r5, r7, 0x1
    add r4, r6, r0
    subi r0, r4, 0x1
    cmpw r5, r0
    bgt lbl_fn_801E6B10_00000854
    subf r0, r6, r7
    stw r0, 0x88(r3)
lbl_fn_801E6B10_00000854:
    lwz r3, 0x13c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801E6B10_00000884
    bl fn_80202118
    mr r21, r3
    mr r3, r23
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r23
    lwz r6, 0x1b98(r23)
    mr r5, r21
    bl fn_801D4E74
lbl_fn_801E6B10_00000884:
    mr r3, r23
    bl fn_801CF334
    lis r4, lbl_8073CAA0@ha
    lis r5, lbl_8073CAA8@ha
    lwz r27, 0x4c(r3)
    addi r28, r1, 0x28
    lfd f30, lbl_8073CAA0@l(r4)
    addi r29, r1, 0x48
    lfs f31, lbl_80882AF8
    addi r31, r5, lbl_8073CAA8@l
    lfs f25, lbl_80882AFC
    addi r30, r1, 0x58
    lfs f26, lbl_80882B00
    li r25, 0x0
    lfs f29, lbl_80882AF4
    li r22, 0x0
    lfs f27, lbl_80882B04
    lfs f28, lbl_80882B08
    b lbl_fn_801E6B10_00000B20
lbl_fn_801E6B10_000008D0:
    add r3, r23, r22
    lwz r3, 0x108(r3)
    bl fn_80202D00
    lwz r0, 0x88(r23)
    mr r24, r3
    add. r4, r0, r25
    blt lbl_fn_801E6B10_00000B14
    lwz r0, 0xb50(r23)
    cmpw r4, r0
    bge lbl_fn_801E6B10_00000B14
    mulli r0, r4, 0x18
    lwz r3, 0xb4c(r23)
    add r26, r3, r0
    lwz r3, 0x4(r26)
    bl fn_80211480
    mr r20, r3
    lwz r3, 0x4(r26)
    bl fn_80206C50
    cmpwi r20, 0x0
    mr r21, r3
    beq lbl_fn_801E6B10_00000B18
    cmpwi r3, 0x0
    beq lbl_fn_801E6B10_00000B18
    lwz r0, 0x8(r26)
    cmpwi r0, 0x0
    bge lbl_fn_801E6B10_0000095C
    lwz r3, lbl_8087F4F0
    mr r4, r20
    bl fn_80444BE8
    lwz r5, 0x8(r20)
    mr r20, r3
    mr r3, r24
    addi r4, r31, 0x14
    bl fn_801F837C
    b lbl_fn_801E6B10_0000099C
lbl_fn_801E6B10_0000095C:
    lwz r3, lbl_8087F4F0
    bl fn_80444C48
    lwz r4, 0xb8(r21)
    mr r20, r3
    lwz r5, lbl_8087F1E4
    mr r3, r24
    addi r0, r4, 0xeb
    addi r4, r31, 0x14
    slwi r0, r0, 3
    add r5, r5, r0
    lwz r5, 0x4(r5)
    cmpwi r5, 0x0
    beq lbl_fn_801E6B10_00000994
    b lbl_fn_801E6B10_00000998
lbl_fn_801E6B10_00000994:
    la r5, lbl_808813D0
lbl_fn_801E6B10_00000998:
    bl fn_801F837C
lbl_fn_801E6B10_0000099C:
    lwz r4, lbl_8087F4F0
    mr r5, r20
    addi r3, r1, 0x58
    bl fn_80444C50
    addi r5, r1, 0x38
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    mr r3, r24
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r31, 0x1b
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    lwz r3, 0xc(r26)
    stfs f29, 0x48(r1)
    cmpwi r3, 0x0
    stfs f29, 0x4c(r1)
    stfs f29, 0x50(r1)
    stfs f29, 0x54(r1)
    blt lbl_fn_801E6B10_00000ACC
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_801E6B10_000009FC
    lwz r3, 0x2c(r3)
    b lbl_fn_801E6B10_00000A00
lbl_fn_801E6B10_000009FC:
    li r3, 0x0
lbl_fn_801E6B10_00000A00:
    cmpwi r3, 0x0
    ble lbl_fn_801E6B10_00000AA0
    subi r0, r3, 0x1
    slwi r3, r0, 30
    srwi r4, r0, 31
    srawi r0, r0, 2
    subf r3, r4, r3
    addze r5, r0
    rotlwi r0, r3, 2
    add r3, r0, r4
    xoris r4, r3, 0x8000
    xoris r0, r5, 0x8000
    stw r0, 0x74(r1)
    addi r3, r3, 0x1
    addi r0, r5, 0x1
    stw r4, 0x6c(r1)
    xoris r3, r3, 0x8000
    lfd f0, 0x70(r1)
    xoris r0, r0, 0x8000
    lfd f4, 0x68(r1)
    fsubs f3, f0, f30
    stw r0, 0x74(r1)
    fsubs f5, f4, f30
    lfd f0, 0x70(r1)
    fmuls f4, f25, f3
    stw r3, 0x6c(r1)
    fsubs f0, f0, f30
    lfd f3, 0x68(r1)
    fmuls f5, f31, f5
    stfs f4, 0x2c(r1)
    fsubs f3, f3, f30
    fmuls f0, f25, f0
    stfs f5, 0x28(r1)
    fmuls f3, f31, f3
    psq_l f1, 0x0(r28), 0, 0
    stfs f0, 0x34(r1)
    stfs f3, 0x30(r1)
    psq_l f2, 0x8(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
lbl_fn_801E6B10_00000AA0:
    lwz r0, 0xc(r26)
    cmpw r0, r27
    bne lbl_fn_801E6B10_00000AB0
    stfs f26, 0x50(r24)
lbl_fn_801E6B10_00000AB0:
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    beq lbl_fn_801E6B10_00000AC4
    stfs f29, 0x50(r24)
    b lbl_fn_801E6B10_00000AD0
lbl_fn_801E6B10_00000AC4:
    stfs f27, 0x50(r24)
    b lbl_fn_801E6B10_00000AD0
lbl_fn_801E6B10_00000ACC:
    stfs f29, 0x50(r24)
lbl_fn_801E6B10_00000AD0:
    addi r5, r1, 0x18
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r24
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r31, 0x24
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    addi r5, r1, 0x8
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r24
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r31, 0x2b
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    b lbl_fn_801E6B10_00000B18
lbl_fn_801E6B10_00000B14:
    stfs f28, 0x50(r3)
lbl_fn_801E6B10_00000B18:
    addi r25, r25, 0x1
    addi r22, r22, 0x4
lbl_fn_801E6B10_00000B20:
    lwz r0, 0x8c(r23)
    cmpw r25, r0
    blt lbl_fn_801E6B10_000008D0
    addi r11, r1, 0xb0
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    psq_l f26, 0xc8(r1), 0, 0
    lfd f26, 0xc0(r1)
    psq_l f25, 0xb8(r1), 0, 0
    lfd f25, 0xb0(r1)
    bl _restgpr_20
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801E6EF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r3, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_80219544
    mulli r7, r28, 0xc
    li r8, 0x0
    li r4, 0x0
    add r6, r27, r7
    lwz r0, 0xb38(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801E6EF0_00000C40
lbl_fn_801E6EF0_00000BC8:
    lwz r0, 0xb34(r6)
    add r5, r0, r4
    lwz r0, 0xc(r5)
    cmpw r0, r3
    bne lbl_fn_801E6EF0_00000C34
    cmpwi r31, 0x0
    stw r8, 0x0(r29)
    beq lbl_fn_801E6EF0_00000BF0
    stw r8, 0x0(r30)
    b lbl_fn_801E6EF0_00000C18
lbl_fn_801E6EF0_00000BF0:
    lwz r0, 0x0(r30)
    cmpw r0, r8
    ble lbl_fn_801E6EF0_00000C00
    stw r8, 0x0(r30)
lbl_fn_801E6EF0_00000C00:
    lwz r3, 0x0(r29)
    lwz r0, 0x0(r30)
    subi r3, r3, 0x9
    cmpw r0, r3
    bge lbl_fn_801E6EF0_00000C18
    stw r3, 0x0(r30)
lbl_fn_801E6EF0_00000C18:
    add r3, r27, r7
    lwz r0, 0xb38(r3)
    cmplwi r0, 0xa
    bge lbl_fn_801E6EF0_00000C40
    li r0, 0x0
    stw r0, 0x0(r30)
    b lbl_fn_801E6EF0_00000C40
lbl_fn_801E6EF0_00000C34:
    addi r8, r8, 0x1
    addi r4, r4, 0x18
    bdnz lbl_fn_801E6EF0_00000BC8
lbl_fn_801E6EF0_00000C40:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801E6FC8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r3, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_80219544
    li r7, 0x0
    li r4, 0x0
    mr r5, r7
    b lbl_fn_801E6FC8_00000D04
lbl_fn_801E6FC8_00000C90:
    lwz r0, 0xb4c(r27)
    add r6, r0, r4
    lwz r0, 0xc(r6)
    cmpw r0, r3
    bne lbl_fn_801E6FC8_00000CFC
    lwz r0, 0x14(r6)
    cmpw r0, r28
    bne lbl_fn_801E6FC8_00000CFC
    cmpwi r31, 0x0
    stw r7, 0x0(r29)
    beq lbl_fn_801E6FC8_00000CC4
    stw r7, 0x0(r30)
    b lbl_fn_801E6FC8_00000CEC
lbl_fn_801E6FC8_00000CC4:
    lwz r0, 0x0(r30)
    cmpw r0, r7
    ble lbl_fn_801E6FC8_00000CD4
    stw r7, 0x0(r30)
lbl_fn_801E6FC8_00000CD4:
    lwz r6, 0x0(r29)
    lwz r0, 0x0(r30)
    subi r6, r6, 0x9
    cmpw r0, r6
    bge lbl_fn_801E6FC8_00000CEC
    stw r6, 0x0(r30)
lbl_fn_801E6FC8_00000CEC:
    lwz r0, 0xb50(r27)
    cmplwi r0, 0xa
    bge lbl_fn_801E6FC8_00000CFC
    stw r5, 0x0(r30)
lbl_fn_801E6FC8_00000CFC:
    addi r7, r7, 0x1
    addi r4, r4, 0x18
lbl_fn_801E6FC8_00000D04:
    lwz r0, 0xb50(r27)
    cmpw r7, r0
    blt lbl_fn_801E6FC8_00000C90
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801E7098(void)
{
    nofralloc
    lwz r8, 0x0(r7)
    li r11, 0x0
    lwz r0, 0x0(r6)
    li r5, 0x0
    lwz r9, 0xb50(r3)
    subf r10, r8, r0
    mtctr r9
    cmpwi r9, 0x0
    blelr
lbl_fn_801E7098_00000D48:
    lwz r8, 0xb4c(r3)
    lwz r0, 0x4(r4)
    add r9, r8, r5
    lwz r8, 0x4(r9)
    cmpw r8, r0
    bne lbl_fn_801E7098_00000DC8
    lwz r8, 0xc(r9)
    cmpwi r8, 0x0
    bge lbl_fn_801E7098_00000D78
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E7098_00000D94
lbl_fn_801E7098_00000D78:
    lwz r0, 0xc(r4)
    cmpw r8, r0
    bne lbl_fn_801E7098_00000DC8
    lwz r8, 0x14(r9)
    lwz r0, 0x14(r4)
    cmpw r8, r0
    bne lbl_fn_801E7098_00000DC8
lbl_fn_801E7098_00000D94:
    subf r4, r10, r11
    stw r11, 0x0(r6)
    neg r0, r4
    andc r0, r0, r4
    srawi r0, r0, 31
    and r0, r4, r0
    stw r0, 0x0(r7)
    lwz r0, 0xb50(r3)
    cmplwi r0, 0xa
    bgelr
    li r0, 0x0
    stw r0, 0x0(r7)
    blr
lbl_fn_801E7098_00000DC8:
    addi r11, r11, 0x1
    addi r5, r5, 0x18
    bdnz lbl_fn_801E7098_00000D48
    blr
}

asm void fn_801E714C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x100
    bl _savegpr_24
    cmpwi r5, 0x0
    mr r29, r3
    mr r30, r4
    mr r31, r5
    beq lbl_fn_801E714C_0000126C
    lwz r6, lbl_8087F4F0
    slwi r0, r4, 6
    lfs f0, lbl_80882B08
    li r5, 0x0
    addis r6, r6, 0x1
    stfs f0, 0xc8(r1)
    add r27, r6, r0
    stfs f0, 0xcc(r1)
    stfs f0, 0xd0(r1)
    stfs f0, 0xd4(r1)
    bl fn_801CFA5C
    mr r24, r3
    bl fn_80206BE4
    bl fn_80211480
    cmpwi r24, 0x0
    mr r24, r3
    beq lbl_fn_801E714C_00000EC8
    cmpwi r3, 0x0
    beq lbl_fn_801E714C_00000EC8
    lwz r3, lbl_8087F4F0
    mr r4, r24
    bl fn_80444BE8
    lis r28, lbl_8073CAA8@ha
    lwz r25, 0x8(r24)
    addi r28, r28, lbl_8073CAA8@l
    mr r24, r3
    addi r3, r28, 0x37
    addi r26, r31, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r25
    bl fn_801FEE08
    lwz r4, lbl_8087F4F0
    mr r5, r24
    addi r3, r1, 0xb8
    bl fn_80444C50
    addi r3, r1, 0xb8
    addi r6, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0xa8
    psq_l f2, 0x8(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r28, 0x3c
    psq_st f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    b lbl_fn_801E714C_00000F2C
lbl_fn_801E714C_00000EC8:
    lis r3, lbl_80782898@ha
    lis r28, lbl_8073CAA8@ha
    addi r3, r3, lbl_80782898@l
    addi r25, r31, 0x58
    addi r28, r28, lbl_8073CAA8@l
    addi r26, r3, 0x8
    addi r3, r28, 0x37
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lis r4, lbl_807C7040@ha
    addi r6, r1, 0xc8
    addi r4, r4, lbl_807C7040@l
    addi r5, r1, 0x98
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r28, 0x3c
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
lbl_fn_801E714C_00000F2C:
    mr r3, r29
    mr r4, r30
    li r5, 0x1
    bl fn_801CFA5C
    mr r24, r3
    bl fn_80206BE4
    bl fn_80211480
    cmpwi r24, 0x0
    mr r24, r3
    beq lbl_fn_801E714C_00000FD8
    cmpwi r3, 0x0
    beq lbl_fn_801E714C_00000FD8
    lwz r3, lbl_8087F4F0
    mr r4, r24
    bl fn_80444BE8
    lis r29, lbl_8073CAA8@ha
    lwz r26, 0x8(r24)
    addi r29, r29, lbl_8073CAA8@l
    mr r28, r3
    addi r3, r29, 0x47
    addi r25, r31, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lwz r4, lbl_8087F4F0
    mr r5, r28
    addi r3, r1, 0x88
    bl fn_80444C50
    addi r3, r1, 0x88
    addi r6, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x78
    psq_l f2, 0x8(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r29, 0x4b
    psq_st f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    b lbl_fn_801E714C_0000103C
lbl_fn_801E714C_00000FD8:
    lis r3, lbl_80782898@ha
    lis r29, lbl_8073CAA8@ha
    addi r3, r3, lbl_80782898@l
    addi r25, r31, 0x58
    addi r29, r29, lbl_8073CAA8@l
    addi r26, r3, 0x8
    addi r3, r29, 0x47
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lis r4, lbl_807C7040@ha
    addi r6, r1, 0xc8
    addi r4, r4, lbl_807C7040@l
    addi r5, r1, 0x68
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r29, 0x4b
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
lbl_fn_801E714C_0000103C:
    lwz r4, -0x7d70(r27)
    li r3, 0x0
    bl fn_8020ED84
    mr r24, r3
    bl fn_8020EF80
    mr r28, r3
    bl fn_80211480
    cmpwi r24, 0x0
    beq lbl_fn_801E714C_000010E0
    cmpwi r3, 0x0
    beq lbl_fn_801E714C_000010E0
    lis r29, lbl_8073CAA8@ha
    lwz r26, 0x8(r3)
    addi r29, r29, lbl_8073CAA8@l
    addi r25, r31, 0x58
    addi r3, r29, 0x55
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_80444B64
    lwz r4, lbl_8087F4F0
    mr r5, r3
    addi r3, r1, 0x58
    bl fn_80444C50
    addi r3, r1, 0x58
    addi r6, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x48
    psq_l f2, 0x8(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r29, 0x61
    psq_st f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    b lbl_fn_801E714C_00001144
lbl_fn_801E714C_000010E0:
    lis r3, lbl_80782898@ha
    lis r29, lbl_8073CAA8@ha
    addi r3, r3, lbl_80782898@l
    addi r25, r31, 0x58
    addi r29, r29, lbl_8073CAA8@l
    addi r26, r3, 0x8
    addi r3, r29, 0x55
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lis r4, lbl_807C7040@ha
    addi r6, r1, 0xc8
    addi r4, r4, lbl_807C7040@l
    addi r5, r1, 0x38
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r29, 0x61
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
lbl_fn_801E714C_00001144:
    lwz r4, -0x7d68(r27)
    li r3, 0x1
    bl fn_8020ED84
    mr r24, r3
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801E714C_00001170
    lwz r4, -0x7d70(r27)
    li r3, 0x0
    bl fn_8020ED84
    mr r24, r3
lbl_fn_801E714C_00001170:
    mr r3, r24
    bl fn_8020EF80
    mr r27, r3
    bl fn_80211480
    cmpwi r24, 0x0
    beq lbl_fn_801E714C_00001208
    cmpwi r3, 0x0
    beq lbl_fn_801E714C_00001208
    lis r29, lbl_8073CAA8@ha
    lwz r26, 0x8(r3)
    addi r29, r29, lbl_8073CAA8@l
    addi r25, r31, 0x58
    addi r3, r29, 0x6a
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lwz r3, lbl_8087F4F0
    mr r4, r27
    bl fn_80444B64
    lwz r4, lbl_8087F4F0
    mr r5, r3
    addi r3, r1, 0x28
    bl fn_80444C50
    addi r3, r1, 0x28
    addi r6, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x18
    psq_l f2, 0x8(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r29, 0x76
    psq_st f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    b lbl_fn_801E714C_0000126C
lbl_fn_801E714C_00001208:
    lis r3, lbl_80782898@ha
    lis r29, lbl_8073CAA8@ha
    addi r3, r3, lbl_80782898@l
    addi r25, r31, 0x58
    addi r29, r29, lbl_8073CAA8@l
    addi r26, r3, 0x8
    addi r3, r29, 0x6a
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lis r4, lbl_807C7040@ha
    addi r6, r1, 0xc8
    addi r4, r4, lbl_807C7040@l
    addi r5, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r29, 0x76
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
lbl_fn_801E714C_0000126C:
    addi r11, r1, 0x100
    bl _restgpr_24
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_801E75F8(void)
{
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    stw r0, 0x454(r1)
    addi r11, r1, 0x420
    stfd f31, 0x440(r1)
    psq_st f31, 0x448(r1), 0, 0
    stfd f30, 0x430(r1)
    psq_st f30, 0x438(r1), 0, 0
    stfd f29, 0x420(r1)
    psq_st f29, 0x428(r1), 0, 0
    bl _savegpr_19
    cmpwi r7, 0x0
    mr r26, r3
    mr r30, r4
    mr r28, r5
    mr r27, r7
    beq lbl_fn_801E75F8_000019D4
    lwz r3, 0x0(r7)
    cmpwi r3, 0x0
    beq lbl_fn_801E75F8_000019D4
    bl fn_80202118
    cmpwi r3, 0x0
    bne lbl_fn_801E75F8_000012E4
    b lbl_fn_801E75F8_000019D4
lbl_fn_801E75F8_000012E4:
    lwz r3, 0x0(r27)
    bl fn_80202118
    lwz r4, lbl_8087F4F0
    mr r29, r3
    li r0, 0x0
    slwi r3, r30, 6
    addis r4, r4, 0x1
    stw r0, 0x8(r1)
    add r6, r4, r3
    mr r5, r30
    subi r22, r6, 0x7d70
    mr r4, r28
    addi r3, r1, 0x2e8
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80134800
    lfs f0, 0x2e8(r1)
    addi r3, r1, 0x3c
    lfs f2, 0x2f0(r1)
    li r4, 0x0
    fctiwz f3, f0
    lfs f1, 0x2ec(r1)
    lfs f0, 0x2f4(r1)
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x3a8(r1)
    fctiwz f0, f0
    stfd f2, 0x3b0(r1)
    lwz r9, 0x3ac(r1)
    li r5, 0x14
    stfd f1, 0x3b8(r1)
    lwz r8, 0x3b4(r1)
    stfd f0, 0x3c0(r1)
    lwz r7, 0x3bc(r1)
    lwz r6, 0x3c4(r1)
    lwz r0, 0x37c(r1)
    stw r9, 0x50(r1)
    stw r8, 0x54(r1)
    stw r7, 0x60(r1)
    stw r6, 0x5c(r1)
    stw r0, 0x58(r1)
    bl memset
    lwz r0, 0x7c(r26)
    cmpwi r0, 0x2
    bne lbl_fn_801E75F8_0000155C
    lwz r4, 0x1e4(r26)
    li r20, 0x0
    mulli r0, r4, 0xc
    add r3, r26, r0
    lwz r0, 0xb38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801E75F8_000013D0
    lwz r0, 0x80(r26)
    lwz r3, 0xb34(r3)
    mulli r0, r0, 0x18
    add r20, r3, r0
lbl_fn_801E75F8_000013D0:
    cmpwi r20, 0x0
    beq lbl_fn_801E75F8_000016A8
    cmpwi r4, 0x0
    li r21, 0x0
    li r23, 0x0
    li r24, 0x0
    bne lbl_fn_801E75F8_00001450
    lwz r3, 0x0(r20)
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801E75F8_0000140C
    lwz r24, 0x8(r20)
    li r23, 0x2
    li r21, 0x1
    b lbl_fn_801E75F8_00001450
lbl_fn_801E75F8_0000140C:
    lwz r3, 0x1e4(r26)
    slwi r0, r3, 3
    lwzx r4, r22, r0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801E75F8_00001450
    mr r3, r26
    mr r4, r30
    li r5, 0x1
    li r6, 0x0
    bl fn_801DCE88
    cmpwi r3, 0x0
    beq lbl_fn_801E75F8_00001450
    lwz r24, 0x8(r3)
    li r23, 0x2
    li r21, 0x1
lbl_fn_801E75F8_00001450:
    stw r24, 0x8(r1)
    mr r4, r28
    mr r5, r30
    mr r9, r23
    lwz r7, 0x1e4(r26)
    mr r10, r21
    lwz r8, 0x8(r20)
    addi r3, r1, 0x228
    li r6, 0x2
    bl fn_80134800
    lfs f0, 0x2e8(r1)
    li r9, 0x0
    lfs f2, 0x228(r1)
    fctiwz f7, f0
    lfs f1, 0x2f0(r1)
    fctiwz f6, f2
    lfs f0, 0x230(r1)
    stfd f7, 0x3c0(r1)
    fctiwz f5, f1
    fctiwz f4, f0
    stfd f6, 0x3b8(r1)
    lwz r3, 0x3c4(r1)
    lwz r0, 0x3bc(r1)
    lfs f3, 0x2f4(r1)
    subf r11, r3, r0
    lfs f2, 0x234(r1)
    lfs f1, 0x2ec(r1)
    fctiwz f3, f3
    lfs f0, 0x22c(r1)
    fctiwz f2, f2
    stfd f5, 0x3b0(r1)
    fctiwz f1, f1
    lwz r0, 0x50(r1)
    fctiwz f0, f0
    stfd f3, 0x3c8(r1)
    add r6, r0, r11
    lwz r3, 0x3b4(r1)
    stfd f4, 0x3a8(r1)
    lwz r4, 0x58(r1)
    lwz r0, 0x3ac(r1)
    stfd f1, 0x3d8(r1)
    subf r10, r3, r0
    lwz r0, 0x54(r1)
    stfd f2, 0x3d0(r1)
    add r5, r0, r10
    lwz r8, 0x3cc(r1)
    stfd f0, 0x3e0(r1)
    lwz r3, 0x3d4(r1)
    lwz r7, 0x3dc(r1)
    subf r8, r8, r3
    lwz r0, 0x3e4(r1)
    lwz r3, 0x5c(r1)
    subf r7, r7, r0
    lwz r0, 0x60(r1)
    add r3, r3, r8
    stw r11, 0x3c(r1)
    add r0, r0, r7
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
    b lbl_fn_801E75F8_000016A8
lbl_fn_801E75F8_0000155C:
    cmpwi r0, 0x3
    bne lbl_fn_801E75F8_000016A8
    lwz r0, 0xb50(r26)
    li r6, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_801E75F8_00001598
    lwz r3, 0x80(r26)
    cmpw r3, r0
    bge lbl_fn_801E75F8_00001598
    mulli r0, r3, 0x18
    lwz r3, 0xb4c(r26)
    add r3, r3, r0
    lwz r3, 0x4(r3)
    bl fn_80206C50
    mr r6, r3
lbl_fn_801E75F8_00001598:
    cmpwi r6, 0x0
    beq lbl_fn_801E75F8_000016A8
    li r31, 0x0
    stw r31, 0x8(r1)
    mr r4, r28
    mr r5, r30
    lwz r8, 0x80(r6)
    addi r3, r1, 0x168
    lwz r7, 0x1e4(r26)
    li r6, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_80134800
    lfs f0, 0x2e8(r1)
    lfs f2, 0x168(r1)
    fctiwz f7, f0
    lfs f1, 0x2f0(r1)
    fctiwz f6, f2
    lfs f0, 0x170(r1)
    stfd f7, 0x3e0(r1)
    fctiwz f5, f1
    fctiwz f4, f0
    stfd f6, 0x3d8(r1)
    lwz r3, 0x3e4(r1)
    lwz r0, 0x3dc(r1)
    lfs f3, 0x2f4(r1)
    subf r10, r3, r0
    lfs f2, 0x174(r1)
    lfs f1, 0x2ec(r1)
    fctiwz f3, f3
    lfs f0, 0x16c(r1)
    fctiwz f2, f2
    stfd f5, 0x3d0(r1)
    fctiwz f1, f1
    lwz r0, 0x50(r1)
    fctiwz f0, f0
    stfd f3, 0x3c0(r1)
    add r6, r0, r10
    lwz r3, 0x3d4(r1)
    stfd f4, 0x3c8(r1)
    lwz r4, 0x58(r1)
    lwz r0, 0x3cc(r1)
    stfd f1, 0x3b0(r1)
    subf r9, r3, r0
    lwz r0, 0x54(r1)
    stfd f2, 0x3b8(r1)
    add r5, r0, r9
    lwz r8, 0x3c4(r1)
    stfd f0, 0x3a8(r1)
    lwz r3, 0x3bc(r1)
    lwz r7, 0x3b4(r1)
    subf r8, r8, r3
    lwz r0, 0x3ac(r1)
    lwz r3, 0x5c(r1)
    subf r7, r7, r0
    lwz r0, 0x60(r1)
    add r3, r3, r8
    stw r10, 0x3c(r1)
    add r0, r0, r7
    stw r9, 0x40(r1)
    stw r31, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
lbl_fn_801E75F8_000016A8:
    lis r23, lbl_807C7898@ha
    lis r30, lbl_807C78B8@ha
    lis r22, lbl_8073CAA8@ha
    lis r25, lbl_807C78A8@ha
    addi r21, r1, 0x50
    addi r20, r1, 0x3c
    addi r31, r23, lbl_807C7898@l
    addi r28, r30, lbl_807C78B8@l
    addi r22, r22, lbl_8073CAA8@l
    addi r24, r25, lbl_807C78A8@l
    li r19, 0x0
lbl_fn_801E75F8_000016D4:
    mr r3, r19
    bl fn_80117200
    mr r5, r3
    addi r3, r1, 0x128
    addi r4, r22, 0x80
    crclr 6
    bl sprintf
    lwz r5, 0x0(r21)
    mr r3, r29
    addi r4, r1, 0x128
    li r6, 0x0
    bl fn_801F4CB4
    mr r3, r19
    bl fn_80117200
    mr r5, r3
    addi r3, r1, 0xe8
    addi r4, r22, 0x88
    crclr 6
    bl sprintf
    mr r3, r19
    bl fn_80117200
    mr r5, r3
    addi r3, r1, 0x128
    addi r4, r22, 0x94
    crclr 6
    bl sprintf
    mr r3, r19
    bl fn_80117200
    mr r5, r3
    addi r3, r1, 0xa8
    addi r4, r22, 0x9a
    crclr 6
    bl sprintf
    lwz r0, 0x0(r20)
    cmpwi r0, 0x0
    ble lbl_fn_801E75F8_000017B0
    addi r3, r1, 0xe8
    bl fn_800DC6B4
    lfs f1, lbl_80882AF4
    mr r4, r3
    addi r3, r29, 0x58
    bl fn_801FECE0
    lfs f1, lbl_807C7898@l(r23)
    mr r3, r29
    lfs f2, 0x4(r31)
    addi r4, r1, 0x128
    lfs f3, 0x8(r31)
    bl fn_801F4AA0
    lfs f1, lbl_807C7898@l(r23)
    mr r3, r29
    lfs f2, 0x4(r31)
    addi r4, r1, 0xa8
    lfs f3, 0x8(r31)
    bl fn_801F4AA0
    b lbl_fn_801E75F8_00001848
lbl_fn_801E75F8_000017B0:
    bne lbl_fn_801E75F8_00001800
    addi r3, r1, 0xe8
    bl fn_800DC6B4
    lfs f1, lbl_80882B08
    mr r4, r3
    addi r3, r29, 0x58
    bl fn_801FECE0
    lfs f1, lbl_807C78B8@l(r30)
    mr r3, r29
    lfs f2, 0x4(r28)
    addi r4, r1, 0x128
    lfs f3, 0x8(r28)
    bl fn_801F4AA0
    lfs f1, lbl_807C78B8@l(r30)
    mr r3, r29
    lfs f2, 0x4(r28)
    addi r4, r1, 0xa8
    lfs f3, 0x8(r28)
    bl fn_801F4AA0
    b lbl_fn_801E75F8_00001848
lbl_fn_801E75F8_00001800:
    addi r3, r1, 0xe8
    bl fn_800DC6B4
    lfs f1, lbl_80882AF4
    mr r4, r3
    addi r3, r29, 0x58
    bl fn_801FECE0
    lfs f1, lbl_807C78A8@l(r25)
    mr r3, r29
    lfs f2, 0x4(r24)
    addi r4, r1, 0x128
    lfs f3, 0x8(r24)
    bl fn_801F4AA0
    lfs f1, lbl_807C78A8@l(r25)
    mr r3, r29
    lfs f2, 0x4(r24)
    addi r4, r1, 0xa8
    lfs f3, 0x8(r24)
    bl fn_801F4AA0
lbl_fn_801E75F8_00001848:
    addi r19, r19, 0x1
    addi r20, r20, 0x4
    cmpwi r19, 0x5
    addi r21, r21, 0x4
    blt lbl_fn_801E75F8_000016D4
    lis r3, lbl_8073CAA8@ha
    lfs f30, lbl_80882AF4
    lfs f31, lbl_80882B08
    mr r31, r26
    addi r30, r1, 0x3c
    addi r24, r3, lbl_8073CAA8@l
    li r28, 0x0
lbl_fn_801E75F8_00001878:
    lwz r3, 0xae4(r31)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801E75F8_000019C0
    lwz r3, 0xaf8(r31)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801E75F8_000019C0
    lwz r4, 0xae4(r31)
    mr r3, r28
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0xaf8(r31)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    bl fn_80117200
    mr r5, r3
    addi r3, r1, 0x68
    addi r4, r24, 0xa3
    crclr 6
    bl sprintf
    addi r3, r1, 0x68
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x28
    bl fn_801F4E8C
    lwz r0, 0x0(r30)
    li r19, 0x0
    cmpwi r0, 0x0
    ble lbl_fn_801E75F8_00001904
    lwz r19, 0xae4(r31)
    b lbl_fn_801E75F8_0000190C
lbl_fn_801E75F8_00001904:
    bge lbl_fn_801E75F8_0000190C
    lwz r19, 0xaf8(r31)
lbl_fn_801E75F8_0000190C:
    cmpwi r19, 0x0
    beq lbl_fn_801E75F8_000019C0
    lwz r3, 0x7c(r26)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_801E75F8_000019C0
    stfs f30, 0x10(r1)
    mr r3, r26
    mr r4, r27
    mr r5, r19
    stfs f30, 0x14(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x10
    addi r8, r24, 0xae
    stfs f30, 0x18(r1)
    stfs f31, 0x1c(r1)
    stfs f31, 0x20(r1)
    stfs f31, 0x24(r1)
    bl fn_8051125C
    lwz r0, 0x104(r19)
    mr r3, r19
    addi r22, r24, 0xb8
    oris r0, r0, 0x80
    stw r0, 0x104(r19)
    lfs f29, 0x28(r1)
    bl fn_80202118
    mr r25, r3
    mr r3, r22
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    addi r3, r25, 0x58
    li r5, 0x0
    bl fn_801FED24
    lfs f29, 0x2c(r1)
    mr r3, r19
    bl fn_80202118
    mr r25, r3
    mr r3, r22
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    addi r3, r25, 0x58
    li r5, 0x1
    bl fn_801FED24
lbl_fn_801E75F8_000019C0:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x5
    addi r31, r31, 0x4
    blt lbl_fn_801E75F8_00001878
lbl_fn_801E75F8_000019D4:
    addi r11, r1, 0x420
    psq_l f31, 0x448(r1), 0, 0
    lfd f31, 0x440(r1)
    psq_l f30, 0x438(r1), 0, 0
    lfd f30, 0x430(r1)
    psq_l f29, 0x428(r1), 0, 0
    lfd f29, 0x420(r1)
    bl _restgpr_19
    lwz r0, 0x454(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}
