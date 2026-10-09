#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_80709870(void);
extern void fn_80709950(void);
extern void fn_80709AD0(void);
extern void fn_8070A9F0(void);
extern void fn_8070AC10(void);
extern void fn_8070C090(void);
extern void fn_8070C100(void);
extern void fn_8070C2B0(void);
extern void fn_8070C630(void);
extern void fn_8070C650(void);
extern void fn_8070C740(void);
extern void fn_8070C770(void);
extern void fn_8070CE10(void);
extern void fn_8070F130(void);
extern void fn_8070F180(void);
extern void fn_80711630(void);
extern void fn_807116A0(void);
extern void fn_807117C0(void);
extern void fn_80711910(void);
extern void fn_80711AA0(void);
extern void fn_80713C10(void);
extern void fn_80713CB0(void);
extern void fn_80714230(void);
extern void fn_80714500(void);
extern void fn_807187D0(void);
extern void fn_80718D00(void);
extern void fn_80718D70(void);
extern void fn_8071D220(void);
extern void fn_8071D260(void);
extern void fn_8071D3F0(void);
extern void fn_8071D760(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);

/* External data declarations */
extern u8 lbl_807C6220[];
extern u8 lbl_807C6258[];
extern u8 lbl_807C6270[];
extern u8 lbl_80863288[];

/* Small data declarations */
extern u32 lbl_808804B0;
extern u32 lbl_808804D8;
extern u32 lbl_80889190;
extern u32 lbl_80889194;
extern u32 lbl_80889198;
extern u32 lbl_808891A0;
extern u32 lbl_808891A8;
extern u32 lbl_808891AC;

/* Function declarations */
void fn_80711BC0(void);
void fn_80711E60(void);
void fn_80711EE0(void);
void fn_80711F50(void);
void fn_807120A0(void);
void fn_80712130(void);
void fn_807121F0(void);
void fn_80712200(void);
void fn_80712210(void);
void fn_80712220(void);
void fn_807122C0(void);
void fn_80712480(void);
void fn_807124A0(void);
void fn_807125D0(void);
void fn_80712610(void);
void fn_80712720(void);
void fn_80712990(void);
void fn_80712C30(void);
void fn_80712C60(void);
void fn_80712C70(void);
void fn_80712C80(void);
void fn_80712C90(void);
void fn_80712D30(void);
void fn_80712D90(void);
void fn_80712DD0(void);
void fn_80712E50(void);
void fn_80712EC0(void);
void fn_80712FC0(void);
void fn_80713040(void);
void fn_80713120(void);
void fn_80713190(void);
void fn_807131A0(void);
void fn_807131B0(void);
void fn_807131C0(void);
void fn_807132B0(void);
void fn_807132D0(void);
void fn_807132E0(void);
void fn_807133E0(void);
void fn_80713410(void);
void fn_80713440(void);
void fn_80713450(void);
void fn_80713460(void);
void fn_80713470(void);
void fn_80713480(void);
void fn_80713490(void);
void fn_807134D0(void);
void fn_807134E0(void);
void fn_80713580(void);
void fn_80713690(void);
void fn_80713820(void);
void fn_80713830(void);
void fn_80713850(void);
void fn_80713920(void);
void fn_807139F0(void);
void fn_80713B80(void);

asm void fn_80711BC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r29, r3
    mr r30, r4
    mr r31, r5
    mr r24, r6
    mr r25, r7
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80711BC0_0000007C
    cmpwi r29, 0x0
    mr r27, r29
    beq lbl_fn_80711BC0_00000068
    addi r27, r29, 0xc0
lbl_fn_80711BC0_00000068:
    bl fn_807187D0
    mr r4, r27
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r29)
lbl_fn_80711BC0_0000007C:
    lbz r0, 0xcc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80711BC0_000000AC
    cmpwi r29, 0x0
    mr r27, r29
    beq lbl_fn_80711BC0_00000098
    addi r27, r29, 0xb4
lbl_fn_80711BC0_00000098:
    bl fn_8070C650
    mr r4, r27
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r29)
lbl_fn_80711BC0_000000AC:
    mr r26, r29
    li r27, 0x0
    li r28, 0x0
lbl_fn_80711BC0_000000B8:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r27, 0xf
    ble lbl_fn_80711BC0_000000D4
    li r3, 0x0
    b lbl_fn_80711BC0_000000D8
lbl_fn_80711BC0_000000D4:
    lwz r3, 0x100(r26)
lbl_fn_80711BC0_000000D8:
    cmpwi r3, 0x0
    bne lbl_fn_80711BC0_000000F0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80711BC0_0000011C
lbl_fn_80711BC0_000000F0:
    bl fn_80713850
    lwz r3, 0xf4(r29)
    lwz r4, 0x100(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r28, 0x100(r26)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80711BC0_0000011C:
    addi r27, r27, 0x1
    addi r26, r26, 0x4
    cmpwi r27, 0x10
    blt lbl_fn_80711BC0_000000B8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r29
    mr r4, r24
    mr r5, r25
    bl fn_80711AA0
    bl OSDisableInterrupts
    mr r28, r3
    mr r3, r31
    li r26, 0x0
    b lbl_fn_80711BC0_00000178
lbl_fn_80711BC0_00000168:
    clrlwi. r0, r3, 31
    beq lbl_fn_80711BC0_00000174
    addi r26, r26, 0x1
lbl_fn_80711BC0_00000174:
    srwi r3, r3, 1
lbl_fn_80711BC0_00000178:
    cmpwi r3, 0x0
    bne lbl_fn_80711BC0_00000168
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpw r26, r3
    ble lbl_fn_80711BC0_000001B8
    mr r3, r28
    bl OSRestoreInterrupts
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
    b lbl_fn_80711BC0_0000027C
lbl_fn_80711BC0_000001B8:
    mr r27, r29
    li r26, 0x0
    b lbl_fn_80711BC0_00000234
lbl_fn_80711BC0_000001C4:
    clrlwi. r0, r31, 31
    beq lbl_fn_80711BC0_00000228
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r25, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r26, 0xf
    ble lbl_fn_80711BC0_0000020C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80711BC0_00000228
lbl_fn_80711BC0_0000020C:
    stw r25, 0x100(r27)
    mr r3, r25
    mr r4, r26
    bl fn_807134D0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80711BC0_00000228:
    srwi r31, r31, 1
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_80711BC0_00000234:
    cmpwi r31, 0x0
    bne lbl_fn_80711BC0_000001C4
    mr r3, r28
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    mr r27, r29
    beq lbl_fn_80711BC0_00000254
    addi r27, r29, 0xb4
lbl_fn_80711BC0_00000254:
    bl fn_8070C650
    mr r4, r27
    bl fn_8070C740
    li r0, 0x1
    stw r30, 0xf4(r29)
    stb r0, 0xcc(r29)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
lbl_fn_80711BC0_0000027C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80711E60(void)
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
    mr r29, r4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r29, 0x0
    lwz r31, 0x100(r31)
    beq lbl_fn_80711E60_000002F4
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_80713820
    mr r3, r31
    bl fn_80713830
lbl_fn_80711E60_000002F4:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80711EE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r30, 0x0
    mr r31, r30
    beq lbl_fn_80711EE0_00000354
    addi r31, r30, 0xc0
lbl_fn_80711EE0_00000354:
    bl fn_807187D0
    mr r4, r31
    bl fn_80718D00
    li r0, 0x1
    stb r0, 0xcd(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80711F50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80711F50_000003F8
    cmpwi r28, 0x0
    mr r30, r28
    beq lbl_fn_80711F50_000003E4
    addi r30, r28, 0xc0
lbl_fn_80711F50_000003E4:
    bl fn_807187D0
    mr r4, r30
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r28)
lbl_fn_80711F50_000003F8:
    lbz r0, 0xcc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80711F50_00000428
    cmpwi r28, 0x0
    mr r30, r28
    beq lbl_fn_80711F50_00000414
    addi r30, r28, 0xb4
lbl_fn_80711F50_00000414:
    bl fn_8070C650
    mr r4, r30
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r28)
lbl_fn_80711F50_00000428:
    mr r29, r28
    li r30, 0x0
    li r31, 0x0
lbl_fn_80711F50_00000434:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r30, 0xf
    ble lbl_fn_80711F50_00000450
    li r3, 0x0
    b lbl_fn_80711F50_00000454
lbl_fn_80711F50_00000450:
    lwz r3, 0x100(r29)
lbl_fn_80711F50_00000454:
    cmpwi r3, 0x0
    bne lbl_fn_80711F50_0000046C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80711F50_00000498
lbl_fn_80711F50_0000046C:
    bl fn_80713850
    lwz r3, 0xf4(r28)
    lwz r4, 0x100(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r31, 0x100(r29)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80711F50_00000498:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x10
    blt lbl_fn_80711F50_00000434
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807120A0(void)
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
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    stb r29, 0xce(r28)
    li r30, 0x0
    li r31, 0x0
lbl_fn_807120A0_0000051C:
    add r3, r28, r31
    lwz r3, 0x100(r3)
    cmpwi r3, 0x0
    beq lbl_fn_807120A0_00000534
    mr r4, r29
    bl fn_80713C10
lbl_fn_807120A0_00000534:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x10
    blt lbl_fn_807120A0_0000051C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80712130(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80712130_000005BC
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80712130_00000614
lbl_fn_80712130_000005BC:
    cmpwi r30, 0x0
    beq lbl_fn_80712130_000005D0
    cmpwi r30, 0x1
    beq lbl_fn_80712130_000005E0
    b lbl_fn_80712130_00000608
lbl_fn_80712130_000005D0:
    lwz r0, 0xdc(r29)
    add r0, r0, r31
    stw r0, 0xdc(r29)
    b lbl_fn_80712130_00000608
lbl_fn_80712130_000005E0:
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_80889198
    stw r0, 0x8(r1)
    lfs f0, 0xe0(r29)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0xe0(r29)
lbl_fn_80712130_00000608:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80712130_00000614:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807121F0(void)
{
    nofralloc
    stb r4, 0xe9(r3)
    blr
}

asm void fn_80712200(void)
{
    nofralloc
    stb r4, 0xcf(r3)
    blr
}

asm void fn_80712210(void)
{
    nofralloc
    stw r4, 0xf8(r3)
    stw r5, 0xfc(r3)
    blr
}

asm void fn_80712220(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0xf8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80712220_000006DC
    lis r5, lbl_80863288@ha
    addi r0, r3, 0x140
    addi r5, r5, lbl_80863288@l
    stw r0, 0x8(r1)
    mr r3, r31
    li r4, 0x0
    stw r5, 0xc(r1)
    bl fn_80714500
    stw r3, 0x10(r1)
    mr r3, r30
    addi r4, r1, 0x8
    lbz r0, 0x24(r31)
    stb r0, 0x14(r1)
    lwz r12, 0xf8(r29)
    lwz r5, 0xfc(r29)
    mtctr r12
    bctrl
    lbz r0, 0x14(r1)
    stb r0, 0x24(r31)
lbl_fn_80712220_000006DC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_807122C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r5
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_807122C0_00000890
    li r0, 0x10
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_807122C0_00000750:
    add r4, r31, r3
    lwz r4, 0x100(r4)
    cmpwi r4, 0x0
    beq lbl_fn_807122C0_00000888
    lwz r0, 0x1c(r4)
    cmplw r29, r0
    bgt lbl_fn_807122C0_00000888
    cmplw r0, r28
    bgt lbl_fn_807122C0_00000888
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r31)
    cmpwi r0, 0x0
    beq lbl_fn_807122C0_000007BC
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_fn_807122C0_000007A8
    addi r29, r31, 0xc0
lbl_fn_807122C0_000007A8:
    bl fn_807187D0
    mr r4, r29
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r31)
lbl_fn_807122C0_000007BC:
    lbz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_807122C0_000007EC
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_fn_807122C0_000007D8
    addi r29, r31, 0xb4
lbl_fn_807122C0_000007D8:
    bl fn_8070C650
    mr r4, r29
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r31)
lbl_fn_807122C0_000007EC:
    mr r28, r31
    li r29, 0x0
    li r30, 0x0
lbl_fn_807122C0_000007F8:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r29, 0xf
    ble lbl_fn_807122C0_00000814
    li r3, 0x0
    b lbl_fn_807122C0_00000818
lbl_fn_807122C0_00000814:
    lwz r3, 0x100(r28)
lbl_fn_807122C0_00000818:
    cmpwi r3, 0x0
    bne lbl_fn_807122C0_00000830
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_807122C0_0000085C
lbl_fn_807122C0_00000830:
    bl fn_80713850
    lwz r3, 0xf4(r31)
    lwz r4, 0x100(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r30, 0x100(r28)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_807122C0_0000085C:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x10
    blt lbl_fn_807122C0_000007F8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_807122C0_00000890
lbl_fn_807122C0_00000888:
    addi r3, r3, 0x4
    bdnz lbl_fn_807122C0_00000750
lbl_fn_807122C0_00000890:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80712480(void)
{
    nofralloc
    cmpwi r4, 0xf
    ble lbl_fn_80712480_000008D0
    li r3, 0x0
    blr
lbl_fn_80712480_000008D0:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x100(r3)
    blr
}

asm void fn_807124A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    li r27, 0x0
    li r26, 0x0
    mr r30, r27
    li r31, 0x0
lbl_fn_807124A0_00000918:
    add r29, r24, r31
    lwz r28, 0x100(r29)
    cmpwi r28, 0x0
    beq lbl_fn_807124A0_000009B8
    mr r3, r28
    bl fn_80713920
    mr r3, r28
    mr r4, r25
    bl fn_807139F0
    cmpwi r3, 0x0
    bge lbl_fn_807124A0_000009A8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r26, 0xf
    ble lbl_fn_807124A0_00000960
    li r3, 0x0
    b lbl_fn_807124A0_00000964
lbl_fn_807124A0_00000960:
    lwz r3, 0x100(r29)
lbl_fn_807124A0_00000964:
    cmpwi r3, 0x0
    bne lbl_fn_807124A0_0000097C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_807124A0_000009A8
lbl_fn_807124A0_0000097C:
    bl fn_80713850
    lwz r3, 0xf4(r24)
    lwz r4, 0x100(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r30, 0x100(r29)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_807124A0_000009A8:
    lbz r0, 0x5(r28)
    cmpwi r0, 0x0
    beq lbl_fn_807124A0_000009B8
    li r27, 0x1
lbl_fn_807124A0_000009B8:
    addi r26, r26, 0x1
    addi r31, r31, 0x4
    cmpwi r26, 0x10
    blt lbl_fn_807124A0_00000918
    cmpwi r27, 0x0
    bne lbl_fn_807124A0_000009E4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
    b lbl_fn_807124A0_000009F4
lbl_fn_807124A0_000009E4:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
lbl_fn_807124A0_000009F4:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_807125D0(void)
{
    nofralloc
    cmpwi r4, 0x10
    bge lbl_fn_807125D0_00000A28
    slwi r0, r4, 1
    add r3, r3, r0
    addi r3, r3, 0x140
    blr
lbl_fn_807125D0_00000A28:
    cmpwi r4, 0x20
    li r3, 0x0
    bgelr
    subi r0, r4, 0x10
    lis r3, lbl_80863288@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_80863288@l
    add r3, r3, r0
    blr
}

asm void fn_80712610(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80712610_00000A90
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80712610_00000B44
lbl_fn_80712610_00000A90:
    lbz r0, 0xcd(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80712610_00000AAC
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80712610_00000B44
lbl_fn_80712610_00000AAC:
    lwz r0, 0xdc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80712610_00000AC8
    lfs f1, 0xe0(r30)
    lfs f0, lbl_80889194
    fcmpo cr0, f1, f0
    ble lbl_fn_80712610_00000AD4
lbl_fn_80712610_00000AC8:
    mr r3, r30
    bl fn_80712990
    b lbl_fn_80712610_00000AEC
lbl_fn_80712610_00000AD4:
    lbz r0, 0xce(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80712610_00000AEC
    mr r3, r30
    li r4, 0x3
    bl fn_80712720
lbl_fn_80712610_00000AEC:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    li r31, 0x0
lbl_fn_80712610_00000AFC:
    cmpwi r31, 0xf
    ble lbl_fn_80712610_00000B0C
    li r3, 0x0
    b lbl_fn_80712610_00000B10
lbl_fn_80712610_00000B0C:
    lwz r3, 0x100(r30)
lbl_fn_80712610_00000B10:
    cmpwi r3, 0x0
    beq lbl_fn_80712610_00000B1C
    bl fn_80713CB0
lbl_fn_80712610_00000B1C:
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmpwi r31, 0x10
    blt lbl_fn_80712610_00000AFC
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80712610_00000B44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80712720(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    lfs f30, lbl_80889194
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    lfs f29, lbl_808891A0
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    lfd f28, lbl_80889198
    stfd f27, 0x20(r1)
    psq_st f27, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lis r30, 0x4330
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r5, 0xea(r3)
    lhz r0, 0xec(r3)
    stw r30, 0x8(r1)
    mullw r0, r5, r0
    lfs f0, 0xd4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f28
    fmuls f0, f0, f1
    fdivs f1, f0, f29
    fcmpu cr0, f30, f1
    beq lbl_fn_80712720_00000D7C
    lfs f0, 0xd8(r3)
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    fdivs f2, f0, f1
    lfs f31, lbl_80889190
    stw r30, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f27, f0, f28
    b lbl_fn_80712720_00000D68
lbl_fn_80712720_00000C10:
    fsubs f27, f27, f2
    mr r3, r31
    li r4, 0x1
    bl fn_807124A0
    cmpwi r3, 0x0
    beq lbl_fn_80712720_00000D24
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80712720_00000C64
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_fn_80712720_00000C50
    addi r29, r31, 0xc0
lbl_fn_80712720_00000C50:
    bl fn_807187D0
    mr r4, r29
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r31)
lbl_fn_80712720_00000C64:
    lbz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80712720_00000C94
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_fn_80712720_00000C80
    addi r29, r31, 0xb4
lbl_fn_80712720_00000C80:
    bl fn_8070C650
    mr r4, r29
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r31)
lbl_fn_80712720_00000C94:
    mr r28, r31
    li r29, 0x0
    li r30, 0x0
lbl_fn_80712720_00000CA0:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r29, 0xf
    ble lbl_fn_80712720_00000CBC
    li r3, 0x0
    b lbl_fn_80712720_00000CC0
lbl_fn_80712720_00000CBC:
    lwz r3, 0x100(r28)
lbl_fn_80712720_00000CC0:
    cmpwi r3, 0x0
    bne lbl_fn_80712720_00000CD8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80712720_00000D04
lbl_fn_80712720_00000CD8:
    bl fn_80713850
    lwz r3, 0xf4(r31)
    lwz r4, 0x100(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r30, 0x100(r28)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80712720_00000D04:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x10
    blt lbl_fn_80712720_00000CA0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80712720_00000D7C
lbl_fn_80712720_00000D24:
    lbz r3, 0xea(r31)
    lhz r0, 0xec(r31)
    stw r30, 0x8(r1)
    mullw r0, r3, r0
    lwz r4, 0x160(r31)
    lfs f0, 0xd4(r31)
    addi r3, r4, 0x1
    stw r3, 0x160(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f28
    fmuls f0, f0, f1
    fdivs f1, f0, f29
    fcmpu cr0, f30, f1
    beq lbl_fn_80712720_00000D7C
    fdivs f2, f31, f1
lbl_fn_80712720_00000D68:
    fcmpo cr0, f2, f27
    blt lbl_fn_80712720_00000C10
    fsubs f2, f2, f27
    fmuls f0, f2, f1
    stfs f0, 0xd8(r31)
lbl_fn_80712720_00000D7C:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    psq_l f27, 0x28(r1), 0, 0
    lfd f27, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80712990(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    li r28, 0x0
lbl_fn_80712990_00000E10:
    add r3, r31, r30
    lwz r29, 0x100(r3)
    cmpwi r29, 0x0
    beq lbl_fn_80712990_00000E34
    mr r3, r29
    li r4, 0x7f
    bl fn_80713B80
    mr r3, r29
    bl fn_80714230
lbl_fn_80712990_00000E34:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x10
    blt lbl_fn_80712990_00000E10
    lfd f29, lbl_80889198
    li r28, 0x0
    lfs f30, lbl_808891A0
    lis r30, 0x4330
    lfs f31, lbl_80889190
    b lbl_fn_80712990_00000FD8
lbl_fn_80712990_00000E5C:
    cmpwi r28, 0x300
    bge lbl_fn_80712990_0000102C
    cmpwi r4, 0x0
    beq lbl_fn_80712990_00000E7C
    lwz r3, 0xdc(r31)
    subi r0, r3, 0x1
    stw r0, 0xdc(r31)
    b lbl_fn_80712990_00000EB8
lbl_fn_80712990_00000E7C:
    lbz r3, 0xea(r31)
    lhz r0, 0xec(r31)
    stw r30, 0x8(r1)
    mullw r0, r3, r0
    lfs f1, 0xd4(r31)
    lfs f0, 0xe0(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f29
    fmuls f1, f1, f2
    fdivs f1, f1, f30
    fdivs f1, f31, f1
    fsubs f0, f0, f1
    stfs f0, 0xe0(r31)
lbl_fn_80712990_00000EB8:
    mr r3, r31
    li r4, 0x0
    bl fn_807124A0
    cmpwi r3, 0x0
    beq lbl_fn_80712990_00000FC8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80712990_00000F08
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_fn_80712990_00000EF4
    addi r29, r31, 0xc0
lbl_fn_80712990_00000EF4:
    bl fn_807187D0
    mr r4, r29
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r31)
lbl_fn_80712990_00000F08:
    lbz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80712990_00000F38
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_fn_80712990_00000F24
    addi r29, r31, 0xb4
lbl_fn_80712990_00000F24:
    bl fn_8070C650
    mr r4, r29
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r31)
lbl_fn_80712990_00000F38:
    mr r28, r31
    li r29, 0x0
    li r30, 0x0
lbl_fn_80712990_00000F44:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r29, 0xf
    ble lbl_fn_80712990_00000F60
    li r3, 0x0
    b lbl_fn_80712990_00000F64
lbl_fn_80712990_00000F60:
    lwz r3, 0x100(r28)
lbl_fn_80712990_00000F64:
    cmpwi r3, 0x0
    bne lbl_fn_80712990_00000F7C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80712990_00000FA8
lbl_fn_80712990_00000F7C:
    bl fn_80713850
    lwz r3, 0xf4(r31)
    lwz r4, 0x100(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r30, 0x100(r28)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80712990_00000FA8:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x10
    blt lbl_fn_80712990_00000F44
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80712990_0000102C
lbl_fn_80712990_00000FC8:
    lwz r3, 0x160(r31)
    addi r28, r28, 0x1
    addi r0, r3, 0x1
    stw r0, 0x160(r31)
lbl_fn_80712990_00000FD8:
    lwz r4, 0xdc(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80712990_00000E5C
    lbz r3, 0xea(r31)
    lhz r0, 0xec(r31)
    stw r30, 0x8(r1)
    mullw r0, r3, r0
    lfs f1, 0xd4(r31)
    lfs f0, 0xe0(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f29
    fmuls f1, f1, f2
    fdivs f1, f1, f30
    fmuls f0, f0, f1
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    beq lbl_fn_80712990_00000E5C
    lfs f0, lbl_80889194
    stfs f0, 0xe0(r31)
lbl_fn_80712990_0000102C:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80712C30(void)
{
    nofralloc
    mr r7, r3
    lwz r3, 0xf0(r3)
    mr r0, r4
    mr r6, r5
    lwz r12, 0x0(r3)
    mr r4, r7
    mr r5, r0
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

asm void fn_80712C60(void)
{
    nofralloc
    blr
}

asm void fn_80712C70(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_80711910
}

asm void fn_80712C80(void)
{
    nofralloc
    subi r3, r3, 0xc0
    b fn_80711910
}

asm void fn_80712C90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r4, r5
    mr r5, r6
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80709870
    lis r4, lbl_807C6220@ha
    addi r3, r30, 0x110
    addi r4, r4, lbl_807C6220@l
    stw r4, 0x0(r30)
    bl fn_807117C0
    lis r4, lbl_807C6258@ha
    li r0, 0x0
    stb r0, 0x288(r30)
    addi r4, r4, lbl_807C6258@l
    mr r3, r30
    stb r0, 0x289(r30)
    stw r0, 0x274(r30)
    stw r31, 0x278(r30)
    stw r0, 0x284(r30)
    stw r0, 0x28c(r30)
    stw r0, 0x494(r30)
    stw r0, 0x498(r30)
    stb r0, 0x49c(r30)
    stw r4, 0x490(r30)
    stw r0, 0x4a0(r30)
    stw r0, 0x4a4(r30)
    stw r0, 0x4ac(r30)
    stw r0, 0x4b0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80712D30(void)
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
    beq lbl_fn_80712D30_000011AC
    li r4, 0x0
    bl fn_8071D220
    cmpwi r31, 0x0
    ble lbl_fn_80712D30_000011AC
    mr r3, r30
    bl dtor_80084684
lbl_fn_80712D30_000011AC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80712D90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80709950
    li r0, 0x0
    stw r0, 0x284(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80712DD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r28
    bl fn_8070AC10
    mr r6, r3
    mr r4, r29
    mr r5, r30
    mr r7, r31
    addi r3, r28, 0x110
    bl fn_80711BC0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80712E50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x110
    bl fn_80711E60
    cmpwi r31, 0x0
    ble lbl_fn_80712E50_000012D4
    mr r4, r30
    mr r5, r31
    addi r3, r29, 0x110
    bl fn_80712130
lbl_fn_80712E50_000012D4:
    li r0, 0x1
    stb r0, 0x289(r29)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80712EC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r30, 0x4(r3)
    stw r4, 0x28c(r3)
    cmpwi r30, 0x0
    stw r5, 0x27c(r3)
    stw r6, 0x280(r3)
    stw r7, 0x284(r3)
    stb r0, 0x288(r3)
    bne lbl_fn_80712EC0_00001348
    li r0, 0x0
    b lbl_fn_80712EC0_000013BC
lbl_fn_80712EC0_00001348:
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r31, r3
    mr r3, r30
    lwz r12, 0xc(r12)
    mr r4, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80712EC0_00001388
    li r0, 0x0
    b lbl_fn_80712EC0_000013BC
lbl_fn_80712EC0_00001388:
    lwz r0, 0x28c(r29)
    lis r4, fn_80712FC0@ha
    addi r4, r4, fn_80712FC0@l
    stw r0, 0x4a0(r29)
    stw r3, 0x4a4(r29)
    stw r31, 0x4a8(r29)
    stw r4, 0x4ac(r29)
    stw r29, 0x4b0(r29)
    bl fn_8071D260
    addi r4, r29, 0x490
    li r5, 0x1
    bl fn_8071D3F0
    li r0, 0x1
lbl_fn_80712EC0_000013BC:
    cmpwi r0, 0x0
    bne lbl_fn_80712EC0_000013D8
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80712EC0_000013D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80712FC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r5
    stb r0, 0x288(r5)
    bne lbl_fn_80712FC0_00001434
    mr r3, r31
    li r4, 0x0
    bl fn_80709AD0
    b lbl_fn_80712FC0_00001460
lbl_fn_80712FC0_00001434:
    addi r3, r5, 0x110
    lwz r5, 0x27c(r5)
    bl fn_80711E60
    lwz r5, 0x284(r31)
    cmpwi r5, 0x0
    ble lbl_fn_80712FC0_00001458
    lwz r4, 0x280(r31)
    addi r3, r31, 0x110
    bl fn_80712130
lbl_fn_80712FC0_00001458:
    li r0, 0x1
    stb r0, 0x289(r31)
lbl_fn_80712FC0_00001460:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80713040(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x288(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80713040_000014B4
    bl fn_8071D260
    addi r4, r29, 0x490
    bl fn_8071D760
lbl_fn_80713040_000014B4:
    lwz r3, 0x28c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80713040_000014D8
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x28c(r29)
lbl_fn_80713040_000014D8:
    mr r3, r29
    bl fn_8070A9F0
    lwz r30, 0x278(r29)
    addi r31, r30, 0x10
    mr r3, r31
    bl fn_805F3130
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80713040_00001508
    mr r3, r31
    bl fn_805F3210
    b lbl_fn_80713040_00001540
lbl_fn_80713040_00001508:
    addi r3, r30, 0x4
    addi r4, r29, 0xf0
    bl fn_807252D0
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r30
    mr r4, r29
    bl fn_8070F130
    mr r3, r31
    bl fn_805F3210
lbl_fn_80713040_00001540:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80713120(void)
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
    beq lbl_fn_80713120_000015B0
    addic. r3, r3, 0x490
    beq lbl_fn_80713120_00001594
    li r4, 0x0
    bl fn_8071D220
lbl_fn_80713120_00001594:
    addi r3, r30, 0x110
    li r4, -0x1
    bl fn_80711910
    cmpwi r31, 0x0
    ble lbl_fn_80713120_000015B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80713120_000015B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80713190(void)
{
    nofralloc
    addi r3, r3, 0x110
    b fn_807121F0
}

asm void fn_807131A0(void)
{
    nofralloc
    addi r3, r3, 0x110
    b fn_80712200
}

asm void fn_807131B0(void)
{
    nofralloc
    addi r3, r3, 0x110
    b fn_80712210
}

asm void fn_807131C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r4, 0x98(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_fn_807131C0_0000163C
    li r29, 0x7f
    b lbl_fn_807131C0_00001644
lbl_fn_807131C0_0000163C:
    srawi r0, r4, 31
    andc r29, r4, r0
lbl_fn_807131C0_00001644:
    lwz r30, 0x278(r3)
    addi r31, r30, 0x10
    mr r3, r31
    bl fn_805F3130
    addi r28, r28, 0xf0
    addi r3, r30, 0x4
    mr r4, r28
    bl fn_807252D0
    lwz r3, 0x8(r30)
    addi r0, r30, 0x8
    b lbl_fn_807131C0_000016A0
lbl_fn_807131C0_00001670:
    lbz r5, -0x58(r3)
    lwz r4, -0xa0(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_fn_807131C0_0000168C
    li r4, 0x7f
    b lbl_fn_807131C0_00001694
lbl_fn_807131C0_0000168C:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_fn_807131C0_00001694:
    cmpw r29, r4
    blt lbl_fn_807131C0_000016A8
    lwz r3, 0x0(r3)
lbl_fn_807131C0_000016A0:
    cmplw r3, r0
    bne lbl_fn_807131C0_00001670
lbl_fn_807131C0_000016A8:
    stw r3, 0x8(r1)
    mr r5, r28
    addi r3, r30, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r31
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807132B0(void)
{
    nofralloc
    lwz r3, 0x274(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_807132D0(void)
{
    nofralloc
    lwz r3, 0x274(r3)
    b fn_80713490
}

asm void fn_807132E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x10(r31)
    lwz r4, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r5, 0x18(r31)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x3
    li r0, 0x0
    stw r0, 0x10(r31)
    bne lbl_fn_807132E0_000017A0
    lwz r12, 0x1c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_807132E0_00001804
    lwz r5, 0x20(r31)
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_807132E0_00001804
lbl_fn_807132E0_000017A0:
    lwz r0, 0x18(r31)
    cmpw r3, r0
    beq lbl_fn_807132E0_000017D0
    lwz r12, 0x1c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_807132E0_00001804
    lwz r5, 0x20(r31)
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_807132E0_00001804
lbl_fn_807132E0_000017D0:
    lwz r4, 0x14(r31)
    addi r3, r1, 0x8
    bl fn_80711630
    addi r3, r1, 0x8
    bl fn_807116A0
    lwz r12, 0x1c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_807132E0_00001804
    mr r4, r3
    lwz r5, 0x20(r31)
    li r3, 0x1
    mtctr r12
    bctrl
lbl_fn_807132E0_00001804:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807133E0(void)
{
    nofralloc
    lwz r12, 0x1c(r3)
    cmpwi r12, 0x0
    beqlr
    lwz r5, 0x20(r3)
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctr
    blr
}

asm void fn_80713410(void)
{
    nofralloc
    lwz r4, 0x10(r3)
    li r0, 0x0
    stw r0, 0x1c(r3)
    cmpwi r4, 0x0
    beqlr
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x48(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_80713440(void)
{
    nofralloc
    addi r3, r3, 0x110
    blr
}

asm void fn_80713450(void)
{
    nofralloc
    addi r3, r3, 0x110
    blr
}

asm void fn_80713460(void)
{
    nofralloc
    lbz r3, 0x289(r3)
    blr
}

asm void fn_80713470(void)
{
    nofralloc
    la r3, lbl_808804D8
    blr
}

asm void fn_80713480(void)
{
    nofralloc
    la r0, lbl_808804B0
    stw r0, lbl_808804D8
    blr
}

asm void fn_80713490(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80713490_000018F0
    lwz r0, 0x274(r4)
    cmplw r0, r3
    bne lbl_fn_80713490_000018F0
    li r0, 0x0
    stw r0, 0x274(r4)
lbl_fn_80713490_000018F0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_807134D0(void)
{
    nofralloc
    stb r4, 0x4(r3)
    blr
}

asm void fn_807134E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6270@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807C6270@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x0(r3)
    stb r31, 0x5(r3)
    addi r3, r3, 0x58
    bl fn_8070F180
    stb r31, 0x70(r30)
    mr r3, r30
    stb r31, 0x71(r30)
    sth r31, 0x72(r30)
    sth r31, 0x74(r30)
    stb r31, 0x76(r30)
    stb r31, 0x77(r30)
    sth r31, 0x78(r30)
    sth r31, 0x7a(r30)
    stb r31, 0x7c(r30)
    stb r31, 0x7d(r30)
    sth r31, 0x7e(r30)
    sth r31, 0x80(r30)
    stb r31, 0x82(r30)
    stb r31, 0x83(r30)
    sth r31, 0x84(r30)
    sth r31, 0x86(r30)
    stw r31, 0xc4(r30)
    stw r31, 0xc8(r30)
    bl fn_80713690
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80713580(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80713580_00001AA4
    lis r4, lbl_807C6270@ha
    addi r4, r4, lbl_807C6270@l
    stw r4, 0x0(r3)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    mr r3, r29
    bl fn_80713CB0
    lwz r31, 0xc8(r29)
    b lbl_fn_80713580_00001A34
lbl_fn_80713580_00001A1C:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80713580_00001A30
    mr r3, r31
    bl fn_8070C090
lbl_fn_80713580_00001A30:
    lwz r31, 0xd4(r31)
lbl_fn_80713580_00001A34:
    cmpwi r31, 0x0
    bne lbl_fn_80713580_00001A1C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0xc8(r29)
    b lbl_fn_80713580_00001A68
lbl_fn_80713580_00001A5C:
    mr r3, r31
    bl fn_8070C630
    lwz r31, 0xd4(r31)
lbl_fn_80713580_00001A68:
    cmpwi r31, 0x0
    bne lbl_fn_80713580_00001A5C
    li r31, 0x0
    stw r31, 0xc8(r29)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    stb r31, 0x5(r29)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    cmpwi r30, 0x0
    ble lbl_fn_80713580_00001AA4
    mr r3, r29
    bl dtor_80084684
lbl_fn_80713580_00001AA4:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80713690(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f1, lbl_808891A8
    stw r0, 0x14(r1)
    li r0, 0x1
    lfs f0, lbl_808891AC
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f1, 0x18(r3)
    stw r31, 0x1c(r3)
    stw r31, 0x20(r3)
    stb r0, 0x24(r3)
    stb r0, 0x25(r3)
    stb r31, 0x26(r3)
    stb r31, 0x27(r3)
    stb r31, 0x40(r3)
    stw r31, 0x44(r3)
    stb r31, 0x48(r3)
    stb r31, 0x49(r3)
    stb r31, 0x4a(r3)
    stb r31, 0x4b(r3)
    stb r31, 0x4c(r3)
    stw r31, 0x50(r3)
    stw r31, 0x54(r3)
    addi r3, r3, 0x58
    bl fn_8070F180
    lfs f0, lbl_808891AC
    li r7, 0x7f
    li r3, 0xff
    li r6, 0x2
    li r5, 0x40
    li r4, 0x3c
    stb r31, 0x68(r30)
    li r0, -0x1
    stfs f0, 0x6c(r30)
    stb r7, 0x70(r30)
    stb r7, 0x71(r30)
    sth r31, 0x72(r30)
    sth r31, 0x74(r30)
    stb r31, 0x76(r30)
    stb r31, 0x77(r30)
    sth r31, 0x78(r30)
    sth r31, 0x7a(r30)
    stb r31, 0x7c(r30)
    stb r31, 0x7d(r30)
    sth r31, 0x7e(r30)
    sth r31, 0x80(r30)
    stb r7, 0x88(r30)
    stb r7, 0x89(r30)
    stb r31, 0x82(r30)
    stb r31, 0x83(r30)
    sth r31, 0x84(r30)
    sth r31, 0x86(r30)
    stb r6, 0x8a(r30)
    stb r31, 0x8b(r30)
    stb r31, 0x8c(r30)
    stb r5, 0x8d(r30)
    stb r4, 0x8e(r30)
    stb r31, 0x8f(r30)
    stb r3, 0x90(r30)
    stb r3, 0x91(r30)
    stb r3, 0x92(r30)
    stb r3, 0x93(r30)
    sth r3, 0x94(r30)
    stb r7, 0x96(r30)
    stb r31, 0x97(r30)
    stb r31, 0x98(r30)
    stb r31, 0x99(r30)
    stfs f0, 0x9c(r30)
    stb r31, 0x9a(r30)
    stfs f0, 0xa0(r30)
    sth r0, 0xa4(r30)
    sth r0, 0xa6(r30)
    sth r0, 0xa8(r30)
    sth r0, 0xaa(r30)
    sth r0, 0xac(r30)
    sth r0, 0xae(r30)
    sth r0, 0xb0(r30)
    sth r0, 0xb2(r30)
    sth r0, 0xb4(r30)
    sth r0, 0xb6(r30)
    sth r0, 0xb8(r30)
    sth r0, 0xba(r30)
    sth r0, 0xbc(r30)
    sth r0, 0xbe(r30)
    sth r0, 0xc0(r30)
    sth r0, 0xc2(r30)
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80713820(void)
{
    nofralloc
    add r0, r4, r5
    stw r4, 0x1c(r3)
    stw r0, 0x20(r3)
    blr
}

asm void fn_80713830(void)
{
    nofralloc
    li r4, 0x0
    li r0, 0x1
    stb r4, 0x4a(r3)
    stb r4, 0x40(r3)
    stw r4, 0x44(r3)
    stb r0, 0x5(r3)
    blr
}

asm void fn_80713850(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    mr r3, r30
    bl fn_80713CB0
    lwz r31, 0xc8(r30)
    b lbl_fn_80713850_00001CE8
lbl_fn_80713850_00001CD0:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80713850_00001CE4
    mr r3, r31
    bl fn_8070C090
lbl_fn_80713850_00001CE4:
    lwz r31, 0xd4(r31)
lbl_fn_80713850_00001CE8:
    cmpwi r31, 0x0
    bne lbl_fn_80713850_00001CD0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0xc8(r30)
    b lbl_fn_80713850_00001D1C
lbl_fn_80713850_00001D10:
    mr r3, r31
    bl fn_8070C630
    lwz r31, 0xd4(r31)
lbl_fn_80713850_00001D1C:
    cmpwi r31, 0x0
    bne lbl_fn_80713850_00001D10
    li r31, 0x0
    stw r31, 0xc8(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    stb r31, 0x5(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80713920(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80713920_00001DA0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80713920_00001E18
lbl_fn_80713920_00001DA0:
    lwz r31, 0xc8(r30)
    b lbl_fn_80713920_00001E04
lbl_fn_80713920_00001DA8:
    lwz r3, 0xb0(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80713920_00001DBC
    subi r0, r3, 0x1
    stw r0, 0xb0(r31)
lbl_fn_80713920_00001DBC:
    lwz r0, 0xb0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80713920_00001DE8
    lwz r0, 0x0(r31)
    cmpwi r0, 0x4
    beq lbl_fn_80713920_00001DE8
    lbz r0, 0x4c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80713920_00001DE8
    mr r3, r31
    bl fn_8070C100
lbl_fn_80713920_00001DE8:
    lbz r0, 0x38(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80713920_00001E00
    mr r3, r31
    li r4, 0x1
    bl fn_8070C2B0
lbl_fn_80713920_00001E00:
    lwz r31, 0xd4(r31)
lbl_fn_80713920_00001E04:
    cmpwi r31, 0x0
    bne lbl_fn_80713920_00001DA8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80713920_00001E18:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807139F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_807139F0_00001E78
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_807139F0_00001FA4
lbl_fn_807139F0_00001E78:
    lha r3, 0x74(r30)
    lha r0, 0x72(r30)
    cmpw r3, r0
    bge lbl_fn_807139F0_00001E90
    addi r0, r3, 0x1
    sth r0, 0x74(r30)
lbl_fn_807139F0_00001E90:
    lha r3, 0x7a(r30)
    lha r0, 0x78(r30)
    cmpw r3, r0
    bge lbl_fn_807139F0_00001EA8
    addi r0, r3, 0x1
    sth r0, 0x7a(r30)
lbl_fn_807139F0_00001EA8:
    lha r3, 0x80(r30)
    lha r0, 0x7e(r30)
    cmpw r3, r0
    bge lbl_fn_807139F0_00001EC0
    addi r0, r3, 0x1
    sth r0, 0x80(r30)
lbl_fn_807139F0_00001EC0:
    lha r3, 0x86(r30)
    lha r0, 0x84(r30)
    cmpw r3, r0
    bge lbl_fn_807139F0_00001ED8
    addi r0, r3, 0x1
    sth r0, 0x86(r30)
lbl_fn_807139F0_00001ED8:
    lbz r0, 0x4a(r30)
    cmpwi r0, 0x0
    beq lbl_fn_807139F0_00001F0C
    lwz r0, 0xc8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_807139F0_00001F04
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
    b lbl_fn_807139F0_00001FA4
lbl_fn_807139F0_00001F04:
    li r0, 0x0
    stb r0, 0x4a(r30)
lbl_fn_807139F0_00001F0C:
    lwz r3, 0x44(r30)
    cmpwi r3, 0x0
    ble lbl_fn_807139F0_00001F38
    subic. r0, r3, 0x1
    stw r0, 0x44(r30)
    ble lbl_fn_807139F0_00001F38
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
    b lbl_fn_807139F0_00001FA4
lbl_fn_807139F0_00001F38:
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    beq lbl_fn_807139F0_00001F94
    b lbl_fn_807139F0_00001F7C
lbl_fn_807139F0_00001F48:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x1
    bne lbl_fn_807139F0_00001F7C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, -0x1
    b lbl_fn_807139F0_00001FA4
lbl_fn_807139F0_00001F7C:
    lwz r0, 0x44(r30)
    cmpwi r0, 0x0
    bne lbl_fn_807139F0_00001F94
    lbz r0, 0x4a(r30)
    cmpwi r0, 0x0
    beq lbl_fn_807139F0_00001F48
lbl_fn_807139F0_00001F94:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
lbl_fn_807139F0_00001FA4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80713B80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    mr r3, r31
    bl fn_80713CB0
    lwz r31, 0xc8(r31)
    b lbl_fn_80713B80_00002024
lbl_fn_80713B80_00001FF8:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80713B80_00002020
    cmpwi r30, 0x0
    blt lbl_fn_80713B80_00002018
    mr r3, r31
    clrlwi r4, r30, 24
    bl fn_8070CE10
lbl_fn_80713B80_00002018:
    mr r3, r31
    bl fn_8070C090
lbl_fn_80713B80_00002020:
    lwz r31, 0xd4(r31)
lbl_fn_80713B80_00002024:
    cmpwi r31, 0x0
    bne lbl_fn_80713B80_00001FF8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
