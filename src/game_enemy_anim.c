#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_800185B4(void);
extern void fn_800A6BDC(void);
extern void fn_8020FCE8(void);
extern void fn_80219160(void);
extern void fn_80219558(void);
extern void fn_8021AF98(void);
extern void fn_8021AFF4(void);
extern void fn_80370174(void);

/* External data declarations */
extern u8 lbl_80737348[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_80881900;
extern u32 lbl_80881904;
extern u32 lbl_80881910;
extern u32 lbl_80881918;
extern u32 lbl_80881920;
extern u32 lbl_80881924;
extern u32 lbl_80881928;
extern u32 lbl_8088192C;

/* Function declarations */
void fn_8012C6D4(void);
void fn_8012CE4C(void);
void fn_8012D180(void);
void fn_8012D628(void);
void fn_8012D714(void);
void fn_8012D8B8(void);
void fn_8012DB04(void);

asm void fn_8012C6D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    cmpwi r5, 0x1
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    stw r0, 0x10(r1)
    mr r29, r7
    li r0, 0x1
    blt lbl_fn_8012C6D4_00000040
    mr r0, r28
lbl_fn_8012C6D4_00000040:
    add r31, r5, r6
    stw r0, 0x78(r4)
    cmpwi r31, 0x1
    li r30, 0x1
    blt lbl_fn_8012C6D4_00000058
    mr r30, r31
lbl_fn_8012C6D4_00000058:
    lwz r6, 0x2f0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8012C6D4_00000070
    lwz r0, 0x48(r6)
    cmpwi r0, 0x2
    beq lbl_fn_8012C6D4_000000D4
lbl_fn_8012C6D4_00000070:
    cmpwi r5, 0x1
    li r0, 0x1
    blt lbl_fn_8012C6D4_00000080
    mr r0, r28
lbl_fn_8012C6D4_00000080:
    cmpwi r0, 0x63
    ble lbl_fn_8012C6D4_00000090
    li r0, 0x63
    b lbl_fn_8012C6D4_000000A0
lbl_fn_8012C6D4_00000090:
    cmpwi r5, 0x1
    li r0, 0x1
    blt lbl_fn_8012C6D4_000000A0
    mr r0, r28
lbl_fn_8012C6D4_000000A0:
    cmpwi r31, 0x1
    stw r0, 0x78(r4)
    li r0, 0x1
    blt lbl_fn_8012C6D4_000000B4
    mr r0, r31
lbl_fn_8012C6D4_000000B4:
    cmpwi r0, 0x63
    ble lbl_fn_8012C6D4_000000C4
    li r30, 0x63
    b lbl_fn_8012C6D4_000000D4
lbl_fn_8012C6D4_000000C4:
    cmpwi r31, 0x1
    li r30, 0x1
    blt lbl_fn_8012C6D4_000000D4
    mr r30, r31
lbl_fn_8012C6D4_000000D4:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8012C6D4_000001E0
    lwz r3, 0x2f0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8012C6D4_000001E0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8012C6D4_000001E0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012C6D4_0000017C
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_8012C6D4_0000017C
    cmpwi r28, 0x1
    li r0, 0x1
    blt lbl_fn_8012C6D4_00000124
    mr r0, r28
lbl_fn_8012C6D4_00000124:
    cmpwi r0, 0x45
    ble lbl_fn_8012C6D4_00000134
    li r0, 0x45
    b lbl_fn_8012C6D4_00000144
lbl_fn_8012C6D4_00000134:
    cmpwi r28, 0x1
    li r0, 0x1
    blt lbl_fn_8012C6D4_00000144
    mr r0, r28
lbl_fn_8012C6D4_00000144:
    cmpwi r31, 0x1
    stw r0, 0x78(r27)
    li r0, 0x1
    blt lbl_fn_8012C6D4_00000158
    mr r0, r31
lbl_fn_8012C6D4_00000158:
    cmpwi r0, 0x45
    ble lbl_fn_8012C6D4_00000168
    li r30, 0x45
    b lbl_fn_8012C6D4_000001E0
lbl_fn_8012C6D4_00000168:
    cmpwi r31, 0x1
    li r30, 0x1
    blt lbl_fn_8012C6D4_000001E0
    mr r30, r31
    b lbl_fn_8012C6D4_000001E0
lbl_fn_8012C6D4_0000017C:
    cmpwi r28, 0x1
    li r0, 0x1
    blt lbl_fn_8012C6D4_0000018C
    mr r0, r28
lbl_fn_8012C6D4_0000018C:
    cmpwi r0, 0x3e7
    ble lbl_fn_8012C6D4_0000019C
    li r0, 0x3e7
    b lbl_fn_8012C6D4_000001AC
lbl_fn_8012C6D4_0000019C:
    cmpwi r28, 0x1
    li r0, 0x1
    blt lbl_fn_8012C6D4_000001AC
    mr r0, r28
lbl_fn_8012C6D4_000001AC:
    cmpwi r31, 0x1
    stw r0, 0x78(r27)
    li r0, 0x1
    blt lbl_fn_8012C6D4_000001C0
    mr r0, r31
lbl_fn_8012C6D4_000001C0:
    cmpwi r0, 0x3e7
    ble lbl_fn_8012C6D4_000001D0
    li r30, 0x3e7
    b lbl_fn_8012C6D4_000001E0
lbl_fn_8012C6D4_000001D0:
    cmpwi r31, 0x1
    li r30, 0x1
    blt lbl_fn_8012C6D4_000001E0
    mr r30, r31
lbl_fn_8012C6D4_000001E0:
    mr r3, r29
    bl fn_8020FCE8
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8012C6D4_00000760
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8012C6D4_00000510
    lwz r3, 0x2f0(r26)
    li r29, 0x3c
    cmpwi r3, 0x0
    beq lbl_fn_8012C6D4_00000220
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8012C6D4_00000220
    li r29, 0x78
lbl_fn_8012C6D4_00000220:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012C6D4_00000240
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8012C6D4_00000240
    li r29, 0x78
lbl_fn_8012C6D4_00000240:
    subf r3, r29, r30
    cmpw r30, r29
    srawi r0, r3, 31
    andc r28, r3, r0
    bge lbl_fn_8012C6D4_00000258
    mr r29, r30
lbl_fn_8012C6D4_00000258:
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lis r26, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x48(r31)
    lwz r3, 0x44(r31)
    bl fn_800A6BDC
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x1
    bge lbl_fn_8012C6D4_00000298
    li r3, 0x1
    b lbl_fn_8012C6D4_000002C4
lbl_fn_8012C6D4_00000298:
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x48(r31)
    lwz r3, 0x44(r31)
    bl fn_800A6BDC
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_8012C6D4_000002C4:
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    mulli r0, r28, 0x32
    lis r26, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    add r0, r0, r3
    stw r0, 0x84(r27)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    lwz r3, 0x8(r31)
    bl fn_800A6BDC
    lfs f3, lbl_80881904
    fcmpo cr0, f3, f1
    ble lbl_fn_8012C6D4_00000304
    b lbl_fn_8012C6D4_00000328
lbl_fn_8012C6D4_00000304:
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    lwz r3, 0x8(r31)
    bl fn_800A6BDC
    fmr f3, f1
lbl_fn_8012C6D4_00000328:
    slwi r0, r28, 2
    lis r26, lbl_80737348@ha
    subf r30, r28, r0
    lfd f2, lbl_80737348@l(r26)
    xoris r3, r30, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r29, 0x8000
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    lfd f0, 0x10(r1)
    fadds f1, f1, f3
    fsubs f0, f0, f2
    stfs f1, 0x0(r27)
    stfs f0, 0x24(r31)
    lwz r3, 0x20(r31)
    bl fn_800A6BDC
    lfs f3, lbl_80881904
    fcmpo cr0, f3, f1
    ble lbl_fn_8012C6D4_0000037C
    b lbl_fn_8012C6D4_000003A0
lbl_fn_8012C6D4_0000037C:
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x24(r31)
    lwz r3, 0x20(r31)
    bl fn_800A6BDC
    fmr f3, f1
lbl_fn_8012C6D4_000003A0:
    xoris r0, r30, 0x8000
    stw r0, 0x14(r1)
    lis r26, lbl_80737348@ha
    lfd f2, lbl_80737348@l(r26)
    xoris r0, r29, 0x8000
    lfd f0, 0x10(r1)
    stw r0, 0xc(r1)
    fsubs f1, f0, f2
    lfd f0, 0x8(r1)
    fadds f1, f1, f3
    fsubs f0, f0, f2
    stfs f1, 0x8(r27)
    stfs f0, 0x18(r31)
    lwz r3, 0x14(r31)
    bl fn_800A6BDC
    lfs f3, lbl_80881904
    fcmpo cr0, f3, f1
    ble lbl_fn_8012C6D4_000003EC
    b lbl_fn_8012C6D4_00000410
lbl_fn_8012C6D4_000003EC:
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x18(r31)
    lwz r3, 0x14(r31)
    bl fn_800A6BDC
    fmr f3, f1
lbl_fn_8012C6D4_00000410:
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r26, lbl_80737348@ha
    lfd f2, lbl_80737348@l(r26)
    xoris r0, r29, 0x8000
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    lfd f0, 0x10(r1)
    fadds f1, f1, f3
    fsubs f0, f0, f2
    stfs f1, 0x4(r27)
    stfs f0, 0x30(r31)
    lwz r3, 0x2c(r31)
    bl fn_800A6BDC
    lfs f3, lbl_80881904
    fcmpo cr0, f3, f1
    ble lbl_fn_8012C6D4_0000045C
    b lbl_fn_8012C6D4_00000480
lbl_fn_8012C6D4_0000045C:
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x30(r31)
    lwz r3, 0x2c(r31)
    bl fn_800A6BDC
    fmr f3, f1
lbl_fn_8012C6D4_00000480:
    xoris r0, r30, 0x8000
    stw r0, 0x14(r1)
    lis r26, lbl_80737348@ha
    lfd f2, lbl_80737348@l(r26)
    xoris r0, r29, 0x8000
    lfd f0, 0x10(r1)
    stw r0, 0xc(r1)
    fsubs f1, f0, f2
    lfd f0, 0x8(r1)
    fadds f1, f1, f3
    fsubs f0, f0, f2
    stfs f1, 0xc(r27)
    stfs f0, 0x3c(r31)
    lwz r3, 0x38(r31)
    bl fn_800A6BDC
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x1
    bge lbl_fn_8012C6D4_000004D8
    li r0, 0x1
    b lbl_fn_8012C6D4_00000504
lbl_fn_8012C6D4_000004D8:
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x3c(r31)
    lwz r3, 0x38(r31)
    bl fn_800A6BDC
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
lbl_fn_8012C6D4_00000504:
    add r0, r30, r0
    stw r0, 0x94(r27)
    b lbl_fn_8012C6D4_00000760
lbl_fn_8012C6D4_00000510:
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r26, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x48(r3)
    lwz r3, 0x44(r3)
    bl fn_800A6BDC
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x1
    bge lbl_fn_8012C6D4_00000550
    li r3, 0x1
    b lbl_fn_8012C6D4_0000057C
lbl_fn_8012C6D4_00000550:
    xoris r0, r30, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x48(r31)
    lwz r3, 0x44(r31)
    bl fn_800A6BDC
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_8012C6D4_0000057C:
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r26, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    stw r3, 0x84(r27)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    lwz r3, 0x8(r31)
    bl fn_800A6BDC
    lfs f2, lbl_80881904
    fcmpo cr0, f2, f1
    ble lbl_fn_8012C6D4_000005B4
    b lbl_fn_8012C6D4_000005D8
lbl_fn_8012C6D4_000005B4:
    xoris r0, r30, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    lwz r3, 0x8(r31)
    bl fn_800A6BDC
    fmr f2, f1
lbl_fn_8012C6D4_000005D8:
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r26, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    stfs f2, 0x0(r27)
    fsubs f0, f0, f1
    stfs f0, 0x24(r31)
    lwz r3, 0x20(r31)
    bl fn_800A6BDC
    lfs f2, lbl_80881904
    fcmpo cr0, f2, f1
    ble lbl_fn_8012C6D4_00000610
    b lbl_fn_8012C6D4_00000634
lbl_fn_8012C6D4_00000610:
    xoris r0, r30, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x24(r31)
    lwz r3, 0x20(r31)
    bl fn_800A6BDC
    fmr f2, f1
lbl_fn_8012C6D4_00000634:
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r26, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    stfs f2, 0x8(r27)
    fsubs f0, f0, f1
    stfs f0, 0x18(r31)
    lwz r3, 0x14(r31)
    bl fn_800A6BDC
    lfs f2, lbl_80881904
    fcmpo cr0, f2, f1
    ble lbl_fn_8012C6D4_0000066C
    b lbl_fn_8012C6D4_00000690
lbl_fn_8012C6D4_0000066C:
    xoris r0, r30, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x18(r31)
    lwz r3, 0x14(r31)
    bl fn_800A6BDC
    fmr f2, f1
lbl_fn_8012C6D4_00000690:
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r26, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    stfs f2, 0x4(r27)
    fsubs f0, f0, f1
    stfs f0, 0x30(r31)
    lwz r3, 0x2c(r31)
    bl fn_800A6BDC
    lfs f2, lbl_80881904
    fcmpo cr0, f2, f1
    ble lbl_fn_8012C6D4_000006C8
    b lbl_fn_8012C6D4_000006EC
lbl_fn_8012C6D4_000006C8:
    xoris r0, r30, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x30(r31)
    lwz r3, 0x2c(r31)
    bl fn_800A6BDC
    fmr f2, f1
lbl_fn_8012C6D4_000006EC:
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r26, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x8(r1)
    stfs f2, 0xc(r27)
    fsubs f0, f0, f1
    stfs f0, 0x3c(r31)
    lwz r3, 0x38(r31)
    bl fn_800A6BDC
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x1
    bge lbl_fn_8012C6D4_00000730
    li r0, 0x1
    b lbl_fn_8012C6D4_0000075C
lbl_fn_8012C6D4_00000730:
    xoris r0, r30, 0x8000
    stw r0, 0x14(r1)
    lfd f1, lbl_80737348@l(r26)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x3c(r31)
    lwz r3, 0x38(r31)
    bl fn_800A6BDC
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
lbl_fn_8012C6D4_0000075C:
    stw r0, 0x94(r27)
lbl_fn_8012C6D4_00000760:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8012CE4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r27, r4
    mr r26, r3
    lwz r4, 0xa0(r3)
    mr r3, r27
    bl fn_80219160
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8012CE4C_00000A98
    li r29, 0x0
    li r31, 0x1
lbl_fn_8012CE4C_000007B0:
    lwz r3, lbl_8087F430
    li r28, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_8012CE4C_0000090C
    cmpwi r29, 0xe
    beq lbl_fn_8012CE4C_000008DC
    bge lbl_fn_8012CE4C_000007F8
    cmpwi r29, 0x9
    beq lbl_fn_8012CE4C_00000854
    bge lbl_fn_8012CE4C_000007E4
    cmpwi r29, 0x2
    beq lbl_fn_8012CE4C_000008C4
    b lbl_fn_8012CE4C_0000090C
lbl_fn_8012CE4C_000007E4:
    cmpwi r29, 0xd
    bge lbl_fn_8012CE4C_0000081C
    cmpwi r29, 0xb
    bge lbl_fn_8012CE4C_0000090C
    b lbl_fn_8012CE4C_0000081C
lbl_fn_8012CE4C_000007F8:
    cmpwi r29, 0x3d
    beq lbl_fn_8012CE4C_0000086C
    bge lbl_fn_8012CE4C_00000810
    cmpwi r29, 0x10
    beq lbl_fn_8012CE4C_000008DC
    b lbl_fn_8012CE4C_0000090C
lbl_fn_8012CE4C_00000810:
    cmpwi r29, 0x40
    bge lbl_fn_8012CE4C_0000090C
    b lbl_fn_8012CE4C_000008A4
lbl_fn_8012CE4C_0000081C:
    cmpwi r27, 0x2
    bne lbl_fn_8012CE4C_0000083C
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_8012CE4C_0000090C
    li r28, 0x0
    b lbl_fn_8012CE4C_0000090C
lbl_fn_8012CE4C_0000083C:
    li r4, 0x5
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8012CE4C_0000090C
    li r28, 0x0
    b lbl_fn_8012CE4C_0000090C
lbl_fn_8012CE4C_00000854:
    li r4, 0x88
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8012CE4C_0000090C
    li r28, 0x0
    b lbl_fn_8012CE4C_0000090C
lbl_fn_8012CE4C_0000086C:
    cmpwi r27, 0x2
    bne lbl_fn_8012CE4C_0000088C
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_8012CE4C_0000090C
    li r28, 0x0
    b lbl_fn_8012CE4C_0000090C
lbl_fn_8012CE4C_0000088C:
    li r4, 0x11e
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8012CE4C_0000090C
    li r28, 0x0
    b lbl_fn_8012CE4C_0000090C
lbl_fn_8012CE4C_000008A4:
    cmpwi r27, 0x2
    bne lbl_fn_8012CE4C_0000090C
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_8012CE4C_0000090C
    li r28, 0x0
    b lbl_fn_8012CE4C_0000090C
lbl_fn_8012CE4C_000008C4:
    li r4, 0x11f
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8012CE4C_0000090C
    li r28, 0x0
    b lbl_fn_8012CE4C_0000090C
lbl_fn_8012CE4C_000008DC:
    subi r0, r27, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_8012CE4C_0000090C
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_8012CE4C_0000090C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012CE4C_0000090C
    li r28, 0x0
lbl_fn_8012CE4C_0000090C:
    cmpwi r28, 0x0
    beq lbl_fn_8012CE4C_000009CC
    add r3, r30, r29
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012CE4C_000009CC
    cmpwi r29, 0x0
    blt lbl_fn_8012CE4C_00000934
    cmpwi r29, 0x80
    blt lbl_fn_8012CE4C_0000093C
lbl_fn_8012CE4C_00000934:
    li r0, 0x0
    b lbl_fn_8012CE4C_00000978
lbl_fn_8012CE4C_0000093C:
    srawi r0, r29, 5
    slwi r3, r29, 27
    srwi r5, r29, 31
    addze r0, r0
    subf r3, r5, r3
    rotlwi r4, r3, 5
    slwi r0, r0, 2
    add r3, r26, r0
    add r4, r4, r5
    lwz r0, 0x1ec(r3)
    slw r3, r31, r4
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_8012CE4C_00000978:
    cmpwi r0, 0x0
    bne lbl_fn_8012CE4C_000009CC
    cmplwi r29, 0x7f
    bgt lbl_fn_8012CE4C_000009CC
    srawi r0, r29, 5
    slwi r3, r29, 27
    srwi r4, r29, 31
    addze r5, r0
    subf r0, r4, r3
    slwi r3, r5, 2
    rotlwi r0, r0, 5
    add r4, r0, r4
    add r3, r26, r3
    lwz r0, 0x1ec(r3)
    slw r4, r31, r4
    and r0, r4, r0
    cmplw r4, r0
    beq lbl_fn_8012CE4C_000009CC
    lwz r0, 0x1ec(r3)
    or r0, r0, r4
    stw r0, 0x1ec(r3)
lbl_fn_8012CE4C_000009CC:
    cmpwi r28, 0x0
    beq lbl_fn_8012CE4C_000009E4
    add r3, r30, r29
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012CE4C_00000A8C
lbl_fn_8012CE4C_000009E4:
    cmpwi r29, 0x0
    blt lbl_fn_8012CE4C_000009F4
    cmpwi r29, 0x80
    blt lbl_fn_8012CE4C_000009FC
lbl_fn_8012CE4C_000009F4:
    li r0, 0x0
    b lbl_fn_8012CE4C_00000A38
lbl_fn_8012CE4C_000009FC:
    srawi r0, r29, 5
    slwi r3, r29, 27
    srwi r5, r29, 31
    addze r0, r0
    subf r3, r5, r3
    rotlwi r4, r3, 5
    slwi r0, r0, 2
    add r3, r26, r0
    add r4, r4, r5
    lwz r0, 0x1ec(r3)
    slw r3, r31, r4
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_8012CE4C_00000A38:
    cmpwi r0, 0x0
    beq lbl_fn_8012CE4C_00000A8C
    cmplwi r29, 0x7f
    bgt lbl_fn_8012CE4C_00000A8C
    srawi r0, r29, 5
    slwi r3, r29, 27
    srwi r4, r29, 31
    addze r5, r0
    subf r0, r4, r3
    slwi r3, r5, 2
    rotlwi r0, r0, 5
    add r4, r0, r4
    add r3, r26, r3
    lwz r0, 0x1ec(r3)
    slw r4, r31, r4
    and r0, r4, r0
    cmplw r4, r0
    bne lbl_fn_8012CE4C_00000A8C
    lwz r0, 0x1ec(r3)
    andc r0, r0, r4
    stw r0, 0x1ec(r3)
lbl_fn_8012CE4C_00000A8C:
    addi r29, r29, 0x1
    cmpwi r29, 0x80
    blt lbl_fn_8012CE4C_000007B0
lbl_fn_8012CE4C_00000A98:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8012D180(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stmw r24, 0xf0(r1)
    mr r31, r3
    lwz r4, 0x2f0(r3)
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r3, 0x0
    mr r25, r3
    blt lbl_fn_8012D180_00000F40
    cmpwi r3, 0x7
    blt lbl_fn_8012D180_00000AE4
    b lbl_fn_8012D180_00000F40
lbl_fn_8012D180_00000AE4:
    lwz r4, 0xa0(r31)
    bl fn_80219160
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8012D180_00000F40
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8012D180_00000F40
    mr r3, r31
    mr r4, r25
    bl fn_8012CE4C
    addi r30, r1, 0xd0
    addi r28, r1, 0xb8
    addi r27, r1, 0xa0
    li r24, 0x0
lbl_fn_8012D180_00000B20:
    add r26, r29, r24
    lbz r3, 0x82(r26)
    extsb r3, r3
    bl fn_8021AF98
    stw r3, 0x0(r30)
    lbz r3, 0x82(r26)
    extsb r3, r3
    bl fn_8021AFF4
    lwz r5, lbl_8087EE68
    li r4, 0x0
    stw r3, 0x0(r28)
    cmpwi r5, 0x0
    beq lbl_fn_8012D180_00000B64
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8012D180_00000B64
    li r4, 0x1
lbl_fn_8012D180_00000B64:
    cmpwi r4, 0x0
    beq lbl_fn_8012D180_00000B80
    mr r3, r5
    lwz r4, 0x2f0(r31)
    lwz r5, 0x0(r28)
    bl fn_800185B4
    b lbl_fn_8012D180_00000B84
lbl_fn_8012D180_00000B80:
    li r3, 0x0
lbl_fn_8012D180_00000B84:
    addi r24, r24, 0x1
    stw r3, 0x0(r27)
    cmpwi r24, 0x6
    addi r30, r30, 0x4
    addi r28, r28, 0x4
    addi r27, r27, 0x4
    blt lbl_fn_8012D180_00000B20
    li r24, 0x0
    li r30, 0x0
    mr r29, r24
lbl_fn_8012D180_00000BAC:
    addi r3, r1, 0x98
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r0, 0x9c(r1)
    add r3, r31, r30
    stw r29, 0x98(r1)
    addi r24, r24, 0x1
    cmpwi r24, 0x4
    addi r30, r30, 0x8
    stw r29, 0x2d0(r3)
    stw r0, 0x2d4(r3)
    blt lbl_fn_8012D180_00000BAC
    subi r0, r25, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8012D180_00000D28
    cmpwi r25, 0x0
    beq lbl_fn_8012D180_00000C18
    cmpwi r25, 0x1
    beq lbl_fn_8012D180_00000C64
    cmpwi r25, 0x4
    beq lbl_fn_8012D180_00000D80
    cmpwi r25, 0x6
    beq lbl_fn_8012D180_00000E44
    cmpwi r25, 0x5
    beq lbl_fn_8012D180_00000EC4
    b lbl_fn_8012D180_00000F40
lbl_fn_8012D180_00000C18:
    addi r3, r1, 0x90
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r6, 0xd4(r1)
    addi r3, r1, 0x88
    stw r6, 0x90(r1)
    li r4, 0x0
    lwz r0, 0x94(r1)
    li r5, 0x8
    stw r0, 0x2d4(r31)
    stw r6, 0x2d0(r31)
    bl memset
    lwz r3, 0xe4(r1)
    stw r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r0, 0x2ec(r31)
    stw r3, 0x2e8(r31)
    b lbl_fn_8012D180_00000F40
lbl_fn_8012D180_00000C64:
    lwz r0, 0xac(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8012D180_00000C98
    addi r3, r1, 0x80
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xd4(r1)
    stw r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r0, 0x2d4(r31)
    stw r3, 0x2d0(r31)
    b lbl_fn_8012D180_00000CBC
lbl_fn_8012D180_00000C98:
    addi r3, r1, 0x78
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xdc(r1)
    stw r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r0, 0x2d4(r31)
    stw r3, 0x2d0(r31)
lbl_fn_8012D180_00000CBC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012D180_00000D00
    li r4, 0x38d
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_8012D180_00000D00
    addi r3, r1, 0x70
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r3, 0x6c2
    stw r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r0, 0x2ec(r31)
    stw r3, 0x2e8(r31)
    b lbl_fn_8012D180_00000F40
lbl_fn_8012D180_00000D00:
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xe4(r1)
    stw r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r0, 0x2ec(r31)
    stw r3, 0x2e8(r31)
    b lbl_fn_8012D180_00000F40
lbl_fn_8012D180_00000D28:
    lwz r0, 0xb0(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8012D180_00000D58
    addi r3, r1, 0x60
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xe0(r1)
    stw r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r0, 0x2d4(r31)
    stw r3, 0x2d0(r31)
lbl_fn_8012D180_00000D58:
    addi r3, r1, 0x58
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xe4(r1)
    stw r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x2ec(r31)
    stw r3, 0x2e8(r31)
    b lbl_fn_8012D180_00000F40
lbl_fn_8012D180_00000D80:
    lwz r0, 0xb0(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8012D180_00000DB4
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xd4(r1)
    stw r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r0, 0x2d4(r31)
    stw r3, 0x2d0(r31)
    b lbl_fn_8012D180_00000DD8
lbl_fn_8012D180_00000DB4:
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xe0(r1)
    stw r3, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0x2d4(r31)
    stw r3, 0x2d0(r31)
lbl_fn_8012D180_00000DD8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012D180_00000E1C
    li r4, 0x38c
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_8012D180_00000E1C
    addi r3, r1, 0x40
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r3, 0x179a
    stw r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r0, 0x2ec(r31)
    stw r3, 0x2e8(r31)
    b lbl_fn_8012D180_00000F40
lbl_fn_8012D180_00000E1C:
    addi r3, r1, 0x38
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xe4(r1)
    stw r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x2ec(r31)
    stw r3, 0x2e8(r31)
    b lbl_fn_8012D180_00000F40
lbl_fn_8012D180_00000E44:
    lwz r0, 0xb0(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8012D180_00000E78
    addi r3, r1, 0x30
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xd4(r1)
    stw r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x2d4(r31)
    stw r3, 0x2d0(r31)
    b lbl_fn_8012D180_00000E9C
lbl_fn_8012D180_00000E78:
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xe0(r1)
    stw r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x2d4(r31)
    stw r3, 0x2d0(r31)
lbl_fn_8012D180_00000E9C:
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xe4(r1)
    stw r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x2ec(r31)
    stw r3, 0x2e8(r31)
    b lbl_fn_8012D180_00000F40
lbl_fn_8012D180_00000EC4:
    lwz r0, 0xa4(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8012D180_00000EF8
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xdc(r1)
    stw r3, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x2d4(r31)
    stw r3, 0x2d0(r31)
    b lbl_fn_8012D180_00000F1C
lbl_fn_8012D180_00000EF8:
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xd4(r1)
    stw r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x2d4(r31)
    stw r3, 0x2d0(r31)
lbl_fn_8012D180_00000F1C:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    lwz r3, 0xe4(r1)
    stw r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x2ec(r31)
    stw r3, 0x2e8(r31)
lbl_fn_8012D180_00000F40:
    lmw r24, 0xf0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8012D628(void)
{
    nofralloc
    cmpwi r5, 0x0
    beqlr
    lfs f1, 0x0(r4)
    lfs f0, 0x0(r5)
    lfs f2, 0x4(r4)
    fadds f0, f1, f0
    lfs f1, 0x8(r4)
    lfs f7, 0xc(r4)
    stfs f0, 0x0(r4)
    lfs f6, 0x10(r4)
    lfs f0, 0x4(r5)
    lfs f5, 0x14(r4)
    fadds f0, f2, f0
    lfs f4, 0x28(r4)
    lfs f3, 0x2c(r4)
    stfs f0, 0x4(r4)
    lwz r8, 0x20(r4)
    lfs f0, 0x8(r5)
    lwz r7, 0x24(r4)
    fadds f0, f1, f0
    lfs f2, 0x18(r4)
    lfs f1, 0x1c(r4)
    stfs f0, 0x8(r4)
    lwz r6, 0x30(r4)
    lfs f0, 0xc(r5)
    lwz r3, 0x34(r4)
    fadds f0, f7, f0
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r5)
    fmuls f0, f6, f0
    stfs f0, 0x10(r4)
    lfs f0, 0x14(r5)
    fmuls f0, f5, f0
    stfs f0, 0x14(r4)
    lfs f0, 0x28(r5)
    fadds f0, f4, f0
    stfs f0, 0x28(r4)
    lfs f0, 0x2c(r5)
    fadds f0, f3, f0
    stfs f0, 0x2c(r4)
    lwz r0, 0x20(r5)
    add r0, r8, r0
    stw r0, 0x20(r4)
    lwz r0, 0x24(r5)
    add r0, r7, r0
    stw r0, 0x24(r4)
    lfs f0, 0x18(r5)
    fadds f0, f2, f0
    stfs f0, 0x18(r4)
    lfs f0, 0x1c(r5)
    fadds f0, f1, f0
    stfs f0, 0x1c(r4)
    lwz r0, 0x30(r5)
    add r0, r6, r0
    stw r0, 0x30(r4)
    lwz r0, 0x34(r5)
    add r0, r3, r0
    stw r0, 0x34(r4)
    blr
}

asm void fn_8012D714(void)
{
    nofralloc
    cmpwi r5, 0x0
    beqlr
    cmpwi r6, 0x0
    bne lbl_fn_8012D714_00001054
    blr
lbl_fn_8012D714_00001054:
    lfs f2, 0x0(r5)
    lfs f1, 0x0(r6)
    lfs f0, lbl_80881920
    fadds f3, f2, f1
    lfs f2, 0x0(r4)
    lfs f1, 0x4(r4)
    lfs f8, 0x8(r4)
    fmadds f2, f3, f0, f2
    lfs f7, 0xc(r4)
    lfs f6, 0x10(r4)
    stfs f2, 0x0(r4)
    lfs f5, 0x14(r4)
    lfs f3, 0x4(r5)
    lfs f2, 0x4(r6)
    lfs f4, 0x28(r4)
    fadds f2, f3, f2
    lfs f3, 0x2c(r4)
    lwz r10, 0x20(r4)
    lwz r9, 0x24(r4)
    fmadds f9, f2, f0, f1
    lfs f2, 0x18(r4)
    lfs f1, 0x1c(r4)
    stfs f9, 0x4(r4)
    lwz r8, 0x30(r4)
    lfs f10, 0x8(r5)
    lfs f9, 0x8(r6)
    lwz r7, 0x34(r4)
    fadds f9, f10, f9
    fmadds f8, f9, f0, f8
    stfs f8, 0x8(r4)
    lfs f9, 0xc(r5)
    lfs f8, 0xc(r6)
    fadds f8, f9, f8
    fmadds f7, f8, f0, f7
    stfs f7, 0xc(r4)
    lfs f8, 0x10(r5)
    lfs f7, 0x10(r6)
    fadds f7, f8, f7
    fmuls f7, f7, f0
    fmuls f6, f6, f7
    stfs f6, 0x10(r4)
    lfs f7, 0x14(r5)
    lfs f6, 0x14(r6)
    fadds f6, f7, f6
    fmuls f6, f6, f0
    fmuls f5, f5, f6
    stfs f5, 0x14(r4)
    lfs f6, 0x28(r5)
    lfs f5, 0x28(r6)
    fadds f5, f6, f5
    fmadds f4, f5, f0, f4
    stfs f4, 0x28(r4)
    lfs f5, 0x2c(r5)
    lfs f4, 0x2c(r6)
    fadds f4, f5, f4
    fmadds f3, f4, f0, f3
    stfs f3, 0x2c(r4)
    lwz r3, 0x20(r5)
    lwz r0, 0x20(r6)
    add r3, r3, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    add r0, r10, r0
    stw r0, 0x20(r4)
    lwz r3, 0x24(r5)
    lwz r0, 0x24(r6)
    add r3, r3, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    add r0, r9, r0
    stw r0, 0x24(r4)
    lfs f4, 0x18(r5)
    lfs f3, 0x18(r6)
    fadds f3, f4, f3
    fmadds f2, f3, f0, f2
    stfs f2, 0x18(r4)
    lfs f3, 0x1c(r5)
    lfs f2, 0x1c(r6)
    fadds f2, f3, f2
    fmadds f0, f2, f0, f1
    stfs f0, 0x1c(r4)
    lwz r3, 0x30(r5)
    lwz r0, 0x30(r6)
    add r3, r3, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    add r0, r8, r0
    stw r0, 0x30(r4)
    lwz r3, 0x34(r5)
    lwz r0, 0x34(r6)
    add r3, r3, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    add r0, r7, r0
    stw r0, 0x34(r4)
    blr
}

asm void fn_8012D8B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80737348@ha
    stw r0, 0x24(r1)
    lis r0, 0x4330
    lfd f1, lbl_80737348@l(r5)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x16c(r3)
    lwz r6, 0x2f0(r3)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    cmpwi r6, 0x0
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x4(r3)
    beq lbl_fn_8012D8B8_00001244
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8012D8B8_00001244
    lfs f0, lbl_80881900
    stfs f0, 0x8(r3)
    b lbl_fn_8012D8B8_0000126C
lbl_fn_8012D8B8_00001244:
    lwz r5, 0x170(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r4, lbl_80737348@ha
    xoris r0, r5, 0x8000
    lfd f1, lbl_80737348@l(r4)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x8(r3)
lbl_fn_8012D8B8_0000126C:
    li r0, 0x4
    li r5, 0x0
    mr r7, r31
    stw r5, 0xc(r3)
    li r6, 0x0
    li r4, 0x1
    stw r5, 0x10(r3)
    mtctr r0
lbl_fn_8012D8B8_0000128C:
    slw r0, r4, r6
    cmplw r0, r0
    bne lbl_fn_8012D8B8_0000129C
    stw r5, 0x24c(r7)
lbl_fn_8012D8B8_0000129C:
    addi r6, r6, 0x1
    slw r0, r4, r6
    cmplw r0, r0
    bne lbl_fn_8012D8B8_000012B0
    stw r5, 0x250(r7)
lbl_fn_8012D8B8_000012B0:
    addi r6, r6, 0x1
    slw r0, r4, r6
    cmplw r0, r0
    bne lbl_fn_8012D8B8_000012C4
    stw r5, 0x254(r7)
lbl_fn_8012D8B8_000012C4:
    addi r6, r6, 0x1
    slw r0, r4, r6
    cmplw r0, r0
    bne lbl_fn_8012D8B8_000012D8
    stw r5, 0x258(r7)
lbl_fn_8012D8B8_000012D8:
    addi r6, r6, 0x1
    slw r0, r4, r6
    cmplw r0, r0
    bne lbl_fn_8012D8B8_000012EC
    stw r5, 0x25c(r7)
lbl_fn_8012D8B8_000012EC:
    addi r6, r6, 0x1
    slw r0, r4, r6
    cmplw r0, r0
    bne lbl_fn_8012D8B8_00001300
    stw r5, 0x260(r7)
lbl_fn_8012D8B8_00001300:
    addi r6, r6, 0x1
    slw r0, r4, r6
    cmplw r0, r0
    bne lbl_fn_8012D8B8_00001314
    stw r5, 0x264(r7)
lbl_fn_8012D8B8_00001314:
    addi r6, r6, 0x1
    slw r0, r4, r6
    cmplw r0, r0
    bne lbl_fn_8012D8B8_00001328
    stw r5, 0x268(r7)
lbl_fn_8012D8B8_00001328:
    addi r7, r7, 0x20
    addi r6, r6, 0x1
    bdnz lbl_fn_8012D8B8_0000128C
    lwz r5, 0x2f0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8012D8B8_000013AC
    lwz r4, 0xc(r3)
    li r6, 0x0
    lwz r0, 0x10(r3)
    li r7, 0x0
    rlwinm r4, r4, 0, 12, 10
    stw r4, 0xc(r3)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r3)
    b lbl_fn_8012D8B8_000013A0
lbl_fn_8012D8B8_00001364:
    add r4, r5, r7
    lwz r4, 0x654(r4)
    lwz r4, 0x274(r4)
    lwz r0, 0xf0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8012D8B8_00001398
    lwz r4, 0xc(r3)
    lwz r0, 0x10(r3)
    oris r4, r4, 0x10
    stw r4, 0xc(r3)
    oris r0, r0, 0x10
    stw r0, 0x10(r3)
    b lbl_fn_8012D8B8_000013AC
lbl_fn_8012D8B8_00001398:
    addi r7, r7, 0x4
    addi r6, r6, 0x1
lbl_fn_8012D8B8_000013A0:
    lwz r0, 0x650(r5)
    cmplw r6, r0
    blt lbl_fn_8012D8B8_00001364
lbl_fn_8012D8B8_000013AC:
    lwz r3, 0x2f0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8012D8B8_000013C8
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
lbl_fn_8012D8B8_000013C8:
    lwz r0, 0x380(r31)
    addi r4, r31, 0x384
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012D8B8_00001400
lbl_fn_8012D8B8_000013E0:
    lwz r5, 0x0(r4)
    lwz r0, 0x0(r5)
    cmpwi r0, 0x39
    bne lbl_fn_8012D8B8_000013F8
    lwz r0, 0x4(r5)
    add r3, r3, r0
lbl_fn_8012D8B8_000013F8:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012D8B8_000013E0
lbl_fn_8012D8B8_00001400:
    lfs f1, lbl_80881900
    li r0, 0x0
    lfs f0, 0x4(r31)
    stw r3, 0x300(r31)
    stfs f1, 0x428(r31)
    stfs f0, 0x244(r31)
    stw r0, 0x14(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8012DB04(void)
{
    nofralloc
    lwz r6, 0xc(r3)
    lis r4, 0x4330
    stwu r1, -0x20(r1)
    rlwinm r0, r6, 0, 28, 28
    lwz r5, 0x430(r3)
    cmplwi r0, 0x8
    stw r4, 0x8(r1)
    stw r4, 0x10(r1)
    bne lbl_fn_8012DB04_0000145C
    addi r5, r5, 0x3
    b lbl_fn_8012DB04_0000146C
lbl_fn_8012DB04_0000145C:
    rlwinm r0, r6, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8012DB04_0000146C
    addi r5, r5, 0x2
lbl_fn_8012DB04_0000146C:
    rlwinm r4, r6, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_8012DB04_00001480
    addi r5, r5, 0x4
lbl_fn_8012DB04_00001480:
    xoris r0, r5, 0x8000
    stw r0, 0xc(r1)
    lis r4, lbl_80737348@ha
    lwz r5, 0x18(r3)
    lfd f2, lbl_80737348@l(r4)
    lfd f0, 0x8(r1)
    rlwinm. r0, r5, 0, 28, 28
    lfs f1, lbl_80881910
    fsubs f2, f0, f2
    lfs f0, lbl_80881904
    fnmsubs f1, f1, f2, f0
    bne lbl_fn_8012DB04_00001680
    rlwinm. r0, r5, 0, 8, 8
    bne lbl_fn_8012DB04_00001680
    rlwinm r0, r6, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_8012DB04_0000153C
    lfs f0, 0x434(r3)
    lfs f4, lbl_80881924
    fcmpo cr0, f0, f4
    bge lbl_fn_8012DB04_0000153C
    fsubs f3, f4, f0
    lfs f2, lbl_80881928
    lfs f0, lbl_8088192C
    fmuls f2, f2, f3
    fdivs f2, f2, f4
    fsubs f2, f1, f2
    fcmpo cr0, f2, f0
    ble lbl_fn_8012DB04_000014F8
    b lbl_fn_8012DB04_000014FC
lbl_fn_8012DB04_000014F8:
    fmr f2, f0
lbl_fn_8012DB04_000014FC:
    lfs f3, lbl_80881904
    fcmpo cr0, f2, f3
    bge lbl_fn_8012DB04_00001538
    lfs f4, lbl_80881924
    lfs f0, 0x434(r3)
    lfs f2, lbl_80881928
    fsubs f3, f4, f0
    lfs f0, lbl_8088192C
    fmuls f2, f2, f3
    fdivs f2, f2, f4
    fsubs f3, f1, f2
    fcmpo cr0, f3, f0
    ble lbl_fn_8012DB04_00001534
    b lbl_fn_8012DB04_00001538
lbl_fn_8012DB04_00001534:
    fmr f3, f0
lbl_fn_8012DB04_00001538:
    fmr f1, f3
lbl_fn_8012DB04_0000153C:
    cmplwi r0, 0x800
    bne lbl_fn_8012DB04_00001680
    lwz r3, 0x2f0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8012DB04_00001680
    lwz r5, 0xd1c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8012DB04_00001680
    lwz r0, 0xb54(r5)
    addi r4, r5, 0xb58
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012DB04_0000158C
lbl_fn_8012DB04_00001570:
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x44
    bne lbl_fn_8012DB04_00001584
    b lbl_fn_8012DB04_00001590
lbl_fn_8012DB04_00001584:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012DB04_00001570
lbl_fn_8012DB04_0000158C:
    li r4, 0x0
lbl_fn_8012DB04_00001590:
    cmpwi r4, 0x0
    beq lbl_fn_8012DB04_00001680
    lwz r0, 0xb54(r5)
    addi r3, r5, 0xb58
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012DB04_000015D0
lbl_fn_8012DB04_000015B0:
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r5)
    cmpwi r0, 0x44
    bne lbl_fn_8012DB04_000015C8
    lwz r0, 0x4(r5)
    add r4, r4, r0
lbl_fn_8012DB04_000015C8:
    addi r3, r3, 0x14
    bdnz lbl_fn_8012DB04_000015B0
lbl_fn_8012DB04_000015D0:
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_80737348@ha
    lfs f3, lbl_80881910
    lfd f4, lbl_80737348@l(r3)
    lfd f0, 0x10(r1)
    lfs f2, lbl_80881918
    fsubs f0, f0, f4
    lfs f5, lbl_8088192C
    fmuls f0, f3, f0
    fdivs f0, f0, f2
    fsubs f0, f1, f0
    fcmpo cr0, f0, f5
    ble lbl_fn_8012DB04_00001620
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fdivs f0, f0, f2
    fsubs f5, f1, f0
lbl_fn_8012DB04_00001620:
    lfs f6, lbl_80881904
    fcmpo cr0, f5, f6
    bge lbl_fn_8012DB04_0000167C
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_80737348@ha
    lfs f3, lbl_80881910
    lfd f4, lbl_80737348@l(r3)
    lfd f0, 0x10(r1)
    lfs f2, lbl_80881918
    fsubs f0, f0, f4
    lfs f6, lbl_8088192C
    fmuls f0, f3, f0
    fdivs f0, f0, f2
    fsubs f0, f1, f0
    fcmpo cr0, f0, f6
    ble lbl_fn_8012DB04_0000167C
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fdivs f0, f0, f2
    fsubs f6, f1, f0
lbl_fn_8012DB04_0000167C:
    fmr f1, f6
lbl_fn_8012DB04_00001680:
    rlwinm r3, r6, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_8012DB04_00001694
    lfs f1, lbl_8088192C
lbl_fn_8012DB04_00001694:
    addi r1, r1, 0x20
    blr
}
