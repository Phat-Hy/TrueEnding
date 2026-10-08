#include "revolution/types.h"
#include "revolution/os.h"

/* External PPC and system functions */
extern u32 PPCMfhid2(void);
extern void PPCMthid2(u32);
extern void PPCMtwpar(u32);
extern u32 VIGetTvFormat(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);

/* External GX and runtime functions */
extern void GXInitFifoBase(void);
extern void GXInitTexCacheRegion(void);
extern void GXInitTlutRegion(void);
extern void GXSetCPUFifo(void);
extern void GXSetGPFifo(void);
extern void GXSetMisc(void);
extern void OSRegisterVersion(void);
extern void __GXFifoInit(void);
extern void __GXFlushTextureState(void);
extern void __GXPEInit(void);
extern void __GXSetIndirectMask(void);
extern void __GXSetTmemConfig(void);
extern void fn_806134E0(void);
extern void fn_806136C0(void);
extern void fn_80613910(void);
extern void fn_80613950(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_806141C0(void);
extern void fn_806141D0(void);
extern void fn_806141F0(void);
extern void fn_80614210(void);
extern void fn_80614270(void);
extern void fn_80614290(void);
extern void fn_806142B0(void);
extern void fn_806142D0(void);
extern void fn_806149C0(void);
extern void fn_80614A00(void);
extern void fn_80614A40(void);
extern void fn_80614A80(void);
extern void fn_80614AB0(void);
extern void fn_80614AF0(void);
extern void fn_80614C80(void);
extern void fn_80614D00(void);
extern void fn_80614E40(void);
extern void fn_80614E60(void);
extern void fn_806150C0(void);
extern void fn_80615190(void);
extern void fn_80615210(void);
extern void fn_80615400(void);
extern void fn_806156C0(void);
extern void fn_80615B60(void);
extern void fn_80615C40(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615FF0(void);
extern void fn_806165B0(void);
extern void fn_806167B0(void);
extern void fn_80616800(void);
extern void fn_80616820(void);
extern void fn_80617030(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617340(void);
extern void fn_80617650(void);
extern void fn_806176A0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_806177B0(void);
extern void fn_806177F0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617A10(void);
extern void fn_80617C40(void);
extern void fn_80617D50(void);
extern void fn_80617DA0(void);
extern void fn_80617DD0(void);
extern void fn_80617E00(void);
extern void fn_80617E40(void);
extern void fn_80617E70(void);
extern void fn_80617F20(void);
extern void fn_80617F50(void);
extern void fn_80617F80(void);
extern void fn_80617FC0(void);
extern void fn_80618300(void);
extern void fn_80618350(void);
extern void fn_806183A0(void);
extern void fn_80618400(void);
extern void fn_80618420(void);
extern void fn_80618570(void);
extern void fn_806185C0(void);
extern void fn_80618630(void);
extern void fn_80618670(void);
extern void fn_80618730(void);
extern void fn_80618F50(void);
extern void fn_80611060(void);
extern void fn_80611150(void);

/* External data symbols */
extern u8 FifoObj_807E6F40[];
extern u8 GXShutdownFuncInfo_807B0710[];
extern u8 GXTexRegionAddrTable_807B0650[];
extern u8 lbl_807B04E0[];
extern u8 lbl_807B0900[];
extern u8 lbl_807B09B4[];
extern u8 lbl_807B0A68[];
extern u8 lbl_807B0AE0[];

/* External SDA symbols */
extern u32 __GXData;
extern u32 __GXVersion;
extern u32 __cpReg;
extern u32 __memReg;
extern u32 __peReg;
extern u32 __piReg;
static BOOL lbl_8088007C;
extern u32 lbl_80880084;
extern u32 lbl_8088008C;
extern u32 lbl_80880090;
extern u32 lbl_80880094;
static const f32 lbl_8088871C = 16777216.0f;
static const f32 lbl_80888720 = 0.0f;
extern u32 lbl_80888724;
extern u32 lbl_80888728;
extern f32 lbl_8088872C;
extern f32 lbl_80888730;
extern f64 lbl_80888738;

/* Function declarations */
void __GXInitRevisionBits(void);
void GXInit(void);
void __GXInitGX(void);
void fn_806121F0(void);

asm void __GXInitRevisionBits(void)
{
    nofralloc
    li r0, 0x2
    lwz r6, __GXData
    li r7, 0x0
    li r5, 0x8
    lis r4, 0xcc01
    mtctr r0
lbl___GXInitRevisionBits_00000018:
    lwz r0, 0x1c(r6)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    oris r0, r0, 0x4000
    stw r0, 0x1c(r6)
    lwz r0, 0x3c(r6)
    oris r0, r0, 0x8000
    stw r0, 0x3c(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    lwz r0, 0x3c(r6)
    stw r0, -0x8000(r4)
    lwz r0, 0x20(r6)
    oris r0, r0, 0x4000
    stw r0, 0x20(r6)
    lwz r0, 0x40(r6)
    oris r0, r0, 0x8000
    stw r0, 0x40(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    lwz r0, 0x40(r6)
    stw r0, -0x8000(r4)
    lwz r0, 0x24(r6)
    oris r0, r0, 0x4000
    stw r0, 0x24(r6)
    lwz r0, 0x44(r6)
    oris r0, r0, 0x8000
    stw r0, 0x44(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    lwz r0, 0x44(r6)
    stw r0, -0x8000(r4)
    lwz r0, 0x28(r6)
    oris r0, r0, 0x4000
    stw r0, 0x28(r6)
    lwz r0, 0x48(r6)
    oris r0, r0, 0x8000
    stw r0, 0x48(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    lwz r0, 0x48(r6)
    addi r6, r6, 0x10
    stw r0, -0x8000(r4)
    bdnz lbl___GXInitRevisionBits_00000018
    lis r7, 0xcc01
    li r8, 0x10
    stb r8, -0x8000(r7)
    li r4, 0x0
    li r0, 0x1000
    li r5, 0x1012
    stw r0, -0x8000(r7)
    ori r0, r4, 0x3f
    ori r6, r4, 0x1
    li r3, 0x58
    stw r0, -0x8000(r7)
    ori r4, r4, 0xf
    li r0, 0x61
    stb r8, -0x8000(r7)
    rlwimi r4, r3, 24, 0, 7
    stw r5, -0x8000(r7)
    stw r6, -0x8000(r7)
    stb r0, -0x8000(r7)
    stw r4, -0x8000(r7)
    blr
}

asm void GXInit(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r27, r3
    lwz r3, __GXVersion
    mr r26, r4
    bl OSRegisterVersion
    lwz r31, __GXData
    li r0, 0x0
    li r29, 0x1
    li r3, 0x1
    stb r0, 0x5f8(r31)
    li r4, 0x0
    stb r29, 0x5f9(r31)
    stb r29, 0x5fa(r31)
    stw r0, 0x5e4(r31)
    stw r0, 0x5e8(r31)
    bl GXSetMisc
    lis r4, 0xcc00
    stw r4, __cpReg
    addi r5, r4, 0x3000
    addi r3, r4, 0x1000
    addi r0, r4, 0x4000
    stw r5, __piReg
    stw r3, __peReg
    stw r0, __memReg
    bl __GXFifoInit
    lis r28, FifoObj_807E6F40@ha
    mr r4, r27
    mr r5, r26
    addi r3, r28, FifoObj_807E6F40@l
    bl GXInitFifoBase
    addi r3, r28, FifoObj_807E6F40@l
    bl GXSetCPUFifo
    addi r3, r28, FifoObj_807E6F40@l
    bl GXSetGPFifo
    lwz r0, lbl_8088007C
    cmpwi r0, 0x0
    bne lbl_GXInit_000001E4
    lis r3, GXShutdownFuncInfo_807B0710@ha
    addi r3, r3, GXShutdownFuncInfo_807B0710@l
    bl OSRegisterShutdownFunction
    stw r29, lbl_8088007C
lbl_GXInit_000001E4:
    bl __GXPEInit
    bl PPCMfhid2
    lis r4, 0xc01
    mr r28, r3
    addi r3, r4, -0x8000
    bl PPCMtwpar
    oris r3, r28, 0x4000
    bl PPCMthid2
    lwz r3, __GXData
    li r8, 0x0
    li r0, 0xf
    li r5, 0xff
    stw r8, 0x254(r3)
    rlwimi r5, r0, 24, 0, 7
    li r0, 0x22
    li r4, 0x0
    stw r5, 0x174(r3)
    rlwimi r4, r0, 24, 0, 7
    li r0, 0x8
    mr r9, r3
    stw r4, 0x7c(r3)
    li r26, 0x0
    li r10, 0xc0
    li r6, 0xff
    mtctr r0
lbl_GXInit_00000248:
    stw r8, 0x180(r9)
    extlwi r7, r26, 30, 1
    add r27, r3, r7
    srwi r12, r26, 1
    stw r8, 0x1c0(r9)
    addi r26, r26, 0x1
    addi r11, r10, 0x1
    addi r5, r12, 0xf6
    stw r8, 0x150(r27)
    addi r0, r12, 0x28
    extlwi r7, r26, 30, 1
    srwi r12, r26, 1
    stw r6, 0x5a4(r9)
    addi r26, r26, 0x1
    lwz r4, 0x180(r9)
    rlwimi r4, r10, 24, 0, 7
    stw r4, 0x180(r9)
    lwz r4, 0x1c0(r9)
    rlwimi r4, r11, 24, 0, 7
    stw r4, 0x1c0(r9)
    addi r11, r10, 0x3
    addi r10, r10, 0x2
    lwz r4, 0x200(r27)
    rlwimi r4, r5, 24, 0, 7
    stw r4, 0x200(r27)
    addi r5, r12, 0xf6
    lwz r4, 0x150(r27)
    rlwimi r4, r0, 24, 0, 7
    stw r4, 0x150(r27)
    add r27, r3, r7
    addi r0, r12, 0x28
    stw r8, 0x184(r9)
    stw r8, 0x1c4(r9)
    stw r8, 0x150(r27)
    stw r6, 0x5a8(r9)
    lwz r4, 0x184(r9)
    rlwimi r4, r10, 24, 0, 7
    stw r4, 0x184(r9)
    addi r10, r10, 0x2
    lwz r4, 0x1c4(r9)
    rlwimi r4, r11, 24, 0, 7
    stw r4, 0x1c4(r9)
    addi r9, r9, 0x8
    lwz r4, 0x200(r27)
    rlwimi r4, r5, 24, 0, 7
    stw r4, 0x200(r27)
    lwz r4, 0x150(r27)
    rlwimi r4, r0, 24, 0, 7
    stw r4, 0x150(r27)
    bdnz lbl_GXInit_00000248
    li r4, 0x27
    li r0, 0x2
    li r5, 0x0
    rlwimi r5, r4, 24, 0, 7
    stw r5, 0x170(r31)
    li r5, 0x30
    mtctr r0
lbl_GXInit_0000032C:
    li r4, 0x0
    addi r6, r5, 0x1
    rlwimi r4, r5, 24, 0, 7
    stw r4, 0x108(r3)
    li r0, 0x0
    rlwimi r0, r6, 24, 0, 7
    stw r0, 0x128(r3)
    addi r6, r5, 0x3
    addi r5, r5, 0x2
    li r4, 0x0
    li r0, 0x0
    rlwimi r4, r5, 24, 0, 7
    stw r4, 0x10c(r3)
    rlwimi r0, r6, 24, 0, 7
    addi r6, r5, 0x3
    stw r0, 0x12c(r3)
    addi r5, r5, 0x2
    li r4, 0x0
    li r0, 0x0
    rlwimi r4, r5, 24, 0, 7
    stw r4, 0x110(r3)
    rlwimi r0, r6, 24, 0, 7
    addi r6, r5, 0x3
    stw r0, 0x130(r3)
    addi r5, r5, 0x2
    li r4, 0x0
    li r0, 0x0
    rlwimi r4, r5, 24, 0, 7
    stw r4, 0x114(r3)
    rlwimi r0, r6, 24, 0, 7
    addi r5, r5, 0x2
    stw r0, 0x134(r3)
    addi r3, r3, 0x10
    bdnz lbl_GXInit_0000032C
    lwz r30, __GXData
    lis r3, 0x1062
    li r4, 0x20
    li r0, 0x21
    lwz r5, 0x148(r30)
    rlwimi r5, r4, 24, 0, 7
    stw r5, 0x148(r30)
    li r4, 0x41
    li r7, 0x42
    li r6, 0x40
    lwz r5, 0x14c(r30)
    rlwimi r5, r0, 24, 0, 7
    stw r5, 0x14c(r30)
    li r5, 0x43
    lfs f1, lbl_8088871C
    li r0, 0x0
    lwz r8, 0x220(r30)
    rlwimi r8, r4, 24, 0, 7
    stw r8, 0x220(r30)
    lis r4, 0x8000
    lfs f0, lbl_80888720
    addi r3, r3, 0x4dd3
    lwz r8, 0x224(r30)
    rlwimi r8, r7, 24, 0, 7
    stw r8, 0x224(r30)
    lwz r7, 0x228(r30)
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x228(r30)
    lwz r6, 0x22c(r30)
    rlwimi r6, r5, 24, 0, 7
    stw r6, 0x22c(r30)
    lwz r5, 0x24c(r30)
    rlwinm r5, r5, 0, 25, 22
    stw r5, 0x24c(r30)
    stfs f1, 0x560(r30)
    stfs f0, 0x55c(r30)
    stw r0, 0x5fc(r30)
    stb r0, 0x5fb(r30)
    lwz r0, 0xf8(r4)
    mulhwu r0, r3, r0
    srwi r26, r0, 5
    bl __GXFlushTextureState
    lis r29, 0xcc01
    srwi r0, r26, 11
    li r28, 0x61
    stb r28, -0x8000(r29)
    oris r0, r0, 0x6900
    ori r0, r0, 0x400
    stw r0, -0x8000(r29)
    bl __GXFlushTextureState
    lis r3, 0x3e10
    stb r28, -0x8000(r29)
    subi r0, r3, 0x7c1f
    mulhwu r0, r0, r26
    srwi r0, r0, 10
    oris r0, r0, 0x4600
    ori r0, r0, 0x200
    stw r0, -0x8000(r29)
    bl __GXInitRevisionBits
    lis r28, GXTexRegionAddrTable_807B0650@ha
    addi r29, r30, 0x258
    addi r27, r30, 0x2d8
    addi r30, r30, 0x358
    addi r28, r28, GXTexRegionAddrTable_807B0650@l
    li r26, 0x0
lbl_GXInit_000004B8:
    lwz r5, 0x0(r28)
    mr r3, r29
    lwz r7, 0x20(r28)
    li r4, 0x0
    li r6, 0x0
    li r8, 0x0
    bl GXInitTexCacheRegion
    lwz r5, 0x40(r28)
    mr r3, r27
    lwz r7, 0x60(r28)
    li r4, 0x0
    li r6, 0x0
    li r8, 0x0
    bl GXInitTexCacheRegion
    lwz r5, 0x80(r28)
    mr r3, r30
    lwz r7, 0xa0(r28)
    li r4, 0x1
    li r6, 0x0
    li r8, 0x0
    bl GXInitTexCacheRegion
    addi r26, r26, 0x1
    addi r29, r29, 0x10
    cmplwi r26, 0x8
    addi r27, r27, 0x10
    addi r30, r30, 0x10
    addi r28, r28, 0x4
    blt lbl_GXInit_000004B8
    addi r29, r31, 0x3d8
    li r27, 0x0
    lis r28, 0xc
lbl_GXInit_00000534:
    mr r3, r29
    mr r4, r28
    li r5, 0x10
    bl GXInitTlutRegion
    addi r27, r27, 0x1
    addi r29, r29, 0x10
    cmplwi r27, 0x10
    addi r28, r28, 0x2000
    blt lbl_GXInit_00000534
    addi r29, r31, 0x3d8
    li r27, 0x0
    lis r28, 0xe
lbl_GXInit_00000564:
    addi r0, r27, 0x10
    mr r4, r28
    slwi r0, r0, 4
    li r5, 0x40
    add r3, r29, r0
    bl GXInitTlutRegion
    addi r27, r27, 0x1
    addis r28, r28, 0x1
    cmplwi r27, 0x4
    addi r28, r28, -0x8000
    blt lbl_GXInit_00000564
    lwz r3, __cpReg
    li r11, 0x0
    lis r9, 0xcc01
    li r10, 0x8
    sth r11, 0x6(r3)
    li r8, 0x20
    li r7, 0x10
    li r3, 0x1006
    lwz r0, 0x5f4(r31)
    li r6, 0x61
    lis r5, 0x2300
    lis r4, 0x2400
    rlwinm r0, r0, 0, 28, 23
    stw r0, 0x5f4(r31)
    lis r0, 0x6700
    stb r10, -0x8000(r9)
    stb r8, -0x8000(r9)
    lwz r8, 0x5f4(r31)
    stw r8, -0x8000(r9)
    stb r7, -0x8000(r9)
    stw r3, -0x8000(r9)
    li r3, 0x0
    stw r11, -0x8000(r9)
    stb r6, -0x8000(r9)
    stw r5, -0x8000(r9)
    stb r6, -0x8000(r9)
    stw r4, -0x8000(r9)
    stb r6, -0x8000(r9)
    stw r0, -0x8000(r9)
    bl __GXSetIndirectMask
    li r3, 0x2
    bl __GXSetTmemConfig
    bl __GXInitGX
    lis r3, FifoObj_807E6F40@ha
    addi r11, r1, 0x20
    addi r3, r3, FifoObj_807E6F40@l
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void __GXInitGX(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_27
    lis r0, 0x4330
    lis r28, lbl_807B04E0@ha
    stw r0, 0x70(r1)
    addi r28, r28, lbl_807B04E0@l
    lwz r31, lbl_80888724
    li r30, 0x0
    stw r0, 0x78(r1)
    lwz r29, lbl_80888728
    bl VIGetTvFormat
    cmpwi r3, 0x2
    beq lbl___GXInitGX_000006C4
    bge lbl___GXInitGX_00000694
    cmpwi r3, 0x0
    beq lbl___GXInitGX_000006A0
    bge lbl___GXInitGX_000006AC
    b lbl___GXInitGX_000006D0
lbl___GXInitGX_00000694:
    cmpwi r3, 0x5
    beq lbl___GXInitGX_000006B8
    b lbl___GXInitGX_000006D0
lbl___GXInitGX_000006A0:
    lis r27, lbl_807B0900@ha
    addi r27, r27, lbl_807B0900@l
    b lbl___GXInitGX_000006D8
lbl___GXInitGX_000006AC:
    lis r27, lbl_807B0A68@ha
    addi r27, r27, lbl_807B0A68@l
    b lbl___GXInitGX_000006D8
lbl___GXInitGX_000006B8:
    lis r27, lbl_807B0AE0@ha
    addi r27, r27, lbl_807B0AE0@l
    b lbl___GXInitGX_000006D8
lbl___GXInitGX_000006C4:
    lis r27, lbl_807B09B4@ha
    addi r27, r27, lbl_807B09B4@l
    b lbl___GXInitGX_000006D8
lbl___GXInitGX_000006D0:
    lis r27, lbl_807B0900@ha
    addi r27, r27, lbl_807B0900@l
lbl___GXInitGX_000006D8:
    lis r4, 0x100
    stw r31, 0x1c(r1)
    addi r3, r1, 0x1c
    subi r4, r4, 0x1
    bl fn_80615190
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x3
    li r4, 0x1
    li r5, 0x7
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x4
    li r4, 0x1
    li r5, 0x8
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x5
    li r4, 0x1
    li r5, 0x9
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x6
    li r4, 0x1
    li r5, 0xa
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x7
    li r4, 0x1
    li r5, 0xb
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    bl fn_80613BB0
    bl fn_806134E0
    bl fn_80613950
    li r31, 0x9
lbl___GXInitGX_000007E0:
    lwz r4, __GXData
    mr r3, r31
    li r5, 0x0
    bl fn_80613910
    addi r31, r31, 0x1
    cmplwi r31, 0x18
    ble lbl___GXInitGX_000007E0
    li r31, 0x0
lbl___GXInitGX_00000800:
    mr r3, r31
    addi r4, r28, 0x80
    bl fn_806136C0
    addi r31, r31, 0x1
    cmplwi r31, 0x8
    blt lbl___GXInitGX_00000800
    li r3, 0x6
    li r4, 0x0
    bl fn_806149C0
    li r3, 0x6
    li r4, 0x0
    bl fn_80614A00
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    lfs f0, lbl_80888720
    addi r3, r1, 0x40
    lfs f1, lbl_8088872C
    li r4, 0x0
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f0, 0x6c(r1)
    bl fn_80618350
    addi r3, r1, 0x40
    li r4, 0x0
    bl fn_806183A0
    li r3, 0x0
    bl fn_80618400
    addi r3, r1, 0x40
    li r4, 0x3c
    li r5, 0x0
    bl fn_80618420
    addi r3, r1, 0x40
    li r4, 0x7d
    li r5, 0x0
    bl fn_80618420
    lhz r3, 0x4(r27)
    lhz r0, 0x8(r27)
    stw r3, 0x74(r1)
    lfs f1, lbl_80888720
    stw r0, 0x7c(r1)
    lfd f4, lbl_80888738
    fmr f2, f1
    lfd f3, 0x70(r1)
    fmr f5, f1
    lfd f0, 0x78(r1)
    fsubs f3, f3, f4
    lfs f6, lbl_8088872C
    fsubs f4, f0, f4
    bl fn_80618570
    addi r3, r28, 0x150
    bl fn_80618300
    bl fn_80614AF0
    li r3, 0x0
    bl fn_80614AB0
    li r3, 0x2
    bl fn_80614A80
    li r3, 0x0
    bl fn_80618670
    lhz r5, 0x4(r27)
    li r3, 0x0
    lhz r6, 0x6(r27)
    li r4, 0x0
    bl fn_806185C0
    li r3, 0x0
    li r4, 0x0
    bl fn_80618630
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    stw r30, 0x18(r1)
    addi r4, r1, 0x18
    li r3, 0x4
    bl fn_80615B60
    stw r29, 0x14(r1)
    addi r4, r1, 0x14
    li r3, 0x4
    bl fn_80615C40
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    stw r30, 0x10(r1)
    addi r4, r1, 0x10
    li r3, 0x5
    bl fn_80615B60
    stw r29, 0xc(r1)
    addi r4, r1, 0xc
    li r3, 0x5
    bl fn_80615C40
    bl fn_806167B0
    lis r3, fn_80611060@ha
    addi r3, r3, fn_80611060@l
    bl fn_80616800
    lis r3, fn_80611150@ha
    addi r3, r3, fn_80611150@l
    bl fn_80616820
    addi r3, r1, 0x20
    addi r4, r28, 0x60
    li r5, 0x4
    li r6, 0x4
    li r7, 0x3
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    addi r3, r1, 0x20
    li r4, 0x0
    bl fn_806165B0
    addi r3, r1, 0x20
    li r4, 0x1
    bl fn_806165B0
    addi r3, r1, 0x20
    li r4, 0x2
    bl fn_806165B0
    addi r3, r1, 0x20
    li r4, 0x3
    bl fn_806165B0
    addi r3, r1, 0x20
    li r4, 0x4
    bl fn_806165B0
    addi r3, r1, 0x20
    li r4, 0x5
    bl fn_806165B0
    addi r3, r1, 0x20
    li r4, 0x6
    bl fn_806165B0
    addi r3, r1, 0x20
    li r4, 0x7
    bl fn_806165B0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x4
    bl fn_80617880
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    li r6, 0x4
    bl fn_80617880
    li r3, 0x3
    li r4, 0x3
    li r5, 0x3
    li r6, 0x4
    bl fn_80617880
    li r3, 0x4
    li r4, 0x4
    li r5, 0x4
    li r6, 0x4
    bl fn_80617880
    li r3, 0x5
    li r4, 0x5
    li r5, 0x5
    li r6, 0x4
    bl fn_80617880
    li r3, 0x6
    li r4, 0x6
    li r5, 0x6
    li r6, 0x4
    bl fn_80617880
    li r3, 0x7
    li r4, 0x7
    li r5, 0x7
    li r6, 0x4
    bl fn_80617880
    li r3, 0x8
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0x9
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xa
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xb
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xc
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xd
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xe
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xf
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_806177B0
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r31, 0x0
lbl___GXInitGX_00000C4C:
    mr r3, r31
    li r4, 0x6
    bl fn_80617650
    mr r3, r31
    li r4, 0x0
    bl fn_806176A0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    addi r31, r31, 0x1
    cmplwi r31, 0x10
    blt lbl___GXInitGX_00000C4C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x3
    bl fn_80617730
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r31, 0x0
lbl___GXInitGX_00000CE4:
    mr r3, r31
    bl fn_80617220
    addi r31, r31, 0x1
    cmplwi r31, 0x10
    blt lbl___GXInitGX_00000CE4
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    lfs f2, lbl_8088872C
    addi r4, r1, 0x8
    stw r30, 0x8(r1)
    li r3, 0x0
    fmr f4, f2
    lfs f1, lbl_80888720
    lfs f3, lbl_80888730
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617C40
    li r3, 0x0
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    li r3, 0x1
    bl fn_80617DA0
    li r3, 0x1
    bl fn_80617DD0
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl fn_80617E00
    li r3, 0x1
    bl fn_80617E40
    li r3, 0x1
    bl fn_80617F20
    li r3, 0x0
    li r4, 0x0
    bl fn_80617F50
    li r3, 0x0
    li r4, 0x0
    bl fn_80617E70
    li r3, 0x1
    li r4, 0x1
    bl fn_80617F80
    lhz r0, 0x8(r27)
    lhz r3, 0x10(r27)
    slwi r0, r0, 1
    cmpw r3, r0
    bne lbl___GXInitGX_00000DF4
    li r4, 0x1
    b lbl___GXInitGX_00000DF8
lbl___GXInitGX_00000DF4:
    li r4, 0x0
lbl___GXInitGX_00000DF8:
    lbz r3, 0x18(r27)
    bl fn_80617FC0
    lhz r5, 0x4(r27)
    li r3, 0x0
    lhz r6, 0x6(r27)
    li r4, 0x0
    bl fn_80614C80
    lhz r3, 0x4(r27)
    lhz r4, 0x6(r27)
    bl fn_80614D00
    lhz r3, 0x8(r27)
    lhz r0, 0x6(r27)
    stw r3, 0x74(r1)
    lfd f2, lbl_80888738
    stw r0, 0x7c(r1)
    lfd f1, 0x70(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    bl fn_806150C0
    li r3, 0x3
    bl fn_80614E60
    lbz r3, 0x19(r27)
    addi r4, r27, 0x1a
    addi r6, r27, 0x32
    li r5, 0x1
    bl fn_80615210
    li r3, 0x0
    bl fn_80615400
    li r3, 0x0
    bl fn_80614E40
    bl fn_806156C0
    li r3, 0x1
    bl fn_80614270
    li r3, 0x1
    bl fn_806141F0
    li r3, 0x0
    bl fn_806142B0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0xf
    bl fn_80614210
    li r3, 0x7
    li r4, 0x0
    bl fn_806141C0
    li r3, 0x1
    bl fn_806141D0
    li r3, 0x0
    li r4, 0x0
    bl fn_80614290
    li r3, 0x1
    li r4, 0x7
    li r5, 0x1
    bl fn_806142D0
    li r3, 0x23
    li r4, 0x16
    bl fn_80618730
    bl fn_80618F50
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_806121F0(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    lwz r31, __GXData
    stw r30, 0x2d8(r1)
    mr r30, r4
    lwz r3, __cpReg
    lhz r0, 0x0(r3)
    stw r0, 0xc(r31)
    lwz r0, 0x8(r31)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_806121F0_00000F80
    lwz r0, 0xc(r31)
    extrwi. r0, r0, 1, 30
    beq lbl_fn_806121F0_00000F80
    lwz r3, lbl_80880094
    bl OSResumeThread
    li r0, 0x0
    stw r0, lbl_80880090
    lwz r3, __GXData
    lwz r0, 0x10(r3)
    ori r0, r0, 0x3
    stw r0, 0x10(r3)
    lwz r3, __cpReg
    sth r0, 0x4(r3)
    lwz r0, 0x8(r31)
    ori r0, r0, 0x4
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r31)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
lbl_fn_806121F0_00000F80:
    lwz r0, 0x8(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_806121F0_00000FE8
    lwz r0, 0xc(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_806121F0_00000FE8
    lwz r3, lbl_80880084
    li r0, 0x1
    lwz r5, __GXData
    addi r3, r3, 0x1
    stw r3, lbl_80880084
    lwz r3, 0x8(r31)
    rlwinm r4, r3, 0, 30, 28
    ori r4, r4, 0x8
    stw r4, 0x8(r31)
    lwz r3, __cpReg
    sth r4, 0x2(r3)
    lwz r3, 0x10(r5)
    ori r3, r3, 0x1
    rlwinm r4, r3, 0, 31, 29
    stw r4, 0x10(r5)
    lwz r3, __cpReg
    sth r4, 0x4(r3)
    stw r0, lbl_80880090
    lwz r3, lbl_80880094
    bl OSSuspendThread
lbl_fn_806121F0_00000FE8:
    lwz r3, 0x8(r31)
    extrwi. r0, r3, 1, 26
    beq lbl_fn_806121F0_00001048
    lwz r0, 0xc(r31)
    extrwi. r0, r0, 1, 27
    beq lbl_fn_806121F0_00001048
    rlwinm r0, r3, 0, 27, 25
    stw r0, 0x8(r31)
    lwz r3, __cpReg
    sth r0, 0x2(r3)
    lwz r0, lbl_8088008C
    cmpwi r0, 0x0
    beq lbl_fn_806121F0_00001048
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_8088008C
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r30
    bl OSSetCurrentContext
lbl_fn_806121F0_00001048:
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}
