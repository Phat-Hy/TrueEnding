#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void fn_800DC500(void);
extern void fn_80119ECC(void);
extern void fn_8012AE50(void);
extern void fn_8012AFE8(void);
extern void fn_80206B14(void);
extern void fn_80206B9C(void);
extern void fn_80206BE4(void);
extern void fn_8020ED84(void);
extern void fn_8020EF04(void);
extern void fn_8020EF80(void);
extern void fn_802114E0(void);
extern void fn_8021150C(void);
extern void fn_80219558(void);
extern void fn_803608A4(void);
extern void fn_803608A8(void);
extern void fn_80373148(void);
extern void fn_8037D758(void);
extern void fn_8037D808(void);
extern void fn_803B9804(void);
extern void fn_803B9C98(void);
extern void fn_803B9D78(void);
extern void fn_803BA120(void);
extern void fn_803BA408(void);
extern void fn_803BA620(void);
extern void fn_803BAD6C(void);
extern void fn_803BAEF8(void);
extern void fn_803BB0E0(void);
extern void fn_803BB248(void);
extern void fn_803BB3C0(void);
extern void fn_803BB584(void);
extern void fn_803BC2D4(void);
extern void fn_803CE768(void);
extern void fn_803CE7E0(void);
extern void fn_804A1C4C(void);
extern void fn_804A1D2C(void);
extern void fn_8054A340(void);
extern void fn_8057F19C(void);
extern void fn_8057F1B8(void);
extern void fn_806958E0(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087DD64;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F488;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_80885CA4;
extern u32 lbl_80885CAC;
extern u32 lbl_80885CB0;

/* Function declarations */
void fn_803BD0FC(void);
void fn_803BD22C(void);
void fn_803BD2B0(void);
void fn_803BD49C(void);
void fn_803BD6C0(void);
void fn_803BD79C(void);
void fn_803BDB60(void);
void fn_803BDEE4(void);
void fn_803BE550(void);
void fn_803BE590(void);
void fn_803BE670(void);
void fn_803BE6B8(void);
void fn_803BE850(void);
void fn_803BE854(void);
void fn_803BE8B4(void);
void fn_803BE8C0(void);
void fn_803BEA08(void);

asm void fn_803BD0FC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r27, r3
    mr r31, r4
    mr r3, r5
    mr r24, r6
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_803BD0FC_00000118
    cmpwi r3, 0x7
    bge lbl_fn_803BD0FC_00000118
    slwi r5, r3, 6
    addis r0, r27, 0x1
    add r3, r0, r5
    lhz r0, 0x8(r31)
    subi r6, r3, 0x6f0c
    slwi r4, r24, 3
    add r3, r6, r4
    lwzx r4, r6, r4
    lwz r3, 0x4(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r24, 0x0(r31)
    cmpwi r3, 0x0
    stw r4, 0x4(r31)
    sth r0, 0x8(r31)
    blt lbl_fn_803BD0FC_00000110
    mulli r4, r3, 0x2d4
    add r3, r27, r5
    clrlwi r0, r0, 16
    lwz r25, 0x1004(r3)
    lwz r26, 0x1008(r3)
    add r4, r27, r4
    lwz r24, 0x11d0(r4)
    ori r0, r0, 0x8000
    lwz r27, 0x100c(r3)
    lwz r28, 0x1010(r3)
    lwz r29, 0x1014(r3)
    lwz r30, 0x1018(r3)
    lwz r12, 0x101c(r3)
    lwz r11, 0x1020(r3)
    lwz r10, 0x1024(r3)
    lwz r9, 0x1028(r3)
    lwz r8, 0x102c(r3)
    lwz r7, 0x1030(r3)
    lwz r6, 0x1034(r3)
    lwz r5, 0x1038(r3)
    lwz r4, 0x103c(r3)
    lwz r3, 0x1040(r3)
    stw r24, 0xc(r31)
    stw r25, 0x10(r31)
    stw r26, 0x14(r31)
    stw r27, 0x18(r31)
    stw r28, 0x1c(r31)
    stw r29, 0x20(r31)
    stw r30, 0x24(r31)
    stw r12, 0x28(r31)
    stw r11, 0x2c(r31)
    stw r10, 0x30(r31)
    stw r9, 0x34(r31)
    stw r8, 0x38(r31)
    stw r7, 0x3c(r31)
    stw r6, 0x40(r31)
    stw r5, 0x44(r31)
    stw r4, 0x48(r31)
    stw r3, 0x4c(r31)
    sth r0, 0x8(r31)
lbl_fn_803BD0FC_00000110:
    li r3, 0x1
    b lbl_fn_803BD0FC_0000011C
lbl_fn_803BD0FC_00000118:
    li r3, 0x0
lbl_fn_803BD0FC_0000011C:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803BD22C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r5
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_803BD22C_00000194
    cmpwi r3, 0x7
    bge lbl_fn_803BD22C_00000194
    slwi r0, r3, 6
    addis r3, r29, 0x1
    add r3, r3, r0
    stw r31, 0x0(r30)
    slwi r0, r31, 3
    add r3, r3, r0
    lwz r0, -0x6eec(r3)
    li r3, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_803BD22C_00000198
lbl_fn_803BD22C_00000194:
    li r3, 0x0
lbl_fn_803BD22C_00000198:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BD2B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    mr r3, r28
    bl fn_8021150C
    cmpwi r3, 0x0
    mr r30, r3
    bge lbl_fn_803BD2B0_000001F8
    li r3, 0x0
    b lbl_fn_803BD2B0_00000380
lbl_fn_803BD2B0_000001F8:
    mr r3, r28
    bl fn_80206B9C
    cmpwi r3, 0x0
    bne lbl_fn_803BD2B0_00000218
    mr r3, r28
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_803BD2B0_00000234
lbl_fn_803BD2B0_00000218:
    mr r3, r31
    mr r4, r28
    bl fn_803BD49C
    add r0, r3, r29
    cmpwi r0, 0xa
    blt lbl_fn_803BD2B0_00000234
    subfic r29, r3, 0xa
lbl_fn_803BD2B0_00000234:
    cmpwi r29, 0x0
    bgt lbl_fn_803BD2B0_00000244
    li r3, 0x0
    b lbl_fn_803BD2B0_00000380
lbl_fn_803BD2B0_00000244:
    cmpwi r30, 0x500
    bge lbl_fn_803BD2B0_00000354
    slwi r6, r30, 3
    li r3, 0x63
    add r4, r31, r6
    lbz r0, 0x60f8(r4)
    add r0, r29, r0
    cmpwi r0, 0x63
    bge lbl_fn_803BD2B0_0000026C
    mr r3, r0
lbl_fn_803BD2B0_0000026C:
    li r0, 0x60
    mr r5, r31
    stb r3, 0x60f8(r4)
    mtctr r0
lbl_fn_803BD2B0_0000027C:
    lhz r3, 0x60fa(r5)
    addi r0, r3, 0x1
    sth r0, 0x60fa(r5)
    lhz r3, 0x6102(r5)
    addi r0, r3, 0x1
    sth r0, 0x6102(r5)
    lhz r3, 0x610a(r5)
    addi r0, r3, 0x1
    sth r0, 0x610a(r5)
    lhz r3, 0x6112(r5)
    addi r0, r3, 0x1
    sth r0, 0x6112(r5)
    lhz r3, 0x611a(r5)
    addi r0, r3, 0x1
    sth r0, 0x611a(r5)
    lhz r3, 0x6122(r5)
    addi r0, r3, 0x1
    sth r0, 0x6122(r5)
    lhz r3, 0x612a(r5)
    addi r0, r3, 0x1
    sth r0, 0x612a(r5)
    lhz r3, 0x6132(r5)
    addi r0, r3, 0x1
    sth r0, 0x6132(r5)
    lhz r3, 0x613a(r5)
    addi r0, r3, 0x1
    sth r0, 0x613a(r5)
    lhz r3, 0x6142(r5)
    addi r0, r3, 0x1
    sth r0, 0x6142(r5)
    lhz r3, 0x614a(r5)
    addi r0, r3, 0x1
    sth r0, 0x614a(r5)
    lhz r3, 0x6152(r5)
    addi r0, r3, 0x1
    sth r0, 0x6152(r5)
    lhz r3, 0x615a(r5)
    addi r0, r3, 0x1
    sth r0, 0x615a(r5)
    lhz r3, 0x6162(r5)
    addi r0, r3, 0x1
    sth r0, 0x6162(r5)
    lhz r3, 0x616a(r5)
    addi r0, r3, 0x1
    sth r0, 0x616a(r5)
    lhz r3, 0x6172(r5)
    addi r0, r3, 0x1
    sth r0, 0x6172(r5)
    addi r5, r5, 0x80
    bdnz lbl_fn_803BD2B0_0000027C
    add r3, r31, r6
    li r0, 0x0
    sth r0, 0x60fa(r3)
    b lbl_fn_803BD2B0_0000037C
lbl_fn_803BD2B0_00000354:
    subi r3, r30, 0x500
    li r0, 0x63
    mulli r3, r3, 0xc
    add r4, r31, r3
    lhz r3, 0x408(r4)
    add r3, r29, r3
    cmpwi r3, 0x63
    bge lbl_fn_803BD2B0_00000378
    mr r0, r3
lbl_fn_803BD2B0_00000378:
    sth r0, 0x408(r4)
lbl_fn_803BD2B0_0000037C:
    li r3, 0x1
lbl_fn_803BD2B0_00000380:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BD49C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x431c
    li r9, 0x0
    stw r0, 0x34(r1)
    li r0, 0x180
    subi r6, r5, 0x217d
    stmw r23, 0xc(r1)
    mr r29, r3
    lis r3, 0xf
    mr r30, r4
    mr r8, r29
    li r31, 0x0
    addi r3, r3, 0x4240
    mtctr r0
lbl_fn_803BD49C_000003DC:
    lwz r7, 0x60f4(r8)
    mulhw r0, r6, r7
    srawi r0, r0, 18
    srwi r5, r0, 31
    add r0, r0, r5
    mullw r0, r0, r3
    subf r0, r0, r7
    cmpw r4, r0
    bne lbl_fn_803BD49C_00000408
    lbz r0, 0x60f8(r8)
    add r31, r31, r0
lbl_fn_803BD49C_00000408:
    lwz r7, 0x60fc(r8)
    mulhw r0, r6, r7
    srawi r0, r0, 18
    srwi r5, r0, 31
    add r0, r0, r5
    mullw r0, r0, r3
    subf r0, r0, r7
    cmpw r4, r0
    bne lbl_fn_803BD49C_00000434
    lbz r0, 0x6100(r8)
    add r31, r31, r0
lbl_fn_803BD49C_00000434:
    lwz r7, 0x6104(r8)
    mulhw r0, r6, r7
    srawi r0, r0, 18
    srwi r5, r0, 31
    add r0, r0, r5
    mullw r0, r0, r3
    subf r0, r0, r7
    cmpw r4, r0
    bne lbl_fn_803BD49C_00000460
    lbz r0, 0x6108(r8)
    add r31, r31, r0
lbl_fn_803BD49C_00000460:
    lwz r7, 0x610c(r8)
    mulhw r0, r6, r7
    srawi r0, r0, 18
    srwi r5, r0, 31
    add r0, r0, r5
    mullw r0, r0, r3
    subf r0, r0, r7
    cmpw r4, r0
    bne lbl_fn_803BD49C_0000048C
    lbz r0, 0x6110(r8)
    add r31, r31, r0
lbl_fn_803BD49C_0000048C:
    addi r8, r8, 0x20
    addi r9, r9, 0x3
    bdnz lbl_fn_803BD49C_000003DC
    mr r3, r30
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_803BD49C_00000544
    addis r26, r29, 0x1
    li r24, 0x0
    lis r27, 0x431c
    lis r28, 0xf
    subi r26, r26, 0x6f0c
lbl_fn_803BD49C_000004BC:
    mr r25, r26
    li r23, 0x0
lbl_fn_803BD49C_000004C4:
    lwz r4, 0x20(r25)
    li r3, 0x0
    bl fn_80206B14
    cmpwi r24, 0x0
    bne lbl_fn_803BD49C_000004EC
    cmpwi r23, 0x1
    bne lbl_fn_803BD49C_000004EC
    lwz r4, 0x20(r25)
    li r3, 0x1
    bl fn_80206B14
lbl_fn_803BD49C_000004EC:
    cmpwi r3, 0x0
    beq lbl_fn_803BD49C_00000524
    bl fn_80206BE4
    subi r4, r27, 0x217d
    addi r0, r28, 0x4240
    mulhw r4, r4, r3
    srawi r4, r4, 18
    srwi r5, r4, 31
    add r4, r4, r5
    mullw r0, r4, r0
    subf r0, r0, r3
    cmpw r30, r0
    bne lbl_fn_803BD49C_00000524
    addi r31, r31, 0x1
lbl_fn_803BD49C_00000524:
    addi r23, r23, 0x1
    addi r25, r25, 0x8
    cmpwi r23, 0x2
    blt lbl_fn_803BD49C_000004C4
    addi r24, r24, 0x1
    addi r26, r26, 0x40
    cmpwi r24, 0x7
    blt lbl_fn_803BD49C_000004BC
lbl_fn_803BD49C_00000544:
    mr r3, r30
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_803BD49C_000005AC
    addis r27, r29, 0x1
    li r23, 0x0
    subi r27, r27, 0x6f0c
lbl_fn_803BD49C_00000560:
    mr r28, r27
    li r24, 0x0
lbl_fn_803BD49C_00000568:
    lwz r4, 0x0(r28)
    mr r3, r24
    bl fn_8020ED84
    cmpwi r3, 0x0
    beq lbl_fn_803BD49C_0000058C
    bl fn_8020EF80
    cmpw r30, r3
    bne lbl_fn_803BD49C_0000058C
    addi r31, r31, 0x1
lbl_fn_803BD49C_0000058C:
    addi r24, r24, 0x1
    addi r28, r28, 0x8
    cmpwi r24, 0x2
    blt lbl_fn_803BD49C_00000568
    addi r23, r23, 0x1
    addi r27, r27, 0x40
    cmpwi r23, 0x7
    blt lbl_fn_803BD49C_00000560
lbl_fn_803BD49C_000005AC:
    mr r3, r31
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803BD6C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bne lbl_fn_803BD6C0_00000680
    addis r5, r3, 0x1
    li r4, 0x1d
    li r0, 0x1f8
    stw r4, -0x6e8c(r5)
    mr r30, r3
    mr r29, r3
    stw r4, -0x6e84(r5)
    li r28, 0x0
    li r31, 0x0
    stw r4, -0x6e7c(r5)
    stw r4, -0x6e74(r5)
    stw r0, -0x6e6c(r5)
lbl_fn_803BD6C0_00000618:
    mr r3, r28
    bl fn_802114E0
    cmpwi r3, 0x0
    beq lbl_fn_803BD6C0_0000066C
    lha r0, 0xbc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803BD6C0_0000066C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1c2
    beq lbl_fn_803BD6C0_0000066C
    cmpwi r0, 0x1c3
    beq lbl_fn_803BD6C0_0000066C
    cmpwi r0, 0x14a
    beq lbl_fn_803BD6C0_0000066C
    cmpwi r0, 0x19d
    beq lbl_fn_803BD6C0_0000066C
    cmpwi r28, 0x500
    bge lbl_fn_803BD6C0_00000668
    stb r31, 0x60f8(r30)
    b lbl_fn_803BD6C0_0000066C
lbl_fn_803BD6C0_00000668:
    sth r31, -0x37f8(r29)
lbl_fn_803BD6C0_0000066C:
    addi r28, r28, 0x1
    addi r29, r29, 0xc
    cmpwi r28, 0x600
    addi r30, r30, 0x8
    blt lbl_fn_803BD6C0_00000618
lbl_fn_803BD6C0_00000680:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BD79C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stw r31, 0xfc(r1)
    mr r31, r3
    lwz r0, lbl_8087DD64
    cmpwi r0, 0x7
    blt lbl_fn_803BD79C_000009E0
    lwz r4, lbl_8087F0A8
    li r0, 0x1e
    addi r6, r1, 0x4
    addi r5, r4, 0x240
    mtctr r0
lbl_fn_803BD79C_000006D4:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BD79C_000006D4
    lwz r0, 0x4(r3)
    lwz r5, lbl_8087F0A8
    clrlwi r0, r0, 31
    stw r0, 0x54(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x244(r5)
    lfs f0, 0xc(r1)
    stfs f0, 0x248(r5)
    lfs f0, 0x10(r1)
    stfs f0, 0x24c(r5)
    lwz r0, 0x14(r1)
    stw r0, 0x250(r5)
    lwz r0, 0x18(r1)
    stw r0, 0x254(r5)
    lfs f0, 0x1c(r1)
    stfs f0, 0x258(r5)
    lwz r0, 0x20(r1)
    stw r0, 0x25c(r5)
    lwz r0, 0x24(r1)
    stw r0, 0x260(r5)
    lfs f0, 0x28(r1)
    stfs f0, 0x264(r5)
    lfs f0, 0x2c(r1)
    stfs f0, 0x268(r5)
    lfs f0, 0x30(r1)
    stfs f0, 0x26c(r5)
    lwz r0, 0x34(r1)
    stw r0, 0x270(r5)
    lwz r0, 0x38(r1)
    stw r0, 0x274(r5)
    lwz r0, 0x3c(r1)
    stw r0, 0x278(r5)
    lwz r0, 0x40(r1)
    stw r0, 0x27c(r5)
    lwz r0, 0x44(r1)
    stw r0, 0x280(r5)
    lwz r0, 0x48(r1)
    stw r0, 0x284(r5)
    lwz r0, 0x4c(r1)
    stw r0, 0x288(r5)
    lwz r0, 0x50(r1)
    stw r0, 0x28c(r5)
    lwz r0, 0x54(r1)
    stw r0, 0x290(r5)
    lwz r0, 0x58(r1)
    stw r0, 0x294(r5)
    lwz r0, 0x5c(r1)
    stw r0, 0x298(r5)
    lwz r0, 0x60(r1)
    stw r0, 0x29c(r5)
    lwz r0, 0x64(r1)
    stw r0, 0x2a0(r5)
    lfs f0, 0x68(r1)
    stfs f0, 0x2a4(r5)
    lfs f0, 0x6c(r1)
    stfs f0, 0x2a8(r5)
    lfs f0, 0x70(r1)
    stfs f0, 0x2ac(r5)
    lwz r0, 0x74(r1)
    stw r0, 0x2b0(r5)
    lfs f0, 0x78(r1)
    stfs f0, 0x2b4(r5)
    lfs f0, 0x7c(r1)
    stfs f0, 0x2b8(r5)
    lfs f0, 0x80(r1)
    stfs f0, 0x2bc(r5)
    lwz r0, 0x84(r1)
    stw r0, 0x2c0(r5)
    lwz r0, 0x88(r1)
    stw r0, 0x2c4(r5)
    lfs f0, 0x8c(r1)
    stfs f0, 0x2c8(r5)
    lwz r0, 0x90(r1)
    stw r0, 0x2cc(r5)
    lwz r0, 0x94(r1)
    stw r0, 0x2d0(r5)
    lwz r0, 0x9c(r1)
    lwz r4, 0x98(r1)
    stw r4, 0x2d4(r5)
    stw r0, 0x2d8(r5)
    lwz r0, 0xa4(r1)
    lwz r4, 0xa0(r1)
    stw r4, 0x2dc(r5)
    stw r0, 0x2e0(r5)
    lwz r0, 0xac(r1)
    lwz r4, 0xa8(r1)
    stw r4, 0x2e4(r5)
    stw r0, 0x2e8(r5)
    lwz r0, 0xb4(r1)
    lwz r4, 0xb0(r1)
    stw r4, 0x2ec(r5)
    stw r0, 0x2f0(r5)
    lwz r0, 0xbc(r1)
    lwz r4, 0xb8(r1)
    stw r4, 0x2f4(r5)
    stw r0, 0x2f8(r5)
    lwz r0, 0xc0(r1)
    stw r0, 0x2fc(r5)
    lwz r0, 0xc4(r1)
    stw r0, 0x300(r5)
    lwz r0, 0xc8(r1)
    addi r4, r31, 0x78
    stw r0, 0x304(r5)
    lwz r0, 0xcc(r1)
    stw r0, 0x308(r5)
    lfs f0, 0xd0(r1)
    stfs f0, 0x30c(r5)
    lfs f0, 0xd4(r1)
    stfs f0, 0x310(r5)
    lwz r0, 0xd8(r1)
    stw r0, 0x314(r5)
    lwz r0, 0xdc(r1)
    stw r0, 0x318(r5)
    lfs f0, 0xe0(r1)
    stfs f0, 0x31c(r5)
    lwz r0, 0xe4(r1)
    stw r0, 0x320(r5)
    lfs f0, 0xe8(r1)
    stfs f0, 0x324(r5)
    lfs f0, 0xec(r1)
    stfs f0, 0x328(r5)
    lwz r0, 0xf0(r1)
    stw r0, 0x32c(r5)
    lwz r0, 0xf4(r1)
    stw r0, 0x330(r5)
    lwz r6, lbl_8087F9C0
    lwz r0, 0x8(r3)
    stw r0, 0x24(r6)
    lwz r0, 0xc(r3)
    stw r0, 0x28(r6)
    lwz r0, 0x10(r3)
    stw r0, 0x2c(r6)
    lwz r0, 0x14(r3)
    stw r0, 0x30(r6)
    lwz r0, 0x18(r3)
    stw r0, 0x34(r6)
    lwz r0, 0x20(r3)
    lwz r5, 0x1c(r3)
    stw r5, 0x38(r6)
    stw r0, 0x3c(r6)
    lwz r5, lbl_8087F9C0
    lfs f0, 0x24(r3)
    stfs f0, 0x40(r5)
    lfs f0, 0x28(r3)
    stfs f0, 0x44(r5)
    lfs f0, 0x2c(r3)
    stfs f0, 0x48(r5)
    lfs f0, 0x30(r3)
    stfs f0, 0x4c(r5)
    lwz r0, 0x34(r3)
    stw r0, 0x50(r5)
    lfs f0, 0x38(r3)
    stfs f0, 0x54(r5)
    lwz r6, lbl_8087F9C0
    lwz r0, 0x3c(r3)
    stw r0, 0x58(r6)
    lwz r0, 0x40(r3)
    stw r0, 0x5c(r6)
    lwz r0, 0x44(r3)
    stw r0, 0x60(r6)
    lwz r0, 0x48(r3)
    stw r0, 0x64(r6)
    lwz r0, 0x50(r3)
    lwz r5, 0x4c(r3)
    stw r5, 0x68(r6)
    stw r0, 0x6c(r6)
    lwz r0, 0x58(r3)
    lwz r5, 0x54(r3)
    stw r5, 0x70(r6)
    stw r0, 0x74(r6)
    lwz r6, lbl_8087F9C0
    lwz r0, 0x5c(r3)
    stw r0, 0x78(r6)
    lwz r0, 0x60(r3)
    stw r0, 0x7c(r6)
    lwz r0, 0x64(r3)
    stw r0, 0x80(r6)
    lwz r0, 0x68(r3)
    stw r0, 0x84(r6)
    lwz r0, 0x70(r3)
    lwz r5, 0x6c(r3)
    stw r5, 0x88(r6)
    stw r0, 0x8c(r6)
    lwz r0, 0x74(r3)
    stw r0, 0x90(r6)
    lwz r3, lbl_8087F9C0
    bl fn_8057F1B8
    lwz r3, lbl_8087F9C0
    lwz r4, 0x88(r31)
    bl fn_8057F19C
lbl_fn_803BD79C_000009E0:
    lwz r0, lbl_8087DD64
    cmpwi r0, 0x8
    bge lbl_fn_803BD79C_00000A18
    lwz r3, lbl_8087F9C0
    li r0, 0x10
    lfs f2, lbl_80885CA4
    stfs f2, 0x40(r3)
    lfs f1, lbl_80885CAC
    stfs f2, 0x44(r3)
    lfs f0, lbl_80885CB0
    stfs f1, 0x48(r3)
    stfs f2, 0x4c(r3)
    stfs f0, 0x54(r3)
    stw r0, 0x50(r3)
lbl_fn_803BD79C_00000A18:
    lwz r0, lbl_8087DD64
    cmpwi r0, 0xe
    bge lbl_fn_803BD79C_00000A38
    lwz r3, lbl_8087F9C0
    lfs f0, lbl_80885CA4
    stfs f0, 0x44(r3)
    lwz r3, lbl_8087F9C0
    stfs f0, 0x54(r3)
lbl_fn_803BD79C_00000A38:
    lwz r0, lbl_8087DD64
    cmpwi r0, 0xf
    bge lbl_fn_803BD79C_00000A50
    lwz r3, lbl_8087F9C0
    lfs f0, lbl_80885CA4
    stfs f0, 0x40(r3)
lbl_fn_803BD79C_00000A50:
    lwz r0, 0x104(r1)
    lwz r31, 0xfc(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_803BDB60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4000
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    li r29, 0x0
    mr r31, r3
    stw r29, 0x0(r3)
    stw r29, 0x4(r3)
    sth r29, 0x4508(r3)
    addi r3, r3, 0x8
    bl memset
    addi r3, r31, 0x4008
    li r4, 0x0
    li r5, 0x400
    bl memset
    addi r5, r31, 0x4fa0
    addi r7, r31, 0x539c
    cmplw r5, r7
    sth r29, 0x4f5c(r31)
    bge lbl_fn_803BDB60_00000B60
    addi r0, r31, 0x4fa0
    addi r6, r31, 0x517c
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_803BDB60_00000AD8
    li r3, 0x1
lbl_fn_803BDB60_00000AD8:
    cmpwi r3, 0x0
    beq lbl_fn_803BDB60_00000AE4
    li r0, 0x1
lbl_fn_803BDB60_00000AE4:
    cmpwi r0, 0x0
    beq lbl_fn_803BDB60_00000B34
    addi r3, r6, 0x21f
    li r0, 0x220
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r6
    bge lbl_fn_803BDB60_00000B34
lbl_fn_803BDB60_00000B0C:
    sth r4, 0x0(r5)
    sth r4, 0x44(r5)
    sth r4, 0x88(r5)
    sth r4, 0xcc(r5)
    sth r4, 0x110(r5)
    sth r4, 0x154(r5)
    sth r4, 0x198(r5)
    sth r4, 0x1dc(r5)
    addi r5, r5, 0x220
    bdnz lbl_fn_803BDB60_00000B0C
lbl_fn_803BDB60_00000B34:
    addi r3, r7, 0x43
    li r0, 0x44
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    bge lbl_fn_803BDB60_00000B60
lbl_fn_803BDB60_00000B54:
    sth r4, 0x0(r5)
    addi r5, r5, 0x44
    bdnz lbl_fn_803BDB60_00000B54
lbl_fn_803BDB60_00000B60:
    addi r29, r31, 0x539c
    lis r4, fn_8012AE50@ha
    lis r5, fn_8012AFE8@ha
    li r6, 0x240
    mr r3, r29
    addi r4, r4, fn_8012AE50@l
    addi r5, r5, fn_8012AFE8@l
    li r7, 0x7
    bl fn_806958E0
    addi r5, r31, 0x638c
    addi r7, r31, 0x6e60
    cmplw r5, r7
    li r0, 0x0
    stw r0, 0xfc0(r29)
    sth r0, 0x6360(r31)
    bge lbl_fn_803BDB60_00000C44
    addi r0, r31, 0x638c
    addi r6, r31, 0x6d00
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_803BDB60_00000BBC
    li r3, 0x1
lbl_fn_803BDB60_00000BBC:
    cmpwi r3, 0x0
    beq lbl_fn_803BDB60_00000BC8
    li r0, 0x1
lbl_fn_803BDB60_00000BC8:
    cmpwi r0, 0x0
    beq lbl_fn_803BDB60_00000C18
    addi r3, r6, 0x15f
    li r0, 0x160
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r6
    bge lbl_fn_803BDB60_00000C18
lbl_fn_803BDB60_00000BF0:
    sth r4, 0x0(r5)
    sth r4, 0x2c(r5)
    sth r4, 0x58(r5)
    sth r4, 0x84(r5)
    sth r4, 0xb0(r5)
    sth r4, 0xdc(r5)
    sth r4, 0x108(r5)
    sth r4, 0x134(r5)
    addi r5, r5, 0x160
    bdnz lbl_fn_803BDB60_00000BF0
lbl_fn_803BDB60_00000C18:
    addi r3, r7, 0x2b
    li r0, 0x2c
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    bge lbl_fn_803BDB60_00000C44
lbl_fn_803BDB60_00000C38:
    sth r4, 0x0(r5)
    addi r5, r5, 0x2c
    bdnz lbl_fn_803BDB60_00000C38
lbl_fn_803BDB60_00000C44:
    addi r7, r31, 0x3000
    li r0, 0x0
    addi r5, r31, 0x6e78
    stb r0, 0x6e66(r31)
    addi r7, r7, 0x6e60
    cmplw r5, r7
    bge lbl_fn_803BDB60_00000D08
    addi r0, r31, 0x6e78
    addi r6, r31, 0x2f40
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    addi r6, r6, 0x6e60
    bgt lbl_fn_803BDB60_00000C80
    li r3, 0x1
lbl_fn_803BDB60_00000C80:
    cmpwi r3, 0x0
    beq lbl_fn_803BDB60_00000C8C
    li r0, 0x1
lbl_fn_803BDB60_00000C8C:
    cmpwi r0, 0x0
    beq lbl_fn_803BDB60_00000CDC
    addi r3, r6, 0xbf
    li r0, 0xc0
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r6
    bge lbl_fn_803BDB60_00000CDC
lbl_fn_803BDB60_00000CB4:
    stb r4, 0x6(r5)
    stb r4, 0x1e(r5)
    stb r4, 0x36(r5)
    stb r4, 0x4e(r5)
    stb r4, 0x66(r5)
    stb r4, 0x7e(r5)
    stb r4, 0x96(r5)
    stb r4, 0xae(r5)
    addi r5, r5, 0xc0
    bdnz lbl_fn_803BDB60_00000CB4
lbl_fn_803BDB60_00000CDC:
    addi r3, r7, 0x17
    li r0, 0x18
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    bge lbl_fn_803BDB60_00000D08
lbl_fn_803BDB60_00000CFC:
    stb r4, 0x6(r5)
    addi r5, r5, 0x18
    bdnz lbl_fn_803BDB60_00000CFC
lbl_fn_803BDB60_00000D08:
    addis r28, r31, 0x1
    li r30, -0x1
    subi r27, r28, 0x619c
    subi r29, r28, 0x5d9c
lbl_fn_803BDB60_00000D18:
    stw r30, 0x0(r27)
    addi r3, r27, 0x20
    li r4, 0x0
    li r5, 0x20
    stw r30, 0x4(r27)
    stw r30, 0x8(r27)
    stw r30, 0xc(r27)
    stw r30, 0x10(r27)
    stw r30, 0x14(r27)
    stw r30, 0x18(r27)
    stw r30, 0x1c(r27)
    bl memset
    addi r27, r27, 0x40
    cmplw r27, r29
    blt lbl_fn_803BDB60_00000D18
    subi r27, r28, 0x519c
    subi r30, r28, 0x4fdc
    li r29, -0x1
lbl_fn_803BDB60_00000D60:
    stw r29, 0x0(r27)
    addi r3, r27, 0x20
    li r4, 0x0
    li r5, 0x20
    stw r29, 0x4(r27)
    stw r29, 0x8(r27)
    stw r29, 0xc(r27)
    stw r29, 0x10(r27)
    stw r29, 0x14(r27)
    stw r29, 0x18(r27)
    stw r29, 0x1c(r27)
    bl memset
    addi r27, r27, 0x40
    cmplw r27, r30
    blt lbl_fn_803BDB60_00000D60
    lis r4, fn_803BB3C0@ha
    lis r5, fn_80119ECC@ha
    mr r3, r30
    li r6, 0x2d4
    addi r4, r4, fn_803BB3C0@l
    addi r5, r5, fn_80119ECC@l
    li r7, 0x1c
    bl fn_806958E0
    addis r3, r31, 0x1
    li r4, 0x0
    addi r3, r3, 0x3434
    li r5, 0x70
    bl memset
    mr r3, r31
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BDEE4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    li r0, 0x1
    stw r0, 0x0(r3)
    mr r27, r3
    lwz r3, lbl_8087F488
    cmpwi r3, 0x0
    beq lbl_fn_803BDEE4_00000E18
    bl fn_803CE7E0
lbl_fn_803BDEE4_00000E18:
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803BDEE4_00000E28
    bl fn_8037D808
lbl_fn_803BDEE4_00000E28:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803BDEE4_00000E4C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803BDEE4_00000E4C
    lwz r3, lbl_8087F430
    bl fn_80373148
    bl fn_804A1D2C
lbl_fn_803BDEE4_00000E4C:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_803BDEE4_00000E5C
    bl fn_803608A8
lbl_fn_803BDEE4_00000E5C:
    addi r3, r27, 0x4
    bl fn_803B9804
    addi r3, r27, 0x4f5c
    bl fn_803BA408
    mr r28, r27
    li r29, 0x0
    li r26, 0x0
    li r30, 0x18
    li r31, 0xf
    li r25, 0x1
lbl_fn_803BDEE4_00000E84:
    lwz r3, lbl_8087F8A0
    mr r4, r29
    bl fn_8054A340
    cmpwi r3, 0x0
    beq lbl_fn_803BDEE4_00000FA4
    lfs f0, 0x7d8(r3)
    addi r6, r28, 0x53c0
    stfs f0, 0x53a0(r28)
    addi r5, r3, 0x7f8
    lfs f0, 0x7dc(r3)
    stfs f0, 0x53a4(r28)
    lwz r0, 0x7e0(r3)
    stw r0, 0x53a8(r28)
    lwz r0, 0x7e4(r3)
    stw r0, 0x53ac(r28)
    lwz r0, 0x7e8(r3)
    stw r0, 0x53b0(r28)
    lwz r0, 0x7ec(r3)
    stw r0, 0x53b4(r28)
    lwz r0, 0x7f0(r3)
    stw r0, 0x53b8(r28)
    lfs f0, 0x7f4(r3)
    stfs f0, 0x53bc(r28)
    lfs f0, 0x7f8(r3)
    stfs f0, 0x53c0(r28)
    mtctr r30
lbl_fn_803BDEE4_00000EEC:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BDEE4_00000EEC
    addi r6, r28, 0x5480
    addi r5, r3, 0x8b8
    mtctr r30
lbl_fn_803BDEE4_00000F0C:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BDEE4_00000F0C
    addi r6, r28, 0x5540
    addi r5, r3, 0x978
    mtctr r31
lbl_fn_803BDEE4_00000F2C:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BDEE4_00000F2C
    lwz r4, 0x4(r5)
    slw r0, r25, r29
    stw r4, 0x4(r6)
    lwz r4, 0x9f8(r3)
    stw r4, 0x55c0(r28)
    lfs f0, 0x9fc(r3)
    stfs f0, 0x55c4(r28)
    lwz r4, 0xa00(r3)
    stw r4, 0x55c8(r28)
    lbz r4, 0xa04(r3)
    stb r4, 0x55cc(r28)
    lbz r4, 0xa05(r3)
    stb r4, 0x55cd(r28)
    lwz r4, 0xa0a(r3)
    lwz r5, 0xa06(r3)
    stw r5, 0x55ce(r28)
    stw r4, 0x55d2(r28)
    lwz r4, 0xa0e(r3)
    stw r4, 0x55d6(r28)
    lhz r3, 0xa12(r3)
    sth r3, 0x55da(r28)
    lwz r3, 0x635c(r27)
    or r0, r3, r0
    stw r0, 0x635c(r27)
    b lbl_fn_803BDEE4_000010B4
lbl_fn_803BDEE4_00000FA4:
    lwz r0, lbl_8087F4F0
    addi r6, r28, 0x53c0
    add r3, r0, r26
    lfs f0, 0x64f0(r3)
    addi r5, r3, 0x6510
    stfs f0, 0x53a0(r28)
    lfs f0, 0x64f4(r3)
    stfs f0, 0x53a4(r28)
    lwz r0, 0x64f8(r3)
    stw r0, 0x53a8(r28)
    lwz r0, 0x64fc(r3)
    stw r0, 0x53ac(r28)
    lwz r0, 0x6500(r3)
    stw r0, 0x53b0(r28)
    lwz r0, 0x6504(r3)
    stw r0, 0x53b4(r28)
    lwz r0, 0x6508(r3)
    stw r0, 0x53b8(r28)
    lfs f0, 0x650c(r3)
    stfs f0, 0x53bc(r28)
    lfs f0, 0x6510(r3)
    stfs f0, 0x53c0(r28)
    mtctr r30
lbl_fn_803BDEE4_00001000:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BDEE4_00001000
    addi r6, r28, 0x5480
    addi r5, r3, 0x65d0
    mtctr r30
lbl_fn_803BDEE4_00001020:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BDEE4_00001020
    addi r6, r28, 0x5540
    addi r5, r3, 0x6690
    mtctr r31
lbl_fn_803BDEE4_00001040:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BDEE4_00001040
    lwz r4, 0x4(r5)
    slw r0, r25, r29
    stw r4, 0x4(r6)
    lwz r4, 0x6710(r3)
    stw r4, 0x55c0(r28)
    lfs f0, 0x6714(r3)
    stfs f0, 0x55c4(r28)
    lwz r4, 0x6718(r3)
    stw r4, 0x55c8(r28)
    lbz r4, 0x671c(r3)
    stb r4, 0x55cc(r28)
    lbz r4, 0x671d(r3)
    stb r4, 0x55cd(r28)
    lwz r4, 0x6722(r3)
    lwz r5, 0x671e(r3)
    stw r5, 0x55ce(r28)
    stw r4, 0x55d2(r28)
    lwz r4, 0x6726(r3)
    stw r4, 0x55d6(r28)
    lhz r3, 0x672a(r3)
    sth r3, 0x55da(r28)
    lwz r3, 0x635c(r27)
    or r0, r3, r0
    stw r0, 0x635c(r27)
lbl_fn_803BDEE4_000010B4:
    addi r29, r29, 0x1
    addi r26, r26, 0x43c
    cmplwi r29, 0x7
    addi r28, r28, 0x240
    blt lbl_fn_803BDEE4_00000E84
    addi r3, r27, 0x6360
    bl fn_803BAEF8
    addi r3, r27, 0x6e60
    bl fn_803BB248
    addis r3, r27, 0x1
    subi r3, r3, 0x61a0
    bl fn_803BB584
    lis r3, 0xdeae
    addis r5, r27, 0x1
    subi r3, r3, 0x4111
    li r0, 0x0
    stw r3, 0x33a8(r5)
    addi r3, r27, 0x4
    lwz r29, 0xe4c(r27)
    stw r0, 0x33ac(r5)
    mr r4, r29
    lwz r6, lbl_8087F0A8
    lwz r6, 0x290(r6)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stw r0, 0x33ac(r5)
    lwz r7, lbl_8087F9C0
    lwz r0, 0x24(r7)
    stw r0, 0x33b0(r5)
    lwz r0, 0x28(r7)
    stw r0, 0x33b4(r5)
    lwz r0, 0x2c(r7)
    stw r0, 0x33b8(r5)
    lwz r0, 0x30(r7)
    stw r0, 0x33bc(r5)
    lwz r0, 0x34(r7)
    stw r0, 0x33c0(r5)
    lwz r6, 0x38(r7)
    lwz r0, 0x3c(r7)
    stw r0, 0x33c8(r5)
    stw r6, 0x33c4(r5)
    lwz r6, lbl_8087F9C0
    lfs f0, 0x40(r6)
    stfs f0, 0x33cc(r5)
    lfs f0, 0x44(r6)
    stfs f0, 0x33d0(r5)
    lfs f0, 0x48(r6)
    stfs f0, 0x33d4(r5)
    lfs f0, 0x4c(r6)
    stfs f0, 0x33d8(r5)
    lwz r0, 0x50(r6)
    stw r0, 0x33dc(r5)
    lfs f0, 0x54(r6)
    stfs f0, 0x33e0(r5)
    lwz r7, lbl_8087F9C0
    lwz r0, 0x58(r7)
    stw r0, 0x33e4(r5)
    lwz r0, 0x5c(r7)
    stw r0, 0x33e8(r5)
    lwz r0, 0x60(r7)
    stw r0, 0x33ec(r5)
    lwz r0, 0x64(r7)
    stw r0, 0x33f0(r5)
    lwz r6, 0x68(r7)
    lwz r0, 0x6c(r7)
    stw r0, 0x33f8(r5)
    stw r6, 0x33f4(r5)
    lwz r6, 0x70(r7)
    lwz r0, 0x74(r7)
    stw r0, 0x3400(r5)
    stw r6, 0x33fc(r5)
    lwz r7, lbl_8087F9C0
    lwz r0, 0x78(r7)
    stw r0, 0x3404(r5)
    lwz r0, 0x7c(r7)
    stw r0, 0x3408(r5)
    lwz r0, 0x80(r7)
    stw r0, 0x340c(r5)
    lwz r0, 0x84(r7)
    stw r0, 0x3410(r5)
    lwz r6, 0x88(r7)
    lwz r0, 0x8c(r7)
    stw r0, 0x3418(r5)
    stw r6, 0x3414(r5)
    lwz r0, 0x90(r7)
    stw r0, 0x341c(r5)
    lwz r6, lbl_8087F9C0
    lwz r0, 0x94(r6)
    stw r0, 0x3420(r5)
    lfs f0, 0x98(r6)
    stfs f0, 0x3424(r5)
    lfs f0, 0x9c(r6)
    stfs f0, 0x3428(r5)
    lfs f0, 0xa0(r6)
    stfs f0, 0x342c(r5)
    lwz r6, lbl_8087F9C0
    lwz r0, 0xa4(r6)
    stw r0, 0x3430(r5)
    bl fn_803BA120
    cmpwi r29, 0x2
    bne lbl_fn_803BDEE4_00001290
    li r0, 0x0
    sth r0, 0x4f5c(r27)
    sth r0, 0x4fa0(r27)
    sth r0, 0x4fe4(r27)
    sth r0, 0x5028(r27)
    sth r0, 0x506c(r27)
    sth r0, 0x50b0(r27)
    sth r0, 0x50f4(r27)
    sth r0, 0x5138(r27)
    sth r0, 0x517c(r27)
    sth r0, 0x51c0(r27)
    sth r0, 0x5204(r27)
    sth r0, 0x5248(r27)
    sth r0, 0x528c(r27)
    sth r0, 0x52d0(r27)
    sth r0, 0x5314(r27)
    sth r0, 0x5358(r27)
lbl_fn_803BDEE4_00001290:
    cmpwi r29, 0x2
    bne lbl_fn_803BDEE4_000012B8
    lfs f1, 0x554c(r27)
    lwz r3, 0x543c(r27)
    lwz r0, 0x54fc(r27)
    lfs f0, lbl_80885CA4
    stfs f1, 0x59cc(r27)
    stw r3, 0x58bc(r27)
    stw r0, 0x597c(r27)
    stfs f0, 0x5a44(r27)
lbl_fn_803BDEE4_000012B8:
    cmpwi r29, 0x2
    bne lbl_fn_803BDEE4_00001358
    li r0, 0x2
    mr r4, r27
    li r3, 0x0
    mtctr r0
lbl_fn_803BDEE4_000012D0:
    sth r3, 0x6360(r4)
    sth r3, 0x638c(r4)
    sth r3, 0x63b8(r4)
    sth r3, 0x63e4(r4)
    sth r3, 0x6410(r4)
    sth r3, 0x643c(r4)
    sth r3, 0x6468(r4)
    sth r3, 0x6494(r4)
    sth r3, 0x64c0(r4)
    sth r3, 0x64ec(r4)
    sth r3, 0x6518(r4)
    sth r3, 0x6544(r4)
    sth r3, 0x6570(r4)
    sth r3, 0x659c(r4)
    sth r3, 0x65c8(r4)
    sth r3, 0x65f4(r4)
    sth r3, 0x6620(r4)
    sth r3, 0x664c(r4)
    sth r3, 0x6678(r4)
    sth r3, 0x66a4(r4)
    sth r3, 0x66d0(r4)
    sth r3, 0x66fc(r4)
    sth r3, 0x6728(r4)
    sth r3, 0x6754(r4)
    sth r3, 0x6780(r4)
    sth r3, 0x67ac(r4)
    sth r3, 0x67d8(r4)
    sth r3, 0x6804(r4)
    sth r3, 0x6830(r4)
    sth r3, 0x685c(r4)
    sth r3, 0x6888(r4)
    sth r3, 0x68b4(r4)
    addi r4, r4, 0x580
    bdnz lbl_fn_803BDEE4_000012D0
lbl_fn_803BDEE4_00001358:
    cmpwi r29, 0x2
    bne lbl_fn_803BDEE4_000013F8
    li r0, 0x10
    mr r4, r27
    li r3, 0x0
    mtctr r0
lbl_fn_803BDEE4_00001370:
    stb r3, 0x6e66(r4)
    stb r3, 0x6e7e(r4)
    stb r3, 0x6e96(r4)
    stb r3, 0x6eae(r4)
    stb r3, 0x6ec6(r4)
    stb r3, 0x6ede(r4)
    stb r3, 0x6ef6(r4)
    stb r3, 0x6f0e(r4)
    stb r3, 0x6f26(r4)
    stb r3, 0x6f3e(r4)
    stb r3, 0x6f56(r4)
    stb r3, 0x6f6e(r4)
    stb r3, 0x6f86(r4)
    stb r3, 0x6f9e(r4)
    stb r3, 0x6fb6(r4)
    stb r3, 0x6fce(r4)
    stb r3, 0x6fe6(r4)
    stb r3, 0x6ffe(r4)
    stb r3, 0x7016(r4)
    stb r3, 0x702e(r4)
    stb r3, 0x7046(r4)
    stb r3, 0x705e(r4)
    stb r3, 0x7076(r4)
    stb r3, 0x708e(r4)
    stb r3, 0x70a6(r4)
    stb r3, 0x70be(r4)
    stb r3, 0x70d6(r4)
    stb r3, 0x70ee(r4)
    stb r3, 0x7106(r4)
    stb r3, 0x711e(r4)
    stb r3, 0x7136(r4)
    stb r3, 0x714e(r4)
    addi r4, r4, 0x300
    bdnz lbl_fn_803BDEE4_00001370
lbl_fn_803BDEE4_000013F8:
    addis r3, r27, 0x1
    mr r4, r29
    subi r3, r3, 0x61a0
    bl fn_803BD6C0
    cmpwi r29, 0x2
    bne lbl_fn_803BDEE4_00001420
    addis r3, r27, 0x1
    li r0, 0x1
    stw r0, 0x340c(r3)
    stw r0, 0x3410(r3)
lbl_fn_803BDEE4_00001420:
    addis r4, r27, 0x1
    mr r3, r27
    addi r0, r4, 0x34a4
    subf r4, r27, r0
    bl fn_800DC500
    addis r4, r27, 0x1
    addi r11, r1, 0x30
    stw r3, 0x34a4(r4)
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803BE550(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r4, r3, 0x1
    stw r0, 0x14(r1)
    addi r0, r4, 0x34a4
    subf r4, r3, r0
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800DC500
    addis r4, r31, 0x1
    stw r3, 0x34a4(r4)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BE590(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    addis r3, r3, 0x1
    subi r3, r3, 0x61a0
    bl fn_803BC2D4
    lwz r0, lbl_8087F4F0
    cmpwi r0, 0x0
    beq lbl_fn_803BE590_0000152C
    li r28, 0x0
    addi r27, r26, 0x539c
    mr r30, r28
    li r31, 0x0
    li r29, 0x1
lbl_fn_803BE590_000014D4:
    lwz r0, 0x635c(r26)
    slw r3, r29, r28
    and r0, r3, r0
    cmplw r3, r0
    bne lbl_fn_803BE590_00001518
    lwz r0, lbl_8087F4F0
    mr r4, r27
    li r5, 0x240
    add r3, r0, r31
    addi r3, r3, 0x64ec
    bl memcpy
    lwz r0, lbl_8087F4F0
    add r3, r0, r31
    stw r30, 0x67dc(r3)
    lwz r0, lbl_8087F4F0
    add r3, r0, r31
    stw r30, 0x686c(r3)
lbl_fn_803BE590_00001518:
    addi r28, r28, 0x1
    addi r31, r31, 0x43c
    cmplwi r28, 0x7
    addi r27, r27, 0x240
    blt lbl_fn_803BE590_000014D4
lbl_fn_803BE590_0000152C:
    addi r3, r26, 0x4
    bl fn_803B9C98
    addis r3, r26, 0x1
    addi r3, r3, 0x33a8
    bl fn_803BD79C
    lwz r3, lbl_8087F488
    cmpwi r3, 0x0
    beq lbl_fn_803BE590_00001550
    bl fn_803CE768
lbl_fn_803BE590_00001550:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_803BE590_00001560
    bl fn_803608A4
lbl_fn_803BE590_00001560:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BE670(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x4
    stw r0, 0x14(r1)
    bl fn_803B9D78
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803BE670_000015AC
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803BE670_000015AC
    lwz r3, lbl_8087F430
    bl fn_80373148
    bl fn_804A1C4C
lbl_fn_803BE670_000015AC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BE6B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x4f5c
    bl fn_803BA620
    addi r3, r29, 0x539c
    bl fn_803BAD6C
    addi r3, r29, 0x6360
    bl fn_803BB0E0
    lwz r3, lbl_8087F4A0
    li r31, 0x80
    lwz r30, 0x48(r3)
    b lbl_fn_803BE6B8_00001720
lbl_fn_803BE6B8_00001600:
    mr r5, r29
    li r4, 0x0
    mtctr r31
lbl_fn_803BE6B8_0000160C:
    lbz r0, 0x6e66(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BE6B8_000016E4
    lwz r3, 0x6e60(r5)
    lwz r0, 0x48(r30)
    cmpw r3, r0
    bne lbl_fn_803BE6B8_0000163C
    lhz r3, 0x6e64(r5)
    lwz r0, 0x4c(r30)
    cmpw r3, r0
    beq lbl_fn_803BE6B8_000016E4
lbl_fn_803BE6B8_0000163C:
    lbz r0, 0x6e7e(r5)
    addi r4, r4, 0x1
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BE6B8_000016E4
    lwz r3, 0x6e78(r5)
    lwz r0, 0x48(r30)
    cmpw r3, r0
    bne lbl_fn_803BE6B8_00001670
    lhz r3, 0x6e7c(r5)
    lwz r0, 0x4c(r30)
    cmpw r3, r0
    beq lbl_fn_803BE6B8_000016E4
lbl_fn_803BE6B8_00001670:
    lbz r0, 0x6e96(r5)
    addi r4, r4, 0x1
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BE6B8_000016E4
    lwz r3, 0x6e90(r5)
    lwz r0, 0x48(r30)
    cmpw r3, r0
    bne lbl_fn_803BE6B8_000016A4
    lhz r3, 0x6e94(r5)
    lwz r0, 0x4c(r30)
    cmpw r3, r0
    beq lbl_fn_803BE6B8_000016E4
lbl_fn_803BE6B8_000016A4:
    lbz r0, 0x6eae(r5)
    addi r4, r4, 0x1
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BE6B8_000016E4
    lwz r3, 0x6ea8(r5)
    lwz r0, 0x48(r30)
    cmpw r3, r0
    bne lbl_fn_803BE6B8_000016D8
    lhz r3, 0x6eac(r5)
    lwz r0, 0x4c(r30)
    cmpw r3, r0
    beq lbl_fn_803BE6B8_000016E4
lbl_fn_803BE6B8_000016D8:
    addi r5, r5, 0x60
    addi r4, r4, 0x1
    bdnz lbl_fn_803BE6B8_0000160C
lbl_fn_803BE6B8_000016E4:
    cmpwi r4, 0x200
    beq lbl_fn_803BE6B8_0000171C
    mulli r0, r4, 0x18
    add r4, r29, r0
    lbz r0, 0x6e66(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BE6B8_0000171C
    lwz r12, 0x0(r30)
    mr r3, r30
    lbz r4, 0x6e67(r4)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
lbl_fn_803BE6B8_0000171C:
    lwz r30, 0x5c(r30)
lbl_fn_803BE6B8_00001720:
    cmpwi r30, 0x0
    bne lbl_fn_803BE6B8_00001600
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803BE6B8_00001738
    bl fn_8037D758
lbl_fn_803BE6B8_00001738:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BE850(void)
{
    nofralloc
    blr
}

asm void fn_803BE854(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087DD64
    cmpwi r0, 0xc
    blt lbl_fn_803BE854_000017A0
    addis r4, r3, 0x1
    addi r0, r4, 0x34a4
    subf r4, r3, r0
    bl fn_800DC500
    addis r4, r31, 0x1
    lwz r0, 0x34a4(r4)
    cmplw r0, r3
    beq lbl_fn_803BE854_000017A0
    li r3, 0x1
    b lbl_fn_803BE854_000017A4
lbl_fn_803BE854_000017A0:
    li r3, 0x0
lbl_fn_803BE854_000017A4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BE8B4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_803BE8C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    addis r6, r4, 0x1
    lbz r12, 0x4d10(r4)
    stw r0, 0x44(r1)
    lwz r8, 0x3328(r6)
    stmw r18, 0x8(r1)
    li r18, 0x1
    lwz r20, 0x0(r5)
    li r19, 0xf
    lwz r21, 0x4(r5)
    mr r30, r3
    lwz r22, 0x8(r5)
    li r31, 0x0
    lwz r23, 0xc(r5)
    lwz r24, 0x10(r5)
    lwz r25, 0x14(r5)
    lwz r26, 0x18(r5)
    lwz r27, 0x1c(r5)
    lwz r28, 0x20(r5)
    lwz r29, 0x24(r5)
    li r5, 0x38
    lbz r11, 0x4d11(r4)
    lhz r10, 0x4d12(r4)
    lwz r9, 0x4d14(r4)
    lwz r7, 0x4(r4)
    lwz r6, 0x474(r4)
    lwz r0, 0x47c(r4)
    li r4, 0x0
    stw r18, 0x0(r3)
    stw r19, 0x4(r3)
    stw r20, 0x8(r3)
    stw r21, 0xc(r3)
    stw r22, 0x10(r3)
    stw r23, 0x14(r3)
    stw r24, 0x18(r3)
    stw r25, 0x1c(r3)
    stw r26, 0x20(r3)
    stw r27, 0x24(r3)
    stw r28, 0x28(r3)
    stw r29, 0x2c(r3)
    stb r12, 0x30(r3)
    stb r11, 0x31(r3)
    sth r10, 0x32(r3)
    stw r9, 0x34(r3)
    stw r8, 0x70(r3)
    stw r7, 0x74(r3)
    stw r6, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r6, lbl_8087F0A8
    lwz r6, 0x194(r6)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stw r0, 0x80(r3)
    addi r3, r3, 0x38
    bl memset
    lwz r3, lbl_8087F8A0
    mr r4, r30
    lwz r3, 0x48(r3)
    b lbl_fn_803BE8C0_000018DC
lbl_fn_803BE8C0_000018B8:
    lwz r0, 0x50(r3)
    addi r31, r31, 0x1
    stw r0, 0x38(r4)
    cmpwi r31, 0x7
    lwz r0, 0x934(r3)
    stw r0, 0x3c(r4)
    addi r4, r4, 0x8
    bge lbl_fn_803BE8C0_000018E4
    lwz r3, 0x14ac(r3)
lbl_fn_803BE8C0_000018DC:
    cmpwi r3, 0x0
    bne lbl_fn_803BE8C0_000018B8
lbl_fn_803BE8C0_000018E4:
    addi r0, r30, 0xb4
    mr r3, r30
    subf r4, r30, r0
    bl fn_800DC500
    stw r3, 0xb4(r30)
    lmw r18, 0x8(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803BEA08(void)
{
    nofralloc
    lwz r0, 0x38(r4)
    stw r0, 0x38(r3)
    lwz r0, 0x3c(r4)
    stw r0, 0x3c(r3)
    lwz r0, 0x40(r4)
    stw r0, 0x40(r3)
    lwz r0, 0x44(r4)
    stw r0, 0x44(r3)
    lwz r0, 0x48(r4)
    stw r0, 0x48(r3)
    lwz r0, 0x4c(r4)
    stw r0, 0x4c(r3)
    lwz r0, 0x50(r4)
    stw r0, 0x50(r3)
    lwz r0, 0x54(r4)
    stw r0, 0x54(r3)
    lwz r0, 0x58(r4)
    stw r0, 0x58(r3)
    lwz r0, 0x5c(r4)
    stw r0, 0x5c(r3)
    lwz r0, 0x60(r4)
    stw r0, 0x60(r3)
    lwz r0, 0x64(r4)
    stw r0, 0x64(r3)
    lwz r0, 0x68(r4)
    stw r0, 0x68(r3)
    lwz r0, 0x6c(r4)
    stw r0, 0x6c(r3)
    blr
}
