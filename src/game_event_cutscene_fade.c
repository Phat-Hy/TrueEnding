#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8004ADF4(void);
extern void fn_8004B1EC(void);
extern void fn_8004B338(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800897D8(void);
extern void fn_800CB480(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D5808(void);
extern void fn_801011B8(void);
extern void fn_8020F130(void);
extern void fn_8020F71C(void);
extern void fn_8023A60C(void);
extern void fn_803EB4A8(void);
extern void fn_8047CF7C(void);
extern void fn_80488534(void);
extern void fn_8048871C(void);
extern void fn_80488E00(void);
extern void fn_80489A50(void);
extern void fn_8048D3A4(void);
extern void fn_8048DE54(void);
extern void fn_8053E870(void);
extern void fn_8053F6F0(void);
extern void fn_80540668(void);
extern void fn_805406A4(void);
extern void fn_8054119C(void);
extern void fn_80541248(void);
extern void fn_8054F384(void);
extern void fn_8054F9E0(void);
extern void fn_8054FB14(void);
extern void fn_8054FBCC(void);
extern void fn_80576034(void);
extern void fn_8059C330(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80756380[];
extern u8 lbl_80775A88[];
extern u8 lbl_807900C0[];
extern u8 lbl_807901BC[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F498;
extern u32 lbl_8087F540;
extern u32 lbl_8087F544;
extern u32 lbl_8087F9E8;

/* Function declarations */
void fn_8047DC98(void);
void fn_8047DF70(void);
void fn_8047E4BC(void);
void fn_8047E528(void);
void fn_8047E5D4(void);
void fn_8047E5DC(void);
void fn_8047E964(void);
void fn_8047EA34(void);
void fn_8047EFD8(void);
void fn_8047F268(void);
void fn_8047F2EC(void);
void fn_8047F364(void);
void fn_8047F400(void);
void fn_8047F420(void);
void fn_8047F498(void);
void fn_8047F510(void);
void fn_8047F580(void);

asm void fn_8047DC98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    beq lbl_fn_8047DC98_000002B4
    li r4, -0x1
    addi r3, r3, 0x444
    bl fn_8004B338
    addic. r29, r30, 0x320
    beq lbl_fn_8047DC98_00000168
    addic. r28, r29, 0x34
    beq lbl_fn_8047DC98_000000FC
    addic. r4, r28, 0x44
    beq lbl_fn_8047DC98_00000078
    beq lbl_fn_8047DC98_00000078
    beq lbl_fn_8047DC98_00000078
    beq lbl_fn_8047DC98_00000078
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_00000078
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_00000078:
    addic. r4, r28, 0x38
    beq lbl_fn_8047DC98_000000A4
    beq lbl_fn_8047DC98_000000A4
    beq lbl_fn_8047DC98_000000A4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_000000A4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_000000A4:
    addic. r4, r28, 0x2c
    beq lbl_fn_8047DC98_000000D0
    beq lbl_fn_8047DC98_000000D0
    beq lbl_fn_8047DC98_000000D0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_000000D0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_000000D0:
    addic. r4, r28, 0x20
    beq lbl_fn_8047DC98_000000FC
    beq lbl_fn_8047DC98_000000FC
    beq lbl_fn_8047DC98_000000FC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_000000FC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_000000FC:
    addic. r4, r29, 0x28
    beq lbl_fn_8047DC98_00000128
    beq lbl_fn_8047DC98_00000128
    beq lbl_fn_8047DC98_00000128
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_00000128
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_00000128:
    addic. r0, r29, 0x1c
    beq lbl_fn_8047DC98_00000144
    lwz r0, 0x1c(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8047DC98_00000144
    lwz r3, 0x24(r29)
    bl dtor_80084684
lbl_fn_8047DC98_00000144:
    cmpwi r29, 0x0
    beq lbl_fn_8047DC98_00000168
    addic. r0, r29, 0x8
    beq lbl_fn_8047DC98_00000168
    lwz r0, 0x8(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8047DC98_00000168
    lwz r3, 0x10(r29)
    bl dtor_80084684
lbl_fn_8047DC98_00000168:
    addic. r28, r30, 0x29c
    beq lbl_fn_8047DC98_00000298
    addic. r29, r28, 0x34
    beq lbl_fn_8047DC98_0000022C
    addic. r4, r29, 0x44
    beq lbl_fn_8047DC98_000001A8
    beq lbl_fn_8047DC98_000001A8
    beq lbl_fn_8047DC98_000001A8
    beq lbl_fn_8047DC98_000001A8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_000001A8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_000001A8:
    addic. r4, r29, 0x38
    beq lbl_fn_8047DC98_000001D4
    beq lbl_fn_8047DC98_000001D4
    beq lbl_fn_8047DC98_000001D4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_000001D4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_000001D4:
    addic. r4, r29, 0x2c
    beq lbl_fn_8047DC98_00000200
    beq lbl_fn_8047DC98_00000200
    beq lbl_fn_8047DC98_00000200
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_00000200
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_00000200:
    addic. r4, r29, 0x20
    beq lbl_fn_8047DC98_0000022C
    beq lbl_fn_8047DC98_0000022C
    beq lbl_fn_8047DC98_0000022C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_0000022C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_0000022C:
    addic. r4, r28, 0x28
    beq lbl_fn_8047DC98_00000258
    beq lbl_fn_8047DC98_00000258
    beq lbl_fn_8047DC98_00000258
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DC98_00000258
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DC98_00000258:
    addic. r0, r28, 0x1c
    beq lbl_fn_8047DC98_00000274
    lwz r0, 0x1c(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8047DC98_00000274
    lwz r3, 0x24(r28)
    bl dtor_80084684
lbl_fn_8047DC98_00000274:
    cmpwi r28, 0x0
    beq lbl_fn_8047DC98_00000298
    addic. r0, r28, 0x8
    beq lbl_fn_8047DC98_00000298
    lwz r0, 0x8(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8047DC98_00000298
    lwz r3, 0x10(r28)
    bl dtor_80084684
lbl_fn_8047DC98_00000298:
    mr r3, r30
    li r4, 0x0
    bl fn_8004B338
    cmpwi r31, 0x0
    ble lbl_fn_8047DC98_000002B4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8047DC98_000002B4:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8047DF70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    mr r29, r3
    mr r30, r4
    beq lbl_fn_8047DF70_0000080C
    lis r4, lbl_807900C0@ha
    li r0, 0x0
    addi r4, r4, lbl_807900C0@l
    stw r4, 0x0(r3)
    li r31, 0x0
    stw r0, lbl_8087F540
    b lbl_fn_8047DF70_00000324
lbl_fn_8047DF70_00000314:
    mr r3, r29
    mr r4, r31
    bl fn_8048D3A4
    addi r31, r31, 0x1
lbl_fn_8047DF70_00000324:
    lwz r0, 0x23a4(r29)
    cmpw r31, r0
    blt lbl_fn_8047DF70_00000314
    li r31, 0x0
    b lbl_fn_8047DF70_00000348
lbl_fn_8047DF70_00000338:
    mr r3, r29
    mr r4, r31
    bl fn_8048DE54
    addi r31, r31, 0x1
lbl_fn_8047DF70_00000348:
    lwz r0, 0x2398(r29)
    cmpw r31, r0
    blt lbl_fn_8047DF70_00000338
    lwz r0, 0x23a4(r29)
    lwz r3, 0x2398(r29)
    subf r0, r0, r0
    stw r0, 0x23a4(r29)
    subf r0, r3, r3
    stw r0, 0x2398(r29)
    bl fn_8054F384
    addic. r4, r29, 0x23a0
    beq lbl_fn_8047DF70_0000039C
    beq lbl_fn_8047DF70_0000039C
    beq lbl_fn_8047DF70_0000039C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DF70_0000039C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DF70_0000039C:
    addic. r4, r29, 0x2394
    beq lbl_fn_8047DF70_000003C8
    beq lbl_fn_8047DF70_000003C8
    beq lbl_fn_8047DF70_000003C8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DF70_000003C8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DF70_000003C8:
    addi r3, r29, 0x1f20
    li r4, -0x1
    bl fn_8004ADF4
    addic. r4, r29, 0x1f10
    beq lbl_fn_8047DF70_00000404
    beq lbl_fn_8047DF70_00000404
    beq lbl_fn_8047DF70_00000404
    beq lbl_fn_8047DF70_00000404
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DF70_00000404
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DF70_00000404:
    addic. r31, r29, 0x1eb8
    beq lbl_fn_8047DF70_00000438
    addic. r0, r31, 0x3c
    beq lbl_fn_8047DF70_00000438
    lwz r3, 0x40(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8047DF70_0000042C
    lis r4, fn_800D5808@ha
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_8047DF70_0000042C:
    li r0, 0x0
    stw r0, 0x40(r31)
    stw r0, 0x3c(r31)
lbl_fn_8047DF70_00000438:
    addic. r0, r29, 0x1e7c
    beq lbl_fn_8047DF70_00000454
    lwz r0, 0x1e7c(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8047DF70_00000454
    lwz r3, 0x1e84(r29)
    bl dtor_80084684
lbl_fn_8047DF70_00000454:
    addic. r31, r29, 0x1dfc
    beq lbl_fn_8047DF70_00000690
    addic. r3, r31, 0x44
    beq lbl_fn_8047DF70_00000518
    addic. r23, r3, 0x8
    beq lbl_fn_8047DF70_00000518
    beq lbl_fn_8047DF70_00000518
    beq lbl_fn_8047DF70_00000518
    lwz r4, 0x0(r23)
    cmpwi r4, 0x0
    beq lbl_fn_8047DF70_00000518
    lwz r28, 0x4(r23)
    mulli r3, r28, 0x14
    subf r0, r28, r28
    stw r0, 0x4(r23)
    add r24, r4, r3
    b lbl_fn_8047DF70_00000508
lbl_fn_8047DF70_00000498:
    subic. r24, r24, 0x14
    beq lbl_fn_8047DF70_00000504
    addic. r25, r24, 0x4
    beq lbl_fn_8047DF70_00000504
    beq lbl_fn_8047DF70_00000504
    beq lbl_fn_8047DF70_00000504
    lwz r4, 0x0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_8047DF70_00000504
    lwz r27, 0x4(r25)
    mulli r3, r27, 0xc
    subf r0, r27, r27
    stw r0, 0x4(r25)
    add r26, r4, r3
    b lbl_fn_8047DF70_000004F4
lbl_fn_8047DF70_000004D4:
    subic. r26, r26, 0xc
    beq lbl_fn_8047DF70_000004F0
    lwz r0, 0x0(r26)
    srwi. r0, r0, 31
    beq lbl_fn_8047DF70_000004F0
    lwz r3, 0x8(r26)
    bl dtor_80084684
lbl_fn_8047DF70_000004F0:
    subi r27, r27, 0x1
lbl_fn_8047DF70_000004F4:
    cmpwi r27, 0x0
    bne lbl_fn_8047DF70_000004D4
    lwz r3, 0x0(r25)
    bl dtor_80084684
lbl_fn_8047DF70_00000504:
    subi r28, r28, 0x1
lbl_fn_8047DF70_00000508:
    cmpwi r28, 0x0
    bne lbl_fn_8047DF70_00000498
    lwz r3, 0x0(r23)
    bl dtor_80084684
lbl_fn_8047DF70_00000518:
    addic. r3, r31, 0x2c
    beq lbl_fn_8047DF70_000005D4
    addic. r24, r3, 0x8
    beq lbl_fn_8047DF70_000005D4
    beq lbl_fn_8047DF70_000005D4
    beq lbl_fn_8047DF70_000005D4
    lwz r4, 0x0(r24)
    cmpwi r4, 0x0
    beq lbl_fn_8047DF70_000005D4
    lwz r23, 0x4(r24)
    mulli r3, r23, 0x14
    subf r0, r23, r23
    stw r0, 0x4(r24)
    add r25, r4, r3
    b lbl_fn_8047DF70_000005C4
lbl_fn_8047DF70_00000554:
    subic. r25, r25, 0x14
    beq lbl_fn_8047DF70_000005C0
    addic. r26, r25, 0x4
    beq lbl_fn_8047DF70_000005C0
    beq lbl_fn_8047DF70_000005C0
    beq lbl_fn_8047DF70_000005C0
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_8047DF70_000005C0
    lwz r28, 0x4(r26)
    mulli r3, r28, 0xc
    subf r0, r28, r28
    stw r0, 0x4(r26)
    add r27, r4, r3
    b lbl_fn_8047DF70_000005B0
lbl_fn_8047DF70_00000590:
    subic. r27, r27, 0xc
    beq lbl_fn_8047DF70_000005AC
    lwz r0, 0x0(r27)
    srwi. r0, r0, 31
    beq lbl_fn_8047DF70_000005AC
    lwz r3, 0x8(r27)
    bl dtor_80084684
lbl_fn_8047DF70_000005AC:
    subi r28, r28, 0x1
lbl_fn_8047DF70_000005B0:
    cmpwi r28, 0x0
    bne lbl_fn_8047DF70_00000590
    lwz r3, 0x0(r26)
    bl dtor_80084684
lbl_fn_8047DF70_000005C0:
    subi r23, r23, 0x1
lbl_fn_8047DF70_000005C4:
    cmpwi r23, 0x0
    bne lbl_fn_8047DF70_00000554
    lwz r3, 0x0(r24)
    bl dtor_80084684
lbl_fn_8047DF70_000005D4:
    addic. r3, r31, 0x14
    beq lbl_fn_8047DF70_00000690
    addic. r31, r3, 0x8
    beq lbl_fn_8047DF70_00000690
    beq lbl_fn_8047DF70_00000690
    beq lbl_fn_8047DF70_00000690
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8047DF70_00000690
    lwz r24, 0x4(r31)
    mulli r3, r24, 0x14
    subf r0, r24, r24
    stw r0, 0x4(r31)
    add r28, r4, r3
    b lbl_fn_8047DF70_00000680
lbl_fn_8047DF70_00000610:
    subic. r28, r28, 0x14
    beq lbl_fn_8047DF70_0000067C
    addic. r27, r28, 0x4
    beq lbl_fn_8047DF70_0000067C
    beq lbl_fn_8047DF70_0000067C
    beq lbl_fn_8047DF70_0000067C
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8047DF70_0000067C
    lwz r25, 0x4(r27)
    mulli r3, r25, 0xc
    subf r0, r25, r25
    stw r0, 0x4(r27)
    add r26, r4, r3
    b lbl_fn_8047DF70_0000066C
lbl_fn_8047DF70_0000064C:
    subic. r26, r26, 0xc
    beq lbl_fn_8047DF70_00000668
    lwz r0, 0x0(r26)
    srwi. r0, r0, 31
    beq lbl_fn_8047DF70_00000668
    lwz r3, 0x8(r26)
    bl dtor_80084684
lbl_fn_8047DF70_00000668:
    subi r25, r25, 0x1
lbl_fn_8047DF70_0000066C:
    cmpwi r25, 0x0
    bne lbl_fn_8047DF70_0000064C
    lwz r3, 0x0(r27)
    bl dtor_80084684
lbl_fn_8047DF70_0000067C:
    subi r24, r24, 0x1
lbl_fn_8047DF70_00000680:
    cmpwi r24, 0x0
    bne lbl_fn_8047DF70_00000610
    lwz r3, 0x0(r31)
    bl dtor_80084684
lbl_fn_8047DF70_00000690:
    addic. r3, r29, 0x1ab0
    beq lbl_fn_8047DF70_000006C4
    addic. r4, r3, 0x110
    beq lbl_fn_8047DF70_000006C4
    beq lbl_fn_8047DF70_000006C4
    beq lbl_fn_8047DF70_000006C4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DF70_000006C4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DF70_000006C4:
    addic. r4, r29, 0x1a70
    beq lbl_fn_8047DF70_000006F4
    beq lbl_fn_8047DF70_000006F4
    beq lbl_fn_8047DF70_000006F4
    beq lbl_fn_8047DF70_000006F4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DF70_000006F4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DF70_000006F4:
    addic. r4, r29, 0x1a60
    beq lbl_fn_8047DF70_00000724
    beq lbl_fn_8047DF70_00000724
    beq lbl_fn_8047DF70_00000724
    beq lbl_fn_8047DF70_00000724
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DF70_00000724
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DF70_00000724:
    addic. r0, r29, 0x1a5c
    beq lbl_fn_8047DF70_00000748
    lwz r4, 0x1a5c(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8047DF70_00000748
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8047DF70_00000748
    bl fn_800897D8
lbl_fn_8047DF70_00000748:
    lis r4, fn_8047DC98@ha
    addi r3, r29, 0xc8
    addi r4, r4, fn_8047DC98@l
    li r5, 0x65c
    li r6, 0x4
    bl fn_806959D8
    addic. r23, r29, 0xb8
    beq lbl_fn_8047DF70_000007C0
    beq lbl_fn_8047DF70_000007C0
    beq lbl_fn_8047DF70_000007C0
    lwz r25, 0x8(r23)
    addi r24, r23, 0x4
    cmplw r25, r24
    beq lbl_fn_8047DF70_000007C0
    lwz r4, 0x0(r24)
    lwz r3, 0x0(r25)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r25)
    stw r0, 0x0(r3)
    b lbl_fn_8047DF70_000007B8
lbl_fn_8047DF70_000007A0:
    mr r3, r25
    lwz r25, 0x4(r25)
    bl dtor_80084684
    lwz r3, 0x0(r23)
    subi r0, r3, 0x1
    stw r0, 0x0(r23)
lbl_fn_8047DF70_000007B8:
    cmplw r25, r24
    bne lbl_fn_8047DF70_000007A0
lbl_fn_8047DF70_000007C0:
    addic. r4, r29, 0x64
    beq lbl_fn_8047DF70_000007F0
    beq lbl_fn_8047DF70_000007F0
    beq lbl_fn_8047DF70_000007F0
    beq lbl_fn_8047DF70_000007F0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8047DF70_000007F0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8047DF70_000007F0:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_8047DF70_0000080C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8047DF70_0000080C:
    mr r3, r29
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8047E4BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F540
    cmpwi r0, 0x0
    bne lbl_fn_8047E4BC_00000878
    lis r5, lbl_80756380@ha
    li r3, 0x2450
    addi r5, r5, lbl_80756380@l
    li r4, 0x4
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8047E4BC_00000874
    mr r4, r31
    bl fn_8047CF7C
lbl_fn_8047E4BC_00000874:
    stw r3, lbl_8087F540
lbl_fn_8047E4BC_00000878:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F540
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047E528(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x64(r3)
    b lbl_fn_8047E528_000008BC
lbl_fn_8047E528_000008B0:
    lwz r3, 0x0(r31)
    bl fn_800D2338
    addi r31, r31, 0x4
lbl_fn_8047E528_000008BC:
    lwz r4, 0x68(r30)
    lwz r3, 0x64(r30)
    slwi r0, r4, 2
    add r0, r3, r0
    cmplw r31, r0
    bne lbl_fn_8047E528_000008B0
    subf r0, r4, r4
    stw r0, 0x68(r30)
    li r0, 0x0
    stw r0, 0x74(r30)
    stw r0, 0x78(r30)
    stw r0, 0x7c(r30)
    stw r0, 0x80(r30)
    stw r0, 0x84(r30)
    stw r0, 0x88(r30)
    stw r0, 0x8c(r30)
    stw r0, 0x90(r30)
    stw r0, 0x94(r30)
    stw r0, 0x98(r30)
    stw r0, 0x9c(r30)
    stw r0, 0xa0(r30)
    stw r0, 0xa4(r30)
    stw r0, 0xa8(r30)
    stw r0, 0xac(r30)
    stw r0, 0xb0(r30)
    stw r0, 0x70(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047E5D4(void)
{
    nofralloc
    lwz r3, 0x190(r3)
    blr
}

asm void fn_8047E5DC(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stmw r26, 0x128(r1)
    mr r28, r3
    mr r29, r4
    lwz r6, 0x70(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8047E5DC_00000978
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047E5DC_00000978
    b lbl_fn_8047E5DC_000009B0
lbl_fn_8047E5DC_00000978:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047E5DC_000009AC
lbl_fn_8047E5DC_0000098C:
    lwz r6, 0x64(r3)
    lwzx r6, r6, r5
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047E5DC_000009A4
    b lbl_fn_8047E5DC_000009B0
lbl_fn_8047E5DC_000009A4:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047E5DC_0000098C
lbl_fn_8047E5DC_000009AC:
    li r6, 0x0
lbl_fn_8047E5DC_000009B0:
    cmpwi r6, 0x0
    bne lbl_fn_8047E5DC_00000CB4
    bl fn_8020F130
    mr r4, r29
    bl fn_8020F71C
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_8047E5DC_000009D8
    li r3, 0x0
    b lbl_fn_8047E5DC_00000CB8
lbl_fn_8047E5DC_000009D8:
    lis r31, lbl_80756380@ha
    addi r3, r1, 0x28
    addi r31, r31, lbl_80756380@l
    addi r5, r4, 0x4
    addi r4, r31, 0x1dc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F544
    bl fn_8053E870
    lwz r5, 0x68(r28)
    mr r30, r3
    lwz r4, 0x6c(r28)
    cmplw r5, r4
    bge lbl_fn_8047E5DC_00000A2C
    addi r4, r5, 0x1
    stw r4, 0x68(r28)
    subi r0, r4, 0x1
    lwz r4, 0x64(r28)
    slwi r0, r0, 2
    stwx r3, r4, r0
    b lbl_fn_8047E5DC_00000CA0
lbl_fn_8047E5DC_00000A2C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8047E5DC_00000A5C
    lis r3, __files@ha
    addi r4, r31, 0x1c8
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047E5DC_00000A5C:
    li r5, 0x0
    addi r4, r28, 0x6c
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x68(r28)
    lwz r31, 0x6c(r28)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_8047E5DC_00000AC4
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047E5DC_00000AC4:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8047E5DC_00000B14
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
    bge lbl_fn_8047E5DC_00000B08
    addi r3, r1, 0x10
lbl_fn_8047E5DC_00000B08:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8047E5DC_00000B58
lbl_fn_8047E5DC_00000B14:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8047E5DC_00000B50
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8047E5DC_00000B44
    addi r3, r1, 0x10
lbl_fn_8047E5DC_00000B44:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8047E5DC_00000B58
lbl_fn_8047E5DC_00000B50:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_8047E5DC_00000B58:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8047E5DC_00000B8C
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047E5DC_00000B8C:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8047E5DC_00000BC0
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047E5DC_00000BC0:
    lwz r0, 0x18(r1)
    stw r27, 0x14(r1)
    slwi r3, r0, 2
    stw r31, 0x1c(r1)
    lwz r0, 0x68(r28)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r27, r0
    stwx r30, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x68(r28)
    lwz r31, 0x64(r28)
    slwi r4, r4, 2
    add r5, r31, r4
    subf r5, r31, r5
    mr r4, r31
    srawi r5, r5, 2
    addze r27, r5
    subf r0, r27, r0
    stw r0, 0x24(r1)
    slwi r26, r27, 2
    slwi r0, r0, 2
    mr r5, r26
    add r3, r3, r0
    bl memcpy
    mr r3, r31
    mr r5, r26
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r27
    stw r0, 0x18(r1)
    stw r4, 0x68(r28)
    lwz r3, 0x6c(r28)
    lwz r0, 0x1c(r1)
    stw r0, 0x6c(r28)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x64(r28)
    stw r0, 0x64(r28)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x68(r28)
    stw r4, 0x18(r1)
    beq lbl_fn_8047E5DC_00000CA0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047E5DC_00000CA0
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_8047E5DC_00000CA0:
    stw r29, 0x190(r30)
    mr r3, r30
    addi r4, r1, 0x28
    li r5, 0x0
    bl fn_80576034
lbl_fn_8047E5DC_00000CB4:
    li r3, 0x1
lbl_fn_8047E5DC_00000CB8:
    lmw r26, 0x128(r1)
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8047E964(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_8047E964_00000D1C
    lwz r0, 0x23b8(r3)
    cmplwi r0, 0x8
    bge lbl_fn_8047E964_00000D1C
    lwz r6, 0x23fc(r3)
    li r0, 0x0
    lwz r5, 0x23b8(r3)
    add r5, r6, r5
    clrlslwi r5, r5, 29, 3
    add r5, r3, r5
    stw r4, 0x23bc(r5)
    stw r0, 0x23c0(r5)
    lwz r4, 0x23b8(r3)
    addi r0, r4, 0x1
    stw r0, 0x23b8(r3)
    b lbl_fn_8047E964_00000D88
lbl_fn_8047E964_00000D1C:
    lwz r6, 0x70(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8047E964_00000D38
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047E964_00000D38
    b lbl_fn_8047E964_00000D70
lbl_fn_8047E964_00000D38:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047E964_00000D6C
lbl_fn_8047E964_00000D4C:
    lwz r6, 0x64(r3)
    lwzx r6, r6, r5
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047E964_00000D64
    b lbl_fn_8047E964_00000D70
lbl_fn_8047E964_00000D64:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047E964_00000D4C
lbl_fn_8047E964_00000D6C:
    li r6, 0x0
lbl_fn_8047E964_00000D70:
    cmpwi r6, 0x0
    bne lbl_fn_8047E964_00000D80
    li r3, 0x0
    b lbl_fn_8047E964_00000D8C
lbl_fn_8047E964_00000D80:
    mr r3, r6
    bl fn_8053F6F0
lbl_fn_8047E964_00000D88:
    li r3, 0x1
lbl_fn_8047E964_00000D8C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047EA34(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r26, 0x48(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r6
    lwz r7, 0x70(r3)
    cmpwi r7, 0x0
    beq lbl_fn_8047EA34_00000DD8
    lwz r0, 0x190(r7)
    cmpw r4, r0
    bne lbl_fn_8047EA34_00000DD8
    mr r31, r7
    b lbl_fn_8047EA34_00000E10
lbl_fn_8047EA34_00000DD8:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047EA34_00000E0C
lbl_fn_8047EA34_00000DEC:
    lwz r6, 0x64(r3)
    lwzx r31, r6, r5
    lwz r0, 0x190(r31)
    cmpw r4, r0
    bne lbl_fn_8047EA34_00000E04
    b lbl_fn_8047EA34_00000E10
lbl_fn_8047EA34_00000E04:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047EA34_00000DEC
lbl_fn_8047EA34_00000E0C:
    li r31, 0x0
lbl_fn_8047EA34_00000E10:
    cmpwi r31, 0x0
    bne lbl_fn_8047EA34_00000E20
    li r3, 0x0
    b lbl_fn_8047EA34_0000132C
lbl_fn_8047EA34_00000E20:
    lwz r0, 0x50(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8047EA34_00000E34
    cmpwi r0, 0x3
    bne lbl_fn_8047EA34_000011C4
lbl_fn_8047EA34_00000E34:
    cmpwi r7, 0x0
    beq lbl_fn_8047EA34_00000E44
    li r3, 0x0
    b lbl_fn_8047EA34_0000132C
lbl_fn_8047EA34_00000E44:
    lwz r30, 0xc0(r3)
    addi r26, r3, 0xbc
    cmplw r30, r26
    beq lbl_fn_8047EA34_00000E94
    lwz r4, 0x0(r26)
    lwz r3, 0x0(r30)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r3)
    b lbl_fn_8047EA34_00000E8C
lbl_fn_8047EA34_00000E74:
    mr r3, r30
    lwz r30, 0x4(r30)
    bl dtor_80084684
    lwz r3, 0xb8(r27)
    subi r0, r3, 0x1
    stw r0, 0xb8(r27)
lbl_fn_8047EA34_00000E8C:
    cmplw r30, r26
    bne lbl_fn_8047EA34_00000E74
lbl_fn_8047EA34_00000E94:
    addi r26, r27, 0xbc
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8047EA34_00000ECC
    lis r3, __files@ha
    lis r4, lbl_807901BC@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807901BC@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047EA34_00000ECC:
    addic. r3, r30, 0x8
    addi r0, r27, 0xbc
    stw r0, 0x18(r1)
    stw r30, 0x1c(r1)
    beq lbl_fn_8047EA34_00000EE8
    li r0, 0x1
    stw r0, 0x0(r3)
lbl_fn_8047EA34_00000EE8:
    lwz r3, 0x0(r26)
    li r4, 0x0
    lwz r5, 0x1c(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r26)
    stw r0, 0x0(r5)
    stw r5, 0x0(r26)
    stw r26, 0x4(r5)
    lwz r3, 0xb8(r27)
    stw r4, 0x1c(r1)
    addi r0, r3, 0x1
    stw r0, 0xb8(r27)
    b lbl_fn_8047EA34_00000F20
    bl dtor_80084684
lbl_fn_8047EA34_00000F20:
    li r0, 0x0
    stw r31, 0x70(r27)
    stw r0, 0x1a38(r27)
    stw r0, 0x1a3c(r27)
    stw r0, 0x1ea4(r27)
    stw r0, 0x1eb0(r27)
    stw r0, 0x1ea8(r27)
    lwz r0, 0x50(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8047EA34_00000F90
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8047EA34_00000F58
    bl fn_801011B8
lbl_fn_8047EA34_00000F58:
    lwz r3, lbl_8087F9E8
    cmpwi r3, 0x0
    beq lbl_fn_8047EA34_00000F6C
    li r4, 0x0
    bl fn_8059C330
lbl_fn_8047EA34_00000F6C:
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_8023A60C
    lwz r3, lbl_8087F3C0
    li r4, 0x3
    bl fn_8023A60C
    lwz r3, lbl_8087F3C0
    li r4, 0x5
    bl fn_8023A60C
lbl_fn_8047EA34_00000F90:
    lwz r30, 0x70(r27)
    cmpwi r30, 0x0
    beq lbl_fn_8047EA34_00000FAC
    lwz r0, 0x190(r30)
    cmpw r28, r0
    bne lbl_fn_8047EA34_00000FAC
    b lbl_fn_8047EA34_00000FE4
lbl_fn_8047EA34_00000FAC:
    lwz r0, 0x68(r27)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047EA34_00000FE0
lbl_fn_8047EA34_00000FC0:
    lwz r4, 0x64(r27)
    lwzx r30, r4, r3
    lwz r0, 0x190(r30)
    cmpw r28, r0
    bne lbl_fn_8047EA34_00000FD8
    b lbl_fn_8047EA34_00000FE4
lbl_fn_8047EA34_00000FD8:
    addi r3, r3, 0x4
    bdnz lbl_fn_8047EA34_00000FC0
lbl_fn_8047EA34_00000FE0:
    li r30, 0x0
lbl_fn_8047EA34_00000FE4:
    cmpwi r30, 0x0
    beq lbl_fn_8047EA34_000010E4
    lwz r0, 0x98(r30)
    extrwi r0, r0, 1, 14
    cmplwi r0, 0x1
    beq lbl_fn_8047EA34_000010E4
    lwz r0, 0x50(r30)
    cmpwi r0, 0x1
    beq lbl_fn_8047EA34_00001010
    cmpwi r0, 0x3
    bne lbl_fn_8047EA34_000010E4
lbl_fn_8047EA34_00001010:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x17c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8047EA34_00001044
    li r0, 0x0
    stb r0, 0x1f38(r27)
    mr r3, r27
    mr r4, r30
    stw r0, 0x1f5c(r27)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8048871C
lbl_fn_8047EA34_00001044:
    lwz r3, lbl_8087F540
    mr r4, r30
    bl fn_80488E00
    lwz r3, lbl_8087F0A8
    lwz r26, lbl_8087F540
    lwz r0, 0x178(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8047EA34_000010D8
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_8047EA34_000010D8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8047EA34_000010D8
    lwz r3, 0x70(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8047EA34_00001094
    lwz r0, 0x190(r3)
    cmpwi r0, 0x151e
    beq lbl_fn_8047EA34_000010D8
lbl_fn_8047EA34_00001094:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8047EA34_000010AC
    li r4, 0x0
    li r5, 0x0
    bl fn_803EB4A8
lbl_fn_8047EA34_000010AC:
    li r0, -0x1
    stw r0, 0x2378(r26)
    lwz r0, 0x1f74(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8047EA34_000010D0
    lwz r4, 0x1f78(r26)
    mr r3, r26
    li r5, 0x1
    bl fn_80489A50
lbl_fn_8047EA34_000010D0:
    li r0, 0x1
    stw r0, 0x237c(r26)
lbl_fn_8047EA34_000010D8:
    lwz r0, 0x98(r30)
    oris r0, r0, 0x2
    stw r0, 0x98(r30)
lbl_fn_8047EA34_000010E4:
    li r9, 0x0
    li r3, 0x0
    li r4, 0x3
    li r6, 0x2
    li r7, 0x0
    b lbl_fn_8047EA34_000011A0
lbl_fn_8047EA34_000010FC:
    cmpwi r9, 0x0
    li r0, 0x0
    blt lbl_fn_8047EA34_00001114
    cmpw r9, r5
    bge lbl_fn_8047EA34_00001114
    li r0, 0x1
lbl_fn_8047EA34_00001114:
    cmpwi r0, 0x0
    beq lbl_fn_8047EA34_00001128
    lwz r5, 0xb8(r31)
    lwzx r8, r5, r3
    b lbl_fn_8047EA34_0000112C
lbl_fn_8047EA34_00001128:
    li r8, 0x0
lbl_fn_8047EA34_0000112C:
    lwz r0, 0x98(r31)
    extrwi r0, r0, 1, 8
    cmplwi r0, 0x1
    bne lbl_fn_8047EA34_00001144
    stw r7, 0x10(r8)
    b lbl_fn_8047EA34_00001178
lbl_fn_8047EA34_00001144:
    lwz r0, 0x148(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8047EA34_00001164
    lwz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_fn_8047EA34_00001178
    stw r6, 0x10(r8)
    b lbl_fn_8047EA34_00001178
lbl_fn_8047EA34_00001164:
    lwz r5, 0x10(r8)
    subi r0, r5, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_8047EA34_00001178
    stw r4, 0x10(r8)
lbl_fn_8047EA34_00001178:
    cmpwi r28, 0x2391
    beq lbl_fn_8047EA34_00001188
    cmpwi r28, 0x23f3
    bne lbl_fn_8047EA34_00001198
lbl_fn_8047EA34_00001188:
    lwz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_fn_8047EA34_00001198
    stw r7, 0x10(r8)
lbl_fn_8047EA34_00001198:
    addi r9, r9, 0x1
    addi r3, r3, 0x8
lbl_fn_8047EA34_000011A0:
    lwz r5, 0xbc(r31)
    cmpw r9, r5
    blt lbl_fn_8047EA34_000010FC
    lwz r0, 0x1a90(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8047EA34_000011FC
    li r0, 0x0
    stw r0, 0x1a90(r27)
    b lbl_fn_8047EA34_000011FC
lbl_fn_8047EA34_000011C4:
    li r0, 0x10
    mr r5, r27
    li r4, 0x0
    mtctr r0
lbl_fn_8047EA34_000011D4:
    lwz r0, 0x74(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8047EA34_000011F0
    slwi r0, r4, 2
    add r3, r3, r0
    stw r31, 0x74(r3)
    b lbl_fn_8047EA34_000011FC
lbl_fn_8047EA34_000011F0:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
    bdnz lbl_fn_8047EA34_000011D4
lbl_fn_8047EA34_000011FC:
    lwz r0, 0xbc(r31)
    li r3, 0x0
    lwz r5, 0x94(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047EA34_00001234
lbl_fn_8047EA34_00001214:
    lwz r4, 0xb8(r31)
    lwzx r4, r4, r3
    lwz r0, 0xc(r4)
    cmpw r5, r0
    bne lbl_fn_8047EA34_0000122C
    b lbl_fn_8047EA34_00001238
lbl_fn_8047EA34_0000122C:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047EA34_00001214
lbl_fn_8047EA34_00001234:
    li r4, 0x0
lbl_fn_8047EA34_00001238:
    mr r3, r31
    bl fn_8054119C
    mr r4, r3
    mr r3, r31
    bl fn_80541248
    stw r29, 0x1ac(r31)
    mr r3, r31
    bl fn_8054F9E0
    addi r4, r27, 0x23b8
    li r0, 0x0
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    stw r4, 0x38(r1)
    stw r0, 0x3c(r1)
    b lbl_fn_8047EA34_00001308
lbl_fn_8047EA34_0000127C:
    lwz r5, 0x38(r1)
    lwz r0, 0x3c(r1)
    lwz r3, 0x44(r5)
    add r0, r3, r0
    clrlslwi r0, r0, 29, 3
    add r3, r5, r0
    lwz r0, 0x4(r3)
    cmpw r28, r0
    bne lbl_fn_8047EA34_000012FC
    lwz r5, 0x3c(r1)
    lwz r0, 0x38(r1)
    stw r0, 0x28(r1)
    stw r5, 0x2c(r1)
    b lbl_fn_8047EA34_000012E4
lbl_fn_8047EA34_000012B4:
    lwz r0, 0x23fc(r27)
    add r4, r0, r5
    addi r5, r5, 0x1
    addi r0, r4, 0x1
    clrlslwi r3, r0, 29, 3
    clrlslwi r0, r4, 29, 3
    add r4, r27, r3
    add r3, r27, r0
    lwz r0, 0x23bc(r4)
    stw r0, 0x23bc(r3)
    lwz r0, 0x23c0(r4)
    stw r0, 0x23c0(r3)
lbl_fn_8047EA34_000012E4:
    lwz r3, 0x23b8(r27)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8047EA34_000012B4
    stw r0, 0x23b8(r27)
    b lbl_fn_8047EA34_00001328
lbl_fn_8047EA34_000012FC:
    lwz r3, 0x3c(r1)
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
lbl_fn_8047EA34_00001308:
    lwz r3, 0x23b8(r27)
    lwz r0, 0x3c(r1)
    stw r4, 0x8(r1)
    cmplw r0, r3
    stw r3, 0xc(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    bne lbl_fn_8047EA34_0000127C
lbl_fn_8047EA34_00001328:
    li r3, 0x1
lbl_fn_8047EA34_0000132C:
    lmw r26, 0x48(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8047EFD8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r29, r3
    mr r30, r5
    lwz r31, 0x70(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8047EFD8_00001374
    lwz r0, 0x190(r31)
    cmpw r4, r0
    bne lbl_fn_8047EFD8_00001374
    b lbl_fn_8047EFD8_000013AC
lbl_fn_8047EFD8_00001374:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047EFD8_000013A8
lbl_fn_8047EFD8_00001388:
    lwz r6, 0x64(r3)
    lwzx r31, r6, r5
    lwz r0, 0x190(r31)
    cmpw r4, r0
    bne lbl_fn_8047EFD8_000013A0
    b lbl_fn_8047EFD8_000013AC
lbl_fn_8047EFD8_000013A0:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047EFD8_00001388
lbl_fn_8047EFD8_000013A8:
    li r31, 0x0
lbl_fn_8047EFD8_000013AC:
    cmpwi r31, 0x0
    bne lbl_fn_8047EFD8_000013BC
    li r3, 0x0
    b lbl_fn_8047EFD8_000015BC
lbl_fn_8047EFD8_000013BC:
    lwz r0, 0x50(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8047EFD8_000013D0
    cmpwi r0, 0x3
    bne lbl_fn_8047EFD8_000014D0
lbl_fn_8047EFD8_000013D0:
    lwz r27, 0xc0(r3)
    addi r28, r3, 0xbc
    li r0, 0x0
    stw r0, 0x70(r3)
    cmplw r27, r28
    beq lbl_fn_8047EFD8_00001428
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r27)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r3)
    b lbl_fn_8047EFD8_00001420
lbl_fn_8047EFD8_00001408:
    mr r3, r27
    lwz r27, 0x4(r27)
    bl dtor_80084684
    lwz r3, 0xb8(r29)
    subi r0, r3, 0x1
    stw r0, 0xb8(r29)
lbl_fn_8047EFD8_00001420:
    cmplw r27, r28
    bne lbl_fn_8047EFD8_00001408
lbl_fn_8047EFD8_00001428:
    lwz r0, 0x70(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8047EFD8_0000150C
    cmpwi r30, 0x0
    bne lbl_fn_8047EFD8_00001498
    lwz r0, 0x1e78(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8047EFD8_00001454
    lwz r0, 0x1f1c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8047EFD8_00001484
lbl_fn_8047EFD8_00001454:
    lwz r0, 0x1f1c(r29)
    rlwinm. r0, r0, 0, 10, 10
    beq lbl_fn_8047EFD8_00001474
    mr r3, r29
    mr r4, r31
    li r5, 0x3c
    bl fn_80488534
    b lbl_fn_8047EFD8_00001484
lbl_fn_8047EFD8_00001474:
    mr r3, r29
    mr r4, r31
    li r5, 0xf
    bl fn_80488534
lbl_fn_8047EFD8_00001484:
    addi r3, r29, 0x1f20
    li r4, 0x3c
    bl fn_8004B1EC
    addi r3, r29, 0x1f28
    bl fn_800CB480
lbl_fn_8047EFD8_00001498:
    li r0, -0x1
    stw r0, 0x2378(r29)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8047EFD8_000014B8
    li r4, 0x0
    li r5, 0x1
    bl fn_803EB4A8
lbl_fn_8047EFD8_000014B8:
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x237c(r29)
    stw r3, 0x1f74(r29)
    stw r0, 0x2378(r29)
    b lbl_fn_8047EFD8_0000150C
lbl_fn_8047EFD8_000014D0:
    li r0, 0x10
    mr r5, r29
    li r4, 0x0
    mtctr r0
lbl_fn_8047EFD8_000014E0:
    lwz r0, 0x74(r5)
    cmplw r0, r31
    bne lbl_fn_8047EFD8_00001500
    slwi r0, r4, 2
    li r4, 0x0
    add r3, r3, r0
    stw r4, 0x74(r3)
    b lbl_fn_8047EFD8_0000150C
lbl_fn_8047EFD8_00001500:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
    bdnz lbl_fn_8047EFD8_000014E0
lbl_fn_8047EFD8_0000150C:
    cmpwi r30, 0x0
    beq lbl_fn_8047EFD8_0000158C
    lwz r4, 0x70(r29)
    lwz r5, 0x190(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8047EFD8_00001534
    lwz r0, 0x190(r4)
    cmpw r5, r0
    bne lbl_fn_8047EFD8_00001534
    b lbl_fn_8047EFD8_0000156C
lbl_fn_8047EFD8_00001534:
    lwz r0, 0x68(r29)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047EFD8_00001568
lbl_fn_8047EFD8_00001548:
    lwz r4, 0x64(r29)
    lwzx r4, r4, r3
    lwz r0, 0x190(r4)
    cmpw r5, r0
    bne lbl_fn_8047EFD8_00001560
    b lbl_fn_8047EFD8_0000156C
lbl_fn_8047EFD8_00001560:
    addi r3, r3, 0x4
    bdnz lbl_fn_8047EFD8_00001548
lbl_fn_8047EFD8_00001568:
    li r4, 0x0
lbl_fn_8047EFD8_0000156C:
    cmpwi r4, 0x0
    beq lbl_fn_8047EFD8_0000158C
    lwz r0, 0x50(r4)
    cmpwi r0, 0x1
    beq lbl_fn_8047EFD8_00001588
    cmpwi r0, 0x3
    bne lbl_fn_8047EFD8_0000158C
lbl_fn_8047EFD8_00001588:
    stw r5, 0x2380(r29)
lbl_fn_8047EFD8_0000158C:
    mr r3, r31
    mr r4, r30
    bl fn_8054FB14
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r3, r31
    mr r4, r30
    bl fn_80540668
    li r3, 0x1
lbl_fn_8047EFD8_000015BC:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8047F268(void)
{
    nofralloc
    lwz r6, 0x70(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8047F268_000015EC
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F268_000015EC
    b lbl_fn_8047F268_00001624
lbl_fn_8047F268_000015EC:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047F268_00001620
lbl_fn_8047F268_00001600:
    lwz r6, 0x64(r3)
    lwzx r6, r6, r5
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F268_00001618
    b lbl_fn_8047F268_00001624
lbl_fn_8047F268_00001618:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047F268_00001600
lbl_fn_8047F268_00001620:
    li r6, 0x0
lbl_fn_8047F268_00001624:
    cmpwi r6, 0x0
    bne lbl_fn_8047F268_00001634
    li r3, 0x1
    blr
lbl_fn_8047F268_00001634:
    lwz r0, 0x194(r6)
    li r3, 0x1
    cmpwi r0, 0x5
    bgelr
    cmpwi r0, 0x0
    beqlr
    li r3, 0x0
    blr
}

asm void fn_8047F2EC(void)
{
    nofralloc
    lwz r6, 0x70(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8047F2EC_00001670
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F2EC_00001670
    b lbl_fn_8047F2EC_000016A8
lbl_fn_8047F2EC_00001670:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047F2EC_000016A4
lbl_fn_8047F2EC_00001684:
    lwz r6, 0x64(r3)
    lwzx r6, r6, r5
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F2EC_0000169C
    b lbl_fn_8047F2EC_000016A8
lbl_fn_8047F2EC_0000169C:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047F2EC_00001684
lbl_fn_8047F2EC_000016A4:
    li r6, 0x0
lbl_fn_8047F2EC_000016A8:
    cmpwi r6, 0x0
    bne lbl_fn_8047F2EC_000016B8
    li r3, 0x0
    blr
lbl_fn_8047F2EC_000016B8:
    lwz r3, 0x194(r6)
    subi r0, r3, 0xa
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8047F364(void)
{
    nofralloc
    lwz r6, 0x70(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8047F364_000016E8
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F364_000016E8
    b lbl_fn_8047F364_00001720
lbl_fn_8047F364_000016E8:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047F364_0000171C
lbl_fn_8047F364_000016FC:
    lwz r6, 0x64(r3)
    lwzx r6, r6, r5
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F364_00001714
    b lbl_fn_8047F364_00001720
lbl_fn_8047F364_00001714:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047F364_000016FC
lbl_fn_8047F364_0000171C:
    li r6, 0x0
lbl_fn_8047F364_00001720:
    cmpwi r6, 0x0
    bne lbl_fn_8047F364_00001730
    li r3, 0x1
    blr
lbl_fn_8047F364_00001730:
    lwz r4, 0x194(r6)
    li r3, 0x1
    li r0, 0x1
    cmpwi r4, 0xd
    beq lbl_fn_8047F364_00001750
    cmpwi r4, 0xe
    beq lbl_fn_8047F364_00001750
    li r0, 0x0
lbl_fn_8047F364_00001750:
    cmpwi r0, 0x0
    bnelr
    cmpwi r4, 0x0
    beqlr
    li r3, 0x0
    blr
}

asm void fn_8047F400(void)
{
    nofralloc
    lwz r0, 0x194(r3)
    li r3, 0x1
    cmpwi r0, 0xd
    beqlr
    cmpwi r0, 0xe
    beqlr
    li r3, 0x0
    blr
}

asm void fn_8047F420(void)
{
    nofralloc
    lwz r6, 0x70(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8047F420_000017A4
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F420_000017A4
    b lbl_fn_8047F420_000017DC
lbl_fn_8047F420_000017A4:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047F420_000017D8
lbl_fn_8047F420_000017B8:
    lwz r6, 0x64(r3)
    lwzx r6, r6, r5
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F420_000017D0
    b lbl_fn_8047F420_000017DC
lbl_fn_8047F420_000017D0:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047F420_000017B8
lbl_fn_8047F420_000017D8:
    li r6, 0x0
lbl_fn_8047F420_000017DC:
    cmpwi r6, 0x0
    bne lbl_fn_8047F420_000017EC
    li r3, 0x1
    blr
lbl_fn_8047F420_000017EC:
    lwz r3, 0x50(r6)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8047F498(void)
{
    nofralloc
    lwz r6, 0x70(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8047F498_0000181C
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F498_0000181C
    b lbl_fn_8047F498_00001854
lbl_fn_8047F498_0000181C:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047F498_00001850
lbl_fn_8047F498_00001830:
    lwz r6, 0x64(r3)
    lwzx r6, r6, r5
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F498_00001848
    b lbl_fn_8047F498_00001854
lbl_fn_8047F498_00001848:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047F498_00001830
lbl_fn_8047F498_00001850:
    li r6, 0x0
lbl_fn_8047F498_00001854:
    cmpwi r6, 0x0
    bne lbl_fn_8047F498_00001864
    li r3, 0x1
    blr
lbl_fn_8047F498_00001864:
    lwz r3, 0x50(r6)
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8047F510(void)
{
    nofralloc
    lwz r6, 0x70(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8047F510_00001894
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F510_00001894
    b lbl_fn_8047F510_000018CC
lbl_fn_8047F510_00001894:
    lwz r0, 0x68(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047F510_000018C8
lbl_fn_8047F510_000018A8:
    lwz r6, 0x64(r3)
    lwzx r6, r6, r5
    lwz r0, 0x190(r6)
    cmpw r4, r0
    bne lbl_fn_8047F510_000018C0
    b lbl_fn_8047F510_000018CC
lbl_fn_8047F510_000018C0:
    addi r5, r5, 0x4
    bdnz lbl_fn_8047F510_000018A8
lbl_fn_8047F510_000018C8:
    li r6, 0x0
lbl_fn_8047F510_000018CC:
    cmpwi r6, 0x0
    bne lbl_fn_8047F510_000018DC
    li r3, 0x1
    blr
lbl_fn_8047F510_000018DC:
    lwz r0, 0x98(r6)
    extrwi r3, r0, 1, 8
    blr
}

asm void fn_8047F580(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x2380(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8047F580_000019FC
    lwz r31, 0x70(r3)
    lwz r6, 0x2380(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8047F580_0000192C
    lwz r0, 0x190(r31)
    cmpw r6, r0
    bne lbl_fn_8047F580_0000192C
    b lbl_fn_8047F580_00001964
lbl_fn_8047F580_0000192C:
    lwz r0, 0x68(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047F580_00001960
lbl_fn_8047F580_00001940:
    lwz r5, 0x64(r3)
    lwzx r31, r5, r4
    lwz r0, 0x190(r31)
    cmpw r6, r0
    bne lbl_fn_8047F580_00001958
    b lbl_fn_8047F580_00001964
lbl_fn_8047F580_00001958:
    addi r4, r4, 0x4
    bdnz lbl_fn_8047F580_00001940
lbl_fn_8047F580_00001960:
    li r31, 0x0
lbl_fn_8047F580_00001964:
    cmpwi r31, 0x0
    beq lbl_fn_8047F580_000019EC
    lwz r0, 0x1e78(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8047F580_00001984
    lwz r0, 0x1f1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8047F580_000019B4
lbl_fn_8047F580_00001984:
    lwz r0, 0x1f1c(r3)
    rlwinm. r0, r0, 0, 10, 10
    beq lbl_fn_8047F580_000019A4
    mr r3, r30
    mr r4, r31
    li r5, 0x3c
    bl fn_80488534
    b lbl_fn_8047F580_000019B4
lbl_fn_8047F580_000019A4:
    mr r3, r30
    mr r4, r31
    li r5, 0xf
    bl fn_80488534
lbl_fn_8047F580_000019B4:
    addi r3, r30, 0x1f20
    li r4, 0x3c
    bl fn_8004B1EC
    addi r3, r30, 0x1f28
    bl fn_800CB480
    mr r3, r31
    bl fn_8054FBCC
    mr r3, r31
    bl fn_805406A4
    lwz r0, 0x70(r30)
    cmplw r31, r0
    bne lbl_fn_8047F580_000019EC
    li r0, 0x0
    stw r0, 0x70(r30)
lbl_fn_8047F580_000019EC:
    li r0, 0x0
    stw r0, 0x2380(r30)
    li r3, 0x1
    b lbl_fn_8047F580_00001A00
lbl_fn_8047F580_000019FC:
    li r3, 0x0
lbl_fn_8047F580_00001A00:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
