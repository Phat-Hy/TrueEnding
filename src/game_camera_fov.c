#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void sys_vector_pushBack(void);
extern void actor_validateIndex(void);
extern void actor_dispatchMessage(void);
extern void ui_drawColoredQuad(void);
extern void menu_initWindowBuffer(void);
extern void talk_parseQuotedString(void);
extern void talk_scanQuotedString(void);
extern void talk_setSpeakerName(void);
extern void boss_initActionStream(void);
extern void mem_free(void);
extern void route_createSegment(void);
extern void node_createNamedChild(void);
extern void atn_Model_findBoneIndex(void);
extern void skin_applyWeights(void);
extern void morph_reset(void);
extern void ref_releaseHandle(void);
extern void morph_updateMesh(void);
extern void str_parseInt(void);
extern void str_skipWhitespace(void);
extern void particle_getEmitterContext(void);
extern void fn_800E0AB0(void);
extern void cam_findTargetIndex(void);
extern void system_getNextSequenceId(void);
extern void skill_findNodeById(void);
extern void equip_getGlobalManager(void);
extern void boss_updatePhaseState(void);
extern void npc_getDialogController(void);
extern void quest_updateFlow(void);
extern void dialog_renderWindow(void);
extern void dialog_updateScriptState(void);
extern void actor_setState(void);
extern void bgm_getGlobalManager(void);
extern void task_findEntryById(void);
extern void res_MsgHandle_constructor(void);
extern void res_MsgHandle_destructor(void);
extern void res_MsgHandle_update(void);
extern void res_findResourceSlot(void);
extern void fn_80244CCC(void);
extern void fn_80244FC0(void);
extern void fn_802D8540(void);
extern void fn_802D8550(void);
extern void fn_802E1290(void);
extern void fn_802E1414(void);
extern void fn_802E1624(void);
extern void fn_802E177C(void);
extern void fn_802E1A0C(void);
extern void fn_802E5B30(void);
extern void world_setLocalFlag(void);
extern void dungeon_findArenaNodeByCoords(void);
extern void boss_getOffset54(void);
extern void boss_getOffset50(void);
extern void atn_LoadHandle_constructor(void);
extern void atn_LoadHandle_isLoading(void);
extern void rand_Mersenne_constructor(void);
extern void printf(void);
extern void strcmp(void);
extern void strncmp(void);
extern void abort(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80747654[];
extern u8 lbl_807479E8[];
extern u8 lbl_80747B10[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80786F88[];
extern u8 lbl_80786F9C[];
extern u8 lbl_807870F8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C83F8[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_808845F0;
extern u32 lbl_80884600;
extern u32 lbl_80884668;
extern u32 lbl_8088466C;
extern u32 lbl_80884670;
extern u32 lbl_80884674;
extern u32 lbl_80884678;
extern u32 lbl_8088467C;
extern u32 lbl_80884680;
extern u32 lbl_80884684;
extern u32 lbl_80884688;
extern u32 lbl_8088468C;
extern u32 lbl_80884690;
extern u32 lbl_80884694;
extern u32 lbl_80884698;

/* Function declarations */
void fn_802DDBB0(void);
f32 fn_802DDC2C(void);
f32 fn_802DDC34(void);
void fn_802DDC3C(void);
void fn_802DDCDC(void);
f32 fn_802DDCF4(void);
void fn_802DDCFC(void);
void fn_802DDD1C(void);
void fn_802DDDB8(void);
void fn_802DE27C(void);
void fn_802DE80C(void);
void fn_802DEB00(void);
void fn_802DEE18(void);
void fn_802DEE28(void);
void fn_802DF384(void);
void fn_802DF398(void);
void fn_802DF428(void);

asm void fn_802DDBB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80747654@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80747654@l
    addi r4, r4, 0x31f
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x16a4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802DDBB0_00000048
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802DDBB0_00000048
    addi r3, r3, 0x10
    bl node_createNamedChild
    stw r3, 0x16a4(r31)
    b lbl_fn_802DDBB0_0000004C
lbl_fn_802DDBB0_00000048:
    li r3, 0x0
lbl_fn_802DDBB0_0000004C:
    lis r4, lbl_80747654@ha
    addi r5, r31, 0x16a8
    addi r4, r4, lbl_80747654@l
    li r6, 0x0
    addi r4, r4, 0x32b
    li r7, 0x0
    bl route_createSegment
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

f32 fn_802DDC2C(void)
{
    return *(f32 *)&lbl_80884668;
}

f32 fn_802DDC34(void)
{
    return *(f32 *)&lbl_80884600;
}

asm void fn_802DDC3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80786F88@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r4, 0xb0
    addi r4, r5, lbl_80786F88@l
    li r5, 0x0
    bl atn_Model_findBoneIndex
    cmpwi r3, 0x0
    bge lbl_fn_802DDC3C_000000CC
    li r3, 0x0
    b lbl_fn_802DDC3C_000000D8
lbl_fn_802DDC3C_000000CC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802DDC3C_000000D8:
    lfs f3, 0x2c(r3)
    lfs f4, 0x1c(r3)
    lfs f5, 0xc(r3)
    lfs f2, 0x5ac(r31)
    lfs f1, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f2, f3, f2
    fadds f1, f4, f1
    stfs f5, 0x8(r1)
    fadds f0, f5, f0
    stfs f1, 0x4(r30)
    stfs f0, 0x0(r30)
    stfs f2, 0x8(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802DDCDC(void)
{
    nofralloc
    lfs f1, lbl_808845F0
    lfs f0, lbl_8088466C
    stfs f1, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

f32 fn_802DDCF4(void)
{
    return *(f32 *)&lbl_80884670;
}

asm void fn_802DDCFC(void)
{
    nofralloc
    lis r4, lbl_807C83F8@ha
    lfs f1, lbl_808845F0
    addi r3, r4, lbl_807C83F8@l
    lfs f0, lbl_80884674
    stfs f1, lbl_807C83F8@l(r4)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

asm void fn_802DDD1C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807479E8@ha
    addi r31, r31, lbl_807479E8@l
    stw r30, 0x18(r1)
    mr r30, r31
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_802DDD1C_000001D8
lbl_fn_802DDD1C_000001A0:
    mr r3, r28
    mr r4, r31
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DDD1C_000001CC
    mulli r0, r29, 0x44
    lis r3, lbl_807479E8@ha
    addi r3, r3, lbl_807479E8@l
    add r3, r3, r0
    lwz r3, 0x40(r3)
    b lbl_fn_802DDD1C_000001E8
lbl_fn_802DDD1C_000001CC:
    addi r31, r31, 0x44
    addi r30, r30, 0x44
    addi r29, r29, 0x1
lbl_fn_802DDD1C_000001D8:
    lwz r0, 0x40(r30)
    cmpwi r0, 0x0
    bge lbl_fn_802DDD1C_000001A0
    li r3, -0x1
lbl_fn_802DDD1C_000001E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802DDDB8(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r30, r3
    mr r31, r5
    bl rand_Mersenne_constructor
    lfs f0, lbl_80884678
    lis r3, lbl_80786F9C@ha
    li r29, 0x0
    li r4, 0x2
    addi r3, r3, lbl_80786F9C@l
    li r0, 0x450
    stw r3, 0x0(r30)
    addi r3, r30, 0x1510
    stw r29, 0x14d4(r30)
    stw r4, 0x14dc(r30)
    stw r4, 0x14e0(r30)
    stw r29, 0x14e4(r30)
    stw r29, 0x14e8(r30)
    stw r29, 0x14ec(r30)
    stfs f0, 0x14f0(r30)
    stw r29, 0x14f4(r30)
    stw r29, 0x14f8(r30)
    stw r29, 0x14fc(r30)
    stw r0, 0x1500(r30)
    bl res_MsgHandle_constructor
    stw r29, 0x151c(r30)
    addi r3, r30, 0x1520
    bl res_MsgHandle_constructor
    addi r3, r30, 0x152c
    bl res_MsgHandle_constructor
    li r4, 0x1
    li r0, 0x712
    stw r29, 0x1538(r30)
    addi r3, r30, 0x1560
    stw r29, 0x153c(r30)
    stw r29, 0x1540(r30)
    stw r29, 0x1544(r30)
    stw r4, 0x1548(r30)
    stw r29, 0x154c(r30)
    stw r29, 0x1550(r30)
    stw r29, 0x1554(r30)
    stw r29, 0x1558(r30)
    stw r0, 0x155c(r30)
    bl morph_reset
    addi r3, r30, 0x1564
    bl res_MsgHandle_constructor
    addi r3, r30, 0x1570
    bl res_MsgHandle_constructor
    addi r3, r30, 0x157c
    bl res_MsgHandle_constructor
    addi r3, r30, 0x1588
    bl res_MsgHandle_constructor
    lfs f3, lbl_8088467C
    li r0, -0x1
    lfs f2, lbl_80884680
    addi r3, r30, 0x15c0
    lfs f1, lbl_80884684
    lfs f0, lbl_80884688
    stw r29, 0x1594(r30)
    stw r29, 0x1598(r30)
    stw r29, 0x159c(r30)
    stfs f3, 0x15a0(r30)
    stfs f3, 0x15a4(r30)
    stfs f3, 0x15a8(r30)
    stw r29, 0x15ac(r30)
    stw r0, 0x15b0(r30)
    stfs f2, 0x15b4(r30)
    stfs f1, 0x15b8(r30)
    stfs f0, 0x15bc(r30)
    bl res_MsgHandle_constructor
    addi r3, r30, 0x15cc
    bl res_MsgHandle_constructor
    addi r28, r30, 0x1630
    stw r29, 0x15d8(r30)
    mr r3, r28
    stw r29, 0x15dc(r30)
    stw r29, 0x15e0(r30)
    stw r29, 0x15e4(r30)
    stw r29, 0x15e8(r30)
    stw r29, 0x15ec(r30)
    stw r29, 0x15f0(r30)
    stw r29, 0x15f4(r30)
    stw r29, 0x15f8(r30)
    stw r29, 0x15fc(r30)
    stw r29, 0x1608(r30)
    stw r29, 0x160c(r30)
    stw r29, 0x1610(r30)
    stw r29, 0x1614(r30)
    stw r29, 0x1618(r30)
    stw r29, 0x161c(r30)
    stw r29, 0x1620(r30)
    stw r29, 0x1624(r30)
    stw r29, 0x1628(r30)
    stw r29, 0x162c(r30)
    bl atn_LoadHandle_constructor
    lwz r4, 0x12a4(r30)
    lis r3, lbl_8078FBB0@ha
    lwz r0, 0x958(r30)
    addi r3, r3, lbl_8078FBB0@l
    oris r4, r4, 0x40
    stw r3, 0x0(r28)
    ori r0, r0, 0x210
    lis r3, lbl_80747B10@ha
    addi r28, r3, lbl_80747B10@l
    stw r4, 0x12a4(r30)
    addi r27, r1, 0x38
    stw r0, 0x958(r30)
    mr r3, r28
    stw r29, 0x1638(r30)
    stw r29, 0x163c(r30)
    stw r29, 0x1640(r30)
    stw r29, 0x1648(r30)
    stw r29, 0x164c(r30)
    stb r29, 0x1650(r30)
    stw r29, 0x1658(r30)
    stw r29, 0x165c(r30)
    stw r29, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r29, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl actor_validateIndex
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r28
    add r7, r28, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl actor_dispatchMessage
    addi r27, r28, 0x18
    stw r29, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r29, 0x30(r1)
    mr r3, r27
    stw r29, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl actor_validateIndex
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r27
    add r7, r27, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl actor_dispatchMessage
    addi r3, r31, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r29, 0x48(r1)
    li r4, 0x0
    stw r29, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r29, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r31, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl talk_setSpeakerName
lbl_fn_802DDDB8_000004F4:
    addi r3, r1, 0x44
    bl talk_parseQuotedString
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802DDDB8_0000058C
    addi r4, r28, 0x2b
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_fn_802DDDB8_0000058C
    mr r3, r26
    addi r4, r28, 0x2c
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_fn_802DDDB8_0000057C
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802DDDB8_00000548
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802DDDB8_0000054C
lbl_fn_802DDDB8_00000548:
    lwz r25, 0x30(r1)
lbl_fn_802DDDB8_0000054C:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl actor_dispatchMessage
lbl_fn_802DDDB8_0000057C:
    addi r3, r1, 0x44
    bl talk_scanQuotedString
    cmpwi r3, 0x0
    bne lbl_fn_802DDDB8_000004F4
lbl_fn_802DDDB8_0000058C:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl boss_initActionStream
    lwz r0, 0x20(r1)
    addi r3, r30, 0x1630
    srwi. r0, r0, 31
    bne lbl_fn_802DDDB8_000005B4
    addi r4, r1, 0x21
    b lbl_fn_802DDDB8_000005B8
lbl_fn_802DDDB8_000005B4:
    lwz r4, 0x28(r1)
lbl_fn_802DDDB8_000005B8:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_80747B10@ha
    addi r3, r30, 0x1510
    addi r31, r31, lbl_80747B10@l
    addi r4, r31, 0x35
    bl res_MsgHandle_destructor
    addi r3, r30, 0x1520
    addi r4, r31, 0x4b
    bl res_MsgHandle_destructor
    addi r3, r30, 0x152c
    addi r4, r31, 0x60
    bl res_MsgHandle_destructor
    addi r3, r30, 0x1564
    addi r4, r31, 0x75
    bl res_MsgHandle_destructor
    addi r3, r30, 0x1570
    addi r4, r31, 0x8a
    bl res_MsgHandle_destructor
    addi r3, r30, 0x157c
    addi r4, r31, 0xa0
    bl res_MsgHandle_destructor
    addi r3, r30, 0x15cc
    addi r4, r31, 0xb6
    bl res_MsgHandle_destructor
    lwz r3, 0x15f8(r30)
    li r7, 0x0
    lwz r0, 0x15ec(r30)
    subf r6, r3, r3
    lwz r4, 0x1628(r30)
    lwz r3, 0x161c(r30)
    subf r0, r0, r0
    subf r5, r4, r4
    lwz r8, 0x1610(r30)
    subf r3, r3, r3
    lwz r9, 0x163c(r30)
    subf r4, r8, r8
    stw r0, 0x15ec(r30)
    subf r0, r9, r9
    stw r6, 0x15f8(r30)
    stw r5, 0x1628(r30)
    stw r4, 0x1610(r30)
    stw r3, 0x161c(r30)
    stw r0, 0x163c(r30)
    stw r7, 0x1644(r30)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802DDDB8_00000688
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_802DDDB8_00000688:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802DDDB8_0000069C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_802DDDB8_0000069C:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802DDDB8_000006B0
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_802DDDB8_000006B0:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802DE27C(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    stw r31, 0x66c(r1)
    mr r31, r3
    stw r30, 0x668(r1)
    stw r29, 0x664(r1)
    stw r28, 0x660(r1)
    lwz r0, 0x14d4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802DE27C_00000C00
    bl boss_updatePhaseState
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    addi r3, r31, 0x1510
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    addi r3, r31, 0x1520
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    addi r3, r31, 0x152c
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    addi r3, r31, 0x15cc
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    addi r3, r31, 0x1564
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    addi r3, r31, 0x1570
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    addi r3, r31, 0x157c
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    addi r3, r31, 0x1630
    bl atn_LoadHandle_isLoading
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    addi r3, r31, 0x1630
    bl boss_getOffset54
    cmpwi r3, 0x0
    beq lbl_fn_802DE27C_00000B94
    bl equip_getGlobalManager
    cmpwi r3, 0x0
    beq lbl_fn_802DE27C_00000B94
    bl equip_getGlobalManager
    bl npc_getDialogController
    cmpwi r3, 0x0
    beq lbl_fn_802DE27C_00000B94
    addi r3, r31, 0x1630
    bl boss_getOffset50
    mr r29, r3
    addi r3, r31, 0x1630
    bl boss_getOffset54
    mr r4, r3
    mr r5, r29
    addi r3, r1, 0x28
    bl menu_initWindowBuffer
    lis r3, lbl_80747B10@ha
    li r29, 0x0
    addi r30, r3, lbl_80747B10@l
lbl_fn_802DE27C_000007E0:
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    mr r28, r3
    addi r4, r30, 0xcb
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000864
lbl_fn_802DE27C_000007FC:
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    mr r28, r3
    bl equip_getGlobalManager
    bl npc_getDialogController
    mr r4, r28
    bl cam_findTargetIndex
    cmpwi r3, 0x0
    stw r3, 0x18(r1)
    beq lbl_fn_802DE27C_00000834
    addi r3, r31, 0x15e8
    addi r4, r1, 0x18
    bl fn_80244CCC
lbl_fn_802DE27C_00000834:
    cmpwi r28, 0x0
    bne lbl_fn_802DE27C_000007FC
    addi r3, r31, 0x15e8
    bl fn_800E0AB0
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000B84
    lwz r4, 0x15e4(r31)
    addi r3, r31, 0x15e8
    bl fn_802D8550
    lwz r0, 0x0(r3)
    stw r0, 0x15e0(r31)
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_00000864:
    mr r3, r28
    addi r4, r30, 0xd8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_000008B0
    stw r29, 0x14(r1)
lbl_fn_802DE27C_0000087C:
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    cmpwi r3, 0x0
    stw r3, 0x14(r1)
    beq lbl_fn_802DE27C_000008A0
    addi r3, r31, 0x15f4
    addi r4, r1, 0x14
    bl sys_vector_pushBack
lbl_fn_802DE27C_000008A0:
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_fn_802DE27C_0000087C
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_000008B0:
    mr r3, r28
    addi r4, r30, 0xe2
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_0000090C
lbl_fn_802DE27C_000008C4:
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    mr r28, r3
    bl bgm_getGlobalManager
    mr r4, r28
    bl skill_findNodeById
    cmpwi r28, 0x0
    stw r3, 0x10(r1)
    beq lbl_fn_802DE27C_00000900
    cmpwi r3, 0x0
    beq lbl_fn_802DE27C_00000900
    addi r3, r31, 0x1624
    addi r4, r1, 0x10
    bl fn_802DE80C
lbl_fn_802DE27C_00000900:
    cmpwi r28, 0x0
    bne lbl_fn_802DE27C_000008C4
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_0000090C:
    mr r3, r28
    addi r4, r30, 0xed
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000968
lbl_fn_802DE27C_00000920:
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    mr r28, r3
    bl bgm_getGlobalManager
    mr r4, r28
    bl skill_findNodeById
    cmpwi r28, 0x0
    stw r3, 0xc(r1)
    beq lbl_fn_802DE27C_0000095C
    cmpwi r3, 0x0
    beq lbl_fn_802DE27C_0000095C
    addi r3, r31, 0x1618
    addi r4, r1, 0xc
    bl fn_80244FC0
lbl_fn_802DE27C_0000095C:
    cmpwi r28, 0x0
    bne lbl_fn_802DE27C_00000920
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_00000968:
    mr r3, r28
    addi r4, r30, 0xfd
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_000009C8
lbl_fn_802DE27C_0000097C:
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    mr r28, r3
    bl equip_getGlobalManager
    bl npc_getDialogController
    mr r4, r28
    bl cam_findTargetIndex
    cmpwi r28, 0x0
    stw r3, 0x8(r1)
    beq lbl_fn_802DE27C_000009BC
    cmpwi r3, 0x0
    beq lbl_fn_802DE27C_000009BC
    addi r3, r31, 0x160c
    addi r4, r1, 0x8
    bl fn_80244CCC
lbl_fn_802DE27C_000009BC:
    cmpwi r28, 0x0
    bne lbl_fn_802DE27C_0000097C
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_000009C8:
    mr r3, r28
    addi r4, r30, 0x10d
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000A58
    b lbl_fn_802DE27C_00000A44
lbl_fn_802DE27C_000009E0:
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    lbz r0, 0x0(r3)
    mr r28, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_802DE27C_00000A44
    cmpwi r0, 0x23
    beq lbl_fn_802DE27C_00000A44
    addi r4, r30, 0x119
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_fn_802DE27C_00000B84
    mr r3, r28
    bl fn_802DDD1C
    cmpwi r3, 0x0
    stw r3, 0x20(r1)
    ble lbl_fn_802DE27C_00000A44
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    stw r3, 0x24(r1)
    addi r3, r31, 0x1638
    addi r4, r1, 0x20
    bl fn_802DEB00
lbl_fn_802DE27C_00000A44:
    addi r3, r1, 0x28
    bl talk_scanQuotedString
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_000009E0
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_00000A58:
    mr r3, r28
    addi r4, r30, 0x126
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000A9C
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    mr r28, r3
    bl equip_getGlobalManager
    bl npc_getDialogController
    mr r4, r28
    bl cam_findTargetIndex
    cmpwi r3, 0x0
    beq lbl_fn_802DE27C_00000B84
    stw r3, 0x15ac(r31)
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_00000A9C:
    mr r3, r28
    addi r4, r30, 0x133
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000AC4
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    stw r3, 0x1500(r31)
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_00000AC4:
    mr r3, r28
    addi r4, r30, 0x143
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000AEC
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    stw r3, 0x155c(r31)
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_00000AEC:
    mr r3, r28
    addi r4, r30, 0x152
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000B14
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    stfs f1, 0x14f0(r31)
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_00000B14:
    mr r3, r28
    addi r4, r30, 0x15f
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000B5C
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    stfs f1, 0x15b4(r31)
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    stfs f1, 0x15b8(r31)
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    stfs f1, 0x15bc(r31)
    b lbl_fn_802DE27C_00000B84
lbl_fn_802DE27C_00000B5C:
    mr r3, r28
    addi r4, r30, 0x16e
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000B84
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    mr r4, r3
    addi r3, r31, 0x1588
    bl res_MsgHandle_destructor
lbl_fn_802DE27C_00000B84:
    addi r3, r1, 0x28
    bl talk_scanQuotedString
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_000007E0
lbl_fn_802DE27C_00000B94:
    lwz r0, 0x7ec(r31)
    li r28, 0x0
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    b lbl_fn_802DE27C_00000BD0
lbl_fn_802DE27C_00000BB4:
    mr r4, r28
    addi r3, r31, 0x1624
    bl fn_802DEE18
    lwz r3, 0x0(r3)
    mr r4, r31
    bl fn_802E5B30
    addi r28, r28, 0x1
lbl_fn_802DE27C_00000BD0:
    addi r3, r31, 0x1624
    bl particle_getEmitterContext
    cmplw r28, r3
    blt lbl_fn_802DE27C_00000BB4
    mr r3, r31
    bl fn_802E1A0C
    li r0, 0x1
    stw r0, 0x14d4(r31)
    addi r3, r31, 0xb0
    li r4, 0x4
    bl fn_802D8540
    b lbl_fn_802DE27C_00000C38
lbl_fn_802DE27C_00000C00:
    cmpwi r0, 0x1
    bne lbl_fn_802DE27C_00000C28
    addi r3, r3, 0x1588
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802DE27C_00000C38
    li r0, 0x2
    stw r0, 0x14d4(r31)
    li r3, 0x1
    b lbl_fn_802DE27C_00000C3C
lbl_fn_802DE27C_00000C28:
    cmpwi r0, 0x2
    bne lbl_fn_802DE27C_00000C38
    li r3, 0x1
    b lbl_fn_802DE27C_00000C3C
lbl_fn_802DE27C_00000C38:
    li r3, 0x0
lbl_fn_802DE27C_00000C3C:
    lwz r0, 0x674(r1)
    lwz r31, 0x66c(r1)
    lwz r30, 0x668(r1)
    lwz r29, 0x664(r1)
    lwz r28, 0x660(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_802DE80C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_802DE80C_00000CB0
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r3, 0x0(r3)
    slwi r0, r0, 2
    lwz r4, 0x0(r4)
    stwx r4, r3, r0
    b lbl_fn_802DE80C_00000F30
lbl_fn_802DE80C_00000CB0:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_802DE80C_00000CE8
    lis r4, lbl_80747B10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747B10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x178
    addi r3, r3, 0xa0
    crclr 6
    bl printf
    bl abort
lbl_fn_802DE80C_00000CE8:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_802DE80C_00000D50
    lis r4, lbl_80747B10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747B10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x178
    addi r3, r3, 0xa0
    crclr 6
    bl printf
    bl abort
lbl_fn_802DE80C_00000D50:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_802DE80C_00000DA0
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_802DE80C_00000D94
    addi r3, r1, 0x10
lbl_fn_802DE80C_00000D94:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_802DE80C_00000DE4
lbl_fn_802DE80C_00000DA0:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_802DE80C_00000DDC
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802DE80C_00000DD0
    addi r3, r1, 0x10
lbl_fn_802DE80C_00000DD0:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_802DE80C_00000DE4
lbl_fn_802DE80C_00000DDC:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_802DE80C_00000DE4:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_802DE80C_00000E18
    lis r4, lbl_80747B10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747B10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x178
    addi r3, r3, 0xa0
    crclr 6
    bl printf
    bl abort
lbl_fn_802DE80C_00000E18:
    slwi r3, r31, 2
    bl mem_free
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_802DE80C_00000E4C
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl printf
    bl abort
lbl_fn_802DE80C_00000E4C:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    lwz r4, 0x0(r30)
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_802DE80C_00000F30
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802DE80C_00000F30
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_802DE80C_00000F30:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802DEB00(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_802DEB00_00000FB0
    addi r6, r6, 0x1
    lwz r5, 0x0(r3)
    subi r0, r6, 0x1
    stw r6, 0x4(r3)
    slwi r0, r0, 3
    lwz r3, 0x0(r4)
    add r5, r5, r0
    lwz r0, 0x4(r4)
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    b lbl_fn_802DEB00_00001248
lbl_fn_802DEB00_00000FB0:
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_802DEB00_00000FE8
    lis r4, lbl_80747B10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747B10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x178
    addi r3, r3, 0xa0
    crclr 6
    bl printf
    bl abort
lbl_fn_802DEB00_00000FE8:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x2000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_802DEB00_00001050
    lis r4, lbl_80747B10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747B10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x178
    addi r3, r3, 0xa0
    crclr 6
    bl printf
    bl abort
lbl_fn_802DEB00_00001050:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_802DEB00_000010A0
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_802DEB00_00001094
    addi r3, r1, 0x8
lbl_fn_802DEB00_00001094:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_802DEB00_000010E4
lbl_fn_802DEB00_000010A0:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_802DEB00_000010DC
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802DEB00_000010D0
    addi r3, r1, 0x8
lbl_fn_802DEB00_000010D0:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_802DEB00_000010E4
lbl_fn_802DEB00_000010DC:
    lis r3, 0x2000
    subi r28, r3, 0x1
lbl_fn_802DEB00_000010E4:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_802DEB00_00001118
    lis r4, lbl_80747B10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80747B10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x178
    addi r3, r3, 0xa0
    crclr 6
    bl printf
    bl abort
lbl_fn_802DEB00_00001118:
    slwi r3, r28, 3
    bl mem_free
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_802DEB00_0000114C
    lis r3, __files@ha
    lis r4, lbl_807870F8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807870F8@l
    crclr 6
    bl printf
    bl abort
lbl_fn_802DEB00_0000114C:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r5, r0, 3
    lwz r3, 0x0(r30)
    stw r28, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r4, r0, 3
    lwz r0, 0x4(r30)
    add r4, r31, r4
    stwux r3, r4, r5
    stw r0, 0x4(r4)
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    slwi r0, r0, 3
    lwz r4, 0x4(r29)
    add r6, r3, r0
    lwz r7, 0x0(r29)
    slwi r0, r4, 3
    add r5, r7, r0
    addi r0, r5, 0x7
    subf r0, r7, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r5, r7
    ble lbl_fn_802DEB00_000011F8
lbl_fn_802DEB00_000011C0:
    subic. r6, r6, 0x8
    subi r5, r5, 0x8
    beq lbl_fn_802DEB00_000011DC
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x0(r6)
    stw r0, 0x4(r6)
lbl_fn_802DEB00_000011DC:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_802DEB00_000011C0
lbl_fn_802DEB00_000011F8:
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x14
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_802DEB00_00001248
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802DEB00_00001248
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_802DEB00_00001248:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802DEE18(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_802DEE28(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    bl _savegpr_26
    lwz r4, 0x1540(r3)
    mr r31, r3
    lwz r0, 0x1544(r3)
    cmpw r4, r0
    beq lbl_fn_802DEE28_0000134C
    cmpwi r4, 0x1
    bne lbl_fn_802DEE28_000012D0
    lwz r3, lbl_8087F430
    li r4, 0xb
    li r5, 0x1
    bl world_setLocalFlag
    lwz r3, 0x1648(r31)
    addi r0, r3, 0x1
    stw r0, 0x1648(r31)
    b lbl_fn_802DEE28_00001344
lbl_fn_802DEE28_000012D0:
    cmpwi r4, 0x2
    bne lbl_fn_802DEE28_000012F8
    lwz r3, lbl_8087F430
    li r4, 0xa
    li r5, 0x1
    bl world_setLocalFlag
    lwz r3, 0x1648(r31)
    addi r0, r3, 0x1
    stw r0, 0x1648(r31)
    b lbl_fn_802DEE28_00001344
lbl_fn_802DEE28_000012F8:
    cmpwi r4, 0x3
    bne lbl_fn_802DEE28_00001320
    lwz r3, lbl_8087F430
    li r4, 0xb
    li r5, 0x1
    bl world_setLocalFlag
    lwz r3, 0x1648(r31)
    addi r0, r3, 0x1
    stw r0, 0x1648(r31)
    b lbl_fn_802DEE28_00001344
lbl_fn_802DEE28_00001320:
    cmpwi r4, 0x4
    bne lbl_fn_802DEE28_00001344
    lwz r3, lbl_8087F430
    li r4, 0xa
    li r5, 0x1
    bl world_setLocalFlag
    lwz r3, 0x1648(r31)
    addi r0, r3, 0x1
    stw r0, 0x1648(r31)
lbl_fn_802DEE28_00001344:
    lwz r0, 0x1540(r31)
    stw r0, 0x1544(r31)
lbl_fn_802DEE28_0000134C:
    lwz r3, 0x154c(r31)
    lwz r0, 0x1550(r31)
    cmpw r3, r0
    beq lbl_fn_802DEE28_000013C8
    lwz r3, lbl_8087F4A0
    li r29, 0x0
    lfs f31, lbl_8088467C
    lwz r26, 0x48(r3)
    b lbl_fn_802DEE28_000013B8
lbl_fn_802DEE28_00001370:
    lwz r0, 0x48(r26)
    cmpwi r0, 0x444
    bne lbl_fn_802DEE28_000013B4
    stw r29, 0x78(r1)
    mr r3, r26
    addi r4, r1, 0x78
    stw r29, 0x7c(r1)
    stw r29, 0x80(r1)
    stw r29, 0x84(r1)
    stw r29, 0x88(r1)
    stfs f31, 0x8c(r1)
    stfs f31, 0x90(r1)
    stfs f31, 0x94(r1)
    lwz r12, 0x0(r26)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802DEE28_000013B4:
    lwz r26, 0x5c(r26)
lbl_fn_802DEE28_000013B8:
    cmpwi r26, 0x0
    bne lbl_fn_802DEE28_00001370
    lwz r0, 0x154c(r31)
    stw r0, 0x1550(r31)
lbl_fn_802DEE28_000013C8:
    lwz r3, 0x1554(r31)
    lwz r0, 0x1558(r31)
    cmpw r3, r0
    beq lbl_fn_802DEE28_00001500
    cmpwi r3, 0x1
    bne lbl_fn_802DEE28_0000145C
    lwz r3, 0x15f8(r31)
    lwz r0, 0x15e4(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802DEE28_000013F4
    b lbl_fn_802DEE28_000014F8
lbl_fn_802DEE28_000013F4:
    lwz r5, 0x15f4(r31)
    slwi r0, r0, 2
    lwz r3, lbl_8087F4A0
    li r4, 0x6dd6
    lwzx r5, r5, r0
    bl dungeon_findArenaNodeByCoords
    cmpwi r3, 0x0
    beq lbl_fn_802DEE28_000014F8
    lfs f0, lbl_8088467C
    li r0, 0x0
    li r4, 0x1
    stw r4, 0x38(r1)
    addi r4, r1, 0x38
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802DEE28_000014F8
    b lbl_fn_802DEE28_000014F8
lbl_fn_802DEE28_0000145C:
    cmpwi r3, 0x2
    bne lbl_fn_802DEE28_000014F8
    lwz r28, 0x15e4(r31)
    li r27, 0x0
    lfs f31, lbl_8088467C
    li r26, 0x0
    li r29, 0x2
    li r30, 0x0
    b lbl_fn_802DEE28_000014EC
lbl_fn_802DEE28_00001480:
    lwz r5, 0x15f4(r31)
    li r4, 0x6dd6
    lwz r3, lbl_8087F4A0
    lwzx r5, r5, r26
    bl dungeon_findArenaNodeByCoords
    cmpwi r3, 0x0
    beq lbl_fn_802DEE28_000014E4
    cmplw r27, r28
    lwz r0, 0x54(r3)
    beq lbl_fn_802DEE28_000014E4
    cmpwi r0, 0x1
    bne lbl_fn_802DEE28_000014E4
    stw r29, 0x18(r1)
    addi r4, r1, 0x18
    stw r30, 0x1c(r1)
    stw r30, 0x20(r1)
    stw r30, 0x24(r1)
    stw r30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802DEE28_000014E4:
    addi r26, r26, 0x4
    addi r27, r27, 0x1
lbl_fn_802DEE28_000014EC:
    lwz r0, 0x15f8(r31)
    cmplw r27, r0
    blt lbl_fn_802DEE28_00001480
lbl_fn_802DEE28_000014F8:
    lwz r0, 0x1554(r31)
    stw r0, 0x1558(r31)
lbl_fn_802DEE28_00001500:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802DEE28_0000173C
    lwz r0, 0xd1c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802DEE28_00001524
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0xd1c(r31)
lbl_fn_802DEE28_00001524:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_802DEE28_00001550
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_802DEE28_00001550
    li r3, 0x1
lbl_fn_802DEE28_00001550:
    cmpwi r3, 0x0
    beq lbl_fn_802DEE28_0000156C
    lwz r3, 0x7e0(r31)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_802DEE28_0000156C
    li r0, 0x1
lbl_fn_802DEE28_0000156C:
    cmpwi r0, 0x0
    beq lbl_fn_802DEE28_000015A0
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802DEE28_00001594
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_802DEE28_00001594
    li r3, 0x1
lbl_fn_802DEE28_00001594:
    cmpwi r3, 0x0
    bne lbl_fn_802DEE28_000015A0
    li r4, 0x1
lbl_fn_802DEE28_000015A0:
    cmpwi r4, 0x0
    beq lbl_fn_802DEE28_000015F4
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802DEE28_000015F4
    lwz r0, 0x14dc(r31)
    cmpwi r0, 0x3
    beq lbl_fn_802DEE28_000015F4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802DEE28_000015F4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802DEE28_000015F4:
    lwz r0, 0x164c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802DEE28_00001674
    lwz r0, 0x1648(r31)
    cmpwi r0, 0x3
    ble lbl_fn_802DEE28_00001674
    li r0, 0x1
    stw r0, 0x164c(r31)
    li r5, 0x0
    li r4, -0x1
    lwz r0, 0x74(r1)
    li r3, 0x271
    stw r5, 0x58(r1)
    clrlwi r0, r0, 4
    stw r5, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r5, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x74(r1)
    stw r4, 0x70(r1)
    bl task_findEntryById
    lis r8, lbl_807C6B90@ha
    mr r4, r3
    mr r5, r31
    mr r6, r31
    addi r3, r1, 0x58
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    bl ui_drawColoredQuad
lbl_fn_802DEE28_00001674:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    lwz r3, 0x15e0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802DEE28_000016B8
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    lfs f3, lbl_8088468C
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x14(r3)
    fadds f0, f3, f0
    stfs f0, 0x538(r31)
    b lbl_fn_802DEE28_000016DC
lbl_fn_802DEE28_000016B8:
    lfs f2, lbl_8088467C
    addi r3, r1, 0x8
    lfs f0, lbl_80884690
    stfs f2, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
lbl_fn_802DEE28_000016DC:
    lfs f3, 0x52c(r31)
    lfs f0, 0x15a4(r31)
    lwz r0, 0x14dc(r31)
    fadds f3, f3, f0
    lfs f0, 0x14f0(r31)
    lfs f5, 0x528(r31)
    cmpwi r0, 0x3
    lfs f4, 0x15a0(r31)
    fadds f3, f3, f0
    fadds f5, f5, f4
    lfs f4, 0x530(r31)
    lfs f0, 0x15a8(r31)
    stfs f5, 0x528(r31)
    fadds f0, f4, f0
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    bne lbl_fn_802DEE28_0000175C
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_802DEE28_0000175C
    lfs f0, lbl_80884694
    fsubs f0, f3, f0
    stfs f0, 0x52c(r31)
    b lbl_fn_802DEE28_0000175C
lbl_fn_802DEE28_0000173C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802DEE28_0000175C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
lbl_fn_802DEE28_0000175C:
    lwz r4, 0x14dc(r31)
    subfic r3, r4, 0x3
    subi r0, r4, 0x3
    or r0, r3, r0
    cmpwi r4, 0x3
    srwi r0, r0, 31
    stw r0, 0xd18(r31)
    bne lbl_fn_802DEE28_0000178C
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r31)
    b lbl_fn_802DEE28_00001798
lbl_fn_802DEE28_0000178C:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r31)
lbl_fn_802DEE28_00001798:
    lwz r4, 0x14fc(r31)
    mr r3, r31
    addi r0, r4, 0x1
    stw r0, 0x14fc(r31)
    bl dialog_updateScriptState
    mr r3, r31
    bl quest_updateFlow
    addi r11, r1, 0xb0
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_802DF384(void)
{
    nofralloc
    lwz r0, 0x151c(r3)
    cmpwi r0, 0x0
    bnelr
    b dialog_renderWindow
    blr
}

asm void fn_802DF398(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14ec(r3)
    stw r31, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl actor_setState
    addi r3, r30, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl morph_updateMesh
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl res_findResourceSlot
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl res_findResourceSlot
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802DF428(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802DF428_000019A8
    cmpwi r4, 0x7
    beq lbl_fn_802DF428_000018C8
    cmpwi r4, 0x8
    beq lbl_fn_802DF428_000018D0
    cmpwi r4, 0x9
    beq lbl_fn_802DF428_00001930
    cmpwi r4, 0xa
    beq lbl_fn_802DF428_00001938
    cmpwi r4, 0x2
    beq lbl_fn_802DF428_00001940
    b lbl_fn_802DF428_00001948
lbl_fn_802DF428_000018C8:
    bl fn_802E1290
    b lbl_fn_802DF428_000019A8
lbl_fn_802DF428_000018D0:
    li r0, 0x0
    stw r0, 0x14ec(r3)
    stw r0, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r30)
    li r0, 0x8
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl actor_setState
    lis r4, lbl_80747B10@ha
    lfs f1, lbl_80884698
    addi r4, r4, lbl_80747B10@l
    addi r3, r1, 0x8
    addi r4, r4, 0x18c
    addi r5, r30, 0x614
    li r6, 0x0
    li r7, -0x1
    bl skin_applyWeights
    addi r3, r1, 0x8
    li r4, -0x1
    bl ref_releaseHandle
    b lbl_fn_802DF428_000019A8
lbl_fn_802DF428_00001930:
    bl fn_802E1414
    b lbl_fn_802DF428_000019A8
lbl_fn_802DF428_00001938:
    bl fn_802E1624
    b lbl_fn_802DF428_000019A8
lbl_fn_802DF428_00001940:
    bl fn_802E177C
    b lbl_fn_802DF428_000019A8
lbl_fn_802DF428_00001948:
    li r31, 0x0
    stw r31, 0x14ec(r3)
    stw r31, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl actor_setState
    addi r3, r30, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl morph_updateMesh
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl res_findResourceSlot
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl res_findResourceSlot
lbl_fn_802DF428_000019A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
