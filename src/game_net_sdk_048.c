#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void OSDisableInterrupts(void);
extern void OSGetTick(void);
extern void OSRestoreInterrupts(void);
extern void __register_global_object(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_806089C0(void);
extern void fn_80608A30(void);
extern void fn_80608AA0(void);
extern void fn_80608B10(void);
extern void fn_80608B30(void);
extern void fn_80608B50(void);
extern void fn_806095C0(void);
extern void fn_80609620(void);
extern void fn_80609640(void);
extern void fn_80609650(void);
extern void fn_80609660(void);
extern void fn_80609D00(void);
extern void fn_80682544(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_806A426C(void);
extern void fn_806A4270(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D6560(void);
extern void fn_806D6610(void);
extern void fn_806D7AC0(void);
extern void fn_806D7B30(void);
extern void fn_806D7CB0(void);
extern void fn_806D7CF0(void);
extern void fn_806D7D60(void);
extern void fn_806D8650(void);
extern void fn_806D8F30(void);
extern void fn_806FDBC0(void);
extern void fn_806FE840(void);
extern void fn_806FE900(void);
extern void fn_806FEC90(void);
extern void fn_806FECB0(void);
extern void fn_806FED30(void);
extern void fn_806FF490(void);
extern void fn_806FF560(void);
extern void fn_806FF5B0(void);
extern void fn_80700BA0(void);
extern void fn_80700F50(void);
extern void fn_80702150(void);
extern void fn_807031B0(void);
extern void fn_807204D0(void);
extern void fn_80720BF0(void);
extern void fn_80725170(void);
extern void fn_80725250(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807C5DF4[];
extern u8 lbl_807C5E88[];
extern u8 lbl_807C5E98[];
extern u8 lbl_807C5EA8[];
extern u8 lbl_807C5EB8[];
extern u8 lbl_807C5EC8[];
extern u8 lbl_80862AF8[];
extern u8 lbl_80862B20[];
extern u8 lbl_80862C20[];
extern u8 lbl_80862E20[];
extern u8 lbl_80862E30[];

/* Small data declarations */
extern u32 lbl_80880488;
extern u32 lbl_8088048C;
extern u32 lbl_80880490;
extern u32 lbl_80880494;
extern u32 lbl_80880498;
extern u32 lbl_8088049C;
extern u32 lbl_80889008;
extern u32 lbl_8088900C;
extern u32 lbl_80889010;
extern u32 lbl_80889018;
extern u32 lbl_8088901C;

/* Function declarations */
void pad_03_8070360C_text(void);
void fn_80703610(void);
void fn_80703900(void);
void fn_80703A10(void);
void fn_80703AC0(void);
void fn_80703C50(void);
void fn_80703D00(void);
void fn_80703F10(void);
void fn_80703F30(void);
void fn_80703F90(void);
void fn_80704000(void);
void fn_80704080(void);
void fn_807041B0(void);
void fn_80704260(void);
void fn_807042D0(void);
void fn_807046A0(void);
void fn_807046B0(void);
void fn_80704720(void);
void fn_80704780(void);
void fn_80704890(void);
void fn_807048A0(void);
void fn_80704970(void);
void fn_80704AD0(void);
void fn_80704CC0(void);
void fn_80704E20(void);
void fn_80704F20(void);
void fn_80705300(void);
void fn_80705340(void);
void fn_80705390(void);
void fn_807053D0(void);
void fn_80705450(void);
void fn_80705590(void);

asm void pad_03_8070360C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_80703610(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r3, 0x6b4(r3)
    bl fn_806D8650
    cmpwi r3, 0x0
    bne lbl_fn_80703610_0000003C
    li r3, 0x0
    b lbl_fn_80703610_000002C8
lbl_fn_80703610_0000003C:
    lwz r29, 0x80(r31)
    li r6, 0x0
    lwz r0, 0x7c(r31)
    lwz r3, 0x6b4(r31)
    subfic r5, r29, 0x1000
    add r4, r0, r29
    bl fn_806D7CB0
    addi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80703610_00000238
    lwz r29, 0x80(r31)
    cmpwi r29, 0x0
    ble lbl_fn_80703610_000000E0
    lis r30, lbl_807C5DF4@ha
    lwz r28, lbl_807C5DF4@l(r30)
    mr r3, r28
    bl strlen
    cmplw r29, r3
    ble lbl_fn_80703610_000000E0
    lwz r30, lbl_807C5DF4@l(r30)
    lwz r29, 0x7c(r31)
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r3, r29
    mr r4, r30
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80703610_000000E0
    mr r3, r28
    bl strlen
    add r0, r29, r3
    stw r0, 0x6b0(r31)
    lis r4, lbl_80862AF8@ha
    lwz r12, 0x488(r31)
    lwz r5, lbl_80862AF8@l(r4)
    mr r3, r31
    lwz r6, 0x494(r31)
    li r4, 0x5
    mtctr r12
    bctrl
lbl_fn_80703610_000000E0:
    lwz r12, 0x488(r31)
    lis r4, lbl_80862AF8@ha
    lwz r5, lbl_80862AF8@l(r4)
    mr r3, r31
    lwz r6, 0x494(r31)
    li r4, 0x4
    mtctr r12
    bctrl
    lwz r3, 0x7c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80703610_00000110
    bl fn_806D7AC0
lbl_fn_80703610_00000110:
    lwz r3, 0x6b4(r31)
    li r0, 0x0
    stw r0, 0x7c(r31)
    cmpwi r3, -0x1
    stw r0, 0x80(r31)
    beq lbl_fn_80703610_0000012C
    bl fn_806D7B30
lbl_fn_80703610_0000012C:
    lwz r0, 0x8(r31)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r31)
    cmpwi r0, 0x0
    stw r3, 0x0(r31)
    beq lbl_fn_80703610_000001C0
    li r30, 0x0
    b lbl_fn_80703610_000001A0
lbl_fn_80703610_00000150:
    lwz r3, 0x8(r31)
    mr r4, r30
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r3, r31
    stw r0, 0x10(r1)
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80703610_0000019C
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80703610_0000019C
    mr r3, r31
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6560
lbl_fn_80703610_0000019C:
    addi r30, r30, 0x1
lbl_fn_80703610_000001A0:
    lwz r3, 0x8(r31)
    bl fn_806D58F0
    cmpw r30, r3
    blt lbl_fn_80703610_00000150
    lwz r3, 0x8(r31)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_fn_80703610_000001C0:
    li r0, -0x1
    stw r0, 0x484(r31)
    mr r29, r31
    li r30, 0x0
    b lbl_fn_80703610_0000021C
lbl_fn_80703610_000001D4:
    lwz r0, 0x84(r29)
    mr r3, r31
    stw r0, 0x8(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80703610_00000214
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80703610_00000214
    mr r3, r31
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6560
lbl_fn_80703610_00000214:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_80703610_0000021C:
    lwz r0, 0x480(r31)
    cmpw r30, r0
    blt lbl_fn_80703610_000001D4
    li r0, 0x0
    stw r0, 0x480(r31)
    li r3, 0x3
    b lbl_fn_80703610_000002C8
lbl_fn_80703610_00000238:
    lwz r0, 0x0(r31)
    li r28, 0x0
    lwz r4, 0x80(r31)
    cmpwi r0, 0x2
    add r0, r4, r3
    stw r0, 0x80(r31)
    beq lbl_fn_80703610_00000260
    lwz r0, 0x7cc(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80703610_00000278
lbl_fn_80703610_00000260:
    lwz r4, 0x7c(r31)
    addi r3, r31, 0x6c0
    lwz r0, 0x80(r31)
    add r4, r4, r29
    subf r5, r29, r0
    bl fn_806FDBC0
lbl_fn_80703610_00000278:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80703610_00000290
    mr r3, r31
    bl fn_80702150
    mr r28, r3
lbl_fn_80703610_00000290:
    cmpwi r28, 0x0
    beq lbl_fn_80703610_000002A0
    mr r3, r28
    b lbl_fn_80703610_000002C8
lbl_fn_80703610_000002A0:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80703610_000002C4
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80703610_000002C4
    mr r3, r31
    bl fn_807031B0
    b lbl_fn_80703610_000002C8
lbl_fn_80703610_000002C4:
    li r3, 0x0
lbl_fn_80703610_000002C8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80703900(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r7
    stw r30, 0x28(r1)
    mr r30, r6
    stw r29, 0x24(r1)
    mr r29, r3
    stw r4, 0x8(r1)
    sth r5, 0xc(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80703900_00000340
    li r4, 0x0
    li r5, 0x0
    li r6, 0x2
    li r7, 0x0
    bl fn_80700F50
lbl_fn_80703900_00000340:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80703900_00000354
    li r3, 0x3
    b lbl_fn_80703900_000003DC
lbl_fn_80703900_00000354:
    addi r0, r31, 0x9
    clrlwi r3, r0, 16
    bl fn_806A4270
    sth r3, 0xe(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe
    li r5, 0x2
    bl memcpy
    li r0, 0x2
    stb r0, 0x12(r1)
    addi r3, r1, 0x13
    addi r4, r1, 0x8
    li r5, 0x4
    bl memcpy
    addi r3, r1, 0x17
    addi r4, r1, 0xc
    li r5, 0x2
    bl memcpy
    mr r3, r29
    addi r4, r1, 0x10
    li r5, 0x9
    bl fn_80700BA0
    cmpwi r3, 0x0
    beq lbl_fn_80703900_000003B8
    b lbl_fn_80703900_000003DC
lbl_fn_80703900_000003B8:
    lwz r3, 0x6b4(r29)
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    bl fn_806D7D60
    cmpwi r3, 0x0
    li r3, 0x0
    bge lbl_fn_80703900_000003DC
    li r3, 0x3
lbl_fn_80703900_000003DC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80703A10(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r11, 0xfd
    li r10, 0xfc
    stw r0, 0x34(r1)
    li r9, 0x1e
    li r8, 0x66
    li r7, 0x6a
    stw r31, 0x2c(r1)
    li r0, 0xb2
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    mr r3, r6
    stw r6, 0x8(r1)
    stb r11, 0xc(r1)
    stb r10, 0xd(r1)
    stb r9, 0xe(r1)
    stb r8, 0xf(r1)
    stb r7, 0x10(r1)
    stb r0, 0x11(r1)
    bl fn_806A426C
    stw r3, 0x8(r1)
    addi r3, r1, 0x12
    addi r4, r1, 0x8
    li r5, 0x4
    bl memcpy
    mr r3, r29
    mr r4, r30
    mr r5, r31
    addi r6, r1, 0xc
    li r7, 0xa
    bl fn_80703900
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80703AC0(void)
{
    nofralloc
    stwu r1, -0x610(r1)
    mflr r0
    stw r0, 0x614(r1)
    addi r11, r1, 0x610
    bl _savegpr_26
    li r0, 0x8
    stw r0, 0xc(r1)
    mr r26, r3
    b lbl_fn_80703AC0_000005C8
lbl_fn_80703AC0_000004D8:
    lwz r3, 0x6b4(r26)
    addi r4, r1, 0x18
    addi r7, r1, 0x10
    addi r8, r1, 0xc
    li r5, 0x5db
    li r6, 0x0
    bl fn_806D7CF0
    cmpwi r3, -0x1
    beq lbl_fn_80703AC0_000005C8
    lhz r29, 0x12(r1)
    lwz r30, 0x14(r1)
    lwz r3, 0x4(r26)
    bl fn_806D58F0
    mr r31, r3
    li r28, 0x0
    b lbl_fn_80703AC0_00000554
lbl_fn_80703AC0_00000518:
    lwz r3, 0x4(r26)
    mr r4, r28
    bl fn_806D5900
    lwz r27, 0x0(r3)
    mr r3, r27
    bl fn_806FEC90
    cmplw r30, r3
    bne lbl_fn_80703AC0_00000550
    mr r3, r27
    bl fn_806FECB0
    clrlwi r0, r3, 16
    cmplw r29, r0
    bne lbl_fn_80703AC0_00000550
    b lbl_fn_80703AC0_00000560
lbl_fn_80703AC0_00000550:
    addi r28, r28, 0x1
lbl_fn_80703AC0_00000554:
    cmpw r28, r31
    blt lbl_fn_80703AC0_00000518
    li r28, -0x1
lbl_fn_80703AC0_00000560:
    cmpwi r28, -0x1
    bne lbl_fn_80703AC0_000005C8
    lwz r4, 0x14(r1)
    mr r3, r26
    lhz r5, 0x12(r1)
    bl fn_806FF490
    mr r27, r3
    bl fn_806FF5B0
    cmpwi r3, 0x0
    beq lbl_fn_80703AC0_00000590
    li r3, 0x5
    b lbl_fn_80703AC0_00000628
lbl_fn_80703AC0_00000590:
    mr r3, r27
    li r4, 0x11
    bl fn_806FF560
    stw r27, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x4(r26)
    bl fn_806D5930
    lwz r12, 0x488(r26)
    mr r3, r26
    lwz r5, 0x8(r1)
    li r4, 0x0
    lwz r6, 0x494(r26)
    mtctr r12
    bctrl
lbl_fn_80703AC0_000005C8:
    lwz r3, 0x6b4(r26)
    bl fn_806D8650
    cmpwi r3, 0x0
    bne lbl_fn_80703AC0_000004D8
    bl fn_806D8F30
    lwz r0, 0x6b8(r26)
    subf r0, r0, r3
    cmplwi r0, 0x7d0
    ble lbl_fn_80703AC0_00000624
    lwz r3, 0x6b4(r26)
    bl fn_806D7B30
    li r3, -0x1
    li r0, 0x1
    stw r3, 0x6b4(r26)
    lis r5, lbl_80862AF8@ha
    lwz r12, 0x488(r26)
    mr r3, r26
    stw r0, 0x0(r26)
    li r4, 0x3
    lwz r6, 0x494(r26)
    lwz r5, lbl_80862AF8@l(r5)
    mtctr r12
    bctrl
lbl_fn_80703AC0_00000624:
    li r3, 0x0
lbl_fn_80703AC0_00000628:
    addi r11, r1, 0x610
    bl _restgpr_26
    lwz r0, 0x614(r1)
    mtlr r0
    addi r1, r1, 0x610
    blr
}

asm void fn_80703C50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, 0x7d8(r3)
    cmpwi r31, 0x0
    beq lbl_fn_80703C50_00000698
    stw r31, 0x8(r1)
    b lbl_fn_80703C50_00000684
lbl_fn_80703C50_00000670:
    bl fn_806FED30
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_806FE900
    stw r31, 0x8(r1)
lbl_fn_80703C50_00000684:
    cmpwi r31, 0x0
    mr r3, r31
    bne lbl_fn_80703C50_00000670
    li r0, 0x0
    stw r0, 0x7d8(r30)
lbl_fn_80703C50_00000698:
    lwz r3, 0x0(r30)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_80703C50_000006B4
    cmpwi r3, 0x0
    beq lbl_fn_80703C50_000006C0
    b lbl_fn_80703C50_000006CC
lbl_fn_80703C50_000006B4:
    mr r3, r30
    bl fn_80703610
    b lbl_fn_80703C50_000006D0
lbl_fn_80703C50_000006C0:
    mr r3, r30
    bl fn_80703AC0
    b lbl_fn_80703C50_000006D0
lbl_fn_80703C50_000006CC:
    li r3, 0x0
lbl_fn_80703C50_000006D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80703D00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r7, r3, 0x64
    addi r4, r3, 0x84
    stw r0, 0x14(r1)
    cmplw r7, r4
    lfs f0, lbl_80889008
    li r6, 0x0
    stw r31, 0xc(r1)
    addi r8, r3, 0xc
    li r5, 0x1
    li r0, -0x1
    stw r6, 0x0(r3)
    mr r31, r3
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    stw r8, 0xc(r3)
    stw r8, 0x10(r3)
    stb r6, 0x18(r3)
    stb r5, 0x19(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stw r6, 0x24(r3)
    stw r6, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stw r6, 0x34(r3)
    stw r6, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stw r6, 0x44(r3)
    stw r6, 0x48(r3)
    stw r6, 0x4c(r3)
    stw r0, 0x50(r3)
    stfs f0, 0x54(r3)
    stfs f0, 0x58(r3)
    stw r6, 0x5c(r3)
    stw r6, 0x60(r3)
    bge lbl_fn_80703D00_000007BC
    addi r0, r4, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80703D00_000007BC
lbl_fn_80703D00_000007A4:
    stfs f0, 0x0(r7)
    stfs f0, 0x4(r7)
    stw r6, 0x8(r7)
    stw r6, 0xc(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_80703D00_000007A4
lbl_fn_80703D00_000007BC:
    addi r6, r3, 0x94
    addi r4, r3, 0xb4
    lfs f0, lbl_80889008
    cmplw r6, r4
    li r5, 0x0
    stfs f0, 0x84(r3)
    stfs f0, 0x88(r3)
    stw r5, 0x8c(r3)
    stw r5, 0x90(r3)
    bge lbl_fn_80703D00_00000810
    addi r0, r4, 0xf
    subf r0, r6, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80703D00_00000810
lbl_fn_80703D00_000007F8:
    stfs f0, 0x0(r6)
    stfs f0, 0x4(r6)
    stw r5, 0x8(r6)
    stw r5, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_80703D00_000007F8
lbl_fn_80703D00_00000810:
    lis r4, fn_80703F10@ha
    lis r5, fn_80703F30@ha
    addi r4, r4, fn_80703F10@l
    li r6, 0xc
    addi r5, r5, fn_80703F30@l
    li r7, 0x3
    addi r3, r3, 0xb4
    bl fn_806958E0
    lfs f0, lbl_8088900C
    li r0, 0x0
    stw r0, 0x34(r31)
    mr r3, r31
    stw r0, 0x38(r31)
    stw r0, 0x24(r31)
    stw r0, 0x28(r31)
    stw r0, 0x44(r31)
    stw r0, 0x48(r31)
    stfs f0, 0x2c(r31)
    stfs f0, 0x30(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x20(r31)
    stfs f0, 0x3c(r31)
    stfs f0, 0x40(r31)
    stfs f0, 0x54(r31)
    stfs f0, 0x58(r31)
    stw r0, 0x5c(r31)
    stw r0, 0x60(r31)
    stfs f0, 0x84(r31)
    stfs f0, 0x88(r31)
    stw r0, 0x8c(r31)
    stw r0, 0x90(r31)
    stw r0, 0xd8(r31)
    stw r0, 0xe4(r31)
    stw r0, 0xf4(r31)
    stfs f0, 0x64(r31)
    stfs f0, 0x68(r31)
    stw r0, 0x6c(r31)
    stw r0, 0x70(r31)
    stfs f0, 0x94(r31)
    stfs f0, 0x98(r31)
    stw r0, 0x9c(r31)
    stw r0, 0xa0(r31)
    stw r0, 0xdc(r31)
    stw r0, 0xe8(r31)
    stw r0, 0xf8(r31)
    stfs f0, 0x74(r31)
    stfs f0, 0x78(r31)
    stw r0, 0x7c(r31)
    stw r0, 0x80(r31)
    stfs f0, 0xa4(r31)
    stfs f0, 0xa8(r31)
    stw r0, 0xac(r31)
    stw r0, 0xb0(r31)
    stw r0, 0xe0(r31)
    stw r0, 0xec(r31)
    stw r0, 0xfc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80703F10(void)
{
    nofralloc
    addi r4, r3, 0x4
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

asm void fn_80703F30(void)
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
    beq lbl_fn_80703F30_00000960
    li r4, 0x0
    bl fn_80725170
    cmpwi r31, 0x0
    ble lbl_fn_80703F30_00000960
    mr r3, r30
    bl dtor_80084684
lbl_fn_80703F30_00000960:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80703F90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80703F90_000009CC
    lis r31, lbl_80862E30@ha
    addi r3, r31, lbl_80862E30@l
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    addi r3, r31, lbl_80862E30@l
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80703F90_000009CC:
    lwz r31, 0xc(r1)
    lis r3, lbl_80862E30@ha
    lwz r0, 0x14(r1)
    addi r3, r3, lbl_80862E30@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80704000(void)
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
    beq lbl_fn_80704000_00000A50
    lis r4, fn_80703F30@ha
    li r5, 0xc
    addi r4, r4, fn_80703F30@l
    li r6, 0x3
    addi r3, r3, 0xb4
    bl fn_806959D8
    addic. r3, r30, 0x8
    beq lbl_fn_80704000_00000A40
    li r4, 0x0
    bl fn_80725170
lbl_fn_80704000_00000A40:
    cmpwi r31, 0x0
    ble lbl_fn_80704000_00000A50
    mr r3, r30
    bl dtor_80084684
lbl_fn_80704000_00000A50:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80704080(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80704080_00000B80
    lis r31, lbl_80862B20@ha
    li r4, 0x0
    addi r3, r31, lbl_80862B20@l
    li r5, 0x100
    bl memset
    addi r3, r31, lbl_80862B20@l
    li r4, 0x100
    bl DCFlushRange
    addi r0, r31, lbl_80862B20@l
    stw r0, 0x4(r29)
    addi r30, r1, 0x8
    bl OSDisableInterrupts
    stw r3, 0x8(r1)
    addi r3, r29, 0xd8
    addi r4, r29, 0xe4
    bl fn_80608B10
    addi r3, r29, 0xdc
    addi r4, r29, 0xe8
    bl fn_80608B30
    addi r3, r29, 0xe0
    addi r4, r29, 0xec
    bl fn_80608B50
    li r3, 0x0
    li r4, 0x0
    bl fn_806089C0
    li r3, 0x0
    li r4, 0x0
    bl fn_80608A30
    li r3, 0x0
    li r4, 0x0
    bl fn_80608AA0
    lis r3, fn_80704970@ha
    addi r3, r3, fn_80704970@l
    bl fn_80609D00
    stw r3, 0x14(r29)
    lis r31, lbl_80862C20@ha
    addi r3, r31, lbl_80862C20@l
    li r4, 0x0
    li r5, 0x200
    bl memset
    addi r7, r31, lbl_80862C20@l
    la r6, lbl_8088048C
    la r5, lbl_80880490
    la r4, lbl_80880494
    la r3, lbl_80880498
    la r0, lbl_80880488
    stw r0, 0x4(r7)
    cmpwi r30, 0x0
    li r0, 0x1
    stw r6, 0x8(r7)
    stw r5, 0xc(r7)
    stw r4, 0x10(r7)
    stw r3, 0x14(r7)
    stb r0, 0x18(r29)
    beq lbl_fn_80704080_00000B80
    lwz r3, 0x8(r1)
    bl OSRestoreInterrupts
lbl_fn_80704080_00000B80:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807041B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_807041B0_00000C38
    lwz r3, 0x14(r3)
    bl fn_80609D00
    mr r3, r31
    li r4, 0x0
    bl fn_80704E20
    mr r3, r31
    li r4, 0x1
    bl fn_80704E20
    mr r3, r31
    li r4, 0x2
    bl fn_80704E20
    lwz r3, 0xd8(r31)
    lwz r4, 0xe4(r31)
    bl fn_806089C0
    lwz r3, 0xdc(r31)
    lwz r4, 0xe8(r31)
    bl fn_80608A30
    lwz r3, 0xe0(r31)
    lwz r4, 0xec(r31)
    bl fn_80608AA0
    li r0, 0x0
    stw r0, 0xd8(r31)
    stw r0, 0xe4(r31)
    stw r0, 0xdc(r31)
    stw r0, 0xe8(r31)
    stw r0, 0xe0(r31)
    stw r0, 0xec(r31)
    stw r0, 0x4(r31)
    stb r0, 0x18(r31)
lbl_fn_807041B0_00000C38:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80704260(void)
{
    nofralloc
    lwz r5, 0x24(r3)
    lwz r0, 0x28(r3)
    stwu r1, -0x20(r1)
    cmpw r0, r5
    blt lbl_fn_80704260_00000C70
    lfs f1, 0x20(r3)
    b lbl_fn_80704260_00000CB8
lbl_fn_80704260_00000C70:
    lis r4, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r5, 0x8000
    lfd f4, lbl_80889010
    stw r4, 0x8(r1)
    lfs f0, 0x20(r3)
    lfd f1, 0x8(r1)
    lfs f2, 0x1c(r3)
    fsubs f3, f1, f4
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_80704260_00000CB8:
    addi r1, r1, 0x20
    blr
}

asm void fn_807042D0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    lis r0, 0x4330
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    lfd f31, lbl_80889010
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    lfs f30, lbl_80889018
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    lfs f29, lbl_80889008
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    lfs f28, lbl_8088900C
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    li r30, 0x0
    stw r29, 0x24(r1)
    mr r29, r3
    mr r31, r29
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
lbl_fn_807042D0_00000D24:
    lwz r3, 0x90(r31)
    li r4, 0x0
    lwz r0, 0x8c(r31)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000D54
    lwz r3, 0x90(r31)
    lwz r0, 0x8c(r31)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000D50
    addi r0, r3, 0x1
    stw r0, 0x90(r31)
lbl_fn_807042D0_00000D50:
    li r4, 0x1
lbl_fn_807042D0_00000D54:
    lwz r3, 0x60(r31)
    lwz r0, 0x5c(r31)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000D9C
    lwz r3, 0x60(r31)
    lwz r0, 0x5c(r31)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000D7C
    addi r0, r3, 0x1
    stw r0, 0x60(r31)
lbl_fn_807042D0_00000D7C:
    lwz r3, 0x60(r31)
    lwz r0, 0x5c(r31)
    cmpw r3, r0
    blt lbl_fn_807042D0_00000D98
    mr r3, r29
    mr r4, r30
    bl fn_80704E20
lbl_fn_807042D0_00000D98:
    li r4, 0x1
lbl_fn_807042D0_00000D9C:
    cmpwi r4, 0x0
    beq lbl_fn_807042D0_00000ED4
    lwz r3, 0x8c(r31)
    lwz r0, 0x90(r31)
    lfs f4, lbl_8088900C
    cmpw r0, r3
    blt lbl_fn_807042D0_00000DC0
    lfs f0, 0x88(r31)
    b lbl_fn_807042D0_00000DF8
lbl_fn_807042D0_00000DC0:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r3, 0x8000
    lfs f0, 0x88(r31)
    lfd f1, 0x8(r1)
    lfs f2, 0x84(r31)
    fsubs f3, f1, f31
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_fn_807042D0_00000DF8:
    fcmpo cr0, f0, f28
    ble lbl_fn_807042D0_00000E08
    fmr f0, f28
    b lbl_fn_807042D0_00000E14
lbl_fn_807042D0_00000E08:
    fcmpo cr0, f0, f29
    bge lbl_fn_807042D0_00000E14
    fmr f0, f29
lbl_fn_807042D0_00000E14:
    lwz r3, 0x5c(r31)
    fmuls f4, f4, f0
    lwz r0, 0x60(r31)
    cmpw r0, r3
    blt lbl_fn_807042D0_00000E30
    lfs f0, 0x58(r31)
    b lbl_fn_807042D0_00000E68
lbl_fn_807042D0_00000E30:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r3, 0x8000
    lfs f0, 0x58(r31)
    lfd f1, 0x8(r1)
    lfs f2, 0x54(r31)
    fsubs f3, f1, f31
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_fn_807042D0_00000E68:
    fcmpo cr0, f0, f28
    ble lbl_fn_807042D0_00000E78
    fmr f0, f28
    b lbl_fn_807042D0_00000E84
lbl_fn_807042D0_00000E78:
    fcmpo cr0, f0, f29
    bge lbl_fn_807042D0_00000E84
    fmr f0, f29
lbl_fn_807042D0_00000E84:
    fmuls f4, f4, f0
    cmpwi r30, 0x0
    fmuls f0, f30, f4
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    beq lbl_fn_807042D0_00000EB4
    cmpwi r30, 0x1
    beq lbl_fn_807042D0_00000EC0
    cmpwi r30, 0x2
    beq lbl_fn_807042D0_00000ECC
    b lbl_fn_807042D0_00000ED4
lbl_fn_807042D0_00000EB4:
    clrlwi r3, r0, 16
    bl fn_80609640
    b lbl_fn_807042D0_00000ED4
lbl_fn_807042D0_00000EC0:
    clrlwi r3, r0, 16
    bl fn_80609650
    b lbl_fn_807042D0_00000ED4
lbl_fn_807042D0_00000ECC:
    clrlwi r3, r0, 16
    bl fn_80609660
lbl_fn_807042D0_00000ED4:
    addi r30, r30, 0x1
    addi r31, r31, 0x10
    cmpwi r30, 0x3
    blt lbl_fn_807042D0_00000D24
    lwz r3, 0x28(r29)
    lwz r0, 0x24(r29)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000F18
    lwz r3, 0x28(r29)
    lwz r0, 0x24(r29)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000F0C
    addi r0, r3, 0x1
    stw r0, 0x28(r29)
lbl_fn_807042D0_00000F0C:
    bl fn_807204D0
    li r4, 0x8
    bl fn_80720BF0
lbl_fn_807042D0_00000F18:
    lwz r3, 0x48(r29)
    lwz r0, 0x44(r29)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000F40
    lwz r3, 0x48(r29)
    lwz r0, 0x44(r29)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000F40
    addi r0, r3, 0x1
    stw r0, 0x48(r29)
lbl_fn_807042D0_00000F40:
    lwz r3, 0x38(r29)
    lwz r0, 0x34(r29)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000F68
    lwz r3, 0x38(r29)
    lwz r0, 0x34(r29)
    cmpw r3, r0
    bge lbl_fn_807042D0_00000F68
    addi r0, r3, 0x1
    stw r0, 0x38(r29)
lbl_fn_807042D0_00000F68:
    lwz r3, 0x34(r29)
    lwz r0, 0x38(r29)
    cmpw r0, r3
    blt lbl_fn_807042D0_00000F80
    lfs f5, 0x30(r29)
    b lbl_fn_807042D0_00000FBC
lbl_fn_807042D0_00000F80:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r3, 0x8000
    lfd f4, lbl_80889010
    lfd f0, 0x8(r1)
    lfs f1, 0x30(r29)
    lfs f2, 0x2c(r29)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f5, f2, f0
lbl_fn_807042D0_00000FBC:
    lwz r3, 0x44(r29)
    lwz r0, 0x48(r29)
    cmpw r0, r3
    blt lbl_fn_807042D0_00000FD4
    lfs f0, 0x40(r29)
    b lbl_fn_807042D0_00001010
lbl_fn_807042D0_00000FD4:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r3, 0x8000
    lfd f4, lbl_80889010
    lfd f0, 0x8(r1)
    lfs f1, 0x40(r29)
    lfs f2, 0x3c(r29)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_fn_807042D0_00001010:
    fmuls f0, f5, f0
    lfs f1, lbl_8088900C
    fcmpo cr0, f0, f1
    ble lbl_fn_807042D0_00001024
    b lbl_fn_807042D0_00001038
lbl_fn_807042D0_00001024:
    lfs f1, lbl_80889008
    fcmpo cr0, f0, f1
    bge lbl_fn_807042D0_00001034
    b lbl_fn_807042D0_00001038
lbl_fn_807042D0_00001034:
    fmr f1, f0
lbl_fn_807042D0_00001038:
    lfs f0, lbl_80889018
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
    clrlwi r3, r3, 16
    bl fn_80609620
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_807046A0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_807046B0(void)
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
    bl OSDisableInterrupts
    stw r31, 0x8(r30)
    addi r0, r29, 0xc
    mr r31, r3
    mr r5, r30
    stw r0, 0x8(r1)
    addi r3, r29, 0x8
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80704720(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    mr r31, r3
    mr r4, r30
    addi r3, r29, 0x8
    bl fn_807252D0
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80704780(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x0(r3)
    mr r25, r3
    mr r26, r4
    cmpw r0, r4
    beq lbl_fn_80704780_00001260
    bl OSDisableInterrupts
    cmpwi r26, 0x0
    stw r26, 0x0(r25)
    mr r31, r3
    beq lbl_fn_80704780_000011CC
    cmpwi r26, 0x1
    beq lbl_fn_80704780_000011D8
    cmpwi r26, 0x2
    beq lbl_fn_80704780_000011E4
    cmpwi r26, 0x3
    beq lbl_fn_80704780_000011F0
    b lbl_fn_80704780_000011F8
lbl_fn_80704780_000011CC:
    li r3, 0x0
    bl fn_806095C0
    b lbl_fn_80704780_000011F8
lbl_fn_80704780_000011D8:
    li r3, 0x1
    bl fn_806095C0
    b lbl_fn_80704780_000011F8
lbl_fn_80704780_000011E4:
    li r3, 0x2
    bl fn_806095C0
    b lbl_fn_80704780_000011F8
lbl_fn_80704780_000011F0:
    li r3, 0x0
    bl fn_806095C0
lbl_fn_80704780_000011F8:
    bl fn_807204D0
    li r4, 0x10
    bl fn_80720BF0
    addi r28, r25, 0xb4
    li r27, 0x0
lbl_fn_80704780_0000120C:
    lwz r30, 0x4(r28)
    addi r29, r28, 0x4
    b lbl_fn_80704780_00001230
lbl_fn_80704780_00001218:
    lwz r12, -0x4(r30)
    subi r3, r30, 0x4
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r30, 0x0(r30)
lbl_fn_80704780_00001230:
    cmplw r30, r29
    bne lbl_fn_80704780_00001218
    addi r27, r27, 0x1
    addi r28, r28, 0xc
    cmpwi r27, 0x3
    blt lbl_fn_80704780_0000120C
    cmpwi r26, 0x2
    bne lbl_fn_80704780_00001258
    li r0, 0x0
    stw r0, 0xfc(r25)
lbl_fn_80704780_00001258:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_80704780_00001260:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80704890(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_807048A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_80889008
    stw r0, 0x24(r1)
    fcmpo cr0, f1, f0
    bge lbl_fn_807048A0_000012B0
    fmr f1, f0
lbl_fn_807048A0_000012B0:
    lwz r6, 0x24(r3)
    lwz r0, 0x28(r3)
    cmpw r0, r6
    blt lbl_fn_807048A0_000012C8
    lfs f0, 0x20(r3)
    b lbl_fn_807048A0_00001310
lbl_fn_807048A0_000012C8:
    lis r5, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r6, 0x8000
    lfd f5, lbl_80889010
    stw r5, 0x8(r1)
    lfs f0, 0x20(r3)
    lfd f2, 0x8(r1)
    lfs f3, 0x1c(r3)
    fsubs f4, f2, f5
    stw r0, 0x14(r1)
    fsubs f2, f0, f3
    stw r5, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f2, f4, f2
    fsubs f0, f0, f5
    fdivs f0, f2, f0
    fadds f0, f3, f0
lbl_fn_807048A0_00001310:
    lis r5, 0x5555
    li r0, 0x0
    addi r6, r4, 0x2
    cmpwi r4, 0x0
    addi r4, r5, 0x5556
    stw r0, 0x28(r3)
    mulhw r4, r4, r6
    stfs f0, 0x1c(r3)
    stfs f1, 0x20(r3)
    srwi r0, r4, 31
    add r0, r4, r0
    stw r0, 0x24(r3)
    bne lbl_fn_807048A0_00001350
    bl fn_807204D0
    li r4, 0x8
    bl fn_80720BF0
lbl_fn_807048A0_00001350:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80704970(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704970_000013B0
    lis r25, lbl_80862E30@ha
    addi r3, r25, lbl_80862E30@l
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    addi r3, r25, lbl_80862E30@l
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704970_000013B0:
    lis r25, lbl_80862E30@ha
    lis r27, fn_80704000@ha
    addi r26, r25, lbl_80862E30@l
    lis r28, lbl_80862E20@ha
    lwz r31, 0xc(r26)
    addi r30, r26, 0xc
    li r29, 0x1
    b lbl_fn_80704970_000013E4
lbl_fn_80704970_000013D0:
    mr r3, r31
    lwz r31, 0x0(r31)
    lwz r12, 0x8(r3)
    mtctr r12
    bctrl
lbl_fn_80704970_000013E4:
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704970_0000140C
    addi r3, r25, lbl_80862E30@l
    bl fn_80703D00
    addi r3, r25, lbl_80862E30@l
    addi r4, r27, fn_80704000@l
    addi r5, r28, lbl_80862E20@l
    bl __register_global_object
    stb r29, lbl_8088049C
lbl_fn_80704970_0000140C:
    cmplw r31, r30
    bne lbl_fn_80704970_000013D0
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704970_00001448
    mr r3, r26
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    mr r3, r26
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704970_00001448:
    lis r31, lbl_80862E30@ha
    addi r31, r31, lbl_80862E30@l
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80704970_000014A4
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704970_00001490
    mr r3, r31
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    mr r3, r31
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704970_00001490:
    lis r3, lbl_80862E30@ha
    addi r3, r3, lbl_80862E30@l
    lwz r12, 0x14(r3)
    mtctr r12
    bctrl
lbl_fn_80704970_000014A4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80704AD0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    slwi r27, r4, 4
    mr r29, r3
    add r28, r3, r27
    mr r30, r4
    lwz r6, 0x60(r28)
    mr r31, r5
    lwz r0, 0x5c(r28)
    cmpw r6, r0
    bge lbl_fn_80704AD0_00001500
    bl fn_80704E20
lbl_fn_80704AD0_00001500:
    lwz r5, 0x5c(r28)
    lwz r0, 0x60(r28)
    cmpw r0, r5
    blt lbl_fn_80704AD0_0000151C
    add r3, r29, r27
    lfs f1, 0x58(r3)
    b lbl_fn_80704AD0_00001568
lbl_fn_80704AD0_0000151C:
    lis r3, 0x4330
    xoris r0, r0, 0x8000
    add r4, r29, r27
    stw r0, 0x14(r1)
    lfd f4, lbl_80889010
    xoris r0, r5, 0x8000
    stw r3, 0x10(r1)
    lfs f0, 0x58(r4)
    lfd f1, 0x10(r1)
    lfs f2, 0x54(r4)
    fsubs f3, f1, f4
    stw r0, 0x1c(r1)
    fsubs f1, f0, f2
    stw r3, 0x18(r1)
    lfd f0, 0x18(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_80704AD0_00001568:
    add r3, r29, r27
    lfs f0, lbl_8088900C
    stfs f1, 0x54(r3)
    cmpwi r30, 0x0
    li r0, 0x0
    stfs f0, 0x58(r3)
    stw r0, 0x5c(r3)
    stw r0, 0x60(r3)
    beq lbl_fn_80704AD0_000015A0
    cmpwi r30, 0x1
    beq lbl_fn_80704AD0_000015B4
    cmpwi r30, 0x2
    beq lbl_fn_80704AD0_000015C8
    b lbl_fn_80704AD0_000015D8
lbl_fn_80704AD0_000015A0:
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl fn_80609640
    b lbl_fn_80704AD0_000015D8
lbl_fn_80704AD0_000015B4:
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl fn_80609650
    b lbl_fn_80704AD0_000015D8
lbl_fn_80704AD0_000015C8:
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl fn_80609660
lbl_fn_80704AD0_000015D8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80704AD0_000015FC
    li r3, 0x0
    b lbl_fn_80704AD0_0000169C
lbl_fn_80704AD0_000015FC:
    bl OSDisableInterrupts
    mulli r0, r30, 0xc
    mr r28, r3
    add r27, r29, r0
    lwzu r0, 0xb4(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80704AD0_00001678
    cmpwi r30, 0x0
    beq lbl_fn_80704AD0_00001634
    cmpwi r30, 0x1
    beq lbl_fn_80704AD0_00001648
    cmpwi r30, 0x2
    beq lbl_fn_80704AD0_0000165C
    b lbl_fn_80704AD0_0000166C
lbl_fn_80704AD0_00001634:
    lis r3, fn_80704F20@ha
    mr r4, r30
    addi r3, r3, fn_80704F20@l
    bl fn_806089C0
    b lbl_fn_80704AD0_0000166C
lbl_fn_80704AD0_00001648:
    lis r3, fn_80704F20@ha
    mr r4, r30
    addi r3, r3, fn_80704F20@l
    bl fn_80608A30
    b lbl_fn_80704AD0_0000166C
lbl_fn_80704AD0_0000165C:
    lis r3, fn_80704F20@ha
    mr r4, r30
    addi r3, r3, fn_80704F20@l
    bl fn_80608AA0
lbl_fn_80704AD0_0000166C:
    add r3, r29, r30
    li r0, 0x2
    stb r0, 0xf0(r3)
lbl_fn_80704AD0_00001678:
    addi r0, r27, 0x4
    stw r0, 0x8(r1)
    mr r3, r27
    addi r4, r1, 0x8
    addi r5, r31, 0x4
    bl fn_807252A0
    mr r3, r28
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_80704AD0_0000169C:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80704CC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bne lbl_fn_80704CC0_00001768
    bl fn_80704E20
    slwi r5, r31, 4
    add r3, r30, r5
    lwz r4, 0x5c(r3)
    lwz r0, 0x60(r3)
    cmpw r0, r4
    bge lbl_fn_80704CC0_000017F8
    blt lbl_fn_80704CC0_0000170C
    lfs f1, 0x58(r3)
    b lbl_fn_80704CC0_00001748
lbl_fn_80704CC0_0000170C:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r4, 0x8000
    lfd f4, lbl_80889010
    lfd f0, 0x8(r1)
    lfs f1, 0x58(r3)
    lfs f2, 0x54(r3)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_80704CC0_00001748:
    add r3, r30, r5
    lfs f0, lbl_80889008
    stfs f1, 0x54(r3)
    li r0, 0x0
    stfs f0, 0x58(r3)
    stw r0, 0x5c(r3)
    stw r0, 0x60(r3)
    b lbl_fn_80704CC0_000017F8
lbl_fn_80704CC0_00001768:
    slwi r7, r4, 4
    add r4, r3, r7
    lwz r6, 0x5c(r4)
    lwz r0, 0x60(r4)
    cmpw r0, r6
    blt lbl_fn_80704CC0_00001788
    lfs f0, 0x58(r4)
    b lbl_fn_80704CC0_000017C4
lbl_fn_80704CC0_00001788:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r6, 0x8000
    lfd f4, lbl_80889010
    lfd f0, 0x8(r1)
    lfs f1, 0x58(r4)
    lfs f2, 0x54(r4)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_fn_80704CC0_000017C4:
    lis r4, 0x5555
    add r6, r3, r7
    addi r0, r5, 0x2
    stfs f0, 0x54(r6)
    addi r3, r4, 0x5556
    lfs f0, lbl_80889008
    mulhw r4, r3, r0
    stfs f0, 0x58(r6)
    li r0, 0x0
    srwi r3, r4, 31
    add r3, r4, r3
    stw r3, 0x5c(r6)
    stw r0, 0x60(r6)
lbl_fn_80704CC0_000017F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80704E20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    bl OSDisableInterrupts
    mulli r0, r27, 0xc
    mr r31, r3
    add r28, r26, r0
    lwzu r0, 0xb4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80704E20_00001854
    bl OSRestoreInterrupts
    b lbl_fn_80704E20_000018F0
lbl_fn_80704E20_00001854:
    lwz r30, 0x4(r28)
    addi r29, r28, 0x4
    b lbl_fn_80704E20_00001878
lbl_fn_80704E20_00001860:
    lwz r12, -0x4(r30)
    subi r3, r30, 0x4
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r30, 0x0(r30)
lbl_fn_80704E20_00001878:
    cmplw r30, r29
    bne lbl_fn_80704E20_00001860
    mr r3, r28
    bl fn_80725250
    cmpwi r27, 0x0
    beq lbl_fn_80704E20_000018A4
    cmpwi r27, 0x1
    beq lbl_fn_80704E20_000018BC
    cmpwi r27, 0x2
    beq lbl_fn_80704E20_000018D4
    b lbl_fn_80704E20_000018E8
lbl_fn_80704E20_000018A4:
    li r3, 0x0
    li r4, 0x0
    bl fn_806089C0
    li r0, 0x0
    stw r0, 0xf4(r26)
    b lbl_fn_80704E20_000018E8
lbl_fn_80704E20_000018BC:
    li r3, 0x0
    li r4, 0x0
    bl fn_80608A30
    li r0, 0x0
    stw r0, 0xf8(r26)
    b lbl_fn_80704E20_000018E8
lbl_fn_80704E20_000018D4:
    li r3, 0x0
    li r4, 0x0
    bl fn_80608AA0
    li r0, 0x0
    stw r0, 0xfc(r26)
lbl_fn_80704E20_000018E8:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_80704E20_000018F0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80704F20(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r24, r3
    mr r29, r4
    bl OSGetTick
    lbz r0, lbl_8088049C
    mr r31, r3
    extsb. r0, r0
    bne lbl_fn_80704F20_00001970
    lis r23, lbl_80862E30@ha
    addi r3, r23, lbl_80862E30@l
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    addi r3, r23, lbl_80862E30@l
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704F20_00001970:
    lis r3, lbl_80862E30@ha
    lwz r0, lbl_80862E30@l(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80704F20_000019A8
    lwz r0, 0x0(r24)
    li r30, 0x4
    stw r0, 0x8(r1)
    lwz r0, 0x4(r24)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r24)
    stw r0, 0x10(r1)
    lwz r0, 0xc(r24)
    stw r0, 0x14(r1)
    b lbl_fn_80704F20_000019C4
lbl_fn_80704F20_000019A8:
    lwz r0, 0x0(r24)
    li r30, 0x3
    stw r0, 0x8(r1)
    lwz r0, 0x4(r24)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r24)
    stw r0, 0x10(r1)
lbl_fn_80704F20_000019C4:
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704F20_000019FC
    lis r23, lbl_80862E30@ha
    addi r3, r23, lbl_80862E30@l
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    addi r3, r23, lbl_80862E30@l
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704F20_000019FC:
    lis r24, lbl_80862E30@ha
    addi r24, r24, lbl_80862E30@l
    add r23, r24, r29
    lbz r0, 0xf0(r23)
    cmpwi r0, 0x0
    beq lbl_fn_80704F20_00001AD8
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704F20_00001A48
    mr r3, r24
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    mr r3, r24
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704F20_00001A48:
    lbz r3, 0xf0(r23)
    addi r24, r1, 0x8
    li r25, 0x0
    subi r0, r3, 0x1
    stb r0, 0xf0(r23)
    b lbl_fn_80704F20_00001A78
lbl_fn_80704F20_00001A60:
    lwz r3, 0x0(r24)
    li r4, 0x0
    li r5, 0x180
    bl memset
    addi r24, r24, 0x4
    addi r25, r25, 0x1
lbl_fn_80704F20_00001A78:
    cmpw r25, r30
    blt lbl_fn_80704F20_00001A60
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704F20_00001AB8
    lis r23, lbl_80862E30@ha
    addi r3, r23, lbl_80862E30@l
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    addi r3, r23, lbl_80862E30@l
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704F20_00001AB8:
    bl OSGetTick
    lis r4, lbl_80862E30@ha
    slwi r0, r29, 2
    addi r4, r4, lbl_80862E30@l
    subf r5, r31, r3
    add r3, r4, r0
    stw r5, 0xf4(r3)
    b lbl_fn_80704F20_00001CD8
lbl_fn_80704F20_00001AD8:
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704F20_00001B0C
    mr r3, r24
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    mr r3, r24
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704F20_00001B0C:
    mulli r0, r29, 0xc
    lis r24, lbl_80862E30@ha
    addi r24, r24, lbl_80862E30@l
    add r23, r24, r0
    lwz r0, 0xb4(r23)
    cmpwi r0, 0x0
    bne lbl_fn_80704F20_00001BAC
    addi r23, r1, 0x8
    li r24, 0x0
    b lbl_fn_80704F20_00001B4C
lbl_fn_80704F20_00001B34:
    lwz r3, 0x0(r23)
    li r4, 0x0
    li r5, 0x180
    bl memset
    addi r23, r23, 0x4
    addi r24, r24, 0x1
lbl_fn_80704F20_00001B4C:
    cmpw r24, r30
    blt lbl_fn_80704F20_00001B34
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704F20_00001B8C
    lis r23, lbl_80862E30@ha
    addi r3, r23, lbl_80862E30@l
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    addi r3, r23, lbl_80862E30@l
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704F20_00001B8C:
    bl OSGetTick
    lis r4, lbl_80862E30@ha
    slwi r0, r29, 2
    addi r4, r4, lbl_80862E30@l
    subf r5, r31, r3
    add r3, r4, r0
    stw r5, 0xf4(r3)
    b lbl_fn_80704F20_00001CD8
lbl_fn_80704F20_00001BAC:
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704F20_00001BE0
    mr r3, r24
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    mr r3, r24
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704F20_00001BE0:
    lwz r28, 0xb8(r23)
    addi r27, r23, 0xb8
    lis r23, lbl_80862E30@ha
    lis r24, fn_80704000@ha
    lis r25, lbl_80862E20@ha
    li r26, 0x1
    b lbl_fn_80704F20_00001C54
lbl_fn_80704F20_00001BFC:
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704F20_00001C24
    addi r3, r23, lbl_80862E30@l
    bl fn_80703D00
    addi r3, r23, lbl_80862E30@l
    addi r4, r24, fn_80704000@l
    addi r5, r25, lbl_80862E20@l
    bl __register_global_object
    stb r26, lbl_8088049C
lbl_fn_80704F20_00001C24:
    lwz r12, -0x4(r28)
    subi r3, r28, 0x4
    mr r4, r30
    addi r5, r1, 0x8
    lwz r12, 0x14(r12)
    li r6, 0x180
    lfs f1, lbl_8088901C
    li r7, 0x0
    lwz r8, lbl_80862E30@l(r23)
    mtctr r12
    bctrl
    lwz r28, 0x0(r28)
lbl_fn_80704F20_00001C54:
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704F20_00001C7C
    addi r3, r23, lbl_80862E30@l
    bl fn_80703D00
    addi r3, r23, lbl_80862E30@l
    addi r4, r24, fn_80704000@l
    addi r5, r25, lbl_80862E20@l
    bl __register_global_object
    stb r26, lbl_8088049C
lbl_fn_80704F20_00001C7C:
    cmplw r28, r27
    bne lbl_fn_80704F20_00001BFC
    lbz r0, lbl_8088049C
    extsb. r0, r0
    bne lbl_fn_80704F20_00001CBC
    lis r28, lbl_80862E30@ha
    addi r3, r28, lbl_80862E30@l
    bl fn_80703D00
    lis r4, fn_80704000@ha
    lis r5, lbl_80862E20@ha
    addi r3, r28, lbl_80862E30@l
    addi r4, r4, fn_80704000@l
    addi r5, r5, lbl_80862E20@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088049C
lbl_fn_80704F20_00001CBC:
    bl OSGetTick
    lis r4, lbl_80862E30@ha
    slwi r0, r29, 2
    addi r4, r4, lbl_80862E30@l
    subf r5, r31, r3
    add r3, r4, r0
    stw r5, 0xf4(r3)
lbl_fn_80704F20_00001CD8:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80705300(void)
{
    nofralloc
    lis r7, lbl_807C5EC8@ha
    lis r6, lbl_807C5EB8@ha
    lis r5, lbl_807C5EA8@ha
    lis r4, lbl_807C5E98@ha
    lis r3, lbl_807C5E88@ha
    addi r7, r7, lbl_807C5EC8@l
    addi r6, r6, lbl_807C5EB8@l
    addi r5, r5, lbl_807C5EA8@l
    addi r4, r4, lbl_807C5E98@l
    addi r3, r3, lbl_807C5E88@l
    stw r7, lbl_80880488
    stw r6, lbl_8088048C
    stw r5, lbl_80880490
    stw r4, lbl_80880494
    stw r3, lbl_80880498
    blr
}

asm void fn_80705340(void)
{
    nofralloc
    lis r4, 0x1
    li r5, 0x0
    addi r0, r4, -0x8000
    sth r0, 0x8(r3)
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stb r5, 0xc(r3)
    sth r0, 0xe(r3)
    sth r5, 0xa(r3)
    stw r5, 0x10(r3)
    stb r5, 0x1c(r3)
    stb r5, 0x1d(r3)
    stw r5, 0x38(r3)
    stw r5, 0x3c(r3)
    stw r5, 0x40(r3)
    stw r5, 0x44(r3)
    blr
}

asm void fn_80705390(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80705390_00001DAC
    cmpwi r4, 0x0
    ble lbl_fn_80705390_00001DAC
    bl dtor_80084684
lbl_fn_80705390_00001DAC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807053D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    stw r31, 0x10(r28)
    mr r31, r3
    addi r3, r28, 0x1e
    li r4, 0x0
    stw r29, 0x14(r28)
    li r5, 0x18
    stw r30, 0x18(r28)
    bl memset
    li r0, 0x1
    stb r0, 0x1c(r28)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80705450(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x10(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_80705450_00001E80
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80705450_00001F68
lbl_fn_80705450_00001E80:
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80705450_00001EA0
    lhz r3, 0xa2(r4)
    lhz r0, 0xa4(r4)
    slwi r3, r3, 16
    add r30, r3, r0
    b lbl_fn_80705450_00001EA4
lbl_fn_80705450_00001EA0:
    li r30, 0x0
lbl_fn_80705450_00001EA4:
    bl fn_80703F90
    bl fn_807046A0
    cmpwi r3, 0x0
    lwz r0, 0x14(r29)
    beq lbl_fn_80705450_00001EBC
    addis r3, r3, 0x8000
lbl_fn_80705450_00001EBC:
    cmpwi r0, 0x3
    li r4, 0x0
    beq lbl_fn_80705450_00001EDC
    cmpwi r0, 0x2
    beq lbl_fn_80705450_00001EE8
    cmpwi r0, 0x1
    beq lbl_fn_80705450_00001EF0
    b lbl_fn_80705450_00001EF4
lbl_fn_80705450_00001EDC:
    slwi r3, r3, 1
    addi r4, r3, 0x2
    b lbl_fn_80705450_00001EF4
lbl_fn_80705450_00001EE8:
    mr r4, r3
    b lbl_fn_80705450_00001EF4
lbl_fn_80705450_00001EF0:
    srwi r4, r3, 1
lbl_fn_80705450_00001EF4:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x3
    beq lbl_fn_80705450_00001F14
    cmpwi r0, 0x2
    beq lbl_fn_80705450_00001F1C
    cmpwi r0, 0x1
    beq lbl_fn_80705450_00001F24
    b lbl_fn_80705450_00001F2C
lbl_fn_80705450_00001F14:
    addi r0, r4, 0x200
    b lbl_fn_80705450_00001F3C
lbl_fn_80705450_00001F1C:
    addi r0, r4, 0x100
    b lbl_fn_80705450_00001F3C
lbl_fn_80705450_00001F24:
    addi r0, r4, 0x80
    b lbl_fn_80705450_00001F3C
lbl_fn_80705450_00001F2C:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80705450_00001F68
lbl_fn_80705450_00001F3C:
    cmplw r4, r30
    bgt lbl_fn_80705450_00001F5C
    cmplw r30, r0
    bge lbl_fn_80705450_00001F5C
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_fn_80705450_00001F68
lbl_fn_80705450_00001F5C:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_fn_80705450_00001F68:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80705590(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r31, r3
    mr r27, r4
    mr r28, r5
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_80705590_00001FC0
    bl OSRestoreInterrupts
    b lbl_fn_80705590_00002088
lbl_fn_80705590_00001FC0:
    cmpwi r27, 0x0
    lwz r0, 0x14(r31)
    beq lbl_fn_80705590_00001FD0
    addis r27, r27, 0x8000
lbl_fn_80705590_00001FD0:
    cmpwi r0, 0x3
    li r29, 0x0
    beq lbl_fn_80705590_00001FF0
    cmpwi r0, 0x2
    beq lbl_fn_80705590_0000202C
    cmpwi r0, 0x1
    beq lbl_fn_80705590_00002034
    b lbl_fn_80705590_0000203C
lbl_fn_80705590_00001FF0:
    lis r3, 0x2492
    slwi r0, r27, 1
    addi r3, r3, 0x4925
    mulhwu r4, r3, r28
    subf r3, r4, r28
    srwi r3, r3, 1
    add r4, r3, r4
    srwi r3, r4, 3
    mulli r5, r3, 0xe
    extlwi r3, r4, 28, 1
    subf r4, r5, r28
    add r0, r4, r0
    add r29, r0, r3
    addi r29, r29, 0x2
    b lbl_fn_80705590_0000203C
lbl_fn_80705590_0000202C:
    add r29, r27, r28
    b lbl_fn_80705590_0000203C
lbl_fn_80705590_00002034:
    srwi r0, r27, 1
    add r29, r0, r28
lbl_fn_80705590_0000203C:
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80705590_00002054
    bl OSRestoreInterrupts
    b lbl_fn_80705590_00002080
lbl_fn_80705590_00002054:
    srwi r0, r29, 16
    sth r0, 0x9a(r4)
    lwz r4, 0x0(r31)
    sth r29, 0x9c(r4)
    lwz r5, 0x0(r31)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_fn_80705590_0000207C
    ori r0, r4, 0x1000
    stw r0, 0x1c(r5)
lbl_fn_80705590_0000207C:
    bl OSRestoreInterrupts
lbl_fn_80705590_00002080:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_80705590_00002088:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
