#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_80061AE4(void);
extern void fn_8006EF48(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800C32E0(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800DC6B4(void);
extern void fn_80117228(void);
extern void fn_801231D0(void);
extern void fn_801F4728(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801FECE0(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_804A53D4(void);
extern void fn_804C54FC(void);
extern void fn_804C8D80(void);
extern void fn_804CB74C(void);
extern void fn_804CBA1C(void);
extern void fn_804CBBD8(void);
extern void fn_804CD2F8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80759338[];
extern u8 lbl_80759374[];

/* Small data declarations */
extern u32 lbl_8087E140;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F5D8;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F9C0;
extern u32 lbl_808813D0;
extern u32 lbl_808874E0;
extern u32 lbl_808874E4;
extern u32 lbl_808874F0;
extern u32 lbl_808874F4;
extern u32 lbl_808874F8;
extern u32 lbl_808874FC;
extern u32 lbl_80887500;
extern u32 lbl_80887504;
extern u32 lbl_80887508;
extern u32 lbl_8088750C;
extern u32 lbl_80887510;
extern u32 lbl_80887514;
extern u32 lbl_80887518;
extern u32 lbl_8088751C;
extern u32 lbl_80887520;
extern u32 lbl_80887524;
extern u32 lbl_80887528;
extern u32 lbl_8088752C;
extern u32 lbl_80887530;

/* Function declarations */
void fn_804C9C88(void);
void fn_804C9EF8(void);
void fn_804CA250(void);
void fn_804CAAE8(void);
void fn_804CAD90(void);
void fn_804CAF88(void);
void fn_804CB0B8(void);
void fn_804CB2F0(void);

asm void fn_804C9C88(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r5, 0x0
    lwz r31, lbl_8087EF70
    lwz r29, 0xe4(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    beq lbl_fn_804C9C88_000000FC
    mr r3, r31
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804C9C88_00000064
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804C9C88_00000098
lbl_fn_804C9C88_00000064:
    lwz r4, 0xe4(r26)
    divw r0, r4, r28
    mullw r0, r0, r28
    subf r3, r0, r4
    subic. r0, r3, 0x1
    blt lbl_fn_804C9C88_00000088
    subi r0, r4, 0x1
    stw r0, 0xe4(r26)
    b lbl_fn_804C9C88_000000FC
lbl_fn_804C9C88_00000088:
    add r3, r28, r4
    subi r0, r3, 0x1
    stw r0, 0xe4(r26)
    b lbl_fn_804C9C88_000000FC
lbl_fn_804C9C88_00000098:
    mr r3, r31
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804C9C88_000000C8
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804C9C88_000000FC
lbl_fn_804C9C88_000000C8:
    lwz r4, 0xe4(r26)
    divw r0, r4, r28
    mullw r0, r0, r28
    subf r3, r0, r4
    addi r0, r3, 0x1
    cmpw r0, r28
    bge lbl_fn_804C9C88_000000F0
    addi r0, r4, 0x1
    stw r0, 0xe4(r26)
    b lbl_fn_804C9C88_000000FC
lbl_fn_804C9C88_000000F0:
    subf r3, r28, r4
    addi r0, r3, 0x1
    stw r0, 0xe4(r26)
lbl_fn_804C9C88_000000FC:
    cmpwi r27, 0x1
    ble lbl_fn_804C9C88_000001A4
    mr r3, r31
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804C9C88_00000134
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804C9C88_00000154
lbl_fn_804C9C88_00000134:
    lwz r0, 0xe4(r26)
    subf. r3, r28, r0
    stw r3, 0xe4(r26)
    bge lbl_fn_804C9C88_000001A4
    mullw r0, r27, r28
    add r0, r3, r0
    stw r0, 0xe4(r26)
    b lbl_fn_804C9C88_000001A4
lbl_fn_804C9C88_00000154:
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804C9C88_00000184
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804C9C88_000001A4
lbl_fn_804C9C88_00000184:
    mullw r3, r27, r28
    lwz r0, 0xe4(r26)
    add r0, r0, r28
    stw r0, 0xe4(r26)
    cmpw r0, r3
    blt lbl_fn_804C9C88_000001A4
    subf r0, r3, r0
    stw r0, 0xe4(r26)
lbl_fn_804C9C88_000001A4:
    lwz r0, 0xe4(r26)
    cmpw r0, r29
    beq lbl_fn_804C9C88_000001D0
    addi r3, r1, 0x10
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_808874E0
    stfs f0, 0x170(r26)
lbl_fn_804C9C88_000001D0:
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804C9C88_00000220
    lwz r0, 0xd8(r26)
    cmpwi r0, 0x6
    bne lbl_fn_804C9C88_00000200
    lwz r0, 0xe8(r26)
    cmpwi r0, 0x0
    beq lbl_fn_804C9C88_00000254
lbl_fn_804C9C88_00000200:
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    li r30, 0x1
    b lbl_fn_804C9C88_00000254
lbl_fn_804C9C88_00000220:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804C9C88_00000254
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r30, 0x2
lbl_fn_804C9C88_00000254:
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804C9EF8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x1
    li r5, 0xa
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    bl fn_804C9C88
    lwz r30, lbl_8087F5D8
    cmpwi r3, 0x1
    mr r29, r30
    bne lbl_fn_804C9EF8_000002B8
    mr r3, r31
    li r4, 0x4
    bl fn_804C8D80
    b lbl_fn_804C9EF8_000003C8
lbl_fn_804C9EF8_000002B8:
    cmpwi r3, 0x2
    bne lbl_fn_804C9EF8_000002D0
    mr r3, r31
    li r4, 0x7
    bl fn_804C8D80
    b lbl_fn_804C9EF8_000003C8
lbl_fn_804C9EF8_000002D0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0xc
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804C9EF8_00000310
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x3
    bl fn_804C8D80
    b lbl_fn_804C9EF8_000003C8
lbl_fn_804C9EF8_00000310:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_804C9EF8_00000340
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x17
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804C9EF8_0000036C
lbl_fn_804C9EF8_00000340:
    subic. r29, r30, 0x1
    bge lbl_fn_804C9EF8_0000034C
    addi r29, r29, 0x4
lbl_fn_804C9EF8_0000034C:
    stw r29, lbl_8087F5D8
    addi r3, r1, 0x10
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804C9EF8_000003C8
lbl_fn_804C9EF8_0000036C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_804C9EF8_0000039C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x18
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804C9EF8_000003C8
lbl_fn_804C9EF8_0000039C:
    addi r29, r30, 0x1
    cmpwi r29, 0x4
    blt lbl_fn_804C9EF8_000003AC
    subi r29, r29, 0x4
lbl_fn_804C9EF8_000003AC:
    stw r29, lbl_8087F5D8
    addi r3, r1, 0xc
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804C9EF8_000003C8:
    cmpw r29, r30
    beq lbl_fn_804C9EF8_000003D8
    lfs f0, lbl_808874E0
    stfs f0, 0x170(r31)
lbl_fn_804C9EF8_000003D8:
    lwz r3, lbl_8087F0A8
    li r4, 0x34
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_804C9EF8_000005AC
    lwz r0, lbl_8087F5D8
    lwz r3, lbl_8087F610
    mulli r0, r0, 0xa
    lwz r4, 0xe4(r31)
    lwz r5, lbl_8087F628
    addi r3, r3, 0x2a50
    add r0, r4, r0
    slwi r0, r0, 2
    add r4, r5, r0
    lha r0, 0xc38(r4)
    lha r5, 0xc3a(r4)
    cmpwi r0, 0x0
    blt lbl_fn_804C9EF8_0000042C
    cmpwi r0, 0x15
    ble lbl_fn_804C9EF8_00000434
lbl_fn_804C9EF8_0000042C:
    li r3, 0x0
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_00000434:
    bge lbl_fn_804C9EF8_0000046C
    cmpwi r5, 0x0
    blt lbl_fn_804C9EF8_00000450
    mulli r4, r0, 0xc
    lwzx r0, r3, r4
    cmpw r0, r5
    bgt lbl_fn_804C9EF8_00000458
lbl_fn_804C9EF8_00000450:
    li r3, 0x0
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_00000458:
    add r3, r3, r4
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_0000046C:
    cmpwi r5, 0x0
    bge lbl_fn_804C9EF8_0000047C
    li r3, 0x0
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_0000047C:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804C9EF8_00000494
lbl_fn_804C9EF8_00000488:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804C9EF8_00000494:
    cmpwi r4, 0x14
    bge lbl_fn_804C9EF8_000004A8
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804C9EF8_00000488
lbl_fn_804C9EF8_000004A8:
    cmpwi r4, 0x14
    bge lbl_fn_804C9EF8_00000554
    cmpwi r4, 0x0
    blt lbl_fn_804C9EF8_000004C0
    cmpwi r4, 0x15
    ble lbl_fn_804C9EF8_000004C8
lbl_fn_804C9EF8_000004C0:
    li r3, 0x0
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_000004C8:
    bge lbl_fn_804C9EF8_00000500
    cmpwi r5, 0x0
    blt lbl_fn_804C9EF8_000004E4
    mulli r4, r4, 0xc
    lwzx r0, r3, r4
    cmpw r0, r5
    bgt lbl_fn_804C9EF8_000004EC
lbl_fn_804C9EF8_000004E4:
    li r3, 0x0
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_000004EC:
    add r3, r3, r4
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_00000500:
    cmpwi r5, 0x0
    bge lbl_fn_804C9EF8_00000510
    li r3, 0x0
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_00000510:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804C9EF8_00000528
lbl_fn_804C9EF8_0000051C:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804C9EF8_00000528:
    cmpwi r4, 0x14
    bge lbl_fn_804C9EF8_0000053C
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804C9EF8_0000051C
lbl_fn_804C9EF8_0000053C:
    cmpwi r4, 0x14
    bge lbl_fn_804C9EF8_0000054C
    bl fn_804C54FC
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_0000054C:
    li r3, 0x0
    b lbl_fn_804C9EF8_00000558
lbl_fn_804C9EF8_00000554:
    li r3, 0x0
lbl_fn_804C9EF8_00000558:
    cmpwi r3, 0x0
    beq lbl_fn_804C9EF8_000005AC
    lwz r30, 0x0(r3)
    addi r3, r31, 0x174
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    cmpwi r30, 0x0
    beq lbl_fn_804C9EF8_000005AC
    lfs f1, lbl_808874E4
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C32E0
    addi r3, r31, 0x174
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804C9EF8_000005AC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804CA250(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r28, lbl_8087EF70
    lwz r31, 0xe4(r3)
    lwz r30, 0xec(r3)
    bl fn_804CAD90
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_804C9C88
    cmpwi r3, 0x1
    bne lbl_fn_804CA250_00000660
    lwz r0, lbl_8087F5D8
    mr r3, r29
    lwz r6, 0x160(r29)
    li r4, 0x1
    mulli r5, r0, 0xa
    lwz r7, lbl_8087F628
    lwz r0, 0x164(r29)
    add r5, r6, r5
    slwi r5, r5, 2
    add r6, r7, r5
    sth r0, 0xc38(r6)
    lwz r0, 0xe4(r29)
    slwi r0, r0, 2
    add r5, r29, r0
    lwz r0, 0xf0(r5)
    sth r0, 0xc3a(r6)
    bl fn_804C8D80
    li r0, 0x1
    stw r0, 0x210(r29)
    b lbl_fn_804CA250_00000E40
lbl_fn_804CA250_00000660:
    cmpwi r3, 0x2
    bne lbl_fn_804CA250_00000678
    mr r3, r29
    li r4, 0x5
    bl fn_804C8D80
    b lbl_fn_804CA250_00000E40
lbl_fn_804CA250_00000678:
    lwz r0, 0xe8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804CA250_00000A94
    lwz r3, lbl_8087F0A8
    li r4, 0x34
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_804CA250_0000084C
    lwz r0, 0xe4(r29)
    lwz r6, 0x164(r29)
    slwi r0, r0, 2
    lwz r3, lbl_8087F610
    add r4, r29, r0
    cmpwi r6, 0x0
    lwz r5, 0xf0(r4)
    addi r3, r3, 0x2a50
    blt lbl_fn_804CA250_000006C8
    cmpwi r6, 0x15
    ble lbl_fn_804CA250_000006D0
lbl_fn_804CA250_000006C8:
    li r3, 0x0
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_000006D0:
    bge lbl_fn_804CA250_00000708
    cmpwi r5, 0x0
    blt lbl_fn_804CA250_000006EC
    mulli r4, r6, 0xc
    lwzx r0, r3, r4
    cmpw r0, r5
    bgt lbl_fn_804CA250_000006F4
lbl_fn_804CA250_000006EC:
    li r3, 0x0
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_000006F4:
    add r3, r3, r4
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_00000708:
    cmpwi r5, 0x0
    bge lbl_fn_804CA250_00000718
    li r3, 0x0
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_00000718:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CA250_00000730
lbl_fn_804CA250_00000724:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CA250_00000730:
    cmpwi r4, 0x14
    bge lbl_fn_804CA250_00000744
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CA250_00000724
lbl_fn_804CA250_00000744:
    cmpwi r4, 0x14
    bge lbl_fn_804CA250_000007F0
    cmpwi r4, 0x0
    blt lbl_fn_804CA250_0000075C
    cmpwi r4, 0x15
    ble lbl_fn_804CA250_00000764
lbl_fn_804CA250_0000075C:
    li r3, 0x0
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_00000764:
    bge lbl_fn_804CA250_0000079C
    cmpwi r5, 0x0
    blt lbl_fn_804CA250_00000780
    mulli r4, r4, 0xc
    lwzx r0, r3, r4
    cmpw r0, r5
    bgt lbl_fn_804CA250_00000788
lbl_fn_804CA250_00000780:
    li r3, 0x0
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_00000788:
    add r3, r3, r4
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_0000079C:
    cmpwi r5, 0x0
    bge lbl_fn_804CA250_000007AC
    li r3, 0x0
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_000007AC:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CA250_000007C4
lbl_fn_804CA250_000007B8:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CA250_000007C4:
    cmpwi r4, 0x14
    bge lbl_fn_804CA250_000007D8
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CA250_000007B8
lbl_fn_804CA250_000007D8:
    cmpwi r4, 0x14
    bge lbl_fn_804CA250_000007E8
    bl fn_804C54FC
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_000007E8:
    li r3, 0x0
    b lbl_fn_804CA250_000007F4
lbl_fn_804CA250_000007F0:
    li r3, 0x0
lbl_fn_804CA250_000007F4:
    cmpwi r3, 0x0
    beq lbl_fn_804CA250_00000A74
    lwz r28, 0x0(r3)
    addi r3, r29, 0x174
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    cmpwi r28, 0x0
    beq lbl_fn_804CA250_00000A74
    lfs f1, lbl_808874E4
    mr r4, r28
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C32E0
    addi r3, r29, 0x174
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804CA250_00000A74
lbl_fn_804CA250_0000084C:
    mr r3, r28
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804CA250_0000087C
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804CA250_000008CC
lbl_fn_804CA250_0000087C:
    lwz r3, 0xe4(r29)
    subic. r0, r3, 0x1
    stw r0, 0xe4(r29)
    bge lbl_fn_804CA250_00000A74
    lwz r3, 0xec(r29)
    li r0, 0x0
    stw r0, 0xe4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804CA250_000008AC
    subi r0, r3, 0x1
    stw r0, 0xec(r29)
    b lbl_fn_804CA250_00000A74
lbl_fn_804CA250_000008AC:
    lwz r3, 0xe8(r29)
    cmpwi r3, 0x8
    ble lbl_fn_804CA250_00000A74
    subi r0, r3, 0x8
    li r3, 0x7
    stw r3, 0xe4(r29)
    stw r0, 0xec(r29)
    b lbl_fn_804CA250_00000A74
lbl_fn_804CA250_000008CC:
    mr r3, r28
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804CA250_000008FC
    mr r3, r28
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804CA250_00000948
lbl_fn_804CA250_000008FC:
    lwz r3, 0xe4(r29)
    addi r3, r3, 0x1
    stw r3, 0xe4(r29)
    cmpwi r3, 0x7
    ble lbl_fn_804CA250_00000A74
    lwz r4, 0xec(r29)
    lwz r0, 0xe8(r29)
    add r3, r4, r3
    cmpw r3, r0
    bge lbl_fn_804CA250_00000938
    addi r3, r4, 0x1
    li r0, 0x7
    stw r3, 0xec(r29)
    stw r0, 0xe4(r29)
    b lbl_fn_804CA250_00000A74
lbl_fn_804CA250_00000938:
    li r0, 0x0
    stw r0, 0xe4(r29)
    stw r0, 0xec(r29)
    b lbl_fn_804CA250_00000A74
lbl_fn_804CA250_00000948:
    mr r3, r28
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804CA250_00000978
    mr r3, r28
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804CA250_000009D0
lbl_fn_804CA250_00000978:
    lwz r0, 0xec(r29)
    cmpwi r0, 0x0
    bne lbl_fn_804CA250_000009B0
    lwz r0, 0xe4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_804CA250_000009B0
    lwz r3, 0xe8(r29)
    cmpwi r3, 0x8
    ble lbl_fn_804CA250_000009B0
    subi r0, r3, 0x8
    li r3, 0x7
    stw r3, 0xe4(r29)
    stw r0, 0xec(r29)
    b lbl_fn_804CA250_00000A74
lbl_fn_804CA250_000009B0:
    lwz r3, 0xec(r29)
    subic. r0, r3, 0x8
    stw r0, 0xec(r29)
    bge lbl_fn_804CA250_00000A74
    li r0, 0x0
    stw r0, 0xe4(r29)
    stw r0, 0xec(r29)
    b lbl_fn_804CA250_00000A74
lbl_fn_804CA250_000009D0:
    mr r3, r28
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804CA250_00000A00
    mr r3, r28
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804CA250_00000A74
lbl_fn_804CA250_00000A00:
    lwz r4, 0xe8(r29)
    cmpwi r4, 0x8
    bgt lbl_fn_804CA250_00000A20
    subi r3, r4, 0x1
    li r0, 0x0
    stw r3, 0xe4(r29)
    stw r0, 0xec(r29)
    b lbl_fn_804CA250_00000A74
lbl_fn_804CA250_00000A20:
    lwz r3, 0xec(r29)
    subi r0, r4, 0x8
    cmpw r3, r0
    bne lbl_fn_804CA250_00000A4C
    lwz r0, 0xe4(r29)
    cmpwi r0, 0x7
    bne lbl_fn_804CA250_00000A4C
    li r0, 0x0
    stw r0, 0xe4(r29)
    stw r0, 0xec(r29)
    b lbl_fn_804CA250_00000A74
lbl_fn_804CA250_00000A4C:
    lwz r4, 0xec(r29)
    lwz r3, 0xe8(r29)
    addi r0, r4, 0x8
    stw r0, 0xec(r29)
    subi r3, r3, 0x8
    cmpw r0, r3
    ble lbl_fn_804CA250_00000A74
    li r0, 0x7
    stw r0, 0xe4(r29)
    stw r3, 0xec(r29)
lbl_fn_804CA250_00000A74:
    lwz r4, 0xec(r29)
    lwz r3, 0xe4(r29)
    lwz r0, 0xe8(r29)
    add r3, r4, r3
    cmpw r3, r0
    blt lbl_fn_804CA250_00000A94
    stw r31, 0xe4(r29)
    stw r30, 0xec(r29)
lbl_fn_804CA250_00000A94:
    lwz r0, 0xe4(r29)
    cmpw r31, r0
    bne lbl_fn_804CA250_00000AAC
    lwz r0, 0xec(r29)
    cmpw r30, r0
    beq lbl_fn_804CA250_00000B0C
lbl_fn_804CA250_00000AAC:
    lfs f0, lbl_808874E0
    addi r3, r1, 0xc
    stfs f0, 0x170(r29)
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r5, 0xec(r29)
    lis r4, lbl_80759374@ha
    lwz r0, 0xe4(r29)
    addi r4, r4, lbl_80759374@l
    lwz r3, 0x50(r29)
    addi r4, r4, 0x146
    add r5, r5, r0
    li r6, 0x0
    addi r5, r5, 0x1
    bl fn_801F4CB4
    lwz r0, 0xec(r29)
    cmpw r30, r0
    beq lbl_fn_804CA250_00000B0C
    mr r3, r29
    subf r4, r30, r0
    bl fn_804CD2F8
lbl_fn_804CA250_00000B0C:
    lwz r0, 0xe4(r29)
    lwz r6, 0x164(r29)
    slwi r0, r0, 2
    lwz r3, lbl_8087F610
    add r4, r29, r0
    cmpwi r6, 0x0
    lwz r5, 0xf0(r4)
    addi r3, r3, 0x2a50
    blt lbl_fn_804CA250_00000B38
    cmpwi r6, 0x15
    ble lbl_fn_804CA250_00000B40
lbl_fn_804CA250_00000B38:
    li r3, 0x0
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000B40:
    bge lbl_fn_804CA250_00000B78
    cmpwi r5, 0x0
    blt lbl_fn_804CA250_00000B5C
    mulli r4, r6, 0xc
    lwzx r0, r3, r4
    cmpw r0, r5
    bgt lbl_fn_804CA250_00000B64
lbl_fn_804CA250_00000B5C:
    li r3, 0x0
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000B64:
    add r3, r3, r4
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000B78:
    cmpwi r5, 0x0
    bge lbl_fn_804CA250_00000B88
    li r3, 0x0
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000B88:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CA250_00000BA0
lbl_fn_804CA250_00000B94:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CA250_00000BA0:
    cmpwi r4, 0x14
    bge lbl_fn_804CA250_00000BB4
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CA250_00000B94
lbl_fn_804CA250_00000BB4:
    cmpwi r4, 0x14
    bge lbl_fn_804CA250_00000C60
    cmpwi r4, 0x0
    blt lbl_fn_804CA250_00000BCC
    cmpwi r4, 0x15
    ble lbl_fn_804CA250_00000BD4
lbl_fn_804CA250_00000BCC:
    li r3, 0x0
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000BD4:
    bge lbl_fn_804CA250_00000C0C
    cmpwi r5, 0x0
    blt lbl_fn_804CA250_00000BF0
    mulli r4, r4, 0xc
    lwzx r0, r3, r4
    cmpw r0, r5
    bgt lbl_fn_804CA250_00000BF8
lbl_fn_804CA250_00000BF0:
    li r3, 0x0
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000BF8:
    add r3, r3, r4
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000C0C:
    cmpwi r5, 0x0
    bge lbl_fn_804CA250_00000C1C
    li r3, 0x0
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000C1C:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CA250_00000C34
lbl_fn_804CA250_00000C28:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CA250_00000C34:
    cmpwi r4, 0x14
    bge lbl_fn_804CA250_00000C48
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CA250_00000C28
lbl_fn_804CA250_00000C48:
    cmpwi r4, 0x14
    bge lbl_fn_804CA250_00000C58
    bl fn_804C54FC
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000C58:
    li r3, 0x0
    b lbl_fn_804CA250_00000C64
lbl_fn_804CA250_00000C60:
    li r3, 0x0
lbl_fn_804CA250_00000C64:
    cmpwi r3, 0x0
    beq lbl_fn_804CA250_00000D60
    lwz r0, 0x8(r3)
    srwi r0, r0, 24
    cmplwi r0, 0x14
    bge lbl_fn_804CA250_00000D60
    lwz r4, 0x50(r29)
    lis r30, lbl_80759374@ha
    addi r30, r30, lbl_80759374@l
    addi r3, r30, 0x17e
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F0
    mr r4, r3
    mr r3, r28
    li r5, 0x1
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x17e
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F0
    mr r4, r3
    mr r3, r28
    li r5, 0x2
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x17e
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F0
    mr r4, r3
    mr r3, r28
    li r5, 0x3
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x186
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F0
    mr r4, r3
    mr r3, r28
    li r5, 0x1
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x186
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F0
    mr r4, r3
    mr r3, r28
    li r5, 0x2
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x186
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F0
    mr r4, r3
    mr r3, r28
    li r5, 0x3
    bl fn_801FEDBC
    b lbl_fn_804CA250_00000E40
lbl_fn_804CA250_00000D60:
    lwz r4, 0x50(r29)
    lis r30, lbl_80759374@ha
    addi r30, r30, lbl_80759374@l
    addi r3, r30, 0x17e
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F4
    mr r4, r3
    mr r3, r28
    li r5, 0x1
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x17e
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F4
    mr r4, r3
    mr r3, r28
    li r5, 0x2
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x17e
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F4
    mr r4, r3
    mr r3, r28
    li r5, 0x3
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x186
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F4
    mr r4, r3
    mr r3, r28
    li r5, 0x1
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x186
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F4
    mr r4, r3
    mr r3, r28
    li r5, 0x2
    bl fn_801FEDBC
    lwz r4, 0x50(r29)
    addi r3, r30, 0x186
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F4
    mr r4, r3
    mr r3, r28
    li r5, 0x3
    bl fn_801FEDBC
lbl_fn_804CA250_00000E40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804CAAE8(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    bl _savegpr_26
    lfs f0, lbl_808874E0
    mr r31, r3
    lis r29, lbl_80759374@ha
    stfs f0, 0x58(r1)
    mr r27, r31
    li r28, 0x0
    stfs f0, 0x5c(r1)
    addi r29, r29, lbl_80759374@l
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
lbl_fn_804CAAE8_00000EB0:
    addi r3, r1, 0x70
    addi r4, r29, 0x18e
    addi r5, r28, 0x1
    crclr 6
    bl sprintf
    lwz r30, 0x50(r31)
    addi r3, r1, 0x70
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x44
    bl fn_801F4E8C
    lfs f4, 0x44(r1)
    addi r4, r29, 0x1aa
    lfs f3, 0x48(r1)
    addi r5, r1, 0x58
    lfs f2, 0x4c(r1)
    lfs f1, 0x50(r1)
    lfs f0, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x58(r27)
    bl fn_801F4728
    addi r28, r28, 0x1
    addi r27, r27, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_804CAAE8_00000EB0
    lis r3, lbl_80759338@ha
    lis r30, lbl_80759374@ha
    lfd f30, lbl_80759338@l(r3)
    mr r27, r31
    lfs f31, lbl_808874F8
    addi r30, r30, lbl_80759374@l
    li r26, 0x0
    lis r29, 0x4330
lbl_fn_804CAAE8_00000F48:
    xoris r0, r26, 0x8000
    stw r0, 0xb4(r1)
    slwi r0, r26, 29
    srwi r4, r26, 31
    stw r29, 0xb0(r1)
    subf r0, r4, r0
    rotlwi r0, r0, 3
    addi r3, r1, 0x70
    lfd f0, 0xb0(r1)
    add r5, r0, r4
    addi r4, r30, 0x1b5
    fsubs f0, f0, f30
    addi r5, r5, 0x1
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r28, 0xbc(r1)
    crclr 6
    bl sprintf
    slwi r0, r28, 2
    addi r3, r1, 0x70
    add r4, r31, r0
    lwz r28, 0x58(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lfs f4, 0x30(r1)
    addi r4, r30, 0x1c6
    lfs f3, 0x34(r1)
    addi r5, r1, 0x58
    lfs f2, 0x38(r1)
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x74(r27)
    bl fn_801F4728
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmpwi r26, 0x18
    blt lbl_fn_804CAAE8_00000F48
    lis r30, lbl_80759374@ha
    mr r27, r31
    addi r30, r30, lbl_80759374@l
    li r26, 0x0
    addi r29, r30, 0x1d7
lbl_fn_804CAAE8_00001014:
    addi r3, r1, 0x70
    addi r4, r30, 0x1e6
    addi r5, r26, 0x1
    crclr 6
    bl sprintf
    lwz r28, 0x50(r31)
    addi r3, r1, 0x70
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    addi r4, r30, 0x1aa
    lfs f3, 0x20(r1)
    addi r5, r1, 0x58
    lfs f2, 0x24(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x64(r27)
    bl fn_801F4728
    lwz r28, 0x64(r27)
    mr r3, r29
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addi r4, r30, 0x1c6
    lfs f3, 0xc(r1)
    addi r5, r1, 0x58
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x6c(r27)
    bl fn_801F4728
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmpwi r26, 0x2
    blt lbl_fn_804CAAE8_00001014
    addi r11, r1, 0xe0
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    bl _restgpr_26
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_804CAD90(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_26
    lfs f0, lbl_808874E0
    lis r31, lbl_80759374@ha
    mr r26, r3
    stfs f0, 0x58(r1)
    addi r31, r31, lbl_80759374@l
    li r27, 0x0
    stfs f0, 0x5c(r1)
    mr r28, r26
    addi r29, r31, 0x1d7
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
lbl_fn_804CAD90_0000114C:
    addi r3, r1, 0x70
    addi r4, r31, 0x1e6
    addi r5, r27, 0x1
    crclr 6
    bl sprintf
    lwz r30, 0x50(r26)
    addi r3, r1, 0x70
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x44
    bl fn_801F4E8C
    lfs f4, 0x44(r1)
    addi r4, r31, 0x1aa
    lfs f3, 0x48(r1)
    addi r5, r1, 0x58
    lfs f2, 0x4c(r1)
    lfs f1, 0x50(r1)
    lfs f0, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x64(r28)
    bl fn_801F4728
    lwz r30, 0x64(r28)
    mr r3, r29
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lfs f4, 0x30(r1)
    addi r4, r31, 0x1c6
    lfs f3, 0x34(r1)
    addi r5, r1, 0x58
    lfs f2, 0x38(r1)
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x6c(r28)
    bl fn_801F4728
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0x2
    blt lbl_fn_804CAD90_0000114C
    lis r31, lbl_80759374@ha
    lwz r29, 0x50(r26)
    addi r31, r31, lbl_80759374@l
    addi r3, r31, 0x202
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    addi r4, r31, 0x1aa
    lfs f3, 0x20(r1)
    addi r5, r1, 0x58
    lfs f2, 0x24(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0x54(r26)
    bl fn_801F4728
    lwz r29, 0x54(r26)
    addi r3, r31, 0x21c
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addi r4, r31, 0x22c
    lfs f3, 0xc(r1)
    addi r5, r1, 0x58
    lfs f2, 0x10(r1)
    lfs f1, 0x18(r1)
    lfs f0, lbl_808874E4
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f1, 0x68(r1)
    stfs f0, 0x64(r1)
    lwz r3, 0xd4(r26)
    bl fn_801F4728
    lwz r4, 0xd4(r26)
    addi r3, r31, 0x234
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874FC
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    addi r11, r1, 0xd0
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_804CAF88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_fn_804CAF88_0000133C
lbl_fn_804CAF88_00001320:
    add r5, r3, r4
    addi r6, r6, 0x1
    lwz r5, 0x17c(r5)
    addi r4, r4, 0x4
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_804CAF88_0000133C:
    lwz r0, 0x178(r3)
    cmplw r6, r0
    blt lbl_fn_804CAF88_00001320
    lwz r4, 0xd8(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    ble lbl_fn_804CAF88_0000137C
    cmpwi r4, 0x4
    beq lbl_fn_804CAF88_000013C4
    cmpwi r4, 0x5
    beq lbl_fn_804CAF88_000013D0
    cmpwi r4, 0x6
    beq lbl_fn_804CAF88_000013DC
    cmpwi r4, 0x7
    beq lbl_fn_804CAF88_000013E8
    b lbl_fn_804CAF88_0000141C
lbl_fn_804CAF88_0000137C:
    lwz r4, 0x4c(r3)
    lfs f0, lbl_80887500
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r3, 0x48(r3)
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    blt lbl_fn_804CAF88_0000141C
    mr r3, r31
    bl fn_804CB0B8
    mr r3, r31
    bl fn_804CB2F0
    b lbl_fn_804CAF88_0000141C
lbl_fn_804CAF88_000013C4:
    mr r3, r31
    bl fn_804CB74C
    b lbl_fn_804CAF88_0000141C
lbl_fn_804CAF88_000013D0:
    mr r3, r31
    bl fn_804CBA1C
    b lbl_fn_804CAF88_0000141C
lbl_fn_804CAF88_000013DC:
    mr r3, r31
    bl fn_804CBBD8
    b lbl_fn_804CAF88_0000141C
lbl_fn_804CAF88_000013E8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x48(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_804CAF88_0000141C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804CB0B8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    beq lbl_fn_804CB0B8_00001650
    lwz r4, lbl_8087F588
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804CB0B8_00001650
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x6
    bne lbl_fn_804CB0B8_0000147C
    lwz r0, 0xe8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804CB0B8_00001650
lbl_fn_804CB0B8_0000147C:
    lfs f0, lbl_808874E0
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r4, 0xd8(r3)
    cmpwi r4, 0x2
    bne lbl_fn_804CB0B8_00001508
    lwz r5, 0xe4(r31)
    lis r4, lbl_80759374@ha
    addi r4, r4, lbl_80759374@l
    addi r3, r1, 0x58
    addi r4, r4, 0x1b5
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r31, 0x4c(r31)
    addi r3, r1, 0x58
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lfs f4, 0x30(r1)
    lfs f3, 0x34(r1)
    lfs f2, lbl_80887504
    lfs f1, lbl_80887508
    lfs f0, lbl_8088750C
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    b lbl_fn_804CB0B8_00001638
lbl_fn_804CB0B8_00001508:
    subi r0, r4, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_804CB0B8_000015CC
    lwz r5, 0xe4(r3)
    lis r0, 0x4330
    stw r0, 0x98(r1)
    lis r4, lbl_80759338@ha
    xoris r3, r5, 0x8000
    lfd f2, lbl_80759338@l(r4)
    stw r3, 0x9c(r1)
    lis r6, lbl_80759374@ha
    lfs f0, lbl_808874F8
    slwi r0, r5, 29
    lfd f1, 0x98(r1)
    srwi r4, r5, 31
    subf r0, r4, r0
    addi r6, r6, lbl_80759374@l
    fsubs f1, f1, f2
    rotlwi r0, r0, 3
    add r5, r0, r4
    addi r3, r1, 0x58
    addi r4, r6, 0x1b5
    fmuls f0, f1, f0
    addi r5, r5, 0x1
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r30, 0xa4(r1)
    crclr 6
    bl sprintf
    slwi r0, r30, 2
    addi r3, r1, 0x58
    add r4, r31, r0
    lwz r31, 0x58(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    lfs f3, 0x20(r1)
    lfs f2, lbl_80887510
    lfs f1, lbl_80887508
    lfs f0, lbl_8088750C
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    b lbl_fn_804CB0B8_00001638
lbl_fn_804CB0B8_000015CC:
    cmpwi r4, 0x6
    bne lbl_fn_804CB0B8_00001638
    lwz r5, 0xe4(r31)
    lis r4, lbl_80759374@ha
    addi r4, r4, lbl_80759374@l
    addi r3, r1, 0x58
    addi r4, r4, 0x1b5
    addi r5, r5, 0x9
    crclr 6
    bl sprintf
    lwz r31, 0x54(r31)
    addi r3, r1, 0x58
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    lfs f3, 0xc(r1)
    lfs f2, lbl_80887514
    lfs f1, lbl_80887508
    lfs f0, lbl_8088750C
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
lbl_fn_804CB0B8_00001638:
    lwz r3, lbl_8087F580
    addi r6, r1, 0x44
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
lbl_fn_804CB0B8_00001650:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804CB2F0(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    bl _savegpr_26
    li r0, 0x0
    stw r0, 0x40(r1)
    lwz r4, lbl_8087F588
    mr r29, r3
    stw r0, 0x44(r1)
    lfs f31, lbl_808874E0
    lwz r5, lbl_8087F628
    stw r0, 0x48(r1)
    lfs f30, lbl_80887518
    addi r31, r5, 0xc20
    stw r0, 0x4c(r1)
    lfs f3, lbl_8088751C
    stw r0, 0x50(r1)
    lfs f29, lbl_80887520
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    lwz r0, 0x4c(r4)
    stfs f31, 0x2c(r1)
    cmpwi r0, 0x0
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f31, 0x3c(r1)
    bne lbl_fn_804CB2F0_00001750
    lfs f2, 0x170(r3)
    lfs f1, lbl_808874E4
    lfs f0, lbl_80887524
    fadds f1, f2, f1
    stfs f1, 0x170(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_804CB2F0_00001748
    b lbl_fn_804CB2F0_00001750
lbl_fn_804CB2F0_00001748:
    fsubs f0, f1, f0
    fmuls f31, f0, f3
lbl_fn_804CB2F0_00001750:
    lwz r5, lbl_8087F5D8
    lis r28, lbl_80759374@ha
    addi r28, r28, lbl_80759374@l
    lwz r3, 0x4c(r3)
    addi r4, r28, 0x23f
    addi r5, r5, 0x1
    li r6, 0x0
    bl fn_801F4CB4
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804CB2F0_000017AC
    lwz r4, 0x4c(r29)
    la r3, lbl_8087E140
    addi r30, r3, 0x2
    addi r3, r28, 0x244
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r30
    bl fn_801FEE08
    b lbl_fn_804CB2F0_000017D4
lbl_fn_804CB2F0_000017AC:
    lwz r4, 0x4c(r29)
    la r3, lbl_8087E140
    addi r30, r3, 0xa
    addi r3, r28, 0x244
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r30
    bl fn_801FEE08
lbl_fn_804CB2F0_000017D4:
    lis r28, lbl_80759374@ha
    lfs f28, lbl_808874E0
    lfs f27, lbl_80887528
    addi r28, r28, lbl_80759374@l
    li r30, 0x0
lbl_fn_804CB2F0_000017E8:
    lwz r0, lbl_8087F5D8
    lwz r3, lbl_8087F610
    mulli r0, r0, 0xa
    addi r3, r3, 0x2a50
    add r0, r30, r0
    slwi r0, r0, 2
    add r4, r31, r0
    lha r0, 0x18(r4)
    lha r5, 0x1a(r4)
    cmpwi r0, 0x0
    blt lbl_fn_804CB2F0_0000181C
    cmpwi r0, 0x15
    ble lbl_fn_804CB2F0_00001824
lbl_fn_804CB2F0_0000181C:
    li r3, 0x0
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_00001824:
    bge lbl_fn_804CB2F0_0000185C
    cmpwi r5, 0x0
    blt lbl_fn_804CB2F0_00001844
    mulli r0, r0, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CB2F0_0000184C
lbl_fn_804CB2F0_00001844:
    li r3, 0x0
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_0000184C:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_0000185C:
    cmpwi r5, 0x0
    bge lbl_fn_804CB2F0_0000186C
    li r3, 0x0
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_0000186C:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CB2F0_00001884
lbl_fn_804CB2F0_00001878:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CB2F0_00001884:
    cmpwi r4, 0x14
    bge lbl_fn_804CB2F0_00001898
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CB2F0_00001878
lbl_fn_804CB2F0_00001898:
    cmpwi r4, 0x14
    bge lbl_fn_804CB2F0_00001944
    cmpwi r4, 0x0
    blt lbl_fn_804CB2F0_000018B0
    cmpwi r4, 0x15
    ble lbl_fn_804CB2F0_000018B8
lbl_fn_804CB2F0_000018B0:
    li r3, 0x0
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_000018B8:
    bge lbl_fn_804CB2F0_000018F0
    cmpwi r5, 0x0
    blt lbl_fn_804CB2F0_000018D8
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CB2F0_000018E0
lbl_fn_804CB2F0_000018D8:
    li r3, 0x0
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_000018E0:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_000018F0:
    cmpwi r5, 0x0
    bge lbl_fn_804CB2F0_00001900
    li r3, 0x0
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_00001900:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CB2F0_00001918
lbl_fn_804CB2F0_0000190C:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CB2F0_00001918:
    cmpwi r4, 0x14
    bge lbl_fn_804CB2F0_0000192C
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CB2F0_0000190C
lbl_fn_804CB2F0_0000192C:
    cmpwi r4, 0x14
    bge lbl_fn_804CB2F0_0000193C
    bl fn_804C54FC
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_0000193C:
    li r3, 0x0
    b lbl_fn_804CB2F0_00001948
lbl_fn_804CB2F0_00001944:
    li r3, 0x0
lbl_fn_804CB2F0_00001948:
    cmpwi r3, 0x0
    bne lbl_fn_804CB2F0_00001958
    li r26, 0x0
    b lbl_fn_804CB2F0_0000196C
lbl_fn_804CB2F0_00001958:
    lwz r26, 0x18(r3)
    cmpwi r26, 0x0
    beq lbl_fn_804CB2F0_00001968
    b lbl_fn_804CB2F0_0000196C
lbl_fn_804CB2F0_00001968:
    la r26, lbl_808813D0
lbl_fn_804CB2F0_0000196C:
    addi r3, r1, 0x40
    addi r4, r28, 0x1b5
    addi r5, r30, 0x1
    crclr 6
    bl sprintf
    lwz r27, 0x4c(r29)
    addi r3, r1, 0x40
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x18
    bl fn_801F4E8C
    lfs f1, 0x18(r1)
    cmpwi r26, 0x0
    lfs f0, 0x1c(r1)
    fadds f1, f1, f27
    lfs f4, 0x20(r1)
    fadds f0, f0, f27
    lfs f3, 0x24(r1)
    lfs f2, 0x28(r1)
    stfs f4, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x2c(r1)
    stfs f0, 0x30(r1)
    beq lbl_fn_804CB2F0_00001A78
    lwz r0, 0xe4(r29)
    cmpw r30, r0
    bne lbl_fn_804CB2F0_000019E8
    fmr f3, f31
    b lbl_fn_804CB2F0_000019EC
lbl_fn_804CB2F0_000019E8:
    lfs f3, lbl_808874E0
lbl_fn_804CB2F0_000019EC:
    lfs f1, 0x2c(r1)
    mr r4, r26
    lfs f6, lbl_808874E0
    li r5, -0x1
    fnmsubs f0, f29, f30, f1
    lfs f4, lbl_80887530
    fsubs f1, f1, f3
    lfs f2, 0x30(r1)
    stfs f0, 0x8(r1)
    fmr f7, f6
    stfs f29, 0xc(r1)
    fmr f5, f4
    fmr f8, f6
    lfs f3, lbl_8088752C
    stfs f30, 0x10(r1)
    li r6, 0x1
    li r7, 0x1
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    li r9, 0x1
    lis r10, 0xff00
    bl fn_80061AE4
    lwz r0, 0xe4(r29)
    cmpw r30, r0
    bne lbl_fn_804CB2F0_00001A78
    lwz r3, lbl_8087EEC8
    mr r4, r26
    lfs f1, lbl_80887530
    li r5, 0x1
    lfs f2, lbl_808874E0
    li r6, 0x1
    bl fn_8006EF48
    fcmpo cr0, f31, f1
    ble lbl_fn_804CB2F0_00001A78
    stfs f28, 0x170(r29)
lbl_fn_804CB2F0_00001A78:
    addi r30, r30, 0x1
    cmpwi r30, 0xa
    blt lbl_fn_804CB2F0_000017E8
    addi r11, r1, 0xa0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    lfd f27, 0xa0(r1)
    bl _restgpr_26
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
