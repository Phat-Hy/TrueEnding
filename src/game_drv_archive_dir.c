#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000D9E8(void);
extern void fn_8000D9F8(void);
extern void fn_8000DCF4(void);
extern void fn_8001047C(void);
extern void fn_80013338(void);
extern void fn_8006EF48(void);
extern void fn_8006F72C(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800BFAC8(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_800F52F0(void);
extern void fn_800F530C(void);
extern void fn_800F7FB4(void);
extern void fn_800F7FF0(void);
extern void fn_80139EFC(void);
extern void fn_80139F4C(void);
extern void fn_8013A16C(void);
extern void fn_8013C480(void);
extern void fn_801781B0(void);
extern void fn_801A03E0(void);
extern void fn_801A03EC(void);
extern void fn_801A0408(void);
extern void fn_801F4818(void);
extern void fn_801F4AA0(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F72D4(void);
extern void fn_801F837C(void);
extern void fn_801F8830(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80219344(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_802A36B0(void);
extern void fn_802A4094(void);
extern void fn_80372574(void);
extern void fn_803CF734(void);
extern void fn_803CFC58(void);
extern void fn_803D6EA0(void);
extern void fn_803D6EC0(void);
extern void fn_803D6ED4(void);
extern void fn_803DDD54(void);
extern void fn_803E4978(void);
extern void fn_804A4AEC(void);
extern void fn_8054A340(void);
extern void fn_8059D310(void);
extern void fn_805A6D24(void);
extern void fn_805A7604(void);
extern void fn_805A96C4(void);
extern void fn_805AA394(void);
extern void fn_805ADB2C(void);
extern void fn_805AE13C(void);
extern void fn_805AE18C(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 jumptable_807976BC[];
extern u8 lbl_80763990[];
extern u8 lbl_807639B8[];
extern u8 lbl_807639C0[];
extern u8 lbl_807639F8[];
extern u8 lbl_807799A0[];
extern u8 lbl_80797728[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C95B0[];

/* Small data declarations */
extern u32 lbl_8087E6E0;
extern u32 lbl_8087E6E4;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F408;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808882E8;
extern u32 lbl_808882F4;
extern u32 lbl_808882F8;
extern u32 lbl_8088832C;
extern u32 lbl_80888334;
extern u32 lbl_80888338;
extern u32 lbl_8088833C;
extern u32 lbl_80888348;
extern u32 lbl_8088834C;
extern u32 lbl_80888350;
extern u32 lbl_80888354;
extern u32 lbl_80888358;
extern u32 lbl_8088835C;
extern u32 lbl_80888360;
extern u32 lbl_80888364;

/* Function declarations */
void fn_805AB1B4(void);
void fn_805AB1C4(void);
void fn_805AB1DC(void);
void fn_805AB50C(void);
void fn_805AB82C(void);
void fn_805ABD70(void);
void fn_805ABD78(void);
void fn_805ABD8C(void);
void fn_805ABDEC(void);
void fn_805ABDFC(void);
void fn_805ABE78(void);
void fn_805AC75C(void);

asm void fn_805AB1B4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    blr
}

asm void fn_805AB1C4(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    subfic r3, r4, 0x2
    subi r0, r4, 0x2
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_805AB1DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_805AB1DC_00000338
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805AB1DC_00000338
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805AB1DC_00000078
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805AB1DC_000001C8
lbl_fn_805AB1DC_00000078:
    lwz r0, 0x4(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_805AB1DC_0000031C
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087E6E4
    la r6, lbl_8087E6E0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_805AB1DC_000001B8
    lwz r0, 0x0(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_805AB1DC_000000C0
    mr r4, r0
lbl_fn_805AB1DC_000000C0:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_805AB1DC_000001B0
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_805AB1DC_00000180
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_805AB1DC_00000180
lbl_fn_805AB1DC_000000F4:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_805AB1DC_000000F4
lbl_fn_805AB1DC_00000180:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_805AB1DC_000001B0
lbl_fn_805AB1DC_00000198:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_805AB1DC_00000198
lbl_fn_805AB1DC_000001B0:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_805AB1DC_000001B8:
    li r0, 0x8
    stw r30, 0x8(r28)
    stw r0, 0x4(r28)
    b lbl_fn_805AB1DC_0000031C
lbl_fn_805AB1DC_000001C8:
    lwz r3, 0x0(r3)
    cmplw r3, r0
    blt lbl_fn_805AB1DC_0000031C
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_805AB1DC_0000031C
    slwi r3, r30, 2
    li r4, 0x0
    la r5, lbl_8087E6E4
    la r6, lbl_8087E6E0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_805AB1DC_00000314
    lwz r0, 0x0(r28)
    mr r4, r30
    cmplw r30, r0
    ble lbl_fn_805AB1DC_0000021C
    mr r4, r0
lbl_fn_805AB1DC_0000021C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_805AB1DC_0000030C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_805AB1DC_000002DC
    addi r0, r8, 0x7
    mr r7, r31
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_805AB1DC_000002DC
lbl_fn_805AB1DC_00000250:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_805AB1DC_00000250
lbl_fn_805AB1DC_000002DC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_805AB1DC_0000030C
lbl_fn_805AB1DC_000002F4:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_805AB1DC_000002F4
lbl_fn_805AB1DC_0000030C:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_805AB1DC_00000314:
    stw r31, 0x8(r28)
    stw r30, 0x4(r28)
lbl_fn_805AB1DC_0000031C:
    lwz r0, 0x0(r28)
    lwz r3, 0x8(r28)
    slwi r0, r0, 2
    stwx r29, r3, r0
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
lbl_fn_805AB1DC_00000338:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805AB50C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805AB50C_00000394
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805AB50C_000004E4
lbl_fn_805AB50C_00000394:
    lwz r0, 0x4(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_805AB50C_00000638
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087E6E4
    la r6, lbl_8087E6E0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_805AB50C_000004D4
    lwz r0, 0x0(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_805AB50C_000003DC
    mr r4, r0
lbl_fn_805AB50C_000003DC:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_805AB50C_000004CC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_805AB50C_0000049C
    addi r0, r8, 0x7
    mr r7, r31
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_805AB50C_0000049C
lbl_fn_805AB50C_00000410:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_805AB50C_00000410
lbl_fn_805AB50C_0000049C:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_805AB50C_000004CC
lbl_fn_805AB50C_000004B4:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_805AB50C_000004B4
lbl_fn_805AB50C_000004CC:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_805AB50C_000004D4:
    li r0, 0x8
    stw r31, 0x8(r28)
    stw r0, 0x4(r28)
    b lbl_fn_805AB50C_00000638
lbl_fn_805AB50C_000004E4:
    lwz r3, 0x0(r3)
    cmplw r3, r0
    blt lbl_fn_805AB50C_00000638
    slwi r31, r3, 1
    cmplw r0, r31
    bgt lbl_fn_805AB50C_00000638
    slwi r3, r31, 2
    li r4, 0x0
    la r5, lbl_8087E6E4
    la r6, lbl_8087E6E0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_805AB50C_00000630
    lwz r0, 0x0(r28)
    mr r4, r31
    cmplw r31, r0
    ble lbl_fn_805AB50C_00000538
    mr r4, r0
lbl_fn_805AB50C_00000538:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_805AB50C_00000628
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_805AB50C_000005F8
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_805AB50C_000005F8
lbl_fn_805AB50C_0000056C:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_805AB50C_0000056C
lbl_fn_805AB50C_000005F8:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_805AB50C_00000628
lbl_fn_805AB50C_00000610:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_805AB50C_00000610
lbl_fn_805AB50C_00000628:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_805AB50C_00000630:
    stw r30, 0x8(r28)
    stw r31, 0x4(r28)
lbl_fn_805AB50C_00000638:
    lwz r0, 0x0(r28)
    lwz r3, 0x8(r28)
    slwi r0, r0, 2
    lwz r4, 0x0(r29)
    stwx r4, r3, r0
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805AB82C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xe0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    bl _savegpr_26
    mr r31, r3
    mr r26, r4
    addi r3, r3, 0xa88
    bl fn_803CF734
    cmpwi r26, 0x3
    bne lbl_fn_805AB82C_000006C0
    li r26, 0x0
lbl_fn_805AB82C_000006C0:
    bl fn_8000D9E8
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_000006D8
    bl fn_8000D9E8
    bl fn_8000DCF4
    b lbl_fn_805AB82C_000006DC
lbl_fn_805AB82C_000006D8:
    li r3, 0x0
lbl_fn_805AB82C_000006DC:
    cmpwi r26, 0x0
    stw r3, 0xc(r1)
    bne lbl_fn_805AB82C_000009D8
    addi r3, r1, 0x40
    bl fn_805ABD78
    bl fn_8000D9E8
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_00000810
    addi r3, r1, 0x40
    addi r4, r1, 0xc
    bl fn_805AB50C
    bl fn_8000D9E8
    li r4, 0x0
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0x2
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0x3
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0x6
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0x1
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0x9
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0xa
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0x4
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0x5
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0xb
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
    bl fn_8000D9E8
    li r4, 0xe
    bl fn_8054A340
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_805AB1DC
lbl_fn_805AB82C_00000810:
    bl fn_8000D9E8
    bl fn_802A36B0
    stw r3, 0x8(r1)
    lis r30, lbl_80763990@ha
    b lbl_fn_805AB82C_0000086C
lbl_fn_805AB82C_00000824:
    addi r29, r30, lbl_80763990@l
    b lbl_fn_805AB82C_00000854
lbl_fn_805AB82C_0000082C:
    lwz r3, 0x8(r1)
    bl fn_8000D9F8
    lwz r0, 0x0(r29)
    cmpw r0, r3
    bne lbl_fn_805AB82C_00000850
    addi r3, r1, 0x40
    addi r4, r1, 0x8
    bl fn_805AB50C
    b lbl_fn_805AB82C_00000860
lbl_fn_805AB82C_00000850:
    addi r29, r29, 0x4
lbl_fn_805AB82C_00000854:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_805AB82C_0000082C
lbl_fn_805AB82C_00000860:
    lwz r3, 0x8(r1)
    bl fn_802A4094
    stw r3, 0x8(r1)
lbl_fn_805AB82C_0000086C:
    cmpwi r3, 0x0
    bne lbl_fn_805AB82C_00000824
    li r29, 0x0
    b lbl_fn_805AB82C_000009B8
lbl_fn_805AB82C_0000087C:
    mr r4, r29
    addi r3, r1, 0x40
    bl fn_805ABDEC
    lwz r28, 0x0(r3)
    cmpwi r28, 0x0
    beq lbl_fn_805AB82C_000009B4
    mr r3, r28
    bl fn_803CFC58
    cmpwi r3, 0x0
    bne lbl_fn_805AB82C_000009B4
    mr r3, r28
    bl fn_803D6EA0
    cmpwi r3, 0x0
    bne lbl_fn_805AB82C_000009B4
    mr r3, r28
    bl fn_80139EFC
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_000009B4
    mr r3, r28
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_000008EC
    mr r3, r28
    bl fn_800F52F0
    lwz r0, 0x224(r3)
    cmpwi r0, 0x0
    ble lbl_fn_805AB82C_000009B4
lbl_fn_805AB82C_000008EC:
    mr r3, r28
    bl fn_800F52F0
    li r4, 0x100
    bl fn_8013A16C
    cmpwi r3, 0x0
    bne lbl_fn_805AB82C_000009B4
    mr r3, r28
    bl fn_800F52F0
    lis r4, 0x1
    bl fn_8013A16C
    cmpwi r3, 0x0
    bne lbl_fn_805AB82C_000009B4
    mr r3, r28
    bl fn_800F52F0
    li r4, 0x40
    bl fn_8013A16C
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_00000944
    mr r3, r28
    bl fn_805ABD70
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_000009B4
lbl_fn_805AB82C_00000944:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_00000994
    bl fn_800F530C
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_805AB82C_00000994
    mr r3, r28
    bl fn_800F530C
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_805AB82C_00000994
    mr r3, r28
    bl fn_800F530C
    lwz r30, 0xb4(r3)
    lwz r3, 0xc(r1)
    bl fn_800F530C
    lwz r0, 0xb4(r3)
    cmpw r0, r30
    bne lbl_fn_805AB82C_000009B4
lbl_fn_805AB82C_00000994:
    addi r3, r1, 0x9c
    bl fn_805A7604
    mr r4, r28
    addi r3, r1, 0x9c
    bl fn_805AB1B4
    addi r3, r31, 0xa88
    addi r4, r1, 0x9c
    bl fn_805ABDFC
lbl_fn_805AB82C_000009B4:
    addi r29, r29, 0x1
lbl_fn_805AB82C_000009B8:
    addi r3, r1, 0x40
    bl fn_803D6ED4
    cmplw r29, r3
    blt lbl_fn_805AB82C_0000087C
    addi r3, r1, 0x40
    li r4, -0x1
    bl fn_805ABD8C
    b lbl_fn_805AB82C_00000A7C
lbl_fn_805AB82C_000009D8:
    cmpwi r26, 0x1
    bne lbl_fn_805AB82C_00000A7C
    bl fn_801A03E0
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_000009F8
    bl fn_801A03E0
    bl fn_801A0408
    b lbl_fn_805AB82C_000009FC
lbl_fn_805AB82C_000009F8:
    li r3, 0x0
lbl_fn_805AB82C_000009FC:
    mr r28, r3
    b lbl_fn_805AB82C_00000A74
lbl_fn_805AB82C_00000A04:
    mr r3, r28
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_00000A68
    mr r3, r28
    bl fn_803D6EA0
    cmpwi r3, 0x0
    bne lbl_fn_805AB82C_00000A68
    mr r3, r28
    bl fn_800F530C
    lwz r0, 0xc0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805AB82C_00000A68
    mr r3, r28
    bl fn_800F7FB4
    cmpwi r3, 0x29
    beq lbl_fn_805AB82C_00000A68
    addi r3, r1, 0x70
    bl fn_805A7604
    mr r4, r28
    addi r3, r1, 0x70
    bl fn_805AB1B4
    addi r3, r31, 0xa88
    addi r4, r1, 0x70
    bl fn_805ABDFC
lbl_fn_805AB82C_00000A68:
    mr r3, r28
    bl fn_801A03EC
    mr r28, r3
lbl_fn_805AB82C_00000A74:
    cmpwi r28, 0x0
    bne lbl_fn_805AB82C_00000A04
lbl_fn_805AB82C_00000A7C:
    lfs f31, lbl_808882F4
    addi r29, r1, 0x50
    lfs f29, lbl_80888338
    li r28, 0x0
    b lbl_fn_805AB82C_00000B7C
lbl_fn_805AB82C_00000A90:
    mr r4, r28
    addi r3, r31, 0xa88
    bl fn_805A96C4
    stfs f29, 0x50(r1)
    mr r30, r3
    li r27, 0x0
    stfs f29, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f29, 0x5c(r1)
    stfs f29, 0x60(r1)
    stfs f29, 0x64(r1)
    stfs f29, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_fn_805AB82C_00000B68
lbl_fn_805AB82C_00000AC8:
    mr r4, r27
    addi r3, r31, 0xa88
    bl fn_805A96C4
    cmplw r27, r28
    mr r26, r3
    beq lbl_fn_805AB82C_00000B64
    bl fn_805AB1C4
    cmpwi r3, 0x0
    beq lbl_fn_805AB82C_00000B64
    mr r4, r30
    addi r3, r1, 0x1c
    bl fn_805AE13C
    mr r4, r26
    addi r3, r1, 0x28
    bl fn_805AE13C
    addi r3, r1, 0x34
    addi r4, r1, 0x28
    addi r5, r1, 0x1c
    bl fn_80013338
    addi r3, r1, 0x34
    bl fn_803D6EC0
    fmr f30, f1
    fcmpo cr0, f1, f31
    ble lbl_fn_805AB82C_00000B30
    addi r3, r1, 0x34
    bl fn_800F7FF0
lbl_fn_805AB82C_00000B30:
    addi r3, r1, 0x10
    addi r4, r1, 0x34
    bl fn_8001047C
    bl fn_805A6D24
    cmpwi r3, 0x8
    beq lbl_fn_805AB82C_00000B64
    slwi r0, r3, 2
    lfsx f0, r29, r0
    fcmpo cr0, f30, f0
    bge lbl_fn_805AB82C_00000B64
    add r3, r30, r0
    stfsx f30, r29, r0
    stw r26, 0xc(r3)
lbl_fn_805AB82C_00000B64:
    addi r27, r27, 0x1
lbl_fn_805AB82C_00000B68:
    addi r3, r31, 0xa88
    bl fn_80372574
    cmplw r27, r3
    blt lbl_fn_805AB82C_00000AC8
    addi r28, r28, 0x1
lbl_fn_805AB82C_00000B7C:
    addi r3, r31, 0xa88
    bl fn_80372574
    cmplw r28, r3
    blt lbl_fn_805AB82C_00000A90
    addi r11, r1, 0xe0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    bl _restgpr_26
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_805ABD70(void)
{
    nofralloc
    lwz r3, 0xf94(r3)
    blr
}

asm void fn_805ABD78(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_805ABD8C(void)
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
    beq lbl_fn_805ABD8C_00000C1C
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805ABD8C_00000C0C
    bl fn_80084C24
lbl_fn_805ABD8C_00000C0C:
    cmpwi r31, 0x0
    ble lbl_fn_805ABD8C_00000C1C
    mr r3, r30
    bl dtor_80084684
lbl_fn_805ABD8C_00000C1C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805ABDEC(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_805ABDFC(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x2c
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_805ABDFC_00000CB4
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x1c(r4)
    stw r0, 0x1c(r5)
    lwz r0, 0x20(r4)
    stw r0, 0x20(r5)
    lwz r0, 0x24(r4)
    stw r0, 0x24(r5)
    lwz r0, 0x28(r4)
    stw r0, 0x28(r5)
lbl_fn_805ABDFC_00000CB4:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_805ABE78(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    lwz r0, 0x48(r3)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    mr r28, r3
    cmpwi r0, 0x0
    stw r4, 0x10(r1)
    bne lbl_fn_805ABE78_00001590
    lwz r30, 0x4c(r3)
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    beq lbl_fn_805ABE78_00001590
    addi r3, r3, 0x54
    bl fn_805AE18C
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x0
    mr r31, r3
    blt lbl_fn_805ABE78_00000D3C
    cmpwi r3, 0x7
    bge lbl_fn_805ABE78_00000D3C
    li r0, 0x5
    stw r0, 0xb8(r28)
    lwz r3, 0xaa0(r30)
    subi r0, r3, 0x1
    stw r0, 0xc8(r28)
lbl_fn_805ABE78_00000D3C:
    lfs f1, 0x9fc(r30)
    lfs f0, lbl_808882F8
    fcmpo cr0, f1, f0
    bge lbl_fn_805ABE78_00000D54
    li r0, 0x0
    stb r0, 0xa4(r28)
lbl_fn_805ABE78_00000D54:
    mr r3, r28
    mr r4, r30
    bl fn_805AA394
    cmplwi r31, 0xb
    stw r3, 0x5c(r28)
    bgt lbl_fn_805ABE78_00001214
    lis r3, jumptable_807976BC@ha
    slwi r0, r31, 2
    addi r3, r3, jumptable_807976BC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x6
    li r0, 0x1
    stw r3, 0xbc(r28)
    li r4, 0x0
    stw r0, 0xc0(r28)
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805ABE78_00000E20
    lwz r0, 0x48(r30)
    li r5, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_805ABE78_00000E14
    lwz r0, 0x944(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805ABE78_00000DE8
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_807639B8@ha
    lfs f0, 0x7dc(r30)
    lfd f2, lbl_807639B8@l(r3)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f2, f0, f1
    b lbl_fn_805ABE78_00000DEC
lbl_fn_805ABE78_00000DE8:
    lfs f2, lbl_808882F4
lbl_fn_805ABE78_00000DEC:
    lfs f1, lbl_808882F8
    lfs f0, lbl_808882E8
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805ABE78_00000E14
    li r5, 0x0
lbl_fn_805ABE78_00000E14:
    cmpwi r5, 0x0
    beq lbl_fn_805ABE78_00000E20
    li r4, 0x1
lbl_fn_805ABE78_00000E20:
    li r3, 0x8
    li r0, 0x0
    stb r4, 0xa6(r28)
    stw r3, 0xd8(r28)
    stw r0, 0xdc(r28)
    stw r3, 0xe0(r28)
    b lbl_fn_805ABE78_00001308
    lbz r0, 0xa4(r28)
    li r4, 0x1
    li r3, 0x3
    stw r4, 0xbc(r28)
    cmpwi r0, 0x0
    stw r3, 0xc0(r28)
    beq lbl_fn_805ABE78_00000EE8
    lwz r0, 0x7e0(r30)
    li r4, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805ABE78_00000EE4
    lwz r0, 0x48(r30)
    li r5, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_805ABE78_00000ED8
    lwz r0, 0x944(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805ABE78_00000EAC
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_807639B8@ha
    lfs f0, 0x7dc(r30)
    lfd f2, lbl_807639B8@l(r3)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fdivs f2, f0, f1
    b lbl_fn_805ABE78_00000EB0
lbl_fn_805ABE78_00000EAC:
    lfs f2, lbl_808882F4
lbl_fn_805ABE78_00000EB0:
    lfs f1, lbl_808882F8
    lfs f0, lbl_808882E8
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805ABE78_00000ED8
    li r5, 0x0
lbl_fn_805ABE78_00000ED8:
    cmpwi r5, 0x0
    beq lbl_fn_805ABE78_00000EE4
    li r4, 0x1
lbl_fn_805ABE78_00000EE4:
    stb r4, 0xa4(r28)
lbl_fn_805ABE78_00000EE8:
    lwz r5, 0x7e0(r30)
    li r4, 0x2
    li r3, 0x9
    li r0, 0x3
    extrwi r5, r5, 1, 29
    xori r5, r5, 0x1
    stb r5, 0xa5(r28)
    lwz r5, 0x7e0(r30)
    extrwi r5, r5, 1, 29
    stw r4, 0xd8(r28)
    xori r4, r5, 0x1
    stb r4, 0xa6(r28)
    stw r3, 0xdc(r28)
    stw r0, 0xe0(r28)
    b lbl_fn_805ABE78_00001308
    cmpwi r31, 0x2
    bne lbl_fn_805ABE78_00000F38
    li r0, 0x6
    stw r0, 0xbc(r28)
    b lbl_fn_805ABE78_00000F40
lbl_fn_805ABE78_00000F38:
    li r0, 0x7
    stw r0, 0xbc(r28)
lbl_fn_805ABE78_00000F40:
    li r3, 0x0
    li r4, 0x4
    li r0, 0x2
    stw r4, 0xc0(r28)
    stw r3, 0xd8(r28)
    stw r3, 0xdc(r28)
    stw r0, 0xe0(r28)
    b lbl_fn_805ABE78_00001308
    lbz r0, 0xa4(r28)
    li r4, 0x1
    li r3, 0x4
    stw r4, 0xbc(r28)
    cmpwi r0, 0x0
    stw r3, 0xc0(r28)
    beq lbl_fn_805ABE78_0000100C
    lwz r0, 0x7e0(r30)
    li r4, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805ABE78_00001008
    lwz r0, 0x48(r30)
    li r5, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_805ABE78_00000FFC
    lwz r0, 0x944(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805ABE78_00000FD0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_807639B8@ha
    lfs f0, 0x7dc(r30)
    lfd f2, lbl_807639B8@l(r3)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f2, f0, f1
    b lbl_fn_805ABE78_00000FD4
lbl_fn_805ABE78_00000FD0:
    lfs f2, lbl_808882F4
lbl_fn_805ABE78_00000FD4:
    lfs f1, lbl_808882F8
    lfs f0, lbl_808882E8
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805ABE78_00000FFC
    li r5, 0x0
lbl_fn_805ABE78_00000FFC:
    cmpwi r5, 0x0
    beq lbl_fn_805ABE78_00001008
    li r4, 0x1
lbl_fn_805ABE78_00001008:
    stb r4, 0xa4(r28)
lbl_fn_805ABE78_0000100C:
    lwz r3, 0x7e0(r30)
    li r4, 0x4
    li r0, 0x5
    extrwi r3, r3, 1, 29
    xori r3, r3, 0x1
    stb r3, 0xa5(r28)
    lwz r3, 0x7e0(r30)
    extrwi r3, r3, 1, 29
    stw r0, 0xd8(r28)
    xori r3, r3, 0x1
    stb r3, 0xa6(r28)
    stw r0, 0xdc(r28)
    stw r4, 0xe0(r28)
    b lbl_fn_805ABE78_00001308
    lbz r0, 0xa4(r28)
    li r4, 0x3
    li r3, 0x1
    stw r4, 0xbc(r28)
    cmpwi r0, 0x0
    stw r3, 0xc0(r28)
    beq lbl_fn_805ABE78_000010F0
    lwz r0, 0x7e0(r30)
    li r4, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805ABE78_000010EC
    lwz r0, 0x48(r30)
    li r5, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_805ABE78_000010E0
    lwz r0, 0x944(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805ABE78_000010B4
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_807639B8@ha
    lfs f0, 0x7dc(r30)
    lfd f2, lbl_807639B8@l(r3)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fdivs f2, f0, f1
    b lbl_fn_805ABE78_000010B8
lbl_fn_805ABE78_000010B4:
    lfs f2, lbl_808882F4
lbl_fn_805ABE78_000010B8:
    lfs f1, lbl_808882F8
    lfs f0, lbl_808882E8
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805ABE78_000010E0
    li r5, 0x0
lbl_fn_805ABE78_000010E0:
    cmpwi r5, 0x0
    beq lbl_fn_805ABE78_000010EC
    li r4, 0x1
lbl_fn_805ABE78_000010EC:
    stb r4, 0xa4(r28)
lbl_fn_805ABE78_000010F0:
    lwz r4, 0x7e0(r30)
    li r3, 0x3
    li r0, 0x7
    extrwi r4, r4, 1, 29
    xori r4, r4, 0x1
    stb r4, 0xa5(r28)
    lwz r4, 0x7e0(r30)
    extrwi r4, r4, 1, 29
    stw r3, 0xd8(r28)
    xori r4, r4, 0x1
    stb r4, 0xa6(r28)
    stw r3, 0xdc(r28)
    stw r0, 0xe0(r28)
    b lbl_fn_805ABE78_00001308
    lbz r0, 0xa4(r28)
    li r4, 0x1
    li r3, 0x4
    stw r4, 0xbc(r28)
    cmpwi r0, 0x0
    stw r3, 0xc0(r28)
    beq lbl_fn_805ABE78_000011D4
    lwz r0, 0x7e0(r30)
    li r4, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805ABE78_000011D0
    lwz r0, 0x48(r30)
    li r5, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_805ABE78_000011C4
    lwz r0, 0x944(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805ABE78_00001198
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_807639B8@ha
    lfs f0, 0x7dc(r30)
    lfd f2, lbl_807639B8@l(r3)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f2, f0, f1
    b lbl_fn_805ABE78_0000119C
lbl_fn_805ABE78_00001198:
    lfs f2, lbl_808882F4
lbl_fn_805ABE78_0000119C:
    lfs f1, lbl_808882F8
    lfs f0, lbl_808882E8
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805ABE78_000011C4
    li r5, 0x0
lbl_fn_805ABE78_000011C4:
    cmpwi r5, 0x0
    beq lbl_fn_805ABE78_000011D0
    li r4, 0x1
lbl_fn_805ABE78_000011D0:
    stb r4, 0xa4(r28)
lbl_fn_805ABE78_000011D4:
    lwz r4, 0x7e0(r30)
    li r3, 0x6
    li r0, 0x0
    extrwi r4, r4, 1, 29
    stw r3, 0xd8(r28)
    xori r4, r4, 0x1
    stb r4, 0xa5(r28)
    stw r3, 0xdc(r28)
    stw r0, 0xe0(r28)
    b lbl_fn_805ABE78_00001308
    li r0, 0x0
    li r3, 0x7
    stw r3, 0xbc(r28)
    stw r0, 0xdc(r28)
    stb r0, 0xa6(r28)
    b lbl_fn_805ABE78_00001308
lbl_fn_805ABE78_00001214:
    lwz r3, 0x5c(r30)
    lbz r0, 0x122(r3)
    extsb r0, r0
    cmpwi r0, 0x1
    beq lbl_fn_805ABE78_00001244
    cmpwi r0, 0x2
    beq lbl_fn_805ABE78_0000125C
    cmpwi r0, 0x3
    beq lbl_fn_805ABE78_000012BC
    cmpwi r0, 0x4
    beq lbl_fn_805ABE78_000012E8
    b lbl_fn_805ABE78_00001308
lbl_fn_805ABE78_00001244:
    li r0, 0x0
    li r3, 0x6
    stw r3, 0xbc(r28)
    stw r0, 0xdc(r28)
    stb r0, 0xa6(r28)
    b lbl_fn_805ABE78_00001308
lbl_fn_805ABE78_0000125C:
    li r3, 0x1
    li r0, 0x0
    stw r3, 0xbc(r28)
    stw r0, 0xcc(r28)
    lwz r0, 0x7e0(r30)
    extrwi r0, r0, 1, 29
    xori r0, r0, 0x1
    stb r0, 0xa5(r28)
    lwz r3, 0xaa4(r30)
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_805ABE78_000012A8
    lfs f1, 0x78(r3)
    lfs f0, lbl_808882F4
    fcmpo cr0, f1, f0
    ble lbl_fn_805ABE78_000012A8
    li r0, 0x6
    stw r0, 0xdc(r28)
    b lbl_fn_805ABE78_000012B0
lbl_fn_805ABE78_000012A8:
    li r0, 0x5
    stw r0, 0xdc(r28)
lbl_fn_805ABE78_000012B0:
    li r0, 0x0
    stb r0, 0xa6(r28)
    b lbl_fn_805ABE78_00001308
lbl_fn_805ABE78_000012BC:
    li r4, 0x3
    li r3, 0x0
    stw r4, 0xbc(r28)
    stw r3, 0xcc(r28)
    lwz r0, 0x7e0(r30)
    extrwi r0, r0, 1, 29
    stw r4, 0xdc(r28)
    xori r0, r0, 0x1
    stb r0, 0xa5(r28)
    stb r3, 0xa6(r28)
    b lbl_fn_805ABE78_00001308
lbl_fn_805ABE78_000012E8:
    li r5, 0xb
    li r4, 0xa
    li r3, 0x1
    li r0, 0x0
    stw r5, 0xbc(r28)
    stw r4, 0xc0(r28)
    stw r3, 0xdc(r28)
    stw r0, 0xe0(r28)
lbl_fn_805ABE78_00001308:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_805ABE78_0000131C
    lwz r4, 0x48(r3)
    b lbl_fn_805ABE78_000013CC
lbl_fn_805ABE78_0000131C:
    li r4, 0x0
    b lbl_fn_805ABE78_000013CC
lbl_fn_805ABE78_00001324:
    lwz r7, 0x38(r4)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805ABE78_00001350
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_805ABE78_00001350
    li r6, 0x1
lbl_fn_805ABE78_00001350:
    cmpwi r6, 0x0
    beq lbl_fn_805ABE78_0000136C
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805ABE78_0000136C
    li r3, 0x1
lbl_fn_805ABE78_0000136C:
    cmpwi r3, 0x0
    beq lbl_fn_805ABE78_000013A0
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805ABE78_00001394
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_805ABE78_00001394
    li r3, 0x1
lbl_fn_805ABE78_00001394:
    cmpwi r3, 0x0
    bne lbl_fn_805ABE78_000013A0
    li r5, 0x1
lbl_fn_805ABE78_000013A0:
    cmpwi r5, 0x0
    beq lbl_fn_805ABE78_000013C8
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x0
    ble lbl_fn_805ABE78_000013C8
    lwz r0, 0x146c(r4)
    cmpwi r0, 0x22
    bne lbl_fn_805ABE78_000013C8
    li r0, 0x1
    b lbl_fn_805ABE78_000013D8
lbl_fn_805ABE78_000013C8:
    lwz r4, 0x14ac(r4)
lbl_fn_805ABE78_000013CC:
    cmpwi r4, 0x0
    bne lbl_fn_805ABE78_00001324
    li r0, 0x0
lbl_fn_805ABE78_000013D8:
    cmpwi r0, 0x0
    beq lbl_fn_805ABE78_00001400
    li r0, 0x9
    stw r0, 0xc4(r28)
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805ABE78_000014A0
    li r0, 0x0
    stb r0, 0xa7(r28)
    b lbl_fn_805ABE78_000014A0
lbl_fn_805ABE78_00001400:
    li r0, 0x8
    stw r0, 0xc4(r28)
    li r24, 0x0
    lwz r3, lbl_8087F9E8
    cmpwi r3, 0x0
    beq lbl_fn_805ABE78_0000142C
    mr r4, r30
    bl fn_8059D310
    cmpwi r3, 0x0
    ble lbl_fn_805ABE78_0000142C
    li r24, 0x1
lbl_fn_805ABE78_0000142C:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_805ABE78_00001440
    lwz r4, 0x48(r3)
    b lbl_fn_805ABE78_00001494
lbl_fn_805ABE78_00001440:
    li r4, 0x0
    b lbl_fn_805ABE78_00001494
lbl_fn_805ABE78_00001448:
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805ABE78_00001490
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_805ABE78_00001490
    lwz r3, 0x5c(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805ABE78_00001490
    lbz r3, 0x122(r3)
    subi r0, r3, 0x2
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_805ABE78_00001490
    li r24, 0x1
    b lbl_fn_805ABE78_0000149C
lbl_fn_805ABE78_00001490:
    lwz r4, 0x14ac(r4)
lbl_fn_805ABE78_00001494:
    cmpwi r4, 0x0
    bne lbl_fn_805ABE78_00001448
lbl_fn_805ABE78_0000149C:
    stb r24, 0xa7(r28)
lbl_fn_805ABE78_000014A0:
    li r29, 0x0
    lis r25, lbl_807C95B0@ha
    mr r24, r28
    li r27, 0x0
    mr r26, r29
    addi r25, r25, lbl_807C95B0@l
lbl_fn_805ABE78_000014B8:
    lwz r4, 0xb8(r24)
    cmpwi r4, 0x0
    blt lbl_fn_805ABE78_0000157C
    cmpwi r4, 0x6
    bge lbl_fn_805ABE78_00001558
    cmpwi r31, 0x0
    blt lbl_fn_805ABE78_00001520
    cmpwi r31, 0x7
    bge lbl_fn_805ABE78_00001520
    lwz r0, 0xc8(r24)
    cmpwi r0, 0x0
    blt lbl_fn_805ABE78_00001510
    slwi r0, r0, 3
    add r3, r30, r0
    lwz r3, 0xaa4(r3)
    cmpwi r3, 0x0
    ble lbl_fn_805ABE78_00001504
    bl fn_80219E6C
    b lbl_fn_805ABE78_00001508
lbl_fn_805ABE78_00001504:
    li r3, 0x0
lbl_fn_805ABE78_00001508:
    stw r3, 0xa8(r24)
    b lbl_fn_805ABE78_00001568
lbl_fn_805ABE78_00001510:
    mr r3, r30
    bl fn_80219344
    stw r3, 0xa8(r24)
    b lbl_fn_805ABE78_00001568
lbl_fn_805ABE78_00001520:
    lwz r0, 0xc8(r24)
    cmpwi r0, 0x0
    blt lbl_fn_805ABE78_00001544
    slwi r0, r0, 3
    add r3, r30, r0
    lwz r3, 0xaa4(r3)
    bl fn_80219E6C
    stw r3, 0xa8(r24)
    b lbl_fn_805ABE78_00001568
lbl_fn_805ABE78_00001544:
    add r3, r30, r27
    lwz r3, 0xaa4(r3)
    bl fn_80219E6C
    stw r3, 0xa8(r24)
    b lbl_fn_805ABE78_00001568
lbl_fn_805ABE78_00001558:
    subi r0, r4, 0x6
    mulli r0, r0, 0xd0
    add r0, r25, r0
    stw r0, 0xa8(r24)
lbl_fn_805ABE78_00001568:
    lwz r0, 0xa8(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805ABE78_0000157C
    add r3, r28, r29
    stb r26, 0xa4(r3)
lbl_fn_805ABE78_0000157C:
    addi r29, r29, 0x1
    addi r27, r27, 0x8
    cmpwi r29, 0x4
    addi r24, r24, 0x4
    blt lbl_fn_805ABE78_000014B8
lbl_fn_805ABE78_00001590:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805AC75C(void)
{
    nofralloc
    stwu r1, -0x3e0(r1)
    mflr r0
    stw r0, 0x3e4(r1)
    addi r11, r1, 0x3c0
    stfd f31, 0x3d0(r1)
    psq_st f31, 0x3d8(r1), 0, 0
    stfd f30, 0x3c0(r1)
    psq_st f30, 0x3c8(r1), 0, 0
    bl _savegpr_14
    lwz r4, 0x48(r3)
    lis r0, 0x4330
    stw r0, 0x358(r1)
    mr r15, r3
    cmpwi r4, 0x0
    stw r0, 0x360(r1)
    bne lbl_fn_805AC75C_0000291C
    lwz r14, 0x4c(r3)
    lwz r0, 0x48(r14)
    cmpwi r0, 0x2
    beq lbl_fn_805AC75C_0000291C
    lwz r0, lbl_8087F8A0
    cmpwi r0, 0x0
    lwz r0, 0x48(r3)
    addi r16, r1, 0x74
    cmpwi r0, 0x0
    bne lbl_fn_805AC75C_00001620
    lwz r4, 0x4c(r15)
    mr r3, r16
    bl fn_801781B0
    b lbl_fn_805AC75C_00001658
lbl_fn_805AC75C_00001620:
    cmpwi r0, 0x1
    bne lbl_fn_805AC75C_00001640
    lwz r3, 0x50(r3)
    psq_l f1, 0x10(r3), 0, 0
    lfs f2, 0x18(r3)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r16), 0, 0
    b lbl_fn_805AC75C_00001658
lbl_fn_805AC75C_00001640:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r16), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_805AC75C_00001658:
    lwz r4, lbl_8087EFB4
    mr r5, r16
    addi r3, r1, 0x98
    bl fn_800BFAC8
    lwz r4, 0x15b0(r15)
    lis r16, lbl_807639F8@ha
    addi r16, r16, lbl_807639F8@l
    lfs f0, lbl_8088833C
    lwz r0, 0x38(r4)
    addi r3, r16, 0xed
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x15b0(r15)
    stfs f0, 0x100(r4)
    lwz r4, 0x15b0(r15)
    addi r17, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888348
    mr r4, r3
    mr r3, r17
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x15b0(r15)
    addi r3, r16, 0xed
    addi r17, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088834C
    mr r4, r3
    mr r3, r17
    li r5, 0x1
    bl fn_801FED24
    lfs f0, lbl_808882F4
    addi r3, r16, 0xf7
    stfs f0, 0x144(r1)
    stfs f0, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f0, 0x150(r1)
    stfs f0, 0x154(r1)
    lwz r17, 0x15b0(r15)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0x11c
    bl fn_801F4E8C
    lfs f6, 0x11c(r1)
    addi r4, r16, 0xed
    lfs f5, 0x120(r1)
    addi r5, r1, 0x144
    lfs f4, 0x124(r1)
    lfs f3, 0x128(r1)
    lfs f0, 0x12c(r1)
    stfs f6, 0x144(r1)
    stfs f5, 0x148(r1)
    stfs f4, 0x14c(r1)
    stfs f3, 0x150(r1)
    stfs f0, 0x154(r1)
    lwz r3, 0x15b8(r15)
    bl fn_801F4818
    lwz r17, 0x15b0(r15)
    addi r3, r16, 0x105
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0x108
    bl fn_801F4E8C
    lfs f6, 0x108(r1)
    addi r4, r16, 0xed
    lfs f5, 0x10c(r1)
    addi r5, r1, 0x144
    lfs f4, 0x110(r1)
    lfs f3, 0x114(r1)
    lfs f0, 0x118(r1)
    stfs f6, 0x144(r1)
    stfs f5, 0x148(r1)
    stfs f4, 0x14c(r1)
    stfs f3, 0x150(r1)
    stfs f0, 0x154(r1)
    lwz r3, 0x15c0(r15)
    bl fn_801F72D4
    lwz r17, 0x15b0(r15)
    addi r3, r16, 0x111
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0xf4
    bl fn_801F4E8C
    lfs f6, 0xf4(r1)
    addi r4, r16, 0xed
    lfs f5, 0xf8(r1)
    addi r5, r1, 0x144
    lfs f4, 0xfc(r1)
    lfs f3, 0x100(r1)
    lfs f0, 0x104(r1)
    stfs f6, 0x144(r1)
    stfs f5, 0x148(r1)
    stfs f4, 0x14c(r1)
    stfs f3, 0x150(r1)
    stfs f0, 0x154(r1)
    lwz r3, 0x15c4(r15)
    bl fn_801F72D4
    lwz r17, 0x15b0(r15)
    addi r3, r16, 0x11e
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0xe0
    bl fn_801F4E8C
    lfs f6, 0xe0(r1)
    addi r4, r16, 0xed
    lfs f5, 0xe4(r1)
    addi r5, r1, 0x144
    lfs f4, 0xe8(r1)
    lfs f3, 0xec(r1)
    lfs f0, 0xf0(r1)
    stfs f6, 0x144(r1)
    stfs f5, 0x148(r1)
    stfs f4, 0x14c(r1)
    stfs f3, 0x150(r1)
    stfs f0, 0x154(r1)
    lwz r3, 0x15bc(r15)
    bl fn_801F72D4
    lwz r17, 0x15b0(r15)
    addi r3, r16, 0x128
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0xcc
    bl fn_801F4E8C
    lfs f6, 0xcc(r1)
    addi r4, r16, 0xed
    lfs f5, 0xd0(r1)
    addi r5, r1, 0x144
    lfs f4, 0xd4(r1)
    lfs f3, 0xd8(r1)
    lfs f0, 0xdc(r1)
    stfs f6, 0x144(r1)
    stfs f5, 0x148(r1)
    stfs f4, 0x14c(r1)
    stfs f3, 0x150(r1)
    stfs f0, 0x154(r1)
    lwz r3, 0x15c8(r15)
    bl fn_801F72D4
    lfs f0, 0x9fc(r14)
    lfs f1, lbl_808882F8
    fcmpo cr0, f0, f1
    bge lbl_fn_805AC75C_000018B4
    lwz r3, 0x15bc(r15)
    addi r4, r16, 0x134
    lfs f1, lbl_80888334
    bl fn_801F6C80
    b lbl_fn_805AC75C_000018C0
lbl_fn_805AC75C_000018B4:
    lwz r3, 0x15bc(r15)
    addi r4, r16, 0x134
    bl fn_801F6C80
lbl_fn_805AC75C_000018C0:
    lwz r4, 0x15d0(r15)
    lis r3, lbl_807639B8@ha
    lfd f4, lbl_807639B8@l(r3)
    xoris r0, r4, 0x8000
    stw r0, 0x35c(r1)
    lfs f3, lbl_80888350
    lfd f0, 0x358(r1)
    lfs f5, lbl_808882F8
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fcmpo cr0, f5, f0
    bge lbl_fn_805AC75C_000018F4
    b lbl_fn_805AC75C_00001904
lbl_fn_805AC75C_000018F4:
    stw r0, 0x364(r1)
    lfd f0, 0x360(r1)
    fsubs f0, f0, f4
    fdivs f5, f0, f3
lbl_fn_805AC75C_00001904:
    lfs f30, lbl_808882F4
    fcmpo cr0, f30, f5
    ble lbl_fn_805AC75C_00001914
    b lbl_fn_805AC75C_00001954
lbl_fn_805AC75C_00001914:
    xoris r0, r4, 0x8000
    stw r0, 0x35c(r1)
    lis r3, lbl_807639B8@ha
    lfs f3, lbl_80888350
    lfd f4, lbl_807639B8@l(r3)
    lfd f0, 0x358(r1)
    lfs f30, lbl_808882F8
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fcmpo cr0, f30, f0
    bge lbl_fn_805AC75C_00001944
    b lbl_fn_805AC75C_00001954
lbl_fn_805AC75C_00001944:
    stw r0, 0x364(r1)
    lfd f0, 0x360(r1)
    fsubs f0, f0, f4
    fdivs f30, f0, f3
lbl_fn_805AC75C_00001954:
    lwz r0, 0x15cc(r15)
    cmpwi r0, 0x0
    bne lbl_fn_805AC75C_000019AC
    lwz r4, 0x15b0(r15)
    lis r16, lbl_807639F8@ha
    addi r16, r16, lbl_807639F8@l
    addi r3, r16, 0x13e
    addi r17, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r17
    bl fn_801FECE0
    lwz r4, 0x15b8(r15)
    addi r3, r16, 0x13e
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    b lbl_fn_805AC75C_000019FC
lbl_fn_805AC75C_000019AC:
    lfs f0, lbl_808882F8
    lis r16, lbl_807639F8@ha
    lwz r4, 0x15b0(r15)
    addi r16, r16, lbl_807639F8@l
    fsubs f30, f0, f30
    addi r3, r16, 0x13e
    addi r17, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r17
    bl fn_801FECE0
    lwz r4, 0x15b8(r15)
    addi r3, r16, 0x13e
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
lbl_fn_805AC75C_000019FC:
    lwz r16, 0x60(r14)
    cmpwi r16, 0x0
    beq lbl_fn_805AC75C_00001A54
    lwz r4, 0x15b4(r15)
    lis r3, lbl_807639F8@ha
    addi r3, r3, lbl_807639F8@l
    lwz r0, 0x38(r4)
    addi r3, r3, 0x143
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x15b4(r15)
    addi r17, r4, 0x58
    bl fn_800DC6B4
    lwz r5, 0x8(r16)
    mr r4, r3
    mr r3, r17
    bl fn_801FEE08
    lwz r3, 0x15b4(r15)
    mr r4, r16
    li r5, 0x4
    li r6, 0x2
    bl fn_804A4AEC
lbl_fn_805AC75C_00001A54:
    lwz r0, 0x940(r14)
    lis r3, lbl_807639B8@ha
    lfd f3, lbl_807639B8@l(r3)
    lis r17, lbl_807639F8@ha
    xoris r0, r0, 0x8000
    stw r0, 0x35c(r1)
    lfs f5, 0x7d8(r14)
    addi r17, r17, lbl_807639F8@l
    lfd f0, 0x358(r1)
    addi r4, r17, 0x14e
    fctiwz f4, f5
    lwz r16, 0x9f8(r14)
    fsubs f0, f0, f3
    lwz r14, 0xad4(r14)
    stfd f4, 0x368(r1)
    li r6, 0x0
    fdivs f30, f5, f0
    lwz r5, 0x36c(r1)
    lwz r3, 0x15b0(r15)
    bl fn_801F4CB4
    lwz r4, 0x15b0(r15)
    addi r3, r17, 0x154
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lfs f0, lbl_80888334
    fcmpo cr0, f30, f0
    bge lbl_fn_805AC75C_00001B14
    lwz r3, 0x15b8(r15)
    addi r4, r17, 0x15b
    lfs f2, lbl_808882F4
    lwz r0, 0x38(r3)
    fmr f3, f2
    lfs f1, lbl_80888354
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x15b0(r15)
    bl fn_801F4AA0
    lfs f2, lbl_808882F4
    addi r4, r17, 0x164
    lwz r3, 0x15b8(r15)
    fmr f3, f2
    lfs f1, lbl_80888354
    bl fn_801F4AA0
    b lbl_fn_805AC75C_00001B94
lbl_fn_805AC75C_00001B14:
    lfs f0, lbl_80888358
    fcmpo cr0, f30, f0
    bge lbl_fn_805AC75C_00001B64
    lwz r3, 0x15b8(r15)
    addi r4, r17, 0x15b
    lfs f1, lbl_80888354
    lwz r0, 0x38(r3)
    lfs f2, lbl_8088835C
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lfs f3, lbl_80888360
    lwz r3, 0x15b0(r15)
    bl fn_801F4AA0
    lwz r3, 0x15b8(r15)
    addi r4, r17, 0x164
    lfs f1, lbl_80888354
    lfs f2, lbl_8088835C
    lfs f3, lbl_80888360
    bl fn_801F4AA0
    b lbl_fn_805AC75C_00001B94
lbl_fn_805AC75C_00001B64:
    lfs f1, lbl_80888354
    addi r4, r17, 0x15b
    lwz r3, 0x15b0(r15)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lfs f1, lbl_80888354
    addi r4, r17, 0x164
    lwz r3, 0x15b8(r15)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
lbl_fn_805AC75C_00001B94:
    cmpwi r14, 0x0
    bgt lbl_fn_805AC75C_00001BF8
    lwz r4, 0x15b0(r15)
    lis r3, lbl_807639F8@ha
    addi r3, r3, lbl_807639F8@l
    addi r3, r3, 0x16f
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808882F8
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
    subfic r0, r16, 0x5
    lis r3, lbl_807639B8@ha
    xoris r0, r0, 0x8000
    stw r0, 0x364(r1)
    lfd f4, lbl_807639B8@l(r3)
    lfd f0, 0x360(r1)
    lfs f3, lbl_80888360
    fsubs f4, f0, f4
    lfs f0, lbl_80888364
    lwz r3, 0x15b0(r15)
    fmadds f0, f3, f4, f0
    stfs f0, 0x100(r3)
    b lbl_fn_805AC75C_00001C6C
lbl_fn_805AC75C_00001BF8:
    lwz r4, 0x15b0(r15)
    lis r3, lbl_807639F8@ha
    addi r3, r3, lbl_807639F8@l
    addi r3, r3, 0x16f
    addi r17, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808882F4
    mr r4, r3
    mr r3, r17
    bl fn_801FECE0
    subfic r0, r14, 0x2
    lis r3, lbl_807639B8@ha
    xoris r0, r0, 0x8000
    stw r0, 0x35c(r1)
    lfd f4, lbl_807639B8@l(r3)
    lfd f0, 0x358(r1)
    lfs f3, lbl_8088833C
    fsubs f0, f0, f4
    lfs f5, lbl_808882F4
    lwz r3, 0x15b0(r15)
    fmuls f0, f3, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_805AC75C_00001C58
    b lbl_fn_805AC75C_00001C68
lbl_fn_805AC75C_00001C58:
    stw r0, 0x364(r1)
    lfd f0, 0x360(r1)
    fsubs f0, f0, f4
    fmuls f5, f3, f0
lbl_fn_805AC75C_00001C68:
    stfs f5, 0x100(r3)
lbl_fn_805AC75C_00001C6C:
    cmpwi r16, 0x1
    bgt lbl_fn_805AC75C_00001CE0
    lwz r4, 0x15b0(r15)
    lis r14, lbl_807639F8@ha
    addi r14, r14, lbl_807639F8@l
    addi r3, r14, 0x175
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888354
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0x15b0(r15)
    addi r3, r14, 0x17a
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808882F4
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0x15b0(r15)
    addi r3, r14, 0x17f
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808882F4
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
    b lbl_fn_805AC75C_00001DBC
lbl_fn_805AC75C_00001CE0:
    cmpwi r16, 0x2
    bgt lbl_fn_805AC75C_00001D54
    lwz r4, 0x15b0(r15)
    lis r14, lbl_807639F8@ha
    addi r14, r14, lbl_807639F8@l
    addi r3, r14, 0x175
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888354
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0x15b0(r15)
    addi r3, r14, 0x17a
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088835C
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0x15b0(r15)
    addi r3, r14, 0x17f
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808882F4
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
    b lbl_fn_805AC75C_00001DBC
lbl_fn_805AC75C_00001D54:
    lwz r4, 0x15b0(r15)
    lis r14, lbl_807639F8@ha
    addi r14, r14, lbl_807639F8@l
    addi r3, r14, 0x175
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808882F4
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0x15b0(r15)
    addi r3, r14, 0x17a
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888354
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0x15b0(r15)
    addi r3, r14, 0x17f
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088832C
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
lbl_fn_805AC75C_00001DBC:
    lis r3, lbl_807639B8@ha
    lis r4, lbl_807639C0@ha
    lis r5, lbl_807639F8@ha
    lfd f30, lbl_807639C0@l(r4)
    lfd f31, lbl_807639B8@l(r3)
    mr r14, r15
    addi r17, r5, lbl_807639F8@l
    li r16, 0x0
lbl_fn_805AC75C_00001DDC:
    lwz r0, 0xa8(r14)
    cmpwi r0, 0x0
    beq lbl_fn_805AC75C_00001F5C
    lwz r4, 0x15bc(r14)
    addi r3, r1, 0x130
    addi r5, r17, 0x184
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x15bc(r14)
    bl fn_801F8830
    lwz r4, 0xa8(r14)
    li r5, 0x1
    lwz r3, lbl_8087EEC8
    li r6, 0x1
    lfs f1, 0x138(r1)
    lwz r4, 0x8(r4)
    lfs f2, lbl_808882F4
    bl fn_8006EF48
    lwz r3, 0x15bc(r14)
    addi r4, r17, 0x18d
    bl fn_801F6C80
    lwz r5, 0xa8(r14)
    addi r4, r17, 0x194
    lwz r3, 0x15bc(r14)
    lwz r5, 0x8(r5)
    bl fn_801F837C
    lwz r5, 0xa8(r14)
    addi r4, r17, 0x199
    lwz r3, 0x15bc(r14)
    lwz r5, 0x8(r5)
    bl fn_801F837C
    lwz r0, 0x5c(r15)
    cmpw r16, r0
    bne lbl_fn_805AC75C_00001E7C
    lwz r3, 0x15bc(r14)
    addi r4, r17, 0x1a1
    lfs f1, lbl_808882F8
    bl fn_801F6C80
    b lbl_fn_805AC75C_00001E8C
lbl_fn_805AC75C_00001E7C:
    lwz r3, 0x15bc(r14)
    addi r4, r17, 0x1a1
    lfs f1, lbl_808882F4
    bl fn_801F6C80
lbl_fn_805AC75C_00001E8C:
    lwz r0, 0xd8(r14)
    cmpwi r0, 0x0
    bge lbl_fn_805AC75C_00001EAC
    lwz r3, 0x15bc(r14)
    addi r4, r17, 0x1ac
    lfs f1, lbl_808882F4
    bl fn_801F6C80
    b lbl_fn_805AC75C_00001EC8
lbl_fn_805AC75C_00001EAC:
    lwz r3, 0x15bc(r14)
    addi r4, r17, 0x1ac
    lfs f1, lbl_808882F8
    bl fn_801F6C80
    lwz r3, 0x15bc(r14)
    lwz r4, 0xd8(r14)
    bl fn_803DDD54
lbl_fn_805AC75C_00001EC8:
    add r4, r15, r16
    lwz r3, 0x15bc(r14)
    lbz r0, 0xa4(r4)
    addi r4, r17, 0x1b3
    stw r0, 0x35c(r1)
    lfd f0, 0x358(r1)
    fsubs f1, f0, f30
    bl fn_801F6C80
    lwz r0, 0x15cc(r15)
    cmpwi r0, 0x0
    bne lbl_fn_805AC75C_00001F14
    lwz r0, 0x15d0(r15)
    lwz r3, 0x15bc(r14)
    xoris r0, r0, 0x8000
    stw r0, 0x364(r1)
    lfd f0, 0x360(r1)
    fsubs f0, f0, f31
    stfs f0, 0x50(r3)
    b lbl_fn_805AC75C_00001F5C
lbl_fn_805AC75C_00001F14:
    lwz r4, 0x15bc(r14)
    cmplw r4, r0
    bne lbl_fn_805AC75C_00001F40
    lwz r3, 0x15d0(r15)
    addi r0, r3, 0x10
    xoris r0, r0, 0x8000
    stw r0, 0x35c(r1)
    lfd f0, 0x358(r1)
    fsubs f0, f0, f31
    stfs f0, 0x50(r4)
    b lbl_fn_805AC75C_00001F5C
lbl_fn_805AC75C_00001F40:
    lwz r3, 0x15d0(r15)
    addi r0, r3, 0x1f
    xoris r0, r0, 0x8000
    stw r0, 0x364(r1)
    lfd f0, 0x360(r1)
    fsubs f0, f0, f31
    stfs f0, 0x50(r4)
lbl_fn_805AC75C_00001F5C:
    addi r16, r16, 0x1
    addi r14, r14, 0x4
    cmpwi r16, 0x4
    blt lbl_fn_805AC75C_00001DDC
    lwz r3, lbl_8087F9C0
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805AC75C_0000291C
    li r23, 0x0
    lis r3, __files@ha
    lis r4, lbl_807639F8@ha
    stw r23, 0x8c(r1)
    mr r19, r15
    addi r22, r1, 0x68
    stw r23, 0x90(r1)
    addi r14, r4, lbl_807639F8@l
    addi r26, r3, __files@l
    addi r27, r1, 0x94
    stw r23, 0x94(r1)
    addi r20, r1, 0xb8
    li r16, 0x0
    lis r29, 0xcccd
    lis r24, lbl_80797728@ha
    lis r25, 0x1555
    lis r28, 0x71c
    lis r30, 0xe39
    lis r31, 0x2aab
lbl_fn_805AC75C_00001FC8:
    lwz r4, 0xa8(r19)
    cmpwi r4, 0x0
    beq lbl_fn_805AC75C_000023F0
    lwz r5, 0x8(r4)
    addi r3, r1, 0x158
    lwz r6, 0xc(r4)
    addi r4, r24, lbl_80797728@l
    crclr 6
    bl fn_800DD3FC
    stw r23, 0x68(r1)
    addi r3, r1, 0x158
    stw r23, 0x6c(r1)
    stw r23, 0x70(r1)
    bl fn_80686A48
    mr r17, r3
    mr r3, r22
    mr r4, r17
    bl fn_800DBF68
    addi r6, r1, 0x158
    lbz r3, 0x34(r1)
    stb r3, 0x30(r1)
    mr r7, r6
    slwi r0, r17, 1
    mr r3, r22
    add r7, r7, r0
    addi r8, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x90(r1)
    lwz r3, 0x94(r1)
    cmplw r0, r3
    bge lbl_fn_805AC75C_000020D4
    mulli r0, r0, 0xc
    lwz r3, 0x8c(r1)
    add. r17, r3, r0
    beq lbl_fn_805AC75C_000020C4
    lwz r3, 0x68(r1)
    srwi. r0, r3, 31
    bne lbl_fn_805AC75C_00002080
    lwz r0, 0x6c(r1)
    stw r3, 0x0(r17)
    stw r0, 0x4(r17)
    lwz r0, 0x70(r1)
    stw r0, 0x8(r17)
    b lbl_fn_805AC75C_000020C4
lbl_fn_805AC75C_00002080:
    stw r23, 0x0(r17)
    mr r3, r17
    stw r23, 0x4(r17)
    stw r23, 0x8(r17)
    lwz r4, 0x6c(r1)
    bl fn_800DBF68
    lwz r0, 0x6c(r1)
    mr r3, r17
    lbz r4, 0x24(r1)
    addi r8, r1, 0x20
    stb r4, 0x20(r1)
    slwi r0, r0, 1
    lwz r6, 0x70(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_805AC75C_000020C4:
    lwz r3, 0x90(r1)
    addi r0, r3, 0x1
    stw r0, 0x90(r1)
    b lbl_fn_805AC75C_000023DC
lbl_fn_805AC75C_000020D4:
    addi r0, r25, 0x5555
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_805AC75C_000020F8
    addi r4, r14, 0x1bd
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805AC75C_000020F8:
    lwz r3, 0x90(r1)
    addi r0, r25, 0x5555
    lwz r17, 0x94(r1)
    addi r3, r3, 0x1
    stw r23, 0xb8(r1)
    subf r3, r17, r3
    subf r0, r17, r0
    cmplw r3, r0
    stw r23, 0xbc(r1)
    stw r23, 0xc0(r1)
    stw r27, 0xc4(r1)
    stw r23, 0xc8(r1)
    stw r3, 0x4c(r1)
    ble lbl_fn_805AC75C_00002144
    addi r4, r14, 0x1bd
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805AC75C_00002144:
    addi r0, r28, 0x71c7
    cmplw r17, r0
    bge lbl_fn_805AC75C_0000218C
    addi r4, r17, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x4c(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x44
    srwi r4, r4, 2
    stw r4, 0x44(r1)
    cmplw r4, r0
    bge lbl_fn_805AC75C_00002180
    addi r3, r1, 0x4c
lbl_fn_805AC75C_00002180:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_805AC75C_000021C8
lbl_fn_805AC75C_0000218C:
    subi r0, r30, 0x1c72
    cmplw r17, r0
    bge lbl_fn_805AC75C_000021C4
    addi r3, r17, 0x1
    lwz r0, 0x4c(r1)
    srwi r3, r3, 1
    stw r3, 0x48(r1)
    cmplw r3, r0
    addi r3, r1, 0x48
    bge lbl_fn_805AC75C_000021B8
    addi r3, r1, 0x4c
lbl_fn_805AC75C_000021B8:
    lwz r0, 0x0(r3)
    add r17, r17, r0
    b lbl_fn_805AC75C_000021C8
lbl_fn_805AC75C_000021C4:
    addi r17, r25, 0x5555
lbl_fn_805AC75C_000021C8:
    addi r0, r25, 0x5555
    cmplw r17, r0
    ble lbl_fn_805AC75C_000021E8
    addi r4, r14, 0x1bd
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805AC75C_000021E8:
    mulli r3, r17, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_805AC75C_00002214
    lis r4, lbl_807799A0@ha
    addi r3, r26, 0xa0
    addi r4, r4, lbl_807799A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805AC75C_00002214:
    lwz r5, 0x90(r1)
    lwz r0, 0xbc(r1)
    mulli r4, r5, 0xc
    stw r17, 0xc0(r1)
    stw r18, 0xb8(r1)
    mulli r3, r0, 0xc
    add r0, r18, r4
    stw r5, 0xc8(r1)
    add. r17, r3, r0
    beq lbl_fn_805AC75C_000022A4
    lwz r3, 0x68(r1)
    srwi. r0, r3, 31
    bne lbl_fn_805AC75C_00002260
    lwz r0, 0x6c(r1)
    stw r3, 0x0(r17)
    stw r0, 0x4(r17)
    lwz r0, 0x70(r1)
    stw r0, 0x8(r17)
    b lbl_fn_805AC75C_000022A4
lbl_fn_805AC75C_00002260:
    stw r23, 0x0(r17)
    mr r3, r17
    stw r23, 0x4(r17)
    stw r23, 0x8(r17)
    lwz r4, 0x6c(r1)
    bl fn_800DBF68
    lwz r0, 0x6c(r1)
    mr r3, r17
    lbz r4, 0x28(r1)
    addi r8, r1, 0x2c
    stb r4, 0x2c(r1)
    slwi r0, r0, 1
    lwz r6, 0x70(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_805AC75C_000022A4:
    lwz r0, 0x90(r1)
    subi r6, r31, 0x5555
    lwz r17, 0x8c(r1)
    mulli r5, r0, 0xc
    lwz r3, 0xbc(r1)
    lwz r0, 0xc8(r1)
    mr r4, r17
    addi r7, r3, 0x1
    lwz r3, 0xb8(r1)
    add r5, r17, r5
    stw r7, 0xbc(r1)
    subf r5, r17, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r21, r5, r6
    subf r0, r21, r0
    stw r0, 0xc8(r1)
    mulli r18, r21, 0xc
    mulli r0, r0, 0xc
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r17
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0xc8(r1)
    lwz r8, 0x90(r1)
    mulli r3, r0, 0xc
    lwz r0, 0xbc(r1)
    lwz r7, 0x8c(r1)
    lwz r4, 0xb8(r1)
    add r5, r0, r21
    add r18, r7, r3
    mulli r0, r8, 0xc
    lwz r6, 0x94(r1)
    lwz r3, 0xc0(r1)
    stw r3, 0x94(r1)
    add r17, r18, r0
    stw r6, 0xc0(r1)
    stw r4, 0x8c(r1)
    stw r7, 0xb8(r1)
    stw r5, 0x90(r1)
    stw r8, 0xbc(r1)
    b lbl_fn_805AC75C_00002378
lbl_fn_805AC75C_0000235C:
    subic. r17, r17, 0xc
    beq lbl_fn_805AC75C_00002378
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_805AC75C_00002378
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_805AC75C_00002378:
    cmplw r17, r18
    bgt lbl_fn_805AC75C_0000235C
    cmpwi r20, 0x0
    stw r23, 0xbc(r1)
    beq lbl_fn_805AC75C_000023DC
    lwz r3, 0xb8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805AC75C_000023DC
    mulli r0, r23, 0xc
    stw r23, 0xbc(r1)
    li r17, 0x0
    add r18, r3, r0
    b lbl_fn_805AC75C_000023CC
lbl_fn_805AC75C_000023AC:
    subic. r18, r18, 0xc
    beq lbl_fn_805AC75C_000023C8
    lwz r0, 0x0(r18)
    srwi. r0, r0, 31
    beq lbl_fn_805AC75C_000023C8
    lwz r3, 0x8(r18)
    bl dtor_80084684
lbl_fn_805AC75C_000023C8:
    subi r17, r17, 0x1
lbl_fn_805AC75C_000023CC:
    cmpwi r17, 0x0
    bne lbl_fn_805AC75C_000023AC
    lwz r3, 0xb8(r1)
    bl dtor_80084684
lbl_fn_805AC75C_000023DC:
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805AC75C_000023F0
    lwz r3, 0x70(r1)
    bl dtor_80084684
lbl_fn_805AC75C_000023F0:
    addi r16, r16, 0x1
    addi r19, r19, 0x4
    cmpwi r16, 0x4
    blt lbl_fn_805AC75C_00001FC8
    lis r3, lbl_80797728@ha
    lis r21, __files@ha
    lis r22, lbl_807639F8@ha
    lbz r24, 0x1c(r1)
    addi r3, r3, lbl_80797728@l
    addi r26, r1, 0x5c
    addi r25, r3, 0xe
    addi r22, r22, lbl_807639F8@l
    addi r21, r21, __files@l
    addi r20, r1, 0x94
    addi r28, r1, 0xa4
    li r16, 0x0
    lis r18, 0xcccd
    lis r23, 0x1555
    lis r19, 0x71c
    lis r17, 0xe39
    lis r31, lbl_807799A0@ha
    lis r14, 0x2aab
    b lbl_fn_805AC75C_00002844
lbl_fn_805AC75C_0000244C:
    stw r16, 0x5c(r1)
    mr r3, r25
    stw r16, 0x60(r1)
    stw r16, 0x64(r1)
    bl fn_80686A48
    mr r27, r3
    mr r3, r26
    mr r4, r27
    bl fn_800DBF68
    slwi r0, r27, 1
    stb r24, 0x18(r1)
    mr r3, r26
    mr r6, r25
    add r7, r25, r0
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x90(r1)
    lwz r3, 0x94(r1)
    cmplw r0, r3
    bge lbl_fn_805AC75C_0000252C
    mulli r0, r0, 0xc
    lwz r3, 0x8c(r1)
    add. r27, r3, r0
    beq lbl_fn_805AC75C_0000251C
    lwz r3, 0x5c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_805AC75C_000024D8
    lwz r0, 0x60(r1)
    stw r3, 0x0(r27)
    stw r0, 0x4(r27)
    lwz r0, 0x64(r1)
    stw r0, 0x8(r27)
    b lbl_fn_805AC75C_0000251C
lbl_fn_805AC75C_000024D8:
    stw r16, 0x0(r27)
    mr r3, r27
    stw r16, 0x4(r27)
    stw r16, 0x8(r27)
    lwz r4, 0x60(r1)
    bl fn_800DBF68
    lwz r0, 0x60(r1)
    mr r3, r27
    lbz r4, 0xc(r1)
    addi r8, r1, 0x8
    stb r4, 0x8(r1)
    slwi r0, r0, 1
    lwz r6, 0x64(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_805AC75C_0000251C:
    lwz r3, 0x90(r1)
    addi r0, r3, 0x1
    stw r0, 0x90(r1)
    b lbl_fn_805AC75C_00002830
lbl_fn_805AC75C_0000252C:
    addi r0, r23, 0x5555
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_805AC75C_00002550
    addi r4, r22, 0x1bd
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805AC75C_00002550:
    lwz r3, 0x90(r1)
    addi r0, r23, 0x5555
    lwz r27, 0x94(r1)
    addi r3, r3, 0x1
    stw r16, 0xa4(r1)
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r16, 0xa8(r1)
    stw r16, 0xac(r1)
    stw r20, 0xb0(r1)
    stw r16, 0xb4(r1)
    stw r3, 0x40(r1)
    ble lbl_fn_805AC75C_0000259C
    addi r4, r22, 0x1bd
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805AC75C_0000259C:
    addi r0, r19, 0x71c7
    cmplw r27, r0
    bge lbl_fn_805AC75C_000025E4
    addi r4, r27, 0x1
    subi r5, r18, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x40(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x38
    srwi r4, r4, 2
    stw r4, 0x38(r1)
    cmplw r4, r0
    bge lbl_fn_805AC75C_000025D8
    addi r3, r1, 0x40
lbl_fn_805AC75C_000025D8:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_805AC75C_00002620
lbl_fn_805AC75C_000025E4:
    subi r0, r17, 0x1c72
    cmplw r27, r0
    bge lbl_fn_805AC75C_0000261C
    addi r3, r27, 0x1
    lwz r0, 0x40(r1)
    srwi r3, r3, 1
    stw r3, 0x3c(r1)
    cmplw r3, r0
    addi r3, r1, 0x3c
    bge lbl_fn_805AC75C_00002610
    addi r3, r1, 0x40
lbl_fn_805AC75C_00002610:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_805AC75C_00002620
lbl_fn_805AC75C_0000261C:
    addi r27, r23, 0x5555
lbl_fn_805AC75C_00002620:
    addi r0, r23, 0x5555
    cmplw r27, r0
    ble lbl_fn_805AC75C_00002640
    addi r4, r22, 0x1bd
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805AC75C_00002640:
    mulli r3, r27, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_805AC75C_00002668
    addi r3, r21, 0xa0
    addi r4, r31, lbl_807799A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805AC75C_00002668:
    lwz r5, 0x90(r1)
    lwz r0, 0xa8(r1)
    mulli r4, r5, 0xc
    stw r27, 0xac(r1)
    stw r29, 0xa4(r1)
    mulli r3, r0, 0xc
    add r0, r29, r4
    stw r5, 0xb4(r1)
    add. r27, r3, r0
    beq lbl_fn_805AC75C_000026F8
    lwz r3, 0x5c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_805AC75C_000026B4
    lwz r0, 0x60(r1)
    stw r3, 0x0(r27)
    stw r0, 0x4(r27)
    lwz r0, 0x64(r1)
    stw r0, 0x8(r27)
    b lbl_fn_805AC75C_000026F8
lbl_fn_805AC75C_000026B4:
    stw r16, 0x0(r27)
    mr r3, r27
    stw r16, 0x4(r27)
    stw r16, 0x8(r27)
    lwz r4, 0x60(r1)
    bl fn_800DBF68
    lwz r0, 0x60(r1)
    mr r3, r27
    lbz r4, 0x10(r1)
    addi r8, r1, 0x14
    stb r4, 0x14(r1)
    slwi r0, r0, 1
    lwz r6, 0x64(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_805AC75C_000026F8:
    lwz r0, 0x90(r1)
    subi r6, r14, 0x5555
    lwz r30, 0x8c(r1)
    mulli r5, r0, 0xc
    lwz r3, 0xa8(r1)
    lwz r0, 0xb4(r1)
    mr r4, r30
    addi r7, r3, 0x1
    lwz r3, 0xa4(r1)
    add r5, r30, r5
    stw r7, 0xa8(r1)
    subf r5, r30, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r27, r5, r6
    subf r0, r27, r0
    stw r0, 0xb4(r1)
    mulli r29, r27, 0xc
    mulli r0, r0, 0xc
    mr r5, r29
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r29
    li r4, 0x0
    bl memset
    lwz r0, 0xb4(r1)
    lwz r8, 0x90(r1)
    mulli r3, r0, 0xc
    lwz r0, 0xa8(r1)
    lwz r7, 0x8c(r1)
    lwz r4, 0xa4(r1)
    add r5, r0, r27
    add r29, r7, r3
    mulli r0, r8, 0xc
    lwz r6, 0x94(r1)
    lwz r3, 0xac(r1)
    stw r3, 0x94(r1)
    add r27, r29, r0
    stw r6, 0xac(r1)
    stw r4, 0x8c(r1)
    stw r7, 0xa4(r1)
    stw r5, 0x90(r1)
    stw r8, 0xa8(r1)
    b lbl_fn_805AC75C_000027CC
lbl_fn_805AC75C_000027B0:
    subic. r27, r27, 0xc
    beq lbl_fn_805AC75C_000027CC
    lwz r0, 0x0(r27)
    srwi. r0, r0, 31
    beq lbl_fn_805AC75C_000027CC
    lwz r3, 0x8(r27)
    bl dtor_80084684
lbl_fn_805AC75C_000027CC:
    cmplw r27, r29
    bgt lbl_fn_805AC75C_000027B0
    cmpwi r28, 0x0
    stw r16, 0xa8(r1)
    beq lbl_fn_805AC75C_00002830
    lwz r3, 0xa4(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805AC75C_00002830
    mulli r0, r16, 0xc
    stw r16, 0xa8(r1)
    li r27, 0x0
    add r29, r3, r0
    b lbl_fn_805AC75C_00002820
lbl_fn_805AC75C_00002800:
    subic. r29, r29, 0xc
    beq lbl_fn_805AC75C_0000281C
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    beq lbl_fn_805AC75C_0000281C
    lwz r3, 0x8(r29)
    bl dtor_80084684
lbl_fn_805AC75C_0000281C:
    subi r27, r27, 0x1
lbl_fn_805AC75C_00002820:
    cmpwi r27, 0x0
    bne lbl_fn_805AC75C_00002800
    lwz r3, 0xa4(r1)
    bl dtor_80084684
lbl_fn_805AC75C_00002830:
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805AC75C_00002844
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_805AC75C_00002844:
    lwz r0, 0x90(r1)
    cmplwi r0, 0x3
    blt lbl_fn_805AC75C_0000244C
    lwz r4, 0x8c(r1)
    addi r3, r1, 0x50
    addi r5, r4, 0xc
    bl fn_805ADB2C
    lwz r5, 0x8c(r1)
    addi r3, r1, 0x80
    addi r4, r1, 0x50
    addi r5, r5, 0x18
    bl fn_805ADB2C
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805AC75C_00002888
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_805AC75C_00002888:
    lwz r0, 0x80(r1)
    lwz r3, lbl_8087F490
    srwi. r0, r0, 31
    bne lbl_fn_805AC75C_000028A0
    addi r4, r1, 0x82
    b lbl_fn_805AC75C_000028A4
lbl_fn_805AC75C_000028A0:
    lwz r4, 0x88(r1)
lbl_fn_805AC75C_000028A4:
    bl fn_803E4978
    lwz r0, 0x80(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805AC75C_000028BC
    lwz r3, 0x88(r1)
    bl dtor_80084684
lbl_fn_805AC75C_000028BC:
    addic. r0, r1, 0x8c
    beq lbl_fn_805AC75C_0000291C
    beq lbl_fn_805AC75C_0000291C
    lwz r4, 0x8c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805AC75C_0000291C
    lwz r16, 0x90(r1)
    mulli r3, r16, 0xc
    subf r0, r16, r16
    stw r0, 0x90(r1)
    add r14, r4, r3
    b lbl_fn_805AC75C_0000290C
lbl_fn_805AC75C_000028EC:
    subic. r14, r14, 0xc
    beq lbl_fn_805AC75C_00002908
    lwz r0, 0x0(r14)
    srwi. r0, r0, 31
    beq lbl_fn_805AC75C_00002908
    lwz r3, 0x8(r14)
    bl dtor_80084684
lbl_fn_805AC75C_00002908:
    subi r16, r16, 0x1
lbl_fn_805AC75C_0000290C:
    cmpwi r16, 0x0
    bne lbl_fn_805AC75C_000028EC
    lwz r3, 0x8c(r1)
    bl dtor_80084684
lbl_fn_805AC75C_0000291C:
    lwz r3, 0x15d0(r15)
    addi r4, r3, 0x1
    neg r0, r4
    andc r3, r0, r4
    srawi r0, r3, 31
    and r0, r4, r0
    cmpwi r0, 0xf
    bge lbl_fn_805AC75C_00002948
    srawi r0, r3, 31
    and r0, r4, r0
    b lbl_fn_805AC75C_0000294C
lbl_fn_805AC75C_00002948:
    li r0, 0xf
lbl_fn_805AC75C_0000294C:
    stw r0, 0x15d0(r15)
    psq_l f31, 0x3d8(r1), 0, 0
    lfd f31, 0x3d0(r1)
    psq_l f30, 0x3c8(r1), 0, 0
    lfd f30, 0x3c0(r1)
    addi r11, r1, 0x3c0
    bl _restgpr_14
    lwz r0, 0x3e4(r1)
    mtlr r0
    addi r1, r1, 0x3e0
    blr
}
