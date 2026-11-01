#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800584B4(void);
extern void fn_80059240(void);
extern void gimmick_updateAll(void);
extern void fn_8006F17C(void);
extern void fn_80072914(void);
extern void gx_beginQuadBatch(void);
extern void gx_applyRenderState(void);
extern void fn_800763FC(void);
extern void gx_setRenderStateParam(void);
extern void fn_80076BE4(void);
extern void GXSetVtxDesc(void);
extern void __GXInitVtxDesc(void);
extern void GXSetVtxAttrFmt(void);
extern void __GXSetVtxDesc(void);
extern void GXClearVtxDesc(void);
extern void GXBegin(void);
extern void fn_80615B60(void);
extern void fn_80615C40(void);
extern void GXInitLightDistAttn(void);
extern void GXInitLightSpot(void);
extern void GXInitTexObjDefault(void);
extern void GXSetTevDirect(void);
extern void GXSetTevColorIn(void);
extern void GXSetTevColorOp(void);
extern void GXSetTevIndirect(void);
extern void fn_806174C0(void);
extern void fn_806175F0(void);
extern void GXSetTevKColorSel(void);
extern void GXSetTevSwapMode(void);
extern void GXSetTevSwapModeTable(void);
extern void fn_806177B0(void);
extern void GXSetTevOrder(void);
extern void GXSetNumTevStages(void);
extern void GXSetTevAlphaIn(void);
extern void GXLoadPosMtxImm(void);
extern void GXSetCurrentMtx(void);
extern void wcslen(void);
extern void runtime_clampDouble(void);

/* External data declarations */
extern u8 lbl_80731140[];
extern u8 lbl_80731158[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_808809A0;
extern u32 lbl_808809A4;
extern u32 lbl_808809E0;

/* Function declarations */
void atn_ComDrawLine_execute(void);
void atn_ComDrawTexture_execute(void);
void atn_ComDrawTextureAdd_execute(void);
void atn_ComDrawTextureMask_execute(void);
void atn_ComDrawTextureMono_execute(void);
void atn_ComDrawTextureMaskMono_execute(void);
void atn_ComDrawFont_execute(void);
void atn_ComDrawFontSideFade_execute(void);
void atn_ComDrawColliObject_execute(void);
void atn_ComDrawColliTree_execute(void);
void atn_ComDrawD3TextureMask_execute(void);
void atn_ComDrawWindow_execute(void);
void atn_ComDrawLine_destructor(void);
void atn_ComDrawTextureAdd_destructor(void);
void atn_ComDrawTextureMono_destructor(void);
void atn_ComDrawTextureMaskMono_destructor(void);
void atn_ComDrawFontSideFade_destructor(void);
void atn_ComDrawColliObject_destructor(void);
void atn_ComDrawColliTree_destructor(void);
void atn_ComDrawD3TextureMask_destructor(void);
void atn_ComDrawWindow_destructor(void);

asm void atn_ComDrawLine_execute(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    li r3, 0x1
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    mr r28, r4
    bl GXInitLightDistAttn
    li r3, 0x0
    bl GXClearVtxDesc
    li r3, 0x1
    bl GXSetNumTevStages
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0x4
    bl GXSetTevDirect
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawLine_execute_000001A4
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0xc(r31)
    clrlwi r5, r0, 16
    bl GXBegin
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    b lbl_atn_ComDrawLine_execute_00000194
lbl_atn_ComDrawLine_execute_00000160:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x10
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
lbl_atn_ComDrawLine_execute_00000194:
    lwz r0, 0x14(r31)
    cmpw r6, r0
    blt lbl_atn_ComDrawLine_execute_00000160
    b lbl_atn_ComDrawLine_execute_000002BC
lbl_atn_ComDrawLine_execute_000001A4:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    lbz r30, 0x18(r31)
    li r5, 0x1
    mr r3, r29
    bl gx_setRenderStateParam
    mr r3, r29
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r29
    mr r5, r30
    li r4, 0xa
    bl gx_setRenderStateParam
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_806177B0
    addi r3, r28, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0xc(r31)
    clrlwi r5, r0, 16
    bl GXBegin
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    b lbl_atn_ComDrawLine_execute_000002B0
lbl_atn_ComDrawLine_execute_00000274:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x10
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
lbl_atn_ComDrawLine_execute_000002B0:
    lwz r0, 0x14(r31)
    cmpw r6, r0
    blt lbl_atn_ComDrawLine_execute_00000274
lbl_atn_ComDrawLine_execute_000002BC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void atn_ComDrawTexture_execute(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    li r3, 0x1
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    mr r28, r4
    bl GXInitLightDistAttn
    li r3, 0x1
    bl GXClearVtxDesc
    li r3, 0x1
    bl GXSetNumTevStages
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0x0
    bl GXSetTevDirect
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTexture_execute_000003D0
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    b lbl_atn_ComDrawTexture_execute_0000042C
lbl_atn_ComDrawTexture_execute_000003D0:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    lbz r30, 0x11(r31)
    li r5, 0x1
    mr r3, r29
    bl gx_setRenderStateParam
    mr r3, r29
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r29
    mr r5, r30
    li r4, 0xa
    bl gx_setRenderStateParam
    addi r3, r28, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
lbl_atn_ComDrawTexture_execute_0000042C:
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0xc(r31)
    bl fn_800763FC
    lbz r3, 0x10(r31)
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl GXSetTevAlphaIn
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTexture_execute_000004DC
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    b lbl_atn_ComDrawTexture_execute_00000524
lbl_atn_ComDrawTexture_execute_000004DC:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
lbl_atn_ComDrawTexture_execute_00000524:
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    li r0, 0x2
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_atn_ComDrawTexture_execute_00000550:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTexture_execute_00000578
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_atn_ComDrawTexture_execute_00000598
lbl_atn_ComDrawTexture_execute_00000578:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_atn_ComDrawTexture_execute_00000598:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTexture_execute_000005F0
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_atn_ComDrawTexture_execute_00000610
lbl_atn_ComDrawTexture_execute_000005F0:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_atn_ComDrawTexture_execute_00000610:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_atn_ComDrawTexture_execute_00000550
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void atn_ComDrawTextureAdd_execute(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    mr r28, r4
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x1
    bl GXClearVtxDesc
    li r3, 0x1
    bl GXSetNumTevStages
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0x0
    bl GXSetTevDirect
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureAdd_execute_00000764
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    b lbl_atn_ComDrawTextureAdd_execute_000007C0
lbl_atn_ComDrawTextureAdd_execute_00000764:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    lbz r30, 0x11(r31)
    li r5, 0x1
    mr r3, r29
    bl gx_setRenderStateParam
    mr r3, r29
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r29
    mr r5, r30
    li r4, 0xa
    bl gx_setRenderStateParam
    addi r3, r28, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
lbl_atn_ComDrawTextureAdd_execute_000007C0:
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0xc(r31)
    bl fn_800763FC
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_atn_ComDrawTextureAdd_execute_00000800
    cmpwi r0, 0x1
    beq lbl_atn_ComDrawTextureAdd_execute_00000824
    cmpwi r0, 0x2
    beq lbl_atn_ComDrawTextureAdd_execute_00000848
    cmpwi r0, 0x3
    beq lbl_atn_ComDrawTextureAdd_execute_0000086C
    cmpwi r0, 0x4
    beq lbl_atn_ComDrawTextureAdd_execute_00000890
    b lbl_atn_ComDrawTextureAdd_execute_000008B0
lbl_atn_ComDrawTextureAdd_execute_00000800:
    lbz r3, 0x10(r31)
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawTextureAdd_execute_000008B0
lbl_atn_ComDrawTextureAdd_execute_00000824:
    lbz r3, 0x10(r31)
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawTextureAdd_execute_000008B0
lbl_atn_ComDrawTextureAdd_execute_00000848:
    lbz r3, 0x10(r31)
    li r4, 0x3
    li r5, 0x1
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawTextureAdd_execute_000008B0
lbl_atn_ComDrawTextureAdd_execute_0000086C:
    lbz r3, 0x10(r31)
    li r4, 0x0
    li r5, 0x5
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawTextureAdd_execute_000008B0
lbl_atn_ComDrawTextureAdd_execute_00000890:
    lbz r3, 0x10(r31)
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl GXSetTevAlphaIn
lbl_atn_ComDrawTextureAdd_execute_000008B0:
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureAdd_execute_00000930
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    b lbl_atn_ComDrawTextureAdd_execute_00000978
lbl_atn_ComDrawTextureAdd_execute_00000930:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
lbl_atn_ComDrawTextureAdd_execute_00000978:
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    li r0, 0x2
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_atn_ComDrawTextureAdd_execute_0000099C:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureAdd_execute_000009C4
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_atn_ComDrawTextureAdd_execute_000009E4
lbl_atn_ComDrawTextureAdd_execute_000009C4:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_atn_ComDrawTextureAdd_execute_000009E4:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureAdd_execute_00000A3C
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_atn_ComDrawTextureAdd_execute_00000A5C
lbl_atn_ComDrawTextureAdd_execute_00000A3C:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_atn_ComDrawTextureAdd_execute_00000A5C:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_atn_ComDrawTextureAdd_execute_0000099C
    lbz r3, 0x10(r31)
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl GXSetTevAlphaIn
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void atn_ComDrawTextureMask_execute(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    mr r28, r4
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x2
    bl GXClearVtxDesc
    li r3, 0x2
    bl GXSetNumTevStages
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl GXSetTevSwapModeTable
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    bl GXSetTevSwapMode
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xc
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x4
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMask_execute_00000CEC
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    b lbl_atn_ComDrawTextureMask_execute_00000D48
lbl_atn_ComDrawTextureMask_execute_00000CEC:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    lbz r30, 0x14(r31)
    li r5, 0x1
    mr r3, r29
    bl gx_setRenderStateParam
    mr r3, r29
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r29
    mr r5, r30
    li r4, 0xa
    bl gx_setRenderStateParam
    addi r3, r28, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
lbl_atn_ComDrawTextureMask_execute_00000D48:
    lwz r4, 0xc(r31)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_atn_ComDrawTextureMask_execute_00000D5C
    b lbl_atn_ComDrawTextureMask_execute_00000D64
lbl_atn_ComDrawTextureMask_execute_00000D5C:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_atn_ComDrawTextureMask_execute_00000D64:
    li r5, 0x0
    bl fn_800763FC
    lwz r4, 0x10(r31)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_atn_ComDrawTextureMask_execute_00000D80
    b lbl_atn_ComDrawTextureMask_execute_00000D88
lbl_atn_ComDrawTextureMask_execute_00000D80:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_atn_ComDrawTextureMask_execute_00000D88:
    li r5, 0x1
    bl fn_800763FC
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_atn_ComDrawTextureMask_execute_00000DC0
    cmpwi r0, 0x1
    beq lbl_atn_ComDrawTextureMask_execute_00000DD8
    cmpwi r0, 0x2
    beq lbl_atn_ComDrawTextureMask_execute_00000DF0
    cmpwi r0, 0x3
    beq lbl_atn_ComDrawTextureMask_execute_00000E08
    cmpwi r0, 0x4
    beq lbl_atn_ComDrawTextureMask_execute_00000E20
    b lbl_atn_ComDrawTextureMask_execute_00000E34
lbl_atn_ComDrawTextureMask_execute_00000DC0:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawTextureMask_execute_00000E34
lbl_atn_ComDrawTextureMask_execute_00000DD8:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawTextureMask_execute_00000E34
lbl_atn_ComDrawTextureMask_execute_00000DF0:
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawTextureMask_execute_00000E34
lbl_atn_ComDrawTextureMask_execute_00000E08:
    li r3, 0x1
    li r4, 0x0
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawTextureMask_execute_00000E34
lbl_atn_ComDrawTextureMask_execute_00000E20:
    li r3, 0x1
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    bl GXSetTevAlphaIn
lbl_atn_ComDrawTextureMask_execute_00000E34:
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xe
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMask_execute_00000ED8
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    b lbl_atn_ComDrawTextureMask_execute_00000F38
lbl_atn_ComDrawTextureMask_execute_00000ED8:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
lbl_atn_ComDrawTextureMask_execute_00000F38:
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    li r0, 0x4
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_atn_ComDrawTextureMask_execute_00000F60:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMask_execute_00000F88
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_atn_ComDrawTextureMask_execute_00000FA8
lbl_atn_ComDrawTextureMask_execute_00000F88:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_atn_ComDrawTextureMask_execute_00000FA8:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x20
    lfs f1, 0x1c(r3)
    lfs f0, 0x18(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_atn_ComDrawTextureMask_execute_00000F60
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void atn_ComDrawTextureMono_execute(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    lis r9, lbl_80731140@ha
    lwzu r8, lbl_80731140@l(r9)
    stw r0, 0x194(r1)
    lis r10, 0x4330
    lwz r7, 0x4(r9)
    lis r5, lbl_80731158@ha
    stw r8, 0x28(r1)
    li r0, 0x3
    lwz r6, 0x8(r9)
    addi r8, r1, 0xc8
    stw r31, 0x18c(r1)
    mr r31, r4
    lfs f3, lbl_808809A4
    stw r7, 0x2c(r1)
    addi r7, r1, 0x88
    lfs f6, lbl_808809A0
    stw r30, 0x188(r1)
    mr r30, r3
    lfs f0, 0x28(r1)
    lfs f1, 0x2c(r1)
    fmuls f2, f0, f3
    stw r6, 0x30(r1)
    fmuls f1, f1, f3
    lwz r3, 0xc(r9)
    lfs f0, 0x30(r1)
    stw r29, 0x184(r1)
    fmuls f0, f0, f3
    lfs f5, lbl_808809E0
    stw r28, 0x180(r1)
    lfd f4, lbl_80731158@l(r5)
    stw r10, 0x108(r1)
    stw r10, 0x110(r1)
    stw r3, 0x34(r1)
    stfs f6, 0xf4(r1)
    stfs f6, 0xe4(r1)
    stfs f6, 0xd4(r1)
    stfs f3, 0x104(r1)
    stfs f2, 0xc8(r1)
    stfs f1, 0xd8(r1)
    stfs f0, 0xe8(r1)
    stfs f6, 0xf8(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xdc(r1)
    stfs f0, 0xec(r1)
    stfs f6, 0xfc(r1)
    stfs f2, 0xd0(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xf0(r1)
    stfs f6, 0x100(r1)
    mtctr r0
lbl_atn_ComDrawTextureMono_execute_00001108:
    lfs f8, 0xc(r8)
    lfs f7, 0x8(r8)
    lfs f6, 0x4(r8)
    fmuls f0, f5, f8
    lfs f3, 0x0(r8)
    fmuls f1, f5, f7
    fmuls f2, f5, f6
    stfs f3, 0x38(r1)
    fmuls f3, f5, f3
    fctiwz f1, f1
    stfs f6, 0x3c(r1)
    fctiwz f2, f2
    fctiwz f3, f3
    stfd f1, 0x128(r1)
    fctiwz f0, f0
    stfd f3, 0x118(r1)
    addi r8, r8, 0x10
    lwz r3, 0x12c(r1)
    stfd f2, 0x120(r1)
    lwz r5, 0x11c(r1)
    stfd f0, 0x130(r1)
    lwz r4, 0x124(r1)
    lwz r0, 0x134(r1)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r3, 0x16(r1)
    stb r0, 0x17(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x24(r1)
    lbz r0, 0x24(r1)
    stw r0, 0x10c(r1)
    lbz r0, 0x25(r1)
    stw r0, 0x114(r1)
    lfd f0, 0x108(r1)
    lbz r0, 0x26(r1)
    stw r0, 0x10c(r1)
    fsubs f0, f0, f4
    lfd f2, 0x110(r1)
    lbz r0, 0x27(r1)
    fdivs f3, f0, f5
    stw r0, 0x114(r1)
    lfd f1, 0x108(r1)
    lfd f0, 0x110(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    fsubs f2, f2, f4
    stfs f3, 0x0(r7)
    fsubs f1, f1, f4
    fsubs f0, f0, f4
    stfs f3, 0x48(r1)
    fdivs f2, f2, f5
    stfs f2, 0x4(r7)
    fdivs f1, f1, f5
    stfs f2, 0x4c(r1)
    stfs f1, 0x8(r7)
    fdivs f0, f0, f5
    stfs f1, 0x50(r1)
    stfs f0, 0xc(r7)
    addi r7, r7, 0x10
    stfs f0, 0x54(r1)
    bdnz lbl_atn_ComDrawTextureMono_execute_00001108
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x1
    bl GXClearVtxDesc
    li r3, 0x4
    bl GXSetNumTevStages
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0xc(r30)
    bl fn_800763FC
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
    lfs f4, lbl_808809E0
    addi r4, r1, 0x20
    lfs f0, 0x88(r1)
    li r3, 0x0
    lfs f2, 0x8c(r1)
    fmuls f3, f4, f0
    lfs f1, 0x90(r1)
    lfs f0, 0x94(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x130(r1)
    fctiwz f0, f0
    stfd f2, 0x128(r1)
    lwz r7, 0x134(r1)
    stfd f1, 0x120(r1)
    lwz r6, 0x12c(r1)
    stfd f0, 0x118(r1)
    lwz r5, 0x124(r1)
    lwz r0, 0x11c(r1)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stw r0, 0x20(r1)
    bl fn_806175F0
    lfs f4, lbl_808809E0
    addi r4, r1, 0x1c
    lfs f0, 0x98(r1)
    li r3, 0x1
    lfs f2, 0x9c(r1)
    fmuls f3, f4, f0
    lfs f1, 0xa0(r1)
    lfs f0, 0xa4(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x138(r1)
    fctiwz f0, f0
    stfd f2, 0x140(r1)
    lwz r7, 0x13c(r1)
    stfd f1, 0x148(r1)
    lwz r6, 0x144(r1)
    stfd f0, 0x150(r1)
    lwz r5, 0x14c(r1)
    lwz r0, 0x154(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x1c(r1)
    bl fn_806175F0
    lfs f4, lbl_808809E0
    addi r4, r1, 0x18
    lfs f0, 0xa8(r1)
    li r3, 0x2
    lfs f2, 0xac(r1)
    fmuls f3, f4, f0
    lfs f1, 0xb0(r1)
    lfs f0, 0xb4(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x158(r1)
    fctiwz f0, f0
    stfd f2, 0x160(r1)
    lwz r7, 0x15c(r1)
    stfd f1, 0x168(r1)
    lwz r6, 0x164(r1)
    stfd f0, 0x170(r1)
    lwz r5, 0x16c(r1)
    lwz r0, 0x174(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x18(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl GXSetTevSwapModeTable
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl GXSetTevSwapModeTable
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x2
    bl GXSetTevSwapModeTable
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x0
    li r4, 0xc
    bl GXSetTevKColorSel
    li r3, 0x0
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl GXSetTevOrder
    li r3, 0x0
    bl GXInitTexObjDefault
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    bl GXSetTevSwapMode
    li r3, 0x1
    li r4, 0xd
    bl GXSetTevKColorSel
    li r3, 0x1
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl GXSetTevColorIn
    li r3, 0x1
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl GXSetTevOrder
    li r3, 0x1
    bl GXInitTexObjDefault
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    bl GXSetTevSwapMode
    li r3, 0x2
    li r4, 0xe
    bl GXSetTevKColorSel
    li r3, 0x2
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl GXSetTevColorIn
    li r3, 0x2
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl GXSetTevOrder
    li r3, 0x2
    bl GXInitTexObjDefault
    li r3, 0x3
    li r4, 0x3
    li r5, 0x3
    bl GXSetTevSwapMode
    li r3, 0x3
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x3
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x3
    bl GXInitTexObjDefault
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMono_execute_0000170C
    lfs f1, lbl_808809A0
    addi r3, r1, 0x58
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x84(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x5c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x58(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    b lbl_atn_ComDrawTextureMono_execute_00001768
lbl_atn_ComDrawTextureMono_execute_0000170C:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r28, lbl_8087EEE0
    li r4, 0x8
    lbz r29, 0x11(r30)
    li r5, 0x1
    mr r3, r28
    bl gx_setRenderStateParam
    mr r3, r28
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r28
    mr r5, r29
    li r4, 0xa
    bl gx_setRenderStateParam
    addi r3, r31, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
lbl_atn_ComDrawTextureMono_execute_00001768:
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMono_execute_000017E8
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    b lbl_atn_ComDrawTextureMono_execute_00001830
lbl_atn_ComDrawTextureMono_execute_000017E8:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
lbl_atn_ComDrawTextureMono_execute_00001830:
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    li r0, 0x2
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_atn_ComDrawTextureMono_execute_0000185C:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMono_execute_00001884
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_atn_ComDrawTextureMono_execute_000018A4
lbl_atn_ComDrawTextureMono_execute_00001884:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_atn_ComDrawTextureMono_execute_000018A4:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r30)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMono_execute_000018FC
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_atn_ComDrawTextureMono_execute_0000191C
lbl_atn_ComDrawTextureMono_execute_000018FC:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_atn_ComDrawTextureMono_execute_0000191C:
    lwz r0, 0x8(r30)
    addi r6, r6, 0x1
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r30)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_atn_ComDrawTextureMono_execute_0000185C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x2
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    lwz r0, 0x194(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r29, 0x184(r1)
    lwz r28, 0x180(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void atn_ComDrawTextureMaskMono_execute(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    lis r0, 0x4330
    stw r31, 0x18c(r1)
    mr r31, r4
    stw r30, 0x188(r1)
    mr r30, r3
    stw r29, 0x184(r1)
    stw r28, 0x180(r1)
    stw r0, 0x108(r1)
    lwz r3, lbl_8087EEE0
    stw r0, 0x110(r1)
    bl gx_applyRenderState
    lis r7, lbl_80731140@ha
    lwzu r4, lbl_80731140@l(r7)
    stw r4, 0x28(r1)
    lis r3, lbl_80731158@ha
    lwz r6, 0x4(r7)
    li r0, 0x3
    lwz r5, 0x8(r7)
    addi r8, r1, 0xc8
    lfs f3, lbl_808809A4
    addi r9, r1, 0x88
    stw r6, 0x2c(r1)
    lfs f0, 0x28(r1)
    lfs f1, 0x2c(r1)
    lfs f6, lbl_808809A0
    fmuls f2, f0, f3
    fmuls f1, f1, f3
    stw r5, 0x30(r1)
    lwz r4, 0xc(r7)
    lfs f0, 0x30(r1)
    stw r4, 0x34(r1)
    fmuls f0, f0, f3
    lfs f5, lbl_808809E0
    stfs f6, 0xf4(r1)
    lfd f4, lbl_80731158@l(r3)
    stfs f6, 0xe4(r1)
    stfs f6, 0xd4(r1)
    stfs f3, 0x104(r1)
    stfs f2, 0xc8(r1)
    stfs f1, 0xd8(r1)
    stfs f0, 0xe8(r1)
    stfs f6, 0xf8(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xdc(r1)
    stfs f0, 0xec(r1)
    stfs f6, 0xfc(r1)
    stfs f2, 0xd0(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xf0(r1)
    stfs f6, 0x100(r1)
    mtctr r0
lbl_atn_ComDrawTextureMaskMono_execute_00001AEC:
    lfs f8, 0xc(r8)
    lfs f7, 0x8(r8)
    lfs f6, 0x4(r8)
    fmuls f0, f5, f8
    lfs f3, 0x0(r8)
    fmuls f1, f5, f7
    fmuls f2, f5, f6
    stfs f3, 0x38(r1)
    fmuls f3, f5, f3
    fctiwz f1, f1
    stfs f6, 0x3c(r1)
    fctiwz f2, f2
    fctiwz f3, f3
    stfd f1, 0x128(r1)
    fctiwz f0, f0
    stfd f3, 0x118(r1)
    addi r8, r8, 0x10
    lwz r3, 0x12c(r1)
    stfd f2, 0x120(r1)
    lwz r5, 0x11c(r1)
    stfd f0, 0x130(r1)
    lwz r4, 0x124(r1)
    lwz r0, 0x134(r1)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r3, 0x16(r1)
    stb r0, 0x17(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x24(r1)
    lbz r0, 0x24(r1)
    stw r0, 0x10c(r1)
    lbz r0, 0x25(r1)
    stw r0, 0x114(r1)
    lfd f0, 0x108(r1)
    lbz r0, 0x26(r1)
    stw r0, 0x10c(r1)
    fsubs f0, f0, f4
    lfd f2, 0x110(r1)
    lbz r0, 0x27(r1)
    fdivs f3, f0, f5
    stw r0, 0x114(r1)
    lfd f1, 0x108(r1)
    lfd f0, 0x110(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    fsubs f2, f2, f4
    stfs f3, 0x0(r9)
    fsubs f1, f1, f4
    fsubs f0, f0, f4
    stfs f3, 0x48(r1)
    fdivs f2, f2, f5
    stfs f2, 0x4(r9)
    fdivs f1, f1, f5
    stfs f2, 0x4c(r1)
    stfs f1, 0x8(r9)
    fdivs f0, f0, f5
    stfs f1, 0x50(r1)
    stfs f0, 0xc(r9)
    addi r9, r9, 0x10
    stfs f0, 0x54(r1)
    bdnz lbl_atn_ComDrawTextureMaskMono_execute_00001AEC
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x2
    bl GXClearVtxDesc
    li r3, 0x4
    bl GXSetNumTevStages
    lfs f4, lbl_808809E0
    addi r4, r1, 0x20
    lfs f0, 0x88(r1)
    li r3, 0x0
    lfs f2, 0x8c(r1)
    fmuls f3, f4, f0
    lfs f1, 0x90(r1)
    lfs f0, 0x94(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x130(r1)
    fctiwz f0, f0
    stfd f2, 0x128(r1)
    lwz r7, 0x134(r1)
    stfd f1, 0x120(r1)
    lwz r6, 0x12c(r1)
    stfd f0, 0x118(r1)
    lwz r5, 0x124(r1)
    lwz r0, 0x11c(r1)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stw r0, 0x20(r1)
    bl fn_806175F0
    lfs f4, lbl_808809E0
    addi r4, r1, 0x1c
    lfs f0, 0x98(r1)
    li r3, 0x1
    lfs f2, 0x9c(r1)
    fmuls f3, f4, f0
    lfs f1, 0xa0(r1)
    lfs f0, 0xa4(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x138(r1)
    fctiwz f0, f0
    stfd f2, 0x140(r1)
    lwz r7, 0x13c(r1)
    stfd f1, 0x148(r1)
    lwz r6, 0x144(r1)
    stfd f0, 0x150(r1)
    lwz r5, 0x14c(r1)
    lwz r0, 0x154(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x1c(r1)
    bl fn_806175F0
    lfs f4, lbl_808809E0
    addi r4, r1, 0x18
    lfs f0, 0xa8(r1)
    li r3, 0x2
    lfs f2, 0xac(r1)
    fmuls f3, f4, f0
    lfs f1, 0xb0(r1)
    lfs f0, 0xb4(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x158(r1)
    fctiwz f0, f0
    stfd f2, 0x160(r1)
    lwz r7, 0x15c(r1)
    stfd f1, 0x168(r1)
    lwz r6, 0x164(r1)
    stfd f0, 0x170(r1)
    lwz r5, 0x16c(r1)
    lwz r0, 0x174(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x18(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl GXSetTevSwapModeTable
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl GXSetTevSwapModeTable
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x2
    bl GXSetTevSwapModeTable
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x0
    li r4, 0xc
    bl GXSetTevKColorSel
    li r3, 0x0
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x1
    bl GXSetTevColorOp
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl GXSetTevOrder
    li r3, 0x0
    bl GXInitTexObjDefault
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    bl GXSetTevSwapMode
    li r3, 0x1
    li r4, 0xd
    bl GXSetTevKColorSel
    li r3, 0x1
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl GXSetTevColorIn
    li r3, 0x1
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x1
    bl GXSetTevColorOp
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl GXSetTevOrder
    li r3, 0x1
    bl GXInitTexObjDefault
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    bl GXSetTevSwapMode
    li r3, 0x2
    li r4, 0xe
    bl GXSetTevKColorSel
    li r3, 0x2
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl GXSetTevColorIn
    li r3, 0x2
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x1
    bl GXSetTevColorOp
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl GXSetTevOrder
    li r3, 0x2
    bl GXInitTexObjDefault
    li r3, 0x3
    li r4, 0x3
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x3
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x3
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x3
    li r4, 0x1
    li r5, 0x1
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x3
    bl GXInitTexObjDefault
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMaskMono_execute_000020E8
    lfs f1, lbl_808809A0
    addi r3, r1, 0x58
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x84(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x5c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x58(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    b lbl_atn_ComDrawTextureMaskMono_execute_00002144
lbl_atn_ComDrawTextureMaskMono_execute_000020E8:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r28, lbl_8087EEE0
    li r4, 0x8
    lbz r29, 0x14(r30)
    li r5, 0x1
    mr r3, r28
    bl gx_setRenderStateParam
    mr r3, r28
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r28
    mr r5, r29
    li r4, 0xa
    bl gx_setRenderStateParam
    addi r3, r31, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
lbl_atn_ComDrawTextureMaskMono_execute_00002144:
    lwz r4, 0xc(r30)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_atn_ComDrawTextureMaskMono_execute_00002158
    b lbl_atn_ComDrawTextureMaskMono_execute_00002160
lbl_atn_ComDrawTextureMaskMono_execute_00002158:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_atn_ComDrawTextureMaskMono_execute_00002160:
    li r5, 0x0
    bl fn_800763FC
    lwz r4, 0x10(r30)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_atn_ComDrawTextureMaskMono_execute_0000217C
    b lbl_atn_ComDrawTextureMaskMono_execute_00002184
lbl_atn_ComDrawTextureMaskMono_execute_0000217C:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_atn_ComDrawTextureMaskMono_execute_00002184:
    li r5, 0x1
    bl fn_800763FC
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xe
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMaskMono_execute_00002244
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    b lbl_atn_ComDrawTextureMaskMono_execute_000022A4
lbl_atn_ComDrawTextureMaskMono_execute_00002244:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
lbl_atn_ComDrawTextureMaskMono_execute_000022A4:
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    li r0, 0x4
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_atn_ComDrawTextureMaskMono_execute_000022CC:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawTextureMaskMono_execute_000022F4
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_atn_ComDrawTextureMaskMono_execute_00002314
lbl_atn_ComDrawTextureMaskMono_execute_000022F4:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_atn_ComDrawTextureMaskMono_execute_00002314:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x8(r30)
    add r3, r0, r5
    addi r5, r5, 0x20
    lfs f1, 0x1c(r3)
    lfs f0, 0x18(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_atn_ComDrawTextureMaskMono_execute_000022CC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x2
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTevSwapModeTable
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    lwz r0, 0x194(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r29, 0x184(r1)
    lwz r28, 0x180(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void atn_ComDrawFont_execute(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r31, lbl_8087EEE0
    mr r30, r3
    mr r27, r4
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x1
    bl GXClearVtxDesc
    li r3, 0x1
    bl GXSetNumTevStages
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl GXSetTevSwapModeTable
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl GXSetTevSwapMode
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0xf
    li r5, 0xc
    li r6, 0xa
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawFont_execute_00002594
    lfs f7, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f7, 0x34(r1)
    stfs f7, 0x2c(r1)
    stfs f7, 0x28(r1)
    stfs f7, 0x24(r1)
    stfs f7, 0x20(r1)
    stfs f7, 0x18(r1)
    stfs f7, 0x14(r1)
    stfs f7, 0x10(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    b lbl_atn_ComDrawFont_execute_000025F0
lbl_atn_ComDrawFont_execute_00002594:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r28, lbl_8087EEE0
    li r4, 0x8
    lbz r29, 0x2c(r30)
    li r5, 0x1
    mr r3, r28
    bl gx_setRenderStateParam
    mr r3, r28
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r28
    mr r5, r29
    li r4, 0xa
    bl gx_setRenderStateParam
    addi r3, r27, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
lbl_atn_ComDrawFont_execute_000025F0:
    lbz r0, 0x2d(r30)
    cmpwi r0, 0x0
    beq lbl_atn_ComDrawFont_execute_00002620
    mr r3, r31
    li r4, 0x1
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawFont_execute_00002640
lbl_atn_ComDrawFont_execute_00002620:
    mr r3, r31
    li r4, 0x0
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
lbl_atn_ComDrawFont_execute_00002640:
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawFont_execute_000026C0
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    b lbl_atn_ComDrawFont_execute_00002744
lbl_atn_ComDrawFont_execute_000026C0:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r3, lbl_8087EEC8
    psq_l f2, 0x38(r30), 0, 0
    addis r3, r3, 0x3
    psq_l f3, 0x40(r30), 0, 0
    psq_l f4, 0x48(r30), 0, 0
    addi r3, r3, 0x3268
    psq_l f5, 0x50(r30), 0, 0
    psq_l f6, 0x58(r30), 0, 0
    psq_l f1, 0x30(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_atn_ComDrawFont_execute_00002744:
    lwz r0, 0x60(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawFont_execute_00002760
    lwz r0, 0xc(r30)
    ori r0, r0, 0x2
    stw r0, 0xc(r30)
    b lbl_atn_ComDrawFont_execute_0000278C
lbl_atn_ComDrawFont_execute_00002760:
    cmpwi r0, 0x2
    bne lbl_atn_ComDrawFont_execute_00002778
    lwz r0, 0xc(r30)
    ori r0, r0, 0x8
    stw r0, 0xc(r30)
    b lbl_atn_ComDrawFont_execute_0000278C
lbl_atn_ComDrawFont_execute_00002778:
    cmpwi r0, 0x3
    bne lbl_atn_ComDrawFont_execute_0000278C
    lwz r0, 0xc(r30)
    ori r0, r0, 0x10
    stw r0, 0xc(r30)
lbl_atn_ComDrawFont_execute_0000278C:
    lwz r3, lbl_8087EEC8
    mr r4, r27
    lfs f1, 0x14(r30)
    lfs f2, 0x18(r30)
    lfs f3, 0x1c(r30)
    lfs f4, 0x20(r30)
    lwz r5, 0x10(r30)
    lwz r6, 0x24(r30)
    lwz r7, 0xc(r30)
    lwz r8, 0x8(r30)
    lfs f5, 0x28(r30)
    lwz r9, 0x6c(r30)
    lfs f6, 0x64(r30)
    lfs f7, 0x68(r30)
    bl gimmick_updateAll
    lwz r5, lbl_8087EEC8
    li r3, 0x0
    lfs f7, lbl_808809A0
    li r4, 0x0
    addis r6, r5, 0x3
    lfs f0, lbl_808809A4
    stfs f7, 0x3294(r6)
    li r5, 0x0
    stfs f7, 0x328c(r6)
    stfs f7, 0x3288(r6)
    stfs f7, 0x3284(r6)
    stfs f7, 0x3280(r6)
    stfs f7, 0x3278(r6)
    stfs f7, 0x3274(r6)
    stfs f7, 0x3270(r6)
    stfs f7, 0x326c(r6)
    stfs f0, 0x3290(r6)
    stfs f0, 0x327c(r6)
    stfs f0, 0x3268(r6)
    bl GXSetTevSwapMode
    lbz r0, 0x2d(r30)
    cmpwi r0, 0x0
    beq lbl_atn_ComDrawFont_execute_00002844
    mr r3, r31
    li r4, 0x0
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
lbl_atn_ComDrawFont_execute_00002844:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void atn_ComDrawFontSideFade_execute(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    bl _savegpr_20
    mr r27, r3
    lwz r3, 0x10(r3)
    mr r28, r4
    bl wcslen
    lfs f7, 0x74(r27)
    li r30, 0x0
    lfs f0, 0x78(r27)
    mr r23, r3
    lwz r4, lbl_8087EEC8
    mr r29, r30
    fmuls f29, f7, f0
    lfs f9, 0x14(r27)
    lfs f8, 0x70(r27)
    addis r31, r4, 0x3
    lfs f0, 0x1c(r27)
    li r26, 0x0
    fsubs f7, f7, f29
    stwu r3, 0x32a0(r31)
    fsubs f30, f9, f8
    lfs f26, lbl_808809E0
    lfs f27, lbl_808809A4
    li r21, 0x0
    fsubs f28, f7, f0
    lfs f31, lbl_808809A0
    li r22, 0x0
    lis r25, 0xff00
    b lbl_atn_ComDrawFontSideFade_execute_000029CC
lbl_atn_ComDrawFontSideFade_execute_0000290C:
    lwz r3, 0x10(r27)
    fcmpo cr0, f31, f30
    lhzx r20, r3, r22
    cror eq, lt, eq
    bne lbl_atn_ComDrawFontSideFade_execute_000029A4
    lfs f7, 0x74(r27)
    lfs f0, 0x1c(r27)
    fsubs f0, f7, f0
    fcmpo cr0, f30, f0
    cror eq, lt, eq
    bne lbl_atn_ComDrawFontSideFade_execute_000029A4
    fcmpo cr0, f30, f29
    add r24, r31, r26
    bge lbl_atn_ComDrawFontSideFade_execute_0000295C
    fdivs f0, f30, f29
    fmuls f1, f26, f0
    bl runtime_clampDouble
    slwi r0, r3, 24
    stw r0, 0xc(r24)
    b lbl_atn_ComDrawFontSideFade_execute_00002988
lbl_atn_ComDrawFontSideFade_execute_0000295C:
    fcmpo cr0, f28, f30
    bge lbl_atn_ComDrawFontSideFade_execute_00002984
    fsubs f0, f30, f28
    fdivs f0, f0, f29
    fsubs f0, f27, f0
    fmuls f1, f26, f0
    bl runtime_clampDouble
    slwi r0, r3, 24
    stw r0, 0xc(r24)
    b lbl_atn_ComDrawFontSideFade_execute_00002988
lbl_atn_ComDrawFontSideFade_execute_00002984:
    stw r25, 0xc(r24)
lbl_atn_ComDrawFontSideFade_execute_00002988:
    lfs f0, 0x70(r27)
    addi r30, r30, 0x1
    addi r26, r26, 0xc
    fadds f0, f30, f0
    stfs f0, 0x8(r24)
    sth r20, 0x4(r24)
    sth r29, 0x6(r24)
lbl_atn_ComDrawFontSideFade_execute_000029A4:
    lwz r0, 0xc(r27)
    mr r4, r20
    lwz r3, lbl_8087EEC8
    lfs f1, 0x1c(r27)
    clrlwi r5, r0, 31
    lwz r6, 0x8(r27)
    bl fn_8006F17C
    fadds f30, f30, f1
    addi r22, r22, 0x2
    addi r21, r21, 0x1
lbl_atn_ComDrawFontSideFade_execute_000029CC:
    cmpw r21, r23
    blt lbl_atn_ComDrawFontSideFade_execute_0000290C
    lwz r29, lbl_8087EEE0
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x1
    bl GXClearVtxDesc
    li r3, 0x1
    bl GXSetNumTevStages
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl GXSetTevSwapModeTable
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl GXSetTevSwapMode
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0xf
    li r5, 0xc
    li r6, 0xa
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r0, 0x4(r27)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawFontSideFade_execute_00002B2C
    lfs f7, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f7, 0x34(r1)
    stfs f7, 0x2c(r1)
    stfs f7, 0x28(r1)
    stfs f7, 0x24(r1)
    stfs f7, 0x20(r1)
    stfs f7, 0x18(r1)
    stfs f7, 0x14(r1)
    stfs f7, 0x10(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    b lbl_atn_ComDrawFontSideFade_execute_00002B88
lbl_atn_ComDrawFontSideFade_execute_00002B2C:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r22, lbl_8087EEE0
    li r4, 0x8
    lbz r23, 0x2c(r27)
    li r5, 0x1
    mr r3, r22
    bl gx_setRenderStateParam
    mr r3, r22
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r22
    mr r5, r23
    li r4, 0xa
    bl gx_setRenderStateParam
    addi r3, r28, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
lbl_atn_ComDrawFontSideFade_execute_00002B88:
    lbz r0, 0x2d(r27)
    cmpwi r0, 0x0
    beq lbl_atn_ComDrawFontSideFade_execute_00002BB8
    mr r3, r29
    li r4, 0x1
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawFontSideFade_execute_00002BD8
lbl_atn_ComDrawFontSideFade_execute_00002BB8:
    mr r3, r29
    li r4, 0x0
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
lbl_atn_ComDrawFontSideFade_execute_00002BD8:
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x4(r27)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawFontSideFade_execute_00002C58
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    b lbl_atn_ComDrawFontSideFade_execute_00002CDC
lbl_atn_ComDrawFontSideFade_execute_00002C58:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r3, lbl_8087EEC8
    psq_l f2, 0x38(r27), 0, 0
    addis r3, r3, 0x3
    psq_l f3, 0x40(r27), 0, 0
    psq_l f4, 0x48(r27), 0, 0
    addi r3, r3, 0x3268
    psq_l f5, 0x50(r27), 0, 0
    psq_l f6, 0x58(r27), 0, 0
    psq_l f1, 0x30(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_atn_ComDrawFontSideFade_execute_00002CDC:
    lwz r0, 0x60(r27)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawFontSideFade_execute_00002CF8
    lwz r0, 0xc(r27)
    ori r0, r0, 0x2
    stw r0, 0xc(r27)
    b lbl_atn_ComDrawFontSideFade_execute_00002D24
lbl_atn_ComDrawFontSideFade_execute_00002CF8:
    cmpwi r0, 0x2
    bne lbl_atn_ComDrawFontSideFade_execute_00002D10
    lwz r0, 0xc(r27)
    ori r0, r0, 0x8
    stw r0, 0xc(r27)
    b lbl_atn_ComDrawFontSideFade_execute_00002D24
lbl_atn_ComDrawFontSideFade_execute_00002D10:
    cmpwi r0, 0x3
    bne lbl_atn_ComDrawFontSideFade_execute_00002D24
    lwz r0, 0xc(r27)
    ori r0, r0, 0x10
    stw r0, 0xc(r27)
lbl_atn_ComDrawFontSideFade_execute_00002D24:
    li r20, 0x0
    li r26, 0x0
    b lbl_atn_ComDrawFontSideFade_execute_00002D8C
lbl_atn_ComDrawFontSideFade_execute_00002D30:
    add r4, r31, r26
    lwz r3, 0x24(r27)
    lwz r0, 0x6c(r27)
    addi r5, r4, 0x4
    clrlwi r6, r3, 8
    lwz r7, 0xc(r4)
    clrlwi r0, r0, 8
    lfs f1, 0x8(r4)
    lwz r3, lbl_8087EEC8
    or r6, r6, r7
    or r9, r0, r7
    lfs f2, 0x18(r27)
    lfs f3, 0x1c(r27)
    mr r4, r28
    lfs f4, 0x20(r27)
    lwz r7, 0xc(r27)
    lwz r8, 0x8(r27)
    lfs f5, 0x28(r27)
    lfs f6, 0x64(r27)
    lfs f7, 0x68(r27)
    bl gimmick_updateAll
    addi r20, r20, 0x1
    addi r26, r26, 0xc
lbl_atn_ComDrawFontSideFade_execute_00002D8C:
    cmpw r20, r30
    blt lbl_atn_ComDrawFontSideFade_execute_00002D30
    lwz r5, lbl_8087EEC8
    li r3, 0x0
    lfs f7, lbl_808809A0
    li r4, 0x0
    addis r6, r5, 0x3
    lfs f0, lbl_808809A4
    stfs f7, 0x3294(r6)
    li r5, 0x0
    stfs f7, 0x328c(r6)
    stfs f7, 0x3288(r6)
    stfs f7, 0x3284(r6)
    stfs f7, 0x3280(r6)
    stfs f7, 0x3278(r6)
    stfs f7, 0x3274(r6)
    stfs f7, 0x3270(r6)
    stfs f7, 0x326c(r6)
    stfs f0, 0x3290(r6)
    stfs f0, 0x327c(r6)
    stfs f0, 0x3268(r6)
    bl GXSetTevSwapMode
    lbz r0, 0x2d(r27)
    cmpwi r0, 0x0
    beq lbl_atn_ComDrawFontSideFade_execute_00002E10
    mr r3, r29
    li r4, 0x0
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
lbl_atn_ComDrawFontSideFade_execute_00002E10:
    addi r11, r1, 0x70
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    bl _restgpr_20
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void atn_ComDrawColliObject_execute(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x2
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    li r4, 0x6
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r3, lbl_8087EEE0
    bl gx_setRenderStateParam
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x0
    bl GXClearVtxDesc
    li r3, 0x1
    bl GXSetNumTevStages
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0x4
    bl GXSetTevDirect
    li r31, 0x0
    stb r31, 0xc(r1)
    addi r4, r1, 0x14
    li r3, 0x0
    stb r31, 0xd(r1)
    stb r31, 0xe(r1)
    stb r31, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x14(r1)
    bl fn_80615B60
    li r0, 0xff
    stb r31, 0x8(r1)
    addi r4, r1, 0x10
    li r3, 0x0
    stb r0, 0x9(r1)
    stb r31, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80615C40
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    addi r3, r30, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r3, 0x14(r29)
    li r6, -0x1
    lwz r4, 0xc(r29)
    lwz r5, 0x10(r29)
    bl fn_800584B4
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void atn_ComDrawColliTree_execute(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x2
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    li r4, 0x6
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r3, lbl_8087EEE0
    bl gx_setRenderStateParam
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x0
    bl GXClearVtxDesc
    li r3, 0x1
    bl GXSetNumTevStages
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0x4
    bl GXSetTevDirect
    li r31, 0x0
    stb r31, 0xc(r1)
    addi r4, r1, 0x14
    li r3, 0x0
    stb r31, 0xd(r1)
    stb r31, 0xe(r1)
    stb r31, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x14(r1)
    bl fn_80615B60
    li r0, 0xff
    stb r31, 0x8(r1)
    addi r4, r1, 0x10
    li r3, 0x0
    stb r0, 0x9(r1)
    stb r31, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80615C40
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    addi r3, r30, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r3, 0x14(r29)
    li r6, -0x1
    lwz r4, 0xc(r29)
    lwz r5, 0x10(r29)
    bl fn_80059240
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void atn_ComDrawD3TextureMask_execute(void)
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
    li r4, 0x0
    lwz r30, lbl_8087EEE0
    mr r3, r30
    bl fn_80072914
    mr r3, r30
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r5, 0x20(r31)
    mr r3, r30
    li r4, 0x8
    bl gx_setRenderStateParam
    mr r3, r30
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r30
    li r4, 0xa
    li r5, 0x0
    bl gx_setRenderStateParam
    addi r3, r29, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x1
    bl GXClearVtxDesc
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl GXSetTevSwapModeTable
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    bne lbl_atn_ComDrawD3TextureMask_execute_000031C8
    lwz r3, lbl_8087EEB0
    addi r0, r3, 0x10
    stw r0, 0x1c(r31)
lbl_atn_ComDrawD3TextureMask_execute_000031C8:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_atn_ComDrawD3TextureMask_execute_00003344
    li r3, 0x2
    bl GXSetNumTevStages
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    bl GXSetTevSwapMode
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0xff
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xc
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x4
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0x18(r31)
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    li r5, 0x1
    lwz r4, 0x1c(r31)
    bl fn_800763FC
    b lbl_atn_ComDrawD3TextureMask_execute_00003424
lbl_atn_ComDrawD3TextureMask_execute_00003344:
    li r3, 0x1
    bl GXSetNumTevStages
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl GXSetTevSwapMode
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0xf
    li r5, 0xc
    li r6, 0xa
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0x1c(r31)
    bl fn_800763FC
lbl_atn_ComDrawD3TextureMask_execute_00003424:
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl gx_beginQuadBatch
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    bl fn_80076BE4
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0xc(r31)
    clrlwi r5, r0, 16
    bl GXBegin
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    b lbl_atn_ComDrawD3TextureMask_execute_0000353C
lbl_atn_ComDrawD3TextureMask_execute_000034E8:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
lbl_atn_ComDrawD3TextureMask_execute_0000353C:
    lwz r0, 0x14(r31)
    cmpw r6, r0
    blt lbl_atn_ComDrawD3TextureMask_execute_000034E8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void atn_ComDrawWindow_execute(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    mr r30, r3
    lwz r3, lbl_8087EEE0
    mr r29, r4
    bl gx_applyRenderState
    li r3, 0x1
    bl GXInitLightDistAttn
    li r3, 0x2
    bl GXClearVtxDesc
    li r3, 0x2
    bl GXSetNumTevStages
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl GXSetTevSwapModeTable
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    bl GXSetTevSwapMode
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl GXSetTevOrder
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl GXSetTevOrder
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xc
    li r7, 0xf
    bl GXSetTevColorIn
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x4
    li r7, 0x7
    bl GXSetTevColorOp
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl GXSetTevIndirect
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl GXInitLightSpot
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl __GXSetVtxDesc
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawWindow_execute_00003794
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    b lbl_atn_ComDrawWindow_execute_000037F0
lbl_atn_ComDrawWindow_execute_00003794:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl gx_setRenderStateParam
    lwz r27, lbl_8087EEE0
    li r4, 0x8
    lbz r28, 0x30(r30)
    li r5, 0x1
    mr r3, r27
    bl gx_setRenderStateParam
    mr r3, r27
    li r4, 0x9
    li r5, 0x2
    bl gx_setRenderStateParam
    mr r3, r27
    mr r5, r28
    li r4, 0xa
    bl gx_setRenderStateParam
    addi r3, r29, 0x15c
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
lbl_atn_ComDrawWindow_execute_000037F0:
    lwz r0, 0x34(r30)
    cmpwi r0, 0x0
    beq lbl_atn_ComDrawWindow_execute_00003820
    cmpwi r0, 0x1
    beq lbl_atn_ComDrawWindow_execute_00003838
    cmpwi r0, 0x2
    beq lbl_atn_ComDrawWindow_execute_00003850
    cmpwi r0, 0x3
    beq lbl_atn_ComDrawWindow_execute_00003868
    cmpwi r0, 0x4
    beq lbl_atn_ComDrawWindow_execute_00003880
    b lbl_atn_ComDrawWindow_execute_00003894
lbl_atn_ComDrawWindow_execute_00003820:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawWindow_execute_00003894
lbl_atn_ComDrawWindow_execute_00003838:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawWindow_execute_00003894
lbl_atn_ComDrawWindow_execute_00003850:
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawWindow_execute_00003894
lbl_atn_ComDrawWindow_execute_00003868:
    li r3, 0x1
    li r4, 0x0
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
    b lbl_atn_ComDrawWindow_execute_00003894
lbl_atn_ComDrawWindow_execute_00003880:
    li r3, 0x1
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    bl GXSetTevAlphaIn
lbl_atn_ComDrawWindow_execute_00003894:
    bl __GXInitVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xe
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawWindow_execute_00003938
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    b lbl_atn_ComDrawWindow_execute_00003998
lbl_atn_ComDrawWindow_execute_00003938:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
lbl_atn_ComDrawWindow_execute_00003998:
    mr r27, r30
    li r31, 0x0
    lis r28, 0xcc01
    li r29, 0x4
lbl_atn_ComDrawWindow_execute_000039A8:
    lwz r4, lbl_8087EEB0
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x10
    bl fn_800763FC
    cmplwi r31, 0x4
    bge lbl_atn_ComDrawWindow_execute_000039EC
    lwz r4, 0x28(r30)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_atn_ComDrawWindow_execute_000039D8
    b lbl_atn_ComDrawWindow_execute_000039E0
lbl_atn_ComDrawWindow_execute_000039D8:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_atn_ComDrawWindow_execute_000039E0:
    li r5, 0x1
    bl fn_800763FC
    b lbl_atn_ComDrawWindow_execute_00003A10
lbl_atn_ComDrawWindow_execute_000039EC:
    lwz r4, 0x2c(r30)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_atn_ComDrawWindow_execute_00003A00
    b lbl_atn_ComDrawWindow_execute_00003A08
lbl_atn_ComDrawWindow_execute_00003A00:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_atn_ComDrawWindow_execute_00003A08:
    li r5, 0x1
    bl fn_800763FC
lbl_atn_ComDrawWindow_execute_00003A10:
    lwz r3, lbl_8087EEE0
    bl gx_applyRenderState
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    li r4, 0x0
    mtctr r29
lbl_atn_ComDrawWindow_execute_00003A30:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_atn_ComDrawWindow_execute_00003A58
    lwz r0, 0x8(r27)
    add r3, r0, r4
    lfsx f0, r4, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r28)
    stfs f1, -0x8000(r28)
    b lbl_atn_ComDrawWindow_execute_00003A78
lbl_atn_ComDrawWindow_execute_00003A58:
    lwz r0, 0x8(r27)
    add r3, r0, r4
    lfsx f0, r4, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r28)
    stfs f1, -0x8000(r28)
    stfs f2, -0x8000(r28)
lbl_atn_ComDrawWindow_execute_00003A78:
    lwz r0, 0x8(r27)
    add r3, r0, r4
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lwz r0, 0x8(r27)
    add r3, r0, r4
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r28)
    stfs f1, -0x8000(r28)
    lwz r0, 0x8(r27)
    add r3, r0, r4
    addi r4, r4, 0x20
    lfs f1, 0x1c(r3)
    lfs f0, 0x18(r3)
    stfs f0, -0x8000(r28)
    stfs f1, -0x8000(r28)
    bdnz lbl_atn_ComDrawWindow_execute_00003A30
    addi r31, r31, 0x1
    addi r27, r27, 0x4
    cmplwi r31, 0x8
    blt lbl_atn_ComDrawWindow_execute_000039A8
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl GXSetTevSwapMode
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetTevAlphaIn
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void atn_ComDrawLine_destructor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_atn_ComDrawLine_destructor_00003B38
    cmpwi r4, 0x0
    ble lbl_atn_ComDrawLine_destructor_00003B38
    bl dtor_80084684
lbl_atn_ComDrawLine_destructor_00003B38:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void atn_ComDrawTextureAdd_destructor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_atn_ComDrawTextureAdd_destructor_00003B78
    cmpwi r4, 0x0
    ble lbl_atn_ComDrawTextureAdd_destructor_00003B78
    bl dtor_80084684
lbl_atn_ComDrawTextureAdd_destructor_00003B78:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void atn_ComDrawTextureMono_destructor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_atn_ComDrawTextureMono_destructor_00003BB8
    cmpwi r4, 0x0
    ble lbl_atn_ComDrawTextureMono_destructor_00003BB8
    bl dtor_80084684
lbl_atn_ComDrawTextureMono_destructor_00003BB8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void atn_ComDrawTextureMaskMono_destructor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_atn_ComDrawTextureMaskMono_destructor_00003BF8
    cmpwi r4, 0x0
    ble lbl_atn_ComDrawTextureMaskMono_destructor_00003BF8
    bl dtor_80084684
lbl_atn_ComDrawTextureMaskMono_destructor_00003BF8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void atn_ComDrawFontSideFade_destructor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_atn_ComDrawFontSideFade_destructor_00003C38
    cmpwi r4, 0x0
    ble lbl_atn_ComDrawFontSideFade_destructor_00003C38
    bl dtor_80084684
lbl_atn_ComDrawFontSideFade_destructor_00003C38:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void atn_ComDrawColliObject_destructor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_atn_ComDrawColliObject_destructor_00003C78
    cmpwi r4, 0x0
    ble lbl_atn_ComDrawColliObject_destructor_00003C78
    bl dtor_80084684
lbl_atn_ComDrawColliObject_destructor_00003C78:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void atn_ComDrawColliTree_destructor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_atn_ComDrawColliTree_destructor_00003CB8
    cmpwi r4, 0x0
    ble lbl_atn_ComDrawColliTree_destructor_00003CB8
    bl dtor_80084684
lbl_atn_ComDrawColliTree_destructor_00003CB8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void atn_ComDrawD3TextureMask_destructor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_atn_ComDrawD3TextureMask_destructor_00003CF8
    cmpwi r4, 0x0
    ble lbl_atn_ComDrawD3TextureMask_destructor_00003CF8
    bl dtor_80084684
lbl_atn_ComDrawD3TextureMask_destructor_00003CF8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void atn_ComDrawWindow_destructor(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_atn_ComDrawWindow_destructor_00003D38
    cmpwi r4, 0x0
    ble lbl_atn_ComDrawWindow_destructor_00003D38
    bl dtor_80084684
lbl_atn_ComDrawWindow_destructor_00003D38:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
