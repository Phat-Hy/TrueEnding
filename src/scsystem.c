#include "revolution/types.h"

/* External function declarations */
extern void NANDInit(void);
extern void NANDPrivateOpenAsync(void);
extern void OSDisableInterrupts(void);
extern void OSGetConsoleType(void);
extern void OSInitThreadQueue(void);
extern void OSRegisterVersion(void);
extern void OSRestoreInterrupts(void);
extern void OSWakeupThread(void);
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_8061E3F0(void);
extern void fn_8061E6A0(void);
extern void fn_8061E7D0(void);
extern void fn_8061E8C0(void);
extern void fn_8061ECE0(void);
extern void fn_8061F3D0(void);
extern void fn_8061FBE0(void);
extern void fn_806220A0(void);
extern void fn_8067E23C(void);
extern void memmove(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 ConfBuf_807EB760[];
extern u8 ConfFileName_80764BB8[];
extern u8 Control_807EB5C0[];
extern u8 ProductInfoFileName_80764BD0[];
extern u8 jumptable_807B3040[];
extern u8 lbl_80764BA8[];
extern u8 lbl_807B2F10[];
extern u8 lbl_807EF760[];

/* Small data declarations */
extern u32 BgJobStatus_80880138;
extern u32 Initialized_8088014E;
extern u32 IsDevKit_8088014C;
extern u32 ItemIDOffsetTblOffset_80880148;
extern u32 ItemNumTotal_80880140;
extern u32 ItemRestSize_8088013C;
extern u32 __SCVersion;
static const char lbl_8087EA38[] = "SCv0";
static const char lbl_8087EA40[] = "SCed";
extern u32 lbl_80880144;
extern u32 lbl_8088014D;

/* Function declarations */
void SCInit(void);
void SCCheckStatus(void);
void SCReloadConfFileAsync(void);
void OpenCallbackFromReload(void);
void fn_80623250(void);
void fn_80623340(void);
void fn_806233D0(void);
void fn_80623500(void);
void fn_80623510(void);
void fn_80623760(void);
void fn_806238E0(void);
void fn_80623A80(void);
void fn_80623D00(void);
void fn_80623DE0(void);
void fn_80623F10(void);
void fn_80623FF0(void);
void fn_806240D0(void);
void fn_806241B0(void);
void fn_806242C0(void);
void fn_806242D0(void);
void fn_806244F0(void);
void fn_80624830(void);
void fn_80624890(void);
void fn_80624910(void);
void fn_80624970(void);

asm void SCInit(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lbz r0, Initialized_8088014E
    cmpwi r0, 0x0
    beq lbl_SCInit_00000028
    bl OSRestoreInterrupts
    b lbl_SCInit_0000008C
lbl_SCInit_00000028:
    li r31, 0x1
    stb r31, Initialized_8088014E
    stb r31, BgJobStatus_80880138
    bl OSRestoreInterrupts
    lwz r3, __SCVersion
    bl OSRegisterVersion
    lis r3, Control_807EB5C0@ha
    addi r3, r3, Control_807EB5C0@l
    bl OSInitThreadQueue
    bl OSGetConsoleType
    rlwinm. r0, r3, 0, 3, 3
    beq lbl_SCInit_0000005C
    stb r31, IsDevKit_8088014C
lbl_SCInit_0000005C:
    bl NANDInit
    cmpwi r3, 0x0
    bne lbl_SCInit_00000084
    lis r3, ConfBuf_807EB760@ha
    li r4, 0x4000
    addi r3, r3, ConfBuf_807EB760@l
    li r5, 0x0
    bl SCReloadConfFileAsync
    cmpwi r3, 0x0
    beq lbl_SCInit_0000008C
lbl_SCInit_00000084:
    li r0, 0x2
    stb r0, BgJobStatus_80880138
lbl_SCInit_0000008C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void SCCheckStatus(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lbz r29, BgJobStatus_80880138
    cmplwi r29, 0x3
    bne lbl_SCCheckStatus_00000198
    li r0, 0x1
    stb r0, BgJobStatus_80880138
    bl OSRestoreInterrupts
    lis r31, Control_807EB5C0@ha
    addi r31, r31, Control_807EB5C0@l
    lwz r3, 0x16c(r31)
    lwz r4, 0x17c(r31)
    bl fn_80623510
    cmpwi r3, 0x0
    bne lbl_SCCheckStatus_0000012C
    bl OSDisableInterrupts
    lis r5, ConfBuf_807EB760@ha
    lwz r4, 0x16c(r31)
    addi r5, r5, ConfBuf_807EB760@l
    mr r29, r3
    cmplw r5, r4
    beq lbl_SCCheckStatus_00000118
    mr r3, r5
    li r5, 0x4000
    bl memcpy
lbl_SCCheckStatus_00000118:
    li r0, 0x0
    stb r0, lbl_8088014D
    mr r3, r29
    bl OSRestoreInterrupts
    b lbl_SCCheckStatus_0000018C
lbl_SCCheckStatus_0000012C:
    bl OSDisableInterrupts
    lwz r31, 0x16c(r31)
    mr r29, r3
    li r30, 0x4000
    li r4, 0x0
    mr r3, r31
    li r5, 0x4000
    bl memset
    cmplwi r30, 0xc
    ble lbl_SCCheckStatus_0000017C
    mr r3, r31
    la r4, lbl_8087EA38
    li r5, 0x4
    bl memcpy
    addi r3, r31, 0x3ffc
    la r4, lbl_8087EA40
    li r5, 0x4
    bl memcpy
    li r0, 0x8
    sth r0, 0x6(r31)
lbl_SCCheckStatus_0000017C:
    li r0, 0x0
    stb r0, lbl_8088014D
    mr r3, r29
    bl OSRestoreInterrupts
lbl_SCCheckStatus_0000018C:
    li r29, 0x0
    stb r29, BgJobStatus_80880138
    b lbl_SCCheckStatus_0000019C
lbl_SCCheckStatus_00000198:
    bl OSRestoreInterrupts
lbl_SCCheckStatus_0000019C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void SCReloadConfFileAsync(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r4, 0x4000
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bge lbl_SCReloadConfFileAsync_000001EC
    li r3, -0x80
    b lbl_SCReloadConfFileAsync_000002B8
lbl_SCReloadConfFileAsync_000001EC:
    lis r30, Control_807EB5C0@ha
    lis r9, ConfFileName_80764BB8@ha
    addi r30, r30, Control_807EB5C0@l
    lis r8, ProductInfoFileName_80764BD0@ha
    li r31, 0x0
    lis r4, 0x8000
    addi r7, r4, 0x3800
    stw r5, 0x15c(r30)
    addi r9, r9, ConfFileName_80764BB8@l
    addi r8, r8, ProductInfoFileName_80764BD0@l
    li r4, 0x1
    li r6, 0x4000
    li r0, 0x100
    stb r4, BgJobStatus_80880138
    li r4, 0x0
    li r5, 0x4000
    stw r31, 0x160(r30)
    stb r31, 0x15a(r30)
    stw r31, 0x17c(r30)
    stw r31, 0x180(r30)
    stw r9, 0x164(r30)
    stw r8, 0x168(r30)
    stw r3, 0x16c(r30)
    stw r7, 0x170(r30)
    stw r6, 0x174(r30)
    stw r0, 0x178(r30)
    bl memset
    mr r3, r29
    la r4, lbl_8087EA38
    li r5, 0x4
    bl memcpy
    addi r3, r29, 0x3ffc
    la r4, lbl_8087EA40
    li r5, 0x4
    bl memcpy
    li r0, 0x8
    sth r0, 0x6(r29)
    lis r6, OpenCallbackFromReload@ha
    addi r4, r30, 0x8
    lbz r0, 0x15a(r30)
    addi r6, r6, OpenCallbackFromReload@l
    stb r31, 0x159(r30)
    addi r7, r30, 0x94
    slwi r0, r0, 2
    li r5, 0x1
    add r3, r30, r0
    stw r31, ItemIDOffsetTblOffset_80880148
    lwz r3, 0x164(r3)
    stw r31, ItemNumTotal_80880140
    stw r31, ItemRestSize_8088013C
    bl NANDPrivateOpenAsync
lbl_SCReloadConfFileAsync_000002B8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void OpenCallbackFromReload(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_OpenCallbackFromReload_0000033C
    lis r4, Control_807EB5C0@ha
    lis r6, fn_80623250@ha
    addi r4, r4, Control_807EB5C0@l
    li r5, 0x1
    lbz r0, 0x15a(r4)
    addi r3, r4, 0x8
    stb r5, 0x159(r4)
    addi r7, r4, 0x94
    slwi r0, r0, 2
    addi r6, r6, fn_80623250@l
    add r5, r4, r0
    lwz r4, 0x16c(r5)
    lwz r5, 0x174(r5)
    bl fn_8061E7D0
    cmpwi r3, 0x0
    beq lbl_OpenCallbackFromReload_0000039C
lbl_OpenCallbackFromReload_0000033C:
    lis r3, Control_807EB5C0@ha
    addi r3, r3, Control_807EB5C0@l
    lbz r0, 0x15a(r3)
    cmpwi r0, 0x0
    bne lbl_OpenCallbackFromReload_00000354
    stw r31, 0x160(r3)
lbl_OpenCallbackFromReload_00000354:
    lis r5, Control_807EB5C0@ha
    li r4, 0x0
    addi r5, r5, Control_807EB5C0@l
    lbz r0, 0x15a(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x17c(r3)
    lbz r0, 0x159(r5)
    cmpwi r0, 0x0
    beq lbl_OpenCallbackFromReload_00000398
    lis r4, fn_80623500@ha
    addi r3, r5, 0x8
    addi r4, r4, fn_80623500@l
    addi r5, r5, 0x94
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_OpenCallbackFromReload_0000039C
lbl_OpenCallbackFromReload_00000398:
    bl fn_806233D0
lbl_OpenCallbackFromReload_0000039C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80623250(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, Control_807EB5C0@ha
    stw r0, 0x14(r1)
    addi r5, r5, Control_807EB5C0@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x15a(r5)
    slwi r0, r0, 2
    add r4, r5, r0
    lwz r0, 0x174(r4)
    cmplw r3, r0
    bne lbl_fn_80623250_0000040C
    stw r3, 0x17c(r4)
    li r0, 0x0
    lis r4, fn_80623340@ha
    addi r3, r5, 0x8
    stb r0, 0x159(r5)
    addi r4, r4, fn_80623340@l
    addi r5, r5, 0x94
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_fn_80623250_00000484
lbl_fn_80623250_0000040C:
    lis r3, Control_807EB5C0@ha
    addi r3, r3, Control_807EB5C0@l
    lbz r0, 0x15a(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80623250_0000043C
    cmpwi r31, 0x0
    li r0, -0x80
    beq lbl_fn_80623250_00000430
    mr r0, r31
lbl_fn_80623250_00000430:
    lis r3, Control_807EB5C0@ha
    addi r3, r3, Control_807EB5C0@l
    stw r0, 0x160(r3)
lbl_fn_80623250_0000043C:
    lis r5, Control_807EB5C0@ha
    li r4, 0x0
    addi r5, r5, Control_807EB5C0@l
    lbz r0, 0x15a(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x17c(r3)
    lbz r0, 0x159(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80623250_00000480
    lis r4, fn_80623500@ha
    addi r3, r5, 0x8
    addi r4, r4, fn_80623500@l
    addi r5, r5, 0x94
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_fn_80623250_00000484
lbl_fn_80623250_00000480:
    bl fn_806233D0
lbl_fn_80623250_00000484:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80623340(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_80623340_000004BC
    bl fn_806233D0
    b lbl_fn_80623340_0000051C
lbl_fn_80623340_000004BC:
    lis r4, Control_807EB5C0@ha
    addi r4, r4, Control_807EB5C0@l
    lbz r0, 0x15a(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80623340_000004D4
    stw r3, 0x160(r4)
lbl_fn_80623340_000004D4:
    lis r5, Control_807EB5C0@ha
    li r4, 0x0
    addi r5, r5, Control_807EB5C0@l
    lbz r0, 0x15a(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x17c(r3)
    lbz r0, 0x159(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80623340_00000518
    lis r4, fn_80623500@ha
    addi r3, r5, 0x8
    addi r4, r4, fn_80623500@l
    addi r5, r5, 0x94
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_fn_80623340_0000051C
lbl_fn_80623340_00000518:
    bl fn_806233D0
lbl_fn_80623340_0000051C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806233D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    lis r30, OpenCallbackFromReload@ha
    stw r29, 0x14(r1)
    lis r29, Control_807EB5C0@ha
    addi r29, r29, Control_807EB5C0@l
    stw r28, 0x10(r1)
lbl_fn_806233D0_0000055C:
    lbz r3, 0x15a(r29)
    addi r3, r3, 0x1
    stb r3, 0x15a(r29)
    clrlwi r0, r3, 24
    cmplwi r0, 0x2
    bge lbl_fn_806233D0_000005A4
    clrlslwi r0, r3, 24, 2
    stb r31, 0x159(r29)
    add r3, r29, r0
    addi r4, r29, 0x8
    lwz r3, 0x164(r3)
    addi r6, r30, OpenCallbackFromReload@l
    addi r7, r29, 0x94
    li r5, 0x1
    bl NANDPrivateOpenAsync
    cmpwi r3, 0x0
    bne lbl_fn_806233D0_0000055C
    b lbl_fn_806233D0_00000634
lbl_fn_806233D0_000005A4:
    lwz r0, 0x160(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806233D0_000005B8
    li r28, 0x3
    b lbl_fn_806233D0_00000600
lbl_fn_806233D0_000005B8:
    lwz r30, 0x16c(r29)
    li r4, 0x0
    li r5, 0x4000
    mr r3, r30
    bl memset
    mr r3, r30
    la r4, lbl_8087EA38
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0x3ffc
    la r4, lbl_8087EA40
    li r5, 0x4
    bl memcpy
    li r0, 0x8
    sth r0, 0x6(r30)
    li r28, 0x3
    lwz r0, 0x174(r29)
    stw r0, 0x17c(r29)
lbl_fn_806233D0_00000600:
    lis r3, 0x8000
    li r30, 0x0
    lis r31, Control_807EB5C0@ha
    stb r30, 0x38ff(r3)
    addi r31, r31, Control_807EB5C0@l
    lwz r12, 0x15c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806233D0_00000630
    lwz r3, 0x160(r31)
    mtctr r12
    bctrl
    stw r30, 0x15c(r31)
lbl_fn_806233D0_00000630:
    stb r28, BgJobStatus_80880138
lbl_fn_806233D0_00000634:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80623500(void)
{
    nofralloc
    b fn_806233D0
}

asm void fn_80623510(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_21
    subi r0, r4, 0xc
    lis r27, lbl_807B2F10@ha
    cmplwi r0, 0x3ff4
    mr r25, r3
    mr r26, r4
    addi r27, r27, lbl_807B2F10@l
    bgt lbl_fn_80623510_0000089C
    add r31, r3, r4
    li r0, 0x26
    stw r0, lbl_80880144
    la r4, lbl_8087EA38
    li r5, 0x4
    subi r31, r31, 0x4
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80623510_0000089C
    mr r3, r31
    la r4, lbl_8087EA40
    li r5, 0x4
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80623510_0000089C
    cmplwi r26, 0x4000
    bge lbl_fn_80623510_0000070C
    subfic r22, r26, 0x4000
    mr r3, r31
    mr r5, r22
    li r4, 0x0
    bl memset
    add r31, r31, r22
    la r4, lbl_8087EA40
    mr r3, r31
    li r5, 0x4
    bl memcpy
lbl_fn_80623510_0000070C:
    addi r0, r25, 0x6
    cmplw r0, r31
    ble lbl_fn_80623510_00000720
    li r0, 0x0
    b lbl_fn_80623510_00000730
lbl_fn_80623510_00000720:
    lbz r3, 0x4(r25)
    li r0, 0x1
    lbz r30, 0x5(r25)
    rlwimi r30, r3, 8, 16, 23
lbl_fn_80623510_00000730:
    cmpwi r0, 0x0
    beq lbl_fn_80623510_0000089C
    addi r29, r25, 0x6
    slwi r0, r30, 1
    add r3, r29, r0
    li r23, 0x0
    addi r0, r3, 0x2
    mr r24, r29
    subf r28, r25, r0
    b lbl_fn_80623510_0000079C
lbl_fn_80623510_00000758:
    cmplw r28, r26
    bgt lbl_fn_80623510_0000089C
    subf r0, r25, r24
    cmplw r0, r26
    bgt lbl_fn_80623510_0000089C
    lhz r0, 0x0(r24)
    cmplw r28, r0
    bne lbl_fn_80623510_0000089C
    add r3, r25, r28
    addi r4, r1, 0x8
    bl fn_80623760
    cmpwi r3, 0x0
    beq lbl_fn_80623510_0000089C
    lwz r0, 0x24(r1)
    addi r24, r24, 0x2
    addi r23, r23, 0x1
    add r28, r28, r0
lbl_fn_80623510_0000079C:
    cmplw r23, r30
    blt lbl_fn_80623510_00000758
    cmplw r28, r26
    bgt lbl_fn_80623510_0000089C
    slwi r0, r23, 1
    lhzx r0, r29, r0
    cmplw r28, r0
    bne lbl_fn_80623510_0000089C
    subi r3, r31, 0x4c
    add r0, r25, r28
    cmplw r0, r3
    bgt lbl_fn_80623510_0000089C
    subf r28, r0, r3
    subf r5, r3, r31
    li r4, 0x0
    bl memset
    lwz r0, lbl_80880144
    subi r31, r31, 0x2
    slwi r0, r0, 3
    add r26, r27, r0
    b lbl_fn_80623510_00000870
lbl_fn_80623510_000007F0:
    mr r3, r22
    bl strlen
    mr r21, r3
    mr r24, r29
    li r23, 0x0
    b lbl_fn_80623510_00000864
lbl_fn_80623510_00000808:
    lhz r0, 0x0(r24)
    add r4, r25, r0
    lbzx r0, r25, r0
    clrlwi r3, r0, 27
    addi r0, r3, 0x1
    cmplw r21, r0
    bne lbl_fn_80623510_0000085C
    mr r3, r22
    mr r5, r21
    addi r4, r4, 0x1
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80623510_0000085C
    lwz r0, 0x4(r27)
    slwi r3, r23, 1
    add r3, r29, r3
    neg r0, r0
    slwi r0, r0, 1
    subf r3, r25, r3
    sthx r3, r31, r0
    b lbl_fn_80623510_0000086C
lbl_fn_80623510_0000085C:
    addi r24, r24, 0x2
    addi r23, r23, 0x1
lbl_fn_80623510_00000864:
    cmplw r23, r30
    blt lbl_fn_80623510_00000808
lbl_fn_80623510_0000086C:
    addi r27, r27, 0x8
lbl_fn_80623510_00000870:
    cmplw r27, r26
    bge lbl_fn_80623510_00000884
    lwz r22, 0x0(r27)
    cmpwi r22, 0x0
    bne lbl_fn_80623510_000007F0
lbl_fn_80623510_00000884:
    subf r0, r25, r31
    stw r0, ItemIDOffsetTblOffset_80880148
    li r3, 0x0
    stw r30, ItemNumTotal_80880140
    stw r28, ItemRestSize_8088013C
    b lbl_fn_80623510_000008A0
lbl_fn_80623510_0000089C:
    li r3, 0x2
lbl_fn_80623510_000008A0:
    addi r11, r1, 0x60
    bl _restgpr_21
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80623760(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x20
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl memset
    lbz r0, 0x0(r30)
    addi r4, r30, 0x1
    clrlwi r3, r0, 27
    rlwinm r6, r0, 0, 24, 26
    addi r0, r3, 0x1
    stw r4, 0x14(r31)
    add r3, r30, r0
    cmpwi r6, 0x60
    addi r3, r3, 0x1
    stw r0, 0xc(r31)
    stw r3, 0x18(r31)
    beq lbl_fn_80623760_00000950
    cmpwi r6, 0xe0
    beq lbl_fn_80623760_00000950
    cmpwi r6, 0x80
    beq lbl_fn_80623760_0000095C
    cmpwi r6, 0xa0
    beq lbl_fn_80623760_00000968
    cmpwi r6, 0xc0
    beq lbl_fn_80623760_00000974
    cmpwi r6, 0x40
    beq lbl_fn_80623760_00000980
    cmpwi r6, 0x20
    beq lbl_fn_80623760_000009A4
    b lbl_fn_80623760_00000A18
lbl_fn_80623760_00000950:
    li r0, 0x1
    stw r0, 0x10(r31)
    b lbl_fn_80623760_000009CC
lbl_fn_80623760_0000095C:
    li r0, 0x2
    stw r0, 0x10(r31)
    b lbl_fn_80623760_000009CC
lbl_fn_80623760_00000968:
    li r0, 0x4
    stw r0, 0x10(r31)
    b lbl_fn_80623760_000009CC
lbl_fn_80623760_00000974:
    li r0, 0x8
    stw r0, 0x10(r31)
    b lbl_fn_80623760_000009CC
lbl_fn_80623760_00000980:
    lbz r5, 0x0(r3)
    addi r4, r3, 0x1
    lwz r3, 0x1c(r31)
    addi r0, r5, 0x1
    stw r0, 0x10(r31)
    addi r0, r3, 0x1
    stw r4, 0x18(r31)
    stw r0, 0x1c(r31)
    b lbl_fn_80623760_000009CC
lbl_fn_80623760_000009A4:
    lbz r0, 0x0(r3)
    addi r4, r3, 0x2
    lbz r5, 0x1(r3)
    rlwimi r5, r0, 8, 16, 23
    lwz r3, 0x1c(r31)
    addi r0, r5, 0x1
    stw r0, 0x10(r31)
    addi r0, r3, 0x2
    stw r4, 0x18(r31)
    stw r0, 0x1c(r31)
lbl_fn_80623760_000009CC:
    cmplwi r6, 0x40
    beq lbl_fn_80623760_000009DC
    cmplwi r6, 0x20
    bne lbl_fn_80623760_000009E8
lbl_fn_80623760_000009DC:
    li r0, 0x40
    stb r0, 0x9(r31)
    b lbl_fn_80623760_000009FC
lbl_fn_80623760_000009E8:
    stb r6, 0x8(r31)
    mr r3, r31
    lwz r4, 0x18(r31)
    lwz r5, 0x10(r31)
    bl memcpy
lbl_fn_80623760_000009FC:
    lwz r3, 0xc(r31)
    lwz r0, 0x10(r31)
    lwz r4, 0x1c(r31)
    add r0, r3, r0
    add r3, r0, r4
    addi r0, r3, 0x1
    stw r0, 0x1c(r31)
lbl_fn_80623760_00000A18:
    lwz r3, 0x10(r31)
    lwz r31, 0xc(r1)
    neg r0, r3
    lwz r30, 0x8(r1)
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806238E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r0, lbl_80880144
    lis r31, ConfBuf_807EB760@ha
    addi r31, r31, ConfBuf_807EB760@l
    cmplw r3, r0
    bge lbl_fn_806238E0_00000BBC
    lwz r4, ItemIDOffsetTblOffset_80880148
    cmpwi r4, 0x0
    beq lbl_fn_806238E0_00000BBC
    neg r0, r3
    add r28, r31, r4
    slwi r0, r0, 1
    lhzx r30, r28, r0
    cmpwi r30, 0x0
    beq lbl_fn_806238E0_00000BBC
    lwz r0, ItemNumTotal_80880140
    cmpwi r0, 0x0
    beq lbl_fn_806238E0_00000BBC
    add r27, r31, r30
    addi r25, r31, 0x6
    slwi r0, r0, 1
    lhzx r5, r31, r30
    add r24, r25, r0
    lhz r3, 0x2(r27)
    mr r4, r27
    addi r0, r30, 0x2
    subf r6, r5, r3
    lhz r26, 0x0(r24)
    mr r3, r27
    subf r5, r0, r5
    addi r29, r6, 0x2
    addi r4, r4, 0x2
    bl memmove
    subi r4, r24, 0x2
    addi r0, r4, 0x2
    subf r0, r25, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r4, r25
    blt lbl_fn_806238E0_00000B1C
lbl_fn_806238E0_00000AF0:
    cmplw r4, r27
    bge lbl_fn_806238E0_00000B08
    lhz r3, 0x0(r4)
    subi r0, r3, 0x2
    sth r0, 0x0(r4)
    b lbl_fn_806238E0_00000B14
lbl_fn_806238E0_00000B08:
    lhz r0, 0x0(r4)
    subf r0, r29, r0
    sth r0, 0x0(r4)
lbl_fn_806238E0_00000B14:
    subi r4, r4, 0x2
    bdnz lbl_fn_806238E0_00000AF0
lbl_fn_806238E0_00000B1C:
    lhz r5, 0x0(r27)
    add r4, r31, r29
    add r0, r5, r29
    add r3, r31, r5
    add r4, r5, r4
    subf r5, r0, r26
    bl memmove
    subf r0, r29, r26
    mr r5, r29
    add r3, r31, r0
    li r4, 0x0
    bl memset
    lwz r0, lbl_80880144
    li r6, 0x0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_806238E0_00000B98
    nop
lbl_fn_806238E0_00000B68:
    neg r0, r6
    slwi r5, r0, 1
    lhzx r4, r28, r5
    cmplw r4, r30
    blt lbl_fn_806238E0_00000B90
    ble lbl_fn_806238E0_00000B8C
    subi r0, r4, 0x2
    sthx r0, r28, r5
    b lbl_fn_806238E0_00000B90
lbl_fn_806238E0_00000B8C:
    sthx r3, r28, r5
lbl_fn_806238E0_00000B90:
    addi r6, r6, 0x1
    bdnz lbl_fn_806238E0_00000B68
lbl_fn_806238E0_00000B98:
    lwz r4, ItemRestSize_8088013C
    li r0, 0x1
    lwz r3, ItemNumTotal_80880140
    add r4, r4, r29
    stw r4, ItemRestSize_8088013C
    subi r3, r3, 0x1
    stw r3, ItemNumTotal_80880140
    sth r3, 0x4(r31)
    stb r0, lbl_8088014D
lbl_fn_806238E0_00000BBC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80623A80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r0, lbl_80880144
    lis r31, ConfBuf_807EB760@ha
    lis r7, lbl_807B2F10@ha
    mr r23, r3
    cmplw r3, r0
    mr r24, r4
    mr r25, r5
    mr r26, r6
    addi r31, r31, ConfBuf_807EB760@l
    addi r7, r7, lbl_807B2F10@l
    li r29, 0x1
    bge lbl_fn_80623A80_00000E3C
    li r0, 0x0
    cmplw r5, r0
    beq lbl_fn_80623A80_00000E3C
    lwz r0, ItemNumTotal_80880140
    cmplwi r0, 0xffff
    bge lbl_fn_80623A80_00000E3C
    lwz r0, ItemIDOffsetTblOffset_80880148
    cmpwi r0, 0x0
    beq lbl_fn_80623A80_00000E3C
    cmpwi r4, 0xa0
    beq lbl_fn_80623A80_00000CA0
    bge lbl_fn_80623A80_00000C78
    cmpwi r4, 0x60
    beq lbl_fn_80623A80_00000C90
    bge lbl_fn_80623A80_00000C6C
    cmpwi r4, 0x40
    beq lbl_fn_80623A80_00000CB0
    b lbl_fn_80623A80_00000E3C
lbl_fn_80623A80_00000C6C:
    cmpwi r4, 0x80
    beq lbl_fn_80623A80_00000C98
    b lbl_fn_80623A80_00000E3C
lbl_fn_80623A80_00000C78:
    cmpwi r4, 0xe0
    beq lbl_fn_80623A80_00000C90
    bge lbl_fn_80623A80_00000E3C
    cmpwi r4, 0xc0
    beq lbl_fn_80623A80_00000CA8
    b lbl_fn_80623A80_00000E3C
lbl_fn_80623A80_00000C90:
    li r26, 0x1
    b lbl_fn_80623A80_00000CDC
lbl_fn_80623A80_00000C98:
    li r26, 0x2
    b lbl_fn_80623A80_00000CDC
lbl_fn_80623A80_00000CA0:
    li r26, 0x4
    b lbl_fn_80623A80_00000CDC
lbl_fn_80623A80_00000CA8:
    li r26, 0x8
    b lbl_fn_80623A80_00000CDC
lbl_fn_80623A80_00000CB0:
    cmpwi r6, 0x0
    beq lbl_fn_80623A80_00000E3C
    lis r0, 0x1
    cmplw r6, r0
    bgt lbl_fn_80623A80_00000E3C
    cmplwi r6, 0x100
    ble lbl_fn_80623A80_00000CD8
    li r24, 0x20
    li r29, 0x3
    b lbl_fn_80623A80_00000CDC
lbl_fn_80623A80_00000CD8:
    li r29, 0x2
lbl_fn_80623A80_00000CDC:
    add r29, r29, r26
    li r0, 0x0
    b lbl_fn_80623A80_00000CF8
lbl_fn_80623A80_00000CE8:
    lwz r4, 0x4(r7)
    cmpw r4, r3
    beq lbl_fn_80623A80_00000D04
    addi r7, r7, 0x8
lbl_fn_80623A80_00000CF8:
    lwz r28, 0x0(r7)
    cmplw r28, r0
    bne lbl_fn_80623A80_00000CE8
lbl_fn_80623A80_00000D04:
    li r0, 0x0
    cmplw r28, r0
    beq lbl_fn_80623A80_00000E3C
    mr r3, r28
    bl strlen
    cmplwi r3, 0x20
    mr r30, r3
    bgt lbl_fn_80623A80_00000E3C
    add r29, r29, r3
    lwz r3, ItemRestSize_8088013C
    addi r0, r29, 0x2
    cmplw r3, r0
    blt lbl_fn_80623A80_00000E3C
    lwz r3, ItemNumTotal_80880140
    addi r22, r31, 0x6
    lhz r0, 0x6(r31)
    slwi r3, r3, 1
    lhzx r5, r22, r3
    add r4, r0, r31
    add r27, r22, r3
    addi r3, r4, 0x2
    subf r5, r0, r5
    bl memmove
lbl_fn_80623A80_00000D60:
    lhz r3, 0x0(r22)
    addi r0, r3, 0x2
    sth r0, 0x0(r22)
    addi r22, r22, 0x2
    cmplw r22, r27
    ble lbl_fn_80623A80_00000D60
    lhz r5, 0x0(r27)
    subi r0, r30, 0x1
    mr r4, r28
    add r28, r31, r5
    or r0, r24, r0
    stb r0, 0x0(r28)
    mr r5, r30
    addi r3, r28, 0x1
    bl memcpy
    cmplwi r24, 0x40
    add r3, r30, r28
    addi r28, r3, 0x1
    bne lbl_fn_80623A80_00000DBC
    subi r0, r26, 0x1
    stb r0, 0x0(r28)
    addi r28, r28, 0x1
    b lbl_fn_80623A80_00000DD8
lbl_fn_80623A80_00000DBC:
    cmplwi r24, 0x20
    bne lbl_fn_80623A80_00000DD8
    subi r3, r26, 0x1
    extrwi r0, r3, 8, 16
    stb r0, 0x0(r28)
    stb r3, 0x1(r28)
    addi r28, r28, 0x2
lbl_fn_80623A80_00000DD8:
    mr r3, r28
    mr r4, r25
    mr r5, r26
    bl memcpy
    lwz r5, ItemIDOffsetTblOffset_80880148
    neg r4, r23
    li r0, 0x1
    lwz r3, ItemNumTotal_80880140
    add r6, r31, r5
    slwi r4, r4, 1
    subf r5, r31, r27
    sthx r5, r6, r4
    addi r4, r3, 0x1
    lwz r3, ItemRestSize_8088013C
    lhz r6, 0x0(r27)
    addi r5, r29, 0x2
    subf r3, r5, r3
    stw r3, ItemRestSize_8088013C
    add r5, r6, r29
    sth r5, 0x2(r27)
    li r3, 0x1
    stw r4, ItemNumTotal_80880140
    sth r4, 0x4(r31)
    stb r0, lbl_8088014D
    b lbl_fn_80623A80_00000E40
lbl_fn_80623A80_00000E3C:
    li r3, 0x0
lbl_fn_80623A80_00000E40:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80623D00(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    li r31, 0x0
    bl OSDisableInterrupts
    li r0, 0x0
    mr r30, r3
    cmplw r27, r0
    beq lbl_fn_80623D00_00000F1C
    lwz r0, lbl_80880144
    lis r5, ConfBuf_807EB760@ha
    addi r5, r5, ConfBuf_807EB760@l
    cmplw r29, r0
    bge lbl_fn_80623D00_00000EE4
    lwz r3, ItemIDOffsetTblOffset_80880148
    cmpwi r3, 0x0
    beq lbl_fn_80623D00_00000EE4
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_80623D00_00000EE4
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl fn_80623760
    b lbl_fn_80623D00_00000EE8
lbl_fn_80623D00_00000EE4:
    li r3, 0x0
lbl_fn_80623D00_00000EE8:
    cmpwi r3, 0x0
    beq lbl_fn_80623D00_00000F1C
    lbz r0, 0x11(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80623D00_00000F1C
    lwz r0, 0x18(r1)
    cmplw r0, r28
    bne lbl_fn_80623D00_00000F1C
    lwz r4, 0x20(r1)
    mr r3, r27
    mr r5, r28
    bl memcpy
    li r31, 0x1
lbl_fn_80623D00_00000F1C:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80623DE0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    li r31, 0x0
    bl OSDisableInterrupts
    li r0, 0x0
    mr r30, r3
    cmplw r27, r0
    beq lbl_fn_80623DE0_00001040
    lwz r0, lbl_80880144
    lis r5, ConfBuf_807EB760@ha
    addi r5, r5, ConfBuf_807EB760@l
    cmplw r29, r0
    bge lbl_fn_80623DE0_00000FC4
    lwz r3, ItemIDOffsetTblOffset_80880148
    cmpwi r3, 0x0
    beq lbl_fn_80623DE0_00000FC4
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_80623DE0_00000FC4
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl fn_80623760
    b lbl_fn_80623DE0_00000FC8
lbl_fn_80623DE0_00000FC4:
    li r3, 0x0
lbl_fn_80623DE0_00000FC8:
    cmpwi r3, 0x0
    beq lbl_fn_80623DE0_00001028
    lbz r0, 0x11(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80623DE0_00001020
    lwz r0, 0x18(r1)
    cmplw r0, r28
    bne lbl_fn_80623DE0_00001020
    lwz r3, 0x20(r1)
    mr r4, r27
    mr r5, r28
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80623DE0_00001018
    lwz r3, 0x20(r1)
    mr r4, r27
    mr r5, r28
    bl memcpy
    li r0, 0x1
    stb r0, lbl_8088014D
lbl_fn_80623DE0_00001018:
    li r31, 0x1
    b lbl_fn_80623DE0_00001040
lbl_fn_80623DE0_00001020:
    mr r3, r29
    bl fn_806238E0
lbl_fn_80623DE0_00001028:
    mr r3, r29
    mr r5, r27
    mr r6, r28
    li r4, 0x40
    bl fn_80623A80
    mr r31, r3
lbl_fn_80623DE0_00001040:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80623F10(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_80880144
    lis r5, ConfBuf_807EB760@ha
    mr r31, r3
    cmplw r29, r0
    addi r5, r5, ConfBuf_807EB760@l
    bge lbl_fn_80623F10_000010EC
    lwz r3, ItemIDOffsetTblOffset_80880148
    cmpwi r3, 0x0
    beq lbl_fn_80623F10_000010EC
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_80623F10_000010EC
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl fn_80623760
    b lbl_fn_80623F10_000010F0
lbl_fn_80623F10_000010EC:
    li r3, 0x0
lbl_fn_80623F10_000010F0:
    cmpwi r3, 0x0
    beq lbl_fn_80623F10_00001118
    lbz r0, 0x10(r1)
    cmplwi r0, 0x60
    bne lbl_fn_80623F10_00001118
    lwz r4, 0x20(r1)
    mr r3, r28
    lwz r5, 0x18(r1)
    bl memcpy
    li r30, 0x1
lbl_fn_80623F10_00001118:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80623FF0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_80880144
    lis r5, ConfBuf_807EB760@ha
    mr r31, r3
    cmplw r29, r0
    addi r5, r5, ConfBuf_807EB760@l
    bge lbl_fn_80623FF0_000011CC
    lwz r3, ItemIDOffsetTblOffset_80880148
    cmpwi r3, 0x0
    beq lbl_fn_80623FF0_000011CC
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_80623FF0_000011CC
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl fn_80623760
    b lbl_fn_80623FF0_000011D0
lbl_fn_80623FF0_000011CC:
    li r3, 0x0
lbl_fn_80623FF0_000011D0:
    cmpwi r3, 0x0
    beq lbl_fn_80623FF0_000011F8
    lbz r0, 0x10(r1)
    cmplwi r0, 0x60
    bne lbl_fn_80623FF0_000011F8
    lwz r4, 0x20(r1)
    mr r3, r28
    lwz r5, 0x18(r1)
    bl memcpy
    li r30, 0x1
lbl_fn_80623FF0_000011F8:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806240D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_80880144
    lis r5, ConfBuf_807EB760@ha
    mr r31, r3
    cmplw r29, r0
    addi r5, r5, ConfBuf_807EB760@l
    bge lbl_fn_806240D0_000012AC
    lwz r3, ItemIDOffsetTblOffset_80880148
    cmpwi r3, 0x0
    beq lbl_fn_806240D0_000012AC
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_806240D0_000012AC
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl fn_80623760
    b lbl_fn_806240D0_000012B0
lbl_fn_806240D0_000012AC:
    li r3, 0x0
lbl_fn_806240D0_000012B0:
    cmpwi r3, 0x0
    beq lbl_fn_806240D0_000012D8
    lbz r0, 0x10(r1)
    cmplwi r0, 0xa0
    bne lbl_fn_806240D0_000012D8
    lwz r4, 0x20(r1)
    mr r3, r28
    lwz r5, 0x18(r1)
    bl memcpy
    li r30, 0x1
lbl_fn_806240D0_000012D8:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806241B0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stb r3, 0x8(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_80880144
    lis r5, ConfBuf_807EB760@ha
    mr r31, r3
    cmplw r30, r0
    addi r5, r5, ConfBuf_807EB760@l
    bge lbl_fn_806241B0_00001380
    lwz r3, ItemIDOffsetTblOffset_80880148
    cmpwi r3, 0x0
    beq lbl_fn_806241B0_00001380
    neg r0, r30
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_806241B0_00001380
    lhzx r0, r5, r0
    addi r4, r1, 0x10
    add r3, r5, r0
    bl fn_80623760
    b lbl_fn_806241B0_00001384
lbl_fn_806241B0_00001380:
    li r3, 0x0
lbl_fn_806241B0_00001384:
    cmpwi r3, 0x0
    beq lbl_fn_806241B0_000013D8
    lbz r0, 0x18(r1)
    cmplwi r0, 0x60
    bne lbl_fn_806241B0_000013D0
    lwz r3, 0x28(r1)
    addi r4, r1, 0x8
    lwz r5, 0x20(r1)
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806241B0_000013C8
    lwz r3, 0x28(r1)
    addi r4, r1, 0x8
    lwz r5, 0x20(r1)
    bl memcpy
    li r0, 0x1
    stb r0, lbl_8088014D
lbl_fn_806241B0_000013C8:
    li r30, 0x1
    b lbl_fn_806241B0_000013F0
lbl_fn_806241B0_000013D0:
    mr r3, r30
    bl fn_806238E0
lbl_fn_806241B0_000013D8:
    mr r3, r30
    addi r5, r1, 0x8
    li r4, 0x60
    li r6, 0x0
    bl fn_80623A80
    mr r30, r3
lbl_fn_806241B0_000013F0:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806242C0(void)
{
    nofralloc
    lis r3, Control_807EB5C0@ha
    addi r3, r3, Control_807EB5C0@l
    b OSWakeupThread
}

asm void fn_806242D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lis r29, Control_807EB5C0@ha
    addi r29, r29, Control_807EB5C0@l
    stw r28, 0x10(r1)
    addi r28, r29, 0x0
    bl OSDisableInterrupts
    lbz r0, BgJobStatus_80880138
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_806242D0_000015FC
    li r0, 0x0
    li r3, 0x1
    cmplw r30, r0
    stb r3, BgJobStatus_80880138
    bne lbl_fn_806242D0_0000148C
    lis r30, fn_806242C0@ha
    addi r30, r30, fn_806242C0@l
lbl_fn_806242D0_0000148C:
    lbz r0, lbl_8088014D
    li r4, 0x0
    li r3, 0x4000
    stw r30, 0x184(r28)
    cmpwi r0, 0x0
    stw r4, 0x188(r28)
    stb r4, 0x159(r28)
    stw r3, 0x18c(r28)
    beq lbl_fn_806242D0_000014B8
    li r0, 0x1
    b lbl_fn_806242D0_000014BC
lbl_fn_806242D0_000014B8:
    li r0, 0x0
lbl_fn_806242D0_000014BC:
    cmpwi r0, 0x0
    bne lbl_fn_806242D0_00001524
    mr r3, r31
    bl OSRestoreInterrupts
    addi r29, r29, 0x0
    lwz r0, 0x188(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806242D0_000014E4
    li r0, 0x1
    stb r0, lbl_8088014D
lbl_fn_806242D0_000014E4:
    lwz r12, 0x184(r29)
    cmpwi r12, 0x0
    beq lbl_fn_806242D0_00001518
    li r30, 0x0
    stw r30, 0x184(r29)
    lwz r3, 0x188(r29)
    mtctr r12
    bctrl
    lwz r0, 0x0(r29)
    cmplw r0, r30
    beq lbl_fn_806242D0_00001518
    mr r3, r29
    bl OSWakeupThread
lbl_fn_806242D0_00001518:
    lwz r0, 0x188(r29)
    stb r0, BgJobStatus_80880138
    b lbl_fn_806242D0_0000162C
lbl_fn_806242D0_00001524:
    li r30, 0x0
    stb r30, lbl_8088014D
    addi r3, r29, 0x41a0
    addi r4, r29, 0x1a0
    li r5, 0x4000
    bl memcpy
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, ConfFileName_80764BB8@ha
    lis r31, fn_806244F0@ha
    stb r30, 0x158(r28)
    addi r3, r3, ConfFileName_80764BB8@l
    addi r4, r28, 0x150
    addi r5, r31, fn_806244F0@l
    addi r6, r28, 0x94
    bl fn_806220A0
    cmpwi r3, 0x0
    beq lbl_fn_806242D0_0000162C
    addi r5, r29, 0x0
    li r3, 0x2
    lbz r0, 0x159(r5)
    stw r3, 0x188(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806242D0_000015A4
    li r0, 0x9
    stb r0, 0x158(r5)
    addi r3, r5, 0x8
    addi r4, r31, fn_806244F0@l
    addi r5, r5, 0x94
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_fn_806242D0_0000162C
lbl_fn_806242D0_000015A4:
    addi r29, r29, 0x0
    lwz r0, 0x188(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806242D0_000015BC
    li r0, 0x1
    stb r0, lbl_8088014D
lbl_fn_806242D0_000015BC:
    lwz r12, 0x184(r29)
    cmpwi r12, 0x0
    beq lbl_fn_806242D0_000015F0
    li r31, 0x0
    stw r31, 0x184(r29)
    lwz r3, 0x188(r29)
    mtctr r12
    bctrl
    lwz r0, 0x0(r29)
    cmplw r0, r31
    beq lbl_fn_806242D0_000015F0
    mr r3, r29
    bl OSWakeupThread
lbl_fn_806242D0_000015F0:
    lwz r0, 0x188(r29)
    stb r0, BgJobStatus_80880138
    b lbl_fn_806242D0_0000162C
lbl_fn_806242D0_000015FC:
    cmpwi r30, 0x0
    beq lbl_fn_806242D0_00001624
    cmplwi r0, 0x1
    bne lbl_fn_806242D0_00001610
    b lbl_fn_806242D0_00001614
lbl_fn_806242D0_00001610:
    li r0, 0x2
lbl_fn_806242D0_00001614:
    mr r12, r30
    mr r3, r0
    mtctr r12
    bctrl
lbl_fn_806242D0_00001624:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_806242D0_0000162C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806244F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, Control_807EB5C0@ha
    stw r0, 0x14(r1)
    addi r7, r7, Control_807EB5C0@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lbz r0, 0x158(r7)
    cmplwi r0, 0x9
    bgt lbl_fn_806244F0_00001970
    lis r4, jumptable_807B3040@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807B3040@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000016E8
    lbz r0, 0x150(r7)
    cmplwi r0, 0x1
    bne lbl_fn_806244F0_000016E8
    li r0, 0x1
    lis r3, ConfFileName_80764BB8@ha
    lis r5, fn_806244F0@ha
    stb r0, 0x158(r7)
    addi r3, r3, ConfFileName_80764BB8@l
    addi r4, r7, 0x150
    addi r5, r5, fn_806244F0@l
    addi r6, r7, 0x94
    bl fn_8061F3D0
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    b lbl_fn_806244F0_00001970
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000016E8
    lbz r0, 0x157(r7)
    cmplwi r0, 0x3f
    beq lbl_fn_806244F0_000017C0
lbl_fn_806244F0_000016E8:
    li r0, 0x2
    lis r3, ConfFileName_80764BB8@ha
    lis r4, fn_806244F0@ha
    stb r0, 0x158(r7)
    addi r3, r3, ConfFileName_80764BB8@l
    addi r5, r7, 0x94
    addi r4, r4, fn_806244F0@l
    bl fn_8061E6A0
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    b lbl_fn_806244F0_00001970
    li r0, 0x3
    lis r3, lbl_80764BA8@ha
    lis r5, fn_806244F0@ha
    stb r0, 0x158(r7)
    addi r3, r3, lbl_80764BA8@l
    addi r4, r7, 0x150
    addi r5, r5, fn_806244F0@l
    addi r6, r7, 0x94
    bl fn_806220A0
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    b lbl_fn_806244F0_00001970
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_00001758
    lbz r0, 0x150(r7)
    cmplwi r0, 0x2
    beq lbl_fn_806244F0_0000178C
lbl_fn_806244F0_00001758:
    li r0, 0x4
    lis r3, lbl_80764BA8@ha
    lis r6, fn_806244F0@ha
    stb r0, 0x158(r7)
    addi r3, r3, lbl_80764BA8@l
    addi r7, r7, 0x94
    addi r6, r6, fn_806244F0@l
    li r4, 0x3f
    li r5, 0x0
    bl fn_8061ECE0
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    b lbl_fn_806244F0_00001970
lbl_fn_806244F0_0000178C:
    li r0, 0x5
    lis r3, ConfFileName_80764BB8@ha
    lis r6, fn_806244F0@ha
    stb r0, 0x158(r7)
    addi r3, r3, ConfFileName_80764BB8@l
    addi r7, r7, 0x94
    addi r6, r6, fn_806244F0@l
    li r4, 0x3f
    li r5, 0x0
    bl fn_8061E3F0
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    b lbl_fn_806244F0_00001970
lbl_fn_806244F0_000017C0:
    li r0, 0x6
    lis r3, ConfFileName_80764BB8@ha
    lis r6, fn_806244F0@ha
    stb r0, 0x158(r7)
    addi r4, r7, 0x8
    addi r3, r3, ConfFileName_80764BB8@l
    addi r6, r6, fn_806244F0@l
    addi r7, r7, 0x94
    li r5, 0x2
    bl NANDPrivateOpenAsync
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    b lbl_fn_806244F0_00001970
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    li r3, 0x1
    li r0, 0x7
    lis r4, lbl_807EF760@ha
    lis r6, fn_806244F0@ha
    stb r3, 0x159(r7)
    addi r3, r7, 0x8
    lwz r5, 0x18c(r7)
    addi r4, r4, lbl_807EF760@l
    stb r0, 0x158(r7)
    addi r6, r6, fn_806244F0@l
    addi r7, r7, 0x94
    bl fn_8061E8C0
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    b lbl_fn_806244F0_00001970
    lwz r0, 0x18c(r7)
    cmplw r3, r0
    bne lbl_fn_806244F0_000018D8
    li r3, 0x0
    li r0, 0x8
    lis r4, fn_806244F0@ha
    stb r3, 0x159(r7)
    addi r3, r7, 0x8
    addi r5, r7, 0x94
    stb r0, 0x158(r7)
    addi r4, r4, fn_806244F0@l
    bl fn_8061FBE0
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    b lbl_fn_806244F0_00001970
    cmpwi r3, 0x0
    bne lbl_fn_806244F0_000018D8
    lis r30, Control_807EB5C0@ha
    addi r30, r30, Control_807EB5C0@l
    lwz r0, 0x188(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806244F0_00001898
    li r0, 0x1
    stb r0, lbl_8088014D
lbl_fn_806244F0_00001898:
    lwz r12, 0x184(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806244F0_000018CC
    li r31, 0x0
    stw r31, 0x184(r30)
    lwz r3, 0x188(r30)
    mtctr r12
    bctrl
    lwz r0, 0x0(r30)
    cmplw r0, r31
    beq lbl_fn_806244F0_000018CC
    mr r3, r30
    bl OSWakeupThread
lbl_fn_806244F0_000018CC:
    lwz r0, 0x188(r30)
    stb r0, BgJobStatus_80880138
    b lbl_fn_806244F0_00001970
lbl_fn_806244F0_000018D8:
    lis r5, Control_807EB5C0@ha
    li r3, 0x2
    addi r5, r5, Control_807EB5C0@l
    lbz r0, 0x159(r5)
    stw r3, 0x188(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806244F0_00001918
    li r0, 0x9
    lis r4, fn_806244F0@ha
    stb r0, 0x158(r5)
    addi r3, r5, 0x8
    addi r4, r4, fn_806244F0@l
    addi r5, r5, 0x94
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_fn_806244F0_00001970
lbl_fn_806244F0_00001918:
    lis r30, Control_807EB5C0@ha
    addi r30, r30, Control_807EB5C0@l
    lwz r0, 0x188(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806244F0_00001934
    li r0, 0x1
    stb r0, lbl_8088014D
lbl_fn_806244F0_00001934:
    lwz r12, 0x184(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806244F0_00001968
    li r31, 0x0
    stw r31, 0x184(r30)
    lwz r3, 0x188(r30)
    mtctr r12
    bctrl
    lwz r0, 0x0(r30)
    cmplw r0, r31
    beq lbl_fn_806244F0_00001968
    mr r3, r30
    bl OSWakeupThread
lbl_fn_806244F0_00001968:
    lwz r0, 0x188(r30)
    stb r0, BgJobStatus_80880138
lbl_fn_806244F0_00001970:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624830(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623F10
    cmpwi r3, 0x0
    bne lbl_fn_80624830_000019BC
    li r0, 0x0
    stb r0, 0x8(r1)
    b lbl_fn_80624830_000019D0
lbl_fn_80624830_000019BC:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x1
    beq lbl_fn_80624830_000019D0
    li r0, 0x0
    stb r0, 0x8(r1)
lbl_fn_80624830_000019D0:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624890(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x5
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623FF0
    cmpwi r3, 0x0
    bne lbl_fn_80624890_00001A1C
    li r0, 0x0
    stb r0, 0x8(r1)
    b lbl_fn_80624890_00001A48
lbl_fn_80624890_00001A1C:
    lbz r0, 0x8(r1)
    extsb r0, r0
    cmpwi r0, -0x20
    bge lbl_fn_80624890_00001A38
    li r0, -0x20
    stb r0, 0x8(r1)
    b lbl_fn_80624890_00001A48
lbl_fn_80624890_00001A38:
    cmpwi r0, 0x20
    ble lbl_fn_80624890_00001A48
    li r0, 0x20
    stb r0, 0x8(r1)
lbl_fn_80624890_00001A48:
    lbz r0, 0x8(r1)
    clrrwi r0, r0, 1
    extsb r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623F10
    cmpwi r3, 0x0
    bne lbl_fn_80624910_00001A9C
    li r0, 0x0
    stb r0, 0x8(r1)
    b lbl_fn_80624910_00001AB0
lbl_fn_80624910_00001A9C:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x1
    beq lbl_fn_80624910_00001AB0
    li r0, 0x0
    stb r0, 0x8(r1)
lbl_fn_80624910_00001AB0:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624970(void)
{
    nofralloc
    li r4, 0x2
    li r5, 0x9
    b fn_80623D00
}
