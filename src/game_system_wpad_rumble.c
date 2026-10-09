#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void fn_800697D8(void);
extern void fn_8006D0C8(void);
extern void fn_8006D3F8(void);
extern void fn_800A6BDC(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_8011F8F4(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_8012D8B8(void);
extern void fn_802085E0(void);
extern void fn_8020924C(void);
extern void fn_8020A81C(void);
extern void fn_8020FCE8(void);
extern void fn_80214394(void);
extern void fn_802143EC(void);
extern void fn_8021446C(void);
extern void fn_8021771C(void);
extern void fn_80218268(void);
extern void fn_80219544(void);
extern void fn_80219558(void);
extern void fn_8036097C(void);
extern void fn_80360A2C(void);
extern void fn_8036562C(void);
extern void fn_8036CA60(void);
extern void fn_80370320(void);
extern void fn_8037EF30(void);
extern void fn_803AB96C(void);
extern void fn_803B3CA8(void);
extern void fn_803BAD6C(void);
extern void fn_803BE590(void);
extern void fn_803BE670(void);
extern void fn_803BE6B8(void);
extern void fn_803BEBAC(void);
extern void fn_803D1574(void);
extern void fn_803D164C(void);
extern void fn_803D2194(void);
extern void fn_8044386C(void);
extern void fn_8044D0DC(void);
extern void fn_8044D184(void);
extern void fn_8046ECDC(void);
extern void fn_80470528(void);
extern void fn_80473F50(void);
extern void fn_80547984(void);
extern void fn_80547B58(void);
extern void fn_80549F18(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074DA2C[];
extern u8 lbl_8074DAF8[];
extern u8 lbl_8074DBE8[];
extern u8 lbl_8074DC1C[];
extern u8 lbl_807C8458[];

/* Small data declarations */
extern u32 lbl_8087DD64;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F428;
extern u32 lbl_8087F438;
extern u32 lbl_8087F470;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F518;
extern u32 lbl_8087F534;
extern u32 lbl_8087F580;
extern u32 lbl_8087F610;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8088570C;
extern u32 lbl_8088571C;
extern u32 lbl_80885744;
extern u32 lbl_80885748;

/* Function declarations */
void fn_80366D40(void);
void fn_80366DA4(void);
void fn_80366DAC(void);
void fn_80366DF8(void);
void fn_80366E00(void);
void fn_80366E08(void);
void fn_80366E54(void);
void fn_80367A40(void);
void fn_8036823C(void);

asm void fn_80366D40(void)
{
    nofralloc
    psq_l f1, 0x4(r4), 0, 0
    psq_l f2, 0xc(r4), 0, 0
    psq_st f1, 0x328(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    psq_st f2, 0x330(r3), 0, 0
    psq_l f2, 0x1c(r4), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    psq_l f1, 0x24(r4), 0, 0
    psq_st f2, 0x340(r3), 0, 0
    psq_l f2, 0x2c(r4), 0, 0
    psq_st f1, 0x348(r3), 0, 0
    lwz r6, 0x0(r4)
    psq_st f2, 0x350(r3), 0, 0
    psq_l f1, 0x34(r4), 0, 0
    psq_l f2, 0x3c(r4), 0, 0
    lwz r5, 0x44(r4)
    lwz r0, 0x48(r4)
    lfs f0, 0x4c(r4)
    stw r6, 0x324(r3)
    psq_st f1, 0x358(r3), 0, 0
    psq_st f2, 0x360(r3), 0, 0
    stw r5, 0x368(r3)
    stw r0, 0x36c(r3)
    stfs f0, 0x370(r3)
    blr
}

asm void fn_80366DA4(void)
{
    nofralloc
    addi r3, r3, 0x374
    blr
}

asm void fn_80366DAC(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x374(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x378(r3)
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r0, 0x380(r3)
    stw r5, 0x37c(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r0, 0x388(r3)
    stw r5, 0x384(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x38c(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x390(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x394(r3)
    blr
}

asm void fn_80366DF8(void)
{
    nofralloc
    stw r4, 0x240(r3)
    blr
}

asm void fn_80366E00(void)
{
    nofralloc
    stfs f1, 0x3a4(r3)
    blr
}

asm void fn_80366E08(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    lfs f6, 0x8(r4)
    lfs f5, 0xc(r4)
    lfs f4, 0x10(r4)
    lfs f3, 0x14(r4)
    lfs f2, 0x18(r4)
    lfs f1, 0x1c(r4)
    lfs f0, 0x20(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f6, 0x8(r3)
    stfs f5, 0xc(r3)
    stfs f4, 0x10(r3)
    stfs f3, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f0, 0x20(r3)
    blr
}

asm void fn_80366E54(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x340
    bl _savegpr_25
    lwz r0, lbl_8087F438
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_80366E54_00000150
    li r0, 0x1
    stw r0, lbl_8087F438
    lwz r31, lbl_8087F534
    bl OSGetTime
    stw r4, 0x64(r31)
    stw r3, 0x60(r31)
lbl_fn_80366E54_00000150:
    lwz r3, lbl_8087F518
    li r4, 0x1
    bl fn_8046ECDC
    lwz r0, 0x10dc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80366E54_0000068C
    mr r3, r30
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000CE4
    lwz r3, lbl_8087F4F0
    bl fn_8044386C
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_00000CE4
    lwz r0, lbl_8087F470
    cmpwi r0, 0x0
    bne lbl_fn_80366E54_00000CE4
    lwz r3, 0x64(r30)
    lwz r4, 0x10dc(r30)
    cmpwi r3, 0x0
    addi r0, r4, 0x1
    stw r0, 0x10dc(r30)
    beq lbl_fn_80366E54_000001B4
    bl fn_803BE590
    b lbl_fn_80366E54_00000314
lbl_fn_80366E54_000001B4:
    lwz r0, 0x60(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80366E54_00000314
    lwz r3, 0x10d4(r30)
    li r27, 0x4
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_000001D4
    lwz r27, 0x54(r3)
lbl_fn_80366E54_000001D4:
    lis r3, lbl_807C8458@ha
    lwz r0, lbl_807C8458@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_000001F0
    addi r3, r3, lbl_807C8458@l
    lwz r0, 0x28(r3)
    add r27, r27, r0
lbl_fn_80366E54_000001F0:
    li r28, 0x0
lbl_fn_80366E54_000001F4:
    mr r3, r28
    bl fn_80219544
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000218
    lwz r3, 0x14(r3)
    bl fn_8020A81C
    mr r31, r3
    b lbl_fn_80366E54_0000021C
lbl_fn_80366E54_00000218:
    li r31, 0x0
lbl_fn_80366E54_0000021C:
    cmpwi r31, 0x0
    beq lbl_fn_80366E54_00000308
    lwz r26, 0x11c(r31)
    li r29, 0x0
    subi r0, r26, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_80366E54_0000023C
    li r29, 0x1
lbl_fn_80366E54_0000023C:
    lwz r0, 0x78(r31)
    mr r4, r29
    add r3, r27, r0
    subi r3, r3, 0x4
    bl fn_80214394
    mr r25, r3
    lwz r3, lbl_8087F4F0
    mr r5, r25
    mr r7, r28
    li r4, 0x0
    li r6, 0x0
    bl fn_8044D184
    cmpwi r26, 0x2
    bne lbl_fn_80366E54_0000028C
    lwz r3, lbl_8087F4F0
    mr r5, r25
    mr r7, r28
    li r4, 0x1
    li r6, 0x0
    bl fn_8044D184
lbl_fn_80366E54_0000028C:
    cmpwi r26, 0x1
    bne lbl_fn_80366E54_000002C0
    lwz r0, 0x78(r31)
    mr r4, r29
    add r3, r27, r0
    subi r3, r3, 0x4
    bl fn_8021446C
    mr r5, r3
    lwz r3, lbl_8087F4F0
    mr r7, r28
    li r4, 0x1
    li r6, 0x0
    bl fn_8044D184
lbl_fn_80366E54_000002C0:
    lwz r3, 0x78(r31)
    mr r4, r29
    lwz r0, 0x4c(r30)
    add r3, r27, r3
    subi r3, r3, 0x4
    add r5, r0, r28
    bl fn_802143EC
    mr r25, r3
    li r26, 0x0
lbl_fn_80366E54_000002E4:
    lwz r3, lbl_8087F4F0
    mr r4, r26
    mr r5, r25
    mr r7, r28
    li r6, -0x1
    bl fn_8044D0DC
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    blt lbl_fn_80366E54_000002E4
lbl_fn_80366E54_00000308:
    addi r28, r28, 0x1
    cmpwi r28, 0x7
    blt lbl_fn_80366E54_000001F4
lbl_fn_80366E54_00000314:
    lis r3, lbl_807C8458@ha
    lwz r0, lbl_807C8458@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_000003F0
    addi r3, r3, lbl_807C8458@l
    lis r31, lbl_8074DC1C@ha
    lwz r0, 0x30(r3)
    addi r27, r3, 0x38
    stw r0, 0x5694(r30)
    addi r31, r31, lbl_8074DC1C@l
    li r25, 0x0
    stw r0, 0x5698(r30)
lbl_fn_80366E54_00000344:
    lwz r0, 0x0(r27)
    cmpwi r0, -0x1
    beq lbl_fn_80366E54_000003DC
    cmpwi r0, 0x1
    bne lbl_fn_80366E54_00000370
    lwz r4, 0x4(r27)
    mr r3, r30
    lwz r5, 0x8(r27)
    li r6, 0x1
    bl fn_80370320
    b lbl_fn_80366E54_000003DC
lbl_fn_80366E54_00000370:
    lwz r5, 0x4(r27)
    lwz r7, 0x8(r27)
    cmplwi r5, 0xff
    ble lbl_fn_80366E54_000003AC
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_000003DC
    addi r3, r1, 0x208
    addi r4, r31, 0xa4
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x208
    bl fn_800697D8
    b lbl_fn_80366E54_000003DC
lbl_fn_80366E54_000003AC:
    slwi r0, r5, 2
    add r3, r30, r0
    lwz r6, 0x50e4(r3)
    stw r7, 0x50e4(r3)
    lwz r3, 0x10d8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_000003DC
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_000003DC
    li r4, 0x0
    bl fn_803AB96C
lbl_fn_80366E54_000003DC:
    addi r25, r25, 0x1
    addi r27, r27, 0xc
    cmpwi r25, 0x8
    blt lbl_fn_80366E54_00000344
    b lbl_fn_80366E54_0000060C
lbl_fn_80366E54_000003F0:
    lwz r0, 0x5694(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_00000404
    stw r0, 0x5698(r30)
    b lbl_fn_80366E54_0000060C
lbl_fn_80366E54_00000404:
    lwz r3, 0x48(r30)
    li r29, 0x0
    lwz r4, 0x4c(r30)
    lwz r5, 0x50(r30)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80366E54_00000604
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80366E54_00000604
    lwz r28, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r27, -0x1
    mr r3, r28
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_00000488
    addi r3, r28, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r27, r3, 0x64
    bne lbl_fn_80366E54_00000488
    mr r3, r28
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80366E54_00000488
    addi r3, r28, 0x6
    bl fn_80684600
    add r27, r27, r3
lbl_fn_80366E54_00000488:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_80366E54_000004A8
lbl_fn_80366E54_00000494:
    cmpw r27, r0
    bne lbl_fn_80366E54_000004A4
    li r0, 0x1
    b lbl_fn_80366E54_000004B8
lbl_fn_80366E54_000004A4:
    addi r3, r3, 0x4
lbl_fn_80366E54_000004A8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80366E54_00000494
    li r0, 0x0
lbl_fn_80366E54_000004B8:
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_00000604
    lwz r27, 0x0(r31)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r28, -0x1
    mr r3, r27
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_00000518
    addi r3, r27, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r28, r3, 0x64
    bne lbl_fn_80366E54_00000518
    mr r3, r27
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80366E54_00000518
    addi r3, r27, 0x6
    bl fn_80684600
    add r28, r28, r3
lbl_fn_80366E54_00000518:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_80366E54_0000054C
lbl_fn_80366E54_00000528:
    cmpw r28, r0
    bne lbl_fn_80366E54_00000544
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r27, r3, r0
    b lbl_fn_80366E54_0000055C
lbl_fn_80366E54_00000544:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_80366E54_0000054C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_80366E54_00000528
    li r27, 0x0
lbl_fn_80366E54_0000055C:
    cmpwi r27, 0x0
    bne lbl_fn_80366E54_000005A0
    lwz r4, 0x48(r31)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000604
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000604
    lwz r5, 0x10d0(r30)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r29, r4, r3
    b lbl_fn_80366E54_00000604
lbl_fn_80366E54_000005A0:
    lwz r5, 0x4(r27)
    cmplwi r5, 0xfff
    ble lbl_fn_80366E54_000005E4
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_000005DC
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x108
    bl fn_800697D8
lbl_fn_80366E54_000005DC:
    li r5, 0x0
    b lbl_fn_80366E54_000005F0
lbl_fn_80366E54_000005E4:
    slwi r0, r5, 2
    add r3, r30, r0
    lwz r5, 0x10e4(r3)
lbl_fn_80366E54_000005F0:
    lwz r0, 0x8(r27)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r29, r4, r3
lbl_fn_80366E54_00000604:
    stw r29, 0x5694(r30)
    stw r29, 0x5698(r30)
lbl_fn_80366E54_0000060C:
    lwz r3, 0x48(r30)
    lwz r4, 0x4c(r30)
    lwz r5, 0x50(r30)
    bl fn_80218268
    lwz r3, lbl_8087F8A0
    lwz r4, 0x48(r30)
    bl fn_80549F18
    lwz r3, 0x48(r30)
    lwz r4, 0x4c(r30)
    lwz r5, 0x50(r30)
    lwz r6, 0x10d0(r30)
    bl fn_8036562C
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_0000064C
    lwz r3, lbl_8087F890
    bl fn_80547984
lbl_fn_80366E54_0000064C:
    lwz r4, 0x48(r30)
    lwz r3, lbl_8087EEC8
    subi r0, r4, 0x1
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_8006D0C8
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000CE4
    lwz r4, 0x48(r30)
    lwz r5, 0x4c(r30)
    lwz r6, 0x50(r30)
    lwz r7, 0x58(r30)
    lwz r8, 0x64(r30)
    bl fn_8036097C
    b lbl_fn_80366E54_00000CE4
lbl_fn_80366E54_0000068C:
    cmpwi r0, 0x1
    bne lbl_fn_80366E54_000006BC
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_000006AC
    bl fn_80360A2C
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_00000CE4
lbl_fn_80366E54_000006AC:
    lwz r3, 0x10dc(r30)
    addi r0, r3, 0x1
    stw r0, 0x10dc(r30)
    b lbl_fn_80366E54_00000CE4
lbl_fn_80366E54_000006BC:
    cmpwi r0, 0x2
    bne lbl_fn_80366E54_00000738
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80366E54_00000CE4
    lwz r3, lbl_8087F890
    bl fn_80547B58
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_00000CE4
    addi r3, r30, 0x5690
    bl fn_80470528
    lwz r5, 0x10dc(r30)
    mr r3, r30
    lwz r4, 0x48(r30)
    addi r0, r5, 0x1
    stw r0, 0x10dc(r30)
    lwz r5, 0x4c(r30)
    lwz r6, 0x50(r30)
    bl fn_803BEBAC
    lwz r0, 0x64(r30)
    stw r3, 0x10d8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_00000728
    stw r0, 0x9b0(r3)
lbl_fn_80366E54_00000728:
    lwz r3, 0x10d8(r30)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_80366E54_00000CE4
lbl_fn_80366E54_00000738:
    addi r3, r30, 0x56dc
    li r25, 0x1
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000750
    li r25, 0x0
lbl_fn_80366E54_00000750:
    addi r3, r30, 0x54f4
    bl fn_803B3CA8
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000764
    li r25, 0x0
lbl_fn_80366E54_00000764:
    mr r3, r30
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_00000778
    li r25, 0x0
lbl_fn_80366E54_00000778:
    lwz r3, lbl_8087F8A0
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_0000078C
    li r25, 0x0
lbl_fn_80366E54_0000078C:
    lwz r3, lbl_8087F408
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_000007A0
    li r25, 0x0
lbl_fn_80366E54_000007A0:
    lwz r3, lbl_8087F890
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_000007B4
    li r25, 0x0
lbl_fn_80366E54_000007B4:
    lwz r3, lbl_8087F490
    bl fn_803D1574
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_000007C8
    li r25, 0x0
lbl_fn_80366E54_000007C8:
    lwz r3, lbl_8087EEC8
    bl fn_8006D3F8
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_000007DC
    li r25, 0x0
lbl_fn_80366E54_000007DC:
    cmpwi r25, 0x0
    beq lbl_fn_80366E54_00000CE4
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F428
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F580
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F580
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x567c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000854
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x567c(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80366E54_00000854:
    lwz r3, lbl_8087F120
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x64(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000870
    bl fn_803BE670
lbl_fn_80366E54_00000870:
    lwz r4, 0x58(r30)
    mr r3, r30
    bl fn_8036CA60
    lwz r3, 0x64(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_000008A0
    bl fn_803BE6B8
    lfs f1, lbl_80885744
    addi r3, r30, 0x6c
    li r4, 0x1
    li r5, 0x1
    bl fn_8037EF30
lbl_fn_80366E54_000008A0:
    mr r3, r30
    li r4, 0x1
    bl fn_80367A40
    lwz r3, lbl_8087F0A8
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_000008F4
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_000008F4
    lwz r27, lbl_8087F8A0
    li r4, 0x1
    mr r3, r27
    bl fn_8011F8F4
    lwz r12, 0x0(r3)
    lwz r4, 0x5c(r27)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
lbl_fn_80366E54_000008F4:
    lwz r0, 0x64(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80366E54_00000938
    lis r3, 0x2
    lwz r4, 0x10d0(r30)
    subi r0, r3, 0x7960
    cmpw r4, r0
    blt lbl_fn_80366E54_00000938
    lis r3, 0x6
    addi r0, r3, 0x2638
    cmpw r4, r0
    bge lbl_fn_80366E54_00000938
    mr r3, r30
    li r4, 0x11f
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_80366E54_00000938:
    lwz r3, lbl_8087F490
    bl fn_803D164C
    lwz r3, lbl_8087F490
    bl fn_803D2194
    lwz r3, 0x5620(r30)
    li r31, 0x0
    li r8, 0x3
    li r7, 0xa
    stw r31, 0x4c(r3)
    lis r6, 0xff00
    lfs f0, lbl_8088570C
    li r5, 0x1
    lwz r4, 0x5620(r30)
    li r3, 0x2
    li r0, 0x4
    stw r8, 0x58(r4)
    lwz r4, 0x5620(r30)
    stw r7, 0x54(r4)
    lwz r4, 0x5620(r30)
    stw r31, 0x5c(r4)
    lwz r4, 0x5620(r30)
    stw r6, 0x6c(r4)
    lwz r4, 0x5620(r30)
    stw r31, 0x70(r4)
    lwz r4, 0x5620(r30)
    stfs f0, 0x74(r4)
    lwz r4, 0x5620(r30)
    stw r5, 0x48(r4)
    stw r3, 0x54f0(r30)
    stw r0, 0x5760(r30)
    lwz r27, lbl_8087F534
    bl OSGetTime
    stw r4, 0x6c(r27)
    lis r5, lbl_807C8458@ha
    stw r3, 0x68(r27)
    lwz r6, 0x64(r27)
    lwz r0, 0x60(r27)
    subfc r4, r6, r4
    stw r31, lbl_8087F438
    subfe r0, r0, r3
    stw r4, 0x74(r27)
    stw r0, 0x70(r27)
    lwz r0, lbl_807C8458@l(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_000009F0
    stw r31, lbl_807C8458@l(r5)
lbl_fn_80366E54_000009F0:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80366E54_00000A08
    lwz r3, lbl_8087F4E8
    li r0, 0x1
    stw r0, 0x88(r3)
lbl_fn_80366E54_00000A08:
    lwz r3, 0x48(r30)
    li r29, 0x0
    lwz r4, 0x4c(r30)
    lwz r5, 0x50(r30)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80366E54_00000C08
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80366E54_00000C08
    lwz r28, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r27, -0x1
    mr r3, r28
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_00000A8C
    addi r3, r28, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r27, r3, 0x64
    bne lbl_fn_80366E54_00000A8C
    mr r3, r28
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80366E54_00000A8C
    addi r3, r28, 0x6
    bl fn_80684600
    add r27, r27, r3
lbl_fn_80366E54_00000A8C:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_80366E54_00000AAC
lbl_fn_80366E54_00000A98:
    cmpw r27, r0
    bne lbl_fn_80366E54_00000AA8
    li r0, 0x1
    b lbl_fn_80366E54_00000ABC
lbl_fn_80366E54_00000AA8:
    addi r3, r3, 0x4
lbl_fn_80366E54_00000AAC:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80366E54_00000A98
    li r0, 0x0
lbl_fn_80366E54_00000ABC:
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_00000C08
    lwz r28, 0x0(r31)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r27, -0x1
    mr r3, r28
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80366E54_00000B1C
    addi r3, r28, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r27, r3, 0x64
    bne lbl_fn_80366E54_00000B1C
    mr r3, r28
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80366E54_00000B1C
    addi r3, r28, 0x6
    bl fn_80684600
    add r27, r27, r3
lbl_fn_80366E54_00000B1C:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_80366E54_00000B50
lbl_fn_80366E54_00000B2C:
    cmpw r27, r0
    bne lbl_fn_80366E54_00000B48
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r27, r3, r0
    b lbl_fn_80366E54_00000B60
lbl_fn_80366E54_00000B48:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_80366E54_00000B50:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_80366E54_00000B2C
    li r27, 0x0
lbl_fn_80366E54_00000B60:
    cmpwi r27, 0x0
    bne lbl_fn_80366E54_00000BA4
    lwz r4, 0x48(r31)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000C08
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000C08
    lwz r5, 0x10d0(r30)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r29, r4, r3
    b lbl_fn_80366E54_00000C08
lbl_fn_80366E54_00000BA4:
    lwz r5, 0x4(r27)
    cmplwi r5, 0xfff
    ble lbl_fn_80366E54_00000BE8
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80366E54_00000BE0
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80366E54_00000BE0:
    li r5, 0x0
    b lbl_fn_80366E54_00000BF4
lbl_fn_80366E54_00000BE8:
    slwi r0, r5, 2
    add r3, r30, r0
    lwz r5, 0x10e4(r3)
lbl_fn_80366E54_00000BF4:
    lwz r0, 0x8(r27)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r29, r4, r3
lbl_fn_80366E54_00000C08:
    cmpwi r29, 0x0
    beq lbl_fn_80366E54_00000CD4
    lwz r3, lbl_8087F8A0
    lwz r25, 0x48(r3)
    cmpwi r25, 0x0
    beq lbl_fn_80366E54_00000C9C
    lwz r3, 0x48(r30)
    lwz r4, 0x4c(r30)
    lwz r5, 0x50(r30)
    bl fn_8021771C
    mr r31, r3
    lwz r25, 0x934(r25)
    lwz r3, 0x48(r30)
    lwz r4, 0x4c(r30)
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80366E54_00000C9C
    cmpwi r31, 0x0
    beq lbl_fn_80366E54_00000C9C
    xoris r4, r25, 0x8000
    lis r0, 0x4330
    stw r4, 0x30c(r1)
    lis r5, lbl_8074DBE8@ha
    lfd f2, lbl_8074DBE8@l(r5)
    stw r0, 0x308(r1)
    lfs f0, 0xc4(r31)
    lfd f1, 0x308(r1)
    lwz r4, 0xc0(r31)
    fsubs f1, f1, f2
    lwz r3, 0x54(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x310(r1)
    lwz r0, 0x314(r1)
    add r0, r4, r0
    subf r0, r3, r0
    stw r0, 0x1548(r30)
lbl_fn_80366E54_00000C9C:
    lwz r3, lbl_8087F408
    lwz r25, 0x48(r3)
    b lbl_fn_80366E54_00000CCC
lbl_fn_80366E54_00000CA8:
    lwz r0, 0x137c(r25)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_80366E54_00000CC8
    addi r3, r25, 0x7d4
    bl fn_8012B3E8
    addi r3, r25, 0x7d4
    bl fn_8012B988
lbl_fn_80366E54_00000CC8:
    lwz r25, 0x14ac(r25)
lbl_fn_80366E54_00000CCC:
    cmpwi r25, 0x0
    bne lbl_fn_80366E54_00000CA8
lbl_fn_80366E54_00000CD4:
    li r0, 0xf
    stw r0, lbl_8087DD64
    li r3, 0x1
    b lbl_fn_80366E54_00000CE8
lbl_fn_80366E54_00000CE4:
    li r3, 0x0
lbl_fn_80366E54_00000CE8:
    addi r11, r1, 0x340
    bl _restgpr_25
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

asm void fn_80367A40(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_24
    cmpwi r4, 0x0
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r25, r3
    mr r26, r4
    li r24, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_80367A40_00000EB4
    lwz r4, lbl_8087F0A8
    lwz r0, 0x284(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80367A40_00000ED4
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80367A40_00000ED4
    lwz r0, 0x10d4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80367A40_00000ED4
    lis r3, lbl_8074DBE8@ha
    li r27, 0x0
    lfd f30, lbl_8074DBE8@l(r3)
    li r24, 0x0
lbl_fn_80367A40_00000D7C:
    mr r3, r27
    bl fn_80219544
    bl fn_8020924C
    lwz r3, 0x14(r3)
    bl fn_8020A81C
    lwz r3, 0x10d4(r25)
    addi r27, r27, 0x1
    lwz r0, lbl_8087F4F0
    cmpwi r27, 0x7
    lwz r4, 0x54(r3)
    add r3, r0, r24
    addi r24, r24, 0x43c
    subi r0, r4, 0x4
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f30
    stfs f0, 0x669c(r3)
    blt lbl_fn_80367A40_00000D7C
    lis r4, lbl_807C8458@ha
    lwz r0, lbl_807C8458@l(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80367A40_00000EAC
    lis r3, lbl_8074DBE8@ha
    addi r24, r4, lbl_807C8458@l
    lfd f30, lbl_8074DBE8@l(r3)
    li r28, 0x0
    li r27, 0x0
lbl_fn_80367A40_00000DEC:
    mr r3, r28
    bl fn_80219544
    bl fn_8020924C
    lwz r3, 0x14(r3)
    bl fn_8020A81C
    lwz r0, 0x28(r24)
    addi r28, r28, 0x1
    lwz r3, lbl_8087F4F0
    cmpwi r28, 0x7
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    add r3, r3, r27
    addi r27, r27, 0x43c
    lfd f1, 0x10(r1)
    lfs f0, 0x669c(r3)
    fsubs f1, f1, f30
    fadds f0, f0, f1
    stfs f0, 0x669c(r3)
    blt lbl_fn_80367A40_00000DEC
    lwz r4, lbl_8087F408
    lis r3, lbl_8074DBE8@ha
    lis r24, lbl_807C8458@ha
    lfd f30, lbl_8074DBE8@l(r3)
    lwz r27, 0x48(r4)
    addi r24, r24, lbl_807C8458@l
    b lbl_fn_80367A40_00000EA4
lbl_fn_80367A40_00000E54:
    lwz r3, 0x5c(r27)
    lwz r3, 0xc8(r3)
    bl fn_8020FCE8
    cmpwi r3, 0x0
    beq lbl_fn_80367A40_00000EA0
    lwz r0, 0x2c(r24)
    addi r3, r27, 0x7d4
    lfs f0, 0x984(r27)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f30
    fadds f0, f0, f1
    stfs f0, 0x984(r27)
    bl fn_8012B3E8
    addi r3, r27, 0x7d4
    bl fn_8012B988
    addi r3, r27, 0x7d4
    bl fn_8012D8B8
lbl_fn_80367A40_00000EA0:
    lwz r27, 0x14ac(r27)
lbl_fn_80367A40_00000EA4:
    cmpwi r27, 0x0
    bne lbl_fn_80367A40_00000E54
lbl_fn_80367A40_00000EAC:
    li r24, 0x1
    b lbl_fn_80367A40_00000ED4
lbl_fn_80367A40_00000EB4:
    lwz r3, 0x5540(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80367A40_00000ED4
    bl fn_803BAD6C
    lwz r0, 0x10d4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80367A40_00000ED4
    li r24, 0x1
lbl_fn_80367A40_00000ED4:
    cmpwi r24, 0x0
    beq lbl_fn_80367A40_000013A4
    cmpwi r26, 0x0
    beq lbl_fn_80367A40_00001004
    lis r3, lbl_8074DBE8@ha
    lfs f30, lbl_8088571C
    lfd f31, lbl_8074DBE8@l(r3)
    li r28, 0x0
    li r27, 0x0
lbl_fn_80367A40_00000EF8:
    mr r3, r28
    bl fn_80219544
    bl fn_8020924C
    lwz r3, 0x14(r3)
    bl fn_8020A81C
    lwz r4, lbl_8087F4F0
    lwz r0, 0x78(r3)
    li r3, 0x64
    add r26, r4, r27
    lfs f0, 0x669c(r26)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    add r29, r4, r0
    bl fn_8020FCE8
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_80367A40_00000FF4
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    stfs f0, 0x48(r3)
    lwz r3, 0x44(r3)
    bl fn_800A6BDC
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    fmuls f1, f1, f30
    lfd f0, 0x8(r1)
    stfs f1, 0x66a0(r26)
    fsubs f0, f0, f31
    stfs f0, 0xc(r24)
    lwz r3, 0x8(r24)
    bl fn_800A6BDC
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    fmuls f1, f1, f30
    lfd f0, 0x10(r1)
    stfs f1, 0x66a4(r26)
    fsubs f0, f0, f31
    stfs f0, 0x18(r24)
    lwz r3, 0x14(r24)
    bl fn_800A6BDC
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    fmuls f1, f1, f30
    lfd f0, 0x8(r1)
    stfs f1, 0x66a8(r26)
    fsubs f0, f0, f31
    stfs f0, 0x24(r24)
    lwz r3, 0x20(r24)
    bl fn_800A6BDC
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    fmuls f1, f1, f30
    lfd f0, 0x10(r1)
    stfs f1, 0x66ac(r26)
    fsubs f0, f0, f31
    stfs f0, 0x30(r24)
    lwz r3, 0x2c(r24)
    bl fn_800A6BDC
    fmuls f0, f1, f30
    stfs f0, 0x66b0(r26)
lbl_fn_80367A40_00000FF4:
    addi r28, r28, 0x1
    addi r27, r27, 0x43c
    cmpwi r28, 0x7
    blt lbl_fn_80367A40_00000EF8
lbl_fn_80367A40_00001004:
    lwz r3, lbl_8087F8A0
    li r28, 0x18
    li r29, 0xf
    li r30, 0x10
    lwz r26, 0x48(r3)
    li r31, 0x14
    li r24, 0x0
    b lbl_fn_80367A40_0000139C
lbl_fn_80367A40_00001024:
    lwz r3, 0x50(r26)
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_80367A40_00001398
    cmpwi r3, 0x7
    bge lbl_fn_80367A40_00001398
    mulli r27, r3, 0x43c
    lwz r0, lbl_8087F4F0
    addi r3, r26, 0x7d4
    add r4, r0, r27
    lwz r0, 0x6694(r4)
    stw r0, 0x97c(r26)
    lwz r0, 0x6698(r4)
    stw r0, 0x980(r26)
    lfs f0, 0x669c(r4)
    stfs f0, 0x984(r26)
    lfs f0, 0x66a0(r4)
    stfs f0, 0x988(r26)
    lfs f0, 0x66a4(r4)
    stfs f0, 0x98c(r26)
    lfs f0, 0x66a8(r4)
    stfs f0, 0x990(r26)
    lfs f0, 0x66ac(r4)
    stfs f0, 0x994(r26)
    lfs f0, 0x66b0(r4)
    stfs f0, 0x998(r26)
    lwz r0, 0x66b4(r4)
    stw r0, 0x99c(r26)
    lwz r0, 0x66bc(r4)
    lwz r5, 0x66b8(r4)
    stw r5, 0x9a0(r26)
    stw r0, 0x9a4(r26)
    lwz r0, 0x66c4(r4)
    lwz r5, 0x66c0(r4)
    stw r5, 0x9a8(r26)
    stw r0, 0x9ac(r26)
    lwz r0, 0x66cc(r4)
    lwz r5, 0x66c8(r4)
    stw r5, 0x9b0(r26)
    stw r0, 0x9b4(r26)
    lwz r0, 0x66d4(r4)
    lwz r5, 0x66d0(r4)
    stw r5, 0x9b8(r26)
    stw r0, 0x9bc(r26)
    lwz r0, 0x66dc(r4)
    lwz r5, 0x66d8(r4)
    stw r5, 0x9c0(r26)
    stw r0, 0x9c4(r26)
    lwz r0, 0x66e4(r4)
    lwz r5, 0x66e0(r4)
    stw r5, 0x9c8(r26)
    stw r0, 0x9cc(r26)
    lwz r0, 0x66ec(r4)
    lwz r5, 0x66e8(r4)
    stw r5, 0x9d0(r26)
    stw r0, 0x9d4(r26)
    lwz r0, 0x66f4(r4)
    lwz r5, 0x66f0(r4)
    stw r5, 0x9d8(r26)
    stw r0, 0x9dc(r26)
    lwz r0, 0x66fc(r4)
    lwz r5, 0x66f8(r4)
    stw r5, 0x9e0(r26)
    stw r0, 0x9e4(r26)
    lwz r0, 0x6704(r4)
    lwz r5, 0x6700(r4)
    stw r5, 0x9e8(r26)
    stw r0, 0x9ec(r26)
    lwz r0, 0x670c(r4)
    lwz r4, 0x6708(r4)
    stw r4, 0x9f0(r26)
    stw r0, 0x9f4(r26)
    bl fn_8012B3E8
    addi r3, r26, 0x7d4
    bl fn_8012B988
    addi r3, r26, 0x7d4
    bl fn_8012D8B8
    lwz r0, lbl_8087F4F0
    addi r5, r26, 0x7f8
    lfs f0, 0x7d8(r26)
    add r3, r0, r27
    stfs f0, 0x64f0(r3)
    addi r6, r3, 0x6510
    lfs f0, 0x7dc(r26)
    stfs f0, 0x64f4(r3)
    lwz r0, 0x7e0(r26)
    stw r0, 0x64f8(r3)
    lwz r0, 0x7e4(r26)
    stw r0, 0x64fc(r3)
    lwz r0, 0x7e8(r26)
    stw r0, 0x6500(r3)
    lwz r0, 0x7ec(r26)
    stw r0, 0x6504(r3)
    lwz r0, 0x7f0(r26)
    stw r0, 0x6508(r3)
    lfs f0, 0x7f4(r26)
    stfs f0, 0x650c(r3)
    lfs f0, 0x7f8(r26)
    stfs f0, 0x6510(r3)
    mtctr r28
lbl_fn_80367A40_000011B4:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_80367A40_000011B4
    addi r6, r3, 0x65d0
    addi r5, r26, 0x8b8
    mtctr r28
lbl_fn_80367A40_000011D4:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_80367A40_000011D4
    addi r7, r3, 0x6690
    addi r5, r26, 0x978
    mtctr r29
lbl_fn_80367A40_000011F4:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_80367A40_000011F4
    lwz r0, 0x4(r5)
    addi r6, r3, 0x6734
    stw r0, 0x4(r7)
    addi r5, r26, 0xa1c
    lwz r0, 0x9f8(r26)
    stw r0, 0x6710(r3)
    lfs f0, 0x9fc(r26)
    stfs f0, 0x6714(r3)
    lwz r0, 0xa00(r26)
    stw r0, 0x6718(r3)
    lbz r0, 0xa04(r26)
    stb r0, 0x671c(r3)
    lbz r0, 0xa05(r26)
    stb r0, 0x671d(r3)
    lwz r0, 0xa0a(r26)
    lwz r4, 0xa06(r26)
    stw r4, 0x671e(r3)
    stw r0, 0x6722(r3)
    lwz r0, 0xa0e(r26)
    stw r0, 0x6726(r3)
    lhz r0, 0xa12(r26)
    sth r0, 0x672a(r3)
    lwz r0, 0xa14(r26)
    stw r0, 0x672c(r3)
    lfs f0, 0xa18(r26)
    stfs f0, 0x6730(r3)
    lwz r0, 0xa1c(r26)
    stw r0, 0x6734(r3)
    mtctr r30
lbl_fn_80367A40_0000127C:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_80367A40_0000127C
    lwz r0, 0xaa4(r26)
    addi r7, r3, 0x67ec
    lwz r4, 0xaa0(r26)
    addi r5, r26, 0xad4
    stw r4, 0x67b8(r3)
    stw r0, 0x67bc(r3)
    lwz r0, 0xaac(r26)
    lwz r4, 0xaa8(r26)
    stw r4, 0x67c0(r3)
    stw r0, 0x67c4(r3)
    lwz r0, 0xab4(r26)
    lwz r4, 0xab0(r26)
    stw r4, 0x67c8(r3)
    stw r0, 0x67cc(r3)
    lwz r0, 0xabc(r26)
    lwz r4, 0xab8(r26)
    stw r4, 0x67d0(r3)
    stw r0, 0x67d4(r3)
    lwz r0, 0xac0(r26)
    stw r0, 0x67d8(r3)
    lwz r0, 0xac4(r26)
    stw r0, 0x67dc(r3)
    lfs f0, 0xac8(r26)
    stfs f0, 0x67e0(r3)
    lfs f0, 0xacc(r26)
    stfs f0, 0x67e4(r3)
    lfs f0, 0xad0(r26)
    stfs f0, 0x67e8(r3)
    lwz r0, 0xad4(r26)
    stw r0, 0x67ec(r3)
    mtctr r29
lbl_fn_80367A40_0000130C:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_80367A40_0000130C
    lwz r0, 0x4(r5)
    addi r6, r3, 0x6868
    stw r0, 0x4(r7)
    addi r5, r26, 0xb50
    mtctr r31
lbl_fn_80367A40_00001334:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_80367A40_00001334
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lwz r0, 0xbf8(r26)
    stw r0, 0x6910(r3)
    lfs f0, 0xbfc(r26)
    stfs f0, 0x6914(r3)
    lfs f0, 0xc00(r26)
    stfs f0, 0x6918(r3)
    lwz r0, 0xc04(r26)
    stw r0, 0x691c(r3)
    lfs f0, 0xc08(r26)
    stfs f0, 0x6920(r3)
    lfs f0, 0xc0c(r26)
    stfs f0, 0x6924(r3)
    lwz r0, lbl_8087F4F0
    add r3, r0, r27
    stw r24, 0x67dc(r3)
    lwz r0, lbl_8087F4F0
    add r3, r0, r27
    stw r24, 0x686c(r3)
lbl_fn_80367A40_00001398:
    lwz r26, 0x14ac(r26)
lbl_fn_80367A40_0000139C:
    cmpwi r26, 0x0
    bne lbl_fn_80367A40_00001024
lbl_fn_80367A40_000013A4:
    lwz r4, lbl_8087F8A0
    lis r3, lbl_8074DBE8@ha
    lfd f30, lbl_8074DBE8@l(r3)
    lwz r26, 0x48(r4)
    lfs f31, lbl_80885748
    b lbl_fn_80367A40_000014CC
lbl_fn_80367A40_000013BC:
    lwz r3, 0x50(r26)
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_80367A40_000013D4
    cmpwi r3, 0x7
    blt lbl_fn_80367A40_000014C8
lbl_fn_80367A40_000013D4:
    cmpwi r3, 0x9
    beq lbl_fn_80367A40_000014C8
    cmpwi r3, 0xa
    beq lbl_fn_80367A40_000014C8
    cmpwi r3, 0xc
    beq lbl_fn_80367A40_000014C8
    lwz r4, 0x10d4(r25)
    cmpwi r4, 0x0
    beq lbl_fn_80367A40_000014B0
    lwz r3, 0x5c(r26)
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80367A40_000014B0
    lwz r0, 0x1550(r25)
    cmpwi r0, 0x0
    ble lbl_fn_80367A40_0000148C
    lwz r0, 0x58(r4)
    li r3, 0x3c
    lwz r4, lbl_8087F0A8
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r0, 0xd4(r4)
    lfd f0, 0x8(r1)
    slwi r0, r0, 5
    add r4, r4, r0
    fsubs f1, f0, f30
    lfs f0, 0xd8(r4)
    lwz r0, 0xdc(r4)
    fmadds f0, f1, f0, f31
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    add r4, r4, r0
    addi r0, r4, 0x4
    cmpwi r0, 0x3c
    blt lbl_fn_80367A40_00001468
    mr r3, r0
lbl_fn_80367A40_00001468:
    subi r0, r3, 0x4
    lfs f0, 0x984(r26)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f30
    fadds f0, f0, f1
    stfs f0, 0x984(r26)
    b lbl_fn_80367A40_000014B0
lbl_fn_80367A40_0000148C:
    lwz r3, 0x54(r4)
    lfs f0, 0x984(r26)
    subi r0, r3, 0x4
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f30
    fadds f0, f0, f1
    stfs f0, 0x984(r26)
lbl_fn_80367A40_000014B0:
    addi r3, r26, 0x7d4
    bl fn_8012B3E8
    addi r3, r26, 0x7d4
    bl fn_8012B988
    addi r3, r26, 0x7d4
    bl fn_8012D8B8
lbl_fn_80367A40_000014C8:
    lwz r26, 0x14ac(r26)
lbl_fn_80367A40_000014CC:
    cmpwi r26, 0x0
    bne lbl_fn_80367A40_000013BC
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8036823C(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8036823C_00001510
    li r3, 0x1
    blr
lbl_fn_8036823C_00001510:
    cmpwi r0, 0x2
    bne lbl_fn_8036823C_00001538
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x44
    bne lbl_fn_8036823C_00001538
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8036823C_00001538
    li r3, 0x1
    blr
lbl_fn_8036823C_00001538:
    li r3, 0x0
    blr
}
