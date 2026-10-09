#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_16(void);
extern void _savegpr_16(void);
extern void dtor_80084684(void);
extern void fn_8000D528(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8032BE88(void);
extern void fn_8048A290(void);
extern void fn_8048A584(void);
extern void fn_8048A968(void);
extern void fn_80540A0C(void);
extern void fn_80542050(void);
extern void fn_80543064(void);
extern void fn_80543730(void);
extern void fn_805437E8(void);
extern void fn_80543C04(void);
extern void fn_80543F64(void);
extern void fn_80544074(void);
extern void fn_80544298(void);
extern void fn_8054439C(void);
extern void fn_805444C4(void);
extern void fn_805445C8(void);
extern void fn_80544654(void);
extern void fn_80544844(void);
extern void fn_80544E78(void);
extern void fn_80545088(void);
extern void fn_80545C40(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80760FC0[];
extern u8 lbl_80775A20[];
extern u8 lbl_80775A48[];
extern u8 lbl_80788D00[];
extern u8 lbl_80794430[];
extern u8 lbl_80794528[];

/* Small data declarations */
extern u32 lbl_8087D78C;
extern u32 lbl_8087D790;
extern u32 lbl_8087F9B8;
extern u32 lbl_80888088;

/* Function declarations */
void fn_8057B4A4(void);
void fn_8057BAC0(void);
void fn_8057BC0C(void);
void fn_8057C238(void);
void fn_8057C384(void);
void fn_8057C478(void);
void fn_8057CCF0(void);
void fn_8057CDA8(void);
void fn_8057CE08(void);

asm void fn_8057B4A4(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    mr r4, r5
    li r5, 0x4
    stw r0, 0x1f4(r1)
    addi r3, r1, 0x8
    stw r31, 0x1ec(r1)
    stw r30, 0x1e8(r1)
    stw r29, 0x1e4(r1)
    lwz r6, lbl_8087F9B8
    lwz r29, 0x10(r6)
    bl memcpy
    lwz r0, 0x168(r29)
    li r3, 0x0
    lwz r4, 0x8(r1)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8057B4A4_00000068
lbl_fn_8057B4A4_00000048:
    lwz r0, 0x164(r29)
    add r5, r0, r3
    lwz r0, 0x14(r5)
    cmpw r4, r0
    bne lbl_fn_8057B4A4_00000060
    b lbl_fn_8057B4A4_0000006C
lbl_fn_8057B4A4_00000060:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_8057B4A4_00000048
lbl_fn_8057B4A4_00000068:
    li r5, 0x0
lbl_fn_8057B4A4_0000006C:
    cmpwi r5, 0x0
    bne lbl_fn_8057B4A4_000005F0
    addi r29, r29, 0x164
    lis r30, lbl_80760FC0@ha
    addi r30, r30, lbl_80760FC0@l
    lwz r6, 0x8(r1)
    lwz r4, 0xc(r29)
    addi r5, r30, 0x33
    addi r3, r1, 0x20
    bl fn_8000D528
    lwz r0, 0x4(r29)
    addi r31, r1, 0x20
    lwz r4, 0x8(r29)
    cmplw r0, r4
    bge lbl_fn_8057B4A4_0000025C
    mulli r0, r0, 0x1c0
    lwz r3, 0x0(r29)
    add. r30, r3, r0
    beq lbl_fn_8057B4A4_0000024C
    mr r3, r30
    mr r4, r31
    bl fn_80543730
    lis r4, lbl_80775A20@ha
    addi r3, r30, 0x24
    addi r4, r4, lbl_80775A20@l
    stw r4, 0x0(r30)
    addi r4, r31, 0x24
    lwz r0, 0x38(r1)
    stw r0, 0x18(r30)
    lwz r0, 0x3c(r1)
    stw r0, 0x1c(r30)
    lwz r0, 0x40(r1)
    stw r0, 0x20(r30)
    bl fn_80543C04
    lwz r0, 0x78(r1)
    addi r3, r30, 0x5c
    stw r0, 0x58(r30)
    addi r4, r31, 0x5c
    bl fn_805437E8
    addi r3, r30, 0xac
    addi r4, r31, 0xac
    bl fn_80543F64
    lwz r0, 0xdc(r1)
    addi r3, r30, 0x118
    lwz r5, 0xd8(r1)
    addi r4, r31, 0x118
    stw r5, 0xb8(r30)
    stw r0, 0xbc(r30)
    lwz r0, 0xe0(r1)
    stw r0, 0xc0(r30)
    lfs f2, 0xec(r1)
    psq_l f1, 0xc4(r31), 0, 0
    psq_st f1, 0xc4(r30), 0, 0
    stfs f2, 0xcc(r30)
    lfs f2, 0xf8(r1)
    psq_l f1, 0xd0(r31), 0, 0
    psq_st f1, 0xd0(r30), 0, 0
    stfs f2, 0xd8(r30)
    lfs f2, 0x104(r1)
    psq_l f1, 0xdc(r31), 0, 0
    psq_st f1, 0xdc(r30), 0, 0
    stfs f2, 0xe4(r30)
    lfs f2, 0x110(r1)
    psq_l f1, 0xe8(r31), 0, 0
    psq_st f1, 0xe8(r30), 0, 0
    stfs f2, 0xf0(r30)
    lfs f2, 0x11c(r1)
    psq_l f1, 0xf4(r31), 0, 0
    psq_st f1, 0xf4(r30), 0, 0
    stfs f2, 0xfc(r30)
    lfs f2, 0x128(r1)
    psq_l f1, 0x100(r31), 0, 0
    psq_st f1, 0x100(r30), 0, 0
    stfs f2, 0x108(r30)
    lfs f2, 0x134(r1)
    psq_l f1, 0x10c(r31), 0, 0
    psq_st f1, 0x10c(r30), 0, 0
    stfs f2, 0x114(r30)
    bl fn_80544074
    addi r3, r30, 0x124
    addi r4, r31, 0x124
    bl fn_80544074
    lwz r0, 0x150(r1)
    addi r3, r30, 0x148
    stw r0, 0x130(r30)
    addi r4, r31, 0x148
    lwz r0, 0x154(r1)
    stw r0, 0x134(r30)
    lwz r0, 0x158(r1)
    stw r0, 0x138(r30)
    lwz r0, 0x15c(r1)
    stw r0, 0x13c(r30)
    lwz r0, 0x160(r1)
    stw r0, 0x140(r30)
    lbz r0, 0x164(r1)
    stb r0, 0x144(r30)
    lbz r0, 0x165(r1)
    stb r0, 0x145(r30)
    lbz r0, 0x166(r1)
    stb r0, 0x146(r30)
    bl fn_80544298
    lwz r0, 0x174(r1)
    addi r3, r30, 0x158
    stw r0, 0x154(r30)
    addi r4, r31, 0x158
    bl fn_8054439C
    addi r3, r30, 0x164
    addi r4, r31, 0x164
    bl fn_805444C4
    addi r3, r30, 0x170
    addi r4, r31, 0x170
    bl fn_8054439C
    addi r3, r30, 0x17c
    addi r4, r31, 0x17c
    bl fn_805444C4
    lbz r0, 0x1a8(r1)
    addi r3, r30, 0x18c
    stb r0, 0x188(r30)
    addi r4, r31, 0x18c
    bl fn_805445C8
lbl_fn_8057B4A4_0000024C:
    lwz r3, 0x4(r29)
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
    b lbl_fn_8057B4A4_00000340
lbl_fn_8057B4A4_0000025C:
    lis r3, 0x92
    addi r0, r3, 0x4924
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8057B4A4_0000028C
    lis r3, __files@ha
    addi r4, r30, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057B4A4_0000028C:
    li r4, 0x0
    addi r0, r29, 0x8
    stw r4, 0xc(r1)
    mr r3, r29
    stw r4, 0x10(r1)
    stw r4, 0x14(r1)
    stw r0, 0x18(r1)
    stw r4, 0x1c(r1)
    lwz r4, 0x4(r29)
    lwz r5, 0x8(r29)
    addi r0, r4, 0x1
    subf r4, r5, r0
    bl fn_80544654
    lwz r4, 0x4(r29)
    mr r5, r3
    addi r3, r1, 0xc
    addi r4, r4, 0x1
    bl fn_80545C40
    lwz r0, 0x4(r29)
    mr r5, r31
    stw r0, 0x1c(r1)
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80544E78
    lwz r0, 0x4(r29)
    addi r3, r1, 0xc
    lwz r4, 0x0(r29)
    mulli r0, r0, 0x1c0
    add r5, r4, r0
    bl fn_80545088
    lwz r5, 0x8(r29)
    addi r3, r1, 0xc
    lwz r0, 0x14(r1)
    li r4, -0x1
    stw r0, 0x8(r29)
    stw r5, 0x14(r1)
    lwz r0, 0xc(r1)
    lwz r5, 0x0(r29)
    stw r0, 0x0(r29)
    stw r5, 0xc(r1)
    lwz r0, 0x10(r1)
    lwz r5, 0x4(r29)
    stw r0, 0x4(r29)
    stw r5, 0x10(r1)
    bl fn_80544844
lbl_fn_8057B4A4_00000340:
    addi r31, r1, 0x20
    addic. r4, r31, 0x17c
    beq lbl_fn_8057B4A4_00000374
    beq lbl_fn_8057B4A4_00000374
    beq lbl_fn_8057B4A4_00000374
    beq lbl_fn_8057B4A4_00000374
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_00000374
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_00000374:
    addic. r4, r31, 0x170
    beq lbl_fn_8057B4A4_000003A0
    beq lbl_fn_8057B4A4_000003A0
    beq lbl_fn_8057B4A4_000003A0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_000003A0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_000003A0:
    addic. r4, r31, 0x164
    beq lbl_fn_8057B4A4_000003D0
    beq lbl_fn_8057B4A4_000003D0
    beq lbl_fn_8057B4A4_000003D0
    beq lbl_fn_8057B4A4_000003D0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_000003D0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_000003D0:
    addic. r4, r31, 0x158
    beq lbl_fn_8057B4A4_000003FC
    beq lbl_fn_8057B4A4_000003FC
    beq lbl_fn_8057B4A4_000003FC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_000003FC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_000003FC:
    addic. r4, r31, 0x148
    beq lbl_fn_8057B4A4_0000042C
    beq lbl_fn_8057B4A4_0000042C
    beq lbl_fn_8057B4A4_0000042C
    beq lbl_fn_8057B4A4_0000042C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_0000042C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_0000042C:
    addic. r0, r31, 0x124
    beq lbl_fn_8057B4A4_0000044C
    lwz r3, 0x14c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_0000044C
    beq lbl_fn_8057B4A4_0000044C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8057B4A4_0000044C:
    addic. r0, r31, 0x118
    beq lbl_fn_8057B4A4_0000046C
    lwz r3, 0x140(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_0000046C
    beq lbl_fn_8057B4A4_0000046C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8057B4A4_0000046C:
    addic. r4, r31, 0xac
    beq lbl_fn_8057B4A4_00000498
    beq lbl_fn_8057B4A4_00000498
    beq lbl_fn_8057B4A4_00000498
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_00000498
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_00000498:
    addic. r30, r31, 0x5c
    beq lbl_fn_8057B4A4_00000554
    addic. r4, r30, 0x44
    beq lbl_fn_8057B4A4_000004D0
    beq lbl_fn_8057B4A4_000004D0
    beq lbl_fn_8057B4A4_000004D0
    beq lbl_fn_8057B4A4_000004D0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_000004D0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_000004D0:
    addic. r4, r30, 0x38
    beq lbl_fn_8057B4A4_000004FC
    beq lbl_fn_8057B4A4_000004FC
    beq lbl_fn_8057B4A4_000004FC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_000004FC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_000004FC:
    addic. r4, r30, 0x2c
    beq lbl_fn_8057B4A4_00000528
    beq lbl_fn_8057B4A4_00000528
    beq lbl_fn_8057B4A4_00000528
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_00000528
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_00000528:
    addic. r4, r30, 0x20
    beq lbl_fn_8057B4A4_00000554
    beq lbl_fn_8057B4A4_00000554
    beq lbl_fn_8057B4A4_00000554
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_00000554
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_00000554:
    addic. r30, r31, 0x24
    beq lbl_fn_8057B4A4_000005AC
    addic. r4, r30, 0x28
    beq lbl_fn_8057B4A4_0000058C
    beq lbl_fn_8057B4A4_0000058C
    beq lbl_fn_8057B4A4_0000058C
    beq lbl_fn_8057B4A4_0000058C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_0000058C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057B4A4_0000058C:
    cmpwi r30, 0x0
    beq lbl_fn_8057B4A4_000005AC
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057B4A4_000005AC
    beq lbl_fn_8057B4A4_000005AC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8057B4A4_000005AC:
    cmpwi r31, 0x0
    beq lbl_fn_8057B4A4_000005D0
    addic. r0, r31, 0x8
    beq lbl_fn_8057B4A4_000005D0
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057B4A4_000005D0
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_8057B4A4_000005D0:
    lwz r3, 0x4(r29)
    lwz r4, 0x0(r29)
    subi r0, r3, 0x1
    lwz r3, lbl_8087F9B8
    mulli r0, r0, 0x1c0
    add r0, r4, r0
    stw r0, 0x54(r3)
    b lbl_fn_8057B4A4_000005FC
lbl_fn_8057B4A4_000005F0:
    lwz r3, lbl_8087F9B8
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_8057B4A4_000005FC:
    lwz r31, 0x1ec(r1)
    li r3, 0x4
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_8057BAC0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r5
    lwz r3, lbl_8087F9B8
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8057BAC0_00000744
    li r0, 0x0
    stw r0, 0x18(r1)
    mr r3, r28
    addi r30, r1, 0x18
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087F9B8
    lwz r7, 0x54(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_8057BAC0_000006D8
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057BAC0_000006D8
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_8057BAC0_00000730
lbl_fn_8057BAC0_000006D8:
    cmpwi r4, 0x0
    beq lbl_fn_8057BAC0_000006E8
    lwz r5, 0xc(r7)
    b lbl_fn_8057BAC0_000006F0
lbl_fn_8057BAC0_000006E8:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_8057BAC0_000006F0:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8057BAC0_0000070C
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_8057BAC0_00000714
lbl_fn_8057BAC0_0000070C:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_8057BAC0_00000714:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8057BAC0_00000730:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057BAC0_00000744
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8057BAC0_00000744:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8057BC0C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    mr r4, r5
    li r5, 0x4
    stw r0, 0x94(r1)
    addi r3, r1, 0x34
    stmw r24, 0x70(r1)
    lwz r6, lbl_8087F9B8
    lwz r27, 0x10(r6)
    bl memcpy
    lwz r0, 0x118(r27)
    li r3, 0x0
    lwz r24, 0x34(r1)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8057BC0C_000007C8
lbl_fn_8057BC0C_000007A8:
    lwz r0, 0x114(r27)
    add r4, r0, r3
    lwz r0, 0x14(r4)
    cmpw r24, r0
    bne lbl_fn_8057BC0C_000007C0
    b lbl_fn_8057BC0C_000007CC
lbl_fn_8057BC0C_000007C0:
    addi r3, r3, 0x18
    bdnz lbl_fn_8057BC0C_000007A8
lbl_fn_8057BC0C_000007C8:
    li r4, 0x0
lbl_fn_8057BC0C_000007CC:
    cmpwi r4, 0x0
    bne lbl_fn_8057BC0C_00000D70
    lwz r0, 0x120(r27)
    lis r28, lbl_80760FC0@ha
    addi r28, r28, lbl_80760FC0@l
    lis r26, lbl_80775A48@ha
    li r25, 0x0
    stw r0, 0x3c(r1)
    addi r29, r28, 0x33
    addi r26, r26, lbl_80775A48@l
    stw r26, 0x38(r1)
    mr r3, r29
    addi r30, r1, 0x40
    stw r25, 0x40(r1)
    stw r25, 0x44(r1)
    stw r25, 0x48(r1)
    bl strlen
    mr r31, r3
    mr r3, r30
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r30
    stb r0, 0xc(r1)
    mr r6, r29
    add r7, r29, r31
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_80794430@ha
    stw r24, 0x4c(r1)
    addi r3, r3, lbl_80794430@l
    stw r3, 0x38(r1)
    lwz r0, 0x118(r27)
    lwz r4, 0x11c(r27)
    cmplw r0, r4
    bge lbl_fn_8057BC0C_00000908
    mulli r0, r0, 0x18
    lwz r3, 0x114(r27)
    add. r28, r3, r0
    beq lbl_fn_8057BC0C_000008F8
    stw r26, 0x0(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r28)
    lwz r3, 0x40(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057BC0C_000008A4
    lwz r0, 0x44(r1)
    stw r3, 0x8(r28)
    stw r0, 0xc(r28)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r28)
    b lbl_fn_8057BC0C_000008E4
lbl_fn_8057BC0C_000008A4:
    stw r25, 0x8(r28)
    addi r3, r28, 0x8
    stw r25, 0xc(r28)
    stw r25, 0x10(r28)
    lwz r4, 0x44(r1)
    bl fn_80013DC4
    lbz r5, 0x20(r1)
    addi r3, r28, 0x8
    stb r5, 0x24(r1)
    addi r8, r1, 0x24
    lwz r6, 0x48(r1)
    li r4, 0x0
    lwz r0, 0x44(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057BC0C_000008E4:
    lwz r0, 0x4c(r1)
    lis r3, lbl_80794430@ha
    stw r0, 0x14(r28)
    addi r3, r3, lbl_80794430@l
    stw r3, 0x0(r28)
lbl_fn_8057BC0C_000008F8:
    lwz r3, 0x118(r27)
    addi r0, r3, 0x1
    stw r0, 0x118(r27)
    b lbl_fn_8057BC0C_00000D2C
lbl_fn_8057BC0C_00000908:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8057BC0C_00000938
    lis r3, __files@ha
    addi r4, r28, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057BC0C_00000938:
    lwz r4, 0x118(r27)
    li r7, 0x0
    lwz r5, 0x11c(r27)
    addi r6, r27, 0x11c
    addi r0, r4, 0x1
    lis r3, 0xaab
    subf r4, r5, r0
    stw r4, 0x28(r1)
    subi r0, r3, 0x5556
    lwz r29, 0x11c(r27)
    stw r7, 0x50(r1)
    subf r0, r29, r0
    cmplw r4, r0
    stw r7, 0x54(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r7, 0x60(r1)
    ble lbl_fn_8057BC0C_000009A4
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057BC0C_000009A4:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r29, r0
    bge lbl_fn_8057BC0C_000009F4
    addi r5, r29, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x28(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x30
    srwi r4, r4, 2
    stw r4, 0x30(r1)
    cmplw r4, r0
    bge lbl_fn_8057BC0C_000009E8
    addi r3, r1, 0x28
lbl_fn_8057BC0C_000009E8:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_8057BC0C_00000A38
lbl_fn_8057BC0C_000009F4:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r29, r0
    bge lbl_fn_8057BC0C_00000A30
    addi r3, r29, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_8057BC0C_00000A24
    addi r3, r1, 0x28
lbl_fn_8057BC0C_00000A24:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_8057BC0C_00000A38
lbl_fn_8057BC0C_00000A30:
    lis r3, 0xaab
    subi r28, r3, 0x5556
lbl_fn_8057BC0C_00000A38:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r28, r0
    ble lbl_fn_8057BC0C_00000A6C
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057BC0C_00000A6C:
    mulli r3, r28, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8057BC0C_00000AA0
    lis r3, __files@ha
    lis r4, lbl_80794528@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80794528@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057BC0C_00000AA0:
    lwz r6, 0x118(r27)
    lis r3, lbl_80775A48@ha
    lwz r0, 0x54(r1)
    lis r25, lbl_80794430@ha
    mulli r5, r6, 0x18
    stw r26, 0x50(r1)
    addi r3, r3, lbl_80775A48@l
    stw r28, 0x58(r1)
    addi r25, r25, lbl_80794430@l
    mulli r4, r0, 0x18
    add r0, r26, r5
    stw r6, 0x60(r1)
    add. r26, r4, r0
    li r0, 0x0
    beq lbl_fn_8057BC0C_00000B58
    stw r3, 0x0(r26)
    lwz r3, 0x3c(r1)
    stw r3, 0x4(r26)
    lwz r4, 0x40(r1)
    srwi. r3, r4, 31
    bne lbl_fn_8057BC0C_00000B0C
    lwz r0, 0x44(r1)
    stw r4, 0x8(r26)
    stw r0, 0xc(r26)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r26)
    b lbl_fn_8057BC0C_00000B4C
lbl_fn_8057BC0C_00000B0C:
    stw r0, 0x8(r26)
    addi r3, r26, 0x8
    stw r0, 0xc(r26)
    stw r0, 0x10(r26)
    lwz r4, 0x44(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    addi r3, r26, 0x8
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0x48(r1)
    li r4, 0x0
    lwz r0, 0x44(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057BC0C_00000B4C:
    lwz r0, 0x4c(r1)
    stw r0, 0x14(r26)
    stw r25, 0x0(r26)
lbl_fn_8057BC0C_00000B58:
    lwz r3, 0x118(r27)
    lis r31, lbl_80775A48@ha
    lwz r0, 0x60(r1)
    lis r26, lbl_80794430@ha
    lwz r5, 0x54(r1)
    mulli r4, r3, 0x18
    lwz r28, 0x114(r27)
    addi r31, r31, lbl_80775A48@l
    addi r5, r5, 0x1
    lwz r3, 0x50(r1)
    mulli r0, r0, 0x18
    stw r5, 0x54(r1)
    add r30, r28, r4
    addi r26, r26, lbl_80794430@l
    add r29, r3, r0
    li r25, 0x0
    b lbl_fn_8057BC0C_00000C3C
lbl_fn_8057BC0C_00000B9C:
    subic. r29, r29, 0x18
    subi r30, r30, 0x18
    beq lbl_fn_8057BC0C_00000C24
    stw r31, 0x0(r29)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lwz r3, 0x8(r30)
    srwi. r0, r3, 31
    bne lbl_fn_8057BC0C_00000BD8
    lwz r0, 0xc(r30)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
    b lbl_fn_8057BC0C_00000C18
lbl_fn_8057BC0C_00000BD8:
    stw r25, 0x8(r29)
    addi r3, r29, 0x8
    stw r25, 0xc(r29)
    stw r25, 0x10(r29)
    lwz r4, 0xc(r30)
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    addi r3, r29, 0x8
    stb r0, 0x18(r1)
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x10(r30)
    lwz r0, 0xc(r30)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057BC0C_00000C18:
    lwz r0, 0x14(r30)
    stw r0, 0x14(r29)
    stw r26, 0x0(r29)
lbl_fn_8057BC0C_00000C24:
    lwz r4, 0x60(r1)
    lwz r3, 0x54(r1)
    subi r0, r4, 0x1
    stw r0, 0x60(r1)
    addi r0, r3, 0x1
    stw r0, 0x54(r1)
lbl_fn_8057BC0C_00000C3C:
    cmplw r30, r28
    bgt lbl_fn_8057BC0C_00000B9C
    lwz r6, 0x11c(r27)
    addi r28, r1, 0x50
    lwz r0, 0x58(r1)
    stw r0, 0x11c(r27)
    lwz r0, 0x60(r1)
    lwz r5, 0x114(r27)
    lwz r3, 0x50(r1)
    mulli r0, r0, 0x18
    stw r3, 0x114(r27)
    lwz r3, 0x54(r1)
    lwz r4, 0x118(r27)
    add r25, r5, r0
    stw r6, 0x58(r1)
    mulli r0, r4, 0x18
    stw r5, 0x50(r1)
    stw r3, 0x118(r27)
    add r26, r25, r0
    stw r4, 0x54(r1)
    b lbl_fn_8057BC0C_00000CB8
lbl_fn_8057BC0C_00000C90:
    subic. r26, r26, 0x18
    beq lbl_fn_8057BC0C_00000CB8
    beq lbl_fn_8057BC0C_00000CB8
    addic. r0, r26, 0x8
    beq lbl_fn_8057BC0C_00000CB8
    lwz r0, 0x8(r26)
    srwi. r0, r0, 31
    beq lbl_fn_8057BC0C_00000CB8
    lwz r3, 0x10(r26)
    bl dtor_80084684
lbl_fn_8057BC0C_00000CB8:
    cmplw r26, r25
    bgt lbl_fn_8057BC0C_00000C90
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x54(r1)
    beq lbl_fn_8057BC0C_00000D2C
    lwz r3, 0x50(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8057BC0C_00000D2C
    mulli r0, r0, 0x18
    li r26, 0x0
    stw r26, 0x54(r1)
    add r25, r3, r0
    b lbl_fn_8057BC0C_00000D1C
lbl_fn_8057BC0C_00000CF0:
    subic. r25, r25, 0x18
    beq lbl_fn_8057BC0C_00000D18
    beq lbl_fn_8057BC0C_00000D18
    addic. r0, r25, 0x8
    beq lbl_fn_8057BC0C_00000D18
    lwz r0, 0x8(r25)
    srwi. r0, r0, 31
    beq lbl_fn_8057BC0C_00000D18
    lwz r3, 0x10(r25)
    bl dtor_80084684
lbl_fn_8057BC0C_00000D18:
    subi r26, r26, 0x1
lbl_fn_8057BC0C_00000D1C:
    cmpwi r26, 0x0
    bne lbl_fn_8057BC0C_00000CF0
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_8057BC0C_00000D2C:
    addic. r0, r1, 0x38
    beq lbl_fn_8057BC0C_00000D50
    addic. r0, r0, 0x8
    beq lbl_fn_8057BC0C_00000D50
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057BC0C_00000D50
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_8057BC0C_00000D50:
    lwz r3, 0x118(r27)
    lwz r4, 0x114(r27)
    subi r0, r3, 0x1
    lwz r3, lbl_8087F9B8
    mulli r0, r0, 0x18
    add r0, r4, r0
    stw r0, 0x40(r3)
    b lbl_fn_8057BC0C_00000D7C
lbl_fn_8057BC0C_00000D70:
    lwz r3, lbl_8087F9B8
    li r0, 0x0
    stw r0, 0x40(r3)
lbl_fn_8057BC0C_00000D7C:
    lmw r24, 0x70(r1)
    li r3, 0x4
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8057C238(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r5
    lwz r3, lbl_8087F9B8
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8057C238_00000EBC
    li r0, 0x0
    stw r0, 0x18(r1)
    mr r3, r28
    addi r30, r1, 0x18
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087F9B8
    lwz r7, 0x40(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_8057C238_00000E50
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057C238_00000E50
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_8057C238_00000EA8
lbl_fn_8057C238_00000E50:
    cmpwi r4, 0x0
    beq lbl_fn_8057C238_00000E60
    lwz r5, 0xc(r7)
    b lbl_fn_8057C238_00000E68
lbl_fn_8057C238_00000E60:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_8057C238_00000E68:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8057C238_00000E84
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_8057C238_00000E8C
lbl_fn_8057C238_00000E84:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_8057C238_00000E8C:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8057C238_00000EA8:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057C238_00000EBC
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8057C238_00000EBC:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8057C384(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r4, r5
    li r5, 0x4
    stw r0, 0x44(r1)
    addi r3, r1, 0x8
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    bl memcpy
    lwz r3, lbl_8087F9B8
    addi r31, r1, 0x10
    lfs f0, lbl_80888088
    li r0, 0x0
    lwz r30, 0x10(r3)
    mr r5, r31
    lwz r4, 0x8(r1)
    stw r0, 0x10(r1)
    mr r3, r30
    stw r0, 0x18(r1)
    stw r0, 0x20(r1)
    stw r0, 0x28(r1)
    stw r0, 0x14(r1)
    stfs f0, 0x1c(r1)
    stw r0, 0x24(r1)
    stw r0, 0x2c(r1)
    bl fn_80542050
    lwz r4, 0x8(r1)
    mr r3, r30
    bl fn_80543064
    lwz r4, lbl_8087F9B8
    addic. r5, r31, 0x10
    stw r3, 0x58(r4)
    beq lbl_fn_8057C384_00000F8C
    beq lbl_fn_8057C384_00000F8C
    beq lbl_fn_8057C384_00000F8C
    beq lbl_fn_8057C384_00000F8C
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8057C384_00000F8C
    lwz r0, 0x4(r5)
    subf r0, r0, r0
    stw r0, 0x4(r5)
    bl dtor_80084684
lbl_fn_8057C384_00000F8C:
    cmpwi r31, 0x0
    beq lbl_fn_8057C384_00000FB8
    beq lbl_fn_8057C384_00000FB8
    beq lbl_fn_8057C384_00000FB8
    lwz r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8057C384_00000FB8
    lwz r0, 0x14(r1)
    subf r0, r0, r0
    stw r0, 0x14(r1)
    bl dtor_80084684
lbl_fn_8057C384_00000FB8:
    lwz r31, 0x3c(r1)
    li r3, 0x4
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8057C478(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_16
    mr r4, r5
    addi r3, r1, 0x30
    li r5, 0x8
    bl memcpy
    lwz r3, lbl_8087F9B8
    addi r16, r1, 0x44
    lfs f3, 0x30(r1)
    lwz r18, 0x58(r3)
    lfs f0, 0x34(r1)
    lwz r3, 0x4(r18)
    lwz r0, 0x8(r18)
    lfs f2, lbl_80888088
    cmplw r3, r0
    stfs f3, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f2, 0x4c(r1)
    bge lbl_fn_8057C478_00001058
    mulli r0, r3, 0xc
    lwz r3, 0x0(r18)
    add. r3, r3, r0
    beq lbl_fn_8057C478_00001048
    psq_l f1, 0x0(r16), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_8057C478_00001048:
    lwz r3, 0x4(r18)
    addi r0, r3, 0x1
    stw r0, 0x4(r18)
    b lbl_fn_8057C478_00001350
lbl_fn_8057C478_00001058:
    li r0, 0x1
    stw r0, 0x1c(r1)
    lis r3, 0x1555
    lwz r17, 0x8(r18)
    addi r0, r3, 0x5555
    subf r0, r17, r0
    cmplwi r0, 0x1
    bge lbl_fn_8057C478_0000109C
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057C478_0000109C:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r17, r0
    bge lbl_fn_8057C478_000010D4
    addi r4, r17, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_8057C478_000010F4
lbl_fn_8057C478_000010D4:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r17, r0
    bge lbl_fn_8057C478_000010F4
    addi r0, r17, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_8057C478_000010F4:
    li r4, 0x0
    addi r5, r18, 0x8
    lis r3, 0x1555
    stw r4, 0x50(r1)
    addi r0, r3, 0x5555
    stw r4, 0x54(r1)
    stw r4, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    lwz r3, 0x4(r18)
    lwz r4, 0x8(r18)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x8(r1)
    lwz r17, 0x8(r18)
    subf r0, r17, r0
    cmplw r3, r0
    ble lbl_fn_8057C478_00001160
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057C478_00001160:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r17, r0
    bge lbl_fn_8057C478_000011B0
    addi r5, r17, 0x1
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
    bge lbl_fn_8057C478_000011A4
    addi r3, r1, 0x8
lbl_fn_8057C478_000011A4:
    lwz r0, 0x0(r3)
    add r19, r17, r0
    b lbl_fn_8057C478_000011F4
lbl_fn_8057C478_000011B0:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r17, r0
    bge lbl_fn_8057C478_000011EC
    addi r3, r17, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8057C478_000011E0
    addi r3, r1, 0x8
lbl_fn_8057C478_000011E0:
    lwz r0, 0x0(r3)
    add r19, r17, r0
    b lbl_fn_8057C478_000011F4
lbl_fn_8057C478_000011EC:
    lis r3, 0x1555
    addi r19, r3, 0x5555
lbl_fn_8057C478_000011F4:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r19, r0
    ble lbl_fn_8057C478_00001228
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057C478_00001228:
    mulli r3, r19, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_8057C478_0000125C
    lis r3, __files@ha
    lis r4, lbl_80788D00@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057C478_0000125C:
    lwz r0, 0x54(r1)
    stw r17, 0x50(r1)
    mulli r3, r0, 0xc
    stw r19, 0x58(r1)
    lwz r0, 0x4(r18)
    stw r0, 0x60(r1)
    mulli r0, r0, 0xc
    add r0, r17, r0
    add. r3, r3, r0
    beq lbl_fn_8057C478_00001294
    psq_l f1, 0x0(r16), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x4c(r1)
    stfs f2, 0x8(r3)
lbl_fn_8057C478_00001294:
    lwz r3, 0x54(r1)
    lwz r0, 0x60(r1)
    addi r3, r3, 0x1
    stw r3, 0x54(r1)
    mulli r0, r0, 0xc
    lwz r3, 0x50(r1)
    lwz r4, 0x4(r18)
    lwz r7, 0x0(r18)
    mulli r4, r4, 0xc
    add r6, r3, r0
    add r5, r7, r4
    b lbl_fn_8057C478_000012F8
lbl_fn_8057C478_000012C4:
    subic. r6, r6, 0xc
    subi r5, r5, 0xc
    beq lbl_fn_8057C478_000012E0
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
lbl_fn_8057C478_000012E0:
    lwz r4, 0x60(r1)
    lwz r3, 0x54(r1)
    subi r0, r4, 0x1
    stw r0, 0x60(r1)
    addi r0, r3, 0x1
    stw r0, 0x54(r1)
lbl_fn_8057C478_000012F8:
    cmplw r7, r5
    blt lbl_fn_8057C478_000012C4
    li r4, 0x0
    stw r4, 0x4(r18)
    addic. r0, r1, 0x50
    lwz r3, 0x8(r18)
    lwz r0, 0x58(r1)
    stw r0, 0x8(r18)
    stw r3, 0x58(r1)
    lwz r0, 0x50(r1)
    lwz r3, 0x0(r18)
    stw r0, 0x0(r18)
    stw r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r0, 0x4(r18)
    stw r4, 0x54(r1)
    beq lbl_fn_8057C478_00001350
    lwz r3, 0x50(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8057C478_00001350
    stw r4, 0x54(r1)
    bl dtor_80084684
lbl_fn_8057C478_00001350:
    li r19, 0x0
    lis r3, __files@ha
    lis r4, lbl_80760FC0@ha
    stw r19, 0x38(r1)
    addi r21, r4, lbl_80760FC0@l
    addi r22, r3, __files@l
    stw r19, 0x3c(r1)
    addi r25, r1, 0x40
    addi r17, r1, 0x64
    li r31, 0x0
    stw r19, 0x40(r1)
    li r29, 0x0
    lis r27, 0xcccd
    lis r20, 0x1555
    lis r23, 0x71c
    lis r24, 0xe39
    lis r28, lbl_80788D00@ha
    b lbl_fn_8057C478_0000165C
lbl_fn_8057C478_00001398:
    lwz r0, 0x3c(r1)
    lwz r26, 0x40(r1)
    lwz r3, 0x0(r18)
    cmplw r0, r26
    add r30, r3, r29
    bge lbl_fn_8057C478_000013E0
    mulli r0, r0, 0xc
    lwz r3, 0x38(r1)
    add. r3, r3, r0
    beq lbl_fn_8057C478_000013D0
    lfs f2, 0x8(r30)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_8057C478_000013D0:
    lwz r3, 0x3c(r1)
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
    b lbl_fn_8057C478_00001654
lbl_fn_8057C478_000013E0:
    addi r0, r20, 0x5555
    subf r0, r26, r0
    cmplwi r0, 0x1
    bge lbl_fn_8057C478_00001404
    addi r4, r21, 0x1f
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057C478_00001404:
    addi r0, r23, 0x71c7
    cmplw r26, r0
    bge lbl_fn_8057C478_00001438
    addi r3, r26, 0x1
    subi r4, r27, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_8057C478_00001454
    b lbl_fn_8057C478_00001454
    b lbl_fn_8057C478_00001454
lbl_fn_8057C478_00001438:
    subi r0, r24, 0x1c72
    cmplw r26, r0
    bge lbl_fn_8057C478_00001454
    addi r0, r26, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_8057C478_00001454:
    lwz r3, 0x3c(r1)
    addi r0, r20, 0x5555
    lwz r26, 0x40(r1)
    addi r3, r3, 0x1
    stw r19, 0x64(r1)
    subf r3, r26, r3
    subf r0, r26, r0
    cmplw r3, r0
    stw r19, 0x68(r1)
    stw r19, 0x6c(r1)
    stw r25, 0x70(r1)
    stw r19, 0x74(r1)
    stw r3, 0x20(r1)
    ble lbl_fn_8057C478_000014A0
    addi r4, r21, 0x1f
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057C478_000014A0:
    addi r0, r23, 0x71c7
    cmplw r26, r0
    bge lbl_fn_8057C478_000014E8
    addi r4, r26, 0x1
    subi r5, r27, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x20(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_8057C478_000014DC
    addi r3, r1, 0x20
lbl_fn_8057C478_000014DC:
    lwz r0, 0x0(r3)
    add r16, r26, r0
    b lbl_fn_8057C478_00001524
lbl_fn_8057C478_000014E8:
    subi r0, r24, 0x1c72
    cmplw r26, r0
    bge lbl_fn_8057C478_00001520
    addi r3, r26, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_8057C478_00001514
    addi r3, r1, 0x20
lbl_fn_8057C478_00001514:
    lwz r0, 0x0(r3)
    add r16, r26, r0
    b lbl_fn_8057C478_00001524
lbl_fn_8057C478_00001520:
    addi r16, r20, 0x5555
lbl_fn_8057C478_00001524:
    addi r0, r20, 0x5555
    cmplw r16, r0
    ble lbl_fn_8057C478_00001544
    addi r4, r21, 0x1f
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057C478_00001544:
    mulli r3, r16, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8057C478_0000156C
    addi r3, r22, 0xa0
    addi r4, r28, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057C478_0000156C:
    lwz r5, 0x3c(r1)
    lwz r0, 0x68(r1)
    mulli r4, r5, 0xc
    stw r26, 0x64(r1)
    stw r16, 0x6c(r1)
    mulli r3, r0, 0xc
    add r0, r26, r4
    stw r5, 0x74(r1)
    add. r3, r3, r0
    beq lbl_fn_8057C478_000015A4
    lfs f2, 0x8(r30)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_8057C478_000015A4:
    lwz r3, 0x3c(r1)
    lwz r0, 0x74(r1)
    lwz r5, 0x68(r1)
    mulli r4, r3, 0xc
    lwz r7, 0x38(r1)
    addi r5, r5, 0x1
    stw r5, 0x68(r1)
    mulli r0, r0, 0xc
    lwz r3, 0x64(r1)
    add r5, r7, r4
    add r6, r3, r0
    b lbl_fn_8057C478_00001608
lbl_fn_8057C478_000015D4:
    subic. r6, r6, 0xc
    subi r5, r5, 0xc
    beq lbl_fn_8057C478_000015F0
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
lbl_fn_8057C478_000015F0:
    lwz r4, 0x74(r1)
    lwz r3, 0x68(r1)
    subi r0, r4, 0x1
    stw r0, 0x74(r1)
    addi r0, r3, 0x1
    stw r0, 0x68(r1)
lbl_fn_8057C478_00001608:
    cmplw r7, r5
    blt lbl_fn_8057C478_000015D4
    lwz r0, 0x68(r1)
    cmpwi r17, 0x0
    lwz r6, 0x40(r1)
    lwz r5, 0x6c(r1)
    lwz r3, 0x38(r1)
    lwz r4, 0x64(r1)
    stw r5, 0x40(r1)
    stw r6, 0x6c(r1)
    stw r4, 0x38(r1)
    stw r3, 0x64(r1)
    stw r0, 0x3c(r1)
    stw r19, 0x68(r1)
    beq lbl_fn_8057C478_00001654
    cmpwi r3, 0x0
    beq lbl_fn_8057C478_00001654
    stw r19, 0x68(r1)
    bl dtor_80084684
lbl_fn_8057C478_00001654:
    addi r31, r31, 0x1
    addi r29, r29, 0xc
lbl_fn_8057C478_0000165C:
    lwz r0, 0x4(r18)
    cmpw r31, r0
    blt lbl_fn_8057C478_00001398
    lwz r17, 0x38(r1)
    mr r3, r18
    lwz r16, 0x3c(r1)
    bl fn_8048A290
    mr r3, r18
    mr r4, r16
    bl fn_8048A584
    cmpwi r16, 0x0
    li r3, 0x0
    ble lbl_fn_8057C478_00001750
    srwi. r0, r16, 2
    mtctr r0
    beq lbl_fn_8057C478_00001728
lbl_fn_8057C478_0000169C:
    add r4, r17, r3
    lwz r0, 0x0(r18)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    add r4, r17, r3
    stfs f2, 0x8(r5)
    lwz r0, 0x0(r18)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    add r4, r17, r3
    stfs f2, 0x8(r5)
    lwz r0, 0x0(r18)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    add r4, r17, r3
    stfs f2, 0x8(r5)
    lwz r0, 0x0(r18)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    stfs f2, 0x8(r5)
    bdnz lbl_fn_8057C478_0000169C
    andi. r16, r16, 0x3
    beq lbl_fn_8057C478_00001750
lbl_fn_8057C478_00001728:
    mtctr r16
lbl_fn_8057C478_0000172C:
    add r4, r17, r3
    lwz r0, 0x0(r18)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    stfs f2, 0x8(r5)
    bdnz lbl_fn_8057C478_0000172C
lbl_fn_8057C478_00001750:
    lwz r4, 0x4(r18)
    cmpwi r4, 0x4
    bge lbl_fn_8057C478_00001764
    li r0, 0x0
    b lbl_fn_8057C478_0000178C
lbl_fn_8057C478_00001764:
    lis r3, 0x5555
    subi r4, r4, 0x1
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r4
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_8057C478_0000178C:
    cmpwi r0, 0x0
    beq lbl_fn_8057C478_00001808
    lfs f0, lbl_80888088
    lis r3, 0xaaab
    stfs f0, 0xc(r18)
    subi r5, r3, 0x5555
    addi r3, r18, 0x10
    lwz r4, 0x4(r18)
    subi r0, r4, 0x1
    mulhwu r0, r5, r0
    srwi r4, r0, 1
    stw r4, 0x1c(r18)
    bl fn_8032BE88
    li r19, 0x0
    li r16, 0x0
    b lbl_fn_8057C478_000017FC
lbl_fn_8057C478_000017CC:
    lwz r17, 0x10(r18)
    mr r3, r18
    mr r4, r19
    bl fn_8048A968
    stfsx f1, r17, r16
    addi r19, r19, 0x1
    lwz r3, 0x10(r18)
    lfs f3, 0xc(r18)
    lfsx f0, r3, r16
    addi r16, r16, 0x4
    fadds f0, f3, f0
    stfs f0, 0xc(r18)
lbl_fn_8057C478_000017FC:
    lwz r0, 0x1c(r18)
    cmpw r19, r0
    blt lbl_fn_8057C478_000017CC
lbl_fn_8057C478_00001808:
    addic. r0, r1, 0x38
    beq lbl_fn_8057C478_00001830
    beq lbl_fn_8057C478_00001830
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8057C478_00001830
    lwz r0, 0x3c(r1)
    subf r0, r0, r0
    stw r0, 0x3c(r1)
    bl dtor_80084684
lbl_fn_8057C478_00001830:
    addi r11, r1, 0xc0
    li r3, 0x8
    bl _restgpr_16
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8057CCF0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    lwz r3, lbl_8087F9B8
    lwz r3, 0x10(r3)
    bl fn_80540A0C
    lwz r5, lbl_8087F9B8
    li r0, 0x0
    mr r31, r3
    mr r4, r30
    stw r3, 0x14(r5)
    addi r3, r1, 0x8
    li r5, 0x14
    lwz r6, lbl_8087F9B8
    stw r0, 0x18(r6)
    lwz r6, lbl_8087F9B8
    stw r0, 0x1c(r6)
    lwz r6, lbl_8087F9B8
    stw r0, 0x20(r6)
    lwz r6, lbl_8087F9B8
    stw r0, 0x24(r6)
    lwz r6, lbl_8087F9B8
    stw r0, 0x28(r6)
    bl memcpy
    lwz r0, 0x8(r1)
    li r3, 0x14
    stw r0, 0xc(r31)
    lwz r0, 0xc(r1)
    clrlwi r0, r0, 28
    stw r0, 0x10(r31)
    lwz r0, 0xc(r1)
    rlwinm r0, r0, 0, 27, 27
    stw r0, 0x14(r31)
    lwz r0, 0x10(r1)
    stw r0, 0x28(r31)
    lwz r0, 0x18(r1)
    stw r0, 0x2c(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8057CDA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r4, r5
    li r5, 0x8
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    stw r31, 0x1c(r1)
    lwz r6, lbl_8087F9B8
    lwz r31, 0x14(r6)
    bl memcpy
    lha r0, 0x8(r1)
    li r3, 0x8
    stw r0, 0x18(r31)
    lha r0, 0xa(r1)
    stw r0, 0x1c(r31)
    lha r0, 0xc(r1)
    stw r0, 0x20(r31)
    lha r0, 0xe(r1)
    stw r0, 0x24(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057CE08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r4
    mr r31, r5
    lwz r3, lbl_8087F9B8
    lwz r30, 0x14(r3)
    beq lbl_fn_8057CE08_0000199C
    mr r3, r31
    bl strlen
    mr r28, r3
    b lbl_fn_8057CE08_000019A0
lbl_fn_8057CE08_0000199C:
    li r28, 0x0
lbl_fn_8057CE08_000019A0:
    cmpwi r31, 0x0
    beq lbl_fn_8057CE08_000019FC
    cmpwi r28, 0x0
    beq lbl_fn_8057CE08_000019FC
    addi r3, r28, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r29, r3
    mr r4, r31
    mr r5, r28
    bl memcpy
    li r31, 0x0
    stbx r31, r29, r28
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057CE08_000019F4
    bl fn_80084C24
    stw r31, 0x4(r30)
lbl_fn_8057CE08_000019F4:
    stw r29, 0x4(r30)
    b lbl_fn_8057CE08_00001A14
lbl_fn_8057CE08_000019FC:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057CE08_00001A14
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8057CE08_00001A14:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
