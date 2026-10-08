#include "revolution/types.h"
#include "revolution/os.h"
#include "revolution/os/OSInterrupt.h"
#include "revolution/os/OSThread.h"

/* Runtime / ABI helpers */
extern void _savegpr_27(void);
extern void _restgpr_27(void);
extern void fn_805EAA00(void);

/* External functions referenced */
extern void fn_806121F0(void);

/* External data symbols */
extern u8 lbl_807B0720[];
extern u8 lbl_807B0738[];
extern u8 lbl_807E75C0[];
extern u8 lbl_807E75E4[];

/* External SDA symbols */
extern u32 __GXData;
extern u32 __cpReg;
extern u32 __piReg;
extern u8 lbl_80880080;
extern u8 lbl_80880081;
extern u32 lbl_80880084;
extern u32 lbl_80880088;
extern u32 lbl_8088008C;
extern u32 lbl_80880090;
extern u32 lbl_80880094;
extern u8 lbl_80880098[8];

/* Function declarations */
void GXInitFifoBase(void);
void fn_806123E0(void);
void GXSetCPUFifo(void);
void GXSetGPFifo(void);
void fn_80612950(void);
void fn_80612A50(void);
void fn_80612A60(void);
void fn_80612AF0(void);
void fn_80612B10(void);
void fn_80612B60(void);
void fn_80612C00(void);
void __GXFifoInit(void);
void fn_80612CD0(void);
void fn_80612E70(void);

asm void GXInitFifoBase(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    add r7, r4, r5
    subi r6, r5, 0x4000
    stw r0, 0x24(r1)
    subi r7, r7, 0x4
    rlwinm r0, r5, 31, 1, 26
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r4, 0x0(r3)
    stw r7, 0x4(r3)
    stw r5, 0x8(r3)
    stw r31, 0x1c(r3)
    stw r6, 0xc(r3)
    stw r0, 0x10(r3)
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    stw r30, 0x14(r29)
    stw r30, 0x18(r29)
    stw r31, 0x1c(r29)
    bge lbl_GXInitFifoBase_0000006C
    lwz r0, 0x8(r29)
    stw r0, 0x1c(r29)
lbl_GXInitFifoBase_0000006C:
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806123E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x14(r1)
    lbz r0, lbl_80880080
    cmpwi r0, 0x0
    beq lbl_fn_806123E0_000000B8
    lbz r0, lbl_80880081
    cmpwi r0, 0x0
    bne lbl_fn_806123E0_000000C0
lbl_fn_806123E0_000000B8:
    li r3, 0x0
    b lbl_fn_806123E0_00000178
lbl_fn_806123E0_000000C0:
    lis r4, lbl_807E75C0@ha
    lis r3, lbl_807E75E4@ha
    lwz r6, lbl_807E75C0@l(r4)
    lwz r4, lbl_807E75E4@l(r3)
    cmplw r4, r6
    bne lbl_fn_806123E0_000000DC
    li r7, 0x1
lbl_fn_806123E0_000000DC:
    lis r5, lbl_807E75C0@ha
    lis r3, lbl_807E75E4@ha
    addi r5, r5, lbl_807E75C0@l
    addi r3, r3, lbl_807E75E4@l
    lwz r0, 0x4(r5)
    lwz r5, 0x4(r3)
    cmplw r5, r0
    bne lbl_fn_806123E0_00000100
    addi r7, r7, 0x1
lbl_fn_806123E0_00000100:
    cmplwi r7, 0x2
    bne lbl_fn_806123E0_00000110
    li r3, 0x1
    b lbl_fn_806123E0_00000178
lbl_fn_806123E0_00000110:
    subf. r3, r6, r5
    subf r6, r4, r0
    li r0, 0x0
    ble lbl_fn_806123E0_00000128
    cmpwi r6, 0x0
    bgt lbl_fn_806123E0_00000138
lbl_fn_806123E0_00000128:
    cmpwi r3, 0x0
    bge lbl_fn_806123E0_0000013C
    cmpwi r6, 0x0
    bge lbl_fn_806123E0_0000013C
lbl_fn_806123E0_00000138:
    li r0, 0x1
lbl_fn_806123E0_0000013C:
    cmpwi r0, 0x0
    beq lbl_fn_806123E0_00000174
    lis r3, lbl_807B0720@ha
    addi r3, r3, lbl_807B0720@l
    crclr 6
    bl OSReport
    lis r4, lbl_807E75C0@ha
    lis r3, lbl_807B0738@ha
    addi r5, r4, lbl_807E75C0@l
    lwz r4, lbl_807E75C0@l(r4)
    lwz r5, 0x4(r5)
    addi r3, r3, lbl_807B0738@l
    crclr 6
    bl OSReport
lbl_fn_806123E0_00000174:
    li r3, 0x0
lbl_fn_806123E0_00000178:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void GXSetCPUFifo(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl OSDisableInterrupts
    cmpwi r27, 0x0
    mr r30, r3
    bne lbl_GXSetCPUFifo_000001DC
    lis r4, lbl_807E75E4@ha
    li r0, 0x0
    addi r4, r4, lbl_807E75E4@l
    stb r0, lbl_80880080
    stb r0, lbl_80880098
    stb r0, 0x22(r4)
    stb r0, 0x21(r4)
    bl OSRestoreInterrupts
    b lbl_GXSetCPUFifo_00000358
lbl_GXSetCPUFifo_000001DC:
    lis r28, lbl_807E75E4@ha
    li r29, 0x1
    addi r31, r28, lbl_807E75E4@l
    lwz r0, 0x20(r27)
    stw r0, 0x20(r31)
    lwz r9, 0x0(r27)
    lwz r8, 0x4(r27)
    lwz r7, 0x8(r27)
    lwz r6, 0xc(r27)
    lwz r5, 0x10(r27)
    lwz r4, 0x14(r27)
    lwz r3, 0x18(r27)
    lwz r0, 0x1c(r27)
    stw r9, 0x0(r31)
    stw r8, 0x4(r31)
    stw r7, 0x8(r31)
    stw r6, 0xc(r31)
    stw r5, 0x10(r31)
    stw r4, 0x14(r31)
    stw r3, 0x18(r31)
    stw r0, 0x1c(r31)
    stb r29, lbl_80880080
    stb r29, 0x21(r31)
    bl fn_806123E0
    clrlwi. r0, r3, 24
    beq lbl_GXSetCPUFifo_000002C8
    lwz r4, lbl_807E75E4@l(r28)
    li r0, 0x0
    stb r29, lbl_80880098
    lwz r3, __piReg
    clrlwi r4, r4, 2
    stb r29, 0x22(r31)
    lwz r5, __GXData
    stw r4, 0xc(r3)
    lwz r4, 0x4(r31)
    lwz r3, __piReg
    clrlwi r4, r4, 2
    stw r4, 0x10(r3)
    lwz r4, 0x18(r31)
    lwz r3, __piReg
    rlwimi r0, r4, 0, 3, 26
    stw r0, 0x14(r3)
    lwz r0, 0x10(r5)
    ori r0, r0, 0x3
    stw r0, 0x10(r5)
    lwz r3, __cpReg
    sth r0, 0x4(r3)
    lwz r0, 0x8(r5)
    ori r0, r0, 0x4
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r5)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r5)
    ori r0, r0, 0x10
    stw r0, 0x8(r5)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    b lbl_GXSetCPUFifo_0000034C
lbl_GXSetCPUFifo_000002C8:
    lbz r0, lbl_80880098
    li r4, 0x0
    stb r4, 0x22(r31)
    cmpwi r0, 0x0
    beq lbl_GXSetCPUFifo_000002F8
    lwz r3, __GXData
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x8(r3)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    stb r4, lbl_80880098
lbl_GXSetCPUFifo_000002F8:
    lwz r7, __GXData
    lis r3, lbl_807E75E4@ha
    addi r5, r3, lbl_807E75E4@l
    li r0, 0x0
    lwz r4, 0x8(r7)
    rlwinm r6, r4, 0, 30, 27
    stw r6, 0x8(r7)
    lwz r4, __cpReg
    sth r6, 0x2(r4)
    lwz r4, lbl_807E75E4@l(r3)
    lwz r3, __piReg
    clrlwi r4, r4, 2
    stw r4, 0xc(r3)
    lwz r4, 0x4(r5)
    lwz r3, __piReg
    clrlwi r4, r4, 2
    stw r4, 0x10(r3)
    lwz r4, 0x18(r5)
    lwz r3, __piReg
    rlwimi r0, r4, 0, 3, 26
    stw r0, 0x14(r3)
lbl_GXSetCPUFifo_0000034C:
    bl fn_805EAA00
    mr r3, r30
    bl OSRestoreInterrupts
lbl_GXSetCPUFifo_00000358:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void GXSetGPFifo(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl OSDisableInterrupts
    lwz r29, __GXData
    cmpwi r27, 0x0
    mr r28, r3
    lwz r0, 0x8(r29)
    clrrwi r0, r0, 1
    stw r0, 0x8(r29)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 30, 27
    stw r0, 0x8(r29)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    bne lbl_GXSetGPFifo_000003FC
    li r6, 0x0
    stb r6, lbl_80880081
    lis r4, lbl_807E75C0@ha
    stb r6, lbl_80880098
    addi r4, r4, lbl_807E75C0@l
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x8(r29)
    lwz r5, __cpReg
    sth r0, 0x2(r5)
    stb r6, 0x21(r4)
    stb r6, 0x22(r4)
    bl OSRestoreInterrupts
    b lbl_GXSetGPFifo_000005E8
lbl_GXSetGPFifo_000003FC:
    lis r3, lbl_807E75C0@ha
    li r31, 0x1
    addi r30, r3, lbl_807E75C0@l
    lwz r0, 0x20(r27)
    stw r0, 0x20(r30)
    lwz r4, 0x4(r27)
    lwz r9, 0x8(r27)
    lwz r8, 0xc(r27)
    lwz r7, 0x10(r27)
    lwz r6, 0x14(r27)
    lwz r5, 0x18(r27)
    lwz r0, 0x1c(r27)
    lwz r10, 0x0(r27)
    stw r4, 0x4(r30)
    lwz r4, __cpReg
    stw r9, 0x8(r30)
    stw r8, 0xc(r30)
    stw r7, 0x10(r30)
    stw r6, 0x14(r30)
    stw r5, 0x18(r30)
    stw r0, 0x1c(r30)
    stb r31, lbl_80880081
    stb r31, 0x22(r30)
    stw r10, 0x0(r30)
    sth r10, 0x20(r4)
    lwz r4, __cpReg
    lwz r0, 0x4(r30)
    sth r0, 0x24(r4)
    lwz r4, __cpReg
    lwz r0, 0x1c(r30)
    sth r0, 0x30(r4)
    lwz r4, __cpReg
    lwz r0, 0x18(r30)
    sth r0, 0x34(r4)
    lwz r4, __cpReg
    lwz r0, 0x14(r30)
    sth r0, 0x38(r4)
    lwz r4, __cpReg
    lwz r0, 0xc(r30)
    sth r0, 0x28(r4)
    lwz r4, __cpReg
    lwz r0, 0x10(r30)
    sth r0, 0x2c(r4)
    lwz r0, lbl_807E75C0@l(r3)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x22(r3)
    lwz r0, 0x4(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x26(r3)
    lwz r0, 0x1c(r30)
    lwz r3, __cpReg
    srawi r0, r0, 16
    sth r0, 0x32(r3)
    lwz r0, 0x18(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x36(r3)
    lwz r0, 0x14(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x3a(r3)
    lwz r0, 0xc(r30)
    lwz r3, __cpReg
    srwi r0, r0, 16
    sth r0, 0x2a(r3)
    lwz r0, 0x10(r30)
    lwz r3, __cpReg
    srwi r0, r0, 16
    sth r0, 0x2e(r3)
    bl fn_805EAA00
    bl fn_806123E0
    clrlwi. r0, r3, 24
    beq lbl_GXSetGPFifo_00000560
    stb r31, lbl_80880098
    stb r31, 0x21(r30)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x4
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x10
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    b lbl_GXSetGPFifo_00000594
lbl_GXSetGPFifo_00000560:
    li r0, 0x0
    stb r0, lbl_80880098
    stb r0, 0x21(r30)
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 30, 27
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
lbl_GXSetGPFifo_00000594:
    lwz r0, 0x8(r29)
    mr r3, r28
    lwz r4, __cpReg
    rlwinm r0, r0, 0, 31, 29
    lwz r5, __GXData
    rlwinm r0, r0, 0, 27, 25
    sth r0, 0x2(r4)
    lwz r4, __cpReg
    lwz r0, 0x8(r29)
    sth r0, 0x2(r4)
    lwz r0, 0x10(r5)
    ori r0, r0, 0x3
    stw r0, 0x10(r5)
    lwz r4, __cpReg
    sth r0, 0x4(r4)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x1
    stw r0, 0x8(r29)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    bl OSRestoreInterrupts
lbl_GXSetGPFifo_000005E8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80612950(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSDisableInterrupts
    lbz r6, lbl_80880080
    cmpwi r6, 0x0
    beq lbl_fn_80612950_00000640
    lwz r5, __piReg
    lis r4, lbl_807E75E4@ha
    addi r4, r4, lbl_807E75E4@l
    lwz r0, 0x14(r5)
    rlwinm r5, r0, 0, 3, 26
    extrwi r0, r0, 1, 2
    addis r5, r5, 0x8000
    stw r5, 0x18(r4)
    stb r0, 0x20(r4)
lbl_fn_80612950_00000640:
    lbz r0, lbl_80880081
    cmpwi r0, 0x0
    beq lbl_fn_80612950_0000067C
    lwz r7, __cpReg
    lis r4, lbl_807E75C0@ha
    addi r4, r4, lbl_807E75C0@l
    lhz r0, 0x3a(r7)
    lhz r5, 0x38(r7)
    rlwimi r5, r0, 16, 0, 15
    addis r0, r5, 0x8000
    stw r0, 0x14(r4)
    lhz r0, 0x32(r7)
    lhz r5, 0x30(r7)
    rlwimi r5, r0, 16, 0, 15
    stw r5, 0x1c(r4)
lbl_fn_80612950_0000067C:
    lbz r0, lbl_80880098
    cmpwi r0, 0x0
    beq lbl_fn_80612950_000006BC
    lis r8, lbl_807E75C0@ha
    lis r6, lbl_807E75E4@ha
    addi r8, r8, lbl_807E75C0@l
    addi r6, r6, lbl_807E75E4@l
    lwz r7, 0x14(r8)
    lwz r5, 0x1c(r8)
    lwz r4, 0x18(r6)
    lbz r0, 0x20(r6)
    stw r7, 0x14(r6)
    stw r5, 0x1c(r6)
    stw r4, 0x18(r8)
    stb r0, 0x20(r8)
    b lbl_fn_80612950_000006EC
lbl_fn_80612950_000006BC:
    cmpwi r6, 0x0
    beq lbl_fn_80612950_000006EC
    lis r5, lbl_807E75E4@ha
    addi r5, r5, lbl_807E75E4@l
    lwz r4, 0x14(r5)
    lwz r0, 0x18(r5)
    subf. r4, r4, r0
    stw r4, 0x1c(r5)
    bge lbl_fn_80612950_000006EC
    lwz r0, 0x8(r5)
    add r0, r4, r0
    stw r0, 0x1c(r5)
lbl_fn_80612950_000006EC:
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80612A50(void)
{
    nofralloc
    lbz r3, lbl_80880081
    blr
}

asm void fn_80612A60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, lbl_80880080
    cmpwi r0, 0x0
    bne lbl_fn_80612A60_00000738
    li r3, 0x0
    b lbl_fn_80612A60_0000078C
lbl_fn_80612A60_00000738:
    bl fn_80612950
    lis r5, lbl_807E75E4@ha
    lwzu r4, lbl_807E75E4@l(r5)
    li r3, 0x1
    lwz r0, 0x4(r5)
    stw r0, 0x4(r31)
    stw r4, 0x0(r31)
    lwz r4, 0x8(r5)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r31)
    stw r4, 0x8(r31)
    lwz r4, 0x10(r5)
    lwz r0, 0x14(r5)
    stw r0, 0x14(r31)
    stw r4, 0x10(r31)
    lwz r4, 0x18(r5)
    lwz r0, 0x1c(r5)
    stw r0, 0x1c(r31)
    stw r4, 0x18(r31)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r31)
lbl_fn_80612A60_0000078C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80612AF0(void)
{
    nofralloc
    lwz r0, 0x14(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x18(r3)
    stw r0, 0x0(r5)
    blr
}

asm void fn_80612B10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8088008C
    bl OSDisableInterrupts
    stw r30, lbl_8088008C
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80612B60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r6, __GXData
    extrwi r0, r31, 14, 2
    lwz r4, 0x8(r6)
    clrrwi r5, r4, 1
    stw r5, 0x8(r6)
    lwz r4, __cpReg
    sth r5, 0x2(r4)
    lwz r4, __cpReg
    sth r31, 0x3c(r4)
    lwz r4, __cpReg
    sth r0, 0x3e(r4)
    lwz r0, 0x8(r6)
    rlwinm r0, r0, 0, 31, 29
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x8(r6)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    lwz r0, 0x8(r6)
    ori r0, r0, 0x22
    stw r0, 0x8(r6)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    stw r31, lbl_80880088
    lwz r0, 0x8(r6)
    ori r0, r0, 0x1
    stw r0, 0x8(r6)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80612C00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSDisableInterrupts
    lwz r6, __GXData
    li r0, 0x0
    lwz r4, 0x8(r6)
    rlwinm r4, r4, 0, 31, 29
    rlwinm r5, r4, 0, 27, 25
    stw r5, 0x8(r6)
    lwz r4, __cpReg
    sth r5, 0x2(r4)
    stw r0, lbl_80880088
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void __GXFifoInit(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_806121F0@ha
    li r3, 0x11
    stw r0, 0x14(r1)
    addi r4, r4, fn_806121F0@l
    stw r31, 0xc(r1)
    bl __OSSetInterruptHandler
    li r3, 0x4000
    bl __OSUnmaskInterrupts
    bl OSGetCurrentThread
    li r31, 0x0
    stw r3, lbl_80880094
    lis r3, lbl_807E75E4@ha
    li r4, 0x0
    stw r31, lbl_80880090
    addi r3, r3, lbl_807E75E4@l
    li r5, 0x24
    bl memset
    lis r3, lbl_807E75C0@ha
    li r4, 0x0
    addi r3, r3, lbl_807E75C0@l
    li r5, 0x24
    bl memset
    stb r31, lbl_80880080
    stb r31, lbl_80880081
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80612CD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r0, lbl_80880081
    cmpwi r0, 0x0
    beq lbl_fn_80612CD0_00000B00
    bl OSDisableInterrupts
    lwz r29, __GXData
    lis r30, lbl_807E75C0@ha
    mr r28, r3
    li r31, 0x0
    lwz r0, 0x8(r29)
    addi r30, r30, lbl_807E75C0@l
    clrrwi r0, r0, 1
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r29)
    rlwinm r0, r0, 0, 30, 27
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x18(r30)
    stw r0, 0x14(r30)
    lwz r3, __cpReg
    stw r31, 0x1c(r30)
    sth r31, 0x30(r3)
    lwz r3, __cpReg
    lwz r0, 0x18(r30)
    sth r0, 0x34(r3)
    lwz r3, __cpReg
    lwz r0, 0x14(r30)
    sth r0, 0x38(r3)
    lwz r0, 0x1c(r30)
    lwz r3, __cpReg
    srawi r0, r0, 16
    sth r0, 0x32(r3)
    lwz r0, 0x18(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x36(r3)
    lwz r0, 0x14(r30)
    lwz r3, __cpReg
    extrwi r0, r0, 14, 2
    sth r0, 0x3a(r3)
    bl fn_805EAA00
    lbz r0, lbl_80880098
    cmpwi r0, 0x0
    beq lbl_fn_80612CD0_00000AAC
    lis r5, lbl_807E75E4@ha
    lwz r4, 0x18(r30)
    addi r5, r5, lbl_807E75E4@l
    lwz r3, 0x14(r30)
    lwz r0, 0x1c(r30)
    rlwimi r31, r4, 0, 3, 26
    stw r3, 0x14(r5)
    lwz r3, __piReg
    stw r4, 0x18(r5)
    stw r0, 0x1c(r5)
    stw r31, 0x14(r3)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x4
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x10
    stw r0, 0x8(r29)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
lbl_fn_80612CD0_00000AAC:
    lwz r4, 0x8(r29)
    li r0, 0x0
    lwz r6, __GXData
    mr r3, r28
    rlwinm r4, r4, 0, 31, 29
    rlwinm r5, r4, 0, 27, 25
    stw r5, 0x8(r29)
    lwz r4, __cpReg
    sth r5, 0x2(r4)
    stw r0, lbl_80880088
    lwz r0, 0x10(r6)
    ori r0, r0, 0x3
    stw r0, 0x10(r6)
    lwz r4, __cpReg
    sth r0, 0x4(r4)
    lwz r0, 0x8(r29)
    ori r0, r0, 0x1
    stw r0, 0x8(r29)
    lwz r4, __cpReg
    sth r0, 0x2(r4)
    bl OSRestoreInterrupts
lbl_fn_80612CD0_00000B00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80612E70(void)
{
    nofralloc
    lwz r3, lbl_80880084
    li r0, 0x0
    stw r0, lbl_80880084
    blr
}
