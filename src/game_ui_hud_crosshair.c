#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006F72C(void);
extern void fn_800A555C(void);
extern void fn_800A58D0(void);
extern void fn_800CB3A0(void);
extern void fn_800CFBA0(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_80117214(void);
extern void fn_80117228(void);
extern void fn_801CDD9C(void);
extern void fn_801CDE14(void);
extern void fn_801CE4CC(void);
extern void fn_801CE5B0(void);
extern void fn_801CF334(void);
extern void fn_801CFA5C(void);
extern void fn_801CFAA8(void);
extern void fn_801D59A8(void);
extern void fn_801D5AB0(void);
extern void fn_801D5F04(void);
extern void fn_801D6188(void);
extern void fn_801D6390(void);
extern void fn_801D6560(void);
extern void fn_801D6754(void);
extern void fn_801D6AB0(void);
extern void fn_801D6C1C(void);
extern void fn_801D6F84(void);
extern void fn_801D70EC(void);
extern void fn_801D7354(void);
extern void fn_801D80BC(void);
extern void fn_801D8560(void);
extern void fn_801D8CC4(void);
extern void fn_801D924C(void);
extern void fn_801D9388(void);
extern void fn_801D94D0(void);
extern void fn_801DD26C(void);
extern void fn_801E07A4(void);
extern void fn_801E6714(void);
extern void fn_801E6B10(void);
extern void fn_801E6EF0(void);
extern void fn_801E6FC8(void);
extern void fn_801F4728(void);
extern void fn_801F48C8(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801FEE08(void);
extern void fn_80202118(void);
extern void fn_80202D00(void);
extern void fn_80206BE4(void);
extern void fn_8020BE40(void);
extern void fn_8020BF20(void);
extern void fn_8020ED84(void);
extern void fn_8020EF4C(void);
extern void fn_8020EF80(void);
extern void fn_80211480(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803750E4(void);
extern void fn_804444E8(void);
extern void fn_80444A50(void);
extern void fn_80444B64(void);
extern void fn_80444BE8(void);
extern void fn_80444C48(void);
extern void fn_80444C50(void);
extern void fn_804A4294(void);
extern void fn_804A4930(void);
extern void fn_804A53D4(void);
extern void fn_80510FBC(void);
extern void fn_8051125C(void);
extern void fn_805118B8(void);
extern void fn_805119CC(void);
extern void fn_8052DEF0(void);
extern void fn_80686A48(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_807826C8[];
extern u8 jumptable_80782704[];
extern u8 jumptable_80782740[];
extern u8 jumptable_8078277C[];
extern u8 lbl_8073C2EC[];
extern u8 lbl_8073C420[];
extern u8 lbl_8073C56C[];
extern u8 lbl_807C7D18[];

/* Small data declarations */
extern u32 lbl_8087DA58;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_80882A5C;
extern u32 lbl_80882A74;
extern u32 lbl_80882A78;
extern u32 lbl_80882AC4;
extern u32 lbl_80882AC8;
extern u32 lbl_80882ACC;

/* Function declarations */
void fn_801D3DF4(void);
void fn_801D463C(void);
void fn_801D4700(void);
void fn_801D4A0C(void);
void fn_801D4E74(void);
void fn_801D52F8(void);
void fn_801D5410(void);
void fn_801D5420(void);
void fn_801D54A0(void);
void fn_801D54C0(void);

asm void fn_801D3DF4(void)
{
    nofralloc
    stwu r1, -0x380(r1)
    mflr r0
    stw r0, 0x384(r1)
    addi r11, r1, 0x380
    bl _savegpr_26
    lwz r4, 0xb90(r3)
    mr r28, r3
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x48(r3)
    lwz r0, 0x11f0(r4)
    cmplw r0, r3
    bne lbl_fn_801D3DF4_00000830
    lfs f1, lbl_80882A5C
    li r31, 0x0
    stfs f1, 0xd4(r1)
    li r30, 0x0
    lfs f0, lbl_80882A74
    li r29, 0x0
    stfs f1, 0xd8(r1)
    stfs f1, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f1, 0xe4(r1)
    lwz r0, 0x7c(r3)
    stfs f1, 0x364(r1)
    cmplwi r0, 0xe
    stfs f1, 0x10c(r1)
    stfs f1, 0x138(r1)
    stfs f1, 0x164(r1)
    stfs f1, 0x190(r1)
    stfs f1, 0x1b8(r1)
    stfs f1, 0x1e4(r1)
    stfs f1, 0x210(r1)
    stfs f1, 0x23c(r1)
    stfs f0, 0x290(r1)
    stfs f0, 0x2ac(r1)
    stfs f0, 0x2c8(r1)
    bgt lbl_fn_801D3DF4_00000768
    lis r4, jumptable_807826C8@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807826C8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r5, 0x1b98(r28)
    lis r4, lbl_8073C56C@ha
    addi r4, r4, lbl_8073C56C@l
    addi r3, r1, 0x2f8
    addi r4, r4, 0x412
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r3, 0xacc(r28)
    bl fn_80202118
    mr r27, r3
    addi r3, r1, 0x2f8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0xac
    bl fn_801F4E8C
    lfs f4, 0xac(r1)
    lfs f3, 0xb0(r1)
    lfs f2, 0xb4(r1)
    lfs f1, 0xb8(r1)
    lfs f0, 0xbc(r1)
    stfs f4, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    lwz r3, 0xacc(r28)
    bl fn_80202118
    lwz r0, 0x1b98(r28)
    lis r5, lbl_8073C2EC@ha
    lwz r6, 0x50(r28)
    mr r4, r3
    slwi r0, r0, 2
    addi r5, r5, lbl_8073C2EC@l
    lwzx r5, r5, r0
    mr r3, r28
    addi r6, r6, 0x40
    addi r7, r1, 0xd4
    li r8, 0x0
    bl fn_805118B8
    b lbl_fn_801D3DF4_00000768
    lwz r4, 0x80(r3)
    cmpwi r4, 0x0
    blt lbl_fn_801D3DF4_00000258
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    ble lbl_fn_801D3DF4_00000258
    lwz r0, 0x88(r28)
    lis r27, lbl_8073C56C@ha
    addi r27, r27, lbl_8073C56C@l
    addi r3, r1, 0x2f8
    subf r5, r0, r4
    addi r4, r27, 0x422
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r3, 0x13c(r28)
    bl fn_80202118
    mr r26, r3
    addi r3, r1, 0x2f8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x98
    bl fn_801F4E8C
    lfs f4, 0x98(r1)
    lfs f3, 0x9c(r1)
    lfs f2, 0xa0(r1)
    lfs f1, 0xa4(r1)
    lfs f0, 0xa8(r1)
    stfs f4, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    lwz r3, 0x140(r28)
    bl fn_80202D00
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_801D3DF4_00000218
    lfs f1, lbl_80882AC4
    addi r4, r27, 0x430
    bl fn_801F6C80
    lwz r4, 0x88(r28)
    mr r3, r26
    lwz r5, 0x84(r28)
    lwz r6, 0x8c(r28)
    bl fn_804A4930
lbl_fn_801D3DF4_00000218:
    lwz r3, 0x88(r28)
    lwz r0, 0x80(r28)
    subf r0, r3, r0
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x108(r3)
    bl fn_80202D00
    lwz r5, 0x50(r28)
    mr r4, r3
    mr r3, r28
    addi r7, r1, 0xd4
    addi r6, r5, 0x40
    li r5, 0x0
    li r8, 0x0
    bl fn_805119CC
    b lbl_fn_801D3DF4_00000768
lbl_fn_801D3DF4_00000258:
    lwz r3, 0x140(r3)
    bl fn_80202D00
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_801D3DF4_00000768
    lis r4, lbl_8073C56C@ha
    lfs f1, lbl_80882AC4
    addi r4, r4, lbl_8073C56C@l
    addi r4, r4, 0x430
    bl fn_801F6C80
    mr r3, r26
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    bl fn_804A4930
    b lbl_fn_801D3DF4_00000768
    lwz r4, 0x80(r3)
    cmpwi r4, 0x0
    blt lbl_fn_801D3DF4_00000394
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    ble lbl_fn_801D3DF4_00000394
    lwz r0, 0x88(r28)
    lis r27, lbl_8073C56C@ha
    addi r27, r27, lbl_8073C56C@l
    addi r3, r1, 0x2f8
    subf r5, r0, r4
    addi r4, r27, 0x422
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r3, 0x1cc(r28)
    bl fn_80202118
    mr r26, r3
    addi r3, r1, 0x2f8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x84
    bl fn_801F4E8C
    lfs f4, 0x84(r1)
    lfs f3, 0x88(r1)
    lfs f2, 0x8c(r1)
    lfs f1, 0x90(r1)
    lfs f0, 0x94(r1)
    stfs f4, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    lwz r3, 0x1d0(r28)
    bl fn_80202D00
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_801D3DF4_00000354
    lfs f1, lbl_80882AC8
    addi r4, r27, 0x430
    bl fn_801F6C80
    lwz r4, 0x88(r28)
    mr r3, r26
    lwz r5, 0x84(r28)
    lwz r6, 0x8c(r28)
    bl fn_804A4930
lbl_fn_801D3DF4_00000354:
    lwz r3, 0x88(r28)
    lwz r0, 0x80(r28)
    subf r0, r3, r0
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x198(r3)
    bl fn_80202D00
    lwz r5, 0x50(r28)
    mr r4, r3
    mr r3, r28
    addi r7, r1, 0xd4
    addi r6, r5, 0x200
    li r5, 0x0
    li r8, 0x0
    bl fn_805119CC
    b lbl_fn_801D3DF4_00000768
lbl_fn_801D3DF4_00000394:
    lwz r3, 0x1d0(r3)
    bl fn_80202D00
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_801D3DF4_00000768
    lis r4, lbl_8073C56C@ha
    lfs f1, lbl_80882AC4
    addi r4, r4, lbl_8073C56C@l
    addi r4, r4, 0x430
    bl fn_801F6C80
    mr r3, r26
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    bl fn_804A4930
    b lbl_fn_801D3DF4_00000768
    lwz r5, 0x1ba0(r28)
    lis r4, lbl_8073C56C@ha
    addi r4, r4, lbl_8073C56C@l
    addi r3, r1, 0x2f8
    addi r4, r4, 0x412
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r3, 0xad8(r28)
    bl fn_80202118
    mr r26, r3
    addi r3, r1, 0x2f8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x70
    bl fn_801F4E8C
    lfs f4, 0x70(r1)
    lfs f3, 0x74(r1)
    lfs f2, 0x78(r1)
    lfs f1, 0x7c(r1)
    lfs f0, 0x80(r1)
    stfs f4, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    lwz r3, 0xad8(r28)
    bl fn_80202118
    lwz r0, 0x1ba0(r28)
    lis r5, lbl_8073C420@ha
    lwz r6, 0x50(r28)
    mr r4, r3
    slwi r0, r0, 2
    addi r5, r5, lbl_8073C420@l
    lwzx r5, r5, r0
    mr r3, r28
    addi r6, r6, 0x200
    addi r7, r1, 0xd4
    li r8, 0x0
    bl fn_805118B8
    b lbl_fn_801D3DF4_00000768
    lwz r0, 0x1bb0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801D3DF4_00000490
    lwz r27, 0x1ba8(r3)
    b lbl_fn_801D3DF4_00000494
lbl_fn_801D3DF4_00000490:
    lwz r27, 0x1ba4(r3)
lbl_fn_801D3DF4_00000494:
    lis r4, lbl_8073C56C@ha
    addi r3, r1, 0x2f8
    addi r4, r4, lbl_8073C56C@l
    addi r5, r27, 0x1
    addi r4, r4, 0x412
    crclr 6
    bl sprintf
    lwz r3, 0x184(r28)
    bl fn_80202118
    mr r26, r3
    addi r3, r1, 0x2f8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x5c
    bl fn_801F4E8C
    lfs f4, 0x5c(r1)
    slwi r0, r27, 2
    lfs f3, 0x60(r1)
    add r3, r28, r0
    lfs f2, 0x64(r1)
    lfs f1, 0x68(r1)
    lfs f0, 0x6c(r1)
    stfs f4, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    lwz r3, 0x150(r3)
    bl fn_80202D00
    lwz r5, 0x50(r28)
    mr r4, r3
    mr r3, r28
    addi r7, r1, 0xd4
    addi r6, r5, 0x200
    li r5, 0x0
    li r8, 0x0
    bl fn_805119CC
    b lbl_fn_801D3DF4_00000768
    lwz r5, 0x1bac(r28)
    lis r4, lbl_8073C56C@ha
    addi r4, r4, lbl_8073C56C@l
    addi r3, r1, 0x2f8
    addi r4, r4, 0x412
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r3, 0x184(r28)
    bl fn_80202118
    mr r26, r3
    addi r3, r1, 0x2f8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x48
    bl fn_801F4E8C
    lfs f4, 0x48(r1)
    lfs f3, 0x4c(r1)
    lfs f2, 0x50(r1)
    lfs f1, 0x54(r1)
    lfs f0, 0x58(r1)
    stfs f4, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    lwz r0, 0x1bac(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x150(r3)
    bl fn_80202D00
    lwz r5, 0x50(r28)
    mr r4, r3
    mr r3, r28
    addi r7, r1, 0xd4
    addi r6, r5, 0x200
    li r5, 0x0
    li r8, 0x0
    bl fn_805119CC
    b lbl_fn_801D3DF4_00000768
    lwz r6, 0x50(r3)
    lis r4, lbl_8073C56C@ha
    addi r4, r4, lbl_8073C56C@l
    lwz r29, 0xadc(r3)
    lwz r5, 0x1bb8(r28)
    addi r30, r6, 0x200
    addi r3, r1, 0x2f8
    addi r4, r4, 0x38a
    li r31, 0x2
    crclr 6
    bl sprintf
    b lbl_fn_801D3DF4_00000768
    lwz r6, 0x50(r3)
    lis r4, lbl_8073C56C@ha
    addi r4, r4, lbl_8073C56C@l
    lwz r29, 0xadc(r3)
    addi r30, r6, 0x200
    lwz r5, 0x1fc(r28)
    lwz r6, 0x1f8(r28)
    addi r3, r1, 0x2f8
    addi r4, r4, 0x43b
    li r31, 0x2
    crclr 6
    bl sprintf
    b lbl_fn_801D3DF4_00000768
    lwz r6, 0x50(r3)
    lis r4, lbl_8073C56C@ha
    addi r4, r4, lbl_8073C56C@l
    lwz r29, 0xae0(r3)
    addi r30, r6, 0x200
    lwz r5, 0x204(r28)
    lwz r6, 0x200(r28)
    addi r3, r1, 0x2f8
    addi r4, r4, 0x43b
    li r31, 0x2
    crclr 6
    bl sprintf
    b lbl_fn_801D3DF4_00000768
    lwz r5, 0x1bbc(r28)
    lis r4, lbl_8073C56C@ha
    addi r4, r4, lbl_8073C56C@l
    addi r3, r1, 0x2f8
    addi r4, r4, 0x44b
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r26, 0xb2c(r28)
    addi r3, r1, 0x2f8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x34
    bl fn_801F4E8C
    lfs f4, 0x34(r1)
    addi r6, r1, 0xd4
    lfs f3, 0x38(r1)
    li r4, 0x0
    lfs f2, 0x3c(r1)
    li r5, 0x0
    lfs f1, 0x40(r1)
    li r7, 0x0
    lfs f0, 0x44(r1)
    stfs f4, 0xd4(r1)
    lwz r3, lbl_8087F580
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_804A53D4
    b lbl_fn_801D3DF4_00000768
    lwz r5, 0x1bc0(r28)
    lis r4, lbl_8073C56C@ha
    addi r4, r4, lbl_8073C56C@l
    addi r3, r1, 0x2f8
    addi r4, r4, 0x44b
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r26, 0xb30(r28)
    addi r3, r1, 0x2f8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x20
    bl fn_801F4E8C
    lfs f4, 0x20(r1)
    addi r6, r1, 0xd4
    lfs f3, 0x24(r1)
    li r4, 0x0
    lfs f2, 0x28(r1)
    li r5, 0x0
    lfs f1, 0x2c(r1)
    li r7, 0x0
    lfs f0, 0x30(r1)
    stfs f4, 0xd4(r1)
    lwz r3, lbl_8087F580
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_804A53D4
lbl_fn_801D3DF4_00000768:
    cmpwi r31, 0x2
    bne lbl_fn_801D3DF4_00000830
    cmpwi r30, 0x0
    beq lbl_fn_801D3DF4_00000830
    cmpwi r29, 0x0
    beq lbl_fn_801D3DF4_00000830
    lwz r0, 0xb8c(r28)
    cmpwi r0, 0x0
    blt lbl_fn_801D3DF4_00000830
    lwz r5, 0xb90(r28)
    lis r31, lbl_8073C56C@ha
    addi r31, r31, lbl_8073C56C@l
    lfs f1, lbl_80882A74
    lwz r0, 0x104(r5)
    mr r3, r28
    lfs f0, lbl_80882A5C
    mr r4, r30
    oris r0, r0, 0x80
    stw r0, 0x104(r5)
    addi r6, r1, 0x14
    addi r7, r1, 0x8
    stfs f1, 0x8(r1)
    addi r8, r31, 0x30f
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    lwz r5, 0xb90(r28)
    bl fn_8051125C
    cmpwi r29, 0x0
    beq lbl_fn_801D3DF4_00000830
    mr r3, r29
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D3DF4_00000830
    mr r3, r29
    bl fn_80202118
    mr r26, r3
    addi r3, r1, 0x2f8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0xc0
    bl fn_801F4E8C
    lwz r3, 0xb90(r28)
    bl fn_80202118
    addi r4, r31, 0x396
    addi r5, r1, 0xc0
    bl fn_801F4728
lbl_fn_801D3DF4_00000830:
    addi r11, r1, 0x380
    bl _restgpr_26
    lwz r0, 0x384(r1)
    mtlr r0
    addi r1, r1, 0x380
    blr
}

asm void fn_801D463C(void)
{
    nofralloc
    cmpwi r6, 0x5
    beq lbl_fn_801D463C_00000874
    cmpwi r6, 0x6
    beq lbl_fn_801D463C_00000884
    cmpwi r6, 0x7
    beq lbl_fn_801D463C_00000890
    cmpwi r6, 0x8
    beq lbl_fn_801D463C_000008B0
    cmpwi r6, 0x4
    beq lbl_fn_801D463C_000008D0
    b lbl_fn_801D463C_000008F0
lbl_fn_801D463C_00000874:
    stw r8, 0x88(r5)
    stw r7, 0x84(r5)
    stw r7, 0xb8c(r3)
    blr
lbl_fn_801D463C_00000884:
    stw r7, 0xcc(r5)
    stw r8, 0xd0(r5)
    blr
lbl_fn_801D463C_00000890:
    lwz r0, 0xadc(r3)
    stw r0, 0x0(r4)
    lwz r4, 0xadc(r3)
    lwz r0, 0x104(r4)
    oris r0, r0, 0x80
    stw r0, 0x104(r4)
    stw r7, 0xb8c(r3)
    blr
lbl_fn_801D463C_000008B0:
    lwz r0, 0xae0(r3)
    stw r0, 0x0(r4)
    lwz r4, 0xae0(r3)
    lwz r0, 0x104(r4)
    oris r0, r0, 0x80
    stw r0, 0x104(r4)
    stw r7, 0xb8c(r3)
    blr
lbl_fn_801D463C_000008D0:
    lwz r0, 0xad8(r3)
    stw r0, 0x0(r4)
    lwz r4, 0xad8(r3)
    lwz r0, 0x104(r4)
    oris r0, r0, 0x80
    stw r0, 0x104(r4)
    stw r7, 0xb8c(r3)
    blr
lbl_fn_801D463C_000008F0:
    lwz r0, 0xad8(r3)
    stw r0, 0x0(r4)
    lwz r3, 0xad8(r3)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    blr
}

asm void fn_801D4700(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x484(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801D4700_00000BFC
    lwz r0, 0xa88(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_801D4700_00000BFC
    bl fn_801CE4CC
    cmpwi r3, 0x0
    bne lbl_fn_801D4700_00000BFC
    lwz r0, 0x1f0(r29)
    lwz r31, lbl_8087EF70
    cmpwi r0, 0x0
    bne lbl_fn_801D4700_00000B28
    lwz r0, 0xf4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801D4700_00000B28
    lwz r0, 0xfc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801D4700_00000B28
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801D4700_00000B28
    lwz r0, 0x7c(r29)
    li r30, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_801D4700_00000998
    cmpwi r0, 0x4
    bne lbl_fn_801D4700_00000A58
lbl_fn_801D4700_00000998:
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_801D4700_000009E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x17
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_801D4700_000009E0
    mr r3, r31
    li r4, 0x0
    li r5, 0xa
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D4700_000009E8
lbl_fn_801D4700_000009E0:
    li r30, -0x1
    b lbl_fn_801D4700_00000AD0
lbl_fn_801D4700_000009E8:
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_801D4700_00000A30
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_801D4700_00000A30
    mr r3, r31
    li r4, 0x0
    li r5, 0xb
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D4700_00000A38
lbl_fn_801D4700_00000A30:
    li r30, 0x1
    b lbl_fn_801D4700_00000AD0
lbl_fn_801D4700_00000A38:
    mr r3, r31
    li r4, 0x0
    li r5, 0x6
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D4700_00000AD0
    li r30, 0x1
    b lbl_fn_801D4700_00000AD0
lbl_fn_801D4700_00000A58:
    cmpwi r0, 0xd
    beq lbl_fn_801D4700_00000AD0
    mr r3, r31
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_801D4700_00000AB4
    mr r3, r31
    li r4, 0x0
    li r5, 0xa
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D4700_00000A94
    li r30, -0x1
    b lbl_fn_801D4700_00000AD0
lbl_fn_801D4700_00000A94:
    mr r3, r31
    li r4, 0x0
    li r5, 0xb
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D4700_00000AD0
    li r30, 0x1
    b lbl_fn_801D4700_00000AD0
lbl_fn_801D4700_00000AB4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x6
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D4700_00000AD0
    li r30, 0x1
lbl_fn_801D4700_00000AD0:
    cmpwi r30, 0x0
    beq lbl_fn_801D4700_00000B28
    mr r3, r29
    mr r4, r30
    bl fn_801CDD9C
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_801D4700_00000B28
    lwz r5, 0xd4(r29)
    lwz r3, 0x0(r3)
    lwz r0, 0x4c(r5)
    cmpw r3, r0
    beq lbl_fn_801D4700_00000B28
    mr r3, r29
    mr r5, r30
    bl fn_801CDE14
    addi r3, r1, 0x8
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_801D4700_00000B28:
    lwz r0, 0xf4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801D4700_00000BFC
    lwz r0, 0x7c(r29)
    cmplwi r0, 0xe
    bgt lbl_fn_801D4700_00000BFC
    lis r3, jumptable_80782704@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80782704@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r29
    bl fn_801D80BC
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D8560
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D8CC4
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D54C0
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D59A8
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D5AB0
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D5F04
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D6560
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D6188
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D6390
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D924C
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D9388
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D94D0
    b lbl_fn_801D4700_00000BFC
    mr r3, r29
    bl fn_801D6754
lbl_fn_801D4700_00000BFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801D4A0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r4, 0xe
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r30, 0x7c(r3)
    stw r4, 0x7c(r3)
    bgt lbl_fn_801D4A0C_00001068
    lis r5, jumptable_80782740@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_80782740@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    li r4, 0x0
    li r5, 0x0
    bl fn_801CE5B0
    li r0, 0x1
    stw r0, 0xfc(r31)
    lwz r3, 0x48(r31)
    li r4, 0x0
    bl fn_8052DEF0
    addi r3, r1, 0x8
    li r4, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80882A78
    stfs f0, 0x58(r31)
    b lbl_fn_801D4A0C_00001068
    li r4, 0x0
    li r5, 0x1
    bl fn_801CE5B0
    lwz r3, 0x1b98(r31)
    li r4, 0x0
    li r0, 0x5
    stw r4, 0xfc(r31)
    stw r3, 0x80(r31)
    stw r0, 0x84(r31)
    stw r4, 0x88(r31)
    stw r0, 0x8c(r31)
    b lbl_fn_801D4A0C_00001068
    li r4, 0x2
    li r5, 0x1
    bl fn_801CE5B0
    li r0, 0x0
    stw r0, 0xfc(r31)
    mr r3, r31
    bl fn_801CF334
    mr r4, r3
    mr r3, r31
    lwz r4, 0x4c(r4)
    bl fn_801DD26C
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r5, 0x1e4(r31)
    addi r6, r31, 0x80
    addi r7, r31, 0x88
    li r8, 0x1
    bl fn_801E6EF0
    mr r3, r31
    bl fn_801E6714
    b lbl_fn_801D4A0C_00001068
    li r4, 0x3
    li r5, 0x1
    bl fn_801CE5B0
    li r0, 0x0
    stw r0, 0xfc(r31)
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r5, 0x1e4(r31)
    bl fn_801E07A4
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r5, 0x1e4(r31)
    addi r6, r31, 0x80
    addi r7, r31, 0x88
    li r8, 0x1
    bl fn_801E6FC8
    mr r3, r31
    bl fn_801E6B10
    b lbl_fn_801D4A0C_00001068
    lwz r3, lbl_8087F430
    li r4, 0xe8
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_801D4A0C_00000DAC
    lwz r3, lbl_8087F430
    li r4, 0xe8
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_801D4A0C_00000DAC:
    cmpwi r30, 0x0
    mr r3, r31
    li r4, 0x4
    li r5, 0x0
    beq lbl_fn_801D4A0C_00000DCC
    cmpwi r30, 0x1
    beq lbl_fn_801D4A0C_00000DCC
    li r5, 0x1
lbl_fn_801D4A0C_00000DCC:
    bl fn_801CE5B0
    lwz r3, 0x1ba0(r31)
    li r4, 0x0
    li r0, 0xd
    stw r4, 0xfc(r31)
    stw r3, 0x80(r31)
    stw r0, 0x84(r31)
    stw r4, 0x88(r31)
    stw r0, 0x8c(r31)
    b lbl_fn_801D4A0C_00001068
    li r4, 0x7
    li r5, 0x1
    bl fn_801CE5B0
    lwz r5, 0x1bb8(r31)
    li r6, 0x0
    li r0, 0x8
    stw r6, 0xfc(r31)
    lwz r4, 0xadc(r31)
    mr r3, r31
    stw r5, 0x80(r31)
    stw r0, 0x84(r31)
    stw r6, 0x88(r31)
    stw r0, 0x8c(r31)
    bl fn_801D70EC
    b lbl_fn_801D4A0C_00001068
    li r4, 0x5
    li r5, 0x1
    bl fn_801CE5B0
    lwz r0, 0x7c(r31)
    li r3, 0x0
    stw r3, 0xfc(r31)
    cmpwi r0, 0x6
    stw r3, 0x1b90(r31)
    stw r3, 0x1b94(r31)
    stw r3, 0x88(r31)
    bne lbl_fn_801D4A0C_00000E7C
    lwz r0, 0x1bb0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801D4A0C_00000E70
    lwz r0, 0x1ba8(r31)
    b lbl_fn_801D4A0C_00000E74
lbl_fn_801D4A0C_00000E70:
    lwz r0, 0x1ba4(r31)
lbl_fn_801D4A0C_00000E74:
    stw r0, 0x80(r31)
    b lbl_fn_801D4A0C_00000E84
lbl_fn_801D4A0C_00000E7C:
    lwz r0, 0x1bac(r31)
    stw r0, 0x80(r31)
lbl_fn_801D4A0C_00000E84:
    li r0, 0x0
    stw r0, 0x1bb0(r31)
    mr r3, r31
    bl fn_801D6F84
    b lbl_fn_801D4A0C_00001068
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801D4A0C_00000EAC
    li r4, 0xe7
    bl fn_803750E4
lbl_fn_801D4A0C_00000EAC:
    mr r3, r31
    li r4, 0x6
    li r5, 0x1
    bl fn_801CE5B0
    li r0, 0x0
    stw r0, 0xfc(r31)
    mr r3, r31
    stw r0, 0x1bb4(r31)
    stw r0, 0x88(r31)
    bl fn_801D6AB0
    lwz r4, 0x1bb4(r31)
    mr r3, r31
    bl fn_801D6C1C
    lwz r0, 0x1bb4(r31)
    stw r0, 0x80(r31)
    b lbl_fn_801D4A0C_00001068
    li r4, 0x7
    li r5, 0x1
    bl fn_801CE5B0
    mr r3, r31
    bl fn_801CF334
    lwz r0, 0x4c(r3)
    lwz r4, lbl_8087F4F0
    slwi r0, r0, 6
    lwz r3, 0x1bb8(r31)
    addis r4, r4, 0x1
    add r4, r4, r0
    subi r30, r4, 0x2c80
    bl fn_80117214
    slwi r0, r3, 2
    lwzx r3, r30, r0
    bl fn_8020BE40
    slwi r0, r3, 29
    srwi r6, r3, 31
    subf r4, r6, r0
    li r5, 0x1
    srawi r0, r3, 3
    stw r5, 0xfc(r31)
    rotlwi r3, r4, 3
    lwz r4, 0xadc(r31)
    add r3, r3, r6
    addze r6, r0
    li r0, 0x0
    stw r3, 0x1f8(r31)
    mr r3, r31
    stw r6, 0x1fc(r31)
    stw r0, 0x88(r31)
    bl fn_801D70EC
    b lbl_fn_801D4A0C_00001068
    li r4, 0x8
    li r5, 0x1
    bl fn_801CE5B0
    li r3, 0x1
    li r0, 0x0
    stw r3, 0xfc(r31)
    mr r3, r31
    stw r0, 0x88(r31)
    bl fn_801CF334
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D4A0C_00000FB4
    mr r3, r31
    bl fn_801CF334
    lwz r3, 0x48(r3)
    addi r3, r3, 0x7d4
    b lbl_fn_801D4A0C_00000FD0
lbl_fn_801D4A0C_00000FB4:
    mr r3, r31
    bl fn_801CF334
    lwz r0, 0x4c(r3)
    lwz r3, lbl_8087F4F0
    mulli r0, r0, 0x43c
    add r3, r3, r0
    addi r3, r3, 0x64ec
lbl_fn_801D4A0C_00000FD0:
    lbz r3, 0x231(r3)
    subi r3, r3, 0x1
    bl fn_8020BF20
    slwi r0, r3, 29
    srwi r5, r3, 31
    subf r4, r5, r0
    srawi r0, r3, 3
    rotlwi r3, r4, 3
    lwz r4, 0xae0(r31)
    add r3, r3, r5
    addze r0, r0
    stw r3, 0x200(r31)
    mr r3, r31
    stw r0, 0x204(r31)
    bl fn_801D7354
    b lbl_fn_801D4A0C_00001068
    lwz r6, 0x1bbc(r3)
    li r5, 0x2
    li r4, 0x0
    li r0, 0x1
    stw r6, 0x80(r3)
    stw r5, 0x84(r3)
    stw r4, 0x88(r3)
    stw r0, 0xfc(r3)
    b lbl_fn_801D4A0C_00001068
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x1bc8(r3)
    stw r0, 0x1bcc(r3)
    b lbl_fn_801D4A0C_00001068
    li r5, 0x0
    li r4, 0x4
    li r0, 0x1
    stw r5, 0x1bc0(r3)
    stw r5, 0x80(r3)
    stw r4, 0x84(r3)
    stw r5, 0x88(r3)
    stw r0, 0xfc(r3)
lbl_fn_801D4A0C_00001068:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801D4E74(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_27
    cmpwi r5, 0x0
    mr r27, r3
    mr r29, r4
    mr r31, r5
    beq lbl_fn_801D4E74_000014EC
    cmplwi r6, 0x1
    li r0, 0x0
    stw r0, 0x90(r1)
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    bgt lbl_fn_801D4E74_00001218
    mr r5, r6
    bl fn_801CFA5C
    cmpwi r3, 0x0
    beq lbl_fn_801D4E74_0000117C
    bl fn_80206BE4
    bl fn_80211480
    mr r28, r3
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_80444BE8
    lwz r4, lbl_8087F4F0
    mr r5, r3
    addi r3, r1, 0x80
    bl fn_80444C50
    addi r3, r1, 0x80
    cmpwi r28, 0x0
    addi r4, r1, 0xa0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    beq lbl_fn_801D4E74_00001468
    lwz r0, 0x90(r1)
    lwz r30, 0x8(r28)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_801D4E74_00001144
    lbz r0, 0x90(r1)
    clrlwi r29, r0, 25
    b lbl_fn_801D4E74_00001148
lbl_fn_801D4E74_00001144:
    lwz r29, 0x94(r1)
lbl_fn_801D4E74_00001148:
    lbz r0, 0x2c(r1)
    mr r3, r30
    stb r0, 0x28(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r29
    mr r6, r30
    addi r3, r1, 0x90
    addi r8, r1, 0x28
    add r7, r30, r0
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801D4E74_00001468
lbl_fn_801D4E74_0000117C:
    lwz r3, lbl_8087F4F0
    bl fn_80444C48
    lwz r0, 0x90(r1)
    la r3, lbl_8087DA58
    lfs f0, lbl_80882A5C
    addi r5, r1, 0x70
    srwi r0, r0, 31
    stfs f0, 0x70(r1)
    cntlzw r0, r0
    addi r4, r1, 0xa0
    srwi r0, r0, 5
    stfs f0, 0x74(r1)
    cntlzw r0, r0
    addi r30, r3, 0xa
    psq_l f1, 0x0(r5), 0, 0
    srwi. r0, r0, 5
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    bne lbl_fn_801D4E74_000011E0
    lbz r0, 0x90(r1)
    clrlwi r29, r0, 25
    b lbl_fn_801D4E74_000011E4
lbl_fn_801D4E74_000011E0:
    lwz r29, 0x94(r1)
lbl_fn_801D4E74_000011E4:
    lbz r0, 0x24(r1)
    mr r3, r30
    stb r0, 0x20(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r29
    mr r6, r30
    addi r3, r1, 0x90
    addi r8, r1, 0x20
    add r7, r30, r0
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801D4E74_00001468
lbl_fn_801D4E74_00001218:
    subi r30, r6, 0x2
    cmplwi r30, 0x1
    bgt lbl_fn_801D4E74_0000131C
    mr r5, r30
    bl fn_801CFAA8
    cmpwi r30, 0x1
    mr r28, r3
    bne lbl_fn_801D4E74_00001268
    mr r3, r27
    mr r4, r29
    li r5, 0x0
    bl fn_801CFAA8
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D4E74_00001268
    mr r3, r27
    mr r4, r29
    li r5, 0x0
    bl fn_801CFAA8
    mr r28, r3
lbl_fn_801D4E74_00001268:
    mr r3, r28
    bl fn_8020EF80
    mr r28, r3
    bl fn_80211480
    mr r30, r3
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_80444B64
    lwz r4, lbl_8087F4F0
    mr r5, r3
    addi r3, r1, 0x60
    bl fn_80444C50
    addi r3, r1, 0x60
    cmpwi r30, 0x0
    addi r4, r1, 0xa0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    beq lbl_fn_801D4E74_00001468
    lwz r0, 0x90(r1)
    lwz r30, 0x8(r30)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_801D4E74_000012E4
    lbz r0, 0x90(r1)
    clrlwi r29, r0, 25
    b lbl_fn_801D4E74_000012E8
lbl_fn_801D4E74_000012E4:
    lwz r29, 0x94(r1)
lbl_fn_801D4E74_000012E8:
    lbz r0, 0x1c(r1)
    mr r3, r30
    stb r0, 0x18(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r29
    mr r6, r30
    addi r3, r1, 0x90
    addi r8, r1, 0x18
    add r7, r30, r0
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801D4E74_00001468
lbl_fn_801D4E74_0000131C:
    cmpwi r6, 0x0
    bge lbl_fn_801D4E74_000013B4
    li r0, 0x0
    lfs f0, lbl_80882A5C
    cntlzw r0, r0
    la r3, lbl_8087DA58
    srwi r0, r0, 5
    stfs f0, 0x50(r1)
    cntlzw r0, r0
    addi r5, r1, 0x50
    stfs f0, 0x54(r1)
    srwi. r0, r0, 5
    addi r4, r1, 0xa0
    addi r30, r3, 0xa
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    bne lbl_fn_801D4E74_0000137C
    lbz r0, 0x90(r1)
    clrlwi r29, r0, 25
    b lbl_fn_801D4E74_00001380
lbl_fn_801D4E74_0000137C:
    li r29, 0x0
lbl_fn_801D4E74_00001380:
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r29
    mr r6, r30
    addi r3, r1, 0x90
    addi r8, r1, 0x10
    add r7, r30, r0
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801D4E74_00001468
lbl_fn_801D4E74_000013B4:
    li r5, 0x2
    bl fn_801CFAA8
    bl fn_8020EF80
    mr r28, r3
    bl fn_80211480
    mr r30, r3
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_80444B64
    lwz r4, lbl_8087F4F0
    mr r5, r3
    addi r3, r1, 0x40
    bl fn_80444C50
    addi r3, r1, 0x40
    cmpwi r30, 0x0
    addi r4, r1, 0xa0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    beq lbl_fn_801D4E74_00001468
    lwz r0, 0x90(r1)
    lwz r30, 0x8(r30)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_801D4E74_00001434
    lbz r0, 0x90(r1)
    clrlwi r29, r0, 25
    b lbl_fn_801D4E74_00001438
lbl_fn_801D4E74_00001434:
    lwz r29, 0x94(r1)
lbl_fn_801D4E74_00001438:
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r29
    mr r6, r30
    addi r3, r1, 0x90
    addi r8, r1, 0x8
    add r7, r30, r0
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_801D4E74_00001468:
    lwz r0, 0x90(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_801D4E74_0000148C
    addi r29, r1, 0x92
    b lbl_fn_801D4E74_00001490
lbl_fn_801D4E74_0000148C:
    lwz r29, 0x98(r1)
lbl_fn_801D4E74_00001490:
    lis r30, lbl_8073C56C@ha
    addi r28, r31, 0x58
    addi r30, r30, lbl_8073C56C@l
    addi r3, r30, 0x459
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    addi r4, r1, 0xa0
    addi r5, r1, 0x30
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r30, 0x460
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    lwz r0, 0x90(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801D4E74_000014EC
    lwz r3, 0x98(r1)
    bl dtor_80084684
lbl_fn_801D4E74_000014EC:
    addi r11, r1, 0xd0
    bl _restgpr_27
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_801D52F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x7c(r3)
    cmplwi r0, 0xa
    bgt lbl_fn_801D52F8_00001608
    lis r4, jumptable_8078277C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8078277C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    bl fn_801CF334
    mr r4, r3
    mr r3, r31
    lwz r4, 0x4c(r4)
    bl fn_801DD26C
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r5, 0x1e4(r31)
    addi r6, r31, 0x80
    addi r7, r31, 0x88
    li r8, 0x1
    bl fn_801E6EF0
    mr r3, r31
    bl fn_801E6714
    b lbl_fn_801D52F8_00001608
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r5, 0x1e4(r31)
    bl fn_801E07A4
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r5, 0x1e4(r31)
    addi r6, r31, 0x80
    addi r7, r31, 0x88
    li r8, 0x1
    bl fn_801E6FC8
    mr r3, r31
    bl fn_801E6B10
    b lbl_fn_801D52F8_00001608
    lwz r4, 0xadc(r3)
    bl fn_801D70EC
    b lbl_fn_801D52F8_00001608
    bl fn_801D6F84
    b lbl_fn_801D52F8_00001608
    bl fn_801D6AB0
    lwz r4, 0x1bb4(r31)
    mr r3, r31
    bl fn_801D6C1C
    lwz r0, 0x80(r31)
    stw r0, 0x1bb4(r31)
    b lbl_fn_801D52F8_00001608
    lwz r4, 0xadc(r3)
    bl fn_801D70EC
    b lbl_fn_801D52F8_00001608
    lwz r4, 0xae0(r3)
    bl fn_801D7354
lbl_fn_801D52F8_00001608:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801D5410(void)
{
    nofralloc
    lwz r0, 0x1e8(r3)
    stw r0, 0x1ec(r3)
    stw r5, 0x1e8(r3)
    blr
}

asm void fn_801D5420(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801D5420_00001690
    li r4, 0x395
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_801D5420_00001690
    cmpwi r30, 0x0
    bne lbl_fn_801D5420_00001690
    cmpwi r31, 0x0
    bne lbl_fn_801D5420_00001690
    lwz r3, lbl_8087F430
    li r4, 0x396
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_801D5420_00001690
    li r3, 0x0
    b lbl_fn_801D5420_00001694
lbl_fn_801D5420_00001690:
    li r3, 0x1
lbl_fn_801D5420_00001694:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801D54A0(void)
{
    nofralloc
    lis r4, lbl_807C7D18@ha
    lfs f1, lbl_80882A5C
    addi r3, r4, lbl_807C7D18@l
    lfs f0, lbl_80882ACC
    stfs f1, lbl_807C7D18@l(r4)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

asm void fn_801D54C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D54C0_00001A9C
    mr r3, r30
    bl fn_801CF334
    lwz r5, 0x1ba0(r30)
    lwz r0, 0x4c(r3)
    lwz r4, lbl_8087F4F0
    cmplwi r5, 0x7
    slwi r0, r0, 6
    addis r3, r4, 0x1
    add r3, r3, r0
    ble lbl_fn_801D54C0_00001754
    cmpwi r5, 0x8
    beq lbl_fn_801D54C0_000017C8
    cmpwi r5, 0x9
    beq lbl_fn_801D54C0_000017E4
    cmpwi r5, 0xa
    beq lbl_fn_801D54C0_000018DC
    cmpwi r5, 0xb
    beq lbl_fn_801D54C0_00001994
    cmpwi r5, 0xc
    beq lbl_fn_801D54C0_00001A00
    b lbl_fn_801D54C0_00001A68
lbl_fn_801D54C0_00001754:
    lwz r4, -0x7d70(r3)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D54C0_000017A4
    lwz r31, lbl_8087F580
    li r3, 0x1
    li r4, 0x105
    bl fn_80116FC0
    mr r4, r3
    mr r3, r31
    bl fn_804A4294
    addi r3, r1, 0x34
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x34
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_000017A4:
    lwz r0, 0x1ba0(r30)
    mr r3, r30
    stw r0, 0x1bb8(r30)
    li r4, 0x8
    lwz r12, 0x0(r30)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D54C0_00001A68
lbl_fn_801D54C0_000017C8:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x9
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D54C0_00001A68
lbl_fn_801D54C0_000017E4:
    lwz r4, -0x7d70(r3)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D54C0_00001834
    lwz r31, lbl_8087F580
    li r3, 0x1
    li r4, 0x105
    bl fn_80116FC0
    mr r4, r3
    mr r3, r31
    bl fn_804A4294
    addi r3, r1, 0x30
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_00001834:
    lwz r3, lbl_8087F430
    li r4, 0x147
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_801D54C0_0000185C
    lwz r3, lbl_8087F430
    li r4, 0x147
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_801D54C0_0000185C:
    lwz r31, lbl_8087F4F0
    li r4, 0x0
    mr r3, r31
    bl fn_80444A50
    mr r4, r3
    mr r3, r31
    bl fn_804444E8
    cmpwi r3, 0x0
    bgt lbl_fn_801D54C0_000018A4
    lwz r31, lbl_8087F4F0
    li r4, 0x1
    mr r3, r31
    bl fn_80444A50
    mr r4, r3
    mr r3, r31
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801D54C0_000018C0
lbl_fn_801D54C0_000018A4:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0xe
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D54C0_00001A68
lbl_fn_801D54C0_000018C0:
    addi r3, r1, 0x2c
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_000018DC:
    lwz r4, -0x7d70(r3)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D54C0_0000192C
    lwz r31, lbl_8087F580
    li r3, 0x1
    li r4, 0x105
    bl fn_80116FC0
    mr r4, r3
    mr r3, r31
    bl fn_804A4294
    addi r3, r1, 0x28
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_0000192C:
    mr r3, r30
    bl fn_801D6AB0
    lwz r0, 0x137c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801D54C0_00001978
    lwz r31, lbl_8087F580
    li r3, 0x1
    li r4, 0x106
    bl fn_80116FC0
    mr r4, r3
    mr r3, r31
    bl fn_804A4294
    addi r3, r1, 0x24
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_00001978:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0xa
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D54C0_00001A68
lbl_fn_801D54C0_00001994:
    lwz r4, -0x7d70(r3)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D54C0_000019E4
    lwz r31, lbl_8087F580
    li r3, 0x1
    li r4, 0x105
    bl fn_80116FC0
    mr r4, r3
    mr r3, r31
    bl fn_804A4294
    addi r3, r1, 0x20
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_000019E4:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x6
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D54C0_00001A68
lbl_fn_801D54C0_00001A00:
    lwz r4, -0x7d70(r3)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D54C0_00001A50
    lwz r31, lbl_8087F580
    li r3, 0x1
    li r4, 0x105
    bl fn_80116FC0
    mr r4, r3
    mr r3, r31
    bl fn_804A4294
    addi r3, r1, 0x1c
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_00001A50:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x7
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_fn_801D54C0_00001A68:
    addi r3, r1, 0x18
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_00001A9C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D54C0_00001B78
    lwz r0, 0x1e0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801D54C0_00001B0C
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0xc
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_00001B0C:
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_801D54C0_00001B9C
    li r4, 0x1
    li r5, 0x0
    li r6, 0x20
    li r7, 0x1e
    bl fn_800CFBA0
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    li r5, 0x0
    li r6, 0x20
    li r7, 0xf
    bl fn_800CFBA0
    b lbl_fn_801D54C0_00001B9C
lbl_fn_801D54C0_00001B78:
    lwz r31, 0x80(r30)
    mr r3, r30
    li r4, 0x1
    li r5, 0x3
    bl fn_80510FBC
    lwz r0, 0x80(r30)
    cmpw r31, r0
    beq lbl_fn_801D54C0_00001B9C
    stw r0, 0x1ba0(r30)
lbl_fn_801D54C0_00001B9C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
