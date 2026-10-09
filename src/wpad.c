#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSGetTick(void);
extern void OSGetTime(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_16(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805F8570(void);
extern void fn_8065CE50(void);
extern void fn_8065CE60(void);
extern void fn_8065CE70(void);
extern void fn_8065CE80(void);
extern void fn_8065CE90(void);
extern void fn_8065CEA0(void);
extern void fn_8065CEB0(void);
extern void fn_8065CEC0(void);
extern void fn_806618F0(void);
extern void fn_80661A10(void);
extern void fn_80663660(void);
extern void fn_8066D0B0(void);
extern void fn_8066D690(void);
extern void fn_8066DFA0(void);
extern void fn_8066E080(void);
extern void fn_8066E100(void);
extern void fn_8066E3D0(void);
extern void fn_8066E4B0(void);
extern void fn_8066E5C0(void);
extern void fn_8066E8F0(void);
extern void fn_8067E23C(void);
extern void fn_8068A4A8(void);
extern void fn_8068AE24(void);

/* External data declarations */
extern u8 jumptable_807B94B0[];
extern u8 jumptable_807B94D4[];
extern u8 jumptable_807B9528[];
extern u8 jumptable_807B95D8[];
extern u8 jumptable_807B9608[];
extern u8 lbl_807650B8[];
extern u8 lbl_80765100[];
extern u8 lbl_80765148[];
extern u8 lbl_80765178[];
extern u8 lbl_80765188[];
extern u8 lbl_807B9558[];
extern u8 lbl_80829DF0[];
extern u8 lbl_8082DDA0[];

/* Small data declarations */
extern u32 __OSInIPL;
extern u32 lbl_80880258;
extern u32 lbl_80880271;
extern u32 lbl_80880280;
extern u32 lbl_80880284;
extern u32 lbl_80880288;
extern u32 lbl_8088028C;
extern u32 lbl_80880290;
extern u32 lbl_80880294;
extern u32 lbl_808889D8;
extern u32 lbl_808889DC;
extern u32 lbl_808889E0;
extern u32 lbl_808889E4;
extern u32 lbl_808889E8;
extern u32 lbl_808889EC;
extern u32 lbl_808889F0;
extern u32 lbl_808889F4;
extern u32 lbl_808889F8;
extern u32 lbl_80888A00;
extern u32 lbl_80888A04;
extern u32 lbl_80888A08;
extern u32 lbl_80888A10;
extern u32 lbl_80888A14;
extern u32 lbl_80888A18;
extern u32 lbl_80888A20;
extern u32 lbl_80888A28;
extern u32 lbl_80888A2C;
extern u32 lbl_80888A30;
extern u32 lbl_80888A34;
extern u32 lbl_80888A38;
extern u32 lbl_80888A3C;

/* Function declarations */
void fn_806636A0(void);
void fn_80664720(void);
void fn_80664950(void);
void fn_806649C0(void);
void fn_80665B30(void);
void fn_80665EA0(void);
void fn_80665F80(void);
void fn_80666220(void);
void fn_806663E0(void);
void fn_806665A0(void);
void fn_80666750(void);
void fn_806667E0(void);
void fn_80666840(void);
void fn_80666850(void);
void fn_80666860(void);
void fn_80666940(void);
void fn_80666A60(void);
void fn_80666B80(void);
void fn_80666BF0(void);
void fn_80666CD0(void);
void fn_80666E40(void);
void fn_80667130(void);
void fn_80667E40(void);
void fn_80667FE0(void);
void fn_80668A40(void);
void fn_80668B80(void);
void fn_80668C40(void);
void fn_80669490(void);
void fn_80669660(void);
void fn_806696B0(void);
void fn_80669D80(void);
void fn_80669F30(void);
void fn_8066A060(void);

asm void fn_806636A0(void)
{
    nofralloc
    stwu r1, -0x470(r1)
    mflr r0
    stw r0, 0x474(r1)
    addi r11, r1, 0x470
    bl _savegpr_24
    lis r6, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    mr r31, r3
    lwzx r29, r6, r0
    mr r27, r4
    mr r28, r5
    bl OSDisableInterrupts
    lwz r26, 0x838(r29)
    lbz r25, 0x910(r29)
    lwz r24, 0x900(r29)
    lwz r30, 0x920(r29)
    bl OSRestoreInterrupts
    cmpwi r24, -0x1
    beq lbl_fn_806636A0_00001048
    cmpwi r30, 0x0
    bne lbl_fn_806636A0_00000060
    li r24, -0x2
    b lbl_fn_806636A0_00001048
lbl_fn_806636A0_00000060:
    cmpwi r27, 0x0
    bne lbl_fn_806636A0_00000484
    cmpwi r26, 0x0
    bne lbl_fn_806636A0_00000078
    li r24, 0x0
    b lbl_fn_806636A0_00001048
lbl_fn_806636A0_00000078:
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_000000A4
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_000000A4:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    addi r4, r26, 0x3
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_fn_806636A0_00000474
    li r12, 0x0
    stb r12, 0x3ec(r1)
    li r0, 0x1
    li r31, 0x13
    sth r0, 0x402(r1)
    lwz r11, 0x3ec(r1)
    stb r27, 0x910(r29)
    lwz r10, 0x3f0(r1)
    lwz r9, 0x3f4(r1)
    lwz r8, 0x3f8(r1)
    lwz r7, 0x3fc(r1)
    lwz r6, 0x400(r1)
    lwz r5, 0x404(r1)
    lwz r4, 0x408(r1)
    lwz r3, 0x40c(r1)
    lwz r0, 0x410(r1)
    stw r31, 0x3e8(r1)
    stw r12, 0x414(r1)
    stw r31, 0x418(r1)
    stw r11, 0x41c(r1)
    stw r10, 0x420(r1)
    stw r9, 0x424(r1)
    stw r8, 0x428(r1)
    stw r7, 0x42c(r1)
    stw r6, 0x430(r1)
    stw r5, 0x434(r1)
    stw r4, 0x438(r1)
    stw r3, 0x43c(r1)
    stw r0, 0x440(r1)
    stw r12, 0x444(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_00000160
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_00000160:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_00000180
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_000001F4
lbl_fn_806636A0_00000180:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x418
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_000001F4:
    li r0, 0x1
    sth r0, 0x3a2(r1)
    li r0, 0x0
    li r27, 0x1a
    stb r0, 0x38c(r1)
    lis r12, fn_80663660@ha
    addi r12, r12, fn_80663660@l
    lwz r10, 0x390(r1)
    lwz r11, 0x38c(r1)
    lwz r9, 0x394(r1)
    lwz r8, 0x398(r1)
    lwz r7, 0x39c(r1)
    lwz r6, 0x3a0(r1)
    lwz r5, 0x3a4(r1)
    lwz r4, 0x3a8(r1)
    lwz r3, 0x3ac(r1)
    lwz r0, 0x3b0(r1)
    stw r27, 0x388(r1)
    stw r12, 0x3b4(r1)
    stw r27, 0x3b8(r1)
    stw r11, 0x3bc(r1)
    stw r10, 0x3c0(r1)
    stw r9, 0x3c4(r1)
    stw r8, 0x3c8(r1)
    stw r7, 0x3cc(r1)
    stw r6, 0x3d0(r1)
    stw r5, 0x3d4(r1)
    stw r4, 0x3d8(r1)
    stw r3, 0x3dc(r1)
    stw r0, 0x3e0(r1)
    stw r12, 0x3e4(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_0000029C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_0000029C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_000002BC
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_00000330
lbl_fn_806636A0_000002BC:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x3b8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_00000330:
    li r11, 0x0
    stb r11, 0x32c(r1)
    li r0, 0x1
    li r12, 0x15
    sth r0, 0x342(r1)
    lwz r10, 0x32c(r1)
    lwz r9, 0x330(r1)
    lwz r8, 0x334(r1)
    lwz r7, 0x338(r1)
    lwz r6, 0x33c(r1)
    lwz r5, 0x340(r1)
    lwz r4, 0x344(r1)
    lwz r3, 0x348(r1)
    lwz r0, 0x34c(r1)
    stw r12, 0x328(r1)
    stw r28, 0x354(r1)
    stw r11, 0x350(r1)
    stw r12, 0x358(r1)
    stw r10, 0x35c(r1)
    stw r9, 0x360(r1)
    stw r8, 0x364(r1)
    stw r7, 0x368(r1)
    stw r6, 0x36c(r1)
    stw r5, 0x370(r1)
    stw r4, 0x374(r1)
    stw r3, 0x378(r1)
    stw r0, 0x37c(r1)
    stw r11, 0x380(r1)
    stw r28, 0x384(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_000003D0
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_000003D0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_000003F0
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_00000464
lbl_fn_806636A0_000003F0:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x358
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_00000464:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_806636A0_00001068
lbl_fn_806636A0_00000474:
    mr r3, r30
    li r24, -0x2
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_00001048
lbl_fn_806636A0_00000484:
    cmplw r27, r25
    beq lbl_fn_806636A0_00001048
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_000004B8
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_000004B8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    addi r4, r26, 0x8
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_fn_806636A0_0000103C
    stb r27, 0x910(r29)
    li r3, 0x1
    li r0, 0x4
    li r31, 0x13
    stb r0, 0x2cc(r1)
    li r12, 0x0
    lwz r10, 0x2d0(r1)
    stb r3, 0xba6(r29)
    lwz r9, 0x2d4(r1)
    sth r3, 0x2e2(r1)
    lwz r8, 0x2d8(r1)
    lwz r11, 0x2cc(r1)
    lwz r7, 0x2dc(r1)
    lwz r6, 0x2e0(r1)
    lwz r5, 0x2e4(r1)
    lwz r4, 0x2e8(r1)
    lwz r3, 0x2ec(r1)
    lwz r0, 0x2f0(r1)
    stw r31, 0x2c8(r1)
    stw r12, 0x2f4(r1)
    stw r31, 0x2f8(r1)
    stw r11, 0x2fc(r1)
    stw r10, 0x300(r1)
    stw r9, 0x304(r1)
    stw r8, 0x308(r1)
    stw r7, 0x30c(r1)
    stw r6, 0x310(r1)
    stw r5, 0x314(r1)
    stw r4, 0x318(r1)
    stw r3, 0x31c(r1)
    stw r0, 0x320(r1)
    stw r12, 0x324(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_0000057C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_0000057C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_0000059C
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_00000610
lbl_fn_806636A0_0000059C:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x2f8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_00000610:
    li r0, 0x1
    sth r0, 0x282(r1)
    li r0, 0x4
    li r31, 0x1a
    stb r0, 0x26c(r1)
    li r12, 0x0
    lwz r10, 0x270(r1)
    lwz r11, 0x26c(r1)
    lwz r9, 0x274(r1)
    lwz r8, 0x278(r1)
    lwz r7, 0x27c(r1)
    lwz r6, 0x280(r1)
    lwz r5, 0x284(r1)
    lwz r4, 0x288(r1)
    lwz r3, 0x28c(r1)
    lwz r0, 0x290(r1)
    stw r31, 0x268(r1)
    stw r12, 0x294(r1)
    stw r31, 0x298(r1)
    stw r11, 0x29c(r1)
    stw r10, 0x2a0(r1)
    stw r9, 0x2a4(r1)
    stw r8, 0x2a8(r1)
    stw r7, 0x2ac(r1)
    stw r6, 0x2b0(r1)
    stw r5, 0x2b4(r1)
    stw r4, 0x2b8(r1)
    stw r3, 0x2bc(r1)
    stw r0, 0x2c0(r1)
    stw r12, 0x2c4(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_000006B4
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_000006B4:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_000006D4
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_00000748
lbl_fn_806636A0_000006D4:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x298
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_00000748:
    lis r3, 0x4b0
    li r9, 0x1
    addi r8, r3, 0x30
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r9, 0xf(r1)
    addi r3, r1, 0x23c
    addi r4, r1, 0x20
    li r5, 0x4
    stw r8, 0x20(r1)
    stb r9, 0xe(r1)
    stw r7, 0x238(r1)
    sth r6, 0x252(r1)
    stw r0, 0x264(r1)
    bl memcpy
    addi r3, r1, 0x240
    addi r4, r1, 0xe
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x241
    addi r4, r1, 0xf
    li r5, 0x1
    bl memcpy
    lwz r31, 0x238(r1)
    lwz r12, 0x23c(r1)
    lwz r11, 0x240(r1)
    lwz r10, 0x244(r1)
    lwz r9, 0x248(r1)
    lwz r8, 0x24c(r1)
    lwz r7, 0x250(r1)
    lwz r6, 0x254(r1)
    lwz r5, 0x258(r1)
    lwz r4, 0x25c(r1)
    lwz r3, 0x260(r1)
    lwz r0, 0x264(r1)
    stw r31, 0x208(r1)
    stw r12, 0x20c(r1)
    stw r11, 0x210(r1)
    stw r10, 0x214(r1)
    stw r9, 0x218(r1)
    stw r8, 0x21c(r1)
    stw r7, 0x220(r1)
    stw r6, 0x224(r1)
    stw r5, 0x228(r1)
    stw r4, 0x22c(r1)
    stw r3, 0x230(r1)
    stw r0, 0x234(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_00000834
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_00000834:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_00000854
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_000008C8
lbl_fn_806636A0_00000854:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x208
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_000008C8:
    lbz r5, lbl_80880271
    lis r4, lbl_80765148@ha
    lis r9, 0x4b0
    li r3, 0x9
    subi r8, r5, 0x1
    li r5, 0x16
    slwi r7, r8, 3
    li r6, 0x15
    li r0, 0x0
    stb r3, 0xd(r1)
    add r7, r7, r8
    addi r4, r4, lbl_80765148@l
    stw r5, 0x1a8(r1)
    add r26, r4, r7
    addi r3, r1, 0x1ac
    addi r4, r1, 0x1c
    stw r9, 0x1c(r1)
    li r5, 0x4
    sth r6, 0x1c2(r1)
    stw r0, 0x1d4(r1)
    bl memcpy
    addi r3, r1, 0x1b0
    addi r4, r1, 0xd
    li r5, 0x1
    bl memcpy
    mr r4, r26
    addi r3, r1, 0x1b1
    li r5, 0x9
    bl memcpy
    lwz r31, 0x1a8(r1)
    lwz r12, 0x1ac(r1)
    lwz r11, 0x1b0(r1)
    lwz r10, 0x1b4(r1)
    lwz r9, 0x1b8(r1)
    lwz r8, 0x1bc(r1)
    lwz r7, 0x1c0(r1)
    lwz r6, 0x1c4(r1)
    lwz r5, 0x1c8(r1)
    lwz r4, 0x1cc(r1)
    lwz r3, 0x1d0(r1)
    lwz r0, 0x1d4(r1)
    stw r31, 0x1d8(r1)
    stw r12, 0x1dc(r1)
    stw r11, 0x1e0(r1)
    stw r10, 0x1e4(r1)
    stw r9, 0x1e8(r1)
    stw r8, 0x1ec(r1)
    stw r7, 0x1f0(r1)
    stw r6, 0x1f4(r1)
    stw r5, 0x1f8(r1)
    stw r4, 0x1fc(r1)
    stw r3, 0x200(r1)
    stw r0, 0x204(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_000009C8
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_000009C8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_000009E8
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_00000A5C
lbl_fn_806636A0_000009E8:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x1d8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_00000A5C:
    lbz r5, lbl_80880271
    lis r6, 0x4b0
    addi r8, r6, 0x1a
    lis r4, lbl_80765178@ha
    subi r7, r5, 0x1
    li r3, 0x2
    li r5, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r3, 0xc(r1)
    slwi r7, r7, 1
    addi r4, r4, lbl_80765178@l
    stw r5, 0x148(r1)
    add r26, r4, r7
    addi r3, r1, 0x14c
    addi r4, r1, 0x18
    stw r8, 0x18(r1)
    li r5, 0x4
    sth r6, 0x162(r1)
    stw r0, 0x174(r1)
    bl memcpy
    addi r3, r1, 0x150
    addi r4, r1, 0xc
    li r5, 0x1
    bl memcpy
    mr r4, r26
    addi r3, r1, 0x151
    li r5, 0x2
    bl memcpy
    lwz r31, 0x148(r1)
    lwz r12, 0x14c(r1)
    lwz r11, 0x150(r1)
    lwz r10, 0x154(r1)
    lwz r9, 0x158(r1)
    lwz r8, 0x15c(r1)
    lwz r7, 0x160(r1)
    lwz r6, 0x164(r1)
    lwz r5, 0x168(r1)
    lwz r4, 0x16c(r1)
    lwz r3, 0x170(r1)
    lwz r0, 0x174(r1)
    stw r31, 0x178(r1)
    stw r12, 0x17c(r1)
    stw r11, 0x180(r1)
    stw r10, 0x184(r1)
    stw r9, 0x188(r1)
    stw r8, 0x18c(r1)
    stw r7, 0x190(r1)
    stw r6, 0x194(r1)
    stw r5, 0x198(r1)
    stw r4, 0x19c(r1)
    stw r3, 0x1a0(r1)
    stw r0, 0x1a4(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_00000B5C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_00000B5C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_00000B7C
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_00000BF0
lbl_fn_806636A0_00000B7C:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x178
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_00000BF0:
    lis r3, 0x4b0
    li r8, 0x1
    addi r9, r3, 0x33
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r27, 0xb(r1)
    addi r3, r1, 0x11c
    addi r4, r1, 0x14
    li r5, 0x4
    stw r9, 0x14(r1)
    stb r8, 0xa(r1)
    stw r7, 0x118(r1)
    sth r6, 0x132(r1)
    stw r0, 0x144(r1)
    bl memcpy
    addi r3, r1, 0x120
    addi r4, r1, 0xa
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x121
    addi r4, r1, 0xb
    li r5, 0x1
    bl memcpy
    lwz r27, 0x118(r1)
    lwz r12, 0x11c(r1)
    lwz r11, 0x120(r1)
    lwz r10, 0x124(r1)
    lwz r9, 0x128(r1)
    lwz r8, 0x12c(r1)
    lwz r7, 0x130(r1)
    lwz r6, 0x134(r1)
    lwz r5, 0x138(r1)
    lwz r4, 0x13c(r1)
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r27, 0xe8(r1)
    stw r12, 0xec(r1)
    stw r11, 0xf0(r1)
    stw r10, 0xf4(r1)
    stw r9, 0xf8(r1)
    stw r8, 0xfc(r1)
    stw r7, 0x100(r1)
    stw r6, 0x104(r1)
    stw r5, 0x108(r1)
    stw r4, 0x10c(r1)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_00000CDC
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_00000CDC:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_00000CFC
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_00000D70
lbl_fn_806636A0_00000CFC:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0xe8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_00000D70:
    lis r3, 0x4b0
    lis r6, fn_80663660@ha
    addi r9, r3, 0x30
    li r8, 0x1
    li r3, 0x8
    addi r6, r6, fn_80663660@l
    li r7, 0x16
    li r0, 0x15
    stb r3, 0x9(r1)
    addi r3, r1, 0xbc
    addi r4, r1, 0x10
    li r5, 0x4
    stw r9, 0x10(r1)
    stb r8, 0x8(r1)
    stw r7, 0xb8(r1)
    sth r0, 0xd2(r1)
    stw r6, 0xe4(r1)
    bl memcpy
    addi r3, r1, 0xc0
    addi r4, r1, 0x8
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0xc1
    addi r4, r1, 0x9
    li r5, 0x1
    bl memcpy
    lwz r27, 0xb8(r1)
    lwz r12, 0xbc(r1)
    lwz r11, 0xc0(r1)
    lwz r10, 0xc4(r1)
    lwz r9, 0xc8(r1)
    lwz r8, 0xcc(r1)
    lwz r7, 0xd0(r1)
    lwz r6, 0xd4(r1)
    lwz r5, 0xd8(r1)
    lwz r4, 0xdc(r1)
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r27, 0x88(r1)
    stw r12, 0x8c(r1)
    stw r11, 0x90(r1)
    stw r10, 0x94(r1)
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stw r7, 0xa0(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_00000E64
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_00000E64:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_00000E84
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_00000EF8
lbl_fn_806636A0_00000E84:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x88
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_00000EF8:
    li r11, 0x0
    stb r11, 0x2c(r1)
    li r0, 0x1
    li r12, 0x15
    sth r0, 0x42(r1)
    lwz r10, 0x2c(r1)
    lwz r9, 0x30(r1)
    lwz r8, 0x34(r1)
    lwz r7, 0x38(r1)
    lwz r6, 0x3c(r1)
    lwz r5, 0x40(r1)
    lwz r4, 0x44(r1)
    lwz r3, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r12, 0x28(r1)
    stw r28, 0x54(r1)
    stw r11, 0x50(r1)
    stw r12, 0x58(r1)
    stw r10, 0x5c(r1)
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r11, 0x80(r1)
    stw r28, 0x84(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_806636A0_00000F98
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_806636A0_00000F98:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_806636A0_00000FB8
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806636A0_0000102C
lbl_fn_806636A0_00000FB8:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x58
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_fn_806636A0_0000102C:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_806636A0_00001068
lbl_fn_806636A0_0000103C:
    mr r3, r30
    li r24, -0x2
    bl OSRestoreInterrupts
lbl_fn_806636A0_00001048:
    cmpwi r28, 0x0
    beq lbl_fn_806636A0_00001064
    mr r12, r28
    mr r3, r31
    mr r4, r24
    mtctr r12
    bctrl
lbl_fn_806636A0_00001064:
    mr r3, r24
lbl_fn_806636A0_00001068:
    addi r11, r1, 0x470
    bl _restgpr_24
    lwz r0, 0x474(r1)
    mtlr r0
    addi r1, r1, 0x470
    blr
}

asm void fn_80664720(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r6, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    mr r31, r3
    lwzx r28, r6, r0
    mr r26, r4
    mr r27, r5
    bl OSDisableInterrupts
    lwz r30, 0x900(r28)
    lwz r29, 0x920(r28)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    beq lbl_fn_80664720_0000126C
    cmpwi r29, 0x0
    beq lbl_fn_80664720_000010DC
    bl fn_8066E8F0
    cmpwi r3, 0x0
    bne lbl_fn_80664720_000010E4
lbl_fn_80664720_000010DC:
    li r30, -0x2
    b lbl_fn_80664720_0000126C
lbl_fn_80664720_000010E4:
    li r3, 0xaa
    li r0, 0x55
    stb r3, 0xa(r1)
    stb r3, 0x9(r1)
    stb r3, 0x8(r1)
    stb r0, 0xb(r1)
    stb r26, 0xe(r1)
    stb r26, 0xd(r1)
    stb r26, 0xc(r1)
    bl OSDisableInterrupts
    cmpwi r26, 0xaa
    mr r29, r3
    beq lbl_fn_80664720_0000112C
    cmpwi r26, 0x55
    beq lbl_fn_80664720_000011F0
    cmpwi r26, 0x0
    beq lbl_fn_80664720_00001228
    b lbl_fn_80664720_00001260
lbl_fn_80664720_0000112C:
    bl OSDisableInterrupts
    lbz r4, 0x160(r28)
    lbz r0, 0x161(r28)
    subf r0, r4, r0
    extsb. r30, r0
    bge lbl_fn_80664720_00001150
    lwz r0, 0x168(r28)
    add r0, r30, r0
    extsb r30, r0
lbl_fn_80664720_00001150:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r28)
    addi r4, r30, 0x4
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_fn_80664720_000011E8
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x7
    li r6, 0xa4
    li r7, 0xf1
    li r8, 0x0
    bl fn_8066DFA0
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0xa4
    li r7, 0xf1
    li r8, 0x0
    bl fn_8066DFA0
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0xa4
    li r7, 0xf1
    li r8, 0x0
    bl fn_8066DFA0
    mr r3, r31
    mr r8, r27
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0xa4
    li r7, 0xf1
    bl fn_8066DFA0
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80664720_0000128C
lbl_fn_80664720_000011E8:
    li r30, -0x2
    b lbl_fn_80664720_00001264
lbl_fn_80664720_000011F0:
    mr r3, r31
    mr r8, r27
    addi r4, r1, 0x8
    li r5, 0x7
    li r6, 0xa4
    li r7, 0xf1
    bl fn_8066DFA0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80664720_00001264
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80664720_0000128C
lbl_fn_80664720_00001228:
    mr r3, r31
    mr r8, r27
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0xa4
    li r7, 0xf1
    bl fn_8066DFA0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80664720_00001264
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80664720_0000128C
lbl_fn_80664720_00001260:
    li r30, -0x2
lbl_fn_80664720_00001264:
    mr r3, r29
    bl OSRestoreInterrupts
lbl_fn_80664720_0000126C:
    cmpwi r27, 0x0
    beq lbl_fn_80664720_00001288
    mr r12, r27
    mr r3, r31
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_80664720_00001288:
    mr r3, r30
lbl_fn_80664720_0000128C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80664950(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lwzx r30, r4, r0
    bl OSDisableInterrupts
    lbz r4, 0x905(r30)
    addi r0, r4, 0xfb
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_80664950_000012F8
    cmplwi r4, 0xfa
    bne lbl_fn_80664950_000012FC
lbl_fn_80664950_000012F8:
    lbz r31, 0x906(r30)
lbl_fn_80664950_000012FC:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806649C0(void)
{
    nofralloc
    stwu r1, -0x3b0(r1)
    mflr r0
    lis r5, lbl_80829DF0@ha
    stw r0, 0x3b4(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    stw r31, 0x3ac(r1)
    stw r30, 0x3a8(r1)
    stw r29, 0x3a4(r1)
    mr r29, r3
    stw r28, 0x3a0(r1)
    lwzx r30, r5, r0
    lbz r0, 0xbac(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_806649C0_0000242C
    lis r3, jumptable_807B94B0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B94B0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r4, 0x0
    bne lbl_fn_806649C0_00001AD8
    lbz r3, 0x936(r30)
    addi r0, r3, 0xfb
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_806649C0_0000157C
    cmplwi r3, 0xfa
    beq lbl_fn_806649C0_0000157C
    lbz r3, 0x937(r30)
    subi r0, r3, 0x1
    stb r0, 0x937(r30)
    clrlwi. r0, r0, 24
    bne lbl_fn_806649C0_000013B4
    li r4, -0x3
    b lbl_fn_806649C0_0000242C
lbl_fn_806649C0_000013B4:
    cmplwi r0, 0x1
    ble lbl_fn_806649C0_000013CC
    lis r3, 0x4a6
    addi r0, r3, 0xfe
    stw r0, 0xba8(r30)
    b lbl_fn_806649C0_000013D8
lbl_fn_806649C0_000013CC:
    lis r3, 0x4a4
    addi r0, r3, 0xfe
    stw r0, 0xba8(r30)
lbl_fn_806649C0_000013D8:
    lwz r3, 0xba8(r30)
    lis r6, fn_806649C0@ha
    addi r6, r6, fn_806649C0@l
    li r8, 0x2
    li r7, 0x17
    li r0, 0x6
    stw r3, 0x3c(r1)
    addi r3, r1, 0x344
    addi r4, r1, 0x3c
    li r5, 0x4
    sth r8, 0x18(r1)
    stw r7, 0x340(r1)
    sth r0, 0x35a(r1)
    stw r6, 0x36c(r1)
    bl memcpy
    addi r3, r1, 0x348
    addi r4, r1, 0x18
    li r5, 0x2
    bl memcpy
    lhz r0, 0x18(r1)
    addi r31, r30, 0x935
    sth r0, 0x360(r1)
    lwz r12, 0x3c(r1)
    lwz r11, 0x340(r1)
    lwz r10, 0x344(r1)
    lwz r9, 0x348(r1)
    lwz r8, 0x34c(r1)
    lwz r7, 0x350(r1)
    lwz r6, 0x354(r1)
    lwz r5, 0x358(r1)
    lwz r4, 0x360(r1)
    lwz r3, 0x368(r1)
    lwz r0, 0x36c(r1)
    stw r31, 0x35c(r1)
    stw r12, 0x364(r1)
    stw r11, 0x370(r1)
    stw r10, 0x374(r1)
    stw r9, 0x378(r1)
    stw r8, 0x37c(r1)
    stw r7, 0x380(r1)
    stw r6, 0x384(r1)
    stw r5, 0x388(r1)
    stw r31, 0x38c(r1)
    stw r4, 0x390(r1)
    stw r12, 0x394(r1)
    stw r3, 0x398(r1)
    stw r0, 0x39c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    lbz r5, 0x161(r30)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r28, r0
    bge lbl_fn_806649C0_000014C8
    lwz r0, 0x168(r30)
    add r0, r28, r0
    extsb r28, r0
lbl_fn_806649C0_000014C8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r28
    bne lbl_fn_806649C0_000014EC
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806649C0_00001564
lbl_fn_806649C0_000014EC:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x370
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806649C0_00001564:
    cntlzw r3, r0
    li r0, -0x2
    extrwi r3, r3, 1, 26
    neg r3, r3
    and r4, r0, r3
    b lbl_fn_806649C0_0000242C
lbl_fn_806649C0_0000157C:
    lwz r0, 0xba8(r30)
    clrrwi r0, r0, 8
    ori r9, r0, 0xf0
    subis r0, r9, 0x4a6
    cmplwi r0, 0xf0
    bne lbl_fn_806649C0_00001744
    li r0, 0x3
    stb r0, 0xbac(r30)
    lis r6, fn_806649C0@ha
    li r3, 0x55
    addi r6, r6, fn_806649C0@l
    li r8, 0x1
    li r7, 0x16
    li r0, 0x15
    stb r3, 0x11(r1)
    addi r3, r1, 0x314
    addi r4, r1, 0x38
    li r5, 0x4
    stw r9, 0x38(r1)
    stb r8, 0x10(r1)
    stw r7, 0x310(r1)
    sth r0, 0x32a(r1)
    stw r6, 0x33c(r1)
    bl memcpy
    addi r3, r1, 0x318
    addi r4, r1, 0x10
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x319
    addi r4, r1, 0x11
    li r5, 0x1
    bl memcpy
    lwz r31, 0x310(r1)
    lwz r12, 0x314(r1)
    lwz r11, 0x318(r1)
    lwz r10, 0x31c(r1)
    lwz r9, 0x320(r1)
    lwz r8, 0x324(r1)
    lwz r7, 0x328(r1)
    lwz r6, 0x32c(r1)
    lwz r5, 0x330(r1)
    lwz r4, 0x334(r1)
    lwz r3, 0x338(r1)
    lwz r0, 0x33c(r1)
    stw r31, 0x2e0(r1)
    stw r12, 0x2e4(r1)
    stw r11, 0x2e8(r1)
    stw r10, 0x2ec(r1)
    stw r9, 0x2f0(r1)
    stw r8, 0x2f4(r1)
    stw r7, 0x2f8(r1)
    stw r6, 0x2fc(r1)
    stw r5, 0x300(r1)
    stw r4, 0x304(r1)
    stw r3, 0x308(r1)
    stw r0, 0x30c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    lbz r5, 0x161(r30)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r28, r0
    bge lbl_fn_806649C0_00001690
    lwz r0, 0x168(r30)
    add r0, r28, r0
    extsb r28, r0
lbl_fn_806649C0_00001690:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r28
    bne lbl_fn_806649C0_000016B4
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806649C0_0000172C
lbl_fn_806649C0_000016B4:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x2e0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806649C0_0000172C:
    cntlzw r3, r0
    li r0, -0x2
    extrwi r3, r3, 1, 26
    neg r3, r3
    and r4, r0, r3
    b lbl_fn_806649C0_0000242C
lbl_fn_806649C0_00001744:
    lbz r3, 0x935(r30)
    lbz r0, 0x938(r30)
    cmplw r3, r0
    bne lbl_fn_806649C0_00001760
    li r0, 0x0
    stb r0, 0xbac(r30)
    b lbl_fn_806649C0_0000242C
lbl_fn_806649C0_00001760:
    lbz r3, 0x937(r30)
    subi r0, r3, 0x1
    stb r0, 0x937(r30)
    clrlwi. r0, r0, 24
    beq lbl_fn_806649C0_00001920
    lis r3, 0x4a4
    lis r6, fn_806649C0@ha
    addi r3, r3, 0xfe
    stw r3, 0xba8(r30)
    addi r6, r6, fn_806649C0@l
    li r8, 0x2
    li r7, 0x17
    li r0, 0x6
    stw r3, 0x34(r1)
    addi r3, r1, 0x284
    addi r4, r1, 0x34
    li r5, 0x4
    sth r8, 0x16(r1)
    stw r7, 0x280(r1)
    sth r0, 0x29a(r1)
    stw r6, 0x2ac(r1)
    bl memcpy
    addi r3, r1, 0x288
    addi r4, r1, 0x16
    li r5, 0x2
    bl memcpy
    lhz r0, 0x16(r1)
    addi r31, r30, 0x935
    sth r0, 0x2a0(r1)
    lwz r12, 0x34(r1)
    lwz r11, 0x280(r1)
    lwz r10, 0x284(r1)
    lwz r9, 0x288(r1)
    lwz r8, 0x28c(r1)
    lwz r7, 0x290(r1)
    lwz r6, 0x294(r1)
    lwz r5, 0x298(r1)
    lwz r4, 0x2a0(r1)
    lwz r3, 0x2a8(r1)
    lwz r0, 0x2ac(r1)
    stw r31, 0x29c(r1)
    stw r12, 0x2a4(r1)
    stw r11, 0x2b0(r1)
    stw r10, 0x2b4(r1)
    stw r9, 0x2b8(r1)
    stw r8, 0x2bc(r1)
    stw r7, 0x2c0(r1)
    stw r6, 0x2c4(r1)
    stw r5, 0x2c8(r1)
    stw r31, 0x2cc(r1)
    stw r4, 0x2d0(r1)
    stw r12, 0x2d4(r1)
    stw r3, 0x2d8(r1)
    stw r0, 0x2dc(r1)
    bl OSDisableInterrupts
    mr r28, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    lbz r5, 0x161(r30)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_fn_806649C0_0000186C
    lwz r0, 0x168(r30)
    add r0, r31, r0
    extsb r31, r0
lbl_fn_806649C0_0000186C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r31
    bne lbl_fn_806649C0_00001890
    mr r3, r28
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806649C0_00001908
lbl_fn_806649C0_00001890:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x2b0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r28
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806649C0_00001908:
    cntlzw r3, r0
    li r0, -0x2
    extrwi r3, r3, 1, 26
    neg r3, r3
    and r4, r0, r3
    b lbl_fn_806649C0_0000242C
lbl_fn_806649C0_00001920:
    li r0, 0x6
    stb r0, 0xbac(r30)
    lis r3, 0x4a4
    lis r6, fn_806649C0@ha
    addi r9, r3, 0xfe
    li r8, 0x1
    li r3, 0x0
    addi r6, r6, fn_806649C0@l
    li r7, 0x16
    li r0, 0x15
    stb r3, 0xf(r1)
    addi r3, r1, 0x254
    addi r4, r1, 0x30
    li r5, 0x4
    stw r9, 0x30(r1)
    stb r8, 0xe(r1)
    stw r7, 0x250(r1)
    sth r0, 0x26a(r1)
    stw r6, 0x27c(r1)
    bl memcpy
    addi r3, r1, 0x258
    addi r4, r1, 0xe
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x259
    addi r4, r1, 0xf
    li r5, 0x1
    bl memcpy
    lwz r31, 0x250(r1)
    lwz r12, 0x254(r1)
    lwz r11, 0x258(r1)
    lwz r10, 0x25c(r1)
    lwz r9, 0x260(r1)
    lwz r8, 0x264(r1)
    lwz r7, 0x268(r1)
    lwz r6, 0x26c(r1)
    lwz r5, 0x270(r1)
    lwz r4, 0x274(r1)
    lwz r3, 0x278(r1)
    lwz r0, 0x27c(r1)
    stw r31, 0x220(r1)
    stw r12, 0x224(r1)
    stw r11, 0x228(r1)
    stw r10, 0x22c(r1)
    stw r9, 0x230(r1)
    stw r8, 0x234(r1)
    stw r7, 0x238(r1)
    stw r6, 0x23c(r1)
    stw r5, 0x240(r1)
    stw r4, 0x244(r1)
    stw r3, 0x248(r1)
    stw r0, 0x24c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    lbz r5, 0x161(r30)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r28, r0
    bge lbl_fn_806649C0_00001A24
    lwz r0, 0x168(r30)
    add r0, r28, r0
    extsb r28, r0
lbl_fn_806649C0_00001A24:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r28
    bne lbl_fn_806649C0_00001A48
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806649C0_00001AC0
lbl_fn_806649C0_00001A48:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x220
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806649C0_00001AC0:
    cntlzw r3, r0
    li r0, -0x2
    extrwi r3, r3, 1, 26
    neg r3, r3
    and r4, r0, r3
    b lbl_fn_806649C0_0000242C
lbl_fn_806649C0_00001AD8:
    cmpwi r4, -0x3
    bne lbl_fn_806649C0_0000242C
    lbz r3, 0x937(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806649C0_0000242C
    subi r0, r3, 0x1
    stb r0, 0x937(r30)
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_fn_806649C0_00001B10
    lis r3, 0x4a6
    addi r0, r3, 0xfe
    stw r0, 0xba8(r30)
    b lbl_fn_806649C0_00001B1C
lbl_fn_806649C0_00001B10:
    lis r3, 0x4a4
    addi r0, r3, 0xfe
    stw r0, 0xba8(r30)
lbl_fn_806649C0_00001B1C:
    lwz r3, 0xba8(r30)
    lis r6, fn_806649C0@ha
    addi r6, r6, fn_806649C0@l
    li r8, 0x2
    li r7, 0x17
    li r0, 0x6
    stw r3, 0x2c(r1)
    addi r3, r1, 0x1c4
    addi r4, r1, 0x2c
    li r5, 0x4
    sth r8, 0x14(r1)
    stw r7, 0x1c0(r1)
    sth r0, 0x1da(r1)
    stw r6, 0x1ec(r1)
    bl memcpy
    addi r3, r1, 0x1c8
    addi r4, r1, 0x14
    li r5, 0x2
    bl memcpy
    lhz r0, 0x14(r1)
    addi r31, r30, 0x935
    sth r0, 0x1e0(r1)
    lwz r12, 0x2c(r1)
    lwz r11, 0x1c0(r1)
    lwz r10, 0x1c4(r1)
    lwz r9, 0x1c8(r1)
    lwz r8, 0x1cc(r1)
    lwz r7, 0x1d0(r1)
    lwz r6, 0x1d4(r1)
    lwz r5, 0x1d8(r1)
    lwz r4, 0x1e0(r1)
    lwz r3, 0x1e8(r1)
    lwz r0, 0x1ec(r1)
    stw r31, 0x1dc(r1)
    stw r12, 0x1e4(r1)
    stw r11, 0x1f0(r1)
    stw r10, 0x1f4(r1)
    stw r9, 0x1f8(r1)
    stw r8, 0x1fc(r1)
    stw r7, 0x200(r1)
    stw r6, 0x204(r1)
    stw r5, 0x208(r1)
    stw r31, 0x20c(r1)
    stw r4, 0x210(r1)
    stw r12, 0x214(r1)
    stw r3, 0x218(r1)
    stw r0, 0x21c(r1)
    bl OSDisableInterrupts
    mr r28, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    lbz r5, 0x161(r30)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_fn_806649C0_00001C0C
    lwz r0, 0x168(r30)
    add r0, r31, r0
    extsb r31, r0
lbl_fn_806649C0_00001C0C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r31
    bne lbl_fn_806649C0_00001C30
    mr r3, r28
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806649C0_00001CA8
lbl_fn_806649C0_00001C30:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x1f0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r28
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806649C0_00001CA8:
    cntlzw r3, r0
    li r0, -0x2
    extrwi r3, r3, 1, 26
    neg r3, r3
    and r4, r0, r3
    b lbl_fn_806649C0_0000242C
    cmpwi r4, 0x0
    bne lbl_fn_806649C0_0000242C
    lbz r3, 0x936(r30)
    addi r0, r3, 0xfb
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_806649C0_00001CE4
    cmplwi r3, 0xfa
    bne lbl_fn_806649C0_00001E9C
lbl_fn_806649C0_00001CE4:
    li r0, 0x7
    stb r0, 0xbac(r30)
    lis r3, 0x4a4
    lis r6, fn_806649C0@ha
    addi r9, r3, 0xfe
    li r8, 0x1
    li r3, 0x0
    addi r6, r6, fn_806649C0@l
    li r7, 0x16
    li r0, 0x15
    stb r3, 0xd(r1)
    addi r3, r1, 0x194
    addi r4, r1, 0x28
    li r5, 0x4
    stw r9, 0x28(r1)
    stb r8, 0xc(r1)
    stw r7, 0x190(r1)
    sth r0, 0x1aa(r1)
    stw r6, 0x1bc(r1)
    bl memcpy
    addi r3, r1, 0x198
    addi r4, r1, 0xc
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x199
    addi r4, r1, 0xd
    li r5, 0x1
    bl memcpy
    lwz r31, 0x190(r1)
    lwz r12, 0x194(r1)
    lwz r11, 0x198(r1)
    lwz r10, 0x19c(r1)
    lwz r9, 0x1a0(r1)
    lwz r8, 0x1a4(r1)
    lwz r7, 0x1a8(r1)
    lwz r6, 0x1ac(r1)
    lwz r5, 0x1b0(r1)
    lwz r4, 0x1b4(r1)
    lwz r3, 0x1b8(r1)
    lwz r0, 0x1bc(r1)
    stw r31, 0x160(r1)
    stw r12, 0x164(r1)
    stw r11, 0x168(r1)
    stw r10, 0x16c(r1)
    stw r9, 0x170(r1)
    stw r8, 0x174(r1)
    stw r7, 0x178(r1)
    stw r6, 0x17c(r1)
    stw r5, 0x180(r1)
    stw r4, 0x184(r1)
    stw r3, 0x188(r1)
    stw r0, 0x18c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    lbz r5, 0x161(r30)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r28, r0
    bge lbl_fn_806649C0_00001DE8
    lwz r0, 0x168(r30)
    add r0, r28, r0
    extsb r28, r0
lbl_fn_806649C0_00001DE8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r28
    bne lbl_fn_806649C0_00001E0C
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806649C0_00001E84
lbl_fn_806649C0_00001E0C:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x160
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806649C0_00001E84:
    cntlzw r3, r0
    li r0, -0x2
    extrwi r3, r3, 1, 26
    neg r3, r3
    and r4, r0, r3
    b lbl_fn_806649C0_0000242C
lbl_fn_806649C0_00001E9C:
    li r4, -0x3
    b lbl_fn_806649C0_0000242C
    cmpwi r4, 0x0
    bne lbl_fn_806649C0_0000242C
    li r0, 0x4
    stb r0, 0xbac(r30)
    lis r3, 0x4a6
    lis r6, fn_806649C0@ha
    lbz r4, 0x938(r30)
    addi r9, r3, 0xfe
    addi r6, r6, fn_806649C0@l
    li r8, 0x1
    li r7, 0x16
    li r0, 0x15
    stb r4, 0xb(r1)
    addi r3, r1, 0x134
    addi r4, r1, 0x24
    li r5, 0x4
    stw r9, 0x24(r1)
    stb r8, 0xa(r1)
    stw r7, 0x130(r1)
    sth r0, 0x14a(r1)
    stw r6, 0x15c(r1)
    bl memcpy
    addi r3, r1, 0x138
    addi r4, r1, 0xa
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x139
    addi r4, r1, 0xb
    li r5, 0x1
    bl memcpy
    lwz r31, 0x130(r1)
    lwz r12, 0x134(r1)
    lwz r11, 0x138(r1)
    lwz r10, 0x13c(r1)
    lwz r9, 0x140(r1)
    lwz r8, 0x144(r1)
    lwz r7, 0x148(r1)
    lwz r6, 0x14c(r1)
    lwz r5, 0x150(r1)
    lwz r4, 0x154(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r31, 0x100(r1)
    stw r12, 0x104(r1)
    stw r11, 0x108(r1)
    stw r10, 0x10c(r1)
    stw r9, 0x110(r1)
    stw r8, 0x114(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r5, 0x120(r1)
    stw r4, 0x124(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    lbz r5, 0x161(r30)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r28, r0
    bge lbl_fn_806649C0_00001FB0
    lwz r0, 0x168(r30)
    add r0, r28, r0
    extsb r28, r0
lbl_fn_806649C0_00001FB0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r28
    bne lbl_fn_806649C0_00001FD4
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806649C0_0000204C
lbl_fn_806649C0_00001FD4:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x100
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806649C0_0000204C:
    cntlzw r3, r0
    li r0, -0x2
    extrwi r3, r3, 1, 26
    neg r3, r3
    and r4, r0, r3
    b lbl_fn_806649C0_0000242C
    cmpwi r4, 0x0
    bne lbl_fn_806649C0_0000242C
    li r0, 0x1
    stb r0, 0x93a(r30)
    li r0, 0x0
    stb r0, 0xbac(r30)
    b lbl_fn_806649C0_0000242C
    cmpwi r4, 0x0
    bne lbl_fn_806649C0_0000242C
    lbz r3, 0x936(r30)
    addi r0, r3, 0xfb
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_806649C0_000020A4
    cmplwi r3, 0xfa
    bne lbl_fn_806649C0_0000225C
lbl_fn_806649C0_000020A4:
    li r0, 0x8
    stb r0, 0xbac(r30)
    lis r3, 0x4a4
    lis r6, fn_806649C0@ha
    addi r9, r3, 0xf2
    li r8, 0x1
    li r3, 0x0
    addi r6, r6, fn_806649C0@l
    li r7, 0x16
    li r0, 0x15
    stb r3, 0x9(r1)
    addi r3, r1, 0xd4
    addi r4, r1, 0x20
    li r5, 0x4
    stw r9, 0x20(r1)
    stb r8, 0x8(r1)
    stw r7, 0xd0(r1)
    sth r0, 0xea(r1)
    stw r6, 0xfc(r1)
    bl memcpy
    addi r3, r1, 0xd8
    addi r4, r1, 0x8
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0xd9
    addi r4, r1, 0x9
    li r5, 0x1
    bl memcpy
    lwz r31, 0xd0(r1)
    lwz r12, 0xd4(r1)
    lwz r11, 0xd8(r1)
    lwz r10, 0xdc(r1)
    lwz r9, 0xe0(r1)
    lwz r8, 0xe4(r1)
    lwz r7, 0xe8(r1)
    lwz r6, 0xec(r1)
    lwz r5, 0xf0(r1)
    lwz r4, 0xf4(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r31, 0xa0(r1)
    stw r12, 0xa4(r1)
    stw r11, 0xa8(r1)
    stw r10, 0xac(r1)
    stw r9, 0xb0(r1)
    stw r8, 0xb4(r1)
    stw r7, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    lbz r5, 0x161(r30)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r28, r0
    bge lbl_fn_806649C0_000021A8
    lwz r0, 0x168(r30)
    add r0, r28, r0
    extsb r28, r0
lbl_fn_806649C0_000021A8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r28
    bne lbl_fn_806649C0_000021CC
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806649C0_00002244
lbl_fn_806649C0_000021CC:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0xa0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806649C0_00002244:
    cntlzw r3, r0
    li r0, -0x2
    extrwi r3, r3, 1, 26
    neg r3, r3
    and r4, r0, r3
    b lbl_fn_806649C0_0000242C
lbl_fn_806649C0_0000225C:
    li r4, -0x3
    b lbl_fn_806649C0_0000242C
    cmpwi r4, 0x0
    bne lbl_fn_806649C0_0000242C
    li r0, 0x4
    stb r0, 0x937(r30)
    li r8, 0x1
    lis r3, 0x4a6
    stb r8, 0xbac(r30)
    lis r6, fn_806649C0@ha
    addi r3, r3, 0xff
    li r7, 0x17
    addi r6, r6, fn_806649C0@l
    li r0, 0x6
    stw r3, 0x1c(r1)
    addi r3, r1, 0x44
    addi r4, r1, 0x1c
    li r5, 0x4
    sth r8, 0x12(r1)
    stw r7, 0x40(r1)
    sth r0, 0x5a(r1)
    stw r6, 0x6c(r1)
    bl memcpy
    addi r3, r1, 0x48
    addi r4, r1, 0x12
    li r5, 0x2
    bl memcpy
    lhz r0, 0x12(r1)
    addi r31, r30, 0x935
    sth r0, 0x60(r1)
    lwz r12, 0x1c(r1)
    lwz r11, 0x40(r1)
    lwz r10, 0x44(r1)
    lwz r9, 0x48(r1)
    lwz r8, 0x4c(r1)
    lwz r7, 0x50(r1)
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x60(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r31, 0x5c(r1)
    stw r12, 0x64(r1)
    stw r11, 0x70(r1)
    stw r10, 0x74(r1)
    stw r9, 0x78(r1)
    stw r8, 0x7c(r1)
    stw r7, 0x80(r1)
    stw r6, 0x84(r1)
    stw r5, 0x88(r1)
    stw r31, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r12, 0x94(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    bl OSDisableInterrupts
    mr r28, r3
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    lbz r5, 0x161(r30)
    extsb r4, r0
    extsb r0, r5
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_fn_806649C0_0000236C
    lwz r0, 0x168(r30)
    add r0, r31, r0
    extsb r31, r0
lbl_fn_806649C0_0000236C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r31
    bne lbl_fn_806649C0_00002390
    mr r3, r28
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806649C0_00002408
lbl_fn_806649C0_00002390:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x70
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r28
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806649C0_00002408:
    cntlzw r3, r0
    li r0, -0x2
    extrwi r3, r3, 1, 26
    neg r3, r3
    and r4, r0, r3
    b lbl_fn_806649C0_0000242C
    li r4, 0x0
    li r0, 0x0
    stb r0, 0xbac(r30)
lbl_fn_806649C0_0000242C:
    lbz r0, 0xbac(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806649C0_00002440
    cmpwi r4, 0x0
    beq lbl_fn_806649C0_00002464
lbl_fn_806649C0_00002440:
    lwz r12, 0xba0(r30)
    li r0, 0x0
    stb r0, 0x934(r30)
    cmpwi r12, 0x0
    stw r0, 0xba0(r30)
    beq lbl_fn_806649C0_00002464
    mr r3, r29
    mtctr r12
    bctrl
lbl_fn_806649C0_00002464:
    lwz r0, 0x3b4(r1)
    lwz r31, 0x3ac(r1)
    lwz r30, 0x3a8(r1)
    lwz r29, 0x3a4(r1)
    lwz r28, 0x3a0(r1)
    mtlr r0
    addi r1, r1, 0x3b0
    blr
}

asm void fn_80665B30(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lis r6, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    mr r27, r3
    lwzx r29, r6, r0
    mr r31, r4
    mr r28, r5
    bl OSDisableInterrupts
    lwz r0, 0xba0(r29)
    mr r30, r3
    lbz r4, 0x905(r29)
    cmpwi r0, 0x0
    lbz r5, 0x906(r29)
    lwz r26, 0x900(r29)
    lwz r3, 0x920(r29)
    beq lbl_fn_80665B30_000024EC
    li r0, 0x1
    b lbl_fn_80665B30_000024F0
lbl_fn_80665B30_000024EC:
    lbz r0, 0x934(r29)
lbl_fn_80665B30_000024F0:
    cmpwi r26, -0x1
    beq lbl_fn_80665B30_000027B8
    cmpwi r3, 0x0
    beq lbl_fn_80665B30_00002508
    cmpwi r0, 0x0
    beq lbl_fn_80665B30_00002510
lbl_fn_80665B30_00002508:
    li r26, -0x2
    b lbl_fn_80665B30_000027B8
lbl_fn_80665B30_00002510:
    lbz r0, 0x946(r29)
    extsb. r0, r0
    bge lbl_fn_80665B30_00002524
    li r26, -0x4
    b lbl_fn_80665B30_000027B8
lbl_fn_80665B30_00002524:
    cmplw r31, r5
    bne lbl_fn_80665B30_00002534
    li r26, 0x0
    b lbl_fn_80665B30_000027B8
lbl_fn_80665B30_00002534:
    subi r0, r4, 0x5
    cmplwi r0, 0x2
    ble lbl_fn_80665B30_00002548
    cmplwi r4, 0xfa
    bne lbl_fn_80665B30_00002558
lbl_fn_80665B30_00002548:
    cmpwi r31, 0x0
    beq lbl_fn_80665B30_00002584
    cmplwi r31, 0x80
    beq lbl_fn_80665B30_00002584
lbl_fn_80665B30_00002558:
    subi r0, r4, 0x5
    cmplwi r0, 0x2
    ble lbl_fn_80665B30_000027B4
    cmplwi r4, 0xfa
    beq lbl_fn_80665B30_000027B4
    cmplwi r31, 0x4
    beq lbl_fn_80665B30_00002584
    cmplwi r31, 0x5
    beq lbl_fn_80665B30_00002584
    cmplwi r31, 0x7
    bne lbl_fn_80665B30_000027B4
lbl_fn_80665B30_00002584:
    cmplwi r31, 0x80
    bne lbl_fn_80665B30_000025A0
    lbz r0, 0xbad(r29)
    cmplwi r0, 0xc8
    bge lbl_fn_80665B30_000025A0
    li r26, -0x2
    b lbl_fn_80665B30_000027B8
lbl_fn_80665B30_000025A0:
    stb r31, 0x938(r29)
    li r0, 0x4
    cmpwi r31, 0x0
    stb r0, 0x937(r29)
    beq lbl_fn_80665B30_000025C0
    cmpwi r31, 0x80
    beq lbl_fn_80665B30_000025D8
    b lbl_fn_80665B30_000025F0
lbl_fn_80665B30_000025C0:
    li r0, 0x2
    stb r0, 0xbac(r29)
    lis r3, 0x4a4
    addi r0, r3, 0xfe
    stw r0, 0xba8(r29)
    b lbl_fn_80665B30_00002604
lbl_fn_80665B30_000025D8:
    li r0, 0x5
    stb r0, 0xbac(r29)
    lis r3, 0x4a4
    addi r0, r3, 0xfe
    stw r0, 0xba8(r29)
    b lbl_fn_80665B30_00002604
lbl_fn_80665B30_000025F0:
    li r0, 0x1
    stb r0, 0xbac(r29)
    lis r3, 0x4a6
    addi r0, r3, 0xfe
    stw r0, 0xba8(r29)
lbl_fn_80665B30_00002604:
    lwz r3, 0xba8(r29)
    lis r6, fn_806649C0@ha
    addi r6, r6, fn_806649C0@l
    li r8, 0x2
    li r7, 0x17
    li r0, 0x6
    stw r3, 0xc(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0xc
    li r5, 0x4
    sth r8, 0x8(r1)
    stw r7, 0x10(r1)
    sth r0, 0x2a(r1)
    stw r6, 0x3c(r1)
    bl memcpy
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    lhz r0, 0x8(r1)
    addi r31, r29, 0x935
    sth r0, 0x30(r1)
    lwz r12, 0xc(r1)
    lwz r11, 0x10(r1)
    lwz r10, 0x14(r1)
    lwz r9, 0x18(r1)
    lwz r8, 0x1c(r1)
    lwz r7, 0x20(r1)
    lwz r6, 0x24(r1)
    lwz r5, 0x28(r1)
    lwz r4, 0x30(r1)
    lwz r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r31, 0x2c(r1)
    stw r12, 0x34(r1)
    stw r11, 0x40(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r31, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r12, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_fn_80665B30_000026EC
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_fn_80665B30_000026EC:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_fn_80665B30_00002710
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_80665B30_00002788
lbl_fn_80665B30_00002710:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x40
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_80665B30_00002788:
    cmpwi r0, 0x0
    bne lbl_fn_80665B30_00002798
    li r26, -0x2
    b lbl_fn_80665B30_000027B8
lbl_fn_80665B30_00002798:
    li r0, 0x1
    stb r0, 0x934(r29)
    mr r3, r30
    stw r28, 0xba0(r29)
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80665B30_000027E0
lbl_fn_80665B30_000027B4:
    li r26, -0x4
lbl_fn_80665B30_000027B8:
    mr r3, r30
    bl OSRestoreInterrupts
    cmpwi r28, 0x0
    beq lbl_fn_80665B30_000027DC
    mr r12, r28
    mr r3, r27
    mr r4, r26
    mtctr r12
    bctrl
lbl_fn_80665B30_000027DC:
    mr r3, r26
lbl_fn_80665B30_000027E0:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80665EA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80829DF0@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwzx r31, r6, r0
    bl OSDisableInterrupts
    cmpwi r29, 0x0
    beq lbl_fn_80665EA0_000028B4
    cmpwi r30, 0x0
    beq lbl_fn_80665EA0_000028B4
    lwz r4, 0x8a0(r31)
    lwz r0, 0x8a4(r31)
    stw r0, 0x4(r29)
    stw r4, 0x0(r29)
    lwz r4, 0x8a8(r31)
    lwz r0, 0x8ac(r31)
    stw r0, 0xc(r29)
    stw r4, 0x8(r29)
    lwz r4, 0x8b0(r31)
    lwz r0, 0x8b4(r31)
    stw r0, 0x14(r29)
    stw r4, 0x10(r29)
    lwz r0, 0x8b8(r31)
    stw r0, 0x18(r29)
    lwz r4, 0x8bc(r31)
    lwz r0, 0x8c0(r31)
    stw r0, 0x4(r30)
    stw r4, 0x0(r30)
    lwz r4, 0x8c4(r31)
    lwz r0, 0x8c8(r31)
    stw r0, 0xc(r30)
    stw r4, 0x8(r30)
    lwz r4, 0x8cc(r31)
    lwz r0, 0x8d0(r31)
    stw r0, 0x14(r30)
    stw r4, 0x10(r30)
    lwz r0, 0x8d4(r31)
    stw r0, 0x18(r30)
lbl_fn_80665EA0_000028B4:
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80665F80(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r8, 0x12
    li r7, 0x2
    stw r0, 0x84(r1)
    neg r0, r5
    or r5, r0, r5
    cmplwi r4, 0x14
    stw r31, 0x7c(r1)
    li r0, 0x4
    srawi r5, r5, 31
    stw r30, 0x78(r1)
    andc r0, r0, r5
    mr r30, r3
    stw r29, 0x74(r1)
    stw r8, 0x38(r1)
    sth r7, 0x52(r1)
    stb r0, 0x3c(r1)
    stw r6, 0x64(r1)
    bgt lbl_fn_80665F80_00002A34
    lis r3, jumptable_807B94D4@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_807B94D4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x30
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x31
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x33
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x32
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x35
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x32
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x35
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x3e
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x32
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x35
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x35
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x34
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x35
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_fn_80665F80_00002A34
    li r0, 0x37
    stb r0, 0x3d(r1)
lbl_fn_80665F80_00002A34:
    lwz r31, 0x38(r1)
    lwz r12, 0x3c(r1)
    lwz r11, 0x40(r1)
    lwz r10, 0x44(r1)
    lwz r9, 0x48(r1)
    lwz r8, 0x4c(r1)
    lwz r7, 0x50(r1)
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r31, 0x8(r1)
    stw r12, 0xc(r1)
    stw r11, 0x10(r1)
    stw r10, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x0(r30)
    lbz r0, 0x1(r30)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_80665F80_00002AC0
    lwz r0, 0x8(r30)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_80665F80_00002AC0:
    bl OSRestoreInterrupts
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_80665F80_00002AE4
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80665F80_00002B5C
lbl_fn_80665F80_00002AE4:
    lbz r0, 0x1(r30)
    li r4, 0x0
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x1(r30)
    addi r4, r1, 0x8
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x1(r30)
    mr r3, r31
    lwz r4, 0x8(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x1(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_80665F80_00002B5C:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80666220(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r8, 0x1
    li r7, 0x16
    stw r0, 0x84(r1)
    li r0, 0x15
    stw r31, 0x7c(r1)
    mr r31, r3
    addi r3, r1, 0x14
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stb r4, 0x8(r1)
    addi r4, r1, 0xc
    stw r5, 0xc(r1)
    li r5, 0x4
    stb r8, 0x9(r1)
    stw r7, 0x10(r1)
    sth r0, 0x2a(r1)
    stw r6, 0x3c(r1)
    bl memcpy
    addi r3, r1, 0x18
    addi r4, r1, 0x9
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x19
    addi r4, r1, 0x8
    li r5, 0x1
    bl memcpy
    lwz r30, 0x10(r1)
    lwz r12, 0x14(r1)
    lwz r11, 0x18(r1)
    lwz r10, 0x1c(r1)
    lwz r9, 0x20(r1)
    lwz r8, 0x24(r1)
    lwz r7, 0x28(r1)
    lwz r6, 0x2c(r1)
    lwz r5, 0x30(r1)
    lwz r4, 0x34(r1)
    lwz r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r12, 0x44(r1)
    stw r11, 0x48(r1)
    stw r10, 0x4c(r1)
    stw r9, 0x50(r1)
    stw r8, 0x54(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x0(r31)
    lbz r0, 0x1(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_80666220_00002C7C
    lwz r0, 0x8(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_80666220_00002C7C:
    bl OSRestoreInterrupts
    lwz r3, 0x8(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_80666220_00002CA0
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80666220_00002D18
lbl_fn_80666220_00002CA0:
    lbz r0, 0x1(r31)
    li r4, 0x0
    lwz r3, 0x4(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x1(r31)
    addi r4, r1, 0x40
    lwz r3, 0x4(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x1(r31)
    mr r3, r30
    lwz r4, 0x8(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x1(r31)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_80666220_00002D18:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806663E0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    clrlwi r9, r5, 27
    li r8, 0x16
    stw r0, 0x84(r1)
    li r0, 0x15
    stw r31, 0x7c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r1, 0x44
    stw r29, 0x74(r1)
    mr r29, r5
    li r5, 0x4
    stw r6, 0x8(r1)
    stb r9, 0xc(r1)
    stw r8, 0x40(r1)
    sth r0, 0x5a(r1)
    stw r7, 0x6c(r1)
    bl memcpy
    addi r3, r1, 0x48
    addi r4, r1, 0xc
    li r5, 0x1
    bl memcpy
    mr r4, r31
    mr r5, r29
    addi r3, r1, 0x49
    bl memcpy
    lwz r31, 0x40(r1)
    lwz r12, 0x44(r1)
    lwz r11, 0x48(r1)
    lwz r10, 0x4c(r1)
    lwz r9, 0x50(r1)
    lwz r8, 0x54(r1)
    lwz r7, 0x58(r1)
    lwz r6, 0x5c(r1)
    lwz r5, 0x60(r1)
    lwz r4, 0x64(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r31, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x0(r30)
    lbz r0, 0x1(r30)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_806663E0_00002E40
    lwz r0, 0x8(r30)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_806663E0_00002E40:
    bl OSRestoreInterrupts
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_806663E0_00002E64
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_806663E0_00002EDC
lbl_fn_806663E0_00002E64:
    lbz r0, 0x1(r30)
    li r4, 0x0
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x1(r30)
    addi r4, r1, 0x10
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x1(r30)
    mr r3, r31
    lwz r4, 0x8(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x1(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_806663E0_00002EDC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806665A0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    li r0, 0x6
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r1, 0x44
    stw r29, 0x74(r1)
    mr r29, r4
    addi r4, r1, 0xc
    sth r5, 0x8(r1)
    li r5, 0x17
    stw r5, 0x40(r1)
    li r5, 0x4
    stw r6, 0xc(r1)
    sth r0, 0x5a(r1)
    stw r7, 0x6c(r1)
    bl memcpy
    addi r3, r1, 0x48
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    lhz r0, 0x8(r1)
    sth r0, 0x60(r1)
    lwz r12, 0xc(r1)
    lwz r11, 0x40(r1)
    lwz r10, 0x44(r1)
    lwz r9, 0x48(r1)
    lwz r8, 0x4c(r1)
    lwz r7, 0x50(r1)
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x60(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r29, 0x5c(r1)
    stw r12, 0x64(r1)
    stw r11, 0x10(r1)
    stw r10, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r29, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r12, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x0(r30)
    lbz r0, 0x1(r30)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_806665A0_00002FF4
    lwz r0, 0x8(r30)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_806665A0_00002FF4:
    bl OSRestoreInterrupts
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_806665A0_00003018
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_806665A0_00003090
lbl_fn_806665A0_00003018:
    lbz r0, 0x1(r30)
    li r4, 0x0
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x1(r30)
    addi r4, r1, 0x10
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x1(r30)
    mr r3, r31
    lwz r4, 0x8(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x1(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_806665A0_00003090:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80666750(void)
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
    lbz r4, 0x0(r29)
    lbz r0, 0x1(r29)
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_fn_80666750_000030F4
    lwz r0, 0x8(r29)
    add r0, r31, r0
    extsb r31, r0
lbl_fn_80666750_000030F4:
    bl OSRestoreInterrupts
    lwz r3, 0x8(r29)
    extsb r0, r30
    add r4, r31, r0
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_fn_80666750_00003118
    li r3, 0x1
    b lbl_fn_80666750_0000311C
lbl_fn_80666750_00003118:
    li r3, 0x0
lbl_fn_80666750_0000311C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806667E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x8(r30)
    li r4, 0x0
    mr r31, r3
    stb r4, 0x0(r30)
    mulli r5, r0, 0x30
    lwz r3, 0x4(r30)
    stb r4, 0x1(r30)
    li r4, 0x0
    bl memset
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80666840(void)
{
    nofralloc
    lwz r3, lbl_80880258
    blr
}

asm void fn_80666850(void)
{
    nofralloc
    stw r3, lbl_80880258
    blr
}

asm void fn_80666860(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    li r5, 0x48
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, -0x1
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwzx r29, r4, r0
    li r4, 0x0
    stb r30, 0x946(r29)
    addi r3, r29, 0x94c
    stb r31, 0x945(r29)
    stb r30, 0x944(r29)
    stb r30, 0x947(r29)
    sth r31, 0x942(r29)
    stb r31, 0x93f(r29)
    sth r31, 0x940(r29)
    bl memset
    addi r3, r29, 0x994
    li r4, 0x0
    li r5, 0x48
    bl memset
    addi r3, r29, 0x9dc
    li r4, 0x0
    li r5, 0x108
    bl memset
    li r3, 0x1
    stw r3, 0x9dc(r29)
    li r0, 0xfc
    stw r3, 0x994(r29)
    stw r3, 0x94c(r29)
    stb r31, 0x93e(r29)
    stb r30, 0xbae(r29)
    stb r0, 0x905(r29)
    lwz r12, 0x8e4(r29)
    cmpwi r12, 0x0
    beq lbl_fn_80666860_00003280
    mr r3, r28
    li r4, 0xfc
    mtctr r12
    bctrl
lbl_fn_80666860_00003280:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80666940(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_25
    lis r4, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    lwzx r25, r4, r0
    bl OSGetTime
    lis r27, lbl_807650B8@ha
    mr r26, r4
    addi r3, r27, lbl_807650B8@l
    bl fn_8066E3D0
    lis r4, 0x431c
    mr r28, r3
    subi r30, r4, 0x217d
    li r29, 0x9
    lis r31, 0x8000
lbl_fn_80666940_000032EC:
    addi r3, r25, 0x9dc
    bl fn_8066E3D0
    cmpw r3, r28
    ble lbl_fn_80666940_00003338
    subf r5, r28, r3
    addi r3, r1, 0x8
    addi r4, r27, lbl_807650B8@l
    subi r5, r5, 0x1
    bl fn_8066E100
    addi r3, r25, 0x9dc
    addi r4, r1, 0x8
    bl fn_8066E080
    cmpwi r3, 0x0
    blt lbl_fn_80666940_00003370
    addi r3, r25, 0x9dc
    addi r5, r1, 0x8
    mr r4, r3
    bl fn_8066E4B0
    b lbl_fn_80666940_00003370
lbl_fn_80666940_00003338:
    addi r3, r25, 0x9dc
    addi r4, r27, lbl_807650B8@l
    bl fn_8066E080
    cmpwi r3, 0x0
    blt lbl_fn_80666940_0000335C
    addi r3, r25, 0x9dc
    addi r5, r27, lbl_807650B8@l
    mr r4, r3
    bl fn_8066E4B0
lbl_fn_80666940_0000335C:
    addi r3, r25, 0x94c
    addi r4, r25, 0x9dc
    li r5, 0x48
    bl memcpy
    stb r29, 0x947(r25)
lbl_fn_80666940_00003370:
    bl OSGetTime
    lwz r0, 0xf8(r31)
    subf r3, r26, r4
    slwi r3, r3, 3
    srwi r0, r0, 2
    mulhwu r0, r30, r0
    srwi r0, r0, 15
    divwu r0, r3, r0
    cmplwi r0, 0x50
    blt lbl_fn_80666940_000032EC
    li r0, 0x0
    stb r0, 0x945(r25)
    addi r11, r1, 0x130
    sth r0, 0x942(r25)
    bl _restgpr_25
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80666A60(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_25
    lis r4, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    lwzx r25, r4, r0
    bl OSGetTime
    lis r27, lbl_807650B8@ha
    mr r26, r4
    addi r3, r27, lbl_807650B8@l
    bl fn_8066E3D0
    lis r4, 0x431c
    mr r28, r3
    subi r30, r4, 0x217d
    li r29, 0xb
    lis r31, 0x8000
lbl_fn_80666A60_0000340C:
    addi r3, r25, 0x9dc
    bl fn_8066E3D0
    cmpw r3, r28
    ble lbl_fn_80666A60_00003458
    subf r5, r28, r3
    addi r3, r1, 0x8
    addi r4, r27, lbl_807650B8@l
    subi r5, r5, 0x1
    bl fn_8066E100
    addi r3, r25, 0x9dc
    addi r4, r1, 0x8
    bl fn_8066E080
    cmpwi r3, 0x0
    blt lbl_fn_80666A60_00003490
    addi r3, r25, 0x9dc
    addi r5, r1, 0x8
    mr r4, r3
    bl fn_8066E4B0
    b lbl_fn_80666A60_00003490
lbl_fn_80666A60_00003458:
    addi r3, r25, 0x9dc
    addi r4, r27, lbl_807650B8@l
    bl fn_8066E080
    cmpwi r3, 0x0
    blt lbl_fn_80666A60_0000347C
    addi r3, r25, 0x9dc
    addi r5, r27, lbl_807650B8@l
    mr r4, r3
    bl fn_8066E4B0
lbl_fn_80666A60_0000347C:
    addi r3, r25, 0x994
    addi r4, r25, 0x9dc
    li r5, 0x48
    bl memcpy
    stb r29, 0x947(r25)
lbl_fn_80666A60_00003490:
    bl OSGetTime
    lwz r0, 0xf8(r31)
    subf r3, r26, r4
    slwi r3, r3, 3
    srwi r0, r0, 2
    mulhwu r0, r30, r0
    srwi r0, r0, 15
    divwu r0, r3, r0
    cmplwi r0, 0x50
    blt lbl_fn_80666A60_0000340C
    li r0, 0x0
    stb r0, 0x945(r25)
    addi r11, r1, 0x130
    sth r0, 0x942(r25)
    bl _restgpr_25
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80666B80(void)
{
    nofralloc
    lis r5, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    cmpwi r4, 0x0
    lwzx r6, r5, r0
    li r5, 0x0
    stb r5, 0x945(r6)
    bne lbl_fn_80666B80_00003524
    lbz r0, 0x944(r6)
    li r3, 0x2328
    extsb. r0, r0
    bne lbl_fn_80666B80_00003514
    li r3, 0x3e8
lbl_fn_80666B80_00003514:
    sth r3, 0x942(r6)
    li r0, 0x4
    stb r0, 0x947(r6)
    blr
lbl_fn_80666B80_00003524:
    lbz r4, 0x93f(r6)
    cmpwi r4, 0x0
    addi r0, r4, 0x1
    stb r0, 0x93f(r6)
    beqlr
    sth r5, 0x942(r6)
    b fn_80666860
    blr
}

asm void fn_80666BF0(void)
{
    nofralloc
    lis r5, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    cmpwi r4, 0x0
    lwzx r6, r5, r0
    li r5, 0x0
    stb r5, 0x945(r6)
    bne lbl_fn_80666BF0_00003600
    sth r5, 0x942(r6)
    lbz r4, 0x93f(r6)
    addi r0, r4, 0x1
    stb r0, 0x93f(r6)
    lbz r0, 0x947(r6)
    extsb. r0, r0
    bne lbl_fn_80666BF0_000035D4
    lbz r0, 0xba5(r6)
    cmplwi r0, 0x4
    bgt lbl_fn_80666BF0_0000359C
    stb r5, 0x93f(r6)
lbl_fn_80666BF0_0000359C:
    lbz r0, 0xba5(r6)
    cmplwi r0, 0xc
    bgt lbl_fn_80666BF0_000035B8
    li r0, 0x157c
    sth r0, 0x942(r6)
    li r0, 0x0
    stb r0, 0x93f(r6)
lbl_fn_80666BF0_000035B8:
    lbz r0, 0xba5(r6)
    cmplwi r0, 0xe
    bne lbl_fn_80666BF0_000035D4
    li r0, 0x1
    stb r0, 0x947(r6)
    li r0, 0x0
    stb r0, 0x93f(r6)
lbl_fn_80666BF0_000035D4:
    lbz r0, 0x947(r6)
    cmpwi r0, 0x4
    bne lbl_fn_80666BF0_00003614
    lbz r0, 0xba5(r6)
    cmplwi r0, 0x1a
    bne lbl_fn_80666BF0_00003614
    li r0, 0x5
    stb r0, 0x947(r6)
    li r0, 0x0
    stb r0, 0x93f(r6)
    b lbl_fn_80666BF0_00003614
lbl_fn_80666BF0_00003600:
    li r0, 0x3e8
    sth r0, 0x942(r6)
    lbz r4, 0x93f(r6)
    addi r0, r4, 0x4
    stb r0, 0x93f(r6)
lbl_fn_80666BF0_00003614:
    lbz r0, 0x93f(r6)
    cmplwi r0, 0x64
    blelr
    b fn_80666860
    blr
}

asm void fn_80666CD0(void)
{
    nofralloc
    lis r5, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    cmpwi r4, 0x0
    lwzx r4, r5, r0
    li r6, 0x0
    stb r6, 0x945(r4)
    bne lbl_fn_80666CD0_00003774
    mr r9, r4
    li r10, 0x0
    b lbl_fn_80666CD0_0000369C
lbl_fn_80666CD0_0000365C:
    lbz r0, 0x93e(r4)
    lwz r3, 0x948(r4)
    srwi r0, r0, 2
    lbz r7, 0xb2e(r9)
    add r0, r10, r0
    lbz r6, 0xb2d(r9)
    slwi r0, r0, 2
    lbz r8, 0xb2f(r9)
    lbz r5, 0xb2c(r9)
    add r3, r3, r0
    rlwimi r5, r6, 8, 16, 23
    addi r9, r9, 0x4
    rlwimi r5, r7, 16, 8, 15
    addi r10, r10, 0x1
    rlwimi r5, r8, 24, 0, 7
    stw r5, 0x4(r3)
lbl_fn_80666CD0_0000369C:
    lhz r0, 0xb78(r4)
    srwi r0, r0, 2
    cmplw r10, r0
    blt lbl_fn_80666CD0_0000365C
    li r5, 0x0
    stb r5, 0x93f(r4)
    lbz r3, 0x93e(r4)
    lhz r0, 0xb78(r4)
    add r0, r3, r0
    stb r0, 0x93e(r4)
    clrlwi r0, r0, 24
    cmplwi r0, 0x40
    bge lbl_fn_80666CD0_000036D8
    sth r5, 0x942(r4)
    blr
lbl_fn_80666CD0_000036D8:
    li r0, 0x4
    li r7, 0x0
    li r5, 0x0
    mtctr r0
lbl_fn_80666CD0_000036E8:
    lwz r6, 0x948(r4)
    add r3, r6, r5
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80666CD0_00003704
    addi r0, r7, 0x1
    stw r0, 0x0(r6)
lbl_fn_80666CD0_00003704:
    lwz r6, 0x948(r4)
    addi r5, r5, 0x4
    add r3, r6, r5
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80666CD0_00003724
    addi r0, r7, 0x2
    stw r0, 0x0(r6)
lbl_fn_80666CD0_00003724:
    lwz r6, 0x948(r4)
    addi r5, r5, 0x4
    add r3, r6, r5
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80666CD0_00003744
    addi r0, r7, 0x3
    stw r0, 0x0(r6)
lbl_fn_80666CD0_00003744:
    lwz r6, 0x948(r4)
    addi r5, r5, 0x4
    add r3, r6, r5
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80666CD0_00003764
    addi r0, r7, 0x4
    stw r0, 0x0(r6)
lbl_fn_80666CD0_00003764:
    addi r5, r5, 0x4
    addi r7, r7, 0x4
    bdnz lbl_fn_80666CD0_000036E8
    blr
lbl_fn_80666CD0_00003774:
    lbz r5, 0x93f(r4)
    cmplwi r5, 0x1
    addi r0, r5, 0x1
    stb r0, 0x93f(r4)
    bge lbl_fn_80666CD0_00003790
    sth r6, 0x942(r4)
    blr
lbl_fn_80666CD0_00003790:
    b fn_80666860
    blr
}

asm void fn_80666E40(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0xd4(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0xcc(r1)
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    mr r29, r3
    stw r28, 0xc0(r1)
    lwzx r30, r4, r0
    lbz r0, 0x93e(r30)
    cmplwi r0, 0x40
    bge lbl_fn_80666E40_00003970
    addi r0, r30, 0x9dc
    stw r0, 0x948(r30)
    lis r6, fn_80666CD0@ha
    li r3, 0x40
    lbz r4, 0x93e(r30)
    addi r6, r6, fn_80666CD0@l
    li r7, 0x17
    li r0, 0x6
    addis r4, r4, 0x4a4
    sth r3, 0x8(r1)
    addi r4, r4, 0x50
    addi r3, r1, 0x44
    stw r4, 0xc(r1)
    addi r4, r1, 0xc
    li r5, 0x4
    stw r7, 0x40(r1)
    sth r0, 0x5a(r1)
    stw r6, 0x6c(r1)
    bl memcpy
    addi r3, r1, 0x48
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    lhz r0, 0x8(r1)
    addi r31, r30, 0xb2c
    sth r0, 0x60(r1)
    lwz r12, 0xc(r1)
    lwz r11, 0x40(r1)
    lwz r10, 0x44(r1)
    lwz r9, 0x48(r1)
    lwz r8, 0x4c(r1)
    lwz r7, 0x50(r1)
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x60(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r31, 0x5c(r1)
    stw r12, 0x64(r1)
    stw r11, 0x10(r1)
    stw r10, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r31, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r12, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x5ec(r30)
    lbz r0, 0x5ed(r30)
    subf r0, r4, r0
    extsb. r28, r0
    bge lbl_fn_80666E40_000038D4
    lwz r0, 0x5f4(r30)
    add r0, r28, r0
    extsb r28, r0
lbl_fn_80666E40_000038D4:
    bl OSRestoreInterrupts
    lwz r3, 0x5f4(r30)
    subi r0, r3, 0x1
    cmplw r0, r28
    bne lbl_fn_80666E40_000038F4
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_80666E40_00003968
lbl_fn_80666E40_000038F4:
    lbz r0, 0x5ed(r30)
    li r4, 0x0
    lwz r3, 0x5f0(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x5ed(r30)
    addi r4, r1, 0x10
    lwz r3, 0x5f0(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x5ed(r30)
    mr r3, r31
    lwz r4, 0x5f4(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x5ed(r30)
    bl OSRestoreInterrupts
lbl_fn_80666E40_00003968:
    li r3, 0x0
    b lbl_fn_80666E40_00003980
lbl_fn_80666E40_00003970:
    li r0, 0x0
    stb r0, 0x945(r30)
    li r3, 0x1
    stb r0, 0x93e(r30)
lbl_fn_80666E40_00003980:
    cmpwi r3, 0x0
    beq lbl_fn_80666E40_00003A64
    lis r3, lbl_807650B8@ha
    li r0, 0x9
    addi r3, r3, lbl_807650B8@l
    addi r5, r1, 0x6c
    subi r4, r3, 0x4
    mtctr r0
lbl_fn_80666E40_000039A0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80666E40_000039A0
    lwz r3, 0x74(r1)
    subi r0, r3, 0x1
    stw r0, 0x74(r1)
    lwz r0, 0x9dc(r30)
    cmplwi r0, 0x1
    bgt lbl_fn_80666E40_000039D8
    lwz r0, 0x9e0(r30)
    cmplwi r0, 0x1
    ble lbl_fn_80666E40_00003A5C
lbl_fn_80666E40_000039D8:
    lbz r0, 0x944(r30)
    extsb. r0, r0
    beq lbl_fn_80666E40_000039FC
    lis r4, lbl_807650B8@ha
    addi r3, r30, 0x9dc
    addi r4, r4, lbl_807650B8@l
    bl fn_8066E080
    cmpwi r3, -0x1
    beq lbl_fn_80666E40_00003A1C
lbl_fn_80666E40_000039FC:
    lbz r0, 0x944(r30)
    extsb. r0, r0
    bne lbl_fn_80666E40_00003A5C
    addi r3, r30, 0x9dc
    addi r4, r1, 0x70
    bl fn_8066E080
    cmpwi r3, -0x1
    bne lbl_fn_80666E40_00003A5C
lbl_fn_80666E40_00003A1C:
    addi r3, r30, 0x9dc
    addi r4, r30, 0x994
    bl fn_8066E080
    cmpwi r3, 0x0
    bne lbl_fn_80666E40_00003A5C
    addi r3, r30, 0x9dc
    li r4, 0x0
    li r5, 0x108
    bl memset
    li r0, 0x1
    stw r0, 0x9dc(r30)
    li r3, 0x7
    stb r3, 0x947(r30)
    li r0, 0x0
    sth r0, 0x942(r30)
    b lbl_fn_80666E40_00003A64
lbl_fn_80666E40_00003A5C:
    mr r3, r29
    bl fn_80666860
lbl_fn_80666E40_00003A64:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r28, 0xc0(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80667130(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x2d0
    bl _savegpr_27
    lis r5, lbl_80829DF0@ha
    slwi r8, r3, 2
    addi r5, r5, lbl_80829DF0@l
    mr r27, r3
    lwzx r28, r5, r8
    lbz r0, 0x946(r28)
    extsb. r0, r0
    bne lbl_fn_80667130_0000477C
    lbz r0, 0x947(r28)
    extsb. r0, r0
    blt lbl_fn_80667130_0000477C
    lwz r0, 0x840(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80667130_0000477C
    lbz r0, 0x945(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80667130_00004758
    lha r4, 0x942(r28)
    cmpwi r4, 0x0
    subi r0, r4, 0x1
    sth r0, 0x942(r28)
    bge lbl_fn_80667130_00004758
    li r31, 0x1
    stb r31, 0x945(r28)
    lbz r0, 0x947(r28)
    extsb r0, r0
    cmplwi r0, 0xb
    bgt lbl_fn_80667130_00004758
    lis r4, jumptable_807B9528@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807B9528@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lis r3, 0x4a4
    lis r6, fn_80666BF0@ha
    addi r3, r3, 0xf7
    li r7, 0x17
    addi r6, r6, fn_80666BF0@l
    li r0, 0x6
    stw r3, 0x28(r1)
    addi r3, r1, 0x244
    lwzx r30, r5, r8
    addi r4, r1, 0x28
    sth r31, 0x12(r1)
    li r5, 0x4
    stw r7, 0x240(r1)
    sth r0, 0x25a(r1)
    stw r6, 0x26c(r1)
    bl memcpy
    addi r3, r1, 0x248
    addi r4, r1, 0x12
    li r5, 0x2
    bl memcpy
    lhz r0, 0x12(r1)
    addi r29, r30, 0xba5
    sth r0, 0x260(r1)
    lwz r12, 0x28(r1)
    lwz r11, 0x240(r1)
    lwz r10, 0x244(r1)
    lwz r9, 0x248(r1)
    lwz r8, 0x24c(r1)
    lwz r7, 0x250(r1)
    lwz r6, 0x254(r1)
    lwz r5, 0x258(r1)
    lwz r4, 0x260(r1)
    lwz r3, 0x268(r1)
    lwz r0, 0x26c(r1)
    stw r29, 0x25c(r1)
    stw r12, 0x264(r1)
    stw r11, 0x210(r1)
    stw r10, 0x214(r1)
    stw r9, 0x218(r1)
    stw r8, 0x21c(r1)
    stw r7, 0x220(r1)
    stw r6, 0x224(r1)
    stw r5, 0x228(r1)
    stw r29, 0x22c(r1)
    stw r4, 0x230(r1)
    stw r12, 0x234(r1)
    stw r3, 0x238(r1)
    stw r0, 0x23c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x5ec(r30)
    lbz r0, 0x5ed(r30)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_80667130_00003C18
    lwz r0, 0x5f4(r30)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_80667130_00003C18:
    bl OSRestoreInterrupts
    lwz r3, 0x5f4(r30)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_80667130_00003C38
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_80667130_00004758
lbl_fn_80667130_00003C38:
    lbz r0, 0x5ed(r30)
    li r4, 0x0
    lwz r3, 0x5f0(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x5ed(r30)
    addi r4, r1, 0x210
    lwz r3, 0x5f0(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x5ed(r30)
    mr r3, r31
    lwz r4, 0x5f4(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x5ed(r30)
    bl OSRestoreInterrupts
    b lbl_fn_80667130_00004758
    lwzx r29, r5, r8
    lbz r0, 0x93e(r29)
    cmplwi r0, 0x40
    bge lbl_fn_80667130_00003E54
    addi r0, r29, 0x94c
    stw r0, 0x948(r29)
    lis r6, fn_80666CD0@ha
    li r3, 0x40
    lbz r4, 0x93e(r29)
    addi r6, r6, fn_80666CD0@l
    li r7, 0x17
    li r0, 0x6
    addis r4, r4, 0x4a4
    sth r3, 0x10(r1)
    addi r4, r4, 0x50
    addi r3, r1, 0x1b4
    stw r4, 0x24(r1)
    addi r4, r1, 0x24
    li r5, 0x4
    stw r7, 0x1b0(r1)
    sth r0, 0x1ca(r1)
    stw r6, 0x1dc(r1)
    bl memcpy
    addi r3, r1, 0x1b8
    addi r4, r1, 0x10
    li r5, 0x2
    bl memcpy
    lhz r0, 0x10(r1)
    addi r30, r29, 0xb2c
    sth r0, 0x1d0(r1)
    lwz r12, 0x24(r1)
    lwz r11, 0x1b0(r1)
    lwz r10, 0x1b4(r1)
    lwz r9, 0x1b8(r1)
    lwz r8, 0x1bc(r1)
    lwz r7, 0x1c0(r1)
    lwz r6, 0x1c4(r1)
    lwz r5, 0x1c8(r1)
    lwz r4, 0x1d0(r1)
    lwz r3, 0x1d8(r1)
    lwz r0, 0x1dc(r1)
    stw r30, 0x1cc(r1)
    stw r12, 0x1d4(r1)
    stw r11, 0x1e0(r1)
    stw r10, 0x1e4(r1)
    stw r9, 0x1e8(r1)
    stw r8, 0x1ec(r1)
    stw r7, 0x1f0(r1)
    stw r6, 0x1f4(r1)
    stw r5, 0x1f8(r1)
    stw r30, 0x1fc(r1)
    stw r4, 0x200(r1)
    stw r12, 0x204(r1)
    stw r3, 0x208(r1)
    stw r0, 0x20c(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x5ec(r29)
    lbz r0, 0x5ed(r29)
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_fn_80667130_00003DB8
    lwz r0, 0x5f4(r29)
    add r0, r31, r0
    extsb r31, r0
lbl_fn_80667130_00003DB8:
    bl OSRestoreInterrupts
    lwz r3, 0x5f4(r29)
    subi r0, r3, 0x1
    cmplw r0, r31
    bne lbl_fn_80667130_00003DD8
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80667130_00003E4C
lbl_fn_80667130_00003DD8:
    lbz r0, 0x5ed(r29)
    li r4, 0x0
    lwz r3, 0x5f0(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x5ed(r29)
    addi r4, r1, 0x1e0
    lwz r3, 0x5f0(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x5ed(r29)
    mr r3, r30
    lwz r4, 0x5f4(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x5ed(r29)
    bl OSRestoreInterrupts
lbl_fn_80667130_00003E4C:
    li r3, 0x0
    b lbl_fn_80667130_00003E64
lbl_fn_80667130_00003E54:
    li r0, 0x0
    stb r0, 0x945(r29)
    li r3, 0x1
    stb r0, 0x93e(r29)
lbl_fn_80667130_00003E64:
    cmpwi r3, 0x0
    beq lbl_fn_80667130_00004758
    lwz r0, 0x94c(r29)
    cmplwi r0, 0x1
    bgt lbl_fn_80667130_00003E84
    lwz r0, 0x950(r29)
    cmplwi r0, 0x1
    ble lbl_fn_80667130_00003EB0
lbl_fn_80667130_00003E84:
    lis r4, lbl_807650B8@ha
    addi r3, r29, 0x94c
    addi r4, r4, lbl_807650B8@l
    bl fn_8066E080
    cmpwi r3, -0x1
    bne lbl_fn_80667130_00003EB0
    li r0, 0x2
    stb r0, 0x947(r29)
    li r0, 0x1f4
    sth r0, 0x942(r29)
    b lbl_fn_80667130_00004758
lbl_fn_80667130_00003EB0:
    mr r3, r27
    bl fn_80666860
    b lbl_fn_80667130_00004758
    lwzx r29, r5, r8
    lbz r0, 0x93e(r29)
    cmplwi r0, 0x40
    bge lbl_fn_80667130_00004060
    addi r0, r29, 0x9dc
    stw r0, 0x948(r29)
    lis r6, fn_80666CD0@ha
    li r3, 0x40
    lbz r4, 0x93e(r29)
    addi r6, r6, fn_80666CD0@l
    li r7, 0x17
    li r0, 0x6
    addis r4, r4, 0x4a4
    sth r3, 0xe(r1)
    addi r4, r4, 0x50
    addi r3, r1, 0x154
    stw r4, 0x20(r1)
    addi r4, r1, 0x20
    li r5, 0x4
    stw r7, 0x150(r1)
    sth r0, 0x16a(r1)
    stw r6, 0x17c(r1)
    bl memcpy
    addi r3, r1, 0x158
    addi r4, r1, 0xe
    li r5, 0x2
    bl memcpy
    lhz r0, 0xe(r1)
    addi r30, r29, 0xb2c
    sth r0, 0x170(r1)
    lwz r12, 0x20(r1)
    lwz r11, 0x150(r1)
    lwz r10, 0x154(r1)
    lwz r9, 0x158(r1)
    lwz r8, 0x15c(r1)
    lwz r7, 0x160(r1)
    lwz r6, 0x164(r1)
    lwz r5, 0x168(r1)
    lwz r4, 0x170(r1)
    lwz r3, 0x178(r1)
    lwz r0, 0x17c(r1)
    stw r30, 0x16c(r1)
    stw r12, 0x174(r1)
    stw r11, 0x180(r1)
    stw r10, 0x184(r1)
    stw r9, 0x188(r1)
    stw r8, 0x18c(r1)
    stw r7, 0x190(r1)
    stw r6, 0x194(r1)
    stw r5, 0x198(r1)
    stw r30, 0x19c(r1)
    stw r4, 0x1a0(r1)
    stw r12, 0x1a4(r1)
    stw r3, 0x1a8(r1)
    stw r0, 0x1ac(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x5ec(r29)
    lbz r0, 0x5ed(r29)
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_fn_80667130_00003FC4
    lwz r0, 0x5f4(r29)
    add r0, r31, r0
    extsb r31, r0
lbl_fn_80667130_00003FC4:
    bl OSRestoreInterrupts
    lwz r3, 0x5f4(r29)
    subi r0, r3, 0x1
    cmplw r0, r31
    bne lbl_fn_80667130_00003FE4
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80667130_00004058
lbl_fn_80667130_00003FE4:
    lbz r0, 0x5ed(r29)
    li r4, 0x0
    lwz r3, 0x5f0(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x5ed(r29)
    addi r4, r1, 0x180
    lwz r3, 0x5f0(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x5ed(r29)
    mr r3, r30
    lwz r4, 0x5f4(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x5ed(r29)
    bl OSRestoreInterrupts
lbl_fn_80667130_00004058:
    li r3, 0x0
    b lbl_fn_80667130_00004070
lbl_fn_80667130_00004060:
    li r0, 0x0
    stb r0, 0x945(r29)
    li r3, 0x1
    stb r0, 0x93e(r29)
lbl_fn_80667130_00004070:
    cmpwi r3, 0x0
    beq lbl_fn_80667130_00004758
    lwz r0, 0x9dc(r29)
    cmplwi r0, 0x1
    bgt lbl_fn_80667130_00004090
    lwz r0, 0x9e0(r29)
    cmplwi r0, 0x1
    ble lbl_fn_80667130_000040F4
lbl_fn_80667130_00004090:
    lis r4, lbl_807650B8@ha
    addi r3, r29, 0x9dc
    addi r4, r4, lbl_807650B8@l
    bl fn_8066E080
    cmpwi r3, -0x1
    bne lbl_fn_80667130_000040F4
    addi r3, r29, 0x9dc
    addi r4, r29, 0x94c
    bl fn_8066E080
    cmpwi r3, 0x0
    bne lbl_fn_80667130_000040F4
    addi r3, r29, 0x9dc
    li r4, 0x0
    li r5, 0x108
    bl memset
    li r0, 0x1
    stw r0, 0x9dc(r29)
    bl OSGetTick
    clrlwi r0, r3, 31
    stb r0, 0x944(r29)
    li r3, 0x3
    stb r3, 0x947(r29)
    li r0, 0x0
    sth r0, 0x942(r29)
    b lbl_fn_80667130_00004758
lbl_fn_80667130_000040F4:
    mr r3, r27
    bl fn_80666860
    b lbl_fn_80667130_00004758
    lwzx r29, r5, r8
    lis r3, 0x4a4
    lis r6, fn_80666B80@ha
    li r7, 0x16
    lbz r4, 0x944(r29)
    addi r5, r3, 0xf1
    addi r6, r6, fn_80666B80@l
    li r0, 0x15
    stb r4, 0x8(r1)
    addi r3, r1, 0xf4
    addi r4, r1, 0x1c
    stw r5, 0x1c(r1)
    li r5, 0x4
    stb r31, 0x9(r1)
    stw r7, 0xf0(r1)
    sth r0, 0x10a(r1)
    stw r6, 0x11c(r1)
    bl memcpy
    addi r3, r1, 0xf8
    addi r4, r1, 0x9
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0xf9
    addi r4, r1, 0x8
    li r5, 0x1
    bl memcpy
    lwz r30, 0xf0(r1)
    lwz r12, 0xf4(r1)
    lwz r11, 0xf8(r1)
    lwz r10, 0xfc(r1)
    lwz r9, 0x100(r1)
    lwz r8, 0x104(r1)
    lwz r7, 0x108(r1)
    lwz r6, 0x10c(r1)
    lwz r5, 0x110(r1)
    lwz r4, 0x114(r1)
    lwz r3, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r30, 0x120(r1)
    stw r12, 0x124(r1)
    stw r11, 0x128(r1)
    stw r10, 0x12c(r1)
    stw r9, 0x130(r1)
    stw r8, 0x134(r1)
    stw r7, 0x138(r1)
    stw r6, 0x13c(r1)
    stw r5, 0x140(r1)
    stw r4, 0x144(r1)
    stw r3, 0x148(r1)
    stw r0, 0x14c(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x5ec(r29)
    lbz r0, 0x5ed(r29)
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_fn_80667130_000041F4
    lwz r0, 0x5f4(r29)
    add r0, r31, r0
    extsb r31, r0
lbl_fn_80667130_000041F4:
    bl OSRestoreInterrupts
    lwz r3, 0x5f4(r29)
    subi r0, r3, 0x1
    cmplw r0, r31
    bne lbl_fn_80667130_00004214
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80667130_00004758
lbl_fn_80667130_00004214:
    lbz r0, 0x5ed(r29)
    li r4, 0x0
    lwz r3, 0x5f0(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x5ed(r29)
    addi r4, r1, 0x120
    lwz r3, 0x5f0(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x5ed(r29)
    mr r3, r30
    lwz r4, 0x5f4(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x5ed(r29)
    bl OSRestoreInterrupts
    b lbl_fn_80667130_00004758
    lis r3, 0x4a4
    lis r6, fn_80666BF0@ha
    addi r3, r3, 0xf7
    li r7, 0x17
    addi r6, r6, fn_80666BF0@l
    li r0, 0x6
    stw r3, 0x18(r1)
    addi r3, r1, 0xc4
    lwzx r30, r5, r8
    addi r4, r1, 0x18
    sth r31, 0xc(r1)
    li r5, 0x4
    stw r7, 0xc0(r1)
    sth r0, 0xda(r1)
    stw r6, 0xec(r1)
    bl memcpy
    addi r3, r1, 0xc8
    addi r4, r1, 0xc
    li r5, 0x2
    bl memcpy
    lhz r0, 0xc(r1)
    addi r29, r30, 0xba5
    sth r0, 0xe0(r1)
    lwz r12, 0x18(r1)
    lwz r11, 0xc0(r1)
    lwz r10, 0xc4(r1)
    lwz r9, 0xc8(r1)
    lwz r8, 0xcc(r1)
    lwz r7, 0xd0(r1)
    lwz r6, 0xd4(r1)
    lwz r5, 0xd8(r1)
    lwz r4, 0xe0(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r29, 0xdc(r1)
    stw r12, 0xe4(r1)
    stw r11, 0x90(r1)
    stw r10, 0x94(r1)
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stw r7, 0xa0(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r29, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r12, 0xb4(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    bl OSDisableInterrupts
    mr r29, r3
    bl OSDisableInterrupts
    lbz r4, 0x5ec(r30)
    lbz r0, 0x5ed(r30)
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_fn_80667130_00004378
    lwz r0, 0x5f4(r30)
    add r0, r31, r0
    extsb r31, r0
lbl_fn_80667130_00004378:
    bl OSRestoreInterrupts
    lwz r3, 0x5f4(r30)
    subi r0, r3, 0x1
    cmplw r0, r31
    bne lbl_fn_80667130_00004398
    mr r3, r29
    bl OSRestoreInterrupts
    b lbl_fn_80667130_00004758
lbl_fn_80667130_00004398:
    lbz r0, 0x5ed(r30)
    li r4, 0x0
    lwz r3, 0x5f0(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x5ed(r30)
    addi r4, r1, 0x90
    lwz r3, 0x5f0(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x5ed(r30)
    mr r3, r29
    lwz r4, 0x5f4(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x5ed(r30)
    bl OSRestoreInterrupts
    b lbl_fn_80667130_00004758
    lwzx r30, r5, r8
    lbz r0, 0x93e(r30)
    cmplwi r0, 0x40
    bge lbl_fn_80667130_000045B4
    addi r0, r30, 0x994
    stw r0, 0x948(r30)
    lis r6, fn_80666CD0@ha
    li r3, 0x40
    lbz r4, 0x93e(r30)
    addi r6, r6, fn_80666CD0@l
    li r7, 0x17
    li r0, 0x6
    addis r4, r4, 0x4a4
    sth r3, 0xa(r1)
    addi r4, r4, 0x50
    addi r3, r1, 0x34
    stw r4, 0x14(r1)
    addi r4, r1, 0x14
    li r5, 0x4
    stw r7, 0x30(r1)
    sth r0, 0x4a(r1)
    stw r6, 0x5c(r1)
    bl memcpy
    addi r3, r1, 0x38
    addi r4, r1, 0xa
    li r5, 0x2
    bl memcpy
    lhz r0, 0xa(r1)
    addi r29, r30, 0xb2c
    sth r0, 0x50(r1)
    lwz r12, 0x14(r1)
    lwz r11, 0x30(r1)
    lwz r10, 0x34(r1)
    lwz r9, 0x38(r1)
    lwz r8, 0x3c(r1)
    lwz r7, 0x40(r1)
    lwz r6, 0x44(r1)
    lwz r5, 0x48(r1)
    lwz r4, 0x50(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r29, 0x4c(r1)
    stw r12, 0x54(r1)
    stw r11, 0x60(r1)
    stw r10, 0x64(r1)
    stw r9, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r6, 0x74(r1)
    stw r5, 0x78(r1)
    stw r29, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r12, 0x84(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    bl OSDisableInterrupts
    mr r29, r3
    bl OSDisableInterrupts
    lbz r4, 0x5ec(r30)
    lbz r0, 0x5ed(r30)
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_fn_80667130_00004518
    lwz r0, 0x5f4(r30)
    add r0, r31, r0
    extsb r31, r0
lbl_fn_80667130_00004518:
    bl OSRestoreInterrupts
    lwz r3, 0x5f4(r30)
    subi r0, r3, 0x1
    cmplw r0, r31
    bne lbl_fn_80667130_00004538
    mr r3, r29
    bl OSRestoreInterrupts
    b lbl_fn_80667130_000045AC
lbl_fn_80667130_00004538:
    lbz r0, 0x5ed(r30)
    li r4, 0x0
    lwz r3, 0x5f0(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x5ed(r30)
    addi r4, r1, 0x60
    lwz r3, 0x5f0(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x5ed(r30)
    mr r3, r29
    lwz r4, 0x5f4(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x5ed(r30)
    bl OSRestoreInterrupts
lbl_fn_80667130_000045AC:
    li r3, 0x0
    b lbl_fn_80667130_000045C4
lbl_fn_80667130_000045B4:
    li r0, 0x0
    stb r0, 0x945(r30)
    li r3, 0x1
    stb r0, 0x93e(r30)
lbl_fn_80667130_000045C4:
    cmpwi r3, 0x0
    beq lbl_fn_80667130_00004758
    lis r3, lbl_807650B8@ha
    li r0, 0x9
    addi r3, r3, lbl_807650B8@l
    addi r5, r1, 0x26c
    subi r4, r3, 0x4
    mtctr r0
    nop
lbl_fn_80667130_000045E8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80667130_000045E8
    lwz r3, 0x274(r1)
    subi r0, r3, 0x1
    stw r0, 0x274(r1)
    lwz r0, 0x994(r30)
    cmplwi r0, 0x1
    bgt lbl_fn_80667130_00004620
    lwz r0, 0x998(r30)
    cmplwi r0, 0x1
    ble lbl_fn_80667130_00004678
lbl_fn_80667130_00004620:
    lbz r0, 0x944(r30)
    extsb. r0, r0
    beq lbl_fn_80667130_00004644
    lis r4, lbl_807650B8@ha
    addi r3, r30, 0x994
    addi r4, r4, lbl_807650B8@l
    bl fn_8066E080
    cmpwi r3, -0x1
    beq lbl_fn_80667130_00004664
lbl_fn_80667130_00004644:
    lbz r0, 0x944(r30)
    extsb. r0, r0
    bne lbl_fn_80667130_00004678
    addi r3, r30, 0x994
    addi r4, r1, 0x270
    bl fn_8066E080
    cmpwi r3, -0x1
    bne lbl_fn_80667130_00004678
lbl_fn_80667130_00004664:
    li r0, 0x1f4
    sth r0, 0x942(r30)
    li r0, 0x6
    stb r0, 0x947(r30)
    b lbl_fn_80667130_00004758
lbl_fn_80667130_00004678:
    mr r3, r27
    bl fn_80666860
    b lbl_fn_80667130_00004758
    bl fn_80666E40
    b lbl_fn_80667130_00004758
    lwzx r29, r5, r8
    lbz r0, 0x944(r29)
    extsb. r0, r0
    beq lbl_fn_80667130_000046B4
    lis r5, lbl_80765100@ha
    addi r3, r29, 0x9dc
    addi r4, r29, 0x94c
    addi r5, r5, lbl_80765100@l
    bl fn_8066E5C0
    b lbl_fn_80667130_000046C4
lbl_fn_80667130_000046B4:
    addi r3, r29, 0x9dc
    addi r4, r29, 0x94c
    li r5, 0x48
    bl memcpy
lbl_fn_80667130_000046C4:
    li r3, 0x0
    stb r3, 0x945(r29)
    li r0, 0x8
    sth r3, 0x942(r29)
    stb r0, 0x947(r29)
    b lbl_fn_80667130_00004758
    bl fn_80666940
    b lbl_fn_80667130_00004758
    lwzx r29, r5, r8
    addi r4, r29, 0x994
    addi r3, r29, 0x9dc
    mr r5, r4
    bl fn_8066E5C0
    li r3, 0x0
    stb r3, 0x945(r29)
    li r0, 0xa
    sth r3, 0x942(r29)
    stb r0, 0x947(r29)
    b lbl_fn_80667130_00004758
    bl fn_80666A60
    b lbl_fn_80667130_00004758
    lwzx r29, r5, r8
    addi r3, r29, 0x94c
    addi r4, r29, 0x994
    bl fn_8066E080
    li r4, 0x0
    stb r4, 0x945(r29)
    cmpwi r3, 0x0
    li r0, 0xc
    sth r4, 0x942(r29)
    stb r0, 0x947(r29)
    bne lbl_fn_80667130_00004750
    stb r31, 0x946(r29)
    stb r31, 0xbae(r29)
    b lbl_fn_80667130_00004758
lbl_fn_80667130_00004750:
    mr r3, r27
    bl fn_80666860
lbl_fn_80667130_00004758:
    lhz r3, 0x940(r28)
    cmplwi r3, 0xea60
    addi r0, r3, 0x1
    sth r0, 0x940(r28)
    ble lbl_fn_80667130_0000477C
    li r0, 0x78
    stb r0, 0x947(r28)
    mr r3, r27
    bl fn_80666860
lbl_fn_80667130_0000477C:
    addi r11, r1, 0x2d0
    bl _restgpr_27
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_80667E40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_80829DF0@ha
    cmpwi r4, 0x0
    slwi r31, r3, 2
    mr r27, r3
    addi r30, r30, lbl_80829DF0@l
    mr r28, r4
    lwzx r29, r30, r31
    beq lbl_fn_80667E40_0000491C
    addi r3, r29, 0x5ec
    bl fn_806667E0
    cmpwi r28, -0x1
    li r0, 0x0
    stb r0, 0xb85(r29)
    bne lbl_fn_80667E40_000047F4
    li r4, 0xfd
    b lbl_fn_80667E40_000048F4
lbl_fn_80667E40_000047F4:
    lwz r0, 0x840(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80667E40_000048DC
    la r4, lbl_80880280
    lbzx r3, r4, r27
    cmplwi r3, 0x20
    addi r0, r3, 0x1
    stbx r0, r4, r27
    bge lbl_fn_80667E40_000048D4
    lwzx r29, r30, r31
    addi r3, r29, 0x5ec
    bl fn_806667E0
    lis r30, fn_80667E40@ha
    lwz r4, 0x8fc(r29)
    lbz r5, 0xb86(r29)
    addi r3, r29, 0x5ec
    addi r6, r30, fn_80667E40@l
    bl fn_80665F80
    li r0, 0x1
    stb r0, 0xb85(r29)
    lbz r0, 0x93a(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80667E40_00004884
    lis r31, 0x4a4
    addi r3, r29, 0x5ec
    addi r5, r31, 0xfb
    addi r6, r30, fn_80667E40@l
    li r4, 0x0
    bl fn_80666220
    addi r3, r29, 0x5ec
    addi r4, r29, 0xb2c
    addi r6, r31, 0xf0
    addi r7, r30, fn_80667E40@l
    li r5, 0x10
    bl fn_806665A0
    b lbl_fn_80667E40_000048C8
lbl_fn_80667E40_00004884:
    lis r31, 0x4a4
    addi r3, r29, 0x5ec
    addi r5, r31, 0xf0
    addi r6, r30, fn_80667E40@l
    li r4, 0x55
    bl fn_80666220
    addi r3, r29, 0x5ec
    addi r5, r31, 0xfb
    addi r6, r30, fn_80667E40@l
    li r4, 0x0
    bl fn_80666220
    addi r3, r29, 0x5ec
    addi r4, r29, 0xb36
    addi r6, r31, 0xfa
    addi r7, r30, fn_80667E40@l
    li r5, 0x6
    bl fn_806665A0
lbl_fn_80667E40_000048C8:
    li r0, 0x0
    stb r0, 0x93a(r29)
    b lbl_fn_80667E40_0000491C
lbl_fn_80667E40_000048D4:
    li r4, 0xfc
    b lbl_fn_80667E40_000048F4
lbl_fn_80667E40_000048DC:
    lwz r4, 0x8fc(r29)
    addi r3, r29, 0x5ec
    lbz r5, 0xb86(r29)
    li r6, 0x0
    bl fn_80665F80
    b lbl_fn_80667E40_0000491C
lbl_fn_80667E40_000048F4:
    stb r4, 0x905(r29)
    li r0, 0x0
    stb r4, 0xb88(r29)
    stb r0, 0xb89(r29)
    lwz r12, 0x8e4(r29)
    cmpwi r12, 0x0
    beq lbl_fn_80667E40_0000491C
    mr r3, r27
    mtctr r12
    bctrl
lbl_fn_80667E40_0000491C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80667FE0(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    bl _savegpr_16
    lis r6, lbl_80829DF0@ha
    lis r0, 0x4330
    slwi r30, r3, 2
    lwz r5, lbl_808889D8
    addi r6, r6, lbl_80829DF0@l
    stw r5, 0x10(r1)
    lwzx r29, r6, r30
    cmpwi r4, 0x0
    lwz r5, lbl_808889E0
    lis r31, lbl_8082DDA0@ha
    stw r5, 0x8(r1)
    mr r27, r3
    lwz r28, 0xb6c(r29)
    li r11, 0x0
    lha r5, 0x10(r1)
    li r10, 0x1
    sth r5, 0x854(r29)
    li r8, 0x2
    lha r9, 0x8(r1)
    li r7, 0x3
    sth r9, 0x856(r29)
    li r6, 0x212
    lwz r12, lbl_808889DC
    li r5, 0x27c
    lbz r3, 0x90e(r29)
    addi r31, r31, lbl_8082DDA0@l
    sth r3, 0x858(r29)
    lha r4, 0x12(r1)
    stb r11, 0x85a(r29)
    lha r3, 0xa(r1)
    sth r4, 0x85c(r29)
    lwz r9, lbl_808889E4
    sth r3, 0x85e(r29)
    lbz r4, 0x90e(r29)
    sth r4, 0x860(r29)
    stw r12, 0x14(r1)
    stw r9, 0xc(r1)
    lha r3, 0x14(r1)
    stb r10, 0x862(r29)
    lha r9, 0xc(r1)
    sth r3, 0x864(r29)
    lha r4, 0x16(r1)
    sth r9, 0x866(r29)
    lha r3, 0xe(r1)
    lbz r9, 0x90e(r29)
    sth r9, 0x868(r29)
    stb r8, 0x86a(r29)
    sth r4, 0x86c(r29)
    sth r3, 0x86e(r29)
    lbz r3, 0x90e(r29)
    sth r3, 0x870(r29)
    stb r7, 0x872(r29)
    sth r6, 0x874(r29)
    sth r6, 0x876(r29)
    sth r6, 0x878(r29)
    sth r5, 0x87a(r29)
    sth r5, 0x87c(r29)
    sth r5, 0x87e(r29)
    stb r11, 0x881(r29)
    stw r0, 0x78(r1)
    stw r0, 0x80(r1)
    stb r11, 0x880(r29)
    bne lbl_fn_80667FE0_00005370
    lwz r0, 0x924(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80667FE0_00004DC0
    li r5, 0x0
    lis r3, 0x8000
    nop
lbl_fn_80667FE0_00004A80:
    clrlwi r0, r5, 24
    li r4, 0x0
    mulli r7, r0, 0xb
    addi r8, r7, 0xa
    cmpw r7, r8
    mr r6, r7
    bge lbl_fn_80667FE0_00004BC8
    addi r9, r7, 0x2
    li r10, 0x0
    li r11, 0x0
    li r12, 0x0
    li r16, 0x0
    bgt lbl_fn_80667FE0_00004AC4
    subi r0, r3, 0x2
    cmpw r8, r0
    bgt lbl_fn_80667FE0_00004AC4
    li r16, 0x1
lbl_fn_80667FE0_00004AC4:
    cmpwi r16, 0x0
    beq lbl_fn_80667FE0_00004ADC
    subi r0, r3, 0x2
    cmpw r7, r0
    bgt lbl_fn_80667FE0_00004ADC
    li r12, 0x1
lbl_fn_80667FE0_00004ADC:
    cmpwi r12, 0x0
    beq lbl_fn_80667FE0_00004AF4
    addis r0, r7, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_80667FE0_00004AF4
    li r11, 0x1
lbl_fn_80667FE0_00004AF4:
    cmpwi r11, 0x0
    beq lbl_fn_80667FE0_00004B30
    addi r8, r7, 0xa
    neg r0, r7
    clrrwi r11, r8, 31
    clrrwi r0, r0, 31
    li r8, 0x1
    cmpw r11, r0
    bne lbl_fn_80667FE0_00004B24
    cmpwi r11, 0x0
    beq lbl_fn_80667FE0_00004B24
    li r8, 0x0
lbl_fn_80667FE0_00004B24:
    cmpwi r8, 0x0
    beq lbl_fn_80667FE0_00004B30
    li r10, 0x1
lbl_fn_80667FE0_00004B30:
    cmpwi r10, 0x0
    beq lbl_fn_80667FE0_00004B9C
    addi r0, r9, 0x7
    subf r0, r7, r0
    srwi r0, r0, 3
    mtctr r0
    cmpw r7, r9
    bge lbl_fn_80667FE0_00004B9C
lbl_fn_80667FE0_00004B50:
    add r9, r28, r6
    lbzx r8, r28, r6
    lbz r0, 0x1(r9)
    addi r6, r6, 0x8
    add r4, r4, r8
    lbz r8, 0x2(r9)
    add r4, r4, r0
    lbz r0, 0x3(r9)
    add r4, r4, r8
    lbz r8, 0x4(r9)
    add r4, r4, r0
    lbz r0, 0x5(r9)
    add r4, r4, r8
    lbz r8, 0x6(r9)
    add r4, r4, r0
    lbz r0, 0x7(r9)
    add r4, r4, r8
    add r4, r4, r0
    bdnz lbl_fn_80667FE0_00004B50
lbl_fn_80667FE0_00004B9C:
    addi r9, r7, 0xa
    add r8, r28, r6
    subf r0, r6, r9
    mtctr r0
    cmpw r6, r9
    bge lbl_fn_80667FE0_00004BC8
lbl_fn_80667FE0_00004BB4:
    lbz r0, 0x0(r8)
    addi r6, r6, 0x1
    addi r8, r8, 0x1
    add r4, r4, r0
    bdnz lbl_fn_80667FE0_00004BB4
lbl_fn_80667FE0_00004BC8:
    add r6, r28, r7
    addi r4, r4, 0x55
    lbz r0, 0xa(r6)
    clrlwi r4, r4, 24
    cmplw r4, r0
    bne lbl_fn_80667FE0_00004DB4
    lbz r11, 0x2(r6)
    li r8, 0x0
    lbz r7, 0x1(r6)
    li r5, 0x1
    rlwinm r4, r11, 2, 22, 23
    lbz r9, 0x90e(r29)
    extsh r7, r7
    lbz r0, 0x4(r6)
    or r4, r7, r4
    lbz r3, 0x7(r6)
    lbz r18, 0x6(r6)
    extsh r4, r4
    subfic r10, r4, 0x2ff
    lbz r12, 0x0(r6)
    extsh r4, r0
    rlwinm r0, r11, 6, 22, 23
    or r0, r4, r0
    lbz r17, 0x9(r6)
    extsh r21, r18
    rlwinm r20, r3, 2, 22, 23
    or r20, r21, r20
    extsh r18, r17
    lbz r7, 0x3(r6)
    extsh r0, r0
    li r16, 0x3
    lbz r4, 0x5(r6)
    lbz r19, 0x8(r6)
    subfic r6, r0, 0x2ff
    li r0, 0x2
    rlwinm r17, r3, 6, 22, 23
    extsh r22, r12
    extsh r20, r20
    or r12, r18, r17
    rlwinm r21, r11, 4, 22, 23
    subfic r17, r20, 0x2ff
    extsh r20, r7
    clrlslwi r18, r11, 30, 8
    extsh r11, r12
    extsh r12, r4
    rlwinm r4, r3, 4, 22, 23
    or r20, r20, r18
    or r7, r22, r21
    or r18, r12, r4
    subfic r11, r11, 0x2ff
    extsh r4, r19
    clrlslwi r3, r3, 30, 8
    or r12, r4, r3
    sth r7, 0x58(r1)
    li r4, 0x4
    addi r3, r1, 0x58
    sth r10, 0x5a(r1)
    sth r9, 0x5c(r1)
    stb r8, 0x5e(r1)
    sth r20, 0x60(r1)
    sth r6, 0x62(r1)
    sth r9, 0x64(r1)
    stb r5, 0x66(r1)
    sth r18, 0x68(r1)
    sth r17, 0x6a(r1)
    sth r9, 0x6c(r1)
    stb r0, 0x6e(r1)
    sth r12, 0x70(r1)
    sth r11, 0x72(r1)
    sth r9, 0x74(r1)
    stb r16, 0x76(r1)
    mtctr r4
lbl_fn_80667FE0_00004CE8:
    lha r4, 0x0(r3)
    cmpwi r4, 0x200
    bge lbl_fn_80667FE0_00004D18
    lha r0, 0x2(r3)
    cmpwi r0, 0x180
    bge lbl_fn_80667FE0_00004D18
    sth r4, 0x854(r29)
    lhz r4, 0x4(r3)
    sth r0, 0x856(r29)
    lbz r0, 0x6(r3)
    sth r4, 0x858(r29)
    stb r0, 0x85a(r29)
lbl_fn_80667FE0_00004D18:
    lha r4, 0x0(r3)
    cmpwi r4, 0x200
    ble lbl_fn_80667FE0_00004D48
    lha r0, 0x2(r3)
    cmpwi r0, 0x180
    bge lbl_fn_80667FE0_00004D48
    sth r4, 0x85c(r29)
    lhz r4, 0x4(r3)
    sth r0, 0x85e(r29)
    lbz r0, 0x6(r3)
    sth r4, 0x860(r29)
    stb r0, 0x862(r29)
lbl_fn_80667FE0_00004D48:
    lha r4, 0x0(r3)
    cmpwi r4, 0x200
    ble lbl_fn_80667FE0_00004D78
    lha r0, 0x2(r3)
    cmpwi r0, 0x180
    ble lbl_fn_80667FE0_00004D78
    sth r4, 0x864(r29)
    lhz r4, 0x4(r3)
    sth r0, 0x866(r29)
    lbz r0, 0x6(r3)
    sth r4, 0x868(r29)
    stb r0, 0x86a(r29)
lbl_fn_80667FE0_00004D78:
    lha r4, 0x0(r3)
    cmpwi r4, 0x200
    bge lbl_fn_80667FE0_00004DA8
    lha r0, 0x2(r3)
    cmpwi r0, 0x180
    ble lbl_fn_80667FE0_00004DA8
    sth r4, 0x86c(r29)
    lhz r4, 0x4(r3)
    sth r0, 0x86e(r29)
    lbz r0, 0x6(r3)
    sth r4, 0x870(r29)
    stb r0, 0x872(r29)
lbl_fn_80667FE0_00004DA8:
    addi r3, r3, 0x8
    bdnz lbl_fn_80667FE0_00004CE8
    b lbl_fn_80667FE0_00004DC0
lbl_fn_80667FE0_00004DB4:
    addi r5, r5, 0x1
    cmplwi r5, 0x2
    blt lbl_fn_80667FE0_00004A80
lbl_fn_80667FE0_00004DC0:
    lfs f8, lbl_808889E8
    li r0, 0x2
    addi r8, r1, 0x48
    addi r6, r1, 0x38
    fmr f7, f8
    addi r5, r1, 0x10
    addi r3, r1, 0x8
    lfd f6, lbl_80888A20
    li r17, 0x0
    mtctr r0
lbl_fn_80667FE0_00004DE8:
    clrlslwi r9, r17, 24, 3
    clrlslwi r12, r17, 24, 1
    add r9, r29, r9
    clrlslwi r10, r17, 24, 2
    lha r11, 0x854(r9)
    addi r17, r17, 0x1
    lha r16, 0x856(r9)
    clrlslwi r9, r17, 24, 3
    xoris r0, r11, 0x8000
    stw r0, 0x7c(r1)
    xoris r7, r16, 0x8000
    lhax r4, r5, r12
    lhax r0, r3, r12
    add r9, r29, r9
    subf r4, r4, r11
    stw r7, 0x84(r1)
    subf r0, r0, r16
    lfd f5, 0x78(r1)
    lfd f3, 0x80(r1)
    xoris r4, r4, 0x8000
    stw r4, 0x7c(r1)
    xoris r0, r0, 0x8000
    lha r16, 0x856(r9)
    clrlslwi r12, r17, 24, 1
    stw r0, 0x84(r1)
    fsubs f4, f5, f6
    lha r11, 0x854(r9)
    xoris r7, r16, 0x8000
    lfd f0, 0x80(r1)
    fsubs f2, f3, f6
    lfd f1, 0x78(r1)
    xoris r0, r11, 0x8000
    stw r7, 0x84(r1)
    lhax r4, r5, r12
    fsubs f1, f1, f6
    stw r0, 0x7c(r1)
    fsubs f0, f0, f6
    lhax r0, r3, r12
    subf r4, r4, r11
    lfd f5, 0x78(r1)
    subf r0, r0, r16
    xoris r4, r4, 0x8000
    stfsx f4, r8, r10
    xoris r0, r0, 0x8000
    lfd f3, 0x80(r1)
    fadds f7, f7, f1
    stfsx f2, r6, r10
    clrlslwi r10, r17, 24, 2
    fsubs f4, f5, f6
    addi r17, r17, 0x1
    stw r4, 0x7c(r1)
    fsubs f2, f3, f6
    lfd f1, 0x78(r1)
    fadds f8, f8, f0
    stw r0, 0x84(r1)
    fsubs f1, f1, f6
    lfd f0, 0x80(r1)
    stfsx f4, r8, r10
    fsubs f0, f0, f6
    fadds f7, f7, f1
    stfsx f2, r6, r10
    fadds f8, f8, f0
    bdnz lbl_fn_80667FE0_00004DE8
    lfs f0, lbl_808889EC
    lfd f1, lbl_808889F8
    fmuls f31, f7, f0
    fmuls f30, f8, f0
    bl fn_8068A4A8
    lfs f2, lbl_808889F0
    frsp f29, f1
    lfs f0, lbl_808889F4
    fadds f1, f2, f31
    fdivs f1, f1, f0
    bl fn_8068A4A8
    frsp f0, f1
    lfd f1, lbl_80888A08
    fsubs f31, f0, f29
    bl fn_8068A4A8
    lfs f2, lbl_80888A00
    frsp f29, f1
    lfs f0, lbl_80888A04
    fadds f1, f2, f30
    fdivs f1, f1, f0
    bl fn_8068A4A8
    frsp f0, f1
    slwi r17, r27, 2
    fmr f1, f31
    fsubs f29, f0, f29
    bl fn_8068AE24
    frsp f3, f1
    lfs f2, lbl_80888A10
    lfs f0, lbl_808889F4
    fmr f1, f29
    addi r16, r31, 0x0
    fmuls f2, f2, f3
    fmuls f0, f0, f2
    stfsx f0, r16, r17
    bl fn_8068AE24
    frsp f2, f1
    lfs f0, lbl_80888A10
    lfsx f9, r16, r17
    addi r21, r31, 0x30
    lfs f4, lbl_808889E8
    addi r22, r31, 0x20
    fmuls f2, f0, f2
    lfs f1, lbl_80888A04
    lfs f0, 0x48(r1)
    addi r23, r31, 0x40
    stfsx f4, r21, r17
    addi r3, r31, 0x10
    fmuls f2, f1, f2
    lfs f1, 0x38(r1)
    fadds f3, f0, f9
    stfsx f4, r22, r17
    lfsx f5, r21, r17
    addi r18, r1, 0x28
    frsp f8, f2
    stfsx f2, r3, r17
    lfsx f0, r22, r17
    addi r24, r1, 0x38
    stfs f3, 0x48(r1)
    addi r25, r1, 0x48
    fadds f2, f1, f8
    lfs f1, 0x4c(r1)
    fadds f7, f0, f3
    lfs f0, 0x3c(r1)
    fadds f1, f1, f9
    stfs f2, 0x38(r1)
    fadds f6, f5, f2
    stfsx f7, r22, r17
    fadds f0, f0, f8
    lfs f5, 0x50(r1)
    stfsx f6, r21, r17
    addi r19, r1, 0x18
    fadds f12, f5, f9
    lfsx f7, r22, r17
    frsp f6, f6
    lfs f5, 0x40(r1)
    fadds f7, f7, f1
    lfd f29, lbl_80888A20
    fadds f11, f5, f8
    stfsx f7, r22, r17
    fadds f6, f6, f0
    lfs f5, 0x54(r1)
    lfsx f7, r22, r17
    addi r26, r1, 0x8
    fadds f9, f5, f9
    stfsx f6, r21, r17
    frsp f6, f6
    lfs f5, 0x44(r1)
    fadds f7, f7, f12
    lfs f30, lbl_80888A14
    fadds f10, f6, f11
    stfsx f7, r22, r17
    fadds f8, f5, f8
    lfs f6, lbl_808889EC
    lfsx f7, r22, r17
    addi r27, r1, 0x10
    frsp f5, f10
    stfsx f10, r21, r17
    fadds f7, f7, f9
    lfs f31, lbl_80888A18
    stfs f1, 0x4c(r1)
    li r16, 0x0
    fadds f3, f5, f8
    stfsx f7, r22, r17
    stfsx f3, r21, r17
    frsp f3, f3
    lfsx f5, r22, r17
    stfs f0, 0x3c(r1)
    fmuls f5, f5, f6
    fmuls f2, f3, f6
    stfs f12, 0x50(r1)
    stfs f11, 0x40(r1)
    stfs f9, 0x54(r1)
    stfs f8, 0x44(r1)
    stfsx f5, r22, r17
    stfsx f2, r21, r17
    stfsx f4, r23, r17
lbl_fn_80667FE0_000050B4:
    clrlslwi r20, r16, 24, 2
    lfsx f2, r21, r17
    lfsx f3, r24, r20
    lfsx f1, r25, r20
    lfsx f0, r22, r17
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    fdivs f1, f2, f0
    bl fn_8068A4A8
    clrlslwi r0, r16, 24, 1
    frsp f2, f1
    lhax r3, r26, r0
    lhax r0, r27, r0
    xoris r3, r3, 0x8000
    stw r3, 0x7c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f1, 0x78(r1)
    lfd f0, 0x80(r1)
    fsubs f1, f1, f29
    stfsx f2, r18, r20
    fsubs f0, f0, f29
    fsubs f1, f1, f30
    fsubs f0, f0, f31
    fdivs f1, f1, f0
    bl fn_8068A4A8
    frsp f2, f1
    lfsx f1, r18, r20
    addi r16, r16, 0x1
    lfsx f0, r23, r17
    cmplwi r16, 0x4
    stfsx f2, r19, r20
    fsubs f1, f1, f2
    fadds f0, f0, f1
    stfsx f0, r23, r17
    blt lbl_fn_80667FE0_000050B4
    addi r4, r31, 0x40
    lfs f0, lbl_808889EC
    lfsx f1, r4, r30
    li r5, 0x0
    lis r3, 0x8000
    fmuls f0, f1, f0
    stfsx f0, r4, r30
lbl_fn_80667FE0_00005160:
    lwz r0, 0x924(r29)
    clrlwi r4, r5, 24
    mulli r4, r4, 0xa
    li r6, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80667FE0_0000517C
    addi r4, r4, 0x16
lbl_fn_80667FE0_0000517C:
    addi r8, r4, 0x9
    mr r7, r4
    cmpw r4, r8
    bge lbl_fn_80667FE0_000052B8
    addi r9, r4, 0x1
    li r10, 0x0
    li r11, 0x0
    li r12, 0x0
    li r16, 0x0
    bgt lbl_fn_80667FE0_000051B4
    subi r0, r3, 0x2
    cmpw r8, r0
    bgt lbl_fn_80667FE0_000051B4
    li r16, 0x1
lbl_fn_80667FE0_000051B4:
    cmpwi r16, 0x0
    beq lbl_fn_80667FE0_000051CC
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_fn_80667FE0_000051CC
    li r12, 0x1
lbl_fn_80667FE0_000051CC:
    cmpwi r12, 0x0
    beq lbl_fn_80667FE0_000051E4
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_80667FE0_000051E4
    li r11, 0x1
lbl_fn_80667FE0_000051E4:
    cmpwi r11, 0x0
    beq lbl_fn_80667FE0_00005220
    addi r8, r4, 0x9
    neg r0, r4
    clrrwi r11, r8, 31
    clrrwi r0, r0, 31
    li r8, 0x1
    cmpw r11, r0
    bne lbl_fn_80667FE0_00005214
    cmpwi r11, 0x0
    beq lbl_fn_80667FE0_00005214
    li r8, 0x0
lbl_fn_80667FE0_00005214:
    cmpwi r8, 0x0
    beq lbl_fn_80667FE0_00005220
    li r10, 0x1
lbl_fn_80667FE0_00005220:
    cmpwi r10, 0x0
    beq lbl_fn_80667FE0_0000528C
    addi r0, r9, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    cmpw r4, r9
    bge lbl_fn_80667FE0_0000528C
lbl_fn_80667FE0_00005240:
    add r9, r28, r7
    lbzx r8, r28, r7
    lbz r0, 0x1(r9)
    addi r7, r7, 0x8
    add r6, r6, r8
    lbz r8, 0x2(r9)
    add r6, r6, r0
    lbz r0, 0x3(r9)
    add r6, r6, r8
    lbz r8, 0x4(r9)
    add r6, r6, r0
    lbz r0, 0x5(r9)
    add r6, r6, r8
    lbz r8, 0x6(r9)
    add r6, r6, r0
    lbz r0, 0x7(r9)
    add r6, r6, r8
    add r6, r6, r0
    bdnz lbl_fn_80667FE0_00005240
lbl_fn_80667FE0_0000528C:
    addi r9, r4, 0x9
    add r8, r28, r7
    subf r0, r7, r9
    mtctr r0
    cmpw r7, r9
    bge lbl_fn_80667FE0_000052B8
lbl_fn_80667FE0_000052A4:
    lbz r0, 0x0(r8)
    addi r7, r7, 0x1
    addi r8, r8, 0x1
    add r6, r6, r0
    bdnz lbl_fn_80667FE0_000052A4
lbl_fn_80667FE0_000052B8:
    add r4, r28, r4
    addi r6, r6, 0x55
    lbz r0, 0x9(r4)
    clrlwi r6, r6, 24
    cmplw r6, r0
    bne lbl_fn_80667FE0_00005364
    lbz r0, 0x3(r4)
    lbz r3, 0x0(r4)
    extrwi r0, r0, 2, 26
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x874(r29)
    lbz r0, 0x3(r4)
    lbz r3, 0x1(r4)
    extrwi r0, r0, 2, 28
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x876(r29)
    lbz r0, 0x3(r4)
    lbz r3, 0x2(r4)
    clrlwi r0, r0, 30
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x878(r29)
    lbz r0, 0x7(r4)
    lbz r3, 0x4(r4)
    extrwi r0, r0, 2, 26
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x87a(r29)
    lbz r0, 0x7(r4)
    lbz r3, 0x5(r4)
    extrwi r0, r0, 2, 28
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x87c(r29)
    lbz r0, 0x7(r4)
    lbz r3, 0x6(r4)
    clrlwi r0, r0, 30
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x87e(r29)
    lbz r0, 0x8(r4)
    clrlwi r0, r0, 25
    stb r0, 0x881(r29)
    lbz r0, 0x8(r4)
    rlwinm r0, r0, 0, 24, 24
    stb r0, 0x880(r29)
    b lbl_fn_80667FE0_00005370
lbl_fn_80667FE0_00005364:
    addi r5, r5, 0x1
    cmplwi r5, 0x2
    blt lbl_fn_80667FE0_00005160
lbl_fn_80667FE0_00005370:
    addi r11, r1, 0xd0
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    bl _restgpr_16
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80668A40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80668A40_000054AC
    cmpwi r4, 0x0
    li r8, 0x0
    beq lbl_fn_80668A40_00005478
    cmplwi r4, 0x8
    addi r0, r4, 0xf8
    ble lbl_fn_80668A40_00005450
    clrlwi r5, r0, 24
    addi r0, r5, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_80668A40_00005450
lbl_fn_80668A40_00005400:
    clrlwi r0, r8, 24
    addi r8, r8, 0x8
    lbzx r5, r3, r0
    add r6, r3, r0
    lbz r0, 0x1(r6)
    add r7, r7, r5
    lbz r5, 0x2(r6)
    add r7, r7, r0
    lbz r0, 0x3(r6)
    add r7, r7, r5
    lbz r5, 0x4(r6)
    add r7, r7, r0
    lbz r0, 0x5(r6)
    add r7, r7, r5
    lbz r5, 0x6(r6)
    add r7, r7, r0
    lbz r0, 0x7(r6)
    add r7, r7, r5
    add r7, r7, r0
    bdnz lbl_fn_80668A40_00005400
lbl_fn_80668A40_00005450:
    clrlwi r5, r8, 24
    subf r0, r5, r4
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80668A40_00005478
lbl_fn_80668A40_00005464:
    clrlwi r0, r8, 24
    addi r8, r8, 0x1
    lbzx r0, r3, r0
    add r7, r7, r0
    bdnz lbl_fn_80668A40_00005464
lbl_fn_80668A40_00005478:
    addi r5, r7, 0x55
    lbzx r0, r3, r4
    clrlwi r5, r5, 24
    cmplw r5, r0
    bne lbl_fn_80668A40_000054C0
    add r3, r4, r3
    addi r4, r7, 0xaa
    lbz r0, 0x1(r3)
    clrlwi r3, r4, 24
    cmplw r3, r0
    bne lbl_fn_80668A40_000054C0
    li r31, 0x1
    b lbl_fn_80668A40_000054C0
lbl_fn_80668A40_000054AC:
    bl fn_805F8570
    lwzx r0, r29, r30
    cmplw r3, r0
    bne lbl_fn_80668A40_000054C0
    li r31, 0x1
lbl_fn_80668A40_000054C0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80668B80(void)
{
    nofralloc
    lis r5, lbl_80829DF0@ha
    lbz r0, 0x0(r4)
    slwi r3, r3, 2
    addi r5, r5, lbl_80829DF0@l
    extsb r0, r0
    lwzx r3, r5, r3
    sth r0, 0x888(r3)
    lbz r0, 0x1(r4)
    extsb r0, r0
    sth r0, 0x886(r3)
    lbz r0, 0x3(r4)
    extsb r0, r0
    sth r0, 0x88e(r3)
    lbz r0, 0x4(r4)
    extsb r0, r0
    sth r0, 0x88c(r3)
    lbz r0, 0x6(r4)
    extsb r0, r0
    sth r0, 0x894(r3)
    lbz r0, 0x7(r4)
    extsb r0, r0
    sth r0, 0x892(r3)
    lbz r0, 0x9(r4)
    extsb r0, r0
    sth r0, 0x89a(r3)
    lbz r0, 0xa(r4)
    extsb r0, r0
    sth r0, 0x898(r3)
    lbz r0, 0xb09(r3)
    cmpwi r0, 0x0
    bnelr
    lbz r0, 0x2(r4)
    extsb r0, r0
    sth r0, 0x884(r3)
    lbz r0, 0x5(r4)
    extsb r0, r0
    sth r0, 0x88a(r3)
    lbz r0, 0x8(r4)
    extsb r0, r0
    sth r0, 0x890(r3)
    lbz r0, 0xb(r4)
    extsb r0, r0
    sth r0, 0x896(r3)
    lbz r0, 0xc(r4)
    stb r0, 0x89c(r3)
    lbz r0, 0xd(r4)
    stb r0, 0x89d(r3)
    blr
}

asm void fn_80668C40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r31, lbl_80829DF0@ha
    lis r0, 0x4330
    slwi r30, r3, 2
    stw r0, 0x8(r1)
    addi r31, r31, lbl_80829DF0@l
    mr r27, r3
    lwzx r29, r31, r30
    stw r0, 0x10(r1)
    lwz r0, 0x840(r29)
    lwz r28, 0xb6c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80668C40_00005604
    la r4, lbl_80880294
    li r0, 0x0
    stbx r0, r4, r3
    la r4, lbl_80880290
    stb r0, 0x905(r29)
    stbx r0, r4, r3
    stb r0, 0x906(r29)
    b lbl_fn_80668C40_00005DD0
lbl_fn_80668C40_00005604:
    cmpwi r4, -0x1
    beq lbl_fn_80668C40_00005618
    cmpwi r4, 0x0
    beq lbl_fn_80668C40_00005630
    b lbl_fn_80668C40_00005640
lbl_fn_80668C40_00005618:
    li r4, 0xfd
    stb r4, 0x905(r29)
    li r0, 0x0
    stb r4, 0xb88(r29)
    stb r0, 0xb89(r29)
    b lbl_fn_80668C40_00005654
lbl_fn_80668C40_00005630:
    la r4, lbl_80880294
    lbzx r0, r4, r3
    stb r0, 0x905(r29)
    b lbl_fn_80668C40_00005654
lbl_fn_80668C40_00005640:
    li r4, 0xfc
    stb r4, 0x905(r29)
    li r0, 0x0
    stb r4, 0xb88(r29)
    stb r0, 0xb89(r29)
lbl_fn_80668C40_00005654:
    la r4, lbl_80880290
    lbzx r0, r4, r3
    stb r0, 0x906(r29)
    lbz r3, 0x905(r29)
    addi r0, r3, 0xfb
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_80668C40_000058D0
    cmplwi r3, 0x1
    beq lbl_fn_80668C40_000056A0
    cmplwi r3, 0x2
    beq lbl_fn_80668C40_00005898
    cmplwi r3, 0xfa
    beq lbl_fn_80668C40_000058D0
    cmplwi r3, 0x3
    beq lbl_fn_80668C40_00005D90
    cmplwi r3, 0x4
    beq lbl_fn_80668C40_00005DA0
    b lbl_fn_80668C40_00005DAC
lbl_fn_80668C40_000056A0:
    li r6, 0x200
    sth r6, 0x894(r29)
    li r0, 0x2cc
    mr r3, r28
    sth r6, 0x892(r29)
    li r4, 0xe
    li r5, 0x0
    sth r6, 0x890(r29)
    sth r0, 0x89a(r29)
    sth r0, 0x898(r29)
    sth r0, 0x896(r29)
    bl fn_80668A40
    cmpwi r3, 0x0
    beq lbl_fn_80668C40_000057AC
    lbz r0, 0x3(r28)
    lwzx r3, r31, r30
    lbz r4, 0x0(r28)
    extrwi r0, r0, 2, 26
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x890(r3)
    lbz r0, 0x3(r28)
    lbz r4, 0x1(r28)
    extrwi r0, r0, 2, 28
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x892(r3)
    lbz r0, 0x3(r28)
    lbz r4, 0x2(r28)
    clrlwi r0, r0, 30
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x894(r3)
    lbz r0, 0x7(r28)
    lbz r4, 0x4(r28)
    extrwi r0, r0, 2, 26
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x896(r3)
    lbz r0, 0x7(r28)
    lbz r4, 0x5(r28)
    extrwi r0, r0, 2, 28
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x898(r3)
    lbz r0, 0x7(r28)
    lbz r4, 0x6(r28)
    clrlwi r0, r0, 30
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x89a(r3)
    lbz r0, 0x8(r28)
    extsb r0, r0
    sth r0, 0x888(r3)
    lbz r0, 0x9(r28)
    extsb r0, r0
    sth r0, 0x886(r3)
    lbz r0, 0xb(r28)
    extsb r0, r0
    sth r0, 0x88e(r3)
    lbz r0, 0xc(r28)
    extsb r0, r0
    sth r0, 0x88c(r3)
    lbz r0, 0xb09(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80668C40_00005DAC
    lbz r0, 0xa(r28)
    extsb r0, r0
    sth r0, 0x884(r3)
    lbz r0, 0xd(r28)
    extsb r0, r0
    sth r0, 0x88a(r3)
    b lbl_fn_80668C40_00005DAC
lbl_fn_80668C40_000057AC:
    addi r3, r28, 0x10
    li r4, 0xe
    li r5, 0x0
    bl fn_80668A40
    cmpwi r3, 0x0
    beq lbl_fn_80668C40_00005DAC
    lbz r0, 0x13(r28)
    lwzx r3, r31, r30
    lbz r4, 0x10(r28)
    extrwi r0, r0, 2, 26
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x890(r3)
    lbz r0, 0x13(r28)
    lbz r4, 0x11(r28)
    extrwi r0, r0, 2, 28
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x892(r3)
    lbz r0, 0x13(r28)
    lbz r4, 0x12(r28)
    clrlwi r0, r0, 30
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x894(r3)
    lbz r0, 0x17(r28)
    lbz r4, 0x14(r28)
    extrwi r0, r0, 2, 26
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x896(r3)
    lbz r0, 0x17(r28)
    lbz r4, 0x15(r28)
    extrwi r0, r0, 2, 28
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x898(r3)
    lbz r0, 0x17(r28)
    lbz r4, 0x16(r28)
    clrlwi r0, r0, 30
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x89a(r3)
    lbz r0, 0x18(r28)
    extsb r0, r0
    sth r0, 0x888(r3)
    lbz r0, 0x19(r28)
    extsb r0, r0
    sth r0, 0x886(r3)
    lbz r0, 0x1b(r28)
    extsb r0, r0
    sth r0, 0x88e(r3)
    lbz r0, 0x1c(r28)
    extsb r0, r0
    sth r0, 0x88c(r3)
    lbz r0, 0xb09(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80668C40_00005DAC
    lbz r0, 0x1a(r28)
    extsb r0, r0
    sth r0, 0x884(r3)
    lbz r0, 0x1d(r28)
    extsb r0, r0
    sth r0, 0x88a(r3)
    b lbl_fn_80668C40_00005DAC
lbl_fn_80668C40_00005898:
    mr r3, r28
    li r4, 0xe
    li r5, 0x0
    bl fn_80668A40
    cmpwi r3, 0x0
    beq lbl_fn_80668C40_000058C0
    mr r3, r27
    mr r4, r28
    bl fn_80668B80
    b lbl_fn_80668C40_00005DAC
lbl_fn_80668C40_000058C0:
    mr r3, r27
    addi r4, r28, 0x10
    bl fn_80668B80
    b lbl_fn_80668C40_00005DAC
lbl_fn_80668C40_000058D0:
    li r0, 0x5
    stb r0, 0x939(r29)
    lfs f2, lbl_80888A28
    lis r3, 0x1
    stfs f2, 0x8b0(r29)
    subi r6, r3, 0x1
    lfs f1, lbl_80888A2C
    li r8, 0x4b0
    stfs f2, 0x8a8(r29)
    li r7, 0x10e
    lfs f0, lbl_80888A30
    li r0, -0x1
    stfs f2, 0x8a0(r29)
    addi r3, r28, 0xe
    addi r4, r28, 0x10
    li r5, 0xe
    stfs f1, 0x8b4(r29)
    stfs f1, 0x8ac(r29)
    stfs f1, 0x8a4(r29)
    stw r8, 0x8b8(r29)
    stfs f2, 0x8cc(r29)
    stfs f2, 0x8c4(r29)
    stfs f2, 0x8bc(r29)
    stfs f0, 0x8d0(r29)
    stfs f0, 0x8c8(r29)
    stfs f0, 0x8c0(r29)
    stw r7, 0x8d4(r29)
    sth r6, 0x8dc(r29)
    stw r0, 0x8d8(r29)
    lbz r30, 0xe(r28)
    lbz r31, 0xf(r28)
    bl memcpy
    stb r30, 0x1c(r28)
    mr r3, r28
    li r4, 0x1c
    li r5, 0x1
    stb r31, 0x1d(r28)
    bl fn_80668A40
    cmpwi r3, 0x0
    beq lbl_fn_80668C40_00005D04
    lbz r5, 0x4(r28)
    lis r4, lbl_80829DF0@ha
    lbz r3, 0x5(r28)
    slwi r0, r27, 2
    rlwimi r3, r5, 8, 16, 23
    lfd f3, lbl_80888A20
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    addi r4, r4, lbl_80829DF0@l
    lfs f2, lbl_80888A38
    lfd f0, 0x8(r1)
    lfs f1, lbl_80888A34
    fsubs f0, f0, f3
    lwzx r3, r4, r0
    fdivs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x8a0(r3)
    lbz r6, 0x0(r28)
    lbz r5, 0x1(r28)
    rlwimi r5, r6, 8, 16, 23
    xoris r5, r5, 0x8000
    stw r5, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fdivs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x8a8(r3)
    lbz r6, 0x2(r28)
    lbz r5, 0x3(r28)
    rlwimi r5, r6, 8, 16, 23
    xoris r5, r5, 0x8000
    stw r5, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fdivs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x8b0(r3)
    lbz r5, 0xc(r28)
    mulli r5, r5, 0x6
    stw r5, 0x8b8(r3)
    cmpwi r5, 0x0
    bne lbl_fn_80668C40_00005A20
    li r5, 0x5b
    stw r5, 0x8b8(r3)
lbl_fn_80668C40_00005A20:
    lbz r6, 0xa(r28)
    lbz r5, 0xb(r28)
    clrlslwi r6, r6, 24, 8
    lfd f3, lbl_80888A20
    extsh r6, r6
    extsh r5, r5
    or r5, r6, r5
    lfs f2, lbl_80888A38
    xoris r5, r5, 0x8000
    stw r5, 0x14(r1)
    lfs f0, lbl_808889E8
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f1, f1, f2
    stfs f1, 0x8a4(r3)
    lbz r6, 0x6(r28)
    lbz r5, 0x7(r28)
    clrlslwi r6, r6, 24, 8
    extsh r6, r6
    extsh r5, r5
    or r5, r6, r5
    xoris r5, r5, 0x8000
    stw r5, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f3
    fdivs f1, f1, f2
    stfs f1, 0x8ac(r3)
    lbz r6, 0x8(r28)
    lbz r5, 0x9(r28)
    clrlslwi r6, r6, 24, 8
    extsh r6, r6
    extsh r5, r5
    or r5, r6, r5
    xoris r5, r5, 0x8000
    stw r5, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f1, f1, f2
    stfs f1, 0x8b4(r3)
    lfs f1, 0x8a4(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80668C40_00005AD4
    lfs f0, lbl_80888A3C
    fsubs f0, f1, f0
    b lbl_fn_80668C40_00005ADC
lbl_fn_80668C40_00005AD4:
    lfs f0, lbl_80888A3C
    fadds f0, f0, f1
lbl_fn_80668C40_00005ADC:
    stfs f0, 0x8a4(r3)
    lfs f0, lbl_808889E8
    lfs f1, 0x8ac(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80668C40_00005AFC
    lfs f0, lbl_80888A3C
    fsubs f0, f1, f0
    b lbl_fn_80668C40_00005B04
lbl_fn_80668C40_00005AFC:
    lfs f0, lbl_80888A3C
    fadds f0, f0, f1
lbl_fn_80668C40_00005B04:
    stfs f0, 0x8ac(r3)
    lfs f0, lbl_808889E8
    lfs f1, 0x8b4(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80668C40_00005B24
    lfs f0, lbl_80888A3C
    fsubs f0, f1, f0
    b lbl_fn_80668C40_00005B2C
lbl_fn_80668C40_00005B24:
    lfs f0, lbl_80888A3C
    fadds f0, f0, f1
lbl_fn_80668C40_00005B2C:
    stfs f0, 0x8b4(r3)
    lfd f3, lbl_80888A20
    lbz r5, 0x12(r28)
    lbz r3, 0x13(r28)
    rlwimi r3, r5, 8, 16, 23
    lfs f2, lbl_80888A38
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    lfs f1, lbl_80888A34
    lfd f0, 0x8(r1)
    lwzx r3, r4, r0
    fsubs f0, f0, f3
    fdivs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x8bc(r3)
    lbz r4, 0xe(r28)
    lbz r0, 0xf(r28)
    rlwimi r0, r4, 8, 16, 23
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fdivs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x8c4(r3)
    lbz r4, 0x10(r28)
    lbz r0, 0x11(r28)
    rlwimi r0, r4, 8, 16, 23
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fdivs f0, f0, f2
    fadds f0, f1, f0
    stfs f0, 0x8cc(r3)
    lbz r0, 0x1a(r28)
    mulli r0, r0, 0x6
    stw r0, 0x8d4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80668C40_00005BD4
    li r0, 0x5b
    stw r0, 0x8d4(r3)
lbl_fn_80668C40_00005BD4:
    lbz r4, 0x18(r28)
    lbz r0, 0x19(r28)
    clrlslwi r4, r4, 24, 8
    lfd f3, lbl_80888A20
    extsh r4, r4
    extsh r0, r0
    or r0, r4, r0
    lfs f2, lbl_80888A38
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f0, lbl_808889E8
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f1, f1, f2
    stfs f1, 0x8c0(r3)
    lbz r4, 0x14(r28)
    lbz r0, 0x15(r28)
    clrlslwi r4, r4, 24, 8
    extsh r4, r4
    extsh r0, r0
    or r0, r4, r0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f3
    fdivs f1, f1, f2
    stfs f1, 0x8c8(r3)
    lbz r4, 0x16(r28)
    lbz r0, 0x17(r28)
    clrlslwi r4, r4, 24, 8
    extsh r4, r4
    extsh r0, r0
    or r0, r4, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f1, f1, f2
    stfs f1, 0x8d0(r3)
    lfs f1, 0x8c0(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80668C40_00005C88
    lfs f0, lbl_80888A3C
    fsubs f0, f1, f0
    b lbl_fn_80668C40_00005C90
lbl_fn_80668C40_00005C88:
    lfs f0, lbl_80888A3C
    fadds f0, f0, f1
lbl_fn_80668C40_00005C90:
    stfs f0, 0x8c0(r3)
    lfs f0, lbl_808889E8
    lfs f1, 0x8c8(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80668C40_00005CB0
    lfs f0, lbl_80888A3C
    fsubs f0, f1, f0
    b lbl_fn_80668C40_00005CB8
lbl_fn_80668C40_00005CB0:
    lfs f0, lbl_80888A3C
    fadds f0, f0, f1
lbl_fn_80668C40_00005CB8:
    stfs f0, 0x8c8(r3)
    lfs f0, lbl_808889E8
    lfs f1, 0x8d0(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80668C40_00005CD8
    lfs f0, lbl_80888A3C
    fsubs f0, f1, f0
    b lbl_fn_80668C40_00005CE0
lbl_fn_80668C40_00005CD8:
    lfs f0, lbl_80888A3C
    fadds f0, f0, f1
lbl_fn_80668C40_00005CE0:
    stfs f0, 0x8d0(r3)
    mr r3, r28
    li r4, 0x1c
    lbz r5, 0xd(r28)
    lbz r0, 0x1b(r28)
    rlwimi r0, r5, 8, 16, 23
    sth r0, 0x8dc(r29)
    bl fn_805F8570
    stw r3, 0x8d8(r29)
lbl_fn_80668C40_00005D04:
    li r0, 0x0
    stb r0, 0x947(r29)
    lhz r3, 0xbb2(r29)
    lhz r0, 0x8dc(r29)
    cmplw r3, r0
    bne lbl_fn_80668C40_00005D4C
    lwz r3, 0xbb4(r29)
    lwz r0, 0x8d8(r29)
    cmplw r3, r0
    bne lbl_fn_80668C40_00005D4C
    lbz r0, 0xbae(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80668C40_00005D54
    li r0, 0x1
    stb r0, 0x946(r29)
    li r0, 0xc
    stb r0, 0x947(r29)
    b lbl_fn_80668C40_00005D54
lbl_fn_80668C40_00005D4C:
    li r0, 0x0
    stb r0, 0xbae(r29)
lbl_fn_80668C40_00005D54:
    lbz r0, 0xbae(r29)
    cmpwi r0, 0x1
    beq lbl_fn_80668C40_00005D7C
    lbz r0, 0xbb1(r29)
    cmplwi r0, 0xe
    blt lbl_fn_80668C40_00005D7C
    la r3, lbl_80880294
    li r0, 0xfc
    stbx r0, r3, r27
    stb r0, 0x905(r29)
lbl_fn_80668C40_00005D7C:
    lhz r0, 0x8dc(r29)
    sth r0, 0xbb2(r29)
    lwz r0, 0x8d8(r29)
    stw r0, 0xbb4(r29)
    b lbl_fn_80668C40_00005DAC
lbl_fn_80668C40_00005D90:
    lhz r0, 0xb78(r29)
    cmplwi r0, 0x1
    bne lbl_fn_80668C40_00005DAC
    b lbl_fn_80668C40_00005DD0
lbl_fn_80668C40_00005DA0:
    lhz r0, 0xb78(r29)
    cmplwi r0, 0x20
    bne lbl_fn_80668C40_00005DD0
lbl_fn_80668C40_00005DAC:
    lwz r12, 0x8e4(r29)
    cmpwi r12, 0x0
    beq lbl_fn_80668C40_00005DC8
    mr r3, r27
    lbz r4, 0x905(r29)
    mtctr r12
    bctrl
lbl_fn_80668C40_00005DC8:
    li r0, 0x0
    stw r0, 0x8e0(r29)
lbl_fn_80668C40_00005DD0:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80669490(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_80829DF0@ha
    addi r29, r29, lbl_80829DF0@l
    stw r28, 0x10(r1)
    slwi r28, r3, 2
    lwzx r31, r29, r28
    lbz r0, 0x93b(r31)
    lwz r30, 0xb6c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80669490_00005F98
    cmpwi r4, 0x0
    bne lbl_fn_80669490_00005F88
    la r4, lbl_8088028C
    lbzx r0, r4, r3
    cmpwi r0, 0x0
    bne lbl_fn_80669490_00005F7C
    li r6, 0x200
    sth r6, 0x894(r31)
    li r0, 0x2cc
    mr r3, r30
    sth r6, 0x892(r31)
    li r4, 0xe
    li r5, 0x0
    sth r6, 0x890(r31)
    sth r0, 0x89a(r31)
    sth r0, 0x898(r31)
    sth r0, 0x896(r31)
    bl fn_80668A40
    cmpwi r3, 0x0
    beq lbl_fn_80669490_00005F58
    lbz r0, 0x3(r30)
    lwzx r3, r29, r28
    lbz r4, 0x0(r30)
    extrwi r0, r0, 2, 26
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x890(r3)
    lbz r0, 0x3(r30)
    lbz r4, 0x1(r30)
    extrwi r0, r0, 2, 28
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x892(r3)
    lbz r0, 0x3(r30)
    lbz r4, 0x2(r30)
    clrlwi r0, r0, 30
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x894(r3)
    lbz r0, 0x7(r30)
    lbz r4, 0x4(r30)
    extrwi r0, r0, 2, 26
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x896(r3)
    lbz r0, 0x7(r30)
    lbz r4, 0x5(r30)
    extrwi r0, r0, 2, 28
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x898(r3)
    lbz r0, 0x7(r30)
    lbz r4, 0x6(r30)
    clrlwi r0, r0, 30
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x89a(r3)
    lbz r0, 0x8(r30)
    extsb r0, r0
    sth r0, 0x888(r3)
    lbz r0, 0x9(r30)
    extsb r0, r0
    sth r0, 0x886(r3)
    lbz r0, 0xb(r30)
    extsb r0, r0
    sth r0, 0x88e(r3)
    lbz r0, 0xc(r30)
    extsb r0, r0
    sth r0, 0x88c(r3)
    lbz r0, 0xb09(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80669490_00005F4C
    lbz r0, 0xa(r30)
    extsb r0, r0
    sth r0, 0x884(r3)
    lbz r0, 0xd(r30)
    extsb r0, r0
    sth r0, 0x88a(r3)
lbl_fn_80669490_00005F4C:
    li r0, 0x4
    stb r0, 0x93d(r31)
    b lbl_fn_80669490_00005F98
lbl_fn_80669490_00005F58:
    lbz r3, 0x93d(r31)
    cmplwi r3, 0x3
    bne lbl_fn_80669490_00005F70
    addi r0, r3, 0x3
    stb r0, 0x93d(r31)
    b lbl_fn_80669490_00005F98
lbl_fn_80669490_00005F70:
    li r0, 0x4
    stb r0, 0x93d(r31)
    b lbl_fn_80669490_00005F98
lbl_fn_80669490_00005F7C:
    li r0, 0x4
    stb r0, 0x93d(r31)
    b lbl_fn_80669490_00005F98
lbl_fn_80669490_00005F88:
    cmpwi r4, -0x3
    bne lbl_fn_80669490_00005F98
    li r0, 0x2
    stb r0, 0x93d(r31)
lbl_fn_80669490_00005F98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80669660(void)
{
    nofralloc
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x3
    ble lbl_fn_80669660_00005FF8
    addi r0, r3, 0xef
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_fn_80669660_00005FF8
    cmplwi r3, 0x14
    beq lbl_fn_80669660_00005FF8
    addi r0, r3, 0xeb
    clrlwi r0, r0, 24
    cmplwi r0, 0x7
    bgt lbl_fn_80669660_00006000
lbl_fn_80669660_00005FF8:
    li r3, 0x1
    blr
lbl_fn_80669660_00006000:
    li r3, 0x0
    blr
}

asm void fn_806696B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r31, lbl_80829DF0@ha
    slwi r28, r3, 2
    addi r31, r31, lbl_80829DF0@l
    cmpwi r4, 0x0
    lwzx r27, r31, r28
    mr r24, r3
    addi r26, r27, 0x5ec
    addi r25, r27, 0xb2c
    bne lbl_fn_806696B0_000066B0
    lwz r0, 0x840(r27)
    cmpwi r0, 0x0
    bne lbl_fn_806696B0_00006074
    la r4, lbl_80880294
    li r0, 0x0
    stbx r0, r4, r3
    la r4, lbl_80880290
    stb r0, 0x905(r27)
    stbx r0, r4, r3
    stb r0, 0x906(r27)
    b lbl_fn_806696B0_000066C8
lbl_fn_806696B0_00006074:
    lis r4, lbl_80765188@ha
    mr r3, r25
    addi r4, r4, lbl_80765188@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806696B0_000060A8
    lbz r0, 0xc(r25)
    cmpwi r0, 0x0
    bne lbl_fn_806696B0_000060CC
    lbz r0, 0xd(r25)
    cmpwi r0, 0x0
    bne lbl_fn_806696B0_000060CC
lbl_fn_806696B0_000060A8:
    la r3, lbl_80880294
    la r0, lbl_80880290
    add r30, r3, r24
    add r29, r0, r24
    li r3, 0xfc
    li r0, 0x0
    stb r3, 0x0(r30)
    stb r0, 0x0(r29)
    b lbl_fn_806696B0_0000646C
lbl_fn_806696B0_000060CC:
    la r4, lbl_80880284
    li r23, 0x0
    stbx r23, r4, r24
    la r0, lbl_80880290
    add r29, r0, r24
    lbz r0, 0xe(r25)
    stb r0, 0x0(r29)
    lbz r0, 0xf(r25)
    cmplwi r0, 0x12
    bgt lbl_fn_806696B0_0000645C
    lis r3, jumptable_807B9608@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B9608@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    la r3, lbl_80880294
    li r0, 0x1
    stbx r0, r3, r24
    add r30, r3, r24
    b lbl_fn_806696B0_0000646C
    la r3, lbl_80880294
    li r0, 0x2
    stbx r0, r3, r24
    add r30, r3, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8066E8F0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_00006148
    li r3, 0x3
lbl_fn_806696B0_00006148:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CE60
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_0000616C
    li r3, 0x10
lbl_fn_806696B0_0000616C:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CE90
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_00006190
    li r3, 0x13
lbl_fn_806696B0_00006190:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEC0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_000061B4
    li r3, 0x1d
lbl_fn_806696B0_000061B4:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    beq lbl_fn_806696B0_000061F0
    la r3, lbl_80880294
    li r0, 0x1
    add r30, r3, r24
    stb r0, 0x0(r29)
    li r3, 0x2
    stb r3, 0x0(r30)
    stbx r0, r4, r24
    b lbl_fn_806696B0_0000646C
lbl_fn_806696B0_000061F0:
    lbz r0, 0xa(r25)
    cmplwi r0, 0xb
    bgt lbl_fn_806696B0_000063A0
    lis r3, jumptable_807B95D8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B95D8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    bl fn_8065CE70
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_00006228
    li r3, 0x11
lbl_fn_806696B0_00006228:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CE80
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_0000624C
    li r3, 0x12
lbl_fn_806696B0_0000624C:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEA0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_00006270
    li r3, 0x14
lbl_fn_806696B0_00006270:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEB0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_00006294
    li r3, 0x15
lbl_fn_806696B0_00006294:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEB0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_000062B8
    li r3, 0x16
lbl_fn_806696B0_000062B8:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEB0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_000062DC
    li r3, 0x17
lbl_fn_806696B0_000062DC:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEB0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_00006300
    li r3, 0x18
lbl_fn_806696B0_00006300:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEB0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_00006324
    li r3, 0x19
lbl_fn_806696B0_00006324:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEB0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_00006348
    li r3, 0x1a
lbl_fn_806696B0_00006348:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEB0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_0000636C
    li r3, 0x1b
lbl_fn_806696B0_0000636C:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CEB0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_fn_806696B0_00006390
    li r3, 0x1c
lbl_fn_806696B0_00006390:
    la r0, lbl_80880294
    stbx r3, r24, r0
    add r30, r0, r24
    b lbl_fn_806696B0_0000646C
lbl_fn_806696B0_000063A0:
    la r3, lbl_80880294
    li r0, 0xfb
    stbx r0, r3, r24
    add r30, r3, r24
    b lbl_fn_806696B0_0000646C
    bl fn_8065CE50
    cmpwi r3, 0x0
    beq lbl_fn_806696B0_000063D8
    la r3, lbl_80880294
    li r0, 0x4
    stbx r0, r3, r24
    add r30, r3, r24
    stb r23, 0xbbc(r27)
    b lbl_fn_806696B0_0000646C
lbl_fn_806696B0_000063D8:
    la r3, lbl_80880294
    li r0, 0xfb
    stbx r0, r3, r24
    add r30, r3, r24
    b lbl_fn_806696B0_0000646C
    lbz r3, 0xe(r25)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_806696B0_00006404
    cmpwi r3, 0x7
    bne lbl_fn_806696B0_00006418
lbl_fn_806696B0_00006404:
    la r3, lbl_80880294
    li r0, 0x5
    stbx r0, r3, r24
    add r30, r3, r24
    b lbl_fn_806696B0_00006428
lbl_fn_806696B0_00006418:
    la r3, lbl_80880294
    li r0, 0xfb
    stbx r0, r3, r24
    add r30, r3, r24
lbl_fn_806696B0_00006428:
    li r5, 0x0
    stb r5, 0x93b(r27)
    li r0, 0xfd
    la r4, lbl_8088028C
    stb r5, 0x93d(r27)
    la r3, lbl_80880288
    stb r0, 0x93c(r27)
    lbz r0, 0x9(r25)
    stbx r0, r4, r24
    lbz r0, 0x8(r25)
    stbx r0, r3, r24
    stb r5, 0xbad(r27)
    b lbl_fn_806696B0_0000646C
lbl_fn_806696B0_0000645C:
    la r3, lbl_80880294
    li r0, 0xfb
    stbx r0, r3, r24
    add r30, r3, r24
lbl_fn_806696B0_0000646C:
    lbz r0, 0x0(r30)
    cmplwi r0, 0x2
    bne lbl_fn_806696B0_00006494
    lbz r3, 0x0(r29)
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_806696B0_00006494
    li r0, 0xfc
    stb r0, 0x0(r30)
lbl_fn_806696B0_00006494:
    lbz r0, 0xb89(r27)
    cmpwi r0, 0x0
    beq lbl_fn_806696B0_000064C8
    lbz r3, 0xb88(r27)
    lbz r0, 0x0(r30)
    cmplw r3, r0
    bne lbl_fn_806696B0_000064C8
    lbz r0, 0xb09(r27)
    cmpwi r0, 0x0
    beq lbl_fn_806696B0_000064D0
    li r0, 0x1
    stb r0, 0xb09(r27)
    b lbl_fn_806696B0_000064D0
lbl_fn_806696B0_000064C8:
    li r0, 0x0
    stb r0, 0xb09(r27)
lbl_fn_806696B0_000064D0:
    lbz r3, 0x0(r30)
    li r0, 0x0
    stb r3, 0xb88(r27)
    stb r0, 0xb89(r27)
    lbz r3, 0x0(r30)
    addi r0, r3, 0xfb
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_806696B0_0000653C
    addi r0, r3, 0x5
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_fn_806696B0_00006510
    cmplwi r3, 0xfa
    beq lbl_fn_806696B0_0000653C
    b lbl_fn_806696B0_000065B4
lbl_fn_806696B0_00006510:
    stb r3, 0x905(r27)
    lbz r0, 0x0(r29)
    stb r0, 0x906(r27)
    lwz r12, 0x8e4(r27)
    cmpwi r12, 0x0
    beq lbl_fn_806696B0_000066C8
    mr r3, r24
    lbz r4, 0x905(r27)
    mtctr r12
    bctrl
    b lbl_fn_806696B0_000066C8
lbl_fn_806696B0_0000653C:
    lwzx r23, r31, r28
    li r24, 0x0
    li r0, -0x1
    li r4, 0x0
    stb r24, 0x946(r23)
    addi r3, r23, 0x94c
    li r5, 0x48
    stb r24, 0x945(r23)
    stb r0, 0x944(r23)
    stb r0, 0x947(r23)
    sth r24, 0x942(r23)
    stb r24, 0x93f(r23)
    sth r24, 0x940(r23)
    bl memset
    addi r3, r23, 0x994
    li r4, 0x0
    li r5, 0x48
    bl memset
    addi r3, r23, 0x9dc
    li r4, 0x0
    li r5, 0x108
    bl memset
    li r0, 0x1
    stw r0, 0x9dc(r23)
    stw r0, 0x994(r23)
    stw r0, 0x94c(r23)
    stb r24, 0x93e(r23)
    lbz r0, 0x7(r25)
    stb r0, 0xbb1(r27)
    b lbl_fn_806696B0_00006690
lbl_fn_806696B0_000065B4:
    bl fn_80669660
    cmpwi r3, 0x0
    beq lbl_fn_806696B0_000065D4
    li r0, 0x2
    stb r0, 0xb85(r27)
    mr r3, r24
    bl fn_8066D0B0
    b lbl_fn_806696B0_000065E4
lbl_fn_806696B0_000065D4:
    li r0, 0x3
    stb r0, 0xb85(r27)
    mr r3, r24
    bl fn_8066D690
lbl_fn_806696B0_000065E4:
    lis r25, 0x4a4
    lis r24, fn_80667E40@ha
    mr r3, r26
    li r4, 0xaa
    addi r5, r25, 0xf0
    addi r6, r24, fn_80667E40@l
    bl fn_80666220
    mr r3, r26
    addi r4, r27, 0xb0c
    addi r6, r25, 0x40
    addi r7, r24, fn_80667E40@l
    li r5, 0x6
    bl fn_806663E0
    mr r3, r26
    addi r4, r27, 0xb12
    addi r6, r25, 0x46
    addi r7, r24, fn_80667E40@l
    li r5, 0x6
    bl fn_806663E0
    mr r3, r26
    addi r4, r27, 0xb18
    addi r6, r25, 0x4c
    addi r7, r24, fn_80667E40@l
    li r5, 0x4
    bl fn_806663E0
    lbz r0, 0x0(r30)
    cmplwi r0, 0x3
    bne lbl_fn_806696B0_00006690
    mr r3, r26
    addi r5, r25, 0xf1
    addi r6, r24, fn_80667E40@l
    li r4, 0xaa
    bl fn_80666220
    mr r3, r26
    addi r5, r25, 0xf1
    addi r6, r24, fn_80667E40@l
    li r4, 0xaa
    bl fn_80666220
    mr r3, r26
    addi r5, r25, 0xf1
    addi r6, r24, fn_80667E40@l
    li r4, 0xaa
    bl fn_80666220
lbl_fn_806696B0_00006690:
    lis r5, 0x4a4
    lwz r7, 0x8e4(r27)
    addi r6, r5, 0x20
    mr r3, r26
    addi r4, r27, 0xb2c
    li r5, 0x20
    bl fn_806665A0
    b lbl_fn_806696B0_000066C8
lbl_fn_806696B0_000066B0:
    li r3, 0xfc
    stb r3, 0x905(r27)
    li r0, 0x0
    stb r0, 0x906(r27)
    stb r3, 0xb88(r27)
    stb r0, 0xb89(r27)
lbl_fn_806696B0_000066C8:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80669D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80829DF0@ha
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    li r9, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r5
    lwzx r31, r6, r0
    lwz r4, 0xb6c(r31)
    bne lbl_fn_80669D80_0000685C
    li r0, 0x2
    li r8, 0x0
    mtctr r0
lbl_fn_80669D80_00006724:
    add r7, r4, r8
    lbzx r6, r4, r8
    lbz r3, 0x1(r7)
    addi r8, r8, 0x7
    add r9, r9, r6
    lbz r0, 0x2(r7)
    add r9, r9, r3
    lbz r3, 0x3(r7)
    add r9, r9, r0
    lbz r0, 0x4(r7)
    add r9, r9, r3
    lbz r3, 0x5(r7)
    add r9, r9, r0
    lbz r0, 0x6(r7)
    add r9, r9, r3
    add r7, r4, r8
    lbzx r6, r4, r8
    add r9, r9, r0
    lbz r3, 0x1(r7)
    addi r8, r8, 0x7
    add r9, r9, r6
    lbz r0, 0x2(r7)
    add r9, r9, r3
    lbz r3, 0x3(r7)
    add r9, r9, r0
    lbz r0, 0x4(r7)
    add r9, r9, r3
    lbz r3, 0x5(r7)
    add r9, r9, r0
    lbz r0, 0x6(r7)
    add r9, r9, r3
    add r7, r4, r8
    lbzx r6, r4, r8
    add r9, r9, r0
    lbz r3, 0x1(r7)
    addi r8, r8, 0x7
    add r9, r9, r6
    lbz r0, 0x2(r7)
    add r9, r9, r3
    lbz r3, 0x3(r7)
    add r9, r9, r0
    lbz r0, 0x4(r7)
    add r9, r9, r3
    lbz r3, 0x5(r7)
    add r9, r9, r0
    lbz r0, 0x6(r7)
    add r9, r9, r3
    add r9, r9, r0
    bdnz lbl_fn_80669D80_00006724
    add r6, r8, r4
    lbzx r0, r4, r8
    lbz r3, 0x1(r6)
    add r9, r9, r0
    lbz r0, 0x2(r6)
    add r9, r9, r3
    lbz r3, 0x3(r6)
    add r9, r9, r0
    lbz r0, 0x4(r6)
    add r9, r9, r3
    lbz r3, 0x2f(r4)
    add r9, r9, r0
    addi r0, r9, 0x55
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_80669D80_00006848
    mr r3, r31
    li r5, 0x38
    bl memcpy
    clrlslwi r0, r30, 24, 2
    li r4, 0x0
    add r3, r31, r0
    stw r4, 0x38(r3)
    b lbl_fn_80669D80_0000686C
lbl_fn_80669D80_00006848:
    clrlslwi r0, r5, 24, 2
    li r4, -0x4
    add r3, r31, r0
    stw r4, 0x38(r3)
    b lbl_fn_80669D80_0000686C
lbl_fn_80669D80_0000685C:
    clrlslwi r0, r5, 24, 2
    li r4, -0x4
    add r3, r31, r0
    stw r4, 0x38(r3)
lbl_fn_80669D80_0000686C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80669F30(void)
{
    nofralloc
    lis r6, lbl_80829DF0@ha
    cmplwi r4, 0x30
    clrlslwi r0, r3, 24, 2
    addi r6, r6, lbl_80829DF0@l
    lwzx r6, r6, r0
    bne lbl_fn_80669F30_000068B4
    lwz r0, 0x8fc(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80669F30_000069A0
lbl_fn_80669F30_000068B4:
    cmplwi r4, 0x31
    bne lbl_fn_80669F30_000068C8
    lwz r0, 0x8fc(r6)
    cmplwi r0, 0x1
    beq lbl_fn_80669F30_000069A0
lbl_fn_80669F30_000068C8:
    cmplwi r4, 0x32
    bne lbl_fn_80669F30_000068EC
    lwz r0, 0x8fc(r6)
    cmplwi r0, 0x3
    beq lbl_fn_80669F30_000069A0
    cmplwi r0, 0x6
    beq lbl_fn_80669F30_000069A0
    cmplwi r0, 0xa
    beq lbl_fn_80669F30_000069A0
lbl_fn_80669F30_000068EC:
    cmplwi r4, 0x33
    bne lbl_fn_80669F30_00006900
    lwz r0, 0x8fc(r6)
    cmplwi r0, 0x2
    beq lbl_fn_80669F30_000069A0
lbl_fn_80669F30_00006900:
    cmplwi r4, 0x34
    bne lbl_fn_80669F30_00006914
    lwz r0, 0x8fc(r6)
    cmplwi r0, 0xc
    beq lbl_fn_80669F30_000069A0
lbl_fn_80669F30_00006914:
    cmplwi r4, 0x35
    bne lbl_fn_80669F30_00006948
    lwz r0, 0x8fc(r6)
    cmplwi r0, 0x4
    beq lbl_fn_80669F30_000069A0
    cmplwi r0, 0x7
    beq lbl_fn_80669F30_000069A0
    cmplwi r0, 0xd
    beq lbl_fn_80669F30_000069A0
    cmplwi r0, 0x14
    beq lbl_fn_80669F30_000069A0
    cmplwi r0, 0x13
    beq lbl_fn_80669F30_000069A0
lbl_fn_80669F30_00006948:
    cmplwi r4, 0x37
    bne lbl_fn_80669F30_00006978
    lwz r3, 0x8fc(r6)
    subi r0, r3, 0xf
    cmplwi r0, 0x3
    ble lbl_fn_80669F30_000069A0
    cmplwi r3, 0x5
    beq lbl_fn_80669F30_000069A0
    cmplwi r3, 0x8
    beq lbl_fn_80669F30_000069A0
    cmplwi r3, 0xb
    beq lbl_fn_80669F30_000069A0
lbl_fn_80669F30_00006978:
    cmplwi r4, 0x3e
    bne lbl_fn_80669F30_0000698C
    lwz r0, 0x8fc(r6)
    cmplwi r0, 0x9
    beq lbl_fn_80669F30_000069A0
lbl_fn_80669F30_0000698C:
    cmplwi r4, 0x3f
    bne lbl_fn_80669F30_000069AC
    lwz r0, 0x8fc(r6)
    cmplwi r0, 0x9
    bne lbl_fn_80669F30_000069AC
lbl_fn_80669F30_000069A0:
    li r0, 0x0
    stb r0, 0x29(r5)
    blr
lbl_fn_80669F30_000069AC:
    li r0, -0x4
    stb r0, 0x29(r5)
    blr
}

asm void fn_8066A060(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lbz r5, 0x0(r4)
    lis r31, lbl_80829DF0@ha
    clrlslwi r30, r3, 24, 2
    mr r25, r3
    addi r0, r5, 0xe0
    addi r31, r31, lbl_80829DF0@l
    clrlwi r0, r0, 24
    lwzx r29, r31, r30
    cmplwi r0, 0x1f
    mr r26, r4
    li r27, 0x0
    bgt lbl_fn_8066A060_00006AE0
    bl OSDisableInterrupts
    lwzx r4, r31, r30
    mr r28, r3
    lbz r5, 0x0(r26)
    lbz r0, 0x90c(r4)
    cmplwi r5, 0x3e
    mulli r0, r0, 0x60
    add r3, r4, r0
    addi r24, r3, 0xa0
    beq lbl_fn_8066A060_00006A44
    cmplwi r5, 0x3f
    beq lbl_fn_8066A060_00006A44
    mr r3, r24
    li r4, 0x0
    li r5, 0x60
    bl memset
lbl_fn_8066A060_00006A44:
    lbz r4, 0x0(r26)
    mr r3, r25
    mr r5, r24
    bl fn_80669F30
    lbz r4, 0x0(r26)
    lis r6, lbl_807B9558@ha
    addi r6, r6, lbl_807B9558@l
    mr r3, r25
    subi r0, r4, 0x20
    mr r4, r26
    slwi r0, r0, 2
    mr r5, r24
    lwzx r12, r6, r0
    mtctr r12
    bctrl
    lwz r0, 0x920(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8066A060_00006A94
    li r0, -0x4
    stb r0, 0x29(r24)
lbl_fn_8066A060_00006A94:
    lbz r0, 0x905(r29)
    stb r0, 0x28(r24)
    lbz r0, 0x0(r26)
    cmplwi r0, 0x3e
    beq lbl_fn_8066A060_00006AC4
    cmplwi r0, 0x3f
    beq lbl_fn_8066A060_00006AC4
    lwzx r3, r31, r30
    lbz r0, 0x90c(r3)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x90c(r3)
lbl_fn_8066A060_00006AC4:
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r25
    bl fn_806618F0
    mr r3, r25
    bl fn_80661A10
    b lbl_fn_8066A060_00006AE4
lbl_fn_8066A060_00006AE0:
    li r27, -0x1
lbl_fn_8066A060_00006AE4:
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
