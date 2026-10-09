#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_80074EC8(void);
extern void fn_800761A8(void);
extern void fn_800763C0(void);
extern void fn_8007642C(void);
extern void fn_80076760(void);
extern void fn_80076A28(void);
extern void fn_80076BE4(void);
extern void fn_8007A41C(void);
extern void fn_80080528(void);
extern void fn_8009E448(void);
extern void fn_800BC438(void);
extern void fn_800BDB40(void);
extern void fn_800C06B0(void);
extern void fn_800C08B0(void);
extern void fn_800C0900(void);
extern void fn_800C0A8C(void);
extern void fn_800C0A98(void);
extern void fn_800C24B4(void);
extern void fn_800C258C(void);
extern void fn_800C607C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D594C(void);
extern void fn_800D59B8(void);
extern void fn_800D5C84(void);
extern void fn_80473EFC(void);
extern void fn_8047614C(void);
extern void fn_80476170(void);
extern void fn_80478198(void);
extern void fn_805F89F0(void);
extern void fn_805F8DA0(void);
extern void fn_805F9940(void);
extern void fn_80613910(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80615B60(void);
extern void fn_80615C40(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80616250(void);
extern void fn_806163C0(void);
extern void fn_80616EF0(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_80617520(void);
extern void fn_806175F0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80618030(void);
extern void fn_80618350(void);
extern void fn_806183A0(void);
extern void fn_80618400(void);
extern void fn_80618420(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);

/* External data declarations */
extern u8 lbl_80732638[];
extern u8 lbl_80732640[];
extern u8 lbl_80732648[];
extern u8 lbl_807C7270[];
extern u8 lbl_807C72B0[];
extern u8 lbl_807C72E0[];
extern u8 lbl_807C7310[];
extern u8 lbl_807C7340[];
extern u8 lbl_807C7370[];

/* Small data declarations */
extern u32 lbl_8087D818;
extern u32 lbl_8087D81C;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EEF8;
extern u32 lbl_8087EF28;
extern u32 lbl_8087EF29;
extern u32 lbl_8087EF2C;
extern u32 lbl_8087EF30;
extern u32 lbl_8087EF34;
extern u32 lbl_8087EF35;
extern u32 lbl_8087EF36;
extern u32 lbl_8087EF37;
extern u32 lbl_8087EF38;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE0;
extern u32 lbl_80880B88;
extern u32 lbl_80880B8C;
extern u32 lbl_80880B90;
extern u32 lbl_80880B94;
extern u32 lbl_80880B98;
extern u32 lbl_80880C48;
extern u32 lbl_80880C4C;
extern u32 lbl_80880C50;
extern u32 lbl_80880C54;
extern u32 lbl_80880C58;
extern u32 lbl_80880C5C;
extern u32 lbl_80880C60;
extern u32 lbl_80880C64;
extern u32 lbl_80880C68;

/* Function declarations */
void fn_8009B938(void);
void fn_8009B93C(void);
void fn_8009B9E8(void);
void fn_8009BB9C(void);
void fn_8009BF3C(void);
void fn_8009C508(void);
void fn_8009C688(void);
void fn_8009C84C(void);
void fn_8009CC28(void);
void fn_8009D1A4(void);
void fn_8009D58C(void);
void fn_8009DCE0(void);
void fn_8009DE60(void);

asm void fn_8009B938(void)
{
    nofralloc
    blr
}

asm void fn_8009B93C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r5, r1, 0x8
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r4, lbl_8087EFB4
    lwz r0, 0x4(r3)
    psq_l f1, 0x15c(r4), 0, 0
    psq_l f2, 0x164(r4), 0, 0
    rlwinm. r0, r0, 0, 14, 14
    psq_l f3, 0x16c(r4), 0, 0
    psq_l f4, 0x174(r4), 0, 0
    psq_l f5, 0x17c(r4), 0, 0
    psq_l f6, 0x184(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    beq lbl_fn_8009B93C_00000088
    lbz r0, lbl_8087EFB0
    cmpwi r0, 0x0
    bne lbl_fn_8009B93C_00000088
    li r0, 0x1
    stb r0, lbl_8087EF29
    lwz r4, 0xc(r3)
    lwz r4, 0x48(r4)
    lwz r4, 0x0(r4)
    bl fn_8009E448
    li r0, 0x0
    stb r0, lbl_8087EF29
lbl_fn_8009B93C_00000088:
    lwz r4, 0xc(r31)
    mr r3, r31
    lwz r4, 0x48(r4)
    lwz r4, 0x0(r4)
    bl fn_8009E448
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8009B9E8(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0x14(r4)
    mr r31, r6
    cmpwi r0, -0x1
    beq lbl_fn_8009B9E8_00000130
    mulli r0, r0, 0x30
    li r4, 0x0
    add r31, r6, r0
    mr r3, r31
    bl fn_80618350
    mr r3, r31
    addi r4, r1, 0x38
    bl fn_805F8DA0
    lfs f0, lbl_80880C48
    addi r3, r1, 0x38
    stfs f0, 0x44(r1)
    li r4, 0x0
    stfs f0, 0x54(r1)
    stfs f0, 0x64(r1)
    bl fn_806183A0
    addi r3, r1, 0x38
    li r4, 0x3
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    b lbl_fn_8009B9E8_00000244
lbl_fn_8009B9E8_00000130:
    lbz r0, lbl_8087EF28
    cmpwi r0, 0x0
    bne lbl_fn_8009B9E8_00000148
    lbz r0, lbl_8087EFB0
    cmpwi r0, 0x0
    bne lbl_fn_8009B9E8_00000158
lbl_fn_8009B9E8_00000148:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x234(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009B9E8_000001B0
lbl_fn_8009B9E8_00000158:
    mr r26, r5
    mr r27, r7
    li r29, 0x0
    li r28, 0x0
lbl_fn_8009B9E8_00000168:
    lwz r3, 0x10(r26)
    cmpwi r3, -0x1
    beq lbl_fn_8009B9E8_00000244
    lwz r0, 0x0(r27)
    cmpw r3, r0
    beq lbl_fn_8009B9E8_00000194
    mulli r0, r3, 0x30
    stw r3, 0x0(r27)
    mr r4, r28
    add r3, r31, r0
    bl fn_80618350
lbl_fn_8009B9E8_00000194:
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmpwi r29, 0xa
    addi r28, r28, 0x3
    addi r26, r26, 0x4
    blt lbl_fn_8009B9E8_00000168
    b lbl_fn_8009B9E8_00000244
lbl_fn_8009B9E8_000001B0:
    lfs f31, lbl_80880C48
    mr r29, r5
    mr r28, r7
    li r25, 0x0
    li r27, 0x0
lbl_fn_8009B9E8_000001C4:
    lwz r3, 0x10(r29)
    addi r26, r27, 0x1e
    cmpwi r3, -0x1
    beq lbl_fn_8009B9E8_00000244
    lwz r0, 0x0(r28)
    cmpw r3, r0
    beq lbl_fn_8009B9E8_0000022C
    mulli r0, r3, 0x30
    stw r3, 0x0(r28)
    mr r4, r27
    add r30, r31, r0
    mr r3, r30
    bl fn_80618350
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_805F8DA0
    stfs f31, 0x14(r1)
    mr r4, r27
    addi r3, r1, 0x8
    stfs f31, 0x24(r1)
    stfs f31, 0x34(r1)
    bl fn_806183A0
    mr r4, r26
    addi r3, r1, 0x8
    li r5, 0x0
    bl fn_80618420
lbl_fn_8009B9E8_0000022C:
    addi r25, r25, 0x1
    addi r28, r28, 0x4
    cmpwi r25, 0xa
    addi r27, r27, 0x3
    addi r29, r29, 0x4
    blt lbl_fn_8009B9E8_000001C4
lbl_fn_8009B9E8_00000244:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8009BB9C(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stfd f27, 0x120(r1)
    psq_st f27, 0x128(r1), 0, 0
    stfd f26, 0x110(r1)
    psq_st f26, 0x118(r1), 0, 0
    stfd f25, 0x100(r1)
    psq_st f25, 0x108(r1), 0, 0
    stfd f24, 0xf0(r1)
    psq_st f24, 0xf8(r1), 0, 0
    bl _savegpr_22
    lwz r6, 0x8(r3)
    mr r25, r3
    lfs f30, lbl_80880C48
    mr r26, r4
    lwz r22, 0x10(r6)
    mr r27, r5
    lfs f31, lbl_80880C4C
    addi r23, r1, 0x68
    li r31, 0x40
    li r30, 0x0
    li r24, 0x0
    b lbl_fn_8009BB9C_000005A0
lbl_fn_8009BB9C_000002E8:
    lwz r6, 0x8(r25)
    li r8, 0x0
    lwz r4, 0xf8(r22)
    li r5, 0x0
    lwz r7, 0xc(r6)
    lwz r3, 0xf0(r22)
    lwzx r0, r7, r24
    lwzx r28, r3, r24
    mulli r0, r0, 0xc
    lwz r6, 0x4(r6)
    lwzx r29, r4, r24
    lbz r3, 0x4a(r25)
    lwzx r4, r6, r0
    add r7, r6, r0
    b lbl_fn_8009BB9C_0000032C
lbl_fn_8009BB9C_00000324:
    addi r5, r5, 0x18
    addi r8, r8, 0x1
lbl_fn_8009BB9C_0000032C:
    cmpw r8, r3
    bge lbl_fn_8009BB9C_0000034C
    lwz r0, 0xc(r25)
    add r6, r0, r5
    lbz r0, 0x10(r6)
    extsb r0, r0
    cmpw r0, r4
    blt lbl_fn_8009BB9C_00000324
lbl_fn_8009BB9C_0000034C:
    cmpw r8, r3
    bge lbl_fn_8009BB9C_00000374
    mulli r0, r8, 0x18
    lwz r3, 0xc(r25)
    add r3, r3, r0
    lbz r0, 0x10(r3)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_8009BB9C_00000374
    b lbl_fn_8009BB9C_00000378
lbl_fn_8009BB9C_00000374:
    lwz r3, 0x8(r7)
lbl_fn_8009BB9C_00000378:
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8009BB9C_0000038C
    lfs f29, 0x0(r3)
    b lbl_fn_8009BB9C_00000390
lbl_fn_8009BB9C_0000038C:
    lfs f29, lbl_80880B88
lbl_fn_8009BB9C_00000390:
    cmpwi r3, 0x0
    beq lbl_fn_8009BB9C_000003A0
    lfs f28, 0x4(r3)
    b lbl_fn_8009BB9C_000003A4
lbl_fn_8009BB9C_000003A0:
    lfs f28, lbl_80880B8C
lbl_fn_8009BB9C_000003A4:
    cmpwi r3, 0x0
    beq lbl_fn_8009BB9C_000003B4
    lfs f27, 0xc(r3)
    b lbl_fn_8009BB9C_000003B8
lbl_fn_8009BB9C_000003B4:
    lfs f27, lbl_80880B94
lbl_fn_8009BB9C_000003B8:
    cmpwi r3, 0x0
    beq lbl_fn_8009BB9C_000003C8
    lfs f26, 0x10(r3)
    b lbl_fn_8009BB9C_000003CC
lbl_fn_8009BB9C_000003C8:
    lfs f26, lbl_80880B98
lbl_fn_8009BB9C_000003CC:
    cmpwi r3, 0x0
    beq lbl_fn_8009BB9C_000003DC
    lfs f25, 0x8(r3)
    b lbl_fn_8009BB9C_000003E0
lbl_fn_8009BB9C_000003DC:
    lfs f25, lbl_80880B90
lbl_fn_8009BB9C_000003E0:
    fcmpu cr0, f30, f25
    beq lbl_fn_8009BB9C_00000420
    fmr f1, f25
    bl fn_8068A850
    frsp f24, f1
    fmr f1, f25
    bl fn_8068AD58
    frsp f3, f1
    addi r3, r1, 0x98
    fmr f1, f29
    fmr f2, f28
    fmr f4, f24
    fmr f5, f27
    fmr f6, f26
    bl fn_800D5C84
    b lbl_fn_8009BB9C_00000460
lbl_fn_8009BB9C_00000420:
    fneg f7, f27
    stfs f29, 0x98(r1)
    fsubs f0, f26, f31
    stfs f30, 0x9c(r1)
    fmuls f7, f29, f7
    fmadds f0, f28, f0, f31
    stfs f30, 0xa0(r1)
    stfs f7, 0xa4(r1)
    stfs f30, 0xa8(r1)
    stfs f28, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f30, 0xbc(r1)
    stfs f31, 0xc0(r1)
    stfs f30, 0xc4(r1)
lbl_fn_8009BB9C_00000460:
    lwz r5, 0x10(r29)
    lwz r4, 0x14(r26)
    subi r0, r5, 0x1
    addi r3, r4, 0x1
    cmplwi r0, 0x3
    cntlzw r3, r3
    srwi r0, r3, 5
    ble lbl_fn_8009BB9C_000004BC
    cmpwi r5, 0x0
    bne lbl_fn_8009BB9C_00000598
    cmpwi r0, 0x0
    bne lbl_fn_8009BB9C_000004A4
    lwz r4, 0x18(r28)
    addi r3, r1, 0x98
    li r5, 0x1
    bl fn_80618420
    b lbl_fn_8009BB9C_00000598
lbl_fn_8009BB9C_000004A4:
    mr r4, r31
    addi r3, r1, 0x98
    li r5, 0x0
    bl fn_80618420
    addi r31, r31, 0x3
    b lbl_fn_8009BB9C_00000598
lbl_fn_8009BB9C_000004BC:
    cmpwi r0, 0x0
    bne lbl_fn_8009BB9C_00000538
    cmpwi r5, 0x4
    beq lbl_fn_8009BB9C_00000524
    mulli r0, r4, 0x30
    mr r3, r23
    li r5, 0x0
    add r4, r27, r0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    stfs f30, 0x74(r1)
    stfs f30, 0x84(r1)
    stfs f30, 0x94(r1)
    lwz r4, 0x18(r28)
    bl fn_80618420
    b lbl_fn_8009BB9C_00000538
lbl_fn_8009BB9C_00000524:
    mulli r0, r4, 0x30
    lwz r4, 0x18(r28)
    li r5, 0x0
    add r3, r27, r0
    bl fn_80618420
lbl_fn_8009BB9C_00000538:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x38
    lwz r5, 0x10(r29)
    li r8, 0x0
    lwz r6, 0x14(r29)
    lwz r7, 0x18(r29)
    bl fn_800C0900
    lfs f8, 0xa0(r1)
    addi r3, r1, 0x98
    lfs f7, 0xa4(r1)
    addi r4, r1, 0x38
    lfs f9, 0xb0(r1)
    addi r5, r1, 0x8
    lfs f0, 0xb4(r1)
    stfs f7, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f0, 0xb0(r1)
    stfs f9, 0xb4(r1)
    bl fn_805F89F0
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x0
    bl fn_80618420
    addi r31, r31, 0x3
lbl_fn_8009BB9C_00000598:
    addi r30, r30, 0x1
    addi r24, r24, 0x4
lbl_fn_8009BB9C_000005A0:
    lwz r0, 0xec(r22)
    cmpw r30, r0
    blt lbl_fn_8009BB9C_000002E8
    addi r11, r1, 0xf0
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    psq_l f27, 0x128(r1), 0, 0
    lfd f27, 0x120(r1)
    psq_l f26, 0x118(r1), 0, 0
    lfd f26, 0x110(r1)
    psq_l f25, 0x108(r1), 0, 0
    lfd f25, 0x100(r1)
    psq_l f24, 0xf8(r1), 0, 0
    lfd f24, 0xf0(r1)
    bl _restgpr_22
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8009BF3C(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xe4(r1)
    lis r0, 0x4330
    stw r31, 0xdc(r1)
    mr r31, r6
    stw r30, 0xd8(r1)
    mr r30, r5
    stw r29, 0xd4(r1)
    mr r29, r4
    stw r28, 0xd0(r1)
    stw r0, 0xa0(r1)
    stw r0, 0xa8(r1)
    bne lbl_fn_8009BF3C_0000064C
    li r0, 0x0
    stw r0, lbl_8087EF2C
    b lbl_fn_8009BF3C_00000BB0
lbl_fn_8009BF3C_0000064C:
    lwz r0, 0x14(r4)
    extrwi. r0, r0, 1, 20
    beq lbl_fn_8009BF3C_00000668
    lwz r3, lbl_8087EFB4
    addi r4, r5, 0x3c
    bl fn_800C06B0
    b lbl_fn_8009BF3C_00000670
lbl_fn_8009BF3C_00000668:
    lwz r3, lbl_8087EFB4
    bl fn_800C08B0
lbl_fn_8009BF3C_00000670:
    lwz r0, lbl_8087EF2C
    cmplw r29, r0
    bne lbl_fn_8009BF3C_0000088C
    lwz r3, lbl_8087EFA8
    lwz r0, 0x3a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009BF3C_0000088C
    mr r3, r29
    bl fn_8009DCE0
    lwz r0, 0x18(r29)
    lis r4, lbl_80732638@ha
    stw r0, 0x48(r1)
    lis r3, 0x4
    lfd f13, lbl_80732638@l(r4)
    addi r4, r3, 0x4
    lwz r0, 0x1c(r29)
    addi r6, r1, 0x48
    stw r0, 0x50(r1)
    addi r7, r1, 0x90
    lfs f12, lbl_80880C58
    addi r5, r1, 0x4c
    lbz r3, 0x50(r1)
    stw r3, 0xa4(r1)
    lbz r0, 0x51(r1)
    lfd f0, 0xa0(r1)
    stw r0, 0xac(r1)
    fsubs f1, f0, f13
    lbz r3, 0x52(r1)
    lfd f0, 0xa8(r1)
    lbz r0, 0x53(r1)
    stw r3, 0xa4(r1)
    fdivs f11, f1, f12
    lfd f1, 0xa0(r1)
    stw r0, 0xac(r1)
    stfs f11, 0x90(r1)
    fsubs f10, f0, f13
    lfd f0, 0xa8(r1)
    fsubs f1, f1, f13
    fsubs f0, f0, f13
    fdivs f10, f10, f12
    stfs f10, 0x94(r1)
    fdivs f1, f1, f12
    stfs f1, 0x98(r1)
    fdivs f0, f0, f12
    stfs f0, 0x9c(r1)
    mtspr GQR6, r4
    lfs f0, lbl_80880C5C
    psq_l f2, 0x0(r6), 0, 6
    psq_l f3, 0x2(r6), 0, 6
    ps_muls0 f2, f2, f0
    psq_l f4, 0x0(r31), 0, 0
    ps_muls0 f3, f3, f0
    psq_l f5, 0x8(r31), 0, 0
    psq_l f6, 0xc(r30), 0, 0
    ps_mul f2, f2, f4
    psq_l f8, 0x0(r7), 0, 0
    ps_mul f3, f3, f5
    psq_l f7, 0x14(r30), 0, 0
    psq_l f9, 0x8(r7), 0, 0
    ps_mul f6, f6, f8
    ps_muls0 f2, f2, f12
    ps_mul f7, f7, f9
    ps_muls0 f3, f3, f12
    ps_muls0 f6, f6, f12
    ps_muls0 f7, f7, f12
    psq_st f2, 0x0(r6), 0, 6
    psq_st f3, 0x2(r6), 0, 6
    psq_st f6, 0x0(r5), 0, 6
    psq_st f7, 0x2(r5), 0, 6
    addi r4, r1, 0x54
    li r3, 0x4
    lwz r0, 0x48(r1)
    stw r0, 0x54(r1)
    bl fn_80615C40
    lbz r0, 0x4e(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8009BF3C_000007BC
    lwz r0, 0x48(r1)
    addi r4, r1, 0x58
    stw r0, 0x58(r1)
    li r3, 0x1
    bl fn_806175F0
    b lbl_fn_8009BF3C_000007D0
lbl_fn_8009BF3C_000007BC:
    lwz r0, lbl_80880C50
    addi r4, r1, 0x5c
    stw r0, 0x5c(r1)
    li r3, 0x1
    bl fn_806175F0
lbl_fn_8009BF3C_000007D0:
    lfs f12, lbl_80880C58
    addi r4, r1, 0x60
    lfs f0, 0x1c(r30)
    li r3, 0x2
    lfs f10, 0x20(r30)
    fmuls f11, f12, f0
    lfs f1, 0x24(r30)
    lfs f0, 0x28(r30)
    fmuls f10, f12, f10
    fmuls f1, f12, f1
    fmuls f0, f12, f0
    fctiwz f11, f11
    fctiwz f10, f10
    fctiwz f1, f1
    stfd f11, 0xb0(r1)
    fctiwz f0, f0
    stfd f10, 0xb8(r1)
    lwz r7, 0xb4(r1)
    stfd f1, 0xc0(r1)
    lwz r6, 0xbc(r1)
    stfd f0, 0xc8(r1)
    lwz r5, 0xc4(r1)
    lwz r0, 0xcc(r1)
    stb r7, 0x68(r1)
    stb r6, 0x69(r1)
    stb r5, 0x6a(r1)
    stb r0, 0x6b(r1)
    lwz r0, 0x68(r1)
    stw r0, 0x60(r1)
    bl fn_806175F0
    lwz r0, 0x4c(r1)
    addi r4, r1, 0x64
    stw r0, 0x64(r1)
    li r3, 0x4
    bl fn_80615B60
    lbz r0, 0x4c(r29)
    extsb. r0, r0
    beq lbl_fn_8009BF3C_00000BB0
    lwz r29, lbl_8087EEE0
    mr r3, r30
    li r4, 0x0
    bl fn_800C24B4
    mr r5, r3
    mr r3, r29
    li r4, 0x0
    bl fn_8007642C
    b lbl_fn_8009BF3C_00000BB0
lbl_fn_8009BF3C_0000088C:
    lwz r5, 0x8(r29)
    addi r4, r1, 0x30
    lwz r0, 0x20(r29)
    li r3, 0x5
    lwz r28, 0x10(r5)
    stw r29, lbl_8087EF2C
    stw r0, 0x30(r1)
    bl fn_80615C40
    lwz r0, 0x20(r28)
    addi r4, r1, 0x34
    stw r0, 0x34(r1)
    li r3, 0x5
    bl fn_80615B60
    lwz r5, 0x8(r29)
    addi r4, r1, 0x38
    lwz r6, 0x3c(r29)
    li r3, 0x0
    lwz r5, 0x10(r5)
    lwz r7, 0x40(r29)
    lwz r0, 0x54(r5)
    stw r0, 0x2c(r1)
    stb r6, 0x2c(r1)
    stb r7, 0x2d(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x38(r1)
    bl fn_806175F0
    lwz r0, 0x24(r29)
    addi r4, r1, 0x3c
    stw r0, 0x3c(r1)
    li r3, 0x1
    bl fn_80617520
    lwz r0, 0x28(r29)
    addi r4, r1, 0x40
    stw r0, 0x40(r1)
    li r3, 0x2
    bl fn_80617520
    lwz r0, 0x2c(r29)
    addi r4, r1, 0x44
    stw r0, 0x44(r1)
    li r3, 0x3
    bl fn_80617520
    lwz r0, 0x18(r29)
    lis r4, lbl_80732638@ha
    stw r0, 0x8(r1)
    lis r3, 0x4
    lfd f13, lbl_80732638@l(r4)
    addi r4, r3, 0x4
    lwz r0, 0x1c(r29)
    addi r6, r1, 0x8
    stw r0, 0x10(r1)
    addi r7, r1, 0x80
    lfs f12, lbl_80880C58
    addi r5, r1, 0xc
    lbz r3, 0x10(r1)
    stw r3, 0xa4(r1)
    lbz r0, 0x11(r1)
    lfd f0, 0xa0(r1)
    stw r0, 0xac(r1)
    fsubs f1, f0, f13
    lbz r3, 0x12(r1)
    lfd f0, 0xa8(r1)
    lbz r0, 0x13(r1)
    stw r3, 0xa4(r1)
    fdivs f11, f1, f12
    lfd f1, 0xa0(r1)
    stw r0, 0xac(r1)
    stfs f11, 0x80(r1)
    fsubs f10, f0, f13
    lfd f0, 0xa8(r1)
    fsubs f1, f1, f13
    fsubs f0, f0, f13
    fdivs f10, f10, f12
    stfs f10, 0x84(r1)
    fdivs f1, f1, f12
    stfs f1, 0x88(r1)
    fdivs f0, f0, f12
    stfs f0, 0x8c(r1)
    mtspr GQR6, r4
    lfs f0, lbl_80880C5C
    psq_l f2, 0x0(r6), 0, 6
    psq_l f3, 0x2(r6), 0, 6
    ps_muls0 f2, f2, f0
    psq_l f4, 0x0(r31), 0, 0
    ps_muls0 f3, f3, f0
    psq_l f5, 0x8(r31), 0, 0
    psq_l f6, 0xc(r30), 0, 0
    ps_mul f2, f2, f4
    psq_l f8, 0x0(r7), 0, 0
    ps_mul f3, f3, f5
    psq_l f7, 0x14(r30), 0, 0
    psq_l f9, 0x8(r7), 0, 0
    ps_mul f6, f6, f8
    ps_muls0 f2, f2, f12
    ps_mul f7, f7, f9
    ps_muls0 f3, f3, f12
    ps_muls0 f6, f6, f12
    ps_muls0 f7, f7, f12
    psq_st f2, 0x0(r6), 0, 6
    psq_st f3, 0x2(r6), 0, 6
    psq_st f6, 0x0(r5), 0, 6
    psq_st f7, 0x2(r5), 0, 6
    addi r4, r1, 0x14
    li r3, 0x4
    lwz r0, 0x8(r1)
    stw r0, 0x14(r1)
    bl fn_80615C40
    lbz r0, 0x4e(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8009BF3C_00000A58
    lwz r0, 0x8(r1)
    addi r4, r1, 0x18
    stw r0, 0x18(r1)
    li r3, 0x1
    bl fn_806175F0
    b lbl_fn_8009BF3C_00000A6C
lbl_fn_8009BF3C_00000A58:
    lwz r0, lbl_80880C54
    addi r4, r1, 0x1c
    stw r0, 0x1c(r1)
    li r3, 0x1
    bl fn_806175F0
lbl_fn_8009BF3C_00000A6C:
    lfs f12, lbl_80880C58
    addi r4, r1, 0x20
    lfs f0, 0x1c(r30)
    li r3, 0x2
    lfs f10, 0x20(r30)
    fmuls f11, f12, f0
    lfs f1, 0x24(r30)
    lfs f0, 0x28(r30)
    fmuls f10, f12, f10
    fmuls f1, f12, f1
    fmuls f0, f12, f0
    fctiwz f11, f11
    fctiwz f10, f10
    fctiwz f1, f1
    stfd f11, 0xc8(r1)
    fctiwz f0, f0
    stfd f10, 0xc0(r1)
    lwz r7, 0xcc(r1)
    stfd f1, 0xb8(r1)
    lwz r6, 0xc4(r1)
    stfd f0, 0xb0(r1)
    lwz r5, 0xbc(r1)
    lwz r0, 0xb4(r1)
    stb r7, 0x28(r1)
    stb r6, 0x29(r1)
    stb r5, 0x2a(r1)
    stb r0, 0x2b(r1)
    lwz r0, 0x28(r1)
    stw r0, 0x20(r1)
    bl fn_806175F0
    lwz r0, 0xc(r1)
    addi r4, r1, 0x24
    stw r0, 0x24(r1)
    li r3, 0x4
    bl fn_80615B60
    lbz r0, 0x4c(r29)
    extsb. r0, r0
    beq lbl_fn_8009BF3C_00000B24
    lwz r28, lbl_8087EEE0
    mr r3, r30
    li r4, 0x0
    bl fn_800C24B4
    mr r5, r3
    mr r3, r28
    li r4, 0x0
    bl fn_8007642C
lbl_fn_8009BF3C_00000B24:
    mr r3, r29
    bl fn_8009C508
    mr r3, r29
    bl fn_8009C688
    mr r3, r29
    bl fn_8009C84C
    lwz r28, lbl_8087EEE0
    addi r4, r29, 0x14
    mr r3, r28
    bl fn_80076A28
    lwz r0, 0x38(r29)
    li r3, 0x3
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    lbz r7, 0x6f(r1)
    stw r0, 0x74(r1)
    lbz r6, 0x72(r1)
    stw r0, 0x78(r1)
    lbz r5, 0x75(r1)
    lbz r4, 0x78(r1)
    bl fn_80617730
    lwz r3, lbl_8087EFB4
    lwz r0, 0x2f8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8009BF3C_00000BA8
    lwz r0, 0x14(r29)
    extrwi r0, r0, 1, 19
    cmpwi r0, 0x1
    bne lbl_fn_8009BF3C_00000BA8
    mr r3, r28
    li r4, 0x6
    li r5, 0x2
    bl fn_80076760
lbl_fn_8009BF3C_00000BA8:
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
lbl_fn_8009BF3C_00000BB0:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r28, 0xd0(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8009C508(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r4, 0x8(r3)
    stw r0, 0x64(r1)
    stmw r21, 0x34(r1)
    mr r24, r3
    addi r25, r1, 0x8
    li r29, 0x0
    li r23, 0x1
    lwz r30, 0x10(r4)
    addi r31, r30, 0x84
    b lbl_fn_8009C508_00000D30
lbl_fn_8009C508_00000C00:
    lwz r0, 0x14(r31)
    li r28, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_8009C508_00000C14
    li r28, 0x0
lbl_fn_8009C508_00000C14:
    lbz r5, 0x4c(r24)
    li r27, 0x1
    li r26, 0x0
    extsb r4, r5
    cmpwi r4, -0x1
    beq lbl_fn_8009C508_00000C3C
    lwz r3, 0x0(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_8009C508_00000C50
lbl_fn_8009C508_00000C3C:
    lwz r3, 0x4(r31)
    neg r0, r3
    or r0, r0, r3
    srwi r26, r0, 31
    b lbl_fn_8009C508_00000C74
lbl_fn_8009C508_00000C50:
    cmpwi r4, 0x3
    bne lbl_fn_8009C508_00000C60
    li r26, 0x1
    b lbl_fn_8009C508_00000C74
lbl_fn_8009C508_00000C60:
    cmpwi r28, 0x0
    bne lbl_fn_8009C508_00000C74
    rlwinm. r0, r5, 0, 30, 30
    beq lbl_fn_8009C508_00000C74
    li r26, 0x1
lbl_fn_8009C508_00000C74:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x208(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009C508_00000C88
    li r26, 0x0
lbl_fn_8009C508_00000C88:
    cmpwi r26, 0x0
    beq lbl_fn_8009C508_00000CD4
    lwz r4, lbl_8087EEF8
    addi r3, r1, 0x8
    bl fn_8007A41C
    mr r22, r25
    li r21, 0x0
    b lbl_fn_8009C508_00000CC8
lbl_fn_8009C508_00000CA8:
    addi r4, r21, 0x2
    lwz r3, lbl_8087EEE0
    slw r0, r23, r4
    lwz r5, 0x4(r22)
    or r27, r27, r0
    bl fn_8007642C
    addi r22, r22, 0x4
    addi r21, r21, 0x1
lbl_fn_8009C508_00000CC8:
    lwz r0, 0x8(r1)
    cmpw r21, r0
    blt lbl_fn_8009C508_00000CA8
lbl_fn_8009C508_00000CD4:
    lwz r0, 0x0(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_8009C508_00000CF4
    lbz r6, 0x4e(r24)
    lbz r5, 0x50(r24)
    extsb r6, r6
    extsb r5, r5
    b lbl_fn_8009C508_00000D04
lbl_fn_8009C508_00000CF4:
    lbz r6, 0x4f(r24)
    lbz r5, 0x51(r24)
    extsb r6, r6
    extsb r5, r5
lbl_fn_8009C508_00000D04:
    cmpwi r28, 0x0
    lwz r3, 0x0(r31)
    clrlwi r4, r26, 24
    li r7, 0x2
    beq lbl_fn_8009C508_00000D1C
    mr r7, r27
lbl_fn_8009C508_00000D1C:
    lwz r8, 0x10(r31)
    mr r9, r28
    bl fn_80615D50
    addi r31, r31, 0x18
    addi r29, r29, 0x1
lbl_fn_8009C508_00000D30:
    lwz r0, 0x80(r30)
    cmpw r29, r0
    blt lbl_fn_8009C508_00000C00
    lmw r21, 0x34(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8009C688(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r21, 0x14(r1)
    mr r25, r3
    lwz r31, 0x8(r3)
    li r29, 0x0
    li r27, 0x0
    li r24, 0x0
    lwz r28, 0x0(r31)
    b lbl_fn_8009C688_00000EF8
lbl_fn_8009C688_00000D7C:
    lwz r0, 0x4(r31)
    li r26, 0x0
    lwzx r30, r24, r0
    add r6, r0, r24
    cmpwi r30, 0x14
    beq lbl_fn_8009C688_00000DA8
    cmpwi r30, 0x16
    beq lbl_fn_8009C688_00000DB8
    cmpwi r30, 0x15
    beq lbl_fn_8009C688_00000DC8
    b lbl_fn_8009C688_00000DD4
lbl_fn_8009C688_00000DA8:
    lwz r3, lbl_8087EFB4
    bl fn_800C0A8C
    mr r26, r3
    b lbl_fn_8009C688_00000EA8
lbl_fn_8009C688_00000DB8:
    lwz r3, lbl_8087EFB4
    bl fn_800C0A98
    mr r26, r3
    b lbl_fn_8009C688_00000EA8
lbl_fn_8009C688_00000DC8:
    lwz r3, lbl_8087EFB4
    addi r26, r3, 0x74c
    b lbl_fn_8009C688_00000EA8
lbl_fn_8009C688_00000DD4:
    mulli r5, r29, 0x18
    lbz r4, 0x4a(r25)
    b lbl_fn_8009C688_00000DE8
lbl_fn_8009C688_00000DE0:
    addi r5, r5, 0x18
    addi r29, r29, 0x1
lbl_fn_8009C688_00000DE8:
    cmpw r29, r4
    bge lbl_fn_8009C688_00000E08
    lwz r0, 0xc(r25)
    add r3, r0, r5
    lbz r0, 0x10(r3)
    extsb r0, r0
    cmpw r0, r30
    blt lbl_fn_8009C688_00000DE0
lbl_fn_8009C688_00000E08:
    cmpw r29, r4
    bge lbl_fn_8009C688_00000E34
    mulli r0, r29, 0x18
    lwz r3, 0xc(r25)
    add r22, r3, r0
    lbz r0, 0x10(r22)
    extsb r0, r0
    cmpw r30, r0
    bne lbl_fn_8009C688_00000E34
    addi r29, r29, 0x1
    b lbl_fn_8009C688_00000E38
lbl_fn_8009C688_00000E34:
    lwz r22, 0x8(r6)
lbl_fn_8009C688_00000E38:
    cmpwi r22, 0x0
    beq lbl_fn_8009C688_00000EA8
    lwz r21, 0x4(r22)
    cmpwi r21, 0x0
    beq lbl_fn_8009C688_00000E90
    lwz r0, 0x28(r21)
    li r23, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8009C688_00000E7C
    mr r3, r21
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8009C688_00000E80
    addi r3, r21, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8009C688_00000E80
lbl_fn_8009C688_00000E7C:
    li r23, 0x1
lbl_fn_8009C688_00000E80:
    cmpwi r23, 0x0
    beq lbl_fn_8009C688_00000E90
    lwz r26, 0x4(r22)
    b lbl_fn_8009C688_00000EA8
lbl_fn_8009C688_00000E90:
    lwz r0, 0x4(r31)
    add r3, r0, r24
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8009C688_00000EA8
    lwz r26, 0x4(r3)
lbl_fn_8009C688_00000EA8:
    cmpwi r30, 0xb
    bne lbl_fn_8009C688_00000EC8
    lwz r3, lbl_8087EFA8
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009C688_00000EC8
    lwz r3, lbl_8087EEB0
    addi r26, r3, 0x40
lbl_fn_8009C688_00000EC8:
    cmpwi r26, 0x0
    bne lbl_fn_8009C688_00000ED8
    lwz r3, lbl_8087EEB0
    addi r26, r3, 0x10
lbl_fn_8009C688_00000ED8:
    lwz r0, 0x4(r31)
    mr r5, r26
    lwz r3, lbl_8087EEE0
    add r4, r0, r24
    lwz r4, 0x4(r4)
    bl fn_800763C0
    addi r27, r27, 0x1
    addi r24, r24, 0xc
lbl_fn_8009C688_00000EF8:
    cmplw r27, r28
    blt lbl_fn_8009C688_00000D7C
    lmw r21, 0x14(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8009C84C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x80
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
    stfd f24, 0xa0(r1)
    psq_st f24, 0xa8(r1), 0, 0
    stfd f23, 0x90(r1)
    psq_st f23, 0x98(r1), 0, 0
    stfd f22, 0x80(r1)
    psq_st f22, 0x88(r1), 0, 0
    bl _savegpr_26
    lwz r31, 0x8(r3)
    mr r27, r3
    lfs f30, lbl_80880C64
    li r28, 0x0
    lwz r29, 0x10(r31)
    li r26, 0x2
    lfs f28, lbl_80880C4C
    lfs f29, lbl_80880C60
    mr r30, r29
    lfs f31, lbl_80880C48
    b lbl_fn_8009C84C_0000127C
lbl_fn_8009C84C_00000FA4:
    lwz r7, 0x140(r30)
    li r10, 0x0
    lwz r3, 0xc(r31)
    li r8, 0x0
    slwi r0, r7, 2
    lwz r6, 0x144(r30)
    lwzx r0, r3, r0
    lwz r4, 0x8(r27)
    mulli r0, r0, 0xc
    lwz r5, 0x148(r30)
    lwz r3, 0x4(r4)
    lwz r4, 0x14c(r30)
    stw r7, 0x10(r1)
    add r9, r3, r0
    lwzx r7, r3, r0
    stw r6, 0x14(r1)
    lbz r6, 0x4a(r27)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    b lbl_fn_8009C84C_00000FFC
lbl_fn_8009C84C_00000FF4:
    addi r8, r8, 0x18
    addi r10, r10, 0x1
lbl_fn_8009C84C_00000FFC:
    cmpw r10, r6
    bge lbl_fn_8009C84C_0000101C
    lwz r0, 0xc(r27)
    add r3, r0, r8
    lbz r0, 0x10(r3)
    extsb r0, r0
    cmpw r0, r7
    blt lbl_fn_8009C84C_00000FF4
lbl_fn_8009C84C_0000101C:
    cmpw r10, r6
    bge lbl_fn_8009C84C_00001044
    mulli r0, r10, 0x18
    lwz r3, 0xc(r27)
    add r3, r3, r0
    lbz r0, 0x10(r3)
    extsb r0, r0
    cmpw r7, r0
    bne lbl_fn_8009C84C_00001044
    b lbl_fn_8009C84C_00001048
lbl_fn_8009C84C_00001044:
    lwz r3, 0x8(r9)
lbl_fn_8009C84C_00001048:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8009C84C_0000105C
    lfs f27, 0x0(r3)
    b lbl_fn_8009C84C_00001060
lbl_fn_8009C84C_0000105C:
    lfs f27, lbl_80880B88
lbl_fn_8009C84C_00001060:
    cmpwi r3, 0x0
    beq lbl_fn_8009C84C_00001070
    lfs f26, 0x4(r3)
    b lbl_fn_8009C84C_00001074
lbl_fn_8009C84C_00001070:
    lfs f26, lbl_80880B8C
lbl_fn_8009C84C_00001074:
    cmpwi r3, 0x0
    beq lbl_fn_8009C84C_00001084
    lfs f25, 0xc(r3)
    b lbl_fn_8009C84C_00001088
lbl_fn_8009C84C_00001084:
    lfs f25, lbl_80880B94
lbl_fn_8009C84C_00001088:
    cmpwi r3, 0x0
    beq lbl_fn_8009C84C_00001098
    lfs f24, 0x10(r3)
    b lbl_fn_8009C84C_0000109C
lbl_fn_8009C84C_00001098:
    lfs f24, lbl_80880B98
lbl_fn_8009C84C_0000109C:
    cmpwi r3, 0x0
    beq lbl_fn_8009C84C_000010AC
    lfs f23, 0x8(r3)
    b lbl_fn_8009C84C_000010B0
lbl_fn_8009C84C_000010AC:
    lfs f23, lbl_80880B90
lbl_fn_8009C84C_000010B0:
    fcmpu cr0, f31, f23
    beq lbl_fn_8009C84C_000010F0
    fmr f1, f23
    bl fn_8068A850
    frsp f22, f1
    fmr f1, f23
    bl fn_8068AD58
    frsp f3, f1
    addi r3, r1, 0x38
    fmr f1, f27
    fmr f2, f26
    fmr f4, f22
    fmr f5, f25
    fmr f6, f24
    bl fn_800D5C84
    b lbl_fn_8009C84C_00001130
lbl_fn_8009C84C_000010F0:
    fneg f1, f25
    stfs f27, 0x38(r1)
    fsubs f0, f24, f28
    stfs f31, 0x3c(r1)
    fmuls f1, f27, f1
    fmadds f0, f26, f0, f28
    stfs f31, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f26, 0x4c(r1)
    stfs f31, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f31, 0x5c(r1)
    stfs f28, 0x60(r1)
    stfs f31, 0x64(r1)
lbl_fn_8009C84C_00001130:
    lfs f5, 0x38(r1)
    li r6, 0x0
    lfs f4, 0x3c(r1)
    li r0, 0x1
    lfs f3, 0x40(r1)
    lfs f2, 0x48(r1)
    lfs f1, 0x4c(r1)
    lfs f0, 0x50(r1)
    stfs f5, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_fn_8009C84C_00001168:
    lfs f0, 0x20(r1)
    addi r4, r1, 0x20
    stfs f0, 0x8(r1)
    li r7, 0x0
    mtctr r26
lbl_fn_8009C84C_0000117C:
    frsp f0, f0
    lfs f1, 0x0(r4)
    fcmpo cr0, f0, f1
    bge lbl_fn_8009C84C_00001194
    mr r3, r4
    b lbl_fn_8009C84C_00001198
lbl_fn_8009C84C_00001194:
    addi r3, r1, 0x8
lbl_fn_8009C84C_00001198:
    lfs f0, 0x0(r3)
    addi r5, r4, 0x4
    stfs f0, 0x8(r1)
    lfs f1, 0x4(r4)
    fcmpo cr0, f0, f1
    bge lbl_fn_8009C84C_000011B8
    mr r3, r5
    b lbl_fn_8009C84C_000011BC
lbl_fn_8009C84C_000011B8:
    addi r3, r1, 0x8
lbl_fn_8009C84C_000011BC:
    lfs f0, 0x0(r3)
    stfs f0, 0x8(r1)
    lfsu f1, 0x4(r5)
    fcmpo cr0, f0, f1
    bge lbl_fn_8009C84C_000011D8
    mr r3, r5
    b lbl_fn_8009C84C_000011DC
lbl_fn_8009C84C_000011D8:
    addi r3, r1, 0x8
lbl_fn_8009C84C_000011DC:
    lfs f0, 0x0(r3)
    addi r4, r4, 0xc
    stfs f0, 0x8(r1)
    bdnz lbl_fn_8009C84C_0000117C
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    beq lbl_fn_8009C84C_00001200
    fcmpo cr0, f0, f29
    bge lbl_fn_8009C84C_0000125C
lbl_fn_8009C84C_00001200:
    lfs f5, 0x20(r1)
    cmpwi r0, 0x0
    lfs f3, 0x24(r1)
    li r7, 0x1
    fmuls f4, f5, f30
    lfs f1, 0x28(r1)
    fmuls f2, f3, f30
    lfs f5, 0x2c(r1)
    fmuls f0, f1, f30
    stfs f4, 0x20(r1)
    fmuls f4, f5, f30
    lfs f3, 0x30(r1)
    stfs f2, 0x24(r1)
    fmuls f2, f3, f30
    lfs f1, 0x34(r1)
    stfs f0, 0x28(r1)
    fmuls f0, f1, f30
    stfs f4, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    bne lbl_fn_8009C84C_00001258
    addi r6, r6, 0x1
lbl_fn_8009C84C_00001258:
    li r0, 0x0
lbl_fn_8009C84C_0000125C:
    cmpwi r7, 0x0
    bne lbl_fn_8009C84C_00001168
    addi r3, r28, 0x1
    addi r4, r1, 0x20
    extsb r5, r6
    bl fn_80616EF0
    addi r30, r30, 0x10
    addi r28, r28, 0x1
lbl_fn_8009C84C_0000127C:
    lwz r0, 0xfc(r29)
    cmpw r28, r0
    blt lbl_fn_8009C84C_00000FA4
    addi r11, r1, 0x80
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
    psq_l f24, 0xa8(r1), 0, 0
    lfd f24, 0xa0(r1)
    psq_l f23, 0x98(r1), 0, 0
    lfd f23, 0x90(r1)
    psq_l f22, 0x88(r1), 0, 0
    lfd f22, 0x80(r1)
    bl _restgpr_26
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8009CC28(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
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
    stfd f26, 0x90(r1)
    psq_st f26, 0x98(r1), 0, 0
    fmr f26, f1
    stw r31, 0x8c(r1)
    mr r31, r4
    stw r30, 0x88(r1)
    mr r30, r3
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    mr r28, r6
    lwz r3, lbl_8087EFB4
    bl fn_800C08B0
    lwz r4, lbl_8087EFB4
    lwz r3, lbl_8087EFA8
    lwz r4, 0x2fc(r4)
    lfs f3, 0x110(r3)
    lwz r0, 0x234(r4)
    lfs f2, 0x114(r3)
    lfs f1, 0x118(r3)
    cmpwi r0, 0x0
    lfs f0, 0x11c(r3)
    stfs f3, 0x20(r1)
    lwz r0, 0x108(r3)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    beq lbl_fn_8009CC28_000013B4
    lfs f3, 0x244(r4)
    lfs f2, 0x248(r4)
    lfs f1, 0x24c(r4)
    lfs f0, 0x250(r4)
    stfs f3, 0x20(r1)
    lwz r0, 0x23c(r4)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
lbl_fn_8009CC28_000013B4:
    lfs f2, 0x10c(r3)
    lfs f0, lbl_8087D818
    lfs f3, lbl_80880C48
    fmuls f0, f2, f0
    fcmpo cr0, f26, f0
    ble lbl_fn_8009CC28_000013D8
    fsubs f1, f26, f0
    fsubs f0, f2, f0
    fdivs f3, f1, f0
lbl_fn_8009CC28_000013D8:
    lfs f4, lbl_80880C4C
    cmpwi r0, 0x1
    lfs f2, 0x20(r1)
    lfs f1, 0x24(r1)
    fsubs f3, f4, f3
    lfs f0, 0x28(r1)
    fsubs f2, f4, f2
    fsubs f1, f4, f1
    fsubs f0, f4, f0
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bne lbl_fn_8009CC28_00001434
    fsubs f2, f4, f2
    stfs f4, 0x2c(r1)
    fsubs f1, f4, f1
    fsubs f0, f4, f0
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_fn_8009CC28_00001434:
    lfs f4, lbl_80880C58
    cntlzw r0, r28
    lfs f0, 0x20(r1)
    srwi. r29, r0, 5
    lfs f2, 0x24(r1)
    fmuls f3, f4, f0
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x60(r1)
    fctiwz f0, f0
    stfd f2, 0x68(r1)
    lwz r5, 0x64(r1)
    stfd f1, 0x70(r1)
    lwz r4, 0x6c(r1)
    stfd f0, 0x78(r1)
    lwz r3, 0x74(r1)
    lwz r0, 0x7c(r1)
    stb r5, 0x8(r1)
    stb r4, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    beq lbl_fn_8009CC28_000014AC
    lwz r0, 0x14(r31)
    srwi r29, r0, 31
lbl_fn_8009CC28_000014AC:
    neg r3, r29
    lwz r0, 0x8(r1)
    or r3, r3, r29
    stw r0, 0x1c(r1)
    srwi r0, r3, 31
    addi r4, r1, 0x1c
    stb r0, lbl_8087EF28
    li r3, 0x4
    bl fn_80615C40
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x2
    li r9, 0x2
    bl fn_80615D50
    cmpwi r29, 0x0
    lwz r29, lbl_8087EEE0
    beq lbl_fn_8009CC28_000017B4
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_80076760
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    bl fn_80076760
    mr r3, r29
    li r4, 0x1
    li r5, 0x4
    bl fn_80076760
    mr r3, r29
    li r4, 0x2
    li r5, 0x40
    bl fn_80076760
    mr r3, r29
    bl fn_800761A8
    mr r3, r31
    li r4, 0x3
    bl fn_80080528
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8009CC28_00001574
    mr r3, r31
    li r4, 0x0
    bl fn_80080528
    mr r28, r3
lbl_fn_8009CC28_00001574:
    lwz r5, 0x4(r28)
    mr r3, r29
    li r4, 0x0
    bl fn_800763C0
    lwz r3, 0x8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8009CC28_00001598
    lfs f31, 0x0(r3)
    b lbl_fn_8009CC28_0000159C
lbl_fn_8009CC28_00001598:
    lfs f31, lbl_80880B88
lbl_fn_8009CC28_0000159C:
    cmpwi r3, 0x0
    beq lbl_fn_8009CC28_000015AC
    lfs f30, 0x4(r3)
    b lbl_fn_8009CC28_000015B0
lbl_fn_8009CC28_000015AC:
    lfs f30, lbl_80880B8C
lbl_fn_8009CC28_000015B0:
    cmpwi r3, 0x0
    beq lbl_fn_8009CC28_000015C0
    lfs f29, 0xc(r3)
    b lbl_fn_8009CC28_000015C4
lbl_fn_8009CC28_000015C0:
    lfs f29, lbl_80880B94
lbl_fn_8009CC28_000015C4:
    cmpwi r3, 0x0
    beq lbl_fn_8009CC28_000015D4
    lfs f28, 0x10(r3)
    b lbl_fn_8009CC28_000015D8
lbl_fn_8009CC28_000015D4:
    lfs f28, lbl_80880B98
lbl_fn_8009CC28_000015D8:
    cmpwi r3, 0x0
    beq lbl_fn_8009CC28_000015E8
    lfs f27, 0x8(r3)
    b lbl_fn_8009CC28_000015EC
lbl_fn_8009CC28_000015E8:
    lfs f27, lbl_80880B90
lbl_fn_8009CC28_000015EC:
    lfs f3, lbl_80880C48
    fcmpu cr0, f3, f27
    beq lbl_fn_8009CC28_00001630
    fmr f1, f27
    bl fn_8068A850
    frsp f26, f1
    fmr f1, f27
    bl fn_8068AD58
    frsp f3, f1
    addi r3, r1, 0x30
    fmr f1, f31
    fmr f2, f30
    fmr f4, f26
    fmr f5, f29
    fmr f6, f28
    bl fn_800D5C84
    b lbl_fn_8009CC28_00001674
lbl_fn_8009CC28_00001630:
    lfs f1, lbl_80880C4C
    fneg f2, f29
    stfs f31, 0x30(r1)
    fsubs f0, f28, f1
    fmuls f2, f31, f2
    stfs f3, 0x34(r1)
    fmadds f0, f30, f0, f1
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f30, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f3, 0x5c(r1)
lbl_fn_8009CC28_00001674:
    lwz r4, 0x14(r30)
    li r3, 0x1
    addi r0, r4, 0x1
    cntlzw r0, r0
    srwi r28, r0, 5
    bl fn_806179E0
    li r3, 0x1
    bl fn_80613BB0
    lwz r0, 0x38(r31)
    li r3, 0x3
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    lbz r7, 0xf(r1)
    stw r0, 0x14(r1)
    lbz r6, 0x12(r1)
    stw r0, 0x18(r1)
    lbz r5, 0x15(r1)
    lbz r4, 0x18(r1)
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x3
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xa
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    cmpwi r28, 0x0
    bne lbl_fn_8009CC28_00001784
    addi r3, r1, 0x30
    li r4, 0x1e
    li r5, 0x1
    bl fn_80618420
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    b lbl_fn_8009CC28_0000181C
lbl_fn_8009CC28_00001784:
    addi r3, r1, 0x30
    li r4, 0x40
    li r5, 0x0
    bl fn_80618420
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x40
    bl fn_80613960
    b lbl_fn_8009CC28_0000181C
lbl_fn_8009CC28_000017B4:
    mr r3, r29
    li r4, 0x3
    li r5, 0x0
    bl fn_80076760
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_80076760
    mr r3, r29
    bl fn_800761A8
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x4
    bl fn_80617340
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
lbl_fn_8009CC28_0000181C:
    lwz r0, 0xf4(r1)
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
    psq_l f26, 0x98(r1), 0, 0
    lfd f26, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8009D1A4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r4, r1, 0xc
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    lis r31, lbl_807C7270@ha
    addi r31, r31, lbl_807C7270@l
    stw r30, 0x28(r1)
    mr r30, r3
    li r3, 0x4
    stw r29, 0x24(r1)
    lwz r29, lbl_80880C68
    stw r28, 0x20(r1)
    stw r29, 0xc(r1)
    bl fn_80615C40
    stw r29, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0x5
    bl fn_80615C40
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x2
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lbz r0, lbl_8087EF34
    extsb. r0, r0
    bne lbl_fn_8009D1A4_0000197C
    lis r29, lbl_807C72B0@ha
    addi r3, r29, lbl_807C72B0@l
    bl fn_800D5738
    lis r4, fn_800D5808@ha
    addi r3, r29, lbl_807C72B0@l
    addi r4, r4, fn_800D5808@l
    addi r5, r31, 0x0
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF34
lbl_fn_8009D1A4_0000197C:
    lbz r0, lbl_8087EF35
    extsb. r0, r0
    bne lbl_fn_8009D1A4_000019B0
    lis r29, lbl_807C72E0@ha
    addi r3, r29, lbl_807C72E0@l
    bl fn_800D5738
    lis r4, fn_800D5808@ha
    addi r3, r29, lbl_807C72E0@l
    addi r4, r4, fn_800D5808@l
    addi r5, r31, 0xc
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF35
lbl_fn_8009D1A4_000019B0:
    lbz r0, lbl_8087EF36
    extsb. r0, r0
    bne lbl_fn_8009D1A4_000019E4
    lis r29, lbl_807C7310@ha
    addi r3, r29, lbl_807C7310@l
    bl fn_800D5738
    lis r4, fn_800D5808@ha
    addi r3, r29, lbl_807C7310@l
    addi r4, r4, fn_800D5808@l
    addi r5, r31, 0x18
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF36
lbl_fn_8009D1A4_000019E4:
    lbz r0, lbl_8087EF37
    extsb. r0, r0
    bne lbl_fn_8009D1A4_00001A18
    lis r29, lbl_807C7340@ha
    addi r3, r29, lbl_807C7340@l
    bl fn_800D5738
    lis r4, fn_800D5808@ha
    addi r3, r29, lbl_807C7340@l
    addi r4, r4, fn_800D5808@l
    addi r5, r31, 0x24
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF37
lbl_fn_8009D1A4_00001A18:
    lbz r0, lbl_8087EF38
    extsb. r0, r0
    bne lbl_fn_8009D1A4_00001A4C
    lis r29, lbl_807C7370@ha
    addi r3, r29, lbl_807C7370@l
    bl fn_800D5738
    lis r4, fn_800D5808@ha
    addi r3, r29, lbl_807C7370@l
    addi r4, r4, fn_800D5808@l
    addi r5, r31, 0x30
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF38
lbl_fn_8009D1A4_00001A4C:
    lwz r0, lbl_8087EF30
    cmpwi r0, 0x0
    bne lbl_fn_8009D1A4_00001AB8
    li r0, 0x1
    lis r3, lbl_807C72B0@ha
    lis r31, lbl_80732648@ha
    stw r0, lbl_8087EF30
    addi r3, r3, lbl_807C72B0@l
    addi r4, r31, lbl_80732648@l
    bl fn_800D594C
    addi r31, r31, lbl_80732648@l
    lis r3, lbl_807C72E0@ha
    addi r3, r3, lbl_807C72E0@l
    addi r4, r31, 0x15
    bl fn_800D594C
    lis r3, lbl_807C7310@ha
    addi r4, r31, 0x2b
    addi r3, r3, lbl_807C7310@l
    bl fn_800D594C
    lis r3, lbl_807C7340@ha
    addi r4, r31, 0x41
    addi r3, r3, lbl_807C7340@l
    bl fn_800D594C
    lis r3, lbl_807C7370@ha
    addi r4, r31, 0x57
    addi r3, r3, lbl_807C7370@l
    bl fn_800D594C
lbl_fn_8009D1A4_00001AB8:
    lwz r3, 0x8(r30)
    li r28, 0x0
    li r4, 0x0
    lwz r3, 0x10(r3)
    lwz r0, 0xe4(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8009D1A4_00001B44
lbl_fn_8009D1A4_00001AD8:
    lwz r0, 0xc(r30)
    add r29, r0, r4
    lbz r0, 0x10(r29)
    extsb. r0, r0
    bne lbl_fn_8009D1A4_00001B3C
    lwz r31, 0x4(r29)
    li r30, 0x0
    lwz r0, 0x28(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8009D1A4_00001B20
    mr r3, r31
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8009D1A4_00001B24
    addi r3, r31, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8009D1A4_00001B24
lbl_fn_8009D1A4_00001B20:
    li r30, 0x1
lbl_fn_8009D1A4_00001B24:
    cmpwi r30, 0x0
    beq lbl_fn_8009D1A4_00001B44
    lwz r3, 0x4(r29)
    bl fn_806163C0
    clrlwi r28, r3, 16
    b lbl_fn_8009D1A4_00001B44
lbl_fn_8009D1A4_00001B3C:
    addi r4, r4, 0x18
    bdnz lbl_fn_8009D1A4_00001AD8
lbl_fn_8009D1A4_00001B44:
    cmpwi r28, 0x200
    ble lbl_fn_8009D1A4_00001B58
    lis r28, lbl_807C7370@ha
    addi r28, r28, lbl_807C7370@l
    b lbl_fn_8009D1A4_00001B98
lbl_fn_8009D1A4_00001B58:
    cmpwi r28, 0x100
    ble lbl_fn_8009D1A4_00001B6C
    lis r28, lbl_807C7340@ha
    addi r28, r28, lbl_807C7340@l
    b lbl_fn_8009D1A4_00001B98
lbl_fn_8009D1A4_00001B6C:
    cmpwi r28, 0x80
    ble lbl_fn_8009D1A4_00001B80
    lis r28, lbl_807C7310@ha
    addi r28, r28, lbl_807C7310@l
    b lbl_fn_8009D1A4_00001B98
lbl_fn_8009D1A4_00001B80:
    cmpwi r28, 0x40
    lis r28, lbl_807C72B0@ha
    addi r28, r28, lbl_807C72B0@l
    ble lbl_fn_8009D1A4_00001B98
    lis r28, lbl_807C72E0@ha
    addi r28, r28, lbl_807C72E0@l
lbl_fn_8009D1A4_00001B98:
    lwz r3, lbl_8087EFA8
    li r30, 0x0
    lwz r29, 0x224(r3)
    cmpwi r29, 0x0
    beq lbl_fn_8009D1A4_00001BB0
    lwz r30, 0x228(r3)
lbl_fn_8009D1A4_00001BB0:
    lwz r0, 0x28(r28)
    lfs f31, 0x22c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009D1A4_00001BCC
    lbz r3, 0x2f(r28)
    extsb r3, r3
    b lbl_fn_8009D1A4_00001BD4
lbl_fn_8009D1A4_00001BCC:
    addi r3, r28, 0x20
    bl fn_80478198
lbl_fn_8009D1A4_00001BD4:
    subi r3, r3, 0x1
    lis r0, 0x4330
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lis r4, lbl_80732640@ha
    fmr f3, f31
    stw r0, 0x10(r1)
    mr r3, r28
    lfd f2, lbl_80732640@l(r4)
    mr r8, r29
    lfd f0, 0x10(r1)
    lfs f1, lbl_80880C48
    clrlwi r7, r30, 24
    fsubs f2, f0, f2
    li r4, 0x5
    li r5, 0x1
    li r6, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EEE0
    mr r5, r28
    li r4, 0x0
    bl fn_800763C0
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8009D58C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    bl _savegpr_24
    lwz r4, 0x24(r3)
    mr r24, r3
    mr r25, r5
    mr r29, r6
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001CA0
    lwz r0, 0x0(r5)
    lwz r4, 0x4(r4)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    b lbl_fn_8009D58C_00001CA4
lbl_fn_8009D58C_00001CA0:
    lwz r4, 0x0(r5)
lbl_fn_8009D58C_00001CA4:
    lwz r6, 0xc(r3)
    cmpwi r4, 0x0
    lwz r0, 0x4(r5)
    lwz r5, 0x40(r6)
    slwi r0, r0, 2
    lwzx r28, r5, r0
    blt lbl_fn_8009D58C_00001CEC
    lwz r5, 0x4c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8009D58C_00001CD8
    lbzx r0, r5, r4
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00002388
lbl_fn_8009D58C_00001CD8:
    lwz r3, 0x20(r3)
    slwi r0, r4, 2
    lwz r3, 0x4(r3)
    lwzx r27, r3, r0
    b lbl_fn_8009D58C_00001CF8
lbl_fn_8009D58C_00001CEC:
    lwz r3, lbl_8087EFE0
    bl fn_800C607C
    mr r27, r3
lbl_fn_8009D58C_00001CF8:
    cmpwi r27, 0x0
    beq lbl_fn_8009D58C_00002388
    lbz r0, lbl_8087EF29
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001D1C
    lbz r0, 0x48(r27)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8009D58C_00002388
lbl_fn_8009D58C_00001D1C:
    lwz r5, lbl_8087EFB4
    lbz r0, lbl_8087EFB0
    lwz r3, 0x2f8(r5)
    cmpwi r0, 0x0
    lbz r4, 0x49(r27)
    slwi r0, r3, 2
    lwzx r3, r5, r0
    bne lbl_fn_8009D58C_00001D4C
    lwz r0, 0xc(r3)
    and r0, r4, r0
    cmplw r4, r0
    bne lbl_fn_8009D58C_00002388
lbl_fn_8009D58C_00001D4C:
    lwz r0, 0x14(r28)
    li r26, 0x0
    cmpwi r0, -0x1
    bne lbl_fn_8009D58C_00001D60
    ori r26, r26, 0x1
lbl_fn_8009D58C_00001D60:
    lwz r5, lbl_8087EFA8
    lwz r0, 0x148(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001D78
    ori r26, r26, 0x4
    b lbl_fn_8009D58C_00001E2C
lbl_fn_8009D58C_00001D78:
    lwz r4, 0x4(r24)
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_8009D58C_00001D94
    lwz r0, 0x104(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8009D58C_00001DA0
lbl_fn_8009D58C_00001D94:
    lwz r0, 0x13c(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001E10
lbl_fn_8009D58C_00001DA0:
    cmpwi r29, 0x0
    beq lbl_fn_8009D58C_00001DFC
    lwz r0, 0x184(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001DBC
    ori r26, r26, 0x2
    b lbl_fn_8009D58C_00001DFC
lbl_fn_8009D58C_00001DBC:
    lwz r0, 0x188(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001DD0
    ori r26, r26, 0x10
    b lbl_fn_8009D58C_00001DFC
lbl_fn_8009D58C_00001DD0:
    rlwinm r4, r4, 0, 16, 16
    addis r0, r4, 0x0
    cmplwi r0, 0x8000
    beq lbl_fn_8009D58C_00001DF0
    lbz r0, 0x48(r27)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8009D58C_00001DF8
lbl_fn_8009D58C_00001DF0:
    ori r26, r26, 0x10
    b lbl_fn_8009D58C_00001DFC
lbl_fn_8009D58C_00001DF8:
    ori r26, r26, 0x2
lbl_fn_8009D58C_00001DFC:
    lwz r0, 0x134(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001E2C
    rlwinm r26, r26, 0, 31, 29
    b lbl_fn_8009D58C_00001E2C
lbl_fn_8009D58C_00001E10:
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x100
    bne lbl_fn_8009D58C_00001E2C
    lwz r0, 0x144(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001E2C
    ori r26, r26, 0x4
lbl_fn_8009D58C_00001E2C:
    lwz r0, 0x2f8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001F24
    lwz r7, 0x84(r24)
    li r5, 0x1
    li r6, 0x1
    li r4, 0x0
    lwz r8, 0xc8(r7)
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    bne lbl_fn_8009D58C_00001E6C
    lwz r0, 0x4(r24)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x100
    bne lbl_fn_8009D58C_00001E6C
    li r4, 0x1
lbl_fn_8009D58C_00001E6C:
    cmpwi r4, 0x0
    bne lbl_fn_8009D58C_00001EA4
    rlwinm r0, r8, 0, 30, 30
    li r4, 0x0
    cmplwi r0, 0x2
    bne lbl_fn_8009D58C_00001E98
    lwz r0, 0x4(r24)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_8009D58C_00001E98
    li r4, 0x1
lbl_fn_8009D58C_00001E98:
    cmpwi r4, 0x0
    bne lbl_fn_8009D58C_00001EA4
    li r6, 0x0
lbl_fn_8009D58C_00001EA4:
    cmpwi r6, 0x0
    bne lbl_fn_8009D58C_00001EC4
    lwz r0, 0x4(r24)
    rlwinm r4, r0, 0, 11, 11
    subis r0, r4, 0x10
    cmplwi r0, 0x0
    beq lbl_fn_8009D58C_00001EC4
    li r5, 0x0
lbl_fn_8009D58C_00001EC4:
    cmpwi r5, 0x0
    li r5, 0x0
    beq lbl_fn_8009D58C_00001EE8
    lwz r0, 0x4(r24)
    rlwinm r4, r0, 0, 10, 10
    subis r0, r4, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_8009D58C_00001EE8
    li r5, 0x1
lbl_fn_8009D58C_00001EE8:
    cmpwi r5, 0x0
    beq lbl_fn_8009D58C_00001F24
    lwz r0, 0x70(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001F14
    lwz r0, 0x74(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001F0C
    b lbl_fn_8009D58C_00001F18
lbl_fn_8009D58C_00001F0C:
    addi r0, r7, 0x78
    b lbl_fn_8009D58C_00001F18
lbl_fn_8009D58C_00001F14:
    li r0, 0x0
lbl_fn_8009D58C_00001F18:
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00001F24
    ori r26, r26, 0x8
lbl_fn_8009D58C_00001F24:
    lwz r0, 0x4(r24)
    rlwinm r4, r0, 0, 12, 12
    subis r0, r4, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_8009D58C_00001F50
    ori r26, r26, 0x20
    rlwinm. r0, r26, 0, 28, 28
    beq lbl_fn_8009D58C_00001F50
    rlwinm. r0, r26, 0, 29, 29
    beq lbl_fn_8009D58C_00001F50
    rlwinm r26, r26, 0, 30, 28
lbl_fn_8009D58C_00001F50:
    lwz r0, 0x58(r24)
    lwz r3, 0x10(r3)
    cmpwi r0, 0x0
    and r26, r26, r3
    beq lbl_fn_8009D58C_00001F68
    ori r26, r26, 0x40
lbl_fn_8009D58C_00001F68:
    lwz r0, 0x4(r28)
    cmplwi r0, 0x2
    blt lbl_fn_8009D58C_00001F7C
    lwz r31, 0x54(r28)
    b lbl_fn_8009D58C_00001F8C
lbl_fn_8009D58C_00001F7C:
    lwz r3, 0x8(r24)
    lwz r4, 0x4(r25)
    bl fn_8047614C
    mr r31, r3
lbl_fn_8009D58C_00001F8C:
    lbz r0, lbl_8087EFB0
    cmpwi r0, 0x0
    bne lbl_fn_8009D58C_00001FA0
    lwz r29, 0x44(r27)
    b lbl_fn_8009D58C_00001FA4
lbl_fn_8009D58C_00001FA0:
    li r29, 0x0
lbl_fn_8009D58C_00001FA4:
    lwz r6, 0x1c(r24)
    lwz r5, 0x88(r24)
    lwz r3, 0x8c(r24)
    lwz r4, 0x90(r24)
    lwz r0, 0x94(r24)
    lfs f3, 0x0(r6)
    lfs f2, 0x4(r6)
    lfs f1, 0x8(r6)
    lfs f0, 0xc(r6)
    stw r3, 0x2c(r1)
    lwz r30, 0x98(r24)
    stw r4, 0x30(r1)
    lwz r3, 0x8(r24)
    stw r5, 0x28(r1)
    lwz r4, 0x4(r25)
    stw r0, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_80476170
    lwz r10, 0x84(r24)
    li r8, 0x0
    lwz r9, 0x14(r24)
    la r7, lbl_8087D81C
    lfs f3, 0x38(r1)
    lfs f2, 0x3c(r1)
    lfs f1, 0x40(r1)
    lfs f0, 0x44(r1)
    lwz r6, 0x28(r1)
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r3, 0x60(r1)
    addi r3, r1, 0x48
    stw r26, 0x4c(r1)
    stw r27, 0x50(r1)
    stw r28, 0x54(r1)
    stw r10, 0x58(r1)
    stw r9, 0x5c(r1)
    stw r31, 0x64(r1)
    stw r8, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f0, 0x78(r1)
    stw r30, 0x7c(r1)
    stw r7, 0x80(r1)
    stw r6, 0x84(r1)
    stw r5, 0x88(r1)
    stw r4, 0x8c(r1)
    stw r0, 0x90(r1)
    bl fn_800BC438
    lwz r0, 0x0(r25)
    lwz r4, 0xc(r24)
    slwi r3, r0, 2
    lbz r0, lbl_8087EFB0
    add r3, r4, r3
    lfs f31, lbl_80880C48
    lwz r3, 0x50(r3)
    cmpwi r0, 0x0
    stw r3, 0x80(r1)
    beq lbl_fn_8009D58C_000020E4
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x18
    lfs f0, 0x38(r24)
    lwz r4, 0xc(r4)
    lfs f2, 0x34(r24)
    lfs f4, 0x84(r4)
    lfs f3, 0x80(r4)
    fsubs f4, f4, f0
    lfs f1, 0x7c(r4)
    lfs f0, 0x30(r24)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f4, 0x20(r1)
    bl fn_805F9940
    fmr f31, f1
lbl_fn_8009D58C_000020E4:
    rlwinm. r0, r26, 0, 29, 29
    beq lbl_fn_8009D58C_0000210C
    lwz r3, 0x5c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8009D58C_000020FC
    b lbl_fn_8009D58C_00002108
lbl_fn_8009D58C_000020FC:
    lwz r3, 0x84(r24)
    addi r4, r24, 0x30
    bl fn_800C258C
lbl_fn_8009D58C_00002108:
    stw r3, 0x68(r1)
lbl_fn_8009D58C_0000210C:
    lwz r6, lbl_8087EFB4
    li r5, 0x0
    lwz r0, 0x954(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8009D58C_00002148
    addis r4, r6, 0x1
    li r3, 0x1000
    lwz r4, -0x76a4(r4)
    subi r0, r4, 0x1000
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_8009D58C_00002148
    li r5, 0x1
lbl_fn_8009D58C_00002148:
    cmpwi r5, 0x0
    beq lbl_fn_8009D58C_00002270
    lwz r3, lbl_8087EFA8
    lwz r0, 0x398(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8009D58C_0000216C
    lwz r0, 0x2f8(r6)
    cmpwi r0, 0x8
    bne lbl_fn_8009D58C_00002270
lbl_fn_8009D58C_0000216C:
    lwz r3, lbl_8087EFB4
    lwz r5, 0x48(r1)
    lwz r0, 0x958(r3)
    addis r4, r3, 0x1
    lwz r4, -0x76a4(r4)
    slwi r0, r0, 3
    stw r5, 0x10(r1)
    add r0, r3, r0
    addic. r6, r0, 0x95c
    stw r4, 0x14(r1)
    beq lbl_fn_8009D58C_000021A0
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
lbl_fn_8009D58C_000021A0:
    lwz r5, 0x958(r3)
    addis r4, r3, 0x1
    addi r0, r5, 0x1
    stw r0, 0x958(r3)
    lwz r0, -0x76a4(r4)
    mulli r0, r0, 0x4c
    add r0, r4, r0
    subic. r4, r0, 0x76a0
    beq lbl_fn_8009D58C_0000225C
    lwz r0, 0x48(r1)
    stw r0, 0x0(r4)
    lwz r0, 0x4c(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x50(r1)
    stw r0, 0x8(r4)
    lwz r0, 0x54(r1)
    stw r0, 0xc(r4)
    lwz r0, 0x58(r1)
    stw r0, 0x10(r4)
    lwz r0, 0x5c(r1)
    stw r0, 0x14(r4)
    lwz r0, 0x60(r1)
    stw r0, 0x18(r4)
    lwz r0, 0x64(r1)
    stw r0, 0x1c(r4)
    lwz r0, 0x68(r1)
    stw r0, 0x20(r4)
    lfs f0, 0x6c(r1)
    stfs f0, 0x24(r4)
    lfs f0, 0x70(r1)
    stfs f0, 0x28(r4)
    lfs f0, 0x74(r1)
    stfs f0, 0x2c(r4)
    lfs f0, 0x78(r1)
    stfs f0, 0x30(r4)
    lwz r0, 0x7c(r1)
    stw r0, 0x34(r4)
    lwz r0, 0x80(r1)
    stw r0, 0x38(r4)
    lwz r0, 0x84(r1)
    stw r0, 0x3c(r4)
    lwz r0, 0x88(r1)
    stw r0, 0x40(r4)
    lwz r0, 0x8c(r1)
    stw r0, 0x44(r4)
    lwz r0, 0x90(r1)
    stw r0, 0x48(r4)
lbl_fn_8009D58C_0000225C:
    addis r4, r3, 0x1
    lwz r3, -0x76a4(r4)
    addi r0, r3, 0x1
    stw r0, -0x76a4(r4)
    b lbl_fn_8009D58C_00002388
lbl_fn_8009D58C_00002270:
    cmpwi r29, 0x0
    ble lbl_fn_8009D58C_0000237C
    lwz r3, lbl_8087EFB4
    lwz r5, 0x48(r1)
    lwz r0, 0x958(r3)
    addis r4, r3, 0x1
    lwz r4, -0x76a4(r4)
    slwi r0, r0, 3
    stw r5, 0x8(r1)
    add r0, r3, r0
    addic. r6, r0, 0x95c
    stw r4, 0xc(r1)
    beq lbl_fn_8009D58C_000022AC
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
lbl_fn_8009D58C_000022AC:
    lwz r5, 0x958(r3)
    addis r4, r3, 0x1
    addi r0, r5, 0x1
    stw r0, 0x958(r3)
    lwz r0, -0x76a4(r4)
    mulli r0, r0, 0x4c
    add r0, r4, r0
    subic. r4, r0, 0x76a0
    beq lbl_fn_8009D58C_00002368
    lwz r0, 0x48(r1)
    stw r0, 0x0(r4)
    lwz r0, 0x4c(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x50(r1)
    stw r0, 0x8(r4)
    lwz r0, 0x54(r1)
    stw r0, 0xc(r4)
    lwz r0, 0x58(r1)
    stw r0, 0x10(r4)
    lwz r0, 0x5c(r1)
    stw r0, 0x14(r4)
    lwz r0, 0x60(r1)
    stw r0, 0x18(r4)
    lwz r0, 0x64(r1)
    stw r0, 0x1c(r4)
    lwz r0, 0x68(r1)
    stw r0, 0x20(r4)
    lfs f0, 0x6c(r1)
    stfs f0, 0x24(r4)
    lfs f0, 0x70(r1)
    stfs f0, 0x28(r4)
    lfs f0, 0x74(r1)
    stfs f0, 0x2c(r4)
    lfs f0, 0x78(r1)
    stfs f0, 0x30(r4)
    lwz r0, 0x7c(r1)
    stw r0, 0x34(r4)
    lwz r0, 0x80(r1)
    stw r0, 0x38(r4)
    lwz r0, 0x84(r1)
    stw r0, 0x3c(r4)
    lwz r0, 0x88(r1)
    stw r0, 0x40(r4)
    lwz r0, 0x8c(r1)
    stw r0, 0x44(r4)
    lwz r0, 0x90(r1)
    stw r0, 0x48(r4)
lbl_fn_8009D58C_00002368:
    addis r4, r3, 0x1
    lwz r3, -0x76a4(r4)
    addi r0, r3, 0x1
    stw r0, -0x76a4(r4)
    b lbl_fn_8009D58C_00002388
lbl_fn_8009D58C_0000237C:
    fmr f1, f31
    addi r3, r1, 0x48
    bl fn_8009DE60
lbl_fn_8009D58C_00002388:
    addi r11, r1, 0xc0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    bl _restgpr_24
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8009DCE0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r21, 0x14(r1)
    mr r26, r3
    lwz r29, 0x8(r3)
    li r28, 0x0
    li r27, 0x0
    li r25, 0x0
    b lbl_fn_8009DCE0_00002508
lbl_fn_8009DCE0_000023D0:
    lwz r0, 0x4(r29)
    lwzx r30, r25, r0
    add r6, r0, r25
    lwz r31, 0x4(r6)
    cmpwi r30, 0xb
    bne lbl_fn_8009DCE0_00002500
    mulli r5, r28, 0x18
    lbz r4, 0x4a(r26)
    b lbl_fn_8009DCE0_000023FC
lbl_fn_8009DCE0_000023F4:
    addi r5, r5, 0x18
    addi r28, r28, 0x1
lbl_fn_8009DCE0_000023FC:
    cmpw r28, r4
    bge lbl_fn_8009DCE0_0000241C
    lwz r0, 0xc(r26)
    add r3, r0, r5
    lbz r0, 0x10(r3)
    extsb r0, r0
    cmpw r0, r30
    blt lbl_fn_8009DCE0_000023F4
lbl_fn_8009DCE0_0000241C:
    cmpw r28, r4
    bge lbl_fn_8009DCE0_00002448
    mulli r0, r28, 0x18
    lwz r3, 0xc(r26)
    add r23, r3, r0
    lbz r0, 0x10(r23)
    extsb r0, r0
    cmpw r30, r0
    bne lbl_fn_8009DCE0_00002448
    addi r28, r28, 0x1
    b lbl_fn_8009DCE0_0000244C
lbl_fn_8009DCE0_00002448:
    lwz r23, 0x8(r6)
lbl_fn_8009DCE0_0000244C:
    cmpwi r23, 0x0
    li r21, 0x0
    beq lbl_fn_8009DCE0_000024C0
    lwz r22, 0x4(r23)
    cmpwi r22, 0x0
    beq lbl_fn_8009DCE0_000024A8
    lwz r0, 0x28(r22)
    li r24, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8009DCE0_00002494
    mr r3, r22
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8009DCE0_00002498
    addi r3, r22, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8009DCE0_00002498
lbl_fn_8009DCE0_00002494:
    li r24, 0x1
lbl_fn_8009DCE0_00002498:
    cmpwi r24, 0x0
    beq lbl_fn_8009DCE0_000024A8
    lwz r21, 0x4(r23)
    b lbl_fn_8009DCE0_000024C0
lbl_fn_8009DCE0_000024A8:
    lwz r0, 0x4(r29)
    add r3, r0, r25
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8009DCE0_000024C0
    lwz r21, 0x4(r3)
lbl_fn_8009DCE0_000024C0:
    cmpwi r30, 0xb
    bne lbl_fn_8009DCE0_000024E0
    lwz r3, lbl_8087EFA8
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009DCE0_000024E0
    lwz r3, lbl_8087EEB0
    addi r21, r3, 0x40
lbl_fn_8009DCE0_000024E0:
    cmpwi r21, 0x0
    bne lbl_fn_8009DCE0_000024F0
    lwz r3, lbl_8087EEB0
    addi r21, r3, 0x10
lbl_fn_8009DCE0_000024F0:
    lwz r3, lbl_8087EEE0
    mr r4, r31
    mr r5, r21
    bl fn_800763C0
lbl_fn_8009DCE0_00002500:
    addi r27, r27, 0x1
    addi r25, r25, 0xc
lbl_fn_8009DCE0_00002508:
    lwz r0, 0x0(r29)
    cmplw r27, r0
    blt lbl_fn_8009DCE0_000023D0
    lmw r21, 0x14(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8009DE60(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x58(r1)
    fmr f31, f1
    stmw r22, 0x30(r1)
    mr r23, r3
    lwz r29, 0x8(r3)
    lwz r25, 0x10(r3)
    lwz r30, 0x4(r3)
    lwz r28, 0xc(r3)
    mr r4, r25
    lwz r27, 0x18(r3)
    lwz r26, 0x1c(r3)
    lwz r24, 0x14(r3)
    lwz r31, 0x8(r29)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB40
    lwz r12, 0x3c(r23)
    cmpwi r12, 0x0
    beq lbl_fn_8009DE60_0000258C
    lwz r3, 0x44(r23)
    lwz r4, 0x48(r23)
    mtctr r12
    bctrl
lbl_fn_8009DE60_0000258C:
    lbz r0, lbl_8087EFB0
    cmpwi r0, 0x0
    beq lbl_fn_8009DE60_000025B4
    fmr f1, f31
    mr r3, r28
    mr r4, r29
    mr r5, r31
    extrwi r6, r30, 1, 25
    bl fn_8009CC28
    b lbl_fn_8009DE60_000026D4
lbl_fn_8009DE60_000025B4:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x234(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8009DE60_000025D0
    mr r3, r29
    bl fn_8009D1A4
    b lbl_fn_8009DE60_000026D4
lbl_fn_8009DE60_000025D0:
    mr r3, r28
    mr r4, r29
    mr r5, r25
    addi r6, r23, 0x24
    bl fn_8009BF3C
    rlwinm r0, r30, 0, 26, 26
    cmpwi r0, 0x20
    bne lbl_fn_8009DE60_0000263C
    lwz r3, 0x34(r23)
    lwz r0, 0x0(r3)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_8009DE60_0000263C
    lwz r22, lbl_8087EEE0
    li r4, 0x0
    li r5, 0x1
    mr r3, r22
    bl fn_80076760
    mr r3, r22
    li r4, 0x1
    li r5, 0x4
    bl fn_80076760
    mr r3, r22
    li r4, 0x2
    li r5, 0xc0
    bl fn_80076760
    mr r3, r22
    bl fn_800761A8
lbl_fn_8009DE60_0000263C:
    lwz r0, 0x20(r28)
    lwz r6, 0x20(r23)
    cmpwi r0, -0x1
    beq lbl_fn_8009DE60_0000265C
    lwz r3, lbl_8087EFA8
    li r0, 0x0
    stw r0, 0x18c(r3)
    b lbl_fn_8009DE60_00002668
lbl_fn_8009DE60_0000265C:
    lwz r3, lbl_8087EFA8
    li r0, 0x1
    stw r0, 0x18c(r3)
lbl_fn_8009DE60_00002668:
    lwz r0, 0x70(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8009DE60_0000268C
    lwz r7, 0x74(r25)
    cmpwi r7, 0x0
    beq lbl_fn_8009DE60_00002684
    b lbl_fn_8009DE60_00002690
lbl_fn_8009DE60_00002684:
    addi r7, r25, 0x78
    b lbl_fn_8009DE60_00002690
lbl_fn_8009DE60_0000268C:
    li r7, 0x0
lbl_fn_8009DE60_00002690:
    lwz r3, lbl_8087EEE0
    mr r5, r30
    lwz r4, 0x10(r31)
    lwz r8, 0x34(r23)
    bl fn_80074EC8
    lwz r4, 0x10(r31)
    lwz r6, 0x34(r29)
    lwz r3, 0x190(r4)
    subi r3, r3, 0x1
    mulli r0, r3, 0x88
    add r8, r4, r0
    lwz r0, 0x1c8(r8)
    lwz r4, 0x1bc(r8)
    lwz r5, 0x1c0(r8)
    clrlwi r7, r0, 24
    lwz r8, 0x1cc(r8)
    bl fn_80617460
lbl_fn_8009DE60_000026D4:
    lwz r3, lbl_8087EEE0
    mr r4, r27
    bl fn_80076BE4
    b lbl_fn_8009DE60_000026FC
lbl_fn_8009DE60_000026E4:
    lwz r0, 0x8(r26)
    lwz r3, 0x0(r26)
    lwz r4, 0x4(r26)
    clrlwi r5, r0, 24
    bl fn_80613910
    addi r26, r26, 0xc
lbl_fn_8009DE60_000026FC:
    lwz r0, 0x0(r26)
    cmpwi r0, 0xff
    bne lbl_fn_8009DE60_000026E4
    lbz r0, lbl_8087EFB0
    cmpwi r0, 0x0
    bne lbl_fn_8009DE60_00002734
    lwz r3, lbl_8087EFA8
    lwz r0, 0x234(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8009DE60_00002734
    mr r3, r29
    mr r4, r28
    mr r5, r24
    bl fn_8009BB9C
lbl_fn_8009DE60_00002734:
    lbz r0, lbl_8087EF29
    li r3, -0x1
    stw r3, 0x8(r1)
    cmpwi r0, 0x0
    stw r3, 0xc(r1)
    stw r3, 0x10(r1)
    stw r3, 0x14(r1)
    stw r3, 0x18(r1)
    stw r3, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r3, 0x24(r1)
    stw r3, 0x28(r1)
    stw r3, 0x2c(r1)
    beq lbl_fn_8009DE60_00002820
    lwz r22, lbl_8087EEE0
    li r4, 0xb
    li r5, 0x0
    mr r3, r22
    bl fn_80076760
    mr r3, r22
    li r4, 0x8
    li r5, 0x1
    bl fn_80076760
    mr r3, r22
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r22
    li r4, 0xa
    li r5, 0x1
    bl fn_80076760
    mr r3, r22
    bl fn_800761A8
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_8009DE60_000027FC
lbl_fn_8009DE60_000027C4:
    lwz r5, 0x50(r28)
    mr r3, r29
    mr r4, r28
    mr r6, r24
    lwzx r27, r5, r25
    addi r7, r1, 0x8
    mr r5, r27
    bl fn_8009B9E8
    lwz r4, 0x38(r27)
    lwz r3, 0x14(r4)
    lwz r4, 0x10(r4)
    bl fn_80618030
    addi r25, r25, 0x4
    addi r26, r26, 0x1
lbl_fn_8009DE60_000027FC:
    lwz r0, 0x4c(r28)
    cmpw r26, r0
    blt lbl_fn_8009DE60_000027C4
    mr r3, r22
    addi r4, r29, 0x14
    bl fn_80076A28
    mr r3, r22
    bl fn_800761A8
    b lbl_fn_8009DE60_00002870
lbl_fn_8009DE60_00002820:
    li r22, 0x0
    li r25, 0x0
    b lbl_fn_8009DE60_00002864
lbl_fn_8009DE60_0000282C:
    lwz r5, 0x50(r28)
    mr r3, r29
    mr r4, r28
    mr r6, r24
    lwzx r26, r5, r25
    addi r7, r1, 0x8
    mr r5, r26
    bl fn_8009B9E8
    lwz r4, 0x38(r26)
    lwz r3, 0x14(r4)
    lwz r4, 0x10(r4)
    bl fn_80618030
    addi r25, r25, 0x4
    addi r22, r22, 0x1
lbl_fn_8009DE60_00002864:
    lwz r0, 0x4c(r28)
    cmpw r22, r0
    blt lbl_fn_8009DE60_0000282C
lbl_fn_8009DE60_00002870:
    lwz r12, 0x40(r23)
    cmpwi r12, 0x0
    beq lbl_fn_8009DE60_0000288C
    lwz r3, 0x44(r23)
    lwz r4, 0x48(r23)
    mtctr r12
    bctrl
lbl_fn_8009DE60_0000288C:
    li r0, 0x0
    stb r0, lbl_8087EF28
    lfd f31, 0x58(r1)
    lmw r22, 0x30(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
