#include "revolution/types.h"

/* External functions referenced */
extern void _savegpr_23(void);
extern void _restgpr_23(void);

/* External SDA symbols */
extern u32 __GXData;
extern u8 lbl_8087E880[8];
extern u8 lbl_8087E888[8];
extern u8 lbl_8087E890[8];
extern u8 lbl_8087E898[8];
extern u8 lbl_8087E8A0[8];
extern u8 lbl_8087E8A8[8];
extern u8 lbl_8087E8B0[8];
extern f64 lbl_808887B0;

/* Function declarations */
void fn_80616380(void);
void fn_80616390(void);
void fn_806163A0(void);
void fn_806163B0(void);
void fn_806163C0(void);
void fn_806163E0(void);
void fn_80616400(void);
void fn_80616410(void);
void fn_80616420(void);
void fn_80616430(void);
void fn_80616440(void);
void fn_806165B0(void);
void fn_80616610(void);
void fn_80616640(void);
void GXInitTexCacheRegion(void);
void GXInitTlutRegion(void);
void fn_806167B0(void);
void fn_80616800(void);
void fn_80616820(void);
void fn_80616840(void);
void fn_806168C0(void);
void fn_80616930(void);
void fn_806169C0(void);
void __GXSetTmemConfig(void);
void fn_80616E80(void);
void fn_80616EF0(void);
void fn_80617030(void);
void fn_80617130(void);
void fn_80617200(void);
void fn_80617220(void);
void fn_80617270(void);
void fn_806172D0(void);
void __GXSetIndirectMask(void);
void __GXFlushTextureState(void);

asm void fn_80616380(void)
{
    nofralloc
    stw r4, 0x18(r3)
    blr
}

asm void fn_80616390(void)
{
    nofralloc
    stw r4, 0x10(r3)
    blr
}

asm void fn_806163A0(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    blr
}

asm void fn_806163B0(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    clrlslwi r3, r0, 8, 5
    blr
}

asm void fn_806163C0(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    clrlwi r3, r0, 22
    addi r0, r3, 0x1
    clrlwi r3, r0, 16
    blr
}

asm void fn_806163E0(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    extrwi r3, r0, 10, 12
    addi r0, r3, 0x1
    clrlwi r3, r0, 16
    blr
}

asm void fn_80616400(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    blr
}

asm void fn_80616410(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    clrlwi r3, r0, 30
    blr
}

asm void fn_80616420(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 2, 28
    blr
}

asm void fn_80616430(void)
{
    nofralloc
    lbz r0, 0x1f(r3)
    clrlwi r3, r0, 31
    blr
}

asm void fn_80616440(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    la r11, lbl_8087E880
    la r10, lbl_8087E888
    stw r0, 0x24(r1)
    la r9, lbl_8087E890
    lwz r12, 0x0(r3)
    la r8, lbl_8087E898
    stw r31, 0x1c(r1)
    la r7, lbl_8087E8A0
    la r6, lbl_8087E8A8
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lis r29, 0xcc01
    stw r28, 0x10(r1)
    li r28, 0x61
    lbzx r0, r11, r5
    lwz r11, 0x4(r3)
    rlwimi r12, r0, 24, 0, 7
    lbzx r0, r10, r5
    lbzx r10, r9, r5
    rlwimi r11, r0, 24, 0, 7
    lbzx r0, r7, r5
    lbzx r8, r8, r5
    lbzx r5, r6, r5
    lwz r9, 0x8(r3)
    rlwimi r9, r10, 24, 0, 7
    stb r28, -0x8000(r29)
    lwz r7, 0x0(r4)
    rlwimi r7, r8, 24, 0, 7
    stw r12, -0x8000(r29)
    lwz r6, 0x4(r4)
    rlwimi r6, r0, 24, 0, 7
    stb r28, -0x8000(r29)
    lbz r0, 0x1f(r3)
    stw r11, -0x8000(r29)
    rlwinm. r0, r0, 0, 30, 30
    lwz r0, 0xc(r3)
    stb r28, -0x8000(r29)
    rlwimi r0, r5, 24, 0, 7
    stw r9, -0x8000(r29)
    stb r28, -0x8000(r29)
    stw r7, -0x8000(r29)
    stb r28, -0x8000(r29)
    stw r6, -0x8000(r29)
    stb r28, -0x8000(r29)
    stw r12, 0x0(r3)
    stw r11, 0x4(r3)
    stw r9, 0x8(r3)
    stw r7, 0x0(r4)
    stw r6, 0x4(r4)
    stw r0, 0xc(r3)
    stw r0, -0x8000(r29)
    bne lbl_fn_80616440_000001D4
    lwz r4, __GXData
    lwz r3, 0x18(r3)
    lwz r12, 0x51c(r4)
    mtctr r12
    bctrl
    la r4, lbl_8087E8B0
    lwz r0, 0x4(r3)
    lbzx r4, r4, r31
    rlwimi r0, r4, 24, 0, 7
    stw r0, 0x4(r3)
    stb r28, -0x8000(r29)
    lwz r0, 0x4(r3)
    stw r0, -0x8000(r29)
lbl_fn_80616440_000001D4:
    lwz r6, __GXData
    slwi r3, r31, 2
    lwz r5, 0x8(r30)
    li r0, 0x0
    add r4, r6, r3
    lwz r3, 0x0(r30)
    stw r5, 0x564(r4)
    stw r3, 0x584(r4)
    lwz r3, 0x5fc(r6)
    ori r3, r3, 0x1
    stw r3, 0x5fc(r6)
    sth r0, 0x2(r6)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806165B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, __GXData
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r12, 0x518(r5)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_80616440
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80616610(void)
{
    nofralloc
    lwz r7, 0x4(r3)
    li r0, 0x64
    rlwimi r7, r4, 27, 8, 31
    li r4, 0x0
    rlwimi r4, r5, 10, 20, 21
    sth r6, 0x8(r3)
    rlwimi r7, r0, 24, 0, 7
    stw r4, 0x0(r3)
    stw r7, 0x4(r3)
    blr
}

asm void fn_80616640(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, __GXData
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    lwz r12, 0x51c(r5)
    mtctr r12
    bctrl
    mr r31, r3
    bl __GXFlushTextureState
    lis r3, 0xcc01
    li r4, 0x61
    stb r4, -0x8000(r3)
    lwz r0, 0x4(r30)
    stw r0, -0x8000(r3)
    stb r4, -0x8000(r3)
    lwz r0, 0x0(r31)
    stw r0, -0x8000(r3)
    bl __GXFlushTextureState
    lwz r0, 0x0(r31)
    lwz r3, 0x0(r30)
    rlwimi r3, r0, 0, 22, 31
    stw r3, 0x4(r31)
    lwz r0, 0x4(r30)
    stw r0, 0x8(r31)
    lwz r0, 0x8(r30)
    stw r0, 0xc(r31)
    stw r3, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void GXInitTexCacheRegion(void)
{
    nofralloc
    cmpwi r6, 0x0
    beq lbl_GXInitTexCacheRegion_0000037C
    cmpwi r6, 0x1
    beq lbl_GXInitTexCacheRegion_00000384
    cmpwi r6, 0x2
    beq lbl_GXInitTexCacheRegion_0000038C
    b lbl_GXInitTexCacheRegion_00000390
lbl_GXInitTexCacheRegion_0000037C:
    li r6, 0x3
    b lbl_GXInitTexCacheRegion_00000390
lbl_GXInitTexCacheRegion_00000384:
    li r6, 0x4
    b lbl_GXInitTexCacheRegion_00000390
lbl_GXInitTexCacheRegion_0000038C:
    li r6, 0x5
lbl_GXInitTexCacheRegion_00000390:
    cmpwi r8, 0x0
    li r0, 0x0
    rlwimi r0, r5, 27, 17, 31
    rlwimi r0, r6, 15, 14, 16
    rlwimi r0, r6, 18, 11, 13
    stw r0, 0x0(r3)
    beq lbl_GXInitTexCacheRegion_000003C8
    cmpwi r8, 0x1
    beq lbl_GXInitTexCacheRegion_000003D0
    cmpwi r8, 0x2
    beq lbl_GXInitTexCacheRegion_000003D8
    cmpwi r8, 0x3
    beq lbl_GXInitTexCacheRegion_000003E0
    b lbl_GXInitTexCacheRegion_000003E4
lbl_GXInitTexCacheRegion_000003C8:
    li r6, 0x3
    b lbl_GXInitTexCacheRegion_000003E4
lbl_GXInitTexCacheRegion_000003D0:
    li r6, 0x4
    b lbl_GXInitTexCacheRegion_000003E4
lbl_GXInitTexCacheRegion_000003D8:
    li r6, 0x5
    b lbl_GXInitTexCacheRegion_000003E4
lbl_GXInitTexCacheRegion_000003E0:
    li r6, 0x0
lbl_GXInitTexCacheRegion_000003E4:
    li r5, 0x0
    li r0, 0x1
    rlwimi r5, r7, 27, 17, 31
    stb r4, 0xc(r3)
    rlwimi r5, r6, 15, 14, 16
    rlwimi r5, r6, 18, 11, 13
    stb r0, 0xd(r3)
    stw r5, 0x4(r3)
    blr
}

asm void GXInitTlutRegion(void)
{
    nofralloc
    subis r0, r4, 0x8
    li r4, 0x0
    rlwimi r4, r0, 23, 22, 31
    li r0, 0x65
    rlwimi r4, r5, 10, 11, 21
    rlwimi r4, r0, 24, 0, 7
    stw r4, 0x0(r3)
    blr
}

asm void fn_806167B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl __GXFlushTextureState
    lis r5, 0xcc01
    lis r3, 0x6600
    li r6, 0x61
    stb r6, -0x8000(r5)
    addi r4, r3, 0x1000
    addi r0, r3, 0x1100
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    stw r0, -0x8000(r5)
    bl __GXFlushTextureState
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80616800(void)
{
    nofralloc
    lwz r4, __GXData
    mr r0, r3
    lwz r3, 0x518(r4)
    stw r0, 0x518(r4)
    blr
}

asm void fn_80616820(void)
{
    nofralloc
    lwz r4, __GXData
    mr r0, r3
    lwz r3, 0x51c(r4)
    stw r0, 0x51c(r4)
    blr
}

asm void fn_80616840(void)
{
    nofralloc
    lwz r9, __GXData
    li r0, 0x1
    slw r7, r0, r3
    cmpwi r4, 0x0
    lwz r8, 0x5e4(r9)
    slw r0, r4, r3
    andc r4, r8, r7
    or r0, r4, r0
    stw r0, 0x5e4(r9)
    beqlr
    slwi r0, r3, 2
    subi r3, r5, 0x1
    add r8, r9, r0
    subi r5, r6, 0x1
    lwz r0, 0x108(r8)
    rlwimi r0, r3, 0, 16, 31
    stw r0, 0x108(r8)
    lis r4, 0xcc01
    li r7, 0x61
    li r0, 0x0
    lwz r3, 0x128(r8)
    rlwimi r3, r5, 0, 16, 31
    stw r3, 0x128(r8)
    stb r7, -0x8000(r4)
    lwz r3, 0x108(r8)
    stw r3, -0x8000(r4)
    stb r7, -0x8000(r4)
    lwz r3, 0x128(r8)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r9)
    blr
}

asm void fn_806168C0(void)
{
    nofralloc
    lwz r8, __GXData
    slwi r6, r3, 2
    li r0, 0x1
    add r7, r8, r6
    lwz r6, 0x108(r7)
    rlwimi r6, r4, 17, 14, 14
    stw r6, 0x108(r7)
    slw r0, r0, r3
    lwz r3, 0x128(r7)
    rlwimi r3, r5, 17, 14, 14
    stw r3, 0x128(r7)
    lwz r3, 0x5e4(r8)
    and. r0, r3, r0
    beqlr
    lis r4, 0xcc01
    li r5, 0x61
    stb r5, -0x8000(r4)
    li r0, 0x0
    lwz r3, 0x108(r7)
    stw r3, -0x8000(r4)
    stb r5, -0x8000(r4)
    lwz r3, 0x128(r7)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r8)
    blr
}

asm void fn_80616930(void)
{
    nofralloc
    lwz r11, __GXData
    slwi r6, r4, 2
    slwi r0, r3, 2
    lis r5, 0xcc01
    add r10, r11, r0
    add r9, r11, r6
    lwz r3, 0x564(r10)
    li r4, 0x61
    lwz r8, 0x108(r9)
    li r0, 0x0
    clrlwi r6, r3, 22
    extrwi r3, r3, 10, 12
    rlwimi r8, r6, 0, 16, 31
    stw r8, 0x108(r9)
    lwz r7, 0x128(r9)
    rlwimi r7, r3, 0, 16, 31
    stw r7, 0x128(r9)
    lwz r3, 0x584(r10)
    clrlwi r6, r3, 30
    extrwi r3, r3, 2, 28
    subi r6, r6, 0x1
    cntlzw r6, r6
    subi r3, r3, 0x1
    rlwimi r8, r6, 11, 15, 15
    stw r8, 0x108(r9)
    cntlzw r3, r3
    rlwimi r7, r3, 11, 15, 15
    stw r7, 0x128(r9)
    stb r4, -0x8000(r5)
    lwz r3, 0x108(r9)
    stw r3, -0x8000(r5)
    stb r4, -0x8000(r5)
    lwz r3, 0x128(r9)
    stw r3, -0x8000(r5)
    sth r0, 0x2(r11)
    blr
}

asm void fn_806169C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r29, __GXData
    lwz r0, 0x5e4(r29)
    cmplwi r0, 0xff
    beq lbl_fn_806169C0_0000078C
    lwz r0, 0x254(r29)
    li r28, 0x0
    li r23, 0x1
    extrwi r3, r0, 4, 18
    extrwi r27, r0, 3, 13
    addi r26, r3, 0x1
    b lbl_fn_806169C0_00000700
lbl_fn_806169C0_00000680:
    cmpwi r28, 0x0
    beq lbl_fn_806169C0_000006A4
    cmplwi r28, 0x1
    beq lbl_fn_806169C0_000006B4
    cmplwi r28, 0x2
    beq lbl_fn_806169C0_000006C4
    cmplwi r28, 0x3
    beq lbl_fn_806169C0_000006D4
    b lbl_fn_806169C0_000006E0
lbl_fn_806169C0_000006A4:
    lwz r0, 0x170(r29)
    clrlwi r25, r0, 29
    extrwi r24, r0, 3, 26
    b lbl_fn_806169C0_000006E0
lbl_fn_806169C0_000006B4:
    lwz r0, 0x170(r29)
    extrwi r25, r0, 3, 23
    extrwi r24, r0, 3, 20
    b lbl_fn_806169C0_000006E0
lbl_fn_806169C0_000006C4:
    lwz r0, 0x170(r29)
    extrwi r25, r0, 3, 17
    extrwi r24, r0, 3, 14
    b lbl_fn_806169C0_000006E0
lbl_fn_806169C0_000006D4:
    lwz r0, 0x170(r29)
    extrwi r25, r0, 3, 11
    extrwi r24, r0, 3, 8
lbl_fn_806169C0_000006E0:
    lwz r3, 0x5e4(r29)
    slw r0, r23, r24
    and. r0, r3, r0
    bne lbl_fn_806169C0_000006FC
    mr r3, r25
    mr r4, r24
    bl fn_80616930
lbl_fn_806169C0_000006FC:
    addi r28, r28, 0x1
lbl_fn_806169C0_00000700:
    cmplw r28, r27
    blt lbl_fn_806169C0_00000680
    lwz r28, __GXData
    li r27, 0x0
    li r23, 0x1
    mr r31, r28
    addi r30, r28, 0x150
    b lbl_fn_806169C0_00000784
lbl_fn_806169C0_00000720:
    clrlwi. r0, r27, 31
    lwz r0, 0x5a4(r31)
    extlwi r3, r27, 30, 1
    rlwinm r25, r0, 0, 24, 22
    beq lbl_fn_806169C0_00000740
    lwzx r0, r30, r3
    extrwi r24, r0, 3, 14
    b lbl_fn_806169C0_00000748
lbl_fn_806169C0_00000740:
    lwzx r0, r30, r3
    extrwi r24, r0, 3, 26
lbl_fn_806169C0_00000748:
    cmplwi r25, 0xff
    beq lbl_fn_806169C0_0000077C
    lwz r3, 0x5e4(r29)
    slw r0, r23, r24
    and. r0, r3, r0
    bne lbl_fn_806169C0_0000077C
    lwz r3, 0x5e8(r28)
    slw r0, r23, r27
    and. r0, r3, r0
    beq lbl_fn_806169C0_0000077C
    mr r3, r25
    mr r4, r24
    bl fn_80616930
lbl_fn_806169C0_0000077C:
    addi r31, r31, 0x4
    addi r27, r27, 0x1
lbl_fn_806169C0_00000784:
    cmplw r27, r26
    blt lbl_fn_806169C0_00000720
lbl_fn_806169C0_0000078C:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void __GXSetTmemConfig(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    cmplwi r3, 0x2
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl___GXSetTmemConfig_000007D0
    cmplwi r3, 0x1
    beq lbl___GXSetTmemConfig_000008DC
    b lbl___GXSetTmemConfig_000009E8
lbl___GXSetTmemConfig_000007D0:
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    lis r4, 0x8c0e
    addi r4, r4, -0x8000
    lis r5, 0x900e
    stw r4, -0x8000(r3)
    lis r4, 0x8d0e
    lis r31, 0x910e
    lis r30, 0x8e0e
    stb r0, -0x8000(r3)
    subi r5, r5, 0x4000
    lis r12, 0x920e
    lis r11, 0x8f0e
    stw r5, -0x8000(r3)
    lis r10, 0x930e
    lis r9, 0xac0e
    lis r8, 0xb00e
    stb r0, -0x8000(r3)
    subi r4, r4, 0x7800
    lis r7, 0xad0e
    lis r6, 0xb10e
    stw r4, -0x8000(r3)
    lis r5, 0xae0e
    lis r4, 0xb20e
    subi r31, r31, 0x3800
    stb r0, -0x8000(r3)
    subi r30, r30, 0x7000
    subi r12, r12, 0x3000
    subi r11, r11, 0x6800
    stw r31, -0x8000(r3)
    subi r10, r10, 0x2800
    subi r9, r9, 0x6000
    subi r8, r8, 0x3c00
    stb r0, -0x8000(r3)
    subi r7, r7, 0x5800
    subi r6, r6, 0x3400
    subi r5, r5, 0x5000
    stw r30, -0x8000(r3)
    subi r4, r4, 0x2c00
    stb r0, -0x8000(r3)
    stw r12, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r11, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r10, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r9, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r8, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r7, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r6, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r5, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lis r5, 0xaf0e
    lis r4, 0xb30e
    subi r5, r5, 0x4800
    stw r5, -0x8000(r3)
    subi r4, r4, 0x2400
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    b lbl___GXSetTmemConfig_00000AF0
lbl___GXSetTmemConfig_000008DC:
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    lis r4, 0x8c0e
    addi r4, r4, -0x8000
    lis r5, 0x900e
    stw r4, -0x8000(r3)
    lis r4, 0x8d0e
    lis r31, 0x910e
    lis r30, 0x8e0e
    stb r0, -0x8000(r3)
    subi r5, r5, 0x4000
    lis r12, 0x920e
    lis r11, 0x8f0e
    stw r5, -0x8000(r3)
    lis r10, 0x930e
    lis r9, 0xac0e
    lis r8, 0xb00e
    stb r0, -0x8000(r3)
    subi r4, r4, 0x7800
    lis r7, 0xad0e
    lis r6, 0xb10e
    stw r4, -0x8000(r3)
    lis r5, 0xae0e
    lis r4, 0xb20e
    subi r31, r31, 0x3800
    stb r0, -0x8000(r3)
    subi r30, r30, 0x7000
    subi r12, r12, 0x3000
    subi r11, r11, 0x6800
    stw r31, -0x8000(r3)
    subi r10, r10, 0x2800
    subi r9, r9, 0x6000
    subi r8, r8, 0x2000
    stb r0, -0x8000(r3)
    subi r7, r7, 0x5800
    subi r6, r6, 0x1800
    subi r5, r5, 0x5000
    stw r30, -0x8000(r3)
    subi r4, r4, 0x1000
    stb r0, -0x8000(r3)
    stw r12, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r11, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r10, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r9, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r8, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r7, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r6, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r5, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lis r5, 0xaf0e
    lis r4, 0xb30e
    subi r5, r5, 0x4800
    stw r5, -0x8000(r3)
    subi r4, r4, 0x800
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    b lbl___GXSetTmemConfig_00000AF0
lbl___GXSetTmemConfig_000009E8:
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    lis r4, 0x8c0e
    addi r4, r4, -0x8000
    lis r5, 0x900e
    stw r4, -0x8000(r3)
    lis r4, 0x8d0e
    lis r30, 0x910e
    lis r31, 0x8e0e
    stb r0, -0x8000(r3)
    subi r5, r5, 0x4000
    lis r12, 0x920e
    lis r11, 0x8f0e
    stw r5, -0x8000(r3)
    lis r10, 0x930e
    lis r9, 0xac0e
    lis r8, 0xb00e
    stb r0, -0x8000(r3)
    subi r4, r4, 0x7c00
    lis r7, 0xad0e
    lis r6, 0xb10e
    stw r4, -0x8000(r3)
    lis r5, 0xae0e
    lis r4, 0xb20e
    subi r30, r30, 0x3c00
    stb r0, -0x8000(r3)
    subi r31, r31, 0x7800
    subi r12, r12, 0x3800
    subi r11, r11, 0x7400
    stw r30, -0x8000(r3)
    subi r10, r10, 0x3400
    subi r9, r9, 0x7000
    subi r8, r8, 0x3000
    stb r0, -0x8000(r3)
    subi r7, r7, 0x6c00
    subi r6, r6, 0x2c00
    subi r5, r5, 0x6800
    stw r31, -0x8000(r3)
    subi r4, r4, 0x2800
    stb r0, -0x8000(r3)
    stw r12, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r11, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r10, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r9, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r8, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r7, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r6, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r5, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lis r5, 0xaf0e
    lis r4, 0xb30e
    subi r5, r5, 0x6400
    stw r5, -0x8000(r3)
    subi r4, r4, 0x2400
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
lbl___GXSetTmemConfig_00000AF0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_80616E80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r12, 0x0
    rlwimi r12, r4, 0, 30, 31
    addi r4, r3, 0x10
    stw r31, 0xc(r1)
    rlwimi r12, r5, 2, 28, 29
    lis r11, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r11)
    rlwimi r12, r6, 4, 25, 27
    lwz r31, 0x1c(r1)
    li r0, 0x0
    lbz r5, 0x1b(r1)
    rlwimi r12, r31, 7, 23, 24
    lwz r3, __GXData
    rlwimi r12, r7, 9, 19, 22
    rlwimi r12, r8, 13, 16, 18
    rlwimi r12, r9, 16, 13, 15
    rlwimi r12, r5, 19, 12, 12
    rlwimi r12, r10, 20, 11, 11
    rlwimi r12, r4, 24, 0, 7
    stw r12, -0x8000(r11)
    sth r0, 0x2(r3)
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_80616EF0(void)
{
    nofralloc
    subi r6, r3, 0x1
    stwu r1, -0x40(r1)
    cmplwi r6, 0x2
    ble lbl_fn_80616EF0_00000BAC
    subi r6, r3, 0x5
    cmplwi r6, 0x2
    ble lbl_fn_80616EF0_00000BAC
    subi r6, r3, 0x9
    cmplwi r6, 0x2
    ble lbl_fn_80616EF0_00000BAC
    b lbl_fn_80616EF0_00000BA8
    b lbl_fn_80616EF0_00000BAC
    b lbl_fn_80616EF0_00000BAC
    b lbl_fn_80616EF0_00000BAC
lbl_fn_80616EF0_00000BA8:
    li r6, 0x0
lbl_fn_80616EF0_00000BAC:
    lfs f6, lbl_808887B0
    slwi r0, r6, 2
    lfs f1, 0x0(r4)
    subf r10, r6, r0
    lfs f0, 0xc(r4)
    addi r9, r5, 0x11
    fmuls f1, f6, f1
    lfs f3, 0x4(r4)
    fmuls f0, f6, f0
    lfs f2, 0x10(r4)
    fmuls f3, f6, f3
    lis r7, 0xcc01
    fctiwz f5, f1
    lfs f1, 0x8(r4)
    fctiwz f4, f0
    lfs f0, 0x14(r4)
    stfd f5, 0x8(r1)
    fmuls f2, f6, f2
    li r8, 0x61
    fctiwz f3, f3
    fctiwz f2, f2
    stfd f4, 0x10(r1)
    fmuls f1, f6, f1
    lwz r0, 0xc(r1)
    li r5, 0x0
    rlwimi r5, r0, 0, 21, 31
    lwz r0, 0x14(r1)
    fmuls f0, f6, f0
    stfd f3, 0x18(r1)
    fctiwz f1, f1
    rlwimi r5, r0, 11, 10, 20
    addi r4, r10, 0x6
    stfd f2, 0x20(r1)
    rlwimi r5, r9, 22, 8, 9
    fctiwz f0, f0
    rlwimi r5, r4, 24, 0, 7
    stb r8, -0x8000(r7)
    lwz r3, 0x1c(r1)
    li r6, 0x0
    stw r5, -0x8000(r7)
    lwz r0, 0x24(r1)
    rlwimi r6, r3, 0, 21, 31
    stfd f1, 0x28(r1)
    addi r4, r10, 0x7
    rlwimi r6, r0, 11, 10, 20
    li r5, 0x0
    stfd f0, 0x30(r1)
    rlwimi r6, r9, 20, 8, 9
    rlwimi r6, r4, 24, 0, 7
    lwz r3, 0x2c(r1)
    stb r8, -0x8000(r7)
    addi r4, r10, 0x8
    rlwimi r5, r3, 0, 21, 31
    lwz r0, 0x34(r1)
    stw r6, -0x8000(r7)
    rlwimi r5, r0, 11, 10, 20
    lwz r3, __GXData
    rlwimi r5, r9, 18, 8, 9
    stb r8, -0x8000(r7)
    rlwimi r5, r4, 24, 0, 7
    li r0, 0x0
    stw r5, -0x8000(r7)
    sth r0, 0x2(r3)
    addi r1, r1, 0x40
    blr
}

asm void fn_80617030(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_80617030_00000CD4
    cmpwi r3, 0x1
    beq lbl_fn_80617030_00000D08
    cmpwi r3, 0x2
    beq lbl_fn_80617030_00000D3C
    cmpwi r3, 0x3
    beq lbl_fn_80617030_00000D70
    b lbl_fn_80617030_00000DA0
lbl_fn_80617030_00000CD4:
    lwz r8, __GXData
    li r6, 0x25
    lis r3, 0xcc01
    li r0, 0x61
    lwz r7, 0x178(r8)
    rlwimi r7, r4, 0, 28, 31
    rlwimi r7, r5, 4, 24, 27
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x178(r8)
    stb r0, -0x8000(r3)
    lwz r0, 0x178(r8)
    stw r0, -0x8000(r3)
    b lbl_fn_80617030_00000DA0
lbl_fn_80617030_00000D08:
    lwz r8, __GXData
    li r6, 0x25
    lis r3, 0xcc01
    li r0, 0x61
    lwz r7, 0x178(r8)
    rlwimi r7, r4, 8, 20, 23
    rlwimi r7, r5, 12, 16, 19
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x178(r8)
    stb r0, -0x8000(r3)
    lwz r0, 0x178(r8)
    stw r0, -0x8000(r3)
    b lbl_fn_80617030_00000DA0
lbl_fn_80617030_00000D3C:
    lwz r8, __GXData
    li r6, 0x26
    lis r3, 0xcc01
    li r0, 0x61
    lwz r7, 0x17c(r8)
    rlwimi r7, r4, 0, 28, 31
    rlwimi r7, r5, 4, 24, 27
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x17c(r8)
    stb r0, -0x8000(r3)
    lwz r0, 0x17c(r8)
    stw r0, -0x8000(r3)
    b lbl_fn_80617030_00000DA0
lbl_fn_80617030_00000D70:
    lwz r8, __GXData
    li r6, 0x26
    lis r3, 0xcc01
    li r0, 0x61
    lwz r7, 0x17c(r8)
    rlwimi r7, r4, 8, 20, 23
    rlwimi r7, r5, 12, 16, 19
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x17c(r8)
    stb r0, -0x8000(r3)
    lwz r0, 0x17c(r8)
    stw r0, -0x8000(r3)
lbl_fn_80617030_00000DA0:
    lwz r3, __GXData
    li r0, 0x0
    sth r0, 0x2(r3)
    blr
}

asm void fn_80617130(void)
{
    nofralloc
    cmpwi r5, 0xff
    bne lbl_fn_80617130_00000DBC
    li r5, 0x0
lbl_fn_80617130_00000DBC:
    cmpwi r4, 0xff
    bne lbl_fn_80617130_00000DC8
    li r4, 0x0
lbl_fn_80617130_00000DC8:
    cmpwi r3, 0x0
    beq lbl_fn_80617130_00000DEC
    cmpwi r3, 0x1
    beq lbl_fn_80617130_00000E04
    cmpwi r3, 0x2
    beq lbl_fn_80617130_00000E1C
    cmpwi r3, 0x3
    beq lbl_fn_80617130_00000E34
    b lbl_fn_80617130_00000E48
lbl_fn_80617130_00000DEC:
    lwz r3, __GXData
    lwz r0, 0x170(r3)
    rlwimi r0, r5, 0, 29, 31
    rlwimi r0, r4, 3, 26, 28
    stw r0, 0x170(r3)
    b lbl_fn_80617130_00000E48
lbl_fn_80617130_00000E04:
    lwz r3, __GXData
    lwz r0, 0x170(r3)
    rlwimi r0, r5, 6, 23, 25
    rlwimi r0, r4, 9, 20, 22
    stw r0, 0x170(r3)
    b lbl_fn_80617130_00000E48
lbl_fn_80617130_00000E1C:
    lwz r3, __GXData
    lwz r0, 0x170(r3)
    rlwimi r0, r5, 12, 17, 19
    rlwimi r0, r4, 15, 14, 16
    stw r0, 0x170(r3)
    b lbl_fn_80617130_00000E48
lbl_fn_80617130_00000E34:
    lwz r3, __GXData
    lwz r0, 0x170(r3)
    rlwimi r0, r5, 18, 11, 13
    rlwimi r0, r4, 21, 8, 10
    stw r0, 0x170(r3)
lbl_fn_80617130_00000E48:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x170(r5)
    stw r3, -0x8000(r4)
    lwz r3, 0x5fc(r5)
    ori r3, r3, 0x3
    stw r3, 0x5fc(r5)
    sth r0, 0x2(r5)
    blr
}

asm void fn_80617200(void)
{
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x254(r4)
    rlwimi r0, r3, 16, 13, 15
    stw r0, 0x254(r4)
    lwz r0, 0x5fc(r4)
    ori r0, r0, 0x6
    stw r0, 0x5fc(r4)
    blr
}

asm void fn_80617220(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x8(r1)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    stw r0, 0xc(r1)
    bl fn_80616E80
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80617270(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r6, 0x0
    li r8, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_80617270_00000F0C
    li r8, 0x6
lbl_fn_80617270_00000F0C:
    li r6, 0x0
    stw r6, 0x8(r1)
    cmpwi r5, 0x0
    li r5, 0x0
    stw r6, 0xc(r1)
    beq lbl_fn_80617270_00000F28
    li r6, 0x7
lbl_fn_80617270_00000F28:
    mr r9, r8
    li r10, 0x0
    bl fn_80616E80
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806172D0(void)
{
    nofralloc
    blr
}

asm void __GXSetIndirectMask(void)
{
    nofralloc
    lwz r7, __GXData
    lis r4, 0xcc01
    li r5, 0x61
    li r0, 0x0
    lwz r6, 0x174(r7)
    rlwimi r6, r3, 0, 24, 31
    stw r6, 0x174(r7)
    stb r5, -0x8000(r4)
    lwz r3, 0x174(r7)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r7)
    blr
}

asm void __GXFlushTextureState(void)
{
    nofralloc
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x174(r5)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}
