#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCancelAlarm(void);
extern void OSCreateAlarm(void);
extern void OSDisableInterrupts(void);
extern void OSDisableScheduler(void);
extern void OSInitThreadQueue(void);
extern void OSReport(const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void OSSetAlarm(void);
extern void PPCHalt(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805EE150(void);
extern void fn_805F30F0(void);
extern void fn_805F8980(void);
extern void fn_805F95A0(void);
extern void fn_805FA200(void);
extern void fn_805FA390(void);
extern void fn_805FA4E0(void);
extern void fn_805FA5D0(void);
extern void fn_805FEC00(void);
extern void fn_805FEF70(void);
extern void fn_806036E0(void);
extern void fn_80603730(void);
extern void fn_80618290(void);
extern void fn_80618350(void);
extern void fn_80618400(void);
extern void fn_80619920(void);
extern void fn_806199D0(void);
extern void fn_80619A00(void);
extern void fn_80619AB0(void);
extern void fn_80619B80(void);
extern void fn_80619C60(void);
extern void fn_806869BC(void);
extern void fn_80722FE0(void);
extern void fn_80723050(void);
extern void fn_80724330(void);
extern void fn_80726B90(void);
extern void fn_807274C0(void);
extern void fn_80727540(void);
extern void fn_807275A0(void);
extern void fn_80727A10(void);
extern void fn_80727FA0(void);
extern void fn_8072A7F0(void);
extern void fn_8072A850(void);
extern void fn_8072A940(void);
extern void fn_8072B8E0(void);

/* External data declarations */
extern u8 lbl_807C6510[];
extern u8 lbl_807C6580[];
extern u8 lbl_807C6590[];
extern u8 lbl_807C65A4[];
extern u8 lbl_807C65B8[];
extern u8 lbl_807C6620[];
extern u8 lbl_8087D648[];
extern u8 lbl_8087D678[];

/* Small data declarations */
extern u32 lbl_8087EE38;
extern u32 lbl_8087EE3C;
extern u32 lbl_80880528;
extern u32 lbl_8088052C;
extern u32 lbl_80880530;
extern u32 lbl_80880534;
extern u32 lbl_80880538;
extern u32 lbl_80880540;
extern u32 lbl_80880548;
extern u32 lbl_80880550;
extern u32 lbl_80880560;
extern u32 lbl_80880568;
extern u32 lbl_80889338;
extern u32 lbl_8088933C;
extern u32 lbl_80889340;
extern u32 lbl_80889348;
extern u32 lbl_80889350;

/* Function declarations */
void fn_807244F0(void);
void fn_80724610(void);
void fn_807246E0(void);
void fn_807246F0(void);
void fn_80724790(void);
void fn_80724920(void);
void fn_807249E0(void);
void fn_80724A40(void);
void fn_80724A90(void);
void fn_80724AA0(void);
void fn_80724AB0(void);
void fn_80724AF0(void);
void fn_80724B20(void);
void fn_80724B80(void);
void fn_80724BD0(void);
void fn_80724BE0(void);
void fn_80724C80(void);
void fn_80724DF0(void);
void fn_80724E90(void);
void fn_80725030(void);
void fn_80725050(void);
void fn_80725070(void);
void fn_807250E0(void);
void fn_80725150(void);
void fn_80725170(void);
void fn_80725200(void);
void fn_80725250(void);
void fn_807252A0(void);
void fn_807252D0(void);
void fn_80725300(void);
void fn_80725310(void);
void fn_80725350(void);
void fn_80725480(void);
void fn_80725670(void);
void fn_807256E0(void);
void fn_807257B0(void);
void fn_807257C0(void);
void fn_80725800(void);
void fn_80725930(void);
void fn_80725B20(void);
void fn_80725B90(void);
void fn_80725C60(void);
void fn_80725C70(void);
void fn_80725C80(void);
void fn_80725C90(void);
void fn_80725D00(void);
void fn_80725D90(void);
void fn_80725DA0(void);
void fn_80725DD0(void);
void fn_80725E00(void);
void fn_80725EC0(void);
void fn_80725FF0(void);
void fn_80726070(void);
void fn_807260C0(void);
void fn_80726150(void);
void fn_80726250(void);
void fn_80726290(void);
void fn_80726310(void);
void fn_80726320(void);
void fn_80726330(void);
void fn_80726390(void);
void fn_807263A0(void);
void fn_807263B0(void);
void fn_807263C0(void);
void fn_807263D0(void);
void fn_807263E0(void);
void fn_80726470(void);

asm void fn_807244F0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    bne cr1, lbl_fn_807244F0_0000004C
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_807244F0_0000004C:
    cmpwi r6, 0x1
    addi r11, r1, 0xa8
    addi r0, r1, 0x8
    lis r12, 0x500
    stw r3, 0x8(r1)
    li r31, 0x4
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bne lbl_fn_807244F0_00000094
    li r31, -0x4
lbl_fn_807244F0_00000094:
    lwz r3, lbl_80880528
    li r4, 0x4
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880528
    srwi r30, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880528
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_807244F0_00000108
    mr r4, r30
    mr r5, r29
    addi r6, r1, 0x68
    bl fn_806869BC
    mr r8, r3
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r31
    bl fn_80724330
    lwz r3, lbl_80880528
    mr r4, r31
    bl fn_80619AB0
lbl_fn_807244F0_00000108:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80724610(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r6, 0x1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    li r31, 0x4
    bne lbl_fn_80724610_0000015C
    li r31, -0x4
lbl_fn_80724610_0000015C:
    lwz r3, lbl_80880528
    li r4, 0x4
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880528
    srwi r30, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880528
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80724610_000001D0
    mr r4, r30
    mr r5, r28
    mr r6, r29
    bl fn_806869BC
    mr r8, r3
    mr r3, r24
    mr r4, r25
    mr r5, r26
    mr r6, r27
    mr r7, r31
    bl fn_80724330
    lwz r3, lbl_80880528
    mr r4, r31
    bl fn_80619AB0
lbl_fn_80724610_000001D0:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_807246E0(void)
{
    nofralloc
    b fn_80724330
}

asm void fn_807246F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_80880528
    cmpwi r0, 0x0
    beq lbl_fn_807246F0_00000270
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_80725150
    mr r30, r3
    b lbl_fn_807246F0_00000268
lbl_fn_807246F0_0000023C:
    mr r4, r30
    addi r3, r29, 0x4
    bl fn_80725150
    mr r31, r3
    mr r4, r30
    addi r3, r29, 0x4
    bl fn_807250E0
    lwz r3, lbl_80880528
    mr r4, r30
    bl fn_80619AB0
    mr r30, r31
lbl_fn_807246F0_00000268:
    cmpwi r30, 0x0
    bne lbl_fn_807246F0_0000023C
lbl_fn_807246F0_00000270:
    addi r3, r29, 0x4
    li r4, 0x10
    bl fn_80725050
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80724790(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    mr r28, r3
    addi r3, r1, 0xc
    bl fn_8072A7F0
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80724790_000002EC
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_8072A850
    b lbl_fn_80724790_00000404
lbl_fn_80724790_000002EC:
    stw r0, 0x54(r1)
    addi r3, r1, 0xc
    lwz r0, 0x10(r28)
    stw r0, 0x8(r1)
    lbz r6, 0x8(r1)
    lbz r5, 0x9(r1)
    lbz r4, 0xa(r1)
    lbz r0, 0xb(r1)
    stb r6, 0x24(r1)
    stb r5, 0x25(r1)
    stb r4, 0x26(r1)
    stb r0, 0x27(r1)
    bl fn_80727A10
    lfs f1, 0x14(r28)
    lfs f0, lbl_8088933C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80724790_0000033C
    addi r3, r1, 0xc
    bl fn_807274C0
lbl_fn_80724790_0000033C:
    addi r3, r1, 0xc
    bl fn_80726B90
    addi r3, r28, 0x4
    li r4, 0x0
    bl fn_80725150
    lfd f31, lbl_80889340
    mr r29, r3
    lis r31, 0x4330
    b lbl_fn_80724790_000003F0
lbl_fn_80724790_00000360:
    mr r4, r29
    addi r3, r28, 0x4
    bl fn_80725150
    lbz r0, 0x18(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80724790_000003C4
    lwz r5, 0x4(r29)
    addi r3, r1, 0xc
    lwz r0, 0x0(r29)
    addi r4, r29, 0x18
    xoris r5, r5, 0x8000
    stw r5, 0x74(r1)
    xoris r0, r0, 0x8000
    stw r31, 0x70(r1)
    lfd f0, 0x70(r1)
    stw r0, 0x7c(r1)
    fsubs f1, f0, f31
    stw r31, 0x78(r1)
    lfd f0, 0x78(r1)
    stfs f1, 0x3c(r1)
    fsubs f0, f0, f31
    stfs f0, 0x38(r1)
    lwz r5, 0xc(r29)
    bl fn_8072B8E0
lbl_fn_80724790_000003C4:
    lwz r3, 0x8(r29)
    subic. r0, r3, 0x1
    stw r0, 0x8(r29)
    bgt lbl_fn_80724790_000003EC
    mr r4, r29
    addi r3, r28, 0x4
    bl fn_807250E0
    lwz r3, lbl_80880528
    mr r4, r29
    bl fn_80619AB0
lbl_fn_80724790_000003EC:
    mr r29, r30
lbl_fn_80724790_000003F0:
    cmpwi r29, 0x0
    bne lbl_fn_80724790_00000360
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_8072A850
lbl_fn_80724790_00000404:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80724920(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r10, 0x4330
    xoris r9, r4, 0x8000
    stw r10, 0x78(r1)
    add r4, r4, r6
    xoris r8, r5, 0x8000
    lfd f2, lbl_80889340
    stw r9, 0x7c(r1)
    xoris r4, r4, 0x8000
    lfs f5, lbl_8088933C
    lfd f0, 0x78(r1)
    stw r0, 0x94(r1)
    add r0, r5, r7
    fsubs f3, f0, f2
    xoris r0, r0, 0x8000
    stw r4, 0x7c(r1)
    lfs f6, lbl_80889348
    lfd f0, 0x78(r1)
    stw r10, 0x80(r1)
    fsubs f4, f0, f2
    stw r8, 0x84(r1)
    lfd f0, 0x80(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    fsubs f1, f0, f2
    addi r3, r1, 0x38
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f2, f0, f2
    bl fn_805F95A0
    addi r3, r1, 0x38
    li r4, 0x1
    bl fn_80618290
    addi r3, r1, 0x8
    bl fn_805F8980
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    mr r3, r31
    bl fn_80724790
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_807249E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80889338
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    stw r5, 0x0(r3)
    lwz r5, 0x0(r4)
    li r4, 0x10
    stw r5, 0x10(r3)
    stfs f0, 0x14(r3)
    stb r0, 0x18(r3)
    addi r3, r3, 0x4
    bl fn_80725050
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80724A40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80724A40_00000580
    cmpwi r4, 0x0
    ble lbl_fn_80724A40_00000580
    lwz r3, lbl_80880528
    mr r4, r31
    bl fn_80619AB0
lbl_fn_80724A40_00000580:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80724A90(void)
{
    nofralloc
    li r4, 0x0
    addi r3, r3, 0x4
    b fn_80725150
}

asm void fn_80724AA0(void)
{
    nofralloc
    addi r3, r3, 0x4
    b fn_80725150
}

asm void fn_80724AB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_807250E0
    lwz r3, lbl_80880528
    mr r4, r31
    bl fn_80619AB0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80724AF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    bl fn_80619920
    stw r3, lbl_80880528
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80724B20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r3, lbl_80880528
    cmpwi r3, 0x0
    beq lbl_fn_80724B20_00000678
    lwz r4, lbl_8088052C
    cmpwi r4, 0x0
    beq lbl_fn_80724B20_00000660
    bl fn_80619AB0
lbl_fn_80724B20_00000660:
    lwz r31, lbl_80880528
    mr r3, r31
    bl fn_806199D0
    li r0, 0x0
    stw r0, lbl_80880528
    stw r0, lbl_8088052C
lbl_fn_80724B20_00000678:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80724B80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_80880528
    bl fn_80619C60
    lwz r3, lbl_80880528
    mr r4, r31
    li r5, 0x4
    bl fn_80619A00
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80724BD0(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_80880528
    b fn_80619AB0
}

asm void fn_80724BE0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    bne cr1, lbl_fn_80724BE0_00000724
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80724BE0_00000724:
    lwz r0, lbl_80880534
    addi r12, r1, 0x88
    addi r11, r1, 0x8
    lis r31, 0x100
    cmpwi r0, 0x0
    stw r3, 0x8(r1)
    addi r0, r1, 0x68
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r31, 0x68(r1)
    stw r12, 0x6c(r1)
    stw r11, 0x70(r1)
    bne lbl_fn_80724BE0_00000774
    mr r4, r0
    bl fn_805EE150
lbl_fn_80724BE0_00000774:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80724C80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r31, lbl_807C6510@ha
    lwz r29, 0x0(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r31, r31, lbl_807C6510@l
    bl OSDisableInterrupts
    bl OSDisableScheduler
    li r3, 0x0
    bl fn_806036E0
    li r3, 0x0
    bl fn_80603730
    addi r3, r31, 0x0
    crclr 6
    bl fn_80724BE0
    addi r3, r31, 0x28
    crclr 6
    bl fn_80724BE0
    li r30, 0x0
lbl_fn_80724C80_000007F8:
    cmpwi r29, 0x0
    beq lbl_fn_80724C80_00000848
    addis r0, r29, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_80724C80_00000848
    clrrwi. r0, r29, 31
    beq lbl_fn_80724C80_00000848
    lwz r5, 0x0(r29)
    mr r4, r29
    lwz r6, 0x4(r29)
    addi r3, r31, 0x48
    crclr 6
    bl fn_80724BE0
    la r3, lbl_8087EE3C
    crclr 6
    bl fn_80724BE0
    addi r30, r30, 0x1
    lwz r29, 0x0(r29)
    cmplwi r30, 0x10
    blt lbl_fn_80724C80_000007F8
lbl_fn_80724C80_00000848:
    lwz r3, lbl_80880534
    cmpwi r3, 0x0
    beq lbl_fn_80724C80_000008A8
    mr r5, r24
    mr r6, r25
    addi r4, r31, 0x60
    crclr 6
    bl fn_80722FE0
    lwz r3, lbl_80880534
    la r4, lbl_8087EE3C
    crclr 6
    bl fn_80722FE0
    lwz r31, lbl_80880534
    lhz r30, 0x20(r31)
    mr r3, r31
    bl fn_80723050
    subf. r0, r30, r3
    bge lbl_fn_80724C80_00000894
    li r0, 0x0
lbl_fn_80724C80_00000894:
    stw r0, 0x18(r31)
    li r0, 0x1
    lwz r3, lbl_80880534
    stb r0, 0x22(r3)
    b lbl_fn_80724C80_000008D4
lbl_fn_80724C80_000008A8:
    mr r4, r24
    mr r5, r25
    addi r3, r31, 0x60
    crclr 6
    bl OSReport
    mr r3, r26
    mr r4, r27
    bl fn_805EE150
    la r3, lbl_8087EE3C
    crclr 6
    bl OSReport
lbl_fn_80724C80_000008D4:
    cmpwi r28, 0x0
    beq lbl_fn_80724C80_000008E0
    bl PPCHalt
lbl_fn_80724C80_000008E0:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80724DF0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    bne cr1, lbl_fn_80724DF0_00000934
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80724DF0_00000934:
    addi r11, r1, 0x88
    addi r0, r1, 0x8
    lis r12, 0x300
    stw r7, 0x18(r1)
    addi r31, r1, 0x68
    li r7, 0x1
    stw r6, 0x14(r1)
    mr r6, r31
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80724C80
    bl PPCHalt
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80724E90(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bne cr1, lbl_fn_80724E90_000009E4
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80724E90_000009E4:
    lwz r30, lbl_80880534
    addi r11, r1, 0x98
    addi r0, r1, 0x8
    lis r12, 0x300
    cmpwi r30, 0x0
    stw r3, 0x8(r1)
    addi r31, r1, 0x68
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    beq lbl_fn_80724E90_00000AF4
    lis r4, lbl_807C6580@ha
    mr r3, r30
    mr r5, r27
    mr r6, r28
    addi r4, r4, lbl_807C6580@l
    crclr 6
    bl fn_80722FE0
    lwz r3, lbl_80880534
    la r4, lbl_8087EE3C
    crclr 6
    bl fn_80722FE0
    lwz r31, lbl_80880534
    lhz r30, 0x20(r31)
    mr r3, r31
    bl fn_80723050
    subf. r0, r30, r3
    bge lbl_fn_80724E90_00000A74
    li r0, 0x0
lbl_fn_80724E90_00000A74:
    stw r0, 0x18(r31)
    lbz r0, lbl_8087EE38
    cmpwi r0, 0x0
    beq lbl_fn_80724E90_00000B24
    lwz r0, lbl_80880534
    lwz r30, lbl_80880530
    cmpwi r0, 0x0
    beq lbl_fn_80724E90_00000B24
    lbz r0, lbl_80880538
    cmpwi r0, 0x0
    bne lbl_fn_80724E90_00000AB4
    lis r3, lbl_8087D648@ha
    addi r3, r3, lbl_8087D648@l
    bl OSCreateAlarm
    li r0, 0x1
    stb r0, lbl_80880538
lbl_fn_80724E90_00000AB4:
    lis r31, lbl_8087D648@ha
    addi r31, r31, lbl_8087D648@l
    mr r3, r31
    bl OSCancelAlarm
    lwz r3, lbl_80880534
    li r0, 0x1
    cmpwi r30, 0x0
    stb r0, 0x22(r3)
    beq lbl_fn_80724E90_00000B24
    lis r7, fn_80725030@ha
    mr r3, r31
    mr r6, r30
    li r5, 0x0
    addi r7, r7, fn_80725030@l
    bl OSSetAlarm
    b lbl_fn_80724E90_00000B24
lbl_fn_80724E90_00000AF4:
    lis r3, lbl_807C6580@ha
    mr r4, r27
    mr r5, r28
    addi r3, r3, lbl_807C6580@l
    crclr 6
    bl OSReport
    mr r3, r29
    mr r4, r31
    bl fn_805EE150
    la r3, lbl_8087EE3C
    crclr 6
    bl OSReport
lbl_fn_80724E90_00000B24:
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80725030(void)
{
    nofralloc
    lwz r3, lbl_80880534
    cmpwi r3, 0x0
    beqlr
    li r0, 0x0
    stb r0, 0x22(r3)
    blr
}

asm void fn_80725050(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    sth r0, 0x8(r3)
    sth r4, 0xa(r3)
    blr
}

asm void fn_80725070(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80725070_00000BB8
    lhz r5, 0xa(r3)
    li r0, 0x0
    add r5, r4, r5
    stw r0, 0x4(r5)
    stw r0, 0x0(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x0(r3)
    addi r0, r5, 0x1
    stw r4, 0x4(r3)
    sth r0, 0x8(r3)
    blr
lbl_fn_80725070_00000BB8:
    lhz r6, 0xa(r3)
    li r0, 0x0
    lwz r5, 0x4(r3)
    stwux r5, r6, r4
    stw r0, 0x4(r6)
    lwz r5, 0x4(r3)
    lhz r0, 0xa(r3)
    add r5, r5, r0
    stw r4, 0x4(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x4(r3)
    addi r0, r5, 0x1
    sth r0, 0x8(r3)
    blr
}

asm void fn_807250E0(void)
{
    nofralloc
    lhz r0, 0xa(r3)
    add r6, r4, r0
    lwzx r4, r4, r0
    cmpwi r4, 0x0
    bne lbl_fn_807250E0_00000C10
    lwz r0, 0x4(r6)
    stw r0, 0x0(r3)
    b lbl_fn_807250E0_00000C1C
lbl_fn_807250E0_00000C10:
    add r4, r4, r0
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
lbl_fn_807250E0_00000C1C:
    lwz r5, 0x4(r6)
    cmpwi r5, 0x0
    bne lbl_fn_807250E0_00000C34
    lwz r0, 0x0(r6)
    stw r0, 0x4(r3)
    b lbl_fn_807250E0_00000C40
lbl_fn_807250E0_00000C34:
    lhz r0, 0xa(r3)
    lwz r4, 0x0(r6)
    stwx r4, r5, r0
lbl_fn_807250E0_00000C40:
    li r0, 0x0
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    lhz r4, 0x8(r3)
    subi r0, r4, 0x1
    sth r0, 0x8(r3)
    blr
}

asm void fn_80725150(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_80725150_00000C70
    lwz r3, 0x0(r3)
    blr
lbl_fn_80725150_00000C70:
    lhz r0, 0xa(r3)
    add r3, r4, r0
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80725170(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80725170_00000CEC
    lwz r7, 0x4(r3)
    addi r6, r3, 0x4
    li r0, 0x0
    b lbl_fn_80725170_00000CD4
lbl_fn_80725170_00000CAC:
    lwz r8, 0x0(r7)
    lwz r5, 0x4(r7)
    stw r5, 0x4(r8)
    stw r8, 0x0(r5)
    lwz r5, 0x0(r3)
    subi r5, r5, 0x1
    stw r5, 0x0(r3)
    stw r0, 0x0(r7)
    stw r0, 0x4(r7)
    mr r7, r8
lbl_fn_80725170_00000CD4:
    cmplw r7, r6
    bne lbl_fn_80725170_00000CAC
    cmpwi r4, 0x0
    ble lbl_fn_80725170_00000CEC
    mr r3, r31
    bl dtor_80084684
lbl_fn_80725170_00000CEC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80725200(void)
{
    nofralloc
    lwz r6, 0x0(r4)
    li r0, 0x0
    lwz r5, 0x0(r6)
    b lbl_fn_80725200_00000D48
lbl_fn_80725200_00000D20:
    lwz r7, 0x0(r6)
    lwz r4, 0x4(r6)
    stw r4, 0x4(r7)
    stw r7, 0x0(r4)
    lwz r4, 0x0(r3)
    subi r4, r4, 0x1
    stw r4, 0x0(r3)
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    mr r6, r7
lbl_fn_80725200_00000D48:
    cmplw r6, r5
    bne lbl_fn_80725200_00000D20
    mr r3, r5
    blr
}

asm void fn_80725250(void)
{
    nofralloc
    lwz r6, 0x4(r3)
    addi r5, r3, 0x4
    li r0, 0x0
    b lbl_fn_80725250_00000D98
lbl_fn_80725250_00000D70:
    lwz r7, 0x0(r6)
    lwz r4, 0x4(r6)
    stw r4, 0x4(r7)
    stw r7, 0x0(r4)
    lwz r4, 0x0(r3)
    subi r4, r4, 0x1
    stw r4, 0x0(r3)
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    mr r6, r7
lbl_fn_80725250_00000D98:
    cmplw r6, r5
    bne lbl_fn_80725250_00000D70
    blr
}

asm void fn_807252A0(void)
{
    nofralloc
    lwz r4, 0x0(r4)
    lwz r6, 0x4(r4)
    stw r6, 0x4(r5)
    stw r4, 0x0(r5)
    stw r5, 0x4(r4)
    stw r5, 0x0(r6)
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    mr r3, r5
    blr
}

asm void fn_807252D0(void)
{
    nofralloc
    lwz r6, 0x0(r4)
    li r0, 0x0
    lwz r5, 0x4(r4)
    stw r5, 0x4(r6)
    stw r6, 0x0(r5)
    lwz r5, 0x0(r3)
    subi r5, r5, 0x1
    stw r5, 0x0(r3)
    mr r3, r6
    stw r0, 0x0(r4)
    stw r0, 0x4(r4)
    blr
}

asm void fn_80725300(void)
{
    nofralloc
    lis r4, lbl_807C65A4@ha
    addi r4, r4, lbl_807C65A4@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_80725310(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80725310_00000E48
    cmpwi r4, 0x0
    ble lbl_fn_80725310_00000E48
    bl dtor_80084684
lbl_fn_80725310_00000E48:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80725350(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0xa
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r5
    beq lbl_fn_80725350_00000EA0
    cmpwi r4, 0x9
    beq lbl_fn_80725350_00000EC8
    b lbl_fn_80725350_00000F5C
lbl_fn_80725350_00000EA0:
    lwz r31, 0x0(r5)
    lfs f31, 0x8(r5)
    lfs f30, 0x30(r31)
    mr r3, r31
    bl fn_80727FA0
    stfs f31, 0x2c(r31)
    fadds f0, f30, f1
    li r3, 0x3
    stfs f0, 0x30(r31)
    b lbl_fn_80725350_00000F60
lbl_fn_80725350_00000EC8:
    lwz r31, 0x0(r5)
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    ble lbl_fn_80725350_00000F54
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80725350_00000EEC
    lfs f1, 0x44(r31)
    b lbl_fn_80725350_00000EF4
lbl_fn_80725350_00000EEC:
    mr r3, r31
    bl fn_80727540
lbl_fn_80725350_00000EF4:
    lis r0, 0x4330
    xoris r3, r30, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_80889350
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r31)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r29)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r31)
lbl_fn_80725350_00000F54:
    li r3, 0x1
    b lbl_fn_80725350_00000F60
lbl_fn_80725350_00000F5C:
    li r3, 0x0
lbl_fn_80725350_00000F60:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80725480(void)
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
    bl _savegpr_27
    cmpwi r5, 0xa
    mr r27, r4
    mr r28, r6
    beq lbl_fn_80725480_00000FD0
    cmpwi r5, 0x9
    beq lbl_fn_80725480_00001058
    b lbl_fn_80725480_00001148
lbl_fn_80725480_00000FD0:
    lwz r30, 0x0(r6)
    lfs f0, 0x2c(r30)
    stfs f0, 0x8(r4)
    lfs f0, 0x30(r30)
    stfs f0, 0x4(r4)
    lwz r31, 0x0(r6)
    lfs f31, 0x8(r6)
    lfs f30, 0x30(r31)
    mr r3, r31
    bl fn_80727FA0
    stfs f31, 0x2c(r31)
    fadds f0, f30, f1
    stfs f0, 0x30(r31)
    lfs f0, 0x2c(r30)
    stfs f0, 0x0(r27)
    lfs f30, 0x30(r30)
    lwz r3, 0x0(r28)
    bl fn_807275A0
    fadds f0, f30, f1
    lfs f6, 0x4(r27)
    lfs f7, 0x0(r27)
    li r3, 0x3
    lfs f5, 0x8(r27)
    fsubs f2, f0, f6
    fsubs f3, f5, f7
    fsel f1, f2, f6, f0
    fsel f4, f3, f7, f5
    fsel f3, f3, f5, f7
    stfs f1, 0x4(r27)
    fsel f0, f2, f0, f6
    stfs f4, 0x0(r27)
    stfs f3, 0x8(r27)
    stfs f0, 0xc(r27)
    b lbl_fn_80725480_0000114C
lbl_fn_80725480_00001058:
    lwz r29, 0x0(r6)
    lfs f0, 0x2c(r29)
    stfs f0, 0x0(r4)
    lwz r31, 0x0(r6)
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    ble lbl_fn_80725480_000010F0
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80725480_00001088
    lfs f1, 0x44(r31)
    b lbl_fn_80725480_00001090
lbl_fn_80725480_00001088:
    mr r3, r31
    bl fn_80727540
lbl_fn_80725480_00001090:
    lis r0, 0x4330
    xoris r3, r30, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_80889350
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r31)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r28)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r31)
lbl_fn_80725480_000010F0:
    lfs f0, 0x2c(r29)
    mr r3, r29
    stfs f0, 0x8(r27)
    lfs f0, 0x30(r29)
    stfs f0, 0x4(r27)
    bl fn_807275A0
    lfs f2, 0x4(r27)
    li r3, 0x1
    lfs f6, 0x0(r27)
    fadds f0, f2, f1
    lfs f4, 0x8(r27)
    fsubs f1, f4, f6
    fsubs f3, f0, f2
    fsel f5, f1, f6, f4
    fsel f4, f1, f4, f6
    fsel f1, f3, f2, f0
    stfs f5, 0x0(r27)
    fsel f0, f3, f0, f2
    stfs f4, 0x8(r27)
    stfs f1, 0x4(r27)
    stfs f0, 0xc(r27)
    b lbl_fn_80725480_0000114C
lbl_fn_80725480_00001148:
    li r3, 0x0
lbl_fn_80725480_0000114C:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80725670(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    lwz r31, 0x0(r4)
    lfs f30, 0x8(r4)
    lfs f31, 0x30(r31)
    mr r3, r31
    bl fn_80727FA0
    stfs f30, 0x2c(r31)
    fadds f0, f31, f1
    stfs f0, 0x30(r31)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_807256E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    lwz r30, 0x0(r4)
    lwz r31, 0x58(r30)
    cmpwi r31, 0x0
    ble lbl_fn_807256E0_00001298
    lbz r0, 0x43(r30)
    cmpwi r0, 0x0
    beq lbl_fn_807256E0_00001230
    lfs f1, 0x44(r30)
    b lbl_fn_807256E0_00001238
lbl_fn_807256E0_00001230:
    mr r3, r30
    bl fn_80727540
lbl_fn_807256E0_00001238:
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_80889350
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r30)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r29)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r30)
lbl_fn_807256E0_00001298:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_807257B0(void)
{
    nofralloc
    lis r4, lbl_807C6590@ha
    addi r4, r4, lbl_807C6590@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_807257C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_807257C0_000012F8
    cmpwi r4, 0x0
    ble lbl_fn_807257C0_000012F8
    bl dtor_80084684
lbl_fn_807257C0_000012F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80725800(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0xa
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r5
    beq lbl_fn_80725800_00001350
    cmpwi r4, 0x9
    beq lbl_fn_80725800_00001378
    b lbl_fn_80725800_0000140C
lbl_fn_80725800_00001350:
    lwz r31, 0x0(r5)
    lfs f31, 0x8(r5)
    lfs f30, 0x30(r31)
    mr r3, r31
    bl fn_8072A940
    stfs f31, 0x2c(r31)
    fadds f0, f30, f1
    li r3, 0x3
    stfs f0, 0x30(r31)
    b lbl_fn_80725800_00001410
lbl_fn_80725800_00001378:
    lwz r31, 0x0(r5)
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    ble lbl_fn_80725800_00001404
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80725800_0000139C
    lfs f1, 0x44(r31)
    b lbl_fn_80725800_000013A4
lbl_fn_80725800_0000139C:
    mr r3, r31
    bl fn_80727540
lbl_fn_80725800_000013A4:
    lis r0, 0x4330
    xoris r3, r30, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_80889350
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r31)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r29)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r31)
lbl_fn_80725800_00001404:
    li r3, 0x1
    b lbl_fn_80725800_00001410
lbl_fn_80725800_0000140C:
    li r3, 0x0
lbl_fn_80725800_00001410:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80725930(void)
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
    bl _savegpr_27
    cmpwi r5, 0xa
    mr r27, r4
    mr r28, r6
    beq lbl_fn_80725930_00001480
    cmpwi r5, 0x9
    beq lbl_fn_80725930_00001508
    b lbl_fn_80725930_000015F8
lbl_fn_80725930_00001480:
    lwz r30, 0x0(r6)
    lfs f0, 0x2c(r30)
    stfs f0, 0x8(r4)
    lfs f0, 0x30(r30)
    stfs f0, 0x4(r4)
    lwz r31, 0x0(r6)
    lfs f31, 0x8(r6)
    lfs f30, 0x30(r31)
    mr r3, r31
    bl fn_8072A940
    stfs f31, 0x2c(r31)
    fadds f0, f30, f1
    stfs f0, 0x30(r31)
    lfs f0, 0x2c(r30)
    stfs f0, 0x0(r27)
    lfs f30, 0x30(r30)
    lwz r3, 0x0(r28)
    bl fn_807275A0
    fadds f0, f30, f1
    lfs f6, 0x4(r27)
    lfs f7, 0x0(r27)
    li r3, 0x3
    lfs f5, 0x8(r27)
    fsubs f2, f0, f6
    fsubs f3, f5, f7
    fsel f1, f2, f6, f0
    fsel f4, f3, f7, f5
    fsel f3, f3, f5, f7
    stfs f1, 0x4(r27)
    fsel f0, f2, f0, f6
    stfs f4, 0x0(r27)
    stfs f3, 0x8(r27)
    stfs f0, 0xc(r27)
    b lbl_fn_80725930_000015FC
lbl_fn_80725930_00001508:
    lwz r29, 0x0(r6)
    lfs f0, 0x2c(r29)
    stfs f0, 0x0(r4)
    lwz r31, 0x0(r6)
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    ble lbl_fn_80725930_000015A0
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80725930_00001538
    lfs f1, 0x44(r31)
    b lbl_fn_80725930_00001540
lbl_fn_80725930_00001538:
    mr r3, r31
    bl fn_80727540
lbl_fn_80725930_00001540:
    lis r0, 0x4330
    xoris r3, r30, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_80889350
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r31)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r28)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r31)
lbl_fn_80725930_000015A0:
    lfs f0, 0x2c(r29)
    mr r3, r29
    stfs f0, 0x8(r27)
    lfs f0, 0x30(r29)
    stfs f0, 0x4(r27)
    bl fn_807275A0
    lfs f2, 0x4(r27)
    li r3, 0x1
    lfs f6, 0x0(r27)
    fadds f0, f2, f1
    lfs f4, 0x8(r27)
    fsubs f1, f4, f6
    fsubs f3, f0, f2
    fsel f5, f1, f6, f4
    fsel f4, f1, f4, f6
    fsel f1, f3, f2, f0
    stfs f5, 0x0(r27)
    fsel f0, f3, f0, f2
    stfs f4, 0x8(r27)
    stfs f1, 0x4(r27)
    stfs f0, 0xc(r27)
    b lbl_fn_80725930_000015FC
lbl_fn_80725930_000015F8:
    li r3, 0x0
lbl_fn_80725930_000015FC:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80725B20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    lwz r31, 0x0(r4)
    lfs f30, 0x8(r4)
    lfs f31, 0x30(r31)
    mr r3, r31
    bl fn_8072A940
    stfs f30, 0x2c(r31)
    fadds f0, f31, f1
    stfs f0, 0x30(r31)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80725B90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    lwz r30, 0x0(r4)
    lwz r31, 0x58(r30)
    cmpwi r31, 0x0
    ble lbl_fn_80725B90_00001748
    lbz r0, 0x43(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80725B90_000016E0
    lfs f1, 0x44(r30)
    b lbl_fn_80725B90_000016E8
lbl_fn_80725B90_000016E0:
    mr r3, r30
    bl fn_80727540
lbl_fn_80725B90_000016E8:
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_80889350
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r30)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r29)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r30)
lbl_fn_80725B90_00001748:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80725C60(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80725C70(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80725C80(void)
{
    nofralloc
    li r0, 0x0
    stw r0, lbl_80880540
    blr
}

asm void fn_80725C90(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_80725C90_000017FC
    lwz r0, 0x4(r3)
    li r5, 0x0
    lwz r6, 0x0(r3)
    xoris r5, r5, 0x8000
    add r7, r0, r4
    subfc r0, r7, r6
    subfe r0, r5, r5
    subfe r0, r5, r5
    neg. r0, r0
    beq lbl_fn_80725C90_000017D4
    b lbl_fn_80725C90_000017F8
lbl_fn_80725C90_000017D4:
    li r6, 0x0
    xoris r4, r6, 0x8000
    subfc r0, r6, r7
    subfe r4, r4, r5
    subfe r4, r5, r5
    neg. r4, r4
    beq lbl_fn_80725C90_000017F4
    b lbl_fn_80725C90_000017F8
lbl_fn_80725C90_000017F4:
    mr r6, r7
lbl_fn_80725C90_000017F8:
    stw r6, 0x4(r3)
lbl_fn_80725C90_000017FC:
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80725D00(void)
{
    nofralloc
    cmpwi r5, 0x0
    beq lbl_fn_80725D00_00001824
    cmplwi r5, 0x2
    beq lbl_fn_80725D00_00001830
    b lbl_fn_80725D00_00001838
lbl_fn_80725D00_00001824:
    li r0, 0x0
    stw r0, 0x4(r3)
    b lbl_fn_80725D00_00001838
lbl_fn_80725D00_00001830:
    lwz r0, 0x0(r3)
    stw r0, 0x4(r3)
lbl_fn_80725D00_00001838:
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x4(r3)
    li r5, 0x0
    lwz r6, 0x0(r3)
    xoris r5, r5, 0x8000
    add r7, r0, r4
    subfc r0, r7, r6
    subfe r0, r5, r5
    subfe r0, r5, r5
    neg. r0, r0
    beq lbl_fn_80725D00_0000186C
    b lbl_fn_80725D00_00001890
lbl_fn_80725D00_0000186C:
    li r6, 0x0
    xoris r4, r6, 0x8000
    subfc r0, r6, r7
    subfe r4, r4, r5
    subfe r4, r5, r5
    neg. r4, r4
    beq lbl_fn_80725D00_0000188C
    b lbl_fn_80725D00_00001890
lbl_fn_80725D00_0000188C:
    mr r6, r7
lbl_fn_80725D00_00001890:
    stw r6, 0x4(r3)
    blr
}

asm void fn_80725D90(void)
{
    nofralloc
    la r0, lbl_80880540
    stw r0, lbl_80880548
    blr
}

asm void fn_80725DA0(void)
{
    nofralloc
    lwz r4, 0x3c(r4)
    li r0, 0x0
    stb r0, 0x6c(r4)
    stw r3, 0x8(r4)
    lwz r12, 0xc(r4)
    cmpwi r12, 0x0
    beqlr
    lwz r5, 0x10(r4)
    mtctr r12
    bctr
    blr
}

asm void fn_80725DD0(void)
{
    nofralloc
    lwz r4, 0x3c(r4)
    li r0, 0x0
    stb r0, 0x24(r4)
    lwz r12, 0x1c(r4)
    cmpwi r12, 0x0
    beqlr
    lwz r5, 0x20(r4)
    mtctr r12
    bctr
    blr
}

asm void fn_80725E00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C65B8@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807C65B8@l
    li r0, 0x2
    stw r31, 0xc(r1)
    mr r31, r3
    stb r6, 0x6c(r3)
    stw r5, 0x0(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stb r6, 0x6d(r3)
    stb r6, 0x6e(r3)
    stb r6, 0x4(r3)
    stw r0, 0x68(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x8(r3)
    stw r6, 0x1c(r3)
    stb r6, 0x24(r3)
    stw r6, 0x20(r3)
    stw r3, 0x64(r3)
    b lbl_fn_80725E00_00001978
    bctrl
lbl_fn_80725E00_00001978:
    mr r3, r4
    addi r4, r31, 0x28
    bl fn_805FA200
    cmpwi r3, 0x0
    beq lbl_fn_80725E00_000019B4
    lwz r0, 0x5c(r31)
    addi r3, r31, 0x14
    stw r0, 0x14(r31)
    li r4, 0x0
    li r5, 0x0
    bl fn_80725D00
    li r0, 0x1
    stb r0, 0x6d(r31)
    stb r0, 0x6e(r31)
    stb r0, 0x4(r31)
lbl_fn_80725E00_000019B4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80725EC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lis r6, lbl_807C65B8@ha
    li r7, 0x0
    stb r7, 0x6c(r3)
    addi r6, r6, lbl_807C65B8@l
    li r0, 0x2
    mr r30, r3
    stw r6, 0x0(r3)
    mr r22, r4
    mr r31, r5
    stw r7, 0x14(r3)
    stw r7, 0x18(r3)
    stb r7, 0x6d(r3)
    stb r7, 0x6e(r3)
    stb r7, 0x4(r3)
    stw r0, 0x68(r3)
    stw r7, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x8(r3)
    stw r7, 0x1c(r3)
    stb r7, 0x24(r3)
    stw r7, 0x20(r3)
    stw r3, 0x64(r3)
    b lbl_fn_80725EC0_00001A44
    bctrl
lbl_fn_80725EC0_00001A44:
    lwz r6, 0x34(r22)
    addi r3, r30, 0x14
    lwz r23, 0x0(r22)
    li r4, 0x0
    lwz r24, 0x4(r22)
    li r5, 0x0
    lwz r25, 0x8(r22)
    lwz r26, 0xc(r22)
    lwz r27, 0x10(r22)
    lwz r28, 0x14(r22)
    lwz r29, 0x18(r22)
    lwz r12, 0x1c(r22)
    lwz r11, 0x20(r22)
    lwz r10, 0x24(r22)
    lwz r9, 0x28(r22)
    lwz r8, 0x2c(r22)
    lwz r7, 0x30(r22)
    lwz r0, 0x38(r22)
    stw r23, 0x28(r30)
    stw r24, 0x2c(r30)
    stw r25, 0x30(r30)
    stw r26, 0x34(r30)
    stw r27, 0x38(r30)
    stw r28, 0x3c(r30)
    stw r29, 0x40(r30)
    stw r12, 0x44(r30)
    stw r11, 0x48(r30)
    stw r10, 0x4c(r30)
    stw r9, 0x50(r30)
    stw r8, 0x54(r30)
    stw r7, 0x58(r30)
    stw r6, 0x5c(r30)
    stw r0, 0x60(r30)
    stw r6, 0x14(r30)
    bl fn_80725D00
    li r3, 0x0
    li r0, 0x1
    stb r3, 0x6d(r30)
    addi r11, r1, 0x30
    mr r3, r30
    stb r31, 0x6e(r30)
    stb r0, 0x4(r30)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80725FF0(void)
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
    beq lbl_fn_80725FF0_00001B5C
    lbz r0, 0x6d(r3)
    lis r4, lbl_807C65B8@ha
    addi r4, r4, lbl_807C65B8@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80725FF0_00001B4C
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80725FF0_00001B4C:
    cmpwi r31, 0x0
    ble lbl_fn_80725FF0_00001B5C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80725FF0_00001B5C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80726070(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x6e(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80726070_00001BBC
    lbz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80726070_00001BBC
    addi r3, r3, 0x28
    bl fn_805FA390
    li r0, 0x0
    stb r0, 0x4(r31)
lbl_fn_80726070_00001BBC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807260C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x18(r3)
    lwz r8, 0x14(r3)
    add r7, r6, r5
    addi r7, r7, 0x1f
    addi r0, r8, 0x1f
    clrrwi r7, r7, 5
    clrrwi r0, r0, 5
    cmplw r7, r0
    ble lbl_fn_807260C0_00001C18
    subf r5, r6, r8
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
lbl_fn_807260C0_00001C18:
    lwz r7, 0x68(r3)
    addi r3, r3, 0x28
    bl fn_805FA5D0
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_fn_807260C0_00001C3C
    mr r4, r31
    addi r3, r30, 0x14
    bl fn_80725C90
lbl_fn_807260C0_00001C3C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80726150(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    lwz r8, 0x18(r3)
    lwz r9, 0x14(r3)
    add r5, r8, r5
    addi r5, r5, 0x1f
    addi r0, r9, 0x1f
    clrrwi r5, r5, 5
    clrrwi r0, r0, 5
    cmplw r5, r0
    ble lbl_fn_80726150_00001CB0
    subf r5, r8, r9
    addi r0, r5, 0x1f
    clrrwi r30, r0, 5
lbl_fn_80726150_00001CB0:
    lwz r11, 0x18(r3)
    li r9, 0x1
    lwz r10, 0x14(r3)
    mr r5, r30
    add r8, r11, r30
    stw r6, 0xc(r3)
    addi r6, r8, 0x1f
    addi r0, r10, 0x1f
    clrrwi r6, r6, 5
    stw r7, 0x10(r3)
    clrrwi r0, r0, 5
    cmplw r6, r0
    stb r9, 0x6c(r3)
    ble lbl_fn_80726150_00001CF4
    subf r5, r11, r10
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
lbl_fn_80726150_00001CF4:
    lwz r8, 0x68(r3)
    lis r7, fn_80725DA0@ha
    mr r6, r11
    addi r3, r3, 0x28
    addi r7, r7, fn_80725DA0@l
    bl fn_805FA4E0
    neg r0, r3
    or r0, r0, r3
    srwi. r29, r0, 31
    beq lbl_fn_80726150_00001D2C
    mr r4, r30
    addi r3, r31, 0x14
    bl fn_80725C90
    b lbl_fn_80726150_00001D34
lbl_fn_80726150_00001D2C:
    li r0, 0x0
    stb r0, 0x6c(r31)
lbl_fn_80726150_00001D34:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80726250(void)
{
    nofralloc
    lwz r6, 0x18(r3)
    lwz r8, 0x14(r3)
    add r7, r6, r5
    addi r7, r7, 0x1f
    addi r0, r8, 0x1f
    clrrwi r7, r7, 5
    clrrwi r0, r0, 5
    cmplw r7, r0
    ble lbl_fn_80726250_00001D90
    subf r5, r6, r8
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
lbl_fn_80726250_00001D90:
    lwz r7, 0x68(r3)
    addi r3, r3, 0x28
    b fn_805FA5D0
}

asm void fn_80726290(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r9, 0x1
    stw r0, 0x14(r1)
    lwz r11, 0x18(r3)
    lwz r10, 0x14(r3)
    add r8, r11, r5
    stw r6, 0xc(r3)
    addi r6, r8, 0x1f
    addi r0, r10, 0x1f
    clrrwi r6, r6, 5
    stw r7, 0x10(r3)
    clrrwi r0, r0, 5
    cmplw r6, r0
    stb r9, 0x6c(r3)
    ble lbl_fn_80726290_00001DEC
    subf r5, r11, r10
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
lbl_fn_80726290_00001DEC:
    lwz r8, 0x68(r3)
    lis r7, fn_80725DA0@ha
    mr r6, r11
    addi r3, r3, 0x28
    addi r7, r7, fn_80725DA0@l
    bl fn_805FA4E0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80726310(void)
{
    nofralloc
    addi r3, r3, 0x14
    b fn_80725D00
}

asm void fn_80726320(void)
{
    nofralloc
    addi r3, r3, 0x28
    b fn_805FEF70
}

asm void fn_80726330(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x1c(r3)
    lis r4, fn_80725DD0@ha
    addi r4, r4, fn_80725DD0@l
    stw r5, 0x20(r3)
    addi r3, r3, 0x28
    bl fn_805FEC00
    cmpwi r3, 0x0
    beq lbl_fn_80726330_00001E7C
    li r0, 0x1
    stb r0, 0x24(r31)
lbl_fn_80726330_00001E7C:
    neg r0, r3
    lwz r31, 0xc(r1)
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80726390(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_807263A0(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    blr
}

asm void fn_807263B0(void)
{
    nofralloc
    lwz r3, 0x18(r3)
    blr
}

asm void fn_807263C0(void)
{
    nofralloc
    la r3, lbl_80880550
    blr
}

asm void fn_807263D0(void)
{
    nofralloc
    la r0, lbl_80880548
    stw r0, lbl_80880550
    blr
}

asm void fn_807263E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80725E00
    lis r3, lbl_807C6620@ha
    li r0, 0x0
    addi r3, r3, lbl_807C6620@l
    stw r3, 0x0(r30)
    stb r0, 0x6f(r30)
    bl OSDisableInterrupts
    lbz r0, lbl_80880568
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_807263E0_00001F50
    lis r3, lbl_8087D678@ha
    addi r3, r3, lbl_8087D678@l
    bl fn_805F30F0
    la r3, lbl_80880560
    bl OSInitThreadQueue
    li r0, 0x1
    stb r0, lbl_80880568
lbl_fn_807263E0_00001F50:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80726470(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80725EC0
    lis r3, lbl_807C6620@ha
    li r0, 0x0
    addi r3, r3, lbl_807C6620@l
    stw r3, 0x0(r30)
    stb r0, 0x6f(r30)
    bl OSDisableInterrupts
    lbz r0, lbl_80880568
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_80726470_00001FE0
    lis r3, lbl_8087D678@ha
    addi r3, r3, lbl_8087D678@l
    bl fn_805F30F0
    la r3, lbl_80880560
    bl OSInitThreadQueue
    li r0, 0x1
    stb r0, lbl_80880568
lbl_fn_80726470_00001FE0:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
